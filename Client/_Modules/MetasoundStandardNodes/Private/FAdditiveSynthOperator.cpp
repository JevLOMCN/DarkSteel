// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 9

// BindInputs @ 14afc2580

void __thiscall
Metasound::FAdditiveSynthOperator::BindInputs
          (FAdditiveSynthOperator *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<float> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<float> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&AdditiveSynthVertexNames::BaseFrequencyName);
  local_res18 = &this->BaseFrequency;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_28._8_8_ = local_48;
  local_48._0_8_ = &local_res8;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_48._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_28,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&AdditiveSynthVertexNames::HarmonicMultipliersName);
  local_res18 = (TDataReadReference<float> *)&this->HarmonicMultipliers;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<float,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&AdditiveSynthVertexNames::AmplitudesName);
  local_res18 = (TDataReadReference<float> *)&this->Amplitudes;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<float,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&AdditiveSynthVertexNames::PhasesName);
  local_res18 = (TDataReadReference<float> *)&this->Phases;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<float,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&AdditiveSynthVertexNames::PanAmountsName);
  local_res18 = (TDataReadReference<float> *)&this->PanAmounts;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<float,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  return;
}

// BindOutputs @ 14afc27d0

void __thiscall
Metasound::FAdditiveSynthOperator::BindOutputs
          (FAdditiveSynthOperator *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FAudioBuffer> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataWriteReference<Metasound::FAudioBuffer> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&AdditiveSynthVertexNames::LeftAudioOutName);
  local_res18 = &this->LeftAudioOut;
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
  FLazyName::Resolve(&AdditiveSynthVertexNames::RightAudioOutName);
  local_res18 = &this->RightAudioOut;
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

