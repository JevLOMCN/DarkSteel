// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 9

// BindInputs @ 14b1b3000

void __thiscall
Metasound::FPlateReverbOperator::BindInputs
          (FPlateReverbOperator *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  FInputs *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  FInputs **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&PlateReverb::Inputs::BypassName);
  local_res18 = &this->Inputs;
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
  FLazyName::Resolve(&PlateReverb::Inputs::InAudioLeftName);
  local_res18 = (FInputs *)&(this->Inputs).AudioLeft;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
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
  FLazyName::Resolve(&PlateReverb::Inputs::InAudioRightName);
  local_res18 = (FInputs *)&(this->Inputs).AudioRight;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
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
  FLazyName::Resolve(&PlateReverb::Inputs::DryLevelName);
  local_res18 = (FInputs *)&(this->Inputs).DryLevel;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&PlateReverb::Inputs::WetLevelName);
  local_res18 = (FInputs *)&(this->Inputs).WetLevel;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&PlateReverb::Inputs::LateReflectionsDelayName);
  local_res18 = (FInputs *)&(this->Inputs).LateReflectionsDelay;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&PlateReverb::Inputs::LateReflectionsGainDbName);
  local_res18 = (FInputs *)&(this->Inputs).LateReflectionsGainDb;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&PlateReverb::Inputs::LateReflectionsBandwidthName);
  local_res18 = (FInputs *)&(this->Inputs).LateReflectionsBandwidth;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&PlateReverb::Inputs::LateReflectionsDiffusionName);
  local_res18 = (FInputs *)&(this->Inputs).LateReflectionsDiffusion;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&PlateReverb::Inputs::LateReflectionsDampeningName);
  local_res18 = (FInputs *)&(this->Inputs).LateReflectionsDampening;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&PlateReverb::Inputs::LateReflectionsDecayName);
  local_res18 = (FInputs *)&(this->Inputs).LateReflectionsDecay;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&PlateReverb::Inputs::LateReflectionsDensityName);
  local_res18 = (FInputs *)&(this->Inputs).LateReflectionsDensity;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  return;
}

// BindOutputs @ 14b1b34a0

void __thiscall
Metasound::FPlateReverbOperator::BindOutputs
          (FPlateReverbOperator *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  FOutputs *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  FOutputs **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&PlateReverb::Outputs::OutAudioLeftName);
  local_30 = &local_res18;
  local_res18 = &this->Outputs;
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
  FLazyName::Resolve(&PlateReverb::Outputs::OutAudioRightName);
  local_res18 = (FOutputs *)&(this->Outputs).AudioRight;
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

// FPlateReverbOperator @ 14b1ce4a0

FPlateReverbOperator * __thiscall
Metasound::FPlateReverbOperator::FPlateReverbOperator
          (FPlateReverbOperator *this,FBuildOperatorParams *param_1,FInputs *param_2)

