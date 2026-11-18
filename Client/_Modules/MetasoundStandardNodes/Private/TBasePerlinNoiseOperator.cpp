// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 16

// Bind @ 14b1ba940

void __thiscall
Metasound::TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate>::Bind
          (TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate> *this,
          FVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b1ba950

void __thiscall
Metasound::TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate>::BindInputs
          (TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate> *this,
          FInputVertexInterfaceData *param_1)

{
  FName local_res8 [2];
  FPinReadRefs *local_res18;
  FName *local_res20;
  undefined1 local_58 [16];
  code *local_48;
  FPinReadRefs **local_40;
  undefined1 local_38 [16];
  
  FLazyName::Resolve(&PerlinNoiseVertexNames::XPinName);
  local_res18 = &this->Pins;
  local_40 = &local_res18;
  local_58._0_8_ = local_res8;
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
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&PerlinNoiseVertexNames::OffsetPinName);
  local_res20 = local_res8;
  local_res18 = (FPinReadRefs *)&(this->Pins).Offset;
  local_38._8_8_ = &local_res18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::SetValue<float>'::__l2::<lambda_2>,void,Metasound::VertexDataPrivate::FInputBinding_&>
       ::Call;
  local_40 = (FPinReadRefs **)&local_res20;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::SetValue<float>'::__l2::<lambda_1>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)local_38);
  FLazyName::Resolve(&PerlinNoiseVertexNames::OctavesPinName);
  local_res18 = (FPinReadRefs *)&(this->Pins).Octaves;
  local_40 = &local_res18;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_58._8_8_ = local_38;
  local_38._0_8_ = local_res8;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&PerlinNoiseVertexNames::MinValuePinName);
  local_res18 = (FPinReadRefs *)&(this->Pins).MinValue;
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
  FLazyName::Resolve(&PerlinNoiseVertexNames::MaxValuePinName);
  local_res18 = (FPinReadRefs *)&(this->Pins).MaxValue;
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
  return;
}

// BindOutputs @ 14b1bab60

void __thiscall
Metasound::TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate>::BindOutputs
          (TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate> *this,
          FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<float> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataWriteReference<float> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&PerlinNoiseVertexNames::OutputScaledPinName);
  local_res18 = &this->OutputScaled;
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
  FLazyName::Resolve(&PerlinNoiseVertexNames::OutputNormalizedPinName);
  local_res18 = &this->OutputNormalized;
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

// Bind @ 14b1bb640

void __thiscall
Metasound::TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate>::Bind
          (TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate> *this,
          FVertexInterfaceData *param_1)

{
  return;
}

// BindInputs @ 14b1bb650

void __thiscall
Metasound::TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate>::BindInputs
          (TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate> *this,
          FInputVertexInterfaceData *param_1)

{
  FName local_res8 [2];
  FPinReadRefs *local_res18;
  FName *local_res20;
  undefined1 local_58 [16];
  code *local_48;
  FPinReadRefs **local_40;
  undefined1 local_38 [16];
  
  FLazyName::Resolve(&PerlinNoiseVertexNames::XPinName);
  local_res18 = &this->Pins;
  local_40 = &local_res18;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_58;
  local_58._0_8_ = local_res8;
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
  FLazyName::Resolve(&PerlinNoiseVertexNames::OffsetPinName);
  local_res20 = local_res8;
  local_res18 = (FPinReadRefs *)&(this->Pins).Offset;
  local_38._8_8_ = &local_res18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::SetValue<float>'::__l2::<lambda_2>,void,Metasound::VertexDataPrivate::FInputBinding_&>
       ::Call;
  local_40 = (FPinReadRefs **)&local_res20;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::SetValue<float>'::__l2::<lambda_1>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)local_38);
  FLazyName::Resolve(&PerlinNoiseVertexNames::OctavesPinName);
  local_res18 = (FPinReadRefs *)&(this->Pins).Octaves;
  local_40 = &local_res18;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_58._8_8_ = local_38;
  local_38._0_8_ = local_res8;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_48)
  ;
  FLazyName::Resolve(&PerlinNoiseVertexNames::MinValuePinName);
  local_res18 = (FPinReadRefs *)&(this->Pins).MinValue;
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
  FLazyName::Resolve(&PerlinNoiseVertexNames::MaxValuePinName);
  local_res18 = (FPinReadRefs *)&(this->Pins).MaxValue;
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
  return;
}

