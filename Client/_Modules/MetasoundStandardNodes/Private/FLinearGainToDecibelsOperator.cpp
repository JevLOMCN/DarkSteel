// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 9

// FLinearGainToDecibelsOperator @ 14b0b4600

FLinearGainToDecibelsOperator * __thiscall
Metasound::FLinearGainToDecibelsOperator::FLinearGainToDecibelsOperator
          (FLinearGainToDecibelsOperator *this,FBuildOperatorParams *param_1,
          TDataReadReference<float> *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  FLinearGainToDecibelsOperator *pFVar5;
  float fVar6;
  float fVar7;
  
  this->_padding_ = (longlong)&___7FLinearGainToDecibelsOperator_Metasound__6B_;
  *(undefined ***)&this->LinearGainInput = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->LinearGainInput).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->LinearGainInput).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->LinearGainInput = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->DecibelOutput = &___7__TDataReference_M_Metasound__6B_;
  puVar4 = ::operator_new(0x18);
  if (puVar4 == (undefined8 *)0x0) {
    *(undefined8 *)&(this->DecibelOutput).field_0x8 = 0x10;
    *(undefined8 *)&(this->DecibelOutput).field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar4 + 1) = 1;
    *puVar4 = &___7__TIntrusiveReferenceController_M_0A__SharedPointerInternals__6B_;
    *(undefined8 *)((longlong)puVar4 + 0xc) = 1;
    *(undefined8 **)&(this->DecibelOutput).field_0x8 = puVar4 + 2;
    *(undefined8 **)&(this->DecibelOutput).field_0x10 = puVar4;
    if (puVar4 + 2 == (undefined8 *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FLinearGainToDecibelsOperator *)(*pcVar2)();
        return pFVar5;
      }
    }
  }
  *(undefined ***)&this->DecibelOutput = &___7__TDataWriteReference_M_Metasound__6B_;
  fVar7 = **(float **)&(this->LinearGainInput).field_0x8;
  if (fVar7 <= __real_00800000) {
    fVar7 = __real_00800000;
  }
  fVar6 = logf(fVar7);
  fVar7 = fVar6 * __real_410af967;
  if (fVar6 * __real_410af967 <= __real_c3700000) {
    fVar7 = __real_c3700000;
  }
  **(float **)&(this->DecibelOutput).field_0x8 = fVar7;
  return this;
}

// operator() @ 14b0bcc10

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::FLinearGainToDecibelsOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
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
  ::FName::FName(&local_res20,L"Linear Gain to Decibels");
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
  pFVar6 = Metasound::FLinearGainToDecibelsOperator::GetVertexInterface();
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
  TVar3 = Metasound::NodeCategories::Dynamics.TextData;
  *(ITextData **)pFVar7 = Metasound::NodeCategories::Dynamics.TextData.Reference;
  if (TVar3.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar3.Reference + 8))(TVar3.Reference,local_res10);
  }
  *(uint *)(pFVar7 + 8) = Metasound::NodeCategories::Dynamics.Flags;
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// BindInputs @ 14b0bf6f0

void __thiscall
Metasound::FLinearGainToDecibelsOperator::BindInputs
          (FLinearGainToDecibelsOperator *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<float> *local_res18 [2];
  FName *local_38;
  TDataReadReference<float> *local_30;
  code *local_28;
  TDataReadReference<float> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&LinearGainToDecibelsVertexNames::InputLinearGainName);
  local_res18[0] = &this->LinearGainInput;
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

// BindOutputs @ 14b0bfab0

void __thiscall
Metasound::FLinearGainToDecibelsOperator::BindOutputs
          (FLinearGainToDecibelsOperator *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<float> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<float> *local_30;
  code *local_28;
  TDataWriteReference<float> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&LinearGainToDecibelsVertexNames::OutputDecibelsName);
  local_res18[0] = &this->DecibelOutput;
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

// CreateOperator @ 14b0cd220

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::FLinearGainToDecibelsOperator::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  FLinearGainToDecibelsOperator *this_00;
  FLinearGainToDecibelsOperator *pFVar2;
  FName local_res8;
  undefined1 local_28 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&LinearGainToDecibelsVertexNames::InputLinearGainName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_28,&local_res8,pFVar1);
  this_00 = ::operator_new(0x48);
  pFVar2 = (FLinearGainToDecibelsOperator *)0x0;
  if (this_00 != (FLinearGainToDecibelsOperator *)0x0) {
    pFVar2 = FLinearGainToDecibelsOperator
                       (this_00,(FBuildOperatorParams *)param_2,
                        (TDataReadReference<float> *)local_28);
  }
  param_1->Node = (INode *)pFVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_28._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// Execute @ 14b0d37d0

void __thiscall
Metasound::FLinearGainToDecibelsOperator::Execute(FLinearGainToDecibelsOperator *this)

{
  float fVar1;
  float fVar2;
  
  fVar2 = **(float **)&(this->LinearGainInput).field_0x8;
  if (fVar2 <= __real_00800000) {
    fVar2 = __real_00800000;
  }
  fVar1 = logf(fVar2);
  fVar2 = fVar1 * __real_410af967;
  if (fVar1 * __real_410af967 <= __real_c3700000) {
    fVar2 = __real_c3700000;
  }
  **(float **)&(this->DecibelOutput).field_0x8 = fVar2;
  return;
}

// GetNodeInfo @ 14b0d99a0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FLinearGainToDecibelsOperator::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `Metasound::FLinearGainToDecibelsOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,&::Info);
      atexit(`Metasound::FLinearGainToDecibelsOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Info__);
      _Init_thread_footer(&::_TSS0);
      return &::Info;
    }
  }
  return &::Info;
}

// GetVertexInterface @ 14b0e1780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::FLinearGainToDecibelsOperator::GetVertexInterface(void)

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
                       (&local_70,&LinearGainToDecibelsVertexNames::OutputDecibelsName,
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
                       (&local_50,&LinearGainToDecibelsVertexNames::InputLinearGainName,
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
    atexit(`Metasound::FLinearGainToDecibelsOperator::GetVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__Interface__);
    _Init_thread_footer(&::_TSS0);
  }
  return &::Interface;
}

// Reset @ 14b0e5630

void __thiscall
Metasound::FLinearGainToDecibelsOperator::Reset
          (FLinearGainToDecibelsOperator *this,FResetParams *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = **(float **)&(this->LinearGainInput).field_0x8;
  if (fVar2 <= __real_00800000) {
    fVar2 = __real_00800000;
  }
  fVar1 = logf(fVar2);
  fVar2 = fVar1 * __real_410af967;
  if (fVar1 * __real_410af967 <= __real_c3700000) {
    fVar2 = __real_c3700000;
  }
  **(float **)&(this->DecibelOutput).field_0x8 = fVar2;
  return;
}

