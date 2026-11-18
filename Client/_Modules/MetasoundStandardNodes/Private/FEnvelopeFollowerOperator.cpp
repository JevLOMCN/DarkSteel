// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 8

// FEnvelopeFollowerOperator @ 14b0532c0

FEnvelopeFollowerOperator * __thiscall
Metasound::FEnvelopeFollowerOperator::FEnvelopeFollowerOperator
          (FEnvelopeFollowerOperator *this,FBuildOperatorParams *param_1,
          TDataReadReference<bool> *param_2,TDataReadReference<Metasound::FAudioBuffer> *param_3,
          TDataReadReference<Metasound::FTime> *param_4,
          TDataReadReference<Metasound::FTime> *param_5,
          TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *param_6)

{
  longlong lVar1;
  FResetParams local_28;
  
  this->_padding_ = (longlong)&___7FEnvelopeFollowerOperator_Metasound__6B_;
  *(undefined ***)&this->EnableInput = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&(this->EnableInput).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->EnableInput).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->EnableInput = &___7__TDataReadReference__N_Metasound__6B_;
  this->OutputNeedsResetOnDisable = true;
  *(undefined ***)&this->AudioInput = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_
  ;
  *(undefined8 *)&(this->AudioInput).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar1 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->AudioInput).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->AudioInput =
       &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined ***)&this->AttackTimeInput = &___7__TDataReference_VFTime_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->AttackTimeInput).field_0x8 = *(undefined8 *)&param_4->field_0x8;
  lVar1 = *(longlong *)&param_4->field_0x10;
  *(longlong *)&(this->AttackTimeInput).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->AttackTimeInput =
       &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
  *(undefined ***)&this->ReleaseTimeInput = &___7__TDataReference_VFTime_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->ReleaseTimeInput).field_0x8 = *(undefined8 *)&param_5->field_0x8;
  lVar1 = *(longlong *)&param_5->field_0x10;
  *(longlong *)&(this->ReleaseTimeInput).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->ReleaseTimeInput =
       &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
  *(undefined ***)&this->FollowModeInput =
       &___7__TDataReference_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)&(this->FollowModeInput).field_0x8 = *(undefined8 *)&param_6->field_0x8;
  lVar1 = *(longlong *)&param_6->field_0x10;
  *(longlong *)&(this->FollowModeInput).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->FollowModeInput =
       &
       ___7__TDataReadReference_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  TDataReference<float>::TDataReference<float><>
            ((TDataReference<float> *)&this->EnvelopeFloatOutput,NewObject);
  *(undefined ***)&this->EnvelopeFloatOutput = &___7__TDataWriteReference_M_Metasound__6B_;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)&this->EnvelopeAudioOutput,NewObject,
             param_1->OperatorSettings);
  *(undefined ***)&this->EnvelopeAudioOutput =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  Audio::FEnvelopeFollower::FEnvelopeFollower(&this->EnvelopeFollower);
  this->PrevAttackTime = 0.0;
  this->PrevReleaseTime = 0.0;
  this->PrevFollowMode = Peak;
  local_28.OperatorSettings = param_1->OperatorSettings;
  local_28.Environment = param_1->Environment;
  local_28.GraphRenderCost = param_1->GraphRenderCost;
  Reset(this,&local_28);
  return this;
}

// BindInputs @ 14b05d7e0

void __thiscall
Metasound::FEnvelopeFollowerOperator::BindInputs
          (FEnvelopeFollowerOperator *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<bool> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<bool> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&EnvelopeFollowerVertexNames::InParamEnableName);
  local_res18 = &this->EnableInput;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_28._8_8_ = local_48;
  local_48._0_8_ = &local_res8;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_48._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_28,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&EnvelopeFollowerVertexNames::InParamAudioInputName);
  local_res18 = (TDataReadReference<bool> *)&this->AudioInput;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
  local_28._0_8_ = &local_res8;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&EnvelopeFollowerVertexNames::InParamAttackTimeName);
  local_res18 = (TDataReadReference<bool> *)&this->AttackTimeInput;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTime>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&EnvelopeFollowerVertexNames::InParamReleaseTimeName);
  local_res18 = (TDataReadReference<bool> *)&this->ReleaseTimeInput;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTime>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&EnvelopeFollowerVertexNames::InParamFollowModeName);
  local_res18 = (TDataReadReference<bool> *)&this->FollowModeInput;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
  local_28._0_8_ = &local_res8;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  return;
}

