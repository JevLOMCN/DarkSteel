// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// DeleteOldLogs @ 1418d5440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001418d5863) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FMaintenance::DeleteOldLogs(void)

{
  ulonglong uVar1;
  wchar_t wVar2;
  code *pcVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  IFileManager *pIVar8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar9;
  byte bVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  longlong lVar13;
  ForAnyElementType FVar14;
  FIdentityFunctor FVar15;
  int iVar16;
  FString *pFVar17;
  int iVar18;
  wchar_t *pwVar19;
  char cVar20;
  uint uVar21;
  uint *puVar22;
  uint uVar23;
  uint uVar24;
  FString *pFVar25;
  undefined8 *puVar26;
  bool bVar27;
  double dVar28;
  double dVar29;
  undefined1 auStackY_288 [32];
  FIdentityFunctor local_238;
  char local_237;
  undefined1 local_236 [2];
  uint local_234;
  int local_230;
  undefined1 local_22c;
  undefined1 local_22b [3];
  int local_228 [2];
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_220;
  FString *local_210;
  undefined8 local_208;
  FString *local_200;
  undefined8 local_1f8;
  int local_1f0 [2];
  FString local_1e8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_1d8;
  int local_1c8;
  int local_1c4;
  FString *local_1c0;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  longlong *local_188;
  uint uStack_180;
  uint uStack_17c;
  TBitArray<FDefaultBitArrayAllocator> *local_178;
  undefined4 uStack_170;
  uint uStack_16c;
  uint local_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  longlong *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FScopedBootTiming local_d8 [2];
  undefined4 local_a4;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_288;
  bVar27 = CpuChannel->Enabled < 0;
  if (bVar27) {
    local_237 = '\0';
  }
  else {
    local_237 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1213,"FMaintenance::DeleteOldLogs",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\FileHelper.cpp"
               ,0x4bd);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1213);
  }
  cVar20 = !bVar27;
  FScopedBootTiming::FScopedBootTiming(local_d8,"FMaintenance::DeleteOldLogs");
  local_228[0] = -1;
  local_230 = -1;
  FConfigCacheIni::GetInt(GConfig,L"LogFiles",L"PurgeLogsDays",local_228,&GEngineIni);
  FConfigCacheIni::GetInt(GConfig,L"LogFiles",L"MaxLogFilesOnDisk",&local_230,&GEngineIni);
  uVar21 = 0;
  uVar23 = 0;
  if ((-1 < local_228[0]) || (-1 < local_230)) {
    local_98._0_8_ = 0;
    local_98._8_8_ = 0;
    local_78 = (uint *)0x0;
    local_70 = 0;
    local_6c = 0x80;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = (ForElementType<FSetElementId>)0x0;
    local_50 = 0;
    local_200 = (FString *)0x0;
    local_1f8 = 0;
    pIVar8 = IFileManager::Get();
    pcVar3 = *(code **)((longlong)*pIVar8 + 0x80);
    FPaths::ProjectLogDir(&local_128);
    ::FString::PrintfImpl(&local_1b8,L"%s*.*");
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_1b8.Data.ArrayNum != 0) {
      FVar14.Data = local_1b8.Data.AllocatorInstance.Data;
    }
    (*pcVar3)(pIVar8,&local_200,FVar14.Data,1);
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    iVar16 = (int)local_1f8;
    pFVar25 = local_200 + (int)local_1f8;
    pFVar17 = local_200;
    while( true ) {
      if ((int)local_1f8 != iVar16) {
        local_236[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_236);
      }
      if (pFVar17 == pFVar25) break;
      uVar6 = ::FString::Find(pFVar17,L"-backup-",8,IgnoreCase,FromStart,-1);
      if (-1 < (int)uVar6) {
        iVar7 = (pFVar17->Data).ArrayNum;
        uVar24 = iVar7 - 1;
        if (iVar7 == 0) {
          uVar24 = uVar21;
        }
        if ((int)uVar6 < (int)uVar24) {
          uVar24 = uVar6;
        }
        uVar6 = uVar23;
        if (0 < (int)uVar24) {
          uVar6 = uVar24;
        }
        if (iVar7 == 0) {
          pwVar12 = L"";
        }
        else {
          pwVar12 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
        }
        ::FString::ConstructFromPtrSize(&local_1e8,pwVar12,uVar6);
        if (local_1e8.Data.ArrayNum == 0) {
          pwVar12 = L"";
          uVar6 = uVar23;
        }
        else {
          pwVar12 = (wchar_t *)local_1e8.Data.AllocatorInstance.Data;
          uVar6 = local_1e8.Data.ArrayNum - 1;
        }
        uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar6,pwVar12);
        iVar7 = TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FString>
                          ((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                            *)local_98,uVar6,&local_1e8);
        if ((iVar7 == -1) || (lVar11 = local_98._0_8_ + (longlong)iVar7 * 0x28, lVar11 == 0)) {
          local_1c0 = &local_1e8;
          TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                    ((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)local_98,(uint)local_1f0,
                     (TKeyInitializer<FString_const_&> *)(ulonglong)uVar6,(bool *)&local_1c0);
          lVar11 = local_98._0_8_ + (longlong)local_1f0[0] * 0x28;
        }
        pTVar9 = &FPaths::ProjectLogDir(&local_118)->Data;
        iVar7 = (pFVar17->Data).ArrayNum;
        uVar6 = iVar7 - 1;
        if (iVar7 == 0) {
          uVar6 = uVar21;
        }
        if ((pTVar9->ArrayNum != 0) || (uVar24 = 1, uVar6 + 1 == 0)) {
          uVar24 = uVar23;
        }
        TArray<wchar_t,TSizedDefaultAllocator<32>_>::
        TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_220,pTVar9,uVar6 + 1 + uVar24);
        ::FString::PathAppend
                  ((FString *)&local_220,(wchar_t *)(pFVar17->Data).AllocatorInstance.Data,uVar6);
        if (((*(TArray<wchar_t,TSizedDefaultAllocator<32>_> **)(lVar11 + 0x10) <= &local_220) &&
            (&local_220 <
             *(TArray<wchar_t,TSizedDefaultAllocator<32>_> **)(lVar11 + 0x10) +
             *(int *)(lVar11 + 0x1c))) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar27)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = *(int *)(lVar11 + 0x18);
        if (iVar7 == *(int *)(lVar11 + 0x1c)) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,(ForAnyElementType *)(lVar11 + 0x10),(int *)(lVar11 + 0x1c));
        }
        lVar13 = (longlong)iVar7;
        *(int *)(lVar11 + 0x18) = iVar7 + 1;
        lVar11 = *(longlong *)(lVar11 + 0x10);
        *(undefined8 *)(lVar11 + lVar13 * 0x10) = 0;
        *(FScriptContainerElement **)(lVar11 + lVar13 * 0x10) = local_220.AllocatorInstance.Data;
        *(int *)(lVar11 + 8 + lVar13 * 0x10) = local_220.ArrayNum;
        *(int *)(lVar11 + 0xc + lVar13 * 0x10) = local_220.ArrayMax;
        local_220.ArrayNum = 0;
        local_220.ArrayMax = 0;
        local_220.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
        }
        if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
        }
      }
      pFVar17 = pFVar17 + 1;
    }
    DestructItems<FString,int>(local_200,(int)local_1f8);
    if (local_200 != (FString *)0x0) {
      FMemory::Free(local_200);
    }
    uVar23 = local_70;
    uStack_17c = 1;
    dVar29 = (double)local_228[0] * __real_40f5180000000000;
    uStack_16c = uVar21;
    local_168 = uVar21;
    if (local_70 != 0) {
      puVar22 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar22 = local_78;
      }
      uVar6 = *puVar22;
      while (uVar6 == 0) {
        lVar11 = (longlong)(int)uVar21;
        local_168 = local_168 + 0x20;
        uVar21 = uVar21 + 1;
        uStack_16c = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar21)
        goto LAB_1418d5940;
        uVar6 = puVar22[lVar11 + 1];
      }
      uStack_17c = -uVar6 & uVar6;
      uVar1 = (ulonglong)uStack_17c * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_1c8 = (int)lVar11;
      uStack_16c = local_1c8 + -1 + local_168;
      if ((int)local_70 < (int)uStack_16c) {
        uStack_16c = local_70;
      }
    }
