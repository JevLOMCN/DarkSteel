// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// GetAllPlatformInfos @ 1418dc800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMap<FName,FDataDrivenPlatformInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>_>
* __cdecl FDataDrivenPlatformInfoRegistry::GetAllPlatformInfos(void)

{
  void *pvVar1;
  FName FVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar9;
  TMap<FName,FDataDrivenPlatformInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>_>
  *pTVar10;
  FString *pFVar11;
  TTuple<FString,FString> *pTVar12;
  TTuple<FName,FDataDrivenPlatformInfo> *pTVar13;
  int iVar14;
  int iVar15;
  FConfigSection *pFVar16;
  longlong lVar17;
  wchar_t *pwVar18;
  int iVar19;
  FName *pFVar20;
  FConfigSection *pFVar21;
  ForAnyElementType FVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  uint uVar26;
  FConfigSection *pFVar27;
  FScriptContainerElement *pFVar28;
  uint uVar29;
  uint *puVar30;
  uint uVar31;
  int iVar32;
  ulonglong uVar33;
  undefined1 auStackY_3c8 [32];
  FIdentityFunctor local_377;
  undefined1 local_376 [6];
  FString local_370;
  ForAnyElementType local_360;
  undefined8 local_358;
  FName local_350;
  uint local_348;
  FString local_340;
  TArray<FString,TSizedDefaultAllocator<32>_> local_330;
  int local_320;
  uint local_31c;
  FString local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  TMap<FName,FDataDrivenPlatformInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>_>
  *local_2c8;
  uint uStack_2c0;
  uint uStack_2bc;
  undefined8 local_2b8;
  undefined4 uStack_2b0;
  uint uStack_2ac;
  uint local_2a8;
  uint uStack_2a4;
  int iStack_2a0;
  undefined4 uStack_29c;
  undefined1 local_298 [8];
  int local_290;
  int local_28c;
  FName local_288;
  undefined8 local_280;
  FString *pFStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  void *local_260;
  undefined8 uStack_258;
  FString *local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  FString local_220;
  undefined8 local_210;
  void *pvStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  TMap<FName,FDataDrivenPlatformInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>_>
  *local_1f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1e8;
  undefined8 uStack_1c8;
  FName *local_1c0;
  undefined8 *local_1b8;
  FString *local_1b0;
  FString *local_1a8;
  FName *local_1a0;
  FName *local_198;
  FString local_190;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  local_178;
  FConfigFile local_128;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  if (!bHasSearchedForPlatforms) {
    bHasSearchedForPlatforms = true;
    pTVar9 = GetDataDrivenIniFilenames();
    iVar32 = 0;
    iVar19 = pTVar9->ArrayNum;
    local_178.Elements._0_8_ = 0;
    local_178.Elements._8_8_ = 0;
    local_178.Elements._32_8_ = 0;
    local_178.Elements._40_4_ = 0;
    local_178.Elements._44_4_ = 0x80;
    local_178.Elements._48_4_ = 0xffffffff;
    local_178.Elements._52_4_ = 0;
    local_178.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_178.HashSize = 0;
    if (0 < iVar19) {
      do {
        pFVar27 = (FConfigSection *)0x0;
        FConfigFile::FConfigFile(&local_128);
        local_340.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_340.Data.ArrayNum = 0;
        local_340.Data.ArrayMax = 0;
        LoadDataDrivenIniFile(iVar32,&local_128,&local_340);
        FVar22.Data = (FScriptContainerElement *)L"";
        if (local_340.Data.ArrayNum != 0) {
          FVar22.Data = local_340.Data.AllocatorInstance.Data;
        }
        ::FName::FName(&local_350,(wchar_t *)FVar22.Data);
        ::FString::FString(&local_2f8,L"DataDrivenPlatformInfo");
        AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
        iVar8 = local_2f8.Data.ArrayNum;
        FVar22.Data = (FScriptContainerElement *)L"";
        if (iVar8 != 0) {
          FVar22.Data = local_2f8.Data.AllocatorInstance.Data;
        }
        iVar14 = 0;
        iVar15 = iVar8 + -1;
        if (iVar8 == 0) {
          iVar15 = iVar14;
        }
        uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar15,(wchar_t *)FVar22.Data);
        iVar8 = TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FString>
                          ((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                            *)&local_128,uVar7,&local_2f8);
        ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
        if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
        }
        if (iVar8 != -1) {
          local_230 = 0xffffffff;
          uStack_228 = 0;
          local_280 = 0;
          pFStack_278 = (FString *)0x0;
          local_270 = 0;
          uStack_268 = 0;
          local_260 = (void *)0x0;
          uStack_258 = 0;
          local_250 = (FString *)0x0;
          uStack_248 = 0;
          local_240 = 0;
          uStack_238 = 0;
          local_220.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_220.Data.ArrayNum = 0;
          local_220.Data.ArrayMax = 0;
          local_210 = 0;
          pvStack_208 = (void *)0x0;
          local_200 = 0;
          uStack_1f8 = 0;
          ::FString::FString(&local_220,"Gamepad");
          FVar2 = local_350;
          local_210 = CONCAT44(local_210._4_4_,0x10100);
          pvStack_208 = (void *)0x0;
          local_200 = 0;
          uStack_1f8 = 0;
          uVar7 = ::GetTypeHash(local_350.ComparisonIndex.Value);
          uVar7 = uVar7 + FVar2.Number;
          if (DataDrivenPlatforms._8_4_ != DataDrivenPlatforms._52_4_) {
            lVar24 = 0x154b7f5f8;
            if (DataDrivenPlatforms._64_8_ != 0) {
              lVar24 = DataDrivenPlatforms._64_8_;
            }
            uVar31 = *(uint *)(lVar24 + (ulonglong)(DataDrivenPlatforms._72_4_ - 1 & uVar7) * 4);
            while (uVar31 != 0xffffffff) {
              pFVar20 = (FName *)((longlong)(int)uVar31 * 0xa0 + DataDrivenPlatforms._0_8_);
              if (*pFVar20 == local_350) {
                if (pFVar20 != (FName *)0x0) goto LAB_1418dcacc;
                break;
              }
              uVar31 = pFVar20[0x13].ComparisonIndex.Value;
            }
          }
          local_1c0 = &local_350;
          local_1b8 = &local_280;
          TSet<TTuple<FName,FDataDrivenPlatformInfo>,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TPairInitializer<FName_const_&,FDataDrivenPlatformInfo_&&>_>
                    ((TSet<TTuple<FName,FDataDrivenPlatformInfo>,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>,FDefaultSetAllocator>
                      *)&DataDrivenPlatforms,(uint)&local_320,
                     (TPairInitializer<FName_const_&,FDataDrivenPlatformInfo_&&> *)(ulonglong)uVar7,
                     (bool *)&local_1c0);
          pFVar20 = (FName *)((longlong)local_320 * 0xa0 + DataDrivenPlatforms._0_8_);
LAB_1418dcacc:
          if (pvStack_208 != (void *)0x0) {
            FMemory::Free(pvStack_208);
          }
          if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_220.Data.AllocatorInstance.Data);
          }
          DestructItems<FString,int>(local_250,(int)uStack_248);
          if (local_250 != (FString *)0x0) {
            FMemory::Free(local_250);
          }
          if (local_260 != (void *)0x0) {
            FMemory::Free(local_260);
          }
          DestructItems<FString,int>(pFStack_278,(int)local_270);
          if (pFStack_278 != (FString *)0x0) {
            FMemory::Free(pFStack_278);
          }
          LoadDDPIIniSettings(&local_128,(FDataDrivenPlatformInfo *)(pFVar20 + 1),local_350);
          pFVar20[1] = local_350;
          local_308.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_308.Data.ArrayNum = 0;
          local_308.Data.ArrayMax = 0;
          ::FString::FString(&local_2e8,L"DataDrivenPlatformInfo");
          AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
          iVar8 = local_2e8.Data.ArrayNum + -1;
          FVar22.Data = local_2e8.Data.AllocatorInstance.Data;
          if (local_2e8.Data.ArrayNum == 0) {
            iVar8 = iVar14;
            FVar22.Data = (FScriptContainerElement *)L"";
          }
          uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,(wchar_t *)FVar22.Data);
          iVar8 = TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                  ::FindIndexByHash<FString>
                            ((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                              *)&local_128,uVar7,&local_2e8);
          pFVar16 = pFVar27;
          if (iVar8 != -1) {
            pFVar16 = (FConfigSection *)((longlong)iVar8 * 0x110 + local_128._padding_);
          }
          pFVar21 = (FConfigSection *)&pFVar16->_padding_;
          if (pFVar16 == (FConfigSection *)0x0) {
            pFVar21 = pFVar27;
          }
          ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
          if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
          }
          bVar5 = false;
          if (pFVar21 != (FConfigSection *)0x0) {
            bVar5 = FConfigSection::GetString(pFVar21,L"IniParent",&local_308);
          }
          iVar8 = local_340.Data.ArrayNum + -1;
          FVar22.Data = local_340.Data.AllocatorInstance.Data;
          if (local_340.Data.ArrayNum == 0) {
            iVar8 = iVar14;
            FVar22.Data = (FScriptContainerElement *)L"";
          }
          uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,(wchar_t *)FVar22.Data);
          iVar8 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                  ::FindIndexByHash<FString>(&local_178,uVar7,&local_340);
          if ((iVar8 == -1) || (bVar5 != false)) {
            local_1b0 = &local_340;
            local_1a8 = &local_308;
            TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
                      (&local_178,(TPairInitializer<FString_const_&,FString_const_&> *)local_298,
                       (bool *)&local_1b0);
          }
          local_318.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_318.Data.ArrayNum = 0;
          local_318.Data.ArrayMax = 0;
          ::FString::FString(&local_2d8,L"DataDrivenPlatformInfo");
          AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
          iVar8 = local_2d8.Data.ArrayNum + -1;
          FVar22.Data = local_2d8.Data.AllocatorInstance.Data;
          if (local_2d8.Data.ArrayNum == 0) {
            iVar8 = iVar14;
            FVar22.Data = (FScriptContainerElement *)L"";
          }
          uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,(wchar_t *)FVar22.Data);
          iVar8 = TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                  ::FindIndexByHash<FString>
                            ((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                              *)&local_128,uVar7,&local_2d8);
          pFVar16 = pFVar27;
          if (iVar8 != -1) {
            pFVar16 = (FConfigSection *)((longlong)iVar8 * 0x110 + local_128._padding_);
          }
          pFVar21 = (FConfigSection *)&pFVar16->_padding_;
          if (pFVar16 == (FConfigSection *)0x0) {
            pFVar21 = pFVar27;
          }
          ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
          if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
          }
          if (pFVar21 != (FConfigSection *)0x0) {
            FConfigSection::GetString(pFVar21,L"PlatformNameAliases",&local_318);
          }
          local_330.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_330.ArrayNum = 0;
          local_330.ArrayMax = 0;
          ::FString::ParseIntoArrayWS(&local_318,&local_330,L",",true);
          iVar8 = local_330.ArrayNum;
          pFVar28 = local_330.AllocatorInstance.Data + (longlong)local_330.ArrayNum * 0x10;
          FVar22.Data = local_330.AllocatorInstance.Data;
          while( true ) {
            if (local_330.ArrayNum != iVar8) {
              local_376[0] = 0;
              `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_376);
            }
            if (FVar22.Data == pFVar28) break;
            if (*(int *)(FVar22.Data + 8) == 0) {
              pwVar18 = L"";
            }
            else {
              pwVar18 = *(wchar_t **)FVar22.Data;
            }
            ::FName::FName(&local_288,pwVar18);
            local_1a0 = &local_288;
            local_198 = &local_350;
            TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FName_&&,FName_const_&>_>
                      ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                        *)&GlobalPlatformNameAliases,
                       (TPairInitializer<FName_&&,FName_const_&> *)(local_298 + 4),
                       (bool *)&local_1a0);
            FVar22.Data = FVar22.Data + 0x10;
          }
          DestructItems<FString,int>((FString *)local_330.AllocatorInstance.Data,local_330.ArrayNum)
          ;
          if (local_330.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_330.AllocatorInstance.Data);
          }
          if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_318.Data.AllocatorInstance.Data);
          }
          if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_308.Data.AllocatorInstance.Data);
          }
        }
        if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_340.Data.AllocatorInstance.Data);
        }
        FConfigFile::~FConfigFile(&local_128);
        iVar32 = iVar32 + 1;
      } while (iVar32 < iVar19);
    }
    uVar7 = 0;
    uVar25 = 0;
    uStack_2bc = 1;
    uVar31 = DataDrivenPlatforms._40_4_;
    uStack_2ac = uVar7;
    uStack_2c0 = uVar7;
    local_2a8 = uVar7;
    if (uVar31 != 0) {
      puVar30 = (uint *)&DataDrivenPlatforms.field_0x10;
      if (DataDrivenPlatforms._32_8_ != 0) {
        puVar30 = (uint *)DataDrivenPlatforms._32_8_;
      }
      uVar26 = *puVar30;
      uVar33 = uVar25;
      uVar23 = uVar25;
      local_2a8 = 0;
      uStack_2c0 = 0;
      while (uVar26 == 0) {
        iVar19 = (int)uVar33;
        local_2a8 = (int)uVar23 + 0x20;
        uVar23 = (ulonglong)local_2a8;
        uStack_2c0 = iVar19 + 1;
        uVar33 = (ulonglong)uStack_2c0;
        uStack_2ac = uVar31;
        if ((int)((uVar31 - 1) + ((int)(uVar31 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_2c0)
        goto LAB_1418dcea2;
        uVar26 = puVar30[(longlong)iVar19 + 1];
      }
      uStack_2bc = -uVar26 & uVar26;
      uVar33 = (ulonglong)uStack_2bc * 2 + 1;
      lVar24 = 0x3f;
      if (uVar33 != 0) {
        for (; uVar33 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      local_290 = (int)lVar24;
      uStack_2ac = (local_2a8 - 1) + local_290;
      if ((int)uVar31 < (int)uStack_2ac) {
        uStack_2ac = uVar31;
      }
    }
LAB_1418dcea2:
    bVar4 = DataDrivenPlatforms._40_1_;
    uVar33 = DataDrivenPlatforms._40_8_ & 0xffffffff;
    iStack_2a0 = DataDrivenPlatforms._8_4_ - DataDrivenPlatforms._52_4_;
    local_2b8 = 0x154b7f5d0;
    uStack_2b0 = 0xffffffff;
    uVar26 = uVar31 & 0xffffffe0;
    TStack_1e8.CurrentBitIndex = uStack_2ac;
    TStack_1e8.UnvisitedBitMask = 0xffffffff;
    local_2c8 = &DataDrivenPlatforms;
    TStack_1e8._padding_ = CONCAT44(uStack_2bc,uStack_2c0);
    local_1f0 = &DataDrivenPlatforms;
    iVar19 = (int)uVar31 >> 5;
    TStack_1e8._28_4_ = uStack_2ac;
    TStack_1e8.BaseBitIndex = local_2a8;
    uStack_1c8 = CONCAT44(uStack_29c,iStack_2a0);
    TStack_1e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)&DataDrivenPlatforms.field_0x10;
    uStack_2a4 = uStack_2ac;
    if (((int)uVar31 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TMap<FName,FDataDrivenPlatformInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>_>
                 *)(*pcVar3)();
      return pTVar10;
    }
    uVar29 = DataDrivenPlatforms._40_4_;
    if (uVar31 != uVar29) {
      lVar24 = 0x154b7f5d0;
      if (DataDrivenPlatforms._32_8_ != 0) {
        lVar24 = DataDrivenPlatforms._32_8_;
      }
      uVar31 = -1 << (bVar4 & 0x1f) & *(uint *)(lVar24 + (longlong)iVar19 * 4);
      while (uVar31 == 0) {
        lVar17 = (longlong)iVar19;
        uVar26 = uVar26 + 0x20;
        iVar19 = iVar19 + 1;
        if ((int)((uVar29 - 1) + ((int)(uVar29 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19) {
          uVar33 = DataDrivenPlatforms._40_8_ & 0xffffffff;
          goto LAB_1418dcfb3;
        }
        uVar31 = *(uint *)(lVar24 + 4 + lVar17 * 4);
      }
      uVar33 = (ulonglong)(-uVar31 & uVar31) * 2 + 1;
      lVar24 = 0x3f;
      if (uVar33 != 0) {
        for (; uVar33 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      local_28c = (int)lVar24;
      uVar31 = (uVar26 - 1) + local_28c;
      uVar33 = (ulonglong)uVar31;
      if ((int)uVar29 < (int)uVar31) {
        uVar33 = DataDrivenPlatforms._40_8_ & 0xffffffff;
      }
    }
LAB_1418dcfb3:
    do {
      pTVar10 = local_1f0;
      if (*(int *)&local_1f0->field_0x8 - *(int *)&local_1f0->field_0x34 != (int)uStack_1c8) {
        local_377 = (FIdentityFunctor)0x0;
        `TSparseArray<TSparseSetElement<TTuple<FName,FDataDrivenPlatformInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_377);
      }
      if (((TStack_1e8.CurrentBitIndex == (int)uVar33) &&
          (TStack_1e8.Array ==
           (TBitArray<FDefaultBitArrayAllocator> *)&DataDrivenPlatforms.field_0x10)) &&
         (pTVar10 == &DataDrivenPlatforms)) goto LAB_1418dd2f7;
      pFVar20 = (FName *)((longlong)TStack_1e8.CurrentBitIndex * 0xa0 + *(longlong *)pTVar10);
      pFVar11 = ::FName::ToString(pFVar20,&local_190);
      pTVar12 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                ::Find(&local_178,pFVar11);
      local_370.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (pTVar12 == (TTuple<FString,FString> *)0x0) {
        uVar23 = 0;
        local_370.Data.ArrayNum = 0;
LAB_1418dd0a1:
        local_370.Data.ArrayMax = 0;
      }
      else {
        local_370.Data.ArrayNum = *(int *)&pTVar12->field_0x18;
        uVar23 = (ulonglong)local_370.Data.ArrayNum;
        pvVar1 = *(void **)&pTVar12->field_0x10;
        if (local_370.Data.ArrayNum == 0) goto LAB_1418dd0a1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_370.Data.ArrayNum,0,(ForAnyElementType *)&local_370,
                   local_370.Data.ArrayNum,&local_370.Data.ArrayMax);
        memcpy(local_370.Data.AllocatorInstance.Data,pvVar1,uVar23 * 2);
        uVar23 = (ulonglong)(uint)local_370.Data.ArrayNum;
      }
      if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_190.Data.AllocatorInstance.Data);
        uVar23 = (ulonglong)(uint)local_370.Data.ArrayNum;
      }
      while( true ) {
        FVar22.Data = (FScriptContainerElement *)L"";
        if ((int)uVar23 != 0) {
          FVar22.Data = local_370.Data.AllocatorInstance.Data;
        }
        iVar19 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar22.Data,L"");
        if (iVar19 == 0) break;
        if ((((ulonglong)pFVar20[2] <= &local_370) &&
            (&local_370 <
             (FString *)((longlong)(int)pFVar20[3].Number * 0x10 + (longlong)pFVar20[2]))) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar10 = (TMap<FName,FDataDrivenPlatformInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>_>
                     *)(*pcVar3)();
          return pTVar10;
        }
        uVar31 = pFVar20[3].ComparisonIndex.Value;
        if (uVar31 == pFVar20[3].Number) {
          uVar31 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,(ForAnyElementType *)(pFVar20 + 2),(int *)&pFVar20[3].Number);
        }
        FVar2 = pFVar20[2];
        pFVar20[3].ComparisonIndex.Value = uVar31 + 1;
        memmove((void *)((longlong)FVar2 + 0x10),(void *)FVar2,(longlong)(int)uVar31 << 4);
        FVar22.Data = local_370.Data.AllocatorInstance.Data;
        FVar2 = pFVar20[2];
        *(FScriptContainerElement **)FVar2 = (FScriptContainerElement *)0x0;
        lVar24 = (longlong)local_370.Data.ArrayNum;
        *(int *)&((ForAnyElementType *)((longlong)FVar2 + 8))->Data = local_370.Data.ArrayNum;
        if (local_370.Data.ArrayNum == 0) {
          *(int *)((longlong)FVar2 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_370.Data.ArrayNum,0,(ForAnyElementType *)FVar2,
                     local_370.Data.ArrayNum,(int *)((longlong)FVar2 + 0xc));
          memcpy(*(FScriptContainerElement **)FVar2,FVar22.Data,lVar24 * 2);
        }
        uVar31 = local_370.Data.ArrayNum - 1;
        FVar22.Data = local_370.Data.AllocatorInstance.Data;
        if (local_370.Data.ArrayNum == 0) {
          uVar31 = uVar7;
          FVar22.Data = (FScriptContainerElement *)L"";
        }
        uVar31 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar31,(wchar_t *)FVar22.Data);
        iVar19 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FString>(&local_178,uVar31,&local_370);
        if ((iVar19 == -1) ||
           (lVar24 = local_178.Elements._0_8_ + (longlong)iVar19 * 0x28, lVar24 == 0)) {
          local_360.Data = (FScriptContainerElement *)0x0;
          local_358 = 0;
        }
        else {
          local_360.Data = (FScriptContainerElement *)0x0;
          iVar19 = *(int *)(lVar24 + 0x18);
          pvVar1 = *(void **)(lVar24 + 0x10);
          local_358 = CONCAT44(local_358._4_4_,iVar19);
          if (iVar19 == 0) {
            local_358 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar19,0,&local_360,iVar19,(int *)((longlong)&local_358 + 4));
            memcpy(local_360.Data,pvVar1,(longlong)iVar19 * 2);
          }
        }
        if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_370.Data.AllocatorInstance.Data);
        }
        local_370.Data.AllocatorInstance.Data = local_360.Data;
        local_370.Data.ArrayNum = (uint)local_358;
        uVar23 = local_358 & 0xffffffff;
        local_370.Data.ArrayMax = local_358._4_4_;
        local_360.Data = (FScriptContainerElement *)0x0;
        local_358 = 0;
      }
      if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_370.Data.AllocatorInstance.Data);
      }
      TStack_1e8.UnvisitedBitMask = TStack_1e8.UnvisitedBitMask & ~TStack_1e8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1e8);
    } while( true );
  }
  goto LAB_1418dd81b;
