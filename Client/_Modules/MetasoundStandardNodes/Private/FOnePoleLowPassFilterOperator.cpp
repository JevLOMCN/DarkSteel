// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 9

// FOnePoleLowPassFilterOperator @ 14affabb0

/* WARNING: Enum "Type": Some values do not have unique names */

FOnePoleLowPassFilterOperator * __thiscall
Metasound::FOnePoleLowPassFilterOperator::FOnePoleLowPassFilterOperator
          (FOnePoleLowPassFilterOperator *this,FOperatorSettings *param_1,
          TDataReadReference<Metasound::FAudioBuffer> *param_2,TDataReadReference<float> *param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FOnePoleLowPassFilterOperator *pFVar4;
  
  this->_padding_ = (longlong)&___7FOnePoleLowPassFilterOperator_Metasound__6B_;
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
  *(undefined ***)&this->Frequency = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->Frequency).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar1 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->Frequency).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->Frequency = &___7__TDataReadReference_M_Metasound__6B_;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)&this->AudioOutput,NewObject,param_1);
  *(undefined ***)&this->AudioOutput =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  this->BlockSize = param_1->NumFramesPerBlock;
  this->SampleRate = (float)param_1->SampleRate;
  Audio::FInterpolatedLPF::FInterpolatedLPF(&this->OnePoleLowPassFilter);
  lVar1 = *(longlong *)&(this->AudioOutput).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar1 + 0x10) != *(int *)(lVar1 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  if (*(int *)(lVar1 + 8) != this->BlockSize) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AudioOutput->Num() == BlockSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundBasicFilters.cpp"
                       ,0x207,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FOnePoleLowPassFilterOperator *)(*pcVar2)();
      return pFVar4;
    }
  }
  Audio::FInterpolatedLPF::Init(&this->OnePoleLowPassFilter,this->SampleRate,1);
  return this;
}

