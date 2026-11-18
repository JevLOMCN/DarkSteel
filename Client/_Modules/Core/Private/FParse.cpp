// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 36

// AlnumToken @ 1418c7a70

bool __cdecl FParse::AlnumToken(wchar_t **param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  
  ::FString::Reset(param_2,0);
  iVar2 = iswspace(**param_1);
  while (iVar2 != 0) {
    *param_1 = *param_1 + 1;
    iVar2 = iswspace(**param_1);
  }
  while ((iVar2 = iswalnum(**param_1), iVar2 != 0 || (**param_1 == L'_'))) {
    ::FString::AppendChar(param_2,**param_1);
    *param_1 = *param_1 + 1;
  }
  iVar1 = (param_2->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  return 0 < iVar2;
}

// Bool @ 1418c9520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FParse::Bool(wchar_t *param_1,wchar_t *param_2,bool *param_3)

{
  bool bVar1;
  undefined1 auStackY_68 [32];
  wchar_t local_38 [16];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_68;
  bVar1 = Value(param_1,param_2,local_38,0x10,true,(wchar_t **)0x0);
  if (bVar1) {
    bVar1 = FToBoolHelper::FromCStringWide(local_38);
    *param_3 = bVar1;
    return true;
  }
  return false;
}

// Command @ 1418caa00

bool __cdecl FParse::Command(wchar_t **param_1,wchar_t *param_2,bool param_3)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  code *pcVar3;
  bool bVar4;
  ConsoleCommandLibrary *pCVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  size_t sVar11;
  uint uVar12;
  ulong64 uVar13;
  longlong lVar14;
  FString local_48;
  FDestructionSentinel local_38;
  
  pCVar5 = GConsoleCommandLibrary;
  if (GConsoleCommandLibrary != (ConsoleCommandLibrary *)0x0) {
    iVar9 = FGenericPlatformStricmp::Strnicmp
                      (param_2,(GConsoleCommandLibrary->Prefix).DataPtr,
                       (longlong)(GConsoleCommandLibrary->Prefix).Size);
    if (iVar9 == 0) {
      ::FString::FString(&local_48,param_2);
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
                (&pCVar5->KnownNames,(FString *)&stack0x00000020,(bool *)&local_48);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    if (param_3) {
      return false;
    }
  }
  while( true ) {
    pwVar2 = *param_1;
    if ((*pwVar2 != L' ') && (*pwVar2 != L'\t')) break;
    *param_1 = pwVar2 + 1;
  }
  sVar11 = wcslen(param_2);
  uVar13 = (ulong64)(int)sVar11;
  iVar9 = FGenericPlatformStricmp::Strnicmp(pwVar2,param_2,uVar13);
  if (iVar9 == 0) {
    *param_1 = *param_1 + uVar13;
    iVar9 = iswalnum(**param_1);
    if (iVar9 == 0) {
      while( true ) {
        wVar1 = **param_1;
        if ((wVar1 != L' ') && (wVar1 != L'\t')) break;
        *param_1 = *param_1 + 1;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &FCoreDelegates::OnNamedCommandParsed,(FWriteAccessScope *)&local_38);
      bVar4 = false;
      FCoreDelegates::OnNamedCommandParsed._28_4_ = FCoreDelegates::OnNamedCommandParsed._28_4_ + 1;
      uVar12 = FCoreDelegates::OnNamedCommandParsed._16_4_ - 1;
      if (-1 < (int)uVar12) {
        lVar14 = (longlong)(int)uVar12 << 4;
        bVar4 = false;
        do {
          uVar10 = 0;
          if ((int)uVar12 < (int)FCoreDelegates::OnNamedCommandParsed._16_4_) {
            uVar10 = ~uVar12 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return (bool)uVar7;
          }
          if (((*(int *)(lVar14 + 8 + FCoreDelegates::OnNamedCommandParsed._8_8_) == 0) ||
              (*(longlong **)(lVar14 + FCoreDelegates::OnNamedCommandParsed._8_8_) ==
               (longlong *)0x0)) ||
             (cVar8 = (**(code **)(**(longlong **)
                                     (lVar14 + FCoreDelegates::OnNamedCommandParsed._8_8_) + 0x68))
                                (), cVar8 == '\0')) {
            bVar4 = true;
          }
          lVar14 = lVar14 + -0x10;
          uVar12 = uVar12 - 1;
        } while (-1 < (int)uVar12);
      }
      FCoreDelegates::OnNamedCommandParsed._28_4_ = FCoreDelegates::OnNamedCommandParsed._28_4_ + -1
      ;
      if (bVar4) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &FCoreDelegates::OnNamedCommandParsed,false);
      }
      if (local_38.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
      }
      return true;
    }
    *param_1 = *param_1 + -uVar13;
  }
  return false;
}

// Expression @ 1418da410

bool __cdecl FParse::Expression(wchar_t **param_1,FString *param_2,bool param_3,wchar_t param_4)

{
  short sVar1;
  int iVar2;
  wchar_t *pwVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  wchar_t *pwVar9;
  uint uVar10;
  wchar_t wVar11;
  wchar_t local_48 [4];
  ForAnyElementType local_40;
  int local_38;
  int local_34 [3];
  
  ::FString::Reset(param_2,0);
  pwVar3 = *param_1;
  pwVar9 = pwVar3;
  do {
    if (param_4 == L'\0') {
      iVar8 = iswspace(*pwVar9);
      pwVar9 = *param_1;
      if (iVar8 == 0) break;
    }
    else if (*pwVar9 != param_4) break;
    pwVar9 = pwVar9 + 1;
    *param_1 = pwVar9;
  } while( true );
  if (*pwVar9 == L'\"') {
    bVar5 = Token(param_1,param_2,param_3,param_4);
    return bVar5;
  }
  bVar5 = false;
  local_40.Data = (FScriptContainerElement *)0x0;
  local_38 = 0;
  local_34[0] = 0;
  local_48[0] = *pwVar9;
  if (local_48[0] != L'\0') {
    do {
      if (!bVar5) {
        if (((local_48[0] == L'(') || (local_48[0] == L'[')) || (local_48[0] == L'{')) {
          if (((local_40.Data <= (FScriptContainerElement *)local_48) &&
              ((FScriptContainerElement *)local_48 < local_40.Data + (longlong)local_34[0] * 2)) &&
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
          if (local_38 == local_34[0]) {
            local_38 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x202,&local_40,local_34);
          }
          *(wchar_t *)(local_40.Data + (longlong)local_38 * 2) = local_48[0];
          local_38 = local_38 + 1;
        }
        else if (((local_48[0] == L')') || (local_48[0] == L']')) || (local_48[0] == L'}')) {
          if (local_38 == 0) goto LAB_1418da7bf;
          uVar10 = 0;
          if ((int)(local_38 - 1U) < local_38) {
            uVar10 = ~(local_38 - 1U) >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          sVar1 = *(short *)(local_40.Data + (longlong)(local_38 + -1) * 2);
          if (sVar1 == 0x28) {
            wVar11 = L')';
          }
          else if (sVar1 == 0x5b) {
            wVar11 = L']';
          }
          else if (sVar1 == 0x7b) {
            wVar11 = L'}';
          }
          else {
            wVar11 = L'\0';
          }
          if (wVar11 != local_48[0]) break;
          if ((local_38 < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          iVar8 = (local_38 - (local_38 + -1)) + -1;
          if (iVar8 != 0) {
            memmove(local_40.Data + (longlong)(local_38 + -1) * 2,
                    local_40.Data + (longlong)(local_38 + -1) * 2 + 2,(longlong)iVar8 * 2);
          }
          local_38 = local_38 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,&local_40,local_38,local_34);
        }
        if (local_38 == 0) {
          if (param_4 == L'\0') {
            iVar8 = iswspace(local_48[0]);
            if (iVar8 != 0) break;
          }
          else if (local_48[0] == param_4) break;
        }
      }
      *param_1 = *param_1 + 1;
      if (local_48[0] == L'\\') {
        if ((param_3) && (bVar5)) {
          ::FString::AppendChar(param_2,L'\\');
          local_48[0] = **param_1;
          if (local_48[0] == L'\0') break;
          *param_1 = *param_1 + 1;
        }
      }
      else if (local_48[0] == L'\"') {
        bVar5 = !bVar5;
      }
      ::FString::AppendChar(param_2,local_48[0]);
      local_48[0] = **param_1;
    } while (local_48[0] != L'\0');
    if ((local_38 != 0) || (bVar5)) {
      *param_1 = pwVar3;
      ::FString::Reset(param_2,0);
      bVar5 = false;
      goto LAB_1418da7d1;
    }
  }
LAB_1418da7bf:
  iVar2 = (param_2->Data).ArrayNum;
  iVar8 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar8 = 0;
  }
  bVar5 = 0 < iVar8;
LAB_1418da7d1:
  if (local_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data);
  }
  return bVar5;
}

// GrammarBasedCLIParse @ 1418e1f30

FGrammarBasedParseResult * __cdecl
FParse::GrammarBasedCLIParse
          (FGrammarBasedParseResult *__return_storage_ptr__,wchar_t *param_1,
          TFunctionRef<void___cdecl(TStringView<wchar_t>,TStringView<wchar_t>)> *param_2,
          EGrammarBasedParseFlags param_3)

{
  int iVar1;
  TStringView<wchar_t> local_48;
  FGrammarBasedParser local_38;
  
  local_38.OnCmd._0_8_ = *(undefined8 *)param_2;
  local_38.OnCmd._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_38.Result.At = (wchar_t *)0x0;
  local_38.Result.ErrorCode = NotRun;
  local_38.Cursor = param_1;
  local_38.BehaviourFlags = param_3;
  iVar1 = iswspace(*param_1);
  while (iVar1 != 0) {
    local_38.Cursor = local_38.Cursor + 1;
    iVar1 = iswspace(*local_38.Cursor);
  }
  if ((int)local_38.Result.ErrorCode < 2) {
    while ((*local_38.Cursor != L'\0' &&
           (_anon_06B1A1F9::FGrammarBasedParser::ParseCmd(&local_38,&local_48), local_48.Size != 0))
          ) {
      if (1 < (int)local_38.Result.ErrorCode) {
        __return_storage_ptr__->At = local_38.Result.At;
        *(ulonglong *)&__return_storage_ptr__->ErrorCode =
             CONCAT44(local_38.Result._12_4_,local_38.Result.ErrorCode);
        return __return_storage_ptr__;
      }
    }
    if ((int)local_38.Result.ErrorCode < 2) {
      local_38.Result.ErrorCode = Succeeded;
      local_38.Result.At = local_38.Cursor;
    }
  }
  __return_storage_ptr__->At = local_38.Result.At;
  *(ulonglong *)&__return_storage_ptr__->ErrorCode =
       CONCAT44(local_38.Result._12_4_,local_38.Result.ErrorCode);
  return __return_storage_ptr__;
}

