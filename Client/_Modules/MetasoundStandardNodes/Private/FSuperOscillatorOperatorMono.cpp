// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 10

// ZeroOutputs @ 14b1b0120

void __thiscall
Metasound::FSuperOscillatorOperatorMono::ZeroOutputs(FSuperOscillatorOperatorMono *this)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)&(this->AudioBuffer).field_0x8;
  iVar1 = *(int *)(puVar2 + 1);
  if (0 < iVar1) {
    memset((void *)*puVar2,0,(longlong)iVar1 << 2);
    return;
  }
  return;
}

// FillOutputs @ 14b1b0150

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::FSuperOscillatorOperatorMono::FillOutputs
          (FSuperOscillatorOperatorMono *this,float param_1,float param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  float *pfVar4;
  float *pfVar5;
  code *pcVar6;
  bool bVar7;
  undefined4 uStack_3c;
  TArrayView<float,int> local_38;
  TArrayView<float_const_,int> local_28 [2];
  
  puVar3 = *(undefined8 **)&(this->AudioBuffer).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar3 + 2) != *(int *)(puVar3 + 1))) {
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_Metasound::FAudioBuffer::operator_class_TArrayView<float,int>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pfVar4 = (float *)*puVar3;
  iVar1 = *(int *)(puVar3 + 1);
  if (iVar1 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pfVar5 = (float *)this->_padding_;
  iVar2 = (int)this->_padding_;
  if (iVar2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  local_38._12_4_ = local_28[0]._12_4_;
  local_38.ArrayNum = iVar1;
  local_28[0]._12_4_ = uStack_3c;
  local_28[0].ArrayNum = iVar2;
  local_38.DataPtr = pfVar4;
  local_28[0].DataPtr = pfVar5;
  Audio::ArrayMixIn(local_28,&local_38,param_1 * __real_3f34fdf4);
  return;
}

// LimitOutput @ 14b1b0270

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::FSuperOscillatorOperatorMono::LimitOutput(FSuperOscillatorOperatorMono *this)

{
  int iVar1;
  undefined8 *puVar2;
  float *pfVar3;
  longlong lVar4;
  
  puVar2 = *(undefined8 **)&(this->AudioBuffer).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar2 + 2) != *(int *)(puVar2 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pfVar3 = (float *)*puVar2;
  lVar4 = *(longlong *)&(this->AudioBuffer).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar4 + 0x10) != *(int *)(lVar4 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  iVar1 = *(int *)(lVar4 + 8);
  puVar2 = *(undefined8 **)&(this->AudioBuffer).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar2 + 2) != *(int *)(puVar2 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  Audio::FDynamicsProcessor::ProcessAudio
            (&this->Limiter,(float *)*puVar2,iVar1,pfVar3,(float *)0x0,(float *)0x0);
  return;
}

// ResetLimiters @ 14b1b0360

void __thiscall
Metasound::FSuperOscillatorOperatorMono::ResetLimiters(FSuperOscillatorOperatorMono *this)

{
  FSuperOscillatorOperator::SetLimiterSettings((FSuperOscillatorOperator *)this,&this->Limiter);
  return;
}

// BindInputs @ 14b1b0380

void __thiscall
Metasound::FSuperOscillatorOperatorMono::BindInputs
          (FSuperOscillatorOperatorMono *this,FInputVertexInterfaceData *param_1)

{
  FName aFStackX_8 [2];
  longlong *plStackX_18;
  FName *pFStackX_20;
  undefined1 auStack_58 [16];
  code *pcStack_48;
  longlong **pplStack_40;
  undefined1 auStack_38 [16];
  
  FLazyName::Resolve(&SuperOscillatorVertexNames::EnabledPinName);
  plStackX_18 = &this->_padding_;
  pplStack_40 = &plStackX_18;
  auStack_58._0_8_ = aFStackX_8;
  auStack_38._8_8_ = auStack_58;
  pcStack_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
  auStack_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  auStack_58._8_8_ = plStackX_18;
  FInputVertexInterfaceData::Apply
            (param_1,aFStackX_8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)auStack_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
             &pcStack_48);
  FLazyName::Resolve(&SuperOscillatorVertexNames::LimitOutputPinName);
  plStackX_18 = &this->_padding_;
  pcStack_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
  pplStack_40 = &plStackX_18;
  auStack_38._0_8_ = aFStackX_8;
  auStack_58._8_8_ = auStack_38;
  auStack_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  auStack_38._8_8_ = plStackX_18;
  FInputVertexInterfaceData::Apply
            (param_1,aFStackX_8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)auStack_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
             &pcStack_48);
  FLazyName::Resolve(&SuperOscillatorVertexNames::BaseFrequencyPinName);
  plStackX_18 = &this->_padding_;
  pplStack_40 = &plStackX_18;
  auStack_38._0_8_ = aFStackX_8;
  auStack_58._8_8_ = auStack_38;
  pcStack_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
  auStack_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  auStack_38._8_8_ = plStackX_18;
  FInputVertexInterfaceData::Apply
            (param_1,aFStackX_8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)auStack_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
             &pcStack_48);
  FLazyName::Resolve(&SuperOscillatorVertexNames::NumVoicesPinName);
  pFStackX_20 = aFStackX_8;
  plStackX_18 = &this->_padding_;
  auStack_38._8_8_ = &plStackX_18;
  auStack_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::SetValue<int>'::__l2::<lambda_2>,void,Metasound::VertexDataPrivate::FInputBinding_&>
       ::Call;
  pplStack_40 = (longlong **)&pFStackX_20;
  pcStack_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::SetValue<int>'::__l2::<lambda_1>,Metasound::VertexDataPrivate::FInputBinding>
               ::Call;
  FInputVertexInterfaceData::Apply
            (param_1,aFStackX_8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&pcStack_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)auStack_38
            );
  FLazyName::Resolve(&SuperOscillatorVertexNames::MaxDetunePinName);
  plStackX_18 = &this->_padding_;
  pcStack_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
  pplStack_40 = &plStackX_18;
  auStack_38._0_8_ = aFStackX_8;
  auStack_58._8_8_ = auStack_38;
  auStack_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  auStack_38._8_8_ = plStackX_18;
  FInputVertexInterfaceData::Apply
            (param_1,aFStackX_8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)auStack_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
             &pcStack_48);
  FLazyName::Resolve(&SuperOscillatorVertexNames::DetuneVolumePinName);
  plStackX_18 = &this->_padding_;
  pcStack_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
  pplStack_40 = &plStackX_18;
  auStack_38._0_8_ = aFStackX_8;
  auStack_58._8_8_ = auStack_38;
  auStack_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  auStack_38._8_8_ = plStackX_18;
  FInputVertexInterfaceData::Apply
            (param_1,aFStackX_8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)auStack_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
             &pcStack_48);
  FLazyName::Resolve(&SuperOscillatorVertexNames::GlideFactorPinName);
  plStackX_18 = &this->_padding_;
  pcStack_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
  pplStack_40 = &plStackX_18;
  auStack_38._0_8_ = aFStackX_8;
  auStack_58._8_8_ = auStack_38;
  auStack_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  auStack_38._8_8_ = plStackX_18;
  FInputVertexInterfaceData::Apply
            (param_1,aFStackX_8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)auStack_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
             &pcStack_48);
  FLazyName::Resolve(&SuperOscillatorVertexNames::PulseWidthPinName);
  plStackX_18 = &this->_padding_;
  pcStack_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
  pplStack_40 = &plStackX_18;
  auStack_38._0_8_ = aFStackX_8;
  auStack_58._8_8_ = auStack_38;
  auStack_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  auStack_38._8_8_ = plStackX_18;
  FInputVertexInterfaceData::Apply
            (param_1,aFStackX_8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)auStack_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
             &pcStack_48);
  FLazyName::Resolve(&SuperOscillatorVertexNames::FrequencyModPinName);
  plStackX_18 = &this->_padding_;
  pplStack_40 = &plStackX_18;
  pcStack_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
  auStack_58._8_8_ = auStack_38;
  auStack_38._0_8_ = aFStackX_8;
  auStack_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  auStack_38._8_8_ = plStackX_18;
  FInputVertexInterfaceData::Apply
            (param_1,aFStackX_8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)auStack_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
             &pcStack_48);
  FLazyName::Resolve(&SuperOscillatorVertexNames::EntropyPinName);
  plStackX_18 = &this->_padding_;
  pcStack_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
  pplStack_40 = &plStackX_18;
  auStack_38._0_8_ = aFStackX_8;
  auStack_58._8_8_ = auStack_38;
  auStack_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  auStack_38._8_8_ = plStackX_18;
  FInputVertexInterfaceData::Apply
            (param_1,aFStackX_8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)auStack_58,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
             &pcStack_48);
  FLazyName::Resolve(&SuperOscillatorVertexNames::WaveTypePinName);
  pFStackX_20 = aFStackX_8;
  plStackX_18 = &this->_padding_;
  auStack_38._8_8_ = &plStackX_18;
  auStack_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::SetValue<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>'::__l2::<lambda_2>,void,Metasound::VertexDataPrivate::FInputBinding_&>
       ::Call;
  pplStack_40 = (longlong **)&pFStackX_20;
  pcStack_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::SetValue<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>'::__l2::<lambda_1>,Metasound::VertexDataPrivate::FInputBinding>
               ::Call;
  FInputVertexInterfaceData::Apply
            (param_1,aFStackX_8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&pcStack_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)auStack_38
            );
  return;
}

