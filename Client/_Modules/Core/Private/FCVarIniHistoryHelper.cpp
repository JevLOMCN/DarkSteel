// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// OnApplyCVarFromIniCallback @ 14187f490

/* WARNING: Removing unreachable block (ram,0x00014187f688) */
/* WARNING: Removing unreachable block (ram,0x00014187f696) */

void __thiscall
UE::ConfigUtilities::FCVarIniHistoryHelper::OnApplyCVarFromIniCallback
          (FCVarIniHistoryHelper *this,wchar_t *param_1,wchar_t *param_2,uint param_3,bool param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  int iVar6;
  FString local_68;
  FString local_58;
  ForAnyElementType local_48;
  undefined8 local_40;
  ForAnyElementType local_38;
  undefined8 local_30;
  uint local_28;
  FScriptContainerElement local_24;
  
  if (this->bRecurseCheck != true) {
    ::FString::FString(&local_58,param_2);
    ::FString::FString(&local_68,param_1);
    FVar4.Data = local_68.Data.AllocatorInstance.Data;
    local_48.Data = (FScriptContainerElement *)0x0;
    iVar6 = local_68.Data.ArrayNum;
    local_40 = CONCAT44(local_40._4_4_,iVar6);
    if (iVar6 == 0) {
      local_40 = local_68.Data._8_8_ & 0xffffffff;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar6,0,&local_48,iVar6,(int *)((longlong)&local_40 + 4));
      memcpy(local_48.Data,FVar4.Data,(longlong)iVar6 * 2);
    }
    FVar4.Data = local_58.Data.AllocatorInstance.Data;
    local_38.Data = (FScriptContainerElement *)0x0;
    iVar6 = local_58.Data.ArrayNum;
    local_30 = CONCAT44(local_30._4_4_,iVar6);
    if (iVar6 == 0) {
      local_30 = local_58.Data._8_8_ & 0xffffffff;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar6,0,&local_38,iVar6,(int *)((longlong)&local_30 + 4));
      memcpy(local_38.Data,FVar4.Data,(longlong)iVar6 * 2);
    }
    pFVar2 = (this->CVarIniHistory).AllocatorInstance.Data;
    local_24 = (FScriptContainerElement)param_4;
    local_28 = param_3;
    if (((pFVar2 <= (FScriptContainerElement *)&local_48) &&
        ((FScriptContainerElement *)&local_48 <
         pFVar2 + (longlong)(this->CVarIniHistory).ArrayMax * 0x28)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = (this->CVarIniHistory).ArrayNum;
    piVar1 = &(this->CVarIniHistory).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,(ForAnyElementType *)this,piVar1);
    }
    (this->CVarIniHistory).ArrayNum = iVar6 + 1;
    pFVar2 = (this->CVarIniHistory).AllocatorInstance.Data;
    *(undefined8 *)(pFVar2 + (longlong)iVar6 * 0x28) = 0;
    pFVar2 = pFVar2 + (longlong)iVar6 * 0x28;
    *(FScriptContainerElement **)pFVar2 = local_48.Data;
    *(undefined4 *)(pFVar2 + 8) = (undefined4)local_40;
    *(undefined4 *)(pFVar2 + 0xc) = local_40._4_4_;
    *(undefined8 *)(pFVar2 + 0x10) = 0;
    *(FScriptContainerElement **)(pFVar2 + 0x10) = local_38.Data;
    *(undefined4 *)(pFVar2 + 0x18) = (undefined4)local_30;
    *(undefined4 *)(pFVar2 + 0x1c) = local_30._4_4_;
    *(uint *)(pFVar2 + 0x20) = local_28;
    pFVar2[0x24] = local_24;
    local_30 = 0;
    local_38.Data = (FScriptContainerElement *)0x0;
    local_40 = 0;
    local_48.Data = (FScriptContainerElement *)0x0;
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// ReapplyIniHistory @ 141886950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::ConfigUtilities::FCVarIniHistoryHelper::ReapplyIniHistory(FCVarIniHistoryHelper *this)