// HexNumber64 @ 1418e24a0

ulong64 __cdecl FParse::HexNumber64(TStringView<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  int iVar3;
  ulong64 uVar4;
  wchar_t *pwVar5;
  
  pwVar5 = param_1->DataPtr;
  uVar4 = 0;
  pwVar1 = pwVar5 + param_1->Size;
  for (; pwVar5 != pwVar1; pwVar5 = pwVar5 + 1) {
    wVar2 = *pwVar5;
    if ((ushort)(wVar2 + L'￐') < 10) {
      iVar3 = (ushort)wVar2 - 0x30;
    }
    else if ((ushort)(wVar2 + L'ﾟ') < 6) {
      iVar3 = (ushort)wVar2 - 0x57;
    }
    else if ((ushort)(wVar2 + L'﾿') < 6) {
      iVar3 = (ushort)wVar2 - 0x37;
    }
    else {
      iVar3 = 0;
    }
    uVar4 = uVar4 * 0x10 + (longlong)iVar3;
  }
  return uVar4;
}

// HexNumber @ 1418e2520

uint __cdecl FParse::HexNumber(TStringView<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  uint uVar3;
  int iVar4;
  wchar_t *pwVar5;
  
  pwVar5 = param_1->DataPtr;
  uVar3 = 0;
  pwVar1 = pwVar5 + param_1->Size;
  do {
    if (pwVar5 == pwVar1) {
      return uVar3;
    }
    wVar2 = *pwVar5;
    uVar3 = uVar3 * 0x10;
    if ((ushort)(wVar2 + L'￐') < 10) {
      iVar4 = uVar3 - 0x30;
LAB_1418e256f:
      uVar3 = iVar4 + (uint)(ushort)wVar2;
    }
    else {
      if ((ushort)(wVar2 + L'ﾟ') < 6) {
        iVar4 = uVar3 - 0x57;
        goto LAB_1418e256f;
      }
      if ((ushort)(wVar2 + L'﾿') < 6) {
        iVar4 = uVar3 - 0x37;
        goto LAB_1418e256f;
      }
    }
    pwVar5 = pwVar5 + 1;
  } while( true );
}

// Line @ 1418e4690

bool __cdecl FParse::Line(wchar_t **param_1,TStringView<wchar_t> *param_2,bool param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  wchar_t *pwVar5;
  wchar_t wVar6;
  wchar_t *pwVar7;
  undefined4 uStack_c;
  
  pwVar7 = (wchar_t *)0x0;
  param_2->DataPtr = (wchar_t *)0x0;
  bVar4 = false;
  param_2->Size = 0;
  bVar3 = false;
  bVar2 = false;
  pwVar5 = *param_1;
  bVar1 = false;
  wVar6 = *pwVar5;
  if (wVar6 != L'\0') {
    do {
      if ((wVar6 == L'\n') || (wVar6 == L'\r')) break;
      if ((!bVar1) && (!param_3)) {
        if ((*pwVar5 == L'/') && (bVar2 = bVar3, pwVar5[1] == L'/')) {
          bVar3 = true;
          bVar2 = true;
        }
        if (wVar6 == L'|') break;
      }
      bVar4 = true;
      bVar1 = (bool)(bVar1 ^ wVar6 == L'\"');
      if ((!bVar2) && (pwVar7 == (wchar_t *)0x0)) {
        pwVar7 = pwVar5;
      }
      pwVar5 = pwVar5 + 1;
      *param_1 = pwVar5;
      wVar6 = *pwVar5;
    } while (wVar6 != L'\0');
  }
  if (pwVar7 != (wchar_t *)0x0) {
    param_2->DataPtr = pwVar7;
    *(ulonglong *)&param_2->Size =
         CONCAT44(uStack_c,(int)((longlong)pwVar5 - (longlong)pwVar7 >> 1));
    pwVar5 = *param_1;
  }
  if (param_3) {
    wVar6 = *pwVar5;
    if (wVar6 == L'\r') {
      pwVar5 = pwVar5 + 1;
      *param_1 = pwVar5;
      wVar6 = *pwVar5;
    }
    if (wVar6 == L'\n') {
      pwVar5 = pwVar5 + 1;
      *param_1 = pwVar5;
    }
    wVar6 = *pwVar5;
  }
  else {
    while (((wVar6 = *pwVar5, wVar6 == L'\n' || (wVar6 == L'\r')) || (wVar6 == L'|'))) {
      pwVar5 = pwVar5 + 1;
      *param_1 = pwVar5;
    }
  }
  if ((wVar6 == L'\0') && (!bVar4)) {
    return false;
  }
  return true;
}

// Line @ 1418e47d0

bool __cdecl FParse::Line(wchar_t **param_1,FString *param_2,bool param_3)

{
  bool bVar1;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = (wchar_t *)0x0;
  local_18.Size = 0;
  bVar1 = Line(param_1,&local_18,param_3);
  ::FString::AssignRange(param_2,local_18.DataPtr,local_18.Size);
  return bVar1;
}

// Line @ 1418e4820

bool __cdecl FParse::Line(wchar_t **param_1,wchar_t *param_2,int param_3,bool param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  wchar_t *pwVar5;
  wchar_t wVar6;
  wchar_t wVar7;
  
  bVar4 = false;
  bVar1 = false;
  bVar3 = false;
  bVar2 = false;
  *param_2 = L'\0';
  pwVar5 = *param_1;
  wVar7 = *pwVar5;
  if (wVar7 != L'\0') {
    do {
      if (((wVar7 == L'\n') || (wVar7 == L'\r')) || (param_3 = param_3 + -1, param_3 < 1)) break;
      wVar6 = wVar7;
      if ((!bVar1) && (!param_4)) {
        wVar6 = *pwVar5;
        if ((wVar6 == L'/') && (bVar2 = bVar3, pwVar5[1] == L'/')) {
          bVar3 = true;
          bVar2 = true;
        }
        if (wVar7 == L'|') goto LAB_1418e4940;
      }
      bVar4 = true;
      bVar1 = (bool)(bVar1 ^ wVar7 == L'\"');
      *param_1 = pwVar5 + 1;
      if (!bVar2) {
        *param_2 = wVar6;
        param_2 = param_2 + 1;
      }
      pwVar5 = *param_1;
      wVar7 = *pwVar5;
    } while (wVar7 != L'\0');
  }
  if (param_4) {
    wVar7 = *pwVar5;
    if (wVar7 == L'\r') {
      pwVar5 = pwVar5 + 1;
      *param_1 = pwVar5;
      wVar7 = *pwVar5;
    }
    if (wVar7 == L'\n') {
      *param_1 = pwVar5 + 1;
    }
  }
  else {
LAB_1418e4940:
    while (((wVar7 = *pwVar5, wVar7 == L'\n' || (wVar7 == L'\r')) || (wVar7 == L'|'))) {
      pwVar5 = pwVar5 + 1;
      *param_1 = pwVar5;
    }
  }
  *param_2 = L'\0';
  if ((**param_1 == L'\0') && (!bVar4)) {
    return false;
  }
  return true;
}

// LineExtended @ 1418e4970

/* WARNING: Enum "ELineExtendedFlags": Some values do not have unique names */

bool __cdecl
FParse::LineExtended
          (wchar_t **param_1,TStringBuilderBase<wchar_t> *param_2,int *param_3,
          ELineExtendedFlags param_4)

