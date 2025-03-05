def read_and_modify_mobility_file():
    try:
        # Open input and output files
        with open('grid/5/newNs2mobility110.tcl', 'r') as infile, \
             open('grid/5/newNs2mobility110modified.tcl', 'w') as outfile:
            
            for line in infile:
                # Strip whitespace and newlines
                line = line.strip()
                
                # Skip empty lines
                if not line:
                    continue
                
                # Parse NS-2 mobility format
                if line.startswith('$ns_'):
                    parts = line.split()
                    # Modify speed (10/15 ratio conversion)
                    old_speed = float(parts[7].rstrip('"'))
                    new_speed = round(old_speed * 5 / 15, 2)  # Round to 2 decimal places
                    
                    # Reconstruct the line with new speed
                    parts[7] = f'{new_speed:.2f}"'  # Format to always show 2 decimal places
                    modified_line = ' '.join(parts)
                    outfile.write(modified_line + '\n')
                else:
                    # Write unchanged lines
                    outfile.write(line + '\n')
                    
        print("Modified mobility file has been created successfully.")
                
    except FileNotFoundError:
        print("Error: Input mobility file not found")
    except Exception as e:
        print(f"Error processing file: {str(e)}")

if __name__ == "__main__":
    read_and_modify_mobility_file()