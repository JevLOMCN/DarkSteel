// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 9

// FFreqToMidiOperator @ 14b0b3af0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FFreqToMidiOperator * __thiscall
Metasound::FFreqToMidiOperator::FFreqToMidiOperator
          (FFreqToMidiOperator *this,FOperatorSettings *param_1,TDataReadReference<float> *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  FFreqToMidiOperator *pFVar5;
  float fVar6;
  
  this->_padding_ = (longlong)&___7FFreqToMidiOperator_Metasound__6B_;
  *(undefined ***)&this->FreqInput = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->FreqInput).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->FreqInput).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->FreqInput = &___7__TDataReadReference_M_Metasound__6B_;
  fVar6 = logf(**(float **)&param_2->field_0x8 * ___real_3b14f209);
  *(undefined ***)&this->MidiOutput = &___7__TDataReference_M_Metasound__6B_;
  fVar6 = fVar6 * ___real_418a7fac + __real_428a0000;
  puVar4 = ::operator_new(0x18);
  if (puVar4 == (undefined8 *)0x0) {
    *(undefined8 *)&(this->MidiOutput).field_0x8 = 0x10;
    *(undefined8 *)&(this->MidiOutput).field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar4 + 1) = 1;
    *puVar4 = &___7__TIntrusiveReferenceController_M_0A__SharedPointerInternals__6B_;
    *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
    *(float *)(puVar4 + 2) = fVar6;
    *(undefined8 **)&(this->MidiOutput).field_0x8 = puVar4 + 2;
    *(undefined8 **)&(this->MidiOutput).field_0x10 = puVar4;
    if (puVar4 + 2 == (undefined8 *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FFreqToMidiOperator *)(*pcVar2)();
        return pFVar5;
      }
    }
  }
  *(undefined ***)&this->MidiOutput = &___7__TDataWriteReference_M_Metasound__6B_;
  this->PrevFreq = **(float **)&param_2->field_0x8;
  return this;
}

// operator() @ 14b0bbeb0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::FFreqToMidiOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar2;
  ITextData *pIVar3;
  FText *pFVar4;
  code *pcVar5;
  TRefCountPtr<ITextData> TVar6;
  bool bVar7;
  int iVar8;
  FName *pFVar9;
  FVertexInterface *pFVar10;
  FText *pFVar11;
  FNodeClassMetadata *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_78 [8];
  FName local_70;
  FName local_68;
  FText local_60;
  FText local_50;
  FText local_40;
  FNodeClassName local_30;
  
  pFVar9 = Metasound::GetMetasoundDataTypeName<float>();
  local_70 = *pFVar9;
  ::FName::FName(&local_68,L"Frequency to MIDI");
  FText::FText(&local_50);
  FText::FText(&local_60);
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  Metasound::FNodeClassName::FNodeClassName
            (&local_30,&Metasound::StandardNodes::Namespace,&local_68,&local_70);
  (__return_storage_ptr__->ClassName).Namespace.ComparisonIndex.Value =
       local_30.Namespace.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Namespace.Number = local_30.Namespace.Number;
  (__return_storage_ptr__->ClassName).Name.ComparisonIndex.Value =
       local_30.Name.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Name.Number = local_30.Name.Number;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Variant = local_30.Variant;
  pIVar3 = (__return_storage_ptr__->DisplayName).TextData.Reference;
  if (pIVar3 != local_50.TextData.Reference) {
    (__return_storage_ptr__->DisplayName).TextData.Reference = local_50.TextData.Reference;
    if (local_50.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_50.TextData.Reference + 8))
                (local_50.TextData.Reference,local_res10);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  (__return_storage_ptr__->DisplayName).Flags = local_50.Flags;
  pIVar3 = (__return_storage_ptr__->Description).TextData.Reference;
  if (pIVar3 != local_60.TextData.Reference) {
    (__return_storage_ptr__->Description).TextData.Reference = local_60.TextData.Reference;
    if (local_60.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_60.TextData.Reference + 8))
                (local_60.TextData.Reference,local_res18);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  (__return_storage_ptr__->Description).Flags = local_60.Flags;
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar6 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar3 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar3 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar6.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar6.Reference + 8))(TVar6.Reference,local_res20);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar10 = Metasound::FFreqToMidiOperator::GetVertexInterface();
  Metasound::FVertexInterface::operator=(&__return_storage_ptr__->DefaultInterface,pFVar10);
  iVar8 = (__return_storage_ptr__->CategoryHierarchy).ArrayNum;
  piVar1 = &(__return_storage_ptr__->CategoryHierarchy).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(__return_storage_ptr__->CategoryHierarchy).AllocatorInstance,piVar1);
  }
  pFVar13 = (__return_storage_ptr__->CategoryHierarchy).AllocatorInstance.Data;
  (__return_storage_ptr__->CategoryHierarchy).ArrayNum = iVar8 + 1;
  pFVar13 = pFVar13 + (longlong)iVar8 * 0x10;
  *(undefined8 *)pFVar13 = 0;
  TVar6 = Metasound::NodeCategories::Music.TextData;
  *(ITextData **)pFVar13 = Metasound::NodeCategories::Music.TextData.Reference;
  if (TVar6.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar6.Reference + 8))(TVar6.Reference,local_78);
  }
  *(uint *)(pFVar13 + 8) = Metasound::NodeCategories::Music.Flags;
  pFVar11 = FText::FText(&local_40);
  pTVar2 = &__return_storage_ptr__->Keywords;
  pFVar4 = (FText *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar4 <= pFVar11) && (pFVar11 < pFVar4 + (__return_storage_ptr__->Keywords).ArrayMax)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pFVar12 = (FNodeClassMetadata *)(*pcVar5)();
      return pFVar12;
    }
  }
  iVar8 = (__return_storage_ptr__->Keywords).ArrayNum;
  piVar1 = &(__return_storage_ptr__->Keywords).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (__return_storage_ptr__->Keywords).ArrayNum = iVar8 + 1;
  FText::FText((FText *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x10),pFVar11);
  if (local_40.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
  }
  if (local_60.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_60.TextData.Reference + 0x10))();
  }
  if (local_50.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// BindInputs @ 14b0beee0

void __thiscall
Metasound::FFreqToMidiOperator::BindInputs
          (FFreqToMidiOperator *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<float> *local_res18 [2];
  FName *local_38;
  TDataReadReference<float> *local_30;
  code *local_28;
  TDataReadReference<float> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&FrequencyToMidiVertexNames::InputFreqName);
  local_res18[0] = &this->FreqInput;
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

// BindOutputs @ 14b0bf780

void __thiscall
Metasound::FFreqToMidiOperator::BindOutputs
          (FFreqToMidiOperator *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<float> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<float> *local_30;
  code *local_28;
  TDataWriteReference<float> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&FrequencyToMidiVertexNames::OutputMidiName);
  local_res18[0] = &this->MidiOutput;
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

// CreateOperator @ 14b0cc680

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::FFreqToMidiOperator::CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  FFreqToMidiOperator *this_00;
  FFreqToMidiOperator *pFVar2;
  FName local_res8;
  undefined1 local_28 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&FrequencyToMidiVertexNames::InputFreqName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_28,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x50);
  pFVar2 = (FFreqToMidiOperator *)0x0;
  if (this_00 != (FFreqToMidiOperator *)0x0) {
    pFVar2 = FFreqToMidiOperator(this_00,pFVar1,(TDataReadReference<float> *)local_28);
  }
  param_1->Node = (INode *)pFVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_28._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// Execute @ 14b0d2ce0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall Metasound::FFreqToMidiOperator::Execute(FFreqToMidiOperator *this)