{
  wchar_t wVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  wchar_t wVar7;
  int iVar8;
  bool bVar9;
  
  pwVar5 = *param_1;
  bVar9 = false;
  iVar8 = 0;
  bVar2 = false;
  bVar4 = false;
  param_2->CurPos = param_2->Base;
  *param_3 = 0;
  wVar7 = L'\0';
  if (*pwVar5 != L'\0') {
    bVar3 = false;
    do {
      bVar9 = bVar3;
      if (((param_4 & BreakOnPipe) == None) || (bVar2)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      wVar7 = *pwVar5;
      if ((((wVar7 == L'\n') || (wVar7 == L'\r')) || ((bVar3 && (wVar7 == L'|')))) && (iVar8 < 1))
      goto LAB_1418b4f6f;
      if ((!bVar2) &&
         (((((param_4 & SwallowDoubleSlashComments) != None && (wVar7 == L'/')) &&
           (pwVar5[1] == L'/')) ||
          (((param_4 & SwallowSemicolonComments) != None && (wVar7 == L';')))))) {
        bVar4 = true;
      }
      if ((((param_4 & AllowBracketedMultiline) == None) || (iVar8 < 1)) ||
         ((wVar7 != L'\n' && (wVar7 != L'\r')))) {
        if ((((param_4 & AllowEscapedEOLMultiline) != None) && (wVar7 == L'\\')) &&
           ((wVar1 = pwVar5[1], wVar1 == L'\n' || (wVar1 == L'\r')))) {
          wVar7 = pwVar5[2];
          if ((wVar7 == L'\n') || (lVar6 = 1, wVar7 == L'\r')) {
            bVar9 = wVar1 == wVar7;
            goto LAB_1418b4e39;
          }
          goto LAB_1418b4e40;
        }
        if (bVar2) {
          if (((bVar4) || (wVar7 != L'\\')) || ((pwVar5[1] != L'\"' && (pwVar5[1] != L'\\')))) {
LAB_1418b4eed:
            pwVar5 = pwVar5 + 1;
            bVar2 = (bool)(bVar2 ^ wVar7 == L'\"');
            if (!bVar4) {
              if (param_2->End < param_2->CurPos + 1) {
                TStringBuilderBase<wchar_t>::Extend(param_2,1);
              }
              *param_2->CurPos = wVar7;
              param_2->CurPos = param_2->CurPos + 1;
            }
          }
          else {
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_2,pwVar5,2);
            pwVar5 = pwVar5 + 2;
          }
        }
        else if (((param_4 & AllowBracketedMultiline) == None) || (wVar7 != L'{')) {
          if ((wVar7 != L'}') || (iVar8 < 1)) goto LAB_1418b4eed;
          iVar8 = iVar8 + -1;
          pwVar5 = pwVar5 + 1;
        }
        else {
          iVar8 = iVar8 + 1;
          pwVar5 = pwVar5 + 1;
        }
      }
      else {
        wVar1 = pwVar5[1];
        if ((wVar1 == L'\n') || (lVar6 = 1, wVar1 == L'\r')) {
          bVar9 = wVar7 == wVar1;
LAB_1418b4e39:
          lVar6 = 1;
          if (!bVar9) {
            lVar6 = 2;
          }
        }
LAB_1418b4e40:
        if (param_2->End < param_2->CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(param_2,1);
        }
        *param_2->CurPos = L' ';
        param_2->CurPos = param_2->CurPos + 1;
        *param_3 = *param_3 + 1;
        if (*pwVar5 == L'\\') {
          pwVar5 = pwVar5 + 1;
        }
        pwVar5 = pwVar5 + lVar6;
      }
      bVar9 = true;
      bVar3 = true;
    } while (*pwVar5 != L'\0');
    wVar7 = L'\0';
  }
LAB_1418b4f6f:
  if (wVar7 == L'\0') {
    if (bVar9) {
      *param_3 = *param_3 + 1;
    }
  }
  else {
    do {
      wVar7 = *pwVar5;
      if ((wVar7 == L'\n') || (wVar7 == L'\r')) {
        wVar1 = pwVar5[1];
        iVar8 = 1;
        if (((wVar1 == L'\n') || (lVar6 = 1, wVar1 == L'\r')) && (lVar6 = 1, wVar7 != wVar1)) {
          lVar6 = 2;
        }
      }
      else {
        if (((param_4 & BreakOnPipe) == None) || (wVar7 != L'|')) break;
        iVar8 = 0;
        lVar6 = 1;
      }
      *param_3 = *param_3 + iVar8;
      pwVar5 = pwVar5 + lVar6;
    } while ((param_4 & SwallowExtraEOLs) != None);
  }
  *param_1 = pwVar5;
  if ((*pwVar5 == L'\0') && (!bVar9)) {
    return false;
  }
  return true;
}

// LineExtended @ 1418e4980

/* WARNING: Enum "ELineExtendedFlags": Some values do not have unique names */

bool __cdecl
FParse::LineExtended(wchar_t **param_1,FString *param_2,int *param_3,ELineExtendedFlags param_4)

