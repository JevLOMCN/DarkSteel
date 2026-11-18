// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 10

// FStereoPannerOperator @ 14b1cebb0

FStereoPannerOperator * __thiscall
Metasound::FStereoPannerOperator::FStereoPannerOperator
          (FStereoPannerOperator *this,FOperatorSettings *param_1,
          TDataReadReference<Metasound::FAudioBuffer> *param_2,TDataReadReference<float> *param_3,
          TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *param_4)

{
  longlong lVar1;
  float fVar2;
  
  this->_padding_ = (longlong)&___7FStereoPannerOperator_Metasound__6B_;
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
  *(undefined ***)&this->PanningAmount = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->PanningAmount).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar1 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->PanningAmount).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->PanningAmount = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->PanningLaw =
       &___7__TDataReference_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_;
  *(undefined8 *)&(this->PanningLaw).field_0x8 = *(undefined8 *)&param_4->field_0x8;
  lVar1 = *(longlong *)&param_4->field_0x10;
  *(longlong *)&(this->PanningLaw).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->PanningLaw =
       &___7__TDataReadReference_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_;
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
  this->PrevPanningAmount = 0.0;
  this->PrevLeftPan = 0.0;
  this->PrevRightPan = 0.0;
  fVar2 = **(float **)&(this->PanningAmount).field_0x8;
  if (__real_3f800000 <= fVar2) {
    fVar2 = __real_3f800000;
  }
  if (fVar2 <= __real_bf800000) {
    fVar2 = __real_bf800000;
  }
  this->PrevPanningAmount = fVar2;
  ComputePanGains(this,fVar2,&this->PrevLeftPan,&this->PrevRightPan);
  return this;
}

// operator() @ 14b1d2ae0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::FStereoPannerOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  ITextData *pIVar2;
  TRefCountPtr<ITextData> TVar3;
  int iVar4;
  FText *pFVar5;
  FVertexInterface *pFVar6;
  FScriptContainerElement *pFVar7;
  FName local_res10;
  FName local_res18 [2];
  FNodeClassName local_28;
  
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(local_res18,L"Stereo Panner");
  ::FName::FName(&local_res10,L"");
  Metasound::FNodeClassName::FNodeClassName
            (&local_28,&Metasound::StandardNodes::Namespace,local_res18,&local_res10);
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
      (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,&local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar6 = Metasound::FStereoPannerOperator::GetVertexInterface();
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
  TVar3 = Metasound::NodeCategories::Spatialization.TextData;
  *(ITextData **)pFVar7 = Metasound::NodeCategories::Spatialization.TextData.Reference;
  if (TVar3.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,&local_res10);
  }
  *(uint *)(pFVar7 + 8) = Metasound::NodeCategories::Spatialization.Flags;
  return __return_storage_ptr__;
}

// BindInputs @ 14b1d4750

