// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 12

// ZeroOutputs @ 14b1b10e0

void __thiscall
Metasound::FSuperOscillatorOperatorStereo::ZeroOutputs(FSuperOscillatorOperatorStereo *this)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)&(this->AudioLeft).field_0x8;
  iVar1 = *(int *)(puVar2 + 1);
  if (0 < iVar1) {
    memset((void *)*puVar2,0,(longlong)iVar1 << 2);
  }
  puVar2 = *(undefined8 **)&(this->AudioRight).field_0x8;
  iVar1 = *(int *)(puVar2 + 1);
  if (0 < iVar1) {
    memset((void *)*puVar2,0,(longlong)iVar1 << 2);
    return;
  }
  return;
}

// GetStereoWidth @ 14b1b1140

float __thiscall
Metasound::FSuperOscillatorOperatorStereo::GetStereoWidth(FSuperOscillatorOperatorStereo *this)

{
  float fVar1;
  
  fVar1 = **(float **)&(this->StereoWidth).field_0x8;
  if (__real_3f800000 <= fVar1) {
    fVar1 = __real_3f800000;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return fVar1;
}

// FillOutputs @ 14b1b1170

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::FSuperOscillatorOperatorStereo::FillOutputs
          (FSuperOscillatorOperatorStereo *this,float param_1,float param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  float *pfVar4;
  float *pfVar5;
  code *pcVar6;
  undefined4 uVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uStack_ac;
  undefined4 uStack_9c;
  TArrayView<float,int> local_98;
  TArrayView<float_const_,int> local_88;
  TArrayView<float,int> local_78;
  TArrayView<float_const_,int> local_68 [6];
  
  puVar3 = *(undefined8 **)&(this->AudioLeft).field_0x8;
  fVar9 = param_2 * __real_3f490fdb + __real_4016cbe4;
  fVar10 = param_2 * __real_3f490fdb + __real_3f490fdb;
  fVar11 = (__real_3f800000 -
           (float)((uint)fVar9 & __xmm_7fffffff7fffffff7fffffff7fffffff) * __real_3ea2f983) *
           fVar9 * __real_3fa2f983;
  fVar9 = (__real_3f800000 -
          (float)((uint)fVar10 & __xmm_7fffffff7fffffff7fffffff7fffffff) * __real_3ea2f983) *
          fVar10 * __real_3fa2f983;
  if (__real_3f800000 <= fVar11) {
    fVar11 = __real_3f800000;
  }
  if (__real_3f800000 <= fVar9) {
    fVar9 = __real_3f800000;
  }
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar3 + 2) != *(int *)(puVar3 + 1))) {
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_Metasound::FAudioBuffer::operator_class_TArrayView<float,int>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pfVar4 = (float *)*puVar3;
  iVar1 = *(int *)(puVar3 + 1);
  if (iVar1 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  uVar7 = local_68[0]._12_4_;
  pfVar5 = (float *)this->_padding_;
  iVar2 = (int)this->_padding_;
  if (iVar2 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  fVar10 = __real_3f34fdf4;
  local_98._12_4_ = uVar7;
  local_98.ArrayNum = iVar1;
  local_88._12_4_ = uStack_ac;
  local_88.ArrayNum = iVar2;
  local_98.DataPtr = pfVar4;
  local_88.DataPtr = pfVar5;
  Audio::ArrayMixIn(&local_88,&local_98,fVar11 * param_1 * __real_3f34fdf4);
  puVar3 = *(undefined8 **)&(this->AudioRight).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar3 + 2) != *(int *)(puVar3 + 1))) {
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_Metasound::FAudioBuffer::operator_class_TArrayView<float,int>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pfVar4 = (float *)*puVar3;
  iVar1 = *(int *)(puVar3 + 1);
  if (iVar1 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pfVar5 = (float *)this->_padding_;
  iVar2 = (int)this->_padding_;
  if (iVar2 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  local_78._12_4_ = local_68[0]._12_4_;
  local_78.ArrayNum = iVar1;
  local_68[0]._12_4_ = uStack_9c;
  local_68[0].ArrayNum = iVar2;
  local_78.DataPtr = pfVar4;
  local_68[0].DataPtr = pfVar5;
  Audio::ArrayMixIn(local_68,&local_78,fVar9 * param_1 * fVar10);
  return;
}

// ResetLimiters @ 14b1b1440

void __thiscall
Metasound::FSuperOscillatorOperatorStereo::ResetLimiters(FSuperOscillatorOperatorStereo *this)

{
  FSuperOscillatorOperator::SetLimiterSettings((FSuperOscillatorOperator *)this,&this->LimiterLeft);
  FSuperOscillatorOperator::SetLimiterSettings((FSuperOscillatorOperator *)this,&this->LimiterRight)
  ;
  return;
}

// LimitOutput @ 14b1b1470

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::FSuperOscillatorOperatorStereo::LimitOutput(FSuperOscillatorOperatorStereo *this)

{
  int iVar1;
  undefined8 *puVar2;
  float *pfVar3;
  longlong lVar4;
  
  puVar2 = *(undefined8 **)&(this->AudioLeft).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar2 + 2) != *(int *)(puVar2 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pfVar3 = (float *)*puVar2;
  lVar4 = *(longlong *)&(this->AudioLeft).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar4 + 0x10) != *(int *)(lVar4 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  iVar1 = *(int *)(lVar4 + 8);
  puVar2 = *(undefined8 **)&(this->AudioLeft).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar2 + 2) != *(int *)(puVar2 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  Audio::FDynamicsProcessor::ProcessAudio
            (&this->LimiterLeft,(float *)*puVar2,iVar1,pfVar3,(float *)0x0,(float *)0x0);
  puVar2 = *(undefined8 **)&(this->AudioRight).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar2 + 2) != *(int *)(puVar2 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pfVar3 = (float *)*puVar2;
  lVar4 = *(longlong *)&(this->AudioRight).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar4 + 0x10) != *(int *)(lVar4 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  iVar1 = *(int *)(lVar4 + 8);
  puVar2 = *(undefined8 **)&(this->AudioRight).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar2 + 2) != *(int *)(puVar2 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  Audio::FDynamicsProcessor::ProcessAudio
            (&this->LimiterRight,(float *)*puVar2,iVar1,pfVar3,(float *)0x0,(float *)0x0);
  return;
}

// BindInputs @ 14b1b1610

void __thiscall
Metasound::FSuperOscillatorOperatorStereo::BindInputs
          (FSuperOscillatorOperatorStereo *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<float> *local_res18 [2];
  FName *local_38;
  TDataReadReference<float> *local_30;
  code *local_28;
  TDataReadReference<float> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FSuperOscillatorOperator::BindInputs((FSuperOscillatorOperator *)this,param_1);
  FLazyName::Resolve(&SuperOscillatorVertexNames::StereoWidthPinName);
  local_res18[0] = &this->StereoWidth;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<float>_>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_30 = local_res18[0];
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b1b16b0

void __thiscall
Metasound::FSuperOscillatorOperatorStereo::BindOutputs
          (FSuperOscillatorOperatorStereo *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FAudioBuffer> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataWriteReference<Metasound::FAudioBuffer> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&SuperOscillatorVertexNames::AudioLeftPinName);
  local_res18 = &this->AudioLeft;
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
  FLazyName::Resolve(&SuperOscillatorVertexNames::AudioRightPinName);
  local_res18 = &this->AudioRight;
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

// FSuperOscillatorOperatorStereo @ 14b1cf1e0

FSuperOscillatorOperatorStereo * __thiscall
Metasound::FSuperOscillatorOperatorStereo::FSuperOscillatorOperatorStereo
          (FSuperOscillatorOperatorStereo *this,FSuperOscillatorOperatorConstructParams *param_1,
          TDataReadReference<float> *param_2)

{
  longlong lVar1;
  
  FSuperOscillatorOperator::FSuperOscillatorOperator((FSuperOscillatorOperator *)this,param_1);
  this->_padding_ = (longlong)&___7FSuperOscillatorOperatorStereo_Metasound__6B_;
  *(undefined ***)&this->StereoWidth = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->StereoWidth).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->StereoWidth).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->StereoWidth = &___7__TDataReadReference_M_Metasound__6B_;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)&this->AudioLeft,NewObject,param_1->Settings
            );
  *(undefined ***)&this->AudioLeft =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)&this->AudioRight,NewObject,
             param_1->Settings);
  *(undefined ***)&this->AudioRight =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  Audio::FDynamicsProcessor::FDynamicsProcessor(&this->LimiterLeft);
  Audio::FDynamicsProcessor::FDynamicsProcessor(&this->LimiterRight);
  FSuperOscillatorOperator::SetLimiterSettings((FSuperOscillatorOperator *)this,&this->LimiterLeft);
  FSuperOscillatorOperator::SetLimiterSettings((FSuperOscillatorOperator *)this,&this->LimiterRight)
  ;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&param_2->field_0x10);
  return this;
}

