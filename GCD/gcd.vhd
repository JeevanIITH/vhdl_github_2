----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    13:23:17 06/27/2022 
-- Design Name: 
-- Module Name:    gcd - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.numeric_std.all;
use ieee.std_logic_unsigned.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity gcd is
    Port ( ain : in  STD_LOGIC_VECTOR (7 downto 0);
           bin  : in  STD_LOGIC_VECTOR (7 downto 0);
			  clock: in std_logic;
           z : out  STD_LOGIC_VECTOR (7 downto 0));
end gcd;

architecture Behavioral of gcd is
signal k:std_logic_vector(2 downto 0):="000";
signal reg_a:std_logic_vector(7 downto 0):="00000000";
signal reg_b:std_logic_vector(7 downto 0):="00000000";
signal c:std_logic:='0';



	component xte is 
		Port ( a : in  STD_LOGIC_VECTOR (7 downto 0);
           b : in  STD_LOGIC_VECTOR (7 downto 0);
           x : out  STD_LOGIC_VECTOR (2 downto 0));
	end component;

begin
	
	
	tr_zero: xte port map(ain,bin,k); 
	--reg_a<=( others=>'0') & reg_a( 7 downto unsigned(k));
	reg_a<=ain;
	reg_b<=bin;
	
	
	process(clock, ain , bin )
		variable d:integer:=0;
		variable reg_a_v:std_logic_vector(7 downto 0):="00000000";
		variable reg_b_v:std_logic_vector(7 downto 0):="00000000";
		variable start:integer:=0;
	begin 
	
	if (rising_edge(clock) and c='0') then 
		if (start=0) then 
		reg_a_v:=ain;
		reg_b_v:=bin;
		start:=1; 
		end if;
	--------------
		if ( reg_a_v="00000000" ) then
			for i in 1 to d loop
				reg_b_v:=reg_b_v(6 downto 0) & '0';
			end loop;
			z<=reg_b_v;
			c<='1';
			
		elsif ( reg_b_v="00000000") then 
			for i in 1 to d loop
				reg_a_v:=reg_a_v(6 downto 0) & '0';
			end loop;
			z<=reg_a_v;
			c<='1';
			
		end if;
	--------
		if ( reg_a_v(0)='0' and reg_b_v(0)/='0' ) then 
			reg_a_v:='0' & reg_a_v( 7 downto 1) ;
			
		elsif ( reg_a_v(0)/='0' and reg_b_v(0)='0' ) then 
			reg_b_v:='0' & reg_b_v( 7 downto 1);
			
		elsif ( reg_a_v(0)='0' and reg_b_v(0)='0'  ) then 
			d:=d+1;
			reg_a_v:='0' & reg_a_v( 7 downto 1) ;
			reg_b_v:='0' & reg_b_v( 7 downto 1);
			
		else 
			if ( reg_a_v>= reg_b_v ) then
				reg_a_v:=reg_a_v(7 downto 0)- reg_b_v(7 downto 0);
				
			else
				reg_b_v:= reg_b_v(7 downto 0) - reg_a_v(7 downto 0);
				
			end if;
		end if;
	end if;
		
		
	end process;
	
	
	
	
	
	
	
	


end Behavioral;

