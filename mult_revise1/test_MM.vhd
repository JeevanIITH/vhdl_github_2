--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   18:23:42 09/08/2022
-- Design Name:   
-- Module Name:   D:/vhdl_github_2/vhdl_github_2/mult_revise1/test_MM.vhd
-- Project Name:  mult_revise1
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: left_shift_8_bit
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
 
ENTITY test_MM IS
END test_MM;
 
ARCHITECTURE behavior OF test_MM IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT left_shift_8_bit
    PORT(
         pin : IN  std_logic_vector(3 downto 0);
         reset : IN  std_logic;
         clk : IN  std_logic;
         pout : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal pin : std_logic_vector(3 downto 0) := (others => '0');
   signal reset : std_logic := '0';
   signal clk : std_logic := '0';

 	--Outputs
   signal pout : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: left_shift_8_bit PORT MAP (
          pin => pin,
          reset => reset,
          clk => clk,
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
		pin<="1111";
		
		wait for 40 ns ;

      -- insert stimulus here 

      assert false report "ok" severity failure;
   end process;

END;