// operator() @ 14b1d3260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::FSuperOscillatorOperatorStereo::GetNodeInfo'::__l2::<lambda_1>::operator()
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
  ::FName::FName((FName *)&local_58,L"SuperOscillatorStereo");
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
  pFVar8 = Metasound::FSuperOscillatorOperatorStereo::GetVertexInterface();
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

// CreateOperator @ 14b1da8f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::FSuperOscillatorOperatorStereo::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FOperatorSettings *pFVar1;
  FInputVertexInterfaceData *this;
  code *pcVar2;
  bool bVar3;
  FInputBinding *pFVar4;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar5;
  FSuperOscillatorOperatorStereo *this_00;
  FSuperOscillatorOperatorStereo *pFVar6;
  undefined1 auStack_248 [32];
  FName local_228;
  FName local_220;
  FName local_218;
  FName local_210;
  FName local_208;
  FName local_200;
  FName local_1f8;
  FName local_1f0;
  FName local_1e8;
  FName local_1e0;
  FName local_1d8;
  FName local_1d0;
  FName local_1c8;
  undefined **local_1c0 [2];
  TReferenceControllerBase<0> *local_1b0;
  undefined1 local_1a0 [40];
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
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_248;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  local_178._0_8_ = pFVar1;
  FLazyName::Resolve(&SuperOscillatorVertexNames::EnabledPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)(local_178 + 8),&local_228,pFVar1);
  FLazyName::Resolve(&SuperOscillatorVertexNames::LimitOutputPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_150,&local_220,pFVar1);
  FLazyName::Resolve(&SuperOscillatorVertexNames::NumVoicesPinName);
  local_130 = FInputVertexInterfaceData::GetOrCreateDefaultValue<int>(this,&local_218,pFVar1);
  FLazyName::Resolve(&SuperOscillatorVertexNames::BaseFrequencyPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_128,&local_210,pFVar1);
  FLazyName::Resolve(&SuperOscillatorVertexNames::DetuneVolumePinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_108,&local_208,pFVar1);
  FLazyName::Resolve(&SuperOscillatorVertexNames::MaxDetunePinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_e8,&local_200,pFVar1);
  FLazyName::Resolve(&SuperOscillatorVertexNames::EntropyPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_c8,&local_1f8,pFVar1);
  FLazyName::Resolve(&SuperOscillatorVertexNames::GlideFactorPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_a8,&local_1f0,pFVar1);
  FLazyName::Resolve(&SuperOscillatorVertexNames::PulseWidthPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_88,&local_1e8,pFVar1);
  FLazyName::Resolve(&SuperOscillatorVertexNames::FrequencyModPinName);
  local_68 = FInputVertexInterfaceData::IsVertexBound(this,&local_1e0);
  FLazyName::Resolve(&SuperOscillatorVertexNames::FrequencyModPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>
            (this,(TDataReadReference<Metasound::FAudioBuffer> *)local_60,&local_1d8,pFVar1);
  FLazyName::Resolve(&SuperOscillatorVertexNames::WaveTypePinName);
  pFVar4 = FInputVertexInterfaceData::FindChecked(this,&local_1d0);
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
  FLazyName::Resolve(&SuperOscillatorVertexNames::StereoWidthPinName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_1a0,&local_1c8,pFVar1);
  this_00 = ::operator_new(0x578);
  pFVar6 = (FSuperOscillatorOperatorStereo *)0x0;
  if (this_00 != (FSuperOscillatorOperatorStereo *)0x0) {
    local_1c0[1] = (undefined **)local_1a0._8_8_;
    local_1b0 = (TReferenceControllerBase<0> *)local_1a0._16_8_;
    if ((TReferenceControllerBase<0> *)local_1a0._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_1a0._16_8_ + 8) = *(int *)(local_1a0._16_8_ + 8) + 1;
    }
    local_1c0[0] = &___7__TDataReadReference_M_Metasound__6B_;
    pFVar6 = FSuperOscillatorOperatorStereo
                       (this_00,(FSuperOscillatorOperatorConstructParams *)local_178,
                        (TDataReadReference<float> *)local_1c0);
  }
  param_1->Node = (INode *)pFVar6;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_1a0._16_8_);
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

