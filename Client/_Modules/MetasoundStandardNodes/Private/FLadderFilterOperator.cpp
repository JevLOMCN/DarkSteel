// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 9

// FLadderFilterOperator @ 14aff99f0

/* WARNING: Enum "Type": Some values do not have unique names */

FLadderFilterOperator * __thiscall
Metasound::FLadderFilterOperator::FLadderFilterOperator
          (FLadderFilterOperator *this,FOperatorSettings *param_1,
          TDataReadReference<Metasound::FAudioBuffer> *param_2,TDataReadReference<float> *param_3,
          TDataReadReference<float> *param_4)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FLadderFilterOperator *pFVar5;
  
  this->_padding_ = (longlong)&___7FLadderFilterOperator_Metasound__6B_;
  *(undefined ***)&this->AudioInput = &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_
  ;
  *(undefined8 *)&(this->AudioInput).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar2 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->AudioInput).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->AudioInput =
       &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined ***)&this->Frequency = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->Frequency).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar2 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->Frequency).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->Frequency = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->Resonance = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->Resonance).field_0x8 = *(undefined8 *)&param_4->field_0x8;
  lVar2 = *(longlong *)&param_4->field_0x10;
  *(longlong *)&(this->Resonance).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->Resonance = &___7__TDataReadReference_M_Metasound__6B_;
  this->PreviousFrequency = -1.0;
  this->PreviousResonance = -1.0;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)&this->AudioOutput,NewObject,param_1);
  *(undefined ***)&this->AudioOutput =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  this->BlockSize = param_1->NumFramesPerBlock;
  iVar1 = param_1->SampleRate;
  this->SampleRate = (float)iVar1;
  this->MaxCutoffFrequency = (float)iVar1 * __real_3f000000;
  Audio::FLadderFilter::FLadderFilter(&this->LadderFilter);
  lVar2 = *(longlong *)&(this->AudioOutput).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar2 + 0x10) != *(int *)(lVar2 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  if (*(int *)(lVar2 + 8) != this->BlockSize) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("AudioOutput->Num() == BlockSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundBasicFilters.cpp"
                       ,0x9b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FLadderFilterOperator *)(*pcVar3)();
      return pFVar5;
    }
  }
  (**(code **)((this->LadderFilter)._padding_ + 8))(&this->LadderFilter,this->SampleRate,1,0,0);
  return this;
}

// operator() @ 14b002c90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::FLadderFilterOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
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
  ::FName::FName(&local_res10,L"Ladder Filter");
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
  pFVar8 = Metasound::FLadderFilterOperator::DeclareVertexInterface(&local_60);
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

// BindInputs @ 14b004fc0

