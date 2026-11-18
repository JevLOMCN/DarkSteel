// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowNodes
// Functions: 10

// FEditNodeToolChange @ 14dacd590

FEditNodeToolChange * __thiscall
FDataflowCollectionEditSkinWeightsNode::FEditNodeToolChange::FEditNodeToolChange
          (FEditNodeToolChange *this,FDataflowCollectionEditSkinWeightsNode *param_1)

{
  FDataflowVertexSkinWeightData *pFVar1;
  int *piVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  pFVar1 = &this->SavedSkinWeightData;
  this->_padding_ = (longlong)&___7FEditNodeToolChange_FDataflowCollectionEditSkinWeightsNode__6B_;
  uVar6 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar7 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  piVar2 = &(this->SavedSkinWeightData).Bones.ArrayMax;
  (this->NodeGuid).A = (int)uVar6;
  (this->NodeGuid).B = (int)((ulonglong)uVar6 >> 0x20);
  (this->NodeGuid).C = (int)uVar7;
  (this->NodeGuid).D = (int)((ulonglong)uVar7 >> 0x20);
  (pFVar1->Bones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->VertexSkinWeights).Bones.ArrayNum;
  pFVar5 = (param_1->VertexSkinWeights).Bones.AllocatorInstance.Data;
  (this->SavedSkinWeightData).Bones.ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar4,0,(ForAnyElementType *)pFVar1,iVar4,piVar2);
    memcpy((pFVar1->Bones).AllocatorInstance.Data,pFVar5,(longlong)iVar4 * 2);
  }
  pTVar3 = &(this->SavedSkinWeightData).Weights;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->SavedSkinWeightData).Weights.ArrayMax;
  iVar4 = (param_1->VertexSkinWeights).Weights.ArrayNum;
  pFVar5 = (param_1->VertexSkinWeights).Weights.AllocatorInstance.Data;
  (this->SavedSkinWeightData).Weights.ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 2);
  }
  (this->SavedSkinWeightData).ArrayNum = (param_1->VertexSkinWeights).ArrayNum;
  return this;
}

// FEditNodeToolChange @ 14dacd6b0

FEditNodeToolChange * __thiscall
FDataflowVertexAttributeEditableNode::FEditNodeToolChange::FEditNodeToolChange
          (FEditNodeToolChange *this,FDataflowVertexAttributeEditableNode *param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  
  this->_padding_ = (longlong)&___7FEditNodeToolChange_FDataflowVertexAttributeEditableNode__6B_;
  pTVar1 = &this->SavedAttributeValues;
  uVar4 = *(uint *)&param_1->field_0x80;
  uVar5 = *(uint *)&param_1->field_0x84;
  uVar6 = *(uint *)&param_1->field_0x88;
  (this->NodeGuid).A = *(uint *)&param_1->field_0x7c;
  (this->NodeGuid).B = uVar4;
  (this->NodeGuid).C = uVar5;
  (this->NodeGuid).D = uVar6;
  puVar7 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x170))();
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = *(int *)(puVar7 + 1);
  _Src = (void *)*puVar7;
  piVar2 = &(this->SavedAttributeValues).ArrayMax;
  (this->SavedAttributeValues).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 2);
  }
  return this;
}

// Apply @ 14dacf820

void __thiscall
FDataflowCollectionEditSkinWeightsNode::FEditNodeToolChange::Apply
          (FEditNodeToolChange *this,UObject *param_1)

