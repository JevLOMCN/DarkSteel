// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 7

// BindInputs @ 14b0384f0

void __thiscall
Metasound::FBitcrusherOperator::BindInputs
          (FBitcrusherOperator *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FAudioBuffer> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<Metasound::FAudioBuffer> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&BitcrusherVertexNames::InputAudioName);
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
  FLazyName::Resolve(&BitcrusherVertexNames::InputSampleRateName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->CrushedSampleRate;
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
  FLazyName::Resolve(&BitcrusherVertexNames::InputBitDepthName);
  local_res18 = (TDataReadReference<Metasound::FAudioBuffer> *)&this->CrushedBitDepth;
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

// BindOutputs @ 14b038640

void __thiscall
Metasound::FBitcrusherOperator::BindOutputs
          (FBitcrusherOperator *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FAudioBuffer> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FAudioBuffer> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FAudioBuffer> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&BitcrusherVertexNames::OutputAudioName);
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

// operator() @ 14b059e60

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::FBitcrusherOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ForAnyElementType _Src;
  FVertexInterface *pFVar1;
  FText *pFVar2;
  FText *pFVar3;
  FNodeClassName *pFVar4;
  longlong lVar5;
  undefined1 local_res10 [8];
  FName local_res18 [2];
  FNodeClassName local_188;
  FString local_168;
  TArray<FText,TSizedDefaultAllocator<32>_> local_158;
  FNodeDisplayStyle local_148;
  TArray<FText,TSizedDefaultAllocator<32>_> local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FNodeClassName local_e8;
  FVertexInterface local_c8;
  FVertexInterface local_78;
  
  pFVar1 = Metasound::FBitcrusherOperator::DeclareVertexInterface();
  Metasound::FVertexInterface::FVertexInterface(&local_c8,pFVar1);
  local_188.Namespace.ComparisonIndex.Value = 0;
  local_188.Namespace.Number = 0;
  local_188.Name.ComparisonIndex.Value = 0x1010101;
  local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ArrayNum = 0;
  local_138.ArrayMax = 0;
  local_128.TextData.Reference = Metasound::NodeCategories::Filters.TextData.Reference;
  if (Metasound::NodeCategories::Filters.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Filters.TextData.Reference + 8))
              (Metasound::NodeCategories::Filters.TextData.Reference,local_res10);
  }
  local_128.Flags = Metasound::NodeCategories::Filters.Flags;
  local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_158.AllocatorInstance,1,&local_158.ArrayMax);
  ConstructItems<FText,FText,int>(local_158.AllocatorInstance.Data,&local_128,1);
  pFVar1 = Metasound::FVertexInterface::FVertexInterface(&local_78,&local_c8);
  local_118.TextData.Reference = Metasound::PluginNodeMissingPrompt.TextData.Reference;
  if (Metasound::PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::PluginNodeMissingPrompt.TextData.Reference + 8))
              (Metasound::PluginNodeMissingPrompt.TextData.Reference,local_res10);
  }
  _Src.Data = Metasound::PluginAuthor.Data.AllocatorInstance.Data;
  lVar5 = (longlong)Metasound::PluginAuthor.Data.ArrayNum;
  local_118.Flags = Metasound::PluginNodeMissingPrompt.Flags;
  local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.Data.ArrayNum = Metasound::PluginAuthor.Data.ArrayNum;
  if (Metasound::PluginAuthor.Data.ArrayNum == 0) {
    local_168.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,Metasound::PluginAuthor.Data.ArrayNum,0,(ForAnyElementType *)&local_168,
               Metasound::PluginAuthor.Data.ArrayNum,&local_168.Data.ArrayMax);
    memcpy(local_168.Data.AllocatorInstance.Data,_Src.Data,lVar5 * 2);
  }
  pFVar2 = FText::FText(&local_108);
  pFVar3 = FText::FText(&local_f8);
  ::FName::FName(local_res18,"Bitcrusher");
  pFVar4 = Metasound::FNodeClassName::FNodeClassName
                     (&local_e8,&Metasound::StandardNodes::Namespace,local_res18,
                      &Metasound::StandardNodes::AudioVariant);
  local_148.ImageName = local_188.Namespace;
  local_188.Namespace = pFVar4->Namespace;
  local_148.bShowName = (bool)(undefined1)local_188.Name.ComparisonIndex.Value;
  local_148.bShowInputNames = (bool)local_188.Name.ComparisonIndex.Value._1_1_;
  local_148.bShowOutputNames = (bool)local_188.Name.ComparisonIndex.Value._2_1_;
  local_148.bShowLiterals = (bool)local_188.Name.ComparisonIndex.Value._3_1_;
  local_188.Variant = pFVar4->Variant;
  local_188.Name = pFVar4->Name;
  Metasound::FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,&local_188,1,0,pFVar3,pFVar2,&local_168,&local_118,pFVar1,
             &local_158,&local_138,&local_148);
  if (local_128.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
  }
  Metasound::FVertexInterface::~FVertexInterface(&local_c8);
  return __return_storage_ptr__;
}

