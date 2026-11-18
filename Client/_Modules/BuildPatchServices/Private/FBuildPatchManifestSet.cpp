// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 24

// GetTotalNewFileSizeHelper<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_> @ 1431b3920

ulong64 __thiscall
BuildPatchServices::FBuildPatchManifestSet::
GetTotalNewFileSizeHelper<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
          (FBuildPatchManifestSet *this,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ulong64 uVar7;
  longlong lVar8;
  undefined1 *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar15;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  ulong64 uVar14;
  ulong64 uVar16;
  
  uVar7 = 0;
  puVar1 = &(param_1->Elements).field_0x10;
  uVar11 = *(uint *)&(param_1->Elements).field_0x28;
  uVar13 = 0;
  uVar5 = 1;
  uVar15 = 0;
  iVar12 = 0;
  uVar6 = uVar13;
  if (uVar11 != 0) {
    puVar17 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar6 = *puVar17;
    uVar14 = uVar7;
    uVar16 = uVar7;
    uVar15 = 0;
    uVar13 = 0;
    while (uVar6 == 0) {
      iVar12 = (int)uVar14;
      uVar15 = (int)uVar16 + 0x20;
      uVar16 = (ulong64)uVar15;
      uVar13 = iVar12 + 1;
      uVar14 = (ulong64)uVar13;
      if ((int)(((int)(uVar11 - 1) >> 0x1f & 0x1fU) + (uVar11 - 1)) >> 5 < (int)uVar13) {
        iVar12 = *(int *)&(param_1->Elements).field_0x28;
        uVar6 = uVar11;
        goto LAB_1431b39c4;
      }
      uVar6 = puVar17[(longlong)iVar12 + 1];
    }
    iVar12 = *(int *)&(param_1->Elements).field_0x28;
    uVar5 = -uVar6 & uVar6;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res20 = (int)lVar8;
    uVar6 = local_res20 + -1 + uVar15;
    if (iVar12 < (int)uVar6) {
      uVar6 = uVar11;
    }
  }
LAB_1431b39c4:
  uVar11 = *(uint *)&(param_1->Elements).field_0x28;
  uVar18 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar5,uVar13);
  TStack_60.CurrentBitIndex = uVar6;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar11 >> 5;
  TStack_60._28_4_ = uVar6;
  TStack_60.BaseBitIndex = uVar15;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar12 < (int)uVar11)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return uVar7;
  }
  uVar15 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar11 != uVar15) {
    puVar9 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar9 + (longlong)iVar10 * 4);
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar10;
      uVar18 = uVar18 + 0x20;
      iVar10 = iVar10 + 1;
      uVar11 = uVar15;
      if ((int)(((int)(uVar15 - 1) >> 0x1f & 0x1fU) + (uVar15 - 1)) >> 5 < iVar10)
      goto LAB_1431b3ac0;
      uVar11 = *(uint *)(puVar9 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = (int)lVar8 + -1 + uVar18;
    if ((int)uVar15 < (int)uVar11) {
      uVar11 = uVar15;
    }
  }
