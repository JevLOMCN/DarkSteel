// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 10

// FITDPannerOperator @ 14b0b40a0

FITDPannerOperator * __thiscall
Metasound::FITDPannerOperator::FITDPannerOperator
          (FITDPannerOperator *this,FOperatorSettings *param_1,
          TDataReadReference<Metasound::FAudioBuffer> *param_2,TDataReadReference<float> *param_3,
          TDataReadReference<float> *param_4,TDataReadReference<float> *param_5)

{
  longlong lVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  
  this->_padding_ = (longlong)&___7FITDPannerOperator_Metasound__6B_;
  *(undefined ***)&this->AudioInput = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_
  ;
  *(undefined8 *)&(this->AudioInput).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->AudioInput).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->AudioInput =
       &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined ***)&this->PanningAngle = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->PanningAngle).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar1 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->PanningAngle).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->PanningAngle = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->DistanceFactor = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->DistanceFactor).field_0x8 = *(undefined8 *)&param_4->field_0x8;
  lVar1 = *(longlong *)&param_4->field_0x10;
  *(longlong *)&(this->DistanceFactor).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->DistanceFactor = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->HeadWidth = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->HeadWidth).field_0x8 = *(undefined8 *)&param_5->field_0x8;
  lVar1 = *(longlong *)&param_5->field_0x10;
  *(longlong *)&(this->HeadWidth).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->HeadWidth = &___7__TDataReadReference_M_Metasound__6B_;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)&this->AudioLeftOutput,NewObject,param_1);
  *(undefined ***)&this->AudioLeftOutput =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)&this->AudioRightOutput,NewObject,param_1);
  *(undefined ***)&this->AudioRightOutput =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  this->CurrAngle = 0.0;
  this->CurrX = 0.0;
  this->CurrY = 0.0;
  this->CurrDistanceFactor = 0.0;
  this->CurrHeadWidth = 0.0;
  this->CurrLeftGain = 0.0;
  this->CurrRightGain = 0.0;
  this->CurrLeftDelay = 0.0;
  this->CurrRightDelay = 0.0;
  this->PrevLeftGain = 0.0;
  this->PrevRightGain = 0.0;
  Audio::FDelay::FDelay(&this->LeftDelay);
  Audio::FDelay::FDelay(&this->RightDelay);
  fVar3 = __real_3f000000;
  Audio::FDelay::Init(&this->LeftDelay,(float)param_1->SampleRate,__real_3f000000);
  Audio::FDelay::Init(&this->RightDelay,(float)param_1->SampleRate,fVar3);
  fVar3 = expf(__real_c1200000 / (float)param_1->SampleRate);
  fVar3 = __real_3f800000 - fVar3;
  Audio::FDelay::SetEaseFactor(&this->LeftDelay,fVar3);
  Audio::FDelay::SetEaseFactor(&this->RightDelay,fVar3);
  fVar3 = **(float **)&(this->PanningAngle).field_0x8;
  if (__real_43b40000 <= fVar3) {
    fVar3 = __real_43b40000;
  }
  pfVar2 = *(float **)&(this->DistanceFactor).field_0x8;
  fVar4 = 0.0;
  if (fVar3 <= 0.0) {
    fVar3 = fVar4;
  }
  this->CurrAngle = fVar3;
  fVar3 = *pfVar2;
  if (__real_3f800000 <= fVar3) {
    fVar3 = __real_3f800000;
  }
  if (fVar3 <= 0.0) {
    fVar3 = fVar4;
  }
  this->CurrDistanceFactor = fVar3;
  fVar3 = **(float **)&param_5->field_0x8;
  if (**(float **)&param_5->field_0x8 <= 0.0) {
    fVar3 = fVar4;
  }
  this->CurrHeadWidth = fVar3;
  UpdateParams(this,true);
  this->PrevLeftGain = this->CurrLeftGain;
  this->PrevRightGain = this->CurrRightGain;
  return this;
}

