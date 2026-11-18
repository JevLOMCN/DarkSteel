// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 2

// Add @ 14247dff0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLRUStringCache::Add(FLRUStringCache *this,TStringView<wchar_t> *param_1,TVector2<float> *param_2)

{
  FName FVar1;
  FCacheEntry *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FCacheEntry **ppFVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_SlateFontMeasureCacheMemory> FVar13;
  FThreadStats *pFVar14;
  FThreadStatsPool *pFVar15;
  FCacheEntry *pFVar16;
  FString *pFVar17;
  int iVar18;
  int iVar19;
  uchar auVar20 [8];
  FNameEntryId FVar21;
  int iVar22;
  FScriptContainerElement *pFVar23;
  uchar auVar24 [8];
  FCacheEntry *local_res8;
  FName local_res10;
  TVector2<float>_u_0_s_0 *local_res18;
  uint local_res20;
  uint uStackX_24;
  FName local_e8;
  FName local_e0;
  FCacheEntry *local_d8;
  FName local_d0;
  FStatMessage local_c8;
  FStatMessage local_b8;
  FStatMessage local_a8;
  FName local_98;
  FName local_90;
  FName local_88;
  FString local_80;
  wchar_t *local_68;
  undefined8 uStack_60;
  FString local_58;
  
  local_68 = param_1->DataPtr;
  uStack_60 = *(undefined8 *)&param_1->Size;
  local_res10 = (FName)param_1;
  local_res18 = (TVector2<float>_u_0_s_0 *)param_2;
  uVar5 = CityHash32((char *)local_68,(int)*(undefined8 *)&param_1->Size * 2);
  ppFVar11 = TSet<FLRUStringCache::FCacheEntry_*,FLRUStringCache::FCaseSensitiveStringKeyFuncs,FDefaultSetAllocator>
             ::FindByHash<TStringView<wchar_t>_>(&this->LookupSet,uVar5,param_1);
  if (ppFVar11 == (FCacheEntry **)0x0) {
    pFVar23 = (FScriptContainerElement *)0x0;
    iVar22 = 0;
    iVar10 = 0;
    if (*(int *)&(this->LookupSet).Elements.field_0x8 -
        *(int *)&(this->LookupSet).Elements.field_0x34 == this->MaxNumElements) {
      pFVar16 = this->LeastRecent;
      if ((pFVar16 == (FCacheEntry *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("EntryToRemove",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCacheUtils.h"
                             ,0xcb,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar7 = (this->LookupSet).HashSize;
      iVar19 = *(int *)&(this->LookupSet).Elements.field_0x2c;
      iVar18 = *(int *)&(this->LookupSet).Elements.field_0xc;
      uVar5 = iVar19 + 0x1f;
      iVar9 = iVar18 * 4;
      iVar6 = uVar7 * 4;
      if (uVar7 < 2) {
        iVar6 = iVar22;
      }
      if (*(int *)&(this->LookupSet).Elements.field_0x8 !=
          *(int *)&(this->LookupSet).Elements.field_0x34) {
        iVar19 = (pFVar16->Key).Data.ArrayNum;
        iVar18 = iVar19 + -1;
        if (iVar19 == 0) {
          iVar18 = iVar22;
        }
        uVar7 = CityHash32((char *)(pFVar16->Key).Data.AllocatorInstance.Data,iVar18 * 2);
        TSet<FLRUStringCache::FCacheEntry_*,FLRUStringCache::FCaseSensitiveStringKeyFuncs,FDefaultSetAllocator>
        ::RemoveImpl<FString>(&this->LookupSet,uVar7,&pFVar16->Key);
        iVar18 = *(int *)&(this->LookupSet).Elements.field_0xc;
        iVar19 = *(int *)&(this->LookupSet).Elements.field_0x2c;
      }
      uVar7 = (this->LookupSet).HashSize;
      iVar8 = uVar7 * 4;
      if (uVar7 < 2) {
        iVar8 = iVar10;
      }
      uVar5 = (iVar6 + ((uVar5 >> 5) + iVar9) * 4 + ((iVar19 + 0x1fU >> 5) + iVar18 * 4) * -4) -
              iVar8;
      auVar20[4] = '\0';
      auVar20[5] = '\0';
      auVar20[6] = '\0';
      auVar20[7] = '\0';
      auVar20._0_4_ = uVar5;
      if (uVar5 != 0) {
        FVar13 = StatPtr_STAT_SlateFontMeasureCacheMemory;
        if (StatPtr_STAT_SlateFontMeasureCacheMemory ==
            (FThreadSafeStaticStat<FStat_STAT_SlateFontMeasureCacheMemory>)0x0) {
          pFVar12 = ::FName::FName(&local_98,"STAT_SlateFontMeasureCacheMemory");
          FVar13 = (FThreadSafeStaticStat<FStat_STAT_SlateFontMeasureCacheMemory>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateFontMeasureCacheMemory
                              ,*pFVar12,L"Font Measure Memory","STATGROUP_SlateMemory",
                              "STATCAT_Advanced",L"Slate Memory",true,false,ST_int64,false,false,
                              MCR_Physical);
        }
        FVar1 = *(FName *)FVar13;
        FVar21 = FVar1.ComparisonIndex.Value;
        uVar5 = FVar1.Number;
        param_2 = (TVector2<float> *)local_res18;
        local_res20 = FVar21.Value;
        uStackX_24 = uVar5;
        if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar14 == (FThreadStats *)0x0) {
            pFVar15 = FThreadStatsPool::Get();
            pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
          }
          local_c8.NameAndInfo.Number = uVar5 & 0xffffbfff | 0xb000;
          local_e8 = FVar1;
          local_c8.StatData.Pad = auVar20;
          local_c8.NameAndInfo.Index.Value = FVar21.Value;
          FThreadStats::AddStatMessage(pFVar14,&local_c8);
          FStatsTrace::Add(&local_e8,-(longlong)auVar20);
          if (pFVar14->ScopeCount == 0) {
            FThreadStats::Flush(pFVar14,false,false);
            param_2 = (TVector2<float> *)local_res18;
          }
          else {
            param_2 = (TVector2<float> *)local_res18;
            if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(pFVar14,false,false);
              param_2 = (TVector2<float> *)local_res18;
            }
          }
        }
      }
      this->LeastRecent = this->LeastRecent->Prev;
      if (pFVar16->Prev != (FCacheEntry *)0x0) {
        pFVar16->Prev->Next = pFVar16->Next;
      }
      if (pFVar16->Next != (FCacheEntry *)0x0) {
        pFVar16->Next->Prev = pFVar16->Prev;
      }
      pFVar16->Prev = (FCacheEntry *)0x0;
      pFVar16->Next = (FCacheEntry *)0x0;
      if (pFVar16 != (FCacheEntry *)0x0) {
        FCacheEntry::_scalar_deleting_destructor_(pFVar16,1);
      }
      param_1 = (TStringView<wchar_t> *)local_res10;
      if ((this->MaxNumElements <=
           *(int *)&(this->LookupSet).Elements.field_0x8 -
           *(int *)&(this->LookupSet).Elements.field_0x34) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("LookupSet.Num() < MaxNumElements",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCacheUtils.h"
                             ,0x36,L"Could not eject item from the LRU: (%d of %d), %s"),
         param_1 = (TStringView<wchar_t> *)local_res10, bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar16 = ::operator_new(0x28);
    if (pFVar16 == (FCacheEntry *)0x0) {
      pFVar16 = (FCacheEntry *)0x0;
    }
    else {
      pFVar17 = ::FString::ConstructFromPtrSize
                          (&local_80,param_1->DataPtr,(int)*(undefined8 *)((longlong)param_1 + 8));
      iVar19 = iVar10;
      iVar18 = iVar10;
      if (&local_58 != pFVar17) {
        pFVar23 = (pFVar17->Data).AllocatorInstance.Data;
        (pFVar17->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar19 = (pFVar17->Data).ArrayNum;
        iVar18 = (pFVar17->Data).ArrayMax;
        (pFVar17->Data).ArrayNum = 0;
        (pFVar17->Data).ArrayMax = 0;
      }
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
      (pFVar16->Key).Data.AllocatorInstance.Data = pFVar23;
      (pFVar16->Key).Data.ArrayNum = iVar19;
      (pFVar16->Key).Data.ArrayMax = iVar18;
      (pFVar16->Value).field0_0x0._s_0 = *(TVector2<float>_u_0_s_0 *)param_2;
      pFVar16->Next = (FCacheEntry *)0x0;
      pFVar16->Prev = (FCacheEntry *)0x0;
      auVar20 = (uchar  [8])((longlong)iVar18 * 2 + 0x18);
      if (auVar20 != (uchar  [8])0x0) {
        FVar13 = StatPtr_STAT_SlateFontMeasureCacheMemory;
        if (StatPtr_STAT_SlateFontMeasureCacheMemory ==
            (FThreadSafeStaticStat<FStat_STAT_SlateFontMeasureCacheMemory>)0x0) {
          pFVar12 = ::FName::FName(&local_90,"STAT_SlateFontMeasureCacheMemory");
          FVar13 = (FThreadSafeStaticStat<FStat_STAT_SlateFontMeasureCacheMemory>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateFontMeasureCacheMemory
                              ,*pFVar12,L"Font Measure Memory","STATGROUP_SlateMemory",
                              "STATCAT_Advanced",L"Slate Memory",true,false,ST_int64,false,false,
                              MCR_Physical);
        }
        FVar1 = *(FName *)FVar13;
        local_res10 = FVar1;
        if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar14 == (FThreadStats *)0x0) {
            pFVar15 = FThreadStatsPool::Get();
            pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
          }
          local_b8.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
          local_e0 = FVar1;
          local_b8.StatData.Pad = auVar20;
          local_b8.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar14,&local_b8);
          FStatsTrace::Add(&local_e0,(long64)auVar20);
          if (pFVar14->ScopeCount == 0) {
            FThreadStats::Flush(pFVar14,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar14,false,false);
          }
        }
      }
    }
    pFVar2 = this->MostRecent;
    pFVar16->Next = pFVar2;
    if (pFVar2 != (FCacheEntry *)0x0) {
      pFVar2->Prev = pFVar16;
    }
    this->MostRecent = pFVar16;
    if (this->LeastRecent == (FCacheEntry *)0x0) {
      this->LeastRecent = pFVar16;
    }
    uVar5 = (this->LookupSet).HashSize;
    iVar19 = *(int *)&(this->LookupSet).Elements.field_0x2c;
    iVar18 = *(int *)&(this->LookupSet).Elements.field_0xc;
    iVar9 = uVar5 * 4;
    if (uVar5 < 2) {
      iVar9 = iVar10;
    }
    local_d8 = pFVar16;
    TSet<FLRUStringCache::FCacheEntry_*,FLRUStringCache::FCaseSensitiveStringKeyFuncs,FDefaultSetAllocator>
    ::Emplace<FLRUStringCache::FCacheEntry_*_const_&>
              (&this->LookupSet,&local_res8,(bool *)&local_d8);
    uVar5 = (this->LookupSet).HashSize;
    iVar10 = uVar5 * 4;
    if (uVar5 < 2) {
      iVar10 = iVar22;
    }
    auVar24._0_4_ =
         (iVar10 + ((*(int *)&(this->LookupSet).Elements.field_0x2c + 0x1fU >> 5) +
                   *(int *)&(this->LookupSet).Elements.field_0xc * 4) * 4) -
         (iVar9 + ((iVar19 + 0x1fU >> 5) + iVar18 * 4) * 4);
    auVar24[4] = '\0';
    auVar24[5] = '\0';
    auVar24[6] = '\0';
    auVar24[7] = '\0';
    if (auVar24._0_4_ != 0) {
      FVar13 = StatPtr_STAT_SlateFontMeasureCacheMemory;
      if (StatPtr_STAT_SlateFontMeasureCacheMemory ==
          (FThreadSafeStaticStat<FStat_STAT_SlateFontMeasureCacheMemory>)0x0) {
        pFVar12 = ::FName::FName(&local_88,"STAT_SlateFontMeasureCacheMemory");
        FVar13 = (FThreadSafeStaticStat<FStat_STAT_SlateFontMeasureCacheMemory>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateFontMeasureCacheMemory,
                            *pFVar12,L"Font Measure Memory","STATGROUP_SlateMemory",
                            "STATCAT_Advanced",L"Slate Memory",true,false,ST_int64,false,false,
                            MCR_Physical);
      }
      FVar1 = *(FName *)FVar13;
      if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        local_res10 = FVar1;
        pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar14 == (FThreadStats *)0x0) {
          pFVar15 = FThreadStatsPool::Get();
          pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
        }
        local_a8.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
        local_d0 = FVar1;
        local_a8.StatData.Pad = auVar24;
        local_a8.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar14,&local_a8);
        FStatsTrace::Add(&local_d0,(long64)auVar24);
        if (pFVar14->ScopeCount == 0) {
          FThreadStats::Flush(pFVar14,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar14,false,false);
        }
      }
    }
  }
  else {
    pFVar16 = *ppFVar11;
    (pFVar16->Value).field0_0x0 = param_2->field0_0x0;
    if ((pFVar16 == this->LeastRecent) &&
       (pFVar2 = this->LeastRecent->Prev, pFVar2 != (FCacheEntry *)0x0)) {
      this->LeastRecent = pFVar2;
    }
    if (pFVar16 != this->MostRecent) {
      if (pFVar16->Prev != (FCacheEntry *)0x0) {
        pFVar16->Prev->Next = pFVar16->Next;
      }
      if (pFVar16->Next != (FCacheEntry *)0x0) {
        pFVar16->Next->Prev = pFVar16->Prev;
      }
      pFVar16->Next = (FCacheEntry *)0x0;
      pFVar16->Prev = (FCacheEntry *)0x0;
      pFVar2 = this->MostRecent;
      pFVar16->Next = pFVar2;
      if (pFVar2 != (FCacheEntry *)0x0) {
        pFVar2->Prev = pFVar16;
      }
      this->MostRecent = pFVar16;
      return;
    }
  }
  return;
}

