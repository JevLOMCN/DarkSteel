// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 84

// FPImplRecastNavMesh @ 146dd69f0

/* WARNING: Enum "Type": Some values do not have unique names */

FPImplRecastNavMesh * __thiscall
FPImplRecastNavMesh::FPImplRecastNavMesh(FPImplRecastNavMesh *this,ARecastNavMesh *param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FPImplRecastNavMesh *pFVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_NavigationMemory> FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  this->NavMeshOwner = param_1;
  this->DetourNavMesh = (dtNavMesh *)0x0;
  *(undefined8 *)&this->CompressedTileCacheLayers = 0;
  *(undefined8 *)&(this->CompressedTileCacheLayers).field_0x8 = 0;
  *(undefined8 *)&(this->CompressedTileCacheLayers).field_0x20 = 0;
  *(undefined4 *)&(this->CompressedTileCacheLayers).field_0x28 = 0;
  *(undefined4 *)&(this->CompressedTileCacheLayers).field_0x2c = 0x80;
  *(undefined4 *)&(this->CompressedTileCacheLayers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CompressedTileCacheLayers).field_0x34 = 0;
  *(undefined8 *)&(this->CompressedTileCacheLayers).field_0x40 = 0;
  *(undefined4 *)&(this->CompressedTileCacheLayers).field_0x48 = 0;
  *(undefined8 *)&this->DebugDataMap = 0;
  *(undefined8 *)&(this->DebugDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->DebugDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->DebugDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->DebugDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DebugDataMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DebugDataMap).field_0x34 = 0;
  *(undefined8 *)&(this->DebugDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->DebugDataMap).field_0x48 = 0;
  dtNavMeshQuery::dtNavMeshQuery(&this->SharedNavQuery);
  if ((param_1 == (ARecastNavMesh *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Owner && \"Owner must never be NULL\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\PImplRecastNavMesh.cpp"
                         ,0x1c7,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FPImplRecastNavMesh *)(*pcVar2)();
    return pFVar4;
  }
  if (((uint)param_1->_padding_ >> 4 & 1) == 0) {
    FVar6 = StatPtr_STAT_NavigationMemory;
    if (StatPtr_STAT_NavigationMemory == (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)0x0) {
      pFVar5 = ::FName::FName(&local_res10,"STAT_NavigationMemory");
      FVar6 = (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NavigationMemory,*pFVar5,
                         L"Navigation Memory","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true,
                         false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar6;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res8 = FVar1;
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_28.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_28.StatData.Pad[0] = 'P';
      local_28.StatData.Pad[1] = '\x01';
      local_28.StatData.Pad[2] = '\0';
      local_28.StatData.Pad[3] = '\0';
      local_28.StatData.Pad[4] = '\0';
      local_28.StatData.Pad[5] = '\0';
      local_28.StatData.Pad[6] = '\0';
      local_28.StatData.Pad[7] = '\0';
      local_res8 = FVar1;
      local_28.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_28);
      FStatsTrace::Add(&local_res8,0x150);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return this;
}

// ~FPImplRecastNavMesh @ 146dd9b20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FPImplRecastNavMesh::~FPImplRecastNavMesh(FPImplRecastNavMesh *this)

{
  FName FVar1;
  void *pvVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_NavigationMemory> FVar4;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  FStatMessage local_18;
  
  ReleaseDetourNavMesh(this);
  FVar4 = StatPtr_STAT_NavigationMemory;
  if (StatPtr_STAT_NavigationMemory == (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)0x0) {
    pFVar3 = ::FName::FName(&local_res8,"STAT_NavigationMemory");
    FVar4 = (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NavigationMemory,*pFVar3,
                       L"Navigation Memory","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true,
                       false,ST_int64,false,false,MCR_Physical);
  }
  FVar1 = *(FName *)FVar4;
  local_res8 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_18.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
    local_18.StatData.Pad[0] = 'P';
    local_18.StatData.Pad[1] = '\x01';
    local_18.StatData.Pad[2] = '\0';
    local_18.StatData.Pad[3] = '\0';
    local_18.StatData.Pad[4] = '\0';
    local_18.StatData.Pad[5] = '\0';
    local_18.StatData.Pad[6] = '\0';
    local_18.StatData.Pad[7] = '\0';
    local_res8 = FVar1;
    local_18.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_18);
    FStatsTrace::Add(&local_res8,-0x150);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  dtNavMeshQuery::~dtNavMeshQuery(&this->SharedNavQuery);
  *(undefined4 *)&(this->DebugDataMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->DebugDataMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,FRecastInternalDebugData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,FRecastInternalDebugData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,FRecastInternalDebugData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DebugDataMap);
  *(undefined4 *)&(this->CompressedTileCacheLayers).field_0x48 = 0;
  pvVar2 = *(void **)&(this->CompressedTileCacheLayers).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CompressedTileCacheLayers);
  return;
}

// operator() @ 146ddb8d0

void __thiscall
`FPImplRecastNavMesh::GetDebugGeometryForTile'::__l2::<lambda_2>::operator()
          (void *this,FRecastDebugGeometry *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  
  iVar1 = (param_1->MeshVerts).ArrayNum;
  uVar4 = param_2 + iVar1;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if ((param_1->MeshVerts).ArrayMax < (int)uVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar4,(ForAnyElementType *)param_1,iVar1,&(param_1->MeshVerts).ArrayMax);
  }
  uVar4 = param_1->AreaIndices[0].ArrayNum + param_3;
  if (-1 < (int)uVar4) {
    if (param_1->AreaIndices[0].ArrayMax < (int)uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar4,&param_1->AreaIndices[0].AllocatorInstance,
                 param_1->AreaIndices[0].ArrayNum,&param_1->AreaIndices[0].ArrayMax);
    }
    iVar1 = (param_1->BuiltMeshIndices).ArrayNum;
    uVar4 = iVar1 + param_3;
    if (-1 < (int)uVar4) {
      piVar2 = &(param_1->BuiltMeshIndices).ArrayMax;
      if (*piVar2 < (int)uVar4) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar4,&(param_1->BuiltMeshIndices).AllocatorInstance,iVar1,piVar2);
      }
      lVar3 = 0;
      piVar2 = &param_1->TileBuildTimesIndices[0].ArrayMax;
      do {
        uVar4 = piVar2[-1] + param_3;
        if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
        }
        if (*piVar2 < (int)uVar4) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar4,(ForAnyElementType *)(piVar2 + -3),piVar2[-1],piVar2);
        }
        lVar3 = lVar3 + 1;
        piVar2 = piVar2 + 4;
      } while (lVar3 < 5);
      return;
    }
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
}

// AddTileCacheLayer @ 146ddee80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FPImplRecastNavMesh::AddTileCacheLayer
          (FPImplRecastNavMesh *this,int param_1,int param_2,int param_3,FNavMeshTileData *param_4)

{
  code *pcVar1;
  TIntPoint<int> TVar2;
  bool bVar3;
  TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_> *pTVar4;
  uint uVar5;
  uint uVar6;
  TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_> *this_00;
  int local_58;
  int local_54;
  TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_> local_50;
  int *local_40;
  TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_> *local_38;
  
  TVar2.field0_0x0._s_0.Y = param_2;
  TVar2.field0_0x0._s_0.X = param_1;
  pTVar4 = TSet<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                   *)&this->CompressedTileCacheLayers,TVar2);
  uVar5 = param_3 + 1;
  this_00 = (TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_> *)&pTVar4->field_0x8;
  if (pTVar4 == (TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
    this_00 = (TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_> *)0x0;
  }
  uVar6 = 0;
  if (this_00 == (TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_> *)0x0) {
    local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50.ArrayNum = 0;
    local_50.ArrayMax = 0;
    if ((int)uVar5 < 0) {
      uVar5 = uVar6;
    }
    TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>::SetNum(&local_50,uVar5,Default);
    if (param_3 < local_50.ArrayNum) {
      uVar6 = (uint)~param_3 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FNavMeshTileData::operator=
              ((FNavMeshTileData *)(local_50.AllocatorInstance.Data + (longlong)param_3 * 0x58),
               param_4);
    local_40 = &local_58;
    local_38 = &local_50;
    local_58 = param_1;
    local_54 = param_2;
    TSet<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<UE::Math::TIntPoint<int>_&&,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_const_&>_>
              ((TSet<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)&this->CompressedTileCacheLayers,
               (TPairInitializer<UE::Math::TIntPoint<int>_&&,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_const_&>
                *)&stack0x00000010,(bool *)&local_40);
    DestructItems<FNavMeshTileData,int>
              ((FNavMeshTileData *)local_50.AllocatorInstance.Data,local_50.ArrayNum);
    if ((FNavMeshTileData *)local_50.AllocatorInstance.Data != (FNavMeshTileData *)0x0) {
      FMemory::Free(local_50.AllocatorInstance.Data);
    }
  }
  else {
    if ((int)uVar5 < this_00->ArrayNum) {
      uVar5 = this_00->ArrayNum;
    }
    TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>::SetNum(this_00,uVar5,Default);
    if (param_3 < this_00->ArrayNum) {
      uVar6 = (uint)~param_3 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FNavMeshTileData::operator=
              ((FNavMeshTileData *)((this_00->AllocatorInstance).Data + (longlong)param_3 * 0x58),
               param_4);
  }
  return;
}

// AddTileCacheLayers @ 146ddf080

void __thiscall
FPImplRecastNavMesh::AddTileCacheLayers
          (FPImplRecastNavMesh *this,int param_1,int param_2,
          TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_> *param_3)

{
  int local_res8;
  int local_resc;
  TPairInitializer<UE::Math::TIntPoint<int>_&&,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_const_&>
  local_res10;
  int *local_18;
  TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_> *local_10;
  
  local_18 = &local_res8;
  local_res8 = param_1;
  local_resc = param_2;
  local_10 = param_3;
  TSet<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<UE::Math::TIntPoint<int>_&&,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_const_&>_>
            ((TSet<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&this->CompressedTileCacheLayers,&local_res10,(bool *)&local_18);
  return;
}

// ApplyWorldOffset @ 146ddfcb0

void __thiscall
FPImplRecastNavMesh::ApplyWorldOffset
          (FPImplRecastNavMesh *this,TVector<double> *param_1,bool param_2)

{
  undefined8 uVar1;
  double local_28;
  double local_20;
  undefined8 local_18;
  
  if (this->DetourNavMesh != (dtNavMesh *)0x0) {
    local_28 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20) ^
                                __xmm_80000000000000008000000000000000._4_4_,
                                (uint)*(undefined8 *)&param_1->field0_0x0 ^
                                (uint)__xmm_80000000000000008000000000000000);
    uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
    local_18 = CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        (uint)uVar1 ^ (uint)__xmm_80000000000000008000000000000000);
    local_20 = (param_1->field0_0x0)._s_0.Z;
    dtNavMesh::applyWorldOffset(this->DetourNavMesh,&local_28);
  }
  return;
}

// CalcSegmentCostOnPoly @ 146de3700

double __thiscall
FPImplRecastNavMesh::CalcSegmentCostOnPoly
          (FPImplRecastNavMesh *this,ulong64 param_1,dtQueryFilter *param_2,TVector<double> *param_3
          ,TVector<double> *param_4)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  byte local_res8 [8];
  
  local_res8[0] = 0x3f;
  dtNavMesh::getPolyArea(this->DetourNavMesh,param_1,local_res8);
  dVar5 = (param_4->field0_0x0)._s_0.Y - (param_3->field0_0x0)._s_0.Y;
  dVar1 = (param_4->field0_0x0)._s_0.Z - (param_3->field0_0x0)._s_0.Z;
  dVar4 = (param_4->field0_0x0)._s_0.X - (param_3->field0_0x0)._s_0.X;
  auVar2._0_8_ = dVar1 * dVar1;
  auVar2._8_8_ = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = dVar5 * dVar5 + dVar4 * dVar4 + auVar2._0_8_;
  auVar3 = sqrtpd(auVar2,auVar3);
  return auVar3._0_8_ * (param_2->data).m_areaCost[local_res8[0]];
}

// DebugPathfinding @ 146de72c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall
FPImplRecastNavMesh::DebugPathfinding
          (FPImplRecastNavMesh *this,TVector<double> *param_1,TVector<double> *param_2,
          double param_3,bool param_4,FNavigationQueryFilter *param_5,UObject *param_6,
          TArray<FRecastDebugPathfindingData,TSizedDefaultAllocator<32>_> *param_7)

{
  undefined1 *puVar1;
  int iVar2;
  INavigationQueryFilterInterface *pIVar3;
  UNavigationSystemBase *pUVar4;
  bool bVar5;
  uint uVar6;
  UWorld *pUVar7;
  UClass *pUVar8;
  uint uVar9;
  UNavigationSystemBase *pUVar10;
  dtQueryFilter *pdVar11;
  dtNavMeshQuery *this_00;
  undefined1 auStackY_258 [32];
  int local_208 [2];
  UObject *local_200;
  TVector<double> *local_1f8;
  TVector<double> *local_1f0;
  ulong64 local_1e8;
  ulong64 local_1e0;
  dtQuerySpecialLinkFilter local_1d8;
  UNavigationSystemBase *local_1d0;
  FWeakObjectPtr local_1c8;
  undefined8 local_1c0;
  TVector<double> local_1b8;
  TVector<double> local_1a0;
  dtNavMeshQuery local_188;
  ulong64 local_e8 [16];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_258;
  pUVar10 = (UNavigationSystemBase *)0x0;
  uVar9 = 0;
  pIVar3 = (param_5->QueryFilterImpl).Object;
  local_1f8 = param_2;
  local_1f0 = param_1;
  if ((pIVar3 == (INavigationQueryFilterInterface *)0x0) ||
     (pdVar11 = (dtQueryFilter *)(pIVar3 + 1), pdVar11 == (dtQueryFilter *)0x0)) {
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this->NavMeshOwner,(FName *)&LogNavigation.field_0x4,Warning,
                 L"FPImplRecastNavMesh::DebugPathfinding failing due to QueryFilter == NULL");
    }
    return 0;
  }
  pUVar7 = AActor::GetWorld((AActor *)this->NavMeshOwner);
  if ((pUVar7 != (UWorld *)0x0) &&
     (pUVar4 = (pUVar7->NavigationSystem).field0_0x0.DebugPtr,
     pUVar4 != (UNavigationSystemBase *)0x0)) {
    pUVar8 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar2 = (int)pUVar8->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       (local_1d0 = pUVar4,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
       &pUVar8->_padding_)) goto LAB_146de7379;
  }
  local_1d0 = pUVar10;
LAB_146de7379:
  local_1d8 = (dtQuerySpecialLinkFilter)&___7FRecastSpeciaLinkFilter__6B_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_6);
  }
  local_1c8.ObjectIndex = 0;
  local_1c8.ObjectSerialNumber = 0;
  local_200 = param_6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_6);
  }
  FWeakObjectPtr::operator=(&local_1c8,(FObjectPtr)&local_200);
  local_1c0 = 0;
  dtNavMeshQuery::dtNavMeshQuery(&local_188);
  bVar5 = IsInGameThread();
  this_00 = &this->SharedNavQuery;
  if (!bVar5) {
    this_00 = &local_188;
  }
  dtNavMeshQuery::init(this_00,this->DetourNavMesh,param_5->MaxSearchNodes,&local_1d8);
  (this_00->m_query).requireNavigableEndLocation = '\0';
  puVar1 = &(this_00->m_query).field_0x68;
  *puVar1 = *puVar1 | param_4;
  bVar5 = InitPathfinding(this,local_1f0,local_1f8,this_00,pdVar11,&local_1a0,&local_1e0,&local_1b8,
                          &local_1e8,(FNavMeshPath *)0x0);
  if (bVar5) {
    uVar6 = dtNavMeshQuery::initSlicedFindPath
                      (this_00,local_1e0,local_1e8,(double *)&local_1a0,(double *)&local_1b8,param_3
                       ,param_4,pdVar11);
    uVar9 = 0;
    while ((uVar6 >> 0x1d & 1) != 0) {
      StorePathfindingDebugStep(this_00,this->DetourNavMesh,param_7);
      uVar9 = (int)pUVar10 + 1;
      pUVar10 = (UNavigationSystemBase *)(ulonglong)uVar9;
      uVar6 = dtNavMeshQuery::updateSlicedFindPath(this_00,1,(int *)0x0);
    }
    dtNavMeshQuery::finalizeSlicedFindPath(this_00,local_e8,local_208,0x10);
  }
  dtNavMeshQuery::~dtNavMeshQuery(&local_188);
  return uVar9;
}

// FilterPolys @ 146df32f0

bool __thiscall
FPImplRecastNavMesh::FilterPolys
          (FPImplRecastNavMesh *this,TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_1,
          FRecastQueryFilter *param_2,UObject *param_3)

{
  FScriptContainerElement *_Dst;
  ulong64 uVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  dtPoly *local_res18 [2];
  dtMeshTile *local_68;
  longlong local_60;
  
  dVar3 = __real_47efffffe0000000;
  if ((param_2 == (FRecastQueryFilter *)0x0) || (this->DetourNavMesh == (dtNavMesh *)0x0)) {
    return false;
  }
  iVar12 = param_1->ArrayNum;
  uVar11 = iVar12 - 1;
  if (-1 < (int)uVar11) {
    lVar10 = (longlong)(int)uVar11;
    lVar13 = lVar10 * 8;
    do {
      uVar14 = ~uVar11 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar11 < param_1->ArrayNum) {
        uVar7 = uVar14;
      }
      local_60 = lVar13;
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      uVar1 = *(ulong64 *)((param_1->AllocatorInstance).Data + lVar13);
      local_res18[0] = (dtPoly *)0x0;
      local_68 = (dtMeshTile *)0x0;
      uVar7 = dtNavMesh::getTileAndPolyByRef(this->DetourNavMesh,uVar1,&local_68,local_res18);
      if ((uVar7 >> 0x1e & 1) == 0) {
LAB_146df3478:
        uVar7 = 0;
        if (iVar12 <= param_1->ArrayNum) {
          uVar7 = uVar14;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        _Dst = (param_1->AllocatorInstance).Data + lVar10 * 8;
        iVar9 = param_1->ArrayNum + ~uVar11;
        if (iVar9 != 0) {
          memmove(_Dst,_Dst + 8,(longlong)iVar9 << 3);
        }
        param_1->ArrayNum = param_1->ArrayNum + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
      }
      else {
        if (param_2->field_0x428 == '\0') {
          if (((((*(ushort *)&param_2->field_0x420 & local_res18[0]->flags) == 0) ||
               ((*(ushort *)&param_2->field_0x422 & local_res18[0]->flags) != 0)) ||
              (uVar8 = (ulonglong)(local_res18[0]->areaAndtype & 0x3f),
              dVar3 < *(double *)(&param_2->field_0x10 + uVar8 * 8) ||
              dVar3 == *(double *)(&param_2->field_0x10 + uVar8 * 8))) ||
             (dVar3 < *(double *)(&param_2->field_0x210 + uVar8 * 8) ||
              dVar3 == *(double *)(&param_2->field_0x210 + uVar8 * 8))) {
            cVar6 = '\0';
          }
          else {
            cVar6 = '\x01';
          }
        }
        else {
          cVar6 = (**(code **)(*(longlong *)&param_2->field_0x8 + 8))
                            (&param_2->field_0x8,uVar1,local_68,local_res18[0]);
        }
        if ((cVar6 == '\0') ||
           (*(double *)(&param_2->field_0x10 + (ulonglong)(local_res18[0]->areaAndtype & 0x3f) * 8)
            <= 0.0)) goto LAB_146df3478;
      }
      iVar12 = iVar12 + -1;
      lVar13 = local_60 + -8;
      lVar10 = lVar10 + -1;
      uVar11 = uVar11 - 1;
    } while (-1 < (int)uVar11);
  }
  return true;
}

// FindMoveAlongSurface @ 146df41b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FPImplRecastNavMesh::FindMoveAlongSurface
          (FPImplRecastNavMesh *this,FNavLocation *param_1,TVector<double> *param_2,
          FNavLocation *param_3,FNavigationQueryFilter *param_4,UObject *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  UNavigationSystemBase *pUVar4;
  INavigationQueryFilterInterface *pIVar5;
  ulong64 uVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  UWorld *pUVar11;
  UClass *pUVar12;
  dtQueryFilter *pdVar13;
  dtNavMeshQuery *this_00;
  uint uVar14;
  uint uVar15;
  undefined1 auStackY_278 [32];
  int local_228 [2];
  undefined8 local_220;
  UObject *local_218;
  FNavLocation *local_210;
  dtQuerySpecialLinkFilter local_208;
  UNavigationSystemBase *local_200;
  FWeakObjectPtr local_1f8;
  undefined8 local_1f0;
  double local_1e8;
  double local_1e0;
  undefined8 local_1d8;
  double local_1d0;
  double local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1a0;
  dtNavMeshQuery local_198;
  double local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  ulong64 local_d8 [16];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_278;
  if (this->DetourNavMesh == (dtNavMesh *)0x0) {
    return false;
  }
  local_210 = param_3;
  pUVar11 = AActor::GetWorld((AActor *)this->NavMeshOwner);
  if ((pUVar11 == (UWorld *)0x0) ||
     (pUVar4 = (pUVar11->NavigationSystem).field0_0x0.DebugPtr,
     pUVar4 == (UNavigationSystemBase *)0x0)) {
LAB_146df4253:
    local_200 = (UNavigationSystemBase *)0x0;
  }
  else {
    pUVar12 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar3 = (int)pUVar12->_padding_;
    if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar3) ||
       (local_200 = pUVar4,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
       &pUVar12->_padding_)) goto LAB_146df4253;
  }
  local_208 = (dtQuerySpecialLinkFilter)&___7FRecastSpeciaLinkFilter__6B_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_5);
  }
  local_1f8.ObjectIndex = 0;
  local_1f8.ObjectSerialNumber = 0;
  local_218 = param_5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_5);
  }
  FWeakObjectPtr::operator=(&local_1f8,(FObjectPtr)&local_218);
  local_1f0 = 0;
  dtNavMeshQuery::dtNavMeshQuery(&local_198);
  bVar8 = IsInGameThread();
  this_00 = &this->SharedNavQuery;
  if (!bVar8) {
    this_00 = &local_198;
  }
  dtNavMeshQuery::init(this_00,this->DetourNavMesh,param_4->MaxSearchNodes,&local_208);
  pIVar5 = (param_4->QueryFilterImpl).Object;
  if ((pIVar5 == (INavigationQueryFilterInterface *)0x0) ||
     (pdVar13 = (dtQueryFilter *)(pIVar5 + 1), pdVar13 == (dtQueryFilter *)0x0)) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<714170589362784036>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\PImplRecastNavMesh.cpp"
                       ,0x724,"QueryFilter");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
  }
  else {
    uVar14 = (uint)__xmm_80000000000000008000000000000000;
    uVar15 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    uVar1 = *(undefined8 *)&(param_1->Location).field0_0x0;
    uVar2 = *(undefined8 *)((longlong)&(param_1->Location).field0_0x0 + 8);
    local_1e8 = (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar15,(uint)uVar1 ^ uVar14);
    local_1e0 = *(double *)((longlong)&(param_1->Location).field0_0x0 + 0x10);
    local_1d8 = CONCAT44((uint)((ulonglong)uVar2 >> 0x20) ^ uVar15,(uint)uVar2 ^ uVar14);
    uVar1 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
    local_1d0 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20) ^
                                 uVar15,(uint)*(undefined8 *)&param_2->field0_0x0 ^ uVar14);
    local_1c8 = (param_2->field0_0x0)._s_0.Z;
    local_1c0 = CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar15,(uint)uVar1 ^ uVar14);
    local_228[0] = 0;
    uVar10 = dtNavMeshQuery::moveAlongSurface
                       (this_00,param_1->NodeRef,&local_1e8,&local_1d0,pdVar13,&local_f8,local_d8,
                        local_228,0x10);
    if (-1 < (int)uVar10) {
      local_220 = local_1e0;
      uVar6 = local_d8[local_228[0] + -1];
      dtNavMeshQuery::getPolyHeight(this_00,uVar6,&local_f8,(double *)&local_220);
      bVar8 = true;
      uStack_1a0._0_4_ = (undefined4)uVar6;
      uStack_1a0._4_4_ = (undefined4)(uVar6 >> 0x20);
      *(uint *)&(local_210->Location).field0_0x0 = SUB84(local_f8,0) ^ uVar14;
      *(uint *)((longlong)&(local_210->Location).field0_0x0 + 4) =
           (uint)((ulonglong)local_f8 >> 0x20) ^ uVar15;
      *(uint *)((longlong)&(local_210->Location).field0_0x0 + 8) = (uint)local_e8 ^ uVar14;
      *(uint *)((longlong)&(local_210->Location).field0_0x0 + 0xc) =
           (uint)((ulonglong)local_e8 >> 0x20) ^ uVar15;
      local_f0 = (undefined4)local_220;
      uStack_ec = local_220._4_4_;
      *(undefined4 *)((longlong)&(local_210->Location).field0_0x0 + 0x10) = (undefined4)local_220;
      *(undefined4 *)((longlong)&(local_210->Location).field0_0x0 + 0x14) = local_220._4_4_;
      *(undefined4 *)&local_210->NodeRef = (undefined4)uStack_1a0;
      *(undefined4 *)((longlong)&local_210->NodeRef + 4) = uStack_1a0._4_4_;
      uStack_1a0 = uVar6;
      goto LAB_146df4457;
    }
  }
  bVar8 = false;
LAB_146df4457:
  dtNavMeshQuery::~dtNavMeshQuery(&local_198);
  return bVar8;
}

// FindNearestPoly @ 146df4570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ulong64 __thiscall
FPImplRecastNavMesh::FindNearestPoly
          (FPImplRecastNavMesh *this,TVector<double> *param_1,TVector<double> *param_2,
          FNavigationQueryFilter *param_3,UObject *param_4)

{
  dtQueryFilter *pdVar1;
  undefined8 uVar2;
  double dVar3;
  int iVar4;
  TObjectPtr<UNavigationSystemBase>_u_0 TVar5;
  INavigationQueryFilterInterface *pIVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  UWorld *pUVar10;
  UClass *pUVar11;
  ulong64 uVar12;
  TObjectPtr<UNavigationSystemBase>_u_0 TVar13;
  dtNavMeshQuery *this_00;
  double dVar14;
  undefined1 auStackY_178 [32];
  UObject *local_138;
  TObjectPtr<UNavigationSystemBase>_u_0 local_130;
  dtQuerySpecialLinkFilter local_128;
  TObjectPtr<UNavigationSystemBase>_u_0 local_120;
  FWeakObjectPtr local_118;
  undefined8 local_110;
  dtNavMeshQuery local_108;
  double local_68;
  undefined8 local_60;
  undefined8 local_58;
  double local_50;
  double local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (this->DetourNavMesh == (dtNavMesh *)0x0) {
    return 0;
  }
  pUVar10 = AActor::GetWorld((AActor *)this->NavMeshOwner);
  TVar13.DebugPtr = (UNavigationSystemBase *)0x0;
  if ((pUVar10 != (UWorld *)0x0) &&
     (TVar5 = (TObjectPtr<UNavigationSystemBase>_u_0)(pUVar10->NavigationSystem).field0_0x0.DebugPtr
     , TVar5.DebugPtr != (UNavigationSystemBase *)0x0)) {
    pUVar11 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar4 = (int)pUVar11->_padding_;
    if ((iVar4 <= *(int *)(*(longlong *)&(TVar5.DebugPtr)->field_0x10 + 0x38)) &&
       (local_120 = TVar5,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&(TVar5.DebugPtr)->field_0x10 + 0x30) + (longlong)iVar4 * 8) ==
       &pUVar11->_padding_)) goto LAB_146df4605;
  }
  local_120.DebugPtr = TVar13.DebugPtr;
LAB_146df4605:
  local_128 = (dtQuerySpecialLinkFilter)&___7FRecastSpeciaLinkFilter__6B_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_4);
  }
  local_118.ObjectIndex = 0;
  local_118.ObjectSerialNumber = 0;
  local_138 = param_4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_4);
  }
  FWeakObjectPtr::operator=(&local_118,(FObjectPtr)&local_138);
  local_110 = 0;
  dtNavMeshQuery::dtNavMeshQuery(&local_108);
  bVar8 = IsInGameThread();
  this_00 = &this->SharedNavQuery;
  if (!bVar8) {
    this_00 = &local_108;
  }
  dtNavMeshQuery::init(this_00,this->DetourNavMesh,param_3->MaxSearchNodes,&local_128);
  pIVar6 = (param_3->QueryFilterImpl).Object;
  if ((pIVar6 == (INavigationQueryFilterInterface *)0x0) ||
     (pdVar1 = (dtQueryFilter *)(pIVar6 + 1), pdVar1 == (dtQueryFilter *)0x0)) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<714170589362784195>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\PImplRecastNavMesh.cpp"
                       ,0x7c3,"QueryFilter");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      uVar12 = (*pcVar7)();
      return uVar12;
    }
  }
  else {
    local_50 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20) ^
                                __xmm_80000000000000008000000000000000._4_4_,
                                (uint)*(undefined8 *)&param_1->field0_0x0 ^
                                (uint)__xmm_80000000000000008000000000000000);
    uVar2 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
    dVar3 = (param_2->field0_0x0)._s_0.Z;
    local_40 = CONCAT44((uint)((ulonglong)uVar2 >> 0x20) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        (uint)uVar2 ^ (uint)__xmm_80000000000000008000000000000000);
    local_48 = (param_1->field0_0x0)._s_0.Z;
    dVar14 = __real_4290000000000000;
    if (dVar3 < __real_4290000000000000) {
      dVar14 = (double)this->NavMeshOwner->VerticalDeviationFromGroundCompensation;
      if (dVar14 <= 0.0) {
        dVar14 = 0.0;
      }
      dVar14 = dVar14 + dVar3;
    }
    local_68 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                (uint)*(undefined8 *)&param_2->field0_0x0 &
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    uVar2 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
    local_60 = CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    local_58 = CONCAT44((uint)((ulonglong)uVar2 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    uVar9 = dtNavMeshQuery::findNearestPoly
                      (this_00,&local_50,&local_68,pdVar1,(ulong64 *)&local_130,(double *)0x0,
                       (double *)0x0);
    if ((uVar9 >> 0x1e & 1) != 0) {
      TVar13 = local_130;
    }
  }
  dtNavMeshQuery::~dtNavMeshQuery(&local_108);
  return (ulong64)TVar13.DebugPtr;
}

// FindPath @ 146df5650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

Type __thiscall
FPImplRecastNavMesh::FindPath
          (FPImplRecastNavMesh *this,TVector<double> *param_1,TVector<double> *param_2,
          double param_3,bool param_4,FNavMeshPath *param_5,FNavigationQueryFilter *param_6,
          UObject *param_7)

{
  dtQueryFilter *pdVar1;
  undefined1 *puVar2;
  int iVar3;
  ARecastNavMesh *this_00;
  INavigationQueryFilterInterface *pIVar4;
  UNavigationSystemBase *pUVar5;
  bool bVar6;
  uint uVar7;
  Type TVar8;
  UWorld *pUVar9;
  UClass *pUVar10;
  dtNavMeshQuery *this_01;
  Type TVar11;
  wchar_t *pwVar12;
  undefined1 auStackY_1e8 [32];
  ulong64 local_198;
  ulong64 local_190;
  dtQueryResult local_188;
  UObject *local_178;
  TVector<double> *local_170;
  TVector<double> *local_168;
  dtQuerySpecialLinkFilter local_160;
  UNavigationSystemBase *local_158;
  FWeakObjectPtr local_150;
  undefined8 local_148;
  TVector<double> local_140;
  TVector<double> local_128;
  dtNavMeshQuery local_108;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  if ((this->DetourNavMesh != (dtNavMesh *)0x0) &&
     (this_00 = this->NavMeshOwner, this_00 != (ARecastNavMesh *)0x0)) {
    pIVar4 = (param_6->QueryFilterImpl).Object;
    local_170 = param_2;
    local_168 = param_1;
    if (pIVar4 == (INavigationQueryFilterInterface *)0x0) {
      if (FVisualLogger::bIsRecording == 0) {
        return Error;
      }
      pwVar12 = 
      L"FPImplRecastNavMesh::FindPath failed due to passed filter having NULL implementation!";
      TVar11 = Error;
    }
    else {
      pdVar1 = (dtQueryFilter *)(pIVar4 + 1);
      if (pdVar1 != (dtQueryFilter *)0x0) {
        pUVar9 = AActor::GetWorld((AActor *)this_00);
        if ((pUVar9 != (UWorld *)0x0) &&
           (pUVar5 = (pUVar9->NavigationSystem).field0_0x0.DebugPtr,
           pUVar5 != (UNavigationSystemBase *)0x0)) {
          pUVar10 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
          iVar3 = (int)pUVar10->_padding_;
          if ((iVar3 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
             (local_158 = pUVar5,
             (longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar3 * 8) ==
             &pUVar10->_padding_)) goto LAB_146df5777;
        }
        local_158 = (UNavigationSystemBase *)0x0;
LAB_146df5777:
        local_160 = (dtQuerySpecialLinkFilter)&___7FRecastSpeciaLinkFilter__6B_;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_7 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(param_7);
        }
        local_150.ObjectIndex = 0;
        local_150.ObjectSerialNumber = 0;
        local_178 = param_7;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_7 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(param_7);
        }
        FWeakObjectPtr::operator=(&local_150,(FObjectPtr)&local_178);
        local_148 = 0;
        dtNavMeshQuery::dtNavMeshQuery(&local_108);
        bVar6 = IsInGameThread();
        this_01 = &this->SharedNavQuery;
        if (!bVar6) {
          this_01 = &local_108;
        }
        dtNavMeshQuery::init(this_01,this->DetourNavMesh,param_6->MaxSearchNodes,&local_160);
        (this_01->m_query).requireNavigableEndLocation = '\0';
        puVar2 = &(this_01->m_query).field_0x68;
        *puVar2 = *puVar2 | param_4;
        bVar6 = InitPathfinding(this,local_168,local_170,this_01,pdVar1,&local_128,&local_190,
                                &local_140,&local_198,param_5);
        if (bVar6) {
          local_188.data.m_data = (dtQueryResultPack *)0x0;
          local_188.data.m_size = 0;
          local_188.data.m_cap = 0;
          uVar7 = dtNavMeshQuery::findPath
                            (this_01,local_190,local_198,(double *)&local_128,(double *)&local_140,
                             param_3,pdVar1,&local_188,(double *)0x0);
          TVar8 = PostProcessPathInternal
                            (this,uVar7,param_5,this_01,pdVar1,local_190,local_198,&local_128,
                             &local_140,&local_188);
          dtFree(local_188.data.m_data,DT_ALLOC_TEMP);
        }
        else {
          TVar8 = Error;
        }
        dtNavMeshQuery::~dtNavMeshQuery(&local_108);
        return TVar8;
      }
      if (FVisualLogger::bIsRecording == 0) {
        return Error;
      }
      pwVar12 = L"FPImplRecastNavMesh::FindPath failing due to QueryFilter == NULL";
      TVar11 = Warning;
    }
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this_00,(FName *)&LogNavigation.field_0x4,TVar11,pwVar12);
  }
  return Error;
}

// FindPolysAroundCircle @ 146df59f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FPImplRecastNavMesh::FindPolysAroundCircle
          (FPImplRecastNavMesh *this,TVector<double> *param_1,ulong64 param_2,double param_3,
          FNavigationQueryFilter *param_4,UObject *param_5,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_6,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_7,
          TArray<float,TSizedDefaultAllocator<32>_> *param_8,int *param_9)

{
  dtQueryFilter *pdVar1;
  undefined8 uVar2;
  UNavigationSystemBase *pUVar3;
  INavigationQueryFilterInterface *pIVar4;
  code *pcVar5;
  float fVar6;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  UWorld *pUVar12;
  UClass *pUVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  FScriptContainerElement *pFVar16;
  ulonglong uVar17;
  longlong lVar18;
  ForAnyElementType FVar19;
  dtNavMeshQuery *this_00;
  FScriptContainerElement *pFVar20;
  undefined1 auStackY_1e8 [32];
  undefined1 local_198 [4];
  uint local_194;
  TArray<float,TSizedDefaultAllocator<32>_> local_190;
  float local_180 [2];
  ForAnyElementType local_178;
  undefined8 local_170;
  undefined4 local_168 [2];
  UObject *local_160;
  TArray<float,TSizedDefaultAllocator<32>_> *local_158;
  TVector<double> *local_150;
  int *local_148;
  ulong64 local_140;
  dtQuerySpecialLinkFilter local_138;
  UNavigationSystemBase *local_130;
  FWeakObjectPtr local_128;
  undefined8 local_120;
  uint *local_118;
  undefined4 *local_110;
  dtNavMeshQuery local_108;
  double local_68;
  double local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_158 = param_8;
  local_148 = param_9;
  if (((this->DetourNavMesh == (dtNavMesh *)0x0) || (this->NavMeshOwner == (ARecastNavMesh *)0x0))
     || (param_2 == 0)) {
    return false;
  }
  local_194 = param_4->MaxSearchNodes;
  local_178.Data = (FScriptContainerElement *)0x0;
  local_170 = 0;
  local_168[0] = 0x1000;
  local_150 = param_1;
  local_140 = param_2;
  if (((int)local_194 < 1) || (0x1000 < (int)local_194)) {
    local_118 = &local_194;
    local_110 = local_168;
    `FPImplRecastNavMesh::FindPolysAroundCircle'::__l2::<lambda_1>::operator()(&local_118);
  }
  pUVar12 = AActor::GetWorld((AActor *)this->NavMeshOwner);
  if ((pUVar12 == (UWorld *)0x0) ||
     (pUVar3 = (pUVar12->NavigationSystem).field0_0x0.DebugPtr,
     pUVar3 == (UNavigationSystemBase *)0x0)) {
LAB_146df5b03:
    local_130 = (UNavigationSystemBase *)0x0;
  }
  else {
    pUVar13 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar15 = (int)pUVar13->_padding_;
    if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar15) ||
       (local_130 = pUVar3,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar15 * 8) !=
       &pUVar13->_padding_)) goto LAB_146df5b03;
  }
  local_138 = (dtQuerySpecialLinkFilter)&___7FRecastSpeciaLinkFilter__6B_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_5);
  }
  local_128.ObjectIndex = 0;
  local_128.ObjectSerialNumber = 0;
  local_160 = param_5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_5);
  }
  FWeakObjectPtr::operator=(&local_128,(FObjectPtr)&local_160);
  local_120 = 0;
  dtNavMeshQuery::dtNavMeshQuery(&local_108);
  bVar8 = IsInGameThread();
  this_00 = &this->SharedNavQuery;
  if (!bVar8) {
    this_00 = &local_108;
  }
  dtNavMeshQuery::init(this_00,this->DetourNavMesh,param_4->MaxSearchNodes,&local_138);
  pIVar4 = (param_4->QueryFilterImpl).Object;
  if ((pIVar4 == (INavigationQueryFilterInterface *)0x0) ||
     (pdVar1 = (dtQueryFilter *)(pIVar4 + 1), pdVar1 == (dtQueryFilter *)0x0)) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<714170589362784234>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\PImplRecastNavMesh.cpp"
                       ,0x7ea,"QueryFilter");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
  }
  else {
    if (param_6 != (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)0x0) {
      param_6->ArrayNum = 0;
      if (param_6->ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&param_6->AllocatorInstance,0,&param_6->ArrayMax);
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_194,&param_6->AllocatorInstance,&param_6->ArrayNum,&param_6->ArrayMax);
    }
    if (param_7 != (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)0x0) {
      param_7->ArrayNum = 0;
      if (param_7->ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&param_7->AllocatorInstance,0,&param_7->ArrayMax);
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_194,&param_7->AllocatorInstance,&param_7->ArrayNum,&param_7->ArrayMax);
    }
    pTVar7 = local_158;
    uVar17 = local_170;
    if (local_158 != (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
      uVar10 = local_170._4_4_;
      local_170 = (ulonglong)local_170._4_4_ << 0x20;
      if (((longlong)uVar17 < 0) && (uVar10 != 0)) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&local_178,0,(int *)((longlong)&local_170 + 4));
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_194,&local_178,(int *)&local_170,(int *)((longlong)&local_170 + 4));
    }
    FVar19.Data = (FScriptContainerElement *)0x0;
    if (pTVar7 != (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
      FVar19.Data = local_178.Data;
    }
    local_68 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&local_150->field0_0x0 >> 0x20) ^
                                __xmm_80000000000000008000000000000000._4_4_,
                                (uint)*(undefined8 *)&local_150->field0_0x0 ^
                                (uint)__xmm_80000000000000008000000000000000);
    uVar2 = *(undefined8 *)((longlong)&local_150->field0_0x0 + 8);
    local_58 = CONCAT44((uint)((ulonglong)uVar2 >> 0x20) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        (uint)uVar2 ^ (uint)__xmm_80000000000000008000000000000000);
    local_60 = (local_150->field0_0x0)._s_0.Z;
    if (param_7 == (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)0x0) {
      pFVar16 = (FScriptContainerElement *)0x0;
    }
    else {
      pFVar16 = (param_7->AllocatorInstance).Data;
    }
    if (param_6 == (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)0x0) {
      pFVar14 = (FScriptContainerElement *)0x0;
    }
    else {
      pFVar14 = (param_6->AllocatorInstance).Data;
    }
    pFVar20 = (FScriptContainerElement *)0x0;
    uVar10 = dtNavMeshQuery::findPolysAroundCircle
                       (this_00,local_140,&local_68,param_3,pdVar1,(ulong64 *)pFVar14,
                        (ulong64 *)pFVar16,(double *)FVar19.Data,local_148,local_194);
    if (pTVar7 != (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
      uVar17 = local_170 & 0xffffffff;
      local_190.ArrayNum = 0;
      local_190.ArrayMax = 0;
      local_190.AllocatorInstance.Data = pFVar20;
      if ((int)local_170 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar17);
      }
      if (0 < (int)local_170) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(int)local_170,&local_190.AllocatorInstance,0,&local_190.ArrayMax);
        uVar17 = local_170 & 0xffffffff;
      }
      fVar6 = __real_7f7fffff;
      iVar15 = (int)uVar17;
      pFVar16 = local_178.Data + (longlong)iVar15 * 8;
      FVar19.Data = local_178.Data;
      while( true ) {
        if ((int)uVar17 != iVar15) {
          local_198[0] = 0;
          `TCheckedPointerIterator<double_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_198);
        }
        if (FVar19.Data == pFVar16) break;
        local_180[0] = (float)*(double *)FVar19.Data;
        if (fVar6 <= (float)*(double *)FVar19.Data) {
          local_180[0] = fVar6;
        }
        if (((local_190.AllocatorInstance.Data <= (FScriptContainerElement *)local_180) &&
            ((FScriptContainerElement *)local_180 <
             local_190.AllocatorInstance.Data + (longlong)local_190.ArrayMax * 4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
        if (local_190.ArrayNum == local_190.ArrayMax) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_190.AllocatorInstance,&local_190.ArrayMax);
          local_190.ArrayNum = iVar11;
        }
        lVar18 = (longlong)local_190.ArrayNum;
        FVar19.Data = FVar19.Data + 8;
        local_190.ArrayNum = local_190.ArrayNum + 1;
        *(float *)(local_190.AllocatorInstance.Data + lVar18 * 4) = local_180[0];
        uVar17 = local_170 & 0xffffffff;
      }
      if (pTVar7 != &local_190) {
        pFVar16 = (pTVar7->AllocatorInstance).Data;
        if (pFVar16 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar16);
        }
        (pTVar7->AllocatorInstance).Data = local_190.AllocatorInstance.Data;
        pTVar7->ArrayNum = local_190.ArrayNum;
        pTVar7->ArrayMax = local_190.ArrayMax;
        local_190.ArrayNum = 0;
        local_190.ArrayMax = 0;
        local_190.AllocatorInstance.Data = pFVar20;
      }
      if (local_190.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_190.AllocatorInstance.Data);
      }
    }
    if ((uVar10 >> 0x1e & 1) != 0) {
      bVar8 = true;
      goto LAB_146df5f33;
    }
  }
  bVar8 = false;
LAB_146df5f33:
  dtNavMeshQuery::~dtNavMeshQuery(&local_108);
  local_138 = (dtQuerySpecialLinkFilter)&___7dtQuerySpecialLinkFilter__6B_;
  if (local_178.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data);
  }
  return bVar8;
}

// FindStraightPath @ 146df6000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
FPImplRecastNavMesh::FindStraightPath
          (FPImplRecastNavMesh *this,TVector<double> *param_1,TVector<double> *param_2,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FNavPathPoint,TSizedDefaultAllocator<32>_> *param_4,
          TArray<FNavLinkId,TSizedDefaultAllocator<32>_> *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  UObject *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  byte bVar6;
  FPImplRecastNavMesh *pFVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined2 uVar10;
  uint uVar11;
  int iVar12;
  UClass *pUVar13;
  dtOffMeshConnection *pdVar14;
  uint uVar15;
  dtNavMeshQuery *this_00;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar19;
  uint uVar20;
  undefined1 auStackY_1c8 [32];
  byte local_178 [4];
  int local_174;
  dtQueryResult local_170;
  ulong64 local_160;
  FPImplRecastNavMesh *local_158;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *local_150;
  TArray<FNavPathPoint,TSizedDefaultAllocator<32>_> *local_148;
  double local_140;
  double local_138;
  undefined8 local_130;
  double local_128;
  double local_120;
  undefined8 local_118;
  undefined8 local_100;
  dtNavMeshQuery local_f8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_148 = param_4;
  local_158 = this;
  local_150 = param_3;
  dtNavMeshQuery::dtNavMeshQuery(&local_f8);
  bVar8 = IsInGameThread();
  this_00 = &this->SharedNavQuery;
  if (!bVar8) {
    this_00 = &local_f8;
  }
  dtNavMeshQuery::init(this_00,this->DetourNavMesh,0x800,(dtQuerySpecialLinkFilter *)0x0);
  pTVar19 = local_150;
  uVar15 = (uint)__xmm_80000000000000008000000000000000;
  uVar20 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  local_128 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20) ^
                               uVar20,(uint)*(undefined8 *)&param_1->field0_0x0 ^ uVar15);
  local_118 = CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar20,(uint)uVar1 ^ uVar15);
  local_120 = (param_1->field0_0x0)._s_0.Z;
  lVar18 = 0;
  uVar1 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  local_140 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20) ^
                               uVar20,(uint)*(undefined8 *)&param_2->field0_0x0 ^ uVar15);
  local_130 = CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar20,(uint)uVar1 ^ uVar15);
  local_138 = (param_2->field0_0x0)._s_0.Z;
  bVar8 = false;
  local_170.data.m_data = (dtQueryResultPack *)0x0;
  local_170.data.m_size = 0;
  local_170.data.m_cap = 0;
  uVar11 = dtNavMeshQuery::findStraightPath
                     (this_00,&local_128,&local_140,(ulong64 *)(local_150->AllocatorInstance).Data,
                      local_150->ArrayNum,&local_170,1);
  param_4->ArrayNum = 0;
  if (param_4->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
  }
  if ((uVar11 >> 0x1e & 1) != 0) {
    lVar16 = (longlong)local_170.data.m_size;
    iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x30,8,local_170.data.m_size,&param_4->AllocatorInstance,&param_4->ArrayNum,
                        &param_4->ArrayMax);
    memset((param_4->AllocatorInstance).Data + (longlong)iVar12 * 0x30,0,lVar16 * 0x30);
    pFVar17 = (param_4->AllocatorInstance).Data;
    local_174 = 0;
    if (0 < local_170.data.m_size) {
      do {
        uVar1 = *(undefined8 *)((longlong)(local_170.data.m_data)->pos + lVar18);
        uVar2 = *(undefined8 *)((longlong)(local_170.data.m_data)->pos + lVar18 + 0x10);
        local_100 = *(undefined8 *)((longlong)(local_170.data.m_data)->pos + lVar18 + 8);
        *(uint *)pFVar17 = (uint)uVar1 ^ uVar15;
        *(uint *)(pFVar17 + 4) = (uint)((ulonglong)uVar1 >> 0x20) ^ uVar20;
        *(uint *)(pFVar17 + 8) = (uint)uVar2 ^ uVar15;
        *(uint *)(pFVar17 + 0xc) = (uint)((ulonglong)uVar2 >> 0x20) ^ uVar20;
        *(undefined8 *)(pFVar17 + 0x10) = local_100;
        *(undefined8 *)(pFVar17 + 0x18) =
             *(undefined8 *)((longlong)(local_170.data.m_data)->pos + lVar18 + -0x10);
        uVar11 = *(uint *)((longlong)(local_170.data.m_data)->pos + lVar18 + 0x18);
        if ((uVar11 != (uVar11 & 0xff)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IntFitsIn<OutType>(In)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                               ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"),
           bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
        pFVar7 = local_158;
        local_178[0] = 0x3f;
        dtNavMesh::getPolyArea(local_158->DetourNavMesh,*(ulong64 *)(pFVar17 + 0x18),local_178);
        bVar6 = local_178[0];
        pUVar13 = ANavigationData::GetAreaClass
                            ((ANavigationData *)pFVar7->NavMeshOwner,(uint)local_178[0]);
        if (pUVar13 == (UClass *)0x0) {
          uVar10 = 0;
        }
        else {
          if ((pUVar13->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
            UClass::InternalCreateDefaultObjectWrapper(pUVar13);
          }
          pUVar3 = (pUVar13->ClassDefaultObject).field0_0x0.DebugPtr;
          pUVar13 = Z_Construct_UClass_UNavArea_NoRegister();
          lVar16 = *(longlong *)&pUVar3->field_0x10;
          iVar12 = (int)pUVar13->_padding_;
          if (((*(int *)(lVar16 + 0x38) < iVar12) ||
              ((longlong *)*(undefined1 **)(*(longlong *)(lVar16 + 0x30) + (longlong)iVar12 * 8) !=
               &pUVar13->_padding_)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Ret->IsA(T::StaticClass())",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                 ,0x1181,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            uVar9 = (*pcVar5)();
            return (bool)uVar9;
          }
          uVar10 = *(undefined2 *)&pUVar3[1].field_0x1c;
        }
        *(uint *)(pFVar17 + 0x20) = (uint)CONCAT21(uVar10,bVar6) << 8 | uVar11 & 0xff;
        if (((param_5 != (TArray<FNavLinkId,TSizedDefaultAllocator<32>_> *)0x0) &&
            ((uVar11 & 4) != 0)) &&
           (pdVar14 = dtNavMesh::getOffMeshConnectionByRef
                                (local_158->DetourNavMesh,*(ulong64 *)(pFVar17 + 0x18)),
           pdVar14 != (dtOffMeshConnection *)0x0)) {
          *(ulong64 *)(pFVar17 + 0x28) = pdVar14->userId;
          local_160 = pdVar14->userId;
          pFVar4 = (param_5->AllocatorInstance).Data;
          if (((pFVar4 <= (FScriptContainerElement *)&local_160) &&
              ((FScriptContainerElement *)&local_160 < pFVar4 + (longlong)param_5->ArrayMax * 8)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar5 = (code *)swi(3);
            uVar9 = (*pcVar5)();
            return (bool)uVar9;
          }
          iVar12 = param_5->ArrayNum;
          if (iVar12 == param_5->ArrayMax) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&param_5->AllocatorInstance,&param_5->ArrayMax);
          }
          param_5->ArrayNum = iVar12 + 1;
          *(ulong64 *)((param_5->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_160;
        }
        pFVar17 = pFVar17 + 0x30;
        local_174 = local_174 + 1;
        lVar18 = lVar18 + 0x30;
        param_4 = local_148;
        pTVar19 = local_150;
      } while (local_174 < local_170.data.m_size);
    }
    uVar15 = pTVar19->ArrayNum - 1;
    uVar11 = 0;
    if ((int)uVar15 < pTVar19->ArrayNum) {
      uVar11 = ~uVar15 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    uVar15 = param_4->ArrayNum - 1;
    uVar1 = *(undefined8 *)
             ((pTVar19->AllocatorInstance).Data + (longlong)pTVar19->ArrayNum * 8 + -8);
    uVar11 = 0;
    if ((int)uVar15 < param_4->ArrayNum) {
      uVar11 = ~uVar15 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    bVar8 = true;
    *(undefined8 *)((param_4->AllocatorInstance).Data + (longlong)param_4->ArrayNum * 0x30 + -0x18)
         = uVar1;
  }
  dtFree(local_170.data.m_data,DT_ALLOC_TEMP);
  dtNavMeshQuery::~dtNavMeshQuery(&local_f8);
  return bVar8;
}

// GetClosestPointOnPoly @ 146e009d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FPImplRecastNavMesh::GetClosestPointOnPoly
          (FPImplRecastNavMesh *this,ulong64 param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  undefined8 uVar1;
  bool bVar2;
  uint uVar3;
  dtNavMeshQuery *this_00;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_138 [32];
  dtNavMeshQuery local_118;
  double local_78;
  double local_70;
  undefined8 uStack_68;
  double local_60;
  double local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  if ((this->DetourNavMesh != (dtNavMesh *)0x0) && (param_1 != 0)) {
    dtNavMeshQuery::dtNavMeshQuery(&local_118);
    bVar2 = IsInGameThread();
    this_00 = &this->SharedNavQuery;
    if (!bVar2) {
      this_00 = &local_118;
    }
    dtNavMeshQuery::init(this_00,this->DetourNavMesh,0x800,(dtQuerySpecialLinkFilter *)0x0);
    uVar4 = (uint)__xmm_80000000000000008000000000000000;
    uVar5 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    local_78 = 0.0;
    local_60 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20) ^
                                uVar5,(uint)*(undefined8 *)&param_2->field0_0x0 ^ uVar4);
    uVar1 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
    local_70 = 0.0;
    uStack_68 = 0;
    local_58 = (param_2->field0_0x0)._s_0.Z;
    uStack_50 = CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar5,(uint)uVar1 ^ uVar4);
    uVar3 = dtNavMeshQuery::closestPointOnPoly(this_00,param_1,&local_60,&local_78);
    if ((uVar3 >> 0x1e & 1) != 0) {
      (param_3->field0_0x0)._s_0.X =
           (double)CONCAT44((uint)((ulonglong)local_78 >> 0x20) ^ uVar5,SUB84(local_78,0) ^ uVar4);
      (param_3->field0_0x0)._s_0.Y =
           (double)CONCAT44((uint)((ulonglong)uStack_68 >> 0x20) ^ uVar5,(uint)uStack_68 ^ uVar4);
      (param_3->field0_0x0)._s_0.Z = local_70;
      dtNavMeshQuery::~dtNavMeshQuery(&local_118);
      return true;
    }
    dtNavMeshQuery::~dtNavMeshQuery(&local_118);
  }
  return false;
}

// GetClusterBounds @ 146e00b70

bool __thiscall
FPImplRecastNavMesh::GetClusterBounds
          (FPImplRecastNavMesh *this,ulong64 param_1,TBox<double> *param_2)

{
  double dVar1;
  dtPoly *pdVar2;
  double *pdVar3;
  undefined8 uVar4;
  dtMeshTile *pdVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  ushort *puVar10;
  dtMeshHeader *pdVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined4 uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar26;
  double dVar25;
  
  if ((this->DetourNavMesh != (dtNavMesh *)0x0) && (param_1 != 0)) {
    pdVar5 = dtNavMesh::getTileByRef(this->DetourNavMesh,param_1);
    uVar4 = __xmm_80000000000000008000000000000000;
    iVar14 = 0;
    uVar13 = (int)(1L << ((byte)this->DetourNavMesh->m_polyBits & 0x3f)) - 1U & (uint)param_1;
    if (((pdVar5 != (dtMeshTile *)0x0) && (pdVar11 = pdVar5->header, uVar13 < pdVar11->clusterCount)
        ) && (iVar8 = 0, pdVar11->offMeshBase != 0)) {
      lVar12 = 0;
      lVar9 = 0;
      do {
        if (*(ushort *)(lVar9 + (longlong)pdVar5->polyClusters) == uVar13) {
          pdVar2 = pdVar5->polys;
          iVar7 = 0;
          if (*(char *)((longlong)pdVar2->neis + lVar12 + 0xe) != '\0') {
            puVar10 = (ushort *)((longlong)pdVar2->verts + lVar12);
            do {
              uVar6 = (ulonglong)*puVar10;
              pdVar3 = pdVar5->verts;
              uVar24 = (uint)uVar4;
              uVar22 = SUB84(pdVar3[uVar6 * 3],0) ^ uVar24;
              uVar26 = (uint)((ulonglong)uVar4 >> 0x20);
              uVar23 = (uint)((ulonglong)pdVar3[uVar6 * 3] >> 0x20) ^ uVar26;
              dVar21 = (double)CONCAT44(uVar23,uVar22);
              uVar24 = SUB84(pdVar3[uVar6 * 3 + 2],0) ^ uVar24;
              uVar26 = (uint)((ulonglong)pdVar3[uVar6 * 3 + 2] >> 0x20) ^ uVar26;
              dVar25 = (double)CONCAT44(uVar26,uVar24);
              dVar1 = pdVar3[uVar6 * 3 + 1];
              if (param_2->IsValid == '\0') {
                (param_2->Max).field0_0x0._s_0.X = dVar21;
                (param_2->Max).field0_0x0._s_0.Y = dVar25;
                (param_2->Max).field0_0x0._s_0.Z = dVar1;
                dVar21 = (param_2->Max).field0_0x0._s_0.X;
                dVar25 = (param_2->Max).field0_0x0._s_0.Y;
                param_2->IsValid = '\x01';
                dVar1 = (param_2->Max).field0_0x0._s_0.Z;
                (param_2->Min).field0_0x0._s_0.X = dVar21;
                (param_2->Min).field0_0x0._s_0.Y = dVar25;
                (param_2->Min).field0_0x0._s_0.Z = dVar1;
              }
              else {
                dVar20 = *(double *)&(param_2->Min).field0_0x0;
                dVar19 = (param_2->Min).field0_0x0._s_0.Y;
                uVar15 = SUB84(dVar20,0);
                uVar17 = (uint)((ulonglong)dVar20 >> 0x20);
                if (dVar21 <= dVar20) {
                  uVar15 = uVar22;
                  uVar17 = uVar23;
                }
                if (dVar25 <= dVar19) {
                  dVar19 = dVar25;
                }
                (param_2->Min).field0_0x0._s_0.X = (double)CONCAT44(uVar17,uVar15);
                dVar20 = *(double *)((longlong)&(param_2->Min).field0_0x0 + 0x10);
                uVar16 = SUB84(dVar20,0);
                uVar18 = (undefined4)((ulonglong)dVar20 >> 0x20);
                (param_2->Min).field0_0x0._s_0.Y = dVar19;
                if (dVar1 <= dVar20) {
                  uVar16 = SUB84(dVar1,0);
                  uVar18 = (undefined4)((ulonglong)dVar1 >> 0x20);
                }
                dVar20 = (param_2->Max).field0_0x0._s_0.X;
                if (dVar20 <= dVar21) {
                  dVar20 = dVar21;
                }
                (param_2->Min).field0_0x0._s_0.Z = (double)CONCAT44(uVar18,uVar16);
                dVar21 = *(double *)((longlong)&(param_2->Max).field0_0x0 + 8);
                (param_2->Max).field0_0x0._s_0.X = dVar20;
                uVar22 = SUB84(dVar21,0);
                uVar23 = (uint)((ulonglong)dVar21 >> 0x20);
                if (dVar21 <= dVar25) {
                  uVar22 = uVar24;
                  uVar23 = uVar26;
                }
                dVar21 = (param_2->Max).field0_0x0._s_0.Z;
                if (dVar21 <= dVar1) {
                  dVar21 = dVar1;
                }
                (param_2->Max).field0_0x0._s_0.Y = (double)CONCAT44(uVar23,uVar22);
                (param_2->Max).field0_0x0._s_0.Z = dVar21;
              }
              iVar7 = iVar7 + 1;
              puVar10 = puVar10 + 1;
            } while (iVar7 < (int)(uint)*(byte *)((longlong)pdVar2->neis + lVar12 + 0xe));
            pdVar11 = pdVar5->header;
          }
          iVar14 = iVar14 + 1;
        }
        iVar8 = iVar8 + 1;
        lVar9 = lVar9 + 2;
        lVar12 = lVar12 + 0x20;
      } while (iVar8 < (int)(uint)pdVar11->offMeshBase);
    }
    return 0 < iVar14;
  }
  return false;
}

// GetClusterRefFromPolyRef @ 146e00e60

ulong64 __thiscall
FPImplRecastNavMesh::GetClusterRefFromPolyRef(FPImplRecastNavMesh *this,ulong64 param_1)

{
  dtMeshTile *pdVar1;
  ulong64 uVar2;
  uint uVar3;
  
  if (this->DetourNavMesh != (dtNavMesh *)0x0) {
    pdVar1 = dtNavMesh::getTileByRef(this->DetourNavMesh,param_1);
    uVar3 = (int)(1L << ((byte)this->DetourNavMesh->m_polyBits & 0x3f)) - 1U & (uint)param_1;
    if (((pdVar1 != (dtMeshTile *)0x0) && (pdVar1->polyClusters != (ushort *)0x0)) &&
       (uVar3 < pdVar1->header->offMeshBase)) {
      uVar2 = dtNavMesh::getClusterRefBase(this->DetourNavMesh,pdVar1);
      return pdVar1->polyClusters[uVar3] | uVar2;
    }
  }
  return 0;
}

// GetCompressedTileCacheSize @ 146e010a0

int __thiscall FPImplRecastNavMesh::GetCompressedTileCacheSize(FPImplRecastNavMesh *this)

{
  undefined1 *puVar1;
  TMap<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined1 *puVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  longlong lVar18;
  TMap<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar19;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  TMap<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>,0>_>
  *local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  iVar8 = *(int *)&(this->CompressedTileCacheLayers).field_0x28;
  puVar1 = &(this->CompressedTileCacheLayers).field_0x10;
  iVar13 = 0;
  pTVar2 = &this->CompressedTileCacheLayers;
  iVar14 = 0;
  uVar6 = 1;
  iVar15 = 0;
  iVar7 = 0;
  if (iVar8 != 0) {
    puVar16 = *(uint **)&(this->CompressedTileCacheLayers).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar11 = *puVar16;
    iVar15 = 0;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar14;
      iVar15 = iVar15 + 0x20;
      iVar14 = iVar14 + 1;
      iVar7 = iVar8;
      if ((int)((iVar8 + -1 >> 0x1f & 0x1fU) + iVar8 + -1) >> 5 < iVar14) goto LAB_146e0114d;
      uVar11 = puVar16[lVar9 + 1];
    }
    uVar6 = -uVar11 & uVar11;
    uVar3 = (ulonglong)uVar6 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    iVar7 = iVar15 + -1 + local_res18;
    if (iVar8 < iVar7) {
      iVar7 = iVar8;
    }
  }
LAB_146e0114d:
  uVar11 = *(uint *)&(this->CompressedTileCacheLayers).field_0x28;
  uVar17 = uVar11 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar6,iVar14);
  TStack_70.CurrentBitIndex = iVar7;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar11 >> 5;
  TStack_70._28_4_ = iVar7;
  TStack_70.BaseBitIndex = iVar15;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(this->CompressedTileCacheLayers).field_0x8 -
                       *(int *)&(this->CompressedTileCacheLayers).field_0x34);
  local_res20 = pTVar2;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar8 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar8 = (*pcVar4)();
    return iVar8;
  }
  uVar6 = *(uint *)&(this->CompressedTileCacheLayers).field_0x28;
  pTVar19 = pTVar2;
  iVar8 = 0;
  if (uVar11 != uVar6) {
    puVar10 = *(undefined1 **)&(this->CompressedTileCacheLayers).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar10 + (longlong)iVar14 * 4);
    while (iVar8 = iVar13, uVar11 == 0) {
      lVar9 = (longlong)iVar14;
      uVar17 = uVar17 + 0x20;
      iVar14 = iVar14 + 1;
      uVar11 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar14) goto LAB_146e01250;
      uVar11 = *(uint *)(puVar10 + lVar9 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar17;
    if ((int)uVar6 < (int)uVar11) {
      uVar11 = uVar6;
    }
  }
LAB_146e01250:
  while( true ) {
    if (*(int *)&(this->CompressedTileCacheLayers).field_0x8 -
        *(int *)&(this->CompressedTileCacheLayers).field_0x34 != (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar11) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar2 == pTVar19))
    break;
    lVar12 = (longlong)TStack_70.CurrentBitIndex * 0x20 + *(longlong *)pTVar2;
    iVar14 = *(int *)(lVar12 + 0x10);
    lVar9 = *(longlong *)(lVar12 + 8);
    lVar18 = (longlong)iVar14 * 0x58 + lVar9;
    while( true ) {
      if (*(int *)(lVar12 + 0x10) != iVar14) {
        `TCheckedPointerIterator<FNavMeshTileData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (lVar9 == lVar18) break;
      iVar8 = iVar8 + *(int *)(lVar9 + 0x40);
      lVar9 = lVar9 + 0x58;
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    pTVar19 = local_res20;
  }
  return iVar8;
}

// GetDebugGeometryForTile @ 146e015d0

bool __thiscall
FPImplRecastNavMesh::GetDebugGeometryForTile
          (FPImplRecastNavMesh *this,FRecastDebugGeometry *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FNavTileRef FVar4;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_28;
  TArray<FNavTileRef,TSizedDefaultAllocator<32>_> local_18;
  
  FVar4.TileRef = 0;
  if (param_2 != -1) {
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    local_28.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,1,0,&local_28.AllocatorInstance,1,&local_28.ArrayMax);
    *(int *)local_28.AllocatorInstance.Data = param_2;
    FNavTileRef::DeprecatedMakeTileRefsFromTileIds(this,&local_28,&local_18);
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
    if (local_18.ArrayNum < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    FVar4.TileRef = *(ulong64 *)local_18.AllocatorInstance.Data;
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  bVar2 = GetDebugGeometryForTile(this,param_1,FVar4);
  return bVar2;
}

// GetDebugGeometryForTile @ 146e016e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */

bool __thiscall
FPImplRecastNavMesh::GetDebugGeometryForTile
          (FPImplRecastNavMesh *this,FRecastDebugGeometry *param_1,FNavTileRef param_2)

{
  uint uVar1;
  dtMeshHeader *pdVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
  *pTVar7;
  FRecastNavMeshGenerator *pFVar8;
  bool bVar9;
  bool bVar10;
  undefined1 uVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<_public:_bool___cdecl_FPImplRecastNavMesh::GetDebugGeometryForTile(FRecastDebugGeometry_&,FNavTileRef)const_::_2_::FStat_STAT_FPImplRecastNavMesh_GetDebugGeometryForTile>
  FVar20;
  INavigationQueryFilterInterface *pIVar21;
  TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
  *pTVar22;
  dtMeshTile *pdVar23;
  uchar *puVar24;
  ushort *puVar25;
  int iVar26;
  FScriptContainerElement *pFVar27;
  dtNavMesh *this_00;
  ulonglong uVar28;
  ulonglong uVar29;
  TBitArray<FDefaultBitArrayAllocator> *pTVar30;
  FName FVar31;
  longlong lVar32;
  ForElementType<unsigned_int> FVar33;
  undefined1 *puVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  uint *puVar39;
  uint uVar40;
  uint uVar41;
  ulonglong uVar42;
  int *piVar43;
  dtPolyDetail *pdVar44;
  uint uVar45;
  ForAnyElementType FVar46;
  undefined1 local_1b8;
  undefined1 local_1b7;
  undefined1 local_1b6 [2];
  uint local_1b4;
  uint local_1b0;
  ForAnyElementType local_1a8;
  undefined8 local_1a0;
  uint local_198;
  undefined1 local_194;
  undefined1 local_193 [3];
  dtNavMesh *local_190;
  TBitArray<FDefaultBitArrayAllocator> *local_188;
  ForElementType<unsigned_int> local_180;
  TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
  *local_178;
  FName local_170;
  FRecastNavMeshGenerator *local_168;
  FColor_u_0 local_160 [2];
  TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
  *local_158;
  uint uStack_150;
  uint uStack_14c;
  undefined1 *local_148;
  undefined4 uStack_140;
  uint uStack_13c;
  uint local_138;
  undefined4 uStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  FName local_128;
  TIntPoint<int>_u_0 local_120;
  FName local_118;
  int local_108;
  int local_104;
  int local_100;
  FScriptContainerElement *local_f8;
  TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
  *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
  *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  FName local_90;
  FName local_88 [4];
  undefined4 local_64;
  undefined4 local_44;
  
  uVar28 = 0;
  uVar13 = 0;
  uVar16 = 0;
  uVar41 = 0;
  uVar40 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FPImplRecastNavMesh_GetDebugGeometryForTile ==
        (FThreadSafeStaticStat<_public:_bool___cdecl_FPImplRecastNavMesh::GetDebugGeometryForTile(FRecastDebugGeometry_&,FNavTileRef)const_::_2_::FStat_STAT_FPImplRecastNavMesh_GetDebugGeometryForTile>
         )0x0) {
      pFVar19 = ::FName::FName(&local_90,"STAT_FPImplRecastNavMesh_GetDebugGeometryForTile");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_FPImplRecastNavMesh_GetDebugGeometryForTile,*pFVar19,
                 L"STAT_FPImplRecastNavMesh_GetDebugGeometryForTile","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar20 = StatPtr_STAT_FPImplRecastNavMesh_GetDebugGeometryForTile;
  if (StatPtr_STAT_FPImplRecastNavMesh_GetDebugGeometryForTile ==
      (FThreadSafeStaticStat<_public:_bool___cdecl_FPImplRecastNavMesh::GetDebugGeometryForTile(FRecastDebugGeometry_&,FNavTileRef)const_::_2_::FStat_STAT_FPImplRecastNavMesh_GetDebugGeometryForTile>
       )0x0) {
    pFVar19 = ::FName::FName(local_88,"STAT_FPImplRecastNavMesh_GetDebugGeometryForTile");
    FVar20 = (FThreadSafeStaticStat<_public:_bool___cdecl_FPImplRecastNavMesh::GetDebugGeometryForTile(FRecastDebugGeometry_&,FNavTileRef)const_::_2_::FStat_STAT_FPImplRecastNavMesh_GetDebugGeometryForTile>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FPImplRecastNavMesh_GetDebugGeometryForTile,*pFVar19,
                          L"STAT_FPImplRecastNavMesh_GetDebugGeometryForTile","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar31 = *(FName *)FVar20;
  bVar6 = false;
  bVar5 = false;
  local_118.ComparisonIndex.Value = 0;
  local_118.Number = 0;
  bVar12 = false;
  bVar9 = false;
  if ((FVar31.ComparisonIndex.Value.Value == 0) && (FVar31.Number == 0)) {
LAB_146e01879:
    bVar6 = bVar12;
    bVar5 = bVar9;
    bVar9 = false;
    local_170 = local_118;
    FVar31 = local_118;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_160[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_160[0]._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar6 = false;
      bVar5 = true;
      bVar12 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_128.ComparisonIndex.Value = FVar31.ComparisonIndex.Value.Value;
        local_128.Number = FVar31.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_128,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\PImplRecastNavMesh.cpp"
                   ,0xb78);
        bVar6 = true;
        bVar5 = true;
        bVar12 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146e01879;
    local_170 = FVar31;
    FThreadStats::AddMessage(FVar31,CycleScopeStart);
    bVar9 = true;
  }
  bVar12 = false;
  if (this->DetourNavMesh != (dtNavMesh *)0x0) {
    if ((this->NavMeshOwner == (ARecastNavMesh *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("NavMeshOwner",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\PImplRecastNavMesh.cpp"
                            ,0xb81,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      uVar11 = (*pcVar4)();
      return (bool)uVar11;
    }
    local_190 = this->DetourNavMesh;
    if (param_1->bMarkForbiddenPolys == 0) {
      local_198 = 0;
    }
    else {
      pIVar21 = ANavigationData::GetDefaultQueryFilterImpl((ANavigationData *)this->NavMeshOwner);
      puVar25 = (ushort *)&pIVar21[0x84].field_0x2;
      if (pIVar21 == (INavigationQueryFilterInterface *)0x0) {
        puVar25 = (ushort *)&DAT_0000041a;
      }
      local_198 = (uint)*puVar25;
    }
    local_168 = (FRecastNavMeshGenerator *)this->NavMeshOwner->_padding_;
    if (((local_168 == (FRecastNavMeshGenerator *)0x0) ||
        (local_168->bRestrictBuildingToActiveTiles == 0)) ||
       (pTVar22 = ARecastNavMesh::GetActiveTileSet(this->NavMeshOwner),
       *(int *)&(pTVar22->Elements).field_0x8 == *(int *)&(pTVar22->Elements).field_0x34)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    this_00 = local_190;
    if (param_2.TileRef != 0) {
      pdVar23 = dtNavMesh::getTileByRef(local_190,param_2.TileRef);
      if ((pdVar23 == (dtMeshTile *)0x0) ||
         (pdVar2 = pdVar23->header, pdVar2 == (dtMeshHeader *)0x0)) goto LAB_146e02332;
      local_120._s_0.Y = pdVar2->y;
      local_120._s_0.X = pdVar2->x;
      if ((bVar10) &&
         (bVar10 = FRecastNavMeshGenerator::IsInActiveSet
                             (local_168,(TIntPoint<int> *)&local_120._s_0), !bVar10))
      goto LAB_146e02332;
      pdVar2 = pdVar23->header;
      uVar13 = uVar41;
      if (pdVar2 != (dtMeshHeader *)0x0) {
        uVar29 = (ulonglong)pdVar2->polyCount;
        uVar41 = (uint)pdVar2->detailVertCount + (uint)pdVar2->vertCount;
        if (uVar29 < 2) {
          uVar13 = uVar40;
          uVar14 = uVar40;
          if (uVar29 != 0) {
            pdVar44 = pdVar23->detailMeshes;
            uVar14 = uVar16;
            goto LAB_146e01a00;
          }
        }
        else {
          pdVar44 = pdVar23->detailMeshes;
          lVar32 = (uVar29 - 2 >> 1) + 1;
          uVar36 = lVar32 * 2;
          puVar24 = &pdVar44[1].triCount;
          uVar35 = uVar28;
          do {
            uVar13 = (int)uVar28 + (uint)puVar24[-6] * 3;
            uVar28 = (ulonglong)uVar13;
            uVar14 = (int)uVar35 + (uint)*puVar24 * 3;
            uVar35 = (ulonglong)uVar14;
            lVar32 = lVar32 + -1;
            puVar24 = puVar24 + 0xc;
          } while (lVar32 != 0);
          uVar28 = uVar36;
          uVar16 = uVar13;
          if ((longlong)uVar36 < (longlong)uVar29) {
LAB_146e01a00:
            uVar40 = (uint)pdVar44[uVar28].triCount + (uint)pdVar44[uVar28].triCount * 2;
            uVar13 = uVar16;
          }
        }
        uVar13 = uVar40 + uVar13 + uVar14;
      }
      `FPImplRecastNavMesh::GetDebugGeometryForTile'::__l2::<lambda_2>::operator()
                (&local_1b8,param_1,uVar41,uVar13);
      lVar32 = (longlong)pdVar23 - (longlong)local_190->m_tiles;
      lVar32 = SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816(lVar32),8) + lVar32;
      GetTilesDebugGeometry
                (this,local_168,pdVar23,(param_1->MeshVerts).ArrayNum,param_1,
                 (int)(lVar32 >> 7) - (int)(lVar32 >> 0x3f),(ushort)local_198);
      goto LAB_146e02332;
    }
    if (bVar10) {
      local_1a8.Data = (FScriptContainerElement *)0x0;
      local_1a0 = 0;
      local_178 = ARecastNavMesh::GetActiveTileSet(this->NavMeshOwner);
      uVar14 = *(uint *)&(local_178->Elements).field_0x28;
      local_148 = &(local_178->Elements).field_0x10;
      local_188 = (TBitArray<FDefaultBitArrayAllocator> *)0x1;
      uStack_14c = 1;
      uStack_13c = uVar40;
      local_138 = uVar41;
      uStack_150 = uVar13;
      if (uVar14 != 0) {
        puVar39 = *(uint **)&(local_178->Elements).field_0x20;
        if (puVar39 == (uint *)0x0) {
          puVar39 = (uint *)local_148;
        }
        uStack_14c = *puVar39;
        uVar29 = uVar28;
        uVar36 = uVar28;
        uStack_150 = 0;
        while (uStack_14c == 0) {
          iVar26 = (int)uVar29;
          local_138 = (int)uVar36 + 0x20;
          uVar36 = (ulonglong)local_138;
          uStack_150 = iVar26 + 1;
          uVar29 = (ulonglong)uStack_150;
          uStack_14c = 1;
          uStack_13c = uVar14;
          if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_150)
          goto LAB_146e01b40;
          uStack_14c = puVar39[(longlong)iVar26 + 1];
        }
        uStack_14c = -uStack_14c & uStack_14c;
        uVar29 = (ulonglong)uStack_14c * 2 + 1;
        lVar32 = 0x3f;
        if (uVar29 != 0) {
          for (; uVar29 >> lVar32 == 0; lVar32 = lVar32 + -1) {
          }
        }
        local_108 = (int)lVar32;
        uStack_13c = local_108 + -1 + local_138;
        if ((int)uVar14 < (int)uStack_13c) {
          uStack_13c = uVar14;
        }
      }
LAB_146e01b40:
      uStack_134 = local_64;
      local_180 = (ForElementType<unsigned_int>)&(local_178->Elements).field_0x10;
      iStack_130 = *(int *)&(local_178->Elements).field_0x8 -
                   *(int *)&(local_178->Elements).field_0x34;
      uVar14 = *(uint *)&(local_178->Elements).field_0x28;
      TStack_e8._padding_ = CONCAT44(uStack_14c,uStack_150);
      uStack_140 = 0xffffffff;
      uVar45 = uVar14 & 0xffffffe0;
      TStack_e8.CurrentBitIndex = uStack_13c;
      TStack_e8.UnvisitedBitMask = 0xffffffff;
      iVar26 = (int)uVar14 >> 5;
      TStack_e8._28_4_ = local_64;
      TStack_e8.BaseBitIndex = local_138;
      uStack_c8 = CONCAT44(uStack_12c,iStack_130);
      local_1b4 = uVar14;
      local_158 = local_178;
      local_f0 = local_178;
      TStack_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_148;
      if (((int)uVar14 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar12)) {
        pcVar4 = (code *)swi(3);
        uVar11 = (*pcVar4)();
        return (bool)uVar11;
      }
      uVar1 = *(int *)((longlong)local_180 + 0x18);
      uVar29 = uVar28;
      uVar36 = uVar28;
      if (uVar14 != uVar1) {
        FVar33 = local_180;
        if (*(ForElementType<unsigned_int> *)((longlong)local_180 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar33 = *(ForElementType<unsigned_int> *)((longlong)local_180 + 0x10);
        }
        uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)((longlong)FVar33 + (longlong)iVar26 * 4);
        while (uVar14 == 0) {
          lVar32 = (longlong)iVar26;
          uVar45 = uVar45 + 0x20;
          iVar26 = iVar26 + 1;
          uVar14 = uVar1;
          local_1b4 = uVar1;
          if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar26)
          goto LAB_146e01c70;
          uVar14 = *(uint *)((undefined1 *)((longlong)FVar33 + 4) + lVar32 * 4);
        }
        uVar35 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
        lVar32 = 0x3f;
        if (uVar35 != 0) {
          for (; uVar35 >> lVar32 == 0; lVar32 = lVar32 + -1) {
          }
        }
        local_104 = (int)lVar32;
        uVar14 = (uVar45 - 1) + local_104;
        local_1b4 = uVar14;
        if ((int)uVar1 < (int)uVar14) {
          uVar14 = uVar1;
          local_1b4 = uVar1;
        }
      }
LAB_146e01c70:
      while( true ) {
        pTVar22 = local_f0;
        if (*(int *)&(local_f0->Elements).field_0x8 - *(int *)&(local_f0->Elements).field_0x34 !=
            (int)uStack_c8) {
          local_1b7 = 0;
          `TSparseArray<TSparseSetElement<UE::Math::TIntPoint<int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1b7);
        }
        pTVar7 = local_178;
        uVar35 = local_1a0;
        if (((TStack_e8.CurrentBitIndex == uVar14) &&
            ((ForElementType<unsigned_int>)TStack_e8.Array == local_180)) && (pTVar22 == local_178))
        break;
        uVar14 = local_1a0._4_4_;
        piVar43 = (int *)((longlong)TStack_e8.CurrentBitIndex * 0x10 +
                         *(longlong *)&pTVar22->Elements);
        local_1a0 = (ulonglong)local_1a0._4_4_ << 0x20;
        if (((longlong)uVar35 < 0) && (uVar14 != 0)) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&local_1a8,0,(int *)((longlong)&local_1a0 + 4));
        }
        iVar26 = dtNavMesh::getTileCountAt(local_190,*piVar43,piVar43[1]);
        iVar15 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (8,8,iVar26,&local_1a8,(int *)&local_1a0,
                            (int *)((longlong)&local_1a0 + 4));
        memset(local_1a8.Data + (longlong)iVar15 * 8,0,(longlong)iVar26 << 3);
        dtNavMesh::getTilesAt
                  (local_190,*piVar43,piVar43[1],(dtMeshTile **)local_1a8.Data,(uint)local_1a0);
        uVar42 = (ulonglong)(int)(uint)local_1a0;
        local_1b0 = (uint)local_1a0;
        pFVar27 = local_1a8.Data + uVar42 * 8;
        uVar35 = uVar42;
        FVar46.Data = local_1a8.Data;
        local_f8 = pFVar27;
        while( true ) {
          iVar26 = (int)uVar36;
          if ((int)uVar35 != (int)uVar42) {
            local_1b6[0] = 0;
            `TCheckedPointerIterator<dtMeshTile_const_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_1b6);
            uVar35 = local_1a0 & 0xffffffff;
          }
          if (FVar46.Data == pFVar27) break;
          pdVar23 = *(dtMeshTile **)FVar46.Data;
          if ((pdVar23 != (dtMeshTile *)0x0) &&
             (pdVar2 = pdVar23->header, pdVar2 != (dtMeshHeader *)0x0)) {
            uVar36 = (ulonglong)pdVar2->polyCount;
            uVar29 = (ulonglong)
                     ((int)uVar29 + (uint)pdVar2->vertCount + (uint)pdVar2->detailVertCount);
            if (uVar36 < 2) {
              uVar14 = uVar41;
              uVar45 = uVar40;
              if (uVar36 != 0) {
                pdVar44 = pdVar23->detailMeshes;
                uVar42 = uVar28;
                uVar45 = uVar16;
                goto LAB_146e01e22;
              }
            }
            else {
              pdVar44 = pdVar23->detailMeshes;
              lVar32 = (uVar36 - 2 >> 1) + 1;
              uVar42 = lVar32 * 2;
              puVar24 = &pdVar44[1].triCount;
              uVar37 = uVar28;
              uVar38 = uVar28;
              do {
                uVar14 = (int)uVar37 + (uint)puVar24[-6] * 3;
                uVar37 = (ulonglong)uVar14;
                uVar45 = (int)uVar38 + (uint)*puVar24 * 3;
                uVar38 = (ulonglong)uVar45;
                lVar32 = lVar32 + -1;
                puVar24 = puVar24 + 0xc;
              } while (lVar32 != 0);
              if ((longlong)uVar42 < (longlong)uVar36) {
LAB_146e01e22:
                iVar26 = iVar26 + (uint)pdVar44[uVar42].triCount * 3;
              }
            }
            uVar36 = (ulonglong)(iVar26 + uVar14 + uVar45);
            pFVar27 = local_f8;
          }
          uVar42 = (ulonglong)local_1b0;
          FVar46.Data = FVar46.Data + 8;
        }
        TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
        uVar14 = local_1b4;
      }
      `FPImplRecastNavMesh::GetDebugGeometryForTile'::__l2::<lambda_2>::operator()
                (&local_1b8,param_1,(int)uVar29,(int)uVar36);
      pTVar22 = local_178;
      uVar16 = *(uint *)&(pTVar7->Elements).field_0x28;
      local_148 = &(pTVar7->Elements).field_0x10;
      iVar26 = (param_1->MeshVerts).ArrayNum;
      uStack_13c = uVar41;
      if (uVar16 != 0) {
        puVar39 = *(uint **)&(pTVar7->Elements).field_0x20;
        if (puVar39 == (uint *)0x0) {
          puVar39 = (uint *)local_148;
        }
        uVar40 = *puVar39;
        uVar29 = uVar28;
        uVar13 = 0;
        while (uVar40 == 0) {
          iVar15 = (int)uVar28;
          uVar41 = (int)uVar29 + 0x20;
          uVar29 = (ulonglong)uVar41;
          uVar13 = iVar15 + 1;
          uVar28 = (ulonglong)uVar13;
          uStack_13c = uVar16;
          if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar13)
          goto LAB_146e01eff;
          uVar40 = puVar39[(longlong)iVar15 + 1];
        }
        local_188 = (TBitArray<FDefaultBitArrayAllocator> *)(ulonglong)(-uVar40 & uVar40);
        uVar28 = (longlong)local_188 * 2 + 1;
        lVar32 = 0x3f;
        if (uVar28 != 0) {
          for (; uVar28 >> lVar32 == 0; lVar32 = lVar32 + -1) {
          }
        }
        local_100 = (int)lVar32;
        uStack_13c = (uVar41 - 1) + local_100;
        if ((int)uVar16 < (int)uStack_13c) {
          uStack_13c = uVar16;
        }
      }
LAB_146e01eff:
      uStack_14c = (uint)local_188;
      pTVar30 = (TBitArray<FDefaultBitArrayAllocator> *)&(local_178->Elements).field_0x10;
      uStack_134 = local_44;
      iStack_130 = *(int *)&(pTVar7->Elements).field_0x8 - *(int *)&(pTVar7->Elements).field_0x34;
      local_158 = pTVar7;
      uVar16 = *(uint *)&(pTVar7->Elements).field_0x28;
      uStack_140 = 0xffffffff;
      TStack_b8.CurrentBitIndex = uStack_13c;
      TStack_b8.UnvisitedBitMask = 0xffffffff;
      local_1b0 = -1 << ((byte)uVar16 & 0x1f);
      uVar40 = uVar16 & 0xffffffe0;
      TStack_b8._padding_ = CONCAT44(uStack_14c,uVar13);
      local_c0 = pTVar7;
      iVar15 = (int)uVar16 >> 5;
      TStack_b8._28_4_ = local_44;
      TStack_b8.BaseBitIndex = uVar41;
      uStack_98 = CONCAT44(uStack_12c,iStack_130);
      local_1b4 = uVar16;
      local_188 = pTVar30;
      uStack_150 = uVar13;
      local_138 = uVar41;
      TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_148;
      if (((int)uVar16 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar12)) {
        pcVar4 = (code *)swi(3);
        uVar11 = (*pcVar4)();
        return (bool)uVar11;
      }
      uVar41 = *(uint *)&(pTVar22->Elements).field_0x28;
      if (uVar16 != uVar41) {
        puVar3 = *(undefined1 **)&(pTVar22->Elements).field_0x20;
        puVar34 = (undefined1 *)pTVar30;
        if (puVar3 != (undefined1 *)0x0) {
          puVar34 = puVar3;
        }
        uVar13 = local_1b0 & *(uint *)(puVar34 + (longlong)iVar15 * 4);
        while (uVar13 == 0) {
          lVar32 = (longlong)iVar15;
          uVar40 = uVar40 + 0x20;
          iVar15 = iVar15 + 1;
          uVar16 = uVar41;
          local_1b4 = uVar41;
          if ((int)((uVar41 - 1) + ((int)(uVar41 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
          goto LAB_146e02040;
          uVar13 = *(uint *)(puVar34 + lVar32 * 4 + 4);
        }
        uVar28 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
        lVar32 = 0x3f;
        if (uVar28 != 0) {
          for (; uVar28 >> lVar32 == 0; lVar32 = lVar32 + -1) {
          }
        }
        uVar16 = (uVar40 - 1) + (int)lVar32;
        local_1b4 = uVar16;
        if ((int)uVar41 < (int)uVar16) {
          uVar16 = uVar41;
          local_1b4 = uVar41;
        }
      }
LAB_146e02040:
      while( true ) {
        pTVar22 = local_c0;
        if (*(int *)&(local_c0->Elements).field_0x8 - *(int *)&(local_c0->Elements).field_0x34 !=
            (int)uStack_98) {
          `TSparseArray<TSparseSetElement<UE::Math::TIntPoint<int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_194);
        }
        FVar31 = local_170;
        uVar28 = local_1a0;
        if (((TStack_b8.CurrentBitIndex == uVar16) && (TStack_b8.Array == pTVar30)) &&
           (pTVar22 == local_178)) break;
        uVar41 = local_1a0._4_4_;
        piVar43 = (int *)((longlong)TStack_b8.CurrentBitIndex * 0x10 +
                         *(longlong *)&pTVar22->Elements);
        local_1a0 = (ulonglong)local_1a0._4_4_ << 0x20;
        if (((longlong)uVar28 < 0) && (uVar41 != 0)) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&local_1a8,0,(int *)((longlong)&local_1a0 + 4));
        }
        iVar15 = dtNavMesh::getTileCountAt(local_190,*piVar43,piVar43[1]);
        iVar17 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (8,8,iVar15,&local_1a8,(int *)&local_1a0,
                            (int *)((longlong)&local_1a0 + 4));
        memset(local_1a8.Data + (longlong)iVar17 * 8,0,(longlong)iVar15 << 3);
        dtNavMesh::getTilesAt
                  (local_190,*piVar43,piVar43[1],(dtMeshTile **)local_1a8.Data,(uint)local_1a0);
        pFVar8 = local_168;
        iVar15 = (uint)local_1a0;
        pFVar27 = local_1a8.Data + (longlong)(int)(uint)local_1a0 * 8;
        FVar46.Data = local_1a8.Data;
        while( true ) {
          if ((uint)local_1a0 != iVar15) {
            `TCheckedPointerIterator<dtMeshTile_const_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_193);
          }
          if (FVar46.Data == pFVar27) break;
          pdVar23 = *(dtMeshTile **)FVar46.Data;
          if ((pdVar23 != (dtMeshTile *)0x0) && (pdVar23->header != (dtMeshHeader *)0x0)) {
            iVar17 = GetTilesDebugGeometry(this,pFVar8,pdVar23,iVar26,param_1,-1,(ushort)local_198);
            iVar26 = iVar26 + iVar17;
          }
          FVar46.Data = FVar46.Data + 8;
        }
        TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
        pTVar30 = local_188;
        uVar16 = local_1b4;
      }
      bVar12 = true;
      if (local_1a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data);
      }
      goto LAB_146e02332;
    }
    iVar26 = dtNavMesh::getMaxTiles(local_190);
    uVar29 = uVar28;
    uVar36 = uVar28;
    uVar35 = uVar28;
    if (iVar26 < 1) {
      `FPImplRecastNavMesh::GetDebugGeometryForTile'::__l2::<lambda_2>::operator()
                (&local_1b8,param_1,0,0);
    }
    else {
      do {
        iVar15 = (int)uVar36;
        pdVar23 = dtNavMesh::getTile(this_00,(int)uVar35);
        if ((pdVar23 != (dtMeshTile *)0x0) &&
           (pdVar2 = pdVar23->header, pdVar2 != (dtMeshHeader *)0x0)) {
          uVar36 = (ulonglong)pdVar2->polyCount;
          uVar29 = (ulonglong)
                   ((int)uVar29 + (uint)pdVar2->vertCount + (uint)pdVar2->detailVertCount);
          if (uVar36 < 2) {
            uVar13 = uVar41;
            uVar14 = uVar40;
            if (uVar36 != 0) {
              pdVar44 = pdVar23->detailMeshes;
              uVar42 = uVar28;
              uVar14 = uVar16;
              goto LAB_146e02282;
            }
          }
          else {
            pdVar44 = pdVar23->detailMeshes;
            lVar32 = (uVar36 - 2 >> 1) + 1;
            uVar42 = lVar32 * 2;
            puVar24 = &pdVar44[1].triCount;
            uVar37 = uVar28;
            uVar38 = uVar28;
            do {
              uVar13 = (int)uVar37 + (uint)puVar24[-6] * 3;
              uVar37 = (ulonglong)uVar13;
              uVar14 = (int)uVar38 + (uint)*puVar24 * 3;
              uVar38 = (ulonglong)uVar14;
              lVar32 = lVar32 + -1;
              puVar24 = puVar24 + 0xc;
            } while (lVar32 != 0);
            if ((longlong)uVar42 < (longlong)uVar36) {
LAB_146e02282:
              iVar15 = iVar15 + (uint)pdVar44[uVar42].triCount * 3;
            }
          }
          uVar36 = (ulonglong)(iVar15 + uVar13 + uVar14);
          this_00 = local_190;
        }
        uVar13 = (int)uVar35 + 1;
        uVar35 = (ulonglong)uVar13;
      } while ((int)uVar13 < iVar26);
      `FPImplRecastNavMesh::GetDebugGeometryForTile'::__l2::<lambda_2>::operator()
                (&local_1b8,param_1,(int)uVar29,(int)uVar36);
      FVar31 = local_170;
      uVar41 = local_198;
      iVar15 = (param_1->MeshVerts).ArrayNum;
      do {
        iVar17 = (int)uVar28;
        pdVar23 = dtNavMesh::getTile(local_190,iVar17);
        if ((pdVar23 != (dtMeshTile *)0x0) && (pdVar23->header != (dtMeshHeader *)0x0)) {
          iVar18 = GetTilesDebugGeometry
                             (this,local_168,pdVar23,iVar15,param_1,iVar17,(ushort)uVar41);
          iVar15 = iVar15 + iVar18;
        }
        uVar28 = (ulonglong)(iVar17 + 1U);
      } while ((int)(iVar17 + 1U) < iVar26);
    }
  }
  bVar12 = true;
LAB_146e02332:
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FThreadStats::AddMessage(FVar31,CycleScopeEnd);
  }
  return bVar12;
}

// GetDebugPolyEdges @ 146e02420

void __thiscall
FPImplRecastNavMesh::GetDebugPolyEdges
          (FPImplRecastNavMesh *this,dtMeshTile *param_1,bool param_2,bool param_3,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_4,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_5)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  double *pdVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  bool bVar11;
  double dVar12;
  longlong lVar13;
  bool bVar14;
  bool bVar15;
  uint uVar16;
  dtLink *pdVar17;
  uint *puVar18;
  ulonglong uVar19;
  double *pdVar20;
  dtPolyDetail *pdVar21;
  uint uVar22;
  ulonglong uVar23;
  longlong lVar24;
  uchar *puVar25;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar26;
  uint *puVar27;
  double **ppdVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  uint uVar35;
  uint uVar36;
  int iStack_128;
  uint uStack_124;
  int iStack_120;
  longlong lStack_110;
  longlong lStack_100;
  double *apdStack_f8 [3];
  longlong lStack_e0;
  longlong lStack_d8;
  longlong lStack_d0;
  uchar *puStack_c8;
  double *pdStack_c0;
  dtPolyDetail *pdStack_b8;
  dtMeshTile *pdStack_b0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTStack_a8;
  
  pTStack_a8 = param_4;
  pdStack_b0 = param_1;
  if (!param_3) {
    if (param_2) {
      bVar14 = true;
      goto LAB_146e11665;
    }
    bVar14 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<714170589362785005>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\PImplRecastNavMesh.cpp"
                        ,0xaed,"bGatherInteriorPolyEdges || bGatherExteriorNavMeshEdges");
    if (bVar14) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  bVar14 = false;
LAB_146e11665:
  dVar12 = __real_3f1a36e2d7731900;
  iStack_120 = 0;
  if (param_1->header->polyCount != 0) {
    uVar35 = (uint)__xmm_80000000000000008000000000000000;
    uVar36 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    lStack_100 = 0;
    lStack_110 = 0;
    do {
      puVar27 = (uint *)((longlong)param_1->polys->verts + lStack_110 + -4);
      if (*(byte *)((longlong)puVar27 + 0x1f) < 0x40) {
        bVar4 = *(byte *)((longlong)puVar27 + 0x1e);
        pdVar21 = param_1->detailMeshes;
        pdStack_b8 = pdVar21;
        uStack_124 = 0;
        if (bVar4 != 0) {
          puVar18 = puVar27 + 4;
          do {
            if ((bVar14) || (((ushort)*puVar18 != 0 && (-1 < (short)(ushort)*puVar18)))) {
              bVar15 = false;
            }
            else {
              bVar15 = true;
            }
            bVar11 = (bool)(bVar15 ^ 1);
            if ((*(byte *)((longlong)puVar27 + 0x1f) & 0x3f) == 0) {
              uVar7 = (ushort)*puVar18;
              if (uVar7 == 0) {
                bVar15 = true;
                bVar11 = false;
              }
              else if (((-1 < (short)uVar7) && (uVar7 <= param_1->header->offMeshBase)) &&
                      ((param_1->polys[(ulonglong)uVar7 - 1].areaAndtype & 0x3f) != 0)) {
                bVar15 = true;
                bVar11 = false;
              }
            }
            else if ((bVar15) && (uVar22 = *puVar27, uVar22 != 0xffffffff)) {
              do {
                uVar16 = (uint)param_1->header->maxLinkCount;
                if (uVar22 < uVar16) {
                  pdVar17 = param_1->links + uVar22;
                }
                else {
                  pdVar17 = (param_1->dynamicLinksO).m_data + (int)(uVar22 - uVar16);
                }
                uVar22 = pdVar17->next;
                if (pdVar17->edge == uStack_124) {
                  bVar11 = true;
                  break;
                }
              } while (uVar22 != 0xffffffff);
            }
            if ((((param_2) && (pTVar26 = param_4, bVar11)) ||
                ((param_3 && ((bVar15 && (pTVar26 = param_5, !bVar11)))))) &&
               (pTVar26 != (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0)) {
              pdVar20 = param_1->verts;
              pdStack_c0 = pdVar20;
              lStack_e0 = (ulonglong)(ushort)puVar18[-3] * 3;
              lStack_d8 = (ulonglong)
                          *(ushort *)
                           ((longlong)puVar27 +
                           (longlong)((int)(uStack_124 + 1) % (int)(uint)bVar4) * 2 + 4) * 3;
              iStack_128 = 0;
              if ((&pdVar21->triCount)[lStack_100] != '\0') {
                do {
                  lVar13 = lStack_e0;
                  puVar25 = param_1->detailTris;
                  bVar5 = *(byte *)((longlong)puVar27 + 0x1e);
                  uVar22 = (uint)bVar5;
                  lVar24 = (longlong)
                           (int)(((uint)*(ushort *)((longlong)&pdVar21->triBase + lStack_100) +
                                 iStack_128) * 4);
                  lStack_d0 = lVar24;
                  puStack_c8 = puVar25;
                  bVar6 = puVar25[lVar24];
                  if (bVar6 < bVar5) {
                    apdStack_f8[0] =
                         param_1->verts +
                         (ulonglong)*(ushort *)((longlong)puVar27 + (ulonglong)bVar6 * 2 + 4) * 3;
                  }
                  else {
                    apdStack_f8[0] =
                         param_1->detailVerts +
                         (int)(((bVar6 - uVar22) +
                               (uint)*(ushort *)((longlong)&pdVar21->vertBase + lStack_100)) * 3);
                  }
                  bVar6 = puVar25[lVar24 + 1];
                  if (bVar6 < bVar5) {
                    apdStack_f8[1] =
                         param_1->verts +
                         (ulonglong)*(ushort *)((longlong)puVar27 + (ulonglong)bVar6 * 2 + 4) * 3;
                  }
                  else {
                    apdStack_f8[1] =
                         param_1->detailVerts +
                         (int)(((*(ushort *)((longlong)&pdVar21->vertBase + lStack_100) - uVar22) +
                               (uint)bVar6) * 3);
                  }
                  bVar6 = puVar25[lVar24 + 2];
                  if (bVar6 < bVar5) {
                    apdStack_f8[2] =
                         param_1->verts +
                         (ulonglong)*(ushort *)((longlong)puVar27 + (ulonglong)bVar6 * 2 + 4) * 3;
                  }
                  else {
                    apdStack_f8[2] =
                         param_1->detailVerts +
                         (int)(((*(ushort *)((longlong)&pdVar21->vertBase + lStack_100) - uVar22) +
                               (uint)bVar6) * 3);
                  }
                  ppdVar28 = apdStack_f8;
                  uVar19 = 2;
                  uVar23 = 0;
                  do {
                    if ((puVar25[lVar24 + 3] >> ((char)uVar19 * '\x02' & 0x1fU) & 3) != 0) {
                      dVar2 = pdVar20[lVar13];
                      dVar3 = pdVar20[lVar13 + 2];
                      dVar31 = pdVar20[lStack_d8] - dVar2;
                      dVar30 = pdVar20[lStack_d8 + 2] - dVar3;
                      pdVar8 = apdStack_f8[uVar19];
                      dVar34 = dVar30 * dVar30 + dVar31 * dVar31;
                      dVar33 = (pdVar8[2] - dVar3) * dVar30 + (*pdVar8 - dVar2) * dVar31;
                      if (dVar34 != 0.0) {
                        dVar33 = dVar33 / dVar34;
                      }
                      dVar32 = (dVar30 * dVar33 + dVar3) - pdVar8[2];
                      dVar33 = (dVar31 * dVar33 + dVar2) - *pdVar8;
                      if (dVar32 * dVar32 + dVar33 * dVar33 < dVar12) {
                        dVar33 = (*ppdVar28)[2];
                        dVar32 = **ppdVar28;
                        dVar29 = (dVar33 - dVar3) * dVar30 + (dVar32 - dVar2) * dVar31;
                        if (dVar34 != 0.0) {
                          dVar29 = dVar29 / dVar34;
                        }
                        dVar33 = (dVar30 * dVar29 + dVar3) - dVar33;
                        dVar32 = (dVar31 * dVar29 + dVar2) - dVar32;
                        if (dVar33 * dVar33 + dVar32 * dVar32 < dVar12) {
                          piVar1 = &pTVar26->ArrayNum;
                          uVar16 = UE::Core::Private::
                                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x18,8,2,&pTVar26->AllocatorInstance,piVar1,
                                              &pTVar26->ArrayMax);
                          pFVar9 = (pTVar26->AllocatorInstance).Data;
                          lVar24 = (longlong)(int)uVar16;
                          *(undefined8 *)(pFVar9 + lVar24 * 0x18) = 0;
                          *(undefined8 *)(pFVar9 + lVar24 * 0x18 + 8) = 0;
                          *(undefined8 *)(pFVar9 + lVar24 * 0x18 + 0x10) = 0;
                          *(undefined8 *)(pFVar9 + lVar24 * 0x18 + 0x10 + 8) = 0;
                          *(undefined8 *)(pFVar9 + lVar24 * 0x18 + 0x20) = 0;
                          *(undefined8 *)(pFVar9 + lVar24 * 0x18 + 0x20 + 8) = 0;
                          dVar2 = *pdVar8;
                          dVar3 = pdVar8[2];
                          dVar30 = pdVar8[1];
                          uVar22 = 0;
                          if ((int)uVar16 < *piVar1) {
                            uVar22 = ~uVar16 >> 0x1f;
                          }
                          if ((uVar22 == 0) &&
                             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar15)) {
                            pcVar10 = (code *)swi(3);
                            (*pcVar10)();
                            return;
                          }
                          pFVar9 = (pTVar26->AllocatorInstance).Data;
                          *(ulonglong *)(pFVar9 + lVar24 * 0x18) =
                               CONCAT44((uint)((ulonglong)dVar2 >> 0x20) ^ uVar36,
                                        SUB84(dVar2,0) ^ uVar35);
                          *(ulonglong *)(pFVar9 + lVar24 * 0x18 + 8) =
                               CONCAT44((uint)((ulonglong)dVar3 >> 0x20) ^ uVar36,
                                        SUB84(dVar3,0) ^ uVar35);
                          *(double *)(pFVar9 + lVar24 * 0x18 + 0x10) = dVar30;
                          uVar16 = uVar16 + 1;
                          pdVar20 = *ppdVar28;
                          dVar2 = *pdVar20;
                          dVar3 = pdVar20[2];
                          dVar30 = pdVar20[1];
                          uVar22 = 0;
                          if ((int)uVar16 < *piVar1) {
                            uVar22 = ~uVar16 >> 0x1f;
                          }
                          if ((uVar22 == 0) &&
                             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar15)) {
                            pcVar10 = (code *)swi(3);
                            (*pcVar10)();
                            return;
                          }
                          lVar24 = (longlong)(int)uVar16;
                          pFVar9 = (pTVar26->AllocatorInstance).Data;
                          *(ulonglong *)(pFVar9 + lVar24 * 0x18) =
                               CONCAT44((uint)((ulonglong)dVar2 >> 0x20) ^ uVar36,
                                        SUB84(dVar2,0) ^ uVar35);
                          *(ulonglong *)(pFVar9 + lVar24 * 0x18 + 8) =
                               CONCAT44((uint)((ulonglong)dVar3 >> 0x20) ^ uVar36,
                                        SUB84(dVar3,0) ^ uVar35);
                          *(double *)(pFVar9 + lVar24 * 0x18 + 0x10) = dVar30;
                          pdVar20 = pdStack_c0;
                          lVar24 = lStack_d0;
                          puVar25 = puStack_c8;
                        }
                      }
                    }
                    ppdVar28 = ppdVar28 + 1;
                    uVar22 = (int)uVar23 + 1;
                    uVar19 = uVar23;
                    uVar23 = (ulonglong)uVar22;
                  } while ((int)uVar22 < 3);
                  iStack_128 = iStack_128 + 1;
                  pdVar21 = pdStack_b8;
                  param_1 = pdStack_b0;
                  param_4 = pTStack_a8;
                } while (iStack_128 < (int)(uint)(&pdStack_b8->triCount)[lStack_100]);
              }
            }
            uStack_124 = uStack_124 + 1;
            puVar18 = (uint *)((longlong)puVar18 + 2);
          } while ((int)uStack_124 < (int)(uint)bVar4);
        }
      }
      lStack_110 = lStack_110 + 0x20;
      iStack_120 = iStack_120 + 1;
      lStack_100 = lStack_100 + 6;
    } while (iStack_120 < (int)(uint)param_1->header->polyCount);
  }
  return;
}

// GetEdgesForPathCorridor @ 146e054b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FPImplRecastNavMesh::GetEdgesForPathCorridor
          (FPImplRecastNavMesh *this,TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FNavigationPortalEdge,TSizedDefaultAllocator<32>_> *param_2)

{
  bool bVar1;
  dtNavMeshQuery *this_00;
  undefined1 auStack_e8 [32];
  dtNavMeshQuery local_c8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (this->DetourNavMesh != (dtNavMesh *)0x0) {
    dtNavMeshQuery::dtNavMeshQuery(&local_c8);
    bVar1 = IsInGameThread();
    this_00 = &this->SharedNavQuery;
    if (!bVar1) {
      this_00 = &local_c8;
    }
    dtNavMeshQuery::init(this_00,this->DetourNavMesh,0x800,(dtQuerySpecialLinkFilter *)0x0);
    GetEdgesForPathCorridorImpl(this,param_1,param_2,this_00);
    dtNavMeshQuery::~dtNavMeshQuery(&local_c8);
  }
  return;
}

// GetEdgesForPathCorridorImpl @ 146e05560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FPImplRecastNavMesh::GetEdgesForPathCorridorImpl
          (FPImplRecastNavMesh *this,TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FNavigationPortalEdge,TSizedDefaultAllocator<32>_> *param_2,dtNavMeshQuery *param_3
          )

{
  int *piVar1;
  ulong64 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  undefined1 auStackY_138 [32];
  uchar local_e8 [4];
  uint local_e4;
  uint local_e0;
  dtNavMeshQuery *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  double local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  double local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_138;
  uVar10 = param_1->ArrayNum - 1;
  local_e0 = uVar10;
  local_d8 = param_3;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  piVar1 = &param_2->ArrayMax;
  lVar12 = 8;
  param_2->ArrayNum = 0;
  if (*piVar1 != uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,uVar10,&param_2->AllocatorInstance,0,piVar1);
  }
  uVar9 = 0;
  if (0 < (int)uVar10) {
    uVar10 = (uint)__xmm_80000000000000008000000000000000;
    uVar13 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    do {
      local_e4 = uVar9 + 1;
      local_98 = 0.0;
      local_80 = 0.0;
      uVar11 = ~local_e4;
      local_e8[1] = 0;
      local_e8[0] = '\0';
      uVar6 = 0;
      if ((int)local_e4 < param_1->ArrayNum) {
        uVar6 = uVar11 >> 0x1f;
      }
      local_90 = 0;
      uStack_88 = 0;
      local_78 = 0;
      uStack_70 = 0;
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar2 = *(ulong64 *)((param_1->AllocatorInstance).Data + lVar12);
      uVar6 = 0;
      if ((int)uVar9 < param_1->ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      dtNavMeshQuery::getPortalPoints
                (local_d8,*(ulong64 *)((param_1->AllocatorInstance).Data + lVar12 + -8),uVar2,
                 &local_98,&local_80,local_e8 + 1,local_e8);
      uVar9 = local_e4;
      uVar6 = 0;
      if ((int)local_e4 < param_1->ArrayNum) {
        uVar6 = uVar11 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_a0 = *(undefined8 *)((param_1->AllocatorInstance).Data + lVar12);
      local_d0 = CONCAT44((uint)((ulonglong)local_98 >> 0x20) ^ uVar13,SUB84(local_98,0) ^ uVar10);
      local_c0 = local_90;
      uStack_c8 = CONCAT44((uint)((ulonglong)uStack_88 >> 0x20) ^ uVar13,(uint)uStack_88 ^ uVar10);
      pFVar3 = (param_2->AllocatorInstance).Data;
      local_b0 = CONCAT44((uint)((ulonglong)uStack_70 >> 0x20) ^ uVar13,(uint)uStack_70 ^ uVar10);
      uStack_a8 = local_78;
      uStack_b8 = CONCAT44((uint)((ulonglong)local_80 >> 0x20) ^ uVar13,SUB84(local_80,0) ^ uVar10);
      if (((pFVar3 <= (FScriptContainerElement *)&local_d0) &&
          ((FScriptContainerElement *)&local_d0 < pFVar3 + (longlong)*piVar1 * 0x38)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = param_2->ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x838,&param_2->AllocatorInstance,piVar1);
      }
      lVar12 = lVar12 + 8;
      param_2->ArrayNum = iVar7 + 1;
      lVar8 = (longlong)iVar7 * 0x38;
      pFVar3 = (param_2->AllocatorInstance).Data;
      *(undefined8 *)(pFVar3 + lVar8) = local_d0;
      *(undefined8 *)(pFVar3 + lVar8 + 8) = uStack_c8;
      *(undefined8 *)(pFVar3 + lVar8 + 0x10) = local_c0;
      *(undefined8 *)(pFVar3 + lVar8 + 0x10 + 8) = uStack_b8;
      *(undefined8 *)(pFVar3 + lVar8 + 0x20) = local_b0;
      *(undefined8 *)(pFVar3 + lVar8 + 0x20 + 8) = uStack_a8;
      *(undefined8 *)(pFVar3 + lVar8 + 0x30) = local_a0;
    } while ((int)uVar9 < (int)local_e0);
  }
  return;
}

// GetFilterForbiddenFlags @ 146e05d00

ushort __cdecl FPImplRecastNavMesh::GetFilterForbiddenFlags(FRecastQueryFilter *param_1)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)&param_1->field_0x422;
  if (param_1 == (FRecastQueryFilter *)0x0) {
    puVar1 = (ushort *)&DAT_0000041a;
  }
  return *puVar1;
}

// GetLinkEndPoints @ 146e05ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FPImplRecastNavMesh::GetLinkEndPoints
          (FPImplRecastNavMesh *this,ulong64 param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStackY_88 [32];
  double local_58;
  double dStack_50;
  undefined8 local_48;
  double local_40;
  double dStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_88;
  if (this->DetourNavMesh != (dtNavMesh *)0x0) {
    local_48 = 0;
    local_30 = 0;
    local_58 = 0.0;
    dStack_50 = 0.0;
    local_40 = 0.0;
    dStack_38 = 0.0;
    uVar1 = dtNavMesh::getOffMeshConnectionPolyEndPoints
                      (this->DetourNavMesh,0,param_1,(double *)0x0,&local_58,&local_40);
    if ((uVar1 >> 0x1e & 1) != 0) {
      uVar1 = (uint)__xmm_80000000000000008000000000000000;
      uVar2 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      (param_2->field0_0x0)._s_0.X =
           (double)CONCAT44((uint)((ulonglong)local_58 >> 0x20) ^ uVar2,SUB84(local_58,0) ^ uVar1);
      (param_2->field0_0x0)._s_0.Y =
           (double)CONCAT44((uint)((ulonglong)local_48 >> 0x20) ^ uVar2,(uint)local_48 ^ uVar1);
      (param_2->field0_0x0)._s_0.Z = dStack_50;
      (param_3->field0_0x0)._s_0.X =
           (double)CONCAT44((uint)((ulonglong)local_40 >> 0x20) ^ uVar2,SUB84(local_40,0) ^ uVar1);
      (param_3->field0_0x0)._s_0.Y =
           (double)CONCAT44((uint)((ulonglong)local_30 >> 0x20) ^ uVar2,(uint)local_30 ^ uVar1);
      (param_3->field0_0x0)._s_0.Z = dStack_38;
      return true;
    }
  }
  return false;
}

// GetNavLinkUserId @ 146e07e90

FNavLinkId __thiscall
FPImplRecastNavMesh::GetNavLinkUserId(FPImplRecastNavMesh *this,ulong64 param_1)

{
  dtOffMeshConnection *pdVar1;
  ulong64 in_R8;
  
  if (this->DetourNavMesh != (dtNavMesh *)0x0) {
    pdVar1 = dtNavMesh::getOffMeshConnectionByRef(this->DetourNavMesh,in_R8);
    if (pdVar1 != (dtOffMeshConnection *)0x0) {
      *(ulong64 *)param_1 = pdVar1->userId;
      return (FNavLinkId)param_1;
    }
  }
  *(ulong64 *)param_1 = FNavLinkId::Invalid.Id;
  return (FNavLinkId)param_1;
}

// GetNavMeshBounds @ 146e087d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TBox<double> * __thiscall
FPImplRecastNavMesh::GetNavMeshBounds
          (FPImplRecastNavMesh *this,TBox<double> *__return_storage_ptr__)

{
  double dVar1;
  dtNavMesh *this_00;
  dtMeshHeader *pdVar2;
  int iVar3;
  dtMeshTile *pdVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_b8 [32];
  TVector<double>_u_0 local_98;
  undefined8 local_80;
  undefined8 local_78;
  double local_70;
  TVector<double>_u_0 local_68;
  double dStack_50;
  double local_48;
  double dStack_40;
  char local_38;
  undefined7 uStack_37;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_b8;
  iVar5 = 0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->IsValid = '\0';
  __return_storage_ptr__->Pad[0] = '\0';
  __return_storage_ptr__->Pad[1] = '\0';
  __return_storage_ptr__->Pad[2] = '\0';
  __return_storage_ptr__->Pad[3] = '\0';
  __return_storage_ptr__->Pad[4] = '\0';
  __return_storage_ptr__->Pad[5] = '\0';
  __return_storage_ptr__->Pad[6] = '\0';
  this_00 = this->DetourNavMesh;
  if ((this_00 != (dtNavMesh *)0x0) && (iVar3 = dtNavMesh::getMaxTiles(this_00), 0 < iVar3)) {
    uVar10 = (uint)__xmm_80000000000000008000000000000000;
    uVar11 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    do {
      pdVar4 = dtNavMesh::getTile(this_00,iVar5);
      if ((pdVar4 != (dtMeshTile *)0x0) && (pdVar2 = pdVar4->header, pdVar2 != (dtMeshHeader *)0x0))
      {
        local_98._s_0.X =
             (double)CONCAT44((uint)((ulonglong)pdVar2->bmin[0] >> 0x20) ^ uVar11,
                              SUB84(pdVar2->bmin[0],0) ^ uVar10);
        local_98._s_0.Z = pdVar2->bmin[1];
        local_98._s_0.Y =
             (double)CONCAT44((uint)((ulonglong)pdVar2->bmin[2] >> 0x20) ^ uVar11,
                              SUB84(pdVar2->bmin[2],0) ^ uVar10);
        local_78 = CONCAT44((uint)((ulonglong)pdVar2->bmax[2] >> 0x20) ^ uVar11,
                            SUB84(pdVar2->bmax[2],0) ^ uVar10);
        local_70 = pdVar2->bmax[1];
        local_80 = CONCAT44((uint)((ulonglong)pdVar2->bmax[0] >> 0x20) ^ uVar11,
                            SUB84(pdVar2->bmax[0],0) ^ uVar10);
        UE::Math::TBox<double>::TBox<double>
                  ((TBox<double> *)&local_68._s_0,(TVector<double> *)&local_98._s_0,2);
        if (__return_storage_ptr__->IsValid == '\0') {
          if (local_38 != '\0') {
            *(double *)&(__return_storage_ptr__->Min).field0_0x0 = local_68._s_0.X;
            *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8) = local_68._s_0.Y;
            *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x10) =
                 local_68._s_0.Z;
            *(double *)&(__return_storage_ptr__->Max).field0_0x0 = dStack_50;
            *(double *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8) = local_48;
            *(double *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0x10) = dStack_40;
            __return_storage_ptr__->IsValid = local_38;
            __return_storage_ptr__->Pad[0] = (char)uStack_37;
            __return_storage_ptr__->Pad[1] = (char)((uint7)uStack_37 >> 8);
            __return_storage_ptr__->Pad[2] = (char)((uint7)uStack_37 >> 0x10);
            __return_storage_ptr__->Pad[3] = (char)((uint7)uStack_37 >> 0x18);
            __return_storage_ptr__->Pad[4] = (char)((uint7)uStack_37 >> 0x20);
            __return_storage_ptr__->Pad[5] = (char)((uint7)uStack_37 >> 0x28);
            __return_storage_ptr__->Pad[6] = (char)((uint7)uStack_37 >> 0x30);
          }
        }
        else if (local_38 != '\0') {
          dVar1 = *(double *)&(__return_storage_ptr__->Min).field0_0x0;
          uVar6 = SUB84(dVar1,0);
          uVar7 = (undefined4)((ulonglong)dVar1 >> 0x20);
          if (local_68._s_0.X <= dVar1) {
            uVar6 = SUB84(local_68._s_0.X,0);
            uVar7 = (undefined4)((ulonglong)local_68._0_8_ >> 0x20);
          }
          dVar1 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8);
          uVar8 = SUB84(dVar1,0);
          uVar9 = (undefined4)((ulonglong)dVar1 >> 0x20);
          if (local_68._s_0.Y <= dVar1) {
            uVar8 = SUB84(local_68._s_0.Y,0);
            uVar9 = (undefined4)((ulonglong)local_68._8_8_ >> 0x20);
          }
          (__return_storage_ptr__->Min).field0_0x0._s_0.X = (double)CONCAT44(uVar7,uVar6);
          dVar1 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x10);
          uVar6 = SUB84(dVar1,0);
          uVar7 = (undefined4)((ulonglong)dVar1 >> 0x20);
          if (local_68._s_0.Z <= dVar1) {
            uVar6 = SUB84(local_68._s_0.Z,0);
            uVar7 = (undefined4)((ulonglong)local_68._16_8_ >> 0x20);
          }
          (__return_storage_ptr__->Min).field0_0x0._s_0.Y = (double)CONCAT44(uVar9,uVar8);
          dVar1 = *(double *)&(__return_storage_ptr__->Max).field0_0x0;
          uVar8 = SUB84(dVar1,0);
          uVar9 = (undefined4)((ulonglong)dVar1 >> 0x20);
          if (dVar1 <= dStack_50) {
            uVar8 = SUB84(dStack_50,0);
            uVar9 = (undefined4)((ulonglong)dStack_50 >> 0x20);
          }
          (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (double)CONCAT44(uVar7,uVar6);
          dVar1 = *(double *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8);
          uVar6 = SUB84(dVar1,0);
          uVar7 = (undefined4)((ulonglong)dVar1 >> 0x20);
          if (dVar1 <= local_48) {
            uVar6 = SUB84(local_48,0);
            uVar7 = (undefined4)((ulonglong)local_48 >> 0x20);
          }
          (__return_storage_ptr__->Max).field0_0x0._s_0.X = (double)CONCAT44(uVar9,uVar8);
          dVar1 = *(double *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0x10);
          uVar8 = SUB84(dVar1,0);
          uVar9 = (undefined4)((ulonglong)dVar1 >> 0x20);
          if (dVar1 <= dStack_40) {
            uVar8 = SUB84(dStack_40,0);
            uVar9 = (undefined4)((ulonglong)dStack_40 >> 0x20);
          }
          (__return_storage_ptr__->Max).field0_0x0._s_0.Y = (double)CONCAT44(uVar7,uVar6);
          (__return_storage_ptr__->Max).field0_0x0._s_0.Z = (double)CONCAT44(uVar9,uVar8);
        }
      }
      iVar5 = iVar5 + 1;
      iVar3 = dtNavMesh::getMaxTiles(this->DetourNavMesh);
    } while (iVar5 < iVar3);
  }
  return __return_storage_ptr__;
}

// GetNavMeshTileBounds @ 146e08be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TBox<double> * __thiscall
FPImplRecastNavMesh::GetNavMeshTileBounds
          (FPImplRecastNavMesh *this,TBox<double> *__return_storage_ptr__,int param_1)

{
  dtMeshHeader *pdVar1;
  double dVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  int iVar10;
  dtMeshTile *pdVar11;
  TBox<double> *pTVar12;
  undefined1 auStack_78 [32];
  TBox<double> local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_78;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->IsValid = '\0';
  __return_storage_ptr__->Pad[0] = '\0';
  __return_storage_ptr__->Pad[1] = '\0';
  __return_storage_ptr__->Pad[2] = '\0';
  __return_storage_ptr__->Pad[3] = '\0';
  __return_storage_ptr__->Pad[4] = '\0';
  __return_storage_ptr__->Pad[5] = '\0';
  __return_storage_ptr__->Pad[6] = '\0';
  if ((this->DetourNavMesh != (dtNavMesh *)0x0) && (-1 < param_1)) {
    iVar10 = dtNavMesh::getMaxTiles(this->DetourNavMesh);
    if (param_1 < iVar10) {
      pdVar11 = dtNavMesh::getTile(this->DetourNavMesh,param_1);
      if ((pdVar11 != (dtMeshTile *)0x0) &&
         (pdVar1 = pdVar11->header, pdVar1 != (dtMeshHeader *)0x0)) {
        pTVar12 = Recast2UnrealBox(&local_58,pdVar1->bmin,pdVar1->bmax);
        dVar2 = (pTVar12->Min).field0_0x0._s_0.Y;
        (__return_storage_ptr__->Min).field0_0x0._s_0.X = (pTVar12->Min).field0_0x0._s_0.X;
        (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar2;
        dVar2 = (pTVar12->Max).field0_0x0._s_0.X;
        (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (pTVar12->Min).field0_0x0._s_0.Z;
        (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar2;
        dVar2 = (pTVar12->Max).field0_0x0._s_0.Z;
        (__return_storage_ptr__->Max).field0_0x0._s_0.Y = (pTVar12->Max).field0_0x0._s_0.Y;
        (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar2;
        uVar3 = pTVar12->Pad[0];
        uVar4 = pTVar12->Pad[1];
        uVar5 = pTVar12->Pad[2];
        uVar6 = pTVar12->Pad[3];
        uVar7 = pTVar12->Pad[4];
        uVar8 = pTVar12->Pad[5];
        uVar9 = pTVar12->Pad[6];
        __return_storage_ptr__->IsValid = pTVar12->IsValid;
        __return_storage_ptr__->Pad[0] = uVar3;
        __return_storage_ptr__->Pad[1] = uVar4;
        __return_storage_ptr__->Pad[2] = uVar5;
        __return_storage_ptr__->Pad[3] = uVar6;
        __return_storage_ptr__->Pad[4] = uVar7;
        __return_storage_ptr__->Pad[5] = uVar8;
        __return_storage_ptr__->Pad[6] = uVar9;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetNavMeshTileXY @ 146e08f30

bool __thiscall
FPImplRecastNavMesh::GetNavMeshTileXY
          (FPImplRecastNavMesh *this,TVector<double> *param_1,int *param_2,int *param_3)

{
  undefined8 uVar1;
  int local_res8 [2];
  int local_28 [2];
  double local_20;
  double local_18;
  undefined8 local_10;
  
  if (this->DetourNavMesh != (dtNavMesh *)0x0) {
    local_20 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20) ^
                                __xmm_80000000000000008000000000000000._4_4_,
                                (uint)*(undefined8 *)&param_1->field0_0x0 ^
                                (uint)__xmm_80000000000000008000000000000000);
    uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
    local_10 = CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        (uint)uVar1 ^ (uint)__xmm_80000000000000008000000000000000);
    local_18 = (param_1->field0_0x0)._s_0.Z;
    local_res8[0] = 0;
    local_28[0] = 0;
    dtNavMesh::calcTileLoc(this->DetourNavMesh,&local_20,local_res8,local_28);
    *param_2 = local_res8[0];
    *param_3 = local_28[0];
    return true;
  }
  return false;
}

// GetNavMeshTileXY @ 146e08fd0

bool __thiscall
FPImplRecastNavMesh::GetNavMeshTileXY
          (FPImplRecastNavMesh *this,int param_1,int *param_2,int *param_3,int *param_4)

{
  dtMeshHeader *pdVar1;
  int iVar2;
  dtMeshTile *pdVar3;
  
  if ((((this->DetourNavMesh != (dtNavMesh *)0x0) && (-1 < param_1)) &&
      (iVar2 = dtNavMesh::getMaxTiles(this->DetourNavMesh), param_1 < iVar2)) &&
     ((pdVar3 = dtNavMesh::getTile(this->DetourNavMesh,param_1), pdVar3 != (dtMeshTile *)0x0 &&
      (pdVar1 = pdVar3->header, pdVar1 != (dtMeshHeader *)0x0)))) {
    *param_2 = pdVar1->x;
    *param_3 = pdVar1->y;
    *param_4 = (uint)pdVar1->layer;
    return true;
  }
  return false;
}

// GetNavMeshTilesAt @ 146e093a0

void __thiscall
FPImplRecastNavMesh::GetNavMeshTilesAt
          (FPImplRecastNavMesh *this,int param_1,int param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  dtNavMesh *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong64 uVar7;
  uint uVar8;
  longlong lVar9;
  uint local_38 [2];
  ForAnyElementType local_30;
  int local_28 [4];
  
  this_00 = this->DetourNavMesh;
  if (this_00 != (dtNavMesh *)0x0) {
    iVar4 = dtNavMesh::getTileCountAt(this_00,param_1,param_2);
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28[0] = 0;
    local_28[1] = 0;
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar4,&local_30,local_28,local_28 + 1);
    memset(local_30.Data + (longlong)iVar5 * 8,0,(longlong)iVar4 << 3);
    uVar8 = 0;
    iVar4 = dtNavMesh::getTilesAt(this_00,param_1,param_2,(dtMeshTile **)local_30.Data,iVar4);
    if (0 < iVar4) {
      lVar9 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar8 < local_28[0]) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        uVar7 = dtNavMesh::getTileRef(this_00,*(dtMeshTile **)(local_30.Data + lVar9 * 8));
        if (uVar7 != 0) {
          pFVar1 = (param_3->AllocatorInstance).Data;
          local_38[0] = (uint)(uVar7 >> ((byte)this_00->m_polyBits & 0x3f)) &
                        (int)(1L << ((byte)this_00->m_tileBits & 0x3f)) - 1U;
          if ((pFVar1 <= (FScriptContainerElement *)local_38) &&
             ((FScriptContainerElement *)local_38 < pFVar1 + (longlong)param_3->ArrayMax * 4)) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          iVar5 = param_3->ArrayNum;
          if (iVar5 == param_3->ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&param_3->AllocatorInstance,&param_3->ArrayMax);
          }
          param_3->ArrayNum = iVar5 + 1;
          *(uint *)((param_3->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_38[0];
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 1;
      } while (lVar9 < iVar4);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
  }
  return;
}

// GetNavMeshTilesIn @ 146e095f0

void __thiscall
FPImplRecastNavMesh::GetNavMeshTilesIn
          (FPImplRecastNavMesh *this,
          TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_28;
  TArray<FNavTileRef,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  GetNavMeshTilesIn(this,param_1,&local_18);
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  FNavTileRef::DeprecatedGetTileIdsFromNavTileRefs(this,&local_18,&local_28);
  if (param_2 == (TArray<int,TSizedDefaultAllocator<32>_> *)&local_28) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  lVar4 = (longlong)local_28.ArrayNum;
  if (local_28.ArrayNum != 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,local_28.ArrayNum,&param_2->AllocatorInstance,&param_2->ArrayNum,
                       &param_2->ArrayMax);
    memcpy((param_2->AllocatorInstance).Data + (longlong)iVar3 * 4,local_28.AllocatorInstance.Data,
           lVar4 << 2);
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// GetNavMeshTilesIn @ 146e096f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FPImplRecastNavMesh::GetNavMeshTilesIn
          (FPImplRecastNavMesh *this,
          TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *param_2)

{
  double dVar1;
  longlong lVar2;
  dtMeshTile *pdVar3;
  dtMeshHeader *pdVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *pTVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  int iVar17;
  bool bVar18;
  uint uVar19;
  dtNavMeshParams *pdVar20;
  dtNavMeshParams *pdVar21;
  ulong64 uVar22;
  byte bVar23;
  ulonglong uVar24;
  longlong lVar25;
  TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *pTVar26;
  int iVar27;
  uint uVar28;
  TBox<double> *pTVar29;
  FScriptContainerElement *pFVar30;
  int iVar31;
  uint uVar32;
  FScriptContainerElement *pFVar33;
  FPImplRecastNavMesh *pFVar34;
  uint uVar35;
  uint *puVar36;
  longlong lVar37;
  FPImplRecastNavMesh *pFVar38;
  uint uVar39;
  TBox<double> *pTVar40;
  undefined1 auStackY_298 [32];
  undefined1 local_248;
  undefined1 local_247;
  undefined1 local_246;
  undefined1 local_245;
  uint local_244;
  ForAnyElementType local_240;
  int local_238 [2];
  FPImplRecastNavMesh *local_230;
  ulong64 local_228;
  TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *local_220;
  TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *local_218;
  TBox<double> *local_210;
  int local_208;
  int local_204;
  FRcTileBox local_200;
  longlong *local_1f0;
  uint uStack_1e8;
  uint uStack_1e4;
  TBitArray<FDefaultBitArrayAllocator> *local_1e0;
  undefined4 uStack_1d8;
  uint uStack_1d4;
  uint local_1d0;
  uint uStack_1cc;
  int iStack_1c8;
  undefined4 uStack_1c4;
  TIntPoint<int> local_1c0;
  longlong local_1b8;
  longlong *local_1b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a8;
  undefined8 uStack_188;
  TVector<double>_u_0 local_180;
  TVector<double>_u_0 local_168;
  undefined8 local_150;
  undefined8 local_148;
  double local_140;
  undefined1 local_138 [32];
  uint *local_118;
  uint local_110;
  undefined4 local_10c;
  undefined4 local_108;
  int local_104;
  ForElementType<FSetElementId> local_f8;
  int local_f0;
  TVector<double>_u_0 local_e8;
  double local_d0;
  double local_c8;
  double local_c0;
  ulonglong local_b0;
  
  local_b0 = __security_cookie.value ^ (ulonglong)auStackY_298;
  if (this->DetourNavMesh != (dtNavMesh *)0x0) {
    local_230 = this;
    local_220 = param_1;
    local_218 = param_2;
    pdVar20 = dtNavMesh::getParams(this->DetourNavMesh);
    pdVar21 = dtNavMesh::getParams(this->DetourNavMesh);
    local_244 = param_1->ArrayNum;
    uVar24 = (ulonglong)(int)local_244;
    pTVar40 = (TBox<double> *)(param_1->AllocatorInstance).Data;
    dVar1 = pdVar21->tileWidth;
    local_138._0_8_ = 0;
    pTVar29 = pTVar40 + uVar24;
    local_138._8_8_ = 0;
    local_118 = (uint *)0x0;
    local_110 = 0;
    local_10c = 0x80;
    local_108 = 0xffffffff;
    local_104 = 0;
    local_f8 = (ForElementType<FSetElementId>)0x0;
    local_f0 = 0;
    local_210 = pTVar29;
    while( true ) {
      if (param_1->ArrayNum != (int)uVar24) {
        local_248 = 0;
        `TCheckedPointerIterator<UE::Math::TBox<double>_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_248);
      }
      pTVar8 = local_218;
      if (pTVar40 == pTVar29) break;
      if (pTVar40->IsValid == '\0') {
        local_247 = 0;
        bVar18 = `FPImplRecastNavMesh::GetNavMeshTilesIn'::__l10::<lambda_1>::operator()(&local_247)
        ;
        if (bVar18) goto LAB_146e097f7;
      }
      else {
LAB_146e097f7:
        local_180._s_0.X = pdVar20->orig[0];
        local_180._s_0.Y = pdVar20->orig[1];
        local_180._s_0.Z = pdVar20->orig[2];
        FRcTileBox::FRcTileBox(&local_200,pTVar40,(TVector<double> *)&local_180._s_0,dVar1);
        iVar10 = local_200.YMax;
        iVar9 = local_200.XMax;
        iVar27 = local_200.XMin;
        for (iVar31 = local_200.YMin; iVar17 = iVar31, iVar6 = local_204, iVar7 = iVar27,
            iVar31 <= iVar10; iVar31 = iVar31 + 1) {
          for (; local_204 = iVar17, iVar7 <= iVar9; iVar7 = iVar7 + 1) {
            local_208 = iVar7;
            TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
            ::Emplace<UE::Math::TIntPoint<int>_>
                      ((TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
                        *)local_138,&local_1c0,(bool *)&local_208);
            iVar17 = local_204;
            iVar6 = local_204;
          }
          pTVar29 = local_210;
          param_1 = local_220;
          local_204 = iVar6;
        }
      }
      uVar24 = (ulonglong)local_244;
      pTVar40 = pTVar40 + 1;
    }
    uVar35 = (local_138._8_4_ - local_104) * 3;
    if ((int)uVar35 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar35);
    }
    if (local_218->ArrayMax < (int)uVar35) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar35,&local_218->AllocatorInstance,local_218->ArrayNum,&local_218->ArrayMax);
    }
    uVar35 = 0;
    local_240.Data = (FScriptContainerElement *)0x0;
    local_238[0] = 0;
    local_238[1] = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,3,&local_240,0,local_238 + 1);
    uVar28 = local_110;
    uStack_1e4 = 1;
    local_1d0 = 0;
    uStack_1d4 = local_1d0;
    if (local_110 != 0) {
      puVar36 = (uint *)(local_138 + 0x10);
      if (local_118 != (uint *)0x0) {
        puVar36 = local_118;
      }
      uVar32 = *puVar36;
      local_1d0 = 0;
      uVar35 = 0;
      while (uVar32 == 0) {
        lVar25 = (longlong)(int)uVar35;
        local_1d0 = local_1d0 + 0x20;
        uVar35 = uVar35 + 1;
        uStack_1d4 = local_110;
        if ((int)((local_110 - 1) + ((int)(local_110 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar35)
        goto LAB_146e099a0;
        uVar32 = puVar36[lVar25 + 1];
      }
      uStack_1e4 = -uVar32 & uVar32;
      uVar24 = (ulonglong)uStack_1e4 * 2 + 1;
      lVar25 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      uStack_1d4 = (local_1d0 - 1) + (int)lVar25;
      local_218 = (TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *)
                  CONCAT44(local_218._4_4_,(int)lVar25);
      if ((int)local_110 < (int)uStack_1d4) {
        uStack_1d4 = local_110;
      }
    }
LAB_146e099a0:
    local_1f0 = (longlong *)local_138;
    local_1e0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10);
    uVar32 = local_110 & 0xffffffe0;
    iStack_1c8 = local_138._8_4_ - local_104;
    uStack_1d8 = 0xffffffff;
    TStack_1a8.CurrentBitIndex = uStack_1d4;
    TStack_1a8.UnvisitedBitMask = 0xffffffff;
    TStack_1a8._padding_ = CONCAT44(uStack_1e4,uVar35);
    iVar31 = (int)local_110 >> 5;
    TStack_1a8._28_4_ = uStack_1d4;
    TStack_1a8.BaseBitIndex = local_1d0;
    uStack_188 = CONCAT44(uStack_1c4,iStack_1c8);
    bVar23 = (byte)local_110;
    local_244 = local_110;
    uStack_1e8 = uVar35;
    uStack_1cc = uStack_1d4;
    local_1b0 = local_1f0;
    TStack_1a8.Array = local_1e0;
    if (((int)local_110 < 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar18)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (uVar28 != local_110) {
      puVar36 = (uint *)(local_138 + 0x10);
      if (local_118 != (uint *)0x0) {
        puVar36 = local_118;
      }
      uVar35 = -1 << (bVar23 & 0x1f) & puVar36[iVar31];
      while (uVar35 == 0) {
        lVar25 = (longlong)iVar31;
        uVar32 = uVar32 + 0x20;
        iVar31 = iVar31 + 1;
        if ((int)((local_110 - 1) + ((int)(local_110 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar31) {
          local_244 = local_110;
          uVar28 = local_110;
          goto LAB_146e09ab5;
        }
        uVar35 = puVar36[lVar25 + 1];
      }
      uVar24 = (ulonglong)(-uVar35 & uVar35) * 2 + 1;
      lVar25 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      local_210 = (TBox<double> *)CONCAT44(local_210._4_4_,(int)lVar25);
      local_244 = (int)lVar25 + -1 + uVar32;
      uVar28 = local_244;
      if ((int)local_110 < (int)local_244) {
        uVar28 = local_110;
        local_244 = local_110;
      }
    }
LAB_146e09ab5:
    uVar35 = (uint)__xmm_80000000000000008000000000000000;
    uVar32 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    pFVar38 = local_230;
    while( true ) {
      plVar11 = local_1b0;
      if ((int)local_1b0[1] - *(int *)((longlong)local_1b0 + 0x34) != (int)uStack_188) {
        local_246 = 0;
        `TSparseArray<TSparseSetElement<UE::Math::TIntPoint<int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_246);
      }
      lVar25 = (longlong)TStack_1a8.CurrentBitIndex;
      if (((TStack_1a8.CurrentBitIndex == uVar28) &&
          (TStack_1a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10))) &&
         (plVar11 == (longlong *)local_138)) break;
      lVar2 = *plVar11;
      uVar19 = dtNavMesh::getTileCountAt
                         (pFVar38->DetourNavMesh,*(int *)(lVar2 + lVar25 * 0x10),
                          *(int *)(lVar2 + 4 + lVar25 * 0x10));
      if (0 < (int)uVar19) {
        if (local_238[0] < (int)uVar19) {
          iVar27 = uVar19 - local_238[0];
          iVar31 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (8,8,iVar27,&local_240,local_238,local_238 + 1);
          memset(local_240.Data + (longlong)iVar31 * 8,0,(longlong)iVar27 << 3);
        }
        else if ((int)uVar19 < local_238[0]) {
          uVar28 = local_238[0] - uVar19;
          if ((int)(uVar19 | uVar28) < 0) {
            bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               );
            if (bVar18) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          if (uVar28 != 0) {
            iVar27 = (local_238[0] - uVar28) - uVar19;
            iVar31 = local_238[0];
            if (iVar27 != 0) {
              memmove(local_240.Data + (longlong)(int)uVar19 * 8,
                      local_240.Data + (longlong)(int)uVar19 * 8 + (longlong)(int)uVar28 * 8,
                      (longlong)iVar27 << 3);
              iVar31 = local_238[0];
            }
            local_238[0] = iVar31 - uVar28;
          }
        }
        pFVar34 = local_230;
        uVar39 = 0;
        lVar37 = 0;
        iVar31 = dtNavMesh::getTilesAt
                           (local_230->DetourNavMesh,*(int *)(lVar2 + lVar25 * 0x10),
                            *(int *)(lVar2 + 4 + lVar25 * 0x10),(dtMeshTile **)local_240.Data,uVar19
                           );
        local_1b8 = (longlong)iVar31;
        pFVar38 = pFVar34;
        uVar28 = local_244;
        if (0 < local_1b8) {
          do {
            uVar28 = 0;
            if ((int)uVar39 < local_238[0]) {
              uVar28 = ~uVar39 >> 0x1f;
            }
            if ((uVar28 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pdVar3 = *(dtMeshTile **)(local_240.Data + lVar37 * 8);
            uVar22 = dtNavMesh::getTileRef(pFVar34->DetourNavMesh,pdVar3);
            if (uVar22 != 0) {
              pdVar4 = pdVar3->header;
              local_168._s_0.X =
                   (double)CONCAT44((uint)((ulonglong)pdVar4->bmin[0] >> 0x20) ^ uVar32,
                                    SUB84(pdVar4->bmin[0],0) ^ uVar35);
              local_168._s_0.Z = pdVar4->bmin[1];
              local_168._s_0.Y =
                   (double)CONCAT44((uint)((ulonglong)pdVar4->bmin[2] >> 0x20) ^ uVar32,
                                    SUB84(pdVar4->bmin[2],0) ^ uVar35);
              local_148 = CONCAT44((uint)((ulonglong)pdVar4->bmax[2] >> 0x20) ^ uVar32,
                                   SUB84(pdVar4->bmax[2],0) ^ uVar35);
              local_140 = pdVar4->bmax[1];
              local_150 = CONCAT44((uint)((ulonglong)pdVar4->bmax[0] >> 0x20) ^ uVar32,
                                   SUB84(pdVar4->bmax[0],0) ^ uVar35);
              UE::Math::TBox<double>::TBox<double>
                        ((TBox<double> *)&local_e8._s_0,(TVector<double> *)&local_168._s_0,2);
              dVar16 = local_c0;
              dVar15 = local_c8;
              dVar1 = local_d0;
              uVar14 = local_e8._s_0.Z;
              uVar13 = local_e8._s_0.Y;
              uVar12 = local_e8._s_0.X;
              iVar31 = local_220->ArrayNum;
              pFVar30 = (local_220->AllocatorInstance).Data;
              pFVar33 = pFVar30 + (longlong)iVar31 * 0x38;
              pTVar26 = local_220;
              while( true ) {
                if (pTVar26->ArrayNum != iVar31) {
                  local_245 = 0;
                  `TCheckedPointerIterator<UE::Math::TBox<double>_const_,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(&local_245);
                  pTVar26 = local_220;
                }
                pFVar34 = local_230;
                if (pFVar30 == pFVar33) goto LAB_146e09e73;
                if ((((double)uVar12 < *(double *)(pFVar30 + 0x18) ||
                      (double)uVar12 == *(double *)(pFVar30 + 0x18)) &&
                    (*(double *)pFVar30 <= dVar1)) &&
                   (((double)uVar13 < *(double *)(pFVar30 + 0x20) ||
                     (double)uVar13 == *(double *)(pFVar30 + 0x20) &&
                    (((*(double *)(pFVar30 + 8) <= dVar15 &&
                      ((double)uVar14 < *(double *)(pFVar30 + 0x28) ||
                       (double)uVar14 == *(double *)(pFVar30 + 0x28))) &&
                     (*(double *)(pFVar30 + 0x10) <= dVar16)))))) break;
                pFVar30 = pFVar30 + 0x38;
              }
              pFVar30 = (pTVar8->AllocatorInstance).Data;
              local_228 = uVar22;
              if (((pFVar30 <= (FScriptContainerElement *)&local_228) &&
                  ((FScriptContainerElement *)&local_228 < pFVar30 + (longlong)pTVar8->ArrayMax * 8)
                  ) && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar18)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar31 = pTVar8->ArrayNum;
              if (iVar31 == pTVar8->ArrayMax) {
                iVar31 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
              }
              pTVar8->ArrayNum = iVar31 + 1;
              *(ulong64 *)((pTVar8->AllocatorInstance).Data + (longlong)iVar31 * 8) = local_228;
              pFVar34 = local_230;
            }
LAB_146e09e73:
            uVar39 = uVar39 + 1;
            lVar37 = lVar37 + 1;
            pFVar38 = local_230;
            uVar28 = local_244;
          } while (lVar37 < local_1b8);
        }
      }
      TStack_1a8.UnvisitedBitMask = TStack_1a8.UnvisitedBitMask & ~TStack_1a8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a8);
    }
    if (local_240.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_240.Data);
    }
    local_f0 = 0;
    if (local_f8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_f8);
    }
    TSparseArray<TSparseSetElement<UE::Math::TIntPoint<int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<UE::Math::TIntPoint<int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<UE::Math::TIntPoint<int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_138);
  }
  return;
}

// GetPolyAreaID @ 146e0bbf0

uint __thiscall FPImplRecastNavMesh::GetPolyAreaID(FPImplRecastNavMesh *this,ulong64 param_1)

{
  uint uVar1;
  dtPoly *local_res8 [2];
  dtMeshTile *local_res18 [2];
  
  if (this->DetourNavMesh != (dtNavMesh *)0x0) {
    uVar1 = dtNavMesh::getTileAndPolyByRef(this->DetourNavMesh,param_1,local_res18,local_res8);
    if ((uVar1 >> 0x1e & 1) != 0) {
      return local_res8[0]->areaAndtype & 0x3f;
    }
  }
  return 0;
}

// GetPolyCenter @ 146e0bc60

bool __thiscall
FPImplRecastNavMesh::GetPolyCenter
          (FPImplRecastNavMesh *this,ulong64 param_1,TVector<double> *param_2)

{
  byte bVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ushort *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  double *pdVar12;
  uint uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  dtMeshTile *local_res8;
  dtPoly *local_res20;
  
  if ((this->DetourNavMesh == (dtNavMesh *)0x0) ||
     (uVar3 = dtNavMesh::getTileAndPolyByRef(this->DetourNavMesh,param_1,&local_res8,&local_res20),
     (uVar3 >> 0x1e & 1) == 0)) {
    return false;
  }
  dVar15 = 0.0;
  lVar10 = 0;
  uVar3 = 0;
  dVar16 = 0.0;
  dVar14 = 0.0;
  dVar2 = 0.0;
  bVar1 = local_res20->vertCount;
  uVar13 = (uint)bVar1;
  if (bVar1 < 4) {
    if (bVar1 == 0) goto LAB_146e0bdc1;
    pdVar12 = local_res8->verts;
  }
  else {
    puVar9 = local_res20->verts + 1;
    pdVar12 = local_res8->verts;
    uVar4 = (bVar1 - 4 >> 2) + 1;
    uVar11 = (ulonglong)uVar4;
    uVar3 = uVar4 * 4;
    lVar10 = (ulonglong)uVar4 * 4;
    do {
      uVar5 = (ulonglong)puVar9[-1];
      uVar6 = (ulonglong)*puVar9;
      uVar7 = (ulonglong)puVar9[1];
      uVar8 = (ulonglong)puVar9[2];
      puVar9 = puVar9 + 4;
      dVar15 = dVar15 + pdVar12[uVar5 * 3] + pdVar12[uVar6 * 3] + pdVar12[uVar7 * 3] +
               pdVar12[uVar8 * 3];
      dVar16 = dVar16 + pdVar12[uVar5 * 3 + 1] + pdVar12[uVar6 * 3 + 1] + pdVar12[uVar7 * 3 + 1] +
               pdVar12[uVar8 * 3 + 1];
      dVar2 = dVar2 + pdVar12[uVar5 * 3 + 2] + pdVar12[uVar6 * 3 + 2] + pdVar12[uVar7 * 3 + 2] +
              pdVar12[uVar8 * 3 + 2];
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
    dVar14 = dVar2;
    if (uVar13 <= uVar3) goto LAB_146e0bdc1;
  }
  puVar9 = local_res20->verts + lVar10;
  uVar11 = (ulonglong)(uVar13 - uVar3);
  dVar2 = dVar14;
  do {
    uVar5 = (ulonglong)*puVar9;
    puVar9 = puVar9 + 1;
    dVar15 = dVar15 + pdVar12[uVar5 * 3];
    dVar16 = dVar16 + pdVar12[uVar5 * 3 + 1];
    dVar2 = dVar2 + pdVar12[uVar5 * 3 + 2];
    uVar11 = uVar11 - 1;
  } while (uVar11 != 0);
LAB_146e0bdc1:
  dVar14 = (double)(__real_3f800000 / (float)uVar13);
  uVar3 = (uint)__xmm_80000000000000008000000000000000;
  uVar13 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  (param_2->field0_0x0)._s_0.X =
       (double)CONCAT44((uint)((ulonglong)(dVar14 * dVar15) >> 0x20) ^ uVar13,
                        SUB84(dVar14 * dVar15,0) ^ uVar3);
  (param_2->field0_0x0)._s_0.Y =
       (double)CONCAT44((uint)((ulonglong)(dVar14 * dVar2) >> 0x20) ^ uVar13,
                        SUB84(dVar14 * dVar2,0) ^ uVar3);
  (param_2->field0_0x0)._s_0.Z = dVar14 * dVar16;
  return true;
}

// GetPolyData @ 146e0be40

bool __thiscall
FPImplRecastNavMesh::GetPolyData
          (FPImplRecastNavMesh *this,ulong64 param_1,ushort *param_2,uchar *param_3)

{
  uint uVar1;
  dtPoly *local_res8;
  dtMeshTile *local_18 [2];
  
  if (this->DetourNavMesh != (dtNavMesh *)0x0) {
    uVar1 = dtNavMesh::getTileAndPolyByRef(this->DetourNavMesh,param_1,local_18,&local_res8);
    if ((uVar1 >> 0x1e & 1) != 0) {
      *param_2 = local_res8->flags;
      *param_3 = local_res8->areaAndtype & 0x3f;
      return true;
    }
  }
  return false;
}

// GetPolyEdges @ 146e0bed0

bool __thiscall
FPImplRecastNavMesh::GetPolyEdges
          (FPImplRecastNavMesh *this,ulong64 param_1,
          TArray<FNavigationPortalEdge,TSizedDefaultAllocator<32>_> *param_2)

{
  byte bVar1;
  byte bVar2;
  double *pdVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  dtLink *pdVar13;
  dtMeshTile *pdVar14;
  dtPoly *pdVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  dtPoly *local_res8;
  dtMeshTile *local_res20;
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulong64 local_38;
  
  if (this->DetourNavMesh != (dtNavMesh *)0x0) {
    local_res8 = (dtPoly *)0x0;
    local_res20 = (dtMeshTile *)0x0;
    uVar9 = dtNavMesh::getTileAndPolyByRef(this->DetourNavMesh,param_1,&local_res20,&local_res8);
    if ((uVar9 >> 0x1e & 1) != 0) {
      uVar9 = local_res8->firstLink;
      bVar1 = local_res8->areaAndtype;
      if (uVar9 != 0xffffffff) {
        uVar19 = (uint)__xmm_80000000000000008000000000000000;
        uVar20 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
        pdVar14 = local_res20;
        pdVar15 = local_res8;
        do {
          uVar16 = (uint)pdVar14->header->maxLinkCount;
          if (uVar9 < uVar16) {
            pdVar13 = pdVar14->links + uVar9;
          }
          else {
            pdVar13 = (pdVar14->dynamicLinksO).m_data + (int)(uVar9 - uVar16);
          }
          bVar2 = pdVar13->edge;
          if (bVar2 < pdVar15->vertCount) {
            pdVar3 = pdVar14->verts;
            uVar11 = (ulonglong)pdVar15->verts[bVar2];
            uVar17 = SUB84(pdVar3[uVar11 * 3],0) ^ uVar19;
            uVar18 = (uint)((ulonglong)pdVar3[uVar11 * 3] >> 0x20) ^ uVar20;
            local_58 = pdVar3[uVar11 * 3 + 1];
            uVar9 = SUB84(pdVar3[uVar11 * 3 + 2],0) ^ uVar19;
            uVar16 = (uint)((ulonglong)pdVar3[uVar11 * 3 + 2] >> 0x20) ^ uVar20;
            local_68 = CONCAT44(uVar18,uVar17);
            uStack_60 = CONCAT44(uVar16,uVar9);
            uStack_40 = local_58;
            if (bVar1 < 0x40) {
              uVar11 = (ulonglong)pdVar15->verts[(int)((bVar2 + 1) % (uint)pdVar15->vertCount)];
              pdVar3 = pdVar14->verts;
              uVar9 = SUB84(pdVar3[uVar11 * 3 + 2],0) ^ uVar19;
              uVar16 = (uint)((ulonglong)pdVar3[uVar11 * 3 + 2] >> 0x20) ^ uVar20;
              uStack_40 = pdVar3[uVar11 * 3 + 1];
              uVar17 = SUB84(pdVar3[uVar11 * 3],0) ^ uVar19;
              uVar18 = (uint)((ulonglong)pdVar3[uVar11 * 3] >> 0x20) ^ uVar20;
            }
            local_38 = pdVar13->ref;
            pFVar4 = (param_2->AllocatorInstance).Data;
            uStack_50 = CONCAT44(uVar18,uVar17);
            local_48 = CONCAT44(uVar16,uVar9);
            if (((pFVar4 <= (FScriptContainerElement *)&local_68) &&
                ((FScriptContainerElement *)&local_68 < pFVar4 + (longlong)param_2->ArrayMax * 0x38)
                ) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar7)) {
              pcVar6 = (code *)swi(3);
              uVar8 = (*pcVar6)();
              return (bool)uVar8;
            }
            iVar10 = param_2->ArrayNum;
            if (iVar10 == param_2->ArrayMax) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x838,&param_2->AllocatorInstance,&param_2->ArrayMax);
            }
            param_2->ArrayNum = iVar10 + 1;
            lVar12 = (longlong)iVar10 * 0x38;
            pFVar5 = (param_2->AllocatorInstance).Data;
            *(undefined8 *)(pFVar5 + lVar12) = local_68;
            *(undefined8 *)(pFVar5 + lVar12 + 8) = uStack_60;
            *(double *)(pFVar5 + lVar12 + 0x10) = local_58;
            *(undefined8 *)(pFVar5 + lVar12 + 0x10 + 8) = uStack_50;
            pFVar4 = pFVar5 + lVar12 + 0x20;
            *(undefined4 *)pFVar4 = (undefined4)local_48;
            *(undefined4 *)(pFVar4 + 4) = local_48._4_4_;
            *(undefined4 *)(pFVar4 + 8) = (undefined4)uStack_40;
            *(undefined4 *)(pFVar4 + 0xc) = uStack_40._4_4_;
            *(ulong64 *)(pFVar5 + lVar12 + 0x30) = local_38;
            pdVar14 = local_res20;
            pdVar15 = local_res8;
          }
          uVar9 = pdVar13->next;
        } while (uVar9 != 0xffffffff);
      }
      return true;
    }
  }
  return false;
}

// GetPolyNeighbors @ 146e0c470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FPImplRecastNavMesh::GetPolyNeighbors
          (FPImplRecastNavMesh *this,ulong64 param_1,
          TArray<FNavigationPortalEdge,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  dtLink *pdVar9;
  dtNavMeshQuery *this_00;
  uint uVar10;
  uint uVar11;
  undefined1 auStackY_1b8 [32];
  uchar local_168;
  uchar local_167 [7];
  dtPoly *local_160;
  dtMeshTile *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  ulong64 local_120;
  dtNavMeshQuery local_118;
  double local_78;
  undefined8 local_70;
  undefined8 local_68;
  double local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  if (this->DetourNavMesh != (dtNavMesh *)0x0) {
    local_160 = (dtPoly *)0x0;
    local_158 = (dtMeshTile *)0x0;
    uVar5 = dtNavMesh::getTileAndPolyByRef(this->DetourNavMesh,param_1,&local_158,&local_160);
    if ((uVar5 >> 0x1e & 1) != 0) {
      dtNavMeshQuery::dtNavMeshQuery(&local_118);
      bVar3 = IsInGameThread();
      this_00 = &this->SharedNavQuery;
      if (!bVar3) {
        this_00 = &local_118;
      }
      dtNavMeshQuery::init(this_00,this->DetourNavMesh,0x800,(dtQuerySpecialLinkFilter *)0x0);
      uVar5 = local_160->firstLink;
      if (uVar5 != 0xffffffff) {
        uVar10 = (uint)__xmm_80000000000000008000000000000000;
        uVar11 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
        do {
          uVar6 = (uint)local_158->header->maxLinkCount;
          if (uVar5 < uVar6) {
            pdVar9 = local_158->links + uVar5;
          }
          else {
            pdVar9 = (local_158->dynamicLinksO).m_data + (int)(uVar5 - uVar6);
          }
          uVar5 = pdVar9->next;
          uVar6 = dtNavMeshQuery::getPortalPoints
                            (this_00,param_1,pdVar9->ref,&local_78,&local_60,local_167,&local_168);
          if ((uVar6 >> 0x1e & 1) != 0) {
            local_120 = pdVar9->ref;
            pFVar1 = (param_2->AllocatorInstance).Data;
            local_150 = CONCAT44((uint)((ulonglong)local_78 >> 0x20) ^ uVar11,
                                 SUB84(local_78,0) ^ uVar10);
            local_140 = local_70;
            uStack_148 = CONCAT44((uint)((ulonglong)local_68 >> 0x20) ^ uVar11,
                                  (uint)local_68 ^ uVar10);
            local_130 = CONCAT44((uint)((ulonglong)local_50 >> 0x20) ^ uVar11,
                                 (uint)local_50 ^ uVar10);
            uStack_128 = local_58;
            uStack_138 = CONCAT44((uint)((ulonglong)local_60 >> 0x20) ^ uVar11,
                                  SUB84(local_60,0) ^ uVar10);
            if (((pFVar1 <= (FScriptContainerElement *)&local_150) &&
                ((FScriptContainerElement *)&local_150 < pFVar1 + (longlong)param_2->ArrayMax * 0x38
                )) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar3)) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
            iVar7 = param_2->ArrayNum;
            if (iVar7 == param_2->ArrayMax) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x838,&param_2->AllocatorInstance,&param_2->ArrayMax);
            }
            param_2->ArrayNum = iVar7 + 1;
            lVar8 = (longlong)iVar7 * 0x38;
            pFVar1 = (param_2->AllocatorInstance).Data;
            *(undefined8 *)(pFVar1 + lVar8) = local_150;
            *(undefined8 *)(pFVar1 + lVar8 + 8) = uStack_148;
            *(undefined8 *)(pFVar1 + lVar8 + 0x10) = local_140;
            *(undefined8 *)(pFVar1 + lVar8 + 0x10 + 8) = uStack_138;
            *(undefined8 *)(pFVar1 + lVar8 + 0x20) = local_130;
            *(undefined8 *)(pFVar1 + lVar8 + 0x20 + 8) = uStack_128;
            *(ulong64 *)(pFVar1 + lVar8 + 0x30) = local_120;
          }
        } while (uVar5 != 0xffffffff);
      }
      dtNavMeshQuery::~dtNavMeshQuery(&local_118);
      return true;
    }
  }
  return false;
}

// GetPolyNeighbors @ 146e0c700

bool __thiscall
FPImplRecastNavMesh::GetPolyNeighbors
          (FPImplRecastNavMesh *this,ulong64 param_1,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  dtLink *pdVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  dtLink *pdVar9;
  dtPoly *local_res8;
  dtMeshTile *local_res20;
  
  if (this->DetourNavMesh != (dtNavMesh *)0x0) {
    local_res8 = (dtPoly *)0x0;
    local_res20 = (dtMeshTile *)0x0;
    uVar6 = dtNavMesh::getTileAndPolyByRef(this->DetourNavMesh,param_1,&local_res20,&local_res8);
    if ((uVar6 >> 0x1e & 1) != 0) {
      piVar1 = &param_2->ArrayMax;
      uVar6 = local_res8->firstLink;
      if (param_2->ArrayMax < 6) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,6,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
      }
      while( true ) {
        if (uVar6 == 0xffffffff) {
          return true;
        }
        uVar8 = (uint)local_res20->header->maxLinkCount;
        if (uVar6 < uVar8) {
          pdVar9 = local_res20->links + uVar6;
        }
        else {
          pdVar9 = (local_res20->dynamicLinksO).m_data + (int)(uVar6 - uVar8);
        }
        pdVar2 = (dtLink *)(param_2->AllocatorInstance).Data;
        uVar6 = pdVar9->next;
        if (((pdVar2 <= pdVar9) && (pdVar9 < (dtLink *)(&pdVar2->ref + *piVar1))) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) break;
        iVar7 = param_2->ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_2->AllocatorInstance,piVar1);
          param_2->ArrayNum = iVar7;
        }
        param_2->ArrayNum = iVar7 + 1;
        *(ulong64 *)((param_2->AllocatorInstance).Data + (longlong)iVar7 * 8) = pdVar9->ref;
      }
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  return false;
}

// GetPolySurfaceArea @ 146e0c8a0

double __thiscall FPImplRecastNavMesh::GetPolySurfaceArea(FPImplRecastNavMesh *this,ulong64 param_1)

{
  ushort *puVar1;
  double dVar2;
  double dVar3;
  ushort uVar4;
  double *pdVar5;
  double dVar6;
  dtPoly *pdVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  ushort *puVar13;
  ulonglong uVar14;
  dtMeshTile *local_res8;
  dtPoly *local_res18;
  
  if (this->DetourNavMesh != (dtNavMesh *)0x0) {
    local_res18 = (dtPoly *)0x0;
    local_res8 = (dtMeshTile *)0x0;
    uVar8 = dtNavMesh::getTileAndPolyByRef(this->DetourNavMesh,param_1,&local_res8,&local_res18);
    if ((uVar8 >> 0x1e & 1) != 0) {
      dVar2 = 0.0;
      dVar6 = 0.0;
      uVar14 = (ulonglong)local_res18->vertCount;
      if (2 < uVar14) {
        lVar10 = 2;
        pdVar5 = local_res8->verts;
        if (uVar14 < 6) {
          uVar11 = (ulonglong)local_res18->verts[0];
        }
        else {
          uVar11 = (ulonglong)local_res18->verts[0];
          dVar2 = pdVar5[uVar11 * 3 + 2];
          lVar12 = (uVar14 - 6 >> 2) + 1;
          dVar3 = pdVar5[uVar11 * 3];
          lVar10 = lVar12 * 4 + 2;
          pdVar7 = local_res18;
          do {
            uVar9 = (ulonglong)(ushort)((dtPoly *)(pdVar7->verts + 2))->firstLink;
            dVar6 = dVar6 + ((pdVar5[(ulonglong)pdVar7->verts[1] * 3 + 2] - dVar2) *
                             (pdVar5[uVar9 * 3] - dVar3) -
                            (pdVar5[(ulonglong)pdVar7->verts[1] * 3] - dVar3) *
                            (pdVar5[uVar9 * 3 + 2] - dVar2)) +
                    ((pdVar5[(ulonglong)pdVar7->verts[3] * 3] - dVar3) *
                     (pdVar5[uVar9 * 3 + 2] - dVar2) -
                    (pdVar5[(ulonglong)pdVar7->verts[3] * 3 + 2] - dVar2) *
                    (pdVar5[uVar9 * 3] - dVar3)) +
                    ((pdVar5[(ulonglong)pdVar7->verts[4] * 3] - dVar3) *
                     (pdVar5[(ulonglong)pdVar7->verts[3] * 3 + 2] - dVar2) -
                    (pdVar5[(ulonglong)pdVar7->verts[4] * 3 + 2] - dVar2) *
                    (pdVar5[(ulonglong)pdVar7->verts[3] * 3] - dVar3)) +
                    ((pdVar5[(ulonglong)pdVar7->verts[5] * 3] - dVar3) *
                     (pdVar5[(ulonglong)pdVar7->verts[4] * 3 + 2] - dVar2) -
                    (pdVar5[(ulonglong)pdVar7->verts[5] * 3 + 2] - dVar2) *
                    (pdVar5[(ulonglong)pdVar7->verts[4] * 3] - dVar3));
            lVar12 = lVar12 + -1;
            pdVar7 = (dtPoly *)(pdVar7->verts + 2);
          } while (lVar12 != 0);
          dVar2 = dVar6;
          if ((longlong)uVar14 <= lVar10) {
            return dVar6;
          }
        }
        puVar13 = local_res18->verts + lVar10;
        lVar10 = uVar14 - lVar10;
        dVar6 = dVar2;
        do {
          puVar1 = puVar13 + -1;
          uVar4 = *puVar13;
          puVar13 = puVar13 + 1;
          dVar6 = dVar6 + ((pdVar5[(ulonglong)*puVar1 * 3 + 2] - pdVar5[uVar11 * 3 + 2]) *
                           (pdVar5[(ulonglong)uVar4 * 3] - pdVar5[uVar11 * 3]) -
                          (pdVar5[(ulonglong)uVar4 * 3 + 2] - pdVar5[uVar11 * 3 + 2]) *
                          (pdVar5[(ulonglong)*puVar1 * 3] - pdVar5[uVar11 * 3]));
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      return dVar6;
    }
  }
  return 0.0;
}

// GetPolyTileIndex @ 146e0cbd0

bool __thiscall
FPImplRecastNavMesh::GetPolyTileIndex
          (FPImplRecastNavMesh *this,ulong64 param_1,uint *param_2,uint *param_3)

{
  dtNavMesh *pdVar1;
  byte bVar2;
  
  pdVar1 = this->DetourNavMesh;
  if ((pdVar1 != (dtNavMesh *)0x0) && (param_1 != 0)) {
    bVar2 = (byte)pdVar1->m_polyBits;
    *param_3 = (int)(1L << ((byte)pdVar1->m_tileBits & 0x3f)) - 1U &
               (uint)(param_1 >> (bVar2 & 0x3f));
    *param_2 = (int)(1L << (bVar2 & 0x3f)) - 1U & (uint)param_1;
    return true;
  }
  return false;
}

// GetPolyTileRef @ 146e0cc40

bool __thiscall
FPImplRecastNavMesh::GetPolyTileRef
          (FPImplRecastNavMesh *this,ulong64 param_1,uint *param_2,FNavTileRef *param_3)

{
  uint uVar1;
  dtNavMesh *pdVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  
  pdVar2 = this->DetourNavMesh;
  if ((pdVar2 != (dtNavMesh *)0x0) && (param_1 != 0)) {
    uVar1 = pdVar2->m_saltBits;
    bVar5 = (byte)pdVar2->m_polyBits;
    bVar3 = (byte)pdVar2->m_tileBits;
    *param_2 = (1 << (bVar5 & 0x3f)) - 1U & (uint)param_1;
    bVar4 = (byte)this->DetourNavMesh->m_polyBits;
    param_3->TileRef =
         (ulonglong)((1 << ((byte)uVar1 & 0x3f)) - 1U & (uint)(param_1 >> (bVar5 + bVar3 & 0x3f)))
         << ((char)this->DetourNavMesh->m_tileBits + bVar4 & 0x3f) |
         (ulonglong)((int)(1L << (bVar3 & 0x3f)) - 1U & (uint)(param_1 >> (bVar5 & 0x3f))) <<
         (bVar4 & 0x3f);
    return true;
  }
  return false;
}

// GetPolyVerts @ 146e0cd40

bool __thiscall
FPImplRecastNavMesh::GetPolyVerts
          (FPImplRecastNavMesh *this,ulong64 param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  byte bVar3;
  FScriptContainerElement *pFVar4;
  double *pdVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  dtPoly *local_res8;
  dtMeshTile *local_res20;
  undefined8 local_38;
  undefined8 uStack_30;
  double local_28;
  
  if ((this->DetourNavMesh == (dtNavMesh *)0x0) ||
     (uVar12 = dtNavMesh::getTileAndPolyByRef(this->DetourNavMesh,param_1,&local_res20,&local_res8),
     (uVar12 >> 0x1e & 1) == 0)) {
    return false;
  }
  uVar16 = 0;
  piVar1 = &param_2->ArrayMax;
  bVar3 = local_res8->vertCount;
  param_2->ArrayNum = 0;
  if (*piVar1 < (int)(uint)bVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,(uint)bVar3,&param_2->AllocatorInstance,0,piVar1);
  }
  if (local_res8->vertCount != '\0') {
    uVar12 = (uint)__xmm_80000000000000008000000000000000;
    uVar17 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    do {
      uVar14 = (ulonglong)local_res8->verts[uVar16];
      pFVar4 = (param_2->AllocatorInstance).Data;
      pdVar5 = local_res20->verts;
      local_38 = CONCAT44((uint)((ulonglong)pdVar5[uVar14 * 3] >> 0x20) ^ uVar17,
                          SUB84(pdVar5[uVar14 * 3],0) ^ uVar12);
      uStack_30 = CONCAT44((uint)((ulonglong)pdVar5[uVar14 * 3 + 2] >> 0x20) ^ uVar17,
                           SUB84(pdVar5[uVar14 * 3 + 2],0) ^ uVar12);
      local_28 = pdVar5[uVar14 * 3 + 1];
      if (((pFVar4 <= (FScriptContainerElement *)&local_38) &&
          ((FScriptContainerElement *)&local_38 < pFVar4 + (longlong)*piVar1 * 0x18)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar7 = (code *)swi(3);
        uVar11 = (*pcVar7)();
        return (bool)uVar11;
      }
      iVar13 = param_2->ArrayNum;
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&param_2->AllocatorInstance,piVar1);
      }
      uVar15 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar15;
      param_2->ArrayNum = iVar13 + 1;
      pFVar6 = (param_2->AllocatorInstance).Data;
      pFVar4 = pFVar6 + (longlong)iVar13 * 0x18;
      *(undefined8 *)pFVar4 = local_38;
      *(undefined8 *)(pFVar4 + 8) = uStack_30;
      *(double *)(pFVar6 + (longlong)iVar13 * 0x18 + 0x10) = local_28;
    } while (uVar15 < local_res8->vertCount);
  }
  if ((local_res8->areaAndtype & 0xc0) == 0x80) {
    pFVar4 = (param_2->AllocatorInstance).Data;
    uVar8 = *(undefined8 *)(pFVar4 + 0x30);
    uVar9 = *(undefined8 *)(pFVar4 + 0x38);
    uVar2 = *(undefined8 *)(pFVar4 + 0x40);
    *(undefined8 *)(pFVar4 + 0x30) = *(undefined8 *)(pFVar4 + 0x48);
    *(undefined8 *)(pFVar4 + 0x38) = *(undefined8 *)(pFVar4 + 0x50);
    *(undefined8 *)(pFVar4 + 0x40) = *(undefined8 *)(pFVar4 + 0x58);
    *(undefined8 *)(pFVar4 + 0x48) = uVar8;
    *(undefined8 *)(pFVar4 + 0x50) = uVar9;
    *(undefined8 *)(pFVar4 + 0x58) = uVar2;
  }
  return true;
}

// GetPolyWallSegments @ 146e0d000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FPImplRecastNavMesh::GetPolyWallSegments
          (FPImplRecastNavMesh *this,ulong64 param_1,FNavigationQueryFilter *param_2,
          UObject *param_3,TArray<FNavigationPortalEdge,TSizedDefaultAllocator<32>_> *param_4)

{
  dtQueryFilter *pdVar1;
  uint *puVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  INavigationQueryFilterInterface *pIVar8;
  FScriptContainerElement *pFVar9;
  ulong64 uVar10;
  code *pcVar11;
  bool bVar12;
  undefined1 uVar13;
  uint uVar14;
  uint uVar15;
  UWorld *pUVar16;
  UClass *pUVar17;
  UNavigationSystemBase *pUVar18;
  undefined8 *puVar19;
  uint uVar20;
  dtNavMeshQuery *this_00;
  Type TVar21;
  wchar_t *pwVar22;
  ulong64 *puVar23;
  UNavigationSystemBase *pUVar24;
  uint uVar25;
  undefined1 auStackY_f98 [32];
  int local_f58 [2];
  UObject *local_f50;
  ulong64 local_f48;
  dtQuerySpecialLinkFilter local_f40;
  UNavigationSystemBase *local_f38;
  FWeakObjectPtr local_f30;
  undefined8 local_f28;
  undefined8 local_f10;
  dtNavMeshQuery local_f08;
  ulong64 local_e68 [64];
  double local_c68 [4];
  undefined8 local_c48 [380];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_f98;
  pIVar8 = (param_2->QueryFilterImpl).Object;
  local_f48 = param_1;
  if (pIVar8 == (INavigationQueryFilterInterface *)0x0) {
    if (FVisualLogger::bIsRecording == 0) {
      return false;
    }
    pwVar22 = L"%hs failed due to passed filter having NULL implementation!";
    TVar21 = Error;
LAB_146e0d07f:
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this->NavMeshOwner,(FName *)&LogNavigation.field_0x4,TVar21,pwVar22);
    return false;
  }
  pdVar1 = (dtQueryFilter *)(pIVar8 + 1);
  if (pdVar1 == (dtQueryFilter *)0x0) {
    if (FVisualLogger::bIsRecording == 0) {
      return false;
    }
    pwVar22 = L"%hs failed due to QueryFilter == nullptr";
    TVar21 = Warning;
    goto LAB_146e0d07f;
  }
  pUVar16 = AActor::GetWorld((AActor *)this->NavMeshOwner);
  pUVar18 = (UNavigationSystemBase *)0x0;
  if ((pUVar16 != (UWorld *)0x0) &&
     (pUVar24 = (pUVar16->NavigationSystem).field0_0x0.DebugPtr,
     pUVar24 != (UNavigationSystemBase *)0x0)) {
    pUVar17 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar7 = (int)pUVar17->_padding_;
    if ((iVar7 <= *(int *)(*(longlong *)&pUVar24->field_0x10 + 0x38)) &&
       (local_f38 = pUVar24,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&pUVar24->field_0x10 + 0x30) + (longlong)iVar7 * 8) ==
       &pUVar17->_padding_)) goto LAB_146e0d0f2;
  }
  local_f38 = pUVar18;
LAB_146e0d0f2:
  local_f40 = (dtQuerySpecialLinkFilter)&___7FRecastSpeciaLinkFilter__6B_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_3);
  }
  local_f30.ObjectIndex = 0;
  local_f30.ObjectSerialNumber = 0;
  local_f50 = param_3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_3);
  }
  FWeakObjectPtr::operator=(&local_f30,(FObjectPtr)&local_f50);
  local_f28 = 0;
  dtNavMeshQuery::dtNavMeshQuery(&local_f08);
  bVar12 = IsInGameThread();
  this_00 = &this->SharedNavQuery;
  if (!bVar12) {
    this_00 = &local_f08;
  }
  dtNavMeshQuery::init(this_00,this->DetourNavMesh,param_2->MaxSearchNodes,&local_f40);
  memset(local_c68,0,0xc00);
  local_f58[0] = 0;
  memset(local_e68,0,0x200);
  uVar14 = dtNavMeshQuery::getPolyWallSegments
                     (this_00,local_f48,pdVar1,local_c68,local_e68,local_f58,0x40);
  if (((byte)(uVar14 >> 0x1e) & 1) == 0) {
    TArray<FNavigationPortalEdge,TSizedDefaultAllocator<32>_>::SetNum(param_4,0,Default);
    bVar12 = false;
  }
  else {
    TArray<FNavigationPortalEdge,TSizedDefaultAllocator<32>_>::SetNum(param_4,local_f58[0],Default);
    if (0 < local_f58[0]) {
      puVar23 = local_e68;
      uVar14 = (uint)__xmm_80000000000000008000000000000000;
      uVar25 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      puVar19 = local_c48;
      pUVar24 = pUVar18;
      do {
        uVar20 = (uint)pUVar18;
        uVar15 = 0;
        if ((int)uVar20 < param_4->ArrayNum) {
          uVar15 = ~uVar20 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar11 = (code *)swi(3);
          uVar13 = (*pcVar11)();
          return (bool)uVar13;
        }
        uVar4 = puVar19[-4];
        pUVar18 = (UNavigationSystemBase *)(ulonglong)(uVar20 + 1);
        uVar5 = puVar19[-2];
        uVar6 = puVar19[-3];
        pFVar9 = (param_4->AllocatorInstance).Data;
        puVar2 = (uint *)(&pUVar24->field_0x0 + (longlong)pFVar9);
        *puVar2 = (uint)uVar4 ^ uVar14;
        puVar2[1] = (uint)((ulonglong)uVar4 >> 0x20) ^ uVar25;
        puVar2[2] = (uint)uVar5 ^ uVar14;
        puVar2[3] = (uint)((ulonglong)uVar5 >> 0x20) ^ uVar25;
        *(undefined8 *)(pFVar9 + (longlong)&pUVar24->field_0x10) = uVar6;
        uVar4 = puVar19[-1];
        uVar5 = puVar19[1];
        local_f10 = *puVar19;
        puVar19 = puVar19 + 6;
        pFVar3 = pFVar9 + (longlong)&pUVar24->field_0x18;
        *(uint *)pFVar3 = (uint)uVar4 ^ uVar14;
        *(uint *)(pFVar3 + 4) = (uint)((ulonglong)uVar4 >> 0x20) ^ uVar25;
        *(uint *)(pFVar3 + 8) = (uint)uVar5 ^ uVar14;
        *(uint *)(pFVar3 + 0xc) = (uint)((ulonglong)uVar5 >> 0x20) ^ uVar25;
        *(undefined8 *)(pFVar9 + (longlong)&pUVar24[1].field_0x0) = local_f10;
        uVar10 = *puVar23;
        puVar23 = puVar23 + 1;
        *(ulong64 *)(pFVar9 + (longlong)&pUVar24[1].field_0x8) = uVar10;
        pUVar24 = (UNavigationSystemBase *)&pUVar24[1].field_0x10;
      } while ((int)(uVar20 + 1) < local_f58[0]);
    }
    bVar12 = true;
  }
  dtNavMeshQuery::~dtNavMeshQuery(&local_f08);
  return bVar12;
}

// GetPolysInTile @ 146e0de10

bool __thiscall
FPImplRecastNavMesh::GetPolysInTile
          (FPImplRecastNavMesh *this,int param_1,
          TArray<FNavPoly,TSizedDefaultAllocator<32>_> *param_2)

{
  ushort uVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  uint uVar6;
  byte bVar7;
  double dVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  dtMeshTile *pdVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ushort uVar18;
  ushort *puVar19;
  longlong lVar20;
  dtPoly *pdVar21;
  double *pdVar22;
  longlong lVar23;
  longlong lVar24;
  uint uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  ulonglong local_a0;
  
  if (((this->DetourNavMesh == (dtNavMesh *)0x0) || (param_1 < 0)) ||
     (iVar11 = dtNavMesh::getMaxTiles(this->DetourNavMesh), iVar11 <= param_1)) {
    return false;
  }
  pdVar12 = dtNavMesh::getTile(this->DetourNavMesh,param_1);
  if ((pdVar12 == (dtMeshTile *)0x0) || (pdVar12->header == (dtMeshHeader *)0x0)) {
    uVar18 = 0;
  }
  else {
    uVar1 = pdVar12->header->offMeshBase;
    local_a0 = (ulonglong)uVar1;
    uVar18 = uVar1;
    if (uVar1 != 0) {
      uVar2 = param_2->ArrayNum;
      TArray<FNavPoly,TSizedDefaultAllocator<32>_>::AddZeroed(param_2,(uint)uVar1);
      dVar8 = __real_3ff0000000000000;
      pdVar21 = pdVar12->polys;
      uVar18 = 0;
      if (uVar1 != 0) {
        lVar24 = (longlong)(int)uVar2 << 5;
        uVar25 = uVar2;
        do {
          uVar17 = (ulonglong)pdVar21->vertCount;
          lVar23 = 0;
          dVar26 = 0.0;
          dVar27 = 0.0;
          dVar28 = 0.0;
          if (uVar17 < 4) {
            if (uVar17 != 0) {
              pdVar22 = pdVar12->verts;
              goto LAB_146e0dfd9;
            }
          }
          else {
            pdVar22 = pdVar12->verts;
            puVar19 = pdVar21->verts + 1;
            lVar20 = (uVar17 - 4 >> 2) + 1;
            lVar23 = lVar20 * 4;
            do {
              uVar13 = (ulonglong)puVar19[-1];
              uVar14 = (ulonglong)*puVar19;
              uVar15 = (ulonglong)puVar19[1];
              uVar16 = (ulonglong)puVar19[2];
              puVar19 = puVar19 + 4;
              dVar26 = (((dVar26 - pdVar22[uVar13 * 3]) - pdVar22[uVar14 * 3]) - pdVar22[uVar15 * 3]
                       ) - pdVar22[uVar16 * 3];
              dVar27 = (((dVar27 - pdVar22[uVar13 * 3 + 2]) - pdVar22[uVar14 * 3 + 2]) -
                       pdVar22[uVar15 * 3 + 2]) - pdVar22[uVar16 * 3 + 2];
              dVar28 = dVar28 + pdVar22[uVar13 * 3 + 1] + pdVar22[uVar14 * 3 + 1] +
                       pdVar22[uVar15 * 3 + 1] + pdVar22[uVar16 * 3 + 1];
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
            if (lVar23 < (longlong)uVar17) {
LAB_146e0dfd9:
              puVar19 = pdVar21->verts + lVar23;
              lVar23 = uVar17 - lVar23;
              do {
                uVar17 = (ulonglong)*puVar19;
                puVar19 = puVar19 + 1;
                dVar26 = dVar26 - pdVar22[uVar17 * 3];
                dVar27 = dVar27 - pdVar22[uVar17 * 3 + 2];
                dVar28 = dVar28 + pdVar22[uVar17 * 3 + 1];
                lVar23 = lVar23 + -1;
              } while (lVar23 != 0);
            }
          }
          uVar6 = 0;
          if ((int)uVar25 < param_2->ArrayNum) {
            uVar6 = ~uVar25 >> 0x1f;
          }
          dVar5 = dVar8 / (double)pdVar21->vertCount;
          if ((uVar6 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            uVar10 = (*pcVar4)();
            return (bool)uVar10;
          }
          pFVar3 = (param_2->AllocatorInstance).Data;
          pdVar21 = pdVar21 + 1;
          bVar7 = (byte)this->DetourNavMesh->m_polyBits;
          *(ulonglong *)(pFVar3 + lVar24) =
               (ulonglong)pdVar12->salt << ((char)this->DetourNavMesh->m_tileBits + bVar7 & 0x3f) |
               (ulonglong)(uVar25 - uVar2) | (ulonglong)(uint)param_1 << (bVar7 & 0x3f);
          *(double *)(pFVar3 + lVar24 + 8) = dVar5 * dVar26;
          *(double *)(pFVar3 + lVar24 + 0x10) = dVar5 * dVar27;
          *(double *)(pFVar3 + lVar24 + 0x18) = dVar5 * dVar28;
          lVar24 = lVar24 + 0x20;
          local_a0 = local_a0 - 1;
          uVar25 = uVar25 + 1;
          uVar18 = uVar1;
        } while (local_a0 != 0);
      }
    }
  }
  return uVar18 != 0;
}

// GetPolysWithinPathingDistance @ 146e0e260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FPImplRecastNavMesh::GetPolysWithinPathingDistance
          (FPImplRecastNavMesh *this,TVector<double> *param_1,double param_2,
          FNavigationQueryFilter *param_3,UObject *param_4,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_5,
          FRecastDebugPathfindingData *param_6)

{
  dtQueryFilter *pdVar1;
  int *piVar2;
  FScriptContainerElement *_Dst;
  undefined8 uVar3;
  UNavigationSystemBase *pUVar4;
  INavigationQueryFilterInterface *pIVar5;
  ARecastNavMesh *pAVar6;
  code *pcVar7;
  uint uVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  UWorld *pUVar12;
  UClass *pUVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  dtNavMeshQuery *this_00;
  undefined1 auStackY_1f8 [32];
  uint local_1b8;
  uint local_1b4 [3];
  ulong64 local_1a8;
  UObject *local_1a0;
  TVector<double> *local_198;
  FRecastDebugPathfindingData *local_190;
  dtQuerySpecialLinkFilter local_188;
  UNavigationSystemBase *local_180;
  FWeakObjectPtr local_178;
  undefined8 local_170;
  uint *local_168;
  uint *local_160;
  double local_158;
  longlong lStack_150;
  double local_148;
  dtNavMeshQuery local_138;
  double local_98;
  double local_90;
  undefined8 local_88;
  double local_80;
  double local_78;
  longlong local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_190 = param_6;
  local_198 = param_1;
  if ((param_2 <= 0.0) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<714170589362784276>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\PImplRecastNavMesh.cpp"
                         ,0x814,
                         "PathingDistance > 0. && \"PathingDistance <= 0 doesn\'t make sense\""),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  local_1b8 = param_3->MaxSearchNodes;
  local_1b4[1] = 0x1000;
  if (((int)local_1b8 < 1) || (0x1000 < (int)local_1b8)) {
    local_168 = &local_1b8;
    local_160 = local_1b4 + 1;
    `FPImplRecastNavMesh::GetPolysWithinPathingDistance'::__l2::<lambda_1>::operator()(&local_168);
  }
  if ((this->DetourNavMesh == (dtNavMesh *)0x0) || (0xfff < local_1b8 - 1)) {
    return false;
  }
  pUVar12 = AActor::GetWorld((AActor *)this->NavMeshOwner);
  if ((pUVar12 != (UWorld *)0x0) &&
     (pUVar4 = (pUVar12->NavigationSystem).field0_0x0.DebugPtr,
     pUVar4 != (UNavigationSystemBase *)0x0)) {
    pUVar13 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar11 = (int)pUVar13->_padding_;
    if ((iVar11 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       (local_180 = pUVar4,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar11 * 8) ==
       &pUVar13->_padding_)) goto LAB_146e0e39c;
  }
  local_180 = (UNavigationSystemBase *)0x0;
LAB_146e0e39c:
  local_188 = (dtQuerySpecialLinkFilter)&___7FRecastSpeciaLinkFilter__6B_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_4);
  }
  local_178.ObjectIndex = 0;
  local_178.ObjectSerialNumber = 0;
  local_1a0 = param_4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_4);
  }
  FWeakObjectPtr::operator=(&local_178,(FObjectPtr)&local_1a0);
  local_170 = 0;
  dtNavMeshQuery::dtNavMeshQuery(&local_138);
  bVar9 = IsInGameThread();
  this_00 = &this->SharedNavQuery;
  if (!bVar9) {
    this_00 = &local_138;
  }
  dtNavMeshQuery::init(this_00,this->DetourNavMesh,local_1b8,&local_188);
  pIVar5 = (param_3->QueryFilterImpl).Object;
  if ((pIVar5 == (INavigationQueryFilterInterface *)0x0) ||
     (pdVar1 = (dtQueryFilter *)(pIVar5 + 1), pdVar1 == (dtQueryFilter *)0x0)) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<714170589362784294>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\PImplRecastNavMesh.cpp"
                       ,0x826,"QueryFilter");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
    bVar9 = false;
  }
  else {
    pAVar6 = this->NavMeshOwner;
    local_148 = (double)pAVar6->_padding_;
    local_158 = (double)pAVar6->_padding_;
    lStack_150 = pAVar6->_padding_;
    local_78 = __real_4290000000000000;
    if (local_148 < __real_4290000000000000) {
      local_78 = (double)pAVar6->VerticalDeviationFromGroundCompensation;
      if (local_78 <= 0.0) {
        local_78 = 0.0;
      }
      local_78 = local_78 + local_148;
    }
    local_98 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&local_198->field0_0x0 >> 0x20) ^
                                __xmm_80000000000000008000000000000000._4_4_,
                                (uint)*(undefined8 *)&local_198->field0_0x0 ^
                                (uint)__xmm_80000000000000008000000000000000);
    uVar3 = *(undefined8 *)((longlong)&local_198->field0_0x0 + 8);
    local_88 = CONCAT44((uint)((ulonglong)uVar3 >> 0x20) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        (uint)uVar3 ^ (uint)__xmm_80000000000000008000000000000000);
    local_90 = (local_198->field0_0x0)._s_0.Z;
    local_1a8 = 0;
    local_80 = local_158;
    local_70 = lStack_150;
    dtNavMeshQuery::findNearestPoly
              (this_00,&local_98,&local_80,pdVar1,&local_1a8,(double *)0x0,(double *)0x0);
    TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::Reset(param_5,local_1b8);
    piVar2 = &param_5->ArrayNum;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_1b8,&param_5->AllocatorInstance,piVar2,&param_5->ArrayMax);
    local_1b4[0] = 0;
    dtNavMeshQuery::findPolysInPathDistance
              (this_00,local_1a8,&local_98,param_2,pdVar1,
               (ulong64 *)(param_5->AllocatorInstance).Data,(int *)local_1b4,local_1b8);
    uVar8 = local_1b4[0];
    lVar15 = (longlong)(int)local_1b4[0];
    uVar16 = *piVar2 - local_1b4[0];
    uVar14 = 0;
    if ((int)(uVar16 + local_1b4[0]) <= *piVar2) {
      uVar14 = (~uVar16 & ~local_1b4[0]) >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar9)) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
    if (uVar16 != 0) {
      _Dst = (param_5->AllocatorInstance).Data + lVar15 * 8;
      iVar11 = (*piVar2 - uVar16) - uVar8;
      if (iVar11 != 0) {
        memmove(_Dst,_Dst + (longlong)(int)uVar16 * 8,(longlong)iVar11 << 3);
      }
      *piVar2 = *piVar2 - uVar16;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&param_5->AllocatorInstance,*piVar2,&param_5->ArrayMax);
    }
    if (local_190 != (FRecastDebugPathfindingData *)0x0) {
      StorePathfindingDebugData(this_00,this->DetourNavMesh,local_190);
    }
    bVar9 = 0 < *piVar2;
  }
  dtNavMeshQuery::~dtNavMeshQuery(&local_138);
  return bVar9;
}

// GetRandomPoint @ 146e0eda0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNavLocation * __thiscall
FPImplRecastNavMesh::GetRandomPoint
          (FPImplRecastNavMesh *this,FNavLocation *__return_storage_ptr__,
          FNavigationQueryFilter *param_1,UObject *param_2)

{
  int iVar1;
  UNavigationSystemBase *pUVar2;
  INavigationQueryFilterInterface *pIVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  UWorld *pUVar8;
  UClass *pUVar9;
  FNavLocation *pFVar10;
  dtQueryFilter *pdVar11;
  dtNavMeshQuery *this_00;
  uint uVar12;
  uint uVar13;
  undefined1 auStackY_158 [32];
  UObject *local_128;
  ulong64 local_120;
  dtQuerySpecialLinkFilter local_118;
  UNavigationSystemBase *local_110;
  FWeakObjectPtr local_108;
  undefined8 local_100;
  dtNavMeshQuery local_f8;
  double local_58;
  double local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_158;
  (__return_storage_ptr__->Location).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Y = (double)uVar5;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  __return_storage_ptr__->NodeRef = 0;
  if (this->DetourNavMesh == (dtNavMesh *)0x0) {
    return __return_storage_ptr__;
  }
  pUVar8 = AActor::GetWorld((AActor *)this->NavMeshOwner);
  if ((pUVar8 != (UWorld *)0x0) &&
     (pUVar2 = (pUVar8->NavigationSystem).field0_0x0.DebugPtr,
     pUVar2 != (UNavigationSystemBase *)0x0)) {
    pUVar9 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar1 = (int)pUVar9->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       (local_110 = pUVar2,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
       &pUVar9->_padding_)) goto LAB_146e0ee3c;
  }
  local_110 = (UNavigationSystemBase *)0x0;
LAB_146e0ee3c:
  local_118 = (dtQuerySpecialLinkFilter)&___7FRecastSpeciaLinkFilter__6B_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_2);
  }
  local_108.ObjectIndex = 0;
  local_108.ObjectSerialNumber = 0;
  local_128 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_2);
  }
  FWeakObjectPtr::operator=(&local_108,(FObjectPtr)&local_128);
  local_100 = 0;
  dtNavMeshQuery::dtNavMeshQuery(&local_f8);
  bVar6 = IsInGameThread();
  this_00 = &this->SharedNavQuery;
  if (!bVar6) {
    this_00 = &local_f8;
  }
  dtNavMeshQuery::init(this_00,this->DetourNavMesh,param_1->MaxSearchNodes,&local_118);
  pIVar3 = (param_1->QueryFilterImpl).Object;
  if ((pIVar3 == (INavigationQueryFilterInterface *)0x0) ||
     (pdVar11 = (dtQueryFilter *)(pIVar3 + 1), pdVar11 == (dtQueryFilter *)0x0)) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<714170589362783983>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\PImplRecastNavMesh.cpp"
                       ,0x6ef,"QueryFilter");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FNavLocation *)(*pcVar4)();
      return pFVar10;
    }
  }
  else {
    uVar7 = dtNavMeshQuery::findRandomPoint
                      (this_00,pdVar11,FGenericPlatformMath::FRand,&local_120,&local_58);
    if ((uVar7 >> 0x1e & 1) != 0) {
      uVar13 = (uint)((ulonglong)local_58 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
      uVar7 = (uint)local_48 ^ (uint)__xmm_80000000000000008000000000000000;
      uVar12 = (uint)((ulonglong)local_48 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
      *(uint *)&(__return_storage_ptr__->Location).field0_0x0 =
           SUB84(local_58,0) ^ (uint)__xmm_80000000000000008000000000000000;
      *(uint *)((longlong)&(__return_storage_ptr__->Location).field0_0x0 + 4) = uVar13;
      *(uint *)((longlong)&(__return_storage_ptr__->Location).field0_0x0 + 8) = uVar7;
      *(uint *)((longlong)&(__return_storage_ptr__->Location).field0_0x0 + 0xc) = uVar12;
      __return_storage_ptr__->NodeRef = local_120;
      (__return_storage_ptr__->Location).field0_0x0._s_0.Z = local_50;
    }
  }
  dtNavMeshQuery::~dtNavMeshQuery(&local_f8);
  return __return_storage_ptr__;
}

// GetRandomPointInCluster @ 146e0f0e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FPImplRecastNavMesh::GetRandomPointInCluster
          (FPImplRecastNavMesh *this,ulong64 param_1,FNavLocation *param_2)

{
  bool bVar1;
  uint uVar2;
  dtNavMeshQuery *this_00;
  uint uVar3;
  undefined1 auStackY_118 [32];
  ulong64 local_e8 [2];
  dtNavMeshQuery local_d8;
  double local_38;
  double local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_118;
  if ((this->DetourNavMesh == (dtNavMesh *)0x0) || (param_1 == 0)) {
    bVar1 = false;
  }
  else {
    dtNavMeshQuery::dtNavMeshQuery(&local_d8);
    bVar1 = IsInGameThread();
    this_00 = &this->SharedNavQuery;
    if (!bVar1) {
      this_00 = &local_d8;
    }
    dtNavMeshQuery::init(this_00,this->DetourNavMesh,0x800,(dtQuerySpecialLinkFilter *)0x0);
    uVar2 = dtNavMeshQuery::findRandomPointInCluster
                      (this_00,param_1,FGenericPlatformMath::FRand,local_e8,&local_38);
    if ((uVar2 >> 0x1e & 1) == 0) {
      dtNavMeshQuery::~dtNavMeshQuery(&local_d8);
      bVar1 = false;
    }
    else {
      uVar2 = (uint)local_28 ^ (uint)__xmm_80000000000000008000000000000000;
      uVar3 = (uint)((ulonglong)local_28 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
      (param_2->Location).field0_0x0._s_0.X =
           (double)CONCAT44((uint)((ulonglong)local_38 >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(local_38,0) ^ (uint)__xmm_80000000000000008000000000000000);
      (param_2->Location).field0_0x0._s_0.Y = (double)CONCAT44(uVar3,uVar2);
      (param_2->Location).field0_0x0._s_0.Z = local_30;
      param_2->NodeRef = local_e8[0];
      dtNavMeshQuery::~dtNavMeshQuery(&local_d8);
      bVar1 = true;
    }
  }
  return bVar1;
}

// GetRandomPointInPoly @ 146e0f7e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FPImplRecastNavMesh::GetRandomPointInPoly
          (FPImplRecastNavMesh *this,ulong64 param_1,TVector<double> *param_2)

{
  bool bVar1;
  uint uVar2;
  dtNavMeshQuery *this_00;
  uint uVar3;
  undefined1 auStack_f8 [32];
  dtNavMeshQuery local_d8;
  double local_38;
  double local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if (this->DetourNavMesh != (dtNavMesh *)0x0) {
    dtNavMeshQuery::dtNavMeshQuery(&local_d8);
    bVar1 = IsInGameThread();
    this_00 = &this->SharedNavQuery;
    if (!bVar1) {
      this_00 = &local_d8;
    }
    dtNavMeshQuery::init(this_00,this->DetourNavMesh,0x800,(dtQuerySpecialLinkFilter *)0x0);
    uVar2 = dtNavMeshQuery::findRandomPointInPoly
                      (this_00,param_1,FGenericPlatformMath::FRand,&local_38);
    if ((uVar2 >> 0x1e & 1) != 0) {
      uVar2 = (uint)local_28 ^ (uint)__xmm_80000000000000008000000000000000;
      uVar3 = (uint)((ulonglong)local_28 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
      (param_2->field0_0x0)._s_0.X =
           (double)CONCAT44((uint)((ulonglong)local_38 >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(local_38,0) ^ (uint)__xmm_80000000000000008000000000000000);
      (param_2->field0_0x0)._s_0.Y = (double)CONCAT44(uVar3,uVar2);
      (param_2->field0_0x0)._s_0.Z = local_30;
      dtNavMeshQuery::~dtNavMeshQuery(&local_d8);
      return true;
    }
    dtNavMeshQuery::~dtNavMeshQuery(&local_d8);
  }
  return false;
}

// GetTileCacheLayer @ 146e11320

FNavMeshTileData * __thiscall
FPImplRecastNavMesh::GetTileCacheLayer
          (FPImplRecastNavMesh *this,FNavMeshTileData *__return_storage_ptr__,int param_1,
          int param_2,int param_3)

{
  undefined8 uVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  double dVar4;
  TIntPoint<int> TVar5;
  bool bVar6;
  TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_> *pTVar7;
  FNavMeshTileData *pFVar8;
  int *piVar9;
  longlong *plVar10;
  
  TVar5.field0_0x0._s_0.Y = param_2;
  TVar5.field0_0x0._s_0.X = param_1;
  pTVar7 = TSet<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                   *)&this->CompressedTileCacheLayers,TVar5);
  plVar10 = (longlong *)&pTVar7->field_0x8;
  if (pTVar7 == (TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
    plVar10 = (longlong *)0x0;
  }
  if (((plVar10 != (longlong *)0x0) && (-1 < param_3)) && (param_3 < (int)plVar10[1])) {
    if ((param_3 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FNavMeshTileData *)(*pcVar3)();
      return pFVar8;
    }
    piVar9 = (int *)((longlong)param_3 * 0x58 + *plVar10);
    __return_storage_ptr__->LayerIndex = *piVar9;
    dVar4 = *(double *)(piVar9 + 4);
    (__return_storage_ptr__->LayerBBox).Min.field0_0x0._s_0.X = *(double *)(piVar9 + 2);
    (__return_storage_ptr__->LayerBBox).Min.field0_0x0._s_0.Y = dVar4;
    dVar4 = *(double *)(piVar9 + 8);
    (__return_storage_ptr__->LayerBBox).Min.field0_0x0._s_0.Z = *(double *)(piVar9 + 6);
    (__return_storage_ptr__->LayerBBox).Max.field0_0x0._s_0.X = dVar4;
    dVar4 = *(double *)(piVar9 + 0xc);
    (__return_storage_ptr__->LayerBBox).Max.field0_0x0._s_0.Y = *(double *)(piVar9 + 10);
    (__return_storage_ptr__->LayerBBox).Max.field0_0x0._s_0.Z = dVar4;
    uVar1 = *(undefined8 *)(piVar9 + 0xe);
    (__return_storage_ptr__->LayerBBox).IsValid = (char)uVar1;
    (__return_storage_ptr__->LayerBBox).Pad[0] = (char)((ulonglong)uVar1 >> 8);
    (__return_storage_ptr__->LayerBBox).Pad[1] = (char)((ulonglong)uVar1 >> 0x10);
    (__return_storage_ptr__->LayerBBox).Pad[2] = (char)((ulonglong)uVar1 >> 0x18);
    (__return_storage_ptr__->LayerBBox).Pad[3] = (char)((ulonglong)uVar1 >> 0x20);
    (__return_storage_ptr__->LayerBBox).Pad[4] = (char)((ulonglong)uVar1 >> 0x28);
    (__return_storage_ptr__->LayerBBox).Pad[5] = (char)((ulonglong)uVar1 >> 0x30);
    (__return_storage_ptr__->LayerBBox).Pad[6] = (char)((ulonglong)uVar1 >> 0x38);
    __return_storage_ptr__->DataSize = piVar9[0x10];
    (__return_storage_ptr__->NavData).Object = *(FNavData **)(piVar9 + 0x12);
    pTVar2 = *(TReferenceControllerBase<1> **)(piVar9 + 0x14);
    (__return_storage_ptr__->NavData).SharedReferenceCount.ReferenceController = pTVar2;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      return __return_storage_ptr__;
    }
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->LayerIndex = 0;
  (__return_storage_ptr__->LayerBBox).IsValid = '\0';
  __return_storage_ptr__->DataSize = 0;
  (__return_storage_ptr__->NavData).Object = (FNavData *)0x0;
  (__return_storage_ptr__->NavData).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetTileCacheLayers @ 146e11520

TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_> * __thiscall
FPImplRecastNavMesh::GetTileCacheLayers
          (FPImplRecastNavMesh *this,
          TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,int param_1,
          int param_2)

{
  int *piVar1;
  int iVar2;
  FNavMeshTileData *pFVar3;
  TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_> *pTVar4;
  TIntPoint<int> TVar5;
  
  TVar5.field0_0x0._s_0.Y = param_2;
  TVar5.field0_0x0._s_0.X = param_1;
  pTVar4 = TSet<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                   *)&this->CompressedTileCacheLayers,TVar5);
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  if (pTVar4 == (TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
    __return_storage_ptr__->ArrayNum = 0;
    *piVar1 = 0;
    return __return_storage_ptr__;
  }
  pFVar3 = *(FNavMeshTileData **)&pTVar4->field_0x8;
  iVar2 = *(int *)&pTVar4->field_0x10;
  __return_storage_ptr__->ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x58,8,iVar2,0,&__return_storage_ptr__->AllocatorInstance,iVar2,piVar1);
  ConstructItems<FNavMeshTileData,FNavMeshTileData,int>
            ((__return_storage_ptr__->AllocatorInstance).Data,pFVar3,iVar2);
  return __return_storage_ptr__;
}

// GetTilePolyEdges @ 146e115e0

void __thiscall
FPImplRecastNavMesh::GetTilePolyEdges
          (FPImplRecastNavMesh *this,dtMeshTile *param_1,bool param_2,bool param_3,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_4,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_5)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  double *pdVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  bool bVar11;
  double dVar12;
  longlong lVar13;
  bool bVar14;
  bool bVar15;
  uint uVar16;
  dtLink *pdVar17;
  uint *puVar18;
  ulonglong uVar19;
  double *pdVar20;
  dtPolyDetail *pdVar21;
  uint uVar22;
  ulonglong uVar23;
  longlong lVar24;
  uchar *puVar25;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar26;
  uint *puVar27;
  double **ppdVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  uint uVar35;
  uint uVar36;
  int local_128;
  uint local_124;
  int local_120;
  longlong local_110;
  longlong local_100;
  double *local_f8 [3];
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  uchar *local_c8;
  double *local_c0;
  dtPolyDetail *local_b8;
  dtMeshTile *local_b0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_a8;
  
  local_a8 = param_4;
  local_b0 = param_1;
  if (!param_3) {
    if (param_2) {
      bVar14 = true;
      goto LAB_146e11665;
    }
    bVar14 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<714170589362785005>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\PImplRecastNavMesh.cpp"
                        ,0xaed,"bGatherInteriorPolyEdges || bGatherExteriorNavMeshEdges");
    if (bVar14) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  bVar14 = false;
LAB_146e11665:
  dVar12 = __real_3f1a36e2d7731900;
  local_120 = 0;
  if (param_1->header->polyCount != 0) {
    uVar35 = (uint)__xmm_80000000000000008000000000000000;
    uVar36 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    local_100 = 0;
    local_110 = 0;
    do {
      puVar27 = (uint *)((longlong)param_1->polys->verts + local_110 + -4);
      if (*(byte *)((longlong)puVar27 + 0x1f) < 0x40) {
        bVar4 = *(byte *)((longlong)puVar27 + 0x1e);
        pdVar21 = param_1->detailMeshes;
        local_b8 = pdVar21;
        local_124 = 0;
        if (bVar4 != 0) {
          puVar18 = puVar27 + 4;
          do {
            if ((bVar14) || (((ushort)*puVar18 != 0 && (-1 < (short)(ushort)*puVar18)))) {
              bVar15 = false;
            }
            else {
              bVar15 = true;
            }
            bVar11 = (bool)(bVar15 ^ 1);
            if ((*(byte *)((longlong)puVar27 + 0x1f) & 0x3f) == 0) {
              uVar7 = (ushort)*puVar18;
              if (uVar7 == 0) {
                bVar15 = true;
                bVar11 = false;
              }
              else if (((-1 < (short)uVar7) && (uVar7 <= param_1->header->offMeshBase)) &&
                      ((param_1->polys[(ulonglong)uVar7 - 1].areaAndtype & 0x3f) != 0)) {
                bVar15 = true;
                bVar11 = false;
              }
            }
            else if ((bVar15) && (uVar22 = *puVar27, uVar22 != 0xffffffff)) {
              do {
                uVar16 = (uint)param_1->header->maxLinkCount;
                if (uVar22 < uVar16) {
                  pdVar17 = param_1->links + uVar22;
                }
                else {
                  pdVar17 = (param_1->dynamicLinksO).m_data + (int)(uVar22 - uVar16);
                }
                uVar22 = pdVar17->next;
                if (pdVar17->edge == local_124) {
                  bVar11 = true;
                  break;
                }
              } while (uVar22 != 0xffffffff);
            }
            if ((((param_2) && (pTVar26 = param_4, bVar11)) ||
                ((param_3 && ((bVar15 && (pTVar26 = param_5, !bVar11)))))) &&
               (pTVar26 != (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0)) {
              pdVar20 = param_1->verts;
              local_c0 = pdVar20;
              local_e0 = (ulonglong)(ushort)puVar18[-3] * 3;
              local_d8 = (ulonglong)
                         *(ushort *)
                          ((longlong)puVar27 +
                          (longlong)((int)(local_124 + 1) % (int)(uint)bVar4) * 2 + 4) * 3;
              local_128 = 0;
              if ((&pdVar21->triCount)[local_100] != '\0') {
                do {
                  lVar13 = local_e0;
                  puVar25 = param_1->detailTris;
                  bVar5 = *(byte *)((longlong)puVar27 + 0x1e);
                  uVar22 = (uint)bVar5;
                  lVar24 = (longlong)
                           (int)(((uint)*(ushort *)((longlong)&pdVar21->triBase + local_100) +
                                 local_128) * 4);
                  local_d0 = lVar24;
                  local_c8 = puVar25;
                  bVar6 = puVar25[lVar24];
                  if (bVar6 < bVar5) {
                    local_f8[0] = param_1->verts +
                                  (ulonglong)
                                  *(ushort *)((longlong)puVar27 + (ulonglong)bVar6 * 2 + 4) * 3;
                  }
                  else {
                    local_f8[0] = param_1->detailVerts +
                                  (int)(((bVar6 - uVar22) +
                                        (uint)*(ushort *)((longlong)&pdVar21->vertBase + local_100))
                                       * 3);
                  }
                  bVar6 = puVar25[lVar24 + 1];
                  if (bVar6 < bVar5) {
                    local_f8[1] = param_1->verts +
                                  (ulonglong)
                                  *(ushort *)((longlong)puVar27 + (ulonglong)bVar6 * 2 + 4) * 3;
                  }
                  else {
                    local_f8[1] = param_1->detailVerts +
                                  (int)(((*(ushort *)((longlong)&pdVar21->vertBase + local_100) -
                                         uVar22) + (uint)bVar6) * 3);
                  }
                  bVar6 = puVar25[lVar24 + 2];
                  if (bVar6 < bVar5) {
                    local_f8[2] = param_1->verts +
                                  (ulonglong)
                                  *(ushort *)((longlong)puVar27 + (ulonglong)bVar6 * 2 + 4) * 3;
                  }
                  else {
                    local_f8[2] = param_1->detailVerts +
                                  (int)(((*(ushort *)((longlong)&pdVar21->vertBase + local_100) -
                                         uVar22) + (uint)bVar6) * 3);
                  }
                  ppdVar28 = local_f8;
                  uVar19 = 2;
                  uVar23 = 0;
                  do {
                    if ((puVar25[lVar24 + 3] >> ((char)uVar19 * '\x02' & 0x1fU) & 3) != 0) {
                      dVar2 = pdVar20[lVar13];
                      dVar3 = pdVar20[lVar13 + 2];
                      dVar31 = pdVar20[local_d8] - dVar2;
                      dVar30 = pdVar20[local_d8 + 2] - dVar3;
                      pdVar8 = local_f8[uVar19];
                      dVar34 = dVar30 * dVar30 + dVar31 * dVar31;
                      dVar33 = (pdVar8[2] - dVar3) * dVar30 + (*pdVar8 - dVar2) * dVar31;
                      if (dVar34 != 0.0) {
                        dVar33 = dVar33 / dVar34;
                      }
                      dVar32 = (dVar30 * dVar33 + dVar3) - pdVar8[2];
                      dVar33 = (dVar31 * dVar33 + dVar2) - *pdVar8;
                      if (dVar32 * dVar32 + dVar33 * dVar33 < dVar12) {
                        dVar33 = (*ppdVar28)[2];
                        dVar32 = **ppdVar28;
                        dVar29 = (dVar33 - dVar3) * dVar30 + (dVar32 - dVar2) * dVar31;
                        if (dVar34 != 0.0) {
                          dVar29 = dVar29 / dVar34;
                        }
                        dVar33 = (dVar30 * dVar29 + dVar3) - dVar33;
                        dVar32 = (dVar31 * dVar29 + dVar2) - dVar32;
                        if (dVar33 * dVar33 + dVar32 * dVar32 < dVar12) {
                          piVar1 = &pTVar26->ArrayNum;
                          uVar16 = UE::Core::Private::
                                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x18,8,2,&pTVar26->AllocatorInstance,piVar1,
                                              &pTVar26->ArrayMax);
                          pFVar9 = (pTVar26->AllocatorInstance).Data;
                          lVar24 = (longlong)(int)uVar16;
                          *(undefined8 *)(pFVar9 + lVar24 * 0x18) = 0;
                          *(undefined8 *)(pFVar9 + lVar24 * 0x18 + 8) = 0;
                          *(undefined8 *)(pFVar9 + lVar24 * 0x18 + 0x10) = 0;
                          *(undefined8 *)(pFVar9 + lVar24 * 0x18 + 0x10 + 8) = 0;
                          *(undefined8 *)(pFVar9 + lVar24 * 0x18 + 0x20) = 0;
                          *(undefined8 *)(pFVar9 + lVar24 * 0x18 + 0x20 + 8) = 0;
                          dVar2 = *pdVar8;
                          dVar3 = pdVar8[2];
                          dVar30 = pdVar8[1];
                          uVar22 = 0;
                          if ((int)uVar16 < *piVar1) {
                            uVar22 = ~uVar16 >> 0x1f;
                          }
                          if ((uVar22 == 0) &&
                             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar15)) {
                            pcVar10 = (code *)swi(3);
                            (*pcVar10)();
                            return;
                          }
                          pFVar9 = (pTVar26->AllocatorInstance).Data;
                          *(ulonglong *)(pFVar9 + lVar24 * 0x18) =
                               CONCAT44((uint)((ulonglong)dVar2 >> 0x20) ^ uVar36,
                                        SUB84(dVar2,0) ^ uVar35);
                          *(ulonglong *)(pFVar9 + lVar24 * 0x18 + 8) =
                               CONCAT44((uint)((ulonglong)dVar3 >> 0x20) ^ uVar36,
                                        SUB84(dVar3,0) ^ uVar35);
                          *(double *)(pFVar9 + lVar24 * 0x18 + 0x10) = dVar30;
                          uVar16 = uVar16 + 1;
                          pdVar20 = *ppdVar28;
                          dVar2 = *pdVar20;
                          dVar3 = pdVar20[2];
                          dVar30 = pdVar20[1];
                          uVar22 = 0;
                          if ((int)uVar16 < *piVar1) {
                            uVar22 = ~uVar16 >> 0x1f;
                          }
                          if ((uVar22 == 0) &&
                             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar15)) {
                            pcVar10 = (code *)swi(3);
                            (*pcVar10)();
                            return;
                          }
                          lVar24 = (longlong)(int)uVar16;
                          pFVar9 = (pTVar26->AllocatorInstance).Data;
                          *(ulonglong *)(pFVar9 + lVar24 * 0x18) =
                               CONCAT44((uint)((ulonglong)dVar2 >> 0x20) ^ uVar36,
                                        SUB84(dVar2,0) ^ uVar35);
                          *(ulonglong *)(pFVar9 + lVar24 * 0x18 + 8) =
                               CONCAT44((uint)((ulonglong)dVar3 >> 0x20) ^ uVar36,
                                        SUB84(dVar3,0) ^ uVar35);
                          *(double *)(pFVar9 + lVar24 * 0x18 + 0x10) = dVar30;
                          pdVar20 = local_c0;
                          lVar24 = local_d0;
                          puVar25 = local_c8;
                        }
                      }
                    }
                    ppdVar28 = ppdVar28 + 1;
                    uVar22 = (int)uVar23 + 1;
                    uVar19 = uVar23;
                    uVar23 = (ulonglong)uVar22;
                  } while ((int)uVar22 < 3);
                  local_128 = local_128 + 1;
                  pdVar21 = local_b8;
                  param_1 = local_b0;
                  param_4 = local_a8;
                } while (local_128 < (int)(uint)(&local_b8->triCount)[local_100]);
              }
            }
            local_124 = local_124 + 1;
            puVar18 = (uint *)((longlong)puVar18 + 2);
          } while ((int)local_124 < (int)(uint)bVar4);
        }
      }
      local_110 = local_110 + 0x20;
      local_120 = local_120 + 1;
      local_100 = local_100 + 6;
    } while (local_120 < (int)(uint)param_1->header->polyCount);
  }
  return;
}

// GetTilePolyEdgesForFilter @ 146e11e30

void __thiscall
FPImplRecastNavMesh::GetTilePolyEdgesForFilter
          (FPImplRecastNavMesh *this,dtMeshTile *param_1,FNavigationQueryFilter *param_2,
          TArray<FNavigationWallEdge,TSizedDefaultAllocator<32>_> *param_3)

{
  INavigationQueryFilterInterface *pIVar1;
  byte bVar2;
  ushort uVar3;
  INavigationQueryFilterInterface *pIVar4;
  double *pdVar5;
  FScriptContainerElement *pFVar6;
  dtPoly *pdVar7;
  double dVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  ulong64 uVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  dtLink *pdVar18;
  uint uVar19;
  uint *puVar20;
  uint *puVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  uint uVar32;
  uint uVar33;
  int local_e4;
  dtPoly *local_e0;
  dtMeshTile *local_d8;
  ulong64 local_d0;
  ulonglong local_c8;
  longlong local_c0;
  
  dVar8 = __real_47efffffe0000000;
  pIVar4 = (param_2->QueryFilterImpl).Object;
  if ((pIVar4 != (INavigationQueryFilterInterface *)0x0) &&
     (local_e4 = 0, param_1->header->polyCount != 0)) {
    pIVar1 = pIVar4 + 1;
    uVar32 = (uint)__xmm_80000000000000008000000000000000;
    uVar33 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    local_c8 = 0;
    local_c0 = 0;
    do {
      uVar15 = local_c8;
      uVar19 = 0;
      puVar20 = (uint *)((longlong)param_1->polys->verts + local_c0 + -4);
      if (*(byte *)((longlong)puVar20 + 0x1f) < 0x40) {
        local_d0 = dtNavMesh::getPolyRefBase(this->DetourNavMesh,param_1);
        if (pIVar1 == (INavigationQueryFilterInterface *)0x0) {
          bVar9 = *(byte *)((longlong)puVar20 + 0x1f) & 0x3f;
        }
        else if (*(char *)(pIVar4 + 0x85) == '\0') {
          if (((((*(ushort *)(pIVar4 + 0x84) & (ushort)puVar20[7]) == 0) ||
               ((*(ushort *)&pIVar4[0x84].field_0x2 & (ushort)puVar20[7]) != 0)) ||
              (uVar13 = (ulonglong)(*(byte *)((longlong)puVar20 + 0x1f) & 0x3f),
              dVar8 < (double)pIVar4[uVar13 + 2] || dVar8 == (double)pIVar4[uVar13 + 2])) ||
             (dVar8 < (double)pIVar4[uVar13 + 0x42] || dVar8 == (double)pIVar4[uVar13 + 0x42])) {
            bVar9 = 0;
          }
          else {
            bVar9 = 1;
          }
        }
        else {
          bVar9 = (**(code **)((longlong)*pIVar1 + 8))(pIVar1,uVar15 | local_d0,param_1,puVar20);
        }
        bVar2 = *(byte *)((longlong)puVar20 + 0x1e);
        if (bVar2 != 0) {
          puVar21 = puVar20 + 1;
          do {
            uVar3 = (ushort)puVar21[3];
            if (bVar9 == 0) {
              if ((short)uVar3 < 0) {
                uVar11 = *puVar20;
                if (uVar11 != 0xffffffff) {
                  do {
                    uVar17 = (uint)param_1->header->maxLinkCount;
                    if (uVar11 < uVar17) {
                      pdVar18 = param_1->links + uVar11;
                    }
                    else {
                      pdVar18 = (param_1->dynamicLinksO).m_data + (int)(uVar11 - uVar17);
                    }
                    if (pdVar18->edge == uVar19) {
                      uVar11 = dtNavMesh::getTileAndPolyByRef
                                         (this->DetourNavMesh,pdVar18->ref,&local_d8,&local_e0);
                      if ((((uVar11 >> 0x1e & 1) != 0) && (local_e0 != (dtPoly *)0x0)) &&
                         (local_d8 != (dtMeshTile *)0x0)) {
                        uVar14 = dtNavMesh::getPolyRefBase(this->DetourNavMesh,local_d8);
                        if (pIVar1 == (INavigationQueryFilterInterface *)0x0) {
                          bVar10 = local_e0->areaAndtype & 0x3f;
                        }
                        else if (*(char *)(pIVar4 + 0x85) == '\0') {
                          if (((((*(ushort *)(pIVar4 + 0x84) & local_e0->flags) == 0) ||
                               ((*(ushort *)&pIVar4[0x84].field_0x2 & local_e0->flags) != 0)) ||
                              (uVar15 = (ulonglong)(local_e0->areaAndtype & 0x3f),
                              dVar8 < (double)pIVar4[uVar15 + 2] ||
                              dVar8 == (double)pIVar4[uVar15 + 2])) ||
                             (dVar8 < (double)pIVar4[uVar15 + 0x42] ||
                              dVar8 == (double)pIVar4[uVar15 + 0x42])) {
                            bVar10 = 0;
                          }
                          else {
                            bVar10 = 1;
                          }
                        }
                        else {
                          bVar10 = (**(code **)((longlong)*pIVar1 + 8))
                                             (pIVar1,pdVar18->ref | uVar14,local_d8);
                        }
                        if (bVar10 != 0) {
                          uVar3 = *(ushort *)((longlong)puVar20 + (ulonglong)pdVar18->edge * 2 + 4);
                          uVar11 = (pdVar18->edge + 1) % (uint)bVar2;
                          goto LAB_146e121af;
                        }
                      }
                      break;
                    }
                    uVar11 = pdVar18->next;
                  } while (uVar11 != 0xffffffff);
                }
              }
              else if (uVar3 != 0) {
                uVar15 = (ulonglong)uVar3 - 1;
                pdVar7 = param_1->polys;
                if (pIVar1 == (INavigationQueryFilterInterface *)0x0) {
                  bVar10 = pdVar7[uVar15].areaAndtype & 0x3f;
                }
                else if (*(char *)(pIVar4 + 0x85) == '\0') {
                  if ((((*(ushort *)(pIVar4 + 0x84) & pdVar7[uVar15].flags) == 0) ||
                      ((*(ushort *)&pIVar4[0x84].field_0x2 & pdVar7[uVar15].flags) != 0)) ||
                     ((uVar15 = (ulonglong)(pdVar7[uVar15].areaAndtype & 0x3f),
                      dVar8 < (double)pIVar4[uVar15 + 2] || dVar8 == (double)pIVar4[uVar15 + 2] ||
                      (dVar8 < (double)pIVar4[uVar15 + 0x42] ||
                       dVar8 == (double)pIVar4[uVar15 + 0x42])))) {
                    bVar10 = 0;
                  }
                  else {
                    bVar10 = 1;
                  }
                }
                else {
                  bVar10 = (**(code **)((longlong)*pIVar1 + 8))(pIVar1,uVar15 | local_d0,param_1);
                }
                if (bVar10 != 0) {
                  uVar3 = (ushort)*puVar21;
                  uVar11 = (int)(uVar19 + 1) % (int)(uint)bVar2;
LAB_146e121af:
                  uVar15 = (ulonglong)uVar3;
                  pdVar5 = param_1->verts;
                  uVar24 = SUB84(pdVar5[uVar15 * 3],0);
                  uVar25 = (uint)((ulonglong)pdVar5[uVar15 * 3] >> 0x20);
                  uVar13 = (ulonglong)*(ushort *)((longlong)puVar20 + (longlong)(int)uVar11 * 2 + 4)
                  ;
                  uVar26 = SUB84(pdVar5[uVar15 * 3 + 2],0);
                  uVar27 = (uint)((ulonglong)pdVar5[uVar15 * 3 + 2] >> 0x20);
                  uVar30 = SUB84(pdVar5[uVar15 * 3 + 1],0);
                  uVar31 = (undefined4)((ulonglong)pdVar5[uVar15 * 3 + 1] >> 0x20);
                  uVar11 = SUB84(pdVar5[uVar13 * 3],0);
                  uVar17 = (uint)((ulonglong)pdVar5[uVar13 * 3] >> 0x20);
                  uVar22 = SUB84(pdVar5[uVar13 * 3 + 2],0);
                  uVar23 = (uint)((ulonglong)pdVar5[uVar13 * 3 + 2] >> 0x20);
                  uVar28 = SUB84(pdVar5[uVar13 * 3 + 1],0);
                  uVar29 = (undefined4)((ulonglong)pdVar5[uVar13 * 3 + 1] >> 0x20);
                  goto LAB_146e121e8;
                }
              }
            }
            else if (uVar3 == 0) {
              pdVar5 = param_1->verts;
              uVar13 = (ulonglong)
                       *(ushort *)
                        ((longlong)puVar20 +
                        (longlong)((int)(uVar19 + 1) % (int)(uint)bVar2) * 2 + 4);
              uVar15 = (ulonglong)(ushort)*puVar21;
              uVar24 = SUB84(pdVar5[uVar13 * 3],0);
              uVar25 = (uint)((ulonglong)pdVar5[uVar13 * 3] >> 0x20);
              uVar11 = SUB84(pdVar5[uVar15 * 3],0);
              uVar17 = (uint)((ulonglong)pdVar5[uVar15 * 3] >> 0x20);
              uVar22 = SUB84(pdVar5[uVar15 * 3 + 2],0);
              uVar23 = (uint)((ulonglong)pdVar5[uVar15 * 3 + 2] >> 0x20);
              uVar28 = SUB84(pdVar5[uVar15 * 3 + 1],0);
              uVar29 = (undefined4)((ulonglong)pdVar5[uVar15 * 3 + 1] >> 0x20);
              uVar26 = SUB84(pdVar5[uVar13 * 3 + 2],0);
              uVar27 = (uint)((ulonglong)pdVar5[uVar13 * 3 + 2] >> 0x20);
              uVar30 = SUB84(pdVar5[uVar13 * 3 + 1],0);
              uVar31 = (undefined4)((ulonglong)pdVar5[uVar13 * 3 + 1] >> 0x20);
LAB_146e121e8:
              iVar12 = param_3->ArrayNum;
              if (iVar12 == param_3->ArrayMax) {
                iVar12 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x830,&param_3->AllocatorInstance,&param_3->ArrayMax);
              }
              lVar16 = (longlong)iVar12;
              param_3->ArrayNum = iVar12 + 1;
              pFVar6 = (param_3->AllocatorInstance).Data;
              *(ulonglong *)(pFVar6 + lVar16 * 0x30) = CONCAT44(uVar25 ^ uVar33,uVar24 ^ uVar32);
              *(ulonglong *)(pFVar6 + lVar16 * 0x30 + 8) = CONCAT44(uVar27 ^ uVar33,uVar26 ^ uVar32)
              ;
              *(ulonglong *)(pFVar6 + lVar16 * 0x30 + 0x10) = CONCAT44(uVar31,uVar30);
              *(ulonglong *)(pFVar6 + lVar16 * 0x30 + 0x18) =
                   CONCAT44(uVar17 ^ uVar33,uVar11 ^ uVar32);
              *(ulonglong *)(pFVar6 + lVar16 * 0x30 + 0x20) =
                   CONCAT44(uVar23 ^ uVar33,uVar22 ^ uVar32);
              *(ulonglong *)(pFVar6 + lVar16 * 0x30 + 0x28) = CONCAT44(uVar29,uVar28);
            }
            uVar19 = uVar19 + 1;
            puVar21 = (uint *)((longlong)puVar21 + 2);
            uVar15 = local_c8;
          } while ((int)uVar19 < (int)(uint)bVar2);
        }
      }
      local_e4 = local_e4 + 1;
      local_c8 = uVar15 + 1;
      local_c0 = local_c0 + 0x20;
    } while (local_e4 < (int)(uint)param_1->header->polyCount);
  }
  return;
}

// GetTilesDebugGeometry @ 146e12410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FPImplRecastNavMesh::GetTilesDebugGeometry
          (FPImplRecastNavMesh *this,FRecastNavMeshGenerator *param_1,dtMeshTile *param_2,
          int param_3,FRecastDebugGeometry *param_4,int param_5,ushort param_6)

{
  int *piVar1;
  TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FRecastDebugGeometry::FClusterLink,TSizedDefaultAllocator<32>_> *pTVar3;
  double dVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  FScriptContainerElement *pFVar8;
  uchar *puVar9;
  dtCluster *pdVar10;
  dtClusterLink *pdVar11;
  dtCluster *pdVar12;
  dtNavMesh *pdVar13;
  code *pcVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  FRecastDebugGeometry *pFVar18;
  bool bVar19;
  bool bVar20;
  int iVar21;
  int iVar22;
  FNavTileRef FVar23;
  TTuple<UE::Math::TIntPoint<int>,FRecastInternalDebugData> *pTVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  dtMeshTile *pdVar27;
  undefined1 *puVar28;
  uint uVar29;
  double *pdVar30;
  FScriptContainerElement *pFVar31;
  TArray<FRecastDebugGeometry::FOffMeshLink,TSizedDefaultAllocator<32>_> *pTVar32;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar33;
  dtPoly *pdVar34;
  TArray<FRecastDebugGeometry::FOffMeshSegment,TSizedDefaultAllocator<32>_> *pTVar35;
  longlong lVar36;
  ulonglong uVar37;
  longlong lVar38;
  ulonglong uVar39;
  longlong lVar40;
  dtMeshHeader *pdVar41;
  uint uVar42;
  undefined4 uVar44;
  undefined4 uVar45;
  double dVar46;
  undefined8 uVar47;
  double dVar48;
  undefined8 uVar49;
  undefined4 uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  undefined1 auStackY_2d8 [32];
  undefined1 local_287 [7];
  dtMeshHeader *local_280;
  int local_278;
  dtMeshTile *local_270;
  int local_268;
  int local_264;
  uint local_260;
  FPImplRecastNavMesh *local_258;
  TIntPoint<int>_u_0 local_250;
  int local_248;
  int local_244;
  int iStack_240;
  longlong local_238;
  FRecastDebugGeometry *local_230;
  ulonglong local_228;
  undefined8 local_218;
  undefined8 uStack_210;
  double local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  double dStack_1f0;
  byte local_1e8;
  byte bStack_1e7;
  uchar uStack_1e6;
  byte bStack_1e5;
  float fStack_1e4;
  undefined8 uStack_1e0;
  undefined1 *local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  double local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double local_1a0;
  double dStack_198;
  double local_190;
  double dStack_188;
  double local_180;
  double dStack_178;
  longlong local_170;
  dtPolyDetail *local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  double local_148;
  double dStack_140;
  undefined8 local_138;
  double dStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  undefined8 local_108;
  double dStack_100;
  byte local_f8;
  byte bStack_f7;
  uchar uStack_f6;
  undefined5 uStack_f5;
  FLogScopedCategoryAndVerbosityOverride local_e8;
  double local_d8;
  int local_d0;
  int local_cc;
  int local_c8 [2];
  ulonglong local_c0;
  ulonglong uVar43;
  
  local_c0 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_230 = param_4;
  local_270 = param_2;
  local_264 = param_3;
  local_258 = this;
  if (((this->NavMeshOwner == (ARecastNavMesh *)0x0) || (this->DetourNavMesh == (dtNavMesh *)0x0))
     && (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                            ("NavMeshOwner && DetourNavMesh",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\PImplRecastNavMesh.cpp"
                             ,0xbf9,L""), bVar19)) {
    pcVar14 = (code *)swi(3);
    iVar21 = (*pcVar14)();
    return iVar21;
  }
  pdVar41 = param_2->header;
  local_280 = pdVar41;
  if ((pdVar41 == (dtMeshHeader *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Header",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\PImplRecastNavMesh.cpp"
                          ,0xbfb,L""), bVar19)) {
    pcVar14 = (code *)swi(3);
    iVar21 = (*pcVar14)();
    return iVar21;
  }
  local_244 = pdVar41->x;
  pTVar2 = &param_4->TilesToDisplayInternalData;
  pFVar31 = (pTVar2->AllocatorInstance).Data;
  iStack_240 = pdVar41->y;
  if (((pFVar31 <= (FScriptContainerElement *)&local_244) &&
      ((FScriptContainerElement *)&local_244 <
       pFVar31 + (longlong)(param_4->TilesToDisplayInternalData).ArrayMax * 8)) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar19)) {
    pcVar14 = (code *)swi(3);
    iVar21 = (*pcVar14)();
    return iVar21;
  }
  iVar21 = (param_4->TilesToDisplayInternalData).ArrayNum;
  piVar1 = &(param_4->TilesToDisplayInternalData).ArrayMax;
  if (iVar21 == *piVar1) {
    iVar21 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&pTVar2->AllocatorInstance,piVar1);
  }
  (param_4->TilesToDisplayInternalData).ArrayNum = iVar21 + 1;
  *(ulonglong *)((pTVar2->AllocatorInstance).Data + (longlong)iVar21 * 8) =
       CONCAT44(iStack_240,local_244);
  if ((param_1 != (FRecastNavMeshGenerator *)0x0) &&
     (this->NavMeshOwner->bDistinctlyDrawTilesBeingBuilt != 0)) {
    FVar23.TileRef = dtNavMesh::getTileRef(this->DetourNavMesh,param_2);
    bVar19 = FRecastNavMeshGenerator::IsTileChanged(param_1,FVar23);
    if (bVar19) {
      bVar19 = true;
      goto LAB_146e125bf;
    }
  }
  bVar19 = false;
LAB_146e125bf:
  if (6 < (byte)LogNavigation._0_1_) {
    FLogScopedCategoryAndVerbosityOverride::FLogScopedCategoryAndVerbosityOverride
              (&local_e8,(FName)LogNavigation._4_8_,All);
    if ((bVar19) &&
       (dtNavMesh::getTileRef(local_258->DetourNavMesh,param_2), 6 < (byte)LogNavigation._0_1_)) {
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
    }
    FLogCategoryBase::PostTrigger((FLogCategoryBase *)&LogNavigation,All);
    FLogScopedCategoryAndVerbosityOverride::~FLogScopedCategoryAndVerbosityOverride(&local_e8);
  }
  pdVar41 = local_280;
  iVar21 = 0;
  pdVar30 = param_2->verts;
  uVar59 = (uint)__xmm_80000000000000008000000000000000;
  uVar60 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_228 = 0;
  uVar7 = 0;
  if (local_280->vertCount != 0) {
    do {
      pFVar31 = (param_4->MeshVerts).AllocatorInstance.Data;
      local_1d0 = CONCAT44((uint)((ulonglong)*pdVar30 >> 0x20) ^ uVar60,SUB84(*pdVar30,0) ^ uVar59);
      local_1c0 = pdVar30[1];
      uStack_1c8 = CONCAT44((uint)((ulonglong)pdVar30[2] >> 0x20) ^ uVar60,
                            SUB84(pdVar30[2],0) ^ uVar59);
      if (((pFVar31 <= (FScriptContainerElement *)&local_1d0) &&
          ((FScriptContainerElement *)&local_1d0 <
           pFVar31 + (longlong)(param_4->MeshVerts).ArrayMax * 0x18)) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar20)) {
        pcVar14 = (code *)swi(3);
        iVar21 = (*pcVar14)();
        return iVar21;
      }
      iVar22 = (param_4->MeshVerts).ArrayNum;
      if (iVar22 == (param_4->MeshVerts).ArrayMax) {
        iVar22 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,(ForAnyElementType *)param_4,&(param_4->MeshVerts).ArrayMax);
      }
      pdVar30 = pdVar30 + 3;
      (param_4->MeshVerts).ArrayNum = iVar22 + 1;
      iVar21 = iVar21 + 1;
      pFVar8 = (param_4->MeshVerts).AllocatorInstance.Data;
      pFVar31 = pFVar8 + (longlong)iVar22 * 0x18;
      *(undefined8 *)pFVar31 = local_1d0;
      *(undefined8 *)(pFVar31 + 8) = uStack_1c8;
      *(double *)(pFVar8 + (longlong)iVar22 * 0x18 + 0x10) = local_1c0;
      uVar7 = pdVar41->vertCount;
      param_3 = local_264;
    } while (iVar21 < (int)(uint)uVar7);
  }
  pdVar41 = local_280;
  uVar42 = (uint)uVar7;
  pdVar30 = param_2->detailVerts;
  iVar21 = 0;
  local_260 = uVar42;
  if (local_280->detailVertCount != 0) {
    do {
      pFVar31 = (param_4->MeshVerts).AllocatorInstance.Data;
      local_1b8 = CONCAT44((uint)((ulonglong)*pdVar30 >> 0x20) ^ uVar60,SUB84(*pdVar30,0) ^ uVar59);
      local_1a8 = pdVar30[1];
      uStack_1b0 = CONCAT44((uint)((ulonglong)pdVar30[2] >> 0x20) ^ uVar60,
                            SUB84(pdVar30[2],0) ^ uVar59);
      if (((pFVar31 <= (FScriptContainerElement *)&local_1b8) &&
          ((FScriptContainerElement *)&local_1b8 <
           pFVar31 + (longlong)(param_4->MeshVerts).ArrayMax * 0x18)) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar20)) {
        pcVar14 = (code *)swi(3);
        iVar21 = (*pcVar14)();
        return iVar21;
      }
      iVar22 = (param_4->MeshVerts).ArrayNum;
      if (iVar22 == (param_4->MeshVerts).ArrayMax) {
        iVar22 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,(ForAnyElementType *)param_4,&(param_4->MeshVerts).ArrayMax);
      }
      pdVar30 = pdVar30 + 3;
      (param_4->MeshVerts).ArrayNum = iVar22 + 1;
      iVar21 = iVar21 + 1;
      pFVar8 = (param_4->MeshVerts).AllocatorInstance.Data;
      pFVar31 = pFVar8 + (longlong)iVar22 * 0x18;
      *(undefined8 *)pFVar31 = local_1b8;
      *(undefined8 *)(pFVar31 + 8) = uStack_1b0;
      *(double *)(pFVar8 + (longlong)iVar22 * 0x18 + 0x10) = local_1a8;
      param_3 = local_264;
    } while (iVar21 < (int)(uint)pdVar41->detailVertCount);
  }
  pdVar41 = local_280;
  local_250 = (TIntPoint<int>_u_0)*(TIntPoint<int>_u_0 *)&local_280->x;
  pTVar24 = TSet<TTuple<UE::Math::TIntPoint<int>,FRecastInternalDebugData>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FRecastInternalDebugData,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<UE::Math::TIntPoint<int>,FRecastInternalDebugData>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FRecastInternalDebugData,0>,FDefaultSetAllocator>
                    *)&local_258->DebugDataMap,(TIntPoint<int>)local_250);
  dVar16 = __real_4014000000000000;
  local_278 = 0;
  puVar28 = &pTVar24->field_0x8;
  if (pTVar24 == (TTuple<UE::Math::TIntPoint<int>,FRecastInternalDebugData> *)0x0) {
    puVar28 = (undefined1 *)0x0;
  }
  local_1d8 = puVar28;
  if (pdVar41->polyCount != 0) {
    lVar38 = 0;
    local_250 = (TIntPoint<int>_u_0)0x0;
    local_238 = 0;
    pdVar27 = local_270;
    do {
      lVar40 = (longlong)pdVar27->polys->verts + local_238 + -4;
      local_170 = lVar40;
      if (*(byte *)(lVar40 + 0x1f) < 0x40) {
        local_168 = pdVar27->detailMeshes;
        if (bVar19) {
          pTVar33 = &param_4->BuiltMeshIndices;
        }
        else if ((*(ushort *)(lVar40 + 0x1c) & param_6) == 0) {
          if ((param_4->bGatherTileBuildTimesHeatMap == 0) || (puVar28 == (undefined1 *)0x0)) {
            lVar36 = (ulonglong)(*(byte *)(lVar40 + 0x1f) & 0x3f) + 1;
          }
          else {
            dVar4 = param_4->MaxTileBuildTime - param_4->MinTileBuildTime;
            iVar21 = 0;
            if (dVar4 != 0.0) {
              iVar21 = (int)(((*(double *)(puVar28 + 0xa0) - param_4->MinTileBuildTime) / dVar4) *
                            dVar16);
              iVar22 = 4;
              if (iVar21 < 4) {
                iVar22 = iVar21;
              }
              iVar21 = 0;
              if (0 < iVar22) {
                iVar21 = iVar22;
              }
            }
            lVar36 = (longlong)iVar21 + 0x43;
          }
          pTVar33 = param_4->AreaIndices + lVar36 + -1;
        }
        else {
          pTVar33 = &param_4->ForbiddenIndices;
        }
        local_248 = 0;
        puVar28 = local_1d8;
        if ((&local_168->triCount)[lVar38] != '\0') {
          do {
            puVar9 = pdVar27->detailTris;
            bVar5 = *(byte *)(lVar40 + 0x1e);
            uVar29 = (uint)bVar5;
            lVar36 = (longlong)
                     (int)(((uint)*(ushort *)((longlong)&local_168->triBase + lVar38) + local_248) *
                          4);
            bVar6 = puVar9[lVar36];
            if (bVar6 < bVar5) {
              uVar51 = (uint)*(ushort *)(lVar40 + 4 + (ulonglong)bVar6 * 2);
            }
            else {
              uVar51 = (((uint)bVar6 + (uint)*(ushort *)((longlong)&local_168->vertBase + lVar38)) -
                       uVar29) + uVar42;
            }
            local_d0 = uVar51 + param_3;
            bVar6 = puVar9[lVar36 + 1];
            if (bVar6 < bVar5) {
              uVar51 = (uint)*(ushort *)(lVar40 + 4 + (ulonglong)bVar6 * 2);
            }
            else {
              uVar51 = (uint)*(ushort *)((longlong)&local_168->vertBase + lVar38) +
                       (bVar6 - uVar29) + uVar42;
            }
            local_cc = uVar51 + param_3;
            bVar6 = puVar9[lVar36 + 2];
            if (bVar6 < bVar5) {
              uVar42 = (uint)*(ushort *)(lVar40 + 4 + (ulonglong)bVar6 * 2);
            }
            else {
              uVar42 = (uint)*(ushort *)((longlong)&local_168->vertBase + lVar38) +
                       (bVar6 - uVar29) + uVar42;
            }
            local_c8[0] = uVar42 + param_3;
            pFVar31 = (pTVar33->AllocatorInstance).Data;
            if (((pFVar31 <= (FScriptContainerElement *)&local_d0) &&
                ((FScriptContainerElement *)&local_d0 < pFVar31 + (longlong)pTVar33->ArrayMax * 4))
               && (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar20)) {
              pcVar14 = (code *)swi(3);
              iVar21 = (*pcVar14)();
              return iVar21;
            }
            iVar21 = pTVar33->ArrayNum;
            if (iVar21 == pTVar33->ArrayMax) {
              iVar21 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&pTVar33->AllocatorInstance,&pTVar33->ArrayMax);
            }
            pTVar33->ArrayNum = iVar21 + 1;
            *(int *)((pTVar33->AllocatorInstance).Data + (longlong)iVar21 * 4) = local_d0;
            pFVar31 = (pTVar33->AllocatorInstance).Data;
            if (((pFVar31 <= (FScriptContainerElement *)&local_cc) &&
                ((FScriptContainerElement *)&local_cc < pFVar31 + (longlong)pTVar33->ArrayMax * 4))
               && (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar20)) {
              pcVar14 = (code *)swi(3);
              iVar21 = (*pcVar14)();
              return iVar21;
            }
            iVar21 = pTVar33->ArrayNum;
            if (iVar21 == pTVar33->ArrayMax) {
              iVar21 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&pTVar33->AllocatorInstance,&pTVar33->ArrayMax);
            }
            pTVar33->ArrayNum = iVar21 + 1;
            *(int *)((pTVar33->AllocatorInstance).Data + (longlong)iVar21 * 4) = local_cc;
            pFVar31 = (pTVar33->AllocatorInstance).Data;
            if (((pFVar31 <= (FScriptContainerElement *)local_c8) &&
                ((FScriptContainerElement *)local_c8 < pFVar31 + (longlong)pTVar33->ArrayMax * 4))
               && (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar20)) {
              pcVar14 = (code *)swi(3);
              iVar21 = (*pcVar14)();
              return iVar21;
            }
            iVar21 = pTVar33->ArrayNum;
            if (iVar21 == pTVar33->ArrayMax) {
              iVar21 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&pTVar33->AllocatorInstance,&pTVar33->ArrayMax);
            }
            pTVar33->ArrayNum = iVar21 + 1;
            *(int *)((pTVar33->AllocatorInstance).Data + (longlong)iVar21 * 4) = local_c8[0];
            if ((local_270->polyClusters != (ushort *)0x0) &&
               (uVar7 = *(ushort *)((longlong)local_250 + (longlong)local_270->polyClusters),
               uVar7 < 0xff)) {
              piVar1 = &(param_4->Clusters).ArrayNum;
              uVar42 = (uint)uVar7;
              iVar21 = *piVar1;
              if (iVar21 <= (int)uVar42) {
                iVar21 = uVar42 - iVar21;
                iVar22 = UE::Core::Private::
                         ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x10,8,iVar21 + 1,&(param_4->Clusters).AllocatorInstance,piVar1,
                                    &(param_4->Clusters).ArrayMax);
                DefaultConstructItems<FRecastDebugGeometry::FCluster,int>
                          ((param_4->Clusters).AllocatorInstance.Data + (longlong)iVar22 * 0x10,
                           iVar21 + 1);
              }
              if (((param_4->Clusters).ArrayNum <= (int)uVar42) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar14 = (code *)swi(3);
                iVar21 = (*pcVar14)();
                return iVar21;
              }
              pFVar31 = (param_4->Clusters).AllocatorInstance.Data + (ulonglong)uVar42 * 0x10;
              if (((*(FScriptContainerElement **)&pFVar31->field_0x0 <=
                    (FScriptContainerElement *)&local_d0) &&
                  ((FScriptContainerElement *)&local_d0 <
                   *(FScriptContainerElement **)&pFVar31->field_0x0 +
                   (longlong)*(int *)(pFVar31 + 0xc) * 4)) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar20)) {
                pcVar14 = (code *)swi(3);
                iVar21 = (*pcVar14)();
                return iVar21;
              }
              iVar21 = *(int *)&pFVar31[8].field_0x0;
              if (iVar21 == *(int *)(pFVar31 + 0xc)) {
                iVar21 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,(ForAnyElementType *)pFVar31,(int *)(pFVar31 + 0xc));
              }
              *(int *)&pFVar31[8].field_0x0 = iVar21 + 1;
              *(int *)(*(FScriptContainerElement **)&pFVar31->field_0x0 + (longlong)iVar21 * 4) =
                   local_d0;
              if (((*(FScriptContainerElement **)&pFVar31->field_0x0 <=
                    (FScriptContainerElement *)&local_cc) &&
                  ((FScriptContainerElement *)&local_cc <
                   *(FScriptContainerElement **)&pFVar31->field_0x0 +
                   (longlong)*(int *)(pFVar31 + 0xc) * 4)) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar20)) {
                pcVar14 = (code *)swi(3);
                iVar21 = (*pcVar14)();
                return iVar21;
              }
              iVar21 = *(int *)&pFVar31[8].field_0x0;
              if (iVar21 == *(int *)(pFVar31 + 0xc)) {
                iVar21 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,(ForAnyElementType *)pFVar31,(int *)(pFVar31 + 0xc));
              }
              *(int *)&pFVar31[8].field_0x0 = iVar21 + 1;
              *(int *)(*(FScriptContainerElement **)&pFVar31->field_0x0 + (longlong)iVar21 * 4) =
                   local_cc;
              if (((*(FScriptContainerElement **)&pFVar31->field_0x0 <=
                    (FScriptContainerElement *)local_c8) &&
                  ((FScriptContainerElement *)local_c8 <
                   *(FScriptContainerElement **)&pFVar31->field_0x0 +
                   (longlong)*(int *)(pFVar31 + 0xc) * 4)) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar20)) {
                pcVar14 = (code *)swi(3);
                iVar21 = (*pcVar14)();
                return iVar21;
              }
              iVar21 = *(int *)&pFVar31[8].field_0x0;
              if (iVar21 == *(int *)(pFVar31 + 0xc)) {
                iVar21 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,(ForAnyElementType *)pFVar31,(int *)(pFVar31 + 0xc));
              }
              *(int *)&pFVar31[8].field_0x0 = iVar21 + 1;
              *(int *)(*(FScriptContainerElement **)&pFVar31->field_0x0 + (longlong)iVar21 * 4) =
                   local_c8[0];
              lVar40 = local_170;
              param_3 = local_264;
            }
            local_248 = local_248 + 1;
            puVar28 = local_1d8;
            pdVar27 = local_270;
            uVar42 = local_260;
          } while (local_248 < (int)(uint)(&local_168->triCount)[lVar38]);
        }
      }
      local_278 = local_278 + 1;
      local_238 = local_238 + 0x20;
      local_250._s_0 = local_250._s_0 + 2;
      lVar38 = lVar38 + 6;
      param_2 = local_270;
      uVar42 = local_260;
    } while (local_278 < (int)(uint)local_280->polyCount);
  }
  dVar16 = __real_47efffffe0000000;
  uVar39 = 0;
  if (local_280->offMeshConCount != 0) {
    uVar50 = SUB84(__real_47efffffe0000000,0);
    uVar37 = (ulonglong)__real_47efffffe0000000 >> 0x20;
    uVar43 = uVar39;
    do {
      lVar38 = (longlong)param_2->offMeshCons->pos + uVar39;
      if (lVar38 != 0) {
        pdVar30 = param_2->verts;
        bVar5 = *(byte *)(lVar38 + 0x4b);
        pdVar34 = param_2->polys + *(ushort *)(lVar38 + 0x48);
        uVar25 = (ulonglong)pdVar34->verts[0];
        uVar26 = (ulonglong)pdVar34->verts[1];
        local_208 = pdVar30[uVar25 * 3 + 1];
        local_218 = CONCAT44((uint)((ulonglong)pdVar30[uVar25 * 3] >> 0x20) ^ uVar60,
                             SUB84(pdVar30[uVar25 * 3],0) ^ uVar59);
        uStack_210 = CONCAT44((uint)((ulonglong)pdVar30[uVar25 * 3 + 2] >> 0x20) ^ uVar60,
                              SUB84(pdVar30[uVar25 * 3 + 2],0) ^ uVar59);
        dStack_1f0 = pdVar30[uVar26 * 3 + 1];
        uStack_200 = CONCAT44((uint)((ulonglong)pdVar30[uVar26 * 3] >> 0x20) ^ uVar60,
                              SUB84(pdVar30[uVar26 * 3],0) ^ uVar59);
        local_1f8 = CONCAT44((uint)((ulonglong)pdVar30[uVar26 * 3 + 2] >> 0x20) ^ uVar60,
                             SUB84(pdVar30[uVar26 * 3 + 2],0) ^ uVar59);
        local_1e8 = pdVar34->areaAndtype & 0x3f;
        bStack_1e7 = bVar5 >> 7;
        uStack_1e6 = GetValidEnds(local_258->DetourNavMesh,param_2,pdVar34);
        dVar4 = *(double *)(lVar38 + 0x30);
        uVar44 = SUB84(dVar4,0);
        uVar45 = (int)((ulonglong)dVar4 >> 0x20);
        if (dVar16 <= dVar4) {
          uVar44 = uVar50;
          uVar45 = (int)uVar37;
        }
        bStack_1e5 = bVar5 >> 5 & 1;
        uStack_1e0 = 0;
        pTVar32 = &param_4->ForbiddenLinks;
        fStack_1e4 = (float)(double)CONCAT44(uVar45,uVar44);
        if ((pdVar34->flags & param_6) == 0) {
          pTVar32 = &param_4->OffMeshLinks;
        }
        pFVar31 = (pTVar32->AllocatorInstance).Data;
        if (((pFVar31 <= (FScriptContainerElement *)&local_218) &&
            ((FScriptContainerElement *)&local_218 < pFVar31 + (longlong)pTVar32->ArrayMax * 0x40))
           && (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar19)) {
          pcVar14 = (code *)swi(3);
          iVar21 = (*pcVar14)();
          return iVar21;
        }
        iVar21 = pTVar32->ArrayNum;
        if (iVar21 == pTVar32->ArrayMax) {
          iVar21 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x840,&pTVar32->AllocatorInstance,&pTVar32->ArrayMax);
        }
        pTVar32->ArrayNum = iVar21 + 1;
        pFVar31 = (pTVar32->AllocatorInstance).Data;
        lVar38 = (longlong)iVar21 * 0x40;
        *(undefined8 *)(pFVar31 + lVar38) = local_218;
        *(undefined8 *)(pFVar31 + lVar38 + 8) = uStack_210;
        *(double *)(pFVar31 + lVar38 + 0x10) = local_208;
        *(undefined8 *)(pFVar31 + lVar38 + 0x10 + 8) = uStack_200;
        *(undefined8 *)(pFVar31 + lVar38 + 0x20) = local_1f8;
        *(double *)(pFVar31 + lVar38 + 0x20 + 8) = dStack_1f0;
        *(ulonglong *)(pFVar31 + lVar38 + 0x30) =
             CONCAT44(fStack_1e4,
                      CONCAT13(bStack_1e5,CONCAT12(uStack_1e6,CONCAT11(bStack_1e7,local_1e8))));
        *(undefined8 *)(pFVar31 + lVar38 + 0x30 + 8) = uStack_1e0;
      }
      uVar42 = (int)uVar43 + 1;
      uVar43 = (ulonglong)uVar42;
      uVar39 = uVar39 + 0x50;
    } while ((int)uVar42 < (int)(uint)local_280->offMeshConCount);
  }
  local_278 = 0;
  pdVar41 = local_280;
  if (local_280->offMeshSegConCount != 0) {
    local_238 = 0;
    pdVar27 = local_270;
    do {
      pFVar18 = local_230;
      iVar21 = 0;
      lVar38 = (longlong)pdVar27->offMeshSeg->startA + local_238;
      if ((lVar38 != 0) && (*(char *)(lVar38 + 0x6e) != '\0')) {
        pTVar35 = &local_230->OffMeshSegments;
        lVar40 = (ulonglong)pdVar41->offMeshSegPolyBase + (ulonglong)*(ushort *)(lVar38 + 0x6c);
        do {
          pdVar30 = pdVar27->verts;
          pdVar34 = pdVar27->polys + lVar40;
          uVar39 = (ulonglong)pdVar34->verts[0];
          uStack_150 = CONCAT44((uint)((ulonglong)pdVar30[uVar39 * 3 + 2] >> 0x20) ^ uVar60,
                                SUB84(pdVar30[uVar39 * 3 + 2],0) ^ uVar59);
          local_148 = pdVar30[uVar39 * 3 + 1];
          local_158 = CONCAT44((uint)((ulonglong)pdVar30[uVar39 * 3] >> 0x20) ^ uVar60,
                               SUB84(pdVar30[uVar39 * 3],0) ^ uVar59);
          uVar39 = (ulonglong)pdVar34->verts[1];
          local_138 = CONCAT44((uint)((ulonglong)pdVar30[uVar39 * 3 + 2] >> 0x20) ^ uVar60,
                               SUB84(pdVar30[uVar39 * 3 + 2],0) ^ uVar59);
          dStack_130 = pdVar30[uVar39 * 3 + 1];
          dStack_140 = (double)CONCAT44((uint)((ulonglong)pdVar30[uVar39 * 3] >> 0x20) ^ uVar60,
                                        SUB84(pdVar30[uVar39 * 3],0) ^ uVar59);
          uVar39 = (ulonglong)pdVar34->verts[2];
          uStack_120 = CONCAT44((uint)((ulonglong)pdVar30[uVar39 * 3 + 2] >> 0x20) ^ uVar60,
                                SUB84(pdVar30[uVar39 * 3 + 2],0) ^ uVar59);
          local_118 = pdVar30[uVar39 * 3 + 1];
          local_128 = CONCAT44((uint)((ulonglong)pdVar30[uVar39 * 3] >> 0x20) ^ uVar60,
                               SUB84(pdVar30[uVar39 * 3],0) ^ uVar59);
          uVar39 = (ulonglong)pdVar34->verts[3];
          local_108 = CONCAT44((uint)((ulonglong)pdVar30[uVar39 * 3 + 2] >> 0x20) ^ uVar60,
                               SUB84(pdVar30[uVar39 * 3 + 2],0) ^ uVar59);
          dStack_100 = pdVar30[uVar39 * 3 + 1];
          dStack_110 = (double)CONCAT44((uint)((ulonglong)pdVar30[uVar39 * 3] >> 0x20) ^ uVar60,
                                        SUB84(pdVar30[uVar39 * 3],0) ^ uVar59);
          local_f8 = pdVar34->areaAndtype & 0x3f;
          bStack_f7 = *(byte *)(lVar38 + 0x6f) >> 7;
          uStack_f6 = GetValidEnds(local_258->DetourNavMesh,pdVar27,pdVar34);
          pFVar31 = (pTVar35->AllocatorInstance).Data;
          if (((pFVar31 <= (FScriptContainerElement *)&local_158) &&
              ((FScriptContainerElement *)&local_158 <
               pFVar31 + (longlong)(pFVar18->OffMeshSegments).ArrayMax * 0x68)) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar19)) {
            pcVar14 = (code *)swi(3);
            iVar21 = (*pcVar14)();
            return iVar21;
          }
          iVar22 = (pFVar18->OffMeshSegments).ArrayNum;
          if (iVar22 == (pFVar18->OffMeshSegments).ArrayMax) {
            iVar22 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x868,&pTVar35->AllocatorInstance,
                                &(pFVar18->OffMeshSegments).ArrayMax);
          }
          (pFVar18->OffMeshSegments).ArrayNum = iVar22 + 1;
          lVar36 = (longlong)iVar22 * 0x68;
          pFVar31 = (pTVar35->AllocatorInstance).Data;
          *(undefined8 *)(pFVar31 + lVar36) = local_158;
          *(undefined8 *)(pFVar31 + lVar36 + 8) = uStack_150;
          *(double *)(pFVar31 + lVar36 + 0x10) = local_148;
          *(double *)(pFVar31 + lVar36 + 0x10 + 8) = dStack_140;
          *(undefined8 *)(pFVar31 + lVar36 + 0x20) = local_138;
          *(double *)(pFVar31 + lVar36 + 0x20 + 8) = dStack_130;
          *(undefined8 *)(pFVar31 + lVar36 + 0x30) = local_128;
          *(undefined8 *)(pFVar31 + lVar36 + 0x30 + 8) = uStack_120;
          *(double *)(pFVar31 + lVar36 + 0x40) = local_118;
          *(double *)(pFVar31 + lVar36 + 0x40 + 8) = dStack_110;
          *(undefined8 *)(pFVar31 + lVar36 + 0x50) = local_108;
          *(double *)(pFVar31 + lVar36 + 0x50 + 8) = dStack_100;
          *(ulonglong *)(pFVar31 + lVar36 + 0x60) =
               CONCAT53(uStack_f5,CONCAT12(uStack_f6,CONCAT11(bStack_f7,local_f8)));
          local_268 = iVar22;
          if ((pdVar34->flags & param_6) != 0) {
            local_287[0] = 0;
            `FPImplRecastNavMesh::GetTilesDebugGeometry'::__l100::<lambda_1>::operator()(local_287);
          }
          pTVar33 = pFVar18->OffMeshSegmentAreas + local_f8;
          pFVar31 = (pTVar33->AllocatorInstance).Data;
          if (((pFVar31 <= (FScriptContainerElement *)&local_268) &&
              ((FScriptContainerElement *)&local_268 < pFVar31 + (longlong)pTVar33->ArrayMax * 4))
             && (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar19)) {
            pcVar14 = (code *)swi(3);
            iVar21 = (*pcVar14)();
            return iVar21;
          }
          iVar22 = pTVar33->ArrayNum;
          if (iVar22 == pTVar33->ArrayMax) {
            iVar22 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar33->AllocatorInstance,&pTVar33->ArrayMax);
          }
          pTVar33->ArrayNum = iVar22 + 1;
          iVar21 = iVar21 + 1;
          lVar40 = lVar40 + 1;
          *(int *)((pTVar33->AllocatorInstance).Data + (longlong)iVar22 * 4) = local_268;
          pdVar27 = local_270;
          pdVar41 = local_280;
        } while (iVar21 < (int)(uint)*(byte *)(lVar38 + 0x6e));
      }
      local_278 = local_278 + 1;
      local_238 = local_238 + 0x70;
      param_4 = local_230;
    } while (local_278 < (int)(uint)pdVar41->offMeshSegConCount);
  }
  dVar17 = __real_4044000000000000;
  dVar4 = __real_3e45798ee0000000;
  dVar16 = __real_3ff0000000000000;
  uVar37 = 0;
  pdVar27 = local_270;
  uVar39 = uVar37;
  if (pdVar41->clusterCount != 0) {
    do {
      iVar21 = (int)uVar37;
      pdVar10 = pdVar27->clusters;
      uVar42 = *(uint *)((longlong)pdVar10->center + uVar39 + 0x18);
      if (uVar42 != 0xffffffff) {
        do {
          pdVar11 = (pdVar27->dynamicLinksC).m_data;
          iVar21 = uVar42 + 0x80000000;
          uVar42 = pdVar11[iVar21].next;
          pdVar27 = dtNavMesh::getTileByRef(local_258->DetourNavMesh,pdVar11[iVar21].ref);
          if (pdVar27 != (dtMeshTile *)0x0) {
            pdVar12 = pdVar27->clusters;
            uVar47 = *(undefined8 *)((longlong)pdVar10->center + uVar39);
            uVar49 = *(undefined8 *)((longlong)pdVar10->center + uVar39 + 0x10);
            uVar51 = (uint)uVar47 ^ uVar59;
            uVar52 = (uint)((ulonglong)uVar47 >> 0x20) ^ uVar60;
            local_190 = *(double *)((longlong)pdVar10->center + uVar39 + 8);
            uVar53 = (uint)uVar49 ^ uVar59;
            uVar54 = (uint)((ulonglong)uVar49 >> 0x20) ^ uVar60;
            pdVar13 = local_258->DetourNavMesh;
            local_1a0 = (double)CONCAT44(uVar52,uVar51);
            uVar29 = (int)(1L << ((byte)pdVar13->m_polyBits & 0x3f)) - 1U &
                     (uint)pdVar11[iVar21].ref;
            dStack_198 = (double)CONCAT44(uVar54,uVar53);
            uVar55 = SUB84(pdVar12[(int)uVar29].center[0],0) ^ uVar59;
            uVar56 = (uint)((ulonglong)pdVar12[(int)uVar29].center[0] >> 0x20) ^ uVar60;
            uVar57 = SUB84(pdVar12[(int)uVar29].center[2],0) ^ uVar59;
            uVar58 = (uint)((ulonglong)pdVar12[(int)uVar29].center[2] >> 0x20) ^ uVar60;
            dStack_178 = pdVar12[(int)uVar29].center[1];
            dStack_188 = (double)CONCAT44(uVar56,uVar55);
            local_180 = (double)CONCAT44(uVar58,uVar57);
            if (((int)local_228 < (int)uVar29) ||
               ((int)((int)(1L << ((byte)pdVar13->m_tileBits & 0x3f)) - 1U &
                     (uint)(pdVar11[iVar21].ref >> ((byte)pdVar13->m_polyBits & 0x3f))) < param_5))
            {
              dVar46 = (double)CONCAT44(uVar56,uVar55) - (double)CONCAT44(uVar52,uVar51);
              dVar48 = (double)CONCAT44(uVar58,uVar57) - (double)CONCAT44(uVar54,uVar53);
              dVar15 = dVar48 * dVar48 + dVar46 * dVar46 +
                       (dStack_178 - local_190) * (dStack_178 - local_190);
              uVar47 = dVar46;
              uVar49 = dVar48;
              if ((dVar15 != dVar16) &&
                 (uVar47 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
                 uVar49 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y, dVar4 <= dVar15))
              {
                local_d8 = dVar16 / SQRT(dVar15);
                uVar47 = dVar46 * local_d8;
                uVar49 = dVar48 * local_d8;
              }
              dStack_188 = (double)uVar49 * dVar17;
              local_180 = (double)uVar47 * dVar17;
              local_1a0 = (double)CONCAT44(uVar52,uVar51) + dStack_188;
              dStack_188 = (double)CONCAT44(uVar56,uVar55) + dStack_188;
              dStack_198 = (double)CONCAT44(uVar54,uVar53) - local_180;
              local_180 = (double)CONCAT44(uVar58,uVar57) - local_180;
            }
            pTVar3 = &param_4->ClusterLinks;
            pFVar31 = (pTVar3->AllocatorInstance).Data;
            if (((pFVar31 <= (FScriptContainerElement *)&local_1a0) &&
                ((FScriptContainerElement *)&local_1a0 <
                 pFVar31 + (longlong)(param_4->ClusterLinks).ArrayMax * 0x30)) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar19)) {
              pcVar14 = (code *)swi(3);
              iVar21 = (*pcVar14)();
              return iVar21;
            }
            iVar21 = (param_4->ClusterLinks).ArrayNum;
            piVar1 = &(param_4->ClusterLinks).ArrayMax;
            if (iVar21 == *piVar1) {
              iVar21 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x830,&pTVar3->AllocatorInstance,piVar1);
            }
            lVar38 = (longlong)iVar21;
            (param_4->ClusterLinks).ArrayNum = iVar21 + 1;
            pFVar31 = (pTVar3->AllocatorInstance).Data;
            *(double *)(pFVar31 + lVar38 * 0x30) = local_1a0;
            *(double *)(pFVar31 + lVar38 * 0x30 + 8) = dStack_198;
            *(double *)(pFVar31 + lVar38 * 0x30 + 0x10) = local_190;
            *(double *)(pFVar31 + lVar38 * 0x30 + 0x10 + 8) = dStack_188;
            *(double *)(pFVar31 + lVar38 * 0x30 + 0x20) = local_180;
            *(double *)(pFVar31 + lVar38 * 0x30 + 0x20 + 8) = dStack_178;
          }
          pdVar27 = local_270;
        } while (uVar42 != 0xffffffff);
        iVar21 = (int)local_228;
      }
      uVar37 = (ulonglong)(iVar21 + 1U);
      pdVar41 = local_280;
      uVar39 = uVar39 + 0x20;
      local_228 = uVar37;
    } while ((int)(iVar21 + 1U) < (int)(uint)local_280->clusterCount);
  }
  uVar59 = param_4->bGatherPolyEdges;
  if ((uVar59 != 0) || (param_4->bGatherNavMeshEdges != 0)) {
    GetTilePolyEdges(local_258,local_270,SUB41(uVar59,0),param_4->bGatherNavMeshEdges,
                     &param_4->PolyEdges,&param_4->NavMeshEdges);
  }
  return (uint)pdVar41->detailVertCount + (uint)pdVar41->vertCount;
}

// GetTotalDataSize @ 146e13900

ulong64 __thiscall FPImplRecastNavMesh::GetTotalDataSize(FPImplRecastNavMesh *this)

{
  dtNavMesh *this_00;
  int iVar1;
  dtMeshTile *pdVar2;
  int iVar3;
  ulonglong uVar4;
  
  this_00 = this->DetourNavMesh;
  uVar4 = 0x150;
  if (this_00 != (dtNavMesh *)0x0) {
    iVar3 = 0;
    iVar1 = dtNavMesh::getMaxTiles(this_00);
    if (0 < iVar1) {
      do {
        pdVar2 = dtNavMesh::getTile(this_00,iVar3);
        if ((pdVar2 != (dtMeshTile *)0x0) && (pdVar2->header != (dtMeshHeader *)0x0)) {
          uVar4 = uVar4 + (longlong)pdVar2->dataSize;
        }
        iVar3 = iVar3 + 1;
        iVar1 = dtNavMesh::getMaxTiles(this_00);
      } while (iVar3 < iVar1);
    }
  }
  return uVar4 >> 10;
}

// HasTileCacheLayers @ 146e14850

bool __thiscall
FPImplRecastNavMesh::HasTileCacheLayers(FPImplRecastNavMesh *this,int param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = param_1 - param_2 ^ (uint)param_2 >> 0xd;
  uVar5 = (-0x61c88647 - uVar6) - param_2 ^ uVar6 << 8;
  uVar4 = (param_2 - uVar5) - uVar6 ^ uVar5 >> 0xd;
  uVar6 = (uVar6 - uVar4) - uVar5 ^ uVar4 >> 0xc;
  uVar5 = (uVar5 - uVar4) - uVar6 ^ uVar6 << 0x10;
  uVar4 = (uVar4 - uVar5) - uVar6 ^ uVar5 >> 5;
  uVar6 = (uVar6 - uVar4) - uVar5 ^ uVar4 >> 3;
  uVar5 = (uVar5 - uVar6) - uVar4 ^ uVar6 << 10;
  if (*(int *)&(this->CompressedTileCacheLayers).field_0x8 !=
      *(int *)&(this->CompressedTileCacheLayers).field_0x34) {
    puVar3 = *(undefined1 **)&(this->CompressedTileCacheLayers).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->CompressedTileCacheLayers).field_0x38;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)
                              (*(int *)&(this->CompressedTileCacheLayers).field_0x48 - 1U &
                              ((uVar4 - uVar5) - uVar6 ^ uVar5 >> 0xf)) * 4);
    if (iVar2 != -1) {
      do {
        uVar1 = *(undefined8 *)
                 ((longlong)iVar2 * 0x20 + *(longlong *)&this->CompressedTileCacheLayers);
        if (((int)uVar1 == param_1) && ((int)((ulonglong)uVar1 >> 0x20) == param_2))
        goto LAB_146e14947;
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + 0x18 +
                        *(longlong *)&this->CompressedTileCacheLayers);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_146e14947:
  return iVar2 != -1;
}

// InitPathfinding @ 146e14ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FPImplRecastNavMesh::InitPathfinding
          (FPImplRecastNavMesh *this,TVector<double> *param_1,TVector<double> *param_2,
          dtNavMeshQuery *param_3,dtQueryFilter *param_4,TVector<double> *param_5,ulong64 *param_6,
          TVector<double> *param_7,ulong64 *param_8,FNavMeshPath *param_9)

{
  undefined8 uVar1;
  ARecastNavMesh *pAVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStackY_158 [32];
  FString local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  ulong64 *local_f0;
  double local_e8;
  double local_e0;
  undefined8 local_d8;
  TVector<double>_u_0 local_d0;
  double local_b8;
  double local_b0;
  double local_a8;
  undefined1 local_a0;
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStackY_158;
  pAVar2 = this->NavMeshOwner;
  local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_4;
  local_f0 = param_6;
  dVar4 = (double)pAVar2->_padding_;
  dVar5 = (double)pAVar2->_padding_;
  dVar3 = __real_4290000000000000;
  if ((double)pAVar2->_padding_ < __real_4290000000000000) {
    dVar3 = (double)pAVar2->VerticalDeviationFromGroundCompensation;
    if (dVar3 <= 0.0) {
      dVar3 = 0.0;
    }
    dVar3 = dVar3 + (double)pAVar2->_padding_;
  }
  uVar7 = (uint)__xmm_80000000000000008000000000000000;
  uVar8 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  local_e8 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20) ^ uVar8
                              ,(uint)*(undefined8 *)&param_1->field0_0x0 ^ uVar7);
  local_d8 = CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar8,(uint)uVar1 ^ uVar7);
  local_e0 = (param_1->field0_0x0)._s_0.Z;
  uVar1 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  local_f8 = (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar8,(uint)uVar1 ^ uVar7);
  local_108 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20) ^
                               uVar8,(uint)*(undefined8 *)&param_2->field0_0x0 ^ uVar7);
  dStack_100 = (param_2->field0_0x0)._s_0.Z;
  *param_6 = 0;
  local_98 = dVar4;
  local_90 = dVar3;
  local_88 = dVar5;
  dtNavMeshQuery::findNearestPoly
            (param_3,&local_e8,&local_98,param_4,param_6,(double *)param_5,(double *)0x0);
  if (*local_f0 == 0) {
    if (FVisualLogger::bIsRecording != 0) {
      ::FString::PrintfImpl(&local_118,L"X=%3.3f Y=%3.3f Z=%3.3f");
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this->NavMeshOwner,(FName *)&LogNavigation.field_0x4,Log,
                 L"FPImplRecastNavMesh::InitPathfinding start point not on navmesh (%s)");
      if ((dtQueryFilter *)local_118.Data.AllocatorInstance.Data != (dtQueryFilter *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
    }
    if (4 < (byte)LogNavigation._0_1_) {
      ::FString::PrintfImpl(&local_118,L"X=%3.3f Y=%3.3f Z=%3.3f");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
      if ((dtQueryFilter *)local_118.Data.AllocatorInstance.Data != (dtQueryFilter *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
    }
    if (((FVisualLogger::bIsRecording != 0) &&
        (FVisualLogger::SegmentLogfImpl
                   ((UObject *)this->NavMeshOwner,(FName *)&LogNavigation.field_0x4,Log,param_1,
                    param_2,&FColor::Red,0,L"Failed path"), FVisualLogger::bIsRecording != 0)) &&
       (FVisualLogger::LocationLogfImpl
                  ((UObject *)this->NavMeshOwner,(FName *)&LogNavigation.field_0x4,Log,param_1,0xf,
                   &FColor::Red,L"Start failed"), FVisualLogger::bIsRecording != 0)) {
      local_d0._s_0.X = (param_1->field0_0x0)._s_0.X - dVar4;
      local_b8 = dVar4 + (param_1->field0_0x0)._s_0.X;
      local_d0._s_0.Y = (param_1->field0_0x0)._s_0.Y - dVar5;
      local_b0 = dVar5 + (param_1->field0_0x0)._s_0.Y;
      local_d0._s_0.Z = (param_1->field0_0x0)._s_0.Z - dVar3;
      local_a8 = dVar3 + (param_1->field0_0x0)._s_0.Z;
      local_a0 = 1;
      FVisualLogger::BoxLogfImpl
                ((UObject *)this->NavMeshOwner,(FName *)&LogNavigation.field_0x4,Log,
                 (TBox<double> *)&local_d0._s_0,&UE::Math::TMatrix<double>::Identity,&FColor::Red,
                 false,L"");
    }
    if (param_9 != (FNavMeshPath *)0x0) {
      *(uint *)&param_9->_padding_ = (uint)param_9->_padding_ | 0x10;
      return false;
    }
LAB_146e15060:
    bVar6 = false;
  }
  else {
    *param_8 = 0;
    dtNavMeshQuery::findNearestPoly
              (param_3,&local_108,&local_98,(dtQueryFilter *)local_118.Data.AllocatorInstance.Data,
               param_8,(double *)param_7,(double *)0x0);
    if (*param_8 == 0) {
      if ((param_3->m_query).requireNavigableEndLocation != 0) {
        if (FVisualLogger::bIsRecording != 0) {
          ::FString::PrintfImpl(&local_118,L"X=%3.3f Y=%3.3f Z=%3.3f");
          FVisualLogger::CategorizedLogfImpl
                    ((UObject *)this->NavMeshOwner,(FName *)&LogNavigation.field_0x4,Log,
                     L"FPImplRecastNavMesh::InitPathfinding end point not on navmesh (%s)");
          if ((dtQueryFilter *)local_118.Data.AllocatorInstance.Data != (dtQueryFilter *)0x0) {
            FMemory::Free(local_118.Data.AllocatorInstance.Data);
          }
        }
        if (4 < (byte)LogNavigation._0_1_) {
          ::FString::PrintfImpl(&local_118,L"X=%3.3f Y=%3.3f Z=%3.3f");
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
          if ((dtQueryFilter *)local_118.Data.AllocatorInstance.Data != (dtQueryFilter *)0x0) {
            FMemory::Free(local_118.Data.AllocatorInstance.Data);
          }
        }
        if (((FVisualLogger::bIsRecording != 0) &&
            (FVisualLogger::SegmentLogfImpl
                       ((UObject *)this->NavMeshOwner,(FName *)&LogNavigation.field_0x4,Log,param_2,
                        param_2,&FColor::Red,0,L"Failed path"), FVisualLogger::bIsRecording != 0))
           && (FVisualLogger::LocationLogfImpl
                         ((UObject *)this->NavMeshOwner,(FName *)&LogNavigation.field_0x4,Log,
                          param_2,0xf,&FColor::Red,L"End failed"), FVisualLogger::bIsRecording != 0)
           ) {
          local_d0._s_0.X = (param_2->field0_0x0)._s_0.X - dVar4;
          local_b8 = dVar4 + (param_2->field0_0x0)._s_0.X;
          local_d0._s_0.Y = (param_2->field0_0x0)._s_0.Y - dVar5;
          local_b0 = dVar5 + (param_2->field0_0x0)._s_0.Y;
          local_d0._s_0.Z = (param_2->field0_0x0)._s_0.Z - dVar3;
          local_a8 = dVar3 + (param_2->field0_0x0)._s_0.Z;
          local_a0 = 1;
          FVisualLogger::BoxLogfImpl
                    ((UObject *)this->NavMeshOwner,(FName *)&LogNavigation.field_0x4,Log,
                     (TBox<double> *)&local_d0._s_0,&UE::Math::TMatrix<double>::Identity,
                     &FColor::Red,false,L"");
        }
        if (param_9 != (FNavMeshPath *)0x0) {
          *(uint *)&param_9->_padding_ = (uint)param_9->_padding_ | 0x20;
        }
        goto LAB_146e15060;
      }
      (param_7->field0_0x0)._s_0.X = local_108;
      (param_7->field0_0x0)._s_0.Y = dStack_100;
      (param_7->field0_0x0)._s_0.Z = local_f8;
    }
    bVar6 = true;
  }
  return bVar6;
}

// IsCustomLink @ 146e15840

bool __thiscall FPImplRecastNavMesh::IsCustomLink(FPImplRecastNavMesh *this,ulong64 param_1)

{
  dtOffMeshConnection *pdVar1;
  
  if (this->DetourNavMesh != (dtNavMesh *)0x0) {
    pdVar1 = dtNavMesh::getOffMeshConnectionByRef(this->DetourNavMesh,param_1);
    if ((pdVar1 != (dtOffMeshConnection *)0x0) && (pdVar1->userId != FNavLinkId::Invalid.Id)) {
      return true;
    }
  }
  return false;
}

// MarkEmptyTileCacheLayers @ 146e167c0

void __thiscall
FPImplRecastNavMesh::MarkEmptyTileCacheLayers(FPImplRecastNavMesh *this,int param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int local_res8;
  int local_resc;
  TPairInitializer<UE::Math::TIntPoint<int>_&&,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_const_&>
  local_res10;
  FNavMeshTileData *local_28;
  undefined8 local_20;
  int *local_18;
  FNavMeshTileData **local_10;
  
  uVar7 = param_1 - param_2 ^ (uint)param_2 >> 0xd;
  uVar3 = (-0x61c88647 - uVar7) - param_2 ^ uVar7 << 8;
  uVar5 = (param_2 - uVar3) - uVar7 ^ uVar3 >> 0xd;
  uVar7 = (uVar7 - uVar5) - uVar3 ^ uVar5 >> 0xc;
  uVar3 = (uVar3 - uVar5) - uVar7 ^ uVar7 << 0x10;
  uVar5 = (uVar5 - uVar3) - uVar7 ^ uVar3 >> 5;
  uVar7 = (uVar7 - uVar5) - uVar3 ^ uVar5 >> 3;
  uVar3 = (uVar3 - uVar7) - uVar5 ^ uVar7 << 10;
  if (*(int *)&(this->CompressedTileCacheLayers).field_0x8 !=
      *(int *)&(this->CompressedTileCacheLayers).field_0x34) {
    puVar4 = *(undefined1 **)&(this->CompressedTileCacheLayers).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->CompressedTileCacheLayers).field_0x38;
    }
    iVar6 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->CompressedTileCacheLayers).field_0x48 - 1U &
                              ((uVar5 - uVar3) - uVar7 ^ uVar3 >> 0xf)) * 4);
    if (iVar6 != -1) {
      lVar1 = *(longlong *)&(this->CompressedTileCacheLayers).field_0x0;
      do {
        uVar2 = *(undefined8 *)((longlong)iVar6 * 0x20 + lVar1);
        if (((int)uVar2 == param_1) && ((int)((ulonglong)uVar2 >> 0x20) == param_2)) {
          if (iVar6 != -1) {
            return;
          }
          break;
        }
        iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + lVar1);
      } while (iVar6 != -1);
    }
  }
  local_28 = (FNavMeshTileData *)0x0;
  local_20 = 0;
  local_18 = &local_res8;
  local_10 = &local_28;
  local_res8 = param_1;
  local_resc = param_2;
  TSet<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<UE::Math::TIntPoint<int>_&&,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_const_&>_>
            ((TSet<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&this->CompressedTileCacheLayers,&local_res10,(bool *)&local_18);
  DestructItems<FNavMeshTileData,int>(local_28,(int)local_20);
  if (local_28 != (FNavMeshTileData *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// OnAreaCostChanged @ 146e18fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FPImplRecastNavMesh::OnAreaCostChanged(FPImplRecastNavMesh *this)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  INavigationQueryFilterInterface *pIVar5;
  ulonglong uVar6;
  INavigationQueryFilterInterface *pIVar7;
  uint uVar8;
  int iVar10;
  undefined1 auStackY_f8 [32];
  FIdentityFunctor local_a8 [8];
  ForAnyElementType local_a0;
  int local_98;
  int iStack_94;
  FRealntPair local_90;
  uchar local_78 [64];
  ulonglong local_38;
  ulonglong uVar9;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  if ((this->NavMeshOwner != (ARecastNavMesh *)0x0) && (this->DetourNavMesh != (dtNavMesh *)0x0)) {
    pIVar5 = ANavigationData::GetDefaultQueryFilterImpl((ANavigationData *)this->NavMeshOwner);
    uVar6 = 0;
    local_a0.Data = (FScriptContainerElement *)0x0;
    local_98 = 0;
    iStack_94 = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0x40,&local_a0,0,&iStack_94);
    pIVar7 = pIVar5 + 2;
    uVar9 = uVar6;
    if (pIVar5 == (INavigationQueryFilterInterface *)0x0) {
      pIVar7 = (INavigationQueryFilterInterface *)&DAT_00000008;
    }
    do {
      local_90.Score = (double)pIVar7[0x40] + (double)*pIVar7;
      iVar10 = (int)uVar9;
      local_90.Index = iVar10;
      if (((local_a0.Data <= &local_90) &&
          (&local_90 < (FRealntPair *)(local_a0.Data + (longlong)iStack_94 * 0x10))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (local_98 == iStack_94) {
        local_98 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_a0,&iStack_94);
      }
      iVar1 = local_98 + 1;
      pIVar7 = pIVar7 + 1;
      *(double *)&local_a0.Data[(longlong)local_98 * 0x10].field_0x0 = local_90.Score;
      *(ulonglong *)(local_a0.Data + (longlong)local_98 * 0x10 + 8) =
           CONCAT44(local_90._12_4_,local_90.Index);
      uVar9 = (ulonglong)(iVar10 + 1U);
      local_98 = iVar1;
    } while ((int)(iVar10 + 1U) < 0x40);
    AlgoImpl::
    IntroSortInternal<_FPImplRecastNavMesh::OnAreaCostChanged_::__l2::FRealntPair,int,FIdentityFunctor,TDereferenceWrapper<_FPImplRecastNavMesh::OnAreaCostChanged_::__l2::FRealntPair,TLess<void>_>_>
              ((FRealntPair *)local_a0.Data,iVar1,local_a8[0],(TLess<void> *)local_a8);
    uVar9 = uVar6;
    do {
      if ((local_98 <= (int)uVar9) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = uVar6 + 8;
      uVar6 = uVar6 + 0x10;
      local_78[*(int *)(local_a0.Data + lVar2)] = (uchar)uVar9;
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
    } while ((int)uVar8 < 0x40);
    dtNavMesh::applyAreaCostOrder(this->DetourNavMesh,local_78);
    if ((FRealntPair *)local_a0.Data != (FRealntPair *)0x0) {
      FMemory::Free(local_a0.Data);
    }
  }
  return;
}

// PostProcessPath @ 146e1b5b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPImplRecastNavMesh::PostProcessPath
          (FPImplRecastNavMesh *this,uint param_1,FNavMeshPath *param_2,dtNavMeshQuery *param_3,
          dtQueryFilter *param_4,ulong64 param_5,ulong64 param_6,TVector<double> *param_7,
          TVector<double> *param_8,TVector<double> *param_9,TVector<double> *param_10,
          dtQueryResult *param_11)

{
  int *piVar1;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FNavLinkId,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FNavigationPortalEdge,TSizedDefaultAllocator<32>_> *pTVar4;
  double dVar5;
  undefined8 uVar6;
  dtNavMesh *this_00;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  FName FVar12;
  double dVar13;
  ForAnyElementType _Src;
  bool bVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_Navigation_OutOfNodesPath> FVar19;
  FThreadStats *pFVar20;
  FThreadStatsPool *pFVar21;
  FThreadSafeStaticStat<FStat_STAT_Navigation_PartialPath> FVar22;
  UObject *pUVar23;
  UClass *pUVar24;
  dtOffMeshConnection *pdVar25;
  double *pdVar26;
  longlong lVar27;
  FName FVar28;
  ulonglong uVar29;
  dtNavMeshQuery *pdVar30;
  FScriptContainerElement *pFVar31;
  uint uVar32;
  FScriptContainerElement *pFVar33;
  longlong lVar34;
  ulonglong uVar35;
  longlong lVar36;
  FPImplRecastNavMesh *this_01;
  undefined1 auStackY_198 [32];
  ushort local_138 [4];
  FPImplRecastNavMesh *local_130;
  FName local_128;
  int local_120;
  TVector<double> *local_118;
  double local_110;
  TVector<double> *local_108;
  ulong64 local_100;
  dtNavMeshQuery *local_f8;
  TArray<FNavigationPortalEdge,TSizedDefaultAllocator<32>_> local_f0;
  uint local_e0;
  TVector<double> *local_d8;
  TVector<double> *local_d0;
  FName local_c8;
  FName local_c0;
  FStatMessage local_b8;
  FStatMessage local_a8;
  TVector<double>_u_0 local_98;
  FName local_80;
  FName local_78;
  double local_70;
  double local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_110 = (double)param_5;
  local_118 = param_7;
  local_108 = param_8;
  local_d8 = param_10;
  local_d0 = param_9;
  local_130 = this;
  local_f8 = param_3;
  local_e0 = param_1;
  if ((param_4 == (dtQueryFilter *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Filter",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\PImplRecastNavMesh.cpp"
                          ,0x582,L""), bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((param_1 >> 0x1e & 1) != 0) {
    iVar17 = (param_11->data).m_size;
    local_120 = iVar17;
    if (((1 < iVar17) && (local_130->NavMeshOwner != (ARecastNavMesh *)0x0)) &&
       (local_130->NavMeshOwner->bAllowNavLinkAsPathEnd == 0)) {
      local_138[0] = 0;
      dtNavMesh::getPolyFlags
                (local_130->DetourNavMesh,(param_11->data).m_data[iVar17 + -1].ref,local_138);
      local_120 = iVar17;
      if ((ARecastNavMesh::NavLinkFlag & local_138[0]) != 0) {
        local_120 = iVar17 + -1;
      }
    }
    iVar17 = local_120;
    FVar28 = (FName)&(param_2->PathCorridorCost).ArrayNum;
    local_128 = FVar28;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_120,&(param_2->PathCorridorCost).AllocatorInstance,(int *)FVar28,
               &(param_2->PathCorridorCost).ArrayMax);
    FVar12 = local_128;
    lVar34 = (longlong)iVar17;
    if (iVar17 == 1) {
      dVar8 = CalcSegmentCostOnPoly(local_130,(ulong64)local_110,param_4,local_108,local_118);
      if ((*(int *)FVar28 < 1) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(double *)(param_2->PathCorridorCost).AllocatorInstance.Data = dVar8;
    }
    else {
      uVar16 = 0;
      lVar27 = 0;
      FVar28 = local_128;
      if (0 < iVar17) {
        lVar36 = 0;
        do {
          uVar6 = *(undefined8 *)((longlong)((param_11->data).m_data)->pos + lVar36 + -8);
          uVar32 = 0;
          if ((int)uVar16 < *(int *)FVar12) {
            uVar32 = ~uVar16 >> 0x1f;
          }
          if ((uVar32 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar16 = uVar16 + 1;
          lVar36 = lVar36 + 0x30;
          *(undefined8 *)((param_2->PathCorridorCost).AllocatorInstance.Data + lVar27 * 8) = uVar6;
          lVar27 = lVar27 + 1;
          FVar28 = local_128;
          iVar17 = local_120;
        } while (lVar27 < lVar34);
      }
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar17,&(param_2->PathCorridor).AllocatorInstance,
               &(param_2->PathCorridor).ArrayNum,&(param_2->PathCorridor).ArrayMax);
    pTVar2 = &param_2->PathCorridor;
    if (0 < lVar34) {
      lVar27 = 0;
      pFVar31 = (pTVar2->AllocatorInstance).Data;
      do {
        *(undefined8 *)pFVar31 =
             *(undefined8 *)((longlong)((param_11->data).m_data)->pos + lVar27 + -0x10);
        lVar34 = lVar34 + -1;
        lVar27 = lVar27 + 0x30;
        pFVar31 = pFVar31 + 8;
      } while (lVar34 != 0);
    }
    param_2->bCorridorEdgesGenerated = 0;
    if ((param_4->data).m_isBacktracking != false) {
      AlgoImpl::Reverse<FNavPathPoint>((FNavPathPoint *)param_2->_padding_,(int)param_2->_padding_);
      iVar17 = (param_2->PathCorridor).ArrayNum;
      lVar34 = 0;
      pFVar31 = (pTVar2->AllocatorInstance).Data;
      iVar15 = iVar17 / 2;
      if (0 < iVar15) {
        pFVar33 = pFVar31 + (longlong)(iVar17 + -1) * 8;
        do {
          uVar6 = *(undefined8 *)(pFVar31 + lVar34 * 8);
          *(undefined8 *)(pFVar31 + lVar34 * 8) = *(undefined8 *)pFVar33;
          lVar34 = lVar34 + 1;
          *(undefined8 *)pFVar33 = uVar6;
          pFVar33 = pFVar33 + -8;
        } while (lVar34 < iVar15);
      }
      AlgoImpl::Reverse<double>
                ((double *)(param_2->PathCorridorCost).AllocatorInstance.Data,*(int *)FVar28);
      if (param_2->bCorridorEdgesGenerated != 0) {
        AlgoImpl::Reverse<FNavigationPortalEdge>
                  ((FNavigationPortalEdge *)(param_2->PathCorridorEdges).AllocatorInstance.Data,
                   (param_2->PathCorridorEdges).ArrayNum);
      }
      dVar13 = local_110;
      local_110 = (double)param_6;
      dVar9 = (local_118->field0_0x0)._s_0.X;
      dVar10 = (local_118->field0_0x0)._s_0.Y;
      dVar8 = (local_118->field0_0x0)._s_0.Z;
      dVar11 = (local_108->field0_0x0)._s_0.Y;
      dVar5 = (local_108->field0_0x0)._s_0.Z;
      (local_118->field0_0x0)._s_0.X = (local_108->field0_0x0)._s_0.X;
      (local_118->field0_0x0)._s_0.Y = dVar11;
      (local_108->field0_0x0)._s_0.X = dVar9;
      (local_108->field0_0x0)._s_0.Y = dVar10;
      (local_118->field0_0x0)._s_0.Z = dVar5;
      (local_108->field0_0x0)._s_0.Z = dVar8;
      dVar9 = (local_d8->field0_0x0)._s_0.Y;
      dVar10 = (local_d0->field0_0x0)._s_0.X;
      dVar11 = (local_d0->field0_0x0)._s_0.Y;
      dVar8 = (local_d0->field0_0x0)._s_0.Z;
      dVar5 = (local_d8->field0_0x0)._s_0.Z;
      (local_d0->field0_0x0)._s_0.X = (local_d8->field0_0x0)._s_0.X;
      (local_d0->field0_0x0)._s_0.Y = dVar9;
      (local_d8->field0_0x0)._s_0.X = dVar10;
      (local_d8->field0_0x0)._s_0.Y = dVar11;
      (local_d0->field0_0x0)._s_0.Z = dVar5;
      (local_d8->field0_0x0)._s_0.Z = dVar8;
      param_6 = (ulong64)dVar13;
    }
    uVar16 = local_e0;
    if (((local_e0 >> 5 & 1) != 0) && (FThreadStats::bPrimaryEnable != false)) {
      FVar19 = StatPtr_STAT_Navigation_OutOfNodesPath;
      if (StatPtr_STAT_Navigation_OutOfNodesPath ==
          (FThreadSafeStaticStat<FStat_STAT_Navigation_OutOfNodesPath>)0x0) {
        pFVar18 = ::FName::FName(&local_80,"STAT_Navigation_OutOfNodesPath");
        FVar19 = (FThreadSafeStaticStat<FStat_STAT_Navigation_OutOfNodesPath>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_OutOfNodesPath,
                            *pFVar18,L"Out of nodes path","STATGROUP_Navigation","STATCAT_Advanced",
                            L"Navigation",true,true,ST_int64,false,false,MCR_Invalid);
      }
      FVar28 = *(FName *)FVar19;
      local_128 = FVar28;
      if (((FVar28 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar20 == (FThreadStats *)0x0) {
          pFVar21 = FThreadStatsPool::Get();
          pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
        }
        local_b8.NameAndInfo.Number = FVar28.Number & 0xffffafff | 0xa000;
        local_b8.StatData.Pad[0] = '\x01';
        local_b8.StatData.Pad[1] = '\0';
        local_b8.StatData.Pad[2] = '\0';
        local_b8.StatData.Pad[3] = '\0';
        local_b8.StatData.Pad[4] = '\0';
        local_b8.StatData.Pad[5] = '\0';
        local_b8.StatData.Pad[6] = '\0';
        local_b8.StatData.Pad[7] = '\0';
        local_c8 = FVar28;
        local_b8.NameAndInfo.Index.Value = FVar28.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar20,&local_b8);
        FStatsTrace::Add(&local_c8,1);
        if (pFVar20->ScopeCount == 0) {
          FThreadStats::Flush(pFVar20,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar20,false,false);
        }
      }
    }
    if (((uVar16 >> 6 & 1) != 0) && (FThreadStats::bPrimaryEnable != false)) {
      FVar22 = StatPtr_STAT_Navigation_PartialPath;
      if (StatPtr_STAT_Navigation_PartialPath ==
          (FThreadSafeStaticStat<FStat_STAT_Navigation_PartialPath>)0x0) {
        pFVar18 = ::FName::FName(&local_78,"STAT_Navigation_PartialPath");
        FVar22 = (FThreadSafeStaticStat<FStat_STAT_Navigation_PartialPath>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_PartialPath,
                            *pFVar18,L"Partial path","STATGROUP_Navigation","STATCAT_Advanced",
                            L"Navigation",true,true,ST_int64,false,false,MCR_Invalid);
      }
      FVar28 = *(FName *)FVar22;
      local_128 = FVar28;
      if (((FVar28 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar20 == (FThreadStats *)0x0) {
          pFVar21 = FThreadStatsPool::Get();
          pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
        }
        local_a8.NameAndInfo.Number = FVar28.Number & 0xffffafff | 0xa000;
        local_a8.StatData.Pad[0] = '\x01';
        local_a8.StatData.Pad[1] = '\0';
        local_a8.StatData.Pad[2] = '\0';
        local_a8.StatData.Pad[3] = '\0';
        local_a8.StatData.Pad[4] = '\0';
        local_a8.StatData.Pad[5] = '\0';
        local_a8.StatData.Pad[6] = '\0';
        local_a8.StatData.Pad[7] = '\0';
        local_c0 = FVar28;
        local_a8.NameAndInfo.Index.Value = FVar28.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar20,&local_a8);
        FStatsTrace::Add(&local_c0,1);
        if (pFVar20->ScopeCount == 0) {
          FThreadStats::Flush(pFVar20,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar20,false,false);
        }
      }
    }
    if (param_2->bWantsStringPulling == 0) {
      uVar16 = (uint)param_2->_padding_;
      if (uVar16 == *(uint *)((longlong)&param_2->_padding_ + 4)) {
        uVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,(ForAnyElementType *)&param_2->_padding_,
                            (int *)((longlong)&param_2->_padding_ + 4));
      }
      *(uint *)&param_2->_padding_ = uVar16 + 1;
      uVar32 = 0;
      if ((int)uVar16 < (int)(uVar16 + 1)) {
        uVar32 = ~uVar16 >> 0x1f;
      }
      if ((uVar32 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pdVar26 = (double *)((longlong)(int)uVar16 * 0x30 + param_2->_padding_);
      if (pdVar26 != (double *)0x0) {
        pdVar26[4] = 0.0;
        dVar5 = (local_118->field0_0x0)._s_0.Y;
        dVar8 = (local_118->field0_0x0)._s_0.Z;
        *pdVar26 = (local_118->field0_0x0)._s_0.X;
        pdVar26[1] = dVar5;
        pdVar26[3] = local_110;
        pdVar26[2] = dVar8;
        pdVar26[5] = 0.0;
      }
      uVar16 = (uint)param_2->_padding_;
      if (uVar16 == *(uint *)((longlong)&param_2->_padding_ + 4)) {
        uVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,(ForAnyElementType *)&param_2->_padding_,
                            (int *)((longlong)&param_2->_padding_ + 4));
      }
      *(uint *)&param_2->_padding_ = uVar16 + 1;
      uVar32 = 0;
      if ((int)uVar16 < (int)(uVar16 + 1)) {
        uVar32 = ~uVar16 >> 0x1f;
      }
      if ((uVar32 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      this_01 = local_130;
      uVar29 = 0;
      pdVar26 = (double *)((longlong)(int)uVar16 * 0x30 + param_2->_padding_);
      if (pdVar26 != (double *)0x0) {
        pdVar26[3] = (double)param_6;
        pdVar26[4] = 0.0;
        dVar5 = (local_108->field0_0x0)._s_0.Y;
        dVar8 = (local_108->field0_0x0)._s_0.Z;
        *pdVar26 = (local_108->field0_0x0)._s_0.X;
        pdVar26[1] = dVar5;
        pdVar26[2] = dVar8;
        pdVar26[5] = 0.0;
      }
      pdVar30 = local_f8;
      uVar35 = uVar29;
      if (0 < (param_2->PathCorridor).ArrayNum) {
        do {
          uVar32 = (uint)uVar29;
          this_00 = this_01->DetourNavMesh;
          uVar16 = 0;
          if ((int)uVar32 < (param_2->PathCorridor).ArrayNum) {
            uVar16 = ~uVar32 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pdVar25 = dtNavMesh::getOffMeshConnectionByRef
                              (this_00,*(ulong64 *)((pTVar2->AllocatorInstance).Data + uVar35));
          if (pdVar25 != (dtOffMeshConnection *)0x0) {
            local_100 = pdVar25->userId;
            pTVar3 = &param_2->CustomNavLinkIds;
            pFVar31 = (pTVar3->AllocatorInstance).Data;
            if (((pFVar31 <= (FScriptContainerElement *)&local_100) &&
                ((FScriptContainerElement *)&local_100 <
                 pFVar31 + (longlong)(param_2->CustomNavLinkIds).ArrayMax * 8)) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar14)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar17 = (param_2->CustomNavLinkIds).ArrayNum;
            piVar1 = &(param_2->CustomNavLinkIds).ArrayMax;
            if (iVar17 == *piVar1) {
              iVar17 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&pTVar3->AllocatorInstance,piVar1);
            }
            (param_2->CustomNavLinkIds).ArrayNum = iVar17 + 1;
            *(ulong64 *)((pTVar3->AllocatorInstance).Data + (longlong)iVar17 * 8) = local_100;
          }
          uVar29 = (ulonglong)(uVar32 + 1);
          pdVar30 = local_f8;
          uVar35 = uVar35 + 8;
        } while ((int)(uVar32 + 1) < (param_2->PathCorridor).ArrayNum);
      }
    }
    else {
      local_98._s_0.Z = (local_108->field0_0x0)._s_0.Z;
      local_98._s_0.X = (local_108->field0_0x0)._s_0.X;
      local_98._s_0.Y = (local_108->field0_0x0)._s_0.Y;
      pdVar30 = local_f8;
      if ((uVar16 >> 6 & 1) != 0) {
        iVar17 = (param_2->PathCorridor).ArrayNum;
        uVar32 = iVar17 - 1;
        uVar16 = 0;
        if ((int)uVar32 < iVar17) {
          uVar16 = ~uVar32 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pdVar30 = local_f8;
        uVar16 = dtNavMeshQuery::closestPointOnPoly
                           (local_f8,*(ulong64 *)
                                      ((pTVar2->AllocatorInstance).Data +
                                      (longlong)(param_2->PathCorridor).ArrayNum * 8 + -8),
                            (double *)local_d8,&local_70);
        if ((uVar16 >> 0x1e & 1) != 0) {
          local_98._4_4_ =
               (uint)((ulonglong)local_70 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
          local_98._0_4_ = SUB84(local_70,0) ^ (uint)__xmm_80000000000000008000000000000000;
          local_98._12_4_ =
               (uint)((ulonglong)local_60 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
          local_98._8_4_ = (uint)local_60 ^ (uint)__xmm_80000000000000008000000000000000;
          local_98._s_0.Z = local_68;
        }
      }
      pUVar23 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&param_2->_padding_ + 4));
      this_01 = local_130;
      if (pUVar23 != (UObject *)0x0) {
        pUVar24 = ARecastNavMesh::GetPrivateStaticClass();
        iVar17 = (int)pUVar24->_padding_;
        this_01 = local_130;
        if (((iVar17 <= *(int *)(*(longlong *)&pUVar23->field_0x10 + 0x38)) &&
            ((longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)&pUVar23->field_0x10 + 0x30) + (longlong)iVar17 * 8) ==
             &pUVar24->_padding_)) &&
           (((*(uint *)&pUVar23->field_0x8 >> 0x1e & 1) == 0 &&
            ((param_2->PathCorridor).ArrayNum != 0)))) {
          if ((*(FPImplRecastNavMesh **)&pUVar23[0x2f].field_0x8 == (FPImplRecastNavMesh *)0x0) ||
             (bVar14 = FindStraightPath(*(FPImplRecastNavMesh **)&pUVar23[0x2f].field_0x8,local_118,
                                        (TVector<double> *)&local_98._s_0,pTVar2,
                                        (TArray<FNavPathPoint,TSizedDefaultAllocator<32>_> *)
                                        &param_2->_padding_,&param_2->CustomNavLinkIds), !bVar14)) {
            uVar16 = 0;
          }
          else {
            uVar16 = 4;
          }
          param_2->bStringPulled = 0;
          *(uint *)&param_2->field_0x180 = *(uint *)&param_2->field_0x180 | uVar16;
          this_01 = local_130;
        }
      }
    }
    if (param_2->bWantsPathCorridor != 0) {
      local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f0.ArrayNum = 0;
      local_f0.ArrayMax = 0;
      GetEdgesForPathCorridorImpl(this_01,pTVar2,&local_f0,pdVar30);
      _Src.Data = local_f0.AllocatorInstance.Data;
      pTVar4 = &param_2->PathCorridorEdges;
      if (pTVar4 != &local_f0) {
        iVar17 = local_f0.ArrayNum;
        lVar34 = (longlong)local_f0.ArrayNum;
        piVar1 = &(param_2->PathCorridorEdges).ArrayMax;
        (param_2->PathCorridorEdges).ArrayNum = local_f0.ArrayNum;
        if ((local_f0.ArrayNum == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x38,8,local_f0.ArrayNum,*piVar1,&pTVar4->AllocatorInstance,local_f0.ArrayNum,
                     piVar1);
          if (iVar17 != 0) {
            memcpy((pTVar4->AllocatorInstance).Data,_Src.Data,lVar34 * 0x38);
          }
        }
      }
      param_2->bCorridorEdgesGenerated = 1;
      if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// PostProcessPathInternal @ 146e1c140

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
FPImplRecastNavMesh::PostProcessPathInternal
          (FPImplRecastNavMesh *this,uint param_1,FNavMeshPath *param_2,dtNavMeshQuery *param_3,
          dtQueryFilter *param_4,ulong64 param_5,ulong64 param_6,TVector<double> *param_7,
          TVector<double> *param_8,dtQueryResult *param_9)

{
  int *piVar1;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined8 uVar4;
  double dVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  dtQueryResult *pdVar8;
  bool bVar9;
  Type TVar10;
  int iVar11;
  undefined8 *puVar12;
  FVisualLogger *this_00;
  uint uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  uint uVar16;
  uint uVar17;
  byte local_res10 [8];
  ulong64 local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  code *local_e0;
  dtQueryResult **local_d8;
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_68 [2];
  
  pdVar8 = param_9;
  uVar13 = param_1 & 0x40;
  if (((param_9->data).m_size == 1) && (uVar13 != 0)) {
    dtNavMeshQuery::closestPointOnPolyBoundary(param_3,param_5,(double *)param_8,&local_f8);
    puVar12 = operator_new<FNavPathPoint,TSizedDefaultAllocator<32>_>
                        (0x30,(TArray<FNavPathPoint,TSizedDefaultAllocator<32>_> *)
                              &param_2->_padding_);
    uVar16 = (uint)__xmm_80000000000000008000000000000000;
    uVar17 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    if (puVar12 != (undefined8 *)0x0) {
      uVar4 = *(undefined8 *)((longlong)&param_7->field0_0x0 + 0x10);
      dVar5 = (param_7->field0_0x0)._s_0.Y;
      *puVar12 = CONCAT44((uint)((ulonglong)*(undefined8 *)&param_7->field0_0x0 >> 0x20) ^ uVar17,
                          (uint)*(undefined8 *)&param_7->field0_0x0 ^ uVar16);
      puVar12[1] = CONCAT44((uint)((ulonglong)uVar4 >> 0x20) ^ uVar17,(uint)uVar4 ^ uVar16);
      puVar12[2] = dVar5;
      puVar12[3] = param_5;
      puVar12[4] = 0;
      puVar12[5] = 0;
    }
    puVar12 = operator_new<FNavPathPoint,TSizedDefaultAllocator<32>_>
                        (0x30,(TArray<FNavPathPoint,TSizedDefaultAllocator<32>_> *)
                              &param_2->_padding_);
    if (puVar12 != (undefined8 *)0x0) {
      *puVar12 = CONCAT44((uint)((ulonglong)local_f8 >> 0x20) ^ uVar17,SUB84(local_f8,0) ^ uVar16);
      puVar12[1] = CONCAT44((uint)((ulonglong)local_e8 >> 0x20) ^ uVar17,SUB84(local_e8,0) ^ uVar16)
      ;
      puVar12[2] = local_f0;
      puVar12[3] = param_5;
      puVar12[4] = 0;
      puVar12[5] = 0;
    }
    pTVar2 = &param_2->PathCorridor;
    local_108 = ((pdVar8->data).m_data)->ref;
    pFVar6 = (pTVar2->AllocatorInstance).Data;
    if ((pFVar6 <= (FScriptContainerElement *)&local_108) &&
       ((FScriptContainerElement *)&local_108 <
        pFVar6 + (longlong)(param_2->PathCorridor).ArrayMax * 8)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        TVar10 = (*pcVar7)();
        return TVar10;
      }
    }
    iVar11 = (param_2->PathCorridor).ArrayNum;
    piVar1 = &(param_2->PathCorridor).ArrayMax;
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (param_2->PathCorridor).ArrayNum = iVar11 + 1;
    pTVar3 = &param_2->PathCorridorCost;
    local_res10[0] = 0x3f;
    *(ulong64 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 8) = local_108;
    dtNavMesh::getPolyArea(this->DetourNavMesh,param_5,local_res10);
    local_f0 = (param_7->field0_0x0)._s_0.Y - local_f0;
    local_e8 = (param_7->field0_0x0)._s_0.Z - local_e8;
    local_f8 = (param_7->field0_0x0)._s_0.X - local_f8;
    pFVar6 = (pTVar3->AllocatorInstance).Data;
    auVar14._0_8_ = local_e8 * local_e8;
    auVar14._8_8_ = 0;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = local_f0 * local_f0 + local_f8 * local_f8 + auVar14._0_8_;
    auVar15 = sqrtpd(auVar14,auVar15);
    local_100 = auVar15._0_8_ * (param_4->data).m_areaCost[local_res10[0]];
    if ((pFVar6 <= (FScriptContainerElement *)&local_100) &&
       ((FScriptContainerElement *)&local_100 <
        pFVar6 + (longlong)(param_2->PathCorridorCost).ArrayMax * 8)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        TVar10 = (*pcVar7)();
        return TVar10;
      }
    }
    iVar11 = (param_2->PathCorridorCost).ArrayNum;
    piVar1 = &(param_2->PathCorridorCost).ArrayMax;
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar3->AllocatorInstance,piVar1);
    }
    (param_2->PathCorridorCost).ArrayNum = iVar11 + 1;
    *(double *)((pTVar3->AllocatorInstance).Data + (longlong)iVar11 * 8) = local_100;
  }
  else {
    uVar16 = (uint)__xmm_80000000000000008000000000000000;
    uVar17 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    local_88._s_0.X = (param_8->field0_0x0)._s_0.X;
    local_88._s_0.Y = (param_8->field0_0x0)._s_0.Y;
    local_88._s_0.Z = (param_8->field0_0x0)._s_0.Z;
    local_68[0]._0_8_ = (param_7->field0_0x0)._s_0.X;
    local_68[0]._8_8_ = (param_7->field0_0x0)._s_0.Y;
    local_68[0]._16_8_ = (param_7->field0_0x0)._s_0.Z;
    local_c8._s_0.X =
         (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_8->field0_0x0 >> 0x20) ^ uVar17,
                          (uint)*(undefined8 *)&param_8->field0_0x0 ^ uVar16);
    local_a8._s_0.X =
         (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_7->field0_0x0 >> 0x20) ^ uVar17,
                          (uint)*(undefined8 *)&param_7->field0_0x0 ^ uVar16);
    uVar4 = *(undefined8 *)((longlong)&param_8->field0_0x0 + 0x10);
    local_c8._s_0.Y =
         (double)CONCAT44((uint)((ulonglong)uVar4 >> 0x20) ^ uVar17,(uint)uVar4 ^ uVar16);
    local_c8._s_0.Z = (param_8->field0_0x0)._s_0.Y;
    uVar4 = *(undefined8 *)((longlong)&param_7->field0_0x0 + 0x10);
    local_a8._s_0.Y =
         (double)CONCAT44((uint)((ulonglong)uVar4 >> 0x20) ^ uVar17,(uint)uVar4 ^ uVar16);
    local_a8._s_0.Z = (param_7->field0_0x0)._s_0.Y;
    PostProcessPath(this,param_1,param_2,param_3,param_4,param_5,param_6,
                    (TVector<double> *)&local_a8._s_0,(TVector<double> *)&local_c8._s_0,
                    (TVector<double> *)&local_68[0]._s_0,(TVector<double> *)&local_88._s_0,param_9);
    if (uVar13 == 0) goto LAB_146e1c521;
  }
  *(uint *)&param_2->_padding_ =
       (param_1 & 0x20 | 0x10) >> 2 | (uint)param_2->_padding_ & 0xfffffff7;
LAB_146e1c521:
  if ((char)param_1 < '\0') {
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this->NavMeshOwner,(FName *)&LogNavigation.field_0x4,Error,
                 L"FPImplRecastNavMesh::FindPath resulted in a cyclic path!");
    }
    this_00 = FVisualLogger::Get();
    local_d8 = &param_9;
    local_e0 = UE::Core::Private::Function::
               TFunctionRefCaller<`FPImplRecastNavMesh::PostProcessPathInternal'::__l13::<lambda_1>,void,FVisualLogEntry_&>
               ::Call;
    param_9 = (dtQueryResult *)param_2;
    FVisualLogger::ExecuteOnLastEntryForObject
              (this_00,(UObject *)this->NavMeshOwner,
               (TFunctionRef<void___cdecl(FVisualLogEntry_&)> *)&local_e0);
  }
  *(uint *)&param_2->_padding_ = (uint)param_2->_padding_ | 2;
  if ((param_1 >> 0x1e & 1) != 0) {
    return Success - (uVar13 != 0);
  }
  return Fail - ((param_1 & 8) != 0);
}

// ProcessSegmentLinksForTile @ 146e1d120

void __thiscall
FPImplRecastNavMesh::ProcessSegmentLinksForTile(FPImplRecastNavMesh *this,FNavTileRef param_1)

{
  uint local_res8 [8];
  
  if (this->DetourNavMesh != (dtNavMesh *)0x0) {
    dtNavMesh::processSegmentLinksForTile
              (this->DetourNavMesh,param_1.TileRef,0,(ulong64 *)0x0,local_res8);
  }
  return;
}

// ProcessSegmentLinksForTile @ 146e1d150

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPImplRecastNavMesh::ProcessSegmentLinksForTile
          (FPImplRecastNavMesh *this,FNavTileRef param_1,uint param_2,ulong64 *param_3,uint *param_4
          )

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  dtMeshHeader *pdVar5;
  dtMeshTile *pdVar6;
  dtNavMesh *this_00;
  int iVar7;
  dtOffMeshSegmentData *_Dst;
  dtMeshTile **ppdVar8;
  byte bVar9;
  byte bVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  double *pdVar15;
  dtMeshTile *pdVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 auStackY_1198 [32];
  ReadTilesHelper aRStack_1118 [15];
  ulonglong uStack_48;
  
  this_00 = this->DetourNavMesh;
  if (this_00 == (dtNavMesh *)0x0) {
    return;
  }
  if (param_1.TileRef != 0) {
    uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_1198;
    bVar9 = (byte)this_00->m_tileBits;
    bVar10 = (byte)this_00->m_polyBits;
    uVar12 = (int)(1L << (bVar9 & 0x3f)) - 1U & (uint)(param_1.TileRef >> (bVar10 & 0x3f));
    if ((((int)uVar12 < this_00->m_maxTiles) &&
        (pdVar16 = this_00->m_tiles + uVar12,
        pdVar16->salt ==
        ((uint)(param_1.TileRef >> (bVar9 + bVar10 & 0x3f)) &
        (int)(1L << ((byte)this_00->m_saltBits & 0x3f)) - 1U))) && (pdVar16 != (dtMeshTile *)0x0)) {
      pdVar5 = pdVar16->header;
      if (pdVar5 != (dtMeshHeader *)0x0) {
        iVar3 = pdVar5->y;
        iVar4 = pdVar5->x;
        uVar1 = pdVar5->layer;
        if (4 < (byte)LogSegmentLink._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSegmentLink);
        }
        uVar2 = pdVar16->header->offMeshSegConCount;
        uVar17 = (ulonglong)uVar2;
        if ((uVar2 != 0) &&
           (_Dst = (*sAllocFunc)((uint)uVar2 * 0x610,DT_ALLOC_TEMP),
           _Dst != (dtOffMeshSegmentData *)0x0)) {
          if (4 < (byte)LogSegmentLink._0_1_) {
            UE::Logging::Private::BasicLog<5>
                      ((FStaticBasicLogRecord *)&PTR_u_____hs_for_tile_150da0180,
                       (FLogCategoryBase *)&LogSegmentLink);
          }
          memset(_Dst,0,uVar17 * 0x610);
          uVar14 = 0;
          uVar18 = uVar14;
          for (; uVar17 != 0; uVar17 = uVar17 - 1) {
            pdVar15 = (double *)((longlong)pdVar16->offMeshSeg->startA + uVar14);
            gatherSegmentIntersections
                      (pdVar16,pdVar15,pdVar15 + 3,pdVar15[0xc],(this_00->m_params).walkableClimb,
                       &_Dst[(int)uVar18].listA);
            gatherSegmentIntersections
                      (pdVar16,pdVar15 + 6,pdVar15 + 9,pdVar15[0xc],
                       (this_00->m_params).walkableClimb,&_Dst[(int)uVar18].listB);
            uVar18 = (ulonglong)((int)uVar18 + 1);
            uVar14 = uVar14 + 0x70;
          }
          *param_4 = 0;
          aRStack_1118[0].NumAllocated = 0;
          aRStack_1118[0].AllocatedTiles = (dtMeshTile **)0x0;
          if (4 < (byte)LogSegmentLink._0_1_) {
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSegmentLink);
          }
          iVar7 = dtNavMesh::getTileCountAt(this_00,iVar4,iVar3);
          ppdVar8 = ReadTilesHelper::PrepareArray(aRStack_1118,iVar7);
          dtNavMesh::getTilesAt(this_00,iVar4,iVar3,ppdVar8,iVar7);
          if (0 < iVar7) {
            lVar13 = 0;
            do {
              pdVar6 = ppdVar8[lVar13];
              if ((pdVar6 != pdVar16) && (pdVar5 = pdVar6->header, pdVar5 != (dtMeshHeader *)0x0)) {
                if ((pdVar5->x < iVar4) && ((pdVar5->y < iVar3 && (pdVar5->layer < uVar1)))) {
                  uVar12 = *param_4;
                  if (uVar12 < param_2) {
                    if (pdVar6 == (dtMeshTile *)0x0) {
                      param_3[uVar12] = 0;
                      *param_4 = *param_4 + 1;
                      goto LAB_1446a0467;
                    }
                    lVar11 = (longlong)pdVar6 - (longlong)this_00->m_tiles;
                    lVar11 = SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816(lVar11),8) + lVar11;
                    bVar9 = (byte)this_00->m_polyBits;
                    param_3[uVar12] =
                         (ulonglong)(uint)((int)(lVar11 >> 7) - (int)(lVar11 >> 0x3f)) <<
                         (bVar9 & 0x3f) |
                         (ulonglong)pdVar6->salt << ((char)this_00->m_tileBits + bVar9 & 0x3f);
                  }
                  *param_4 = *param_4 + 1;
                }
                else {
                  appendSegmentIntersection(this_00,_Dst,pdVar16,pdVar6);
                }
              }
LAB_1446a0467:
              lVar13 = lVar13 + 1;
            } while (lVar13 < iVar7);
          }
          if (4 < (byte)LogSegmentLink._0_1_) {
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSegmentLink);
          }
          iVar7 = dtNavMesh::getNeighbourTilesCountAt(this_00,iVar4,iVar3,0);
          if ((0x1f < iVar7) && (aRStack_1118[0].NumAllocated < iVar7)) {
            if (aRStack_1118[0].AllocatedTiles != (dtMeshTile **)0x0) {
              (*sFreeFunc)(aRStack_1118[0].AllocatedTiles,DT_ALLOC_TEMP);
            }
            aRStack_1118[0].AllocatedTiles = (*sAllocFunc)(iVar7 * 8,DT_ALLOC_TEMP);
            aRStack_1118[0].NumAllocated = 0;
            if (aRStack_1118[0].AllocatedTiles != (dtMeshTile **)0x0) {
              aRStack_1118[0].NumAllocated = iVar7;
            }
          }
                    /* WARNING: Could not recover jumptable at 0x0001446a053f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(switchD_1501dbc7b::caseD_1.e_magic + switchD_1446a053f::switchdataD_1446a07fc))
                    (switchD_1501dbc7b::caseD_1.e_magic + switchD_1446a053f::switchdataD_1446a07fc,
                     iVar4,iVar3);
          return;
        }
      }
    }
  }
  return;
}

// ProjectPointMulti @ 146e1d340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FPImplRecastNavMesh::ProjectPointMulti
          (FPImplRecastNavMesh *this,TVector<double> *param_1,
          TArray<FNavLocation,TSizedDefaultAllocator<32>_> *param_2,TVector<double> *param_3,
          double param_4,double param_5,FNavigationQueryFilter *param_6,UObject *param_7)

{
  dtQueryFilter *pdVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  UNavigationSystemBase *pUVar5;
  INavigationQueryFilterInterface *pIVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  double dVar10;
  TVector<double> *pTVar11;
  bool bVar12;
  bool bVar13;
  undefined1 uVar14;
  uint uVar15;
  int iVar16;
  UWorld *pUVar17;
  UClass *pUVar18;
  ulong64 *puVar19;
  UNavigationSystemBase *pUVar20;
  dtNavMeshQuery *this_00;
  uint uVar21;
  uint uVar22;
  undefined1 auStackY_a38 [32];
  TVector<double> *local_9e8;
  TVector<double> *local_9e0;
  double local_9d8;
  double dStack_9d0;
  undefined8 local_9c8;
  undefined8 uStack_9c0;
  UObject *local_9b8;
  dtQuerySpecialLinkFilter local_9b0;
  UNavigationSystemBase *local_9a8;
  FWeakObjectPtr local_9a0;
  undefined8 local_998;
  double local_990;
  double local_988;
  undefined8 local_980;
  double local_978;
  undefined8 local_970;
  undefined8 local_968;
  dtNavMeshQuery local_958;
  double local_8b8 [4];
  ulong64 local_898 [256];
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_a38;
  if (this->DetourNavMesh == (dtNavMesh *)0x0) {
    return false;
  }
  bVar13 = false;
  local_9e8 = param_3;
  local_9e0 = param_1;
  pUVar17 = AActor::GetWorld((AActor *)this->NavMeshOwner);
  pUVar20 = (UNavigationSystemBase *)0x0;
  if ((pUVar17 != (UWorld *)0x0) &&
     (pUVar5 = (pUVar17->NavigationSystem).field0_0x0.DebugPtr,
     pUVar5 != (UNavigationSystemBase *)0x0)) {
    pUVar18 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar16 = (int)pUVar18->_padding_;
    if ((iVar16 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       (local_9a8 = pUVar5,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar16 * 8) ==
       &pUVar18->_padding_)) goto LAB_146e1d40a;
  }
  local_9a8 = pUVar20;
LAB_146e1d40a:
  local_9b0 = (dtQuerySpecialLinkFilter)&___7FRecastSpeciaLinkFilter__6B_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_7);
  }
  local_9a0.ObjectIndex = 0;
  local_9a0.ObjectSerialNumber = 0;
  local_9b8 = param_7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_7);
  }
  FWeakObjectPtr::operator=(&local_9a0,(FObjectPtr)&local_9b8);
  local_998 = 0;
  dtNavMeshQuery::dtNavMeshQuery(&local_958);
  bVar12 = IsInGameThread();
  this_00 = &this->SharedNavQuery;
  if (!bVar12) {
    this_00 = &local_958;
  }
  dtNavMeshQuery::init(this_00,this->DetourNavMesh,param_6->MaxSearchNodes,&local_9b0);
  pTVar11 = local_9e8;
  pIVar6 = (param_6->QueryFilterImpl).Object;
  if ((pIVar6 == (INavigationQueryFilterInterface *)0x0) ||
     (pdVar1 = (dtQueryFilter *)(pIVar6 + 1), pdVar1 == (dtQueryFilter *)0x0)) {
    bVar12 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<714170589362784138>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\PImplRecastNavMesh.cpp"
                        ,0x78a,"QueryFilter");
    if (bVar12) {
      pcVar9 = (code *)swi(3);
      uVar14 = (*pcVar9)();
      return (bool)uVar14;
    }
  }
  else {
    uVar21 = (uint)__xmm_80000000000000008000000000000000;
    uVar22 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    dVar2 = *(double *)&local_9e0->field0_0x0;
    dVar3 = *(double *)((longlong)&local_9e0->field0_0x0 + 8);
    local_990 = (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) ^ uVar22,SUB84(dVar2,0) ^ uVar21);
    local_988 = (param_4 + param_5) * __real_3fe0000000000000;
    local_9e8 = (TVector<double> *)((ulonglong)local_9e8 & 0xffffffff00000000);
    uVar4 = *(undefined8 *)&pTVar11->field0_0x0;
    dVar10 = (param_5 - param_4) * __real_3fe0000000000000;
    local_980 = CONCAT44((uint)((ulonglong)dVar3 >> 0x20) ^ uVar22,SUB84(dVar3,0) ^ uVar21);
    local_978 = (double)CONCAT44((uint)((ulonglong)uVar4 >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 (uint)uVar4 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    uVar4 = *(undefined8 *)((longlong)&pTVar11->field0_0x0 + 8);
    local_970 = CONCAT44((uint)((ulonglong)dVar10 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    local_968 = CONCAT44((uint)((ulonglong)uVar4 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         (uint)uVar4 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    uVar15 = dtNavMeshQuery::queryPolygons
                       (this_00,&local_990,&local_978,pdVar1,local_898,(int *)&local_9e8,0x100);
    dVar10 = __real_3f1a36e2e0000000;
    if (((uVar15 >> 0x1e & 1) != 0) && (0 < (int)local_9e8)) {
      puVar19 = local_898;
      do {
        uVar15 = dtNavMeshQuery::projectedPointOnPoly(this_00,*puVar19,&local_990,local_8b8);
        if ((uVar15 >> 0x1e & 1) != 0) {
          local_9e0 = (TVector<double> *)0x0;
          uVar15 = dtNavMeshQuery::getPolyHeight(this_00,*puVar19,local_8b8,(double *)&local_9e0);
          if ((uVar15 >> 0x1e & 1) != 0) {
            local_9d8 = (double)CONCAT44((uint)((ulonglong)local_8b8[0] >> 0x20) ^ uVar22,
                                         SUB84(local_8b8[0],0) ^ uVar21);
            uStack_9c0 = *puVar19;
            dStack_9d0 = (double)CONCAT44((uint)((ulonglong)local_8b8[2] >> 0x20) ^ uVar22,
                                          SUB84(local_8b8[2],0) ^ uVar21);
            local_9c8 = local_9e0;
            if ((dVar10 <= (dStack_9d0 - dVar3) * (dStack_9d0 - dVar3) +
                           (local_9d8 - dVar2) * (local_9d8 - dVar2)) &&
               (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<714170589362784169>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\PImplRecastNavMesh.cpp"
                                    ,0x7a9,
                                    "(HitLocation.Location - AdjustedPoint).SizeSquared2D() < (1.e-4f)"
                                   ), bVar13)) {
              pcVar9 = (code *)swi(3);
              uVar14 = (*pcVar9)();
              return (bool)uVar14;
            }
            pFVar7 = (param_2->AllocatorInstance).Data;
            if (((pFVar7 <= (FScriptContainerElement *)&local_9d8) &&
                ((FScriptContainerElement *)&local_9d8 < pFVar7 + (longlong)param_2->ArrayMax * 0x20
                )) && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar13)) {
              pcVar9 = (code *)swi(3);
              uVar14 = (*pcVar9)();
              return (bool)uVar14;
            }
            iVar16 = param_2->ArrayNum;
            if (iVar16 == param_2->ArrayMax) {
              iVar16 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x820,&param_2->AllocatorInstance,&param_2->ArrayMax);
            }
            bVar13 = true;
            param_2->ArrayNum = iVar16 + 1;
            pFVar8 = (param_2->AllocatorInstance).Data;
            pFVar7 = pFVar8 + (longlong)iVar16 * 0x20;
            *(double *)pFVar7 = local_9d8;
            *(double *)(pFVar7 + 8) = dStack_9d0;
            pFVar8 = pFVar8 + (longlong)iVar16 * 0x20 + 0x10;
            *(undefined4 *)pFVar8 = (undefined4)local_9c8;
            *(undefined4 *)(pFVar8 + 4) = local_9c8._4_4_;
            *(undefined4 *)(pFVar8 + 8) = (undefined4)uStack_9c0;
            *(undefined4 *)(pFVar8 + 0xc) = uStack_9c0._4_4_;
          }
        }
        uVar15 = (int)pUVar20 + 1;
        pUVar20 = (UNavigationSystemBase *)(ulonglong)uVar15;
        puVar19 = puVar19 + 1;
      } while ((int)uVar15 < (int)local_9e8);
    }
  }
  dtNavMeshQuery::~dtNavMeshQuery(&local_958);
  return bVar13;
}

// ProjectPointToNavMesh @ 146e1d7e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FPImplRecastNavMesh::ProjectPointToNavMesh
          (FPImplRecastNavMesh *this,TVector<double> *param_1,FNavLocation *param_2,
          TVector<double> *param_3,FNavigationQueryFilter *param_4,UObject *param_5)

{
  dtQueryFilter *pdVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  int iVar5;
  UNavigationSystemBase *pUVar6;
  INavigationQueryFilterInterface *pIVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  TVector<double> *pTVar12;
  bool bVar13;
  undefined1 uVar14;
  UWorld *pUVar15;
  UClass *pUVar16;
  dtNavMeshQuery *this_00;
  bool bVar17;
  uint uVar18;
  uint uVar19;
  double dVar20;
  uint uVar21;
  uint uVar22;
  double dVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  undefined1 auStackY_238 [32];
  TVector<double> *local_1f8;
  UObject *local_1f0;
  FNavigationQueryFilter *local_1e8;
  TVector<double>_u_0 local_1e0;
  dtQuerySpecialLinkFilter local_1c8;
  UNavigationSystemBase *local_1c0;
  FWeakObjectPtr local_1b8;
  undefined8 local_1b0;
  double local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  double local_190;
  double local_188;
  undefined8 local_180;
  undefined8 uStack_160;
  dtNavMeshQuery local_158;
  double local_b8;
  double local_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  
  local_a0 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_1e8 = param_4;
  if (this->DetourNavMesh == (dtNavMesh *)0x0) {
    return false;
  }
  bVar17 = false;
  local_1f8 = param_3;
  pUVar15 = AActor::GetWorld((AActor *)this->NavMeshOwner);
  if ((pUVar15 != (UWorld *)0x0) &&
     (pUVar6 = (pUVar15->NavigationSystem).field0_0x0.DebugPtr,
     pUVar6 != (UNavigationSystemBase *)0x0)) {
    pUVar16 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar5 = (int)pUVar16->_padding_;
    if ((iVar5 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       (local_1c0 = pUVar6,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar5 * 8) ==
       &pUVar16->_padding_)) goto LAB_146e1d894;
  }
  local_1c0 = (UNavigationSystemBase *)0x0;
LAB_146e1d894:
  local_1c8 = (dtQuerySpecialLinkFilter)&___7FRecastSpeciaLinkFilter__6B_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_5);
  }
  local_1b8.ObjectIndex = 0;
  local_1b8.ObjectSerialNumber = 0;
  local_1f0 = param_5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_5);
  }
  FWeakObjectPtr::operator=(&local_1b8,(FObjectPtr)&local_1f0);
  local_1b0 = 0;
  dtNavMeshQuery::dtNavMeshQuery(&local_158);
  bVar13 = IsInGameThread();
  this_00 = &this->SharedNavQuery;
  if (!bVar13) {
    this_00 = &local_158;
  }
  dtNavMeshQuery::init(this_00,this->DetourNavMesh,0,&local_1c8);
  pIVar7 = (local_1e8->QueryFilterImpl).Object;
  if ((pIVar7 == (INavigationQueryFilterInterface *)0x0) ||
     (pdVar1 = (dtQueryFilter *)(pIVar7 + 1), pdVar1 == (dtQueryFilter *)0x0)) {
    bVar13 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<714170589362784085>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\PImplRecastNavMesh.cpp"
                        ,0x755,"QueryFilter");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      uVar14 = (*pcVar8)();
      return (bool)uVar14;
    }
  }
  else {
    dVar2 = (local_1f8->field0_0x0)._s_0.Z;
    dVar11 = __real_4290000000000000;
    if (dVar2 < __real_4290000000000000) {
      dVar11 = (double)this->NavMeshOwner->VerticalDeviationFromGroundCompensation;
      if (dVar11 <= 0.0) {
        dVar11 = 0.0;
      }
      dVar11 = dVar11 + dVar2;
    }
    uVar19 = (uint)((ulonglong)dVar11 >> 0x20);
    uVar18 = (uint)__xmm_80000000000000008000000000000000;
    uVar24 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    dVar2 = *(double *)&local_1f8->field0_0x0;
    dVar3 = *(double *)((longlong)&local_1f8->field0_0x0 + 8);
    uVar27 = SUB84(dVar2,0) ^ uVar18;
    uVar28 = (uint)((ulonglong)dVar2 >> 0x20) ^ uVar24;
    local_1a8 = (double)CONCAT44(uVar28 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 uVar27 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    uVar25 = SUB84(dVar3,0) ^ uVar18;
    uVar26 = (uint)((ulonglong)dVar3 >> 0x20) ^ uVar24;
    local_1a0 = CONCAT44(uVar19 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    local_198 = CONCAT44(uVar26 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         uVar25 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    uVar4 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
    local_190 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20) ^
                                 uVar24,(uint)*(undefined8 *)&param_1->field0_0x0 ^ uVar18);
    local_180 = CONCAT44((uint)((ulonglong)uVar4 >> 0x20) ^ uVar24,(uint)uVar4 ^ uVar18);
    local_188 = (param_1->field0_0x0)._s_0.Z;
    dtNavMeshQuery::findNearestPoly2D
              (this_00,&local_190,&local_1a8,pdVar1,(ulong64 *)&local_1f8,&local_b8,(double *)0x0,
               0.0);
    if (local_1f8 != (TVector<double> *)0x0) {
      local_1e0._s_0.X =
           (double)CONCAT44((uint)((ulonglong)local_b8 >> 0x20) ^ uVar24,SUB84(local_b8,0) ^ uVar18)
      ;
      uVar21 = (uint)local_a8 ^ uVar18;
      uVar22 = (uint)((ulonglong)local_a8 >> 0x20) ^ uVar24;
      local_1e0._s_0.Y = (double)CONCAT44(uVar22,uVar21);
      local_1e0._s_0.Z = local_b0;
      dVar23 = local_1e0._s_0.X - (param_1->field0_0x0)._s_0.X;
      dVar20 = local_b0 - (param_1->field0_0x0)._s_0.Z;
      dVar10 = (double)CONCAT44(uVar22,uVar21) - (param_1->field0_0x0)._s_0.Y;
      if (((((dVar23 <= (double)CONCAT44(uVar28,uVar27) && (double)CONCAT44(uVar28,uVar27) != dVar23
             ) || (dVar2 < dVar23)) ||
           (dVar10 <= (double)CONCAT44(uVar26,uVar25) && (double)CONCAT44(uVar26,uVar25) != dVar10))
          || ((dVar3 < dVar10 ||
              (uVar18 = SUB84(dVar11,0) ^ uVar18, uVar19 = uVar19 ^ uVar24,
              dVar20 <= (double)CONCAT44(uVar19,uVar18) && (double)CONCAT44(uVar19,uVar18) != dVar20
              )))) || (dVar11 < dVar20)) {
        if (param_5 == (UObject *)0x0) {
          param_5 = (UObject *)this->NavMeshOwner;
        }
        if (((FVisualLogger::bIsRecording != 0) &&
            (FVisualLogger::CategorizedLogfImpl
                       (param_5,(FName *)&LogNavigation.field_0x4,Error,
                        L"ProjectPointToNavMesh failed due to ClosestPoint being too far away from projected point."
                       ), FVisualLogger::bIsRecording != 0)) &&
           ((FVisualLogger::LocationLogfImpl
                       (param_5,(FName *)&LogNavigation.field_0x4,Error,param_1,0x1e,&FColor::Blue,
                        L"Requested point"), FVisualLogger::bIsRecording != 0 &&
            (FVisualLogger::LocationLogfImpl
                       (param_5,(FName *)&LogNavigation.field_0x4,Error,
                        (TVector<double> *)&local_1e0._s_0,0x1e,&FColor::Red,L"Projection result"),
            FVisualLogger::bIsRecording != 0)))) {
          FVisualLogger::SegmentLogfImpl
                    (param_5,(FName *)&LogNavigation.field_0x4,Error,param_1,
                     (TVector<double> *)&local_1e0._s_0,&FColor::Red,0,L"");
        }
      }
      else {
        local_1e0._16_4_ = SUB84(local_b0,0);
        local_1e0._20_4_ = (undefined4)((ulonglong)local_b0 >> 0x20);
        bVar17 = true;
        auVar9._8_4_ = uVar21;
        auVar9._0_8_ = local_1e0._s_0.X;
        auVar9._12_4_ = uVar22;
        *(undefined1 (*) [16])&(param_2->Location).field0_0x0 = auVar9;
        uStack_160 = local_1f8;
        pTVar12 = uStack_160;
        uStack_160._0_4_ = SUB84(local_1f8,0);
        uStack_160._4_4_ = (undefined4)((ulonglong)local_1f8 >> 0x20);
        *(undefined4 *)((longlong)&(param_2->Location).field0_0x0 + 0x10) = local_1e0._16_4_;
        *(undefined4 *)((longlong)&(param_2->Location).field0_0x0 + 0x14) = local_1e0._20_4_;
        *(undefined4 *)&param_2->NodeRef = (undefined4)uStack_160;
        *(undefined4 *)((longlong)&param_2->NodeRef + 4) = uStack_160._4_4_;
        uStack_160 = pTVar12;
      }
    }
  }
  dtNavMeshQuery::~dtNavMeshQuery(&local_158);
  return bVar17;
}

// Raycast @ 146e1dcb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FPImplRecastNavMesh::Raycast
          (FPImplRecastNavMesh *this,TVector<double> *param_1,TVector<double> *param_2,
          FNavigationQueryFilter *param_3,UObject *param_4,FRaycastResult *param_5,ulong64 param_6)

{
  undefined8 uVar1;
  int iVar2;
  ARecastNavMesh *pAVar3;
  INavigationQueryFilterInterface *pIVar4;
  UNavigationSystemBase *pUVar5;
  double dVar6;
  double dVar7;
  TVector<double> *pTVar8;
  bool bVar9;
  uint uVar10;
  UWorld *pUVar11;
  UClass *pUVar12;
  TVector<double> *pTVar13;
  UNavigationSystemBase *pUVar14;
  uint uVar15;
  dtQueryFilter *pdVar16;
  dtNavMeshQuery *this_00;
  uint uVar17;
  uint uVar18;
  undefined1 auStackY_208 [32];
  UNavigationSystemBase *local_1b8;
  UObject *local_1b0;
  TVector<double> *local_1a8;
  TVector<double> *local_1a0;
  dtQuerySpecialLinkFilter local_198;
  UNavigationSystemBase *local_190;
  FWeakObjectPtr local_188;
  undefined8 local_180;
  double local_178;
  double local_170;
  undefined8 local_168;
  double local_160;
  double local_158;
  undefined8 local_150;
  TVector<double> local_148;
  dtNavMeshQuery local_128;
  TVector<double>_u_0 local_88;
  double local_70;
  double local_68;
  longlong local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_208;
  if (this->DetourNavMesh == (dtNavMesh *)0x0) {
    return;
  }
  pAVar3 = this->NavMeshOwner;
  if (pAVar3 == (ARecastNavMesh *)0x0) {
    return;
  }
  pIVar4 = (param_3->QueryFilterImpl).Object;
  local_1a8 = param_1;
  local_1a0 = param_2;
  if ((pIVar4 == (INavigationQueryFilterInterface *)0x0) ||
     (pdVar16 = (dtQueryFilter *)(pIVar4 + 1), pdVar16 == (dtQueryFilter *)0x0)) {
    if (FVisualLogger::bIsRecording == 0) {
      return;
    }
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)pAVar3,(FName *)&LogNavigation.field_0x4,Warning,
               L"FPImplRecastNavMesh::Raycast failing due to QueryFilter == NULL");
    return;
  }
  pUVar11 = AActor::GetWorld((AActor *)pAVar3);
  pUVar14 = (UNavigationSystemBase *)0x0;
  uVar15 = 0;
  if ((pUVar11 != (UWorld *)0x0) &&
     (pUVar5 = (pUVar11->NavigationSystem).field0_0x0.DebugPtr,
     pUVar5 != (UNavigationSystemBase *)0x0)) {
    pUVar12 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar2 = (int)pUVar12->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       (local_190 = pUVar5,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
       &pUVar12->_padding_)) goto LAB_146e1dd75;
  }
  local_190 = pUVar14;
LAB_146e1dd75:
  local_198 = (dtQuerySpecialLinkFilter)&___7FRecastSpeciaLinkFilter__6B_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_4);
  }
  local_188.ObjectIndex = 0;
  local_188.ObjectSerialNumber = 0;
  local_1b0 = param_4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_4);
  }
  FWeakObjectPtr::operator=(&local_188,(FObjectPtr)&local_1b0);
  local_180 = 0;
  dtNavMeshQuery::dtNavMeshQuery(&local_128);
  bVar9 = IsInGameThread();
  this_00 = &this->SharedNavQuery;
  if (!bVar9) {
    this_00 = &local_128;
  }
  dtNavMeshQuery::init(this_00,this->DetourNavMesh,param_3->MaxSearchNodes,&local_198);
  pTVar8 = local_1a0;
  pTVar13 = local_1a8;
  pAVar3 = this->NavMeshOwner;
  local_88._s_0.Z = (double)pAVar3->_padding_;
  local_70 = (double)pAVar3->_padding_;
  local_60 = pAVar3->_padding_;
  local_68 = __real_4290000000000000;
  if (local_88._s_0.Z < __real_4290000000000000) {
    local_68 = (double)pAVar3->VerticalDeviationFromGroundCompensation;
    if (local_68 <= 0.0) {
      local_68 = 0.0;
    }
    local_68 = local_68 + local_88._s_0.Z;
  }
  uVar17 = (uint)__xmm_80000000000000008000000000000000;
  uVar18 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  uVar1 = *(undefined8 *)((longlong)&local_1a8->field0_0x0 + 8);
  local_160 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&local_1a8->field0_0x0 >> 0x20) ^
                               uVar18,(uint)*(undefined8 *)&local_1a8->field0_0x0 ^ uVar17);
  local_158 = (local_1a8->field0_0x0)._s_0.Z;
  local_150 = CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar18,(uint)uVar1 ^ uVar17);
  uVar1 = *(undefined8 *)((longlong)&local_1a0->field0_0x0 + 8);
  local_178 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&local_1a0->field0_0x0 >> 0x20) ^
                               uVar18,(uint)*(undefined8 *)&local_1a0->field0_0x0 ^ uVar17);
  local_170 = (local_1a0->field0_0x0)._s_0.Z;
  local_168 = CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar18,(uint)uVar1 ^ uVar17);
  if (param_6 == 0) {
    dtNavMeshQuery::findNearestContainingPoly
              (this_00,&local_160,&local_70,pdVar16,&param_6,(double *)0x0);
  }
  local_1b8 = (UNavigationSystemBase *)0x0;
  dtNavMeshQuery::findNearestContainingPoly
            (this_00,&local_178,&local_70,pdVar16,(ulong64 *)&local_1b8,(double *)0x0);
  dVar7 = __real_3e45798ee0000000;
  if (param_6 == 0) {
    param_5->HitTime = 0.0;
    dVar6 = (pTVar13->field0_0x0)._s_0.Y - (pTVar8->field0_0x0)._s_0.Y;
    local_88._s_0.Z = (pTVar13->field0_0x0)._s_0.Z - (pTVar8->field0_0x0)._s_0.Z;
    local_88._8_4_ = SUB84(dVar6,0);
    local_88._0_8_ = (pTVar13->field0_0x0)._s_0.X - (pTVar8->field0_0x0)._s_0.X;
    local_88._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    pTVar13 = UE::Math::TVector<double>::GetSafeNormal
                        ((TVector<double> *)&local_88._s_0,&local_148,dVar7,
                         &UE::Math::TVector<double>::ZeroVector);
    dVar7 = (pTVar13->field0_0x0)._s_0.Y;
    (param_5->HitNormal).field0_0x0._s_0.X = (pTVar13->field0_0x0)._s_0.X;
    (param_5->HitNormal).field0_0x0._s_0.Y = dVar7;
    (param_5->HitNormal).field0_0x0._s_0.Z = (pTVar13->field0_0x0)._s_0.Z;
  }
  else {
    uVar10 = dtNavMeshQuery::raycast
                       (this_00,param_6,&local_160,&local_178,pdVar16,&param_5->HitTime,local_88.XYZ
                        ,param_5->CorridorPolys,&param_5->CorridorPolysCount,0x80);
    *(uint *)&(param_5->HitNormal).field0_0x0 = local_88._0_4_ ^ uVar17;
    *(uint *)((longlong)&(param_5->HitNormal).field0_0x0 + 4) = local_88._4_4_ ^ uVar18;
    *(uint *)((longlong)&(param_5->HitNormal).field0_0x0 + 8) = SUB84(local_88._s_0.Z,0) ^ uVar17;
    *(uint *)((longlong)&(param_5->HitNormal).field0_0x0 + 0xc) =
         (uint)((ulonglong)local_88._16_8_ >> 0x20) ^ uVar18;
    (param_5->HitNormal).field0_0x0._s_0.Z = local_88._s_0.Y;
    if ((uVar10 >> 0x1e & 1) != 0) {
      iVar2 = param_5->CorridorPolysCount;
      if (0 < iVar2) {
        pUVar14 = (UNavigationSystemBase *)param_5->CorridorPolys[(longlong)iVar2 + -1];
      }
      if (pUVar14 == local_1b8) {
        uVar15 = 1;
      }
    }
    param_5->bIsRaycastEndInCorridor = 0;
    *(uint *)&param_5->field_0x628 = *(uint *)&param_5->field_0x628 | uVar15;
  }
  dtNavMeshQuery::~dtNavMeshQuery(&local_128);
  return;
}

// ReleaseDetourNavMesh @ 146e202e0

void __thiscall FPImplRecastNavMesh::ReleaseDetourNavMesh(FPImplRecastNavMesh *this)

{
  undefined1 *puVar1;
  TMap<UE::Math::TIntPoint<int>,FRecastInternalDebugData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FRecastInternalDebugData,0>_>
  *this_00;
  int iVar2;
  bool bVar3;
  
  if (this->DetourNavMesh != (dtNavMesh *)0x0) {
    dtFreeNavMesh(this->DetourNavMesh);
  }
  this->DetourNavMesh = (dtNavMesh *)0x0;
  bVar3 = 1 < *(int *)&(this->CompressedTileCacheLayers).field_0x48;
  if (!bVar3) {
    TSet<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&this->CompressedTileCacheLayers);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&this->CompressedTileCacheLayers,0,
                    *(int *)&(this->CompressedTileCacheLayers).field_0x8);
  puVar1 = &(this->CompressedTileCacheLayers).field_0xc;
  *(undefined4 *)&(this->CompressedTileCacheLayers).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)&this->CompressedTileCacheLayers,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->CompressedTileCacheLayers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CompressedTileCacheLayers).field_0x34 = 0;
  iVar2 = *(int *)&(this->CompressedTileCacheLayers).field_0x2c;
  *(undefined4 *)&(this->CompressedTileCacheLayers).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->CompressedTileCacheLayers).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->CompressedTileCacheLayers).field_0x10
               ,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->CompressedTileCacheLayers).field_0x48 = 1;
    TSet<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&this->CompressedTileCacheLayers);
  }
  this_00 = &this->DebugDataMap;
  bVar3 = 1 < *(int *)&(this->DebugDataMap).field_0x48;
  if (!bVar3) {
    TSet<TTuple<UE::Math::TIntPoint<int>,FRecastInternalDebugData>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FRecastInternalDebugData,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UE::Math::TIntPoint<int>,FRecastInternalDebugData>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FRecastInternalDebugData,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,FRecastInternalDebugData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,FRecastInternalDebugData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->DebugDataMap).field_0x8);
  puVar1 = &(this->DebugDataMap).field_0xc;
  *(undefined4 *)&(this->DebugDataMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xd8,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->DebugDataMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DebugDataMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->DebugDataMap).field_0x2c;
  *(undefined4 *)&(this->DebugDataMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->DebugDataMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->DebugDataMap).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->DebugDataMap).field_0x48 = 1;
    TSet<TTuple<UE::Math::TIntPoint<int>,FRecastInternalDebugData>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FRecastInternalDebugData,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UE::Math::TIntPoint<int>,FRecastInternalDebugData>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FRecastInternalDebugData,0>,FDefaultSetAllocator>
              *)this_00);
  }
  return;
}

// RemoveTileCacheLayer @ 146e208b0

void __thiscall
FPImplRecastNavMesh::RemoveTileCacheLayer
          (FPImplRecastNavMesh *this,int param_1,int param_2,int param_3)

{
  FPImplRecastNavMesh *pFVar1;
  code *pcVar2;
  TIntPoint<int> TVar3;
  bool bVar4;
  TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_> *pTVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  FNavMeshTileData *this_00;
  ForAnyElementType *pFVar12;
  TIntPoint<int>_u_0 local_38 [2];
  
  TVar3.field0_0x0._s_0.Y = param_2;
  TVar3.field0_0x0._s_0.X = param_1;
  uVar8 = (ulonglong)param_3;
  pTVar5 = TSet<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                   *)&this->CompressedTileCacheLayers,TVar3);
  pFVar12 = (ForAnyElementType *)&pTVar5->field_0x8;
  if (pTVar5 == (TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
    pFVar12 = (ForAnyElementType *)0x0;
  }
  if (pFVar12 != (ForAnyElementType *)0x0) {
    if ((-1 < param_3) && (param_3 < *(int *)&pFVar12[1].Data)) {
      if ((param_3 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar10 = uVar8 * 0x58;
      this_00 = (FNavMeshTileData *)(pFVar12->Data + lVar10);
      FNavMeshTileData::~FNavMeshTileData(this_00);
      iVar6 = *(int *)&pFVar12[1].Data + ~param_3;
      if (iVar6 != 0) {
        memmove(this_00,this_00 + 1,(longlong)iVar6 * 0x58);
      }
      *(int *)&pFVar12[1].Data = *(int *)&pFVar12[1].Data + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,pFVar12,*(int *)&pFVar12[1].Data,(int *)((longlong)&pFVar12[1].Data + 4));
      iVar6 = *(int *)&pFVar12[1].Data;
      if (param_3 < iVar6) {
        do {
          uVar9 = (uint)uVar8;
          uVar7 = 0;
          if ((int)uVar9 < iVar6) {
            uVar7 = ~uVar9 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(uint *)(pFVar12->Data + lVar10) = uVar9;
          uVar8 = (ulonglong)(uVar9 + 1);
          iVar6 = *(int *)&pFVar12[1].Data;
          lVar10 = lVar10 + 0x58;
        } while ((int)(uVar9 + 1) < iVar6);
      }
    }
    if (*(int *)&pFVar12[1].Data == 0) {
      RemoveTileCacheLayers(this,param_1,param_2);
      pFVar1 = this->NavMeshOwner->RecastNavMeshImpl;
      if (pFVar1 != (FPImplRecastNavMesh *)0x0) {
        local_38[0]._s_0.Y = param_2;
        local_38[0]._s_0.X = param_1;
        if (*(int *)&(pFVar1->DebugDataMap).field_0x8 != *(int *)&(pFVar1->DebugDataMap).field_0x34)
        {
          uVar9 = param_1 - param_2 ^ (uint)param_2 >> 0xd;
          uVar11 = (-0x61c88647 - uVar9) - param_2 ^ uVar9 << 8;
          uVar7 = (param_2 - uVar9) - uVar11 ^ uVar11 >> 0xd;
          uVar9 = (uVar9 - uVar7) - uVar11 ^ uVar7 >> 0xc;
          uVar11 = (uVar11 - uVar9) - uVar7 ^ uVar9 << 0x10;
          uVar7 = (uVar7 - uVar11) - uVar9 ^ uVar11 >> 5;
          uVar9 = (uVar9 - uVar7) - uVar11 ^ uVar7 >> 3;
          uVar11 = (uVar11 - uVar9) - uVar7 ^ uVar9 << 10;
          TSet<TTuple<UE::Math::TIntPoint<int>,FRecastInternalDebugData>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FRecastInternalDebugData,0>,FDefaultSetAllocator>
          ::RemoveImpl<UE::Math::TIntPoint<int>_>
                    ((TSet<TTuple<UE::Math::TIntPoint<int>,FRecastInternalDebugData>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FRecastInternalDebugData,0>,FDefaultSetAllocator>
                      *)&pFVar1->DebugDataMap,(uVar7 - uVar11) - uVar9 ^ uVar11 >> 0xf,
                     (TIntPoint<int> *)&local_38[0]._s_0);
        }
      }
    }
  }
  return;
}

// RemoveTileCacheLayers @ 146e20b50

void __thiscall
FPImplRecastNavMesh::RemoveTileCacheLayers(FPImplRecastNavMesh *this,int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  TIntPoint<int> local_res8 [4];
  
  local_res8[0].field0_0x0._s_0.Y = param_2;
  local_res8[0].field0_0x0._s_0.X = param_1;
  if (*(int *)&(this->CompressedTileCacheLayers).field_0x8 !=
      *(int *)&(this->CompressedTileCacheLayers).field_0x34) {
    uVar3 = param_1 - param_2 ^ (uint)param_2 >> 0xd;
    uVar2 = (-0x61c88647 - uVar3) - param_2 ^ uVar3 << 8;
    uVar1 = (param_2 - uVar3) - uVar2 ^ uVar2 >> 0xd;
    uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar1 >> 0xc;
    uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 << 0x10;
    uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 >> 5;
    uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar1 >> 3;
    uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 << 10;
    TSet<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::RemoveImpl<UE::Math::TIntPoint<int>_>
              ((TSet<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)&this->CompressedTileCacheLayers,(uVar1 - uVar2) - uVar3 ^ uVar2 >> 0xf,local_res8
              );
  }
  return;
}

// Serialize @ 146e24e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FPImplRecastNavMesh::Serialize(FPImplRecastNavMesh *this,FArchive *param_1,int param_2)

{
  dtNavMesh **ppdVar1;
  double *pdVar2;
  float fVar3;
  ushort uVar4;
  ARecastNavMesh *pAVar5;
  longlong *plVar6;
  dtMeshHeader *pdVar7;
  longlong lVar8;
  FName FVar9;
  code *pcVar10;
  uchar *puVar11;
  FScriptContainerElement *pFVar12;
  FNavData *pFVar13;
  TReferenceControllerBase<1> *pTVar14;
  bool bVar15;
  char cVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  dtNavMesh *pdVar20;
  UWorld *pUVar21;
  UClass *pUVar22;
  ULevel *pUVar23;
  TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *pTVar24;
  dtNavMeshParams *pdVar25;
  FNavMeshTileData *pFVar26;
  dtMeshTile *pdVar27;
  TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_> *pTVar28;
  FName *pFVar29;
  FThreadSafeStaticStat<FStat_STAT_Navigation_TileCacheMemory> FVar30;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  ulonglong uVar31;
  longlong lVar32;
  ulonglong uVar33;
  uint uVar34;
  UNavigationSystemBase *pUVar35;
  UNavigationSystemBase *pUVar36;
  FNameEntryId FVar37;
  ForAnyElementType FVar38;
  double dVar39;
  undefined1 auStackY_558 [32];
  uint local_4f8;
  undefined1 local_4f4;
  char local_4f3;
  uint local_4f0;
  uint local_4ec;
  TArray<FNavTileRef,TSizedDefaultAllocator<32>_> local_4e8;
  ForAnyElementType local_4d8;
  undefined8 local_4d0;
  uint local_4c8 [2];
  ulong64 local_4c0;
  FPImplRecastNavMesh *local_4b8;
  int local_4b0;
  int local_4ac;
  int local_4a8;
  ulong64 local_4a0;
  ulong64 local_498;
  int local_490;
  uint local_48c;
  uchar *local_488;
  ulong64 local_480;
  uchar *local_478;
  uchar *local_470;
  int local_468;
  int iStack_464;
  uchar *local_460;
  uint local_458;
  uint uStack_454;
  uchar *local_450;
  FName local_448;
  dtNavMesh *local_440;
  FScriptContainerElement *local_438;
  uint local_430 [2];
  uchar *local_428;
  FNavData *local_420;
  TReferenceControllerBase<1> *pTStack_418;
  FStatMessage local_410;
  FNavMeshTileData local_3f8;
  TVector<double>_u_0 local_398;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_370;
  FName local_368;
  FString local_360;
  TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> local_350;
  FString local_340;
  FString local_330 [6];
  FNavData *local_2d0;
  TReferenceControllerBase<1> *pTStack_2c8;
  TVector<double>_u_0 local_2b8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  dtNavMeshParams local_278;
  TVector<double>_u_0 local_218;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  FNavMeshTileData local_1d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_558;
  ppdVar1 = &this->DetourNavMesh;
  local_4b8 = this;
  local_4a8 = param_2;
  if ((param_1->field_0x28 & 1) == 0) {
    if (*ppdVar1 == (dtNavMesh *)0x0) {
      return;
    }
  }
  else {
    ReleaseDetourNavMesh(this);
    pdVar20 = dtAllocNavMesh();
    *ppdVar1 = pdVar20;
    if ((pdVar20 == (dtNavMesh *)0x0) && (FVisualLogger::bIsRecording != 0)) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this->NavMeshOwner,(FName *)&LogNavigation.field_0x4,Error,
                 L"Failed to allocate Recast navmesh");
    }
  }
  pUVar36 = (UNavigationSystemBase *)0x0;
  local_4f8 = 0;
  local_4e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4e8.ArrayNum = 0;
  local_4e8.ArrayMax = 0;
  if (((param_1->field_0x28 & 4) != 0) &&
     (bVar15 = UE::Transaction::DiffUtil::IsGeneratingDiffableObject(param_1), !bVar15)) {
    uVar17 = dtNavMesh::getMaxTiles(*ppdVar1);
    if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
    }
    if (local_4e8.ArrayMax < (int)uVar17) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar17,&local_4e8.AllocatorInstance,local_4e8.ArrayNum,&local_4e8.ArrayMax);
    }
    pUVar21 = AActor::GetWorld((AActor *)this->NavMeshOwner);
    if ((pUVar21 == (UWorld *)0x0) ||
       (pUVar35 = (pUVar21->NavigationSystem).field0_0x0.DebugPtr,
       pUVar35 == (UNavigationSystemBase *)0x0)) {
LAB_146e24f35:
      pUVar35 = pUVar36;
    }
    else {
      pUVar22 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
      iVar18 = (int)pUVar22->_padding_;
      if ((*(int *)(*(longlong *)&pUVar35->field_0x10 + 0x38) < iVar18) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar35->field_0x10 + 0x30) + (longlong)iVar18 * 8) !=
          &pUVar22->_padding_)) goto LAB_146e24f35;
    }
    pAVar5 = this->NavMeshOwner;
    if (pAVar5->bIsWorldPartitioned == 0) {
      cVar16 = (**(code **)(pAVar5->_padding_ + 0x788))();
      if (((cVar16 == '\0') || (pUVar35 == (UNavigationSystemBase *)0x0)) ||
         (PRIVATE_GIsRunningCommandlet != false)) {
        pdVar20 = this->DetourNavMesh;
        iVar18 = dtNavMesh::getMaxTiles(pdVar20);
        pUVar35 = pUVar36;
        if (0 < iVar18) {
          do {
            pdVar27 = dtNavMesh::getTile(pdVar20,(int)pUVar35);
            if (((pdVar27 != (dtMeshTile *)0x0) && (pdVar27->header != (dtMeshHeader *)0x0)) &&
               (0 < pdVar27->dataSize)) {
              local_4a0 = dtNavMesh::getTileRef(pdVar20,pdVar27);
              if (((local_4e8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_4a0) &&
                  ((FScriptContainerElement *)&local_4a0 <
                   local_4e8.AllocatorInstance.Data + (longlong)local_4e8.ArrayMax * 8)) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar15)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              iVar18 = local_4e8.ArrayNum;
              if (local_4e8.ArrayNum == local_4e8.ArrayMax) {
                iVar18 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_4e8.AllocatorInstance,&local_4e8.ArrayMax);
              }
              local_4e8.ArrayNum = iVar18 + 1;
              *(ulong64 *)(local_4e8.AllocatorInstance.Data + (longlong)iVar18 * 8) = local_4a0;
            }
            uVar17 = (int)pUVar35 + 1;
            pUVar35 = (UNavigationSystemBase *)(ulonglong)uVar17;
            iVar18 = dtNavMesh::getMaxTiles(pdVar20);
          } while ((int)uVar17 < iVar18);
        }
      }
      else {
        pAVar5 = this->NavMeshOwner;
        pUVar23 = AActor::GetLevel((AActor *)pAVar5);
        pTVar24 = ANavigationData::GetNavigableBoundsInLevel
                            ((ANavigationData *)pAVar5,&local_350,pUVar23);
        GetNavMeshTilesIn(this,pTVar24,&local_4e8);
        if (local_350.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_350.AllocatorInstance.Data);
        }
      }
    }
    else if (6 < (byte)LogNavigation._0_1_) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pAVar5,&local_360,(UObject *)0x0,None);
      local_178._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_178,"FPImplRecastNavMesh::Serialize",0x1e,Yes);
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
      if ((void *)local_178._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_178._padding_);
      }
      if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_360.Data.AllocatorInstance.Data);
      }
    }
    local_4f8 = local_4e8.ArrayNum;
    if (6 < (byte)LogNavigation._0_1_) {
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)this->NavMeshOwner,&local_340,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
      if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_340.Data.AllocatorInstance.Data);
      }
    }
  }
  plVar6 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_4f8);
    }
  }
  else {
    local_4f8 = *(uint *)*plVar6;
    *plVar6 = *plVar6 + 4;
  }
  pdVar25 = dtNavMesh::getParams(this->DetourNavMesh);
  plVar6 = *(longlong **)&param_1->field_0x8;
  local_278.walkableHeight = pdVar25->walkableHeight;
  local_278.walkableRadius = pdVar25->walkableRadius;
  local_278.walkableClimb = pdVar25->walkableClimb;
  local_278.resolutionParams[0].bvQuantFactor = pdVar25->resolutionParams[0].bvQuantFactor;
  local_278.resolutionParams[1].bvQuantFactor = pdVar25->resolutionParams[1].bvQuantFactor;
  local_278.resolutionParams[2].bvQuantFactor = pdVar25->resolutionParams[2].bvQuantFactor;
  local_278.orig[0] = pdVar25->orig[0];
  local_278.orig[1] = pdVar25->orig[1];
  local_278.orig[2] = pdVar25->orig[2];
  local_278.tileWidth = pdVar25->tileWidth;
  local_278.tileHeight = pdVar25->tileHeight;
  local_278.maxTiles = pdVar25->maxTiles;
  local_278.maxPolys = pdVar25->maxPolys;
  if ((double *)plVar6[1] < (double *)*plVar6 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)local_278.orig);
    }
  }
  else {
    local_278.orig[0] = *(double *)*plVar6;
    *plVar6 = *plVar6 + 8;
  }
  plVar6 = *(longlong **)&param_1->field_0x8;
  if ((double *)plVar6[1] < (double *)*plVar6 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)(local_278.orig + 1));
    }
  }
  else {
    local_278.orig[1] = *(double *)*plVar6;
    *plVar6 = *plVar6 + 8;
  }
  plVar6 = *(longlong **)&param_1->field_0x8;
  if ((double *)plVar6[1] < (double *)*plVar6 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)(local_278.orig + 2));
    }
  }
  else {
    local_278.orig[2] = *(double *)*plVar6;
    *plVar6 = *plVar6 + 8;
  }
  plVar6 = *(longlong **)&param_1->field_0x8;
  if ((double *)plVar6[1] < (double *)*plVar6 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)&local_278.tileWidth);
    }
  }
  else {
    local_278.tileWidth = *(double *)*plVar6;
    *plVar6 = *plVar6 + 8;
  }
  plVar6 = *(longlong **)&param_1->field_0x8;
  if ((double *)plVar6[1] < (double *)*plVar6 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)&local_278.tileHeight);
    }
  }
  else {
    local_278.tileHeight = *(double *)*plVar6;
    *plVar6 = *plVar6 + 8;
  }
  plVar6 = *(longlong **)&param_1->field_0x8;
  if ((int *)plVar6[1] < (int *)*plVar6 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_278.maxTiles);
    }
  }
  else {
    local_278.maxTiles = *(int *)*plVar6;
    *plVar6 = *plVar6 + 4;
  }
  plVar6 = *(longlong **)&param_1->field_0x8;
  if ((int *)plVar6[1] < (int *)*plVar6 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_278.maxPolys);
    }
  }
  else {
    local_278.maxPolys = *(int *)*plVar6;
    *plVar6 = *plVar6 + 4;
  }
  pAVar5 = this->NavMeshOwner;
  if (pAVar5->NavMeshVersion < 0x17) {
    if (pAVar5->NavMeshVersion < 0x15) {
      local_278.walkableHeight = (double)pAVar5->AgentHeight;
      local_278.walkableRadius = (double)pAVar5->AgentRadius;
      local_278.walkableClimb = (double)pAVar5->NavMeshResolutionParams[1].AgentMaxStepHeight;
      local_278.resolutionParams[1].bvQuantFactor =
           (double)(__real_3f800000 / pAVar5->NavMeshResolutionParams[1].CellSize);
    }
    else {
      plVar6 = *(longlong **)&param_1->field_0x8;
      if ((double *)plVar6[1] < (double *)*plVar6 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))();
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)&local_278);
        }
      }
      else {
        local_278.walkableHeight = *(double *)*plVar6;
        *plVar6 = *plVar6 + 8;
      }
      plVar6 = *(longlong **)&param_1->field_0x8;
      if ((double *)plVar6[1] < (double *)*plVar6 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))();
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)&local_278.walkableRadius);
        }
      }
      else {
        local_278.walkableRadius = *(double *)*plVar6;
        *plVar6 = *plVar6 + 8;
      }
      plVar6 = *(longlong **)&param_1->field_0x8;
      if ((double *)plVar6[1] < (double *)*plVar6 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))();
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)&local_278.walkableClimb);
        }
      }
      else {
        local_278.walkableClimb = *(double *)*plVar6;
        *plVar6 = *plVar6 + 8;
      }
      ::operator<<(param_1,&local_278.resolutionParams[1].bvQuantFactor);
      if ((param_1->field_0x28 & 1) == 0) goto LAB_146e256b6;
    }
    local_278.resolutionParams[0].bvQuantFactor = local_278.resolutionParams[1].bvQuantFactor;
    local_278.resolutionParams[2].bvQuantFactor = local_278.resolutionParams[1].bvQuantFactor;
  }
  else {
    plVar6 = *(longlong **)&param_1->field_0x8;
    if ((double *)plVar6[1] < (double *)*plVar6 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)&local_278);
      }
    }
    else {
      local_278.walkableHeight = *(double *)*plVar6;
      *plVar6 = *plVar6 + 8;
    }
    plVar6 = *(longlong **)&param_1->field_0x8;
    if ((double *)plVar6[1] < (double *)*plVar6 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)&local_278.walkableRadius);
      }
    }
    else {
      local_278.walkableRadius = *(double *)*plVar6;
      *plVar6 = *plVar6 + 8;
    }
    plVar6 = *(longlong **)&param_1->field_0x8;
    if ((double *)plVar6[1] < (double *)*plVar6 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)&local_278.walkableClimb);
      }
    }
    else {
      local_278.walkableClimb = *(double *)*plVar6;
      *plVar6 = *plVar6 + 8;
    }
    ::operator<<(param_1,&local_278.resolutionParams[0].bvQuantFactor);
    ::operator<<(param_1,&local_278.resolutionParams[1].bvQuantFactor);
    ::operator<<(param_1,&local_278.resolutionParams[2].bvQuantFactor);
  }
LAB_146e256b6:
  if ((param_1->field_0x28 & 1) == 0) {
    if ((param_1->field_0x28 & 4) != 0) {
      local_4f3 = (**(code **)(this->NavMeshOwner->_padding_ + 0x780))();
      uVar31 = (ulonglong)local_4e8.ArrayNum;
      local_440 = this->DetourNavMesh;
      local_438 = local_4e8.AllocatorInstance.Data + uVar31 * 8;
      local_48c = local_4e8.ArrayNum;
      uVar33 = uVar31;
      FVar38.Data = local_4e8.AllocatorInstance.Data;
      while( true ) {
        pFVar12 = local_438;
        pdVar20 = local_440;
        if ((int)uVar33 != (int)uVar31) {
          local_4f4 = 0;
          `TCheckedPointerIterator<FNavTileRef,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_4f4);
        }
        if (FVar38.Data == pFVar12) break;
        pdVar27 = dtNavMesh::getTileByRef(pdVar20,*(ulong64 *)FVar38.Data);
        local_480 = dtNavMesh::getTileRef(pdVar20,pdVar27);
        plVar6 = *(longlong **)&param_1->field_0x8;
        local_4c8[0] = pdVar27->dataSize;
        if ((ulong64 *)plVar6[1] < (ulong64 *)*plVar6 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_480,8);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,&local_480);
          }
        }
        else {
          local_480 = *(ulong64 *)*plVar6;
          *plVar6 = *plVar6 + 8;
        }
        plVar6 = *(longlong **)&param_1->field_0x8;
        if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_4c8,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,local_4c8);
          }
        }
        else {
          local_4c8[0] = *(uint *)*plVar6;
          *plVar6 = *plVar6 + 4;
        }
        local_428 = pdVar27->data;
        SerializeRecastMeshTile(param_1,local_4a8,&local_428,(int *)local_4c8);
        local_2d0 = (FNavData *)0x0;
        pTStack_2c8 = (TReferenceControllerBase<1> *)0x0;
        local_460 = (uchar *)0x0;
        local_4ac = 0;
        if (local_4f3 != '\0') {
          pdVar7 = pdVar27->header;
          local_468 = pdVar7->x;
          uVar4 = pdVar7->layer;
          iStack_464 = pdVar7->y;
          pTVar28 = TSet<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                            *)&this->CompressedTileCacheLayers,
                           (TIntPoint<int>)*(TIntPoint<int>_u_0 *)&pdVar7->x);
          pTVar14 = pTStack_2c8;
          if (((pTVar28 ==
                (TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>
                 *)0x0) || (&pTVar28->field_0x8 == (undefined1 *)0x0)) ||
             (*(int *)&pTVar28->field_0x10 <= (int)(uint)uVar4)) {
            local_3f8.LayerIndex = 0;
            local_3f8.LayerBBox._48_8_ = local_3f8.LayerBBox._48_8_ & 0xffffffffffffff00;
            local_3f8.NavData.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)0x0;
            local_3f8.DataSize = 0;
            local_3f8.NavData.Object = (FNavData *)0x0;
          }
          else {
            lVar8 = *(longlong *)&pTVar28->field_0x8;
            lVar32 = (ulonglong)uVar4 * 0x58;
            pdVar2 = (double *)(lVar32 + 8 + lVar8);
            local_3f8.LayerBBox.Min.field0_0x0._s_0.X = *pdVar2;
            local_3f8.LayerBBox.Min.field0_0x0._s_0.Y = pdVar2[1];
            local_3f8.LayerIndex = *(int *)(lVar32 + lVar8);
            pdVar2 = (double *)(lVar32 + 0x18 + lVar8);
            local_3f8.LayerBBox.Min.field0_0x0._s_0.Z = *pdVar2;
            local_3f8.LayerBBox.Max.field0_0x0._s_0.X = pdVar2[1];
            local_3f8.NavData.Object = *(FNavData **)(lVar32 + 0x48 + lVar8);
            local_3f8.DataSize = *(int *)(lVar32 + 0x40 + lVar8);
            local_3f8.NavData.SharedReferenceCount.ReferenceController =
                 *(TReferenceControllerBase<1> **)(lVar32 + 0x50 + lVar8);
            pdVar2 = (double *)(lVar32 + 0x28 + lVar8);
            local_3f8.LayerBBox.Max.field0_0x0._s_0.Y = *pdVar2;
            local_3f8.LayerBBox.Max.field0_0x0._s_0.Z = pdVar2[1];
            local_3f8.LayerBBox._48_8_ = *(ulonglong *)(lVar32 + 0x38 + lVar8);
            if (local_3f8.NavData.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_3f8.NavData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_3f8.NavData.SharedReferenceCount.ReferenceController)->
                         SharedReferenceCount + 1);
              UNLOCK();
            }
          }
          pFVar13 = local_3f8.NavData.Object;
          iVar18 = local_3f8.DataSize;
          if (local_3f8.NavData.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_3f8.NavData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_3f8.NavData.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          local_420 = local_2d0;
          pTStack_418 = pTStack_2c8;
          local_2d0 = local_3f8.NavData.Object;
          pTStack_2c8 = local_3f8.NavData.SharedReferenceCount.ReferenceController;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar14);
          FNavMeshTileData::~FNavMeshTileData(&local_3f8);
          local_460 = (uchar *)0x0;
          local_4ac = iVar18;
          if (pFVar13 != (FNavData *)0x0) {
            local_460 = pFVar13->RawNavData;
          }
        }
        pTVar14 = pTStack_2c8;
        pFVar13 = local_2d0;
        iVar18 = local_4ac;
        SerializeCompressedTileCacheData(param_1,local_4a8,&local_460,&local_4ac);
        if ((pTVar14 != (TReferenceControllerBase<1> *)0x0) &&
           (pTVar14->SharedReferenceCount == (atomic<int>)0x1)) {
          if ((pFVar13 == (FNavData *)0x0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar15)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          if ((pFVar13->RawNavData != (uchar *)0x0) && (iVar18 != 0)) {
            FVar30 = StatPtr_STAT_Navigation_TileCacheMemory;
            if (StatPtr_STAT_Navigation_TileCacheMemory ==
                (FThreadSafeStaticStat<FStat_STAT_Navigation_TileCacheMemory>)0x0) {
              pFVar29 = ::FName::FName(&local_368,"STAT_Navigation_TileCacheMemory");
              FVar30 = (FThreadSafeStaticStat<FStat_STAT_Navigation_TileCacheMemory>)
                       FThreadSafeStaticStatBase::DoSetup
                                 ((FThreadSafeStaticStatBase *)
                                  &StatPtr_STAT_Navigation_TileCacheMemory,*pFVar29,
                                  L"Tile cache memory","STATGROUP_Navigation","STATCAT_Advanced",
                                  L"Navigation",true,false,ST_int64,false,false,MCR_Physical);
            }
            FVar9 = *(FName *)FVar30;
            FVar37 = FVar9.ComparisonIndex.Value;
            uVar17 = FVar9.Number;
            this = local_4b8;
            local_458 = FVar37.Value;
            uStack_454 = uVar17;
            if (((FVar9 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
               (FThreadStats::TlsSlot != 0xffffffff)) {
              this_00 = TlsGetValue(FThreadStats::TlsSlot);
              if (this_00 == (FThreadStats *)0x0) {
                this_01 = FThreadStatsPool::Get();
                this_00 = FThreadStatsPool::GetFromPool(this_01);
              }
              local_410.NameAndInfo.Number = uVar17 & 0xffffbfff | 0xb000;
              local_448 = FVar9;
              local_410.StatData.Pad = (uchar  [8])(longlong)iVar18;
              local_410.NameAndInfo.Index.Value = FVar37.Value;
              FThreadStats::AddStatMessage(this_00,&local_410);
              FStatsTrace::Add(&local_448,-(longlong)iVar18);
              if (this_00->ScopeCount == 0) {
                FThreadStats::Flush(this_00,false,false);
                this = local_4b8;
              }
              else {
                this = local_4b8;
                if (FThreadStats::bIsRawStatsActive != false) {
                  FThreadStats::FlushRawStats(this_00,false,false);
                  this = local_4b8;
                }
              }
            }
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14)
        ;
        uVar33 = local_4e8._8_8_ & 0xffffffff;
        FVar38.Data = FVar38.Data + 8;
        uVar31 = (ulonglong)local_48c;
      }
    }
  }
  else {
    fVar3 = this->NavMeshOwner->NavMeshResolutionParams[1].CellSize;
    dVar39 = (double)(int)(this->NavMeshOwner->TileSizeUU / fVar3) * (double)fVar3 -
             local_278.tileWidth;
    if ((double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar39,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        __real_3f1a36e2e0000000) {
      uVar17 = dtNavMesh::init(this->DetourNavMesh,&local_278);
      if (((int)uVar17 < 0) && (FVisualLogger::bIsRecording != 0)) {
        FVisualLogger::CategorizedLogfImpl
                  ((UObject *)this->NavMeshOwner,(FName *)&LogNavigation.field_0x4,Error,
                   L"Failed to initialize NavMesh");
      }
      this->NavMeshOwner->bHasNoTileData = local_4f8 == 0;
      local_4d8.Data = (FScriptContainerElement *)0x0;
      local_4d0 = 0;
      if ((int)local_4f8 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_4f8);
      }
      if (0 < (int)local_4f8) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,local_4f8,&local_4d8,0,(int *)((longlong)&local_4d0 + 4));
      }
      if (0 < (int)local_4f8) {
        uVar17 = (uint)__xmm_80000000000000008000000000000000;
        uVar34 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
        pUVar35 = pUVar36;
        do {
          plVar6 = *(longlong **)&param_1->field_0x8;
          local_4c0 = 0xffffffffffffffff;
          local_4f0 = 0;
          if ((ulong64 *)plVar6[1] < (ulong64 *)*plVar6 + 1) {
            if ((param_1->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))();
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,&local_4c0);
            }
          }
          else {
            local_4c0 = *(ulong64 *)*plVar6;
            *plVar6 = *plVar6 + 8;
          }
          plVar6 = *(longlong **)&param_1->field_0x8;
          if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
            if ((param_1->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))();
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,&local_4f0);
            }
          }
          else {
            local_4f0 = *(uint *)*plVar6;
            *plVar6 = *plVar6 + 4;
          }
          if ((local_4c0 != 0xffffffffffffffff) && (local_4f0 != 0)) {
            local_488 = (uchar *)0x0;
            local_4f0 = 0;
            SerializeRecastMeshTile(param_1,param_2,&local_488,(int *)&local_4f0);
            puVar11 = local_488;
            if (local_488 != (uchar *)0x0) {
              if (((local_4d8.Data <= (FScriptContainerElement *)&local_4c0) &&
                  ((FScriptContainerElement *)&local_4c0 <
                   local_4d8.Data + (longlong)local_4d0._4_4_ * 8)) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar15)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              iVar18 = (int)local_4d0;
              if ((int)local_4d0 == local_4d0._4_4_) {
                iVar18 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_4d8,(int *)((longlong)&local_4d0 + 4));
              }
              local_4d0 = CONCAT44(local_4d0._4_4_,iVar18 + 1);
              *(ulong64 *)(local_4d8.Data + (longlong)iVar18 * 8) = local_4c0;
              uVar19 = dtNavMesh::addTile(this->DetourNavMesh,puVar11,local_4f0,1,local_4c0,
                                          (ulong64 *)0x0);
              if (((uVar19 >> 2 & 1) != 0) && (2 < (byte)LogNavigation._0_1_)) {
                UObjectBaseUtility::GetFullName
                          ((UObjectBaseUtility *)this->NavMeshOwner,local_330,(UObject *)0x0,None);
                dtNavMesh::getMaxTiles(this->DetourNavMesh);
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
                if (local_330[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_330[0].Data.AllocatorInstance.Data);
                }
              }
              local_470 = (uchar *)0x0;
              local_4b0 = 0;
              SerializeCompressedTileCacheData(param_1,param_2,&local_470,&local_4b0);
              iVar18 = local_4b0;
              if (0 < local_4b0) {
                local_398._s_0.X =
                     (double)CONCAT44((uint)((ulonglong)*(undefined8 *)(puVar11 + 0x28) >> 0x20) ^
                                      uVar34,(uint)*(undefined8 *)(puVar11 + 0x28) ^ uVar17);
                local_398._s_0.Z = (double)*(undefined8 *)(puVar11 + 0x30);
                local_378 = CONCAT44((uint)((ulonglong)*(undefined8 *)(puVar11 + 0x50) >> 0x20) ^
                                     uVar34,(uint)*(undefined8 *)(puVar11 + 0x50) ^ uVar17);
                local_398._s_0.Y =
                     (double)CONCAT44((uint)((ulonglong)*(undefined8 *)(puVar11 + 0x38) >> 0x20) ^
                                      uVar34,(uint)*(undefined8 *)(puVar11 + 0x38) ^ uVar17);
                local_370 = *(undefined8 *)(puVar11 + 0x48);
                local_380 = CONCAT44((uint)((ulonglong)*(undefined8 *)(puVar11 + 0x40) >> 0x20) ^
                                     uVar34,(uint)*(undefined8 *)(puVar11 + 0x40) ^ uVar17);
                UE::Math::TBox<double>::TBox<double>
                          ((TBox<double> *)&local_218._s_0,(TVector<double> *)&local_398._s_0,2);
                local_2b8._s_0.X = local_218._s_0.X;
                local_2b8._s_0.Y = local_218._s_0.Y;
                local_2b8._s_0.Z = local_218._s_0.Z;
                uStack_2a0 = uStack_200;
                local_298 = local_1f8;
                uStack_290 = uStack_1f0;
                local_288 = local_1e8;
                pFVar26 = FNavMeshTileData::FNavMeshTileData
                                    (&local_1d8,local_470,iVar18,(uint)*(ushort *)(puVar11 + 2),
                                     (TBox<double> *)&local_2b8._s_0);
                AddTileCacheLayer(this,*(int *)(puVar11 + 8),*(int *)(puVar11 + 0xc),
                                  (uint)*(ushort *)(puVar11 + 2),pFVar26);
                FNavMeshTileData::~FNavMeshTileData(&local_1d8);
              }
            }
          }
          uVar19 = (int)pUVar35 + 1;
          pUVar35 = (UNavigationSystemBase *)(ulonglong)uVar19;
        } while ((int)uVar19 < (int)local_4f8);
      }
      pUVar35 = pUVar36;
      if (0 < (int)local_4d0) {
        do {
          uVar34 = (uint)pUVar36;
          uVar17 = 0;
          if ((int)uVar34 < (int)local_4d0) {
            uVar17 = ~uVar34 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          if (this->DetourNavMesh != (dtNavMesh *)0x0) {
            dtNavMesh::processSegmentLinksForTile
                      (this->DetourNavMesh,*(ulong64 *)(local_4d8.Data + (longlong)pUVar35),0,
                       (ulong64 *)0x0,local_430);
          }
          pUVar36 = (UNavigationSystemBase *)(ulonglong)(uVar34 + 1);
          pUVar35 = (UNavigationSystemBase *)&pUVar35->field_0x8;
        } while ((int)(uVar34 + 1) < (int)local_4d0);
      }
      if (local_4d8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4d8.Data);
      }
    }
    else {
      ReleaseDetourNavMesh(this);
      if (0 < (int)local_4f8) {
        do {
          plVar6 = *(longlong **)&param_1->field_0x8;
          local_498 = 0xffffffffffffffff;
          local_4ec = 0;
          if ((ulong64 *)plVar6[1] < (ulong64 *)*plVar6 + 1) {
            if ((param_1->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_498,8);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,&local_498);
            }
          }
          else {
            local_498 = *(ulong64 *)*plVar6;
            *plVar6 = *plVar6 + 8;
          }
          plVar6 = *(longlong **)&param_1->field_0x8;
          if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
            if ((param_1->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_4ec,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,&local_4ec);
            }
          }
          else {
            local_4ec = *(uint *)*plVar6;
            *plVar6 = *plVar6 + 4;
          }
          if ((local_498 != 0xffffffffffffffff) && (local_4ec != 0)) {
            local_450 = (uchar *)0x0;
            local_4ec = 0;
            SerializeRecastMeshTile(param_1,param_2,&local_450,(int *)&local_4ec);
            if (local_450 != (uchar *)0x0) {
              dtFree(local_450,DT_ALLOC_PERM_TILE_DATA);
              local_478 = (uchar *)0x0;
              local_490 = 0;
              SerializeCompressedTileCacheData(param_1,param_2,&local_478,&local_490);
              dtFree(local_478,DT_ALLOC_PERM_TILE_DATA);
            }
          }
          uVar17 = (int)pUVar36 + 1;
          pUVar36 = (UNavigationSystemBase *)(ulonglong)uVar17;
        } while ((int)uVar17 < (int)local_4f8);
      }
    }
  }
  if (local_4e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4e8.AllocatorInstance.Data);
  }
  return;
}

// SerializeCompressedTileCacheData @ 146e26240

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FPImplRecastNavMesh::SerializeCompressedTileCacheData
          (FArchive *param_1,int param_2,uchar **param_3,int *param_4)

{
  uint *puVar1;
  ulong64 *puVar2;
  ushort *puVar3;
  longlong *plVar4;
  short *psVar5;
  uint *puVar6;
  ulong64 *puVar7;
  ushort *puVar8;
  code *pcVar9;
  bool bVar10;
  uchar *puVar11;
  uint local_res8 [2];
  
  if ((((param_1->field_0x28 & 4) != 0) && (*param_4 != 0)) && (*param_4 < 0x50)) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Ar.IsSaving() == false) || CompressedDataSize == 0 || CompressedDataSize >= dtAlign(sizeof(dtTileCacheLayerHeader))"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\PImplRecastNavMesh.cpp"
                        ,0x406,
                        L"When saving CompressedDataSize must either be zero or large enough to hold dtTileCacheLayerHeader!"
                       );
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  if ((((param_1->field_0x28 & 4) != 0) && (*param_4 != 0)) && (*param_3 == (uchar *)0x0)) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Ar.IsSaving() == false) || CompressedDataSize == 0 || CompressedData != nullptr"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\PImplRecastNavMesh.cpp"
                        ,0x407,
                        L"When saving CompressedDataSize must either be zero or CompressedData must be != nullptr"
                       );
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  if ((param_1->field_0x28 & 1) != 0) {
    *param_4 = 0;
  }
  local_res8[0] = 0;
  if ((param_1->field_0x28 & 4) != 0) {
    if (*param_4 < 0x50) {
      local_res8[0] = 0xffffffff;
    }
    else {
      local_res8[0] = *param_4 - 0x50;
    }
  }
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  if (-1 < (int)local_res8[0]) {
    if ((param_1->field_0x28 & 1) != 0) {
      *param_4 = local_res8[0] + 0x50;
      puVar11 = dtAlloc(local_res8[0] + 0x50,DT_ALLOC_PERM_TILE_DATA);
      *param_3 = puVar11;
      if ((puVar11 == (uchar *)0x0) && (1 < (byte)LogNavigation._0_1_)) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
      }
      memset(*param_3,0,(longlong)*param_4);
    }
    if (*param_3 == (uchar *)0x0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("CompressedData != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\PImplRecastNavMesh.cpp"
                          ,0x436,L"");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    psVar5 = (short *)*param_3;
    ::operator<<(param_1,psVar5);
    puVar1 = (uint *)(psVar5 + 2);
    puVar6 = (uint *)**(undefined8 **)&param_1->field_0x8;
    if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar6 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar1);
      }
    }
    else {
      *puVar1 = *puVar6;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    puVar1 = (uint *)(psVar5 + 4);
    puVar6 = (uint *)**(undefined8 **)&param_1->field_0x8;
    if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar6 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar1);
      }
    }
    else {
      *puVar1 = *puVar6;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    puVar1 = (uint *)(psVar5 + 6);
    puVar6 = (uint *)**(undefined8 **)&param_1->field_0x8;
    if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar6 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar1);
      }
    }
    else {
      *puVar1 = *puVar6;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    puVar2 = (ulong64 *)(psVar5 + 0x10);
    puVar7 = (ulong64 *)**(undefined8 **)&param_1->field_0x8;
    if ((ulong64 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar2);
      }
    }
    else {
      *puVar2 = *puVar7;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    }
    puVar2 = (ulong64 *)(psVar5 + 0x1c);
    puVar7 = (ulong64 *)**(undefined8 **)&param_1->field_0x8;
    if ((ulong64 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar2);
      }
    }
    else {
      *puVar2 = *puVar7;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    }
    puVar2 = (ulong64 *)(psVar5 + 0x14);
    puVar7 = (ulong64 *)**(undefined8 **)&param_1->field_0x8;
    if ((ulong64 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar2);
      }
    }
    else {
      *puVar2 = *puVar7;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    }
    puVar2 = (ulong64 *)(psVar5 + 0x20);
    puVar7 = (ulong64 *)**(undefined8 **)&param_1->field_0x8;
    if ((ulong64 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar2);
      }
    }
    else {
      *puVar2 = *puVar7;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    }
    puVar2 = (ulong64 *)(psVar5 + 0x18);
    puVar7 = (ulong64 *)**(undefined8 **)&param_1->field_0x8;
    if ((ulong64 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar2);
      }
    }
    else {
      *puVar2 = *puVar7;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    }
    puVar2 = (ulong64 *)(psVar5 + 0x24);
    puVar7 = (ulong64 *)**(undefined8 **)&param_1->field_0x8;
    if ((ulong64 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar2);
      }
    }
    else {
      *puVar2 = *puVar7;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    }
    puVar3 = (ushort *)(psVar5 + 8);
    puVar8 = (ushort *)**(undefined8 **)&param_1->field_0x8;
    if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar8 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar3,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar3);
      }
    }
    else {
      *puVar3 = *puVar8;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
    }
    puVar3 = (ushort *)(psVar5 + 9);
    puVar8 = (ushort *)**(undefined8 **)&param_1->field_0x8;
    if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar8 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar3,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar3);
      }
    }
    else {
      *puVar3 = *puVar8;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
    }
    puVar3 = (ushort *)(psVar5 + 10);
    puVar8 = (ushort *)**(undefined8 **)&param_1->field_0x8;
    if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar8 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar3,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar3);
      }
    }
    else {
      *puVar3 = *puVar8;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
    }
    puVar3 = (ushort *)(psVar5 + 0xb);
    puVar8 = (ushort *)**(undefined8 **)&param_1->field_0x8;
    if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar8 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar3,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar3);
      }
    }
    else {
      *puVar3 = *puVar8;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
    }
    puVar3 = (ushort *)(psVar5 + 0xc);
    puVar8 = (ushort *)**(undefined8 **)&param_1->field_0x8;
    if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar8 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar3,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar3);
      }
    }
    else {
      *puVar3 = *puVar8;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
    }
    puVar3 = (ushort *)(psVar5 + 0xd);
    puVar8 = (ushort *)**(undefined8 **)&param_1->field_0x8;
    if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar8 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar3,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar3);
      }
    }
    else {
      *puVar3 = *puVar8;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
    }
    puVar3 = (ushort *)(psVar5 + 0xe);
    puVar8 = (ushort *)**(undefined8 **)&param_1->field_0x8;
    if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar8 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar3,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar3);
      }
    }
    else {
      *puVar3 = *puVar8;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
    }
    puVar3 = (ushort *)(psVar5 + 0xf);
    puVar8 = (ushort *)**(undefined8 **)&param_1->field_0x8;
    if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar8 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar3,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar3);
      }
    }
    else {
      *puVar3 = *puVar8;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
    }
    if (0 < (int)local_res8[0]) {
      (**(code **)(*(longlong *)param_1 + 0x188))
                (param_1,*param_3 + 0x50,(longlong)(int)local_res8[0]);
    }
  }
  return;
}

// SerializeRecastMeshTile @ 146e268d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FPImplRecastNavMesh::SerializeRecastMeshTile
          (FArchive *param_1,int param_2,uchar **param_3,int *param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  uint *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  ulong64 *puVar7;
  uint *puVar8;
  code *pcVar9;
  int *piVar10;
  longlong lVar11;
  bool bVar12;
  int iVar13;
  uchar *puVar14;
  FArchive *pFVar15;
  ushort uVar16;
  int iVar17;
  ushort *puVar18;
  ulong64 *puVar19;
  ulonglong uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  undefined1 *puVar24;
  int iVar25;
  ulong64 *puVar26;
  longlong lVar27;
  uint local_res8 [2];
  int local_res10;
  ushort *local_res18;
  int *local_res20;
  ushort local_c8 [4];
  undefined8 local_c0;
  undefined4 local_b8;
  ushort local_b4;
  longlong local_b0;
  undefined8 local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  longlong local_88;
  undefined8 local_80;
  undefined1 *local_78;
  int local_70;
  uint local_6c;
  uint local_68;
  longlong local_58;
  
  local_c8[0] = 0;
  local_c8[1] = 0;
  local_c8[2] = 0;
  local_c8[3] = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b4 = 0;
  if ((param_1->field_0x28 & 4) != 0) {
    puVar14 = *param_3;
    local_c8[1] = *(undefined2 *)(puVar14 + 4);
    local_c8[0] = *(undefined2 *)(puVar14 + 6);
    local_c8[2] = *(undefined2 *)(puVar14 + 0x10);
    local_c8[3] = *(undefined2 *)(puVar14 + 0x12);
    local_c0 = *(undefined8 *)(puVar14 + 0x14);
    local_b8 = CONCAT22(*(undefined2 *)(puVar14 + 0x24),*(undefined2 *)(puVar14 + 0x1e));
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  local_res10 = param_2;
  local_res20 = param_4;
  if ((undefined2 *)plVar1[1] < (undefined2 *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_c8,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_c8);
    }
  }
  else {
    local_c8[0] = *(undefined2 *)*plVar1;
    *plVar1 = *plVar1 + 2;
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  local_b0 = 0x2a;
  if ((undefined2 *)plVar1[1] < (undefined2 *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_c8 + 1,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_c8 + 1);
    }
  }
  else {
    local_c8[1] = *(undefined2 *)*plVar1;
    *plVar1 = *plVar1 + 2;
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((undefined2 *)plVar1[1] < (undefined2 *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_c8 + 2,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_c8 + 2);
    }
  }
  else {
    local_c8[2] = *(undefined2 *)*plVar1;
    *plVar1 = *plVar1 + 2;
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((undefined2 *)plVar1[1] < (undefined2 *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_c8 + 3,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_c8 + 3);
    }
  }
  else {
    local_c8[3] = *(undefined2 *)*plVar1;
    *plVar1 = *plVar1 + 2;
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((undefined2 *)plVar1[1] < (undefined2 *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_c0,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ushort *)&local_c0);
    }
  }
  else {
    local_c0 = CONCAT62(local_c0._2_6_,*(undefined2 *)*plVar1);
    *plVar1 = *plVar1 + 2;
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((undefined2 *)plVar1[1] < (undefined2 *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,(ushort *)((longlong)&local_c0 + 2),2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ushort *)((longlong)&local_c0 + 2));
    }
  }
  else {
    local_c0._0_4_ = CONCAT22(*(undefined2 *)*plVar1,(ushort)local_c0);
    *plVar1 = *plVar1 + 2;
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((undefined2 *)plVar1[1] < (undefined2 *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,(ushort *)((longlong)&local_c0 + 4),2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ushort *)((longlong)&local_c0 + 4));
    }
  }
  else {
    local_c0._0_6_ = CONCAT24(*(undefined2 *)*plVar1,(undefined4)local_c0);
    *plVar1 = *plVar1 + 2;
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((undefined2 *)plVar1[1] < (undefined2 *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,(ushort *)((longlong)&local_c0 + 6),2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ushort *)((longlong)&local_c0 + 6));
    }
  }
  else {
    local_c0 = CONCAT26(*(undefined2 *)*plVar1,(undefined6)local_c0);
    *plVar1 = *plVar1 + 2;
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((undefined2 *)plVar1[1] < (undefined2 *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_b8,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ushort *)&local_b8);
    }
  }
  else {
    local_b8 = CONCAT22(local_b8._2_2_,*(undefined2 *)*plVar1);
    *plVar1 = *plVar1 + 2;
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((undefined2 *)plVar1[1] < (undefined2 *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,(ushort *)((longlong)&local_b8 + 2),2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ushort *)((longlong)&local_b8 + 2));
    }
  }
  else {
    local_b8 = CONCAT22(*(undefined2 *)*plVar1,(ushort)local_b8);
    *plVar1 = *plVar1 + 2;
  }
  piVar10 = local_res20;
  local_68 = (uint)local_c8[3];
  local_b4 = local_c8[3];
  local_88 = CONCAT44(local_88._4_4_,(uint)local_c8[1] * 0x20);
  iVar25 = ((uint)local_c8[0] + (uint)local_c8[0] * 2) * 8;
  uVar21 = local_68 * 6 + 7;
  local_90 = (undefined1 *)CONCAT44(local_90._4_4_,(uint)local_c8[2] * 0x10);
  local_98 = (undefined1 *)CONCAT44(local_98._4_4_,(uint)local_c0._4_2_ * 0x10);
  local_6c = local_68 * 2 + 7 & 0xfffffff8;
  local_a8 = (ulong64 *)(CONCAT44(local_a8._4_4_,uVar21) & 0xfffffffffffffff8);
  iVar22 = ((uint)(ushort)local_c0 + (uint)(ushort)local_c0 * 2) * 8;
  local_a0 = (undefined1 *)CONCAT44(local_a0._4_4_,iVar22);
  uVar23 = (uint)local_c0._2_2_ * 4 + 7;
  local_80 = (undefined1 *)(CONCAT44(local_80._4_4_,uVar23) & 0xfffffffffffffff8);
  iVar13 = (local_b8 & 0xffff) * 0x70;
  iVar17 = ((uint)local_c0._6_2_ + (uint)local_c0._6_2_ * 4) * 0x10;
  local_78 = (undefined1 *)CONCAT44(local_78._4_4_,iVar17);
  local_res18 = (ushort *)CONCAT44(local_res18._4_4_,iVar13);
  local_70 = (local_b8 >> 0x10) * 0x20;
  iVar13 = (uVar21 & 0xfffffff8) + 0x58 +
           local_70 + iVar13 + iVar17 + (uint)local_c0._4_2_ * 0x10 + (uVar23 & 0xfffffff8) + iVar22
           + (uint)local_c8[2] * 0x10 + (uint)local_c8[1] * 0x20 + iVar25 + local_6c;
  if ((param_1->field_0x28 & 1) == 0) {
    if ((param_1->field_0x28 & 4) != 0) {
      if ((*param_3 == (uchar *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("TileData != 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\PImplRecastNavMesh.cpp"
                              ,0x332,L""), bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if ((iVar13 != *piVar10) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("TileLayout.TileSize == TileDataSize",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\PImplRecastNavMesh.cpp"
                              ,0x333,L""), bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
  }
  else {
    if ((*param_3 != (uchar *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("TileData == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\PImplRecastNavMesh.cpp"
                            ,0x324,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    *piVar10 = iVar13;
    puVar14 = dtAlloc(iVar13,DT_ALLOC_PERM_TILE_DATA);
    *param_3 = puVar14;
    if ((puVar14 == (uchar *)0x0) && (1 < (byte)LogNavigation._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
    }
    memset(*param_3,0,(longlong)*piVar10);
  }
  puVar18 = (ushort *)*param_3;
  if (puVar18 != (ushort *)0x0) {
    puVar19 = (ulong64 *)(puVar18 + 0x2c);
    local_58 = (longlong)iVar25 + (longlong)puVar19;
    local_88 = (longlong)(int)local_88 + (int)local_90 + local_58;
    puVar26 = (ulong64 *)((int)local_a8 + local_88);
    puVar24 = (undefined1 *)((longlong)(int)local_a0 + (longlong)puVar26);
    local_80 = puVar24 + (int)local_80;
    local_98 = local_80 + (int)local_98;
    local_78 = local_98 + (int)local_78;
    local_90 = local_78 + (int)local_res18;
    local_res18 = (ushort *)(local_90 + local_70);
    local_a8 = puVar26;
    local_a0 = puVar24;
    if (((undefined1 *)((longlong)(int)local_6c + (longlong)local_res18) !=
         (undefined1 *)((longlong)*local_res20 + (longlong)puVar18)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("d==(TileData + TileDataSize)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\PImplRecastNavMesh.cpp"
                            ,0x34d,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar15 = ::operator<<(param_1,puVar18);
    puVar2 = (undefined4 *)**(undefined8 **)&pFVar15->field_0x8;
    if ((undefined4 *)(*(undefined8 **)&pFVar15->field_0x8)[1] < puVar2 + 1) {
      if ((pFVar15->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar15 + 0x188))(pFVar15,puVar18 + 4,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar15,(uint *)(puVar18 + 4));
      }
    }
    else {
      *(undefined4 *)(puVar18 + 4) = *puVar2;
      **(longlong **)&pFVar15->field_0x8 = **(longlong **)&pFVar15->field_0x8 + 4;
    }
    puVar2 = (undefined4 *)**(undefined8 **)&pFVar15->field_0x8;
    if ((undefined4 *)(*(undefined8 **)&pFVar15->field_0x8)[1] < puVar2 + 1) {
      if ((pFVar15->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar15 + 0x188))(pFVar15,puVar18 + 6,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar15,(uint *)(puVar18 + 6));
      }
    }
    else {
      *(undefined4 *)(puVar18 + 6) = *puVar2;
      **(longlong **)&pFVar15->field_0x8 = **(longlong **)&pFVar15->field_0x8 + 4;
    }
    pFVar15 = ::operator<<(param_1,puVar18 + 1);
    pFVar15 = ::operator<<(pFVar15,puVar18 + 2);
    ::operator<<(pFVar15,puVar18 + 3);
    pFVar15 = ::operator<<(param_1,puVar18 + 8);
    pFVar15 = ::operator<<(pFVar15,puVar18 + 9);
    pFVar15 = ::operator<<(pFVar15,puVar18 + 10);
    ::operator<<(pFVar15,puVar18 + 0xb);
    pFVar15 = ::operator<<(param_1,puVar18 + 0xc);
    pFVar15 = ::operator<<(pFVar15,puVar18 + 0xd);
    ::operator<<(pFVar15,puVar18 + 0xe);
    if (0x16 < local_res10) {
      puVar3 = (undefined1 *)**(undefined8 **)&param_1->field_0x8;
      if ((undefined1 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar18 + 0x13,1);
      }
      else {
        *(undefined1 *)(puVar18 + 0x13) = *puVar3;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
      }
    }
    pFVar15 = ::operator<<(param_1,(double *)(puVar18 + 0x14));
    pFVar15 = ::operator<<(pFVar15,(double *)(puVar18 + 0x18));
    ::operator<<(pFVar15,(double *)(puVar18 + 0x1c));
    pFVar15 = ::operator<<(param_1,(double *)(puVar18 + 0x20));
    pFVar15 = ::operator<<(pFVar15,(double *)(puVar18 + 0x24));
    ::operator<<(pFVar15,(double *)(puVar18 + 0x28));
    ::operator<<(param_1,puVar18 + 0x12);
    pFVar15 = ::operator<<(param_1,puVar18 + 0xf);
    pFVar15 = ::operator<<(pFVar15,puVar18 + 0x10);
    ::operator<<(pFVar15,puVar18 + 0x11);
    lVar27 = local_b0;
    iVar13 = 0;
    if (local_c8[0] != 0) {
      do {
        puVar26 = (ulong64 *)**(longlong **)&param_1->field_0x8;
        if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar26 + 1) {
          if (((&param_1->field_0x0)[lVar27] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar19,8);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar19);
          }
        }
        else {
          *puVar19 = *puVar26;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
        }
        puVar26 = (ulong64 *)**(longlong **)&param_1->field_0x8;
        if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar26 + 1) {
          if (((&param_1->field_0x0)[lVar27] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar19 + 1,8);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar19 + 1);
          }
        }
        else {
          puVar19[1] = *puVar26;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
        }
        puVar26 = (ulong64 *)**(longlong **)&param_1->field_0x8;
        if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar26 + 1) {
          if (((&param_1->field_0x0)[lVar27] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar19 + 2,8);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar19 + 2);
          }
        }
        else {
          puVar19[2] = *puVar26;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
        }
        puVar19 = puVar19 + 3;
        iVar13 = iVar13 + 1;
        puVar26 = local_a8;
      } while (iVar13 < (int)(uint)local_c8[0]);
    }
    lVar27 = local_b0;
    iVar13 = 0;
    if (local_c8[1] != 0) {
      puVar18 = (ushort *)(local_58 + 6);
      do {
        puVar8 = (uint *)(puVar18 + -3);
        puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
        if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
          if (((&param_1->field_0x0)[lVar27] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar8,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar8);
          }
        }
        else {
          *puVar8 = *puVar4;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
        }
        puVar6 = puVar18 + -1;
        puVar5 = (ushort *)**(undefined8 **)&param_1->field_0x8;
        if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
          if (((&param_1->field_0x0)[lVar27] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar6,2);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar6);
          }
        }
        else {
          *puVar6 = *puVar5;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
        }
        puVar6 = (ushort *)**(undefined8 **)&param_1->field_0x8;
        if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar6 + 1) {
          if (((&param_1->field_0x0)[lVar27] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar18,2);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar18);
          }
        }
        else {
          *puVar18 = *puVar6;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
        }
        puVar6 = puVar18 + 1;
        puVar5 = (ushort *)**(undefined8 **)&param_1->field_0x8;
        if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
          if (((&param_1->field_0x0)[lVar27] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar6,2);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar6);
          }
        }
        else {
          *puVar6 = *puVar5;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
        }
        puVar6 = puVar18 + 2;
        puVar5 = (ushort *)**(undefined8 **)&param_1->field_0x8;
        if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
          if (((&param_1->field_0x0)[lVar27] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar6,2);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar6);
          }
        }
        else {
          *puVar6 = *puVar5;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
        }
        puVar6 = puVar18 + 3;
        puVar5 = (ushort *)**(undefined8 **)&param_1->field_0x8;
        if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
          if (((&param_1->field_0x0)[lVar27] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar6,2);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar6);
          }
        }
        else {
          *puVar6 = *puVar5;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
        }
        puVar6 = puVar18 + 4;
        puVar5 = (ushort *)**(undefined8 **)&param_1->field_0x8;
        if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
          if (((&param_1->field_0x0)[lVar27] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar6,2);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar6);
          }
        }
        else {
          *puVar6 = *puVar5;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
        }
        puVar6 = puVar18 + 5;
        puVar5 = (ushort *)**(undefined8 **)&param_1->field_0x8;
        if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
          if (((&param_1->field_0x0)[lVar27] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar6,2);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar6);
          }
        }
        else {
          *puVar6 = *puVar5;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
        }
        puVar6 = puVar18 + 6;
        puVar5 = (ushort *)**(undefined8 **)&param_1->field_0x8;
        if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
          if (((&param_1->field_0x0)[lVar27] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar6,2);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar6);
          }
        }
        else {
          *puVar6 = *puVar5;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
        }
        puVar6 = puVar18 + 7;
        puVar5 = (ushort *)**(undefined8 **)&param_1->field_0x8;
        if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
          if (((&param_1->field_0x0)[lVar27] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar6,2);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar6);
          }
        }
        else {
          *puVar6 = *puVar5;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
        }
        puVar6 = puVar18 + 8;
        puVar5 = (ushort *)**(undefined8 **)&param_1->field_0x8;
        if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
          if (((&param_1->field_0x0)[lVar27] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar6,2);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar6);
          }
        }
        else {
          *puVar6 = *puVar5;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
        }
        puVar6 = puVar18 + 9;
        puVar5 = (ushort *)**(undefined8 **)&param_1->field_0x8;
        if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
          if (((&param_1->field_0x0)[lVar27] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar6,2);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar6);
          }
        }
        else {
          *puVar6 = *puVar5;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
        }
        puVar6 = puVar18 + 10;
        puVar5 = (ushort *)**(undefined8 **)&param_1->field_0x8;
        if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
          if (((&param_1->field_0x0)[lVar27] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar6,2);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar6);
          }
        }
        else {
          *puVar6 = *puVar5;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
        }
        puVar6 = puVar18 + 0xb;
        puVar5 = (ushort *)**(undefined8 **)&param_1->field_0x8;
        if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
          if (((&param_1->field_0x0)[lVar27] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar6,2);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar6);
          }
        }
        else {
          *puVar6 = *puVar5;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
        }
        puVar3 = (undefined1 *)**(undefined8 **)&param_1->field_0x8;
        if ((undefined1 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar18 + 0xc,1);
        }
        else {
          *(undefined1 *)(puVar18 + 0xc) = *puVar3;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
        }
        puVar3 = (undefined1 *)**(undefined8 **)&param_1->field_0x8;
        if ((undefined1 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,(longlong)puVar18 + 0x19,1);
        }
        else {
          *(undefined1 *)((longlong)puVar18 + 0x19) = *puVar3;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
        }
        iVar13 = iVar13 + 1;
        puVar18 = puVar18 + 0x10;
        puVar26 = local_a8;
      } while (iVar13 < (int)(uint)local_c8[1]);
    }
    lVar27 = local_b0;
    iVar13 = 0;
    if (local_c8[3] != 0) {
      puVar18 = (ushort *)(local_88 + 2);
      do {
        puVar6 = puVar18 + -1;
        puVar5 = (ushort *)**(undefined8 **)&param_1->field_0x8;
        if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
          if (((&param_1->field_0x0)[lVar27] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar6,2);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar6);
          }
        }
        else {
          *puVar6 = *puVar5;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
        }
        puVar6 = (ushort *)**(undefined8 **)&param_1->field_0x8;
        if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar6 + 1) {
          if (((&param_1->field_0x0)[lVar27] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar18,2);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar18);
          }
        }
        else {
          *puVar18 = *puVar6;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
        }
        puVar3 = (undefined1 *)**(undefined8 **)&param_1->field_0x8;
        if ((undefined1 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar18 + 1,1);
        }
        else {
          *(undefined1 *)(puVar18 + 1) = *puVar3;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
        }
        puVar3 = (undefined1 *)**(undefined8 **)&param_1->field_0x8;
        if ((undefined1 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,(longlong)puVar18 + 3,1);
        }
        else {
          *(undefined1 *)((longlong)puVar18 + 3) = *puVar3;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
        }
        iVar13 = iVar13 + 1;
        puVar18 = puVar18 + 3;
      } while (iVar13 < (int)(uint)local_c8[3]);
    }
    lVar11 = local_b0;
    iVar13 = 0;
    if ((ushort)local_c0 != 0) {
      do {
        puVar19 = (ulong64 *)**(longlong **)&param_1->field_0x8;
        if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar19 + 1) {
          if (((&param_1->field_0x0)[lVar11] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar26,8);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar26);
          }
        }
        else {
          *puVar26 = *puVar19;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
        }
        puVar19 = (ulong64 *)**(longlong **)&param_1->field_0x8;
        if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar19 + 1) {
          if (((&param_1->field_0x0)[lVar11] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar26 + 1,8);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar26 + 1);
          }
        }
        else {
          puVar26[1] = *puVar19;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
        }
        puVar19 = (ulong64 *)**(longlong **)&param_1->field_0x8;
        if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar19 + 1) {
          if (((&param_1->field_0x0)[lVar11] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar26 + 2,8);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar26 + 2);
          }
        }
        else {
          puVar26[2] = *puVar19;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
        }
        puVar26 = puVar26 + 3;
        iVar13 = iVar13 + 1;
        puVar24 = local_a0;
        lVar27 = local_b0;
      } while (iVar13 < (int)(uint)(ushort)local_c0);
    }
    iVar17 = 0;
    iVar13 = 0;
    if (local_c0._2_2_ != 0) {
      do {
        puVar3 = (undefined1 *)**(undefined8 **)&param_1->field_0x8;
        if ((undefined1 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar24,1);
        }
        else {
          *puVar24 = *puVar3;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
        }
        puVar3 = (undefined1 *)**(undefined8 **)&param_1->field_0x8;
        if ((undefined1 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar24 + 1,1);
        }
        else {
          puVar24[1] = *puVar3;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
        }
        puVar3 = (undefined1 *)**(undefined8 **)&param_1->field_0x8;
        if ((undefined1 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar24 + 2,1);
        }
        else {
          puVar24[2] = *puVar3;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
        }
        puVar3 = (undefined1 *)**(undefined8 **)&param_1->field_0x8;
        if ((undefined1 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar24 + 3,1);
        }
        else {
          puVar24[3] = *puVar3;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
        }
        puVar24 = puVar24 + 4;
        iVar13 = iVar13 + 1;
      } while (iVar13 < (int)(uint)local_c0._2_2_);
    }
    iVar13 = 0;
    if (local_c0._4_2_ != 0) {
      puVar18 = (ushort *)(local_80 + 2);
      do {
        lVar27 = local_b0;
        puVar6 = puVar18 + -1;
        puVar5 = (ushort *)**(undefined8 **)&param_1->field_0x8;
        if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
          if (((&param_1->field_0x0)[local_b0] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar6,2);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar6);
          }
        }
        else {
          *puVar6 = *puVar5;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
        }
        puVar6 = (ushort *)**(undefined8 **)&param_1->field_0x8;
        if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar6 + 1) {
          if (((&param_1->field_0x0)[lVar27] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar18,2);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar18);
          }
        }
        else {
          *puVar18 = *puVar6;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
        }
        puVar6 = puVar18 + 1;
        puVar5 = (ushort *)**(undefined8 **)&param_1->field_0x8;
        if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
          if (((&param_1->field_0x0)[lVar27] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar6,2);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar6);
          }
        }
        else {
          *puVar6 = *puVar5;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
        }
        puVar6 = puVar18 + 2;
        puVar5 = (ushort *)**(undefined8 **)&param_1->field_0x8;
        if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
          if (((&param_1->field_0x0)[lVar27] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar6,2);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar6);
          }
        }
        else {
          *puVar6 = *puVar5;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
        }
        puVar6 = puVar18 + 3;
        puVar5 = (ushort *)**(undefined8 **)&param_1->field_0x8;
        if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
          if (((&param_1->field_0x0)[lVar27] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar6,2);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar6);
          }
        }
        else {
          *puVar6 = *puVar5;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
        }
        puVar6 = puVar18 + 4;
        puVar5 = (ushort *)**(undefined8 **)&param_1->field_0x8;
        if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
          if (((&param_1->field_0x0)[lVar27] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar6,2);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar6);
          }
        }
        else {
          *puVar6 = *puVar5;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
        }
        puVar8 = (uint *)(puVar18 + 5);
        puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
        if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
          if (((&param_1->field_0x0)[lVar27] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar8,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar8);
          }
        }
        else {
          *puVar8 = *puVar4;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
        }
        iVar13 = iVar13 + 1;
        puVar18 = puVar18 + 8;
        lVar27 = local_b0;
      } while (iVar13 < (int)(uint)local_c0._4_2_);
    }
    iVar13 = 0;
    uVar16 = 0;
    if (local_c0._6_2_ != 0) {
      puVar19 = (ulong64 *)(local_98 + 0x20);
      do {
        lVar27 = local_b0;
        puVar26 = puVar19 + -4;
        puVar7 = (ulong64 *)**(undefined8 **)&param_1->field_0x8;
        if ((ulong64 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
          if (((&param_1->field_0x0)[local_b0] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar26,8);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar26);
          }
        }
        else {
          *puVar26 = *puVar7;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
        }
        puVar26 = puVar19 + -3;
        puVar7 = (ulong64 *)**(undefined8 **)&param_1->field_0x8;
        if ((ulong64 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
          if (((&param_1->field_0x0)[lVar27] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar26,8);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar26);
          }
        }
        else {
          *puVar26 = *puVar7;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
        }
        puVar26 = puVar19 + -2;
        puVar7 = (ulong64 *)**(undefined8 **)&param_1->field_0x8;
        if ((ulong64 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
          if (((&param_1->field_0x0)[lVar27] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar26,8);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar26);
          }
        }
        else {
          *puVar26 = *puVar7;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
        }
        puVar26 = puVar19 + -1;
        puVar7 = (ulong64 *)**(undefined8 **)&param_1->field_0x8;
        if ((ulong64 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
          if (((&param_1->field_0x0)[lVar27] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar26,8);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar26);
          }
        }
        else {
          *puVar26 = *puVar7;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
        }
        puVar26 = (ulong64 *)**(longlong **)&param_1->field_0x8;
        if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar26 + 1) {
          if (((&param_1->field_0x0)[lVar27] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar19,8);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar19);
          }
        }
        else {
          *puVar19 = *puVar26;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
        }
        puVar26 = puVar19 + 1;
        puVar7 = (ulong64 *)**(undefined8 **)&param_1->field_0x8;
        if ((ulong64 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
          if (((&param_1->field_0x0)[lVar27] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar26,8);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar26);
          }
        }
        else {
          *puVar26 = *puVar7;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
        }
        puVar26 = puVar19 + 2;
        puVar7 = (ulong64 *)**(undefined8 **)&param_1->field_0x8;
        if ((ulong64 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
          if (((&param_1->field_0x0)[lVar27] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar26,8);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar26);
          }
        }
        else {
          *puVar26 = *puVar7;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
        }
        puVar26 = puVar19 + 5;
        puVar18 = (ushort *)**(undefined8 **)&param_1->field_0x8;
        if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar18 + 1) {
          if (((&param_1->field_0x0)[lVar27] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar26,2);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,(ushort *)puVar26);
          }
        }
        else {
          *(ushort *)puVar26 = *puVar18;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
        }
        puVar24 = (undefined1 *)**(undefined8 **)&param_1->field_0x8;
        if ((undefined1 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar24 + 1) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,(longlong)puVar19 + 0x2b,1);
        }
        else {
          *(undefined1 *)((longlong)puVar19 + 0x2b) = *puVar24;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
        }
        puVar24 = (undefined1 *)**(undefined8 **)&param_1->field_0x8;
        if ((undefined1 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar24 + 1) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,(longlong)puVar19 + 0x2a,1);
        }
        else {
          *(undefined1 *)((longlong)puVar19 + 0x2a) = *puVar24;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
        }
        if (((param_1->field_0x28 & 1) == 0) ||
           (iVar22 = FArchiveState::CustomVer
                               ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID),
           0x60 < iVar22)) {
          puVar26 = puVar19 + 4;
          puVar7 = (ulong64 *)**(undefined8 **)&param_1->field_0x8;
          if ((ulong64 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
            if (((&param_1->field_0x0)[lVar27] & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar26,8);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,puVar26);
            }
          }
          else {
            *puVar26 = *puVar7;
            **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
          }
        }
        else {
          plVar1 = *(longlong **)&param_1->field_0x8;
          if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
            if (((&param_1->field_0x0)[lVar27] & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
              puVar19[4] = (ulonglong)local_res8[0];
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,local_res8);
              puVar19[4] = (ulonglong)local_res8[0];
            }
          }
          else {
            local_res8[0] = *(uint *)*plVar1;
            *plVar1 = *plVar1 + 4;
            puVar19[4] = (ulonglong)local_res8[0];
          }
        }
        iVar13 = iVar13 + 1;
        puVar19 = puVar19 + 10;
        lVar27 = local_b0;
        uVar16 = local_c0._6_2_;
      } while (iVar13 < (int)(uint)local_c0._6_2_);
    }
    if ((10 < local_res10) && (iVar13 = 0, uVar16 != 0)) {
      puVar19 = (ulong64 *)(local_98 + 0x38);
      do {
        puVar26 = (ulong64 *)**(longlong **)&param_1->field_0x8;
        if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar26 + 1) {
          if (((&param_1->field_0x0)[lVar27] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar19,8);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar19);
          }
        }
        else {
          *puVar19 = *puVar26;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
        }
        iVar13 = iVar13 + 1;
        puVar19 = puVar19 + 10;
      } while (iVar13 < (int)(uint)local_c0._6_2_);
    }
    iVar13 = 0;
    if ((ushort)local_b8 != 0) {
      puVar19 = (ulong64 *)(local_78 + 8);
      do {
        lVar27 = local_b0;
        puVar26 = puVar19 + -1;
        puVar7 = (ulong64 *)**(undefined8 **)&param_1->field_0x8;
        if ((ulong64 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
          if (((&param_1->field_0x0)[local_b0] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar26,8);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar26);
          }
        }
        else {
          *puVar26 = *puVar7;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
        }
        puVar26 = (ulong64 *)**(longlong **)&param_1->field_0x8;
        if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar26 + 1) {
          if (((&param_1->field_0x0)[lVar27] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar19,8);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar19);
          }
        }
        else {
          *puVar19 = *puVar26;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
        }
        puVar26 = puVar19 + 1;
        puVar7 = (ulong64 *)**(undefined8 **)&param_1->field_0x8;
        if ((ulong64 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
          if (((&param_1->field_0x0)[lVar27] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar26,8);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar26);
          }
        }
        else {
          *puVar26 = *puVar7;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
        }
        puVar26 = puVar19 + 5;
        puVar7 = (ulong64 *)**(undefined8 **)&param_1->field_0x8;
        if ((ulong64 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
          if (((&param_1->field_0x0)[lVar27] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar26,8);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar26);
          }
        }
        else {
          *puVar26 = *puVar7;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
        }
        puVar26 = puVar19 + 6;
        puVar7 = (ulong64 *)**(undefined8 **)&param_1->field_0x8;
        if ((ulong64 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
          if (((&param_1->field_0x0)[lVar27] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar26,8);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar26);
          }
        }
        else {
          *puVar26 = *puVar7;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
        }
        puVar26 = puVar19 + 7;
        puVar7 = (ulong64 *)**(undefined8 **)&param_1->field_0x8;
        if ((ulong64 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
          if (((&param_1->field_0x0)[lVar27] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar26,8);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar26);
          }
        }
        else {
          *puVar26 = *puVar7;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
        }
        puVar26 = puVar19 + 2;
        puVar7 = (ulong64 *)**(undefined8 **)&param_1->field_0x8;
        if ((ulong64 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
          if (((&param_1->field_0x0)[lVar27] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar26,8);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar26);
          }
        }
        else {
          *puVar26 = *puVar7;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
        }
        puVar26 = puVar19 + 3;
        puVar7 = (ulong64 *)**(undefined8 **)&param_1->field_0x8;
        if ((ulong64 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
          if (((&param_1->field_0x0)[lVar27] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar26,8);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar26);
          }
        }
        else {
          *puVar26 = *puVar7;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
        }
        puVar26 = puVar19 + 4;
        puVar7 = (ulong64 *)**(undefined8 **)&param_1->field_0x8;
        if ((ulong64 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
          if (((&param_1->field_0x0)[lVar27] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar26,8);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar26);
          }
        }
        else {
          *puVar26 = *puVar7;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
        }
        puVar26 = puVar19 + 8;
        puVar7 = (ulong64 *)**(undefined8 **)&param_1->field_0x8;
        if ((ulong64 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
          if (((&param_1->field_0x0)[lVar27] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar26,8);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar26);
          }
        }
        else {
          *puVar26 = *puVar7;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
        }
        puVar26 = puVar19 + 9;
        puVar7 = (ulong64 *)**(undefined8 **)&param_1->field_0x8;
        if ((ulong64 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
          if (((&param_1->field_0x0)[lVar27] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar26,8);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar26);
          }
        }
        else {
          *puVar26 = *puVar7;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
        }
        puVar26 = puVar19 + 10;
        puVar7 = (ulong64 *)**(undefined8 **)&param_1->field_0x8;
        if ((ulong64 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
          if (((&param_1->field_0x0)[lVar27] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar26,8);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar26);
          }
        }
        else {
          *puVar26 = *puVar7;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
        }
        puVar26 = puVar19 + 0xb;
        puVar7 = (ulong64 *)**(undefined8 **)&param_1->field_0x8;
        if ((ulong64 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
          if (((&param_1->field_0x0)[lVar27] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar26,8);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar26);
          }
        }
        else {
          *puVar26 = *puVar7;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
        }
        puVar18 = (ushort *)((longlong)puVar19 + 100);
        puVar6 = (ushort *)**(undefined8 **)&param_1->field_0x8;
        if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar6 + 1) {
          if (((&param_1->field_0x0)[lVar27] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar18,2);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar18);
          }
        }
        else {
          *puVar18 = *puVar6;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
        }
        puVar24 = (undefined1 *)**(undefined8 **)&param_1->field_0x8;
        if ((undefined1 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar24 + 1) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,(longlong)puVar19 + 0x66,1);
        }
        else {
          *(undefined1 *)((longlong)puVar19 + 0x66) = *puVar24;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
        }
        puVar24 = (undefined1 *)**(undefined8 **)&param_1->field_0x8;
        if ((undefined1 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar24 + 1) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,(longlong)puVar19 + 0x67,1);
        }
        else {
          *(undefined1 *)((longlong)puVar19 + 0x67) = *puVar24;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
        }
        puVar26 = puVar19 + 0xc;
        puVar8 = (uint *)**(undefined8 **)&param_1->field_0x8;
        if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar8 + 1) {
          if (((&param_1->field_0x0)[lVar27] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar26,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,(uint *)puVar26);
          }
        }
        else {
          *(uint *)puVar26 = *puVar8;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
        }
        iVar13 = iVar13 + 1;
        puVar19 = puVar19 + 0xe;
        lVar27 = local_b0;
      } while (iVar13 < (int)(local_b8 & 0xffff));
    }
    if (local_b8._2_2_ != 0) {
      puVar19 = (ulong64 *)(local_90 + 0x10);
      do {
        lVar27 = local_b0;
        puVar26 = puVar19 + -2;
        puVar7 = (ulong64 *)**(undefined8 **)&param_1->field_0x8;
        if ((ulong64 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
          if (((&param_1->field_0x0)[local_b0] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar26,8);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar26);
          }
        }
        else {
          *puVar26 = *puVar7;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
        }
        puVar26 = puVar19 + -1;
        puVar7 = (ulong64 *)**(undefined8 **)&param_1->field_0x8;
        if ((ulong64 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
          if (((&param_1->field_0x0)[lVar27] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar26,8);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar26);
          }
        }
        else {
          *puVar26 = *puVar7;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
        }
        puVar26 = (ulong64 *)**(longlong **)&param_1->field_0x8;
        if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar26 + 1) {
          if (((&param_1->field_0x0)[lVar27] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar19,8);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,puVar19);
          }
        }
        else {
          *puVar19 = *puVar26;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
        }
        iVar17 = iVar17 + 1;
        puVar19 = puVar19 + 4;
        lVar27 = local_b0;
      } while (iVar17 < (int)(local_b8 >> 0x10));
    }
    if (local_68 != 0) {
      uVar20 = (ulonglong)local_68;
      do {
        puVar18 = (ushort *)**(undefined8 **)&param_1->field_0x8;
        if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar18 + 1) {
          if (((&param_1->field_0x0)[lVar27] & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,2);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,local_res18);
          }
        }
        else {
          *local_res18 = *puVar18;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
        }
        local_res18 = local_res18 + 1;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
  }
  return;
}

// SetFilterForbiddenFlags @ 146e28ab0

void __cdecl
FPImplRecastNavMesh::SetFilterForbiddenFlags(FRecastQueryFilter *param_1,ushort param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)&param_1->field_0x422;
  if (param_1 == (FRecastQueryFilter *)0x0) {
    puVar1 = (ushort *)&DAT_0000041a;
  }
  *puVar1 = param_2;
  return;
}

// SetPolyAreaID @ 146e29370

void __thiscall
FPImplRecastNavMesh::SetPolyAreaID(FPImplRecastNavMesh *this,ulong64 param_1,uchar param_2)

{
  uchar *puVar1;
  dtNavMesh *pdVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  dtMeshTile *pdVar7;
  
  pdVar2 = this->DetourNavMesh;
  if (pdVar2 == (dtNavMesh *)0x0) {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  bVar3 = (byte)pdVar2->m_polyBits;
  bVar4 = (byte)pdVar2->m_tileBits;
  uVar6 = (uint)(param_1 >> (bVar3 & 0x3f)) & (int)(1L << (bVar4 & 0x3f)) - 1U;
  uVar5 = (1 << (bVar3 & 0x3f)) - 1U & (uint)param_1;
  if ((((uVar6 < (uint)pdVar2->m_maxTiles) &&
       (pdVar7 = pdVar2->m_tiles + uVar6,
       pdVar7->salt ==
       ((uint)(param_1 >> (bVar4 + bVar3 & 0x3f)) &
       (int)(1L << ((byte)pdVar2->m_saltBits & 0x3f)) - 1U))) &&
      (pdVar7->header != (dtMeshHeader *)0x0)) && (uVar5 < pdVar7->header->polyCount)) {
    puVar1 = &pdVar7->polys[uVar5].areaAndtype;
    *puVar1 = *puVar1 ^ (pdVar7->polys[uVar5].areaAndtype ^ param_2) & 0x3f;
    return;
  }
  return;
}

// SetRecastMesh @ 146e295f0

void __thiscall FPImplRecastNavMesh::SetRecastMesh(FPImplRecastNavMesh *this,dtNavMesh *param_1)

{
  undefined1 *puVar1;
  ARecastNavMesh *pAVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  FDestructionSentinel local_38;
  
  if (param_1 != this->DetourNavMesh) {
    ReleaseDetourNavMesh(this);
    pAVar2 = this->NavMeshOwner;
    this->DetourNavMesh = param_1;
    if (pAVar2 != (ARecastNavMesh *)0x0) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pAVar2->OnNavMeshUpdate,
                 (FWriteAccessScope *)&local_38);
      puVar1 = &(pAVar2->OnNavMeshUpdate).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar6 = false;
      uVar10 = *(int *)&(pAVar2->OnNavMeshUpdate).field_0x10 - 1;
      if (-1 < (int)uVar10) {
        lVar11 = (longlong)(int)uVar10 << 4;
        bVar6 = false;
        do {
          uVar9 = 0;
          if ((int)uVar10 < *(int *)&(pAVar2->OnNavMeshUpdate).field_0x10) {
            uVar9 = ~uVar10 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar3 = *(longlong *)&(pAVar2->OnNavMeshUpdate).field_0x8;
          if (((*(int *)(lVar11 + 8 + lVar3) == 0) ||
              (plVar4 = *(longlong **)(lVar11 + lVar3), plVar4 == (longlong *)0x0)) ||
             (cVar8 = (**(code **)(*plVar4 + 0x68))(), cVar8 == '\0')) {
            bVar6 = true;
          }
          lVar11 = lVar11 + -0x10;
          uVar10 = uVar10 - 1;
        } while (-1 < (int)uVar10);
      }
      puVar1 = &(pAVar2->OnNavMeshUpdate).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar6) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pAVar2->OnNavMeshUpdate,
                   false);
      }
      if (local_38.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
      }
    }
    OnAreaCostChanged(this);
  }
  return;
}

// TestClusterPath @ 146e2aa50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

Type __thiscall
FPImplRecastNavMesh::TestClusterPath
          (FPImplRecastNavMesh *this,TVector<double> *param_1,TVector<double> *param_2,int *param_3)

{
  undefined1 *puVar1;
  float fVar2;
  ARecastNavMesh *pAVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  Type TVar7;
  uint uVar8;
  dtQueryFilter *pdVar9;
  dtNavMeshQuery *this_00;
  undefined1 auStackY_178 [32];
  ulong64 local_128;
  ulong64 local_120;
  TVector<double> local_118;
  TVector<double> local_100;
  dtNavMeshQuery local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pAVar3 = this->NavMeshOwner;
  if (pAVar3->_padding_ == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      TVar7 = (*pcVar5)();
      return TVar7;
    }
  }
  lVar4 = *(longlong *)(pAVar3->_padding_ + 0x10);
  fVar2 = this->NavMeshOwner->DefaultMaxHierarchicalSearchNodes;
  pdVar9 = (dtQueryFilter *)(lVar4 + 8);
  if (lVar4 == 0) {
    pdVar9 = (dtQueryFilter *)0x0;
  }
  if ((fVar2 < 0.0) || (__real_4f000000 < fVar2)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NavMeshOwner->DefaultMaxHierarchicalSearchNodes >= 0. && NavMeshOwner->DefaultMaxHierarchicalSearchNodes <= (float)TNumericLimits<int32>::Max()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\PImplRecastNavMesh.cpp"
                       ,0x52a,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      TVar7 = (*pcVar5)();
      return TVar7;
    }
  }
  dtNavMeshQuery::dtNavMeshQuery(&local_e8);
  bVar6 = IsInGameThread();
  this_00 = &this->SharedNavQuery;
  if (!bVar6) {
    this_00 = &local_e8;
  }
  dtNavMeshQuery::init
            (this_00,this->DetourNavMesh,(int)this->NavMeshOwner->DefaultMaxHierarchicalSearchNodes,
             (dtQuerySpecialLinkFilter *)0x0);
  (this_00->m_query).requireNavigableEndLocation = '\x01';
  bVar6 = InitPathfinding(this,param_1,param_2,this_00,pdVar9,&local_100,&local_120,&local_118,
                          &local_128,(FNavMeshPath *)0x0);
  if (bVar6) {
    uVar8 = dtNavMeshQuery::testClusterPath(this_00,local_120,local_128);
    if (param_3 != (int *)0x0) {
      *param_3 = this_00->m_queryNodes;
    }
    if ((uVar8 >> 0x1e & 1) == 0) {
      TVar7 = Fail - ((uVar8 & 8) != 0);
    }
    else {
      TVar7 = ~(uVar8 >> 6) & Error | Fail;
    }
  }
  else {
    TVar7 = Error;
  }
  dtNavMeshQuery::~dtNavMeshQuery(&local_e8);
  return TVar7;
}

// TestPath @ 146e2b220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

Type __thiscall
FPImplRecastNavMesh::TestPath
          (FPImplRecastNavMesh *this,TVector<double> *param_1,TVector<double> *param_2,bool param_3,
          FNavigationQueryFilter *param_4,UObject *param_5,int *param_6)

{
  undefined1 *puVar1;
  int iVar2;
  ARecastNavMesh *this_00;
  INavigationQueryFilterInterface *pIVar3;
  UNavigationSystemBase *pUVar4;
  bool bVar5;
  uint uVar6;
  UWorld *pUVar7;
  UClass *pUVar8;
  Type TVar9;
  dtNavMeshQuery *this_01;
  dtQueryFilter *pdVar10;
  undefined1 auStackY_1c8 [32];
  dtQueryResult local_170;
  UObject *local_160;
  TVector<double> *local_158;
  TVector<double> *local_150;
  ulong64 local_148;
  ulong64 local_140;
  dtQuerySpecialLinkFilter local_138;
  UNavigationSystemBase *local_130;
  FWeakObjectPtr local_128;
  undefined8 local_120;
  TVector<double> local_118;
  TVector<double> local_100;
  dtNavMeshQuery local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  if ((this->DetourNavMesh == (dtNavMesh *)0x0) ||
     (this_00 = this->NavMeshOwner, this_00 == (ARecastNavMesh *)0x0)) {
    return Error;
  }
  pIVar3 = (param_4->QueryFilterImpl).Object;
  local_158 = param_2;
  local_150 = param_1;
  if ((pIVar3 == (INavigationQueryFilterInterface *)0x0) ||
     (pdVar10 = (dtQueryFilter *)(pIVar3 + 1), pdVar10 == (dtQueryFilter *)0x0)) {
    if (FVisualLogger::bIsRecording == 0) {
      return Error;
    }
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this_00,(FName *)&LogNavigation.field_0x4,Warning,
               L"FPImplRecastNavMesh::FindPath failing due to QueryFilter == NULL");
    return Error;
  }
  pUVar7 = AActor::GetWorld((AActor *)this_00);
  if ((pUVar7 != (UWorld *)0x0) &&
     (pUVar4 = (pUVar7->NavigationSystem).field0_0x0.DebugPtr,
     pUVar4 != (UNavigationSystemBase *)0x0)) {
    pUVar8 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar2 = (int)pUVar8->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       (local_130 = pUVar4,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
       &pUVar8->_padding_)) goto LAB_146e2b2e7;
  }
  local_130 = (UNavigationSystemBase *)0x0;
LAB_146e2b2e7:
  local_138 = (dtQuerySpecialLinkFilter)&___7FRecastSpeciaLinkFilter__6B_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_5);
  }
  local_128.ObjectIndex = 0;
  local_128.ObjectSerialNumber = 0;
  local_160 = param_5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_5);
  }
  FWeakObjectPtr::operator=(&local_128,(FObjectPtr)&local_160);
  local_120 = 0;
  dtNavMeshQuery::dtNavMeshQuery(&local_e8);
  bVar5 = IsInGameThread();
  this_01 = &this->SharedNavQuery;
  if (!bVar5) {
    this_01 = &local_e8;
  }
  dtNavMeshQuery::init(this_01,this->DetourNavMesh,param_4->MaxSearchNodes,&local_138);
  (this_01->m_query).requireNavigableEndLocation = '\0';
  puVar1 = &(this_01->m_query).field_0x68;
  *puVar1 = *puVar1 | param_3;
  bVar5 = InitPathfinding(this,local_150,local_158,this_01,pdVar10,&local_100,&local_140,&local_118,
                          &local_148,(FNavMeshPath *)0x0);
  if (bVar5) {
    local_170.data.m_data = (dtQueryResultPack *)0x0;
    local_170.data.m_size = 0;
    local_170.data.m_cap = 0;
    uVar6 = dtNavMeshQuery::findPath
                      (this_01,local_140,local_148,(double *)&local_100,(double *)&local_118,
                       __real_7fefffffffffffff,pdVar10,&local_170,(double *)0x0);
    if (param_6 != (int *)0x0) {
      *param_6 = this_01->m_queryNodes;
    }
    if ((uVar6 >> 0x1e & 1) == 0) {
      TVar9 = (~(uVar6 >> 3) & 1) + Error;
    }
    else {
      TVar9 = (byte)~(byte)(uVar6 >> 6) & Error | Fail;
    }
    dtFree(local_170.data.m_data,DT_ALLOC_TEMP);
  }
  else {
    TVar9 = Error;
  }
  dtNavMeshQuery::~dtNavMeshQuery(&local_e8);
  return TVar9;
}

// UpdateNavigationLinkArea @ 146e2e830

void __thiscall
FPImplRecastNavMesh::UpdateNavigationLinkArea
          (FPImplRecastNavMesh *this,FNavLinkId param_1,uchar param_2,ushort param_3)

{
  dtNavMesh *pdVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  pdVar1 = this->DetourNavMesh;
  if (pdVar1 != (dtNavMesh *)0x0) {
    uVar9 = 0;
    uVar3 = uVar9;
    uVar8 = uVar9;
    if (0 < pdVar1->m_maxTiles) {
      do {
        lVar2 = (longlong)&pdVar1->m_tiles->salt + uVar8;
        if (((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) &&
           (uVar5 = uVar9, uVar7 = uVar9, *(short *)(*(longlong *)(lVar2 + 8) + 0x1a) != 0)) {
          do {
            if (*(ulong64 *)(*(longlong *)(lVar2 + 0x48) + 0x40 + uVar5) == param_1.Id) {
              lVar4 = (ulonglong)*(ushort *)(*(longlong *)(lVar2 + 0x48) + 0x48 + uVar5) * 0x20 +
                      *(longlong *)(lVar2 + 0x10);
              *(ushort *)(lVar4 + 0x1c) = param_3;
              *(byte *)(lVar4 + 0x1f) =
                   *(byte *)(lVar4 + 0x1f) ^ (*(byte *)(lVar4 + 0x1f) ^ param_2) & 0x3f;
            }
            uVar6 = (int)uVar7 + 1;
            uVar5 = uVar5 + 0x50;
            uVar7 = (ulonglong)uVar6;
          } while ((int)uVar6 < (int)(uint)*(ushort *)(*(longlong *)(lVar2 + 8) + 0x1a));
        }
        uVar6 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar6;
        uVar8 = uVar8 + 0xa8;
      } while ((int)uVar6 < pdVar1->m_maxTiles);
    }
    return;
  }
  return;
}

// UpdateSegmentLinkArea @ 146e2ed40

void __thiscall
FPImplRecastNavMesh::UpdateSegmentLinkArea
          (FPImplRecastNavMesh *this,int param_1,uchar param_2,ushort param_3)

{
  longlong lVar1;
  dtNavMesh *pdVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  pdVar2 = this->DetourNavMesh;
  if (pdVar2 != (dtNavMesh *)0x0) {
    uVar9 = 0;
    uVar10 = uVar9;
    uVar11 = uVar9;
    if (0 < pdVar2->m_maxTiles) {
      do {
        lVar5 = (longlong)&pdVar2->m_tiles->salt + uVar10;
        if (((lVar5 != 0) && (*(longlong *)(lVar5 + 8) != 0)) &&
           (uVar3 = uVar9, uVar8 = uVar9, *(short *)(*(longlong *)(lVar5 + 8) + 0x1e) != 0)) {
          do {
            lVar1 = *(longlong *)(lVar5 + 0x68);
            if ((*(int *)(lVar1 + 0x68 + uVar8) == param_1) &&
               (uVar7 = uVar9, *(char *)(lVar1 + 0x6e + uVar8) != '\0')) {
              do {
                uVar6 = (int)uVar7 + 1;
                lVar4 = (longlong)
                        (int)((uint)*(ushort *)(lVar1 + 0x6c + uVar8) +
                             (uint)*(ushort *)(*(longlong *)(lVar5 + 8) + 0x20) + (int)uVar7) * 0x20
                        + *(longlong *)(lVar5 + 0x10);
                *(ushort *)(lVar4 + 0x1c) = param_3;
                *(byte *)(lVar4 + 0x1f) =
                     *(byte *)(lVar4 + 0x1f) ^ (*(byte *)(lVar4 + 0x1f) ^ param_2) & 0x3f;
                uVar7 = (ulonglong)uVar6;
              } while ((int)uVar6 < (int)(uint)*(byte *)(lVar1 + 0x6e + uVar8));
            }
            uVar6 = (int)uVar3 + 1;
            uVar3 = (ulonglong)uVar6;
            uVar8 = uVar8 + 0x70;
          } while ((int)uVar6 < (int)(uint)*(ushort *)(*(longlong *)(lVar5 + 8) + 0x1e));
        }
        uVar6 = (int)uVar11 + 1;
        uVar10 = uVar10 + 0xa8;
        uVar11 = (ulonglong)uVar6;
      } while ((int)uVar6 < pdVar2->m_maxTiles);
    }
    return;
  }
  return;
}

// operator() @ 1504fccd0

bool __thiscall
`FPImplRecastNavMesh::FindPolysAroundCircle'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<714170589362784228>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<714170589362784228>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504fcd20

bool __thiscall
`FPImplRecastNavMesh::GetPolysWithinPathingDistance'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<714170589362784282>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<714170589362784282>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504fcfd0

bool __thiscall `FPImplRecastNavMesh::GetNavMeshTilesIn'::__l10::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<714170589362785645>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<714170589362785645>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504fd0b0

bool __thiscall
`FPImplRecastNavMesh::GetTilesDebugGeometry'::__l100::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<714170589362785447>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<714170589362785447>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

