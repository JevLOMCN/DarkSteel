// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 4

// FHarfBuzzFontCache @ 1424736e0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FHarfBuzzFontCache * __thiscall
FHarfBuzzFontCache::FHarfBuzzFontCache(FHarfBuzzFontCache *this,FFreeTypeCacheDirectory *param_1)

{
  code *pcVar1;
  bool bVar2;
  FHarfBuzzFontCache *pFVar3;
  hb_font_funcs_t *phVar4;
  
  this->FTCacheDirectory = param_1;
  *(undefined8 *)&this->HarfBuzzFontCacheMap = 0;
  *(undefined8 *)&(this->HarfBuzzFontCacheMap).field_0x8 = 0;
  *(undefined8 *)&(this->HarfBuzzFontCacheMap).field_0x20 = 0;
  *(undefined4 *)&(this->HarfBuzzFontCacheMap).field_0x28 = 0;
  *(undefined4 *)&(this->HarfBuzzFontCacheMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->HarfBuzzFontCacheMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HarfBuzzFontCacheMap).field_0x34 = 0;
  *(undefined8 *)&(this->HarfBuzzFontCacheMap).field_0x40 = 0;
  *(undefined4 *)&(this->HarfBuzzFontCacheMap).field_0x48 = 0;
  if (this->FTCacheDirectory == (FFreeTypeCacheDirectory *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FTCacheDirectory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCacheHarfBuzz.cpp"
                       ,0x1b5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FHarfBuzzFontCache *)(*pcVar1)();
      return pFVar3;
    }
  }
  phVar4 = (hb_font_funcs_t *)hb_font_funcs_create();
  this->CustomHarfBuzzFuncs = phVar4;
  hb_font_funcs_set_font_h_extents_func
            (phVar4,HarfBuzzFontFunctions::Internal::get_font_h_extents,0,0);
  hb_font_funcs_set_nominal_glyph_func
            (this->CustomHarfBuzzFuncs,HarfBuzzFontFunctions::Internal::get_nominal_glyph,0,0);
  hb_font_funcs_set_nominal_glyphs_func
            (this->CustomHarfBuzzFuncs,HarfBuzzFontFunctions::Internal::get_nominal_glyphs,0,0);
  hb_font_funcs_set_glyph_h_advance_func
            (this->CustomHarfBuzzFuncs,HarfBuzzFontFunctions::Internal::get_glyph_h_advance,0,0);
  hb_font_funcs_set_glyph_h_advances_func
            (this->CustomHarfBuzzFuncs,HarfBuzzFontFunctions::Internal::get_glyph_h_advances,0,0);
  hb_font_funcs_set_glyph_v_advance_func
            (this->CustomHarfBuzzFuncs,HarfBuzzFontFunctions::Internal::get_glyph_v_advance,0,0);
  hb_font_funcs_set_glyph_v_advances_func
            (this->CustomHarfBuzzFuncs,HarfBuzzFontFunctions::Internal::get_glyph_v_advances,0,0);
  hb_font_funcs_set_glyph_v_origin_func
            (this->CustomHarfBuzzFuncs,HarfBuzzFontFunctions::Internal::get_glyph_v_origin,0,0);
  hb_font_funcs_set_glyph_h_kerning_func
            (this->CustomHarfBuzzFuncs,HarfBuzzFontFunctions::Internal::get_glyph_h_kerning,0,0);
  hb_font_funcs_set_glyph_extents_func
            (this->CustomHarfBuzzFuncs,HarfBuzzFontFunctions::Internal::get_glyph_extents,0,0);
  hb_font_funcs_set_glyph_contour_point_func
            (this->CustomHarfBuzzFuncs,HarfBuzzFontFunctions::Internal::get_glyph_contour_point,0,0)
  ;
  hb_font_funcs_make_immutable(this->CustomHarfBuzzFuncs);
  return this;
}

// ~FHarfBuzzFontCache @ 142479270

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FHarfBuzzFontCache::~FHarfBuzzFontCache(FHarfBuzzFontCache *this)

{
  void *pvVar1;
  
  Flush(this);
  hb_font_funcs_destroy(this->CustomHarfBuzzFuncs);
  this->CustomHarfBuzzFuncs = (hb_font_funcs_t *)0x0;
  *(undefined4 *)&(this->HarfBuzzFontCacheMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->HarfBuzzFontCacheMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FHarfBuzzFontCache::FFontKey,hb_face_t_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FHarfBuzzFontCache::FFontKey,hb_face_t_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FHarfBuzzFontCache::FFontKey,hb_face_t_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->HarfBuzzFontCacheMap);
  return;
}

