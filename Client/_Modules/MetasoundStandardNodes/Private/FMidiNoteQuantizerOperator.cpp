// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 9

// FMidiNoteQuantizerOperator @ 14b140fa0

FMidiNoteQuantizerOperator * __thiscall
Metasound::FMidiNoteQuantizerOperator::FMidiNoteQuantizerOperator
          (FMidiNoteQuantizerOperator *this,FBuildOperatorParams *param_1,
          TDataReadReference<float> *param_2,TDataReadReference<float> *param_3,
          TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *param_4,
          TDataReadReference<float> *param_5)

{
  TArray<float,TSizedDefaultAllocator<32>_> *this_00;
  int iVar1;
  longlong lVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  float *pfVar4;
  code *pcVar5;
  bool bVar6;
  FMidiNoteQuantizerOperator *pFVar7;
  float fVar8;
  FBuildOperatorParams *local_res10 [3];
  undefined4 uStack_2c;
  TArrayView<float,int> local_28 [2];
  
  this->_padding_ = (longlong)&___7FMidiNoteQuantizerOperator_Metasound__6B_;
  *(undefined ***)&this->MidiNoteIn = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->MidiNoteIn).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar2 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->MidiNoteIn).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->MidiNoteIn = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->RootNote = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->RootNote).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar2 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->RootNote).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->RootNote = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->Scale =
       &___7__TDataReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined8 *)&(this->Scale).field_0x8 = *(undefined8 *)&param_4->field_0x8;
  lVar2 = *(longlong *)&param_4->field_0x10;
  *(longlong *)&(this->Scale).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->Scale =
       &___7__TDataReadReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined ***)&this->ScaleRange = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->ScaleRange).field_0x8 = *(undefined8 *)&param_5->field_0x8;
  lVar2 = *(longlong *)&param_5->field_0x10;
  *(longlong *)&(this->ScaleRange).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->ScaleRange = &___7__TDataReadReference_M_Metasound__6B_;
  local_res10[0] = param_1;
  TDataReference<float>::TDataReference<float><>
            ((TDataReference<float> *)&this->MidiNoteOut,NewObject);
  this_00 = &this->PreviousScale;
  *(undefined ***)&this->MidiNoteOut = &___7__TDataWriteReference_M_Metasound__6B_;
  this->PreviousNoteIn = -3.4028235e+38;
  this->PreviousRoot = -1.0;
  (this->PreviousScale).ArrayNum = 0;
  (this->PreviousScale).ArrayMax = 0;
  (this_00->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pTVar3 = *(TArray<float,TSizedDefaultAllocator<32>_> **)&(this->Scale).field_0x8;
  this->PreviousNoteOut = 0.0;
  pfVar4 = *(float **)&(this->MidiNoteIn).field_0x8;
  this->PreviousScaleRange = 12.0;
  fVar8 = *pfVar4;
  if (__real_5368d4a5 <= fVar8) {
    fVar8 = __real_5368d4a5;
  }
  pfVar4 = *(float **)&(this->RootNote).field_0x8;
  if (fVar8 <= __real_d368d4a5) {
    fVar8 = __real_d368d4a5;
  }
  this->PreviousNoteIn = fVar8;
  fVar8 = *pfVar4;
  if (__real_5368d4a5 <= fVar8) {
    fVar8 = __real_5368d4a5;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  this->PreviousRoot = fVar8;
  TArray<float,TSizedDefaultAllocator<32>_>::operator=(this_00,pTVar3);
  iVar1 = (this->PreviousScale).ArrayNum;
  fVar8 = **(float **)&(this->ScaleRange).field_0x8;
  if (fVar8 <= __real_3f800000) {
    fVar8 = __real_3f800000;
  }
  this->PreviousScaleRange = fVar8;
  if (iVar1 == 0) {
    fVar8 = this->PreviousNoteIn;
  }
  else {
    AlgoImpl::IntroSortInternal<float,int,FIdentityFunctor,TDereferenceWrapper<float,TLess<void>_>_>
              ((float *)(this_00->AllocatorInstance).Data,iVar1,local_res10[0]._0_1_,
               (TLess<void> *)local_res10);
    local_28[0].DataPtr = (float *)(this_00->AllocatorInstance).Data;
    iVar1 = (this->PreviousScale).ArrayNum;
    fVar8 = this->PreviousScaleRange;
    if (iVar1 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar7 = (FMidiNoteQuantizerOperator *)(*pcVar5)();
        return pFVar7;
      }
    }
    local_28[0]._12_4_ = uStack_2c;
    local_28[0].ArrayNum = iVar1;
    fVar8 = Audio::FMidiNoteQuantizer::QuantizeMidiNote
                      (this->PreviousNoteIn,this->PreviousRoot,local_28,fVar8);
  }
  this->PreviousNoteOut = fVar8;
  **(float **)&(this->MidiNoteOut).field_0x8 = fVar8;
  return this;
}

