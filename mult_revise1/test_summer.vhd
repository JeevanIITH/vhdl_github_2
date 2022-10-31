--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   16:32:36 09/08/2022
-- Design Name:   
-- Module Name:   D:/vhdl_github_2/vhdl_github_2/mult_revise1/test_summer.vhd
-- Project Name:  mult_revise1
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: sum
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
 
ENTITY test_summer IS
END test_summer;
 
ARCHITECTURE behavior OF test_summer IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT sum
    PORT(
         q_in : IN  std_logic;
         m_in : IN  std_logic_vector(7 downto 0);
         clk : IN  std_logic;
         product : OUT  std_logic_vector(7 downto 0);
         reset : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal q_in : std_logic := '0';
   signal m_in : std_logic_vector(7 downto 0) := (others => '0');
   signal clk : std_logic := '0';
   signal reset : std_logic := '0';

 	--Outputs
   signal product : std_logic_vector(7 downto 0);
   

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: sum PORT MAP (
          q_in => q_in,
          m_in => m_in,
          clk => clk,
          product=>product,
          reset => reset
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
      reset<='1';
		q_in<='0';
		m_in<="00000000";
		wait for clk_period;
		
		reset<='0';
		q_in<='1';
		m_in<="00001001";
		wait for clk_period;
		
		
		
		

      -- insert stimulus here 
		assert false report "ok" severity failure;
      wait;
   end process;

END;
