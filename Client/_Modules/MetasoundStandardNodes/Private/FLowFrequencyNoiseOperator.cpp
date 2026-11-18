// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 11

// BindInputs @ 14b097460

void __thiscall
Metasound::FLowFrequencyNoiseOperator::BindInputs
          (FLowFrequencyNoiseOperator *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  FPinReadRefs *local_res18;
  undefined1 local_58 [16];
  code *local_48;
  FPinReadRefs **local_40;
  undefined1 local_38 [16];
  
  FLazyName::Resolve(&LowFrequencyNoiseVertexNames::RatePinName);
  local_40 = &local_res18;
  local_res18 = &this->Pins;
  local_58._0_8_ = &local_res8;
  local_38._8_8_ = local_58;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_58._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&LowFrequencyNoiseVertexNames::RateJitterPinName);
  local_res18 = (FPinReadRefs *)&(this->Pins).RateJitter;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_40 = &local_res18;
  local_38._0_8_ = &local_res8;
  local_58._8_8_ = local_38;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&LowFrequencyNoiseVertexNames::StepLimitPinName);
  local_res18 = (FPinReadRefs *)&(this->Pins).StepLimit;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_40 = &local_res18;
  local_38._0_8_ = &local_res8;
  local_58._8_8_ = local_38;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&LowFrequencyNoiseVertexNames::SeedPinName);
  local_res18 = (FPinReadRefs *)&(this->Pins).Seed;
  local_40 = &local_res18;
  local_58._8_8_ = local_38;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._0_8_ = &local_res8;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&LowFrequencyNoiseVertexNames::ResetSeedPinName);
  local_res18 = (FPinReadRefs *)&(this->Pins).ResetSeed;
  local_40 = &local_res18;
  local_38._0_8_ = &local_res8;
  local_58._8_8_ = local_38;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&LowFrequencyNoiseVertexNames::SyncPinName);
  local_res18 = (FPinReadRefs *)&(this->Pins).Sync;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_40 = &local_res18;
  local_38._0_8_ = &local_res8;
  local_58._8_8_ = local_38;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&LowFrequencyNoiseVertexNames::InterpTypePinName);
  local_res18 = (FPinReadRefs *)&(this->Pins).InterpType;
  local_40 = &local_res18;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_58._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&LowFrequencyNoiseVertexNames::MinOutputValuePinName);
  local_res18 = (FPinReadRefs *)&(this->Pins).MinOutput;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_40 = &local_res18;
  local_38._0_8_ = &local_res8;
  local_58._8_8_ = local_38;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&LowFrequencyNoiseVertexNames::MaxOutputValuePinName);
  local_res18 = (FPinReadRefs *)&(this->Pins).MaxOutput;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_40 = &local_res18;
  local_38._0_8_ = &local_res8;
  local_58._8_8_ = local_38;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  return;
}

// BindOutputs @ 14b0977c0

void __thiscall
Metasound::FLowFrequencyNoiseOperator::BindOutputs
          (FLowFrequencyNoiseOperator *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<float> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataWriteReference<float> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&LowFrequencyNoiseVertexNames::ScaledOutputPinName);
  local_res18 = &this->ScaledOutput;
  local_30 = &local_res18;
  local_48._0_8_ = &local_res8;
  local_28._8_8_ = local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<float>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_48._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_28,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_38
            );
  FLazyName::Resolve(&LowFrequencyNoiseVertexNames::NormalizedOutputPinName);
  local_res18 = &this->NormalizedOutput;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<float>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_38
            );
  return;
}

// FLowFrequencyNoiseOperator @ 14b0b4a40

