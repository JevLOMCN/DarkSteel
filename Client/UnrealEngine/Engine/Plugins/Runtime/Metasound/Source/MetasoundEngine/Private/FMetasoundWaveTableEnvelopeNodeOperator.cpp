// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 9

// BindInputs @ 14b2f23e0

void __thiscall
Metasound::FMetasoundWaveTableEnvelopeNodeOperator::BindInputs
          (FMetasoundWaveTableEnvelopeNodeOperator *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<WaveTable::FWaveTable> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TDataReadReference<WaveTable::FWaveTable> **local_30;
  undefined1 local_28 [16];
  
  ::FName::FName(&local_res8,"WaveTable");
  local_res18 = &this->WaveTableReadRef;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<WaveTable::FWaveTable>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_28._8_8_ = local_48;
  local_48._0_8_ = &local_res8;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<WaveTable::FWaveTable>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_48._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_28,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  ::FName::FName(&local_res8,"Play");
  local_res18 = (TDataReadReference<WaveTable::FWaveTable> *)&this->PlayReadRef;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  ::FName::FName(&local_res8,"Stop");
  local_res18 = (TDataReadReference<WaveTable::FWaveTable> *)&this->StopReadRef;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  ::FName::FName(&local_res8,"Pause");
  local_res18 = (TDataReadReference<WaveTable::FWaveTable> *)&this->PauseReadRef;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_30 = &local_res18;
  local_28._0_8_ = &local_res8;
  local_48._8_8_ = local_28;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  ::FName::FName(&local_res8,"Duration");
  local_res18 = (TDataReadReference<WaveTable::FWaveTable> *)&this->DurationReadRef;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FTime>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
  local_28._0_8_ = &local_res8;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FTime>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  ::FName::FName(&local_res8,"Mode");
  local_res18 = (TDataReadReference<WaveTable::FWaveTable> *)&this->ModeReadRef;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
  local_28._0_8_ = &local_res8;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_38)
  ;
  ::FName::FName(&local_res8,"Interpolation");
  local_res18 = (TDataReadReference<WaveTable::FWaveTable> *)&this->InterpModeReadRef;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
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

// BindOutputs @ 14b2f2780

void __thiscall
Metasound::FMetasoundWaveTableEnvelopeNodeOperator::BindOutputs
          (FMetasoundWaveTableEnvelopeNodeOperator *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FTrigger> *local_res18;
  undefined1 local_38 [16];
  code *local_28;
  TDataWriteReference<Metasound::FTrigger> **local_20;
  undefined1 local_18 [16];
  
  ::FName::FName(&local_res8,"OnFinished");
  local_res18 = &this->OnFinishedWriteRef;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  ::FName::FName(&local_res8,"Out");
  local_res18 = (TDataWriteReference<Metasound::FTrigger> *)&this->OutWriteRef;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<float>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// ~FMetasoundWaveTableEnvelopeNodeOperator @ 14b351c90

void __thiscall
Metasound::FMetasoundWaveTableEnvelopeNodeOperator::~FMetasoundWaveTableEnvelopeNodeOperator
          (FMetasoundWaveTableEnvelopeNodeOperator *this)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutWriteRef).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OnFinishedWriteRef).field_0x10);
  pFVar1 = (this->Sampler).PhaseModScratch.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->InterpModeReadRef).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->ModeReadRef).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->DurationReadRef).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->PauseReadRef).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->StopReadRef).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->PlayReadRef).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->WaveTableReadRef).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// operator() @ 14b358600

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::FMetasoundWaveTableEnvelopeNodeOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
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
  local_e8.TextData.Reference = Metasound::NodeCategories::Generators.TextData.Reference;
  if (Metasound::NodeCategories::Generators.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::Generators.TextData.Reference + 8))
              (Metasound::NodeCategories::Generators.TextData.Reference,local_res10);
  }
  local_e8.Flags = Metasound::NodeCategories::Generators.Flags;
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
  pFVar3 = Metasound::FMetasoundWaveTableEnvelopeNodeOperator::GetDefaultInterface();
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
                      L"MetasoundWaveTableEnvelopeNode_Description",
                      L"Reads through the given WaveTable over the given duration.");
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_b8,L"MetasoundStandardNodes",L"MetasoundWaveTableEnvelopeNode_Name",
                      L"WaveTable Envelope");
  ::FName::FName(&local_res20,"WaveTableEnvelope");
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

