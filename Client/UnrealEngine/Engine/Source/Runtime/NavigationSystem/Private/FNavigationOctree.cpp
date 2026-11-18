// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 21

// FNavigationOctree @ 146d73f80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

FNavigationOctree * __thiscall
FNavigationOctree::FNavigationOctree
          (FNavigationOctree *this,TVector<double> *param_1,double param_2)

{
  int *piVar1;
  longlong *plVar2;
  FName FVar3;
  undefined1 auVar4 [16];
  double dVar5;
  int iVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_NavigationMemory> FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  double dVar9;
  FName local_res8;
  FStatMessage local_28;
  
  dVar5 = (param_1->field0_0x0)._s_0.Y;
  dVar9 = (param_1->field0_0x0)._s_0.Z;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  this->_padding_ = (longlong)(param_1->field0_0x0)._s_0.X;
  plVar2 = &this->_padding_;
  this->_padding_ = (longlong)dVar5;
  this->_padding_ = (longlong)dVar9;
  this->_padding_ = 0;
  auVar4._8_4_ = SUB84(param_2,0);
  auVar4._0_8_ = param_2;
  auVar4._12_4_ = (int)((ulonglong)param_2 >> 0x20);
  this->_padding_ = (longlong)param_2;
  this->_padding_ = auVar4._8_8_;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  dVar9 = param_2 * __real_3fe1000000000000;
  this->_padding_ = 0;
  dVar5 = param_2 * ___real_3f408f227be81608;
  this->_padding_ = (longlong)dVar9;
  this->_padding_ = (longlong)(param_2 - dVar9);
  *(undefined4 *)&this->_padding_ = 0;
  *piVar1 = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *plVar2 = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)dVar5;
  iVar6 = (int)this->_padding_;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar6 + 1;
  DefaultConstructItems<TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics>::FNode,int>
            ((void *)(this->_padding_ + (longlong)iVar6 * 8),1);
  iVar6 = (int)this->_padding_;
  if (iVar6 == *(int *)((longlong)&this->_padding_ + 4)) {
    iVar6 = UE::Core::Private::ReallocGrow1_DoAlloc<2,TAlignedHeapAllocator<8>::ForAnyElementType>
                      (0x490,8,(ForAnyElementType *)plVar2,(int *)((longlong)&this->_padding_ + 4));
  }
  *(int *)&this->_padding_ = iVar6 + 1;
  DefaultConstructItems<TArray<FNavigationOctreeElement,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,int>
            ((void *)(*plVar2 + (longlong)iVar6 * 0x490),1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->NavRelevantGeometryExportDelegate = 0;
  *(undefined8 *)&(this->NavRelevantGeometryExportDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->NavRelevantGeometryExportDelegate).field_0x10 = 0;
  *(undefined8 *)&this->GeometryExportDelegate = 0;
  *(undefined8 *)&(this->GeometryExportDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->GeometryExportDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ElementToOctreeId = 0;
  *(undefined8 *)&(this->ElementToOctreeId).field_0x8 = 0;
  *(undefined8 *)&(this->ElementToOctreeId).field_0x20 = 0;
  this->_padding_ = (longlong)&___7FNavigationOctree__6B_;
  *(undefined4 *)&(this->ElementToOctreeId).field_0x28 = 0;
  *(undefined4 *)&(this->ElementToOctreeId).field_0x2c = 0x80;
  *(undefined4 *)&(this->ElementToOctreeId).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ElementToOctreeId).field_0x34 = 0;
  *(undefined8 *)&(this->ElementToOctreeId).field_0x40 = 0;
  *(undefined4 *)&(this->ElementToOctreeId).field_0x48 = 0;
  this->bGatherGeometry = 0;
  this->DefaultGeometryGatheringMode = Instant;
  this->NodesMemory = 0;
  this->GatheringNavModifiersTimeLimitWarning = -1.0;
  this->OctreeSizeBytes = 0;
  FVar8 = StatPtr_STAT_NavigationMemory;
  if (StatPtr_STAT_NavigationMemory == (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)0x0) {
    pFVar7 = ::FName::FName(&local_res8,"STAT_NavigationMemory");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NavigationMemory,*pFVar7,
                       L"Navigation Memory","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true,
                       false,ST_int64,false,false,MCR_Physical);
  }
  FVar3 = *(FName *)FVar8;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    local_res8 = FVar3;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_28.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
    local_28.StatData.Pad[0] = '`';
    local_28.StatData.Pad[1] = '\x01';
    local_28.StatData.Pad[2] = '\0';
    local_28.StatData.Pad[3] = '\0';
    local_28.StatData.Pad[4] = '\0';
    local_28.StatData.Pad[5] = '\0';
    local_28.StatData.Pad[6] = '\0';
    local_28.StatData.Pad[7] = '\0';
    local_res8 = FVar3;
    local_28.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_28);
    FStatsTrace::Add(&local_res8,0x160);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  return this;
}

// ~FNavigationOctree @ 146d78330

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNavigationOctree::~FNavigationOctree(FNavigationOctree *this)

{
  undefined1 *puVar1;
  int *piVar2;
  TMap<FNavigationElementHandle,FOctreeElementId2,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>_>
  *this_00;
  int iVar3;
  FName FVar4;
  void *pvVar5;
  longlong *plVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_NavigationMemory> FVar9;
  FThreadStats *pFVar10;
  FThreadStatsPool *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_Navigation_CollisionTreeMemory> FVar12;
  uchar auVar13 [8];
  FName local_res8;
  FStatMessage local_28;
  
  this->_padding_ = (longlong)&___7FNavigationOctree__6B_;
  FVar9 = StatPtr_STAT_NavigationMemory;
  if (StatPtr_STAT_NavigationMemory == (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)0x0) {
    pFVar8 = ::FName::FName(&local_res8,"STAT_NavigationMemory");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NavigationMemory,*pFVar8,
                       L"Navigation Memory","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true,
                       false,ST_int64,false,false,MCR_Physical);
  }
  FVar4 = *(FName *)FVar9;
  local_res8 = FVar4;
  if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar10 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar10 == (FThreadStats *)0x0) {
      pFVar11 = FThreadStatsPool::Get();
      pFVar10 = FThreadStatsPool::GetFromPool(pFVar11);
    }
    local_28.NameAndInfo.Number = FVar4.Number & 0xffffbfff | 0xb000;
    local_28.StatData.Pad[0] = '`';
    local_28.StatData.Pad[1] = '\x01';
    local_28.StatData.Pad[2] = '\0';
    local_28.StatData.Pad[3] = '\0';
    local_28.StatData.Pad[4] = '\0';
    local_28.StatData.Pad[5] = '\0';
    local_28.StatData.Pad[6] = '\0';
    local_28.StatData.Pad[7] = '\0';
    local_res8 = FVar4;
    local_28.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar10,&local_28);
    FStatsTrace::Add(&local_res8,-0x160);
    if (pFVar10->ScopeCount == 0) {
      FThreadStats::Flush(pFVar10,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar10,false,false);
    }
  }
  auVar13[4] = '\0';
  auVar13[5] = '\0';
  auVar13[6] = '\0';
  auVar13[7] = '\0';
  auVar13._0_4_ = this->NodesMemory;
  if (auVar13 != (uchar  [8])0x0) {
    FVar12 = StatPtr_STAT_Navigation_CollisionTreeMemory;
    if (StatPtr_STAT_Navigation_CollisionTreeMemory ==
        (FThreadSafeStaticStat<FStat_STAT_Navigation_CollisionTreeMemory>)0x0) {
      pFVar8 = ::FName::FName(&local_res8,"STAT_Navigation_CollisionTreeMemory");
      FVar12 = (FThreadSafeStaticStat<FStat_STAT_Navigation_CollisionTreeMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_CollisionTreeMemory,
                          *pFVar8,L"Nav tree memory","STATGROUP_Navigation","STATCAT_Advanced",
                          L"Navigation",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar4 = *(FName *)FVar12;
    local_res8 = FVar4;
    if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar10 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar10 == (FThreadStats *)0x0) {
        pFVar11 = FThreadStatsPool::Get();
        pFVar10 = FThreadStatsPool::GetFromPool(pFVar11);
      }
      local_28.NameAndInfo.Number = FVar4.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar4;
      local_28.StatData.Pad = auVar13;
      local_28.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar10,&local_28);
      FStatsTrace::Add(&local_res8,-(longlong)auVar13);
      if (pFVar10->ScopeCount == 0) {
        FThreadStats::Flush(pFVar10,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar10,false,false);
      }
    }
  }
  this_00 = &this->ElementToOctreeId;
  bVar7 = 1 < *(int *)&(this->ElementToOctreeId).field_0x48;
  if (!bVar7) {
    TSet<TTuple<FNavigationElementHandle,FOctreeElementId2>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FNavigationElementHandle,FOctreeElementId2>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->ElementToOctreeId).field_0xc;
  *(undefined4 *)&(this->ElementToOctreeId).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ElementToOctreeId).field_0x34 = 0;
  *(undefined4 *)&(this->ElementToOctreeId).field_0x28 = 0;
  *(undefined4 *)&(this->ElementToOctreeId).field_0x30 = 0xffffffff;
  iVar3 = *(int *)&(this->ElementToOctreeId).field_0x2c;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->ElementToOctreeId).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ElementToOctreeId).field_0x10,0);
  }
  if (bVar7) {
    *(undefined4 *)&(this->ElementToOctreeId).field_0x48 = 1;
    TSet<TTuple<FNavigationElementHandle,FOctreeElementId2>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FNavigationElementHandle,FOctreeElementId2>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>,FDefaultSetAllocator>
              *)this_00);
  }
  *(undefined4 *)&(this->ElementToOctreeId).field_0x48 = 0;
  pvVar5 = *(void **)&(this->ElementToOctreeId).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FNavigationElementHandle,FOctreeElementId2>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FNavigationElementHandle,FOctreeElementId2>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FNavigationElementHandle,FOctreeElementId2>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->GeometryExportDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->NavRelevantGeometryExportDelegate);
  plVar6 = (longlong *)this->_padding_;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics>::
  ~TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics>
            ((TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics> *)&this->_padding_);
  return;
}

