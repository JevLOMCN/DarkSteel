// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 14

// FMetasoundGraphAnalyzerView @ 14ad9b830

FMetasoundGraphAnalyzerView * __thiscall
Metasound::Frontend::FMetasoundGraphAnalyzerView::FMetasoundGraphAnalyzerView
          (FMetasoundGraphAnalyzerView *this,FMetasoundAssetBase *param_1,ulong64 param_2,
          FOperatorSettings *param_3)

{
  ISender *pIVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  FDataTransmissionCenter *this_00;
  TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> TVar5;
  FTransmissionAddress local_res8;
  undefined **local_38;
  ulong64 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  
  local_18 = 0x3dcccccd;
  (this->ActiveAnalyzerSender).Ptr = (ISender *)0x0;
  *(undefined8 *)&(this->ActiveAnalyzers).Elements = 0;
  *(undefined8 *)&(this->ActiveAnalyzers).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ActiveAnalyzers).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ActiveAnalyzers).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ActiveAnalyzers).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveAnalyzers).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActiveAnalyzers).Elements.field_0x34 = 0;
  (this->ActiveAnalyzers).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ActiveAnalyzers).HashSize = 0;
  this->InstanceID = param_2;
  this->MetaSoundAsset = param_1;
  fVar2 = param_3->TargetBlockRate;
  fVar3 = param_3->ActualBlockRate;
  iVar4 = param_3->NumFramesPerBlock;
  local_38 = &___7FGraphAnalyzerAddress_Frontend_Metasound__6B_;
  (this->OperatorSettings).SampleRate = param_3->SampleRate;
  (this->OperatorSettings).TargetBlockRate = fVar2;
  (this->OperatorSettings).ActualBlockRate = fVar3;
  (this->OperatorSettings).NumFramesPerBlock = iVar4;
  *(undefined8 *)&this->AnalyzerViews = 0;
  *(undefined8 *)&(this->AnalyzerViews).field_0x8 = 0;
  *(undefined8 *)&(this->AnalyzerViews).field_0x20 = 0;
  *(undefined4 *)&(this->AnalyzerViews).field_0x28 = 0;
  *(undefined4 *)&(this->AnalyzerViews).field_0x2c = 0x80;
  *(undefined4 *)&(this->AnalyzerViews).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AnalyzerViews).field_0x34 = 0;
  *(undefined8 *)&(this->AnalyzerViews).field_0x40 = 0;
  *(undefined4 *)&(this->AnalyzerViews).field_0x48 = 0;
  local_28._0_4_ = (this->OperatorSettings).SampleRate;
  local_28._4_4_ = (this->OperatorSettings).TargetBlockRate;
  uStack_20._0_4_ = (this->OperatorSettings).ActualBlockRate;
  uStack_20._4_4_ = (this->OperatorSettings).NumFramesPerBlock;
  local_30 = param_2;
  this_00 = FDataTransmissionCenter::Get();
  TVar5 = FDataTransmissionCenter::RegisterNewSender
                    (this_00,&local_res8,(FSenderInitParams *)&local_38);
  if (this != (FMetasoundGraphAnalyzerView *)TVar5.Ptr) {
    pIVar1 = (this->ActiveAnalyzerSender).Ptr;
    (this->ActiveAnalyzerSender).Ptr = (ISender *)(TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (pIVar1 != (ISender *)0x0) {
      (**(code **)pIVar1->_padding_)(pIVar1,1);
    }
  }
  if (local_res8 != (FTransmissionAddress)0x0) {
    (*(code *)**(undefined8 **)local_res8)(local_res8,1);
  }
  return this;
}

// ~FMetasoundGraphAnalyzerView @ 14ad9e630

void __thiscall
Metasound::Frontend::FMetasoundGraphAnalyzerView::~FMetasoundGraphAnalyzerView
          (FMetasoundGraphAnalyzerView *this)

{
  ISender *pIVar1;
  void *pvVar2;
  ForElementType<FSetElementId> FVar3;
  FDataTransmissionCenter *this_00;
  FTransmissionAddress local_18;
  ulong64 local_10;
  
  pIVar1 = (this->ActiveAnalyzerSender).Ptr;
  if (pIVar1 != (ISender *)0x0) {
    local_18 = (FTransmissionAddress)&___7FGraphAnalyzerAddress_Frontend_Metasound__6B_;
    local_10 = this->InstanceID;
    (this->ActiveAnalyzerSender).Ptr = (ISender *)0x0;
    (**(code **)pIVar1->_padding_)(pIVar1,1);
    this_00 = FDataTransmissionCenter::Get();
    FDataTransmissionCenter::UnregisterDataChannel(this_00,&local_18);
  }
  *(undefined4 *)&(this->AnalyzerViews).field_0x48 = 0;
  pvVar2 = *(void **)&(this->AnalyzerViews).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AnalyzerViews);
  (this->ActiveAnalyzers).HashSize = 0;
  FVar3 = (this->ActiveAnalyzers).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<Metasound::Frontend::FAnalyzerAddress>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<Metasound::Frontend::FAnalyzerAddress>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ActiveAnalyzers).Elements);
  pIVar1 = (this->ActiveAnalyzerSender).Ptr;
  if (pIVar1 != (ISender *)0x0) {
    (**(code **)pIVar1->_padding_)(pIVar1,1);
  }
  return;
}

