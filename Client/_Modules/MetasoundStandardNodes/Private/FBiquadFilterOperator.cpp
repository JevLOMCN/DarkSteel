// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 9

// operator() @ 14b002660

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::FBiquadFilterOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
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
  ::FName::FName(&local_res20,L"Biquad Filter");
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
  pFVar10 = Metasound::FBiquadFilterOperator::DeclareVertexInterface(&local_70);
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
  pTVar2 = &__return_storage_ptr__->Keywords;
  if (pTVar2 == &Metasound::ParametricEQKeywords) {
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
  iVar7 = Metasound::ParametricEQKeywords.ArrayNum;
  if (Metasound::ParametricEQKeywords.ArrayNum != 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,Metasound::ParametricEQKeywords.ArrayNum,&pTVar2->AllocatorInstance,
                       &(__return_storage_ptr__->Keywords).ArrayNum,
                       &(__return_storage_ptr__->Keywords).ArrayMax);
    ConstructItems<FText,FText,int>
              ((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x10,
               (FText *)Metasound::ParametricEQKeywords.AllocatorInstance.Data,iVar7);
  }
  pTVar2 = &__return_storage_ptr__->Keywords;
  if (pTVar2 == &Metasound::AllPassKeywords) {
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
  iVar7 = Metasound::AllPassKeywords.ArrayNum;
  if (Metasound::AllPassKeywords.ArrayNum != 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,Metasound::AllPassKeywords.ArrayNum,&pTVar2->AllocatorInstance,
                       &(__return_storage_ptr__->Keywords).ArrayNum,
                       &(__return_storage_ptr__->Keywords).ArrayMax);
    ConstructItems<FText,FText,int>
              ((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x10,
               (FText *)Metasound::AllPassKeywords.AllocatorInstance.Data,iVar7);
  }
  pTVar2 = &__return_storage_ptr__->Keywords;
  if (pTVar2 == &Metasound::LowShelfKeywords) {
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
  iVar7 = Metasound::LowShelfKeywords.ArrayNum;
  if (Metasound::LowShelfKeywords.ArrayNum != 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,Metasound::LowShelfKeywords.ArrayNum,&pTVar2->AllocatorInstance,
                       &(__return_storage_ptr__->Keywords).ArrayNum,
                       &(__return_storage_ptr__->Keywords).ArrayMax);
    ConstructItems<FText,FText,int>
              ((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x10,
               (FText *)Metasound::LowShelfKeywords.AllocatorInstance.Data,iVar7);
  }
  pTVar2 = &__return_storage_ptr__->Keywords;
  if (pTVar2 == &Metasound::HighShelfKeywords) {
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
  iVar7 = Metasound::HighShelfKeywords.ArrayNum;
  if (Metasound::HighShelfKeywords.ArrayNum != 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,Metasound::HighShelfKeywords.ArrayNum,&pTVar2->AllocatorInstance,
                       &(__return_storage_ptr__->Keywords).ArrayNum,
                       &(__return_storage_ptr__->Keywords).ArrayMax);
    ConstructItems<FText,FText,int>
              ((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x10,
               (FText *)Metasound::HighShelfKeywords.AllocatorInstance.Data,iVar7);
  }
  pTVar2 = &__return_storage_ptr__->Keywords;
  if (pTVar2 == &Metasound::ButterworthKeywords) {
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
  iVar7 = Metasound::ButterworthKeywords.ArrayNum;
  if (Metasound::ButterworthKeywords.ArrayNum != 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,Metasound::ButterworthKeywords.ArrayNum,&pTVar2->AllocatorInstance,
                       &(__return_storage_ptr__->Keywords).ArrayNum,
                       &(__return_storage_ptr__->Keywords).ArrayMax);
    ConstructItems<FText,FText,int>
              ((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x10,
               (FText *)Metasound::ButterworthKeywords.AllocatorInstance.Data,iVar7);
  }
  return __return_storage_ptr__;
}

// BindInputs @ 14b004dc0

void __thiscall
Metasound::FBiquadFilterOperator::BindInputs
          (FBiquadFilterOperator *this,FInputVertexInterfaceData *param_1)

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
  FLazyName::Resolve(&BasicFilterParameterNames::ParamBandwidthName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->Bandwidth;
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
  FLazyName::Resolve(&BasicFilterParameterNames::ParamGainDbName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->FilterGainDb;
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
  FLazyName::Resolve(&BasicFilterParameterNames::ParamFilterTypeName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->FilterType;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
  local_28._0_8_ = &local_res8;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  return;
}

// BindOutputs @ 14b005490

void __thiscall
Metasound::FBiquadFilterOperator::BindOutputs
          (FBiquadFilterOperator *this,FOutputVertexInterfaceData *param_1)

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

// CreateOperator @ 14b014260

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::FBiquadFilterOperator::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  int iVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  Type *pTVar3;
  FBiquadFilterOperator *this_00;
  FName local_res10;
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&BasicFilterParameterNames::ParamAudioInputName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>
            (this,(TDataReadReference<Metasound::FAudioBuffer> *)local_d8,&local_res10,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&BasicFilterParameterNames::ParamCutoffFrequencyName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_b8,&local_res10,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&BasicFilterParameterNames::ParamBandwidthName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_98,&local_res10,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&BasicFilterParameterNames::ParamGainDbName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_78,&local_res10,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&BasicFilterParameterNames::ParamFilterTypeName);
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>
            (this,(TDataReadReference<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> *)local_58,
             &local_res10,pFVar2);
  local_res10.ComparisonIndex.Value = (param_2->Errors).ArrayNum;
  local_res10.Number = (param_2->Errors).ArrayMax;
  this_00 = ::operator_new(0x118);
  if (this_00 == (FBiquadFilterOperator *)0x0) {
    this_00 = (FBiquadFilterOperator *)0x0;
  }
  else {
    this_00->_padding_ = (longlong)&___7FBiquadFilterOperator_Metasound__6B_;
    *(undefined ***)&this_00->AudioInput =
         &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    *(undefined8 *)&(this_00->AudioInput).field_0x8 = local_d8._8_8_;
    *(undefined8 *)&(this_00->AudioInput).field_0x10 = local_d8._16_8_;
    if ((TReferenceControllerBase<0> *)local_d8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_d8._16_8_ + 8) = *(int *)(local_d8._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->AudioInput =
         &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
    *(undefined ***)&this_00->Frequency = &___7__TDataReference_M_Metasound__6B_;
    *(undefined8 *)&(this_00->Frequency).field_0x8 = local_b8._8_8_;
    *(undefined8 *)&(this_00->Frequency).field_0x10 = local_b8._16_8_;
    if ((TReferenceControllerBase<0> *)local_b8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_b8._16_8_ + 8) = *(int *)(local_b8._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->Frequency = &___7__TDataReadReference_M_Metasound__6B_;
    *(undefined ***)&this_00->Bandwidth = &___7__TDataReference_M_Metasound__6B_;
    *(undefined8 *)&(this_00->Bandwidth).field_0x8 = local_98._8_8_;
    *(undefined8 *)&(this_00->Bandwidth).field_0x10 = local_98._16_8_;
    if ((TReferenceControllerBase<0> *)local_98._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_98._16_8_ + 8) = *(int *)(local_98._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->Bandwidth = &___7__TDataReadReference_M_Metasound__6B_;
    *(undefined ***)&this_00->FilterGainDb = &___7__TDataReference_M_Metasound__6B_;
    *(undefined8 *)&(this_00->FilterGainDb).field_0x8 = local_78._8_8_;
    *(undefined8 *)&(this_00->FilterGainDb).field_0x10 = local_78._16_8_;
    if ((TReferenceControllerBase<0> *)local_78._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_78._16_8_ + 8) = *(int *)(local_78._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->FilterGainDb = &___7__TDataReadReference_M_Metasound__6B_;
    *(undefined ***)&this_00->FilterType =
         &___7__TDataReference_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_;
    *(undefined8 *)&(this_00->FilterType).field_0x8 = local_58._8_8_;
    *(undefined8 *)&(this_00->FilterType).field_0x10 = local_58._16_8_;
    if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->FilterType =
         &
         ___7__TDataReadReference_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_
    ;
    this_00->PreviousFrequency = -1.0;
    this_00->PreviousBandwidth = -1.0;
    this_00->PreviousFilterGainDb = -1.0;
    TDataReference<Metasound::FAudioBuffer>::
    TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FAudioBuffer> *)&this_00->AudioOutput,NewObject,
               (FOperatorSettings *)local_res10);
    *(undefined ***)&this_00->AudioOutput =
         &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    this_00->BlockSize = *(int *)((longlong)local_res10 + 0xc);
    iVar1 = *(int *)local_res10;
    pTVar3 = *(Type **)&(this_00->FilterType).field_0x8;
    this_00->SampleRate = (float)iVar1;
    this_00->MaxCutoffFrequency = (float)iVar1 * __real_3f000000;
    this_00->PreviousFilterType = *pTVar3;
    Audio::FBiquadFilter::FBiquadFilter(&this_00->BiquadFilter);
    ResetInternal(this_00);
  }
  param_1->Node = (INode *)this_00;
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

// DeclareVertexInterface @ 14b0196b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::FBiquadFilterOperator::DeclareVertexInterface(FVertexInterface *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar4;
  FInputDataVertex *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FInputDataVertex *pFVar8;
  FInputDataVertex *pFVar9;
  FVertexInterface *pFVar10;
  undefined1 auStackY_238 [32];
  float local_208;
  float local_204;
  float local_200 [2];
  FInputVertexInterface local_1f8;
  FOutputVertexInterface local_1d8;
  FInputVertexInterfaceDeclarationBuilder local_1b8;
  FOutputVertexInterfaceDeclarationBuilder local_190;
  TOutputDataVertex<Metasound::FAudioBuffer> local_168;
  TInputDataVertex<Metasound::FAudioBuffer> local_148;
  TInputDataVertex<float> local_110;
  TInputDataVertex<float> local_d8;
  TInputDataVertex<float> local_a0;
  undefined1 local_68 [32];
  undefined1 local_48 [16];
  byte local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_238;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar1 + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::FText(&GainPinMetaData.Description);
      FText::FText(&GainPinMetaData.DisplayName);
      GainPinMetaData.bIsAdvancedDisplay = false;
      atexit(`Metasound::FBiquadFilterOperator::DeclareVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__GainPinMetaData__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (*(int *)(lVar1 + 0x9d4c) < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      pTVar4 = TOutputDataVertex<Metasound::FAudioBuffer>::
               TOutputDataVertex<Metasound::FAudioBuffer><>
                         (&local_168,&BasicFilterParameterNames::ParamAudioOutputName,
                          &FDataVertexMetadata::EmptyBasic);
      FOutputVertexInterface::FOutputVertexInterface(&local_1d8);
      VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
      FOutputVertexInterfaceDeclarationBuilder
                (&local_190,
                 (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_1d8,
                 &local_1d8.SubInterfaces);
      if ((local_190.Vertices)->ArrayMax < 1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,&(local_190.Vertices)->AllocatorInstance,(local_190.Vertices)->ArrayNum,
                   &(local_190.Vertices)->ArrayMax);
      }
      VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
                (&local_190,(FOutputDataVertex *)pTVar4);
      VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
                ((FSubInterfaceDeclarationBuilder *)&local_190);
      pFVar5 = (FInputDataVertex *)
               TInputDataVertex<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
               TInputDataVertex<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_><>
                         (local_68,&BasicFilterParameterNames::ParamFilterTypeName,
                          &FDataVertexMetadata::EmptyBasic);
      local_208 = 0.0;
      pFVar6 = (FInputDataVertex *)
               TInputDataVertex<float>::TInputDataVertex<float><float>
                         (&local_a0,&BasicFilterParameterNames::ParamGainDbName,&GainPinMetaData,
                          &local_208);
      local_204 = 1.0;
      pFVar7 = (FInputDataVertex *)
               TInputDataVertex<float>::TInputDataVertex<float><float>
                         (&local_d8,&BasicFilterParameterNames::ParamBandwidthName,
                          &FDataVertexMetadata::EmptyBasic,&local_204);
      local_200[0] = 20000.0;
      pFVar8 = (FInputDataVertex *)
               TInputDataVertex<float>::TInputDataVertex<float><float>
                         (&local_110,&BasicFilterParameterNames::ParamCutoffFrequencyName,
                          &FDataVertexMetadata::EmptyBasic,local_200);
      pFVar9 = (FInputDataVertex *)
               TInputDataVertex<Metasound::FAudioBuffer>::
               TInputDataVertex<Metasound::FAudioBuffer><>
                         (&local_148,&BasicFilterParameterNames::ParamAudioInputName,
                          &FDataVertexMetadata::EmptyBasic);
      local_1f8._padding_ = 0;
      local_1f8._padding_ = 0;
      local_1f8.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1f8.SubInterfaces.ArrayNum = 0;
      local_1f8.SubInterfaces.ArrayMax = 0;
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::
      FInputVertexInterfaceDeclarationBuilder
                (&local_1b8,
                 (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_1f8,
                 &local_1f8.SubInterfaces);
      if ((local_1b8.Vertices)->ArrayMax < 5) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,5,&(local_1b8.Vertices)->AllocatorInstance,(local_1b8.Vertices)->ArrayNum,
                   &(local_1b8.Vertices)->ArrayMax);
      }
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1b8,pFVar9);
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1b8,pFVar8);
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1b8,pFVar7);
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1b8,pFVar6);
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_1b8,pFVar5);
      VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
                ((FSubInterfaceDeclarationBuilder *)&local_1b8);
      FVertexInterface::FVertexInterface(&::Interface,&local_1f8,&local_1d8);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_1f8.SubInterfaces.AllocatorInstance.Data,
                 local_1f8.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_1f8.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_1f8.SubInterfaces.AllocatorInstance.Data);
      }
      DestructItems<Metasound::FInputDataVertex,int>
                ((FInputDataVertex *)local_1f8._padding_,(int)local_1f8._padding_);
      if ((FInputDataVertex *)local_1f8._padding_ != (FInputDataVertex *)0x0) {
        FMemory::Free((void *)local_1f8._padding_);
      }
      if (0xc < (byte)local_148._48_1_) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar10 = (FVertexInterface *)(*pcVar2)();
          return pFVar10;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[(byte)local_148._48_1_])(&local_148.field_0x20);
      if (0xc < (byte)local_110._48_1_) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar10 = (FVertexInterface *)(*pcVar2)();
          return pFVar10;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[(byte)local_110._48_1_])(&local_110.field_0x20);
      if (0xc < (byte)local_d8._48_1_) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar10 = (FVertexInterface *)(*pcVar2)();
          return pFVar10;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[(byte)local_d8._48_1_])(&local_d8.field_0x20);
      if (0xc < (byte)local_a0._48_1_) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar10 = (FVertexInterface *)(*pcVar2)();
          return pFVar10;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[(byte)local_a0._48_1_])(&local_a0.field_0x20);
      if (0xc < local_38) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar10 = (FVertexInterface *)(*pcVar2)();
          return pFVar10;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_38])(local_48);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_1d8.SubInterfaces.AllocatorInstance.Data,
                 local_1d8.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_1d8.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_1d8.SubInterfaces.AllocatorInstance.Data);
      }
      if ((void *)local_1d8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_1d8._padding_);
      }
      atexit(`Metasound::FBiquadFilterOperator::DeclareVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&::_TSS1);
    }
  }
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&::Interface);
  return __return_storage_ptr__;
}

// Execute @ 14b01ec70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Metasound::FBiquadFilterOperator::Execute(FBiquadFilterOperator *this)

{
  FBiquadFilter *this_00;
  Type TVar1;
  int iVar2;
  undefined8 *puVar3;
  float *pfVar4;
  longlong lVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  this_00 = &this->BiquadFilter;
  fVar9 = **(float **)&(this->Frequency).field_0x8;
  if (this->MaxCutoffFrequency <= fVar9) {
    fVar9 = this->MaxCutoffFrequency;
  }
  fVar8 = **(float **)&(this->Bandwidth).field_0x8;
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  fVar7 = **(float **)&(this->FilterGainDb).field_0x8;
  if (__real_41a00000 <= fVar7) {
    fVar7 = __real_41a00000;
  }
  if (fVar7 <= __real_c2b40000) {
    fVar7 = __real_c2b40000;
  }
  uVar6 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  if (__real_322bcc77 <
      (float)((uint)(this->PreviousFrequency - fVar9) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    Audio::FBiquadFilter::SetFrequency(this_00,fVar9);
    uVar6 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    this->PreviousFrequency = fVar9;
  }
  if (__real_322bcc77 < (float)((uint)(this->PreviousBandwidth - fVar8) & uVar6)) {
    Audio::FBiquadFilter::SetBandwidth(this_00,fVar8);
    uVar6 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    this->PreviousBandwidth = fVar8;
  }
  if (__real_322bcc77 < (float)((uint)(this->PreviousFilterGainDb - fVar7) & uVar6)) {
    Audio::FBiquadFilter::SetGainDB(this_00,fVar7);
    this->PreviousFilterGainDb = fVar7;
  }
  TVar1 = **(Type **)&(this->FilterType).field_0x8;
  if (TVar1 != this->PreviousFilterType) {
    Audio::FBiquadFilter::SetType(this_00,TVar1);
    this->PreviousFilterType = **(Type **)&(this->FilterType).field_0x8;
  }
  puVar3 = *(undefined8 **)&(this->AudioOutput).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar3 + 2) != *(int *)(puVar3 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  pfVar4 = (float *)*puVar3;
  lVar5 = *(longlong *)&(this->AudioInput).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(lVar5 + 0x10) != *(int *)(lVar5 + 8))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  iVar2 = *(int *)(lVar5 + 8);
  puVar3 = *(undefined8 **)&(this->AudioInput).field_0x8;
  if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar3 + 2) != *(int *)(puVar3 + 1))) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  Audio::FBiquadFilter::ProcessAudio(this_00,(float *)*puVar3,iVar2,pfVar4);
  return;
}

// GetNodeInfo @ 14b029270

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FBiquadFilterOperator::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `Metasound::FBiquadFilterOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,&::Info);
      atexit(`Metasound::FBiquadFilterOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&::_TSS0);
      return &::Info;
    }
  }
  return &::Info;
}