LAB_1418d5940:
    local_188 = (longlong *)local_98;
    uStack_164 = local_a4;
    local_178 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    uVar6 = local_70 & 0xffffffe0;
    iStack_160 = local_98._8_4_ - local_64;
    uStack_170 = 0xffffffff;
    TStack_150.CurrentBitIndex = uStack_16c;
    TStack_150.UnvisitedBitMask = 0xffffffff;
    TStack_150._padding_ = CONCAT44(uStack_17c,uVar21);
    iVar16 = (int)local_70 >> 5;
    TStack_150._28_4_ = local_a4;
    TStack_150.BaseBitIndex = local_168;
    uStack_130 = CONCAT44(uStack_15c,iStack_160);
    bVar10 = (byte)local_70;
    local_234 = local_70;
    uStack_180 = uVar21;
    local_158 = local_188;
    TStack_150.Array = local_178;
    if (((int)local_70 < 0) &&
       (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar27)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar15 = local_238;
    uVar21 = local_234;
    if (uVar23 != local_70) {
      puVar22 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar22 = local_78;
      }
      uVar21 = -1 << (bVar10 & 0x1f) & puVar22[iVar16];
      while (uVar21 == 0) {
        lVar11 = (longlong)iVar16;
        uVar6 = uVar6 + 0x20;
        iVar16 = iVar16 + 1;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) {
          local_234 = local_70;
          uVar21 = local_70;
          goto LAB_1418d5a70;
        }
        uVar21 = puVar22[lVar11 + 1];
      }
      uVar1 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_1c4 = (int)lVar11;
      local_234 = (uVar6 - 1) + local_1c4;
      uVar21 = local_234;
      if ((int)local_70 < (int)local_234) {
        local_234 = local_70;
        uVar21 = local_70;
      }
    }