void __thiscall
Metasound::FLadderFilterOperator::BindInputs
          (FLadderFilterOperator *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FAudioBuffer> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<Metasound::FAudioBuffer> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&BasicFilterParameterNames::ParamAudioInputName);
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
  FLazyName::Resolve(&BasicFilterParameterNames::ParamCutoffFrequencyName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->Frequency;
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
  FLazyName::Resolve(&BasicFilterParameterNames::ParamResonanceName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->Resonance;
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

// BindOutputs @ 14b005520

void __thiscall
Metasound::FLadderFilterOperator::BindOutputs
          (FLadderFilterOperator *this,FOutputVertexInterfaceData *param_1)

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

// CreateOperator @ 14b014540

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::FLadderFilterOperator::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  FLadderFilterOperator *this_00;
  FLadderFilterOperator *pFVar2;
  FName local_res8;
  undefined1 local_68 [32];
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
  FLazyName::Resolve(&BasicFilterParameterNames::ParamResonanceName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_68,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x3c0);
  pFVar2 = (FLadderFilterOperator *)0x0;
  if (this_00 != (FLadderFilterOperator *)0x0) {
    pFVar2 = FLadderFilterOperator
                       (this_00,pFVar1,(TDataReadReference<Metasound::FAudioBuffer> *)local_28,
                        (TDataReadReference<float> *)local_48,(TDataReadReference<float> *)local_68)
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

// DeclareVertexInterface @ 14b019b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::FLadderFilterOperator::DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FInputDataVertex *pFVar6;
  FVertexInterface *pFVar7;
  undefined1 auStackY_1b8 [32];
  float local_188;
  float local_184;
  FInputVertexInterface local_180;
  FOutputVertexInterface local_160;
  FInputVertexInterfaceDeclarationBuilder local_140;
  FOutputVertexInterfaceDeclarationBuilder local_118;
  TOutputDataVertex<Metasound::FAudioBuffer> local_f0;
  TInputDataVertex<Metasound::FAudioBuffer> local_d0;
  TInputDataVertex<float> local_98;
  TInputDataVertex<float> local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pTVar3 = TOutputDataVertex<Metasound::FAudioBuffer>::
               TOutputDataVertex<Metasound::FAudioBuffer><>
                         (&local_f0,&BasicFilterParameterNames::ParamAudioOutputName,
                          &FDataVertexMetadata::EmptyBasic);
      FOutputVertexInterface::FOutputVertexInterface(&local_160);
      VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
      FOutputVertexInterfaceDeclarationBuilder
                (&local_118,
                 (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_160,
                 &local_160.SubInterfaces);
      if ((local_118.Vertices)->ArrayMax < 1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,&(local_118.Vertices)->AllocatorInstance,(local_118.Vertices)->ArrayNum,
                   &(local_118.Vertices)->ArrayMax);
      }
      VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
                (&local_118,(FOutputDataVertex *)pTVar3);
      VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
                ((FSubInterfaceDeclarationBuilder *)&local_118);
      local_188 = 1.0;
      pFVar4 = (FInputDataVertex *)
               TInputDataVertex<float>::TInputDataVertex<float><float>
                         (&local_60,&BasicFilterParameterNames::ParamResonanceName,
                          &FDataVertexMetadata::EmptyBasic,&local_188);
      local_184 = 20000.0;
      pFVar5 = (FInputDataVertex *)
               TInputDataVertex<float>::TInputDataVertex<float><float>
                         (&local_98,&BasicFilterParameterNames::ParamCutoffFrequencyName,
                          &FDataVertexMetadata::EmptyBasic,&local_184);
      pFVar6 = (FInputDataVertex *)
               TInputDataVertex<Metasound::FAudioBuffer>::
               TInputDataVertex<Metasound::FAudioBuffer><>
                         (&local_d0,&BasicFilterParameterNames::ParamAudioInputName,
                          &FDataVertexMetadata::EmptyBasic);
      local_180._padding_ = 0;
      local_180._padding_ = 0;
      local_180.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_180.SubInterfaces.ArrayNum = 0;
      local_180.SubInterfaces.ArrayMax = 0;
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::
      FInputVertexInterfaceDeclarationBuilder
                (&local_140,
                 (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_180,
                 &local_180.SubInterfaces);
      if ((local_140.Vertices)->ArrayMax < 3) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,3,&(local_140.Vertices)->AllocatorInstance,(local_140.Vertices)->ArrayNum,
                   &(local_140.Vertices)->ArrayMax);
      }
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_140,pFVar6);
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_140,pFVar5);
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_140,pFVar4);
      VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
                ((FSubInterfaceDeclarationBuilder *)&local_140);
      FVertexInterface::FVertexInterface(&::Interface,&local_180,&local_160);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_180.SubInterfaces.AllocatorInstance.Data,
                 local_180.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_180.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_180.SubInterfaces.AllocatorInstance.Data);
      }
      DestructItems<Metasound::FInputDataVertex,int>
                ((FInputDataVertex *)local_180._padding_,(int)local_180._padding_);
      if ((FInputDataVertex *)local_180._padding_ != (FInputDataVertex *)0x0) {
        FMemory::Free((void *)local_180._padding_);
      }
      if (0xc < (byte)local_d0._48_1_) {
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
                  ::__l2::Destructors)[(byte)local_d0._48_1_])(&local_d0.field_0x20);
      if (0xc < (byte)local_98._48_1_) {
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
                  ::__l2::Destructors)[(byte)local_98._48_1_])(&local_98.field_0x20);
      if (0xc < (byte)local_60._48_1_) {
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
                  ::__l2::Destructors)[(byte)local_60._48_1_])(&local_60.field_0x20);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_160.SubInterfaces.AllocatorInstance.Data,
                 local_160.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_160.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_160.SubInterfaces.AllocatorInstance.Data);
      }
      if ((void *)local_160._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_160._padding_);
      }
      atexit(`Metasound::FLadderFilterOperator::DeclareVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&::Interface);
  return __return_storage_ptr__;
}

// Execute @ 14b01f350

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Metasound::FLadderFilterOperator::Execute(FLadderFilterOperator *this)

{
  FLadderFilter *pFVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = **(float **)&(this->Frequency).field_0x8;
  if (this->MaxCutoffFrequency <= fVar7) {
    fVar7 = this->MaxCutoffFrequency;
  }
  fVar6 = **(float **)&(this->Resonance).field_0x8;
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  if (__real_41200000 <= fVar6) {
    fVar6 = __real_41200000;
  }
  if (fVar6 <= __real_3f800000) {
    fVar6 = __real_3f800000;
  }
  if ((__real_322bcc77 <
       (float)((uint)(this->PreviousFrequency - fVar7) & __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
     (__real_322bcc77 <
      (float)((uint)(this->PreviousResonance - fVar6) & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    pFVar1 = &this->LadderFilter;
    (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1);
    (**(code **)(pFVar1->_padding_ + 0x10))(pFVar1);
    (**(code **)(pFVar1->_padding_ + 0x58))(pFVar1);
    this->PreviousFrequency = fVar7;
    this->PreviousResonance = fVar6;
  }
  puVar3 = *(undefined8 **)&(this->AudioOutput).field_0x8;
  UNRECOVERED_JUMPTABLE = *(code **)((this->LadderFilter)._padding_ + 0x70);
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar3 + 2) != *(int *)(puVar3 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  uVar4 = *puVar3;
  lVar5 = *(longlong *)&(this->AudioInput).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar5 + 0x10) != *(int *)(lVar5 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  uVar2 = *(undefined4 *)(lVar5 + 8);
  puVar3 = *(undefined8 **)&(this->AudioInput).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar3 + 2) != *(int *)(puVar3 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
                    /* WARNING: Could not recover jumptable at 0x00014b01f4d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(&this->LadderFilter,*puVar3,uVar2,uVar4);
  return;
}

// GetNodeInfo @ 14b029300

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FLadderFilterOperator::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `Metasound::FLadderFilterOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,&::Info);
      atexit(`Metasound::FLadderFilterOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&::_TSS0);
      return &::Info;
    }
  }
  return &::Info;
}

// Reset @ 14b030b90

void __thiscall
Metasound::FLadderFilterOperator::Reset(FLadderFilterOperator *this,FResetParams *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  this->PreviousFrequency = -1.0;
  this->PreviousResonance = -1.0;
  puVar2 = *(undefined8 **)&(this->AudioOutput).field_0x8;
  iVar1 = *(int *)(puVar2 + 1);
  if (0 < iVar1) {
    memset((void *)*puVar2,0,(longlong)iVar1 << 2);
  }
  (**(code **)((this->LadderFilter)._padding_ + 8))(&this->LadderFilter,this->SampleRate,1,0,0);
  return;
}

