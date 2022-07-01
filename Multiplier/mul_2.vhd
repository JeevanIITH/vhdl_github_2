----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:12:30 06/14/2022 
-- Design Name: 
-- Module Name:    mul_2 - Behavioral 
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
use ieee.std_logic_unsigned.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity mul_2 is
	port (    q:in std_logic_vector(3 downto 0);
				 m:in std_logic_vector(3 downto 0);
				 clk:in std_logic;
				 str:in std_logic;
				 product:out std_logic_vector(7 downto 0) );
end mul_2;

architecture Behavioral of mul_2 is



--Left shift of M at each clock cycle
component left_shift_8_bit is 
port ( pin: in std_logic_vector(3 downto 0);
		 reset: in std_logic;
		 clk: in std_logic;
		 pout: out std_logic_vector(7 downto 0) );
end component;

--Get q(i) at each cycle 
component RS_q is 
port  ( pin:in std_logic_vector(3 downto 0);
			clk:in std_logic;
			str:in std_logic:='0';
			pout:out std_logic );
end component;

--Adder which at the end gives product
component sum is 
port (   	q_in:in std_logic;
				m_in:in std_logic_vector( 7 downto 0);
				clk:in std_logic;
				pout: out std_logic_vector ( 7 downto 0) );
end component ;

signal q0_t:std_logic;
signal m_t:std_logic_vector(7 downto 0):="00000000";
signal m_out:std_logic_vector( 7 downto 0);
--signal sum_t:std_logic_vector(7 downto 0):="00000000";
--signal p:integer:=1;

begin

Q_m:RS_q port map( q,clk,str,q0_t);
M_m:left_shift_8_bit port map(m,str,clk,m_out);
S:sum port map( q0_t,m_out,clk,product);

--process (q0_t,m_out)
--	variable n:integer:=4;
--	variable sum_t:std_logic_vector(7 downto 0):="00000000";
--	begin 
--			if ( q0_t='0' ) then 
--				sum_t:=sum_t( 7 downto 0 ) + "00000000";
--				n:=n-1;
--				if (n=0) then 
--					product<=sum_t;
--				end if;
--			elsif (q0_t='1') then
--				sum_t:=sum_t( 7 downto 0) + m_out( 7 downto 0) ;
--				n:=n-1;
--				if (n=0) then 
--					product<=sum_t ;
--				end if;
--			end if;
--			
--		
--	end process;

end Behavioral;

