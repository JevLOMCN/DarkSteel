// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 12

// <lambda_invoker_cdecl> @ 143270780

void __cdecl
`BuildPatchServices::FInstallChunkSource::CreateRequest'::__l5::<lambda_1>::<lambda_invoker_cdecl>
          (bool param_1)

{
  return;
}

// FInstallChunkSource @ 14327fdc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FInstallChunkSource * __thiscall
BuildPatchServices::FInstallChunkSource::FInstallChunkSource
          (FInstallChunkSource *this,IFileSystem *param_1,IInstallChunkSourceStat *param_2,
          TMultiMap<FString,TSharedRef<FBuildPatchAppManifest,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,1>_>
          *param_3,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_4)

{
  undefined1 *puVar1;
  ForAnyElementType *pFVar2;
  FBlockStructure *this_00;
  FGuid *pFVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined8 uVar8;
  code *pcVar9;
  bool bVar10;
  TMultiMap<FString,TSharedRef<FBuildPatchAppManifest,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,1>_>
  *pTVar11;
  bool bVar12;
  bool bVar13;
  char cVar14;
  int iVar15;
  FInstallChunkSource *pFVar16;
  ulong64 uVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  FBlockEntry *pFVar20;
  FBlockEntry *pFVar21;
  FGuid *pFVar22;
  byte bVar23;
  longlong lVar24;
  ForAnyElementType FVar25;
  longlong lVar26;
  int iVar27;
  int iVar28;
  undefined8 *puVar29;
  FScriptContainerElement *pFVar30;
  uint uVar31;
  uint *puVar32;
  longlong lVar33;
  uint uVar34;
  uint uVar35;
  FGuid *pFVar36;
  void *_Src;
  bool bVar37;
  undefined1 auStackY_408 [32];
  uint local_3b4;
  undefined1 local_3b0;
  undefined1 local_3af;
  undefined1 local_3ae [2];
  uint local_3ac;
  undefined8 *local_3a8;
  FScriptContainerElement *local_3a0;
  longlong local_398;
  longlong local_390;
  FString local_388;
  int local_378;
  int local_374;
  TMultiMap<FString,TSharedRef<FBuildPatchAppManifest,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,1>_>
  *local_370;
  uint uStack_368;
  uint uStack_364;
  TBitArray<FDefaultBitArrayAllocator> *local_360;
  undefined4 uStack_358;
  uint uStack_354;
  uint local_350;
  undefined4 uStack_34c;
  int iStack_348;
  undefined4 uStack_344;
  undefined1 local_340 [16];
  longlong local_330;
  undefined4 uStack_328;
  uint uStack_324;
  longlong local_320;
  undefined8 local_318;
  uint uStack_310;
  uint uStack_30c;
  longlong local_308;
  TMultiMap<FString,TSharedRef<FBuildPatchAppManifest,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,1>_>
  *local_300;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2f8;
  undefined8 local_2d8;
  TMultiMap<FString,TSharedRef<FBuildPatchAppManifest,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,1>_>
  *local_2d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2c8;
  undefined8 local_2a8;
  longlong local_2a0;
  longlong local_298;
  FInstallChunkSource *local_290;
  IFileSystem *local_288;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_280;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_260;
  int local_240;
  int local_23c;
  int local_238;
  int local_234;
  FGuid *local_230;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *local_228;
  FGuid *local_220;
  TMap<FGuid,TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_>,0>_>
  *local_218;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *local_210;
  undefined1 local_208 [16];
  TMultiMap<FString,TSharedRef<FBuildPatchAppManifest,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,1>_>
  *local_1f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1f0;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  int iStack_1b0;
  undefined4 uStack_1ac;
  TMultiMap<FString,TSharedRef<FBuildPatchAppManifest,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,1>_>
  *local_1a8;
  longlong lStack_1a0;
  TBitArray<FDefaultBitArrayAllocator> *local_198;
  undefined8 uStack_190;
  int iStack_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_15c;
  undefined4 local_13c;
  undefined1 local_138 [32];
  uint *local_118;
  uint local_110;
  undefined4 local_10c;
  undefined4 local_108;
  int local_104;
  void *local_f8;
  undefined4 local_f0;
  undefined1 local_e8 [32];
  uint *local_c8;
  uint local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  void *local_a8;
  undefined4 local_a0;
  TSet<TTuple<FGuid,BuildPatchServices::FBlockStructure>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FBlockStructure,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_408;
  *(undefined8 *)&(this->AvailableInBuilds).Elements = 0;
  local_210 = &this->AvailableInBuilds;
  *(undefined8 *)&(this->AvailableInBuilds).Elements.field_0x8 = 0;
  local_208._8_8_ = &this->InstallationSources;
  *(undefined8 *)&(this->AvailableInBuilds).Elements.field_0x20 = 0;
  this->FileSystem = param_1;
  this->InstallChunkSourceStat = param_2;
  local_228 = param_4;
  this->_padding_ = (longlong)&___7FInstallChunkSource_BuildPatchServices__6B_;
  *(undefined4 *)&(this->AvailableInBuilds).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AvailableInBuilds).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->AvailableInBuilds).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AvailableInBuilds).Elements.field_0x34 = 0;
  (this->AvailableInBuilds).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->AvailableInBuilds).HashSize = 0;
  (((TArray<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>,TSizedDefaultAllocator<32>_> *)
   local_208._8_8_)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->InstallationSources).ArrayNum = 0;
  (this->InstallationSources).ArrayMax = 0;
  (this->OpenedFileHandlesLock).State = (atomic<unsigned_char>)0x0;
  *(undefined8 *)&this->OpenedFileHandles = 0;
  *(undefined8 *)&(this->OpenedFileHandles).field_0x8 = 0;
  *(undefined8 *)&(this->OpenedFileHandles).field_0x20 = 0;
  *(undefined4 *)&(this->OpenedFileHandles).field_0x28 = 0;
  *(undefined4 *)&(this->OpenedFileHandles).field_0x2c = 0x80;
  *(undefined4 *)&(this->OpenedFileHandles).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OpenedFileHandles).field_0x34 = 0;
  *(undefined8 *)&(this->OpenedFileHandles).field_0x40 = 0;
  *(undefined4 *)&(this->OpenedFileHandles).field_0x48 = 0;
  *(undefined8 *)&this->FileRetirementPositions = 0;
  *(undefined8 *)&(this->FileRetirementPositions).field_0x8 = 0;
  *(undefined8 *)&(this->FileRetirementPositions).field_0x20 = 0;
  *(undefined4 *)&(this->FileRetirementPositions).field_0x28 = 0;
  *(undefined4 *)&(this->FileRetirementPositions).field_0x2c = 0x80;
  *(undefined4 *)&(this->FileRetirementPositions).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FileRetirementPositions).field_0x34 = 0;
  *(undefined8 *)&(this->FileRetirementPositions).field_0x40 = 0;
  *(undefined4 *)&(this->FileRetirementPositions).field_0x48 = 0;
  local_218 = &this->ChunkSources;
  *(undefined8 *)local_218 = 0;
  *(undefined8 *)&(this->ChunkSources).field_0x8 = 0;
  *(undefined8 *)&(this->ChunkSources).field_0x20 = 0;
  *(undefined4 *)&(this->ChunkSources).field_0x28 = 0;
  *(undefined4 *)&(this->ChunkSources).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChunkSources).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChunkSources).field_0x34 = 0;
  *(undefined8 *)&(this->ChunkSources).field_0x40 = 0;
  *(undefined4 *)&(this->ChunkSources).field_0x48 = 0;
  bVar37 = -1 < CpuChannel->Enabled;
  local_290 = this;
  local_288 = param_1;
  if (bVar37) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId146,"InstallChunkSource_ctor",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\InstallChunkSource.cpp"
               ,0x92);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId146);
  }
  puVar1 = &param_3->field_0x10;
  local_260._padding_._0_4_ = 0;
  local_260._padding_._4_4_ = 1;
  local_260.UnvisitedBitMask = 0xffffffff;
  local_260.CurrentBitIndex = 0;
  local_260.BaseBitIndex = 0;
  local_260.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if (*(int *)&param_3->field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_260);
  }
  uVar35 = *(uint *)&param_3->field_0x28;
  TStack_2f8._padding_ = CONCAT44(local_260._padding_._4_4_,(undefined4)local_260._padding_);
  bVar23 = (byte)uVar35 & 0x1f;
  TStack_2f8.CurrentBitIndex = local_260.CurrentBitIndex;
  TStack_2f8.UnvisitedBitMask = local_260.UnvisitedBitMask;
  TStack_2f8._28_4_ = local_260._28_4_;
  TStack_2f8.BaseBitIndex = local_260.BaseBitIndex;
  local_2d8 = CONCAT44(local_2d8._4_4_,*(int *)&param_3->field_0x8 - *(int *)&param_3->field_0x34);
  local_280._padding_._0_4_ = (int)uVar35 >> 5;
  local_280._padding_._4_4_ = 1 << bVar23;
  local_280.UnvisitedBitMask = -1 << bVar23;
  TStack_2f8.Array = local_260.Array;
  local_280.BaseBitIndex = uVar35 & 0xffffffe0;
  TStack_1f0.Array = local_260.Array;
  uStack_1d0 = local_2d8;
  local_300 = param_3;
  local_280.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_280.CurrentBitIndex = uVar35;
  local_1f8 = param_3;
  TStack_1f0._padding_ = TStack_2f8._padding_;
  TStack_1f0._16_8_ = TStack_2f8._16_8_;
  TStack_1f0._24_8_ = TStack_2f8._24_8_;
  if (((int)uVar35 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    pFVar16 = (FInstallChunkSource *)(*pcVar9)();
    return pFVar16;
  }
  if (uVar35 != *(uint *)&param_3->field_0x28) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_280);
  }
  TStack_2c8._padding_ = CONCAT44(local_280._padding_._4_4_,(int)local_280._padding_);
  TStack_2c8.CurrentBitIndex = local_280.CurrentBitIndex;
  TStack_2c8.UnvisitedBitMask = local_280.UnvisitedBitMask;
  TStack_2c8._28_4_ = local_280._28_4_;
  TStack_2c8.BaseBitIndex = local_280.BaseBitIndex;
  TStack_2c8.Array = local_280.Array;
  local_2a8 = CONCAT44(local_2a8._4_4_,*(int *)&param_3->field_0x8 - *(int *)&param_3->field_0x34);
  local_198 = local_280.Array;
  uStack_180 = local_2a8;
  local_2d0 = param_3;
  local_1a8 = param_3;
  lStack_1a0 = TStack_2c8._padding_;
  uStack_190 = TStack_2c8._16_8_;
  local_188 = TStack_2c8._24_8_;
  do {
    pTVar11 = local_1f8;
    uVar35 = 0;
    if (*(int *)&local_1f8->field_0x8 - *(int *)&local_1f8->field_0x34 != (int)uStack_1d0) {
      local_3b0 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_3b0);
    }
    pFVar16 = local_290;
    if (((TStack_1f0.CurrentBitIndex == iStack_18c) && (TStack_1f0.Array == local_198)) &&
       (pTVar11 == local_1a8)) {
      if (4 < (byte)LogInstallChunkSource._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInstallChunkSource);
      }
      if (bVar37) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return pFVar16;
    }
    local_e8._0_8_ = 0;
    local_e8._8_8_ = 0;
    local_c8 = (uint *)0x0;
    pFVar18 = (FScriptContainerElement *)
              (*(longlong *)pTVar11 + (longlong)TStack_1f0.CurrentBitIndex * 0x28);
    uVar31 = 0;
    local_c0 = 0;
    local_bc = 0x80;
    local_b8 = 0xffffffff;
    local_b4 = 0;
    local_a8 = (void *)0x0;
    local_a0 = 0;
    local_3a0 = pFVar18;
    (**(code **)(**(longlong **)&pFVar18[0x10].field_0x0 + 0x1b8))
              (*(longlong **)&pFVar18[0x10].field_0x0,local_e8);
    uVar34 = local_c0;
    uStack_364 = 1;
    local_98.Elements._0_8_ = 0;
    local_98.Elements._8_8_ = 0;
    local_98.Elements._32_8_ = 0;
    local_98.Elements._40_4_ = 0;
    local_98.Elements._44_4_ = 0x80;
    local_98.Elements._48_4_ = 0xffffffff;
    local_98.Elements._52_4_ = 0;
    local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_98.HashSize = 0;
    local_138._0_8_ = 0;
    local_138._8_8_ = 0;
    local_118 = (uint *)0x0;
    local_110 = 0;
    local_10c = 0x80;
    local_108 = 0xffffffff;
    local_104 = 0;
    local_f8 = (void *)0x0;
    local_f0 = 0;
    uStack_354 = uVar31;
    local_350 = uVar35;
    if (local_c0 != 0) {
      puVar32 = (uint *)(local_e8 + 0x10);
      if (local_c8 != (uint *)0x0) {
        puVar32 = local_c8;
      }
      uVar7 = *puVar32;
      uVar31 = uVar35;
      while (uVar7 == 0) {
        lVar24 = (longlong)(int)uVar31;
        local_350 = local_350 + 0x20;
        uVar31 = uVar31 + 1;
        uStack_354 = local_c0;
        if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar31)
        goto LAB_1432802a6;
        uVar7 = (puVar32 + 1)[lVar24];
      }
      uStack_364 = -uVar7 & uVar7;
      uVar6 = (ulonglong)uStack_364 * 2 + 1;
      lVar24 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      local_240 = (int)lVar24;
      uStack_354 = local_240 + -1 + local_350;
      if ((int)local_c0 < (int)uStack_354) {
        uStack_354 = local_c0;
      }
    }
LAB_1432802a6:
    local_370 = (TMultiMap<FString,TSharedRef<FBuildPatchAppManifest,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,1>_>
                 *)local_e8;
    uStack_34c = local_15c;
    local_360 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
    uVar35 = local_c0 & 0xffffffe0;
    iStack_348 = local_e8._8_4_ - local_b4;
    TStack_2c8._padding_ = CONCAT44(uStack_364,uVar31);
    uStack_358 = 0xffffffff;
    TStack_2c8.CurrentBitIndex = uStack_354;
    TStack_2c8.UnvisitedBitMask = 0xffffffff;
    iVar27 = (int)local_c0 >> 5;
    TStack_2c8._28_4_ = local_15c;
    TStack_2c8.BaseBitIndex = local_350;
    local_2a8 = CONCAT44(uStack_344,iStack_348);
    bVar23 = (byte)local_c0;
    local_3b4 = local_c0;
    uStack_368 = uVar31;
    local_2d0 = local_370;
    TStack_2c8.Array = local_360;
    if (((int)local_c0 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      pFVar16 = (FInstallChunkSource *)(*pcVar9)();
      return pFVar16;
    }
    if (uVar34 != local_c0) {
      puVar32 = (uint *)(local_e8 + 0x10);
      if (local_c8 != (uint *)0x0) {
        puVar32 = local_c8;
      }
      uVar31 = -1 << (bVar23 & 0x1f) & puVar32[iVar27];
      while (uVar31 == 0) {
        lVar24 = (longlong)iVar27;
        uVar35 = uVar35 + 0x20;
        iVar27 = iVar27 + 1;
        if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar27) {
          local_3b4 = local_c0;
          uVar34 = local_c0;
          goto LAB_1432803e0;
        }
        uVar31 = (puVar32 + 1)[lVar24];
      }
      uVar6 = (ulonglong)(-uVar31 & uVar31) * 2 + 1;
      lVar24 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      local_23c = (int)lVar24;
      local_3b4 = local_23c + -1 + uVar35;
      uVar34 = local_3b4;
      if ((int)local_c0 < (int)local_3b4) {
        uVar34 = local_c0;
        local_3b4 = local_c0;
      }
    }
LAB_1432803e0:
    while( true ) {
      pTVar11 = local_2d0;
      if (*(int *)&local_2d0->field_0x8 - *(int *)&local_2d0->field_0x34 != (int)local_2a8) {
        local_3af = 0;
        `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_3af);
      }
      uVar35 = local_110;
      if (((TStack_2c8.CurrentBitIndex == uVar34) &&
          (TStack_2c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10))) &&
         (pTVar11 ==
          (TMultiMap<FString,TSharedRef<FBuildPatchAppManifest,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,1>_>
           *)local_e8)) break;
      puVar29 = (undefined8 *)(*(longlong *)pTVar11 + (longlong)TStack_2c8.CurrentBitIndex * 0x18);
      local_3a8 = puVar29;
      lVar24 = (**(code **)(**(longlong **)&pFVar18[0x10].field_0x0 + 0x1f8))
                         (*(longlong **)&pFVar18[0x10].field_0x0,puVar29);
      local_390 = lVar24;
      if (lVar24 == 0) {
        if (1 < (byte)LogInstallChunkSource._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    (&::LOG_Static,(FLogCategoryBase *)&LogInstallChunkSource);
        }
      }
      else {
        uVar35 = 0;
        bVar12 = false;
        bVar10 = false;
        local_398 = 0;
        pFVar18 = local_3a0;
        uVar34 = local_3b4;
        if (0 < *(int *)(lVar24 + 0x50)) {
          local_298 = 0;
          do {
            lVar26 = local_298;
            lVar33 = local_398;
            uVar31 = 0;
            if ((int)uVar35 < *(int *)(lVar24 + 0x50)) {
              uVar31 = ~uVar35 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar9 = (code *)swi(3);
              pFVar16 = (FInstallChunkSource *)(*pcVar9)();
              return pFVar16;
            }
            pFVar36 = (FGuid *)(lVar26 + *(longlong *)(lVar24 + 0x48));
            local_3ac = pFVar36[1].B;
            uVar17 = CityHash64((char *)pFVar36,0x10);
            iVar27 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::
                     FindIndexByHash<FGuid>(local_228,(uint)uVar17,pFVar36);
            if (iVar27 != -1) {
              bVar13 = !bVar12;
              bVar12 = bVar10;
              if (bVar13) {
                local_2a0 = 0;
                pcVar9 = *(code **)((longlong)*local_288 + 0x18);
                iVar27 = *(int *)(local_3a0 + 8);
                iVar28 = *(int *)(puVar29 + 1) + -1;
                if (*(int *)(puVar29 + 1) == 0) {
                  iVar28 = 0;
                }
                local_388.Data.ArrayNum = iVar27;
                if ((iVar27 == 0) && (iVar28 != -1)) {
                  _Src = *(void **)&local_3a0->field_0x0;
                  iVar15 = iVar28 + 2;
LAB_1432805ab:
                  local_388.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  if (iVar15 != 0) goto LAB_1432805b4;
                  local_388.Data.ArrayMax = 0;
                }
                else {
                  _Src = *(void **)&local_3a0->field_0x0;
                  iVar15 = iVar28 + 1;
                  if (iVar27 == 0) goto LAB_1432805ab;
LAB_1432805b4:
                  local_388.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  uVar31 = iVar15 + iVar27;
                  if ((int)uVar31 < iVar27) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar31);
                  }
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (2,2,uVar31,0,(ForAnyElementType *)&local_388,iVar27,
                             &local_388.Data.ArrayMax);
                  if (iVar27 != 0) {
                    memcpy(local_388.Data.AllocatorInstance.Data,_Src,(longlong)iVar27 * 2);
                  }
                }
                puVar29 = local_3a8;
                ::FString::PathAppend(&local_388,(wchar_t *)*local_3a8,iVar28);
                FVar25.Data = (FScriptContainerElement *)L"";
                if (local_388.Data.ArrayNum != 0) {
                  FVar25.Data = local_388.Data.AllocatorInstance.Data;
                }
                cVar14 = (*pcVar9)(local_288,FVar25.Data,&local_2a0);
                if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_388.Data.AllocatorInstance.Data);
                }
                pFVar18 = local_3a0;
                uVar8 = *puVar29;
                iVar27 = *(int *)(puVar29 + 1);
                iStack_1c0 = iVar27 + -1;
                if (iVar27 == 0) {
                  iStack_1c0 = 0;
                }
                local_1c8._0_4_ = (undefined4)uVar8;
                local_1c8._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
                local_1b8 = (undefined4)local_1c8;
                uStack_1b4 = local_1c8._4_4_;
                uStack_1ac = uStack_1bc;
                local_1c8 = uVar8;
                iStack_1b0 = iStack_1c0;
                lVar24 = (**(code **)(**(longlong **)&local_3a0[0x10].field_0x0 + 0xb0))
                                   (*(longlong **)&local_3a0[0x10].field_0x0,&local_1b8);
                if ((cVar14 == '\0') || (local_2a0 != lVar24)) break;
                bVar12 = true;
                lVar33 = local_398;
                lVar24 = local_390;
              }
              uVar17 = CityHash64((char *)pFVar36,0x10);
              iVar27 = TSet<TTuple<FGuid,`BuildPatchServices::FInstallChunkSource::FInstallChunkSource'::__l6::FChunkAssemblyInfo>,TDefaultMapHashableKeyFuncs<FGuid,`BuildPatchServices::FInstallChunkSource::FInstallChunkSource'::__l6::FChunkAssemblyInfo,0>,FDefaultSetAllocator>
                       ::FindIndexByHash<FGuid>(local_138,(uint)uVar17,pFVar36);
              if ((iVar27 == -1) ||
                 (lVar26 = (longlong)iVar27 * 0x30 + local_138._0_8_, lVar26 == 0)) {
                local_230 = pFVar36;
                TSet<TTuple<FGuid,`BuildPatchServices::FInstallChunkSource::FInstallChunkSource'::__l6::FChunkAssemblyInfo>,TDefaultMapHashableKeyFuncs<FGuid,`BuildPatchServices::FInstallChunkSource::FInstallChunkSource'::__l6::FChunkAssemblyInfo,0>,FDefaultSetAllocator>
                ::EmplaceByHash<TKeyInitializer<FGuid_const_&>_>
                          (local_138,(uint)&local_378,
                           (TKeyInitializer<FGuid_const_&> *)(uVar17 & 0xffffffff),
                           (bool *)&local_230);
                lVar26 = (longlong)local_378 * 0x30 + local_138._0_8_;
              }
              pFVar2 = (ForAnyElementType *)(lVar26 + 0x10);
              bVar10 = bVar12;
              if (*(int *)(lVar26 + 0x18) == 0) {
                pFVar18 = (FScriptContainerElement *)
                          (**(code **)(**(longlong **)&local_3a0[0x10].field_0x0 + 0x218))
                                    (*(longlong **)&local_3a0[0x10].field_0x0,pFVar36);
                if (pFVar18 == (FScriptContainerElement *)0x0) {
                  puVar29 = local_3a8;
                  if (3 < (byte)LogInstallChunkSource._0_1_) {
                    local_340._0_8_ = pFVar18;
                    local_340._8_8_ = pFVar18;
                    FGuid::AppendString(pFVar36,(FString *)local_340,Digits);
                    UE::Logging::Private::BasicLog<4>
                              (&::LOG_Static,(FLogCategoryBase *)&LogInstallChunkSource);
                    puVar29 = local_3a8;
                    if ((FScriptContainerElement *)local_340._0_8_ != (FScriptContainerElement *)0x0
                       ) {
                      FMemory::Free((void *)local_340._0_8_);
                      puVar29 = local_3a8;
                    }
                  }
                }
                else {
                  if ((pFVar36[1].A != 0) ||
                     (uVar31 = pFVar36[1].B, *(uint *)(pFVar18 + 0x30) != uVar31))
                  goto LAB_143280887;
                  uStack_328 = 0;
                  local_330 = lVar24;
                  uStack_324 = uVar31;
                  local_320 = lVar33;
                  if (((pFVar2->Data <= (FScriptContainerElement *)&local_330) &&
                      ((FScriptContainerElement *)&local_330 <
                       pFVar2->Data + (longlong)*(int *)(lVar26 + 0x1c) * 0x18)) &&
                     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar13)) {
                    pcVar9 = (code *)swi(3);
                    pFVar16 = (FInstallChunkSource *)(*pcVar9)();
                    return pFVar16;
                  }
                  iVar27 = *(int *)(lVar26 + 0x18);
                  if (iVar27 == *(int *)(lVar26 + 0x1c)) {
                    iVar27 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x818,pFVar2,(int *)(lVar26 + 0x1c));
                  }
                  *(int *)(lVar26 + 0x18) = iVar27 + 1;
                  lVar19 = *(longlong *)(lVar26 + 0x10);
                  plVar4 = (longlong *)(lVar19 + (longlong)iVar27 * 0x18);
                  *plVar4 = local_330;
                  plVar4[1] = CONCAT44(uStack_324,uStack_328);
                  *(longlong *)(lVar19 + 0x10 + (longlong)iVar27 * 0x18) = local_320;
                  *(undefined1 *)(lVar26 + 0x20) = 1;
                  puVar29 = local_3a8;
                }
              }
              else {
LAB_143280887:
                puVar29 = local_3a8;
                if (*(char *)(lVar26 + 0x20) == '\0') {
                  uVar17 = CityHash64((char *)pFVar36,0x10);
                  iVar27 = TSet<TTuple<FGuid,BuildPatchServices::FBlockStructure>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FBlockStructure,0>,FDefaultSetAllocator>
                           ::FindIndexByHash<FGuid>(&local_98,(uint)uVar17,pFVar36);
                  if ((iVar27 == -1) ||
                     (lVar24 = local_98.Elements._0_8_ + (longlong)iVar27 * 0x28, lVar24 == 0)) {
                    local_220 = pFVar36;
                    TSet<TTuple<FGuid,BuildPatchServices::FBlockStructure>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FBlockStructure,0>,FDefaultSetAllocator>
                    ::EmplaceByHash<TKeyInitializer<FGuid_const_&>_>
                              (&local_98,(uint)&local_374,
                               (TKeyInitializer<FGuid_const_&> *)(uVar17 & 0xffffffff),
                               (bool *)&local_220);
                    lVar24 = local_98.Elements._0_8_ + (longlong)local_374 * 0x28;
                  }
                  this_00 = (FBlockStructure *)(lVar24 + 0x10);
                  FBlockStructure::Add
                            (this_00,(ulonglong)pFVar36[1].A,(ulonglong)pFVar36[1].B,FromEnd);
                  local_318 = local_390;
                  local_308 = local_398;
                  uStack_310 = pFVar36[1].A;
                  uStack_30c = pFVar36[1].B;
                  if (((pFVar2->Data <= (FScriptContainerElement *)&local_318) &&
                      ((FScriptContainerElement *)&local_318 <
                       pFVar2->Data + (longlong)*(int *)(lVar26 + 0x1c) * 0x18)) &&
                     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar13)) {
                    pcVar9 = (code *)swi(3);
                    pFVar16 = (FInstallChunkSource *)(*pcVar9)();
                    return pFVar16;
                  }
                  iVar27 = *(int *)(lVar26 + 0x18);
                  if (iVar27 == *(int *)(lVar26 + 0x1c)) {
                    iVar27 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x818,pFVar2,(int *)(lVar26 + 0x1c));
                  }
                  *(int *)(lVar26 + 0x18) = iVar27 + 1;
                  lVar24 = *(longlong *)(lVar26 + 0x10);
                  puVar5 = (undefined4 *)(lVar24 + (longlong)iVar27 * 0x18);
                  *puVar5 = (undefined4)local_318;
                  puVar5[1] = local_318._4_4_;
                  puVar5[2] = uStack_310;
                  puVar5[3] = uStack_30c;
                  *(longlong *)(lVar24 + 0x10 + (longlong)iVar27 * 0x18) = local_308;
                  lVar19 = (**(code **)(**(longlong **)&local_3a0[0x10].field_0x0 + 0x218))
                                     (*(longlong **)&local_3a0[0x10].field_0x0,pFVar36);
                  pFVar20 = FBlockStructure::GetHead(this_00);
                  pFVar21 = FBlockStructure::GetTail(this_00);
                  puVar29 = local_3a8;
                  lVar33 = local_398;
                  lVar24 = local_390;
                  if (pFVar20 == pFVar21) {
                    pFVar20 = FBlockStructure::GetHead(this_00);
                    uVar17 = FBlockEntry::GetSize(pFVar20);
                    puVar29 = local_3a8;
                    lVar33 = local_398;
                    lVar24 = local_390;
                    if (uVar17 == *(uint *)(lVar19 + 0x30)) {
                      *(undefined1 *)(lVar26 + 0x20) = 1;
                      if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
                        uVar17 = CityHash64((char *)pFVar36,0x10);
                        TSet<TTuple<FGuid,BuildPatchServices::FBlockStructure>,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FBlockStructure,0>,FDefaultSetAllocator>
                        ::RemoveImpl<FGuid>(&local_98,(uint)uVar17,pFVar36);
                        puVar29 = local_3a8;
                        lVar33 = local_398;
                        lVar24 = local_390;
                      }
                    }
                  }
                }
              }
            }
            uVar35 = uVar35 + 1;
            local_298 = local_298 + 0x18;
            local_398 = lVar33 + (ulonglong)local_3ac;
            pFVar18 = local_3a0;
          } while ((int)uVar35 < *(int *)(lVar24 + 0x50));
        }
      }
      TStack_2c8.UnvisitedBitMask = TStack_2c8.UnvisitedBitMask & ~TStack_2c8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2c8);
    }
    iVar27 = 0;
    uStack_368 = 0;
    uStack_364 = 1;
    local_350 = 0;
    uStack_354 = 0;
    if (local_110 != 0) {
      puVar32 = (uint *)(local_138 + 0x10);
      if (local_118 != (uint *)0x0) {
        puVar32 = local_118;
      }
      uVar31 = *puVar32;
      uStack_368 = 0;
      local_350 = 0;
      while (uVar31 == 0) {
        lVar24 = (longlong)(int)uStack_368;
        local_350 = local_350 + 0x20;
        uStack_368 = uStack_368 + 1;
        uStack_354 = local_110;
        if ((int)((local_110 - 1) + ((int)(local_110 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_368)
        goto LAB_143280b53;
        uVar31 = (puVar32 + 1)[lVar24];
      }
      uStack_364 = -uVar31 & uVar31;
      uVar6 = (ulonglong)uStack_364 * 2 + 1;
      lVar24 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      local_238 = (int)lVar24;
      uStack_354 = local_350 + -1 + local_238;
      if ((int)local_110 < (int)uStack_354) {
        uStack_354 = local_110;
      }
    }
LAB_143280b53:
    local_370 = (TMultiMap<FString,TSharedRef<FBuildPatchAppManifest,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,1>_>
                 *)local_138;
    uStack_34c = local_13c;
    local_360 = (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10);
    uVar31 = local_110 & 0xffffffe0;
    iStack_348 = local_138._8_4_ - local_104;
    TStack_2f8._padding_ = CONCAT44(uStack_364,uStack_368);
    uStack_358 = 0xffffffff;
    TStack_2f8.CurrentBitIndex = uStack_354;
    TStack_2f8.UnvisitedBitMask = 0xffffffff;
    iVar28 = (int)local_110 >> 5;
    TStack_2f8._28_4_ = local_13c;
    TStack_2f8.BaseBitIndex = local_350;
    local_2d8 = CONCAT44(uStack_344,iStack_348);
    bVar23 = (byte)local_110;
    local_300 = local_370;
    TStack_2f8.Array = local_360;
    if (((int)local_110 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      pFVar16 = (FInstallChunkSource *)(*pcVar9)();
      return pFVar16;
    }
    if (uVar35 != local_110) {
      puVar32 = (uint *)(local_138 + 0x10);
      if (local_118 != (uint *)0x0) {
        puVar32 = local_118;
      }
      uVar35 = -1 << (bVar23 & 0x1f) & puVar32[iVar28];
      while (uVar35 == 0) {
        lVar24 = (longlong)iVar28;
        uVar31 = uVar31 + 0x20;
        iVar28 = iVar28 + 1;
        uVar35 = local_110;
        if ((int)((local_110 - 1) + ((int)(local_110 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar28)
        goto LAB_143280c74;
        uVar35 = (puVar32 + 1)[lVar24];
      }
      uVar6 = (ulonglong)(-uVar35 & uVar35) * 2 + 1;
      lVar24 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      local_234 = (int)lVar24;
      uVar35 = local_234 + -1 + uVar31;
      if ((int)local_110 < (int)uVar35) {
        uVar35 = local_110;
      }
    }
LAB_143280c74:
    uVar31 = 0;
    while( true ) {
      pTVar11 = local_300;
      if (*(int *)&local_300->field_0x8 - *(int *)&local_300->field_0x34 != (int)local_2d8) {
        local_3ae[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FGuid,`BuildPatchServices::FInstallChunkSource::FInstallChunkSource'::__l6::FChunkAssemblyInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_3ae);
      }
      if (((TStack_2f8.CurrentBitIndex == uVar35) &&
          (TStack_2f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10))) &&
         (pTVar11 ==
          (TMultiMap<FString,TSharedRef<FBuildPatchAppManifest,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,1>_>
           *)local_138)) break;
      pFVar36 = (FGuid *)((longlong)TStack_2f8.CurrentBitIndex * 0x30 + *(longlong *)pTVar11);
      if ((char)pFVar36[2].A == '\0') {
        uVar31 = uVar31 + 1;
      }
      else {
        uVar17 = CityHash64((char *)pFVar36,0x10);
        pFVar22 = (FGuid *)TMapBase<FGuid,TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_>,0>_>
                           ::FindOrAddImpl<FGuid_const_&>
                                     ((TMapBase<FGuid,TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_>,0>_>
                                       *)local_218,(uint)uVar17,pFVar36);
        if (pFVar22->C == 0) {
          pFVar3 = pFVar36 + 1;
          if (pFVar22 != pFVar3) {
            if (*(void **)pFVar22 != (void *)0x0) {
              FMemory::Free(*(void **)pFVar22);
            }
            uVar34 = pFVar3->B;
            pFVar22->A = pFVar3->A;
            pFVar22->B = uVar34;
            pFVar3->A = 0;
            pFVar3->B = 0;
            pFVar22->C = pFVar36[1].C;
            pFVar22->D = pFVar36[1].D;
            pFVar36[1].C = 0;
            pFVar36[1].D = 0;
          }
          iVar27 = iVar27 + 1;
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                    (local_210,(FGuid *)local_208,(bool *)pFVar36);
        }
      }
      TStack_2f8.UnvisitedBitMask = TStack_2f8.UnvisitedBitMask & ~TStack_2f8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2f8);
    }
    local_3ac = uVar31;
    if (5 < (byte)LogInstallChunkSource._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogInstallChunkSource);
    }
    uVar8 = local_208._8_8_;
    pFVar18 = local_3a0;
    if (iVar27 != 0) {
      pFVar30 = ((ForAnyElementType *)local_208._8_8_)->Data;
      if (((pFVar30 <= local_3a0) &&
          (local_3a0 < pFVar30 + (longlong)*(int *)(local_208._8_8_ + 0xc) * 0x20)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar9 = (code *)swi(3);
        pFVar16 = (FInstallChunkSource *)(*pcVar9)();
        return pFVar16;
      }
      iVar27 = *(int *)(uVar8 + 8);
      if (iVar27 == *(int *)(uVar8 + 0xc)) {
        iVar27 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,(ForAnyElementType *)uVar8,(int *)(uVar8 + 0xc));
      }
      *(int *)(uVar8 + 8) = iVar27 + 1;
      pFVar30 = ((ForAnyElementType *)uVar8)->Data + (longlong)iVar27 * 0x20;
      ::FString::FString((FString *)pFVar30,(FString *)pFVar18);
      *(undefined8 *)&pFVar30[0x10].field_0x0 = *(undefined8 *)&pFVar18[0x10].field_0x0;
      lVar24 = *(longlong *)(pFVar18 + 0x18);
      *(longlong *)(pFVar30 + 0x18) = lVar24;
      if (lVar24 != 0) {
        LOCK();
        *(int *)(lVar24 + 8) = *(int *)(lVar24 + 8) + 1;
        UNLOCK();
      }
    }
    local_f0 = 0;
    if (local_f8 != (void *)0x0) {
      FMemory::Free(local_f8);
    }
    TSparseArray<TSparseSetElement<TTuple<FGuid,`BuildPatchServices::FInstallChunkSource::FInstallChunkSource'::__l6::FChunkAssemblyInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FGuid,_BuildPatchServices::FInstallChunkSource::FInstallChunkSource_::__l6::FChunkAssemblyInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (local_138);
    local_98.HashSize = 0;
    if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FGuid,BuildPatchServices::FBlockStructure>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FGuid,BuildPatchServices::FBlockStructure>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_98.Elements);
    local_a0 = 0;
    if (local_a8 != (void *)0x0) {
      FMemory::Free(local_a8);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_e8);
    TStack_1f0.UnvisitedBitMask = TStack_1f0.UnvisitedBitMask & ~TStack_1f0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1f0);
  } while( true );
}

// ~FInstallChunkSource @ 1432884a0

void __thiscall
BuildPatchServices::FInstallChunkSource::~FInstallChunkSource(FInstallChunkSource *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<FSetElementId> FVar3;
  
  this->_padding_ = (longlong)&___7FInstallChunkSource_BuildPatchServices__6B_;
  *(undefined4 *)&(this->ChunkSources).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ChunkSources).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChunkSources);
  *(undefined4 *)&(this->FileRetirementPositions).field_0x48 = 0;
  pvVar1 = *(void **)&(this->FileRetirementPositions).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FileRetirementPositions);
  *(undefined4 *)&(this->OpenedFileHandles).field_0x48 = 0;
  pvVar1 = *(void **)&(this->OpenedFileHandles).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<BuildPatchServices::FInstallChunkSource::FOpenedFile,TDefaultDelete<BuildPatchServices::FInstallChunkSource::FOpenedFile>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<BuildPatchServices::FInstallChunkSource::FOpenedFile,TDefaultDelete<BuildPatchServices::FInstallChunkSource::FOpenedFile>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TUniquePtr<BuildPatchServices::FInstallChunkSource::FOpenedFile,TDefaultDelete<BuildPatchServices::FInstallChunkSource::FOpenedFile>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OpenedFileHandles);
  DestructItems<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>,int>
            ((TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_> *)
             (this->InstallationSources).AllocatorInstance.Data,(this->InstallationSources).ArrayNum
            );
  pFVar2 = (this->InstallationSources).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  (this->AvailableInBuilds).HashSize = 0;
  FVar3 = (this->AvailableInBuilds).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->AvailableInBuilds).Elements);
  this->_padding_ = (longlong)&___7IConstructorChunkSource_BuildPatchServices__6B_;
  return;
}

