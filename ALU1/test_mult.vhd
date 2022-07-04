--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   19:12:03 07/04/2022
-- Design Name:   
-- Module Name:   J:/vhdl_github_2/vhdl_github_2/ALU1/test_mult.vhd
-- Project Name:  ALU1
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: mul_2
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY test_mult IS
END test_mult;
 
ARCHITECTURE behavior OF test_mult IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT mul_2
    PORT(
         q : IN  std_logic_vector(3 downto 0);
         m : IN  std_logic_vector(3 downto 0);
         clk : IN  std_logic;
         str : IN  std_logic;
         product1 : OUT  std_logic_vector(3 downto 0);
         product2 : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal q : std_logic_vector(3 downto 0) := (others => '0');
   signal m : std_logic_vector(3 downto 0) := (others => '0');
   signal clk : std_logic := '0';
   signal str : std_logic := '0';

 	--Outputs
   signal product1 : std_logic_vector(3 downto 0);
   signal product2 : std_logic_vector(3 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: mul_2 PORT MAP (
          q => q,
          m => m,
          clk => clk,
          str => str,
          product1 => product1,
          product2 => product2
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      q<="1010";
		m<="0111";
		str<='1';

      -- insert stimulus here 

      wait for 80 ns ;
		assert false report "ok" severity failure ;
   end process;

END;
