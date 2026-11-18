// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 12

// BindInputs @ 14b2c42f0

void __thiscall
Metasound::FMetasoundWaveTableGetNodeOperator::BindInputs
          (FMetasoundWaveTableGetNodeOperator *this,FInputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataReadReference<Metasound::FWaveTableBankAsset> *local_res18;
  undefined1 local_38 [16];
  code *local_28;
  TDataReadReference<Metasound::FWaveTableBankAsset> **local_20;
  undefined1 local_18 [16];
  
  ::FName::FName(&local_res8,"WaveTableBank");
  local_res18 = &this->WaveTableBankReadRef;
  local_20 = &local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindReadVertex<Metasound::FWaveTableBankAsset>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateInputBinding<Metasound::TDataReadReference<Metasound::FWaveTableBankAsset>_>,Metasound::VertexDataPrivate::FInputBinding>
       ::Call;
  local_38._8_8_ = local_res18;
  FInputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28)
  ;
  ::FName::FName(&local_res8,"TableIndex");
  local_res18 = (TDataReadReference<Metasound::FWaveTableBankAsset> *)&this->TableIndexReadRef;
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
  return;
}

// BindOutputs @ 14b2c43e0

void __thiscall
Metasound::FMetasoundWaveTableGetNodeOperator::BindOutputs
          (FMetasoundWaveTableGetNodeOperator *this,FOutputVertexInterfaceData *param_1)

{
  FName local_res8;
  TDataWriteReference<WaveTable::FWaveTable> *local_res18 [2];
  FName *local_38;
  TDataWriteReference<WaveTable::FWaveTable> *local_30;
  code *local_28;
  TDataWriteReference<WaveTable::FWaveTable> **local_20;
  code *local_18;
  undefined1 **local_10;
  
  ::FName::FName(&local_res8,"Out");
  local_res18[0] = &this->OutTable;
  local_20 = local_res18;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindReadVertex<WaveTable::FWaveTable>'::__l2::<lambda_1>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_38 = &local_res8;
  local_10 = (undefined1 **)&local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<Metasound::VertexDataPrivate::TCreateOutputBinding<Metasound::TDataWriteReference<WaveTable::FWaveTable>_>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_30 = local_res18[0];
  FOutputVertexInterfaceData::Apply
            (param_1,&local_res8,
             (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
             (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28
            );
  return;
}

// FMetasoundWaveTableGetNodeOperator @ 14b34a7f0

FMetasoundWaveTableGetNodeOperator * __thiscall
Metasound::FMetasoundWaveTableGetNodeOperator::FMetasoundWaveTableGetNodeOperator
          (FMetasoundWaveTableGetNodeOperator *this,FBuildOperatorParams *param_1,
          TDataReadReference<Metasound::FWaveTableBankAsset> *param_2,
          TDataReadReference<float> *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined8 local_38 [6];
  
  this->_padding_ = (longlong)&___7FMetasoundWaveTableGetNodeOperator_Metasound__6B_;
  *(undefined ***)&this->WaveTableBankReadRef =
       &___7__TDataReference_VFWaveTableBankAsset_Metasound___Metasound__6B_;
  *(undefined8 *)&(this->WaveTableBankReadRef).field_0x8 = *(undefined8 *)&param_2->field_0x8;
  lVar2 = *(longlong *)&param_2->field_0x10;
  *(longlong *)&(this->WaveTableBankReadRef).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->WaveTableBankReadRef =
       &___7__TDataReadReference_VFWaveTableBankAsset_Metasound___Metasound__6B_;
  *(undefined ***)&this->TableIndexReadRef = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&(this->TableIndexReadRef).field_0x8 = *(undefined8 *)&param_3->field_0x8;
  lVar2 = *(longlong *)&param_3->field_0x10;
  *(longlong *)&(this->TableIndexReadRef).field_0x10 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(undefined ***)&this->TableIndexReadRef = &___7__TDataReadReference_M_Metasound__6B_;
  (this->GainIndexData).NumSamples = 0;
  (this->GainIndexData).LowIndex = 0;
  (this->GainIndexData).HighIndex = -1;
  (this->GainIndexData).LastTableIndex = -1.0;
  (this->GainIndexData).TableIndex = 0.0;
  *(undefined8 *)&(this->GainIndexData).HighIndexGain = 0x3f800000;
  this->LastTableId = 0xffffffff;
  TDataReference<WaveTable::FWaveTable>::TDataReference<WaveTable::FWaveTable><>
            ((TDataReference<WaveTable::FWaveTable> *)&this->OutTable,NewObject);
  *(undefined ***)&this->OutTable =
       &___7__TDataWriteReference_UFWaveTable_WaveTable___Metasound__6B_;
  iVar1 = param_1->OperatorSettings->SampleRate;
  fVar4 = FOperatorSettings::GetActualBlockRate(param_1->OperatorSettings);
  this->BlockPeriod = fVar4 / (float)iVar1;
  (this->GainIndexData).NumSamples = 0;
  (this->GainIndexData).LowIndex = 0;
  (this->GainIndexData).HighIndex = -1;
  (this->GainIndexData).LastTableIndex = -1.0;
  (this->GainIndexData).TableIndex = 0.0;
  (this->GainIndexData).HighIndexGain = 1.0;
  puVar3 = *(undefined8 **)&(this->OutTable).field_0x8;
  this->LastTableId = 0xffffffff;
  if (puVar3 != local_38) {
    if ((void *)*puVar3 != (void *)0x0) {
      FMemory::Free((void *)*puVar3);
    }
    *puVar3 = 0;
    puVar3[1] = 0;
  }
  *(undefined4 *)(puVar3 + 2) = 0;
  return this;
}

// ~FMetasoundWaveTableGetNodeOperator @ 14b351d80

void __thiscall
Metasound::FMetasoundWaveTableGetNodeOperator::~FMetasoundWaveTableGetNodeOperator
          (FMetasoundWaveTableGetNodeOperator *this)

{
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->OutTable).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->TableIndexReadRef).field_0x10);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<0> **)&(this->WaveTableBankReadRef).field_0x10);
  this->_padding_ = (longlong)&___7IOperator_Metasound__6B_;
  return;
}

