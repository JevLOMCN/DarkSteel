// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 9

// FStateVariableFilterOperator @ 14affae80

/* WARNING: Enum "Type": Some values do not have unique names */

FStateVariableFilterOperator * __thiscall
Metasound::FStateVariableFilterOperator::FStateVariableFilterOperator
          (FStateVariableFilterOperator *this,FOperatorSettings *param_1,
          TDataReadReference<Metasound::FAudioBuffer> *param_2,TDataReadReference<float> *param_3,
          TDataReadReference<float> *param_4,TDataReadReference<float> *param_5)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FStateVariableFilterOperator *pFVar5;
  
  this->_padding_ = (longlong)&___7FStateVariableFilterOperator_Metasound__6B_;
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
  *(undefined ***)&this->BandStopControl = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->BandStopControl).field_0x8 = *(undefined8 *)&param_5->field_0x8;
  lVar2 = *(longlong *)&param_5->field_0x10;
  *(longlong *)&(this->BandStopControl).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->BandStopControl = &___7__TDataReadReference_M_Metasound__6B_;
  this->PreviousFrequency = -1.0;
  this->PreviousResonance = -1.0;
  this->PreviousBandStopControl = -1.0;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)&this->LowPassOutput,NewObject,param_1);
  *(undefined ***)&this->LowPassOutput =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)&this->HighPassOutput,NewObject,param_1);
  *(undefined ***)&this->HighPassOutput =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)&this->BandPassOutput,NewObject,param_1);
  *(undefined ***)&this->BandPassOutput =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  TDataReference<Metasound::FAudioBuffer>::
  TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
            ((TDataReference<Metasound::FAudioBuffer> *)&this->BandStopOutput,NewObject,param_1);
  *(undefined ***)&this->BandStopOutput =
       &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
  this->BlockSize = param_1->NumFramesPerBlock;
  iVar1 = param_1->SampleRate;
  this->SampleRate = (float)iVar1;
  this->MaxCutoffFrequency = (float)iVar1 * __real_3f000000;
  Audio::FStateVariableFilter::FStateVariableFilter(&this->StateVariableFilter);
  lVar2 = *(longlong *)&(this->LowPassOutput).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar2 + 0x10) != *(int *)(lVar2 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  if (*(int *)(lVar2 + 8) != this->BlockSize) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("LowPassOutput->Num() == BlockSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundBasicFilters.cpp"
                       ,0x14e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FStateVariableFilterOperator *)(*pcVar3)();
      return pFVar5;
    }
  }
  lVar2 = *(longlong *)&(this->HighPassOutput).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar2 + 0x10) != *(int *)(lVar2 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  if (*(int *)(lVar2 + 8) != this->BlockSize) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("HighPassOutput->Num() == BlockSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundBasicFilters.cpp"
                       ,0x14f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FStateVariableFilterOperator *)(*pcVar3)();
      return pFVar5;
    }
  }
  lVar2 = *(longlong *)&(this->BandPassOutput).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar2 + 0x10) != *(int *)(lVar2 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  if (*(int *)(lVar2 + 8) != this->BlockSize) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("BandPassOutput->Num() == BlockSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundBasicFilters.cpp"
                       ,0x150,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FStateVariableFilterOperator *)(*pcVar3)();
      return pFVar5;
    }
  }
  lVar2 = *(longlong *)&(this->BandPassOutput).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar2 + 0x10) != *(int *)(lVar2 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  if (*(int *)(lVar2 + 8) != this->BlockSize) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("BandPassOutput->Num() == BlockSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundStandardNodes\\Private\\MetasoundBasicFilters.cpp"
                       ,0x151,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FStateVariableFilterOperator *)(*pcVar3)();
      return pFVar5;
    }
  }
  (**(code **)((this->StateVariableFilter)._padding_ + 8))
            (&this->StateVariableFilter,this->SampleRate,1,0,0);
  return this;
}

