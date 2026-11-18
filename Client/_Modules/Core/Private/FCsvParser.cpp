// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// FCsvParser @ 1419cd850

FCsvParser * __thiscall FCsvParser::FCsvParser(FCsvParser *this,FString *param_1)

{
  (this->SourceString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceString).Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceString).Data.ArrayNum = (param_1->Data).ArrayNum;
  (this->SourceString).Data.ArrayMax = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  (this->Rows).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Rows).ArrayNum = 0;
  (this->Rows).ArrayMax = 0;
  if (1 < (this->SourceString).Data.ArrayNum) {
    ParseRows(this);
  }
  return this;
}

// FCsvParser @ 1419cd8a0

FCsvParser * __thiscall FCsvParser::FCsvParser(FCsvParser *this,FString *param_1)

{
  ::FString::FString(&this->SourceString,param_1);
  (this->Rows).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Rows).ArrayNum = 0;
  (this->Rows).ArrayMax = 0;
  if (1 < (this->SourceString).Data.ArrayNum) {
    ParseRows(this);
  }
  return this;
}

// MeasureNewLine @ 141a0b040

schar __thiscall FCsvParser::MeasureNewLine(FCsvParser *this,wchar_t *param_1)

{
  if (*param_1 != L'\n') {
    if (*param_1 != L'\r') {
      return '\0';
    }
    if (param_1[1] == L'\n') {
      return '\x02';
    }
  }
  return '\x01';
}

// ParseCell @ 141a0f990

EParseResult __thiscall FCsvParser::ParseCell(FCsvParser *this)

{
  wchar_t **ppwVar1;
  wchar_t wVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  byte bVar7;
  uint uVar8;
  EParseResult EVar9;
  int iVar10;
  wchar_t *pwVar11;
  uint uVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  bool bVar15;
  
  pwVar13 = this->ReadAt;
  ppwVar1 = &this->ReadAt;
  bVar15 = *pwVar13 == L'\"';
  if (bVar15) {
    pwVar13 = pwVar13 + 1;
    *ppwVar1 = pwVar13;
  }
  iVar3 = (this->Rows).ArrayNum;
  uVar12 = iVar3 - 1;
  uVar8 = 0;
  if ((int)uVar12 < iVar3) {
    uVar8 = ~uVar12 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    EVar9 = (*pcVar5)();
    return EVar9;
  }
  iVar3 = (this->Rows).ArrayNum;
  pFVar4 = (this->Rows).AllocatorInstance.Data;
  if (((*(undefined1 **)(pFVar4 + (longlong)iVar3 * 0x10 + -0x10) <= ppwVar1) &&
      (ppwVar1 < *(undefined1 **)(pFVar4 + (longlong)iVar3 * 0x10 + -0x10) +
                 (longlong)*(int *)(pFVar4 + (longlong)iVar3 * 0x10 + -4) * 8)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    EVar9 = (*pcVar5)();
    return EVar9;
  }
  iVar10 = *(int *)(pFVar4 + (longlong)iVar3 * 0x10 + -8);
  if (iVar10 == *(int *)(pFVar4 + (longlong)iVar3 * 0x10 + -4)) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)(pFVar4 + (longlong)iVar3 * 0x10 + -0x10),
                        (int *)(pFVar4 + (longlong)iVar3 * 0x10 + -4));
  }
  *(int *)(pFVar4 + (longlong)iVar3 * 0x10 + -8) = iVar10 + 1;
  *(wchar_t **)(*(longlong *)(pFVar4 + (longlong)iVar3 * 0x10 + -0x10) + (longlong)iVar10 * 8) =
       *ppwVar1;
  pwVar11 = *ppwVar1;
  wVar2 = *pwVar11;
  do {
    if (wVar2 == L'\0') {
      return EndOfString;
    }
    if (bVar15) {
      if (wVar2 != L'\"') goto LAB_141a0fb10;
      do {
        pwVar11 = pwVar11 + 1;
        bVar6 = !bVar15;
        *ppwVar1 = pwVar11;
        if (!bVar15) {
          *pwVar13 = L'\"';
          pwVar13 = pwVar13 + 1;
          pwVar11 = *ppwVar1;
        }
        bVar15 = bVar6;
      } while (*pwVar11 == L'\"');
      *pwVar13 = L'\0';
      pwVar14 = pwVar13;
    }
    else {
      if (wVar2 == L'\n') {
        bVar7 = 1;
LAB_141a0fb71:
        *pwVar13 = L'\0';
        *ppwVar1 = *ppwVar1 + bVar7;
        return EndOfString - (**ppwVar1 != L'\0');
      }
      if (wVar2 == L'\r') {
        bVar7 = (pwVar11[1] == L'\n') + 1;
        goto LAB_141a0fb71;
      }
      if (wVar2 == L',') {
        *pwVar13 = L'\0';
        *ppwVar1 = *ppwVar1 + 1;
        return EndOfCell;
      }
LAB_141a0fb10:
      pwVar14 = pwVar13 + 1;
      if (pwVar13 == pwVar11) {
        *ppwVar1 = pwVar14;
      }
      else {
        *ppwVar1 = pwVar11 + 1;
        *pwVar13 = wVar2;
      }
    }
    pwVar11 = *ppwVar1;
    wVar2 = *pwVar11;
    pwVar13 = pwVar14;
  } while( true );
}