// operator() @ 14ada0a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`Metasound::Frontend::FMetasoundGraphAnalyzerView::AddAnalyzerForAllSupportedOutputs'::__l2::
<lambda_1>::operator()
          (void *this,TSharedRef<Metasound::Frontend::IOutputController_const_,1> *param_1,
          FAnalyzerAddress *param_2)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  FName FVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  ulong64 uVar9;
  longlong lVar10;
  TSet<TTuple<FName,TSharedPtr<Metasound::IReceiver,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<Metasound::IReceiver,1>,0>,FDefaultSetAllocator>
  *this_00;
  FName *pFVar11;
  FName *pFVar12;
  undefined1 auStackY_198 [32];
  undefined1 local_148 [4];
  int local_144;
  undefined1 local_140 [8];
  undefined1 *local_138;
  FAnalyzerAddress *local_130;
  longlong *local_128;
  FName local_120;
  FName local_118;
  FName FStack_110;
  FName local_108;
  undefined1 local_f8 [32];
  void *local_d8;
  undefined4 local_d0;
  uint local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  ForElementType<FSetElementId> local_b8;
  int local_b0;
  undefined **local_a8;
  ulong64 local_a0;
  FName local_98;
  FName FStack_90;
  FName local_88;
  FName local_80;
  FName local_78;
  undefined1 local_70 [16];
  FName local_60;
  bool local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_130 = param_2;
  local_128 = this;
  local_120 = (FName)param_1;
  TSet<Metasound::Frontend::FAnalyzerAddress,DefaultKeyFuncs<Metasound::Frontend::FAnalyzerAddress,0>,FDefaultSetAllocator>
  ::Emplace<Metasound::Frontend::FAnalyzerAddress_const_&>
            ((TSet<Metasound::Frontend::FAnalyzerAddress,DefaultKeyFuncs<Metasound::Frontend::FAnalyzerAddress,0>,FDefaultSetAllocator>
              *)(*(longlong *)this + 8),(FAnalyzerAddress *)local_140,(bool *)param_2);
  plVar8 = (longlong *)(**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 8) + 8))();
  lVar3 = plVar8[1];
  pFVar11 = (FName *)*plVar8;
  pFVar12 = pFVar11 + (longlong)(int)lVar3 * 2;
  while( true ) {
    if ((int)plVar8[1] != (int)lVar3) {
      local_148[0] = 0;
      `TCheckedPointerIterator<Metasound::Frontend::FAnalyzerOutput_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_148);
    }
    if (pFVar11 == pFVar12) break;
    local_118.ComparisonIndex.Value = (param_2->NodeID).A;
    local_118.Number = (param_2->NodeID).B;
    FStack_110.ComparisonIndex.Value = (param_2->NodeID).C;
    FStack_110.Number = (param_2->NodeID).D;
    local_108 = param_2->OutputName;
    local_a8 = &___7FAnalyzerAddress_Frontend_Metasound__6B_;
    local_a0 = param_2->InstanceID;
    local_80 = pFVar11[1];
    local_78 = param_2->AnalyzerName;
    local_60 = *pFVar11;
    local_58 = param_2->UseDataTransmissionCenter;
    local_70._0_4_ = (param_2->AnalyzerInstanceID).A;
    local_70._4_4_ = (param_2->AnalyzerInstanceID).B;
    local_70._8_8_ = *(undefined8 *)&(param_2->AnalyzerInstanceID).C;
    local_f8._0_4_ = 0;
    local_f8._4_4_ = 0;
    local_f8._8_8_ = 0;
    local_d8 = (void *)0x0;
    local_d0 = 0;
    local_cc = 0x80;
    local_c8 = 0xffffffff;
    local_c4 = 0;
    local_b8 = (ForElementType<FSetElementId>)0x0;
    local_b0 = 0;
    local_98 = local_118;
    FStack_90 = FStack_110;
    local_88 = local_108;
    Metasound::Frontend::FMetasoundAnalyzerView::BindToAllOutputs
              ((FMetasoundAnalyzerView *)local_f8,(FOperatorSettings *)(*(longlong *)this + 0x68));
    lVar1 = *(longlong *)this;
    uVar9 = CityHash64((char *)&local_118,0x10);
    FVar4 = local_108;
    uVar6 = ::GetTypeHash(local_108.ComparisonIndex.Value);
    uVar6 = FVar4.Number + (uint)uVar9 * 0x40 + ((uint)(uVar9 >> 2) & 0x3fffffff) +
            uVar6 + 0x9e3779b9 ^ (uint)uVar9;
    iVar7 = TSet<TTuple<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<TTuple<FGuid,FName>_>
                      ((TSet<TTuple<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        *)(lVar1 + 0x78),uVar6,(TTuple<FGuid,FName> *)&local_118);
    if ((iVar7 == -1) ||
       (lVar10 = (longlong)iVar7 * 0x30 + *(longlong *)(lVar1 + 0x78), lVar10 == 0)) {
      local_138 = (undefined1 *)&local_118;
      TSet<TTuple<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<TTuple<FGuid,FName>_const_&>_>
                ((TSet<TTuple<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)(lVar1 + 0x78),(uint)&local_144,
                 (TKeyInitializer<TTuple<FGuid,FName>_const_&> *)(ulonglong)uVar6,
                 (bool *)(local_140 + 8));
      lVar10 = (longlong)local_144 * 0x30 + *(longlong *)(lVar1 + 0x78);
    }
    if ((*(undefined1 **)(lVar10 + 0x18) <= local_f8) &&
       (local_f8 < *(undefined1 **)(lVar10 + 0x18) + (longlong)*(int *)(lVar10 + 0x24) * 0xa8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar7 = *(int *)(lVar10 + 0x20);
    if (iVar7 == *(int *)(lVar10 + 0x24)) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x8a8,(ForAnyElementType *)(lVar10 + 0x18),(int *)(lVar10 + 0x24));
    }
    *(int *)(lVar10 + 0x20) = iVar7 + 1;
    this_00 = (TSet<TTuple<FName,TSharedPtr<Metasound::IReceiver,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<Metasound::IReceiver,1>,0>,FDefaultSetAllocator>
               *)(((ForAnyElementType *)(lVar10 + 0x18))->Data + (longlong)iVar7 * 0xa8);
    TSet<TTuple<FName,TSharedPtr<Metasound::IReceiver,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<Metasound::IReceiver,1>,0>,FDefaultSetAllocator>
    ::
    TSet<TTuple<FName,TSharedPtr<Metasound::IReceiver,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<Metasound::IReceiver,1>,0>,FDefaultSetAllocator>
              (this_00,(TSet<TTuple<FName,TSharedPtr<Metasound::IReceiver,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<Metasound::IReceiver,1>,0>,FDefaultSetAllocator>
                        *)local_f8);
    *(undefined ***)&this_00[1].Elements = &___7FAnalyzerAddress_Frontend_Metasound__6B_;
    *(ulong64 *)&this_00[1].Elements.field_0x8 = local_a0;
    *(uint *)&this_00[1].Elements.field_0x10 = local_98.ComparisonIndex.Value;
    *(uint *)&this_00[1].Elements.field_0x14 = local_98.Number;
    *(uint *)&this_00[1].Elements.field_0x18 = FStack_90.ComparisonIndex.Value;
    *(uint *)&this_00[1].Elements.field_0x1c = FStack_90.Number;
    *(uint *)&this_00[1].Elements.field_0x20 = local_88.ComparisonIndex.Value;
    *(uint *)&this_00[1].Elements.field_0x24 = local_88.Number;
    *(uint *)&this_00[1].Elements.field_0x28 = local_80.ComparisonIndex.Value;
    *(uint *)&this_00[1].Elements.field_0x2c = local_80.Number;
    *(uint *)&this_00[1].Elements.field_0x30 = local_78.ComparisonIndex.Value;
    *(uint *)&this_00[1].Elements.field_0x34 = local_78.Number;
    this_00[1].Hash.InlineData[0] = local_70[0];
    this_00[1].Hash.InlineData[1] = local_70[1];
    this_00[1].Hash.InlineData[2] = local_70[2];
    this_00[1].Hash.InlineData[3] = local_70[3];
    this_00[1].Hash._padding_ = local_70._4_4_;
    this_00[1].Hash.SecondaryData = (ForElementType<FSetElementId>)local_70._8_8_;
    this_00[1].HashSize = local_60.ComparisonIndex.Value;
    *(uint *)&this_00[1].field_0x4c = local_60.Number;
    *(bool *)&this_00[2].Elements = local_58;
    local_b0 = 0;
    if (local_b8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_b8);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<Metasound::IReceiver,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<Metasound::IReceiver,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_f8,0,local_f8._8_4_);
    iVar7 = SUB84(local_f8._8_8_,4);
    local_f8._8_8_ = local_f8._8_8_ & 0xffffffff00000000;
    if (iVar7 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)local_f8,0,(int *)(local_f8 + 0xc));
    }
    local_c8 = 0xffffffff;
    local_c4 = 0;
    local_d0 = 0;
    if (0x80 < local_cc) {
      local_cc = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10),0);
    }
    if (local_d8 != (void *)0x0) {
      FMemory::Free(local_d8);
    }
    if ((FName)local_f8._0_8_ != (FName)0x0) {
      FMemory::Free((void *)local_f8._0_8_);
    }
    pFVar11 = pFVar11 + 2;
    param_2 = local_130;
    this = local_128;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (((FSharedReferencer<1> *)((longlong)local_120 + 8))->ReferenceController);
  return;
}

// AddAnalyzerForAllSupportedOutputs @ 14ada5580

void __thiscall
Metasound::Frontend::FMetasoundGraphAnalyzerView::AddAnalyzerForAllSupportedOutputs
          (FMetasoundGraphAnalyzerView *this,FName param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  IVertexAnalyzerRegistry *pIVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  FName local_res10;
  undefined1 local_148 [8];
  FName local_140;
  longlong local_138;
  undefined1 local_130 [8];
  ulong64 local_128;
  TSharedRef<Metasound::Frontend::IDocumentController_const_,1> local_120;
  code *local_110;
  FMetasoundGraphAnalyzerView **local_108;
  code *local_100;
  undefined1 **local_f8;
  longlong *local_f0;
  TReferenceControllerBase<1> *local_e8;
  FMetasoundGraphAnalyzerView *local_e0;
  longlong *local_d8;
  FName *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  ulong64 *local_b8;
  FName *local_b0;
  code **local_a8;
  FConstDocumentAccessPtr local_98;
  undefined1 local_58 [64];
  
  local_res10 = param_1;
  if (this->MetaSoundAsset == (FMetasoundAssetBase *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MetaSoundAsset",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\Analysis\\MetasoundFrontendGraphAnalyzerView.cpp"
                       ,0x137,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  puVar3 = (undefined8 *)
           (**(code **)(this->MetaSoundAsset->_padding_ + 0x60))(this->MetaSoundAsset,local_58);
  local_98._56_8_ = 0;
  local_98._0_8_ = *puVar3;
  local_98._16_8_ = puVar3[2];
  if (local_98._16_8_ != 0) {
    puVar6 = puVar3 + 4;
    if ((undefined8 *)puVar3[7] != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)puVar3[7];
    }
    (**(code **)*puVar6)(puVar6,&local_98.field_0x20);
  }
  FDocumentController::CreateDocumentHandle(&local_120,&local_98);
  if (puVar3[2] != 0) {
    plVar5 = puVar3 + 4;
    if ((longlong *)puVar3[7] != (longlong *)0x0) {
      plVar5 = (longlong *)puVar3[7];
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  (**(code **)(*(longlong *)local_120.Object + 0xf8))(local_120.Object,&local_f0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_120.SharedReferenceCount.ReferenceController);
  pIVar4 = IVertexAnalyzerRegistry::Get();
  local_138 = (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res10);
  if (local_138 != 0) {
    local_d8 = &local_138;
    local_d0 = &local_res10;
    local_108 = &local_e0;
    local_110 = UE::Core::Private::Function::
                TFunctionRefCaller<`Metasound::Frontend::FMetasoundGraphAnalyzerView::AddAnalyzerForAllSupportedOutputs'::__l2::<lambda_1>,void,TSharedRef<Metasound::Frontend::IOutputController_const_,1>_const_&,Metasound::Frontend::FAnalyzerAddress_const_&>
                ::Call;
    local_128 = this->InstanceID;
    local_140 = local_res10;
    local_148[0] = param_2;
    local_e0 = this;
    pIVar4 = IVertexAnalyzerRegistry::Get();
    plVar5 = (longlong *)(**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_140);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,local_130);
      local_c8 = local_148;
      local_c0 = local_130;
      local_b8 = &local_128;
      local_b0 = &local_140;
      local_a8 = &local_110;
      local_f8 = &local_c8;
      local_100 = UE::Core::Private::Function::
                  TFunctionRefCaller<`Metasound::Frontend::GraphAnalyzerViewPrivate::IterateOutputsSupportingAnalyzer'::__l2::<lambda_1>,void,TSharedRef<Metasound::Frontend::INodeController_const_,1>_>
                  ::Call;
      (**(code **)(*local_f0 + 0x118))(local_f0,&local_100,10);
    }
    SendActiveAnalyzers(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e8);
  return;
}

// AddAnalyzerForSpecifiedOutput @ 14ada5780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FGuid * __thiscall
Metasound::Frontend::FMetasoundGraphAnalyzerView::AddAnalyzerForSpecifiedOutput
          (FMetasoundGraphAnalyzerView *this,FGuid *__return_storage_ptr__,FGuid *param_1,
          FName param_2,FName param_3,FName param_4)

{
  TMap<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  code *pcVar1;
  FMetasoundGraphAnalyzerView *pFVar2;
  FName *pFVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  IVertexAnalyzerRegistry *pIVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  FGuid *pFVar11;
  ulong64 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  TSet<TTuple<FName,TSharedPtr<Metasound::IReceiver,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<Metasound::IReceiver,1>,0>,FDefaultSetAllocator>
  *this_01;
  FName *pFVar15;
  undefined1 uVar16;
  undefined1 auStackY_248 [32];
  undefined1 local_1f8 [8];
  ulong64 local_1f0;
  int local_1e8;
  uint local_1e4;
  FMetasoundGraphAnalyzerView *local_1e0;
  undefined1 local_1d8 [8];
  undefined1 *local_1d0;
  FName *local_1c8;
  longlong *local_1c0;
  FName local_1b8;
  FName local_1b0;
  FName FStack_1a8;
  undefined1 local_1a0 [24];
  undefined1 local_188 [16];
  undefined **local_178;
  ulong64 local_170;
  undefined1 local_168 [24];
  undefined8 local_150;
  FName local_148;
  FName local_140;
  FName FStack_138;
  FName local_130;
  undefined1 local_128;
  undefined1 local_118 [8];
  FGuid local_110;
  undefined1 local_f8 [32];
  void *local_d8;
  undefined4 local_d0;
  uint local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  ForElementType<FSetElementId> local_b8;
  int local_b0;
  undefined **local_a8;
  ulong64 local_a0;
  undefined1 local_98 [24];
  FName local_80;
  FName local_78;
  FName local_70;
  FName FStack_68;
  FName local_60;
  bool local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_248;
  local_1e0 = this;
  local_1b8 = (FName)__return_storage_ptr__;
  pIVar8 = IVertexAnalyzerRegistry::Get();
  plVar9 = (longlong *)(**(code **)((longlong)*pIVar8 + 8))(pIVar8,param_3);
  if (plVar9 == (longlong *)0x0) {
    __return_storage_ptr__->A = 0;
    __return_storage_ptr__->B = 0;
    __return_storage_ptr__->C = 0;
    __return_storage_ptr__->D = 0;
  }
  else {
    local_178 = &___7FAnalyzerAddress_Frontend_Metasound__6B_;
    local_128 = 1;
    puVar10 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,local_118);
    local_188._0_4_ = param_1->A;
    local_188._4_4_ = param_1->B;
    local_188._8_4_ = param_1->C;
    local_188._12_4_ = param_1->D;
    uVar12 = this->InstanceID;
    local_150 = *puVar10;
    local_148 = param_3;
    local_1f0 = uVar12;
    local_170 = uVar12;
    local_168._0_8_ = local_188._0_8_;
    local_168._8_8_ = local_188._8_8_;
    local_168._16_8_ = param_2;
    pFVar11 = FGuid::NewGuid(&local_110);
    local_1b0.ComparisonIndex.Value = pFVar11->A;
    local_1b0.Number = pFVar11->B;
    FStack_1a8.ComparisonIndex.Value = pFVar11->C;
    FStack_1a8.Number = pFVar11->D;
    local_130 = param_4;
    local_140 = local_1b0;
    FStack_138 = FStack_1a8;
    TSet<Metasound::Frontend::FAnalyzerAddress,DefaultKeyFuncs<Metasound::Frontend::FAnalyzerAddress,0>,FDefaultSetAllocator>
    ::Emplace<Metasound::Frontend::FAnalyzerAddress_const_&>
              (&this->ActiveAnalyzers,(FAnalyzerAddress *)local_1d8,(bool *)&local_178);
    local_1c0 = (longlong *)(**(code **)(*plVar9 + 8))(plVar9);
    local_1e4 = *(uint *)(local_1c0 + 1);
    uVar14 = (ulonglong)(int)local_1e4;
    pFVar15 = (FName *)*local_1c0;
    local_1c8 = pFVar15 + uVar14 * 2;
    uVar16 = 1;
    while( true ) {
      pFVar3 = local_1c8;
      if ((int)local_1c0[1] != (int)uVar14) {
        local_1f8[0] = 0;
        `TCheckedPointerIterator<Metasound::Frontend::FAnalyzerOutput_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_1f8);
      }
      pFVar2 = local_1e0;
      if (pFVar15 == pFVar3) break;
      local_a8 = &___7FAnalyzerAddress_Frontend_Metasound__6B_;
      local_80 = pFVar15[1];
      local_1a0._0_8_ = local_188._0_8_;
      local_1a0._8_8_ = local_188._8_8_;
      local_98._0_8_ = local_188._0_8_;
      local_98._8_8_ = local_188._8_8_;
      local_60 = *pFVar15;
      local_70 = local_1b0;
      FStack_68 = FStack_1a8;
      local_f8._0_8_ = (FScriptContainerElement *)0x0;
      local_f8._8_8_ = 0;
      local_d8 = (void *)0x0;
      local_d0 = 0;
      local_cc = 0x80;
      local_c8 = 0xffffffff;
      local_c4 = 0;
      local_b8 = (ForElementType<FSetElementId>)0x0;
      local_b0 = 0;
      local_78 = param_3;
      local_1a0._16_8_ = param_2;
      local_a0 = uVar12;
      local_98._16_8_ = param_2;
      local_58 = (bool)uVar16;
      FMetasoundAnalyzerView::BindToAllOutputs
                ((FMetasoundAnalyzerView *)local_f8,&local_1e0->OperatorSettings);
      this_00 = &pFVar2->AnalyzerViews;
      uVar12 = CityHash64(local_1a0,0x10);
      uVar4 = local_1a0._16_8_;
      uVar6 = ::GetTypeHash((FNameEntryId)(uint)local_1a0._16_8_);
      uVar6 = SUB84(uVar4,4) + (uint)uVar12 * 0x40 + ((uint)(uVar12 >> 2) & 0x3fffffff) +
              uVar6 + 0x9e3779b9 ^ (uint)uVar12;
      iVar7 = TSet<TTuple<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<TTuple<FGuid,FName>_>
                        ((TSet<TTuple<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                          *)this_00,uVar6,(TTuple<FGuid,FName> *)local_1a0);
      if ((iVar7 == -1) ||
         (lVar13 = (longlong)iVar7 * 0x30 + *(longlong *)&this_00->field_0x0, lVar13 == 0)) {
        local_1d0 = local_1a0;
        TSet<TTuple<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<TTuple<FGuid,FName>_const_&>_>
                  ((TSet<TTuple<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    *)this_00,(uint)&local_1e8,
                   (TKeyInitializer<TTuple<FGuid,FName>_const_&> *)(ulonglong)uVar6,
                   (bool *)(local_1d8 + 8));
        lVar13 = (longlong)local_1e8 * 0x30 + *(longlong *)&this_00->field_0x0;
      }
      if ((*(undefined1 **)(lVar13 + 0x18) <= local_f8) &&
         (local_f8 < *(undefined1 **)(lVar13 + 0x18) + (longlong)*(int *)(lVar13 + 0x24) * 0xa8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar1 = (code *)swi(3);
          pFVar11 = (FGuid *)(*pcVar1)();
          return pFVar11;
        }
      }
      uVar12 = local_1f0;
      iVar7 = *(int *)(lVar13 + 0x20);
      if (iVar7 == *(int *)(lVar13 + 0x24)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x8a8,(ForAnyElementType *)(lVar13 + 0x18),(int *)(lVar13 + 0x24));
      }
      *(int *)(lVar13 + 0x20) = iVar7 + 1;
      this_01 = (TSet<TTuple<FName,TSharedPtr<Metasound::IReceiver,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<Metasound::IReceiver,1>,0>,FDefaultSetAllocator>
                 *)(((ForAnyElementType *)(lVar13 + 0x18))->Data + (longlong)iVar7 * 0xa8);
      TSet<TTuple<FName,TSharedPtr<Metasound::IReceiver,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<Metasound::IReceiver,1>,0>,FDefaultSetAllocator>
      ::
      TSet<TTuple<FName,TSharedPtr<Metasound::IReceiver,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<Metasound::IReceiver,1>,0>,FDefaultSetAllocator>
                (this_01,(TSet<TTuple<FName,TSharedPtr<Metasound::IReceiver,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<Metasound::IReceiver,1>,0>,FDefaultSetAllocator>
                          *)local_f8);
      *(undefined ***)&this_01[1].Elements = &___7FAnalyzerAddress_Frontend_Metasound__6B_;
      *(ulong64 *)&this_01[1].Elements.field_0x8 = local_a0;
      *(undefined8 *)&this_01[1].Elements.field_0x10 = local_98._0_8_;
      *(undefined8 *)&this_01[1].Elements.field_0x18 = local_98._8_8_;
      *(undefined8 *)&this_01[1].Elements.field_0x20 = local_98._16_8_;
      *(uint *)&this_01[1].Elements.field_0x28 = local_80.ComparisonIndex.Value;
      *(uint *)&this_01[1].Elements.field_0x2c = local_80.Number;
      *(uint *)&this_01[1].Elements.field_0x30 = local_78.ComparisonIndex.Value;
      *(uint *)&this_01[1].Elements.field_0x34 = local_78.Number;
      *(FName *)&this_01[1].Hash = local_70;
      this_01[1].Hash.SecondaryData = (ForElementType<FSetElementId>)FStack_68;
      this_01[1].HashSize = local_60.ComparisonIndex.Value;
      *(uint *)&this_01[1].field_0x4c = local_60.Number;
      *(bool *)&this_01[2].Elements = local_58;
      local_b0 = 0;
      if (local_b8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_b8);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<Metasound::IReceiver,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<Metasound::IReceiver,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_f8,0,local_f8._8_4_);
      iVar7 = SUB84(local_f8._8_8_,4);
      local_f8._8_8_ = local_f8._8_8_ & 0xffffffff00000000;
      if (iVar7 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,(ForAnyElementType *)local_f8,0,(int *)(local_f8 + 0xc));
      }
      local_c8 = 0xffffffff;
      local_c4 = 0;
      local_d0 = 0;
      if (0x80 < local_cc) {
        local_cc = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10),0);
      }
      if (local_d8 != (void *)0x0) {
        FMemory::Free(local_d8);
      }
      if ((FScriptContainerElement *)local_f8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_f8._0_8_);
      }
      pFVar15 = pFVar15 + 2;
      uVar14 = (ulonglong)local_1e4;
      uVar16 = local_128;
    }
    SendActiveAnalyzers(local_1e0);
    *(FName *)local_1b8 = local_1b0;
    *(FName *)((longlong)local_1b8 + 8) = FStack_1a8;
    __return_storage_ptr__ = (FGuid *)local_1b8;
  }
  return __return_storage_ptr__;
}

