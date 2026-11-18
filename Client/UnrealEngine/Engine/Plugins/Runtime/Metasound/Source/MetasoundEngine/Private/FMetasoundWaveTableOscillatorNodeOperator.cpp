// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 9

// BindInputs @ 14b2c7740

void __thiscall
Metasound::FMetasoundWaveTableOscillatorNodeOperator::BindInputs
          (FMetasoundWaveTableOscillatorNodeOperator *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TOptional<Metasound::TDataReadReference<Metasound::FAudioBuffer>_> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TOptional<Metasound::TDataReadReference<Metasound::FAudioBuffer>_> **local_30;
  undefined1 local_28 [16];
  
  ::FName::FName(&local_res8,"WaveTable");
  local_res18 = (TOptional<Metasound::TDataReadReference<Metasound::FAudioBuffer>_> *)
                &this->WaveTableReadRef;
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
  local_res18 = (TOptional<Metasound::TDataReadReference<Metasound::FAudioBuffer>_> *)
                &this->PlayReadRef;
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
  local_res18 = (TOptional<Metasound::TDataReadReference<Metasound::FAudioBuffer>_> *)
                &this->StopReadRef;
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
  ::FName::FName(&local_res8,"Sync");
  local_res18 = (TOptional<Metasound::TDataReadReference<Metasound::FAudioBuffer>_> *)
                &this->SyncReadRef;
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
  ::FName::FName(&local_res8,"Freq");
  local_res18 = (TOptional<Metasound::TDataReadReference<Metasound::FAudioBuffer>_> *)
                &this->FreqReadRef;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<float>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
  local_28._0_8_ = &local_res8;
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
  if ((this->PhaseModReadRef).bIsSet != false) {
    ::FName::FName(&local_res8,"PhaseMod");
    local_30 = &local_res18;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
               ::Call;
    local_28._0_8_ = &local_res8;
    local_48._8_8_ = local_28;
    local_48._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FInputBinding>
         ::Call;
    local_res18 = &this->PhaseModReadRef;
    local_28._8_8_ = &this->PhaseModReadRef;
    FInputVertexInterfaceData::Apply
              (param_1,&local_res8,
               (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
               (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)
               &local_38);
  }
  return;
}

// BindOutputs @ 14b2c79b0

void __thiscall
Metasound::FMetasoundWaveTableOscillatorNodeOperator::BindOutputs
          (FMetasoundWaveTableOscillatorNodeOperator *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FAudioBuffer> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<Metasound::FAudioBuffer> *local_30;
  code *local_28;
  TDataWriteReference<Metasound::FAudioBuffer> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  ::FName::FName(&local_res8,"Out");
  local_res18[0] = &this->OutBufferWriteRef;
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

// ~FMetasoundWaveTableOscillatorNodeOperator @ 14b351dc0

void __thiscall
Metasound::FMetasoundWaveTableOscillatorNodeOperator::~FMetasoundWaveTableOscillatorNodeOperator
          (FMetasoundWaveTableOscillatorNodeOperator *this)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutBufferWriteRef).field_0x10);
  pFVar1 = (this->Sampler).PhaseModScratch.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((this->PhaseModReadRef).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(this->PhaseModReadRef).TypedValue.field_0x10);
  }
  pFVar1 = (this->SyncBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->FreqReadRef).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SyncReadRef).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->StopReadRef).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->PlayReadRef).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->WaveTableReadRef).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// operator() @ 14b358e70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::FMetasoundWaveTableOscillatorNodeOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
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
  FNodeClassName local_148;
  FString local_128;
  TArray<FText,TSizedDefaultAllocator<32>_> local_118;
  TArray<FText,TSizedDefaultAllocator<32>_> local_108;
  FNodeDisplayStyle local_f8;
  FText local_e8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FText local_a8;
  FNodeClassName local_98;
  FVertexInterface local_80;
  
  local_148.Name.ComparisonIndex.Value = 0x1010101;
  local_148.Namespace.ComparisonIndex.Value = 0;
  local_148.Namespace.Number = 0;
  FText::FText(&local_c8);
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_118.AllocatorInstance,1,&local_118.ArrayMax);
  ConstructItems<FText,FText,int>(local_118.AllocatorInstance.Data,&local_c8,1);
  local_e8.TextData.Reference = Metasound::NodeCategories::WaveTables.TextData.Reference;
  if (Metasound::NodeCategories::WaveTables.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::WaveTables.TextData.Reference + 8))
              (Metasound::NodeCategories::WaveTables.TextData.Reference,local_res10);
  }
  local_e8.Flags = Metasound::NodeCategories::WaveTables.Flags;
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_108.AllocatorInstance,1,&local_108.ArrayMax);
  ConstructItems<FText,FText,int>(local_108.AllocatorInstance.Data,&local_e8,1);
  pFVar2 = Metasound::FMetasoundWaveTableOscillatorNodeOperator::GetDefaultInterface();
  pFVar2 = Metasound::FVertexInterface::FVertexInterface(&local_80,pFVar2);
  local_d8.TextData.Reference = Metasound::PluginNodeMissingPrompt.TextData.Reference;
  if (Metasound::PluginNodeMissingPrompt.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::PluginNodeMissingPrompt.TextData.Reference + 8))
              (Metasound::PluginNodeMissingPrompt.TextData.Reference,local_res10);
  }
  _Src.Data = Metasound::PluginAuthor.Data.AllocatorInstance.Data;
  lVar6 = (longlong)Metasound::PluginAuthor.Data.ArrayNum;
  local_d8.Flags = Metasound::PluginNodeMissingPrompt.Flags;
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.Data.ArrayNum = Metasound::PluginAuthor.Data.ArrayNum;
  if (Metasound::PluginAuthor.Data.ArrayNum == 0) {
    local_128.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,Metasound::PluginAuthor.Data.ArrayNum,0,(ForAnyElementType *)&local_128,
               Metasound::PluginAuthor.Data.ArrayNum,&local_128.Data.ArrayMax);
    memcpy(local_128.Data.AllocatorInstance.Data,_Src.Data,lVar6 * 2);
  }
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_b8,L"MetasoundStandardNodes",
                      L"MetasoundWaveTableOscillatorNode_Description",
                      L"Reads through the given WaveTable at the provided frequency.");
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_a8,L"MetasoundStandardNodes",L"MetasoundWaveTableOscillatorNode_Name",
                      L"WaveTable Oscillator");
  ::FName::FName(&local_res20,"WaveTableOscillator");
  ::FName::FName(&local_res18,"");
  FVar1 = local_148.Name;
  local_f8.bShowName = (bool)(undefined1)local_148.Name.ComparisonIndex.Value;
  local_f8.bShowInputNames = (bool)local_148.Name.ComparisonIndex.Value._1_1_;
  local_f8.bShowOutputNames = (bool)local_148.Name.ComparisonIndex.Value._2_1_;
  local_f8.bShowLiterals = (bool)local_148.Name.ComparisonIndex.Value._3_1_;
  local_f8.ImageName = local_148.Namespace;
  local_148.Name = FVar1;
  pFVar5 = Metasound::FNodeClassName::FNodeClassName
                     (&local_98,&Metasound::EngineNodes::Namespace,&local_res20,&local_res18);
  local_148.Namespace = pFVar5->Namespace;
  local_148.Name = pFVar5->Name;
  local_148.Variant = pFVar5->Variant;
  Metasound::FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,&local_148,1,0,pFVar4,pFVar3,&local_128,&local_d8,pFVar2,
             &local_108,&local_118,&local_f8);
  if (local_e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
  }
  if (local_c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// CreateOperator @ 14b388730

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::FMetasoundWaveTableOscillatorNodeOperator::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  FAnyDataReference *this_00;
  INode *pIVar2;
  char cVar3;
  INode IVar4;
  float fVar5;
  FName local_res20;
  FName local_108;
  undefined1 local_100 [16];
  INode local_f0;
  undefined1 local_e0 [16];
  INode local_d0;
  undefined1 local_c0 [16];
  INode local_b0;
  undefined1 local_a0 [16];
  INode local_90;
  undefined1 local_80 [16];
  INode local_70;
  undefined1 local_60 [16];
  INode local_50;
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  ::FName::FName(&local_res20,"WaveTable");
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<WaveTable::FWaveTable>
            (this,(TDataReadReference<WaveTable::FWaveTable> *)local_c0,&local_res20,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  ::FName::FName(&local_res20,"Play");
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_a0,&local_res20,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  ::FName::FName(&local_res20,"Stop");
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_100,&local_res20,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  ::FName::FName(&local_res20,"Sync");
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_80,&local_res20,pFVar1);
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  ::FName::FName(&local_res20,"Freq");
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_60,&local_res20,pFVar1);
  cVar3 = '\0';
  local_res20.ComparisonIndex.Value._0_1_ = '\0';
  ::FName::FName(&local_108,"PhaseMod");
  this_00 = FInputVertexInterfaceData::FindDataReference(this,&local_108);
  IVar4 = (INode)param_2;
  local_108 = (FName)param_2;
  if (this_00 != (FAnyDataReference *)0x0) {
    FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
              (this_00,(TDataReadReference<Metasound::FAudioBuffer> *)local_e0);
    local_108.ComparisonIndex.Value = local_e0._8_4_;
    local_108.Number = local_e0._12_4_;
    if (local_d0 != (INode)0x0) {
      *(int *)((longlong)local_d0 + 8) = *(int *)((longlong)local_d0 + 8) + 1;
    }
    cVar3 = '\x01';
    local_res20.ComparisonIndex.Value._0_1_ = '\x01';
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_d0);
    IVar4 = local_d0;
  }
  pIVar2 = ::operator_new(0x140);
  if (pIVar2 == (INode *)0x0) {
    pIVar2 = (INode *)0x0;
  }
  else {
    *(undefined4 *)(pIVar2 + 1) = 0;
    *pIVar2 = (INode)&___7FMetasoundWaveTableOscillatorNodeOperator_Metasound__6B_;
    pIVar2[1].field_0x4 = 0;
    pIVar2[2] = (INode)&___7__TDataReference_UFWaveTable_WaveTable___Metasound__6B_;
    pIVar2[3] = (INode)local_c0._8_8_;
    pIVar2[4] = local_b0;
    if (local_b0 != (INode)0x0) {
      *(int *)((longlong)local_b0 + 8) = *(int *)((longlong)local_b0 + 8) + 1;
    }
    pIVar2[2] = (INode)&___7__TDataReadReference_UFWaveTable_WaveTable___Metasound__6B_;
    pIVar2[6] = (INode)&___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    pIVar2[7] = (INode)local_a0._8_8_;
    pIVar2[8] = local_90;
    if (local_90 != (INode)0x0) {
      *(int *)((longlong)local_90 + 8) = *(int *)((longlong)local_90 + 8) + 1;
    }
    pIVar2[6] = (INode)&___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    pIVar2[10] = (INode)&___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    pIVar2[0xb] = (INode)local_100._8_8_;
    pIVar2[0xc] = local_f0;
    if (local_f0 != (INode)0x0) {
      *(int *)((longlong)local_f0 + 8) = *(int *)((longlong)local_f0 + 8) + 1;
    }
    pIVar2[10] = (INode)&___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    pIVar2[0xe] = (INode)&___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    pIVar2[0xf] = (INode)local_80._8_8_;
    pIVar2[0x10] = local_70;
    if (local_70 != (INode)0x0) {
      *(int *)((longlong)local_70 + 8) = *(int *)((longlong)local_70 + 8) + 1;
    }
    pIVar2[0xe] = (INode)&___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    pIVar2[0x12] = (INode)&___7__TDataReference_M_Metasound__6B_;
    pIVar2[0x13] = (INode)local_60._8_8_;
    pIVar2[0x14] = local_50;
    if (local_50 != (INode)0x0) {
      *(int *)((longlong)local_50 + 8) = *(int *)((longlong)local_50 + 8) + 1;
    }
    pIVar2[0x12] = (INode)&___7__TDataReadReference_M_Metasound__6B_;
    pIVar2[0x16] = (INode)0x0;
    pIVar2[0x17] = (INode)0x0;
    *(char *)(pIVar2 + 0x1c) = cVar3;
    if (cVar3 != '\0') {
      pIVar2[0x18] = (INode)&___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
      *(FName *)(pIVar2 + 0x19) = local_108;
      pIVar2[0x1a] = IVar4;
      if (IVar4 != (INode)0x0) {
        *(int *)((longlong)IVar4 + 8) = *(int *)((longlong)IVar4 + 8) + 1;
      }
      pIVar2[0x18] = (INode)&___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
    }
    WaveTable::FWaveTableSampler::FWaveTableSampler((FWaveTableSampler *)(pIVar2 + 0x1d));
    TDataReference<Metasound::FAudioBuffer>::
    TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FAudioBuffer> *)(pIVar2 + 0x24),NewObject,
               *(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    pIVar2[0x24] = (INode)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    fVar5 = FOperatorSettings::GetActualBlockRate
                      (*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    if (0.0 < fVar5) {
      *(float *)(pIVar2 + 1) = __real_3f800000 / fVar5;
    }
  }
  param_1->Node = pIVar2;
  if ((char)local_res20.ComparisonIndex.Value != '\0') {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)IVar4);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_50);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_70);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_f0);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_90);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_b0);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// Execute @ 14b3a06c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Metasound::FMetasoundWaveTableOscillatorNodeOperator::Execute
          (FMetasoundWaveTableOscillatorNodeOperator *this)

