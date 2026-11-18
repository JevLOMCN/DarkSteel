// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 4

// FTask @ 14a976cb0

FTask * __thiscall UE::Mutable::Private::CodeRunner::FTask::FTask(FTask *this,FTask *param_1)

{
  ForElementType<UE::Mutable::Private::FCacheAddress> FVar1;
  uint uVar2;
  uchar uVar3;
  undefined1 uVar4;
  
  uVar2 = (param_1->Op).CustomState;
  (this->Op).At = (param_1->Op).At;
  (this->Op).CustomState = uVar2;
  uVar3 = (param_1->Op).ExecutionOptions;
  uVar4 = (param_1->Op).field_0xb;
  (this->Op).ExecutionIndex = (param_1->Op).ExecutionIndex;
  (this->Op).ExecutionOptions = uVar3;
  (this->Op).field_0xb = uVar4;
  (this->Deps).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Mutable::Private::FCacheAddress>)0x0;
  if ((param_1->Deps).AllocatorInstance.SecondaryData ==
      (ForElementType<UE::Mutable::Private::FCacheAddress>)0x0) {
    memmove(&this->Deps,&param_1->Deps,0x18);
  }
  FVar1 = (this->Deps).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<UE::Mutable::Private::FCacheAddress>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->Deps).AllocatorInstance.SecondaryData = (param_1->Deps).AllocatorInstance.SecondaryData;
  (param_1->Deps).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Mutable::Private::FCacheAddress>)0x0;
  (this->Deps).ArrayNum = (param_1->Deps).ArrayNum;
  (this->Deps).ArrayMax = (param_1->Deps).ArrayMax;
  (param_1->Deps).ArrayNum = 0;
  (param_1->Deps).ArrayMax = 3;
  return this;
}

// FTask @ 14a976d50

FTask * __thiscall
UE::Mutable::Private::CodeRunner::FTask::FTask
          (FTask *this,FScheduledOp *param_1,FScheduledOp *param_2,FScheduledOp *param_3,
          FScheduledOp *param_4,FScheduledOp *param_5)