// operator() @ 14b003350

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::FStateVariableFilterOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar2;
  ITextData *pIVar3;
  code *pcVar4;
  TRefCountPtr<ITextData> TVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FText *pFVar9;
  FVertexInterface *pFVar10;
  FNodeClassMetadata *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FName local_res20;
  FText local_a8;
  FText local_98;
  FNodeClassName local_88;
  FVertexInterface local_70;
  
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_res20,L"State Variable Filter");
  Metasound::FNodeClassName::FNodeClassName
            (&local_88,&Metasound::StandardNodes::Namespace,&local_res20,
             &Metasound::StandardNodes::AudioVariant);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_88.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_88.Name;
  (__return_storage_ptr__->ClassName).Variant = local_88.Variant;
  pFVar9 = FText::FText(&local_a8);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar9);
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  pFVar9 = FText::FText(&local_98);
  FText::operator=(&__return_storage_ptr__->Description,pFVar9);
  if (local_98.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
  }
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar5 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar3 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar3 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar5.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar5.Reference + 8))(TVar5.Reference,local_res10);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar10 = Metasound::FStateVariableFilterOperator::DeclareVertexInterface(&local_70);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar10);
  Metasound::FVertexInterface::~FVertexInterface(&local_70);
  iVar7 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance,piVar1);
  }
  pFVar12 = (__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar7 + 1;
  pFVar12 = pFVar12 + (longlong)iVar7 * 0x10;
  *(undefined8 *)pFVar12 = 0;
  TVar5 = Metasound::NodeCategories::Filters.TextData;
  *(ITextData **)pFVar12 = Metasound::NodeCategories::Filters.TextData.Reference;
  if (TVar5.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar5.Reference + 8))(TVar5.Reference,local_res18);
  }
  *(uint *)(pFVar12 + 8) = Metasound::NodeCategories::Filters.Flags;
  pTVar2 = &__return_storage_ptr__->Keywords;
  if (pTVar2 == &Metasound::LowPassKeywords) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar11 = (FNodeClassMetadata *)(*pcVar4)();
      return pFVar11;
    }
  }
  iVar7 = Metasound::LowPassKeywords.ArrayNum;
  if (Metasound::LowPassKeywords.ArrayNum != 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,Metasound::LowPassKeywords.ArrayNum,&pTVar2->AllocatorInstance,
                       &(__return_storage_ptr__->Keywords).ArrayNum,
                       &(__return_storage_ptr__->Keywords).ArrayMax);
    ConstructItems<FText,FText,int>
              ((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x10,
               (FText *)Metasound::LowPassKeywords.AllocatorInstance.Data,iVar7);
  }
  if (pTVar2 == &Metasound::HighPassKeywords) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar11 = (FNodeClassMetadata *)(*pcVar4)();
      return pFVar11;
    }
  }
  iVar7 = Metasound::HighPassKeywords.ArrayNum;
  if (Metasound::HighPassKeywords.ArrayNum != 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,Metasound::HighPassKeywords.ArrayNum,&pTVar2->AllocatorInstance,
                       &(__return_storage_ptr__->Keywords).ArrayNum,
                       &(__return_storage_ptr__->Keywords).ArrayMax);
    ConstructItems<FText,FText,int>
              ((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x10,
               (FText *)Metasound::HighPassKeywords.AllocatorInstance.Data,iVar7);
  }
  pTVar2 = &__return_storage_ptr__->Keywords;
  if (pTVar2 == &Metasound::BandPassKeywords) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar11 = (FNodeClassMetadata *)(*pcVar4)();
      return pFVar11;
    }
  }
  iVar7 = Metasound::BandPassKeywords.ArrayNum;
  if (Metasound::BandPassKeywords.ArrayNum != 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,Metasound::BandPassKeywords.ArrayNum,&pTVar2->AllocatorInstance,
                       &(__return_storage_ptr__->Keywords).ArrayNum,
                       &(__return_storage_ptr__->Keywords).ArrayMax);
    ConstructItems<FText,FText,int>
              ((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x10,
               (FText *)Metasound::BandPassKeywords.AllocatorInstance.Data,iVar7);
  }
  pTVar2 = &__return_storage_ptr__->Keywords;
  if (pTVar2 == &Metasound::NotchKeywords) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar11 = (FNodeClassMetadata *)(*pcVar4)();
      return pFVar11;
    }
  }
  iVar7 = Metasound::NotchKeywords.ArrayNum;
  if (Metasound::NotchKeywords.ArrayNum != 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,Metasound::NotchKeywords.ArrayNum,&pTVar2->AllocatorInstance,
                       &(__return_storage_ptr__->Keywords).ArrayNum,
                       &(__return_storage_ptr__->Keywords).ArrayMax);
    ConstructItems<FText,FText,int>
              ((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x10,
               (FText *)Metasound::NotchKeywords.AllocatorInstance.Data,iVar7);
  }
  return __return_storage_ptr__;
}

// BindInputs @ 14b0052f0