{
  wchar_t wVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  wchar_t wVar5;
  wchar_t *pwVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  
  pwVar6 = *param_1;
  bVar9 = false;
  bVar4 = false;
  bVar3 = false;
  iVar7 = 0;
  ::FString::Reset(param_2,0);
  *param_3 = 0;
  if (*pwVar6 != L'\0') {
    bVar2 = false;
    do {
      bVar9 = bVar2;
      if (((param_4 & BreakOnPipe) == None) || (bVar4)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      wVar5 = *pwVar6;
      if ((((wVar5 == L'\n') || (wVar5 == L'\r')) || ((bVar2 && (wVar5 == L'|')))) && (iVar7 < 1))
      goto LAB_1418b5233;
      if ((!bVar4) &&
         (((((param_4 & SwallowDoubleSlashComments) != None && (wVar5 == L'/')) &&
           (pwVar6[1] == L'/')) ||
          (((param_4 & SwallowSemicolonComments) != None && (wVar5 == L';')))))) {
        bVar3 = true;
      }
      if ((((param_4 & AllowBracketedMultiline) == None) || (iVar7 < 1)) ||
         ((wVar5 != L'\n' && (wVar5 != L'\r')))) {
        if ((((param_4 & AllowEscapedEOLMultiline) != None) && (wVar5 == L'\\')) &&
           ((wVar1 = pwVar6[1], wVar1 == L'\n' || (wVar1 == L'\r')))) {
          wVar5 = pwVar6[2];
          if ((wVar5 == L'\n') || (lVar8 = 1, wVar5 == L'\r')) {
            bVar9 = wVar1 == wVar5;
            goto LAB_1418b5160;
          }
          goto LAB_1418b5167;
        }
        if (bVar4) {
          if (((bVar3) || (wVar5 != L'\\')) || ((pwVar6[1] != L'\"' && (pwVar6[1] != L'\\')))) {
LAB_1418b51f4:
            pwVar6 = pwVar6 + 1;
            bVar4 = (bool)(bVar4 ^ wVar5 == L'\"');
            if (!bVar3) {
              ::FString::AppendChar(param_2,wVar5);
            }
          }
          else {
            ::FString::AppendChars(param_2,pwVar6,2);
            pwVar6 = pwVar6 + 2;
          }
        }
        else if (((param_4 & AllowBracketedMultiline) == None) || (wVar5 != L'{')) {
          if ((wVar5 != L'}') || (iVar7 < 1)) goto LAB_1418b51f4;
          iVar7 = iVar7 + -1;
          pwVar6 = pwVar6 + 1;
        }
        else {
          iVar7 = iVar7 + 1;
          pwVar6 = pwVar6 + 1;
        }
      }
      else {
        wVar1 = pwVar6[1];
        if ((wVar1 == L'\n') || (lVar8 = 1, wVar1 == L'\r')) {
          bVar9 = wVar5 == wVar1;
LAB_1418b5160:
          lVar8 = 1;
          if (!bVar9) {
            lVar8 = 2;
          }
        }
LAB_1418b5167:
        ::FString::AppendChar(param_2,L' ');
        *param_3 = *param_3 + 1;
        if (*pwVar6 == L'\\') {
          pwVar6 = pwVar6 + 1;
        }
        pwVar6 = pwVar6 + lVar8;
      }
      bVar9 = true;
      bVar2 = true;
    } while (*pwVar6 != L'\0');
    wVar5 = L'\0';
LAB_1418b5233:
    if (wVar5 != L'\0') {
      do {
        wVar5 = *pwVar6;
        if ((wVar5 == L'\n') || (wVar5 == L'\r')) {
          wVar1 = pwVar6[1];
          iVar7 = 1;
          if (((wVar1 == L'\n') || (lVar8 = 1, wVar1 == L'\r')) && (lVar8 = 1, wVar5 != wVar1)) {
            lVar8 = 2;
          }
        }
        else {
          if (((param_4 & BreakOnPipe) == None) || (wVar5 != L'|')) break;
          iVar7 = 0;
          lVar8 = 1;
        }
        *param_3 = *param_3 + iVar7;
        pwVar6 = pwVar6 + lVar8;
      } while ((param_4 & SwallowExtraEOLs) != None);
      goto LAB_1418b5299;
    }
  }
  if (bVar9) {
    *param_3 = *param_3 + 1;
  }
LAB_1418b5299:
  *param_1 = pwVar6;
  if ((*pwVar6 != L'\0') || (bVar9)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}

// Next @ 1418e9670

void __cdecl FParse::Next(wchar_t **param_1)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  do {
    while( true ) {
      pwVar2 = *param_1;
      wVar1 = *pwVar2;
      if ((wVar1 != L' ') && (((wVar1 + L'\xfff7' & 0xfffaU) != 0 || (wVar1 == L'\x0e')))) break;
      *param_1 = pwVar2 + 1;
    }
    pwVar3 = pwVar2;
    if (wVar1 != L';') {
      return;
    }
    do {
      pwVar3 = pwVar3 + 1;
      if ((*pwVar2 == L'\n') || (*pwVar2 == L'\r')) break;
      *param_1 = pwVar3;
      pwVar2 = pwVar2 + 1;
    } while (*pwVar3 != L'\0');
  } while( true );
}

// Param @ 1418e9de0

bool __cdecl FParse::Param(wchar_t *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  bool bVar2;
  wchar_t *pwVar3;
  bool bVar4;
  int iVar5;
  size_t sVar6;
  wchar_t wVar7;
  wchar_t *pwVar8;
  wchar_t wVar9;
  
  if ((*param_2 == L'-') || (*param_2 == L'/')) {
    param_2 = param_2 + 1;
  }
  if ((*param_1 == L'\0') || (pwVar8 = param_1, param_2 == (wchar_t *)0x0)) {
LAB_1418e9ee4:
    bVar4 = false;
  }
  else {
    do {
      do {
        if (pwVar8 == (wchar_t *)0x0) goto LAB_1418e9ee4;
        wVar1 = *param_2;
        bVar4 = false;
        wVar9 = wVar1 + L'￠';
        if (0x19 < (ushort)(wVar1 + L'ﾟ')) {
          wVar9 = wVar1;
        }
        sVar6 = wcslen(param_2);
        wVar1 = *pwVar8;
        bVar2 = false;
        pwVar3 = pwVar8;
        while( true ) {
          if (wVar1 == L'\0') goto LAB_1418e9ee4;
          pwVar8 = pwVar3 + 1;
          wVar7 = wVar1 + L'￠';
          if (0x19 < (ushort)(wVar1 + L'ﾟ')) {
            wVar7 = wVar1;
          }
          if ((((!bVar2) && (!bVar4)) && (wVar7 == wVar9)) &&
             (iVar5 = FGenericPlatformStricmp::Strnicmp
                                (pwVar8,param_2 + 1,(longlong)((int)sVar6 + -1)), iVar5 == 0))
          break;
          if (((ushort)(wVar7 + L'﾿') < 0x1a) || ((ushort)(wVar7 + L'￐') < 10)) {
            bVar4 = true;
          }
          else {
            bVar4 = false;
          }
          if (wVar7 == L'\"') {
            bVar2 = !bVar2;
          }
          wVar1 = *pwVar8;
          pwVar3 = pwVar8;
        }
        if (pwVar3 == (wchar_t *)0x0) goto LAB_1418e9ee4;
      } while (((pwVar3 <= param_1) || ((pwVar3[-1] + L'ￓ' & 0xfffdU) != 0)) ||
              ((param_1 <= pwVar3 + -2 && (iVar5 = iswspace(pwVar3[-2]), iVar5 == 0))));
      sVar6 = wcslen(param_2);
    } while (((pwVar3 + (int)sVar6 != (wchar_t *)0x0) &&
             (wVar1 = pwVar3[(int)sVar6], wVar1 != L'\0')) && (iVar5 = iswspace(wVar1), iVar5 == 0))
    ;
    bVar4 = true;
  }
  return bVar4;
}

// QuotedString @ 1418f0fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FParse::QuotedString(wchar_t *param_1,TStringBuilderBase<wchar_t> *param_2,int *param_3)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  ushort uVar3;
  int iVar4;
  ulong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  ulonglong uVar10;
  undefined1 auStack_1e8 [32];
  wchar_t awStack_1c8 [2];
  wchar32 wStack_1c4;
  int *piStack_1c0;
  wchar_t *pwStack_1b8;
  TStringBuilderBase<wchar_t> TStack_1a8;
  wchar_t awStack_188 [4];
  undefined1 auStack_180 [24];
  TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128> TStack_168;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  uVar10 = 0;
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  pwVar8 = param_1 + 1;
  piStack_1c0 = param_3;
  pwStack_1b8 = param_1;
  if (*param_1 == L'\"') {
LAB_1418b5343:
    uVar3 = (ushort)*pwVar8 >> 6;
    uVar7 = uVar10;
    if (uVar3 == 0) {
      uVar7 = 0x400002401;
    }
    uVar6 = uVar10;
    if (uVar3 == 1) {
      uVar6 = 0x10000000;
    }
    pwVar9 = pwVar8;
    for (uVar7 = (uVar7 | uVar6) >> ((ushort)*pwVar8 & 0x3f); (uVar7 & 1) == 0;
        uVar7 = (uVar7 | uVar6) >> ((ushort)*pwVar1 & 0x3f)) {
      pwVar1 = pwVar9 + 1;
      pwVar9 = pwVar9 + 1;
      uVar3 = (ushort)*pwVar1 >> 6;
      uVar7 = uVar10;
      if (uVar3 == 0) {
        uVar7 = 0x400002401;
      }
      uVar6 = uVar10;
      if (uVar3 == 1) {
        uVar6 = 0x10000000;
      }
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              (param_2,pwVar8,(int)((longlong)pwVar9 - (longlong)pwVar8 >> 1));
    if (*pwVar9 == L'\\') {
      wVar2 = pwVar9[1];
      pwVar1 = pwVar9 + 1;
      if (wVar2 == L'\\') {
        if (param_2->End < param_2->CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(param_2,1);
        }
        *param_2->CurPos = L'\\';
        param_2->CurPos = param_2->CurPos + 1;
        pwVar8 = pwVar9 + 2;
      }
      else if (wVar2 == L'\"') {
        if (param_2->End < param_2->CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(param_2,1);
        }
        *param_2->CurPos = L'\"';
        param_2->CurPos = param_2->CurPos + 1;
        pwVar8 = pwVar9 + 2;
      }
      else if (wVar2 == L'\'') {
        if (param_2->End < param_2->CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(param_2,1);
        }
        *param_2->CurPos = L'\'';
        param_2->CurPos = param_2->CurPos + 1;
        pwVar8 = pwVar9 + 2;
      }
      else if (wVar2 == L'n') {
        if (param_2->End < param_2->CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(param_2,1);
        }
        *param_2->CurPos = L'\n';
        param_2->CurPos = param_2->CurPos + 1;
        pwVar8 = pwVar9 + 2;
      }
      else if (wVar2 == L'r') {
        if (param_2->End < param_2->CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(param_2,1);
        }
        *param_2->CurPos = L'\r';
        param_2->CurPos = param_2->CurPos + 1;
        pwVar8 = pwVar9 + 2;
      }
      else {
        if (wVar2 == L't') {
          if (param_2->End < param_2->CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(param_2,1);
          }
          *param_2->CurPos = L'\t';
          param_2->CurPos = param_2->CurPos + 1;
          pwVar8 = pwVar9 + 2;
          goto LAB_1418b5343;
        }
        if (7 < (ushort)wVar2 - 0x30) {
          if (wVar2 == L'x') {
            pwVar8 = pwVar9 + 2;
            iVar4 = iswxdigit(pwVar9[2]);
            if (iVar4 != 0) {
              wVar2 = *pwVar8;
              TStack_1a8.Base = awStack_188;
              TStack_1a8.CurPos = awStack_188;
              TStack_1a8.End = (wchar_t *)&TStack_168;
              TStack_1a8.bIsDynamic = false;
              TStack_1a8.bIsExternal = false;
              uVar7 = (-(ulonglong)((ushort)wVar2 < 0x40) & 0x400002401) >>
                      (ulonglong)((byte)wVar2 & 0x3f);
              while (((uVar7 & 1) == 0 && (iVar4 = iswxdigit(wVar2), iVar4 != 0))) {
                wVar2 = *pwVar8;
                pwVar8 = pwVar8 + 1;
                if (TStack_1a8.End <
                    (TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128> *)
                    (TStack_1a8.CurPos + 1)) {
                  TStringBuilderBase<wchar_t>::Extend(&TStack_1a8,1);
                }
                *TStack_1a8.CurPos = wVar2;
                wVar2 = *pwVar8;
                TStack_1a8.CurPos = TStack_1a8.CurPos + 1;
                uVar7 = (-(ulonglong)((ushort)wVar2 < 0x40) & 0x400002401) >> ((byte)wVar2 & 0x3f);
              }
              if (TStack_1a8.End <
                  (TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128> *)
                  (TStack_1a8.CurPos + 1)) {
                TStringBuilderBase<wchar_t>::Extend(&TStack_1a8,1);
              }
              *TStack_1a8.CurPos = L'\0';
              iVar4 = 0x10;
              goto LAB_1418b5728;
            }
          }
          if (*pwVar1 == L'u') {
            pwVar8 = pwVar9 + 2;
            iVar4 = iswxdigit(pwVar9[2]);
            if (iVar4 != 0) {
              wVar2 = *pwVar8;
              TStack_1a8.Base = awStack_188;
              TStack_1a8.CurPos = awStack_188;
              TStack_1a8.End = (wchar_t *)auStack_180;
              TStack_1a8.bIsDynamic = false;
              TStack_1a8.bIsExternal = false;
              uVar7 = (-(ulonglong)((ushort)wVar2 < 0x40) & 0x400002401) >>
                      (ulonglong)((byte)wVar2 & 0x3f);
              while ((((uVar7 & 1) == 0 && (iVar4 = iswxdigit(wVar2), iVar4 != 0)) &&
                     ((int)((longlong)TStack_1a8.CurPos - (longlong)TStack_1a8.Base >> 1) < 4))) {
                wVar2 = *pwVar8;
                pwVar8 = pwVar8 + 1;
                if (TStack_1a8.End <
                    (TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128> *)
                    (TStack_1a8.CurPos + 1)) {
                  TStringBuilderBase<wchar_t>::Extend(&TStack_1a8,1);
                }
                *TStack_1a8.CurPos = wVar2;
                wVar2 = *pwVar8;
                TStack_1a8.CurPos = TStack_1a8.CurPos + 1;
                uVar7 = (-(ulonglong)((ushort)wVar2 < 0x40) & 0x400002401) >> ((byte)wVar2 & 0x3f);
              }
              if (TStack_1a8.End <
                  (TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128> *)
                  (TStack_1a8.CurPos + 1)) {
                TStringBuilderBase<wchar_t>::Extend(&TStack_1a8,1);
              }
              *TStack_1a8.CurPos = L'\0';
              uVar5 = wcstoul(TStack_1a8.Base,(wchar_t **)0x0,0x10);
              awStack_1c8[0] = (wchar_t)uVar5;
              TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                        (param_2,awStack_1c8,(uint)((wchar_t)uVar5 != L'\0'));
              TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&TStack_1a8);
              goto LAB_1418b5343;
            }
          }
          if (*pwVar1 == L'U') {
            pwVar8 = pwVar9 + 2;
            iVar4 = iswxdigit(pwVar9[2]);
            if (iVar4 != 0) {
              wVar2 = *pwVar8;
              TStack_1a8.Base = awStack_188;
              TStack_1a8.CurPos = awStack_188;
              TStack_1a8.End = (wchar_t *)(auStack_180 + 8);
              TStack_1a8.bIsDynamic = false;
              TStack_1a8.bIsExternal = false;
              uVar7 = (-(ulonglong)((ushort)wVar2 < 0x40) & 0x400002401) >>
                      (ulonglong)((byte)wVar2 & 0x3f);
              while ((((uVar7 & 1) == 0 && (iVar4 = iswxdigit(wVar2), iVar4 != 0)) &&
                     ((int)((longlong)TStack_1a8.CurPos - (longlong)TStack_1a8.Base >> 1) < 8))) {
                wVar2 = *pwVar8;
                pwVar8 = pwVar8 + 1;
                if (TStack_1a8.End <
                    (TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128> *)
                    (TStack_1a8.CurPos + 1)) {
                  TStringBuilderBase<wchar_t>::Extend(&TStack_1a8,1);
                }
                *TStack_1a8.CurPos = wVar2;
                wVar2 = *pwVar8;
                TStack_1a8.CurPos = TStack_1a8.CurPos + 1;
                uVar7 = (-(ulonglong)((ushort)wVar2 < 0x40) & 0x400002401) >> ((byte)wVar2 & 0x3f);
              }
              if (TStack_1a8.End <
                  (TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128> *)
                  (TStack_1a8.CurPos + 1)) {
                TStringBuilderBase<wchar_t>::Extend(&TStack_1a8,1);
              }
              *TStack_1a8.CurPos = L'\0';
              wStack_1c4 = wcstoul(TStack_1a8.Base,(wchar_t **)0x0,0x10);
              TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128>::
              TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128><char32_t>
                        (&TStack_168,&wStack_1c4,1);
              TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                        (param_2,TStack_168.Ptr,TStack_168.StringLength);
              if ((void *)TStack_168._padding_ != (void *)0x0) {
                FMemory::Free((void *)TStack_168._padding_);
              }
              TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&TStack_1a8);
              goto LAB_1418b5343;
            }
          }
          if (param_2->End < param_2->CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(param_2,1);
          }
          *param_2->CurPos = L'\\';
          param_2->CurPos = param_2->CurPos + 1;
          wVar2 = *pwVar1;
          pwVar8 = pwVar9 + 2;
          if (param_2->End < param_2->CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(param_2,1);
          }
          *param_2->CurPos = wVar2;
          param_2->CurPos = param_2->CurPos + 1;
          goto LAB_1418b5343;
        }
        TStack_1a8.bIsDynamic = false;
        TStack_1a8.bIsExternal = false;
        TStack_1a8.Base = awStack_188;
        TStack_1a8.End = (wchar_t *)&TStack_168;
        uVar7 = (-(ulonglong)((ushort)wVar2 < 0x40) & 0x400002401) >> ((byte)wVar2 & 0x3f);
        pwVar8 = pwVar1;
        for (TStack_1a8.CurPos = awStack_188;
            (((uVar7 & 1) == 0 && ((ushort)wVar2 - 0x30 < 8)) &&
            ((int)((longlong)TStack_1a8.CurPos - (longlong)TStack_1a8.Base >> 1) < 3));
            TStack_1a8.CurPos = TStack_1a8.CurPos + 1) {
          wVar2 = *pwVar8;
          pwVar8 = pwVar8 + 1;
          if (TStack_1a8.End <
              (TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128> *)
              (TStack_1a8.CurPos + 1)) {
            TStringBuilderBase<wchar_t>::Extend(&TStack_1a8,1);
          }
          *TStack_1a8.CurPos = wVar2;
          wVar2 = *pwVar8;
          uVar7 = (-(ulonglong)((ushort)wVar2 < 0x40) & 0x400002401) >> ((byte)wVar2 & 0x3f);
        }
        if (TStack_1a8.End <
            (TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128> *)
            (TStack_1a8.CurPos + 1)) {
          TStringBuilderBase<wchar_t>::Extend(&TStack_1a8,1);
        }
        *TStack_1a8.CurPos = L'\0';
        iVar4 = 8;
LAB_1418b5728:
        uVar5 = wcstoul(TStack_1a8.Base,(wchar_t **)0x0,iVar4);
        if (param_2->End < param_2->CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(param_2,1);
        }
        *param_2->CurPos = (wchar_t)uVar5;
        param_2->CurPos = param_2->CurPos + 1;
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&TStack_1a8);
      }
      goto LAB_1418b5343;
    }
    if (*pwVar9 == L'\"') {
      if (piStack_1c0 != (int *)0x0) {
        *piStack_1c0 = (int)((longlong)pwVar9 + (2 - (longlong)pwStack_1b8) >> 1);
      }
      return true;
    }
  }
  return false;
}

