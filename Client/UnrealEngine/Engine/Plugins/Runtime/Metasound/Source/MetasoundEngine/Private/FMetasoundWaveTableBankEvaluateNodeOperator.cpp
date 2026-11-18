// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 10

// BindInputs @ 14b2c8320

void __thiscall
Metasound::FMetasoundWaveTableBankEvaluateNodeOperator::BindInputs
          (FMetasoundWaveTableBankEvaluateNodeOperator *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FWaveTableBankAsset> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<Metasound::FWaveTableBankAsset> **local_30;
  undefined1 local_28 [16];
  
  FLazyName::Resolve(&WaveTableBankEvaluateNode::WaveTableBankEval_BankParamName);
  local_res18 = &this->WaveTableBankReadRef;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FWaveTableBankAsset>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_28._8_8_ = local_48;
  local_48._0_8_ = &local_res8;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FWaveTableBankAsset>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_48._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_28,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  FLazyName::Resolve(&WaveTableBankEvaluateNode::WaveTableBankEval_InputParamName);
  local_res18 = (TDataReadReference<Metasound::FWaveTableBankAsset> *)&this->InputReadRef;
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
  FLazyName::Resolve(&WaveTableBankEvaluateNode::WaveTableBankEval_IndexParamName);
  local_res18 = (TDataReadReference<Metasound::FWaveTableBankAsset> *)&this->IndexReadRef;
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
  ::FName::FName(&local_res8,"Interpolation");
  local_res18 = (TDataReadReference<Metasound::FWaveTableBankAsset> *)&this->InterpModeReadRef;
  local_30 = &local_res18;
  local_48._8_8_ = local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_28._0_8_ = &local_res8;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  return;
}

// BindOutputs @ 14b2c84d0

void __thiscall
Metasound::FMetasoundWaveTableBankEvaluateNodeOperator::BindOutputs
          (FMetasoundWaveTableBankEvaluateNodeOperator *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<float> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<float> *local_30;
  code *local_28;
  TDataWriteReference<float> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  FLazyName::Resolve(&WaveTableBankEvaluateNode::WaveTableBankEval_OutParamName);
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

// FMetasoundWaveTableBankEvaluateNodeOperator @ 14b34a4d0

FMetasoundWaveTableBankEvaluateNodeOperator * __thiscall
Metasound::FMetasoundWaveTableBankEvaluateNodeOperator::FMetasoundWaveTableBankEvaluateNodeOperator
          (FMetasoundWaveTableBankEvaluateNodeOperator *this,FBuildOperatorParams *param_1,
          TDataReadReference<Metasound::FWaveTableBankAsset> *param_2,
          TDataReadReference<float> *param_3,TDataReadReference<float> *param_4,
          TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
          *param_5)

{
  longlong lVar1;
  FWaveTableSampler *pFVar2;
  FSettings local_58;
  FWaveTableSampler local_40;
  
  this->_padding_ = (longlong)&___7FMetasoundWaveTableBankEvaluateNodeOperator_Metasound__6B_;
  *(undefined ***)&this->WaveTableBankReadRef =
       &___7__TDataReference_VFWaveTableBankAsset_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->WaveTableBankReadRef).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar1 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->WaveTableBankReadRef).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->WaveTableBankReadRef =
       &___7__TDataReadReference_VFWaveTableBankAsset_Metasound___Metasound__6B_;
  *(undefined ***)&this->InputReadRef = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->InputReadRef).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar1 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->InputReadRef).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->InputReadRef = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->IndexReadRef = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->IndexReadRef).field_0x8 = *(undefined8 *)&param_4->field_0x8;
  lVar1 = *(longlong *)&param_4->field_0x10;
  *(longlong *)&(this->IndexReadRef).field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)&this->IndexReadRef = &___7__TDataReadReference_M_Metasound__6B_;
  *(undefined ***)&this->InterpModeReadRef =
       &
       ___7__TDataReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
  ;
  *(undefined8 *)&(this->InterpModeReadRef).field_0x8 = *(undefined8 *)&param_5->field_0x8;
  lVar1 = *(longlong *)&param_5->field_0x10;
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
  (this->CachedState).InterpolationMode = COUNT;
  (this->CachedState).Index = 3.4028235e+38;
  (this->CachedState).Input = 3.4028235e+38;
  (this->CachedState).Value = 3.4028235e+38;
  local_58.Phase = 0.0;
  local_58.InterpolationMode = Linear;
  local_58.bOneShot = false;
  local_58.Freq = 0.0;
  pFVar2 = WaveTable::FWaveTableSampler::FWaveTableSampler(&local_40,&local_58);
  WaveTable::FWaveTableSampler::operator=(&this->Sampler,pFVar2);
  if (local_40.PhaseModScratch.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.PhaseModScratch.AllocatorInstance.Data);
  }
  (this->CachedState).InterpolationMode = COUNT;
  (this->CachedState).Index = 3.4028235e+38;
  (this->CachedState).Input = 3.4028235e+38;
  (this->CachedState).Value = 3.4028235e+38;
  **(undefined4 **)&(this->OutWriteRef).field_0x8 = 0;
  return this;
}

