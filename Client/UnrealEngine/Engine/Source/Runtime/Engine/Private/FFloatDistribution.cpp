// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FFloatDistribution @ 147b39cd0

FFloatDistribution * __thiscall FFloatDistribution::FFloatDistribution(FFloatDistribution *this)

{
  float local_18 [4];
  
  (this->LookupTable).TimeScale = 0.0;
  (this->LookupTable).TimeBias = 0.0;
  (this->LookupTable).Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LookupTable).Values.ArrayNum = 0;
  (this->LookupTable).Values.ArrayMax = 0;
  (this->LookupTable).Op = '\0';
  (this->LookupTable).EntryCount = '\0';
  (this->LookupTable).EntryStride = '\0';
  (this->LookupTable).SubEntryStride = '\0';
  (this->LookupTable).LockFlag = '\0';
  local_18[0] = 0.0;
  local_18[1] = 0.0;
  local_18[2] = 0.0;
  local_18[3] = 0.0;
  BuildConstantLookupTable(&this->LookupTable,1,local_18);
  return this;
}

