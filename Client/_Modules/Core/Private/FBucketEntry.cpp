// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// GetValueType @ 141a82b50

EValueType __thiscall FHashMapLinearProbingVAlloc::FBucketEntry::GetValueType(FBucketEntry *this)

{
  EValueType EVar1;
  
  if (this->Key < 0xfffffffffffffffe) {
    return Active;
  }
  EVar1 = (int)this->Key + Active;
  if (1 < (int)EVar1) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
  }
  return EVar1;
}

// SetAsActive @ 141a91aa0

void __thiscall
FHashMapLinearProbingVAlloc::FBucketEntry::SetAsActive(FBucketEntry *this,ulong64 param_1)

{
  if (0xfffffffffffffffd < param_1) {
    UE::LLMPrivate::HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
    FWindowsPlatformMisc::RaiseException(1);
    this->Key = param_1;
    return;
  }
  this->Key = param_1;
  return;
}

// SetAsTombstone @ 141a91b10

void __thiscall FHashMapLinearProbingVAlloc::FBucketEntry::SetAsTombstone(FBucketEntry *this)

{
  this->Key = 0xffffffffffffffff;
  return;
}

// SetAsUnallocated @ 141a91b20

void __thiscall FHashMapLinearProbingVAlloc::FBucketEntry::SetAsUnallocated(FBucketEntry *this)

{
  this->Key = 0xfffffffffffffffe;
  return;
}