// BindOutputs @ 14b1b0390

void __thiscall
Metasound::FSuperOscillatorOperatorMono::BindOutputs
          (FSuperOscillatorOperatorMono *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FAudioBuffer> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FAudioBuffer> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FAudioBuffer> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&SuperOscillatorVertexNames::AudioOutPinName);
  local_res18[0] = &this->AudioBuffer;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// operator() @ 14b1d3030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::FSuperOscillatorOperatorMono::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ulonglong *puVar1;
  int *piVar2;
  ITextData *pIVar3;
  TRefCountPtr<ITextData> TVar4;
  int iVar5;
  FNodeClassMetadata *pFVar6;
  FText *pFVar7;
  FVertexInterface *pFVar8;
  FScriptContainerElement *pFVar9;
  ulonglong *puVar10;
  longlong lVar11;
  undefined1 auStack_78 [32];
  FText local_58;
  undefined1 local_48 [32];
  FText local_28;
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_78;
  pFVar6 = Metasound::FNodeClassMetadata::GetEmpty();
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__,pFVar6);
  ::FName::FName((FName *)&local_58,L"SuperOscillatorMono");
  Metasound::FNodeClassName::FNodeClassName
            ((FNodeClassName *)local_48,&Metasound::StandardNodes::Namespace,(FName *)&local_58,
             &Metasound::StandardNodes::AudioVariant);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace.ComparisonIndex = (FNameEntryId)local_48._0_4_;
  (__return_storage_ptr__->ClassName).Namespace.Number = local_48._4_4_;
  (__return_storage_ptr__->ClassName).Name.ComparisonIndex = (FNameEntryId)local_48._8_4_;
  (__return_storage_ptr__->ClassName).Name.Number = local_48._12_4_;
  (__return_storage_ptr__->ClassName).Variant.ComparisonIndex = (FNameEntryId)local_48._16_4_;
  (__return_storage_ptr__->ClassName).Variant.Number = local_48._20_4_;
  pFVar7 = FText::FText(&local_58);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar7);
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  pFVar7 = FText::FText(&local_58);
  FText::operator=(&__return_storage_ptr__->Description,pFVar7);
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar4 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar3 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar3 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar4.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar4.Reference + 8))(TVar4.Reference,&local_58);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar8 = Metasound::FSuperOscillatorOperatorMono::GetVertexInterface();
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar8);
  iVar5 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  piVar2 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  if (iVar5 == *piVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance,piVar2);
  }
  pFVar9 = (__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar5 + 1;
  pFVar9 = pFVar9 + (longlong)iVar5 * 0x10;
  *(undefined8 *)pFVar9 = 0;
  TVar4 = Metasound::NodeCategories::Generators.TextData;
  *(ITextData **)pFVar9 = Metasound::NodeCategories::Generators.TextData.Reference;
  if (TVar4.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar4.Reference + 8))(TVar4.Reference,&local_58);
  }
  *(uint *)(pFVar9 + 8) = Metasound::NodeCategories::Generators.Flags;
  FText::FText((FText *)local_48);
  FText::FText((FText *)(local_48 + 0x10));
  FText::FText(&local_28);
  DestructItems<FText,int>
            ((FText *)(__return_storage_ptr__->Keywords).AllocatorInstance.Data,
             (__return_storage_ptr__->Keywords).ArrayNum);
  lVar11 = 3;
  TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
            (&__return_storage_ptr__->Keywords,(FText *)local_48,3,
             (__return_storage_ptr__->Keywords).ArrayMax);
  puVar10 = local_18;
  do {
    puVar1 = puVar10 + -2;
    puVar10 = puVar10 + -2;
    lVar11 = lVar11 + -1;
    if ((longlong *)*puVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*puVar1 + 0x10))();
    }
  } while (lVar11 != 0);
  return __return_storage_ptr__;
}

