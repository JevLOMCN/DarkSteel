// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InstallBundleManager
// Functions: 14

// StatsBegin @ 148bd9ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
InstallBundleUtil::FContentRequestStatsMap::StatsBegin
          (FContentRequestStatsMap *this,FContentRequestStatsKey *param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  FContentRequestStats *pFVar4;
  undefined1 auStackY_c8 [32];
  LARGE_INTEGER local_98 [2];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 auStack_70 [24];
  undefined8 local_58;
  void *pvStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ForElementType<FSetElementId> local_38;
  ulonglong local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  uVar3 = InstallBundleUtil::GetTypeHash(param_1);
  pFVar4 = TMapBase<InstallBundleUtil::FContentRequestStatsKey,InstallBundleUtil::FContentRequestStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<InstallBundleUtil::FContentRequestStatsKey,InstallBundleUtil::FContentRequestStats,0>_>
           ::FindOrAddImpl<InstallBundleUtil::FContentRequestStatsKey_const_&>
                     ((TMapBase<InstallBundleUtil::FContentRequestStatsKey,InstallBundleUtil::FContentRequestStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<InstallBundleUtil::FContentRequestStatsKey,InstallBundleUtil::FContentRequestStats,0>_>
                       *)this,uVar3,param_1);
  if (pFVar4->bOpen == false) {
    local_98[0] = (LARGE_INTEGER)param_1;
    bVar2 = `InstallBundleUtil::FContentRequestStatsMap::StatsBegin'::__l3::<lambda_1>::operator()
                      (local_98);
    if (!bVar2) {
      pFVar4->bOpen = true;
      pFVar4->StartTime = 0.0;
      local_88 = 0;
      uStack_80 = 0;
      auStack_70._16_8_ = 0;
      local_78 = 1;
      auStack_70._0_8_ = (FScriptContainerElement *)0x0;
      auStack_70._8_8_ = 0;
      local_28 = 0;
      pFVar4->EndTime = 0.0;
      local_58 = 0;
      pvStack_50 = (void *)0x0;
      local_38.InlineData[0] = '\0';
      local_38.InlineData[1] = '\0';
      local_38.InlineData[2] = '\0';
      local_38.InlineData[3] = '\0';
      local_38._padding_ = 0;
      local_38.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_48 = ___xmm_00000000ffffffff0000008000000000;
      uStack_40 = _UNK_150631d98;
      if (&pFVar4->StateStats !=
          (TMap<FString,InstallBundleUtil::FContentRequestStateStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::FContentRequestStateStats,0>_>
           *)auStack_70) {
        TSet<TTuple<FString,InstallBundleUtil::FContentRequestStateStats>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::FContentRequestStateStats,0>,FDefaultSetAllocator>
        ::
        Move<TSet<TTuple<FString,InstallBundleUtil::FContentRequestStateStats>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::FContentRequestStateStats,0>,FDefaultSetAllocator>_>
                  ((TSet<TTuple<FString,InstallBundleUtil::FContentRequestStateStats>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::FContentRequestStateStats,0>,FDefaultSetAllocator>
                    *)&pFVar4->StateStats,
                   (TSet<TTuple<FString,InstallBundleUtil::FContentRequestStateStats>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::FContentRequestStateStats,0>,FDefaultSetAllocator>
                    *)auStack_70);
      }
      local_28 = local_28 & 0xffffffff00000000;
      if (local_38.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_38.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,InstallBundleUtil::FContentRequestStateStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,InstallBundleUtil::FContentRequestStateStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)auStack_70,0,auStack_70._8_4_);
      iVar1 = SUB84(auStack_70._8_8_,4);
      auStack_70._8_8_ = auStack_70._8_8_ & 0xffffffff00000000;
      if (iVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,0,(ForAnyElementType *)auStack_70,0,(int *)(auStack_70 + 0xc));
      }
      uVar3 = local_48._4_4_;
      uStack_40 = 0xffffffff;
      local_48 = (ulonglong)local_48._4_4_ << 0x20;
      if (0x80 < uVar3) {
        local_48 = 0x8000000000;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_70 + 0x10),0);
      }
      if (pvStack_50 != (void *)0x0) {
        FMemory::Free(pvStack_50);
      }
      if ((FScriptContainerElement *)auStack_70._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)auStack_70._0_8_);
      }
    }
  }
  QueryPerformanceCounter(local_98);
  pFVar4->StartTime =
       (double)local_98[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
       __real_4170000000000000;
  return;
}

// StatsBegin @ 148bd9e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
InstallBundleUtil::FContentRequestStatsMap::StatsBegin
          (FContentRequestStatsMap *this,FContentRequestStatsKey *param_1,wchar_t *param_2)

{
  FContentRequestStatsKey *pFVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FContentRequestStats *pFVar5;
  longlong lVar6;
  TMap<FString,InstallBundleUtil::FContentRequestStateStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::FContentRequestStateStats,0>_>
  *this_00;
  undefined1 auStackY_128 [32];
  undefined1 local_f8 [16];
  LARGE_INTEGER local_e8;
  wchar_t *local_e0;
  LARGE_INTEGER local_d8 [3];
  undefined8 local_c0;
  undefined1 uStack_b8;
  undefined4 uStack_b7;
  undefined2 uStack_b3;
  undefined1 uStack_b1;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 auStack_90 [24];
  undefined8 local_78;
  void *pvStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ForElementType<FSetElementId> local_58;
  ulonglong local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_e0 = param_2;
  uVar3 = InstallBundleUtil::GetTypeHash(param_1);
  pFVar5 = TMapBase<InstallBundleUtil::FContentRequestStatsKey,InstallBundleUtil::FContentRequestStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<InstallBundleUtil::FContentRequestStatsKey,InstallBundleUtil::FContentRequestStats,0>_>
           ::FindOrAddImpl<InstallBundleUtil::FContentRequestStatsKey_const_&>
                     ((TMapBase<InstallBundleUtil::FContentRequestStatsKey,InstallBundleUtil::FContentRequestStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<InstallBundleUtil::FContentRequestStatsKey,InstallBundleUtil::FContentRequestStats,0>_>
                       *)this,uVar3,param_1);
  if (pFVar5->bOpen == false) {
    local_f8._8_8_ = &local_e0;
    local_f8._0_8_ = param_1;
    bVar2 = `InstallBundleUtil::FContentRequestStatsMap::StatsBegin'::__l3::<lambda_1>::operator()
                      (local_f8);
    if (!bVar2) {
      pFVar5->StartTime = 0.0;
      local_a8 = 0;
      uStack_a0 = 0;
      auStack_90._16_8_ = 0;
      local_98 = 1;
      auStack_90._0_8_ = (FScriptContainerElement *)0x0;
      auStack_90._8_8_ = 0;
      local_48 = 0;
      pFVar5->EndTime = 0.0;
      pFVar5->bOpen = true;
      local_78 = 0;
      pvStack_70 = (void *)0x0;
      local_58.InlineData[0] = '\0';
      local_58.InlineData[1] = '\0';
      local_58.InlineData[2] = '\0';
      local_58.InlineData[3] = '\0';
      local_58._padding_ = 0;
      local_58.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_68 = ___xmm_00000000ffffffff0000008000000000;
      uStack_60 = _UNK_150631d98;
      if (&pFVar5->StateStats !=
          (TMap<FString,InstallBundleUtil::FContentRequestStateStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::FContentRequestStateStats,0>_>
           *)auStack_90) {
        TSet<TTuple<FString,InstallBundleUtil::FContentRequestStateStats>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::FContentRequestStateStats,0>,FDefaultSetAllocator>
        ::
        Move<TSet<TTuple<FString,InstallBundleUtil::FContentRequestStateStats>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::FContentRequestStateStats,0>,FDefaultSetAllocator>_>
                  ((TSet<TTuple<FString,InstallBundleUtil::FContentRequestStateStats>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::FContentRequestStateStats,0>,FDefaultSetAllocator>
                    *)&pFVar5->StateStats,
                   (TSet<TTuple<FString,InstallBundleUtil::FContentRequestStateStats>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::FContentRequestStateStats,0>,FDefaultSetAllocator>
                    *)auStack_90);
      }
      local_48 = local_48 & 0xffffffff00000000;
      if (local_58.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_58.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,InstallBundleUtil::FContentRequestStateStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,InstallBundleUtil::FContentRequestStateStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)auStack_90,0,auStack_90._8_4_);
      iVar4 = SUB84(auStack_90._8_8_,4);
      auStack_90._8_8_ = auStack_90._8_8_ & 0xffffffff00000000;
      if (iVar4 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,0,(ForAnyElementType *)auStack_90,0,(int *)(auStack_90 + 0xc));
      }
      uVar3 = local_68._4_4_;
      uStack_60 = 0xffffffff;
      local_68 = (ulonglong)local_68._4_4_ << 0x20;
      if (0x80 < uVar3) {
        local_68 = 0x8000000000;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_90 + 0x10),0);
      }
      if (pvStack_70 != (void *)0x0) {
        FMemory::Free(pvStack_70);
      }
      if ((FScriptContainerElement *)auStack_90._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)auStack_90._0_8_);
      }
      QueryPerformanceCounter(&local_e8);
      pFVar5->StartTime =
           (double)CONCAT44(local_e8.s.HighPart,local_e8.s.LowPart) *
           FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
    }
  }
  this_00 = &pFVar5->StateStats;
  ::FString::FString((FString *)local_f8,local_e0);
  iVar4 = (int)local_f8._8_8_ + -1;
  pFVar1 = (FContentRequestStatsKey *)local_f8._0_8_;
  if ((int)local_f8._8_8_ == 0) {
    iVar4 = 0;
    pFVar1 = (FContentRequestStatsKey *)L"";
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)pFVar1);
  iVar4 = TSet<TTuple<FString,InstallBundleUtil::FContentRequestStateStats>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::FContentRequestStateStats,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,InstallBundleUtil::FContentRequestStateStats>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::FContentRequestStateStats,0>,FDefaultSetAllocator>
                      *)this_00,uVar3,(FString *)local_f8);
  if ((iVar4 == -1) ||
     (lVar6 = (longlong)iVar4 * 0x38 + *(longlong *)&this_00->field_0x0, lVar6 == 0)) {
    local_d8[0].QuadPart = (LONGLONG)local_f8;
    TSet<TTuple<FString,InstallBundleUtil::FContentRequestStateStats>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::FContentRequestStateStats,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FString_&&>_>
              ((TSet<TTuple<FString,InstallBundleUtil::FContentRequestStateStats>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::FContentRequestStateStats,0>,FDefaultSetAllocator>
                *)this_00,(uint)&local_e8,(TKeyInitializer<FString_&&> *)(ulonglong)uVar3,
               (bool *)local_d8);
    lVar6 = (longlong)(int)local_e8.s.LowPart * 0x38 + *(longlong *)&this_00->field_0x0;
  }
  if ((FContentRequestStatsKey *)local_f8._0_8_ != (FContentRequestStatsKey *)0x0) {
    FMemory::Free((void *)local_f8._0_8_);
  }
  if (*(char *)(lVar6 + 0x28) == '\0') {
    local_f8._8_8_ = &local_e0;
    local_f8._0_8_ = param_1;
    bVar2 = `InstallBundleUtil::FContentRequestStatsMap::StatsBegin'::__l6::<lambda_2>::operator()
                      (local_f8);
    if (!bVar2) {
      uStack_b7 = 0;
      *(undefined8 *)(lVar6 + 0x10) = 0;
      *(undefined8 *)(lVar6 + 0x18) = 0;
      uStack_b3 = 0;
      uStack_b1 = 0;
      local_c0 = 0;
      uStack_b8 = 1;
      *(undefined8 *)(lVar6 + 0x20) = 0;
      *(undefined8 *)(lVar6 + 0x28) = 1;
    }
  }
  QueryPerformanceCounter(local_d8);
  *(double *)(lVar6 + 0x10) =
       (double)local_d8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
       __real_4170000000000000;
  return;
}

// StatsEnd @ 148bda1d0

void __thiscall
InstallBundleUtil::FContentRequestStatsMap::StatsEnd
          (FContentRequestStatsMap *this,FContentRequestStatsKey *param_1)

{
  bool bVar1;
  uint uVar2;
  FContentRequestStats *pFVar3;
  double dVar4;
  LARGE_INTEGER local_res8;
  
  uVar2 = InstallBundleUtil::GetTypeHash(param_1);
  pFVar3 = TMapBase<InstallBundleUtil::FContentRequestStatsKey,InstallBundleUtil::FContentRequestStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<InstallBundleUtil::FContentRequestStatsKey,InstallBundleUtil::FContentRequestStats,0>_>
           ::FindOrAddImpl<InstallBundleUtil::FContentRequestStatsKey_const_&>
                     ((TMapBase<InstallBundleUtil::FContentRequestStatsKey,InstallBundleUtil::FContentRequestStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<InstallBundleUtil::FContentRequestStatsKey,InstallBundleUtil::FContentRequestStats,0>_>
                       *)this,uVar2,param_1);
  if ((pFVar3->bOpen == false) || (pFVar3->StartTime <= 0.0)) {
    local_res8 = (LARGE_INTEGER)param_1;
    `InstallBundleUtil::FContentRequestStatsMap::StatsEnd'::__l2::<lambda_1>::operator()
              (&local_res8);
  }
  if (pFVar3->bOpen != false) {
    bVar1 = Algo::
            AllOf<TMap<FString,InstallBundleUtil::FContentRequestStateStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::FContentRequestStateStats,0>_>,_InstallBundleUtil::FContentRequestStatsMap::StatsEnd_::__l5::<lambda_2>_>
                      (&pFVar3->StateStats,(<lambda_2>)local_res8.s.LowPart._0_1_);
    if (!bVar1) {
      local_res8 = (LARGE_INTEGER)param_1;
      `InstallBundleUtil::FContentRequestStatsMap::StatsEnd'::__l5::<lambda_3>::operator()
                (&local_res8);
    }
    QueryPerformanceCounter(&local_res8);
    dVar4 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    pFVar3->bOpen = false;
    pFVar3->EndTime = dVar4 + __real_4170000000000000;
  }
  return;
}

// StatsEnd @ 148bda280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
InstallBundleUtil::FContentRequestStatsMap::StatsEnd
          (FContentRequestStatsMap *this,FContentRequestStatsKey *param_1,wchar_t *param_2,
          ulong64 param_3)

{
  FContentRequestStatsKey *pFVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FContentRequestStats *pFVar5;
  longlong lVar6;
  TMap<FString,InstallBundleUtil::FContentRequestStateStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::FContentRequestStateStats,0>_>
  *this_00;
  double dVar7;
  undefined1 auStackY_128 [32];
  undefined1 local_f8 [16];
  LARGE_INTEGER local_e8;
  wchar_t *local_e0;
  LARGE_INTEGER local_d8 [2];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 auStack_b0 [24];
  undefined8 local_98;
  void *pvStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ForElementType<FSetElementId> local_78;
  ulonglong local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_e0 = param_2;
  uVar3 = InstallBundleUtil::GetTypeHash(param_1);
  pFVar5 = TMapBase<InstallBundleUtil::FContentRequestStatsKey,InstallBundleUtil::FContentRequestStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<InstallBundleUtil::FContentRequestStatsKey,InstallBundleUtil::FContentRequestStats,0>_>
           ::FindOrAddImpl<InstallBundleUtil::FContentRequestStatsKey_const_&>
                     ((TMapBase<InstallBundleUtil::FContentRequestStatsKey,InstallBundleUtil::FContentRequestStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<InstallBundleUtil::FContentRequestStatsKey,InstallBundleUtil::FContentRequestStats,0>_>
                       *)this,uVar3,param_1);
  if ((pFVar5->bOpen == false) || (pFVar5->StartTime <= 0.0)) {
    local_f8._8_8_ = &local_e0;
    local_f8._0_8_ = param_1;
    bVar2 = `InstallBundleUtil::FContentRequestStatsMap::StatsEnd'::__l3::<lambda_1>::operator()
                      (local_f8);
    if (!bVar2) {
      pFVar5->StartTime = 0.0;
      local_c8 = 0;
      uStack_c0 = 0;
      auStack_b0._16_8_ = 0;
      local_b8 = 1;
      auStack_b0._0_8_ = (FScriptContainerElement *)0x0;
      auStack_b0._8_8_ = 0;
      local_68 = 0;
      pFVar5->EndTime = 0.0;
      pFVar5->bOpen = true;
      local_98 = 0;
      pvStack_90 = (void *)0x0;
      local_78.InlineData[0] = '\0';
      local_78.InlineData[1] = '\0';
      local_78.InlineData[2] = '\0';
      local_78.InlineData[3] = '\0';
      local_78._padding_ = 0;
      local_78.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_88 = ___xmm_00000000ffffffff0000008000000000;
      uStack_80 = _UNK_150631d98;
      if (&pFVar5->StateStats !=
          (TMap<FString,InstallBundleUtil::FContentRequestStateStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::FContentRequestStateStats,0>_>
           *)auStack_b0) {
        TSet<TTuple<FString,InstallBundleUtil::FContentRequestStateStats>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::FContentRequestStateStats,0>,FDefaultSetAllocator>
        ::
        Move<TSet<TTuple<FString,InstallBundleUtil::FContentRequestStateStats>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::FContentRequestStateStats,0>,FDefaultSetAllocator>_>
                  ((TSet<TTuple<FString,InstallBundleUtil::FContentRequestStateStats>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::FContentRequestStateStats,0>,FDefaultSetAllocator>
                    *)&pFVar5->StateStats,
                   (TSet<TTuple<FString,InstallBundleUtil::FContentRequestStateStats>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::FContentRequestStateStats,0>,FDefaultSetAllocator>
                    *)auStack_b0);
      }
      local_68 = local_68 & 0xffffffff00000000;
      if (local_78.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_78.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,InstallBundleUtil::FContentRequestStateStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,InstallBundleUtil::FContentRequestStateStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)auStack_b0,0,auStack_b0._8_4_);
      iVar4 = SUB84(auStack_b0._8_8_,4);
      auStack_b0._8_8_ = auStack_b0._8_8_ & 0xffffffff00000000;
      if (iVar4 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,0,(ForAnyElementType *)auStack_b0,0,(int *)(auStack_b0 + 0xc));
      }
      uVar3 = local_88._4_4_;
      uStack_80 = 0xffffffff;
      local_88 = (ulonglong)local_88._4_4_ << 0x20;
      if (0x80 < uVar3) {
        local_88 = 0x8000000000;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_b0 + 0x10),0);
      }
      if (pvStack_90 != (void *)0x0) {
        FMemory::Free(pvStack_90);
      }
      if ((FScriptContainerElement *)auStack_b0._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)auStack_b0._0_8_);
      }
      QueryPerformanceCounter(&local_e8);
      pFVar5->StartTime =
           (double)CONCAT44(local_e8.s.HighPart,local_e8.s.LowPart) *
           FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
    }
  }
  this_00 = &pFVar5->StateStats;
  ::FString::FString((FString *)local_f8,local_e0);
  iVar4 = (int)local_f8._8_8_ + -1;
  pFVar1 = (FContentRequestStatsKey *)local_f8._0_8_;
  if ((int)local_f8._8_8_ == 0) {
    iVar4 = 0;
    pFVar1 = (FContentRequestStatsKey *)L"";
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)pFVar1);
  iVar4 = TSet<TTuple<FString,InstallBundleUtil::FContentRequestStateStats>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::FContentRequestStateStats,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,InstallBundleUtil::FContentRequestStateStats>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::FContentRequestStateStats,0>,FDefaultSetAllocator>
                      *)this_00,uVar3,(FString *)local_f8);
  if ((iVar4 == -1) ||
     (lVar6 = (longlong)iVar4 * 0x38 + *(longlong *)&this_00->field_0x0, lVar6 == 0)) {
    local_d8[0].QuadPart = (LONGLONG)local_f8;
    TSet<TTuple<FString,InstallBundleUtil::FContentRequestStateStats>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::FContentRequestStateStats,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FString_&&>_>
              ((TSet<TTuple<FString,InstallBundleUtil::FContentRequestStateStats>,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::FContentRequestStateStats,0>,FDefaultSetAllocator>
                *)this_00,(uint)&local_e8,(TKeyInitializer<FString_&&> *)(ulonglong)uVar3,
               (bool *)local_d8);
    lVar6 = (longlong)(int)local_e8.s.LowPart * 0x38 + *(longlong *)&this_00->field_0x0;
  }
  if ((FContentRequestStatsKey *)local_f8._0_8_ != (FContentRequestStatsKey *)0x0) {
    FMemory::Free((void *)local_f8._0_8_);
  }
  if ((*(char *)(lVar6 + 0x28) == '\0') || (*(double *)(lVar6 + 0x10) <= 0.0)) {
    local_f8._8_8_ = &local_e0;
    local_f8._0_8_ = param_1;
    bVar2 = `InstallBundleUtil::FContentRequestStatsMap::StatsEnd'::__l6::<lambda_2>::operator()
                      (local_f8);
    if (!bVar2) {
      return;
    }
  }
  QueryPerformanceCounter(local_d8);
  dVar7 = (double)local_d8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle;
  *(ulong64 *)(lVar6 + 0x20) = param_3;
  *(undefined1 *)(lVar6 + 0x28) = 0;
  *(double *)(lVar6 + 0x18) = dVar7 + __real_4170000000000000;
  return;
}

// StatsReset @ 148bda620

void __thiscall
InstallBundleUtil::FContentRequestStatsMap::StatsReset
          (FContentRequestStatsMap *this,FContentRequestStatsKey *param_1)

{
  bool bVar1;
  uint uVar2;
  TTuple<InstallBundleUtil::FContentRequestStatsKey,InstallBundleUtil::FContentRequestStats> *pTVar3
  ;
  undefined1 *puVar4;
  FContentRequestStatsKey *local_res8;
  
  pTVar3 = TSet<TTuple<InstallBundleUtil::FContentRequestStatsKey,InstallBundleUtil::FContentRequestStats>,TDefaultMapHashableKeyFuncs<InstallBundleUtil::FContentRequestStatsKey,InstallBundleUtil::FContentRequestStats,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<InstallBundleUtil::FContentRequestStatsKey,InstallBundleUtil::FContentRequestStats>,TDefaultMapHashableKeyFuncs<InstallBundleUtil::FContentRequestStatsKey,InstallBundleUtil::FContentRequestStats,0>,FDefaultSetAllocator>
                   *)this,param_1);
  puVar4 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<InstallBundleUtil::FContentRequestStatsKey,InstallBundleUtil::FContentRequestStats>
                 *)0x0) {
    puVar4 = (undefined1 *)0x0;
  }
  if (puVar4 != (undefined1 *)0x0) {
    if (puVar4[0x10] != '\0') {
      local_res8 = param_1;
      `InstallBundleUtil::FContentRequestStatsMap::StatsReset'::__l5::<lambda_1>::operator()
                (&local_res8);
    }
    bVar1 = Algo::
            AllOf<TMap<FString,InstallBundleUtil::FContentRequestStateStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::FContentRequestStateStats,0>_>,_InstallBundleUtil::FContentRequestStatsMap::StatsReset_::__l5::<lambda_2>_>
                      ((TMap<FString,InstallBundleUtil::FContentRequestStateStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,InstallBundleUtil::FContentRequestStateStats,0>_>
                        *)(puVar4 + 0x18),local_res8._0_1_);
    if (!bVar1) {
      local_res8 = param_1;
      `InstallBundleUtil::FContentRequestStatsMap::StatsReset'::__l5::<lambda_3>::operator()
                (&local_res8);
    }
    if (*(int *)&(this->StatsMap).field_0x8 != *(int *)&(this->StatsMap).field_0x34) {
      uVar2 = InstallBundleUtil::GetTypeHash(param_1);
      TSet<TTuple<InstallBundleUtil::FContentRequestStatsKey,InstallBundleUtil::FContentRequestStats>,TDefaultMapHashableKeyFuncs<InstallBundleUtil::FContentRequestStatsKey,InstallBundleUtil::FContentRequestStats,0>,FDefaultSetAllocator>
      ::RemoveImpl<InstallBundleUtil::FContentRequestStatsKey>
                ((TSet<TTuple<InstallBundleUtil::FContentRequestStatsKey,InstallBundleUtil::FContentRequestStats>,TDefaultMapHashableKeyFuncs<InstallBundleUtil::FContentRequestStatsKey,InstallBundleUtil::FContentRequestStats,0>,FDefaultSetAllocator>
                  *)this,uVar2,param_1);
    }
  }
  return;
}

// operator() @ 150537c00

bool __thiscall
`InstallBundleUtil::FContentRequestStatsMap::StatsEnd'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_8365718388407795305>);
  if (bVar2) {
    local_res10[0] = **(FName **)this;
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8365718388407795305>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150537c74;
    }
  }
  bVar2 = false;
