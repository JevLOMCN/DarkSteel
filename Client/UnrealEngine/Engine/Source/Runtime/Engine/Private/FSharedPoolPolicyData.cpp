// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// GetPoolBucketIndex @ 147d0be10

uint __thiscall FSharedPoolPolicyData::GetPoolBucketIndex(FSharedPoolPolicyData *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar4 = 0;
  uVar3 = 0x12;
  do {
    uVar5 = uVar3 + (int)uVar4 >> 1;
    if (BucketSizes[uVar5 - 1] < param_1) {
      uVar4 = (ulonglong)uVar5;
      uVar5 = uVar3;
    }
    uVar3 = uVar5;
    uVar5 = (uint)uVar4;
  } while (1 < uVar3 - uVar5);
  if ((BucketSizes[uVar4] < param_1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Size <= BucketSizes[Lower]",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinVertexFactory.cpp"
                         ,0xa9,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if (((uVar5 != 0) && (param_1 <= BucketSizes[uVar5 - 1])) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Lower == 0 ) || ( Size > BucketSizes[Lower-1] )",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinVertexFactory.cpp"
                         ,0xaa,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return uVar5;
}

// GetPoolBucketSize @ 147d0bed0

uint __thiscall FSharedPoolPolicyData::GetPoolBucketSize(FSharedPoolPolicyData *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (0x11 < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Bucket < NumPoolBucketSizes",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinVertexFactory.cpp"
                       ,0xb1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return BucketSizes[param_1];
}

