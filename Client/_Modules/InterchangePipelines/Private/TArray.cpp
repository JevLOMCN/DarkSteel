// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangePipelines
// Functions: 4

// AddUniqueImpl<TObjectPtr<UInterchangeBaseNode_const_>_> @ 14e731e40

int __thiscall
TArray<TObjectPtr<UInterchangeBaseNode_const_>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TObjectPtr<UInterchangeBaseNode_const_>_>
          (TArray<TObjectPtr<UInterchangeBaseNode_const_>,TSizedDefaultAllocator<32>_> *this,
          TObjectPtr<UInterchangeBaseNode_const_> *param_1)

{
  FScriptContainerElement *pFVar1;
  UInterchangeBaseNode *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar6 = pFVar1;
    do {
      if (*(UInterchangeBaseNode **)pFVar6 == (param_1->field0_0x0).DebugPtr) {
        iVar5 = (int)((longlong)pFVar6 - (longlong)pFVar1 >> 3);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      pFVar6 = pFVar6 + 8;
    } while (pFVar6 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar5;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar5 + 1;
  pUVar2 = (param_1->field0_0x0).DebugPtr;
  *(UInterchangeBaseNode **)(pFVar1 + (longlong)iVar5 * 8) = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (UInterchangeBaseNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  return iVar5;
}

// operator= @ 14e76c520

TArray<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>,TSizedDefaultAllocator<32>_>
* __thiscall
TArray<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>,TSizedDefaultAllocator<32>_>
::operator=(TArray<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>,TSizedDefaultAllocator<32>_>
            *this,TArray<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>,TSizedDefaultAllocator<32>_>
                  *param_1)

{
  int *piVar1;
  int iVar2;
  TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1> *pTVar3;
  
  if (this != param_1) {
    DestructItems<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>,int>
              ((TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1> *)
               (this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pTVar3 = (TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1> *)
             (param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>,TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>,int>
              ((this->AllocatorInstance).Data,pTVar3,iVar2);
  }
  return this;
}

// operator= @ 14e76c5c0

TArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSizedDefaultAllocator<32>_>
* __thiscall
TArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSizedDefaultAllocator<32>_>
::operator=(TArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSizedDefaultAllocator<32>_>
            *this,TArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSizedDefaultAllocator<32>_>
                  *param_1)

{
  int *piVar1;
  int iVar2;
  TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *pTVar3;
  
  if (this != param_1) {
    DestructItems<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,int>
              ((TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *)
               (this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pTVar3 = (TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *)
             (param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,int>
              ((this->AllocatorInstance).Data,pTVar3,iVar2);
  }
  return this;
}

// Empty @ 14e7a1350

void __thiscall
TArray<UInterchangeSourceData_const_*,TSizedDefaultAllocator<32>_>::Empty
          (TArray<UInterchangeSourceData_const_*,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