LAB_1418dd2f7:
  TMapBase<FName,FDataDrivenPlatformInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,FDataDrivenPlatformInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>_>
              *)&DataDrivenPlatforms,&AllSortedPlatformNames);
  AlgoImpl::
  IntroSortInternal<FName,int,FIdentityFunctor,_FDataDrivenPlatformInfoRegistry::GetAllPlatformInfos_::__l5::<lambda_1>_>
            ((FName *)AllSortedPlatformNames.AllocatorInstance.Data,AllSortedPlatformNames.ArrayNum,
             local_377,(<lambda_1>)local_377);
  iVar19 = AllSortedPlatformNames.ArrayNum;
  FVar22 = AllSortedPlatformNames.AllocatorInstance;
  SortedPlatformNames.ArrayNum = AllSortedPlatformNames.ArrayNum;
  if ((AllSortedPlatformNames.ArrayNum == 0) && (SortedPlatformNames.ArrayMax == 0)) {
    SortedPlatformNames.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,AllSortedPlatformNames.ArrayNum,SortedPlatformNames.ArrayMax,
               &SortedPlatformNames.AllocatorInstance,AllSortedPlatformNames.ArrayNum,
               &SortedPlatformNames.ArrayMax);
    if (iVar19 != 0) {
      memcpy(SortedPlatformNames.AllocatorInstance.Data,FVar22.Data,(longlong)iVar19 << 3);
    }
  }
  FVar22.Data = SortedPlatformNames.AllocatorInstance.Data;
  lVar24 = (longlong)SortedPlatformNames.ArrayNum;
  uVar31 = SortedPlatformNames.ArrayNum;
  if (SortedPlatformNames.ArrayNum != 0) {
    local_348 = 0;
    pTVar13 = TSet<TTuple<FName,FDataDrivenPlatformInfo>,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,FDataDrivenPlatformInfo>,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>,FDefaultSetAllocator>
                      *)&DataDrivenPlatforms,*(FName *)SortedPlatformNames.AllocatorInstance.Data);
    if ((pTVar13 == (TTuple<FName,FDataDrivenPlatformInfo> *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TMap<FName,FDataDrivenPlatformInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>_>
                 *)(*pcVar3)();
      return pTVar10;
    }
    bVar5 = pTVar13->field_0x21 == '\0';
    uVar31 = uVar7;
    uVar26 = uVar7;
joined_r0x0001418dd42d:
    do {
      local_31c = uVar26;
      uVar25 = uVar25 + 1;
      uVar7 = uVar7 + 1;
      if ((longlong)uVar25 < lVar24) {
        pTVar13 = TSet<TTuple<FName,FDataDrivenPlatformInfo>,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FName,FDataDrivenPlatformInfo>,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>,FDefaultSetAllocator>
                          *)&DataDrivenPlatforms,*(FName *)(FVar22.Data + uVar25 * 8));
        if ((pTVar13 == (TTuple<FName,FDataDrivenPlatformInfo> *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Pair != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                               ,0x288,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          pTVar10 = (TMap<FName,FDataDrivenPlatformInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>_>
                     *)(*pcVar3)();
          return pTVar10;
        }
        uVar31 = local_348;
        uVar26 = local_31c;
        if (bVar5 == (pTVar13->field_0x21 == '\0')) goto joined_r0x0001418dd42d;
      }
      iVar19 = uVar7 - local_31c;
      if (bVar5 != false) {
        if (uVar31 != local_31c) {
          memmove(FVar22.Data + (longlong)(int)uVar31 * 8,FVar22.Data + (longlong)(int)local_31c * 8
                  ,(longlong)iVar19 << 3);
        }
        uVar31 = uVar31 + iVar19;
        local_348 = uVar31;
      }
      bVar5 = (bool)(bVar5 ^ 1);
      uVar26 = uVar7;
    } while ((longlong)uVar25 < lVar24);
  }
  SortedPlatformNames.ArrayNum = uVar31;
  iVar19 = AllSortedPlatformNames.ArrayNum;
  uVar23 = 0;
  iVar32 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (8,8,AllSortedPlatformNames.ArrayNum,&AllSortedPlatformInfos.AllocatorInstance,
                      &AllSortedPlatformInfos.ArrayNum,&AllSortedPlatformInfos.ArrayMax);
  memset(AllSortedPlatformInfos.AllocatorInstance.Data + (longlong)iVar32 * 8,0,
         (longlong)iVar19 << 3);
  uVar7 = 0;
  uVar25 = uVar23;
  uVar33 = uVar23;
  if (0 < AllSortedPlatformInfos.ArrayNum) {
    do {
      uVar26 = (uint)uVar25;
      uVar31 = uVar7;
      if ((int)uVar26 < AllSortedPlatformNames.ArrayNum) {
        uVar31 = ~uVar26 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar10 = (TMap<FName,FDataDrivenPlatformInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>_>
                   *)(*pcVar3)();
        return pTVar10;
      }
      pTVar13 = TSet<TTuple<FName,FDataDrivenPlatformInfo>,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,FDataDrivenPlatformInfo>,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>,FDefaultSetAllocator>
                        *)&DataDrivenPlatforms,
                       *(FName *)(AllSortedPlatformNames.AllocatorInstance.Data + uVar33));
      if ((pTVar13 == (TTuple<FName,FDataDrivenPlatformInfo> *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x288,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar10 = (TMap<FName,FDataDrivenPlatformInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>_>
                   *)(*pcVar3)();
        return pTVar10;
      }
      uVar31 = uVar7;
      if ((int)uVar26 < AllSortedPlatformInfos.ArrayNum) {
        uVar31 = ~uVar26 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar10 = (TMap<FName,FDataDrivenPlatformInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>_>
                   *)(*pcVar3)();
        return pTVar10;
      }
      *(undefined1 **)(AllSortedPlatformInfos.AllocatorInstance.Data + uVar33) = &pTVar13->field_0x8
      ;
      uVar25 = (ulonglong)(uVar26 + 1);
      uVar33 = uVar33 + 8;
    } while ((int)(uVar26 + 1) < AllSortedPlatformInfos.ArrayNum);
  }
  lVar24 = (longlong)SortedPlatformNames.ArrayNum;
  iVar19 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (8,8,SortedPlatformNames.ArrayNum,&SortedPlatformInfos.AllocatorInstance,
                      &SortedPlatformInfos.ArrayNum,&SortedPlatformInfos.ArrayMax);
  memset(SortedPlatformInfos.AllocatorInstance.Data + (longlong)iVar19 * 8,0,lVar24 << 3);
  uVar25 = uVar23;
  if (0 < SortedPlatformInfos.ArrayNum) {
    do {
      uVar26 = (uint)uVar23;
      uVar31 = uVar7;
      if ((int)uVar26 < SortedPlatformNames.ArrayNum) {
        uVar31 = ~uVar26 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar10 = (TMap<FName,FDataDrivenPlatformInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>_>
                   *)(*pcVar3)();
        return pTVar10;
      }
      pTVar13 = TSet<TTuple<FName,FDataDrivenPlatformInfo>,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,FDataDrivenPlatformInfo>,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>,FDefaultSetAllocator>
                        *)&DataDrivenPlatforms,
                       *(FName *)(SortedPlatformNames.AllocatorInstance.Data + uVar25));
      if ((pTVar13 == (TTuple<FName,FDataDrivenPlatformInfo> *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x288,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar10 = (TMap<FName,FDataDrivenPlatformInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>_>
                   *)(*pcVar3)();
        return pTVar10;
      }
      uVar31 = uVar7;
      if ((int)uVar26 < SortedPlatformInfos.ArrayNum) {
        uVar31 = ~uVar26 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar10 = (TMap<FName,FDataDrivenPlatformInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>_>
                   *)(*pcVar3)();
        return pTVar10;
      }
      uVar23 = (ulonglong)(uVar26 + 1);
      *(undefined1 **)(SortedPlatformInfos.AllocatorInstance.Data + uVar25) = &pTVar13->field_0x8;
      uVar25 = uVar25 + 8;
    } while ((int)(uVar26 + 1) < SortedPlatformInfos.ArrayNum);
  }
  local_178.HashSize = 0;
  if (local_178.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_178.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_178.Elements);