// operator() @ 1432a6f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`BuildPatchServices::FInstallChunkSource::CreateRequest'::__l2::<lambda_2>::operator()
          (void *this,bool param_1)

{
  FGuid *pFVar1;
  atomic<unsigned_int> *paVar2;
  FMutex FVar3;
  atomic<unsigned_char> aVar4;
  atomic<unsigned_int> aVar5;
  ForElementType<UE::Tasks::Private::FTaskBase_*> FVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_>
  *pTVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  FBlockStructure *this_00;
  FBlockEntry *pFVar15;
  FBlockEntry *pFVar16;
  ulong64 uVar17;
  FTaskBase *this_01;
  atomic<unsigned_char> *paVar18;
  ForAnyElementType FVar19;
  undefined8 *puVar20;
  longlong lVar21;
  undefined8 *puVar22;
  FScriptContainerElement *pFVar23;
  bool bVar24;
  undefined1 auStackY_288 [32];
  undefined1 local_257;
  undefined1 local_256;
  undefined1 local_255 [5];
  FString local_250;
  uint local_240;
  undefined8 *local_238;
  FRecord local_230;
  FBlockStructure local_218;
  FString local_208;
  longlong *local_1f8;
  longlong local_1f0;
  FBlockStructure local_1e8;
  longlong local_1d8;
  longlong lStack_1d0;
  longlong local_1c8;
  longlong local_1c0;
  longlong lStack_1b8;
  longlong local_1b0;
  undefined1 local_1a8 [8];
  ForAnyElementType FStack_1a0;
  int local_198;
  atomic<unsigned___int64> local_190;
  atomic<unsigned___int64> aStack_188;
  ulong64 local_180;
  ForElementType<UE::Tasks::Private::FTaskBase_*> local_178;
  TPairInitializer<FString_const_&,TUniquePtr<BuildPatchServices::FInstallChunkSource::FOpenedFile,TDefaultDelete<BuildPatchServices::FInstallChunkSource::FOpenedFile>_>_&&>
  local_170;
  TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_>
  *local_160;
  FString *local_158;
  longlong **local_150;
  FDestructionSentinel local_148;
  FBlockStructure local_130;
  TStringBuilderBase<wchar_t> local_118;
  wchar_t local_f8 [40];
  TStringBuilderBase<wchar_t> local_a8;
  wchar_t local_88 [40];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_288;
  BuildPatchServices::ISpeedRecorder::FRecord::FRecord(&local_230);
  local_230.CyclesStart = BuildPatchServices::FStatsCollector::GetCycles();
  pFVar1 = (FGuid *)((longlong)this + 0x20);
  (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x10))
            (*(longlong **)(*(longlong *)this + 0x10),pFVar1);
  bVar24 = -1 < CpuChannel->Enabled;
  if (bVar24) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId375,"InstallRead",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\InstallChunkSource.cpp"
               ,0x177);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId375);
  }
  if (param_1) {
    local_230.CyclesEnd = local_230.CyclesStart;
    plVar13 = *(longlong **)(*(longlong *)this + 0x10);
    local_257 = 6;
    (**(code **)(*plVar13 + 0x18))(plVar13,pFVar1,&local_257);
    TDelegate<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy>::Execute
              ((TDelegate<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy> *
               )((longlong)this + 0x48),pFVar1,true,false,*(void **)((longlong)this + 0x40));
  }
  else {
    pTVar12 = TMapBase<FGuid,TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_>,0>_>
              ::Find((TMapBase<FGuid,TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_>,0>_>
                      *)(*(longlong *)this + 0x120),pFVar1);
    local_160 = pTVar12;
    local_170.Value =
         (TUniquePtr<BuildPatchServices::FInstallChunkSource::FOpenedFile,TDefaultDelete<BuildPatchServices::FInstallChunkSource::FOpenedFile>_>
          *)(**(code **)(**(longlong **)((longlong)this + 8) + 0x218))
                      (*(longlong **)((longlong)this + 8),pFVar1);
    if ((local_170.Value ==
         (TUniquePtr<BuildPatchServices::FInstallChunkSource::FOpenedFile,TDefaultDelete<BuildPatchServices::FInstallChunkSource::FOpenedFile>_>
          *)0x0) ||
       (pTVar12 ==
        (TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_>
         *)0x0)) {
      local_230.CyclesEnd = BuildPatchServices::FStatsCollector::GetCycles();
      local_255[0] = 2;
      (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x18))
                (*(longlong **)(*(longlong *)this + 0x10),pFVar1,local_255,&local_230);
      TDelegate<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy>::Execute
                ((TDelegate<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy>
                  *)((longlong)this + 0x48),pFVar1,false,true,*(void **)((longlong)this + 0x40));
    }
    else {
      BuildPatchServices::FBlockStructure::FBlockStructure(&local_218);
      iVar11 = pTVar12->ArrayNum;
      local_240 = 0;
      bVar8 = false;
      if (0 < iVar11) {
        local_1f0 = 0;
        do {
          lVar21 = local_1f0;
          if (bVar8) break;
          uVar10 = 0;
          if ((int)local_240 < iVar11) {
            uVar10 = ~local_240 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar23 = (pTVar12->AllocatorInstance).Data + lVar21;
          if (*(ulonglong *)((longlong)this + 0x38) <
              (ulonglong)(uint)(*(int *)(pFVar23 + 8) + *(int *)(pFVar23 + 0xc))) {
            if (1 < (byte)LogInstallChunkSource._0_1_) {
              local_118.Base = local_f8;
              local_118.bIsDynamic = false;
              local_118.bIsExternal = false;
              local_118.CurPos = local_f8;
              local_118.End = (wchar_t *)&local_a8;
              FGuid::AppendString((FGuid *)((longlong)this + 0x20),&local_118,DigitsWithHyphensLower
                                 );
              if (local_118.End < (TStringBuilderBase<wchar_t> *)(local_118.CurPos + 1)) {
                TStringBuilderBase<wchar_t>::Extend(&local_118,1);
              }
              *local_118.CurPos = L'\0';
              UE::Logging::Private::BasicLog<2>
                        (&::LOG_Static,(FLogCategoryBase *)&LogInstallChunkSource);
              TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_118);
              goto LAB_1432a7513;
            }
            break;
          }
          ::operator/(&local_250,(FString *)((longlong)this + 0x10),*(FString **)pFVar23);
          puVar20 = (undefined8 *)0x0;
          paVar18 = (atomic<unsigned_char> *)(*(longlong *)this + 0x78);
          LOCK();
          FVar3.State = *paVar18;
          if (FVar3.State == (atomic<unsigned_char>)0x0) {
            *paVar18 = (atomic<unsigned_char>)0x1;
          }
          UNLOCK();
          if (FVar3.State != (atomic<unsigned_char>)0x0) {
            UE::FMutex::LockSlow((FMutex *)paVar18);
          }
          lVar21 = *(longlong *)this;
          FVar19.Data = (FScriptContainerElement *)L"";
          if (local_250.Data.ArrayNum != 0) {
            FVar19.Data = local_250.Data.AllocatorInstance.Data;
          }
          iVar11 = local_250.Data.ArrayNum + -1;
          if (local_250.Data.ArrayNum == 0) {
            iVar11 = 0;
          }
          uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)FVar19.Data);
          iVar11 = TSet<TTuple<FString,TUniquePtr<BuildPatchServices::FInstallChunkSource::FOpenedFile,TDefaultDelete<BuildPatchServices::FInstallChunkSource::FOpenedFile>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<BuildPatchServices::FInstallChunkSource::FOpenedFile,TDefaultDelete<BuildPatchServices::FInstallChunkSource::FOpenedFile>_>,0>,FDefaultSetAllocator>
                   ::FindIndexByHash<FString>
                             ((TSet<TTuple<FString,TUniquePtr<BuildPatchServices::FInstallChunkSource::FOpenedFile,TDefaultDelete<BuildPatchServices::FInstallChunkSource::FOpenedFile>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<BuildPatchServices::FInstallChunkSource::FOpenedFile,TDefaultDelete<BuildPatchServices::FInstallChunkSource::FOpenedFile>_>,0>,FDefaultSetAllocator>
                               *)(lVar21 + 0x80),uVar10,&local_250);
          puVar22 = puVar20;
          if (iVar11 == -1) {
LAB_1432a71af:
            bVar9 = -1 < CpuChannel->Enabled;
            if (bVar9) {
              FCpuProfilerTrace::GetOrCreateSpecId
                        (&__CpuProfilerEventSpecId436,"Install_OpenSource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\InstallChunkSource.cpp"
                         ,0x1b4);
              FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId436);
            }
            (**(code **)(**(longlong **)(*(longlong *)this + 8) + 0x48))();
            if (local_238 != (undefined8 *)0x0) {
              plVar13 = ::operator_new(0x10);
              local_1f8 = (longlong *)0x0;
              if (plVar13 != (longlong *)0x0) {
                *plVar13 = (longlong)local_238;
                local_238 = (undefined8 *)0x0;
                *(undefined1 *)(plVar13 + 1) = 0;
                local_1f8 = plVar13;
              }
              local_158 = &local_250;
              local_150 = &local_1f8;
              TSet<TTuple<FString,TUniquePtr<BuildPatchServices::FInstallChunkSource::FOpenedFile,TDefaultDelete<BuildPatchServices::FInstallChunkSource::FOpenedFile>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<BuildPatchServices::FInstallChunkSource::FOpenedFile,TDefaultDelete<BuildPatchServices::FInstallChunkSource::FOpenedFile>_>,0>,FDefaultSetAllocator>
              ::
              Emplace<TPairInitializer<FString_const_&,TUniquePtr<BuildPatchServices::FInstallChunkSource::FOpenedFile,TDefaultDelete<BuildPatchServices::FInstallChunkSource::FOpenedFile>_>_&&>_>
                        ((TSet<TTuple<FString,TUniquePtr<BuildPatchServices::FInstallChunkSource::FOpenedFile,TDefaultDelete<BuildPatchServices::FInstallChunkSource::FOpenedFile>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<BuildPatchServices::FInstallChunkSource::FOpenedFile,TDefaultDelete<BuildPatchServices::FInstallChunkSource::FOpenedFile>_>,0>,FDefaultSetAllocator>
                          *)(*(longlong *)this + 0x80),&local_170,(bool *)&local_158);
              lVar21 = *(longlong *)this;
              iVar11 = local_250.Data.ArrayNum + -1;
              FVar19.Data = local_250.Data.AllocatorInstance.Data;
              if (local_250.Data.ArrayNum == 0) {
                iVar11 = 0;
                FVar19.Data = (FScriptContainerElement *)L"";
              }
              uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)FVar19.Data);
              iVar11 = TSet<TTuple<FString,TUniquePtr<BuildPatchServices::FInstallChunkSource::FOpenedFile,TDefaultDelete<BuildPatchServices::FInstallChunkSource::FOpenedFile>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<BuildPatchServices::FInstallChunkSource::FOpenedFile,TDefaultDelete<BuildPatchServices::FInstallChunkSource::FOpenedFile>_>,0>,FDefaultSetAllocator>
                       ::FindIndexByHash<FString>
                                 ((TSet<TTuple<FString,TUniquePtr<BuildPatchServices::FInstallChunkSource::FOpenedFile,TDefaultDelete<BuildPatchServices::FInstallChunkSource::FOpenedFile>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<BuildPatchServices::FInstallChunkSource::FOpenedFile,TDefaultDelete<BuildPatchServices::FInstallChunkSource::FOpenedFile>_>,0>,FDefaultSetAllocator>
                                   *)(lVar21 + 0x80),uVar10,&local_250);
              plVar13 = local_1f8;
              puVar14 = puVar20;
              if (iVar11 != -1) {
                puVar14 = (undefined8 *)((longlong)iVar11 * 0x20 + *(longlong *)(lVar21 + 0x80));
              }
              puVar22 = puVar14 + 2;
              if (puVar14 == (undefined8 *)0x0) {
                puVar22 = puVar20;
              }
              if (local_1f8 != (longlong *)0x0) {
                puVar14 = (undefined8 *)*local_1f8;
                if (puVar14 != (undefined8 *)0x0) {
                  (**(code **)*puVar14)(puVar14,1);
                }
                ::operator_delete(plVar13,0x10);
              }
              if (local_238 != (undefined8 *)0x0) {
                (**(code **)*local_238)(local_238,1);
              }
            }
            if (bVar9) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            if (puVar22 != (undefined8 *)0x0) goto LAB_1432a731b;
          }
          else {
            lVar21 = (longlong)iVar11 * 0x20 + *(longlong *)(lVar21 + 0x80);
            puVar22 = (undefined8 *)(lVar21 + 0x10);
            if (lVar21 == 0) {
              puVar22 = puVar20;
            }
            if (puVar22 == (undefined8 *)0x0) goto LAB_1432a71af;
LAB_1432a731b:
            puVar20 = (undefined8 *)*puVar22;
          }
          paVar18 = (atomic<unsigned_char> *)(*(longlong *)this + 0x78);
          LOCK();
          aVar4 = *paVar18;
          *paVar18 = (atomic<unsigned_char>)((char)*paVar18 + -1);
          UNLOCK();
          if (((byte)aVar4 & 2) != 0) {
            UE::FMutex::WakeWaitingThread((FMutex *)paVar18);
          }
          if (puVar20 == (undefined8 *)0x0) {
            if (1 < (byte)LogInstallChunkSource._0_1_) {
              local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_208.Data.ArrayNum = 0;
              local_208.Data.ArrayMax = 0;
              FGuid::AppendString((FGuid *)((longlong)this + 0x20),&local_208,Digits);
              UE::Logging::Private::BasicLog<2>
                        (&::LOG_Static,(FLogCategoryBase *)&LogInstallChunkSource);
              if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_208.Data.AllocatorInstance.Data);
              }
            }
            if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_250.Data.AllocatorInstance.Data);
            }
            goto LAB_1432a7513;
          }
          paVar18 = (atomic<unsigned_char> *)(puVar20 + 1);
          LOCK();
          FVar3.State = *paVar18;
          if (FVar3.State == (atomic<unsigned_char>)0x0) {
            *paVar18 = (atomic<unsigned_char>)0x1;
          }
          UNLOCK();
          if (FVar3.State != (atomic<unsigned_char>)0x0) {
            UE::FMutex::LockSlow((FMutex *)paVar18);
          }
          bVar9 = -1 < CpuChannel->Enabled;
          if (bVar9) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId464,"Install_Serialize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\InstallChunkSource.cpp"
                       ,0x1d0);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId464);
          }
          (**(code **)(*(longlong *)*puVar20 + 0x1b8))
                    ((longlong *)*puVar20,*(undefined8 *)(pFVar23 + 0x10));
          (**(code **)(*(longlong *)*puVar20 + 0x188))
                    ((longlong *)*puVar20,
                     (ulonglong)*(uint *)(pFVar23 + 8) + *(longlong *)((longlong)this + 0x30),
                     *(undefined4 *)(pFVar23 + 0xc));
          local_230.Size = local_230.Size + *(uint *)(pFVar23 + 0xc);
          BuildPatchServices::FBlockStructure::FBlockStructure(&local_1e8);
          BuildPatchServices::FBlockStructure::Add
                    (&local_1e8,(ulonglong)*(uint *)(pFVar23 + 8),
                     (ulonglong)*(uint *)(pFVar23 + 0xc),FromStart);
          this_00 = BuildPatchServices::FBlockStructure::Intersect(&local_1e8,&local_130,&local_218)
          ;
          pFVar15 = BuildPatchServices::FBlockStructure::GetHead(this_00);
          BuildPatchServices::FBlockStructure::~FBlockStructure(&local_130);
          if (pFVar15 != (FBlockEntry *)0x0) {
            LOCK();
            aVar4 = *paVar18;
            *paVar18 = (atomic<unsigned_char>)((char)*paVar18 + -1);
            UNLOCK();
            if (((byte)aVar4 & 2) != 0) {
              UE::FMutex::WakeWaitingThread((FMutex *)paVar18);
            }
            if (1 < (byte)LogInstallChunkSource._0_1_) {
              local_a8.Base = local_88;
              local_a8.bIsDynamic = false;
              local_a8.bIsExternal = false;
              local_a8.CurPos = local_88;
              local_a8.End = (wchar_t *)local_38;
              FGuid::AppendString((FGuid *)((longlong)this + 0x20),&local_a8,DigitsWithHyphensLower)
              ;
              TStringBuilderBase<wchar_t>::operator*(&local_a8);
              UE::Logging::Private::BasicLog<2>
                        (&::LOG_Static,(FLogCategoryBase *)&LogInstallChunkSource);
              TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_a8);
            }
            BuildPatchServices::FBlockStructure::~FBlockStructure(&local_1e8);
            if (bVar9) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            LOCK();
            aVar4 = *paVar18;
            *paVar18 = (atomic<unsigned_char>)((char)*paVar18 + -1);
            UNLOCK();
            if (((byte)aVar4 & 2) != 0) {
              UE::FMutex::WakeWaitingThread((FMutex *)paVar18);
            }
            if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_250.Data.AllocatorInstance.Data);
              goto LAB_1432a7513;
            }
            break;
          }
          BuildPatchServices::FBlockStructure::Add
                    (&local_218,(ulonglong)*(uint *)(pFVar23 + 8),
                     (ulonglong)*(uint *)(pFVar23 + 0xc),FromStart);
          BuildPatchServices::FBlockStructure::~FBlockStructure(&local_1e8);
          if (bVar9) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          LOCK();
          aVar4 = *paVar18;
          *paVar18 = (atomic<unsigned_char>)((char)*paVar18 + -1);
          UNLOCK();
          if (((byte)aVar4 & 2) != 0) {
            UE::FMutex::WakeWaitingThread((FMutex *)paVar18);
          }
          pFVar15 = BuildPatchServices::FBlockStructure::GetHead(&local_218);
          if (pFVar15 == (FBlockEntry *)0x0) {
LAB_1432a74b3:
            bVar8 = false;
          }
          else {
            pFVar15 = BuildPatchServices::FBlockStructure::GetHead(&local_218);
            pFVar16 = BuildPatchServices::FBlockStructure::GetTail(&local_218);
            if (pFVar15 != pFVar16) goto LAB_1432a74b3;
            uVar10 = *(uint *)&local_170.Value[6].Ptr;
            pFVar15 = BuildPatchServices::FBlockStructure::GetHead(&local_218);
            uVar17 = BuildPatchServices::FBlockEntry::GetSize(pFVar15);
            if (uVar17 != uVar10) goto LAB_1432a74b3;
            bVar8 = true;
          }
          if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_250.Data.AllocatorInstance.Data);
          }
          local_240 = local_240 + 1;
          local_1f0 = local_1f0 + 0x18;
          iVar11 = local_160->ArrayNum;
          pTVar12 = local_160;
        } while ((int)local_240 < iVar11);
      }
      if (bVar8) {
        local_230.CyclesEnd = BuildPatchServices::FStatsCollector::GetCycles();
        local_1d8 = *(longlong *)((longlong)this + 0x20);
        lStack_1d0 = *(longlong *)((longlong)this + 0x28);
        FVar6 = *(ForElementType<UE::Tasks::Private::FTaskBase_*> *)(*(longlong *)this + 0x10);
        local_1c8 = *(longlong *)((longlong)this + 0x40);
        local_1c0 = *(longlong *)((longlong)this + 0x30);
        lStack_1b8 = *(longlong *)((longlong)this + 0x38);
        local_1b0 = *(longlong *)((longlong)this + 8);
        local_198 = 0;
        local_1a8 = (undefined1  [8])0x0;
        FStack_1a0.Data = (FScriptContainerElement *)0x0;
        TDelegate<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy>::
        CopyFrom<FDefaultDelegateUserPolicy>
                  ((TDelegate<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy>
                    *)local_1a8,
                   (TDelegate<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy>
                    *)((longlong)this + 0x48));
        local_190 = (atomic<unsigned___int64>)local_230.CyclesStart;
        aStack_188 = (atomic<unsigned___int64>)local_230.CyclesEnd;
        local_180 = local_230.Size;
        local_178 = FVar6;
        this_01 = FMemory::Malloc(0x140,0x40);
        if (this_01 == (FTaskBase *)0x0) {
          UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x140);
        }
        else {
          UE::Tasks::Private::FTaskBase::FTaskBase(this_01,2,true);
          this_01->_padding_ =
               (longlong)
               &UE::Tasks::Private::
                TExecutableTaskBase<``BuildPatchServices::FInstallChunkSource::CreateRequest'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>,void,void>
                ::_vftable_;
          UE::Tasks::Private::FTaskBase::Init(this_01,L"Install_Hash",Default,None,None);
          this_01[1]._padding_ = local_1d8;
          this_01[1]._padding_ = lStack_1d0;
          this_01[1]._padding_ = local_1c8;
          this_01[1]._padding_ = local_1c0;
          this_01[1]._padding_ = lStack_1b8;
          this_01[1]._padding_ = local_1b0;
          TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this_01[1].RefCount,
                     (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a8);
          *(atomic<unsigned___int64> *)&this_01[1].ExecutingThreadId = local_190;
          this_01[1].TraceId = aStack_188;
          *(ulong64 *)this_01[1].Prerequisites.Prerequisites.AllocatorInstance.InlineData =
               local_180;
          this_01[1].Prerequisites.Prerequisites.AllocatorInstance.SecondaryData = local_178;
          this_01->_padding_ =
               (longlong)
               &UE::Tasks::Private::
                TExecutableTask<``BuildPatchServices::FInstallChunkSource::CreateRequest'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>_>
                ::_vftable_;
          UE::Tasks::Private::FTaskBase::TryLaunch(this_01,0x140);
          LOCK();
          paVar2 = &this_01->RefCount;
          aVar5 = *paVar2;
          *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
          UNLOCK();
          if (aVar5 == (atomic<unsigned_int>)0x1) {
            (**(code **)this_01->_padding_)(this_01,1);
          }
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a8,
                   (FWriteAccessScope *)&local_148);
        if ((local_198 != 0) && (FStack_1a0.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_1a0.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1a0,0,0,0x10)
          ;
          local_198 = 0;
        }
        if (local_148.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_148.Accessor,&local_148);
        }
        if (FStack_1a0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_1a0.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_1a8);
      }
      else {
LAB_1432a7513:
        local_230.CyclesEnd = BuildPatchServices::FStatsCollector::GetCycles();
        local_256 = 2;
        (**(code **)(**(longlong **)(*(longlong *)this + 0x10) + 0x18))
                  (*(longlong **)(*(longlong *)this + 0x10),(longlong)this + 0x20,&local_256,
                   &local_230);
        TDelegate<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy>::Execute
                  ((TDelegate<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy>
                    *)((longlong)this + 0x48),(FGuid *)((longlong)this + 0x20),false,true,
                   *(void **)((longlong)this + 0x40));
      }
      BuildPatchServices::FBlockStructure::~FBlockStructure(&local_218);
    }
  }
  if (bVar24) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CreateRequest @ 1432cb6b0

