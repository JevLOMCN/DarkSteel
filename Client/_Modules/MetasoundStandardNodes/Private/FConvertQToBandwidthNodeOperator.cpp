// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 9

// BindInputs @ 14b082be0

void __thiscall
Metasound::FConvertQToBandwidthNodeOperator::BindInputs
          (FConvertQToBandwidthNodeOperator *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<float> *local_res18 [2];
  FName *local_38;
  TDataReadReference<float> *local_30;
  code *local_28;
  TDataReadReference<float> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&QToBandwidth::InputQName);
  local_res18[0] = &this->InValue;
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

// BindOutputs @ 14b082c70

void __thiscall
Metasound::FConvertQToBandwidthNodeOperator::BindOutputs
          (FConvertQToBandwidthNodeOperator *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<float> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<float> *local_30;
  code *local_28;
  TDataWriteReference<float> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&QToBandwidth::OutputBandwidthName);
  local_res18[0] = &this->OutValue;
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

// FConvertQToBandwidthNodeOperator @ 14b0b2ba0

FConvertQToBandwidthNodeOperator * __thiscall
Metasound::FConvertQToBandwidthNodeOperator::FConvertQToBandwidthNodeOperator
          (FConvertQToBandwidthNodeOperator *this,FOperatorSettings *param_1,
          TDataReadReference<float> *param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  
  this->_padding_ = (longlong)&___7FConvertQToBandwidthNodeOperator_Metasound__6B_;
  *(undefined ***)&this->InValue = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->InValue).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->InValue).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->InValue = &___7__TDataReadReference_M_Metasound__6B_;
  TDataReference<float>::TDataReference<float><>((TDataReference<float> *)&this->OutValue,NewObject)
  ;
  fVar2 = __real_3f800000;
  *(undefined ***)&this->OutValue = &___7__TDataWriteReference_M_Metasound__6B_;
  fVar3 = **(float **)&(this->InValue).field_0x8;
  if (fVar3 <= __real_38d1b717) {
    fVar3 = __real_38d1b717;
  }
  fVar3 = logf(SQRT(fVar2 / (fVar3 * fVar3) + __real_40800000) * __real_3f000000 +
               __real_3f000000 / fVar3);
  **(float **)&(this->OutValue).field_0x8 = fVar3 * __real_4038aa3b;
  return this;
}

// ~FConvertQToBandwidthNodeOperator @ 14b0b6010