LAB_1418dd81b:
  return &DataDrivenPlatforms;
}

// GetConfidentialPlatforms @ 1418ddba0

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
FDataDrivenPlatformInfoRegistry::GetConfidentialPlatforms(void)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FString *pFVar5;
  code *pcVar6;
  TMap<FName,FDataDrivenPlatformInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>_>
  *pTVar7;
  bool bVar8;
  TMap<FName,FDataDrivenPlatformInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>_>
  *pTVar9;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong lVar11;
  int iVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  undefined8 local_138;
  undefined8 local_130;
  ForAnyElementType local_128;
  int local_120;
  int local_11c;
  char local_118;
  undefined1 local_117;
  FString local_110;
  ForAnyElementType local_100;
  int local_f8;
  int local_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined1 local_dc;
  undefined1 local_db;
  undefined1 local_da;
  undefined1 local_d9;
  undefined1 local_d8;
  undefined1 local_d7;
  FString local_d0;
  undefined1 local_c0;
  undefined1 local_bf;
  undefined1 local_be;
  undefined1 local_bd;
  FString local_b8;
  undefined8 local_a8;
  TMap<FName,FDataDrivenPlatformInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<FName,FDataDrivenPlatformInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`FDataDrivenPlatformInfoRegistry::GetConfidentialPlatforms'::__l2::
           _dynamic_atexit_destructor_for__FoundPlatforms__);
    _Init_thread_footer(&::_TSS0);
  }
  if (bHasSearchedForPlatforms != false) {
    return &FoundPlatforms;
  }
  pTVar9 = GetAllPlatformInfos();
  iVar3 = *(int *)&pTVar9->field_0x28;
  iStack_90 = 0;
  local_78 = 0;
  uStack_8c = 1;
  puVar1 = &pTVar9->field_0x10;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&pTVar9->field_0x20;
    if (*(uint **)&pTVar9->field_0x20 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar15 = *puVar17;
    while (uVar15 == 0) {
      lVar11 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_1418ddca0;
      uVar15 = puVar17[lVar11 + 1];
    }
    uStack_8c = -uVar15 & uVar15;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res10 = (int)lVar11;
    iStack_7c = local_res10 + -1 + local_78;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_1418ddca0:
  uVar15 = *(uint *)&pTVar9->field_0x28;
  uVar14 = uVar15 & 0xffffffe0;
  iStack_70 = *(int *)&pTVar9->field_0x8 - *(int *)&pTVar9->field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar15 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = pTVar9;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = pTVar9;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar3 < (int)uVar15)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pTVar10 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar10;
  }
  uVar4 = *(uint *)&pTVar9->field_0x28;
  if (uVar15 != uVar4) {
    puVar16 = *(undefined1 **)&pTVar9->field_0x20;
    if (*(undefined1 **)&pTVar9->field_0x20 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar12 * 4);
    while (uVar15 == 0) {
      lVar11 = (longlong)iVar12;
      uVar14 = uVar14 + 0x20;
      iVar12 = iVar12 + 1;
      uVar15 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1418dddb0;
      uVar15 = *(uint *)(puVar16 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res18 = (int)lVar11;
    uVar15 = local_res18 + -1 + uVar14;
    if ((int)uVar4 < (int)uVar15) {
      uVar15 = uVar4;
    }
  }
LAB_1418dddb0:
  while( true ) {
    pTVar7 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FDataDrivenPlatformInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar15) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar9))
    break;
    puVar13 = (undefined8 *)(*(longlong *)pTVar7 + (longlong)TStack_60.CurrentBitIndex * 0xa0);
    local_138 = *puVar13;
    local_130 = puVar13[1];
    local_128.Data = (FScriptContainerElement *)0x0;
    iVar3 = *(int *)(puVar13 + 3);
    pFVar5 = (FString *)puVar13[2];
    local_120 = iVar3;
    if (iVar3 == 0) {
      local_11c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar3,0,&local_128,iVar3,&local_11c);
      ConstructItems<FString,FString,int>(local_128.Data,pFVar5,iVar3);
    }
    local_118 = *(char *)(puVar13 + 4);
    local_117 = *(undefined1 *)((longlong)puVar13 + 0x21);
    ::FString::FString(&local_110,(FString *)(puVar13 + 5));
    local_100.Data = (FScriptContainerElement *)0x0;
    iVar3 = *(int *)(puVar13 + 8);
    pFVar5 = (FString *)puVar13[7];
    local_f8 = iVar3;
    if (iVar3 == 0) {
      local_f4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar3,0,&local_100,iVar3,&local_f4);
      ConstructItems<FString,FString,int>(local_100.Data,pFVar5,iVar3);
    }
    local_f0 = puVar13[9];
    uStack_e8 = puVar13[10];
    local_e0 = *(undefined4 *)(puVar13 + 0xb);
    local_dc = *(undefined1 *)((longlong)puVar13 + 0x5c);
    local_db = *(undefined1 *)((longlong)puVar13 + 0x5d);
    local_da = *(undefined1 *)((longlong)puVar13 + 0x5e);
    local_d9 = *(undefined1 *)((longlong)puVar13 + 0x5f);
    local_d8 = *(undefined1 *)(puVar13 + 0xc);
    local_d7 = *(undefined1 *)((longlong)puVar13 + 0x61);
    ::FString::FString(&local_d0,(FString *)(puVar13 + 0xd));
    local_c0 = *(undefined1 *)(puVar13 + 0xf);
    local_bf = *(undefined1 *)((longlong)puVar13 + 0x79);
    local_be = *(undefined1 *)((longlong)puVar13 + 0x7a);
    local_bd = *(undefined1 *)((longlong)puVar13 + 0x7b);
    ::FString::FString(&local_b8,(FString *)(puVar13 + 0x10));
    local_a8 = puVar13[0x12];
    if (local_118 != '\0') {
      if (((FoundPlatforms.AllocatorInstance.Data <= (FScriptContainerElement *)&local_138) &&
          ((FScriptContainerElement *)&local_138 <
           FoundPlatforms.AllocatorInstance.Data + (longlong)FoundPlatforms.ArrayMax * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        pTVar10 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar10;
      }
      if (FoundPlatforms.ArrayNum == FoundPlatforms.ArrayMax) {
        FoundPlatforms.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&FoundPlatforms.AllocatorInstance,&FoundPlatforms.ArrayMax);
      }
      lVar11 = (longlong)FoundPlatforms.ArrayNum;
      FoundPlatforms.ArrayNum = FoundPlatforms.ArrayNum + 1;
      *(undefined8 *)(FoundPlatforms.AllocatorInstance.Data + lVar11 * 8) = local_138;
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    DestructItems<FString,int>((FString *)local_100.Data,local_f8);
    if (local_100.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data);
    }
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
    DestructItems<FString,int>((FString *)local_128.Data,local_120);
    if (local_128.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  bHasSearchedForPlatforms = true;
  return &FoundPlatforms;
}

// GetNumDataDrivenIniFiles @ 1418e0270

int __cdecl FDataDrivenPlatformInfoRegistry::GetNumDataDrivenIniFiles(void)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  
  pTVar1 = GetDataDrivenIniFilenames();
  return pTVar1->ArrayNum;
}

// GetPlatformDirectoryNames @ 1418e0a30

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
FDataDrivenPlatformInfoRegistry::GetPlatformDirectoryNames(bool param_1)

{
  undefined1 *puVar1;
  int iVar2;
  FName FVar3;
  code *pcVar4;
  undefined4 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TMap<FName,FDataDrivenPlatformInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>_>
  *pTVar9;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar10;
  FString *pFVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  FName *pFVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  int iVar20;
  undefined1 *puVar21;
  int iVar22;
  uint *puVar23;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  TMap<FName,FDataDrivenPlatformInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>_>
  *local_res20;
  undefined4 uStack_13c;
  FName local_128;
  undefined1 local_120 [72];
  FName FStack_d8;
  uint local_d0;
  bool local_cc;
  bool local_cb;
  bool local_ca;
  bool local_c9;
  bool local_c8;
  bool local_c7;
  FString local_c0;
  bool local_b0;
  bool local_af;
  bool local_ae;
  bool local_ad;
  FString local_a8;
  FName local_98;
  TMap<FName,FDataDrivenPlatformInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>_>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  FString local_58;
  
  uVar14 = (ulonglong)param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`FDataDrivenPlatformInfoRegistry::GetPlatformDirectoryNames'::__l2::
           _dynamic_atexit_destructor_for__PlatformDirectories__);
    _Init_thread_footer(&::_TSS0);
  }
  if (bHasSearchedForPlatforms[uVar14] == false) {
    bHasSearchedForPlatforms[uVar14] = true;
    pTVar9 = GetAllPlatformInfos();
    iVar2 = *(int *)&pTVar9->field_0x28;
    iVar20 = 0;
    iVar22 = 0;
    puVar1 = &pTVar9->field_0x10;
    uVar7 = 1;
    iVar8 = 0;
    if (iVar2 != 0) {
      puVar23 = *(uint **)&pTVar9->field_0x20;
      if (*(uint **)&pTVar9->field_0x20 == (uint *)0x0) {
        puVar23 = (uint *)puVar1;
      }
      uVar18 = *puVar23;
      while (uVar18 == 0) {
        lVar13 = (longlong)iVar20;
        iVar22 = iVar22 + 0x20;
        iVar20 = iVar20 + 1;
        iVar8 = iVar2;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_1418e0b50;
        uVar18 = puVar23[lVar13 + 1];
      }
      uVar7 = -uVar18 & uVar18;
      uVar12 = (ulonglong)uVar7 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_res18 = (int)lVar13;
      iVar8 = local_res18 + -1 + iVar22;
      if (iVar2 < iVar8) {
        iVar8 = iVar2;
      }
    }
LAB_1418e0b50:
    uVar18 = *(uint *)&pTVar9->field_0x28;
    uVar17 = uVar18 & 0xffffffe0;
    TStack_80._padding_ = CONCAT44(uVar7,iVar20);
    TStack_80.CurrentBitIndex = iVar8;
    TStack_80.UnvisitedBitMask = 0xffffffff;
    iVar20 = (int)uVar18 >> 5;
    TStack_80._28_4_ = iVar8;
    TStack_80.BaseBitIndex = iVar22;
    uStack_60 = CONCAT44(uStack_13c,*(int *)&pTVar9->field_0x8 - *(int *)&pTVar9->field_0x34);
    local_res20 = pTVar9;
    local_88 = pTVar9;
    TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar18 < 0) || (iVar2 < (int)uVar18)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar10;
    }
    uVar7 = *(uint *)&pTVar9->field_0x28;
    if (uVar18 != uVar7) {
      puVar21 = *(undefined1 **)&pTVar9->field_0x20;
      if (*(undefined1 **)&pTVar9->field_0x20 == (undefined1 *)0x0) {
        puVar21 = puVar1;
      }
      uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar20 * 4);
      while (uVar18 == 0) {
        lVar13 = (longlong)iVar20;
        uVar17 = uVar17 + 0x20;
        iVar20 = iVar20 + 1;
        uVar18 = uVar7;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
        goto LAB_1418e0c59;
        uVar18 = *(uint *)(puVar21 + lVar13 * 4 + 4);
      }
      uVar12 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      uVar18 = (int)lVar13 + -1 + uVar17;
      if ((int)uVar7 < (int)uVar18) {
        uVar18 = uVar7;
      }
    }