// CreateOperator @ 14b388160

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::FMetasoundWaveTableEnvelopeNodeOperator::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  int iVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  FGraphRenderCost *pFVar3;
  FMetasoundWaveTableEnvelopeNodeOperator *this_00;
  FName local_res20;
  undefined1 local_118 [16];
  FGraphRenderCost *local_108;
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  ::FName::FName(&local_res20,"WaveTable");
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<WaveTable::FWaveTable>
            (this,(TDataReadReference<WaveTable::FWaveTable> *)local_118,&local_res20,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  ::FName::FName(&local_res20,"Play");
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_b8,&local_res20,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  ::FName::FName(&local_res20,"Stop");
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_d8,&local_res20,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  ::FName::FName(&local_res20,"Pause");
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_f8,&local_res20,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  ::FName::FName(&local_res20,"Duration");
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTime>
            (this,(TDataReadReference<Metasound::FTime> *)local_98,&local_res20,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  ::FName::FName(&local_res20,"Mode");
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
            (this,(TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
                   *)local_78,&local_res20,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  ::FName::FName(&local_res20,"Interpolation");
  FInputVertexInterfaceData::
  GetOrCreateDefaultDataReadReference<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
            (this,(TDataReadReference<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
                   *)local_58,&local_res20,pFVar2);
  this_00 = ::operator_new(0x178);
  pFVar3 = local_108;
  if (this_00 == (FMetasoundWaveTableEnvelopeNodeOperator *)0x0) {
    this_00 = (FMetasoundWaveTableEnvelopeNodeOperator *)0x0;
  }
  else {
    this_00->_padding_ = (longlong)&___7FMetasoundWaveTableEnvelopeNodeOperator_Metasound__6B_;
    *(undefined ***)&this_00->WaveTableReadRef =
         &___7__TDataReference_UFWaveTable_WaveTable___Metasound__6B_;
    *(undefined8 *)&(this_00->WaveTableReadRef).field_0x8 = local_118._8_8_;
    *(FGraphRenderCost **)&(this_00->WaveTableReadRef).field_0x10 = local_108;
    if (local_108 != (FGraphRenderCost *)0x0) {
      *(int *)&local_108->_padding_ = (int)local_108->_padding_ + 1;
    }
    *(undefined ***)&this_00->WaveTableReadRef =
         &___7__TDataReadReference_UFWaveTable_WaveTable___Metasound__6B_;
    *(undefined ***)&this_00->PlayReadRef =
         &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined8 *)&(this_00->PlayReadRef).field_0x8 = local_b8._8_8_;
    *(undefined8 *)&(this_00->PlayReadRef).field_0x10 = local_b8._16_8_;
    if ((TReferenceControllerBase<0> *)local_b8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_b8._16_8_ + 8) = *(int *)(local_b8._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->PlayReadRef =
         &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined ***)&this_00->StopReadRef =
         &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined8 *)&(this_00->StopReadRef).field_0x8 = local_d8._8_8_;
    *(undefined8 *)&(this_00->StopReadRef).field_0x10 = local_d8._16_8_;
    if ((TReferenceControllerBase<0> *)local_d8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_d8._16_8_ + 8) = *(int *)(local_d8._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->StopReadRef =
         &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined ***)&this_00->PauseReadRef =
         &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined8 *)&(this_00->PauseReadRef).field_0x8 = local_f8._8_8_;
    *(undefined8 *)&(this_00->PauseReadRef).field_0x10 = local_f8._16_8_;
    if ((TReferenceControllerBase<0> *)local_f8._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_f8._16_8_ + 8) = *(int *)(local_f8._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->PauseReadRef =
         &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined ***)&this_00->DurationReadRef =
         &___7__TDataReference_VFTime_Metasound___Metasound__6B_;
    *(undefined8 *)&(this_00->DurationReadRef).field_0x8 = local_98._8_8_;
    *(undefined8 *)&(this_00->DurationReadRef).field_0x10 = local_98._16_8_;
    if ((TReferenceControllerBase<0> *)local_98._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_98._16_8_ + 8) = *(int *)(local_98._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->DurationReadRef =
         &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
    *(undefined ***)&this_00->ModeReadRef =
         &
         ___7__TDataReference_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
    ;
    *(undefined8 *)&(this_00->ModeReadRef).field_0x8 = local_78._8_8_;
    *(undefined8 *)&(this_00->ModeReadRef).field_0x10 = local_78._16_8_;
    if ((TReferenceControllerBase<0> *)local_78._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_78._16_8_ + 8) = *(int *)(local_78._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->ModeReadRef =
         &
         ___7__TDataReadReference_V__TEnum_W4ESingleSampleMode_FWaveTableSampler_WaveTable___0A__Metasound___Metasound__6B_
    ;
    *(undefined ***)&this_00->InterpModeReadRef =
         &
         ___7__TDataReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
    ;
    *(undefined8 *)&(this_00->InterpModeReadRef).field_0x8 = local_58._8_8_;
    *(undefined8 *)&(this_00->InterpModeReadRef).field_0x10 = local_58._16_8_;
    if ((TReferenceControllerBase<0> *)local_58._16_8_ != (TReferenceControllerBase<0> *)0x0) {
      *(int *)(local_58._16_8_ + 8) = *(int *)(local_58._16_8_ + 8) + 1;
    }
    *(undefined ***)&this_00->InterpModeReadRef =
         &
         ___7__TDataReadReference_V__TEnum_W4EInterpolationMode_FWaveTableSampler_WaveTable___00_Metasound___Metasound__6B_
    ;
    WaveTable::FWaveTableSampler::FWaveTableSampler(&this_00->Sampler);
    TDataReference<Metasound::FTrigger>::
    TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FTrigger> *)&this_00->OnFinishedWriteRef,NewObject,
               *(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    *(undefined ***)&this_00->OnFinishedWriteRef =
         &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
    TDataReference<float>::TDataReference<float><>
              ((TDataReference<float> *)&this_00->OutWriteRef,NewObject);
    *(undefined ***)&this_00->OutWriteRef = &___7__TDataWriteReference_M_Metasound__6B_;
    this_00->BlockSize = 0;
    this_00->SecondsPerBlock = 0.0;
    iVar1 = **(int **)&(param_2->Errors).ArrayNum;
    this_00->Elapsed = -1.0;
    this_00->bPaused = false;
    this_00->SampleRate = (float)iVar1;
    local_118._0_8_ = *(undefined8 *)&(param_2->Errors).ArrayNum;
    local_118._8_8_ = *(undefined8 *)&(param_2->InternalDataReferences).field_0x8;
    local_108 = *(FGraphRenderCost **)&(param_2->InternalDataReferences).field_0x18;
    Reset(this_00,(FResetParams *)local_118);
  }
  param_1->Node = (INode *)this_00;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_58._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_78._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_98._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_f8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_d8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_b8._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)pFVar3);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// Execute @ 14b39ff30

