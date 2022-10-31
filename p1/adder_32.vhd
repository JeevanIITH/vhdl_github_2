----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    22:14:06 10/29/2022 
-- Design Name: 
-- Module Name:    adder_32 - Behavioral 
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

entity adder_32 is
    Port ( a : in  STD_LOGIC_VECTOR (31 downto 0);
           b : in  STD_LOGIC_VECTOR (31 downto 0);
           cin : in  STD_LOGIC;
           sum : out  STD_LOGIC_VECTOR (31 downto 0);
           cout : out  STD_LOGIC);
end adder_32;

architecture Behavioral of adder_32 is
		component adder_16 is 
		 Port ( a : in  STD_LOGIC_VECTOR (15 downto 0);
				  b : in  STD_LOGIC_VECTOR (15 downto 0);
				  cin : in  STD_LOGIC;
				  sum : out  STD_LOGIC_VECTOR (15 downto 0);
				  cout : out  STD_LOGIC);
		end component;
		signal carry : std_logic;
begin
		adder1:adder_16 port map(a(15 downto 0) , b(15 downto 0) , cin , sum(15 downto 0) , carry ) ;
		adder2 : adder_16 port map(a(31 downto 16) , b(31 downto 16) ,carry , sum(31 downto 16) , cout ); 

end Behavioral;