{
  TArray<UE::Mutable::Private::FCacheAddress,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  uint uVar2;
  code *pcVar3;
  uchar uVar4;
  undefined1 uVar5;
  bool bVar6;
  int iVar7;
  FTask *pFVar8;
  ForElementType<UE::Mutable::Private::FCacheAddress> FVar9;
  uint local_28;
  ushort uStack_24;
  uchar uStack_22;
  byte bStack_21;
  uint local_20;
  ushort uStack_1c;
  uchar uStack_1a;
  byte bStack_19;
  uint local_18;
  ushort uStack_14;
  uchar uStack_12;
  byte bStack_11;
  uint local_10;
  ushort uStack_c;
  uchar uStack_a;
  byte bStack_9;
  
  uVar2 = param_1->CustomState;
  pTVar1 = &this->Deps;
  (this->Op).At = param_1->At;
  (this->Op).CustomState = uVar2;
  uVar4 = param_1->ExecutionOptions;
  uVar5 = param_1->field_0xb;
  (this->Op).ExecutionIndex = param_1->ExecutionIndex;
  (this->Op).ExecutionOptions = uVar4;
  (this->Op).field_0xb = uVar5;
  (this->Deps).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Mutable::Private::FCacheAddress>)0x0;
  (this->Deps).ArrayNum = 0;
  (this->Deps).ArrayMax = 3;
  uVar2 = param_2->At;
  if (uVar2 != 0) {
    uStack_24 = param_2->ExecutionIndex;
    uStack_22 = param_2->ExecutionOptions;
    bStack_21 = param_2->Type;
    local_28 = uVar2;
    if ((pTVar1 <= &local_28) && (&local_28 < &(this->Deps).AllocatorInstance.SecondaryData)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FTask *)(*pcVar3)();
        return pFVar8;
      }
    }
    iVar7 = (this->Deps).ArrayNum;
    if (iVar7 == (this->Deps).ArrayMax) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Mutable::Private::FCacheAddress>_>
                        (0x408,&pTVar1->AllocatorInstance,&(this->Deps).ArrayMax);
    }
    (this->Deps).ArrayNum = iVar7 + 1;
    FVar9 = (this->Deps).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<UE::Mutable::Private::FCacheAddress>)0x0) {
      FVar9 = (ForElementType<UE::Mutable::Private::FCacheAddress>)pTVar1;
    }
    *(ulonglong *)((longlong)FVar9 + (longlong)iVar7 * 8) =
         CONCAT17(bStack_21,CONCAT16(uStack_22,CONCAT24(uStack_24,local_28)));
  }
  uVar2 = param_3->At;
  if (uVar2 != 0) {
    FVar9 = (this->Deps).AllocatorInstance.SecondaryData;
    uStack_1c = param_3->ExecutionIndex;
    uStack_1a = param_3->ExecutionOptions;
    bStack_19 = param_3->Type;
    if (FVar9 == (ForElementType<UE::Mutable::Private::FCacheAddress>)0x0) {
      FVar9 = (ForElementType<UE::Mutable::Private::FCacheAddress>)pTVar1;
    }
    local_20 = uVar2;
    if (((ulonglong)FVar9 <= &local_20) &&
       (&local_20 < (uint *)((longlong)FVar9 + (longlong)(this->Deps).ArrayMax * 8))) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FTask *)(*pcVar3)();
        return pFVar8;
      }
    }
    iVar7 = (this->Deps).ArrayNum;
    if (iVar7 == (this->Deps).ArrayMax) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Mutable::Private::FCacheAddress>_>
                        (0x408,&pTVar1->AllocatorInstance,&(this->Deps).ArrayMax);
    }
    (this->Deps).ArrayNum = iVar7 + 1;
    FVar9 = (this->Deps).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<UE::Mutable::Private::FCacheAddress>)0x0) {
      FVar9 = (ForElementType<UE::Mutable::Private::FCacheAddress>)pTVar1;
    }
    *(ulonglong *)((longlong)FVar9 + (longlong)iVar7 * 8) =
         CONCAT17(bStack_19,CONCAT16(uStack_1a,CONCAT24(uStack_1c,local_20)));
  }
  uVar2 = param_4->At;
  if (uVar2 != 0) {
    uStack_14 = param_4->ExecutionIndex;
    uStack_12 = param_4->ExecutionOptions;
    FVar9 = (this->Deps).AllocatorInstance.SecondaryData;
    bStack_11 = param_4->Type;
    if (FVar9 == (ForElementType<UE::Mutable::Private::FCacheAddress>)0x0) {
      FVar9 = (ForElementType<UE::Mutable::Private::FCacheAddress>)pTVar1;
    }
    local_18 = uVar2;
    if (((ulonglong)FVar9 <= &local_18) &&
       (&local_18 < (uint *)((longlong)FVar9 + (longlong)(this->Deps).ArrayMax * 8))) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FTask *)(*pcVar3)();
        return pFVar8;
      }
    }
    iVar7 = (this->Deps).ArrayNum;
    if (iVar7 == (this->Deps).ArrayMax) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Mutable::Private::FCacheAddress>_>
                        (0x408,&pTVar1->AllocatorInstance,&(this->Deps).ArrayMax);
    }
    (this->Deps).ArrayNum = iVar7 + 1;
    FVar9 = (this->Deps).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<UE::Mutable::Private::FCacheAddress>)0x0) {
      FVar9 = (ForElementType<UE::Mutable::Private::FCacheAddress>)pTVar1;
    }
    *(ulonglong *)((longlong)FVar9 + (longlong)iVar7 * 8) =
         CONCAT17(bStack_11,CONCAT16(uStack_12,CONCAT24(uStack_14,local_18)));
  }
  local_10 = param_5->At;
  if (local_10 != 0) {
    FVar9 = (this->Deps).AllocatorInstance.SecondaryData;
    uStack_c = param_5->ExecutionIndex;
    uStack_a = param_5->ExecutionOptions;
    bStack_9 = param_5->Type;
    if (FVar9 == (ForElementType<UE::Mutable::Private::FCacheAddress>)0x0) {
      FVar9 = (ForElementType<UE::Mutable::Private::FCacheAddress>)pTVar1;
    }
    if (((ulonglong)FVar9 <= &local_10) &&
       (&local_10 < (uint *)((longlong)FVar9 + (longlong)(this->Deps).ArrayMax * 8))) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FTask *)(*pcVar3)();
        return pFVar8;
      }
    }
    iVar7 = (this->Deps).ArrayNum;
    if (iVar7 == (this->Deps).ArrayMax) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Mutable::Private::FCacheAddress>_>
                        (0x408,&pTVar1->AllocatorInstance,&(this->Deps).ArrayMax);
    }
    (this->Deps).ArrayNum = iVar7 + 1;
    FVar9 = (this->Deps).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<UE::Mutable::Private::FCacheAddress>)0x0) {
      FVar9 = (ForElementType<UE::Mutable::Private::FCacheAddress>)pTVar1;
    }
    *(ulonglong *)((longlong)FVar9 + (longlong)iVar7 * 8) =
         CONCAT17(bStack_9,CONCAT16(uStack_a,CONCAT24(uStack_c,local_10)));
  }
  return this;
}

