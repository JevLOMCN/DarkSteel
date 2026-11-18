// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 15

// ~FPortableObjectFormatDOM @ 146b44c20

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall FPortableObjectFormatDOM::~FPortableObjectFormatDOM(FPortableObjectFormatDOM *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->Entries).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Entries).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Entries);
  pFVar2 = (this->ProjectName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TTuple<FString,FString>,int>
            ((TTuple<FString,FString> *)(this->Header).HeaderEntries.AllocatorInstance.Data,
             (this->Header).HeaderEntries.ArrayNum);
  pFVar2 = (this->Header).HeaderEntries.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FString,int>
            ((FString *)(this->Header).Comments.AllocatorInstance.Data,
             (this->Header).Comments.ArrayNum);
  pFVar2 = (this->Header).Comments.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Language).Culture.SharedReferenceCount.ReferenceController);
  pFVar2 = (this->Language).LanguagePluralForms.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Language).LanguageCode.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// operator() @ 146b47aa0

void __thiscall
`FPortableObjectFormatDOM::FromString'::__l2::<lambda_1>::operator()(void *this,FText *param_1)

{
  longlong *plVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  undefined1 local_res8 [8];
  
  plVar1 = *(longlong **)this;
  if (plVar1 != (longlong *)0x0) {
    pIVar2 = (param_1->TextData).Reference;
    pIVar3 = (ITextData *)*plVar1;
    if (pIVar3 != pIVar2) {
      *plVar1 = (longlong)pIVar2;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
      }
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
      }
    }
    *(uint *)(plVar1 + 1) = param_1->Flags;
  }
  return;
}

// operator() @ 146b4a550

bool __thiscall
`FPortableObjectFormatDOM::SortEntries'::__l2::<lambda_1>::operator()
          (void *this,TSharedPtr<FPortableObjectEntry,1> *param_1,
          TSharedPtr<FPortableObjectEntry,1> *param_2)