{
  FScriptContainerElement FVar1;
  int iVar2;
  uint uVar3;
  void *_Src;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  IConsoleManager *pIVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FConfigSection *pFVar11;
  longlong *plVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  ForAnyElementType FVar15;
  wchar_t *_Str1;
  wchar_t *pwVar16;
  ForAnyElementType _Str2;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  ulonglong uVar19;
  undefined1 auStackY_2b8 [32];
  undefined1 local_278 [8];
  ForAnyElementType local_270;
  int local_268;
  int local_264;
  wchar_t *local_260;
  int local_258;
  uint local_250;
  ForAnyElementType local_248;
  int local_240;
  int local_23c;
  FString local_238;
  FName local_228;
  FScriptContainerElement *local_220;
  FCVarIniHistoryHelper *local_218;
  int local_210;
  FString local_208;
  FConfigSection *local_1f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1f0;
  FConfigSection *local_1d0;
  int iStack_1c8;
  uint uStack_1c4;
  longlong *local_1c0;
  undefined4 uStack_1b8;
  int iStack_1b4;
  int local_1b0;
  undefined4 uStack_1ac;
  FString local_1a0;
  FString local_190 [2];
  undefined4 local_164;
  TStringBuilderBase<wchar_t> local_158;
  wchar_t local_138 [128];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  local_250 = (this->CVarIniHistory).ArrayNum;
  uVar19 = (ulonglong)(int)local_250;
  bVar6 = false;
  bVar5 = false;
  pFVar18 = (this->CVarIniHistory).AllocatorInstance.Data;
  pFVar17 = pFVar18 + uVar19 * 0x28;
  local_220 = pFVar17;
  local_218 = this;
  do {
    iVar10 = 0;
    if ((local_218->CVarIniHistory).ArrayNum != (int)uVar19) {
      local_278[0] = 0;
      `TCheckedPointerIterator<UE::ConfigUtilities::FCVarIniHistoryHelper::FCVarIniHistory,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_278);
    }
    if (pFVar18 == pFVar17) {
      local_218->bRecurseCheck = false;
      return;
    }
    if (*(int *)(pFVar18 + 0x18) == 0) {
      pwVar16 = L"";
    }
    else {
      pwVar16 = *(wchar_t **)(pFVar18 + 0x10);
    }
    ::FString::FString(&local_1a0,pwVar16);
    if (*(int *)(pFVar18 + 8) == 0) {
      pwVar16 = L"";
    }
    else {
      pwVar16 = *(wchar_t **)pFVar18;
    }
    pFVar11 = FConfigCacheIni::GetSection(GConfig,pwVar16,false,&local_1a0);
    if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
    }
    if (pFVar11 != (FConfigSection *)0x0) {
      iVar2 = (int)pFVar11->_padding_;
      TStack_1f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&pFVar11->_padding_;
      uStack_1c4 = 1;
      local_1b0 = 0;
      iStack_1b4 = iVar10;
      iStack_1c8 = iVar10;
      if (iVar2 != 0) {
        plVar12 = (longlong *)TStack_1f0.Array;
        if ((longlong *)pFVar11->_padding_ != (longlong *)0x0) {
          plVar12 = (longlong *)pFVar11->_padding_;
        }
        uVar3 = (uint)*plVar12;
        local_1b0 = iVar10;
        while (uVar3 == 0) {
          lVar14 = (longlong)iStack_1c8;
          local_1b0 = local_1b0 + 0x20;
          iStack_1c8 = iStack_1c8 + 1;
          iStack_1b4 = iVar2;
          if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1c8)
          goto LAB_141886ab0;
          uVar3 = *(uint *)((longlong)plVar12 + lVar14 * 4 + 4);
        }
        uStack_1c4 = -uVar3 & uVar3;
        uVar19 = (ulonglong)uStack_1c4 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_210 = (int)lVar14;
        iStack_1b4 = local_1b0 + -1 + local_210;
        if (iVar2 < iStack_1b4) {
          iStack_1b4 = iVar2;
        }
      }
LAB_141886ab0:
      uStack_1b8 = 0xffffffff;
      uStack_1ac = local_164;
      TStack_1f0._padding_ = CONCAT44(uStack_1c4,iStack_1c8);
      TStack_1f0.CurrentBitIndex = iStack_1b4;
      TStack_1f0.UnvisitedBitMask = 0xffffffff;
      TStack_1f0._28_4_ = local_164;
      TStack_1f0.BaseBitIndex = local_1b0;
      pFVar17 = local_220;
      local_1f8 = pFVar11;
      local_1d0 = pFVar11;
      local_1c0 = (longlong *)TStack_1f0.Array;
      iVar10 = iStack_1b4;
      if (iStack_1b4 < iVar2) {
        do {
          pFVar11 = local_1f8;
          local_158.Base = local_138;
          local_158.CurPos = local_138;
          local_158.bIsDynamic = false;
          local_158.bIsExternal = false;
          local_158.End = (wchar_t *)local_38;
          ::FName::ToString((FName *)(local_1f8->_padding_ + (longlong)iVar10 * 0x28),&local_158);
          lVar14 = pFVar11->_padding_ + (longlong)iVar10 * 0x28;
          if (*(char *)(lVar14 + 0x1d) == '\0') {
            iVar10 = *(int *)(lVar14 + 0x10);
            bVar5 = true;
            _Src = *(void **)(lVar14 + 8);
            local_248.Data = (FScriptContainerElement *)0x0;
            local_240 = iVar10;
            if (iVar10 == 0) {
              local_23c = 0;
              FVar15.Data = local_248.Data;
            }
            else {
              Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar10,0,&local_248,iVar10,&local_23c);
              memcpy(local_248.Data,_Src,(longlong)iVar10 * 2);
              FVar15.Data = local_248.Data;
              iVar10 = local_240;
            }
          }
          else {
            bVar6 = true;
            local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_238.Data.ArrayNum = 0;
            local_238.Data.ArrayMax = 0;
            FConfigValue::ExpandValue((FString *)(lVar14 + 8),&local_238);
            FVar15.Data = local_238.Data.AllocatorInstance.Data;
            iVar10 = local_238.Data.ArrayNum;
          }
          local_270.Data = (FScriptContainerElement *)0x0;
          local_268 = iVar10;
          if (iVar10 == 0) {
            local_264 = 0;
          }
          else {
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar10,0,&local_270,iVar10,&local_264);
            memcpy(local_270.Data,FVar15.Data,(longlong)iVar10 * 2);
          }
          if ((bVar5) && (bVar5 = false, local_248.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_248.Data);
          }
          if ((bVar6) &&
             (bVar6 = false, local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
             )) {
            FMemory::Free(local_238.Data.AllocatorInstance.Data);
          }
          if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
              (IConsoleManager::SetupSingleton(),
              IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Singleton != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                 ,0x4fb,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pIVar7 = IConsoleManager::Singleton;
          pcVar4 = *(code **)((longlong)*IConsoleManager::Singleton + 0xc0);
          if (local_158.End < local_158.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_158,1);
          }
          *local_158.CurPos = L'\0';
          plVar12 = (longlong *)(*pcVar4)(pIVar7,local_158.Base,1);
          if ((plVar12 == (longlong *)0x0) ||
             (uVar3 = *(uint *)(pFVar18 + 0x20), uVar9 = (**(code **)(*plVar12 + 0x18))(plVar12),
             (uVar3 & uVar9) == 0)) {
LAB_141886cf7:
            if (local_270.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_270.Data);
            }
          }
          else {
            FVar15.Data = (FScriptContainerElement *)L"";
            if (local_268 != 0) {
              FVar15.Data = local_270.Data;
            }
            pwVar13 = ConvertValueFromHumanFriendlyValue((wchar_t *)FVar15.Data);
            (**(code **)(*plVar12 + 0xd8))(plVar12,&local_260);
            ::FString::FString(local_190,pwVar13);
            FVar15.Data = local_190[0].Data.AllocatorInstance.Data;
            pwVar16 = local_260;
            _Str2.Data = (FScriptContainerElement *)L"";
            if (local_190[0].Data.ArrayNum != 0) {
              _Str2.Data = local_190[0].Data.AllocatorInstance.Data;
            }
            _Str1 = L"";
            if (local_258 != 0) {
              _Str1 = local_260;
            }
            iVar10 = wcscmp(_Str1,(wchar_t *)_Str2.Data);
            if (FVar15.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FVar15.Data);
              pwVar16 = local_260;
            }
            if (iVar10 != 0) {
              ::FString::FString(&local_208,pwVar13);
              FVar15.Data = (FScriptContainerElement *)L"";
              if (local_208.Data.ArrayNum != 0) {
                FVar15.Data = local_208.Data.AllocatorInstance.Data;
              }
              pwVar16 = L"";
              if (local_258 != 0) {
                pwVar16 = local_260;
              }
              iVar10 = FGenericPlatformStricmp::Stricmp(pwVar16,(wchar_t *)FVar15.Data);
              if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_208.Data.AllocatorInstance.Data);
              }
              pwVar16 = local_260;
              if (iVar10 != 0) {
                uVar19 = (**(code **)(*plVar12 + 0x18))(plVar12);
                if ((uVar19 & 4) == 0) {
                  if (3 < (byte)LogConfig._0_1_) {
                    if (local_158.End < local_158.CurPos + 1) {
                      TStringBuilderBase<wchar_t>::Extend(&local_158,1);
                    }
                    *local_158.CurPos = L'\0';
                    Logging::Private::BasicLog<4>
                              (&`public:_void___cdecl_UE::ConfigUtilities::FCVarIniHistoryHelper::ReapplyIniHistory(void)___ptr64'
                                ::__l47::LOG_Static,(FLogCategoryBase *)&LogConfig);
                  }
                  FVar1 = pFVar18[0x24];
                  uVar3 = *(uint *)(pFVar18 + 0x20);
                  FVar15.Data = (FScriptContainerElement *)L"";
                  if (local_268 != 0) {
                    FVar15.Data = local_270.Data;
                  }
                  local_228.ComparisonIndex.Value = 0;
                  local_228.Number = 0;
                  if (local_158.End < local_158.CurPos + 1) {
                    TStringBuilderBase<wchar_t>::Extend(&local_158,1);
                  }
                  *local_158.CurPos = L'\0';
                  if (*(int *)(pFVar18 + 0x18) == 0) {
                    pwVar16 = L"";
                  }
                  else {
                    pwVar16 = *(wchar_t **)(pFVar18 + 0x10);
                  }
                  OnSetCVarFromIniEntry
                            (pwVar16,local_158.Base,(wchar_t *)FVar15.Data,uVar3,(bool)FVar1,false,
                             local_228);
                  if (local_260 != (wchar_t *)0x0) {
                    FMemory::Free(local_260);
                  }
                  goto LAB_141886cf7;
                }
                pwVar16 = local_260;
                if (2 < (byte)LogConfig._0_1_) {
                  if (local_158.End < local_158.CurPos + 1) {
                    TStringBuilderBase<wchar_t>::Extend(&local_158,1);
                  }
                  *local_158.CurPos = L'\0';
                  Logging::Private::BasicLog<3>
                            (&`public:_void___cdecl_UE::ConfigUtilities::FCVarIniHistoryHelper::ReapplyIniHistory(void)___ptr64'
                              ::__l29::LOG_Static,(FLogCategoryBase *)&LogConfig);
                  pwVar16 = local_260;
                }
              }
            }
            if (pwVar16 != (wchar_t *)0x0) {
              FMemory::Free(pwVar16);
            }
            if (local_270.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_270.Data);
            }
          }
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_158);
          TStack_1f0.UnvisitedBitMask = TStack_1f0.UnvisitedBitMask & ~TStack_1f0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1f0);
          pFVar17 = local_220;
          iVar10 = TStack_1f0.CurrentBitIndex;
        } while (TStack_1f0.CurrentBitIndex < (int)*(longlong *)&(TStack_1f0.Array)->NumBits);
      }
    }
    pFVar18 = pFVar18 + 0x28;
    uVar19 = (ulonglong)local_250;
  } while( true );
}

