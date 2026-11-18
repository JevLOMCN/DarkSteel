// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// Add @ 141fc2f90

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

void __thiscall FCoreRedirects::FWildcardData::Add(FWildcardData *this,FCoreRedirect *param_1)

{
  int *piVar1;
  ECoreRedirectFlags EVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FCoreRedirect *pFVar6;
  
  EVar2 = param_1->RedirectFlags;
  if ((EVar2 & Option_MatchSubstring) == Option_MatchSubstring) {
    pFVar6 = (FCoreRedirect *)(this->Substrings).AllocatorInstance.Data;
    if (((pFVar6 <= param_1) && (param_1 < pFVar6 + (this->Substrings).ArrayMax)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = (this->Substrings).ArrayNum;
    piVar1 = &(this->Substrings).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x8a0,(ForAnyElementType *)this,piVar1);
    }
    (this->Substrings).ArrayNum = iVar5 + 1;
    pFVar6 = (FCoreRedirect *)((this->Substrings).AllocatorInstance.Data + (longlong)iVar5 * 0xa0);
  }
  else if ((EVar2 >> 0x18 & 1) == 0) {
    if (((EVar2 >> 0x19 & 1) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Redirect.IsSuffixMatch()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\CoreRedirects.cpp"
                           ,0x207,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar6 = (FCoreRedirect *)(this->Suffixes).AllocatorInstance.Data;
    if (((pFVar6 <= param_1) && (param_1 < pFVar6 + (this->Suffixes).ArrayMax)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = (this->Suffixes).ArrayNum;
    piVar1 = &(this->Suffixes).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x8a0,&(this->Suffixes).AllocatorInstance,piVar1);
    }
    (this->Suffixes).ArrayNum = iVar5 + 1;
    pFVar6 = (FCoreRedirect *)((this->Suffixes).AllocatorInstance.Data + (longlong)iVar5 * 0xa0);
  }
  else {
    pFVar6 = (FCoreRedirect *)(this->Prefixes).AllocatorInstance.Data;
    if (((pFVar6 <= param_1) && (param_1 < pFVar6 + (this->Prefixes).ArrayMax)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = (this->Prefixes).ArrayNum;
    piVar1 = &(this->Prefixes).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x8a0,&(this->Prefixes).AllocatorInstance,piVar1);
    }
    (this->Prefixes).ArrayNum = iVar5 + 1;
    pFVar6 = (FCoreRedirect *)((this->Prefixes).AllocatorInstance.Data + (longlong)iVar5 * 0xa0);
  }
  FCoreRedirect::FCoreRedirect(pFVar6,param_1);
  AddPredictionWords(this,param_1);
  return;
}

// AddPredictionWords @ 141fc49c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

void __thiscall
FCoreRedirects::FWildcardData::AddPredictionWords(FWildcardData *this,FCoreRedirect *param_1)

{
  int iVar1;
  uchar *puVar2;
  uchar *puVar3;
  int iVar4;
  TStringBuilderBase<char8_t> *pTVar5;
  int iVar6;
  FName *pFVar7;
  undefined1 auStack_578 [32];
  TStringView<char8_t> local_558;
  undefined8 local_548;
  undefined8 uStack_540;
  FName local_538 [3];
  FName local_520;
  TStringBuilderBase<char8_t> local_518;
  char *local_4f8;
  undefined4 local_4f0;
  char *local_4e8;
  undefined4 local_4e0;
  char *local_4d8;
  undefined4 local_4d0;
  char *local_4c8;
  undefined4 local_4c0;
  char *local_4b8;
  undefined4 local_4b0;
  char *local_4a8;
  undefined4 local_4a0;
  char *local_498;
  undefined4 local_490;
  char *local_488;
  undefined4 local_480;
  TStringBuilderBase<char8_t> local_478;
  uchar local_458 [1035];
  uchar local_4d [5];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_578;
  pFVar7 = local_538;
  local_538[0] = (param_1->OldName).ObjectName;
  local_538[1] = (param_1->OldName).OuterName;
  local_538[2] = (param_1->OldName).PackageName;
  do {
    local_558.DataPtr = *(uchar **)pFVar7;
    if ((FName)local_558.DataPtr != (FName)0x0) {
      local_478.Base = local_458;
      local_478.bIsDynamic = false;
      local_478.bIsExternal = false;
      local_478.CurPos = local_458;
      local_478.End = local_4d;
      ::FName::AppendString((FName *)&local_558,&local_478);
      local_4d8 = "Memory/";
      puVar2 = (uchar *)((ulonglong)local_478.Base & 0xffffffff);
      local_4e8 = "Extra/";
      local_4c8 = "Config/";
      pTVar5 = &local_518;
      local_518.Base = "/";
      local_4b8 = "Game/";
      local_4a8 = "Engine/";
      local_498 = "Transient/";
      local_488 = "Niagara/";
      local_518.CurPos._0_4_ = 1;
      local_518.End = "Script/";
      local_518.bIsDynamic = true;
      local_518.bIsExternal = false;
      local_518._26_2_ = 0;
      local_4f8 = "Temp/";
      local_4f0 = 5;
      local_4e0 = 6;
      local_4d0 = 7;
      local_4c0 = 7;
      local_4b0 = 5;
      local_4a0 = 7;
      local_490 = 10;
      local_480 = 8;
      puVar3 = local_478.Base;
      do {
        iVar1 = (int)local_478.CurPos - (int)puVar2;
        iVar4 = (int)pTVar5->CurPos;
        if (iVar4 < iVar1) {
          if (iVar4 < iVar1) {
            iVar1 = iVar4;
          }
          iVar6 = 0;
          if (0 < iVar1) {
            iVar6 = iVar1;
          }
          if (iVar4 == iVar6) {
            if ((iVar4 == 0) || (iVar6 == 0)) {
LAB_141fc4b66:
              if (iVar4 != iVar6) goto LAB_141fc4b9c;
              uStack_540 = 0;
              local_548 = 0;
              local_558.DataPtr = (uchar *)0x0;
              local_558.Size = 0;
              local_558._12_4_ = 0;
              TStringBuilderBase<char8_t>::ReplaceAt(&local_478,0,iVar4,&local_558);
            }
            else {
              iVar1 = iVar6;
              if (iVar4 < iVar6) {
                iVar1 = iVar4;
              }
              iVar1 = FGenericPlatformStricmp::Strnicmp(pTVar5->Base,puVar3,(longlong)iVar1);
              puVar2 = local_478.Base;
              puVar3 = local_478.Base;
              if (iVar1 == 0) goto LAB_141fc4b66;
            }
            puVar2 = (uchar *)((ulonglong)local_478.Base & 0xffffffff);
            puVar3 = local_478.Base;
          }
        }
LAB_141fc4b9c:
        pTVar5 = (TStringBuilderBase<char8_t> *)&pTVar5->End;
      } while (pTVar5 != &local_478);
      FPredictMatch8::AddPredictionWord
                (&this->PredictMatch,puVar3,(short)local_478.CurPos - (short)puVar3);
      TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_478);
    }
    pFVar7 = pFVar7 + 1;
    if (pFVar7 == &local_520) {
      return;
    }
  } while( true );
}

// MatchSubstringApproximate @ 141fd7b70

bool __thiscall
FCoreRedirects::FWildcardData::MatchSubstringApproximate
          (FWildcardData *this,FCoreRedirectObjectUtf8Name *param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  ushort uVar7;
  uint uVar8;
  FCoreRedirectObjectUtf8Name **ppFVar9;
  FCoreRedirectObjectUtf8Name *local_48;
  FNameUtf8String *local_40;
  FNameUtf8String *local_38;
  FCoreRedirectObjectUtf8Name *local_30;
  
  local_40 = &param_1->OuterName;
  ppFVar9 = &local_48;
  local_38 = &param_1->PackageName;
  local_48 = param_1;
  do {
    uVar8 = (int)(param_1->ObjectName).UTF8._padding_ - (int)(param_1->ObjectName).UTF8._padding_;
    if (uVar8 != 0) {
      pbVar5 = (byte *)(param_1->ObjectName).UTF8._padding_;
      if (((short)uVar8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("DataLen",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Internal\\UObject\\CoreRedirects\\PM-k.h"
                             ,0x86,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar1 = (this->PredictMatch).MinimumWordLength;
      uVar7 = 0xffff;
      pbVar6 = pbVar5 + (uVar8 & 0xffff);
      for (; pbVar5 < pbVar6; pbVar5 = pbVar5 + 1) {
        while (uVar7 = uVar7 * 2 | (this->PredictMatch).BitApproxTable[*pbVar5],
              (1 << ((char)uVar1 - 1U & 0x1f) & uVar7) != 0) {
          pbVar5 = pbVar5 + 1;
          if (pbVar6 <= pbVar5) goto LAB_141fd7c29;
        }
        bVar3 = FPredictMatch8::PredictMatch
                          ((this->PredictMatch).PredictMatchTable,
                           pbVar5 + (1 - (ulonglong)(this->PredictMatch).MinimumWordLength),
                           (int)pbVar6 -
                           (int)(pbVar5 + (1 - (ulonglong)(this->PredictMatch).MinimumWordLength)));
        if (bVar3) {
          return true;
        }
      }
    }
LAB_141fd7c29:
    ppFVar9 = ppFVar9 + 1;
    if (ppFVar9 == &local_30) {
      return false;
    }
    param_1 = *ppFVar9;
  } while( true );
}

// Matches @ 141fd82d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

bool __thiscall
FCoreRedirects::FWildcardData::Matches
          (FWildcardData *this,ECoreRedirectFlags param_1,FCoreRedirectObjectName *param_2,
          ECoreRedirectMatchFlags param_3,
          TArray<FCoreRedirect_const_*,TSizedDefaultAllocator<32>_> *param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int *piVar7;
  FScriptContainerElement *pFVar8;
  undefined1 **ppuVar9;
  FName *pFVar10;
  bool bVar11;
  FScriptContainerElement *pFVar12;
  undefined1 auStack_d68 [32];
  FScriptContainerElement **local_d48;
  FScriptContainerElement *local_d40;
  longlong local_d38;
  longlong local_d30;
  undefined8 local_d28;
  undefined1 local_d18;
  undefined1 local_d17;
  undefined1 local_d16;
  undefined1 local_d15 [5];
  FScriptContainerElement *local_d10;
  FScriptContainerElement *local_d08;
  FScriptContainerElement *local_d00;
  ECoreRedirectFlags local_cf8;
  ECoreRedirectFlags local_cf4;
  undefined1 *local_cf0;
  FNameUtf8String *local_ce8;
  FNameUtf8String *local_ce0;
  undefined1 local_cd8 [1072];
  FNameUtf8String local_8a8;
  FNameUtf8String local_478;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_d68;
  local_cf4 = param_1 & Option_MatchSubstring;
  local_d18 = 0;
  local_cf8 = param_1 & Option_MatchSuffix;
  bVar11 = (bool)((byte)param_3 & 1);
  if ((((local_cf4 != Option_MatchSubstring) && ((param_1 & Option_MatchPrefix) == None)) &&
      (local_cf8 == None)) ||
     ((((this->Prefixes).ArrayNum == 0 && ((this->Suffixes).ArrayNum == 0)) &&
      ((this->Substrings).ArrayNum == 0)))) {
    return false;
  }
  UE::CoreRedirects::Private::FCoreRedirectObjectUtf8Name::FCoreRedirectObjectUtf8Name
            ((FCoreRedirectObjectUtf8Name *)local_cd8,param_2);
  local_cf0 = local_cd8;
  ppuVar9 = &local_cf0;
  local_ce8 = &local_8a8;
  piVar7 = (int *)local_cd8;
  local_ce0 = &local_478;
  while ((uVar5 = 0, piVar7[2] - *piVar7 == 0 ||
         (bVar4 = FPredictMatch8::MatchApproximate
                            (&this->PredictMatch,*(uchar **)piVar7,piVar7[2] - *piVar7 & 0xffff),
         !bVar4))) {
    ppuVar9 = ppuVar9 + 1;
    if (ppuVar9 == (undefined1 **)local_cd8) goto LAB_141fd87c5;
    piVar7 = (int *)*ppuVar9;
  }
  if ((param_1 & Option_MatchPrefix) != None) {
    pFVar8 = (this->Prefixes).AllocatorInstance.Data;
    iVar1 = (this->Prefixes).ArrayNum;
    pFVar10 = (FName *)(pFVar8 + 0xc);
    pFVar12 = pFVar8 + (longlong)iVar1 * 0xa0;
    while( true ) {
      if ((this->Prefixes).ArrayNum != iVar1) {
        local_d17 = 0;
        `TCheckedPointerIterator<FCoreRedirect_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_d17);
      }
      uVar5 = local_d18;
      if (pFVar8 == pFVar12) break;
      bVar4 = UE::CoreRedirects::Private::FPrefixMatcher::Matches
                        (pFVar10[-1],(FNameUtf8String *)local_cd8,bVar11);
      if (((bVar4) &&
          (bVar4 = UE::CoreRedirects::Private::FPrefixMatcher::Matches(*pFVar10,&local_8a8,bVar11),
          bVar4)) &&
         (bVar4 = UE::CoreRedirects::Private::FPrefixMatcher::Matches(pFVar10[1],&local_478,bVar11),
         bVar4)) {
        pFVar2 = (param_4->AllocatorInstance).Data;
        local_d18 = 1;
        local_d10 = pFVar8;
        if ((pFVar2 <= (FScriptContainerElement *)&local_d10) &&
           ((FScriptContainerElement *)&local_d10 < pFVar2 + (longlong)param_4->ArrayMax * 8)) {
          local_d30 = (longlong)param_4->ArrayNum;
          local_d28 = 8;
          local_d48 = &local_d10;
          local_d40 = pFVar2;
          local_d38 = (longlong)param_4->ArrayMax;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        iVar6 = param_4->ArrayNum;
        if (iVar6 == param_4->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_4->AllocatorInstance,&param_4->ArrayMax);
        }
        param_4->ArrayNum = iVar6 + 1;
        *(FScriptContainerElement **)((param_4->AllocatorInstance).Data + (longlong)iVar6 * 8) =
             local_d10;
      }
      pFVar8 = pFVar8 + 0xa0;
      pFVar10 = pFVar10 + 0x14;
    }
  }
  if (local_cf8 != None) {
    pFVar8 = (this->Suffixes).AllocatorInstance.Data;
    iVar1 = (this->Suffixes).ArrayNum;
    pFVar10 = (FName *)(pFVar8 + 0xc);
    pFVar12 = pFVar8 + (longlong)iVar1 * 0xa0;
    while( true ) {
      if ((this->Suffixes).ArrayNum != iVar1) {
        local_d16 = 0;
        `TCheckedPointerIterator<FCoreRedirect_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_d16);
      }
      uVar5 = local_d18;
      if (pFVar8 == pFVar12) break;
      bVar4 = UE::CoreRedirects::Private::FSuffixMatcher::Matches
                        (pFVar10[-1],(FNameUtf8String *)local_cd8,bVar11);
      if (((bVar4) &&
          (bVar4 = UE::CoreRedirects::Private::FSuffixMatcher::Matches(*pFVar10,&local_8a8,bVar11),
          bVar4)) &&
         (bVar4 = UE::CoreRedirects::Private::FSuffixMatcher::Matches(pFVar10[1],&local_478,bVar11),
         bVar4)) {
        pFVar2 = (param_4->AllocatorInstance).Data;
        local_d18 = 1;
        local_d08 = pFVar8;
        if ((pFVar2 <= (FScriptContainerElement *)&local_d08) &&
           ((FScriptContainerElement *)&local_d08 < pFVar2 + (longlong)param_4->ArrayMax * 8)) {
          local_d30 = (longlong)param_4->ArrayNum;
          local_d28 = 8;
          local_d48 = &local_d08;
          local_d40 = pFVar2;
          local_d38 = (longlong)param_4->ArrayMax;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        iVar6 = param_4->ArrayNum;
        if (iVar6 == param_4->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_4->AllocatorInstance,&param_4->ArrayMax);
        }
        param_4->ArrayNum = iVar6 + 1;
        *(FScriptContainerElement **)((param_4->AllocatorInstance).Data + (longlong)iVar6 * 8) =
             local_d08;
      }
      pFVar8 = pFVar8 + 0xa0;
      pFVar10 = pFVar10 + 0x14;
    }
  }
  if (local_cf4 == Option_MatchSubstring) {
    pFVar8 = (this->Substrings).AllocatorInstance.Data;
    iVar1 = (this->Substrings).ArrayNum;
    pFVar10 = (FName *)(pFVar8 + 0xc);
    pFVar12 = pFVar8 + (longlong)iVar1 * 0xa0;
    while( true ) {
      if ((this->Substrings).ArrayNum != iVar1) {
        local_d15[0] = 0;
        `TCheckedPointerIterator<FCoreRedirect_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_d15);
      }
      uVar5 = local_d18;
      if (pFVar8 == pFVar12) break;
      bVar4 = UE::CoreRedirects::Private::FSubstringMatcher::Matches
                        (pFVar10[-1],(FNameUtf8String *)local_cd8,bVar11);
      if (((bVar4) &&
          (bVar4 = UE::CoreRedirects::Private::FSubstringMatcher::Matches
                             (*pFVar10,&local_8a8,bVar11), bVar4)) &&
         (bVar4 = UE::CoreRedirects::Private::FSubstringMatcher::Matches
                            (pFVar10[1],&local_478,bVar11), bVar4)) {
        pFVar2 = (param_4->AllocatorInstance).Data;
        local_d18 = 1;
        local_d00 = pFVar8;
        if ((pFVar2 <= (FScriptContainerElement *)&local_d00) &&
           ((FScriptContainerElement *)&local_d00 < pFVar2 + (longlong)param_4->ArrayMax * 8)) {
          local_d30 = (longlong)param_4->ArrayNum;
          local_d28 = 8;
          local_d48 = &local_d00;
          local_d40 = pFVar2;
          local_d38 = (longlong)param_4->ArrayMax;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        iVar6 = param_4->ArrayNum;
        if (iVar6 == param_4->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_4->AllocatorInstance,&param_4->ArrayMax);
        }
        param_4->ArrayNum = iVar6 + 1;
        *(FScriptContainerElement **)((param_4->AllocatorInstance).Data + (longlong)iVar6 * 8) =
             local_d00;
      }
      pFVar8 = pFVar8 + 0xa0;
      pFVar10 = pFVar10 + 0x14;
    }
  }
LAB_141fd87c5:
  TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>
            ((TStringBuilderBase<char8_t> *)&local_478);
  TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>
            ((TStringBuilderBase<char8_t> *)&local_8a8);
  TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>
            ((TStringBuilderBase<char8_t> *)local_cd8);
  return (bool)uVar5;
}

// Rebuild @ 141fda5d0

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

void __thiscall FCoreRedirects::FWildcardData::Rebuild(FWildcardData *this)

{
  int iVar1;
  FCoreRedirect *pFVar2;
  FCoreRedirect *pFVar3;
  undefined1 local_res8 [8];
  
  (this->PredictMatch).MinimumWordLength = 0x10;
  memset((this->PredictMatch).BitApproxTable,0xff,0x200);
  memset((this->PredictMatch).PredictMatchTable,0xff,0x200);
  iVar1 = (this->Prefixes).ArrayNum;
  pFVar3 = (FCoreRedirect *)(this->Prefixes).AllocatorInstance.Data;
  pFVar2 = pFVar3 + iVar1;
  while( true ) {
    if ((this->Prefixes).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FCoreRedirect,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar2) break;
    AddPredictionWords(this,pFVar3);
    pFVar3 = pFVar3 + 1;
  }
  iVar1 = (this->Suffixes).ArrayNum;
  pFVar3 = (FCoreRedirect *)(this->Suffixes).AllocatorInstance.Data;
  pFVar2 = pFVar3 + iVar1;
  while( true ) {
    if ((this->Suffixes).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FCoreRedirect,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar2) break;
    AddPredictionWords(this,pFVar3);
    pFVar3 = pFVar3 + 1;
  }
  iVar1 = (this->Substrings).ArrayNum;
  pFVar3 = (FCoreRedirect *)(this->Substrings).AllocatorInstance.Data;
  pFVar2 = pFVar3 + iVar1;
  while( true ) {
    if ((this->Substrings).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FCoreRedirect,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar2) break;
    AddPredictionWords(this,pFVar3);
    pFVar3 = pFVar3 + 1;
  }
  return;
}