{
  FResetParams local_68;
  TDataReference<Metasound::FAudioBuffer> local_50;
  TDataReference<Metasound::FAudioBuffer> local_30;
  
  this->_padding_ = (longlong)&___7FPlateReverbOperator_Metasound__6B_;
  FInputs::FInputs(&this->Inputs,param_2);
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            (&local_50,NewObject,param_1->OperatorSettings);
  local_50._padding_ = (longlong)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_
  ;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            (&local_30,NewObject,param_1->OperatorSettings);
  *(undefined ***)&(this->Outputs).AudioLeft =
       &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(FAudioBuffer **)&(this->Outputs).AudioLeft.field_0x8 = local_50.ObjectReference.Object;
  *(TReferenceControllerBase<0> **)&(this->Outputs).AudioLeft.field_0x10 =
       local_50.ObjectReference.SharedReferenceCount.ReferenceController;
  if (local_50.ObjectReference.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<0> *)0x0) {
    (local_50.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (local_50.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1;
  }
  *(undefined ***)&(this->Outputs).AudioLeft =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined ***)&(this->Outputs).AudioRight =
       &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(FAudioBuffer **)&(this->Outputs).AudioRight.field_0x8 = local_30.ObjectReference.Object;
  *(TReferenceControllerBase<0> **)&(this->Outputs).AudioRight.field_0x10 =
       local_30.ObjectReference.SharedReferenceCount.ReferenceController;
  if (local_30.ObjectReference.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<0> *)0x0) {
    (local_30.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (local_30.ObjectReference.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1;
  }
  *(undefined ***)&(this->Outputs).AudioRight =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (local_30.ObjectReference.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (local_50.ObjectReference.SharedReferenceCount.ReferenceController);
  Audio::FLateReflectionsFast::FLateReflectionsFast
            (&this->Reverb,(float)param_1->OperatorSettings->SampleRate,0x200,
             &Audio::FLateReflectionsFast::DefaultSettings);
  Audio::FLateReflectionsFastSettings::FLateReflectionsFastSettings(&this->CurrentSettings);
  this->LastWetLevel = -1.0;
  (this->WorkBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkBuffer).ArrayNum = 0;
  (this->WorkBuffer).ArrayMax = 0;
  local_68.OperatorSettings = param_1->OperatorSettings;
  local_68.Environment = param_1->Environment;
  local_68.GraphRenderCost = param_1->GraphRenderCost;
  Reset(this,&local_68);
  return this;
}

// operator() @ 14b1d2060

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::FPlateReverbOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ForAnyElementType _Src;
  FName FVar1;
  FVertexInterface *pFVar2;
  FText *pFVar3;
  FText *pFVar4;
  FNodeClassName *pFVar5;
  longlong lVar6;
  undefined1 local_res10 [8];
  FName local_res18;
  FName local_res20;
  FNodeClassName local_138;
  FString local_118;
  TArray<FText,TSizedDefaultAllocator<32>_> local_108;
  FNodeDisplayStyle local_f8;
  TArray<FText,TSizedDefaultAllocator<32>_> local_e8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FText local_a8;
  FNodeClassName local_98;
  FVertexInterface local_80;
  
  local_138.Namespace.ComparisonIndex.Value = 0;
  local_138.Namespace.Number = 0;
  local_138.Name.ComparisonIndex.Value = 0x1010101;
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  local_d8.TextData.Reference = Metasound::NodeCategories::Reverbs.TextData.Reference;
  if (Metasound::NodeCategories::Reverbs.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Reverbs.TextData.Reference + 8))
              (Metasound::NodeCategories::Reverbs.TextData.Reference,local_res10);
  }
  local_d8.Flags = Metasound::NodeCategories::Reverbs.Flags;
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_108.AllocatorInstance,1,&local_108.ArrayMax);
  ConstructItems<FText,FText,int>(local_108.AllocatorInstance.Data,&local_d8,1);
  pFVar2 = Metasound::FPlateReverbOperator::GetVertexInterface();
  pFVar2 = Metasound::FVertexInterface::FVertexInterface(&local_80,pFVar2);
  local_c8.TextData.Reference = Metasound::PluginNodeMissingPrompt.TextData.Reference;
  if (Metasound::PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::PluginNodeMissingPrompt.TextData.Reference + 8))
              (Metasound::PluginNodeMissingPrompt.TextData.Reference,local_res10);
  }
  _Src.Data = Metasound::PluginAuthor.Data.AllocatorInstance.Data;
  lVar6 = (longlong)Metasound::PluginAuthor.Data.ArrayNum;
  local_c8.Flags = Metasound::PluginNodeMissingPrompt.Flags;
  local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.Data.ArrayNum = Metasound::PluginAuthor.Data.ArrayNum;
  if (Metasound::PluginAuthor.Data.ArrayNum == 0) {
    local_118.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,Metasound::PluginAuthor.Data.ArrayNum,0,(ForAnyElementType *)&local_118,
               Metasound::PluginAuthor.Data.ArrayNum,&local_118.Data.ArrayMax);
    memcpy(local_118.Data.AllocatorInstance.Data,_Src.Data,lVar6 * 2);
  }
  pFVar3 = FText::FText(&local_b8);
  pFVar4 = FText::FText(&local_a8);
  ::FName::FName(&local_res20,"Plate Reverb");
  ::FName::FName(&local_res18,"Stereo");
  FVar1 = local_138.Name;
  local_f8.bShowName = (bool)(undefined1)local_138.Name.ComparisonIndex.Value;
  local_f8.bShowInputNames = (bool)local_138.Name.ComparisonIndex.Value._1_1_;
  local_f8.bShowOutputNames = (bool)local_138.Name.ComparisonIndex.Value._2_1_;
  local_f8.bShowLiterals = (bool)local_138.Name.ComparisonIndex.Value._3_1_;
  local_f8.ImageName = local_138.Namespace;
  local_138.Name = FVar1;
  pFVar5 = Metasound::FNodeClassName::FNodeClassName
                     (&local_98,&Metasound::StandardNodes::Namespace,&local_res20,&local_res18);
  local_138.Namespace = pFVar5->Namespace;
  local_138.Name = pFVar5->Name;
  local_138.Variant = pFVar5->Variant;
  Metasound::FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,&local_138,1,0,pFVar4,pFVar3,&local_118,&local_c8,pFVar2,
             &local_108,&local_e8,&local_f8);
  if (local_d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// CreateOperator @ 14b1d9920

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::FPlateReverbOperator::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *pFVar1;
  FOperatorSettings *pFVar2;
  FPlateReverbOperator *this;
  FPlateReverbOperator *pFVar3;
  FName local_res8;
  undefined1 local_198 [32];
  undefined1 local_178 [32];
  undefined1 local_158 [32];
  undefined1 local_138 [32];
  undefined1 local_118 [32];
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&PlateReverb::Inputs::BypassName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (pFVar1,(TDataReadReference<bool> *)local_198,&local_res8,pFVar2);
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&PlateReverb::Inputs::InAudioLeftName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>
            (pFVar1,(TDataReadReference<Metasound::FAudioBuffer> *)local_178,&local_res8,pFVar2);
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&PlateReverb::Inputs::InAudioRightName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>
            (pFVar1,(TDataReadReference<Metasound::FAudioBuffer> *)local_158,&local_res8,pFVar2);
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&PlateReverb::Inputs::DryLevelName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (pFVar1,(TDataReadReference<float> *)local_138,&local_res8,pFVar2);
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&PlateReverb::Inputs::WetLevelName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (pFVar1,(TDataReadReference<float> *)local_118,&local_res8,pFVar2);
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&PlateReverb::Inputs::LateReflectionsDelayName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (pFVar1,(TDataReadReference<float> *)local_f8,&local_res8,pFVar2);
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&PlateReverb::Inputs::LateReflectionsGainDbName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (pFVar1,(TDataReadReference<float> *)local_d8,&local_res8,pFVar2);
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&PlateReverb::Inputs::LateReflectionsBandwidthName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (pFVar1,(TDataReadReference<float> *)local_b8,&local_res8,pFVar2);
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&PlateReverb::Inputs::LateReflectionsDiffusionName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (pFVar1,(TDataReadReference<float> *)local_98,&local_res8,pFVar2);
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&PlateReverb::Inputs::LateReflectionsDampeningName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (pFVar1,(TDataReadReference<float> *)local_78,&local_res8,pFVar2);
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&PlateReverb::Inputs::LateReflectionsDecayName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (pFVar1,(TDataReadReference<float> *)local_58,&local_res8,pFVar2);
  pFVar1 = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&PlateReverb::Inputs::LateReflectionsDensityName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (pFVar1,(TDataReadReference<float> *)local_38,&local_res8,pFVar2);
  this = ::operator_new(0x428);
  pFVar3 = (FPlateReverbOperator *)0x0;
  if (this != (FPlateReverbOperator *)0x0) {
    pFVar3 = FPlateReverbOperator(this,(FBuildOperatorParams *)param_2,(FInputs *)local_198);
  }
  param_1->Node = (INode *)pFVar3;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_38._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_58._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_78._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_98._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_b8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_d8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_f8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_118._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_138._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_158._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_178._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_198._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// Execute @ 14b1de410

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Metasound::FPlateReverbOperator::Execute(FPlateReverbOperator *this)

{
  FLateReflectionsFastSettings *pFVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  longlong lVar5;
  undefined8 *puVar6;
  void *pvVar7;
  float *pfVar8;
  float *pfVar9;
  FScriptContainerElement *pFVar10;
  float *pfVar11;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar12;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  code *pcVar19;
  undefined8 uVar20;
  float fVar21;
  undefined4 uVar22;
  bool bVar23;
  TArrayView<float,int> *pTVar24;
  char cVar25;
  float fVar26;
  float fVar27;
  undefined4 uStack_11c;
  undefined4 uStack_10c;
  TArrayView<float,int> local_108;
  TArrayView<float,int> local_f8;
  TArrayView<float_const_,int> local_e8;
  TArrayView<float_const_,int> local_d8;
  TArrayView<float,int> local_c8;
  TArrayView<float,int> local_b8;
  TArrayView<float,int> local_a8;
  TArrayView<float_const_,int> local_98;
  TArrayView<float,int> local_88;
  TArrayView<float_const_,int> local_78;
  TArrayView<float,int> local_68 [5];
  
  cVar25 = **(char **)&(this->Inputs).Bypass.field_0x8;
  if ((bool)cVar25 != this->WasBypassed) {
    if (cVar25 != '\0') {
      Audio::FLateReflectionsFast::FlushAudio(&this->Reverb);
    }
    pcVar4 = *(char **)&(this->Inputs).Bypass.field_0x8;
    this->WasBypassed = (bool)*pcVar4;
    cVar25 = *pcVar4;
  }
  if (cVar25 != '\0') {
    lVar5 = *(longlong *)&(this->Inputs).AudioLeft.field_0x8;
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar5 + 0x10) != *(int *)(lVar5 + 8))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                  LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    iVar2 = *(int *)(lVar5 + 8);
    puVar6 = *(undefined8 **)&(this->Inputs).AudioLeft.field_0x8;
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar6 + 2) != *(int *)(puVar6 + 1))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pvVar7 = (void *)*puVar6;
    puVar6 = *(undefined8 **)&(this->Outputs).AudioLeft.field_0x8;
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar6 + 2) != *(int *)(puVar6 + 1))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                  __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    memcpy((void *)*puVar6,pvVar7,(longlong)iVar2 << 2);
    lVar5 = *(longlong *)&(this->Inputs).AudioRight.field_0x8;
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar5 + 0x10) != *(int *)(lVar5 + 8))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                  LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    iVar2 = *(int *)(lVar5 + 8);
    puVar6 = *(undefined8 **)&(this->Inputs).AudioRight.field_0x8;
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar6 + 2) != *(int *)(puVar6 + 1))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pvVar7 = (void *)*puVar6;
    puVar6 = *(undefined8 **)&(this->Outputs).AudioRight.field_0x8;
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar6 + 2) != *(int *)(puVar6 + 1))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                  __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    memcpy((void *)*puVar6,pvVar7,(longlong)iVar2 << 2);
    return;
  }
  pTVar24 = TArrayView<float,int>::
            TArrayView<float,int><TArray<float,TAlignedHeapAllocator<16>_>_&,TArray<float,TAlignedHeapAllocator<16>_>_>
                      (local_68,&this->WorkBuffer);
  puVar6 = *(undefined8 **)&(this->Inputs).AudioRight.field_0x8;
  pfVar11 = pTVar24->DataPtr;
  uVar20._0_4_ = pTVar24->ArrayNum;
  uVar20._4_4_ = *(undefined4 *)&pTVar24->field_0xc;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar6 + 2) != *(int *)(puVar6 + 1))) {
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_Metasound::FAudioBuffer::operator_class_TArrayView<float_const_,int>(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pfVar8 = (float *)*puVar6;
  iVar2 = *(int *)(puVar6 + 1);
  if ((iVar2 < 0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar23)) {
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  puVar6 = *(undefined8 **)&(this->Inputs).AudioLeft.field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar6 + 2) != *(int *)(puVar6 + 1))) {
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_Metasound::FAudioBuffer::operator_class_TArrayView<float_const_,int>(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pfVar9 = (float *)*puVar6;
  iVar3 = *(int *)(puVar6 + 1);
  if ((iVar3 < 0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar23)) {
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  local_e8._12_4_ = local_68[0]._12_4_;
  local_e8.ArrayNum = iVar2;
  local_d8._12_4_ = uStack_11c;
  local_d8.ArrayNum = iVar3;
  local_f8.DataPtr = pfVar11;
  local_f8._8_8_ = uVar20;
  local_e8.DataPtr = pfVar8;
  local_d8.DataPtr = pfVar9;
  Audio::ArraySum(&local_d8,&local_e8,&local_f8);
  fVar21 = __real_3f800000;
  fVar27 = this->LastWetLevel;
  fVar26 = **(float **)&(this->Inputs).WetLevel.field_0x8;
  if (__real_3f800000 <= fVar26) {
    fVar26 = __real_3f800000;
  }
  if (fVar26 <= 0.0) {
    fVar26 = 0.0;
  }
  if ((fVar27 < 0.0) ||
     ((float)((uint)(fVar26 - fVar27) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77))
  {
    pFVar10 = (this->WorkBuffer).AllocatorInstance.Data;
    iVar2 = (this->WorkBuffer).ArrayNum;
    if ((iVar2 < 0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar23)) {
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
    local_b8._12_4_ = uStack_10c;
    local_b8.ArrayNum = iVar2;
    local_b8.DataPtr = (float *)pFVar10;
    Audio::ArrayMultiplyByConstantInPlace(&local_b8,fVar26 * __real_3f000000);
  }
  else {
    pTVar24 = TArrayView<float,int>::
              TArrayView<float,int><TArray<float,TAlignedHeapAllocator<16>_>_&,TArray<float,TAlignedHeapAllocator<16>_>_>
                        (&local_108,&this->WorkBuffer);
    local_c8.DataPtr = pTVar24->DataPtr;
    local_c8.ArrayNum = pTVar24->ArrayNum;
    local_c8._12_4_ = *(undefined4 *)&pTVar24->field_0xc;
    Audio::ArrayFade(&local_c8,fVar27 * __real_3f000000,fVar26 * __real_3f000000);
  }
  pfVar11 = *(float **)&(this->Inputs).LateReflectionsDelay.field_0x8;
  pFVar1 = &this->CurrentSettings;
  this->LastWetLevel = fVar26;
  fVar27 = *pfVar11;
  bVar23 = fVar27 != pFVar1->LateDelayMsec;
  if (bVar23) {
    pFVar1->LateDelayMsec = fVar27;
  }
  fVar27 = **(float **)&(this->Inputs).LateReflectionsGainDb.field_0x8;
  bVar14 = fVar27 != (this->CurrentSettings).LateGainDB;
  if (bVar14) {
    (this->CurrentSettings).LateGainDB = fVar27;
  }
  fVar27 = **(float **)&(this->Inputs).LateReflectionsBandwidth.field_0x8;
  bVar15 = fVar27 != (this->CurrentSettings).Bandwidth;
  if (bVar15) {
    (this->CurrentSettings).Bandwidth = fVar27;
  }
  fVar27 = **(float **)&(this->Inputs).LateReflectionsDiffusion.field_0x8;
  bVar16 = fVar27 != (this->CurrentSettings).Diffusion;
  if (bVar16) {
    (this->CurrentSettings).Diffusion = fVar27;
  }
  fVar27 = **(float **)&(this->Inputs).LateReflectionsDampening.field_0x8;
  bVar17 = fVar27 != (this->CurrentSettings).Dampening;
  if (bVar17) {
    (this->CurrentSettings).Dampening = fVar27;
  }
  fVar27 = **(float **)&(this->Inputs).LateReflectionsDecay.field_0x8;
  bVar18 = fVar27 != (this->CurrentSettings).Decay;
  if (bVar18) {
    (this->CurrentSettings).Decay = fVar27;
  }
  fVar27 = **(float **)&(this->Inputs).LateReflectionsDensity.field_0x8;
  if (fVar27 == (this->CurrentSettings).Density) {
    if (!bVar18 && (!bVar17 && (!bVar16 && (!bVar15 && (!bVar14 && !bVar23))))) goto LAB_14b1de8b4;
  }
  else {
    (this->CurrentSettings).Density = fVar27;
  }
  Audio::FLateReflectionsFast::SetSettings(&this->Reverb,pFVar1);
LAB_14b1de8b4:
  pTVar12 = *(TArray<float,TAlignedHeapAllocator<16>_> **)&(this->Outputs).AudioRight.field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (*(int *)&pTVar12[1].AllocatorInstance.Data != pTVar12->ArrayNum)) {
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_Metasound::FAudioBuffer::operator_class_TArray<float,class_TAlignedHeapAllocator<16>_>&___ptr64(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pTVar13 = *(TArray<float,TAlignedHeapAllocator<16>_> **)&(this->Outputs).AudioLeft.field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) &&
     (*(int *)&pTVar13[1].AllocatorInstance.Data != pTVar13->ArrayNum)) {
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_Metasound::FAudioBuffer::operator_class_TArray<float,class_TAlignedHeapAllocator<16>_>&___ptr64(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  Audio::FLateReflectionsFast::ProcessAudio(&this->Reverb,&this->WorkBuffer,1,pTVar13,pTVar12);
  puVar6 = *(undefined8 **)&(this->Outputs).AudioLeft.field_0x8;
  fVar27 = **(float **)&(this->Inputs).DryLevel.field_0x8;
  if (fVar21 <= fVar27) {
    fVar27 = fVar21;
  }
  if (fVar27 <= 0.0) {
    fVar27 = 0.0;
  }
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar6 + 2) != *(int *)(puVar6 + 1))) {
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_Metasound::FAudioBuffer::operator_class_TArrayView<float,int>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pfVar11 = (float *)*puVar6;
  iVar2 = *(int *)(puVar6 + 1);
  if ((iVar2 < 0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar23)) {
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  uVar22 = local_108._12_4_;
  puVar6 = *(undefined8 **)&(this->Inputs).AudioLeft.field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar6 + 2) != *(int *)(puVar6 + 1))) {
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_Metasound::FAudioBuffer::operator_class_TArrayView<float_const_,int>(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pfVar8 = (float *)*puVar6;
  iVar3 = *(int *)(puVar6 + 1);
  if ((iVar3 < 0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar23)) {
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  local_a8._12_4_ = uVar22;
  local_a8.ArrayNum = iVar2;
  local_98._12_4_ = uStack_11c;
  local_98.ArrayNum = iVar3;
  local_a8.DataPtr = pfVar11;
  local_98.DataPtr = pfVar8;
  Audio::ArrayMixIn(&local_98,&local_a8,fVar27);
  puVar6 = *(undefined8 **)&(this->Outputs).AudioRight.field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar6 + 2) != *(int *)(puVar6 + 1))) {
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_Metasound::FAudioBuffer::operator_class_TArrayView<float,int>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pfVar11 = (float *)*puVar6;
  iVar2 = *(int *)(puVar6 + 1);
  if ((iVar2 < 0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar23)) {
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  puVar6 = *(undefined8 **)&(this->Inputs).AudioRight.field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar6 + 2) != *(int *)(puVar6 + 1))) {
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_Metasound::FAudioBuffer::operator_class_TArrayView<float_const_,int>(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pfVar8 = (float *)*puVar6;
  iVar3 = *(int *)(puVar6 + 1);
  if ((iVar3 < 0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar23)) {
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  local_88._12_4_ = local_108._12_4_;
  local_88.ArrayNum = iVar2;
  local_78._12_4_ = uStack_11c;
  local_78.ArrayNum = iVar3;
  local_88.DataPtr = pfVar11;
  local_78.DataPtr = pfVar8;
  Audio::ArrayMixIn(&local_78,&local_88,fVar27);
  return;
}

// GetNodeInfo @ 14b1e3a70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FPlateReverbOperator::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FPlateReverbOperator::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FPlateReverbOperator::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FPlateReverbOperator::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::FPlateReverbOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FPlateReverbOperator::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::FPlateReverbOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FPlateReverbOperator::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FPlateReverbOperator::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FPlateReverbOperator::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// GetVertexInterface @ 14b1e51f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::FPlateReverbOperator::GetVertexInterface(void)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FInputDataVertex *pFVar8;
  FInputDataVertex *pFVar9;
  FInputDataVertex *pFVar10;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar11;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar12;
  FOutputVertexInterface *pFVar13;
  FVertexInterface *pFVar14;
  undefined1 auStackY_3e8 [32];
  bool local_3b8 [4];
  float local_3b4;
  float local_3b0 [2];
  FInputVertexInterface local_3a8;
  FInputVertexInterfaceDeclarationBuilder local_388;
  FInputDataVertex *local_360;
  FInputDataVertex *local_358;
  FInputDataVertex *local_350;
  FInputDataVertex *local_348;
  FInputDataVertex *local_340;
  FOutputVertexInterface local_338;
  TOutputDataVertex<Metasound::FAudioBuffer> local_318;
  TOutputDataVertex<Metasound::FAudioBuffer> local_2f8;
  TInputDataVertex<float> local_2d8;
  TInputDataVertex<float> local_2a0;
  TInputDataVertex<float> local_268;
  TInputDataVertex<float> local_230;
  TInputDataVertex<float> local_1f8;
  TInputDataVertex<float> local_1c0;
  TInputDataVertex<float> local_188;
  TInputDataVertex<float> local_150;
  TInputDataVertex<float> local_118;
  TInputDataVertex<Metasound::FAudioBuffer> local_e0;
  TInputDataVertex<Metasound::FAudioBuffer> local_a8;
  TInputDataVertex<bool> local_70;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_3e8;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar1 + 0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FPlateReverbOperator::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FPlateReverbOperator::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FPlateReverbOperator::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    Audio::FLateReflectionsFastSettings::FLateReflectionsFastSettings
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FPlateReverbOperator::GetVertexInterface(void)'
                ::__l2::Defaults);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FPlateReverbOperator::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*(int *)(lVar1 + 0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FPlateReverbOperator::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FPlateReverbOperator::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FPlateReverbOperator::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    local_3b8[0] = false;
    pFVar4 = (FInputDataVertex *)
             TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                       (&local_70,&PlateReverb::Inputs::BypassName,&FDataVertexMetadata::EmptyBasic,
                        local_3b8);
    pFVar5 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FAudioBuffer>::TInputDataVertex<Metasound::FAudioBuffer><>
                       (&local_a8,&PlateReverb::Inputs::InAudioLeftName,
                        &FDataVertexMetadata::EmptyBasic);
    pFVar6 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FAudioBuffer>::TInputDataVertex<Metasound::FAudioBuffer><>
                       (&local_e0,&PlateReverb::Inputs::InAudioRightName,
                        &FDataVertexMetadata::EmptyBasic);
    local_3b4 = 1.0;
    pFVar7 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_118,&PlateReverb::Inputs::DryLevelName,
                        &FDataVertexMetadata::EmptyBasic,&local_3b4);
    local_3b0[0] = 1.0;
    pFVar8 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_150,&PlateReverb::Inputs::WetLevelName,
                        &FDataVertexMetadata::EmptyBasic,local_3b0);
    pFVar9 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float_const_&>
                       (&local_188,&PlateReverb::Inputs::LateReflectionsDelayName,
                        &FDataVertexMetadata::EmptyAdvanced,
                        &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FPlateReverbOperator::GetVertexInterface(void)'
                         ::__l2::Defaults.LateDelayMsec);
    pFVar10 = (FInputDataVertex *)
              TInputDataVertex<float>::TInputDataVertex<float><float_const_&>
                        (&local_1c0,&PlateReverb::Inputs::LateReflectionsGainDbName,
                         &FDataVertexMetadata::EmptyAdvanced,
                         &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FPlateReverbOperator::GetVertexInterface(void)'
                          ::__l2::Defaults.LateGainDB);
    local_360 = (FInputDataVertex *)
                TInputDataVertex<float>::TInputDataVertex<float><float_const_&>
                          (&local_1f8,&PlateReverb::Inputs::LateReflectionsBandwidthName,
                           &FDataVertexMetadata::EmptyAdvanced,
                           &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FPlateReverbOperator::GetVertexInterface(void)'
                            ::__l2::Defaults.Bandwidth);
    local_358 = (FInputDataVertex *)
                TInputDataVertex<float>::TInputDataVertex<float><float_const_&>
                          (&local_230,&PlateReverb::Inputs::LateReflectionsDiffusionName,
                           &FDataVertexMetadata::EmptyAdvanced,
                           &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FPlateReverbOperator::GetVertexInterface(void)'
                            ::__l2::Defaults.Diffusion);
    local_350 = (FInputDataVertex *)
                TInputDataVertex<float>::TInputDataVertex<float><float_const_&>
                          (&local_268,&PlateReverb::Inputs::LateReflectionsDampeningName,
                           &FDataVertexMetadata::EmptyAdvanced,
                           &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FPlateReverbOperator::GetVertexInterface(void)'
                            ::__l2::Defaults.Dampening);
    local_348 = (FInputDataVertex *)
                TInputDataVertex<float>::TInputDataVertex<float><float_const_&>
                          (&local_2a0,&PlateReverb::Inputs::LateReflectionsDecayName,
                           &FDataVertexMetadata::EmptyAdvanced,
                           &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FPlateReverbOperator::GetVertexInterface(void)'
                            ::__l2::Defaults.Decay);
    local_340 = (FInputDataVertex *)
                TInputDataVertex<float>::TInputDataVertex<float><float_const_&>
                          (&local_2d8,&PlateReverb::Inputs::LateReflectionsDensityName,
                           &FDataVertexMetadata::EmptyAdvanced,
                           &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FPlateReverbOperator::GetVertexInterface(void)'
                            ::__l2::Defaults.Density);
    local_3a8._padding_ = 0;
    local_3a8._padding_ = 0;
    local_3a8.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3a8.SubInterfaces.ArrayNum = 0;
    local_3a8.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_388,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_3a8,
               &local_3a8.SubInterfaces);
    if ((local_388.Vertices)->ArrayMax < 0xc) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0xc,&(local_388.Vertices)->AllocatorInstance,(local_388.Vertices)->ArrayNum,
                 &(local_388.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_388,pFVar4);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_388,pFVar5);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_388,pFVar6);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_388,pFVar7);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_388,pFVar8);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_388,pFVar9);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_388,pFVar10);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_388,local_360);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_388,local_358);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_388,local_350);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_388,local_348);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_388,local_340);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_388);
    pTVar11 = TOutputDataVertex<Metasound::FAudioBuffer>::
              TOutputDataVertex<Metasound::FAudioBuffer><>
                        (&local_318,&PlateReverb::Outputs::OutAudioLeftName,
                         &FDataVertexMetadata::EmptyBasic);
    pTVar12 = TOutputDataVertex<Metasound::FAudioBuffer>::
              TOutputDataVertex<Metasound::FAudioBuffer><>
                        (&local_2f8,&PlateReverb::Outputs::OutAudioRightName,
                         &FDataVertexMetadata::EmptyBasic);
    pFVar13 = FOutputVertexInterface::
              FOutputVertexInterface<Metasound::TOutputDataVertex<Metasound::FAudioBuffer>,Metasound::TOutputDataVertex<Metasound::FAudioBuffer>_>
                        (&local_338,pTVar11,pTVar12);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FPlateReverbOperator::GetVertexInterface(void)'
                ::__l2::Interface,&local_3a8,pFVar13);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_338.SubInterfaces.AllocatorInstance.Data,
               local_338.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_338.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_338.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_338._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_338._padding_);
    }
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_3a8.SubInterfaces.AllocatorInstance.Data,
               local_3a8.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_3a8.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_3a8.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_3a8._padding_,(int)local_3a8._padding_);
    if ((FInputDataVertex *)local_3a8._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_3a8._padding_);
    }
    if ((0xc < (byte)local_2d8._48_1_) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar2)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_2d8._48_1_])(&local_2d8.field_0x20);
    if ((0xc < (byte)local_2a0._48_1_) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar2)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_2a0._48_1_])(&local_2a0.field_0x20);
    if ((0xc < (byte)local_268._48_1_) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar2)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_268._48_1_])(&local_268.field_0x20);
    if ((0xc < (byte)local_230._48_1_) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar2)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_230._48_1_])(&local_230.field_0x20);
    if ((0xc < (byte)local_1f8._48_1_) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar2)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_1f8._48_1_])(&local_1f8.field_0x20);
    if ((0xc < (byte)local_1c0._48_1_) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar2)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_1c0._48_1_])(&local_1c0.field_0x20);
    if ((0xc < (byte)local_188._48_1_) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar2)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_188._48_1_])(&local_188.field_0x20);
    if ((0xc < (byte)local_150._48_1_) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar2)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_150._48_1_])(&local_150.field_0x20);
    if ((0xc < (byte)local_118._48_1_) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar2)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_118._48_1_])(&local_118.field_0x20);
    if ((0xc < (byte)local_e0._48_1_) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar2)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_e0._48_1_])(&local_e0.field_0x20);
    if ((0xc < (byte)local_a8._48_1_) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar2)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_a8._48_1_])(&local_a8.field_0x20);
    if ((0xc < (byte)local_70._48_1_) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar2)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_70._48_1_])(&local_70.field_0x20);
    atexit(`Metasound::FPlateReverbOperator::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__Interface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FPlateReverbOperator::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FPlateReverbOperator::GetVertexInterface(void)'
          ::__l2::Interface;
}

// Reset @ 14b1e9d20

void __thiscall
Metasound::FPlateReverbOperator::Reset(FPlateReverbOperator *this,FResetParams *param_1)

{
  int *piVar1;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar2;
  FScriptContainerElement *_Dst;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  
  pTVar2 = &this->WorkBuffer;
  iVar6 = (this->WorkBuffer).ArrayNum;
  piVar1 = &(this->WorkBuffer).ArrayNum;
  uVar3 = param_1->OperatorSettings->NumFramesPerBlock;
  if (iVar6 < (int)uVar3) {
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,uVar3 - iVar6,&pTVar2->AllocatorInstance,piVar1,&(this->WorkBuffer).ArrayMax);
  }
  else {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    if ((int)uVar3 < iVar6) {
      uVar7 = iVar6 - uVar3;
      if (((int)(uVar7 | uVar3) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar7 != 0) {
        _Dst = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar3 * 4;
        iVar6 = (*piVar1 - uVar3) - uVar7;
        if (iVar6 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar7 * 4,(longlong)iVar6 << 2);
        }
        *piVar1 = *piVar1 - uVar7;
        UE::Core::Private::ReallocShrink<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,&pTVar2->AllocatorInstance,*piVar1,&(this->WorkBuffer).ArrayMax);
      }
    }
  }
  Audio::FLateReflectionsFast::FlushAudio(&this->Reverb);
  return;
}