// CreateFont @ 1424836c0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

hb_font_t * __thiscall
FHarfBuzzFontCache::CreateFont
          (FHarfBuzzFontCache *this,FFreeTypeFace *param_1,uint param_2,FSlateFontInfo *param_3,
          float param_4)

{
  int *piVar1;
  long lVar2;
  FT_FaceRec_ *pFVar3;
  UObject *this_00;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  hb_font_t *phVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_HarfBuzzFontCache_ApplyFont> FVar13;
  hb_face_t **pphVar14;
  hb_face_t *phVar15;
  uint *puVar16;
  UClass *pUVar17;
  longlong *plVar18;
  longlong lVar19;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar20;
  uint uVar21;
  FName FVar22;
  uint *puVar23;
  char cVar24;
  uint uVar25;
  ulonglong uVar26;
  float fVar27;
  FName local_res8;
  FName local_res10;
  uint local_res18;
  FSlateFontInfo *local_res20;
  LARGE_INTEGER local_88;
  FName local_80;
  FName local_78;
  FFontKey local_68;
  FStatMessage local_58;
  
  local_res18 = param_2;
  local_res20 = param_3;
  bVar7 = IsInGameThread();
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCacheHarfBuzz.cpp"
                         ,0x1ee,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    phVar11 = (hb_font_t *)(*pcVar4)();
    return phVar11;
  }
  puVar23 = (uint *)0x0;
  uVar10 = 0;
  FVar13 = StatPtr_STAT_HarfBuzzFontCache_ApplyFont;
  if (StatPtr_STAT_HarfBuzzFontCache_ApplyFont ==
      (FThreadSafeStaticStat<FStat_STAT_HarfBuzzFontCache_ApplyFont>)0x0) {
    pFVar12 = ::FName::FName(&local_80,"STAT_HarfBuzzFontCache_ApplyFont");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_HarfBuzzFontCache_ApplyFont>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_HarfBuzzFontCache_ApplyFont,
                        *pFVar12,L"Create font","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar22 = *(FName *)FVar13;
  bVar7 = false;
  bVar6 = false;
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  if ((FVar22.ComparisonIndex.Value.Value == 0) && (FVar22.Number == 0)) {
LAB_142483852:
    bVar5 = false;
    FVar22 = local_78;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar7 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar22.ComparisonIndex.Value.Value;
        local_res10.Number = FVar22.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCacheHarfBuzz.cpp"
                   ,499);
        bVar7 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_142483852;
    local_res8 = FVar22;
    local_78 = FVar22;
    FThreadStats::AddMessage(FVar22,CycleScopeStart);
    bVar5 = true;
  }
  pFVar3 = param_1->FTFace;
  if (param_4 <= 0.0) {
    param_4 = 0.0;
  }
  fVar27 = param_3->Size;
  if (fVar27 <= 0.0) {
    fVar27 = 0.0;
  }
  iVar8 = FT_MulFix(((int)(fVar27 * __real_c2800000) * -0x60 + 0x24) / 0x48,
                    (int)(param_4 * __real_47800000));
  uVar9 = iVar8 + 0x20 >> 6;
  FreeTypeUtils::ApplySizeAndScale(pFVar3,uVar9);
  uVar20 = ((uint)((ulonglong)pFVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar3 >> 4)) *
           -0x7a143595;
  uVar20 = (uVar20 >> 0xd ^ uVar20) * -0x3d4d51cb;
  uVar25 = (uVar20 >> 0x10 ^ uVar20) - param_2 ^ param_2 >> 0xd;
  uVar20 = (-0x61c88647 - param_2) - uVar25 ^ uVar25 << 8;
  uVar21 = (param_2 - uVar20) - uVar25 ^ uVar20 >> 0xd;
  uVar25 = (uVar25 - uVar21) - uVar20 ^ uVar21 >> 0xc;
  uVar20 = (uVar20 - uVar25) - uVar21 ^ uVar25 << 0x10;
  uVar21 = (uVar21 - uVar20) - uVar25 ^ uVar20 >> 5;
  uVar25 = (uVar25 - uVar21) - uVar20 ^ uVar21 >> 3;
  uVar20 = (uVar20 - uVar25) - uVar21 ^ uVar25 << 10;
  local_68.KeyHash = (uVar21 - uVar20) - uVar25 ^ uVar20 >> 0xf;
  local_68.Face = pFVar3;
  local_68.Flags = param_2;
  pphVar14 = TMapBase<FHarfBuzzFontCache::FFontKey,hb_face_t_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHarfBuzzFontCache::FFontKey,hb_face_t_*,0>_>
             ::FindOrAddImpl<FHarfBuzzFontCache::FFontKey_const_&>
                       ((TMapBase<FHarfBuzzFontCache::FFontKey,hb_face_t_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHarfBuzzFontCache::FFontKey,hb_face_t_*,0>_>
                         *)&this->HarfBuzzFontCacheMap,local_68.KeyHash,&local_68);
  phVar15 = *pphVar14;
  if (phVar15 == (hb_face_t *)0x0) {
    phVar15 = (hb_face_t *)hb_ft_face_create(pFVar3,0);
    *pphVar14 = phVar15;
  }
  phVar11 = (hb_font_t *)hb_font_create(phVar15);
  uVar26 = (longlong)(pFVar3->size->metrics).y_scale * (ulonglong)pFVar3->units_per_EM + 0x8000;
  hb_font_set_scale(phVar11,(longlong)(pFVar3->size->metrics).x_scale *
                            (ulonglong)pFVar3->units_per_EM + 0x8000 >> 0x10,
                    uVar26 >> 0x10 & 0xffffffff);
  hb_font_set_funcs(phVar11,this->CustomHarfBuzzFuncs,0,0);
  local_res8 = (FName)this->FTCacheDirectory;
  puVar16 = ::operator_new(0x50);
  if (puVar16 != (uint *)0x0) {
    *puVar16 = uVar9;
    *(FName *)(puVar16 + 2) = local_res8;
    puVar16[0x12] = local_res18;
    *(FT_FaceRec_ **)(puVar16 + 0x10) = pFVar3;
    puVar16[4] = 0;
    puVar16[5] = 0;
    puVar16[6] = 0;
    puVar16[7] = 0;
    puVar16[8] = 0;
    puVar16[9] = 0;
    puVar16[10] = 0;
    puVar16[0xb] = 0;
    puVar16[0xc] = 0;
    puVar16[0xd] = 0;
    puVar16[0xe] = 0;
    puVar16[0xf] = 0;
    puVar23 = puVar16;
  }
  this_00 = (local_res20->FontObject).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_00 != (UObject *)0x0) goto LAB_142483a8f;