// operator() @ 14b14e220

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::FMidiNoteQuantizerOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar2;
  ITextData *pIVar3;
  code *pcVar4;
  TRefCountPtr<ITextData> TVar5;
  bool bVar6;
  int iVar7;
  FText *pFVar8;
  FVertexInterface *pFVar9;
  FText *pFVar10;
  FNodeClassMetadata *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FName local_res20;
  FText local_b8;
  FText local_a8;
  FText local_98;
  FNodeClassName local_88;
  FVertexInterface local_70;
  
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  ::FName::FName(&local_res20,L"MIDI Note Quantizer");
  Metasound::FNodeClassName::FNodeClassName
            (&local_88,&Metasound::StandardNodes::Namespace,&local_res20,
             &Metasound::StandardNodes::AudioVariant);
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Namespace = local_88.Namespace;
  (__return_storage_ptr__->ClassName).Name = local_88.Name;
  (__return_storage_ptr__->ClassName).Variant = local_88.Variant;
  pFVar8 = FText::FText(&local_b8);
  FText::operator=(&__return_storage_ptr__->DisplayName,pFVar8);
  if (local_b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
  }
  pFVar8 = FText::FText(&local_a8);
  FText::operator=(&__return_storage_ptr__->Description,pFVar8);
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
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
  pFVar9 = Metasound::FMidiNoteQuantizerOperator::DeclareVertexInterface(&local_70);
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar9);
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
  TVar5 = Metasound::NodeCategories::Music.TextData;
  *(ITextData **)pFVar12 = Metasound::NodeCategories::Music.TextData.Reference;
  if (TVar5.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar5.Reference + 8))(TVar5.Reference,local_res18);
  }
  *(uint *)(pFVar12 + 8) = Metasound::NodeCategories::Music.Flags;
  pFVar10 = FText::FText(&local_98);
  pTVar2 = &__return_storage_ptr__->Keywords;
  pFVar8 = (FText *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar8 <= pFVar10) && (pFVar10 < pFVar8 + (__return_storage_ptr__->Keywords).ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar11 = (FNodeClassMetadata *)(*pcVar4)();
      return pFVar11;
    }
  }
  iVar7 = (__return_storage_ptr__->Keywords).ArrayNum;
  piVar1 = &(__return_storage_ptr__->Keywords).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (__return_storage_ptr__->Keywords).ArrayNum = iVar7 + 1;
  FText::FText((FText *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x10),pFVar10);
  if (local_98.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// BindInputs @ 14b15f530

void __thiscall
Metasound::FMidiNoteQuantizerOperator::BindInputs
          (FMidiNoteQuantizerOperator *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<float> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<float> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&MidiNoteQuantizerParameterNames::ParamNoteInName);
  local_res18 = &this->MidiNoteIn;
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
  FLazyName::Resolve(&MidiNoteQuantizerParameterNames::ParamRootNoteName);
  local_res18 = &this->RootNote;
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
  FLazyName::Resolve(&MidiNoteQuantizerParameterNames::ParamScaleRangeName);
  local_res18 = &this->ScaleRange;
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
  FLazyName::Resolve(&MidiNoteQuantizerParameterNames::ParamScaleDegreesName);
  local_res18 = (TDataReadReference<float> *)&this->Scale;
  local_30 = &local_res18;
  local_48._8_8_ = local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<TArray<float,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_28._0_8_ = &local_res8;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  return;
}