// QuotedString @ 1418f0fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FParse::QuotedString(wchar_t *param_1,FString *param_2,int *param_3)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  ushort uVar3;
  int iVar4;
  ulong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  ulonglong uVar10;
  undefined1 auStack_1d8 [32];
  wchar_t awStack_1b8 [2];
  wchar32 awStack_1b4 [3];
  TStringBuilderBase<wchar_t> TStack_1a8;
  wchar_t awStack_188 [4];
  undefined1 auStack_180 [24];
  TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128> TStack_168;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  uVar10 = 0;
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  pwVar8 = param_1 + 1;
  if (*param_1 == L'\"') {
LAB_1418b5b39:
    uVar3 = (ushort)*pwVar8 >> 6;
    uVar7 = uVar10;
    if (uVar3 == 0) {
      uVar7 = 0x400002401;
    }
    uVar6 = uVar10;
    if (uVar3 == 1) {
      uVar6 = 0x10000000;
    }
    pwVar9 = pwVar8;
    for (uVar7 = (uVar7 | uVar6) >> ((ushort)*pwVar8 & 0x3f); (uVar7 & 1) == 0;
        uVar7 = (uVar7 | uVar6) >> ((ushort)*pwVar1 & 0x3f)) {
      pwVar1 = pwVar9 + 1;
      pwVar9 = pwVar9 + 1;
      uVar3 = (ushort)*pwVar1 >> 6;
      uVar7 = uVar10;
      if (uVar3 == 0) {
        uVar7 = 0x400002401;
      }
      uVar6 = uVar10;
      if (uVar3 == 1) {
        uVar6 = 0x10000000;
      }
    }
    ::FString::AppendChars(param_2,pwVar8,(int)((longlong)pwVar9 - (longlong)pwVar8 >> 1));
    if (*pwVar9 == L'\\') {
      wVar2 = pwVar9[1];
      pwVar1 = pwVar9 + 1;
      if (wVar2 == L'\\') {
        ::FString::AppendChar(param_2,L'\\');
        pwVar8 = pwVar9 + 2;
      }
      else if (wVar2 == L'\"') {
        ::FString::AppendChar(param_2,L'\"');
        pwVar8 = pwVar9 + 2;
      }
      else if (wVar2 == L'\'') {
        ::FString::AppendChar(param_2,L'\'');
        pwVar8 = pwVar9 + 2;
      }
      else if (wVar2 == L'n') {
        ::FString::AppendChar(param_2,L'\n');
        pwVar8 = pwVar9 + 2;
      }
      else if (wVar2 == L'r') {
        ::FString::AppendChar(param_2,L'\r');
        pwVar8 = pwVar9 + 2;
      }
      else {
        if (wVar2 == L't') {
          ::FString::AppendChar(param_2,L'\t');
          pwVar8 = pwVar9 + 2;
          goto LAB_1418b5b39;
        }
        if (7 < (ushort)wVar2 - 0x30) {
          if (wVar2 == L'x') {
            pwVar8 = pwVar9 + 2;
            iVar4 = iswxdigit(pwVar9[2]);
            if (iVar4 != 0) {
              wVar2 = *pwVar8;
              TStack_1a8.Base = awStack_188;
              TStack_1a8.CurPos = awStack_188;
              TStack_1a8.End = (wchar_t *)&TStack_168;
              TStack_1a8.bIsDynamic = false;
              TStack_1a8.bIsExternal = false;
              uVar7 = (-(ulonglong)((ushort)wVar2 < 0x40) & 0x400002401) >>
                      (ulonglong)((byte)wVar2 & 0x3f);
              while (((uVar7 & 1) == 0 && (iVar4 = iswxdigit(wVar2), iVar4 != 0))) {
                wVar2 = *pwVar8;
                pwVar8 = pwVar8 + 1;
                if (TStack_1a8.End <
                    (TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128> *)
                    (TStack_1a8.CurPos + 1)) {
                  TStringBuilderBase<wchar_t>::Extend(&TStack_1a8,1);
                }
                *TStack_1a8.CurPos = wVar2;
                wVar2 = *pwVar8;
                TStack_1a8.CurPos = TStack_1a8.CurPos + 1;
                uVar7 = (-(ulonglong)((ushort)wVar2 < 0x40) & 0x400002401) >> ((byte)wVar2 & 0x3f);
              }
              if (TStack_1a8.End <
                  (TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128> *)
                  (TStack_1a8.CurPos + 1)) {
                TStringBuilderBase<wchar_t>::Extend(&TStack_1a8,1);
              }
              *TStack_1a8.CurPos = L'\0';
              iVar4 = 0x10;
              goto LAB_1418b5e68;
            }
          }
          if (*pwVar1 == L'u') {
            pwVar8 = pwVar9 + 2;
            iVar4 = iswxdigit(pwVar9[2]);
            if (iVar4 != 0) {
              wVar2 = *pwVar8;
              TStack_1a8.Base = awStack_188;
              TStack_1a8.CurPos = awStack_188;
              TStack_1a8.End = (wchar_t *)auStack_180;
              TStack_1a8.bIsDynamic = false;
              TStack_1a8.bIsExternal = false;
              uVar7 = (-(ulonglong)((ushort)wVar2 < 0x40) & 0x400002401) >>
                      (ulonglong)((byte)wVar2 & 0x3f);
              while ((((uVar7 & 1) == 0 && (iVar4 = iswxdigit(wVar2), iVar4 != 0)) &&
                     ((int)((longlong)TStack_1a8.CurPos - (longlong)TStack_1a8.Base >> 1) < 4))) {
                wVar2 = *pwVar8;
                pwVar8 = pwVar8 + 1;
                if (TStack_1a8.End <
                    (TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128> *)
                    (TStack_1a8.CurPos + 1)) {
                  TStringBuilderBase<wchar_t>::Extend(&TStack_1a8,1);
                }
                *TStack_1a8.CurPos = wVar2;
                wVar2 = *pwVar8;
                TStack_1a8.CurPos = TStack_1a8.CurPos + 1;
                uVar7 = (-(ulonglong)((ushort)wVar2 < 0x40) & 0x400002401) >> ((byte)wVar2 & 0x3f);
              }
              if (TStack_1a8.End <
                  (TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128> *)
                  (TStack_1a8.CurPos + 1)) {
                TStringBuilderBase<wchar_t>::Extend(&TStack_1a8,1);
              }
              *TStack_1a8.CurPos = L'\0';
              uVar5 = wcstoul(TStack_1a8.Base,(wchar_t **)0x0,0x10);
              awStack_1b8[0] = (wchar_t)uVar5;
              ::FString::AppendChars(param_2,awStack_1b8,(uint)((wchar_t)uVar5 != L'\0'));
              TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&TStack_1a8);
              goto LAB_1418b5b39;
            }
          }
          if (*pwVar1 == L'U') {
            pwVar8 = pwVar9 + 2;
            iVar4 = iswxdigit(pwVar9[2]);
            if (iVar4 != 0) {
              wVar2 = *pwVar8;
              TStack_1a8.Base = awStack_188;
              TStack_1a8.CurPos = awStack_188;
              TStack_1a8.End = (wchar_t *)(auStack_180 + 8);
              TStack_1a8.bIsDynamic = false;
              TStack_1a8.bIsExternal = false;
              uVar7 = (-(ulonglong)((ushort)wVar2 < 0x40) & 0x400002401) >>
                      (ulonglong)((byte)wVar2 & 0x3f);
              while ((((uVar7 & 1) == 0 && (iVar4 = iswxdigit(wVar2), iVar4 != 0)) &&
                     ((int)((longlong)TStack_1a8.CurPos - (longlong)TStack_1a8.Base >> 1) < 8))) {
                wVar2 = *pwVar8;
                pwVar8 = pwVar8 + 1;
                if (TStack_1a8.End <
                    (TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128> *)
                    (TStack_1a8.CurPos + 1)) {
                  TStringBuilderBase<wchar_t>::Extend(&TStack_1a8,1);
                }
                *TStack_1a8.CurPos = wVar2;
                wVar2 = *pwVar8;
                TStack_1a8.CurPos = TStack_1a8.CurPos + 1;
                uVar7 = (-(ulonglong)((ushort)wVar2 < 0x40) & 0x400002401) >> ((byte)wVar2 & 0x3f);
              }
              if (TStack_1a8.End <
                  (TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128> *)
                  (TStack_1a8.CurPos + 1)) {
                TStringBuilderBase<wchar_t>::Extend(&TStack_1a8,1);
              }
              *TStack_1a8.CurPos = L'\0';
              awStack_1b4[0] = wcstoul(TStack_1a8.Base,(wchar_t **)0x0,0x10);
              TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128>::
              TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128><char32_t>
                        (&TStack_168,awStack_1b4,1);
              ::FString::AppendChars(param_2,TStack_168.Ptr,TStack_168.StringLength);
              if ((void *)TStack_168._padding_ != (void *)0x0) {
                FMemory::Free((void *)TStack_168._padding_);
              }
              TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&TStack_1a8);
              goto LAB_1418b5b39;
            }
          }
          ::FString::AppendChar(param_2,L'\\');
          pwVar8 = pwVar9 + 2;
          ::FString::AppendChar(param_2,*pwVar1);
          goto LAB_1418b5b39;
        }
        TStack_1a8.bIsDynamic = false;
        TStack_1a8.bIsExternal = false;
        TStack_1a8.Base = awStack_188;
        TStack_1a8.End = (wchar_t *)&TStack_168;
        uVar7 = (-(ulonglong)((ushort)wVar2 < 0x40) & 0x400002401) >> ((byte)wVar2 & 0x3f);
        pwVar8 = pwVar1;
        for (TStack_1a8.CurPos = awStack_188;
            (((uVar7 & 1) == 0 && ((ushort)wVar2 - 0x30 < 8)) &&
            ((int)((longlong)TStack_1a8.CurPos - (longlong)TStack_1a8.Base >> 1) < 3));
            TStack_1a8.CurPos = TStack_1a8.CurPos + 1) {
          wVar2 = *pwVar8;
          pwVar8 = pwVar8 + 1;
          if (TStack_1a8.End <
              (TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128> *)
              (TStack_1a8.CurPos + 1)) {
            TStringBuilderBase<wchar_t>::Extend(&TStack_1a8,1);
          }
          *TStack_1a8.CurPos = wVar2;
          wVar2 = *pwVar8;
          uVar7 = (-(ulonglong)((ushort)wVar2 < 0x40) & 0x400002401) >> ((byte)wVar2 & 0x3f);
        }
        if (TStack_1a8.End <
            (TStringConversion<TUTF32ToUTF16_Convert<char32_t,wchar_t>,128> *)
            (TStack_1a8.CurPos + 1)) {
          TStringBuilderBase<wchar_t>::Extend(&TStack_1a8,1);
        }
        *TStack_1a8.CurPos = L'\0';
        iVar4 = 8;
LAB_1418b5e68:
        uVar5 = wcstoul(TStack_1a8.Base,(wchar_t **)0x0,iVar4);
        ::FString::AppendChar(param_2,(wchar_t)uVar5);
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&TStack_1a8);
      }
      goto LAB_1418b5b39;
    }
    if (*pwVar9 == L'\"') {
      if (param_3 != (int *)0x0) {
        *param_3 = (int)((longlong)pwVar9 + (2 - (longlong)param_1) >> 1);
      }
      return true;
    }
  }
  return false;
}

