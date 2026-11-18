// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 9

// FLfoOperator @ 14b1404e0

FLfoOperator * __thiscall
Metasound::FLfoOperator::FLfoOperator
          (FLfoOperator *this,FOperatorSettings *param_1,TDataReadReference<float> *param_2,
          TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *param_3,
          TDataReadReference<float> *param_4,TDataReadReference<float> *param_5,
          TDataReadReference<Metasound::FTrigger> *param_6,TDataReadReference<float> *param_7,
          TDataReadReference<float> *param_8)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  FLfoOperator *pFVar5;
  float fVar6;
  
  this->_padding_ = (longlong)&___7FLfoOperator_Metasound__6B_;
  fVar6 = FOperatorSettings::GetActualBlockRate(param_1);
  this->Phase = 0.0;
  this->BlockRate = fVar6;
  *(undefined ***)&this->Frequency = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->Frequency).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->Frequency).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Frequency = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->Waveshape =
       &___7__TDataReference_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined8 *)&(this->Waveshape).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar1 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->Waveshape).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Waveshape =
       &
       ___7__TDataReadReference_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
  ;
  *(undefined ***)&this->MinValue = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->MinValue).field_0x8 = *(undefined8 *)&param_4->field_0x8;
  lVar1 = *(longlong *)&param_4->field_0x10;
  *(longlong *)&(this->MinValue).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->MinValue = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->MaxValue = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->MaxValue).field_0x8 = *(undefined8 *)&param_5->field_0x8;
  lVar1 = *(longlong *)&param_5->field_0x10;
  *(longlong *)&(this->MaxValue).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->MaxValue = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->PhaseReset = &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->PhaseReset).field_0x8 = *(undefined8 *)&param_6->field_0x8;
  lVar1 = *(longlong *)&param_6->field_0x10;
  *(longlong *)&(this->PhaseReset).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->PhaseReset = &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_
  ;
  *(undefined ***)&this->PhaseOffset = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->PhaseOffset).field_0x8 = *(undefined8 *)&param_7->field_0x8;
  lVar1 = *(longlong *)&param_7->field_0x10;
  *(longlong *)&(this->PhaseOffset).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->PhaseOffset = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->PulseWidth = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->PulseWidth).field_0x8 = *(undefined8 *)&param_8->field_0x8;
  lVar1 = *(longlong *)&param_8->field_0x10;
  *(longlong *)&(this->PulseWidth).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->PulseWidth = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->Output = &___7__TDataReference_M_Metasound__6B_;
  puVar4 = ::operator_new(0x18);
  if (puVar4 == (undefined8 *)0x0) {
    *(undefined8 *)&(this->Output).field_0x8 = 0x10;
    *(undefined8 *)&(this->Output).field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar4 + 1) = 1;
    *puVar4 = &___7__TIntrusiveReferenceController_M_0A__SharedPointerInternals__6B_;
    *(undefined8 *)((longlong)puVar4 + 0xc) = 1;
    *(undefined8 **)&(this->Output).field_0x8 = puVar4 + 2;
    *(undefined8 **)&(this->Output).field_0x10 = puVar4;
    if (puVar4 + 2 == (undefined8 *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FLfoOperator *)(*pcVar2)();
        return pFVar5;
      }
    }
  }
  *(undefined ***)&this->Output = &___7__TDataWriteReference_M_Metasound__6B_;
  fVar6 = **(float **)&(this->PhaseOffset).field_0x8;
  if (__real_43b40000 <= fVar6) {
    fVar6 = __real_43b40000;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  this->Phase = fVar6 * __real_3b360b61;
  return this;
}

