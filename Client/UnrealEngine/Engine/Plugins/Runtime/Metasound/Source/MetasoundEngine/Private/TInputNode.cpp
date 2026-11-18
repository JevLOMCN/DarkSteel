// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 36

// TInputNode<WaveTable::FWaveTable,1> @ 14b33ab70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<WaveTable::FWaveTable,1> * __thiscall
Metasound::TInputNode<WaveTable::FWaveTable,1>::TInputNode<WaveTable::FWaveTable,1>
          (TInputNode<WaveTable::FWaveTable,1> *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<WaveTable::FWaveTable,1> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_UFWaveTable_WaveTable___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_UFWaveTable_WaveTable___00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<WaveTable::FWaveTable,1> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<WaveTable::FWaveTable>();
  FInputNode::FInputNode((FInputNode *)this,param_1,pFVar6,Value,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this = &___7__TInputNode_UFWaveTable_WaveTable___00_Metasound__6B_;
  return this;
}

// TInputNode<WaveTable::FWaveTable,1> @ 14b33ac80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<WaveTable::FWaveTable,1> * __thiscall
Metasound::TInputNode<WaveTable::FWaveTable,1>::TInputNode<WaveTable::FWaveTable,1>
          (TInputNode<WaveTable::FWaveTable,1> *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<WaveTable::FWaveTable,1> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_UFWaveTable_WaveTable___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_UFWaveTable_WaveTable___00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<WaveTable::FWaveTable,1> *)(*pcVar1)();
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
  *(undefined ***)this = &___7__TInputNode_UFWaveTable_WaveTable___00_Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<WaveTable::FWaveTable,0> @ 14b33add0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<WaveTable::FWaveTable,0> * __thiscall
Metasound::TInputNode<WaveTable::FWaveTable,0>::TInputNode<WaveTable::FWaveTable,0>
          (TInputNode<WaveTable::FWaveTable,0> *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<WaveTable::FWaveTable,0> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_UFWaveTable_WaveTable___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_UFWaveTable_WaveTable___0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<WaveTable::FWaveTable,0> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<WaveTable::FWaveTable>();
  FInputNode::FInputNode((FInputNode *)this,param_1,pFVar6,Reference,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this = &___7__TInputNode_UFWaveTable_WaveTable___0A__Metasound__6B_;
  return this;
}

// TInputNode<WaveTable::FWaveTable,0> @ 14b33aee0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<WaveTable::FWaveTable,0> * __thiscall
Metasound::TInputNode<WaveTable::FWaveTable,0>::TInputNode<WaveTable::FWaveTable,0>
          (TInputNode<WaveTable::FWaveTable,0> *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<WaveTable::FWaveTable,0> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_UFWaveTable_WaveTable___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_UFWaveTable_WaveTable___0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<WaveTable::FWaveTable,0> *)(*pcVar1)();
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
  *(undefined ***)this = &___7__TInputNode_UFWaveTable_WaveTable___0A__Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,1> @ 14b33b030

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,1> * __thiscall
Metasound::TInputNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,1>::
TInputNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,1>
          (TInputNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,1> *this,
          FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,1> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,1> *)
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
  pFVar6 = GetMetasoundDataTypeName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                     ();
  FInputNode::FInputNode((FInputNode *)this,param_1,pFVar6,Value,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &
       ___7__TInputNode_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______00_Metasound__6B_
  ;
  return this;
}

// TInputNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,1> @ 14b33b140

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,1> * __thiscall
Metasound::TInputNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,1>::
TInputNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,1>
          (TInputNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,1> *this,
          FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,1> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,1> *)
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
       ___7__TInputNode_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______00_Metasound__6B_
  ;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,0> @ 14b33b290

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,0> * __thiscall
Metasound::TInputNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,0>::
TInputNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,0>
          (TInputNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,0> *this,
          FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,0> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,0> *)
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
  pFVar6 = GetMetasoundDataTypeName<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                     ();
  FInputNode::FInputNode((FInputNode *)this,param_1,pFVar6,Reference,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &
       ___7__TInputNode_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______0A__Metasound__6B_
  ;
  return this;
}

// TInputNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,0> @ 14b33b3a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,0> * __thiscall
Metasound::TInputNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,0>::
TInputNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,0>
          (TInputNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,0> *this,
          FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,0> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,0> *)
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
       ___7__TInputNode_V__TArray_VFAudioBusAsset_Metasound__V__TSizedDefaultAllocator__0CA______0A__Metasound__6B_
  ;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,1> @ 14b33b4f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,1> * __thiscall
Metasound::TInputNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,1>::
TInputNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,1>
          (TInputNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,1> *this,
          FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,1> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,1> *)
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
  pFVar6 = GetMetasoundDataTypeName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>();
  FInputNode::FInputNode((FInputNode *)this,param_1,pFVar6,Value,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &
       ___7__TInputNode_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______00_Metasound__6B_
  ;
  return this;
}

// TInputNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,1> @ 14b33b600

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,1> * __thiscall
Metasound::TInputNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,1>::
TInputNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,1>
          (TInputNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,1> *this,
          FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,1> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,1> *)
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
       ___7__TInputNode_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______00_Metasound__6B_
  ;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,0> @ 14b33b750

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,0> * __thiscall
Metasound::TInputNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,0>::
TInputNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,0>
          (TInputNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,0> *this,
          FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,0> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,0> *)
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
  pFVar6 = GetMetasoundDataTypeName<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>();
  FInputNode::FInputNode((FInputNode *)this,param_1,pFVar6,Reference,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &
       ___7__TInputNode_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______0A__Metasound__6B_
  ;
  return this;
}

// TInputNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,0> @ 14b33b860

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,0> * __thiscall
Metasound::TInputNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,0>::
TInputNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,0>
          (TInputNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,0> *this,
          FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,0> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,0> *)
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
       ___7__TInputNode_V__TArray_VFWaveAsset_Metasound__V__TSizedDefaultAllocator__0CA______0A__Metasound__6B_
  ;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,1> @ 14b33b9b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,1> * __thiscall
Metasound::TInputNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,1>::
TInputNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,1>
          (TInputNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,1> *this,
          FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,1> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,1> *
                 )(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                     ();
  FInputNode::FInputNode((FInputNode *)this,param_1,pFVar6,Value,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &
       ___7__TInputNode_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______00_Metasound__6B_
  ;
  return this;
}

// TInputNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,1> @ 14b33bac0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,1> * __thiscall
Metasound::TInputNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,1>::
TInputNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,1>
          (TInputNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,1> *this,
          FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,1> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,1> *
                 )(*pcVar1)();
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
       ___7__TInputNode_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______00_Metasound__6B_
  ;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,0> @ 14b33bc10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,0> * __thiscall
Metasound::TInputNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,0>::
TInputNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,0>
          (TInputNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,0> *this,
          FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,0> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,0> *
                 )(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                     ();
  FInputNode::FInputNode((FInputNode *)this,param_1,pFVar6,Reference,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &
       ___7__TInputNode_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______0A__Metasound__6B_
  ;
  return this;
}

// TInputNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,0> @ 14b33bd20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,0> * __thiscall
Metasound::TInputNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,0>::
TInputNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,0>
          (TInputNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,0> *this,
          FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,0> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,0> *
                 )(*pcVar1)();
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
       ___7__TInputNode_V__TArray_VFWaveTableBankAsset_Metasound__V__TSizedDefaultAllocator__0CA______0A__Metasound__6B_
  ;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,1> @ 14b33be70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>,1> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,1>::
TInputNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,1>
          (void *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>,1> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>,1>
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
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                     ();
  FInputNode::FInputNode(this,param_1,pFVar6,Value,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &
       ___7__TInputNode_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___00_Metasound__6B_
  ;
  return this;
}

// TInputNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,1> @ 14b33bf80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>,1> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,1>::
TInputNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,1>
          (void *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>,1> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>,1>
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
  FInputNode::FInputNode(this,&local_b8,pFVar4,&local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(undefined ***)this =
       &
       ___7__TInputNode_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___00_Metasound__6B_
  ;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,0> @ 14b33c0d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>,0> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,0>::
TInputNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,0>
          (void *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>,0> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>,0>
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
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                     ();
  FInputNode::FInputNode(this,param_1,pFVar6,Reference,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &
       ___7__TInputNode_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___0A__Metasound__6B_
  ;
  return this;
}

// TInputNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,0> @ 14b33c1e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>,0> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,0>::
TInputNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,0>
          (void *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>,0> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>,0>
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
  FInputNode::FInputNode(this,&local_b8,pFVar4,&local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(undefined ***)this =
       &
       ___7__TInputNode_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___0A__Metasound__6B_
  ;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,1> @ 14b33c330

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>,1> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,1>::
TInputNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,1>
          (void *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>,1> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>,1>
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
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                     ();
  FInputNode::FInputNode(this,param_1,pFVar6,Value,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &
       ___7__TInputNode_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___00_Metasound__6B_
  ;
  return this;
}

// TInputNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,1> @ 14b33c440

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>,1> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,1>::
TInputNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,1>
          (void *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>,1> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>,1>
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
  FInputNode::FInputNode(this,&local_b8,pFVar4,&local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(undefined ***)this =
       &
       ___7__TInputNode_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___00_Metasound__6B_
  ;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,0> @ 14b33c590

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>,0> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,0>::
TInputNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,0>
          (void *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>,0> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>,0>
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
  pFVar6 = GetMetasoundDataTypeName<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                     ();
  FInputNode::FInputNode(this,param_1,pFVar6,Reference,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this =
       &
       ___7__TInputNode_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___0A__Metasound__6B_
  ;
  return this;
}

// TInputNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,0> @ 14b33c6a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>,0> * __thiscall
Metasound::TInputNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,0>::
TInputNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,0>
          (void *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>,0> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>,0>
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
  FInputNode::FInputNode(this,&local_b8,pFVar4,&local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(undefined ***)this =
       &
       ___7__TInputNode_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___0A__Metasound__6B_
  ;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::FAudioBusAsset,1> @ 14b33c7f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::FAudioBusAsset,1> * __thiscall
Metasound::TInputNode<Metasound::FAudioBusAsset,1>::TInputNode<Metasound::FAudioBusAsset,1>
          (TInputNode<Metasound::FAudioBusAsset,1> *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::FAudioBusAsset,1> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_VFAudioBusAsset_Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_VFAudioBusAsset_Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<Metasound::FAudioBusAsset,1> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<Metasound::FAudioBusAsset>();
  FInputNode::FInputNode((FInputNode *)this,param_1,pFVar6,Value,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this = &___7__TInputNode_VFAudioBusAsset_Metasound___00_Metasound__6B_;
  return this;
}

// TInputNode<Metasound::FAudioBusAsset,1> @ 14b33c900

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::FAudioBusAsset,1> * __thiscall
Metasound::TInputNode<Metasound::FAudioBusAsset,1>::TInputNode<Metasound::FAudioBusAsset,1>
          (TInputNode<Metasound::FAudioBusAsset,1> *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::FAudioBusAsset,1> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_VFAudioBusAsset_Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_VFAudioBusAsset_Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<Metasound::FAudioBusAsset,1> *)(*pcVar1)();
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
  *(undefined ***)this = &___7__TInputNode_VFAudioBusAsset_Metasound___00_Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::FAudioBusAsset,0> @ 14b33ca50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::FAudioBusAsset,0> * __thiscall
Metasound::TInputNode<Metasound::FAudioBusAsset,0>::TInputNode<Metasound::FAudioBusAsset,0>
          (TInputNode<Metasound::FAudioBusAsset,0> *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::FAudioBusAsset,0> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_VFAudioBusAsset_Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_VFAudioBusAsset_Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<Metasound::FAudioBusAsset,0> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<Metasound::FAudioBusAsset>();
  FInputNode::FInputNode((FInputNode *)this,param_1,pFVar6,Reference,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this = &___7__TInputNode_VFAudioBusAsset_Metasound___0A__Metasound__6B_;
  return this;
}

// TInputNode<Metasound::FAudioBusAsset,0> @ 14b33cb60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::FAudioBusAsset,0> * __thiscall
Metasound::TInputNode<Metasound::FAudioBusAsset,0>::TInputNode<Metasound::FAudioBusAsset,0>
          (TInputNode<Metasound::FAudioBusAsset,0> *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::FAudioBusAsset,0> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_VFAudioBusAsset_Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_VFAudioBusAsset_Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<Metasound::FAudioBusAsset,0> *)(*pcVar1)();
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
  *(undefined ***)this = &___7__TInputNode_VFAudioBusAsset_Metasound___0A__Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::FWaveAsset,1> @ 14b33ccb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::FWaveAsset,1> * __thiscall
Metasound::TInputNode<Metasound::FWaveAsset,1>::TInputNode<Metasound::FWaveAsset,1>
          (TInputNode<Metasound::FWaveAsset,1> *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::FWaveAsset,1> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_VFWaveAsset_Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_VFWaveAsset_Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<Metasound::FWaveAsset,1> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<Metasound::FWaveAsset>();
  FInputNode::FInputNode((FInputNode *)this,param_1,pFVar6,Value,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this = &___7__TInputNode_VFWaveAsset_Metasound___00_Metasound__6B_;
  return this;
}

// TInputNode<Metasound::FWaveAsset,1> @ 14b33cdc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::FWaveAsset,1> * __thiscall
Metasound::TInputNode<Metasound::FWaveAsset,1>::TInputNode<Metasound::FWaveAsset,1>
          (TInputNode<Metasound::FWaveAsset,1> *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::FWaveAsset,1> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_VFWaveAsset_Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_VFWaveAsset_Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<Metasound::FWaveAsset,1> *)(*pcVar1)();
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
  *(undefined ***)this = &___7__TInputNode_VFWaveAsset_Metasound___00_Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::FWaveAsset,0> @ 14b33cf10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::FWaveAsset,0> * __thiscall
Metasound::TInputNode<Metasound::FWaveAsset,0>::TInputNode<Metasound::FWaveAsset,0>
          (TInputNode<Metasound::FWaveAsset,0> *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::FWaveAsset,0> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_VFWaveAsset_Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_VFWaveAsset_Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<Metasound::FWaveAsset,0> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<Metasound::FWaveAsset>();
  FInputNode::FInputNode((FInputNode *)this,param_1,pFVar6,Reference,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this = &___7__TInputNode_VFWaveAsset_Metasound___0A__Metasound__6B_;
  return this;
}

// TInputNode<Metasound::FWaveAsset,0> @ 14b33d020

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::FWaveAsset,0> * __thiscall
Metasound::TInputNode<Metasound::FWaveAsset,0>::TInputNode<Metasound::FWaveAsset,0>
          (TInputNode<Metasound::FWaveAsset,0> *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::FWaveAsset,0> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_VFWaveAsset_Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_VFWaveAsset_Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<Metasound::FWaveAsset,0> *)(*pcVar1)();
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
  *(undefined ***)this = &___7__TInputNode_VFWaveAsset_Metasound___0A__Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::FWaveTableBankAsset,1> @ 14b33d170

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::FWaveTableBankAsset,1> * __thiscall
Metasound::TInputNode<Metasound::FWaveTableBankAsset,1>::
TInputNode<Metasound::FWaveTableBankAsset,1>
          (TInputNode<Metasound::FWaveTableBankAsset,1> *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::FWaveTableBankAsset,1> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_VFWaveTableBankAsset_Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_VFWaveTableBankAsset_Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<Metasound::FWaveTableBankAsset,1> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<Metasound::FWaveTableBankAsset>();
  FInputNode::FInputNode((FInputNode *)this,param_1,pFVar6,Value,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this = &___7__TInputNode_VFWaveTableBankAsset_Metasound___00_Metasound__6B_;
  return this;
}

// TInputNode<Metasound::FWaveTableBankAsset,1> @ 14b33d280

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::FWaveTableBankAsset,1> * __thiscall
Metasound::TInputNode<Metasound::FWaveTableBankAsset,1>::
TInputNode<Metasound::FWaveTableBankAsset,1>
          (TInputNode<Metasound::FWaveTableBankAsset,1> *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::FWaveTableBankAsset,1> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_VFWaveTableBankAsset_Metasound___00_MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_VFWaveTableBankAsset_Metasound___00_MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<Metasound::FWaveTableBankAsset,1> *)(*pcVar1)();
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
  *(undefined ***)this = &___7__TInputNode_VFWaveTableBankAsset_Metasound___00_Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// TInputNode<Metasound::FWaveTableBankAsset,0> @ 14b33d3d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInputNode<Metasound::FWaveTableBankAsset,0> * __thiscall
Metasound::TInputNode<Metasound::FWaveTableBankAsset,0>::
TInputNode<Metasound::FWaveTableBankAsset,0>
          (TInputNode<Metasound::FWaveTableBankAsset,0> *this,FInputNodeConstructorParams *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TInputNode<Metasound::FWaveTableBankAsset,0> *pTVar5;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_VFWaveTableBankAsset_Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_VFWaveTableBankAsset_Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar5 = (TInputNode<Metasound::FWaveTableBankAsset,0> *)(*pcVar1)();
        return pTVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.Object = (IOperatorFactory *)(pTVar4 + 1);
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  pFVar6 = GetMetasoundDataTypeName<Metasound::FWaveTableBankAsset>();
  FInputNode::FInputNode((FInputNode *)this,param_1,pFVar6,Reference,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined ***)this = &___7__TInputNode_VFWaveTableBankAsset_Metasound___0A__Metasound__6B_;
  return this;
}

// TInputNode<Metasound::FWaveTableBankAsset,0> @ 14b33d4e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

TInputNode<Metasound::FWaveTableBankAsset,0> * __thiscall
Metasound::TInputNode<Metasound::FWaveTableBankAsset,0>::
TInputNode<Metasound::FWaveTableBankAsset,0>
          (TInputNode<Metasound::FWaveTableBankAsset,0> *this,FName *param_1,FNodeData *param_2,
          TSharedRef<Metasound::FNodeClassMetadata_const_,1> *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  FNodeData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TInputNode<Metasound::FWaveTableBankAsset,0> *pTVar6;
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
         ___7__TIntrusiveReferenceController_V__TInputNodeOperatorFactory_VFWaveTableBankAsset_Metasound___0A__MetasoundInputNodePrivate_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__TInputNodeOperatorFactory_VFWaveTableBankAsset_Metasound___0A__MetasoundInputNodePrivate_Metasound__6B_
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
        pTVar6 = (TInputNode<Metasound::FWaveTableBankAsset,0> *)(*pcVar1)();
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
  *(undefined ***)this = &___7__TInputNode_VFWaveTableBankAsset_Metasound___0A__Metasound__6B_;
  FNodeData::~FNodeData(param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

