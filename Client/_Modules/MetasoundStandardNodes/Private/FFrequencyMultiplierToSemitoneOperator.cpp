// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 9

// FFrequencyMultiplierToSemitoneOperator @ 14b0b3c20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FFrequencyMultiplierToSemitoneOperator * __thiscall
Metasound::FFrequencyMultiplierToSemitoneOperator::FFrequencyMultiplierToSemitoneOperator
          (FFrequencyMultiplierToSemitoneOperator *this,FOperatorSettings *param_1,
          TDataReadReference<float> *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  FFrequencyMultiplierToSemitoneOperator *pFVar5;
  float fVar6;
  
  this->_padding_ = (longlong)&___7FFrequencyMultiplierToSemitoneOperator_Metasound__6B_;
  *(undefined ***)&this->FrequencyMultiplierInput = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->FrequencyMultiplierInput).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->FrequencyMultiplierInput).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->FrequencyMultiplierInput = &___7__TDataReadReference_M_Metasound__6B_;
  fVar6 = __real_c39f73da;
  if (0.0 < **(float **)&param_2->field_0x8) {
    fVar6 = logf(**(float **)&param_2->field_0x8);
    fVar6 = fVar6 * ___real_418a7fac;
  }
  *(undefined ***)&this->SemitoneOutput = &___7__TDataReference_M_Metasound__6B_;
  puVar4 = ::operator_new(0x18);
  if (puVar4 == (undefined8 *)0x0) {
    *(undefined8 *)&(this->SemitoneOutput).field_0x8 = 0x10;
    *(undefined8 *)&(this->SemitoneOutput).field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar4 + 1) = 1;
    *puVar4 = &___7__TIntrusiveReferenceController_M_0A__SharedPointerInternals__6B_;
    *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
    *(float *)(puVar4 + 2) = fVar6;
    *(undefined8 **)&(this->SemitoneOutput).field_0x8 = puVar4 + 2;
    *(undefined8 **)&(this->SemitoneOutput).field_0x10 = puVar4;
    if ((puVar4 + 2 == (undefined8 *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FFrequencyMultiplierToSemitoneOperator *)(*pcVar2)();
      return pFVar5;
    }
  }
  *(undefined ***)&this->SemitoneOutput = &___7__TDataWriteReference_M_Metasound__6B_;
  this->PrevFrequencyMultiplier = **(float **)&param_2->field_0x8;
  return this;
}

// operator() @ 14b0bc170

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::FFrequencyMultiplierToSemitoneOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  int *piVar1;
  ITextData *pIVar2;
  TRefCountPtr<ITextData> TVar3;
  int iVar4;
  FName *pFVar5;
  FVertexInterface *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res10 [8];
  FName local_res18;
  FName local_res20;
  FText local_48;
  FText local_38;
  FNodeClassName local_28;
  
  pFVar5 = Metasound::GetMetasoundDataTypeName<float>();
  local_res18 = *pFVar5;
  ::FName::FName(&local_res20,L"Frequency Multiplier to Semitone");
  FText::FText(&local_38);
  FText::FText(&local_48);
  Metasound::FNodeClassMetadata::FNodeClassMetadata(__return_storage_ptr__);
  Metasound::FNodeClassName::FNodeClassName
            (&local_28,&Metasound::StandardNodes::Namespace,&local_res20,&local_res18);
  (__return_storage_ptr__->ClassName).Namespace.ComparisonIndex.Value =
       local_28.Namespace.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Namespace.Number = local_28.Namespace.Number;
  (__return_storage_ptr__->ClassName).Name.ComparisonIndex.Value =
       local_28.Name.ComparisonIndex.Value;
  (__return_storage_ptr__->ClassName).Name.Number = local_28.Name.Number;
  __return_storage_ptr__->MajorVersion = 1;
  __return_storage_ptr__->MinorVersion = 0;
  (__return_storage_ptr__->ClassName).Variant = local_28.Variant;
  pIVar2 = (__return_storage_ptr__->DisplayName).TextData.Reference;
  if (pIVar2 != local_38.TextData.Reference) {
    (__return_storage_ptr__->DisplayName).TextData.Reference = local_38.TextData.Reference;
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 8))
                (local_38.TextData.Reference,local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->DisplayName).Flags = local_38.Flags;
  pIVar2 = (__return_storage_ptr__->Description).TextData.Reference;
  if (pIVar2 != local_48.TextData.Reference) {
    (__return_storage_ptr__->Description).TextData.Reference = local_48.TextData.Reference;
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 8))
                (local_48.TextData.Reference,local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->Description).Flags = local_48.Flags;
  ::FString::operator=(&__return_storage_ptr__->Author,&Metasound::PluginAuthor);
  TVar3 = Metasound::PluginNodeMissingPrompt.TextData;
  pIVar2 = (__return_storage_ptr__->PromptIfMissing).TextData.Reference;
  if (pIVar2 != Metasound::PluginNodeMissingPrompt.TextData.Reference) {
    (__return_storage_ptr__->PromptIfMissing).TextData.Reference =
         Metasound::PluginNodeMissingPrompt.TextData.Reference;
    if (TVar3.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,local_res10);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (__return_storage_ptr__->PromptIfMissing).Flags = Metasound::PluginNodeMissingPrompt.Flags;
  pFVar6 = Metasound::FFrequencyMultiplierToSemitoneOperator::GetVertexInterface();
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
  TVar3 = Metasound::NodeCategories::Conversions.TextData;
  *(ITextData **)pFVar7 = Metasound::NodeCategories::Conversions.TextData.Reference;
  if (TVar3.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,local_res10);
  }
  *(uint *)(pFVar7 + 8) = Metasound::NodeCategories::Conversions.Flags;
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// BindInputs @ 14b0bef70