// AddElement @ 146d7fce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNavigationOctree::AddElement(FNavigationOctree *this,FNavigationOctreeElement *param_1)

{
  FName FVar1;
  FName *pFVar2;
  FThreadSafeStaticStat<FStat_STAT_NavigationMemory> FVar3;
  FThreadStats *pFVar4;
  FThreadStatsPool *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_Navigation_CollisionTreeMemory> FVar6;
  uchar auVar7 [8];
  ForElementType<FNavigationOctreeElement> FVar8;
  undefined1 auStackY_5a8 [32];
  FName local_548;
  FStatMessage local_540;
  double local_530;
  FLLMScope local_528 [2];
  FMemScope local_520;
  TVector4<double>_u_0 local_518;
  double local_4f8;
  double local_4f0;
  double local_4e8;
  undefined8 local_4e0;
  TArray<FNavigationOctreeElement,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  local_4d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_5a8;
  FLLMScope::FLLMScope
            (local_528,LLMTagDeclaration_NavigationOctree.UniqueName,false,None,Default,true);
  local_548 = LLMTagDeclaration_NavigationOctree.UniqueName;
  FMemScope::FMemScope(&local_520,&local_548,true);
  auVar7 = (uchar  [8])this->OctreeSizeBytes;
  if (auVar7 != (uchar  [8])0x0) {
    FVar3 = StatPtr_STAT_NavigationMemory;
    if (StatPtr_STAT_NavigationMemory == (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)0x0) {
      pFVar2 = ::FName::FName(&local_548,"STAT_NavigationMemory");
      FVar3 = (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NavigationMemory,*pFVar2,
                         L"Navigation Memory","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true,
                         false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar3;
    local_548 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar4 == (FThreadStats *)0x0) {
        pFVar5 = FThreadStatsPool::Get();
        pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
      }
      local_540.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_548 = FVar1;
      local_540.StatData.Pad = auVar7;
      local_540.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar4,&local_540);
      FStatsTrace::Add(&local_548,-(longlong)auVar7);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
  }
  auVar7 = (uchar  [8])this->OctreeSizeBytes;
  if (auVar7 != (uchar  [8])0x0) {
    FVar6 = StatPtr_STAT_Navigation_CollisionTreeMemory;
    if (StatPtr_STAT_Navigation_CollisionTreeMemory ==
        (FThreadSafeStaticStat<FStat_STAT_Navigation_CollisionTreeMemory>)0x0) {
      pFVar2 = ::FName::FName(&local_548,"STAT_Navigation_CollisionTreeMemory");
      FVar6 = (FThreadSafeStaticStat<FStat_STAT_Navigation_CollisionTreeMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_CollisionTreeMemory,
                         *pFVar2,L"Nav tree memory","STATGROUP_Navigation","STATCAT_Advanced",
                         L"Navigation",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar6;
    local_548 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar4 == (FThreadStats *)0x0) {
        pFVar5 = FThreadStatsPool::Get();
        pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
      }
      local_540.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_548 = FVar1;
      local_540.StatData.Pad = auVar7;
      local_540.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar4,&local_540);
      FStatsTrace::Add(&local_548,-(longlong)auVar7);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
  }
  local_518._s_0.X = (param_1->Bounds).Origin.field0_0x0._s_0.X;
  local_518._s_0.Y = (param_1->Bounds).Origin.field0_0x0._s_0.Y;
  local_4f8 = (param_1->Bounds).BoxExtent.field0_0x0._s_0.X;
  local_4f0 = (param_1->Bounds).BoxExtent.field0_0x0._s_0.Y;
  local_4d8.AllocatorInstance.SecondaryData = (ForElementType<FNavigationOctreeElement>)0x0;
  local_518._s_0.Z = (param_1->Bounds).Origin.field0_0x0._s_0.Z;
  local_530 = (param_1->Bounds).BoxExtent.field0_0x0._s_0.Z;
  local_4d8.ArrayNum = 0;
  local_4e0 = 0;
  local_518._s_0.W = 0.0;
  local_4d8.ArrayMax = 0x10;
  local_4e8 = local_530;
  TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics>::AddElementInternal
            ((TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics> *)&this->_padding_,0,
             (FOctreeNodeContext *)&this->_padding_,(FBoxCenterAndExtent *)&local_518._s_0,param_1,
             &local_4d8);
  FVar8 = (ForElementType<FNavigationOctreeElement>)&local_4d8;
  if (local_4d8.AllocatorInstance.SecondaryData != (ForElementType<FNavigationOctreeElement>)0x0) {
    FVar8 = local_4d8.AllocatorInstance.SecondaryData;
  }
  DestructItems<FNavigationOctreeElement,int>((FNavigationOctreeElement *)FVar8,local_4d8.ArrayNum);
  if (local_4d8.AllocatorInstance.SecondaryData != (ForElementType<FNavigationOctreeElement>)0x0) {
    FMemory::Free((void *)local_4d8.AllocatorInstance.SecondaryData);
  }
  auVar7 = (uchar  [8])
           TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics>::GetSizeBytes
                     ((TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics> *)
                      &this->_padding_);
  this->OctreeSizeBytes = (ulong64)auVar7;
  if (auVar7 != (uchar  [8])0x0) {
    FVar3 = StatPtr_STAT_NavigationMemory;
    if (StatPtr_STAT_NavigationMemory == (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)0x0) {
      pFVar2 = ::FName::FName(&local_548,"STAT_NavigationMemory");
      FVar3 = (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NavigationMemory,*pFVar2,
                         L"Navigation Memory","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true,
                         false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar3;
    local_548 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar4 == (FThreadStats *)0x0) {
        pFVar5 = FThreadStatsPool::Get();
        pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
      }
      local_540.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_548 = FVar1;
      local_540.StatData.Pad = auVar7;
      local_540.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar4,&local_540);
      FStatsTrace::Add(&local_548,(long64)auVar7);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
  }
  auVar7 = (uchar  [8])this->OctreeSizeBytes;
  if (auVar7 != (uchar  [8])0x0) {
    FVar6 = StatPtr_STAT_Navigation_CollisionTreeMemory;
    if (StatPtr_STAT_Navigation_CollisionTreeMemory ==
        (FThreadSafeStaticStat<FStat_STAT_Navigation_CollisionTreeMemory>)0x0) {
      pFVar2 = ::FName::FName(&local_548,"STAT_Navigation_CollisionTreeMemory");
      FVar6 = (FThreadSafeStaticStat<FStat_STAT_Navigation_CollisionTreeMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_CollisionTreeMemory,
                         *pFVar2,L"Nav tree memory","STATGROUP_Navigation","STATCAT_Advanced",
                         L"Navigation",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar6;
    local_548 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar4 == (FThreadStats *)0x0) {
        pFVar5 = FThreadStatsPool::Get();
        pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
      }
      local_540.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_548 = FVar1;
      local_540.StatData.Pad = auVar7;
      local_540.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar4,&local_540);
      FStatsTrace::Add(&local_548,(long64)auVar7);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
  }
  FMemScope::~FMemScope(&local_520);
  FLLMScope::~FLLMScope(local_528);
  return;
}

// AddNode @ 146d82f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNavigationOctree::AddNode
          (FNavigationOctree *this,TBox<double> *param_1,FNavigationOctreeElement *param_2)