void __thiscall
Metasound::FMetasoundWaveTableEnvelopeNodeOperator::Execute
          (FMetasoundWaveTableEnvelopeNodeOperator *this)

{
  longlong lVar1;
  bool bVar2;
  ESingleSampleMode EVar3;
  longlong *plVar4;
  longlong lVar5;
  FTrigger *pFVar6;
  bool bVar7;
  FWaveTableView *pFVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  float fVar16;
  double dVar17;
  float fVar18;
  float local_res8 [4];
  FWaveTableView local_68;
  FWaveTableView local_50 [2];
  
  bVar7 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar7) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"FMetasoundWaveTableEnvelopeNodeOperator::Execute");
  }
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Metasound::FMetasoundWaveTableEnvelopeNodeOperator::Execute(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId185,
               "FMetasoundWaveTableEnvelopeNodeOperator::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundWaveTableEnvelopeNode.cpp"
               ,0xb9);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Metasound::FMetasoundWaveTableEnvelopeNodeOperator::Execute(void)___ptr64'
               ::__l2::__CpuProfilerEventSpecId185);
  }
  dVar17 = **(double **)&(this->DurationReadRef).field_0x8;
  if (dVar17 <= (double)this->SecondsPerBlock) {
    dVar17 = (double)this->SecondsPerBlock;
  }
  EVar3 = **(ESingleSampleMode **)&(this->ModeReadRef).field_0x8;
  fVar18 = (float)dVar17;
  FTrigger::AdvanceBlock(*(FTrigger **)&(this->OnFinishedWriteRef).field_0x8);
  if (this->bPaused != false) {
    local_res8[0] = **(float **)&(this->OutWriteRef).field_0x8;
    goto LAB_14b3a003c;
  }
  if (EVar3 != Zero) {
    local_res8[0] = __real_3f800000;
    if (EVar3 == Unit) goto LAB_14b3a003c;
    if (EVar3 == Hold) {
      pFVar8 = WaveTable::FWaveTable::GetView
                         (*(FWaveTable **)&(this->WaveTableReadRef).field_0x8,local_50);
      local_res8[0] = pFVar8->FinalValue;
      goto LAB_14b3a003c;
    }
  }
  local_res8[0] = 0.0;