// Reset @ 14b0309e0

void __thiscall
Metasound::FBiquadFilterOperator::Reset(FBiquadFilterOperator *this,FResetParams *param_1)

{
  int iVar1;
  Type *pTVar2;
  undefined8 *puVar3;
  
  pTVar2 = *(Type **)&(this->FilterType).field_0x8;
  this->PreviousFrequency = -1.0;
  this->PreviousBandwidth = -1.0;
  this->PreviousFilterGainDb = -1.0;
  this->PreviousFilterType = *pTVar2;
  puVar3 = *(undefined8 **)&(this->AudioOutput).field_0x8;
  iVar1 = *(int *)(puVar3 + 1);
  if (0 < iVar1) {
    memset((void *)*puVar3,0,(longlong)iVar1 << 2);
  }
  Audio::FBiquadFilter::Init
            (&this->BiquadFilter,this->SampleRate,1,**(Type **)&(this->FilterType).field_0x8,
             __real_469c4000,__real_40000000,0.0);
  return;
}

// ResetInternal @ 14b032160

void __thiscall Metasound::FBiquadFilterOperator::ResetInternal(FBiquadFilterOperator *this)

{
  int iVar1;
  Type *pTVar2;
  undefined8 *puVar3;
  
  pTVar2 = *(Type **)&(this->FilterType).field_0x8;
  this->PreviousFrequency = -1.0;
  this->PreviousBandwidth = -1.0;
  this->PreviousFilterGainDb = -1.0;
  this->PreviousFilterType = *pTVar2;
  puVar3 = *(undefined8 **)&(this->AudioOutput).field_0x8;
  iVar1 = *(int *)(puVar3 + 1);
  if (0 < iVar1) {
    memset((void *)*puVar3,0,(longlong)iVar1 << 2);
  }
  Audio::FBiquadFilter::Init
            (&this->BiquadFilter,this->SampleRate,1,**(Type **)&(this->FilterType).field_0x8,
             __real_469c4000,__real_40000000,0.0);
  return;
}