{
  undefined1 *puVar1;
  double dVar2;
  double dVar3;
  ENavDataGatheringMode EVar4;
  int iVar5;
  FNavigationElement *this_00;
  FNavigationRelevantData *pFVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  UObject *pUVar16;
  UClass *pUVar17;
  longlong *plVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<FStat_STAT_Navigation_GatheringNavigationModifiersSync> FVar20;
  FThreadSafeStaticStat<FStat_STAT_Navigation_CollisionTreeMemory> FVar21;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FName FVar22;
  int iVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  double dVar29;
  undefined1 auStackY_1c8 [32];
  FString local_168;
  FString local_158;
  FString local_148;
  FName local_138;
  FLLMScope local_130 [2];
  FStatMessage local_128;
  FString local_118;
  FMemScope local_108;
  FString local_100;
  FString local_f0;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  char local_b0;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_138 = (FName)this;
  FLLMScope::FLLMScope
            (local_130,LLMTagDeclaration_NavigationOctree.UniqueName,false,None,Default,true);
  local_168.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)LLMTagDeclaration_NavigationOctree.UniqueName;
  FMemScope::FMemScope(&local_108,(FName *)&local_168,true);
  this_00 = (((param_2->Data).Object)->SourceElement).Object;
  if (6 < (byte)LogNavigation._0_1_) {
    ::FString::PrintfImpl(&local_148,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_158,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_168,L"IsValid=%s, Min=(%s), Max=(%s)");
    if ((FName)local_158.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    if ((FName)local_148.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
    FNavigationElement::GetName(this_00,(FString *)&local_128);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
    if ((FName)local_128.StatData.Pad != (FName)0x0) {
      FMemory::Free((void *)local_128.StatData.Pad);
    }
    if ((FName)local_168.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
  }
  dVar24 = __real_3f1a36e2e0000000;
  uVar12 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar15 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  if (UE::NavigationOctree::Private::bValidateConsistencyWhenAddingNode != false) {
    local_168.Data.AllocatorInstance.Data =
         *(FScriptContainerElement **)&(this_00->OwnerUObject).WeakPtr;
    pUVar16 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_168);
    if (pUVar16 != (UObject *)0x0) {
      pUVar17 = Z_Construct_UClass_UNavRelevantInterface_NoRegister();
      plVar18 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pUVar16,pUVar17);
      if (plVar18 != (longlong *)0x0) {
        (**(code **)(*plVar18 + 0x18))(plVar18,&local_e0);
        if (param_1->IsValid == '\0') {
          if (local_b0 != '\0') {
LAB_146d83256:
            if (2 < (byte)LogNavigation._0_1_) {
              ::FString::PrintfImpl(&local_148,L"X=%3.3f Y=%3.3f Z=%3.3f");
              ::FString::PrintfImpl(&local_158,L"X=%3.3f Y=%3.3f Z=%3.3f");
              ::FString::PrintfImpl((FString *)&local_128,L"IsValid=%s, Min=(%s), Max=(%s)");
              if ((FName)local_158.Data.AllocatorInstance.Data != (FName)0x0) {
                FMemory::Free(local_158.Data.AllocatorInstance.Data);
              }
              if ((FName)local_148.Data.AllocatorInstance.Data != (FName)0x0) {
                FMemory::Free(local_148.Data.AllocatorInstance.Data);
              }
              local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)L"";
              if (local_128.NameAndInfo.Index.Value != 0) {
                local_148.Data.AllocatorInstance.Data =
                     (FScriptContainerElement *)local_128.StatData.Pad;
              }
              ::FString::PrintfImpl(&local_100,L"X=%3.3f Y=%3.3f Z=%3.3f");
              ::FString::PrintfImpl(&local_158,L"X=%3.3f Y=%3.3f Z=%3.3f");
              ::FString::PrintfImpl(&local_f0,L"IsValid=%s, Min=(%s), Max=(%s)");
              if ((FName)local_158.Data.AllocatorInstance.Data != (FName)0x0) {
                FMemory::Free(local_158.Data.AllocatorInstance.Data);
              }
              if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_100.Data.AllocatorInstance.Data);
              }
              FNavigationElement::GetName(this_00,&local_118);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
              if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_118.Data.AllocatorInstance.Data);
              }
              if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_f0.Data.AllocatorInstance.Data);
              }
              if ((FName)local_128.StatData.Pad != (FName)0x0) {
                FMemory::Free((void *)local_128.StatData.Pad);
              }
            }
          }
        }
        else if ((((local_b0 == '\0') ||
                  (local_e0 = (param_1->Min).field0_0x0._s_0.X - local_e0,
                  dVar24 < (double)CONCAT44((uint)((ulonglong)local_e0 >> 0x20) & uVar12,
                                            SUB84(local_e0,0) & uVar15))) ||
                 (local_d8 = (param_1->Min).field0_0x0._s_0.Y - local_d8,
                 dVar24 < (double)CONCAT44((uint)((ulonglong)local_d8 >> 0x20) & uVar12,
                                           SUB84(local_d8,0) & uVar15))) ||
                (((local_d0 = (param_1->Min).field0_0x0._s_0.Z - local_d0,
                  dVar24 < (double)CONCAT44((uint)((ulonglong)local_d0 >> 0x20) & uVar12,
                                            SUB84(local_d0,0) & uVar15) ||
                  (local_c8 = (param_1->Max).field0_0x0._s_0.X - local_c8,
                  dVar24 < (double)CONCAT44((uint)((ulonglong)local_c8 >> 0x20) & uVar12,
                                            SUB84(local_c8,0) & uVar15))) ||
                 ((local_c0 = (param_1->Max).field0_0x0._s_0.Y - local_c0,
                  dVar24 < (double)CONCAT44((uint)((ulonglong)local_c0 >> 0x20) & uVar12,
                                            SUB84(local_c0,0) & uVar15) ||
                  (local_b8 = (param_1->Max).field0_0x0._s_0.Z - local_b8,
                  dVar24 < (double)CONCAT44((uint)((ulonglong)local_b8 >> 0x20) & uVar12,
                                            SUB84(local_b8,0) & uVar15))))))) goto LAB_146d83256;
        pUVar16 = (UObject *)(**(code **)(*plVar18 + 0x78))(plVar18);
        bVar13 = TWeakObjectPtr<UObject_const_,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                           (&this_00->NavigationParent,pUVar16);
        if ((!bVar13) && (2 < (byte)LogNavigation._0_1_)) {
          if (pUVar16 == (UObject *)0x0) {
            ::FString::FString(&local_168,L"None");
          }
          else {
            local_148.Data.AllocatorInstance.Data._0_4_ = *(uint *)&pUVar16->field_0x18;
            local_148.Data.AllocatorInstance.Data._4_4_ = *(uint *)&pUVar16->field_0x1c;
            ::FName::ToString((FName *)&local_148,&local_168);
          }
          pUVar16 = FWeakObjectPtr::Get(&(this_00->NavigationParent).WeakPtr);
          if (pUVar16 == (UObject *)0x0) {
            ::FString::FString(&local_158,L"None");
          }
          else {
            local_148.Data.AllocatorInstance.Data._0_4_ = *(uint *)&pUVar16->field_0x18;
            local_148.Data.AllocatorInstance.Data._4_4_ = *(uint *)&pUVar16->field_0x1c;
            ::FName::ToString((FName *)&local_148,&local_158);
          }
          FNavigationElement::GetName(this_00,&local_118);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
          if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118.Data.AllocatorInstance.Data);
          }
          if ((FName)local_158.Data.AllocatorInstance.Data != (FName)0x0) {
            FMemory::Free(local_158.Data.AllocatorInstance.Data);
          }
          if ((FName)local_168.Data.AllocatorInstance.Data != (FName)0x0) {
            FMemory::Free(local_168.Data.AllocatorInstance.Data);
          }
        }
      }
    }
  }
  if (param_1->IsValid != '\0') {
    dVar25 = (param_1->Min).field0_0x0._s_0.X;
    dVar2 = (param_1->Min).field0_0x0._s_0.Y;
    dVar8 = (param_1->Max).field0_0x0._s_0.X - dVar25;
    dVar3 = (param_1->Min).field0_0x0._s_0.Z;
    dVar29 = (param_1->Max).field0_0x0._s_0.Y - dVar2;
    dVar9 = (param_1->Max).field0_0x0._s_0.Z - dVar3;
    if (((dVar24 < (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) & uVar12,
                                    SUB84(dVar8,0) & uVar15)) ||
        (dVar24 < (double)CONCAT44((uint)((ulonglong)dVar29 >> 0x20) & uVar12,
                                   SUB84(dVar29,0) & uVar15))) ||
       (dVar24 < (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & uVar12,SUB84(dVar9,0) & uVar15)
       )) {
      auVar26._8_8_ = 0;
      auVar26._0_8_ = __real_3fe0000000000000;
      dVar7 = dVar8 * __real_3fe0000000000000;
      uVar15 = 0;
      dVar24 = dVar29 * __real_3fe0000000000000;
      dVar28 = dVar9 * __real_3fe0000000000000;
      (param_2->Bounds).Origin.field0_0x0._s_0.X = dVar25 + dVar7;
      (param_2->Bounds).Origin.field0_0x0._s_0.Y = dVar2 + dVar24;
      (param_2->Bounds).Origin.field0_0x0._s_0.Z = dVar3 + dVar28;
      (param_2->Bounds).BoxExtent.field0_0x0._s_0.X = dVar7;
      (param_2->Bounds).BoxExtent.field0_0x0._s_0.Y = dVar24;
      (param_2->Bounds).BoxExtent.field0_0x0._s_0.Z = dVar28;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = (dVar8 * dVar8 + dVar29 * dVar29 + dVar9 * dVar9) * __real_3fd0000000000000;
      auVar27 = sqrtpd(auVar26,auVar27);
      (param_2->Bounds).SphereRadius = auVar27._0_8_;
      pFVar6 = (param_2->Data).Object;
      if (this_00->bDirtyAreaOnRegistration == false) {
        uVar15 = 0x10;
      }
      pFVar6->bShouldSkipDirtyAreaOnAddOrRemove = uVar15 >> 4;
      pFVar6 = (param_2->Data).Object;
      if (((((*(int *)&(pFVar6->VoxelData).field_0x10 == 0) &&
            (*(int *)&(pFVar6->CollisionData).field_0x10 == 0)) &&
           (((pFVar6->Modifiers).Areas.ArrayNum == 0 &&
            (((pFVar6->Modifiers).SimpleLinks.ArrayNum == 0 &&
             ((pFVar6->Modifiers).CustomLinks.ArrayNum == 0)))))) &&
          ((pFVar6->Modifiers).bFillCollisionUnderneathForNavmesh == 0 &&
           ((pFVar6->Modifiers).bMaskFillCollisionUnderneathForNavmesh == 0 &&
           (pFVar6->Modifiers).bRasterizeAsFilledConvexVolume == 0))) &&
         ((pFVar6->Modifiers).NavMeshResolution == Invalid)) {
        EVar4 = this_00->GeometryGatheringMode;
        if (EVar4 == Default) {
          EVar4 = this->DefaultGeometryGatheringMode;
        }
        if ((*(byte *)((longlong)local_138 + 0x14c) & 1) != 0) {
          if (EVar4 != Instant) {
            pFVar6->bPendingLazyGeometryGathering = 1;
            bVar13 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                               ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                                &this_00->GeometrySliceExportDelegate);
            pFVar6 = (param_2->Data).Object;
            pFVar6->bSupportsGatheringGeometrySlices = bVar13;
          }
          else {
            TDelegate<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy>
            ::ExecuteIfBound((TDelegate<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy>
                              *)((longlong)local_138 + 0xe0),this_00,pFVar6);
          }
        }
        FVar20 = StatPtr_STAT_Navigation_GatheringNavigationModifiersSync;
        if (StatPtr_STAT_Navigation_GatheringNavigationModifiersSync ==
            (FThreadSafeStaticStat<FStat_STAT_Navigation_GatheringNavigationModifiersSync>)0x0) {
          pFVar19 = ::FName::FName((FName *)&local_148,
                                   "STAT_Navigation_GatheringNavigationModifiersSync");
          FVar20 = (FThreadSafeStaticStat<FStat_STAT_Navigation_GatheringNavigationModifiersSync>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_Navigation_GatheringNavigationModifiersSync,*pFVar19,
                              L"Sync gathering navigation modifiers","STATGROUP_Navigation",
                              "STATCAT_Advanced",L"Navigation",true,true,ST_int64,true,false,
                              MCR_Invalid);
        }
        local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        bVar13 = false;
        bVar11 = false;
        FVar22 = *(FName *)FVar20;
        if ((FVar22.ComparisonIndex.Value.Value == 0) && (FVar22.Number == 0)) {
LAB_146d8388f:
          bVar10 = false;
          FVar22 = (FName)local_158.Data.AllocatorInstance;
        }
        else {
          if (GCycleStatsShouldEmitNamedEvents != 0) {
            local_168.Data.AllocatorInstance.Data =
                 local_168.Data.AllocatorInstance.Data & 0xffffffff00000000;
            FGenericPlatformMisc::BeginNamedEvent
                      ((FColor *)&local_168,(char *)*(FName *)((longlong)FVar20 + 0x10));
            bVar13 = false;
            bVar11 = true;
            if (-1 < CpuChannel->Enabled) {
              local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar22;
              FCpuProfilerTrace::OutputBeginDynamicEventWithId
                        ((FName *)&local_168,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavigationOctree.cpp"
                         ,0xef);
              bVar13 = true;
              bVar11 = true;
            }
          }
          if (FThreadStats::bPrimaryEnable == false) goto LAB_146d8388f;
          local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar22;
          FThreadStats::AddMessage(FVar22,CycleScopeStart);
          bVar10 = true;
        }
        this = (FNavigationOctree *)local_138;
        if (EVar4 != Instant) {
          ((param_2->Data).Object)->bPendingLazyModifiersGathering = 1;
        }
        else if (*(float *)((longlong)local_138 + 0x154) <= 0.0 &&
                 *(float *)((longlong)local_138 + 0x154) != 0.0) {
          TDelegate<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy>
          ::ExecuteIfBound(&this_00->NavigationDataExportDelegate,this_00,(param_2->Data).Object);
        }
        else {
          dVar24 = FWindowsPlatformTime::Seconds();
          TDelegate<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy>
          ::ExecuteIfBound(&this_00->NavigationDataExportDelegate,this_00,(param_2->Data).Object);
          dVar25 = FWindowsPlatformTime::Seconds();
          if (((double)*(float *)((longlong)this + 0x154) < dVar25 - dVar24) &&
             (2 < (byte)LogNavigation._0_1_)) {
            FNavigationElement::GetName(this_00,&local_118);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
            if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_118.Data.AllocatorInstance.Data);
            }
          }
        }
        pFVar6 = (param_2->Data).Object;
        bVar14 = FNavigationRelevantData::IsCollisionDataValid(pFVar6);
        if (bVar14) {
          FNavigationRelevantData::Shrink(pFVar6);
        }
        else {
          puVar1 = &(pFVar6->CollisionData).field_0x14;
          *(undefined4 *)&(pFVar6->CollisionData).field_0x10 = 0;
          if (*(int *)puVar1 != 0) {
            UE::Core::Private::ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                      (1,1,0,(ForAnyElementType *)&pFVar6->CollisionData,0,(int *)puVar1);
          }
        }
        if (bVar11) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar13) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (bVar10) {
          FThreadStats::AddMessage(FVar22,CycleScopeEnd);
        }
      }
      pFVar6 = (param_2->Data).Object;
      iVar23 = *(int *)&(pFVar6->CollisionData).field_0x14;
      iVar5 = *(int *)&(pFVar6->VoxelData).field_0x14;
      uVar15 = FCompositeNavModifier::GetAllocatedSize(&pFVar6->Modifiers);
      iVar23 = iVar5 + uVar15 + iVar23;
      *(uint *)((longlong)this + 0x150) = *(uint *)((longlong)this + 0x150) + iVar23;
      if (iVar23 != 0) {
        FVar21 = StatPtr_STAT_Navigation_CollisionTreeMemory;
        if (StatPtr_STAT_Navigation_CollisionTreeMemory ==
            (FThreadSafeStaticStat<FStat_STAT_Navigation_CollisionTreeMemory>)0x0) {
          pFVar19 = ::FName::FName((FName *)&local_148,"STAT_Navigation_CollisionTreeMemory");
          FVar21 = (FThreadSafeStaticStat<FStat_STAT_Navigation_CollisionTreeMemory>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_Navigation_CollisionTreeMemory,*pFVar19,
                              L"Nav tree memory","STATGROUP_Navigation","STATCAT_Advanced",
                              L"Navigation",true,false,ST_int64,false,false,MCR_Physical);
        }
        FVar22 = *(FName *)FVar21;
        local_138 = FVar22;
        if (((FVar22 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          this_01 = TlsGetValue(FThreadStats::TlsSlot);
          if (this_01 == (FThreadStats *)0x0) {
            this_02 = FThreadStatsPool::Get();
            this_01 = FThreadStatsPool::GetFromPool(this_02);
          }
          local_128.NameAndInfo.Number = FVar22.Number & 0xffffafff | 0xa000;
          local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar22;
          local_128.StatData.Pad = (uchar  [8])(longlong)iVar23;
          local_128.NameAndInfo.Index.Value = FVar22.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(this_01,&local_128);
          FStatsTrace::Add((FName *)&local_148,(longlong)iVar23);
          if (this_01->ScopeCount == 0) {
            FThreadStats::Flush(this_01,false,false);
            AddElement(this,param_2);
            goto LAB_146d83baf;
          }
          if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_01,false,false);
          }
        }
      }
      AddElement(this,param_2);
      goto LAB_146d83baf;
    }
  }
  if (2 < (byte)LogNavigation._0_1_) {
    FNavigationElement::GetFullName(this_00,&local_118);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
  }
