// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// AddMessage<FName> @ 141fed6e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FThreadStats::AddMessage<FName>(FName param_1,Type param_2,FName param_3,bool param_4)

{
  FThreadStats *this;
  FThreadStatsPool *this_00;
  FStatMessage local_18;
  
  if (((param_1 != (FName)0x0) && (!bPrimaryDisableForever)) && (TlsSlot != 0xffffffff)) {
    this = TlsGetValue(TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    local_18.NameAndInfo.Index = param_1.ComparisonIndex.Value;
    local_18.StatData.Pad._0_4_ = param_3.ComparisonIndex.Value;
    local_18.NameAndInfo.Number = param_1.Number & 0xffff0fff | param_2 << 0xc;
    local_18.StatData.Pad._4_4_ = param_3.Number;
    AddStatMessage(this,&local_18);
    if (this->ScopeCount == 0) {
      Flush(this,false,false);
    }
    else if (bIsRawStatsActive != false) {
      FlushRawStats(this,false,false);
    }
  }
  return;
}