TUniqueFunction<void___cdecl(bool)> * __thiscall
BuildPatchServices::FInstallChunkSource::CreateRequest
          (FInstallChunkSource *this,TUniqueFunction<void___cdecl(bool)> *__return_storage_ptr__,
          FGuid *param_1,TMemoryView<void> *param_2,void *param_3,
          TDelegate<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy>
          *param_4)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  FString local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  void *local_78;
  ulong64 uStack_70;
  void *local_68;
  undefined1 local_60 [8];
  ForAnyElementType FStack_58;
  int local_50;
  FDestructionSentinel local_48;
  
  iVar1 = (this->InstallationSources).ArrayNum;
  pFVar6 = (this->InstallationSources).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x20;
  while( true ) {
    if ((this->InstallationSources).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar7) goto LAB_1432cb891;
    cVar3 = (**(code **)(**(longlong **)&pFVar6[0x10].field_0x0 + 0x208))
                      (*(longlong **)&pFVar6[0x10].field_0x0,param_1);
    if (cVar3 != '\0') break;
    pFVar6 = pFVar6 + 0x20;
  }
  lVar2 = *(longlong *)&pFVar6[0x10].field_0x0;
  if ((pFVar6 == (FScriptContainerElement *)0x0) || (lVar2 == 0)) {
LAB_1432cb891:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_4,
               (FReadAccessScope *)&local_48);
    plVar5 = (longlong *)0x0;
    if (*(int *)&param_4->field_0x10 != 0) {
      plVar5 = *(longlong **)&param_4->field_0x8;
    }
    (**(code **)(*plVar5 + 0x60))(plVar5,param_1,0,1,param_3);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_48);
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
    *(undefined ***)&__return_storage_ptr__->field_0x10 =
         &___7__TFunction_OwnedObject_P6AX_N_Z_00_0A__Function_Private_Core_UE__6B_;
    *(code **)&__return_storage_ptr__->field_0x18 =
         `BuildPatchServices::FInstallChunkSource::CreateRequest'::__l5::<lambda_1>::
         <lambda_invoker_cdecl>;
    if (&__return_storage_ptr__->field_0x18 != (undefined1 *)0x0) {
      *(code **)__return_storage_ptr__ =
           UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(bool),void,bool>::Call;
    }
  }
  else {
    ::FString::FString(&local_98,(FString *)pFVar6);
    local_88._0_4_ = param_1->A;
    local_88._4_4_ = param_1->B;
    uStack_80._0_4_ = param_1->C;
    uStack_80._4_4_ = param_1->D;
    local_78 = param_2->Data;
    uStack_70 = param_2->Size;
    local_68 = param_3;
    local_50 = 0;
    local_60 = (undefined1  [8])0x0;
    FStack_58.Data = (FScriptContainerElement *)0x0;
    TDelegate<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FGuid_const_&,bool,bool,void_*),FDefaultDelegateUserPolicy> *
               )local_60,param_4);
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
    puVar4 = FMemory::Malloc(0x68,8);
    *(undefined8 **)&__return_storage_ptr__->field_0x28 = puVar4;
    *puVar4 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`BuildPatchServices::FInstallChunkSource::CreateRequest'::`2'::<lambda_2>,1,1>
               ::_vftable_;
    puVar4[1] = this;
    puVar4[3] = 0;
    puVar4[2] = lVar2;
    puVar4[3] = local_98.Data.AllocatorInstance.Data;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar4 + 4) = local_98.Data.ArrayNum;
    *(int *)((longlong)puVar4 + 0x24) = local_98.Data.ArrayMax;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    puVar4[5] = local_88;
    puVar4[6] = uStack_80;
    puVar4[7] = local_78;
    puVar4[8] = uStack_70;
    puVar4[9] = local_68;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar4 + 10),
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_60);
    if (puVar4 + 1 != (undefined8 *)0x0) {
      *(code **)__return_storage_ptr__ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`BuildPatchServices::FInstallChunkSource::CreateRequest'::__l2::<lambda_2>,void,bool>
           ::Call;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_60,
               (FWriteAccessScope *)&local_48);
    if ((local_50 != 0) && (FStack_58.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_58.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_58,0,0,0x10);
      local_50 = 0;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (FStack_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_58.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_60);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4);
  return __return_storage_ptr__;
}

// EnumerateFilesForChunk @ 1432cf7f0

void __thiscall
BuildPatchServices::FInstallChunkSource::EnumerateFilesForChunk
          (FInstallChunkSource *this,FGuid *param_1,
          TUniqueFunction<void___cdecl(FString_const_&,FString_const_&)> *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  ulong64 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  longlong *plVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  undefined8 *puVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  FString local_48;
  
  iVar5 = (this->InstallationSources).ArrayNum;
  pFVar10 = (this->InstallationSources).AllocatorInstance.Data;
  pFVar12 = pFVar10 + (longlong)iVar5 * 0x20;
  lVar13 = 0;
  while( true ) {
    if ((this->InstallationSources).ArrayNum != iVar5) {
      `TCheckedPointerIterator<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    pFVar15 = (FScriptContainerElement *)0x0;
    if (pFVar10 == pFVar12) goto LAB_1432cf864;
    cVar4 = (**(code **)(**(longlong **)&pFVar10[0x10].field_0x0 + 0x208))
                      (*(longlong **)&pFVar10[0x10].field_0x0,param_1,local_res20);
    if (cVar4 != '\0') break;
    pFVar10 = pFVar10 + 0x20;
  }
  lVar13 = *(longlong *)&pFVar10[0x10].field_0x0;
  pFVar15 = pFVar10;