// CreateOperator @ 14b1da560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::FSuperOscillatorOperatorMono::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  FInputVertexInterfaceData *this;
  code *pcVar2;
  bool bVar3;
  FInputBinding *pFVar4;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar5;
  FSuperOscillatorOperator *this_00;
  undefined1 auStack_1f8 [32];
  FName local_1d8;
  FName local_1d0;
  FName local_1c8;
  FName local_1c0;
  FName local_1b8;
  FName local_1b0;
  FName local_1a8;
  FName local_1a0;
  FName local_198;
  FName local_190;
  FName local_188;
  FName local_180;
  undefined1 local_178 [40];
  undefined1 local_150 [32];
  int local_130;
  undefined1 local_128 [32];
  undefined1 local_108 [32];
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  bool local_68;
  undefined1 local_60 [32];
  undefined1 local_40 [24];
  byte local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  local_178._0_8_ = pFVar1;
  FLazyName::Resolve(&SuperOscillatorVertexNames::EnabledPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)(local_178 + 8),&local_1d8,pFVar1);
  FLazyName::Resolve(&SuperOscillatorVertexNames::LimitOutputPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_150,&local_1d0,pFVar1);
  FLazyName::Resolve(&SuperOscillatorVertexNames::NumVoicesPinName);
  local_130 = FInputVertexInterfaceData::GetOrCreateDefaultValue<int>(this,&local_1c8,pFVar1);
  FLazyName::Resolve(&SuperOscillatorVertexNames::BaseFrequencyPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_128,&local_1c0,pFVar1);
  FLazyName::Resolve(&SuperOscillatorVertexNames::DetuneVolumePinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_108,&local_1b8,pFVar1);
  FLazyName::Resolve(&SuperOscillatorVertexNames::MaxDetunePinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_e8,&local_1b0,pFVar1);
  FLazyName::Resolve(&SuperOscillatorVertexNames::EntropyPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_c8,&local_1a8,pFVar1);
  FLazyName::Resolve(&SuperOscillatorVertexNames::GlideFactorPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_a8,&local_1a0,pFVar1);
  FLazyName::Resolve(&SuperOscillatorVertexNames::PulseWidthPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_88,&local_198,pFVar1);
  FLazyName::Resolve(&SuperOscillatorVertexNames::FrequencyModPinName);
  local_68 = FInputVertexInterfaceData::IsVertexBound(this,&local_190);
  FLazyName::Resolve(&SuperOscillatorVertexNames::FrequencyModPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>
            (this,(TDataReadReference<Metasound::FAudioBuffer> *)local_60,&local_188,pFVar1);
  FLazyName::Resolve(&SuperOscillatorVertexNames::WaveTypePinName);
  pFVar4 = FInputVertexInterfaceData::FindChecked(this,&local_180);
  if ((pFVar4->Data).bIsSet == false) {
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)(local_40 + 8),&(pFVar4->Vertex).Literal.Value);
    TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
    ::CreateExplicitArgs((FOperatorSettings *)local_40,(FLiteral *)pFVar1);
    if (0xc < local_28) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar5.Ptr = (IOperator *)(*pcVar2)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar5.Ptr;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_28])(local_40 + 8);
  }
  else {
    if ((pFVar4->Data).bIsSet == false) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar5.Ptr = (IOperator *)(*pcVar2)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar5.Ptr;
      }
    }
    FAnyDataReference::GetAs<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>
              (&(pFVar4->Data).TypedValue);
  }
  this_00 = ::operator_new(0x440);
  if (this_00 == (FSuperOscillatorOperator *)0x0) {
    this_00 = (FSuperOscillatorOperator *)0x0;
  }
  else {
    FSuperOscillatorOperator::FSuperOscillatorOperator
              (this_00,(FSuperOscillatorOperatorConstructParams *)local_178);
    this_00->_padding_ = (longlong)&___7FSuperOscillatorOperatorMono_Metasound__6B_;
    TDataReference<Metasound::FAudioBuffer>::
    TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FAudioBuffer> *)(this_00 + 1),NewObject,
               (FOperatorSettings *)local_178._0_8_);
    this_00[1]._padding_ =
         (longlong)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    Audio::FDynamicsProcessor::FDynamicsProcessor
              ((FDynamicsProcessor *)&this_00[1].bEnabled.field_0x10);
    FSuperOscillatorOperator::SetLimiterSettings
              (this_00,(FDynamicsProcessor *)&this_00[1].bEnabled.field_0x10);
  }
  param_1->Node = (INode *)this_00;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_60._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_88._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_a8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_c8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_e8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_108._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_128._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_150._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_178._24_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// GetNodeInfo @ 14b1e3e60

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FSuperOscillatorOperatorMono::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorMono::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorMono::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorMono::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::FSuperOscillatorOperatorMono::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorMono::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::FSuperOscillatorOperatorMono::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorMono::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorMono::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorMono::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetVertexInterface @ 14b1e69b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::FSuperOscillatorOperatorMono::GetVertexInterface(void)

