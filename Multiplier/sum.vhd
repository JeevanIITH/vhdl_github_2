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
				pout1: out std_logic_vector ( 3 downto 0);
			   pout2: out std_logic_vector ( 3 downto 0) );
end sum;

architecture Behavioral of sum is

begin
	process(q_in, m_in ) 
		variable n:integer:=4;
		variable sum_t:std_logic_vector(7 downto 0):="00000000";
		begin 
			
				if ( q_in='0' ) then 
					sum_t:=sum_t( 7 downto 0 ) + "00000000";
					n:=n-1;
					if (n=0) then 
						pout2<=sum_t( 3 downto 0 );
						pout1<=sum_t( 7 downto 4 );
					end if;
				elsif (q_in='1') then
					sum_t:=sum_t( 7 downto 0) + m_in( 7 downto 0) ;
					n:=n-1;
					if (n=0) then 
						pout2<=sum_t( 3 downto 0 );
						pout1<=sum_t( 7 downto 4 );
					end if;
				
			end if;
		end process;

	
end Behavioral;