// CreateOperator @ 14b066870

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::FBitcrusherOperator::CreateOperator(FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  FGraphRenderCost *pFVar2;
  FBitcrusherOperator *this_00;
  FName local_res8;
  undefined1 local_88 [16];
  FGraphRenderCost *local_78;
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&BitcrusherVertexNames::InputAudioName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FAudioBuffer>
            (this,(TDataReadReference<Metasound::FAudioBuffer> *)local_88,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&BitcrusherVertexNames::InputSampleRateName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_68,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  FLazyName::Resolve(&BitcrusherVertexNames::InputBitDepthName);
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_48,&local_res8,pFVar1);
  this_00 = ::operator_new(0xb8);
  pFVar2 = local_78;
  if (this_00 == (FBitcrusherOperator *)0x0) {
    this_00 = (FBitcrusherOperator *)0x0;
  }
  else {
    this_00->_padding_ = (longlong)&___7FBitcrusherOperator_Metasound__6B_;
    *(undefined ***)&this_00->AudioInput =
         &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    *(undefined8 *)&(this_00->AudioInput).field_0x8 = local_88._8_8_;
    *(FGraphRenderCost **)&(this_00->AudioInput).field_0x10 = local_78;
    if (local_78 != (FGraphRenderCost *)0x0) {
      *(int *)&local_78->_padding_ = (int)local_78->_padding_ + 1;
    }
    *(undefined ***)&this_00->AudioInput =
         &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
    TDataReference<Metasound::FAudioBuffer>::
    TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FAudioBuffer> *)&this_00->AudioOutput,NewObject,
               *(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    *(undefined ***)&this_00->AudioOutput =
         &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    *(undefined ***)&this_00->CrushedSampleRate = &___7__TDataReference_M_Metasound__6B_;
    *(undefined8 *)&(this_00->CrushedSampleRate).field_0x8 = local_68._8_8_;
    *(undefined8 *)&(this_00->CrushedSampleRate).field_0x10 = local_68._16_8_;
    if ((TReferenceControllerBase<0> *)local_68._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_68._16_8_ + 8) = *(int *)(local_68._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->CrushedSampleRate = &___7__TDataReadReference_M_Metasound__6B_;
    *(undefined ***)&this_00->CrushedBitDepth = &___7__TDataReference_M_Metasound__6B_;
    *(undefined8 *)&(this_00->CrushedBitDepth).field_0x8 = local_48._8_8_;
    *(undefined8 *)&(this_00->CrushedBitDepth).field_0x10 = local_48._16_8_;
    if ((TReferenceControllerBase<0> *)local_48._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_48._16_8_ + 8) = *(int *)(local_48._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->CrushedBitDepth = &___7__TDataReadReference_M_Metasound__6B_;
    Audio::FBitCrusher::FBitCrusher(&this_00->Bitcrusher);
    this_00->MaxSampleRate = (float)**(int **)&(param_2->Errors).ArrayNum;
    local_88._0_8_ = *(undefined8 *)&(param_2->Errors).ArrayNum;
    local_88._8_8_ = *(undefined8 *)&(param_2->InternalDataReferences).field_0x8;
    local_78 = *(FGraphRenderCost **)&(param_2->InternalDataReferences).field_0x18;
    Reset(this_00,(FResetParams *)local_88);
  }
  param_1->Node = (INode *)this_00;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_48._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_68._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)pFVar2);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// DeclareVertexInterface @ 14b068a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::FBitcrusherOperator::DeclareVertexInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar3;
  TInputDataVertex<float> *pTVar4;
  TInputDataVertex<float> *pTVar5;
  TInputDataVertex<Metasound::FAudioBuffer> *pTVar6;
  FInputVertexInterface *pFVar7;
  FVertexInterface *pFVar8;
  undefined1 auStackY_178 [32];
  float local_148;
  float local_144;
  FOutputVertexInterface local_140;
  FInputVertexInterface local_120;
  FOutputVertexInterfaceDeclarationBuilder local_100;
  TOutputDataVertex<Metasound::FAudioBuffer> local_d8;
  TInputDataVertex<Metasound::FAudioBuffer> local_b8;
  TInputDataVertex<float> local_80;
  TInputDataVertex<float> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FBitcrusherOperator::DeclareVertexInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FBitcrusherOperator::DeclareVertexInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FBitcrusherOperator::DeclareVertexInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pTVar3 = TOutputDataVertex<Metasound::FAudioBuffer>::
             TOutputDataVertex<Metasound::FAudioBuffer><>
                       (&local_d8,&BitcrusherVertexNames::OutputAudioName,
                        &FDataVertexMetadata::EmptyBasic);
    FOutputVertexInterface::FOutputVertexInterface(&local_140);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_100,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_140,
               &local_140.SubInterfaces);
    if ((local_100.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,&(local_100.Vertices)->AllocatorInstance,(local_100.Vertices)->ArrayNum,
                 &(local_100.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_100,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_100);
    local_148 = 8.0;
    pTVar4 = TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_48,&BitcrusherVertexNames::InputBitDepthName,
                        &FDataVertexMetadata::EmptyBasic,&local_148);
    local_144 = 8000.0;
    pTVar5 = TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_80,&BitcrusherVertexNames::InputSampleRateName,
                        &FDataVertexMetadata::EmptyBasic,&local_144);
    pTVar6 = TInputDataVertex<Metasound::FAudioBuffer>::TInputDataVertex<Metasound::FAudioBuffer><>
                       (&local_b8,&BitcrusherVertexNames::InputAudioName,
                        &FDataVertexMetadata::EmptyBasic);
    pFVar7 = FInputVertexInterface::
             FInputVertexInterface<Metasound::TInputDataVertex<Metasound::FAudioBuffer>,Metasound::TInputDataVertex<float>,Metasound::TInputDataVertex<float>_>
                       (&local_120,pTVar6,pTVar5,pTVar4);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FBitcrusherOperator::DeclareVertexInterface(void)'
                ::__l2::Interface,pFVar7,&local_140);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_120.SubInterfaces.AllocatorInstance.Data,
               local_120.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_120.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_120.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_120._padding_,(int)local_120._padding_);
    if ((FInputDataVertex *)local_120._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_120._padding_);
    }
    if ((0xc < (byte)local_b8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_b8._48_1_])(&local_b8.field_0x20);
    if ((0xc < (byte)local_80._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_80._48_1_])(&local_80.field_0x20);
    if ((0xc < (byte)local_48._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_48._48_1_])(&local_48.field_0x20);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_140.SubInterfaces.AllocatorInstance.Data,
               local_140.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_140.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_140.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_140._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_140._padding_);
    }
    atexit(`Metasound::FBitcrusherOperator::DeclareVertexInterface'::__l2::
           _dynamic_atexit_destructor_for__Interface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FBitcrusherOperator::DeclareVertexInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FBitcrusherOperator::DeclareVertexInterface(void)'
          ::__l2::Interface;
}

// GetNodeInfo @ 14b075a10

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FBitcrusherOperator::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FBitcrusherOperator::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FBitcrusherOperator::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FBitcrusherOperator::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::FBitcrusherOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FBitcrusherOperator::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::FBitcrusherOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FBitcrusherOperator::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FBitcrusherOperator::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FBitcrusherOperator::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// Reset @ 14b07a8d0

void __thiscall
Metasound::FBitcrusherOperator::Reset(FBitcrusherOperator *this,FResetParams *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  puVar2 = *(undefined8 **)&(this->AudioOutput).field_0x8;
  iVar1 = *(int *)(puVar2 + 1);
  if (0 < iVar1) {
    memset((void *)*puVar2,0,(longlong)iVar1 << 2);
  }
  Audio::FBitCrusher::Init(&this->Bitcrusher,(float)param_1->OperatorSettings->SampleRate,1);
  fVar5 = **(float **)&(this->CrushedSampleRate).field_0x8;
  if (this->MaxSampleRate <= fVar5) {
    fVar5 = this->MaxSampleRate;
  }
  if (fVar5 <= __real_3f800000) {
    fVar5 = __real_3f800000;
  }
  fVar3 = Audio::FBitCrusher::GetMaxBitDepth();
  fVar4 = **(float **)&(this->CrushedBitDepth).field_0x8;
  if (fVar3 <= fVar4) {
    fVar4 = fVar3;
  }
  if (fVar4 <= __real_3f800000) {
    fVar4 = __real_3f800000;
  }
  Audio::FBitCrusher::SetSampleRateCrush(&this->Bitcrusher,fVar5);
  Audio::FBitCrusher::SetBitDepthCrush(&this->Bitcrusher,fVar4);
  this->PrevSampleRate = fVar5;
  this->PrevBitDepth = fVar4;
  return;
}

