// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// AddMessageInner<__int64> @ 145c3b680

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FThreadStats::AddMessageInner<__int64>
          (FThreadStats *this,FName param_1,Type param_2,long64 param_3,bool param_4)

{
  FName local_res10;
  FStatMessage local_18;
  
  local_18.NameAndInfo.Index = param_1.ComparisonIndex.Value;
  local_18.NameAndInfo.Number = param_1.Number & 0xffff0fff | param_2 << 0xc;
  local_res10 = param_1;
  local_18.StatData.Pad = (uchar  [8])param_3;
  AddStatMessage(this,&local_18);
  if (param_2 == Set) {
    FStatsTrace::Set(&local_res10,param_3);
  }
  else {
    if (param_2 != Add) {
      if (param_2 != Subtract) goto LAB_145c3b6f4;
      param_3 = -param_3;
    }
    FStatsTrace::Add(&local_res10,param_3);
  }
LAB_145c3b6f4:
  if (this->ScopeCount == 0) {
    Flush(this,false,false);
    return;
  }
  if (bIsRawStatsActive != false) {
    FlushRawStats(this,false,false);
  }
  return;
}

