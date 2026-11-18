// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 25

// FDebugDrawParams @ 14a8ab010

FDebugDrawParams * __thiscall
UE::PoseSearch::FDebugDrawParams::FDebugDrawParams(FDebugDrawParams *this,FDebugDrawParams *param_1)

{
  int iVar1;
  UPoseSearchDatabase *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  bool bVar6;
  FDebugDrawParams *pFVar7;
  undefined4 uStack_c;
  
  iVar1 = (param_1->AnimContexts).ArrayNum;
  uVar5 = *(undefined4 *)&(param_1->AnimContexts).field_0xc;
  (this->AnimContexts).DataPtr = (param_1->AnimContexts).DataPtr;
  (this->AnimContexts).ArrayNum = iVar1;
  *(undefined4 *)&(this->AnimContexts).field_0xc = uVar5;
  iVar1 = (param_1->PoseHistories).ArrayNum;
  uVar5 = *(undefined4 *)&(param_1->PoseHistories).field_0xc;
  (this->PoseHistories).DataPtr = (param_1->PoseHistories).DataPtr;
  (this->PoseHistories).ArrayNum = iVar1;
  *(undefined4 *)&(this->PoseHistories).field_0xc = uVar5;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  ::
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
              *)&this->RoleToIndex,
             (TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
              *)&param_1->RoleToIndex);
  pUVar2 = param_1->Database;
  (this->DynamicWeightsSqrtBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Database = pUVar2;
  (this->DynamicWeightsSqrtBuffer).AllocatorInstance.Data =
       (param_1->DynamicWeightsSqrtBuffer).AllocatorInstance.Data;
  (param_1->DynamicWeightsSqrtBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicWeightsSqrtBuffer).ArrayNum = (param_1->DynamicWeightsSqrtBuffer).ArrayNum;
  (this->DynamicWeightsSqrtBuffer).ArrayMax = (param_1->DynamicWeightsSqrtBuffer).ArrayMax;
  (param_1->DynamicWeightsSqrtBuffer).ArrayNum = 0;
  (param_1->DynamicWeightsSqrtBuffer).ArrayMax = 0;
  (this->DynamicWeightsSqrt).DataPtr = (float *)0x0;
  (this->DynamicWeightsSqrt).ArrayNum = 0;
  pFVar3 = (this->DynamicWeightsSqrtBuffer).AllocatorInstance.Data;
  iVar1 = (this->DynamicWeightsSqrtBuffer).ArrayNum;
  if (iVar1 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FDebugDrawParams *)(*pcVar4)();
      return pFVar7;
    }
  }
  (this->DynamicWeightsSqrt).DataPtr = (float *)pFVar3;
  *(ulonglong *)&(this->DynamicWeightsSqrt).ArrayNum = CONCAT44(uStack_c,iVar1);
  param_1->Database = (UPoseSearchDatabase *)0x0;
  return this;
}

// FDebugDrawParams @ 14a8ab110

FDebugDrawParams * __thiscall
UE::PoseSearch::FDebugDrawParams::FDebugDrawParams(FDebugDrawParams *this,FDebugDrawParams *param_1)

{
  int *piVar1;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined4 uVar6;
  bool bVar7;
  FDebugDrawParams *pFVar8;
  undefined4 uStack_c;
  
  iVar3 = (param_1->AnimContexts).ArrayNum;
  uVar6 = *(undefined4 *)&(param_1->AnimContexts).field_0xc;
  (this->AnimContexts).DataPtr = (param_1->AnimContexts).DataPtr;
  (this->AnimContexts).ArrayNum = iVar3;
  *(undefined4 *)&(this->AnimContexts).field_0xc = uVar6;
  iVar3 = (param_1->PoseHistories).ArrayNum;
  uVar6 = *(undefined4 *)&(param_1->PoseHistories).field_0xc;
  (this->PoseHistories).DataPtr = (param_1->PoseHistories).DataPtr;
  (this->PoseHistories).ArrayNum = iVar3;
  *(undefined4 *)&(this->PoseHistories).field_0xc = uVar6;
  *(undefined8 *)&(this->RoleToIndex).field_0x50 = 0;
  *(undefined4 *)&(this->RoleToIndex).field_0x58 = 0;
  *(undefined4 *)&(this->RoleToIndex).field_0x5c = 4;
  *(undefined8 *)&(this->RoleToIndex).field_0x68 = 0;
  *(undefined4 *)&(this->RoleToIndex).field_0x70 = 0;
  *(undefined4 *)&(this->RoleToIndex).field_0x74 = 0x20;
  *(undefined4 *)&(this->RoleToIndex).field_0x78 = 0xffffffff;
  *(undefined4 *)&(this->RoleToIndex).field_0x7c = 0;
  *(undefined8 *)&(this->RoleToIndex).field_0x88 = 0;
  *(undefined4 *)&(this->RoleToIndex).field_0x90 = 0;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  ::operator=((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
               *)&this->RoleToIndex,
              (TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
               *)&param_1->RoleToIndex);
  pTVar2 = &this->DynamicWeightsSqrtBuffer;
  this->Database = param_1->Database;
  piVar1 = &(this->DynamicWeightsSqrtBuffer).ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->DynamicWeightsSqrtBuffer).ArrayNum;
  pFVar4 = (param_1->DynamicWeightsSqrtBuffer).AllocatorInstance.Data;
  (this->DynamicWeightsSqrtBuffer).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 2);
  }
  (this->DynamicWeightsSqrt).DataPtr = (float *)0x0;
  (this->DynamicWeightsSqrt).ArrayNum = 0;
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  iVar3 = (this->DynamicWeightsSqrtBuffer).ArrayNum;
  if (iVar3 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FDebugDrawParams *)(*pcVar5)();
      return pFVar8;
    }
  }
  (this->DynamicWeightsSqrt).DataPtr = (float *)pFVar4;
  *(ulonglong *)&(this->DynamicWeightsSqrt).ArrayNum = CONCAT44(uStack_c,iVar3);
  return this;
}

// FDebugDrawParams @ 14a8ab270

FDebugDrawParams * __thiscall
UE::PoseSearch::FDebugDrawParams::FDebugDrawParams
          (FDebugDrawParams *this,TArrayView<FAnimInstanceProxy_*,int> *param_1,
          TArrayView<UE::PoseSearch::IPoseHistory_const_*_const,int> *param_2,
          TMap<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
          *param_3,UPoseSearchDatabase *param_4,EDebugDrawFlags param_5)

{
  IPoseHistory **ppIVar1;
  int iVar2;
  undefined4 uVar3;
  
  ppIVar1 = param_2->DataPtr;
  iVar2 = param_2->ArrayNum;
  uVar3 = *(undefined4 *)&param_2->field_0xc;
  (this->AnimContexts).DataPtr = (FChooserEvaluationContext **)0x0;
  (this->AnimContexts).ArrayNum = 0;
  (this->PoseHistories).DataPtr = ppIVar1;
  (this->PoseHistories).ArrayNum = iVar2;
  *(undefined4 *)&(this->PoseHistories).field_0xc = uVar3;
  *(undefined8 *)&(this->RoleToIndex).field_0x50 = 0;
  *(undefined4 *)&(this->RoleToIndex).field_0x58 = 0;
  *(undefined4 *)&(this->RoleToIndex).field_0x5c = 4;
  *(undefined8 *)&(this->RoleToIndex).field_0x68 = 0;
  *(undefined4 *)&(this->RoleToIndex).field_0x70 = 0;
  *(undefined4 *)&(this->RoleToIndex).field_0x74 = 0x20;
  *(undefined4 *)&(this->RoleToIndex).field_0x78 = 0xffffffff;
  *(undefined4 *)&(this->RoleToIndex).field_0x7c = 0;
  *(undefined8 *)&(this->RoleToIndex).field_0x88 = 0;
  *(undefined4 *)&(this->RoleToIndex).field_0x90 = 0;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  ::operator=((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
               *)&this->RoleToIndex,
              (TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
               *)param_3);
  this->Database = param_4;
  (this->DynamicWeightsSqrtBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicWeightsSqrtBuffer).ArrayNum = 0;
  (this->DynamicWeightsSqrtBuffer).ArrayMax = 0;
  (this->DynamicWeightsSqrt).DataPtr = (float *)0x0;
  (this->DynamicWeightsSqrt).ArrayNum = 0;
  return this;
}

// FDebugDrawParams @ 14a8ab310

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FDebugDrawParams * __thiscall
UE::PoseSearch::FDebugDrawParams::FDebugDrawParams
          (FDebugDrawParams *this,TArrayView<USkinnedMeshComponent_const_*,int> *param_1,
          TArrayView<UE::PoseSearch::IPoseHistory_const_*_const,int> *param_2,
          TMap<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
          *param_3,UPoseSearchDatabase *param_4,EDebugDrawFlags param_5)

{
  IPoseHistory **ppIVar1;
  int iVar2;
  undefined4 uVar3;
  
  ppIVar1 = param_2->DataPtr;
  iVar2 = param_2->ArrayNum;
  uVar3 = *(undefined4 *)&param_2->field_0xc;
  (this->AnimContexts).DataPtr = (FChooserEvaluationContext **)0x0;
  (this->AnimContexts).ArrayNum = 0;
  (this->PoseHistories).DataPtr = ppIVar1;
  (this->PoseHistories).ArrayNum = iVar2;
  *(undefined4 *)&(this->PoseHistories).field_0xc = uVar3;
  *(undefined8 *)&(this->RoleToIndex).field_0x50 = 0;
  *(undefined4 *)&(this->RoleToIndex).field_0x58 = 0;
  *(undefined4 *)&(this->RoleToIndex).field_0x5c = 4;
  *(undefined8 *)&(this->RoleToIndex).field_0x68 = 0;
  *(undefined4 *)&(this->RoleToIndex).field_0x70 = 0;
  *(undefined4 *)&(this->RoleToIndex).field_0x74 = 0x20;
  *(undefined4 *)&(this->RoleToIndex).field_0x78 = 0xffffffff;
  *(undefined4 *)&(this->RoleToIndex).field_0x7c = 0;
  *(undefined8 *)&(this->RoleToIndex).field_0x88 = 0;
  *(undefined4 *)&(this->RoleToIndex).field_0x90 = 0;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  ::operator=((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
               *)&this->RoleToIndex,
              (TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
               *)param_3);
  this->Database = param_4;
  (this->DynamicWeightsSqrtBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicWeightsSqrtBuffer).ArrayNum = 0;
  (this->DynamicWeightsSqrtBuffer).ArrayMax = 0;
  (this->DynamicWeightsSqrt).DataPtr = (float *)0x0;
  (this->DynamicWeightsSqrt).ArrayNum = 0;
  return this;
}

// FDebugDrawParams @ 14a8ab3b0

FDebugDrawParams * __thiscall
UE::PoseSearch::FDebugDrawParams::FDebugDrawParams
          (FDebugDrawParams *this,TArrayView<FChooserEvaluationContext_*_const,int> *param_1,
          TArrayView<UE::PoseSearch::IPoseHistory_const_*_const,int> *param_2,
          TMap<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
          *param_3,UPoseSearchDatabase *param_4)

{
  TArrayView<UE::PoseSearch::IPoseHistory_const_*_const,int> local_28;
  TArrayView<FChooserEvaluationContext_*_const,int> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  *(undefined8 *)&(this->AnimContexts).ArrayNum = 0;
  *(undefined8 *)&(this->PoseHistories).field_0xc = 0;
  *(undefined8 *)&(this->RoleToIndex).field_0x4 = 0;
  *(undefined8 *)&(this->RoleToIndex).field_0xc = 0;
  *(undefined8 *)&(this->RoleToIndex).field_0x14 = 0;
  *(undefined8 *)&(this->RoleToIndex).field_0x1c = 0;
  *(undefined8 *)&(this->RoleToIndex).field_0x24 = 0;
  *(undefined8 *)&(this->RoleToIndex).field_0x2c = 0;
  *(undefined8 *)&(this->RoleToIndex).field_0x34 = 0;
  *(undefined8 *)&(this->RoleToIndex).field_0x3c = 0;
  *(undefined8 *)&(this->RoleToIndex).field_0x44 = 0;
  *(undefined4 *)&(this->RoleToIndex).field_0x4c = 0;
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  *(undefined8 *)&(this->RoleToIndex).field_0x60 = 0;
  *(undefined8 *)&(this->RoleToIndex).field_0x80 = 0;
  *(undefined8 *)&(this->RoleToIndex).field_0x90 = 0;
  *(undefined8 *)&(this->DynamicWeightsSqrt).ArrayNum = 0;
  (this->AnimContexts).DataPtr = (FChooserEvaluationContext **)0x0;
  (this->PoseHistories).DataPtr = (IPoseHistory **)0x0;
  (this->PoseHistories).ArrayNum = 0;
  *(undefined8 *)&(this->RoleToIndex).field_0x50 = 0;
  *(undefined4 *)&(this->RoleToIndex).field_0x58 = 0;
  *(undefined4 *)&(this->RoleToIndex).field_0x5c = 4;
  *(undefined8 *)&(this->RoleToIndex).field_0x68 = 0;
  *(undefined4 *)&(this->RoleToIndex).field_0x70 = 0;
  *(undefined4 *)&(this->RoleToIndex).field_0x74 = 0x20;
  *(undefined4 *)&(this->RoleToIndex).field_0x7c = 0;
  *(undefined4 *)&(this->RoleToIndex).field_0x78 = 0xffffffff;
  *(undefined8 *)&(this->RoleToIndex).field_0x88 = 0;
  this->Database = (UPoseSearchDatabase *)0x0;
  (this->DynamicWeightsSqrtBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicWeightsSqrtBuffer).ArrayNum = 0;
  (this->DynamicWeightsSqrtBuffer).ArrayMax = 0;
  (this->DynamicWeightsSqrt).DataPtr = (float *)0x0;
  Init(this,&local_18,&local_28,param_3,param_4);
  return this;
}

