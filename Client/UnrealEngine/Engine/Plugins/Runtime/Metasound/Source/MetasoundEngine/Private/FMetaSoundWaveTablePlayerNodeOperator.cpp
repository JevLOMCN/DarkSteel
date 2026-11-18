// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 10

// BindInputs @ 14b2d29a0

void __thiscall
Metasound::FMetaSoundWaveTablePlayerNodeOperator::BindInputs
          (FMetaSoundWaveTablePlayerNodeOperator *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TOptional<Metasound::TDataReadReference<Metasound::FAudioBuffer>_> *local_res18;
  undefined1 local_48 [16];
  code *local_38;
  TOptional<Metasound::TDataReadReference<Metasound::FAudioBuffer>_> **local_30;
  undefined1 local_28 [16];
  
  ::FName::FName(&local_res8,"WaveTableBank");
  local_res18 = (TOptional<Metasound::TDataReadReference<Metasound::FAudioBuffer>_> *)
                &this->WaveTableBankReadRef;
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
  ::FName::FName(&local_res8,"Index");
  local_res18 = (TOptional<Metasound::TDataReadReference<Metasound::FAudioBuffer>_> *)
                &this->IndexReadRef;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<int>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
  local_28._0_8_ = &local_res8;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<int>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_28._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_48,
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
  ::FName::FName(&local_res8,"PitchShift");
  local_res18 = (TOptional<Metasound::TDataReadReference<Metasound::FAudioBuffer>_> *)
                &this->PitchShiftReadRef;
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
  ::FName::FName(&local_res8,"Loop");
  local_res18 = (TOptional<Metasound::TDataReadReference<Metasound::FAudioBuffer>_> *)
                &this->LoopReadRef;
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<bool>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_48._8_8_ = local_28;
  local_28._0_8_ = &local_res8;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<bool>_>,Metasound::VertexDataPrivate::FInputBinding>
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

// BindOutputs @ 14b2d2d90

void __thiscall
Metasound::FMetaSoundWaveTablePlayerNodeOperator::BindOutputs
          (FMetaSoundWaveTablePlayerNodeOperator *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<Metasound::FAudioBuffer> *local_res18;
  undefined1 local_38 [16];
  code *local_28;
  TDataWriteReference<Metasound::FAudioBuffer> **local_20;
  undefined1 local_18 [16];
  
  ::FName::FName(&local_res8,"MonoOut");
  local_res18 = &this->OutBufferWriteRef;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FAudioBuffer>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  ::FName::FName(&local_res8,"OnFinished");
  local_res18 = (TDataWriteReference<Metasound::FAudioBuffer> *)&this->OutOnFinishedRef;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<Metasound::FTrigger>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38._8_8_ = local_18;
  local_18._0_8_ = &local_res8;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<Metasound::FTrigger>_>,Metasound::VertexDataPrivate::FOutputBinding>
       ::Call;
  local_18._8_8_ = local_res18;
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)local_38,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// ~FMetaSoundWaveTablePlayerNodeOperator @ 14b351940

void __thiscall
Metasound::FMetaSoundWaveTablePlayerNodeOperator::~FMetaSoundWaveTablePlayerNodeOperator
          (FMetaSoundWaveTablePlayerNodeOperator *this)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutOnFinishedRef).field_0x10);
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
            (*(TReferenceControllerBase<0> **)&(this->LoopReadRef).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->PitchShiftReadRef).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->SyncReadRef).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->StopReadRef).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->PlayReadRef).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->IndexReadRef).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->WaveTableBankReadRef).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// operator() @ 14b358000

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::FMetaSoundWaveTablePlayerNodeOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
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
  pFVar3 = Metasound::FMetaSoundWaveTablePlayerNodeOperator::GetDefaultInterface();
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
                      L"MetaSoundWaveTablePlayerNode_Description",
                      L"Reads through the given WaveTableBank\'s entry at the given index.");
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_b8,L"MetasoundStandardNodes",L"MetaSoundWaveTablePlayerNode_Name",
                      L"WaveTable Player");
  ::FName::FName(&local_res20,"WaveTablePlayer");
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