// operator() @ 14b358c00

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall
`Metasound::FMetasoundWaveTableGetNodeOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
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
  local_d8.TextData.Reference = Metasound::NodeCategories::WaveTables.TextData.Reference;
  if (Metasound::NodeCategories::WaveTables.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*Metasound::NodeCategories::WaveTables.TextData.Reference + 8))
              (Metasound::NodeCategories::WaveTables.TextData.Reference,local_res10);
  }
  local_d8.Flags = Metasound::NodeCategories::WaveTables.Flags;
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_108.AllocatorInstance,1,&local_108.ArrayMax);
  ConstructItems<FText,FText,int>(local_108.AllocatorInstance.Data,&local_d8,1);
  pFVar2 = Metasound::FMetasoundWaveTableGetNodeOperator::GetDefaultInterface();
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
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_b8,L"MetasoundEngine",L"MetasoundWaveTableGetNode_Description",
                      L"Gets or generates interpolated WaveTable from provided WaveTableBank asset based on asset sampling mode (Table Interpolation is supported only for \'FixedResolution\' banks).\nv1.1: Now supports discrete selection of WaveTableBank assets set to \'FixedSample Rate\' and/or a bit depth of 16 bit, however index interpolationis only supported for assets set to \'Fixed Resolution\'"
                     );
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_a8,L"MetasoundEngine",L"MetasoundWaveTableGetNode_Name",
                      L"Get WaveTable From Bank");
  ::FName::FName(&local_res20,"MetasoundWaveTableGet");
  ::FName::FName(&local_res18,"");
  FVar1 = local_138.Name;
  local_f8.bShowName = (bool)(undefined1)local_138.Name.ComparisonIndex.Value;
  local_f8.bShowInputNames = (bool)local_138.Name.ComparisonIndex.Value._1_1_;
  local_f8.bShowOutputNames = (bool)local_138.Name.ComparisonIndex.Value._2_1_;
  local_f8.bShowLiterals = (bool)local_138.Name.ComparisonIndex.Value._3_1_;
  local_f8.ImageName = local_138.Namespace;
  local_138.Name = FVar1;
  pFVar5 = Metasound::FNodeClassName::FNodeClassName
                     (&local_98,&Metasound::EngineNodes::Namespace,&local_res20,&local_res18);
  local_138.Namespace = pFVar5->Namespace;
  local_138.Name = pFVar5->Name;
  local_138.Variant = pFVar5->Variant;
  Metasound::FNodeClassMetadata::FNodeClassMetadata
            (__return_storage_ptr__,&local_138,1,1,pFVar4,pFVar3,&local_118,&local_c8,pFVar2,
             &local_108,&local_e8,&local_f8);
  if (local_d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// ComputeGainIndexData @ 14b368ff0

void __thiscall
Metasound::FMetasoundWaveTableGetNodeOperator::ComputeGainIndexData
          (FMetasoundWaveTableGetNodeOperator *this,
          TArray<FWaveTableData,TSizedDefaultAllocator<32>_> *param_1,EWaveTableSamplingMode param_2
          ,FWaveTable *param_3)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FWaveTableData *this_00;
  int iVar6;
  uint uVar7;
  float fVar8;
  
  if ((param_1->ArrayNum == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!WaveTables.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundWaveTableGetNode.cpp"
                         ,0x71,L"ComputGainIndexData must have WaveTable to operate on"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_1->ArrayNum == 1) {
    (this->GainIndexData).LowIndex = -1;
    (this->GainIndexData).HighIndex = 0;
    (this->GainIndexData).HighIndexGain = 1.0;
    if ((param_1->ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this_00 = (FWaveTableData *)(param_1->AllocatorInstance).Data;
  }
  else {
    if (param_2 == FixedSampleRate) {
      fVar1 = (this->GainIndexData).TableIndex;
      (this->GainIndexData).LowIndex = -1;
      (this->GainIndexData).HighIndexGain = 1.0;
      uVar4 = (int)ROUND((fVar1 + fVar1) - __real_3f000000) >> 1;
      (this->GainIndexData).HighIndex = uVar4;
      uVar7 = 0;
      if ((int)uVar4 < param_1->ArrayNum) {
        uVar7 = ~uVar4 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      if (param_2 != FixedResolution) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundWaveTableGetNode.cpp"
                           ,0x9f,L"");
        if (!bVar3) {
          return;
        }
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      fVar1 = (this->GainIndexData).TableIndex;
      iVar5 = (int)ROUND((fVar1 + fVar1) - __real_3f000000) >> 1;
      fVar8 = __real_bf000000 - (fVar1 + fVar1);
      (this->GainIndexData).LowIndex = iVar5;
      iVar6 = -((int)ROUND(fVar8) >> 1) % param_1->ArrayNum;
      (this->GainIndexData).HighIndex = iVar6;
      fVar8 = __real_3f800000;
      if (iVar5 == iVar6) {
        (this->GainIndexData).LowIndex = -1;
      }
      else {
        fVar8 = fVar1 - (float)iVar5;
      }
      (this->GainIndexData).HighIndexGain = fVar8;
      uVar7 = param_1->ArrayNum - 1;
      uVar4 = 0;
      if ((int)uVar7 < param_1->ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar4 = param_1->ArrayNum - 1;
    }
    this_00 = (FWaveTableData *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x20);
  }
  iVar5 = FWaveTableData::GetNumSamples(this_00);
  (this->GainIndexData).NumSamples = iVar5;
  return;
}

// CreateOperator @ 14b388660

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __cdecl
Metasound::FMetasoundWaveTableGetNodeOperator::CreateOperator
          (FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  FInputVertexInterfaceData *this;
  FOperatorSettings *pFVar1;
  FMetasoundWaveTableGetNodeOperator *this_00;
  FMetasoundWaveTableGetNodeOperator *pFVar2;
  FName local_res8;
  undefined1 local_48 [32];
  undefined1 local_28 [32];
  
  this = *(FInputVertexInterfaceData **)&param_2->InternalDataReferences;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  ::FName::FName(&local_res8,"WaveTableBank");
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<Metasound::FWaveTableBankAsset>
            (this,(TDataReadReference<Metasound::FWaveTableBankAsset> *)local_28,&local_res8,pFVar1)
  ;
  pFVar1 = *(FOperatorSettings **)&(param_2->Errors).ArrayNum;
  ::FName::FName(&local_res8,"TableIndex");
  FInputVertexInterfaceData::GetOrCreateDefaultDataReadReference<float>
            (this,(TDataReadReference<float> *)local_48,&local_res8,pFVar1);
  this_00 = ::operator_new(0x88);
  pFVar2 = (FMetasoundWaveTableGetNodeOperator *)0x0;
  if (this_00 != (FMetasoundWaveTableGetNodeOperator *)0x0) {
    pFVar2 = FMetasoundWaveTableGetNodeOperator
                       (this_00,(FBuildOperatorParams *)param_2,
                        (TDataReadReference<Metasound::FWaveTableBankAsset> *)local_28,
                        (TDataReadReference<float> *)local_48);
  }
  param_1->Node = (INode *)pFVar2;
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_48._16_8_);
  SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<0> *)local_28._16_8_);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// Execute @ 14b3a0340

void __thiscall
Metasound::FMetasoundWaveTableGetNodeOperator::Execute(FMetasoundWaveTableGetNodeOperator *this)

{
  longlong *plVar1;
  FWaveTable *this_00;
  longlong *plVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  code *pcVar6;
  EWaveTableSamplingMode EVar7;
  bool bVar8;
  uint uVar9;
  TArray<FWaveTableData,TSizedDefaultAllocator<32>_> *pTVar10;
  TArrayView<float,int> *pTVar11;
  int iVar12;
  uint uVar13;
  FWaveTableData *this_01;
  bool bVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  TArrayView<float,int> local_a8;
  TArrayView<float,int> local_98;
  FWaveTable local_88 [4];
  
  bVar5 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar5) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"FMetasoundWaveTableGetNodeOperator::Execute");
  }
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Metasound::FMetasoundWaveTableGetNodeOperator::Execute(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId169,"FMetasoundWaveTableGetNodeOperator::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundWaveTableGetNode.cpp"
               ,0xa9);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Metasound::FMetasoundWaveTableGetNodeOperator::Execute(void)___ptr64'
               ::__l2::__CpuProfilerEventSpecId169);
  }
  plVar1 = *(longlong **)&(this->WaveTableBankReadRef).field_0x8;
  this_00 = *(FWaveTable **)&(this->OutTable).field_0x8;
  plVar2 = (longlong *)*plVar1;
  pTVar3 = (TReferenceControllerBase<1> *)plVar1[1];
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((plVar2 == (longlong *)0x0) ||
     (pTVar10 = (TArray<FWaveTableData,TSizedDefaultAllocator<32>_> *)
                (**(code **)(*plVar2 + 0x20))(plVar2),
     uVar13 = __xmm_7fffffff7fffffff7fffffff7fffffff, pTVar10->ArrayNum == 0)) {
    ResetInternal(this);
  }
  else {
    fVar18 = **(float **)&(this->TableIndexReadRef).field_0x8;
    (this->GainIndexData).TableIndex = fVar18;
    fVar18 = (float)((uint)fVar18 & uVar13);
    iVar12 = (int)fVar18;
    fVar16 = fVar18;
    if ((iVar12 != -0x80000000) && ((float)iVar12 != fVar18)) {
      auVar17._4_4_ = fVar18;
      auVar17._0_4_ = fVar18;
      auVar17._8_8_ = 0;
      uVar9 = movmskps((int)fVar18 / pTVar10->ArrayNum,auVar17);
      fVar16 = (float)(int)(iVar12 - (uVar9 & 1));
    }
    fVar18 = (float)((int)fVar18 % pTVar10->ArrayNum) + (fVar18 - fVar16);
    (this->GainIndexData).TableIndex = fVar18;
    if ((__real_322bcc77 < (float)((uint)((this->GainIndexData).LastTableIndex - fVar18) & uVar13))
       || (this->LastTableId != *(uint *)((longlong)plVar2 + 0x24))) {
      this->LastTableId = *(uint *)((longlong)plVar2 + 0x24);
      (this->GainIndexData).LastTableIndex = (this->GainIndexData).TableIndex;
      EVar7 = (**(code **)(*plVar2 + 0x10))(plVar2);
      ComputeGainIndexData(this,pTVar10,EVar7,this_00);
      iVar12 = (this->GainIndexData).NumSamples;
      if (iVar12 < 1) {
        this->LastTableId = 0xffffffff;
        if (this_00 != local_88) {
          pFVar4 = (this_00->Samples).AllocatorInstance.Data;
          if (pFVar4 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar4);
          }
          (this_00->Samples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (this_00->Samples).ArrayNum = 0;
          (this_00->Samples).ArrayMax = 0;
        }
        this_00->FinalValue = 0.0;
      }
      else {
        fVar16 = 0.0;
        WaveTable::FWaveTable::SetNum(this_00,iVar12);
        WaveTable::FWaveTable::Zero(this_00);
        fVar18 = __real_3f800000;
        iVar12 = pTVar10->ArrayNum;
        uVar13 = 0;
        if (0 < iVar12) {
          do {
            if (uVar13 == (this->GainIndexData).LowIndex) {
              fVar19 = fVar18 - (this->GainIndexData).HighIndexGain;
LAB_14b3a0582:
              if (0.0 < fVar19) {
                uVar9 = 0;
                if ((int)uVar13 < iVar12) {
                  uVar9 = ~uVar13 >> 0x1f;
                }
                if ((uVar9 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                this_01 = (FWaveTableData *)
                          ((pTVar10->AllocatorInstance).Data + (longlong)(int)uVar13 * 0x20);
                pTVar11 = WaveTable::FWaveTable::GetSamples(this_00,&local_98);
                local_a8.DataPtr = pTVar11->DataPtr;
                local_a8.ArrayNum = pTVar11->ArrayNum;
                local_a8._12_4_ = *(undefined4 *)&pTVar11->field_0xc;
                FWaveTableData::ArrayMixIn(this_01,&local_a8,fVar19);
                fVar15 = FWaveTableData::GetFinalValue(this_01);
                fVar16 = fVar16 + fVar15 * fVar19;
              }
            }
            else if (uVar13 == (this->GainIndexData).HighIndex) {
              fVar19 = (this->GainIndexData).HighIndexGain;
              goto LAB_14b3a0582;
            }
            iVar12 = pTVar10->ArrayNum;
            uVar13 = uVar13 + 1;
          } while ((int)uVar13 < iVar12);
        }
        WaveTable::FWaveTable::SetFinalValue(this_00,fVar16);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

// GetDefaultInterface @ 14b3b2df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVertexInterface * __cdecl Metasound::FMetasoundWaveTableGetNodeOperator::GetDefaultInterface(void)

{
  code *pcVar1;
  bool bVar2;
  TOutputDataVertex<WaveTable::FWaveTable> *pTVar3;
  FInputDataVertex *pFVar4;
  FInputDataVertex *pFVar5;
  FVertexInterface *pFVar6;
  undefined1 auStackY_1e8 [32];
  float local_1b8 [2];
  FInputVertexInterface local_1b0;
  FOutputVertexInterface local_190;
  FDataVertexMetadata local_170;
  FDataVertexMetadata local_148;
  FDataVertexMetadata local_120;
  FInputVertexInterfaceDeclarationBuilder local_f8;
  FOutputVertexInterfaceDeclarationBuilder local_d0;
  TOutputDataVertex<WaveTable::FWaveTable> local_a8;
  TInputDataVertex<Metasound::FWaveTableBankAsset> local_88;
  TInputDataVertex<float> local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableGetNodeOperator::GetDefaultInterface(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableGetNodeOperator::GetDefaultInterface(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableGetNodeOperator::GetDefaultInterface(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FText::AsLocalizable_Advanced_LocText
              (&local_120.Description,L"MetasoundEngine",
               L"MetasoundWaveTableGetNode_OutputWaveTable",L"Out");
    FText::FText(&local_120.DisplayName);
    local_120.bIsAdvancedDisplay = false;
    pTVar3 = TOutputDataVertex<WaveTable::FWaveTable>::TOutputDataVertex<WaveTable::FWaveTable><>
                       (&local_a8,"Out",&local_120);
    FOutputVertexInterface::FOutputVertexInterface(&local_190);
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
    FOutputVertexInterfaceDeclarationBuilder
              (&local_d0,
               (TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *)&local_190,
               &local_190.SubInterfaces);
    if ((local_d0.Vertices)->ArrayMax < 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,&(local_d0.Vertices)->AllocatorInstance,(local_d0.Vertices)->ArrayNum,
                 &(local_d0.Vertices)->ArrayMax);
    }
    VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
              (&local_d0,(FOutputDataVertex *)pTVar3);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_d0);
    local_1b8[0] = 0.0;
    FText::AsLocalizable_Advanced_LocText
              (&local_148.Description,L"MetasoundEngine",
               L"MetasoundWaveTableGetNode_InputTableIndex",
               L"Index - supports Float input to allow index interpolation");
    FText::FText(&local_148.DisplayName);
    local_148.bIsAdvancedDisplay = false;
    pFVar4 = (FInputDataVertex *)
             TInputDataVertex<float>::TInputDataVertex<float><float>
                       (&local_50,"TableIndex",&local_148,local_1b8);
    FText::AsLocalizable_Advanced_LocText
              (&local_170.Description,L"MetasoundEngine",
               L"MetasoundWaveTableGetNode_InputWaveTableBank",L"WaveTableBank");
    FText::FText(&local_170.DisplayName);
    local_170.bIsAdvancedDisplay = false;
    pFVar5 = (FInputDataVertex *)
             TInputDataVertex<Metasound::FWaveTableBankAsset>::
             TInputDataVertex<Metasound::FWaveTableBankAsset><>
                       (&local_88,"WaveTableBank",&local_170);
    local_1b0._padding_ = 0;
    local_1b0._padding_ = 0;
    local_1b0.SubInterfaces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b0.SubInterfaces.ArrayNum = 0;
    local_1b0.SubInterfaces.ArrayMax = 0;
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::FInputVertexInterfaceDeclarationBuilder
              (&local_f8,
               (TArray<Metasound::FInputDataVertex,TSizedDefaultAllocator<32>_> *)&local_1b0,
               &local_1b0.SubInterfaces);
    if ((local_f8.Vertices)->ArrayMax < 2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,2,&(local_f8.Vertices)->AllocatorInstance,(local_f8.Vertices)->ArrayNum,
                 &(local_f8.Vertices)->ArrayMax);
    }
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f8,pFVar5);
    VertexPrivate::FInputVertexInterfaceDeclarationBuilder::Add(&local_f8,pFVar4);
    VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
              ((FSubInterfaceDeclarationBuilder *)&local_f8);
    FVertexInterface::FVertexInterface
              (&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableGetNodeOperator::GetDefaultInterface(void)'
                ::__l2::DefaultInterface,&local_1b0,&local_190);
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_1b0.SubInterfaces.AllocatorInstance.Data,
               local_1b0.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_1b0.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_1b0.SubInterfaces.AllocatorInstance.Data);
    }
    DestructItems<Metasound::FInputDataVertex,int>
              ((FInputDataVertex *)local_1b0._padding_,(int)local_1b0._padding_);
    if ((FInputDataVertex *)local_1b0._padding_ != (FInputDataVertex *)0x0) {
      FMemory::Free((void *)local_1b0._padding_);
    }
    if ((0xc < (byte)local_88._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FVertexInterface *)(*pcVar1)();
      return pFVar6;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_88._48_1_])(&local_88.field_0x20);
    if (local_170.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_170.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_170.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_170.Description.TextData.Reference + 0x10))();
    }
    if ((0xc < (byte)local_50._48_1_) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FVertexInterface *)(*pcVar1)();
      return pFVar6;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)local_50._48_1_])(&local_50.field_0x20);
    if (local_148.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_148.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_148.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_148.Description.TextData.Reference + 0x10))();
    }
    DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((FSubInterfaceLayout *)local_190.SubInterfaces.AllocatorInstance.Data,
               local_190.SubInterfaces.ArrayNum);
    if ((FSubInterfaceLayout *)local_190.SubInterfaces.AllocatorInstance.Data !=
        (FSubInterfaceLayout *)0x0) {
      FMemory::Free(local_190.SubInterfaces.AllocatorInstance.Data);
    }
    if ((void *)local_190._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_190._padding_);
    }
    if (local_120.DisplayName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_120.DisplayName.TextData.Reference + 0x10))();
    }
    if (local_120.Description.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_120.Description.TextData.Reference + 0x10))();
    }
    atexit(`Metasound::FMetasoundWaveTableGetNodeOperator::GetDefaultInterface'::__l2::
           _dynamic_atexit_destructor_for__DefaultInterface__);
    _Init_thread_footer(&`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableGetNodeOperator::GetDefaultInterface(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  return &`public:_static_class_Metasound::FVertexInterface_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableGetNodeOperator::GetDefaultInterface(void)'
          ::__l2::DefaultInterface;
}