// operator= @ 14a8ae9b0

FDebugDrawParams * __thiscall
UE::PoseSearch::FDebugDrawParams::operator=(FDebugDrawParams *this,FDebugDrawParams *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  UPoseSearchDatabase *pUVar4;
  code *pcVar5;
  undefined4 uVar6;
  bool bVar7;
  FDebugDrawParams *pFVar8;
  undefined4 uStack_c;
  
  if (this != param_1) {
    pFVar2 = (this->DynamicWeightsSqrtBuffer).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    *(undefined4 *)&(this->RoleToIndex).field_0x90 = 0;
    pvVar3 = *(void **)&(this->RoleToIndex).field_0x88;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                *)&this->RoleToIndex);
    iVar1 = (param_1->AnimContexts).ArrayNum;
    uVar6 = *(undefined4 *)&(param_1->AnimContexts).field_0xc;
    (this->AnimContexts).DataPtr = (param_1->AnimContexts).DataPtr;
    (this->AnimContexts).ArrayNum = iVar1;
    *(undefined4 *)&(this->AnimContexts).field_0xc = uVar6;
    iVar1 = (param_1->PoseHistories).ArrayNum;
    uVar6 = *(undefined4 *)&(param_1->PoseHistories).field_0xc;
    (this->PoseHistories).DataPtr = (param_1->PoseHistories).DataPtr;
    (this->PoseHistories).ArrayNum = iVar1;
    *(undefined4 *)&(this->PoseHistories).field_0xc = uVar6;
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
    ::
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
              ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                *)&this->RoleToIndex,
               (TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                *)&param_1->RoleToIndex);
    pUVar4 = param_1->Database;
    (this->DynamicWeightsSqrtBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this->Database = pUVar4;
    (this->DynamicWeightsSqrtBuffer).AllocatorInstance.Data =
         (param_1->DynamicWeightsSqrtBuffer).AllocatorInstance.Data;
    (param_1->DynamicWeightsSqrtBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DynamicWeightsSqrtBuffer).ArrayNum = (param_1->DynamicWeightsSqrtBuffer).ArrayNum;
    (this->DynamicWeightsSqrtBuffer).ArrayMax = (param_1->DynamicWeightsSqrtBuffer).ArrayMax;
    (param_1->DynamicWeightsSqrtBuffer).ArrayNum = 0;
    (param_1->DynamicWeightsSqrtBuffer).ArrayMax = 0;
    (this->DynamicWeightsSqrt).DataPtr = (float *)0x0;
    (this->DynamicWeightsSqrt).ArrayNum = 0;
    pFVar2 = (this->DynamicWeightsSqrtBuffer).AllocatorInstance.Data;
    iVar1 = (this->DynamicWeightsSqrtBuffer).ArrayNum;
    if (iVar1 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FDebugDrawParams *)(*pcVar5)();
        return pFVar8;
      }
    }
    (this->DynamicWeightsSqrt).DataPtr = (float *)pFVar2;
    *(ulonglong *)&(this->DynamicWeightsSqrt).ArrayNum = CONCAT44(uStack_c,iVar1);
    param_1->Database = (UPoseSearchDatabase *)0x0;
  }
  return this;
}

// operator= @ 14a8aeaf0

FDebugDrawParams * __thiscall
UE::PoseSearch::FDebugDrawParams::operator=(FDebugDrawParams *this,FDebugDrawParams *param_1)

{
  int *piVar1;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  void *pvVar5;
  code *pcVar6;
  undefined4 uVar7;
  bool bVar8;
  FDebugDrawParams *pFVar9;
  undefined4 uStack_c;
  
  if (this != param_1) {
    pTVar2 = &this->DynamicWeightsSqrtBuffer;
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    *(undefined4 *)&(this->RoleToIndex).field_0x90 = 0;
    pvVar5 = *(void **)&(this->RoleToIndex).field_0x88;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                *)&this->RoleToIndex);
    iVar3 = (param_1->AnimContexts).ArrayNum;
    uVar7 = *(undefined4 *)&(param_1->AnimContexts).field_0xc;
    (this->AnimContexts).DataPtr = (param_1->AnimContexts).DataPtr;
    (this->AnimContexts).ArrayNum = iVar3;
    *(undefined4 *)&(this->AnimContexts).field_0xc = uVar7;
    iVar3 = (param_1->PoseHistories).ArrayNum;
    uVar7 = *(undefined4 *)&(param_1->PoseHistories).field_0xc;
    (this->PoseHistories).DataPtr = (param_1->PoseHistories).DataPtr;
    (this->PoseHistories).ArrayNum = iVar3;
    *(undefined4 *)&(this->PoseHistories).field_0xc = uVar7;
    *(undefined8 *)&(this->RoleToIndex).field_0x50 = 0;
    *(undefined4 *)&(this->RoleToIndex).field_0x58 = 0;
    *(undefined4 *)&(this->RoleToIndex).field_0x5c = 4;
    *(undefined8 *)&(this->RoleToIndex).field_0x68 = 0;
    *(undefined4 *)&(this->RoleToIndex).field_0x70 = 0;
    *(undefined4 *)&(this->RoleToIndex).field_0x74 = 0x20;
    *(undefined4 *)&(this->RoleToIndex).field_0x78 = 0xffffffff;
    *(undefined4 *)&(this->RoleToIndex).field_0x7c = 0;
    *(undefined8 *)&(this->RoleToIndex).field_0x88 = 0;
    *(undefined4 *)&(this->RoleToIndex).field_0x90 = 0;
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
    ::operator=((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                 *)&this->RoleToIndex,
                (TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                 *)&param_1->RoleToIndex);
    this->Database = param_1->Database;
    piVar1 = &(this->DynamicWeightsSqrtBuffer).ArrayMax;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar3 = (param_1->DynamicWeightsSqrtBuffer).ArrayNum;
    pFVar4 = (param_1->DynamicWeightsSqrtBuffer).AllocatorInstance.Data;
    (this->DynamicWeightsSqrtBuffer).ArrayNum = iVar3;
    if (iVar3 == 0) {
      *piVar1 = 0;
    }
    else {
      Core::Private::ReallocForCopy<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
      memcpy((pTVar2->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 2);
    }
    (this->DynamicWeightsSqrt).DataPtr = (float *)0x0;
    (this->DynamicWeightsSqrt).ArrayNum = 0;
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    iVar3 = (this->DynamicWeightsSqrtBuffer).ArrayNum;
    if (iVar3 < 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        pFVar9 = (FDebugDrawParams *)(*pcVar6)();
        return pFVar9;
      }
    }
    (this->DynamicWeightsSqrt).DataPtr = (float *)pFVar4;
    *(ulonglong *)&(this->DynamicWeightsSqrt).ArrayNum = CONCAT44(uStack_c,iVar3);
  }
  return this;
}

// CanDraw @ 14a8b1b80

bool __thiscall UE::PoseSearch::FDebugDrawParams::CanDraw(FDebugDrawParams *this)

{
  if (((((this->AnimContexts).ArrayNum != 0) &&
       (*(int *)&(this->RoleToIndex).field_0x58 != *(int *)&(this->RoleToIndex).field_0x7c)) &&
      (this->Database != (UPoseSearchDatabase *)0x0)) &&
     ((this->Database->Schema).field0_0x0.DebugPtr != (UPoseSearchSchema *)0x0)) {
    return true;
  }
  return false;
}

// DrawCentripetalCatmullRomSpline @ 14a8b2920

void __thiscall
UE::PoseSearch::FDebugDrawParams::DrawCentripetalCatmullRomSpline
          (FDebugDrawParams *this,TArrayView<UE::Math::TVector<double>_const_,int> *param_1,
          TArrayView<FColor_const_,int> *param_2,float param_3,int param_4,float param_5)