{
  code *pcVar1;
  bool bVar2;
  FInputDataVertex *pFVar3;
  FInputDataVertex *pFVar4;
  FName *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FInputDataVertex *pFVar8;
  FInputDataVertex *pFVar9;
  FInputDataVertex *pFVar10;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar11;
  FVertexInterface *pFVar12;
  ulonglong uVar13;
  undefined1 auStackY_3b8 [32];
  bool local_388;
  bool local_387 [3];
  float local_384;
  float local_380;
  float local_37c;
  float local_378;
  float local_374;
  float local_370 [2];
  FInputVertexInterface local_368;
  FInputVertexInterfaceDeclarationBuilder local_348;
  longlong local_320;
  longlong local_318;
  FInputDataVertex *local_310;
  FInputDataVertex *local_308;
  FOutputVertexInterface local_300;
  FOutputVertexInterfaceDeclarationBuilder local_2e0;
  TOutputDataVertex<Metasound::FAudioBuffer> local_2b8;
  FInputDataVertex local_298;
  FInputDataVertex local_260;
  TInputDataVertex<float> local_228;
  TInputDataVertex<float> local_1f0;
  TInputDataVertex<float> local_1b8;
  TInputDataVertex<float> local_180;
  TInputDataVertex<float> local_148;
  TInputDataVertex<Metasound::FAudioBuffer> local_110;
  TInputDataVertex<float> local_d8;
  TInputDataVertex<bool> local_a0;
  TInputDataVertex<bool> local_68;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorMono::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorMono::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorMono::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    local_388 = true;
    pFVar3 = (FInputDataVertex *)
             TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                       (&local_68,&SuperOscillatorVertexNames::EnabledPinName,
                        &FDataVertexMetadata::EmptyBasic,&local_388);
    local_387[0] = true;
    pFVar4 = (FInputDataVertex *)
             TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                       (&local_a0,&SuperOscillatorVertexNames::LimitOutputPinName,
                        &FDataVertexMetadata::EmptyBasic,local_387);
    FLazyName::Resolve(&SuperOscillatorVertexNames::NumVoicesPinName);
    pFVar5 = GetMetasoundDataTypeName<int>();
    local_298._padding_ = local_320;
    local_384 = 440.0;
    local_298._padding_ = *(longlong *)pFVar5;
    local_298._padding_._0_4_ = 1;
    local_298.Literal.Value._padding_._0_4_ = 3;
    local_298.Literal.Value.TypeIndex = 2;
    local_298._padding_ = (longlong)&___7__TInputConstructorVertex_H_Metasound__6B_;
    pFVar6 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_d8,&SuperOscillatorVertexNames::BaseFrequencyPinName,
                        &FDataVertexMetadata::EmptyBasic,&local_384);
    pFVar7 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FAudioBuffer>::TInputDataVertex<Metasound::FAudioBuffer><>
                       (&local_110,&SuperOscillatorVertexNames::FrequencyModPinName,
                        &FDataVertexMetadata::EmptyBasic);
    local_380 = -0.25;
    pFVar8 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_148,&SuperOscillatorVertexNames::MaxDetunePinName,
                        &FDataVertexMetadata::EmptyBasic,&local_380);
    local_37c = 0.0;
    pFVar9 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_180,&SuperOscillatorVertexNames::EntropyPinName,
                        &FDataVertexMetadata::EmptyBasic,&local_37c);
    local_378 = 0.0;
    pFVar10 = (FInputDataVertex *)
              TInputDataVertex<float>::TInputDataVertex<float><float>
                        (&local_1b8,&SuperOscillatorVertexNames::DetuneVolumePinName,
                         &FDataVertexMetadata::EmptyBasic,&local_378);
    local_374 = 0.0;
    local_310 = (FInputDataVertex *)
                TInputDataVertex<float>::TInputDataVertex<float><float>
                          (&local_1f0,&SuperOscillatorVertexNames::GlideFactorPinName,
                           &FDataVertexMetadata::EmptyBasic,&local_374);
    local_370[0] = 0.5;
    local_308 = (FInputDataVertex *)
                TInputDataVertex<float>::TInputDataVertex<float><float>
                          (&local_228,&SuperOscillatorVertexNames::PulseWidthPinName,
                           &FDataVertexMetadata::EmptyBasic,local_370);
    FLazyName::Resolve(&SuperOscillatorVertexNames::WaveTypePinName);
    pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>();
    local_260._padding_ = local_318;
    local_260._padding_ = *(longlong *)pFVar5;
    local_260._padding_ =
         (longlong)
         &
         ___7__TInputConstructorVertex_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
    ;
    local_368._padding_ = 0;
    local_368._padding_ = 0;
    local_368.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_368.SubInterfaces.ArrayNum = 0;
    local_368.SubInterfaces.ArrayMax = 0;
    local_260._padding_._0_4_ = 1;
    local_260.Literal.Value.TypeIndex = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_348,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_368,
               &local_368.SubInterfaces);
    if ((local_348.Vertices)->ArrayMax < 0xb) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0xb,&(local_348.Vertices)->AllocatorInstance,(local_348.Vertices)->ArrayNum,
                 &(local_348.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_348,pFVar3);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_348,pFVar4);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_348,&local_298);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_348,pFVar6);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_348,pFVar7);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_348,pFVar8);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_348,pFVar9);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_348,pFVar10);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_348,local_310);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_348,local_308);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_348,&local_260);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_348);
    pTVar11 = TOutputDataVertex<Metasound::FAudioBuffer>::
              TOutputDataVertex<Metasound::FAudioBuffer><>
                        (&local_2b8,&SuperOscillatorVertexNames::AudioOutPinName,
                         &FDataVertexMetadata::EmptyBasic);
    FOutputVertexInterface::FOutputVertexInterface(&local_300);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_2e0,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_300,
               &local_300.SubInterfaces);
    if ((local_2e0.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,&(local_2e0.Vertices)->AllocatorInstance,(local_2e0.Vertices)->ArrayNum,
                 &(local_2e0.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_2e0,(FOutputDataVertex *)pTVar11);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_2e0);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorMono::GetVertexInterface(void)'
                ::__l2::Interface,&local_368,&local_300);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_300.SubInterfaces.AllocatorInstance.Data,
               local_300.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_300.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_300.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_300._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_300._padding_);
    }
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_368.SubInterfaces.AllocatorInstance.Data,
               local_368.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_368.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_368.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_368._padding_,(int)local_368._padding_);
    if ((FInputDataVertex *)local_368._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_368._padding_);
    }
    uVar13 = (ulonglong)local_260.Literal.Value.TypeIndex;
    if ((0xc < local_260.Literal.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar13] !=
        UE::Core::Private::TDestructorCaller<Metasound::FLiteral::FNone>::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar13])(&local_260.Literal);
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
    if ((0xc < (byte)local_148._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_148._48_1_])(&local_148.field_0x20);
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
    uVar13 = (ulonglong)local_298.Literal.Value.TypeIndex;
    if ((0xc < local_298.Literal.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar13] !=
        UE::Core::Private::TDestructorCaller<int>::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar13])(&local_298.Literal);
    }
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
    atexit(`Metasound::FSuperOscillatorOperatorMono::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__Interface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorMono::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorMono::GetVertexInterface(void)'
          ::__l2::Interface;
}