// BindOutputs @ 14b1602d0

void __thiscall
Metasound::FMidiNoteQuantizerOperator::BindOutputs
          (FMidiNoteQuantizerOperator *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<float> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<float> *local_30;
  code *local_28;
  TDataWriteReference<float> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&MidiNoteQuantizerParameterNames::ParamNoteOutputName);
  local_res18[0] = &this->MidiNoteOut;
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

// CreateOperator @ 14b177fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::FMidiNoteQuantizerOperator::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar4;
  FLiteral *pFVar5;
  code *pcVar6;
  FMidiNoteQuantizerOperator *this_00;
  FMidiNoteQuantizerOperator *pFVar7;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  *pTVar8;
  undefined1 auStackY_138 [32];
  FName local_108;
  FName local_100;
  FName local_f8;
  FName local_f0;
  undefined1 local_e8 [32];
  FString local_c8;
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_138;
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MidiNoteQuantizerParameterNames::ParamNoteInName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_78,&local_100,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MidiNoteQuantizerParameterNames::ParamRootNoteName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_98,&local_f8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MidiNoteQuantizerParameterNames::ParamScaleDegreesName);
  pFVar3 = FInputVertexInterfaceData::Find(this,&local_108);
  if (pFVar3 == (FInputBinding *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(&local_108,&local_c8);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_Metasound::TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>___cdecl_Metasound::FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>(FName_const&___ptr64,Metasound::FOperatorSettings_const&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = FLiteral::CreateInvalid((FLiteral *)&local_40);
    TDataLiteralFactory<TArray<float,TSizedDefaultAllocator<32>_>,Metasound::TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>_>
    ::CreateExplicitArgs
              ((TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)local_e8,pFVar1,
               pFVar5);
    if ((0xc < local_40.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar6 = (code *)swi(3);
      TVar4.Ptr = (IOperator *)(*pcVar6)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar4.Ptr;
    }
    pcVar6 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                       ::__l2::Destructors)[local_40.TypeIndex];
    pTVar8 = &local_40;
  }
  else {
    if ((pFVar3->Data).bIsSet != false) {
      if (((pFVar3->Data).bIsSet == false) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar2)) {
        pcVar6 = (code *)swi(3);
        TVar4.Ptr = (IOperator *)(*pcVar6)();
        return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar4.Ptr;
      }
      FAnyDataReference::
      GetAs<Metasound::TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>_>
                (&(pFVar3->Data).TypedValue,
                 (TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)local_e8);
      goto LAB_14b1781bd;
    }
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              (&local_58,&(pFVar3->Vertex).Literal.Value);
    TDataLiteralFactory<TArray<float,TSizedDefaultAllocator<32>_>,Metasound::TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>_>
    ::CreateExplicitArgs
              ((TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)local_e8,pFVar1,
               (FLiteral *)&local_58);
    if ((0xc < local_58.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar6 = (code *)swi(3);
      TVar4.Ptr = (IOperator *)(*pcVar6)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar4.Ptr;
    }
    pcVar6 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                       ::__l2::Destructors)[local_58.TypeIndex];
    pTVar8 = &local_58;
  }
  (*pcVar6)(pTVar8);
LAB_14b1781bd:
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&MidiNoteQuantizerParameterNames::ParamScaleRangeName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_b8,&local_f0,pFVar1);
  this_00 = ::operator_new(200);
  pFVar7 = (FMidiNoteQuantizerOperator *)0x0;
  if (this_00 != (FMidiNoteQuantizerOperator *)0x0) {
    pFVar7 = FMidiNoteQuantizerOperator
                       (this_00,(FBuildOperatorParams *)param_2,
                        (TDataReadReference<float> *)local_78,(TDataReadReference<float> *)local_98,
                        (TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)local_e8,
                        (TDataReadReference<float> *)local_b8);
  }
  param_1->Node = (INode *)pFVar7;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_b8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_e8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_98._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_78._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// DeclareVertexInterface @ 14b17fa80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::FMidiNoteQuantizerOperator::DeclareVertexInterface
          (FVertexInterface *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<float> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FVertexInterface *pFVar8;
  undefined1 auStackY_1f8 [32];
  float local_1c8;
  float local_1c4;
  float local_1c0 [2];
  FInputVertexInterface local_1b8;
  FOutputVertexInterface local_198;
  FInputVertexInterfaceDeclarationBuilder local_178;
  FOutputVertexInterfaceDeclarationBuilder local_150;
  TOutputDataVertex<float> local_128;
  TInputDataVertex<float> local_108;
  TInputDataVertex<float> local_d0;
  TInputDataVertex<float> local_98;
  TInputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_> local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pTVar3 = TOutputDataVertex<float>::TOutputDataVertex<float><>
                         (&local_128,&MidiNoteQuantizerParameterNames::ParamNoteOutputName,
                          &FDataVertexMetadata::EmptyBasic);
      FOutputVertexInterface::FOutputVertexInterface(&local_198);
      VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
      FOutputVertexInterfaceDeclarationBuilder
                (&local_150,
                 (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_198,
                 &local_198.SubInterfaces);
      if ((local_150.Vertices)->ArrayMax < 1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,&(local_150.Vertices)->AllocatorInstance,(local_150.Vertices)->ArrayNum,
                   &(local_150.Vertices)->ArrayMax);
      }
      VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
                (&local_150,(FOutputDataVertex *)pTVar3);
      VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
                ((FSubInterfaceDeclarationBuilder *)&local_150);
      pFVar4 = (FInputDataVertex *)
               TInputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_>::
               TInputDataVertex<TArray<float,TSizedDefaultAllocator<32>_>_><>
                         (&local_60,&MidiNoteQuantizerParameterNames::ParamScaleDegreesName,
                          &FDataVertexMetadata::EmptyBasic);
      local_1c8 = 12.0;
      pFVar5 = (FInputDataVertex *)
               TInputDataVertex<float>::TInputDataVertex<float><float>
                         (&local_98,&MidiNoteQuantizerParameterNames::ParamScaleRangeName,
                          &FDataVertexMetadata::EmptyBasic,&local_1c8);
      local_1c4 = 0.0;
      pFVar6 = (FInputDataVertex *)
               TInputDataVertex<float>::TInputDataVertex<float><float>
                         (&local_d0,&MidiNoteQuantizerParameterNames::ParamRootNoteName,
                          &FDataVertexMetadata::EmptyBasic,&local_1c4);
      local_1c0[0] = 60.0;
      pFVar7 = (FInputDataVertex *)
               TInputDataVertex<float>::TInputDataVertex<float><float>
                         (&local_108,&MidiNoteQuantizerParameterNames::ParamNoteInName,
                          &FDataVertexMetadata::EmptyBasic,local_1c0);
      local_1b8._padding_ = 0;
      local_1b8._padding_ = 0;
      local_1b8.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b8.SubInterfaces.ArrayNum = 0;
      local_1b8.SubInterfaces.ArrayMax = 0;
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::
      FInputVertexInterfaceDeclarationBuilder
                (&local_178,
                 (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_1b8,
                 &local_1b8.SubInterfaces);
      if ((local_178.Vertices)->ArrayMax < 4) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,4,&(local_178.Vertices)->AllocatorInstance,(local_178.Vertices)->ArrayNum,
                   &(local_178.Vertices)->ArrayMax);
      }
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_178,pFVar7);
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_178,pFVar6);
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_178,pFVar5);
      VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_178,pFVar4);
      VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
                ((FSubInterfaceDeclarationBuilder *)&local_178);
      FVertexInterface::FVertexInterface(&::Interface,&local_1b8,&local_198);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_1b8.SubInterfaces.AllocatorInstance.Data,
                 local_1b8.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_1b8.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_1b8.SubInterfaces.AllocatorInstance.Data);
      }
      DestructItems<Metasound::FInputDataVertex,int>
                ((FInputDataVertex *)local_1b8._padding_,(int)local_1b8._padding_);
      if ((FInputDataVertex *)local_1b8._padding_ != (FInputDataVertex *)0x0) {
        FMemory::Free((void *)local_1b8._padding_);
      }
      if (0xc < (byte)local_108._48_1_) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar8 = (FVertexInterface *)(*pcVar1)();
          return pFVar8;
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
          pFVar8 = (FVertexInterface *)(*pcVar1)();
          return pFVar8;
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
          pFVar8 = (FVertexInterface *)(*pcVar1)();
          return pFVar8;
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
          pFVar8 = (FVertexInterface *)(*pcVar1)();
          return pFVar8;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[(byte)local_60._48_1_])(&local_60.field_0x20);
      DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
                ((FSubInterfaceLayout *)local_198.SubInterfaces.AllocatorInstance.Data,
                 local_198.SubInterfaces.ArrayNum);
      if ((FSubInterfaceLayout *)local_198.SubInterfaces.AllocatorInstance.Data !=
          (FSubInterfaceLayout *)0x0) {
        FMemory::Free(local_198.SubInterfaces.AllocatorInstance.Data);
      }
      if ((void *)local_198._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_198._padding_);
      }
      atexit(`Metasound::FMidiNoteQuantizerOperator::DeclareVertexInterface'::__l2::
             _dynamic_atexit_destructor_for__Interface__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVertexInterface::FVertexInterface(__return_storage_ptr__,&::Interface);
  return __return_storage_ptr__;
}

// Execute @ 14b18a7e0

void __thiscall Metasound::FMidiNoteQuantizerOperator::Execute(FMidiNoteQuantizerOperator *this)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  float *pfVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  FIdentityFunctor local_res8 [8];
  undefined4 uStack_4c;
  TArrayView<float,int> local_48 [4];
  
  pTVar1 = *(TArray<float,TSizedDefaultAllocator<32>_> **)&(this->Scale).field_0x8;
  pfVar2 = *(float **)&(this->MidiNoteIn).field_0x8;
  if (pTVar1->ArrayNum == 0) {
    fVar6 = *pfVar2;
    goto LAB_14b18a9c6;
  }
  fVar6 = *pfVar2;
  if (__real_5368d4a5 <= fVar6) {
    fVar6 = __real_5368d4a5;
  }
  fVar7 = **(float **)&(this->RootNote).field_0x8;
  if (__real_5368d4a5 <= fVar7) {
    fVar7 = __real_5368d4a5;
  }
  if (fVar6 <= __real_d368d4a5) {
    fVar6 = __real_d368d4a5;
  }
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  fVar8 = **(float **)&(this->ScaleRange).field_0x8;
  if (fVar8 <= __real_3f800000) {
    fVar8 = __real_3f800000;
  }
  if ((__real_322bcc77 <
       (float)((uint)(this->PreviousNoteIn - fVar6) & __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
     (__real_322bcc77 <
      (float)((uint)(this->PreviousRoot - fVar7) & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
LAB_14b18a8db:
    this->PreviousNoteIn = fVar6;
    this->PreviousRoot = fVar7;
    TArray<float,TSizedDefaultAllocator<32>_>::operator=(&this->PreviousScale,pTVar1);
    this->PreviousScaleRange = fVar8;
    AlgoImpl::IntroSortInternal<float,int,FIdentityFunctor,TDereferenceWrapper<float,TLess<void>_>_>
              ((float *)(this->PreviousScale).AllocatorInstance.Data,(this->PreviousScale).ArrayNum,
               local_res8[0],(TLess<void> *)local_res8);
    local_48[0].DataPtr = (float *)(this->PreviousScale).AllocatorInstance.Data;
    iVar5 = (this->PreviousScale).ArrayNum;
    fVar6 = this->PreviousScaleRange;
    if ((iVar5 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_48[0]._12_4_ = uStack_4c;
    local_48[0].ArrayNum = iVar5;
    fVar6 = Audio::FMidiNoteQuantizer::QuantizeMidiNote
                      (this->PreviousNoteIn,this->PreviousRoot,local_48,fVar6);
    this->PreviousNoteOut = fVar6;
  }
  else {
    iVar5 = (this->PreviousScale).ArrayNum;
    if ((iVar5 != pTVar1->ArrayNum) ||
       (((iVar5 != 0 &&
         (iVar5 = memcmp((this->PreviousScale).AllocatorInstance.Data,
                         (pTVar1->AllocatorInstance).Data,(longlong)iVar5 << 2), iVar5 != 0)) ||
        (__real_322bcc77 <
         (float)((uint)(this->PreviousScaleRange - fVar8) & __xmm_7fffffff7fffffff7fffffff7fffffff))
        ))) goto LAB_14b18a8db;
  }
  fVar6 = this->PreviousNoteOut;
LAB_14b18a9c6:
  **(float **)&(this->MidiNoteOut).field_0x8 = fVar6;
  return;
}

// GetNodeInfo @ 14b197d80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FMidiNoteQuantizerOperator::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `Metasound::FMidiNoteQuantizerOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,&::Info);
      atexit(`Metasound::FMidiNoteQuantizerOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&::_TSS0);
      return &::Info;
    }
  }
  return &::Info;
}

// Reset @ 14b1a7d50

void __thiscall
Metasound::FMidiNoteQuantizerOperator::Reset(FMidiNoteQuantizerOperator *this,FResetParams *param_1)

{
  int iVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  float *pfVar3;
  code *pcVar4;
  bool bVar5;
  float fVar6;
  FIdentityFunctor local_res8 [8];
  undefined4 uStack_2c;
  TArrayView<float,int> local_28 [2];
  
  pTVar2 = *(TArray<float,TSizedDefaultAllocator<32>_> **)&(this->Scale).field_0x8;
  fVar6 = **(float **)&(this->MidiNoteIn).field_0x8;
  if (__real_5368d4a5 <= fVar6) {
    fVar6 = __real_5368d4a5;
  }
  pfVar3 = *(float **)&(this->RootNote).field_0x8;
  if (fVar6 <= __real_d368d4a5) {
    fVar6 = __real_d368d4a5;
  }
  this->PreviousNoteIn = fVar6;
  fVar6 = *pfVar3;
  if (__real_5368d4a5 <= fVar6) {
    fVar6 = __real_5368d4a5;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  this->PreviousRoot = fVar6;
  TArray<float,TSizedDefaultAllocator<32>_>::operator=(&this->PreviousScale,pTVar2);
  iVar1 = (this->PreviousScale).ArrayNum;
  fVar6 = **(float **)&(this->ScaleRange).field_0x8;
  if (fVar6 <= __real_3f800000) {
    fVar6 = __real_3f800000;
  }
  this->PreviousScaleRange = fVar6;
  if (iVar1 == 0) {
    fVar6 = this->PreviousNoteIn;
  }
  else {
    AlgoImpl::IntroSortInternal<float,int,FIdentityFunctor,TDereferenceWrapper<float,TLess<void>_>_>
              ((float *)(this->PreviousScale).AllocatorInstance.Data,iVar1,local_res8[0],
               (TLess<void> *)local_res8);
    local_28[0].DataPtr = (float *)(this->PreviousScale).AllocatorInstance.Data;
    iVar1 = (this->PreviousScale).ArrayNum;
    fVar6 = this->PreviousScaleRange;
    if (iVar1 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_28[0]._12_4_ = uStack_2c;
    local_28[0].ArrayNum = iVar1;
    fVar6 = Audio::FMidiNoteQuantizer::QuantizeMidiNote
                      (this->PreviousNoteIn,this->PreviousRoot,local_28,fVar6);
  }
  this->PreviousNoteOut = fVar6;
  **(float **)&(this->MidiNoteOut).field_0x8 = fVar6;
  return;
}

