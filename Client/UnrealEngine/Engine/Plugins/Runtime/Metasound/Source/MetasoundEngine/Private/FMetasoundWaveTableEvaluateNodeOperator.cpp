// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 9

// BindInputs @ 14b2fd8c0

void __thiscall
Metasound::FMetasoundWaveTableEvaluateNodeOperator::BindInputs
          (FMetasoundWaveTableEvaluateNodeOperator *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<WaveTable::FWaveTable> *local_res18;
  undefined1 local_38 [16];
  code *local_28;
  TDataReadReference<WaveTable::FWaveTable> **local_20;
  undefined1 local_18 [16];
  
  FLazyName::Resolve(&WaveTableEvaluateNode::WaveTableParamName);
  local_res18 = &this->WaveTableReadRef;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<WaveTable::FWaveTable>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<WaveTable::FWaveTable>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  FLazyName::Resolve(&WaveTableEvaluateNode::InputParamName);
  local_res18 = (TDataReadReference<WaveTable::FWaveTable> *)&this->InputReadRef;
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
  ::FName::FName(&local_res8,"Interpolation");
  local_res18 = (TDataReadReference<WaveTable::FWaveTable> *)&this->InterpModeReadRef;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  return;
}

// BindOutputs @ 14b2fda10

void __thiscall
Metasound::FMetasoundWaveTableEvaluateNodeOperator::BindOutputs
          (FMetasoundWaveTableEvaluateNodeOperator *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<float> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<float> *local_30;
  code *local_28;
  TDataWriteReference<float> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&WaveTableEvaluateNode::OutParamName);
  local_res18[0] = &this->OutWriteRef;
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

// FMetasoundWaveTableEvaluateNodeOperator @ 14b34a6a0

FMetasoundWaveTableEvaluateNodeOperator * __thiscall
Metasound::FMetasoundWaveTableEvaluateNodeOperator::FMetasoundWaveTableEvaluateNodeOperator
          (FMetasoundWaveTableEvaluateNodeOperator *this,FBuildOperatorParams *param_1,
          TDataReadReference<WaveTable::FWaveTable> *param_2,TDataReadReference<float> *param_3,
          TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
          *param_4)

{
  longlong lVar1;
  FWaveTableSampler *pFVar2;
  FSettings local_58;
  FWaveTableSampler local_40;
  
  this->_padding_ = (longlong)&___7FMetasoundWaveTableEvaluateNodeOperator_Metasound__6B_;
  *(undefined ***)&this->WaveTableReadRef =
       &___7__TDataReference_UFWaveTable_WaveTable___Metasound__6B_;
  *(undefined8 *)&(this->WaveTableReadRef).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->WaveTableReadRef).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->WaveTableReadRef =
       &___7__TDataReadReference_UFWaveTable_WaveTable___Metasound__6B_;
  *(undefined ***)&this->InputReadRef = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->InputReadRef).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar1 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->InputReadRef).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->InputReadRef = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->InterpModeReadRef =
       &
       ___7__TDataReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
  ;
  *(undefined8 *)&(this->InterpModeReadRef).field_0x8 = *(undefined8 *)&param_4->field_0x8;
  lVar1 = *(longlong *)&param_4->field_0x10;
  *(longlong *)&(this->InterpModeReadRef).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->InterpModeReadRef =
       &
       ___7__TDataReadReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
  ;
  WaveTable::FWaveTableSampler::FWaveTableSampler(&this->Sampler);
  TDataReference<float>::TDataReference<float><>
            ((TDataReference<float> *)&this->OutWriteRef,NewObject);
  local_58.Amplitude = 1.0;
  local_58.Offset = 0.0;
  *(undefined ***)&this->OutWriteRef = &___7__TDataWriteReference_M_Metasound__6B_;
  local_58.Phase = 0.0;
  local_58.InterpolationMode = Linear;
  local_58.bOneShot = false;
  local_58.Freq = 0.0;
  pFVar2 = WaveTable::FWaveTableSampler::FWaveTableSampler(&local_40,&local_58);
  WaveTable::FWaveTableSampler::operator=(&this->Sampler,pFVar2);
  if (local_40.PhaseModScratch.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.PhaseModScratch.AllocatorInstance.Data);
  }
  **(undefined4 **)&(this->OutWriteRef).field_0x8 = 0;
  return this;
}

// ~FMetasoundWaveTableEvaluateNodeOperator @ 14b351d20