// GetAnalyzerViews @ 14adbc4f0

TArray<Metasound::Frontend::FMetasoundAnalyzerView_*,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FMetasoundGraphAnalyzerView::GetAnalyzerViews
          (FMetasoundGraphAnalyzerView *this,
          TArray<Metasound::Frontend::FMetasoundAnalyzerView_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,FName param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TMap<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar6;
  bool bVar7;
  TArray<Metasound::Frontend::FMetasoundAnalyzerView_*,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  int iVar10;
  ForElementType<unsigned_int> FVar11;
  uint *puVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res20;
  longlong local_b8;
  ForElementType<unsigned_int> local_b0;
  TMap<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,0>_>
  *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int local_78;
  int local_74;
  TMap<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,0>_>
  *local_70;
  TMap<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  local_b0 = (ForElementType<unsigned_int>)&(this->AnalyzerViews).field_0x10;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_a8 = &this->AnalyzerViews;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar2 = *(int *)&(this->AnalyzerViews).field_0x28;
  uStack_9c = 1;
  iStack_a0 = 0;
  local_88 = 0;
  iStack_8c = iStack_a0;
  if (iVar2 != 0) {
    puVar12 = *(uint **)&(this->AnalyzerViews).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)&(this->AnalyzerViews).field_0x10;
    }
    uVar13 = *puVar12;
    local_88 = 0;
    iStack_a0 = 0;
    while (uVar13 == 0) {
      lVar9 = (longlong)iStack_a0;
      local_88 = local_88 + 0x20;
      iStack_a0 = iStack_a0 + 1;
      iStack_8c = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_14adbc5b6;
      uVar13 = puVar12[lVar9 + 1];
    }
    uStack_9c = -uVar13 & uVar13;
    uVar1 = (ulonglong)uStack_9c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_78 = (int)lVar9;
    iStack_8c = local_88 + -1 + local_78;
    if (iVar2 < iStack_8c) {
      iStack_8c = iVar2;
    }
  }
