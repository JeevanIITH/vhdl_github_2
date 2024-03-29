--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   17:02:22 09/08/2022
-- Design Name:   
-- Module Name:   D:/vhdl_github_2/vhdl_github_2/mult_revise1/test_q.vhd
-- Project Name:  mult_revise1
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: RS_q
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
 
ENTITY test_q IS
END test_q;
 
ARCHITECTURE behavior OF test_q IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT RS_q
    PORT(
         pin : IN  std_logic_vector(3 downto 0);
         clk : IN  std_logic;
         reset : IN  std_logic;
         pout : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal pin : std_logic_vector(3 downto 0) := (others => '0');
   signal clk : std_logic := '0';
   signal reset : std_logic := '0';

 	--Outputs
   signal pout : std_logic;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: RS_q PORT MAP (
          pin => pin,
          clk => clk,
          reset => reset,
          pout => pout
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
		pin<="0000";
		wait for clk_period;
		
		reset<='0';
		pin<="1001";
		
		wait for 40 ns;

      -- insert stimulus here 
		assert false report "ok" severity failure;
      wait;
   end process;

END;