// BindOutputs @ 14b1bb840

void __thiscall
Metasound::TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate>::
BindOutputs(TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate> *this,
           FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FAudioBuffer> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataWriteReference<Metasound::FAudioBuffer> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&PerlinNoiseVertexNames::OutputScaledPinName);
  local_res18 = &this->OutputScaled;
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
  FLazyName::Resolve(&PerlinNoiseVertexNames::OutputNormalizedPinName);
  local_res18 = &this->OutputNormalized;
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

// operator() @ 14b1d1140

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate>::GetNodeInfo'::__l2::
<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar1;
  ITextData *pIVar2;
  TRefCountPtr<ITextData> TVar3;
  int iVar4;
  FText *pFVar5;
  FVertexInterface *pFVar6;
  FScriptContainerElement *pFVar7;
  FName local_res10;
  FNodeClassName local_38;
  
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_res10,L"Perlin Noise (float)");
  Metasound::FNodeClassName::FNodeClassName
            (&local_38,&Metasound::StandardNodes::Namespace,&local_res10,
             &Metasound::StandardNodes::AudioVariant);
  (__return_storage_ptr__->ClassName).Namespace = local_38.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_38.Name;
  (__return_storage_ptr__->ClassName).Variant = local_38.Variant;
  pFVar5 = FText::FText((FText *)&local_38);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar5);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_38.Namespace + 0x10))();
  }
  pFVar5 = FText::FText((FText *)&local_38);
  FText::operator=(&__return_storage_ptr__->Description,pFVar5);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_38.Namespace + 0x10))();
  }
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
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
  pFVar6 = Metasound::TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate>::
           GetVertexInterface();
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar6);
  pTVar1 = &__return_storage_ptr__->CategoryHierarchy;
  iVar4 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  if (iVar4 == (__return_storage_ptr__->CategoryHierarchy).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,
                       &(__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  }
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar4 + 1;
  pFVar7 = (pTVar1->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar7 = 0;
  TVar3 = Metasound::NodeCategories::Generators.TextData;
  *(ITextData **)pFVar7 = Metasound::NodeCategories::Generators.TextData.Reference;
  if (TVar3.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,&local_res10);
  }
  *(uint *)(pFVar7 + 8) = Metasound::NodeCategories::Generators.Flags;
  iVar4 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  if (iVar4 == (__return_storage_ptr__->CategoryHierarchy).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,
                       &(__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  }
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar4 + 1;
  pFVar7 = (pTVar1->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar7 = 0;
  TVar3 = Metasound::NodeCategories::RandomUtils.TextData;
  *(ITextData **)pFVar7 = Metasound::NodeCategories::RandomUtils.TextData.Reference;
  if (TVar3.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,&local_res10);
  }
  *(uint *)(pFVar7 + 8) = Metasound::NodeCategories::RandomUtils.Flags;
  pFVar5 = FText::FText((FText *)&local_38);
  pTVar1 = &__return_storage_ptr__->Keywords;
  iVar4 = (__return_storage_ptr__->Keywords).ArrayNum;
  if (iVar4 == (__return_storage_ptr__->Keywords).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,&(__return_storage_ptr__->Keywords).ArrayMax
                      );
  }
  (__return_storage_ptr__->Keywords).ArrayNum = iVar4 + 1;
  FText::FText((FText *)((pTVar1->AllocatorInstance).Data + (longlong)iVar4 * 0x10),pFVar5);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_38.Namespace + 0x10))();
  }
  pFVar5 = FText::FText((FText *)&local_38);
  iVar4 = (__return_storage_ptr__->Keywords).ArrayNum;
  if (iVar4 == (__return_storage_ptr__->Keywords).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,&(__return_storage_ptr__->Keywords).ArrayMax
                      );
  }
  (__return_storage_ptr__->Keywords).ArrayNum = iVar4 + 1;
  FText::FText((FText *)((pTVar1->AllocatorInstance).Data + (longlong)iVar4 * 0x10),pFVar5);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_38.Namespace + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 14b1d13c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate>::