// ~FMetasoundWaveTableBankEvaluateNodeOperator @ 14b351c30

void __thiscall
Metasound::FMetasoundWaveTableBankEvaluateNodeOperator::~FMetasoundWaveTableBankEvaluateNodeOperator
          (FMetasoundWaveTableBankEvaluateNodeOperator *this)

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
            (*(TReferenceControllerBase<0> **)&(this->IndexReadRef).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InputReadRef).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->WaveTableBankReadRef).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// operator() @ 14b358300

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::FMetasoundWaveTableBankEvaluateNodeOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
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
  pFVar3 = Metasound::FMetasoundWaveTableBankEvaluateNodeOperator::GetDefaultInterface();
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
                      L"MetasoundWaveTableBankEvaluateNode_Description",
                      L"Evaluates a WaveTableBank\'s given entires for a given input value, linearly interpolating inline between using the provided index. More performant than using \'WaveTableGet\' and using the \'WaveTableEvaluate\' nodes as no resulting WaveTable is generated any time the input float index is changed."
                     );
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_b8,L"MetasoundStandardNodes",L"MetasoundWaveTableBankEvaluateNode_Name"
                      ,L"Evaluate WaveTableBank");
  ::FName::FName(&local_res20,"WaveTableBankEvaluate");
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

// CreateOperator @ 14b387ff0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::FMetasoundWaveTableBankEvaluateNodeOperator::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  FMetasoundWaveTableBankEvaluateNodeOperator *this_00;
  FMetasoundWaveTableBankEvaluateNodeOperator *pFVar2;
  FName local_res8;
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  undefined1 local_28 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  ::FName::FName(&local_res8,"WaveTableBank");
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FWaveTableBankAsset>
            (this,(TDataReadReference<Metasound::FWaveTableBankAsset> *)local_28,&local_res8,pFVar1)
  ;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  ::FName::FName(&local_res8,"Input");
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_48,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  ::FName::FName(&local_res8,"Index");
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_68,&local_res8,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  ::FName::FName(&local_res8,"Interpolation");
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
            (this,(TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                   *)local_88,&local_res8,pFVar1);
  this_00 = ::operator_new(0xf0);
  pFVar2 = (FMetasoundWaveTableBankEvaluateNodeOperator *)0x0;
  if (this_00 != (FMetasoundWaveTableBankEvaluateNodeOperator *)0x0) {
    pFVar2 = FMetasoundWaveTableBankEvaluateNodeOperator
                       (this_00,(FBuildOperatorParams *)param_2,
                        (TDataReadReference<Metasound::FWaveTableBankAsset> *)local_28,
                        (TDataReadReference<float> *)local_48,(TDataReadReference<float> *)local_68,
                        (TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                         *)local_88);
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

// Execute @ 14b39fbc0

void __thiscall
Metasound::FMetasoundWaveTableBankEvaluateNodeOperator::Execute
          (FMetasoundWaveTableBankEvaluateNodeOperator *this)

{
  FWaveTableSampler *this_00;
  EInterpolationMode EVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  float *pfVar4;
  code *pcVar5;
  float fVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  undefined4 extraout_EAX;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float local_res8 [2];
  float local_res10 [2];
  
  plVar11 = *(longlong **)&(this->WaveTableBankReadRef).field_0x8;
  pTVar2 = (TReferenceControllerBase<1> *)plVar11[1];
  lVar3 = *plVar11;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((longlong *)*plVar11 == (longlong *)0x0) {
    **(undefined4 **)&(this->OutWriteRef).field_0x8 = 0;
  }
  else {
    cVar7 = (**(code **)(*(longlong *)*plVar11 + 0x28))();
    fVar6 = __real_3f800000;
    fVar18 = 0.0;
    if (cVar7 != '\0') {
      fVar18 = __real_bf800000;
    }
    fVar15 = **(float **)&(this->InputReadRef).field_0x8;
    if (__real_3f800000 <= fVar15) {
      fVar15 = __real_3f800000;
    }
    if (fVar15 <= fVar18) {
      fVar15 = fVar18;
    }
    if (lVar3 == 0) {
      (this->CachedState).InterpolationMode = COUNT;
      (this->CachedState).Index = 3.4028235e+38;
      (this->CachedState).Input = 3.4028235e+38;
      (this->CachedState).Value = 3.4028235e+38;
      **(undefined4 **)&(this->OutWriteRef).field_0x8 = 0;
    }
    else {
      fVar18 = **(float **)&(this->IndexReadRef).field_0x8;
      EVar1 = **(EInterpolationMode **)&(this->InterpModeReadRef).field_0x8;
      if ((((this->CachedState).InterpolationMode != EVar1) ||
          (__real_322bcc77 <
           (float)((uint)(fVar18 - (this->CachedState).Index) &
                  __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
         (__real_322bcc77 <
          (float)((uint)(fVar15 - (this->CachedState).Input) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff))) {
        this_00 = &this->Sampler;
        WaveTable::FWaveTableSampler::SetInterpolationMode(this_00,EVar1);
        fVar18 = (float)((uint)fVar18 & __xmm_7fffffff7fffffff7fffffff7fffffff);
        (this->CachedState).Index = fVar18;
        (this->CachedState).Input = fVar15;
        (this->CachedState).InterpolationMode = EVar1;
        plVar11 = (longlong *)(**(code **)(*(longlong *)*plVar11 + 0x20))();
        iVar12 = (int)plVar11[1];
        iVar9 = (int)ROUND((fVar18 + fVar18) - __real_3f000000);
        uVar13 = (uint)(CONCAT44(iVar9 >> 0x1f,iVar9 >> 1) % (longlong)iVar12);
        uVar14 = -((int)ROUND(__real_bf000000 - (fVar18 + fVar18)) >> 1) % iVar12;
        uVar10 = 0;
        if ((int)uVar13 < iVar12) {
          uVar10 = ~uVar13 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar3 = *plVar11;
        local_res8[0] = 0.0;
        WaveTable::FWaveTableSampler::Reset(this_00);
        WaveTable::FWaveTableSampler::SetPhase(this_00,fVar15);
        WaveTable::FWaveTableSampler::Process
                  (this_00,(FWaveTableData *)((longlong)(int)uVar13 * 0x20 + lVar3),local_res8,Hold)
        ;
        fVar17 = local_res8[0];
        if (uVar13 != uVar14) {
          uVar10 = 0;
          if ((int)uVar14 < (int)plVar11[1]) {
            uVar10 = ~uVar14 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_res10[0] = 0.0;
          lVar3 = *plVar11;
          WaveTable::FWaveTableSampler::Reset(this_00);
          WaveTable::FWaveTableSampler::SetPhase(this_00,fVar15);
          WaveTable::FWaveTableSampler::Process
                    (this_00,(FWaveTableData *)((longlong)(int)uVar14 * 0x20 + lVar3),local_res10,
                     Hold);
          iVar12 = (int)fVar18;
          fVar15 = fVar18;
          if ((iVar12 != -0x80000000) && ((float)iVar12 != fVar18)) {
            auVar16._4_4_ = fVar18;
            auVar16._0_4_ = fVar18;
            auVar16._8_8_ = 0;
            uVar10 = movmskps(extraout_EAX,auVar16);
            fVar15 = (float)(int)(iVar12 - (uVar10 & 1));
          }
          fVar17 = (fVar6 - (fVar18 - fVar15)) * local_res8[0] + (fVar18 - fVar15) * local_res10[0];
        }
        pfVar4 = *(float **)&(this->OutWriteRef).field_0x8;
        (this->CachedState).Value = fVar17;
        *pfVar4 = fVar17;
      }
      else {
        **(float **)&(this->OutWriteRef).field_0x8 = (this->CachedState).Value;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// GetDefaultInterface @ 14b3b1d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::FMetasoundWaveTableBankEvaluateNodeOperator::GetDefaultInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<float> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FVertexInterface *pFVar8;
  undefined1 auStackY_208 [32];
  int local_1d8;
  float local_1d4;
  float local_1d0 [2];
  FInputVertexInterface local_1c8;
  FOutputVertexInterface local_1a8;
  FInputVertexInterfaceDeclarationBuilder local_188;
  FDataVertexMetadata local_160;
  FOutputVertexInterfaceDeclarationBuilder local_138;
  TOutputDataVertex<float> local_110;
  TInputDataVertex<Metasound::FWaveTableBankAsset> local_f0;
  TInputDataVertex<float> local_b8;
  TInputDataVertex<float> local_80;
  undefined1 local_48 [32];
  undefined1 local_28 [16];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_208;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableBankEvaluateNodeOperator::GetDefaultInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableBankEvaluateNodeOperator::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableBankEvaluateNodeOperator::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pTVar3 = TOutputDataVertex<float>::TOutputDataVertex<float><>
                       (&local_110,&WaveTableBankEvaluateNode::WaveTableBankEval_OutParamName,
                        &FDataVertexMetadata::EmptyBasic);
    FOutputVertexInterface::FOutputVertexInterface(&local_1a8);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_138,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_1a8,
               &local_1a8.SubInterfaces);
    if ((local_138.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,&(local_138.Vertices)->AllocatorInstance,(local_138.Vertices)->ArrayNum,
                 &(local_138.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_138,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_138);
    local_1d8 = 1;
    FText::AsLocalizable_Advanced_LocText
              (&local_160.Description,L"MetasoundStandardNodes",
               L"MetasoundWaveTableBankEvaluateNode_InterpDescription",
               L"How interpolation occurs between WaveTable values.");
    FText::AsLocalizable_Advanced_LocText
              (&local_160.DisplayName,L"MetasoundStandardNodes",
               L"MetasoundWaveTableBankEvaluateNode_Interp",L"Interpolation");
    local_160.bIsAdvancedDisplay = true;
    pFVar4 = (FInputDataVertex *)
             TInputDataVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
             ::
             TInputDataVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_><int>
                       (local_48,"Interpolation",&local_160,&local_1d8);
    local_1d4 = 0.0;
    pFVar5 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_80,&WaveTableBankEvaluateNode::WaveTableBankEval_IndexParamName,
                        &FDataVertexMetadata::EmptyBasic,&local_1d4);
    local_1d0[0] = 0.0;
    pFVar6 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_b8,&WaveTableBankEvaluateNode::WaveTableBankEval_InputParamName,
                        &FDataVertexMetadata::EmptyBasic,local_1d0);
    pFVar7 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FWaveTableBankAsset>::
             TInputDataVertex<Metasound::FWaveTableBankAsset><>
                       (&local_f0,&WaveTableBankEvaluateNode::WaveTableBankEval_BankParamName,
                        &FDataVertexMetadata::EmptyBasic);
    local_1c8._padding_ = 0;
    local_1c8._padding_ = 0;
    local_1c8.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c8.SubInterfaces.ArrayNum = 0;
    local_1c8.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_188,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_1c8,
               &local_1c8.SubInterfaces);
    if ((local_188.Vertices)->ArrayMax < 4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,4,&(local_188.Vertices)->AllocatorInstance,(local_188.Vertices)->ArrayNum,
                 &(local_188.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_188,pFVar7);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_188,pFVar6);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_188,pFVar5);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_188,pFVar4);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_188);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableBankEvaluateNodeOperator::GetDefaultInterface(void)'
                ::__l2::DefaultInterface,&local_1c8,&local_1a8);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_1c8.SubInterfaces.AllocatorInstance.Data,
               local_1c8.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_1c8.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_1c8.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_1c8._padding_,(int)local_1c8._padding_);
    if ((FInputDataVertex *)local_1c8._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_1c8._padding_);
    }
    if ((0xc < (byte)local_f0._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_f0._48_1_])(&local_f0.field_0x20);
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
    if ((0xc < local_18) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FVertexInterface *)(*pcVar1)();
      return pFVar8;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_18])(local_28);
    if (local_160.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_160.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_160.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_160.Description.TextData.Reference + 0x10))();
    }
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_1a8.SubInterfaces.AllocatorInstance.Data,
               local_1a8.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_1a8.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_1a8.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_1a8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_1a8._padding_);
    }
    atexit(`Metasound::FMetasoundWaveTableBankEvaluateNodeOperator::GetDefaultInterface'::__l2::
           _dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableBankEvaluateNodeOperator::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableBankEvaluateNodeOperator::GetDefaultInterface(void)'
          ::__l2::DefaultInterface;
}

// GetNodeInfo @ 14b3bdb00

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl
Metasound::FMetasoundWaveTableBankEvaluateNodeOperator::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableBankEvaluateNodeOperator::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableBankEvaluateNodeOperator::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableBankEvaluateNodeOperator::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::FMetasoundWaveTableBankEvaluateNodeOperator::GetNodeInfo'::__l2::<lambda_1>::
      operator()(local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableBankEvaluateNodeOperator::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::FMetasoundWaveTableBankEvaluateNodeOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableBankEvaluateNodeOperator::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableBankEvaluateNodeOperator::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableBankEvaluateNodeOperator::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// Reset @ 14b3daba0

void __thiscall
Metasound::FMetasoundWaveTableBankEvaluateNodeOperator::Reset
          (FMetasoundWaveTableBankEvaluateNodeOperator *this,FResetParams *param_1)

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
  (this->CachedState).InterpolationMode = COUNT;
  (this->CachedState).Index = 3.4028235e+38;
  (this->CachedState).Input = 3.4028235e+38;
  (this->CachedState).Value = 3.4028235e+38;
  **(undefined4 **)&(this->OutWriteRef).field_0x8 = 0;
  return;
}

