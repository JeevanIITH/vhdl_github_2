----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:35:13 06/26/2022 
-- Design Name: 
-- Module Name:    gcd_1 - Behavioral 
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

entity gcd_1 is
    Port ( clock : in  STD_LOGIC;
           a : in  STD_LOGIC_VECTOR (3 downto 0);
           b : in  STD_LOGIC_VECTOR (3 downto 0);
           g : in  STD_LOGIC_VECTOR (3 downto 0));
end gcd_1;

architecture Behavioral of gcd_1 is

	signal reg1:std_logic_vector(3 downto 0):="0000";
	signal reg2:std_logic_vector(3 downto 0):="0000";


begin
	process(clock,a,b)
	begin 
		if ( a="0000") then 
			g<=b;
		elsif (b="0000") then 
			g<=a;
		end if;
	
	
	end process;
end Behavioral;