GetNodeInfo'::__l2::<lambda_1>::operator()(void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar1;
  ITextData *pIVar2;
  TRefCountPtr<ITextData> TVar3;
  int iVar4;
  FText *pFVar5;
  FVertexInterface *pFVar6;
  FScriptContainerElement *pFVar7;
  FName local_res10;
  FNodeClassName local_38;
  
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_res10,L"Perlin Noise (audio)");
  Metasound::FNodeClassName::FNodeClassName
            (&local_38,&Metasound::StandardNodes::Namespace,&local_res10,
             &Metasound::StandardNodes::AudioVariant);
  (__return_storage_ptr__->ClassName).Namespace = local_38.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_38.Name;
  (__return_storage_ptr__->ClassName).Variant = local_38.Variant;
  pFVar5 = FText::FText((FText *)&local_38);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar5);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_38.Namespace + 0x10))();
  }
  pFVar5 = FText::FText((FText *)&local_38);
  FText::operator=(&__return_storage_ptr__->Description,pFVar5);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_38.Namespace + 0x10))();
  }
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
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
  pFVar6 = Metasound::TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate>
           ::GetVertexInterface();
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar6);
  pTVar1 = &__return_storage_ptr__->CategoryHierarchy;
  iVar4 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  if (iVar4 == (__return_storage_ptr__->CategoryHierarchy).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,
                       &(__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  }
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar4 + 1;
  pFVar7 = (pTVar1->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar7 = 0;
  TVar3 = Metasound::NodeCategories::Generators.TextData;
  *(ITextData **)pFVar7 = Metasound::NodeCategories::Generators.TextData.Reference;
  if (TVar3.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,&local_res10);
  }
  *(uint *)(pFVar7 + 8) = Metasound::NodeCategories::Generators.Flags;
  iVar4 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  if (iVar4 == (__return_storage_ptr__->CategoryHierarchy).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,
                       &(__return_storage_ptr__->CategoryHierarchy).ArrayMax);
  }
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar4 + 1;
  pFVar7 = (pTVar1->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar7 = 0;
  TVar3 = Metasound::NodeCategories::RandomUtils.TextData;
  *(ITextData **)pFVar7 = Metasound::NodeCategories::RandomUtils.TextData.Reference;
  if (TVar3.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,&local_res10);
  }
  *(uint *)(pFVar7 + 8) = Metasound::NodeCategories::RandomUtils.Flags;
  pFVar5 = FText::FText((FText *)&local_38);
  pTVar1 = &__return_storage_ptr__->Keywords;
  iVar4 = (__return_storage_ptr__->Keywords).ArrayNum;
  if (iVar4 == (__return_storage_ptr__->Keywords).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,&(__return_storage_ptr__->Keywords).ArrayMax
                      );
  }
  (__return_storage_ptr__->Keywords).ArrayNum = iVar4 + 1;
  FText::FText((FText *)((pTVar1->AllocatorInstance).Data + (longlong)iVar4 * 0x10),pFVar5);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_38.Namespace + 0x10))();
  }
  pFVar5 = FText::FText((FText *)&local_38);
  iVar4 = (__return_storage_ptr__->Keywords).ArrayNum;
  if (iVar4 == (__return_storage_ptr__->Keywords).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,&(__return_storage_ptr__->Keywords).ArrayMax
                      );
  }
  (__return_storage_ptr__->Keywords).ArrayNum = iVar4 + 1;
  FText::FText((FText *)((pTVar1->AllocatorInstance).Data + (longlong)iVar4 * 0x10),pFVar5);
  if (local_38.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_38.Namespace + 0x10))();
  }
  return __return_storage_ptr__;
}