LAB_142483af5:
    cVar24 = '\x01';
LAB_142483af8:
    if (param_1->IsAscentOverridden == false) goto LAB_142483acd;
    iVar8 = FT_MulFix(param_1->AscentOverrideValue,(param_1->FTFace->size->metrics).y_scale);
    uVar9 = iVar8 + 0x3fU & 0xffffffc0;
  }
  else {
    if (this_00 == (UObject *)0x0) goto LAB_142483af5;
    UE::GC::MarkAsReachable(this_00);
LAB_142483a8f:
    pUVar17 = UFontProviderInterface::StaticClass();
    plVar18 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar17);
    if ((plVar18 == (longlong *)0x0) ||
       (lVar19 = (**(code **)(*plVar18 + 0x10))(plVar18), lVar19 == 0)) goto LAB_142483af5;
    lVar19 = (**(code **)(*plVar18 + 0x10))(plVar18);
    cVar24 = *(char *)(lVar19 + 0x38);
    if (cVar24 != '\0') goto LAB_142483af8;
LAB_142483acd:
    pFVar3 = param_1->FTFace;
    if ((pFVar3->face_flags & 1U) == 0) {
      uVar9 = uVar10;
      if ((pFVar3->face_flags & 2U) != 0) {
        uVar9 = FT_MulFix((pFVar3->size->metrics).ascender,(pFVar3->size->metrics).y_scale);
      }
    }
    else if (param_1->LayoutMethod == Metrics) {
      uVar9 = FT_MulFix((int)pFVar3->ascender,(pFVar3->size->metrics).y_scale);
    }
    else {
      uVar9 = FT_MulFix((pFVar3->bbox).yMax,(pFVar3->size->metrics).y_scale);
    }
  }
  puVar23[4] = uVar9;
  if ((cVar24 == '\0') || (param_1->IsDescentOverridden == false)) {
    pFVar3 = param_1->FTFace;
    if ((pFVar3->face_flags & 1U) == 0) {
      uVar9 = uVar10;
      if ((pFVar3->face_flags & 2U) != 0) {
        uVar9 = FT_MulFix((pFVar3->size->metrics).descender,(pFVar3->size->metrics).y_scale);
      }
    }
    else if (param_1->LayoutMethod == Metrics) {
      uVar9 = FT_MulFix((int)pFVar3->descender,(pFVar3->size->metrics).y_scale);
    }
    else {
      uVar9 = FT_MulFix((pFVar3->bbox).yMin,(pFVar3->size->metrics).y_scale);
    }
    puVar23[5] = uVar9;
    if (cVar24 != '\0') goto LAB_142483bd7;
LAB_142483ce8:
    pFVar3 = param_1->FTFace;
    if ((pFVar3->face_flags & 1U) == 0) {
      if ((pFVar3->face_flags & 2U) == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = FT_MulFix((pFVar3->size->metrics).height,(pFVar3->size->metrics).y_scale);
      }
    }
    else {
      lVar2 = (pFVar3->size->metrics).y_scale;
      if (param_1->LayoutMethod == Metrics) {
        iVar8 = FT_MulFix((int)pFVar3->height,lVar2);
      }
      else {
        iVar8 = FT_MulFix((pFVar3->bbox).yMax - (pFVar3->bbox).yMin,lVar2);
      }
    }
  }
  else {
    uVar9 = FT_MulFix(param_1->DescentOverrideValue,(param_1->FTFace->size->metrics).y_scale);
    puVar23[5] = uVar9 & 0xffffffc0;
LAB_142483bd7:
    if (param_1->IsAscentOverridden == false) {
      if (param_1->IsDescentOverridden == false) goto LAB_142483ce8;
      pFVar3 = param_1->FTFace;
      if ((pFVar3->face_flags & 1U) == 0) {
        if ((pFVar3->face_flags & 2U) == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = FT_MulFix((pFVar3->size->metrics).ascender,(pFVar3->size->metrics).y_scale);
        }
      }
      else if (param_1->LayoutMethod == Metrics) {
        uVar9 = FT_MulFix((int)pFVar3->ascender,(pFVar3->size->metrics).y_scale);
      }
      else {
        uVar9 = FT_MulFix((pFVar3->bbox).yMax,(pFVar3->size->metrics).y_scale);
      }
    }
    else {
      iVar8 = FT_MulFix(param_1->AscentOverrideValue,(param_1->FTFace->size->metrics).y_scale);
      uVar9 = iVar8 + 0x3fU & 0xffffffc0;
    }
    pFVar3 = param_1->FTFace;
    if (param_1->IsDescentOverridden == false) {
      if ((pFVar3->face_flags & 1U) == 0) {
        if ((pFVar3->face_flags & 2U) != 0) {
          uVar10 = FT_MulFix((pFVar3->size->metrics).descender,(pFVar3->size->metrics).y_scale);
        }
        iVar8 = uVar9 - uVar10;
      }
      else if (param_1->LayoutMethod == Metrics) {
        iVar8 = FT_MulFix((int)pFVar3->descender,(pFVar3->size->metrics).y_scale);
        iVar8 = uVar9 - iVar8;
      }
      else {
        iVar8 = FT_MulFix((pFVar3->bbox).yMin,(pFVar3->size->metrics).y_scale);
        iVar8 = uVar9 - iVar8;
      }
    }
    else {
      uVar10 = FT_MulFix(param_1->DescentOverrideValue,(pFVar3->size->metrics).y_scale);
      iVar8 = uVar9 - (uVar10 & 0xffffffc0);
    }
  }
  uVar10 = puVar23[4];
  uVar9 = puVar23[5];
  puVar23[6] = (iVar8 - uVar10) + uVar9;
  if ((int)(uVar26 >> 0x10) < 0) {
    puVar23[4] = -uVar10;
    puVar23[5] = -uVar9;
    puVar23[6] = (uVar10 - uVar9) - iVar8;
  }
  hb_font_set_user_data
            (phVar11,&HarfBuzzFontFunctions::UserDataKey,puVar23,
             HarfBuzzFontFunctions::DestroyUserData,1);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar22 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_58.NameAndInfo.Index.Value = local_78.ComparisonIndex.Value;
      local_58.NameAndInfo.Number = FVar22.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_88);
      local_58.StatData.Pad[4] = '\0';
      local_58.StatData.Pad[5] = '\0';
      local_58.StatData.Pad[6] = '\0';
      local_58.StatData.Pad[7] = '\0';
      local_58.StatData.Pad[0] = local_88.s.LowPart._0_1_;
      local_58.StatData.Pad[1] = local_88.s.LowPart._1_1_;
      local_58.StatData.Pad[2] = local_88.s.LowPart._2_1_;
      local_58.StatData.Pad[3] = local_88.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_58);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return phVar11;
}