// FTask @ 14a9770e0

FTask * __thiscall
UE::Mutable::Private::CodeRunner::FTask::FTask
          (FTask *this,FScheduledOp *param_1,FScheduledOp *param_2,FScheduledOp *param_3,
          FScheduledOp *param_4)

{
  TArray<UE::Mutable::Private::FCacheAddress,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  uint uVar2;
  code *pcVar3;
  uchar uVar4;
  undefined1 uVar5;
  bool bVar6;
  int iVar7;
  FTask *pFVar8;
  ForElementType<UE::Mutable::Private::FCacheAddress> FVar9;
  uint local_28;
  ushort uStack_24;
  uchar uStack_22;
  byte bStack_21;
  uint local_20;
  ushort uStack_1c;
  uchar uStack_1a;
  byte bStack_19;
  uint local_18;
  ushort uStack_14;
  uchar uStack_12;
  byte bStack_11;
  
  uVar2 = param_1->CustomState;
  pTVar1 = &this->Deps;
  (this->Op).At = param_1->At;
  (this->Op).CustomState = uVar2;
  uVar4 = param_1->ExecutionOptions;
  uVar5 = param_1->field_0xb;
  (this->Op).ExecutionIndex = param_1->ExecutionIndex;
  (this->Op).ExecutionOptions = uVar4;
  (this->Op).field_0xb = uVar5;
  (this->Deps).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Mutable::Private::FCacheAddress>)0x0;
  (this->Deps).ArrayNum = 0;
  (this->Deps).ArrayMax = 3;
  uVar2 = param_2->At;
  if (uVar2 != 0) {
    uStack_24 = param_2->ExecutionIndex;
    uStack_22 = param_2->ExecutionOptions;
    bStack_21 = param_2->Type;
    local_28 = uVar2;
    if ((pTVar1 <= &local_28) && (&local_28 < &(this->Deps).AllocatorInstance.SecondaryData)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FTask *)(*pcVar3)();
        return pFVar8;
      }
    }
    iVar7 = (this->Deps).ArrayNum;
    if (iVar7 == (this->Deps).ArrayMax) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Mutable::Private::FCacheAddress>_>
                        (0x408,&pTVar1->AllocatorInstance,&(this->Deps).ArrayMax);
    }
    (this->Deps).ArrayNum = iVar7 + 1;
    FVar9 = (this->Deps).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<UE::Mutable::Private::FCacheAddress>)0x0) {
      FVar9 = (ForElementType<UE::Mutable::Private::FCacheAddress>)pTVar1;
    }
    *(ulonglong *)((longlong)FVar9 + (longlong)iVar7 * 8) =
         CONCAT17(bStack_21,CONCAT16(uStack_22,CONCAT24(uStack_24,local_28)));
  }
  uVar2 = param_3->At;
  if (uVar2 != 0) {
    FVar9 = (this->Deps).AllocatorInstance.SecondaryData;
    uStack_1c = param_3->ExecutionIndex;
    uStack_1a = param_3->ExecutionOptions;
    bStack_19 = param_3->Type;
    if (FVar9 == (ForElementType<UE::Mutable::Private::FCacheAddress>)0x0) {
      FVar9 = (ForElementType<UE::Mutable::Private::FCacheAddress>)pTVar1;
    }
    local_20 = uVar2;
    if (((ulonglong)FVar9 <= &local_20) &&
       (&local_20 < (uint *)((longlong)FVar9 + (longlong)(this->Deps).ArrayMax * 8))) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FTask *)(*pcVar3)();
        return pFVar8;
      }
    }
    iVar7 = (this->Deps).ArrayNum;
    if (iVar7 == (this->Deps).ArrayMax) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Mutable::Private::FCacheAddress>_>
                        (0x408,&pTVar1->AllocatorInstance,&(this->Deps).ArrayMax);
    }
    (this->Deps).ArrayNum = iVar7 + 1;
    FVar9 = (this->Deps).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<UE::Mutable::Private::FCacheAddress>)0x0) {
      FVar9 = (ForElementType<UE::Mutable::Private::FCacheAddress>)pTVar1;
    }
    *(ulonglong *)((longlong)FVar9 + (longlong)iVar7 * 8) =
         CONCAT17(bStack_19,CONCAT16(uStack_1a,CONCAT24(uStack_1c,local_20)));
  }
  local_18 = param_4->At;
  if (local_18 != 0) {
    FVar9 = (this->Deps).AllocatorInstance.SecondaryData;
    uStack_14 = param_4->ExecutionIndex;
    uStack_12 = param_4->ExecutionOptions;
    bStack_11 = param_4->Type;
    if (FVar9 == (ForElementType<UE::Mutable::Private::FCacheAddress>)0x0) {
      FVar9 = (ForElementType<UE::Mutable::Private::FCacheAddress>)pTVar1;
    }
    if (((ulonglong)FVar9 <= &local_18) &&
       (&local_18 < (uint *)((longlong)FVar9 + (longlong)(this->Deps).ArrayMax * 8))) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FTask *)(*pcVar3)();
        return pFVar8;
      }
    }
    iVar7 = (this->Deps).ArrayNum;
    if (iVar7 == (this->Deps).ArrayMax) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Mutable::Private::FCacheAddress>_>
                        (0x408,&pTVar1->AllocatorInstance,&(this->Deps).ArrayMax);
    }
    (this->Deps).ArrayNum = iVar7 + 1;
    FVar9 = (this->Deps).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<UE::Mutable::Private::FCacheAddress>)0x0) {
      FVar9 = (ForElementType<UE::Mutable::Private::FCacheAddress>)pTVar1;
    }
    *(ulonglong *)((longlong)FVar9 + (longlong)iVar7 * 8) =
         CONCAT17(bStack_11,CONCAT16(uStack_12,CONCAT24(uStack_14,local_18)));
  }
  return this;
}