LAB_14adbc5b6:
  local_98 = &(this->AnalyzerViews).field_0x10;
  iStack_80 = *(int *)&(this->AnalyzerViews).field_0x8 - *(int *)&(this->AnalyzerViews).field_0x34;
  local_res20 = *(uint *)&(this->AnalyzerViews).field_0x28;
  TStack_60._padding_ = CONCAT44(uStack_9c,iStack_a0);
  uStack_90 = 0xffffffff;
  uVar13 = local_res20 & 0xffffffe0;
  TStack_60.CurrentBitIndex = iStack_8c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)local_res20 >> 5;
  TStack_60._28_4_ = iStack_8c;
  TStack_60.BaseBitIndex = local_88;
  uStack_40 = CONCAT44(uStack_7c,iStack_80);
  iStack_84 = iStack_8c;
  local_70 = local_a8;
  local_68 = local_a8;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_98;
  if ((((int)local_res20 < 0) || (iVar2 < (int)local_res20)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TArray<Metasound::Frontend::FMetasoundAnalyzerView_*,TSizedDefaultAllocator<32>_> *)
             (*pcVar5)();
    return pTVar8;
  }
  uVar3 = *(int *)((longlong)local_b0 + 0x18);
  if (local_res20 != uVar3) {
    FVar11 = *(ForElementType<unsigned_int> *)((longlong)local_b0 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_b0 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar11 = local_b0;
    }
    uVar15 = -1 << ((byte)local_res20 & 0x1f) & *(uint *)((longlong)FVar11 + (longlong)iVar10 * 4);
    while (uVar15 == 0) {
      lVar9 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      local_res20 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14adbc6e0;
      uVar15 = *(uint *)((undefined1 *)((longlong)FVar11 + 4) + lVar9 * 4);
    }
    uVar1 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_74 = (int)lVar9;
    local_res20 = local_74 + -1 + uVar13;
    if ((int)uVar3 < (int)local_res20) {
      local_res20 = uVar3;
    }
  }
LAB_14adbc6e0:
  while( true ) {
    pTVar6 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == local_res20) &&
        ((ForElementType<unsigned_int>)TStack_60.Array == local_b0)) && (pTVar6 == local_70)) break;
    lVar16 = (longlong)TStack_60.CurrentBitIndex * 0x30 + *(longlong *)pTVar6;
    iVar2 = *(int *)(lVar16 + 0x20);
    lVar9 = *(longlong *)(lVar16 + 0x18);
    lVar14 = (longlong)iVar2 * 0xa8 + lVar9;
    while( true ) {
      if (*(int *)(lVar16 + 0x20) != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<Metasound::Frontend::FMetasoundAnalyzerView,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res10);
      }
      if (lVar9 == lVar14) break;
      if (*(FName *)(lVar9 + 0x80) == param_1) {
        pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
        local_b8 = lVar9;
        if (((pFVar4 <= (FScriptContainerElement *)&local_b8) &&
            ((FScriptContainerElement *)&local_b8 <
             pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar8 = (TArray<Metasound::Frontend::FMetasoundAnalyzerView_*,TSizedDefaultAllocator<32>_>
                    *)(*pcVar5)();
          return pTVar8;
        }
        iVar10 = __return_storage_ptr__->ArrayNum;
        if (iVar10 == __return_storage_ptr__->ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&__return_storage_ptr__->AllocatorInstance,
                              &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar10 + 1;
        *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar10 * 8) =
             local_b8;
      }
      lVar9 = lVar9 + 0xa8;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return __return_storage_ptr__;
}

// GetAnalyzerViews @ 14adbc850

TArray<Metasound::Frontend::FMetasoundAnalyzerView_const_*,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FMetasoundGraphAnalyzerView::GetAnalyzerViews
          (FMetasoundGraphAnalyzerView *this,
          TArray<Metasound::Frontend::FMetasoundAnalyzerView_const_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,FName param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TMap<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar6;
  bool bVar7;
  TArray<Metasound::Frontend::FMetasoundAnalyzerView_const_*,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  int iVar10;
  ForElementType<unsigned_int> FVar11;
  uint *puVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res20;
  longlong local_b8;
  ForElementType<unsigned_int> local_b0;
  TMap<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,0>_>
  *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int local_78;
  int local_74;
  TMap<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,0>_>
  *local_70;
  TMap<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  local_b0 = (ForElementType<unsigned_int>)&(this->AnalyzerViews).field_0x10;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_a8 = &this->AnalyzerViews;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar2 = *(int *)&(this->AnalyzerViews).field_0x28;
  uStack_9c = 1;
  iStack_a0 = 0;
  local_88 = 0;
  iStack_8c = iStack_a0;
  if (iVar2 != 0) {
    puVar12 = *(uint **)&(this->AnalyzerViews).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)&(this->AnalyzerViews).field_0x10;
    }
    uVar13 = *puVar12;
    local_88 = 0;
    iStack_a0 = 0;
    while (uVar13 == 0) {
      lVar9 = (longlong)iStack_a0;
      local_88 = local_88 + 0x20;
      iStack_a0 = iStack_a0 + 1;
      iStack_8c = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_14adbc916;
      uVar13 = puVar12[lVar9 + 1];
    }
    uStack_9c = -uVar13 & uVar13;
    uVar1 = (ulonglong)uStack_9c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_78 = (int)lVar9;
    iStack_8c = local_88 + -1 + local_78;
    if (iVar2 < iStack_8c) {
      iStack_8c = iVar2;
    }
  }