// CreateOperator @ 14b1d7a20

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate>::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  FInputVertexInterfaceData *this;
  FPerlinControlRate *this_00;
  FPerlinControlRate *pFVar2;
  FName local_res8;
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  bool local_18;
  float local_14;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&PerlinNoiseVertexNames::XPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_98,&local_res8,pFVar1);
  FLazyName::Resolve(&PerlinNoiseVertexNames::OctavesPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_78,&local_res8,pFVar1);
  FLazyName::Resolve(&PerlinNoiseVertexNames::MinValuePinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_58,&local_res8,pFVar1);
  FLazyName::Resolve(&PerlinNoiseVertexNames::MaxValuePinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_38,&local_res8,pFVar1);
  FLazyName::Resolve(&PerlinNoiseVertexNames::XPinName);
  local_18 = FInputVertexInterfaceData::IsVertexBound(this,&local_res8);
  FLazyName::Resolve(&PerlinNoiseVertexNames::OffsetPinName);
  local_14 = FInputVertexInterfaceData::GetOrCreateDefaultValue<float>(this,&local_res8,pFVar1);
  this_00 = ::operator_new(0xe0);
  pFVar2 = (FPerlinControlRate *)0x0;
  if (this_00 != (FPerlinControlRate *)0x0) {
    pFVar2 = FPerlinControlRate::FPerlinControlRate
                       (this_00,(FBuildOperatorParams *)param_2,(FPinReadRefs *)local_98);
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
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14b1d7bc0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate>::
CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  FInputVertexInterfaceData *this;
  FPerlinAudioRate *this_00;
  FPerlinAudioRate *pFVar2;
  FName local_res8;
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  bool local_18;
  float local_14;
  
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  FLazyName::Resolve(&PerlinNoiseVertexNames::XPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>
            (this,(TDataReadReference<Metasound::FAudioBuffer> *)local_98,&local_res8,pFVar1);
  FLazyName::Resolve(&PerlinNoiseVertexNames::OctavesPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_78,&local_res8,pFVar1);
  FLazyName::Resolve(&PerlinNoiseVertexNames::MinValuePinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_58,&local_res8,pFVar1);
  FLazyName::Resolve(&PerlinNoiseVertexNames::MaxValuePinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_38,&local_res8,pFVar1);
  FLazyName::Resolve(&PerlinNoiseVertexNames::XPinName);
  local_18 = FInputVertexInterfaceData::IsVertexBound(this,&local_res8);
  FLazyName::Resolve(&PerlinNoiseVertexNames::OffsetPinName);
  local_14 = FInputVertexInterfaceData::GetOrCreateDefaultValue<float>(this,&local_res8,pFVar1);
  this_00 = ::operator_new(0xf8);
  pFVar2 = (FPerlinAudioRate *)0x0;
  if (this_00 != (FPerlinAudioRate *)0x0) {
    pFVar2 = FPerlinAudioRate::FPerlinAudioRate
                       (this_00,(FBuildOperatorParams *)param_2,(FPinReadRefs *)local_98);
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
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// GetNodeInfo @ 14b1e2830

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate>::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate>::GetNodeInfo'::__l2
      ::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate>::GetNodeInfo'
             ::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetNodeInfo @ 14b1e28c0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate>::
GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate>::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate>::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate>::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate>::
      GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate>::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::
             TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate>::
             GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate>::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate>::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate>::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetVertexInterface @ 14b1e48b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate>::GetVertexInterface(void)

{
  code *pcVar1;
  bool bVar2;
  FInputDataVertex *pFVar3;
  FInputDataVertex *pFVar4;
  FName *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  TOutputDataVertex<float> *pTVar8;
  TOutputDataVertex<float> *pTVar9;
  FVertexInterface *pFVar10;
  ulonglong uVar11;
  undefined1 auStackY_248 [32];
  int local_218;
  float local_214;
  float local_210 [2];
  FInputVertexInterface local_208;
  longlong local_1e8;
  FOutputVertexInterface local_1e0;
  FInputVertexInterfaceDeclarationBuilder local_1c0;
  FOutputVertexInterfaceDeclarationBuilder local_198;
  TOutputDataVertex<float> local_170;
  TOutputDataVertex<float> local_150;
  FInputDataVertex local_130;
  TInputDataVertex<float> local_f8;
  TInputDataVertex<float> local_c0;
  TInputDataVertex<int> local_88;
  TInputDataVertex<float> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_248;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate>::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pFVar3 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><>
                       (&local_50,&PerlinNoiseVertexNames::XPinName,&FDataVertexMetadata::EmptyBasic
                       );
    local_218 = 1;
    pFVar4 = (FInputDataVertex *)
             TInputDataVertex<int>::TInputDataVertex<int><int>
                       (&local_88,&PerlinNoiseVertexNames::OctavesPinName,
                        &FDataVertexMetadata::EmptyBasic,&local_218);
    FLazyName::Resolve(&PerlinNoiseVertexNames::OffsetPinName);
    pFVar5 = GetMetasoundDataTypeName<float>();
    local_130._padding_ = local_1e8;
    local_214 = -1.0;
    local_130._padding_ = *(longlong *)pFVar5;
    local_130._padding_._0_4_ = 1;
    local_130.Literal.Value._padding_._0_4_ = 0xbf800000;
    local_130.Literal.Value.TypeIndex = 3;
    local_130._padding_ = (longlong)&___7__TInputConstructorVertex_M_Metasound__6B_;
    pFVar6 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_c0,&PerlinNoiseVertexNames::MinValuePinName,
                        &FDataVertexMetadata::EmptyBasic,&local_214);
    local_210[0] = 1.0;
    pFVar7 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_f8,&PerlinNoiseVertexNames::MaxValuePinName,
                        &FDataVertexMetadata::EmptyBasic,local_210);
    local_208._padding_ = 0;
    local_208._padding_ = 0;
    local_208.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_208.SubInterfaces.ArrayNum = 0;
    local_208.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_1c0,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_208,
               &local_208.SubInterfaces);
    if ((local_1c0.Vertices)->ArrayMax < 5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,5,&(local_1c0.Vertices)->AllocatorInstance,(local_1c0.Vertices)->ArrayNum,
                 &(local_1c0.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1c0,pFVar3);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1c0,pFVar4);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1c0,&local_130);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1c0,pFVar6);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1c0,pFVar7);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_1c0);
    pTVar8 = TOutputDataVertex<float>::TOutputDataVertex<float><>
                       (&local_170,&PerlinNoiseVertexNames::OutputScaledPinName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar9 = TOutputDataVertex<float>::TOutputDataVertex<float><>
                       (&local_150,&PerlinNoiseVertexNames::OutputNormalizedPinName,
                        &FDataVertexMetadata::EmptyBasic);
    FOutputVertexInterface::FOutputVertexInterface(&local_1e0);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_198,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_1e0,
               &local_1e0.SubInterfaces);
    if ((local_198.Vertices)->ArrayMax < 2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,&(local_198.Vertices)->AllocatorInstance,(local_198.Vertices)->ArrayNum,
                 &(local_198.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_198,(FOutputDataVertex *)pTVar8);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_198,(FOutputDataVertex *)pTVar9);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_198);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate>::GetVertexInterface(void)'
                ::__l2::Interface,&local_208,&local_1e0);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_1e0.SubInterfaces.AllocatorInstance.Data,
               local_1e0.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_1e0.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_1e0.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_1e0._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_1e0._padding_);
    }
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
    if ((0xc < (byte)local_f8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FVertexInterface *)(*pcVar1)();
      return pFVar10;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_f8._48_1_])(&local_f8.field_0x20);
    if ((0xc < (byte)local_c0._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FVertexInterface *)(*pcVar1)();
      return pFVar10;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_c0._48_1_])(&local_c0.field_0x20);
    uVar11 = (ulonglong)local_130.Literal.Value.TypeIndex;
    if ((0xc < local_130.Literal.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FVertexInterface *)(*pcVar1)();
      return pFVar10;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar11] !=
        UE::Core::Private::TDestructorCaller<float>::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar11])(&local_130.Literal);
    }
    if ((0xc < (byte)local_88._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FVertexInterface *)(*pcVar1)();
      return pFVar10;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_88._48_1_])(&local_88.field_0x20);
    if ((0xc < (byte)local_50._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FVertexInterface *)(*pcVar1)();
      return pFVar10;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_50._48_1_])(&local_50.field_0x20);
    atexit(`Metasound::TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate>::
           GetVertexInterface'::__l2::_dynamic_atexit_destructor_for__Interface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate>::GetVertexInterface(void)'
          ::__l2::Interface;
}

// GetVertexInterface @ 14b1e4d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate>::
GetVertexInterface(void)

{
  code *pcVar1;
  bool bVar2;
  FInputDataVertex *pFVar3;
  FInputDataVertex *pFVar4;
  FName *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar8;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar9;
  FOutputVertexInterface *pFVar10;
  FVertexInterface *pFVar11;
  ulonglong uVar12;
  undefined1 auStackY_218 [32];
  int local_1e8;
  float local_1e4;
  float local_1e0 [2];
  FInputVertexInterface local_1d8;
  longlong local_1b8;
  FInputVertexInterfaceDeclarationBuilder local_1b0;
  FOutputVertexInterface local_188;
  TOutputDataVertex<Metasound::FAudioBuffer> local_168;
  TOutputDataVertex<Metasound::FAudioBuffer> local_148;
  FInputDataVertex local_128;
  TInputDataVertex<float> local_f0;
  TInputDataVertex<float> local_b8;
  TInputDataVertex<int> local_80;
  TInputDataVertex<Metasound::FAudioBuffer> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_218;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate>::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate>::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate>::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pFVar3 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FAudioBuffer>::TInputDataVertex<Metasound::FAudioBuffer><>
                       (&local_48,&PerlinNoiseVertexNames::XPinName,&FDataVertexMetadata::EmptyBasic
                       );
    local_1e8 = 1;
    pFVar4 = (FInputDataVertex *)
             TInputDataVertex<int>::TInputDataVertex<int><int>
                       (&local_80,&PerlinNoiseVertexNames::OctavesPinName,
                        &FDataVertexMetadata::EmptyBasic,&local_1e8);
    FLazyName::Resolve(&PerlinNoiseVertexNames::OffsetPinName);
    pFVar5 = GetMetasoundDataTypeName<float>();
    local_128._padding_ = local_1b8;
    local_1e4 = -1.0;
    local_128._padding_ = *(longlong *)pFVar5;
    local_128._padding_._0_4_ = 1;
    local_128.Literal.Value._padding_._0_4_ = 0xbf800000;
    local_128.Literal.Value.TypeIndex = 3;
    local_128._padding_ = (longlong)&___7__TInputConstructorVertex_M_Metasound__6B_;
    pFVar6 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_b8,&PerlinNoiseVertexNames::MinValuePinName,
                        &FDataVertexMetadata::EmptyBasic,&local_1e4);
    local_1e0[0] = 1.0;
    pFVar7 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_f0,&PerlinNoiseVertexNames::MaxValuePinName,
                        &FDataVertexMetadata::EmptyBasic,local_1e0);
    local_1d8._padding_ = 0;
    local_1d8._padding_ = 0;
    local_1d8.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d8.SubInterfaces.ArrayNum = 0;
    local_1d8.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_1b0,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_1d8,
               &local_1d8.SubInterfaces);
    if ((local_1b0.Vertices)->ArrayMax < 5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,5,&(local_1b0.Vertices)->AllocatorInstance,(local_1b0.Vertices)->ArrayNum,
                 &(local_1b0.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1b0,pFVar3);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1b0,pFVar4);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1b0,&local_128);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1b0,pFVar6);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1b0,pFVar7);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_1b0);
    pTVar8 = TOutputDataVertex<Metasound::FAudioBuffer>::
             TOutputDataVertex<Metasound::FAudioBuffer><>
                       (&local_168,&PerlinNoiseVertexNames::OutputScaledPinName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar9 = TOutputDataVertex<Metasound::FAudioBuffer>::
             TOutputDataVertex<Metasound::FAudioBuffer><>
                       (&local_148,&PerlinNoiseVertexNames::OutputNormalizedPinName,
                        &FDataVertexMetadata::EmptyBasic);
    pFVar10 = FOutputVertexInterface::
              FOutputVertexInterface<Metasound::TOutputDataVertex<Metasound::FAudioBuffer>,Metasound::TOutputDataVertex<Metasound::FAudioBuffer>_>
                        (&local_188,pTVar8,pTVar9);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate>::GetVertexInterface(void)'
                ::__l2::Interface,&local_1d8,pFVar10);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_188.SubInterfaces.AllocatorInstance.Data,
               local_188.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_188.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_188.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_188._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_188._padding_);
    }
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_1d8.SubInterfaces.AllocatorInstance.Data,
               local_1d8.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_1d8.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_1d8.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_1d8._padding_,(int)local_1d8._padding_);
    if ((FInputDataVertex *)local_1d8._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_1d8._padding_);
    }
    if ((0xc < (byte)local_f0._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar11 = (FVertexInterface *)(*pcVar1)();
      return pFVar11;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_f0._48_1_])(&local_f0.field_0x20);
    if ((0xc < (byte)local_b8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar11 = (FVertexInterface *)(*pcVar1)();
      return pFVar11;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_b8._48_1_])(&local_b8.field_0x20);
    uVar12 = (ulonglong)local_128.Literal.Value.TypeIndex;
    if ((0xc < local_128.Literal.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar11 = (FVertexInterface *)(*pcVar1)();
      return pFVar11;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar12] !=
        UE::Core::Private::TDestructorCaller<float>::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar12])(&local_128.Literal);
    }
    if ((0xc < (byte)local_80._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar11 = (FVertexInterface *)(*pcVar1)();
      return pFVar11;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_80._48_1_])(&local_80.field_0x20);
    if ((0xc < (byte)local_48._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar11 = (FVertexInterface *)(*pcVar1)();
      return pFVar11;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_48._48_1_])(&local_48.field_0x20);
    atexit(`Metasound::TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate>
           ::GetVertexInterface'::__l2::_dynamic_atexit_destructor_for__Interface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate>::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate>::GetVertexInterface(void)'
          ::__l2::Interface;
}