LAB_1432cf864:
  uVar6 = CityHash64((char *)param_1,0x10);
  iVar5 = TSet<TTuple<FGuid,TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&this->ChunkSources,(uint)uVar6,param_1);
  if (iVar5 == -1) {
    lVar9 = 0;
  }
  else {
    lVar9 = *(longlong *)&this->ChunkSources + (longlong)iVar5 * 0x28;
  }
  plVar11 = (longlong *)(lVar9 + 0x10);
  if (lVar9 == 0) {
    plVar11 = (longlong *)0x0;
  }
  if (((pFVar15 != (FScriptContainerElement *)0x0) && (lVar13 != 0)) && (plVar11 != (longlong *)0x0)
     ) {
    ::FString::FString(&local_48,(FString *)pFVar15);
    FPaths::NormalizeDirectoryName(&local_48);
    lVar13 = plVar11[1];
    puVar14 = (undefined8 *)*plVar11;
    puVar1 = puVar14 + (longlong)(int)lVar13 * 3;
    while( true ) {
      if ((int)plVar11[1] != (int)lVar13) {
        `TCheckedPointerIterator<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (puVar14 == puVar1) break;
      uVar2 = *puVar14;
      UE::Core::Private::Function::CheckCallable(*(void **)param_2);
      pcVar3 = *(code **)param_2;
      plVar8 = *(longlong **)&param_2->field_0x28;
      if (*(longlong **)&param_2->field_0x28 == (longlong *)0x0) {
        plVar8 = (longlong *)&param_2->field_0x10;
      }
      uVar7 = (**(code **)(*plVar8 + 8))();
      (*pcVar3)(uVar7,&local_48,uVar2);
      puVar14 = puVar14 + 3;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// FindChunkLocation @ 1432d0fa0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
BuildPatchServices::FInstallChunkSource::FindChunkLocation
          (FInstallChunkSource *this,FGuid *param_1,FString **param_2,
          FBuildPatchAppManifest **param_3)

{
  int iVar1;
  char cVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  
  *param_2 = (FString *)0x0;
  *param_3 = (FBuildPatchAppManifest *)0x0;
  iVar1 = (this->InstallationSources).ArrayNum;
  pFVar3 = (this->InstallationSources).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x20;
  while( true ) {
    if ((this->InstallationSources).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    cVar2 = (**(code **)(**(longlong **)&pFVar3[0x10].field_0x0 + 0x208))
                      (*(longlong **)&pFVar3[0x10].field_0x0,param_1,local_res18);
    if (cVar2 != '\0') {
      *param_2 = (FString *)pFVar3;
      *param_3 = *(FBuildPatchAppManifest **)&pFVar3[0x10].field_0x0;
      return;
    }
    pFVar3 = pFVar3 + 0x20;
  }
  return;
}

// GetAvailableChunks @ 1432d34f0

TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> * __thiscall
BuildPatchServices::FInstallChunkSource::GetAvailableChunks(FInstallChunkSource *this)

{
  return &this->AvailableInBuilds;
}

// GetChunkUnavailableAt @ 1432d3cb0

int __thiscall
BuildPatchServices::FInstallChunkSource::GetChunkUnavailableAt
          (FInstallChunkSource *this,FGuid *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  ulong64 uVar5;
  int *piVar6;
  FScriptContainerElement *pFVar7;
  undefined8 *puVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  longlong *plVar11;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  if (*(int *)&(this->FileRetirementPositions).field_0x8 !=
      *(int *)&(this->FileRetirementPositions).field_0x34) {
    iVar9 = (this->InstallationSources).ArrayNum;
    pFVar7 = (this->InstallationSources).AllocatorInstance.Data;
    pFVar10 = pFVar7 + (longlong)iVar9 * 0x20;
    while( true ) {
      if ((this->InstallationSources).ArrayNum != iVar9) {
        `TCheckedPointerIterator<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar7 == pFVar10) {
        return 0x7fffffff;
      }
      cVar3 = (**(code **)(**(longlong **)(pFVar7 + 0x10) + 0x208))
                        (*(longlong **)(pFVar7 + 0x10),param_1,local_res18);
      if (cVar3 != '\0') break;
      pFVar7 = pFVar7 + 0x20;
    }
    if ((pFVar7 != (FScriptContainerElement *)0x0) && (*(longlong *)(pFVar7 + 0x10) != 0)) {
      iVar9 = 0x7fffffff;
      uVar5 = CityHash64((char *)param_1,0x10);
      iVar4 = TSet<TTuple<FGuid,TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FGuid>
                        ((TSet<TTuple<FGuid,TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                          *)&this->ChunkSources,(uint)uVar5,param_1);
      if (iVar4 != -1) {
        lVar1 = *(longlong *)&this->ChunkSources + (longlong)iVar4 * 0x28;
        plVar11 = (longlong *)(lVar1 + 0x10);
        if (lVar1 == 0) {
          plVar11 = (longlong *)0x0;
        }
        if (plVar11 != (longlong *)0x0) {
          lVar1 = plVar11[1];
          puVar8 = (undefined8 *)*plVar11;
          puVar2 = puVar8 + (longlong)(int)lVar1 * 3;
          while( true ) {
            if ((int)plVar11[1] != (int)lVar1) {
              `TCheckedPointerIterator<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails_const_,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(local_res8);
            }
            if (puVar8 == puVar2) break;
            piVar6 = TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                     ::Find((TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                             *)&this->FileRetirementPositions,(FString *)*puVar8);
            if ((piVar6 != (int *)0x0) && (*piVar6 < iVar9)) {
              iVar9 = *piVar6;
            }
            puVar8 = puVar8 + 3;
          }
        }
      }
      return iVar9;
    }
  }
  return 0x7fffffff;
}

// GetChunksForFile @ 1432d3e00

void __thiscall
BuildPatchServices::FInstallChunkSource::GetChunksForFile
          (FInstallChunkSource *this,FString *param_1,
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_2)

{
  undefined1 *puVar1;
  bool *pbVar2;
  longlong *plVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  TMap<FGuid,TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar8;
  bool bVar9;
  FString *pFVar10;
  Type TVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  longlong *plVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  int iVar20;
  uint uVar21;
  undefined1 *puVar22;
  uint *puVar23;
  undefined1 local_res8 [8];
  undefined8 local_res20;
  undefined1 local_d8 [8];
  FString local_d0;
  TMap<FGuid,TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_>,0>_>
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
  undefined1 local_8c [12];
  TMap<FGuid,TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_>,0>_>
  *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  FString local_50;
  
  iVar5 = (this->InstallationSources).ArrayNum;
  pFVar15 = (this->InstallationSources).AllocatorInstance.Data;
  pFVar18 = pFVar15 + (longlong)iVar5 * 0x20;
  local_res20 = 1;
  iVar20 = 0;
  while( true ) {
    TVar11 = (Type)local_res20;
    if ((this->InstallationSources).ArrayNum != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
      TVar11 = (Type)local_res20;
    }
    if (pFVar15 == pFVar18) {
      return;
    }
    iVar14 = 0;
    if (*(int *)(pFVar15 + 8) == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = *(wchar_t **)&pFVar15->field_0x0;
      iVar14 = *(int *)(pFVar15 + 8) + -1;
    }
    bVar9 = ::FString::StartsWith(param_1,pwVar13,iVar14,TVar11);
    if (bVar9) break;
    pFVar15 = pFVar15 + 0x20;
  }
  local_d0.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar19 = (longlong)local_d0.Data.ArrayNum;
  pFVar18 = (param_1->Data).AllocatorInstance.Data;
  local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_d0.Data.ArrayNum == 0) {
    local_d0.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_d0.Data.ArrayNum,0,(ForAnyElementType *)&local_d0,local_d0.Data.ArrayNum,
               &local_d0.Data.ArrayMax);
    memcpy(local_d0.Data.AllocatorInstance.Data,pFVar18,lVar19 * 2);
  }
  pFVar10 = ::operator/(&local_50,(FString *)pFVar15,L"");
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  FPaths::MakePathRelativeTo(&local_d0,pwVar13);
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  lVar19 = (**(code **)(**(longlong **)&pFVar15[0x10].field_0x0 + 0x1f8))
                     (*(longlong **)&pFVar15[0x10].field_0x0,&local_d0);
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  if (lVar19 != 0) {
    local_c0 = &this->ChunkSources;
    puVar1 = &(this->ChunkSources).field_0x10;
    iVar5 = *(int *)&(this->ChunkSources).field_0x28;
    iStack_a4 = iVar20;
    local_a0 = iVar20;
    if (iVar5 == 0) {
LAB_1432d3fdf:
      uStack_b4 = (uint)local_res20;
    }
    else {
      puVar23 = *(uint **)&(this->ChunkSources).field_0x20;
      if (puVar23 == (uint *)0x0) {
        puVar23 = (uint *)puVar1;
      }
      uStack_b4 = *puVar23;
      while (uStack_b4 == 0) {
        lVar12 = (longlong)iVar20;
        local_a0 = local_a0 + 0x20;
        iVar20 = iVar20 + 1;
        iStack_a4 = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_1432d3fdf;
        uStack_b4 = puVar23[lVar12 + 1];
      }
      uStack_b4 = -uStack_b4 & uStack_b4;
      uVar4 = (ulonglong)uStack_b4 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_90 = (int)lVar12;
      iStack_a4 = local_a0 + -1 + local_90;
      if (iVar5 < iStack_a4) {
        iStack_a4 = iVar5;
      }
    }
    uVar21 = *(uint *)&(this->ChunkSources).field_0x28;
    uVar17 = uVar21 & 0xffffffe0;
    iStack_98 = *(int *)&(this->ChunkSources).field_0x8 - *(int *)&(this->ChunkSources).field_0x34;
    uStack_a8 = 0xffffffff;
    TStack_78._padding_ = CONCAT44(uStack_b4,iVar20);
    TStack_78.CurrentBitIndex = iStack_a4;
    TStack_78.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar21 >> 5;
    TStack_78._28_4_ = iStack_a4;
    TStack_78.BaseBitIndex = local_a0;
    uStack_58 = CONCAT44(uStack_94,iStack_98);
    iStack_b8 = iVar20;
    local_b0 = puVar1;
    iStack_9c = iStack_a4;
    local_8c._4_8_ = local_c0;
    local_80 = local_c0;
    TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar21 < 0) || (iVar5 < (int)uVar21)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar6 = *(uint *)&(this->ChunkSources).field_0x28;
    if (uVar21 != uVar6) {
      puVar22 = *(undefined1 **)&(this->ChunkSources).field_0x20;
      if (puVar22 == (undefined1 *)0x0) {
        puVar22 = puVar1;
      }
      uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar14 * 4);
      while (uVar21 == 0) {
        lVar12 = (longlong)iVar14;
        uVar17 = uVar17 + 0x20;
        iVar14 = iVar14 + 1;
        uVar21 = uVar6;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_1432d40f0;
        uVar21 = *(uint *)(puVar22 + lVar12 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar21 = (int)lVar12 + -1 + uVar17;
      if ((int)uVar6 < (int)uVar21) {
        uVar21 = uVar6;
      }
    }
LAB_1432d40f0:
    while( true ) {
      pTVar8 = local_80;
      if (*(int *)&local_80->field_0x8 - *(int *)&local_80->field_0x34 != (int)uStack_58) {
        `TSparseArray<TSparseSetElement<TTuple<FGuid,TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_res20);
      }
      if (((TStack_78.CurrentBitIndex == uVar21) &&
          (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar8 == (TMap<FGuid,TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails,TSizedDefaultAllocator<32>_>,0>_>
                     *)local_8c._4_8_)) break;
      lVar12 = *(longlong *)pTVar8;
      iVar5 = *(int *)(lVar12 + 0x18 + (longlong)TStack_78.CurrentBitIndex * 0x28);
      pbVar2 = (bool *)(lVar12 + (longlong)TStack_78.CurrentBitIndex * 0x28);
      plVar16 = *(longlong **)(pbVar2 + 0x10);
      plVar3 = plVar16 + (longlong)iVar5 * 3;
      while( true ) {
        if (*(int *)(pbVar2 + 0x18) != iVar5) {
          `TCheckedPointerIterator<BuildPatchServices::FInstallChunkSource::FChunkSourceDetails_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_d8);
        }
        if (plVar16 == plVar3) goto LAB_1432d4171;
        if (*plVar16 == lVar19) break;
        plVar16 = plVar16 + 3;
      }
      TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                (param_2,(FGuid *)local_8c,pbVar2);
LAB_1432d4171:
      TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
    }
  }
  return;
}

// OnBeforeDeleteFile @ 1432de000

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
BuildPatchServices::FInstallChunkSource::OnBeforeDeleteFile
          (FInstallChunkSource *this,FString *param_1)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  int iVar2;
  uint uVar3;
  TUniquePtr<BuildPatchServices::FInstallChunkSource::FOpenedFile,TDefaultDelete<BuildPatchServices::FInstallChunkSource::FOpenedFile>_>
  *pTVar4;
  int iVar5;
  FMutex *pFVar6;
  wchar_t *pwVar7;
  bool bVar8;
  
  this_00 = &this->OpenedFileHandlesLock;
  LOCK();
  bVar8 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar8) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar8) {
    UE::FMutex::LockSlow(this_00);
  }
  pTVar4 = TMapBase<FString,TUniquePtr<BuildPatchServices::FInstallChunkSource::FOpenedFile,TDefaultDelete<BuildPatchServices::FInstallChunkSource::FOpenedFile>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<BuildPatchServices::FInstallChunkSource::FOpenedFile,TDefaultDelete<BuildPatchServices::FInstallChunkSource::FOpenedFile>_>,0>_>
           ::Find((TMapBase<FString,TUniquePtr<BuildPatchServices::FInstallChunkSource::FOpenedFile,TDefaultDelete<BuildPatchServices::FInstallChunkSource::FOpenedFile>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<BuildPatchServices::FInstallChunkSource::FOpenedFile,TDefaultDelete<BuildPatchServices::FInstallChunkSource::FOpenedFile>_>,0>_>
                   *)&this->OpenedFileHandles,param_1);
  if (pTVar4 == (TUniquePtr<BuildPatchServices::FInstallChunkSource::FOpenedFile,TDefaultDelete<BuildPatchServices::FInstallChunkSource::FOpenedFile>_>
                 *)0x0) goto LAB_1432de10c;
  pwVar7 = L"";
  aVar1 = (pTVar4->Ptr->FileHandleLock).State;
  if (((byte)aVar1 & 1) == 0) {
    pFVar6 = &pTVar4->Ptr->FileHandleLock;
    LOCK();
    bVar8 = aVar1 == pFVar6->State;
    if (bVar8) {
      pFVar6->State = (atomic<unsigned_char>)((byte)aVar1 | 1);
    }
    UNLOCK();
    if (!bVar8) goto LAB_1432de086;
  }
  else {
LAB_1432de086:
    if (1 < (byte)LogInstallChunkSource._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_virtual_void___cdecl_BuildPatchServices::FInstallChunkSource::OnBeforeDeleteFile(FString_const&___ptr64)___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogInstallChunkSource);
    }
    pFVar6 = &pTVar4->Ptr->FileHandleLock;
    LOCK();
    bVar8 = pFVar6->State == (atomic<unsigned_char>)0x0;
    if (bVar8) {
      pFVar6->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar8) {
      UE::FMutex::LockSlow(pFVar6);
    }
  }
  if (*(int *)&(this->OpenedFileHandles).field_0x8 != *(int *)&(this->OpenedFileHandles).field_0x34)
  {
    iVar2 = (param_1->Data).ArrayNum;
    iVar5 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar5 = 0;
    }
    else {
      pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar7);
    TSet<TTuple<FString,TUniquePtr<BuildPatchServices::FInstallChunkSource::FOpenedFile,TDefaultDelete<BuildPatchServices::FInstallChunkSource::FOpenedFile>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<BuildPatchServices::FInstallChunkSource::FOpenedFile,TDefaultDelete<BuildPatchServices::FInstallChunkSource::FOpenedFile>_>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FString>
              ((TSet<TTuple<FString,TUniquePtr<BuildPatchServices::FInstallChunkSource::FOpenedFile,TDefaultDelete<BuildPatchServices::FInstallChunkSource::FOpenedFile>_>_>,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<BuildPatchServices::FInstallChunkSource::FOpenedFile,TDefaultDelete<BuildPatchServices::FInstallChunkSource::FOpenedFile>_>,0>,FDefaultSetAllocator>
                *)&this->OpenedFileHandles,uVar3,param_1);
  }
LAB_1432de10c:
  LOCK();
  aVar1 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) == 0) {
    return;
  }
  UE::FMutex::WakeWaitingThread(this_00);
  return;
}

// SetFileRetirementPositions @ 1432ed960

void __thiscall
BuildPatchServices::FInstallChunkSource::SetFileRetirementPositions
          (FInstallChunkSource *this,
          TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
          *param_1)

{
  undefined1 *_Dst;
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *this_00;
  void *pvVar1;
  
  this_00 = &this->FileRetirementPositions;
  if (this_00 != param_1) {
    TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_00,0,*(int *)&(this->FileRetirementPositions).field_0x8);
    if (*(void **)this_00 != (void *)0x0) {
      FMemory::Free(*(void **)this_00);
    }
    *(undefined8 *)this_00 = *(undefined8 *)param_1;
    _Dst = &(this->FileRetirementPositions).field_0x10;
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)&(this->FileRetirementPositions).field_0x8 = *(undefined4 *)&param_1->field_0x8;
    *(undefined4 *)&(this->FileRetirementPositions).field_0xc = *(undefined4 *)&param_1->field_0xc;
    *(undefined8 *)&param_1->field_0x8 = 0;
    if (_Dst != &param_1->field_0x10) {
      if (*(longlong *)&param_1->field_0x20 == 0) {
        memmove(_Dst,&param_1->field_0x10,0x10);
      }
      pvVar1 = *(void **)&(this->FileRetirementPositions).field_0x20;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      *(undefined8 *)&(this->FileRetirementPositions).field_0x20 =
           *(undefined8 *)&param_1->field_0x20;
      *(undefined8 *)&param_1->field_0x20 = 0;
      *(undefined4 *)&(this->FileRetirementPositions).field_0x28 =
           *(undefined4 *)&param_1->field_0x28;
      *(undefined4 *)&(this->FileRetirementPositions).field_0x2c =
           *(undefined4 *)&param_1->field_0x2c;
      *(undefined8 *)&param_1->field_0x28 = 0;
    }
    *(undefined4 *)&(this->FileRetirementPositions).field_0x30 = *(undefined4 *)&param_1->field_0x30
    ;
    *(undefined4 *)&(this->FileRetirementPositions).field_0x34 = *(undefined4 *)&param_1->field_0x34
    ;
    *(undefined4 *)&param_1->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_1->field_0x34 = 0;
    if (*(longlong *)&param_1->field_0x40 == 0) {
      *(undefined4 *)&(this->FileRetirementPositions).field_0x38 =
           *(undefined4 *)&param_1->field_0x38;
    }
    pvVar1 = *(void **)&(this->FileRetirementPositions).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    *(undefined8 *)&(this->FileRetirementPositions).field_0x40 = *(undefined8 *)&param_1->field_0x40
    ;
    *(undefined8 *)&param_1->field_0x40 = 0;
    *(undefined4 *)&(this->FileRetirementPositions).field_0x48 = *(undefined4 *)&param_1->field_0x48
    ;
    *(undefined4 *)&param_1->field_0x48 = 0;
  }
  return;
}