// BindOutputs @ 14b05dc90

void __thiscall
Metasound::FEnvelopeFollowerOperator::BindOutputs
          (FEnvelopeFollowerOperator *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<float> *local_res18;
  undefined1 local_38 [16];
  code *local_28;
  TDataWriteReference<float> **local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&EnvelopeFollowerVertexNames::OutParamEnvelopeName);
  local_res18 = &this->EnvelopeFloatOutput;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<float>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  FLazyName::Resolve(&EnvelopeFollowerVertexNames::OutputAudioEnvelopeName);
  local_res18 = (TDataWriteReference<float> *)&this->EnvelopeAudioOutput;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// CreateOperator @ 14b067620

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::FEnvelopeFollowerOperator::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  FGraphRenderCost *pFVar2;
  FEnvelopeFollowerOperator *this_00;
  FName local_res20;
  undefined1 local_d8 [16];
  FGraphRenderCost *local_c8;
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&EnvelopeFollowerVertexNames::InParamEnableName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_d8,&local_res20,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&EnvelopeFollowerVertexNames::InParamAudioInputName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>
            (this,(TDataReadReference<Metasound::FAudioBuffer> *)local_b8,&local_res20,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&EnvelopeFollowerVertexNames::InParamAttackTimeName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTime>
            (this,(TDataReadReference<Metasound::FTime> *)local_98,&local_res20,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&EnvelopeFollowerVertexNames::InParamReleaseTimeName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTime>
            (this,(TDataReadReference<Metasound::FTime> *)local_78,&local_res20,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&EnvelopeFollowerVertexNames::InParamFollowModeName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>
            (this,(TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)local_58,
             &local_res20,pFVar1);
  this_00 = ::operator_new(0x170);
  pFVar2 = local_c8;
  if (this_00 != (FEnvelopeFollowerOperator *)0x0) {
    this_00->_padding_ = (longlong)&___7FEnvelopeFollowerOperator_Metasound__6B_;
    *(undefined ***)&this_00->EnableInput = &___7__TDataReference__N_Metasound__6B_;
    *(undefined8 *)&(this_00->EnableInput).field_0x8 = local_d8._8_8_;
    *(FGraphRenderCost **)&(this_00->EnableInput).field_0x10 = local_c8;
    if (local_c8 != (FGraphRenderCost *)0x0) {
      *(int *)&local_c8->_padding_ = (int)local_c8->_padding_ + 1;
    }
    *(undefined ***)&this_00->EnableInput = &___7__TDataReadReference__N_Metasound__6B_;
    this_00->OutputNeedsResetOnDisable = true;
    *(undefined ***)&this_00->AudioInput =
         &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    *(undefined8 *)&(this_00->AudioInput).field_0x8 = local_b8._8_8_;
    *(undefined8 *)&(this_00->AudioInput).field_0x10 = local_b8._16_8_;
    if ((TReferenceControllerBase<0> *)local_b8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_b8._16_8_ + 8) = *(int *)(local_b8._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->AudioInput =
         &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
    *(undefined ***)&this_00->AttackTimeInput =
         &___7__TDataReference_VFTime_Metasound___Metasound__6B_;
    *(undefined8 *)&(this_00->AttackTimeInput).field_0x8 = local_98._8_8_;
    *(undefined8 *)&(this_00->AttackTimeInput).field_0x10 = local_98._16_8_;
    if ((TReferenceControllerBase<0> *)local_98._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_98._16_8_ + 8) = *(int *)(local_98._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->AttackTimeInput =
         &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
    *(undefined ***)&this_00->ReleaseTimeInput =
         &___7__TDataReference_VFTime_Metasound___Metasound__6B_;
    *(undefined8 *)&(this_00->ReleaseTimeInput).field_0x8 = local_78._8_8_;
    *(undefined8 *)&(this_00->ReleaseTimeInput).field_0x10 = local_78._16_8_;
    if ((TReferenceControllerBase<0> *)local_78._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_78._16_8_ + 8) = *(int *)(local_78._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->ReleaseTimeInput =
         &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
    *(undefined ***)&this_00->FollowModeInput =
         &
         ___7__TDataReference_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
    ;
    *(undefined8 *)&(this_00->FollowModeInput).field_0x8 = local_58._8_8_;
    *(undefined8 *)&(this_00->FollowModeInput).field_0x10 = local_58._16_8_;
    if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->FollowModeInput =
         &
         ___7__TDataReadReference_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
    ;
    TDataReference<float>::TDataReference<float><>
              ((TDataReference<float> *)&this_00->EnvelopeFloatOutput,NewObject);
    *(undefined ***)&this_00->EnvelopeFloatOutput = &___7__TDataWriteReference_M_Metasound__6B_;
    TDataReference<Metasound::FAudioBuffer>::
    TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FAudioBuffer> *)&this_00->EnvelopeAudioOutput,NewObject,
               *(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    *(undefined ***)&this_00->EnvelopeAudioOutput =
         &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    Audio::FEnvelopeFollower::FEnvelopeFollower(&this_00->EnvelopeFollower);
    this_00->PrevAttackTime = 0.0;
    this_00->PrevReleaseTime = 0.0;
    this_00->PrevFollowMode = Peak;
    local_d8._0_8_ = *(undefined8 *)&(param_2->Errors).ArrayNum;
    local_d8._8_8_ = *(undefined8 *)&(param_2->InternalDataReferences).field_0x8;
    local_c8 = *(FGraphRenderCost **)&(param_2->InternalDataReferences).field_0x18;
    Reset(this_00,(FResetParams *)local_d8);
  }
  param_1->Node = (INode *)this_00;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_58._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_78._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_98._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_b8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)pFVar2);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// Execute @ 14b06aa60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Metasound::FEnvelopeFollowerOperator::Execute(FEnvelopeFollowerOperator *this)

{
  FEnvelopeFollower *this_00;
  FScriptContainerElement *pFVar1;
  int iVar2;
  EEnvelopePeakMode EVar3;
  undefined8 *puVar4;
  double *pdVar5;
  float *pfVar6;
  longlong lVar7;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar8;
  Type TVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  double dVar12;
  double dVar13;
  uint uVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  
  uVar15 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar14 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  if (**(char **)&(this->EnableInput).field_0x8 == '\0') {
    if (this->OutputNeedsResetOnDisable != false) {
      puVar4 = *(undefined8 **)&(this->EnvelopeAudioOutput).field_0x8;
      iVar2 = *(int *)(puVar4 + 1);
      if (0 < iVar2) {
        memset((void *)*puVar4,0,(longlong)iVar2 << 2);
      }
      **(undefined4 **)&(this->EnvelopeFloatOutput).field_0x8 = 0;
      this->OutputNeedsResetOnDisable = false;
      return;
    }
  }
  else {
    pdVar5 = *(double **)&(this->AttackTimeInput).field_0x8;
    this_00 = &this->EnvelopeFollower;
    this->OutputNeedsResetOnDisable = true;
    dVar13 = *pdVar5 * __real_408f400000000000;
    if (dVar13 <= 0.0) {
      dVar13 = 0.0;
    }
    dVar12 = dVar13 - this->PrevAttackTime;
    if (__real_3e45798ee2308c3a <
        (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) & uVar15,SUB84(dVar12,0) & uVar14)) {
      this->PrevAttackTime = dVar13;
      Audio::FEnvelopeFollower::SetAttackTime(this_00,(float)dVar13);
      uVar14 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar15 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    }
    dVar13 = **(double **)&(this->ReleaseTimeInput).field_0x8 * __real_408f400000000000;
    if (dVar13 <= 0.0) {
      dVar13 = 0.0;
    }
    dVar12 = dVar13 - this->PrevReleaseTime;
    if (__real_3e45798ee2308c3a <
        (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) & uVar15,SUB84(dVar12,0) & uVar14)) {
      this->PrevReleaseTime = dVar13;
      Audio::FEnvelopeFollower::SetReleaseTime(this_00,(float)dVar13);
    }
    EVar3 = **(EEnvelopePeakMode **)&(this->FollowModeInput).field_0x8;
    if (this->PrevFollowMode != EVar3) {
      this->PrevFollowMode = EVar3;
      if (EVar3 == Peak) {
        TVar9 = Peak;
      }
      else if ((EVar3 == MeanSquared) || (EVar3 != RootMeanSquared)) {
        TVar9 = MeanSquared;
      }
      else {
        TVar9 = RootMeanSquared;
      }
      Audio::FEnvelopeFollower::SetMode(this_00,TVar9);
    }
    puVar4 = *(undefined8 **)&(this->EnvelopeAudioOutput).field_0x8;
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar4 + 2) != *(int *)(puVar4 + 1))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                  __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pfVar6 = (float *)*puVar4;
    lVar7 = *(longlong *)&(this->AudioInput).field_0x8;
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar7 + 0x10) != *(int *)(lVar7 + 8))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                  LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    iVar2 = *(int *)(lVar7 + 8);
    puVar4 = *(undefined8 **)&(this->AudioInput).field_0x8;
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar4 + 2) != *(int *)(puVar4 + 1))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    Audio::FEnvelopeFollower::ProcessAudio(this_00,(float *)*puVar4,iVar2,pfVar6);
    pFVar11 = (FScriptContainerElement *)0x0;
    pTVar8 = Audio::FEnvelopeFollower::GetEnvelopeValues(this_00);
    pFVar10 = (pTVar8->AllocatorInstance).Data;
    iVar2 = pTVar8->ArrayNum;
    pFVar1 = pFVar10 + (longlong)iVar2 * 4;
    while( true ) {
      if (pTVar8->ArrayNum != iVar2) {
        `TCheckedPointerIterator<float_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar10 == pFVar1) break;
      if ((pFVar11 == (FScriptContainerElement *)0x0) ||
         (*(float *)pFVar11 <= *(float *)pFVar10 && *(float *)pFVar10 != *(float *)pFVar11)) {
        pFVar11 = pFVar10;
      }
      pFVar10 = pFVar10 + 4;
    }
    pfVar6 = *(float **)&(this->EnvelopeFloatOutput).field_0x8;
    if (pFVar11 != (FScriptContainerElement *)0x0) {
      *pfVar6 = *(float *)pFVar11;
      return;
    }
    *pfVar6 = 0.0;
  }
  return;
}

// GetNodeInfo @ 14b075ef0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FEnvelopeFollowerOperator::GetNodeInfo(void)

{
  TRefCountPtr<ITextData> TVar1;
  FVertexInterface *pFVar2;
  FText *pFVar3;
  FName local_res8;
  FName local_res10;
  FNodeClassName local_28;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FNodeClassMetadata::FNodeClassMetadata(&::Info);
      ::FName::FName(&local_res10,L"Envelope Follower");
      ::FName::FName(&local_res8,L"");
      FNodeClassName::FNodeClassName(&local_28,&StandardNodes::Namespace,&local_res10,&local_res8);
      ::Info.ClassName.Name.Number = local_28.Name.Number;
      ::Info.ClassName.Name.ComparisonIndex.Value = local_28.Name.ComparisonIndex.Value;
      ::Info.MajorVersion = 1;
      ::Info.ClassName.Namespace = local_28.Namespace;
      ::Info.ClassName.Variant = local_28.Variant;
      ::Info.MinorVersion = 3;
      pFVar3 = FText::FText((FText *)&local_28);
      FText::operator=(&::Info.DisplayName,pFVar3);
      if (local_28.Namespace != (FName)0x0) {
        (**(code **)(*(longlong *)local_28.Namespace + 0x10))();
      }
      pFVar3 = FText::FText((FText *)&local_28);
      FText::operator=(&::Info.Description,pFVar3);
      if (local_28.Namespace != (FName)0x0) {
        (**(code **)(*(longlong *)local_28.Namespace + 0x10))();
      }
      ::FString::operator=(&::Info.Author,&PluginAuthor);
      local_28.Namespace = (FName)NodeCategories::Envelopes.TextData.Reference;
      if (NodeCategories::Envelopes.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*NodeCategories::Envelopes.TextData.Reference + 8))
                  (NodeCategories::Envelopes.TextData.Reference,&local_res8);
      }
      local_28.Name.ComparisonIndex.Value = NodeCategories::Envelopes.Flags;
      DestructItems<FText,int>
                ((FText *)::Info.CategoryHierarchy.AllocatorInstance.Data,
                 ::Info.CategoryHierarchy.ArrayNum);
      TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
                (&::Info.CategoryHierarchy,(FText *)&local_28,1,::Info.CategoryHierarchy.ArrayMax);
      if (local_28.Namespace != (FName)0x0) {
        (**(code **)((longlong)*(ITextData *)local_28.Namespace + 0x10))();
      }
      TVar1.Reference = ::Info.PromptIfMissing.TextData.Reference;
      if (::Info.PromptIfMissing.TextData.Reference != PluginNodeMissingPrompt.TextData.Reference) {
        ::Info.PromptIfMissing.TextData = PluginNodeMissingPrompt.TextData;
        if (PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*PluginNodeMissingPrompt.TextData.Reference + 8))
                    (PluginNodeMissingPrompt.TextData.Reference,&local_res8);
        }
        if (TVar1.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar1.Reference + 0x10))(TVar1.Reference);
        }
      }
      ::Info.PromptIfMissing.Flags = PluginNodeMissingPrompt.Flags;
      pFVar2 = GetVertexInterface();
      FVertexInterface::operator=(&::Info.DefaultInterface,pFVar2);
      atexit(`Metasound::FEnvelopeFollowerOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&::_TSS0);
      return &::Info;
    }
  }
  return &::Info;
}