// Reset @ 14b1e9890

void __thiscall
Metasound::TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate>::Reset
          (TBasePerlinNoiseOperator<float,Metasound::FPerlinControlRate> *this,FResetParams *param_1
          )

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  
  if ((float)((uint)((this->Pins).Offset - __real_bf800000) & __xmm_7fffffff7fffffff7fffffff7fffffff
             ) <= __real_322bcc77) {
    uVar3 = rand();
    (this->Pins).Offset = (float)(uVar3 & 0x7fff) * __real_38000100;
  }
  fVar4 = (float)param_1->OperatorSettings->SampleRate;
  this->SampleRate = fVar4;
  this->NumFramesPerBlock = param_1->OperatorSettings->NumFramesPerBlock;
  if (fVar4 <= 0.0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SampleRate > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundPerlinNoiseNode.cpp"
                       ,0x91,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->NumFramesPerBlock < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumFramesPerBlock > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundPerlinNoiseNode.cpp"
                       ,0x92,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  **(undefined4 **)&(this->OutputScaled).field_0x8 = 0;
  **(undefined4 **)&(this->OutputNormalized).field_0x8 = 0;
  return;
}

// Reset @ 14b1e9980

void __thiscall
Metasound::TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate>::Reset
          (TBasePerlinNoiseOperator<Metasound::FAudioBuffer,Metasound::FPerlinAudioRate> *this,
          FResetParams *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  float fVar6;
  
  if ((float)((uint)((this->Pins).Offset - __real_bf800000) & __xmm_7fffffff7fffffff7fffffff7fffffff
             ) <= __real_322bcc77) {
    uVar5 = rand();
    (this->Pins).Offset = (float)(uVar5 & 0x7fff) * __real_38000100;
  }
  fVar6 = (float)param_1->OperatorSettings->SampleRate;
  this->SampleRate = fVar6;
  this->NumFramesPerBlock = param_1->OperatorSettings->NumFramesPerBlock;
  if (fVar6 <= 0.0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("SampleRate > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundPerlinNoiseNode.cpp"
                       ,0x91,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (this->NumFramesPerBlock < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumFramesPerBlock > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundPerlinNoiseNode.cpp"
                       ,0x92,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  puVar2 = *(undefined8 **)&(this->OutputScaled).field_0x8;
  iVar1 = *(int *)(puVar2 + 1);
  if (0 < iVar1) {
    memset((void *)*puVar2,0,(longlong)iVar1 << 2);
  }
  puVar2 = *(undefined8 **)&(this->OutputNormalized).field_0x8;
  iVar1 = *(int *)(puVar2 + 1);
  if (0 < iVar1) {
    memset((void *)*puVar2,0,(longlong)iVar1 << 2);
  }
  return;
}

