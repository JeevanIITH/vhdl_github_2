--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   17:58:30 07/04/2022
-- Design Name:   
-- Module Name:   J:/vhdl_github_2/vhdl_github_2/ALU1/t_sum2.vhd
-- Project Name:  ALU1
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
 
ENTITY t_sum2 IS
END t_sum2;
 
ARCHITECTURE behavior OF t_sum2 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT sum
    PORT(
         q_in : IN  std_logic;
         m_in : IN  std_logic_vector(7 downto 0);
         clk : IN  std_logic;
         pout1 : OUT  std_logic_vector(3 downto 0);
         pout2 : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal q_in : std_logic := '0';
   signal m_in : std_logic_vector(7 downto 0) := (others => '0');
   signal clk : std_logic := '0';

 	--Outputs
   signal pout1 : std_logic_vector(3 downto 0);
   signal pout2 : std_logic_vector(3 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: sum PORT MAP (
          q_in => q_in,
          m_in => m_in,
          clk => clk,
          pout1 => pout1,
          pout2 => pout2
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
      	

      q_in<="0011";
		m_in<="0011";
		

      -- insert stimulus here 

      wait for 80 ns;
		assert false report "ok" severity failure;
   end process;

END;