// operator() @ 14b002420

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::FAdditiveSynthOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  ITextData *pIVar2;
  TRefCountPtr<ITextData> TVar3;
  int iVar4;
  FVertexInterface *pFVar5;
  FScriptContainerElement *pFVar6;
  FName local_res10;
  FName local_res18;
  FText local_48;
  FText local_38;
  FNodeClassName local_28;
  
  ::FName::FName(&local_res18,"Additive Synth");
  FText::FText(&local_38);
  FText::FText(&local_48);
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  Metasound::FNodeClassName::FNodeClassName
            (&local_28,&Metasound::StandardNodes::Namespace,&local_res18,&local_res10);
  (__return_storage_ptr__->ClassName).Namespace.ComparisonIndex.Value =
       local_28.Namespace.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Namespace.Number = local_28.Namespace.Number;
  (__return_storage_ptr__->ClassName).Name.ComparisonIndex.Value =
       local_28.Name.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Name.Number = local_28.Name.Number;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Variant = local_28.Variant;
  pIVar2 = (__return_storage_ptr__->DisplayName).TextData.Reference;
  if (pIVar2 != local_38.TextData.Reference) {
    (__return_storage_ptr__->DisplayName).TextData.Reference = local_38.TextData.Reference;
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 8))
                (local_38.TextData.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->DisplayName).Flags = local_38.Flags;
  pIVar2 = (__return_storage_ptr__->Description).TextData.Reference;
  if (pIVar2 != local_48.TextData.Reference) {
    (__return_storage_ptr__->Description).TextData.Reference = local_48.TextData.Reference;
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 8))
                (local_48.TextData.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->Description).Flags = local_48.Flags;
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar3 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar2 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar2 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar3.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar5 = Metasound::FAdditiveSynthOperator::GetVertexInterface();
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar5);
  iVar4 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance,piVar1);
  }
  pFVar6 = (__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar4 + 1;
  pFVar6 = pFVar6 + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar6 = 0;
  TVar3 = Metasound::NodeCategories::Generators.TextData;
  *(ITextData **)pFVar6 = Metasound::NodeCategories::Generators.TextData.Reference;
  if (TVar3.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,&local_res10);
  }
  *(uint *)(pFVar6 + 8) = Metasound::NodeCategories::Generators.Flags;
  FText::FText((FText *)&local_28);
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->Keywords).AllocatorInstance.Data,
             (__return_storage_ptr__->Keywords).ArrayNum);
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->Keywords,(FText *)&local_28,1,
             (__return_storage_ptr__->Keywords).ArrayMax);
  if ((longlong *)CONCAT44(local_28.Namespace.Number,local_28.Namespace.ComparisonIndex.Value) !=
      (longlong *)0x0) {
    (**(code **)(*(longlong *)
                  CONCAT44(local_28.Namespace.Number,local_28.Namespace.ComparisonIndex.Value) +
                0x10))();
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// CreateOperator @ 14b013f80

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::FAdditiveSynthOperator::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  FAdditiveSynthOperator *this_00;
  FAdditiveSynthOperator *pFVar2;
  FName local_res10;
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&AdditiveSynthVertexNames::BaseFrequencyName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_d8,&local_res10,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&AdditiveSynthVertexNames::HarmonicMultipliersName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>
            (this,(TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)local_b8,
             &local_res10,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&AdditiveSynthVertexNames::AmplitudesName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>
            (this,(TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)local_98,
             &local_res10,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&AdditiveSynthVertexNames::PhasesName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>
            (this,(TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)local_78,
             &local_res10,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&AdditiveSynthVertexNames::PanAmountsName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>
            (this,(TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)local_58,
             &local_res10,pFVar1);
  local_res10.ComparisonIndex.Value = (param_2->Errors).ArrayNum;
  local_res10.Number = (param_2->Errors).ArrayMax;
  this_00 = ::operator_new(0x138);
  pFVar2 = (FAdditiveSynthOperator *)0x0;
  if (this_00 != (FAdditiveSynthOperator *)0x0) {
    (this_00->SinusoidData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00->_padding_ = (longlong)&___7FAdditiveSynthOperator_Metasound__6B_;
    (this_00->SinusoidData).ArrayNum = 0;
    (this_00->SinusoidData).ArrayMax = 0;
    *(undefined ***)&this_00->BaseFrequency = &___7__TDataReference_M_Metasound__6B_;
    *(undefined8 *)&(this_00->BaseFrequency).field_0x8 = local_d8._8_8_;
    *(undefined8 *)&(this_00->BaseFrequency).field_0x10 = local_d8._16_8_;
    if ((TReferenceControllerBase<0> *)local_d8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_d8._16_8_ + 8) = *(int *)(local_d8._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->BaseFrequency = &___7__TDataReadReference_M_Metasound__6B_;
    *(undefined ***)&this_00->HarmonicMultipliers =
         &___7__TDataReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
    *(undefined8 *)&(this_00->HarmonicMultipliers).field_0x8 = local_b8._8_8_;
    *(undefined8 *)&(this_00->HarmonicMultipliers).field_0x10 = local_b8._16_8_;
    if ((TReferenceControllerBase<0> *)local_b8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_b8._16_8_ + 8) = *(int *)(local_b8._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->HarmonicMultipliers =
         &___7__TDataReadReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
    *(undefined ***)&this_00->Amplitudes =
         &___7__TDataReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
    *(undefined8 *)&(this_00->Amplitudes).field_0x8 = local_98._8_8_;
    *(undefined8 *)&(this_00->Amplitudes).field_0x10 = local_98._16_8_;
    if ((TReferenceControllerBase<0> *)local_98._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_98._16_8_ + 8) = *(int *)(local_98._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->Amplitudes =
         &___7__TDataReadReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
    *(undefined ***)&this_00->Phases =
         &___7__TDataReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
    *(undefined8 *)&(this_00->Phases).field_0x8 = local_78._8_8_;
    *(undefined8 *)&(this_00->Phases).field_0x10 = local_78._16_8_;
    if ((TReferenceControllerBase<0> *)local_78._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_78._16_8_ + 8) = *(int *)(local_78._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->Phases =
         &___7__TDataReadReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
    *(undefined ***)&this_00->PanAmounts =
         &___7__TDataReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
    *(undefined8 *)&(this_00->PanAmounts).field_0x8 = local_58._8_8_;
    *(undefined8 *)&(this_00->PanAmounts).field_0x10 = local_58._16_8_;
    if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->PanAmounts =
         &___7__TDataReadReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
    (this_00->PreviousHarmonicMultipliers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->PreviousHarmonicMultipliers).ArrayNum = 0;
    (this_00->PreviousHarmonicMultipliers).ArrayMax = 0;
    (this_00->PreviousPhases).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->PreviousPhases).ArrayNum = 0;
    (this_00->PreviousPhases).ArrayMax = 0;
    (this_00->ScratchBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->ScratchBuffer).ArrayNum = 0;
    (this_00->ScratchBuffer).ArrayMax = 0;
    this_00->PreviousBaseFrequency = 440.0;
    TDataReference<Metasound::FAudioBuffer>::
    TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FAudioBuffer> *)&this_00->LeftAudioOut,NewObject,
               (FOperatorSettings *)local_res10);
    *(undefined ***)&this_00->LeftAudioOut =
         &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    TDataReference<Metasound::FAudioBuffer>::
    TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FAudioBuffer> *)&this_00->RightAudioOut,NewObject,
               (FOperatorSettings *)local_res10);
    *(undefined ***)&this_00->RightAudioOut =
         &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    this_00->SampleRate = (float)*(int *)local_res10;
    CreateSinusoids(this_00);
    pFVar2 = this_00;
  }
  param_1->Node = (INode *)pFVar2;
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
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateSinusoids @ 14b0149b0

void __thiscall Metasound::FAdditiveSynthOperator::CreateSinusoids(FAdditiveSynthOperator *this)

{
  int *piVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *this_00;
  uint uVar3;
  FSineWaveTableOsc *pFVar4;
  undefined8 *puVar5;
  void *_Src;
  longlong *plVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  float fVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  float fVar19;
  FSineWaveTableOsc local_88 [2];
  
  uVar3 = *(uint *)(*(longlong *)&(this->HarmonicMultipliers).field_0x8 + 8);
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  iVar15 = (this->SinusoidData).ArrayNum;
  piVar1 = &(this->SinusoidData).ArrayMax;
  pFVar4 = (FSineWaveTableOsc *)(this->SinusoidData).AllocatorInstance.Data;
  if (*piVar1 < (int)uVar3) {
    DestructItems<Audio::FSineWaveTableOsc,int>(pFVar4,iVar15);
    (this->SinusoidData).ArrayNum = 0;
    if (*piVar1 != uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,uVar3,&(this->SinusoidData).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<Audio::FSineWaveTableOsc,int>(pFVar4,iVar15);
    (this->SinusoidData).ArrayNum = 0;
  }
  uVar16 = 0;
  pTVar2 = &this->PreviousHarmonicMultipliers;
  piVar1 = &(this->PreviousHarmonicMultipliers).ArrayMax;
  (this->PreviousHarmonicMultipliers).ArrayNum = 0;
  if ((this->PreviousHarmonicMultipliers).ArrayMax < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar3,&pTVar2->AllocatorInstance,0,piVar1);
  }
  this_00 = &this->PreviousPhases;
  (this->PreviousPhases).ArrayNum = 0;
  if ((this->PreviousPhases).ArrayMax < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar3,&this_00->AllocatorInstance,0,&(this->PreviousPhases).ArrayMax);
  }
  puVar5 = *(undefined8 **)&(this->HarmonicMultipliers).field_0x8;
  if (pTVar2 != (TArray<float,TSizedDefaultAllocator<32>_> *)puVar5) {
    iVar15 = *(int *)(puVar5 + 1);
    _Src = (void *)*puVar5;
    (this->PreviousHarmonicMultipliers).ArrayNum = iVar15;
    if ((iVar15 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar15,*piVar1,&pTVar2->AllocatorInstance,iVar15,piVar1);
      if (iVar15 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar15 << 2);
      }
    }
  }
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (this_00,*(TArray<float,TSizedDefaultAllocator<32>_> **)&(this->Phases).field_0x8);
  piVar1 = &(this->PreviousPhases).ArrayNum;
  iVar15 = *piVar1;
  if (iVar15 < (int)uVar3) {
    iVar15 = uVar3 - iVar15;
    iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,iVar15,&this_00->AllocatorInstance,piVar1,
                        &(this->PreviousPhases).ArrayMax);
    memset((this_00->AllocatorInstance).Data + (longlong)iVar11 * 4,0,(longlong)iVar15 << 2);
  }
  this->PreviousBaseFrequency = **(float **)&(this->BaseFrequency).field_0x8;
  fVar9 = __real_3b360b61;
  uVar18 = uVar16;
  if (0 < (int)uVar3) {
    do {
      Audio::FSineWaveTableOsc::FSineWaveTableOsc(local_88);
      plVar6 = *(longlong **)&(this->Phases).field_0x8;
      iVar15 = (int)plVar6[1];
      uVar17 = (uint)uVar16;
      if (iVar15 < 1) {
        fVar19 = 0.0;
      }
      else {
        uVar14 = (int)uVar17 % iVar15;
        uVar12 = 0;
        if ((int)uVar14 < iVar15) {
          uVar12 = ~uVar14 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        fVar19 = *(float *)(*plVar6 + (longlong)(int)uVar14 * 4);
      }
      plVar6 = *(longlong **)&(this->HarmonicMultipliers).field_0x8;
      uVar12 = 0;
      if ((int)uVar17 < (int)plVar6[1]) {
        uVar12 = ~uVar17 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      Audio::FSineWaveTableOsc::Init
                (local_88,this->SampleRate,
                 *(float *)(*plVar6 + uVar18 * 4) * **(float **)&(this->BaseFrequency).field_0x8,
                 fVar19 * fVar9);
      pFVar4 = (FSineWaveTableOsc *)(this->SinusoidData).AllocatorInstance.Data;
      if (((pFVar4 <= local_88) && (local_88 < pFVar4 + (this->SinusoidData).ArrayMax)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar15 = (this->SinusoidData).ArrayNum;
      if (iVar15 == (this->SinusoidData).ArrayMax) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x828,&(this->SinusoidData).AllocatorInstance,
                            &(this->SinusoidData).ArrayMax);
      }
      lVar13 = (longlong)iVar15;
      (this->SinusoidData).ArrayNum = iVar15 + 1;
      pFVar7 = (this->SinusoidData).AllocatorInstance.Data;
      *(undefined ***)(pFVar7 + lVar13 * 0x28) = &___7FSineWaveTableOsc_Audio__6B_;
      *(TArray<float,TSizedDefaultAllocator<32>_> **)(pFVar7 + lVar13 * 0x28 + 8) =
           local_88[0].WaveTableBuffer;
      *(float *)(pFVar7 + lVar13 * 0x28 + 0x10) = local_88[0].FrequencyHz;
      *(float *)(pFVar7 + lVar13 * 0x28 + 0x14) = local_88[0].SampleRate;
      *(float *)(pFVar7 + lVar13 * 0x28 + 0x18) = local_88[0].ReadIndex;
      *(float *)(pFVar7 + lVar13 * 0x28 + 0x1c) = local_88[0].PhaseIncrement;
      *(float *)(pFVar7 + lVar13 * 0x28 + 0x20) = local_88[0].InitialPhase;
      *(float *)(pFVar7 + lVar13 * 0x28 + 0x24) = local_88[0].InstantaneousPhase;
      Audio::FSineWaveTableOsc::~FSineWaveTableOsc(local_88);
      uVar16 = (ulonglong)(uVar17 + 1);
      uVar18 = uVar18 + 1;
    } while ((longlong)uVar18 < (longlong)(int)uVar3);
  }
  return;
}

// Execute @ 14b01e140

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Metasound::FAdditiveSynthOperator::Execute(FAdditiveSynthOperator *this)

{
  int *piVar1;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar2;
  FSineWaveTableOsc *this_00;
  uint uVar3;
  undefined8 *puVar4;
  FScriptContainerElement *pFVar5;
  longlong *plVar6;
  code *pcVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  float fVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  longlong local_res18;
  longlong local_res20;
  undefined4 local_168 [2];
  longlong local_160;
  float *local_158;
  uint uStack_150;
  undefined4 uStack_14c;
  FScriptContainerElement *local_148;
  uint uStack_140;
  undefined4 uStack_13c;
  float *local_138;
  uint uStack_130;
  undefined4 uStack_12c;
  TArrayView<float,int> local_128;
  TArrayView<float_const_,int> local_118;
  TArrayView<float,int> local_108;
  TArrayView<float_const_,int> local_f8 [11];
  
  lVar19 = *(longlong *)&(this->LeftAudioOut).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar19 + 0x10) != *(int *)(lVar19 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  uVar3 = *(uint *)(lVar19 + 8);
  uVar18 = (ulonglong)uVar3;
  puVar4 = *(undefined8 **)&(this->LeftAudioOut).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar4 + 2) != *(int *)(puVar4 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  memset((void *)*puVar4,0,(longlong)(int)uVar3 << 2);
  puVar4 = *(undefined8 **)&(this->RightAudioOut).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar4 + 2) != *(int *)(puVar4 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  memset((void *)*puVar4,0,(longlong)(int)uVar3 << 2);
  if ((this->ScratchBuffer).ArrayNum != uVar3) {
    pTVar2 = &this->ScratchBuffer;
    piVar1 = &(this->ScratchBuffer).ArrayMax;
    (this->ScratchBuffer).ArrayNum = 0;
    if ((this->ScratchBuffer).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
    local_168[0] = 0;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar18);
    }
    (this->ScratchBuffer).ArrayNum = 0;
    if (*piVar1 != uVar3) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,uVar3,&pTVar2->AllocatorInstance,0,piVar1);
    }
    if (0 < (int)uVar3) {
      do {
        pFVar5 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar5 <= (FScriptContainerElement *)local_168) &&
            ((FScriptContainerElement *)local_168 < pFVar5 + (longlong)*piVar1 * 4)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar15 = (this->ScratchBuffer).ArrayNum;
        if (iVar15 == *piVar1) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                             (0x404,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->ScratchBuffer).ArrayNum = iVar15 + 1;
        *(undefined4 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar15 * 4) = local_168[0];
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
  }
  iVar15 = *(int *)(*(longlong *)&(this->HarmonicMultipliers).field_0x8 + 8);
  if (iVar15 != (this->SinusoidData).ArrayNum) {
    CreateSinusoids(this);
  }
  fVar12 = __real_3f000000;
  uVar11 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar9 = __real_322bcc77;
  fVar25 = this->SampleRate * __real_3f000000;
  fVar26 = **(float **)&(this->BaseFrequency).field_0x8;
  if (fVar25 <= fVar26) {
    fVar26 = fVar25;
  }
  if (fVar26 <= 0.0) {
    fVar26 = 0.0;
  }
  bVar13 = __real_322bcc77 <
           (float)((uint)(fVar26 - this->PreviousBaseFrequency) &
                  __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (bVar13) {
    this->PreviousBaseFrequency = fVar26;
  }
  fVar10 = __real_3f800000;
  uVar21 = 0;
  if (0 < iVar15) {
    local_res18 = 0;
    local_res20 = 0;
    local_160 = (longlong)iVar15;
    do {
      fVar22 = __real_3b360b61;
      fVar23 = __real_bf800000;
      uVar17 = ~uVar21 >> 0x1f;
      uVar16 = 0;
      if ((int)uVar21 < (this->SinusoidData).ArrayNum) {
        uVar16 = uVar17;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      plVar6 = *(longlong **)&(this->HarmonicMultipliers).field_0x8;
      this_00 = (FSineWaveTableOsc *)
                ((this->SinusoidData).AllocatorInstance.Data + (longlong)(int)uVar21 * 0x28);
      uVar16 = 0;
      if ((int)uVar21 < (int)plVar6[1]) {
        uVar16 = uVar17;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      fVar24 = *(float *)(local_res20 + *plVar6);
      if (fVar25 / fVar26 <= fVar24) {
        fVar24 = fVar25 / fVar26;
      }
      uVar16 = 0;
      if ((int)uVar21 < (this->PreviousHarmonicMultipliers).ArrayNum) {
        uVar16 = uVar17;
      }
      if (fVar24 <= 0.0) {
        fVar24 = 0.0;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((float)((uint)(fVar24 - *(float *)((this->PreviousHarmonicMultipliers).AllocatorInstance.
                                             Data + local_res18 * 4)) & uVar11) <= fVar9) {
        if (bVar13) goto LAB_14b01e5fa;
      }
      else {
        uVar16 = 0;
        if ((int)uVar21 < (this->PreviousHarmonicMultipliers).ArrayNum) {
          uVar16 = uVar17;
        }
        if ((uVar16 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        bVar13 = true;
        *(float *)((this->PreviousHarmonicMultipliers).AllocatorInstance.Data + local_res18 * 4) =
             fVar24;
LAB_14b01e5fa:
        Audio::FSineWaveTableOsc::SetFrequencyHz(this_00,fVar24 * fVar26);
      }
      plVar6 = *(longlong **)&(this->Phases).field_0x8;
      iVar15 = (int)plVar6[1];
      if (iVar15 == 0) {
        uVar16 = 0;
        if ((int)uVar21 < (this->PreviousPhases).ArrayNum) {
          uVar16 = uVar17;
        }
        if ((uVar16 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (fVar9 < (float)(*(uint *)((this->PreviousPhases).AllocatorInstance.Data +
                                     local_res18 * 4) & uVar11)) {
          uVar16 = 0;
          if ((int)uVar21 < (this->PreviousPhases).ArrayNum) {
            uVar16 = uVar17;
          }
          if ((uVar16 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(undefined4 *)((this->PreviousPhases).AllocatorInstance.Data + local_res18 * 4) = 0;
          Audio::FSineWaveTableOsc::SetPhase(this_00,0.0);
        }
      }
      else {
        uVar17 = (int)uVar21 % iVar15;
        lVar19 = (longlong)(int)uVar17;
        uVar20 = ~uVar17 >> 0x1f;
        uVar16 = 0;
        if ((int)uVar17 < iVar15) {
          uVar16 = uVar20;
        }
        if ((uVar16 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        fVar24 = *(float *)(*plVar6 + lVar19 * 4);
        if (__real_43b40000 <= fVar24) {
          fVar24 = __real_43b40000;
        }
        uVar16 = 0;
        if ((int)uVar17 < (this->PreviousPhases).ArrayNum) {
          uVar16 = uVar20;
        }
        if (fVar24 <= 0.0) {
          fVar24 = 0.0;
        }
        if ((uVar16 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (fVar9 < (float)((uint)(fVar24 - *(float *)((this->PreviousPhases).AllocatorInstance.Data
                                                      + lVar19 * 4)) & uVar11)) {
          uVar16 = 0;
          if ((int)uVar17 < (this->PreviousPhases).ArrayNum) {
            uVar16 = uVar20;
          }
          if ((uVar16 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(float *)((this->PreviousPhases).AllocatorInstance.Data + lVar19 * 4) = fVar24;
          Audio::FSineWaveTableOsc::SetPhase(this_00,fVar24 * fVar22);
        }
      }
      Audio::FSineWaveTableOsc::Generate
                (this_00,(float *)(this->ScratchBuffer).AllocatorInstance.Data,uVar3);
      plVar6 = *(longlong **)&(this->PanAmounts).field_0x8;
      iVar15 = (int)plVar6[1];
      fVar22 = fVar10;
      fVar24 = fVar10;
      if (0 < iVar15) {
        uVar17 = (int)uVar21 % iVar15;
        uVar16 = 0;
        if ((int)uVar17 < iVar15) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        fVar22 = *(float *)(*plVar6 + (longlong)(int)uVar17 * 4);
        if (fVar10 <= fVar22) {
          fVar22 = fVar10;
        }
        if (fVar22 <= fVar23) {
          fVar22 = fVar23;
        }
        fVar24 = (fVar22 + fVar10) * __real_3f490fdb;
        if (fVar24 < 0.0) {
          fVar22 = fVar24 * __real_3e22f983 - fVar12;
        }
        else {
          fVar22 = fVar24 * __real_3e22f983 + fVar12;
        }
        fVar24 = fVar24 - (float)(longlong)fVar22 * __real_40c90fdb;
        if (fVar24 <= __real_3fc90fdb) {
          fVar22 = fVar10;
          if (fVar24 < __real_bfc90fdb) {
            fVar24 = __real_c0490fdb - fVar24;
            fVar22 = fVar23;
          }
        }
        else {
          fVar24 = __real_40490fdb - fVar24;
          fVar22 = fVar23;
        }
        fVar23 = fVar24 * fVar24;
        fVar24 = (((((__real_3638b88e - fVar23 * __real_32cd365b) * fVar23 - __real_39500bf1) *
                    fVar23 + ___real_3c088886) * fVar23 - __real_3e2aaaab) * fVar23 + fVar10) *
                 fVar24;
        fVar22 = (((((__real_37cfb4c2 - fVar23 * ___real_348bdd11) * fVar23 - ___real_3ab609aa) *
                    fVar23 + ___real_3d2aaaa3) * fVar23 - fVar12) * fVar23 + fVar10) * fVar22;
      }
      plVar6 = *(longlong **)&(this->Amplitudes).field_0x8;
      iVar15 = (int)plVar6[1];
      fVar23 = fVar10;
      if (0 < iVar15) {
        uVar17 = (int)uVar21 % iVar15;
        uVar16 = 0;
        if ((int)uVar17 < iVar15) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        fVar23 = *(float *)(*plVar6 + (longlong)(int)uVar17 * 4);
        if (fVar10 <= fVar23) {
          fVar23 = fVar10;
        }
        if (fVar23 <= 0.0) {
          fVar23 = 0.0;
        }
      }
      local_148 = (this->ScratchBuffer).AllocatorInstance.Data;
      uStack_140 = uVar3;
      if (((int)uVar3 < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      puVar4 = *(undefined8 **)&(this->LeftAudioOut).field_0x8;
      if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar4 + 2) != *(int *)(puVar4 + 1))) {
        UE::Logging::Private::BasicLog<2>
                  (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'
                    ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
      local_158 = (float *)*puVar4;
      uStack_150 = uVar3;
      if (((int)uVar3 < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      puVar4 = *(undefined8 **)&(this->RightAudioOut).field_0x8;
      if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar4 + 2) != *(int *)(puVar4 + 1))) {
        UE::Logging::Private::BasicLog<2>
                  (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'
                    ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
      local_138 = (float *)*puVar4;
      uStack_130 = uVar3;
      if (((int)uVar3 < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar5 = local_148;
      local_128._12_4_ = uStack_14c;
      local_128.ArrayNum = uStack_150;
      uVar8._4_4_ = uStack_13c;
      uVar8._0_4_ = uStack_140;
      local_128.DataPtr = local_158;
      local_118.DataPtr = (float *)local_148;
      local_118._8_8_ = uVar8;
      Audio::ArrayMixIn(&local_118,&local_128,fVar23 * fVar22);
      local_108._12_4_ = uStack_12c;
      local_108.ArrayNum = uStack_130;
      local_108.DataPtr = local_138;
      local_f8[0].DataPtr = (float *)pFVar5;
      local_f8[0]._8_8_ = uVar8;
      Audio::ArrayMixIn(local_f8,&local_108,fVar23 * fVar24);
      local_res20 = local_res20 + 4;
      local_res18 = local_res18 + 1;
      uVar21 = uVar21 + 1;
    } while (local_res18 < local_160);
  }
  return;
}

// GetNodeInfo @ 14b0291e0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FAdditiveSynthOperator::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FAdditiveSynthOperator::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FAdditiveSynthOperator::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FAdditiveSynthOperator::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::FAdditiveSynthOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FAdditiveSynthOperator::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::FAdditiveSynthOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FAdditiveSynthOperator::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FAdditiveSynthOperator::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FAdditiveSynthOperator::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetVertexInterface @ 14b02a7e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::FAdditiveSynthOperator::GetVertexInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar3;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar4;
  FOutputVertexInterface *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FInputDataVertex *pFVar8;
  FInputDataVertex *pFVar9;
  FInputDataVertex *pFVar10;
  FVertexInterface *pFVar11;
  undefined1 auStackY_218 [32];
  float local_1e8 [2];
  FInputVertexInterface local_1e0;
  FInputVertexInterfaceDeclarationBuilder local_1c0;
  FOutputVertexInterface local_198;
  TOutputDataVertex<Metasound::FAudioBuffer> local_178;
  TOutputDataVertex<Metasound::FAudioBuffer> local_158;
  TInputDataVertex<float> local_138;
  TInputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_> local_100;
  TInputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_> local_c8;
  TInputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_> local_90;
  TInputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_218;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FAdditiveSynthOperator::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FAdditiveSynthOperator::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FAdditiveSynthOperator::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pTVar3 = TOutputDataVertex<Metasound::FAudioBuffer>::
             TOutputDataVertex<Metasound::FAudioBuffer><>
                       (&local_178,&AdditiveSynthVertexNames::RightAudioOutName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar4 = TOutputDataVertex<Metasound::FAudioBuffer>::
             TOutputDataVertex<Metasound::FAudioBuffer><>
                       (&local_158,&AdditiveSynthVertexNames::LeftAudioOutName,
                        &FDataVertexMetadata::EmptyBasic);
    pFVar5 = FOutputVertexInterface::
             FOutputVertexInterface<Metasound::TOutputDataVertex<Metasound::FAudioBuffer>,Metasound::TOutputDataVertex<Metasound::FAudioBuffer>_>
                       (&local_198,pTVar4,pTVar3);
    pFVar6 = (FInputDataVertex *)
             TInputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_>::
             TInputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_><>
                       (&local_58,&AdditiveSynthVertexNames::PanAmountsName,
                        &FDataVertexMetadata::EmptyBasic);
    pFVar7 = (FInputDataVertex *)
             TInputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_>::
             TInputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_><>
                       (&local_90,&AdditiveSynthVertexNames::PhasesName,
                        &FDataVertexMetadata::EmptyBasic);
    pFVar8 = (FInputDataVertex *)
             TInputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_>::
             TInputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_><>
                       (&local_c8,&AdditiveSynthVertexNames::AmplitudesName,
                        &FDataVertexMetadata::EmptyBasic);
    pFVar9 = (FInputDataVertex *)
             TInputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_>::
             TInputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_><>
                       (&local_100,&AdditiveSynthVertexNames::HarmonicMultipliersName,
                        &FDataVertexMetadata::EmptyBasic);
    local_1e8[0] = 440.0;
    pFVar10 = (FInputDataVertex *)
              TInputDataVertex<float>::TInputDataVertex<float><float>
                        (&local_138,&AdditiveSynthVertexNames::BaseFrequencyName,
                         &FDataVertexMetadata::EmptyBasic,local_1e8);
    local_1e0._padding_ = 0;
    local_1e0._padding_ = 0;
    local_1e0.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e0.SubInterfaces.ArrayNum = 0;
    local_1e0.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_1c0,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_1e0,
               &local_1e0.SubInterfaces);
    if ((local_1c0.Vertices)->ArrayMax < 5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,5,&(local_1c0.Vertices)->AllocatorInstance,(local_1c0.Vertices)->ArrayNum,
                 &(local_1c0.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1c0,pFVar10);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1c0,pFVar9);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1c0,pFVar8);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1c0,pFVar7);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1c0,pFVar6);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_1c0);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FAdditiveSynthOperator::GetVertexInterface(void)'
                ::__l2::Interface,&local_1e0,pFVar5);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_1e0.SubInterfaces.AllocatorInstance.Data,
               local_1e0.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_1e0.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_1e0.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_1e0._padding_,(int)local_1e0._padding_);
    if ((FInputDataVertex *)local_1e0._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_1e0._padding_);
    }
    if ((0xc < (byte)local_138._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar11 = (FVertexInterface *)(*pcVar1)();
      return pFVar11;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_138._48_1_])(&local_138.field_0x20);
    if ((0xc < (byte)local_100._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar11 = (FVertexInterface *)(*pcVar1)();
      return pFVar11;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_100._48_1_])(&local_100.field_0x20);
    if ((0xc < (byte)local_c8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar11 = (FVertexInterface *)(*pcVar1)();
      return pFVar11;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_c8._48_1_])(&local_c8.field_0x20);
    if ((0xc < (byte)local_90._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar11 = (FVertexInterface *)(*pcVar1)();
      return pFVar11;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_90._48_1_])(&local_90.field_0x20);
    if ((0xc < (byte)local_58._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar11 = (FVertexInterface *)(*pcVar1)();
      return pFVar11;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_58._48_1_])(&local_58.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_198.SubInterfaces.AllocatorInstance.Data,
               local_198.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_198.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_198.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_198._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_198._padding_);
    }
    atexit(`Metasound::FAdditiveSynthOperator::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__Interface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FAdditiveSynthOperator::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FAdditiveSynthOperator::GetVertexInterface(void)'
          ::__l2::Interface;
}

// Reset @ 14b030980

void __thiscall
Metasound::FAdditiveSynthOperator::Reset(FAdditiveSynthOperator *this,FResetParams *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  CreateSinusoids(this);
  puVar2 = *(undefined8 **)&(this->LeftAudioOut).field_0x8;
  iVar1 = *(int *)(puVar2 + 1);
  if (0 < iVar1) {
    memset((void *)*puVar2,0,(longlong)iVar1 << 2);
  }
  puVar2 = *(undefined8 **)&(this->RightAudioOut).field_0x8;
  iVar1 = *(int *)(puVar2 + 1);
  if (0 < iVar1) {
    memset((void *)*puVar2,0,(longlong)iVar1 << 2);
    return;
  }
  return;
}