void __thiscall
Metasound::FMetasoundWaveTableEvaluateNodeOperator::~FMetasoundWaveTableEvaluateNodeOperator
          (FMetasoundWaveTableEvaluateNodeOperator *this)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutWriteRef).field_0x10);
  pFVar1 = (this->Sampler).PhaseModScratch.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InterpModeReadRef).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputReadRef).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->WaveTableReadRef).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// operator() @ 14b358900

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::FMetasoundWaveTableEvaluateNodeOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassMetadata *__return_storage_ptr__)

{
  ITextData *pIVar1;
  ForAnyElementType _Src;
  FName FVar2;
  FVertexInterface *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FNodeClassName *pFVar6;
  longlong lVar7;
  longlong lVar8;
  FText *__return_storage_ptr___00;
  undefined1 local_res10 [8];
  FName local_res18;
  FName local_res20;
  FNodeClassName local_168;
  FString local_148;
  TArray<FText,TSizedDefaultAllocator<32>_> local_138;
  TArray<FText,TSizedDefaultAllocator<32>_> local_128;
  FNodeDisplayStyle local_118;
  FText local_108;
  FText local_f8;
  FText local_e8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FNodeClassName local_a8;
  FVertexInterface local_90;
  
  __return_storage_ptr___00 = &local_c8;
  local_168.Namespace.ComparisonIndex.Value = 0;
  local_168.Namespace.Number = 0;
  local_168.Name.ComparisonIndex.Value = 0x1010101;
  local_e8.TextData.Reference = Metasound::NodeCategories::Envelopes.TextData.Reference;
  if (Metasound::NodeCategories::Envelopes.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Envelopes.TextData.Reference + 8))
              (Metasound::NodeCategories::Envelopes.TextData.Reference,local_res10);
  }
  local_e8.Flags = Metasound::NodeCategories::Envelopes.Flags;
  FText::FText(&local_d8);
  lVar7 = 2;
  local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,2,0,&local_138.AllocatorInstance,2,&local_138.ArrayMax);
  ConstructItems<FText,FText,int>(local_138.AllocatorInstance.Data,&local_e8,2);
  local_108.TextData.Reference = Metasound::NodeCategories::WaveTables.TextData.Reference;
  if (Metasound::NodeCategories::WaveTables.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::WaveTables.TextData.Reference + 8))
              (Metasound::NodeCategories::WaveTables.TextData.Reference,local_res10);
  }
  local_108.Flags = Metasound::NodeCategories::WaveTables.Flags;
  local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_128.AllocatorInstance,1,&local_128.ArrayMax);
  ConstructItems<FText,FText,int>(local_128.AllocatorInstance.Data,&local_108,1);
  pFVar3 = Metasound::FMetasoundWaveTableEvaluateNodeOperator::GetDefaultInterface();
  pFVar3 = Metasound::FVertexInterface::FVertexInterface(&local_90,pFVar3);
  local_f8.TextData.Reference = Metasound::PluginNodeMissingPrompt.TextData.Reference;
  if (Metasound::PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::PluginNodeMissingPrompt.TextData.Reference + 8))
              (Metasound::PluginNodeMissingPrompt.TextData.Reference,local_res10);
  }
  _Src.Data = Metasound::PluginAuthor.Data.AllocatorInstance.Data;
  lVar8 = (longlong)Metasound::PluginAuthor.Data.ArrayNum;
  local_f8.Flags = Metasound::PluginNodeMissingPrompt.Flags;
  local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.Data.ArrayNum = Metasound::PluginAuthor.Data.ArrayNum;
  if (Metasound::PluginAuthor.Data.ArrayNum == 0) {
    local_148.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,Metasound::PluginAuthor.Data.ArrayNum,0,(ForAnyElementType *)&local_148,
               Metasound::PluginAuthor.Data.ArrayNum,&local_148.Data.ArrayMax);
    memcpy(local_148.Data.AllocatorInstance.Data,_Src.Data,lVar8 * 2);
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (__return_storage_ptr___00,L"MetasoundStandardNodes",
                      L"MetasoundWaveTableEvaluateNode_Description",
                      L"Evaluates a wavetable for a given input value.");
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_b8,L"MetasoundStandardNodes",L"MetasoundWaveTableEvaluateNode_Name",
                      L"Evaluate WaveTable");
  ::FName::FName(&local_res20,"WaveTableEvaluate");
  ::FName::FName(&local_res18,"");
  FVar2 = local_168.Name;
  local_118.bShowName = (bool)(undefined1)local_168.Name.ComparisonIndex.Value;
  local_118.bShowInputNames = (bool)local_168.Name.ComparisonIndex.Value._1_1_;
  local_118.bShowOutputNames = (bool)local_168.Name.ComparisonIndex.Value._2_1_;
  local_118.bShowLiterals = (bool)local_168.Name.ComparisonIndex.Value._3_1_;
  local_118.ImageName = local_168.Namespace;
  local_168.Name = FVar2;
  pFVar6 = Metasound::FNodeClassName::FNodeClassName
                     (&local_a8,&Metasound::EngineNodes::Namespace,&local_res20,&local_res18);
  local_168.Namespace = pFVar6->Namespace;
  local_168.Name = pFVar6->Name;
  local_168.Variant = pFVar6->Variant;
  Metasound::FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,&local_168,1,0,pFVar5,pFVar4,&local_148,&local_f8,pFVar3,
             &local_128,&local_138,&local_118);
  if (local_108.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
  }
  do {
    pIVar1 = __return_storage_ptr___00[-1].TextData.Reference;
    __return_storage_ptr___00 = __return_storage_ptr___00 + -1;
    lVar7 = lVar7 + -1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
  } while (lVar7 != 0);
  return __return_storage_ptr__;
}