// CreateOperator @ 14b387ac0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::FMetaSoundWaveTablePlayerNodeOperator::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  int iVar1;
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  FInputBinding *pFVar6;
  TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> TVar7;
  INode *pIVar8;
  char cVar9;
  INode IVar10;
  float fVar11;
  FName local_188;
  FName local_180;
  FName local_178;
  FName local_170;
  FName local_168;
  FName local_160;
  FName local_158;
  FName local_150;
  FName local_148;
  undefined1 local_140 [16];
  INode local_130;
  undefined1 local_120 [16];
  INode local_110;
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
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  ::FName::FName(&local_188,"WaveTableBank");
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FWaveTableBankAsset>
            (this,(TDataReadReference<Metasound::FWaveTableBankAsset> *)local_c0,&local_188,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  ::FName::FName(&local_180,"Index");
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<int>
            (this,(TDataReadReference<int> *)local_a0,&local_180,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  ::FName::FName(&local_178,"Play");
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_100,&local_178,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  ::FName::FName(&local_170,"Stop");
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_120,&local_170,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  ::FName::FName(&local_168,"Sync");
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FTrigger>
            (this,(TDataReadReference<Metasound::FTrigger> *)local_140,&local_168,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  ::FName::FName(&local_160,"PitchShift");
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_80,&local_160,pFVar2);
  pFVar2 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  ::FName::FName(&local_158,"Loop");
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<bool>
            (this,(TDataReadReference<bool> *)local_60,&local_158,pFVar2);
  cVar9 = '\0';
  bVar4 = false;
  ::FName::FName(&local_150,"PhaseMod");
  pFVar5 = FInputVertexInterfaceData::FindDataReference(this,&local_150);
  IVar10 = (INode)param_2;
  local_188 = (FName)param_2;
  if (pFVar5 != (FAnyDataReference *)0x0) {
    ::FName::FName(&local_148,"PhaseMod");
    pFVar6 = FInputVertexInterfaceData::FindChecked(this,&local_148);
    if (((pFVar6->Data).bIsSet == false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Data.IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                           ,0x10e,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      TVar7.Ptr = (IOperator *)(*pcVar3)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
    }
    if (((pFVar6->Data).bIsSet == false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      TVar7.Ptr = (IOperator *)(*pcVar3)();
      return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)TVar7.Ptr;
    }
    FAnyDataReference::GetAs<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
              (&(pFVar6->Data).TypedValue,(TDataReadReference<Metasound::FAudioBuffer> *)local_e0);
    local_188.ComparisonIndex.Value = local_e0._8_4_;
    local_188.Number = local_e0._12_4_;
    if (local_d0 != (INode)0x0) {
      *(int *)((longlong)local_d0 + 8) = *(int *)((longlong)local_d0 + 8) + 1;
    }
    cVar9 = '\x01';
    bVar4 = true;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_d0);
    IVar10 = local_d0;
  }
  pIVar8 = ::operator_new(0x1a8);
  if (pIVar8 == (INode *)0x0) {
    pIVar8 = (INode *)0x0;
  }
  else {
    *(undefined4 *)(pIVar8 + 1) = 0;
    *pIVar8 = (INode)&___7FMetaSoundWaveTablePlayerNodeOperator_Metasound__6B_;
    iVar1 = **(int **)&(param_2->Errors).ArrayNum;
    *(undefined1 *)(pIVar8 + 2) = 0;
    *(float *)&pIVar8[1].field_0x4 = (float)iVar1;
    pIVar8[3] = (INode)&___7__TDataReference_VFWaveTableBankAsset_Metasound___Metasound__6B_;
    pIVar8[4] = (INode)local_c0._8_8_;
    pIVar8[5] = local_b0;
    if (local_b0 != (INode)0x0) {
      *(int *)((longlong)local_b0 + 8) = *(int *)((longlong)local_b0 + 8) + 1;
    }
    pIVar8[3] = (INode)&___7__TDataReadReference_VFWaveTableBankAsset_Metasound___Metasound__6B_;
    pIVar8[7] = (INode)&___7__TDataReference_H_Metasound__6B_;
    pIVar8[8] = (INode)local_a0._8_8_;
    pIVar8[9] = local_90;
    if (local_90 != (INode)0x0) {
      *(int *)((longlong)local_90 + 8) = *(int *)((longlong)local_90 + 8) + 1;
    }
    pIVar8[7] = (INode)&___7__TDataReadReference_H_Metasound__6B_;
    pIVar8[0xb] = (INode)&___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    pIVar8[0xc] = (INode)local_100._8_8_;
    pIVar8[0xd] = local_f0;
    if (local_f0 != (INode)0x0) {
      *(int *)((longlong)local_f0 + 8) = *(int *)((longlong)local_f0 + 8) + 1;
    }
    pIVar8[0xb] = (INode)&___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    pIVar8[0xf] = (INode)&___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    pIVar8[0x10] = (INode)local_120._8_8_;
    pIVar8[0x11] = local_110;
    if (local_110 != (INode)0x0) {
      *(int *)((longlong)local_110 + 8) = *(int *)((longlong)local_110 + 8) + 1;
    }
    pIVar8[0xf] = (INode)&___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    pIVar8[0x13] = (INode)&___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    pIVar8[0x14] = (INode)local_140._8_8_;
    pIVar8[0x15] = local_130;
    if (local_130 != (INode)0x0) {
      *(int *)((longlong)local_130 + 8) = *(int *)((longlong)local_130 + 8) + 1;
    }
    pIVar8[0x13] = (INode)&___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
    pIVar8[0x17] = (INode)&___7__TDataReference_M_Metasound__6B_;
    pIVar8[0x18] = (INode)local_80._8_8_;
    pIVar8[0x19] = local_70;
    if (local_70 != (INode)0x0) {
      *(int *)((longlong)local_70 + 8) = *(int *)((longlong)local_70 + 8) + 1;
    }
    pIVar8[0x17] = (INode)&___7__TDataReadReference_M_Metasound__6B_;
    pIVar8[0x1b] = (INode)&___7__TDataReference__N_Metasound__6B_;
    pIVar8[0x1c] = (INode)local_60._8_8_;
    pIVar8[0x1d] = local_50;
    if (local_50 != (INode)0x0) {
      *(int *)((longlong)local_50 + 8) = *(int *)((longlong)local_50 + 8) + 1;
    }
    pIVar8[0x1b] = (INode)&___7__TDataReadReference__N_Metasound__6B_;
    pIVar8[0x1f] = (INode)0x0;
    pIVar8[0x20] = (INode)0x0;
    *(char *)(pIVar8 + 0x25) = cVar9;
    if (cVar9 != '\0') {
      pIVar8[0x21] = (INode)&___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
      *(FName *)(pIVar8 + 0x22) = local_188;
      pIVar8[0x23] = IVar10;
      if (IVar10 != (INode)0x0) {
        *(int *)((longlong)IVar10 + 8) = *(int *)((longlong)IVar10 + 8) + 1;
      }
      pIVar8[0x21] = (INode)&___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
    }
    WaveTable::FWaveTableSampler::FWaveTableSampler((FWaveTableSampler *)(pIVar8 + 0x26));
    TDataReference<Metasound::FAudioBuffer>::
    TDataReference<Metasound::FAudioBuffer><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FAudioBuffer> *)(pIVar8 + 0x2d),NewObject,
               *(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    pIVar8[0x2d] = (INode)&___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    TDataReference<Metasound::FTrigger>::
    TDataReference<Metasound::FTrigger><Metasound::FOperatorSettings_const_&>
              ((TDataReference<Metasound::FTrigger> *)(pIVar8 + 0x31),NewObject,
               *(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    pIVar8[0x31] = (INode)&___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
    fVar11 = FOperatorSettings::GetActualBlockRate
                       (*(FOperatorSettings **)&(param_2->Errors).ArrayNum);
    if (0.0 < fVar11) {
      *(float *)(pIVar8 + 1) = __real_3f800000 / fVar11;
    }
  }
  param_1->Node = pIVar8;
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)IVar10);
  }
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_50);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_70);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_130);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_110);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_f0);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_90);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_b0);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// Execute @ 14b39f310

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Metasound::FMetaSoundWaveTablePlayerNodeOperator::Execute
          (FMetaSoundWaveTablePlayerNodeOperator *this)