FLowFrequencyNoiseOperator * __thiscall
Metasound::FLowFrequencyNoiseOperator::FLowFrequencyNoiseOperator
          (FLowFrequencyNoiseOperator *this,FBuildOperatorParams *param_1,FPinReadRefs *param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  FLowFrequencyNoiseOperator *pFVar5;
  float fVar6;
  
  this->_padding_ = (longlong)&___7FLowFrequencyNoiseOperator_Metasound__6B_;
  fVar6 = FOperatorSettings::GetActualBlockRate(param_1->OperatorSettings);
  this->BlockRate = fVar6;
  this->Phase = 0.0;
  this->CurrentRandomRate = 0.0;
  this->CurrentRate = 0.0;
  this->CurrentSeed = 0;
  (this->Values).Values[0] = 0.0;
  (this->Values).Values[1] = 0.0;
  (this->Values).Values[2] = 0.0;
  (this->Values).Values[3] = 0.0;
  (this->RandomStream).InitialSeed = 0;
  (this->RandomStream).Seed = 0;
  (this->RandomJitter).InitialSeed = 0;
  (this->RandomJitter).Seed = 0;
  FPinReadRefs::FPinReadRefs(&this->Pins,param_2);
  *(undefined ***)&this->ScaledOutput = &___7__TDataReference_M_Metasound__6B_;
  puVar4 = ::operator_new(0x18);
  if (puVar4 == (undefined8 *)0x0) {
    *(undefined8 *)&(this->ScaledOutput).field_0x8 = 0x10;
    *(undefined8 *)&(this->ScaledOutput).field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar4 + 1) = 1;
    *(undefined8 *)((longlong)puVar4 + 0xc) = 1;
    *puVar4 = &___7__TIntrusiveReferenceController_M_0A__SharedPointerInternals__6B_;
    *(undefined8 **)&(this->ScaledOutput).field_0x8 = puVar4 + 2;
    *(undefined8 **)&(this->ScaledOutput).field_0x10 = puVar4;
    if (puVar4 + 2 == (undefined8 *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FLowFrequencyNoiseOperator *)(*pcVar2)();
        return pFVar5;
      }
    }
  }
  *(undefined ***)&this->ScaledOutput = &___7__TDataWriteReference_M_Metasound__6B_;
  *(undefined ***)&this->NormalizedOutput = &___7__TDataReference_M_Metasound__6B_;
  puVar4 = ::operator_new(0x18);
  if (puVar4 == (undefined8 *)0x0) {
    *(undefined8 *)&(this->NormalizedOutput).field_0x8 = 0x10;
    *(undefined8 *)&(this->NormalizedOutput).field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar4 + 1) = 1;
    *(undefined8 *)((longlong)puVar4 + 0xc) = 1;
    *puVar4 = &___7__TIntrusiveReferenceController_M_0A__SharedPointerInternals__6B_;
    *(undefined8 **)&(this->NormalizedOutput).field_0x8 = puVar4 + 2;
    *(undefined8 **)&(this->NormalizedOutput).field_0x10 = puVar4;
    if (puVar4 + 2 == (undefined8 *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FLowFrequencyNoiseOperator *)(*pcVar2)();
        return pFVar5;
      }
    }
  }
  *(undefined ***)&this->NormalizedOutput = &___7__TDataWriteReference_M_Metasound__6B_;
  puVar1 = *(undefined4 **)&(this->ScaledOutput).field_0x8;
  this->Phase = 0.0;
  *puVar1 = 0;
  **(undefined4 **)&(this->NormalizedOutput).field_0x8 = 0;
  SetSeedAndFillValues(this);
  return this;
}

