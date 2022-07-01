--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   15:25:28 06/27/2022
-- Design Name:   
-- Module Name:   D:/vhdl_test_ise-/gcd1/t_2.vhd
-- Project Name:  gcd1
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: gcd
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
 
ENTITY t_2 IS
END t_2;
 
ARCHITECTURE behavior OF t_2 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT gcd
    PORT(
         ain : IN  std_logic_vector(7 downto 0);
         bin : IN  std_logic_vector(7 downto 0);
         clock : IN  std_logic;
         z : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal ain : std_logic_vector(7 downto 0) := (others => '0');
   signal bin : std_logic_vector(7 downto 0) := (others => '0');
   signal clock : std_logic := '0';

 	--Outputs
   signal z : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clock_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: gcd PORT MAP (
          ain => ain,
          bin => bin,
          clock => clock,
          z => z
        );

   -- Clock process definitions
   clock_process :process
   begin
		clock <= '0';
		wait for clock_period/2;
		clock <= '1';
		wait for clock_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      

      -- insert stimulus here 
		ain<="10011000";
		bin<="01010100";
		
		

      wait for 150 ns ;
		assert false report "Test: OK" severity failure;
		
   end process;

END;