// operator() @ 14b14db70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::FLfoOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar2;
  ITextData *pIVar3;
  TRefCountPtr<ITextData> TVar4;
  ForAnyElementType FVar5;
  int iVar6;
  FText *pFVar7;
  FVertexInterface *pFVar8;
  FScriptContainerElement *pFVar9;
  FName local_res10;
  FNodeClassName local_28;
  
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_res10,L"LFO");
  Metasound::FNodeClassName::FNodeClassName
            (&local_28,&Metasound::StandardNodes::Namespace,&local_res10,
             &Metasound::StandardNodes::AudioVariant);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_28.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_28.Name;
  (__return_storage_ptr__->ClassName).Variant = local_28.Variant;
  pFVar7 = FText::FText((FText *)&local_28);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar7);
  if (local_28.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_28.Namespace + 0x10))();
  }
  pFVar7 = FText::FText((FText *)&local_28);
  FText::operator=(&__return_storage_ptr__->Description,pFVar7);
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
  pFVar8 = Metasound::FLfoOperator::GetVertexInterface();
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar8);
  iVar6 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance,piVar1);
  }
  pFVar9 = (__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar6 + 1;
  pFVar9 = pFVar9 + (longlong)iVar6 * 0x10;
  *(undefined8 *)pFVar9 = 0;
  TVar4 = Metasound::NodeCategories::Generators.TextData;
  *(ITextData **)pFVar9 = Metasound::NodeCategories::Generators.TextData.Reference;
  if (TVar4.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar4.Reference + 8))(TVar4.Reference,&local_res10);
  }
  *(uint *)(pFVar9 + 8) = Metasound::NodeCategories::Generators.Flags;
  pTVar2 = &__return_storage_ptr__->Keywords;
  if (pTVar2 != &Metasound::LFOKeywords) {
    DestructItems<FText,int>
              ((FText *)(pTVar2->AllocatorInstance).Data,(__return_storage_ptr__->Keywords).ArrayNum
              );
    FVar5 = Metasound::LFOKeywords.AllocatorInstance;
    piVar1 = &(__return_storage_ptr__->Keywords).ArrayMax;
    iVar6 = Metasound::LFOKeywords.ArrayNum;
    (__return_storage_ptr__->Keywords).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar6,*piVar1,&pTVar2->AllocatorInstance,iVar6,piVar1);
      ConstructItems<FText,FText,int>((pTVar2->AllocatorInstance).Data,(FText *)FVar5.Data,iVar6);
    }
  }
  return __return_storage_ptr__;
}

// BindInputs @ 14b15f290

void __thiscall
Metasound::FLfoOperator::BindInputs(FLfoOperator *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<float> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<float> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&LfoVertexNames::LfoBaseFrequencyPinName);
  local_res18 = &this->Frequency;
  local_30 = &local_res18;
  local_48._0_8_ = &local_res8;
  local_28._8_8_ = local_48;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
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
  FLazyName::Resolve(&LfoVertexNames::WaveshapePinName);
  local_res18 = (TDataReadReference<float> *)&this->Waveshape;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
  local_28._0_8_ = &local_res8;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&LfoVertexNames::MinOutputValuePinName);
  local_res18 = &this->MinValue;
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
  FLazyName::Resolve(&LfoVertexNames::MaxOutputValuePinName);
  local_res18 = &this->MaxValue;
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
  FLazyName::Resolve(&LfoVertexNames::PhaseOffsetPinName);
  local_res18 = &this->PhaseOffset;
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
  FLazyName::Resolve(&LfoVertexNames::LfoPhaseResetPinName);
  local_res18 = (TDataReadReference<float> *)&this->PhaseReset;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
  local_28._0_8_ = &local_res8;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&LfoVertexNames::LfoPulseWidthPinName);
  local_res18 = &this->PulseWidth;
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

// BindOutputs @ 14b160240