LAB_1418d5a70:
    while( true ) {
      plVar5 = local_158;
      if ((int)local_158[1] - *(int *)((longlong)local_158 + 0x34) != (int)uStack_130) {
        local_238 = (FIdentityFunctor)0x0;
        `TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_238);
      }
      cVar20 = local_237;
      lVar11 = (longlong)TStack_150.CurrentBitIndex;
      if (((TStack_150.CurrentBitIndex == uVar21) &&
          (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
         (plVar5 == (longlong *)local_98)) break;
      lVar4 = *plVar5;
      lVar13 = lVar4 + lVar11 * 0x28;
      AlgoImpl::
      IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,_FMaintenance::DeleteOldLogs_::__l5::FSortByDateNewestFirst>_>
                (*(FString **)(lVar4 + 0x10 + lVar11 * 0x28),*(int *)(lVar4 + 0x18 + lVar11 * 0x28),
                 FVar15,(FSortByDateNewestFirst *)&local_22c);
      uVar23 = *(int *)(lVar13 + 0x18) - 1;
      if (-1 < (int)uVar23) {
        lVar11 = (longlong)(int)uVar23 << 4;
        do {
          local_234 = ~uVar23;
          uVar24 = local_234 >> 0x1f;
          uVar6 = 0;
          if ((int)uVar23 < *(int *)(lVar13 + 0x18)) {
            uVar6 = uVar24;
          }
          if ((uVar6 == 0) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar27)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar4 = *(longlong *)(lVar13 + 0x10);
          pIVar8 = IFileManager::Get();
          if (*(int *)(lVar11 + 8 + lVar4) == 0) {
            pwVar12 = L"";
          }
          else {
            pwVar12 = *(wchar_t **)(lVar11 + lVar4);
          }
          dVar28 = (double)(**(code **)((longlong)*pIVar8 + 0xd0))(pIVar8,pwVar12);
          if (dVar29 < dVar28) {
            if (4 < (byte)LogStreaming._0_1_) {
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
            }
            pIVar8 = IFileManager::Get();
            if (*(int *)(lVar11 + 8 + lVar4) == 0) {
              pwVar12 = L"";
            }
            else {
              pwVar12 = *(wchar_t **)(lVar11 + lVar4);
            }
            (**(code **)((longlong)*pIVar8 + 0x38))(pIVar8,pwVar12,0,0);
            uVar6 = 0;
            if ((int)uVar23 < *(int *)(lVar13 + 0x18)) {
              uVar6 = uVar24;
            }
            if ((uVar6 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            puVar26 = (undefined8 *)(*(longlong *)(lVar13 + 0x10) + lVar11);
            if ((void *)*puVar26 != (void *)0x0) {
              FMemory::Free((void *)*puVar26);
            }
            iVar16 = local_234 + *(int *)(lVar13 + 0x18);
            if (iVar16 != 0) {
              memmove(puVar26,puVar26 + 2,(longlong)iVar16 << 4);
            }
            *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,(ForAnyElementType *)(lVar13 + 0x10),*(int *)(lVar13 + 0x18),
                       (int *)(lVar13 + 0x1c));
          }
          lVar11 = lVar11 + -0x10;
          uVar23 = uVar23 - 1;
          FVar15 = local_238;
        } while (-1 < (int)uVar23);
      }
      if (((-1 < local_230) && (local_230 < *(int *)(lVar13 + 0x18))) &&
         (uVar23 = *(int *)(lVar13 + 0x18) - 1, -1 < (int)uVar23)) {
        lVar11 = (longlong)(int)uVar23 << 4;
        do {
          if (*(int *)(lVar13 + 0x18) <= local_230) break;
          uVar6 = 0;
          if ((int)uVar23 < *(int *)(lVar13 + 0x18)) {
            uVar6 = ~uVar23 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar27)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (*(int *)(lVar11 + 8 + *(longlong *)(lVar13 + 0x10)) == 0) {
            pwVar12 = L"";
LAB_1418d5d48:
            wVar2 = *pwVar12;
            while (wVar2 != L'\0') {
              pwVar19 = pwVar12 + 1;
              if (((wchar_t)(wVar2 - (-(ushort)((ushort)wVar2 - 0x61 < 0x1a) & 0x20)) == 0x2d) &&
                 (iVar16 = FGenericPlatformStricmp::Strnicmp(pwVar19,L"backup-",7), iVar16 == 0)) {
                if (pwVar12 != (wchar_t *)0x0) {
                  pIVar8 = IFileManager::Get();
                  pcVar3 = *(code **)((longlong)*pIVar8 + 0x38);
                  uVar6 = 0;
                  if ((int)uVar23 < *(int *)(lVar13 + 0x18)) {
                    uVar6 = ~uVar23 >> 0x1f;
                  }
                  if ((uVar6 == 0) &&
                     (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar27)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  if (*(int *)(lVar11 + 8 + *(longlong *)(lVar13 + 0x10)) == 0) {
                    pwVar12 = L"";
                  }
                  else {
                    pwVar12 = *(wchar_t **)(lVar11 + *(longlong *)(lVar13 + 0x10));
                  }
                  (*pcVar3)(pIVar8,pwVar12,0,0);
                  uVar6 = 0;
                  if ((int)uVar23 < *(int *)(lVar13 + 0x18)) {
                    uVar6 = ~uVar23 >> 0x1f;
                  }
                  if ((uVar6 == 0) &&
                     (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar27)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  puVar26 = (undefined8 *)(*(longlong *)(lVar13 + 0x10) + lVar11);
                  if ((void *)*puVar26 != (void *)0x0) {
                    FMemory::Free((void *)*puVar26);
                  }
                  iVar16 = ~uVar23 + *(int *)(lVar13 + 0x18);
                  if (iVar16 != 0) {
                    memmove(puVar26,puVar26 + 2,(longlong)iVar16 << 4);
                  }
                  *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + -1;
                  UE::Core::Private::
                  ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,(ForAnyElementType *)(lVar13 + 0x10),*(int *)(lVar13 + 0x18),
                             (int *)(lVar13 + 0x1c));
                }
                break;
              }
              pwVar12 = pwVar19;
              wVar2 = *pwVar19;
            }
          }
          else {
            pwVar12 = *(wchar_t **)(lVar11 + *(longlong *)(lVar13 + 0x10));
            if (pwVar12 != (wchar_t *)0x0) goto LAB_1418d5d48;
          }
          lVar11 = lVar11 + -0x10;
          uVar23 = uVar23 - 1;
        } while (-1 < (int)uVar23);
      }
      TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
    }
    local_50 = 0;
    if (local_58 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_58);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98);
  }
  local_210 = (FString *)0x0;
  local_208 = 0;
  pIVar8 = IFileManager::Get();
  pcVar3 = *(code **)((longlong)*pIVar8 + 0x80);
  FPaths::ProjectLogDir(&local_108);
  ::FString::PrintfImpl(&local_1a8,L"%s/UE4CC*");
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_1a8.Data.ArrayNum != 0) {
    FVar14.Data = local_1a8.Data.AllocatorInstance.Data;
  }
  (*pcVar3)(pIVar8,&local_210,FVar14.Data,0);
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  pIVar8 = IFileManager::Get();
  pcVar3 = *(code **)((longlong)*pIVar8 + 0x80);
  FPaths::ProjectLogDir(&local_f8);
  ::FString::PrintfImpl(&local_198,L"%s/UECC*");
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_198.Data.ArrayNum != 0) {
    FVar14.Data = local_198.Data.AllocatorInstance.Data;
  }
  (*pcVar3)(pIVar8,&local_210,FVar14.Data,0);
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  iVar16 = (int)local_208;
  pFVar25 = local_210 + (int)local_208;
  pFVar17 = local_210;
  while( true ) {
    if ((int)local_208 != iVar16) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_22b);
    }
    if (pFVar17 == pFVar25) break;
    pTVar9 = &FPaths::ProjectLogDir(&local_e8)->Data;
    iVar7 = (pFVar17->Data).ArrayNum;
    iVar18 = iVar7 + -1;
    if (iVar7 == 0) {
      iVar18 = 0;
    }
    if ((pTVar9->ArrayNum != 0) || (iVar7 = 1, iVar18 + 1 == 0)) {
      iVar7 = 0;
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_1d8,pTVar9,iVar7 + iVar18 + 1);
    ::FString::PathAppend
              ((FString *)&local_1d8,(wchar_t *)(pFVar17->Data).AllocatorInstance.Data,iVar18);
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    pIVar8 = IFileManager::Get();
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_1d8.ArrayNum != 0) {
      FVar14.Data = local_1d8.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar8 + 0x68))(pIVar8,FVar14.Data,0,1);
    if (local_1d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.AllocatorInstance.Data);
    }
    pFVar17 = pFVar17 + 1;
  }
  DestructItems<FString,int>(local_210,(int)local_208);
  if (local_210 != (FString *)0x0) {
    FMemory::Free(local_210);
  }
  FScopedBootTiming::~FScopedBootTiming(local_d8);
  if (cVar20 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

