// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// GetPoolBucketIndex @ 147b6ae50

uint __thiscall
FGlobalDynamicMeshPoolPolicy::GetPoolBucketIndex(FGlobalDynamicMeshPoolPolicy *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar4 = 0;
  uVar3 = 0x10;
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
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DynamicMeshBuilder.cpp"
                         ,0x35,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if (((uVar5 != 0) && (param_1 <= BucketSizes[uVar5 - 1])) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Lower == 0 ) || ( Size > BucketSizes[Lower-1] )",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DynamicMeshBuilder.cpp"
                         ,0x36,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return uVar5;
}