void __thiscall
Metasound::FLfoOperator::BindOutputs(FLfoOperator *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<float> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<float> *local_30;
  code *local_28;
  TDataWriteReference<float> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&LfoVertexNames::LfoOutPinName);
  local_res18[0] = &this->Output;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<float>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// CreateOperator @ 14b1779c0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::FLfoOperator::CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  TDataReadReference<float> *pTVar2;
  TDataReadReference<float> *pTVar3;
  TDataReadReference<Metasound::FTrigger> *pTVar4;
  TDataReadReference<float> *pTVar5;
  TDataReadReference<float> *pTVar6;
  FLfoOperator *this_00;
  FLfoOperator *pFVar7;
  FName local_res8;
  FName local_res10;
  FName local_res20;
  FName local_148;
  FName local_140;
  FName local_138;
  FName local_130;
  TDataReadReference<float> *local_128;
  TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> *local_120;
  undefined1 local_118 [32];
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&LfoVertexNames::LfoPulseWidthPinName);
  pTVar2 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
                     (this,(TDataReadReference<float> *)local_58,&local_res8,pFVar1);
  FLazyName::Resolve(&LfoVertexNames::PhaseOffsetPinName);
  pTVar3 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
                     (this,(TDataReadReference<float> *)local_78,&local_res10,pFVar1);
  FLazyName::Resolve(&LfoVertexNames::LfoPhaseResetPinName);
  pTVar4 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
                     (this,(TDataReadReference<Metasound::FTrigger> *)local_98,&local_res20,pFVar1);
  FLazyName::Resolve(&LfoVertexNames::MaxOutputValuePinName);
  pTVar5 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
                     (this,(TDataReadReference<float> *)local_b8,&local_148,pFVar1);
  FLazyName::Resolve(&LfoVertexNames::MinOutputValuePinName);
  local_128 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
                        (this,(TDataReadReference<float> *)local_d8,&local_140,pFVar1);
  FLazyName::Resolve(&LfoVertexNames::WaveshapePinName);
  local_120 = FInputVertexInterfaceData::
              GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>
                        (this,(TDataReadReference<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>
                               *)local_f8,&local_138,pFVar1);
  FLazyName::Resolve(&LfoVertexNames::LfoBaseFrequencyPinName);
  pTVar6 = FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
                     (this,(TDataReadReference<float> *)local_118,&local_130,pFVar1);
  this_00 = ::operator_new(0x120);
  pFVar7 = (FLfoOperator *)0x0;
  if (this_00 != (FLfoOperator *)0x0) {
    pFVar7 = FLfoOperator(this_00,pFVar1,pTVar6,local_120,local_128,pTVar5,pTVar4,pTVar3,pTVar2);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_118._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_f8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_d8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_b8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_98._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_78._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_58._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// Execute @ 14b189be0

void __thiscall Metasound::FLfoOperator::Execute(FLfoOperator *this)

{
  float *pfVar1;
  int iVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  FGeneratorArgs local_a8 [2];
  
  fVar13 = __real_3f000000;
  fVar4 = __real_3f800000;
  local_a8[0].SampleRate = this->BlockRate;
  auVar10 = ZEXT416((uint)local_a8[0].SampleRate);
  pfVar1 = &this->Phase;
  local_a8[0].GlideEaseFactor = 0.0;
  fVar14 = **(float **)&(this->Frequency).field_0x8;
  if (local_a8[0].SampleRate * __real_3f000000 <= fVar14) {
    fVar14 = local_a8[0].SampleRate * __real_3f000000;
  }
  auVar8 = ZEXT416((uint)fVar14);
  local_a8[0].BiPolar = true;
  local_a8[0].PulseWidth = **(float **)&(this->PulseWidth).field_0x8;
  if (__real_3f800000 <= local_a8[0].PulseWidth) {
    local_a8[0].PulseWidth = __real_3f800000;
  }
  local_a8[0].AlignedBuffer.DataPtr = (float *)0x0;
  if (fVar14 <= 0.0) {
    auVar8 = ZEXT816(0) << 0x20;
  }
  local_a8[0].AlignedBuffer.ArrayNum = 0;
  local_a8[0].FM.DataPtr = (float *)0x0;
  local_a8[0].FM.ArrayNum = 0;
  if (local_a8[0].PulseWidth <= 0.0) {
    local_a8[0].PulseWidth = 0.0;
  }
  local_a8[0].FrequencyHz = auVar8._0_4_;
  fVar14 = local_a8[0].FrequencyHz / local_a8[0].SampleRate;
  bVar6 = FTrigger::IsTriggeredInBlock(*(FTrigger **)&(this->PhaseReset).field_0x8);
  if (bVar6) {
    fVar7 = **(float **)&(this->PhaseOffset).field_0x8;
    if (__real_43b40000 <= fVar7) {
      fVar7 = __real_43b40000;
    }
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    *pfVar1 = fVar7 * __real_3b360b61;
  }
  fVar7 = *pfVar1;
  if (fVar4 <= fVar7) {
    auVar8 = roundps(auVar8,ZEXT416((uint)fVar7),3);
    fVar7 = fVar7 - auVar8._0_4_;
    *pfVar1 = fVar7;
  }
  if (fVar7 < 0.0) {
    auVar10 = roundps(auVar10,ZEXT416((uint)fVar7),3);
    fVar7 = fVar7 - (auVar10._0_4_ + fVar4);
    *pfVar1 = fVar7;
  }
  fVar5 = __real_bf800000;
  fVar12 = 0.0;
  iVar2 = **(int **)&(this->Waveshape).field_0x8;
  if (iVar2 == 0) {
    fVar12 = Generators::FSineWaveTableGenerator::operator()
                       (&this->SineGenerator,fVar7,fVar14,local_a8);
  }
  else if (iVar2 == 1) {
    fVar12 = (fVar7 + fVar7) - fVar4;
    fVar9 = fVar12 * __real_3fc00000;
    fVar11 = __real_bf800000;
    if ((__real_c0400000 <= fVar9) && (fVar11 = fVar4, fVar9 <= __real_40400000)) {
      fVar12 = fVar12 * fVar12 * __real_40100000;
      fVar11 = ((fVar12 + __real_41d80000) * fVar9) / (fVar12 * __real_41100000 + __real_41d80000);
    }
    fVar9 = (float)((uint)fVar14 & __xmm_7fffffff7fffffff7fffffff7fffffff);
    fVar12 = 0.0;
    if (fVar7 <= fVar4 - fVar9) {
      if (fVar7 < fVar9) {
        fVar7 = fVar7 / fVar9;
        fVar12 = (fVar7 * fVar7 - (fVar7 + fVar7)) + fVar4;
      }
    }
    else {
      fVar9 = (fVar7 - fVar4) / fVar9;
      fVar12 = ((float)((uint)(fVar9 * fVar9) ^ __xmm_80000000800000008000000080000000) -
               (fVar9 + fVar9)) - fVar4;
    }
    fVar12 = fVar11 * __real_3f8d69ce + fVar12;
  }
  else if (iVar2 == 2) {
    fVar11 = fVar7 * __real_40c90fdb - __real_40490fdb;
    fVar7 = (float)((uint)fVar11 & __xmm_7fffffff7fffffff7fffffff7fffffff);
    fVar12 = __real_40490fdb - fVar7;
    fVar12 = FMath::FastAsin((fVar12 * fVar11 * __real_41800000) /
                             (__real_42456461 - fVar12 * fVar7 * __real_40800000));
    fVar12 = fVar12 * __real_3f22f984;
  }
  else if (iVar2 == 3) {
    fVar12 = Generators::FSquarePolysmoothGenerator::operator()
                       (&this->SquareGenerator,fVar7,fVar14,local_a8);
  }
  else {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundOscillatorNodes.cpp"
                       ,0x44a,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  fVar7 = **(float **)&(this->MinValue).field_0x8;
  fVar13 = (fVar12 - fVar5) * fVar13;
  if (fVar4 <= fVar13) {
    fVar13 = fVar4;
  }
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  **(float **)&(this->Output).field_0x8 =
       fVar13 * (**(float **)&(this->MaxValue).field_0x8 - fVar7) + fVar7;
  this->Phase = fVar14 + this->Phase;
  return;
}

// GetNodeInfo @ 14b197bd0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FLfoOperator::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FLfoOperator::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FLfoOperator::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FLfoOperator::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::FLfoOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FLfoOperator::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::FLfoOperator::GetNodeInfo'::__l2::_dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FLfoOperator::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FLfoOperator::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FLfoOperator::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetVertexInterface @ 14b19a450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::FLfoOperator::GetVertexInterface(void)

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
  FVertexInterface *pFVar11;
  undefined1 auStackY_2b8 [32];
  float local_288;
  int local_284;
  float local_280;
  float local_27c;
  float local_278;
  float local_274;
  FInputVertexInterface local_270;
  FOutputVertexInterface local_250;
  FInputVertexInterfaceDeclarationBuilder local_230;
  FOutputVertexInterfaceDeclarationBuilder local_208;
  TOutputDataVertex<float> local_1e0;
  TInputDataVertex<float> local_1c0;
  TInputDataVertex<float> local_188;
  TInputDataVertex<Metasound::FTrigger> local_150;
  TInputDataVertex<float> local_118;
  TInputDataVertex<float> local_e0;
  undefined1 local_a8 [32];
  undefined1 local_88 [16];
  byte local_78;
  TInputDataVertex<float> local_70;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FLfoOperator::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FLfoOperator::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FLfoOperator::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    local_288 = 5.0;
    pFVar3 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_70,&LfoVertexNames::LfoBaseFrequencyPinName,
                        &FDataVertexMetadata::EmptyBasic,&local_288);
    local_284 = 0;
    pFVar4 = (FInputDataVertex *)
             TInputDataVertex<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
             TInputDataVertex<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_><int>
                       (local_a8,&LfoVertexNames::WaveshapePinName,&FDataVertexMetadata::EmptyBasic,
                        &local_284);
    local_280 = -1.0;
    pFVar5 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_e0,&LfoVertexNames::MinOutputValuePinName,
                        &FDataVertexMetadata::EmptyBasic,&local_280);
    local_27c = 1.0;
    pFVar6 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_118,&LfoVertexNames::MaxOutputValuePinName,
                        &FDataVertexMetadata::EmptyBasic,&local_27c);
    pFVar7 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                       (&local_150,&LfoVertexNames::LfoPhaseResetPinName,
                        &FDataVertexMetadata::EmptyBasic);
    local_278 = 0.0;
    pFVar8 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_188,&LfoVertexNames::PhaseOffsetPinName,
                        &FDataVertexMetadata::EmptyBasic,&local_278);
    local_274 = 0.5;
    pFVar9 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_1c0,&LfoVertexNames::LfoPulseWidthPinName,
                        &FDataVertexMetadata::EmptyBasic,&local_274);
    local_270._padding_ = 0;
    local_270._padding_ = 0;
    local_270.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_270.SubInterfaces.ArrayNum = 0;
    local_270.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_230,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_270,
               &local_270.SubInterfaces);
    if ((local_230.Vertices)->ArrayMax < 7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,7,&(local_230.Vertices)->AllocatorInstance,(local_230.Vertices)->ArrayNum,
                 &(local_230.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_230,pFVar3);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_230,pFVar4);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_230,pFVar5);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_230,pFVar6);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_230,pFVar7);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_230,pFVar8);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_230,pFVar9);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_230);
    pTVar10 = TOutputDataVertex<float>::TOutputDataVertex<float><>
                        (&local_1e0,&LfoVertexNames::LfoOutPinName,&FDataVertexMetadata::EmptyBasic)
    ;
    FOutputVertexInterface::FOutputVertexInterface(&local_250);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_208,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_250,
               &local_250.SubInterfaces);
    if ((local_208.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,&(local_208.Vertices)->AllocatorInstance,(local_208.Vertices)->ArrayNum,
                 &(local_208.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_208,(FOutputDataVertex *)pTVar10);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_208);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FLfoOperator::GetVertexInterface(void)'
                ::__l2::Interface,&local_270,&local_250);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_250.SubInterfaces.AllocatorInstance.Data,
               local_250.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_250.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_250.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_250._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_250._padding_);
    }
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_270.SubInterfaces.AllocatorInstance.Data,
               local_270.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_270.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_270.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_270._padding_,(int)local_270._padding_);
    if ((FInputDataVertex *)local_270._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_270._padding_);
    }
    if ((0xc < (byte)local_1c0._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar11 = (FVertexInterface *)(*pcVar1)();
      return pFVar11;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_1c0._48_1_])(&local_1c0.field_0x20);
    if ((0xc < (byte)local_188._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar11 = (FVertexInterface *)(*pcVar1)();
      return pFVar11;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_188._48_1_])(&local_188.field_0x20);
    if ((0xc < (byte)local_150._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar11 = (FVertexInterface *)(*pcVar1)();
      return pFVar11;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_150._48_1_])(&local_150.field_0x20);
    if ((0xc < (byte)local_118._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar11 = (FVertexInterface *)(*pcVar1)();
      return pFVar11;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_118._48_1_])(&local_118.field_0x20);
    if ((0xc < (byte)local_e0._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar11 = (FVertexInterface *)(*pcVar1)();
      return pFVar11;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_e0._48_1_])(&local_e0.field_0x20);
    if ((0xc < local_78) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar11 = (FVertexInterface *)(*pcVar1)();
      return pFVar11;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_78])(local_88);
    if ((0xc < (byte)local_70._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar11 = (FVertexInterface *)(*pcVar1)();
      return pFVar11;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_70._48_1_])(&local_70.field_0x20);
    atexit(`Metasound::FLfoOperator::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__Interface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FLfoOperator::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FLfoOperator::GetVertexInterface(void)'
          ::__l2::Interface;
}

// Reset @ 14b1a7a00

void __thiscall Metasound::FLfoOperator::Reset(FLfoOperator *this,FResetParams *param_1)

{
  undefined4 *puVar1;
  float fVar2;
  
  fVar2 = **(float **)&(this->PhaseOffset).field_0x8;
  if (__real_43b40000 <= fVar2) {
    fVar2 = __real_43b40000;
  }
  puVar1 = *(undefined4 **)&(this->Output).field_0x8;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  this->Phase = fVar2 * __real_3b360b61;
  *puVar1 = 0;
  return;
}

