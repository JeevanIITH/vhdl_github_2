----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    19:23:04 06/13/2022 
-- Design Name: 
-- Module Name:    sum - Behavioral 
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

entity sum is
	port (   q_in:in std_logic;
				m_in:in std_logic_vector( 7 downto 0);
				clk:in std_logic;
				product:out std_logic_vector(7 downto 0);
				reset:in std_logic );
				
end sum;

architecture Behavioral of sum is
signal sum_t:std_logic_vector(7 downto 0);
begin

	process(q_in, m_in,reset,clk ) 
		
		begin 
		if (rising_edge(clk) ) then 
				if (reset='1') then 
					sum_t<="00000000";
					product<="00000000";
				end if;
				if ( q_in='0' and reset='0' ) then 
					product<=sum_t( 7 downto 0 ) + "00000000";
					sum_t<=sum_t( 7 downto 0 ) + "00000000";
				end if;
				if ( q_in='1' and reset='0' ) then
					product<=sum_t( 7 downto 0) + m_in( 7 downto 0) ;
					sum_t<=sum_t( 7 downto 0) + m_in( 7 downto 0) ;
				
				end if; 	
		end if;
		end process;
end Behavioral;

