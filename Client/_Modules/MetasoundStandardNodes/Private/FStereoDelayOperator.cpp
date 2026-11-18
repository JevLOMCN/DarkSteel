// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 11

// FStereoDelayOperator @ 14b1ce850

FStereoDelayOperator * __thiscall
Metasound::FStereoDelayOperator::FStereoDelayOperator
          (FStereoDelayOperator *this,FOperatorSettings *param_1,
          TDataReadReference<Metasound::FAudioBuffer> *param_2,
          TDataReadReference<Metasound::FAudioBuffer> *param_3,
          TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *param_4,
          TDataReadReference<Metasound::FTime> *param_5,TDataReadReference<float> *param_6,
          TDataReadReference<float> *param_7,TDataReadReference<float> *param_8,
          TDataReadReference<float> *param_9,float param_10,
          TDataReadReference<Metasound::FTrigger> *param_11)

{
  longlong lVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  this->_padding_ = (longlong)&___7FStereoDelayOperator_Metasound__6B_;
  *(undefined ***)&this->LeftAudioInput =
       &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->LeftAudioInput).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->LeftAudioInput).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->LeftAudioInput =
       &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined ***)&this->RightAudioInput =
       &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->RightAudioInput).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar1 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->RightAudioInput).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->RightAudioInput =
       &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined ***)&this->StereoDelayMode =
       &___7__TDataReference_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined8 *)&(this->StereoDelayMode).field_0x8 = *(undefined8 *)&param_4->field_0x8;
  lVar1 = *(longlong *)&param_4->field_0x10;
  *(longlong *)&(this->StereoDelayMode).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->StereoDelayMode =
       &
       ___7__TDataReadReference_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined ***)&this->DelayTime = &___7__TDataReference_VFTime_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->DelayTime).field_0x8 = *(undefined8 *)&param_5->field_0x8;
  lVar1 = *(longlong *)&param_5->field_0x10;
  *(longlong *)&(this->DelayTime).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->DelayTime = &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
  *(undefined ***)&this->DelayRatio = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->DelayRatio).field_0x8 = *(undefined8 *)&param_6->field_0x8;
  lVar1 = *(longlong *)&param_6->field_0x10;
  *(longlong *)&(this->DelayRatio).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->DelayRatio = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->DryLevel = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->DryLevel).field_0x8 = *(undefined8 *)&param_7->field_0x8;
  lVar1 = *(longlong *)&param_7->field_0x10;
  *(longlong *)&(this->DryLevel).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->DryLevel = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->WetLevel = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->WetLevel).field_0x8 = *(undefined8 *)&param_8->field_0x8;
  lVar1 = *(longlong *)&param_8->field_0x10;
  *(longlong *)&(this->WetLevel).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->WetLevel = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->Feedback = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->Feedback).field_0x8 = *(undefined8 *)&param_9->field_0x8;
  lVar1 = *(longlong *)&param_9->field_0x10;
  *(longlong *)&(this->Feedback).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Feedback = &___7__TDataReadReference_M_Metasound__6B_;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)&this->LeftAudioOutput,NewObject,param_1);
  *(undefined ***)&this->LeftAudioOutput =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)&this->RightAudioOutput,NewObject,param_1);
  *(undefined ***)&this->RightAudioOutput =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  Audio::FDelay::FDelay(&this->LeftDelayBuffer);
  Audio::FDelay::FDelay(&this->RightDelayBuffer);
  fVar4 = __real_447a0000;
  fVar3 = __real_3f800000;
  pfVar2 = *(float **)&(this->DelayRatio).field_0x8;
  this->PrevDelayTimeMsec = 0.0;
  fVar5 = *pfVar2;
  if (fVar3 <= fVar5) {
    fVar5 = fVar3;
  }
  if (fVar5 <= __real_bf800000) {
    fVar5 = __real_bf800000;
  }
  this->PrevDelayRatio = fVar5;
  if (fVar4 <= param_10) {
    param_10 = fVar4;
  }
  if (param_10 <= __real_3a83126f) {
    param_10 = __real_3a83126f;
  }
  this->MaxDelayTimeSeconds = param_10;
  *(undefined ***)&this->TriggerReset = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->TriggerReset).field_0x8 = *(undefined8 *)&param_11->field_0x8;
  lVar1 = *(longlong *)&param_11->field_0x10;
  *(longlong *)&(this->TriggerReset).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->TriggerReset =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  fVar5 = this->MaxDelayTimeSeconds;
  fVar6 = (float)**(double **)&(this->DelayTime).field_0x8;
  if (fVar5 <= fVar6) {
    fVar6 = fVar5;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  this->PrevDelayTimeMsec = fVar6 * fVar4;
  Audio::FDelay::Init(&this->LeftDelayBuffer,(float)param_1->SampleRate,fVar5);
  Audio::FDelay::SetDelayMsec
            (&this->LeftDelayBuffer,(this->PrevDelayRatio + fVar3) * this->PrevDelayTimeMsec);
  Audio::FDelay::Init(&this->RightDelayBuffer,(float)param_1->SampleRate,this->MaxDelayTimeSeconds);
  Audio::FDelay::SetDelayMsec
            (&this->RightDelayBuffer,(fVar3 - this->PrevDelayRatio) * this->PrevDelayTimeMsec);
  return this;
}