// operator() @ 14b0bd0c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::FLowFrequencyNoiseOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  ITextData *pIVar3;
  TRefCountPtr<ITextData> TVar4;
  int iVar5;
  FText *pFVar6;
  FVertexInterface *pFVar7;
  FScriptContainerElement *pFVar8;
  FName local_res10;
  FNodeClassName local_28;
  
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_res10,L"Lfo Frequency Noise");
  Metasound::FNodeClassName::FNodeClassName
            (&local_28,&Metasound::StandardNodes::Namespace,&local_res10,
             &Metasound::StandardNodes::AudioVariant);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_28.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_28.Name;
  (__return_storage_ptr__->ClassName).Variant = local_28.Variant;
  pFVar6 = FText::FText((FText *)&local_28);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar6);
  if (local_28.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_28.Namespace + 0x10))();
  }
  pFVar6 = FText::FText((FText *)&local_28);
  FText::operator=(&__return_storage_ptr__->Description,pFVar6);
  if (local_28.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_28.Namespace + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar4 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar3 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar3 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar4.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar4.Reference + 8))(TVar4.Reference,&local_res10);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar7 = Metasound::FLowFrequencyNoiseOperator::GetVertexInterface();
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar7);
  pTVar1 = &__return_storage_ptr__->CategoryHierarchy;
  iVar5 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  if (iVar5 == (__return_storage_ptr__->CategoryHierarchy).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,
                       &(__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  }
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar5 + 1;
  pFVar8 = (pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(undefined8 *)pFVar8 = 0;
  TVar4 = Metasound::NodeCategories::Generators.TextData;
  *(ITextData **)pFVar8 = Metasound::NodeCategories::Generators.TextData.Reference;
  if (TVar4.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar4.Reference + 8))(TVar4.Reference,&local_res10);
  }
  *(uint *)(pFVar8 + 8) = Metasound::NodeCategories::Generators.Flags;
  iVar5 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  if (iVar5 == (__return_storage_ptr__->CategoryHierarchy).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,
                       &(__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  }
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar5 + 1;
  pFVar8 = (pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(undefined8 *)pFVar8 = 0;
  TVar4 = Metasound::NodeCategories::RandomUtils.TextData;
  *(ITextData **)pFVar8 = Metasound::NodeCategories::RandomUtils.TextData.Reference;
  if (TVar4.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar4.Reference + 8))(TVar4.Reference,&local_res10);
  }
  *(uint *)(pFVar8 + 8) = Metasound::NodeCategories::RandomUtils.Flags;
  pFVar6 = FText::FText((FText *)&local_28);
  piVar2 = &(__return_storage_ptr__->Keywords).ArrayMax;
  iVar5 = (__return_storage_ptr__->Keywords).ArrayNum;
  if (iVar5 == *piVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(__return_storage_ptr__->Keywords).AllocatorInstance,piVar2);
  }
  (__return_storage_ptr__->Keywords).ArrayNum = iVar5 + 1;
  FText::FText((FText *)((__return_storage_ptr__->Keywords).AllocatorInstance.Data +
                        (longlong)iVar5 * 0x10),pFVar6);
  if (local_28.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_28.Namespace + 0x10))();
  }
  return __return_storage_ptr__;
}