LAB_14adbc916:
  local_98 = &(this->AnalyzerViews).field_0x10;
  iStack_80 = *(int *)&(this->AnalyzerViews).field_0x8 - *(int *)&(this->AnalyzerViews).field_0x34;
  local_res20 = *(uint *)&(this->AnalyzerViews).field_0x28;
  TStack_60._padding_ = CONCAT44(uStack_9c,iStack_a0);
  uStack_90 = 0xffffffff;
  uVar13 = local_res20 & 0xffffffe0;
  TStack_60.CurrentBitIndex = iStack_8c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)local_res20 >> 5;
  TStack_60._28_4_ = iStack_8c;
  TStack_60.BaseBitIndex = local_88;
  uStack_40 = CONCAT44(uStack_7c,iStack_80);
  iStack_84 = iStack_8c;
  local_70 = local_a8;
  local_68 = local_a8;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_98;
  if ((((int)local_res20 < 0) || (iVar2 < (int)local_res20)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TArray<Metasound::Frontend::FMetasoundAnalyzerView_const_*,TSizedDefaultAllocator<32>_>
              *)(*pcVar5)();
    return pTVar8;
  }
  uVar3 = *(int *)((longlong)local_b0 + 0x18);
  if (local_res20 != uVar3) {
    FVar11 = *(ForElementType<unsigned_int> *)((longlong)local_b0 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_b0 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar11 = local_b0;
    }
    uVar15 = -1 << ((byte)local_res20 & 0x1f) & *(uint *)((longlong)FVar11 + (longlong)iVar10 * 4);
    while (uVar15 == 0) {
      lVar9 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      local_res20 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14adbca40;
      uVar15 = *(uint *)((undefined1 *)((longlong)FVar11 + 4) + lVar9 * 4);
    }
    uVar1 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_74 = (int)lVar9;
    local_res20 = local_74 + -1 + uVar13;
    if ((int)uVar3 < (int)local_res20) {
      local_res20 = uVar3;
    }
  }