{
  longlong lVar1;
  TArray<float,TAlignedHeapAllocator<16>_> *this_00;
  uint uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  FTrigger *this_01;
  undefined8 *puVar6;
  FWaveTable *this_02;
  float *pfVar7;
  bool bVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  FWaveTableView *pFVar13;
  int iVar14;
  int iVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  int iVar18;
  bool bVar19;
  float fVar20;
  int local_res8;
  float *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_bc;
  undefined4 uStack_ac;
  uint uStack_9c;
  TArrayView<float_const_,int> local_98;
  TArrayView<float,int> local_88;
  TArrayView<float_const_,int> local_78;
  TArrayView<float_const_,int> local_68;
  FWaveTableView local_58;
  
  bVar8 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar8) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"FMetasoundWaveTableOscillatorNodeOperator::Execute");
  }
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Metasound::FMetasoundWaveTableOscillatorNodeOperator::Execute(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId152,
               "FMetasoundWaveTableOscillatorNodeOperator::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundWaveTableOscillatorNode.cpp"
               ,0x98);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Metasound::FMetasoundWaveTableOscillatorNodeOperator::Execute(void)___ptr64'
               ::__l2::__CpuProfilerEventSpecId152);
  }
  puVar3 = *(undefined8 **)&(this->OutBufferWriteRef).field_0x8;
  if (0 < *(int *)(puVar3 + 1)) {
    memset((void *)*puVar3,0,(longlong)*(int *)(puVar3 + 1) << 2);
  }
  plVar4 = *(longlong **)&(this->PlayReadRef).field_0x8;
  pFVar17 = (FScriptContainerElement *)0x0;
  iVar15 = -1;
  iVar14 = -1;
  iVar11 = *(int *)((longlong)plVar4 + 0x1c);
  iVar18 = iVar14;
  if (0 < iVar11) {
    lVar5 = *plVar4;
    lVar1 = (longlong)iVar11 + -1;
    pFVar16 = pFVar17;
    if (0 < lVar1) {
      do {
        iVar11 = *(int *)(lVar5 + (longlong)pFVar16 * 4);
        if (iVar11 < iVar14) {
          iVar11 = iVar14;
        }
        iVar14 = iVar11;
        pFVar16 = pFVar16 + 1;
      } while ((longlong)pFVar16 < lVar1);
    }
    iVar18 = *(int *)(lVar5 + lVar1 * 4);
    if (iVar18 < iVar14) {
      iVar18 = iVar14;
    }
  }
  plVar4 = *(longlong **)&(this->StopReadRef).field_0x8;
  iVar11 = *(int *)((longlong)plVar4 + 0x1c);
  if (0 < iVar11) {
    lVar5 = *plVar4;
    lVar1 = (longlong)iVar11 + -1;
    pFVar16 = pFVar17;
    iVar11 = -1;
    if (0 < lVar1) {
      do {
        iVar11 = *(int *)(lVar5 + (longlong)pFVar16 * 4);
        if (iVar11 < iVar15) {
          iVar11 = iVar15;
        }
        iVar15 = iVar11;
        pFVar16 = pFVar16 + 1;
        iVar11 = iVar15;
      } while ((longlong)pFVar16 < lVar1);
    }
    iVar15 = *(int *)(lVar5 + lVar1 * 4);
    if (iVar15 < iVar11) {
      iVar15 = iVar11;
    }
  }
  if ((-1 < iVar18) || (-1 < iVar15)) {
    this->bPlaying = iVar15 < iVar18;
  }
  if (this->bPlaying != false) {
    this_01 = *(FTrigger **)&(this->SyncReadRef).field_0x8;
    local_res8 = 0;
    bVar10 = FTrigger::IsTriggered(this_01);
    if (bVar10) {
      this_00 = &this->SyncBuffer;
      if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar3 + 2) != *(int *)(puVar3 + 1))) {
        UE::Logging::Private::BasicLog<2>
                  (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                    LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
      TArray<float,TAlignedHeapAllocator<16>_>::SetNum(this_00,*(int *)(puVar3 + 1),Default);
      memset((this_00->AllocatorInstance).Data,0,(longlong)(this->SyncBuffer).ArrayNum << 2);
      iVar11 = this_01->LastTriggerIndexInBlock;
      if (0 < iVar11) {
        pFVar16 = (this_01->TriggeredFrames).AllocatorInstance.Data;
        if (0 < (longlong)iVar11 + -1) {
          do {
            uVar2 = *(uint *)(pFVar16 + (longlong)pFVar17 * 4);
            uVar12 = 0;
            if ((int)uVar2 < (this->SyncBuffer).ArrayNum) {
              uVar12 = ~uVar2 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar17 = pFVar17 + 1;
            *(undefined4 *)((this_00->AllocatorInstance).Data + (longlong)(int)uVar2 * 4) =
                 0x3f800000;
          } while ((longlong)pFVar17 < (longlong)iVar11 + -1);
        }
        uVar2 = *(uint *)(pFVar16 + (longlong)iVar11 * 4 + -4);
        uVar12 = 0;
        if ((int)uVar2 < (this->SyncBuffer).ArrayNum) {
          uVar12 = ~uVar2 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        *(undefined4 *)((this->SyncBuffer).AllocatorInstance.Data + (longlong)(int)uVar2 * 4) =
             0x3f800000;
      }
      pFVar17 = (this->SyncBuffer).AllocatorInstance.Data;
      local_res8 = (this->SyncBuffer).ArrayNum;
      if ((local_res8 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    local_d8 = (float *)0x0;
    iStack_d0 = 0;
    if ((this->PhaseModReadRef).bIsSet != false) {
      puVar6 = *(undefined8 **)&(this->PhaseModReadRef).TypedValue.field_0x8;
      if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar6 + 2) != *(int *)(puVar6 + 1))) {
        UE::Logging::Private::BasicLog<2>
                  (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                    ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
      local_d8 = (float *)*puVar6;
      if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar6 + 2) != *(int *)(puVar6 + 1))) {
        UE::Logging::Private::BasicLog<2>
                  (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                    LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      }
      iStack_d0 = *(int *)(puVar6 + 1);
      if ((iStack_d0 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uStack_cc = local_98._12_4_;
    }
    fVar20 = **(float **)&(this->FreqReadRef).field_0x8;
    if (__real_469c4000 <= fVar20) {
      fVar20 = __real_469c4000;
    }
    if (fVar20 <= __real_c69c4000) {
      fVar20 = __real_c69c4000;
    }
    WaveTable::FWaveTableSampler::SetFreq(&this->Sampler,fVar20 * this->BlockPeriod);
    this_02 = *(FWaveTable **)&(this->WaveTableReadRef).field_0x8;
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar3 + 2) != *(int *)(puVar3 + 1))) {
      UE::Logging::Private::BasicLog<2>
                ((FStaticBasicLogRecord *)
                 &`public:___cdecl_Metasound::FAudioBuffer::operator_class_TArrayView<float,int>(void)___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pfVar7 = (float *)*puVar3;
    iVar11 = *(int *)(puVar3 + 1);
    if ((iVar11 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar13 = WaveTable::FWaveTable::GetView(this_02,&local_58);
    local_88._12_4_ = uStack_bc;
    local_88.ArrayNum = iVar11;
    local_78._12_4_ = uStack_ac;
    local_78.ArrayNum = local_res8;
    local_68._12_4_ = uStack_cc;
    local_68.ArrayNum = iStack_d0;
    local_98._8_8_ = (ulonglong)uStack_9c << 0x20;
    local_68.DataPtr = local_d8;
    local_98.DataPtr = (float *)0x0;
    local_88.DataPtr = pfVar7;
    local_78.DataPtr = (float *)pFVar17;
    WaveTable::FWaveTableSampler::Process
              (&this->Sampler,pFVar13,&local_98,&local_68,&local_78,&local_88);
  }
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

// GetDefaultInterface @ 14b3b31e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::FMetasoundWaveTableOscillatorNodeOperator::GetDefaultInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FInputDataVertex *pFVar8;
  FInputDataVertex *pFVar9;
  FVertexInterface *pFVar10;
  undefined1 auStackY_378 [32];
  float local_348 [2];
  FInputVertexInterface local_340;
  FOutputVertexInterface local_320;
  FInputVertexInterfaceDeclarationBuilder local_300;
  FDataVertexMetadata local_2d8;
  FDataVertexMetadata local_2b0;
  FDataVertexMetadata local_288;
  FDataVertexMetadata local_260;
  FDataVertexMetadata local_238;
  FDataVertexMetadata local_210;
  FDataVertexMetadata local_1e8;
  FOutputVertexInterfaceDeclarationBuilder local_1c0;
  TOutputDataVertex<Metasound::FAudioBuffer> local_198;
  TInputDataVertex<Metasound::FTrigger> local_178;
  TInputDataVertex<Metasound::FTrigger> local_140;
  TInputDataVertex<WaveTable::FWaveTable> local_108;
  TInputDataVertex<Metasound::FTrigger> local_d0;
  TInputDataVertex<float> local_98;
  TInputDataVertex<Metasound::FAudioBuffer> local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_378;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableOscillatorNodeOperator::GetDefaultInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableOscillatorNodeOperator::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableOscillatorNodeOperator::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FText::AsLocalizable_Advanced_LocText
              (&local_1e8.Description,L"MetasoundStandardNodes",
               L"MetasoundWaveTableOscillatorNode_Output",L"Out");
    FText::FText(&local_1e8.DisplayName);
    local_1e8.bIsAdvancedDisplay = false;
    pTVar3 = TOutputDataVertex<Metasound::FAudioBuffer>::
             TOutputDataVertex<Metasound::FAudioBuffer><>(&local_198,"Out",&local_1e8);
    FOutputVertexInterface::FOutputVertexInterface(&local_320);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_1c0,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_320,
               &local_320.SubInterfaces);
    if ((local_1c0.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,&(local_1c0.Vertices)->AllocatorInstance,(local_1c0.Vertices)->ArrayNum,
                 &(local_1c0.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_1c0,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_1c0);
    FText::AsLocalizable_Advanced_LocText
              (&local_210.Description,L"MetasoundStandardNodes",
               L"MetasoundWaveTableOscillatorNode_PhaseModDescription",
               L"Modulation audio source for modulating oscillation phase of provided table. A value of 0 is no phase modulation and 1 a full table length (360 degrees) of phase shift."
              );
    FText::AsLocalizable_Advanced_LocText
              (&local_210.DisplayName,L"MetasoundStandardNodes",
               L"MetasoundWaveTableOscillatorNode_PhaseMod",L"Phase Modulator");
    local_210.bIsAdvancedDisplay = true;
    pFVar4 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FAudioBuffer>::TInputDataVertex<Metasound::FAudioBuffer><>
                       (&local_60,"PhaseMod",&local_210);
    local_348[0] = 440.0;
    FText::AsLocalizable_Advanced_LocText
              (&local_238.Description,L"MetasoundStandardNodes",
               L"MetasoundWaveTableOscillatorNode_FreqDesc",
               L"Frequency (number of times to sample one period of wavetable per second) [-20000Hz, 20000Hz]"
              );
    FText::FText(&local_238.DisplayName);
    local_238.bIsAdvancedDisplay = false;
    pFVar5 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_98,"Freq",&local_238,local_348);
    FText::AsLocalizable_Advanced_LocText
              (&local_260.Description,L"MetasoundStandardNodes",
               L"MetasoundWaveTableOscillatorNode_InputSyncDesc",
               L"Restarts playing the WaveTable on the trigger boundary (sample rate)");
    FText::AsLocalizable_Advanced_LocText
              (&local_260.DisplayName,L"MetasoundStandardNodes",
               L"MetasoundWaveTableOscillatorNode_InputSyncName",L"Sync");
    local_260.bIsAdvancedDisplay = true;
    pFVar6 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                       (&local_d0,"Sync",&local_260);
    FText::AsLocalizable_Advanced_LocText
              (&local_288.Description,L"MetasoundStandardNodes",
               L"MetasoundWaveTableOscillatorNode_InputWaveTableDesc",L"WaveTable");
    FText::FText(&local_288.DisplayName);
    local_288.bIsAdvancedDisplay = false;
    pFVar7 = (FInputDataVertex *)
             TInputDataVertex<WaveTable::FWaveTable>::TInputDataVertex<WaveTable::FWaveTable><>
                       (&local_108,"WaveTable",&local_288);
    FText::AsLocalizable_Advanced_LocText
              (&local_2b0.Description,L"MetasoundStandardNodes",
               L"MetasoundWaveTableOscillatorNode_InputStopDesc",
               L"Stops the oscillator (block rate)");
    FText::FText(&local_2b0.DisplayName);
    local_2b0.bIsAdvancedDisplay = false;
    pFVar8 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                       (&local_140,"Stop",&local_2b0);
    FText::AsLocalizable_Advanced_LocText
              (&local_2d8.Description,L"MetasoundStandardNodes",
               L"MetasoundWaveTableOscillatorNode_InputPlayDesc",
               L"Plays the oscillator (block rate)");
    FText::FText(&local_2d8.DisplayName);
    local_2d8.bIsAdvancedDisplay = false;
    pFVar9 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                       (&local_178,"Play",&local_2d8);
    local_340._padding_ = 0;
    local_340._padding_ = 0;
    local_340.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_340.SubInterfaces.ArrayNum = 0;
    local_340.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_300,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_340,
               &local_340.SubInterfaces);
    if ((local_300.Vertices)->ArrayMax < 6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,6,&(local_300.Vertices)->AllocatorInstance,(local_300.Vertices)->ArrayNum,
                 &(local_300.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_300,pFVar9);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_300,pFVar8);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_300,pFVar7);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_300,pFVar6);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_300,pFVar5);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_300,pFVar4);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_300);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableOscillatorNodeOperator::GetDefaultInterface(void)'
                ::__l2::DefaultInterface,&local_340,&local_320);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_340.SubInterfaces.AllocatorInstance.Data,
               local_340.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_340.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_340.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_340._padding_,(int)local_340._padding_);
    if ((FInputDataVertex *)local_340._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_340._padding_);
    }
    if ((0xc < (byte)local_178._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FVertexInterface *)(*pcVar1)();
      return pFVar10;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_178._48_1_])(&local_178.field_0x20);
    if (local_2d8.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2d8.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_2d8.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2d8.Description.TextData.Reference + 0x10))();
    }
    if ((0xc < (byte)local_140._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FVertexInterface *)(*pcVar1)();
      return pFVar10;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_140._48_1_])(&local_140.field_0x20);
    if (local_2b0.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2b0.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_2b0.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2b0.Description.TextData.Reference + 0x10))();
    }
    if ((0xc < (byte)local_108._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FVertexInterface *)(*pcVar1)();
      return pFVar10;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_108._48_1_])(&local_108.field_0x20);
    if (local_288.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_288.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_288.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_288.Description.TextData.Reference + 0x10))();
    }
    if ((0xc < (byte)local_d0._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FVertexInterface *)(*pcVar1)();
      return pFVar10;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_d0._48_1_])(&local_d0.field_0x20);
    if (local_260.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_260.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_260.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_260.Description.TextData.Reference + 0x10))();
    }
    if ((0xc < (byte)local_98._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FVertexInterface *)(*pcVar1)();
      return pFVar10;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_98._48_1_])(&local_98.field_0x20);
    if (local_238.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_238.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_238.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_238.Description.TextData.Reference + 0x10))();
    }
    if ((0xc < (byte)local_60._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FVertexInterface *)(*pcVar1)();
      return pFVar10;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_60._48_1_])(&local_60.field_0x20);
    if (local_210.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_210.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_210.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_210.Description.TextData.Reference + 0x10))();
    }
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_320.SubInterfaces.AllocatorInstance.Data,
               local_320.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_320.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_320.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_320._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_320._padding_);
    }
    if (local_1e8.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1e8.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_1e8.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1e8.Description.TextData.Reference + 0x10))();
    }
    atexit(`Metasound::FMetasoundWaveTableOscillatorNodeOperator::GetDefaultInterface'::__l2::
           _dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableOscillatorNodeOperator::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableOscillatorNodeOperator::GetDefaultInterface(void)'
          ::__l2::DefaultInterface;
}

// GetNodeInfo @ 14b3bdd40

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FMetasoundWaveTableOscillatorNodeOperator::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableOscillatorNodeOperator::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableOscillatorNodeOperator::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableOscillatorNodeOperator::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::FMetasoundWaveTableOscillatorNodeOperator::GetNodeInfo'::__l2::<lambda_1>::
      operator()(local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableOscillatorNodeOperator::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::FMetasoundWaveTableOscillatorNodeOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableOscillatorNodeOperator::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableOscillatorNodeOperator::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableOscillatorNodeOperator::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// Reset @ 14b3daea0

void __thiscall
Metasound::FMetasoundWaveTableOscillatorNodeOperator::Reset
          (FMetasoundWaveTableOscillatorNodeOperator *this,FResetParams *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  FWaveTableSampler *pFVar3;
  float fVar4;
  FWaveTableSampler local_48;
  
  fVar4 = FOperatorSettings::GetActualBlockRate(param_1->OperatorSettings);
  if (0.0 < fVar4) {
    this->BlockPeriod = __real_3f800000 / fVar4;
  }
  iVar1 = (this->SyncBuffer).ArrayNum;
  this->bPlaying = false;
  if (0 < iVar1) {
    memset((this->SyncBuffer).AllocatorInstance.Data,0,(longlong)iVar1 << 2);
  }
  pFVar3 = WaveTable::FWaveTableSampler::FWaveTableSampler(&local_48);
  WaveTable::FWaveTableSampler::operator=(&this->Sampler,pFVar3);
  if (local_48.PhaseModScratch.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.PhaseModScratch.AllocatorInstance.Data);
  }
  puVar2 = *(undefined8 **)&(this->OutBufferWriteRef).field_0x8;
  iVar1 = *(int *)(puVar2 + 1);
  if (0 < iVar1) {
    memset((void *)*puVar2,0,(longlong)iVar1 << 2);
    return;
  }
  return;
}

