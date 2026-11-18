// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 119

// operator() @ 14191ef00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FPaths::FindCorrectCase'::__l2::<lambda_1>::operator()(void *this,TStringView<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FString *pFVar7;
  HANDLE hFindFile;
  wchar_t *_Str2;
  int iVar8;
  TStringBuilderBase<wchar_t> *pTVar9;
  size_t sVar10;
  undefined1 auStack_2d8 [32];
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  wchar_t *local_288;
  undefined8 uStack_280;
  _WIN32_FIND_DATAW local_278;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  pTVar9 = *(TStringBuilderBase<wchar_t> **)this;
  if ((int)((longlong)pTVar9->CurPos - (longlong)pTVar9->Base >> 1) != 0) {
    if (pTVar9->End < pTVar9->CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(pTVar9,1);
    }
    *pTVar9->CurPos = L'/';
    pTVar9->CurPos = pTVar9->CurPos + 1;
    pTVar9 = *(TStringBuilderBase<wchar_t> **)this;
  }
  iVar6 = param_1->Size;
  if ((0 < iVar6) && (param_1->DataPtr[(longlong)iVar6 + -1] == L':')) {
    local_2b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2b8.Data.ArrayNum = 0;
    local_2b8.Data.ArrayMax = 0;
    pFVar7 = ::FString::ConstructFromPtrSize
                       (&local_2a8,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
    if (&local_2b8 != pFVar7) {
      if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
      }
      local_2b8.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
      (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2b8.Data.ArrayNum = (pFVar7->Data).ArrayNum;
      local_2b8.Data.ArrayMax = (pFVar7->Data).ArrayMax;
      (pFVar7->Data).ArrayNum = 0;
      (pFVar7->Data).ArrayMax = 0;
    }
    if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
    }
    pFVar7 = ::FString::ToUpper(&local_2b8,&local_298);
    iVar8 = (pFVar7->Data).ArrayNum;
    iVar6 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar6 = 0;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              (pTVar9,(wchar_t *)(pFVar7->Data).AllocatorInstance.Data,iVar6);
    if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.Data.AllocatorInstance.Data);
    }
    if (local_2b8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
    return;
  }
  local_288 = param_1->DataPtr;
  uStack_280 = *(undefined8 *)&param_1->Size;
  pwVar1 = pTVar9->CurPos;
  pwVar2 = pTVar9->Base;
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            (pTVar9,local_288,(int)*(undefined8 *)&param_1->Size);
  if (iVar6 == 0) {
    return;
  }
  if (iVar6 == 1) {
    sVar10 = 1;
    _Str2 = L".";
  }
  else {
    if (iVar6 != 2) goto LAB_14191f09a;
    sVar10 = 2;
    _Str2 = L"..";
  }
  iVar6 = wcsncmp(param_1->DataPtr,_Str2,sVar10);
  if (iVar6 == 0) {
    return;
  }
LAB_14191f09a:
  pTVar9 = *(TStringBuilderBase<wchar_t> **)this;
  if (pTVar9->End < pTVar9->CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(pTVar9,1);
  }
  *pTVar9->CurPos = L'\0';
  hFindFile = FindFirstFileW(pTVar9->Base,&local_278);
  if (hFindFile != (HANDLE)0xffffffffffffffff) {
    plVar3 = *(longlong **)this;
    iVar6 = (int)(plVar3[1] - *plVar3 >> 1);
    iVar8 = iVar6 - (int)((longlong)pwVar1 - (longlong)pwVar2 >> 1);
    if ((iVar6 < iVar8) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount <= Len()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                           ,0xe8,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    plVar3[1] = plVar3[1] + (longlong)iVar8 * -2;
    sVar10 = wcslen(local_278.cFileName);
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              (*(TStringBuilderBase<wchar_t> **)this,local_278.cFileName,(int)sVar10);
    FindClose(hFindFile);
  }
  return;
}

// operator() @ 14191f2d0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
`FPaths::ValidatePath'::__l2::<lambda_1>::operator()(void *this,TStringView<wchar_t> *param_1)

{
  char cVar1;
  wchar_t wVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  FString *pFVar11;
  wchar_t *pwVar12;
  FText *pFVar13;
  FTextFormat *pFVar14;
  ForAnyElementType FVar15;
  ulonglong uVar16;
  longlong lVar17;
  wchar_t *pwVar18;
  wchar_t **ppwVar19;
  wchar_t *pwVar20;
  uint local_res8 [2];
  FString local_198;
  wchar_t *local_188;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_180
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_170
  ;
  FString local_160;
  FString local_150;
  FString local_140;
  FFormatArgumentValue local_130;
  FFormatArgumentValue local_110;
  TStringView<wchar_t> local_e8;
  FString local_d8;
  FText local_c8;
  FText local_b8;
  FText local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  wchar_t *local_68;
  undefined8 uStack_60;
  FTextFormat local_58;
  FTextFormat local_48;
  
  bVar8 = false;
  local_res8[0] = 0;
  if (**(char **)((longlong)this + 0x18) != '\0') {
    cVar1 = **(char **)this;
    **(char **)this = '\0';
    if (param_1->Size != 0) {
      puVar4 = *(undefined8 **)((longlong)this + 0x10);
      local_160.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_160.Data.ArrayNum = 0;
      local_160.Data.ArrayMax = 0;
      uVar3 = *(uint *)(puVar4 + 1);
      uVar16 = (ulonglong)(int)uVar3;
      pwVar20 = (wchar_t *)*puVar4;
      pwVar12 = pwVar20 + uVar16;
      pwVar18 = pwVar12 + -1;
      local_188 = pwVar12 + -1;
      if (uVar3 == 0) {
        pwVar18 = pwVar12;
        local_188 = pwVar12;
      }
      while( true ) {
        if (*(int *)(puVar4 + 1) != (int)uVar16) {
          local_res8[0] = local_res8[0] & 0xffffff00;
          `TCheckedPointerIterator<wchar_t_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pwVar20 == pwVar18) break;
        local_e8.DataPtr = param_1->DataPtr;
        local_e8.Size = param_1->Size;
        local_e8._12_4_ = *(undefined4 *)&param_1->field_0xc;
        wVar2 = *pwVar20;
        iVar9 = UE::String::FindFirstChar(&local_e8,wVar2,CaseSensitive);
        if (iVar9 == -1) {
LAB_14191f55c:
          uVar16 = (ulonglong)uVar3;
          pwVar20 = pwVar20 + 1;
        }
        else {
          if ((wVar2 == L':') && (cVar1 != '\0')) {
            local_68 = param_1->DataPtr;
            uStack_60 = *(undefined8 *)&param_1->Size;
            bVar8 = true;
            local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_198.Data.ArrayNum = 0;
            local_198.Data.ArrayMax = 0;
            pFVar11 = ::FString::ConstructFromPtrSize
                                (&local_d8,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
            if (&local_198 != pFVar11) {
              local_198.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
              (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_198.Data.ArrayNum = (pFVar11->Data).ArrayNum;
              local_198.Data.ArrayMax = (pFVar11->Data).ArrayMax;
              (pFVar11->Data).ArrayNum = 0;
              (pFVar11->Data).ArrayMax = 0;
            }
            if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d8.Data.AllocatorInstance.Data);
            }
            bVar7 = FPaths::IsDrive(&local_198);
            if (!bVar7) goto LAB_14191f427;
            bVar7 = true;
          }
          else {
LAB_14191f427:
            bVar7 = false;
          }
          if ((bVar8) &&
             (bVar8 = false, local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
             )) {
            FMemory::Free(local_198.Data.AllocatorInstance.Data);
          }
          pwVar18 = local_188;
          if (bVar7) goto LAB_14191f55c;
          if (wVar2 != L'?') {
LAB_14191f54a:
            ::FString::AppendChar(&local_160,wVar2);
            pwVar18 = local_188;
            goto LAB_14191f55c;
          }
          pFVar11 = *(FString **)((longlong)this + 8);
          iVar9 = (pFVar11->Data).ArrayNum;
          if (iVar9 == 0) {
            pwVar12 = L"";
          }
          else {
            pwVar12 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
          }
          lVar17 = (longlong)param_1->DataPtr - (longlong)pwVar12 >> 1;
          if (lVar17 < 0) goto LAB_14191f54a;
          iVar10 = iVar9 + -1;
          if (iVar9 == 0) {
            iVar10 = 0;
          }
          if ((((iVar10 < lVar17) || (lVar17 != 2)) || (param_1->Size != 1)) ||
             (bVar7 = ::FString::StartsWith(pFVar11,L"//",2,IgnoreCase), !bVar7))
          goto LAB_14191f54a;
          plVar5 = *(longlong **)((longlong)this + 8);
          iVar9 = (int)plVar5[1];
          iVar10 = iVar9 + -1;
          if (iVar9 == 0) {
            iVar10 = 0;
          }
          if (iVar10 < 5) goto LAB_14191f54a;
          if (((iVar9 == 0) || (iVar9 + -1 < 4)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValidIndex(Index)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                 ,0x107,
                                 L"String index out of bounds: Index %i from a string with a length of %i"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (*(short *)(*plVar5 + 6) != 0x2f) goto LAB_14191f54a;
          pwVar20 = pwVar20 + 1;
          uVar16 = (ulonglong)uVar3;
          **(undefined1 **)this = 1;
          pwVar18 = local_188;
        }
      }
      iVar9 = local_160.Data.ArrayNum + -1;
      if (local_160.Data.ArrayNum == 0) {
        iVar9 = 0;
      }
      if (iVar9 == 0) {
        iVar9 = param_1->Size;
        ppwVar19 = RestrictedNames;
        do {
          pwVar12 = *ppwVar19;
          if (iVar9 == 0) {
            wVar2 = *pwVar12;
LAB_14191f6f8:
            if (wVar2 == L'\0') {
              if (**(longlong **)((longlong)this + 0x20) == 0) goto LAB_14191f84e;
              local_170.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_170.Pairs.ArrayNum = 0;
              local_170.Pairs.ArrayMax = 0;
              pFVar13 = FText::FromString(&local_98,pwVar12);
              local_110.Type = Text;
              FText::FText((FText *)&local_110.TextValue,pFVar13);
              if ((local_110.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0)
                 && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsSet()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                        ,0xbd,
                                        L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                       ), bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              ::FString::FString(&local_140,L"RestrictedName");
              TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
              ::Emplace<FString,FFormatArgumentValue>(&local_170,&local_140,&local_110);
              if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_140.Data.AllocatorInstance.Data);
              }
              if (local_110.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)
              {
                (**(code **)((longlong)
                             *(ITextData *)
                              local_110.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
                          ();
              }
              if (local_98.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
              }
              pFVar13 = FText::AsLocalizable_Advanced_LocText
                                  (&local_78,L"Core",L"PathContainsRestrictedName",
                                   L"Path may not contain a restricted name: {RestrictedName}");
              pFVar14 = FTextFormat::FTextFormat(&local_48,pFVar13,Default);
              pFVar13 = FText::Format(&local_88,pFVar14,&local_170);
              FText::operator=((FText *)**(undefined8 **)((longlong)this + 0x20),pFVar13);
              if (local_88.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
              }
              if (local_78.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
              }
              DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                        ((TTuple<FString,FFormatArgumentValue> *)
                         local_170.Pairs.AllocatorInstance.Data,local_170.Pairs.ArrayNum);
              FVar15.Data = local_170.Pairs.AllocatorInstance.Data;
              goto LAB_14191f844;
            }
          }
          else {
            iVar10 = FGenericPlatformStricmp::Strnicmp(param_1->DataPtr,pwVar12,(longlong)iVar9);
            if (iVar10 == 0) {
              wVar2 = pwVar12[iVar9];
              goto LAB_14191f6f8;
            }
          }
          ppwVar19 = ppwVar19 + 1;
        } while (ppwVar19 != (wchar_t **)&DAT_154b7fe68);
      }
      else {
        if (**(longlong **)((longlong)this + 0x20) != 0) {
          local_180.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_180.Pairs.ArrayNum = 0;
          local_180.Pairs.ArrayMax = 0;
          pFVar13 = FText::FromString(&local_c8,&local_160);
          local_130.Type = Text;
          FText::FText((FText *)&local_130.TextValue,pFVar13);
          if ((local_130.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          ::FString::FString(&local_150,L"IllegalPathCharacters");
          TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
          Emplace<FString,FFormatArgumentValue>(&local_180,&local_150,&local_130);
          if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_150.Data.AllocatorInstance.Data);
          }
          if (local_130.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)
                         *(ITextData *)local_130.TextValue.field0_0x0.TypedValue.TextData.Reference
                        + 0x10))();
          }
          if (local_c8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
          }
          pFVar13 = FText::AsLocalizable_Advanced_LocText
                              (&local_a8,L"Core",L"PathContainsInvalidCharacters",
                               L"Path may not contain the following characters: {IllegalPathCharacters}"
                              );
          pFVar14 = FTextFormat::FTextFormat(&local_58,pFVar13,Default);
          pFVar13 = FText::Format(&local_b8,pFVar14,&local_180);
          FText::operator=((FText *)**(undefined8 **)((longlong)this + 0x20),pFVar13);
          if (local_b8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
          }
          if (local_a8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
          }
          DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                    ((TTuple<FString,FFormatArgumentValue> *)local_180.Pairs.AllocatorInstance.Data,
                     local_180.Pairs.ArrayNum);
          FVar15.Data = local_180.Pairs.AllocatorInstance.Data;
LAB_14191f844:
          if ((TTuple<FString,FFormatArgumentValue> *)FVar15.Data !=
              (TTuple<FString,FFormatArgumentValue> *)0x0) {
            FMemory::Free(FVar15.Data);
          }
        }
LAB_14191f84e:
        **(undefined1 **)((longlong)this + 0x18) = 0;
      }
      if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_160.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// AudioCaptureDir @ 141927490

FString * __cdecl FPaths::AudioCaptureDir(FString *__return_storage_ptr__)

{
  FString *pFVar1;
  
  pFVar1 = ProjectSavedDir();
  ::FString::ConcatFC(__return_storage_ptr__,pFVar1,L"AudioCaptures/");
  return __return_storage_ptr__;
}

// AutomationDir @ 1419274c0

FString * __cdecl FPaths::AutomationDir(FString *__return_storage_ptr__)

{
  FString *pFVar1;
  
  pFVar1 = ProjectSavedDir();
  ::FString::ConcatFC(__return_storage_ptr__,pFVar1,L"Automation/");
  return __return_storage_ptr__;
}

// AutomationLogDir @ 1419274f0

FString * __cdecl FPaths::AutomationLogDir(FString *__return_storage_ptr__)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = ProjectSavedDir();
  ::FString::ConcatFC(&local_18,pFVar1,L"Automation/");
  ::FString::ConcatFC(__return_storage_ptr__,&local_18,L"Logs/");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// AutomationReportsDir @ 141927550

FString * __cdecl FPaths::AutomationReportsDir(FString *__return_storage_ptr__)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = ProjectSavedDir();
  ::FString::ConcatFC(&local_18,pFVar1,L"Automation/");
  ::FString::ConcatFC(__return_storage_ptr__,&local_18,L"Reports/");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// AutomationTransientDir @ 1419275b0

FString * __cdecl FPaths::AutomationTransientDir(FString *__return_storage_ptr__)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = ProjectSavedDir();
  ::FString::ConcatFC(&local_18,pFVar1,L"Automation/");
  ::FString::ConcatFC(__return_storage_ptr__,&local_18,L"Tmp/");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// BugItDir @ 141929dd0

FString * __cdecl FPaths::BugItDir(FString *__return_storage_ptr__)

{
  FString *pFVar1;
  FString local_38;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_18,"Windows");
  pFVar1 = ProjectSavedDir();
  ::FString::ConcatFC(&local_28,pFVar1,L"BugIt/");
  ::FString::ConcatFF(&local_38,&local_28,&local_18);
  ::FString::ConcatFC(__return_storage_ptr__,&local_38,L"/");
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// CanGetProjectDir @ 14192c860

bool __cdecl FPaths::CanGetProjectDir(void)

{
  return !UE::Paths::bIsComputingStaged;
}

// ChangeExtension @ 14192ca70

FString * __cdecl
FPaths::ChangeExtension(FString *__return_storage_ptr__,FString *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  FString local_28;
  
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  iVar6 = (param_1->Data).ArrayNum;
  pFVar8 = pFVar2 + (longlong)iVar6 * 2;
  do {
    if (pFVar8 == pFVar2) goto LAB_14192cab1;
    pFVar8 = pFVar8 + -2;
  } while (*(short *)pFVar8 != 0x2e);
  iVar7 = (int)((longlong)pFVar8 - (longlong)pFVar2 >> 1);
  if (iVar7 != -1) {
    iVar9 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar9 = 0;
    }
    if (((iVar9 < 0) || (iVar6 < iVar9)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Count >= 0 && Count <= this->Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x55b,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar3)();
      return pFVar5;
    }
    pFVar2 = (param_1->Data).AllocatorInstance.Data;
    pFVar8 = pFVar2 + (longlong)iVar9 * 2;
    do {
      if (pFVar8 == pFVar2) goto LAB_14192cb6e;
      pFVar1 = pFVar8 + -2;
      pFVar8 = pFVar8 + -2;
    } while ((*(short *)pFVar1 != 0x2f) && (*(short *)pFVar1 != 0x5c));
    iVar6 = (int)((longlong)pFVar8 - (longlong)pFVar2 >> 1);
    if ((iVar6 == -1) || (iVar6 <= iVar7)) {
LAB_14192cb6e:
      iVar9 = (param_1->Data).ArrayNum;
      iVar6 = iVar9 + -1;
      if (iVar9 == 0) {
        iVar6 = 0;
      }
      if (iVar7 < iVar6) {
        iVar6 = iVar7;
      }
      iVar7 = 0;
      if (0 < iVar6) {
        iVar7 = iVar6;
      }
      pFVar8 = (FScriptContainerElement *)L"";
      if (iVar9 != 0) {
        pFVar8 = pFVar2;
      }
      ::FString::ConstructFromPtrSize(&local_28,(wchar_t *)pFVar8,iVar7);
      iVar7 = (param_2->Data).ArrayNum;
      iVar6 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar6 = 0;
      }
      if (iVar6 != 0) {
        if ((iVar6 < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                               ,0x113,
                               L"String index out of bounds: Index %i from a string with a length of %i"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar5 = (FString *)(*pcVar3)();
          return pFVar5;
        }
        if (*(short *)(param_2->Data).AllocatorInstance.Data != 0x2e) {
          ::FString::AppendChar(&local_28,L'.');
        }
      }
      iVar7 = (param_2->Data).ArrayNum;
      iVar6 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar6 = 0;
      }
      ::FString::AppendChars(&local_28,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar6);
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_28.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_28.Data.ArrayMax;
      return __return_storage_ptr__;
    }
  }