{
  FPortableObjectEntry *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  uint uVar13;
  longlong lVar14;
  longlong local_res10;
  
  pwVar12 = L"";
  if ((param_2->Object == (FPortableObjectEntry *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  iVar9 = (param_2->Object->ReferenceComments).ArrayNum;
  if ((param_1->Object == (FPortableObjectEntry *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if (iVar9 < (param_1->Object->ReferenceComments).ArrayNum) {
    iVar9 = (param_1->Object->ReferenceComments).ArrayNum;
  }
  uVar13 = 0;
  if (0 < iVar9) {
    lVar14 = 0;
    local_res10 = 0;
    do {
      if ((param_1->Object == (FPortableObjectEntry *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      if (((int)uVar13 < 0) || ((param_1->Object->ReferenceComments).ArrayNum <= (int)uVar13)) {
        if ((param_2->Object == (FPortableObjectEntry *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        if ((-1 < (int)uVar13) && ((int)uVar13 < (param_2->Object->ReferenceComments).ArrayNum))
        goto LAB_146b4b029;
      }
      if ((param_1->Object == (FPortableObjectEntry *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      if ((-1 < (int)uVar13) && ((int)uVar13 < (param_1->Object->ReferenceComments).ArrayNum)) {
        if ((param_2->Object == (FPortableObjectEntry *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        if ((param_2->Object->ReferenceComments).ArrayNum <= (int)uVar13) goto LAB_146b4b025;
      }
      if ((param_1->Object == (FPortableObjectEntry *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      if (((int)uVar13 < 0) || ((param_1->Object->ReferenceComments).ArrayNum <= (int)uVar13)) {
LAB_146b4a735:
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("A->ReferenceComments.IsValidIndex(index) && B->ReferenceComments.IsValidIndex(index)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\PortableObjectFormatDOM.cpp"
                           ,0x36d,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      else {
        if ((param_2->Object == (FPortableObjectEntry *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        if ((param_2->Object->ReferenceComments).ArrayNum <= (int)uVar13) goto LAB_146b4a735;
      }
      if ((param_2->Object == (FPortableObjectEntry *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar1 = param_2->Object;
      uVar7 = 0;
      if ((int)uVar13 < (pFVar1->ReferenceComments).ArrayNum) {
        uVar7 = ~uVar13 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar2 = (pFVar1->ReferenceComments).AllocatorInstance.Data;
      if ((param_1->Object == (FPortableObjectEntry *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar1 = param_1->Object;
      uVar7 = 0;
      if ((int)uVar13 < (pFVar1->ReferenceComments).ArrayNum) {
        uVar7 = ~uVar13 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar3 = (pFVar1->ReferenceComments).AllocatorInstance.Data;
      if (*(int *)(pFVar2 + lVar14 + 8) == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = *(wchar_t **)(pFVar2 + lVar14);
      }
      if (*(int *)(pFVar3 + lVar14 + 8) == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = *(wchar_t **)(pFVar3 + lVar14);
      }
      iVar8 = FGenericPlatformStricmp::Stricmp(pwVar10,pwVar11);
      if (iVar8 < 0) goto LAB_146b4b029;
      if ((param_2->Object == (FPortableObjectEntry *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar1 = param_2->Object;
      uVar7 = 0;
      if ((int)uVar13 < (pFVar1->ReferenceComments).ArrayNum) {
        uVar7 = ~uVar13 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar2 = (pFVar1->ReferenceComments).AllocatorInstance.Data;
      if ((param_1->Object == (FPortableObjectEntry *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar1 = param_1->Object;
      uVar7 = 0;
      if ((int)uVar13 < (pFVar1->ReferenceComments).ArrayNum) {
        uVar7 = ~uVar13 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar3 = (pFVar1->ReferenceComments).AllocatorInstance.Data;
      if (*(int *)(pFVar3 + lVar14 + 8) == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = *(wchar_t **)(pFVar3 + lVar14);
      }
      if (*(int *)(pFVar2 + lVar14 + 8) == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = *(wchar_t **)(pFVar2 + lVar14);
      }
      iVar8 = FGenericPlatformStricmp::Stricmp(pwVar10,pwVar11);
      if (iVar8 < 0) goto LAB_146b4b025;
      uVar13 = uVar13 + 1;
      local_res10 = local_res10 + 1;
      lVar14 = lVar14 + 0x10;
    } while (local_res10 < iVar9);
  }
  if ((param_2->Object == (FPortableObjectEntry *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pFVar1 = param_2->Object;
  if ((param_1->Object == (FPortableObjectEntry *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if ((int)pFVar1->_padding_ == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)pFVar1->_padding_;
  }
  if ((int)param_1->Object->_padding_ == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)param_1->Object->_padding_;
  }
  iVar9 = FGenericPlatformStricmp::Stricmp(pwVar10,pwVar11);
  if (iVar9 < 0) {
LAB_146b4b029:
    bVar5 = true;
  }
  else {
    if ((param_2->Object == (FPortableObjectEntry *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    pFVar1 = param_2->Object;
    if ((param_1->Object == (FPortableObjectEntry *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    if ((int)param_1->Object->_padding_ == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)param_1->Object->_padding_;
    }
    if ((int)pFVar1->_padding_ == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)pFVar1->_padding_;
    }
    iVar9 = FGenericPlatformStricmp::Stricmp(pwVar10,pwVar11);
    if (-1 < iVar9) {
      if ((param_2->Object == (FPortableObjectEntry *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      iVar9 = (param_2->Object->ExtractedComments).ArrayNum;
      if ((param_1->Object == (FPortableObjectEntry *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      if (iVar9 < (param_1->Object->ExtractedComments).ArrayNum) {
        iVar9 = (param_1->Object->ExtractedComments).ArrayNum;
      }
      uVar13 = 0;
      if (0 < iVar9) {
        lVar14 = 0;
        local_res10 = 0;
        do {
          if ((param_1->Object == (FPortableObjectEntry *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          if (((int)uVar13 < 0) || ((param_1->Object->ExtractedComments).ArrayNum <= (int)uVar13)) {
            if ((param_2->Object == (FPortableObjectEntry *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            if ((-1 < (int)uVar13) && ((int)uVar13 < (param_2->Object->ExtractedComments).ArrayNum))
            goto LAB_146b4b029;
          }
          if ((param_1->Object == (FPortableObjectEntry *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          if ((-1 < (int)uVar13) && ((int)uVar13 < (param_1->Object->ExtractedComments).ArrayNum)) {
            if ((param_2->Object == (FPortableObjectEntry *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            if ((param_2->Object->ExtractedComments).ArrayNum <= (int)uVar13) goto LAB_146b4b025;
          }
          if ((param_1->Object == (FPortableObjectEntry *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          if (((int)uVar13 < 0) || ((param_1->Object->ExtractedComments).ArrayNum <= (int)uVar13)) {
LAB_146b4ac8e:
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("A->ExtractedComments.IsValidIndex(i) && B->ExtractedComments.IsValidIndex(i)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\PortableObjectFormatDOM.cpp"
                               ,0x394,L"");
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
          }
          else {
            if ((param_2->Object == (FPortableObjectEntry *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            if ((param_2->Object->ExtractedComments).ArrayNum <= (int)uVar13) goto LAB_146b4ac8e;
          }
          if ((param_2->Object == (FPortableObjectEntry *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          pFVar1 = param_2->Object;
          uVar7 = 0;
          if ((int)uVar13 < (pFVar1->ExtractedComments).ArrayNum) {
            uVar7 = ~uVar13 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          pFVar2 = (pFVar1->ExtractedComments).AllocatorInstance.Data;
          if ((param_1->Object == (FPortableObjectEntry *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          pFVar1 = param_1->Object;
          uVar7 = 0;
          if ((int)uVar13 < (pFVar1->ExtractedComments).ArrayNum) {
            uVar7 = ~uVar13 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          pFVar3 = (pFVar1->ExtractedComments).AllocatorInstance.Data;
          if (*(int *)(pFVar2 + lVar14 + 8) == 0) {
            pwVar11 = L"";
          }
          else {
            pwVar11 = *(wchar_t **)(pFVar2 + lVar14);
          }
          if (*(int *)(pFVar3 + lVar14 + 8) == 0) {
            pwVar10 = L"";
          }
          else {
            pwVar10 = *(wchar_t **)(pFVar3 + lVar14);
          }
          iVar8 = FGenericPlatformStricmp::Stricmp(pwVar10,pwVar11);
          if (iVar8 < 0) goto LAB_146b4b029;
          if ((param_2->Object == (FPortableObjectEntry *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          pFVar1 = param_2->Object;
          uVar7 = 0;
          if ((int)uVar13 < (pFVar1->ExtractedComments).ArrayNum) {
            uVar7 = ~uVar13 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          pFVar2 = (pFVar1->ExtractedComments).AllocatorInstance.Data;
          if ((param_1->Object == (FPortableObjectEntry *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          pFVar1 = param_1->Object;
          uVar7 = 0;
          if ((int)uVar13 < (pFVar1->ExtractedComments).ArrayNum) {
            uVar7 = ~uVar13 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          pFVar3 = (pFVar1->ExtractedComments).AllocatorInstance.Data;
          if (*(int *)(pFVar3 + lVar14 + 8) == 0) {
            pwVar11 = L"";
          }
          else {
            pwVar11 = *(wchar_t **)(pFVar3 + lVar14);
          }
          if (*(int *)(pFVar2 + lVar14 + 8) == 0) {
            pwVar10 = L"";
          }
          else {
            pwVar10 = *(wchar_t **)(pFVar2 + lVar14);
          }
          iVar8 = FGenericPlatformStricmp::Stricmp(pwVar10,pwVar11);
          if (iVar8 < 0) goto LAB_146b4b025;
          uVar13 = uVar13 + 1;
          local_res10 = local_res10 + 1;
          lVar14 = lVar14 + 0x10;
        } while (local_res10 < iVar9);
      }
      if ((param_2->Object == (FPortableObjectEntry *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar1 = param_2->Object;
      if ((param_1->Object == (FPortableObjectEntry *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      if ((int)pFVar1->_padding_ == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = (wchar_t *)pFVar1->_padding_;
      }
      if ((int)param_1->Object->_padding_ == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = (wchar_t *)param_1->Object->_padding_;
      }
      iVar9 = FGenericPlatformStricmp::Stricmp(pwVar10,pwVar11);
      if (iVar9 < 0) goto LAB_146b4b029;
      if ((param_2->Object == (FPortableObjectEntry *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar1 = param_2->Object;
      if ((param_1->Object == (FPortableObjectEntry *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      if ((int)param_1->Object->_padding_ == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = (wchar_t *)param_1->Object->_padding_;
      }
      if ((int)pFVar1->_padding_ != 0) {
        pwVar12 = (wchar_t *)pFVar1->_padding_;
      }
      iVar9 = FGenericPlatformStricmp::Stricmp(pwVar12,pwVar11);
      if (-1 < iVar9) {
        return param_1->Object < param_2->Object;
      }
    }
LAB_146b4b025:
    bVar5 = false;
  }
  return bVar5;
}

// operator() @ 146b4cf60

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall `FPortableObjectFormatDOM::FromString'::__l7::<lambda_2>::operator()(void *this)

{
  int iVar1;
  longlong *plVar2;
  ITextData *pIVar3;
  ITextData *pIVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  int iVar8;
  undefined1 local_res8 [8];
  TStringView<wchar_t> local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  plVar2 = *(longlong **)this;
  local_58.DataPtr = (wchar_t *)**(undefined8 **)((longlong)this + 0x10);
  iVar1 = *(int *)(*(undefined8 **)((longlong)this + 0x10) + 1);
  iVar8 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar8 = 0;
  }
  local_58.Size = iVar8;
  pFVar5 = FText::AsCultureInvariant(&local_28,&local_58);
  iVar8 = *(int *)((longlong)this + 8);
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"PortableObjectFormatDOM",
                      L"Error_FailedToParseQuoteDelimitedString",
                      L"Failed to parse a quote-delimited string from line {0}: {1}");
  pFVar7 = FTextFormat::FTextFormat(&local_18,pFVar6,Default);
  pFVar5 = FText::Format<unsigned_int,FText>(&local_48,pFVar7,iVar8 + 1,pFVar5);
  plVar2 = (longlong *)*plVar2;
  if (plVar2 != (longlong *)0x0) {
    pIVar3 = (pFVar5->TextData).Reference;
    pIVar4 = (ITextData *)*plVar2;
    if (pIVar4 != pIVar3) {
      *plVar2 = (longlong)pIVar3;
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res8);
      }
      if (pIVar4 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
      }
    }
    *(uint *)(plVar2 + 1) = pFVar5->Flags;
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return;
}

// AddEntry @ 146b4f670

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __thiscall
FPortableObjectFormatDOM::AddEntry
          (FPortableObjectFormatDOM *this,TSharedRef<FPortableObjectEntry,1> *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FPortableObjectEntry *this_00;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  TTuple<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  FPortableObjectEntry *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [16];
  FPortableObjectEntry *local_48;
  TReferenceControllerBase<1> *local_40;
  FPortableObjectEntry *local_38;
  FPortableObjectEntry **local_30;
  
  pFVar8 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = TSet<TTuple<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>_>,TDefaultMapHashableKeyFuncs<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>_>,TDefaultMapHashableKeyFuncs<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>,0>,FDefaultSetAllocator>
                   *)&this->Entries,(FPortableObjectEntryKey *)pFVar8);
  if (pTVar6 == (TTuple<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>_> *)0x0) {
    pTVar9 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar8 = param_1->Object;
  }
  else {
    pTVar9 = *(TReferenceControllerBase<1> **)&pTVar6->field_0x38;
    this_00 = *(FPortableObjectEntry **)&pTVar6->field_0x30;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar8 = param_1->Object;
    if (this_00 != (FPortableObjectEntry *)0x0) {
      pFVar7 = (pFVar8->ReferenceComments).AllocatorInstance.Data;
      iVar1 = (pFVar8->ReferenceComments).ArrayNum;
      pFVar10 = pFVar7 + (longlong)iVar1 * 0x10;
      while( true ) {
        if ((pFVar8->ReferenceComments).ArrayNum != iVar1) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pFVar7 == pFVar10) break;
        if (1 < *(int *)(pFVar7 + 8)) {
          TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
                    (&this_00->ReferenceComments,(FString *)pFVar7);
        }
        pFVar7 = pFVar7 + 0x10;
      }
      if (this_00 == (FPortableObjectEntry *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      FPortableObjectEntry::AddExtractedComments(this_00,&param_1->Object->ExtractedComments);
      pFVar8 = param_1->Object;
      if (this_00 == (FPortableObjectEntry *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      iVar1 = (pFVar8->TranslatorComments).ArrayNum;
      if (iVar1 == (this_00->TranslatorComments).ArrayNum) {
        bVar4 = CompareItems<FString,int>
                          ((FString *)(pFVar8->TranslatorComments).AllocatorInstance.Data,
                           (FString *)(this_00->TranslatorComments).AllocatorInstance.Data,iVar1);
        if (bVar4) goto LAB_146b4f843;
      }
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("LocEntry->TranslatorComments == ExistingEntry->TranslatorComments",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\PortableObjectFormatDOM.cpp"
                         ,0x33e,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      goto LAB_146b4f843;
    }
  }
  local_40 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = param_1->Object;
  local_30 = &local_48;
  local_48 = pFVar8;
  TSet<TTuple<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>_>,TDefaultMapHashableKeyFuncs<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FPortableObjectEntryKey_const_&,TSharedPtr<FPortableObjectEntry,1>_&&>_>
            ((TSet<TTuple<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>_>,TDefaultMapHashableKeyFuncs<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>,0>,FDefaultSetAllocator>
              *)&this->Entries,
             (TPairInitializer<FPortableObjectEntryKey_const_&,TSharedPtr<FPortableObjectEntry,1>_&&>
              *)(local_res8 + 8),(bool *)&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
LAB_146b4f843:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// CreateNewHeader @ 146b53660

/* WARNING: Removing unreachable block (ram,0x000146b53b31) */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
FPortableObjectFormatDOM::CreateNewHeader(FPortableObjectFormatDOM *this,FString *param_1)

{
  FPortableObjectHeader *this_00;
  FCulture *this_01;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  FScriptContainerElement *pFVar5;
  ForAnyElementType FVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  FString local_138;
  FString local_128;
  ForAnyElementType local_118;
  int local_110;
  int local_10c;
  ForAnyElementType local_108;
  int local_100;
  int local_fc;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  this_00 = &this->Header;
  FPortableObjectHeader::Clear(this_00);
  local_110 = (this->ProjectName).Data.ArrayNum;
  lVar8 = (longlong)local_110;
  pFVar7 = (this->ProjectName).Data.AllocatorInstance.Data;
  local_118.Data = (FScriptContainerElement *)0x0;
  if (local_110 == 0) {
    local_10c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_110,0,&local_118,local_110,&local_10c);
    memcpy(local_118.Data,pFVar7,lVar8 * 2);
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_110 != 0) {
    FVar6.Data = local_118.Data;
  }
  ::FString::FString(&local_d8,(wchar_t *)FVar6.Data);
  ::FString::FString(&local_e8,L"Project-Id-Version");
  FPortableObjectHeader::SetEntryValue(this_00,&local_e8,&local_d8);
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (local_118.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data);
  }
  FPortableObjectHeader::UpdateTimeStamp(this_00);
  ::FString::FString(&local_b8,L"");
  ::FString::FString(&local_c8,L"Language-Team");
  FPortableObjectHeader::SetEntryValue(this_00,&local_c8,&local_b8);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_a8,L"Language");
  FPortableObjectHeader::SetEntryValue(this_00,&local_a8,(FString *)this);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_88,L"1.0");
  ::FString::FString(&local_98,L"MIME-Version");
  FPortableObjectHeader::SetEntryValue(this_00,&local_98,&local_88);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_68,L"text/plain; charset=UTF-8");
  ::FString::FString(&local_78,L"Content-Type");
  FPortableObjectHeader::SetEntryValue(this_00,&local_78,&local_68);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_48,L"8bit");
  ::FString::FString(&local_58,L"Content-Transfer-Encoding");
  FPortableObjectHeader::SetEntryValue(this_00,&local_58,&local_48);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  iVar3 = (this->Language).LanguagePluralForms.Data.ArrayNum;
  if (iVar3 < 2) {
    FPortableObjectCulture::GetDefaultPluralForms(&this->Language,&local_f8);
  }
  else {
    pFVar7 = (this->Language).LanguagePluralForms.Data.AllocatorInstance.Data;
    local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.Data.ArrayNum = iVar3;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar3,0,(ForAnyElementType *)&local_f8,iVar3,&local_f8.Data.ArrayMax);
    memcpy(local_f8.Data.AllocatorInstance.Data,pFVar7,(longlong)iVar3 * 2);
  }
  ::FString::FString(&local_38,L"Plural-Forms");
  FPortableObjectHeader::SetEntryValue(this_00,&local_38,&local_f8);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  this_01 = (this->Language).Culture.Object;
  local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.Data.ArrayNum = 0;
  local_138.Data.ArrayMax = 0;
  if ((this_01 != (FCulture *)0x0) &&
     (pFVar4 = FCulture::GetEnglishName(this_01), &local_138 != pFVar4)) {
    iVar3 = (pFVar4->Data).ArrayNum;
    pFVar7 = (pFVar4->Data).AllocatorInstance.Data;
    local_138.Data.ArrayNum = iVar3;
    if (((iVar3 != 0) || (local_138.Data.ArrayMax != 0)) &&
       (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar3,local_138.Data.ArrayMax,(ForAnyElementType *)&local_138,iVar3,
                   &local_138.Data.ArrayMax), iVar3 != 0)) {
      memcpy(local_138.Data.AllocatorInstance.Data,pFVar7,(longlong)iVar3 * 2);
    }
  }
  local_100 = (this->ProjectName).Data.ArrayNum;
  lVar8 = (longlong)local_100;
  pFVar7 = (this->ProjectName).Data.AllocatorInstance.Data;
  local_108.Data = (FScriptContainerElement *)0x0;
  if (local_100 == 0) {
    local_fc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_100,0,&local_108,local_100,&local_fc);
    memcpy(local_108.Data,pFVar7,lVar8 * 2);
  }
  ::FString::PrintfImpl(&local_128,L"%s %s translation.");
  pFVar7 = (this_00->Comments).AllocatorInstance.Data;
  if (((pFVar7 <= (FScriptContainerElement *)&local_128) &&
      ((FScriptContainerElement *)&local_128 <
       pFVar7 + (longlong)(this->Header).Comments.ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = (this->Header).Comments.ArrayNum;
  if (iVar3 == (this->Header).Comments.ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this_00,&(this->Header).Comments.ArrayMax);
  }
  (this->Header).Comments.ArrayNum = iVar3 + 1;
  pFVar7 = (this_00->Comments).AllocatorInstance.Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar7 = 0;
  *(FScriptContainerElement **)pFVar7 = local_128.Data.AllocatorInstance.Data;
  *(int *)(pFVar7 + 8) = local_128.Data.ArrayNum;
  *(int *)(pFVar7 + 0xc) = local_128.Data.ArrayMax;
  local_128.Data.ArrayNum = 0;
  local_128.Data.ArrayMax = 0;
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_108.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data);
  }
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  if (1 < (param_1->Data).ArrayNum) {
    pFVar7 = (this_00->Comments).AllocatorInstance.Data;
    if (((pFVar7 <= param_1) &&
        (param_1 < pFVar7 + (longlong)(this->Header).Comments.ArrayMax * 0x10)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar3 = (this->Header).Comments.ArrayNum;
    if (iVar3 == (this->Header).Comments.ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)this_00,&(this->Header).Comments.ArrayMax);
    }
    (this->Header).Comments.ArrayNum = iVar3 + 1;
    ::FString::FString((FString *)
                       ((this_00->Comments).AllocatorInstance.Data + (longlong)iVar3 * 0x10),param_1
                      );
  }
  pFVar5 = (FScriptContainerElement *)::FString::FString(&local_28,L"");
  pFVar7 = (this_00->Comments).AllocatorInstance.Data;
  if (((pFVar7 <= pFVar5) && (pFVar5 < pFVar7 + (longlong)(this->Header).Comments.ArrayMax * 0x10))
     && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = (this->Header).Comments.ArrayNum;
  if (iVar3 == (this->Header).Comments.ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this_00,&(this->Header).Comments.ArrayMax);
  }
  (this->Header).Comments.ArrayNum = iVar3 + 1;
  pFVar7 = (this_00->Comments).AllocatorInstance.Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar7 = 0;
  *(FScriptContainerElement **)pFVar7 =
       (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar5->field_0x0)->AllocatorInstance).Data
  ;
  (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar5->field_0x0)->AllocatorInstance).Data =
       (FScriptContainerElement *)0x0;
  *(int *)(pFVar7 + 8) = *(int *)&pFVar5[8].field_0x0;
  *(int *)(pFVar7 + 0xc) = *(int *)&pFVar5[0xc].field_0x0;
  *(undefined8 *)&pFVar5[8].field_0x0 = 0;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// FindEntry @ 146b5f260

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TSharedPtr<FPortableObjectEntry,1> * __thiscall
FPortableObjectFormatDOM::FindEntry
          (FPortableObjectFormatDOM *this,TSharedPtr<FPortableObjectEntry,1> *__return_storage_ptr__
          ,FString *param_1,FString *param_2,FString *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  TTuple<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>_> *pTVar2;
  FPortableObjectEntryKey local_38;
  
  ::FString::FString(&local_38.MsgId,param_1);
  ::FString::FString(&local_38.MsgIdPlural,param_2);
  ::FString::FString(&local_38.MsgCtxt,param_3);
  pTVar2 = TSet<TTuple<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>_>,TDefaultMapHashableKeyFuncs<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>_>,TDefaultMapHashableKeyFuncs<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>,0>,FDefaultSetAllocator>
                   *)&this->Entries,&local_38);
  if (pTVar2 == (TTuple<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>_> *)0x0) {
    __return_storage_ptr__->Object = (FPortableObjectEntry *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    __return_storage_ptr__->Object = *(FPortableObjectEntry **)&pTVar2->field_0x30;
    pTVar1 = *(TReferenceControllerBase<1> **)&pTVar2->field_0x38;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  if (local_38.MsgCtxt.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.MsgCtxt.Data.AllocatorInstance.Data);
  }
  if (local_38.MsgIdPlural.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.MsgIdPlural.Data.AllocatorInstance.Data);
  }
  if (local_38.MsgId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.MsgId.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FindEntry @ 146b5f320

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TSharedPtr<FPortableObjectEntry,1> * __thiscall
FPortableObjectFormatDOM::FindEntry
          (FPortableObjectFormatDOM *this,TSharedPtr<FPortableObjectEntry,1> *__return_storage_ptr__
          ,TSharedRef<FPortableObjectEntry_const_,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TTuple<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>_> *pTVar2;
  
  pTVar2 = TSet<TTuple<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>_>,TDefaultMapHashableKeyFuncs<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>_>,TDefaultMapHashableKeyFuncs<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>,0>,FDefaultSetAllocator>
                   *)&this->Entries,(FPortableObjectEntryKey *)param_1->Object);
  if (pTVar2 == (TTuple<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>_> *)0x0) {
    __return_storage_ptr__->Object = (FPortableObjectEntry *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    __return_storage_ptr__->Object = *(FPortableObjectEntry **)&pTVar2->field_0x30;
    pTVar1 = *(TReferenceControllerBase<1> **)&pTVar2->field_0x38;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// FromString @ 146b61090

/* WARNING: Removing unreachable block (ram,0x000146b61c1c) */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FPortableObjectFormatDOM::FromString(FPortableObjectFormatDOM *this,FString *param_1,FText *param_2)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  ITextData *pIVar3;
  ITextData *pIVar4;
  void *_Src;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FSharedReferencer<1> FVar10;
  bool bVar11;
  undefined1 uVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  FText *pFVar20;
  FPortableObjectEntry *pFVar21;
  FPortableObjectEntry *pFVar22;
  FString *pFVar23;
  FScriptContainerElement *pFVar24;
  FText *pFVar25;
  FTextFormat *pFVar26;
  wchar_t *pwVar27;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar28;
  ForAnyElementType FVar29;
  bool bVar30;
  longlong lVar31;
  int iVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  FScriptContainerElement *pFVar36;
  undefined1 local_res18 [8];
  uint local_res20;
  TArray<FString,TSizedDefaultAllocator<32>_> local_4b8;
  TSharedRef<FPortableObjectEntry,1> local_4a8;
  ForAnyElementType local_498;
  undefined8 local_490;
  FString local_488;
  uint local_478;
  FString local_470;
  FString local_460;
  FText *local_450;
  FString local_448;
  FString local_438;
  FString local_428;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_418;
  FString local_408;
  FString local_3f8;
  FString local_3e8;
  FString local_3d8;
  FText **local_3c8;
  uint local_3c0;
  FScriptContainerElement *local_3b8;
  FString local_3b0;
  FString local_3a0;
  undefined1 local_390 [4];
  undefined1 local_38c [4];
  undefined1 local_388 [8];
  TRawPtrProxy<FPortableObjectEntry> local_380;
  TRawPtrProxy<FPortableObjectEntry> local_378;
  FString local_370;
  FString local_360;
  FString local_350;
  FString local_340;
  FString local_330;
  FString local_320;
  FString local_310;
  FString local_300;
  FString local_2f0;
  FString local_2e0;
  FString local_2d0;
  FString local_2c0;
  FString local_2b0;
  FString local_2a0;
  FString local_290;
  FString local_280;
  FString local_270;
  FString local_260;
  FString local_250;
  FString local_240;
  FString local_230;
  FString local_220;
  FString local_210;
  FString local_200;
  wchar_t *local_1e8;
  uint uStack_1e0;
  undefined4 uStack_1dc;
  FString local_1d8;
  TSharedRef<FPortableObjectEntry_const_,1> local_1c8;
  TSharedRef<FPortableObjectEntry,1> local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FText local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FText local_c8;
  FText local_b8;
  TStringView<wchar_t> local_a8;
  FText local_98;
  FText local_88;
  FString local_78;
  FText local_68;
  FTextFormat local_58;
  
  local_3d8.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar31 = (longlong)local_3d8.Data.ArrayNum;
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  bVar14 = false;
  bVar6 = false;
  bVar30 = false;
  local_450 = param_2;
  if (local_3d8.Data.ArrayNum < 2) {
    pFVar20 = FText::AsLocalizable_Advanced_LocText
                        (&local_178,L"PortableObjectFormatDOM",L"Error_EmptyPOFile",
                         L"The PO/POT source was empty.");
    pFVar25 = local_450;
    if (local_450 != (FText *)0x0) {
      pIVar3 = (pFVar20->TextData).Reference;
      pIVar4 = (local_450->TextData).Reference;
      if (pIVar4 != pIVar3) {
        (local_450->TextData).Reference = pIVar3;
        if (pIVar3 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_390);
        }
        if (pIVar4 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
        }
      }
      pFVar25->Flags = pFVar20->Flags;
    }
    if (local_178.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
    }
    return false;
  }
  pFVar36 = (param_1->Data).AllocatorInstance.Data;
  local_3d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,local_3d8.Data.ArrayNum,0,(ForAnyElementType *)&local_3d8,local_3d8.Data.ArrayNum,
             &local_3d8.Data.ArrayMax);
  memcpy(local_3d8.Data.AllocatorInstance.Data,pFVar36,lVar31 * 2);
  ::FString::ReplaceInline(&local_3d8,L"\r\n",NewLineDelimiter,CaseSensitive);
  pFVar22 = (FPortableObjectEntry *)0x0;
  local_4b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4b8.ArrayNum = 0;
  local_4b8.ArrayMax = 0;
  ::FString::ParseIntoArray(&local_3d8,&local_4b8,NewLineDelimiter,false);
  pFVar21 = ::operator_new(0x90);
  local_380.Object = pFVar22;
  if (pFVar21 != (FPortableObjectEntry *)0x0) {
    pFVar21->_padding_ = 0;
    pFVar21->_padding_ = 0;
    pFVar21->_padding_ = 0;
    pFVar21->_padding_ = 0;
    pFVar21->_padding_ = 0;
    pFVar21->_padding_ = 0;
    (pFVar21->MsgStr).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar21->MsgStr).ArrayNum = 0;
    (pFVar21->MsgStr).ArrayMax = 0;
    (pFVar21->ExtractedComments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar21->ExtractedComments).ArrayNum = 0;
    (pFVar21->ExtractedComments).ArrayMax = 0;
    (pFVar21->TranslatorComments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar21->TranslatorComments).ArrayNum = 0;
    (pFVar21->TranslatorComments).ArrayMax = 0;
    (pFVar21->ReferenceComments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar21->ReferenceComments).ArrayNum = 0;
    (pFVar21->ReferenceComments).ArrayMax = 0;
    (pFVar21->Flags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar21->Flags).ArrayNum = 0;
    (pFVar21->Flags).ArrayMax = 0;
    (pFVar21->UnknownElements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar21->UnknownElements).ArrayNum = 0;
    (pFVar21->UnknownElements).ArrayMax = 0;
    local_380.Object = pFVar21;
  }
  TSharedRef<FPortableObjectEntry,1>::TSharedRef<FPortableObjectEntry,1><FPortableObjectEntry>
            (&local_4a8,&local_380);
  bVar13 = false;
  local_res20 = local_4b8.ArrayNum;
  pFVar21 = local_4a8.Object;
  uVar19 = local_4b8.ArrayNum;
  if (local_4b8.ArrayNum == 0) {
LAB_146b6328e:
    bVar30 = true;
LAB_146b63296:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4a8.SharedReferenceCount.ReferenceController);
    DestructItems<FString,int>((FString *)local_4b8.AllocatorInstance.Data,local_4b8.ArrayNum);
    if (local_4b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4b8.AllocatorInstance.Data);
    }
    if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
    }
    return bVar30;
  }
LAB_146b61280:
  uVar35 = (uint)pFVar22;
  uVar34 = 0;
  uVar33 = uVar34;
  if ((int)uVar35 < local_4b8.ArrayNum) {
    uVar33 = ~uVar35 >> 0x1f;
  }
  if ((uVar33 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar5 = (code *)swi(3);
    uVar12 = (*pcVar5)();
    return (bool)uVar12;
  }
  FVar10.ReferenceController = local_4a8.SharedReferenceCount.ReferenceController;
  local_3c8 = &local_450;
  pFVar36 = local_4b8.AllocatorInstance.Data + (longlong)(int)uVar35 * 0x10;
  local_3c0 = uVar35;
  local_3b8 = pFVar36;
  if (*(int *)(pFVar36 + 8) < 2) {
    if ((!bVar13) || (iVar17 = (pFVar21->MsgStr).ArrayNum, iVar17 < 1)) goto LAB_146b6150f;
    if (((int)pFVar21->_padding_ < 2) && (iVar17 == 1)) {
      local_1c8.Object = local_4a8.Object;
      local_1c8.SharedReferenceCount.ReferenceController =
           local_4a8.SharedReferenceCount.ReferenceController;
      if (local_4a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_4a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_4a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar13 = FPortableObjectHeader::FromLocPOEntry(&this->Header,&local_1c8);
      if (bVar13) {
        ::FString::FString(&local_370,L"Project-Id-Version");
        iVar17 = (this->Header).HeaderEntries.ArrayNum;
        pFVar36 = (this->Header).HeaderEntries.AllocatorInstance.Data;
        local_498.Data = (FScriptContainerElement *)0x0;
        pFVar24 = pFVar36 + (longlong)iVar17 * 0x20;
        local_490 = 0;
        do {
          if ((this->Header).HeaderEntries.ArrayNum != iVar17) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<TTuple<FString,FString>_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res18);
          }
          if (pFVar36 == pFVar24) goto LAB_146b6146e;
          iVar16 = *(int *)(pFVar36 + 8);
          if (iVar16 == local_370.Data.ArrayNum) {
            if (iVar16 < 2) goto LAB_146b613fa;
            iVar16 = FGenericPlatformStricmp::Stricmp
                               (*(wchar_t **)pFVar36,
                                (wchar_t *)local_370.Data.AllocatorInstance.Data);
            bVar13 = iVar16 == 0;
          }
          else {
            bVar13 = iVar16 + local_370.Data.ArrayNum == 1;
          }
          if (bVar13) goto LAB_146b613fa;
          pFVar36 = pFVar36 + 0x20;
        } while( true );
      }
      pFVar20 = FText::AsLocalizable_Advanced_LocText
                          (&local_c8,L"PortableObjectFormatDOM",L"Error_FailedToAddHeader",
                           L"Failed to add PO/POT header information to the DOM.");
      pFVar25 = local_450;
      local_b8.TextData.Reference = local_c8.TextData.Reference;
      if (local_450 != (FText *)0x0) {
        pIVar3 = (pFVar20->TextData).Reference;
        pIVar4 = (local_450->TextData).Reference;
        if (pIVar4 != pIVar3) {
          (local_450->TextData).Reference = pIVar3;
          if (pIVar3 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_38c);
          }
          if (pIVar4 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
          }
        }
        pFVar25->Flags = pFVar20->Flags;
        local_b8.TextData.Reference = local_c8.TextData.Reference;
      }
    }
    else {
      local_1b8.Object = local_4a8.Object;
      local_1b8.SharedReferenceCount.ReferenceController =
           local_4a8.SharedReferenceCount.ReferenceController;
      if (local_4a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_4a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_4a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar13 = AddEntry(this,&local_1b8);
      if (bVar13) goto LAB_146b6150f;
      pFVar20 = FText::AsLocalizable_Advanced_LocText
                          (&local_b8,L"PortableObjectFormatDOM",L"Error_FailedToAddEntry",
                           L"Failed to add PO/POT entry information to the DOM.");
      pFVar25 = local_450;
      if (local_450 != (FText *)0x0) {
        pIVar3 = (pFVar20->TextData).Reference;
        pIVar4 = (local_450->TextData).Reference;
        if (pIVar4 != pIVar3) {
          (local_450->TextData).Reference = pIVar3;
          if (pIVar3 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_388);
          }
          if (pIVar4 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
          }
        }
        pFVar25->Flags = pFVar20->Flags;
      }
    }
    if (local_b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
    }
    bVar30 = false;
    local_4a8.SharedReferenceCount.ReferenceController = FVar10.ReferenceController;
    goto LAB_146b63296;
  }
  bVar11 = ::FString::StartsWith((FString *)pFVar36,L"#,",2,IgnoreCase);
  if (bVar11) {
    local_488.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_488.Data.ArrayNum = 0;
    local_488.Data.ArrayMax = 0;
    ::FString::FString(&local_360,NewLineDelimiter);
    ::FString::FString(&local_3b0,L"#,");
    iVar17 = local_3b0.Data.ArrayNum + -1;
    FVar29.Data = local_3b0.Data.AllocatorInstance.Data;
    if (local_3b0.Data.ArrayNum == 0) {
      iVar17 = 0;
      FVar29.Data = (FScriptContainerElement *)L"";
    }
    iVar16 = ::FString::Find((FString *)pFVar36,(wchar_t *)FVar29.Data,iVar17,CaseSensitive,
                             FromStart,-1);
    iVar17 = local_360.Data.ArrayNum + -1;
    FVar29.Data = local_360.Data.AllocatorInstance.Data;
    if (local_360.Data.ArrayNum == 0) {
      iVar17 = 0;
      FVar29.Data = (FScriptContainerElement *)L"";
    }
    iVar17 = ::FString::Find((FString *)pFVar36,(wchar_t *)FVar29.Data,iVar17,CaseSensitive,FromEnd,
                             -1);
    if ((iVar16 == -1) || (iVar17 <= iVar16)) {
      bVar11 = false;
    }
    else {
      iVar32 = local_3b0.Data.ArrayNum + -1 + iVar16;
      if (local_3b0.Data.ArrayNum == 0) {
        iVar32 = iVar16;
      }
      if (iVar32 < iVar17) {
        pFVar23 = ::FString::Mid((FString *)pFVar36,&local_1a8,iVar32,iVar17 - iVar32);
        if (&local_488 != pFVar23) {
          if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_488.Data.AllocatorInstance.Data);
          }
          local_488.Data.AllocatorInstance.Data = (pFVar23->Data).AllocatorInstance.Data;
          (pFVar23->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_488.Data.ArrayNum = (pFVar23->Data).ArrayNum;
          local_488.Data.ArrayMax = (pFVar23->Data).ArrayMax;
          (pFVar23->Data).ArrayNum = 0;
          (pFVar23->Data).ArrayMax = 0;
        }
        if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
        }
        bVar11 = true;
      }
      else {
        ::FString::operator=(&local_488,L"");
        bVar11 = true;
      }
    }
    if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
    }
    if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_360.Data.AllocatorInstance.Data);
    }
    if ((bVar11) && (1 < local_488.Data.ArrayNum)) {
      pFVar36 = (pFVar21->Flags).AllocatorInstance.Data;
      if ((pFVar36 <= (FScriptContainerElement *)&local_488) &&
         (((FScriptContainerElement *)&local_488 <
           pFVar36 + (longlong)(pFVar21->Flags).ArrayMax * 0x10 &&
          (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar11)))) {
        pcVar5 = (code *)swi(3);
        uVar12 = (*pcVar5)();
        return (bool)uVar12;
      }
      iVar17 = (pFVar21->Flags).ArrayNum;
      piVar1 = &(pFVar21->Flags).ArrayMax;
      if (iVar17 == *piVar1) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&(pFVar21->Flags).AllocatorInstance,piVar1);
      }
      FVar29.Data = local_488.Data.AllocatorInstance.Data;
      (pFVar21->Flags).ArrayNum = iVar17 + 1;
      pFVar36 = (pFVar21->Flags).AllocatorInstance.Data + (longlong)iVar17 * 0x10;
      *(FScriptContainerElement **)pFVar36 = (FScriptContainerElement *)0x0;
      lVar31 = (longlong)local_488.Data.ArrayNum;
      *(int *)(pFVar36 + 8) = local_488.Data.ArrayNum;
      if (local_488.Data.ArrayNum == 0) {
        *(int *)(pFVar36 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_488.Data.ArrayNum,0,(ForAnyElementType *)pFVar36,
                   local_488.Data.ArrayNum,(int *)(pFVar36 + 0xc));
                    /* WARNING: Load size is inaccurate */
        memcpy(*pFVar36,FVar29.Data,lVar31 * 2);
      }
    }
    if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_488.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar11 = ::FString::StartsWith((FString *)pFVar36,L"#.",2,IgnoreCase);
    if (bVar11) {
      pTVar2 = &pFVar21->ExtractedComments;
      pFVar23 = ::FString::FString(&local_188,L"#. ");
      iVar17 = (pFVar23->Data).ArrayNum;
      uVar33 = iVar17 - 1;
      if (iVar17 == 0) {
        uVar33 = uVar34;
      }
      pFVar24 = (FScriptContainerElement *)
                ::FString::RightChop((FString *)pFVar36,&local_198,uVar33);
      pFVar36 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar36 <= pFVar24) &&
          (pFVar24 < pFVar36 + (longlong)(pFVar21->ExtractedComments).ArrayMax * 0x10)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar5 = (code *)swi(3);
        uVar12 = (*pcVar5)();
        return (bool)uVar12;
      }
      iVar17 = (pFVar21->ExtractedComments).ArrayNum;
      piVar1 = &(pFVar21->ExtractedComments).ArrayMax;
      if (iVar17 == *piVar1) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar2->AllocatorInstance,piVar1);
      }
      (pFVar21->ExtractedComments).ArrayNum = iVar17 + 1;
      pFVar36 = (pTVar2->AllocatorInstance).Data + (longlong)iVar17 * 0x10;
      *(undefined8 *)pFVar36 = 0;
      *(undefined8 *)pFVar36 = *(undefined8 *)pFVar24;
      *(undefined8 *)pFVar24 = 0;
      *(int *)(pFVar36 + 8) = *(int *)(pFVar24 + 8);
      *(int *)(pFVar36 + 0xc) = *(int *)(pFVar24 + 0xc);
      *(undefined8 *)(pFVar24 + 8) = 0;
      FVar29.Data = local_188.Data.AllocatorInstance.Data;
      if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Data.AllocatorInstance.Data);
        FVar29.Data = local_188.Data.AllocatorInstance.Data;
      }
LAB_146b6304e:
      if (FVar29.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar29.Data);
      }
    }
    else {
      bVar11 = ::FString::StartsWith((FString *)pFVar36,L"#:",2,IgnoreCase);
      if (bVar11) {
        pFVar23 = ::FString::FString(&local_168,L"#: ");
        iVar17 = (pFVar23->Data).ArrayNum;
        uVar33 = iVar17 - 1;
        if (iVar17 == 0) {
          uVar33 = uVar34;
        }
        pFVar23 = ::FString::RightChop((FString *)pFVar36,&local_e8,uVar33);
        if (1 < (pFVar23->Data).ArrayNum) {
          TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
                    (&pFVar21->ReferenceComments,pFVar23);
        }
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
      }
      else {
        bVar11 = ::FString::StartsWith((FString *)pFVar36,L":|",2,IgnoreCase);
        if (!bVar11) {
          bVar11 = ::FString::StartsWith((FString *)pFVar36,L"# ",2,IgnoreCase);
          if ((bVar11) ||
             (bVar11 = ::FString::StartsWith((FString *)pFVar36,L"#\t",2,IgnoreCase), bVar11)) {
            pTVar2 = &pFVar21->TranslatorComments;
            pFVar23 = ::FString::FString(&local_d8,L"# ");
            iVar17 = (pFVar23->Data).ArrayNum;
            uVar33 = iVar17 - 1;
            if (iVar17 == 0) {
              uVar33 = uVar34;
            }
            pFVar24 = (FScriptContainerElement *)
                      ::FString::RightChop((FString *)pFVar36,&local_78,uVar33);
            pFVar36 = (pTVar2->AllocatorInstance).Data;
            if (((pFVar36 <= pFVar24) &&
                (pFVar24 < pFVar36 + (longlong)(pFVar21->TranslatorComments).ArrayMax * 0x10)) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar11)) {
              pcVar5 = (code *)swi(3);
              uVar12 = (*pcVar5)();
              return (bool)uVar12;
            }
            iVar17 = (pFVar21->TranslatorComments).ArrayNum;
            piVar1 = &(pFVar21->TranslatorComments).ArrayMax;
            if (iVar17 == *piVar1) {
              iVar17 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&pTVar2->AllocatorInstance,piVar1);
            }
            (pFVar21->TranslatorComments).ArrayNum = iVar17 + 1;
            pFVar36 = (pTVar2->AllocatorInstance).Data + (longlong)iVar17 * 0x10;
            *(undefined8 *)pFVar36 = 0;
            *(undefined8 *)pFVar36 = *(undefined8 *)pFVar24;
            *(undefined8 *)pFVar24 = 0;
            *(int *)(pFVar36 + 8) = *(int *)(pFVar24 + 8);
            *(int *)(pFVar36 + 0xc) = *(int *)(pFVar24 + 0xc);
            *(undefined8 *)(pFVar24 + 8) = 0;
            FVar29.Data = local_d8.Data.AllocatorInstance.Data;
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
              FVar29.Data = local_d8.Data.AllocatorInstance.Data;
            }
            goto LAB_146b6304e;
          }
          if (*(int *)(pFVar36 + 8) == 0) {
            pwVar27 = L"";
          }
          else {
            pwVar27 = *(wchar_t **)pFVar36;
          }
          iVar17 = FGenericPlatformStricmp::Stricmp(pwVar27,L"#");
          if (iVar17 == 0) {
            pTVar2 = &pFVar21->TranslatorComments;
            ::FString::FString(&local_448,L"");
            pFVar36 = (pTVar2->AllocatorInstance).Data;
            if (((pFVar36 <= (FScriptContainerElement *)&local_448) &&
                ((FScriptContainerElement *)&local_448 <
                 pFVar36 + (longlong)(pFVar21->TranslatorComments).ArrayMax * 0x10)) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar11)) {
              pcVar5 = (code *)swi(3);
              uVar12 = (*pcVar5)();
              return (bool)uVar12;
            }
            iVar17 = (pFVar21->TranslatorComments).ArrayNum;
            piVar1 = &(pFVar21->TranslatorComments).ArrayMax;
            if (iVar17 == *piVar1) {
              iVar17 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&pTVar2->AllocatorInstance,piVar1);
            }
            (pFVar21->TranslatorComments).ArrayNum = iVar17 + 1;
            pFVar36 = (pTVar2->AllocatorInstance).Data + (longlong)iVar17 * 0x10;
            *(undefined8 *)pFVar36 = 0;
            *(FScriptContainerElement **)pFVar36 = local_448.Data.AllocatorInstance.Data;
            local_448.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            *(int *)(pFVar36 + 8) = local_448.Data.ArrayNum;
            *(int *)(pFVar36 + 0xc) = local_448.Data.ArrayMax;
            local_448.Data.ArrayNum = 0;
            local_448.Data.ArrayMax = 0;
            goto LAB_146b63062;
          }
          bVar11 = ::FString::StartsWith((FString *)pFVar36,L"msgctxt",7,IgnoreCase);
          if (bVar11) {
            local_438.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_438.Data.ArrayNum = 0;
            local_438.Data.ArrayMax = 0;
            ::FString::FString(&local_2a0,L"\"");
            ::FString::FString(&local_1d8,L"\"");
            bVar11 = FindDelimitedString((FString *)pFVar36,&local_1d8,&local_2a0,&local_438);
            if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
            }
            if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
            }
            uVar19 = local_res20;
            if (bVar11) {
              uVar33 = uVar35 + 1;
              uVar34 = 0;
              local_478 = uVar33;
              do {
                bVar11 = bVar14;
                if (uVar33 < uVar19) {
                  uVar18 = uVar34;
                  if ((int)uVar33 < local_4b8.ArrayNum) {
                    uVar18 = ~uVar33 >> 0x1f;
                  }
                  if ((uVar18 == 0) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar14)) {
                    pcVar5 = (code *)swi(3);
                    uVar12 = (*pcVar5)();
                    return (bool)uVar12;
                  }
                  bVar14 = true;
                  pFVar23 = ::FString::TrimStartAndEnd
                                      ((FString *)
                                       (local_4b8.AllocatorInstance.Data +
                                       (longlong)(int)uVar33 * 0x10),&local_158);
                  bVar15 = ::FString::StartsWith(pFVar23,L"\"",1,IgnoreCase);
                  bVar11 = true;
                  if (!bVar15) goto LAB_146b61d66;
                  bVar11 = true;
                }
                else {
LAB_146b61d66:
                  bVar14 = bVar11;
                  bVar11 = false;
                }
                if ((bVar14) &&
                   (bVar14 = false,
                   local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                  FMemory::Free(local_158.Data.AllocatorInstance.Data);
                }
                uVar18 = local_478;
                if (!bVar11) goto joined_r0x000146b61f1b;
                local_460.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_460.Data.ArrayNum = 0;
                local_460.Data.ArrayMax = 0;
                ::FString::FString(&local_350,L"\"");
                ::FString::FString(&local_3a0,L"\"");
                uVar18 = local_3a0.Data.ArrayNum - 1;
                FVar29.Data = local_3a0.Data.AllocatorInstance.Data;
                if (local_3a0.Data.ArrayNum == 0) {
                  uVar18 = uVar34;
                  FVar29.Data = (FScriptContainerElement *)L"";
                }
                iVar17 = ::FString::Find((FString *)pFVar36,(wchar_t *)FVar29.Data,uVar18,
                                         CaseSensitive,FromStart,-1);
                uVar18 = local_350.Data.ArrayNum - 1;
                FVar29.Data = local_350.Data.AllocatorInstance.Data;
                if (local_350.Data.ArrayNum == 0) {
                  uVar18 = uVar34;
                  FVar29.Data = (FScriptContainerElement *)L"";
                }
                iVar16 = ::FString::Find((FString *)pFVar36,(wchar_t *)FVar29.Data,uVar18,
                                         CaseSensitive,FromEnd,-1);
                if ((iVar17 == -1) || (iVar16 <= iVar17)) {
                  bVar11 = false;
                }
                else {
                  iVar32 = local_3a0.Data.ArrayNum + -1 + iVar17;
                  if (local_3a0.Data.ArrayNum == 0) {
                    iVar32 = iVar17;
                  }
                  if (iVar32 < iVar16) {
                    pFVar23 = ::FString::Mid((FString *)pFVar36,&local_148,iVar32,iVar16 - iVar32);
                    if (&local_460 != pFVar23) {
                      if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_460.Data.AllocatorInstance.Data);
                      }
                      local_460.Data.AllocatorInstance.Data = (pFVar23->Data).AllocatorInstance.Data
                      ;
                      (pFVar23->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      local_460.Data.ArrayNum = (pFVar23->Data).ArrayNum;
                      local_460.Data.ArrayMax = (pFVar23->Data).ArrayMax;
                      (pFVar23->Data).ArrayNum = 0;
                      (pFVar23->Data).ArrayMax = 0;
                    }
                    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_148.Data.AllocatorInstance.Data);
                    }
                    bVar11 = true;
                  }
                  else {
                    ::FString::operator=(&local_460,L"");
                    bVar11 = true;
                  }
                }
                if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_3a0.Data.AllocatorInstance.Data);
                }
                if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_350.Data.AllocatorInstance.Data);
                }
                if (bVar11) {
                  uVar18 = local_460.Data.ArrayNum - 1;
                  if (local_460.Data.ArrayNum == 0) {
                    uVar18 = uVar34;
                  }
                  ::FString::AppendChars
                            (&local_438,(wchar_t *)local_460.Data.AllocatorInstance.Data,uVar18);
                }
                if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_460.Data.AllocatorInstance.Data);
                }
                uVar33 = uVar33 + 1;
              } while( true );
            }
            `FPortableObjectFormatDOM::FromString'::__l7::<lambda_2>::operator()(&local_3c8);
            FVar29.Data = local_438.Data.AllocatorInstance.Data;
          }
          else {
            bVar11 = ::FString::StartsWith((FString *)pFVar36,L"msgid",5,IgnoreCase);
            if (bVar11) {
              local_408.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_408.Data.ArrayNum = 0;
              local_408.Data.ArrayMax = 0;
              ::FString::FString(&local_280,L"\"");
              ::FString::FString(&local_290,L"\"");
              bVar13 = FindDelimitedString((FString *)pFVar36,&local_290,&local_280,&local_408);
              if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_290.Data.AllocatorInstance.Data);
              }
              if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_280.Data.AllocatorInstance.Data);
              }
              if (bVar13) {
                while (uVar33 = uVar35 + 1, uVar33 < uVar19) {
                  uVar35 = (uint)pFVar22;
                  uVar34 = 0;
                  if ((int)uVar33 < local_4b8.ArrayNum) {
                    uVar34 = ~uVar33 >> 0x1f;
                  }
                  if ((uVar34 == 0) &&
                     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar13)) {
                    pcVar5 = (code *)swi(3);
                    uVar12 = (*pcVar5)();
                    return (bool)uVar12;
                  }
                  ::FString::TrimStartAndEndInline
                            ((FString *)
                             (local_4b8.AllocatorInstance.Data + (longlong)(int)uVar33 * 0x10));
                  uVar34 = 0;
                  if ((int)uVar33 < local_4b8.ArrayNum) {
                    uVar34 = ~uVar33 >> 0x1f;
                  }
                  if ((uVar34 == 0) &&
                     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar13)) {
                    pcVar5 = (code *)swi(3);
                    uVar12 = (*pcVar5)();
                    return (bool)uVar12;
                  }
                  pFVar36 = local_4b8.AllocatorInstance.Data + (longlong)(int)uVar33 * 0x10;
                  ::FString::FString(&local_310,"\"");
                  iVar17 = local_310.Data.ArrayNum + -1;
                  FVar29.Data = local_310.Data.AllocatorInstance.Data;
                  if (local_310.Data.ArrayNum == 0) {
                    iVar17 = 0;
                    FVar29.Data = (FScriptContainerElement *)L"";
                  }
                  bVar11 = ::FString::StartsWith
                                     ((FString *)pFVar36,(wchar_t *)FVar29.Data,iVar17,IgnoreCase);
                  bVar13 = bVar8;
                  if (bVar11) {
                    ::FString::FString(&local_320,"\"");
                    bVar8 = true;
                    iVar17 = local_320.Data.ArrayNum + -1;
                    FVar29.Data = local_320.Data.AllocatorInstance.Data;
                    if (local_320.Data.ArrayNum == 0) {
                      iVar17 = 0;
                      FVar29.Data = (FScriptContainerElement *)L"";
                    }
                    bVar11 = ::FString::EndsWith((FString *)pFVar36,(wchar_t *)FVar29.Data,iVar17,
                                                 IgnoreCase);
                    bVar13 = true;
                    if (!bVar11) goto LAB_146b62346;
                    bVar13 = true;
                  }
                  else {
LAB_146b62346:
                    bVar8 = bVar13;
                    bVar13 = false;
                  }
                  if ((bVar8) &&
                     (bVar8 = false,
                     local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                    FMemory::Free(local_320.Data.AllocatorInstance.Data);
                  }
                  if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_310.Data.AllocatorInstance.Data);
                  }
                  pFVar21 = local_4a8.Object;
                  if (!bVar13) break;
                  iVar17 = *(int *)(pFVar36 + 8) + -3;
                  if (*(int *)(pFVar36 + 8) == 0) {
                    iVar17 = -2;
                  }
                  pFVar23 = ::FString::Mid((FString *)pFVar36,&local_128,1,iVar17);
                  iVar16 = (pFVar23->Data).ArrayNum;
                  iVar17 = iVar16 + -1;
                  if (iVar16 == 0) {
                    iVar17 = 0;
                  }
                  ::FString::AppendChars
                            (&local_408,(wchar_t *)(pFVar23->Data).AllocatorInstance.Data,iVar17);
                  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_128.Data.AllocatorInstance.Data);
                  }
                  pFVar22 = (FPortableObjectEntry *)(ulonglong)uVar33;
                  uVar35 = uVar33;
                  pFVar21 = local_4a8.Object;
                }
                iVar17 = local_408.Data.ArrayNum + -1;
                if (local_408.Data.ArrayNum == 0) {
                  iVar17 = 0;
                }
                ::FString::AssignRange
                          ((FString *)pFVar21,(wchar_t *)local_408.Data.AllocatorInstance.Data,
                           iVar17);
                bVar13 = true;
                if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_408.Data.AllocatorInstance.Data);
                }
                goto LAB_146b63062;
              }
              `FPortableObjectFormatDOM::FromString'::__l7::<lambda_2>::operator()(&local_3c8);
              FVar29.Data = local_408.Data.AllocatorInstance.Data;
            }
            else {
              bVar11 = ::FString::StartsWith((FString *)pFVar36,L"msgid_plural",0xc,IgnoreCase);
              if (bVar11) {
                local_3f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_3f8.Data.ArrayNum = 0;
                local_3f8.Data.ArrayMax = 0;
                ::FString::FString(&local_260,L"\"");
                ::FString::FString(&local_270,L"\"");
                bVar11 = FindDelimitedString((FString *)pFVar36,&local_270,&local_260,&local_3f8);
                if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_270.Data.AllocatorInstance.Data);
                }
                if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_260.Data.AllocatorInstance.Data);
                }
                if (bVar11) {
                  while (uVar33 = uVar35 + 1, uVar33 < uVar19) {
                    uVar35 = (uint)pFVar22;
                    uVar34 = 0;
                    if ((int)uVar33 < local_4b8.ArrayNum) {
                      uVar34 = ~uVar33 >> 0x1f;
                    }
                    if ((uVar34 == 0) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar11)) {
                      pcVar5 = (code *)swi(3);
                      uVar12 = (*pcVar5)();
                      return (bool)uVar12;
                    }
                    ::FString::TrimStartAndEndInline
                              ((FString *)
                               (local_4b8.AllocatorInstance.Data + (longlong)(int)uVar33 * 0x10));
                    uVar34 = 0;
                    if ((int)uVar33 < local_4b8.ArrayNum) {
                      uVar34 = ~uVar33 >> 0x1f;
                    }
                    if ((uVar34 == 0) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar11)) {
                      pcVar5 = (code *)swi(3);
                      uVar12 = (*pcVar5)();
                      return (bool)uVar12;
                    }
                    pFVar36 = local_4b8.AllocatorInstance.Data + (longlong)(int)uVar33 * 0x10;
                    ::FString::FString(&local_2f0,"\"");
                    iVar17 = local_2f0.Data.ArrayNum + -1;
                    FVar29.Data = local_2f0.Data.AllocatorInstance.Data;
                    if (local_2f0.Data.ArrayNum == 0) {
                      iVar17 = 0;
                      FVar29.Data = (FScriptContainerElement *)L"";
                    }
                    bVar15 = ::FString::StartsWith
                                       ((FString *)pFVar36,(wchar_t *)FVar29.Data,iVar17,IgnoreCase)
                    ;
                    bVar11 = bVar9;
                    if (bVar15) {
                      ::FString::FString(&local_300,"\"");
                      bVar9 = true;
                      iVar17 = local_300.Data.ArrayNum + -1;
                      FVar29.Data = local_300.Data.AllocatorInstance.Data;
                      if (local_300.Data.ArrayNum == 0) {
                        iVar17 = 0;
                        FVar29.Data = (FScriptContainerElement *)L"";
                      }
                      bVar15 = ::FString::EndsWith((FString *)pFVar36,(wchar_t *)FVar29.Data,iVar17,
                                                   IgnoreCase);
                      bVar11 = true;
                      if (!bVar15) goto LAB_146b62616;
                      bVar11 = true;
                    }
                    else {
LAB_146b62616:
                      bVar9 = bVar11;
                      bVar11 = false;
                    }
                    if ((bVar9) &&
                       (bVar9 = false,
                       local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                      FMemory::Free(local_300.Data.AllocatorInstance.Data);
                    }
                    if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
                    }
                    pFVar21 = local_4a8.Object;
                    if (!bVar11) break;
                    iVar17 = *(int *)(pFVar36 + 8) + -3;
                    if (*(int *)(pFVar36 + 8) == 0) {
                      iVar17 = -2;
                    }
                    pFVar23 = ::FString::Mid((FString *)pFVar36,&local_118,1,iVar17);
                    iVar16 = (pFVar23->Data).ArrayNum;
                    iVar17 = iVar16 + -1;
                    if (iVar16 == 0) {
                      iVar17 = 0;
                    }
                    ::FString::AppendChars
                              (&local_3f8,(wchar_t *)(pFVar23->Data).AllocatorInstance.Data,iVar17);
                    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_118.Data.AllocatorInstance.Data);
                    }
                    pFVar22 = (FPortableObjectEntry *)(ulonglong)uVar33;
                    uVar35 = uVar33;
                    pFVar21 = local_4a8.Object;
                  }
                  iVar17 = local_3f8.Data.ArrayNum + -1;
                  if (local_3f8.Data.ArrayNum == 0) {
                    iVar17 = 0;
                  }
                  ::FString::AssignRange
                            ((FString *)&pFVar21->_padding_,
                             (wchar_t *)local_3f8.Data.AllocatorInstance.Data,iVar17);
                  if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
                  }
                  goto LAB_146b63062;
                }
                `FPortableObjectFormatDOM::FromString'::__l7::<lambda_2>::operator()(&local_3c8);
                FVar29.Data = local_3f8.Data.AllocatorInstance.Data;
              }
              else {
                bVar11 = ::FString::StartsWith((FString *)pFVar36,L"msgstr[",7,IgnoreCase);
                if (bVar11) {
                  local_3e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_3e8.Data.ArrayNum = 0;
                  local_3e8.Data.ArrayMax = 0;
                  ::FString::FString(&local_240,L"]");
                  ::FString::FString(&local_250,L"[");
                  bVar11 = FindDelimitedString((FString *)pFVar36,&local_250,&local_240,&local_3e8);
                  if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_250.Data.AllocatorInstance.Data);
                  }
                  if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_240.Data.AllocatorInstance.Data);
                  }
                  if (bVar11) {
                    FVar29.Data = (FScriptContainerElement *)L"";
                    if (local_3e8.Data.ArrayNum != 0) {
                      FVar29.Data = local_3e8.Data.AllocatorInstance.Data;
                    }
                    uVar19 = _wtoi((wchar_t *)FVar29.Data);
                    local_478 = uVar19;
                    if (((int)uVar19 < 0) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Index >= 0",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\PortableObjectFormatDOM.cpp"
                                            ,0x2a9,L""), bVar11)) {
                      pcVar5 = (code *)swi(3);
                      uVar12 = (*pcVar5)();
                      return (bool)uVar12;
                    }
                    local_470.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_470.Data.ArrayNum = 0;
                    local_470.Data.ArrayMax = 0;
                    ::FString::FString(&local_220,L"\"");
                    ::FString::FString(&local_230,L"\"");
                    bVar11 = FindDelimitedString((FString *)pFVar36,&local_230,&local_220,&local_470
                                                );
                    if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_230.Data.AllocatorInstance.Data);
                    }
                    if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_220.Data.AllocatorInstance.Data);
                    }
                    uVar33 = local_res20;
                    if (bVar11) {
                      while (uVar34 = uVar35 + 1, uVar34 < uVar33) {
                        uVar35 = (uint)pFVar22;
                        uVar19 = 0;
                        if ((int)uVar34 < local_4b8.ArrayNum) {
                          uVar19 = ~uVar34 >> 0x1f;
                        }
                        if ((uVar19 == 0) &&
                           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar11)) {
                          pcVar5 = (code *)swi(3);
                          uVar12 = (*pcVar5)();
                          return (bool)uVar12;
                        }
                        ::FString::TrimStartAndEndInline
                                  ((FString *)
                                   (local_4b8.AllocatorInstance.Data + (longlong)(int)uVar34 * 0x10)
                                  );
                        uVar19 = 0;
                        if ((int)uVar34 < local_4b8.ArrayNum) {
                          uVar19 = ~uVar34 >> 0x1f;
                        }
                        if ((uVar19 == 0) &&
                           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar11)) {
                          pcVar5 = (code *)swi(3);
                          uVar12 = (*pcVar5)();
                          return (bool)uVar12;
                        }
                        pFVar36 = local_4b8.AllocatorInstance.Data + (longlong)(int)uVar34 * 0x10;
                        ::FString::FString(&local_2d0,"\"");
                        iVar17 = local_2d0.Data.ArrayNum + -1;
                        FVar29.Data = local_2d0.Data.AllocatorInstance.Data;
                        if (local_2d0.Data.ArrayNum == 0) {
                          iVar17 = 0;
                          FVar29.Data = (FScriptContainerElement *)L"";
                        }
                        bVar11 = ::FString::StartsWith
                                           ((FString *)pFVar36,(wchar_t *)FVar29.Data,iVar17,
                                            IgnoreCase);
                        if (bVar11) {
                          ::FString::FString(&local_2e0,"\"");
                          bVar30 = true;
                          iVar17 = local_2e0.Data.ArrayNum + -1;
                          FVar29.Data = local_2e0.Data.AllocatorInstance.Data;
                          if (local_2e0.Data.ArrayNum == 0) {
                            iVar17 = 0;
                            FVar29.Data = (FScriptContainerElement *)L"";
                          }
                          bVar11 = ::FString::EndsWith((FString *)pFVar36,(wchar_t *)FVar29.Data,
                                                       iVar17,IgnoreCase);
                          if (!bVar11) goto LAB_146b629a8;
                          bVar11 = true;
                        }
                        else {
LAB_146b629a8:
                          bVar11 = false;
                        }
                        if ((bVar30) &&
                           (bVar30 = false,
                           local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
                        {
                          FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
                        }
                        if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
                        }
                        pFVar21 = local_4a8.Object;
                        uVar19 = local_478;
                        if (!bVar11) break;
                        iVar17 = *(int *)(pFVar36 + 8) + -3;
                        if (*(int *)(pFVar36 + 8) == 0) {
                          iVar17 = -2;
                        }
                        pFVar23 = ::FString::Mid((FString *)pFVar36,&local_108,1,iVar17);
                        iVar16 = (pFVar23->Data).ArrayNum;
                        iVar17 = iVar16 + -1;
                        if (iVar16 == 0) {
                          iVar17 = 0;
                        }
                        ::FString::AppendChars
                                  (&local_470,(wchar_t *)(pFVar23->Data).AllocatorInstance.Data,
                                   iVar17);
                        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_108.Data.AllocatorInstance.Data);
                        }
                        pFVar22 = (FPortableObjectEntry *)(ulonglong)uVar34;
                        uVar35 = uVar34;
                        pFVar21 = local_4a8.Object;
                        uVar19 = local_478;
                      }
                      if ((int)uVar19 < (pFVar21->MsgStr).ArrayNum) {
                        if (((int)uVar19 < 0) &&
                           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar11)) {
                          pcVar5 = (code *)swi(3);
                          uVar12 = (*pcVar5)();
                          return (bool)uVar12;
                        }
                        iVar17 = local_470.Data.ArrayNum + -1;
                        if (local_470.Data.ArrayNum == 0) {
                          iVar17 = 0;
                        }
                        ::FString::AssignRange
                                  ((FString *)
                                   ((pFVar21->MsgStr).AllocatorInstance.Data +
                                   (longlong)(int)uVar19 * 0x10),
                                   (wchar_t *)local_470.Data.AllocatorInstance.Data,iVar17);
                      }
                      else {
                        pFVar36 = (pFVar21->MsgStr).AllocatorInstance.Data;
                        pTVar2 = &pFVar21->MsgStr;
                        if (((pFVar36 <= (FScriptContainerElement *)&local_470) &&
                            ((FScriptContainerElement *)&local_470 <
                             pFVar36 + (longlong)(pFVar21->MsgStr).ArrayMax * 0x10)) &&
                           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                ,
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x7a5,
                                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                               ), bVar11)) {
                          pcVar5 = (code *)swi(3);
                          uVar12 = (*pcVar5)();
                          return (bool)uVar12;
                        }
                        iVar17 = (pFVar21->MsgStr).ArrayNum;
                        piVar1 = &(pFVar21->MsgStr).ArrayMax;
                        if (iVar17 == *piVar1) {
                          iVar17 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x810,&pTVar2->AllocatorInstance,piVar1);
                        }
                        pFVar36 = (pTVar2->AllocatorInstance).Data;
                        (pFVar21->MsgStr).ArrayNum = iVar17 + 1;
                        pFVar36 = pFVar36 + (longlong)(int)uVar19 * 0x10;
                        memmove(pFVar36 + 0x10,pFVar36,(longlong)(int)(iVar17 - uVar19) << 4);
                        pTVar28 = (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)
                                  ((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar19 * 0x10);
                        (pTVar28->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
                        TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
                                  (pTVar28,(wchar_t *)local_470.Data.AllocatorInstance.Data,
                                   local_470.Data.ArrayNum,0);
                      }
                      if (local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_470.Data.AllocatorInstance.Data);
                      }
                      uVar19 = local_res20;
                      if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
                        uVar19 = local_res20;
                      }
                      goto LAB_146b63062;
                    }
                    `FPortableObjectFormatDOM::FromString'::__l7::<lambda_2>::operator()(&local_3c8)
                    ;
                    FVar29.Data = local_3e8.Data.AllocatorInstance.Data;
                    if (local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_470.Data.AllocatorInstance.Data);
                      FVar29.Data = local_3e8.Data.AllocatorInstance.Data;
                    }
                  }
                  else {
                    local_1e8 = *(wchar_t **)pFVar36;
                    uStack_1e0 = *(int *)(pFVar36 + 8) - 1;
                    if (*(int *)(pFVar36 + 8) == 0) {
                      uStack_1e0 = uVar34;
                    }
                    local_a8._12_4_ = uStack_1dc;
                    local_a8.Size = uStack_1e0;
                    local_a8.DataPtr = local_1e8;
                    pFVar25 = FText::AsCultureInvariant(&local_68,&local_a8);
                    pFVar20 = FText::AsLocalizable_Advanced_LocText
                                        (&local_88,L"PortableObjectFormatDOM",
                                         L"Error_FailedToParseSquareBracketDelimitedString",
                                         L"Failed to parse a square bracket-delimited string from line {0}: {1}"
                                        );
                    pFVar26 = FTextFormat::FTextFormat(&local_58,pFVar20,Default);
                    pFVar25 = FText::Format<unsigned_int,FText>
                                        (&local_98,pFVar26,uVar35 + 1,pFVar25);
                    `FPortableObjectFormatDOM::FromString'::__l2::<lambda_1>::operator()
                              (&local_450,pFVar25);
                    if (local_98.TextData.Reference != (ITextData *)0x0) {
                      (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
                    }
                    FVar29.Data = local_3e8.Data.AllocatorInstance.Data;
                    if (local_88.TextData.Reference != (ITextData *)0x0) {
                      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
                      FVar29.Data = local_3e8.Data.AllocatorInstance.Data;
                    }
                  }
                }
                else {
                  bVar11 = ::FString::StartsWith((FString *)pFVar36,L"msgstr",6,IgnoreCase);
                  if (!bVar11) goto LAB_146b61a2c;
                  local_428.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_428.Data.ArrayNum = 0;
                  local_428.Data.ArrayMax = 0;
                  ::FString::FString(&local_200,L"\"");
                  ::FString::FString(&local_210,L"\"");
                  bVar11 = FindDelimitedString((FString *)pFVar36,&local_210,&local_200,&local_428);
                  if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_210.Data.AllocatorInstance.Data);
                  }
                  if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_200.Data.AllocatorInstance.Data);
                  }
                  if (bVar11) {
                    while (uVar33 = uVar35 + 1, uVar33 < uVar19) {
                      uVar35 = (uint)pFVar22;
                      uVar34 = 0;
                      if ((int)uVar33 < local_4b8.ArrayNum) {
                        uVar34 = ~uVar33 >> 0x1f;
                      }
                      if ((uVar34 == 0) &&
                         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar11)) {
                        pcVar5 = (code *)swi(3);
                        uVar12 = (*pcVar5)();
                        return (bool)uVar12;
                      }
                      ::FString::TrimStartAndEndInline
                                ((FString *)
                                 (local_4b8.AllocatorInstance.Data + (longlong)(int)uVar33 * 0x10));
                      uVar34 = 0;
                      if ((int)uVar33 < local_4b8.ArrayNum) {
                        uVar34 = ~uVar33 >> 0x1f;
                      }
                      if ((uVar34 == 0) &&
                         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar11)) {
                        pcVar5 = (code *)swi(3);
                        uVar12 = (*pcVar5)();
                        return (bool)uVar12;
                      }
                      pFVar36 = local_4b8.AllocatorInstance.Data + (longlong)(int)uVar33 * 0x10;
                      ::FString::FString(&local_2b0,"\"");
                      iVar17 = local_2b0.Data.ArrayNum + -1;
                      FVar29.Data = local_2b0.Data.AllocatorInstance.Data;
                      if (local_2b0.Data.ArrayNum == 0) {
                        iVar17 = 0;
                        FVar29.Data = (FScriptContainerElement *)L"";
                      }
                      bVar11 = ::FString::StartsWith
                                         ((FString *)pFVar36,(wchar_t *)FVar29.Data,iVar17,
                                          IgnoreCase);
                      if (bVar11) {
                        ::FString::FString(&local_2c0,"\"");
                        bVar6 = true;
                        iVar17 = local_2c0.Data.ArrayNum + -1;
                        FVar29.Data = local_2c0.Data.AllocatorInstance.Data;
                        if (local_2c0.Data.ArrayNum == 0) {
                          iVar17 = 0;
                          FVar29.Data = (FScriptContainerElement *)L"";
                        }
                        bVar11 = ::FString::EndsWith((FString *)pFVar36,(wchar_t *)FVar29.Data,
                                                     iVar17,IgnoreCase);
                        if (!bVar11) goto LAB_146b62da9;
                        bVar11 = true;
                      }
                      else {
LAB_146b62da9:
                        bVar11 = false;
                      }
                      if ((bVar6) &&
                         (bVar6 = false,
                         local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                        FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
                      }
                      if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
                      }
                      pFVar21 = local_4a8.Object;
                      if (!bVar11) break;
                      iVar17 = *(int *)(pFVar36 + 8) + -3;
                      if (*(int *)(pFVar36 + 8) == 0) {
                        iVar17 = -2;
                      }
                      pFVar23 = ::FString::Mid((FString *)pFVar36,&local_f8,1,iVar17);
                      iVar16 = (pFVar23->Data).ArrayNum;
                      iVar17 = iVar16 + -1;
                      if (iVar16 == 0) {
                        iVar17 = 0;
                      }
                      ::FString::AppendChars
                                (&local_428,(wchar_t *)(pFVar23->Data).AllocatorInstance.Data,iVar17
                                );
                      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
                      }
                      pFVar22 = (FPortableObjectEntry *)(ulonglong)uVar33;
                      uVar35 = uVar33;
                      pFVar21 = local_4a8.Object;
                    }
                    local_418.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
                              (&local_418,(wchar_t *)local_428.Data.AllocatorInstance.Data,
                               local_428.Data.ArrayNum,0);
                    if ((pFVar21->MsgStr).ArrayNum < 1) {
                      pTVar28 = (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)
                                (pFVar21->MsgStr).AllocatorInstance.Data;
                      if (((pTVar28 <= &local_418) &&
                          (&local_418 < pTVar28 + (pFVar21->MsgStr).ArrayMax)) &&
                         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar11)) {
                        pcVar5 = (code *)swi(3);
                        uVar12 = (*pcVar5)();
                        return (bool)uVar12;
                      }
                      iVar17 = (pFVar21->MsgStr).ArrayNum;
                      piVar1 = &(pFVar21->MsgStr).ArrayMax;
                      if (iVar17 == *piVar1) {
                        iVar17 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x810,&(pFVar21->MsgStr).AllocatorInstance,piVar1);
                      }
                      (pFVar21->MsgStr).ArrayNum = iVar17 + 1;
                      ::FString::FString((FString *)
                                         ((pFVar21->MsgStr).AllocatorInstance.Data +
                                         (longlong)iVar17 * 0x10),(FString *)&local_418);
                    }
                    else {
                      iVar17 = local_418.ArrayNum + -1;
                      if (local_418.ArrayNum == 0) {
                        iVar17 = 0;
                      }
                      ::FString::AssignRange
                                ((FString *)(pFVar21->MsgStr).AllocatorInstance.Data,
                                 (wchar_t *)local_418.AllocatorInstance.Data,iVar17);
                    }
                    if (local_418.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_418.AllocatorInstance.Data);
                    }
                    if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_428.Data.AllocatorInstance.Data);
                    }
                    goto LAB_146b63062;
                  }
                  `FPortableObjectFormatDOM::FromString'::__l7::<lambda_2>::operator()(&local_3c8);
                  FVar29.Data = local_428.Data.AllocatorInstance.Data;
                }
              }
            }
          }
          if (FVar29.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar29.Data);
          }
          bVar30 = false;
          goto LAB_146b63296;
        }
LAB_146b61a2c:
        pTVar2 = &pFVar21->UnknownElements;
        pFVar24 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar24 <= pFVar36) &&
            (pFVar36 < pFVar24 + (longlong)(pFVar21->UnknownElements).ArrayMax * 0x10)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          uVar12 = (*pcVar5)();
          return (bool)uVar12;
        }
        iVar17 = (pFVar21->UnknownElements).ArrayNum;
        piVar1 = &(pFVar21->UnknownElements).ArrayMax;
        if (iVar17 == *piVar1) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar2->AllocatorInstance,piVar1);
        }
        (pFVar21->UnknownElements).ArrayNum = iVar17 + 1;
        ::FString::FString((FString *)((pTVar2->AllocatorInstance).Data + (longlong)iVar17 * 0x10),
                           (FString *)pFVar36);
      }
    }
  }
LAB_146b63062:
  pFVar22 = (FPortableObjectEntry *)(ulonglong)(uVar35 + 1);
  if (uVar19 <= uVar35 + 1) goto LAB_146b6328e;
  goto LAB_146b61280;
LAB_146b613fa:
  if ((pFVar36 != (FScriptContainerElement *)0x0) &&
     ((FScriptContainerElement *)&local_498 != pFVar36 + 0x10)) {
    iVar17 = *(int *)(pFVar36 + 0x18);
    _Src = *(void **)(pFVar36 + 0x10);
    local_490 = CONCAT44(local_490._4_4_,iVar17);
    if ((iVar17 == 0) && (local_490._4_4_ == 0)) {
      local_490 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar17,local_490._4_4_,&local_498,iVar17,(int *)((longlong)&local_490 + 4));
      if (iVar17 != 0) {
        memcpy(local_498.Data,_Src,(longlong)iVar17 * 2);
      }
    }
  }
LAB_146b6146e:
  pFVar23 = &this->ProjectName;
  if (pFVar23 != (FString *)&local_498) {
    pFVar36 = (pFVar23->Data).AllocatorInstance.Data;
    if (pFVar36 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar36);
    }
    (pFVar23->Data).AllocatorInstance.Data = local_498.Data;
    (this->ProjectName).Data.ArrayNum = (int)local_490;
    (this->ProjectName).Data.ArrayMax = local_490._4_4_;
    local_490 = 0;
    local_498.Data = (FScriptContainerElement *)0x0;
  }
  if (local_498.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_498.Data);
  }
  if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_370.Data.AllocatorInstance.Data);
  }
LAB_146b6150f:
  pFVar22 = (FPortableObjectEntry *)0x0;
  pFVar21 = ::operator_new(0x90);
  if (pFVar21 != (FPortableObjectEntry *)0x0) {
    pFVar21->_padding_ = 0;
    pFVar21->_padding_ = 0;
    pFVar21->_padding_ = 0;
    pFVar21->_padding_ = 0;
    pFVar21->_padding_ = 0;
    pFVar21->_padding_ = 0;
    (pFVar21->MsgStr).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar21->MsgStr).ArrayNum = 0;
    (pFVar21->MsgStr).ArrayMax = 0;
    (pFVar21->ExtractedComments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar21->ExtractedComments).ArrayNum = 0;
    (pFVar21->ExtractedComments).ArrayMax = 0;
    (pFVar21->TranslatorComments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar21->TranslatorComments).ArrayNum = 0;
    (pFVar21->TranslatorComments).ArrayMax = 0;
    (pFVar21->ReferenceComments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar21->ReferenceComments).ArrayNum = 0;
    (pFVar21->ReferenceComments).ArrayMax = 0;
    (pFVar21->Flags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar21->Flags).ArrayNum = 0;
    (pFVar21->Flags).ArrayMax = 0;
    (pFVar21->UnknownElements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar21->UnknownElements).ArrayNum = 0;
    (pFVar21->UnknownElements).ArrayMax = 0;
    pFVar22 = pFVar21;
  }
  local_378.Object = pFVar22;
  TSharedRef<FPortableObjectEntry,1>::operator=<FPortableObjectEntry>(&local_4a8,&local_378);
  bVar13 = false;
  pFVar21 = local_4a8.Object;
  goto LAB_146b63062;
joined_r0x000146b61f1b:
  if (uVar19 <= uVar18) goto LAB_146b6210d;
  uVar35 = (uint)pFVar22;
  uVar33 = 0;
  if ((int)uVar18 < local_4b8.ArrayNum) {
    uVar33 = ~uVar18 >> 0x1f;
  }
  if ((uVar33 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar5 = (code *)swi(3);
    uVar12 = (*pcVar5)();
    return (bool)uVar12;
  }
  ::FString::TrimStartAndEndInline
            ((FString *)(local_4b8.AllocatorInstance.Data + (longlong)(int)uVar18 * 0x10));
  uVar33 = 0;
  if ((int)uVar18 < local_4b8.ArrayNum) {
    uVar33 = ~uVar18 >> 0x1f;
  }
  if ((uVar33 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar5 = (code *)swi(3);
    uVar12 = (*pcVar5)();
    return (bool)uVar12;
  }
  pFVar36 = local_4b8.AllocatorInstance.Data + (longlong)(int)uVar18 * 0x10;
  ::FString::FString(&local_330,"\"");
  iVar17 = local_330.Data.ArrayNum + -1;
  FVar29.Data = local_330.Data.AllocatorInstance.Data;
  if (local_330.Data.ArrayNum == 0) {
    iVar17 = 0;
    FVar29.Data = (FScriptContainerElement *)L"";
  }
  bVar15 = ::FString::StartsWith((FString *)pFVar36,(wchar_t *)FVar29.Data,iVar17,IgnoreCase);
  bVar11 = bVar7;
  if (bVar15) {
    ::FString::FString(&local_340,"\"");
    bVar7 = true;
    iVar17 = local_340.Data.ArrayNum + -1;
    FVar29.Data = local_340.Data.AllocatorInstance.Data;
    if (local_340.Data.ArrayNum == 0) {
      iVar17 = 0;
      FVar29.Data = (FScriptContainerElement *)L"";
    }
    bVar15 = ::FString::EndsWith((FString *)pFVar36,(wchar_t *)FVar29.Data,iVar17,IgnoreCase);
    bVar11 = true;
    if (!bVar15) goto LAB_146b62079;
    bVar11 = true;
  }
  else {
LAB_146b62079:
    bVar7 = bVar11;
    bVar11 = false;
  }
  if ((bVar7) &&
     (bVar7 = false, local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_340.Data.AllocatorInstance.Data);
  }
  if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_330.Data.AllocatorInstance.Data);
  }
  if (!bVar11) goto LAB_146b6210d;
  iVar17 = *(int *)(pFVar36 + 8) + -3;
  if (*(int *)(pFVar36 + 8) == 0) {
    iVar17 = -2;
  }
  pFVar23 = ::FString::Mid((FString *)pFVar36,&local_138,1,iVar17);
  iVar16 = (pFVar23->Data).ArrayNum;
  iVar17 = iVar16 + -1;
  if (iVar16 == 0) {
    iVar17 = 0;
  }
  ::FString::AppendChars(&local_438,(wchar_t *)(pFVar23->Data).AllocatorInstance.Data,iVar17);
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  pFVar22 = (FPortableObjectEntry *)(ulonglong)uVar18;
  uVar35 = uVar18;
  uVar18 = uVar18 + 1;
  goto joined_r0x000146b61f1b;
LAB_146b6210d:
  pFVar21 = local_4a8.Object;
  iVar17 = local_438.Data.ArrayNum + -1;
  if (local_438.Data.ArrayNum == 0) {
    iVar17 = 0;
  }
  ::FString::AssignRange
            ((FString *)&(local_4a8.Object)->_padding_,
             (wchar_t *)local_438.Data.AllocatorInstance.Data,iVar17);
  if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_438.Data.AllocatorInstance.Data);
  }
  goto LAB_146b63062;
}

// GetEntriesIterator @ 146b73200

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TConstIterator * __thiscall
FPortableObjectFormatDOM::GetEntriesIterator
          (FPortableObjectFormatDOM *this,TConstIterator *__return_storage_ptr__)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(this->Entries).field_0x28;
  puVar1 = &(this->Entries).field_0x10;
  iVar7 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(this->Entries).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar8 = (longlong)iVar7;
      iVar9 = iVar9 + 0x20;
      iVar7 = iVar7 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar7) goto LAB_146b73296;
      uVar4 = puVar10[lVar8 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar6 = (int)lVar8 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_146b73296:
  *(TMap<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>,0>_>
    **)__return_storage_ptr__ = &this->Entries;
  *(ulonglong *)&__return_storage_ptr__->field_0x8 = CONCAT44(uVar5,iVar7);
  *(undefined1 **)&__return_storage_ptr__->field_0x10 = puVar1;
  *(ulonglong *)&__return_storage_ptr__->field_0x18 = CONCAT44(iVar6,0xffffffff);
  *(ulonglong *)&__return_storage_ptr__->field_0x20 = CONCAT44(iVar6,iVar9);
  return __return_storage_ptr__;
}

// SetHeaderValue @ 146b88840

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
FPortableObjectFormatDOM::SetHeaderValue
          (FPortableObjectFormatDOM *this,FString *param_1,FString *param_2)

{
  FPortableObjectHeader::SetEntryValue(&this->Header,param_1,param_2);
  return;
}

// SetLanguage @ 146b88850

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __thiscall
FPortableObjectFormatDOM::SetLanguage
          (FPortableObjectFormatDOM *this,FString *param_1,FString *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FInternationalization *this_00;
  bool bVar2;
  FString local_38;
  FString local_28;
  TSharedPtr<FCulture,1> local_18;
  
  ::FString::FString(&local_38,param_1);
  ::FString::FString(&local_28,param_2);
  this_00 = FInternationalization::Get();
  FInternationalization::GetCulture(this_00,&local_18,param_1);
  if ((local_38.Data.ArrayNum < 2) || (local_18.Object == (FCulture *)0x0)) {
    bVar2 = false;
  }
  else {
    ::FString::operator=((FString *)this,&local_38);
    ::FString::operator=(&(this->Language).LanguagePluralForms,&local_28);
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar1 = (this->Language).Culture.SharedReferenceCount.ReferenceController;
    (this->Language).Culture.Object = local_18.Object;
    (this->Language).Culture.SharedReferenceCount.ReferenceController =
         local_18.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    bVar2 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// SortEntries @ 146b88a90

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall FPortableObjectFormatDOM::SortEntries(FPortableObjectFormatDOM *this)

{
  TMap<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>,0>_>
  *this_00;
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  FIdentityFunctor FVar6;
  TMap<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>,0>_>
  *pTVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  undefined1 *puVar15;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  FValueComparisonClass<_public:_void___cdecl_FPortableObjectFormatDOM::SortEntries(void)_::_2_::<lambda_1>_>
  local_a0;
  TMap<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iStack_90 = 0;
  this_00 = &this->Entries;
  iVar2 = *(int *)&(this->Entries).field_0x28;
  local_88 = &(this->Entries).field_0x10;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar2 != 0) {
    puVar14 = *(uint **)&(this->Entries).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)local_88;
    }
    uVar12 = *puVar14;
    while (uVar12 == 0) {
      lVar9 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_146b88b2e;
      uVar12 = puVar14[lVar9 + 1];
    }
    uStack_8c = -uVar12 & uVar12;
    uVar1 = (ulonglong)uStack_8c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    iStack_7c = local_res20 + -1 + local_78;
    if (iVar2 < iStack_7c) {
      iStack_7c = iVar2;
    }
  }
LAB_146b88b2e:
  uVar12 = *(uint *)&(this->Entries).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  puVar15 = &(this->Entries).field_0x10;
  iStack_70 = *(int *)&(this->Entries).field_0x8 - *(int *)&(this->Entries).field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  iVar10 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = this_00;
  iStack_74 = iStack_7c;
  local_68 = this_00;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_88;
  if ((((int)uVar12 < 0) || (iVar2 < (int)uVar12)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6 = local_res8[0];
  uVar3 = *(uint *)&(this->Entries).field_0x28;
  if (uVar12 != uVar3) {
    puVar13 = *(undefined1 **)&(this->Entries).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar15;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar10 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar10;
      uVar11 = uVar11 + 0x20;
      iVar10 = iVar10 + 1;
      uVar12 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_146b88c31;
      uVar12 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar12 = (int)lVar9 + -1 + uVar11;
    if ((int)uVar3 < (int)uVar12) {
      uVar12 = uVar3;
    }
  }
LAB_146b88c31:
  while( true ) {
    pTVar7 = local_68;
    if (*(int *)(&local_68->field_0x0 + 8) - *(int *)(&local_68->field_0x0 + 0x34) != (int)uStack_40
       ) {
      local_res8[0] = (FIdentityFunctor)0x0;
      `TSparseArray<TSparseSetElement<TTuple<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    lVar9 = (longlong)TStack_60.CurrentBitIndex;
    if (((TStack_60.CurrentBitIndex == uVar12) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar15)) && (pTVar7 == this_00)
       ) break;
    lVar4 = *(longlong *)&pTVar7->field_0x0;
    if ((*(longlong *)(lVar4 + 0x30 + lVar9 * 0x48) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar9 = *(longlong *)(lVar4 + lVar9 * 0x48 + 0x30);
    AlgoImpl::
    IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<void>_>_>
              (*(FString **)(lVar9 + 0x60),*(int *)(lVar9 + 0x68),FVar6,(TLess<void> *)local_res10);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  local_a0.Predicate.Predicate =
       (TDereferenceWrapper<TSharedPtr<FPortableObjectEntry,1>,_public:_void___cdecl_FPortableObjectFormatDOM::SortEntries(void)_::_2_::<lambda_1>_>
        )local_res18;
  TSet<TTuple<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>_>,TDefaultMapHashableKeyFuncs<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>,0>,FDefaultSetAllocator>
  ::
  Sort<TSortableMapBase<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>,0>_>::FValueComparisonClass<_FPortableObjectFormatDOM::SortEntries_::__l2::<lambda_1>_>_>
            ((TSet<TTuple<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>_>,TDefaultMapHashableKeyFuncs<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>,0>,FDefaultSetAllocator>
              *)this_00,&local_a0);
  return;
}

// ToString @ 146b8e4a0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __thiscall
FPortableObjectFormatDOM::ToString(FPortableObjectFormatDOM *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  ToString(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ToString @ 146b8e4d0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall FPortableObjectFormatDOM::ToString(FPortableObjectFormatDOM *this,FString *param_1)

{
  undefined1 *puVar1;
  TMap<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>,0>_>
  *pTVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  TMap<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>,0>_>
  *pTVar7;
  bool bVar8;
  FString *pFVar9;
  size_t sVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  FString local_b8;
  FString local_a8;
  TMap<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  ::FString::Reset(param_1,0);
  FPortableObjectHeader::UpdateTimeStamp(&this->Header);
  pFVar9 = FPortableObjectHeader::ToString(&this->Header,&local_b8);
  iVar12 = (pFVar9->Data).ArrayNum;
  iVar15 = iVar12 + -1;
  if (iVar12 == 0) {
    iVar15 = 0;
  }
  ::FString::AppendChars(param_1,(wchar_t *)(pFVar9->Data).AllocatorInstance.Data,iVar15);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  sVar10 = wcslen(NewLineDelimiter);
  ::FString::AppendChars(param_1,NewLineDelimiter,(int)sVar10);
  puVar1 = &(this->Entries).field_0x10;
  iStack_90 = 0;
  iVar15 = *(int *)&(this->Entries).field_0x28;
  pTVar2 = &this->Entries;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar15 != 0) {
    puVar17 = *(uint **)&(this->Entries).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar14 = *puVar17;
    while (uVar14 == 0) {
      lVar11 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar15;
      if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_146b8e5dd;
      uVar14 = puVar17[lVar11 + 1];
    }
    uStack_8c = -uVar14 & uVar14;
    uVar3 = (ulonglong)uStack_8c * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res10 = (int)lVar11;
    iStack_7c = local_78 + -1 + local_res10;
    if (iVar15 < iStack_7c) {
      iStack_7c = iVar15;
    }
  }
LAB_146b8e5dd:
  iStack_70 = *(int *)&(this->Entries).field_0x8 - *(int *)&(this->Entries).field_0x34;
  uVar14 = *(uint *)&(this->Entries).field_0x28;
  uStack_80 = 0xffffffff;
  uVar13 = uVar14 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar14 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = pTVar2;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = pTVar2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar15 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(this->Entries).field_0x28;
  if (uVar14 != uVar4) {
    puVar16 = *(undefined1 **)&(this->Entries).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar12 * 4);
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar12;
      uVar13 = uVar13 + 0x20;
      iVar12 = iVar12 + 1;
      uVar14 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_146b8e6e0;
      uVar14 = *(uint *)(puVar16 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res18 = (int)lVar11;
    uVar14 = local_res18 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar14) {
      uVar14 = uVar4;
    }
  }
LAB_146b8e6e0:
  while( true ) {
    pTVar7 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    lVar11 = (longlong)TStack_60.CurrentBitIndex;
    if (((TStack_60.CurrentBitIndex == uVar14) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar2))
    break;
    lVar5 = *(longlong *)pTVar7;
    if ((*(longlong *)(lVar5 + 0x30 + lVar11 * 0x48) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar9 = FPortableObjectEntry::ToString
                       (*(FPortableObjectEntry **)(lVar5 + lVar11 * 0x48 + 0x30),&local_a8);
    iVar12 = (pFVar9->Data).ArrayNum;
    iVar15 = iVar12 + -1;
    if (iVar12 == 0) {
      iVar15 = 0;
    }
    ::FString::AppendChars(param_1,(wchar_t *)(pFVar9->Data).AllocatorInstance.Data,iVar15);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    sVar10 = wcslen(NewLineDelimiter);
    ::FString::AppendChars(param_1,NewLineDelimiter,(int)sVar10);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

