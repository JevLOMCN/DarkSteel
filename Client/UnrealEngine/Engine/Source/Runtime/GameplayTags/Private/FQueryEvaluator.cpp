// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTags
// Functions: 14

// Eval @ 146ad7980

bool __thiscall FQueryEvaluator::Eval(FQueryEvaluator *this,FGameplayTagContainer *param_1)

{
  code *pcVar1;
  byte bVar2;
  uchar uVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  
  this->CurStreamIdx = 0;
  bVar2 = GetToken(this);
  this->Version = (uint)bVar2;
  if (this->bReadError != false) {
    return false;
  }
  bVar4 = false;
  uVar3 = GetToken(this);
  if ((this->bReadError == false) && (uVar3 != '\0')) {
    bVar4 = EvalExpr(this,param_1,false);
  }
  if (this->CurStreamIdx != (this->Query->QueryTokenStream).ArrayNum) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7958607028354547502>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\GameplayTagContainer.cpp"
                       ,0xd2,"CurStreamIdx == Query.QueryTokenStream.Num()");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return (bool)uVar6;
    }
  }
  return bVar4;
}

// EvalAllExprMatch @ 146ad7a40

bool __thiscall
FQueryEvaluator::EvalAllExprMatch(FQueryEvaluator *this,FGameplayTagContainer *param_1,bool param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  ulonglong uVar4;
  
  bVar2 = true;
  bVar1 = GetToken(this);
  if (this->bReadError == false) {
    if (bVar1 != 0) {
      uVar4 = (ulonglong)bVar1;
      do {
        bVar3 = EvalExpr(this,param_1,param_2);
        if ((param_2 == false) && (!bVar3)) {
          bVar2 = false;
          param_2 = true;
        }
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

// EvalAllTagsExactMatch @ 146ad7ad0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FQueryEvaluator::EvalAllTagsExactMatch
          (FQueryEvaluator *this,FGameplayTagContainer *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  longlong local_res8;
  
  bVar7 = true;
  bVar4 = GetToken(this);
  if (this->bReadError == false) {
    iVar10 = 0;
    if (bVar4 != 0) {
      do {
        uVar2 = this->CurStreamIdx;
        if (((int)uVar2 < 0) || ((this->Query->QueryTokenStream).ArrayNum <= (int)uVar2)) {
          if (2 < (byte)LogGameplayTags._0_1_) {
            UE::Logging::Private::BasicLog<3>
                      (&`private:_unsigned_char___cdecl_FQueryEvaluator::GetToken(void)___ptr64'::
                        __l6::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
          }
          this->bReadError = true;
        }
        else {
          this->CurStreamIdx = uVar2 + 1;
          uVar8 = 0;
          if ((int)uVar2 < (this->Query->QueryTokenStream).ArrayNum) {
            uVar8 = ~uVar2 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
        }
        if (this->bReadError != false) goto LAB_146ad7bf9;
        if (param_2 == false) {
          FGameplayTagQuery::GetTagFromIndex(this->Query,(int)&local_res8);
          if (local_res8 != 0) {
            pFVar9 = (param_1->GameplayTags).AllocatorInstance.Data;
            pFVar1 = pFVar9 + (longlong)(param_1->GameplayTags).ArrayNum * 8;
            for (; pFVar9 != pFVar1; pFVar9 = pFVar9 + 8) {
              if (*(longlong *)pFVar9 == local_res8) goto LAB_146ad7be8;
            }
          }
          param_2 = true;
          bVar7 = false;
        }
LAB_146ad7be8:
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)(uint)bVar4);
    }
  }
  else {
LAB_146ad7bf9:
    bVar7 = false;
  }
  return bVar7;
}

// EvalAllTagsMatch @ 146ad7c20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FQueryEvaluator::EvalAllTagsMatch(FQueryEvaluator *this,FGameplayTagContainer *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  longlong local_res8;
  
  bVar7 = true;
  bVar4 = GetToken(this);
  if (this->bReadError == false) {
    iVar10 = 0;
    if (bVar4 != 0) {
      do {
        uVar2 = this->CurStreamIdx;
        if (((int)uVar2 < 0) || ((this->Query->QueryTokenStream).ArrayNum <= (int)uVar2)) {
          if (2 < (byte)LogGameplayTags._0_1_) {
            UE::Logging::Private::BasicLog<3>
                      (&`private:_unsigned_char___cdecl_FQueryEvaluator::GetToken(void)___ptr64'::
                        __l6::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
          }
          this->bReadError = true;
        }
        else {
          this->CurStreamIdx = uVar2 + 1;
          uVar8 = 0;
          if ((int)uVar2 < (this->Query->QueryTokenStream).ArrayNum) {
            uVar8 = ~uVar2 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
        }
        if (this->bReadError != false) goto LAB_146ad7d68;
        if (param_2 == false) {
          FGameplayTagQuery::GetTagFromIndex(this->Query,(int)&local_res8);
          if (local_res8 != 0) {
            pFVar9 = (param_1->GameplayTags).AllocatorInstance.Data;
            pFVar1 = pFVar9 + (longlong)(param_1->GameplayTags).ArrayNum * 8;
            for (; pFVar9 != pFVar1; pFVar9 = pFVar9 + 8) {
              if (*(longlong *)pFVar9 == local_res8) goto LAB_146ad7d57;
            }
            pFVar9 = (param_1->ParentTags).AllocatorInstance.Data;
            pFVar1 = pFVar9 + (longlong)(param_1->ParentTags).ArrayNum * 8;
            for (; pFVar9 != pFVar1; pFVar9 = pFVar9 + 8) {
              if (*(longlong *)pFVar9 == local_res8) goto LAB_146ad7d57;
            }
          }
          param_2 = true;
          bVar7 = false;
        }
LAB_146ad7d57:
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)(uint)bVar4);
    }
  }
  else {
LAB_146ad7d68:
    bVar7 = false;
  }
  return bVar7;
}

// EvalAnyExprMatch @ 146ad7d90

bool __thiscall
FQueryEvaluator::EvalAnyExprMatch(FQueryEvaluator *this,FGameplayTagContainer *param_1,bool param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  ulonglong uVar4;
  
  bVar2 = false;
  bVar1 = GetToken(this);
  if (this->bReadError == false) {
    if (bVar1 != 0) {
      uVar4 = (ulonglong)bVar1;
      do {
        bVar3 = EvalExpr(this,param_1,param_2);
        if ((param_2 == false) && (bVar3)) {
          param_2 = true;
          bVar2 = true;
        }
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

// EvalAnyTagsExactMatch @ 146ad7e20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FQueryEvaluator::EvalAnyTagsExactMatch
          (FQueryEvaluator *this,FGameplayTagContainer *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  bool bVar10;
  longlong local_res8;
  
  bVar10 = false;
  bVar4 = GetToken(this);
  if (this->bReadError == false) {
    iVar9 = 0;
    if (bVar4 != 0) {
      do {
        uVar2 = this->CurStreamIdx;
        if (((int)uVar2 < 0) || ((this->Query->QueryTokenStream).ArrayNum <= (int)uVar2)) {
          if (2 < (byte)LogGameplayTags._0_1_) {
            UE::Logging::Private::BasicLog<3>
                      (&`private:_unsigned_char___cdecl_FQueryEvaluator::GetToken(void)___ptr64'::
                        __l6::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
          }
          this->bReadError = true;
        }
        else {
          this->CurStreamIdx = uVar2 + 1;
          uVar7 = 0;
          if ((int)uVar2 < (this->Query->QueryTokenStream).ArrayNum) {
            uVar7 = ~uVar2 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
        }
        if (this->bReadError != false) goto LAB_146ad7f4c;
        if ((param_2 == false) &&
           (FGameplayTagQuery::GetTagFromIndex(this->Query,(int)&local_res8), local_res8 != 0)) {
          pFVar8 = (param_1->GameplayTags).AllocatorInstance.Data;
          pFVar1 = pFVar8 + (longlong)(param_1->GameplayTags).ArrayNum * 8;
          for (; pFVar8 != pFVar1; pFVar8 = pFVar8 + 8) {
            if (*(longlong *)pFVar8 == local_res8) {
              param_2 = true;
              bVar10 = true;
              break;
            }
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)(uint)bVar4);
    }
  }
  else {
LAB_146ad7f4c:
    bVar10 = false;
  }
  return bVar10;
}

// EvalAnyTagsMatch @ 146ad7f80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FQueryEvaluator::EvalAnyTagsMatch(FQueryEvaluator *this,FGameplayTagContainer *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  bool bVar10;
  longlong local_res8;
  
  bVar10 = false;
  bVar4 = GetToken(this);
  if ((this->bReadError != false) || (iVar9 = 0, bVar4 == 0)) {
    return false;
  }
LAB_146ad7fc6:
  uVar2 = this->CurStreamIdx;
  if (((int)uVar2 < 0) || ((this->Query->QueryTokenStream).ArrayNum <= (int)uVar2)) {
    if (2 < (byte)LogGameplayTags._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`private:_unsigned_char___cdecl_FQueryEvaluator::GetToken(void)___ptr64'::__l6::
                  LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
    }
    this->bReadError = true;
  }
  else {
    this->CurStreamIdx = uVar2 + 1;
    uVar7 = 0;
    if ((int)uVar2 < (this->Query->QueryTokenStream).ArrayNum) {
      uVar7 = ~uVar2 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  if (this->bReadError != false) {
    return false;
  }
  if ((param_2 == false) &&
     (FGameplayTagQuery::GetTagFromIndex(this->Query,(int)&local_res8), local_res8 != 0)) {
    pFVar8 = (param_1->GameplayTags).AllocatorInstance.Data;
    pFVar1 = pFVar8 + (longlong)(param_1->GameplayTags).ArrayNum * 8;
    for (; pFVar8 != pFVar1; pFVar8 = pFVar8 + 8) {
      if (*(longlong *)pFVar8 == local_res8) goto LAB_146ad80b3;
    }
    pFVar8 = (param_1->ParentTags).AllocatorInstance.Data;
    pFVar1 = pFVar8 + (longlong)(param_1->ParentTags).ArrayNum * 8;
    for (; pFVar8 != pFVar1; pFVar8 = pFVar8 + 8) {
      if (*(longlong *)pFVar8 == local_res8) goto LAB_146ad80b3;
    }
  }
  goto LAB_146ad80ba;
LAB_146ad80b3:
  param_2 = true;
  bVar10 = true;
LAB_146ad80ba:
  iVar9 = iVar9 + 1;
  if ((int)(uint)bVar4 <= iVar9) {
    return bVar10;
  }
  goto LAB_146ad7fc6;
}

// EvalExpr @ 146ad80f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FQueryEvaluator::EvalExpr(FQueryEvaluator *this,FGameplayTagContainer *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  int iVar11;
  uchar local_res8 [8];
  longlong local_res20;
  longlong local_48;
  uchar *local_40;
  
  local_res8[0] = GetToken(this);
  if (this->bReadError != false) {
    return false;
  }
  switch(local_res8[0]) {
  case '\x01':
    bVar7 = EvalAnyTagsMatch(this,param_1,param_2);
    break;
  case '\x02':
    bVar7 = EvalAllTagsMatch(this,param_1,param_2);
    break;
  case '\x03':
    bVar7 = EvalNoTagsMatch(this,param_1,param_2);
    break;
  case '\x04':
    bVar7 = false;
    bVar4 = GetToken(this);
    if ((this->bReadError == false) && (bVar4 != 0)) {
      uVar10 = (ulonglong)bVar4;
      do {
        bVar5 = EvalExpr(this,param_1,param_2);
        if ((param_2 == false) && (bVar5)) {
          param_2 = true;
          bVar7 = true;
        }
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    break;
  case '\x05':
    bVar7 = true;
    bVar4 = GetToken(this);
    if (this->bReadError == false) {
      if (bVar4 == 0) {
        return true;
      }
      uVar10 = (ulonglong)bVar4;
      do {
        bVar5 = EvalExpr(this,param_1,param_2);
        if ((param_2 == false) && (!bVar5)) {
          bVar7 = false;
          param_2 = true;
        }
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
      return bVar7;
    }
    goto LAB_146ad847b;
  case '\x06':
    bVar7 = true;
    bVar4 = GetToken(this);
    if (this->bReadError == false) {
      if (bVar4 == 0) {
        return true;
      }
      uVar10 = (ulonglong)bVar4;
      do {
        bVar5 = EvalExpr(this,param_1,param_2);
        if ((param_2 == false) && (bVar5)) {
          bVar7 = false;
          param_2 = true;
        }
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
      return bVar7;
    }
LAB_146ad847b:
    bVar7 = false;
    break;
  case '\a':
    bVar7 = false;
    bVar4 = GetToken(this);
    if ((this->bReadError == false) && (iVar11 = 0, bVar4 != 0)) {
      do {
        uVar2 = this->CurStreamIdx;
        if (((int)uVar2 < 0) || ((this->Query->QueryTokenStream).ArrayNum <= (int)uVar2)) {
          if (2 < (byte)LogGameplayTags._0_1_) {
            UE::Logging::Private::BasicLog<3>
                      (&`private:_unsigned_char___cdecl_FQueryEvaluator::GetToken(void)___ptr64'::
                        __l6::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
          }
          this->bReadError = true;
        }
        else {
          this->CurStreamIdx = uVar2 + 1;
          uVar8 = 0;
          if ((int)uVar2 < (this->Query->QueryTokenStream).ArrayNum) {
            uVar8 = ~uVar2 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
        }
        if (this->bReadError != false) goto LAB_146ad83bf;
        if ((param_2 == false) &&
           (FGameplayTagQuery::GetTagFromIndex(this->Query,(int)&local_res20), local_res20 != 0)) {
          pFVar9 = (param_1->GameplayTags).AllocatorInstance.Data;
          pFVar1 = pFVar9 + (longlong)(param_1->GameplayTags).ArrayNum * 8;
          for (; pFVar9 != pFVar1; pFVar9 = pFVar9 + 8) {
            if (*(longlong *)pFVar9 == local_res20) {
              param_2 = true;
              bVar7 = true;
              break;
            }
          }
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < (int)(uint)bVar4);
    }
    break;
  case '\b':
    bVar7 = true;
    bVar4 = GetToken(this);
    if (this->bReadError == false) {
      iVar11 = 0;
      if (bVar4 != 0) {
        do {
          uVar2 = this->CurStreamIdx;
          if (((int)uVar2 < 0) || ((this->Query->QueryTokenStream).ArrayNum <= (int)uVar2)) {
            if (2 < (byte)LogGameplayTags._0_1_) {
              UE::Logging::Private::BasicLog<3>
                        (&`private:_unsigned_char___cdecl_FQueryEvaluator::GetToken(void)___ptr64'::
                          __l6::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
            }
            this->bReadError = true;
          }
          else {
            this->CurStreamIdx = uVar2 + 1;
            uVar8 = 0;
            if ((int)uVar2 < (this->Query->QueryTokenStream).ArrayNum) {
              uVar8 = ~uVar2 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
          }
          if (this->bReadError != false) goto LAB_146ad83bf;
          if (param_2 == false) {
            FGameplayTagQuery::GetTagFromIndex(this->Query,(int)&local_48);
            if (local_48 != 0) {
              pFVar9 = (param_1->GameplayTags).AllocatorInstance.Data;
              pFVar1 = pFVar9 + (longlong)(param_1->GameplayTags).ArrayNum * 8;
              for (; pFVar9 != pFVar1; pFVar9 = pFVar9 + 8) {
                if (*(longlong *)pFVar9 == local_48) goto LAB_146ad83aa;
              }
            }
            param_2 = true;
            bVar7 = false;
          }
LAB_146ad83aa:
          iVar11 = iVar11 + 1;
        } while (iVar11 < (int)(uint)bVar4);
      }
    }
    else {
LAB_146ad83bf:
      bVar7 = false;
    }
    break;
  default:
    local_40 = local_res8;
    `FQueryEvaluator::EvalExpr'::__l2::<lambda_1>::operator()(&local_40);
    bVar7 = false;
  }
  return bVar7;
}

// EvalNoExprMatch @ 146ad8520

bool __thiscall
FQueryEvaluator::EvalNoExprMatch(FQueryEvaluator *this,FGameplayTagContainer *param_1,bool param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  ulonglong uVar4;
  
  bVar2 = true;
  bVar1 = GetToken(this);
  if (this->bReadError == false) {
    if (bVar1 != 0) {
      uVar4 = (ulonglong)bVar1;
      do {
        bVar3 = EvalExpr(this,param_1,param_2);
        if ((param_2 == false) && (bVar3)) {
          bVar2 = false;
          param_2 = true;
        }
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

// EvalNoTagsMatch @ 146ad85b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FQueryEvaluator::EvalNoTagsMatch(FQueryEvaluator *this,FGameplayTagContainer *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  longlong local_res8;
  
  bVar7 = true;
  bVar4 = GetToken(this);
  if (this->bReadError == false) {
    iVar10 = 0;
    if (bVar4 != 0) {
LAB_146ad85f6:
      uVar2 = this->CurStreamIdx;
      if (((int)uVar2 < 0) || ((this->Query->QueryTokenStream).ArrayNum <= (int)uVar2)) {
        if (2 < (byte)LogGameplayTags._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    (&`private:_unsigned_char___cdecl_FQueryEvaluator::GetToken(void)___ptr64'::__l6
                      ::LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
        }
        this->bReadError = true;
      }
      else {
        this->CurStreamIdx = uVar2 + 1;
        uVar8 = 0;
        if ((int)uVar2 < (this->Query->QueryTokenStream).ArrayNum) {
          uVar8 = ~uVar2 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
      }
      if (this->bReadError == false) {
        if ((param_2 == false) &&
           (FGameplayTagQuery::GetTagFromIndex(this->Query,(int)&local_res8), local_res8 != 0)) {
          pFVar9 = (param_1->GameplayTags).AllocatorInstance.Data;
          pFVar1 = pFVar9 + (longlong)(param_1->GameplayTags).ArrayNum * 8;
          for (; pFVar9 != pFVar1; pFVar9 = pFVar9 + 8) {
            if (*(longlong *)pFVar9 == local_res8) goto LAB_146ad86e3;
          }
          pFVar9 = (param_1->ParentTags).AllocatorInstance.Data;
          pFVar1 = pFVar9 + (longlong)(param_1->ParentTags).ArrayNum * 8;
          for (; pFVar9 != pFVar1; pFVar9 = pFVar9 + 8) {
            if (*(longlong *)pFVar9 == local_res8) goto LAB_146ad86e3;
          }
        }
        goto LAB_146ad86e9;
      }
      goto LAB_146ad86fa;
    }
  }
  else {
LAB_146ad86fa:
    bVar7 = false;
  }
  return bVar7;
LAB_146ad86e3:
  param_2 = true;
  bVar7 = false;
LAB_146ad86e9:
  iVar10 = iVar10 + 1;
  if ((int)(uint)bVar4 <= iVar10) {
    return bVar7;
  }
  goto LAB_146ad85f6;
}

// GetToken @ 146ae14e0

/* WARNING: Enum "Type": Some values do not have unique names */

uchar __thiscall FQueryEvaluator::GetToken(FQueryEvaluator *this)

{
  uint uVar1;
  FGameplayTagQuery *pFVar2;
  code *pcVar3;
  bool bVar4;
  uchar uVar5;
  uint uVar6;
  
  uVar1 = this->CurStreamIdx;
  if ((-1 < (int)uVar1) && (pFVar2 = this->Query, (int)uVar1 < (pFVar2->QueryTokenStream).ArrayNum))
  {
    this->CurStreamIdx = uVar1 + 1;
    uVar6 = 0;
    if ((int)uVar1 < (pFVar2->QueryTokenStream).ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
    }
    return (uchar)(pFVar2->QueryTokenStream).AllocatorInstance.Data[(int)uVar1];
  }
  if (2 < (byte)LogGameplayTags._0_1_) {
    UE::Logging::Private::BasicLog<3>
              (&`private:_unsigned_char___cdecl_FQueryEvaluator::GetToken(void)___ptr64'::__l6::
                LOG_Static,(FLogCategoryBase *)&LogGameplayTags);
  }
  this->bReadError = true;
  return '\0';
}

// Read @ 146ae96b0

void __thiscall FQueryEvaluator::Read(FQueryEvaluator *this,FGameplayTagQueryExpression *param_1)

{
  code *pcVar1;
  byte bVar2;
  uchar uVar3;
  bool bVar4;
  FGameplayTagQueryExpression local_38;
  
  local_38.ExprType = Undefined;
  local_38._1_7_ = 0;
  local_38.ExprSet.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ExprSet.ArrayNum = 0;
  local_38.ExprSet.ArrayMax = 0;
  local_38.TagSet.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.TagSet.ArrayNum = 0;
  local_38.TagSet.ArrayMax = 0;
  FGameplayTagQueryExpression::operator=(param_1,&local_38);
  if (local_38.TagSet.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.TagSet.AllocatorInstance.Data);
  }
  DestructItems<FGameplayTagQueryExpression,int>
            ((FGameplayTagQueryExpression *)local_38.ExprSet.AllocatorInstance.Data,
             local_38.ExprSet.ArrayNum);
  if ((FGameplayTagQueryExpression *)local_38.ExprSet.AllocatorInstance.Data !=
      (FGameplayTagQueryExpression *)0x0) {
    FMemory::Free(local_38.ExprSet.AllocatorInstance.Data);
  }
  this->CurStreamIdx = 0;
  if (0 < (this->Query->QueryTokenStream).ArrayNum) {
    bVar2 = GetToken(this);
    this->Version = (uint)bVar2;
    if (this->bReadError == false) {
      uVar3 = GetToken(this);
      if ((this->bReadError == false) && (uVar3 != '\0')) {
        ReadExpr(this,param_1);
      }
    }
    if (this->CurStreamIdx != (this->Query->QueryTokenStream).ArrayNum) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7958607028354547480>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\GameplayTagContainer.cpp"
                         ,0xe8,"CurStreamIdx == Query.QueryTokenStream.Num()");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// ReadExpr @ 146ae97a0

void __thiscall
FQueryEvaluator::ReadExpr(FQueryEvaluator *this,FGameplayTagQueryExpression *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FGameplayTagQueryExpression *pFVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  EGameplayTagQueryExprType EVar6;
  byte bVar7;
  bool bVar8;
  int iVar9;
  int *piVar10;
  longlong lVar11;
  ulonglong local_res8;
  FName local_res10;
  FGameplayTagQueryExpression local_68;
  
  EVar6 = GetToken(this);
  param_1->ExprType = EVar6;
  if (this->bReadError == false) {
    if (((byte)(EVar6 - AnyTagsMatch) < 3) || ((byte)(EVar6 - AnyTagsExactMatch) < 2)) {
      bVar7 = GetToken(this);
      if ((this->bReadError == false) && (iVar9 = 0, bVar7 != 0)) {
        do {
          GetToken(this);
          if (this->bReadError != false) {
            return;
          }
          FGameplayTagQuery::GetTagFromIndex(this->Query,(int)&local_res10);
          FGameplayTagQueryExpression::AddTag(param_1,(FGameplayTag)local_res10);
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)(uint)bVar7);
      }
    }
    else {
      bVar7 = GetToken(this);
      if ((this->bReadError == false) && (bVar7 != 0)) {
        local_res8 = (ulonglong)bVar7;
        do {
          piVar10 = &(param_1->ExprSet).ArrayMax;
          local_68.ExprSet.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_68.ExprSet.ArrayNum = 0;
          local_68.ExprSet.ArrayMax = 0;
          local_68.TagSet.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_68.TagSet.ArrayNum = 0;
          local_68.TagSet.ArrayMax = 0;
          ReadExpr(this,&local_68);
          if (((param_1->ExprType != AllExprMatch) &&
              ((param_1->ExprType - AnyExprMatch & 0xfd) != 0)) &&
             (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_5743514444722338899>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Classes\\GameplayTagContainer.h"
                                 ,0x3ad,"UsesExprSet()"), bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar3 = (FGameplayTagQueryExpression *)(param_1->ExprSet).AllocatorInstance.Data;
          if (((pFVar3 <= &local_68) && (&local_68 < pFVar3 + *piVar10)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar9 = (param_1->ExprSet).ArrayNum;
          if (iVar9 == *piVar10) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x828,&(param_1->ExprSet).AllocatorInstance,piVar10);
          }
          FVar5.Data = local_68.ExprSet.AllocatorInstance.Data;
          (param_1->ExprSet).ArrayNum = iVar9 + 1;
          pFVar2 = (param_1->ExprSet).AllocatorInstance.Data + (longlong)iVar9 * 0x28;
          *pFVar2 = (FScriptContainerElement)local_68.ExprType;
          pFVar1 = pFVar2 + 8;
          *(FScriptContainerElement **)&pFVar1->field_0x0 = (FScriptContainerElement *)0x0;
          iVar9 = local_68.ExprSet.ArrayNum;
          *(int *)(pFVar2 + 0x10) = local_68.ExprSet.ArrayNum;
          if (local_68.ExprSet.ArrayNum == 0) {
            *(int *)(pFVar2 + 0x14) = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,local_68.ExprSet.ArrayNum,0,(ForAnyElementType *)pFVar1,
                       local_68.ExprSet.ArrayNum,(int *)(pFVar2 + 0x14));
            ConstructItems<FGameplayTagQueryExpression,FGameplayTagQueryExpression,int>
                      (*(FScriptContainerElement **)&pFVar1->field_0x0,
                       (FGameplayTagQueryExpression *)FVar5.Data,iVar9);
          }
          FVar5.Data = local_68.TagSet.AllocatorInstance.Data;
          *(undefined8 *)(pFVar2 + 0x18) = 0;
          lVar11 = (longlong)local_68.TagSet.ArrayNum;
          *(int *)(pFVar2 + 0x20) = local_68.TagSet.ArrayNum;
          if (local_68.TagSet.ArrayNum == 0) {
            *(int *)(pFVar2 + 0x24) = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,local_68.TagSet.ArrayNum,0,(ForAnyElementType *)(pFVar2 + 0x18),
                       local_68.TagSet.ArrayNum,(int *)(pFVar2 + 0x24));
            memcpy(*(FScriptContainerElement **)&pFVar2[0x18].field_0x0,FVar5.Data,lVar11 << 3);
          }
          if (local_68.TagSet.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.TagSet.AllocatorInstance.Data);
          }
          DestructItems<FGameplayTagQueryExpression,int>
                    ((FGameplayTagQueryExpression *)local_68.ExprSet.AllocatorInstance.Data,
                     local_68.ExprSet.ArrayNum);
          if ((FGameplayTagQueryExpression *)local_68.ExprSet.AllocatorInstance.Data !=
              (FGameplayTagQueryExpression *)0x0) {
            FMemory::Free(local_68.ExprSet.AllocatorInstance.Data);
          }
          local_res8 = local_res8 - 1;
        } while (local_res8 != 0);
      }
    }
  }
  return;
}

// operator() @ 1504f8230

bool __thiscall `FQueryEvaluator::EvalExpr'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_7958607028354547113>);
  if (bVar2) {
    UEnum::GetValueAsString<enum_EGameplayTagQueryExprType>
              (&local_18,**(EGameplayTagQueryExprType **)this);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7958607028354547113>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504f829a;
    }
  }
  bVar2 = false;
LAB_1504f829a:
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

