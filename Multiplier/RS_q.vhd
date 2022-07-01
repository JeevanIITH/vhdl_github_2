----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:12:12 06/13/2022 
-- Design Name: 
-- Module Name:    RS_q - Behavioral 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity RS_q is
port  ( pin:in std_logic_vector(3 downto 0);
			clk:in std_logic;
			str:in std_logic:='0';
			pout:out std_logic );
end RS_q;

architecture Behavioral of RS_q is

begin
	process(pin,clk)
	variable i:integer:=0;
	begin
		if (rising_edge(clk) and str='1') then 
			pout<=pin(i);
			i:=i+1;
		end if;
	
	end process;
end Behavioral;