void __thiscall
Metasound::FConvertQToBandwidthNodeOperator::~FConvertQToBandwidthNodeOperator
          (FConvertQToBandwidthNodeOperator *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutValue).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InValue).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// operator() @ 14b0bba70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::FConvertQToBandwidthNodeOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ForAnyElementType _Src;
  FName FVar1;
  FVertexInterface *pFVar2;
  FText *pFVar3;
  FText *pFVar4;
  FNodeClassName *pFVar5;
  longlong lVar6;
  undefined1 local_res10 [8];
  FName local_res18;
  FName local_res20;
  FNodeClassName local_138;
  FString local_118;
  TArray<FText,TSizedDefaultAllocator<32>_> local_108;
  FNodeDisplayStyle local_f8;
  TArray<FText,TSizedDefaultAllocator<32>_> local_e8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FText local_a8;
  FNodeClassName local_98;
  FVertexInterface local_80;
  
  local_138.Namespace.ComparisonIndex.Value = 0;
  local_138.Namespace.Number = 0;
  local_138.Name.ComparisonIndex.Value = 0x1010101;
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  local_d8.TextData.Reference = Metasound::NodeCategories::Math.TextData.Reference;
  if (Metasound::NodeCategories::Math.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Math.TextData.Reference + 8))
              (Metasound::NodeCategories::Math.TextData.Reference,local_res10);
  }
  local_d8.Flags = Metasound::NodeCategories::Math.Flags;
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_108.AllocatorInstance,1,&local_108.ArrayMax);
  ConstructItems<FText,FText,int>(local_108.AllocatorInstance.Data,&local_d8,1);
  pFVar2 = Metasound::FConvertQToBandwidthNodeOperator::GetDefaultInterface();
  pFVar2 = Metasound::FVertexInterface::FVertexInterface(&local_80,pFVar2);
  local_c8.TextData.Reference = Metasound::PluginNodeMissingPrompt.TextData.Reference;
  if (Metasound::PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::PluginNodeMissingPrompt.TextData.Reference + 8))
              (Metasound::PluginNodeMissingPrompt.TextData.Reference,local_res10);
  }
  _Src.Data = Metasound::PluginAuthor.Data.AllocatorInstance.Data;
  lVar6 = (longlong)Metasound::PluginAuthor.Data.ArrayNum;
  local_c8.Flags = Metasound::PluginNodeMissingPrompt.Flags;
  local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.Data.ArrayNum = Metasound::PluginAuthor.Data.ArrayNum;
  if (Metasound::PluginAuthor.Data.ArrayNum == 0) {
    local_118.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,Metasound::PluginAuthor.Data.ArrayNum,0,(ForAnyElementType *)&local_118,
               Metasound::PluginAuthor.Data.ArrayNum,&local_118.Data.ArrayMax);
    memcpy(local_118.Data.AllocatorInstance.Data,_Src.Data,lVar6 * 2);
  }
  pFVar3 = FText::FText(&local_b8);
  pFVar4 = FText::FText(&local_a8);
  ::FName::FName(&local_res20,"Convert Filter Q To Bandwidth");
  ::FName::FName(&local_res18,"");
  FVar1 = local_138.Name;
  local_f8.bShowName = (bool)(undefined1)local_138.Name.ComparisonIndex.Value;
  local_f8.bShowInputNames = (bool)local_138.Name.ComparisonIndex.Value._1_1_;
  local_f8.bShowOutputNames = (bool)local_138.Name.ComparisonIndex.Value._2_1_;
  local_f8.bShowLiterals = (bool)local_138.Name.ComparisonIndex.Value._3_1_;
  local_f8.ImageName = local_138.Namespace;
  local_138.Name = FVar1;
  pFVar5 = Metasound::FNodeClassName::FNodeClassName
                     (&local_98,&Metasound::StandardNodes::Namespace,&local_res20,&local_res18);
  local_138.Namespace = pFVar5->Namespace;
  local_138.Name = pFVar5->Name;
  local_138.Variant = pFVar5->Variant;
  Metasound::FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,&local_138,1,0,pFVar4,pFVar3,&local_118,&local_c8,pFVar2,
             &local_108,&local_e8,&local_f8);
  if (local_d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// CreateOperator @ 14b0cc330

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::FConvertQToBandwidthNodeOperator::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  FConvertQToBandwidthNodeOperator *this_00;
  FConvertQToBandwidthNodeOperator *pFVar2;
  FName local_res8;
  undefined1 local_28 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&QToBandwidth::InputQName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_28,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  this_00 = ::operator_new(0x48);
  pFVar2 = (FConvertQToBandwidthNodeOperator *)0x0;
  if (this_00 != (FConvertQToBandwidthNodeOperator *)0x0) {
    pFVar2 = FConvertQToBandwidthNodeOperator(this_00,pFVar1,(TDataReadReference<float> *)local_28);
  }
  param_1->Node = (INode *)pFVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_28._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// GetDefaultInterface @ 14b0d6140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::FConvertQToBandwidthNodeOperator::GetDefaultInterface(void)

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
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FConvertQToBandwidthNodeOperator::GetDefaultInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FConvertQToBandwidthNodeOperator::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FConvertQToBandwidthNodeOperator::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pTVar3 = TOutputDataVertex<float>::TOutputDataVertex<float><>
                       (&local_70,&QToBandwidth::OutputBandwidthName,
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
                       (&local_50,&QToBandwidth::InputQName,&FDataVertexMetadata::EmptyBasic,
                        local_108);
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
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FConvertQToBandwidthNodeOperator::GetDefaultInterface(void)'
                ::__l2::DefaultInterface,&local_100,&local_e0);
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
    atexit(`Metasound::FConvertQToBandwidthNodeOperator::GetDefaultInterface'::__l2::
           _dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FConvertQToBandwidthNodeOperator::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FConvertQToBandwidthNodeOperator::GetDefaultInterface(void)'
          ::__l2::DefaultInterface;
}

// GetNodeInfo @ 14b0d9520

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FConvertQToBandwidthNodeOperator::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FConvertQToBandwidthNodeOperator::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FConvertQToBandwidthNodeOperator::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FConvertQToBandwidthNodeOperator::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::FConvertQToBandwidthNodeOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FConvertQToBandwidthNodeOperator::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::FConvertQToBandwidthNodeOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FConvertQToBandwidthNodeOperator::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FConvertQToBandwidthNodeOperator::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FConvertQToBandwidthNodeOperator::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// Reset @ 14b0e5040

void __thiscall
Metasound::FConvertQToBandwidthNodeOperator::Reset
          (FConvertQToBandwidthNodeOperator *this,FResetParams *param_1)

{
  float fVar1;
  
  fVar1 = **(float **)&(this->InValue).field_0x8;
  if (fVar1 <= __real_38d1b717) {
    fVar1 = __real_38d1b717;
  }
  fVar1 = logf(SQRT(__real_3f800000 / (fVar1 * fVar1) + __real_40800000) * __real_3f000000 +
               __real_3f000000 / fVar1);
  **(float **)&(this->OutValue).field_0x8 = fVar1 * __real_4038aa3b;
  return;
}

