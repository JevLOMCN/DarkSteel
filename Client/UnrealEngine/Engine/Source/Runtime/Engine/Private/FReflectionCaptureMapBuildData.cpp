// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FReflectionCaptureMapBuildData @ 147ea63e0

FReflectionCaptureMapBuildData * __thiscall
FReflectionCaptureMapBuildData::FReflectionCaptureMapBuildData
          (FReflectionCaptureMapBuildData *this,FReflectionCaptureMapBuildData *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  
  plVar1 = &this->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *plVar1 = 0;
  piVar2 = (int *)((longlong)&this->_padding_ + 4);
  iVar3 = (int)param_1->_padding_;
  pvVar4 = (void *)param_1->_padding_;
  *(int *)&this->_padding_ = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar3,0,(ForAnyElementType *)plVar1,iVar3,piVar2);
    memcpy((void *)*plVar1,pvVar4,(longlong)iVar3);
  }
  plVar1 = &this->_padding_;
  *plVar1 = 0;
  piVar2 = (int *)((longlong)&this->_padding_ + 4);
  iVar3 = (int)param_1->_padding_;
  pvVar4 = (void *)param_1->_padding_;
  *(int *)&this->_padding_ = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar3,0,(ForAnyElementType *)plVar1,iVar3,piVar2);
    memcpy((void *)*plVar1,pvVar4,(longlong)iVar3);
  }
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  this->AllocatedSize = param_1->AllocatedSize;
  return this;
}

// ~FReflectionCaptureMapBuildData @ 147ea9390

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FReflectionCaptureMapBuildData::~FReflectionCaptureMapBuildData
          (FReflectionCaptureMapBuildData *this)

