// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ProcessRule @ 147b001e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __thiscall
FRuleMatchRunner::ProcessRule
          (FRuleMatchRunner *this,IDeviceProfileSelectorModule *param_1,
          FDeviceProfileMatchCriterion *param_2,FString *param_3)

{
  ushort uVar1;
  FOutputDevice *this_00;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FString *pFVar7;
  FString *pFVar8;
  size_t sVar9;
  FScriptContainerElement *pFVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  wchar_t *pwVar16;
  bool bVar17;
  longlong lVar18;
  ForAnyElementType FVar19;
  uint uVar20;
  bool bVar21;
  bool bVar22;
  double dVar23;
  double dVar24;
  undefined1 auStack_2b8 [32];
  FName local_298;
  FString local_290;
  FString local_280;
  FString local_270;
  FString local_260;
  FRegexPattern local_250;
  FString local_240;
  FRegexMatcher local_230;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  uchar local_110 [24];
  FScriptContainerElement local_f8 [128];
  ForAnyElementType local_78;
  FScriptContainerElement *local_70;
  int local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  local_298 = param_2->Operator;
  bVar22 = true;
  bVar17 = true;
  bVar4 = ::FString::IsNumeric(&param_2->Arg1);
  bVar21 = true;
  if ((!bVar4) || (bVar4 = ::FString::IsNumeric(&param_2->Arg2), !bVar4)) {
    bVar21 = false;
  }
  if (local_298 == CMP_Equal) {
    iVar6 = (param_2->Arg1).Data.ArrayNum;
    iVar14 = (param_2->Arg2).Data.ArrayNum;
    if (iVar6 != iVar14) {
      return iVar6 + iVar14 == 1;
    }
    if (1 < iVar6) {
      iVar6 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_2->Arg1).Data.AllocatorInstance.Data,
                         (wchar_t *)(param_2->Arg2).Data.AllocatorInstance.Data);
      return iVar6 == 0;
    }
    return true;
  }
  if (local_298 == CMP_Less) {
    pwVar16 = L"";
    if (bVar21) {
      if ((param_2->Arg1).Data.ArrayNum == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = (wchar_t *)(param_2->Arg1).Data.AllocatorInstance.Data;
      }
      dVar23 = _wtof(pwVar11);
      if ((param_2->Arg2).Data.ArrayNum != 0) {
        pwVar16 = (wchar_t *)(param_2->Arg2).Data.AllocatorInstance.Data;
      }
      dVar24 = _wtof(pwVar16);
      if ((float)dVar24 <= (float)dVar23) {
        return false;
      }
      return true;
    }
    if ((param_2->Arg2).Data.ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(param_2->Arg2).Data.AllocatorInstance.Data;
    }
    if ((param_2->Arg1).Data.ArrayNum != 0) {
      pwVar16 = (wchar_t *)(param_2->Arg1).Data.AllocatorInstance.Data;
    }
LAB_147b00302:
    iVar6 = FGenericPlatformStricmp::Stricmp(pwVar16,pwVar11);
    if (iVar6 < 0) {
      return true;
    }
  }
  else {
    if (local_298 == CMP_LessEqual) {
      iVar6 = (param_2->Arg1).Data.ArrayNum;
      pwVar16 = L"";
      if (bVar21) {
        if (iVar6 == 0) {
          pwVar11 = L"";
        }
        else {
          pwVar11 = (wchar_t *)(param_2->Arg1).Data.AllocatorInstance.Data;
        }
        dVar23 = _wtof(pwVar11);
        if ((param_2->Arg2).Data.ArrayNum != 0) {
          pwVar16 = (wchar_t *)(param_2->Arg2).Data.AllocatorInstance.Data;
        }
        dVar24 = _wtof(pwVar16);
        if ((float)dVar24 < (float)dVar23) {
          return false;
        }
        return true;
      }
      if (iVar6 == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = (wchar_t *)(param_2->Arg1).Data.AllocatorInstance.Data;
      }
      if ((param_2->Arg2).Data.ArrayNum != 0) {
        pwVar16 = (wchar_t *)(param_2->Arg2).Data.AllocatorInstance.Data;
      }
LAB_147b00385:
      iVar6 = FGenericPlatformStricmp::Stricmp(pwVar16,pwVar11);
      cVar3 = (char)((uint)iVar6 >> 0x18);
    }
    else {
      if (local_298 == CMP_Greater) {
        iVar6 = (param_2->Arg1).Data.ArrayNum;
        pwVar16 = L"";
        if (bVar21) {
          if (iVar6 == 0) {
            pwVar11 = L"";
          }
          else {
            pwVar11 = (wchar_t *)(param_2->Arg1).Data.AllocatorInstance.Data;
          }
          dVar23 = _wtof(pwVar11);
          if ((param_2->Arg2).Data.ArrayNum != 0) {
            pwVar16 = (wchar_t *)(param_2->Arg2).Data.AllocatorInstance.Data;
          }
          dVar24 = _wtof(pwVar16);
          if ((float)dVar23 <= (float)dVar24) {
            return false;
          }
          return true;
        }
        if (iVar6 == 0) {
          pwVar11 = L"";
        }
        else {
          pwVar11 = (wchar_t *)(param_2->Arg1).Data.AllocatorInstance.Data;
        }
        if ((param_2->Arg2).Data.ArrayNum != 0) {
          pwVar16 = (wchar_t *)(param_2->Arg2).Data.AllocatorInstance.Data;
        }
        goto LAB_147b00302;
      }
      if (local_298 == CMP_GreaterEqual) {
        pwVar16 = L"";
        if (bVar21) {
          if ((param_2->Arg1).Data.ArrayNum == 0) {
            pwVar11 = L"";
          }
          else {
            pwVar11 = (wchar_t *)(param_2->Arg1).Data.AllocatorInstance.Data;
          }
          dVar23 = _wtof(pwVar11);
          if ((param_2->Arg2).Data.ArrayNum != 0) {
            pwVar16 = (wchar_t *)(param_2->Arg2).Data.AllocatorInstance.Data;
          }
          dVar24 = _wtof(pwVar16);
          if ((float)dVar23 < (float)dVar24) {
            return false;
          }
          return true;
        }
        if ((param_2->Arg2).Data.ArrayNum == 0) {
          pwVar11 = L"";
        }
        else {
          pwVar11 = (wchar_t *)(param_2->Arg2).Data.AllocatorInstance.Data;
        }
        if ((param_2->Arg1).Data.ArrayNum != 0) {
          pwVar16 = (wchar_t *)(param_2->Arg1).Data.AllocatorInstance.Data;
        }
        goto LAB_147b00385;
      }
      if (local_298 == CMP_NotEqual) {
        pwVar16 = L"";
        if ((param_2->Arg1).Data.ArrayNum == 0) {
          pwVar11 = L"";
        }
        else {
          pwVar11 = (wchar_t *)(param_2->Arg1).Data.AllocatorInstance.Data;
        }
        if ((param_2->Arg2).Data.ArrayNum != 0) {
          pwVar16 = (wchar_t *)(param_2->Arg2).Data.AllocatorInstance.Data;
        }
        iVar6 = FGenericPlatformStricmp::Stricmp(pwVar16,pwVar11);
        return iVar6 != 0;
      }
      if ((local_298 == CMP_Or) || (local_298 == CMP_And)) {
        if (bVar21) {
          pwVar16 = L"";
          if ((param_2->Arg1).Data.ArrayNum == 0) {
            pwVar11 = L"";
          }
          else {
            pwVar11 = (wchar_t *)(param_2->Arg1).Data.AllocatorInstance.Data;
          }
          iVar6 = _wtoi(pwVar11);
          bVar22 = iVar6 != 0;
          if ((param_2->Arg2).Data.ArrayNum != 0) {
            pwVar16 = (wchar_t *)(param_2->Arg2).Data.AllocatorInstance.Data;
          }
          iVar6 = _wtoi(pwVar16);
          bVar21 = iVar6 != 0;
        }
        else {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < `public:_bool___cdecl_FRuleMatchRunner::ProcessRule(IDeviceProfileSelectorModule*___ptr64,FRuleMatchRunner::FDeviceProfileMatchCriterion_const&___ptr64,FString_const&___ptr64)___ptr64'
                 ::__l52::_thread_safe_static_guard_0__) &&
             (_Init_thread_header(&`public:_bool___cdecl_FRuleMatchRunner::ProcessRule(IDeviceProfileSelectorModule*___ptr64,FRuleMatchRunner::FDeviceProfileMatchCriterion_const&___ptr64,FString_const&___ptr64)___ptr64'
                                   ::__l52::_thread_safe_static_guard_0__),
             `public:_bool___cdecl_FRuleMatchRunner::ProcessRule(IDeviceProfileSelectorModule*___ptr64,FRuleMatchRunner::FDeviceProfileMatchCriterion_const&___ptr64,FString_const&___ptr64)___ptr64'
             ::__l52::_thread_safe_static_guard_0__ == -1)) {
            ::FString::FString(&`public:_bool___cdecl_FRuleMatchRunner::ProcessRule(IDeviceProfileSelectorModule*___ptr64,FRuleMatchRunner::FDeviceProfileMatchCriterion_const&___ptr64,FString_const&___ptr64)___ptr64'
                                ::__l52::TrueString,"true");
            atexit(`FRuleMatchRunner::ProcessRule'::__l52::
                   _dynamic_atexit_destructor_for__TrueString__);
            _Init_thread_footer(&`public:_bool___cdecl_FRuleMatchRunner::ProcessRule(IDeviceProfileSelectorModule*___ptr64,FRuleMatchRunner::FDeviceProfileMatchCriterion_const&___ptr64,FString_const&___ptr64)___ptr64'
                                 ::__l52::_thread_safe_static_guard_0__);
          }
          iVar6 = (param_2->Arg1).Data.ArrayNum;
          iVar14 = `public:_bool___cdecl_FRuleMatchRunner::ProcessRule(IDeviceProfileSelectorModule*___ptr64,FRuleMatchRunner::FDeviceProfileMatchCriterion_const&___ptr64,FString_const&___ptr64)___ptr64'
                   ::__l52::TrueString.Data.ArrayNum;
          if (iVar6 == iVar14) {
            if (1 < iVar6) {
              iVar6 = FGenericPlatformStricmp::Stricmp
                                ((wchar_t *)(param_2->Arg1).Data.AllocatorInstance.Data,
                                 (wchar_t *)
                                 `public:_bool___cdecl_FRuleMatchRunner::ProcessRule(IDeviceProfileSelectorModule*___ptr64,FRuleMatchRunner::FDeviceProfileMatchCriterion_const&___ptr64,FString_const&___ptr64)___ptr64'
                                 ::__l52::TrueString.Data.AllocatorInstance.Data);
              iVar14 = `public:_bool___cdecl_FRuleMatchRunner::ProcessRule(IDeviceProfileSelectorModule*___ptr64,FRuleMatchRunner::FDeviceProfileMatchCriterion_const&___ptr64,FString_const&___ptr64)___ptr64'
                       ::__l52::TrueString.Data.ArrayNum;
              bVar22 = iVar6 == 0;
            }
          }
          else {
            bVar22 = iVar6 + iVar14 == 1;
          }
          iVar6 = (param_2->Arg2).Data.ArrayNum;
          if (iVar6 == iVar14) {
            if (iVar6 < 2) {
              bVar21 = true;
            }
            else {
              iVar6 = FGenericPlatformStricmp::Stricmp
                                ((wchar_t *)(param_2->Arg2).Data.AllocatorInstance.Data,
                                 (wchar_t *)
                                 `public:_bool___cdecl_FRuleMatchRunner::ProcessRule(IDeviceProfileSelectorModule*___ptr64,FRuleMatchRunner::FDeviceProfileMatchCriterion_const&___ptr64,FString_const&___ptr64)___ptr64'
                                 ::__l52::TrueString.Data.AllocatorInstance.Data);
              bVar21 = iVar6 == 0;
            }
          }
          else {
            bVar21 = iVar6 + iVar14 == 1;
          }
        }
        if (local_298 == CMP_Or) {
          if ((!bVar22) && (!bVar21)) {
            return false;
          }
          return true;
        }
        if (!bVar22) {
          return false;
        }
        if (!bVar21) {
          return false;
        }
        return true;
      }
      if (local_298 == CMP_EqualIgnore) {
        pFVar7 = ::FString::ToLower(&param_2->Arg2,&local_200);
        pFVar8 = ::FString::ToLower(&param_2->Arg1,&local_210);
        iVar6 = (pFVar7->Data).ArrayNum;
        iVar14 = (pFVar8->Data).ArrayNum;
        if (iVar14 == iVar6) {
          if (iVar14 < 2) {
            bVar21 = true;
          }
          else {
            iVar6 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)(pFVar8->Data).AllocatorInstance.Data,
                               (wchar_t *)(pFVar7->Data).AllocatorInstance.Data);
            bVar21 = iVar6 == 0;
          }
        }
        else {
          bVar21 = iVar6 + iVar14 == 1;
        }
        if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_210.Data.AllocatorInstance.Data);
        }
        if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_200.Data.AllocatorInstance.Data);
          return bVar21;
        }
        return bVar21;
      }
      if (local_298 == CMP_LessIgnore) {
        pFVar7 = ::FString::ToLower(&param_2->Arg2,&local_1e0);
        pFVar8 = ::FString::ToLower(&param_2->Arg1,&local_1f0);
        pwVar16 = L"";
        if ((pFVar7->Data).ArrayNum == 0) {
          pwVar11 = L"";
        }
        else {
          pwVar11 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
        }
        if ((pFVar8->Data).ArrayNum != 0) {
          pwVar16 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
        }
        iVar6 = FGenericPlatformStricmp::Stricmp(pwVar16,pwVar11);
        bVar21 = SUB41((uint)iVar6 >> 0x1f,0);
        if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
        }
        if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
          return bVar21;
        }
        return bVar21;
      }
      if (local_298 == CMP_LessEqualIgnore) {
        pFVar7 = ::FString::ToLower(&param_2->Arg2,&local_1c0);
        pFVar8 = ::FString::ToLower(&param_2->Arg1,&local_1d0);
        pwVar16 = L"";
        if ((pFVar8->Data).ArrayNum == 0) {
          pwVar11 = L"";
        }
        else {
          pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
        }
        if ((pFVar7->Data).ArrayNum != 0) {
          pwVar16 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
        }
        iVar6 = FGenericPlatformStricmp::Stricmp(pwVar16,pwVar11);
        if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
        }
        if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
        }
        return (bool)((byte)((uint)iVar6 >> 0x1f) ^ 1);
      }
      if (local_298 != CMP_GreaterIgnore) {
        if (local_298 == CMP_NotEqualIgnore) {
          pFVar7 = ::FString::ToLower(&param_2->Arg2,&local_160);
          pFVar8 = ::FString::ToLower(&param_2->Arg1,&local_170);
          iVar6 = (pFVar7->Data).ArrayNum;
          iVar14 = (pFVar8->Data).ArrayNum;
          if (iVar14 == iVar6) {
            if (iVar14 < 2) {
              bVar21 = false;
            }
            else {
              iVar6 = FGenericPlatformStricmp::Stricmp
                                ((wchar_t *)(pFVar8->Data).AllocatorInstance.Data,
                                 (wchar_t *)(pFVar7->Data).AllocatorInstance.Data);
              bVar21 = iVar6 != 0;
            }
          }
          else {
            bVar21 = iVar6 + iVar14 != 1;
          }
          if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_170.Data.AllocatorInstance.Data);
          }
          if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_160.Data.AllocatorInstance.Data);
            return bVar21;
          }
          return bVar21;
        }
        if (local_298 == CMP_Regex) {
          FRegexPattern::FRegexPattern(&local_250,&param_2->Arg2,None);
          FRegexMatcher::FRegexMatcher(&local_230,&local_250,&param_2->Arg1);
          bVar21 = FRegexMatcher::FindNext(&local_230);
          if (bVar21) {
            pFVar7 = FRegexMatcher::GetCaptureGroup(&local_230,&local_150,1);
            ::FString::operator=(this->RuleProperties->PreviousRegexMatches,pFVar7);
            if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_150.Data.AllocatorInstance.Data);
            }
            pFVar7 = FRegexMatcher::GetCaptureGroup(&local_230,&local_140,2);
            ::FString::operator=(this->RuleProperties->PreviousRegexMatches + 1,pFVar7);
            if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_140.Data.AllocatorInstance.Data);
            }
          }
          else {
            ::FString::Empty(this->RuleProperties->PreviousRegexMatches);
            ::FString::Empty(this->RuleProperties->PreviousRegexMatches + 1);
            bVar17 = false;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_230.Implementation.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_230.Pattern.Implementation.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_250.Implementation.SharedReferenceCount.ReferenceController);
          return bVar17;
        }
        if (local_298 != CMP_Hash) {
          this_00 = this->ErrorDevice;
          ::FName::ToString(&local_298,&local_120);
          FOutputDevice::LogfImpl(this_00,L"rule %s unknown operator type, %s");
          if (local_120.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return false;
          }
          FMemory::Free(local_120.Data.AllocatorInstance.Data);
          return false;
        }
        pFVar10 = (FScriptContainerElement *)0x0;
        local_280.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_280.Data.ArrayNum = 0;
        local_280.Data.ArrayMax = 0;
        local_270.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_270.Data.ArrayNum = 0;
        local_270.Data.ArrayMax = 0;
        ::FString::FString(&local_240,L"|");
        bVar21 = ::FString::Split(&param_2->Arg2,&local_240,&local_270,&local_280);
        if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_240.Data.AllocatorInstance.Data);
        }
        if (!bVar21) {
          ::FString::operator=(&local_280,&param_2->Arg2);
        }
        ::FString::ConcatFF(&local_260,&param_2->Arg1,&local_270);
        local_78.Data = (FScriptContainerElement *)0x0;
        local_110[0x10] = '\0';
        local_110[0x11] = '\0';
        local_110[0x12] = '\0';
        local_110[0x13] = '\0';
        iVar6 = local_260.Data.ArrayNum + -1;
        if (local_260.Data.ArrayNum == 0) {
          iVar6 = 0;
        }
        local_110[0] = '\0';
        local_110[1] = '\0';
        local_110[2] = '\0';
        local_110[3] = '\0';
        local_110[4] = '\0';
        local_110[5] = '\0';
        local_110[6] = '\0';
        local_110[7] = '\0';
        local_110[8] = '\0';
        local_110[9] = '\0';
        local_110[10] = '\0';
        local_110[0xb] = '\0';
        local_110[0xc] = '\0';
        local_110[0xd] = '\0';
        local_110[0xe] = '\0';
        local_110[0xf] = '\0';
        if (local_260.Data.ArrayNum == 0) {
          pwVar16 = L"";
        }
        else {
          pwVar16 = (wchar_t *)local_260.Data.AllocatorInstance.Data;
          if (local_260.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            local_70 = (FScriptContainerElement *)0x0;
            local_68 = 0;
            goto LAB_147b00a5f;
          }
        }
        sVar9 = wcslen(pwVar16);
        local_68 = (int)sVar9;
        uVar20 = local_68 + 1;
        FVar19.Data = pFVar10;
        if (0x80 < uVar20) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,uVar20,1)
          ;
          FVar19.Data = local_78.Data;
        }
        lVar18 = (longlong)(int)uVar20;
        pFVar15 = local_f8;
        if (FVar19.Data != (FScriptContainerElement *)0x0) {
          pFVar15 = FVar19.Data;
        }
        bVar21 = false;
        pFVar13 = pFVar10;
        local_70 = pFVar15;
        if (0 < (int)uVar20) {
          do {
            uVar1 = *(ushort *)((longlong)pwVar16 + (longlong)pFVar13 * 2);
            pFVar15[(longlong)pFVar13] = SUB21(uVar1,0);
            pFVar13 = pFVar13 + 1;
            bVar21 = (bool)(bVar21 | 0x7f < uVar1);
          } while ((longlong)pFVar13 < lVar18);
          if (bVar21) {
            do {
              if (0x7f < *(ushort *)((longlong)pwVar16 + (longlong)pFVar10 * 2)) {
                pFVar15[(longlong)pFVar10] = (FScriptContainerElement)0x3f;
              }
              pFVar10 = pFVar10 + 1;
            } while ((longlong)pFVar10 < lVar18);
          }
        }
        if ((pFVar15 + lVar18 == (FScriptContainerElement *)0x0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("Result",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                ,0x25,L""), bVar21)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
LAB_147b00a5f:
        FSHA1::HashBuffer(local_70,(longlong)iVar6,local_110);
        if (local_78.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data);
        }
        pFVar7 = ::FString::ToUpper(&local_280,&local_130);
        local_290.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_290.Data.ArrayNum = 0;
        local_290.Data.ArrayMax = 0;
        BytesToHex(local_110,0x14,&local_290);
        iVar6 = (pFVar7->Data).ArrayNum;
        if (local_290.Data.ArrayNum == iVar6) {
          if (local_290.Data.ArrayNum < 2) {
            bVar21 = true;
          }
          else {
            iVar6 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)local_290.Data.AllocatorInstance.Data,
                               (wchar_t *)(pFVar7->Data).AllocatorInstance.Data);
            bVar21 = iVar6 == 0;
          }
        }
        else {
          bVar21 = iVar6 + local_290.Data.ArrayNum == 1;
        }
        if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_290.Data.AllocatorInstance.Data);
        }
        if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.Data.AllocatorInstance.Data);
        }
        if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_260.Data.AllocatorInstance.Data);
        }
        if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_270.Data.AllocatorInstance.Data);
        }
        if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_280.Data.AllocatorInstance.Data);
          return bVar21;
        }
        return bVar21;
      }
      pFVar7 = ::FString::ToLower(&param_2->Arg2,&local_1a0);
      pFVar8 = ::FString::ToLower(&param_2->Arg1,&local_1b0);
      pwVar16 = L"";
      if ((pFVar8->Data).ArrayNum == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
      if ((pFVar7->Data).ArrayNum == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
      }
      iVar6 = FGenericPlatformStricmp::Stricmp(pwVar12,pwVar11);
      if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
      }
      if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
      }
      if (-1 < iVar6) {
        return false;
      }
      if (local_298 != CMP_GreaterEqualIgnore) {
        return true;
      }
      pFVar7 = ::FString::ToLower(&param_2->Arg2,&local_180);
      pFVar8 = ::FString::ToLower(&param_2->Arg1,&local_190);
      if ((pFVar7->Data).ArrayNum == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
      }
      if ((pFVar8->Data).ArrayNum != 0) {
        pwVar16 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
      iVar6 = FGenericPlatformStricmp::Stricmp(pwVar16,pwVar11);
      if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_190.Data.AllocatorInstance.Data);
      }
      if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.Data.AllocatorInstance.Data);
      }
      cVar3 = (char)((uint)iVar6 >> 0x18);
    }
    if (-1 < cVar3) {
      return true;
    }
  }
  return false;
}