// operator() @ 14b1d2950

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::FStereoDelayOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  ITextData *pIVar2;
  TRefCountPtr<ITextData> TVar3;
  int iVar4;
  FText *pFVar5;
  FVertexInterface *pFVar6;
  FScriptContainerElement *pFVar7;
  FName local_res10 [3];
  FNodeClassName local_28;
  
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res10,L"Stereo Delay");
  Metasound::FNodeClassName::FNodeClassName
            (&local_28,&Metasound::StandardNodes::Namespace,local_res10,
             &Metasound::StandardNodes::AudioVariant);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_28.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_28.Name;
  (__return_storage_ptr__->ClassName).Variant = local_28.Variant;
  pFVar5 = FText::FText((FText *)&local_28);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar5);
  if (local_28.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_28.Namespace + 0x10))();
  }
  pFVar5 = FText::FText((FText *)&local_28);
  FText::operator=(&__return_storage_ptr__->Description,pFVar5);
  if (local_28.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_28.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar3 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar2 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar2 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar3.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar6 = Metasound::FStereoDelayOperator::GetVertexInterface();
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar6);
  iVar4 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance,piVar1);
  }
  pFVar7 = (__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar4 + 1;
  pFVar7 = pFVar7 + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar7 = 0;
  TVar3 = Metasound::NodeCategories::Delays.TextData;
  *(ITextData **)pFVar7 = Metasound::NodeCategories::Delays.TextData.Reference;
  if (TVar3.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,local_res10);
  }
  *(uint *)(pFVar7 + 8) = Metasound::NodeCategories::Delays.Flags;
  return __return_storage_ptr__;
}

// BindInputs @ 14b1d4390

void __thiscall
Metasound::FStereoDelayOperator::BindInputs
          (FStereoDelayOperator *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8 [2];
  TDataReadReference<Metasound::FAudioBuffer> *local_res18;
  TDataReadReference<Metasound::FAudioBuffer> **local_res20;
  undefined1 local_58 [16];
  code *local_48;
  TDataReadReference<Metasound::FAudioBuffer> **local_40;
  undefined1 local_38 [16];
  
  FLazyName::Resolve(&StereoDelay::InAudioInputLeftName);
  local_res18 = &this->LeftAudioInput;
  local_40 = &local_res18;
  local_58._0_8_ = local_res8;
  local_38._8_8_ = local_58;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_58._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&StereoDelay::InAudioInputRightName);
  local_res18 = &this->RightAudioInput;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_40 = &local_res18;
  local_38._0_8_ = local_res8;
  local_58._8_8_ = local_38;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&StereoDelay::InDelayModeName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->StereoDelayMode;
  local_40 = &local_res18;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_58._8_8_ = local_38;
  local_38._0_8_ = local_res8;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&StereoDelay::InDelayTimeName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->DelayTime;
  local_40 = &local_res18;
  local_58._8_8_ = local_38;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._0_8_ = local_res8;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTime>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&StereoDelay::InDelayRatioName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->DelayRatio;
  local_40 = &local_res18;
  local_38._0_8_ = local_res8;
  local_58._8_8_ = local_38;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&StereoDelay::InDryLevelName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->DryLevel;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_40 = &local_res18;
  local_38._0_8_ = local_res8;
  local_58._8_8_ = local_38;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&StereoDelay::InWetLevelName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->WetLevel;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_40 = &local_res18;
  local_38._0_8_ = local_res8;
  local_58._8_8_ = local_38;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&StereoDelay::InFeedbackAmountName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->Feedback;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_40 = &local_res18;
  local_38._0_8_ = local_res8;
  local_58._8_8_ = local_38;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)(double)this->MaxDelayTimeSeconds;
  FLazyName::Resolve(&StereoDelay::InParamMaxDelayTimeName);
  local_58._0_8_ = local_res8;
  local_res20 = &local_res18;
  local_38._8_8_ = &local_res20;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::SetValue<Metasound::FTime>'::__l2::<lambda_2>,void,Metasound::VertexDataPrivate::FInputBinding_&>
       ::Call;
  local_40 = (TDataReadReference<Metasound::FAudioBuffer> **)local_58;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::SetValue<Metasound::FTime>'::__l2::<lambda_1>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)local_38);
  FLazyName::Resolve(&StereoDelay::InputResetDelayName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->TriggerReset;
  local_40 = &local_res18;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_58._8_8_ = local_38;
  local_38._0_8_ = local_res8;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  return;
}