// ParseRow @ 141a0fba0

EParseResult __thiscall FCsvParser::ParseRow(FCsvParser *this)

{
  int *piVar1;
  wchar_t *pwVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  EParseResult EVar5;
  longlong lVar6;
  
  pwVar2 = this->ReadAt;
  if (*pwVar2 == L'\n') {
    lVar6 = 2;
  }
  else {
    if (*pwVar2 != L'\r') {
      iVar4 = (this->Rows).ArrayNum;
      piVar1 = &(this->Rows).ArrayMax;
      if (iVar4 == *piVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->Rows).AllocatorInstance,piVar1);
      }
      (this->Rows).ArrayNum = iVar4 + 1;
      pFVar3 = (this->Rows).AllocatorInstance.Data;
      *(undefined8 *)(pFVar3 + (longlong)iVar4 * 0x10) = 0;
      *(undefined8 *)(pFVar3 + (longlong)iVar4 * 0x10 + 8) = 0;
      do {
        EVar5 = ParseCell(this);
      } while (EVar5 == EndOfCell);
      return EVar5;
    }
    lVar6 = 2;
    if (pwVar2[1] == L'\n') {
      lVar6 = 4;
    }
  }
  this->ReadAt = (wchar_t *)(lVar6 + (longlong)pwVar2);
  return EndOfString - (*(wchar_t *)(lVar6 + (longlong)pwVar2) != L'\0');
}

// ParseRows @ 141a0fc50

void __thiscall FCsvParser::ParseRows(FCsvParser *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  wchar_t *pwVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  EParseResult EVar7;
  longlong lVar8;
  int iVar9;
  
  iVar6 = (this->SourceString).Data.ArrayNum;
  iVar9 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar9 = 0;
  }
  if ((iVar9 < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x107,
                         L"String index out of bounds: Index %i from a string with a length of %i"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = (this->SourceString).Data.AllocatorInstance.Data;
  this->BufferStart = (wchar_t *)pFVar2;
  this->ReadAt = (wchar_t *)pFVar2;
  do {
    pwVar3 = this->ReadAt;
    if (*pwVar3 == L'\n') {
      lVar8 = 2;
LAB_141a0fd29:
      this->ReadAt = (wchar_t *)(lVar8 + (longlong)pwVar3);
      EVar7 = EndOfString - (*(wchar_t *)(lVar8 + (longlong)pwVar3) != L'\0');
    }
    else {
      if (*pwVar3 == L'\r') {
        lVar8 = 2;
        if (pwVar3[1] == L'\n') {
          lVar8 = 4;
        }
        goto LAB_141a0fd29;
      }
      iVar6 = (this->Rows).ArrayNum;
      piVar1 = &(this->Rows).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->Rows).AllocatorInstance,piVar1);
      }
      (this->Rows).ArrayNum = iVar6 + 1;
      pFVar2 = (this->Rows).AllocatorInstance.Data;
      *(undefined8 *)(pFVar2 + (longlong)iVar6 * 0x10) = 0;
      *(undefined8 *)(pFVar2 + (longlong)iVar6 * 0x10 + 8) = 0;
      do {
        EVar7 = ParseCell(this);
      } while (EVar7 == EndOfCell);
    }
    if (EVar7 == EndOfString) {
      return;
    }
  } while( true );
}