LAB_146d83baf:
  FMemScope::~FMemScope(&local_108);
  FLLMScope::~FLLMScope(local_130);
  return;
}

// AddNode @ 146d83c20

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
FNavigationOctree::AddNode
          (FNavigationOctree *this,UObject *param_1,INavRelevantInterface *param_2,
          TBox<double> *param_3,FNavigationOctreeElement *param_4)

{
  if (param_2 != (INavRelevantInterface *)0x0) {
    AddNode(this,param_3,param_4);
    return;
  }
  return;
}

// AppendToNode @ 146d84290

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNavigationOctree::AppendToNode
          (FNavigationOctree *this,FOctreeElementId2 *param_1,
          TSharedRef<FNavigationElement_const_,1> *param_2,TBox<double> *param_3,
          FNavigationOctreeElement *param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  double dVar3;
  ENavDataGatheringMode EVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  TReferenceControllerBase<1> *pTVar8;
  FNavigationRelevantData *pFVar9;
  FNavigationElement *pFVar10;
  FNavigationRelevantData *this_00;
  FName FVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  uint uVar22;
  uint uVar23;
  FNavigationOctreeElement *pFVar24;
  FName *pFVar25;
  FThreadSafeStaticStat<FStat_STAT_Navigation_GatheringNavigationModifiersSync> FVar26;
  FThreadSafeStaticStat<FStat_STAT_Navigation_CollisionTreeMemory> FVar27;
  FThreadStats *pFVar28;
  FThreadStatsPool *pFVar29;
  atomic<int> *paVar30;
  FName FVar31;
  int iVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  FName local_1b8;
  FLLMScope local_1b0 [2];
  FStatMessage local_1a8;
  LARGE_INTEGER local_198;
  FName local_190;
  FNavigationOctree *local_180;
  TReferenceControllerBase<1> *local_178;
  FMemScope local_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  undefined8 local_138;
  undefined1 local_100;
  FNavigationOctreeElement local_f8 [2];
  
  local_198 = (LARGE_INTEGER)param_1;
  local_180 = this;
  FLLMScope::FLLMScope
            (local_1b0,LLMTagDeclaration_NavigationOctree.UniqueName,false,None,Default,true);
  local_1b8 = LLMTagDeclaration_NavigationOctree.UniqueName;
  FMemScope::FMemScope(&local_170,&local_1b8,true);
  pFVar24 = TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics>::GetElementById
                      ((TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics> *)
                       &this->_padding_,*param_1);
  pTVar8 = (pFVar24->Data).SharedReferenceCount.ReferenceController;
  dVar3 = (pFVar24->Bounds).SphereRadius;
  pFVar9 = (pFVar24->Data).Object;
  dVar12 = (pFVar24->Bounds).Origin.field0_0x0._s_0.X;
  dVar33 = (pFVar24->Bounds).Origin.field0_0x0._s_0.Y;
  dVar34 = (pFVar24->Bounds).Origin.field0_0x0._s_0.Z;
  dVar13 = (pFVar24->Bounds).BoxExtent.field0_0x0._s_0.X;
  dVar15 = (pFVar24->Bounds).BoxExtent.field0_0x0._s_0.Y;
  dVar16 = (pFVar24->Bounds).BoxExtent.field0_0x0._s_0.Z;
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    paVar30 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar30 = &pTVar8->SharedReferenceCount;
    LOCK();
    *paVar30 = (atomic<int>)((int)*paVar30 + 1);
    UNLOCK();
  }
  local_178 = pTVar8;
  if (param_4 != local_f8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_4->Data).SharedReferenceCount.ReferenceController);
    (param_4->Bounds).Origin.field0_0x0._s_0.X = dVar12;
    (param_4->Bounds).Origin.field0_0x0._s_0.Y = dVar33;
    (param_4->Bounds).Origin.field0_0x0._s_0.Z = dVar34;
    (param_4->Bounds).BoxExtent.field0_0x0._s_0.X = dVar13;
    (param_4->Bounds).BoxExtent.field0_0x0._s_0.Y = dVar15;
    (param_4->Bounds).BoxExtent.field0_0x0._s_0.Z = dVar16;
    (param_4->Bounds).SphereRadius = dVar3;
    (param_4->Data).Object = pFVar9;
    (param_4->Data).SharedReferenceCount.ReferenceController = pTVar8;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar30 = (atomic<int>)((int)*paVar30 + 1);
      UNLOCK();
    }
  }
  local_100 = 1;
  dVar35 = dVar12 + dVar13;
  dVar12 = dVar12 - dVar13;
  local_158 = (param_3->Min).field0_0x0._s_0.Z;
  dStack_150 = (param_3->Max).field0_0x0._s_0.X;
  dVar14 = dVar33 + dVar15;
  dVar33 = dVar33 - dVar15;
  dVar15 = dVar34 + dVar16;
  dVar34 = dVar34 - dVar16;
  local_168 = (param_3->Min).field0_0x0._s_0.X;
  dStack_160 = (param_3->Min).field0_0x0._s_0.Y;
  local_138._0_1_ = param_3->IsValid;
  local_138._1_1_ = param_3->Pad[0];
  local_138._2_1_ = param_3->Pad[1];
  local_138._3_1_ = param_3->Pad[2];
  local_138._4_1_ = param_3->Pad[3];
  local_138._5_1_ = param_3->Pad[4];
  local_138._6_1_ = param_3->Pad[5];
  local_138._7_1_ = param_3->Pad[6];
  local_148 = (param_3->Max).field0_0x0._s_0.Y;
  dStack_140 = (param_3->Max).field0_0x0._s_0.Z;
  dVar36 = dVar14;
  dVar37 = dVar12;
  dVar16 = dVar34;
  dVar3 = dVar15;
  dVar17 = dVar33;
  dVar13 = dVar35;
  if ((undefined1)local_138 != '\0') {
    dVar37 = local_168;
    if (dVar12 <= local_168) {
      dVar37 = dVar12;
    }
    dVar17 = dStack_160;
    if (dVar33 <= dStack_160) {
      dVar17 = dVar33;
    }
    dVar16 = local_158;
    if (dVar34 <= local_158) {
      dVar16 = dVar34;
    }
    dVar13 = dStack_150;
    if (dStack_150 <= dVar35) {
      dVar13 = dVar35;
    }
    dVar3 = dStack_140;
    if (dStack_140 <= dVar15) {
      dVar3 = dVar15;
    }
    dVar36 = local_148;
    if (local_148 <= dVar14) {
      dVar36 = dVar14;
    }
  }
  dVar36 = dVar36 - dVar17;
  dVar13 = dVar13 - dVar37;
  dVar3 = dVar3 - dVar16;
  dVar34 = dVar36 * __real_3fe0000000000000;
  dVar33 = dVar13 * __real_3fe0000000000000;
  dVar12 = dVar3 * __real_3fe0000000000000;
  (param_4->Bounds).Origin.field0_0x0._s_0.X = dVar37 + dVar33;
  (param_4->Bounds).Origin.field0_0x0._s_0.Y = dVar17 + dVar34;
  (param_4->Bounds).Origin.field0_0x0._s_0.Z = dVar16 + dVar12;
  (param_4->Bounds).BoxExtent.field0_0x0._s_0.X = dVar33;
  (param_4->Bounds).BoxExtent.field0_0x0._s_0.Y = dVar34;
  (param_4->Bounds).BoxExtent.field0_0x0._s_0.Z = dVar12;
  (param_4->Bounds).SphereRadius =
       SQRT((dVar36 * dVar36 + dVar13 * dVar13 + dVar3 * dVar3) * __real_3fd0000000000000);
  FVar26 = StatPtr_STAT_Navigation_GatheringNavigationModifiersSync;
  if (StatPtr_STAT_Navigation_GatheringNavigationModifiersSync ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_GatheringNavigationModifiersSync>)0x0) {
    pFVar25 = ::FName::FName((FName *)&local_1a8,"STAT_Navigation_GatheringNavigationModifiersSync")
    ;
    FVar26 = (FThreadSafeStaticStat<FStat_STAT_Navigation_GatheringNavigationModifiersSync>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_Navigation_GatheringNavigationModifiersSync,*pFVar25,
                        L"Sync gathering navigation modifiers","STATGROUP_Navigation",
                        "STATCAT_Advanced",L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_190.ComparisonIndex.Value = 0;
  local_190.Number = 0;
  bVar18 = false;
  bVar20 = false;
  FVar31 = *(FName *)FVar26;
  if ((FVar31.ComparisonIndex.Value.Value != 0) || (FVar31.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1b8 = (FName)((ulonglong)local_1b8 & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1b8,(char *)*(FName *)((longlong)FVar26 + 0x10));
      bVar18 = false;
      bVar20 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1b8 = FVar31;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1b8,(wchar_t *)*(FName *)((longlong)FVar26 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavigationOctree.cpp"
                   ,299);
        bVar18 = true;
        bVar20 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_1b8 = FVar31;
      local_190 = FVar31;
      FThreadStats::AddMessage(FVar31,CycleScopeStart);
      bVar19 = true;
      goto LAB_146d8462b;
    }
  }
  bVar19 = false;
  FVar31 = local_190;
LAB_146d8462b:
  pFVar10 = param_2->Object;
  EVar4 = pFVar10->GeometryGatheringMode;
  if (EVar4 == Default) {
    EVar4 = this->DefaultGeometryGatheringMode;
  }
  if (EVar4 == Instant) {
    TDelegate<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy>
    ::ExecuteIfBound(&pFVar10->NavigationDataExportDelegate,pFVar10,(param_4->Data).Object);
  }
  else {
    ((param_4->Data).Object)->bPendingChildLazyModifiersGathering = 1;
  }
  this_00 = (param_4->Data).Object;
  bVar21 = FNavigationRelevantData::IsCollisionDataValid(this_00);
  if (bVar21) {
    FNavigationRelevantData::Shrink(this_00);
  }
  else {
    puVar2 = &(this_00->CollisionData).field_0x14;
    *(undefined4 *)&(this_00->CollisionData).field_0x10 = 0;
    if (*(int *)puVar2 != 0) {
      UE::Core::Private::ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                (1,1,0,(ForAnyElementType *)&this_00->CollisionData,0,(int *)puVar2);
    }
  }
  iVar32 = *(int *)&(pFVar9->CollisionData).field_0x14;
  iVar5 = *(int *)&(pFVar9->VoxelData).field_0x14;
  uVar22 = FCompositeNavModifier::GetAllocatedSize(&pFVar9->Modifiers);
  pFVar9 = (param_4->Data).Object;
  iVar6 = *(int *)&(pFVar9->CollisionData).field_0x14;
  iVar7 = *(int *)&(pFVar9->VoxelData).field_0x14;
  uVar23 = FCompositeNavModifier::GetAllocatedSize(&pFVar9->Modifiers);
  iVar32 = (iVar7 - (iVar5 + uVar22 + iVar32)) + uVar23 + iVar6;
  local_180->NodesMemory = local_180->NodesMemory + iVar32;
  if (iVar32 != 0) {
    FVar27 = StatPtr_STAT_Navigation_CollisionTreeMemory;
    if (StatPtr_STAT_Navigation_CollisionTreeMemory ==
        (FThreadSafeStaticStat<FStat_STAT_Navigation_CollisionTreeMemory>)0x0) {
      pFVar25 = ::FName::FName((FName *)&local_1a8,"STAT_Navigation_CollisionTreeMemory");
      FVar27 = (FThreadSafeStaticStat<FStat_STAT_Navigation_CollisionTreeMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_CollisionTreeMemory,
                          *pFVar25,L"Nav tree memory","STATGROUP_Navigation","STATCAT_Advanced",
                          L"Navigation",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar11 = *(FName *)FVar27;
    local_1b8 = FVar11;
    if (((FVar11 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar28 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar28 == (FThreadStats *)0x0) {
        pFVar29 = FThreadStatsPool::Get();
        pFVar28 = FThreadStatsPool::GetFromPool(pFVar29);
      }
      local_1a8.NameAndInfo.Number = FVar11.Number & 0xffffafff | 0xa000;
      local_1b8 = FVar11;
      local_1a8.StatData.Pad = (uchar  [8])(longlong)iVar32;
      local_1a8.NameAndInfo.Index.Value = FVar11.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar28,&local_1a8);
      FStatsTrace::Add(&local_1b8,(longlong)iVar32);
      if (pFVar28->ScopeCount == 0) {
        FThreadStats::Flush(pFVar28,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar28,false,false);
      }
    }
  }
  RemoveElement(local_180,*(FOctreeElementId2 *)local_198);
  AddElement(local_180,param_4);
  if (bVar20) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar19) && (FVar31 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar28 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar28 == (FThreadStats *)0x0) {
      pFVar29 = FThreadStatsPool::Get();
      pFVar28 = FThreadStatsPool::GetFromPool(pFVar29);
    }
    if (pFVar28->bWaitForExplicitFlush < pFVar28->ScopeCount) {
      local_1a8.NameAndInfo.Index.Value = local_190.ComparisonIndex.Value;
      local_1a8.NameAndInfo.Number = FVar31.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_198);
      local_1a8.StatData.Pad = (uchar  [8])(local_198.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar28,&local_1a8);
      piVar1 = &pFVar28->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar28,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar28,false,false);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_178);
  FMemScope::~FMemScope(&local_170);
  FLLMScope::~FLLMScope(local_1b0);
  return;
}