{
  longlong lVar1;
  TArray<float,TAlignedHeapAllocator<16>_> *this_00;
  FAudioBuffer *this_01;
  longlong lVar2;
  FTrigger *this_02;
  undefined8 *puVar3;
  TReferenceControllerBase<1> *pTVar4;
  int *piVar5;
  bool bVar6;
  code *pcVar7;
  bool bVar8;
  undefined4 uVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  longlong *plVar16;
  float *pfVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  longlong lVar23;
  bool bVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 local_res18 [8];
  FScriptContainerElement *local_res20;
  float *local_118;
  FScriptContainerElement *local_108;
  TArrayView<float_const_,int> local_e8;
  FTrigger *local_d8;
  FScriptContainerElement *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  float *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  TArrayView<float,int> local_a8;
  TArrayView<float_const_,int> local_98;
  TArrayView<float_const_,int> local_88 [4];
  
  bVar6 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar6) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"FMetaSoundWaveTablePlayerNodeOperator::Execute");
  }
  bVar24 = -1 < CpuChannel->Enabled;
  if (bVar24) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Metasound::FMetaSoundWaveTablePlayerNodeOperator::Execute(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId189,"FMetaSoundWaveTablePlayerNodeOperator::Execute"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundWaveTablePlayerNode.cpp"
               ,0xbd);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Metasound::FMetaSoundWaveTablePlayerNodeOperator::Execute(void)___ptr64'
               ::__l2::__CpuProfilerEventSpecId189);
  }
  local_d8 = *(FTrigger **)&(this->OutOnFinishedRef).field_0x8;
  FTrigger::AdvanceBlock(local_d8);
  this_01 = *(FAudioBuffer **)&(this->OutBufferWriteRef).field_0x8;
  iVar15 = (this_01->Buffer).ArrayNum;
  if (0 < iVar15) {
    memset((this_01->Buffer).AllocatorInstance.Data,0,(longlong)iVar15 << 2);
  }
  plVar16 = *(longlong **)&(this->PlayReadRef).field_0x8;
  lVar23 = 0;
  iVar20 = -1;
  iVar14 = -1;
  iVar12 = -1;
  iVar15 = *(int *)((longlong)plVar16 + 0x1c);
  if (0 < iVar15) {
    lVar2 = *plVar16;
    lVar1 = (longlong)iVar15 + -1;
    lVar18 = lVar23;
    if (0 < lVar1) {
      do {
        iVar14 = *(int *)(lVar2 + lVar18 * 4);
        if (iVar14 < iVar12) {
          iVar14 = iVar12;
        }
        lVar18 = lVar18 + 1;
        iVar12 = iVar14;
      } while (lVar18 < lVar1);
    }
    iVar12 = *(int *)(lVar2 + lVar1 * 4);
    if (iVar12 < iVar14) {
      iVar12 = iVar14;
    }
  }
  plVar16 = *(longlong **)&(this->StopReadRef).field_0x8;
  iVar15 = *(int *)((longlong)plVar16 + 0x1c);
  if (0 < iVar15) {
    lVar2 = *plVar16;
    lVar1 = (longlong)iVar15 + -1;
    lVar18 = lVar23;
    iVar15 = -1;
    if (0 < lVar1) {
      do {
        iVar15 = *(int *)(lVar2 + lVar18 * 4);
        if (iVar15 < iVar20) {
          iVar15 = iVar20;
        }
        iVar20 = iVar15;
        lVar18 = lVar18 + 1;
        iVar15 = iVar20;
      } while (lVar18 < lVar1);
    }
    iVar20 = *(int *)(lVar2 + lVar1 * 4);
    if (iVar20 < iVar15) {
      iVar20 = iVar15;
    }
  }
  if ((((-1 < iVar12) || (bVar8 = false, -1 < iVar20)) &&
      (bVar10 = this->bPlaying, this->bPlaying = iVar20 < iVar12, bVar8 = false, bVar10 != false))
     && (iVar12 <= iVar20)) {
    bVar8 = true;
  }
  if ((this->bPlaying == false) && (!bVar8)) goto LAB_14b39fb3e;
  this_02 = *(FTrigger **)&(this->SyncReadRef).field_0x8;
  local_108 = (FScriptContainerElement *)0x0;
  local_res20 = (FScriptContainerElement *)((ulonglong)local_res20 & 0xffffffff00000000);
  bVar10 = FTrigger::IsTriggered(this_02);
  uVar22 = 0;
  if (bVar10) {
    this_00 = &this->SyncBuffer;
    if ((1 < (byte)LogMetaSound._0_1_) && (this_01->InitialNum != (this_01->Buffer).ArrayNum)) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                  LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    TArray<float,TAlignedHeapAllocator<16>_>::SetNum(this_00,(this_01->Buffer).ArrayNum,Default);
    memset((this_00->AllocatorInstance).Data,0,(longlong)(this->SyncBuffer).ArrayNum << 2);
    if (0 < this_02->LastTriggerIndexInBlock) {
      pFVar21 = (this_02->TriggeredFrames).AllocatorInstance.Data;
      lVar1 = (longlong)this_02->LastTriggerIndexInBlock + -1;
      local_res20 = pFVar21;
      if (0 < lVar1) {
        do {
          uVar13 = *(uint *)(pFVar21 + lVar23 * 4);
          uVar19 = 0;
          if ((int)uVar13 < (this->SyncBuffer).ArrayNum) {
            uVar19 = ~uVar13 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             pFVar21 = local_res20, bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar23 = lVar23 + 1;
          *(undefined4 *)((this_00->AllocatorInstance).Data + (longlong)(int)uVar13 * 4) =
               0x3f800000;
        } while (lVar23 < lVar1);
      }
      uVar13 = *(uint *)(pFVar21 + lVar1 * 4);
      uVar19 = uVar22;
      if ((int)uVar13 < (this->SyncBuffer).ArrayNum) {
        uVar19 = ~uVar13 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(undefined4 *)((this_00->AllocatorInstance).Data + (longlong)(int)uVar13 * 4) = 0x3f800000;
    }
    local_108 = (this->SyncBuffer).AllocatorInstance.Data;
    iVar15 = (this->SyncBuffer).ArrayNum;
    if ((iVar15 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_res20 = (FScriptContainerElement *)CONCAT44(local_res20._4_4_,iVar15);
  }
  local_118 = (float *)0x0;
  iVar15 = 0;
  if ((this->PhaseModReadRef).bIsSet != false) {
    puVar3 = *(undefined8 **)&(this->PhaseModReadRef).TypedValue.field_0x8;
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar3 + 2) != *(int *)(puVar3 + 1))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_float_const*___ptr64___cdecl_Metasound::FAudioBuffer::GetData(void)const___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    local_118 = (float *)*puVar3;
    if ((1 < (byte)LogMetaSound._0_1_) && (*(int *)(puVar3 + 2) != *(int *)(puVar3 + 1))) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_int___cdecl_Metasound::FAudioBuffer::Num(void)const___ptr64'::__l3::
                  LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    iVar15 = *(int *)(puVar3 + 1);
    if ((iVar15 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  plVar16 = *(longlong **)&(this->WaveTableBankReadRef).field_0x8;
  uVar9 = local_e8._12_4_;
  pTVar4 = (TReferenceControllerBase<1> *)plVar16[1];
  plVar16 = (longlong *)*plVar16;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (plVar16 == (longlong *)0x0) {
LAB_14b39fafa:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    iVar15 = iVar20;
    if (!bVar8) goto LAB_14b39fb3e;
  }
  else {
    cVar11 = (**(code **)(*plVar16 + 0x10))(plVar16);
    if (cVar11 == '\x01') {
      fVar27 = this->SampleRate;
    }
    else {
      iVar14 = (**(code **)(*plVar16 + 0x18))(plVar16);
      fVar27 = (float)iVar14;
    }
    fVar26 = __real_3f800000;
    if (0.0 < this->SampleRate) {
LAB_14b39f7dd:
      fVar25 = **(float **)&(this->PitchShiftReadRef).field_0x8;
      if (__real_42900000 <= fVar25) {
        fVar25 = __real_42900000;
      }
      if (fVar25 <= __real_c2900000) {
        fVar25 = __real_c2900000;
      }
      if (fVar25 != 0.0) {
        fVar26 = powf(__real_40000000,fVar25 * __real_3daaaaab);
      }
      fVar26 = (fVar27 / this->SampleRate) * fVar26;
    }
    else {
      local_res18[0] = 0;
      bVar10 = `Metasound::FMetaSoundWaveTablePlayerNodeOperator::Execute'::__l18::<lambda_4>::
               operator()(local_res18);
      if (bVar10) goto LAB_14b39f7dd;
    }
    plVar16 = (longlong *)(**(code **)(*plVar16 + 0x20))();
    iVar14 = (int)plVar16[1];
    if (iVar14 == 0) goto LAB_14b39fafa;
    piVar5 = *(int **)&(this->IndexReadRef).field_0x8;
    iVar12 = -*piVar5;
    if (iVar12 < 0) {
      iVar12 = *piVar5;
    }
    uVar19 = iVar12 % iVar14;
    uVar13 = uVar22;
    if ((int)uVar19 < iVar14) {
      uVar13 = ~uVar19 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    fVar27 = this->SampleRate;
    iVar14 = FWaveTableData::GetNumSamples
                       ((FWaveTableData *)((longlong)(int)uVar19 * 0x20 + *plVar16));
    WaveTable::FWaveTableSampler::SetFreq
              (&this->Sampler,((fVar27 * fVar26) / (float)iVar14) * this->BlockPeriod);
    WaveTable::FWaveTableSampler::SetOneShot
              (&this->Sampler,**(char **)&(this->LoopReadRef).field_0x8 == '\0');
    if ((1 < (byte)LogMetaSound._0_1_) && (this_01->InitialNum != (this_01->Buffer).ArrayNum)) {
      UE::Logging::Private::BasicLog<2>
                ((FStaticBasicLogRecord *)
                 &`public:___cdecl_Metasound::FAudioBuffer::operator_class_TArrayView<float,int>(void)___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    pFVar21 = (this_01->Buffer).AllocatorInstance.Data;
    iVar14 = (this_01->Buffer).ArrayNum;
    if ((iVar14 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_c8 = local_108;
    iStack_c0 = (int)local_res20;
    local_b8 = (float *)0x0;
    iStack_b0 = 0;
    if ((int)uVar19 < (int)plVar16[1]) {
      uVar22 = ~uVar19 >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_a8._12_4_ = local_e8._12_4_;
    local_a8.ArrayNum = iVar14;
    local_98._12_4_ = uStack_bc;
    local_98.ArrayNum = iStack_c0;
    local_88[0]._12_4_ = uVar9;
    local_88[0].ArrayNum = iVar15;
    local_98.DataPtr = (float *)local_c8;
    local_e8._12_4_ = uStack_ac;
    local_e8.ArrayNum = iStack_b0;
    local_88[0].DataPtr = local_118;
    local_e8.DataPtr = local_b8;
    local_a8.DataPtr = (float *)pFVar21;
    WaveTable::FWaveTableSampler::Process
              (&this->Sampler,(FWaveTableData *)((longlong)(int)uVar19 * 0x20 + *plVar16),&local_e8,
               local_88,&local_98,&local_a8);
    if (0 < iVar20) {
      iVar15 = FAudioBuffer::Num(this_01);
      if ((iVar15 <= iVar20) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("LastCompleteFrame < OutBuffer.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundWaveTablePlayerNode.cpp"
                              ,0x10e,L"LastCompleteFrame/output buffer size mismatch"), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar15 = FAudioBuffer::Num(this_01);
      pfVar17 = FAudioBuffer::GetData(this_01);
      memset(pfVar17 + iVar20,0,(longlong)(iVar15 - iVar20) << 2);
      goto LAB_14b39fafa;
    }
    iVar15 = WaveTable::FWaveTableSampler::GetIndexFinished(&this->Sampler);
    if (iVar15 < 0) goto LAB_14b39fafa;
    this->bPlaying = false;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  FTrigger::TriggerFrame(local_d8,iVar15);
LAB_14b39fb3e:
  if (bVar24) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

// GetDefaultInterface @ 14b3b1370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl
Metasound::FMetaSoundWaveTablePlayerNodeOperator::GetDefaultInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<Metasound::FTrigger> *pTVar3;
  TOutputDataVertex<Metasound::FAudioBuffer> *pTVar4;
  FInputDataVertex *pFVar5;
  FInputDataVertex *pFVar6;
  FInputDataVertex *pFVar7;
  FInputDataVertex *pFVar8;
  FInputDataVertex *pFVar9;
  FInputDataVertex *pFVar10;
  FInputDataVertex *pFVar11;
  FVertexInterface *pFVar12;
  undefined1 auStackY_498 [32];
  bool local_468 [4];
  float local_464;
  FInputVertexInterface local_460;
  FInputVertexInterfaceDeclarationBuilder local_440;
  FInputDataVertex *local_418;
  FOutputVertexInterface local_410;
  FDataVertexMetadata local_3f0;
  FDataVertexMetadata local_3c8;
  FDataVertexMetadata local_3a0;
  FDataVertexMetadata local_378;
  FDataVertexMetadata local_350;
  FDataVertexMetadata local_328;
  FDataVertexMetadata local_300;
  FDataVertexMetadata local_2d8;
  FDataVertexMetadata local_2b0;
  FDataVertexMetadata local_288;
  FOutputVertexInterfaceDeclarationBuilder local_260;
  TOutputDataVertex<Metasound::FTrigger> local_238;
  TOutputDataVertex<Metasound::FAudioBuffer> local_218;
  TInputDataVertex<Metasound::FTrigger> local_1f8;
  TInputDataVertex<Metasound::FTrigger> local_1c0;
  TInputDataVertex<Metasound::FTrigger> local_188;
  TInputDataVertex<Metasound::FWaveTableBankAsset> local_150;
  TInputDataVertex<int> local_118;
  TInputDataVertex<float> local_e0;
  TInputDataVertex<bool> local_a8;
  TInputDataVertex<Metasound::FAudioBuffer> local_70;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_498;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FMetaSoundWaveTablePlayerNodeOperator::GetDefaultInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FMetaSoundWaveTablePlayerNodeOperator::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FMetaSoundWaveTablePlayerNodeOperator::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FText::AsLocalizable_Advanced_LocText
              (&local_288.Description,L"MetasoundStandardNodes",
               L"MetaSoundWaveTablePlayerNode_OnFinished",
               L"Trigger executed when player is complete (if not looping) or stop is triggered");
    FText::AsLocalizable_Advanced_LocText
              (&local_288.DisplayName,L"MetasoundStandardNodes",
               L"MetaSoundWaveTablePlayer_OutputOnFinishedName",L"On Finished");
    local_288.bIsAdvancedDisplay = false;
    pTVar3 = TOutputDataVertex<Metasound::FTrigger>::TOutputDataVertex<Metasound::FTrigger><>
                       (&local_238,"OnFinished",&local_288);
    FText::AsLocalizable_Advanced_LocText
              (&local_2b0.Description,L"MetasoundStandardNodes",
               L"MetaSoundWaveTablePlayer_OutputMonoOutDesc",L"Mono output audio from player");
    FText::AsLocalizable_Advanced_LocText
              (&local_2b0.DisplayName,L"MetasoundStandardNodes",
               L"MetaSoundWaveTablePlayer_OutputMonoOutName",L"Mono Out");
    local_2b0.bIsAdvancedDisplay = false;
    pTVar4 = TOutputDataVertex<Metasound::FAudioBuffer>::
             TOutputDataVertex<Metasound::FAudioBuffer><>(&local_218,"MonoOut",&local_2b0);
    FOutputVertexInterface::FOutputVertexInterface(&local_410);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_260,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_410,
               &local_410.SubInterfaces);
    if ((local_260.Vertices)->ArrayMax < 2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,&(local_260.Vertices)->AllocatorInstance,(local_260.Vertices)->ArrayNum,
                 &(local_260.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_260,(FOutputDataVertex *)pTVar4);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_260,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_260);
    FText::AsLocalizable_Advanced_LocText
              (&local_2d8.Description,L"MetasoundStandardNodes",
               L"MetaSoundWaveTablePlayerNode_PhaseModDescription",
               L"Modulation audio source for modulating oscillation phase of provided table. A value of 0 is no phase modulation and 1 a full table length (360 degrees) of phase shift."
              );
    FText::AsLocalizable_Advanced_LocText
              (&local_2d8.DisplayName,L"MetasoundStandardNodes",
               L"MetaSoundWaveTablePlayerNode_PhaseMod",L"Phase Modulator");
    local_2d8.bIsAdvancedDisplay = true;
    pFVar5 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FAudioBuffer>::TInputDataVertex<Metasound::FAudioBuffer><>
                       (&local_70,"PhaseMod",&local_2d8);
    local_468[0] = false;
    FText::AsLocalizable_Advanced_LocText
              (&local_300.Description,L"MetasoundStandardNodes",
               L"MetaSoundWaveTablePlayerNode_LoopDesc",
               L"Whether or not to loop the given WaveTable");
    FText::FText(&local_300.DisplayName);
    local_300.bIsAdvancedDisplay = false;
    pFVar6 = (FInputDataVertex *)
             TInputDataVertex<bool>::TInputDataVertex<bool><bool>
                       (&local_a8,"Loop",&local_300,local_468);
    local_464 = 0.0;
    FText::AsLocalizable_Advanced_LocText
              (&local_328.Description,L"MetasoundStandardNodes",
               L"MetaSoundWaveTablePlayerNode_PitchShiftDesc",
               L"How much to shift the pitch of the given WaveTable");
    FText::AsLocalizable_Advanced_LocText
              (&local_328.DisplayName,L"MetasoundStandardNodes",
               L"MetaSoundWaveTablePlayerNode_PitchShiftName",L"Pitch Shift");
    local_328.bIsAdvancedDisplay = false;
    pFVar7 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_e0,"PitchShift",&local_328,&local_464);
    FText::AsLocalizable_Advanced_LocText
              (&local_350.Description,L"MetasoundStandardNodes",
               L"MetaSoundWaveTablePlayerNode_InputIndexDesc",
               L"Index of WaveTable Bank entry to play");
    FText::AsLocalizable_Advanced_LocText
              (&local_350.DisplayName,L"MetasoundStandardNodes",
               L"MetaSoundWaveTablePlayerNode_InputIndexName",L"Index");
    local_350.bIsAdvancedDisplay = false;
    pFVar8 = (FInputDataVertex *)
             TInputDataVertex<int>::TInputDataVertex<int><>(&local_118,"Index",&local_350);
    FText::AsLocalizable_Advanced_LocText
              (&local_378.Description,L"MetasoundStandardNodes",
               L"MetaSoundWaveTablePlayerNode_InputBankDesc",L"WaveTable Bank to playback from");
    FText::AsLocalizable_Advanced_LocText
              (&local_378.DisplayName,L"MetasoundStandardNodes",
               L"MetaSoundWaveTablePlayerNode_InputBankName",L"Bank");
    local_378.bIsAdvancedDisplay = false;
    pFVar9 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FWaveTableBankAsset>::
             TInputDataVertex<Metasound::FWaveTableBankAsset><>
                       (&local_150,"WaveTableBank",&local_378);
    FText::AsLocalizable_Advanced_LocText
              (&local_3a0.Description,L"MetasoundStandardNodes",
               L"MetaSoundWaveTablePlayerNode_InputSyncDesc",
               L"Restarts playing the WaveTable on the trigger boundary (sample rate)");
    FText::AsLocalizable_Advanced_LocText
              (&local_3a0.DisplayName,L"MetasoundStandardNodes",
               L"MetaSoundWaveTablePlayerNode_InputSyncName",L"Sync");
    local_3a0.bIsAdvancedDisplay = false;
    pFVar10 = (FInputDataVertex *)
              TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                        (&local_188,"Sync",&local_3a0);
    FText::AsLocalizable_Advanced_LocText
              (&local_3c8.Description,L"MetasoundStandardNodes",
               L"MetaSoundWaveTablePlayerNode_InputStopDesc",L"Stops the wavetable");
    FText::FText(&local_3c8.DisplayName);
    local_3c8.bIsAdvancedDisplay = false;
    pFVar11 = (FInputDataVertex *)
              TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                        (&local_1c0,"Stop",&local_3c8);
    FText::AsLocalizable_Advanced_LocText
              (&local_3f0.Description,L"MetasoundStandardNodes",
               L"MetaSoundWaveTablePlayerNode_InputPlayDesc",L"Plays the wavetable");
    FText::FText(&local_3f0.DisplayName);
    local_3f0.bIsAdvancedDisplay = false;
    local_418 = (FInputDataVertex *)
                TInputDataVertex<Metasound::FTrigger>::TInputDataVertex<Metasound::FTrigger><>
                          (&local_1f8,"Play",&local_3f0);
    local_460._padding_ = 0;
    local_460._padding_ = 0;
    local_460.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_460.SubInterfaces.ArrayNum = 0;
    local_460.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_440,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_460,
               &local_460.SubInterfaces);
    if ((local_440.Vertices)->ArrayMax < 8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,8,&(local_440.Vertices)->AllocatorInstance,(local_440.Vertices)->ArrayNum,
                 &(local_440.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_440,local_418);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_440,pFVar11);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_440,pFVar10);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_440,pFVar9);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_440,pFVar8);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_440,pFVar7);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_440,pFVar6);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_440,pFVar5);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_440);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FMetaSoundWaveTablePlayerNodeOperator::GetDefaultInterface(void)'
                ::__l2::DefaultInterface,&local_460,&local_410);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_460.SubInterfaces.AllocatorInstance.Data,
               local_460.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_460.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_460.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_460._padding_,(int)local_460._padding_);
    if ((FInputDataVertex *)local_460._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_460._padding_);
    }
    if ((0xc < (byte)local_1f8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_1f8._48_1_])(&local_1f8.field_0x20);
    if (local_3f0.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_3f0.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_3f0.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_3f0.Description.TextData.Reference + 0x10))();
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
    if (local_3c8.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_3c8.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_3c8.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_3c8.Description.TextData.Reference + 0x10))();
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
    if (local_3a0.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_3a0.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_3a0.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_3a0.Description.TextData.Reference + 0x10))();
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
    if (local_378.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_378.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_378.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_378.Description.TextData.Reference + 0x10))();
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
    if (local_350.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_350.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_350.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_350.Description.TextData.Reference + 0x10))();
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
    if (local_328.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_328.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_328.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_328.Description.TextData.Reference + 0x10))();
    }
    if ((0xc < (byte)local_a8._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_a8._48_1_])(&local_a8.field_0x20);
    if (local_300.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_300.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_300.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_300.Description.TextData.Reference + 0x10))();
    }
    if ((0xc < (byte)local_70._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar12 = (FVertexInterface *)(*pcVar1)();
      return pFVar12;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_70._48_1_])(&local_70.field_0x20);
    if (local_2d8.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2d8.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_2d8.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2d8.Description.TextData.Reference + 0x10))();
    }
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_410.SubInterfaces.AllocatorInstance.Data,
               local_410.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_410.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_410.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_410._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_410._padding_);
    }
    if (local_2b0.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2b0.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_2b0.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2b0.Description.TextData.Reference + 0x10))();
    }
    if (local_288.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_288.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_288.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_288.Description.TextData.Reference + 0x10))();
    }
    atexit(`Metasound::FMetaSoundWaveTablePlayerNodeOperator::GetDefaultInterface'::__l2::
           _dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FMetaSoundWaveTablePlayerNodeOperator::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FMetaSoundWaveTablePlayerNodeOperator::GetDefaultInterface(void)'
          ::__l2::DefaultInterface;
}

// GetNodeInfo @ 14b3bda70

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FMetaSoundWaveTablePlayerNodeOperator::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMetaSoundWaveTablePlayerNodeOperator::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMetaSoundWaveTablePlayerNodeOperator::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMetaSoundWaveTablePlayerNodeOperator::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::FMetaSoundWaveTablePlayerNodeOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMetaSoundWaveTablePlayerNodeOperator::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::FMetaSoundWaveTablePlayerNodeOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMetaSoundWaveTablePlayerNodeOperator::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMetaSoundWaveTablePlayerNodeOperator::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMetaSoundWaveTablePlayerNodeOperator::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// Reset @ 14b3daad0

void __thiscall
Metasound::FMetaSoundWaveTablePlayerNodeOperator::Reset
          (FMetaSoundWaveTablePlayerNodeOperator *this,FResetParams *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  FWaveTableSampler *pFVar3;
  float fVar4;
  FWaveTableSampler local_48;
  
  fVar4 = FOperatorSettings::GetActualBlockRate(param_1->OperatorSettings);
  this->SampleRate = (float)param_1->OperatorSettings->SampleRate;
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
  }
  FTrigger::Reset(*(FTrigger **)&(this->OutOnFinishedRef).field_0x8);
  return;
}

// operator() @ 150565380

bool __thiscall
`Metasound::FMetaSoundWaveTablePlayerNodeOperator::Execute'::__l18::<lambda_4>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6176273390962212617>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6176273390962212617>,
                       &`public:___cdecl_`public:_void___cdecl_Metasound::FMetaSoundWaveTablePlayerNodeOperator::Execute(void)___ptr64'::`18'::<lambda_4>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