// CreateOperator @ 14b0cd5d0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::FLowFrequencyNoiseOperator::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  FInputVertexInterfaceData *this;
  FLowFrequencyNoiseOperator *this_00;
  FLowFrequencyNoiseOperator *pFVar2;
  FName local_res8;
  undefined1 local_138 [32];
  undefined1 local_118 [32];
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&LowFrequencyNoiseVertexNames::RatePinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_138,&local_res8,pFVar1);
  FLazyName::Resolve(&LowFrequencyNoiseVertexNames::RateJitterPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_118,&local_res8,pFVar1);
  FLazyName::Resolve(&LowFrequencyNoiseVertexNames::StepLimitPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_f8,&local_res8,pFVar1);
  FLazyName::Resolve(&LowFrequencyNoiseVertexNames::SeedPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_d8,&local_res8,pFVar1);
  FLazyName::Resolve(&LowFrequencyNoiseVertexNames::InterpTypePinName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
            (this,(TDataReadReference<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>
                   *)local_b8,&local_res8,pFVar1);
  FLazyName::Resolve(&LowFrequencyNoiseVertexNames::ResetSeedPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_98,&local_res8,pFVar1);
  FLazyName::Resolve(&LowFrequencyNoiseVertexNames::SyncPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_78,&local_res8,pFVar1);
  FLazyName::Resolve(&LowFrequencyNoiseVertexNames::MinOutputValuePinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_58,&local_res8,pFVar1);
  FLazyName::Resolve(&LowFrequencyNoiseVertexNames::MaxOutputValuePinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_38,&local_res8,pFVar1);
  this_00 = ::operator_new(0x1a0);
  pFVar2 = (FLowFrequencyNoiseOperator *)0x0;
  if (this_00 != (FLowFrequencyNoiseOperator *)0x0) {
    pFVar2 = FLowFrequencyNoiseOperator
                       (this_00,(FBuildOperatorParams *)param_2,(FPinReadRefs *)local_138);
  }
  param_1->Node = (INode *)pFVar2;
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
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// Execute @ 14b0d3820

void __thiscall Metasound::FLowFrequencyNoiseOperator::Execute(FLowFrequencyNoiseOperator *this)

{
  FValueFIFO *this_00;
  int iVar1;
  float *pfVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar10 = __real_3f000000;
  fVar4 = __real_3f800000;
  pfVar7 = *(float **)&(this->Pins).Rate.field_0x8;
  fVar12 = *pfVar7;
  if (__real_322bcc77 <
      (float)((uint)(this->CurrentRate - fVar12) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    pfVar2 = *(float **)&(this->Pins).RateJitter.field_0x8;
    this->CurrentRate = fVar12;
    fVar13 = this->BlockRate * fVar10;
    uVar6 = (this->RandomJitter).Seed * 0xbb38435 + 0x3619636b;
    (this->RandomJitter).Seed = uVar6;
    fVar12 = *pfVar7;
    fVar11 = *pfVar2;
    if (fVar4 <= fVar11) {
      fVar11 = fVar4;
    }
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    fVar8 = fVar12 - fVar12 * fVar11;
    fVar12 = (fVar11 + fVar4) * fVar12;
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    if (fVar13 <= fVar12) {
      fVar12 = fVar13;
    }
    this->CurrentRandomRate = (fVar12 - fVar8) * ((float)(uVar6 >> 9 | 0x3f800000) - fVar4) + fVar8;
  }
  bVar5 = FTrigger::IsTriggeredInBlock(*(FTrigger **)&(this->Pins).Sync.field_0x8);
  if (bVar5) {
    this->Phase = 0.0;
  }
  if ((this->CurrentSeed != **(int **)&(this->Pins).Seed.field_0x8) ||
     (bVar5 = FTrigger::IsTriggeredInBlock(*(FTrigger **)&(this->Pins).ResetSeed.field_0x8), bVar5))
  {
    SetSeedAndFillValues(this);
  }
  pfVar7 = &this->Phase;
  fVar12 = *pfVar7;
  this_00 = &this->Values;
  if (fVar4 < fVar12) {
    uVar6 = (this->RandomStream).Seed * 0xbb38435 + 0x3619636b;
    (this->RandomStream).Seed = uVar6;
    fVar12 = (this->Values).Values[2];
    fVar11 = **(float **)&(this->Pins).StepLimit.field_0x8;
    if (fVar4 <= fVar11) {
      fVar11 = fVar4;
    }
    this_00->Values[0] = (this->Values).Values[1];
    (this->Values).Values[1] = (this->Values).Values[2];
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    (this->Values).Values[2] = (this->Values).Values[3];
    fVar13 = fVar12 - fVar11;
    fVar11 = fVar11 + fVar12;
    if (fVar13 <= 0.0) {
      fVar13 = 0.0;
    }
    if (fVar4 <= fVar11) {
      fVar11 = fVar4;
    }
    (this->Values).Values[3] =
         (fVar11 - fVar13) * ((float)(uVar6 >> 9 | 0x3f800000) - fVar4) + fVar13;
    *pfVar7 = *pfVar7 - fVar4;
    fVar11 = GenerateRandomRate(this);
    fVar12 = *pfVar7;
    this->CurrentRandomRate = fVar11;
  }
  iVar1 = **(int **)&(this->Pins).InterpType.field_0x8;
  if (iVar1 == 0) {
    fVar11 = FValueFIFO::GetValue(this_00,0);
  }
  else if (iVar1 == 1) {
    fVar12 = FValueFIFO::GetValue(this_00,1);
    fVar11 = FValueFIFO::GetValue(this_00,0);
    fVar11 = (fVar12 - fVar11) * *pfVar7 + fVar11;
  }
  else {
    fVar13 = (this->Values).Values[0];
    fVar11 = (this->Values).Values[1];
    fVar8 = (this->Values).Values[2];
    fVar9 = (((this->Values).Values[3] - fVar8) - fVar13) + fVar11;
    fVar11 = (((fVar13 - fVar11) - fVar9) + fVar12 * fVar9) * fVar12 * fVar12 +
             (fVar8 - fVar13) * fVar12 + fVar11;
  }
  **(float **)&(this->NormalizedOutput).field_0x8 = fVar11;
  if (fVar4 <= fVar11) {
    fVar11 = fVar4;
  }
  fVar12 = **(float **)&(this->Pins).MinOutput.field_0x8;
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  **(float **)&(this->ScaledOutput).field_0x8 =
       (**(float **)&(this->Pins).MaxOutput.field_0x8 - fVar12) * fVar11 + fVar12;
  if ((this->BlockRate <= 0.0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("BlockRate > 0.f",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundLowFrequencyNoise.cpp"
                         ,0x16e,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  fVar10 = this->BlockRate * fVar10;
  if (this->CurrentRandomRate <= fVar10) {
    fVar10 = this->CurrentRandomRate;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  this->Phase = fVar10 / this->BlockRate + this->Phase;
  return;
}

// GenerateRandomRate @ 14b0d51e0

float __thiscall
Metasound::FLowFrequencyNoiseOperator::GenerateRandomRate(FLowFrequencyNoiseOperator *this)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = this->BlockRate * __real_3f000000;
  uVar1 = (this->RandomJitter).Seed * 0xbb38435 + 0x3619636b;
  (this->RandomJitter).Seed = uVar1;
  fVar3 = **(float **)&(this->Pins).RateJitter.field_0x8;
  if (__real_3f800000 <= fVar3) {
    fVar3 = __real_3f800000;
  }
  fVar4 = **(float **)&(this->Pins).Rate.field_0x8;
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  fVar2 = fVar4 - fVar4 * fVar3;
  fVar4 = (fVar3 + __real_3f800000) * fVar4;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  if (fVar5 <= fVar4) {
    fVar4 = fVar5;
  }
  return (fVar4 - fVar2) * ((float)(uVar1 >> 9 | 0x3f800000) - __real_3f800000) + fVar2;
}

// GetNodeInfo @ 14b0d9ac0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FLowFrequencyNoiseOperator::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FLowFrequencyNoiseOperator::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FLowFrequencyNoiseOperator::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FLowFrequencyNoiseOperator::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::FLowFrequencyNoiseOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FLowFrequencyNoiseOperator::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::FLowFrequencyNoiseOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FLowFrequencyNoiseOperator::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FLowFrequencyNoiseOperator::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FLowFrequencyNoiseOperator::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetVertexInterface @ 14b0e1ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::FLowFrequencyNoiseOperator::GetVertexInterface(void)

{
  code *pcVar1;
  bool bVar2;
  FInputDataVertex *pFVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FInputDataVertex *pFVar8;
  FInputDataVertex *pFVar9;
  TOutputDataVertex<float> *pTVar10;
  TOutputDataVertex<float> *pTVar11;
  FVertexInterface *pFVar12;
  undefined1 auStackY_358 [32];
  float local_328;
  int local_324 [2];
  float local_31c;
  float local_318;
  float local_314;
  float local_310 [2];
  FInputVertexInterface local_308;
  FInputVertexInterfaceDeclarationBuilder local_2e8;
  FInputDataVertex *local_2c0;
  FInputDataVertex *local_2b8;
  FOutputVertexInterface local_2b0;
  FOutputVertexInterfaceDeclarationBuilder local_290;
  TOutputDataVertex<float> local_268;
  TOutputDataVertex<float> local_248;
  TInputDataVertex<float> local_228;
  TInputDataVertex<float> local_1f0;
  TInputDataVertex<float> local_1b8;
  TInputDataVertex<float> local_180;
  undefined1 local_148 [32];
  undefined1 local_128 [16];
  byte local_118;
  TInputDataVertex<Metasound::FTrigger> local_110;
  TInputDataVertex<Metasound::FTrigger> local_d8;
  TInputDataVertex<int> local_a0;
  TInputDataVertex<float> local_68;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_358;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FLowFrequencyNoiseOperator::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FLowFrequencyNoiseOperator::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FLowFrequencyNoiseOperator::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    local_328 = 5.0;
    pFVar3 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_68,&LowFrequencyNoiseVertexNames::RatePinName,
                        &FDataVertexMetadata::EmptyBasic,&local_328);
    local_324[0] = -1;
    pFVar4 = (FInputDataVertex *)
             TInputDataVertex<int>::TInputDataVertex<int><int>
                       (&local_a0,&LowFrequencyNoiseVertexNames::SeedPinName,
                        &FDataVertexMetadata::EmptyBasic,local_324);
    pFVar5 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                       (&local_d8,&LowFrequencyNoiseVertexNames::ResetSeedPinName,
                        &FDataVertexMetadata::EmptyBasic);
    pFVar6 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                       (&local_110,&LowFrequencyNoiseVertexNames::SyncPinName,
                        &FDataVertexMetadata::EmptyBasic);
    local_324[1] = 2;
    pFVar7 = (FInputDataVertex *)
             TInputDataVertex<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
             TInputDataVertex<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_><int>
                       (local_148,&LowFrequencyNoiseVertexNames::InterpTypePinName,
                        &FDataVertexMetadata::EmptyBasic,local_324 + 1);
    local_31c = 0.0;
    pFVar8 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_180,&LowFrequencyNoiseVertexNames::RateJitterPinName,
                        &FDataVertexMetadata::EmptyBasic,&local_31c);
    local_318 = 1.0;
    pFVar9 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_1b8,&LowFrequencyNoiseVertexNames::StepLimitPinName,
                        &FDataVertexMetadata::EmptyBasic,&local_318);
    local_314 = 0.0;
    local_2c0 = (FInputDataVertex *)
                TInputDataVertex<float>::TInputDataVertex<float><float>
                          (&local_1f0,&LowFrequencyNoiseVertexNames::MinOutputValuePinName,
                           &FDataVertexMetadata::EmptyBasic,&local_314);
    local_310[0] = 1.0;
    local_2b8 = (FInputDataVertex *)
                TInputDataVertex<float>::TInputDataVertex<float><float>
                          (&local_228,&LowFrequencyNoiseVertexNames::MaxOutputValuePinName,
                           &FDataVertexMetadata::EmptyBasic,local_310);
    local_308._padding_ = 0;
    local_308._padding_ = 0;
    local_308.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_308.SubInterfaces.ArrayNum = 0;
    local_308.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_2e8,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_308,
               &local_308.SubInterfaces);
    if ((local_2e8.Vertices)->ArrayMax < 9) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,9,&(local_2e8.Vertices)->AllocatorInstance,(local_2e8.Vertices)->ArrayNum,
                 &(local_2e8.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_2e8,pFVar3);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_2e8,pFVar4);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_2e8,pFVar5);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_2e8,pFVar6);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_2e8,pFVar7);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_2e8,pFVar8);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_2e8,pFVar9);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_2e8,local_2c0);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_2e8,local_2b8);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_2e8);
    pTVar10 = TOutputDataVertex<float>::TOutputDataVertex<float><>
                        (&local_268,&LowFrequencyNoiseVertexNames::ScaledOutputPinName,
                         &FDataVertexMetadata::EmptyBasic);
    pTVar11 = TOutputDataVertex<float>::TOutputDataVertex<float><>
                        (&local_248,&LowFrequencyNoiseVertexNames::NormalizedOutputPinName,
                         &FDataVertexMetadata::EmptyBasic);
    FOutputVertexInterface::FOutputVertexInterface(&local_2b0);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_290,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_2b0,
               &local_2b0.SubInterfaces);
    if ((local_290.Vertices)->ArrayMax < 2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,&(local_290.Vertices)->AllocatorInstance,(local_290.Vertices)->ArrayNum,
                 &(local_290.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_290,(FOutputDataVertex *)pTVar10);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_290,(FOutputDataVertex *)pTVar11);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_290);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FLowFrequencyNoiseOperator::GetVertexInterface(void)'
                ::__l2::Interface,&local_308,&local_2b0);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_2b0.SubInterfaces.AllocatorInstance.Data,
               local_2b0.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_2b0.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_2b0.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_2b0._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_2b0._padding_);
    }
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_308.SubInterfaces.AllocatorInstance.Data,
               local_308.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_308.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_308.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_308._padding_,(int)local_308._padding_);
    if ((FInputDataVertex *)local_308._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_308._padding_);
    }
    if ((0xc < (byte)local_228._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_228._48_1_])(&local_228.field_0x20);
    if ((0xc < (byte)local_1f0._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_1f0._48_1_])(&local_1f0.field_0x20);
    if ((0xc < (byte)local_1b8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_1b8._48_1_])(&local_1b8.field_0x20);
    if ((0xc < (byte)local_180._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_180._48_1_])(&local_180.field_0x20);
    if ((0xc < local_118) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_118])(local_128);
    if ((0xc < (byte)local_110._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_110._48_1_])(&local_110.field_0x20);
    if ((0xc < (byte)local_d8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_d8._48_1_])(&local_d8.field_0x20);
    if ((0xc < (byte)local_a0._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_a0._48_1_])(&local_a0.field_0x20);
    if ((0xc < (byte)local_68._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_68._48_1_])(&local_68.field_0x20);
    atexit(`Metasound::FLowFrequencyNoiseOperator::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__Interface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FLowFrequencyNoiseOperator::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FLowFrequencyNoiseOperator::GetVertexInterface(void)'
          ::__l2::Interface;
}

// Reset @ 14b0e56c0

void __thiscall
Metasound::FLowFrequencyNoiseOperator::Reset(FLowFrequencyNoiseOperator *this,FResetParams *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)&(this->ScaledOutput).field_0x8;
  this->Phase = 0.0;
  *puVar1 = 0;
  **(undefined4 **)&(this->NormalizedOutput).field_0x8 = 0;
  SetSeedAndFillValues(this);
  return;
}

// SetSeedAndFillValues @ 14b0e7290

void __thiscall
Metasound::FLowFrequencyNoiseOperator::SetSeedAndFillValues(FLowFrequencyNoiseOperator *this)

{
  float *pfVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  uVar4 = **(uint **)&(this->Pins).Seed.field_0x8;
  if (uVar4 == 0xffffffff) {
    uVar3 = rand();
    (this->RandomStream).InitialSeed = uVar3;
    (this->RandomStream).Seed = uVar3;
    uVar3 = rand();
  }
  else {
    (this->RandomStream).InitialSeed = uVar4;
    (this->RandomStream).Seed = uVar4;
    uVar3 = uVar4;
  }
  (this->RandomJitter).InitialSeed = uVar3;
  lVar5 = 4;
  (this->RandomJitter).Seed = uVar3;
  fVar2 = __real_3f800000;
  this->CurrentSeed = uVar4;
  do {
    uVar4 = (this->RandomStream).Seed * 0xbb38435 + 0x3619636b;
    (this->RandomStream).Seed = uVar4;
    fVar8 = (this->Values).Values[2];
    fVar9 = **(float **)&(this->Pins).StepLimit.field_0x8;
    fVar6 = (this->Values).Values[1];
    if (fVar2 <= fVar9) {
      fVar9 = fVar2;
    }
    (this->Values).Values[1] = fVar8;
    (this->Values).Values[0] = fVar6;
    (this->Values).Values[2] = (this->Values).Values[3];
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    fVar6 = fVar8 - fVar9;
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    fVar7 = fVar9 + fVar8;
    if (fVar2 <= fVar9 + fVar8) {
      fVar7 = fVar2;
    }
    (this->Values).Values[3] = (fVar7 - fVar6) * ((float)(uVar4 >> 9 | 0x3f800000) - fVar2) + fVar6;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  pfVar1 = *(float **)&(this->Pins).RateJitter.field_0x8;
  uVar4 = (this->RandomJitter).Seed * 0xbb38435 + 0x3619636b;
  (this->RandomJitter).Seed = uVar4;
  fVar8 = *pfVar1;
  if (fVar2 <= fVar8) {
    fVar8 = fVar2;
  }
  fVar9 = **(float **)&(this->Pins).Rate.field_0x8;
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  fVar7 = fVar9 - fVar9 * fVar8;
  fVar6 = this->BlockRate * __real_3f000000;
  fVar9 = (fVar8 + fVar2) * fVar9;
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  if (fVar6 <= fVar9) {
    fVar9 = fVar6;
  }
  this->CurrentRandomRate = (fVar9 - fVar7) * ((float)(uVar4 >> 9 | 0x3f800000) - fVar2) + fVar7;
  return;
}