LAB_14b3a003c:
  plVar4 = *(longlong **)&(this->PlayReadRef).field_0x8;
  iVar12 = -1;
  iVar11 = -1;
  iVar13 = *(int *)((longlong)plVar4 + 0x1c);
  iVar14 = iVar11;
  if (0 < iVar13) {
    lVar5 = *plVar4;
    lVar1 = (longlong)iVar13 + -1;
    iVar13 = iVar11;
    if (0 < lVar1) {
      lVar9 = 0;
      do {
        iVar14 = *(int *)(lVar5 + lVar9 * 4);
        if (iVar14 < iVar13) {
          iVar14 = iVar13;
        }
        iVar13 = iVar14;
        lVar9 = lVar9 + 1;
      } while (lVar9 < lVar1);
    }
    iVar14 = *(int *)(lVar5 + lVar1 * 4);
    if (iVar14 < iVar13) {
      iVar14 = iVar13;
    }
  }
  plVar4 = *(longlong **)&(this->StopReadRef).field_0x8;
  iVar13 = *(int *)((longlong)plVar4 + 0x1c);
  iVar10 = iVar11;
  if (0 < iVar13) {
    lVar5 = *plVar4;
    lVar1 = (longlong)iVar13 + -1;
    if (0 < lVar1) {
      lVar9 = 0;
      do {
        iVar13 = *(int *)(lVar5 + lVar9 * 4);
        if (iVar13 < iVar11) {
          iVar13 = iVar11;
        }
        iVar11 = iVar13;
        lVar9 = lVar9 + 1;
      } while (lVar9 < lVar1);
    }
    iVar10 = *(int *)(lVar5 + lVar1 * 4);
    if (iVar10 < iVar11) {
      iVar10 = iVar11;
    }
  }
  plVar4 = *(longlong **)&(this->PauseReadRef).field_0x8;
  iVar13 = *(int *)((longlong)plVar4 + 0x1c);
  iVar11 = iVar12;
  if (0 < iVar13) {
    lVar5 = *plVar4;
    lVar1 = (longlong)iVar13 + -1;
    if (0 < lVar1) {
      lVar9 = 0;
      do {
        iVar13 = *(int *)(lVar5 + lVar9 * 4);
        if (iVar13 < iVar12) {
          iVar13 = iVar12;
        }
        iVar12 = iVar13;
        lVar9 = lVar9 + 1;
      } while (lVar9 < lVar1);
    }
    iVar11 = *(int *)(lVar5 + lVar1 * 4);
    if (iVar11 < iVar12) {
      iVar11 = iVar12;
    }
  }
  if ((iVar14 < 0) && (iVar10 < 0)) {
    if (((-1 < iVar11) && (0.0 < this->Elapsed || this->Elapsed == 0.0)) &&
       (bVar2 = this->bPaused, this->bPaused = bVar2 == false, bVar2 == false)) {
      local_res8[0] = **(float **)&(this->OutWriteRef).field_0x8;
    }
  }
  else if (iVar10 < iVar14) {
    this->Elapsed = 0.0;
    this->bPaused = iVar14 < iVar11;
  }
  else {
    if (0.0 < this->Elapsed || this->Elapsed == 0.0) {
      pFVar6 = *(FTrigger **)&(this->OnFinishedWriteRef).field_0x8;
      this->Elapsed = -1.0;
      FTrigger::TriggerFrame(pFVar6,iVar10);
    }
    this->bPaused = false;
  }
  WaveTable::FWaveTable::GetView(*(FWaveTable **)&(this->WaveTableReadRef).field_0x8,&local_68);
  fVar16 = this->Elapsed;
  if (local_68.SampleView.ArrayNum == 0) {
    if (0.0 <= fVar16) {
      pFVar6 = *(FTrigger **)&(this->OnFinishedWriteRef).field_0x8;
      this->Elapsed = -1.0;
      FTrigger::TriggerFrame(pFVar6,0);
      fVar16 = this->Elapsed;
      this->bPaused = false;
    }
  }
  else if ((0.0 <= fVar16) && (this->bPaused == false)) {
    if (0.0 < fVar18) {
      WaveTable::FWaveTableSampler::Reset(&this->Sampler);
      WaveTable::FWaveTableSampler::SetInterpolationMode
                (&this->Sampler,**(EInterpolationMode **)&(this->InterpModeReadRef).field_0x8);
      fVar16 = this->Elapsed / fVar18;
      if (__real_3f800000 <= fVar16) {
        fVar16 = __real_3f800000;
      }
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      WaveTable::FWaveTableSampler::SetPhase(&this->Sampler,fVar16);
      WaveTable::FWaveTableSampler::Process(&this->Sampler,&local_68,local_res8,EVar3);
    }
    fVar16 = this->Elapsed + this->SecondsPerBlock;
    this->Elapsed = fVar16;
  }
  if (fVar18 < fVar16) {
    if (EVar3 == Loop) {
      do {
        fVar16 = fVar16 - fVar18;
      } while (fVar18 <= fVar16);
      this->Elapsed = fVar16;
    }
    else {
      this->Elapsed = -1.0;
      fVar16 = fVar16 - fVar18;
    }
    FTrigger::TriggerFrame
              (*(FTrigger **)&(this->OnFinishedWriteRef).field_0x8,
               (int)(fVar16 * this->SampleRate) % this->BlockSize);
  }
  **(float **)&(this->OutWriteRef).field_0x8 = local_res8[0];
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