LAB_1418e0c59:
    lVar13 = uVar14 << 4;
    while( true ) {
      pTVar9 = local_88;
      if (*(int *)&local_88->field_0x8 - *(int *)&local_88->field_0x34 != (int)uStack_60) {
        `TSparseArray<TSparseSetElement<TTuple<FName,FDataDrivenPlatformInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
        lVar13 = uVar14 << 4;
      }
      if (((TStack_80.CurrentBitIndex == uVar18) &&
          (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar9 == local_res20)) break;
      pFVar15 = (FName *)(*(longlong *)pTVar9 + (longlong)TStack_80.CurrentBitIndex * 0xa0);
      local_128 = *pFVar15;
      local_120._0_8_ = pFVar15[1];
      local_120._8_8_ = (FScriptContainerElement *)0x0;
      uVar7 = pFVar15[3].ComparisonIndex.Value;
      FVar3 = pFVar15[2];
      local_120._16_4_ = uVar7;
      if (uVar7 == 0) {
        local_120._20_4_ = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,uVar7,0,(ForAnyElementType *)(local_120 + 8),uVar7,
                   (int *)(local_120 + 0x14));
        ConstructItems<FString,FString,int>((void *)local_120._8_8_,(FString *)FVar3,uVar7);
      }
      local_120[0x18] = (undefined1)pFVar15[4].ComparisonIndex.Value;
      local_120[0x19] = *(undefined1 *)((longlong)&pFVar15[4].ComparisonIndex.Value + 1);
      ::FString::FString((FString *)(local_120 + 0x20),(FString *)(pFVar15 + 5));
      local_120._48_8_ = (FScriptContainerElement *)0x0;
      uVar7 = pFVar15[8].ComparisonIndex.Value;
      FVar3 = pFVar15[7];
      local_120._56_4_ = uVar7;
      if (uVar7 == 0) {
        local_120._60_4_ = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,uVar7,0,(ForAnyElementType *)(local_120 + 0x30),uVar7,
                   (int *)(local_120 + 0x3c));
        ConstructItems<FString,FString,int>((void *)local_120._48_8_,(FString *)FVar3,uVar7);
      }
      local_120._64_8_ = pFVar15[9];
      FStack_d8 = pFVar15[10];
      local_d0 = pFVar15[0xb].ComparisonIndex.Value;
      local_cc = SUB41(pFVar15[0xb].Number,0);
      local_cb = *(bool *)((longlong)&pFVar15[0xb].Number + 1);
      local_ca = *(bool *)((longlong)&pFVar15[0xb].Number + 2);
      local_c9 = *(bool *)((longlong)&pFVar15[0xb].Number + 3);
      local_c8 = SUB41(pFVar15[0xc].ComparisonIndex.Value,0);
      local_c7 = *(bool *)((longlong)&pFVar15[0xc].ComparisonIndex.Value + 1);
      ::FString::FString(&local_c0,(FString *)(pFVar15 + 0xd));
      local_b0 = SUB41(pFVar15[0xf].ComparisonIndex.Value,0);
      local_af = *(bool *)((longlong)&pFVar15[0xf].ComparisonIndex.Value + 1);
      local_ae = *(bool *)((longlong)&pFVar15[0xf].ComparisonIndex.Value + 2);
      local_ad = *(bool *)((longlong)&pFVar15[0xf].ComparisonIndex.Value + 3);
      ::FString::FString(&local_a8,(FString *)(pFVar15 + 0x10));
      local_98 = pFVar15[0x12];
      pFVar11 = ::FName::ToString(&local_128,&local_58);
      lVar13 = uVar14 * 0x10;
      TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>
                (PlatformDirectories + uVar14,pFVar11);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      uVar5 = local_120._56_4_;
      uVar12 = (ulonglong)(int)local_120._56_4_;
      pFVar19 = (FScriptContainerElement *)(local_120._48_8_ + uVar12 * 0x10);
      pFVar16 = (FScriptContainerElement *)local_120._48_8_;
      while( true ) {
        if ((uint)uVar12 != uVar5) {
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (pFVar16 == pFVar19) break;
        TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
                  (PlatformDirectories + uVar14,(FString *)pFVar16);
        uVar12 = (ulonglong)(uint)local_120._56_4_;
        pFVar16 = pFVar16 + 0x10;
      }
      FDataDrivenPlatformInfo::~FDataDrivenPlatformInfo((FDataDrivenPlatformInfo *)local_120);
      TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
    }
  }
  else {
    lVar13 = uVar14 << 4;
  }
  return (TArray<FString,TSizedDefaultAllocator<32>_> *)
         ((longlong)&PlatformDirectories[0].AllocatorInstance.Data + lVar13);
}

// GetPlatformInfo @ 1418e0f40

FDataDrivenPlatformInfo * __cdecl FDataDrivenPlatformInfoRegistry::GetPlatformInfo(FString *param_1)

{
  FName *pFVar1;
  FDataDrivenPlatformInfo *pFVar2;
  wchar_t *pwVar3;
  FName local_res8 [4];
  
  if ((param_1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar1 = ::FName::FName(local_res8,pwVar3);
  pFVar2 = GetPlatformInfo(*pFVar1);
  return pFVar2;
}

// GetPlatformInfo @ 1418e0f80

FDataDrivenPlatformInfo * __cdecl FDataDrivenPlatformInfoRegistry::GetPlatformInfo(char *param_1)

{
  FName *pFVar1;
  FDataDrivenPlatformInfo *pFVar2;
  FName local_res10 [3];
  
  pFVar1 = ::FName::FName(local_res10,param_1);
  pFVar2 = GetPlatformInfo(*pFVar1);
  return pFVar2;
}

// GetPlatformInfo @ 1418e0fb0

FDataDrivenPlatformInfo * __cdecl FDataDrivenPlatformInfoRegistry::GetPlatformInfo(FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TSet<TTuple<FName,FDataDrivenPlatformInfo>,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>,FDefaultSetAllocator>
  *pTVar5;
  TTuple<FName,FDataDrivenPlatformInfo> *pTVar6;
  FDataDrivenPlatformInfo *pFVar7;
  FDataDrivenPlatformInfo *pFVar8;
  longlong lVar9;
  
  pTVar5 = (TSet<TTuple<FName,FDataDrivenPlatformInfo>,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>,FDefaultSetAllocator>
            *)GetAllPlatformInfos();
  pTVar6 = TSet<TTuple<FName,FDataDrivenPlatformInfo>,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>,FDefaultSetAllocator>
           ::Find(pTVar5,param_1);
  pFVar8 = (FDataDrivenPlatformInfo *)0x0;
  pFVar7 = (FDataDrivenPlatformInfo *)&pTVar6->field_0x8;
  if (pTVar6 == (TTuple<FName,FDataDrivenPlatformInfo> *)0x0) {
    pFVar7 = pFVar8;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(&::Empty.DefaultInputType,"Gamepad");
    ::Empty.bSupportsMouseAndKeyboard = false;
    ::Empty.bSupportsGamepad = true;
    ::Empty.bCanChangeGamepadType = true;
    ::Empty.bSupportsTouch = false;
    ::Empty.HardwareCompressionFormat.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ::Empty.HardwareCompressionFormat.Data.ArrayNum = 0;
    ::Empty.HardwareCompressionFormat.Data.ArrayMax = 0;
    ::Empty.OverrideCookPlatformName.ComparisonIndex.Value = 0;
    ::Empty.OverrideCookPlatformName.Number = 0;
    atexit(`FDataDrivenPlatformInfoRegistry::GetPlatformInfo'::__l2::
           _dynamic_atexit_destructor_for__Empty__);
    _Init_thread_footer(&::_TSS0);
  }
  if (pFVar7 == (FDataDrivenPlatformInfo *)0x0) {
    uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    if (GlobalPlatformNameAliases._8_4_ != GlobalPlatformNameAliases._52_4_) {
      lVar9 = 0x154b7f648;
      if (GlobalPlatformNameAliases._64_8_ != 0) {
        lVar9 = GlobalPlatformNameAliases._64_8_;
      }
      for (iVar4 = *(int *)(lVar9 + (ulonglong)
                                    (GlobalPlatformNameAliases._72_4_ - 1 & uVar3 + param_1.Number)
                                    * 4); iVar4 != -1;
          iVar4 = *(int *)(GlobalPlatformNameAliases._0_8_ + 0x10 + (longlong)iVar4 * 0x18)) {
        if (*(FName *)(GlobalPlatformNameAliases._0_8_ + (longlong)iVar4 * 0x18) == param_1) {
          pTVar5 = (TSet<TTuple<FName,FDataDrivenPlatformInfo>,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>,FDefaultSetAllocator>
                    *)GetAllPlatformInfos();
          uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
          pFVar7 = pFVar8;
          if (GlobalPlatformNameAliases._8_4_ == GlobalPlatformNameAliases._52_4_)
          goto LAB_1418e10fb;
          lVar9 = 0x154b7f648;
          if (GlobalPlatformNameAliases._64_8_ != 0) {
            lVar9 = GlobalPlatformNameAliases._64_8_;
          }
          iVar4 = *(int *)(lVar9 + (ulonglong)
                                   (GlobalPlatformNameAliases._72_4_ - 1 & uVar3 + param_1.Number) *
                                   4);
          if (iVar4 == -1) goto LAB_1418e10fb;
          goto LAB_1418e10e0;
        }
      }
    }
  }
  goto LAB_1418e1147;
  while (iVar4 = (pFVar7->IniParentChain).ArrayNum, pFVar7 = pFVar8, iVar4 != -1) {
LAB_1418e10e0:
    pFVar7 = (FDataDrivenPlatformInfo *)(GlobalPlatformNameAliases._0_8_ + (longlong)iVar4 * 0x18);
    if (*(FName *)(GlobalPlatformNameAliases._0_8_ + (longlong)iVar4 * 0x18) == param_1) {
      if (pFVar7 != (FDataDrivenPlatformInfo *)0x0) goto LAB_1418e1121;
      break;
    }
  }