// FTask @ 14a9773a0

FTask * __thiscall
UE::Mutable::Private::CodeRunner::FTask::FTask
          (FTask *this,FScheduledOp *param_1,FScheduledOp *param_2,FScheduledOp *param_3)

{
  TArray<UE::Mutable::Private::FCacheAddress,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  uint uVar2;
  code *pcVar3;
  uchar uVar4;
  undefined1 uVar5;
  bool bVar6;
  int iVar7;
  FTask *pFVar8;
  ForElementType<UE::Mutable::Private::FCacheAddress> FVar9;
  uint local_18;
  ushort uStack_14;
  uchar uStack_12;
  byte bStack_11;
  uint local_10;
  ushort uStack_c;
  uchar uStack_a;
  byte bStack_9;
  
  uVar2 = param_1->CustomState;
  pTVar1 = &this->Deps;
  (this->Op).At = param_1->At;
  (this->Op).CustomState = uVar2;
  uVar4 = param_1->ExecutionOptions;
  uVar5 = param_1->field_0xb;
  (this->Op).ExecutionIndex = param_1->ExecutionIndex;
  (this->Op).ExecutionOptions = uVar4;
  (this->Op).field_0xb = uVar5;
  (this->Deps).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Mutable::Private::FCacheAddress>)0x0;
  (this->Deps).ArrayNum = 0;
  (this->Deps).ArrayMax = 3;
  uVar2 = param_2->At;
  if (uVar2 != 0) {
    uStack_14 = param_2->ExecutionIndex;
    uStack_12 = param_2->ExecutionOptions;
    bStack_11 = param_2->Type;
    local_18 = uVar2;
    if ((pTVar1 <= &local_18) && (&local_18 < &(this->Deps).AllocatorInstance.SecondaryData)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FTask *)(*pcVar3)();
        return pFVar8;
      }
    }
    iVar7 = (this->Deps).ArrayNum;
    if (iVar7 == (this->Deps).ArrayMax) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Mutable::Private::FCacheAddress>_>
                        (0x408,&pTVar1->AllocatorInstance,&(this->Deps).ArrayMax);
    }
    (this->Deps).ArrayNum = iVar7 + 1;
    FVar9 = (this->Deps).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<UE::Mutable::Private::FCacheAddress>)0x0) {
      FVar9 = (ForElementType<UE::Mutable::Private::FCacheAddress>)pTVar1;
    }
    *(ulonglong *)((longlong)FVar9 + (longlong)iVar7 * 8) =
         CONCAT17(bStack_11,CONCAT16(uStack_12,CONCAT24(uStack_14,local_18)));
  }
  local_10 = param_3->At;
  if (local_10 != 0) {
    FVar9 = (this->Deps).AllocatorInstance.SecondaryData;
    uStack_c = param_3->ExecutionIndex;
    uStack_a = param_3->ExecutionOptions;
    bStack_9 = param_3->Type;
    if (FVar9 == (ForElementType<UE::Mutable::Private::FCacheAddress>)0x0) {
      FVar9 = (ForElementType<UE::Mutable::Private::FCacheAddress>)pTVar1;
    }
    if (((ulonglong)FVar9 <= &local_10) &&
       (&local_10 < (uint *)((longlong)FVar9 + (longlong)(this->Deps).ArrayMax * 8))) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FTask *)(*pcVar3)();
        return pFVar8;
      }
    }
    iVar7 = (this->Deps).ArrayNum;
    if (iVar7 == (this->Deps).ArrayMax) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Mutable::Private::FCacheAddress>_>
                        (0x408,&pTVar1->AllocatorInstance,&(this->Deps).ArrayMax);
    }
    (this->Deps).ArrayNum = iVar7 + 1;
    FVar9 = (this->Deps).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<UE::Mutable::Private::FCacheAddress>)0x0) {
      FVar9 = (ForElementType<UE::Mutable::Private::FCacheAddress>)pTVar1;
    }
    *(ulonglong *)((longlong)FVar9 + (longlong)iVar7 * 8) =
         CONCAT17(bStack_9,CONCAT16(uStack_a,CONCAT24(uStack_c,local_10)));
  }
  return this;
}