{
  float fVar1;
  
  fVar1 = **(float **)&(this->FreqInput).field_0x8;
  if (__real_322bcc77 <
      (float)((uint)(fVar1 - this->PrevFreq) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->PrevFreq = fVar1;
    fVar1 = logf(fVar1 * ___real_3b14f209);
    **(float **)&(this->MidiOutput).field_0x8 = fVar1 * ___real_418a7fac + __real_428a0000;
  }
  return;
}

// GetNodeInfo @ 14b0d9640

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FFreqToMidiOperator::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `Metasound::FFreqToMidiOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,&::Info);
      atexit(`Metasound::FFreqToMidiOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&::_TSS0);
      return &::Info;
    }
  }
  return &::Info;
}

// GetVertexInterface @ 14b0e05f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::FFreqToMidiOperator::GetVertexInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<float> *pTVar3;
  FInputDataVertex *pFVar4;
  FVertexInterface *pFVar5;
  undefined1 auStackY_138 [32];
  float local_108 [2];
  FInputVertexInterface local_100;
  FOutputVertexInterface local_e0;
  FOutputVertexInterfaceDeclarationBuilder local_c0;
  FInputVertexInterfaceDeclarationBuilder local_98;
  TOutputDataVertex<float> local_70;
  TInputDataVertex<float> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_138;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pTVar3 = TOutputDataVertex<float>::TOutputDataVertex<float><>
                       (&local_70,&FrequencyToMidiVertexNames::OutputMidiName,
                        &FDataVertexMetadata::EmptyBasic);
    FOutputVertexInterface::FOutputVertexInterface(&local_e0);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_c0,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_e0,
               &local_e0.SubInterfaces);
    if ((local_c0.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,&(local_c0.Vertices)->AllocatorInstance,(local_c0.Vertices)->ArrayNum,
                 &(local_c0.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_c0,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_c0);
    local_108[0] = 440.0;
    pFVar4 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_50,&FrequencyToMidiVertexNames::InputFreqName,
                        &FDataVertexMetadata::EmptyBasic,local_108);
    local_100._padding_ = 0;
    local_100._padding_ = 0;
    local_100.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_100.SubInterfaces.ArrayNum = 0;
    local_100.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_98,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_100,
               &local_100.SubInterfaces);
    if ((local_98.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,1,&(local_98.Vertices)->AllocatorInstance,(local_98.Vertices)->ArrayNum,
                 &(local_98.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_98,pFVar4);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_98);
    FVertexInterface::FVertexInterface(&::Interface,&local_100,&local_e0);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_100.SubInterfaces.AllocatorInstance.Data,
               local_100.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_100.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_100.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_100._padding_,(int)local_100._padding_);
    if ((FInputDataVertex *)local_100._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_100._padding_);
    }
    if ((0xc < (byte)local_50._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FVertexInterface *)(*pcVar1)();
      return pFVar5;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_50._48_1_])(&local_50.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_e0.SubInterfaces.AllocatorInstance.Data,
               local_e0.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_e0.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_e0.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_e0._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_e0._padding_);
    }
    atexit(`Metasound::FFreqToMidiOperator::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__Interface__);
    _Init_thread_footer(&::_TSS0);
  }
  return &::Interface;
}

// Reset @ 14b0e5210

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Metasound::FFreqToMidiOperator::Reset(FFreqToMidiOperator *this,FResetParams *param_1)

{
  float fVar1;
  
  fVar1 = **(float **)&(this->FreqInput).field_0x8;
  this->PrevFreq = fVar1;
  fVar1 = logf(fVar1 * ___real_3b14f209);
  **(float **)&(this->MidiOutput).field_0x8 = fVar1 * ___real_418a7fac + __real_428a0000;
  return;
}

