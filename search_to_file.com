Objective: To pull the searched items like AIV or ALM into one file
from the DTN file

Code:
  $ inquire file_name "Enter filename"
  $ create 'file_name'
  $ sea *.dtn /win=(0,5) /match=and "AIV(" /output=new.txt
  $ sea *.dtn /win=(0,10) /match=and "WARN("," IF "," C " /output=next.txt
  $ append new.txt 'file_name'
  $ append next.txt 'file_name'
