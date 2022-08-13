--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   20:08:39 08/12/2022
-- Design Name:   
-- Module Name:   D:/vhdl_github_2/vhdl_github_2/signed_adder_4_bit/test_fou_bit_adder_signed.vhd
-- Project Name:  signed_adder_4_bit
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: four_bit_signed_adder
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
 
ENTITY test_fou_bit_adder_signed IS
END test_fou_bit_adder_signed;
 
ARCHITECTURE behavior OF test_fou_bit_adder_signed IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT four_bit_signed_adder
    PORT(
         a : IN  std_logic_vector(3 downto 0);
         b : IN  std_logic_vector(3 downto 0);
         sum : OUT  std_logic_vector(3 downto 0);
         cin : IN  std_logic;
         cout : OUT  std_logic;
         ovflw : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal a : std_logic_vector(3 downto 0) := (others => '0');
   signal b : std_logic_vector(3 downto 0) := (others => '0');
   signal cin : std_logic := '0';

 	--Outputs
   signal sum : std_logic_vector(3 downto 0);
   signal cout : std_logic;
   signal ovflw : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: four_bit_signed_adder PORT MAP (
          a => a,
          b => b,
          sum => sum,
          cin => cin,
          cout => cout,
          ovflw => ovflw
        );

  
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
		
		--4+4
      a<="0100";
		b<="0100";
		cin<='1';

     

      -- insert stimulus here 

      wait for 10 ns;
		-- 3+5
		a<="0011";
		b<="0101";
		cin<='1';
		
		wait for 10 ns;
		
		--2+6
		a<="0010";
		b<="0110";
		cin<='1';
		
		
		wait for 10 ns;
		
		--1+7
		a<="0001";
		b<="0111";
		cin<='1';
		
		
		
		wait for 10 ns;
		
		-- (-4) + (-5)
		a<="1100";
		b<="1011";
		cin<='1';
		
		
		wait for 10 ns;
		
		-- (-3) + (-6)
		a<="1101";
		b<="1010";
		cin<='1';
		
		wait for 10 ns;
		
		-- (-2) + (-7)
		a<="1110";
		b<="1001";
		cin<='1';
		
		
		wait for 10 ns;
		
		-- (-1) + (-8)
		a<="1111";
		b<="1000";
		cin<='1';
		
		wait for 10 ns;
		
		-- (-8) + (-8)
		
		a<="1000";
		b<="1000";
		cin<='1';
		
		wait for 10 ns;
		
		--(-8) + (-7)
		a<="1000";
		b<="1001";
		cin<='1';
		
		wait for 10 ns;
		
		
		--(-8) + 5
		a<="1000";
		b<="0101";
		cin<='1';
		
		wait for 10 ns;
		
		--(-8) + 6
		a<="1000";
		b<="0110";
		cin<='1';
		
		wait for 10 ns;
		
		a<="1001";
		b<="0111";
		cin<='1';
		
		wait for 10 ns;
		
		
		
		
		wait for 10 ns;
		
		assert false report "ok" severity failure ;
		wait;
   end process;

END;
