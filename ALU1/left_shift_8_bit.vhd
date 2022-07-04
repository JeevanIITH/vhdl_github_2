----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    13:12:51 06/12/2022 
-- Design Name: 
-- Module Name:    left_shift_8_bit - Behavioral 
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

entity left_shift_8_bit is
port ( pin: in std_logic_vector(3 downto 0);
		 reset: in std_logic;
		 clk: in std_logic;
		 pout: out std_logic_vector(7 downto 0) );
end left_shift_8_bit;

architecture Behavioral of left_shift_8_bit is
signal reg:std_logic_vector(7 downto 0):="00000000";
signal f:std_logic:='1';
signal m_t:std_logic_vector(7 downto 0);

begin
	
	process(clk,m_t,pin,reset)
	begin
	if (reset='1' and f='1') then 
	reg<= (7 downto pin'length=>'0' ) & pin(3 downto 0);
	f<='0';
	end if;
	if rising_edge(clk)  then
		pout<=reg;
		reg(7)<=reg(6);
		reg(6)<=reg(5);
		reg(5)<=reg(4);
		reg(4)<=reg(3);
		reg(3)<=reg(2);
		reg(2)<=reg(1);
		reg(1)<=reg(0);
		reg(0)<='0';
	end if;
	end process;
	
end Behavioral;