{
  double *pdVar1;
  int iVar2;
  FColor FVar3;
  FColor FVar4;
  TVector<double> *pTVar5;
  TVector<double> *pTVar6;
  code *pcVar7;
  double dVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  TVector<double> *pTVar17;
  longlong lVar18;
  uint uVar19;
  double *pdVar20;
  uint uVar21;
  int iVar22;
  longlong lVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  float fVar36;
  double dVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  FColor_u_0 local_1b8;
  float local_1b4;
  uint local_1b0;
  float local_1ac;
  uint local_1a8;
  uint local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  longlong local_160;
  TVector<double> *local_158;
  TVector<double>_u_0 local_148;
  TVector<double>_u_0 local_130;
  double local_108;
  double local_f0;
  
  iVar22 = param_1->ArrayNum;
  iVar2 = param_2->ArrayNum;
  if ((1 < iVar22) && (0 < iVar2)) {
    pTVar17 = TArrayView<UE::Math::TVector<double>_const_,int>::operator[](param_1,0);
    local_1a4 = iVar22 - 1;
    local_130._s_0.X = (pTVar17->field0_0x0)._s_0.X;
    local_130._s_0.Y = (pTVar17->field0_0x0)._s_0.Y;
    local_130._s_0.Z = (pTVar17->field0_0x0)._s_0.Z;
    if (0 < (int)local_1a4) {
      local_1b0 = iVar2 - 1;
      fVar40 = param_3 * __real_3f000000;
      lVar23 = 0;
      fVar39 = __real_3f800000;
      uVar21 = 0;
      local_164 = fVar40;
      do {
        uVar16 = local_1a4;
        uVar19 = 0;
        if (0 < (int)(uVar21 - 1)) {
          uVar19 = uVar21 - 1;
        }
        uVar15 = 0;
        if ((int)uVar19 < param_1->ArrayNum) {
          uVar15 = ~uVar19 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pTVar17 = param_1->DataPtr;
        uVar15 = 0;
        if ((int)uVar21 < param_1->ArrayNum) {
          uVar15 = ~uVar21 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_1a8 = uVar21 + 1;
        pdVar20 = (double *)((longlong)&param_1->DataPtr->field0_0x0 + lVar23);
        uVar15 = 0;
        if ((int)local_1a8 < param_1->ArrayNum) {
          uVar15 = ~local_1a8 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pTVar5 = param_1->DataPtr;
        if ((int)(uVar21 + 2) < (int)local_1a4) {
          uVar16 = uVar21 + 2;
        }
        uVar15 = 0;
        if ((int)uVar16 < param_1->ArrayNum) {
          uVar15 = ~uVar16 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        dVar28 = pdVar20[1] - pTVar17[(int)uVar19].field0_0x0._s_0.Y;
        dVar29 = *pdVar20 - pTVar17[(int)uVar19].field0_0x0._s_0.X;
        dVar27 = pdVar20[2] - pTVar17[(int)uVar19].field0_0x0._s_0.Z;
        pTVar6 = param_1->DataPtr;
        lVar18 = (longlong)(int)uVar16;
        local_160 = lVar18 * 3;
        local_158 = pTVar6;
        fVar24 = powf((float)(dVar28 * dVar28 + dVar29 * dVar29 + dVar27 * dVar27),fVar40);
        dVar29 = *(double *)((longlong)&pTVar5[1].field0_0x0 + lVar23) - *pdVar20;
        dVar27 = *(double *)((longlong)&pTVar5[1].field0_0x0 + lVar23 + 0x10) - pdVar20[2];
        dVar28 = *(double *)((longlong)&pTVar5[1].field0_0x0 + lVar23 + 8) - pdVar20[1];
        fVar38 = (float)(dVar29 * dVar29 + dVar28 * dVar28 + dVar27 * dVar27);
        local_1ac = fVar38;
        local_170 = fVar24;
        fVar25 = powf(fVar38,fVar40);
        dVar29 = pTVar6[lVar18].field0_0x0._s_0.Y -
                 *(double *)((longlong)&pTVar5[1].field0_0x0 + lVar23 + 8);
        dVar28 = pTVar6[lVar18].field0_0x0._s_0.X -
                 *(double *)((longlong)&pTVar5[1].field0_0x0 + lVar23);
        fVar36 = fVar25 + fVar24;
        dVar27 = pTVar6[lVar18].field0_0x0._s_0.Z -
                 *(double *)((longlong)&pTVar5[1].field0_0x0 + lVar23 + 0x10);
        local_19c = (float)(dVar29 * dVar29 + dVar28 * dVar28 + dVar27 * dVar27);
        local_1b4 = fVar36;
        local_168 = fVar25;
        fVar26 = powf(local_19c,fVar40);
        local_1a0 = fVar26 + fVar36;
        local_198 = local_1a0 - fVar24;
        bVar13 = __real_38d1b717 < (float)((uint)fVar24 & __xmm_7fffffff7fffffff7fffffff7fffffff);
        bVar9 = __real_38d1b717 < (float)((uint)fVar25 & __xmm_7fffffff7fffffff7fffffff7fffffff);
        bVar10 = __real_38d1b717 < (float)((uint)fVar26 & __xmm_7fffffff7fffffff7fffffff7fffffff);
        bVar11 = __real_38d1b717 < (float)((uint)fVar36 & __xmm_7fffffff7fffffff7fffffff7fffffff);
        bVar12 = __real_38d1b717 < (float)((uint)local_198 & __xmm_7fffffff7fffffff7fffffff7fffffff)
        ;
        uVar16 = local_1b0;
        if ((int)uVar21 < (int)local_1b0) {
          uVar16 = uVar21;
        }
        uVar21 = 0;
        if ((int)uVar16 < param_2->ArrayNum) {
          uVar21 = ~uVar16 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar3.field0_0x0 = (FColor_u_0)param_2->DataPtr[(int)uVar16].field0_0x0.Bits;
        uVar21 = local_1b0;
        if ((int)local_1a8 < (int)local_1b0) {
          uVar21 = local_1a8;
        }
        uVar16 = 0;
        if ((int)uVar21 < param_2->ArrayNum) {
          uVar16 = ~uVar21 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar22 = 1;
        FVar4.field0_0x0 = (FColor_u_0)param_2->DataPtr[(int)uVar21].field0_0x0.Bits;
        if (1 < param_4) {
          fVar26 = param_3 * __real_bf000000;
          local_16c = fVar39 / (float)(param_4 + -1);
          local_190 = (float)((uint)FVar3.field0_0x0 & 0xff);
          local_18c = (float)((uint)FVar4.field0_0x0 & 0xff);
          local_188 = (float)((uint)FVar3.field0_0x0 >> 8 & 0xff);
          local_184 = (float)((uint)FVar4.field0_0x0 >> 8 & 0xff);
          local_180 = (float)((uint)FVar3.field0_0x0 >> 0x10 & 0xff);
          local_17c = (float)((uint)FVar4.field0_0x0 >> 0x10 & 0xff);
          local_178 = (float)((uint)FVar3.field0_0x0 >> 0x18);
          local_174 = (float)((uint)FVar4.field0_0x0 >> 0x18);
          do {
            fVar41 = (float)iVar22 * local_16c;
            fVar25 = fVar41 * fVar25;
            fVar40 = fVar25 + fVar24;
            if (bVar13) {
              dVar31 = (double)(float)((uint)(fVar25 * (fVar39 / fVar24)) ^
                                      __xmm_80000000800000008000000080000000);
              dVar27 = (double)((fVar39 / fVar24) * fVar40);
              dVar28 = dVar31 * pTVar17[(int)uVar19].field0_0x0._s_0.X + dVar27 * *pdVar20;
              dVar29 = dVar31 * pTVar17[(int)uVar19].field0_0x0._s_0.Y + dVar27 * pdVar20[1];
              dVar27 = dVar27 * pdVar20[2] + dVar31 * pTVar17[(int)uVar19].field0_0x0._s_0.Z;
            }
            else {
              dVar28 = pTVar17[(int)uVar19].field0_0x0._s_0.X;
              dVar29 = pTVar17[(int)uVar19].field0_0x0._s_0.Y;
              dVar27 = pTVar17[(int)uVar19].field0_0x0._s_0.Z;
              local_f0 = dVar27;
            }
            fVar36 = fVar36 - fVar40;
            if (bVar9) {
              fVar39 = powf(fVar38,fVar26);
              dVar33 = (double)(fVar39 * fVar25);
              dVar31 = (double)(fVar39 * fVar36);
              dVar37 = dVar31 * *pdVar20 +
                       dVar33 * *(double *)((longlong)&pTVar5[1].field0_0x0 + lVar23);
              dVar8 = dVar33 * *(double *)((longlong)&pTVar5[1].field0_0x0 + lVar23 + 8) +
                      dVar31 * pdVar20[1];
              dVar31 = dVar31 * pdVar20[2] +
                       dVar33 * *(double *)((longlong)&pTVar5[1].field0_0x0 + lVar23 + 0x10);
            }
            else {
              dVar37 = *pdVar20;
              dVar8 = pdVar20[1];
              dVar31 = pdVar20[2];
              local_f0 = dVar31;
            }
            fVar39 = local_1a0 - fVar40;
            local_194 = fVar39;
            if (bVar10) {
              fVar38 = powf(local_19c,fVar26);
              dVar33 = (double)(fVar38 * fVar39);
              dVar30 = (double)((fVar40 - local_1b4) * fVar38);
              dVar35 = dVar30 * (local_158->field0_0x0).XYZ[local_160] +
                       dVar33 * *(double *)((longlong)&pTVar5[1].field0_0x0 + lVar23);
              dVar34 = dVar30 * *(double *)((longlong)&local_158->field0_0x0 + local_160 * 8 + 8) +
                       dVar33 * *(double *)((longlong)&pTVar5[1].field0_0x0 + lVar23 + 8);
              dVar33 = dVar30 * *(double *)((longlong)&local_158->field0_0x0 + local_160 * 8 + 0x10)
                       + dVar33 * *(double *)((longlong)&pTVar5[1].field0_0x0 + lVar23 + 0x10);
            }
            else {
              pdVar1 = (double *)((longlong)&pTVar5[1].field0_0x0 + lVar23);
              dVar35 = *pdVar1;
              dVar34 = pdVar1[1];
              dVar33 = *(double *)((longlong)&pTVar5[1].field0_0x0 + lVar23 + 0x10);
              local_f0 = dVar33;
            }
            fVar38 = local_1ac;
            if (bVar11) {
              dVar30 = (double)((__real_3f800000 / local_1b4) * fVar40);
              dVar32 = (double)((__real_3f800000 / local_1b4) * fVar36);
              dVar29 = dVar29 * dVar32 + dVar8 * dVar30;
              dVar28 = dVar28 * dVar32 + dVar37 * dVar30;
              dVar27 = dVar31 * dVar30 + dVar27 * dVar32;
            }
            if (bVar12) {
              dVar32 = (double)((__real_3f800000 / local_198) * local_194);
              dVar30 = (double)((__real_3f800000 / local_198) * fVar25);
              dVar37 = dVar37 * dVar32 + dVar35 * dVar30;
              dVar31 = dVar33 * dVar30 + dVar31 * dVar32;
              dVar8 = dVar8 * dVar32 + dVar34 * dVar30;
            }
            if (bVar9) {
              fVar39 = powf(local_1ac,fVar26);
              dVar34 = (double)(fVar39 * fVar36);
              dVar33 = (double)(fVar39 * fVar25);
              dVar28 = dVar28 * dVar34 + dVar33 * dVar37;
              dVar29 = dVar29 * dVar34 + dVar33 * dVar8;
              dVar27 = dVar33 * dVar31 + dVar34 * dVar27;
            }
            local_108 = dVar27;
            fVar39 = __real_3f800000;
            local_148._s_0.Z = local_108;
            local_148._8_4_ = SUB84(dVar29,0);
            local_148._s_0.X = dVar28;
            local_148._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
            fVar40 = __real_3f800000 - fVar41;
            local_1b8._s_0.B =
                 (uchar)((int)ROUND((fVar41 + fVar41) * local_18c + __real_3f000000 +
                                    local_190 * fVar40 + local_190 * fVar40) >> 1);
            local_1b8._s_0.G =
                 (uchar)((int)ROUND((fVar41 + fVar41) * local_184 + __real_3f000000 +
                                    local_188 * fVar40 + local_188 * fVar40) >> 1);
            local_1b8._s_0.R =
                 (uchar)((int)ROUND((fVar41 + fVar41) * local_17c + __real_3f000000 +
                                    local_180 * fVar40 + local_180 * fVar40) >> 1);
            local_1b8._s_0.A =
                 (uchar)((int)ROUND((fVar41 + fVar41) * local_174 + __real_3f000000 +
                                    local_178 * fVar40 + local_178 * fVar40) >> 1);
            DrawLine(this,(TVector<double> *)&local_130._s_0,(TVector<double> *)&local_148._s_0,
                     (FColor *)&local_1b8._s_0,0.0);
            local_130._s_0.Z = local_148._s_0.Z;
            iVar22 = iVar22 + 1;
            local_130._s_0.X = local_148._s_0.X;
            local_130._s_0.Y = local_148._s_0.Y;
            fVar25 = local_168;
            fVar36 = local_1b4;
            fVar24 = local_170;
            fVar40 = local_164;
          } while (iVar22 < param_4);
        }
        lVar23 = lVar23 + 0x18;
        uVar21 = local_1a8;
      } while ((int)local_1a8 < (int)local_1a4);
    }
  }
  return;
}

// DrawCircle @ 14a8b34a0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::PoseSearch::FDebugDrawParams::DrawCircle
          (FDebugDrawParams *this,TMatrix<double> *param_1,float param_2,int param_3,FColor *param_4
          ,float param_5)

{
  code *pcVar1;
  bool bVar2;
  FAnimInstanceProxy *this_00;
  USkinnedMeshComponent *this_01;
  UWorld *pUVar3;
  TArrayView<FChooserEvaluationContext_*_const,int> local_68;
  TArrayView<FChooserEvaluationContext_*_const,int> local_58;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_30;
  
  if ((param_4->field0_0x0)._s_0.A != '\0') {
    local_68.DataPtr = (this->AnimContexts).DataPtr;
    local_68.ArrayNum = (this->AnimContexts).ArrayNum;
    local_68._12_4_ = *(undefined4 *)&(this->AnimContexts).field_0xc;
    this_00 = GetAnimInstanceProxy(&local_68);
    if (this_00 == (FAnimInstanceProxy *)0x0) {
      local_58.DataPtr = (this->AnimContexts).DataPtr;
      local_58.ArrayNum = (this->AnimContexts).ArrayNum;
      local_58._12_4_ = *(undefined4 *)&(this->AnimContexts).field_0xc;
      this_01 = PoseSearch::GetMesh(&local_58,0);
      if ((this_01 == (USkinnedMeshComponent *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("SkinnedMeshComponent",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                             ,0xba,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pUVar3 = (UWorld *)this_01->_padding_;
      if ((pUVar3 == (UWorld *)0x0) &&
         (pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this_01),
         pUVar3 == (UWorld *)0x0)) {
        return;
      }
      DrawDebugCircle(pUVar3,param_1,(double)param_2,param_3,param_4,false,0.0,'\x01',param_5,false)
      ;
    }
    else {
      local_48._s_0.X = param_1->M[0][0];
      local_48._s_0.Y = param_1->M[0][1];
      local_30._s_0.X = param_1->M[3][0];
      local_30._s_0.Y = param_1->M[3][1];
      local_48._s_0.Z = param_1->M[0][2];
      local_30._s_0.Z = param_1->M[3][2];
      FAnimInstanceProxy::AnimDrawDebugCircle
                (this_00,(TVector<double> *)&local_30._s_0,param_2,param_3,param_4,
                 (TVector<double> *)&local_48._s_0,false,0.0,SDPG_Foreground,param_5);
    }
  }
  return;
}

// DrawCircle @ 14a8b3630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::PoseSearch::FDebugDrawParams::DrawCircle
          (FDebugDrawParams *this,TVector<double> *param_1,TVector<double> *param_2,float param_3,
          int param_4,FColor *param_5,float param_6)

{
  double *pdVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  FAnimInstanceProxy *this_00;
  USkinnedMeshComponent *this_01;
  UWorld *pUVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double dVar11;
  double dVar12;
  undefined1 auStackY_268 [32];
  TVector<double>_u_0 local_218;
  TVector<double>_u_0 local_200;
  double local_1e8;
  double local_1e0;
  TArrayView<FChooserEvaluationContext_*_const,int> local_1d8;
  TArrayView<FChooserEvaluationContext_*_const,int> local_1c8;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [16];
  double local_188;
  undefined8 uStack_180;
  undefined1 local_178 [16];
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  TVector<double>_u_0 local_138;
  undefined8 uStack_120;
  undefined1 local_118 [16];
  double local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  double local_e8;
  undefined8 uStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_268;
  dVar4 = (param_2->field0_0x0)._s_0.X;
  dVar5 = (param_2->field0_0x0)._s_0.Y;
  local_218._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  dVar3 = dVar4 * dVar4 + dVar5 * dVar5 + local_218._s_0.Z * local_218._s_0.Z;
  if (__real_3e45798ee0000000 < dVar3) {
    local_1e8 = __real_3ff0000000000000 / SQRT(dVar3);
    dVar5 = dVar5 * local_1e8;
    uVar9 = (undefined4)((ulonglong)dVar5 >> 0x20);
    local_138._s_0.Z = local_218._s_0.Z * local_1e8;
    dVar4 = dVar4 * local_1e8;
    dVar3 = dVar5 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z -
            local_138._s_0.Z * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
    dVar6 = local_138._s_0.Z * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X -
            dVar4 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
    dVar12 = dVar4 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y -
             dVar5 * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
    dVar11 = dVar6 * dVar6 + dVar3 * dVar3 + dVar12 * dVar12;
    if (dVar11 <= __real_3e45798ee0000000) {
      local_118._8_8_ = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
      local_118._0_8_ = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
      local_108 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
      local_d8 = (param_1->field0_0x0)._s_0.X;
      dStack_d0 = (param_1->field0_0x0)._s_0.Y;
      local_f8._8_8_ = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Y;
      local_f8._0_8_ = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.X;
      local_c8 = (param_1->field0_0x0)._s_0.Z;
      local_138._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
      local_138._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
      local_138._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
      local_e8 = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z;
    }
    else {
      local_1e0 = __real_3ff0000000000000 / SQRT(dVar11);
      local_188 = dVar12 * local_1e0;
      dVar3 = dVar3 * local_1e0;
      dVar6 = dVar6 * local_1e0;
      uVar10 = (undefined4)((ulonglong)dVar6 >> 0x20);
      uStack_1a0 = 0;
      uStack_180 = 0;
      dVar11 = dVar5 * local_188 - local_138._s_0.Z * dVar6;
      dVar12 = local_138._s_0.Z * dVar3 - dVar4 * local_188;
      local_168 = dVar4 * dVar6 - dVar5 * dVar3;
      local_1b8._8_4_ = SUB84(dVar5,0);
      local_1b8._0_8_ = dVar4;
      local_1b8._12_4_ = uVar9;
      local_138._8_4_ = SUB84(dVar5,0);
      local_138._s_0.X = dVar4;
      local_138._12_4_ = uVar9;
      local_198._8_4_ = SUB84(dVar6,0);
      local_198._0_8_ = dVar3;
      local_198._12_4_ = uVar10;
      local_118._8_4_ = SUB84(dVar6,0);
      local_118._0_8_ = dVar3;
      local_118._12_4_ = uVar10;
      uVar9 = SUB84(dVar12,0);
      uVar10 = (undefined4)((ulonglong)dVar12 >> 0x20);
      uStack_160 = 0;
      pdVar1 = &(param_1->field0_0x0)._s_0.Z;
      local_148 = *(undefined4 *)pdVar1;
      uStack_144 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0x14);
      local_c8 = *pdVar1;
      local_178._8_4_ = uVar9;
      local_178._0_8_ = dVar11;
      local_178._12_4_ = uVar10;
      local_f8._8_4_ = uVar9;
      local_f8._0_8_ = dVar11;
      local_f8._12_4_ = uVar10;
      local_158 = (param_1->field0_0x0)._s_0.X;
      dStack_150 = (param_1->field0_0x0)._s_0.Y;
      local_1a8 = local_138._s_0.Z;
      uStack_140 = SUB84(__real_3ff0000000000000,0);
      uStack_13c = (int)((ulonglong)__real_3ff0000000000000 >> 0x20);
      local_108 = local_188;
      local_e8 = local_168;
      local_d8 = local_158;
      dStack_d0 = dStack_150;
    }
    dStack_c0 = __real_3ff0000000000000;
    uStack_e0 = 0;
    uStack_100 = 0;
    uStack_120 = 0;
    if ((param_5->field0_0x0)._s_0.A != '\0') {
      local_1d8.DataPtr = (this->AnimContexts).DataPtr;
      local_1d8.ArrayNum = (this->AnimContexts).ArrayNum;
      local_1d8._12_4_ = *(undefined4 *)&(this->AnimContexts).field_0xc;
      this_00 = GetAnimInstanceProxy(&local_1d8);
      if (this_00 == (FAnimInstanceProxy *)0x0) {
        local_1c8.DataPtr = (this->AnimContexts).DataPtr;
        local_1c8.ArrayNum = (this->AnimContexts).ArrayNum;
        local_1c8._12_4_ = *(undefined4 *)&(this->AnimContexts).field_0xc;
        this_01 = PoseSearch::GetMesh(&local_1c8,0);
        if ((this_01 == (USkinnedMeshComponent *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("SkinnedMeshComponent",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                               ,0xba,L""), bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pUVar8 = (UWorld *)this_01->_padding_;
        if ((pUVar8 == (UWorld *)0x0) &&
           (pUVar8 = UActorComponent::GetWorld_Uncached((UActorComponent *)this_01),
           pUVar8 == (UWorld *)0x0)) {
          return;
        }
        DrawDebugCircle(pUVar8,(TMatrix<double> *)&local_138._s_0,(double)param_3,param_4,param_5,
                        false,0.0,'\x01',param_6,false);
      }
      else {
        local_200._s_0.X = local_138._s_0.X;
        local_200._s_0.Y = local_138._s_0.Y;
        local_218._s_0.X = local_d8;
        local_218._s_0.Y = dStack_d0;
        local_200._s_0.Z = local_138._s_0.Z;
        local_218._s_0.Z = local_c8;
        FAnimInstanceProxy::AnimDrawDebugCircle
                  (this_00,(TVector<double> *)&local_218._s_0,param_3,param_4,param_5,
                   (TVector<double> *)&local_200._s_0,false,0.0,SDPG_Foreground,param_6);
      }
    }
  }
  return;
}

// DrawFeatureVector @ 14a8b3aa0

void __thiscall
UE::PoseSearch::FDebugDrawParams::DrawFeatureVector(FDebugDrawParams *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UPoseSearchDatabase *this_00;
  UPoseSearchSchema *pUVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  bool bVar9;
  FSearchIndex *this_01;
  TArrayView<float_const_,int> *pTVar10;
  FScriptContainerElement *pFVar11;
  TArray<float,TSizedDefaultAllocator<32>_> local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  TArrayView<float_const_,int> local_28 [2];
  
  if (((((this->AnimContexts).ArrayNum != 0) &&
       (*(int *)&(this->RoleToIndex).field_0x58 != *(int *)&(this->RoleToIndex).field_0x7c)) &&
      (this_00 = this->Database, this_00 != (UPoseSearchDatabase *)0x0)) &&
     ((this_00->Schema).field0_0x0.DebugPtr != (UPoseSearchSchema *)0x0)) {
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 0;
    this_01 = UPoseSearchDatabase::GetSearchIndex(this_00);
    pTVar10 = FSearchIndex::GetPoseValuesSafe(this_01,local_28,param_1,&local_58);
    uVar5 = *(undefined4 *)&pTVar10->DataPtr;
    uVar6 = *(undefined4 *)((longlong)&pTVar10->DataPtr + 4);
    iVar7 = pTVar10->ArrayNum;
    uVar8 = *(undefined4 *)&pTVar10->field_0xc;
    local_48 = uVar5;
    uStack_44 = uVar6;
    iStack_40 = iVar7;
    uStack_3c = uVar8;
    if ((((this->AnimContexts).ArrayNum != 0) &&
        (*(int *)&(this->RoleToIndex).field_0x58 != *(int *)&(this->RoleToIndex).field_0x7c)) &&
       ((this->Database != (UPoseSearchDatabase *)0x0 &&
        (pUVar3 = (this->Database->Schema).field0_0x0.DebugPtr, pUVar3 != (UPoseSearchSchema *)0x0))
       )) {
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)pUVar3);
      }
      if (iVar7 == pUVar3->SchemaCardinality) {
        pFVar11 = (pUVar3->FinalizedChannels).AllocatorInstance.Data;
        iVar2 = (pUVar3->FinalizedChannels).ArrayNum;
        if ((iVar2 < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar1 = pFVar11 + (longlong)iVar2 * 8;
        for (; pFVar11 != pFVar1; pFVar11 = pFVar11 + 8) {
          local_38 = uVar5;
          uStack_34 = uVar6;
          iStack_30 = iVar7;
          uStack_2c = uVar8;
          (**(code **)(**(longlong **)pFVar11 + 0x2e0))(*(longlong **)pFVar11,this,&local_38);
        }
      }
    }
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
  }
  return;
}

// DrawFeatureVector @ 14a8b3c20

void __thiscall
UE::PoseSearch::FDebugDrawParams::DrawFeatureVector
          (FDebugDrawParams *this,TArrayView<float_const_,int> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UPoseSearchSchema *pUVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  if (((((this->AnimContexts).ArrayNum != 0) &&
       (*(int *)&(this->RoleToIndex).field_0x58 != *(int *)&(this->RoleToIndex).field_0x7c)) &&
      (this->Database != (UPoseSearchDatabase *)0x0)) &&
     (pUVar3 = (this->Database->Schema).field0_0x0.DebugPtr, pUVar3 != (UPoseSearchSchema *)0x0)) {
    if (GC::GIsIncrementalReachabilityPending) {
      GC::MarkAsReachable((UObject *)pUVar3);
    }
    if (param_1->ArrayNum == pUVar3->SchemaCardinality) {
      pFVar6 = (pUVar3->FinalizedChannels).AllocatorInstance.Data;
      iVar2 = (pUVar3->FinalizedChannels).ArrayNum;
      if ((iVar2 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar1 = pFVar6 + (longlong)iVar2 * 8;
      for (; pFVar6 != pFVar1; pFVar6 = pFVar6 + 8) {
        local_18 = *(undefined4 *)&param_1->DataPtr;
        uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
        iStack_10 = param_1->ArrayNum;
        uStack_c = *(undefined4 *)&param_1->field_0xc;
        (**(code **)(**(longlong **)pFVar6 + 0x2e0))(*(longlong **)pFVar6,this,&local_18);
      }
    }
  }
  return;
}

// DrawLine @ 14a8b3d20

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::PoseSearch::FDebugDrawParams::DrawLine
          (FDebugDrawParams *this,TVector<double> *param_1,TVector<double> *param_2,FColor *param_3,
          float param_4)

{
  code *pcVar1;
  bool bVar2;
  FAnimInstanceProxy *this_00;
  USkinnedMeshComponent *this_01;
  UWorld *pUVar3;
  TArrayView<FChooserEvaluationContext_*_const,int> local_28;
  TArrayView<FChooserEvaluationContext_*_const,int> local_18;
  
  if ((param_3->field0_0x0)._s_0.A != '\0') {
    local_28.DataPtr = (this->AnimContexts).DataPtr;
    local_28.ArrayNum = (this->AnimContexts).ArrayNum;
    local_28._12_4_ = *(undefined4 *)&(this->AnimContexts).field_0xc;
    this_00 = GetAnimInstanceProxy(&local_28);
    if (this_00 == (FAnimInstanceProxy *)0x0) {
      local_18.DataPtr = (this->AnimContexts).DataPtr;
      local_18.ArrayNum = (this->AnimContexts).ArrayNum;
      local_18._12_4_ = *(undefined4 *)&(this->AnimContexts).field_0xc;
      this_01 = PoseSearch::GetMesh(&local_18,0);
      if ((this_01 == (USkinnedMeshComponent *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("SkinnedMeshComponent",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                             ,0xba,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pUVar3 = (UWorld *)this_01->_padding_;
      if ((pUVar3 == (UWorld *)0x0) &&
         (pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this_01),
         pUVar3 == (UWorld *)0x0)) {
        return;
      }
      DrawDebugLine(pUVar3,param_1,param_2,param_3,false,0.0,'\x01',param_4);
    }
    else {
      FAnimInstanceProxy::AnimDrawDebugLine
                (this_00,param_1,param_2,param_3,false,0.0,param_4,SDPG_Foreground);
    }
  }
  return;
}

// DrawPoint @ 14a8b3e50

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::PoseSearch::FDebugDrawParams::DrawPoint
          (FDebugDrawParams *this,TVector<double> *param_1,FColor *param_2,float param_3)

{
  code *pcVar1;
  bool bVar2;
  FAnimInstanceProxy *this_00;
  USkinnedMeshComponent *this_01;
  UWorld *pUVar3;
  TArrayView<FChooserEvaluationContext_*_const,int> local_38;
  TArrayView<FChooserEvaluationContext_*_const,int> local_28 [2];
  
  if ((param_2->field0_0x0)._s_0.A != '\0') {
    local_38.DataPtr = (this->AnimContexts).DataPtr;
    local_38.ArrayNum = (this->AnimContexts).ArrayNum;
    local_38._12_4_ = *(undefined4 *)&(this->AnimContexts).field_0xc;
    this_00 = GetAnimInstanceProxy(&local_38);
    if (this_00 == (FAnimInstanceProxy *)0x0) {
      local_28[0].DataPtr = (this->AnimContexts).DataPtr;
      local_28[0].ArrayNum = (this->AnimContexts).ArrayNum;
      local_28[0]._12_4_ = *(undefined4 *)&(this->AnimContexts).field_0xc;
      this_01 = PoseSearch::GetMesh(local_28,0);
      if ((this_01 == (USkinnedMeshComponent *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("SkinnedMeshComponent",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                             ,0xba,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pUVar3 = (UWorld *)this_01->_padding_;
      if ((pUVar3 == (UWorld *)0x0) &&
         (pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this_01),
         pUVar3 == (UWorld *)0x0)) {
        return;
      }
      DrawDebugPoint(pUVar3,param_1,param_3,param_2,false,0.0,'\x01');
    }
    else {
      FAnimInstanceProxy::AnimDrawDebugPoint
                (this_00,param_1,param_3,param_2,false,0.0,SDPG_Foreground);
    }
  }
  return;
}

// DrawSphere @ 14a8b3f60

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::PoseSearch::FDebugDrawParams::DrawSphere
          (FDebugDrawParams *this,TVector<double> *param_1,float param_2,int param_3,FColor *param_4
          ,float param_5)

{
  code *pcVar1;
  bool bVar2;
  FAnimInstanceProxy *this_00;
  USkinnedMeshComponent *this_01;
  UWorld *pUVar3;
  TArrayView<FChooserEvaluationContext_*_const,int> local_38;
  TArrayView<FChooserEvaluationContext_*_const,int> local_28 [2];
  
  if ((param_4->field0_0x0)._s_0.A != '\0') {
    local_38.DataPtr = (this->AnimContexts).DataPtr;
    local_38.ArrayNum = (this->AnimContexts).ArrayNum;
    local_38._12_4_ = *(undefined4 *)&(this->AnimContexts).field_0xc;
    this_00 = GetAnimInstanceProxy(&local_38);
    if (this_00 == (FAnimInstanceProxy *)0x0) {
      local_28[0].DataPtr = (this->AnimContexts).DataPtr;
      local_28[0].ArrayNum = (this->AnimContexts).ArrayNum;
      local_28[0]._12_4_ = *(undefined4 *)&(this->AnimContexts).field_0xc;
      this_01 = PoseSearch::GetMesh(local_28,0);
      if ((this_01 == (USkinnedMeshComponent *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("SkinnedMeshComponent",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                             ,0xba,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pUVar3 = (UWorld *)this_01->_padding_;
      if ((pUVar3 == (UWorld *)0x0) &&
         (pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this_01),
         pUVar3 == (UWorld *)0x0)) {
        return;
      }
      DrawDebugSphere(pUVar3,param_1,param_2,param_3,param_4,false,0.0,'\x01',param_5);
    }
    else {
      FAnimInstanceProxy::AnimDrawDebugSphere
                (this_00,param_1,param_2,param_3,param_4,false,0.0,param_5,SDPG_Foreground);
    }
  }
  return;
}

// DrawWedge @ 14a8b40b0

void __thiscall
UE::PoseSearch::FDebugDrawParams::DrawWedge
          (FDebugDrawParams *this,TVector<double> *param_1,TVector<double> *param_2,float param_3,
          float param_4,float param_5,int param_6,FColor *param_7,float param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_f0;
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_c0 [7];
  
  dVar3 = (param_2->field0_0x0)._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  if ((((param_7->field0_0x0)._s_0.A != '\0') && (0 < param_6)) &&
     (dVar9 = dVar2 * dVar2 + dVar3 * dVar3 + dVar1 * dVar1, __real_3e45798ee0000000 < dVar9)) {
    dVar9 = __real_3ff0000000000000 / SQRT(dVar9);
    local_f0._s_0.Z = dVar1 * dVar9;
    local_f0._s_0.X = dVar3 * dVar9;
    fVar16 = param_5 * __real_bf000000;
    local_f0._s_0.Y = dVar2 * dVar9;
    UE::Math::TVector<double>::RotateAngleAxis
              ((TVector<double> *)&local_f0._s_0,(TVector<double> *)&local_108._s_0,(double)fVar16,
               &UE::Math::TVector<double>::ZAxisVector);
    uVar10 = SUB84(local_108._s_0.X,0);
    uVar11 = (undefined4)((ulonglong)local_108._0_8_ >> 0x20);
    uVar12 = SUB84(local_108._s_0.Y,0);
    uVar13 = (undefined4)((ulonglong)local_108._8_8_ >> 0x20);
    uVar14 = SUB84(local_108._s_0.Z,0);
    uVar15 = (undefined4)((ulonglong)local_108._16_8_ >> 0x20);
    dVar1 = (double)param_3;
    dVar3 = (double)param_4;
    local_d8._s_0.X = dVar1 * local_108._s_0.X + (param_1->field0_0x0)._s_0.X;
    local_c0[0]._8_8_ = dVar3 * local_108._s_0.Y + (param_1->field0_0x0)._s_0.Y;
    local_d8._s_0.Y = dVar1 * local_108._s_0.Y + (param_1->field0_0x0)._s_0.Y;
    local_d8._s_0.Z = dVar1 * local_108._s_0.Z + (param_1->field0_0x0)._s_0.Z;
    local_c0[0]._0_8_ = dVar3 * local_108._s_0.X + (param_1->field0_0x0)._s_0.X;
    local_c0[0]._16_8_ = dVar3 * local_108._s_0.Z + (param_1->field0_0x0)._s_0.Z;
    DrawLine(this,(TVector<double> *)&local_c0[0]._s_0,(TVector<double> *)&local_d8._s_0,param_7,0.0
            );
    if (1 < param_6) {
      uVar8 = (ulonglong)(param_6 - 1);
      do {
        fVar16 = fVar16 + param_5 / (float)(param_6 + -1);
        UE::Math::TVector<double>::RotateAngleAxis
                  ((TVector<double> *)&local_f0._s_0,(TVector<double> *)&local_c0[0]._s_0,
                   (double)fVar16,&UE::Math::TVector<double>::ZAxisVector);
        uVar7 = local_c0[0]._s_0.Z;
        uVar6 = local_c0[0]._s_0.Y;
        uVar5 = local_c0[0]._s_0.X;
        dVar2 = (double)local_c0[0]._16_8_;
        dVar9 = (double)local_c0[0]._0_8_;
        dVar4 = (double)local_c0[0]._8_8_;
        local_d8._s_0.X = dVar1 * (double)local_c0[0]._0_8_ + (param_1->field0_0x0)._s_0.X;
        local_d8._s_0.Y = dVar1 * (double)local_c0[0]._8_8_ + (param_1->field0_0x0)._s_0.Y;
        local_d8._s_0.Z = dVar1 * (double)local_c0[0]._16_8_ + (param_1->field0_0x0)._s_0.Z;
        local_c0[0]._8_8_ = dVar1 * (double)CONCAT44(uVar13,uVar12) + (param_1->field0_0x0)._s_0.Y;
        local_c0[0]._0_8_ = dVar1 * (double)CONCAT44(uVar11,uVar10) + (param_1->field0_0x0)._s_0.X;
        local_c0[0]._16_8_ = dVar1 * (double)CONCAT44(uVar15,uVar14) + (param_1->field0_0x0)._s_0.Z;
        DrawLine(this,(TVector<double> *)&local_c0[0]._s_0,(TVector<double> *)&local_d8._s_0,param_7
                 ,0.0);
        local_c0[0]._0_8_ = dVar3 * (double)uVar5 + (param_1->field0_0x0)._s_0.X;
        local_c0[0]._8_8_ = dVar3 * (double)uVar6 + (param_1->field0_0x0)._s_0.Y;
        local_c0[0]._16_8_ = dVar3 * (double)uVar7 + (param_1->field0_0x0)._s_0.Z;
        local_d8._s_0.X = dVar3 * (double)CONCAT44(uVar11,uVar10) + (param_1->field0_0x0)._s_0.X;
        local_d8._s_0.Y = dVar3 * (double)CONCAT44(uVar13,uVar12) + (param_1->field0_0x0)._s_0.Y;
        local_d8._s_0.Z = dVar3 * (double)CONCAT44(uVar15,uVar14) + (param_1->field0_0x0)._s_0.Z;
        DrawLine(this,(TVector<double> *)&local_d8._s_0,(TVector<double> *)&local_c0[0]._s_0,param_7
                 ,0.0);
        local_108._s_0.Z = (double)uVar7;
        uVar14 = (undefined4)uVar7;
        uVar15 = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_108._s_0.X = (double)uVar5;
        local_108._s_0.Y = (double)uVar6;
        uVar12 = (undefined4)uVar6;
        uVar13 = (undefined4)((ulonglong)uVar6 >> 0x20);
        uVar10 = (undefined4)uVar5;
        uVar11 = (undefined4)((ulonglong)uVar5 >> 0x20);
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    local_c0[0]._0_8_ = (double)CONCAT44(uVar11,uVar10) * dVar1 + (param_1->field0_0x0)._s_0.X;
    local_c0[0]._8_8_ = (double)CONCAT44(uVar13,uVar12) * dVar1 + (param_1->field0_0x0)._s_0.Y;
    local_c0[0]._16_8_ = dVar1 * (double)CONCAT44(uVar15,uVar14) + (param_1->field0_0x0)._s_0.Z;
    local_d8._s_0.Z = (double)CONCAT44(uVar15,uVar14) * dVar3 + (param_1->field0_0x0)._s_0.Z;
    local_d8._s_0.X = (double)CONCAT44(uVar11,uVar10) * dVar3 + (param_1->field0_0x0)._s_0.X;
    local_d8._s_0.Y = (double)CONCAT44(uVar13,uVar12) * dVar3 + (param_1->field0_0x0)._s_0.Y;
    DrawLine(this,(TVector<double> *)&local_d8._s_0,(TVector<double> *)&local_c0[0]._s_0,param_7,0.0
            );
  }
  return;
}

// ExtractPermutationTime @ 14a8b5600

float __thiscall
UE::PoseSearch::FDebugDrawParams::ExtractPermutationTime
          (FDebugDrawParams *this,TArrayView<float_const_,int> *param_1)

{
  int iVar1;
  UPoseSearchSchema *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  UPoseSearchFeatureChannel *pUVar6;
  float fVar7;
  <lambda_1> local_res8;
  undefined4 uStack_2c;
  TArrayView<TObjectPtr<UPoseSearchFeatureChannel>_const_,int> local_28;
  TArrayView<float_const_,int> local_18;
  
  if ((this->Database != (UPoseSearchDatabase *)0x0) &&
     (pUVar2 = (this->Database->Schema).field0_0x0.DebugPtr, pUVar2 != (UPoseSearchSchema *)0x0)) {
    if (GC::GIsIncrementalReachabilityPending) {
      GC::MarkAsReachable((UObject *)pUVar2);
    }
    pFVar3 = (pUVar2->FinalizedChannels).AllocatorInstance.Data;
    iVar1 = (pUVar2->FinalizedChannels).ArrayNum;
    if (iVar1 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        fVar7 = (float)(*pcVar4)();
        return fVar7;
      }
    }
    local_28._12_4_ = uStack_2c;
    local_28.ArrayNum = iVar1;
    local_28.DataPtr = (TObjectPtr<UPoseSearchFeatureChannel> *)pFVar3;
    pUVar6 = UPoseSearchSchema::
             FindChannelRecursive<_UE::PoseSearch::FDebugDrawParams::ExtractPermutationTime_::__l6::<lambda_1>_>
                       (&local_28,local_res8);
    if (pUVar6 != (UPoseSearchFeatureChannel *)0x0) {
      if (pUVar6->ChannelCardinality != 1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("FoundPermutationTime->GetChannelCardinality() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                           ,0x132,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          fVar7 = (float)(*pcVar4)();
          return fVar7;
        }
      }
      local_18.DataPtr = param_1->DataPtr;
      local_18.ArrayNum = param_1->ArrayNum;
      local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
      fVar7 = FFeatureVectorHelper::DecodeFloat(&local_18,pUVar6->ChannelDataOffset);
      return fVar7;
    }
  }
  return 0.0;
}

// ExtractPosition @ 14a8b5ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TVector<double> * __thiscall
UE::PoseSearch::FDebugDrawParams::ExtractPosition
          (FDebugDrawParams *this,TVector<double> *__return_storage_ptr__,
          TArrayView<float_const_,int> *param_1,float param_2,schar param_3,FName *param_4,
          EPermutationTimeType param_5,int param_6,float param_7)

{
  double dVar1;
  undefined1 auVar2 [16];
  int iVar3;
  UPoseSearchSchema *this_00;
  IPoseHistory *pIVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  char cVar13;
  TVector<double> *pTVar14;
  UPoseSearchFeatureChannel *pUVar15;
  TTransform<double> *pTVar16;
  TTuple<FName,int> *pTVar17;
  IPoseHistory **ppIVar18;
  USkinnedMeshComponent *pUVar19;
  TArrayView<FBoneReference_const_,int> *pTVar20;
  FBoneReference *pFVar21;
  int *piVar22;
  int iVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined4 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auStack_338 [32];
  undefined2 local_318;
  undefined2 local_310;
  undefined1 local_308;
  int local_2f8;
  float local_2f0;
  schar sStack_2ec;
  undefined2 uStack_2eb;
  undefined1 uStack_2e9;
  FName *pFStack_2e8;
  EPermutationTimeType local_2e0;
  undefined2 uStack_2df;
  undefined1 uStack_2dd;
  int iStack_2dc;
  USkeleton *local_2d8;
  int iStack_2d0;
  undefined4 uStack_2cc;
  undefined2 local_2c3;
  undefined1 local_2c1;
  undefined2 local_2b7;
  undefined1 local_2b5;
  TArrayView<TObjectPtr<UPoseSearchFeatureChannel>_const_,int> local_2a8;
  TArrayView<float_const_,int> local_298;
  TArrayView<FChooserEvaluationContext_*_const,int> local_288;
  <lambda_1> local_278;
  TVector<double>_u_0 local_258;
  TArrayView<FBoneReference_const_,int> local_240;
  TArrayView<FBoneReference_const_,int> local_230;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  undefined1 local_1f8 [16];
  undefined8 local_1e8;
  double dStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  double dStack_1c0;
  TTransform<double> local_1b8;
  undefined1 local_158 [96];
  TTransform<double> local_f8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_338;
  if ((param_5 == UsePermutationTime) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("PermutationTimeType != EPermutationTimeType::UsePermutationTime",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                          ,0x13c,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    pTVar14 = (TVector<double> *)(*pcVar5)();
    return pTVar14;
  }
  if ((this->Database == (UPoseSearchDatabase *)0x0) ||
     (this_00 = (this->Database->Schema).field0_0x0.DebugPtr, this_00 == (UPoseSearchSchema *)0x0))
  {
LAB_14a8b6437:
    pTVar16 = GetRootBoneTransform(this,&local_f8,param_4,param_7 + param_2);
  }
  else {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)this_00);
    }
    iVar23 = (int)param_3;
    uStack_2eb = local_2c3;
    uStack_2e9 = local_2c1;
    uStack_2df = local_2b7;
    uStack_2dd = local_2b5;
    iStack_2dc = param_6;
    local_2d8 = (USkeleton *)(this_00->FinalizedChannels).AllocatorInstance.Data;
    local_2e0 = param_5;
    iVar3 = (this_00->FinalizedChannels).ArrayNum;
    sStack_2ec = param_3;
    pFStack_2e8 = param_4;
    local_2f0 = param_2;
    if ((iVar3 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TVector<double> *)(*pcVar5)();
      return pTVar14;
    }
    local_278.SchemaBoneIdx = sStack_2ec;
    local_278.SampleTimeOffset = local_2f0;
    local_278._5_2_ = uStack_2eb;
    local_278._7_1_ = uStack_2e9;
    local_278._17_2_ = uStack_2df;
    local_278.PermutationTimeType = local_2e0;
    local_278._19_1_ = uStack_2dd;
    local_278.SamplingAttributeId = iStack_2dc;
    local_278.Role = pFStack_2e8;
    local_2a8._12_4_ = uStack_2cc;
    local_2a8.ArrayNum = iVar3;
    local_2a8.DataPtr = (TObjectPtr<UPoseSearchFeatureChannel> *)local_2d8;
    iStack_2d0 = iVar3;
    pUVar15 = UPoseSearchSchema::
              FindChannelRecursive<_UE::PoseSearch::FDebugDrawParams::ExtractPosition_::__l13::<lambda_1>_>
                        (&local_2a8,&local_278);
    if (pUVar15 != (UPoseSearchFeatureChannel *)0x0) {
      local_298.DataPtr = param_1->DataPtr;
      local_298.ArrayNum = param_1->ArrayNum;
      local_298._12_4_ = *(undefined4 *)&param_1->field_0xc;
      FFeatureVectorHelper::DecodeVector
                ((TVector<double> *)&local_258._s_0,&local_298,pUVar15->ChannelDataOffset,
                 *(EComponentStrippingVector *)((longlong)&pUVar15[2]._padding_ + 3));
      pTVar16 = GetRootBoneTransform
                          (this,&local_1b8,(FName *)((longlong)&pUVar15[1]._padding_ + 4),0.0);
      auVar2 = *(undefined1 (*) [16])(pTVar16->Rotation).ZW.m128d_f64;
      dVar9 = local_258._s_0.Z * (pTVar16->Scale3D).ZW.m128d_f64[0];
      dVar10 = (pTVar16->Scale3D).ZW.m128d_f64[1] * 0.0;
      dVar11 = (pTVar16->Rotation).ZW.m128d_f64[1];
      dVar7 = (pTVar16->Scale3D).XY.m128d_f64[0] * local_258._s_0.X;
      dVar8 = (pTVar16->Scale3D).XY.m128d_f64[1] * local_258._s_0.Y;
      uVar31 = (undefined4)((ulonglong)dVar8 >> 0x20);
      auVar24 = *(undefined1 (*) [16])(pTVar16->Rotation).XY.m128d_f64;
      auVar26 = blendpd(auVar24,auVar2,2);
      auVar32._8_4_ = SUB84(dVar8,0);
      auVar32._0_8_ = dVar7;
      auVar32._12_4_ = uVar31;
      dVar1 = auVar2._0_8_;
      auVar33._0_8_ = auVar32._8_8_ * auVar24._0_8_ - auVar24._8_8_ * dVar7;
      auVar33._8_8_ = dVar9 * auVar24._8_8_ - dVar1 * dVar8;
      auVar34._8_4_ = SUB84(dVar8,0);
      auVar34._0_8_ = dVar7;
      auVar34._12_4_ = uVar31;
      auVar24._8_4_ = SUB84(dVar10,0);
      auVar24._0_8_ = dVar9;
      auVar24._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      auVar24 = blendpd(auVar34,auVar24,2);
      auVar25._0_8_ = auVar24._0_8_ * dVar1 - auVar26._0_8_ * dVar9;
      auVar25._8_8_ = auVar24._8_8_ * auVar2._8_8_ - auVar26._8_8_ * dVar10;
      auVar24 = *(undefined1 (*) [16])(pTVar16->Rotation).XY.m128d_f64;
      auVar34 = blendpd(auVar33,auVar25,2);
      dVar10 = auVar33._8_8_ + auVar33._8_8_;
      dVar6 = auVar25._0_8_ + auVar25._0_8_;
      uVar31 = (undefined4)((ulonglong)dVar6 >> 0x20);
      auVar35._0_8_ = auVar34._0_8_ + auVar34._0_8_;
      auVar35._8_8_ = auVar34._8_8_ + auVar34._8_8_;
      auVar29._8_4_ = SUB84(dVar6,0);
      auVar29._0_8_ = dVar10;
      auVar29._12_4_ = uVar31;
      auVar27._8_4_ = SUB84(dVar6,0);
      auVar27._0_8_ = dVar10;
      auVar27._12_4_ = uVar31;
      auVar34 = blendpd(auVar27,auVar35,2);
      auVar30._0_8_ = auVar29._8_8_ * auVar24._0_8_ - auVar24._8_8_ * dVar10;
      auVar30._8_8_ = auVar35._0_8_ * auVar24._8_8_ - dVar1 * dVar6;
      auVar26._8_4_ = SUB84(auVar30._8_8_,0);
      auVar26._0_8_ = auVar30._0_8_;
      auVar26._12_4_ = (int)((ulonglong)auVar30._8_8_ >> 0x20);
      auVar24 = blendpd(auVar24,auVar2,2);
      auVar28._0_8_ = auVar34._0_8_ * dVar1 - auVar24._0_8_ * auVar35._0_8_;
      auVar28._8_8_ = auVar34._8_8_ * auVar2._8_8_ - auVar24._8_8_ * auVar35._8_8_;
      auVar24 = blendpd(auVar30,auVar28,2);
      dVar6 = dVar6 * dVar11 + dVar8 + auVar28._0_8_ + (pTVar16->Translation).XY.m128d_f64[1];
      dVar1 = (pTVar16->Translation).ZW.m128d_f64[0];
      auVar2._8_4_ = SUB84(dVar6,0);
      auVar2._0_8_ = dVar10 * dVar11 + dVar7 + auVar26._8_8_ +
                     (pTVar16->Translation).XY.m128d_f64[0];
      auVar2._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar2;
      (__return_storage_ptr__->field0_0x0)._s_0.Z =
           auVar35._0_8_ * dVar11 + dVar9 + auVar24._0_8_ + dVar1;
      return __return_storage_ptr__;
    }
    pTVar17 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
              ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                      *)&this->RoleToIndex,*param_4);
    piVar22 = (int *)&pTVar17->field_0x8;
    if (pTVar17 == (TTuple<FName,int> *)0x0) {
      piVar22 = (int *)0x0;
    }
    if (piVar22 == (int *)0x0) goto LAB_14a8b6437;
    ppIVar18 = TArrayView<UE::PoseSearch::IPoseHistory_const_*_const,int>::operator[]
                         (&this->PoseHistories,*piVar22);
    pIVar4 = *ppIVar18;
    if ((pIVar4 == (IPoseHistory *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("PoseHistory",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                            ,0x15d,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TVector<double> *)(*pcVar5)();
      return pTVar14;
    }
    local_2d8 = UPoseSearchSchema::GetSkeleton(this_00,param_4);
    local_2f8 = iVar23;
    if (local_2d8 != (USkeleton *)0x0) {
      if (param_3 == -1) {
        local_318 = 0xffff;
      }
      else {
        pTVar20 = UPoseSearchSchema::GetBoneReferences(this_00,&local_240,param_4);
        pFVar21 = TArrayView<FBoneReference_const_,int>::operator[](pTVar20,iVar23);
        local_318 = (undefined2)pFVar21->BoneIndex;
      }
      local_218 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      dStack_210 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_308 = 0;
      local_310 = 0xfffe;
      local_208 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      dStack_200 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_1f8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_1f8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_1f8._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_1e8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      dStack_1e0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_1d8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_1d8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_1d8._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_1c8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      dStack_1c0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      cVar13 = (**(code **)(*(longlong *)pIVar4 + 8))(pIVar4,param_7 + param_2,&local_218,local_2d8)
      ;
      if (cVar13 != '\0') {
        goto LAB_14a8b6458;
      }
    }
    if (param_3 < '\x01') goto LAB_14a8b6437;
    local_288.DataPtr = (this->AnimContexts).DataPtr;
    local_288.ArrayNum = (this->AnimContexts).ArrayNum;
    local_288._12_4_ = *(undefined4 *)&(this->AnimContexts).field_0xc;
    pUVar19 = PoseSearch::GetMesh(&local_288,*piVar22);
    if (pUVar19 == (USkinnedMeshComponent *)0x0) goto LAB_14a8b6437;
    pcVar5 = *(code **)(pUVar19->_padding_ + 0x520);
    pTVar20 = UPoseSearchSchema::GetBoneReferences(this_00,&local_230,param_4);
    pFVar21 = TArrayView<FBoneReference_const_,int>::operator[](pTVar20,local_2f8);
    pTVar16 = (TTransform<double> *)(*pcVar5)(pUVar19,local_158,pFVar21->BoneName,0);
  }
  local_1e8._0_4_ = *(undefined4 *)(pTVar16->Translation).ZW.m128d_f64;
  local_1e8._4_4_ = *(undefined4 *)((longlong)(pTVar16->Translation).ZW.m128d_f64 + 4);
  local_1f8._0_8_ = (pTVar16->Translation).XY.m128d_f64[0];
  local_1f8._8_8_ = (pTVar16->Translation).XY.m128d_f64[1];
LAB_14a8b6458:
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)local_1f8._0_8_;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)local_1f8._8_8_;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (double)CONCAT44(local_1e8._4_4_,(undefined4)local_1e8);
  return __return_storage_ptr__;
}

// ExtractRotation @ 14a8b7260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TQuat<double> * __thiscall
UE::PoseSearch::FDebugDrawParams::ExtractRotation
          (FDebugDrawParams *this,TQuat<double> *__return_storage_ptr__,
          TArrayView<float_const_,int> *param_1,float param_2,schar param_3,FName *param_4,
          EPermutationTimeType param_5,int param_6,float param_7)

{
  int iVar1;
  IPoseHistory *pIVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float *pfVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  bool bVar19;
  char cVar20;
  TQuat<double> *pTVar21;
  TTransform<double> *pTVar22;
  TTuple<FName,int> *pTVar23;
  IPoseHistory **ppIVar24;
  USkinnedMeshComponent *pUVar25;
  TArrayView<FBoneReference_const_,int> *pTVar26;
  FBoneReference *pFVar27;
  longlong *plVar28;
  TVector<double>_u_0 *pTVar29;
  int iVar30;
  UPoseSearchSchema *this_00;
  int iVar31;
  int *piVar32;
  UPoseSearchFeatureChannel_Heading **ppUVar33;
  undefined1 auStack_448 [32];
  undefined2 local_428;
  undefined2 local_420;
  undefined1 local_418;
  FDebugDrawParams *local_408;
  USkeleton *local_400;
  TArrayView<float_const_,int> *local_3f8;
  float local_3f0;
  undefined4 uStack_3ec;
  FName *pFStack_3e8;
  undefined4 local_3e0;
  int iStack_3dc;
  int iStack_3d8;
  undefined4 uStack_3d4;
  float *local_3d0;
  undefined8 uStack_3c8;
  UPoseSearchFeatureChannel_Heading *(*local_3c0) [3];
  TVector<double>_u_0 *pTStack_3b8;
  FScriptContainerElement *local_3a8;
  int iStack_3a0;
  undefined4 uStack_39c;
  TMatrix<double> local_398;
  TArrayView<TObjectPtr<UPoseSearchFeatureChannel>_const_,int> local_318;
  TArrayView<FChooserEvaluationContext_*_const,int> local_308;
  TQuat<double> local_2f8;
  <lambda_1> local_2d8;
  TArrayView<FBoneReference_const_,int> local_298;
  TArrayView<FBoneReference_const_,int> local_288;
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  undefined1 local_218 [8];
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined1 local_208 [8];
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  double local_1f8 [2];
  double local_1e8 [2];
  double local_1d8 [2];
  double local_1c8 [2];
  TTransform<double> local_1b8;
  undefined1 local_158 [96];
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_e0;
  TVector<double>_u_0 TStack_c8;
  UPoseSearchFeatureChannel_Heading *local_a8;
  longlong local_a0;
  undefined8 uStack_98;
  ulonglong local_90;
  
  local_90 = __security_cookie.value ^ (ulonglong)auStack_448;
  local_408 = this;
  local_400 = (USkeleton *)__return_storage_ptr__;
  local_3f8 = param_1;
  if ((param_5 == UsePermutationTime) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("PermutationTimeType != EPermutationTimeType::UsePermutationTime",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                          ,0x179,L""), bVar18)) {
    pcVar3 = (code *)swi(3);
    pTVar21 = (TQuat<double> *)(*pcVar3)();
    return pTVar21;
  }
  if (this->Database == (UPoseSearchDatabase *)0x0) {
    this_00 = (UPoseSearchSchema *)0x0;
  }
  else {
    this_00 = (this->Database->Schema).field0_0x0.DebugPtr;
    if ((GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UPoseSearchSchema *)0x0)) {
      GC::MarkAsReachable((UObject *)this_00);
    }
  }
  iVar30 = 0;
  if (this_00 != (UPoseSearchSchema *)0x0) {
    ppUVar33 = &local_a8;
    local_a8 = (UPoseSearchFeatureChannel_Heading *)0x0;
    local_f8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_f8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_a0 = 0;
    uStack_98 = 0;
    local_e0._s_0.X = 0.0;
    local_e0._s_0.Y = 0.0;
    local_e0._s_0.Z = 0.0;
    TStack_c8._s_0.X = 0.0;
    TStack_c8._s_0.Y = 0.0;
    TStack_c8._s_0.Z = 0.0;
    local_f8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    iVar31 = iVar30;
    do {
      iStack_3dc = param_6;
      local_3e0 = CONCAT31(local_3e0._1_3_,param_5);
      iVar1 = (this_00->FinalizedChannels).ArrayNum;
      uStack_3ec = CONCAT31(uStack_3ec._1_3_,param_3);
      pFStack_3e8 = param_4;
      pfVar13 = local_3f8->DataPtr;
      uVar14._0_4_ = local_3f8->ArrayNum;
      uVar14._4_4_ = *(undefined4 *)&local_3f8->field_0xc;
      local_3c0 = (UPoseSearchFeatureChannel_Heading *(*) [3])&local_a8;
      pTStack_3b8 = &local_f8;
      local_3a8 = (this_00->FinalizedChannels).AllocatorInstance.Data;
      local_3f0 = param_2;
      iStack_3d8 = iVar30;
      local_3d0 = pfVar13;
      uStack_3c8 = uVar14;
      if ((iVar1 < 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar18)) {
        pcVar3 = (code *)swi(3);
        pTVar21 = (TQuat<double> *)(*pcVar3)();
        return pTVar21;
      }
      local_2d8._4_4_ = uStack_3ec;
      local_2d8.SampleTimeOffset = local_3f0;
      local_2d8.SamplingAttributeId = iStack_3dc;
      local_2d8._16_4_ = local_3e0;
      local_2d8._28_4_ = uStack_3d4;
      local_2d8.HeadingAxis = iStack_3d8;
      local_2d8.Role = pFStack_3e8;
      local_318._12_4_ = uStack_39c;
      local_318.ArrayNum = iVar1;
      local_2d8.FoundHeading = local_3c0;
      local_2d8.DecodedHeading = (TVector<double> (*) [3])pTStack_3b8;
      local_318.DataPtr = (TObjectPtr<UPoseSearchFeatureChannel> *)local_3a8;
      iStack_3a0 = iVar1;
      local_2d8.PoseVector.DataPtr = pfVar13;
      local_2d8.PoseVector._8_8_ = uVar14;
      UPoseSearchSchema::
      FindChannelRecursive<_UE::PoseSearch::FDebugDrawParams::ExtractRotation_::__l14::<lambda_1>_>
                (&local_318,&local_2d8);
      __return_storage_ptr__ = (TQuat<double> *)local_400;
      if ((*ppUVar33 != (UPoseSearchFeatureChannel_Heading *)0x0) &&
         (iVar31 = iVar31 + 1, iVar31 == 2)) break;
      iVar30 = iVar30 + 1;
      ppUVar33 = ppUVar33 + 1;
    } while (iVar30 < 3);
    if (0 < iVar31) {
      if (iVar31 == 2) {
        if (local_a8 == (UPoseSearchFeatureChannel_Heading *)0x0) {
          local_f8._s_0.X = local_e0._s_0.Y * TStack_c8._s_0.Z - local_e0._s_0.Z * TStack_c8._s_0.Y;
          local_f8._s_0.Y = TStack_c8._s_0.X * local_e0._s_0.Z - local_e0._s_0.X * TStack_c8._s_0.Z;
          local_f8._s_0.Z = local_e0._s_0.X * TStack_c8._s_0.Y - TStack_c8._s_0.X * local_e0._s_0.Y;
          bVar19 = UE::Math::TVector<double>::Normalize
                             ((TVector<double> *)&local_f8._s_0,__real_3e45798ee0000000);
        }
        else if (local_a0 == 0) {
          local_e0._s_0.X = local_f8._s_0.Z * TStack_c8._s_0.Y - local_f8._s_0.Y * TStack_c8._s_0.Z;
          local_e0._s_0.Y = local_f8._s_0.X * TStack_c8._s_0.Z - local_f8._s_0.Z * TStack_c8._s_0.X;
          local_e0._s_0.Z = local_f8._s_0.Y * TStack_c8._s_0.X - local_f8._s_0.X * TStack_c8._s_0.Y;
          bVar19 = UE::Math::TVector<double>::Normalize
                             ((TVector<double> *)&local_e0._s_0,__real_3e45798ee0000000);
        }
        else {
          TStack_c8._s_0.X = local_f8._s_0.Y * local_e0._s_0.Z - local_f8._s_0.Z * local_e0._s_0.Y;
          TStack_c8._s_0.Z = local_f8._s_0.X * local_e0._s_0.Y - local_f8._s_0.Y * local_e0._s_0.X;
          TStack_c8._s_0.Y = local_f8._s_0.Z * local_e0._s_0.X - local_f8._s_0.X * local_e0._s_0.Z;
          bVar19 = UE::Math::TVector<double>::Normalize
                             ((TVector<double> *)&TStack_c8._s_0,__real_3e45798ee0000000);
        }
      }
      else {
        if ((iVar31 != 1) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("HeadingAxisFoundNum == 1",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                                ,0x1c0,L""), bVar18)) {
          pcVar3 = (code *)swi(3);
          pTVar21 = (TQuat<double> *)(*pcVar3)();
          return pTVar21;
        }
        if (local_a8 == (UPoseSearchFeatureChannel_Heading *)0x0) {
          pTVar29 = &local_f8;
          if (local_a0 != 0) {
            local_f8._s_0.X =
                 local_e0._s_0.Y * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z -
                 local_e0._s_0.Z * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
            local_f8._s_0.Z =
                 local_e0._s_0.X * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y -
                 local_e0._s_0.Y * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
            local_f8._s_0.Y =
                 local_e0._s_0.Z * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X -
                 local_e0._s_0.X * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
            goto LAB_14a8b772a;
          }
          local_f8._s_0.X =
               TStack_c8._s_0.Z * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Y -
               TStack_c8._s_0.Y * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z;
          local_f8._s_0.Y =
               TStack_c8._s_0.X * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z -
               TStack_c8._s_0.Z * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.X;
          local_f8._s_0.Z =
               TStack_c8._s_0.Y * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.X -
               TStack_c8._s_0.X * UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Y;
          bVar18 = UE::Math::TVector<double>::Normalize
                             ((TVector<double> *)&pTVar29->_s_0,__real_3e45798ee0000000);
          pTVar29 = &local_e0;
          local_e0._s_0.X = local_f8._s_0.Z * TStack_c8._s_0.Y - local_f8._s_0.Y * TStack_c8._s_0.Z;
          local_e0._s_0.Y = local_f8._s_0.X * TStack_c8._s_0.Z - local_f8._s_0.Z * TStack_c8._s_0.X;
          local_e0._s_0.Z = local_f8._s_0.Y * TStack_c8._s_0.X - local_f8._s_0.X * TStack_c8._s_0.Y;
        }
        else {
          pTVar29 = &local_e0;
          local_e0._s_0.X =
               local_f8._s_0.Z * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y -
               local_f8._s_0.Y * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
          local_e0._s_0.Y =
               local_f8._s_0.X * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z -
               local_f8._s_0.Z * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
          local_e0._s_0.Z =
               local_f8._s_0.Y * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X -
               local_f8._s_0.X * UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
LAB_14a8b772a:
          bVar18 = UE::Math::TVector<double>::Normalize
                             ((TVector<double> *)&pTVar29->_s_0,__real_3e45798ee0000000);
          pTVar29 = &TStack_c8;
          TStack_c8._s_0.X = local_f8._s_0.Y * local_e0._s_0.Z - local_f8._s_0.Z * local_e0._s_0.Y;
          TStack_c8._s_0.Y = local_f8._s_0.Z * local_e0._s_0.X - local_f8._s_0.X * local_e0._s_0.Z;
          TStack_c8._s_0.Z = local_f8._s_0.X * local_e0._s_0.Y - local_f8._s_0.Y * local_e0._s_0.X;
        }
        bVar19 = UE::Math::TVector<double>::Normalize
                           ((TVector<double> *)&pTVar29->_s_0,__real_3e45798ee0000000);
        bVar19 = (bool)(bVar19 & bVar18);
      }
      if (bVar19 != false) {
        local_398.M[0][0] = local_f8._s_0.X;
        local_398.M[0][1] = local_f8._s_0.Y;
        local_398.M[0][2] = local_f8._s_0.Z;
        local_398.M[2][0] = TStack_c8._s_0.X;
        local_398.M[2][1] = TStack_c8._s_0.Y;
        local_398.M[1][0] = local_e0._s_0.X;
        local_398.M[1][1] = local_e0._s_0.Y;
        local_398.M[1][2] = local_e0._s_0.Z;
        local_398.M[2][2] = TStack_c8._s_0.Z;
        local_398.M[3][0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_398.M[3][1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_398.M[3][2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_398.M[0][3] = 0.0;
        local_398.M[1][3] = 0.0;
        local_398.M[2][3] = 0.0;
        local_398.M[3][3] = __real_3ff0000000000000;
        UE::Math::TQuat<double>::TQuat<double>(&local_2f8,&local_398);
        pTVar22 = GetRootBoneTransform(local_408,&local_1b8,param_4,0.0);
        dVar9 = (pTVar22->Rotation).ZW.m128d_f64[0];
        dVar10 = (pTVar22->Rotation).ZW.m128d_f64[1];
        dVar11 = (pTVar22->Rotation).XY.m128d_f64[0];
        dVar12 = (pTVar22->Rotation).XY.m128d_f64[1];
        dVar5 = dVar10 * local_2f8.X *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                local_2f8.W * dVar11 +
                local_2f8.Y * dVar9 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                local_2f8.Z * dVar12 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        dVar6 = dVar9 * local_2f8.X *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                local_2f8.W * dVar12 +
                local_2f8.Y * dVar10 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                local_2f8.Z * dVar11 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        dVar8 = local_2f8.X * dVar12 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                local_2f8.W * dVar9 +
                local_2f8.Y * dVar11 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                local_2f8.Z * dVar10 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dVar9 = local_2f8.X * dVar11 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                local_2f8.W * dVar10 +
                local_2f8.Y * dVar12 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                local_2f8.Z * dVar9 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        auVar4._8_4_ = SUB84(dVar6,0);
        auVar4._0_8_ = dVar5;
        auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        ((USkeleton *)__return_storage_ptr__)->_padding_ = (longlong)dVar5;
        ((USkeleton *)__return_storage_ptr__)->_padding_ = auVar4._8_8_;
        auVar7._8_4_ = SUB84(dVar9,0);
        auVar7._0_8_ = dVar8;
        auVar7._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
        ((USkeleton *)__return_storage_ptr__)->_padding_ = (longlong)dVar8;
        ((USkeleton *)__return_storage_ptr__)->_padding_ = auVar7._8_8_;
        return (TQuat<double> *)(USkeleton *)__return_storage_ptr__;
      }
    }
    this = local_408;
    pTVar23 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
              ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                      *)&local_408->RoleToIndex,*param_4);
    piVar32 = (int *)&pTVar23->field_0x8;
    if (pTVar23 == (TTuple<FName,int> *)0x0) {
      piVar32 = (int *)0x0;
    }
    if (piVar32 != (int *)0x0) {
      ppIVar24 = TArrayView<UE::PoseSearch::IPoseHistory_const_*_const,int>::operator[]
                           (&this->PoseHistories,*piVar32);
      pIVar2 = *ppIVar24;
      if ((pIVar2 == (IPoseHistory *)0x0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("PoseHistory",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                              ,0x1e8,L""), bVar18)) {
        pcVar3 = (code *)swi(3);
        pTVar21 = (TQuat<double> *)(*pcVar3)();
        return pTVar21;
      }
      local_400 = UPoseSearchSchema::GetSkeleton(this_00,param_4);
      local_408 = (FDebugDrawParams *)CONCAT44(local_408._4_4_,(int)param_3);
      if (local_400 != (USkeleton *)0x0) {
        if (param_3 == -1) {
          local_428 = 0xffff;
        }
        else {
          pTVar26 = UPoseSearchSchema::GetBoneReferences(this_00,&local_298,param_4);
          pFVar27 = TArrayView<FBoneReference_const_,int>::operator[](pTVar26,(int)param_3);
          local_428 = (undefined2)pFVar27->BoneIndex;
        }
        local_418 = 0;
        local_420 = 0xfffe;
        local_278._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_278._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_278._12_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_268._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_268._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_268._12_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_258._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_258._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_258._12_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_238._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_238._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_238._12_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_248._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_248._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        local_248._12_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_228._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_228._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_228._12_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        cVar20 = (**(code **)(*(longlong *)pIVar2 + 8))
                           (pIVar2,param_7 + param_2,local_278,local_400);
        if (cVar20 != '\0') {
          goto LAB_14a8b7d5c;
        }
      }
      if ('\0' < param_3) {
        local_308.DataPtr = (this->AnimContexts).DataPtr;
        local_308.ArrayNum = (this->AnimContexts).ArrayNum;
        local_308._12_4_ = *(undefined4 *)&(this->AnimContexts).field_0xc;
        pUVar25 = PoseSearch::GetMesh(&local_308,*piVar32);
        if (pUVar25 != (USkinnedMeshComponent *)0x0) {
          pcVar3 = *(code **)(pUVar25->_padding_ + 0x520);
          pTVar26 = UPoseSearchSchema::GetBoneReferences(this_00,&local_288,param_4);
          pFVar27 = TArrayView<FBoneReference_const_,int>::operator[](pTVar26,(int)local_408);
          plVar28 = (longlong *)(*pcVar3)(pUVar25,local_158,pFVar27->BoneName,0);
          lVar15 = plVar28[1];
          lVar16 = plVar28[2];
          lVar17 = plVar28[3];
          ((USkeleton *)__return_storage_ptr__)->_padding_ = *plVar28;
          ((USkeleton *)__return_storage_ptr__)->_padding_ = lVar15;
          ((USkeleton *)__return_storage_ptr__)->_padding_ = lVar16;
          ((USkeleton *)__return_storage_ptr__)->_padding_ = lVar17;
          return (TQuat<double> *)(USkeleton *)__return_storage_ptr__;
        }
      }
    }
  }
  local_218 = (undefined1  [8])UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
  _uStack_210 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
  local_208 = (undefined1  [8])UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
  _uStack_200 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
  local_1f8[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
  local_1f8[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
  local_1e8[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
  local_1e8[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
  local_1d8[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
  local_1d8[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
  local_1c8[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
  local_1c8[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
  pTVar23 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
            ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                    *)&this->RoleToIndex,*param_4);
  piVar32 = (int *)&pTVar23->field_0x8;
  if (pTVar23 == (TTuple<FName,int> *)0x0) {
    piVar32 = (int *)0x0;
  }
  if (piVar32 != (int *)0x0) {
    ppIVar24 = TArrayView<UE::PoseSearch::IPoseHistory_const_*_const,int>::operator[]
                         (&this->PoseHistories,*piVar32);
    local_418 = 0;
    local_420 = 0xfffe;
    local_428 = 0;
    (**(code **)(*(longlong *)*ppIVar24 + 8))(*ppIVar24,param_7 + param_2,local_218,0);
  }
  local_278._0_4_ = local_218._0_4_;
  local_278._4_4_ = local_218._4_4_;
  local_278._8_4_ = uStack_210;
  local_278._12_4_ = uStack_20c;
  local_268._0_4_ = local_208._0_4_;
  local_268._4_4_ = local_208._4_4_;
  local_268._8_4_ = uStack_200;
  local_268._12_4_ = uStack_1fc;
LAB_14a8b7d5c:
  *(undefined4 *)&((USkeleton *)__return_storage_ptr__)->_padding_ = local_268._0_4_;
  *(undefined4 *)((longlong)&((USkeleton *)__return_storage_ptr__)->_padding_ + 4) = local_268._4_4_
  ;
  *(undefined4 *)&((USkeleton *)__return_storage_ptr__)->_padding_ = local_268._8_4_;
  *(undefined4 *)((longlong)&((USkeleton *)__return_storage_ptr__)->_padding_ + 4) =
       local_268._12_4_;
  *(undefined4 *)&((USkeleton *)__return_storage_ptr__)->_padding_ = local_278._0_4_;
  *(undefined4 *)((longlong)&((USkeleton *)__return_storage_ptr__)->_padding_ + 4) = local_278._4_4_
  ;
  *(undefined4 *)&((USkeleton *)__return_storage_ptr__)->_padding_ = local_278._8_4_;
  *(undefined4 *)((longlong)&((USkeleton *)__return_storage_ptr__)->_padding_ + 4) =
       local_278._12_4_;
  return (TQuat<double> *)(USkeleton *)__return_storage_ptr__;
}

// GetRootBoneTransform @ 14a8bd670

TTransform<double> * __thiscall
UE::PoseSearch::FDebugDrawParams::GetRootBoneTransform
          (FDebugDrawParams *this,TTransform<double> *__return_storage_ptr__,FName *param_1,
          float param_2)

{
  TTuple<FName,int> *pTVar1;
  IPoseHistory **ppIVar2;
  int *piVar3;
  
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  pTVar1 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
           ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                   *)&this->RoleToIndex,*param_1);
  piVar3 = (int *)&pTVar1->field_0x8;
  if (pTVar1 == (TTuple<FName,int> *)0x0) {
    piVar3 = (int *)0x0;
  }
  if (piVar3 != (int *)0x0) {
    ppIVar2 = TArrayView<UE::PoseSearch::IPoseHistory_const_*_const,int>::operator[]
                        (&this->PoseHistories,*piVar3);
    (**(code **)(*(longlong *)*ppIVar2 + 8))(*ppIVar2,param_2,__return_storage_ptr__,0,0,0xfffe,0);
  }
  return __return_storage_ptr__;
}

// GetSchema @ 14a8beb30

UPoseSearchSchema * __thiscall UE::PoseSearch::FDebugDrawParams::GetSchema(FDebugDrawParams *this)

{
  UPoseSearchSchema *pUVar1;
  
  if (this->Database != (UPoseSearchDatabase *)0x0) {
    pUVar1 = (this->Database->Schema).field0_0x0.DebugPtr;
    if ((GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UPoseSearchSchema *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar1);
    }
    return pUVar1;
  }
  return (UPoseSearchSchema *)0x0;
}

// GetSearchIndex @ 14a8beb90

FSearchIndex * __thiscall UE::PoseSearch::FDebugDrawParams::GetSearchIndex(FDebugDrawParams *this)

{
  int iVar1;
  UPoseSearchDatabase *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FSearchIndex *pFVar6;
  
  pUVar2 = this->Database;
  if (pUVar2 == (UPoseSearchDatabase *)0x0) {
    return (FSearchIndex *)0x0;
  }
  if ((pUVar2->Schema).field0_0x0.DebugPtr != (UPoseSearchSchema *)0x0) {
    bVar4 = FSearchIndexBase::IsEmpty((FSearchIndexBase *)&pUVar2->SearchIndexPrivate);
    if (!bVar4) {
      iVar1 = ((pUVar2->Schema).field0_0x0.DebugPtr)->SchemaCardinality;
      iVar5 = FSearchIndex::GetNumDimensions(&pUVar2->SearchIndexPrivate);
      if (iVar5 == iVar1) goto LAB_14a8bec1b;
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Schema && !SearchIndexPrivate.IsEmpty() && SearchIndexPrivate.GetNumDimensions() == Schema->SchemaCardinality"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchDatabase.cpp"
                     ,0x46f,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FSearchIndex *)(*pcVar3)();
    return pFVar6;
  }
LAB_14a8bec1b:
  return &pUVar2->SearchIndexPrivate;
}

// Init @ 14a8c0430

void __thiscall
UE::PoseSearch::FDebugDrawParams::Init
          (FDebugDrawParams *this,TArrayView<FChooserEvaluationContext_*_const,int> *param_1,
          TArrayView<UE::PoseSearch::IPoseHistory_const_*_const,int> *param_2,
          TMap<FName,int,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,int,0>_>
          *param_3,UPoseSearchDatabase *param_4)

{
  int *piVar1;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar2;
  uint uVar3;
  UPoseSearchSchema *pUVar4;
  FScriptContainerElement *pFVar5;
  UPoseSearchDatabase *this_00;
  code *pcVar6;
  undefined4 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  TArrayView<float_const_,int> *pTVar11;
  uint uVar12;
  undefined4 uStack_2c;
  TArrayView<float,int> local_28;
  TArrayView<float_const_,int> local_18;
  
  iVar10 = param_1->ArrayNum;
  uVar7 = *(undefined4 *)&param_1->field_0xc;
  (this->AnimContexts).DataPtr = param_1->DataPtr;
  (this->AnimContexts).ArrayNum = iVar10;
  *(undefined4 *)&(this->AnimContexts).field_0xc = uVar7;
  iVar10 = param_2->ArrayNum;
  uVar7 = *(undefined4 *)&param_2->field_0xc;
  (this->PoseHistories).DataPtr = param_2->DataPtr;
  (this->PoseHistories).ArrayNum = iVar10;
  *(undefined4 *)&(this->PoseHistories).field_0xc = uVar7;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  ::operator=((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
               *)&this->RoleToIndex,
              (TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
               *)param_3);
  this->Database = param_4;
  if (*(int *)&(this->RoleToIndex).field_0x58 - *(int *)&(this->RoleToIndex).field_0x7c !=
      (this->PoseHistories).ArrayNum) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("RoleToIndex.Num() == PoseHistories.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                       ,0x10b,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  bVar8 = PoseSearch::IsValid(&this->RoleToIndex);
  if (!bVar8) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(RoleToIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                       ,0x10c,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if ((this->Database != (UPoseSearchDatabase *)0x0) &&
     (pUVar4 = (this->Database->Schema).field0_0x0.DebugPtr, pUVar4 != (UPoseSearchSchema *)0x0)) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)pUVar4);
    }
    uVar3 = pUVar4->SchemaCardinality;
    pTVar2 = &this->DynamicWeightsSqrtBuffer;
    iVar10 = (this->DynamicWeightsSqrtBuffer).ArrayNum;
    piVar1 = &(this->DynamicWeightsSqrtBuffer).ArrayNum;
    if (iVar10 < (int)uVar3) {
      iVar9 = Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                        (4,4,uVar3 - iVar10,&pTVar2->AllocatorInstance,piVar1,
                         &(this->DynamicWeightsSqrtBuffer).ArrayMax);
      memset((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 4,0,
             (longlong)(int)(uVar3 - iVar10) << 2);
    }
    else {
      if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
      }
      if ((int)uVar3 < iVar10) {
        uVar12 = iVar10 - uVar3;
        if ((int)(uVar12 | uVar3) < 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        if (uVar12 != 0) {
          pFVar5 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar3 * 4;
          iVar10 = (*piVar1 - uVar3) - uVar12;
          if (iVar10 != 0) {
            memmove(pFVar5,pFVar5 + (longlong)(int)uVar12 * 4,(longlong)iVar10 << 2);
          }
          *piVar1 = *piVar1 - uVar12;
          Core::Private::ReallocShrink<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,&pTVar2->AllocatorInstance,*piVar1,
                     &(this->DynamicWeightsSqrtBuffer).ArrayMax);
        }
      }
    }
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    iVar10 = *piVar1;
    this_00 = this->Database;
    if (iVar10 < 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    local_28._12_4_ = uStack_2c;
    local_28.ArrayNum = iVar10;
    local_28.DataPtr = (float *)pFVar5;
    pTVar11 = UPoseSearchDatabase::CalculateDynamicWeightsSqrt(this_00,&local_18,&local_28);
    iVar10 = pTVar11->ArrayNum;
    uVar7 = *(undefined4 *)&pTVar11->field_0xc;
    (this->DynamicWeightsSqrt).DataPtr = pTVar11->DataPtr;
    (this->DynamicWeightsSqrt).ArrayNum = iVar10;
    *(undefined4 *)&(this->DynamicWeightsSqrt).field_0xc = uVar7;
  }
  return;
}

// IsAnyWeightRelevant @ 14a8c09d0

bool __thiscall
UE::PoseSearch::FDebugDrawParams::IsAnyWeightRelevant
          (FDebugDrawParams *this,UPoseSearchFeatureChannel *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  fVar4 = __real_322bcc77;
  iVar1 = param_1->ChannelDataOffset;
  uVar9 = (ulonglong)iVar1;
  iVar2 = param_1->ChannelCardinality;
  uVar10 = uVar9;
  while( true ) {
    if ((longlong)(iVar2 + iVar1) <= (longlong)uVar9) {
      return false;
    }
    uVar8 = (uint)uVar10;
    uVar7 = 0;
    if ((int)uVar8 < (this->DynamicWeightsSqrt).ArrayNum) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar5)) break;
    if (fVar4 < (this->DynamicWeightsSqrt).DataPtr[uVar9]) {
      return true;
    }
    uVar10 = (ulonglong)(uVar8 + 1);
    uVar9 = uVar9 + 1;
  }
  pcVar3 = (code *)swi(3);
  uVar6 = (*pcVar3)();
  return (bool)uVar6;
}