// SchemeNameFromURI @ 1418f4170

bool __cdecl FParse::SchemeNameFromURI(wchar_t *param_1,FString *param_2)

{
  wchar_t wVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  int iVar6;
  FString local_18;
  
  iVar6 = 0;
  pwVar5 = param_1;
  do {
    iVar3 = iswalpha(*pwVar5);
    if (iVar3 == 0) {
      iVar3 = iswdigit(*pwVar5);
      if ((iVar3 == 0) && ((wVar1 = *pwVar5, (wVar1 + L'ￕ' & 0xfffcU) != 0 || (wVar1 == L',')))) {
        if ((iVar6 < 1) || (wVar1 != L':')) {
          bVar2 = false;
        }
        else {
          pFVar4 = ::FString::ConstructFromPtrSize(&local_18,param_1,iVar6);
          ::FString::operator=(param_2,pFVar4);
          if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_18.Data.AllocatorInstance.Data);
          }
          bVar2 = true;
        }
        return bVar2;
      }
    }
    iVar6 = iVar6 + 1;
    pwVar5 = pwVar5 + 1;
  } while( true );
}

// Text @ 1418fa520

bool __cdecl FParse::Text(wchar_t *param_1,FText *param_2,wchar_t *param_3)

{
  wchar_t *pwVar1;
  
  pwVar1 = FTextStringHelper::ReadFromBuffer(param_1,param_2,param_3,(wchar_t *)0x0,false);
  return pwVar1 != (wchar_t *)0x0;
}

// Token @ 1418fc530

FString * __cdecl FParse::Token(FString *__return_storage_ptr__,wchar_t **param_1,bool param_2)

{
  bool bVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t wVar4;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  ::FString::Reserve(&local_18,0x3ff);
  ::FString::Reset(&local_18,0);
  while (iVar2 = iswspace(**param_1), iVar2 != 0) {
    *param_1 = *param_1 + 1;
  }
  wVar4 = **param_1;
  if (wVar4 == L'\"') {
    pwVar3 = *param_1 + 1;
    *param_1 = pwVar3;
    wVar4 = *pwVar3;
    while ((wVar4 != L'\0' && (wVar4 != L'\"'))) {
      *param_1 = pwVar3 + 1;
      if ((wVar4 == L'\\') && (param_2)) {
        wVar4 = pwVar3[1];
        pwVar3 = pwVar3 + 2;
        *param_1 = pwVar3;
        if (wVar4 == L'\0') break;
      }
      ::FString::AppendChar(&local_18,wVar4);
      pwVar3 = *param_1;
      wVar4 = *pwVar3;
    }
    if (*pwVar3 == L'\"') {
      *param_1 = pwVar3 + 1;
    }
  }
  else {
    bVar1 = false;
    while (wVar4 != L'\0') {
      if ((!bVar1) && (iVar2 = iswspace(wVar4), iVar2 != 0)) {
        *param_1 = *param_1 + 1;
        break;
      }
      *param_1 = *param_1 + 1;
      if (wVar4 == L'\\') {
        if ((param_2) && (bVar1)) {
          ::FString::AppendChar(&local_18,L'\\');
          wVar4 = **param_1;
          if (wVar4 == L'\0') break;
          *param_1 = *param_1 + 1;
        }
      }
      else if (wVar4 == L'\"') {
        bVar1 = !bVar1;
      }
      ::FString::AppendChar(&local_18,wVar4);
      wVar4 = **param_1;
    }
  }
  ::FString::Shrink(&local_18);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayNum = local_18.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = local_18.Data.ArrayMax;
  return __return_storage_ptr__;
}

// Token @ 1418fc6e0

