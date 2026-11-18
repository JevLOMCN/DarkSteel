// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 2

// CreateOperator @ 14afc7850

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TOutputNode<Metasound::FMonoAudioFormat,0>::FOutputOperatorFactory::CreateOperator
          (FOutputOperatorFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<0> *pTVar3;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar4;
  FOutputOperator *this_00;
  FOutputOperator *pFVar5;
  TReferenceControllerBase<0> *pTVar6;
  undefined **local_a8 [2];
  TReferenceControllerBase<0> *local_98;
  undefined1 local_88 [32];
  undefined **local_68;
  TReferenceControllerBase<0> *local_60;
  TReferenceControllerBase<0> *local_58;
  undefined **local_48 [2];
  TReferenceControllerBase<0> *local_38;
  
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>
            (*(FInputVertexInterfaceData **)&param_2->InternalDataReferences,
             (TDataReadReference<Metasound::FAudioBuffer> *)local_88,&this->OutputName,
             *(FOperatorSettings **)&(param_2->Errors).ArrayNum);
  if ((TReferenceControllerBase<0> *)local_88._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_88._16_8_ + 8) = *(int *)(local_88._16_8_ + 8) + 1;
  }
  pTVar3 = ::operator_new(0x50);
  pFVar5 = (FOutputOperator *)0x0;
  if (pTVar3 == (TReferenceControllerBase<0> *)0x0) {
    pTVar3 = (TReferenceControllerBase<0> *)0x0;
    pTVar6 = (TReferenceControllerBase<0> *)&DAT_00000010;
  }
  else {
    pTVar3->SharedReferenceCount = 1;
    pTVar3->WeakReferenceCount = 1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFMonoAudioFormat_Metasound___0A__SharedPointerInternals__6B_
    ;
    local_a8[1] = (undefined **)local_88._8_8_;
    local_98 = (TReferenceControllerBase<0> *)local_88._16_8_;
    if ((TReferenceControllerBase<0> *)local_88._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_88._16_8_ + 8) = *(int *)(local_88._16_8_ + 8) + 1;
    }
    local_a8[0] = &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    TStaticChannelAudioFormat<1>::TStaticChannelAudioFormat<1>
              ((TStaticChannelAudioFormat<1> *)(pTVar3 + 1),
               (TDataWriteReference<Metasound::FAudioBuffer> (*) [1])local_a8);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_98);
    pTVar6 = pTVar3 + 1;
    if (pTVar6 == (TReferenceControllerBase<0> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar4.Ptr = (IOperator *)(*pcVar1)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar4.Ptr;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_88._16_8_);
  this_00 = ::operator_new(0x50);
  if (this_00 != (FOutputOperator *)0x0) {
    if (pTVar3 != (TReferenceControllerBase<0> *)0x0) {
      pTVar3->SharedReferenceCount = pTVar3->SharedReferenceCount + 1;
    }
    local_38 = (TReferenceControllerBase<0> *)local_88._16_8_;
    local_68 = &___7__TDataReadReference_VFMonoAudioFormat_Metasound___Metasound__6B_;
    local_48[1] = (undefined **)local_88._8_8_;
    if ((TReferenceControllerBase<0> *)local_88._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_88._16_8_ + 8) = *(int *)(local_88._16_8_ + 8) + 1;
    }
    local_48[0] = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
    local_60 = pTVar6;
    local_58 = pTVar3;
    pFVar5 = FOutputOperator::FOutputOperator
                       (this_00,&this->OutputName,
                        (TDataReadReference<Metasound::FAudioBuffer> *)local_48,
                        (TDataReadReference<Metasound::FMonoAudioFormat> *)&local_68);
  }
  param_1->Node = (INode *)pFVar5;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_88._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14afdc960

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::TOutputNode<Metasound::FStereoAudioFormat,0>::FOutputOperatorFactory::CreateOperator
          (FOutputOperatorFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  TReferenceControllerBase<0> *pTVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  FOutputOperator *this_00;
  FOutputOperator *pFVar7;
  TReferenceControllerBase<0> *pTVar8;
  FName local_res18;
  FName local_128;
  TReferenceControllerBase<0> *local_120;
  undefined1 local_118 [32];
  undefined1 local_f8 [32];
  undefined **local_d8 [2];
  TReferenceControllerBase<0> *local_c8;
  undefined **local_b8;
  undefined8 local_b0;
  TReferenceControllerBase<0> *local_a8;
  undefined **local_98;
  TReferenceControllerBase<0> *local_90;
  TReferenceControllerBase<0> *local_88;
  undefined **local_78 [2];
  TReferenceControllerBase<0> *local_68;
  undefined **local_58 [2];
  TReferenceControllerBase<0> *local_48;
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&StereoAudioFormatVertexKeys::LeftChannelVertexName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>
            (pFVar1,(TDataReadReference<Metasound::FAudioBuffer> *)local_f8,&local_res18,pFVar2);
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&StereoAudioFormatVertexKeys::RightChannelVertexName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>
            (pFVar1,(TDataReadReference<Metasound::FAudioBuffer> *)local_118,&local_128,pFVar2);
  local_120 = (TReferenceControllerBase<0> *)local_118._16_8_;
  if ((TReferenceControllerBase<0> *)local_118._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_118._16_8_ + 8) = *(int *)(local_118._16_8_ + 8) + 1;
  }
  if ((TReferenceControllerBase<0> *)local_f8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
    *(int *)(local_f8._16_8_ + 8) = *(int *)(local_f8._16_8_ + 8) + 1;
  }
  pTVar5 = ::operator_new(0x50);
  pFVar7 = (FOutputOperator *)0x0;
  if (pTVar5 == (TReferenceControllerBase<0> *)0x0) {
    pTVar5 = (TReferenceControllerBase<0> *)0x0;
    pTVar8 = (TReferenceControllerBase<0> *)&DAT_00000010;
  }
  else {
    pTVar5->SharedReferenceCount = 1;
    pTVar5->WeakReferenceCount = 1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFStereoAudioFormat_Metasound___0A__SharedPointerInternals__6B_
    ;
    local_d8[1] = (undefined **)local_f8._8_8_;
    local_c8 = (TReferenceControllerBase<0> *)local_f8._16_8_;
    if ((TReferenceControllerBase<0> *)local_f8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_f8._16_8_ + 8) = *(int *)(local_f8._16_8_ + 8) + 1;
    }
    local_d8[0] = &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    local_b0 = local_118._8_8_;
    local_a8 = (TReferenceControllerBase<0> *)local_118._16_8_;
    if ((TReferenceControllerBase<0> *)local_118._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_118._16_8_ + 8) = *(int *)(local_118._16_8_ + 8) + 1;
    }
    local_b8 = &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    TStaticChannelAudioFormat<2>::TStaticChannelAudioFormat<2>
              ((TStaticChannelAudioFormat<2> *)(pTVar5 + 1),
               (TDataWriteReference<Metasound::FAudioBuffer> (*) [2])local_d8);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_a8);
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_c8);
    pTVar8 = pTVar5 + 1;
    if (pTVar8 == (TReferenceControllerBase<0> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_f8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(local_120);
  this_00 = ::operator_new(0x70);
  if (this_00 != (FOutputOperator *)0x0) {
    if (pTVar5 != (TReferenceControllerBase<0> *)0x0) {
      pTVar5->SharedReferenceCount = pTVar5->SharedReferenceCount + 1;
    }
    local_68 = (TReferenceControllerBase<0> *)local_118._16_8_;
    local_98 = &___7__TDataReadReference_VFStereoAudioFormat_Metasound___Metasound__6B_;
    local_78[1] = (undefined **)local_118._8_8_;
    if ((TReferenceControllerBase<0> *)local_118._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_118._16_8_ + 8) = *(int *)(local_118._16_8_ + 8) + 1;
    }
    local_78[0] = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
    local_58[1] = (undefined **)local_f8._8_8_;
    local_48 = (TReferenceControllerBase<0> *)local_f8._16_8_;
    if ((TReferenceControllerBase<0> *)local_f8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_f8._16_8_ + 8) = *(int *)(local_f8._16_8_ + 8) + 1;
    }
    local_58[0] = &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
    local_90 = pTVar8;
    local_88 = pTVar5;
    pFVar7 = FOutputOperator::FOutputOperator
                       (this_00,&this->OutputName,
                        (TDataReadReference<Metasound::FAudioBuffer> *)local_58,
                        (TDataReadReference<Metasound::FAudioBuffer> *)local_78,
                        (TDataReadReference<Metasound::FStereoAudioFormat> *)&local_98);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_118._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_f8._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