// AppendToNode @ 146d84980

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
FNavigationOctree::AppendToNode
          (FNavigationOctree *this,FOctreeElementId2 *param_1,INavRelevantInterface *param_2,
          TBox<double> *param_3,FNavigationOctreeElement *param_4)

{
  TSharedRef<FNavigationElement_const_,1> *pTVar1;
  TSharedRef<FNavigationElement_const_,1> local_18;
  
  if (param_2 != (INavRelevantInterface *)0x0) {
    pTVar1 = FNavigationElement::CreateFromNavRelevantInterface(&local_18,param_2);
    AppendToNode(this,param_1,pTVar1,param_3,param_4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return;
}

// DemandChildLazyDataGathering @ 146d8f0b0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
FNavigationOctree::DemandChildLazyDataGathering
          (FNavigationOctree *this,FNavigationRelevantData *param_1,INavRelevantInterface *param_2)

{
  TSharedRef<FNavigationElement_const_,1> local_18;
  
  FNavigationElement::CreateFromNavRelevantInterface(&local_18,param_2);
  DemandChildLazyDataGathering(this,param_1,local_18.Object);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// DemandChildLazyDataGathering @ 146d8f100

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
FNavigationOctree::DemandChildLazyDataGathering
          (FNavigationOctree *this,FNavigationRelevantData *param_1,FNavigationElement *param_2)

{
  ENavDataGatheringMode EVar1;
  bool bVar2;
  FLLMScope local_res18 [2];
  FName local_res20;
  FMemScope local_18 [2];
  
  FLLMScope::FLLMScope
            (local_res18,LLMTagDeclaration_NavigationOctree.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_NavigationOctree.UniqueName;
  FMemScope::FMemScope(local_18,&local_res20,true);
  EVar1 = param_2->GeometryGatheringMode;
  if (EVar1 == Default) {
    EVar1 = this->DefaultGeometryGatheringMode;
  }
  if ((EVar1 != Instant) &&
     (bVar2 = TDelegate<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy>
              ::ExecuteIfBound(&param_2->NavigationDataExportDelegate,param_2,param_1), bVar2)) {
    FNavigationRelevantData::ValidateAndShrink(param_1);
  }
  FMemScope::~FMemScope(local_18);
  FLLMScope::~FLLMScope(local_res18);
  return;
}

// DemandLazyDataGathering @ 146d8f340

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNavigationOctree::DemandLazyDataGathering(FNavigationOctree *this,FNavigationRelevantData *param_1)

{
  int *piVar1;
  FNavigationElement *pFVar2;
  bool bVar3;
  bool bVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  double dVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<_public:_void___cdecl_FNavigationOctree::DemandLazyDataGathering(FNavigationRelevantData_&)_::_5_::FStat_STAT_RecastNavMeshGenerator_LazyGeometryExport>
  FVar13;
  FThreadStats *pFVar14;
  FThreadStatsPool *pFVar15;
  FThreadSafeStaticStat<_public:_void___cdecl_FNavigationOctree::DemandLazyDataGathering(FNavigationRelevantData_&)_::_8_::FStat_STAT_RecastNavMeshGenerator_LazyModifiersExport>
  FVar16;
  FThreadSafeStaticStat<FStat_STAT_Navigation_CollisionTreeMemory> FVar17;
  FNameEntryId FVar18;
  FName FVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  FColor_u_0 FVar23;
  ulonglong uVar24;
  FLLMScope local_res8 [2];
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18 [2];
  uint local_res20;
  uint uStackX_24;
  FName local_138;
  FName local_130;
  FName local_128;
  FName local_118;
  FName local_108;
  LARGE_INTEGER local_100;
  LARGE_INTEGER local_f8;
  LARGE_INTEGER local_f0;
  FName local_e8;
  FMemScope local_e0;
  FStatMessage local_d8;
  FStatMessage local_c8;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  FName local_a0;
  FName local_98;
  FString local_90 [5];
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_NavigationOctree.UniqueName,false,None,Default,true);
  local_108 = LLMTagDeclaration_NavigationOctree.UniqueName;
  FMemScope::FMemScope(&local_e0,&local_108,true);
  bVar10 = false;
  lVar22 = (longlong)*(int *)&(param_1->VoxelData).field_0x14 +
           (longlong)*(int *)&(param_1->CollisionData).field_0x14;
  iVar21 = (int)lVar22;
  if (((lVar22 != iVar21) || (iVar21 < 0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar24 = (ulonglong)_tls_index;
  if ((param_1->bPendingLazyGeometryGathering != 0) &&
     (param_1->bSupportsGatheringGeometrySlices == 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar24 * 8) + 0x9d4c) <
         ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      if (StatPtr_STAT_RecastNavMeshGenerator_LazyGeometryExport ==
          (FThreadSafeStaticStat<_public:_void___cdecl_FNavigationOctree::DemandLazyDataGathering(FNavigationRelevantData_&)_::_5_::FStat_STAT_RecastNavMeshGenerator_LazyGeometryExport>
           )0x0) {
        pFVar12 = ::FName::FName(&local_b8,"STAT_RecastNavMeshGenerator_LazyGeometryExport");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_RecastNavMeshGenerator_LazyGeometryExport,*pFVar12,
                   L"STAT_RecastNavMeshGenerator_LazyGeometryExport","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
    FVar13 = StatPtr_STAT_RecastNavMeshGenerator_LazyGeometryExport;
    if (StatPtr_STAT_RecastNavMeshGenerator_LazyGeometryExport ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FNavigationOctree::DemandLazyDataGathering(FNavigationRelevantData_&)_::_5_::FStat_STAT_RecastNavMeshGenerator_LazyGeometryExport>
         )0x0) {
      pFVar12 = ::FName::FName(&local_b0,"STAT_RecastNavMeshGenerator_LazyGeometryExport");
      FVar13 = (FThreadSafeStaticStat<_public:_void___cdecl_FNavigationOctree::DemandLazyDataGathering(FNavigationRelevantData_&)_::_5_::FStat_STAT_RecastNavMeshGenerator_LazyGeometryExport>
                )FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_RecastNavMeshGenerator_LazyGeometryExport,*pFVar12,
                            L"STAT_RecastNavMeshGenerator_LazyGeometryExport","STATGROUP_Quick",
                            "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar19 = *(FName *)FVar13;
    bVar7 = false;
    bVar9 = false;
    local_128.ComparisonIndex.Value = 0;
    local_128.Number = 0;
    FVar18 = FVar19.ComparisonIndex.Value;
    uVar11 = FVar19.Number;
    if ((FVar18.Value == 0) && (uVar11 == 0)) {
LAB_146d8f55f:
      bVar3 = false;
      FVar19 = local_128;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_res10.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_res10._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
        bVar7 = false;
        bVar9 = true;
        if (-1 < CpuChannel->Enabled) {
          local_138.ComparisonIndex.Value = FVar18.Value;
          local_138.Number = uVar11;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_138,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavigationOctree.cpp"
                     ,0x4a);
          bVar7 = true;
          bVar9 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_146d8f55f;
      local_res20 = FVar18.Value;
      uStackX_24 = uVar11;
      FThreadStats::AddMessage(FVar19,CycleScopeStart);
      bVar3 = true;
    }
    TDelegate<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy>
    ::ExecuteIfBound(&this->GeometryExportDelegate,(param_1->SourceElement).Object,param_1);
    param_1->bPendingLazyGeometryGathering = 0;
    bVar10 = true;
    if (bVar9) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar7) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar3) && (FVar19 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar14 == (FThreadStats *)0x0) {
        pFVar15 = FThreadStatsPool::Get();
        pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
      }
      if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
        local_d8.NameAndInfo.Index = FVar19.ComparisonIndex.Value;
        local_d8.NameAndInfo.Number = FVar19.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_100);
        local_d8.StatData.Pad[4] = '\0';
        local_d8.StatData.Pad[5] = '\0';
        local_d8.StatData.Pad[6] = '\0';
        local_d8.StatData.Pad[7] = '\0';
        local_d8.StatData.Pad[0] = local_100.s.LowPart._0_1_;
        local_d8.StatData.Pad[1] = local_100.s.LowPart._1_1_;
        local_d8.StatData.Pad[2] = local_100.s.LowPart._2_1_;
        local_d8.StatData.Pad[3] = local_100.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar14,&local_d8);
        piVar1 = &pFVar14->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar14,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar14,false,false);
        }
      }
    }
  }
  if (param_1->bPendingLazyModifiersGathering == 0) {
    if (!bVar10) goto LAB_146d8f931;
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar24 * 8) + 0x9d4c) <
         ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      if (StatPtr_STAT_RecastNavMeshGenerator_LazyModifiersExport ==
          (FThreadSafeStaticStat<_public:_void___cdecl_FNavigationOctree::DemandLazyDataGathering(FNavigationRelevantData_&)_::_8_::FStat_STAT_RecastNavMeshGenerator_LazyModifiersExport>
           )0x0) {
        pFVar12 = ::FName::FName(&local_a8,"STAT_RecastNavMeshGenerator_LazyModifiersExport");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_RecastNavMeshGenerator_LazyModifiersExport,*pFVar12,
                   L"STAT_RecastNavMeshGenerator_LazyModifiersExport","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS1);
    }
    FVar16 = StatPtr_STAT_RecastNavMeshGenerator_LazyModifiersExport;
    if (StatPtr_STAT_RecastNavMeshGenerator_LazyModifiersExport ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FNavigationOctree::DemandLazyDataGathering(FNavigationRelevantData_&)_::_8_::FStat_STAT_RecastNavMeshGenerator_LazyModifiersExport>
         )0x0) {
      pFVar12 = ::FName::FName(&local_a0,"STAT_RecastNavMeshGenerator_LazyModifiersExport");
      FVar16 = (FThreadSafeStaticStat<_public:_void___cdecl_FNavigationOctree::DemandLazyDataGathering(FNavigationRelevantData_&)_::_8_::FStat_STAT_RecastNavMeshGenerator_LazyModifiersExport>
                )FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_RecastNavMeshGenerator_LazyModifiersExport,*pFVar12,
                            L"STAT_RecastNavMeshGenerator_LazyModifiersExport","STATGROUP_Quick",
                            "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar19 = *(FName *)FVar16;
    bVar10 = false;
    bVar9 = false;
    local_118.ComparisonIndex.Value = 0;
    local_118.Number = 0;
    FVar18 = FVar19.ComparisonIndex.Value;
    uVar11 = FVar19.Number;
    if ((FVar18.Value == 0) && (uVar11 == 0)) {
LAB_146d8f7b3:
      bVar7 = false;
      FVar19 = local_118;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_res18[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
        bVar10 = false;
        bVar9 = true;
        if (-1 < CpuChannel->Enabled) {
          local_130.ComparisonIndex.Value = FVar18.Value;
          local_130.Number = uVar11;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_130,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavigationOctree.cpp"
                     ,0x55);
          bVar10 = true;
          bVar9 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_146d8f7b3;
      local_res20 = FVar18.Value;
      uStackX_24 = uVar11;
      FThreadStats::AddMessage(FVar19,CycleScopeStart);
      bVar7 = true;
    }
    dVar8 = __real_4170000000000000;
    bVar3 = this->GatheringNavModifiersTimeLimitWarning != 0.0;
    bVar4 = this->GatheringNavModifiersTimeLimitWarning <= 0.0;
    if (bVar4 && bVar3) {
      dVar6 = 0.0;
    }
    else {
      QueryPerformanceCounter(&local_f8);
      dVar6 = (double)local_f8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar8;
    }
    pFVar2 = (param_1->SourceElement).Object;
    TDelegate<void___cdecl(FNavigationElement_const_&,FNavigationRelevantData_&),FDefaultDelegateUserPolicy>
    ::ExecuteIfBound(&pFVar2->NavigationDataExportDelegate,pFVar2,param_1);
    param_1->bPendingLazyModifiersGathering = 0;
    if (((!bVar4 || !bVar3) &&
        (QueryPerformanceCounter(&local_f0),
        (double)this->GatheringNavModifiersTimeLimitWarning <
        ((double)local_f0.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar8) - dVar6)) &&
       (2 < (byte)LogNavigation._0_1_)) {
      FNavigationElement::GetName((param_1->SourceElement).Object,local_90);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
      if (local_90[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90[0].Data.AllocatorInstance.Data);
      }
    }
    if (bVar9) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar10) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar7) {
      FThreadStats::AddMessage(FVar19,CycleScopeEnd);
    }
  }
  bVar10 = FNavigationRelevantData::IsCollisionDataValid(param_1);
  if (bVar10) {
    FNavigationRelevantData::Shrink(param_1);
  }
  else {
    *(undefined4 *)&(param_1->CollisionData).field_0x10 = 0;
    if (*(int *)&(param_1->CollisionData).field_0x14 != 0) {
      UE::Core::Private::ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                (1,1,0,(ForAnyElementType *)&param_1->CollisionData,0,
                 (int *)&(param_1->CollisionData).field_0x14);
    }
  }
