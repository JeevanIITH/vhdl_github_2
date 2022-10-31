--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   12:29:56 08/16/2022
-- Design Name:   
-- Module Name:   D:/vhdl_github_2/vhdl_github_2/mult_revise1/Test_mult_revise1.vhd
-- Project Name:  mult_revise1
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
 
ENTITY Test_mult_revise1 IS
END Test_mult_revise1;
 
ARCHITECTURE behavior OF Test_mult_revise1 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT mul_2
    PORT(
         q : IN  std_logic_vector(3 downto 0);
         m : IN  std_logic_vector(3 downto 0);
         clk : IN  std_logic;
         reset : IN  std_logic;
			res:out std_logic_vector(7 downto 0);
         product1 : OUT  std_logic_vector(3 downto 0);
         product2 : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal q : std_logic_vector(3 downto 0) := (others => '0');
   signal m : std_logic_vector(3 downto 0) := (others => '0');
   signal clk : std_logic := '0';
   signal reset : std_logic := '0';

 	--Outputs
   signal product1 : std_logic_vector(3 downto 0);
   signal product2 : std_logic_vector(3 downto 0);
	signal res: std_logic_vector ( 7 downto 0) ;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: mul_2 PORT MAP (
          q => q,
          m => m,
          clk => clk,
          reset => reset,
          product1 => product1,
          product2 => product2,
			 res=> res
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
		q<="0000";
		m<="0000";
		
		wait for clk_period;
		
		reset<='0';
		q<="1001";
		m<="1001";
		
		wait for 50 ns;
      -- insert stimulus here 
      assert false report "ok" severity failure;
   end process;

END;