// GetNodeInfo @ 14b1e3ef0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FSuperOscillatorOperatorStereo::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorStereo::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorStereo::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorStereo::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::FSuperOscillatorOperatorStereo::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorStereo::GetNodeInfo(void)'
                  ::__l2::Info);
      atexit(`Metasound::FSuperOscillatorOperatorStereo::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorStereo::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorStereo::GetNodeInfo(void)'
              ::__l2::Info;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorStereo::GetNodeInfo(void)'
          ::__l2::Info;
}

// GetVertexInterface @ 14b1e7170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::FSuperOscillatorOperatorStereo::GetVertexInterface(void)

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
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar12;
  FOutputVertexInterface *pFVar13;
  FVertexInterface *pFVar14;
  ulonglong uVar15;
  undefined1 auStackY_3f8 [32];
  bool local_3c8;
  bool local_3c7 [3];
  float local_3c4;
  float local_3c0;
  float local_3bc;
  float local_3b8;
  float local_3b4;
  float local_3b0;
  float local_3ac;
  FInputVertexInterface local_3a8;
  FInputVertexInterfaceDeclarationBuilder local_388;
  longlong local_360;
  longlong local_358;
  FInputDataVertex *local_350;
  FInputDataVertex *local_348;
  FInputDataVertex *local_340;
  FOutputVertexInterface local_338;
  TOutputDataVertex<Metasound::FAudioBuffer> local_318;
  TOutputDataVertex<Metasound::FAudioBuffer> local_2f8;
  FInputDataVertex local_2d8;
  FInputDataVertex local_2a0;
  TInputDataVertex<float> local_268;
  TInputDataVertex<float> local_230;
  TInputDataVertex<float> local_1f8;
  TInputDataVertex<float> local_1c0;
  TInputDataVertex<float> local_188;
  TInputDataVertex<float> local_150;
  TInputDataVertex<Metasound::FAudioBuffer> local_118;
  TInputDataVertex<float> local_e0;
  TInputDataVertex<bool> local_a8;
  TInputDataVertex<bool> local_70;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_3f8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorStereo::GetVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorStereo::GetVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorStereo::GetVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    local_3c8 = true;
    pFVar3 = (FInputDataVertex *)
             TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                       (&local_70,&SuperOscillatorVertexNames::EnabledPinName,
                        &FDataVertexMetadata::EmptyBasic,&local_3c8);
    local_3c7[0] = true;
    pFVar4 = (FInputDataVertex *)
             TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                       (&local_a8,&SuperOscillatorVertexNames::LimitOutputPinName,
                        &FDataVertexMetadata::EmptyBasic,local_3c7);
    FLazyName::Resolve(&SuperOscillatorVertexNames::NumVoicesPinName);
    pFVar5 = GetMetasoundDataTypeName<int>();
    local_2d8._padding_ = local_360;
    local_3c4 = 440.0;
    local_2d8._padding_ = *(longlong *)pFVar5;
    local_2d8._padding_._0_4_ = 1;
    local_2d8.Literal.Value._padding_._0_4_ = 3;
    local_2d8.Literal.Value.TypeIndex = 2;
    local_2d8._padding_ = (longlong)&___7__TInputConstructorVertex_H_Metasound__6B_;
    pFVar6 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_e0,&SuperOscillatorVertexNames::BaseFrequencyPinName,
                        &FDataVertexMetadata::EmptyBasic,&local_3c4);
    pFVar7 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FAudioBuffer>::TInputDataVertex<Metasound::FAudioBuffer><>
                       (&local_118,&SuperOscillatorVertexNames::FrequencyModPinName,
                        &FDataVertexMetadata::EmptyBasic);
    local_3c0 = -0.25;
    pFVar8 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_150,&SuperOscillatorVertexNames::MaxDetunePinName,
                        &FDataVertexMetadata::EmptyBasic,&local_3c0);
    local_3bc = 0.0;
    pFVar9 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_188,&SuperOscillatorVertexNames::EntropyPinName,
                        &FDataVertexMetadata::EmptyBasic,&local_3bc);
    local_3b8 = 0.0;
    pFVar10 = (FInputDataVertex *)
              TInputDataVertex<float>::TInputDataVertex<float><float>
                        (&local_1c0,&SuperOscillatorVertexNames::DetuneVolumePinName,
                         &FDataVertexMetadata::EmptyBasic,&local_3b8);
    local_3b4 = 0.0;
    local_350 = (FInputDataVertex *)
                TInputDataVertex<float>::TInputDataVertex<float><float>
                          (&local_1f8,&SuperOscillatorVertexNames::GlideFactorPinName,
                           &FDataVertexMetadata::EmptyBasic,&local_3b4);
    local_3b0 = 0.5;
    local_348 = (FInputDataVertex *)
                TInputDataVertex<float>::TInputDataVertex<float><float>
                          (&local_230,&SuperOscillatorVertexNames::PulseWidthPinName,
                           &FDataVertexMetadata::EmptyBasic,&local_3b0);
    local_3ac = 0.5;
    local_340 = (FInputDataVertex *)
                TInputDataVertex<float>::TInputDataVertex<float><float>
                          (&local_268,&SuperOscillatorVertexNames::StereoWidthPinName,
                           &FDataVertexMetadata::EmptyBasic,&local_3ac);
    FLazyName::Resolve(&SuperOscillatorVertexNames::WaveTypePinName);
    pFVar5 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>();
    local_2a0._padding_ = local_358;
    local_2a0._padding_ = *(longlong *)pFVar5;
    local_2a0._padding_ =
         (longlong)
         &
         ___7__TInputConstructorVertex_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_
    ;
    local_3a8._padding_ = 0;
    local_3a8._padding_ = 0;
    local_3a8.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3a8.SubInterfaces.ArrayNum = 0;
    local_3a8.SubInterfaces.ArrayMax = 0;
    local_2a0._padding_._0_4_ = 1;
    local_2a0.Literal.Value.TypeIndex = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_388,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_3a8,
               &local_3a8.SubInterfaces);
    if ((local_388.Vertices)->ArrayMax < 0xc) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0xc,&(local_388.Vertices)->AllocatorInstance,(local_388.Vertices)->ArrayNum,
                 &(local_388.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_388,pFVar3);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_388,pFVar4);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_388,&local_2d8);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_388,pFVar6);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_388,pFVar7);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_388,pFVar8);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_388,pFVar9);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_388,pFVar10);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_388,local_350);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_388,local_348);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_388,local_340);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_388,&local_2a0);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_388);
    pTVar11 = TOutputDataVertex<Metasound::FAudioBuffer>::
              TOutputDataVertex<Metasound::FAudioBuffer><>
                        (&local_318,&SuperOscillatorVertexNames::AudioLeftPinName,
                         &FDataVertexMetadata::EmptyBasic);
    pTVar12 = TOutputDataVertex<Metasound::FAudioBuffer>::
              TOutputDataVertex<Metasound::FAudioBuffer><>
                        (&local_2f8,&SuperOscillatorVertexNames::AudioRightPinName,
                         &FDataVertexMetadata::EmptyBasic);
    pFVar13 = FOutputVertexInterface::
              FOutputVertexInterface<Metasound::TOutputDataVertex<Metasound::FAudioBuffer>,Metasound::TOutputDataVertex<Metasound::FAudioBuffer>_>
                        (&local_338,pTVar11,pTVar12);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorStereo::GetVertexInterface(void)'
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
    uVar15 = (ulonglong)local_2a0.Literal.Value.TypeIndex;
    if ((0xc < local_2a0.Literal.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar15] !=
        UE::Core::Private::TDestructorCaller<Metasound::FLiteral::FNone>::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar15])(&local_2a0.Literal);
    }
    if ((0xc < (byte)local_268._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_268._48_1_])(&local_268.field_0x20);
    if ((0xc < (byte)local_230._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_230._48_1_])(&local_230.field_0x20);
    if ((0xc < (byte)local_1f8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_1f8._48_1_])(&local_1f8.field_0x20);
    if ((0xc < (byte)local_1c0._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_1c0._48_1_])(&local_1c0.field_0x20);
    if ((0xc < (byte)local_188._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_188._48_1_])(&local_188.field_0x20);
    if ((0xc < (byte)local_150._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_150._48_1_])(&local_150.field_0x20);
    if ((0xc < (byte)local_118._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_118._48_1_])(&local_118.field_0x20);
    if ((0xc < (byte)local_e0._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_e0._48_1_])(&local_e0.field_0x20);
    uVar15 = (ulonglong)local_2d8.Literal.Value.TypeIndex;
    if ((0xc < local_2d8.Literal.Value.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar15] !=
        UE::Core::Private::TDestructorCaller<int>::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar15])(&local_2d8.Literal);
    }
    if ((0xc < (byte)local_a8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_a8._48_1_])(&local_a8.field_0x20);
    if ((0xc < (byte)local_70._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FVertexInterface *)(*pcVar1)();
      return pFVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_70._48_1_])(&local_70.field_0x20);
    atexit(`Metasound::FSuperOscillatorOperatorStereo::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__Interface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorStereo::GetVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FSuperOscillatorOperatorStereo::GetVertexInterface(void)'
          ::__l2::Interface;
}

