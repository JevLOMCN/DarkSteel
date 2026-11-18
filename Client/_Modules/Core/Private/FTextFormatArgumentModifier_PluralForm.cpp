// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 7

// FTextFormatArgumentModifier_PluralForm @ 1417356f0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FTextFormatArgumentModifier_PluralForm * __thiscall
FTextFormatArgumentModifier_PluralForm::FTextFormatArgumentModifier_PluralForm
          (FTextFormatArgumentModifier_PluralForm *this,ETextPluralType param_1,
          TSortedMap<FTextFormatString,FTextFormat,TSizedDefaultAllocator<32>,TLess<FTextFormatString_const_&>_>
          *param_2,int param_3,bool param_4)

{
  FTextFormat *this_00;
  int iVar1;
  code *pcVar2;
  FTextFormatData *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  FTextFormatArgumentModifier_PluralForm *pFVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  FTextFormat local_98;
  FTextFormat local_88;
  FTextFormat local_78;
  FTextFormat local_68;
  FTextFormat local_58;
  FTextFormat local_48;
  
  this_00 = this->CompiledPluralForms;
  this->PluralType = param_1;
  this->_padding_ = (longlong)&___7FTextFormatArgumentModifier_PluralForm__6B_;
  this->bDoPluralFormsUseFormatArgs = param_4;
  this->LongestPluralFormStringLen = param_3;
  FTextFormat::FTextFormat(this_00);
  FTextFormat::FTextFormat(this->CompiledPluralForms + 1);
  FTextFormat::FTextFormat(this->CompiledPluralForms + 2);
  FTextFormat::FTextFormat(this->CompiledPluralForms + 3);
  FTextFormat::FTextFormat(this->CompiledPluralForms + 4);
  FTextFormat::FTextFormat(this->CompiledPluralForms + 5);
  piVar16 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar16 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ZeroString.StringLen = 4;
    ZeroString.InternalString.Data = (TArray<wchar_t,TSizedDefaultAllocator<32>_>)ZEXT816(0);
    ZeroString.StringPtr = L"zero";
    atexit(`FTextFormatArgumentModifier_PluralForm::FTextFormatArgumentModifier_PluralForm'::__l2::
           _dynamic_atexit_destructor_for__ZeroString__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar16 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    OneString.StringLen = 3;
    OneString.InternalString.Data = (TArray<wchar_t,TSizedDefaultAllocator<32>_>)ZEXT816(0);
    OneString.StringPtr = L"one";
    atexit(`FTextFormatArgumentModifier_PluralForm::FTextFormatArgumentModifier_PluralForm'::__l2::
           _dynamic_atexit_destructor_for__OneString__);
    _Init_thread_footer(&::_TSS1);
  }
  if ((*piVar16 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    TwoString.StringLen = 3;
    TwoString.InternalString.Data = (TArray<wchar_t,TSizedDefaultAllocator<32>_>)ZEXT816(0);
    TwoString.StringPtr = L"two";
    atexit(`FTextFormatArgumentModifier_PluralForm::FTextFormatArgumentModifier_PluralForm'::__l2::
           _dynamic_atexit_destructor_for__TwoString__);
    _Init_thread_footer(&::_TSS2);
  }
  if ((*piVar16 < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    FewString.StringLen = 3;
    FewString.InternalString.Data = (TArray<wchar_t,TSizedDefaultAllocator<32>_>)ZEXT816(0);
    FewString.StringPtr = L"few";
    atexit(`FTextFormatArgumentModifier_PluralForm::FTextFormatArgumentModifier_PluralForm'::__l2::
           _dynamic_atexit_destructor_for__FewString__);
    _Init_thread_footer(&::_TSS3);
  }
  if ((*piVar16 < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
    ManyString.StringLen = 4;
    ManyString.InternalString.Data = (TArray<wchar_t,TSizedDefaultAllocator<32>_>)ZEXT816(0);
    ManyString.StringPtr = L"many";
    atexit(`FTextFormatArgumentModifier_PluralForm::FTextFormatArgumentModifier_PluralForm'::__l2::
           _dynamic_atexit_destructor_for__ManyString__);
    _Init_thread_footer(&::_TSS4);
  }
  if ((*piVar16 < ::_TSS5) && (_Init_thread_header(&::_TSS5), ::_TSS5 == -1)) {
    OtherString.StringLen = 5;
    OtherString.InternalString.Data = (TArray<wchar_t,TSizedDefaultAllocator<32>_>)ZEXT816(0);
    OtherString.StringPtr = L"other";
    atexit(`FTextFormatArgumentModifier_PluralForm::FTextFormatArgumentModifier_PluralForm'::__l2::
           _dynamic_atexit_destructor_for__OtherString__);
    _Init_thread_footer(&::_TSS5);
  }
  uVar14 = (param_2->Pairs).ArrayNum;
  uVar13 = 0;
  pFVar12 = (param_2->Pairs).AllocatorInstance.Data;
  uVar15 = uVar13;
  iVar8 = ZeroString.StringLen;
  if (0 < (int)uVar14) {
    do {
      iVar7 = (uVar14 >> 1) + uVar15;
      iVar1 = *(int *)(pFVar12 + (longlong)iVar7 * 0x30 + 8);
      if (iVar1 < iVar8) {
        uVar6 = 1;
      }
      else {
        uVar6 = uVar13;
        if (iVar1 <= iVar8) {
          uVar6 = wcsncmp(*(wchar_t **)(pFVar12 + (longlong)iVar7 * 0x30),ZeroString.StringPtr,
                          (longlong)iVar1);
          iVar8 = ZeroString.StringLen;
          uVar6 = uVar6 >> 0x1f;
        }
      }
      if (uVar6 != 0) {
        uVar15 = iVar7 + (uVar14 & 1);
      }
      uVar6 = uVar14 >> 1;
      uVar14 = uVar14 >> 1;
    } while (uVar6 != 0);
    pFVar12 = (param_2->Pairs).AllocatorInstance.Data;
  }
  if ((int)uVar15 < (param_2->Pairs).ArrayNum) {
    if (iVar8 < *(int *)(pFVar12 + (longlong)(int)uVar15 * 0x30 + 8)) goto LAB_141735924;
    if (*(int *)(pFVar12 + (longlong)(int)uVar15 * 0x30 + 8) < iVar8) {
      iVar8 = (param_2->Pairs).ArrayNum;
    }
    else {
      iVar7 = wcsncmp(ZeroString.StringPtr,*(wchar_t **)(pFVar12 + (longlong)(int)uVar15 * 0x30),
                      (longlong)iVar8);
      iVar8 = (param_2->Pairs).ArrayNum;
      if (iVar7 < 0) goto LAB_141735924;
    }
    if (uVar15 == 0xffffffff) goto LAB_141735924;
    uVar14 = uVar13;
    if ((int)uVar15 < iVar8) {
      uVar14 = ~uVar15 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      pFVar11 = (FTextFormatArgumentModifier_PluralForm *)(*pcVar2)();
      return pFVar11;
    }
    pFVar12 = (param_2->Pairs).AllocatorInstance.Data + (longlong)(int)uVar15 * 0x30 + 0x20;
    if (pFVar12 == (FScriptContainerElement *)0x0) goto LAB_141735924;
    local_98.TextFormatData.Object = *(FTextFormatData **)pFVar12;
    local_98.TextFormatData.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar12 + 8);
    if (local_98.TextFormatData.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_98.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_98.TextFormatData.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  else {
LAB_141735924:
    FTextFormat::FTextFormat(&local_98);
  }
  pFVar3 = (this_00->TextFormatData).Object;
  pTVar4 = this->CompiledPluralForms[0].TextFormatData.SharedReferenceCount.ReferenceController;
  (this_00->TextFormatData).Object = local_98.TextFormatData.Object;
  this->CompiledPluralForms[0].TextFormatData.SharedReferenceCount.ReferenceController =
       local_98.TextFormatData.SharedReferenceCount.ReferenceController;
  local_98.TextFormatData.Object = pFVar3;
  local_98.TextFormatData.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  uVar14 = (param_2->Pairs).ArrayNum;
  pFVar12 = (param_2->Pairs).AllocatorInstance.Data;
  uVar6 = 0;
  uVar15 = uVar13;
  iVar8 = OneString.StringLen;
  if (0 < (int)uVar14) {
    do {
      iVar7 = (uVar14 >> 1) + uVar15;
      iVar1 = *(int *)(pFVar12 + (longlong)iVar7 * 0x30 + 8);
      if (iVar1 < iVar8) {
        uVar10 = 1;
      }
      else {
        uVar10 = uVar6;
        if (iVar1 <= iVar8) {
          uVar10 = wcsncmp(*(wchar_t **)(pFVar12 + (longlong)iVar7 * 0x30),OneString.StringPtr,
                           (longlong)iVar1);
          iVar8 = OneString.StringLen;
          uVar10 = uVar10 >> 0x1f;
        }
      }
      if (uVar10 != 0) {
        uVar15 = iVar7 + (uVar14 & 1);
      }
      uVar10 = uVar14 >> 1;
      uVar14 = uVar14 >> 1;
    } while (uVar10 != 0);
    pFVar12 = (param_2->Pairs).AllocatorInstance.Data;
  }
  iVar7 = (param_2->Pairs).ArrayNum;
  if ((int)uVar15 < iVar7) {
    if (iVar8 < *(int *)(pFVar12 + (longlong)(int)uVar15 * 0x30 + 8)) goto LAB_141735a82;
    if (iVar8 <= *(int *)(pFVar12 + (longlong)(int)uVar15 * 0x30 + 8)) {
      iVar8 = wcsncmp(OneString.StringPtr,*(wchar_t **)(pFVar12 + (longlong)(int)uVar15 * 0x30),
                      (longlong)iVar8);
      iVar7 = (param_2->Pairs).ArrayNum;
      if (iVar8 < 0) goto LAB_141735a82;
    }
    if (uVar15 == 0xffffffff) goto LAB_141735a82;
    uVar14 = uVar6;
    if ((int)uVar15 < iVar7) {
      uVar14 = ~uVar15 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      pFVar11 = (FTextFormatArgumentModifier_PluralForm *)(*pcVar2)();
      return pFVar11;
    }
    pFVar12 = (param_2->Pairs).AllocatorInstance.Data + (longlong)(int)uVar15 * 0x30 + 0x20;
    if (pFVar12 == (FScriptContainerElement *)0x0) goto LAB_141735a82;
    local_88.TextFormatData.Object = *(FTextFormatData **)pFVar12;
    local_88.TextFormatData.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar12 + 8);
    if (local_88.TextFormatData.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_88.TextFormatData.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  else {
LAB_141735a82:
    FTextFormat::FTextFormat(&local_88);
  }
  pFVar3 = this->CompiledPluralForms[1].TextFormatData.Object;
  pTVar4 = this->CompiledPluralForms[1].TextFormatData.SharedReferenceCount.ReferenceController;
  this->CompiledPluralForms[1].TextFormatData.Object = local_88.TextFormatData.Object;
  this->CompiledPluralForms[1].TextFormatData.SharedReferenceCount.ReferenceController =
       local_88.TextFormatData.SharedReferenceCount.ReferenceController;
  local_88.TextFormatData.Object = pFVar3;
  local_88.TextFormatData.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  uVar14 = (param_2->Pairs).ArrayNum;
  pFVar12 = (param_2->Pairs).AllocatorInstance.Data;
  uVar15 = uVar13;
  iVar8 = TwoString.StringLen;
  if (0 < (int)uVar14) {
    do {
      iVar7 = (uVar14 >> 1) + uVar15;
      iVar1 = *(int *)(pFVar12 + (longlong)iVar7 * 0x30 + 8);
      if (iVar1 < iVar8) {
        uVar10 = 1;
      }
      else {
        uVar10 = uVar6;
        if (iVar1 <= iVar8) {
          uVar10 = wcsncmp(*(wchar_t **)(pFVar12 + (longlong)iVar7 * 0x30),TwoString.StringPtr,
                           (longlong)iVar1);
          iVar8 = TwoString.StringLen;
          uVar10 = uVar10 >> 0x1f;
        }
      }
      if (uVar10 != 0) {
        uVar15 = iVar7 + (uVar14 & 1);
      }
      uVar10 = uVar14 >> 1;
      uVar14 = uVar14 >> 1;
    } while (uVar10 != 0);
    pFVar12 = (param_2->Pairs).AllocatorInstance.Data;
  }
  iVar7 = (param_2->Pairs).ArrayNum;
  uVar14 = 0;
  if ((int)uVar15 < iVar7) {
    if (iVar8 < *(int *)(pFVar12 + (longlong)(int)uVar15 * 0x30 + 8)) goto LAB_141735bf6;
    if (iVar8 <= *(int *)(pFVar12 + (longlong)(int)uVar15 * 0x30 + 8)) {
      iVar8 = wcsncmp(TwoString.StringPtr,*(wchar_t **)(pFVar12 + (longlong)(int)uVar15 * 0x30),
                      (longlong)iVar8);
      iVar7 = (param_2->Pairs).ArrayNum;
      if (iVar8 < 0) goto LAB_141735bf6;
    }
    if (uVar15 == 0xffffffff) goto LAB_141735bf6;
    uVar10 = uVar14;
    if ((int)uVar15 < iVar7) {
      uVar10 = ~uVar15 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      pFVar11 = (FTextFormatArgumentModifier_PluralForm *)(*pcVar2)();
      return pFVar11;
    }
    pFVar12 = (param_2->Pairs).AllocatorInstance.Data + (longlong)(int)uVar15 * 0x30 + 0x20;
    if (pFVar12 == (FScriptContainerElement *)0x0) goto LAB_141735bf6;
    local_78.TextFormatData.Object = *(FTextFormatData **)pFVar12;
    local_78.TextFormatData.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar12 + 8);
    if (local_78.TextFormatData.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_78.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_78.TextFormatData.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  else {
LAB_141735bf6:
    FTextFormat::FTextFormat(&local_78);
  }
  pFVar3 = this->CompiledPluralForms[2].TextFormatData.Object;
  pTVar4 = this->CompiledPluralForms[2].TextFormatData.SharedReferenceCount.ReferenceController;
  this->CompiledPluralForms[2].TextFormatData.Object = local_78.TextFormatData.Object;
  this->CompiledPluralForms[2].TextFormatData.SharedReferenceCount.ReferenceController =
       local_78.TextFormatData.SharedReferenceCount.ReferenceController;
  local_78.TextFormatData.Object = pFVar3;
  local_78.TextFormatData.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  uVar15 = (param_2->Pairs).ArrayNum;
  pFVar12 = (param_2->Pairs).AllocatorInstance.Data;
  uVar10 = uVar13;
  iVar8 = FewString.StringLen;
  if (0 < (int)uVar15) {
    do {
      iVar7 = (uVar15 >> 1) + uVar10;
      iVar1 = *(int *)(pFVar12 + (longlong)iVar7 * 0x30 + 8);
      if (iVar1 < iVar8) {
        uVar9 = 1;
      }
      else {
        uVar9 = uVar14;
        if (iVar1 <= iVar8) {
          uVar9 = wcsncmp(*(wchar_t **)(pFVar12 + (longlong)iVar7 * 0x30),FewString.StringPtr,
                          (longlong)iVar1);
          iVar8 = FewString.StringLen;
          uVar9 = uVar9 >> 0x1f;
        }
      }
      if (uVar9 != 0) {
        uVar10 = iVar7 + (uVar15 & 1);
      }
      uVar9 = uVar15 >> 1;
      uVar15 = uVar15 >> 1;
    } while (uVar9 != 0);
    pFVar12 = (param_2->Pairs).AllocatorInstance.Data;
  }
  iVar7 = (param_2->Pairs).ArrayNum;
  if ((int)uVar10 < iVar7) {
    if (iVar8 < *(int *)(pFVar12 + (longlong)(int)uVar10 * 0x30 + 8)) goto LAB_141735d66;
    if (iVar8 <= *(int *)(pFVar12 + (longlong)(int)uVar10 * 0x30 + 8)) {
      iVar8 = wcsncmp(FewString.StringPtr,*(wchar_t **)(pFVar12 + (longlong)(int)uVar10 * 0x30),
                      (longlong)iVar8);
      iVar7 = (param_2->Pairs).ArrayNum;
      if (iVar8 < 0) goto LAB_141735d66;
    }
    if (uVar10 == 0xffffffff) goto LAB_141735d66;
    uVar15 = uVar14;
    if ((int)uVar10 < iVar7) {
      uVar15 = ~uVar10 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      pFVar11 = (FTextFormatArgumentModifier_PluralForm *)(*pcVar2)();
      return pFVar11;
    }
    pFVar12 = (param_2->Pairs).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x30 + 0x20;
    if (pFVar12 == (FScriptContainerElement *)0x0) goto LAB_141735d66;
    local_68.TextFormatData.Object = *(FTextFormatData **)pFVar12;
    local_68.TextFormatData.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar12 + 8);
    if (local_68.TextFormatData.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_68.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_68.TextFormatData.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  else {
LAB_141735d66:
    FTextFormat::FTextFormat(&local_68);
  }
  pFVar3 = this->CompiledPluralForms[3].TextFormatData.Object;
  pTVar4 = this->CompiledPluralForms[3].TextFormatData.SharedReferenceCount.ReferenceController;
  this->CompiledPluralForms[3].TextFormatData.Object = local_68.TextFormatData.Object;
  this->CompiledPluralForms[3].TextFormatData.SharedReferenceCount.ReferenceController =
       local_68.TextFormatData.SharedReferenceCount.ReferenceController;
  local_68.TextFormatData.Object = pFVar3;
  local_68.TextFormatData.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  uVar15 = (param_2->Pairs).ArrayNum;
  pFVar12 = (param_2->Pairs).AllocatorInstance.Data;
  uVar10 = uVar13;
  iVar8 = ManyString.StringLen;
  if (0 < (int)uVar15) {
    do {
      iVar7 = (uVar15 >> 1) + uVar10;
      iVar1 = *(int *)(pFVar12 + (longlong)iVar7 * 0x30 + 8);
      if (iVar1 < iVar8) {
        uVar9 = 1;
      }
      else {
        uVar9 = uVar14;
        if (iVar1 <= iVar8) {
          uVar9 = wcsncmp(*(wchar_t **)(pFVar12 + (longlong)iVar7 * 0x30),ManyString.StringPtr,
                          (longlong)iVar1);
          iVar8 = ManyString.StringLen;
          uVar9 = uVar9 >> 0x1f;
        }
      }
      if (uVar9 != 0) {
        uVar10 = iVar7 + (uVar15 & 1);
      }
      uVar9 = uVar15 >> 1;
      uVar15 = uVar15 >> 1;
    } while (uVar9 != 0);
    pFVar12 = (param_2->Pairs).AllocatorInstance.Data;
  }
  iVar7 = (param_2->Pairs).ArrayNum;
  if ((int)uVar10 < iVar7) {
    if (iVar8 < *(int *)(pFVar12 + (longlong)(int)uVar10 * 0x30 + 8)) goto LAB_141735ed6;
    if (iVar8 <= *(int *)(pFVar12 + (longlong)(int)uVar10 * 0x30 + 8)) {
      iVar8 = wcsncmp(ManyString.StringPtr,*(wchar_t **)(pFVar12 + (longlong)(int)uVar10 * 0x30),
                      (longlong)iVar8);
      iVar7 = (param_2->Pairs).ArrayNum;
      if (iVar8 < 0) goto LAB_141735ed6;
    }
    if (uVar10 == 0xffffffff) goto LAB_141735ed6;
    uVar15 = uVar14;
    if ((int)uVar10 < iVar7) {
      uVar15 = ~uVar10 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      pFVar11 = (FTextFormatArgumentModifier_PluralForm *)(*pcVar2)();
      return pFVar11;
    }
    pFVar12 = (param_2->Pairs).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x30 + 0x20;
    if (pFVar12 == (FScriptContainerElement *)0x0) goto LAB_141735ed6;
    local_58.TextFormatData.Object = *(FTextFormatData **)pFVar12;
    local_58.TextFormatData.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar12 + 8);
    if (local_58.TextFormatData.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.TextFormatData.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  else {
LAB_141735ed6:
    FTextFormat::FTextFormat(&local_58);
  }
  pFVar3 = this->CompiledPluralForms[4].TextFormatData.Object;
  pTVar4 = this->CompiledPluralForms[4].TextFormatData.SharedReferenceCount.ReferenceController;
  this->CompiledPluralForms[4].TextFormatData.Object = local_58.TextFormatData.Object;
  this->CompiledPluralForms[4].TextFormatData.SharedReferenceCount.ReferenceController =
       local_58.TextFormatData.SharedReferenceCount.ReferenceController;
  local_58.TextFormatData.Object = pFVar3;
  local_58.TextFormatData.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  uVar15 = (param_2->Pairs).ArrayNum;
  pFVar12 = (param_2->Pairs).AllocatorInstance.Data;
  iVar8 = OtherString.StringLen;
  if (0 < (int)uVar15) {
    do {
      iVar7 = (uVar15 >> 1) + uVar13;
      iVar1 = *(int *)(pFVar12 + (longlong)iVar7 * 0x30 + 8);
      if (iVar1 < iVar8) {
        uVar10 = 1;
      }
      else {
        uVar10 = uVar14;
        if (iVar1 <= iVar8) {
          uVar10 = wcsncmp(*(wchar_t **)(pFVar12 + (longlong)iVar7 * 0x30),OtherString.StringPtr,
                           (longlong)iVar1);
          iVar8 = OtherString.StringLen;
          uVar10 = uVar10 >> 0x1f;
        }
      }
      if (uVar10 != 0) {
        uVar13 = iVar7 + (uVar15 & 1);
      }
      uVar10 = uVar15 >> 1;
      uVar15 = uVar15 >> 1;
    } while (uVar10 != 0);
  }
  if ((int)uVar13 < (param_2->Pairs).ArrayNum) {
    pFVar12 = (param_2->Pairs).AllocatorInstance.Data;
    iVar7 = *(int *)(pFVar12 + (longlong)(int)uVar13 * 0x30 + 8);
    if ((iVar7 <= iVar8) &&
       (((iVar7 < iVar8 ||
         (iVar8 = wcsncmp(OtherString.StringPtr,
                          *(wchar_t **)(pFVar12 + (longlong)(int)uVar13 * 0x30),(longlong)iVar8),
         -1 < iVar8)) && (uVar13 != 0xffffffff)))) {
      if ((int)uVar13 < (param_2->Pairs).ArrayNum) {
        uVar6 = ~uVar13 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        pFVar11 = (FTextFormatArgumentModifier_PluralForm *)(*pcVar2)();
        return pFVar11;
      }
      pFVar12 = (param_2->Pairs).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x30 + 0x20;
      if (pFVar12 != (FScriptContainerElement *)0x0) {
        local_48.TextFormatData.Object = *(FTextFormatData **)pFVar12;
        local_48.TextFormatData.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(pFVar12 + 8);
        if (local_48.TextFormatData.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_48.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_48.TextFormatData.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        goto LAB_141736062;
      }
    }
  }
  FTextFormat::FTextFormat(&local_48);
LAB_141736062:
  pTVar4 = this->CompiledPluralForms[5].TextFormatData.SharedReferenceCount.ReferenceController;
  this->CompiledPluralForms[5].TextFormatData.Object = local_48.TextFormatData.Object;
  this->CompiledPluralForms[5].TextFormatData.SharedReferenceCount.ReferenceController =
       local_48.TextFormatData.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return this;
}

// operator() @ 14173c180

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __thiscall
`FTextFormatArgumentModifier_PluralForm::Evaluate'::__l2::<lambda_1>::operator()
          (void *this,FFormatArgumentValue *param_1,int param_2,ETextPluralForm *param_3)

{
  ETextPluralType EVar1;
  Type TVar2;
  FCulture *pFVar3;
  ETextPluralForm EVar4;
  ulong64 uVar5;
  long64 lVar6;
  float fVar7;
  double dVar8;
  
  TVar2 = param_1->Type;
  if (TVar2 == Int) {
    pFVar3 = *(FCulture **)((longlong)this + 8);
    EVar1 = *(ETextPluralType *)(*(longlong *)this + 8);
    lVar6 = FFormatArgumentValue::GetIntValue(param_1);
    EVar4 = FCulture::GetPluralForm(pFVar3,param_2 * lVar6,EVar1);
  }
  else if (TVar2 == UInt) {
    pFVar3 = *(FCulture **)((longlong)this + 8);
    EVar1 = *(ETextPluralType *)(*(longlong *)this + 8);
    uVar5 = FFormatArgumentValue::GetUIntValue(param_1);
    EVar4 = FCulture::GetPluralForm(pFVar3,(longlong)param_2 * uVar5,EVar1);
  }
  else if (TVar2 == Float) {
    pFVar3 = *(FCulture **)((longlong)this + 8);
    EVar1 = *(ETextPluralType *)(*(longlong *)this + 8);
    fVar7 = FFormatArgumentValue::GetFloatValue(param_1);
    EVar4 = FCulture::GetPluralForm(pFVar3,fVar7 * (float)param_2,EVar1);
  }
  else {
    if (TVar2 != Double) {
      return false;
    }
    pFVar3 = *(FCulture **)((longlong)this + 8);
    EVar1 = *(ETextPluralType *)(*(longlong *)this + 8);
    dVar8 = FFormatArgumentValue::GetDoubleValue(param_1);
    EVar4 = FCulture::GetPluralForm(pFVar3,(double)param_2 * dVar8,EVar1);
  }
  *param_3 = EVar4;
  return true;
}

// Create @ 14174e580

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TSharedPtr<ITextFormatArgumentModifier,1> * __cdecl
FTextFormatArgumentModifier_PluralForm::Create
          (TSharedPtr<ITextFormatArgumentModifier,1> *__return_storage_ptr__,ETextPluralType param_1
          ,FTextFormatString *param_2,TSharedRef<FTextFormatPatternDefinition_const_,1> *param_3)

{
  FMutex *pFVar1;
  atomic<unsigned_char> aVar2;
  EExpressionType EVar3;
  FTextFormatPatternDefinition *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  FTextFormatData *pFVar7;
  FTextFormatString *pFVar8;
  bool bVar9;
  FString *pFVar10;
  TSharedPtr<ITextFormatArgumentModifier,1> *pTVar11;
  FTextFormatArgumentModifier_PluralForm *pFVar12;
  FTextFormatArgumentModifier_PluralForm *pFVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  atomic<int> *paVar17;
  FTextFormatArgumentModifier_PluralForm *pFVar18;
  FScriptContainerElement *pFVar19;
  bool local_b8;
  undefined1 local_b7 [7];
  ETextFormatFlags local_b0 [16];
  TSortedMap<FTextFormatString,FTextFormatString,TSizedDefaultAllocator<32>,TLess<FTextFormatString_const_&>_>
  local_a0;
  TSortedMap<FTextFormatString,FTextFormat,TSizedDefaultAllocator<32>,TLess<FTextFormatString_const_&>_>
  local_90;
  uint local_80;
  TSharedRef<FTextFormatData,1> local_78;
  FTextFormatString *local_68;
  TRawPtrProxy<FTextFormatArgumentModifier_PluralForm> local_60;
  TSharedRef<FTextFormatPatternDefinition_const_,1> local_58;
  FString local_48;
  
  pFVar13 = (FTextFormatArgumentModifier_PluralForm *)0x0;
  local_a0.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.Pairs.ArrayNum = 0;
  local_a0.Pairs.ArrayMax = 0;
  bVar9 = ITextFormatArgumentModifier::ParseKeyValueArgs(param_2,&local_a0,L'=',L',');
  if (bVar9) {
    uVar15 = local_a0.Pairs._8_8_ & 0xffffffff;
    local_b8 = false;
    local_90.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_90.Pairs.ArrayNum = 0;
    local_90.Pairs.ArrayMax = 0;
    if (local_a0.Pairs.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar15);
    }
    if (0 < local_a0.Pairs.ArrayNum) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,local_a0.Pairs.ArrayNum,(ForAnyElementType *)&local_90,0,
                 &local_90.Pairs.ArrayMax);
      uVar15 = local_a0.Pairs._8_8_ & 0xffffffff;
    }
    local_80 = (uint)uVar15;
    uVar16 = (ulonglong)(int)local_80;
    local_68 = (FTextFormatString *)(local_a0.Pairs.AllocatorInstance.Data + uVar16 * 0x40);
    pFVar19 = local_a0.Pairs.AllocatorInstance.Data + 0x28;
    pFVar18 = pFVar13;
    while( true ) {
      pFVar8 = local_68;
      iVar14 = (int)uVar15;
      if ((int)uVar15 != (int)uVar16) {
        local_b7[0] = 0;
        `TCheckedPointerIterator<TTuple<FTextFormatString,FTextFormatString>,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_b7);
        iVar14 = local_a0.Pairs.ArrayNum;
      }
      if ((FTextFormatString *)(pFVar19 + -0x28) == pFVar8) break;
      pFVar4 = param_3->Object;
      pTVar5 = (param_3->SharedReferenceCount).ReferenceController;
      if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
        paVar17 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar17 = &pTVar5->SharedReferenceCount;
        LOCK();
        *paVar17 = (atomic<int>)((int)*paVar17 + 1);
        UNLOCK();
      }
      pFVar10 = ::FString::ConstructFromPtrSize
                          (&local_48,*(wchar_t **)(pFVar19 + -8),*(uint *)pFVar19);
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar17 = (atomic<int>)((int)*paVar17 + 1);
        UNLOCK();
      }
      local_b0[0] = Default;
      local_58.Object = pFVar4;
      local_58.SharedReferenceCount.ReferenceController = pTVar5;
      MakeShared<FTextFormatData,1,FString,enum_ETextFormatFlags_&,TSharedRef<FTextFormatPatternDefinition_const_,1>_>
                (&local_78,pFVar10,local_b0,&local_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      pFVar7 = local_78.Object;
      pFVar1 = &(local_78.Object)->CompiledDataMutex;
      if ((pFVar1 == (FMutex *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TSharedPtr<ITextFormatArgumentModifier,1> *)(*pcVar6)();
        return pTVar11;
      }
      LOCK();
      bVar9 = pFVar1->State == (atomic<unsigned_char>)0x0;
      if (bVar9) {
        pFVar1->State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar9) {
        UE::FMutex::LockSlow(pFVar1);
      }
      EVar3 = pFVar7->CompiledExpressionType;
      if (pFVar1 != (FMutex *)0x0) {
        LOCK();
        aVar2 = pFVar1->State;
        pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
        UNLOCK();
        if (((byte)aVar2 & 2) != 0) {
          UE::FMutex::WakeWaitingThread(pFVar1);
        }
      }
      pFVar7 = local_78.Object;
      if (EVar3 == Invalid) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_78.SharedReferenceCount.ReferenceController);
        iVar14 = local_a0.Pairs.ArrayNum;
        break;
      }
      pFVar12 = (FTextFormatArgumentModifier_PluralForm *)(ulonglong)*(uint *)pFVar19;
      if ((int)*(uint *)pFVar19 < (int)pFVar18) {
        pFVar12 = pFVar18;
      }
      pFVar1 = &(local_78.Object)->CompiledDataMutex;
      if ((pFVar1 == (FMutex *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TSharedPtr<ITextFormatArgumentModifier,1> *)(*pcVar6)();
        return pTVar11;
      }
      LOCK();
      bVar9 = pFVar1->State == (atomic<unsigned_char>)0x0;
      if (bVar9) {
        pFVar1->State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar9) {
        UE::FMutex::LockSlow(pFVar1);
      }
      EVar3 = pFVar7->CompiledExpressionType;
      if (pFVar1 != (FMutex *)0x0) {
        LOCK();
        aVar2 = pFVar1->State;
        pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
        UNLOCK();
        if (((byte)aVar2 & 2) != 0) {
          UE::FMutex::WakeWaitingThread(pFVar1);
        }
      }
      local_b8 = (bool)(local_b8 | EVar3 == Complex);
      TSortedMap<FTextFormatString,FTextFormat,TSizedDefaultAllocator<32>,TLess<FTextFormatString_const_&>_>
      ::Emplace<FTextFormatString_const_&,FTextFormat>
                (&local_90,(FTextFormatString *)(pFVar19 + -0x28),(FTextFormat *)&local_78);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
      uVar15 = local_a0.Pairs._8_8_ & 0xffffffff;
      pFVar19 = pFVar19 + 0x40;
      uVar16 = (ulonglong)local_80;
      pFVar18 = pFVar12;
    }
    if (local_90.Pairs.ArrayNum == iVar14) {
      pFVar12 = ::operator_new(0x78);
      if (pFVar12 != (FTextFormatArgumentModifier_PluralForm *)0x0) {
        pFVar13 = FTextFormatArgumentModifier_PluralForm
                            (pFVar12,param_1,&local_90,(int)pFVar18,local_b8);
      }
      local_60.Object = pFVar13;
      TSharedPtr<ITextFormatArgumentModifier,1>::
      TSharedPtr<ITextFormatArgumentModifier,1><FTextFormatArgumentModifier_PluralForm>
                (__return_storage_ptr__,&local_60);
      DestructItems<TTuple<FTextFormatString,FTextFormat>,int>
                ((TTuple<FTextFormatString,FTextFormat> *)local_90.Pairs.AllocatorInstance.Data,
                 local_90.Pairs.ArrayNum);
      if ((TTuple<FTextFormatString,FTextFormat> *)local_90.Pairs.AllocatorInstance.Data !=
          (TTuple<FTextFormatString,FTextFormat> *)0x0) {
        FMemory::Free(local_90.Pairs.AllocatorInstance.Data);
      }
      goto LAB_14174e8a5;
    }
    DestructItems<TTuple<FTextFormatString,FTextFormat>,int>
              ((TTuple<FTextFormatString,FTextFormat> *)local_90.Pairs.AllocatorInstance.Data,
               local_90.Pairs.ArrayNum);
    if ((TTuple<FTextFormatString,FTextFormat> *)local_90.Pairs.AllocatorInstance.Data !=
        (TTuple<FTextFormatString,FTextFormat> *)0x0) {
      FMemory::Free(local_90.Pairs.AllocatorInstance.Data);
    }
  }
  __return_storage_ptr__->Object = (ITextFormatArgumentModifier *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
LAB_14174e8a5:
  DestructItems<TTuple<FTextFormatString,FTextFormatString>,int>
            ((TTuple<FTextFormatString,FTextFormatString> *)local_a0.Pairs.AllocatorInstance.Data,
             local_a0.Pairs.ArrayNum);
  if ((TTuple<FTextFormatString,FTextFormatString> *)local_a0.Pairs.AllocatorInstance.Data !=
      (TTuple<FTextFormatString,FTextFormatString> *)0x0) {
    FMemory::Free(local_a0.Pairs.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// EstimateLength @ 1417545c0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FTextFormatArgumentModifier_PluralForm::EstimateLength
          (FTextFormatArgumentModifier_PluralForm *this,int *param_1,bool *param_2)

{
  *param_1 = this->LongestPluralFormStringLen;
  *param_2 = this->bDoPluralFormsUseFormatArgs;
  return;
}

// Evaluate @ 1417547a0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
FTextFormatArgumentModifier_PluralForm::Evaluate
          (FTextFormatArgumentModifier_PluralForm *this,FFormatArgumentValue *param_1,
          FPrivateTextFormatArguments *param_2,FString *param_3)

{
  int iVar1;
  FCulture *this_00;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  ETextPluralForm EVar6;
  FInternationalization *pFVar7;
  FText *pFVar8;
  longlong *plVar9;
  FString *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  ETextPluralForm local_res8 [8];
  undefined1 local_res20 [8];
  ITextData *local_a8;
  uint local_a0;
  FTextFormatArgumentModifier_PluralForm *local_98;
  FCulture *local_90;
  FString local_88;
  char local_78 [8];
  int local_70;
  float local_68;
  undefined4 uStack_64;
  TOptional<FText>_u_0 local_60 [2];
  undefined1 local_38;
  
  pFVar7 = FInternationalization::Get();
  if ((pFVar7->CurrentLanguage).Object == (FCulture *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this_00 = (pFVar7->CurrentLanguage).Object;
  pTVar2 = (pFVar7->CurrentLanguage).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this_00 == (FCulture *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  uVar11 = 1;
  local_res8[0] = Other;
  local_98 = this;
  local_90 = this_00;
  bVar4 = `FTextFormatArgumentModifier_PluralForm::Evaluate'::__l2::<lambda_1>::operator()
                    (&local_98,param_1,1,local_res8);
  if ((bVar4) || (param_1->Type != Text)) {
    uVar12 = (ulonglong)local_res8[0];
    goto LAB_1417549a7;
  }
  pFVar8 = FFormatArgumentValue::GetTextValue(param_1);
  local_a8 = (pFVar8->TextData).Reference;
  if (local_a8 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8 + 8))(local_a8,local_res20);
  }
  local_a0 = pFVar8->Flags;
  local_78[0] = '\0';
  local_70 = 4;
  pFVar8 = FText::GetEmpty();
  TOptional<FText>::TOptional<FText>((TOptional<FText> *)&local_60[0].TypedValue,pFVar8);
  local_38 = 0;
  plVar9 = (longlong *)(**(code **)((longlong)*local_a8 + 0x48))();
  cVar5 = (**(code **)(*plVar9 + 0xa0))(plVar9,&local_a8,local_78);
  if (cVar5 == '\0') {
LAB_14175497f:
    uVar12 = (ulonglong)local_res8[0];
  }
  else {
    if (local_78[0] == '\x01') {
      uVar11 = 100;
    }
    if (local_70 == 0) {
      EVar6 = FCulture::GetPluralForm
                        (this_00,(ulonglong)uVar11 * CONCAT44(uStack_64,local_68),this->PluralType);
      uVar12 = (ulonglong)EVar6;
    }
    else if (local_70 == 1) {
      EVar6 = FCulture::GetPluralForm
                        (this_00,(ulonglong)uVar11 * CONCAT44(uStack_64,local_68),this->PluralType);
      uVar12 = (ulonglong)EVar6;
    }
    else if (local_70 == 2) {
      EVar6 = FCulture::GetPluralForm(this_00,(float)uVar11 * local_68,this->PluralType);
      uVar12 = (ulonglong)EVar6;
    }
    else {
      if (local_70 != 3) goto LAB_14175497f;
      EVar6 = FCulture::GetPluralForm
                        (this_00,(double)uVar11 * (double)CONCAT44(uStack_64,local_68),
                         this->PluralType);
      uVar12 = (ulonglong)EVar6;
    }
  }
  if ((ITextData *)local_60[0]._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_60[0]._0_8_ + 0x10))();
  }
  if (local_a8 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8 + 0x10))();
  }
LAB_1417549a7:
  pFVar10 = FTextFormatter::Format(&local_88,this->CompiledPluralForms + uVar12,param_2);
  iVar1 = (pFVar10->Data).ArrayNum;
  iVar13 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar13 = 0;
  }
  ::FString::AppendChars(param_3,(wchar_t *)(pFVar10->Data).AllocatorInstance.Data,iVar13);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return;
}

// GetFormatArgumentNames @ 14175d320

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FTextFormatArgumentModifier_PluralForm::GetFormatArgumentNames
          (FTextFormatArgumentModifier_PluralForm *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FTextFormat::GetFormatArgumentNames(this->CompiledPluralForms,param_1);
  FTextFormat::GetFormatArgumentNames(this->CompiledPluralForms + 1,param_1);
  FTextFormat::GetFormatArgumentNames(this->CompiledPluralForms + 2,param_1);
  FTextFormat::GetFormatArgumentNames(this->CompiledPluralForms + 3,param_1);
  FTextFormat::GetFormatArgumentNames(this->CompiledPluralForms + 4,param_1);
  FTextFormat::GetFormatArgumentNames(this->CompiledPluralForms + 5,param_1);
  return;
}

// Validate @ 141782fc0

/* WARNING: Removing unreachable block (ram,0x000141783590) */
/* WARNING: Removing unreachable block (ram,0x000141783161) */
/* WARNING: Removing unreachable block (ram,0x000141783281) */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __thiscall
FTextFormatArgumentModifier_PluralForm::Validate
          (FTextFormatArgumentModifier_PluralForm *this,TSharedRef<FCulture,1> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  FTextFormatData *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  TArray<ETextPluralForm,TSizedDefaultAllocator<32>_> *pTVar9;
  FString *pFVar10;
  ForAnyElementType FVar11;
  FScriptContainerElement *pFVar12;
  size_t _Size;
  FTextFormatArgumentModifier_PluralForm *pFVar13;
  bool bVar14;
  FTextFormat *pFVar15;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  TSharedPtr<FCulture,1> local_48;
  
  bVar14 = true;
  pTVar9 = FCulture::GetValidPluralForms(param_1->Object,this->PluralType);
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = pTVar9->ArrayNum;
  _Size = (size_t)local_50;
  pFVar12 = (pTVar9->AllocatorInstance).Data;
  if (local_50 == 0) {
    local_4c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_50,0,&local_58,local_50,&local_4c);
    memcpy(local_58.Data,pFVar12,_Size);
  }
  iVar7 = 0;
  if (local_50 == 1) {
    bVar14 = false;
    ::FString::PrintfImpl
              (&local_98,
               L"%s plural form argument modifier is redundant as this culture only has a single plural form"
              );
    pFVar12 = (param_2->AllocatorInstance).Data;
    if (((pFVar12 <= (FScriptContainerElement *)&local_98) &&
        ((FScriptContainerElement *)&local_98 < pFVar12 + (longlong)param_2->ArrayMax * 0x10)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    iVar7 = param_2->ArrayNum;
    if (iVar7 == param_2->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar7 + 1;
    pFVar12 = (param_2->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
    *(undefined8 *)pFVar12 = 0;
    *(FScriptContainerElement **)pFVar12 = local_98.Data.AllocatorInstance.Data;
    *(int *)(pFVar12 + 8) = local_98.Data.ArrayNum;
    *(int *)(pFVar12 + 0xc) = local_98.Data.ArrayMax;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar2 = this->CompiledPluralForms[5].TextFormatData.Object;
    if (pFVar2->SourceType == Text) {
      FText::Rebuild(&pFVar2->SourceText);
      pFVar10 = (FString *)
                (**(code **)((longlong)*(pFVar2->SourceText).TextData.Reference + 0x28))();
    }
    else {
      pFVar10 = &pFVar2->SourceExpression;
    }
    if ((pFVar10->Data).ArrayNum < 2) {
      ::FString::PrintfImpl
                (&local_88,
                 L"%s plural form argument modifier is missing a required plural form for \'%s\'");
      pFVar12 = (param_2->AllocatorInstance).Data;
      if (((pFVar12 <= (FScriptContainerElement *)&local_88) &&
          ((FScriptContainerElement *)&local_88 < pFVar12 + (longlong)param_2->ArrayMax * 0x10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      iVar7 = param_2->ArrayNum;
      if (iVar7 == param_2->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar7 + 1;
      pFVar12 = (param_2->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
      *(undefined8 *)pFVar12 = 0;
      *(FScriptContainerElement **)pFVar12 = local_88.Data.AllocatorInstance.Data;
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar12 + 8) = local_88.Data.ArrayNum;
      *(int *)(pFVar12 + 0xc) = local_88.Data.ArrayMax;
      local_88.Data.ArrayNum = 0;
      local_88.Data.ArrayMax = 0;
    }
  }
  else {
    pFVar15 = this->CompiledPluralForms;
    do {
      for (FVar11.Data = local_58.Data; FVar11.Data != local_58.Data + local_50;
          FVar11.Data = FVar11.Data + 1) {
        if (*FVar11.Data == SUB41(iVar7,0)) {
          bVar5 = true;
          goto LAB_1417832d0;
        }
      }
      bVar5 = false;
LAB_1417832d0:
      pFVar2 = (pFVar15->TextFormatData).Object;
      if (pFVar2->SourceType == Text) {
        FText::Rebuild(&pFVar2->SourceText);
        pFVar10 = (FString *)
                  (**(code **)((longlong)*(pFVar2->SourceText).TextData.Reference + 0x28))();
      }
      else {
        pFVar10 = &pFVar2->SourceExpression;
      }
      if ((pFVar10->Data).ArrayNum < 2) {
        if (bVar5) {
          ::FString::PrintfImpl
                    (&local_78,
                     L"%s plural form argument modifier is missing a required plural form for \'%s\'"
                    );
          pFVar12 = (param_2->AllocatorInstance).Data;
          if (((pFVar12 <= (FScriptContainerElement *)&local_78) &&
              ((FScriptContainerElement *)&local_78 < pFVar12 + (longlong)param_2->ArrayMax * 0x10))
             && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar14)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          iVar8 = param_2->ArrayNum;
          if (iVar8 == param_2->ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
          }
          param_2->ArrayNum = iVar8 + 1;
          pFVar12 = (param_2->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
          *(undefined8 *)pFVar12 = 0;
          *(FScriptContainerElement **)pFVar12 = local_78.Data.AllocatorInstance.Data;
          local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(pFVar12 + 8) = local_78.Data.ArrayNum;
          *(int *)(pFVar12 + 0xc) = local_78.Data.ArrayMax;
          local_78.Data.ArrayNum = 0;
          local_78.Data.ArrayMax = 0;
LAB_14178358b:
          bVar14 = false;
        }
      }
      else if (!bVar5) {
        ::FString::PrintfImpl
                  (&local_68,
                   L"%s plural form argument modifier has an unused plural form for \'%s\'");
        pFVar12 = (param_2->AllocatorInstance).Data;
        if (((pFVar12 <= (FScriptContainerElement *)&local_68) &&
            ((FScriptContainerElement *)&local_68 < pFVar12 + (longlong)param_2->ArrayMax * 0x10))
           && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar14)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        iVar8 = param_2->ArrayNum;
        if (iVar8 == param_2->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar8 + 1;
        pFVar12 = (param_2->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
        *(undefined8 *)pFVar12 = 0;
        *(FScriptContainerElement **)pFVar12 = local_68.Data.AllocatorInstance.Data;
        local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar12 + 8) = local_68.Data.ArrayNum;
        *(int *)(pFVar12 + 0xc) = local_68.Data.ArrayMax;
        local_68.Data.ArrayNum = 0;
        local_68.Data.ArrayMax = 0;
        goto LAB_14178358b;
      }
      iVar7 = iVar7 + 1;
      pFVar15 = pFVar15 + 1;
    } while (iVar7 < 6);
  }
  pFVar13 = (FTextFormatArgumentModifier_PluralForm *)this->CompiledPluralForms;
  while( true ) {
    if (pFVar13 == this + 1) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
      return bVar14;
    }
    pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
    local_48.Object = param_1->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar2 = (FTextFormatData *)pFVar13->_padding_;
    this_00 = &pFVar2->CompiledDataMutex;
    local_48.SharedReferenceCount.ReferenceController = pTVar3;
    if ((this_00 == (FMutex *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar5)) break;
    LOCK();
    bVar5 = this_00->State == (atomic<unsigned_char>)0x0;
    if (bVar5) {
      this_00->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar5) {
      UE::FMutex::LockSlow(this_00);
    }
    bVar5 = FTextFormatData::ValidatePattern_NoLock(pFVar2,&local_48,param_2);
    if (this_00 != (FMutex *)0x0) {
      LOCK();
      aVar1 = this_00->State;
      this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
      UNLOCK();
      if (((byte)aVar1 & 2) != 0) {
        UE::FMutex::WakeWaitingThread(this_00);
      }
    }
    bVar14 = (bool)(bVar14 & bVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pFVar13 = (FTextFormatArgumentModifier_PluralForm *)&pFVar13->bDoPluralFormsUseFormatArgs;
  }
  pcVar4 = (code *)swi(3);
  uVar6 = (*pcVar4)();
  return (bool)uVar6;
}

