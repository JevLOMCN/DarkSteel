// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// FDecimalNumberSigningStrings @ 1416d4790

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FDecimalNumberSigningStrings * __thiscall
FastDecimalFormat::Internal::FDecimalNumberSigningStrings::FDecimalNumberSigningStrings
          (FDecimalNumberSigningStrings *this,FDecimalNumberFormattingRules *param_1,
          EDecimalNumberSigningStringsFlags param_2)

{
  FString *pFVar1;
  FString *pFVar2;
  FString *pFVar3;
  FString *pFVar4;
  FScriptContainerElement *pFVar5;
  ulonglong uVar6;
  bool bVar7;
  FDecimalNumberSigningStrings *pFVar8;
  FString *pFVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  undefined1 in_XMM0 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  FDecimalNumberFormattingRules *local_res8;
  FString local_38;
  
  pFVar1 = &this->GeneratedNegativePrefixString;
  pFVar2 = &this->GeneratedNegativeSuffixString;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar3 = &this->GeneratedPositivePrefixString;
  (this->GeneratedNegativePrefixString).Data.ArrayNum = 0;
  (this->GeneratedNegativePrefixString).Data.ArrayMax = 0;
  pFVar4 = &this->GeneratedPositiveSuffixString;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeneratedNegativeSuffixString).Data.ArrayNum = 0;
  (this->GeneratedNegativeSuffixString).Data.ArrayMax = 0;
  (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeneratedPositivePrefixString).Data.ArrayNum = 0;
  (this->GeneratedPositivePrefixString).Data.ArrayMax = 0;
  (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeneratedPositiveSuffixString).Data.ArrayNum = 0;
  uVar6 = __xmm_00000003000000020000000100000000;
  (this->GeneratedPositiveSuffixString).Data.ArrayMax = 0;
  if (__isa_available < 2) {
    lVar10 = 4;
    pFVar8 = this;
    pFVar9 = &param_1->NegativePrefixString;
    do {
      pFVar8->NegativePrefixStringPtr = pFVar9;
      pFVar8 = (FDecimalNumberSigningStrings *)&pFVar8->NegativeSuffixStringPtr;
      pFVar9 = pFVar9 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  else {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = __xmm_00000003000000020000000100000000;
    auVar13 = pmovsxdq(in_XMM0,auVar14);
    lVar10 = _UNK_15066df48 + auVar13._8_8_ * 0x10;
    this->NegativePrefixStringPtr =
         (FString *)
         ((longlong)param_1->DigitCharacters +
         ___xmm_00000000000000100000000000000010 + auVar13._0_8_ * 0x10 + -0x78);
    this->NegativeSuffixStringPtr = (FString *)((longlong)param_1->DigitCharacters + lVar10 + -0x78)
    ;
    auVar13._0_4_ = ___xmm_00000002000000020000000200000002 + (int)uVar6;
    auVar13._4_4_ = _UNK_15066df64 + (int)(uVar6 >> 0x20);
    auVar13._8_4_ = _UNK_15066df68;
    auVar13._12_4_ = _UNK_15066df6c;
    auVar13 = pmovsxdq(auVar14,auVar13);
    lVar10 = _UNK_15066df48 + auVar13._8_8_ * 0x10;
    this->PositivePrefixStringPtr =
         (FString *)
         ((longlong)param_1->DigitCharacters +
         ___xmm_00000000000000100000000000000010 + auVar13._0_8_ * 0x10 + -0x78);
    this->PositiveSuffixStringPtr = (FString *)((longlong)param_1->DigitCharacters + lVar10 + -0x78)
    ;
  }
  if ((param_2 & AlwaysSign) != None) {
    local_res8 = param_1;
    bVar7 = `FastDecimalFormat::Internal::FDecimalNumberSigningStrings::
            FDecimalNumberSigningStrings'::__l5::<lambda_1>::operator()
                      (&local_res8,&param_1->NegativePrefixString,pFVar3);
    if (bVar7) {
      this->PositivePrefixStringPtr = pFVar3;
    }
    bVar7 = `FastDecimalFormat::Internal::FDecimalNumberSigningStrings::
            FDecimalNumberSigningStrings'::__l5::<lambda_1>::operator()
                      (&local_res8,&param_1->NegativeSuffixString,pFVar4);
    if (bVar7) {
      this->PositiveSuffixStringPtr = pFVar4;
    }
  }
  if ((param_2 & UseASCIISigns) != None) {
    pwVar12 = L"";
    if ((param_1->MinusString).Data.ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(param_1->MinusString).Data.AllocatorInstance.Data;
    }
    pFVar9 = ::FString::Replace(this->NegativePrefixStringPtr,&local_38,pwVar11,L"-",CaseSensitive);
    if (pFVar1 != pFVar9) {
      pFVar5 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pFVar1->Data).AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
      (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->GeneratedNegativePrefixString).Data.ArrayNum = (pFVar9->Data).ArrayNum;
      (this->GeneratedNegativePrefixString).Data.ArrayMax = (pFVar9->Data).ArrayMax;
      (pFVar9->Data).ArrayNum = 0;
      (pFVar9->Data).ArrayMax = 0;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if ((param_1->MinusString).Data.ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(param_1->MinusString).Data.AllocatorInstance.Data;
    }
    pFVar9 = ::FString::Replace(this->NegativeSuffixStringPtr,&local_38,pwVar11,L"-",CaseSensitive);
    if (pFVar2 != pFVar9) {
      pFVar5 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pFVar2->Data).AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
      (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->GeneratedNegativeSuffixString).Data.ArrayNum = (pFVar9->Data).ArrayNum;
      (this->GeneratedNegativeSuffixString).Data.ArrayMax = (pFVar9->Data).ArrayMax;
      (pFVar9->Data).ArrayNum = 0;
      (pFVar9->Data).ArrayMax = 0;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if ((param_1->PlusString).Data.ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(param_1->PlusString).Data.AllocatorInstance.Data;
    }
    pFVar9 = ::FString::Replace(this->PositivePrefixStringPtr,&local_38,pwVar11,L"+",CaseSensitive);
    if (pFVar3 != pFVar9) {
      pFVar5 = (pFVar3->Data).AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pFVar3->Data).AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
      (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->GeneratedPositivePrefixString).Data.ArrayNum = (pFVar9->Data).ArrayNum;
      (this->GeneratedPositivePrefixString).Data.ArrayMax = (pFVar9->Data).ArrayMax;
      (pFVar9->Data).ArrayNum = 0;
      (pFVar9->Data).ArrayMax = 0;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if ((param_1->PlusString).Data.ArrayNum != 0) {
      pwVar12 = (wchar_t *)(param_1->PlusString).Data.AllocatorInstance.Data;
    }
    pFVar9 = ::FString::Replace(this->PositiveSuffixStringPtr,&local_38,pwVar12,L"+",CaseSensitive);
    if (pFVar4 != pFVar9) {
      pFVar5 = (pFVar4->Data).AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pFVar4->Data).AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
      (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->GeneratedPositiveSuffixString).Data.ArrayNum = (pFVar9->Data).ArrayNum;
      (this->GeneratedPositiveSuffixString).Data.ArrayMax = (pFVar9->Data).ArrayMax;
      (pFVar9->Data).ArrayNum = 0;
      (pFVar9->Data).ArrayMax = 0;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (1 < (param_1->NegativePrefixString).Data.ArrayNum) {
      this->NegativePrefixStringPtr = pFVar1;
    }
    if (1 < (param_1->NegativeSuffixString).Data.ArrayNum) {
      this->NegativeSuffixStringPtr = pFVar2;
    }
    if (1 < (param_1->PositivePrefixString).Data.ArrayNum) {
      this->PositivePrefixStringPtr = pFVar3;
    }
    if (1 < (param_1->PositiveSuffixString).Data.ArrayNum) {
      this->PositiveSuffixStringPtr = pFVar4;
    }
  }
  return this;
}

// operator() @ 1416dc3d0

bool __thiscall
`FastDecimalFormat::Internal::FDecimalNumberSigningStrings::FDecimalNumberSigningStrings'::__l5::
<lambda_1>::operator()(void *this,FString *param_1,FString *param_2)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  size_t sVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  FString local_28;
  
  pwVar6 = L"";
  if (*(int *)(*(longlong *)this + 0x68) == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = *(wchar_t **)(*(longlong *)this + 0x60);
    if (pwVar7 == (wchar_t *)0x0) {
      return false;
    }
  }
  sVar4 = wcslen(pwVar7);
  iVar3 = ::FString::Find(param_1,pwVar7,(int)sVar4,CaseSensitive,FromStart,-1);
  if (iVar3 == -1) {
    return false;
  }
  lVar1 = *(longlong *)this;
  if (*(int *)(lVar1 + 0x58) == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = *(wchar_t **)(lVar1 + 0x50);
  }
  if (*(int *)(lVar1 + 0x68) != 0) {
    pwVar6 = *(wchar_t **)(lVar1 + 0x60);
  }
  pFVar5 = ::FString::Replace(param_1,&local_28,pwVar6,pwVar7,CaseSensitive);
  if (param_2 != pFVar5) {
    pFVar2 = (param_2->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (param_2->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_2->Data).ArrayNum = (pFVar5->Data).ArrayNum;
    (param_2->Data).ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return true;
}