void __thiscall
Metasound::FFrequencyMultiplierToSemitoneOperator::BindInputs
          (FFrequencyMultiplierToSemitoneOperator *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<float> *local_res18 [2];
  FName *local_38;
  TDataReadReference<float> *local_30;
  code *local_28;
  TDataReadReference<float> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&FrequencyMultiplierToSemitoneVertexNames::InputFrequencyMultiplierName);
  local_res18[0] = &this->FrequencyMultiplierInput;
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

// BindOutputs @ 14b0bf810

void __thiscall
Metasound::FFrequencyMultiplierToSemitoneOperator::BindOutputs
          (FFrequencyMultiplierToSemitoneOperator *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<float> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<float> *local_30;
  code *local_28;
  TDataWriteReference<float> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&FrequencyMultiplierToSemitoneVertexNames::OutputSemitoneName);
  local_res18[0] = &this->SemitoneOutput;
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

// CreateOperator @ 14b0cc720

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::FFrequencyMultiplierToSemitoneOperator::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  FFrequencyMultiplierToSemitoneOperator *this_00;
  FFrequencyMultiplierToSemitoneOperator *pFVar2;
  FName local_res8;
  undefined1 local_28 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&FrequencyMultiplierToSemitoneVertexNames::InputFrequencyMultiplierName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_28,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x50);
  pFVar2 = (FFrequencyMultiplierToSemitoneOperator *)0x0;
  if (this_00 != (FFrequencyMultiplierToSemitoneOperator *)0x0) {
    pFVar2 = FFrequencyMultiplierToSemitoneOperator
                       (this_00,pFVar1,(TDataReadReference<float> *)local_28);
  }
  param_1->Node = (INode *)pFVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_28._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// Execute @ 14b0d2d40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Metasound::FFrequencyMultiplierToSemitoneOperator::Execute
          (FFrequencyMultiplierToSemitoneOperator *this)

{
  float *pfVar1;
  float fVar2;
  
  pfVar1 = *(float **)&(this->FrequencyMultiplierInput).field_0x8;
  fVar2 = *pfVar1;
  if (__real_322bcc77 <
      (float)((uint)(fVar2 - this->PrevFrequencyMultiplier) & __xmm_7fffffff7fffffff7fffffff7fffffff
             )) {
    this->PrevFrequencyMultiplier = fVar2;
    fVar2 = *pfVar1;
    if (fVar2 <= 0.0) {
      **(undefined4 **)&(this->SemitoneOutput).field_0x8 = __real_c39f73da;
      return;
    }
    fVar2 = logf(fVar2);
    **(float **)&(this->SemitoneOutput).field_0x8 = fVar2 * ___real_418a7fac;
  }
  return;
}

// GetNodeInfo @ 14b0d96d0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FFrequencyMultiplierToSemitoneOperator::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `Metasound::FFrequencyMultiplierToSemitoneOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,&::Info);
      atexit(`Metasound::FFrequencyMultiplierToSemitoneOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&::_TSS0);
      return &::Info;
    }
  }
  return &::Info;
}

// GetVertexInterface @ 14b0e0880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::FFrequencyMultiplierToSemitoneOperator::GetVertexInterface(void)

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
                       (&local_70,&FrequencyMultiplierToSemitoneVertexNames::OutputSemitoneName,
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
    local_108[0] = 1.0;
    pFVar4 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_50,
                        &FrequencyMultiplierToSemitoneVertexNames::InputFrequencyMultiplierName,
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
    atexit(`Metasound::FFrequencyMultiplierToSemitoneOperator::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__Interface__);
    _Init_thread_footer(&::_TSS0);
  }
  return &::Interface;
}

// Reset @ 14b0e5260

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Metasound::FFrequencyMultiplierToSemitoneOperator::Reset
          (FFrequencyMultiplierToSemitoneOperator *this,FResetParams *param_1)

{
  float *pfVar1;
  float fVar2;
  
  pfVar1 = *(float **)&(this->FrequencyMultiplierInput).field_0x8;
  this->PrevFrequencyMultiplier = *pfVar1;
  fVar2 = *pfVar1;
  if (fVar2 <= 0.0) {
    **(undefined4 **)&(this->SemitoneOutput).field_0x8 = __real_c39f73da;
    return;
  }
  fVar2 = logf(fVar2);
  **(float **)&(this->SemitoneOutput).field_0x8 = fVar2 * ___real_418a7fac;
  return;
}