LAB_1431b3ac0:
  while( true ) {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar8 = (**(code **)(this->_padding_ + 0x70))
                      (this,*(longlong *)&param_1->Elements +
                            (longlong)TStack_60.CurrentBitIndex * 0x18);
    if (lVar8 != 0) {
      uVar7 = uVar7 + *(longlong *)(lVar8 + 0x58);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return uVar7;
}

// FBuildPatchManifestSet @ 1431bac80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001431bb7a3) */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FBuildPatchManifestSet * __thiscall
BuildPatchServices::FBuildPatchManifestSet::FBuildPatchManifestSet
          (FBuildPatchManifestSet *this,
          TArray<BuildPatchServices::FBuildPatchInstallerAction,TSizedDefaultAllocator<32>_>
          *param_1)

{
  TMap<FGuid,BuildPatchServices::FChunkInfo_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo_const_*,0>_>
  *pTVar1;
  undefined1 *puVar2;
  TMap<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*,0>_>
  *pTVar3;
  int iVar4;
  uint *puVar5;
  undefined1 *puVar6;
  FBuildPatchAppManifest *pFVar7;
  FScriptContainerElement *pFVar8;
  IBuildManifest *pIVar9;
  ForElementType<FSetElementId> FVar10;
  code *pcVar11;
  TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>
  *pTVar12;
  TMap<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*,0>_>
  *pTVar13;
  bool bVar14;
  longlong lVar15;
  FBuildPatchManifestSet *pFVar16;
  FBuildPatchAppManifest *pFVar17;
  FString *pFVar18;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *this_00;
  ulonglong uVar19;
  undefined1 *puVar20;
  undefined8 *puVar21;
  int iVar22;
  FInstallerAction *pFVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  FScriptContainerElement *pFVar27;
  uint uVar28;
  uint uVar29;
  uint *puVar30;
  FInstallerAction *pFVar31;
  FString *this_01;
  undefined1 auStackY_418 [32];
  undefined1 local_3d7;
  undefined1 local_3d6;
  undefined1 local_3d5;
  undefined1 local_3d4;
  char local_3d3;
  uint local_3d0;
  FInstallerAction *local_3c8;
  FBuildPatchManifestSet *local_3c0;
  TMap<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*,0>_>
  *local_3b8;
  uint uStack_3b0;
  uint uStack_3ac;
  FString *local_3a8;
  undefined4 uStack_3a0;
  uint uStack_39c;
  uint local_398;
  undefined4 uStack_394;
  int iStack_390;
  undefined4 uStack_38c;
  FString local_388;
  FString local_378;
  int local_368;
  undefined1 local_364 [16];
  int local_354;
  int local_350;
  undefined1 local_34c [12];
  FInstallerAction *local_340;
  TSet<TTuple<FString,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>,0>,FDefaultSetAllocator>
  *local_338;
  TPairInitializer<FString_&&,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>_&&>
  local_330;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_320;
  undefined8 uStack_300;
  TMap<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*,0>_>
  *local_2f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2f0;
  undefined8 uStack_2d0;
  FString *local_2c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2c0;
  undefined8 uStack_2a0;
  FString *local_298;
  undefined8 *local_290;
  TStringView<wchar_t> local_288;
  TStringView<wchar_t> local_278;
  FString *local_268;
  undefined8 *local_260;
  TStringView<wchar_t> local_258;
  FString *local_248;
  undefined8 *local_240;
  longlong local_238;
  undefined8 *local_230;
  undefined8 local_228;
  FBuildPatchAppManifest *local_220;
  FInstallerAction *local_218;
  undefined8 local_210;
  IBuildManifest *local_208;
  FInstallerAction *local_200;
  undefined8 local_1f8;
  IBuildManifest *local_1f0;
  FInstallerAction *local_1e8;
  undefined8 local_1e0;
  IBuildManifest *local_1d8;
  FInstallerAction *local_1d0;
  FString local_1c8;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  FString local_1a8 [2];
  undefined4 local_17c;
  undefined4 local_15c;
  undefined4 local_13c;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_138;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_e8;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_418;
  *(undefined8 *)&this->DataLookup = 0;
  this->_padding_ = (longlong)&___7FBuildPatchManifestSet_BuildPatchServices__6B_;
  *(undefined8 *)&(this->DataLookup).field_0x8 = 0;
  local_338 = (TSet<TTuple<FString,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>,0>,FDefaultSetAllocator>
               *)&this->NewFileLookup;
  *(undefined8 *)&(this->DataLookup).field_0x20 = 0;
  *(undefined4 *)&(this->DataLookup).field_0x28 = 0;
  *(undefined4 *)&(this->DataLookup).field_0x2c = 0x80;
  *(undefined4 *)&(this->DataLookup).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DataLookup).field_0x34 = 0;
  *(undefined8 *)&(this->DataLookup).field_0x40 = 0;
  *(undefined4 *)&(this->DataLookup).field_0x48 = 0;
  *(undefined8 *)&this->CurrentFileLookup = 0;
  *(undefined8 *)&(this->CurrentFileLookup).field_0x8 = 0;
  *(undefined8 *)&(this->CurrentFileLookup).field_0x20 = 0;
  *(undefined4 *)&(this->CurrentFileLookup).field_0x28 = 0;
  *(undefined4 *)&(this->CurrentFileLookup).field_0x2c = 0x80;
  *(undefined4 *)&(this->CurrentFileLookup).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CurrentFileLookup).field_0x34 = 0;
  *(undefined8 *)&(this->CurrentFileLookup).field_0x40 = 0;
  *(undefined4 *)&(this->CurrentFileLookup).field_0x48 = 0;
  *(undefined8 *)
   &((TMap<FString,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>,0>_>
      *)local_338)->field_0x0 = 0;
  *(undefined8 *)&(this->NewFileLookup).field_0x8 = 0;
  *(undefined8 *)&(this->NewFileLookup).field_0x20 = 0;
  *(undefined4 *)&(this->NewFileLookup).field_0x28 = 0;
  *(undefined4 *)&(this->NewFileLookup).field_0x2c = 0x80;
  *(undefined4 *)&(this->NewFileLookup).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NewFileLookup).field_0x34 = 0;
  *(undefined8 *)&(this->NewFileLookup).field_0x40 = 0;
  *(undefined4 *)&(this->NewFileLookup).field_0x48 = 0;
  (this->InstallerActions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstallerActions).AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->InstallerActions).ArrayNum = param_1->ArrayNum;
  (this->InstallerActions).ArrayMax = param_1->ArrayMax;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 0;
  pFVar31 = (FInstallerAction *)(this->InstallerActions).AllocatorInstance.Data;
  local_3d0 = (this->InstallerActions).ArrayNum;
  uVar19 = (ulonglong)(int)local_3d0;
  local_340 = (FInstallerAction *)((longlong)pFVar31 + uVar19 * 0x158);
  local_3c0 = this;
  while( true ) {
    pFVar23 = local_340;
    pFVar16 = local_3c0;
    local_3c8 = pFVar31;
    if ((local_3c0->InstallerActions).ArrayNum != (int)uVar19) {
      local_3d7 = 0;
      `TCheckedPointerIterator<BuildPatchServices::FBuildPatchInstallerAction,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_3d7);
    }
    if (pFVar31 == pFVar23) break;
    pFVar23 = pFVar31 + 1;
    pFVar17 = (FBuildPatchAppManifest *)(pFVar23->CurrentManifest).Object;
    if ((pFVar17 != (FBuildPatchAppManifest *)0x0) ||
       (pFVar17 = (FBuildPatchAppManifest *)pFVar31[1].InstallManifest.Object,
       pFVar17 != (FBuildPatchAppManifest *)0x0)) {
      do {
        puVar2 = &(pFVar17->ChunkInfoLookup).field_0x10;
        uStack_3b0 = 0;
        uVar29 = *(uint *)&(pFVar17->ChunkInfoLookup).field_0x28;
        pTVar1 = &pFVar17->ChunkInfoLookup;
        uStack_3ac = 1;
        uStack_39c = uStack_3b0;
        local_398 = uStack_3b0;
        if (uVar29 != 0) {
          puVar5 = *(uint **)&(pFVar17->ChunkInfoLookup).field_0x20;
          puVar30 = (uint *)puVar2;
          if (puVar5 != (uint *)0x0) {
            puVar30 = puVar5;
          }
          uVar28 = *puVar30;
          while (uVar28 == 0) {
            lVar15 = (longlong)(int)uStack_3b0;
            local_398 = local_398 + 0x20;
            uStack_3b0 = uStack_3b0 + 1;
            uStack_39c = uVar29;
            if ((int)(((int)(uVar29 - 1) >> 0x1f & 0x1fU) + (uVar29 - 1)) >> 5 < (int)uStack_3b0)
            goto LAB_1431bae6c;
            uVar28 = puVar30[lVar15 + 1];
          }
          uStack_3ac = -uVar28 & uVar28;
          uVar19 = (ulonglong)uStack_3ac * 2 + 1;
          lVar15 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          local_330.Key._4_4_ = (int)lVar15;
          uStack_39c = local_330.Key._4_4_ + -1 + local_398;
          if ((int)uVar29 < (int)uStack_39c) {
            uStack_39c = uVar29;
          }
        }
LAB_1431bae6c:
        uVar28 = *(uint *)&(pFVar17->ChunkInfoLookup).field_0x28;
        uVar24 = uVar28 & 0xffffffe0;
        uStack_394 = local_17c;
        iStack_390 = *(int *)&(pFVar17->ChunkInfoLookup).field_0x8 -
                     *(int *)&(pFVar17->ChunkInfoLookup).field_0x34;
        TStack_320._padding_ = CONCAT44(uStack_3ac,uStack_3b0);
        uStack_3a0 = 0xffffffff;
        TStack_320.CurrentBitIndex = uStack_39c;
        TStack_320.UnvisitedBitMask = 0xffffffff;
        iVar22 = (int)uVar28 >> 5;
        TStack_320._28_4_ = local_17c;
        TStack_320.BaseBitIndex = local_398;
        uStack_300 = CONCAT44(uStack_38c,iStack_390);
        local_3b8 = (TMap<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*,0>_>
                     *)pTVar1;
        local_3a8 = (FString *)puVar2;
        local_330.Value =
             (TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>
              *)pTVar1;
        TStack_320.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
        if ((((int)uVar28 < 0) || ((int)uVar29 < (int)uVar28)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar14)) {
          pcVar11 = (code *)swi(3);
          pFVar16 = (FBuildPatchManifestSet *)(*pcVar11)();
          return pFVar16;
        }
        pFVar31 = local_3c8;
        uVar29 = *(uint *)&(pFVar17->ChunkInfoLookup).field_0x28;
        if (uVar28 != uVar29) {
          puVar6 = *(undefined1 **)&(pFVar17->ChunkInfoLookup).field_0x20;
          puVar20 = puVar2;
          if (puVar6 != (undefined1 *)0x0) {
            puVar20 = puVar6;
          }
          uVar28 = -1 << ((byte)uVar28 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar22 * 4);
          while (uVar28 == 0) {
            lVar15 = (longlong)iVar22;
            uVar24 = uVar24 + 0x20;
            iVar22 = iVar22 + 1;
            uVar28 = uVar29;
            if ((int)(((int)(uVar29 - 1) >> 0x1f & 0x1fU) + (uVar29 - 1)) >> 5 < iVar22)
            goto LAB_1431baf81;
            uVar28 = *(uint *)(puVar20 + lVar15 * 4 + 4);
          }
          uVar19 = (ulonglong)(-uVar28 & uVar28) * 2 + 1;
          lVar15 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          local_368 = (int)lVar15;
          uVar28 = (uVar24 - 1) + local_368;
          if ((int)uVar29 < (int)uVar28) {
            uVar28 = uVar29;
          }
        }
LAB_1431baf81:
        while( true ) {
          pTVar12 = local_330.Value;
          if (*(int *)(&(local_330.Value)->field_0x0 + 8) - *(int *)&local_330.Value[2].field_0x4 !=
              (int)uStack_300) {
            local_3d6 = 0;
            `TSparseArray<TSparseSetElement<TTuple<FGuid,BuildPatchServices::FChunkInfo_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_3d6);
          }
          if (((TStack_320.CurrentBitIndex == uVar28) &&
              (TStack_320.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
             ((TMap<FGuid,BuildPatchServices::FChunkInfo_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkInfo_const_*,0>_>
               *)pTVar12 == pTVar1)) break;
          local_238 = (longlong)TStack_320.CurrentBitIndex * 0x20 + *(longlong *)&pTVar12->field_0x0
          ;
          local_218 = pFVar31;
          local_228 = *(undefined8 *)(local_238 + 0x10);
          local_230 = &local_228;
          local_220 = pFVar17;
          TSet<TTuple<FGuid,TTuple<BuildPatchServices::FChunkInfo_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>_>,TDefaultMapHashableKeyFuncs<FGuid,TTuple<BuildPatchServices::FChunkInfo_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>,0>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<FGuid_const_&,TTuple<BuildPatchServices::FChunkInfo_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>_&&>_>
                    ((TSet<TTuple<FGuid,TTuple<BuildPatchServices::FChunkInfo_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>_>,TDefaultMapHashableKeyFuncs<FGuid,TTuple<BuildPatchServices::FChunkInfo_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>,0>,FDefaultSetAllocator>
                      *)&local_3c0->DataLookup,
                     (TPairInitializer<FGuid_const_&,TTuple<BuildPatchServices::FChunkInfo_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>_&&>
                      *)local_364,(bool *)&local_238);
          TStack_320.UnvisitedBitMask = TStack_320.UnvisitedBitMask & ~TStack_320._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_320);
        }
        pFVar7 = (FBuildPatchAppManifest *)pFVar31[1].InstallManifest.Object;
      } while ((pFVar7 != pFVar17) && (pFVar17 = pFVar7, pFVar7 != (FBuildPatchAppManifest *)0x0));
      pFVar23 = pFVar31 + 1;
    }
    uVar29 = 0;
    bVar14 = FInstallerAction::IsInstall(pFVar31);
    if (!bVar14) {
      pFVar17 = TSharedPtr<FBuildPatchAppManifest,1>::operator*<FBuildPatchAppManifest>
                          ((TSharedPtr<FBuildPatchAppManifest,1> *)pFVar23);
      local_398 = 0;
      uStack_3ac = 1;
      puVar2 = &(pFVar17->FileManifestLookup).field_0x10;
      uVar28 = *(uint *)&(pFVar17->FileManifestLookup).field_0x28;
      pTVar3 = &pFVar17->FileManifestLookup;
      uStack_39c = 0;
      if (uVar28 != 0) {
        puVar5 = *(uint **)&(pFVar17->FileManifestLookup).field_0x20;
        puVar30 = (uint *)puVar2;
        if (puVar5 != (uint *)0x0) {
          puVar30 = puVar5;
        }
        uVar24 = *puVar30;
        while (uVar24 == 0) {
          lVar15 = (longlong)(int)uVar29;
          local_398 = local_398 + 0x20;
          uVar29 = uVar29 + 1;
          uStack_39c = uVar28;
          if ((int)((uVar28 - 1) + ((int)(uVar28 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar29)
          goto LAB_1431bb0ee;
          uVar24 = puVar30[lVar15 + 1];
        }
        uStack_3ac = -uVar24 & uVar24;
        uVar19 = (ulonglong)uStack_3ac * 2 + 1;
        lVar15 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        local_364._4_4_ = (undefined4)lVar15;
        uStack_39c = local_364._4_4_ + -1 + local_398;
        if ((int)uVar28 < (int)uStack_39c) {
          uStack_39c = uVar28;
        }
      }
LAB_1431bb0ee:
      uVar24 = *(uint *)&(pFVar17->FileManifestLookup).field_0x28;
      uStack_394 = local_15c;
      iStack_390 = *(int *)&(pFVar17->FileManifestLookup).field_0x8 -
                   *(int *)&(pFVar17->FileManifestLookup).field_0x34;
      uVar25 = uVar24 & 0xffffffe0;
      TStack_2f0._padding_ = CONCAT44(uStack_3ac,uVar29);
      uStack_3a0 = 0xffffffff;
      TStack_2f0.CurrentBitIndex = uStack_39c;
      TStack_2f0.UnvisitedBitMask = 0xffffffff;
      iVar22 = (int)uVar24 >> 5;
      TStack_2f0._28_4_ = local_15c;
      TStack_2f0.BaseBitIndex = local_398;
      uStack_2d0 = CONCAT44(uStack_38c,iStack_390);
      local_3b8 = pTVar3;
      uStack_3b0 = uVar29;
      local_3a8 = (FString *)puVar2;
      local_2f8 = pTVar3;
      TStack_2f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
      if ((((int)uVar24 < 0) || ((int)uVar28 < (int)uVar24)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar14)) {
        pcVar11 = (code *)swi(3);
        pFVar16 = (FBuildPatchManifestSet *)(*pcVar11)();
        return pFVar16;
      }
      uVar29 = *(uint *)&(pFVar17->FileManifestLookup).field_0x28;
      if (uVar24 != uVar29) {
        puVar6 = *(undefined1 **)&(pFVar17->FileManifestLookup).field_0x20;
        puVar20 = puVar2;
        if (puVar6 != (undefined1 *)0x0) {
          puVar20 = puVar6;
        }
        uVar28 = -1 << ((byte)uVar24 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar22 * 4);
        while (uVar28 == 0) {
          lVar15 = (longlong)iVar22;
          uVar25 = uVar25 + 0x20;
          iVar22 = iVar22 + 1;
          uVar24 = uVar29;
          if ((int)(((int)(uVar29 - 1) >> 0x1f & 0x1fU) + (uVar29 - 1)) >> 5 < iVar22)
          goto LAB_1431bb200;
          uVar28 = *(uint *)(puVar20 + lVar15 * 4 + 4);
        }
        uVar19 = (ulonglong)(-uVar28 & uVar28) * 2 + 1;
        lVar15 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        local_364._8_4_ = (undefined4)lVar15;
        uVar24 = local_364._8_4_ + -1 + uVar25;
        if ((int)uVar29 < (int)uVar24) {
          uVar24 = uVar29;
        }
      }
LAB_1431bb200:
      while( true ) {
        pTVar13 = local_2f8;
        if (*(int *)(&local_2f8->field_0x0 + 8) - *(int *)(&local_2f8->field_0x0 + 0x34) !=
            (int)uStack_2d0) {
          local_3d5 = 0;
          `TSparseArray<TSparseSetElement<TTuple<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_3d5);
        }
        if (((TStack_2f0.CurrentBitIndex == uVar24) &&
            (TStack_2f0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
           (pTVar13 == pTVar3)) break;
        puVar21 = (undefined8 *)
                  ((longlong)TStack_2f0.CurrentBitIndex * 0x20 + *(longlong *)&pTVar13->field_0x0);
        pFVar27 = (FScriptContainerElement *)0x0;
        local_1e0 = puVar21[2];
        local_1b8 = *puVar21;
        uStack_1b0 = puVar21[1];
        local_1d8 = pFVar31[1].CurrentManifest.Object;
        local_1d0 = pFVar31;
        pFVar18 = ::FString::ConstructFromPtrSize(&local_1c8,(wchar_t *)*puVar21,(int)puVar21[1]);
        iVar22 = 0;
        if (local_1a8 != pFVar18) {
          pFVar27 = (pFVar18->Data).AllocatorInstance.Data;
          (pFVar18->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar22 = (pFVar18->Data).ArrayNum;
          (pFVar18->Data).ArrayNum = 0;
          (pFVar18->Data).ArrayMax = 0;
        }
        if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
        }
        pFVar18 = FInstallerAction::GetInstallSubdirectory(pFVar31);
        iVar26 = iVar22 + -1;
        if (iVar22 == 0) {
          iVar26 = 0;
        }
        if (((pFVar18->Data).ArrayNum != 0) || (iVar22 = 1, iVar26 + 1 == 0)) {
          iVar22 = 0;
        }
        local_378.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar22 = iVar26 + 1 + iVar22;
        iVar4 = (pFVar18->Data).ArrayNum;
        pFVar8 = (pFVar18->Data).AllocatorInstance.Data;
        local_378.Data.ArrayNum = iVar4;
        if ((iVar4 == 0) && (iVar22 == 0)) {
          local_378.Data.ArrayMax = 0;
        }
        else {
          uVar29 = iVar4 + iVar22;
          if ((int)uVar29 < iVar4) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar29);
          }
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,uVar29,0,(ForAnyElementType *)&local_378,iVar4,&local_378.Data.ArrayMax);
          if (iVar4 != 0) {
            memcpy(local_378.Data.AllocatorInstance.Data,pFVar8,(longlong)iVar4 * 2);
          }
        }
        ::FString::PathAppend(&local_378,(wchar_t *)pFVar27,iVar26);
        local_298 = &local_378;
        local_290 = &local_1e0;
        TSet<TTuple<FString,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FString_&&,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>_&&>_>
                  ((TSet<TTuple<FString,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>,0>,FDefaultSetAllocator>
                    *)&local_3c0->CurrentFileLookup,
                   (TPairInitializer<FString_&&,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>_&&>
                    *)(local_364 + 0xc),(bool *)&local_298);
        if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_378.Data.AllocatorInstance.Data);
        }
        if (pFVar27 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar27);
        }
        TStack_2f0.UnvisitedBitMask = TStack_2f0.UnvisitedBitMask & ~TStack_2f0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2f0);
        pFVar31 = local_3c8;
      }
    }
    pFVar31 = (FInstallerAction *)&pFVar31[2].InstallTags.Elements.field_0x8;
    uVar19 = (ulonglong)local_3d0;
  }
  local_3d0 = (pFVar16->InstallerActions).ArrayNum - 1;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  if ((int)local_3d0 < 0) {
LAB_1431bbb19:
    local_98.HashSize = 0;
    if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_98.Elements);
    return pFVar16;
  }
  lVar15 = (longlong)(int)local_3d0 * 0x158;
LAB_1431bb440:
  uVar29 = 0;
  uVar28 = uVar29;
  if ((int)local_3d0 < (pFVar16->InstallerActions).ArrayNum) {
    uVar28 = ~local_3d0 >> 0x1f;
  }
  local_3c8 = (FInstallerAction *)lVar15;
  if ((uVar28 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar11 = (code *)swi(3);
    pFVar16 = (FBuildPatchManifestSet *)(*pcVar11)();
    return pFVar16;
  }
  pFVar31 = (FInstallerAction *)((pFVar16->InstallerActions).AllocatorInstance.Data + lVar15);
  local_3d3 = FInstallerAction::IsUninstall(pFVar31);
  local_e8.Elements._0_8_ = 0;
  local_3b8 = (TMap<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*,0>_>
               *)&pFVar31[1].InstallSubdirectory;
  local_e8.Elements._32_8_ = 0;
  local_3a8 = &pFVar31[1].CloudSubdirectory;
  local_e8.Elements._40_4_ = 0;
  local_398 = 0;
  local_e8.Elements._52_4_ = 0;
  local_e8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_e8.HashSize = 0;
  uStack_3ac = 1;
  local_e8.Elements._8_8_ = 0;
  local_e8.Elements._44_4_ = 0x80;
  local_e8.Elements._48_4_ = 0xffffffff;
  uVar28 = *(uint *)&pFVar31[2].CurrentManifest.Object;
  uStack_39c = 0;
  if (uVar28 != 0) {
    pFVar18 = local_3a8;
    if (*(FString **)&pFVar31[1].ActionIntent != (FString *)0x0) {
      pFVar18 = *(FString **)&pFVar31[1].ActionIntent;
    }
    uVar24 = *(uint *)&(pFVar18->Data).AllocatorInstance.Data;
    uVar29 = 0;
    while (uVar24 == 0) {
      lVar15 = (longlong)(int)uVar29;
      local_398 = local_398 + 0x20;
      uVar29 = uVar29 + 1;
      uStack_39c = uVar28;
      if ((int)((uVar28 - 1) + ((int)(uVar28 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar29)
      goto LAB_1431bb56e;
      uVar24 = *(uint *)((longlong)&(pFVar18->Data).AllocatorInstance.Data + lVar15 * 4 + 4);
    }
    uStack_3ac = -uVar24 & uVar24;
    uVar19 = (ulonglong)uStack_3ac * 2 + 1;
    lVar15 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_354 = (int)lVar15;
    uStack_39c = local_354 + -1 + local_398;
    if ((int)uVar28 < (int)uStack_39c) {
      uStack_39c = uVar28;
    }
  }
LAB_1431bb56e:
  uVar24 = *(uint *)&pFVar31[2].CurrentManifest.Object;
  uStack_394 = local_13c;
  iStack_390 = pFVar31[1].InstallSubdirectory.Data.ArrayNum -
               *(int *)((longlong)
                        &pFVar31[2].CurrentManifest.SharedReferenceCount.ReferenceController + 4);
  uVar25 = uVar24 & 0xffffffe0;
  TStack_2c0._padding_ = CONCAT44(uStack_3ac,uVar29);
  uStack_3a0 = 0xffffffff;
  TStack_2c0.CurrentBitIndex = uStack_39c;
  TStack_2c0.UnvisitedBitMask = 0xffffffff;
  iVar22 = (int)uVar24 >> 5;
  TStack_2c0._28_4_ = local_13c;
  TStack_2c0.BaseBitIndex = local_398;
  uStack_2a0 = CONCAT44(uStack_38c,iStack_390);
  uStack_3b0 = uVar29;
  local_2c8 = (FString *)local_3b8;
  TStack_2c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_3a8;
  if ((((int)uVar24 < 0) || ((int)uVar28 < (int)uVar24)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar11 = (code *)swi(3);
    pFVar16 = (FBuildPatchManifestSet *)(*pcVar11)();
    return pFVar16;
  }
  uVar29 = *(uint *)&pFVar31[2].CurrentManifest.Object;
  if (uVar24 != uVar29) {
    pFVar18 = &pFVar31[1].CloudSubdirectory;
    if (*(FString **)&pFVar31[1].ActionIntent != (FString *)0x0) {
      pFVar18 = *(FString **)&pFVar31[1].ActionIntent;
    }
    uVar28 = -1 << ((byte)uVar24 & 0x1f) &
             *(uint *)((longlong)&(pFVar18->Data).AllocatorInstance.Data + (longlong)iVar22 * 4);
    while (uVar28 == 0) {
      lVar15 = (longlong)iVar22;
      uVar25 = uVar25 + 0x20;
      iVar22 = iVar22 + 1;
      uVar24 = uVar29;
      if ((int)(((int)(uVar29 - 1) >> 0x1f & 0x1fU) + (uVar29 - 1)) >> 5 < iVar22)
      goto LAB_1431bb690;
      uVar28 = *(uint *)((longlong)&(pFVar18->Data).AllocatorInstance.Data + lVar15 * 4 + 4);
    }
    uVar19 = (ulonglong)(-uVar28 & uVar28) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_350 = (int)lVar15;
    uVar24 = local_350 + -1 + uVar25;
    if ((int)uVar29 < (int)uVar24) {
      uVar24 = uVar29;
    }
  }
LAB_1431bb690:
  do {
    pFVar18 = local_2c8;
    this_01 = &pFVar31[1].InstallSubdirectory;
    if ((local_2c8->Data).ArrayNum - *(int *)((longlong)(local_2c8 + 3) + 4) != (int)uStack_2a0) {
      local_3d4 = 0;
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_3d4);
    }
    if (((TStack_2c0.CurrentBitIndex == uVar24) &&
        (TStack_2c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)&pFVar31[1].CloudSubdirectory))
       && (pFVar18 == this_01)) break;
    pFVar27 = (pFVar18->Data).AllocatorInstance.Data + (longlong)TStack_2c0.CurrentBitIndex * 0x18;
    pFVar18 = FInstallerAction::GetInstallSubdirectory(pFVar31);
    iVar22 = *(int *)(pFVar27 + 8) + -1;
    if (*(int *)(pFVar27 + 8) == 0) {
      iVar22 = 0;
    }
    if (((pFVar18->Data).ArrayNum != 0) || (iVar26 = 1, iVar22 + 1 == 0)) {
      iVar26 = 0;
    }
    local_388.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar26 = iVar22 + 1 + iVar26;
    iVar4 = (pFVar18->Data).ArrayNum;
    pFVar8 = (pFVar18->Data).AllocatorInstance.Data;
    local_388.Data.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar26 == 0)) {
      local_388.Data.ArrayMax = 0;
    }
    else {
      uVar29 = iVar4 + iVar26;
      if ((int)uVar29 < iVar4) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar29);
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar29,0,(ForAnyElementType *)&local_388,iVar4,&local_388.Data.ArrayMax);
      if (iVar4 != 0) {
        memcpy(local_388.Data.AllocatorInstance.Data,pFVar8,(longlong)iVar4 * 2);
      }
    }
    ::FString::PathAppend(&local_388,*(wchar_t **)pFVar27,iVar22);
    if (local_3d3 == '\0') {
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                (&local_98,(FString *)local_34c,(bool *)&local_388);
    }
    bVar14 = FInstallerAction::IsInstall(pFVar31);
    if (!bVar14) {
      if ((pFVar31[1].CurrentManifest.Object == (IBuildManifest *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar14)) {
        pcVar11 = (code *)swi(3);
        pFVar16 = (FBuildPatchManifestSet *)(*pcVar11)();
        return pFVar16;
      }
      local_288.DataPtr = *(wchar_t **)pFVar27;
      pIVar9 = pFVar31[1].CurrentManifest.Object;
      local_288.Size = *(int *)(pFVar27 + 8) + -1;
      if (*(int *)(pFVar27 + 8) == 0) {
        local_288.Size = 0;
      }
      uVar29 = FCrc::Strihash_DEPRECATED<wchar_t>(local_288.Size,local_288.DataPtr);
      iVar22 = TSet<TTuple<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*,0>,FDefaultSetAllocator>
               ::FindIndexByHash<TStringView<wchar_t>_>
                         ((TSet<TTuple<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*,0>,FDefaultSetAllocator>
                           *)(pIVar9 + 0x36),uVar29,&local_288);
      if (iVar22 != -1) {
        if ((pFVar31[1].CurrentManifest.Object == (IBuildManifest *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x44d,L""), bVar14)) {
          pcVar11 = (code *)swi(3);
          pFVar16 = (FBuildPatchManifestSet *)(*pcVar11)();
          return pFVar16;
        }
        local_278.DataPtr = *(wchar_t **)pFVar27;
        pIVar9 = pFVar31[1].CurrentManifest.Object;
        local_278.Size = *(int *)(pFVar27 + 8) + -1;
        if (*(int *)(pFVar27 + 8) == 0) {
          local_278.Size = 0;
        }
        uVar29 = FCrc::Strihash_DEPRECATED<wchar_t>(local_278.Size,local_278.DataPtr);
        iVar22 = TSet<TTuple<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<TStringView<wchar_t>_>
                           ((TSet<TTuple<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*,0>,FDefaultSetAllocator>
                             *)(pIVar9 + 0x36),uVar29,&local_278);
        if (iVar22 == -1) {
          lVar15 = 0;
LAB_1431bb8ca:
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x27b,L"");
          if (bVar14) {
            pcVar11 = (code *)swi(3);
            pFVar16 = (FBuildPatchManifestSet *)(*pcVar11)();
            return pFVar16;
          }
        }
        else {
          lVar15 = (longlong)iVar22 * 0x20 + (longlong)pIVar9[0x36];
          if (lVar15 == 0) goto LAB_1431bb8ca;
        }
        local_210 = *(undefined8 *)(lVar15 + 0x10);
        local_208 = pFVar31[1].CurrentManifest.Object;
        local_268 = &local_388;
        local_260 = &local_210;
        local_200 = pFVar31;
        TSet<TTuple<FString,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FString_const_&,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>_&&>_>
                  ((TSet<TTuple<FString,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>,0>,FDefaultSetAllocator>
                    *)&local_3c0->CurrentFileLookup,
                   (TPairInitializer<FString_const_&,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>_&&>
                    *)(local_34c + 8),(bool *)&local_268);
      }
    }
    lVar15 = 0;
    if ((pFVar31[1].InstallManifest.Object == (IBuildManifest *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar14)) {
      pcVar11 = (code *)swi(3);
      pFVar16 = (FBuildPatchManifestSet *)(*pcVar11)();
      return pFVar16;
    }
    local_258.DataPtr = *(wchar_t **)pFVar27;
    pIVar9 = pFVar31[1].InstallManifest.Object;
    local_258.Size = *(int *)(pFVar27 + 8) + -1;
    if (*(int *)(pFVar27 + 8) == 0) {
      local_258.Size = 0;
    }
    uVar29 = FCrc::Strihash_DEPRECATED<wchar_t>(local_258.Size,local_258.DataPtr);
    iVar22 = TSet<TTuple<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*,0>,FDefaultSetAllocator>
             ::FindIndexByHash<TStringView<wchar_t>_>
                       ((TSet<TTuple<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*>,TDefaultMapHashableKeyFuncs<TStringView<wchar_t>,BuildPatchServices::FFileManifest_const_*,0>,FDefaultSetAllocator>
                         *)(pIVar9 + 0x36),uVar29,&local_258);
    if (((iVar22 == -1) || (lVar15 = (longlong)iVar22 * 0x20 + (longlong)pIVar9[0x36], lVar15 == 0))
       && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                              ("Pair != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                               ,0x27b,L""), bVar14)) {
      pcVar11 = (code *)swi(3);
      pFVar16 = (FBuildPatchManifestSet *)(*pcVar11)();
      return pFVar16;
    }
    local_1f8 = *(undefined8 *)(lVar15 + 0x10);
    local_1f0 = pFVar31[1].InstallManifest.Object;
    local_248 = &local_388;
    local_240 = &local_1f8;
    local_1e8 = pFVar31;
    TSet<TTuple<FString,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FString_&&,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>_&&>_>
              (local_338,&local_330,(bool *)&local_248);
    if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_388.Data.AllocatorInstance.Data);
    }
    TStack_2c0.UnvisitedBitMask = TStack_2c0.UnvisitedBitMask & ~TStack_2c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2c0);
  } while( true );
  if (0 < (int)(local_e8.Elements._8_4_ - local_e8.Elements._52_4_)) {
    this_00 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Difference
                        ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)this_01,
                         &local_138,&local_e8);
    if ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)this_01 != this_00) {
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
      Move<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
                ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)this_01,this_00);
    }
    this_00->HashSize = 0;
    FVar10 = (this_00->Hash).SecondaryData;
    if (FVar10 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar10);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&this_00->Elements);
  }
  local_e8.HashSize = 0;
  if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_e8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_e8.Elements);
  local_3d0 = local_3d0 - 1;
  lVar15 = (longlong)local_3c8 + -0x158;
  pFVar16 = local_3c0;
  local_3c8 = (FInstallerAction *)lVar15;
  if ((int)local_3d0 < 0) goto LAB_1431bbb19;
  goto LAB_1431bb440;
}

// ContainsUpdate @ 1431d3400

bool __thiscall
BuildPatchServices::FBuildPatchManifestSet::ContainsUpdate(FBuildPatchManifestSet *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  FInstallerAction *this_00;
  FInstallerAction *pFVar8;
  undefined1 local_res8 [8];
  
  iVar1 = (this->InstallerActions).ArrayNum;
  this_00 = (FInstallerAction *)(this->InstallerActions).AllocatorInstance.Data;
  pFVar8 = (FInstallerAction *)((longlong)this_00 + (longlong)iVar1 * 0x158);
  do {
    if ((this->InstallerActions).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<BuildPatchServices::FBuildPatchInstallerAction_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar8) {
      return false;
    }
    bVar3 = FInstallerAction::IsUpdate(this_00);
    if (bVar3) {
      if ((this_00[1].InstallManifest.Object == (IBuildManifest *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      puVar6 = (undefined8 *)(**(code **)((longlong)*this_00[1].InstallManifest.Object + 0x150))();
      if ((this_00[1].CurrentManifest.Object == (IBuildManifest *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      puVar7 = (undefined8 *)(**(code **)((longlong)*this_00[1].CurrentManifest.Object + 0x150))();
      iVar5 = *(int *)(puVar7 + 1);
      if (iVar5 == *(int *)(puVar6 + 1)) {
        if (iVar5 < 2) goto LAB_1431d350f;
        iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)*puVar7,(wchar_t *)*puVar6);
        bVar3 = iVar5 == 0;
      }
      else {
        bVar3 = *(int *)(puVar6 + 1) + iVar5 == 1;
      }
      if (!bVar3) {
        return true;
      }
    }
LAB_1431d350f:
    this_00 = (FInstallerAction *)&this_00[2].InstallTags.Elements.field_0x8;
  } while( true );
}

// GetChunkInfo @ 1431ddb40

FChunkInfo * __thiscall
BuildPatchServices::FBuildPatchManifestSet::GetChunkInfo
          (FBuildPatchManifestSet *this,FGuid *param_1)

{
  int iVar1;
  ulong64 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  uVar2 = CityHash64((char *)param_1,0x10);
  iVar1 = TSet<TTuple<FGuid,TTuple<BuildPatchServices::FChunkInfo_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>_>,TDefaultMapHashableKeyFuncs<FGuid,TTuple<BuildPatchServices::FChunkInfo_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,TTuple<BuildPatchServices::FChunkInfo_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>_>,TDefaultMapHashableKeyFuncs<FGuid,TTuple<BuildPatchServices::FChunkInfo_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>,0>,FDefaultSetAllocator>
                      *)&this->DataLookup,(uint)uVar2,param_1);
  if (iVar1 != -1) {
    lVar3 = (longlong)iVar1 * 0x30 + *(longlong *)&(this->DataLookup).field_0x0;
    puVar4 = (undefined8 *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    if (puVar4 != (undefined8 *)0x0) {
      return (FChunkInfo *)*puVar4;
    }
  }
  return (FChunkInfo *)0x0;
}

// GetChunkShaHash @ 1431ddc70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
BuildPatchServices::FBuildPatchManifestSet::GetChunkShaHash
          (FBuildPatchManifestSet *this,FGuid *param_1,FSHAHash *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  ulong64 uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  uVar4 = CityHash64((char *)param_1,0x10);
  iVar3 = TSet<TTuple<FGuid,TTuple<BuildPatchServices::FChunkInfo_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>_>,TDefaultMapHashableKeyFuncs<FGuid,TTuple<BuildPatchServices::FChunkInfo_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,TTuple<BuildPatchServices::FChunkInfo_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>_>,TDefaultMapHashableKeyFuncs<FGuid,TTuple<BuildPatchServices::FChunkInfo_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>,0>,FDefaultSetAllocator>
                      *)&this->DataLookup,(uint)uVar4,param_1);
  if (iVar3 != -1) {
    lVar5 = (longlong)iVar3 * 0x30 + *(longlong *)&(this->DataLookup).field_0x0;
    plVar6 = (longlong *)(lVar5 + 0x10);
    if (lVar5 == 0) {
      plVar6 = (longlong *)0x0;
    }
    if (plVar6 != (longlong *)0x0) {
      lVar5 = *plVar6;
      uVar2 = *(undefined8 *)(lVar5 + 0x20);
      *(undefined8 *)param_2->Hash = *(undefined8 *)(lVar5 + 0x18);
      *(undefined8 *)(param_2->Hash + 8) = uVar2;
      uVar1 = *(uint *)(lVar5 + 0x28);
      *(uint *)(param_2->Hash + 0x10) = uVar1;
      lVar5 = *(longlong *)param_2->Hash -
              (longlong)
              `public:_virtual_bool___cdecl_BuildPatchServices::FBuildPatchManifestSet::GetChunkShaHash(FGuid_const&___ptr64,FSHAHash&___ptr64)const___ptr64'
              ::__l2::Zero;
      if ((lVar5 == 0) && (lVar5 = *(longlong *)(param_2->Hash + 8) - _DAT_150a73660, lVar5 == 0)) {
        lVar5 = (ulonglong)uVar1 - (ulonglong)DAT_150a73668;
      }
      return lVar5 != 0;
    }
  }
  return false;
}

// GetCurrentFileManifest @ 1431de340

FFileManifest * __thiscall
BuildPatchServices::FBuildPatchManifestSet::GetCurrentFileManifest
          (FBuildPatchManifestSet *this,FString *param_1)

{
  TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>
  *pTVar1;
  
  pTVar1 = TMapBase<FString,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>,0>_>
           ::Find((TMapBase<FString,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>,0>_>
                   *)&this->CurrentFileLookup,param_1);
  if (pTVar1 != (TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>
                 *)0x0) {
    return *(FFileManifest **)pTVar1;
  }
  return (FFileManifest *)0x0;
}

// GetDataFilename @ 1431de470

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

FString * __thiscall
BuildPatchServices::FBuildPatchManifestSet::GetDataFilename
          (FBuildPatchManifestSet *this,FString *__return_storage_ptr__,FGuid *param_1)

{
  int iVar1;
  ulong64 uVar2;
  FString *pFVar3;
  FString *pFVar4;
  longlong lVar5;
  longlong lVar6;
  FString local_18;
  
  uVar2 = CityHash64((char *)param_1,0x10);
  iVar1 = TSet<TTuple<FGuid,TTuple<BuildPatchServices::FChunkInfo_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>_>,TDefaultMapHashableKeyFuncs<FGuid,TTuple<BuildPatchServices::FChunkInfo_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,TTuple<BuildPatchServices::FChunkInfo_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>_>,TDefaultMapHashableKeyFuncs<FGuid,TTuple<BuildPatchServices::FChunkInfo_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>,0>,FDefaultSetAllocator>
                      *)&this->DataLookup,(uint)uVar2,param_1);
  if (iVar1 != -1) {
    lVar5 = (longlong)iVar1 * 0x30 + *(longlong *)&(this->DataLookup).field_0x0;
    lVar6 = lVar5 + 0x10;
    if (lVar5 == 0) {
      lVar6 = 0;
    }
    if (lVar6 != 0) {
      pFVar3 = FBuildPatchUtils::GetDataFilename
                         (&local_18,*(FBuildPatchAppManifest **)(lVar6 + 8),param_1);
      pFVar4 = FInstallerAction::GetCloudSubdirectory(*(FInstallerAction **)(lVar6 + 0x10));
      ::operator/(__return_storage_ptr__,pFVar4,pFVar3);
      if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetDownloadSize @ 1431df860

ulong64 __thiscall
BuildPatchServices::FBuildPatchManifestSet::GetDownloadSize
          (FBuildPatchManifestSet *this,FGuid *param_1)

{
  int iVar1;
  ulong64 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  uVar2 = CityHash64((char *)param_1,0x10);
  iVar1 = TSet<TTuple<FGuid,TTuple<BuildPatchServices::FChunkInfo_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>_>,TDefaultMapHashableKeyFuncs<FGuid,TTuple<BuildPatchServices::FChunkInfo_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,TTuple<BuildPatchServices::FChunkInfo_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>_>,TDefaultMapHashableKeyFuncs<FGuid,TTuple<BuildPatchServices::FChunkInfo_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>,0>,FDefaultSetAllocator>
                      *)&this->DataLookup,(uint)uVar2,param_1);
  if (iVar1 != -1) {
    lVar3 = (longlong)iVar1 * 0x30 + *(longlong *)&(this->DataLookup).field_0x0;
    plVar4 = (longlong *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      plVar4 = (longlong *)0x0;
    }
    if (plVar4 != (longlong *)0x0) {
      return *(ulong64 *)(*plVar4 + 0x38);
    }
  }
  return 0;
}

// GetDownloadSize @ 1431df8e0

ulong64 __thiscall
BuildPatchServices::FBuildPatchManifestSet::GetDownloadSize
          (FBuildPatchManifestSet *this,
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_1)

{
  ulong64 uVar1;
  
  uVar1 = Algo::
          Accumulate<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,_BuildPatchServices::FBuildPatchManifestSet::GetDownloadSize_::__l2::<lambda_1>_>
                    (param_1,0,(<lambda_1>)this);
  return uVar1;
}

// GetExpectedFiles @ 1431dff80

void __thiscall
BuildPatchServices::FBuildPatchManifestSet::GetExpectedFiles
          (FBuildPatchManifestSet *this,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Reserve
            (param_1,((*(int *)&(param_1->Elements).field_0x8 -
                      *(int *)&(param_1->Elements).field_0x34) -
                     *(int *)&(this->NewFileLookup).field_0x34) +
                     *(int *)&(this->NewFileLookup).field_0x8);
  iVar11 = 0;
  puVar1 = &(this->NewFileLookup).field_0x10;
  iVar3 = *(int *)&(this->NewFileLookup).field_0x28;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->NewFileLookup).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1431e004d;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = iVar13 + -1 + local_res10;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_1431e004d:
  uVar10 = *(uint *)&(this->NewFileLookup).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->NewFileLookup).field_0x8 -
                       *(int *)&(this->NewFileLookup).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->NewFileLookup).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->NewFileLookup).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1431e0150;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_1431e0150:
  while( true ) {
    if (*(int *)&(this->NewFileLookup).field_0x8 - *(int *)&(this->NewFileLookup).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (param_1,(FString *)&stack0x00000018,
               (bool *)((longlong)TStack_60.CurrentBitIndex * 0x30 +
                       *(longlong *)&this->NewFileLookup));
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// GetFilesTaggedForRepair @ 1431e0900

void __thiscall
BuildPatchServices::FBuildPatchManifestSet::GetFilesTaggedForRepair
          (FBuildPatchManifestSet *this,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  bool *pbVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar12 = 0;
  puVar1 = &(this->NewFileLookup).field_0x10;
  iVar3 = *(int *)&(this->NewFileLookup).field_0x28;
  uVar6 = 1;
  iVar14 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->NewFileLookup).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1431e09ad;
      uVar11 = puVar15[lVar8 + 1];
    }
    uVar6 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar14;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_1431e09ad:
  uVar11 = *(uint *)&(this->NewFileLookup).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar12);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->NewFileLookup).field_0x8 -
                       *(int *)&(this->NewFileLookup).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->NewFileLookup).field_0x28;
  if (uVar11 != uVar6) {
    puVar13 = *(undefined1 **)&(this->NewFileLookup).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1431e0ab0;
      uVar11 = *(uint *)(puVar13 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = (int)lVar8 + -1 + uVar10;
    if ((int)uVar6 < (int)uVar11) {
      uVar11 = uVar6;
    }
  }
LAB_1431e0ab0:
  while( true ) {
    if (*(int *)&(this->NewFileLookup).field_0x8 - *(int *)&(this->NewFileLookup).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pbVar9 = (bool *)(*(longlong *)&this->NewFileLookup + (longlong)TStack_60.CurrentBitIndex * 0x30
                     );
    bVar5 = FInstallerAction::IsRepair(*(FInstallerAction **)(pbVar9 + 0x20));
    if (bVar5) {
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                (param_1,(FString *)&stack0x00000020,pbVar9);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// GetInstallResumeIds @ 1431e0cb0

void __thiscall
BuildPatchServices::FBuildPatchManifestSet::GetInstallResumeIds
          (FBuildPatchManifestSet *this,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1,bool param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  FString *pFVar5;
  bool *pbVar6;
  FInstallerAction *this_00;
  FInstallerAction *pFVar7;
  undefined1 local_res8 [8];
  undefined1 local_48 [8];
  FString local_40;
  
  iVar1 = (this->InstallerActions).ArrayNum;
  this_00 = (FInstallerAction *)(this->InstallerActions).AllocatorInstance.Data;
  pFVar7 = (FInstallerAction *)((longlong)this_00 + (longlong)iVar1 * 0x158);
  while( true ) {
    if ((this->InstallerActions).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<BuildPatchServices::FBuildPatchInstallerAction_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar7) break;
    bVar3 = FInstallerAction::IsUninstall(this_00);
    if (!bVar3) {
      if (param_2) {
        if (this_00[1].InstallManifest.Object == (IBuildManifest *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        pFVar4 = (FString *)(**(code **)((longlong)*this_00[1].InstallManifest.Object + 0x18))();
        if (this_00[1].InstallManifest.Object == (IBuildManifest *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        pFVar5 = (FString *)(**(code **)((longlong)*this_00[1].InstallManifest.Object + 0x10))();
        ::FString::ConcatFF(&local_40,pFVar5,pFVar4);
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
                  (param_1,(FString *)&stack0x00000020,(bool *)&local_40);
        if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_40.Data.AllocatorInstance.Data);
        }
      }
      if (this_00[1].InstallManifest.Object == (IBuildManifest *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pbVar6 = (bool *)(**(code **)((longlong)*this_00[1].InstallManifest.Object + 0x150))();
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                (param_1,(FString *)local_48,pbVar6);
    }
    this_00 = (FInstallerAction *)&this_00[2].InstallTags.Elements.field_0x8;
  }
  return;
}

// GetInstallResumeIdsForFile @ 1431e0e60

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
BuildPatchServices::FBuildPatchManifestSet::GetInstallResumeIdsForFile
          (FBuildPatchManifestSet *this,FString *param_1,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_2,bool param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>
  *pTVar4;
  FBuildPatchAppManifest *pFVar5;
  FString *pFVar6;
  FString *pFVar7;
  bool *pbVar8;
  undefined1 local_28 [8];
  FString local_20;
  
  pTVar4 = TMapBase<FString,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>,0>_>
           ::Find((TMapBase<FString,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>,0>_>
                   *)&this->NewFileLookup,param_1);
  if (pTVar4 != (TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>
                 *)0x0) {
    if (param_3) {
      pFVar5 = FBuildPatchInstallerAction::GetInstallManifest
                         (*(FBuildPatchInstallerAction **)&pTVar4->field_0x10);
      pFVar6 = (FString *)(**(code **)(pFVar5->_padding_ + 0x18))(pFVar5);
      pFVar5 = FBuildPatchInstallerAction::GetInstallManifest
                         (*(FBuildPatchInstallerAction **)&pTVar4->field_0x10);
      pFVar7 = (FString *)(**(code **)(pFVar5->_padding_ + 0x10))(pFVar5);
      ::FString::ConcatFF(&local_20,pFVar7,pFVar6);
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
                (param_2,(FString *)&stack0x00000008,(bool *)&local_20);
      if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_20.Data.AllocatorInstance.Data);
      }
    }
    lVar1 = *(longlong *)&pTVar4->field_0x10;
    if (*(longlong *)(lVar1 + 0xa8) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pbVar8 = (bool *)(**(code **)(**(longlong **)(lVar1 + 0xa8) + 0x150))();
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (param_2,(FString *)local_28,pbVar8);
  }
  return;
}

// GetNewFileManifest @ 1431e1580

FFileManifest * __thiscall
BuildPatchServices::FBuildPatchManifestSet::GetNewFileManifest
          (FBuildPatchManifestSet *this,FString *param_1)

{
  TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>
  *pTVar1;
  
  pTVar1 = TMapBase<FString,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>,0>_>
           ::Find((TMapBase<FString,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>,0>_>
                   *)&this->NewFileLookup,param_1);
  if (pTVar1 != (TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>
                 *)0x0) {
    return *(FFileManifest **)pTVar1;
  }
  return (FFileManifest *)0x0;
}

// GetNumExpectedFiles @ 1431e15c0

int __thiscall
BuildPatchServices::FBuildPatchManifestSet::GetNumExpectedFiles(FBuildPatchManifestSet *this)

{
  return *(int *)&(this->NewFileLookup).field_0x8 - *(int *)&(this->NewFileLookup).field_0x34;
}

// GetOutdatedFiles @ 1431e1dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
BuildPatchServices::FBuildPatchManifestSet::GetOutdatedFiles
          (FBuildPatchManifestSet *this,FString *param_1,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_2)

{
  int iVar1;
  FBuildPatchAppManifest *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  uint uVar7;
  ulonglong uVar8;
  <lambda_1> this_00;
  int iVar9;
  FBuildPatchInstallerAction *pFVar10;
  FScriptContainerElement *_Src;
  undefined1 auStackY_118 [32];
  undefined1 local_d8 [8];
  FString local_d0;
  uint local_c0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_b8;
  FString *local_b0;
  FBuildPatchInstallerAction *local_a8;
  FBuildPatchManifestSet *local_a0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_118;
  this_00.InstallerAction =
       (FBuildPatchInstallerAction *)(this->InstallerActions).AllocatorInstance.Data;
  local_c0 = (this->InstallerActions).ArrayNum;
  uVar8 = (ulonglong)(int)local_c0;
  pFVar10 = this_00.InstallerAction + uVar8;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  local_a8 = pFVar10;
  local_a0 = this;
  do {
    if ((local_a0->InstallerActions).ArrayNum != (int)uVar8) {
      local_d8[0] = 0;
      `TCheckedPointerIterator<BuildPatchServices::FBuildPatchInstallerAction_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_d8);
    }
    if (this_00.InstallerAction == pFVar10) {
      local_98.HashSize = 0;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_98.Elements);
      return;
    }
    bVar4 = FInstallerAction::IsUninstall(&(this_00.InstallerAction)->InstallerAction);
    if (!bVar4) {
      if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::UnhashElements(&local_98);
        TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements(&local_98.Elements,0,local_98.Elements._8_4_);
        bVar4 = (longlong)local_98.Elements._8_8_ < 0;
        local_98.Elements._8_8_ = local_98.Elements._8_8_ & 0xffffffff00000000;
        if (bVar4) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,0,(ForAnyElementType *)&local_98,0,(int *)&local_98.Elements.field_0xc);
        }
        local_98.Elements._48_4_ = 0xffffffff;
        local_98.Elements._52_4_ = 0;
        local_98.Elements._40_4_ = 0;
      }
      if (((this_00.InstallerAction)->InstallManifest).Object == (FBuildPatchAppManifest *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar2 = ((this_00.InstallerAction)->InstallManifest).Object;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x130);
      pFVar6 = FInstallerAction::GetInstallSubdirectory(&(this_00.InstallerAction)->InstallerAction)
      ;
      iVar1 = (param_1->Data).ArrayNum;
      iVar5 = (pFVar6->Data).ArrayNum;
      iVar9 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar9 = 0;
      }
      local_d0.Data.ArrayNum = iVar1;
      if ((iVar1 == 0) && (iVar9 != -1)) {
        _Src = (param_1->Data).AllocatorInstance.Data;
        iVar5 = iVar9 + 2;
LAB_1431e1f57:
        local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (iVar5 != 0) goto LAB_1431e1f60;
        local_d0.Data.ArrayMax = 0;
      }
      else {
        _Src = (param_1->Data).AllocatorInstance.Data;
        iVar5 = iVar9 + 1;
        if (iVar1 == 0) goto LAB_1431e1f57;
LAB_1431e1f60:
        local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        uVar7 = iVar1 + iVar5;
        if ((int)uVar7 < iVar1) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
        }
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar7,0,(ForAnyElementType *)&local_d0,iVar1,&local_d0.Data.ArrayMax);
        if (iVar1 != 0) {
          memcpy(local_d0.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
        }
      }
      ::FString::PathAppend(&local_d0,(wchar_t *)(pFVar6->Data).AllocatorInstance.Data,iVar9);
      (*pcVar3)(pFVar2,((this_00.InstallerAction)->CurrentManifest).Object,&local_d0);
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      Algo::
      Transform<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&,_BuildPatchServices::FBuildPatchManifestSet::GetOutdatedFiles_::__l9::<lambda_1>_>
                (&local_98,local_b8,this_00);
      pFVar10 = local_a8;
      param_1 = local_b0;
    }
    this_00.InstallerAction = this_00.InstallerAction + 1;
    uVar8 = (ulonglong)local_c0;
  } while( true );
}

// GetPreReqInfo @ 1431e2220

void __thiscall
BuildPatchServices::FBuildPatchManifestSet::GetPreReqInfo
          (FBuildPatchManifestSet *this,
          TArray<BuildPatchServices::FPreReqInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  IBuildManifest *pIVar3;
  void *pvVar4;
  ForAnyElementType _Src;
  FScriptContainerElement *_Src_00;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar10;
  undefined8 *puVar11;
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar12;
  ulonglong uVar13;
  FString *pFVar14;
  undefined4 *puVar15;
  FInstallerAction *this_00;
  uint uVar16;
  uint uVar17;
  FInstallerAction *pFVar18;
  undefined1 *puVar19;
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_01;
  undefined1 local_res18 [8];
  uint local_res20;
  FString local_58;
  
  this_00 = (FInstallerAction *)(this->InstallerActions).AllocatorInstance.Data;
  local_res20 = (this->InstallerActions).ArrayNum;
  uVar13 = (ulonglong)(int)local_res20;
  pFVar18 = (FInstallerAction *)((longlong)this_00 + uVar13 * 0x158);
  while( true ) {
    if ((this->InstallerActions).ArrayNum != (int)uVar13) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<BuildPatchServices::FBuildPatchInstallerAction_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (this_00 == pFVar18) break;
    bVar6 = FInstallerAction::IsUninstall(this_00);
    if (!bVar6) {
      if ((this_00[1].InstallManifest.Object == (IBuildManifest *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pIVar3 = this_00[1].InstallManifest.Object;
      lVar9 = (**(code **)((longlong)*pIVar3 + 0x40))(pIVar3);
      if (1 < *(int *)(lVar9 + 8)) {
        iVar7 = param_1->ArrayNum;
        if (iVar7 == param_1->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x8a8,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar7 + 1;
        this_01 = (TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 0xa8);
        DefaultConstructItems<BuildPatchServices::FPreReqInfo,int>(this_01,1);
        pTVar10 = (TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)(**(code **)((longlong)*pIVar3 + 0x30))(pIVar3);
        if (this_01 != pTVar10) {
          UE::Core::Private::
          CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                    ((ForElementType<FSetElementId> *)(this_01 + 1),(int *)&this_01[1].field_0x10,
                     (ForElementType<FSetElementId> *)(pTVar10 + 1),*(int *)&pTVar10[1].field_0x10);
          iVar7 = *(int *)&pTVar10->field_0x8;
          TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::Empty(this_01,iVar7);
          UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,iVar7,(ForAnyElementType *)this_01,(int *)&this_01->field_0x8,
                     (int *)&this_01->field_0xc);
          puVar1 = &pTVar10->field_0x10;
          *(undefined4 *)&this_01->field_0x30 = *(undefined4 *)&pTVar10->field_0x30;
          *(undefined4 *)&this_01->field_0x34 = *(undefined4 *)&pTVar10->field_0x34;
          if (&this_01->field_0x10 != puVar1) {
            TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                      ((TBitArray<FDefaultBitArrayAllocator> *)&this_01->field_0x10,
                       (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
          }
          uVar17 = 0;
          if (0 < iVar7) {
            uVar16 = 1;
            puVar15 = (undefined4 *)(*(longlong *)this_01 + 0x10);
            lVar9 = *(longlong *)pTVar10 - *(longlong *)this_01;
            do {
              if ((*(int *)&pTVar10->field_0x28 <= (int)uVar17) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index>=0 && Index<NumBits",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                     ,0x5c6,L""), bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              puVar19 = puVar1;
              if (*(undefined1 **)&pTVar10->field_0x20 != (undefined1 *)0x0) {
                puVar19 = *(undefined1 **)&pTVar10->field_0x20;
              }
              pFVar14 = (FString *)(lVar9 + -0x10 + (longlong)puVar15);
              if ((*(uint *)(puVar19 + (ulonglong)(uVar17 >> 5) * 4) & uVar16) == 0) {
                *(undefined4 *)&(((FString *)(puVar15 + -4))->Data).AllocatorInstance.Data =
                     *(undefined4 *)&(pFVar14->Data).AllocatorInstance.Data;
                puVar15[-3] = *(undefined4 *)((longlong)puVar15 + lVar9 + -0xc);
              }
              else {
                ::FString::FString((FString *)(puVar15 + -4),pFVar14);
                *puVar15 = *(undefined4 *)((longlong)puVar15 + lVar9);
                puVar15[1] = *(undefined4 *)((longlong)puVar15 + lVar9 + 4);
              }
              uVar17 = uVar17 + 1;
              uVar16 = uVar16 << 1 | (uint)((int)uVar16 < 0);
              puVar15 = puVar15 + 6;
            } while ((int)uVar17 < iVar7);
          }
        }
        puVar11 = (undefined8 *)(**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
        puVar1 = &this_01[2].field_0x10;
        if ((undefined8 *)puVar1 != puVar11) {
          iVar7 = *(int *)(puVar11 + 1);
          puVar19 = &this_01[2].field_0x1c;
          pvVar4 = (void *)*puVar11;
          *(int *)&this_01[2].field_0x18 = iVar7;
          if ((iVar7 == 0) && (*(int *)puVar19 == 0)) {
            *(undefined4 *)puVar19 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar7,*(int *)puVar19,(ForAnyElementType *)puVar1,iVar7,(int *)puVar19);
            if (iVar7 != 0) {
              memcpy(*(void **)puVar1,pvVar4,(longlong)iVar7 * 2);
            }
          }
        }
        pTVar12 = (TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)(**(code **)((longlong)*pIVar3 + 0x48))(pIVar3);
        pTVar10 = this_01 + 2;
        if (pTVar10 != pTVar12) {
          iVar7 = *(int *)&pTVar12->field_0x8;
          puVar1 = &this_01[2].field_0xc;
          _Src.Data = *(FScriptContainerElement **)pTVar12;
          *(int *)&this_01[2].field_0x8 = iVar7;
          if ((iVar7 == 0) && (*(int *)puVar1 == 0)) {
            *(undefined4 *)puVar1 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar7,*(int *)puVar1,(ForAnyElementType *)pTVar10,iVar7,(int *)puVar1);
            if (iVar7 != 0) {
              memcpy(*(FScriptContainerElement **)pTVar10,_Src.Data,(longlong)iVar7 * 2);
            }
          }
        }
        puVar11 = (undefined8 *)(**(code **)((longlong)*pIVar3 + 0x38))(pIVar3);
        puVar1 = &this_01[1].field_0x18;
        if ((undefined8 *)puVar1 != puVar11) {
          iVar7 = *(int *)(puVar11 + 1);
          puVar19 = &this_01[1].field_0x24;
          pvVar4 = (void *)*puVar11;
          *(int *)&this_01[1].field_0x20 = iVar7;
          if ((iVar7 == 0) && (*(int *)puVar19 == 0)) {
            *(undefined4 *)puVar19 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar7,*(int *)puVar19,(ForAnyElementType *)puVar1,iVar7,(int *)puVar19);
            if (iVar7 != 0) {
              memcpy(*(void **)puVar1,pvVar4,(longlong)iVar7 * 2);
            }
          }
        }
        puVar11 = (undefined8 *)(**(code **)((longlong)*pIVar3 + 0x40))(pIVar3);
        pFVar14 = FInstallerAction::GetInstallSubdirectory(this_00);
        iVar7 = *(int *)(puVar11 + 1) + -1;
        if (*(int *)(puVar11 + 1) == 0) {
          iVar7 = 0;
        }
        if (((pFVar14->Data).ArrayNum != 0) || (iVar8 = 2, iVar7 == -1)) {
          iVar8 = 1;
        }
        local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar2 = (pFVar14->Data).ArrayNum;
        _Src_00 = (pFVar14->Data).AllocatorInstance.Data;
        local_58.Data.ArrayNum = iVar2;
        if ((iVar2 == 0) && (iVar7 + iVar8 == 0)) {
          local_58.Data.ArrayNum = 0;
          local_58.Data.ArrayMax = 0;
        }
        else {
          uVar17 = iVar2 + iVar7 + iVar8;
          if ((int)uVar17 < iVar2) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
          }
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,uVar17,0,(ForAnyElementType *)&local_58,iVar2,&local_58.Data.ArrayMax);
          if (iVar2 != 0) {
            memcpy(local_58.Data.AllocatorInstance.Data,_Src_00,(longlong)iVar2 * 2);
          }
        }
        ::FString::PathAppend(&local_58,(wchar_t *)*puVar11,iVar7);
        puVar1 = &this_01[1].field_0x28;
        if ((FString *)puVar1 != &local_58) {
          if (*(void **)puVar1 != (void *)0x0) {
            FMemory::Free(*(void **)puVar1);
          }
          *(FScriptContainerElement **)puVar1 = local_58.Data.AllocatorInstance.Data;
          *(int *)&this_01[1].field_0x30 = local_58.Data.ArrayNum;
          *(int *)&this_01[1].field_0x34 = local_58.Data.ArrayMax;
          local_58.Data.ArrayNum = 0;
          local_58.Data.ArrayMax = 0;
          local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        puVar11 = (undefined8 *)(**(code **)((longlong)*pIVar3 + 0x18))(pIVar3);
        puVar1 = &this_01[2].field_0x20;
        if ((undefined8 *)puVar1 != puVar11) {
          iVar7 = *(int *)(puVar11 + 1);
          puVar19 = &this_01[2].field_0x2c;
          pvVar4 = (void *)*puVar11;
          *(int *)&this_01[2].field_0x28 = iVar7;
          if ((iVar7 == 0) && (*(int *)puVar19 == 0)) {
            *(undefined4 *)puVar19 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar7,*(int *)puVar19,(ForAnyElementType *)puVar1,iVar7,(int *)puVar19);
            if (iVar7 != 0) {
              memcpy(*(void **)puVar1,pvVar4,(longlong)iVar7 * 2);
            }
          }
        }
        bVar6 = FInstallerAction::IsRepair(this_00);
        this_01[2].field_0x30 = bVar6;
      }
    }
    this_00 = (FInstallerAction *)&this_00[2].InstallTags.Elements.field_0x8;
    uVar13 = (ulonglong)local_res20;
  }
  return;
}

// GetReferencedChunks @ 1431e2870

void __thiscall
BuildPatchServices::FBuildPatchManifestSet::GetReferencedChunks
          (FBuildPatchManifestSet *this,
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_1)

{
  int iVar1;
  IBuildManifest *pIVar2;
  code *pcVar3;
  bool bVar4;
  FInstallerAction *this_00;
  FInstallerAction *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->InstallerActions).ArrayNum;
  this_00 = (FInstallerAction *)(this->InstallerActions).AllocatorInstance.Data;
  pFVar5 = (FInstallerAction *)((longlong)this_00 + (longlong)iVar1 * 0x158);
  while( true ) {
    if ((this->InstallerActions).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<BuildPatchServices::FBuildPatchInstallerAction_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar5) break;
    bVar4 = FInstallerAction::IsUninstall(this_00);
    if (!bVar4) {
      if (this_00[1].InstallManifest.Object == (IBuildManifest *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pIVar2 = this_00[1].InstallManifest.Object;
      (**(code **)((longlong)*pIVar2 + 0x188))(pIVar2,&this_00[1].InstallSubdirectory,param_1);
    }
    this_00 = (FInstallerAction *)&this_00[2].InstallTags.Elements.field_0x8;
  }
  return;
}

// GetRemovableFiles @ 1431e2ef0

void __thiscall
BuildPatchServices::FBuildPatchManifestSet::GetRemovableFiles
          (FBuildPatchManifestSet *this,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  IBuildManifest *pIVar2;
  int iVar3;
  uint uVar4;
  FString *pFVar5;
  int iVar6;
  ulonglong uVar7;
  wchar_t *pwVar8;
  FInstallerAction *pFVar9;
  int iVar10;
  FString *pFVar11;
  IBuildManifest *pIVar12;
  FInstallerAction *this_00;
  FString *pFVar13;
  bool bVar14;
  undefined1 local_res18 [8];
  uint local_res20;
  undefined1 local_78 [16];
  FString local_68;
  FString *local_58;
  int local_50;
  
  local_res20 = (this->InstallerActions).ArrayNum;
  uVar7 = (ulonglong)(int)local_res20;
  this_00 = (FInstallerAction *)(this->InstallerActions).AllocatorInstance.Data;
  pFVar9 = (FInstallerAction *)((longlong)this_00 + uVar7 * 0x158);
  local_78._8_8_ = pFVar9;
  do {
    if ((this->InstallerActions).ArrayNum != (int)uVar7) {
      `TCheckedPointerIterator<BuildPatchServices::FBuildPatchInstallerAction_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (this_00 == pFVar9) {
      return;
    }
    pIVar12 = this_00[1].CurrentManifest.Object;
    if (pIVar12 != (IBuildManifest *)0x0) goto LAB_1431e2f70;
    pIVar12 = this_00[1].InstallManifest.Object;
    do {
      if (pIVar12 == (IBuildManifest *)0x0) break;
LAB_1431e2f70:
      (**(code **)((longlong)*pIVar12 + 0x88))(pIVar12,&local_58);
      iVar3 = local_50;
      pFVar13 = local_58 + local_50;
      pFVar11 = local_58;
      while( true ) {
        if (local_50 != iVar3) {
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (pFVar11 == pFVar13) break;
        pFVar5 = FInstallerAction::GetInstallSubdirectory(this_00);
        iVar6 = (pFVar11->Data).ArrayNum;
        iVar10 = iVar6 + -1;
        if (iVar6 == 0) {
          iVar10 = 0;
        }
        if (((pFVar5->Data).ArrayNum != 0) || (iVar6 = 1, iVar10 + 1 == 0)) {
          iVar6 = 0;
        }
        local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar6 = iVar10 + 1 + iVar6;
        iVar1 = (pFVar5->Data).ArrayNum;
        _Src = (pFVar5->Data).AllocatorInstance.Data;
        local_68.Data.ArrayNum = iVar1;
        if ((iVar1 == 0) && (iVar6 == 0)) {
          local_68.Data.ArrayMax = 0;
        }
        else {
          uVar4 = iVar1 + iVar6;
          if ((int)uVar4 < iVar1) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
          }
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,uVar4,0,(ForAnyElementType *)&local_68,iVar1,&local_68.Data.ArrayMax);
          if (iVar1 != 0) {
            memcpy(local_68.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
          }
        }
        ::FString::PathAppend(&local_68,(wchar_t *)(pFVar11->Data).AllocatorInstance.Data,iVar10);
        if (local_68.Data.ArrayNum == 0) {
          pwVar8 = L"";
          iVar6 = 0;
        }
        else {
          iVar6 = local_68.Data.ArrayNum + -1;
          pwVar8 = (wchar_t *)local_68.Data.AllocatorInstance.Data;
        }
        uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar8);
        iVar6 = TSet<TTuple<FString,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FString>
                          ((TSet<TTuple<FString,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>_>,TDefaultMapHashableKeyFuncs<FString,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>,0>,FDefaultSetAllocator>
                            *)&this->NewFileLookup,uVar4,&local_68);
        if (iVar6 == -1) {
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                    (param_1,(FString *)local_78,(bool *)&local_68);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        pFVar11 = pFVar11 + 1;
      }
      DestructItems<FString,int>(local_58,local_50);
      if (local_58 != (FString *)0x0) {
        FMemory::Free(local_58);
      }
      pIVar2 = this_00[1].InstallManifest.Object;
      bVar14 = pIVar2 != pIVar12;
      pFVar9 = (FInstallerAction *)local_78._8_8_;
      pIVar12 = pIVar2;
    } while (bVar14);
    this_00 = (FInstallerAction *)&this_00[2].InstallTags.Elements.field_0x8;
    uVar7 = (ulonglong)local_res20;
  } while( true );
}

// GetTotalNewFileSize @ 1431e3de0

ulong64 __thiscall
BuildPatchServices::FBuildPatchManifestSet::GetTotalNewFileSize
          (FBuildPatchManifestSet *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  ulong64 uVar5;
  undefined1 local_res10 [8];
  
  iVar1 = param_1->ArrayNum;
  uVar5 = 0;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar3 == pFVar4) break;
    lVar2 = (**(code **)(this->_padding_ + 0x70))(this,pFVar3);
    if (lVar2 != 0) {
      uVar5 = uVar5 + *(longlong *)(lVar2 + 0x58);
    }
    pFVar3 = pFVar3 + 0x10;
  }
  return uVar5;
}

// GetTotalNewFileSize @ 1431e3e70

ulong64 __thiscall
BuildPatchServices::FBuildPatchManifestSet::GetTotalNewFileSize
          (FBuildPatchManifestSet *this,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ulong64 uVar7;
  longlong lVar8;
  undefined1 *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar15;
  uint *puVar17;
  uint uVar18;
  undefined1 auStackX_18 [8];
  int iStackX_20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  ulong64 uVar14;
  ulong64 uVar16;
  
  uVar7 = 0;
  puVar1 = &(param_1->Elements).field_0x10;
  uVar11 = *(uint *)&(param_1->Elements).field_0x28;
  uVar13 = 0;
  uVar5 = 1;
  uVar15 = 0;
  iVar12 = 0;
  uVar6 = uVar13;
  if (uVar11 != 0) {
    puVar17 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar6 = *puVar17;
    uVar14 = uVar7;
    uVar16 = uVar7;
    uVar15 = 0;
    uVar13 = 0;
    while (uVar6 == 0) {
      iVar12 = (int)uVar14;
      uVar15 = (int)uVar16 + 0x20;
      uVar16 = (ulong64)uVar15;
      uVar13 = iVar12 + 1;
      uVar14 = (ulong64)uVar13;
      if ((int)(((int)(uVar11 - 1) >> 0x1f & 0x1fU) + (uVar11 - 1)) >> 5 < (int)uVar13) {
        iVar12 = *(int *)&(param_1->Elements).field_0x28;
        uVar6 = uVar11;
        goto LAB_1431b39c4;
      }
      uVar6 = puVar17[(longlong)iVar12 + 1];
    }
    iVar12 = *(int *)&(param_1->Elements).field_0x28;
    uVar5 = -uVar6 & uVar6;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iStackX_20 = (int)lVar8;
    uVar6 = iStackX_20 + -1 + uVar15;
    if (iVar12 < (int)uVar6) {
      uVar6 = uVar11;
    }
  }
LAB_1431b39c4:
  uVar11 = *(uint *)&(param_1->Elements).field_0x28;
  uVar18 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar5,uVar13);
  TStack_60.CurrentBitIndex = uVar6;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar11 >> 5;
  TStack_60._28_4_ = uVar6;
  TStack_60.BaseBitIndex = uVar15;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar12 < (int)uVar11)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return uVar7;
  }
  uVar15 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar11 != uVar15) {
    puVar9 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar9 + (longlong)iVar10 * 4);
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar10;
      uVar18 = uVar18 + 0x20;
      iVar10 = iVar10 + 1;
      uVar11 = uVar15;
      if ((int)(((int)(uVar15 - 1) >> 0x1f & 0x1fU) + (uVar15 - 1)) >> 5 < iVar10)
      goto LAB_1431b3ac0;
      uVar11 = *(uint *)(puVar9 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = (int)lVar8 + -1 + uVar18;
    if ((int)uVar15 < (int)uVar11) {
      uVar11 = uVar15;
    }
  }
LAB_1431b3ac0:
  while( true ) {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(auStackX_18);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar8 = (**(code **)(this->_padding_ + 0x70))
                      (this,*(longlong *)&param_1->Elements +
                            (longlong)TStack_60.CurrentBitIndex * 0x18);
    if (lVar8 != 0) {
      uVar7 = uVar7 + *(longlong *)(lVar8 + 0x58);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return uVar7;
}

// HasFileAttributes @ 1431e52a0

bool __thiscall
BuildPatchServices::FBuildPatchManifestSet::HasFileAttributes(FBuildPatchManifestSet *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FInstallerAction *this_00;
  FInstallerAction *pFVar6;
  undefined1 local_res8 [8];
  
  iVar1 = (this->InstallerActions).ArrayNum;
  this_00 = (FInstallerAction *)(this->InstallerActions).AllocatorInstance.Data;
  pFVar6 = (FInstallerAction *)((longlong)this_00 + (longlong)iVar1 * 0x158);
  while( true ) {
    if ((this->InstallerActions).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<BuildPatchServices::FBuildPatchInstallerAction_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar6) break;
    bVar3 = FInstallerAction::IsUninstall(this_00);
    if (!bVar3) {
      if ((this_00[1].InstallManifest.Object == (IBuildManifest *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      cVar5 = (**(code **)((longlong)*this_00[1].InstallManifest.Object + 0x240))();
      if (cVar5 != '\0') {
        return true;
      }
    }
    this_00 = (FInstallerAction *)&this_00[2].InstallTags.Elements.field_0x8;
  }
  return false;
}

// IsFileRepairAction @ 1431e7c80

bool __thiscall
BuildPatchServices::FBuildPatchManifestSet::IsFileRepairAction
          (FBuildPatchManifestSet *this,FString *param_1)

{
  bool bVar1;
  TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>
  *pTVar2;
  
  pTVar2 = TMapBase<FString,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>,0>_>
           ::Find((TMapBase<FString,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>,0>_>
                   *)&this->NewFileLookup,param_1);
  if (pTVar2 != (TTuple<BuildPatchServices::FFileManifest_const_*_const,FBuildPatchAppManifest_const_*_const,BuildPatchServices::FBuildPatchInstallerAction_const_*_const>
                 *)0x0) {
    bVar1 = FInstallerAction::IsRepair(*(FInstallerAction **)&pTVar2->field_0x10);
    return bVar1;
  }
  return false;
}

// IsRepairOnly @ 1431e7d00

bool __thiscall
BuildPatchServices::FBuildPatchManifestSet::IsRepairOnly(FBuildPatchManifestSet *this)

{
  int iVar1;
  bool bVar2;
  FInstallerAction *this_00;
  FInstallerAction *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->InstallerActions).ArrayNum;
  bVar2 = false;
  this_00 = (FInstallerAction *)(this->InstallerActions).AllocatorInstance.Data;
  pFVar3 = (FInstallerAction *)((longlong)this_00 + (longlong)iVar1 * 0x158);
  while( true ) {
    if ((this->InstallerActions).ArrayNum != iVar1) {
      `TCheckedPointerIterator<BuildPatchServices::FBuildPatchInstallerAction_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar3) break;
    bVar2 = FInstallerAction::IsRepair(this_00);
    if (!bVar2) {
      return false;
    }
    bVar2 = true;
    this_00 = (FInstallerAction *)&this_00[2].InstallTags.Elements.field_0x8;
  }
  return bVar2;
}