{
  int iVar1;
  FGraph *this_00;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  bool bVar13;
  char cVar14;
  UClass *pUVar15;
  FName FStackX_10;
  FTimestamp FStackX_18;
  TSharedPtr<FDataflowNode,1> TStack_28;
  FGuid FStack_18;
  
  if (param_1 != (UObject *)0x0) {
    pUVar15 = Z_Construct_UClass_UDataflow_NoRegister();
    iVar1 = (int)pUVar15->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar15->_padding_)) {
      this_00 = *(FGraph **)(param_1 + 4);
      pTVar2 = *(TReferenceControllerBase<1> **)&param_1[4].field_0x8;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((this_00 == (FGraph *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FStack_18.A = (this->NodeGuid).A;
      FStack_18.B = (this->NodeGuid).B;
      FStack_18.C = (this->NodeGuid).C;
      FStack_18.D = (this->NodeGuid).D;
      UE::Dataflow::FGraph::FindBaseNode(this_00,&TStack_28,&FStack_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      if (TStack_28.Object != (FDataflowNode *)0x0) {
        ::FName::FName(&FStackX_10,"FDataflowCollectionEditSkinWeightsNode");
        cVar14 = (**(code **)((TStack_28.Object)->_padding_ + 0x128))(TStack_28.Object,FStackX_10);
        if ((cVar14 != '\0') && (TStack_28.Object != (FDataflowNode *)0x0)) {
          uVar6 = *(undefined4 *)&TStack_28.Object[1].InputArrayProperties.field_0x48;
          uVar7 = *(undefined4 *)&TStack_28.Object[1].InputArrayProperties.field_0x4c;
          pFVar4 = (this->SavedSkinWeightData).Bones.AllocatorInstance.Data;
          iVar1 = (this->SavedSkinWeightData).Bones.ArrayNum;
          iVar8 = (this->SavedSkinWeightData).Bones.ArrayMax;
          pFVar5 = (this->SavedSkinWeightData).Weights.AllocatorInstance.Data;
          iVar9 = (this->SavedSkinWeightData).Weights.ArrayNum;
          iVar10 = (this->SavedSkinWeightData).Weights.ArrayMax;
          iVar11 = (this->SavedSkinWeightData).ArrayNum;
          uVar12 = *(undefined4 *)&(this->SavedSkinWeightData).field_0x24;
          (this->SavedSkinWeightData).Bones.AllocatorInstance.Data =
               *(FScriptContainerElement **)&TStack_28.Object[1].InputArrayProperties.field_0x40;
          (this->SavedSkinWeightData).Bones.ArrayNum = uVar6;
          (this->SavedSkinWeightData).Bones.ArrayMax = uVar7;
          uVar6 = *(undefined4 *)&TStack_28.Object[1].ExpandedOutputs.field_0x8;
          uVar7 = *(undefined4 *)&TStack_28.Object[1].ExpandedOutputs.field_0xc;
          (this->SavedSkinWeightData).Weights.AllocatorInstance.Data =
               *(FScriptContainerElement **)&TStack_28.Object[1].ExpandedOutputs;
          (this->SavedSkinWeightData).Weights.ArrayNum = uVar6;
          (this->SavedSkinWeightData).Weights.ArrayMax = uVar7;
          uVar6 = *(undefined4 *)&TStack_28.Object[1].ExpandedOutputs.field_0x14;
          (this->SavedSkinWeightData).ArrayNum =
               *(undefined4 *)&TStack_28.Object[1].ExpandedOutputs.field_0x10;
          *(undefined4 *)&(this->SavedSkinWeightData).field_0x24 = uVar6;
          *(FScriptContainerElement **)&TStack_28.Object[1].InputArrayProperties.field_0x40 = pFVar4
          ;
          *(int *)&TStack_28.Object[1].InputArrayProperties.field_0x48 = iVar1;
          *(int *)&TStack_28.Object[1].InputArrayProperties.field_0x4c = iVar8;
          *(FScriptContainerElement **)&TStack_28.Object[1].ExpandedOutputs = pFVar5;
          *(int *)&TStack_28.Object[1].ExpandedOutputs.field_0x8 = iVar9;
          *(int *)&TStack_28.Object[1].ExpandedOutputs.field_0xc = iVar10;
          *(int *)&TStack_28.Object[1].ExpandedOutputs.field_0x10 = iVar11;
          *(undefined4 *)&TStack_28.Object[1].ExpandedOutputs.field_0x14 = uVar12;
          FStackX_18.Value = UE::Dataflow::FTimestamp::Current();
          FDataflowNode::Invalidate(TStack_28.Object,&FStackX_18);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_28.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// Apply @ 14dacf830

void __thiscall
FDataflowVertexAttributeEditableNode::FEditNodeToolChange::Apply
          (FEditNodeToolChange *this,UObject *param_1)

{
  int iVar1;
  FGraph *this_00;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  UClass *pUVar6;
  FName FStackX_10;
  FTimestamp FStackX_18;
  TSharedPtr<FDataflowNode,1> TStack_28;
  FGuid FStack_18;
  
  if (param_1 != (UObject *)0x0) {
    pUVar6 = Z_Construct_UClass_UDataflow_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) {
      this_00 = *(FGraph **)(param_1 + 4);
      pTVar2 = *(TReferenceControllerBase<1> **)&param_1[4].field_0x8;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((this_00 == (FGraph *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FStack_18.A = (this->NodeGuid).A;
      FStack_18.B = (this->NodeGuid).B;
      FStack_18.C = (this->NodeGuid).C;
      FStack_18.D = (this->NodeGuid).D;
      UE::Dataflow::FGraph::FindBaseNode(this_00,&TStack_28,&FStack_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      if (TStack_28.Object != (FDataflowNode *)0x0) {
        ::FName::FName(&FStackX_10,"FDataflowNode");
        cVar5 = (**(code **)((TStack_28.Object)->_padding_ + 0x128))(TStack_28.Object,FStackX_10);
        if ((cVar5 != '\0') && (TStack_28.Object != (FDataflowNode *)0x0)) {
          (**(code **)((TStack_28.Object)->_padding_ + 0x178))
                    (TStack_28.Object,&this->SavedAttributeValues);
          FStackX_18.Value = UE::Dataflow::FTimestamp::Current();
          FDataflowNode::Invalidate(TStack_28.Object,&FStackX_18);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_28.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// Revert @ 14dad89b0

void __thiscall
FDataflowCollectionEditSkinWeightsNode::FEditNodeToolChange::Revert
          (FEditNodeToolChange *this,UObject *param_1)

{
  int iVar1;
  FGraph *this_00;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  bool bVar13;
  char cVar14;
  UClass *pUVar15;
  FName FStackX_10;
  FTimestamp FStackX_18;
  TSharedPtr<FDataflowNode,1> TStack_28;
  FGuid FStack_18;
  
  if (param_1 != (UObject *)0x0) {
    pUVar15 = Z_Construct_UClass_UDataflow_NoRegister();
    iVar1 = (int)pUVar15->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar15->_padding_)) {
      this_00 = *(FGraph **)(param_1 + 4);
      pTVar2 = *(TReferenceControllerBase<1> **)&param_1[4].field_0x8;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((this_00 == (FGraph *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FStack_18.A = (this->NodeGuid).A;
      FStack_18.B = (this->NodeGuid).B;
      FStack_18.C = (this->NodeGuid).C;
      FStack_18.D = (this->NodeGuid).D;
      UE::Dataflow::FGraph::FindBaseNode(this_00,&TStack_28,&FStack_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      if (TStack_28.Object != (FDataflowNode *)0x0) {
        ::FName::FName(&FStackX_10,"FDataflowCollectionEditSkinWeightsNode");
        cVar14 = (**(code **)((TStack_28.Object)->_padding_ + 0x128))(TStack_28.Object,FStackX_10);
        if ((cVar14 != '\0') && (TStack_28.Object != (FDataflowNode *)0x0)) {
          uVar6 = *(undefined4 *)&TStack_28.Object[1].InputArrayProperties.field_0x48;
          uVar7 = *(undefined4 *)&TStack_28.Object[1].InputArrayProperties.field_0x4c;
          pFVar4 = (this->SavedSkinWeightData).Bones.AllocatorInstance.Data;
          iVar1 = (this->SavedSkinWeightData).Bones.ArrayNum;
          iVar8 = (this->SavedSkinWeightData).Bones.ArrayMax;
          pFVar5 = (this->SavedSkinWeightData).Weights.AllocatorInstance.Data;
          iVar9 = (this->SavedSkinWeightData).Weights.ArrayNum;
          iVar10 = (this->SavedSkinWeightData).Weights.ArrayMax;
          iVar11 = (this->SavedSkinWeightData).ArrayNum;
          uVar12 = *(undefined4 *)&(this->SavedSkinWeightData).field_0x24;
          (this->SavedSkinWeightData).Bones.AllocatorInstance.Data =
               *(FScriptContainerElement **)&TStack_28.Object[1].InputArrayProperties.field_0x40;
          (this->SavedSkinWeightData).Bones.ArrayNum = uVar6;
          (this->SavedSkinWeightData).Bones.ArrayMax = uVar7;
          uVar6 = *(undefined4 *)&TStack_28.Object[1].ExpandedOutputs.field_0x8;
          uVar7 = *(undefined4 *)&TStack_28.Object[1].ExpandedOutputs.field_0xc;
          (this->SavedSkinWeightData).Weights.AllocatorInstance.Data =
               *(FScriptContainerElement **)&TStack_28.Object[1].ExpandedOutputs;
          (this->SavedSkinWeightData).Weights.ArrayNum = uVar6;
          (this->SavedSkinWeightData).Weights.ArrayMax = uVar7;
          uVar6 = *(undefined4 *)&TStack_28.Object[1].ExpandedOutputs.field_0x14;
          (this->SavedSkinWeightData).ArrayNum =
               *(undefined4 *)&TStack_28.Object[1].ExpandedOutputs.field_0x10;
          *(undefined4 *)&(this->SavedSkinWeightData).field_0x24 = uVar6;
          *(FScriptContainerElement **)&TStack_28.Object[1].InputArrayProperties.field_0x40 = pFVar4
          ;
          *(int *)&TStack_28.Object[1].InputArrayProperties.field_0x48 = iVar1;
          *(int *)&TStack_28.Object[1].InputArrayProperties.field_0x4c = iVar8;
          *(FScriptContainerElement **)&TStack_28.Object[1].ExpandedOutputs = pFVar5;
          *(int *)&TStack_28.Object[1].ExpandedOutputs.field_0x8 = iVar9;
          *(int *)&TStack_28.Object[1].ExpandedOutputs.field_0xc = iVar10;
          *(int *)&TStack_28.Object[1].ExpandedOutputs.field_0x10 = iVar11;
          *(undefined4 *)&TStack_28.Object[1].ExpandedOutputs.field_0x14 = uVar12;
          FStackX_18.Value = UE::Dataflow::FTimestamp::Current();
          FDataflowNode::Invalidate(TStack_28.Object,&FStackX_18);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_28.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// Revert @ 14dad89c0

void __thiscall
FDataflowVertexAttributeEditableNode::FEditNodeToolChange::Revert
          (FEditNodeToolChange *this,UObject *param_1)

{
  int iVar1;
  FGraph *this_00;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  UClass *pUVar6;
  FName FStackX_10;
  FTimestamp FStackX_18;
  TSharedPtr<FDataflowNode,1> TStack_28;
  FGuid FStack_18;
  
  if (param_1 != (UObject *)0x0) {
    pUVar6 = Z_Construct_UClass_UDataflow_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) {
      this_00 = *(FGraph **)(param_1 + 4);
      pTVar2 = *(TReferenceControllerBase<1> **)&param_1[4].field_0x8;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((this_00 == (FGraph *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FStack_18.A = (this->NodeGuid).A;
      FStack_18.B = (this->NodeGuid).B;
      FStack_18.C = (this->NodeGuid).C;
      FStack_18.D = (this->NodeGuid).D;
      UE::Dataflow::FGraph::FindBaseNode(this_00,&TStack_28,&FStack_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      if (TStack_28.Object != (FDataflowNode *)0x0) {
        ::FName::FName(&FStackX_10,"FDataflowNode");
        cVar5 = (**(code **)((TStack_28.Object)->_padding_ + 0x128))(TStack_28.Object,FStackX_10);
        if ((cVar5 != '\0') && (TStack_28.Object != (FDataflowNode *)0x0)) {
          (**(code **)((TStack_28.Object)->_padding_ + 0x178))
                    (TStack_28.Object,&this->SavedAttributeValues);
          FStackX_18.Value = UE::Dataflow::FTimestamp::Current();
          FDataflowNode::Invalidate(TStack_28.Object,&FStackX_18);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_28.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// SwapApplyRevert @ 14dad8c50

void __thiscall
FDataflowCollectionEditSkinWeightsNode::FEditNodeToolChange::SwapApplyRevert
          (FEditNodeToolChange *this,UObject *param_1)

{
  int iVar1;
  FGraph *this_00;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  bool bVar13;
  char cVar14;
  UClass *pUVar15;
  FName local_res10;
  FTimestamp local_res18;
  TSharedPtr<FDataflowNode,1> local_28;
  FGuid local_18;
  
  if (param_1 != (UObject *)0x0) {
    pUVar15 = Z_Construct_UClass_UDataflow_NoRegister();
    iVar1 = (int)pUVar15->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar15->_padding_)) {
      this_00 = *(FGraph **)(param_1 + 4);
      pTVar2 = *(TReferenceControllerBase<1> **)&param_1[4].field_0x8;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((this_00 == (FGraph *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_18.A = (this->NodeGuid).A;
      local_18.B = (this->NodeGuid).B;
      local_18.C = (this->NodeGuid).C;
      local_18.D = (this->NodeGuid).D;
      UE::Dataflow::FGraph::FindBaseNode(this_00,&local_28,&local_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      if (local_28.Object != (FDataflowNode *)0x0) {
        ::FName::FName(&local_res10,"FDataflowCollectionEditSkinWeightsNode");
        cVar14 = (**(code **)((local_28.Object)->_padding_ + 0x128))(local_28.Object,local_res10);
        if ((cVar14 != '\0') && (local_28.Object != (FDataflowNode *)0x0)) {
          uVar6 = *(undefined4 *)&local_28.Object[1].InputArrayProperties.field_0x48;
          uVar7 = *(undefined4 *)&local_28.Object[1].InputArrayProperties.field_0x4c;
          pFVar4 = (this->SavedSkinWeightData).Bones.AllocatorInstance.Data;
          iVar1 = (this->SavedSkinWeightData).Bones.ArrayNum;
          iVar8 = (this->SavedSkinWeightData).Bones.ArrayMax;
          pFVar5 = (this->SavedSkinWeightData).Weights.AllocatorInstance.Data;
          iVar9 = (this->SavedSkinWeightData).Weights.ArrayNum;
          iVar10 = (this->SavedSkinWeightData).Weights.ArrayMax;
          iVar11 = (this->SavedSkinWeightData).ArrayNum;
          uVar12 = *(undefined4 *)&(this->SavedSkinWeightData).field_0x24;
          (this->SavedSkinWeightData).Bones.AllocatorInstance.Data =
               *(FScriptContainerElement **)&local_28.Object[1].InputArrayProperties.field_0x40;
          (this->SavedSkinWeightData).Bones.ArrayNum = uVar6;
          (this->SavedSkinWeightData).Bones.ArrayMax = uVar7;
          uVar6 = *(undefined4 *)&local_28.Object[1].ExpandedOutputs.field_0x8;
          uVar7 = *(undefined4 *)&local_28.Object[1].ExpandedOutputs.field_0xc;
          (this->SavedSkinWeightData).Weights.AllocatorInstance.Data =
               *(FScriptContainerElement **)&local_28.Object[1].ExpandedOutputs;
          (this->SavedSkinWeightData).Weights.ArrayNum = uVar6;
          (this->SavedSkinWeightData).Weights.ArrayMax = uVar7;
          uVar6 = *(undefined4 *)&local_28.Object[1].ExpandedOutputs.field_0x14;
          (this->SavedSkinWeightData).ArrayNum =
               *(undefined4 *)&local_28.Object[1].ExpandedOutputs.field_0x10;
          *(undefined4 *)&(this->SavedSkinWeightData).field_0x24 = uVar6;
          *(FScriptContainerElement **)&local_28.Object[1].InputArrayProperties.field_0x40 = pFVar4;
          *(int *)&local_28.Object[1].InputArrayProperties.field_0x48 = iVar1;
          *(int *)&local_28.Object[1].InputArrayProperties.field_0x4c = iVar8;
          *(FScriptContainerElement **)&local_28.Object[1].ExpandedOutputs = pFVar5;
          *(int *)&local_28.Object[1].ExpandedOutputs.field_0x8 = iVar9;
          *(int *)&local_28.Object[1].ExpandedOutputs.field_0xc = iVar10;
          *(int *)&local_28.Object[1].ExpandedOutputs.field_0x10 = iVar11;
          *(undefined4 *)&local_28.Object[1].ExpandedOutputs.field_0x14 = uVar12;
          local_res18.Value = UE::Dataflow::FTimestamp::Current();
          FDataflowNode::Invalidate(local_28.Object,&local_res18);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// SwapApplyRevert @ 14dad8dc0

void __thiscall
FDataflowVertexAttributeEditableNode::FEditNodeToolChange::SwapApplyRevert
          (FEditNodeToolChange *this,UObject *param_1)

{
  int iVar1;
  FGraph *this_00;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  UClass *pUVar6;
  FName local_res10;
  FTimestamp local_res18;
  TSharedPtr<FDataflowNode,1> local_28;
  FGuid local_18;
  
  if (param_1 != (UObject *)0x0) {
    pUVar6 = Z_Construct_UClass_UDataflow_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) {
      this_00 = *(FGraph **)(param_1 + 4);
      pTVar2 = *(TReferenceControllerBase<1> **)&param_1[4].field_0x8;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((this_00 == (FGraph *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_18.A = (this->NodeGuid).A;
      local_18.B = (this->NodeGuid).B;
      local_18.C = (this->NodeGuid).C;
      local_18.D = (this->NodeGuid).D;
      UE::Dataflow::FGraph::FindBaseNode(this_00,&local_28,&local_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      if (local_28.Object != (FDataflowNode *)0x0) {
        ::FName::FName(&local_res10,"FDataflowNode");
        cVar5 = (**(code **)((local_28.Object)->_padding_ + 0x128))(local_28.Object,local_res10);
        if ((cVar5 != '\0') && (local_28.Object != (FDataflowNode *)0x0)) {
          (**(code **)((local_28.Object)->_padding_ + 0x178))
                    (local_28.Object,&this->SavedAttributeValues);
          local_res18.Value = UE::Dataflow::FTimestamp::Current();
          FDataflowNode::Invalidate(local_28.Object,&local_res18);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// ToString @ 14dad9290

FString * __thiscall
FDataflowCollectionEditSkinWeightsNode::FEditNodeToolChange::ToString
          (FEditNodeToolChange *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     L"FDataflowCollectionEditSkinWeightsNode::FEditNodeToolChange");
  return __return_storage_ptr__;
}

// ToString @ 14dad92c0

FString * __thiscall
FDataflowVertexAttributeEditableNode::FEditNodeToolChange::ToString
          (FEditNodeToolChange *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     L"FDataflowVertexAttributeEditableNode::FEditNodeToolChange");
  return __return_storage_ptr__;
}