{
  uchar auVar1 [8];
  FName FVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_ReflectionCaptureBuildData> FVar4;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  FStatMessage local_28;
  
  auVar1 = (uchar  [8])this->AllocatedSize;
  if (auVar1 != (uchar  [8])0x0) {
    FVar4 = StatPtr_STAT_ReflectionCaptureBuildData;
    if (StatPtr_STAT_ReflectionCaptureBuildData ==
        (FThreadSafeStaticStat<FStat_STAT_ReflectionCaptureBuildData>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_ReflectionCaptureBuildData");
      FVar4 = (FThreadSafeStaticStat<FStat_STAT_ReflectionCaptureBuildData>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ReflectionCaptureBuildData,
                         *pFVar3,L"Reflection Captures","STATGROUP_MapBuildData","STATCAT_Advanced",
                         L"MapBuildData",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar2 = *(FName *)FVar4;
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
      local_28.StatData.Pad = auVar1;
      local_28.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_28);
      FStatsTrace::Add(&local_res8,-(longlong)auVar1);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  return;
}

// AddReferencedObjects @ 147eae9c0

void __thiscall
FReflectionCaptureMapBuildData::AddReferencedObjects
          (FReflectionCaptureMapBuildData *this,FReferenceCollector *param_1)

{
  return;
}

// FinalizeLoad @ 147eba020

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FReflectionCaptureMapBuildData::FinalizeLoad(FReflectionCaptureMapBuildData *this)

{
  FName FVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  longlong *plVar33;
  bool bVar34;
  int iVar35;
  uint uVar36;
  FName *pFVar37;
  FThreadSafeStaticStat<FStat_STAT_ReflectionCaptureBuildData> FVar38;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FLinearColor *pFVar39;
  int iVar40;
  uint uVar41;
  longlong lVar42;
  FScriptContainerElement *pFVar43;
  FScriptContainerElement *pFVar44;
  int iVar45;
  FFloat3Packed *this_02;
  FFloat3Packed *pFVar46;
  ulonglong uVar47;
  longlong *plVar48;
  uchar auVar49 [8];
  longlong lVar50;
  uint uVar51;
  ulonglong uVar52;
  undefined8 uVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined1 auVar60 [16];
  uint local_res8;
  uint local_res10;
  uint local_res18;
  uint local_res20;
  ForAnyElementType local_178;
  undefined8 local_170;
  undefined8 local_168;
  int local_160;
  uint local_15c;
  int local_158;
  int local_154;
  int local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  int local_130;
  FName local_128;
  longlong local_120;
  longlong local_118;
  ulonglong local_110;
  longlong *local_108;
  FStatMessage local_100;
  FName local_f0;
  FLinearColor local_e8 [10];
  
  auVar49 = (uchar  [8])
            ((longlong)*(int *)((longlong)&this->_padding_ + 4) +
            (longlong)*(int *)((longlong)&this->_padding_ + 4));
  this->AllocatedSize = (ulong64)auVar49;
  if (auVar49 != (uchar  [8])0x0) {
    FVar38 = StatPtr_STAT_ReflectionCaptureBuildData;
    if (StatPtr_STAT_ReflectionCaptureBuildData ==
        (FThreadSafeStaticStat<FStat_STAT_ReflectionCaptureBuildData>)0x0) {
      pFVar37 = ::FName::FName(&local_f0,"STAT_ReflectionCaptureBuildData");
      FVar38 = (FThreadSafeStaticStat<FStat_STAT_ReflectionCaptureBuildData>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ReflectionCaptureBuildData,
                          *pFVar37,L"Reflection Captures","STATGROUP_MapBuildData",
                          "STATCAT_Advanced",L"MapBuildData",true,false,ST_int64,false,false,
                          MCR_Physical);
    }
    FVar1 = *(FName *)FVar38;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_100.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_128 = FVar1;
      local_100.StatData.Pad = auVar49;
      local_100.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_100);
      FStatsTrace::Add(&local_128,(long64)auVar49);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  bVar34 = MobileForwardEnableClusteredReflections((FStaticShaderPlatform)GMaxRHIShaderPlatform);
  if ((bVar34) ||
     ((FReadOnlyCVARCache::bMobileDeferredShadingValue != false &&
      (FReadOnlyCVARCache::bMobileHDR != false)))) {
    bVar34 = true;
  }
  else {
    bVar34 = false;
  }
  if ((GMaxRHIFeatureLevel != ES3_1) || (bVar34)) {
    bVar34 = false;
  }
  else {
    bVar34 = true;
  }
  if (((GPixelFormats[0x1a].BlockBytes == 8) && (bVar34)) &&
     (iVar45 = (int)this->_padding_, 0 < iVar45)) {
    iVar35 = (int)this->_padding_;
    iVar40 = 1;
    if (iVar35 != 0) {
      iVar40 = iVar35;
    }
    uVar41 = iVar45 << 1;
    local_res18 = 0;
    local_res20 = 0;
    uVar52 = (ulonglong)(iVar40 - 1) * 2 + 1;
    local_178.Data = (FScriptContainerElement *)0x0;
    lVar42 = 0x3f;
    if (uVar52 != 0) {
      for (; uVar52 >> lVar42 == 0; lVar42 = lVar42 + -1) {
      }
    }
    local_170 = (ulonglong)(uint)local_170;
    local_130 = (int)lVar42;
    iVar45 = local_130 + 1;
    local_150 = iVar45;
    if ((int)uVar41 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar41);
    }
    local_170 = 0;
    if (uVar41 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar41,&local_178,0,(int *)((longlong)&local_170 + 4));
    }
    iVar35 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (1,1,uVar41,&local_178,(int *)&local_170,(int *)((longlong)&local_170 + 4));
    memset(local_178.Data + iVar35,0,(longlong)(int)uVar41);
    iVar32 = _UNK_1508be50c;
    iVar31 = _UNK_1508be508;
    iVar30 = _UNK_1508be504;
    iVar29 = ___xmm_c8000fffc8000fffc8000fffc8000fff;
    iVar28 = _UNK_1508be4ec;
    iVar27 = _UNK_1508be4e8;
    iVar26 = _UNK_1508be4e4;
    iVar25 = ___xmm_47800000478000004780000047800000;
    iVar24 = _UNK_1508be4bc;
    iVar23 = _UNK_1508be4b8;
    iVar40 = _UNK_1508be4b4;
    iVar35 = ___xmm_38800000388000003880000038800000;
    uVar22 = _UNK_1508be48c;
    uVar21 = _UNK_1508be488;
    uVar20 = _UNK_1508be484;
    uVar19 = ___xmm_00000200000002000000020000000200;
    uVar18 = _UNK_1508be47c;
    uVar17 = _UNK_1508be478;
    uVar16 = _UNK_1508be474;
    uVar15 = ___xmm_000001ff000001ff000001ff000001ff;
    fVar14 = _UNK_15068962c;
    fVar13 = _UNK_150689628;
    fVar12 = _UNK_150689624;
    fVar11 = ___xmm_3f0000003f0000003f0000003f000000;
    uVar10 = _UNK_15068959c;
    uVar9 = _UNK_150689598;
    uVar8 = _UNK_150689594;
    uVar7 = ___xmm_00007c0000007c0000007c0000007c00;
    uVar6 = _UNK_15065157c;
    uVar5 = _UNK_150651578;
    uVar4 = _UNK_150651574;
    uVar41 = __xmm_80000000800000008000000080000000;
    plVar48 = &this->_padding_;
    local_160 = 0;
    plVar33 = plVar48;
    if (0 < iVar45) {
      do {
        local_108 = plVar33;
        lVar42 = (longlong)(int)local_res18;
        uVar51 = 1 << (((char)iVar45 - (char)local_160) - 1U & 0x1f);
        lVar50 = (longlong)(int)local_res20;
        local_138 = 6;
        local_158 = uVar51 * uVar51 * 4;
        local_154 = uVar51 * uVar51 * 8;
        local_res8 = local_res18;
        local_res10 = local_res20;
        local_15c = uVar51;
        do {
          uVar36 = 0;
          if ((int)local_res8 < (int)plVar48[1]) {
            uVar36 = ~local_res8 >> 0x1f;
          }
          local_148 = lVar42;
          local_140 = lVar50;
          if ((uVar36 == 0) &&
             (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar34)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          this_02 = (FFloat3Packed *)(*plVar48 + lVar42);
          uVar36 = 0;
          if ((int)local_res10 < (int)(uint)local_170) {
            uVar36 = ~local_res10 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar34)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (0 < (int)uVar51) {
            local_110 = (ulonglong)uVar51;
            pFVar43 = local_178.Data + lVar50 + 4;
            uVar47 = (ulonglong)uVar51;
            local_118 = (longlong)(int)uVar51 * 8;
            local_120 = (longlong)(int)uVar51 * 4;
            uVar52 = local_110;
            pFVar46 = this_02;
            pFVar44 = pFVar43;
            do {
              do {
                pFVar39 = FFloat3Packed::ToLinearColor(this_02,local_e8);
                this_02 = this_02 + 1;
                uVar51 = *(uint *)((longlong)&pFVar39->field0_0x0 + 4);
                uVar36 = *(uint *)((longlong)&pFVar39->field0_0x0 + 8);
                uVar3 = *(uint *)((longlong)&pFVar39->field0_0x0 + 0xc);
                fVar56 = (float)(~uVar41 & *(uint *)&pFVar39->field0_0x0);
                fVar57 = (float)(~uVar4 & uVar51);
                fVar58 = (float)(~uVar5 & uVar36);
                fVar59 = (float)(~uVar6 & uVar3);
                auVar54._0_4_ =
                     (~-(uint)((int)fVar56 < iVar35) &
                      (uint)((iVar29 + (int)fVar56) - (((int)fVar56 << 0x12) >> 0x1f)) >> 0xd |
                     (int)(fVar56 + fVar11) - (int)fVar11 & -(uint)((int)fVar56 < iVar35)) &
                     -(uint)((int)fVar56 < iVar25);
                auVar54._4_4_ =
                     (~-(uint)((int)fVar57 < iVar40) &
                      (uint)((iVar30 + (int)fVar57) - (((int)fVar57 << 0x12) >> 0x1f)) >> 0xd |
                     (int)(fVar57 + fVar12) - (int)fVar12 & -(uint)((int)fVar57 < iVar40)) &
                     -(uint)((int)fVar57 < iVar26);
                auVar54._8_4_ =
                     (~-(uint)((int)fVar58 < iVar23) &
                      (uint)((iVar31 + (int)fVar58) - (((int)fVar58 << 0x12) >> 0x1f)) >> 0xd |
                     (int)(fVar58 + fVar13) - (int)fVar13 & -(uint)((int)fVar58 < iVar23)) &
                     -(uint)((int)fVar58 < iVar27);
                auVar54._12_4_ =
                     (~-(uint)((int)fVar59 < iVar24) &
                      (uint)((iVar32 + (int)fVar59) - (((int)fVar59 << 0x12) >> 0x1f)) >> 0xd |
                     (int)(fVar59 + fVar14) - (int)fVar14 & -(uint)((int)fVar59 < iVar24)) &
                     -(uint)((int)fVar59 < iVar28);
                auVar60._0_4_ =
                     ~-(uint)((int)fVar56 < iVar25) &
                     (((uint)fVar56 >> 0xd & uVar15 | uVar19) & -(uint)NAN(fVar56) | uVar7);
                auVar60._4_4_ =
                     ~-(uint)((int)fVar57 < iVar26) &
                     (((uint)fVar57 >> 0xd & uVar16 | uVar20) & -(uint)NAN(fVar57) | uVar8);
                auVar60._8_4_ =
                     ~-(uint)((int)fVar58 < iVar27) &
                     (((uint)fVar58 >> 0xd & uVar17 | uVar21) & -(uint)NAN(fVar58) | uVar9);
                auVar60._12_4_ =
                     ~-(uint)((int)fVar59 < iVar28) &
                     (((uint)fVar59 >> 0xd & uVar18 | uVar22) & -(uint)NAN(fVar59) | uVar10);
                auVar55._4_4_ = (int)(uVar51 & uVar4) >> 0x10;
                auVar55._0_4_ = (int)(*(uint *)&pFVar39->field0_0x0 & uVar41) >> 0x10;
                auVar55._8_4_ = (int)(uVar36 & uVar5) >> 0x10;
                auVar55._12_4_ = (int)(uVar3 & uVar6) >> 0x10;
                auVar55 = auVar54 | auVar60 | auVar55;
                auVar55 = packssdw(auVar55,auVar55);
                uVar53 = auVar55._0_8_;
                local_168._0_2_ = auVar55._0_2_;
                *(undefined2 *)(pFVar43 + -4) = (undefined2)local_168;
                local_168._2_2_ = auVar55._2_2_;
                *(undefined2 *)(pFVar43 + -2) = local_168._2_2_;
                local_168._4_2_ = auVar55._4_2_;
                *(undefined2 *)pFVar43 = local_168._4_2_;
                local_168._6_2_ = auVar55._6_2_;
                *(undefined2 *)(pFVar43 + 2) = local_168._6_2_;
                pFVar43 = pFVar43 + 8;
                uVar52 = uVar52 - 1;
                local_168 = uVar53;
              } while (uVar52 != 0);
              this_02 = (FFloat3Packed *)((longlong)&pFVar46->field0_0x0 + local_120);
              pFVar43 = pFVar44 + local_118;
              uVar47 = uVar47 - 1;
              lVar42 = local_148;
              plVar48 = local_108;
              lVar50 = local_140;
              uVar52 = local_110;
              uVar51 = local_15c;
              pFVar46 = this_02;
              pFVar44 = pFVar43;
            } while (uVar47 != 0);
          }
          local_res8 = local_res8 + local_158;
          lVar42 = lVar42 + local_158;
          local_res10 = local_res10 + local_154;
          lVar50 = lVar50 + local_154;
          local_138 = local_138 + -1;
        } while (local_138 != 0);
        local_res18 = local_res18 + local_158 * 6;
        local_res20 = local_res20 + local_154 * 6;
        local_160 = local_160 + 1;
        iVar45 = local_150;
        plVar33 = local_108;
      } while (local_160 < local_150);
      local_138 = 0;
      local_148 = lVar42;
      local_140 = lVar50;
    }
    if ((ForAnyElementType *)plVar48 != &local_178) {
      if ((void *)*plVar48 != (void *)0x0) {
        FMemory::Free((void *)*plVar48);
      }
      *plVar48 = (longlong)local_178.Data;
      *(uint *)(plVar48 + 1) = (uint)local_170;
      *(undefined4 *)((longlong)plVar48 + 0xc) = local_170._4_4_;
      local_170 = 0;
      local_178.Data = (FScriptContainerElement *)0x0;
    }
    if (local_178.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data);
    }
  }
  return;
}