// BindOutputs @ 14b1d4b40

void __thiscall
Metasound::FStereoDelayOperator::BindOutputs
          (FStereoDelayOperator *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FAudioBuffer> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataWriteReference<Metasound::FAudioBuffer> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&StereoDelay::OutAudioLeftName);
  local_res18 = &this->LeftAudioOutput;
  local_30 = &local_res18;
  local_48._0_8_ = &local_res8;
  local_28._8_8_ = local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_48._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_28,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_38
            );
  FLazyName::Resolve(&StereoDelay::OutAudioRightName);
  local_res18 = &this->RightAudioOutput;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_38
            );
  return;
}

// CreateOperator @ 14b1d9f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::FStereoDelayOperator::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  FLiteral *pFVar2;
  code *pcVar3;
  bool bVar4;
  FInputBinding *pFVar5;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar6;
  FStereoDelayOperator *this_00;
  FStereoDelayOperator *pFVar7;
  undefined1 auStackY_218 [32];
  double local_1b8;
  FName local_1b0;
  FName local_1a8;
  FName local_1a0;
  FName local_198;
  FName local_190;
  FName local_188;
  FName local_180;
  FName local_178;
  FName local_170;
  FName local_168;
  undefined1 local_160 [32];
  undefined1 local_140 [32];
  undefined1 local_120 [32];
  undefined1 local_100 [32];
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_218;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&StereoDelay::InAudioInputLeftName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>
            (this,(TDataReadReference<Metasound::FAudioBuffer> *)local_60,&local_1b0,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&StereoDelay::InAudioInputRightName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>
            (this,(TDataReadReference<Metasound::FAudioBuffer> *)local_80,&local_1a8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&StereoDelay::InDelayModeName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>
            (this,(TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)local_a0,
             &local_1a0,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&StereoDelay::InDelayTimeName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTime>
            (this,(TDataReadReference<Metasound::FTime> *)local_c0,&local_198,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&StereoDelay::InDelayRatioName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_e0,&local_190,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&StereoDelay::InDryLevelName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_100,&local_188,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&StereoDelay::InWetLevelName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_120,&local_180,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&StereoDelay::InFeedbackAmountName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_140,&local_178,pFVar1);
  pFVar2 = *(FLiteral **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&StereoDelay::InParamMaxDelayTimeName);
  pFVar5 = FInputVertexInterfaceData::FindChecked(this,&local_170);
  if ((pFVar5->Data).bIsSet == false) {
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_40,&(pFVar5->Vertex).Literal.Value);
    TDataLiteralFactory<Metasound::FTime,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::FTime>_>
    ::CreateExplicitArgs((FOperatorSettings *)&local_1b8,pFVar2);
    if (0xc < local_40.TypeIndex) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40.TypeIndex])(&local_40);
  }
  else {
    if ((pFVar5->Data).bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar6.Ptr = (IOperator *)(*pcVar3)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar6.Ptr;
      }
    }
    FAnyDataReference::GetAs<Metasound::FTime>(&(pFVar5->Data).TypedValue);
  }
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&StereoDelay::InputResetDelayName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_160,&local_168,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x228);
  pFVar7 = (FStereoDelayOperator *)0x0;
  if (this_00 != (FStereoDelayOperator *)0x0) {
    pFVar7 = FStereoDelayOperator
                       (this_00,pFVar1,(TDataReadReference<Metasound::FAudioBuffer> *)local_60,
                        (TDataReadReference<Metasound::FAudioBuffer> *)local_80,
                        (TDataReadReference<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> *)
                        local_a0,(TDataReadReference<Metasound::FTime> *)local_c0,
                        (TDataReadReference<float> *)local_e0,(TDataReadReference<float> *)local_100
                        ,(TDataReadReference<float> *)local_120,
                        (TDataReadReference<float> *)local_140,(float)local_1b8,
                        (TDataReadReference<Metasound::FTrigger> *)local_160);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_160._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_140._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_120._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_100._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_e0._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_c0._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_a0._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_80._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_60._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// Execute @ 14b1debf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Metasound::FStereoDelayOperator::Execute(FStereoDelayOperator *this)

{
  float fVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  uint uVar5;
  float *pfVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  iVar2 = *(int *)(*(longlong *)&(this->TriggerReset).field_0x8 + 0x1c);
  if (0 < iVar2) {
    uVar5 = iVar2 - 1;
    if (0 < (int)uVar5) {
      uVar8 = (ulonglong)uVar5;
      do {
        Audio::FDelay::Reset(&this->LeftDelayBuffer);
        Audio::FDelay::Reset(&this->RightDelayBuffer);
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    Audio::FDelay::Reset(&this->LeftDelayBuffer);
    Audio::FDelay::Reset(&this->RightDelayBuffer);
  }
  fVar1 = __real_3f800000;
  fVar14 = __real_322bcc77;
  fVar15 = (float)**(double **)&(this->DelayTime).field_0x8;
  fVar17 = **(float **)&(this->DelayRatio).field_0x8;
  if (this->MaxDelayTimeSeconds <= fVar15) {
    fVar15 = this->MaxDelayTimeSeconds;
  }
  if (__real_3f800000 <= fVar17) {
    fVar17 = __real_3f800000;
  }
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  if (fVar17 <= __real_bf800000) {
    fVar17 = __real_bf800000;
  }
  fVar15 = fVar15 * __real_447a0000;
  if ((__real_322bcc77 <
       (float)((uint)(this->PrevDelayTimeMsec - fVar15) & __xmm_7fffffff7fffffff7fffffff7fffffff))
     || (__real_322bcc77 <
         (float)((uint)(this->PrevDelayRatio - fVar17) & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    this->PrevDelayRatio = fVar17;
    this->PrevDelayTimeMsec = fVar15;
    Audio::FDelay::SetEasedDelayMsec(&this->LeftDelayBuffer,(fVar17 + fVar1) * fVar15,false);
    Audio::FDelay::SetEasedDelayMsec
              (&this->RightDelayBuffer,(fVar1 - this->PrevDelayRatio) * this->PrevDelayTimeMsec,
               false);
  }
  puVar3 = *(undefined8 **)&(this->LeftAudioInput).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar3 + 2) != *(int *)(puVar3 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pfVar6 = (float *)*puVar3;
  plVar4 = *(longlong **)&(this->RightAudioInput).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar4[2] != (int)plVar4[1])) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  lVar9 = *plVar4;
  plVar4 = *(longlong **)&(this->LeftAudioOutput).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar4[2] != (int)plVar4[1])) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  lVar11 = *plVar4;
  plVar4 = *(longlong **)&(this->RightAudioOutput).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar4[2] != (int)plVar4[1])) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  lVar10 = *plVar4;
  lVar7 = *(longlong *)&(this->LeftAudioInput).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar7 + 0x10) != *(int *)(lVar7 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  lVar7 = (longlong)*(int *)(lVar7 + 8);
  fVar17 = **(float **)&(this->Feedback).field_0x8;
  if (fVar1 <= fVar17) {
    fVar17 = fVar1;
  }
  fVar15 = **(float **)&(this->DryLevel).field_0x8;
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  if (fVar1 <= fVar15) {
    fVar15 = fVar1;
  }
  fVar16 = **(float **)&(this->WetLevel).field_0x8;
  if (fVar1 <= fVar16) {
    fVar16 = fVar1;
  }
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  iVar2 = **(int **)&(this->StereoDelayMode).field_0x8;
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  if (fVar14 < (float)((uint)fVar17 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    if (iVar2 == 0) {
      if (0 < lVar7) {
        lVar11 = lVar11 - (longlong)pfVar6;
        lVar9 = lVar9 - (longlong)pfVar6;
        lVar10 = lVar10 - (longlong)pfVar6;
        do {
          fVar12 = Audio::FDelay::Read(&this->LeftDelayBuffer);
          fVar14 = *pfVar6;
          fVar13 = Audio::FDelay::Read(&this->RightDelayBuffer);
          fVar1 = *(float *)((longlong)pfVar6 + lVar9);
          fVar14 = (float)(**(code **)((this->LeftDelayBuffer)._padding_ + 8))
                                    (&this->LeftDelayBuffer,fVar12 * fVar17 + fVar14);
          *(float *)((longlong)pfVar6 + lVar11) = fVar15 * *pfVar6 + fVar14 * fVar16;
          fVar14 = (float)(**(code **)((this->RightDelayBuffer)._padding_ + 8))
                                    (&this->RightDelayBuffer,fVar13 * fVar17 + fVar1);
          *(float *)((longlong)pfVar6 + lVar10) =
               fVar15 * *(float *)((longlong)pfVar6 + lVar9) + fVar14 * fVar16;
          pfVar6 = pfVar6 + 1;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
    }
    else if (iVar2 == 1) {
      if (0 < lVar7) {
        lVar11 = lVar11 - (longlong)pfVar6;
        lVar9 = lVar9 - (longlong)pfVar6;
        lVar10 = lVar10 - (longlong)pfVar6;
        do {
          fVar12 = Audio::FDelay::Read(&this->LeftDelayBuffer);
          fVar14 = *(float *)((longlong)pfVar6 + lVar9);
          fVar13 = Audio::FDelay::Read(&this->RightDelayBuffer);
          fVar1 = *pfVar6;
          fVar14 = (float)(**(code **)((this->LeftDelayBuffer)._padding_ + 8))
                                    (&this->LeftDelayBuffer,fVar12 * fVar17 + fVar14);
          *(float *)((longlong)pfVar6 + lVar11) = fVar15 * *pfVar6 + fVar14 * fVar16;
          fVar14 = (float)(**(code **)((this->RightDelayBuffer)._padding_ + 8))
                                    (&this->RightDelayBuffer,fVar13 * fVar17 + fVar1);
          *(float *)((longlong)pfVar6 + lVar10) =
               fVar15 * *(float *)((longlong)pfVar6 + lVar9) + fVar14 * fVar16;
          pfVar6 = pfVar6 + 1;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
    }
    else if ((iVar2 == 2) && (0 < lVar7)) {
      lVar11 = lVar11 - (longlong)pfVar6;
      lVar9 = lVar9 - (longlong)pfVar6;
      lVar10 = lVar10 - (longlong)pfVar6;
      do {
        fVar12 = Audio::FDelay::Read(&this->RightDelayBuffer);
        fVar14 = *(float *)(lVar9 + (longlong)pfVar6);
        fVar13 = Audio::FDelay::Read(&this->LeftDelayBuffer);
        fVar1 = *pfVar6;
        fVar14 = (float)(**(code **)((this->LeftDelayBuffer)._padding_ + 8))
                                  (&this->LeftDelayBuffer,fVar12 * fVar17 + fVar14);
        *(float *)((longlong)pfVar6 + lVar11) = fVar15 * *pfVar6 + fVar14 * fVar16;
        fVar14 = (float)(**(code **)((this->RightDelayBuffer)._padding_ + 8))
                                  (&this->RightDelayBuffer,fVar13 * fVar17 + fVar1);
        *(float *)((longlong)pfVar6 + lVar10) =
             fVar15 * *(float *)(lVar9 + (longlong)pfVar6) + fVar14 * fVar16;
        pfVar6 = pfVar6 + 1;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
  }
  else if (iVar2 == 0) {
    if (0 < lVar7) {
      lVar11 = lVar11 - (longlong)pfVar6;
      lVar9 = lVar9 - (longlong)pfVar6;
      lVar10 = lVar10 - (longlong)pfVar6;
      do {
        fVar17 = (float)(**(code **)((this->LeftDelayBuffer)._padding_ + 8))
                                  (&this->LeftDelayBuffer,*pfVar6);
        *(float *)((longlong)pfVar6 + lVar11) = fVar15 * *pfVar6 + fVar17 * fVar16;
        fVar17 = (float)(**(code **)((this->RightDelayBuffer)._padding_ + 8))
                                  (&this->RightDelayBuffer,*(undefined4 *)(lVar9 + (longlong)pfVar6)
                                  );
        *(float *)((longlong)pfVar6 + lVar10) =
             fVar15 * *(float *)(lVar9 + (longlong)pfVar6) + fVar17 * fVar16;
        pfVar6 = pfVar6 + 1;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
  }
  else if (((iVar2 == 1) || (iVar2 == 2)) && (0 < lVar7)) {
    lVar11 = lVar11 - (longlong)pfVar6;
    lVar9 = lVar9 - (longlong)pfVar6;
    lVar10 = lVar10 - (longlong)pfVar6;
    do {
      fVar17 = (float)(**(code **)((this->LeftDelayBuffer)._padding_ + 8))
                                (&this->LeftDelayBuffer,*(undefined4 *)(lVar9 + (longlong)pfVar6));
      *(float *)(lVar11 + (longlong)pfVar6) = fVar15 * *pfVar6 + fVar17 * fVar16;
      fVar17 = (float)(**(code **)((this->RightDelayBuffer)._padding_ + 8))
                                (&this->RightDelayBuffer,*pfVar6);
      *(float *)(lVar10 + (longlong)pfVar6) =
           fVar15 * *(float *)(lVar9 + (longlong)pfVar6) + fVar17 * fVar16;
      pfVar6 = pfVar6 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// GetInputDelayRatioClamped @ 14b1e2610

float __thiscall
Metasound::FStereoDelayOperator::GetInputDelayRatioClamped(FStereoDelayOperator *this)

{
  float fVar1;
  
  fVar1 = **(float **)&(this->DelayRatio).field_0x8;
  if (__real_3f800000 <= fVar1) {
    fVar1 = __real_3f800000;
  }
  if (fVar1 <= __real_bf800000) {
    fVar1 = __real_bf800000;
  }
  return fVar1;
}

// GetInputDelayTimeMsecClamped @ 14b1e2640

float __thiscall
Metasound::FStereoDelayOperator::GetInputDelayTimeMsecClamped(FStereoDelayOperator *this)

{
  float fVar1;
  
  fVar1 = (float)**(double **)&(this->DelayTime).field_0x8;
  if (this->MaxDelayTimeSeconds <= fVar1) {
    fVar1 = this->MaxDelayTimeSeconds;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return fVar1 * __real_447a0000;
}

// GetNodeInfo @ 14b1e3cb0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FStereoDelayOperator::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `Metasound::FStereoDelayOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,&::Info);
      atexit(`Metasound::FStereoDelayOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&::_TSS0);
      return &::Info;
    }
  }
  return &::Info;
}

// GetVertexInterface @ 14b1e5f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::FStereoDelayOperator::GetVertexInterface(void)

{
  code *pcVar1;
  TRefCountPtr<ITextData> TVar2;
  TRefCountPtr<ITextData> TVar3;
  bool bVar4;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar5;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar6;
  FOutputVertexInterface *pFVar7;
  FInputDataVertex *pFVar8;
  FName *pFVar9;
  FInputDataVertex *pFVar10;
  FInputDataVertex *pFVar11;
  FVertexInterface *pFVar12;
  ulonglong uVar13;
  undefined1 auStackY_398 [32];
  float local_368;
  float local_364;
  float local_360;
  float local_35c;
  float local_358;
  int local_354;
  FInputVertexInterface local_350;
  FInputVertexInterfaceDeclarationBuilder local_330;
  undefined1 local_308 [4];
  undefined1 local_304 [4];
  longlong local_300;
  FInputDataVertex *local_2f8;
  FInputDataVertex *local_2f0;
  FInputDataVertex *local_2e8;
  FInputDataVertex *local_2e0;
  FInputDataVertex *local_2d8;
  FInputDataVertex *local_2d0;
  FOutputVertexInterface local_2c8;
  TOutputDataVertex<Metasound::FAudioBuffer> local_2a8;
  TOutputDataVertex<Metasound::FAudioBuffer> local_288;
  FInputDataVertex local_268;
  TInputDataVertex<Metasound::FAudioBuffer> local_230;
  TInputDataVertex<Metasound::FAudioBuffer> local_1f8;
  undefined1 local_1c0 [32];
  undefined1 local_1a0 [16];
  byte local_190;
  TInputDataVertex<Metasound::FTime> local_188;
  TInputDataVertex<float> local_150;
  TInputDataVertex<float> local_118;
  TInputDataVertex<float> local_e0;
  TInputDataVertex<float> local_a8;
  TInputDataVertex<Metasound::FTrigger> local_70;
  ulonglong local_38;
  
  TVar2.Reference = FDataVertexMetadata::EmptyBasic.Description.TextData.Reference;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_398;
  if (FDataVertexMetadata::EmptyBasic.Description.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FDataVertexMetadata::EmptyBasic.Description.TextData.Reference + 8))
              (FDataVertexMetadata::EmptyBasic.Description.TextData.Reference,local_308);
  }
  TVar3.Reference = FDataVertexMetadata::EmptyBasic.DisplayName.TextData.Reference;
  if (FDataVertexMetadata::EmptyBasic.DisplayName.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FDataVertexMetadata::EmptyBasic.DisplayName.TextData.Reference + 8))
              (FDataVertexMetadata::EmptyBasic.DisplayName.TextData.Reference,local_304);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pTVar5 = TOutputDataVertex<Metasound::FAudioBuffer>::
               TOutputDataVertex<Metasound::FAudioBuffer><>
                         (&local_2a8,&StereoDelay::OutAudioRightName,
                          &FDataVertexMetadata::EmptyBasic);
      pTVar6 = TOutputDataVertex<Metasound::FAudioBuffer>::
               TOutputDataVertex<Metasound::FAudioBuffer><>
                         (&local_288,&StereoDelay::OutAudioLeftName,&FDataVertexMetadata::EmptyBasic
                         );
      pFVar7 = FOutputVertexInterface::
               FOutputVertexInterface<Metasound::TOutputDataVertex<Metasound::FAudioBuffer>,Metasound::TOutputDataVertex<Metasound::FAudioBuffer>_>
                         (&local_2c8,pTVar6,pTVar5);
      pFVar8 = (FInputDataVertex *)
               TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                         (&local_70,&StereoDelay::InputResetDelayName,
                          &FDataVertexMetadata::EmptyBasic);
      FLazyName::Resolve(&StereoDelay::InParamMaxDelayTimeName);
      pFVar9 = GetMetasoundDataTypeName<Metasound::FTime>();
      local_268._padding_ = local_300;
      local_368 = 0.0;
      local_268._padding_ = *(longlong *)pFVar9;
      local_268._padding_._0_4_ = 1;
      local_268.Literal.Value._padding_._0_4_ = 0x40200000;
      local_268.Literal.Value.TypeIndex = 3;
      local_268._padding_ =
           (longlong)&___7__TInputConstructorVertex_VFTime_Metasound___Metasound__6B_;
      pFVar10 = (FInputDataVertex *)
                TInputDataVertex<float>::TInputDataVertex<float><float>
                          (&local_a8,&StereoDelay::InFeedbackAmountName,
                           &FDataVertexMetadata::EmptyBasic,&local_368);
      local_364 = 1.0;
      pFVar11 = (FInputDataVertex *)
                TInputDataVertex<float>::TInputDataVertex<float><float>
                          (&local_e0,&StereoDelay::InWetLevelName,&FDataVertexMetadata::EmptyBasic,
                           &local_364);
      local_360 = 0.0;
      local_2d0 = (FInputDataVertex *)
                  TInputDataVertex<float>::TInputDataVertex<float><float>
                            (&local_118,&StereoDelay::InDryLevelName,
                             &FDataVertexMetadata::EmptyBasic,&local_360);
      local_35c = 0.1;
      local_2d8 = (FInputDataVertex *)
                  TInputDataVertex<float>::TInputDataVertex<float><float>
                            (&local_150,&StereoDelay::InDelayRatioName,
                             &FDataVertexMetadata::EmptyBasic,&local_35c);
      local_358 = 1.0;
      local_2e0 = (FInputDataVertex *)
                  TInputDataVertex<Metasound::FTime>::TInputDataVertex<Metasound::FTime><float>
                            (&local_188,&StereoDelay::InDelayTimeName,
                             &FDataVertexMetadata::EmptyBasic,&local_358);
      local_354 = 2;
      local_2e8 = (FInputDataVertex *)
                  TInputDataVertex<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
                  TInputDataVertex<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_><int>
                            (local_1c0,&StereoDelay::InDelayModeName,
                             &FDataVertexMetadata::EmptyBasic,&local_354);
      local_2f0 = (FInputDataVertex *)
                  TInputDataVertex<Metasound::FAudioBuffer>::
                  TInputDataVertex<Metasound::FAudioBuffer><>
                            (&local_1f8,&StereoDelay::InAudioInputRightName,
                             &FDataVertexMetadata::EmptyBasic);
      local_2f8 = (FInputDataVertex *)
                  TInputDataVertex<Metasound::FAudioBuffer>::
                  TInputDataVertex<Metasound::FAudioBuffer><>
                            (&local_230,&StereoDelay::InAudioInputLeftName,
                             &FDataVertexMetadata::EmptyBasic);
      local_350._padding_ = 0;
      local_350._padding_ = 0;
      local_350.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_350.SubInterfaces.ArrayNum = 0;
      local_350.SubInterfaces.ArrayMax = 0;
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::
      FInputVertexInterfaceDeclarationBuilder
                (&local_330,
                 (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_350,
                 &local_350.SubInterfaces);
      if ((local_330.Vertices)->ArrayMax < 10) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,10,&(local_330.Vertices)->AllocatorInstance,(local_330.Vertices)->ArrayNum
                   ,&(local_330.Vertices)->ArrayMax);
      }
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_330,local_2f8);
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_330,local_2f0);
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_330,local_2e8);
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_330,local_2e0);
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_330,local_2d8);
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_330,local_2d0);
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_330,pFVar11);
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_330,pFVar10);
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_330,&local_268);
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_330,pFVar8);
      VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
                ((FSubInterfaceDeclarationBuilder *)&local_330);
      FVertexInterface::FVertexInterface(&::Interface,&local_350,pFVar7);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_350.SubInterfaces.AllocatorInstance.Data,
                 local_350.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_350.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_350.SubInterfaces.AllocatorInstance.Data);
      }
      DestructItems<Metasound::FInputDataVertex,int>
                ((FInputDataVertex *)local_350._padding_,(int)local_350._padding_);
      if ((FInputDataVertex *)local_350._padding_ != (FInputDataVertex *)0x0) {
        FMemory::Free((void *)local_350._padding_);
      }
      if (0xc < (byte)local_230._48_1_) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          pFVar12 = (FVertexInterface *)(*pcVar1)();
          return pFVar12;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[(byte)local_230._48_1_])(&local_230.field_0x20);
      if (0xc < (byte)local_1f8._48_1_) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          pFVar12 = (FVertexInterface *)(*pcVar1)();
          return pFVar12;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[(byte)local_1f8._48_1_])(&local_1f8.field_0x20);
      if (0xc < local_190) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          pFVar12 = (FVertexInterface *)(*pcVar1)();
          return pFVar12;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_190])(local_1a0);
      if (0xc < (byte)local_188._48_1_) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          pFVar12 = (FVertexInterface *)(*pcVar1)();
          return pFVar12;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[(byte)local_188._48_1_])(&local_188.field_0x20);
      if (0xc < (byte)local_150._48_1_) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          pFVar12 = (FVertexInterface *)(*pcVar1)();
          return pFVar12;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[(byte)local_150._48_1_])(&local_150.field_0x20);
      if (0xc < (byte)local_118._48_1_) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          pFVar12 = (FVertexInterface *)(*pcVar1)();
          return pFVar12;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[(byte)local_118._48_1_])(&local_118.field_0x20);
      if (0xc < (byte)local_e0._48_1_) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          pFVar12 = (FVertexInterface *)(*pcVar1)();
          return pFVar12;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[(byte)local_e0._48_1_])(&local_e0.field_0x20);
      if (0xc < (byte)local_a8._48_1_) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          pFVar12 = (FVertexInterface *)(*pcVar1)();
          return pFVar12;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[(byte)local_a8._48_1_])(&local_a8.field_0x20);
      uVar13 = (ulonglong)local_268.Literal.Value.TypeIndex;
      if (0xc < local_268.Literal.Value.TypeIndex) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          pFVar12 = (FVertexInterface *)(*pcVar1)();
          return pFVar12;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar13] !=
          UE::Core::Private::TDestructorCaller<float>::Destruct) {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar13])(&local_268.Literal);
      }
      if (0xc < (byte)local_70._48_1_) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          pFVar12 = (FVertexInterface *)(*pcVar1)();
          return pFVar12;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[(byte)local_70._48_1_])(&local_70.field_0x20);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_2c8.SubInterfaces.AllocatorInstance.Data,
                 local_2c8.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_2c8.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_2c8.SubInterfaces.AllocatorInstance.Data);
      }
      if ((void *)local_2c8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_2c8._padding_);
      }
      atexit(`Metasound::FStereoDelayOperator::GetVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (TVar3.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar3.Reference + 0x10))(TVar3.Reference);
  }
  if (TVar2.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar2.Reference + 0x10))(TVar2.Reference);
  }
  return &::Interface;
}

// Reset @ 14b1e9f70

void __thiscall
Metasound::FStereoDelayOperator::Reset(FStereoDelayOperator *this,FResetParams *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  
  puVar2 = *(undefined8 **)&(this->LeftAudioOutput).field_0x8;
  iVar1 = *(int *)(puVar2 + 1);
  if (0 < iVar1) {
    memset((void *)*puVar2,0,(longlong)iVar1 << 2);
  }
  puVar2 = *(undefined8 **)&(this->RightAudioOutput).field_0x8;
  iVar1 = *(int *)(puVar2 + 1);
  if (0 < iVar1) {
    memset((void *)*puVar2,0,(longlong)iVar1 << 2);
  }
  fVar4 = __real_3f800000;
  pfVar3 = *(float **)&(this->DelayRatio).field_0x8;
  fVar5 = (float)**(double **)&(this->DelayTime).field_0x8;
  if (this->MaxDelayTimeSeconds <= fVar5) {
    fVar5 = this->MaxDelayTimeSeconds;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  this->PrevDelayTimeMsec = fVar5 * __real_447a0000;
  fVar5 = *pfVar3;
  if (fVar4 <= fVar5) {
    fVar5 = fVar4;
  }
  if (fVar5 <= __real_bf800000) {
    fVar5 = __real_bf800000;
  }
  this->PrevDelayRatio = fVar5;
  Audio::FDelay::Reset(&this->LeftDelayBuffer);
  Audio::FDelay::SetDelayMsec
            (&this->LeftDelayBuffer,(this->PrevDelayRatio + fVar4) * this->PrevDelayTimeMsec);
  Audio::FDelay::Reset(&this->RightDelayBuffer);
  Audio::FDelay::SetDelayMsec
            (&this->RightDelayBuffer,(fVar4 - this->PrevDelayRatio) * this->PrevDelayTimeMsec);
  return;
}

