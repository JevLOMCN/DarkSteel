// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaAssets
// Functions: 1

// FinishAndTriggerIf @ 146c27820

FLatentResponse * __thiscall
FLatentResponse::FinishAndTriggerIf
          (FLatentResponse *this,bool param_1,FName param_2,int param_3,FWeakObjectPtr param_4)

{
  int *piVar1;
  FName *pFVar2;
  ForElementType<FLatentResponse::FExecutionInfo> FVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  int iVar7;
  ForElementType<FLatentResponse::FExecutionInfo> FVar8;
  FLatentResponse *pFVar9;
  FName local_28;
  FNameEntryId FStack_20;
  uint uStack_1c;
  int iStack_18;
  
  this->bRemoveAction = param_1;
  if (param_1) {
    FVar3 = (this->LinksToExecute).AllocatorInstance.SecondaryData;
    uStack_1c = param_4.ObjectIndex;
    iStack_18 = param_4.ObjectSerialNumber;
    FVar8 = (ForElementType<FLatentResponse::FExecutionInfo>)this;
    if (FVar3 != (ForElementType<FLatentResponse::FExecutionInfo>)0x0) {
      FVar8 = FVar3;
    }
    local_28 = param_2;
    FStack_20.Value = param_3;
    if ((ulonglong)FVar8 <= &local_28) {
      FVar8 = (ForElementType<FLatentResponse::FExecutionInfo>)this;
      if (FVar3 != (ForElementType<FLatentResponse::FExecutionInfo>)0x0) {
        FVar8 = FVar3;
      }
      if ((&local_28 < (FName *)((longlong)FVar8 + (longlong)(this->LinksToExecute).ArrayMax * 0x14)
          ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FLatentResponse *)(*pcVar4)();
        return pFVar9;
      }
    }
    iVar7 = (this->LinksToExecute).ArrayNum;
    piVar1 = &(this->LinksToExecute).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FLatentResponse::FExecutionInfo>_>
                        (0x414,(ForElementType<FLatentResponse::FExecutionInfo> *)this,piVar1);
    }
    FVar5.Number = uStack_1c;
    FVar5.ComparisonIndex.Value = FStack_20.Value;
    (this->LinksToExecute).ArrayNum = iVar7 + 1;
    FVar3 = (this->LinksToExecute).AllocatorInstance.SecondaryData;
    FVar8 = (ForElementType<FLatentResponse::FExecutionInfo>)this;
    if (FVar3 != (ForElementType<FLatentResponse::FExecutionInfo>)0x0) {
      FVar8 = FVar3;
    }
    pFVar2 = (FName *)((longlong)FVar8 + (longlong)iVar7 * 0x14);
    *pFVar2 = local_28;
    pFVar2[1] = FVar5;
    *(int *)((uchar *)((longlong)FVar8 + 0x10) + (longlong)iVar7 * 0x14) = iStack_18;
  }
  return this;
}