LAB_1418e10fb:
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar7 = (FDataDrivenPlatformInfo *)(*pcVar1)();
    return pFVar7;
  }
LAB_1418e1121:
  pTVar6 = TSet<TTuple<FName,FDataDrivenPlatformInfo>,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>,FDefaultSetAllocator>
           ::Find(pTVar5,(FName)(pFVar7->IniParentChain).AllocatorInstance.Data);
  pFVar7 = (FDataDrivenPlatformInfo *)&pTVar6->field_0x8;
  if (pTVar6 == (TTuple<FName,FDataDrivenPlatformInfo> *)0x0) {
    pFVar7 = pFVar8;
  }
LAB_1418e1147:
  pFVar8 = &::Empty;
  if (pFVar7 != (FDataDrivenPlatformInfo *)0x0) {
    pFVar8 = pFVar7;
  }
  return pFVar8;
}

// GetSortedPlatformInfos @ 1418e17c0

TArray<FDataDrivenPlatformInfo_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FDataDrivenPlatformInfoRegistry::GetSortedPlatformInfos(EPlatformInfoType param_1)

{
  TArray<FDataDrivenPlatformInfo_const_*,TSizedDefaultAllocator<32>_> *pTVar1;
  
  GetAllPlatformInfos();
  pTVar1 = &SortedPlatformInfos;
  if (param_1 == AllPlatformInfos) {
    pTVar1 = &AllSortedPlatformInfos;
  }
  return pTVar1;
}

