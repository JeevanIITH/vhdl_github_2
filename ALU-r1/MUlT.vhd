----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:12:46 09/09/2022 
-- Design Name: 
-- Module Name:    MUlT - Behavioral 
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
USE ieee.numeric_std.ALL;
use ieee.std_logic_unsigned.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity MUlT is
    Port ( M : in  STD_LOGIC_VECTOR (3 downto 0);
           Q : in  STD_LOGIC_VECTOR (3 downto 0);
           clk : in  STD_LOGIC;
           reset : in  STD_LOGIC;
           R : out  STD_LOGIC_VECTOR (7 downto 0));
end MUlT;

architecture Behavioral of MUlT is
signal sum:std_logic_vector(7 downto 0) ;
signal i:integer;
signal store:std_logic_vector(7 downto 0);
signal flag:std_logic;
begin

--	process(reset,clk)
--
--		begin 
--			if (rising_edge(clk) and reset='1') then 
--			sum<="00000000";
--			R<="00000000";
--			store<="00000000";
--			i<=0;
--			flag<='0';
--			end if;
--		end process;
		
	process(M,Q,clk,reset)
		begin
		if (rising_edge(clk) and reset='1') then 
			sum<="00000000";
			R<="00000000";
			store<="00000000";
			i<=0;
			flag<='0';
			end if;
		if (i=4) then 
			sum<="00000000";
			R<="00000000";
			store<="00000000";
			i<=0;
			flag<='0';
		end if;
		if (rising_edge(clk) and reset='0') then 
				if ( Q(i)='0' ) then 
					R<=sum;
					i<=i+1;
					store(7)<=store(6);
						store(6)<=store(5);
						store(5)<=store(4);
						store(4)<=store(3);
						store(3)<=store(2);
						store(2)<=store(1);
						store(1)<=store(0);
						store(0)<='0';
				elsif( Q(i)='1' ) then 
					if ( flag='0' ) then 
						R<=(7 downto 4 =>'0') & M(3 downto 0); 
						sum<=(7 downto 4 =>'0') & M(3 downto 0);
						store(7)<='0';
						store(6)<='0';
						store(5)<='0';
						store(4)<=M(3);
						store(3)<=M(2);
						store(2)<=M(1);
						store(1)<=M(0);
						store(0)<='0';
						flag<='1';
						
					elsif (flag='1') then 
						R<=sum( 7 downto 0) + store(7 downto 0 );
						sum<=sum( 7 downto 0) + store( 7 downto 0);
						store(7)<=store(6);
						store(6)<=store(5);
						store(5)<=store(4);
						store(4)<=store(3);
						store(3)<=store(2);
						store(2)<=store(1);
						store(1)<=store(0);
						store(0)<='0';
					end if;
					i<=i+1;
				end if;
		end if;
		end process;


end Behavioral;