LAB_150537c74:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150537cf0

bool __thiscall
`InstallBundleUtil::FContentRequestStatsMap::StatsBegin'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_8365718388407795317>);
  if (bVar2) {
    local_res10[0] = **(FName **)this;
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8365718388407795317>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150537d64;
    }
  }
  bVar2 = false;
LAB_150537d64:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150537da0

bool __thiscall
`InstallBundleUtil::FContentRequestStatsMap::StatsBegin'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10;
  FString local_18;
  
  bVar4 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_8365718388407795275>);
  if (bVar2) {
    local_res10 = **(FName **)this;
    ::FName::ToString(&local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8365718388407795275>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150537e2c;
    }
  }
  bVar2 = false;
LAB_150537e2c:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150537e60

bool __thiscall
`InstallBundleUtil::FContentRequestStatsMap::StatsEnd'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10;
  FString local_18;
  
  bVar4 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_8365718388407795257>);
  if (bVar2) {
    local_res10 = **(FName **)this;
    ::FName::ToString(&local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8365718388407795257>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150537eec;
    }
  }
  bVar2 = false;
LAB_150537eec:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150537f80

bool __thiscall
`InstallBundleUtil::FContentRequestStatsMap::StatsReset'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_8365718388407795288>);
  if (bVar2) {
    local_res10[0] = **(FName **)this;
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8365718388407795288>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150537ff4;
    }
  }
  bVar2 = false;
