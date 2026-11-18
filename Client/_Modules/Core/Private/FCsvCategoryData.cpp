// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// Get @ 1419448e0

FCsvCategoryData * __cdecl FCsvCategoryData::Get(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  FCsvCategoryData *lpCriticalSection;
  FScriptContainerElement *pFVar4;
  
  lpCriticalSection = Instance;
  if (Instance == (FCsvCategoryData *)0x0) {
    lpCriticalSection = ::operator_new(0xa8);
    if (lpCriticalSection == (FCsvCategoryData *)0x0) {
      lpCriticalSection = (FCsvCategoryData *)0x0;
    }
    else {
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)lpCriticalSection,4000);
      piVar1 = &(lpCriticalSection->CategoryNames).ArrayNum;
      *(undefined8 *)&lpCriticalSection->CategoryNameToIndex = 0;
      piVar2 = &(lpCriticalSection->CategoryNames).ArrayMax;
      *(undefined8 *)&(lpCriticalSection->CategoryNameToIndex).field_0x8 = 0;
      *(undefined8 *)&(lpCriticalSection->CategoryNameToIndex).field_0x20 = 0;
      *(undefined4 *)&(lpCriticalSection->CategoryNameToIndex).field_0x28 = 0;
      *(undefined4 *)&(lpCriticalSection->CategoryNameToIndex).field_0x2c = 0x80;
      *(undefined4 *)&(lpCriticalSection->CategoryNameToIndex).field_0x34 = 0;
      *(undefined4 *)&(lpCriticalSection->CategoryNameToIndex).field_0x30 = 0xffffffff;
      *(undefined8 *)&(lpCriticalSection->CategoryNameToIndex).field_0x40 = 0;
      *(undefined4 *)&(lpCriticalSection->CategoryNameToIndex).field_0x48 = 0;
      *piVar1 = 0;
      (lpCriticalSection->CategoryNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *piVar2 = 0;
      (lpCriticalSection->CategoriesDisabledInConfig).AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (lpCriticalSection->CategoriesDisabledInConfig).ArrayNum = 0;
      (lpCriticalSection->CategoriesDisabledInConfig).ArrayMax = 0;
      (lpCriticalSection->CategoriesEnabledInConfig).AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (lpCriticalSection->CategoriesEnabledInConfig).ArrayNum = 0;
      (lpCriticalSection->CategoriesEnabledInConfig).ArrayMax = 0;
      iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,1,&(lpCriticalSection->CategoryNames).AllocatorInstance,piVar1,
                         piVar2);
      pFVar4 = (lpCriticalSection->CategoryNames).AllocatorInstance.Data + (longlong)iVar3 * 0x10;
      *(undefined8 *)pFVar4 = 0;
      *(undefined8 *)(pFVar4 + 8) = 0;
    }
    Instance = lpCriticalSection;
    memset(GCsvCategoriesEnabled,0,0x800);
  }
  return lpCriticalSection;
}

// RegisterCategory @ 141961d60

