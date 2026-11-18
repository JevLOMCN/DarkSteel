// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// CompareLexical @ 141a7c8c0

int __thiscall FNameEntryId::CompareLexical(FNameEntryId *this,FNameEntryId param_1)

{
  int iVar1;
  
  if (this->Value != param_1.Value) {
    iVar1 = CompareDifferentIdsAlphabetically<1>((FNameEntryId)this->Value,param_1);
    return iVar1;
  }
  return 0;
}

// CompareLexicalSensitive @ 141a7c8e0

int __thiscall FNameEntryId::CompareLexicalSensitive(FNameEntryId *this,FNameEntryId param_1)

{
  int iVar1;
  
  if (this->Value != param_1.Value) {
    iVar1 = CompareDifferentIdsAlphabetically<0>((FNameEntryId)this->Value,param_1);
    return iVar1;
  }
  return 0;
}

// FromValidEName @ 141a803f0

FNameEntryId __cdecl FNameEntryId::FromValidEName(EName param_1)

{
  FLowLevelMemTracker *this;
  undefined4 in_register_0000000c;
  uint in_EDX;
  uchar *puVar1;
  
  if (bNamePoolInitialized) {
    puVar1 = NamePoolData;
  }
  else {
    puVar1 = (uchar *)FNamePool::FNamePool((FNamePool *)NamePoolData);
    bNamePoolInitialized = true;
    this = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      this = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::FinishInitialise(this);
  }
  *(uint *)CONCAT44(in_register_0000000c,param_1) =
       ((FNamePool *)puVar1)->ENameToEntry[in_EDX].Value;
  return (FNameEntryId)param_1;
}

// FromValidENamePostInit @ 141a80470

FNameEntryId __cdecl FNameEntryId::FromValidENamePostInit(EName param_1)

{
  undefined4 in_register_0000000c;
  ulonglong in_RDX;
  
  *(undefined4 *)CONCAT44(in_register_0000000c,param_1) =
       *(undefined4 *)(NamePoolData + (in_RDX & 0xffffffff) * 4 + 0x24040);
  return (FNameEntryId)param_1;
}