// GetDefaultInterface @ 14b3b2180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::FMetasoundWaveTableEnvelopeNodeOperator::GetDefaultInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<float> *pTVar3;
  TOutputDataVertex<Metasound::FTrigger> *pTVar4;
  FInputDataVertex *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FInputDataVertex *pFVar8;
  FInputDataVertex *pFVar9;
  FInputDataVertex *pFVar10;
  FInputDataVertex *pFVar11;
  FVertexInterface *pFVar12;
  undefined1 auStackY_438 [32];
  int local_408 [2];
  float local_400 [2];
  FInputVertexInterface local_3f8;
  FOutputVertexInterface local_3d8;
  FInputVertexInterfaceDeclarationBuilder local_3b8;
  FDataVertexMetadata local_390;
  FDataVertexMetadata local_368;
  FDataVertexMetadata local_340;
  FDataVertexMetadata local_318;
  FDataVertexMetadata local_2f0;
  FDataVertexMetadata local_2c8;
  FDataVertexMetadata local_2a0;
  FDataVertexMetadata local_278;
  FDataVertexMetadata local_250;
  FOutputVertexInterfaceDeclarationBuilder local_228;
  TOutputDataVertex<float> local_200;
  TOutputDataVertex<Metasound::FTrigger> local_1e0;
  TInputDataVertex<WaveTable::FWaveTable> local_1c0;
  TInputDataVertex<Metasound::FTrigger> local_188;
  TInputDataVertex<Metasound::FTrigger> local_150;
  TInputDataVertex<Metasound::FTrigger> local_118;
  TInputDataVertex<Metasound::FTime> local_e0;
  undefined1 local_a8 [32];
  undefined1 local_88 [16];
  byte local_78;
  undefined1 local_70 [32];
  undefined1 local_50 [16];
  byte local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_438;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableEnvelopeNodeOperator::GetDefaultInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableEnvelopeNodeOperator::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableEnvelopeNodeOperator::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FText::AsLocalizable_Advanced_LocText
              (&local_250.Description,L"MetasoundStandardNodes",
               L"MetasoundWaveTableEnvelopeNode_Output",L"Out");
    FText::FText(&local_250.DisplayName);
    local_250.bIsAdvancedDisplay = false;
    pTVar3 = TOutputDataVertex<float>::TOutputDataVertex<float><>(&local_200,"Out",&local_250);
    FText::AsLocalizable_Advanced_LocText
              (&local_278.Description,L"MetasoundStandardNodes",
               L"MetasoundWaveTableEnvelopeNode_OnFinished",L"OnFinished");
    FText::FText(&local_278.DisplayName);
    local_278.bIsAdvancedDisplay = false;
    pTVar4 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_1e0,"OnFinished",&local_278);
    FOutputVertexInterface::FOutputVertexInterface(&local_3d8);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_228,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_3d8,
               &local_3d8.SubInterfaces);
    if ((local_228.Vertices)->ArrayMax < 2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,&(local_228.Vertices)->AllocatorInstance,(local_228.Vertices)->ArrayNum,
                 &(local_228.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_228,(FOutputDataVertex *)pTVar4);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_228,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_228);
    local_408[0] = 1;
    FText::AsLocalizable_Advanced_LocText
              (&local_2a0.Description,L"MetasoundStandardNodes",
               L"MetasoundWaveTableEnvelopeNode_InterpDescription",
               L"How the envelope interpolates between WaveTable values.");
    FText::AsLocalizable_Advanced_LocText
              (&local_2a0.DisplayName,L"MetasoundStandardNodes",
               L"MetasoundWaveTableEnvelopeNode_Interp",L"Interpolation");
    local_2a0.bIsAdvancedDisplay = true;
    pFVar5 = (FInputDataVertex *)
             TInputDataVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
             ::
             TInputDataVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_><int>
                       (local_70,"Interpolation",&local_2a0,local_408);
    local_408[1] = 0;
    FText::AsLocalizable_Advanced_LocText
              (&local_2c8.Description,L"MetasoundStandardNodes",
               L"MetasoundWaveTableEnvelopeNode_ModeDescription",
               L"What value the envelope completes on (or whether it loops).");
    FText::AsLocalizable_Advanced_LocText
              (&local_2c8.DisplayName,L"MetasoundStandardNodes",
               L"MetasoundWaveTableEnvelopeNode_Mode",L"Mode");
    local_2c8.bIsAdvancedDisplay = true;
    pFVar6 = (FInputDataVertex *)
             TInputDataVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
             ::
             TInputDataVertex<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_><int>
                       (local_a8,"Mode",&local_2c8,local_408 + 1);
    local_400[0] = 1.0;
    FText::AsLocalizable_Advanced_LocText
              (&local_2f0.Description,L"MetasoundStandardNodes",
               L"MetasoundWaveTableEnvelopeNode_Duration",L"Duration");
    FText::FText(&local_2f0.DisplayName);
    local_2f0.bIsAdvancedDisplay = false;
    pFVar7 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FTime>::TInputDataVertex<Metasound::FTime><float>
                       (&local_e0,"Duration",&local_2f0,local_400);
    FText::AsLocalizable_Advanced_LocText
              (&local_318.Description,L"MetasoundStandardNodes",
               L"MetasoundWaveTableEnvelopeNode_InputOnPause",L"Pause");
    FText::FText(&local_318.DisplayName);
    local_318.bIsAdvancedDisplay = false;
    pFVar8 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                       (&local_118,"Pause",&local_318);
    FText::AsLocalizable_Advanced_LocText
              (&local_340.Description,L"MetasoundStandardNodes",
               L"MetasoundWaveTableEnvelopeNode_InputOnStop",L"Stop");
    FText::FText(&local_340.DisplayName);
    local_340.bIsAdvancedDisplay = false;
    pFVar9 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                       (&local_150,"Stop",&local_340);
    FText::AsLocalizable_Advanced_LocText
              (&local_368.Description,L"MetasoundStandardNodes",
               L"MetasoundWaveTableEnvelopeNode_InputOnPlay",L"Play");
    FText::FText(&local_368.DisplayName);
    local_368.bIsAdvancedDisplay = false;
    pFVar10 = (FInputDataVertex *)
              TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                        (&local_188,"Play",&local_368);
    FText::AsLocalizable_Advanced_LocText
              (&local_390.Description,L"MetasoundStandardNodes",
               L"MetasoundWaveTableEnvelopeNode_InputWaveTable",L"WaveTable");
    FText::FText(&local_390.DisplayName);
    local_390.bIsAdvancedDisplay = false;
    pFVar11 = (FInputDataVertex *)
              TInputDataVertex<WaveTable::FWaveTable>::TInputDataVertex<WaveTable::FWaveTable><>
                        (&local_1c0,"WaveTable",&local_390);
    local_3f8._padding_ = 0;
    local_3f8._padding_ = 0;
    local_3f8.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3f8.SubInterfaces.ArrayNum = 0;
    local_3f8.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_3b8,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_3f8,
               &local_3f8.SubInterfaces);
    if ((local_3b8.Vertices)->ArrayMax < 7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,7,&(local_3b8.Vertices)->AllocatorInstance,(local_3b8.Vertices)->ArrayNum,
                 &(local_3b8.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_3b8,pFVar11);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_3b8,pFVar10);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_3b8,pFVar9);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_3b8,pFVar8);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_3b8,pFVar7);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_3b8,pFVar6);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_3b8,pFVar5);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_3b8);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableEnvelopeNodeOperator::GetDefaultInterface(void)'
                ::__l2::DefaultInterface,&local_3f8,&local_3d8);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_3f8.SubInterfaces.AllocatorInstance.Data,
               local_3f8.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_3f8.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_3f8.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_3f8._padding_,(int)local_3f8._padding_);
    if ((FInputDataVertex *)local_3f8._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_3f8._padding_);
    }
    if ((0xc < (byte)local_1c0._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_1c0._48_1_])(&local_1c0.field_0x20);
    if (local_390.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_390.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_390.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_390.Description.TextData.Reference + 0x10))();
    }
    if ((0xc < (byte)local_188._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_188._48_1_])(&local_188.field_0x20);
    if (local_368.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_368.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_368.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_368.Description.TextData.Reference + 0x10))();
    }
    if ((0xc < (byte)local_150._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_150._48_1_])(&local_150.field_0x20);
    if (local_340.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_340.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_340.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_340.Description.TextData.Reference + 0x10))();
    }
    if ((0xc < (byte)local_118._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_118._48_1_])(&local_118.field_0x20);
    if (local_318.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_318.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_318.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_318.Description.TextData.Reference + 0x10))();
    }
    if ((0xc < (byte)local_e0._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_e0._48_1_])(&local_e0.field_0x20);
    if (local_2f0.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2f0.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_2f0.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2f0.Description.TextData.Reference + 0x10))();
    }
    if ((0xc < local_78) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_78])(local_88);
    if (local_2c8.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2c8.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_2c8.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2c8.Description.TextData.Reference + 0x10))();
    }
    if ((0xc < local_40) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40])(local_50);
    if (local_2a0.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2a0.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_2a0.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2a0.Description.TextData.Reference + 0x10))();
    }
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_3d8.SubInterfaces.AllocatorInstance.Data,
               local_3d8.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_3d8.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_3d8.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_3d8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_3d8._padding_);
    }
    if (local_278.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_278.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_278.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_278.Description.TextData.Reference + 0x10))();
    }
    if (local_250.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_250.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_250.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_250.Description.TextData.Reference + 0x10))();
    }
    atexit(`Metasound::FMetasoundWaveTableEnvelopeNodeOperator::GetDefaultInterface'::__l2::
           _dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableEnvelopeNodeOperator::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableEnvelopeNodeOperator::GetDefaultInterface(void)'
          ::__l2::DefaultInterface;
}

// GetNodeInfo @ 14b3bdb90

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FMetasoundWaveTableEnvelopeNodeOperator::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableEnvelopeNodeOperator::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableEnvelopeNodeOperator::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableEnvelopeNodeOperator::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::FMetasoundWaveTableEnvelopeNodeOperator::GetNodeInfo'::__l2::<lambda_1>::
      operator()(local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableEnvelopeNodeOperator::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::FMetasoundWaveTableEnvelopeNodeOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableEnvelopeNodeOperator::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableEnvelopeNodeOperator::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableEnvelopeNodeOperator::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// Reset @ 14b3dac40

void __thiscall
Metasound::FMetasoundWaveTableEnvelopeNodeOperator::Reset
          (FMetasoundWaveTableEnvelopeNodeOperator *this,FResetParams *param_1)

{
  int iVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  FWaveTableSampler *pFVar5;
  float fVar6;
  FSettings local_88;
  FWaveTableSampler local_70;
  
  fVar3 = __real_3f800000;
  local_88.Amplitude = 1.0;
  local_88.Offset = 0.0;
  local_88.Phase = 0.0;
  local_88.InterpolationMode = Linear;
  local_88.bOneShot = false;
  local_88.Freq = 0.0;
  pFVar5 = WaveTable::FWaveTableSampler::FWaveTableSampler(&local_70,&local_88);
  WaveTable::FWaveTableSampler::operator=(&this->Sampler,pFVar5);
  if (local_70.PhaseModScratch.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.PhaseModScratch.AllocatorInstance.Data);
  }
  fVar6 = FOperatorSettings::GetActualBlockRate(param_1->OperatorSettings);
  if ((fVar6 <= 0.0) ||
     ((float)((uint)fVar6 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("BlockRate > 0.0f && !FMath::IsNearlyZero(BlockRate)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundWaveTableEnvelopeNode.cpp"
                       ,0x12f,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->SecondsPerBlock = fVar3 / fVar6;
  iVar1 = param_1->OperatorSettings->NumFramesPerBlock;
  this->BlockSize = iVar1;
  if (iVar1 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("BlockSize > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundWaveTableEnvelopeNode.cpp"
                       ,0x135,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FTrigger::Reset(*(FTrigger **)&(this->OnFinishedWriteRef).field_0x8);
  **(undefined4 **)&(this->OutWriteRef).field_0x8 = 0;
  this->Elapsed = -1.0;
  this->bPaused = false;
  return;
}