// operator() @ 14b0bc550

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::FITDPannerOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  longlong *plVar1;
  int *piVar2;
  ITextData *pIVar3;
  TRefCountPtr<ITextData> TVar4;
  int iVar5;
  FText *pFVar6;
  FVertexInterface *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 *puVar9;
  longlong lVar10;
  FName local_res10;
  FName local_res18;
  undefined1 local_28 [32];
  
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_res18,L"ITD Panner");
  ::FName::FName(&local_res10,L"");
  Metasound::FNodeClassName::FNodeClassName
            ((FNodeClassName *)local_28,&Metasound::StandardNodes::Namespace,&local_res18,
             &local_res10);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace.ComparisonIndex = (FNameEntryId)local_28._0_4_;
  (__return_storage_ptr__->ClassName).Namespace.Number = local_28._4_4_;
  (__return_storage_ptr__->ClassName).Name.ComparisonIndex = (FNameEntryId)local_28._8_4_;
  (__return_storage_ptr__->ClassName).Name.Number = local_28._12_4_;
  (__return_storage_ptr__->ClassName).Variant.ComparisonIndex = (FNameEntryId)local_28._16_4_;
  (__return_storage_ptr__->ClassName).Variant.Number = local_28._20_4_;
  pFVar6 = FText::FText((FText *)local_28);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar6);
  if ((FName)local_28._0_8_ != (FName)0x0) {
    (**(code **)(*(longlong *)local_28._0_8_ + 0x10))();
  }
  pFVar6 = FText::FText((FText *)local_28);
  FText::operator=(&__return_storage_ptr__->Description,pFVar6);
  if ((FName)local_28._0_8_ != (FName)0x0) {
    (**(code **)(*(longlong *)local_28._0_8_ + 0x10))();
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
  pFVar7 = Metasound::FITDPannerOperator::GetVertexInterface();
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar7);
  iVar5 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  piVar2 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  if (iVar5 == *piVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance,piVar2);
  }
  pFVar8 = (__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar5 + 1;
  pFVar8 = pFVar8 + (longlong)iVar5 * 0x10;
  *(undefined8 *)pFVar8 = 0;
  TVar4 = Metasound::NodeCategories::Spatialization.TextData;
  *(ITextData **)pFVar8 = Metasound::NodeCategories::Spatialization.TextData.Reference;
  if (TVar4.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar4.Reference + 8))(TVar4.Reference,&local_res10);
  }
  *(uint *)(pFVar8 + 8) = Metasound::NodeCategories::Spatialization.Flags;
  FText::FText((FText *)local_28);
  FText::FText((FText *)(local_28 + 0x10));
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->Keywords).AllocatorInstance.Data,
             (__return_storage_ptr__->Keywords).ArrayNum);
  lVar10 = 2;
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->Keywords,(FText *)local_28,2,
             (__return_storage_ptr__->Keywords).ArrayMax);
  puVar9 = &stack0xfffffffffffffff8;
  do {
    plVar1 = (longlong *)(puVar9 + -0x10);
    puVar9 = puVar9 + -0x10;
    lVar10 = lVar10 + -1;
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar1 + 0x10))();
    }
  } while (lVar10 != 0);
  return __return_storage_ptr__;
}

// BindInputs @ 14b0bf460