int __thiscall
FCsvCategoryData::RegisterCategory
          (FCsvCategoryData *this,FString *param_1,bool param_2,bool param_3)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FString *pFVar7;
  uint *puVar8;
  FScriptContainerElement *pFVar9;
  wchar_t *pwVar10;
  uint uVar11;
  uint local_68;
  undefined1 local_64 [12];
  FString *local_58;
  uint *local_50;
  FString local_48;
  FString local_38;
  
  if (GActiveReloadType != None) {
    return -1;
  }
  pwVar10 = L"";
  if (GAllCategoriesStartDisabled) {
    param_2 = false;
  }
  if ((this == (FCsvCategoryData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  if ((this == (FCsvCategoryData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  pFVar7 = ::FString::ToLower(param_1,&local_48);
  puVar8 = (uint *)TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                   ::Find((TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                           *)&this->CategoryNameToIndex,pFVar7);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (puVar8 == (uint *)0x0) {
    if (this != (FCsvCategoryData *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)this);
    }
  }
  else {
    uVar6 = *puVar8;
    if (this != (FCsvCategoryData *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)this);
    }
    if ((uVar6 != 0xffffffff) &&
       (local_68 = uVar6, local_64._4_8_ = param_1,
       bVar4 = `FCsvCategoryData::RegisterCategory'::__l10::<lambda_1>::operator()(local_64 + 4),
       !bVar4)) goto LAB_141962012;
  }
  pTVar1 = &this->CategoryNames;
  if (param_3) {
    local_68 = 0;
LAB_141961f48:
    uVar6 = local_68;
    GCsvCategoriesEnabled[(int)local_68] = param_2;
    uVar11 = 0;
    if ((int)local_68 < (this->CategoryNames).ArrayNum) {
      uVar11 = ~local_68 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
    ::FString::operator=
              ((FString *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x10),param_1);
    local_58 = ::FString::ToLower(param_1,&local_38);
    local_50 = &local_68;
    TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FString_&&,int_const_&>_>
              ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                *)&this->CategoryNameToIndex,(TPairInitializer<FString_&&,int_const_&> *)local_64,
               (bool *)&local_58);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    UpdateCategoryFromConfig(this,local_68);
  }
  else {
    uVar6 = (this->CategoryNames).ArrayNum;
    piVar2 = &(this->CategoryNames).ArrayMax;
    local_68 = uVar6;
    if (uVar6 == *piVar2) {
      uVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar1->AllocatorInstance,piVar2);
      (this->CategoryNames).ArrayNum = uVar6;
    }
    (this->CategoryNames).ArrayNum = uVar6 + 1;
    pFVar9 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x10;
    *(undefined8 *)pFVar9 = 0;
    *(undefined8 *)(pFVar9 + 8) = 0;
    if (local_68 < 0x800) goto LAB_141961f48;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < CSV_MAX_CATEGORY_COUNT",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                       ,0x35e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
    if (local_68 < 0x800) goto LAB_141961f48;
  }
  if ((param_1->Data).ArrayNum != 0) {
    pwVar10 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  FCsvProfilerTrace::OutputRegisterCategory(local_68,pwVar10);
LAB_141962012:
  uVar6 = local_68;
  if (this != (FCsvCategoryData *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
  }
  return uVar6;
}

// UpdateCategoriesFromConfig @ 14197bae0

void __thiscall FCsvCategoryData::UpdateCategoriesFromConfig(FCsvCategoryData *this)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<FString,TSizedDefaultAllocator<32>_> local_38;
  TArray<FString,TSizedDefaultAllocator<32>_> local_28;
  
  iVar6 = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  FConfigCacheIni::GetArray(GConfig,L"CsvProfiler",L"EnabledCategories",&local_38,&GEngineIni);
  FConfigCacheIni::GetArray(GConfig,L"CsvProfiler",L"DisabledCategories",&local_28,&GEngineIni);
  pTVar2 = &this->CategoriesEnabledInConfig;
  if ((((local_38.ArrayNum != (this->CategoriesEnabledInConfig).ArrayNum) ||
       (bVar5 = CompareItems<FString,int>
                          ((FString *)local_38.AllocatorInstance.Data,
                           (FString *)(pTVar2->AllocatorInstance).Data,local_38.ArrayNum), !bVar5))
      || (local_28.ArrayNum != (this->CategoriesDisabledInConfig).ArrayNum)) ||
     (bVar5 = CompareItems<FString,int>
                        ((FString *)local_28.AllocatorInstance.Data,
                         (FString *)(this->CategoriesDisabledInConfig).AllocatorInstance.Data,
                         local_28.ArrayNum), !bVar5)) {
    pTVar7 = &this->CategoriesDisabledInConfig;
    if (pTVar2 != &local_38) {
      DestructItems<FString,int>
                ((FString *)(pTVar2->AllocatorInstance).Data,
                 (this->CategoriesEnabledInConfig).ArrayNum);
      FVar3.Data = local_38.AllocatorInstance.Data;
      iVar4 = local_38.ArrayNum;
      piVar1 = &(this->CategoriesEnabledInConfig).ArrayMax;
      (this->CategoriesEnabledInConfig).ArrayNum = local_38.ArrayNum;
      if ((local_38.ArrayNum == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,local_38.ArrayNum,*piVar1,&pTVar2->AllocatorInstance,local_38.ArrayNum,
                   piVar1);
        ConstructItems<FString,FString,int>
                  ((pTVar2->AllocatorInstance).Data,(FString *)FVar3.Data,iVar4);
      }
    }
    if (pTVar7 != &local_28) {
      DestructItems<FString,int>
                ((FString *)(pTVar7->AllocatorInstance).Data,
                 (this->CategoriesDisabledInConfig).ArrayNum);
      FVar3.Data = local_28.AllocatorInstance.Data;
      iVar4 = local_28.ArrayNum;
      piVar1 = &(this->CategoriesDisabledInConfig).ArrayMax;
      (this->CategoriesDisabledInConfig).ArrayNum = local_28.ArrayNum;
      if ((local_28.ArrayNum == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,local_28.ArrayNum,*piVar1,&pTVar7->AllocatorInstance,local_28.ArrayNum,
                   piVar1);
        ConstructItems<FString,FString,int>
                  ((pTVar7->AllocatorInstance).Data,(FString *)FVar3.Data,iVar4);
      }
    }
    if (0 < (this->CategoryNames).ArrayNum) {
      do {
        UpdateCategoryFromConfig(this,iVar6);
        iVar6 = iVar6 + 1;
      } while (iVar6 < (this->CategoryNames).ArrayNum);
    }
  }
  DestructItems<FString,int>((FString *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// UpdateCategoryFromConfig @ 14197bd30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FCsvCategoryData::UpdateCategoryFromConfig(FCsvCategoryData *this,int param_1)

{
  wchar_t wVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  wchar_t *pwVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  ulonglong uVar13;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  uVar13 = (ulonglong)param_1;
  if (!GAllCategoriesStartDisabled) {
    pFVar8 = (this->CategoriesDisabledInConfig).AllocatorInstance.Data;
    iVar2 = (this->CategoriesDisabledInConfig).ArrayNum;
    pFVar9 = pFVar8 + (longlong)iVar2 * 0x10;
    while( true ) {
      if ((this->CategoriesDisabledInConfig).ArrayNum != iVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar8 == pFVar9) break;
      uVar6 = 0;
      if (param_1 < (this->CategoryNames).ArrayNum) {
        uVar6 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->CategoryNames).AllocatorInstance.Data;
      if (*(int *)(pFVar3 + uVar13 * 0x10 + 8) == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = *(wchar_t **)(pFVar3 + uVar13 * 0x10);
      }
      if (*(int *)(pFVar8 + 8) == 0) {
        pwVar11 = L"";
LAB_14197be35:
        if (pwVar10 != (wchar_t *)0x0) {
          pwVar7 = (wchar_t *)0x0;
          wVar1 = *pwVar10;
          pwVar12 = pwVar11;
          while (wVar1 != L'\0') {
            wVar1 = *pwVar11;
            if (wVar1 == L'*') {
              pwVar12 = pwVar11 + 1;
              if (*pwVar12 == L'\0') goto LAB_14197bec7;
              pwVar11 = pwVar12;
              pwVar7 = pwVar10 + 1;
            }
            else if ((wVar1 == L'?') || (wVar1 == *pwVar10)) {
              pwVar11 = pwVar11 + 1;
              pwVar10 = pwVar10 + 1;
            }
            else {
              if (pwVar7 == (wchar_t *)0x0) goto LAB_14197bf58;
              pwVar11 = pwVar12;
              pwVar10 = pwVar7;
              pwVar7 = pwVar7 + 1;
            }
            wVar1 = *pwVar10;
          }
          wVar1 = *pwVar11;
          while (wVar1 == L'*') {
            pwVar10 = pwVar11 + 1;
            pwVar11 = pwVar11 + 1;
            wVar1 = *pwVar10;
          }
          if (wVar1 == L'\0') {
LAB_14197bec7:
            if (4 < (byte)LogCsvProfiler._0_1_) {
              uVar6 = 0;
              if (param_1 < (this->CategoryNames).ArrayNum) {
                uVar6 = (uint)~param_1 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              UE::Logging::Private::BasicLog<5>
                        (&`public:_void___cdecl_FCsvCategoryData::UpdateCategoryFromConfig(int)___ptr64'
                          ::__l13::LOG_Static,(FLogCategoryBase *)&LogCsvProfiler);
            }
            if (0x7ff < uVar13) {
                    /* WARNING: Subroutine does not return */
              __report_rangecheckfailure();
            }
            GCsvCategoriesEnabled[uVar13] = false;
          }
        }
      }
      else {
        pwVar11 = *(wchar_t **)pFVar8;
        if (pwVar11 != (wchar_t *)0x0) goto LAB_14197be35;
      }
LAB_14197bf58:
      pFVar8 = pFVar8 + 0x10;
    }
    iVar2 = (this->CategoriesEnabledInConfig).ArrayNum;
    pFVar8 = (this->CategoriesEnabledInConfig).AllocatorInstance.Data;
    pFVar9 = pFVar8 + (longlong)iVar2 * 0x10;
    while( true ) {
      if ((this->CategoriesEnabledInConfig).ArrayNum != iVar2) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (pFVar8 == pFVar9) break;
      uVar6 = 0;
      if (param_1 < (this->CategoryNames).ArrayNum) {
        uVar6 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->CategoryNames).AllocatorInstance.Data;
      if (*(int *)(pFVar3 + uVar13 * 0x10 + 8) == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = *(wchar_t **)(pFVar3 + uVar13 * 0x10);
      }
      if (*(int *)(pFVar8 + 8) == 0) {
        pwVar11 = L"";
LAB_14197c034:
        if (pwVar10 != (wchar_t *)0x0) {
          pwVar7 = (wchar_t *)0x0;
          wVar1 = *pwVar10;
          pwVar12 = pwVar11;
          while (wVar1 != L'\0') {
            wVar1 = *pwVar11;
            if (wVar1 == L'*') {
              pwVar12 = pwVar11 + 1;
              if (*pwVar12 == L'\0') goto LAB_14197c0b7;
              pwVar11 = pwVar12;
              pwVar7 = pwVar10 + 1;
            }
            else if ((wVar1 == L'?') || (wVar1 == *pwVar10)) {
              pwVar11 = pwVar11 + 1;
              pwVar10 = pwVar10 + 1;
            }
            else {
              if (pwVar7 == (wchar_t *)0x0) goto LAB_14197c13b;
              pwVar11 = pwVar12;
              pwVar10 = pwVar7;
              pwVar7 = pwVar7 + 1;
            }
            wVar1 = *pwVar10;
          }
          wVar1 = *pwVar11;
          while (wVar1 == L'*') {
            pwVar10 = pwVar11 + 1;
            pwVar11 = pwVar11 + 1;
            wVar1 = *pwVar10;
          }
          if (wVar1 == L'\0') {
LAB_14197c0b7:
            if (4 < (byte)LogCsvProfiler._0_1_) {
              uVar6 = 0;
              if (param_1 < (this->CategoryNames).ArrayNum) {
                uVar6 = (uint)~param_1 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              UE::Logging::Private::BasicLog<5>
                        (&`public:_void___cdecl_FCsvCategoryData::UpdateCategoryFromConfig(int)___ptr64'
                          ::__l38::LOG_Static,(FLogCategoryBase *)&LogCsvProfiler);
            }
            GCsvCategoriesEnabled[uVar13] = true;
          }
        }
      }
      else {
        pwVar11 = *(wchar_t **)pFVar8;
        if (pwVar11 != (wchar_t *)0x0) goto LAB_14197c034;
      }
LAB_14197c13b:
      pFVar8 = pFVar8 + 0x10;
    }
  }
  return;
}

// operator() @ 15047eee0

bool __thiscall `FCsvCategoryData::RegisterCategory'::__l10::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3045156212573207725>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<_3045156212573207725>,
                         &`public:___cdecl_`public:_int___cdecl_FCsvCategoryData::RegisterCategory(FString_const&___ptr64,bool,bool)___ptr64'::`10'::<lambda_1>::operator()(void)const___ptr64'
                          ::__l2::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

