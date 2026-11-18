// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// ~TSherwoodSet<int,Experimental::TSherwoodHashKeyFuncs<int,FNoopStruct>_> @ 144d42400

void __thiscall
Experimental::TSherwoodSet<int,Experimental::TSherwoodHashKeyFuncs<int,FNoopStruct>_>::
~TSherwoodSet<int,Experimental::TSherwoodHashKeyFuncs<int,FNoopStruct>_>
          (TSherwoodSet<int,Experimental::TSherwoodHashKeyFuncs<int,FNoopStruct>_> *this)

{
  schar *psVar1;
  
  psVar1 = (this->Table).CurrentData.Distances;
  if (psVar1 != (schar *)0x0) {
    FMemory::Free(psVar1);
    FMemory::Free((this->Table).CurrentData.Keys);
    FMemory::Free((this->Table).CurrentData.Values);
  }
  (this->Table).NumSlotsMinusOne = 0;
  *(undefined8 *)&(this->Table).CurrentData = 0;
  (this->Table).CurrentData.Distances = (schar *)0x0;
  (this->Table).MaxLookups = '\0';
  (this->Table).CurrentData.Keys = (int *)0x0;
  (this->Table).CurrentData.Values = (FNoopStruct *)0x0;
  (this->Table).NumElements = 0;
  return;
}

