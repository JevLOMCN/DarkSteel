// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 2

// CreateOperator @ 14afc46d0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TInputNode<Metasound::FStereoAudioFormat,0>::FInputOperatorFactory::CreateOperator
          (FInputOperatorFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  TReferenceControllerBase<0> *pTVar1;
  longlong lVar2;
  TReferenceControllerBase<0> *pTVar3;
  undefined8 uVar4;
  longlong lVar5;
  TReferenceControllerBase<0> *pTVar6;
  FInputOperator *this_00;
  FInputOperator *pFVar7;
  undefined **local_88;
  longlong local_80;
  TReferenceControllerBase<0> *local_78;
  undefined **local_68 [2];
  TReferenceControllerBase<0> *local_58;
  undefined **local_48;
  longlong local_40;
  TReferenceControllerBase<0> *local_38;
  
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FStereoAudioFormat>
            (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,
             (TDataReadReference<Metasound::FStereoAudioFormat> *)&local_48,&this->InputName,
             *(FOperatorSettings **)&(param_2->Errors).ArrayNum);
  lVar5 = local_40;
  pTVar1 = *(TReferenceControllerBase<0> **)(*(longlong *)(local_40 + 0x10) + 0x10);
  lVar2 = *(longlong *)(*(longlong *)(local_40 + 0x10) + 8);
  if (pTVar1 != (TReferenceControllerBase<0> *)0x0) {
    pTVar1->SharedReferenceCount = pTVar1->SharedReferenceCount + 1;
  }
  pTVar3 = *(TReferenceControllerBase<0> **)(*(longlong *)(local_40 + 0x10) + 0x30);
  uVar4 = *(undefined8 *)(*(longlong *)(local_40 + 0x10) + 0x28);
  if (pTVar3 != (TReferenceControllerBase<0> *)0x0) {
    pTVar3->SharedReferenceCount = pTVar3->SharedReferenceCount + 1;
  }
  this_00 = ::operator_new(0x70);
  pTVar6 = local_38;
  pFVar7 = (FInputOperator *)0x0;
  if (this_00 != (FInputOperator *)0x0) {
    local_80 = lVar5;
    local_78 = local_38;
    if (local_38 != (TReferenceControllerBase<0> *)0x0) {
      local_38->SharedReferenceCount = local_38->SharedReferenceCount + 1;
    }
    local_88 = &___7__TDataReadReference_VFStereoAudioFormat_Metasound___Metasound__6B_;
    if (pTVar3 != (TReferenceControllerBase<0> *)0x0) {
      pTVar3->SharedReferenceCount = pTVar3->SharedReferenceCount + 1;
    }
    local_68[0] = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
    if (pTVar1 != (TReferenceControllerBase<0> *)0x0) {
      pTVar1->SharedReferenceCount = pTVar1->SharedReferenceCount + 1;
    }
    local_48 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
    local_68[1] = (undefined **)uVar4;
    local_58 = pTVar3;
    local_40 = lVar2;
    local_38 = pTVar1;
    pFVar7 = FInputOperator::FInputOperator
                       (this_00,&this->InputName,
                        (TDataReadReference<Metasound::FAudioBuffer> *)&local_48,
                        (TDataReadReference<Metasound::FAudioBuffer> *)local_68,
                        (TDataReadReference<Metasound::FStereoAudioFormat> *)&local_88);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar6);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14afca930

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TInputNode<Metasound::FMonoAudioFormat,0>::FInputOperatorFactory::CreateOperator
          (FInputOperatorFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  TReferenceControllerBase<0> *pTVar1;
  longlong lVar2;
  longlong lVar3;
  TReferenceControllerBase<0> *pTVar4;
  FInputOperator *this_00;
  FInputOperator *pFVar5;
  undefined **local_58;
  longlong local_50;
  TReferenceControllerBase<0> *local_48;
  undefined **local_38;
  longlong local_30;
  TReferenceControllerBase<0> *local_28;
  
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FMonoAudioFormat>
            (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,
             (TDataReadReference<Metasound::FMonoAudioFormat> *)&local_38,&this->InputName,
             *(FOperatorSettings **)&(param_2->Errors).ArrayNum);
  lVar3 = local_30;
  pTVar1 = *(TReferenceControllerBase<0> **)(*(longlong *)(local_30 + 0x10) + 0x10);
  lVar2 = *(longlong *)(*(longlong *)(local_30 + 0x10) + 8);
  if (pTVar1 != (TReferenceControllerBase<0> *)0x0) {
    pTVar1->SharedReferenceCount = pTVar1->SharedReferenceCount + 1;
  }
  this_00 = ::operator_new(0x50);
  pTVar4 = local_28;
  pFVar5 = (FInputOperator *)0x0;
  if (this_00 != (FInputOperator *)0x0) {
    local_50 = lVar3;
    local_48 = local_28;
    if (local_28 != (TReferenceControllerBase<0> *)0x0) {
      local_28->SharedReferenceCount = local_28->SharedReferenceCount + 1;
    }
    local_58 = &___7__TDataReadReference_VFMonoAudioFormat_Metasound___Metasound__6B_;
    if (pTVar1 != (TReferenceControllerBase<0> *)0x0) {
      pTVar1->SharedReferenceCount = pTVar1->SharedReferenceCount + 1;
    }
    local_38 = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
    local_30 = lVar2;
    local_28 = pTVar1;
    pFVar5 = FInputOperator::FInputOperator
                       (this_00,&this->InputName,
                        (TDataReadReference<Metasound::FAudioBuffer> *)&local_38,
                        (TDataReadReference<Metasound::FMonoAudioFormat> *)&local_58);
  }
  param_1->Node = (INode *)pFVar5;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

