// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 6

// FNavMeshTileData @ 146dd5a40

/* WARNING: Enum "Type": Some values do not have unique names */

FNavMeshTileData * __thiscall
FNavMeshTileData::FNavMeshTileData
          (FNavMeshTileData *this,uchar *param_1,int param_2,int param_3,TBox<double> *param_4)

{
  int iVar1;
  TBox<double> *pTVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar uVar17;
  uchar uVar18;
  bool bVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<FStat_STAT_Navigation_TileCacheMemory> FVar21;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNavData *pFVar22;
  ulong64 uVar23;
  FNavMeshTileData *pFVar24;
  uchar auVar25 [8];
  TRawPtrProxy<FNavMeshTileData::FNavData> local_res8;
  FName local_48;
  FStatMessage local_40;
  
  this->DataSize = param_2;
  this->LayerIndex = param_3;
  dVar8 = (param_4->Min).field0_0x0._s_0.Y;
  dVar9 = (param_4->Min).field0_0x0._s_0.Z;
  dVar10 = (param_4->Max).field0_0x0._s_0.X;
  (this->LayerBBox).Min.field0_0x0._s_0.X = (param_4->Min).field0_0x0._s_0.X;
  (this->LayerBBox).Min.field0_0x0._s_0.Y = dVar8;
  uVar4 = *(undefined4 *)((longlong)&(param_4->Max).field0_0x0 + 8);
  uVar5 = *(undefined4 *)((longlong)&(param_4->Max).field0_0x0 + 0xc);
  uVar6 = *(undefined4 *)((longlong)&(param_4->Max).field0_0x0 + 0x10);
  uVar7 = *(undefined4 *)((longlong)&(param_4->Max).field0_0x0 + 0x14);
  (this->LayerBBox).Min.field0_0x0._s_0.Z = dVar9;
  (this->LayerBBox).Max.field0_0x0._s_0.X = dVar10;
  uVar11 = param_4->IsValid;
  uVar12 = param_4->Pad[0];
  uVar13 = param_4->Pad[1];
  uVar14 = param_4->Pad[2];
  uVar15 = param_4->Pad[3];
  uVar16 = param_4->Pad[4];
  uVar17 = param_4->Pad[5];
  uVar18 = param_4->Pad[6];
  *(undefined4 *)((longlong)&(this->LayerBBox).Max.field0_0x0 + 8) = uVar4;
  *(undefined4 *)((longlong)&(this->LayerBBox).Max.field0_0x0 + 0xc) = uVar5;
  *(undefined4 *)((longlong)&(this->LayerBBox).Max.field0_0x0 + 0x10) = uVar6;
  *(undefined4 *)((longlong)&(this->LayerBBox).Max.field0_0x0 + 0x14) = uVar7;
  (this->LayerBBox).IsValid = uVar11;
  (this->LayerBBox).Pad[0] = uVar12;
  (this->LayerBBox).Pad[1] = uVar13;
  (this->LayerBBox).Pad[2] = uVar14;
  (this->LayerBBox).Pad[3] = uVar15;
  (this->LayerBBox).Pad[4] = uVar16;
  (this->LayerBBox).Pad[5] = uVar17;
  (this->LayerBBox).Pad[6] = uVar18;
  (this->NavData).Object = (FNavData *)0x0;
  (this->NavData).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  auVar25 = (uchar  [8])(longlong)this->DataSize;
  if (auVar25 != (uchar  [8])0x0) {
    FVar21 = StatPtr_STAT_Navigation_TileCacheMemory;
    if (StatPtr_STAT_Navigation_TileCacheMemory ==
        (FThreadSafeStaticStat<FStat_STAT_Navigation_TileCacheMemory>)0x0) {
      pFVar20 = ::FName::FName(&local_48,"STAT_Navigation_TileCacheMemory");
      FVar21 = (FThreadSafeStaticStat<FStat_STAT_Navigation_TileCacheMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_TileCacheMemory,
                          *pFVar20,L"Tile cache memory","STATGROUP_Navigation","STATCAT_Advanced",
                          L"Navigation",true,false,ST_int64,false,false,MCR_Physical);
    }
    pTVar2 = *(TBox<double> **)FVar21;
    param_4 = pTVar2;
    if (((pTVar2 != (TBox<double> *)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_40.NameAndInfo.Number = (uint)((ulonglong)pTVar2 >> 0x20) & 0xffffafff | 0xa000;
      param_4 = pTVar2;
      local_40.StatData.Pad = auVar25;
      local_40.NameAndInfo.Index.Value = (uint)pTVar2;
      FThreadStats::AddStatMessage(this_00,&local_40);
      FStatsTrace::Add((FName *)&param_4,(long64)auVar25);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  pFVar22 = ::operator_new(0x10);
  if (pFVar22 == (FNavData *)0x0) {
    pFVar22 = (FNavData *)0x0;
  }
  else {
    iVar1 = this->DataSize;
    pFVar22->RawNavData = param_1;
    if (param_1 == (uchar *)0x0) {
      pFVar22->AllocatedSize = 0;
    }
    else {
      `public:___cdecl_FNavMeshTileData::FNavData::FNavData(unsigned_char*___ptr64,int)___ptr64'::
      __l5::Temp = *param_1;
      uVar23 = FMemory::GetAllocSize(param_1);
      pFVar22->AllocatedSize = uVar23;
      if (((uVar23 != 0) && (uVar23 < (ulonglong)(longlong)iVar1)) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("AllocatedSize == 0 || AllocatedSize >= InDataSize",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\NavMesh\\RecastNavMesh.h"
                              ,0x1dc,L""), bVar19)) {
        pcVar3 = (code *)swi(3);
        pFVar24 = (FNavMeshTileData *)(*pcVar3)();
        return pFVar24;
      }
    }
  }
  local_res8.Object = pFVar22;
  TSharedPtr<FNavMeshTileData::FNavData,1>::operator=<FNavMeshTileData::FNavData>
            (&this->NavData,&local_res8);
  return this;
}

// ~FNavMeshTileData @ 146dd9860

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNavMeshTileData::~FNavMeshTileData(FNavMeshTileData *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_Navigation_TileCacheMemory> FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uchar auVar7 [8];
  FName local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  pTVar1 = (this->NavData).SharedReferenceCount.ReferenceController;
  if ((pTVar1 != (TReferenceControllerBase<1> *)0x0) &&
     (pTVar1->SharedReferenceCount == (atomic<int>)0x1)) {
    if (((this->NavData).Object == (FNavData *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((((this->NavData).Object)->RawNavData != (uchar *)0x0) &&
       (auVar7 = (uchar  [8])(longlong)this->DataSize, auVar7 != (uchar  [8])0x0)) {
      FVar6 = StatPtr_STAT_Navigation_TileCacheMemory;
      if (StatPtr_STAT_Navigation_TileCacheMemory ==
          (FThreadSafeStaticStat<FStat_STAT_Navigation_TileCacheMemory>)0x0) {
        pFVar5 = ::FName::FName(&local_res10,"STAT_Navigation_TileCacheMemory");
        FVar6 = (FThreadSafeStaticStat<FStat_STAT_Navigation_TileCacheMemory>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_TileCacheMemory,
                           *pFVar5,L"Tile cache memory","STATGROUP_Navigation","STATCAT_Advanced",
                           L"Navigation",true,false,ST_int64,false,false,MCR_Physical);
      }
      FVar2 = *(FName *)FVar6;
      local_res8 = FVar2;
      if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        local_28.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
        local_res8 = FVar2;
        local_28.StatData.Pad = auVar7;
        local_28.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(this_00,&local_28);
        FStatsTrace::Add(&local_res8,-(longlong)auVar7);
        if (this_00->ScopeCount == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NavData).SharedReferenceCount.ReferenceController);
  return;
}

// operator= @ 146ddacc0

FNavMeshTileData * __thiscall
FNavMeshTileData::operator=(FNavMeshTileData *this,FNavMeshTileData *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FNavData *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  double dVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  
  this->LayerIndex = param_1->LayerIndex;
  dVar4 = (param_1->LayerBBox).Min.field0_0x0._s_0.Y;
  (this->LayerBBox).Min.field0_0x0._s_0.X = (param_1->LayerBBox).Min.field0_0x0._s_0.X;
  (this->LayerBBox).Min.field0_0x0._s_0.Y = dVar4;
  dVar4 = (param_1->LayerBBox).Max.field0_0x0._s_0.X;
  (this->LayerBBox).Min.field0_0x0._s_0.Z = (param_1->LayerBBox).Min.field0_0x0._s_0.Z;
  (this->LayerBBox).Max.field0_0x0._s_0.X = dVar4;
  dVar4 = (param_1->LayerBBox).Max.field0_0x0._s_0.Z;
  (this->LayerBBox).Max.field0_0x0._s_0.Y = (param_1->LayerBBox).Max.field0_0x0._s_0.Y;
  (this->LayerBBox).Max.field0_0x0._s_0.Z = dVar4;
  uVar5 = (param_1->LayerBBox).Pad[0];
  uVar6 = (param_1->LayerBBox).Pad[1];
  uVar7 = (param_1->LayerBBox).Pad[2];
  uVar8 = (param_1->LayerBBox).Pad[3];
  uVar9 = (param_1->LayerBBox).Pad[4];
  uVar10 = (param_1->LayerBBox).Pad[5];
  uVar11 = (param_1->LayerBBox).Pad[6];
  (this->LayerBBox).IsValid = (param_1->LayerBBox).IsValid;
  (this->LayerBBox).Pad[0] = uVar5;
  (this->LayerBBox).Pad[1] = uVar6;
  (this->LayerBBox).Pad[2] = uVar7;
  (this->LayerBBox).Pad[3] = uVar8;
  (this->LayerBBox).Pad[4] = uVar9;
  (this->LayerBBox).Pad[5] = uVar10;
  (this->LayerBBox).Pad[6] = uVar11;
  this->DataSize = param_1->DataSize;
  pTVar1 = (param_1->NavData).SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->NavData).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->NavData).SharedReferenceCount.ReferenceController;
  (this->NavData).Object = pFVar2;
  (this->NavData).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// MakeUnique @ 146e16310

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNavMeshTileData::MakeUnique(FNavMeshTileData *this)

{
  TSharedPtr<FNavMeshTileData::FNavData,1> *pTVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  uchar *puVar5;
  code *pcVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_Navigation_TileCacheMemory> FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uchar *_Dst;
  ulong64 uVar10;
  FNavData *pFVar11;
  uchar auVar12 [8];
  FName local_res8;
  TRawPtrProxy<FNavMeshTileData::FNavData> local_res10;
  FName local_res18 [2];
  FStatMessage local_38;
  
  if ((0 < this->DataSize) &&
     ((pTVar3 = (this->NavData).SharedReferenceCount.ReferenceController,
      pTVar3 == (TReferenceControllerBase<1> *)0x0 ||
      (pTVar3->SharedReferenceCount != (atomic<int>)0x1)))) {
    auVar12 = (uchar  [8])(longlong)this->DataSize;
    if (auVar12 != (uchar  [8])0x0) {
      FVar9 = StatPtr_STAT_Navigation_TileCacheMemory;
      if (StatPtr_STAT_Navigation_TileCacheMemory ==
          (FThreadSafeStaticStat<FStat_STAT_Navigation_TileCacheMemory>)0x0) {
        pFVar8 = ::FName::FName(local_res18,"STAT_Navigation_TileCacheMemory");
        FVar9 = (FThreadSafeStaticStat<FStat_STAT_Navigation_TileCacheMemory>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_TileCacheMemory,
                           *pFVar8,L"Tile cache memory","STATGROUP_Navigation","STATCAT_Advanced",
                           L"Navigation",true,false,ST_int64,false,false,MCR_Physical);
      }
      FVar4 = *(FName *)FVar9;
      local_res8 = FVar4;
      if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        local_38.NameAndInfo.Number = FVar4.Number & 0xffffafff | 0xa000;
        local_res8 = FVar4;
        local_38.StatData.Pad = auVar12;
        local_38.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(this_00,&local_38);
        FStatsTrace::Add(&local_res8,(long64)auVar12);
        if (this_00->ScopeCount == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
    _Dst = dtAlloc(this->DataSize,DT_ALLOC_PERM_TILE_DATA);
    if ((this->NavData).Object == (FNavData *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pTVar1 = &this->NavData;
    pFVar11 = pTVar1->Object;
    puVar5 = pFVar11->RawNavData;
    if (puVar5 != (uchar *)0x0) {
      Temp = *puVar5;
      uVar10 = FMemory::GetAllocSize(puVar5);
      if ((uVar10 != 0) && (uVar10 != pFVar11->AllocatedSize)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Size == 0 || Size == AllocatedSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMesh.cpp"
                           ,0xc6,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
    }
    iVar2 = this->DataSize;
    if (pTVar1->Object == (FNavData *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    memcpy(_Dst,pTVar1->Object->RawNavData,(longlong)iVar2);
    pFVar11 = ::operator_new(0x10);
    if (pFVar11 == (FNavData *)0x0) {
      pFVar11 = (FNavData *)0x0;
    }
    else {
      iVar2 = this->DataSize;
      pFVar11->RawNavData = _Dst;
      if (_Dst == (uchar *)0x0) {
        pFVar11->AllocatedSize = 0;
      }
      else {
        `public:___cdecl_FNavMeshTileData::FNavData::FNavData(unsigned_char*___ptr64,int)___ptr64'::
        __l5::Temp = *_Dst;
        uVar10 = FMemory::GetAllocSize(_Dst);
        pFVar11->AllocatedSize = uVar10;
        if ((uVar10 != 0) && (uVar10 < (ulonglong)(longlong)iVar2)) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocatedSize == 0 || AllocatedSize >= InDataSize",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\NavMesh\\RecastNavMesh.h"
                             ,0x1dc,L"");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
      }
    }
    local_res10.Object = pFVar11;
    TSharedPtr<FNavMeshTileData::FNavData,1>::operator=<FNavMeshTileData::FNavData>
              (&this->NavData,&local_res10);
  }
  return;
}

// Release @ 146e20100

/* WARNING: Enum "Type": Some values do not have unique names */

uchar * __thiscall FNavMeshTileData::Release(FNavMeshTileData *this)

{
  FNavData *pFVar1;
  FName FVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_Navigation_TileCacheMemory> FVar4;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uchar auVar5 [8];
  uchar *puVar6;
  FName local_res8;
  FStatMessage local_38;
  
  pFVar1 = (this->NavData).Object;
  puVar6 = (uchar *)0x0;
  if ((pFVar1 != (FNavData *)0x0) && (puVar6 = (uchar *)0x0, pFVar1->RawNavData != (uchar *)0x0)) {
    puVar6 = pFVar1->RawNavData;
    pFVar1->RawNavData = (uchar *)0x0;
    pFVar1->AllocatedSize = 0;
    auVar5 = (uchar  [8])(longlong)this->DataSize;
    if (auVar5 != (uchar  [8])0x0) {
      FVar4 = StatPtr_STAT_Navigation_TileCacheMemory;
      if (StatPtr_STAT_Navigation_TileCacheMemory ==
          (FThreadSafeStaticStat<FStat_STAT_Navigation_TileCacheMemory>)0x0) {
        pFVar3 = ::FName::FName(&local_res8,"STAT_Navigation_TileCacheMemory");
        FVar4 = (FThreadSafeStaticStat<FStat_STAT_Navigation_TileCacheMemory>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_TileCacheMemory,
                           *pFVar3,L"Tile cache memory","STATGROUP_Navigation","STATCAT_Advanced",
                           L"Navigation",true,false,ST_int64,false,false,MCR_Physical);
      }
      FVar2 = *(FName *)FVar4;
      if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        local_res8 = FVar2;
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        local_38.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
        local_res8 = FVar2;
        local_38.StatData.Pad = auVar5;
        local_38.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(this_00,&local_38);
        FStatsTrace::Add(&local_res8,-(longlong)auVar5);
        if (this_00->ScopeCount == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
  }
  this->DataSize = 0;
  this->LayerIndex = 0;
  return puVar6;
}

// GetData @ 146e5b830

uchar * __thiscall FNavMeshTileData::GetData(FNavMeshTileData *this)

{
  code *pcVar1;
  bool bVar2;
  uchar *puVar3;
  
  if ((this->NavData).Object == (FNavData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NavData.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\NavMesh\\RecastNavMesh.h"
                       ,0x202,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar3 = (uchar *)(*pcVar1)();
      return puVar3;
    }
  }
  if ((this->NavData).Object == (FNavData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar3 = (uchar *)(*pcVar1)();
      return puVar3;
    }
  }
  return ((this->NavData).Object)->RawNavData;
}