// GetSortedPlatformNames @ 1418e17f0

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
FDataDrivenPlatformInfoRegistry::GetSortedPlatformNames
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          EPlatformInfoType param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  
  GetAllPlatformInfos();
  pTVar2 = &SortedPlatformNames;
  if (param_1 == AllPlatformInfos) {
    pTVar2 = &AllSortedPlatformNames;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = pTVar2->ArrayNum;
  _Src = (pTVar2->AllocatorInstance).Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
  return __return_storage_ptr__;
}

// LoadDataDrivenIniFile @ 1418e56d0

/* WARNING: Enum "EPathConversion": Some values do not have unique names */

bool __cdecl
FDataDrivenPlatformInfoRegistry::LoadDataDrivenIniFile
          (int param_1,FConfigFile *param_2,FString *param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar8;
  IFileManager *pIVar9;
  FArchive *pFVar10;
  FString *pFVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  byte bVar14;
  longlong lVar15;
  uint uVar16;
  FString local_168;
  FScriptContainerElement *local_158;
  FScriptContainerElement *local_148;
  uint uStack_140;
  undefined4 uStack_13c;
  FString local_138;
  FString local_128;
  TStringView<wchar_t> local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  pTVar8 = GetDataDrivenIniFilenames();
  if ((param_1 < 0) || (pTVar8->ArrayNum <= param_1)) {
    return false;
  }
  pFVar2 = (pTVar8->AllocatorInstance).Data;
  lVar15 = (longlong)param_1 * 0x10;
  uVar16 = (uint)~param_1 >> 0x1f;
  if (*(int *)(pFVar2 + lVar15 + 8) == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = *(wchar_t **)(pFVar2 + lVar15);
  }
  bVar14 = 0;
  bVar4 = false;
  local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.Data.ArrayNum = 0;
  local_168.Data.ArrayMax = 0;
  pIVar9 = IFileManager::Get();
  pFVar10 = (FArchive *)(**(code **)((longlong)*pIVar9 + 0x18))(pIVar9,pwVar13);
  if (pFVar10 != (FArchive *)0x0) {
    bVar4 = FFileHelper::LoadFileToString(&local_168,pFVar10,None);
    (*(code *)**(undefined8 **)pFVar10)(pFVar10,1);
  }
  iVar1 = local_168.Data.ArrayNum;
  local_158 = local_168.Data.AllocatorInstance.Data;
  local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.Data.ArrayNum = 0;
  local_168.Data.ArrayMax = 0;
  if (bVar4 == false) {
    bVar4 = false;
  }
  else {
    uVar6 = 0;
    uVar7 = uVar6;
    if (param_1 < pTVar8->ArrayNum) {
      uVar7 = uVar16;
    }
    if ((uVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    local_148 = local_158;
    uStack_140 = iVar1 - 1;
    if (iVar1 == 0) {
      uStack_140 = uVar6;
    }
    local_118._12_4_ = uStack_13c;
    local_118.Size = uStack_140;
    local_118.DataPtr = (wchar_t *)local_158;
    FConfigFile::ProcessInputFileContents
              (param_2,&local_118,(FString *)((pTVar8->AllocatorInstance).Data + lVar15));
    uVar7 = uVar6;
    if (param_1 < pTVar8->ArrayNum) {
      uVar7 = uVar16;
    }
    if ((uVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pFVar2 = (pTVar8->AllocatorInstance).Data;
    pFVar11 = FPaths::EngineDir(&local_108);
    pwVar13 = L"";
    FPaths::ConvertPath(&local_138,pFVar11,Engine_PlatformExtension,L"",(wchar_t *)0x0);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    pFVar11 = ::FString::TrimChar(&local_138,&local_f8,L'/',(bool *)0x0);
    iVar1 = (pFVar11->Data).ArrayNum;
    if (iVar1 == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      uVar6 = iVar1 - 1;
    }
    bVar4 = ::FString::StartsWith((FString *)(pFVar2 + lVar15),pwVar12,uVar6,IgnoreCase);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    uVar6 = 0;
    if (bVar4) {
      uVar7 = uVar6;
      if (param_1 < pTVar8->ArrayNum) {
        uVar7 = uVar16;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar11 = FPaths::GetPath(&local_c8,(FString *)((pTVar8->AllocatorInstance).Data + lVar15));
      pFVar11 = FPaths::GetPath(&local_d8,pFVar11);
      pFVar11 = FPaths::GetCleanFilename(&local_e8,pFVar11);
      ::FString::operator=(param_3,pFVar11);
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      local_58.Data.AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        local_58.Data.AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
      }
    }
    else {
      uVar7 = uVar6;
      if (param_1 < pTVar8->ArrayNum) {
        uVar7 = uVar16;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar2 = (pTVar8->AllocatorInstance).Data;
      pFVar11 = FPaths::ProjectDir(&local_b8);
      FPaths::ConvertPath(&local_128,pFVar11,Project_First,L"",(wchar_t *)0x0);
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      pFVar11 = ::FString::TrimChar(&local_128,&local_a8,L'/',(bool *)0x0);
      iVar1 = (pFVar11->Data).ArrayNum;
      uVar7 = uVar6;
      if (iVar1 != 0) {
        pwVar13 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
        uVar7 = iVar1 - 1;
      }
      bVar4 = ::FString::StartsWith((FString *)(pFVar2 + lVar15),pwVar13,uVar7,IgnoreCase);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (bVar4) {
        uVar7 = uVar6;
        if (param_1 < pTVar8->ArrayNum) {
          uVar7 = uVar16;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar11 = FPaths::GetPath(&local_78,(FString *)((pTVar8->AllocatorInstance).Data + lVar15));
        pFVar11 = FPaths::GetPath(&local_88,pFVar11);
        pFVar11 = FPaths::GetCleanFilename(&local_98,pFVar11);
        ::FString::operator=(param_3,pFVar11);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        local_58.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
          local_58.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
        }
      }
      else {
        uVar7 = uVar6;
        if (param_1 < pTVar8->ArrayNum) {
          uVar7 = uVar16;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar11 = FPaths::GetPath(&local_58,(FString *)((pTVar8->AllocatorInstance).Data + lVar15));
        pFVar11 = FPaths::GetCleanFilename(&local_68,pFVar11);
        ::FString::operator=(param_3,pFVar11);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    iVar1 = (param_3->Data).ArrayNum;
    uVar16 = iVar1 - 1;
    if (iVar1 == 0) {
      uVar16 = uVar6;
    }
    ::FString::AssignRange
              (&param_2->PlatformName,(wchar_t *)(param_3->Data).AllocatorInstance.Data,uVar16);
    bVar4 = true;
    if (1 < (param_3->Data).ArrayNum) {
      bVar14 = 4;
    }
    param_2->bHasPlatformName = bVar14 >> 2;
  }
  if (local_158 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158);
  }
  return bVar4;
}