// GetNodeInfo @ 14b3bdcb0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __cdecl Metasound::FMetasoundWaveTableGetNodeOperator::GetNodeInfo(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableGetNodeOperator::GetNodeInfo(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableGetNodeOperator::GetNodeInfo(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableGetNodeOperator::GetNodeInfo(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `Metasound::FMetasoundWaveTableGetNodeOperator::GetNodeInfo'::__l2::<lambda_1>::operator()
                (local_res8,
                 &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableGetNodeOperator::GetNodeInfo(void)'
                  ::__l2::Metadata);
      atexit(`Metasound::FMetasoundWaveTableGetNodeOperator::GetNodeInfo'::__l2::
             _dynamic_atexit_destructor_for__Metadata__);
      _Init_thread_footer(&`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableGetNodeOperator::GetNodeInfo(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableGetNodeOperator::GetNodeInfo(void)'
              ::__l2::Metadata;
    }
  }
  return &`public:_static_struct_Metasound::FNodeClassMetadata_const&___ptr64___cdecl_Metasound::FMetasoundWaveTableGetNodeOperator::GetNodeInfo(void)'
          ::__l2::Metadata;
}

// Reset @ 14b3dae10

void __thiscall
Metasound::FMetasoundWaveTableGetNodeOperator::Reset
          (FMetasoundWaveTableGetNodeOperator *this,FResetParams *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined8 local_38 [6];
  
  iVar1 = param_1->OperatorSettings->SampleRate;
  fVar3 = FOperatorSettings::GetActualBlockRate(param_1->OperatorSettings);
  this->BlockPeriod = fVar3 / (float)iVar1;
  (this->GainIndexData).NumSamples = 0;
  (this->GainIndexData).LowIndex = 0;
  (this->GainIndexData).HighIndex = -1;
  (this->GainIndexData).LastTableIndex = -1.0;
  (this->GainIndexData).TableIndex = 0.0;
  (this->GainIndexData).HighIndexGain = 1.0;
  this->LastTableId = 0xffffffff;
  puVar2 = *(undefined8 **)&(this->OutTable).field_0x8;
  if (puVar2 != local_38) {
    if ((void *)*puVar2 != (void *)0x0) {
      FMemory::Free((void *)*puVar2);
    }
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *(undefined4 *)(puVar2 + 2) = 0;
  return;
}

// ResetInternal @ 14b3dd350

void __thiscall
Metasound::FMetasoundWaveTableGetNodeOperator::ResetInternal
          (FMetasoundWaveTableGetNodeOperator *this)

{
  undefined8 *puVar1;
  undefined8 local_28 [4];
  
  (this->GainIndexData).NumSamples = 0;
  (this->GainIndexData).LowIndex = 0;
  (this->GainIndexData).HighIndex = -1;
  (this->GainIndexData).LastTableIndex = -1.0;
  (this->GainIndexData).TableIndex = 0.0;
  (this->GainIndexData).HighIndexGain = 1.0;
  puVar1 = *(undefined8 **)&(this->OutTable).field_0x8;
  this->LastTableId = 0xffffffff;
  if (puVar1 != local_28) {
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  *(undefined4 *)(puVar1 + 2) = 0;
  return;
}

