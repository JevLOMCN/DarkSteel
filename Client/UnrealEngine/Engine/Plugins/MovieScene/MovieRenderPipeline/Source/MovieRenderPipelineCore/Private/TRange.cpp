// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 1

// Split @ 14dc897e0

TArray<TRange<FFrameTime>,TSizedDefaultAllocator<32>_> * __thiscall
TRange<FFrameTime>::Split
          (TRange<FFrameTime> *this,
          TArray<TRange<FFrameTime>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FFrameTime *param_1)

{
  FScriptContainerElement *pFVar1;
  TRange<FFrameTime> *pTVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  TArray<TRange<FFrameTime>,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  FFrameTime FVar10;
  uint local_58;
  FFrameNumber FStack_54;
  float fStack_50;
  undefined4 local_4c;
  FFrameNumber FStack_48;
  float fStack_44;
  undefined8 local_40;
  float fStack_38;
  uint uStack_34;
  int iStack_30;
  float fStack_2c;
  undefined8 local_28;
  float fStack_20;
  undefined4 uStack_1c;
  FFrameNumber FStack_18;
  float fStack_14;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  bVar5 = Contains(this,param_1);
  if (bVar5) {
    local_40._0_1_ = (this->LowerBound).Type;
    local_40._1_3_ = *(undefined3 *)&(this->LowerBound).field_0x1;
    local_40._4_4_ = (this->LowerBound).Value.FrameNumber;
    pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data;
    FStack_54 = (*param_1).FrameNumber;
    fStack_50 = (*param_1).SubFrame;
    fStack_38 = (this->LowerBound).Value.SubFrame;
    fStack_2c = fStack_50;
    local_58 = local_58 & 0xffffff00;
    uStack_34 = local_58;
    iStack_30 = FStack_54.Value;
    if ((pFVar9 <= (FScriptContainerElement *)&local_40) &&
       ((FScriptContainerElement *)&local_40 <
        pFVar9 + (longlong)__return_storage_ptr__->ArrayMax * 0x18)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TRange<FFrameTime>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
    }
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == __return_storage_ptr__->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x418,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    local_4c = CONCAT31(local_4c._1_3_,1);
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
    pFVar9 = pFVar1 + (longlong)iVar6 * 0x18;
    *(undefined8 *)pFVar9 = local_40;
    *(ulonglong *)(pFVar9 + 8) = CONCAT44(uStack_34,fStack_38);
    *(ulonglong *)(pFVar1 + (longlong)iVar6 * 0x18 + 0x10) = CONCAT44(fStack_2c,iStack_30);
    pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data;
    FStack_48 = (*param_1).FrameNumber;
    fStack_44 = (*param_1).SubFrame;
    local_28 = CONCAT44(FStack_48.Value,local_4c);
    fStack_20 = fStack_44;
    fStack_14 = (this->UpperBound).Value.SubFrame;
    uVar4._0_1_ = (this->UpperBound).Type;
    uVar4._1_3_ = *(undefined3 *)&(this->UpperBound).field_0x1;
    uVar4._4_4_ = (this->UpperBound).Value.FrameNumber;
    uStack_1c = (undefined4)uVar4;
    FStack_18.Value = uVar4._4_4_;
    if ((pFVar9 <= (FScriptContainerElement *)&local_28) &&
       ((FScriptContainerElement *)&local_28 <
        pFVar9 + (longlong)__return_storage_ptr__->ArrayMax * 0x18)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TRange<FFrameTime>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
    }
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == __return_storage_ptr__->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x418,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    lVar8 = (longlong)iVar6;
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data;
    *(undefined8 *)(pFVar9 + lVar8 * 0x18) = local_28;
    *(ulonglong *)(pFVar9 + lVar8 * 0x18 + 8) = CONCAT44(uStack_1c,fStack_20);
    FVar10.SubFrame = fStack_14;
    FVar10.FrameNumber.Value = FStack_18.Value;
  }
  else {
    pTVar2 = (TRange<FFrameTime> *)(__return_storage_ptr__->AllocatorInstance).Data;
    if ((pTVar2 <= this) && (this < pTVar2 + __return_storage_ptr__->ArrayMax)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<TRange<FFrameTime>,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
    }
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == __return_storage_ptr__->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x418,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    lVar8 = (longlong)iVar6;
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    uVar4 = *(undefined8 *)&(this->LowerBound).Value.SubFrame;
    pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data;
    *(undefined8 *)(pFVar9 + lVar8 * 0x18) = *(undefined8 *)&this->LowerBound;
    *(undefined8 *)(pFVar9 + lVar8 * 0x18 + 8) = uVar4;
    FVar10 = (this->UpperBound).Value;
  }
  *(FFrameTime *)(pFVar9 + lVar8 * 0x18 + 0x10) = FVar10;
  return __return_storage_ptr__;
}