void __thiscall
Metasound::FStereoPannerOperator::BindInputs
          (FStereoPannerOperator *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FAudioBuffer> *local_res18;
  undefined1 local_38 [16];
  code *local_28;
  TDataReadReference<Metasound::FAudioBuffer> **local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&StereoPannerVertexNames::InputAudioName);
  local_res18 = &this->AudioInput;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  FLazyName::Resolve(&StereoPannerVertexNames::InputPanAmountName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->PanningAmount;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  FLazyName::Resolve(&StereoPannerVertexNames::InputPanningLawName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->PanningLaw;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b1d4c30

void __thiscall
Metasound::FStereoPannerOperator::BindOutputs
          (FStereoPannerOperator *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FAudioBuffer> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataWriteReference<Metasound::FAudioBuffer> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&StereoPannerVertexNames::OutputAudioLeftName);
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
  FLazyName::Resolve(&StereoPannerVertexNames::OutputAudioRightName);
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

// ComputePanGains @ 14b1d5360

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Metasound::FStereoPannerOperator::ComputePanGains
          (FStereoPannerOperator *this,float param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = __real_3f000000;
  fVar6 = __real_3f800000;
  fVar5 = (param_1 + __real_3f800000) * __real_3f000000;
  if (**(int **)&(this->PanningLaw).field_0x8 != 0) {
    fVar6 = __real_3f800000 - fVar5;
    *param_2 = fVar5;
    *param_3 = fVar6;
    return;
  }
  fVar5 = fVar5 * __real_3fc90fdb;
  if (fVar5 < 0.0) {
    fVar3 = fVar5 * __real_3e22f983 - __real_3f000000;
  }
  else {
    fVar3 = fVar5 * __real_3e22f983 + __real_3f000000;
  }
  fVar5 = fVar5 - (float)(longlong)fVar3 * __real_40c90fdb;
  if (fVar5 <= __real_3fc90fdb) {
    fVar3 = __real_3f800000;
    if (fVar5 < __real_bfc90fdb) {
      fVar5 = __real_c0490fdb - fVar5;
      fVar3 = __real_bf800000;
    }
  }
  else {
    fVar5 = __real_40490fdb - fVar5;
    fVar3 = __real_bf800000;
  }
  fVar4 = fVar5 * fVar5;
  fVar2 = fVar4 * ___real_348bdd11;
  *param_3 = (((((__real_3638b88e - fVar4 * __real_32cd365b) * fVar4 - __real_39500bf1) * fVar4 +
               ___real_3c088886) * fVar4 - __real_3e2aaaab) * fVar4 + __real_3f800000) * fVar5;
  *param_2 = (((((__real_37cfb4c2 - fVar2) * fVar4 - ___real_3ab609aa) * fVar4 + ___real_3d2aaaa3) *
               fVar4 - fVar1) * fVar4 + fVar6) * fVar3;
  return;
}

// CreateOperator @ 14b1da2b0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::FStereoPannerOperator::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  FStereoPannerOperator *this_00;
  FStereoPannerOperator *pFVar2;
  FName local_res8;
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  undefined1 local_28 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&StereoPannerVertexNames::InputAudioName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>
            (this,(TDataReadReference<Metasound::FAudioBuffer> *)local_28,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&StereoPannerVertexNames::InputPanAmountName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_48,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&StereoPannerVertexNames::InputPanningLawName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>
            (this,(TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)local_68,
             &local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0xb8);
  pFVar2 = (FStereoPannerOperator *)0x0;
  if (this_00 != (FStereoPannerOperator *)0x0) {
    pFVar2 = FStereoPannerOperator
                       (this_00,pFVar1,(TDataReadReference<Metasound::FAudioBuffer> *)local_28,
                        (TDataReadReference<float> *)local_48,
                        (TDataReadReference<Metasound::TEnum<Metasound::EPanningLaw,0>_> *)local_68)
    ;
  }
  param_1->Node = (INode *)pFVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_68._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_48._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_28._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// Execute @ 14b1df250

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Metasound::FStereoPannerOperator::Execute(FStereoPannerOperator *this)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  longlong lVar3;
  void *_Dst;
  void *_Dst_00;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  float fVar10;
  float local_res8 [2];
  float local_res10 [2];
  undefined4 uStack_cc;
  undefined4 uStack_bc;
  undefined4 uStack_ac;
  TArrayView<float,int> local_a8;
  TArrayView<float_const_,int> local_98;
  TArrayView<float,int> local_88;
  TArrayView<float_const_,int> local_78;
  TArrayView<float,int> local_68;
  TArrayView<float,int> local_58 [3];
  
  puVar2 = *(undefined8 **)&(this->AudioInput).field_0x8;
  fVar10 = **(float **)&(this->PanningAmount).field_0x8;
  if (__real_3f800000 <= fVar10) {
    fVar10 = __real_3f800000;
  }
  if (fVar10 <= __real_bf800000) {
    fVar10 = __real_bf800000;
  }
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar2 + 2) != *(int *)(puVar2 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  _Src = (void *)*puVar2;
  lVar3 = *(longlong *)&(this->AudioInput).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar3 + 0x10) != *(int *)(lVar3 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  iVar1 = *(int *)(lVar3 + 8);
  puVar2 = *(undefined8 **)&(this->AudioLeftOutput).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar2 + 2) != *(int *)(puVar2 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  _Dst = (void *)*puVar2;
  puVar2 = *(undefined8 **)&(this->AudioRightOutput).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar2 + 2) != *(int *)(puVar2 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  _Dst_00 = (void *)*puVar2;
  puVar2 = *(undefined8 **)&(this->AudioInput).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar2 + 2) != *(int *)(puVar2 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pfVar4 = (float *)*puVar2;
  if (iVar1 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  puVar2 = *(undefined8 **)&(this->AudioLeftOutput).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar2 + 2) != *(int *)(puVar2 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pfVar5 = (float *)*puVar2;
  if (iVar1 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  puVar2 = *(undefined8 **)&(this->AudioRightOutput).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar2 + 2) != *(int *)(puVar2 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pfVar6 = (float *)*puVar2;
  if (iVar1 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (__real_322bcc77 <
      (float)((uint)(this->PrevPanningAmount - fVar10) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    ComputePanGains(this,fVar10,local_res8,local_res10);
    memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    memcpy(_Dst_00,_Src,(longlong)iVar1 << 2);
    local_68._12_4_ = uStack_cc;
    local_68.ArrayNum = iVar1;
    local_68.DataPtr = pfVar5;
    Audio::ArrayFade(&local_68,this->PrevLeftPan,local_res8[0]);
    local_58[0]._12_4_ = uStack_bc;
    local_58[0].ArrayNum = iVar1;
    local_58[0].DataPtr = pfVar6;
    Audio::ArrayFade(local_58,this->PrevRightPan,local_res10[0]);
    fVar10 = **(float **)&(this->PanningAmount).field_0x8;
    this->PrevLeftPan = local_res8[0];
    this->PrevRightPan = local_res10[0];
    this->PrevPanningAmount = fVar10;
  }
  else {
    local_a8._12_4_ = uStack_cc;
    local_a8.ArrayNum = iVar1;
    uVar8._4_4_ = uStack_ac;
    uVar8._0_4_ = iVar1;
    local_a8.DataPtr = pfVar5;
    local_98.DataPtr = pfVar4;
    local_98._8_8_ = uVar8;
    Audio::ArrayMultiplyByConstant(&local_98,this->PrevLeftPan,&local_a8);
    local_88._12_4_ = uStack_bc;
    local_88.ArrayNum = iVar1;
    local_88.DataPtr = pfVar6;
    local_78.DataPtr = pfVar4;
    local_78._8_8_ = uVar8;
    Audio::ArrayMultiplyByConstant(&local_78,this->PrevRightPan,&local_88);
  }
  return;
}

// GetNodeInfo @ 14b1e3d40

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FStereoPannerOperator::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `Metasound::FStereoPannerOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,&::Info);
      atexit(`Metasound::FStereoPannerOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&::_TSS0);
      return &::Info;
    }
  }
  return &::Info;
}

// GetVertexInterface @ 14b1e6660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::FStereoPannerOperator::GetVertexInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar3;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar4;
  FOutputVertexInterface *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FInputDataVertex *pFVar8;
  FVertexInterface *pFVar9;
  undefined1 auStackY_1a8 [32];
  int local_178;
  float local_174;
  FInputVertexInterface local_170;
  FOutputVertexInterface local_150;
  FInputVertexInterfaceDeclarationBuilder local_130;
  TOutputDataVertex<Metasound::FAudioBuffer> local_108;
  TOutputDataVertex<Metasound::FAudioBuffer> local_e8;
  TInputDataVertex<Metasound::FAudioBuffer> local_c8;
  TInputDataVertex<float> local_90;
  undefined1 local_58 [32];
  undefined1 local_38 [16];
  byte local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pTVar3 = TOutputDataVertex<Metasound::FAudioBuffer>::
             TOutputDataVertex<Metasound::FAudioBuffer><>
                       (&local_108,&StereoPannerVertexNames::OutputAudioRightName,
                        &FDataVertexMetadata::EmptyBasic);
    pTVar4 = TOutputDataVertex<Metasound::FAudioBuffer>::
             TOutputDataVertex<Metasound::FAudioBuffer><>
                       (&local_e8,&StereoPannerVertexNames::OutputAudioLeftName,
                        &FDataVertexMetadata::EmptyBasic);
    pFVar5 = FOutputVertexInterface::
             FOutputVertexInterface<Metasound::TOutputDataVertex<Metasound::FAudioBuffer>,Metasound::TOutputDataVertex<Metasound::FAudioBuffer>_>
                       (&local_150,pTVar4,pTVar3);
    local_178 = 0;
    pFVar6 = (FInputDataVertex *)
             TInputDataVertex<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
             TInputDataVertex<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_><int>
                       (local_58,&StereoPannerVertexNames::InputPanningLawName,
                        &FDataVertexMetadata::EmptyBasic,&local_178);
    local_174 = 0.0;
    pFVar7 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_90,&StereoPannerVertexNames::InputPanAmountName,
                        &FDataVertexMetadata::EmptyBasic,&local_174);
    pFVar8 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FAudioBuffer>::TInputDataVertex<Metasound::FAudioBuffer><>
                       (&local_c8,&StereoPannerVertexNames::InputAudioName,
                        &FDataVertexMetadata::EmptyBasic);
    local_170._padding_ = 0;
    local_170._padding_ = 0;
    local_170.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_170.SubInterfaces.ArrayNum = 0;
    local_170.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_130,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_170,
               &local_170.SubInterfaces);
    if ((local_130.Vertices)->ArrayMax < 3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,3,&(local_130.Vertices)->AllocatorInstance,(local_130.Vertices)->ArrayNum,
                 &(local_130.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_130,pFVar8);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_130,pFVar7);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_130,pFVar6);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_130);
    FVertexInterface::FVertexInterface(&::Interface,&local_170,pFVar5);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_170.SubInterfaces.AllocatorInstance.Data,
               local_170.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_170.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_170.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_170._padding_,(int)local_170._padding_);
    if ((FInputDataVertex *)local_170._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_170._padding_);
    }
    if ((0xc < (byte)local_c8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar9 = (FVertexInterface *)(*pcVar1)();
      return pFVar9;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_c8._48_1_])(&local_c8.field_0x20);
    if ((0xc < (byte)local_90._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar9 = (FVertexInterface *)(*pcVar1)();
      return pFVar9;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_90._48_1_])(&local_90.field_0x20);
    if ((0xc < local_28) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar9 = (FVertexInterface *)(*pcVar1)();
      return pFVar9;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_28])(local_38);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_150.SubInterfaces.AllocatorInstance.Data,
               local_150.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_150.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_150.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_150._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_150._padding_);
    }
    atexit(`Metasound::FStereoPannerOperator::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__Interface__);
    _Init_thread_footer(&::_TSS0);
  }
  return &::Interface;
}

// Reset @ 14b1ea080

void __thiscall
Metasound::FStereoPannerOperator::Reset(FStereoPannerOperator *this,FResetParams *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  float fVar3;
  
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
  fVar3 = **(float **)&(this->PanningAmount).field_0x8;
  if (__real_3f800000 <= fVar3) {
    fVar3 = __real_3f800000;
  }
  if (fVar3 <= __real_bf800000) {
    fVar3 = __real_bf800000;
  }
  this->PrevPanningAmount = fVar3;
  ComputePanGains(this,fVar3,&this->PrevLeftPan,&this->PrevRightPan);
  return;
}