bool __cdecl FParse::Token(wchar_t **param_1,FString *param_2,bool param_3,wchar_t param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  wchar_t *pwVar4;
  wchar_t wVar5;
  
  ::FString::Reset(param_2,0);
  do {
    pwVar4 = *param_1;
    if (param_4 == L'\0') {
      iVar3 = iswspace(*pwVar4);
      pwVar4 = *param_1;
      if (iVar3 == 0) break;
    }
    else if (*pwVar4 != param_4) break;
    *param_1 = pwVar4 + 1;
  } while( true );
  wVar5 = *pwVar4;
  if (wVar5 == L'\"') {
    pwVar4 = pwVar4 + 1;
    *param_1 = pwVar4;
    wVar5 = *pwVar4;
    while ((wVar5 != L'\0' && (wVar5 != L'\"'))) {
      *param_1 = pwVar4 + 1;
      if ((wVar5 == L'\\') && (param_3)) {
        wVar5 = pwVar4[1];
        pwVar4 = pwVar4 + 2;
        *param_1 = pwVar4;
        if (wVar5 == L'\0') break;
      }
      ::FString::AppendChar(param_2,wVar5);
      pwVar4 = *param_1;
      wVar5 = *pwVar4;
    }
    if (*pwVar4 == L'\"') {
      *param_1 = pwVar4 + 1;
    }
  }
  else {
    bVar2 = false;
    while (wVar5 != L'\0') {
      if (!bVar2) {
        if (param_4 == L'\0') {
          iVar3 = iswspace(wVar5);
          if (iVar3 != 0) {
LAB_1418fc7ca:
            *param_1 = *param_1 + 1;
            break;
          }
        }
        else if (wVar5 == param_4) goto LAB_1418fc7ca;
      }
      *param_1 = *param_1 + 1;
      if (wVar5 == L'\\') {
        if ((param_3) && (bVar2)) {
          ::FString::AppendChar(param_2,L'\\');
          wVar5 = **param_1;
          if (wVar5 == L'\0') break;
          *param_1 = *param_1 + 1;
        }
      }
      else if (wVar5 == L'\"') {
        bVar2 = !bVar2;
      }
      ::FString::AppendChar(param_2,wVar5);
      wVar5 = **param_1;
    }
  }
  iVar1 = (param_2->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  return 0 < iVar3;
}

// Token @ 1418fc870

bool __cdecl
FParse::Token(wchar_t **param_1,wchar_t *param_2,int param_3,bool param_4,wchar_t param_5)

{
  bool bVar1;
  int iVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  wchar_t wVar5;
  wchar_t *pwVar6;
  int iVar7;
  
  iVar7 = 0;
  do {
    pwVar3 = *param_1;
    if (param_5 == L'\0') {
      iVar2 = iswspace(*pwVar3);
      pwVar3 = *param_1;
      if (iVar2 == 0) break;
    }
    else if (*pwVar3 != param_5) break;
    *param_1 = pwVar3 + 1;
  } while( true );
  wVar5 = *pwVar3;
  if (wVar5 == L'\"') {
    pwVar3 = pwVar3 + 1;
    *param_1 = pwVar3;
    wVar5 = *pwVar3;
    if (wVar5 != L'\0') {
      iVar2 = 1;
      pwVar6 = param_2;
      do {
        if ((wVar5 == L'\"') || (param_3 <= iVar2)) break;
        *param_1 = pwVar3 + 1;
        if ((wVar5 == L'\\') && (param_4)) {
          wVar5 = pwVar3[1];
          pwVar3 = pwVar3 + 2;
          *param_1 = pwVar3;
          if (wVar5 == L'\0') break;
        }
        *pwVar6 = wVar5;
        iVar7 = iVar7 + 1;
        pwVar3 = *param_1;
        pwVar6 = pwVar6 + 1;
        iVar2 = iVar2 + 1;
        wVar5 = *pwVar3;
      } while (wVar5 != L'\0');
    }
    if (*pwVar3 == L'\"') {
      *param_1 = pwVar3 + 1;
    }
  }
  else {
    bVar1 = false;
    if (wVar5 != L'\0') {
      lVar4 = 0;
      do {
        if (!bVar1) {
          if (param_5 == L'\0') {
            iVar2 = iswspace(wVar5);
            if (iVar2 != 0) break;
          }
          else if (wVar5 == param_5) break;
        }
        *param_1 = *param_1 + 1;
        if (wVar5 == L'\\') {
          if ((param_4) && (bVar1)) {
            if (iVar7 + 1 < param_3) {
              param_2[lVar4] = L'\\';
              lVar4 = lVar4 + 1;
              iVar7 = iVar7 + 1;
            }
            wVar5 = **param_1;
            if (wVar5 == L'\0') break;
            *param_1 = *param_1 + 1;
          }
        }
        else if (wVar5 == L'\"') {
          bVar1 = !bVar1;
        }
        if (iVar7 + 1 < param_3) {
          param_2[lVar4] = wVar5;
          lVar4 = lVar4 + 1;
          iVar7 = iVar7 + 1;
        }
        wVar5 = **param_1;
      } while (wVar5 != L'\0');
    }
  }
  param_2[iVar7] = L'\0';
  return iVar7 != 0;
}

// Value @ 1418fee60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FParse::Value(wchar_t *param_1,wchar_t *param_2,schar *param_3)

{
  bool bVar1;
  int iVar2;
  undefined1 auStackY_248 [32];
  wchar_t local_218 [256];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_248;
  bVar1 = Value(param_1,param_2,local_218,0x100,true,(wchar_t **)0x0);
  if (bVar1) {
    iVar2 = _wtoi(local_218);
    *param_3 = (char)iVar2;
    if ((char)iVar2 == '\0') {
      iVar2 = iswdigit(local_218[0]);
      if (iVar2 == 0) goto LAB_1418feec0;
    }
    bVar1 = true;
  }
  else {
LAB_1418feec0:
    bVar1 = false;
  }
  return bVar1;
}

// Value @ 1418feef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FParse::Value(wchar_t *param_1,wchar_t *param_2,uchar *param_3)

{
  bool bVar1;
  int iVar2;
  undefined1 auStackY_248 [32];
  wchar_t local_218 [256];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_248;
  bVar1 = Value(param_1,param_2,local_218,0x100,true,(wchar_t **)0x0);
  if (bVar1) {
    iVar2 = _wtoi(local_218);
    *param_3 = (uchar)iVar2;
    if ((uchar)iVar2 == '\0') {
      iVar2 = iswdigit(local_218[0]);
      if (iVar2 == 0) goto LAB_1418fef50;
    }
    bVar1 = true;
  }
  else {
LAB_1418fef50:
    bVar1 = false;
  }
  return bVar1;
}

// Value @ 1418fef80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FParse::Value(wchar_t *param_1,wchar_t *param_2,short *param_3)

{
  bool bVar1;
  int iVar2;
  undefined1 auStackY_248 [32];
  wchar_t local_218 [256];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_248;
  bVar1 = Value(param_1,param_2,local_218,0x100,true,(wchar_t **)0x0);
  if (bVar1) {
    iVar2 = _wtoi(local_218);
    *param_3 = (short)iVar2;
    if ((short)iVar2 == 0) {
      iVar2 = iswdigit(local_218[0]);
      if (iVar2 == 0) goto LAB_1418fefe2;
    }
    bVar1 = true;
  }
  else {
LAB_1418fefe2:
    bVar1 = false;
  }
  return bVar1;
}

// Value @ 1418ff010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FParse::Value(wchar_t *param_1,wchar_t *param_2,ushort *param_3)

{
  bool bVar1;
  int iVar2;
  undefined1 auStackY_248 [32];
  wchar_t local_218 [256];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_248;
  bVar1 = Value(param_1,param_2,local_218,0x100,true,(wchar_t **)0x0);
  if (bVar1) {
    iVar2 = _wtoi(local_218);
    *param_3 = (ushort)iVar2;
    if ((ushort)iVar2 == 0) {
      iVar2 = iswdigit(local_218[0]);
      if (iVar2 == 0) goto LAB_1418ff072;
    }
    bVar1 = true;
  }
  else {
LAB_1418ff072:
    bVar1 = false;
  }
  return bVar1;
}

// Value @ 1418ff0a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FParse::Value(wchar_t *param_1,wchar_t *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  undefined1 auStackY_248 [32];
  wchar_t local_218 [256];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_248;
  bVar1 = Value(param_1,param_2,local_218,0x100,true,(wchar_t **)0x0);
  if (bVar1) {
    iVar2 = _wtoi(local_218);
    *param_3 = iVar2;
  }
  return bVar1;
}

// Value @ 1418ff110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FParse::Value(wchar_t *param_1,wchar_t *param_2,uint *param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined1 auStackY_258 [32];
  wchar_t *local_228 [2];
  wchar_t local_218 [256];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_258;
  bVar1 = Value(param_1,param_2,local_218,0x100,true,(wchar_t **)0x0);
  if (bVar1) {
    uVar2 = wcstoul(local_218,local_228,10);
    *param_3 = uVar2;
  }
  return bVar1;
}

// Value @ 1418ff190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FParse::Value(wchar_t *param_1,wchar_t *param_2,float *param_3)

{
  bool bVar1;
  double dVar2;
  undefined1 auStackY_248 [32];
  wchar_t local_218 [256];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_248;
  bVar1 = Value(param_1,param_2,local_218,0x100,true,(wchar_t **)0x0);
  if (bVar1) {
    dVar2 = _wtof(local_218);
    *param_3 = (float)dVar2;
  }
  return bVar1;
}

// Value @ 1418ff210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FParse::Value(wchar_t *param_1,wchar_t *param_2,double *param_3)

{
  bool bVar1;
  double dVar2;
  undefined1 auStackY_248 [32];
  wchar_t local_218 [256];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_248;
  bVar1 = Value(param_1,param_2,local_218,0x100,true,(wchar_t **)0x0);
  if (bVar1) {
    dVar2 = wcstod(local_218,(wchar_t **)0x0);
    *param_3 = dVar2;
  }
  return bVar1;
}

// Value @ 1418ff290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FParse::Value(wchar_t *param_1,wchar_t *param_2,FGuid *param_3)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  size_t sVar4;
  undefined1 auStackY_258 [32];
  wchar_t *local_228 [2];
  wchar_t local_218 [8];
  wchar_t local_208 [8];
  wchar_t local_1f8 [8];
  wchar_t local_1e8 [232];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_258;
  bVar1 = Value(param_1,param_2,local_218,0x100,true,(wchar_t **)0x0);
  bVar2 = false;
  if (bVar1) {
    param_3->C = 0;
    param_3->D = 0;
    param_3->A = 0;
    param_3->B = 0;
    sVar4 = wcslen(local_218);
    if ((int)sVar4 == 0x20) {
      uVar3 = wcstoul(local_1e8,local_228,0x10);
      local_1e8[0] = L'\0';
      param_3->D = uVar3;
      uVar3 = wcstoul(local_1f8,local_228,0x10);
      local_1f8[0] = L'\0';
      param_3->C = uVar3;
      uVar3 = wcstoul(local_208,local_228,0x10);
      local_208[0] = L'\0';
      param_3->B = uVar3;
      uVar3 = wcstoul(local_218,local_228,0x10);
      param_3->A = uVar3;
    }
    bVar2 = true;
  }
  return bVar2;
}

// Value @ 1418ff390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FParse::Value(wchar_t *param_1,wchar_t *param_2,FName *param_3)

{
  bool bVar1;
  FName *pFVar2;
  undefined1 auStackY_858 [32];
  FName local_828 [2];
  wchar_t local_818 [1024];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_858;
  bVar1 = Value(param_1,param_2,local_818,0x400,true,(wchar_t **)0x0);
  if (bVar1) {
    pFVar2 = ::FName::FName(local_828,local_818);
    *param_3 = *pFVar2;
  }
  return bVar1;
}