// Empty @ 142485d80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLRUStringCache::Empty(FLRUStringCache *this)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  FName FVar4;
  undefined8 *puVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_SlateFontMeasureCacheMemory> FVar8;
  FThreadStats *pFVar9;
  FThreadStatsPool *pFVar10;
  longlong lVar11;
  uint *puVar12;
  undefined1 *puVar13;
  uchar auVar14 [8];
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FStatMessage local_98;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  uint local_78;
  int iStack_74;
  FLRUStringCache *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  FLRUStringCache *local_40;
  
  uVar2 = (this->LookupSet).HashSize;
  if (uVar2 < 2) {
    lVar11 = 0;
  }
  else {
    lVar11 = (longlong)(int)uVar2 << 2;
  }
  auVar14 = (uchar  [8])
            ((longlong)*(int *)&(this->LookupSet).Elements.field_0xc * 0x10 +
            (ulonglong)((*(int *)&(this->LookupSet).Elements.field_0x2c + 0x1fU >> 5) << 2) + lVar11
            );
  if (auVar14 != (uchar  [8])0x0) {
    FVar8 = StatPtr_STAT_SlateFontMeasureCacheMemory;
    if (StatPtr_STAT_SlateFontMeasureCacheMemory ==
        (FThreadSafeStaticStat<FStat_STAT_SlateFontMeasureCacheMemory>)0x0) {
      pFVar7 = ::FName::FName(&local_res8,"STAT_SlateFontMeasureCacheMemory");
      FVar8 = (FThreadSafeStaticStat<FStat_STAT_SlateFontMeasureCacheMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateFontMeasureCacheMemory,
                         *pFVar7,L"Font Measure Memory","STATGROUP_SlateMemory","STATCAT_Advanced",
                         L"Slate Memory",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar4 = *(FName *)FVar8;
    local_res8 = FVar4;
    if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar9 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar9 == (FThreadStats *)0x0) {
        pFVar10 = FThreadStatsPool::Get();
        pFVar9 = FThreadStatsPool::GetFromPool(pFVar10);
      }
      local_98.NameAndInfo.Number = FVar4.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar4;
      local_98.StatData.Pad = auVar14;
      local_98.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar9,&local_98);
      FStatsTrace::Add(&local_res8,-(longlong)auVar14);
      if (pFVar9->ScopeCount == 0) {
        FThreadStats::Flush(pFVar9,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar9,false,false);
      }
    }
  }
  iVar3 = *(int *)&(this->LookupSet).Elements.field_0x28;
  local_88 = &(this->LookupSet).Elements.field_0x10;
  local_98.NameAndInfo.Number = 1;
  local_98.NameAndInfo.Index.Value = 0;
  local_78 = local_98.NameAndInfo.Index.Value;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->LookupSet).Elements.field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)local_88;
    }
    uVar2 = *puVar12;
    local_78 = 0;
    local_98.NameAndInfo.Index.Value = 0;
    while (uVar2 == 0) {
      lVar11 = (longlong)(int)local_98.NameAndInfo.Index.Value;
      local_78 = local_78 + 0x20;
      local_98.NameAndInfo.Index.Value = local_98.NameAndInfo.Index.Value + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <
          (int)local_98.NameAndInfo.Index.Value) goto LAB_142485f9a;
      uVar2 = puVar12[lVar11 + 1];
    }
    local_98.NameAndInfo.Number = -uVar2 & uVar2;
    uVar1 = (ulonglong)(uint)local_98.NameAndInfo.Number * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iStack_7c = (local_78 - 1) + (int)lVar11;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_142485f9a:
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(local_98.NameAndInfo.Number,local_98.NameAndInfo.Index.Value);
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  local_98.StatData.Pad = (uchar  [8])this;
  iStack_74 = iStack_7c;
  local_68 = this;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_88;
  local_40 = this;
  TStack_60.CurrentBitIndex = iStack_7c;
  if (iStack_7c < iVar3) {
    do {
      puVar5 = *(undefined8 **)
                (*(longlong *)&(local_68->LookupSet).Elements +
                (longlong)TStack_60.CurrentBitIndex * 0x10);
      if (puVar5 != (undefined8 *)0x0) {
        auVar14 = (uchar  [8])((longlong)*(int *)((longlong)puVar5 + 0xc) * 2 + 0x18);
        if (auVar14 != (uchar  [8])0x0) {
          FVar8 = StatPtr_STAT_SlateFontMeasureCacheMemory;
          if (StatPtr_STAT_SlateFontMeasureCacheMemory ==
              (FThreadSafeStaticStat<FStat_STAT_SlateFontMeasureCacheMemory>)0x0) {
            pFVar7 = ::FName::FName(&local_res18,"STAT_SlateFontMeasureCacheMemory");
            FVar8 = (FThreadSafeStaticStat<FStat_STAT_SlateFontMeasureCacheMemory>)
                    FThreadSafeStaticStatBase::DoSetup
                              ((FThreadSafeStaticStatBase *)
                               &StatPtr_STAT_SlateFontMeasureCacheMemory,*pFVar7,
                               L"Font Measure Memory","STATGROUP_SlateMemory","STATCAT_Advanced",
                               L"Slate Memory",true,false,ST_int64,false,false,MCR_Physical);
          }
          FVar4 = *(FName *)FVar8;
          local_res8 = FVar4;
          if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            pFVar9 = TlsGetValue(FThreadStats::TlsSlot);
            if (pFVar9 == (FThreadStats *)0x0) {
              pFVar10 = FThreadStatsPool::Get();
              pFVar9 = FThreadStatsPool::GetFromPool(pFVar10);
            }
            local_98.NameAndInfo.Number = FVar4.Number & 0xffffbfff | 0xb000;
            local_res10 = FVar4;
            local_98.StatData.Pad = auVar14;
            local_98.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
            FThreadStats::AddStatMessage(pFVar9,&local_98);
            FStatsTrace::Add(&local_res10,-(longlong)auVar14);
            if (pFVar9->ScopeCount == 0) {
              FThreadStats::Flush(pFVar9,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(pFVar9,false,false);
            }
          }
        }
        if ((void *)*puVar5 != (void *)0x0) {
          FMemory::Free((void *)*puVar5);
        }
        ::operator_delete(puVar5,0x28);
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  puVar13 = &(this->LookupSet).Elements.field_0xc;
  bVar6 = 1 < (this->LookupSet).HashSize;
  if (!bVar6) {
    TSet<FLRUStringCache::FCacheEntry_*,FLRUStringCache::FCaseSensitiveStringKeyFuncs,FDefaultSetAllocator>
    ::UnhashElements(&this->LookupSet);
  }
  iVar3 = *(int *)puVar13;
  *(undefined4 *)&(this->LookupSet).Elements.field_0x8 = 0;
  if (iVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this,0,(int *)puVar13);
  }
  *(undefined4 *)&(this->LookupSet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LookupSet).Elements.field_0x34 = 0;
  iVar3 = *(int *)&(this->LookupSet).Elements.field_0x2c;
  *(undefined4 *)&(this->LookupSet).Elements.field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->LookupSet).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->LookupSet).Elements.field_0x10,0);
  }
  if (bVar6) {
    (this->LookupSet).HashSize = 1;
    TSet<FLRUStringCache::FCacheEntry_*,FLRUStringCache::FCaseSensitiveStringKeyFuncs,FDefaultSetAllocator>
    ::Rehash(&this->LookupSet);
  }
  this->MostRecent = (FCacheEntry *)0x0;
  this->LeastRecent = (FCacheEntry *)0x0;
  return;
}

