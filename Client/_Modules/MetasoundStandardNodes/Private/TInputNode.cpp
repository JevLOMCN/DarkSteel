// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 82

// TInputNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,1> @ 14aff38c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>,1> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,1>::
TInputNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,1>
          (void *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>,1> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>,1> *)
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
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>()
  ;
  FInputNode::FInputNode(this,param_1,pFVar6,Value,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &
       ___7__TInputNode_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___00_Metasound__6B_
  ;
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,1> @ 14aff39d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>,1> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,1>::
TInputNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,1>
          (void *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>,1> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>,1> *)
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
       ___7__TInputNode_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___00_Metasound__6B_
  ;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,0> @ 14aff3b20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>,0> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,0>::
TInputNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,0>
          (void *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>,0> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>,0> *)
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
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>()
  ;
  FInputNode::FInputNode(this,param_1,pFVar6,Reference,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &
       ___7__TInputNode_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___0A__Metasound__6B_
  ;
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,0> @ 14aff3c30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>,0> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,0>::
TInputNode<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,0>
          (void *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>,0> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>,0> *)
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
       ___7__TInputNode_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___0A__Metasound__6B_
  ;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,1> @ 14aff3d80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,1> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,1>::
TInputNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,1>
          (void *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,1> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,1> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>();
  FInputNode::FInputNode(this,param_1,pFVar6,Value,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &___7__TInputNode_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___00_Metasound__6B_;
  return this;
}

// TInputNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,1> @ 14aff3e90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,1> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,1>::
TInputNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,1>
          (void *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,1> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,1> *)(*pcVar1)();
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
       &___7__TInputNode_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___00_Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,0> @ 14aff3fe0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,0> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,0>::
TInputNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,0>
          (void *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,0> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,0> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>();
  FInputNode::FInputNode(this,param_1,pFVar6,Reference,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &___7__TInputNode_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___0A__Metasound__6B_;
  return this;
}

// TInputNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,0> @ 14aff40f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,0> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,0>::
TInputNode<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,0>
          (void *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,0> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<Metasound::TEnum<Audio::EBiquadFilter::Type,0>,0> *)(*pcVar1)();
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
       &___7__TInputNode_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___0A__Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::FMonoAudioFormat,0> @ 14aff4240

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::FMonoAudioFormat,0> * __thiscall
Metasound::TInputNode<Metasound::FMonoAudioFormat,0>::TInputNode<Metasound::FMonoAudioFormat,0>
          (TInputNode<Metasound::FMonoAudioFormat,0> *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::FMonoAudioFormat,0> *pTVar5;
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
         ___7__TIntrusiveReferenceController_VFInputOperatorFactory___TInputNode_VFMonoAudioFormat_Metasound___0A__Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &___7FInputOperatorFactory___TInputNode_VFMonoAudioFormat_Metasound___0A__Metasound__6B_;
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
        pTVar5 = (TInputNode<Metasound::FMonoAudioFormat,0> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<Metasound::FMonoAudioFormat>();
  FInputNode::FInputNode((FInputNode *)this,param_1,pFVar6,Reference,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this = &___7__TInputNode_VFMonoAudioFormat_Metasound___0A__Metasound__6B_;
  return this;
}

// TInputNode<Metasound::FMonoAudioFormat,0> @ 14aff4350

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::FMonoAudioFormat,0> * __thiscall
Metasound::TInputNode<Metasound::FMonoAudioFormat,0>::TInputNode<Metasound::FMonoAudioFormat,0>
          (TInputNode<Metasound::FMonoAudioFormat,0> *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::FMonoAudioFormat,0> *pTVar6;
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
         ___7__TIntrusiveReferenceController_VFInputOperatorFactory___TInputNode_VFMonoAudioFormat_Metasound___0A__Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &___7FInputOperatorFactory___TInputNode_VFMonoAudioFormat_Metasound___0A__Metasound__6B_;
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
        pTVar6 = (TInputNode<Metasound::FMonoAudioFormat,0> *)(*pcVar1)();
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
  *(undefined ***)this = &___7__TInputNode_VFMonoAudioFormat_Metasound___0A__Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::FStereoAudioFormat,0> @ 14aff44a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::FStereoAudioFormat,0> * __thiscall
Metasound::TInputNode<Metasound::FStereoAudioFormat,0>::TInputNode<Metasound::FStereoAudioFormat,0>
          (TInputNode<Metasound::FStereoAudioFormat,0> *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::FStereoAudioFormat,0> *pTVar5;
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
         ___7__TIntrusiveReferenceController_VFInputOperatorFactory___TInputNode_VFStereoAudioFormat_Metasound___0A__Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &___7FInputOperatorFactory___TInputNode_VFStereoAudioFormat_Metasound___0A__Metasound__6B_;
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
        pTVar5 = (TInputNode<Metasound::FStereoAudioFormat,0> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<Metasound::FStereoAudioFormat>();
  FInputNode::FInputNode((FInputNode *)this,param_1,pFVar6,Reference,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this = &___7__TInputNode_VFStereoAudioFormat_Metasound___0A__Metasound__6B_;
  return this;
}

// TInputNode<Metasound::FStereoAudioFormat,0> @ 14aff45b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::FStereoAudioFormat,0> * __thiscall
Metasound::TInputNode<Metasound::FStereoAudioFormat,0>::TInputNode<Metasound::FStereoAudioFormat,0>
          (TInputNode<Metasound::FStereoAudioFormat,0> *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::FStereoAudioFormat,0> *pTVar6;
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
         ___7__TIntrusiveReferenceController_VFInputOperatorFactory___TInputNode_VFStereoAudioFormat_Metasound___0A__Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &___7FInputOperatorFactory___TInputNode_VFStereoAudioFormat_Metasound___0A__Metasound__6B_;
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
        pTVar6 = (TInputNode<Metasound::FStereoAudioFormat,0> *)(*pcVar1)();
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
  *(undefined ***)this = &___7__TInputNode_VFStereoAudioFormat_Metasound___0A__Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// CreateVertexInterface @ 14b014e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::TInputNode<Metasound::FMonoAudioFormat,0>::CreateVertexInterface
          (FVertexInterface *__return_storage_ptr__,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar3;
  FInputDataVertex *pFVar4;
  FVertexInterface *pFVar5;
  undefined1 auStackY_188 [32];
  FInputVertexInterface local_158;
  FOutputVertexInterface local_138;
  FDataVertexMetadata local_118;
  FDataVertexMetadata local_f0;
  FOutputVertexInterfaceDeclarationBuilder local_c8;
  FInputVertexInterfaceDeclarationBuilder local_a0;
  TOutputDataVertex<Metasound::FAudioBuffer> local_78;
  TInputDataVertex<Metasound::FMonoAudioFormat> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_188;
  FText::FText(&local_f0.Description);
  FText::FText(&local_f0.DisplayName);
  local_f0.bIsAdvancedDisplay = false;
  pTVar3 = TOutputDataVertex<Metasound::FAudioBuffer>::TOutputDataVertex<Metasound::FAudioBuffer><>
                     (&local_78,param_1,&local_f0);
  FOutputVertexInterface::FOutputVertexInterface(&local_138);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_c8,
             (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_138,
             &local_138.SubInterfaces);
  if ((local_c8.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(local_c8.Vertices)->AllocatorInstance,(local_c8.Vertices)->ArrayNum,
               &(local_c8.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_c8,(FOutputDataVertex *)pTVar3);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_c8);
  FText::FText(&local_118.Description);
  FText::FText(&local_118.DisplayName);
  local_118.bIsAdvancedDisplay = false;
  pFVar4 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FMonoAudioFormat>::
           TInputDataVertex<Metasound::FMonoAudioFormat><>(&local_58,param_1,&local_118);
  local_158._padding_ = 0;
  local_158._padding_ = 0;
  local_158.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.SubInterfaces.ArrayNum = 0;
  local_158.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_a0,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_158
             ,&local_158.SubInterfaces);
  if ((local_a0.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,1,&(local_a0.Vertices)->AllocatorInstance,(local_a0.Vertices)->ArrayNum,
               &(local_a0.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_a0,pFVar4);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_a0);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_158,&local_138);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_158.SubInterfaces.AllocatorInstance.Data,
             local_158.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_158.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_158.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_158._padding_,(int)local_158._padding_);
  if ((FInputDataVertex *)local_158._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  if (0xc < (byte)local_58._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FVertexInterface *)(*pcVar1)();
      return pFVar5;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_58._48_1_])(&local_58.field_0x20);
  if (local_118.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_118.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_118.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_118.Description.TextData.Reference + 0x10))();
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data,
             local_138.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_138.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  if (local_f0.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_f0.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_f0.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_f0.Description.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// CreateVertexInterface @ 14b015070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::TInputNode<Metasound::FStereoAudioFormat,0>::CreateVertexInterface
          (FVertexInterface *__return_storage_ptr__,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar3;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_188 [32];
  FInputVertexInterface local_158;
  FOutputVertexInterface local_138;
  FDataVertexMetadata local_118;
  FOutputVertexInterfaceDeclarationBuilder local_f0;
  FInputVertexInterfaceDeclarationBuilder local_c8;
  TOutputDataVertex<Metasound::FAudioBuffer> local_a0;
  TOutputDataVertex<Metasound::FAudioBuffer> local_80;
  TInputDataVertex<Metasound::FStereoAudioFormat> local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pTVar3 = TOutputDataVertex<Metasound::FAudioBuffer>::TOutputDataVertex<Metasound::FAudioBuffer><>
                     (&local_a0,&StereoAudioFormatVertexKeys::RightChannelVertexName,
                      &FDataVertexMetadata::EmptyBasic);
  pTVar4 = TOutputDataVertex<Metasound::FAudioBuffer>::TOutputDataVertex<Metasound::FAudioBuffer><>
                     (&local_80,&StereoAudioFormatVertexKeys::LeftChannelVertexName,
                      &FDataVertexMetadata::EmptyBasic);
  FOutputVertexInterface::FOutputVertexInterface(&local_138);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::FOutputVertexInterfaceDeclarationBuilder
            (&local_f0,
             (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_138,
             &local_138.SubInterfaces);
  if ((local_f0.Vertices)->ArrayMax < 2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,&(local_f0.Vertices)->AllocatorInstance,(local_f0.Vertices)->ArrayNum,
               &(local_f0.Vertices)->ArrayMax);
  }
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_f0,(FOutputDataVertex *)pTVar4);
  VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
            (&local_f0,(FOutputDataVertex *)pTVar3);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_f0);
  FText::FText(&local_118.Description);
  FText::FText(&local_118.DisplayName);
  local_118.bIsAdvancedDisplay = false;
  pFVar5 = (FInputDataVertex *)
           TInputDataVertex<Metasound::FStereoAudioFormat>::
           TInputDataVertex<Metasound::FStereoAudioFormat><>(&local_60,param_1,&local_118);
  local_158._padding_ = 0;
  local_158._padding_ = 0;
  local_158.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.SubInterfaces.ArrayNum = 0;
  local_158.SubInterfaces.ArrayMax = 0;
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
            (&local_c8,(TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_158
             ,&local_158.SubInterfaces);
  if ((local_c8.Vertices)->ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,1,&(local_c8.Vertices)->AllocatorInstance,(local_c8.Vertices)->ArrayNum,
               &(local_c8.Vertices)->ArrayMax);
  }
  VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_c8,pFVar5);
  VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
            ((FSubInterfaceDeclarationBuilder *)&local_c8);
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&local_158,&local_138);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_158.SubInterfaces.AllocatorInstance.Data,
             local_158.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_158.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_158.SubInterfaces.AllocatorInstance.Data);
  }
  DestructItems<Metasound::FInputDataVertex,int>
            ((FInputDataVertex *)local_158._padding_,(int)local_158._padding_);
  if ((FInputDataVertex *)local_158._padding_ != (FInputDataVertex *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  if (0xc < (byte)local_60._48_1_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FVertexInterface *)(*pcVar1)();
      return pFVar6;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_60._48_1_])(&local_60.field_0x20);
  if (local_118.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_118.DisplayName.TextData.Reference + 0x10))();
  }
  if (local_118.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_118.Description.TextData.Reference + 0x10))();
  }
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data,
             local_138.SubInterfaces.ArrayNum);
  if ((FSubInterfaceLayout *)local_138.SubInterfaces.AllocatorInstance.Data !=
      (FSubInterfaceLayout *)0x0) {
    FMemory::Free(local_138.SubInterfaces.AllocatorInstance.Data);
  }
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return __return_storage_ptr__;
}

// TInputNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,1> @ 14b0503a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,1> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,1>::
TInputNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,1>
          (void *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,1> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,1> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>();
  FInputNode::FInputNode(this,param_1,pFVar6,Value,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &___7__TInputNode_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___00_Metasound__6B_;
  return this;
}

// TInputNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,1> @ 14b0504b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,1> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,1>::
TInputNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,1>
          (void *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,1> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,1> *)(*pcVar1)();
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
       &___7__TInputNode_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___00_Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,0> @ 14b050600

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,0> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,0>::
TInputNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,0>
          (void *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,0> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,0> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>();
  FInputNode::FInputNode(this,param_1,pFVar6,Reference,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &___7__TInputNode_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___0A__Metasound__6B_;
  return this;
}

// TInputNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,0> @ 14b050710

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,0> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,0>::
TInputNode<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,0>
          (void *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,0> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<Metasound::TEnum<Audio::EDynamicFilterType,0>,0> *)(*pcVar1)();
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
       &___7__TInputNode_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___0A__Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,1> @ 14b0adc80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::TEnum<Audio::Grain::EEnvelope,0>,1> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,1>::
TInputNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,1>
          (void *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::TEnum<Audio::Grain::EEnvelope,0>,1> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<Metasound::TEnum<Audio::Grain::EEnvelope,0>,1> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>();
  FInputNode::FInputNode(this,param_1,pFVar6,Value,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &___7__TInputNode_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___00_Metasound__6B_;
  return this;
}

// TInputNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,1> @ 14b0add90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::TEnum<Audio::Grain::EEnvelope,0>,1> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,1>::
TInputNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,1>
          (void *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::TEnum<Audio::Grain::EEnvelope,0>,1> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<Metasound::TEnum<Audio::Grain::EEnvelope,0>,1> *)(*pcVar1)();
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
       &___7__TInputNode_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___00_Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,0> @ 14b0adee0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::TEnum<Audio::Grain::EEnvelope,0>,0> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,0>::
TInputNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,0>
          (void *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::TEnum<Audio::Grain::EEnvelope,0>,0> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<Metasound::TEnum<Audio::Grain::EEnvelope,0>,0> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>();
  FInputNode::FInputNode(this,param_1,pFVar6,Reference,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &___7__TInputNode_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___0A__Metasound__6B_;
  return this;
}

// TInputNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,0> @ 14b0adff0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::TEnum<Audio::Grain::EEnvelope,0>,0> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,0>::
TInputNode<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,0>
          (void *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::TEnum<Audio::Grain::EEnvelope,0>,0> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<Metasound::TEnum<Audio::Grain::EEnvelope,0>,0> *)(*pcVar1)();
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
       &___7__TInputNode_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___0A__Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,1> @ 14b0ae140

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>,1> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,1>::
TInputNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,1>
          (void *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>,1> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>,1> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>();
  FInputNode::FInputNode(this,param_1,pFVar6,Value,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &___7__TInputNode_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___00_Metasound__6B_;
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,1> @ 14b0ae250

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>,1> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,1>::
TInputNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,1>
          (void *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>,1> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>,1> *)(*pcVar1)();
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
       &___7__TInputNode_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___00_Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,0> @ 14b0ae3a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>,0> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,0>::
TInputNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,0>
          (void *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>,0> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>,0> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>();
  FInputNode::FInputNode(this,param_1,pFVar6,Reference,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &___7__TInputNode_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___0A__Metasound__6B_
  ;
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,0> @ 14b0ae4b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>,0> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,0>::
TInputNode<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,0>
          (void *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>,0> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>,0> *)(*pcVar1)();
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
       &___7__TInputNode_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___0A__Metasound__6B_
  ;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>,1> @ 14b0ae600

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::TEnum<Metasound::EKneeMode,0>,1> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>,1>::
TInputNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>,1>
          (void *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::TEnum<Metasound::EKneeMode,0>,1> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<Metasound::TEnum<Metasound::EKneeMode,0>,1> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>();
  FInputNode::FInputNode(this,param_1,pFVar6,Value,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &___7__TInputNode_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___00_Metasound__6B_;
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>,1> @ 14b0ae710

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::TEnum<Metasound::EKneeMode,0>,1> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>,1>::
TInputNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>,1>
          (void *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::TEnum<Metasound::EKneeMode,0>,1> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<Metasound::TEnum<Metasound::EKneeMode,0>,1> *)(*pcVar1)();
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
       &___7__TInputNode_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___00_Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>,0> @ 14b0ae860

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::TEnum<Metasound::EKneeMode,0>,0> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>,0>::
TInputNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>,0>
          (void *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::TEnum<Metasound::EKneeMode,0>,0> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<Metasound::TEnum<Metasound::EKneeMode,0>,0> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>();
  FInputNode::FInputNode(this,param_1,pFVar6,Reference,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &___7__TInputNode_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___0A__Metasound__6B_;
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>,0> @ 14b0ae970

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::TEnum<Metasound::EKneeMode,0>,0> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>,0>::
TInputNode<Metasound::TEnum<enum_Metasound::EKneeMode,0>,0>
          (void *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::TEnum<Metasound::EKneeMode,0>,0> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<Metasound::TEnum<Metasound::EKneeMode,0>,0> *)(*pcVar1)();
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
       &___7__TInputNode_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___0A__Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,1> @ 14b0aeac0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>,1> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,1>::
TInputNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,1>
          (void *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>,1> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>,1> *)
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
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
                     ();
  FInputNode::FInputNode(this,param_1,pFVar6,Value,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &
       ___7__TInputNode_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___00_Metasound__6B_
  ;
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,1> @ 14b0aebd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>,1> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,1>::
TInputNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,1>
          (void *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>,1> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>,1> *)
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
       ___7__TInputNode_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___00_Metasound__6B_
  ;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,0> @ 14b0aed20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>,0> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,0>::
TInputNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,0>
          (void *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>,0> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>,0> *)
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
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
                     ();
  FInputNode::FInputNode(this,param_1,pFVar6,Reference,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &
       ___7__TInputNode_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___0A__Metasound__6B_
  ;
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,0> @ 14b0aee30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>,0> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,0>::
TInputNode<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,0>
          (void *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>,0> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>,0> *)
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
       ___7__TInputNode_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___0A__Metasound__6B_
  ;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,1> @ 14b134890

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>,1> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,1>::
TInputNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,1>
          (void *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>,1> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>,1> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>();
  FInputNode::FInputNode(this,param_1,pFVar6,Value,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &___7__TInputNode_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___00_Metasound__6B_;
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,1> @ 14b1349a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>,1> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,1>::
TInputNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,1>
          (void *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>,1> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>,1> *)(*pcVar1)();
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
       &___7__TInputNode_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___00_Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,0> @ 14b134af0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>,0> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,0>::
TInputNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,0>
          (void *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>,0> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>,0> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>();
  FInputNode::FInputNode(this,param_1,pFVar6,Reference,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &___7__TInputNode_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___0A__Metasound__6B_
  ;
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,0> @ 14b134c00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>,0> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,0>::
TInputNode<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,0>
          (void *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>,0> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>,0> *)(*pcVar1)();
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
       &___7__TInputNode_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___0A__Metasound__6B_
  ;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>,1> @ 14b134d50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::TEnum<Metasound::ENoiseType,0>,1> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>,1>::
TInputNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>,1>
          (void *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::TEnum<Metasound::ENoiseType,0>,1> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<Metasound::TEnum<Metasound::ENoiseType,0>,1> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>();
  FInputNode::FInputNode(this,param_1,pFVar6,Value,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &___7__TInputNode_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___00_Metasound__6B_;
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>,1> @ 14b134e60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::TEnum<Metasound::ENoiseType,0>,1> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>,1>::
TInputNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>,1>
          (void *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::TEnum<Metasound::ENoiseType,0>,1> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<Metasound::TEnum<Metasound::ENoiseType,0>,1> *)(*pcVar1)();
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
       &___7__TInputNode_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___00_Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>,0> @ 14b134fb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::TEnum<Metasound::ENoiseType,0>,0> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>,0>::
TInputNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>,0>
          (void *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::TEnum<Metasound::ENoiseType,0>,0> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<Metasound::TEnum<Metasound::ENoiseType,0>,0> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>();
  FInputNode::FInputNode(this,param_1,pFVar6,Reference,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &___7__TInputNode_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___0A__Metasound__6B_;
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>,0> @ 14b1350c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::TEnum<Metasound::ENoiseType,0>,0> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>,0>::
TInputNode<Metasound::TEnum<enum_Metasound::ENoiseType,0>,0>
          (void *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::TEnum<Metasound::ENoiseType,0>,0> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<Metasound::TEnum<Metasound::ENoiseType,0>,0> *)(*pcVar1)();
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
       &___7__TInputNode_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___0A__Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,1> @ 14b135210

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::TEnum<Metasound::ESawGenerationType,0>,1> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,1>::
TInputNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,1>
          (void *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::TEnum<Metasound::ESawGenerationType,0>,1> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<Metasound::TEnum<Metasound::ESawGenerationType,0>,1> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>();
  FInputNode::FInputNode(this,param_1,pFVar6,Value,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &___7__TInputNode_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___00_Metasound__6B_
  ;
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,1> @ 14b135320

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::TEnum<Metasound::ESawGenerationType,0>,1> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,1>::
TInputNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,1>
          (void *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::TEnum<Metasound::ESawGenerationType,0>,1> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<Metasound::TEnum<Metasound::ESawGenerationType,0>,1> *)(*pcVar1)();
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
       &___7__TInputNode_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___00_Metasound__6B_
  ;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,0> @ 14b135470

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::TEnum<Metasound::ESawGenerationType,0>,0> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,0>::
TInputNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,0>
          (void *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::TEnum<Metasound::ESawGenerationType,0>,0> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<Metasound::TEnum<Metasound::ESawGenerationType,0>,0> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>();
  FInputNode::FInputNode(this,param_1,pFVar6,Reference,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &
       ___7__TInputNode_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___0A__Metasound__6B_
  ;
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,0> @ 14b135580

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::TEnum<Metasound::ESawGenerationType,0>,0> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,0>::
TInputNode<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,0>
          (void *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::TEnum<Metasound::ESawGenerationType,0>,0> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<Metasound::TEnum<Metasound::ESawGenerationType,0>,0> *)(*pcVar1)();
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
       ___7__TInputNode_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___0A__Metasound__6B_
  ;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,1> @ 14b1356d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::TEnum<Metasound::ESineGenerationType,3>,1> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,1>::
TInputNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,1>
          (void *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::TEnum<Metasound::ESineGenerationType,3>,1> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<Metasound::TEnum<Metasound::ESineGenerationType,3>,1> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>();
  FInputNode::FInputNode(this,param_1,pFVar6,Value,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &___7__TInputNode_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___00_Metasound__6B_
  ;
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,1> @ 14b1357e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::TEnum<Metasound::ESineGenerationType,3>,1> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,1>::
TInputNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,1>
          (void *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::TEnum<Metasound::ESineGenerationType,3>,1> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<Metasound::TEnum<Metasound::ESineGenerationType,3>,1> *)(*pcVar1)();
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
       &___7__TInputNode_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___00_Metasound__6B_
  ;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,0> @ 14b135930

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::TEnum<Metasound::ESineGenerationType,3>,0> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,0>::
TInputNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,0>
          (void *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::TEnum<Metasound::ESineGenerationType,3>,0> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<Metasound::TEnum<Metasound::ESineGenerationType,3>,0> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>();
  FInputNode::FInputNode(this,param_1,pFVar6,Reference,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &
       ___7__TInputNode_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___0A__Metasound__6B_
  ;
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,0> @ 14b135a40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::TEnum<Metasound::ESineGenerationType,3>,0> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,0>::
TInputNode<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,0>
          (void *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::TEnum<Metasound::ESineGenerationType,3>,0> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<Metasound::TEnum<Metasound::ESineGenerationType,3>,0> *)(*pcVar1)();
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
       ___7__TInputNode_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___0A__Metasound__6B_
  ;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,1> @ 14b135b90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::TEnum<Metasound::ESquareGenerationType,0>,1> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,1>::
TInputNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,1>
          (void *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::TEnum<Metasound::ESquareGenerationType,0>,1> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<Metasound::TEnum<Metasound::ESquareGenerationType,0>,1> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>();
  FInputNode::FInputNode(this,param_1,pFVar6,Value,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &
       ___7__TInputNode_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___00_Metasound__6B_
  ;
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,1> @ 14b135ca0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::TEnum<Metasound::ESquareGenerationType,0>,1> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,1>::
TInputNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,1>
          (void *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::TEnum<Metasound::ESquareGenerationType,0>,1> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<Metasound::TEnum<Metasound::ESquareGenerationType,0>,1> *)(*pcVar1)();
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
       ___7__TInputNode_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___00_Metasound__6B_
  ;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,0> @ 14b135df0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::TEnum<Metasound::ESquareGenerationType,0>,0> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,0>::
TInputNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,0>
          (void *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::TEnum<Metasound::ESquareGenerationType,0>,0> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<Metasound::TEnum<Metasound::ESquareGenerationType,0>,0> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>();
  FInputNode::FInputNode(this,param_1,pFVar6,Reference,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &
       ___7__TInputNode_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___0A__Metasound__6B_
  ;
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,0> @ 14b135f00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::TEnum<Metasound::ESquareGenerationType,0>,0> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,0>::
TInputNode<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,0>
          (void *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::TEnum<Metasound::ESquareGenerationType,0>,0> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<Metasound::TEnum<Metasound::ESquareGenerationType,0>,0> *)(*pcVar1)();
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
       ___7__TInputNode_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___0A__Metasound__6B_
  ;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,1> @ 14b136050

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::TEnum<Metasound::ETriangleGenerationType,0>,1> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,1>::
TInputNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,1>
          (void *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::TEnum<Metasound::ETriangleGenerationType,0>,1> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<Metasound::TEnum<Metasound::ETriangleGenerationType,0>,1> *)(*pcVar1)()
        ;
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>();
  FInputNode::FInputNode(this,param_1,pFVar6,Value,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &
       ___7__TInputNode_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___00_Metasound__6B_
  ;
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,1> @ 14b136160

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::TEnum<Metasound::ETriangleGenerationType,0>,1> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,1>::
TInputNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,1>
          (void *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::TEnum<Metasound::ETriangleGenerationType,0>,1> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<Metasound::TEnum<Metasound::ETriangleGenerationType,0>,1> *)(*pcVar1)()
        ;
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
       ___7__TInputNode_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___00_Metasound__6B_
  ;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,0> @ 14b1362b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::TEnum<Metasound::ETriangleGenerationType,0>,0> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,0>::
TInputNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,0>
          (void *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::TEnum<Metasound::ETriangleGenerationType,0>,0> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<Metasound::TEnum<Metasound::ETriangleGenerationType,0>,0> *)(*pcVar1)()
        ;
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>();
  FInputNode::FInputNode(this,param_1,pFVar6,Reference,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &
       ___7__TInputNode_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___0A__Metasound__6B_
  ;
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,0> @ 14b1363c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::TEnum<Metasound::ETriangleGenerationType,0>,0> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,0>::
TInputNode<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,0>
          (void *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::TEnum<Metasound::ETriangleGenerationType,0>,0> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<Metasound::TEnum<Metasound::ETriangleGenerationType,0>,0> *)(*pcVar1)()
        ;
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
       ___7__TInputNode_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___0A__Metasound__6B_
  ;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,1> @ 14b136510

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,1> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,1>::
TInputNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,1>
          (void *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,1> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,1> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>();
  FInputNode::FInputNode(this,param_1,pFVar6,Value,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &___7__TInputNode_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___00_Metasound__6B_;
  return this;
}

// TInputNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,1> @ 14b136620

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,1> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,1>::
TInputNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,1>
          (void *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,1> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,1> *)(*pcVar1)();
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
       &___7__TInputNode_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___00_Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,0> @ 14b136770

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,0> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,0>::
TInputNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,0>
          (void *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,0> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,0> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>();
  FInputNode::FInputNode(this,param_1,pFVar6,Reference,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &___7__TInputNode_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___0A__Metasound__6B_;
  return this;
}

// TInputNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,0> @ 14b136880

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,0> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,0>::
TInputNode<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,0>
          (void *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,0> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<Metasound::TEnum<Audio::EMusicalScale::Scale,0>,0> *)(*pcVar1)();
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
       &___7__TInputNode_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___0A__Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,1> @ 14b1cac20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::TEnum<Metasound::EPanningLaw,0>,1> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,1>::
TInputNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,1>
          (void *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::TEnum<Metasound::EPanningLaw,0>,1> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<Metasound::TEnum<Metasound::EPanningLaw,0>,1> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>();
  FInputNode::FInputNode(this,param_1,pFVar6,Value,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &___7__TInputNode_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___00_Metasound__6B_;
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,1> @ 14b1cad30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::TEnum<Metasound::EPanningLaw,0>,1> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,1>::
TInputNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,1>
          (void *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::TEnum<Metasound::EPanningLaw,0>,1> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<Metasound::TEnum<Metasound::EPanningLaw,0>,1> *)(*pcVar1)();
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
       &___7__TInputNode_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___00_Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,0> @ 14b1cae80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::TEnum<Metasound::EPanningLaw,0>,0> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,0>::
TInputNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,0>
          (void *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::TEnum<Metasound::EPanningLaw,0>,0> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<Metasound::TEnum<Metasound::EPanningLaw,0>,0> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>();
  FInputNode::FInputNode(this,param_1,pFVar6,Reference,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &___7__TInputNode_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___0A__Metasound__6B_;
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,0> @ 14b1caf90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::TEnum<Metasound::EPanningLaw,0>,0> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,0>::
TInputNode<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,0>
          (void *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::TEnum<Metasound::EPanningLaw,0>,0> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<Metasound::TEnum<Metasound::EPanningLaw,0>,0> *)(*pcVar1)();
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
       &___7__TInputNode_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___0A__Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,1> @ 14b1cb0e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::TEnum<Metasound::EStereoDelayMode,0>,1> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,1>::
TInputNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,1>
          (void *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::TEnum<Metasound::EStereoDelayMode,0>,1> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<Metasound::TEnum<Metasound::EStereoDelayMode,0>,1> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>();
  FInputNode::FInputNode(this,param_1,pFVar6,Value,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &___7__TInputNode_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___00_Metasound__6B_;
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,1> @ 14b1cb1f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::TEnum<Metasound::EStereoDelayMode,0>,1> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,1>::
TInputNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,1>
          (void *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::TEnum<Metasound::EStereoDelayMode,0>,1> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<Metasound::TEnum<Metasound::EStereoDelayMode,0>,1> *)(*pcVar1)();
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
       &___7__TInputNode_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___00_Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,0> @ 14b1cb340

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::TEnum<Metasound::EStereoDelayMode,0>,0> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,0>::
TInputNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,0>
          (void *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::TEnum<Metasound::EStereoDelayMode,0>,0> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<Metasound::TEnum<Metasound::EStereoDelayMode,0>,0> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>();
  FInputNode::FInputNode(this,param_1,pFVar6,Reference,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &___7__TInputNode_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___0A__Metasound__6B_;
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,0> @ 14b1cb450

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::TEnum<Metasound::EStereoDelayMode,0>,0> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,0>::
TInputNode<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,0>
          (void *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::TEnum<Metasound::EStereoDelayMode,0>,0> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<Metasound::TEnum<Metasound::EStereoDelayMode,0>,0> *)(*pcVar1)();
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
       &___7__TInputNode_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___0A__Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,1> @ 14b22cab0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::TEnum<Metasound::EBufferTriggerType,0>,1> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,1>::
TInputNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,1>
          (void *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::TEnum<Metasound::EBufferTriggerType,0>,1> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<Metasound::TEnum<Metasound::EBufferTriggerType,0>,1> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>();
  FInputNode::FInputNode(this,param_1,pFVar6,Value,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &___7__TInputNode_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___00_Metasound__6B_
  ;
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,1> @ 14b22cbc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::TEnum<Metasound::EBufferTriggerType,0>,1> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,1>::
TInputNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,1>
          (void *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::TEnum<Metasound::EBufferTriggerType,0>,1> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<Metasound::TEnum<Metasound::EBufferTriggerType,0>,1> *)(*pcVar1)();
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
       &___7__TInputNode_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___00_Metasound__6B_
  ;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,0> @ 14b22cd10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::TEnum<Metasound::EBufferTriggerType,0>,0> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,0>::
TInputNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,0>
          (void *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::TEnum<Metasound::EBufferTriggerType,0>,0> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<Metasound::TEnum<Metasound::EBufferTriggerType,0>,0> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>();
  FInputNode::FInputNode(this,param_1,pFVar6,Reference,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &
       ___7__TInputNode_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___0A__Metasound__6B_
  ;
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,0> @ 14b22ce20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::TEnum<Metasound::EBufferTriggerType,0>,0> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,0>::
TInputNode<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,0>
          (void *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::TEnum<Metasound::EBufferTriggerType,0>,0> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<Metasound::TEnum<Metasound::EBufferTriggerType,0>,0> *)(*pcVar1)();
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
       ___7__TInputNode_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___0A__Metasound__6B_
  ;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,1> @ 14b22cf70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::TEnum<Metasound::ETriggerComparisonType,0>,1> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,1>::
TInputNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,1>
          (void *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::TEnum<Metasound::ETriggerComparisonType,0>,1> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<Metasound::TEnum<Metasound::ETriggerComparisonType,0>,1> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>();
  FInputNode::FInputNode(this,param_1,pFVar6,Value,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &
       ___7__TInputNode_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___00_Metasound__6B_
  ;
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,1> @ 14b22d080

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::TEnum<Metasound::ETriggerComparisonType,0>,1> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,1>::
TInputNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,1>
          (void *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::TEnum<Metasound::ETriggerComparisonType,0>,1> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<Metasound::TEnum<Metasound::ETriggerComparisonType,0>,1> *)(*pcVar1)();
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
       ___7__TInputNode_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___00_Metasound__6B_
  ;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,0> @ 14b22d1d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::TEnum<Metasound::ETriggerComparisonType,0>,0> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,0>::
TInputNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,0>
          (void *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::TEnum<Metasound::ETriggerComparisonType,0>,0> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<Metasound::TEnum<Metasound::ETriggerComparisonType,0>,0> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>();
  FInputNode::FInputNode(this,param_1,pFVar6,Reference,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &
       ___7__TInputNode_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___0A__Metasound__6B_
  ;
  return this;
}

// TInputNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,0> @ 14b22d2e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::TEnum<Metasound::ETriggerComparisonType,0>,0> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,0>::
TInputNode<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,0>
          (void *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::TEnum<Metasound::ETriggerComparisonType,0>,0> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<Metasound::TEnum<Metasound::ETriggerComparisonType,0>,0> *)(*pcVar1)();
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
       ___7__TInputNode_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___0A__Metasound__6B_
  ;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,1> @ 14b22d430

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::TEnum<Audio::EWaveShaperType,1>,1> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,1>::
TInputNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,1>
          (void *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::TEnum<Audio::EWaveShaperType,1>,1> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<Metasound::TEnum<Audio::EWaveShaperType,1>,1> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>();
  FInputNode::FInputNode(this,param_1,pFVar6,Value,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &___7__TInputNode_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___00_Metasound__6B_;
  return this;
}

// TInputNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,1> @ 14b22d540

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::TEnum<Audio::EWaveShaperType,1>,1> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,1>::
TInputNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,1>
          (void *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::TEnum<Audio::EWaveShaperType,1>,1> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<Metasound::TEnum<Audio::EWaveShaperType,1>,1> *)(*pcVar1)();
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
       &___7__TInputNode_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___00_Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,0> @ 14b22d690

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::TEnum<Audio::EWaveShaperType,1>,0> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,0>::
TInputNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,0>
          (void *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::TEnum<Audio::EWaveShaperType,1>,0> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<Metasound::TEnum<Audio::EWaveShaperType,1>,0> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>();
  FInputNode::FInputNode(this,param_1,pFVar6,Reference,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &___7__TInputNode_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___0A__Metasound__6B_;
  return this;
}

// TInputNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,0> @ 14b22d7a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::TEnum<Audio::EWaveShaperType,1>,0> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,0>::
TInputNode<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,0>
          (void *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::TEnum<Audio::EWaveShaperType,1>,0> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<Metasound::TEnum<Audio::EWaveShaperType,1>,0> *)(*pcVar1)();
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
       &___7__TInputNode_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___0A__Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