// operator() @ 14b003110

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::FOnePoleLowPassFilterOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
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
  FNodeClassName local_78;
  FVertexInterface local_60;
  
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_res10,L"One-Pole Low Pass Filter");
  Metasound::FNodeClassName::FNodeClassName
            (&local_78,&Metasound::StandardNodes::Namespace,&local_res10,
             &Metasound::StandardNodes::AudioVariant);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_78.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_78.Name;
  (__return_storage_ptr__->ClassName).Variant = local_78.Variant;
  pFVar7 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar7);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
  }
  pFVar7 = FText::FText((FText *)&local_78);
  FText::operator=(&__return_storage_ptr__->Description,pFVar7);
  if (local_78.Namespace != (FName)0x0) {
    (**(code **)(*(longlong *)local_78.Namespace + 0x10))();
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
  pFVar8 = Metasound::FOnePoleLowPassFilterOperator::DeclareVertexInterface(&local_60);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar8);
  Metasound::FVertexInterface::~FVertexInterface(&local_60);
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
  TVar4 = Metasound::NodeCategories::Filters.TextData;
  *(ITextData **)pFVar9 = Metasound::NodeCategories::Filters.TextData.Reference;
  if (TVar4.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar4.Reference + 8))(TVar4.Reference,&local_res10);
  }
  *(uint *)(pFVar9 + 8) = Metasound::NodeCategories::Filters.Flags;
  pTVar2 = &__return_storage_ptr__->Keywords;
  if (pTVar2 != &Metasound::LowPassKeywords) {
    DestructItems<FText,int>
              ((FText *)(pTVar2->AllocatorInstance).Data,(__return_storage_ptr__->Keywords).ArrayNum
              );
    FVar5 = Metasound::LowPassKeywords.AllocatorInstance;
    piVar1 = &(__return_storage_ptr__->Keywords).ArrayMax;
    iVar6 = Metasound::LowPassKeywords.ArrayNum;
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

// BindInputs @ 14b005200

void __thiscall
Metasound::FOnePoleLowPassFilterOperator::BindInputs
          (FOnePoleLowPassFilterOperator *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FAudioBuffer> *local_res18;
  undefined1 local_38 [16];
  code *local_28;
  TDataReadReference<Metasound::FAudioBuffer> **local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&BasicFilterParameterNames::ParamAudioInputName);
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
  FLazyName::Resolve(&BasicFilterParameterNames::ParamCutoffFrequencyName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->Frequency;
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
  return;
}

// BindOutputs @ 14b005640

void __thiscall
Metasound::FOnePoleLowPassFilterOperator::BindOutputs
          (FOnePoleLowPassFilterOperator *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FAudioBuffer> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FAudioBuffer> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FAudioBuffer> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&BasicFilterParameterNames::ParamAudioOutputName);
  local_res18[0] = &this->AudioOutput;
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

// CreateOperator @ 14b014750

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::FOnePoleLowPassFilterOperator::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  FOnePoleLowPassFilterOperator *this_00;
  FOnePoleLowPassFilterOperator *pFVar2;
  FName local_res8;
  undefined1 local_48 [32];
  undefined1 local_28 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&BasicFilterParameterNames::ParamAudioInputName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>
            (this,(TDataReadReference<Metasound::FAudioBuffer> *)local_28,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&BasicFilterParameterNames::ParamCutoffFrequencyName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_48,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0xb0);
  pFVar2 = (FOnePoleLowPassFilterOperator *)0x0;
  if (this_00 != (FOnePoleLowPassFilterOperator *)0x0) {
    pFVar2 = FOnePoleLowPassFilterOperator
                       (this_00,pFVar1,(TDataReadReference<Metasound::FAudioBuffer> *)local_28,
                        (TDataReadReference<float> *)local_48);
  }
  param_1->Node = (INode *)pFVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_48._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_28._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// DeclareVertexInterface @ 14b01a1b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::FOnePoleLowPassFilterOperator::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar3;
  TInputDataVertex<float> *pTVar4;
  TInputDataVertex<Metasound::FAudioBuffer> *pTVar5;
  FInputVertexInterface *pFVar6;
  FVertexInterface *pFVar7;
  undefined1 auStackY_148 [32];
  float local_118 [2];
  FOutputVertexInterface local_110;
  FInputVertexInterface local_f0;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  TOutputDataVertex<Metasound::FAudioBuffer> local_a8;
  TInputDataVertex<Metasound::FAudioBuffer> local_88;
  TInputDataVertex<float> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_148;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pTVar3 = TOutputDataVertex<Metasound::FAudioBuffer>::
               TOutputDataVertex<Metasound::FAudioBuffer><>
                         (&local_a8,&BasicFilterParameterNames::ParamAudioOutputName,
                          &FDataVertexMetadata::EmptyBasic);
      FOutputVertexInterface::FOutputVertexInterface(&local_110);
      VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
      FOutputVertexInterfaceDeclarationBuilder
                (&local_d0,
                 (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_110,
                 &local_110.SubInterfaces);
      if ((local_d0.Vertices)->ArrayMax < 1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,&(local_d0.Vertices)->AllocatorInstance,(local_d0.Vertices)->ArrayNum,
                   &(local_d0.Vertices)->ArrayMax);
      }
      VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
                (&local_d0,(FOutputDataVertex *)pTVar3);
      VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
                ((FSubInterfaceDeclarationBuilder *)&local_d0);
      local_118[0] = 20000.0;
      pTVar4 = TInputDataVertex<float>::TInputDataVertex<float><float>
                         (&local_50,&BasicFilterParameterNames::ParamCutoffFrequencyName,
                          &FDataVertexMetadata::EmptyBasic,local_118);
      pTVar5 = TInputDataVertex<Metasound::FAudioBuffer>::
               TInputDataVertex<Metasound::FAudioBuffer><>
                         (&local_88,&BasicFilterParameterNames::ParamAudioInputName,
                          &FDataVertexMetadata::EmptyBasic);
      pFVar6 = FInputVertexInterface::
               FInputVertexInterface<Metasound::TInputDataVertex<Metasound::FAudioBuffer>,Metasound::TInputDataVertex<float>_>
                         (&local_f0,pTVar5,pTVar4);
      FVertexInterface::FVertexInterface(&::Interface,pFVar6,&local_110);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_f0.SubInterfaces.AllocatorInstance.Data,
                 local_f0.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_f0.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_f0.SubInterfaces.AllocatorInstance.Data);
      }
      DestructItems<Metasound::FInputDataVertex,int>
                ((FInputDataVertex *)local_f0._padding_,(int)local_f0._padding_);
      if ((FInputDataVertex *)local_f0._padding_ != (FInputDataVertex *)0x0) {
        FMemory::Free((void *)local_f0._padding_);
      }
      if (0xc < (byte)local_88._48_1_) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar7 = (FVertexInterface *)(*pcVar1)();
          return pFVar7;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[(byte)local_88._48_1_])(&local_88.field_0x20);
      if (0xc < (byte)local_50._48_1_) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar7 = (FVertexInterface *)(*pcVar1)();
          return pFVar7;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[(byte)local_50._48_1_])(&local_50.field_0x20);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_110.SubInterfaces.AllocatorInstance.Data,
                 local_110.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_110.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_110.SubInterfaces.AllocatorInstance.Data);
      }
      if ((void *)local_110._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_110._padding_);
      }
      atexit(`Metasound::FOnePoleLowPassFilterOperator::DeclareVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&::Interface);
  return __return_storage_ptr__;
}

// Execute @ 14b01f5f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::FOnePoleLowPassFilterOperator::Execute(FOnePoleLowPassFilterOperator *this)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  float *pfVar5;
  float fVar6;
  
  lVar3 = *(longlong *)&(this->AudioInput).field_0x8;
  fVar6 = this->SampleRate;
  if (0.0 <= fVar6) {
    fVar6 = 0.0;
  }
  fVar1 = **(float **)&(this->Frequency).field_0x8;
  if (fVar6 <= fVar1) {
    fVar6 = fVar1;
  }
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar3 + 0x10) != *(int *)(lVar3 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  Audio::FInterpolatedLPF::StartFrequencyInterpolation
            (&this->OnePoleLowPassFilter,fVar6,*(int *)(lVar3 + 8));
  lVar3 = *(longlong *)&(this->AudioInput).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar3 + 0x10) != *(int *)(lVar3 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  iVar2 = *(int *)(lVar3 + 8);
  puVar4 = *(undefined8 **)&(this->AudioOutput).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar4 + 2) != *(int *)(puVar4 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pfVar5 = (float *)*puVar4;
  puVar4 = *(undefined8 **)&(this->AudioInput).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar4 + 2) != *(int *)(puVar4 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  Audio::FInterpolatedLPF::ProcessAudioBuffer
            (&this->OnePoleLowPassFilter,(float *)*puVar4,pfVar5,iVar2);
  (this->OnePoleLowPassFilter).B1Curr = (this->OnePoleLowPassFilter).B1Target;
  (this->OnePoleLowPassFilter).B1Delta = 0.0;
  return;
}

// GetNodeInfo @ 14b029420

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FOnePoleLowPassFilterOperator::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `Metasound::FOnePoleLowPassFilterOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,&::Info);
      atexit(`Metasound::FOnePoleLowPassFilterOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&::_TSS0);
      return &::Info;
    }
  }
  return &::Info;
}

// Reset @ 14b030d10

void __thiscall
Metasound::FOnePoleLowPassFilterOperator::Reset
          (FOnePoleLowPassFilterOperator *this,FResetParams *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)&(this->AudioOutput).field_0x8;
  iVar1 = *(int *)(puVar2 + 1);
  if (0 < iVar1) {
    memset((void *)*puVar2,0,(longlong)iVar1 << 2);
  }
  Audio::FInterpolatedLPF::Init(&this->OnePoleLowPassFilter,this->SampleRate,1);
  return;
}