LAB_146d8f931:
  lVar22 = (longlong)*(int *)&(param_1->CollisionData).field_0x14 +
           (longlong)*(int *)&(param_1->VoxelData).field_0x14;
  iVar20 = (int)lVar22;
  if (((lVar22 != iVar20) || (iVar20 < 0)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IntFitsIn<OutType>(In)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                          ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"), bVar10))
  {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar20 = iVar20 - iVar21;
  this->NodesMemory = this->NodesMemory + iVar20;
  if (iVar20 != 0) {
    FVar17 = StatPtr_STAT_Navigation_CollisionTreeMemory;
    if (StatPtr_STAT_Navigation_CollisionTreeMemory ==
        (FThreadSafeStaticStat<FStat_STAT_Navigation_CollisionTreeMemory>)0x0) {
      pFVar12 = ::FName::FName(&local_98,"STAT_Navigation_CollisionTreeMemory");
      FVar17 = (FThreadSafeStaticStat<FStat_STAT_Navigation_CollisionTreeMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_CollisionTreeMemory,
                          *pFVar12,L"Nav tree memory","STATGROUP_Navigation","STATCAT_Advanced",
                          L"Navigation",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar19 = *(FName *)FVar17;
    FVar23.Bits = (uint)FVar19.ComparisonIndex.Value;
    uVar11 = FVar19.Number;
    local_res10.Bits = FVar23.Bits;
    uStackX_14 = uVar11;
    if (((FVar19 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar14 == (FThreadStats *)0x0) {
        pFVar15 = FThreadStatsPool::Get();
        pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
      }
      local_c8.NameAndInfo.Number = uVar11 & 0xffffafff | 0xa000;
      local_e8 = FVar19;
      local_c8.StatData.Pad = (uchar  [8])(longlong)iVar20;
      local_c8.NameAndInfo.Index.Value = FVar23.Bits;
      FThreadStats::AddStatMessage(pFVar14,&local_c8);
      FStatsTrace::Add(&local_e8,(longlong)iVar20);
      if (pFVar14->ScopeCount == 0) {
        FThreadStats::Flush(pFVar14,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar14,false,false);
      }
    }
  }
  FMemScope::~FMemScope(&local_e0);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// GetDataForID @ 146d9a5a0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

FNavigationRelevantData * __thiscall
FNavigationOctree::GetDataForID(FNavigationOctree *this,FOctreeElementId2 *param_1)

{
  FOctreeElementId2 FVar1;
  code *pcVar2;
  bool bVar3;
  FNavigationRelevantData *pFVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  if (param_1->NodeIndex == 0xffffffff) {
    return (FNavigationRelevantData *)0x0;
  }
  FVar1 = *param_1;
  uVar8 = FVar1.NodeIndex;
  uVar5 = 0;
  if ((int)uVar8 < (int)this->_padding_) {
    uVar5 = ~uVar8 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FNavigationRelevantData *)(*pcVar2)();
      return pFVar4;
    }
  }
  uVar7 = FVar1.ElementIndex;
  lVar9 = (longlong)(int)uVar8 * 0x490 + this->_padding_;
  uVar5 = 0;
  if ((int)uVar7 < *(int *)(lVar9 + 0x488)) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FNavigationRelevantData *)(*pcVar2)();
      return pFVar4;
    }
  }
  lVar6 = *(longlong *)(lVar9 + 0x480);
  if (*(longlong *)(lVar9 + 0x480) == 0) {
    lVar6 = lVar9;
  }
  return *(FNavigationRelevantData **)(lVar6 + 0x38 + (longlong)(int)uVar7 * 0x48);
}

// GetMutableDataForID @ 146d9c300

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

FNavigationRelevantData * __thiscall
FNavigationOctree::GetMutableDataForID(FNavigationOctree *this,FOctreeElementId2 *param_1)

{
  FNavigationOctreeElement *pFVar1;
  
  if (param_1->NodeIndex != 0xffffffff) {
    pFVar1 = TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics>::GetElementById
                       ((TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics> *)
                        &this->_padding_,*param_1);
    return (pFVar1->Data).Object;
  }
  return (FNavigationRelevantData *)0x0;
}

// IsLazyGathering @ 146da48a0

bool __thiscall
FNavigationOctree::IsLazyGathering(FNavigationOctree *this,FNavigationElement *param_1)

{
  ENavDataGatheringMode EVar1;
  
  EVar1 = param_1->GeometryGatheringMode;
  if (EVar1 == Default) {
    EVar1 = this->DefaultGeometryGatheringMode;
  }
  if (EVar1 == Instant) {
    return false;
  }
  return true;
}

// IsLazyGathering @ 146da48d0

bool __thiscall
FNavigationOctree::IsLazyGathering(FNavigationOctree *this,INavRelevantInterface *param_1)

{
  ENavDataGatheringMode EVar1;
  TSharedRef<FNavigationElement_const_,1> local_18;
  
  FNavigationElement::CreateFromNavRelevantInterface(&local_18,param_1);
  EVar1 = (local_18.Object)->GeometryGatheringMode;
  if (EVar1 == Default) {
    EVar1 = this->DefaultGeometryGatheringMode;
  }
  if (EVar1 == Instant) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return false;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return true;
}

// RemoveElement @ 146db4a70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNavigationOctree::RemoveElement(FNavigationOctree *this,FOctreeElementId2 param_1)

{
  FName FVar1;
  FName *pFVar2;
  FThreadSafeStaticStat<FStat_STAT_NavigationMemory> FVar3;
  FThreadStats *pFVar4;
  FThreadStatsPool *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_Navigation_CollisionTreeMemory> FVar6;
  uchar auVar7 [8];
  FName local_res8;
  FStatMessage local_38;
  
  auVar7 = (uchar  [8])this->OctreeSizeBytes;
  if (auVar7 != (uchar  [8])0x0) {
    FVar3 = StatPtr_STAT_NavigationMemory;
    if (StatPtr_STAT_NavigationMemory == (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)0x0) {
      pFVar2 = ::FName::FName(&local_res8,"STAT_NavigationMemory");
      FVar3 = (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NavigationMemory,*pFVar2,
                         L"Navigation Memory","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true,
                         false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar3;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar4 == (FThreadStats *)0x0) {
        pFVar5 = FThreadStatsPool::Get();
        pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar1;
      local_38.StatData.Pad = auVar7;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar4,&local_38);
      FStatsTrace::Add(&local_res8,-(longlong)auVar7);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
  }
  auVar7 = (uchar  [8])this->OctreeSizeBytes;
  if (auVar7 != (uchar  [8])0x0) {
    FVar6 = StatPtr_STAT_Navigation_CollisionTreeMemory;
    if (StatPtr_STAT_Navigation_CollisionTreeMemory ==
        (FThreadSafeStaticStat<FStat_STAT_Navigation_CollisionTreeMemory>)0x0) {
      pFVar2 = ::FName::FName(&local_res8,"STAT_Navigation_CollisionTreeMemory");
      FVar6 = (FThreadSafeStaticStat<FStat_STAT_Navigation_CollisionTreeMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_CollisionTreeMemory,
                         *pFVar2,L"Nav tree memory","STATGROUP_Navigation","STATCAT_Advanced",
                         L"Navigation",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar6;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar4 == (FThreadStats *)0x0) {
        pFVar5 = FThreadStatsPool::Get();
        pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar1;
      local_38.StatData.Pad = auVar7;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar4,&local_38);
      FStatsTrace::Add(&local_res8,-(longlong)auVar7);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
  }
  TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics>::RemoveElement
            ((TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics> *)&this->_padding_,
             param_1);
  auVar7 = (uchar  [8])
           TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics>::GetSizeBytes
                     ((TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics> *)
                      &this->_padding_);
  this->OctreeSizeBytes = (ulong64)auVar7;
  if (auVar7 != (uchar  [8])0x0) {
    FVar3 = StatPtr_STAT_NavigationMemory;
    if (StatPtr_STAT_NavigationMemory == (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)0x0) {
      pFVar2 = ::FName::FName(&local_res8,"STAT_NavigationMemory");
      FVar3 = (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NavigationMemory,*pFVar2,
                         L"Navigation Memory","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true,
                         false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar3;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar4 == (FThreadStats *)0x0) {
        pFVar5 = FThreadStatsPool::Get();
        pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_res8 = FVar1;
      local_38.StatData.Pad = auVar7;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar4,&local_38);
      FStatsTrace::Add(&local_res8,(long64)auVar7);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
  }
  auVar7 = (uchar  [8])this->OctreeSizeBytes;
  if (auVar7 != (uchar  [8])0x0) {
    FVar6 = StatPtr_STAT_Navigation_CollisionTreeMemory;
    if (StatPtr_STAT_Navigation_CollisionTreeMemory ==
        (FThreadSafeStaticStat<FStat_STAT_Navigation_CollisionTreeMemory>)0x0) {
      pFVar2 = ::FName::FName(&local_res8,"STAT_Navigation_CollisionTreeMemory");
      FVar6 = (FThreadSafeStaticStat<FStat_STAT_Navigation_CollisionTreeMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_CollisionTreeMemory,
                         *pFVar2,L"Nav tree memory","STATGROUP_Navigation","STATCAT_Advanced",
                         L"Navigation",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar6;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res8 = FVar1;
      pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar4 == (FThreadStats *)0x0) {
        pFVar5 = FThreadStatsPool::Get();
        pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_res8 = FVar1;
      local_38.StatData.Pad = auVar7;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar4,&local_38);
      FStatsTrace::Add(&local_res8,(long64)auVar7);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
  }
  return;
}

// RemoveNode @ 146db5bf0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNavigationOctree::RemoveNode(FNavigationOctree *this,FOctreeElementId2 *param_1)

{
  int iVar1;
  FNavigationRelevantData *pFVar2;
  FName FVar3;
  uint uVar4;
  FNavigationOctreeElement *pFVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_Navigation_CollisionTreeMemory> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  int iVar8;
  FName local_res8;
  FStatMessage local_28;
  
  pFVar5 = TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics>::GetElementById
                     ((TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics> *)
                      &this->_padding_,*param_1);
  pFVar2 = (pFVar5->Data).Object;
  iVar8 = *(int *)&(pFVar2->CollisionData).field_0x14;
  iVar1 = *(int *)&(pFVar2->VoxelData).field_0x14;
  uVar4 = FCompositeNavModifier::GetAllocatedSize(&pFVar2->Modifiers);
  iVar8 = iVar1 + uVar4 + iVar8;
  this->NodesMemory = this->NodesMemory - iVar8;
  if (iVar8 != 0) {
    FVar7 = StatPtr_STAT_Navigation_CollisionTreeMemory;
    if (StatPtr_STAT_Navigation_CollisionTreeMemory ==
        (FThreadSafeStaticStat<FStat_STAT_Navigation_CollisionTreeMemory>)0x0) {
      pFVar6 = ::FName::FName(&local_res8,"STAT_Navigation_CollisionTreeMemory");
      FVar7 = (FThreadSafeStaticStat<FStat_STAT_Navigation_CollisionTreeMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_CollisionTreeMemory,
                         *pFVar6,L"Nav tree memory","STATGROUP_Navigation","STATCAT_Advanced",
                         L"Navigation",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar3 = *(FName *)FVar7;
    local_res8 = FVar3;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_28.NameAndInfo.Number = FVar3.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar3;
      local_28.StatData.Pad = (uchar  [8])(longlong)iVar8;
      local_28.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_28);
      FStatsTrace::Add(&local_res8,-(longlong)iVar8);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  RemoveElement(this,*param_1);
  return;
}

// SetDataGatheringMode @ 146db89c0

void __thiscall
FNavigationOctree::SetDataGatheringMode(FNavigationOctree *this,ENavDataGatheringModeConfig param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 != Invalid) {
    this->DefaultGeometryGatheringMode = param_1;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Mode != ENavDataGatheringModeConfig::Invalid",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavigationOctree.cpp"
                     ,0x38,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->DefaultGeometryGatheringMode = Default;
  return;
}

// SetElementIdImpl @ 146db8ac0

void __thiscall
FNavigationOctree::SetElementIdImpl
          (FNavigationOctree *this,FNavigationElementHandle *param_1,FOctreeElementId2 param_2)

{
  TPairInitializer<FNavigationElementHandle_const_&,FOctreeElementId2_const_&> local_res8;
  FOctreeElementId2 local_res18 [2];
  FNavigationElementHandle *local_18;
  FOctreeElementId2 *local_10;
  
  local_10 = local_res18;
  local_res18[0] = param_2;
  local_18 = param_1;
  TSet<TTuple<FNavigationElementHandle,FOctreeElementId2>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FNavigationElementHandle_const_&,FOctreeElementId2_const_&>_>
            ((TSet<TTuple<FNavigationElementHandle,FOctreeElementId2>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,FOctreeElementId2,0>,FDefaultSetAllocator>
              *)&this->ElementToOctreeId,&local_res8,(bool *)&local_18);
  return;
}

// SetGatheringNavModifiersTimeLimitWarning @ 146db8b30

void __thiscall
FNavigationOctree::SetGatheringNavModifiersTimeLimitWarning(FNavigationOctree *this,float param_1)

{
  this->GatheringNavModifiersTimeLimitWarning = param_1;
  return;
}

// SetNavigableGeometryStoringMode @ 146db9050

void __thiscall
FNavigationOctree::SetNavigableGeometryStoringMode
          (FNavigationOctree *this,ENavGeometryStoringMode param_1)

{
  this->bGatherGeometry = 0;
  *(uint *)&this->field_0x14c = *(uint *)&this->field_0x14c | (uint)(param_1 == StoreNavGeometry);
  return;
}

// UpdateNode @ 146dc44f0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
FNavigationOctree::UpdateNode
          (FNavigationOctree *this,FOctreeElementId2 *param_1,TBox<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  FNavigationOctreeElement *pFVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  TVector<double>_u_0 local_88;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  FNavigationRelevantData *local_50;
  TReferenceControllerBase<1> *local_48;
  
  pFVar4 = TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics>::GetElementById
                     ((TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics> *)
                      &this->_padding_,*param_1);
  local_88._s_0.X = (pFVar4->Bounds).Origin.field0_0x0._s_0.X;
  local_88._s_0.Y = (pFVar4->Bounds).Origin.field0_0x0._s_0.Y;
  local_88._s_0.Z = (pFVar4->Bounds).Origin.field0_0x0._s_0.Z;
  dStack_70 = (pFVar4->Bounds).BoxExtent.field0_0x0._s_0.X;
  local_68 = (pFVar4->Bounds).BoxExtent.field0_0x0._s_0.Y;
  dStack_60 = (pFVar4->Bounds).BoxExtent.field0_0x0._s_0.Z;
  local_58 = (pFVar4->Bounds).SphereRadius;
  local_50 = (pFVar4->Data).Object;
  local_48 = (pFVar4->Data).SharedReferenceCount.ReferenceController;
  if (local_48 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_48->SharedReferenceCount = (atomic<int>)((int)local_48->SharedReferenceCount + 1);
    UNLOCK();
  }
  RemoveElement(this,*param_1);
  dVar3 = (param_2->Max).field0_0x0._s_0.Y - (param_2->Min).field0_0x0._s_0.Y;
  dVar2 = (param_2->Max).field0_0x0._s_0.X - (param_2->Min).field0_0x0._s_0.X;
  dVar1 = (param_2->Max).field0_0x0._s_0.Z - (param_2->Min).field0_0x0._s_0.Z;
  local_68 = dVar3 * __real_3fe0000000000000;
  dStack_70 = dVar2 * __real_3fe0000000000000;
  dStack_60 = dVar1 * __real_3fe0000000000000;
  local_88._s_0.Y = local_68 + (param_2->Min).field0_0x0._s_0.Y;
  local_88._s_0.X = dStack_70 + (param_2->Min).field0_0x0._s_0.X;
  auVar5._0_8_ = dStack_60 + (param_2->Min).field0_0x0._s_0.Z;
  auVar5._8_8_ = 0;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = (dVar3 * dVar3 + dVar2 * dVar2 + dVar1 * dVar1) * __real_3fd0000000000000;
  auVar6 = sqrtpd(auVar5,auVar6);
  local_58 = auVar6._0_8_;
  local_88._s_0.Z = auVar5._0_8_;
  AddElement(this,(FNavigationOctreeElement *)&local_88._s_0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_48);
  return;
}

