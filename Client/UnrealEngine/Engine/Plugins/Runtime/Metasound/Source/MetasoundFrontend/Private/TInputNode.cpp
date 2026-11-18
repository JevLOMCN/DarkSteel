// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 70

// TInputNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,1> @ 14ad93730

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,1> * __thiscall
Metasound::TInputNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,1>::
TInputNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,1>
          (TInputNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,1>
           *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,1> *pTVar5;
  FName *pFVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_18;
  
  pTVar4 = ::operator_new(0x20);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    local_18.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_18.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______00_MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = (param_1->VertexName).Number;
    pTVar4[1].SharedReferenceCount = (atomic<int>)(param_1->VertexName).ComparisonIndex.Value;
    pTVar4[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TInputNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,1>
                  *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                     ();
  FInputNode::FInputNode((FInputNode *)this,param_1,pFVar6,Value,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &
       ___7__TInputNode_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______00_Metasound__6B_
  ;
  return this;
}

// TInputNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,1> @ 14ad93840

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,1> * __thiscall
Metasound::TInputNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,1>::
TInputNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,1>
          (TInputNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,1>
           *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,1> *pTVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_b8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  local_a8.Object = param_3->Object;
  local_a8.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar4 = FNodeData::FNodeData(&local_98,param_2);
  pTVar5 = ::operator_new(0x20);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    local_b8.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_b8.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______00_MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = param_1->Number;
    pTVar5[1].SharedReferenceCount = (atomic<int>)(param_1->ComparisonIndex).Value;
    pTVar5[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TInputNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,1>
                  *)(*pcVar1)();
        return pTVar6;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    local_b8.Object = (IOperatorFactory *)(pTVar5 + 1);
    local_b8.SharedReferenceCount.ReferenceController = pTVar5;
  }
  FInputNode::FInputNode((FInputNode *)this,&local_b8,pFVar4,&local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(undefined ***)this =
       &
       ___7__TInputNode_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______00_Metasound__6B_
  ;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,0> @ 14ad93990

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,0> * __thiscall
Metasound::TInputNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,0>::
TInputNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,0>
          (TInputNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,0>
           *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,0> *pTVar5;
  FName *pFVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_18;
  
  pTVar4 = ::operator_new(0x20);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    local_18.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_18.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______0A__MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = (param_1->VertexName).Number;
    pTVar4[1].SharedReferenceCount = (atomic<int>)(param_1->VertexName).ComparisonIndex.Value;
    pTVar4[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TInputNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,0>
                  *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                     ();
  FInputNode::FInputNode((FInputNode *)this,param_1,pFVar6,Reference,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &
       ___7__TInputNode_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______0A__Metasound__6B_
  ;
  return this;
}

// TInputNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,0> @ 14ad93aa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,0> * __thiscall
Metasound::TInputNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,0>::
TInputNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,0>
          (TInputNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,0>
           *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,0> *pTVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_b8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  local_a8.Object = param_3->Object;
  local_a8.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar4 = FNodeData::FNodeData(&local_98,param_2);
  pTVar5 = ::operator_new(0x20);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    local_b8.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_b8.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______0A__MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = param_1->Number;
    pTVar5[1].SharedReferenceCount = (atomic<int>)(param_1->ComparisonIndex).Value;
    pTVar5[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TInputNode<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,0>
                  *)(*pcVar1)();
        return pTVar6;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    local_b8.Object = (IOperatorFactory *)(pTVar5 + 1);
    local_b8.SharedReferenceCount.ReferenceController = pTVar5;
  }
  FInputNode::FInputNode((FInputNode *)this,&local_b8,pFVar4,&local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(undefined ***)this =
       &
       ___7__TInputNode_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______0A__Metasound__6B_
  ;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,1> @ 14ad93bf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>,1> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,1>::
TInputNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,1>
          (void *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>,1> *pTVar5;
  FName *pFVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_18;
  
  pTVar4 = ::operator_new(0x20);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    local_18.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_18.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = (param_1->VertexName).Number;
    pTVar4[1].SharedReferenceCount = (atomic<int>)(param_1->VertexName).ComparisonIndex.Value;
    pTVar4[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TInputNode<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>,1> *)
                 (*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>()
  ;
  FInputNode::FInputNode(this,param_1,pFVar6,Value,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &
       ___7__TInputNode_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___00_Metasound__6B_
  ;
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,1> @ 14ad93d00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>,1> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,1>::
TInputNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,1>
          (void *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>,1> *pTVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_b8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  local_a8.Object = param_3->Object;
  local_a8.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar4 = FNodeData::FNodeData(&local_98,param_2);
  pTVar5 = ::operator_new(0x20);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    local_b8.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_b8.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = param_1->Number;
    pTVar5[1].SharedReferenceCount = (atomic<int>)(param_1->ComparisonIndex).Value;
    pTVar5[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TInputNode<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>,1> *)
                 (*pcVar1)();
        return pTVar6;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    local_b8.Object = (IOperatorFactory *)(pTVar5 + 1);
    local_b8.SharedReferenceCount.ReferenceController = pTVar5;
  }
  FInputNode::FInputNode(this,&local_b8,pFVar4,&local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(undefined ***)this =
       &
       ___7__TInputNode_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___00_Metasound__6B_
  ;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,0> @ 14ad93e50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>,0> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,0>::
TInputNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,0>
          (void *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>,0> *pTVar5;
  FName *pFVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_18;
  
  pTVar4 = ::operator_new(0x20);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    local_18.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_18.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = (param_1->VertexName).Number;
    pTVar4[1].SharedReferenceCount = (atomic<int>)(param_1->VertexName).ComparisonIndex.Value;
    pTVar4[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TInputNode<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>,0> *)
                 (*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>()
  ;
  FInputNode::FInputNode(this,param_1,pFVar6,Reference,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &
       ___7__TInputNode_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___0A__Metasound__6B_
  ;
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,0> @ 14ad93f60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>,0> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,0>::
TInputNode<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,0>
          (void *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>,0> *pTVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_b8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  local_a8.Object = param_3->Object;
  local_a8.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar4 = FNodeData::FNodeData(&local_98,param_2);
  pTVar5 = ::operator_new(0x20);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    local_b8.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_b8.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = param_1->Number;
    pTVar5[1].SharedReferenceCount = (atomic<int>)(param_1->ComparisonIndex).Value;
    pTVar5[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TInputNode<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>,0> *)
                 (*pcVar1)();
        return pTVar6;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    local_b8.Object = (IOperatorFactory *)(pTVar5 + 1);
    local_b8.SharedReferenceCount.ReferenceController = pTVar5;
  }
  FInputNode::FInputNode(this,&local_b8,pFVar4,&local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(undefined ***)this =
       &
       ___7__TInputNode_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___0A__Metasound__6B_
  ;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::Frontend::FAnalyzerAddress,0> @ 14ad940b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::Frontend::FAnalyzerAddress,0> * __thiscall
Metasound::TInputNode<Metasound::Frontend::FAnalyzerAddress,0>::
TInputNode<Metasound::Frontend::FAnalyzerAddress,0>
          (TInputNode<Metasound::Frontend::FAnalyzerAddress,0> *this,
          FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::Frontend::FAnalyzerAddress,0> *pTVar5;
  FName *pFVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_18;
  
  pTVar4 = ::operator_new(0x20);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    local_18.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_18.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_VFAnalyzerAddress_Frontend_Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_VFAnalyzerAddress_Frontend_Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = (param_1->VertexName).Number;
    pTVar4[1].SharedReferenceCount = (atomic<int>)(param_1->VertexName).ComparisonIndex.Value;
    pTVar4[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TInputNode<Metasound::Frontend::FAnalyzerAddress,0> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<Metasound::Frontend::FAnalyzerAddress>();
  FInputNode::FInputNode((FInputNode *)this,param_1,pFVar6,Reference,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this = &___7__TInputNode_VFAnalyzerAddress_Frontend_Metasound___0A__Metasound__6B_
  ;
  return this;
}

// TInputNode<Metasound::Frontend::FAnalyzerAddress,0> @ 14ad941c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::Frontend::FAnalyzerAddress,0> * __thiscall
Metasound::TInputNode<Metasound::Frontend::FAnalyzerAddress,0>::
TInputNode<Metasound::Frontend::FAnalyzerAddress,0>
          (TInputNode<Metasound::Frontend::FAnalyzerAddress,0> *this,FName *param_1,
          FNodeData *param_2,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::Frontend::FAnalyzerAddress,0> *pTVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_b8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  local_a8.Object = param_3->Object;
  local_a8.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar4 = FNodeData::FNodeData(&local_98,param_2);
  pTVar5 = ::operator_new(0x20);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    local_b8.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_b8.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_VFAnalyzerAddress_Frontend_Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_VFAnalyzerAddress_Frontend_Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = param_1->Number;
    pTVar5[1].SharedReferenceCount = (atomic<int>)(param_1->ComparisonIndex).Value;
    pTVar5[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TInputNode<Metasound::Frontend::FAnalyzerAddress,0> *)(*pcVar1)();
        return pTVar6;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    local_b8.Object = (IOperatorFactory *)(pTVar5 + 1);
    local_b8.SharedReferenceCount.ReferenceController = pTVar5;
  }
  FInputNode::FInputNode((FInputNode *)this,&local_b8,pFVar4,&local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(undefined ***)this = &___7__TInputNode_VFAnalyzerAddress_Frontend_Metasound___0A__Metasound__6B_
  ;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<int,1> @ 14af26eb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<int,1> * __thiscall
Metasound::TInputNode<int,1>::TInputNode<int,1>
          (TInputNode<int,1> *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<int,1> *pTVar5;
  FName *pFVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_18;
  
  pTVar4 = ::operator_new(0x20);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    local_18.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_18.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_H_00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)&___7__TInputNodeOperatorFactory_H_00_MetasoundInputNodePrivate_Metasound__6B_;
    uVar2 = (param_1->VertexName).Number;
    pTVar4[1].SharedReferenceCount = (atomic<int>)(param_1->VertexName).ComparisonIndex.Value;
    pTVar4[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TInputNode<int,1> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<int>();
  FInputNode::FInputNode((FInputNode *)this,param_1,pFVar6,Value,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this = &___7__TInputNode_H_00_Metasound__6B_;
  return this;
}

// TInputNode<int,1> @ 14af26fc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<int,1> * __thiscall
Metasound::TInputNode<int,1>::TInputNode<int,1>
          (TInputNode<int,1> *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<int,1> *pTVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_b8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  local_a8.Object = param_3->Object;
  local_a8.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar4 = FNodeData::FNodeData(&local_98,param_2);
  pTVar5 = ::operator_new(0x20);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    local_b8.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_b8.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_H_00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)&___7__TInputNodeOperatorFactory_H_00_MetasoundInputNodePrivate_Metasound__6B_;
    uVar2 = param_1->Number;
    pTVar5[1].SharedReferenceCount = (atomic<int>)(param_1->ComparisonIndex).Value;
    pTVar5[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TInputNode<int,1> *)(*pcVar1)();
        return pTVar6;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    local_b8.Object = (IOperatorFactory *)(pTVar5 + 1);
    local_b8.SharedReferenceCount.ReferenceController = pTVar5;
  }
  FInputNode::FInputNode((FInputNode *)this,&local_b8,pFVar4,&local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(undefined ***)this = &___7__TInputNode_H_00_Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<int,0> @ 14af27110

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<int,0> * __thiscall
Metasound::TInputNode<int,0>::TInputNode<int,0>
          (TInputNode<int,0> *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<int,0> *pTVar5;
  FName *pFVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_18;
  
  pTVar4 = ::operator_new(0x20);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    local_18.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_18.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_H_0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)&___7__TInputNodeOperatorFactory_H_0A__MetasoundInputNodePrivate_Metasound__6B_;
    uVar2 = (param_1->VertexName).Number;
    pTVar4[1].SharedReferenceCount = (atomic<int>)(param_1->VertexName).ComparisonIndex.Value;
    pTVar4[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TInputNode<int,0> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<int>();
  FInputNode::FInputNode((FInputNode *)this,param_1,pFVar6,Reference,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this = &___7__TInputNode_H_0A__Metasound__6B_;
  return this;
}

// TInputNode<int,0> @ 14af27220

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<int,0> * __thiscall
Metasound::TInputNode<int,0>::TInputNode<int,0>
          (TInputNode<int,0> *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<int,0> *pTVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_b8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  local_a8.Object = param_3->Object;
  local_a8.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar4 = FNodeData::FNodeData(&local_98,param_2);
  pTVar5 = ::operator_new(0x20);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    local_b8.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_b8.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_H_0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)&___7__TInputNodeOperatorFactory_H_0A__MetasoundInputNodePrivate_Metasound__6B_;
    uVar2 = param_1->Number;
    pTVar5[1].SharedReferenceCount = (atomic<int>)(param_1->ComparisonIndex).Value;
    pTVar5[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TInputNode<int,0> *)(*pcVar1)();
        return pTVar6;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    local_b8.Object = (IOperatorFactory *)(pTVar5 + 1);
    local_b8.SharedReferenceCount.ReferenceController = pTVar5;
  }
  FInputNode::FInputNode((FInputNode *)this,&local_b8,pFVar4,&local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(undefined ***)this = &___7__TInputNode_H_0A__Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<float,1> @ 14af27370

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<float,1> * __thiscall
Metasound::TInputNode<float,1>::TInputNode<float,1>
          (TInputNode<float,1> *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<float,1> *pTVar5;
  FName *pFVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_18;
  
  pTVar4 = ::operator_new(0x20);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    local_18.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_18.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_M_00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)&___7__TInputNodeOperatorFactory_M_00_MetasoundInputNodePrivate_Metasound__6B_;
    uVar2 = (param_1->VertexName).Number;
    pTVar4[1].SharedReferenceCount = (atomic<int>)(param_1->VertexName).ComparisonIndex.Value;
    pTVar4[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TInputNode<float,1> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<float>();
  FInputNode::FInputNode((FInputNode *)this,param_1,pFVar6,Value,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this = &___7__TInputNode_M_00_Metasound__6B_;
  return this;
}

// TInputNode<float,1> @ 14af27480

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<float,1> * __thiscall
Metasound::TInputNode<float,1>::TInputNode<float,1>
          (TInputNode<float,1> *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<float,1> *pTVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_b8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  local_a8.Object = param_3->Object;
  local_a8.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar4 = FNodeData::FNodeData(&local_98,param_2);
  pTVar5 = ::operator_new(0x20);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    local_b8.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_b8.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_M_00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)&___7__TInputNodeOperatorFactory_M_00_MetasoundInputNodePrivate_Metasound__6B_;
    uVar2 = param_1->Number;
    pTVar5[1].SharedReferenceCount = (atomic<int>)(param_1->ComparisonIndex).Value;
    pTVar5[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TInputNode<float,1> *)(*pcVar1)();
        return pTVar6;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    local_b8.Object = (IOperatorFactory *)(pTVar5 + 1);
    local_b8.SharedReferenceCount.ReferenceController = pTVar5;
  }
  FInputNode::FInputNode((FInputNode *)this,&local_b8,pFVar4,&local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(undefined ***)this = &___7__TInputNode_M_00_Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<float,0> @ 14af275d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<float,0> * __thiscall
Metasound::TInputNode<float,0>::TInputNode<float,0>
          (TInputNode<float,0> *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<float,0> *pTVar5;
  FName *pFVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_18;
  
  pTVar4 = ::operator_new(0x20);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    local_18.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_18.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_M_0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)&___7__TInputNodeOperatorFactory_M_0A__MetasoundInputNodePrivate_Metasound__6B_;
    uVar2 = (param_1->VertexName).Number;
    pTVar4[1].SharedReferenceCount = (atomic<int>)(param_1->VertexName).ComparisonIndex.Value;
    pTVar4[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TInputNode<float,0> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<float>();
  FInputNode::FInputNode((FInputNode *)this,param_1,pFVar6,Reference,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this = &___7__TInputNode_M_0A__Metasound__6B_;
  return this;
}

// TInputNode<float,0> @ 14af276e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<float,0> * __thiscall
Metasound::TInputNode<float,0>::TInputNode<float,0>
          (TInputNode<float,0> *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<float,0> *pTVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_b8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  local_a8.Object = param_3->Object;
  local_a8.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar4 = FNodeData::FNodeData(&local_98,param_2);
  pTVar5 = ::operator_new(0x20);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    local_b8.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_b8.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_M_0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)&___7__TInputNodeOperatorFactory_M_0A__MetasoundInputNodePrivate_Metasound__6B_;
    uVar2 = param_1->Number;
    pTVar5[1].SharedReferenceCount = (atomic<int>)(param_1->ComparisonIndex).Value;
    pTVar5[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TInputNode<float,0> *)(*pcVar1)();
        return pTVar6;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    local_b8.Object = (IOperatorFactory *)(pTVar5 + 1);
    local_b8.SharedReferenceCount.ReferenceController = pTVar5;
  }
  FInputNode::FInputNode((FInputNode *)this,&local_b8,pFVar4,&local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(undefined ***)this = &___7__TInputNode_M_0A__Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<TArray<int,TSizedDefaultAllocator<32>_>,1> @ 14af27830

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<TArray<int,TSizedDefaultAllocator<32>_>,1> * __thiscall
Metasound::TInputNode<TArray<int,TSizedDefaultAllocator<32>_>,1>::
TInputNode<TArray<int,TSizedDefaultAllocator<32>_>,1>
          (TInputNode<TArray<int,TSizedDefaultAllocator<32>_>,1> *this,
          FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<TArray<int,TSizedDefaultAllocator<32>_>,1> *pTVar5;
  FName *pFVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_18;
  
  pTVar4 = ::operator_new(0x20);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    local_18.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_18.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TArray_HV__TSizedDefaultAllocator__0CA______00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TArray_HV__TSizedDefaultAllocator__0CA______00_MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = (param_1->VertexName).Number;
    pTVar4[1].SharedReferenceCount = (atomic<int>)(param_1->VertexName).ComparisonIndex.Value;
    pTVar4[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TInputNode<TArray<int,TSizedDefaultAllocator<32>_>,1> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>();
  FInputNode::FInputNode((FInputNode *)this,param_1,pFVar6,Value,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &___7__TInputNode_V__TArray_HV__TSizedDefaultAllocator__0CA______00_Metasound__6B_;
  return this;
}

// TInputNode<TArray<int,TSizedDefaultAllocator<32>_>,1> @ 14af27940

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<TArray<int,TSizedDefaultAllocator<32>_>,1> * __thiscall
Metasound::TInputNode<TArray<int,TSizedDefaultAllocator<32>_>,1>::
TInputNode<TArray<int,TSizedDefaultAllocator<32>_>,1>
          (TInputNode<TArray<int,TSizedDefaultAllocator<32>_>,1> *this,FName *param_1,
          FNodeData *param_2,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<TArray<int,TSizedDefaultAllocator<32>_>,1> *pTVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_b8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  local_a8.Object = param_3->Object;
  local_a8.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar4 = FNodeData::FNodeData(&local_98,param_2);
  pTVar5 = ::operator_new(0x20);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    local_b8.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_b8.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TArray_HV__TSizedDefaultAllocator__0CA______00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TArray_HV__TSizedDefaultAllocator__0CA______00_MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = param_1->Number;
    pTVar5[1].SharedReferenceCount = (atomic<int>)(param_1->ComparisonIndex).Value;
    pTVar5[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TInputNode<TArray<int,TSizedDefaultAllocator<32>_>,1> *)(*pcVar1)();
        return pTVar6;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    local_b8.Object = (IOperatorFactory *)(pTVar5 + 1);
    local_b8.SharedReferenceCount.ReferenceController = pTVar5;
  }
  FInputNode::FInputNode((FInputNode *)this,&local_b8,pFVar4,&local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(undefined ***)this =
       &___7__TInputNode_V__TArray_HV__TSizedDefaultAllocator__0CA______00_Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<TArray<int,TSizedDefaultAllocator<32>_>,0> @ 14af27a90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<TArray<int,TSizedDefaultAllocator<32>_>,0> * __thiscall
Metasound::TInputNode<TArray<int,TSizedDefaultAllocator<32>_>,0>::
TInputNode<TArray<int,TSizedDefaultAllocator<32>_>,0>
          (TInputNode<TArray<int,TSizedDefaultAllocator<32>_>,0> *this,
          FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<TArray<int,TSizedDefaultAllocator<32>_>,0> *pTVar5;
  FName *pFVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_18;
  
  pTVar4 = ::operator_new(0x20);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    local_18.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_18.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TArray_HV__TSizedDefaultAllocator__0CA______0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TArray_HV__TSizedDefaultAllocator__0CA______0A__MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = (param_1->VertexName).Number;
    pTVar4[1].SharedReferenceCount = (atomic<int>)(param_1->VertexName).ComparisonIndex.Value;
    pTVar4[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TInputNode<TArray<int,TSizedDefaultAllocator<32>_>,0> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<TArray<int,TSizedDefaultAllocator<32>_>_>();
  FInputNode::FInputNode((FInputNode *)this,param_1,pFVar6,Reference,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &___7__TInputNode_V__TArray_HV__TSizedDefaultAllocator__0CA______0A__Metasound__6B_;
  return this;
}

// TInputNode<TArray<int,TSizedDefaultAllocator<32>_>,0> @ 14af27ba0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<TArray<int,TSizedDefaultAllocator<32>_>,0> * __thiscall
Metasound::TInputNode<TArray<int,TSizedDefaultAllocator<32>_>,0>::
TInputNode<TArray<int,TSizedDefaultAllocator<32>_>,0>
          (TInputNode<TArray<int,TSizedDefaultAllocator<32>_>,0> *this,FName *param_1,
          FNodeData *param_2,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<TArray<int,TSizedDefaultAllocator<32>_>,0> *pTVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_b8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  local_a8.Object = param_3->Object;
  local_a8.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar4 = FNodeData::FNodeData(&local_98,param_2);
  pTVar5 = ::operator_new(0x20);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    local_b8.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_b8.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TArray_HV__TSizedDefaultAllocator__0CA______0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TArray_HV__TSizedDefaultAllocator__0CA______0A__MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = param_1->Number;
    pTVar5[1].SharedReferenceCount = (atomic<int>)(param_1->ComparisonIndex).Value;
    pTVar5[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TInputNode<TArray<int,TSizedDefaultAllocator<32>_>,0> *)(*pcVar1)();
        return pTVar6;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    local_b8.Object = (IOperatorFactory *)(pTVar5 + 1);
    local_b8.SharedReferenceCount.ReferenceController = pTVar5;
  }
  FInputNode::FInputNode((FInputNode *)this,&local_b8,pFVar4,&local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(undefined ***)this =
       &___7__TInputNode_V__TArray_HV__TSizedDefaultAllocator__0CA______0A__Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<TArray<float,TSizedDefaultAllocator<32>_>,1> @ 14af27cf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<TArray<float,TSizedDefaultAllocator<32>_>,1> * __thiscall
Metasound::TInputNode<TArray<float,TSizedDefaultAllocator<32>_>,1>::
TInputNode<TArray<float,TSizedDefaultAllocator<32>_>,1>
          (TInputNode<TArray<float,TSizedDefaultAllocator<32>_>,1> *this,
          FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<TArray<float,TSizedDefaultAllocator<32>_>,1> *pTVar5;
  FName *pFVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_18;
  
  pTVar4 = ::operator_new(0x20);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    local_18.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_18.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TArray_MV__TSizedDefaultAllocator__0CA______00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TArray_MV__TSizedDefaultAllocator__0CA______00_MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = (param_1->VertexName).Number;
    pTVar4[1].SharedReferenceCount = (atomic<int>)(param_1->VertexName).ComparisonIndex.Value;
    pTVar4[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TInputNode<TArray<float,TSizedDefaultAllocator<32>_>,1> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<TArray<float,TSizedDefaultAllocator<32>_>_>();
  FInputNode::FInputNode((FInputNode *)this,param_1,pFVar6,Value,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &___7__TInputNode_V__TArray_MV__TSizedDefaultAllocator__0CA______00_Metasound__6B_;
  return this;
}

// TInputNode<TArray<float,TSizedDefaultAllocator<32>_>,1> @ 14af27e00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<TArray<float,TSizedDefaultAllocator<32>_>,1> * __thiscall
Metasound::TInputNode<TArray<float,TSizedDefaultAllocator<32>_>,1>::
TInputNode<TArray<float,TSizedDefaultAllocator<32>_>,1>
          (TInputNode<TArray<float,TSizedDefaultAllocator<32>_>,1> *this,FName *param_1,
          FNodeData *param_2,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<TArray<float,TSizedDefaultAllocator<32>_>,1> *pTVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_b8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  local_a8.Object = param_3->Object;
  local_a8.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar4 = FNodeData::FNodeData(&local_98,param_2);
  pTVar5 = ::operator_new(0x20);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    local_b8.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_b8.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TArray_MV__TSizedDefaultAllocator__0CA______00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TArray_MV__TSizedDefaultAllocator__0CA______00_MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = param_1->Number;
    pTVar5[1].SharedReferenceCount = (atomic<int>)(param_1->ComparisonIndex).Value;
    pTVar5[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TInputNode<TArray<float,TSizedDefaultAllocator<32>_>,1> *)(*pcVar1)();
        return pTVar6;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    local_b8.Object = (IOperatorFactory *)(pTVar5 + 1);
    local_b8.SharedReferenceCount.ReferenceController = pTVar5;
  }
  FInputNode::FInputNode((FInputNode *)this,&local_b8,pFVar4,&local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(undefined ***)this =
       &___7__TInputNode_V__TArray_MV__TSizedDefaultAllocator__0CA______00_Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<TArray<float,TSizedDefaultAllocator<32>_>,0> @ 14af27f50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<TArray<float,TSizedDefaultAllocator<32>_>,0> * __thiscall
Metasound::TInputNode<TArray<float,TSizedDefaultAllocator<32>_>,0>::
TInputNode<TArray<float,TSizedDefaultAllocator<32>_>,0>
          (TInputNode<TArray<float,TSizedDefaultAllocator<32>_>,0> *this,
          FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<TArray<float,TSizedDefaultAllocator<32>_>,0> *pTVar5;
  FName *pFVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_18;
  
  pTVar4 = ::operator_new(0x20);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    local_18.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_18.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TArray_MV__TSizedDefaultAllocator__0CA______0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TArray_MV__TSizedDefaultAllocator__0CA______0A__MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = (param_1->VertexName).Number;
    pTVar4[1].SharedReferenceCount = (atomic<int>)(param_1->VertexName).ComparisonIndex.Value;
    pTVar4[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TInputNode<TArray<float,TSizedDefaultAllocator<32>_>,0> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<TArray<float,TSizedDefaultAllocator<32>_>_>();
  FInputNode::FInputNode((FInputNode *)this,param_1,pFVar6,Reference,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &___7__TInputNode_V__TArray_MV__TSizedDefaultAllocator__0CA______0A__Metasound__6B_;
  return this;
}

// TInputNode<TArray<float,TSizedDefaultAllocator<32>_>,0> @ 14af28060

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<TArray<float,TSizedDefaultAllocator<32>_>,0> * __thiscall
Metasound::TInputNode<TArray<float,TSizedDefaultAllocator<32>_>,0>::
TInputNode<TArray<float,TSizedDefaultAllocator<32>_>,0>
          (TInputNode<TArray<float,TSizedDefaultAllocator<32>_>,0> *this,FName *param_1,
          FNodeData *param_2,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<TArray<float,TSizedDefaultAllocator<32>_>,0> *pTVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_b8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  local_a8.Object = param_3->Object;
  local_a8.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar4 = FNodeData::FNodeData(&local_98,param_2);
  pTVar5 = ::operator_new(0x20);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    local_b8.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_b8.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TArray_MV__TSizedDefaultAllocator__0CA______0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TArray_MV__TSizedDefaultAllocator__0CA______0A__MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = param_1->Number;
    pTVar5[1].SharedReferenceCount = (atomic<int>)(param_1->ComparisonIndex).Value;
    pTVar5[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TInputNode<TArray<float,TSizedDefaultAllocator<32>_>,0> *)(*pcVar1)();
        return pTVar6;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    local_b8.Object = (IOperatorFactory *)(pTVar5 + 1);
    local_b8.SharedReferenceCount.ReferenceController = pTVar5;
  }
  FInputNode::FInputNode((FInputNode *)this,&local_b8,pFVar4,&local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(undefined ***)this =
       &___7__TInputNode_V__TArray_MV__TSizedDefaultAllocator__0CA______0A__Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,1> @ 14af281b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,1> * __thiscall
Metasound::TInputNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,1>::
TInputNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,1>
          (TInputNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,1> *this
          ,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,1> *pTVar5;
  FName *pFVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_18;
  
  pTVar4 = ::operator_new(0x20);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    local_18.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_18.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______00_MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = (param_1->VertexName).Number;
    pTVar4[1].SharedReferenceCount = (atomic<int>)(param_1->VertexName).ComparisonIndex.Value;
    pTVar4[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TInputNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,1>
                  *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                     ();
  FInputNode::FInputNode((FInputNode *)this,param_1,pFVar6,Value,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &
       ___7__TInputNode_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______00_Metasound__6B_
  ;
  return this;
}

// TInputNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,1> @ 14af282c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,1> * __thiscall
Metasound::TInputNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,1>::
TInputNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,1>
          (TInputNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,1> *this
          ,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,1> *pTVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_b8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  local_a8.Object = param_3->Object;
  local_a8.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar4 = FNodeData::FNodeData(&local_98,param_2);
  pTVar5 = ::operator_new(0x20);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    local_b8.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_b8.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______00_MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = param_1->Number;
    pTVar5[1].SharedReferenceCount = (atomic<int>)(param_1->ComparisonIndex).Value;
    pTVar5[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TInputNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,1>
                  *)(*pcVar1)();
        return pTVar6;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    local_b8.Object = (IOperatorFactory *)(pTVar5 + 1);
    local_b8.SharedReferenceCount.ReferenceController = pTVar5;
  }
  FInputNode::FInputNode((FInputNode *)this,&local_b8,pFVar4,&local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(undefined ***)this =
       &
       ___7__TInputNode_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______00_Metasound__6B_
  ;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,0> @ 14af28410

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,0> * __thiscall
Metasound::TInputNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,0>::
TInputNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,0>
          (TInputNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,0> *this
          ,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,0> *pTVar5;
  FName *pFVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_18;
  
  pTVar4 = ::operator_new(0x20);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    local_18.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_18.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______0A__MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = (param_1->VertexName).Number;
    pTVar4[1].SharedReferenceCount = (atomic<int>)(param_1->VertexName).ComparisonIndex.Value;
    pTVar4[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TInputNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,0>
                  *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                     ();
  FInputNode::FInputNode((FInputNode *)this,param_1,pFVar6,Reference,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &
       ___7__TInputNode_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______0A__Metasound__6B_
  ;
  return this;
}

// TInputNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,0> @ 14af28520

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,0> * __thiscall
Metasound::TInputNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,0>::
TInputNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,0>
          (TInputNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,0> *this
          ,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,0> *pTVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_b8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  local_a8.Object = param_3->Object;
  local_a8.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar4 = FNodeData::FNodeData(&local_98,param_2);
  pTVar5 = ::operator_new(0x20);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    local_b8.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_b8.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______0A__MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = param_1->Number;
    pTVar5[1].SharedReferenceCount = (atomic<int>)(param_1->ComparisonIndex).Value;
    pTVar5[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TInputNode<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,0>
                  *)(*pcVar1)();
        return pTVar6;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    local_b8.Object = (IOperatorFactory *)(pTVar5 + 1);
    local_b8.SharedReferenceCount.ReferenceController = pTVar5;
  }
  FInputNode::FInputNode((FInputNode *)this,&local_b8,pFVar4,&local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(undefined ***)this =
       &
       ___7__TInputNode_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______0A__Metasound__6B_
  ;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,1> @ 14af28670

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,1> * __thiscall
Metasound::TInputNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,1>::
TInputNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,1>
          (TInputNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,1> *this,
          FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,1> *pTVar5;
  FName *pFVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_18;
  
  pTVar4 = ::operator_new(0x20);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    local_18.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_18.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______00_MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = (param_1->VertexName).Number;
    pTVar4[1].SharedReferenceCount = (atomic<int>)(param_1->VertexName).ComparisonIndex.Value;
    pTVar4[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TInputNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,1> *)
                 (*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>();
  FInputNode::FInputNode((FInputNode *)this,param_1,pFVar6,Value,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &
       ___7__TInputNode_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______00_Metasound__6B_
  ;
  return this;
}

// TInputNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,1> @ 14af28780

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,1> * __thiscall
Metasound::TInputNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,1>::
TInputNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,1>
          (TInputNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,1> *this,
          FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,1> *pTVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_b8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  local_a8.Object = param_3->Object;
  local_a8.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar4 = FNodeData::FNodeData(&local_98,param_2);
  pTVar5 = ::operator_new(0x20);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    local_b8.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_b8.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______00_MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = param_1->Number;
    pTVar5[1].SharedReferenceCount = (atomic<int>)(param_1->ComparisonIndex).Value;
    pTVar5[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TInputNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,1> *)
                 (*pcVar1)();
        return pTVar6;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    local_b8.Object = (IOperatorFactory *)(pTVar5 + 1);
    local_b8.SharedReferenceCount.ReferenceController = pTVar5;
  }
  FInputNode::FInputNode((FInputNode *)this,&local_b8,pFVar4,&local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(undefined ***)this =
       &
       ___7__TInputNode_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______00_Metasound__6B_
  ;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,0> @ 14af288d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,0> * __thiscall
Metasound::TInputNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,0>::
TInputNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,0>
          (TInputNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,0> *this,
          FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,0> *pTVar5;
  FName *pFVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_18;
  
  pTVar4 = ::operator_new(0x20);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    local_18.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_18.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______0A__MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = (param_1->VertexName).Number;
    pTVar4[1].SharedReferenceCount = (atomic<int>)(param_1->VertexName).ComparisonIndex.Value;
    pTVar4[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TInputNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,0> *)
                 (*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>();
  FInputNode::FInputNode((FInputNode *)this,param_1,pFVar6,Reference,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &
       ___7__TInputNode_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______0A__Metasound__6B_
  ;
  return this;
}

// TInputNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,0> @ 14af289e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,0> * __thiscall
Metasound::TInputNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,0>::
TInputNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,0>
          (TInputNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,0> *this,
          FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,0> *pTVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_b8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  local_a8.Object = param_3->Object;
  local_a8.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar4 = FNodeData::FNodeData(&local_98,param_2);
  pTVar5 = ::operator_new(0x20);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    local_b8.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_b8.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______0A__MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = param_1->Number;
    pTVar5[1].SharedReferenceCount = (atomic<int>)(param_1->ComparisonIndex).Value;
    pTVar5[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TInputNode<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,0> *)
                 (*pcVar1)();
        return pTVar6;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    local_b8.Object = (IOperatorFactory *)(pTVar5 + 1);
    local_b8.SharedReferenceCount.ReferenceController = pTVar5;
  }
  FInputNode::FInputNode((FInputNode *)this,&local_b8,pFVar4,&local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(undefined ***)this =
       &
       ___7__TInputNode_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______0A__Metasound__6B_
  ;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<TArray<FString,TSizedDefaultAllocator<32>_>,1> @ 14af28b30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<TArray<FString,TSizedDefaultAllocator<32>_>,1> * __thiscall
Metasound::TInputNode<TArray<FString,TSizedDefaultAllocator<32>_>,1>::
TInputNode<TArray<FString,TSizedDefaultAllocator<32>_>,1>
          (TInputNode<TArray<FString,TSizedDefaultAllocator<32>_>,1> *this,
          FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<TArray<FString,TSizedDefaultAllocator<32>_>,1> *pTVar5;
  FName *pFVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_18;
  
  pTVar4 = ::operator_new(0x20);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    local_18.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_18.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______00_MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = (param_1->VertexName).Number;
    pTVar4[1].SharedReferenceCount = (atomic<int>)(param_1->VertexName).ComparisonIndex.Value;
    pTVar4[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TInputNode<TArray<FString,TSizedDefaultAllocator<32>_>,1> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>();
  FInputNode::FInputNode((FInputNode *)this,param_1,pFVar6,Value,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &___7__TInputNode_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______00_Metasound__6B_;
  return this;
}

// TInputNode<TArray<FString,TSizedDefaultAllocator<32>_>,1> @ 14af28c40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<TArray<FString,TSizedDefaultAllocator<32>_>,1> * __thiscall
Metasound::TInputNode<TArray<FString,TSizedDefaultAllocator<32>_>,1>::
TInputNode<TArray<FString,TSizedDefaultAllocator<32>_>,1>
          (TInputNode<TArray<FString,TSizedDefaultAllocator<32>_>,1> *this,FName *param_1,
          FNodeData *param_2,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<TArray<FString,TSizedDefaultAllocator<32>_>,1> *pTVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_b8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  local_a8.Object = param_3->Object;
  local_a8.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar4 = FNodeData::FNodeData(&local_98,param_2);
  pTVar5 = ::operator_new(0x20);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    local_b8.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_b8.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______00_MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = param_1->Number;
    pTVar5[1].SharedReferenceCount = (atomic<int>)(param_1->ComparisonIndex).Value;
    pTVar5[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TInputNode<TArray<FString,TSizedDefaultAllocator<32>_>,1> *)(*pcVar1)();
        return pTVar6;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    local_b8.Object = (IOperatorFactory *)(pTVar5 + 1);
    local_b8.SharedReferenceCount.ReferenceController = pTVar5;
  }
  FInputNode::FInputNode((FInputNode *)this,&local_b8,pFVar4,&local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(undefined ***)this =
       &___7__TInputNode_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______00_Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<TArray<FString,TSizedDefaultAllocator<32>_>,0> @ 14af28d90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<TArray<FString,TSizedDefaultAllocator<32>_>,0> * __thiscall
Metasound::TInputNode<TArray<FString,TSizedDefaultAllocator<32>_>,0>::
TInputNode<TArray<FString,TSizedDefaultAllocator<32>_>,0>
          (TInputNode<TArray<FString,TSizedDefaultAllocator<32>_>,0> *this,
          FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<TArray<FString,TSizedDefaultAllocator<32>_>,0> *pTVar5;
  FName *pFVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_18;
  
  pTVar4 = ::operator_new(0x20);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    local_18.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_18.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______0A__MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = (param_1->VertexName).Number;
    pTVar4[1].SharedReferenceCount = (atomic<int>)(param_1->VertexName).ComparisonIndex.Value;
    pTVar4[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TInputNode<TArray<FString,TSizedDefaultAllocator<32>_>,0> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<TArray<FString,TSizedDefaultAllocator<32>_>_>();
  FInputNode::FInputNode((FInputNode *)this,param_1,pFVar6,Reference,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &___7__TInputNode_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______0A__Metasound__6B_;
  return this;
}

// TInputNode<TArray<FString,TSizedDefaultAllocator<32>_>,0> @ 14af28ea0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<TArray<FString,TSizedDefaultAllocator<32>_>,0> * __thiscall
Metasound::TInputNode<TArray<FString,TSizedDefaultAllocator<32>_>,0>::
TInputNode<TArray<FString,TSizedDefaultAllocator<32>_>,0>
          (TInputNode<TArray<FString,TSizedDefaultAllocator<32>_>,0> *this,FName *param_1,
          FNodeData *param_2,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<TArray<FString,TSizedDefaultAllocator<32>_>,0> *pTVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_b8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  local_a8.Object = param_3->Object;
  local_a8.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar4 = FNodeData::FNodeData(&local_98,param_2);
  pTVar5 = ::operator_new(0x20);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    local_b8.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_b8.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______0A__MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = param_1->Number;
    pTVar5[1].SharedReferenceCount = (atomic<int>)(param_1->ComparisonIndex).Value;
    pTVar5[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TInputNode<TArray<FString,TSizedDefaultAllocator<32>_>,0> *)(*pcVar1)();
        return pTVar6;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    local_b8.Object = (IOperatorFactory *)(pTVar5 + 1);
    local_b8.SharedReferenceCount.ReferenceController = pTVar5;
  }
  FInputNode::FInputNode((FInputNode *)this,&local_b8,pFVar4,&local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(undefined ***)this =
       &___7__TInputNode_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______0A__Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,1> @ 14af28ff0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,1> * __thiscall
Metasound::TInputNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,1>::
TInputNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,1>
          (TInputNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,1> *this,
          FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,1> *pTVar5;
  FName *pFVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_18;
  
  pTVar4 = ::operator_new(0x20);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    local_18.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_18.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______00_MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = (param_1->VertexName).Number;
    pTVar4[1].SharedReferenceCount = (atomic<int>)(param_1->VertexName).ComparisonIndex.Value;
    pTVar4[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TInputNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,1> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>();
  FInputNode::FInputNode((FInputNode *)this,param_1,pFVar6,Value,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &
       ___7__TInputNode_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______00_Metasound__6B_
  ;
  return this;
}

// TInputNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,1> @ 14af29100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,1> * __thiscall
Metasound::TInputNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,1>::
TInputNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,1>
          (TInputNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,1> *this,FName *param_1,
          FNodeData *param_2,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,1> *pTVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_b8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  local_a8.Object = param_3->Object;
  local_a8.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar4 = FNodeData::FNodeData(&local_98,param_2);
  pTVar5 = ::operator_new(0x20);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    local_b8.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_b8.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______00_MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = param_1->Number;
    pTVar5[1].SharedReferenceCount = (atomic<int>)(param_1->ComparisonIndex).Value;
    pTVar5[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TInputNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,1> *)(*pcVar1)();
        return pTVar6;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    local_b8.Object = (IOperatorFactory *)(pTVar5 + 1);
    local_b8.SharedReferenceCount.ReferenceController = pTVar5;
  }
  FInputNode::FInputNode((FInputNode *)this,&local_b8,pFVar4,&local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(undefined ***)this =
       &
       ___7__TInputNode_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______00_Metasound__6B_
  ;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,0> @ 14af29250

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,0> * __thiscall
Metasound::TInputNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,0>::
TInputNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,0>
          (TInputNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,0> *this,
          FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,0> *pTVar5;
  FName *pFVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_18;
  
  pTVar4 = ::operator_new(0x20);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    local_18.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_18.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______0A__MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = (param_1->VertexName).Number;
    pTVar4[1].SharedReferenceCount = (atomic<int>)(param_1->VertexName).ComparisonIndex.Value;
    pTVar4[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TInputNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,0> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>();
  FInputNode::FInputNode((FInputNode *)this,param_1,pFVar6,Reference,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &
       ___7__TInputNode_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______0A__Metasound__6B_
  ;
  return this;
}

// TInputNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,0> @ 14af29360

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,0> * __thiscall
Metasound::TInputNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,0>::
TInputNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,0>
          (TInputNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,0> *this,FName *param_1,
          FNodeData *param_2,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,0> *pTVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_b8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  local_a8.Object = param_3->Object;
  local_a8.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar4 = FNodeData::FNodeData(&local_98,param_2);
  pTVar5 = ::operator_new(0x20);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    local_b8.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_b8.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______0A__MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = param_1->Number;
    pTVar5[1].SharedReferenceCount = (atomic<int>)(param_1->ComparisonIndex).Value;
    pTVar5[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TInputNode<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,0> *)(*pcVar1)();
        return pTVar6;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    local_b8.Object = (IOperatorFactory *)(pTVar5 + 1);
    local_b8.SharedReferenceCount.ReferenceController = pTVar5;
  }
  FInputNode::FInputNode((FInputNode *)this,&local_b8,pFVar4,&local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(undefined ***)this =
       &
       ___7__TInputNode_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______0A__Metasound__6B_
  ;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<TArray<bool,TSizedDefaultAllocator<32>_>,1> @ 14af294b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<TArray<bool,TSizedDefaultAllocator<32>_>,1> * __thiscall
Metasound::TInputNode<TArray<bool,TSizedDefaultAllocator<32>_>,1>::
TInputNode<TArray<bool,TSizedDefaultAllocator<32>_>,1>
          (TInputNode<TArray<bool,TSizedDefaultAllocator<32>_>,1> *this,
          FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<TArray<bool,TSizedDefaultAllocator<32>_>,1> *pTVar5;
  FName *pFVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_18;
  
  pTVar4 = ::operator_new(0x20);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    local_18.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_18.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TArray__NV__TSizedDefaultAllocator__0CA______00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TArray__NV__TSizedDefaultAllocator__0CA______00_MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = (param_1->VertexName).Number;
    pTVar4[1].SharedReferenceCount = (atomic<int>)(param_1->VertexName).ComparisonIndex.Value;
    pTVar4[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TInputNode<TArray<bool,TSizedDefaultAllocator<32>_>,1> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>();
  FInputNode::FInputNode((FInputNode *)this,param_1,pFVar6,Value,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &___7__TInputNode_V__TArray__NV__TSizedDefaultAllocator__0CA______00_Metasound__6B_;
  return this;
}

// TInputNode<TArray<bool,TSizedDefaultAllocator<32>_>,1> @ 14af295c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<TArray<bool,TSizedDefaultAllocator<32>_>,1> * __thiscall
Metasound::TInputNode<TArray<bool,TSizedDefaultAllocator<32>_>,1>::
TInputNode<TArray<bool,TSizedDefaultAllocator<32>_>,1>
          (TInputNode<TArray<bool,TSizedDefaultAllocator<32>_>,1> *this,FName *param_1,
          FNodeData *param_2,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<TArray<bool,TSizedDefaultAllocator<32>_>,1> *pTVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_b8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  local_a8.Object = param_3->Object;
  local_a8.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar4 = FNodeData::FNodeData(&local_98,param_2);
  pTVar5 = ::operator_new(0x20);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    local_b8.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_b8.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TArray__NV__TSizedDefaultAllocator__0CA______00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TArray__NV__TSizedDefaultAllocator__0CA______00_MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = param_1->Number;
    pTVar5[1].SharedReferenceCount = (atomic<int>)(param_1->ComparisonIndex).Value;
    pTVar5[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TInputNode<TArray<bool,TSizedDefaultAllocator<32>_>,1> *)(*pcVar1)();
        return pTVar6;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    local_b8.Object = (IOperatorFactory *)(pTVar5 + 1);
    local_b8.SharedReferenceCount.ReferenceController = pTVar5;
  }
  FInputNode::FInputNode((FInputNode *)this,&local_b8,pFVar4,&local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(undefined ***)this =
       &___7__TInputNode_V__TArray__NV__TSizedDefaultAllocator__0CA______00_Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<TArray<bool,TSizedDefaultAllocator<32>_>,0> @ 14af29710

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<TArray<bool,TSizedDefaultAllocator<32>_>,0> * __thiscall
Metasound::TInputNode<TArray<bool,TSizedDefaultAllocator<32>_>,0>::
TInputNode<TArray<bool,TSizedDefaultAllocator<32>_>,0>
          (TInputNode<TArray<bool,TSizedDefaultAllocator<32>_>,0> *this,
          FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<TArray<bool,TSizedDefaultAllocator<32>_>,0> *pTVar5;
  FName *pFVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_18;
  
  pTVar4 = ::operator_new(0x20);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    local_18.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_18.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TArray__NV__TSizedDefaultAllocator__0CA______0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TArray__NV__TSizedDefaultAllocator__0CA______0A__MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = (param_1->VertexName).Number;
    pTVar4[1].SharedReferenceCount = (atomic<int>)(param_1->VertexName).ComparisonIndex.Value;
    pTVar4[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TInputNode<TArray<bool,TSizedDefaultAllocator<32>_>,0> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<TArray<bool,TSizedDefaultAllocator<32>_>_>();
  FInputNode::FInputNode((FInputNode *)this,param_1,pFVar6,Reference,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &___7__TInputNode_V__TArray__NV__TSizedDefaultAllocator__0CA______0A__Metasound__6B_;
  return this;
}

// TInputNode<TArray<bool,TSizedDefaultAllocator<32>_>,0> @ 14af29820

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<TArray<bool,TSizedDefaultAllocator<32>_>,0> * __thiscall
Metasound::TInputNode<TArray<bool,TSizedDefaultAllocator<32>_>,0>::
TInputNode<TArray<bool,TSizedDefaultAllocator<32>_>,0>
          (TInputNode<TArray<bool,TSizedDefaultAllocator<32>_>,0> *this,FName *param_1,
          FNodeData *param_2,TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<TArray<bool,TSizedDefaultAllocator<32>_>,0> *pTVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_b8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  local_a8.Object = param_3->Object;
  local_a8.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar4 = FNodeData::FNodeData(&local_98,param_2);
  pTVar5 = ::operator_new(0x20);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    local_b8.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_b8.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TArray__NV__TSizedDefaultAllocator__0CA______0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TArray__NV__TSizedDefaultAllocator__0CA______0A__MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = param_1->Number;
    pTVar5[1].SharedReferenceCount = (atomic<int>)(param_1->ComparisonIndex).Value;
    pTVar5[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TInputNode<TArray<bool,TSizedDefaultAllocator<32>_>,0> *)(*pcVar1)();
        return pTVar6;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    local_b8.Object = (IOperatorFactory *)(pTVar5 + 1);
    local_b8.SharedReferenceCount.ReferenceController = pTVar5;
  }
  FInputNode::FInputNode((FInputNode *)this,&local_b8,pFVar4,&local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(undefined ***)this =
       &___7__TInputNode_V__TArray__NV__TSizedDefaultAllocator__0CA______0A__Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::FAudioBuffer,0> @ 14af29970

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::FAudioBuffer,0> * __thiscall
Metasound::TInputNode<Metasound::FAudioBuffer,0>::TInputNode<Metasound::FAudioBuffer,0>
          (TInputNode<Metasound::FAudioBuffer,0> *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::FAudioBuffer,0> *pTVar5;
  FName *pFVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_18;
  
  pTVar4 = ::operator_new(0x20);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    local_18.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_18.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_VFAudioBuffer_Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_VFAudioBuffer_Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = (param_1->VertexName).Number;
    pTVar4[1].SharedReferenceCount = (atomic<int>)(param_1->VertexName).ComparisonIndex.Value;
    pTVar4[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TInputNode<Metasound::FAudioBuffer,0> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<Metasound::FAudioBuffer>();
  FInputNode::FInputNode((FInputNode *)this,param_1,pFVar6,Reference,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this = &___7__TInputNode_VFAudioBuffer_Metasound___0A__Metasound__6B_;
  return this;
}

// TInputNode<Metasound::FAudioBuffer,0> @ 14af29a80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::FAudioBuffer,0> * __thiscall
Metasound::TInputNode<Metasound::FAudioBuffer,0>::TInputNode<Metasound::FAudioBuffer,0>
          (TInputNode<Metasound::FAudioBuffer,0> *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::FAudioBuffer,0> *pTVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_b8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  local_a8.Object = param_3->Object;
  local_a8.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar4 = FNodeData::FNodeData(&local_98,param_2);
  pTVar5 = ::operator_new(0x20);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    local_b8.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_b8.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_VFAudioBuffer_Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_VFAudioBuffer_Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = param_1->Number;
    pTVar5[1].SharedReferenceCount = (atomic<int>)(param_1->ComparisonIndex).Value;
    pTVar5[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TInputNode<Metasound::FAudioBuffer,0> *)(*pcVar1)();
        return pTVar6;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    local_b8.Object = (IOperatorFactory *)(pTVar5 + 1);
    local_b8.SharedReferenceCount.ReferenceController = pTVar5;
  }
  FInputNode::FInputNode((FInputNode *)this,&local_b8,pFVar4,&local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(undefined ***)this = &___7__TInputNode_VFAudioBuffer_Metasound___0A__Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<FMetasoundParameterStorageWrapper,1> @ 14af29bd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<FMetasoundParameterStorageWrapper,1> * __thiscall
Metasound::TInputNode<FMetasoundParameterStorageWrapper,1>::
TInputNode<FMetasoundParameterStorageWrapper,1>
          (TInputNode<FMetasoundParameterStorageWrapper,1> *this,
          FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<FMetasoundParameterStorageWrapper,1> *pTVar5;
  FName *pFVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_18;
  
  pTVar4 = ::operator_new(0x20);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    local_18.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_18.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_VFMetasoundParameterStorageWrapper___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_VFMetasoundParameterStorageWrapper___00_MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = (param_1->VertexName).Number;
    pTVar4[1].SharedReferenceCount = (atomic<int>)(param_1->VertexName).ComparisonIndex.Value;
    pTVar4[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TInputNode<FMetasoundParameterStorageWrapper,1> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<FMetasoundParameterStorageWrapper>();
  FInputNode::FInputNode((FInputNode *)this,param_1,pFVar6,Value,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this = &___7__TInputNode_VFMetasoundParameterStorageWrapper___00_Metasound__6B_;
  return this;
}

// TInputNode<FMetasoundParameterStorageWrapper,1> @ 14af29ce0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<FMetasoundParameterStorageWrapper,1> * __thiscall
Metasound::TInputNode<FMetasoundParameterStorageWrapper,1>::
TInputNode<FMetasoundParameterStorageWrapper,1>
          (TInputNode<FMetasoundParameterStorageWrapper,1> *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<FMetasoundParameterStorageWrapper,1> *pTVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_b8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  local_a8.Object = param_3->Object;
  local_a8.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar4 = FNodeData::FNodeData(&local_98,param_2);
  pTVar5 = ::operator_new(0x20);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    local_b8.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_b8.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_VFMetasoundParameterStorageWrapper___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_VFMetasoundParameterStorageWrapper___00_MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = param_1->Number;
    pTVar5[1].SharedReferenceCount = (atomic<int>)(param_1->ComparisonIndex).Value;
    pTVar5[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TInputNode<FMetasoundParameterStorageWrapper,1> *)(*pcVar1)();
        return pTVar6;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    local_b8.Object = (IOperatorFactory *)(pTVar5 + 1);
    local_b8.SharedReferenceCount.ReferenceController = pTVar5;
  }
  FInputNode::FInputNode((FInputNode *)this,&local_b8,pFVar4,&local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(undefined ***)this = &___7__TInputNode_VFMetasoundParameterStorageWrapper___00_Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<FMetasoundParameterStorageWrapper,0> @ 14af29e30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<FMetasoundParameterStorageWrapper,0> * __thiscall
Metasound::TInputNode<FMetasoundParameterStorageWrapper,0>::
TInputNode<FMetasoundParameterStorageWrapper,0>
          (TInputNode<FMetasoundParameterStorageWrapper,0> *this,
          FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<FMetasoundParameterStorageWrapper,0> *pTVar5;
  FName *pFVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_18;
  
  pTVar4 = ::operator_new(0x20);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    local_18.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_18.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_VFMetasoundParameterStorageWrapper___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_VFMetasoundParameterStorageWrapper___0A__MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = (param_1->VertexName).Number;
    pTVar4[1].SharedReferenceCount = (atomic<int>)(param_1->VertexName).ComparisonIndex.Value;
    pTVar4[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TInputNode<FMetasoundParameterStorageWrapper,0> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<FMetasoundParameterStorageWrapper>();
  FInputNode::FInputNode((FInputNode *)this,param_1,pFVar6,Reference,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this = &___7__TInputNode_VFMetasoundParameterStorageWrapper___0A__Metasound__6B_;
  return this;
}

// TInputNode<FMetasoundParameterStorageWrapper,0> @ 14af29f40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<FMetasoundParameterStorageWrapper,0> * __thiscall
Metasound::TInputNode<FMetasoundParameterStorageWrapper,0>::
TInputNode<FMetasoundParameterStorageWrapper,0>
          (TInputNode<FMetasoundParameterStorageWrapper,0> *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<FMetasoundParameterStorageWrapper,0> *pTVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_b8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  local_a8.Object = param_3->Object;
  local_a8.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar4 = FNodeData::FNodeData(&local_98,param_2);
  pTVar5 = ::operator_new(0x20);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    local_b8.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_b8.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_VFMetasoundParameterStorageWrapper___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_VFMetasoundParameterStorageWrapper___0A__MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = param_1->Number;
    pTVar5[1].SharedReferenceCount = (atomic<int>)(param_1->ComparisonIndex).Value;
    pTVar5[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TInputNode<FMetasoundParameterStorageWrapper,0> *)(*pcVar1)();
        return pTVar6;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    local_b8.Object = (IOperatorFactory *)(pTVar5 + 1);
    local_b8.SharedReferenceCount.ReferenceController = pTVar5;
  }
  FInputNode::FInputNode((FInputNode *)this,&local_b8,pFVar4,&local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(undefined ***)this = &___7__TInputNode_VFMetasoundParameterStorageWrapper___0A__Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::FSendAddress,1> @ 14af2a090

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::FSendAddress,1> * __thiscall
Metasound::TInputNode<Metasound::FSendAddress,1>::TInputNode<Metasound::FSendAddress,1>
          (TInputNode<Metasound::FSendAddress,1> *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::FSendAddress,1> *pTVar5;
  FName *pFVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_18;
  
  pTVar4 = ::operator_new(0x20);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    local_18.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_18.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_VFSendAddress_Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_VFSendAddress_Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = (param_1->VertexName).Number;
    pTVar4[1].SharedReferenceCount = (atomic<int>)(param_1->VertexName).ComparisonIndex.Value;
    pTVar4[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TInputNode<Metasound::FSendAddress,1> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<Metasound::FSendAddress>();
  FInputNode::FInputNode((FInputNode *)this,param_1,pFVar6,Value,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this = &___7__TInputNode_VFSendAddress_Metasound___00_Metasound__6B_;
  return this;
}

// TInputNode<Metasound::FSendAddress,1> @ 14af2a1a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::FSendAddress,1> * __thiscall
Metasound::TInputNode<Metasound::FSendAddress,1>::TInputNode<Metasound::FSendAddress,1>
          (TInputNode<Metasound::FSendAddress,1> *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::FSendAddress,1> *pTVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_b8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  local_a8.Object = param_3->Object;
  local_a8.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar4 = FNodeData::FNodeData(&local_98,param_2);
  pTVar5 = ::operator_new(0x20);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    local_b8.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_b8.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_VFSendAddress_Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_VFSendAddress_Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = param_1->Number;
    pTVar5[1].SharedReferenceCount = (atomic<int>)(param_1->ComparisonIndex).Value;
    pTVar5[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TInputNode<Metasound::FSendAddress,1> *)(*pcVar1)();
        return pTVar6;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    local_b8.Object = (IOperatorFactory *)(pTVar5 + 1);
    local_b8.SharedReferenceCount.ReferenceController = pTVar5;
  }
  FInputNode::FInputNode((FInputNode *)this,&local_b8,pFVar4,&local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(undefined ***)this = &___7__TInputNode_VFSendAddress_Metasound___00_Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::FSendAddress,0> @ 14af2a2f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::FSendAddress,0> * __thiscall
Metasound::TInputNode<Metasound::FSendAddress,0>::TInputNode<Metasound::FSendAddress,0>
          (TInputNode<Metasound::FSendAddress,0> *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::FSendAddress,0> *pTVar5;
  FName *pFVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_18;
  
  pTVar4 = ::operator_new(0x20);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    local_18.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_18.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_VFSendAddress_Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_VFSendAddress_Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = (param_1->VertexName).Number;
    pTVar4[1].SharedReferenceCount = (atomic<int>)(param_1->VertexName).ComparisonIndex.Value;
    pTVar4[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TInputNode<Metasound::FSendAddress,0> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<Metasound::FSendAddress>();
  FInputNode::FInputNode((FInputNode *)this,param_1,pFVar6,Reference,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this = &___7__TInputNode_VFSendAddress_Metasound___0A__Metasound__6B_;
  return this;
}

// TInputNode<Metasound::FSendAddress,0> @ 14af2a400

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::FSendAddress,0> * __thiscall
Metasound::TInputNode<Metasound::FSendAddress,0>::TInputNode<Metasound::FSendAddress,0>
          (TInputNode<Metasound::FSendAddress,0> *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::FSendAddress,0> *pTVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_b8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  local_a8.Object = param_3->Object;
  local_a8.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar4 = FNodeData::FNodeData(&local_98,param_2);
  pTVar5 = ::operator_new(0x20);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    local_b8.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_b8.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_VFSendAddress_Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_VFSendAddress_Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = param_1->Number;
    pTVar5[1].SharedReferenceCount = (atomic<int>)(param_1->ComparisonIndex).Value;
    pTVar5[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TInputNode<Metasound::FSendAddress,0> *)(*pcVar1)();
        return pTVar6;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    local_b8.Object = (IOperatorFactory *)(pTVar5 + 1);
    local_b8.SharedReferenceCount.ReferenceController = pTVar5;
  }
  FInputNode::FInputNode((FInputNode *)this,&local_b8,pFVar4,&local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(undefined ***)this = &___7__TInputNode_VFSendAddress_Metasound___0A__Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<FString,1> @ 14af2a550

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<FString,1> * __thiscall
Metasound::TInputNode<FString,1>::TInputNode<FString,1>
          (TInputNode<FString,1> *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<FString,1> *pTVar5;
  FName *pFVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_18;
  
  pTVar4 = ::operator_new(0x20);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    local_18.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_18.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_VFString___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &___7__TInputNodeOperatorFactory_VFString___00_MetasoundInputNodePrivate_Metasound__6B_;
    uVar2 = (param_1->VertexName).Number;
    pTVar4[1].SharedReferenceCount = (atomic<int>)(param_1->VertexName).ComparisonIndex.Value;
    pTVar4[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TInputNode<FString,1> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<FString>();
  FInputNode::FInputNode((FInputNode *)this,param_1,pFVar6,Value,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this = &___7__TInputNode_VFString___00_Metasound__6B_;
  return this;
}

// TInputNode<FString,1> @ 14af2a660

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<FString,1> * __thiscall
Metasound::TInputNode<FString,1>::TInputNode<FString,1>
          (TInputNode<FString,1> *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<FString,1> *pTVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_b8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  local_a8.Object = param_3->Object;
  local_a8.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar4 = FNodeData::FNodeData(&local_98,param_2);
  pTVar5 = ::operator_new(0x20);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    local_b8.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_b8.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_VFString___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &___7__TInputNodeOperatorFactory_VFString___00_MetasoundInputNodePrivate_Metasound__6B_;
    uVar2 = param_1->Number;
    pTVar5[1].SharedReferenceCount = (atomic<int>)(param_1->ComparisonIndex).Value;
    pTVar5[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TInputNode<FString,1> *)(*pcVar1)();
        return pTVar6;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    local_b8.Object = (IOperatorFactory *)(pTVar5 + 1);
    local_b8.SharedReferenceCount.ReferenceController = pTVar5;
  }
  FInputNode::FInputNode((FInputNode *)this,&local_b8,pFVar4,&local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(undefined ***)this = &___7__TInputNode_VFString___00_Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<FString,0> @ 14af2a7b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<FString,0> * __thiscall
Metasound::TInputNode<FString,0>::TInputNode<FString,0>
          (TInputNode<FString,0> *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<FString,0> *pTVar5;
  FName *pFVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_18;
  
  pTVar4 = ::operator_new(0x20);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    local_18.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_18.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_VFString___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &___7__TInputNodeOperatorFactory_VFString___0A__MetasoundInputNodePrivate_Metasound__6B_;
    uVar2 = (param_1->VertexName).Number;
    pTVar4[1].SharedReferenceCount = (atomic<int>)(param_1->VertexName).ComparisonIndex.Value;
    pTVar4[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TInputNode<FString,0> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<FString>();
  FInputNode::FInputNode((FInputNode *)this,param_1,pFVar6,Reference,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this = &___7__TInputNode_VFString___0A__Metasound__6B_;
  return this;
}

// TInputNode<FString,0> @ 14af2a8c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<FString,0> * __thiscall
Metasound::TInputNode<FString,0>::TInputNode<FString,0>
          (TInputNode<FString,0> *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<FString,0> *pTVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_b8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  local_a8.Object = param_3->Object;
  local_a8.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar4 = FNodeData::FNodeData(&local_98,param_2);
  pTVar5 = ::operator_new(0x20);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    local_b8.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_b8.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_VFString___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &___7__TInputNodeOperatorFactory_VFString___0A__MetasoundInputNodePrivate_Metasound__6B_;
    uVar2 = param_1->Number;
    pTVar5[1].SharedReferenceCount = (atomic<int>)(param_1->ComparisonIndex).Value;
    pTVar5[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TInputNode<FString,0> *)(*pcVar1)();
        return pTVar6;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    local_b8.Object = (IOperatorFactory *)(pTVar5 + 1);
    local_b8.SharedReferenceCount.ReferenceController = pTVar5;
  }
  FInputNode::FInputNode((FInputNode *)this,&local_b8,pFVar4,&local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(undefined ***)this = &___7__TInputNode_VFString___0A__Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::FTime,1> @ 14af2aa10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::FTime,1> * __thiscall
Metasound::TInputNode<Metasound::FTime,1>::TInputNode<Metasound::FTime,1>
          (TInputNode<Metasound::FTime,1> *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::FTime,1> *pTVar5;
  FName *pFVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_18;
  
  pTVar4 = ::operator_new(0x20);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    local_18.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_18.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_VFTime_Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_VFTime_Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = (param_1->VertexName).Number;
    pTVar4[1].SharedReferenceCount = (atomic<int>)(param_1->VertexName).ComparisonIndex.Value;
    pTVar4[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TInputNode<Metasound::FTime,1> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<Metasound::FTime>();
  FInputNode::FInputNode((FInputNode *)this,param_1,pFVar6,Value,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this = &___7__TInputNode_VFTime_Metasound___00_Metasound__6B_;
  return this;
}

// TInputNode<Metasound::FTime,1> @ 14af2ab20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::FTime,1> * __thiscall
Metasound::TInputNode<Metasound::FTime,1>::TInputNode<Metasound::FTime,1>
          (TInputNode<Metasound::FTime,1> *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::FTime,1> *pTVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_b8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  local_a8.Object = param_3->Object;
  local_a8.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar4 = FNodeData::FNodeData(&local_98,param_2);
  pTVar5 = ::operator_new(0x20);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    local_b8.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_b8.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_VFTime_Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_VFTime_Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = param_1->Number;
    pTVar5[1].SharedReferenceCount = (atomic<int>)(param_1->ComparisonIndex).Value;
    pTVar5[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TInputNode<Metasound::FTime,1> *)(*pcVar1)();
        return pTVar6;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    local_b8.Object = (IOperatorFactory *)(pTVar5 + 1);
    local_b8.SharedReferenceCount.ReferenceController = pTVar5;
  }
  FInputNode::FInputNode((FInputNode *)this,&local_b8,pFVar4,&local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(undefined ***)this = &___7__TInputNode_VFTime_Metasound___00_Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::FTime,0> @ 14af2ac70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::FTime,0> * __thiscall
Metasound::TInputNode<Metasound::FTime,0>::TInputNode<Metasound::FTime,0>
          (TInputNode<Metasound::FTime,0> *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::FTime,0> *pTVar5;
  FName *pFVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_18;
  
  pTVar4 = ::operator_new(0x20);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    local_18.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_18.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_VFTime_Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_VFTime_Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = (param_1->VertexName).Number;
    pTVar4[1].SharedReferenceCount = (atomic<int>)(param_1->VertexName).ComparisonIndex.Value;
    pTVar4[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TInputNode<Metasound::FTime,0> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<Metasound::FTime>();
  FInputNode::FInputNode((FInputNode *)this,param_1,pFVar6,Reference,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this = &___7__TInputNode_VFTime_Metasound___0A__Metasound__6B_;
  return this;
}

// TInputNode<Metasound::FTime,0> @ 14af2ad80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::FTime,0> * __thiscall
Metasound::TInputNode<Metasound::FTime,0>::TInputNode<Metasound::FTime,0>
          (TInputNode<Metasound::FTime,0> *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::FTime,0> *pTVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_b8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  local_a8.Object = param_3->Object;
  local_a8.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar4 = FNodeData::FNodeData(&local_98,param_2);
  pTVar5 = ::operator_new(0x20);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    local_b8.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_b8.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_VFTime_Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_VFTime_Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = param_1->Number;
    pTVar5[1].SharedReferenceCount = (atomic<int>)(param_1->ComparisonIndex).Value;
    pTVar5[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TInputNode<Metasound::FTime,0> *)(*pcVar1)();
        return pTVar6;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    local_b8.Object = (IOperatorFactory *)(pTVar5 + 1);
    local_b8.SharedReferenceCount.ReferenceController = pTVar5;
  }
  FInputNode::FInputNode((FInputNode *)this,&local_b8,pFVar4,&local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(undefined ***)this = &___7__TInputNode_VFTime_Metasound___0A__Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::FTrigger,0> @ 14af2aed0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::FTrigger,0> * __thiscall
Metasound::TInputNode<Metasound::FTrigger,0>::TInputNode<Metasound::FTrigger,0>
          (TInputNode<Metasound::FTrigger,0> *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::FTrigger,0> *pTVar5;
  FName *pFVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_18;
  
  pTVar4 = ::operator_new(0x20);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    local_18.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_18.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_VFTrigger_Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_VFTrigger_Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = (param_1->VertexName).Number;
    pTVar4[1].SharedReferenceCount = (atomic<int>)(param_1->VertexName).ComparisonIndex.Value;
    pTVar4[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TInputNode<Metasound::FTrigger,0> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<Metasound::FTrigger>();
  FInputNode::FInputNode((FInputNode *)this,param_1,pFVar6,Reference,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this = &___7__TInputNode_VFTrigger_Metasound___0A__Metasound__6B_;
  return this;
}

// TInputNode<Metasound::FTrigger,0> @ 14af2afe0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::FTrigger,0> * __thiscall
Metasound::TInputNode<Metasound::FTrigger,0>::TInputNode<Metasound::FTrigger,0>
          (TInputNode<Metasound::FTrigger,0> *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::FTrigger,0> *pTVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_b8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  local_a8.Object = param_3->Object;
  local_a8.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar4 = FNodeData::FNodeData(&local_98,param_2);
  pTVar5 = ::operator_new(0x20);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    local_b8.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_b8.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_VFTrigger_Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_VFTrigger_Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
    ;
    uVar2 = param_1->Number;
    pTVar5[1].SharedReferenceCount = (atomic<int>)(param_1->ComparisonIndex).Value;
    pTVar5[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TInputNode<Metasound::FTrigger,0> *)(*pcVar1)();
        return pTVar6;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    local_b8.Object = (IOperatorFactory *)(pTVar5 + 1);
    local_b8.SharedReferenceCount.ReferenceController = pTVar5;
  }
  FInputNode::FInputNode((FInputNode *)this,&local_b8,pFVar4,&local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(undefined ***)this = &___7__TInputNode_VFTrigger_Metasound___0A__Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<bool,1> @ 14af2b130

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<bool,1> * __thiscall
Metasound::TInputNode<bool,1>::TInputNode<bool,1>
          (TInputNode<bool,1> *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<bool,1> *pTVar5;
  FName *pFVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_18;
  
  pTVar4 = ::operator_new(0x20);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    local_18.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_18.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory__N_00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)&___7__TInputNodeOperatorFactory__N_00_MetasoundInputNodePrivate_Metasound__6B_;
    uVar2 = (param_1->VertexName).Number;
    pTVar4[1].SharedReferenceCount = (atomic<int>)(param_1->VertexName).ComparisonIndex.Value;
    pTVar4[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TInputNode<bool,1> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<bool>();
  FInputNode::FInputNode((FInputNode *)this,param_1,pFVar6,Value,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this = &___7__TInputNode__N_00_Metasound__6B_;
  return this;
}

// TInputNode<bool,1> @ 14af2b240

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<bool,1> * __thiscall
Metasound::TInputNode<bool,1>::TInputNode<bool,1>
          (TInputNode<bool,1> *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<bool,1> *pTVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_b8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  local_a8.Object = param_3->Object;
  local_a8.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar4 = FNodeData::FNodeData(&local_98,param_2);
  pTVar5 = ::operator_new(0x20);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    local_b8.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_b8.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory__N_00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)&___7__TInputNodeOperatorFactory__N_00_MetasoundInputNodePrivate_Metasound__6B_;
    uVar2 = param_1->Number;
    pTVar5[1].SharedReferenceCount = (atomic<int>)(param_1->ComparisonIndex).Value;
    pTVar5[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TInputNode<bool,1> *)(*pcVar1)();
        return pTVar6;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    local_b8.Object = (IOperatorFactory *)(pTVar5 + 1);
    local_b8.SharedReferenceCount.ReferenceController = pTVar5;
  }
  FInputNode::FInputNode((FInputNode *)this,&local_b8,pFVar4,&local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(undefined ***)this = &___7__TInputNode__N_00_Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<bool,0> @ 14af2b390

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<bool,0> * __thiscall
Metasound::TInputNode<bool,0>::TInputNode<bool,0>
          (TInputNode<bool,0> *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<bool,0> *pTVar5;
  FName *pFVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_18;
  
  pTVar4 = ::operator_new(0x20);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    local_18.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_18.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory__N_0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)&___7__TInputNodeOperatorFactory__N_0A__MetasoundInputNodePrivate_Metasound__6B_;
    uVar2 = (param_1->VertexName).Number;
    pTVar4[1].SharedReferenceCount = (atomic<int>)(param_1->VertexName).ComparisonIndex.Value;
    pTVar4[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TInputNode<bool,0> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<bool>();
  FInputNode::FInputNode((FInputNode *)this,param_1,pFVar6,Reference,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this = &___7__TInputNode__N_0A__Metasound__6B_;
  return this;
}

// TInputNode<bool,0> @ 14af2b4a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<bool,0> * __thiscall
Metasound::TInputNode<bool,0>::TInputNode<bool,0>
          (TInputNode<bool,0> *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<bool,0> *pTVar6;
  TSharedRef<Metasound::IOperatorFactory,1> local_b8;
  TSharedRef<Metasound::FNodeClassMetadata_const_,1> local_a8;
  FNodeData local_98;
  
  local_a8.Object = param_3->Object;
  local_a8.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar4 = FNodeData::FNodeData(&local_98,param_2);
  pTVar5 = ::operator_new(0x20);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    local_b8.Object = (IOperatorFactory *)___xmm_00000000000000000000000000000010;
    local_b8.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory__N_0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)&___7__TInputNodeOperatorFactory__N_0A__MetasoundInputNodePrivate_Metasound__6B_;
    uVar2 = param_1->Number;
    pTVar5[1].SharedReferenceCount = (atomic<int>)(param_1->ComparisonIndex).Value;
    pTVar5[1].WeakReferenceCount = (atomic<int>)uVar2;
    if (pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TInputNode<bool,0> *)(*pcVar1)();
        return pTVar6;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    local_b8.Object = (IOperatorFactory *)(pTVar5 + 1);
    local_b8.SharedReferenceCount.ReferenceController = pTVar5;
  }
  FInputNode::FInputNode((FInputNode *)this,&local_b8,pFVar4,&local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(undefined ***)this = &___7__TInputNode__N_0A__Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

