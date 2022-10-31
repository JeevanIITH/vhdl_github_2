----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    08:05:47 10/04/2022 
-- Design Name: 
-- Module Name:    register_file - Behavioral 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity register_file is
    Port ( reg_a : out  STD_LOGIC_VECTOR (15 downto 0);
           reg_b : out  STD_LOGIC_VECTOR (15 downto 0);
           reg_w : in  STD_LOGIC_VECTOR (15 downto 0);
           enable_write : in  STD_LOGIC;
           sel_reg_a : in  STD_LOGIC_VECTOR (3 downto 0);
           sel_reg_b : in  STD_LOGIC_VECTOR (3 downto 0);
           sel_reg_w : in  STD_LOGIC_VECTOR (3 downto 0);
           clk : in  STD_LOGIC;
           reset : in  STD_LOGIC);
end register_file;

architecture Behavioral of register_file is 
	type registerFile is array(0 to 15) of std_logic_vector(63 downto 0);
   signal registers : registerFile;

begin
	regFile : process (clk) is
	begin
    if rising_edge(clk) then
      -- Read A and B before bypass
      reg_a <= registers(to_integer(unsigned(sel_reg_a)));
      reg_b <= registers(to_integer(unsigned(sel_reg_b)));
      -- Write and bypass
      if enable_write = '1' then
			if reset='0' then
				registers(to_integer(unsigned(sel_reg_w))) <= reg_w;  -- Write
			else 
				registers(to_integer(unsigned(sel_reg_w))) <= "0000000000000000";  
			end if;
		  
--        if regASel = writeRegSel then  -- Bypass for read A
--          outA <= input;
--        end if;
--        if regBSel = writeRegSel then  -- Bypass for read B
--          outB <= input;
--        end if;
		  
      end if;
    end if;
	end process;


end Behavioral;

