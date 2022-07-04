--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   19:02:57 07/04/2022
-- Design Name:   
-- Module Name:   J:/vhdl_github_2/vhdl_github_2/ALU1/Test_alu2.vhd
-- Project Name:  ALU1
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: ALU1
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
 
ENTITY Test_alu2 IS
END Test_alu2;
 
ARCHITECTURE behavior OF Test_alu2 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT ALU1
    PORT(
         s : IN  std_logic_vector(3 downto 0);
         clock : IN  std_logic;
         A : IN  std_logic_vector(3 downto 0);
         B : IN  std_logic_vector(3 downto 0);
         cin : IN  std_logic;
         r : OUT  std_logic_vector(3 downto 0);
         sr : OUT  std_logic_vector(3 downto 0);
         cout : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal s : std_logic_vector(3 downto 0) := (others => '0');
   signal clock : std_logic := '0';
   signal A : std_logic_vector(3 downto 0) := (others => '0');
   signal B : std_logic_vector(3 downto 0) := (others => '0');
   signal cin : std_logic := '0';

 	--Outputs
   signal r : std_logic_vector(3 downto 0);
   signal sr : std_logic_vector(3 downto 0);
   signal cout : std_logic;

   -- Clock period definitions
   constant clock_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: ALU1 PORT MAP (
          s => s,
          clock => clock,
          A => A,
          B => B,
          cin => cin,
          r => r,
          sr => sr,
          cout => cout
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
      wait for 10 ns ;
		s<="0100";
		A<="1111";
		B<="0100";
		
		wait for 40 ns;
		
		

      -- insert stimulus here
		assert false report "ok" severity failure ;
   end process;

END;