LAB_14adbca40:
  while( true ) {
    pTVar6 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == local_res20) &&
        ((ForElementType<unsigned_int>)TStack_60.Array == local_b0)) && (pTVar6 == local_70)) break;
    lVar16 = (longlong)TStack_60.CurrentBitIndex * 0x30 + *(longlong *)pTVar6;
    iVar2 = *(int *)(lVar16 + 0x20);
    lVar9 = *(longlong *)(lVar16 + 0x18);
    lVar14 = (longlong)iVar2 * 0xa8 + lVar9;
    while( true ) {
      if (*(int *)(lVar16 + 0x20) != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<Metasound::Frontend::FMetasoundAnalyzerView_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (lVar9 == lVar14) break;
      if (*(FName *)(lVar9 + 0x80) == param_1) {
        pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
        local_b8 = lVar9;
        if (((pFVar4 <= (FScriptContainerElement *)&local_b8) &&
            ((FScriptContainerElement *)&local_b8 <
             pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar8 = (TArray<Metasound::Frontend::FMetasoundAnalyzerView_const_*,TSizedDefaultAllocator<32>_>
                    *)(*pcVar5)();
          return pTVar8;
        }
        iVar10 = __return_storage_ptr__->ArrayNum;
        if (iVar10 == __return_storage_ptr__->ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&__return_storage_ptr__->AllocatorInstance,
                              &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar10 + 1;
        *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar10 * 8) =
             local_b8;
      }
      lVar9 = lVar9 + 0xa8;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return __return_storage_ptr__;
}

// GetAnalyzerViewsForOutput @ 14adbcbb0

TArray<Metasound::Frontend::FMetasoundAnalyzerView_*,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FMetasoundGraphAnalyzerView::GetAnalyzerViewsForOutput
          (FMetasoundGraphAnalyzerView *this,
          TArray<Metasound::Frontend::FMetasoundAnalyzerView_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,FGuid *param_1,FName param_2,FName param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulong64 uVar8;
  TArray<Metasound::Frontend::FMetasoundAnalyzerView_*,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined1 local_res8 [8];
  longlong local_48;
  undefined1 local_40 [24];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_40._0_4_ = param_1->A;
  local_40._4_4_ = param_1->B;
  local_40._8_4_ = param_1->C;
  local_40._12_4_ = param_1->D;
  local_40._16_8_ = param_2;
  uVar8 = CityHash64(local_40,0x10);
  uVar4 = local_40._16_8_;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)local_40._16_8_);
  iVar7 = TSet<TTuple<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TTuple<FGuid,FName>_>
                    ((TSet<TTuple<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&this->AnalyzerViews,
                     (uint)uVar8 * 0x40 + SUB84(uVar4,4) + ((uint)(uVar8 >> 2) & 0x3fffffff) +
                     uVar6 + 0x9e3779b9 ^ (uint)uVar8,(TTuple<FGuid,FName> *)local_40);
  if (iVar7 != -1) {
    lVar11 = (longlong)iVar7 * 0x30 + *(longlong *)&(this->AnalyzerViews).field_0x0;
    plVar12 = (longlong *)(lVar11 + 0x18);
    if (lVar11 == 0) {
      plVar12 = (longlong *)0x0;
    }
    if (plVar12 != (longlong *)0x0) {
      lVar3 = plVar12[1];
      lVar11 = *plVar12;
      lVar10 = (longlong)(int)lVar3 * 0xa8 + lVar11;
      while( true ) {
        if ((int)plVar12[1] != (int)lVar3) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<Metasound::Frontend::FMetasoundAnalyzerView,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_res8);
        }
        if (lVar11 == lVar10) break;
        if (*(FName *)(lVar11 + 0x80) == param_3) {
          pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
          local_48 = lVar11;
          if (((pFVar1 <= (FScriptContainerElement *)&local_48) &&
              ((FScriptContainerElement *)&local_48 <
               pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar2 = (code *)swi(3);
            pTVar9 = (TArray<Metasound::Frontend::FMetasoundAnalyzerView_*,TSizedDefaultAllocator<32>_>
                      *)(*pcVar2)();
            return pTVar9;
          }
          iVar7 = __return_storage_ptr__->ArrayNum;
          if (iVar7 == __return_storage_ptr__->ArrayMax) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar7 + 1;
          *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) =
               local_48;
        }
        lVar11 = lVar11 + 0xa8;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetAnalyzerViewsForOutput @ 14adbcd80

TArray<Metasound::Frontend::FMetasoundAnalyzerView_const_*,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FMetasoundGraphAnalyzerView::GetAnalyzerViewsForOutput
          (FMetasoundGraphAnalyzerView *this,
          TArray<Metasound::Frontend::FMetasoundAnalyzerView_const_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,FGuid *param_1,FName param_2,FName param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulong64 uVar8;
  TArray<Metasound::Frontend::FMetasoundAnalyzerView_const_*,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined1 local_res8 [8];
  longlong local_48;
  undefined1 local_40 [24];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_40._0_4_ = param_1->A;
  local_40._4_4_ = param_1->B;
  local_40._8_4_ = param_1->C;
  local_40._12_4_ = param_1->D;
  local_40._16_8_ = param_2;
  uVar8 = CityHash64(local_40,0x10);
  uVar4 = local_40._16_8_;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)local_40._16_8_);
  iVar7 = TSet<TTuple<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TTuple<FGuid,FName>_>
                    ((TSet<TTuple<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&this->AnalyzerViews,
                     (uint)uVar8 * 0x40 + SUB84(uVar4,4) + ((uint)(uVar8 >> 2) & 0x3fffffff) +
                     uVar6 + 0x9e3779b9 ^ (uint)uVar8,(TTuple<FGuid,FName> *)local_40);
  if (iVar7 != -1) {
    lVar11 = (longlong)iVar7 * 0x30 + *(longlong *)&(this->AnalyzerViews).field_0x0;
    plVar12 = (longlong *)(lVar11 + 0x18);
    if (lVar11 == 0) {
      plVar12 = (longlong *)0x0;
    }
    if (plVar12 != (longlong *)0x0) {
      lVar3 = plVar12[1];
      lVar11 = *plVar12;
      lVar10 = (longlong)(int)lVar3 * 0xa8 + lVar11;
      while( true ) {
        if ((int)plVar12[1] != (int)lVar3) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<Metasound::Frontend::FMetasoundAnalyzerView_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (lVar11 == lVar10) break;
        if (*(FName *)(lVar11 + 0x80) == param_3) {
          pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
          local_48 = lVar11;
          if (((pFVar1 <= (FScriptContainerElement *)&local_48) &&
              ((FScriptContainerElement *)&local_48 <
               pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar2 = (code *)swi(3);
            pTVar9 = (TArray<Metasound::Frontend::FMetasoundAnalyzerView_const_*,TSizedDefaultAllocator<32>_>
                      *)(*pcVar2)();
            return pTVar9;
          }
          iVar7 = __return_storage_ptr__->ArrayNum;
          if (iVar7 == __return_storage_ptr__->ArrayMax) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar7 + 1;
          *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) =
               local_48;
        }
        lVar11 = lVar11 + 0xa8;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetMetaSoundAssetChecked @ 14adc06b0

FMetasoundAssetBase * __thiscall
Metasound::Frontend::FMetasoundGraphAnalyzerView::GetMetaSoundAssetChecked
          (FMetasoundGraphAnalyzerView *this)

{
  code *pcVar1;
  bool bVar2;
  FMetasoundAssetBase *pFVar3;
  
  if (this->MetaSoundAsset != (FMetasoundAssetBase *)0x0) {
    return this->MetaSoundAsset;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("MetaSoundAsset",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\Analysis\\MetasoundFrontendGraphAnalyzerView.cpp"
                     ,0x137,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMetasoundAssetBase *)(*pcVar1)();
    return pFVar3;
  }
  return this->MetaSoundAsset;
}

// HasAnalyzerInstance @ 14adc3ee0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
Metasound::Frontend::FMetasoundGraphAnalyzerView::HasAnalyzerInstance
          (FMetasoundGraphAnalyzerView *this,FName param_1,FGuid *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar3 = *(int *)&(this->ActiveAnalyzers).Elements.field_0x28;
  puVar1 = &(this->ActiveAnalyzers).Elements.field_0x10;
  iVar13 = 0;
  uVar8 = 1;
  iVar11 = 0;
  iVar9 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->ActiveAnalyzers).Elements.field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar15 = *puVar14;
    while (uVar15 == 0) {
      lVar10 = (longlong)iVar13;
      iVar11 = iVar11 + 0x20;
      iVar13 = iVar13 + 1;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14adc3f90;
      uVar15 = puVar14[lVar10 + 1];
    }
    uVar8 = -uVar15 & uVar15;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar9 = (int)lVar10 + -1 + iVar11;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_14adc3f90:
  uVar15 = *(uint *)&(this->ActiveAnalyzers).Elements.field_0x28;
  TStack_68._padding_ = CONCAT44(uVar8,iVar13);
  uVar8 = uVar15 & 0xffffffe0;
  TStack_68.CurrentBitIndex = iVar9;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar15 >> 5;
  TStack_68._28_4_ = iVar9;
  TStack_68.BaseBitIndex = iVar11;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(this->ActiveAnalyzers).Elements.field_0x8 -
                       *(int *)&(this->ActiveAnalyzers).Elements.field_0x34);
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar3 < (int)uVar15)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  uVar4 = *(uint *)&(this->ActiveAnalyzers).Elements.field_0x28;
  if (uVar15 != uVar4) {
    puVar12 = *(undefined1 **)&(this->ActiveAnalyzers).Elements.field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar13 * 4);
    while (uVar15 == 0) {
      lVar10 = (longlong)iVar13;
      uVar8 = uVar8 + 0x20;
      iVar13 = iVar13 + 1;
      uVar15 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14adc40a0;
      uVar15 = *(uint *)(puVar12 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar15 = (int)lVar10 + -1 + uVar8;
    if ((int)uVar4 < (int)uVar15) {
      uVar15 = uVar4;
    }
  }
LAB_14adc40a0:
  while( true ) {
    if (*(int *)&(this->ActiveAnalyzers).Elements.field_0x8 -
        *(int *)&(this->ActiveAnalyzers).Elements.field_0x34 != (int)uStack_48) {
      `TSparseArray<TSparseSetElement<Metasound::Frontend::FAnalyzerAddress>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_68.CurrentBitIndex == uVar15) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar10 = (longlong)TStack_68.CurrentBitIndex * 0x60 +
             *(longlong *)&(this->ActiveAnalyzers).Elements;
    if ((*(FName *)(lVar10 + 0x30) == param_1) &&
       (((*(uint *)(lVar10 + 0x44) == param_2->D && *(uint *)(lVar10 + 0x40) == param_2->C) &&
        *(uint *)(lVar10 + 0x3c) == param_2->B) && *(uint *)(lVar10 + 0x38) == param_2->A)) {
      return true;
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return false;
}

// RemoveAnalyzerForAllSupportedOutputs @ 14adce1f0

void __thiscall
Metasound::Frontend::FMetasoundGraphAnalyzerView::RemoveAnalyzerForAllSupportedOutputs
          (FMetasoundGraphAnalyzerView *this,FName param_1)

{
  TTuple<FGuid,FName> *pTVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  TMap<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar5;
  bool bVar6;
  ulong64 uVar7;
  int iVar8;
  longlong lVar9;
  FName *pFVar10;
  undefined8 uVar11;
  uint uVar12;
  int iVar13;
  FAnalyzerAddress *pFVar14;
  int iVar15;
  longlong lVar16;
  ForAnyElementType FVar17;
  undefined1 *puVar18;
  uint *puVar19;
  TMap<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar20;
  TBitArray<FDefaultBitArrayAllocator> *pTVar21;
  uint uVar22;
  int iVar23;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_e8;
  int local_e0;
  int iStack_dc;
  undefined1 local_d8 [4];
  uint local_d4;
  TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> local_d0;
  TMap<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,0>_>
  *local_c0;
  int iStack_b8;
  uint uStack_b4;
  undefined1 *local_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  int local_90;
  int local_8c;
  longlong local_88;
  TTuple<FGuid,FName> *local_80;
  TBitArray<FDefaultBitArrayAllocator> *local_78;
  TMap<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,0>_>
  *local_70;
  TMap<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  pTVar21 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->AnalyzerViews).field_0x10;
  local_e8.Data = (FScriptContainerElement *)0x0;
  pTVar20 = &this->AnalyzerViews;
  local_e0 = 0;
  iStack_dc = 0;
  iVar8 = *(int *)&(this->AnalyzerViews).field_0x28;
  iStack_b8 = 0;
  uStack_b4 = 1;
  iStack_a4 = 0;
  local_a0 = iStack_b8;
  if (iVar8 != 0) {
    puVar19 = *(uint **)&(this->AnalyzerViews).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)pTVar21;
    }
    uVar12 = *puVar19;
    local_a0 = 0;
    iStack_b8 = 0;
    while (uVar12 == 0) {
      lVar9 = (longlong)iStack_b8;
      local_a0 = local_a0 + 0x20;
      iStack_b8 = iStack_b8 + 1;
      iStack_a4 = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b8) goto LAB_14adce2ae;
      uVar12 = puVar19[lVar9 + 1];
    }
    uStack_b4 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uStack_b4 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_90 = (int)lVar9;
    iStack_a4 = local_a0 + -1 + local_90;
    if (iVar8 < iStack_a4) {
      iStack_a4 = iVar8;
    }
  }
LAB_14adce2ae:
  uVar12 = *(uint *)&(this->AnalyzerViews).field_0x28;
  iStack_98 = *(int *)&(this->AnalyzerViews).field_0x8 - *(int *)&(this->AnalyzerViews).field_0x34;
  uVar22 = uVar12 & 0xffffffe0;
  uStack_a8 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_b4,iStack_b8);
  TStack_60.CurrentBitIndex = iStack_a4;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iStack_a4;
  TStack_60.BaseBitIndex = local_a0;
  uStack_40 = CONCAT44(uStack_94,iStack_98);
  local_d4 = uVar12;
  local_c0 = pTVar20;
  local_b0 = (undefined1 *)pTVar21;
  iStack_9c = iStack_a4;
  local_78 = pTVar21;
  local_70 = pTVar20;
  local_68 = pTVar20;
  TStack_60.Array = pTVar21;
  if ((((int)uVar12 < 0) || (iVar8 < (int)uVar12)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar3 = *(uint *)&(this->AnalyzerViews).field_0x28;
  if (uVar12 != uVar3) {
    puVar18 = *(undefined1 **)&(this->AnalyzerViews).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = (undefined1 *)pTVar21;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar15 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar15;
      uVar22 = uVar22 + 0x20;
      iVar15 = iVar15 + 1;
      uVar12 = uVar3;
      local_d4 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14adce3d0;
      uVar12 = *(uint *)(puVar18 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_8c = (int)lVar9;
    uVar12 = local_8c + -1 + uVar22;
    local_d4 = uVar12;
    if ((int)uVar3 < (int)uVar12) {
      uVar12 = uVar3;
      local_d4 = uVar3;
    }
  }
LAB_14adce3d0:
  pTVar5 = local_68;
  if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
    local_res18[0] = 0;
    `TSparseArray<TSparseSetElement<TTuple<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
  }
  iVar8 = local_e0;
  if (((TStack_60.CurrentBitIndex != uVar12) || (TStack_60.Array != pTVar21)) || (pTVar5 != pTVar20)
     ) {
    local_80 = (TTuple<FGuid,FName> *)
               (*(longlong *)pTVar5 + (longlong)TStack_60.CurrentBitIndex * 0x30);
    lVar9 = (longlong)*(int *)&local_80[1].field_0x8;
    if (*(int *)&local_80[1].field_0x8 == 0) {
LAB_14adce4fa:
      pTVar1 = local_80;
      if (((local_e8.Data <= local_80) &&
          (local_80 < (TTuple<FGuid,FName> *)(local_e8.Data + (longlong)iStack_dc * 0x18))) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (local_e0 == iStack_dc) {
        local_e0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x418,&local_e8,&iStack_dc);
      }
      lVar9 = (longlong)local_e0;
      local_e0 = local_e0 + 1;
      uVar11 = *(undefined8 *)&pTVar1->field_0x8;
      *(undefined8 *)(local_e8.Data + lVar9 * 0x18) = *(undefined8 *)pTVar1;
      *(undefined8 *)(local_e8.Data + lVar9 * 0x18 + 8) = uVar11;
      *(undefined8 *)(local_e8.Data + lVar9 * 0x18 + 0x10) = *(undefined8 *)&pTVar1->field_0x10;
    }
    else {
      local_88 = *(longlong *)(local_80 + 1);
      iVar15 = 0;
      lVar16 = 0;
      bVar6 = *(FName *)(local_88 + 0x80) != param_1;
      iVar8 = 0;
      do {
        lVar16 = lVar16 + 1;
        iVar13 = iVar8 + 1;
        if (lVar16 < lVar9) {
          pFVar10 = (FName *)(lVar16 * 0xa8 + 0x80 + local_88);
          do {
            if (bVar6 != (*pFVar10 != param_1)) break;
            iVar13 = iVar13 + 1;
            lVar16 = lVar16 + 1;
            pFVar10 = pFVar10 + 0x15;
          } while (lVar16 < lVar9);
        }
        iVar23 = iVar13 - iVar8;
        if (bVar6 == false) {
          DestructItems<Metasound::Frontend::FMetasoundAnalyzerView,int>
                    ((FMetasoundAnalyzerView *)((longlong)iVar8 * 0xa8 + local_88),iVar23);
        }
        else {
          if (iVar15 != iVar8) {
            memmove((void *)((longlong)iVar15 * 0xa8 + local_88),
                    (void *)((longlong)iVar8 * 0xa8 + local_88),(longlong)iVar23 * 0xa8);
          }
          iVar15 = iVar15 + iVar23;
        }
        bVar6 = (bool)(bVar6 ^ 1);
        iVar8 = iVar13;
      } while (lVar16 < lVar9);
      *(int *)&local_80[1].field_0x8 = iVar15;
      pTVar20 = local_70;
      pTVar21 = local_78;
      uVar12 = local_d4;
      if (iVar15 == 0) goto LAB_14adce4fa;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    goto LAB_14adce3d0;
  }
  pTVar1 = (TTuple<FGuid,FName> *)(local_e8.Data + (longlong)local_e0 * 0x18);
  FVar17.Data = local_e8.Data;
  while( true ) {
    if (local_e0 != iVar8) {
      `TCheckedPointerIterator<TTuple<FGuid,FName>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if ((TTuple<FGuid,FName> *)FVar17.Data == pTVar1) break;
    if (*(int *)&(this->AnalyzerViews).field_0x8 != *(int *)&(this->AnalyzerViews).field_0x34) {
      uVar7 = CityHash64((char *)FVar17.Data,0x10);
      uVar11 = *(undefined8 *)&((TTuple<FGuid,FName> *)FVar17.Data)->field_0x10;
      uVar12 = ::GetTypeHash((FNameEntryId)(uint)uVar11);
      TSet<TTuple<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::RemoveImpl<TTuple<FGuid,FName>_>
                ((TSet<TTuple<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)&this->AnalyzerViews,
                 (uint)uVar7 * 0x40 + (int)((ulonglong)uVar11 >> 0x20) +
                 ((uint)(uVar7 >> 2) & 0x3fffffff) + uVar12 + 0x9e3779b9 ^ (uint)uVar7,
                 (TTuple<FGuid,FName> *)FVar17.Data);
    }
    FVar17.Data = FVar17.Data + 0x18;
  }
  TSet<Metasound::Frontend::FAnalyzerAddress,DefaultKeyFuncs<Metasound::Frontend::FAnalyzerAddress,0>,FDefaultSetAllocator>
  ::Array(&this->ActiveAnalyzers,&local_d0);
  iVar8 = local_d0.ArrayNum;
  pFVar14 = (FAnalyzerAddress *)(local_d0.AllocatorInstance.Data + (longlong)iVar8 * 0x58);
  uVar11 = local_d0._8_8_;
  FVar17.Data = local_d0.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar11 != iVar8) {
      `TCheckedPointerIterator<Metasound::Frontend::FAnalyzerAddress,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_d8);
      uVar11 = local_d0._8_8_;
    }
    if ((FAnalyzerAddress *)FVar17.Data == pFVar14) goto LAB_14adce6b3;
    if (((FAnalyzerAddress *)FVar17.Data)->AnalyzerName == param_1) break;
    FVar17.Data = FVar17.Data + 0x58;
  }
  if (*(int *)&(this->ActiveAnalyzers).Elements.field_0x8 !=
      *(int *)&(this->ActiveAnalyzers).Elements.field_0x34) {
    uVar12 = (**(code **)(((FAnalyzerAddress *)FVar17.Data)->_padding_ + 0x28))(FVar17.Data);
    TSet<Metasound::Frontend::FAnalyzerAddress,DefaultKeyFuncs<Metasound::Frontend::FAnalyzerAddress,0>,FDefaultSetAllocator>
    ::RemoveImpl<Metasound::Frontend::FAnalyzerAddress>
              (&this->ActiveAnalyzers,uVar12,(FAnalyzerAddress *)FVar17.Data);
  }
LAB_14adce6b3:
  SendActiveAnalyzers(this);
  if ((FAnalyzerAddress *)local_d0.AllocatorInstance.Data != (FAnalyzerAddress *)0x0) {
    FMemory::Free(local_d0.AllocatorInstance.Data);
  }
  if ((TTuple<FGuid,FName> *)local_e8.Data != (TTuple<FGuid,FName> *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  return;
}

// RemoveAnalyzerInstance @ 14adce700

void __thiscall
Metasound::Frontend::FMetasoundGraphAnalyzerView::RemoveAnalyzerInstance
          (FMetasoundGraphAnalyzerView *this,FName param_1,FGuid *param_2)

{
  TTuple<FGuid,FName> *pTVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  TMap<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar5;
  bool bVar6;
  int *piVar7;
  ulong64 uVar8;
  byte bVar9;
  longlong lVar10;
  undefined8 uVar11;
  uint uVar12;
  int iVar13;
  FAnalyzerAddress *pFVar14;
  int iVar15;
  longlong lVar16;
  ForAnyElementType FVar17;
  undefined1 *puVar18;
  uint *puVar19;
  byte bVar20;
  TBitArray<FDefaultBitArrayAllocator> *pTVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  undefined1 local_res20 [8];
  ForAnyElementType local_108;
  int local_100;
  int iStack_fc;
  undefined1 local_f8;
  undefined1 local_f7 [3];
  uint local_f4;
  TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> local_f0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  TMap<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,0>_>
  *local_c8;
  int iStack_c0;
  uint uStack_bc;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  int local_98;
  int local_94;
  TMap<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,0>_>
  *local_90;
  longlong local_88;
  TTuple<FGuid,FName> *local_80;
  TBitArray<FDefaultBitArrayAllocator> *local_78;
  TMap<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,0>_>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  pTVar21 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->AnalyzerViews).field_0x10;
  local_108.Data = (FScriptContainerElement *)0x0;
  local_c8 = &this->AnalyzerViews;
  local_100 = 0;
  iStack_fc = 0;
  iVar23 = *(int *)&(this->AnalyzerViews).field_0x28;
  iStack_c0 = 0;
  uStack_bc = 1;
  local_a8 = 0;
  iStack_ac = iStack_c0;
  if (iVar23 != 0) {
    puVar19 = *(uint **)&(this->AnalyzerViews).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)pTVar21;
    }
    uVar12 = *puVar19;
    local_a8 = 0;
    iStack_c0 = 0;
    while (uVar12 == 0) {
      lVar10 = (longlong)iStack_c0;
      local_a8 = local_a8 + 0x20;
      iStack_c0 = iStack_c0 + 1;
      iStack_ac = iVar23;
      if ((int)(iVar23 + -1 + (iVar23 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c0) goto LAB_14adce7ce;
      uVar12 = puVar19[lVar10 + 1];
    }
    uStack_bc = -uVar12 & uVar12;
    uVar2 = (ulonglong)uStack_bc * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_98 = (int)lVar10;
    iStack_ac = local_98 + -1 + local_a8;
    if (iVar23 < iStack_ac) {
      iStack_ac = iVar23;
    }
  }
LAB_14adce7ce:
  iStack_a0 = *(int *)&(this->AnalyzerViews).field_0x8 - *(int *)&(this->AnalyzerViews).field_0x34;
  uVar12 = *(uint *)&(this->AnalyzerViews).field_0x28;
  uStack_b0 = 0xffffffff;
  TStack_68._padding_ = CONCAT44(uStack_bc,iStack_c0);
  uVar22 = uVar12 & 0xffffffe0;
  TStack_68.CurrentBitIndex = iStack_ac;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar12 >> 5;
  TStack_68._28_4_ = iStack_ac;
  TStack_68.BaseBitIndex = local_a8;
  uStack_48 = CONCAT44(uStack_9c,iStack_a0);
  local_f4 = uVar12;
  local_b8 = (undefined1 *)pTVar21;
  iStack_a4 = iStack_ac;
  local_90 = local_c8;
  local_78 = pTVar21;
  local_70 = local_c8;
  TStack_68.Array = pTVar21;
  if ((((int)uVar12 < 0) || (iVar23 < (int)uVar12)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar3 = *(uint *)&(this->AnalyzerViews).field_0x28;
  if (uVar12 != uVar3) {
    puVar18 = *(undefined1 **)&(this->AnalyzerViews).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = (undefined1 *)pTVar21;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar15 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar15;
      uVar22 = uVar22 + 0x20;
      iVar15 = iVar15 + 1;
      uVar12 = uVar3;
      local_f4 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14adce8f0;
      uVar12 = *(uint *)(puVar18 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_94 = (int)lVar10;
    uVar12 = local_94 + -1 + uVar22;
    local_f4 = uVar12;
    if ((int)uVar3 < (int)uVar12) {
      uVar12 = uVar3;
      local_f4 = uVar3;
    }
  }
LAB_14adce8f0:
  pTVar5 = local_70;
  if (*(int *)&local_70->field_0x8 - *(int *)&local_70->field_0x34 != (int)uStack_48) {
    local_res20[0] = 0;
    `TSparseArray<TSparseSetElement<TTuple<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
  }
  iVar23 = local_100;
  if (((TStack_68.CurrentBitIndex != uVar12) || (TStack_68.Array != pTVar21)) ||
     (pTVar5 != local_90)) {
    local_d8._0_4_ = param_2->A;
    local_d8._4_4_ = param_2->B;
    uStack_d0._0_4_ = param_2->C;
    uStack_d0._4_4_ = param_2->D;
    local_80 = (TTuple<FGuid,FName> *)
               (*(longlong *)pTVar5 + (longlong)TStack_68.CurrentBitIndex * 0x30);
    lVar10 = (longlong)*(int *)&local_80[1].field_0x8;
    if (*(int *)&local_80[1].field_0x8 == 0) {
LAB_14adcea9a:
      pTVar1 = local_80;
      if (((local_108.Data <= local_80) &&
          (local_80 < (TTuple<FGuid,FName> *)(local_108.Data + (longlong)iStack_fc * 0x18))) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (local_100 == iStack_fc) {
        local_100 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x418,&local_108,&iStack_fc);
      }
      lVar10 = (longlong)local_100;
      local_100 = local_100 + 1;
      uVar11 = *(undefined8 *)&pTVar1->field_0x8;
      *(undefined8 *)(local_108.Data + lVar10 * 0x18) = *(undefined8 *)pTVar1;
      *(undefined8 *)(local_108.Data + lVar10 * 0x18 + 8) = uVar11;
      *(undefined8 *)(local_108.Data + lVar10 * 0x18 + 0x10) = *(undefined8 *)&pTVar1->field_0x10;
    }
    else {
      local_88 = *(longlong *)(local_80 + 1);
      iVar15 = 0;
      iVar23 = 0;
      lVar16 = 0;
      if ((*(FName *)(local_88 + 0x80) == param_1) &&
         (((uStack_d0._4_4_ == *(int *)(local_88 + 0x94) &&
           local_d8._4_4_ == *(int *)(local_88 + 0x8c)) &&
          (undefined4)uStack_d0 == *(int *)(local_88 + 0x90)) &&
          (undefined4)local_d8 == *(int *)(local_88 + 0x88))) {
        bVar20 = 0;
      }
      else {
        bVar20 = 1;
      }
      do {
        lVar16 = lVar16 + 1;
        iVar24 = iVar23 + 1;
        if (lVar16 < lVar10) {
          piVar7 = (int *)(lVar16 * 0xa8 + 0x94 + local_88);
          do {
            if (*(FName *)(piVar7 + -5) == param_1) {
              if ((((int)uStack_d0 != piVar7[-1] || local_d8._4_4_ != piVar7[-2]) ||
                  (int)local_d8 != piVar7[-3]) || uStack_d0._4_4_ != *piVar7) goto LAB_14adce9fa;
              bVar9 = 0;
            }
            else {
LAB_14adce9fa:
              bVar9 = 1;
            }
            if (bVar20 != bVar9) break;
            iVar24 = iVar24 + 1;
            lVar16 = lVar16 + 1;
            piVar7 = piVar7 + 0x2a;
          } while (lVar16 < lVar10);
        }
        iVar13 = iVar24 - iVar23;
        if (bVar20 == 0) {
          DestructItems<Metasound::Frontend::FMetasoundAnalyzerView,int>
                    ((FMetasoundAnalyzerView *)((longlong)iVar23 * 0xa8 + local_88),iVar13);
        }
        else {
          if (iVar15 != iVar23) {
            memmove((void *)((longlong)iVar15 * 0xa8 + local_88),
                    (void *)((longlong)iVar23 * 0xa8 + local_88),(longlong)iVar13 * 0xa8);
          }
          iVar15 = iVar15 + iVar13;
        }
        bVar20 = bVar20 ^ 1;
        iVar23 = iVar24;
      } while (lVar16 < lVar10);
      *(int *)&local_80[1].field_0x8 = iVar15;
      pTVar21 = local_78;
      uVar12 = local_f4;
      if (iVar15 == 0) goto LAB_14adcea9a;
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
    goto LAB_14adce8f0;
  }
  pTVar1 = (TTuple<FGuid,FName> *)(local_108.Data + (longlong)local_100 * 0x18);
  FVar17.Data = local_108.Data;
  while( true ) {
    if (local_100 != iVar23) {
      `TCheckedPointerIterator<TTuple<FGuid,FName>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_f8);
    }
    if ((TTuple<FGuid,FName> *)FVar17.Data == pTVar1) break;
    if (*(int *)&(this->AnalyzerViews).field_0x8 != *(int *)&(this->AnalyzerViews).field_0x34) {
      uVar8 = CityHash64((char *)FVar17.Data,0x10);
      uVar11 = *(undefined8 *)&((TTuple<FGuid,FName> *)FVar17.Data)->field_0x10;
      uVar12 = ::GetTypeHash((FNameEntryId)(uint)uVar11);
      TSet<TTuple<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::RemoveImpl<TTuple<FGuid,FName>_>
                ((TSet<TTuple<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TTuple<FGuid,FName>,TArray<Metasound::Frontend::FMetasoundAnalyzerView,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)&this->AnalyzerViews,
                 (uint)uVar8 * 0x40 + (int)((ulonglong)uVar11 >> 0x20) +
                 ((uint)(uVar8 >> 2) & 0x3fffffff) + uVar12 + 0x9e3779b9 ^ (uint)uVar8,
                 (TTuple<FGuid,FName> *)FVar17.Data);
    }
    FVar17.Data = FVar17.Data + 0x18;
  }
  TSet<Metasound::Frontend::FAnalyzerAddress,DefaultKeyFuncs<Metasound::Frontend::FAnalyzerAddress,0>,FDefaultSetAllocator>
  ::Array(&this->ActiveAnalyzers,&local_f0);
  iVar23 = local_f0.ArrayNum;
  pFVar14 = (FAnalyzerAddress *)(local_f0.AllocatorInstance.Data + (longlong)iVar23 * 0x58);
  uVar11 = local_f0._8_8_;
  FVar17.Data = local_f0.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar11 != iVar23) {
      `TCheckedPointerIterator<Metasound::Frontend::FAnalyzerAddress,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_f7);
      uVar11 = local_f0._8_8_;
    }
    if ((FAnalyzerAddress *)FVar17.Data == pFVar14) goto LAB_14adcec87;
    if ((((FAnalyzerAddress *)FVar17.Data)->AnalyzerName == param_1) &&
       ((((((FAnalyzerAddress *)FVar17.Data)->AnalyzerInstanceID).D == param_2->D &&
         (((FAnalyzerAddress *)FVar17.Data)->AnalyzerInstanceID).C == param_2->C) &&
        (((FAnalyzerAddress *)FVar17.Data)->AnalyzerInstanceID).B == param_2->B) &&
        (((FAnalyzerAddress *)FVar17.Data)->AnalyzerInstanceID).A == param_2->A)) break;
    FVar17.Data = FVar17.Data + 0x58;
  }
  if (*(int *)&(this->ActiveAnalyzers).Elements.field_0x8 !=
      *(int *)&(this->ActiveAnalyzers).Elements.field_0x34) {
    uVar12 = (**(code **)(((FAnalyzerAddress *)FVar17.Data)->_padding_ + 0x28))(FVar17.Data);
    TSet<Metasound::Frontend::FAnalyzerAddress,DefaultKeyFuncs<Metasound::Frontend::FAnalyzerAddress,0>,FDefaultSetAllocator>
    ::RemoveImpl<Metasound::Frontend::FAnalyzerAddress>
              (&this->ActiveAnalyzers,uVar12,(FAnalyzerAddress *)FVar17.Data);
  }
LAB_14adcec87:
  SendActiveAnalyzers(this);
  if ((FAnalyzerAddress *)local_f0.AllocatorInstance.Data != (FAnalyzerAddress *)0x0) {
    FMemory::Free(local_f0.AllocatorInstance.Data);
  }
  if ((TTuple<FGuid,FName> *)local_108.Data != (TTuple<FGuid,FName> *)0x0) {
    FMemory::Free(local_108.Data);
  }
  return;
}

// SendActiveAnalyzers @ 14add0310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Metasound::Frontend::FMetasoundGraphAnalyzerView::SendActiveAnalyzers
          (FMetasoundGraphAnalyzerView *this)

{
  ISender *pIVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [32];
  <lambda_1> local_48;
  TArray<FString,TSizedDefaultAllocator<32>_> local_40;
  FScriptContainerElement *local_30;
  int local_28;
  int local_24;
  byte local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.ArrayNum = 0;
  local_40.ArrayMax = 0;
  Algo::
  Transform<TSet<Metasound::Frontend::FAnalyzerAddress,DefaultKeyFuncs<Metasound::Frontend::FAnalyzerAddress,0>,FDefaultSetAllocator>,TArray<FString,TSizedDefaultAllocator<32>_>_&,_Metasound::Frontend::FMetasoundGraphAnalyzerView::SendActiveAnalyzers_::__l2::<lambda_1>_>
            (&this->ActiveAnalyzers,&local_40,local_48);
  pIVar1 = (this->ActiveAnalyzerSender).Ptr;
  local_20 = 10;
  local_30 = local_40.AllocatorInstance.Data;
  local_28 = local_40.ArrayNum;
  local_24 = local_40.ArrayMax;
  local_40.ArrayNum = 0;
  local_40.ArrayMax = 0;
  local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (**(code **)(pIVar1->_padding_ + 0x10))(pIVar1,&local_30);
  uVar4 = (ulonglong)local_20;
  if (0xc < local_20) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar4] ==
      UE::Core::Private::TDestructorCaller<TArray<FString,TSizedDefaultAllocator<32>_>_>::Destruct)
  {
    DestructItems<FString,int>((FString *)local_30,local_28);
    if (local_30 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30);
    }
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar4])(&local_30);
  }
  DestructItems<FString,int>((FString *)local_40.AllocatorInstance.Data,local_40.ArrayNum);
  if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.AllocatorInstance.Data);
  }
  return;
}