// Value @ 1418ff410

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FParse::Value(wchar_t *param_1,wchar_t *param_2,FString *param_3,bool param_4,wchar_t **param_5)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  size_t sVar4;
  FString *pFVar5;
  ForElementType<wchar_t> FVar6;
  undefined1 auStackY_2088 [32];
  FString local_2058;
  ForElementType<wchar_t> local_2048;
  int local_40 [2];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x1418ff421;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2088;
  if (param_1 != (wchar_t *)0x0) {
    sVar4 = wcslen(param_1);
    if (0 < (int)sVar4) {
      local_40[1] = 0x1000;
      local_2048.SecondaryData = (ForElementType<wchar_t>)0x0;
      local_40[0] = 0;
      UE::Core::Private::
      ReallocGrow<2,TSizedInlineAllocator<4096,32,TSizedDefaultAllocator<32>_>::ForElementType<wchar_t>_>
                (2,2,(int)sVar4 + 1,&local_2048,local_40,local_40 + 1);
      if ((local_40[0] < 1) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      FVar6 = (ForElementType<wchar_t>)&local_2048;
      if (local_2048.SecondaryData != (ForElementType<wchar_t>)0x0) {
        FVar6 = local_2048.SecondaryData;
      }
      *(wchar_t *)FVar6 = L'\0';
      FVar6 = (ForElementType<wchar_t>)&local_2048;
      if (local_2048.SecondaryData != (ForElementType<wchar_t>)0x0) {
        FVar6 = local_2048.SecondaryData;
      }
      bVar2 = Value(param_1,param_2,(wchar_t *)FVar6,local_40[0],param_4,param_5);
      if (bVar2) {
        FVar6 = (ForElementType<wchar_t>)&local_2048;
        if (local_2048.SecondaryData != (ForElementType<wchar_t>)0x0) {
          FVar6 = local_2048.SecondaryData;
        }
        pFVar5 = ::FString::FString(&local_2058,(wchar_t *)FVar6);
        ::FString::operator=(param_3,pFVar5);
        if (local_2058.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2058.Data.AllocatorInstance.Data);
        }
        if (local_2048.SecondaryData != (ForElementType<wchar_t>)0x0) {
          FMemory::Free((void *)local_2048.SecondaryData);
        }
        return true;
      }
      if (local_2048.SecondaryData != (ForElementType<wchar_t>)0x0) {
        FMemory::Free((void *)local_2048.SecondaryData);
      }
    }
  }
  return false;
}

// Value @ 1418ff5d0

bool __cdecl FParse::Value(wchar_t *param_1,wchar_t *param_2,FText *param_3,wchar_t *param_4)

{
  wchar_t wVar1;
  bool bVar2;
  int iVar3;
  size_t sVar4;
  wchar_t *pwVar5;
  wchar_t wVar6;
  wchar_t wVar7;
  
  if ((param_2 != (wchar_t *)0x0) && (param_1 != (wchar_t *)0x0)) {
    wVar1 = *param_2;
    bVar2 = false;
    wVar7 = wVar1 + L'￠';
    if (0x19 < (ushort)(wVar1 + L'ﾟ')) {
      wVar7 = wVar1;
    }
    sVar4 = wcslen(param_2);
    wVar1 = *param_1;
    while (wVar1 != L'\0') {
      pwVar5 = param_1 + 1;
      wVar6 = wVar1 + L'￠';
      if (0x19 < (ushort)(wVar1 + L'ﾟ')) {
        wVar6 = wVar1;
      }
      if (((!bVar2) && (wVar6 == wVar7)) &&
         (iVar3 = FGenericPlatformStricmp::Strnicmp(pwVar5,param_2 + 1,(longlong)((int)sVar4 + -1)),
         iVar3 == 0)) {
        if (param_1 == (wchar_t *)0x0) {
          return false;
        }
        sVar4 = wcslen(param_2);
        pwVar5 = FTextStringHelper::ReadFromBuffer
                           (param_1 + (int)sVar4,param_3,param_4,(wchar_t *)0x0,false);
        return pwVar5 != (wchar_t *)0x0;
      }
      if (((ushort)(wVar6 + L'﾿') < 0x1a) || ((ushort)(wVar6 + L'￐') < 10)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      param_1 = pwVar5;
      wVar1 = *pwVar5;
    }
  }
  return false;
}

// Value @ 1418ff6f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FParse::Value(wchar_t *param_1,wchar_t *param_2,long64 *param_3)

{
  ushort uVar1;
  bool bVar2;
  longlong lVar3;
  ushort *puVar4;
  longlong lVar5;
  undefined1 auStackY_2058 [32];
  wchar_t local_2028 [4096];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x1418ff703;
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_2058;
  memset(local_2028,0,0x2000);
  lVar5 = 0;
  bVar2 = Value(param_1,param_2,local_2028,0x1000,true,(wchar_t **)0x0);
  if (bVar2) {
    *param_3 = 0;
    lVar3 = lVar5;
    if (local_2028[0] == L'-') {
      lVar3 = 2;
    }
    puVar4 = (ushort *)((longlong)local_2028 + lVar3);
    uVar1 = *puVar4;
    while ((0x2f < uVar1 && (uVar1 < 0x3a))) {
      puVar4 = puVar4 + 1;
      lVar5 = (ulonglong)uVar1 + (lVar5 * 5 + -0x18) * 2;
      uVar1 = *puVar4;
      *param_3 = lVar5;
    }
    if (local_2028[0] == L'-') {
      *param_3 = -lVar5;
    }
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

// Value @ 1418ff7f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FParse::Value(wchar_t *param_1,wchar_t *param_2,ulong64 *param_3)

{
  ushort uVar1;
  bool bVar2;
  ulong64 uVar3;
  ushort *puVar4;
  ulong64 uVar5;
  undefined1 auStackY_2058 [32];
  wchar_t awStack_2028 [4096];
  ulonglong uStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x1418ff703;
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_2058;
  memset(awStack_2028,0,0x2000);
  uVar5 = 0;
  bVar2 = Value(param_1,param_2,awStack_2028,0x1000,true,(wchar_t **)0x0);
  if (bVar2) {
    *param_3 = 0;
    uVar3 = uVar5;
    if (awStack_2028[0] == L'-') {
      uVar3 = 2;
    }
    puVar4 = (ushort *)((longlong)awStack_2028 + uVar3);
    uVar1 = *puVar4;
    while ((0x2f < uVar1 && (uVar1 < 0x3a))) {
      puVar4 = puVar4 + 1;
      uVar5 = (ulonglong)uVar1 + (uVar5 * 5 + -0x18) * 2;
      uVar1 = *puVar4;
      *param_3 = uVar5;
    }
    if (awStack_2028[0] == L'-') {
      *param_3 = -uVar5;
    }
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

// Value @ 1418ff800

bool __cdecl
FParse::Value(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,int param_4,bool param_5,
             wchar_t **param_6)

{
  wchar_t wVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  size_t sVar7;
  size_t sVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  wchar_t wVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  wchar_t wVar14;
  
  if (param_4 == 0) {
    return false;
  }
  if (((param_3 == (wchar_t *)0x0) || (param_4 < 1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value && MaxLen > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\Parse.cpp"
                         ,0xff,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  sVar7 = wcslen(param_2);
  bVar4 = false;
  if (param_6 != (wchar_t **)0x0) {
    *param_6 = (wchar_t *)0x0;
  }
  if ((param_2 == (wchar_t *)0x0) || (param_1 == (wchar_t *)0x0)) {
LAB_1418ff943:
    *param_3 = L'\0';
    return false;
  }
  wVar1 = *param_2;
  wVar14 = wVar1 + L'￠';
  if (0x19 < (ushort)(wVar1 + L'ﾟ')) {
    wVar14 = wVar1;
  }
  sVar8 = wcslen(param_2);
  wVar1 = *param_1;
  bVar3 = false;
  while( true ) {
    if (wVar1 == L'\0') goto LAB_1418ff943;
    pwVar12 = param_1 + 1;
    wVar11 = wVar1 + L'￠';
    if (0x19 < (ushort)(wVar1 + L'ﾟ')) {
      wVar11 = wVar1;
    }
    if (((!bVar3) && (!bVar4)) &&
       ((wVar11 == wVar14 &&
        (iVar6 = FGenericPlatformStricmp::Strnicmp(pwVar12,param_2 + 1,(longlong)((int)sVar8 + -1)),
        iVar6 == 0)))) break;
    if (((ushort)(wVar11 + L'﾿') < 0x1a) || ((ushort)(wVar11 + L'￐') < 10)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (wVar11 == L'\"') {
      bVar3 = !bVar3;
    }
    wVar1 = *pwVar12;
    param_1 = pwVar12;
  }
  if (param_1 == (wchar_t *)0x0) goto LAB_1418ff943;
  wVar1 = param_1[(int)sVar7];
  pwVar12 = param_1 + (int)sVar7;
  if (wVar1 == L'\"') {
    pwVar12 = pwVar12 + 1;
    pwVar9 = wcsstr(pwVar12,L"\"");
    if (pwVar9 == (wchar_t *)0x0) {
      sVar7 = wcslen(param_1);
      pwVar9 = param_1 + (int)sVar7;
    }
    goto LAB_1418ffa5d;
  }
  pwVar13 = L" \r\n\t";
  pwVar9 = pwVar12;
  wVar14 = wVar1;
  while (wVar14 != L'\0') {
    pwVar10 = L" \r\n\t";
    while( true ) {
      if (*pwVar10 == L'\0') goto LAB_1418ff9f0;
      if (*pwVar9 == *pwVar10) break;
      pwVar10 = pwVar10 + 1;
    }
    pwVar9 = pwVar9 + 1;
    wVar14 = *pwVar9;
  }
LAB_1418ff9f0:
  iVar6 = (int)((longlong)pwVar9 - (longlong)pwVar12 >> 1);
  wVar14 = pwVar12[iVar6];
  pwVar12 = pwVar12 + iVar6;
  if (param_5) {
    pwVar13 = L",) \r\n\t";
  }
  pwVar9 = pwVar12;
  if (wVar14 == L'\0') goto LAB_1418ffa50;
  wVar11 = *pwVar13;
  pwVar10 = pwVar13;
  do {
    while (wVar11 != L'\0') {
      if (wVar14 == wVar11) goto LAB_1418ffa50;
      wVar11 = pwVar10[1];
      pwVar10 = pwVar10 + 1;
    }
    wVar14 = pwVar9[1];
    pwVar9 = pwVar9 + 1;
    wVar11 = *pwVar13;
    pwVar10 = pwVar13;
  } while (wVar14 != L'\0');
LAB_1418ffa50:
  pwVar9 = pwVar12 + (int)((longlong)pwVar9 - (longlong)pwVar12 >> 1);
LAB_1418ffa5d:
  iVar6 = (int)((longlong)pwVar9 - (longlong)pwVar12 >> 1);
  if (param_4 + -1 < iVar6) {
    iVar6 = param_4 + -1;
  }
  memcpy(param_3,pwVar12,(longlong)iVar6 * 2);
  param_3[iVar6] = L'\0';
  if (param_6 != (wchar_t **)0x0) {
    if ((wVar1 == L'\"') && (*pwVar9 == L'\"')) {
      pwVar9 = pwVar9 + 1;
    }
    *param_6 = pwVar9;
  }
  return true;
}