void __thiscall
Metasound::FStateVariableFilterOperator::BindInputs
          (FStateVariableFilterOperator *this,FInputVertexInterfaceData *param_1)

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
  FLazyName::Resolve(&BasicFilterParameterNames::ParamBandStopControlName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->BandStopControl;
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

// BindOutputs @ 14b0056d0

void __thiscall
Metasound::FStateVariableFilterOperator::BindOutputs
          (FStateVariableFilterOperator *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FAudioBuffer> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataWriteReference<Metasound::FAudioBuffer> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&BasicFilterParameterNames::ParamLowPassOutputName);
  local_res18 = &this->LowPassOutput;
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
  FLazyName::Resolve(&BasicFilterParameterNames::ParamHighPassOutputName);
  local_res18 = &this->HighPassOutput;
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
  FLazyName::Resolve(&BasicFilterParameterNames::ParamBandPassOutputName);
  local_res18 = &this->BandPassOutput;
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
  FLazyName::Resolve(&BasicFilterParameterNames::ParamBandStopOutputName);
  local_res18 = &this->BandStopOutput;
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

// CreateOperator @ 14b014830

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::FStateVariableFilterOperator::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  FStateVariableFilterOperator *this_00;
  FStateVariableFilterOperator *pFVar2;
  FName local_res8;
  undefined1 local_88 [32];
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
  FLazyName::Resolve(&BasicFilterParameterNames::ParamBandStopControlName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_88,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x1d0);
  pFVar2 = (FStateVariableFilterOperator *)0x0;
  if (this_00 != (FStateVariableFilterOperator *)0x0) {
    pFVar2 = FStateVariableFilterOperator
                       (this_00,pFVar1,(TDataReadReference<Metasound::FAudioBuffer> *)local_28,
                        (TDataReadReference<float> *)local_48,(TDataReadReference<float> *)local_68,
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

// DeclareVertexInterface @ 14b01a450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::FStateVariableFilterOperator::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar3;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar4;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar5;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar6;
  FInputDataVertex *pFVar7;
  FInputDataVertex *pFVar8;
  FInputDataVertex *pFVar9;
  FInputDataVertex *pFVar10;
  FVertexInterface *pFVar11;
  undefined1 auStackY_258 [32];
  float local_228;
  float local_224;
  float local_220 [2];
  FInputVertexInterface local_218;
  FOutputVertexInterface local_1f8;
  FOutputVertexInterfaceDeclarationBuilder local_1d8;
  FInputVertexInterfaceDeclarationBuilder local_1b0;
  TOutputDataVertex<Metasound::FAudioBuffer> local_188;
  TOutputDataVertex<Metasound::FAudioBuffer> local_168;
  TOutputDataVertex<Metasound::FAudioBuffer> local_148;
  TOutputDataVertex<Metasound::FAudioBuffer> local_128;
  TInputDataVertex<Metasound::FAudioBuffer> local_108;
  TInputDataVertex<float> local_d0;
  TInputDataVertex<float> local_98;
  TInputDataVertex<float> local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_258;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pTVar3 = TOutputDataVertex<Metasound::FAudioBuffer>::
               TOutputDataVertex<Metasound::FAudioBuffer><>
                         (&local_188,&BasicFilterParameterNames::ParamBandStopOutputName,
                          &FDataVertexMetadata::EmptyBasic);
      pTVar4 = TOutputDataVertex<Metasound::FAudioBuffer>::
               TOutputDataVertex<Metasound::FAudioBuffer><>
                         (&local_168,&BasicFilterParameterNames::ParamBandPassOutputName,
                          &FDataVertexMetadata::EmptyBasic);
      pTVar5 = TOutputDataVertex<Metasound::FAudioBuffer>::
               TOutputDataVertex<Metasound::FAudioBuffer><>
                         (&local_148,&BasicFilterParameterNames::ParamHighPassOutputName,
                          &FDataVertexMetadata::EmptyBasic);
      pTVar6 = TOutputDataVertex<Metasound::FAudioBuffer>::
               TOutputDataVertex<Metasound::FAudioBuffer><>
                         (&local_128,&BasicFilterParameterNames::ParamLowPassOutputName,
                          &FDataVertexMetadata::EmptyBasic);
      FOutputVertexInterface::FOutputVertexInterface(&local_1f8);
      VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
      FOutputVertexInterfaceDeclarationBuilder
                (&local_1d8,
                 (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_1f8,
                 &local_1f8.SubInterfaces);
      if ((local_1d8.Vertices)->ArrayMax < 4) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,4,&(local_1d8.Vertices)->AllocatorInstance,(local_1d8.Vertices)->ArrayNum,
                   &(local_1d8.Vertices)->ArrayMax);
      }
      VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
                (&local_1d8,(FOutputDataVertex *)pTVar6);
      VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
                (&local_1d8,(FOutputDataVertex *)pTVar5);
      VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
                (&local_1d8,(FOutputDataVertex *)pTVar4);
      VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
                (&local_1d8,(FOutputDataVertex *)pTVar3);
      VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
                ((FSubInterfaceDeclarationBuilder *)&local_1d8);
      local_228 = 0.0;
      pFVar7 = (FInputDataVertex *)
               TInputDataVertex<float>::TInputDataVertex<float><float>
                         (&local_60,&BasicFilterParameterNames::ParamBandStopControlName,
                          &FDataVertexMetadata::EmptyBasic,&local_228);
      local_224 = 0.0;
      pFVar8 = (FInputDataVertex *)
               TInputDataVertex<float>::TInputDataVertex<float><float>
                         (&local_98,&BasicFilterParameterNames::ParamResonanceName,
                          &FDataVertexMetadata::EmptyBasic,&local_224);
      local_220[0] = 20000.0;
      pFVar9 = (FInputDataVertex *)
               TInputDataVertex<float>::TInputDataVertex<float><float>
                         (&local_d0,&BasicFilterParameterNames::ParamCutoffFrequencyName,
                          &FDataVertexMetadata::EmptyBasic,local_220);
      pFVar10 = (FInputDataVertex *)
                TInputDataVertex<Metasound::FAudioBuffer>::
                TInputDataVertex<Metasound::FAudioBuffer><>
                          (&local_108,&BasicFilterParameterNames::ParamAudioInputName,
                           &FDataVertexMetadata::EmptyBasic);
      local_218._padding_ = 0;
      local_218._padding_ = 0;
      local_218.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_218.SubInterfaces.ArrayNum = 0;
      local_218.SubInterfaces.ArrayMax = 0;
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::
      FInputVertexInterfaceDeclarationBuilder
                (&local_1b0,
                 (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_218,
                 &local_218.SubInterfaces);
      if ((local_1b0.Vertices)->ArrayMax < 4) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,4,&(local_1b0.Vertices)->AllocatorInstance,(local_1b0.Vertices)->ArrayNum,
                   &(local_1b0.Vertices)->ArrayMax);
      }
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1b0,pFVar10);
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1b0,pFVar9);
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1b0,pFVar8);
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1b0,pFVar7);
      VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
                ((FSubInterfaceDeclarationBuilder *)&local_1b0);
      FVertexInterface::FVertexInterface(&::Interface,&local_218,&local_1f8);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_218.SubInterfaces.AllocatorInstance.Data,
                 local_218.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_218.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_218.SubInterfaces.AllocatorInstance.Data);
      }
      DestructItems<Metasound::FInputDataVertex,int>
                ((FInputDataVertex *)local_218._padding_,(int)local_218._padding_);
      if ((FInputDataVertex *)local_218._padding_ != (FInputDataVertex *)0x0) {
        FMemory::Free((void *)local_218._padding_);
      }
      if (0xc < (byte)local_108._48_1_) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar11 = (FVertexInterface *)(*pcVar1)();
          return pFVar11;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[(byte)local_108._48_1_])(&local_108.field_0x20);
      if (0xc < (byte)local_d0._48_1_) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar11 = (FVertexInterface *)(*pcVar1)();
          return pFVar11;
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
          pFVar11 = (FVertexInterface *)(*pcVar1)();
          return pFVar11;
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
          pFVar11 = (FVertexInterface *)(*pcVar1)();
          return pFVar11;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[(byte)local_60._48_1_])(&local_60.field_0x20);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_1f8.SubInterfaces.AllocatorInstance.Data,
                 local_1f8.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_1f8.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_1f8.SubInterfaces.AllocatorInstance.Data);
      }
      if ((void *)local_1f8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_1f8._padding_);
      }
      atexit(`Metasound::FStateVariableFilterOperator::DeclareVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&::Interface);
  return __return_storage_ptr__;
}

// Execute @ 14b01f730

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Metasound::FStateVariableFilterOperator::Execute(FStateVariableFilterOperator *this)

{
  FStateVariableFilter *pFVar1;
  int iVar2;
  undefined8 *puVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar11 = **(float **)&(this->Frequency).field_0x8;
  if (this->MaxCutoffFrequency <= fVar11) {
    fVar11 = this->MaxCutoffFrequency;
  }
  fVar9 = **(float **)&(this->Resonance).field_0x8;
  if (__real_41200000 <= fVar9) {
    fVar9 = __real_41200000;
  }
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  fVar10 = **(float **)&(this->BandStopControl).field_0x8;
  if (__real_3f800000 <= fVar10) {
    fVar10 = __real_3f800000;
  }
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  if (((__real_322bcc77 <
        (float)((uint)(this->PreviousFrequency - fVar11) & __xmm_7fffffff7fffffff7fffffff7fffffff))
      || (__real_322bcc77 <
          (float)((uint)(this->PreviousResonance - fVar9) & __xmm_7fffffff7fffffff7fffffff7fffffff))
      ) || (__real_322bcc77 <
            (float)((uint)(this->PreviousBandStopControl - fVar10) &
                   __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    pFVar1 = &this->StateVariableFilter;
    (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1);
    (**(code **)(pFVar1->_padding_ + 0x10))(pFVar1);
    (**(code **)(pFVar1->_padding_ + 0x38))(pFVar1);
    (**(code **)(pFVar1->_padding_ + 0x58))(pFVar1);
    this->PreviousFrequency = fVar11;
    this->PreviousResonance = fVar9;
    this->PreviousBandStopControl = fVar10;
  }
  puVar3 = *(undefined8 **)&(this->BandStopOutput).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar3 + 2) != *(int *)(puVar3 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pfVar4 = (float *)*puVar3;
  puVar3 = *(undefined8 **)&(this->BandPassOutput).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar3 + 2) != *(int *)(puVar3 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pfVar5 = (float *)*puVar3;
  puVar3 = *(undefined8 **)&(this->HighPassOutput).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar3 + 2) != *(int *)(puVar3 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pfVar6 = (float *)*puVar3;
  puVar3 = *(undefined8 **)&(this->LowPassOutput).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar3 + 2) != *(int *)(puVar3 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pfVar7 = (float *)*puVar3;
  lVar8 = *(longlong *)&(this->AudioInput).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar8 + 0x10) != *(int *)(lVar8 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  iVar2 = *(int *)(lVar8 + 8);
  puVar3 = *(undefined8 **)&(this->AudioInput).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar3 + 2) != *(int *)(puVar3 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  Audio::FStateVariableFilter::ProcessAudio
            (&this->StateVariableFilter,(float *)*puVar3,iVar2,pfVar7,pfVar6,pfVar5,pfVar4);
  return;
}

// GetNodeInfo @ 14b0294b0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FStateVariableFilterOperator::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `Metasound::FStateVariableFilterOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,&::Info);
      atexit(`Metasound::FStateVariableFilterOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&::_TSS0);
      return &::Info;
    }
  }
  return &::Info;
}

// Reset @ 14b030d60

void __thiscall
Metasound::FStateVariableFilterOperator::Reset
          (FStateVariableFilterOperator *this,FResetParams *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  this->PreviousFrequency = -1.0;
  this->PreviousResonance = -1.0;
  this->PreviousBandStopControl = -1.0;
  puVar2 = *(undefined8 **)&(this->LowPassOutput).field_0x8;
  iVar1 = *(int *)(puVar2 + 1);
  if (0 < iVar1) {
    memset((void *)*puVar2,0,(longlong)iVar1 << 2);
  }
  puVar2 = *(undefined8 **)&(this->HighPassOutput).field_0x8;
  iVar1 = *(int *)(puVar2 + 1);
  if (0 < iVar1) {
    memset((void *)*puVar2,0,(longlong)iVar1 << 2);
  }
  puVar2 = *(undefined8 **)&(this->BandPassOutput).field_0x8;
  iVar1 = *(int *)(puVar2 + 1);
  if (0 < iVar1) {
    memset((void *)*puVar2,0,(longlong)iVar1 << 2);
  }
  puVar2 = *(undefined8 **)&(this->BandStopOutput).field_0x8;
  iVar1 = *(int *)(puVar2 + 1);
  if (0 < iVar1) {
    memset((void *)*puVar2,0,(longlong)iVar1 << 2);
  }
  (**(code **)((this->StateVariableFilter)._padding_ + 8))
            (&this->StateVariableFilter,this->SampleRate,1,0,0);
  return;
}

