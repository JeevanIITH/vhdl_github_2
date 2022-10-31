--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   10:09:30 10/04/2022
-- Design Name:   
-- Module Name:   D:/vhdl_github_2/vhdl_github_2/registers/test_register_file.vhd
-- Project Name:  registers
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: register_file
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
 
ENTITY test_register_file IS
END test_register_file;
 
ARCHITECTURE behavior OF test_register_file IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT register_file
    PORT(
         reg_a : OUT  std_logic_vector(15 downto 0);
         reg_b : OUT  std_logic_vector(15 downto 0);
         reg_w : IN  std_logic_vector(15 downto 0);
         enable_write : IN  std_logic;
         sel_reg_a : IN  std_logic_vector(3 downto 0);
         sel_reg_b : IN  std_logic_vector(3 downto 0);
         sel_reg_w : IN  std_logic_vector(3 downto 0);
         clk : IN  std_logic;
         reset : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal reg_w : std_logic_vector(15 downto 0) := (others => '0');
   signal enable_write : std_logic := '0';
   signal sel_reg_a : std_logic_vector(3 downto 0) := (others => '0');
   signal sel_reg_b : std_logic_vector(3 downto 0) := (others => '0');
   signal sel_reg_w : std_logic_vector(3 downto 0) := (others => '0');
   signal clk : std_logic := '0';
   signal reset : std_logic := '0';

 	--Outputs
   signal reg_a : std_logic_vector(15 downto 0);
   signal reg_b : std_logic_vector(15 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: register_file PORT MAP (
          reg_a => reg_a,
          reg_b => reg_b,
          reg_w => reg_w,
          enable_write => enable_write,
          sel_reg_a => sel_reg_a,
          sel_reg_b => sel_reg_b,
          sel_reg_w => sel_reg_w,
          clk => clk,
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
		enable_write <='1';
		reg_w<="0000111100001111";
		sel_reg_w<="0001";
		
		wait for 10 ns;
		
		reg_w<="1111000000001111";
		sel_reg_w<="0010";
		
		wait for 10 ns;
		
		enable_write<='0';
		
      sel_reg_a<="0001";
		sel_reg_b<="0010";
		
		wait for 10 ns;

      -- insert stimulus here 

      assert false report "ok" severity failure;
   end process;

END;