// GetVertexInterface @ 14b077360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::FEnvelopeFollowerOperator::GetVertexInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar3;
  TOutputDataVertex<float> *pTVar4;
  FInputDataVertex *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FInputDataVertex *pFVar8;
  FInputDataVertex *pFVar9;
  FVertexInterface *pFVar10;
  undefined1 auStackY_248 [32];
  bool local_218 [4];
  int local_214;
  float local_210;
  float local_20c;
  FInputVertexInterface local_208;
  FOutputVertexInterface local_1e8;
  FInputVertexInterfaceDeclarationBuilder local_1c8;
  FOutputVertexInterfaceDeclarationBuilder local_1a0;
  TOutputDataVertex<Metasound::FAudioBuffer> local_178;
  TOutputDataVertex<float> local_158;
  TInputDataVertex<bool> local_138;
  TInputDataVertex<Metasound::FAudioBuffer> local_100;
  TInputDataVertex<Metasound::FTime> local_c8;
  TInputDataVertex<Metasound::FTime> local_90;
  undefined1 local_58 [32];
  undefined1 local_38 [16];
  byte local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_248;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pTVar3 = TOutputDataVertex<Metasound::FAudioBuffer>::
             TOutputDataVertex<Metasound::FAudioBuffer><>
                       (&local_178,&EnvelopeFollowerVertexNames::OutputAudioEnvelopeName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar4 = TOutputDataVertex<float>::TOutputDataVertex<float><>
                       (&local_158,&EnvelopeFollowerVertexNames::OutParamEnvelopeName,
                        &FDataVertexMetadata::EmptyBasic);
    FOutputVertexInterface::FOutputVertexInterface(&local_1e8);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_1a0,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_1e8,
               &local_1e8.SubInterfaces);
    if ((local_1a0.Vertices)->ArrayMax < 2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,&(local_1a0.Vertices)->AllocatorInstance,(local_1a0.Vertices)->ArrayNum,
                 &(local_1a0.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_1a0,(FOutputDataVertex *)pTVar4);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_1a0,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_1a0);
    local_214 = 0;
    pFVar5 = (FInputDataVertex *)
             TInputDataVertex<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
             TInputDataVertex<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_><int>
                       (local_58,&EnvelopeFollowerVertexNames::InParamFollowModeName,
                        &FDataVertexMetadata::EmptyBasic,&local_214);
    local_210 = 0.1;
    pFVar6 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FTime>::TInputDataVertex<Metasound::FTime><float>
                       (&local_90,&EnvelopeFollowerVertexNames::InParamReleaseTimeName,
                        &FDataVertexMetadata::EmptyBasic,&local_210);
    local_20c = 0.01;
    pFVar7 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FTime>::TInputDataVertex<Metasound::FTime><float>
                       (&local_c8,&EnvelopeFollowerVertexNames::InParamAttackTimeName,
                        &FDataVertexMetadata::EmptyBasic,&local_20c);
    pFVar8 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FAudioBuffer>::TInputDataVertex<Metasound::FAudioBuffer><>
                       (&local_100,&EnvelopeFollowerVertexNames::InParamAudioInputName,
                        &FDataVertexMetadata::EmptyBasic);
    local_218[0] = true;
    pFVar9 = (FInputDataVertex *)
             TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                       (&local_138,&EnvelopeFollowerVertexNames::InParamEnableName,
                        &FDataVertexMetadata::EmptyBasic,local_218);
    local_208._padding_ = 0;
    local_208._padding_ = 0;
    local_208.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_208.SubInterfaces.ArrayNum = 0;
    local_208.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_1c8,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_208,
               &local_208.SubInterfaces);
    if ((local_1c8.Vertices)->ArrayMax < 5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,5,&(local_1c8.Vertices)->AllocatorInstance,(local_1c8.Vertices)->ArrayNum,
                 &(local_1c8.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1c8,pFVar9);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1c8,pFVar8);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1c8,pFVar7);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1c8,pFVar6);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1c8,pFVar5);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_1c8);
    FVertexInterface::FVertexInterface(&::Interface,&local_208,&local_1e8);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_208.SubInterfaces.AllocatorInstance.Data,
               local_208.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_208.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_208.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_208._padding_,(int)local_208._padding_);
    if ((FInputDataVertex *)local_208._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_208._padding_);
    }
    if ((0xc < (byte)local_138._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FVertexInterface *)(*pcVar1)();
      return pFVar10;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_138._48_1_])(&local_138.field_0x20);
    if ((0xc < (byte)local_100._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FVertexInterface *)(*pcVar1)();
      return pFVar10;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_100._48_1_])(&local_100.field_0x20);
    if ((0xc < (byte)local_c8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FVertexInterface *)(*pcVar1)();
      return pFVar10;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_c8._48_1_])(&local_c8.field_0x20);
    if ((0xc < (byte)local_90._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FVertexInterface *)(*pcVar1)();
      return pFVar10;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_90._48_1_])(&local_90.field_0x20);
    if ((0xc < local_28) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FVertexInterface *)(*pcVar1)();
      return pFVar10;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_28])(local_38);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_1e8.SubInterfaces.AllocatorInstance.Data,
               local_1e8.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_1e8.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_1e8.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_1e8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_1e8._padding_);
    }
    atexit(`Metasound::FEnvelopeFollowerOperator::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__Interface__);
    _Init_thread_footer(&::_TSS0);
  }
  return &::Interface;
}

// Reset @ 14b07ae20

void __thiscall
Metasound::FEnvelopeFollowerOperator::Reset(FEnvelopeFollowerOperator *this,FResetParams *param_1)

{
  int iVar1;
  double *pdVar2;
  double *pdVar3;
  undefined8 *puVar4;
  double dVar5;
  double dVar6;
  FEnvelopeFollowerInitParams local_28;
  
  pdVar2 = *(double **)&(this->AttackTimeInput).field_0x8;
  this->OutputNeedsResetOnDisable = true;
  pdVar3 = *(double **)&(this->ReleaseTimeInput).field_0x8;
  dVar6 = *pdVar2 * __real_408f400000000000;
  if (dVar6 <= 0.0) {
    dVar6 = 0.0;
  }
  this->PrevAttackTime = dVar6;
  dVar5 = *pdVar3 * __real_408f400000000000;
  local_28.Mode = Peak;
  local_28.bIsAnalog = true;
  local_28.AnalysisWindowMsec = 5.0;
  local_28.AttackTimeMsec = (float)dVar6;
  if (dVar5 <= 0.0) {
    dVar5 = 0.0;
  }
  this->PrevReleaseTime = dVar5;
  local_28.SampleRate = (float)param_1->OperatorSettings->SampleRate;
  local_28.NumChannels = 1;
  local_28.ReleaseTimeMsec = (float)dVar5;
  Audio::FEnvelopeFollower::Init(&this->EnvelopeFollower,&local_28);
  **(undefined4 **)&(this->EnvelopeFloatOutput).field_0x8 = 0;
  puVar4 = *(undefined8 **)&(this->EnvelopeAudioOutput).field_0x8;
  iVar1 = *(int *)(puVar4 + 1);
  if (0 < iVar1) {
    memset((void *)*puVar4,0,(longlong)iVar1 << 2);
  }
  return;
}

