// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 2

// FDirectoryResult @ 142ad5fe0

FDirectoryResult * __thiscall
UE::AssetDataGather::Private::FAssetDataDiscovery::FDirectoryResult::FDirectoryResult
          (FDirectoryResult *this,TStringView<wchar_t> *param_1,
          TArrayView<UE::AssetDataGather::Private::FDiscoveredPathData_const_,int> *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  FDirectoryResult *pFVar7;
  FDiscoveredPathData *pFVar8;
  FDiscoveredPathData *pFVar9;
  FString local_28;
  
  uVar3 = *(undefined8 *)&param_1->Size;
  pwVar4 = param_1->DataPtr;
  (this->DirAbsPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DirAbsPath).Data.ArrayNum = 0;
  (this->DirAbsPath).Data.ArrayMax = 0;
  pFVar7 = (FDirectoryResult *)::FString::ConstructFromPtrSize(&local_28,pwVar4,(int)uVar3);
  if (this != pFVar7) {
    pFVar5 = (this->DirAbsPath).Data.AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (this->DirAbsPath).Data.AllocatorInstance.Data =
         (pFVar7->DirAbsPath).Data.AllocatorInstance.Data;
    (pFVar7->DirAbsPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DirAbsPath).Data.ArrayNum = (pFVar7->DirAbsPath).Data.ArrayNum;
    (this->DirAbsPath).Data.ArrayMax = (pFVar7->DirAbsPath).Data.ArrayMax;
    (pFVar7->DirAbsPath).Data.ArrayNum = 0;
    (pFVar7->DirAbsPath).Data.ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  uVar2 = param_2->ArrayNum;
  piVar1 = &(this->Files).ArrayMax;
  (this->Files).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Files).ArrayNum = 0;
  *piVar1 = 0;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,uVar2,&(this->Files).AllocatorInstance,0,piVar1);
  }
  pFVar9 = param_2->DataPtr;
  pFVar8 = pFVar9 + (int)uVar2;
  for (; pFVar9 != pFVar8; pFVar9 = pFVar9 + 1) {
    iVar6 = (this->Files).ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&(this->Files).AllocatorInstance,piVar1);
    }
    (this->Files).ArrayNum = iVar6 + 1;
    FGatheredPathData::FGatheredPathData
              ((FGatheredPathData *)((this->Files).AllocatorInstance.Data + (longlong)iVar6 * 0x30),
               pFVar9);
  }
  return this;
}

// GetAllocatedSize @ 142afaf80

ulong64 __thiscall
UE::AssetDataGather::Private::FAssetDataDiscovery::FDirectoryResult::GetAllocatedSize
          (FDirectoryResult *this)

{
  return ((longlong)(this->DirAbsPath).Data.ArrayMax + (longlong)(this->Files).ArrayMax * 0x18) * 2;
}