// Flush @ 142488a50

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FHarfBuzzFontCache::Flush(FHarfBuzzFontCache *this)

{
  undefined1 *puVar1;
  TMap<FHarfBuzzFontCache::FFontKey,hb_face_t_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHarfBuzzFontCache::FFontKey,hb_face_t_*,0>_>
  *this_00;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->HarfBuzzFontCacheMap).field_0x28;
  puVar1 = &(this->HarfBuzzFontCacheMap).field_0x10;
  iVar10 = 0;
  this_00 = &this->HarfBuzzFontCacheMap;
  iVar12 = 0;
  uVar6 = 1;
  iVar7 = iVar12;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->HarfBuzzFontCacheMap).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar9 = *puVar13;
    iVar12 = 0;
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_142488afd;
      uVar9 = puVar13[lVar8 + 1];
    }
    uVar6 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar12;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_142488afd:
  uVar9 = *(uint *)&(this->HarfBuzzFontCacheMap).field_0x28;
  uVar14 = uVar9 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar10);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar9 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar12;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->HarfBuzzFontCacheMap).field_0x8 -
                       *(int *)&(this->HarfBuzzFontCacheMap).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->HarfBuzzFontCacheMap).field_0x28;
  if (uVar9 != uVar6) {
    puVar11 = *(undefined1 **)&(this->HarfBuzzFontCacheMap).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar14 = uVar14 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_142488c00;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar14;
    if ((int)uVar6 < (int)uVar9) {
      uVar9 = uVar6;
    }
  }
