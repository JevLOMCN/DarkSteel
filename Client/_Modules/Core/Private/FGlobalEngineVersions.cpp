// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// FGlobalEngineVersions @ 1418bbba0

FGlobalEngineVersions * __thiscall
FGlobalEngineVersions::FGlobalEngineVersions(FGlobalEngineVersions *this)

{
  FString *pFVar1;
  int *piVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  wchar_t *pwVar7;
  FString local_38;
  FString local_28;
  
  pwVar7 = BuildSettings::GetBranchName();
  ::FString::FString(&local_38,pwVar7);
  uVar6 = BuildSettings::GetCurrentChangelist();
  bVar4 = BuildSettings::IsLicenseeVersion();
  FVar3.Data = local_38.Data.AllocatorInstance.Data;
  pFVar1 = &(this->Current).Branch;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Current).Branch.Data.ArrayNum = 0;
  piVar2 = &(this->Current).Branch.Data.ArrayMax;
  *piVar2 = 0;
  *(undefined4 *)&(this->Current)._padding_ = 0x70005;
  *(undefined2 *)((longlong)&(this->Current)._padding_ + 4) = 1;
  *(uint *)&(this->Current)._padding_ = (uint)bVar4 << 0x1f | uVar6;
  if (pFVar1 != &local_38) {
    (this->Current).Branch.Data.ArrayNum = local_38.Data.ArrayNum;
    if (local_38.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)pFVar1,local_38.Data.ArrayNum,
                 piVar2);
      memcpy((pFVar1->Data).AllocatorInstance.Data,FVar3.Data,(longlong)local_38.Data.ArrayNum * 2);
    }
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pwVar7 = BuildSettings::GetBranchName();
  ::FString::FString(&local_28,pwVar7);
  uVar6 = BuildSettings::GetCompatibleChangelist();
  bVar4 = BuildSettings::IsLicenseeVersion();
  bVar5 = BuildSettings::IsLicenseeVersion();
  FVar3.Data = local_28.Data.AllocatorInstance.Data;
  pFVar1 = &(this->CompatibleWith).Branch;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->CompatibleWith).Branch.Data.ArrayMax;
  (this->CompatibleWith).Branch.Data.ArrayNum = 0;
  *(uint *)&(this->CompatibleWith)._padding_ = (uint)bVar4 << 0x1f | uVar6;
  *piVar2 = 0;
  *(undefined4 *)&(this->CompatibleWith)._padding_ = 0x70005;
  *(ushort *)((longlong)&(this->CompatibleWith)._padding_ + 4) = (ushort)bVar5;
  if (pFVar1 != &local_28) {
    (this->CompatibleWith).Branch.Data.ArrayNum = local_28.Data.ArrayNum;
    if (local_28.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)pFVar1,local_28.Data.ArrayNum,
                 piVar2);
      memcpy((pFVar1->Data).AllocatorInstance.Data,FVar3.Data,(longlong)local_28.Data.ArrayNum * 2);
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return this;
}