// CreateOperator @ 14b388530

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::FMetasoundWaveTableEvaluateNodeOperator::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  FMetasoundWaveTableEvaluateNodeOperator *this_00;
  FMetasoundWaveTableEvaluateNodeOperator *pFVar2;
  FName local_res8;
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  undefined1 local_28 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  ::FName::FName(&local_res8,"WaveTable");
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<WaveTable::FWaveTable>
            (this,(TDataReadReference<WaveTable::FWaveTable> *)local_28,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  ::FName::FName(&local_res8,"Input");
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_48,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  ::FName::FName(&local_res8,"Interpolation");
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
            (this,(TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                   *)local_68,&local_res8,pFVar1);
  this_00 = ::operator_new(0xc0);
  pFVar2 = (FMetasoundWaveTableEvaluateNodeOperator *)0x0;
  if (this_00 != (FMetasoundWaveTableEvaluateNodeOperator *)0x0) {
    pFVar2 = FMetasoundWaveTableEvaluateNodeOperator
                       (this_00,(FBuildOperatorParams *)param_2,
                        (TDataReadReference<WaveTable::FWaveTable> *)local_28,
                        (TDataReadReference<float> *)local_48,
                        (TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                         *)local_68);
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

// GetDefaultInterface @ 14b3b2a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::FMetasoundWaveTableEvaluateNodeOperator::GetDefaultInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<float> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FInputDataVertex *pFVar6;
  FVertexInterface *pFVar7;
  undefined1 auStackY_1c8 [32];
  int local_198;
  float local_194;
  FInputVertexInterface local_190;
  FOutputVertexInterface local_170;
  FInputVertexInterfaceDeclarationBuilder local_150;
  FDataVertexMetadata local_128;
  FOutputVertexInterfaceDeclarationBuilder local_100;
  TOutputDataVertex<float> local_d8;
  TInputDataVertex<WaveTable::FWaveTable> local_b8;
  TInputDataVertex<float> local_80;
  undefined1 local_48 [32];
  undefined1 local_28 [16];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableEvaluateNodeOperator::GetDefaultInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableEvaluateNodeOperator::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableEvaluateNodeOperator::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pTVar3 = TOutputDataVertex<float>::TOutputDataVertex<float><>
                       (&local_d8,&WaveTableEvaluateNode::OutParamName,
                        &FDataVertexMetadata::EmptyBasic);
    FOutputVertexInterface::FOutputVertexInterface(&local_170);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_100,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_170,
               &local_170.SubInterfaces);
    if ((local_100.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,&(local_100.Vertices)->AllocatorInstance,(local_100.Vertices)->ArrayNum,
                 &(local_100.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_100,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_100);
    local_198 = 1;
    FText::AsLocalizable_Advanced_LocText
              (&local_128.Description,L"MetasoundStandardNodes",
               L"MetasoundWaveTableEvaluateNode_InterpDescription",
               L"How the Evaluate interpolates between WaveTable values.");
    FText::AsLocalizable_Advanced_LocText
              (&local_128.DisplayName,L"MetasoundStandardNodes",
               L"MetasoundWaveTableEvaluateNode_Interp",L"Interpolation");
    local_128.bIsAdvancedDisplay = true;
    pFVar4 = (FInputDataVertex *)
             TInputDataVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
             ::
             TInputDataVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_><int>
                       (local_48,"Interpolation",&local_128,&local_198);
    local_194 = 0.0;
    pFVar5 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_80,&WaveTableEvaluateNode::InputParamName,
                        &FDataVertexMetadata::EmptyBasic,&local_194);
    pFVar6 = (FInputDataVertex *)
             TInputDataVertex<WaveTable::FWaveTable>::TInputDataVertex<WaveTable::FWaveTable><>
                       (&local_b8,&WaveTableEvaluateNode::WaveTableParamName,
                        &FDataVertexMetadata::EmptyBasic);
    local_190._padding_ = 0;
    local_190._padding_ = 0;
    local_190.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_190.SubInterfaces.ArrayNum = 0;
    local_190.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_150,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_190,
               &local_190.SubInterfaces);
    if ((local_150.Vertices)->ArrayMax < 3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,3,&(local_150.Vertices)->AllocatorInstance,(local_150.Vertices)->ArrayNum,
                 &(local_150.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_150,pFVar6);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_150,pFVar5);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_150,pFVar4);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_150);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableEvaluateNodeOperator::GetDefaultInterface(void)'
                ::__l2::DefaultInterface,&local_190,&local_170);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_190.SubInterfaces.AllocatorInstance.Data,
               local_190.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_190.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_190.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_190._padding_,(int)local_190._padding_);
    if ((FInputDataVertex *)local_190._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_190._padding_);
    }
    if ((0xc < (byte)local_b8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar7 = (FVertexInterface *)(*pcVar1)();
      return pFVar7;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_b8._48_1_])(&local_b8.field_0x20);
    if ((0xc < (byte)local_80._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar7 = (FVertexInterface *)(*pcVar1)();
      return pFVar7;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_80._48_1_])(&local_80.field_0x20);
    if ((0xc < local_18) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar7 = (FVertexInterface *)(*pcVar1)();
      return pFVar7;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_18])(local_28);
    if (local_128.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_128.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_128.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_128.Description.TextData.Reference + 0x10))();
    }
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_170.SubInterfaces.AllocatorInstance.Data,
               local_170.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_170.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_170.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_170._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_170._padding_);
    }
    atexit(`Metasound::FMetasoundWaveTableEvaluateNodeOperator::GetDefaultInterface'::__l2::
           _dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableEvaluateNodeOperator::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableEvaluateNodeOperator::GetDefaultInterface(void)'
          ::__l2::DefaultInterface;
}

// GetNodeInfo @ 14b3bdc20

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FMetasoundWaveTableEvaluateNodeOperator::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableEvaluateNodeOperator::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableEvaluateNodeOperator::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableEvaluateNodeOperator::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::FMetasoundWaveTableEvaluateNodeOperator::GetNodeInfo'::__l2::<lambda_1>::
      operator()(local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableEvaluateNodeOperator::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::FMetasoundWaveTableEvaluateNodeOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableEvaluateNodeOperator::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableEvaluateNodeOperator::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableEvaluateNodeOperator::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// Reset @ 14b3dada0

void __thiscall
Metasound::FMetasoundWaveTableEvaluateNodeOperator::Reset
          (FMetasoundWaveTableEvaluateNodeOperator *this,FResetParams *param_1)

{
  FWaveTableSampler *pFVar1;
  FSettings local_58;
  FWaveTableSampler local_40;
  
  local_58.Amplitude = 1.0;
  local_58.Offset = 0.0;
  local_58.Phase = 0.0;
  local_58.InterpolationMode = Linear;
  local_58.bOneShot = false;
  local_58.Freq = 0.0;
  pFVar1 = WaveTable::FWaveTableSampler::FWaveTableSampler(&local_40,&local_58);
  WaveTable::FWaveTableSampler::operator=(&this->Sampler,pFVar1);
  if (local_40.PhaseModScratch.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.PhaseModScratch.AllocatorInstance.Data);
  }
  **(undefined4 **)&(this->OutWriteRef).field_0x8 = 0;
  return;
}