void __thiscall
Metasound::FITDPannerOperator::BindInputs
          (FITDPannerOperator *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FAudioBuffer> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<Metasound::FAudioBuffer> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&ITDPannerVertexNames::InputAudioName);
  local_res18 = &this->AudioInput;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_28._8_8_ = local_48;
  local_48._0_8_ = &local_res8;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_48._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_28,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&ITDPannerVertexNames::InputPanAngleName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->PanningAngle;
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
  FLazyName::Resolve(&ITDPannerVertexNames::InputDistanceFactorName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->DistanceFactor;
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
  FLazyName::Resolve(&ITDPannerVertexNames::InputHeadWidthName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->HeadWidth;
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

// BindOutputs @ 14b0bf930

void __thiscall
Metasound::FITDPannerOperator::BindOutputs
          (FITDPannerOperator *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FAudioBuffer> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataWriteReference<Metasound::FAudioBuffer> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&ITDPannerVertexNames::OutputAudioLeftName);
  local_res18 = &this->AudioLeftOutput;
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
  FLazyName::Resolve(&ITDPannerVertexNames::OutputAudioRightName);
  local_res18 = &this->AudioRightOutput;
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

// CreateOperator @ 14b0cce50

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::FITDPannerOperator::CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  FITDPannerOperator *this_00;
  FITDPannerOperator *pFVar2;
  FName local_res8;
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  undefined1 local_28 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ITDPannerVertexNames::InputAudioName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>
            (this,(TDataReadReference<Metasound::FAudioBuffer> *)local_28,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ITDPannerVertexNames::InputPanAngleName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_48,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ITDPannerVertexNames::InputDistanceFactorName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_68,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&ITDPannerVertexNames::InputHeadWidthName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_88,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x1a8);
  pFVar2 = (FITDPannerOperator *)0x0;
  if (this_00 != (FITDPannerOperator *)0x0) {
    pFVar2 = FITDPannerOperator(this_00,pFVar1,
                                (TDataReadReference<Metasound::FAudioBuffer> *)local_28,
                                (TDataReadReference<float> *)local_48,
                                (TDataReadReference<float> *)local_68,
                                (TDataReadReference<float> *)local_88);
  }
  param_1->Node = (INode *)pFVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_88._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_68._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_48._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_28._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// Execute @ 14b0d3160

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Metasound::FITDPannerOperator::Execute(FITDPannerOperator *this)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  float *pfVar4;
  float *pfVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uStack_7c;
  undefined4 uStack_6c;
  TArrayView<float,int> local_68;
  TArrayView<float,int> local_58;
  TArrayView<float,int> local_48;
  TArrayView<float,int> local_38 [2];
  
  fVar7 = __real_322bcc77;
  fVar15 = **(float **)&(this->HeadWidth).field_0x8;
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  fVar16 = **(float **)&(this->PanningAngle).field_0x8;
  if (__real_43b40000 <= fVar16) {
    fVar16 = __real_43b40000;
  }
  fVar14 = **(float **)&(this->DistanceFactor).field_0x8;
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  if (__real_3f800000 <= fVar14) {
    fVar14 = __real_3f800000;
  }
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  if (((__real_322bcc77 <
        (float)((uint)(fVar16 - this->CurrHeadWidth) & __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
      (__real_322bcc77 <
       (float)((uint)(fVar14 - this->CurrAngle) & __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
     (__real_322bcc77 <
      (float)((uint)(fVar15 - this->CurrDistanceFactor) & __xmm_7fffffff7fffffff7fffffff7fffffff)))
  {
    this->CurrHeadWidth = fVar15;
    this->CurrAngle = fVar16;
    this->CurrDistanceFactor = fVar14;
    UpdateParams(this,false);
  }
  plVar2 = *(longlong **)&(this->AudioInput).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar2[2] != (int)plVar2[1])) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  lVar11 = *plVar2;
  lVar10 = *(longlong *)&(this->AudioInput).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar10 + 0x10) != *(int *)(lVar10 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  iVar1 = *(int *)(lVar10 + 8);
  lVar10 = (longlong)iVar1;
  plVar2 = *(longlong **)&(this->AudioLeftOutput).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar2[2] != (int)plVar2[1])) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  lVar12 = *plVar2;
  plVar2 = *(longlong **)&(this->AudioRightOutput).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && ((int)plVar2[2] != (int)plVar2[1])) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  lVar9 = *plVar2;
  puVar3 = *(undefined8 **)&(this->AudioLeftOutput).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar3 + 2) != *(int *)(puVar3 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pfVar4 = (float *)*puVar3;
  if ((iVar1 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  puVar3 = *(undefined8 **)&(this->AudioRightOutput).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar3 + 2) != *(int *)(puVar3 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pfVar5 = (float *)*puVar3;
  if ((iVar1 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (0 < lVar10) {
    lVar12 = lVar12 - lVar11;
    lVar9 = lVar9 - lVar11;
    do {
      uVar13 = (**(code **)((this->LeftDelay)._padding_ + 8))(&this->LeftDelay);
      *(undefined4 *)(lVar11 + lVar12) = uVar13;
      uVar13 = (**(code **)((this->RightDelay)._padding_ + 8))(&this->RightDelay);
      *(undefined4 *)(lVar11 + lVar9) = uVar13;
      lVar11 = lVar11 + 4;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  fVar15 = this->PrevLeftGain;
  local_68._12_4_ = uStack_7c;
  local_68.ArrayNum = iVar1;
  if (fVar7 < (float)((uint)(fVar15 - this->CurrLeftDelay) & __xmm_7fffffff7fffffff7fffffff7fffffff)
     ) {
    local_48.DataPtr = pfVar4;
    local_48._8_8_ = local_68._8_8_;
    Audio::ArrayFade(&local_48,fVar15,this->CurrLeftGain);
    local_38[0]._12_4_ = uStack_6c;
    local_38[0].ArrayNum = iVar1;
    local_38[0].DataPtr = pfVar5;
    Audio::ArrayFade(local_38,this->PrevRightGain,this->CurrRightGain);
    this->PrevLeftGain = this->CurrLeftGain;
    this->PrevRightGain = this->CurrRightGain;
    return;
  }
  local_68.DataPtr = pfVar4;
  Audio::ArrayMultiplyByConstantInPlace(&local_68,fVar15);
  local_58._12_4_ = uStack_6c;
  local_58.ArrayNum = iVar1;
  local_58.DataPtr = pfVar5;
  Audio::ArrayMultiplyByConstantInPlace(&local_58,this->PrevRightGain);
  return;
}

// GetNodeInfo @ 14b0d97f0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FITDPannerOperator::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `Metasound::FITDPannerOperator::GetNodeInfo'::__l2::<lambda_1>::operator()(local_res8,&::Info)
      ;
      atexit(`Metasound::FITDPannerOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&::_TSS0);
      return &::Info;
    }
  }
  return &::Info;
}

// GetVertexInterface @ 14b0e0ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::FITDPannerOperator::GetVertexInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar3;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar4;
  FInputDataVertex *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FInputDataVertex *pFVar8;
  FVertexInterface *pFVar9;
  undefined1 auStackY_208 [32];
  float local_1d8;
  float local_1d4;
  float local_1d0 [2];
  FInputVertexInterface local_1c8;
  FOutputVertexInterface local_1a8;
  FInputVertexInterfaceDeclarationBuilder local_188;
  FOutputVertexInterfaceDeclarationBuilder local_160;
  TOutputDataVertex<Metasound::FAudioBuffer> local_138;
  TOutputDataVertex<Metasound::FAudioBuffer> local_118;
  TInputDataVertex<Metasound::FAudioBuffer> local_f8;
  TInputDataVertex<float> local_c0;
  TInputDataVertex<float> local_88;
  TInputDataVertex<float> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_208;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pTVar3 = TOutputDataVertex<Metasound::FAudioBuffer>::
             TOutputDataVertex<Metasound::FAudioBuffer><>
                       (&local_138,&ITDPannerVertexNames::OutputAudioRightName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar4 = TOutputDataVertex<Metasound::FAudioBuffer>::
             TOutputDataVertex<Metasound::FAudioBuffer><>
                       (&local_118,&ITDPannerVertexNames::OutputAudioLeftName,
                        &FDataVertexMetadata::EmptyBasic);
    FOutputVertexInterface::FOutputVertexInterface(&local_1a8);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_160,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_1a8,
               &local_1a8.SubInterfaces);
    if ((local_160.Vertices)->ArrayMax < 2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,&(local_160.Vertices)->AllocatorInstance,(local_160.Vertices)->ArrayNum,
                 &(local_160.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_160,(FOutputDataVertex *)pTVar4);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_160,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_160);
    local_1d8 = 34.0;
    pFVar5 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_50,&ITDPannerVertexNames::InputHeadWidthName,
                        &FDataVertexMetadata::EmptyBasic,&local_1d8);
    local_1d4 = 0.0;
    pFVar6 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_88,&ITDPannerVertexNames::InputDistanceFactorName,
                        &FDataVertexMetadata::EmptyBasic,&local_1d4);
    local_1d0[0] = 90.0;
    pFVar7 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_c0,&ITDPannerVertexNames::InputPanAngleName,
                        &FDataVertexMetadata::EmptyBasic,local_1d0);
    pFVar8 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FAudioBuffer>::TInputDataVertex<Metasound::FAudioBuffer><>
                       (&local_f8,&ITDPannerVertexNames::InputAudioName,
                        &FDataVertexMetadata::EmptyBasic);
    local_1c8._padding_ = 0;
    local_1c8._padding_ = 0;
    local_1c8.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c8.SubInterfaces.ArrayNum = 0;
    local_1c8.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_188,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_1c8,
               &local_1c8.SubInterfaces);
    if ((local_188.Vertices)->ArrayMax < 4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,4,&(local_188.Vertices)->AllocatorInstance,(local_188.Vertices)->ArrayNum,
                 &(local_188.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_188,pFVar8);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_188,pFVar7);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_188,pFVar6);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_188,pFVar5);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_188);
    FVertexInterface::FVertexInterface(&::Interface,&local_1c8,&local_1a8);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_1c8.SubInterfaces.AllocatorInstance.Data,
               local_1c8.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_1c8.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_1c8.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_1c8._padding_,(int)local_1c8._padding_);
    if ((FInputDataVertex *)local_1c8._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_1c8._padding_);
    }
    if ((0xc < (byte)local_f8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar9 = (FVertexInterface *)(*pcVar1)();
      return pFVar9;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_f8._48_1_])(&local_f8.field_0x20);
    if ((0xc < (byte)local_c0._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar9 = (FVertexInterface *)(*pcVar1)();
      return pFVar9;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_c0._48_1_])(&local_c0.field_0x20);
    if ((0xc < (byte)local_88._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar9 = (FVertexInterface *)(*pcVar1)();
      return pFVar9;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_88._48_1_])(&local_88.field_0x20);
    if ((0xc < (byte)local_50._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar9 = (FVertexInterface *)(*pcVar1)();
      return pFVar9;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_50._48_1_])(&local_50.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_1a8.SubInterfaces.AllocatorInstance.Data,
               local_1a8.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_1a8.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_1a8.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_1a8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_1a8._padding_);
    }
    atexit(`Metasound::FITDPannerOperator::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__Interface__);
    _Init_thread_footer(&::_TSS0);
  }
  return &::Interface;
}

// Reset @ 14b0e5380

void __thiscall Metasound::FITDPannerOperator::Reset(FITDPannerOperator *this,FResetParams *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  float *pfVar3;
  float fVar4;
  
  puVar2 = *(undefined8 **)&(this->AudioLeftOutput).field_0x8;
  iVar1 = *(int *)(puVar2 + 1);
  if (0 < iVar1) {
    memset((void *)*puVar2,0,(longlong)iVar1 << 2);
  }
  puVar2 = *(undefined8 **)&(this->AudioRightOutput).field_0x8;
  iVar1 = *(int *)(puVar2 + 1);
  if (0 < iVar1) {
    memset((void *)*puVar2,0,(longlong)iVar1 << 2);
  }
  Audio::FDelay::Reset(&this->LeftDelay);
  Audio::FDelay::Reset(&this->RightDelay);
  fVar4 = **(float **)&(this->PanningAngle).field_0x8;
  if (__real_43b40000 <= fVar4) {
    fVar4 = __real_43b40000;
  }
  pfVar3 = *(float **)&(this->DistanceFactor).field_0x8;
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  this->CurrAngle = fVar4;
  fVar4 = *pfVar3;
  if (__real_3f800000 <= fVar4) {
    fVar4 = __real_3f800000;
  }
  pfVar3 = *(float **)&(this->HeadWidth).field_0x8;
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  this->CurrDistanceFactor = fVar4;
  fVar4 = *pfVar3;
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  this->CurrHeadWidth = fVar4;
  UpdateParams(this,true);
  this->PrevLeftGain = this->CurrLeftGain;
  this->PrevRightGain = this->CurrRightGain;
  return;
}

// UpdateParams @ 14b0e79f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall Metasound::FITDPannerOperator::UpdateParams(FITDPannerOperator *this,bool param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_res8 [2];
  float local_res18 [4];
  
  FMath::SinCos<float>(&this->CurrY,&this->CurrX,this->CurrAngle * __real_3c8efa36);
  fVar3 = this->CurrX;
  fVar5 = this->CurrHeadWidth * __real_3ba3d70a;
  FMath::SinCos<float>(local_res18,local_res8,(fVar3 + __real_3f800000) * __real_3f490fdb);
  fVar4 = __real_3f000000 - local_res18[0];
  fVar1 = this->CurrY * this->CurrY;
  this->CurrLeftGain = (__real_3f000000 - local_res8[0]) * this->CurrDistanceFactor + local_res8[0];
  fVar2 = fVar3 + fVar5;
  fVar5 = fVar5 - fVar3;
  this->CurrRightGain = fVar4 * this->CurrDistanceFactor + local_res18[0];
  fVar4 = 0.0;
  fVar3 = SQRT(fVar2 * fVar2 + fVar1) - SQRT(fVar5 * fVar5 + fVar1);
  if (fVar3 * __real_3b3f112b <= 0.0) {
    fVar1 = 0.0;
    fVar4 = fVar3 * ___real_c03a96c4;
  }
  else {
    fVar1 = fVar3 * ___real_403a96c4;
  }
  Audio::FDelay::SetEasedDelayMsec(&this->LeftDelay,fVar1,param_1);
  Audio::FDelay::SetEasedDelayMsec(&this->RightDelay,fVar4,param_1);
  return;
}