LAB_150537ff4:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150538250

bool __thiscall
`InstallBundleUtil::FContentRequestStatsMap::StatsBegin'::__l6::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10;
  FString local_18;
  
  bVar4 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_8365718388407795268>);
  if (bVar2) {
    local_res10 = **(FName **)this;
    ::FName::ToString(&local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8365718388407795268>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1505382dc;
    }
  }
  bVar2 = false;
LAB_1505382dc:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150538310

bool __thiscall
`InstallBundleUtil::FContentRequestStatsMap::StatsEnd'::__l6::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10;
  FString local_18;
  
  bVar4 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_8365718388407795250>);
  if (bVar2) {
    local_res10 = **(FName **)this;
    ::FName::ToString(&local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8365718388407795250>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15053839c;
    }
  }
  bVar2 = false;
LAB_15053839c:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150538510

bool __thiscall
`InstallBundleUtil::FContentRequestStatsMap::StatsEnd'::__l5::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_8365718388407795299>);
  if (bVar2) {
    local_res10[0] = **(FName **)this;
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8365718388407795299>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150538584;
    }
  }
  bVar2 = false;
LAB_150538584:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1505385c0

bool __thiscall
`InstallBundleUtil::FContentRequestStatsMap::StatsReset'::__l5::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_8365718388407795284>);
  if (bVar2) {
    local_res10[0] = **(FName **)this;
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8365718388407795284>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150538634;
    }
  }
  bVar2 = false;
LAB_150538634:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