LAB_14192cab1:
  ::FString::FString(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// CloudDir @ 14192d360

FString * __cdecl FPaths::CloudDir(FString *__return_storage_ptr__)

{
  FGenericPlatformMisc::CloudDir(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// CollapseRelativeDirectories @ 14192d3a0

bool __cdecl FPaths::CollapseRelativeDirectories(FString *param_1,bool param_2)

{
  bool local_res18 [16];
  
  UE4PathViews_Private::CollapseRelativeDirectoriesImplTemplate<FString>
            (param_1,param_2,local_res18);
  ::FString::TrimToNullTerminator(param_1);
  return local_res18[0];
}

// CombineInternal @ 14192d450

FString * __cdecl
FPaths::CombineInternal(FString *__return_storage_ptr__,TStringView<wchar_t> *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = (longlong)param_2;
  if ((param_1 == (TStringView<wchar_t> *)0x0) || (param_2 < 1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Paths && NumPaths > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Paths.cpp"
                       ,0x75a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  iVar5 = 0;
  if (0 < lVar6) {
    piVar4 = &param_1->Size;
    lVar7 = lVar6;
    iVar5 = 0;
    do {
      iVar5 = iVar5 + 1 + *piVar4;
      piVar4 = piVar4 + 4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  ::FString::Reserve(__return_storage_ptr__,iVar5);
  ::FString::AppendChars(__return_storage_ptr__,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size)
  ;
  if (1 < lVar6) {
    lVar6 = lVar6 + -1;
    do {
      ::FString::PathAppend
                (__return_storage_ptr__,param_1[1].DataPtr,(int)*(undefined8 *)&param_1[1].Size);
      lVar6 = lVar6 + -1;
      param_1 = param_1 + 1;
    } while (lVar6 != 0);
  }
  return __return_storage_ptr__;
}

// ConvertFromSandboxPath @ 14192f4f0

FString * __cdecl
FPaths::ConvertFromSandboxPath(FString *__return_storage_ptr__,FString *param_1,wchar_t *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  wchar_t *pwVar4;
  size_t sVar5;
  FString *pFVar6;
  wchar_t wVar7;
  int iVar8;
  ForAnyElementType FVar9;
  ForAnyElementType FVar10;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_48;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_38;
  FString local_28;
  FString local_18;
  
  pwVar4 = FGenericPlatformMisc::ProjectDir();
  ::FString::FString(&local_18,pwVar4);
  ::FString::ConcatFC((FString *)&local_38,&local_18,L"Saved/Sandboxes");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  sVar5 = wcslen(param_2);
  iVar8 = (int)sVar5;
  if ((local_38.ArrayNum != 0) || (iVar3 = 2, iVar8 == -1)) {
    iVar3 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_48,&local_38,iVar3 + iVar8);
  ::FString::PathAppend((FString *)&local_48,param_2,iVar8);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  iVar8 = local_48.ArrayNum + -1;
  if (local_48.ArrayNum == 0) {
    iVar8 = 0;
  }
  FVar9.Data = local_48.AllocatorInstance.Data;
  while (FVar9.Data < local_48.AllocatorInstance.Data + (longlong)iVar8 * 2) {
    wVar7 = *(wchar_t *)FVar9.Data;
    if (wVar7 == L'\\') {
      wVar7 = L'/';
    }
    *(wchar_t *)FVar9.Data = wVar7;
    FVar9.Data = FVar9.Data + 2;
  }
  pwVar4 = FGenericPlatformMisc::RootDir();
  ::FString::FString(&local_28,pwVar4);
  ::FString::FString(__return_storage_ptr__,param_1);
  iVar8 = local_48.ArrayNum + -1;
  if (local_48.ArrayNum == 0) {
    iVar8 = 0;
  }
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_48.ArrayNum != 0) {
    FVar9.Data = local_48.AllocatorInstance.Data;
  }
  bVar2 = ::FString::StartsWith(__return_storage_ptr__,(wchar_t *)FVar9.Data,iVar8,IgnoreCase);
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SandboxPath.StartsWith(SandboxDirectory)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Paths.cpp"
                         ,0x66b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FString *)(*pcVar1)();
    return pFVar6;
  }
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar9.Data = local_28.Data.AllocatorInstance.Data;
  }
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_48.ArrayNum != 0) {
    FVar10.Data = local_48.AllocatorInstance.Data;
  }
  ::FString::ReplaceInline
            (__return_storage_ptr__,(wchar_t *)FVar10.Data,(wchar_t *)FVar9.Data,IgnoreCase);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ConvertPath @ 14192f6c0

/* WARNING: Enum "EPathConversion": Some values do not have unique names */

FString * __cdecl
FPaths::ConvertPath(FString *__return_storage_ptr__,FString *param_1,EPathConversion param_2,
                   wchar_t *param_3,wchar_t *param_4)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  wchar_t *pwVar4;
  FString *pFVar5;
  size_t sVar6;
  ForAnyElementType FVar7;
  int iVar8;
  wchar_t **ppwVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FScriptContainerElement *local_78;
  int local_70;
  wchar_t *local_68;
  undefined4 local_60 [2];
  FScriptContainerElement *local_58;
  int local_50;
  FScriptContainerElement *local_48;
  int local_40;
  
  uVar12 = 0;
  lVar10 = 2;
  if (param_4 == (wchar_t *)0x0) {
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.Data.ArrayNum = 0;
    local_b8.Data.ArrayMax = 0;
    local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (param_2 < Project_First) goto LAB_14192f845;
    pFVar5 = &local_88;
    pwVar4 = FGenericPlatformMisc::ProjectDir();
    uVar12 = 2;
LAB_14192f854:
    ::FString::FString(pFVar5,pwVar4);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    local_b8.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar3 = (pFVar5->Data).ArrayNum;
    local_b8.Data.ArrayNum = (pFVar5->Data).ArrayNum;
    local_b8.Data.ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
    if (((uVar12 & 2) != 0) &&
       (uVar12 = uVar12 & 0xfffffffd,
       local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
      iVar3 = local_b8.Data.ArrayNum;
    }
    if (((uVar12 & 1) != 0) &&
       (uVar12 = uVar12 & 0xfffffffe,
       local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
      iVar3 = local_b8.Data.ArrayNum;
    }
    uVar11 = iVar3 - 1;
    if (iVar3 == 0) {
      uVar11 = 0;
    }
  }
  else {
    pwVar4 = wcsstr(param_4,L"/Programs/");
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.Data.ArrayNum = 0;
    local_b8.Data.ArrayMax = 0;
    local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (pwVar4 == (wchar_t *)0x0) {
      if (param_2 < Project_First) goto LAB_14192f845;
      ::FString::operator=(&local_b8,param_4);
      uVar11 = local_b8.Data.ArrayNum - 1;
      if (local_b8.Data.ArrayNum == 0) {
        uVar11 = 0;
      }
    }
    else {
      if (param_2 < Project_First) {
LAB_14192f845:
        local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b8.Data.ArrayNum = 0;
        local_b8.Data.ArrayMax = 0;
        local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        pFVar5 = &local_98;
        pwVar4 = FGenericPlatformMisc::EngineDir();
        uVar12 = 1;
        goto LAB_14192f854;
      }
      pFVar5 = ::FString::Replace(param_1,&local_88,L"\\",L"/",IgnoreCase);
      iVar3 = ::FString::Find(pFVar5,L"/Programs/",10,IgnoreCase,FromStart,-1);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      pFVar5 = ::FString::Mid(param_1,&local_88,0,iVar3 + 1);
      if (&local_b8 != pFVar5) {
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        local_b8.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
        (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b8.Data.ArrayNum = (pFVar5->Data).ArrayNum;
        local_b8.Data.ArrayMax = (pFVar5->Data).ArrayMax;
        (pFVar5->Data).ArrayNum = 0;
        (pFVar5->Data).ArrayMax = 0;
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      uVar11 = iVar3 + 1;
      uVar12 = 0;
    }
  }
  ::FString::RightChop(param_1,&local_88,uVar11);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  local_a8.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
  local_a8.Data.ArrayNum = local_88.Data.ArrayNum;
  local_a8.Data.ArrayMax = local_88.Data.ArrayMax;
  bVar2 = ::FString::EndsWith(&local_a8,L"/",1,IgnoreCase);
  if ((!bVar2) && (bVar2 = ::FString::EndsWith(param_1,L"/",1,IgnoreCase), bVar2)) {
    ::FString::AppendChars(&local_a8,L"/",1);
  }
  FVar7.Data = local_b8.Data.AllocatorInstance.Data;
  iVar3 = local_a8.Data.ArrayNum + -1;
  if (local_a8.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  switch(param_2) {
  case Engine_PlatformExtension:
  case Project_First:
    local_60[0] = 9;
    local_78 = local_b8.Data.AllocatorInstance.Data;
    iVar8 = local_b8.Data.ArrayNum + -1;
    local_58 = (FScriptContainerElement *)param_3;
    if (iVar3 < 1) {
      local_68 = L"Platforms";
      local_50 = 0;
      if (local_b8.Data.ArrayNum == 0) {
        iVar8 = 0;
      }
      local_70 = iVar8;
      if (param_3 != (wchar_t *)0x0) {
        sVar6 = wcslen(param_3);
        local_50 = (int)sVar6;
      }
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.Data.ArrayNum = 0;
      local_98.Data.ArrayMax = 0;
      ::FString::Reserve(&local_98,iVar8 + 0xc + local_50);
      ::FString::AppendChars(&local_98,(wchar_t *)FVar7.Data,iVar8);
      ppwVar9 = &local_68;
      do {
        ::FString::PathAppend(&local_98,*ppwVar9,(int)ppwVar9[1]);
        ppwVar9 = ppwVar9 + 2;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      pFVar5 = &local_98;
      bVar1 = false;
      bVar2 = true;
      FVar7.Data = local_98.Data.AllocatorInstance.Data;
    }
    else {
      local_68 = L"Platforms";
      local_50 = 0;
      if (local_b8.Data.ArrayNum == 0) {
        iVar8 = 0;
      }
      local_70 = iVar8;
      if (param_3 != (wchar_t *)0x0) {
        sVar6 = wcslen(param_3);
        local_50 = (int)sVar6;
      }
      local_48 = local_a8.Data.AllocatorInstance.Data;
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.Data.ArrayNum = 0;
      local_88.Data.ArrayMax = 0;
      local_40 = iVar3;
      ::FString::Reserve(&local_88,iVar8 + local_50 + 0xd + iVar3);
      ::FString::AppendChars(&local_88,(wchar_t *)FVar7.Data,iVar8);
      ppwVar9 = &local_68;
      lVar10 = 3;
      do {
        ::FString::PathAppend(&local_88,*ppwVar9,(int)ppwVar9[1]);
        ppwVar9 = ppwVar9 + 2;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      pFVar5 = &local_88;
      bVar1 = true;
      bVar2 = false;
      FVar7.Data = local_88.Data.AllocatorInstance.Data;
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = FVar7.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar5->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
    if ((bVar2) && (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if ((bVar1) && (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    goto LAB_14192fea8;
  case Engine_NotForLicensees:
  case Project_NotForLicensees:
    iVar8 = local_b8.Data.ArrayNum + -1;
    if (iVar3 < 1) {
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.Data.ArrayNum = 0;
      local_88.Data.ArrayMax = 0;
      if (local_b8.Data.ArrayNum == 0) {
        iVar8 = 0;
      }
      ::FString::Reserve(&local_88,iVar8 + 0x1c);
      ::FString::AppendChars(&local_88,(wchar_t *)FVar7.Data,iVar8);
      ::FString::PathAppend(&local_88,L"Restricted/NotForLicensees",0x1a);
      pFVar5 = &local_88;
      bVar2 = false;
      bVar1 = true;
      FVar7.Data = local_88.Data.AllocatorInstance.Data;
    }
    else {
      local_78 = local_b8.Data.AllocatorInstance.Data;
      if (local_b8.Data.ArrayNum == 0) {
        iVar8 = 0;
      }
      local_68 = L"Restricted/NotForLicensees";
      local_60[0] = 0x1a;
      local_58 = local_a8.Data.AllocatorInstance.Data;
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.Data.ArrayNum = 0;
      local_98.Data.ArrayMax = 0;
      local_70 = iVar8;
      local_50 = iVar3;
      ::FString::Reserve(&local_98,iVar8 + 0x1d + iVar3);
      ::FString::AppendChars(&local_98,(wchar_t *)FVar7.Data,iVar8);
      ppwVar9 = &local_68;
      do {
        ::FString::PathAppend(&local_98,*ppwVar9,(int)ppwVar9[1]);
        ppwVar9 = ppwVar9 + 2;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      pFVar5 = &local_98;
      bVar2 = true;
      bVar1 = false;
      FVar7.Data = local_98.Data.AllocatorInstance.Data;
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = FVar7.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar5->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
    if ((bVar1) && (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    bVar2 = !bVar2;
    break;
  case Engine_NoRedist:
  case Project_NoRedist:
    iVar8 = local_b8.Data.ArrayNum + -1;
    if (iVar3 < 1) {
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.Data.ArrayNum = 0;
      local_88.Data.ArrayMax = 0;
      if (local_b8.Data.ArrayNum == 0) {
        iVar8 = 0;
      }
      ::FString::Reserve(&local_88,iVar8 + 0x15);
      ::FString::AppendChars(&local_88,(wchar_t *)FVar7.Data,iVar8);
      ::FString::PathAppend(&local_88,L"Restricted/NoRedist",0x13);
      pFVar5 = &local_88;
      uVar11 = 0x80;
      FVar7.Data = local_88.Data.AllocatorInstance.Data;
    }
    else {
      local_78 = local_b8.Data.AllocatorInstance.Data;
      if (local_b8.Data.ArrayNum == 0) {
        iVar8 = 0;
      }
      local_68 = L"Restricted/NoRedist";
      local_60[0] = 0x13;
      local_58 = local_a8.Data.AllocatorInstance.Data;
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.Data.ArrayNum = 0;
      local_98.Data.ArrayMax = 0;
      local_70 = iVar8;
      local_50 = iVar3;
      ::FString::Reserve(&local_98,iVar8 + 0x16 + iVar3);
      ::FString::AppendChars(&local_98,(wchar_t *)FVar7.Data,iVar8);
      ppwVar9 = &local_68;
      do {
        ::FString::PathAppend(&local_98,*ppwVar9,(int)ppwVar9[1]);
        ppwVar9 = ppwVar9 + 2;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      pFVar5 = &local_98;
      uVar11 = 0x40;
      FVar7.Data = local_98.Data.AllocatorInstance.Data;
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = FVar7.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar12 = uVar11 | uVar12;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar5->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
    if (((char)uVar12 < '\0') &&
       (uVar12 = uVar11 & 0xffffff7f,
       local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    bVar2 = (uVar12 & 0x40) == 0;
    break;
  case Engine_LimitedAccess:
  case Project_LimitedAccess:
    iVar8 = local_b8.Data.ArrayNum + -1;
    if (iVar3 < 1) {
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.Data.ArrayNum = 0;
      local_88.Data.ArrayMax = 0;
      if (local_b8.Data.ArrayNum == 0) {
        iVar8 = 0;
      }
      ::FString::Reserve(&local_88,iVar8 + 0x1a);
      ::FString::AppendChars(&local_88,(wchar_t *)FVar7.Data,iVar8);
      ::FString::PathAppend(&local_88,L"Restricted/LimitedAccess",0x18);
      pFVar5 = &local_88;
      bVar2 = false;
      bVar1 = true;
      FVar7.Data = local_88.Data.AllocatorInstance.Data;
    }
    else {
      local_78 = local_b8.Data.AllocatorInstance.Data;
      if (local_b8.Data.ArrayNum == 0) {
        iVar8 = 0;
      }
      local_68 = L"Restricted/LimitedAccess";
      local_60[0] = 0x18;
      local_58 = local_a8.Data.AllocatorInstance.Data;
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.Data.ArrayNum = 0;
      local_98.Data.ArrayMax = 0;
      local_70 = iVar8;
      local_50 = iVar3;
      ::FString::Reserve(&local_98,iVar8 + 0x1b + iVar3);
      ::FString::AppendChars(&local_98,(wchar_t *)FVar7.Data,iVar8);
      ppwVar9 = &local_68;
      do {
        ::FString::PathAppend(&local_98,*ppwVar9,(int)ppwVar9[1]);
        ppwVar9 = ppwVar9 + 2;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      pFVar5 = &local_98;
      bVar2 = true;
      bVar1 = false;
      FVar7.Data = local_98.Data.AllocatorInstance.Data;
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = FVar7.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar5->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
    if ((bVar1) && (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    bVar2 = !bVar2;
    break;
  default:
    ::FString::FString(__return_storage_ptr__,L"");
    goto LAB_14192fea8;
  }
  if ((!bVar2) && (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
LAB_14192fea8:
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ConvertRelativePathToFull @ 14192ff10

FString * __cdecl
FPaths::ConvertRelativePathToFull(FString *__return_storage_ptr__,FString *param_1,FString *param_2)

{
  UE4Paths_Private::ConvertRelativePathToFullInternal<FString>
            (__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// ConvertRelativePathToFull @ 14192ff30

FString * __cdecl
FPaths::ConvertRelativePathToFull(FString *__return_storage_ptr__,FString *param_1)

{
  size_t sVar1;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = FWindowsPlatformProcess::BaseDir();
  local_18.Size = 0;
  if (local_18.DataPtr != (wchar_t *)0x0) {
    sVar1 = wcslen(local_18.DataPtr);
    local_18.Size = (int)sVar1;
  }
  UE4Paths_Private::ConvertRelativePathToFullInternal<TStringView<wchar_t>_>
            (__return_storage_ptr__,&local_18,param_1);
  return __return_storage_ptr__;
}

// ConvertRelativePathToFull @ 14192ff90

FString * __cdecl
FPaths::ConvertRelativePathToFull(FString *__return_storage_ptr__,FString *param_1,FString *param_2)

{
  FScriptContainerElement *_Src;
  longlong lVar1;
  FString local_18;
  
  local_18.Data.ArrayNum = (param_2->Data).ArrayNum;
  lVar1 = (longlong)local_18.Data.ArrayNum;
  _Src = (param_2->Data).AllocatorInstance.Data;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.Data.ArrayNum == 0) {
    local_18.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)&local_18,local_18.Data.ArrayNum,
               &local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,_Src,lVar1 * 2);
  }
  UE4Paths_Private::ConvertRelativePathToFullInternal<FString>
            (__return_storage_ptr__,param_1,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ConvertRelativePathToFull @ 141930040

FString * __cdecl
FPaths::ConvertRelativePathToFull(FString *__return_storage_ptr__,FString *param_1,FString *param_2)

{
  UE4Paths_Private::ConvertRelativePathToFullInternal<FString_const_&>
            (__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// ConvertRelativePathToFull @ 141930060

FString * __cdecl
FPaths::ConvertRelativePathToFull(FString *__return_storage_ptr__,FString *param_1,FString *param_2)

{
  FScriptContainerElement *_Src;
  longlong lVar1;
  FString local_18;
  
  local_18.Data.ArrayNum = (param_2->Data).ArrayNum;
  lVar1 = (longlong)local_18.Data.ArrayNum;
  _Src = (param_2->Data).AllocatorInstance.Data;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.Data.ArrayNum == 0) {
    local_18.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)&local_18,local_18.Data.ArrayNum,
               &local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,_Src,lVar1 * 2);
  }
  UE4Paths_Private::ConvertRelativePathToFullInternal<FString_const_&>
            (__return_storage_ptr__,param_1,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ConvertRelativePathToFull @ 141930110

FString * __cdecl
FPaths::ConvertRelativePathToFull(FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *_Src;
  size_t sVar1;
  int iVar2;
  longlong lVar3;
  FString local_28;
  TStringView<wchar_t> local_18;
  
  local_28.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar3 = (longlong)local_28.Data.ArrayNum;
  iVar2 = 0;
  _Src = (param_1->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
               &local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,_Src,lVar3 * 2);
  }
  local_18.DataPtr = FWindowsPlatformProcess::BaseDir();
  if (local_18.DataPtr != (wchar_t *)0x0) {
    sVar1 = wcslen(local_18.DataPtr);
    iVar2 = (int)sVar1;
  }
  local_18.Size = iVar2;
  UE4Paths_Private::ConvertRelativePathToFullInternal<TStringView<wchar_t>_>
            (__return_storage_ptr__,&local_18,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ConvertToSandboxPath @ 1419301e0

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __cdecl
FPaths::ConvertToSandboxPath(FString *__return_storage_ptr__,FString *param_1,wchar_t *param_2)

{
  code *pcVar1;
  bool bVar2;
  wchar_t wVar3;
  int iVar4;
  wchar_t *pwVar5;
  size_t sVar6;
  FString *pFVar7;
  int iVar8;
  ForAnyElementType FVar9;
  ForAnyElementType FVar10;
  bool local_res8 [8];
  FString local_58;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_48;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_38;
  FString local_28;
  
  pwVar5 = FGenericPlatformMisc::ProjectDir();
  ::FString::FString(&local_28,pwVar5);
  ::FString::ConcatFC((FString *)&local_38,&local_28,L"Saved/Sandboxes");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  sVar6 = wcslen(param_2);
  iVar8 = (int)sVar6;
  if ((local_38.ArrayNum != 0) || (iVar4 = 2, iVar8 == -1)) {
    iVar4 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_48,&local_38,iVar4 + iVar8);
  ::FString::PathAppend((FString *)&local_48,param_2,iVar8);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  iVar8 = local_48.ArrayNum + -1;
  if (local_48.ArrayNum == 0) {
    iVar8 = 0;
  }
  FVar10.Data = local_48.AllocatorInstance.Data;
  while (FVar10.Data < local_48.AllocatorInstance.Data + (longlong)iVar8 * 2) {
    wVar3 = *(wchar_t *)FVar10.Data;
    if (wVar3 == L'\\') {
      wVar3 = L'/';
    }
    *(wchar_t *)FVar10.Data = wVar3;
    FVar10.Data = FVar10.Data + 2;
  }
  pwVar5 = FGenericPlatformMisc::RootDir();
  ::FString::FString(&local_58,pwVar5);
  UE4PathViews_Private::CollapseRelativeDirectoriesImplTemplate<FString>(&local_58,false,local_res8)
  ;
  ::FString::TrimToNullTerminator(&local_58);
  iVar8 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar8 = 0;
  }
  FVar10.Data = local_58.Data.AllocatorInstance.Data;
  while (FVar10.Data < local_58.Data.AllocatorInstance.Data + (longlong)iVar8 * 2) {
    wVar3 = *(wchar_t *)FVar10.Data;
    if (wVar3 == L'\\') {
      wVar3 = L'/';
    }
    *(wchar_t *)FVar10.Data = wVar3;
    FVar10.Data = FVar10.Data + 2;
  }
  ConvertRelativePathToFull(__return_storage_ptr__,param_1);
  iVar8 = local_58.Data.ArrayNum + -1;
  FVar10.Data = local_58.Data.AllocatorInstance.Data;
  if (local_58.Data.ArrayNum == 0) {
    iVar8 = 0;
    FVar10.Data = (FScriptContainerElement *)L"";
  }
  bVar2 = ::FString::StartsWith(__return_storage_ptr__,(wchar_t *)FVar10.Data,iVar8,IgnoreCase);
  if (!bVar2) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogInit);
  }
  iVar8 = local_58.Data.ArrayNum + -1;
  FVar10.Data = local_58.Data.AllocatorInstance.Data;
  if (local_58.Data.ArrayNum == 0) {
    iVar8 = 0;
    FVar10.Data = (FScriptContainerElement *)L"";
  }
  bVar2 = ::FString::StartsWith(__return_storage_ptr__,(wchar_t *)FVar10.Data,iVar8,IgnoreCase);
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SandboxPath.StartsWith(RootDirectory)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Paths.cpp"
                         ,0x65e,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar7 = (FString *)(*pcVar1)();
    return pFVar7;
  }
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_48.ArrayNum != 0) {
    FVar10.Data = local_48.AllocatorInstance.Data;
  }
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar9.Data = local_58.Data.AllocatorInstance.Data;
  }
  ::FString::ReplaceInline
            (__return_storage_ptr__,(wchar_t *)FVar9.Data,(wchar_t *)FVar10.Data,IgnoreCase);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// CreateStandardFilename @ 1419311e0

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __cdecl FPaths::CreateStandardFilename(FString *__return_storage_ptr__,FString *param_1)

{
  bool bVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  wchar_t *pwVar5;
  size_t sVar6;
  FStaticData *pFVar7;
  wchar_t *pwVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  int iVar11;
  ForAnyElementType FVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  ForAnyElementType FVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  FString *local_res10;
  FScriptContainerElement *local_res18 [2];
  FString local_78;
  FString local_68;
  FString local_58;
  TStringView<wchar_t> local_48;
  
  iVar4 = (param_1->Data).ArrayNum;
  lVar18 = 0;
  iVar11 = 0;
  iVar16 = 0;
  iVar14 = 0;
  iVar15 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar15 = iVar14;
  }
  local_res10 = param_1;
  if (iVar15 == 0) {
    pwVar5 = FWindowsPlatformProcess::BaseDir();
    ::FString::FString(&local_58,pwVar5);
    iVar4 = local_58.Data.ArrayNum + -1;
    if (local_58.Data.ArrayNum == 0) {
      iVar4 = iVar14;
    }
    if (iVar4 == 0) {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayMax = local_58.Data.ArrayMax;
      (__return_storage_ptr__->Data).ArrayNum = local_58.Data.ArrayNum;
      return __return_storage_ptr__;
    }
    CreateStandardFilename(__return_storage_ptr__,&local_58);
    FVar12.Data = local_58.Data.AllocatorInstance.Data;
    goto joined_r0x00014193182f;
  }
  bVar1 = ::FString::StartsWith(param_1,L"\\\\",2,IgnoreCase);
  if (bVar1) {
    ::FString::FString(__return_storage_ptr__,param_1);
    return __return_storage_ptr__;
  }
  iVar4 = (param_1->Data).ArrayNum;
  pFVar9 = (param_1->Data).AllocatorInstance.Data;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = iVar4;
  if (iVar4 == 0) {
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    iVar4 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar4,0,(ForAnyElementType *)&local_78,iVar4,&local_78.Data.ArrayMax);
    memcpy(local_78.Data.AllocatorInstance.Data,pFVar9,(longlong)iVar4 * 2);
    iVar4 = local_78.Data.ArrayNum;
  }
  lVar13 = 0xffffffff;
  iVar15 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar15 = iVar14;
  }
  lVar19 = 0xffffffff;
  iVar4 = -1;
  pFVar9 = local_78.Data.AllocatorInstance.Data + (longlong)iVar15 * 2;
  FVar12.Data = local_78.Data.AllocatorInstance.Data;
  FVar17.Data = local_78.Data.AllocatorInstance.Data;
  if (local_78.Data.AllocatorInstance.Data < pFVar9) {
    do {
      sVar3 = *(short *)FVar17.Data;
      FVar17.Data = FVar17.Data + 2;
      lVar20 = lVar18 >> 1;
      if (sVar3 == 0x5c) {
        sVar3 = 0x2f;
LAB_14193133b:
        if (((((int)lVar19 == -1) && (lVar19 = lVar20, sVar3 != 0x2f)) ||
            (FVar12.Data <= local_78.Data.AllocatorInstance.Data)) ||
           (*(short *)(FVar12.Data + -2) != 0x2f)) goto LAB_14193136c;
      }
      else {
        if (sVar3 == 0x2f) goto LAB_14193133b;
        if ((sVar3 == 0x3a) && ((int)lVar13 == -1)) {
          lVar13 = lVar20;
        }
LAB_14193136c:
        *(short *)FVar12.Data = sVar3;
        FVar12.Data = FVar12.Data + 2;
        lVar18 = lVar18 + 2;
      }
      iVar4 = (int)lVar19;
    } while (FVar17.Data < pFVar9);
    if (FVar12.Data < pFVar9) {
      *(short *)FVar12.Data = 0;
      ::FString::TrimToNullTerminator(&local_78);
    }
    if (((int)lVar13 < 1) || ((-1 < iVar4 && (iVar4 <= (int)lVar13)))) goto LAB_14193139e;
    bVar1 = true;
  }
  else {
LAB_14193139e:
    bVar1 = false;
  }
  pwVar5 = FGenericPlatformMisc::RootDir();
  iVar15 = iVar16;
  if (pwVar5 != (wchar_t *)0x0) {
    sVar6 = wcslen(pwVar5);
    iVar15 = (int)sVar6;
  }
  if ((!bVar1) || (bVar1 = ::FString::StartsWith(&local_78,pwVar5,iVar15,IgnoreCase), bVar1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((iVar4 != 0) || (bVar2 = ::FString::StartsWith(&local_78,pwVar5,iVar15,IgnoreCase), bVar2)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2 || bVar1) {
    UE4PathViews_Private::CollapseRelativeDirectoriesImplTemplate<FString>
              (&local_78,true,(bool *)&local_res10);
    ::FString::TrimToNullTerminator(&local_78);
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_78.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_78.Data.ArrayMax;
    return __return_storage_ptr__;
  }
  pFVar7 = TLazySingleton<FPaths::FStaticData>::Get();
  if (pFVar7->bRelativePathToRootInitialized == false) {
    pwVar8 = FGenericPlatformMisc::RootDir();
    ::FString::FString((FString *)&local_48,pwVar8);
    pwVar8 = FWindowsPlatformProcess::BaseDir();
    ::FString::FString(&local_58,pwVar8);
    iVar4 = local_48.Size + -1;
    if (local_48.Size == 0) {
      iVar4 = iVar14;
    }
    ::FString::AssignRange(&pFVar7->RelativePathToRoot,local_48.DataPtr,iVar4);
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar12.Data = local_58.Data.AllocatorInstance.Data;
    }
    MakePathRelativeTo(&pFVar7->RelativePathToRoot,(wchar_t *)FVar12.Data);
    iVar4 = (pFVar7->RelativePathToRoot).Data.ArrayNum;
    iVar14 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar14 = iVar16;
    }
    if (((0 < iVar14) &&
        (bVar1 = ::FString::EndsWith(&pFVar7->RelativePathToRoot,L"/",1,CaseSensitive), !bVar1)) &&
       (bVar1 = ::FString::EndsWith(&pFVar7->RelativePathToRoot,L"\\",1,CaseSensitive), !bVar1)) {
      ::FString::AppendChars(&pFVar7->RelativePathToRoot,L"/",1);
    }
    pFVar7->bRelativePathToRootInitialized = true;
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_48.DataPtr);
    }
  }
  iVar4 = (pFVar7->RelativePathToRoot).Data.ArrayNum;
  if (iVar4 == 0) {
    pwVar8 = L"";
    iVar4 = iVar16;
  }
  else {
    pwVar8 = (wchar_t *)(pFVar7->RelativePathToRoot).Data.AllocatorInstance.Data;
    iVar4 = iVar4 + -1;
  }
  bVar1 = ::FString::StartsWith(&local_78,pwVar8,iVar4,IgnoreCase);
  if (bVar1) {
    UE4PathViews_Private::CollapseRelativeDirectoriesImplTemplate<FString>
              (&local_78,true,(bool *)local_res18);
    ::FString::TrimToNullTerminator(&local_78);
    iVar4 = (pFVar7->RelativePathToRoot).Data.ArrayNum;
    iVar14 = local_78.Data.ArrayNum + -1;
    if (local_78.Data.ArrayNum == 0) {
      iVar14 = iVar11;
    }
    iVar10 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar10 = iVar16;
    }
    iVar4 = iVar14;
    if (iVar14 - iVar10 < iVar14) {
      iVar4 = iVar14 - iVar10;
    }
    iVar10 = iVar11;
    if (0 < iVar4) {
      iVar10 = iVar4;
    }
    lVar18 = (longlong)iVar10;
    pFVar9 = local_78.Data.AllocatorInstance.Data + (iVar14 - lVar18) * 2;
    if ((0 < iVar10) && (*(wchar_t *)pFVar9 == L'/')) {
      iVar4 = iVar10;
      if (iVar10 + -1 < iVar10) {
        iVar4 = iVar10 + -1;
      }
      iVar10 = 0;
      if (0 < iVar4) {
        iVar10 = iVar4;
      }
      pFVar9 = pFVar9 + (lVar18 - iVar10) * 2;
    }
    if (2 < iVar10) {
      iVar10 = 2;
    }
    iVar4 = iVar16;
    if (0 < iVar10) {
      iVar4 = iVar10;
    }
    if (iVar4 != 2) {
LAB_141931640:
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_78.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_78.Data.ArrayMax;
      return __return_storage_ptr__;
    }
    iVar4 = FGenericPlatformStricmp::Strnicmp(L"..",(wchar_t *)pFVar9,2);
    if (iVar4 != 0) {
      goto LAB_141931640;
    }
  }
  lVar18 = (longlong)local_78.Data.ArrayNum;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_res18[0] = local_78.Data.AllocatorInstance.Data;
  local_58.Data.ArrayNum = local_78.Data.ArrayNum;
  if (local_78.Data.ArrayNum == 0) {
    local_58.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_78.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_78.Data.ArrayNum,
               &local_58.Data.ArrayMax);
    memcpy(local_58.Data.AllocatorInstance.Data,local_res18[0],lVar18 * 2);
  }
  local_48.DataPtr = FWindowsPlatformProcess::BaseDir();
  local_48.Size = iVar16;
  if (local_48.DataPtr != (wchar_t *)0x0) {
    sVar6 = wcslen(local_48.DataPtr);
    local_48.Size = (int)sVar6;
  }
  UE4Paths_Private::ConvertRelativePathToFullInternal<TStringView<wchar_t>_>
            (&local_68,&local_48,&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  bVar1 = ::FString::StartsWith(&local_68,pwVar5,iVar15,IgnoreCase);
  if (bVar1) {
    ::FString::Reset(&local_78,0);
    iVar4 = (pFVar7->RelativePathToRoot).Data.ArrayNum;
    iVar14 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar14 = iVar16;
    }
    ::FString::AppendChars
              (&local_78,(wchar_t *)(pFVar7->RelativePathToRoot).Data.AllocatorInstance.Data,iVar14)
    ;
    iVar4 = local_68.Data.ArrayNum + -1;
    if (local_68.Data.ArrayNum == 0) {
      iVar4 = iVar11;
    }
    iVar11 = iVar4;
    if (iVar4 - iVar15 < iVar4) {
      iVar11 = iVar4 - iVar15;
    }
    if (0 < iVar11) {
      iVar16 = iVar11;
    }
    ::FString::AppendChars
              (&local_78,
               (wchar_t *)
               (local_68.Data.AllocatorInstance.Data + ((longlong)iVar4 - (longlong)iVar16) * 2),
               iVar16);
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_78.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_78.Data.ArrayMax;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FVar12.Data = local_78.Data.AllocatorInstance.Data;
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
      FVar12.Data = local_78.Data.AllocatorInstance.Data;
    }
  }
  else {
    iVar4 = ::FString::Find(&local_68,pwVar5,iVar15,IgnoreCase,FromStart,-1);
    if ((iVar4 != -1) && (2 < (byte)LogPaths._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPaths);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_68.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_68.Data.ArrayMax;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FVar12.Data = local_78.Data.AllocatorInstance.Data;
  }
joined_r0x00014193182f:
  if (FVar12.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar12.Data);
  }
  return __return_storage_ptr__;
}

// CreateTempFilename @ 141931c80

FString * __cdecl
FPaths::CreateTempFilename
          (FString *__return_storage_ptr__,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  FScriptContainerElement *pFVar1;
  FGuid *this;
  size_t sVar2;
  IFileManager *pIVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  int iVar6;
  ForAnyElementType _Str;
  int iVar7;
  FString local_68;
  FString local_58;
  FString local_48;
  FGuid local_38;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  do {
    iVar6 = 0;
    this = FGuid::NewGuid(&local_38);
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    FGuid::AppendString(this,&local_58,Digits);
    ::FString::PrintfImpl(&local_48,L"%s%s%s");
    iVar7 = 0;
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      _Str.Data = local_48.Data.AllocatorInstance.Data;
    }
    if (param_1 != (wchar_t *)0x0) {
      sVar2 = wcslen(param_1);
      iVar7 = (int)sVar2;
    }
    if (_Str.Data != (FScriptContainerElement *)0x0) {
      sVar2 = wcslen((wchar_t *)_Str.Data);
      iVar6 = (int)sVar2;
    }
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    ::FString::Reserve(&local_68,iVar6 + 2 + iVar7);
    ::FString::AppendChars(&local_68,param_1,iVar7);
    ::FString::PathAppend(&local_68,(wchar_t *)_Str.Data,iVar6);
    if (__return_storage_ptr__ != &local_68) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_68.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_68.Data.ArrayMax;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    pIVar3 = IFileManager::Get();
    if ((__return_storage_ptr__->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data;
    }
    lVar4 = (**(code **)((longlong)*pIVar3 + 0x110))(pIVar3,pwVar5);
  } while (-1 < lVar4);
  return __return_storage_ptr__;
}

// CustomShaderDirArgument @ 141932760

FString * __cdecl FPaths::CustomShaderDirArgument(void)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  FStaticData *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  size_t sVar7;
  int iVar8;
  ForAnyElementType _Str;
  int iVar9;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  pFVar4 = TLazySingleton<FPaths::FStaticData>::Get();
  if (pFVar4->bShaderDirInitialized == false) {
    pFVar1 = &pFVar4->ShaderDir;
    pwVar5 = FCommandLine::Get();
    FParse::Value(pwVar5,L"ShaderWorkingDir=",pFVar1,true,(wchar_t **)0x0);
    iVar8 = (pFVar4->ShaderDir).Data.ArrayNum;
    pFVar4->bShaderDirInitialized = true;
    if (1 < iVar8) {
      bVar3 = IsRelative(pFVar1);
      if (bVar3) {
        iVar8 = 0;
        if ((pFVar4->ShaderDir).Data.ArrayNum == 0) {
          pwVar5 = L"";
        }
        else {
          pwVar5 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
        }
        pwVar6 = FGenericPlatformMisc::ProjectDir();
        ::FString::FString(&local_38,pwVar6);
        _Str.Data = (FScriptContainerElement *)L"";
        if ((local_38.Data.ArrayNum == 0) ||
           (_Str.Data = local_38.Data.AllocatorInstance.Data,
           local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          sVar7 = wcslen((wchar_t *)_Str.Data);
          iVar8 = (int)sVar7;
        }
        iVar9 = 0;
        if ((FScriptContainerElement *)pwVar5 != (FScriptContainerElement *)0x0) {
          sVar7 = wcslen(pwVar5);
          iVar9 = (int)sVar7;
        }
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_48.Data.ArrayNum = 0;
        local_48.Data.ArrayMax = 0;
        ::FString::Reserve(&local_48,iVar9 + 2 + iVar8);
        ::FString::AppendChars(&local_48,(wchar_t *)_Str.Data,iVar8);
        ::FString::PathAppend(&local_48,pwVar5,iVar9);
        ::FString::ConcatFC(&local_68,&local_48,L"/");
        if (pFVar1 != &local_68) {
          pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          (pFVar1->Data).AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
          (pFVar4->ShaderDir).Data.ArrayNum = local_68.Data.ArrayNum;
          (pFVar4->ShaderDir).Data.ArrayMax = local_68.Data.ArrayMax;
          local_68.Data.ArrayNum = 0;
          local_68.Data.ArrayMax = 0;
          local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      else {
        NormalizeDirectoryName(pFVar1);
        ::FString::ConcatFC(&local_58,pFVar1,L"/");
        local_38.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
        if (pFVar1 != &local_58) {
          pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          (pFVar1->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
          (pFVar4->ShaderDir).Data.ArrayNum = local_58.Data.ArrayNum;
          (pFVar4->ShaderDir).Data.ArrayMax = local_58.Data.ArrayMax;
          local_58.Data.ArrayNum = 0;
          local_58.Data.ArrayMax = 0;
          local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_38.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
        }
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  return &pFVar4->ShaderDir;
}

// CustomUserDirArgument @ 1419329a0

FString * __cdecl FPaths::CustomUserDirArgument(void)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  FStaticData *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  size_t sVar7;
  int iVar8;
  ForAnyElementType _Str;
  int iVar9;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  pFVar4 = TLazySingleton<FPaths::FStaticData>::Get();
  if (pFVar4->bUserDirArgInitialized == false) {
    pFVar1 = &pFVar4->UserDirArg;
    pwVar5 = FCommandLine::Get();
    FParse::Value(pwVar5,L"UserDir=",pFVar1,true,(wchar_t **)0x0);
    iVar8 = (pFVar4->UserDirArg).Data.ArrayNum;
    pFVar4->bUserDirArgInitialized = true;
    if (1 < iVar8) {
      bVar3 = IsRelative(pFVar1);
      if (bVar3) {
        iVar8 = 0;
        if ((pFVar4->UserDirArg).Data.ArrayNum == 0) {
          pwVar5 = L"";
        }
        else {
          pwVar5 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
        }
        pwVar6 = FGenericPlatformMisc::ProjectDir();
        ::FString::FString(&local_38,pwVar6);
        _Str.Data = (FScriptContainerElement *)L"";
        if ((local_38.Data.ArrayNum == 0) ||
           (_Str.Data = local_38.Data.AllocatorInstance.Data,
           local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          sVar7 = wcslen((wchar_t *)_Str.Data);
          iVar8 = (int)sVar7;
        }
        iVar9 = 0;
        if ((FScriptContainerElement *)pwVar5 != (FScriptContainerElement *)0x0) {
          sVar7 = wcslen(pwVar5);
          iVar9 = (int)sVar7;
        }
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_48.Data.ArrayNum = 0;
        local_48.Data.ArrayMax = 0;
        ::FString::Reserve(&local_48,iVar9 + 2 + iVar8);
        ::FString::AppendChars(&local_48,(wchar_t *)_Str.Data,iVar8);
        ::FString::PathAppend(&local_48,pwVar5,iVar9);
        ::FString::ConcatFC(&local_68,&local_48,L"/");
        if (pFVar1 != &local_68) {
          pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          (pFVar1->Data).AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
          (pFVar4->UserDirArg).Data.ArrayNum = local_68.Data.ArrayNum;
          (pFVar4->UserDirArg).Data.ArrayMax = local_68.Data.ArrayMax;
          local_68.Data.ArrayNum = 0;
          local_68.Data.ArrayMax = 0;
          local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      else {
        NormalizeDirectoryName(pFVar1);
        ::FString::ConcatFC(&local_58,pFVar1,L"/");
        local_38.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
        if (pFVar1 != &local_58) {
          pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          (pFVar1->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
          (pFVar4->UserDirArg).Data.ArrayNum = local_58.Data.ArrayNum;
          (pFVar4->UserDirArg).Data.ArrayMax = local_58.Data.ArrayMax;
          local_58.Data.ArrayNum = 0;
          local_58.Data.ArrayMax = 0;
          local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_38.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
        }
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  return &pFVar4->UserDirArg;
}

// DevelopersFolderName @ 1419348d0

TStringView<wchar_t> * __cdecl
FPaths::DevelopersFolderName(TStringView<wchar_t> *__return_storage_ptr__)

{
  __return_storage_ptr__->Size = 10;
  __return_storage_ptr__->DataPtr = L"Developers";
  return __return_storage_ptr__;
}

// DiffDir @ 1419348f0

FString * __cdecl FPaths::DiffDir(FString *__return_storage_ptr__)

{
  FString *pFVar1;
  
  pFVar1 = ProjectSavedDir();
  ::FString::ConcatFC(__return_storage_ptr__,pFVar1,L"Diff/");
  return __return_storage_ptr__;
}

// DirectoryExists @ 141934920

bool __cdecl FPaths::DirectoryExists(FString *param_1)

{
  undefined1 uVar1;
  IFileManager *pIVar2;
  
  pIVar2 = IFileManager::Get();
  if ((param_1->Data).ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x000141934946. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((longlong)*pIVar2 + 0x58))(pIVar2,(param_1->Data).AllocatorInstance.Data);
    return (bool)uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x000141934958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*pIVar2 + 0x58))(pIVar2,L"");
  return (bool)uVar1;
}

// EngineConfigDir @ 141937110

FString * __cdecl FPaths::EngineConfigDir(FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  FString local_18;
  
  pwVar1 = FGenericPlatformMisc::EngineDir();
  ::FString::FString(&local_18,pwVar1);
  ::FString::ConcatFC(__return_storage_ptr__,&local_18,L"Config/");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// EngineContentDir @ 141937160

FString * __cdecl FPaths::EngineContentDir(FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  FString local_18;
  
  pwVar1 = FGenericPlatformMisc::EngineDir();
  ::FString::FString(&local_18,pwVar1);
  ::FString::ConcatFC(__return_storage_ptr__,&local_18,L"Content/");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// EngineDefaultLayoutDir @ 1419371b0

FString * __cdecl FPaths::EngineDefaultLayoutDir(FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  FString local_28;
  FString local_18;
  
  pwVar1 = FGenericPlatformMisc::EngineDir();
  ::FString::FString(&local_28,pwVar1);
  ::FString::ConcatFC(&local_18,&local_28,L"Config/");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::ConcatFC(__return_storage_ptr__,&local_18,L"Layouts/");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// EngineDir @ 141937230

FString * __cdecl FPaths::EngineDir(FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  
  pwVar1 = FGenericPlatformMisc::EngineDir();
  ::FString::FString(__return_storage_ptr__,pwVar1);
  return __return_storage_ptr__;
}

// EngineEditorSettingsDir @ 141937260

FString * __cdecl FPaths::EngineEditorSettingsDir(FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  
  pwVar1 = FGenericPlatformMisc::GeneratedConfigDir();
  ::FString::FString(__return_storage_ptr__,pwVar1);
  return __return_storage_ptr__;
}

// EngineIntermediateDir @ 141937290

FString * __cdecl FPaths::EngineIntermediateDir(FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  FString local_18;
  
  pwVar1 = FGenericPlatformMisc::EngineDir();
  ::FString::FString(&local_18,pwVar1);
  ::FString::ConcatFC(__return_storage_ptr__,&local_18,L"Intermediate/");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// EnginePlatformExtensionsDir @ 1419372e0

FString * __cdecl FPaths::EnginePlatformExtensionsDir(FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  FString local_18;
  
  pwVar1 = FGenericPlatformMisc::EngineDir();
  ::FString::FString(&local_18,pwVar1);
  ::FString::ConcatFC(__return_storage_ptr__,&local_18,L"Platforms/");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// EnginePluginsDir @ 141937330

FString * __cdecl FPaths::EnginePluginsDir(FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  FString local_18;
  
  pwVar1 = FGenericPlatformMisc::EngineDir();
  ::FString::FString(&local_18,pwVar1);
  ::FString::ConcatFC(__return_storage_ptr__,&local_18,L"Plugins/");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// EngineProjectLayoutDir @ 141937380

FString * __cdecl FPaths::EngineProjectLayoutDir(FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  FString local_28;
  FString local_18;
  
  pwVar1 = FGenericPlatformMisc::ProjectDir();
  ::FString::FString(&local_28,pwVar1);
  ::FString::ConcatFC(&local_18,&local_28,L"Config/");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::ConcatFC(__return_storage_ptr__,&local_18,L"Layouts/");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// EngineSavedDir @ 141937400

FString * __cdecl FPaths::EngineSavedDir(FString *__return_storage_ptr__)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FStaticData *pFVar3;
  FString *pFVar4;
  FString local_18;
  
  pFVar3 = TLazySingleton<FPaths::FStaticData>::Get();
  pFVar1 = &pFVar3->EngineSavedDir;
  if (pFVar3->bEngineSavedDirInitialized == false) {
    pFVar4 = UE4Paths_Private::EngineSavedDir(&local_18);
    if (pFVar1 != pFVar4) {
      pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
      (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar3->EngineSavedDir).Data.ArrayNum = (pFVar4->Data).ArrayNum;
      (pFVar3->EngineSavedDir).Data.ArrayMax = (pFVar4->Data).ArrayMax;
      (pFVar4->Data).ArrayNum = 0;
      (pFVar4->Data).ArrayMax = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    pFVar3->bEngineSavedDirInitialized = true;
  }
  ::FString::FString(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// EngineSourceDir @ 1419376c0

FString * __cdecl FPaths::EngineSourceDir(FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  FString local_18;
  
  pwVar1 = FGenericPlatformMisc::EngineDir();
  ::FString::FString(&local_18,pwVar1);
  ::FString::ConcatFC(__return_storage_ptr__,&local_18,L"Source/");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// EngineUserDir @ 141937710

FString * __cdecl FPaths::EngineUserDir(FString *__return_storage_ptr__)

{
  bool bVar1;
  wchar_t *pwVar2;
  FEngineVersion *this;
  FString *pFVar3;
  wchar_t *_Str;
  size_t sVar4;
  FScriptContainerElement **ppFVar5;
  wchar_t *_Str_00;
  longlong lVar6;
  int iVar7;
  int iVar8;
  FString local_78;
  FString local_68;
  FString local_58;
  wchar_t *local_48;
  int local_40;
  FScriptContainerElement *local_38;
  int local_30 [2];
  FScriptContainerElement *local_28;
  int local_20;
  
  bVar1 = ShouldSaveToUserDir();
  if (!bVar1) {
    bVar1 = FApp::IsEngineInstalled();
    if (!bVar1) {
      pwVar2 = FGenericPlatformMisc::EngineDir();
      ::FString::FString(__return_storage_ptr__,pwVar2);
      return __return_storage_ptr__;
    }
  }
  this = FEngineVersion::Current();
  pFVar3 = FEngineVersion::ToString(this,&local_58,Minor);
  pwVar2 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    _Str_00 = L"";
  }
  else {
    _Str_00 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = FApp::GetEpicProductIdentifier(&local_68);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar2 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  _Str = FWindowsPlatformProcess::UserSettingsDir();
  iVar7 = 0;
  local_48 = _Str;
  if (_Str != (wchar_t *)0x0) {
    sVar4 = wcslen(_Str);
    iVar7 = (int)sVar4;
  }
  iVar8 = 0;
  local_40 = iVar7;
  local_38 = (FScriptContainerElement *)pwVar2;
  if ((FScriptContainerElement *)pwVar2 != (FScriptContainerElement *)0x0) {
    sVar4 = wcslen(pwVar2);
    iVar8 = (int)sVar4;
  }
  local_20 = 0;
  local_30[0] = iVar8;
  local_28 = (FScriptContainerElement *)_Str_00;
  if ((FScriptContainerElement *)_Str_00 != (FScriptContainerElement *)0x0) {
    sVar4 = wcslen(_Str_00);
    local_20 = (int)sVar4;
  }
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  ::FString::Reserve(&local_78,iVar8 + local_20 + 3 + iVar7);
  ::FString::AppendChars(&local_78,_Str,iVar7);
  ppFVar5 = &local_38;
  lVar6 = 2;
  do {
    ::FString::PathAppend(&local_78,(wchar_t *)*ppFVar5,(int)ppFVar5[1]);
    ppFVar5 = ppFVar5 + 2;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  ::FString::ConcatFC(__return_storage_ptr__,&local_78,L"/");
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// EngineUserLayoutDir @ 1419378f0

FString * __cdecl FPaths::EngineUserLayoutDir(FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  FString local_18;
  
  pwVar1 = FGenericPlatformMisc::GeneratedConfigDir();
  ::FString::FString(&local_18,pwVar1);
  ::FString::ConcatFC(__return_storage_ptr__,&local_18,L"Layouts/");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// EngineVersionAgnosticUserDir @ 141937940

FString * __cdecl FPaths::EngineVersionAgnosticUserDir(FString *__return_storage_ptr__)

{
  bool bVar1;
  wchar_t *pwVar2;
  FString *pFVar3;
  wchar_t *_Str;
  size_t sVar4;
  FScriptContainerElement **ppFVar5;
  int iVar6;
  longlong lVar7;
  FString local_58;
  FString local_48;
  wchar_t *local_38;
  int local_30;
  FScriptContainerElement *local_28;
  int local_20 [2];
  wchar_t *local_18;
  undefined4 local_10;
  
  bVar1 = ShouldSaveToUserDir();
  if (!bVar1) {
    bVar1 = FApp::IsEngineInstalled();
    if (!bVar1) {
      pwVar2 = FGenericPlatformMisc::EngineDir();
      ::FString::FString(__return_storage_ptr__,pwVar2);
      return __return_storage_ptr__;
    }
  }
  pFVar3 = FApp::GetEpicProductIdentifier(&local_48);
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  _Str = FWindowsPlatformProcess::UserSettingsDir();
  iVar6 = 0;
  local_38 = _Str;
  if (_Str != (wchar_t *)0x0) {
    sVar4 = wcslen(_Str);
    iVar6 = (int)sVar4;
  }
  local_20[0] = 0;
  local_30 = iVar6;
  local_28 = (FScriptContainerElement *)pwVar2;
  if ((FScriptContainerElement *)pwVar2 != (FScriptContainerElement *)0x0) {
    sVar4 = wcslen(pwVar2);
    local_20[0] = (int)sVar4;
  }
  local_18 = L"Common";
  local_10 = 6;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  ::FString::Reserve(&local_58,local_20[0] + 9 + iVar6);
  ::FString::AppendChars(&local_58,_Str,iVar6);
  ppFVar5 = &local_28;
  lVar7 = 2;
  do {
    ::FString::PathAppend(&local_58,(wchar_t *)*ppFVar5,(int)ppFVar5[1]);
    ppFVar5 = ppFVar5 + 2;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  ::FString::ConcatFC(__return_storage_ptr__,&local_58,L"/");
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// EnterpriseDir @ 141937e60

FString * __cdecl FPaths::EnterpriseDir(FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  FString local_18;
  
  pwVar1 = FGenericPlatformMisc::RootDir();
  ::FString::FString(&local_18,pwVar1);
  ::FString::ConcatFC(__return_storage_ptr__,&local_18,L"Enterprise/");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// EnterpriseFeaturePackDir @ 141937eb0

FString * __cdecl FPaths::EnterpriseFeaturePackDir(FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  FString local_28;
  FString local_18;
  
  pwVar1 = FGenericPlatformMisc::RootDir();
  ::FString::FString(&local_28,pwVar1);
  ::FString::ConcatFC(&local_18,&local_28,L"Enterprise/");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::ConcatFC(__return_storage_ptr__,&local_18,L"FeaturePacks/");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// EnterprisePluginsDir @ 141937f30

FString * __cdecl FPaths::EnterprisePluginsDir(FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  FString local_28;
  FString local_18;
  
  pwVar1 = FGenericPlatformMisc::RootDir();
  ::FString::FString(&local_28,pwVar1);
  ::FString::ConcatFC(&local_18,&local_28,L"Enterprise/");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::ConcatFC(__return_storage_ptr__,&local_18,L"Plugins/");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FeaturePackDir @ 14193aa60

FString * __cdecl FPaths::FeaturePackDir(FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  FString local_18;
  
  pwVar1 = FGenericPlatformMisc::RootDir();
  ::FString::FString(&local_18,pwVar1);
  ::FString::ConcatFC(__return_storage_ptr__,&local_18,L"FeaturePacks/");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FileExists @ 14193aab0

bool __cdecl FPaths::FileExists(FString *param_1)

{
  undefined1 uVar1;
  IFileManager *pIVar2;
  
  pIVar2 = IFileManager::Get();
  if ((param_1->Data).ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014193aad6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((longlong)*pIVar2 + 0x50))(pIVar2,(param_1->Data).AllocatorInstance.Data);
    return (bool)uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014193aae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*pIVar2 + 0x50))(pIVar2,L"");
  return (bool)uVar1;
}

// FindCorrectCase @ 14193d2b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl FPaths::FindCorrectCase(FString *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  int iVar4;
  undefined1 auStack_2b8 [32];
  wchar_t local_298 [8];
  TArrayView<wchar_t_const_,int> local_288;
  TStringView<wchar_t> local_278;
  undefined1 local_268 [16];
  wchar_t **local_258 [2];
  wchar_t *local_248;
  wchar_t *local_240;
  undefined1 *local_238;
  undefined2 local_230;
  wchar_t local_228 [260];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  local_288.ArrayNum = 2;
  local_248 = local_228;
  local_230 = 0;
  local_240 = local_228;
  local_298[0] = L'/';
  local_298[1] = L'\\';
  local_238 = local_20;
  local_258[0] = &local_248;
  local_278.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  local_278.Size = iVar4;
  local_268._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FPaths::FindCorrectCase'::__l2::<lambda_1>,void,TStringView<wchar_t>_>::
       Call;
  local_268._8_8_ = local_258;
  local_288.DataPtr = local_298;
  UE::String::ParseTokensMultiple
            (&local_278,&local_288,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)local_268,
             None);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar3 = ::FString::ConstructFromPtrSize
                     ((FString *)local_268,local_248,
                      (int)((longlong)local_240 - (longlong)local_248 >> 1));
  if (__return_storage_ptr__ != pFVar3) {
    pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if ((FScriptContainerElement *)local_268._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_268._0_8_);
  }
  if ((char)local_230 != '\0') {
    FMemory::Free(local_248);
  }
  return __return_storage_ptr__;
}

// GameAgnosticSavedDir @ 141943bd0

FString * __cdecl FPaths::GameAgnosticSavedDir(FString *__return_storage_ptr__)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FStaticData *pFVar3;
  FString *pFVar4;
  FString local_18;
  
  pFVar3 = TLazySingleton<FPaths::FStaticData>::Get();
  pFVar1 = &pFVar3->EngineSavedDir;
  if (pFVar3->bEngineSavedDirInitialized == false) {
    pFVar4 = UE4Paths_Private::EngineSavedDir(&local_18);
    if (pFVar1 != pFVar4) {
      pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
      (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar3->EngineSavedDir).Data.ArrayNum = (pFVar4->Data).ArrayNum;
      (pFVar3->EngineSavedDir).Data.ArrayMax = (pFVar4->Data).ArrayMax;
      (pFVar4->Data).ArrayNum = 0;
      (pFVar4->Data).ArrayMax = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    pFVar3->bEngineSavedDirInitialized = true;
  }
  ::FString::FString(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GameDevelopersDir @ 141943c80

FString * __cdecl FPaths::GameDevelopersDir(FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  FString local_28;
  FString local_18;
  
  pwVar1 = FGenericPlatformMisc::ProjectDir();
  ::FString::FString(&local_18,pwVar1);
  ::FString::ConcatFC(&local_28,&local_18,L"Content/");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"%.*s%.*s/");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GameSourceDir @ 141943d80

FString * __cdecl FPaths::GameSourceDir(FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  FString local_18;
  
  pwVar1 = FGenericPlatformMisc::ProjectDir();
  ::FString::FString(&local_18,pwVar1);
  ::FString::ConcatFC(__return_storage_ptr__,&local_18,L"Source/");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GameUserDeveloperDir @ 141943dd0

FString * __cdecl FPaths::GameUserDeveloperDir(FString *__return_storage_ptr__)

{
  FString *this;
  FScriptContainerElement *pFVar1;
  FStaticData *pFVar2;
  wchar_t *pwVar3;
  FString *pFVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  ForAnyElementType FVar8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  pFVar2 = TLazySingleton<FPaths::FStaticData>::Get();
  iVar7 = 0;
  if (pFVar2->bUserFolderInitialized == false) {
    ::FString::FString(&local_78,L"\\:*?\"<>|\' ,.&!~\n\r\t@#");
    pwVar3 = FWindowsPlatformProcess::UserName(true);
    ::FString::FString(&local_68,pwVar3);
    this = &pFVar2->UserFolder;
    ::FString::operator=(this,&local_68);
    while( true ) {
      iVar5 = local_78.Data.ArrayNum + -1;
      if (local_78.Data.ArrayNum == 0) {
        iVar5 = 0;
      }
      if (iVar5 <= iVar7) break;
      ::FString::Mid(&local_78,&local_88,iVar7,1);
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_88.Data.ArrayNum != 0) {
        FVar8.Data = local_88.Data.AllocatorInstance.Data;
      }
      pFVar4 = ::FString::Replace(this,&local_38,(wchar_t *)FVar8.Data,L"_",CaseSensitive);
      if (this != pFVar4) {
        pFVar1 = (this->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (this->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
        (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar2->UserFolder).Data.ArrayNum = (pFVar4->Data).ArrayNum;
        (pFVar2->UserFolder).Data.ArrayMax = (pFVar4->Data).ArrayMax;
        (pFVar4->Data).ArrayNum = 0;
        (pFVar4->Data).ArrayMax = 0;
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      iVar7 = iVar7 + 1;
    }
    pFVar2->bUserFolderInitialized = true;
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = (pFVar2->UserFolder).Data.ArrayNum;
  lVar6 = (longlong)local_98.Data.ArrayNum;
  pFVar1 = (pFVar2->UserFolder).Data.AllocatorInstance.Data;
  if (local_98.Data.ArrayNum == 0) {
    local_98.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_98.Data.ArrayNum,0,(ForAnyElementType *)&local_98,local_98.Data.ArrayNum,
               &local_98.Data.ArrayMax);
    memcpy(local_98.Data.AllocatorInstance.Data,pFVar1,lVar6 * 2);
  }
  pwVar3 = FGenericPlatformMisc::ProjectDir();
  ::FString::FString(&local_68,pwVar3);
  ::FString::ConcatFC(&local_78,&local_68,L"Content/");
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_48,L"%.*s%.*s/");
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  ::FString::ConcatFF(&local_58,&local_48,&local_98);
  ::FString::ConcatFC(__return_storage_ptr__,&local_58,L"/");
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GameUserDeveloperFolderName @ 141944090

FString * __cdecl FPaths::GameUserDeveloperFolderName(FString *__return_storage_ptr__)

{
  FString *this;
  FScriptContainerElement *pFVar1;
  FStaticData *pFVar2;
  wchar_t *pwVar3;
  FString *pFVar4;
  int iVar5;
  int iVar6;
  ForAnyElementType FVar7;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  pFVar2 = TLazySingleton<FPaths::FStaticData>::Get();
  if (pFVar2->bUserFolderInitialized == false) {
    ::FString::FString(&local_48,L"\\:*?\"<>|\' ,.&!~\n\r\t@#");
    pwVar3 = FWindowsPlatformProcess::UserName(true);
    ::FString::FString(&local_38,pwVar3);
    this = &pFVar2->UserFolder;
    ::FString::operator=(this,&local_38);
    iVar6 = 0;
    while( true ) {
      iVar5 = local_48.Data.ArrayNum + -1;
      if (local_48.Data.ArrayNum == 0) {
        iVar5 = 0;
      }
      if (iVar5 <= iVar6) break;
      ::FString::Mid(&local_48,&local_58,iVar6,1);
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        FVar7.Data = local_58.Data.AllocatorInstance.Data;
      }
      pFVar4 = ::FString::Replace(this,&local_28,(wchar_t *)FVar7.Data,L"_",CaseSensitive);
      if (this != pFVar4) {
        pFVar1 = (this->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (this->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
        (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar2->UserFolder).Data.ArrayNum = (pFVar4->Data).ArrayNum;
        (pFVar2->UserFolder).Data.ArrayMax = (pFVar4->Data).ArrayMax;
        (pFVar4->Data).ArrayNum = 0;
        (pFVar4->Data).ArrayMax = 0;
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      iVar6 = iVar6 + 1;
    }
    pFVar2->bUserFolderInitialized = true;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  ::FString::FString(__return_storage_ptr__,&pFVar2->UserFolder);
  return __return_storage_ptr__;
}

// GeneratedConfigDir @ 141944440

FString * __cdecl FPaths::GeneratedConfigDir(FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  
  pwVar1 = FGenericPlatformMisc::GeneratedConfigDir();
  ::FString::FString(__return_storage_ptr__,pwVar1);
  return __return_storage_ptr__;
}

// GetBaseFilename @ 1419458f0

FString * __cdecl
FPaths::GetBaseFilename(FString *__return_storage_ptr__,FString *param_1,bool param_2)

{
  GetBaseFilenameImpl<FString>(__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// GetBaseFilename @ 141945910

FString * __cdecl
FPaths::GetBaseFilename(FString *__return_storage_ptr__,FString *param_1,bool param_2)

{
  GetBaseFilenameImpl<FString_const_&>(__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// GetCleanFilename @ 141945c10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __cdecl FPaths::GetCleanFilename(FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar7 = (param_1->Data).ArrayNum;
  iVar8 = 0;
  iVar9 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar9 = iVar8;
  }
  if (((iVar9 < 0) || (iVar7 < iVar9)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count >= 0 && Count <= this->Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x55b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar3)();
    return pFVar5;
  }
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  pFVar6 = pFVar2 + (longlong)iVar9 * 2;
  do {
    if (pFVar6 == pFVar2) {
      iVar7 = -1;
      goto LAB_141945ca2;
    }
    pFVar1 = pFVar6 + -2;
    pFVar6 = pFVar6 + -2;
  } while ((*(short *)pFVar1 == 0x2f) || (*(short *)pFVar1 == 0x5c));
  iVar7 = (int)((longlong)pFVar6 - (longlong)pFVar2 >> 1);
LAB_141945ca2:
  iVar9 = (param_1->Data).ArrayNum;
  iVar7 = iVar7 + 1;
  iVar10 = iVar9 + -1;
  if (iVar9 == 0) {
    iVar10 = iVar8;
  }
  if (((iVar10 < 0) || (iVar9 < iVar10)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count >= 0 && Count <= this->Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x55b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar3)();
    return pFVar5;
  }
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  pFVar6 = pFVar2 + (longlong)iVar10 * 2;
  do {
    if (pFVar6 == pFVar2) {
      iVar9 = -1;
      goto LAB_141945d0e;
    }
    pFVar1 = pFVar6 + -2;
    pFVar6 = pFVar6 + -2;
  } while ((*(short *)pFVar1 != 0x2f) && (*(short *)pFVar1 != 0x5c));
  iVar9 = (int)((longlong)pFVar6 - (longlong)pFVar2 >> 1);
LAB_141945d0e:
  if (iVar7 < iVar9 + 1) {
    ::FString::Empty(param_1);
  }
  else {
    iVar10 = (param_1->Data).ArrayNum;
    iVar11 = iVar10 + -1;
    if (iVar10 == 0) {
      iVar11 = iVar8;
    }
    ::FString::RemoveAt(param_1,iVar7,iVar11 - iVar7,No);
    ::FString::RemoveAt(param_1,0,iVar9 + 1,No);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (param_1->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetCleanFilename @ 141945da0

FString * __cdecl FPaths::GetCleanFilename(FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FString *pFVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  FString local_38;
  FString local_28;
  
  iVar7 = (param_1->Data).ArrayNum;
  iVar9 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar9 = 0;
  }
  if (((iVar9 < 0) || (iVar7 < iVar9)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count >= 0 && Count <= this->Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x55b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar6 = (FString *)(*pcVar4)();
    return pFVar6;
  }
  pFVar3 = (param_1->Data).AllocatorInstance.Data;
  pFVar8 = pFVar3 + (longlong)iVar9 * 2;
  do {
    if (pFVar8 == pFVar3) {
      iVar7 = -1;
      goto LAB_141945e32;
    }
    pFVar1 = pFVar8 + -2;
    pFVar8 = pFVar8 + -2;
  } while ((*(short *)pFVar1 == 0x2f) || (*(short *)pFVar1 == 0x5c));
  iVar7 = (int)((longlong)pFVar8 - (longlong)pFVar3 >> 1);
LAB_141945e32:
  iVar2 = (param_1->Data).ArrayNum;
  iVar9 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar9 = 0;
  }
  if (((iVar9 < 0) || (iVar2 < iVar9)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count >= 0 && Count <= this->Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x55b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar6 = (FString *)(*pcVar4)();
    return pFVar6;
  }
  pFVar3 = (param_1->Data).AllocatorInstance.Data;
  pFVar8 = pFVar3 + (longlong)iVar9 * 2;
  do {
    if (pFVar8 == pFVar3) {
      iVar9 = -1;
      goto LAB_141945e9e;
    }
    pFVar1 = pFVar8 + -2;
    pFVar8 = pFVar8 + -2;
  } while ((*(short *)pFVar1 != 0x2f) && (*(short *)pFVar1 != 0x5c));
  iVar9 = (int)((longlong)pFVar8 - (longlong)pFVar3 >> 1);
LAB_141945e9e:
  iVar9 = iVar9 + 1;
  bVar5 = iVar7 + 1 < iVar9;
  if (bVar5) {
    pFVar6 = ::FString::FString(&local_38,"");
  }
  else {
    pFVar6 = ::FString::Mid(param_1,&local_28,iVar9,(iVar7 + 1) - iVar9);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar6->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  if ((bVar5) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((!bVar5) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetCleanFilenameUtf8 @ 141945f50

FString * __cdecl FPaths::GetCleanFilenameUtf8(FString *__return_storage_ptr__,FUtf8String *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  FString *pFVar8;
  FScriptContainerElement *pFVar9;
  FUtf8String *pFVar10;
  int iVar11;
  int iVar12;
  FString local_58;
  FString local_48;
  FString local_38;
  FUtf8String local_28;
  
  iVar7 = (param_1->Data).ArrayNum;
  iVar12 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar12 = 0;
  }
  if (((iVar12 < 0) || (iVar7 < iVar12)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count >= 0 && Count <= this->Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x55b,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FString *)(*pcVar3)();
    return pFVar8;
  }
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  pFVar9 = pFVar2 + iVar12;
  do {
    if (pFVar9 == pFVar2) {
      iVar7 = -1;
      goto LAB_141945fdf;
    }
    pFVar1 = pFVar9 + -1;
    pFVar9 = pFVar9 + -1;
  } while ((*pFVar1 == (FScriptContainerElement)0x2f) || (*pFVar1 == (FScriptContainerElement)0x5c))
  ;
  iVar7 = (int)pFVar9 - (int)pFVar2;
LAB_141945fdf:
  iVar12 = (param_1->Data).ArrayNum;
  iVar11 = iVar12 + -1;
  if (iVar12 == 0) {
    iVar11 = 0;
  }
  if (((iVar11 < 0) || (iVar12 < iVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count >= 0 && Count <= this->Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x55b,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FString *)(*pcVar3)();
    return pFVar8;
  }
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  pFVar9 = pFVar2 + iVar11;
  do {
    if (pFVar9 == pFVar2) {
      iVar12 = -1;
      goto LAB_141946053;
    }
    pFVar1 = pFVar9 + -1;
    pFVar9 = pFVar9 + -1;
  } while ((*pFVar1 != (FScriptContainerElement)0x2f) && (*pFVar1 != (FScriptContainerElement)0x5c))
  ;
  iVar12 = (int)pFVar9 - (int)pFVar2;
LAB_141946053:
  iVar12 = iVar12 + 1;
  if (iVar7 + 1 < iVar12) {
    pFVar8 = ::FString::FString(&local_38,"");
    bVar5 = false;
    bVar4 = false;
    bVar6 = true;
  }
  else {
    pFVar10 = FUtf8String::Mid(param_1,&local_28,iVar12,(iVar7 + 1) - iVar12);
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    iVar7 = (pFVar10->Data).ArrayNum;
    iVar12 = iVar7 + -1;
    if (iVar7 == 0) {
      iVar12 = 0;
    }
    pFVar8 = ::FString::ConstructFromPtrSize
                       (&local_48,(uchar *)(pFVar10->Data).AllocatorInstance.Data,iVar12);
    if (&local_58 != pFVar8) {
      local_58.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
      (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = (pFVar8->Data).ArrayNum;
      local_58.Data.ArrayMax = (pFVar8->Data).ArrayMax;
      (pFVar8->Data).ArrayNum = 0;
      (pFVar8->Data).ArrayMax = 0;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    pFVar8 = &local_58;
    bVar5 = true;
    bVar4 = true;
    bVar6 = false;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
  (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar8->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar8->Data).ArrayMax;
  (pFVar8->Data).ArrayNum = 0;
  (pFVar8->Data).ArrayMax = 0;
  if ((bVar6) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((bVar5) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetEditorLocalizationPaths @ 1419467b0

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl FPaths::GetEditorLocalizationPaths(void)

{
  FStaticData *pFVar1;
  FString local_18;
  
  pFVar1 = TLazySingleton<FPaths::FStaticData>::Get();
  if (pFVar1->bEditorLocalizationPathsInitialized != false) {
    return &pFVar1->EditorLocalizationPaths;
  }
  if ((GConfig == (FConfigCacheIni *)0x0) || (GConfig->bIsReadyForUse == false)) {
    ::FString::FString(&local_18,L"../../../Engine/Content/Localization/Editor");
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>
              (&pFVar1->EditorLocalizationPaths,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return &pFVar1->EditorLocalizationPaths;
    }
  }
  else {
    FConfigCacheIni::GetArray
              (GConfig,L"Internationalization",L"LocalizationPaths",&pFVar1->EditorLocalizationPaths
               ,&GEditorIni);
    if (((pFVar1->EditorLocalizationPaths).ArrayNum == 0) && (2 < (byte)LogInit._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
    }
    pFVar1->bEditorLocalizationPathsInitialized = true;
  }
  return &pFVar1->EditorLocalizationPaths;
}

// GetEngineLocalizationPaths @ 141946ad0

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl FPaths::GetEngineLocalizationPaths(void)

{
  FStaticData *pFVar1;
  FString local_18;
  
  pFVar1 = TLazySingleton<FPaths::FStaticData>::Get();
  if (pFVar1->bEngineLocalizationPathsInitialized != false) {
    return &pFVar1->EngineLocalizationPaths;
  }
  if ((GConfig == (FConfigCacheIni *)0x0) || (GConfig->bIsReadyForUse == false)) {
    ::FString::FString(&local_18,L"../../../Engine/Content/Localization/Engine");
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>
              (&pFVar1->EngineLocalizationPaths,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return &pFVar1->EngineLocalizationPaths;
    }
  }
  else {
    FConfigCacheIni::GetArray
              (GConfig,L"Internationalization",L"LocalizationPaths",&pFVar1->EngineLocalizationPaths
               ,&GEngineIni);
    if (((pFVar1->EngineLocalizationPaths).ArrayNum == 0) && (2 < (byte)LogInit._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
    }
    pFVar1->bEngineLocalizationPathsInitialized = true;
  }
  return &pFVar1->EngineLocalizationPaths;
}

// GetExtension @ 141946d10

FString * __cdecl
FPaths::GetExtension(FString *__return_storage_ptr__,FString *param_1,bool param_2)

{
  int iVar1;
  FString local_18;
  
  GetCleanFilename(&local_18,param_1);
  iVar1 = ::FString::Find(&local_18,L".",1,CaseSensitive,FromEnd,-1);
  if (iVar1 == -1) {
    ::FString::FString(__return_storage_ptr__,L"");
  }
  else {
    ::FString::RightChop(&local_18,__return_storage_ptr__,(param_2 ^ 1) + iVar1);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetExtensionDirs @ 141946db0

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
FPaths::GetExtensionDirs
          (TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1,
          FString *param_2,EGetExtensionDirsFlags param_3)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  GetExtensionDirsInternal(__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// GetExtensionDirs @ 141946de0

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
FPaths::GetExtensionDirs
          (TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1,
          FString *param_2,bool param_3)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  GetExtensionDirsInternal
            (__return_storage_ptr__,param_1,param_2,param_3 * '\b' + ~CheckPlatformsValid);
  return __return_storage_ptr__;
}

// GetGameLocalizationPaths @ 141947d40

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl FPaths::GetGameLocalizationPaths(void)

{
  FStaticData *pFVar1;
  
  pFVar1 = TLazySingleton<FPaths::FStaticData>::Get();
  if (((pFVar1->bGameLocalizationPathsInitialized == false) && (GConfig != (FConfigCacheIni *)0x0))
     && (GConfig->bIsReadyForUse != false)) {
    FConfigCacheIni::GetArray
              (GConfig,L"Internationalization",L"LocalizationPaths",&pFVar1->GameLocalizationPaths,
               &GGameIni);
    if (((pFVar1->GameLocalizationPaths).ArrayNum == 0) && (2 < (byte)LogPaths._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPaths);
    }
    pFVar1->bGameLocalizationPathsInitialized = true;
    return &pFVar1->GameLocalizationPaths;
  }
  return &pFVar1->GameLocalizationPaths;
}

// GetInvalidFileSystemChars @ 141948410

FString * __cdecl FPaths::GetInvalidFileSystemChars(FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,RestrictedChars);
  return __return_storage_ptr__;
}

// GetPath @ 1419490d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __cdecl FPaths::GetPath(FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  int iVar9;
  
  iVar6 = (param_1->Data).ArrayNum;
  iVar8 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar8 = 0;
  }
  if (((iVar8 < 0) || (iVar6 < iVar8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count >= 0 && Count <= this->Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x55b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar3)();
    return pFVar5;
  }
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  pFVar7 = pFVar2 + (longlong)iVar8 * 2;
  do {
    if (pFVar7 == pFVar2) {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      return __return_storage_ptr__;
    }
    pFVar1 = pFVar7 + -2;
    pFVar7 = pFVar7 + -2;
  } while ((*(short *)pFVar1 != 0x2f) && (*(short *)pFVar1 != 0x5c));
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar6 = (int)((longlong)pFVar7 - (longlong)pFVar2 >> 1);
  if (iVar6 != -1) {
    iVar8 = (param_1->Data).ArrayNum;
    iVar9 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar9 = 0;
    }
    ::FString::RemoveAt(param_1,iVar6,iVar9 - iVar6,No);
    if (__return_storage_ptr__ != param_1) {
      pFVar7 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data
      ;
      (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (param_1->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (param_1->Data).ArrayMax;
      (param_1->Data).ArrayNum = 0;
      (param_1->Data).ArrayMax = 0;
    }
  }
  return __return_storage_ptr__;
}

// GetPath @ 1419491e0

FString * __cdecl FPaths::GetPath(FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  wchar_t *pwVar9;
  int iVar10;
  int iVar11;
  FString local_18;
  
  iVar7 = (param_1->Data).ArrayNum;
  pwVar9 = L"";
  iVar11 = 0;
  iVar10 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar10 = iVar11;
  }
  if (((iVar10 < 0) || (iVar7 < iVar10)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count >= 0 && Count <= this->Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x55b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FString *)(*pcVar3)();
    return pFVar6;
  }
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  pFVar8 = pFVar2 + (longlong)iVar10 * 2;
  do {
    if (pFVar8 == pFVar2) {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      return __return_storage_ptr__;
    }
    pFVar1 = pFVar8 + -2;
    pFVar8 = pFVar8 + -2;
  } while ((*(short *)pFVar1 != 0x2f) && (*(short *)pFVar1 != 0x5c));
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar7 = (int)((longlong)pFVar8 - (longlong)pFVar2 >> 1);
  if (iVar7 != -1) {
    iVar10 = (param_1->Data).ArrayNum;
    iVar5 = iVar10 + -1;
    if (iVar10 == 0) {
      iVar5 = iVar11;
    }
    if (iVar7 < iVar5) {
      iVar5 = iVar7;
    }
    if (0 < iVar5) {
      iVar11 = iVar5;
    }
    if (iVar10 != 0) {
      pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    ::FString::ConstructFromPtrSize(&local_18,pwVar9,iVar11);
    if (__return_storage_ptr__ != &local_18) {
      pFVar8 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_18.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_18.Data.ArrayMax;
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetPathLeaf @ 141949420

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __cdecl FPaths::GetPathLeaf(FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar9 = (param_1->Data).ArrayNum;
  iVar8 = iVar9 + -1;
  if (iVar9 == 0) {
    iVar8 = 0;
  }
  if (((iVar8 < 0) || (iVar9 < iVar8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count >= 0 && Count <= this->Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x55b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FString *)(*pcVar3)();
    return pFVar6;
  }
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  pFVar7 = pFVar2 + (longlong)iVar8 * 2;
  do {
    if (pFVar7 == pFVar2) {
      iVar9 = -1;
      goto LAB_1419494b2;
    }
    pFVar1 = pFVar7 + -2;
    pFVar7 = pFVar7 + -2;
  } while ((*(short *)pFVar1 == 0x2f) || (*(short *)pFVar1 == 0x5c));
  iVar9 = (int)((longlong)pFVar7 - (longlong)pFVar2 >> 1);
LAB_1419494b2:
  iVar9 = iVar9 + 1;
  iVar5 = ::FString::FindLastCharByPredicate<UE4Paths_Private::IsSlashOrBackslash::<lambda>_>
                    (param_1,UE4Paths_Private::IsSlashOrBackslash,iVar9);
  iVar8 = (param_1->Data).ArrayNum;
  iVar10 = iVar8 + -1;
  if (iVar8 == 0) {
    iVar10 = 0;
  }
  ::FString::RemoveAt(param_1,iVar9,iVar10 - iVar9,No);
  ::FString::RemoveAt(param_1,0,iVar5 + 1,No);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (param_1->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetPathLeaf @ 141949550

FString * __cdecl FPaths::GetPathLeaf(FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  
  iVar5 = (param_1->Data).ArrayNum;
  iVar8 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar8 = 0;
  }
  if (((iVar8 < 0) || (iVar5 < iVar8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count >= 0 && Count <= this->Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x55b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FString *)(*pcVar3)();
    return pFVar6;
  }
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  pFVar7 = pFVar2 + (longlong)iVar8 * 2;
  do {
    if (pFVar7 == pFVar2) {
      iVar8 = -1;
      goto LAB_1419495ce;
    }
    pFVar1 = pFVar7 + -2;
    pFVar7 = pFVar7 + -2;
  } while ((*(short *)pFVar1 == 0x2f) || (*(short *)pFVar1 == 0x5c));
  iVar8 = (int)((longlong)pFVar7 - (longlong)pFVar2 >> 1);
LAB_1419495ce:
  iVar5 = ::FString::FindLastCharByPredicate<UE4Paths_Private::IsSlashOrBackslash::<lambda>_>
                    (param_1,UE4Paths_Private::IsSlashOrBackslash,iVar8 + 1);
  ::FString::Mid(param_1,__return_storage_ptr__,iVar5 + 1,(iVar8 + 1) - (iVar5 + 1));
  return __return_storage_ptr__;
}

// GetPlatformLocalizationFolderName @ 14194a4c0

FString * __cdecl FPaths::GetPlatformLocalizationFolderName(FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Platforms");
  return __return_storage_ptr__;
}

// GetProjectFilePath @ 14194a620

FString * __cdecl FPaths::GetProjectFilePath(FString *__return_storage_ptr__)

{
  FStaticData *lpCriticalSection;
  
  lpCriticalSection = TLazySingleton<FPaths::FStaticData>::Get();
  if (lpCriticalSection != (FStaticData *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    ::FString::FString(__return_storage_ptr__,&lpCriticalSection->GameProjectFilePath);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetPropertyNameLocalizationPaths @ 14194a7c0

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl FPaths::GetPropertyNameLocalizationPaths(void)

{
  FStaticData *pFVar1;
  FString local_18;
  
  pFVar1 = TLazySingleton<FPaths::FStaticData>::Get();
  if (pFVar1->bPropertyNameLocalizationPathsInitialized != false) {
    return &pFVar1->PropertyNameLocalizationPaths;
  }
  if ((GConfig == (FConfigCacheIni *)0x0) || (GConfig->bIsReadyForUse == false)) {
    ::FString::FString(&local_18,L"../../../Engine/Content/Localization/PropertyNames");
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>
              (&pFVar1->PropertyNameLocalizationPaths,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return &pFVar1->PropertyNameLocalizationPaths;
    }
  }
  else {
    FConfigCacheIni::GetArray
              (GConfig,L"Internationalization",L"PropertyNameLocalizationPaths",
               &pFVar1->PropertyNameLocalizationPaths,&GEditorIni);
    if (((pFVar1->PropertyNameLocalizationPaths).ArrayNum == 0) && (2 < (byte)LogInit._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
    }
    pFVar1->bPropertyNameLocalizationPathsInitialized = true;
  }
  return &pFVar1->PropertyNameLocalizationPaths;
}

// GetRelativePathToRoot @ 14194aac0

FString * __cdecl FPaths::GetRelativePathToRoot(void)

{
  int iVar1;
  bool bVar2;
  FStaticData *pFVar3;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  int iVar6;
  FString local_28;
  FString local_18;
  
  pFVar3 = TLazySingleton<FPaths::FStaticData>::Get();
  if (pFVar3->bRelativePathToRootInitialized == false) {
    pwVar4 = FGenericPlatformMisc::RootDir();
    ::FString::FString(&local_18,pwVar4);
    pwVar4 = FWindowsPlatformProcess::BaseDir();
    ::FString::FString(&local_28,pwVar4);
    iVar6 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar6 = 0;
    }
    ::FString::AssignRange
              (&pFVar3->RelativePathToRoot,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar6);
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar5.Data = local_28.Data.AllocatorInstance.Data;
    }
    MakePathRelativeTo(&pFVar3->RelativePathToRoot,(wchar_t *)FVar5.Data);
    iVar1 = (pFVar3->RelativePathToRoot).Data.ArrayNum;
    iVar6 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar6 = 0;
    }
    if (0 < iVar6) {
      bVar2 = ::FString::EndsWith(&pFVar3->RelativePathToRoot,L"/",1,CaseSensitive);
      if (!bVar2) {
        bVar2 = ::FString::EndsWith(&pFVar3->RelativePathToRoot,L"\\",1,CaseSensitive);
        if (!bVar2) {
          ::FString::AppendChars(&pFVar3->RelativePathToRoot,L"/",1);
        }
      }
    }
    pFVar3->bRelativePathToRootInitialized = true;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return &pFVar3->RelativePathToRoot;
  }
  return &pFVar3->RelativePathToRoot;
}

// GetRestrictedFolderNames @ 14194ade0

/* WARNING: Removing unreachable block (ram,0x00014194b17e) */
/* WARNING: Removing unreachable block (ram,0x00014194afd8) */
/* WARNING: Removing unreachable block (ram,0x00014194af05) */
/* WARNING: Removing unreachable block (ram,0x00014194b0ab) */
/* WARNING: Removing unreachable block (ram,0x00014194b251) */

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl FPaths::GetRestrictedFolderNames(void)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FStaticData *pFVar6;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FName *pFVar11;
  undefined1 local_res8 [8];
  FName local_res10;
  FStaticData *local_res18;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  pFVar6 = TLazySingleton<FPaths::FStaticData>::Get();
  pTVar7 = &pFVar6->RestrictedFolderNames;
  if (pFVar6->bRestrictedFolderNamesInitialized == false) {
    local_res18 = pFVar6;
    ::FString::FString(&local_98,L"LimitedAccess");
    pFVar10 = (pTVar7->AllocatorInstance).Data;
    if (((pFVar10 <= (FScriptContainerElement *)&local_98) &&
        ((FScriptContainerElement *)&local_98 <
         pFVar10 + (longlong)(pFVar6->RestrictedFolderNames).ArrayMax * 0x10)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar7;
    }
    iVar4 = (pFVar6->RestrictedFolderNames).ArrayNum;
    if (iVar4 == (pFVar6->RestrictedFolderNames).ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar7->AllocatorInstance,&(pFVar6->RestrictedFolderNames).ArrayMax)
      ;
    }
    (pFVar6->RestrictedFolderNames).ArrayNum = iVar4 + 1;
    pFVar10 = (pTVar7->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
    *(undefined8 *)pFVar10 = 0;
    *(FScriptContainerElement **)pFVar10 = local_98.Data.AllocatorInstance.Data;
    *(int *)(pFVar10 + 8) = local_98.Data.ArrayNum;
    *(int *)(pFVar10 + 0xc) = local_98.Data.ArrayMax;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ::FString::FString(&local_88,L"NotForLicensees");
    pFVar10 = (pTVar7->AllocatorInstance).Data;
    if (((pFVar10 <= (FScriptContainerElement *)&local_88) &&
        ((FScriptContainerElement *)&local_88 <
         pFVar10 + (longlong)(pFVar6->RestrictedFolderNames).ArrayMax * 0x10)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar7;
    }
    iVar4 = (pFVar6->RestrictedFolderNames).ArrayNum;
    if (iVar4 == (pFVar6->RestrictedFolderNames).ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar7->AllocatorInstance,&(pFVar6->RestrictedFolderNames).ArrayMax)
      ;
    }
    (pFVar6->RestrictedFolderNames).ArrayNum = iVar4 + 1;
    pFVar10 = (pTVar7->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
    *(undefined8 *)pFVar10 = 0;
    *(FScriptContainerElement **)pFVar10 = local_88.Data.AllocatorInstance.Data;
    *(int *)(pFVar10 + 8) = local_88.Data.ArrayNum;
    *(int *)(pFVar10 + 0xc) = local_88.Data.ArrayMax;
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ::FString::FString(&local_78,L"NoRedist");
    pFVar10 = (pTVar7->AllocatorInstance).Data;
    if (((pFVar10 <= (FScriptContainerElement *)&local_78) &&
        ((FScriptContainerElement *)&local_78 <
         pFVar10 + (longlong)(pFVar6->RestrictedFolderNames).ArrayMax * 0x10)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar7;
    }
    iVar4 = (pFVar6->RestrictedFolderNames).ArrayNum;
    if (iVar4 == (pFVar6->RestrictedFolderNames).ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar7->AllocatorInstance,&(pFVar6->RestrictedFolderNames).ArrayMax)
      ;
    }
    (pFVar6->RestrictedFolderNames).ArrayNum = iVar4 + 1;
    pFVar10 = (pTVar7->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
    *(undefined8 *)pFVar10 = 0;
    *(FScriptContainerElement **)pFVar10 = local_78.Data.AllocatorInstance.Data;
    *(int *)(pFVar10 + 8) = local_78.Data.ArrayNum;
    *(int *)(pFVar10 + 0xc) = local_78.Data.ArrayMax;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ::FString::FString(&local_68,L"CarefullyRedist");
    pFVar10 = (pTVar7->AllocatorInstance).Data;
    if (((pFVar10 <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 <
         pFVar10 + (longlong)(pFVar6->RestrictedFolderNames).ArrayMax * 0x10)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar7;
    }
    iVar4 = (pFVar6->RestrictedFolderNames).ArrayNum;
    if (iVar4 == (pFVar6->RestrictedFolderNames).ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar7->AllocatorInstance,&(pFVar6->RestrictedFolderNames).ArrayMax)
      ;
    }
    (pFVar6->RestrictedFolderNames).ArrayNum = iVar4 + 1;
    pFVar10 = (pTVar7->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
    *(undefined8 *)pFVar10 = 0;
    *(FScriptContainerElement **)pFVar10 = local_68.Data.AllocatorInstance.Data;
    *(int *)(pFVar10 + 8) = local_68.Data.ArrayNum;
    *(int *)(pFVar10 + 0xc) = local_68.Data.ArrayMax;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ::FString::FString(&local_58,L"EpicInternal");
    pFVar10 = (pTVar7->AllocatorInstance).Data;
    if (((pFVar10 <= (FScriptContainerElement *)&local_58) &&
        ((FScriptContainerElement *)&local_58 <
         pFVar10 + (longlong)(pFVar6->RestrictedFolderNames).ArrayMax * 0x10)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar7;
    }
    iVar4 = (pFVar6->RestrictedFolderNames).ArrayNum;
    if (iVar4 == (pFVar6->RestrictedFolderNames).ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar7->AllocatorInstance,&(pFVar6->RestrictedFolderNames).ArrayMax)
      ;
    }
    (pFVar6->RestrictedFolderNames).ArrayNum = iVar4 + 1;
    pFVar10 = (pTVar7->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
    *(undefined8 *)pFVar10 = 0;
    *(FScriptContainerElement **)pFVar10 = local_58.Data.AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar10 + 8) = local_58.Data.ArrayNum;
    *(int *)(pFVar10 + 0xc) = local_58.Data.ArrayMax;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    pTVar8 = FDataDrivenPlatformInfoRegistry::GetConfidentialPlatforms();
    pFVar11 = (FName *)(pTVar8->AllocatorInstance).Data;
    iVar4 = pTVar8->ArrayNum;
    pFVar1 = pFVar11 + iVar4;
    while( true ) {
      if (pTVar8->ArrayNum != iVar4) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar11 == pFVar1) break;
      local_res10 = *pFVar11;
      pFVar9 = (FScriptContainerElement *)::FName::ToString(&local_res10,&local_48);
      pFVar10 = (pTVar7->AllocatorInstance).Data;
      if (((pFVar10 <= pFVar9) &&
          (pFVar9 < pFVar10 + (longlong)(pFVar6->RestrictedFolderNames).ArrayMax * 0x10)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar7;
      }
      iVar5 = (pFVar6->RestrictedFolderNames).ArrayNum;
      if (iVar5 == (pFVar6->RestrictedFolderNames).ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar7->AllocatorInstance,
                           &(pFVar6->RestrictedFolderNames).ArrayMax);
      }
      (pFVar6->RestrictedFolderNames).ArrayNum = iVar5 + 1;
      pFVar10 = (pTVar7->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
      *(undefined8 *)pFVar10 = 0;
      *(undefined8 *)pFVar10 = *(undefined8 *)pFVar9;
      *(undefined8 *)pFVar9 = 0;
      *(undefined4 *)(pFVar10 + 8) = *(undefined4 *)(pFVar9 + 8);
      *(undefined4 *)(pFVar10 + 0xc) = *(undefined4 *)(pFVar9 + 0xc);
      *(undefined8 *)(pFVar9 + 8) = 0;
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      pFVar11 = pFVar11 + 1;
    }
    local_res18->bRestrictedFolderNamesInitialized = true;
  }
  return pTVar7;
}

// GetToolTipLocalizationPaths @ 14194be40

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl FPaths::GetToolTipLocalizationPaths(void)

{
  FStaticData *pFVar1;
  FString local_18;
  
  pFVar1 = TLazySingleton<FPaths::FStaticData>::Get();
  if (pFVar1->bToolTipLocalizationPathsInitialized != false) {
    return &pFVar1->ToolTipLocalizationPaths;
  }
  if ((GConfig == (FConfigCacheIni *)0x0) || (GConfig->bIsReadyForUse == false)) {
    ::FString::FString(&local_18,L"../../../Engine/Content/Localization/ToolTips");
    TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>
              (&pFVar1->ToolTipLocalizationPaths,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return &pFVar1->ToolTipLocalizationPaths;
    }
  }
  else {
    FConfigCacheIni::GetArray
              (GConfig,L"Internationalization",L"ToolTipLocalizationPaths",
               &pFVar1->ToolTipLocalizationPaths,&GEditorIni);
    if (((pFVar1->ToolTipLocalizationPaths).ArrayNum == 0) && (2 < (byte)LogInit._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
    }
    pFVar1->bToolTipLocalizationPathsInitialized = true;
  }
  return &pFVar1->ToolTipLocalizationPaths;
}

// HasProjectPersistentDownloadDir @ 14194d060

bool __cdecl FPaths::HasProjectPersistentDownloadDir(void)

{
  return true;
}

// IsDrive @ 141951340

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl FPaths::IsDrive(FString *param_1)

{
  ushort uVar1;
  FScriptContainerElement *_Src;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  ForAnyElementType FVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  local_48.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar10 = (longlong)local_48.Data.ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  iVar11 = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_48.Data.ArrayNum == 0) {
    local_48.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_48.Data.ArrayNum,
               &local_48.Data.ArrayMax);
    memcpy(local_48.Data.AllocatorInstance.Data,_Src,lVar10 * 2);
  }
  pFVar6 = ::FString::Replace(&local_48,&local_28,L"/",L"\\",CaseSensitive);
  if (&local_48 != pFVar6) {
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    local_48.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = (pFVar6->Data).ArrayNum;
    local_48.Data.ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar8.Data = local_48.Data.AllocatorInstance.Data;
  }
  uVar1 = *(ushort *)FVar8.Data;
  if (((uVar1 == 0) ||
      (((((ushort)(uVar1 - (-(ushort)(uVar1 - 0x61 < 0x1a) & 0x20)) !=
          (ushort)((-(ushort)(uVar1 - 0x41 < 0x1a) & 0x20) + uVar1) &&
         (*(short *)(FVar8.Data + 2) == 0x3a)) && (*(short *)(FVar8.Data + 4) == 0)) ||
       ((iVar3 = wcscmp((wchar_t *)FVar8.Data,L"\\"), iVar3 == 0 ||
        (iVar3 = wcscmp((wchar_t *)FVar8.Data,L"\\\\"), iVar3 == 0)))))) ||
     ((uVar1 == 0x5c &&
      ((*(short *)(FVar8.Data + 2) == 0x5c &&
       (pwVar7 = wcschr((wchar_t *)(FVar8.Data + 4),L'\\'), pwVar7 == (wchar_t *)0x0)))))) {
    bVar2 = true;
    goto LAB_141951845;
  }
  ::FString::FString(&local_38,(wchar_t *)FVar8.Data);
  iVar3 = ::FString::Find(&local_38,L"\\",1,CaseSensitive,FromEnd,-1);
  iVar9 = local_38.Data.ArrayNum + -2;
  if (local_38.Data.ArrayNum == 0) {
    iVar9 = -1;
  }
  if (iVar3 != iVar9) {
    ::FString::AppendChars(&local_38,L"\\",1);
  }
  ::FString::FString(&local_58,L"");
  iVar3 = ::FString::Find(&local_38,L":\\",2,CaseSensitive,FromStart,-1);
  iVar9 = 0;
  if (iVar3 == -1) {
    bVar2 = ::FString::StartsWith(&local_38,L"\\\\",2,CaseSensitive);
    if (bVar2) {
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar8.Data = local_38.Data.AllocatorInstance.Data;
      }
      iVar4 = local_38.Data.ArrayNum + -1;
      iVar3 = local_38.Data.ArrayNum + -3;
      if (local_38.Data.ArrayNum == 0) {
        iVar4 = iVar11;
        iVar3 = -2;
      }
      iVar5 = iVar4;
      if (iVar3 < iVar4) {
        iVar5 = iVar3;
      }
      iVar3 = iVar9;
      if (0 < iVar5) {
        iVar3 = iVar5;
      }
      ::FString::FString(&local_28,(wchar_t *)(FVar8.Data + ((longlong)iVar4 - (longlong)iVar3) * 2)
                        );
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      local_58.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      local_58.Data.ArrayNum = local_28.Data.ArrayNum;
      local_58.Data.ArrayMax = local_28.Data.ArrayMax;
      iVar3 = ::FString::Find(&local_58,L"\\",1,CaseSensitive,FromStart,-1);
      if (iVar3 == -1) {
        ::FString::Reset(&local_58,0);
      }
      else {
        iVar4 = local_58.Data.ArrayNum + -1;
        if (local_58.Data.ArrayNum == 0) {
          iVar4 = 0;
        }
        iVar5 = (iVar4 - iVar3) + -1;
        iVar3 = iVar4;
        if (iVar5 < iVar4) {
          iVar3 = iVar5;
        }
        iVar5 = iVar9;
        if (0 < iVar3) {
          iVar5 = iVar3;
        }
        ::FString::RemoveAt(&local_58,0,iVar4 - iVar5,No);
      }
    }
  }
  else {
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = iVar11;
    }
    iVar3 = (iVar4 - iVar3) + -2;
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar8.Data = local_38.Data.AllocatorInstance.Data;
    }
    iVar5 = iVar4;
    if (iVar3 < iVar4) {
      iVar5 = iVar3;
    }
    iVar3 = 0;
    if (0 < iVar5) {
      iVar3 = iVar5;
    }
    ::FString::FString(&local_28,(wchar_t *)(FVar8.Data + ((longlong)iVar4 - (longlong)iVar3) * 2));
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    local_58.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    local_58.Data.ArrayNum = local_28.Data.ArrayNum;
    local_58.Data.ArrayMax = local_28.Data.ArrayMax;
  }
  iVar3 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar3 = iVar9;
  }
  if (iVar3 < 1) {
LAB_141951823:
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar2 = false;
  }
  else {
    ::FString::ReplaceInline(&local_58,L"\\\\",L"\\",CaseSensitive);
    iVar3 = ::FString::Find(&local_58,L"\\",1,CaseSensitive,FromStart,-1);
    if (iVar3 != -1) {
      do {
        iVar4 = local_58.Data.ArrayNum + -1;
        if (local_58.Data.ArrayNum == 0) {
          iVar4 = iVar9;
        }
        if (iVar3 < iVar4) {
          iVar4 = iVar3;
        }
        iVar5 = iVar9;
        if (0 < iVar4) {
          iVar5 = iVar4;
        }
        FVar8.Data = (FScriptContainerElement *)L"";
        if (local_58.Data.ArrayNum != 0) {
          FVar8.Data = local_58.Data.AllocatorInstance.Data;
        }
        ::FString::ConstructFromPtrSize(&local_28,(wchar_t *)FVar8.Data,iVar5);
        FVar8.Data = (FScriptContainerElement *)L"";
        if (local_28.Data.ArrayNum != 0) {
          FVar8.Data = local_28.Data.AllocatorInstance.Data;
        }
        iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar8.Data,L"..");
        iVar5 = -1;
        if (iVar4 != 0) {
          iVar5 = 1;
        }
        iVar11 = iVar5 + iVar11;
        iVar4 = local_58.Data.ArrayNum + -1;
        if (local_58.Data.ArrayNum == 0) {
          iVar4 = 0;
        }
        iVar5 = (iVar4 - iVar3) + -1;
        iVar3 = iVar4;
        if (iVar5 < iVar4) {
          iVar3 = iVar5;
        }
        iVar5 = iVar9;
        if (0 < iVar3) {
          iVar5 = iVar3;
        }
        ::FString::RemoveAt(&local_58,0,iVar4 - iVar5,No);
        iVar3 = ::FString::Find(&local_58,L"\\",1,CaseSensitive,FromStart,-1);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      } while (iVar3 != -1);
      if (0 < iVar11) goto LAB_141951823;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar2 = true;
  }
LAB_141951845:
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// IsProjectFilePathSet @ 141952310

bool __cdecl FPaths::IsProjectFilePathSet(void)

{
  int iVar1;
  FStaticData *lpCriticalSection;
  
  lpCriticalSection = TLazySingleton<FPaths::FStaticData>::Get();
  if (lpCriticalSection != (FStaticData *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar1 = (lpCriticalSection->GameProjectFilePath).Data.ArrayNum;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return 1 < iVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsRelative @ 141952380

bool __cdecl FPaths::IsRelative(FString *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = (param_1->Data).ArrayNum;
  uVar6 = iVar5 - 1;
  if (iVar5 == 0) {
    uVar6 = 0;
  }
  if (uVar6 != 0) {
    if (((int)uVar6 < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x113,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (*(short *)(param_1->Data).AllocatorInstance.Data == 0x2f) {
      return false;
    }
    if (1 < uVar6) {
      iVar1 = (param_1->Data).ArrayNum;
      iVar5 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar5 = 0;
      }
      if ((iVar5 < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x113,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if (*(short *)(param_1->Data).AllocatorInstance.Data == 0x5c) {
        iVar1 = (param_1->Data).ArrayNum;
        iVar5 = iVar1 + -1;
        if (iVar1 == 0) {
          iVar5 = 0;
        }
        if ((iVar5 < 2) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                               ,0x113,
                               L"String index out of bounds: Index %i from a string with a length of %i"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        if (*(short *)((param_1->Data).AllocatorInstance.Data + 2) == 0x5c) {
          return false;
        }
      }
      iVar1 = (param_1->Data).ArrayNum;
      iVar5 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar5 = 0;
      }
      if ((iVar5 < 2) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x113,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if (*(short *)((param_1->Data).AllocatorInstance.Data + 2) == 0x3a) {
        iVar1 = (param_1->Data).ArrayNum;
        iVar5 = iVar1 + -1;
        if (iVar1 == 0) {
          iVar5 = 0;
        }
        if ((iVar5 < 1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                               ,0x113,
                               L"String index out of bounds: Index %i from a string with a length of %i"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        iVar5 = iswalpha(*(wint_t *)(param_1->Data).AllocatorInstance.Data);
        if (iVar5 != 0) {
          return false;
        }
      }
    }
  }
  return true;
}

// IsRestrictedPath @ 141952ab0

/* WARNING: Removing unreachable block (ram,0x000141952c2a) */

bool __cdecl FPaths::IsRestrictedPath(FString *param_1)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  undefined1 uVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  FStaticData *pFVar11;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar12;
  size_t sVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  wchar_t *_Str;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_78;
  FString local_68;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  
  pFVar11 = TLazySingleton<FPaths::FStaticData>::Get();
  if (pFVar11->bRestrictedSlashedFolderNamesInitialized == false) {
    ::FString::FString(&local_48,L"/");
    pTVar12 = GetRestrictedFolderNames();
    iVar10 = pTVar12->ArrayNum;
    pFVar16 = (pTVar12->AllocatorInstance).Data;
    pFVar17 = pFVar16 + (longlong)iVar10 * 0x10;
    while( true ) {
      if (pTVar12->ArrayNum != iVar10) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar16 == pFVar17) break;
      pTVar2 = &pFVar11->RestrictedSlashedFolderNames;
      ::FString::ConcatFF((FString *)&local_58,&local_48,(FString *)pFVar16);
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::
      TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                (&local_78,&local_58,2 - (uint)(local_58.ArrayNum != 0));
      ::FString::AppendChar((FString *)&local_78,L'/');
      pTVar3 = (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)(pTVar2->AllocatorInstance).Data;
      if (((pTVar3 <= &local_78) &&
          (&local_78 < pTVar3 + (pFVar11->RestrictedSlashedFolderNames).ArrayMax)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      iVar9 = (pFVar11->RestrictedSlashedFolderNames).ArrayNum;
      piVar1 = &(pFVar11->RestrictedSlashedFolderNames).ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar2->AllocatorInstance,piVar1);
      }
      (pFVar11->RestrictedSlashedFolderNames).ArrayNum = iVar9 + 1;
      pFVar14 = (pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
      *(undefined8 *)pFVar14 = 0;
      *(FScriptContainerElement **)pFVar14 = local_78.AllocatorInstance.Data;
      *(int *)(pFVar14 + 8) = local_78.ArrayNum;
      *(int *)(pFVar14 + 0xc) = local_78.ArrayMax;
      local_78.ArrayNum = 0;
      local_78.ArrayMax = 0;
      local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      pFVar16 = pFVar16 + 0x10;
    }
    pFVar11->bRestrictedSlashedFolderNamesInitialized = true;
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  pFVar16 = (param_1->Data).AllocatorInstance.Data;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar15 = (longlong)local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    local_68.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)&local_68,local_68.Data.ArrayNum,
               &local_68.Data.ArrayMax);
    memcpy(local_68.Data.AllocatorInstance.Data,pFVar16,lVar15 * 2);
  }
  iVar10 = local_68.Data.ArrayNum + -1;
  if (local_68.Data.ArrayNum == 0) {
    iVar10 = 0;
  }
  FVar5.Data = local_68.Data.AllocatorInstance.Data;
  while (FVar5.Data < local_68.Data.AllocatorInstance.Data + (longlong)iVar10 * 2) {
    sVar8 = *(short *)FVar5.Data;
    if (sVar8 == 0x5c) {
      sVar8 = 0x2f;
    }
    *(short *)FVar5.Data = sVar8;
    FVar5.Data = FVar5.Data + 2;
  }
  ::FString::PathAppend(&local_68,(wchar_t *)0x0,0);
  iVar10 = (pFVar11->RestrictedSlashedFolderNames).ArrayNum;
  pFVar16 = (pFVar11->RestrictedSlashedFolderNames).AllocatorInstance.Data;
  pFVar17 = pFVar16 + (longlong)iVar10 * 0x10;
  do {
    if ((pFVar11->RestrictedSlashedFolderNames).ArrayNum != iVar10) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar16 == pFVar17) {
      bVar6 = false;
      goto LAB_141952d8c;
    }
    if (*(int *)(pFVar16 + 8) == 0) {
      _Str = L"";
LAB_141952d51:
      sVar13 = wcslen(_Str);
      iVar9 = ::FString::Find(&local_68,_Str,(int)sVar13,IgnoreCase,FromStart,-1);
      if (iVar9 != -1) {
        bVar6 = true;
LAB_141952d8c:
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        return bVar6;
      }
    }
    else {
      _Str = *(wchar_t **)pFVar16;
      if (_Str != (wchar_t *)0x0) goto LAB_141952d51;
    }
    pFVar16 = pFVar16 + 0x10;
  } while( true );
}

// IsSamePath @ 141952e00

bool __cdecl FPaths::IsSamePath(FString *param_1,FString *param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  FScriptContainerElement *pFVar4;
  ForAnyElementType FVar5;
  ForAnyElementType FVar6;
  FString local_28;
  FString local_18;
  
  ConvertRelativePathToFull(&local_18,param_1);
  ConvertRelativePathToFull(&local_28,param_2);
  FVar6.Data = local_18.Data.AllocatorInstance.Data;
  if ((local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) &&
     (pwVar2 = wcsstr((wchar_t *)local_18.Data.AllocatorInstance.Data,L"//"),
     pwVar2 != (wchar_t *)0x0)) {
    iVar1 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar1 = 0;
    }
    pwVar3 = pwVar2 + 1;
    for (pFVar4 = (FScriptContainerElement *)(pwVar2 + 2); pFVar4 < FVar6.Data + (longlong)iVar1 * 2
        ; pFVar4 = pFVar4 + 2) {
      if ((pwVar3[-1] != L'/') || (*(wchar_t *)pFVar4 != L'/')) {
        *pwVar3 = *(wchar_t *)pFVar4;
        pwVar3 = pwVar3 + 1;
      }
    }
    *pwVar3 = L'\0';
    ::FString::TrimToNullTerminator(&local_18);
  }
  FVar6.Data = local_28.Data.AllocatorInstance.Data;
  if ((local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) &&
     (pwVar2 = wcsstr((wchar_t *)local_28.Data.AllocatorInstance.Data,L"//"),
     pwVar2 != (wchar_t *)0x0)) {
    iVar1 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar1 = 0;
    }
    pwVar3 = pwVar2 + 1;
    for (pFVar4 = (FScriptContainerElement *)(pwVar2 + 2); pFVar4 < FVar6.Data + (longlong)iVar1 * 2
        ; pFVar4 = pFVar4 + 2) {
      if ((pwVar3[-1] != L'/') || (*(wchar_t *)pFVar4 != L'/')) {
        *pwVar3 = *(wchar_t *)pFVar4;
        pwVar3 = pwVar3 + 1;
      }
    }
    *pwVar3 = L'\0';
    ::FString::TrimToNullTerminator(&local_28);
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar6.Data = local_28.Data.AllocatorInstance.Data;
  }
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar5.Data = local_18.Data.AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,(wchar_t *)FVar6.Data);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return iVar1 == 0;
}

// IsStaged @ 141952fd0

bool __cdecl FPaths::IsStaged(void)

{
  if (!bHasInitialized) {
    bIsStaged = true;
    UE::Paths::bIsComputingStaged = false;
    bHasInitialized = true;
    return true;
  }
  return bIsStaged;
}

// IsUnderDirectory @ 141953000

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl FPaths::IsUnderDirectory(FString *param_1,FString *param_2)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  ForAnyElementType FVar7;
  FString local_28;
  FString local_18;
  
  ConvertRelativePathToFull(&local_18,param_1);
  ConvertRelativePathToFull(&local_28,param_2);
  bVar3 = ::FString::EndsWith(&local_28,L"/",1,IgnoreCase);
  if (bVar3) {
    iVar5 = local_28.Data.ArrayNum + -2;
    if (local_28.Data.ArrayNum == 0) {
      iVar5 = -1;
    }
    ::FString::RemoveAt(&local_28,iVar5,Default);
  }
  iVar5 = local_28.Data.ArrayNum + -1;
  FVar2.Data = local_28.Data.AllocatorInstance.Data;
  if (local_28.Data.ArrayNum == 0) {
    iVar5 = 0;
    FVar2.Data = (FScriptContainerElement *)L"";
  }
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar7.Data = local_18.Data.AllocatorInstance.Data;
  }
  iVar5 = FGenericPlatformStricmp::Strnicmp
                    ((wchar_t *)FVar7.Data,(wchar_t *)FVar2.Data,(longlong)iVar5);
  if (iVar5 == 0) {
    iVar5 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    iVar6 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar6 = 0;
    }
    if (iVar6 != iVar5) {
      if (((iVar5 < 0) || (iVar6 <= iVar5)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x107,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            ), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      if (*(short *)(local_18.Data.AllocatorInstance.Data + (longlong)iVar5 * 2) != 0x2f)
      goto LAB_141953102;
    }
    bVar3 = true;
  }
  else {
LAB_141953102:
    bVar3 = false;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// LaunchDir @ 141953ca0

FString * __cdecl FPaths::LaunchDir(FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  
  pwVar1 = FGenericPlatformMisc::LaunchDir();
  ::FString::FString(__return_storage_ptr__,pwVar1);
  return __return_storage_ptr__;
}

// MakePathRelativeTo @ 141955710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FPaths::MakePathRelativeTo(FString *param_1,wchar_t *param_2)

{
  ushort uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FString *pFVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  size_t sVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  longlong *plVar19;
  longlong *plVar20;
  undefined1 auStack_408 [32];
  ulonglong local_3e8;
  ulonglong local_3e0;
  FString local_3d8;
  longlong *local_3c8;
  ulonglong uStack_3c0;
  longlong *local_3b8;
  uint uStack_3b0;
  undefined4 uStack_3ac;
  FString local_3a8;
  FString local_398;
  longlong *local_388;
  longlong *local_380;
  FString *local_378;
  longlong *local_368;
  undefined8 uStack_360;
  TStringView<wchar_t> local_358;
  TStringView<wchar_t> local_348;
  FString local_338;
  FString local_328;
  FScriptContainerElement *local_318;
  int iStack_310;
  undefined4 uStack_30c;
  code *local_308;
  longlong **local_300;
  FScriptContainerElement *local_2f8;
  int iStack_2f0;
  undefined4 uStack_2ec;
  code *local_2e8;
  longlong **local_2e0;
  longlong *local_2d8;
  uint uStack_2d0;
  undefined4 uStack_2cc;
  TStringView<wchar_t> local_2c8;
  TStringView<wchar_t> local_2b8;
  TStringView<wchar_t> local_2a8;
  wchar_t *local_298;
  longlong lStack_290;
  wchar_t *local_288;
  longlong lStack_280;
  longlong local_278;
  longlong lStack_270;
  longlong local_268 [32];
  longlong *local_168;
  int local_160;
  undefined4 local_15c;
  longlong local_158 [32];
  longlong *local_58;
  uint local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_408;
  local_378 = param_1;
  ConvertRelativePathToFull(&local_398,param_1);
  ::FString::FString(&local_328,param_2);
  local_348.DataPtr = FWindowsPlatformProcess::BaseDir();
  uVar14 = 0;
  iVar10 = 0;
  local_348.Size = iVar10;
  if (local_348.DataPtr != (wchar_t *)0x0) {
    sVar8 = wcslen(local_348.DataPtr);
    local_348.Size = (int)sVar8;
  }
  UE4Paths_Private::ConvertRelativePathToFullInternal<TStringView<wchar_t>_>
            (&local_338,&local_348,&local_328);
  GetPath(&local_3a8,&local_338);
  if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_338.Data.AllocatorInstance.Data);
  }
  if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.Data.AllocatorInstance.Data);
  }
  ::FString::ReplaceInline(&local_3a8,L"\\",L"/",CaseSensitive);
  ::FString::ReplaceInline(&local_398,L"\\",L"/",CaseSensitive);
  local_318 = local_398.Data.AllocatorInstance.Data;
  local_3c8 = (longlong *)&u__;
  local_58 = (longlong *)0x0;
  local_50 = 0;
  iStack_310 = local_398.Data.ArrayNum + -1;
  if (local_398.Data.ArrayNum == 0) {
    iStack_310 = iVar10;
  }
  uStack_3c0 = CONCAT44(local_358._12_4_,1);
  local_388 = local_158;
  local_2b8._12_4_ = uStack_30c;
  local_2b8.Size = iStack_310;
  local_300 = &local_388;
  local_2b8.DataPtr = (wchar_t *)local_398.Data.AllocatorInstance.Data;
  local_4c = 0x10;
  local_308 = UE::Core::Private::Function::
              TFunctionRefCaller<`UE::String::ParseTokens<TArray<TStringView<wchar_t>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
              ::Call;
  local_2c8.DataPtr = L"/";
  local_2c8._8_8_ = uStack_3c0;
  UE::String::ParseTokens
            (&local_2b8,&local_2c8,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)&local_308,
             SkipEmpty|IgnoreCase);
  uVar9 = local_50;
  uVar17 = (ulonglong)(int)local_50;
  plVar20 = local_158;
  if (local_58 != (longlong *)0x0) {
    plVar20 = local_58;
  }
  if (((int)local_50 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  local_2f8 = local_3a8.Data.AllocatorInstance.Data;
  local_3b8 = (longlong *)&u__;
  uStack_3b0 = 1;
  local_168 = (longlong *)0x0;
  local_160 = 0;
  iStack_2f0 = local_3a8.Data.ArrayNum + -1;
  if (local_3a8.Data.ArrayNum == 0) {
    iStack_2f0 = iVar10;
  }
  uStack_3ac = local_358._12_4_;
  local_380 = local_268;
  local_2a8._12_4_ = local_358._12_4_;
  local_2a8.Size = 1;
  local_358._12_4_ = uStack_2ec;
  local_358.Size = iStack_2f0;
  local_2e0 = &local_380;
  local_358.DataPtr = (wchar_t *)local_3a8.Data.AllocatorInstance.Data;
  local_15c = 0x10;
  local_2e8 = UE::Core::Private::Function::
              TFunctionRefCaller<`UE::String::ParseTokens<TArray<TStringView<wchar_t>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
              ::Call;
  local_2a8.DataPtr = L"/";
  UE::String::ParseTokens
            (&local_358,&local_2a8,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)&local_2e8,
             SkipEmpty|IgnoreCase);
  iVar10 = local_160;
  uVar16 = (ulonglong)local_160;
  plVar19 = local_268;
  if (local_168 != (longlong *)0x0) {
    plVar19 = local_168;
  }
  if ((local_160 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  uVar11 = 0;
  if ((uVar9 != 0) && (iVar10 != 0)) {
    if ((int)uVar9 < 1) {
      local_3e8 = 0;
      local_3e0 = uVar17;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    if (1 < (int)plVar20[1]) {
      if ((int)uVar9 < 1) {
        local_3e8 = 0;
        local_3e0 = uVar17;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
      }
      if ((int)plVar20[1] < 2) {
        local_3e0 = CONCAT44(local_3e0._4_4_,(int)plVar20[1]);
        local_3e8 = CONCAT44(local_3e8._4_4_,1);
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0 && Index < Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                           ,0x234,
                           L"Index out of bounds on StringView: index %i on a view with a length of %i"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
      }
      if (*(short *)(*plVar20 + 2) == 0x3a) {
        if (iVar10 < 1) {
          local_3e8 = 0;
          local_3e0 = uVar16;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
        }
        if (1 < (int)plVar19[1]) {
          if (iVar10 < 1) {
            local_3e8 = 0;
            local_3e0 = uVar16;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
          }
          if ((int)plVar19[1] < 2) {
            local_3e0 = CONCAT44(local_3e0._4_4_,(int)plVar19[1]);
            local_3e8 = CONCAT44(local_3e8._4_4_,1);
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0 && Index < Size",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                               ,0x234,
                               L"Index out of bounds on StringView: index %i on a view with a length of %i"
                              );
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
          }
          if (*(short *)(*plVar19 + 2) == 0x3a) {
            if ((int)uVar9 < 1) {
              local_3e8 = 0;
              local_3e0 = uVar17;
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld");
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                uVar6 = (*pcVar3)();
                return (bool)uVar6;
              }
            }
            if (iVar10 < 1) {
              local_3e8 = 0;
              local_3e0 = uVar16;
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld");
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                uVar6 = (*pcVar3)();
                return (bool)uVar6;
              }
            }
            if ((int)plVar19[1] < 1) {
              local_3e0 = CONCAT44(local_3e0._4_4_,(int)plVar19[1]);
              local_3e8 = local_3e8 & 0xffffffff00000000;
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0 && Index < Size",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                                 ,0x234,
                                 L"Index out of bounds on StringView: index %i on a view with a length of %i"
                                );
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                uVar6 = (*pcVar3)();
                return (bool)uVar6;
              }
            }
            uVar1 = *(ushort *)*plVar19;
            if ((int)plVar20[1] < 1) {
              local_3e0 = CONCAT44(local_3e0._4_4_,(int)plVar20[1]);
              local_3e8 = local_3e8 & 0xffffffff00000000;
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0 && Index < Size",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                                 ,0x234,
                                 L"Index out of bounds on StringView: index %i on a view with a length of %i"
                                );
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                uVar6 = (*pcVar3)();
                return (bool)uVar6;
              }
            }
            if ((ushort)(*(ushort *)*plVar20 - (-(ushort)(*(ushort *)*plVar20 - 0x61 < 0x1a) & 0x20)
                        ) != (ushort)(uVar1 - (-(ushort)(uVar1 - 0x61 < 0x1a) & 0x20))) {
              bVar5 = false;
              goto LAB_141955f4f;
            }
          }
        }
      }
    }
    do {
      uVar9 = (uint)uVar17;
      uVar15 = (uint)uVar16;
      if (uVar15 == 0) break;
      if ((int)uVar15 < 1) {
        local_3e0 = (ulonglong)(int)uVar15;
        local_3e8 = 0;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
      }
      if ((int)uVar9 < 1) {
        local_3e0 = (ulonglong)(int)uVar9;
        local_3e8 = 0;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
      }
      local_298 = (wchar_t *)*plVar19;
      lStack_290 = plVar19[1];
      iVar10 = (int)plVar20[1];
      iVar18 = (int)plVar19[1];
      if (iVar10 != iVar18) break;
      local_288 = local_298;
      lStack_280 = lStack_290;
      if ((iVar10 != 0) && (iVar18 != 0)) {
        iVar7 = iVar18;
        if (iVar10 < iVar18) {
          iVar7 = iVar10;
        }
        iVar7 = FGenericPlatformStricmp::Strnicmp((wchar_t *)*plVar20,local_298,(longlong)iVar7);
        if (iVar7 != 0) break;
      }
      if (iVar10 != iVar18) break;
      uVar13 = uVar9;
      if ((int)(uVar9 - 1) < (int)uVar9) {
        uVar13 = uVar9 - 1;
      }
      uVar12 = uVar11;
      if (0 < (int)uVar13) {
        uVar12 = uVar13;
      }
      local_3b8 = plVar20 + ((longlong)(int)uVar9 - (longlong)(int)uVar12) * 2;
      uStack_3b0 = uVar12;
      if (((int)uVar12 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      uStack_3c0 = CONCAT44(uStack_3ac,uStack_3b0);
      local_3c8 = local_3b8;
      uVar9 = uVar15;
      if ((int)(uVar15 - 1) < (int)uVar15) {
        uVar9 = uVar15 - 1;
      }
      uStack_2d0 = uVar11;
      if (0 < (int)uVar9) {
        uStack_2d0 = uVar9;
      }
      local_2d8 = plVar19 + ((longlong)(int)uVar15 - (longlong)(int)uStack_2d0) * 2;
      if (((int)uStack_2d0 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      local_368 = local_2d8;
      uStack_360 = CONCAT44(uStack_2cc,uStack_2d0);
      uVar17 = uStack_3c0 & 0xffffffff;
      uVar16 = (ulonglong)uStack_2d0;
      plVar19 = local_2d8;
      plVar20 = local_3c8;
      uVar9 = (uint)uStack_3c0;
    } while (uVar12 != 0);
  }
  uVar15 = 1;
  if (1 < (int)uVar9) {
    uVar15 = uVar9;
  }
  iVar10 = (int)uVar16 * 3 + (uVar15 - 1);
  for (plVar19 = plVar20; plVar19 != plVar20 + (longlong)(int)uVar9 * 2; plVar19 = plVar19 + 2) {
    iVar10 = iVar10 + (int)plVar19[1];
  }
  local_3d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3d8.Data.ArrayNum = 0;
  local_3d8.Data.ArrayMax = 0;
  ::FString::Reserve(&local_3d8,iVar10);
  if (0 < (int)uVar16) {
    uVar16 = uVar16 & 0xffffffff;
    do {
      ::FString::AppendChars(&local_3d8,L"../",3);
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  uVar17 = uVar14;
  if (0 < (int)uVar9) {
    while( true ) {
      uVar13 = (uint)uVar14;
      uVar15 = uVar11;
      if ((int)uVar13 < (int)uVar9) {
        uVar15 = ~uVar13 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (local_3e8 = uVar17, local_3e0 = (longlong)(int)uVar9,
         bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      local_278 = *plVar20;
      lStack_270 = plVar20[1];
      ::FString::AppendChars(&local_3d8,(wchar_t *)*plVar20,(int)plVar20[1]);
      uVar14 = (ulonglong)(uVar13 + 1);
      plVar20 = plVar20 + 2;
      if ((int)uVar9 <= (int)(uVar13 + 1)) break;
      ::FString::AppendChars(&local_3d8,L"/",1);
      uVar17 = uVar17 + 1;
    }
  }
  pFVar4 = local_378;
  if (local_378 != &local_3d8) {
    pFVar2 = (local_378->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar4->Data).AllocatorInstance.Data = local_3d8.Data.AllocatorInstance.Data;
    (pFVar4->Data).ArrayNum = local_3d8.Data.ArrayNum;
    (pFVar4->Data).ArrayMax = local_3d8.Data.ArrayMax;
    local_3d8.Data.ArrayNum = 0;
    local_3d8.Data.ArrayMax = 0;
    local_3d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  bVar5 = true;
  if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
  }
LAB_141955f4f:
  if (local_168 != (longlong *)0x0) {
    FMemory::Free(local_168);
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
  }
  if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_398.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// MakePlatformFilename @ 141955ff0

void __cdecl FPaths::MakePlatformFilename(FString *param_1)

{
  wchar_t *pwVar1;
  
  pwVar1 = FWindowsPlatformMisc::GetDefaultPathSeparator();
  ::FString::ReplaceInline(param_1,L"\\",pwVar1,CaseSensitive);
  pwVar1 = FWindowsPlatformMisc::GetDefaultPathSeparator();
  ::FString::ReplaceInline(param_1,L"/",pwVar1,CaseSensitive);
  return;
}

// MakeStandardFilename @ 1419560f0

void __cdecl FPaths::MakeStandardFilename(FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FString local_18;
  
  pFVar2 = CreateStandardFilename(&local_18,param_1);
  if (param_1 != pFVar2) {
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_1->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_1->Data).ArrayNum = (pFVar2->Data).ArrayNum;
    (param_1->Data).ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// MakeValidFileName @ 141956480

FString * __cdecl
FPaths::MakeValidFileName(FString *__return_storage_ptr__,FString *param_1,wchar_t param_2)

{
  undefined2 uVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  int iVar5;
  uint uVar6;
  ForAnyElementType FVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ForAnyElementType local_48;
  undefined8 local_40;
  FString local_38;
  
  ::FString::FString(&local_38,RestrictedChars);
  iVar8 = (param_1->Data).ArrayNum;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  uVar10 = iVar8 - 1;
  if (iVar8 == 0) {
    uVar10 = 0;
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar10 + 1,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
  uVar11 = 0;
  lVar14 = (longlong)(int)uVar10;
  uVar13 = uVar11;
  if (0 < (int)uVar10) {
    do {
      uVar9 = (uint)uVar11;
      if ((int)uVar9 < 0) {
code_r0x000141956548:
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x113,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar4 = (FString *)(*pcVar2)();
          return pFVar4;
        }
      }
      else {
        iVar8 = (param_1->Data).ArrayNum;
        iVar5 = iVar8 + -1;
        if (iVar8 == 0) {
          iVar5 = 0;
        }
        if (iVar5 <= (int)uVar9) goto code_r0x000141956548;
      }
      for (FVar7.Data = local_38.Data.AllocatorInstance.Data;
          FVar7.Data != local_38.Data.AllocatorInstance.Data + (longlong)local_38.Data.ArrayNum * 2;
          FVar7.Data = FVar7.Data + 2) {
        if (*(short *)FVar7.Data == *(short *)((param_1->Data).AllocatorInstance.Data + uVar13 * 2))
        {
          if ((int)((longlong)FVar7.Data - (longlong)local_38.Data.AllocatorInstance.Data >> 1) !=
              -1) {
            uVar6 = 0;
            if ((int)uVar9 < (int)local_40) {
              uVar6 = ~uVar9 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              pFVar4 = (FString *)(*pcVar2)();
              return pFVar4;
            }
            *(wchar_t *)(local_48.Data + uVar13 * 2) = param_2;
            goto LAB_141956643;
          }
          break;
        }
      }
      if ((int)uVar9 < 0) {
code_r0x0001419565ca:
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x113,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar4 = (FString *)(*pcVar2)();
          return pFVar4;
        }
      }
      else {
        iVar8 = (param_1->Data).ArrayNum;
        uVar6 = iVar8 - 1;
        if (iVar8 == 0) {
          uVar6 = 0;
        }
        if ((int)uVar6 <= (int)uVar9) goto code_r0x0001419565ca;
      }
      uVar1 = *(undefined2 *)((param_1->Data).AllocatorInstance.Data + uVar13 * 2);
      uVar6 = 0;
      if ((int)uVar9 < (int)local_40) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar2)();
        return pFVar4;
      }
      *(undefined2 *)(local_48.Data + uVar13 * 2) = uVar1;
LAB_141956643:
      uVar11 = (ulonglong)(uVar9 + 1);
      uVar13 = uVar13 + 1;
    } while ((longlong)uVar13 < lVar14);
  }
  uVar9 = 0;
  if ((int)uVar10 < (int)local_40) {
    uVar9 = ~uVar10 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar2)();
    return pFVar4;
  }
  uVar13 = 0;
  *(undefined2 *)(local_48.Data + (longlong)(int)uVar10 * 2) = 0;
  if ((param_2 == L'\0') && (0 < (int)uVar10)) {
    uVar12 = uVar13;
    uVar11 = uVar13;
    uVar15 = uVar13;
    iVar8 = (int)local_40;
    do {
      uVar9 = (uint)uVar12;
      uVar10 = 0;
      if ((int)uVar9 < iVar8) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar4 = (FString *)(*pcVar2)();
          return pFVar4;
        }
        iVar8 = (int)local_40;
      }
      if (*(short *)(local_48.Data + uVar15 * 2) == 0) {
        uVar10 = (uint)uVar13;
        if ((int)(uint)uVar13 < (int)uVar9) {
          uVar10 = uVar9;
          uVar11 = uVar15;
        }
        do {
          uVar11 = uVar11 + 1;
          uVar10 = uVar10 + 1;
          uVar13 = (ulonglong)uVar10;
          if (lVar14 <= (longlong)uVar11) goto LAB_14195692a;
          uVar6 = 0;
          if ((int)uVar10 < iVar8) {
            uVar6 = ~uVar10 >> 0x1f;
          }
          if (uVar6 == 0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              pFVar4 = (FString *)(*pcVar2)();
              return pFVar4;
            }
            iVar8 = (int)local_40;
          }
        } while (*(short *)(local_48.Data + uVar11 * 2) == 0);
        uVar6 = 0;
        if ((int)uVar10 < iVar8) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            pFVar4 = (FString *)(*pcVar2)();
            return pFVar4;
          }
          iVar8 = (int)local_40;
        }
        uVar1 = *(undefined2 *)(local_48.Data + uVar11 * 2);
        uVar6 = 0;
        if ((int)uVar9 < iVar8) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar4 = (FString *)(*pcVar2)();
          return pFVar4;
        }
        *(undefined2 *)(local_48.Data + uVar15 * 2) = uVar1;
        uVar6 = 0;
        if ((int)uVar10 < (int)local_40) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar4 = (FString *)(*pcVar2)();
          return pFVar4;
        }
        *(undefined2 *)(local_48.Data + uVar11 * 2) = 0;
        iVar8 = (int)local_40;
      }
LAB_14195692a:
      uVar12 = (ulonglong)(uVar9 + 1);
      uVar15 = uVar15 + 1;
    } while ((longlong)uVar15 < lVar14);
  }
  ::FString::FString(__return_storage_ptr__,(wchar_t *)local_48.Data);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// NormalizeDirectoryName @ 1419571d0

void __cdecl FPaths::NormalizeDirectoryName(FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  
  iVar1 = (param_1->Data).ArrayNum;
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  iVar9 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar9 = 0;
  }
  pFVar5 = pFVar2;
  while (pFVar5 < pFVar2 + (longlong)iVar9 * 2) {
    sVar7 = *(short *)pFVar5;
    if (sVar7 == 0x5c) {
      sVar7 = 0x2f;
    }
    *(short *)pFVar5 = sVar7;
    pFVar5 = pFVar5 + 2;
  }
  bVar6 = ::FString::EndsWith(param_1,L"/",1,CaseSensitive);
  if (((bVar6) && (bVar6 = ::FString::EndsWith(param_1,L"//",2,CaseSensitive), !bVar6)) &&
     (bVar6 = ::FString::EndsWith(param_1,L":/",2,CaseSensitive), !bVar6)) {
    iVar9 = (param_1->Data).ArrayNum;
    uVar4 = iVar9 - 2;
    if (iVar9 == 0) {
      uVar4 = 0xffffffff;
    }
    uVar8 = 0;
    if ((int)uVar4 < iVar9) {
      uVar8 = ~uVar4 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(undefined2 *)((param_1->Data).AllocatorInstance.Data + (longlong)(int)uVar4 * 2) = 0;
    ::FString::TrimToNullTerminator(param_1);
  }
  return;
}

// NormalizeFilename @ 141957380

void __cdecl FPaths::NormalizeFilename(FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  short sVar4;
  int iVar5;
  
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar5 = 0;
  }
  pFVar3 = pFVar2;
  while (pFVar3 < pFVar2 + (longlong)iVar5 * 2) {
    sVar4 = *(short *)pFVar3;
    if (sVar4 == 0x5c) {
      sVar4 = 0x2f;
    }
    *(short *)pFVar3 = sVar4;
    pFVar3 = pFVar3 + 2;
  }
  return;
}

// PlatformIndependentNormalizePath @ 14195abb0

void __cdecl
FPaths::PlatformIndependentNormalizePath(FString *param_1,bool param_2,int *param_3,int *param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  short sVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  
  pFVar3 = (param_1->Data).AllocatorInstance.Data;
  iVar2 = (param_1->Data).ArrayNum;
  *param_3 = -1;
  *param_4 = -1;
  iVar7 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar7 = 0;
  }
  pFVar1 = pFVar3 + (longlong)iVar7 * 2;
  if (pFVar3 < pFVar1) {
    lVar5 = 0;
    pFVar6 = pFVar3;
    pFVar8 = pFVar3;
    do {
      sVar4 = *(short *)pFVar6;
      pFVar6 = pFVar6 + 2;
      iVar7 = (int)(lVar5 >> 1);
      if (sVar4 == 0x5c) {
        sVar4 = 0x2f;
LAB_14195ac2a:
        if (*param_4 == -1) {
          *param_4 = iVar7;
        }
      }
      else {
        if (sVar4 == 0x2f) goto LAB_14195ac2a;
        if ((sVar4 == 0x3a) && (*param_3 == -1)) {
          *param_3 = iVar7;
        }
      }
      if ((((!param_2) || (sVar4 != 0x2f)) || (pFVar8 <= pFVar3)) ||
         (*(short *)(pFVar3 + lVar5 + -2) != 0x2f)) {
        *(short *)pFVar8 = sVar4;
        pFVar8 = pFVar8 + 2;
        lVar5 = lVar5 + 2;
      }
    } while (pFVar6 < pFVar1);
    if (pFVar8 < pFVar1) {
      *(short *)pFVar8 = 0;
      ::FString::TrimToNullTerminator(param_1);
    }
  }
  return;
}

// ProfilingDir @ 14195e580

FString * __cdecl FPaths::ProfilingDir(FString *__return_storage_ptr__)

{
  FString *pFVar1;
  
  pFVar1 = ProjectSavedDir();
  ::FString::ConcatFC(__return_storage_ptr__,pFVar1,L"Profiling/");
  return __return_storage_ptr__;
}

// ProjectConfigDir @ 14195e5b0

FString * __cdecl FPaths::ProjectConfigDir(FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  FString local_18;
  
  pwVar1 = FGenericPlatformMisc::ProjectDir();
  ::FString::FString(&local_18,pwVar1);
  ::FString::ConcatFC(__return_storage_ptr__,&local_18,L"Config/");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ProjectContentDir @ 14195e600

FString * __cdecl FPaths::ProjectContentDir(FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  FString local_18;
  
  pwVar1 = FGenericPlatformMisc::ProjectDir();
  ::FString::FString(&local_18,pwVar1);
  ::FString::ConcatFC(__return_storage_ptr__,&local_18,L"Content/");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ProjectDir @ 14195e650

FString * __cdecl FPaths::ProjectDir(FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  
  pwVar1 = FGenericPlatformMisc::ProjectDir();
  ::FString::FString(__return_storage_ptr__,pwVar1);
  return __return_storage_ptr__;
}

// ProjectIntermediateDir @ 14195e680

FString * __cdecl FPaths::ProjectIntermediateDir(FString *__return_storage_ptr__)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = ProjectUserDir(&local_18);
  ::FString::ConcatFC(__return_storage_ptr__,pFVar1,L"Intermediate/");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ProjectLogDir @ 14195e6d0

FString * __cdecl FPaths::ProjectLogDir(FString *__return_storage_ptr__)

{
  FString *pFVar1;
  
  pFVar1 = ProjectSavedDir();
  ::FString::ConcatFC(__return_storage_ptr__,pFVar1,L"Logs/");
  return __return_storage_ptr__;
}

// ProjectModsDir @ 14195e700

FString * __cdecl FPaths::ProjectModsDir(FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  FString local_18;
  
  pwVar1 = FGenericPlatformMisc::ProjectDir();
  ::FString::FString(&local_18,pwVar1);
  ::FString::ConcatFC(__return_storage_ptr__,&local_18,L"Mods/");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ProjectPersistentDownloadDir @ 14195e750

FString * __cdecl FPaths::ProjectPersistentDownloadDir(FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  
  pwVar1 = FGenericPlatformMisc::GamePersistentDownloadDir();
  ::FString::FString(__return_storage_ptr__,pwVar1);
  return __return_storage_ptr__;
}

// ProjectPlatformExtensionsDir @ 14195e780

FString * __cdecl FPaths::ProjectPlatformExtensionsDir(FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  FString local_18;
  
  pwVar1 = FGenericPlatformMisc::ProjectDir();
  ::FString::FString(&local_18,pwVar1);
  ::FString::ConcatFC(__return_storage_ptr__,&local_18,L"Platforms/");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ProjectPluginsDir @ 14195e7d0

FString * __cdecl FPaths::ProjectPluginsDir(FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  FString local_18;
  
  pwVar1 = FGenericPlatformMisc::ProjectDir();
  ::FString::FString(&local_18,pwVar1);
  ::FString::ConcatFC(__return_storage_ptr__,&local_18,L"Plugins/");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ProjectSavedDir @ 14195e820

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __cdecl FPaths::ProjectSavedDir(void)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FStaticData *pFVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar5 = TLazySingleton<FPaths::FStaticData>::Get();
  if (pFVar5->bGameSavedDirInitialized != false) {
    return &pFVar5->GameSavedDir;
  }
  pFVar6 = ProjectUserDir(&local_18);
  ::FString::ConcatFC(&local_48,pFVar6,L"Saved");
  uVar9 = 0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  pwVar7 = FCommandLine::Get();
  bVar3 = FParse::Value(pwVar7,L"-saveddirsuffix=",&local_38,true,(wchar_t **)0x0);
  uVar10 = uVar9;
  if (bVar3) {
    while( true ) {
      iVar8 = (int)uVar9;
      iVar4 = local_38.Data.ArrayNum + -1;
      if (local_38.Data.ArrayNum == 0) {
        iVar4 = 0;
      }
      if (iVar4 <= iVar8) break;
      if ((((iVar8 < 0) || (local_38.Data.ArrayNum == 0)) || (local_38.Data.ArrayNum + -1 <= iVar8))
         && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValidIndex(Index)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                ,0x107,
                                L"String index out of bounds: Index %i from a string with a length of %i"
                               ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar2)();
        return pFVar6;
      }
      pwVar7 = wcschr(L"_0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz",
                      *(wchar_t *)(local_38.Data.AllocatorInstance.Data + uVar10));
      if (pwVar7 == (wchar_t *)0x0) {
        ::FString::RemoveAt(&local_38,iVar8,No);
        iVar8 = iVar8 + -1;
        uVar10 = uVar10 - 2;
      }
      uVar9 = (ulonglong)(iVar8 + 1);
      uVar10 = uVar10 + 2;
    }
  }
  else {
  }
  if (1 < local_38.Data.ArrayNum) {
    ::FString::ConcatCF(&local_28,L"_",&local_38);
    iVar4 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars(&local_48,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar4);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  ::FString::AppendChars(&local_48,L"/",1);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pFVar6 = &pFVar5->GameSavedDir;
  if (pFVar6 != &local_48) {
    pFVar1 = (pFVar6->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar6->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    (pFVar5->GameSavedDir).Data.ArrayNum = local_48.Data.ArrayNum;
    (pFVar5->GameSavedDir).Data.ArrayMax = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar5->bGameSavedDirInitialized = true;
  return pFVar6;
}

// ProjectUserDir @ 14195ea50

FString * __cdecl FPaths::ProjectUserDir(FString *__return_storage_ptr__)

{
  bool bVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  size_t sVar4;
  int iVar5;
  FString local_18;
  
  pFVar2 = CustomUserDirArgument();
  if (1 < (pFVar2->Data).ArrayNum) {
    ::FString::FString(__return_storage_ptr__,pFVar2);
    return __return_storage_ptr__;
  }
  bVar1 = ShouldSaveToUserDir();
  if (bVar1) {
    pwVar3 = FWindowsPlatformProcess::UserSettingsDir();
    iVar5 = 0;
    if (pwVar3 != (wchar_t *)0x0) {
      sVar4 = wcslen(pwVar3);
      iVar5 = (int)sVar4;
    }
    sVar4 = wcslen(GInternalProjectName);
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    ::FString::Reserve(&local_18,(int)sVar4 + 2 + iVar5);
    ::FString::AppendChars(&local_18,pwVar3,iVar5);
    ::FString::PathAppend(&local_18,GInternalProjectName,(int)sVar4);
    ::FString::ConcatFC(__return_storage_ptr__,&local_18,L"/");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  else {
    pwVar3 = FGenericPlatformMisc::ProjectDir();
    ::FString::FString(__return_storage_ptr__,pwVar3);
  }
  return __return_storage_ptr__;
}

// RemoveDuplicateSlashes @ 141966030

FString * __cdecl FPaths::RemoveDuplicateSlashes(FString *__return_storage_ptr__,FString *param_1)

{
  ForAnyElementType FVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  longlong lVar6;
  FString local_18;
  
  local_18.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar6 = (longlong)local_18.Data.ArrayNum;
  pFVar4 = (param_1->Data).AllocatorInstance.Data;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.Data.ArrayNum == 0) {
    local_18.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)&local_18,local_18.Data.ArrayNum,
               &local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,pFVar4,lVar6 * 2);
  }
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  if ((local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) &&
     (pwVar2 = wcsstr((wchar_t *)local_18.Data.AllocatorInstance.Data,L"//"),
     pwVar2 != (wchar_t *)0x0)) {
    iVar5 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    pwVar3 = pwVar2 + 1;
    for (pFVar4 = (FScriptContainerElement *)(pwVar2 + 2); pFVar4 < FVar1.Data + (longlong)iVar5 * 2
        ; pFVar4 = pFVar4 + 2) {
      if ((pwVar3[-1] != L'/') || (*(wchar_t *)pFVar4 != L'/')) {
        *pwVar3 = *(wchar_t *)pFVar4;
        pwVar3 = pwVar3 + 1;
      }
    }
    *pwVar3 = L'\0';
    ::FString::TrimToNullTerminator(&local_18);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayNum = local_18.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = local_18.Data.ArrayMax;
  return __return_storage_ptr__;
}

// RemoveDuplicateSlashes @ 141966150

void __cdecl FPaths::RemoveDuplicateSlashes(FString *param_1)

{
  int iVar1;
  FScriptContainerElement *_Str;
  wchar_t *pwVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  wchar_t *pwVar5;
  
  _Str = (param_1->Data).AllocatorInstance.Data;
  if ((_Str != (FScriptContainerElement *)0x0) &&
     (pwVar2 = wcsstr((wchar_t *)_Str,L"//"), pwVar2 != (wchar_t *)0x0)) {
    iVar1 = (param_1->Data).ArrayNum;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    pwVar5 = pwVar2 + 1;
    for (pFVar3 = (FScriptContainerElement *)(pwVar2 + 2); pFVar3 < _Str + (longlong)iVar4 * 2;
        pFVar3 = pFVar3 + 2) {
      if ((pwVar5[-1] != L'/') || (*(wchar_t *)pFVar3 != L'/')) {
        *pwVar5 = *(wchar_t *)pFVar3;
        pwVar5 = pwVar5 + 1;
      }
    }
    *pwVar5 = L'\0';
    ::FString::TrimToNullTerminator(param_1);
  }
  return;
}

// RootDir @ 141967d40

FString * __cdecl FPaths::RootDir(FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  
  pwVar1 = FGenericPlatformMisc::RootDir();
  ::FString::FString(__return_storage_ptr__,pwVar1);
  return __return_storage_ptr__;
}

// SandboxesDir @ 141968e10

FString * __cdecl FPaths::SandboxesDir(FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  FString local_18;
  
  pwVar1 = FGenericPlatformMisc::ProjectDir();
  ::FString::FString(&local_18,pwVar1);
  ::FString::ConcatFC(__return_storage_ptr__,&local_18,L"Saved/Sandboxes");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ScreenShotDir @ 141969110

FString * __cdecl FPaths::ScreenShotDir(FString *__return_storage_ptr__)

{
  FString *pFVar1;
  FString local_38;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_18,"Windows");
  pFVar1 = ProjectSavedDir();
  ::FString::ConcatFC(&local_28,pFVar1,L"Screenshots/");
  ::FString::ConcatFF(&local_38,&local_28,&local_18);
  ::FString::ConcatFC(__return_storage_ptr__,&local_38,L"/");
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// SetExtension @ 14196a910

FString * __cdecl
FPaths::SetExtension(FString *__return_storage_ptr__,FString *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  wchar_t *pwVar11;
  FString local_48;
  FString local_38;
  
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  iVar6 = (param_1->Data).ArrayNum;
  pFVar7 = pFVar2 + (longlong)iVar6 * 2;
  iVar10 = 0;
  do {
    if (pFVar7 == pFVar2) goto LAB_14196a961;
    pFVar7 = pFVar7 + -2;
  } while (*(short *)pFVar7 != 0x2e);
  pwVar11 = L"";
  iVar8 = (int)((longlong)pFVar7 - (longlong)pFVar2 >> 1);
  if (iVar8 == -1) {
LAB_14196aa15:
    iVar6 = (param_1->Data).ArrayNum;
    if (iVar8 != -1) {
LAB_14196aa21:
      iVar9 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar9 = iVar10;
      }
      if (iVar8 < iVar9) {
        iVar9 = iVar8;
      }
      iVar8 = iVar10;
      if (0 < iVar9) {
        iVar8 = iVar9;
      }
      if (iVar6 != 0) {
        pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      ::FString::ConstructFromPtrSize(&local_38,pwVar11,iVar8);
      ::FString::FString(__return_storage_ptr__,&local_38);
      goto LAB_14196aaaf;
    }
  }
  else {
    iVar9 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar9 = 0;
    }
    if (((iVar9 < 0) || (iVar6 < iVar9)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Count >= 0 && Count <= this->Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x55b,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar3)();
      return pFVar5;
    }
    pFVar2 = (param_1->Data).AllocatorInstance.Data;
    pFVar7 = pFVar2 + (longlong)iVar9 * 2;
    do {
      if (pFVar7 == pFVar2) {
        iVar6 = (param_1->Data).ArrayNum;
        goto LAB_14196aa21;
      }
      pFVar1 = pFVar7 + -2;
      pFVar7 = pFVar7 + -2;
    } while ((*(short *)pFVar1 != 0x2f) && (*(short *)pFVar1 != 0x5c));
    iVar6 = (int)((longlong)pFVar7 - (longlong)pFVar2 >> 1);
    if ((iVar6 == -1) || (iVar6 <= iVar8)) goto LAB_14196aa15;
    iVar6 = (param_1->Data).ArrayNum;
  }
LAB_14196a961:
  pFVar7 = (param_1->Data).AllocatorInstance.Data;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = iVar6;
  if (iVar6 == 0) {
    local_48.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar6,0,(ForAnyElementType *)&local_48,iVar6,&local_48.Data.ArrayMax);
    memcpy(local_48.Data.AllocatorInstance.Data,pFVar7,(longlong)iVar6 * 2);
  }
  ::FString::FString(__return_storage_ptr__,&local_48);
  local_38.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
LAB_14196aaaf:
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  iVar6 = (param_2->Data).ArrayNum;
  iVar8 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar8 = iVar10;
  }
  if (iVar8 != 0) {
    if ((iVar8 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x113,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar3)();
      return pFVar5;
    }
    if (*(short *)(param_2->Data).AllocatorInstance.Data != 0x2e) {
      ::FString::AppendChar(__return_storage_ptr__,L'.');
    }
  }
  iVar6 = (param_2->Data).ArrayNum;
  iVar8 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar8 = iVar10;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar8);
  return __return_storage_ptr__;
}

// SetProjectFilePath @ 14196ce10

void __cdecl FPaths::SetProjectFilePath(FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FStaticData *lpCriticalSection;
  short sVar4;
  int iVar5;
  
  lpCriticalSection = TLazySingleton<FPaths::FStaticData>::Get();
  if (lpCriticalSection != (FStaticData *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    ::FString::operator=(&lpCriticalSection->GameProjectFilePath,param_1);
    iVar1 = (lpCriticalSection->GameProjectFilePath).Data.ArrayNum;
    pFVar2 = (lpCriticalSection->GameProjectFilePath).Data.AllocatorInstance.Data;
    iVar5 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar5 = 0;
    }
    pFVar3 = pFVar2;
    while (pFVar3 < pFVar2 + (longlong)iVar5 * 2) {
      sVar4 = *(short *)pFVar3;
      if (sVar4 == 0x5c) {
        sVar4 = 0x2f;
      }
      *(short *)pFVar3 = sVar4;
      pFVar3 = pFVar3 + 2;
    }
                    /* WARNING: Could not recover jumptable at 0x00014196ce9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ShaderWorkingDir @ 14196d720

FString * __cdecl FPaths::ShaderWorkingDir(FString *__return_storage_ptr__)

{
  FString *pFVar1;
  
  pFVar1 = CustomShaderDirArgument();
  if (1 < (pFVar1->Data).ArrayNum) {
    ::FString::FString(__return_storage_ptr__,pFVar1);
    return __return_storage_ptr__;
  }
  FWindowsPlatformProcess::ShaderWorkingDir(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ShouldSaveToUserDir @ 14196d880

bool __cdecl FPaths::ShouldSaveToUserDir(void)

{
  bool bVar1;
  wchar_t *pwVar2;
  FString *pFVar3;
  
  if (::_TSS0 <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c)) {
    return bShouldSaveToUserDir;
  }
  _Init_thread_header(&::_TSS0);
  if (::_TSS0 != -1) {
    return bShouldSaveToUserDir;
  }
  bVar1 = FApp::IsInstalled();
  if (!bVar1) {
    pwVar2 = FCommandLine::Get();
    bVar1 = FParse::Param(pwVar2,L"SaveToUserDir");
    if (((!bVar1) && (bVar1 = FGenericPlatformProcess::ShouldSaveToUserDir(), !bVar1)) &&
       (pFVar3 = CustomUserDirArgument(), (pFVar3->Data).ArrayNum < 2)) {
      bShouldSaveToUserDir = false;
      goto LAB_14196d903;
    }
  }
  bShouldSaveToUserDir = true;
LAB_14196d903:
  _Init_thread_footer(&::_TSS0);
  return bShouldSaveToUserDir;
}

// SourceConfigDir @ 14196dce0

FString * __cdecl FPaths::SourceConfigDir(FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  FString local_18;
  
  pwVar1 = FGenericPlatformMisc::ProjectDir();
  ::FString::FString(&local_18,pwVar1);
  ::FString::ConcatFC(__return_storage_ptr__,&local_18,L"Config/");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Split @ 14196dfc0

void __cdecl FPaths::Split(FString *param_1,FString *param_2,FString *param_3,FString *param_4)

{
  int iVar1;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  local_48.DataPtr = (wchar_t *)0x0;
  local_38.DataPtr = (wchar_t *)0x0;
  local_28.DataPtr = (wchar_t *)0x0;
  local_48.Size = 0;
  local_18.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_18.Size = 0;
  }
  local_38.Size = 0;
  local_28.Size = 0;
  FPathViews::Split(&local_18,&local_48,&local_38,&local_28);
  ::FString::AssignRange(param_2,local_48.DataPtr,local_48.Size);
  ::FString::AssignRange(param_3,local_38.DataPtr,local_38.Size);
  ::FString::AssignRange(param_4,local_28.DataPtr,local_28.Size);
  return;
}

// TearDown @ 14196f530

void __cdecl FPaths::TearDown(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_TLazySingleton<struct_FPaths::FStaticData>&___ptr64___cdecl_TLazySingleton<FPaths::FStaticData>::GetLazy(void_(__cdecl*)(void*___ptr64))'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TLazySingleton<struct_FPaths::FStaticData>&___ptr64___cdecl_TLazySingleton<FPaths::FStaticData>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_TLazySingleton<struct_FPaths::FStaticData>&___ptr64___cdecl_TLazySingleton<FPaths::FStaticData>::GetLazy(void_(__cdecl*)(void*___ptr64))'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      DAT_154f0c830 = (FStaticData *)0x0;
      atexit(`TLazySingleton<FPaths::FStaticData>::GetLazy'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&`private:_static_class_TLazySingleton<struct_FPaths::FStaticData>&___ptr64___cdecl_TLazySingleton<FPaths::FStaticData>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (DAT_154f0c830 != (FStaticData *)0x0) {
    FStaticData::~FStaticData(DAT_154f0c830);
    DAT_154f0c830 = (FStaticData *)0x0;
  }
  return;
}

// ValidatePath @ 14197c460

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl FPaths::ValidatePath(FString *param_1,FText *param_2)

{
  ForAnyElementType FVar1;
  undefined1 uVar2;
  bool bVar3;
  wchar_t wVar4;
  int iVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  undefined1 local_res8 [8];
  FText *local_res10;
  undefined1 local_res18 [8];
  bool local_res20 [8];
  FString local_a8;
  TArrayView<wchar_t_const_,int> local_98;
  TStringView<wchar_t> local_88;
  code *local_78;
  undefined1 **local_70;
  FString local_68;
  undefined1 *local_58;
  FString *local_50;
  FString *local_48;
  undefined1 *local_40;
  FText **local_38;
  
  local_res10 = param_2;
  ::FString::FString(&local_68,RestrictedChars);
  local_a8.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar9 = (longlong)local_a8.Data.ArrayNum;
  pFVar8 = (param_1->Data).AllocatorInstance.Data;
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_a8.Data.ArrayNum == 0) {
    local_a8.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_a8.Data.ArrayNum,0,(ForAnyElementType *)&local_a8,local_a8.Data.ArrayNum,
               &local_a8.Data.ArrayMax);
    memcpy(local_a8.Data.AllocatorInstance.Data,pFVar8,lVar9 * 2);
  }
  iVar5 = local_a8.Data.ArrayNum + -1;
  if (local_a8.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  FVar1.Data = local_a8.Data.AllocatorInstance.Data;
  while (FVar1.Data < local_a8.Data.AllocatorInstance.Data + (longlong)iVar5 * 2) {
    wVar4 = *(wchar_t *)FVar1.Data;
    if (wVar4 == L'\\') {
      wVar4 = L'/';
    }
    *(wchar_t *)FVar1.Data = wVar4;
    FVar1.Data = FVar1.Data + 2;
  }
  UE4PathViews_Private::CollapseRelativeDirectoriesImplTemplate<FString>
            (&local_a8,false,local_res20);
  ::FString::TrimToNullTerminator(&local_a8);
  bVar3 = ::FString::StartsWith(&local_a8,L"//",2,IgnoreCase);
  FVar1.Data = local_a8.Data.AllocatorInstance.Data;
  if (bVar3) {
    ::FString::RemoveAt(&local_a8,0,1,No);
    FVar1.Data = local_a8.Data.AllocatorInstance.Data;
    if ((local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) &&
       (pwVar6 = wcsstr((wchar_t *)local_a8.Data.AllocatorInstance.Data,L"//"),
       pwVar6 != (wchar_t *)0x0)) {
      iVar5 = local_a8.Data.ArrayNum + -1;
      if (local_a8.Data.ArrayNum == 0) {
        iVar5 = 0;
      }
      pwVar7 = pwVar6 + 1;
      for (pFVar8 = (FScriptContainerElement *)(pwVar6 + 2);
          pFVar8 < FVar1.Data + (longlong)iVar5 * 2; pFVar8 = pFVar8 + 2) {
        if ((pwVar7[-1] != L'/') || (*(wchar_t *)pFVar8 != L'/')) {
          *pwVar7 = *(wchar_t *)pFVar8;
          pwVar7 = pwVar7 + 1;
        }
      }
      *pwVar7 = L'\0';
      ::FString::TrimToNullTerminator(&local_a8);
    }
    ::FString::ConcatCF((FString *)&local_98,L"/",&local_a8);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_98.DataPtr;
    local_a8.Data.ArrayNum = local_98.ArrayNum;
    local_a8.Data.ArrayMax = local_98._12_4_;
  }
  else if ((local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) &&
          (pwVar6 = wcsstr((wchar_t *)local_a8.Data.AllocatorInstance.Data,L"//"),
          pwVar6 != (wchar_t *)0x0)) {
    iVar5 = local_a8.Data.ArrayNum + -1;
    if (local_a8.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    pwVar7 = pwVar6 + 1;
    for (pFVar8 = (FScriptContainerElement *)(pwVar6 + 2); pFVar8 < FVar1.Data + (longlong)iVar5 * 2
        ; pFVar8 = pFVar8 + 2) {
      if ((pwVar7[-1] != L'/') || (*(wchar_t *)pFVar8 != L'/')) {
        *pwVar7 = *(wchar_t *)pFVar8;
        pwVar7 = pwVar7 + 1;
      }
    }
    *pwVar7 = L'\0';
    ::FString::TrimToNullTerminator(&local_a8);
  }
  local_58 = local_res18;
  local_98.ArrayNum = 2;
  local_50 = &local_a8;
  local_res8[0] = 1;
  local_48 = &local_68;
  local_res18[0] = 1;
  local_40 = local_res8;
  local_38 = &local_res10;
  local_res20[0] = true;
  local_res20[1] = false;
  local_res20[2] = true;
  local_res20[3] = false;
  local_88.Size = local_a8.Data.ArrayNum + -1;
  if (local_a8.Data.ArrayNum == 0) {
    local_88.Size = 0;
  }
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`FPaths::ValidatePath'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
             ::Call;
  local_70 = &local_58;
  local_98.DataPtr = (wchar_t *)local_res20;
  local_88.DataPtr = (wchar_t *)local_a8.Data.AllocatorInstance.Data;
  UE::String::ParseTokensMultiple
            (&local_88,&local_98,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)&local_78,None)
  ;
  uVar2 = local_res8[0];
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return (bool)uVar2;
}

// VideoCaptureDir @ 14197c800

FString * __cdecl FPaths::VideoCaptureDir(FString *__return_storage_ptr__)

{
  FString *pFVar1;
  
  pFVar1 = ProjectSavedDir();
  ::FString::ConcatFC(__return_storage_ptr__,pFVar1,L"VideoCaptures/");
  return __return_storage_ptr__;
}

