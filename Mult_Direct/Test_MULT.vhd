--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   14:02:50 09/09/2022
-- Design Name:   
-- Module Name:   D:/vhdl_github_2/vhdl_github_2/Mult_Direct/Test_MULT.vhd
-- Project Name:  Mult_Direct
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: MUlT
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
 
ENTITY Test_MULT IS
END Test_MULT;
 
ARCHITECTURE behavior OF Test_MULT IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT MUlT
    PORT(
         M : IN  std_logic_vector(3 downto 0);
         Q : IN  std_logic_vector(3 downto 0);
         clk : IN  std_logic;
         reset : IN  std_logic;
         R : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal M : std_logic_vector(3 downto 0) := (others => '0');
   signal Q : std_logic_vector(3 downto 0) := (others => '0');
   signal clk : std_logic := '0';
   signal reset : std_logic := '0';

 	--Outputs
   signal R : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: MUlT PORT MAP (
          M => M,
          Q => Q,
          clk => clk,
          reset => reset,
          R => R
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
		Q<="0000";
		M<="0000";
		
		wait for clk_period;
		
		reset<='0';
		Q<="0011";
		M<="0011";
		
		wait for 40 ns;
		
		
		
		
		Q<="1011";
		M<="0011";
		
		wait for 40 ns; 

      -- insert stimulus here 

      assert false report "ok" severity failure;
   end process;

END;
