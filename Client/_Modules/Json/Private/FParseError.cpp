// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 1

// CreateMessage @ 141dd1a00

FString * __thiscall
UE::Json::FParseError::CreateMessage
          (FParseError *this,FString *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  uint uVar2;
  int iVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  wchar_t *pwVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  FString local_58;
  FString local_48;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar15;
  
  if (this->ErrorCode == kParseErrorNone) {
    if (this->Offset == 1) {
      ::FString::FString(__return_storage_ptr__,L"JsonText must be null terminated");
      return __return_storage_ptr__;
    }
    ::FString::FString(__return_storage_ptr__,L"Invalid parse error");
    return __return_storage_ptr__;
  }
  pwVar5 = param_1->DataPtr;
  uVar8 = param_1->Size;
  if ((int)this->Offset < param_1->Size) {
    uVar8 = (uint)this->Offset;
  }
  iVar11 = 1;
  pFVar7 = (FScriptContainerElement *)0x0;
  uVar13 = 0;
  uVar14 = 0;
  if (0 < (int)uVar8) {
    uVar14 = uVar8;
  }
  iVar3 = 1;
  for (pwVar10 = pwVar5; pwVar10 != pwVar5 + (int)uVar14; pwVar10 = pwVar10 + 1) {
    if (*pwVar10 == L'\n') {
      iVar11 = iVar11 + 1;
    }
    else if (*pwVar10 == L'\r') {
      iVar3 = iVar3 + 1;
    }
  }
  if (iVar3 < iVar11) {
    iVar3 = iVar11;
  }
  uVar8 = 0;
  iVar11 = (int)*(undefined8 *)&param_1->Size;
  uVar14 = 0;
  if (1 < iVar3 - 2U) {
    pFVar9 = pFVar7;
    pFVar15 = pFVar7;
    pFVar16 = pFVar7;
    for (pwVar10 = pwVar5; uVar14 = uVar8, pwVar10 != pwVar5 + iVar11; pwVar10 = pwVar10 + 1) {
      uVar14 = (int)pFVar15 + 1;
      pFVar15 = (FScriptContainerElement *)(ulonglong)uVar14;
      if (*pwVar10 == L'\n') {
        uVar12 = (int)pFVar9 + 1;
        pFVar9 = (FScriptContainerElement *)(ulonglong)uVar12;
LAB_141dd1b20:
        if (uVar12 == iVar3 - 2U) break;
      }
      else if (*pwVar10 == L'\r') {
        uVar12 = (int)pFVar16 + 1;
        pFVar16 = (FScriptContainerElement *)(ulonglong)uVar12;
        goto LAB_141dd1b20;
      }
    }
  }
  if (1 < iVar3 + 1U) {
    pwVar10 = pwVar5 + iVar11;
    pFVar9 = pFVar7;
    pFVar15 = pFVar7;
    pFVar16 = pFVar7;
    for (; pwVar5 != pwVar10; pwVar5 = pwVar5 + 1) {
      uVar13 = (int)pFVar9 + 1;
      pFVar9 = (FScriptContainerElement *)(ulonglong)uVar13;
      if (*pwVar5 == L'\n') {
        uVar12 = (int)pFVar15 + 1;
        pFVar15 = (FScriptContainerElement *)(ulonglong)uVar12;
LAB_141dd1b80:
        if (uVar12 == iVar3 + 1U) goto LAB_141dd1b8e;
      }
      else if (*pwVar5 == L'\r') {
        uVar12 = (int)pFVar16 + 1;
        pFVar16 = (FScriptContainerElement *)(ulonglong)uVar12;
        goto LAB_141dd1b80;
      }
    }
    uVar13 = 0;
  }
LAB_141dd1b8e:
  uVar12 = param_1->Size;
  pwVar5 = param_1->DataPtr;
  uVar2 = uVar13 - uVar14;
  if ((int)uVar14 < 0) {
    uVar14 = uVar8;
    uVar2 = uVar13;
  }
  if ((int)uVar12 < (int)uVar14) {
    uVar14 = uVar12;
  }
  lVar17 = (longlong)(int)uVar14;
  uVar13 = uVar12 - uVar14;
  if ((int)uVar2 < (int)(uVar12 - uVar14)) {
    uVar13 = uVar2;
  }
  pwVar10 = pwVar5 + lVar17;
  uVar14 = uVar8;
  if (0 < (int)uVar13) {
    uVar14 = uVar13;
  }
  pwVar1 = pwVar10 + (int)uVar14;
  pFVar9 = pFVar7;
  for (; pwVar10 != pwVar1; pwVar10 = pwVar10 + 1) {
    uVar8 = (uint)pFVar9;
    iVar11 = iswspace(*pwVar10);
    if (iVar11 == 0) break;
    uVar8 = uVar8 + 1;
    pFVar9 = (FScriptContainerElement *)(ulonglong)uVar8;
  }
  iVar11 = uVar14 - uVar8;
  if (iVar11 != 0) {
    lVar6 = (longlong)iVar11;
    pwVar10 = pwVar5 + lVar17 + -1 + (longlong)(int)uVar8 + lVar6;
    do {
      iVar3 = iswspace(*pwVar10);
      if (iVar3 == 0) break;
      iVar11 = iVar11 + -1;
      pwVar10 = pwVar10 + -1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  pFVar4 = ::FString::ConstructFromPtrSize(&local_58,pwVar5 + (int)uVar8 + lVar17,iVar11);
  if (&local_48 != pFVar4) {
    pFVar7 = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  switch(this->ErrorCode) {
  case kParseErrorNone:
    break;
  case kParseErrorDocumentEmpty:
    break;
  case kParseErrorDocumentRootNotSingular:
    break;
  case kParseErrorValueInvalid:
    break;
  case kParseErrorObjectMissName:
    break;
  case kParseErrorObjectMissColon:
    break;
  case kParseErrorObjectMissCommaOrCurlyBracket:
    break;
  case kParseErrorArrayMissCommaOrSquareBracket:
    break;
  case kParseErrorStringUnicodeEscapeInvalidHex:
    break;
  case kParseErrorStringUnicodeSurrogateInvalid:
    break;
  case kParseErrorStringEscapeInvalid:
    break;
  case kParseErrorStringMissQuotationMark:
    break;
  case kParseErrorStringInvalidEncoding:
    break;
  case kParseErrorNumberTooBig:
    break;
  case kParseErrorNumberMissFraction:
    break;
  case kParseErrorNumberMissExponent:
    break;
  case kParseErrorTermination:
    break;
  case kParseErrorUnspecificSyntaxError:
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s, Line %d:\n%s");
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  return __return_storage_ptr__;
}

