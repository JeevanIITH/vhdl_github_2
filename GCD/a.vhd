----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:43:18 06/27/2022 
-- Design Name: 
-- Module Name:    a - Behavioral 
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

entity xte is
    Port ( a : in  STD_LOGIC_VECTOR (7 downto 0);
           b : in  STD_LOGIC_VECTOR (7 downto 0);
           x : out  STD_LOGIC_VECTOR (2 downto 0));
end xte;

architecture Behavioral of xte is

begin
	process(a,b)
	variable t:std_logic_vector(7 downto 0);
	begin
		t:=a or b;
		if ( t(0)='1') then 
			x<="000";
		elsif ( t(1)='1') then 
			x<="001";
		elsif ( t(2)='1') then 
			x<="010";
		elsif ( t(3)='1') then 
			x<="011";
		elsif ( t(4)='1') then 
			x<="100";
		elsif ( t(5)='1') then 
			x<="101";
		elsif ( t(6)='1') then 
			x<="110";
		elsif ( t(7)='1') then 
			x<="111";
		end if;
	end process;


end Behavioral;