LAB_142488c00:
  while( true ) {
    if (*(int *)&(this->HarfBuzzFontCacheMap).field_0x8 -
        *(int *)&(this->HarfBuzzFontCacheMap).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FHarfBuzzFontCache::FFontKey,hb_face_t_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar9) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    hb_face_destroy(*(undefined8 *)
                     ((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 +
                     *(longlong *)&this_00->field_0x0));
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  bVar5 = 1 < *(int *)&(this->HarfBuzzFontCacheMap).field_0x48;
  if (!bVar5) {
    TSet<TTuple<FHarfBuzzFontCache::FFontKey,hb_face_t_*>,TDefaultMapHashableKeyFuncs<FHarfBuzzFontCache::FFontKey,hb_face_t_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FHarfBuzzFontCache::FFontKey,hb_face_t_*>,TDefaultMapHashableKeyFuncs<FHarfBuzzFontCache::FFontKey,hb_face_t_*,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->HarfBuzzFontCacheMap).field_0xc;
  *(undefined4 *)&(this->HarfBuzzFontCacheMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->HarfBuzzFontCacheMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HarfBuzzFontCacheMap).field_0x34 = 0;
  iVar3 = *(int *)&(this->HarfBuzzFontCacheMap).field_0x2c;
  *(undefined4 *)&(this->HarfBuzzFontCacheMap).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->HarfBuzzFontCacheMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->HarfBuzzFontCacheMap).field_0x10,0);
  }
  if (bVar5) {
    *(undefined4 *)&(this->HarfBuzzFontCacheMap).field_0x48 = 1;
    TSet<TTuple<FHarfBuzzFontCache::FFontKey,hb_face_t_*>,TDefaultMapHashableKeyFuncs<FHarfBuzzFontCache::FFontKey,hb_face_t_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FHarfBuzzFontCache::FFontKey,hb_face_t_*>,TDefaultMapHashableKeyFuncs<FHarfBuzzFontCache::FFontKey,hb_face_t_*,0>,FDefaultSetAllocator>
              *)this_00);
  }
  return;
}

