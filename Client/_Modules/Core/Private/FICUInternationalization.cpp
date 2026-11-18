// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 26

// FICUInternationalization @ 1416d52f0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FICUInternationalization * __thiscall
FICUInternationalization::FICUInternationalization
          (FICUInternationalization *this,FInternationalization *param_1)

{
  this->I18N = param_1;
  (this->DLLHandles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DLLHandles).ArrayNum = 0;
  (this->DLLHandles).ArrayMax = 0;
  (this->ICUDataDirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ICUDataDirectory).Data.ArrayNum = 0;
  (this->ICUDataDirectory).Data.ArrayMax = 0;
  (this->AllAvailableCultures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllAvailableCultures).ArrayNum = 0;
  (this->AllAvailableCultures).ArrayMax = 0;
  *(undefined8 *)&this->AllAvailableCulturesMap = 0;
  *(undefined8 *)&(this->AllAvailableCulturesMap).field_0x8 = 0;
  *(undefined8 *)&(this->AllAvailableCulturesMap).field_0x20 = 0;
  *(undefined4 *)&(this->AllAvailableCulturesMap).field_0x28 = 0;
  *(undefined4 *)&(this->AllAvailableCulturesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->AllAvailableCulturesMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AllAvailableCulturesMap).field_0x34 = 0;
  *(undefined8 *)&(this->AllAvailableCulturesMap).field_0x40 = 0;
  *(undefined4 *)&(this->AllAvailableCulturesMap).field_0x48 = 0;
  *(undefined8 *)&this->AllAvailableLanguagesToSubCulturesMap = 0;
  *(undefined8 *)&(this->AllAvailableLanguagesToSubCulturesMap).field_0x8 = 0;
  *(undefined8 *)&(this->AllAvailableLanguagesToSubCulturesMap).field_0x20 = 0;
  *(undefined4 *)&(this->AllAvailableLanguagesToSubCulturesMap).field_0x28 = 0;
  *(undefined4 *)&(this->AllAvailableLanguagesToSubCulturesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->AllAvailableLanguagesToSubCulturesMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AllAvailableLanguagesToSubCulturesMap).field_0x34 = 0;
  *(undefined8 *)&(this->AllAvailableLanguagesToSubCulturesMap).field_0x40 = 0;
  *(undefined4 *)&(this->AllAvailableLanguagesToSubCulturesMap).field_0x48 = 0;
  *(undefined8 *)&this->CultureMappings = 0;
  *(undefined8 *)&(this->CultureMappings).field_0x8 = 0;
  *(undefined8 *)&(this->CultureMappings).field_0x20 = 0;
  *(undefined4 *)&(this->CultureMappings).field_0x28 = 0;
  *(undefined4 *)&(this->CultureMappings).field_0x2c = 0x80;
  *(undefined4 *)&(this->CultureMappings).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CultureMappings).field_0x34 = 0;
  *(undefined8 *)&(this->CultureMappings).field_0x40 = 0;
  *(undefined4 *)&(this->CultureMappings).field_0x48 = 0;
  (this->AllowedCulturesFilter).Ptr = (FCultureFilter *)0x0;
  *(undefined8 *)&this->CachedCultures = 0;
  *(undefined8 *)&(this->CachedCultures).field_0x8 = 0;
  *(undefined8 *)&(this->CachedCultures).field_0x20 = 0;
  *(undefined4 *)&(this->CachedCultures).field_0x28 = 0;
  *(undefined4 *)&(this->CachedCultures).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedCultures).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedCultures).field_0x34 = 0;
  *(undefined8 *)&(this->CachedCultures).field_0x40 = 0;
  *(undefined4 *)&(this->CachedCultures).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CachedCulturesCS,4000);
  (this->InvariantGregorianCalendar).Ptr = (GregorianCalendar *)0x0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->InvariantGregorianCalendarCS,4000);
  (this->CachedPrioritizedDisplayCultureNames).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CachedPrioritizedDisplayCultureNames).ArrayNum = 0;
  (this->CachedPrioritizedDisplayCultureNames).ArrayMax = 0;
  *(undefined8 *)&this->PathToCachedFileDataMap = 0;
  *(undefined8 *)&(this->PathToCachedFileDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->PathToCachedFileDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->PathToCachedFileDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->PathToCachedFileDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->PathToCachedFileDataMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PathToCachedFileDataMap).field_0x34 = 0;
  *(undefined8 *)&(this->PathToCachedFileDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->PathToCachedFileDataMap).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->PathToCachedFileDataMapCS,4000);
  return this;
}

// ~FICUInternationalization @ 1416d8b30

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall FICUInternationalization::~FICUInternationalization(FICUInternationalization *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  GregorianCalendar *pGVar3;
  FCultureFilter *pFVar4;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->PathToCachedFileDataMapCS);
  *(undefined4 *)&(this->PathToCachedFileDataMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PathToCachedFileDataMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FICUInternationalization::FICUCachedFileData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FICUInternationalization::FICUCachedFileData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FICUInternationalization::FICUCachedFileData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PathToCachedFileDataMap);
  DestructItems<FString,int>
            ((FString *)(this->CachedPrioritizedDisplayCultureNames).AllocatorInstance.Data,
             (this->CachedPrioritizedDisplayCultureNames).ArrayNum);
  pFVar2 = (this->CachedPrioritizedDisplayCultureNames).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->InvariantGregorianCalendarCS);
  pGVar3 = (this->InvariantGregorianCalendar).Ptr;
  if (pGVar3 != (GregorianCalendar *)0x0) {
    (**(code **)pGVar3->_padding_)(pGVar3,1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CachedCulturesCS);
  *(undefined4 *)&(this->CachedCultures).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedCultures).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FCulture,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FCulture,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FCulture,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedCultures);
  pFVar4 = (this->AllowedCulturesFilter).Ptr;
  if (pFVar4 != (FCultureFilter *)0x0) {
    (*(code *)pFVar4[-1].DisabledCultures.Hash.SecondaryData)
              (&pFVar4[-1].DisabledCultures.Hash.SecondaryData);
  }
  *(undefined4 *)&(this->CultureMappings).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CultureMappings).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CultureMappings);
  *(undefined4 *)&(this->AllAvailableLanguagesToSubCulturesMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AllAvailableLanguagesToSubCulturesMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AllAvailableLanguagesToSubCulturesMap);
  *(undefined4 *)&(this->AllAvailableCulturesMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AllAvailableCulturesMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AllAvailableCulturesMap);
  DestructItems<FICUInternationalization::FICUCultureData,int>
            ((FICUCultureData *)(this->AllAvailableCultures).AllocatorInstance.Data,
             (this->AllAvailableCultures).ArrayNum);
  pFVar2 = (this->AllAvailableCultures).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ICUDataDirectory).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->DLLHandles).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// operator() @ 1416db580

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __thiscall
`FICUInternationalization::GetPrioritizedCultureNames'::__l2::<lambda_1>::operator()
          (void *this,FString *param_1,FICUCultureData *param_2)

{
  FICUInternationalization *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint *puVar7;
  wchar_t *pwVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  TSharedPtr<FCulture,1> local_18;
  
  iVar5 = (param_1->Data).ArrayNum;
  lVar6 = *(longlong *)this;
  if (iVar5 == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar4 = iVar5 - 1;
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar4,pwVar8);
  iVar5 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                      *)(lVar6 + 0x38),uVar4,param_1);
  this_00 = *(FICUInternationalization **)this;
  if (iVar5 != -1) {
    lVar6 = (longlong)iVar5 * 0x20 + *(longlong *)(lVar6 + 0x38);
    puVar7 = (uint *)(lVar6 + 0x10);
    if (lVar6 == 0) {
      puVar7 = (uint *)0x0;
    }
    if (puVar7 != (uint *)0x0) {
      uVar4 = *puVar7;
      uVar10 = 0;
      if ((int)uVar4 < (this_00->AllAvailableCultures).ArrayNum) {
        uVar10 = ~uVar4 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      pFVar9 = (this_00->AllAvailableCultures).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x40;
      ::FString::operator=(&param_2->Name,(FString *)pFVar9);
      ::FString::operator=(&param_2->LanguageCode,(FString *)(pFVar9 + 0x10));
      ::FString::operator=(&param_2->ScriptCode,(FString *)(pFVar9 + 0x20));
      ::FString::operator=(&param_2->CountryCode,(FString *)(pFVar9 + 0x30));
      return true;
    }
  }
  FICUInternationalization::FindOrMakeCanonizedCulture(this_00,&local_18,param_1,No);
  bVar2 = false;
  if (local_18.Object != (FCulture *)0x0) {
    if ((local_18.Object == (FCulture *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    ::FString::operator=(&param_2->Name,&(local_18.Object)->CachedName);
    if ((local_18.Object == (FCulture *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    ::FString::operator=(&param_2->LanguageCode,&(local_18.Object)->CachedTwoLetterISOLanguageName);
    if ((local_18.Object == (FCulture *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    ::FString::operator=(&param_2->ScriptCode,&(local_18.Object)->CachedScript);
    if ((local_18.Object == (FCulture *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    ::FString::operator=(&param_2->CountryCode,&(local_18.Object)->CachedRegion);
    bVar2 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return bVar2;
}

// operator() @ 1416dbae0

void __thiscall
`FICUInternationalization::InitializeAvailableCultures'::__l2::<lambda_1>::operator()
          (void *this,FString *param_1,FString *param_2,FString *param_3,FString *param_4)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  FString *this_00;
  undefined4 local_48 [2];
  FString *local_40;
  undefined4 *local_38;
  
  iVar1 = (param_1->Data).ArrayNum;
  pwVar10 = L"";
  lVar2 = *(longlong *)this;
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar9 = L"";
    iVar7 = 0;
  }
  else {
    pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar9);
  iVar7 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                      *)(lVar2 + 0x38),uVar6,param_1);
  if (iVar7 == -1) {
    local_48[0] = *(undefined4 *)(*(longlong *)this + 0x30);
    local_38 = local_48;
    local_40 = param_1;
    TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FString_const_&,int_const_&>_>
              ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                *)(*(longlong *)this + 0x38),
               (TPairInitializer<FString_const_&,int_const_&> *)&stack0x00000008,(bool *)&local_40);
    iVar1 = (param_2->Data).ArrayNum;
    lVar2 = *(longlong *)this;
    iVar7 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar7 = 0;
    }
    else {
      pwVar10 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar10);
    pTVar8 = TMapBase<FString,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
             ::FindOrAddImpl<FString_const_&>
                       ((TMapBase<FString,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                         *)(lVar2 + 0x88),uVar6,param_2);
    pFVar3 = (pTVar8->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)local_48) &&
        ((FScriptContainerElement *)local_48 < pFVar3 + (longlong)pTVar8->ArrayMax * 4)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = pTVar8->ArrayNum;
    if (iVar7 == pTVar8->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
    }
    pTVar8->ArrayNum = iVar7 + 1;
    *(undefined4 *)((pTVar8->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_48[0];
    lVar2 = *(longlong *)this;
    iVar7 = *(int *)(lVar2 + 0x30);
    if (iVar7 == *(int *)(lVar2 + 0x34)) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x840,(ForAnyElementType *)(lVar2 + 0x28),(int *)(lVar2 + 0x34));
    }
    *(int *)(lVar2 + 0x30) = iVar7 + 1;
    this_00 = (FString *)(*(longlong *)(lVar2 + 0x28) + (longlong)iVar7 * 0x40);
    DefaultConstructItems<FICUInternationalization::FICUCultureData,int>(this_00,1);
    ::FString::operator=(this_00,param_1);
    ::FString::operator=(this_00 + 1,param_2);
    ::FString::operator=(this_00 + 2,param_3);
    ::FString::operator=(this_00 + 3,param_4);
  }
  return;
}

// operator() @ 1416dc7a0

bool __thiscall
`FICUInternationalization::GetPrioritizedCultureNames'::__l5::<lambda_2>::operator()
          (void *this,FICUCultureData *param_1,FICUCultureData *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  wchar_t *pwVar4;
  int iVar5;
  wchar_t *pwVar6;
  int iVar7;
  int iVar8;
  
  pwVar6 = L"";
  iVar8 = 1;
  if (*(char *)this == '\0') {
LAB_1416dc7fb:
    iVar3 = 0;
  }
  else {
    if ((param_1->ScriptCode).Data.ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(param_1->ScriptCode).Data.AllocatorInstance.Data;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp(pwVar4,L"Hant");
    iVar3 = 1;
    if (iVar1 != 0) goto LAB_1416dc7fb;
  }
  iVar1 = 4;
  if ((param_1->CountryCode).Data.ArrayNum < 2) {
    iVar1 = 0;
  }
  iVar5 = 2;
  iVar7 = 2;
  if ((param_1->ScriptCode).Data.ArrayNum < 2) {
    iVar7 = 0;
  }
  if (*(char *)this != '\0') {
    if ((param_2->ScriptCode).Data.ArrayNum != 0) {
      pwVar6 = (wchar_t *)(param_2->ScriptCode).Data.AllocatorInstance.Data;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp(pwVar6,L"Hant");
    if (iVar2 == 0) goto LAB_1416dc84b;
  }
  iVar8 = 0;
LAB_1416dc84b:
  iVar2 = 4;
  if ((param_2->CountryCode).Data.ArrayNum < 2) {
    iVar2 = 0;
  }
  if ((param_2->ScriptCode).Data.ArrayNum < 2) {
    iVar5 = 0;
  }
  return (uint)(iVar5 + iVar8 + iVar2) <= (uint)(iVar7 + iVar1 + iVar3);
}

// CloseDataFile @ 1416e38d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FICUInternationalization::CloseDataFile(void *param_1,void *param_2,void *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FICUCachedFileData *pFVar4;
  ulong64 uVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_MemoryICUDataFileAllocationSize> FVar7;
  int iVar8;
  wchar_t *pwVar9;
  FName local_res10;
  
  pwVar9 = L"";
  if ((param_1 == (void *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("This",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICUInternationalization.cpp"
                         ,0x356,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_2 != (void *)0x0) {
    lpCriticalSection = (LPCRITICAL_SECTION)((longlong)param_1 + 0x248);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection);
    pFVar4 = TMapBase<FString,FICUInternationalization::FICUCachedFileData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FICUInternationalization::FICUCachedFileData,0>_>
             ::Find((TMapBase<FString,FICUInternationalization::FICUCachedFileData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FICUInternationalization::FICUCachedFileData,0>_>
                     *)((longlong)param_1 + 0x1f8),param_2);
    if ((pFVar4 == (FICUCachedFileData *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("CachedFileData",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICUInternationalization.cpp"
                           ,0x365,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((pFVar4->Buffer != param_3) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("CachedFileData->Buffer == InContents",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICUInternationalization.cpp"
                           ,0x366,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar4->ReferenceCount = pFVar4->ReferenceCount - 1;
    if (pFVar4->ReferenceCount == 0) {
      uVar5 = FMemory::GetAllocSize(pFVar4->Buffer);
      DataFileBytesInUseCount = DataFileBytesInUseCount - uVar5;
      if ((FThreadStats::TlsSlot != 0xffffffff) &&
         (CachedDataFileBytesInUseCount != DataFileBytesInUseCount)) {
        FVar7 = StatPtr_STAT_MemoryICUDataFileAllocationSize;
        if (StatPtr_STAT_MemoryICUDataFileAllocationSize ==
            (FThreadSafeStaticStat<FStat_STAT_MemoryICUDataFileAllocationSize>)0x0) {
          pFVar6 = ::FName::FName(&local_res10,"STAT_MemoryICUDataFileAllocationSize");
          FVar7 = (FThreadSafeStaticStat<FStat_STAT_MemoryICUDataFileAllocationSize>)
                  FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)
                             &StatPtr_STAT_MemoryICUDataFileAllocationSize,*pFVar6,
                             L"ICU Data File Memory Used","STATGROUP_Memory","STATCAT_Advanced",
                             L"Memory",true,false,ST_int64,false,false,MCR_Physical);
        }
        FThreadStats::AddMessage<__int64>(*(FName *)FVar7,Set,DataFileBytesInUseCount,false);
        CachedDataFileBytesInUseCount = DataFileBytesInUseCount;
      }
      if (*(int *)((longlong)param_1 + 0x200) != *(int *)((longlong)param_1 + 0x22c)) {
        iVar8 = *(int *)((longlong)param_2 + 8) + -1;
        if (*(int *)((longlong)param_2 + 8) == 0) {
          iVar8 = 0;
        }
        else {
          pwVar9 = *(wchar_t **)param_2;
        }
        uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar9);
        TSet<TTuple<FString,FICUInternationalization::FICUCachedFileData>,TDefaultMapHashableKeyFuncs<FString,FICUInternationalization::FICUCachedFileData,0>,FDefaultSetAllocator>
        ::RemoveImpl<FString>
                  ((TSet<TTuple<FString,FICUInternationalization::FICUCachedFileData>,TDefaultMapHashableKeyFuncs<FString,FICUInternationalization::FICUCachedFileData,0>,FDefaultSetAllocator>
                    *)((longlong)param_1 + 0x1f8),uVar3,param_2);
      }
    }
    if (*(void **)param_2 != (void *)0x0) {
      FMemory::Free(*(void **)param_2);
    }
    ::operator_delete(param_2,0x10);
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}

// ConditionalInitializeAllowedCultures @ 1416e52a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
FICUInternationalization::ConditionalInitializeAllowedCultures(FICUInternationalization *this)

{
  TPimplPtr<FCultureFilter,0> *pTVar1;
  FScriptContainerElement *pFVar2;
  FCultureFilter *pFVar3;
  longlong lVar4;
  EBuildConfiguration EVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> *pFVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  ForAnyElementType FVar10;
  ForElementType<FSetElementId> *pFVar11;
  wchar_t *pwVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  ForElementType<FSetElementId> *pFVar16;
  ulonglong uVar17;
  ForElementType<unsigned_int> FVar18;
  undefined1 auStackY_f8 [32];
  uint local_c8;
  uint uStack_c4;
  uint uStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_a0;
  longlong local_80;
  undefined1 local_78 [32];
  ForElementType<unsigned_int> local_58;
  uint local_50;
  uint local_4c;
  int local_48;
  int local_44;
  FScriptContainerElement local_40 [8];
  ForAnyElementType local_38;
  uint local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  if (this->bHasInitializedAllowedCultures != false) {
    return;
  }
  if (GConfig == (FConfigCacheIni *)0x0) {
    return;
  }
  if (GConfig->bIsReadyForUse == false) {
    return;
  }
  pFVar11 = (ForElementType<FSetElementId> *)0x0;
  this->bHasInitializedAllowedCultures = true;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (ForElementType<unsigned_int>)0x0;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = -1;
  local_44 = 0;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  uVar13 = *(int *)&(this->AllAvailableCulturesMap).field_0x8 -
           *(int *)&(this->AllAvailableCulturesMap).field_0x34;
  if (uVar13 != 0) {
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar13);
    }
    TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_78,uVar13);
    if (uVar13 < 4) {
      uVar13 = 1;
    }
    else {
      uVar17 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uVar13 = 1 << ((byte)lVar4 & 0x1f);
    }
    if ((local_30 == 0) || ((int)local_30 < (int)uVar13)) {
      local_30 = uVar13;
      if (local_38.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_38,0,0,4);
      }
      if (uVar13 != 0) {
        uVar15 = uVar13;
        if (uVar13 < 2) {
          if (local_38.Data != (FScriptContainerElement *)0x0) {
            uVar15 = 0;
            goto LAB_1416e53b8;
          }
        }
        else {
LAB_1416e53b8:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_38,0,uVar15,4)
          ;
        }
        if (0 < (int)uVar13) {
          uVar17 = (ulonglong)uVar13;
          pFVar7 = pFVar11;
          do {
            FVar10.Data = local_40;
            if (local_38.Data != (FScriptContainerElement *)0x0) {
              FVar10.Data = local_38.Data;
            }
            uVar6 = (ulonglong)pFVar7 & (longlong)(int)uVar13 - 1U;
            pFVar7 = (ForElementType<FSetElementId> *)&pFVar7->field_0x1;
            *(undefined4 *)(FVar10.Data + uVar6 * 4) = 0xffffffff;
            uVar17 = uVar17 - 1;
          } while (uVar17 != 0);
        }
      }
      if (local_30 != 0) {
        local_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10);
        local_c8 = 0;
        uStack_c4 = 1;
        uStack_b4 = 0;
        uStack_b0 = 0;
        pFVar7 = pFVar11;
        if (local_50 != 0) {
          FVar18 = (ForElementType<unsigned_int>)((longlong)local_78 + 0x10);
          if (local_58 != (ForElementType<unsigned_int>)0x0) {
            FVar18 = local_58;
          }
          uVar13 = *(uint *)FVar18;
          pFVar16 = pFVar11;
          while (uVar13 == 0) {
            uStack_b0 = (int)pFVar16 + 0x20;
            pFVar16 = (ForElementType<FSetElementId> *)(ulonglong)uStack_b0;
            iVar9 = (int)pFVar7;
            local_c8 = iVar9 + 1;
            pFVar7 = (ForElementType<FSetElementId> *)(ulonglong)local_c8;
            if ((int)((local_50 - 1) + ((int)(local_50 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_c8)
            goto LAB_1416e54b7;
            uVar13 = ((uint *)((longlong)FVar18 + 4))[iVar9];
          }
          uStack_c4 = -uVar13 & uVar13;
          uVar17 = (ulonglong)uStack_c4 * 2 + 1;
          lVar4 = 0x3f;
          if (uVar17 != 0) {
            for (; uVar17 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          uStack_b4 = (int)lVar4 + -1 + uStack_b0;
          pFVar7 = (ForElementType<FSetElementId> *)(ulonglong)uStack_b4;
          if ((int)local_50 < (int)uStack_b4) {
LAB_1416e54b7:
            pFVar7 = (ForElementType<FSetElementId> *)(ulonglong)local_50;
            uStack_b4 = local_50;
          }
        }
        local_a0._padding_ = CONCAT44(uStack_c4,local_c8);
        local_a0.CurrentBitIndex = uStack_b4;
        local_a0.UnvisitedBitMask = 0xffffffff;
        local_a0._28_4_ = uStack_ac;
        local_a0.BaseBitIndex = uStack_b0;
        if ((int)pFVar7 < (int)local_50) {
          do {
            iVar14 = (int)pFVar7;
            pFVar2 = (FScriptContainerElement *)(local_78._0_8_ + (longlong)iVar14 * 0x18);
            iVar9 = *(int *)(local_78._0_8_ + (longlong)iVar14 * 0x18 + 8) + -1;
            if (*(int *)(local_78._0_8_ + (longlong)iVar14 * 0x18 + 8) == 0) {
              pwVar12 = L"";
              iVar9 = 0;
            }
            else {
              pwVar12 = *(wchar_t **)pFVar2;
            }
            uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar12);
            uVar13 = local_30 - 1 & uVar13;
            *(uint *)(pFVar2 + 0x14) = uVar13;
            FVar10.Data = local_40;
            if (local_38.Data != (FScriptContainerElement *)0x0) {
              FVar10.Data = local_38.Data;
            }
            uVar17 = (longlong)(int)local_30 - 1U & (longlong)(int)uVar13;
            *(undefined4 *)(pFVar2 + 0x10) = *(undefined4 *)(FVar10.Data + uVar17 * 4);
            *(int *)(FVar10.Data + uVar17 * 4) = iVar14;
            local_a0.UnvisitedBitMask = local_a0.UnvisitedBitMask & ~local_a0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_a0);
            pFVar7 = (ForElementType<FSetElementId> *)(ulonglong)(uint)local_a0.CurrentBitIndex;
          } while (local_a0.CurrentBitIndex < (local_a0.Array)->NumBits);
        }
      }
    }
  }
  Algo::
  Transform<TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&,FString_UE::Core::Private::Tuple::TTupleBaseElement<FString,0,2>::*>
            (&this->AllAvailableCulturesMap,
             (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_78,
             (pdm_493efb4e)0x0);
  pFVar7 = ::operator_new(0xb0);
  if (pFVar7 != (ForElementType<FSetElementId> *)0x0) {
    pFVar7[1] = (ForElementType<FSetElementId>)0x0;
    *pFVar7 = (ForElementType<FSetElementId>)
              UE::Core::Private::PimplPtr::DeleterFunc<FCultureFilter>;
    pFVar7[2] = (ForElementType<FSetElementId>)0x0;
    pFVar7[3] = (ForElementType<FSetElementId>)0x0;
    pFVar7[6] = (ForElementType<FSetElementId>)0x0;
    *(undefined4 *)(pFVar7 + 7) = 0;
    *(undefined4 *)&pFVar7[7].field_0x4 = 0x80;
    *(undefined4 *)(pFVar7 + 8) = 0xffffffff;
    *(undefined4 *)&pFVar7[8].field_0x4 = 0;
    pFVar7[10] = (ForElementType<FSetElementId>)0x0;
    *(undefined4 *)(pFVar7 + 0xb) = 0;
    pFVar7[0xc] = (ForElementType<FSetElementId>)0x0;
    pFVar7[0xd] = (ForElementType<FSetElementId>)0x0;
    pFVar7[0x10] = (ForElementType<FSetElementId>)0x0;
    *(undefined4 *)(pFVar7 + 0x11) = 0;
    *(undefined4 *)&pFVar7[0x11].field_0x4 = 0x80;
    *(undefined4 *)(pFVar7 + 0x12) = 0xffffffff;
    *(undefined4 *)&pFVar7[0x12].field_0x4 = 0;
    pFVar7[0x14] = (ForElementType<FSetElementId>)0x0;
    *(undefined4 *)(pFVar7 + 0x15) = 0;
    EVar5 = FApp::GetBuildConfiguration();
    FCultureFilter::Init
              ((FCultureFilter *)(pFVar7 + 2),EVar5,Engine|Game,
               (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_78);
    pFVar11 = pFVar7;
  }
  pTVar1 = &this->AllowedCulturesFilter;
  if ((TPimplPtr<FCultureFilter,0> *)&local_80 == pTVar1) {
    if ((FCultureFilter *)(pFVar11 + 2) == (FCultureFilter *)0x0) goto LAB_1416e5659;
    FVar8 = *pFVar11;
  }
  else {
    pFVar3 = pTVar1->Ptr;
    pTVar1->Ptr = (FCultureFilter *)(pFVar11 + 2);
    if (pFVar3 == (FCultureFilter *)0x0) goto LAB_1416e5659;
    FVar8 = pFVar3[-1].DisabledCultures.Hash.SecondaryData;
    pFVar11 = &pFVar3[-1].DisabledCultures.Hash.SecondaryData;
  }
  (*(code *)FVar8)(pFVar11);
LAB_1416e5659:
  local_30 = 0;
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_78,0,local_78._8_4_);
  iVar9 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar9 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = -1;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return;
}

// ConditionalInitializeCultureMappings @ 1416e5740

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FICUInternationalization::ConditionalInitializeCultureMappings(FICUInternationalization *this)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  ForAnyElementType this_00;
  undefined1 local_res8 [16];
  TArray<FString,TSizedDefaultAllocator<32>_> local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString *local_48;
  FString *local_40;
  
  if (((this->bHasInitializedCultureMappings == false) && (GConfig != (FConfigCacheIni *)0x0)) &&
     (GConfig->bIsReadyForUse != false)) {
    this->bHasInitializedCultureMappings = true;
    if (((GConfig == (FConfigCacheIni *)0x0) || (GConfig->bIsReadyForUse == false)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("GConfig && GConfig->IsReadyForUse()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICUInternationalization.cpp"
                           ,0x198,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.ArrayNum = 0;
    local_98.ArrayMax = 0;
    FConfigCacheIni::GetArray
              (GConfig,L"Internationalization",L"CultureMappings",&local_98,&GEngineIni);
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.ArrayNum = 0;
    local_88.ArrayMax = 0;
    FConfigCacheIni::GetArray
              (GConfig,L"Internationalization",L"CultureMappings",&local_88,&GGameIni);
    lVar8 = (longlong)local_88.ArrayNum;
    if (local_88.ArrayNum != 0) {
      iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,local_88.ArrayNum,&local_98.AllocatorInstance,&local_98.ArrayNum,
                         &local_98.ArrayMax);
      memmove(local_98.AllocatorInstance.Data + (longlong)iVar4 * 0x10,
              local_88.AllocatorInstance.Data,lVar8 << 4);
      local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
    }
    DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,0);
    if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.AllocatorInstance.Data);
    }
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Reserve((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&this->CultureMappings,local_98.ArrayNum);
    iVar4 = local_98.ArrayNum;
    uVar7 = (ulonglong)local_98.ArrayNum;
    pFVar9 = local_98.AllocatorInstance.Data + uVar7 * 0x10;
    this_00.Data = local_98.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar7 != iVar4) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (this_00.Data == pFVar9) break;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      ::FString::FString(&local_58,L";");
      bVar3 = ::FString::Split((FString *)this_00.Data,&local_58,&local_68,&local_78,CaseSensitive,
                               FromStart);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        iVar6 = local_78.Data.ArrayNum + -1;
        FVar2.Data = local_78.Data.AllocatorInstance.Data;
        if (local_78.Data.ArrayNum == 0) {
          iVar6 = 0;
          FVar2.Data = (FScriptContainerElement *)L"";
        }
        uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar2.Data);
        iVar6 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FString>
                          ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                            *)&this->AllAvailableCulturesMap,uVar5,&local_78);
        if (iVar6 == -1) {
          if (2 < (byte)LogICUInternationalization._0_1_) {
            UE::Logging::Private::BasicLog<3>
                      (&::LOG_Static,(FLogCategoryBase *)&LogICUInternationalization);
          }
        }
        else {
          local_48 = &local_68;
          local_40 = &local_78;
          TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
                    ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      *)&this->CultureMappings,
                     (TPairInitializer<FString_&&,FString_&&> *)(local_res8 + 8),(bool *)&local_48);
        }
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      uVar7 = local_98._8_8_ & 0xffffffff;
      this_00.Data = this_00.Data + 0x10;
    }
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Compact((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&this->CultureMappings);
    DestructItems<FString,int>((FString *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
    if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.AllocatorInstance.Data);
    }
  }
  return;
}

// FindOrMakeCanonizedCulture @ 1416ef130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TSharedPtr<FCulture,1> * __thiscall
FICUInternationalization::FindOrMakeCanonizedCulture
          (FICUInternationalization *this,TSharedPtr<FCulture,1> *__return_storage_ptr__,
          FString *param_1,EAllowDefaultCultureFallback param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TSharedRef<FCulture,1> *pTVar6;
  FICUCultureImplementation *pFVar7;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar8;
  longlong lVar9;
  TSharedPtr<FCulture,1> *pTVar10;
  wchar_t *pwVar11;
  TReferenceControllerBase<1> *pTVar12;
  FCulture *this_00;
  FSharedReferencer<1> FVar13;
  undefined8 *puVar14;
  undefined1 auStack_1b8 [32];
  FCulture *local_198;
  FSharedReferencer<1> FStack_190;
  int local_188;
  TUniquePtr<FICUCultureImplementation,TDefaultDelete<FICUCultureImplementation>_> local_180;
  TUniquePtr<FICUCultureImplementation,TDefaultDelete<FICUCultureImplementation>_> local_178;
  TPairInitializer<FString_const_&,TSharedRef<FCulture,1>_&&> local_170;
  FSharedReferencer<1> local_160;
  undefined8 local_158;
  FSharedReferencer<1> local_150;
  FCulture *local_148;
  TReferenceControllerBase<1> *pTStack_140;
  FString *local_138;
  FCulture **local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  TSharedRef<FCulture,1> local_108;
  TSharedRef<FCulture,1> local_f8;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  lpCriticalSection = &this->CachedCulturesCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (param_1->Data).ArrayNum;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar11 = L"";
    iVar5 = 0;
  }
  else {
    pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar11);
  iVar5 = TSet<TTuple<FString,TSharedRef<FCulture,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FCulture,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TSharedRef<FCulture,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FCulture,1>,0>,FDefaultSetAllocator>
                      *)&this->CachedCultures,uVar4,param_1);
  if (iVar5 != -1) {
    lVar9 = *(longlong *)&this->CachedCultures + (longlong)iVar5 * 0x28;
    puVar14 = (undefined8 *)(lVar9 + 0x10);
    if (lVar9 == 0) {
      puVar14 = (undefined8 *)0x0;
    }
    if (puVar14 != (undefined8 *)0x0) {
      __return_storage_ptr__->Object = (FCulture *)*puVar14;
      pTVar12 = (TReferenceControllerBase<1> *)puVar14[1];
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar12;
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return __return_storage_ptr__;
    }
  }
  pTVar12 = (TReferenceControllerBase<1> *)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_198 = (FCulture *)0x0;
  FStack_190.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = TArray<TSharedRef<FCulture,1>,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FInternationalization::GetCustomCulture_::__l2::<lambda_1>_>
                     (&this->I18N->CustomCultures,(<lambda_1>)param_1);
  if (pTVar6 == (TSharedRef<FCulture,1> *)0x0) {
    local_110 = 0;
    local_118 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pTVar12 = (pTVar6->SharedReferenceCount).ReferenceController;
    this_00 = pTVar6->Object;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_120 = 0;
    local_128 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (this_00 != (FCulture *)0x0) {
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_198 = this_00;
      FStack_190.ReferenceController = pTVar12;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      FVar13.ReferenceController = pTVar12;
      goto LAB_1416ef460;
    }
  }
  iVar5 = (param_1->Data).ArrayNum;
  if (iVar5 == 0) {
    pwVar11 = L"";
    iVar5 = 0;
  }
  else {
    pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    iVar5 = iVar5 + -1;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar11);
  iVar5 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                      *)&this->AllAvailableCulturesMap,uVar4,param_1);
  if (iVar5 == -1) {
    if ((param_1->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    local_188 = 0;
    pTVar8 = StringCast<char,128,wchar_t>(&local_e8,pwVar11);
    lVar9 = ures_open_64(0,pTVar8->Ptr);
    if ((void *)local_e8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_e8._padding_);
    }
    this_00 = local_198;
    FVar13.ReferenceController = FStack_190.ReferenceController;
    if (lVar9 != 0) {
      if ((local_188 != -0x7f) || (param_2 == Yes)) {
        pFVar7 = ::operator_new(0x2d8);
        local_178.Ptr = (FICUCultureImplementation *)0x0;
        if (pFVar7 != (FICUCultureImplementation *)0x0) {
          local_178.Ptr = FICUCultureImplementation::FICUCultureImplementation(pFVar7,param_1);
        }
        pTVar6 = FCulture::Create(&local_f8,&local_178);
        local_150.ReferenceController = (pTVar6->SharedReferenceCount).ReferenceController;
        local_198 = pTVar6->Object;
        if (local_150.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_150.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_150.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_158 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_190,&local_150);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_150.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_f8.SharedReferenceCount.ReferenceController);
        if (local_178.Ptr != (FICUCultureImplementation *)0x0) {
          (**(code **)(local_178.Ptr)->_padding_)(local_178.Ptr,1);
        }
      }
      ures_close_64(lVar9);
      this_00 = local_198;
      FVar13.ReferenceController = FStack_190.ReferenceController;
    }
  }
  else {
    pFVar7 = ::operator_new(0x2d8);
    local_180.Ptr = (FICUCultureImplementation *)0x0;
    if (pFVar7 != (FICUCultureImplementation *)0x0) {
      local_180.Ptr = FICUCultureImplementation::FICUCultureImplementation(pFVar7,param_1);
    }
    pTVar6 = FCulture::Create(&local_108,&local_180);
    local_160.ReferenceController = (pTVar6->SharedReferenceCount).ReferenceController;
    local_198 = pTVar6->Object;
    if (local_160.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_160.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_160.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_170.Value = (TSharedRef<FCulture,1> *)(FICUCultureImplementation *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_190,&local_160);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_160.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_108.SharedReferenceCount.ReferenceController);
    this_00 = local_198;
    FVar13.ReferenceController = FStack_190.ReferenceController;
    if (local_180.Ptr != (FICUCultureImplementation *)0x0) {
      (**(code **)(local_180.Ptr)->_padding_)(local_180.Ptr,1);
      this_00 = local_198;
      FVar13.ReferenceController = FStack_190.ReferenceController;
    }
  }
LAB_1416ef460:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  if (this_00 != (FCulture *)0x0) {
    if ((this_00 == (FCulture *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar10 = (TSharedPtr<FCulture,1> *)(*pcVar2)();
      return pTVar10;
    }
    FCulture::RefreshCultureDisplayNames(this_00,&this->CachedPrioritizedDisplayCultureNames,false);
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((this_00 == (FCulture *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar10 = (TSharedPtr<FCulture,1> *)(*pcVar2)();
      return pTVar10;
    }
    local_148 = local_198;
    pTStack_140 = FStack_190.ReferenceController;
    if (FVar13.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar13.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar13.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_198 == (FCulture *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar10 = (TSharedPtr<FCulture,1> *)(*pcVar2)();
      return pTVar10;
    }
    local_130 = &local_148;
    local_138 = param_1;
    TSet<TTuple<FString,TSharedRef<FCulture,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FCulture,1>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,TSharedRef<FCulture,1>_&&>_>
              ((TSet<TTuple<FString,TSharedRef<FCulture,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FCulture,1>,0>,FDefaultSetAllocator>
                *)&this->CachedCultures,&local_170,(bool *)&local_138);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_140)
    ;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  __return_storage_ptr__->Object = this_00;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar13.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// FindOrMakeCulture @ 1416ef5d0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TSharedPtr<FCulture,1> * __thiscall
FICUInternationalization::FindOrMakeCulture
          (FICUInternationalization *this,TSharedPtr<FCulture,1> *__return_storage_ptr__,
          FString *param_1,EAllowDefaultCultureFallback param_2)

{
  FInternationalization *pFVar1;
  FString local_28;
  FString local_18;
  
  pFVar1 = this->I18N;
  ::FString::FString(&local_28,L"en-US-POSIX");
  InternationalizationUtilities::GetCanonicalCultureName(&local_18,param_1,&local_28,pFVar1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  FindOrMakeCanonizedCulture(this,__return_storage_ptr__,&local_18,param_2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetCulture @ 1416f4de0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TSharedPtr<FCulture,1> * __thiscall
FICUInternationalization::GetCulture
          (FICUInternationalization *this,TSharedPtr<FCulture,1> *__return_storage_ptr__,
          FString *param_1)

{
  FindOrMakeCulture(this,__return_storage_ptr__,param_1,No);
  return __return_storage_ptr__;
}

// GetCultureNames @ 1416f4fc0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
FICUInternationalization::GetCultureNames
          (FICUInternationalization *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FInternationalization *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  
  TArray<FString,TSizedDefaultAllocator<32>_>::Reset
            (param_1,(this->I18N->CustomCultures).ArrayNum + (this->AllAvailableCultures).ArrayNum);
  iVar1 = (this->AllAvailableCultures).ArrayNum;
  pFVar7 = (this->AllAvailableCultures).AllocatorInstance.Data;
  pFVar9 = pFVar7 + (longlong)iVar1 * 0x40;
  while( true ) {
    if ((this->AllAvailableCultures).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FICUInternationalization::FICUCultureData_const_,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar9) break;
    pFVar2 = (param_1->AllocatorInstance).Data;
    if ((pFVar2 <= pFVar7) && (pFVar7 < pFVar2 + (longlong)param_1->ArrayMax * 0x10)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = param_1->ArrayNum;
    if (iVar6 == param_1->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      param_1->ArrayNum = iVar6;
    }
    param_1->ArrayNum = iVar6 + 1;
    ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 0x10),
                       (FString *)pFVar7);
    pFVar7 = pFVar7 + 0x40;
  }
  pFVar3 = this->I18N;
  iVar1 = (pFVar3->CustomCultures).ArrayNum;
  pFVar7 = (pFVar3->CustomCultures).AllocatorInstance.Data;
  pFVar9 = pFVar7 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((pFVar3->CustomCultures).ArrayNum != iVar1) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TSharedRef<FCulture,1>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar7 == pFVar9) break;
    pFVar2 = (param_1->AllocatorInstance).Data;
    pFVar8 = (FScriptContainerElement *)(*(longlong *)pFVar7 + 0x28);
    if ((pFVar2 <= pFVar8) && (pFVar8 < pFVar2 + (longlong)param_1->ArrayMax * 0x10)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = param_1->ArrayNum;
    if (iVar6 == param_1->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      param_1->ArrayNum = iVar6;
    }
    param_1->ArrayNum = iVar6 + 1;
    ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 0x10),
                       (FString *)pFVar8);
    pFVar7 = pFVar7 + 0x10;
  }
  return;
}

// GetPrioritizedCultureNames @ 1416fa540

/* WARNING: Removing unreachable block (ram,0x0001416fb0c4) */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
FICUInternationalization::GetPrioritizedCultureNames
          (FICUInternationalization *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1)

{
  FInternationalization *pFVar1;
  FICUCultureData *pFVar2;
  code *pcVar3;
  FICUInternationalization *pFVar4;
  FICUInternationalization *pFVar5;
  FCulture *pFVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar12;
  ulonglong uVar13;
  uint *puVar14;
  FString *pFVar15;
  wchar_t *pwVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  ForAnyElementType FVar20;
  FICUCultureData *pFVar21;
  longlong lVar22;
  int *piVar23;
  FIdentityFunctor local_res8;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_168;
  undefined1 local_167;
  undefined1 local_166 [6];
  ForAnyElementType local_160;
  undefined8 local_158;
  TArray<FICUInternationalization::FICUCultureData,TSizedDefaultAllocator<32>_> local_150;
  FString local_140;
  FICUInternationalization *local_130;
  FICUCultureData local_128;
  FScriptContainerElement *local_e8;
  TSharedPtr<FCulture,1> local_e0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_d0;
  FICUCultureData local_b8;
  FScriptContainerElement *local_78;
  int *local_70;
  FString local_68;
  FString local_58;
  
  pFVar1 = this->I18N;
  local_130 = this;
  ::FString::FString(&local_58,L"en-US-POSIX");
  InternationalizationUtilities::GetCanonicalCultureName(&local_68,param_1,&local_58,pFVar1);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ConditionalInitializeCultureMappings(this);
  iVar9 = (param_1->Data).ArrayNum;
  if (iVar9 == 0) {
    pwVar16 = L"";
  }
  else {
    pwVar16 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar10 = iVar9 + -1;
  if (iVar9 == 0) {
    iVar10 = 0;
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar16);
  iVar9 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      *)&this->CultureMappings,uVar8,param_1);
  if (iVar9 != -1) {
    lVar22 = *(longlong *)&this->CultureMappings + (longlong)iVar9 * 0x28;
    pFVar15 = (FString *)(lVar22 + 0x10);
    if (lVar22 == 0) {
      pFVar15 = (FString *)0x0;
    }
    if (pFVar15 != (FString *)0x0) {
      ::FString::operator=(&local_68,pFVar15);
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar23 = &__return_storage_ptr__->ArrayMax;
  *piVar23 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  local_128.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.Name.Data.ArrayNum = 0;
  local_128.Name.Data.ArrayMax = 0;
  local_128.LanguageCode.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.LanguageCode.Data.ArrayNum = 0;
  local_128.LanguageCode.Data.ArrayMax = 0;
  local_128.ScriptCode.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.ScriptCode.Data.ArrayNum = 0;
  local_128.ScriptCode.Data.ArrayMax = 0;
  local_128.CountryCode.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.CountryCode.Data.ArrayNum = 0;
  local_128.CountryCode.Data.ArrayMax = 0;
  local_70 = piVar23;
  bVar7 = `FICUInternationalization::GetPrioritizedCultureNames'::__l2::<lambda_1>::operator()
                    (&local_130,&local_68,&local_128);
  if (!bVar7) goto LAB_1416fafde;
  local_160.Data = (FScriptContainerElement *)0x0;
  local_158 = 0;
  if ((local_128.ScriptCode.Data.ArrayNum < 2) && (1 < local_128.CountryCode.Data.ArrayNum)) {
    iVar9 = local_128.LanguageCode.Data.ArrayNum + -1;
    FVar20.Data = local_128.LanguageCode.Data.AllocatorInstance.Data;
    if (local_128.LanguageCode.Data.ArrayNum == 0) {
      iVar9 = 0;
      FVar20.Data = (FScriptContainerElement *)L"";
    }
    uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,(wchar_t *)FVar20.Data);
    iVar9 = TSet<TTuple<FString,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        *)&this->AllAvailableLanguagesToSubCulturesMap,uVar8,&local_128.LanguageCode
                      );
    if (iVar9 != -1) {
      lVar22 = *(longlong *)&this->AllAvailableLanguagesToSubCulturesMap + (longlong)iVar9 * 0x28;
      pFVar15 = (FString *)(lVar22 + 0x10);
      if (lVar22 == 0) {
        pFVar15 = (FString *)0x0;
      }
      if (pFVar15 != (FString *)0x0) {
        pFVar18 = (pFVar15->Data).AllocatorInstance.Data;
        iVar9 = (pFVar15->Data).ArrayNum;
        local_e8 = pFVar18 + (longlong)iVar9 * 4;
        while( true ) {
          pFVar17 = local_e8;
          if ((pFVar15->Data).ArrayNum != iVar9) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res18);
          }
          if (pFVar18 == pFVar17) break;
          uVar8 = *(uint *)pFVar18;
          uVar11 = 0;
          if ((int)uVar8 < (this->AllAvailableCultures).ArrayNum) {
            uVar11 = ~uVar8 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            pTVar12 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar12;
          }
          pFVar21 = (FICUCultureData *)
                    ((this->AllAvailableCultures).AllocatorInstance.Data +
                    (longlong)(int)uVar8 * 0x40);
          if (1 < (pFVar21->ScriptCode).Data.ArrayNum) {
            iVar10 = (pFVar21->CountryCode).Data.ArrayNum;
            if (local_128.CountryCode.Data.ArrayNum == iVar10) {
              if (1 < local_128.CountryCode.Data.ArrayNum) {
                iVar10 = FGenericPlatformStricmp::Stricmp
                                   ((wchar_t *)local_128.CountryCode.Data.AllocatorInstance.Data,
                                    (wchar_t *)(pFVar21->CountryCode).Data.AllocatorInstance.Data);
                bVar7 = iVar10 == 0;
                goto LAB_1416fa79a;
              }
            }
            else {
              bVar7 = iVar10 + local_128.CountryCode.Data.ArrayNum == 1;
LAB_1416fa79a:
              if (!bVar7) goto LAB_1416fa876;
            }
            if (((local_160.Data <= pFVar21) &&
                (pFVar21 < (FICUCultureData *)(local_160.Data + (longlong)local_158._4_4_ * 0x40)))
               && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar7)) {
              pcVar3 = (code *)swi(3);
              pTVar12 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
              return pTVar12;
            }
            iVar10 = (int)local_158;
            if ((int)local_158 == local_158._4_4_) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x840,&local_160,(int *)((longlong)&local_158 + 4));
            }
            local_158 = CONCAT44(local_158._4_4_,iVar10 + 1);
            pFVar17 = local_160.Data + (longlong)iVar10 * 0x40;
            ::FString::FString((FString *)pFVar17,(FString *)pFVar21);
            ::FString::FString((FString *)(pFVar17 + 0x10),&pFVar21->LanguageCode);
            ::FString::FString((FString *)(pFVar17 + 0x20),&pFVar21->ScriptCode);
            ::FString::FString((FString *)(pFVar17 + 0x30),&pFVar21->CountryCode);
          }
LAB_1416fa876:
          pFVar18 = pFVar18 + 4;
        }
      }
    }
  }
  if ((int)local_158 == 0) {
    if (((local_160.Data <= &local_128) &&
        (&local_128 < (FICUCultureData *)(local_160.Data + (longlong)local_158._4_4_ * 0x40))) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar3 = (code *)swi(3);
      pTVar12 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar12;
    }
    if ((int)local_158 == local_158._4_4_) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x840,&local_160,(int *)((longlong)&local_158 + 4));
      local_158 = CONCAT44(local_158._4_4_,iVar9);
    }
    FVar20.Data = local_128.Name.Data.AllocatorInstance.Data;
    pFVar18 = local_160.Data + (longlong)(int)local_158 * 0x40;
    local_158 = CONCAT44(local_158._4_4_,(int)local_158 + 1);
    *(undefined8 *)&pFVar18->field_0x0 = 0;
    lVar22 = (longlong)local_128.Name.Data.ArrayNum;
    *(int *)(pFVar18 + 8) = local_128.Name.Data.ArrayNum;
    if (local_128.Name.Data.ArrayNum == 0) {
      *(int *)(pFVar18 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_128.Name.Data.ArrayNum,0,(ForAnyElementType *)pFVar18,
                 local_128.Name.Data.ArrayNum,(int *)(pFVar18 + 0xc));
      memcpy(*(void **)&pFVar18->field_0x0,FVar20.Data,lVar22 * 2);
    }
    FVar20.Data = local_128.LanguageCode.Data.AllocatorInstance.Data;
    pFVar17 = pFVar18 + 0x10;
    *(FScriptContainerElement **)pFVar17 = (FScriptContainerElement *)0x0;
    lVar22 = (longlong)local_128.LanguageCode.Data.ArrayNum;
    *(int *)(pFVar18 + 0x18) = local_128.LanguageCode.Data.ArrayNum;
    if (local_128.LanguageCode.Data.ArrayNum == 0) {
      *(int *)(pFVar18 + 0x1c) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_128.LanguageCode.Data.ArrayNum,0,(ForAnyElementType *)pFVar17,
                 local_128.LanguageCode.Data.ArrayNum,(int *)(pFVar18 + 0x1c));
                    /* WARNING: Load size is inaccurate */
      memcpy(*pFVar17,FVar20.Data,lVar22 * 2);
    }
    FVar20.Data = local_128.ScriptCode.Data.AllocatorInstance.Data;
    pFVar17 = pFVar18 + 0x20;
    *(FScriptContainerElement **)pFVar17 = (FScriptContainerElement *)0x0;
    lVar22 = (longlong)local_128.ScriptCode.Data.ArrayNum;
    *(int *)(pFVar18 + 0x28) = local_128.ScriptCode.Data.ArrayNum;
    if (local_128.ScriptCode.Data.ArrayNum == 0) {
      *(int *)(pFVar18 + 0x2c) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_128.ScriptCode.Data.ArrayNum,0,(ForAnyElementType *)pFVar17,
                 local_128.ScriptCode.Data.ArrayNum,(int *)(pFVar18 + 0x2c));
                    /* WARNING: Load size is inaccurate */
      memcpy(*pFVar17,FVar20.Data,lVar22 * 2);
    }
    FVar20.Data = local_128.CountryCode.Data.AllocatorInstance.Data;
    pFVar17 = pFVar18 + 0x30;
    *(undefined8 *)pFVar17 = 0;
    lVar22 = (longlong)local_128.CountryCode.Data.ArrayNum;
    *(int *)(pFVar18 + 0x38) = local_128.CountryCode.Data.ArrayNum;
    if (local_128.CountryCode.Data.ArrayNum == 0) {
      *(int *)(pFVar18 + 0x3c) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_128.CountryCode.Data.ArrayNum,0,(ForAnyElementType *)pFVar17,
                 local_128.CountryCode.Data.ArrayNum,(int *)(pFVar18 + 0x3c));
      memcpy(*(void **)pFVar17,FVar20.Data,lVar22 * 2);
    }
  }
  local_150.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_150.ArrayNum = 0;
  local_150.ArrayMax = 0;
  uVar8 = (int)local_158 * 3;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  if (0 < (int)uVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,uVar8,&local_150.AllocatorInstance,0,&local_150.ArrayMax);
  }
  uVar13 = (ulonglong)(int)local_158;
  local_78 = local_160.Data + uVar13 * 0x40;
  local_e8 = (FScriptContainerElement *)CONCAT44(local_e8._4_4_,(int)local_158);
  pFVar18 = local_160.Data + 0x20;
  while( true ) {
    pFVar17 = local_78;
    if ((int)local_158 != (int)uVar13) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FICUInternationalization::FICUCultureData,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (pFVar18 + -0x20 == pFVar17) break;
    FCulture::GetPrioritizedParentCultureNames
              (&local_d0,(FString *)(pFVar18 + -0x10),(FString *)pFVar18,(FString *)(pFVar18 + 0x10)
              );
    iVar9 = local_d0.ArrayNum;
    pFVar17 = local_d0.AllocatorInstance.Data + (longlong)local_d0.ArrayNum * 0x10;
    FVar20.Data = local_d0.AllocatorInstance.Data;
    while( true ) {
      if (local_d0.ArrayNum != iVar9) {
        local_168 = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_168);
      }
      pFVar4 = local_130;
      if (FVar20.Data == pFVar17) break;
      local_b8.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.Name.Data.ArrayNum = 0;
      local_b8.Name.Data.ArrayMax = 0;
      local_b8.LanguageCode.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.LanguageCode.Data.ArrayNum = 0;
      local_b8.LanguageCode.Data.ArrayMax = 0;
      local_b8.ScriptCode.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.ScriptCode.Data.ArrayNum = 0;
      local_b8.ScriptCode.Data.ArrayMax = 0;
      local_b8.CountryCode.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.CountryCode.Data.ArrayNum = 0;
      local_b8.CountryCode.Data.ArrayMax = 0;
      iVar10 = *(int *)(FVar20.Data + 8) + -1;
      if (*(int *)(FVar20.Data + 8) == 0) {
        pwVar16 = L"";
        iVar10 = 0;
      }
      else {
        pwVar16 = *(wchar_t **)FVar20.Data;
      }
      uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar16);
      iVar10 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FString>
                         ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                           *)&pFVar4->AllAvailableCulturesMap,uVar8,(FString *)FVar20.Data);
      pFVar5 = local_130;
      if (iVar10 == -1) {
LAB_1416fac7f:
        FindOrMakeCanonizedCulture(local_130,&local_e0,(FString *)FVar20.Data,No);
        pFVar6 = local_e0.Object;
        if (local_e0.Object == (FCulture *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_e0.SharedReferenceCount.ReferenceController);
        }
        else {
          if ((local_e0.Object == (FCulture *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            pTVar12 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar12;
          }
          ::FString::operator=(&local_b8.Name,&pFVar6->CachedName);
          if ((pFVar6 == (FCulture *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            pTVar12 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar12;
          }
          ::FString::operator=(&local_b8.LanguageCode,&pFVar6->CachedTwoLetterISOLanguageName);
          if ((pFVar6 == (FCulture *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            pTVar12 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar12;
          }
          ::FString::operator=(&local_b8.ScriptCode,&pFVar6->CachedScript);
          if ((pFVar6 == (FCulture *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            pTVar12 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar12;
          }
          ::FString::operator=(&local_b8.CountryCode,&pFVar6->CachedRegion);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_e0.SharedReferenceCount.ReferenceController);
          TArray<FICUInternationalization::FICUCultureData,TSizedDefaultAllocator<32>_>::
          AddUniqueImpl<FICUInternationalization::FICUCultureData_const_&>(&local_150,&local_b8);
        }
      }
      else {
        lVar22 = (longlong)iVar10 * 0x20 + *(longlong *)&pFVar4->AllAvailableCulturesMap;
        puVar14 = (uint *)(lVar22 + 0x10);
        if (lVar22 == 0) {
          puVar14 = (uint *)0x0;
        }
        if (puVar14 == (uint *)0x0) goto LAB_1416fac7f;
        uVar8 = *puVar14;
        uVar11 = 0;
        if ((int)uVar8 < (local_130->AllAvailableCultures).ArrayNum) {
          uVar11 = ~uVar8 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          pTVar12 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar12;
        }
        pFVar19 = (pFVar5->AllAvailableCultures).AllocatorInstance.Data +
                  (longlong)(int)uVar8 * 0x40;
        ::FString::operator=(&local_b8.Name,(FString *)pFVar19);
        ::FString::operator=(&local_b8.LanguageCode,(FString *)(pFVar19 + 0x10));
        ::FString::operator=(&local_b8.ScriptCode,(FString *)(pFVar19 + 0x20));
        ::FString::operator=(&local_b8.CountryCode,(FString *)(pFVar19 + 0x30));
        TArray<FICUInternationalization::FICUCultureData,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<FICUInternationalization::FICUCultureData_const_&>(&local_150,&local_b8);
      }
      if (local_b8.CountryCode.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.CountryCode.Data.AllocatorInstance.Data);
      }
      if (local_b8.ScriptCode.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.ScriptCode.Data.AllocatorInstance.Data);
      }
      if (local_b8.LanguageCode.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.LanguageCode.Data.AllocatorInstance.Data);
      }
      if (local_b8.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Name.Data.AllocatorInstance.Data);
      }
      FVar20.Data = FVar20.Data + 0x10;
    }
    DestructItems<FString,int>((FString *)local_d0.AllocatorInstance.Data,local_d0.ArrayNum);
    if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.AllocatorInstance.Data);
    }
    pFVar18 = pFVar18 + 0x40;
    uVar13 = (ulonglong)local_e8 & 0xffffffff;
  }
  FVar20.Data = (FScriptContainerElement *)L"";
  if (local_128.CountryCode.Data.ArrayNum != 0) {
    FVar20.Data = local_128.CountryCode.Data.AllocatorInstance.Data;
  }
  iVar9 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar20.Data,L"HK");
  if (iVar9 == 0) {
LAB_1416fae53:
    local_167 = 1;
  }
  else {
    FVar20.Data = (FScriptContainerElement *)L"";
    if (local_128.CountryCode.Data.ArrayNum != 0) {
      FVar20.Data = local_128.CountryCode.Data.AllocatorInstance.Data;
    }
    iVar9 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar20.Data,L"MO");
    if (iVar9 == 0) goto LAB_1416fae53;
    local_167 = 0;
  }
  local_res8 = SUB81(this,0);
  AlgoImpl::
  IntroSortInternal<FICUInternationalization::FICUCultureData,int,FIdentityFunctor,TDereferenceWrapper<FICUInternationalization::FICUCultureData,_FICUInternationalization::GetPrioritizedCultureNames_::__l5::<lambda_2>_>_>
            ((FICUCultureData *)local_150.AllocatorInstance.Data,local_150.ArrayNum,local_res8,
             (<lambda_2> *)&local_167);
  piVar23 = local_70;
  uVar13 = local_150._8_8_ & 0xffffffff;
  if (local_150.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar13);
  }
  if (*local_70 < local_150.ArrayNum) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_150.ArrayNum,&__return_storage_ptr__->AllocatorInstance,
               __return_storage_ptr__->ArrayNum,local_70);
    uVar13 = local_150._8_8_ & 0xffffffff;
  }
  iVar9 = (int)uVar13;
  pFVar21 = (FICUCultureData *)(local_150.AllocatorInstance.Data + (longlong)iVar9 * 0x40);
  FVar20.Data = local_150.AllocatorInstance.Data;
  while( true ) {
    iVar10 = (int)uVar13;
    if ((int)uVar13 != iVar9) {
      local_166[0] = 0;
      `TCheckedPointerIterator<FICUInternationalization::FICUCultureData,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_166);
      iVar10 = local_150.ArrayNum;
    }
    if ((FICUCultureData *)FVar20.Data == pFVar21) break;
    bVar7 = IsCultureAllowed(this,(FString *)FVar20.Data);
    if (bVar7) {
      pFVar2 = (FICUCultureData *)(__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar2 <= FVar20.Data) && (FVar20.Data < (FICUCultureData *)(&pFVar2->Name + *piVar23)))
         && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar7)) {
        pcVar3 = (code *)swi(3);
        pTVar12 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar12;
      }
      iVar10 = __return_storage_ptr__->ArrayNum;
      if (iVar10 == *piVar23) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&__return_storage_ptr__->AllocatorInstance,piVar23);
      }
      __return_storage_ptr__->ArrayNum = iVar10 + 1;
      ::FString::FString((FString *)
                         ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar10 * 0x10
                         ),(FString *)FVar20.Data);
    }
    uVar13 = local_150._8_8_ & 0xffffffff;
    FVar20.Data = FVar20.Data + 0x40;
  }
  DestructItems<FICUInternationalization::FICUCultureData,int>
            ((FICUCultureData *)local_150.AllocatorInstance.Data,iVar10);
  if ((FICUCultureData *)local_150.AllocatorInstance.Data != (FICUCultureData *)0x0) {
    FMemory::Free(local_150.AllocatorInstance.Data);
  }
  DestructItems<FICUInternationalization::FICUCultureData,int>
            ((FICUCultureData *)local_160.Data,(int)local_158);
  if ((FICUCultureData *)local_160.Data != (FICUCultureData *)0x0) {
    FMemory::Free(local_160.Data);
  }
LAB_1416fafde:
  if (__return_storage_ptr__->ArrayNum == 0) {
    ::FString::FString(&local_140,L"en");
    pFVar18 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar18 <= (FScriptContainerElement *)&local_140) &&
        ((FScriptContainerElement *)&local_140 < pFVar18 + (longlong)*piVar23 * 0x10)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar3 = (code *)swi(3);
      pTVar12 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar12;
    }
    iVar9 = __return_storage_ptr__->ArrayNum;
    if (iVar9 == *piVar23) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,piVar23);
    }
    __return_storage_ptr__->ArrayNum = iVar9 + 1;
    pFVar18 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
    *(undefined8 *)pFVar18 = 0;
    *(FScriptContainerElement **)pFVar18 = local_140.Data.AllocatorInstance.Data;
    local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar18 + 8) = local_140.Data.ArrayNum;
    *(int *)(pFVar18 + 0xc) = local_140.Data.ArrayMax;
    local_140.Data.ArrayNum = 0;
    local_140.Data.ArrayMax = 0;
  }
  if (local_128.CountryCode.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.CountryCode.Data.AllocatorInstance.Data);
  }
  if (local_128.ScriptCode.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.ScriptCode.Data.AllocatorInstance.Data);
  }
  if (local_128.LanguageCode.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.LanguageCode.Data.AllocatorInstance.Data);
  }
  if (local_128.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Name.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// HandleLanguageChanged @ 1416fcc50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
FICUInternationalization::HandleLanguageChanged
          (FICUInternationalization *this,TSharedRef<FCulture,1> *param_1)

{
  ulonglong uVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  FCulture *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  TMap<FString,TSharedRef<FCulture,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FCulture,1>,0>_>
  *pTVar9;
  TMap<FString,TSharedRef<FCulture,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FCulture,1>,0>_>
  *pTVar10;
  bool bVar11;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  undefined1 auStack_1a8 [32];
  undefined1 local_188 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_180;
  undefined4 local_170 [2];
  TMap<FString,TSharedRef<FCulture,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FCulture,1>,0>_>
  *local_168;
  int iStack_160;
  uint uStack_15c;
  undefined1 *local_158;
  undefined4 uStack_150;
  int iStack_14c;
  int local_148;
  int iStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  int local_138;
  TMap<FString,TSharedRef<FCulture,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FCulture,1>,0>_>
  *local_130;
  TSharedRef<FCulture,1> *local_128;
  TMap<FString,TSharedRef<FCulture,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FCulture,1>,0>_>
  *local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_118;
  undefined8 uStack_f8;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  iVar18 = 0;
  iVar16 = 0;
  local_170[0] = 0;
  if ((param_1->Object->CachedName).Data.ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(param_1->Object->CachedName).Data.AllocatorInstance.Data;
  }
  local_128 = param_1;
  pTVar12 = StringCast<char,128,wchar_t>(&local_e8,pwVar14);
  uloc_setDefault_64(pTVar12->Ptr,local_170);
  if ((void *)local_e8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_e8._padding_);
  }
  pFVar6 = param_1->Object;
  FCulture::GetPrioritizedParentCultureNames
            (&local_180,&pFVar6->CachedTwoLetterISOLanguageName,&pFVar6->CachedScript,
             &pFVar6->CachedRegion);
  pTVar2 = &this->CachedPrioritizedDisplayCultureNames;
  if (pTVar2 != &local_180) {
    DestructItems<FString,int>
              ((FString *)(pTVar2->AllocatorInstance).Data,
               (this->CachedPrioritizedDisplayCultureNames).ArrayNum);
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar2->AllocatorInstance).Data = local_180.AllocatorInstance.Data;
    (this->CachedPrioritizedDisplayCultureNames).ArrayNum = local_180.ArrayNum;
    (this->CachedPrioritizedDisplayCultureNames).ArrayMax = local_180.ArrayMax;
    local_180.ArrayMax = 0;
    local_180.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_180.ArrayNum = 0;
  }
  DestructItems<FString,int>((FString *)local_180.AllocatorInstance.Data,local_180.ArrayNum);
  if (local_180.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.AllocatorInstance.Data);
  }
  lpCriticalSection = &this->CachedCulturesCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  puVar3 = &(this->CachedCultures).field_0x10;
  uStack_15c = 1;
  iVar4 = *(int *)&(this->CachedCultures).field_0x28;
  local_168 = &this->CachedCultures;
  iStack_14c = 0;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->CachedCultures).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar3;
    }
    uVar15 = *puVar20;
    iVar16 = 0;
    iVar18 = 0;
    while (uVar15 == 0) {
      lVar13 = (longlong)iVar16;
      iVar18 = iVar18 + 0x20;
      iVar16 = iVar16 + 1;
      iStack_14c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_1416fce0e;
      uVar15 = puVar20[lVar13 + 1];
    }
    uStack_15c = -uVar15 & uVar15;
    uVar1 = (ulonglong)uStack_15c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_138 = (int)lVar13;
    iStack_14c = iVar18 + -1 + local_138;
    if (iVar4 < iStack_14c) {
      iStack_14c = iVar4;
    }
  }
LAB_1416fce0e:
  iStack_140 = *(int *)&(this->CachedCultures).field_0x8 -
               *(int *)&(this->CachedCultures).field_0x34;
  uVar15 = *(uint *)&(this->CachedCultures).field_0x28;
  TStack_118._padding_ = CONCAT44(uStack_15c,iVar16);
  uStack_150 = 0xffffffff;
  uVar21 = uVar15 & 0xffffffe0;
  TStack_118.CurrentBitIndex = iStack_14c;
  TStack_118.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar15 >> 5;
  TStack_118._28_4_ = iStack_14c;
  TStack_118.BaseBitIndex = iVar18;
  uStack_f8 = CONCAT44(uStack_13c,iStack_140);
  iStack_160 = iVar16;
  local_158 = puVar3;
  local_148 = iVar18;
  iStack_144 = iStack_14c;
  local_130 = local_168;
  local_120 = local_168;
  TStack_118.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar15 < 0) || (iVar4 < (int)uVar15)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar9 = local_130;
  uVar5 = *(uint *)&(this->CachedCultures).field_0x28;
  if (uVar15 != uVar5) {
    puVar19 = *(undefined1 **)&(this->CachedCultures).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar3;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar17 * 4);
    while (uVar15 == 0) {
      lVar13 = (longlong)iVar17;
      uVar21 = uVar21 + 0x20;
      iVar17 = iVar17 + 1;
      uVar15 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_1416fcf30;
      uVar15 = *(uint *)(puVar19 + lVar13 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar15 = (int)lVar13 + -1 + uVar21;
    if ((int)uVar5 < (int)uVar15) {
      uVar15 = uVar5;
    }
  }
LAB_1416fcf30:
  while( true ) {
    pTVar10 = local_120;
    if (*(int *)&local_120->field_0x8 - *(int *)&local_120->field_0x34 != (int)uStack_f8) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FCulture,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_188);
    }
    if (((TStack_118.CurrentBitIndex == uVar15) &&
        (TStack_118.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pTVar10 == pTVar9)
       ) break;
    FCulture::RefreshCultureDisplayNames
              (*(FCulture **)
                (*(longlong *)pTVar10 + 0x10 + (longlong)TStack_118.CurrentBitIndex * 0x28),pTVar2,
               false);
    TStack_118.UnvisitedBitMask = TStack_118.UnvisitedBitMask & ~TStack_118._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_118);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((local_128->SharedReferenceCount).ReferenceController);
  return;
}

// Initialize @ 1416fe990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FICUInternationalization::Initialize(FICUInternationalization *this)

{
  FScriptContainerElement *pFVar1;
  FInternationalization *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FCulture *pFVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar12;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar13;
  GregorianCalendar *pGVar14;
  TSharedPtr<FCulture,1> *pTVar15;
  FString *pFVar16;
  TSharedRef<FCulture,1> *pTVar17;
  TimeZone *pTVar18;
  wchar16 *_Dst;
  GregorianCalendar *pGVar19;
  GregorianCalendar *pGVar20;
  undefined8 *puVar21;
  wchar_t *pwVar22;
  undefined1 *puVar23;
  int iVar24;
  longlong lVar25;
  TSharedPtr<FCulture,1> *pTVar26;
  longlong lVar27;
  TUniquePtr<icu_64::GregorianCalendar,TDefaultDelete<icu_64::GregorianCalendar>_> *pTVar28;
  undefined1 auStackY_338 [32];
  int local_2f8 [2];
  FInternationalization *local_2f0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_2e8;
  UErrorCode local_2d8 [2];
  ICustomCulture *local_2d0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_2c8;
  FString local_2b8;
  FString local_2a8;
  TSharedPtr<FCulture,1> local_298;
  TSharedPtr<FCulture,1> local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_248;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_238;
  undefined1 local_228 [16];
  TSharedRef<ICustomCulture,1> local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  TSharedPtr<FCulture,1> local_198;
  TSharedPtr<FCulture,1> local_188;
  FString local_178;
  FCulture *local_168;
  TReferenceControllerBase<1> *pTStack_160;
  FCulture *local_158;
  TReferenceControllerBase<1> *pTStack_150;
  FCulture *local_148;
  TReferenceControllerBase<1> *pTStack_140;
  longlong local_138;
  TSharedRef<FCulture,1> local_130;
  UnicodeString local_118;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_d8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_338;
  pGVar20 = (GregorianCalendar *)0x0;
  iVar24 = 0;
  local_2d8[0] = U_ZERO_ERROR;
  local_2f8[0] = 0;
  u_setMemoryFunctions_64
            (0,_anon_134951D2::FICUOverrides::Malloc,_anon_134951D2::FICUOverrides::Realloc);
  ::FString::FString(&local_268,L"Internationalization");
  pTVar12 = &FPaths::ProjectContentDir(&local_1b8)->Data;
  lVar27 = 2;
  iVar11 = local_268.Data.ArrayNum + -1;
  if (local_268.Data.ArrayNum == 0) {
    iVar11 = 0;
  }
  if ((pTVar12->ArrayNum != 0) || (iVar9 = 2, iVar11 == -1)) {
    iVar9 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_248,pTVar12,iVar9 + iVar11);
  ::FString::PathAppend
            ((FString *)&local_248,(wchar_t *)local_268.Data.AllocatorInstance.Data,iVar11);
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  pTVar12 = &FPaths::EngineContentDir(&local_1a8)->Data;
  iVar11 = local_268.Data.ArrayNum + -1;
  if (local_268.Data.ArrayNum == 0) {
    iVar11 = 0;
  }
  if ((pTVar12->ArrayNum != 0) || (iVar9 = 2, iVar11 == -1)) {
    iVar9 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_238,pTVar12,iVar9 + iVar11);
  ::FString::PathAppend
            ((FString *)&local_238,(wchar_t *)local_268.Data.AllocatorInstance.Data,iVar11);
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  pFVar16 = &this->ICUDataDirectory;
  ::FString::Reset(pFVar16,0);
  pTVar12 = &local_248;
  do {
    bVar7 = FPaths::DirectoryExists((FString *)pTVar12);
    if (bVar7) {
      if (pTVar12->ArrayNum == 0) {
        pwVar22 = L"";
      }
      else {
        pwVar22 = (wchar_t *)
                  (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar12->AllocatorInstance)->
                  AllocatorInstance).Data;
      }
      pTVar13 = StringCast<char,128,wchar_t>(&local_d8,pwVar22);
      u_setDataDirectory_64(pTVar13->Ptr);
      if ((void *)local_d8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_d8._padding_);
      }
      local_2e8.ArrayNum = pTVar12->ArrayNum;
      lVar25 = (longlong)local_2e8.ArrayNum;
      local_2e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_2e8.ArrayNum == 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,10,0,&local_2e8.AllocatorInstance,0,&local_2e8.ArrayMax);
      }
      else {
        pFVar1 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar12->AllocatorInstance)->
                 AllocatorInstance).Data;
        uVar10 = local_2e8.ArrayNum + 9;
        if ((int)uVar10 < local_2e8.ArrayNum) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
        }
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar10,0,&local_2e8.AllocatorInstance,local_2e8.ArrayNum,&local_2e8.ArrayMax)
        ;
        memcpy(local_2e8.AllocatorInstance.Data,pFVar1,lVar25 * 2);
      }
      ::FString::PathAppend((FString *)&local_2e8,L"icudt64l",8);
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::
      TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                (&local_2c8,&local_2e8,2 - (uint)(local_2e8.ArrayNum != 0));
      ::FString::PathAppend((FString *)&local_2c8,L"",0);
      if (&pFVar16->Data != &local_2c8) {
        pFVar1 = (pFVar16->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (pFVar16->Data).AllocatorInstance.Data = local_2c8.AllocatorInstance.Data;
        (this->ICUDataDirectory).Data.ArrayNum = local_2c8.ArrayNum;
        (this->ICUDataDirectory).Data.ArrayMax = local_2c8.ArrayMax;
        local_2c8.ArrayNum = 0;
        local_2c8.ArrayMax = 0;
        local_2c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_2c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2c8.AllocatorInstance.Data);
      }
      if (local_2e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2e8.AllocatorInstance.Data);
      }
      break;
    }
    pTVar12 = pTVar12 + 1;
  } while (pTVar12 != (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)local_228);
  if ((this->ICUDataDirectory).Data.ArrayNum < 2) {
    local_2b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2b8.Data.ArrayNum = 0;
    pTVar12 = &local_248;
    local_2b8.Data.ArrayMax = 0;
    pGVar19 = pGVar20;
    while( true ) {
      if (1 < (int)pGVar19) {
        ::FString::AppendChars(&local_2b8,L"\n",1);
      }
      iVar11 = pTVar12->ArrayNum + -1;
      if (pTVar12->ArrayNum == 0) {
        iVar11 = iVar24;
      }
      ::FString::AppendChars(&local_2b8,(wchar_t *)(pTVar12->AllocatorInstance).Data,iVar11);
      pTVar12 = pTVar12 + 1;
      if (pTVar12 == (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)local_228) break;
      pGVar19 = (GregorianCalendar *)(ulonglong)(uint)local_2b8.Data.ArrayNum;
    }
    UE::Logging::Private::BasicFatalLog
              (&::LOG_Static,(FLogCategoryBase *)&LogICUInternationalization);
    if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
    }
  }
  udata_setFileAccess_64(0,local_2f8);
  u_setDataFileFunctions_64(this,OpenDataFile,CloseDataFile);
  u_init_64(local_2f8);
  if ((0 < local_2f8[0]) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("U_SUCCESS(ICUStatus)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICUInternationalization.cpp"
                         ,0xa2,
                         L"Failed to open ICUInternationalization data file, missing or corrupt?"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  if ((FICURegexManager::Singleton != (FICURegexManager *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Singleton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICURegex.cpp"
                         ,0x56,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  pGVar14 = ::operator_new(0xf0);
  pGVar19 = pGVar20;
  if (pGVar14 != (GregorianCalendar *)0x0) {
    memset(pGVar14,0,0xf0);
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)pGVar14,4000);
    *(undefined8 *)
     &((TSet<TSharedPtr<icu_64::RegexPattern_const_,1>,DefaultKeyFuncs<TSharedPtr<icu_64::RegexPattern_const_,1>,0>,FDefaultSetAllocator>
        *)&pGVar14->_padding_)->Elements = 0;
    pGVar14->_padding_ = 0;
    pGVar14->_padding_ = 0;
    *(undefined4 *)&pGVar14->_padding_ = 0;
    *(undefined4 *)((longlong)&pGVar14->_padding_ + 4) = 0x80;
    *(undefined4 *)&pGVar14->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pGVar14->_padding_ + 4) = 0;
    *(ForElementType<FSetElementId> *)&pGVar14->_padding_ = (ForElementType<FSetElementId>)0x0;
    *(int *)&pGVar14->_padding_ = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pGVar14->_padding_,4000);
    *(undefined8 *)
     &((TSet<TSharedPtr<icu_64::RegexMatcher,1>,DefaultKeyFuncs<TSharedPtr<icu_64::RegexMatcher,1>,0>,FDefaultSetAllocator>
        *)&pGVar14->_padding_)->Elements = 0;
    pGVar14->_padding_ = 0;
    pGVar14->_padding_ = 0;
    *(undefined4 *)&pGVar14->_padding_ = 0;
    *(undefined4 *)((longlong)&pGVar14->_padding_ + 4) = 0x80;
    *(undefined4 *)&pGVar14->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pGVar14->_padding_ + 4) = 0;
    *(ForElementType<FSetElementId> *)&pGVar14->_padding_ = (ForElementType<FSetElementId>)0x0;
    *(int *)&pGVar14->_padding_ = 0;
    pGVar19 = pGVar14;
  }
  FICURegexManager::Singleton = (FICURegexManager *)pGVar19;
  if ((FICUBreakIteratorManager::Singleton != (FICUBreakIteratorManager *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Singleton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICUBreakIterator.cpp"
                         ,0xf,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  pGVar14 = ::operator_new(0x78);
  pGVar19 = pGVar20;
  if (pGVar14 != (GregorianCalendar *)0x0) {
    (((FWindowsRecursiveMutex *)&pGVar14->_padding_)->CriticalSection).Opaque1[0] = (void *)0x0;
    pGVar14->_padding_ = 0;
    pGVar14->_padding_ = 0;
    pGVar14->_padding_ = 0;
    pGVar14->_padding_ = 0;
    *(undefined8 *)
     &((TSet<TSharedPtr<icu_64::RegexPattern_const_,1>,DefaultKeyFuncs<TSharedPtr<icu_64::RegexPattern_const_,1>,0>,FDefaultSetAllocator>
        *)&pGVar14->_padding_)->Elements = 0;
    pGVar14->_padding_ = 0;
    pGVar14->_padding_ = 0;
    pGVar14->_padding_ = 0;
    pGVar14->_padding_ = 0;
    pGVar14->_padding_ = 0;
    pGVar14->_padding_ = 0;
    *(uchar *)&pGVar14->_padding_ = '\0';
    *(uchar *)((longlong)&pGVar14->_padding_ + 1) = '\0';
    *(uchar *)((longlong)&pGVar14->_padding_ + 2) = '\0';
    *(uchar *)((longlong)&pGVar14->_padding_ + 3) = '\0';
    *(int *)((longlong)&pGVar14->_padding_ + 4) = 0;
    *(ForElementType<FSetElementId> *)&pGVar14->_padding_ = (ForElementType<FSetElementId>)0x0;
    pGVar14->_padding_ = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)pGVar14,4000);
    *(undefined8 *)
     &((TSet<TSharedPtr<icu_64::RegexPattern_const_,1>,DefaultKeyFuncs<TSharedPtr<icu_64::RegexPattern_const_,1>,0>,FDefaultSetAllocator>
        *)&pGVar14->_padding_)->Elements = 0;
    pGVar14->_padding_ = 0;
    pGVar14->_padding_ = 0;
    *(undefined4 *)&pGVar14->_padding_ = 0;
    *(undefined4 *)((longlong)&pGVar14->_padding_ + 4) = 0x80;
    *(undefined4 *)&pGVar14->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pGVar14->_padding_ + 4) = 0;
    *(ForElementType<FSetElementId> *)&pGVar14->_padding_ = (ForElementType<FSetElementId>)0x0;
    *(int *)&pGVar14->_padding_ = 0;
    pGVar19 = pGVar14;
  }
  FICUBreakIteratorManager::Singleton = (FICUBreakIteratorManager *)pGVar19;
  InitializeAvailableCultures(this);
  this->bHasInitializedCultureMappings = false;
  ConditionalInitializeCultureMappings(this);
  this->bHasInitializedAllowedCultures = false;
  ConditionalInitializeAllowedCultures(this);
  ::FString::FString(&local_208,L"en-US-POSIX");
  pTVar15 = FindOrMakeCanonizedCulture(this,&local_198,&local_208,No);
  pFVar2 = this->I18N;
  pTVar26 = &pFVar2->InvariantCulture;
  if (pTVar26 != pTVar15) {
    pTVar26->Object = pTVar15->Object;
    pTVar15->Object = (FCulture *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar2->InvariantCulture).SharedReferenceCount,&pTVar15->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_198.SharedReferenceCount.ReferenceController);
  if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.Data.AllocatorInstance.Data);
  }
  if ((this->I18N->InvariantCulture).Object == (FCulture *)0x0) {
    local_258.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.Data.ArrayNum = 0;
    local_258.Data.ArrayMax = 0;
    pTVar15 = FindOrMakeCanonizedCulture(this,&local_188,&local_258,Yes);
    pFVar2 = this->I18N;
    pTVar26 = &pFVar2->InvariantCulture;
    if (pTVar26 != pTVar15) {
      pTVar26->Object = pTVar15->Object;
      pTVar15->Object = (FCulture *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pFVar2->InvariantCulture).SharedReferenceCount,&pTVar15->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_188.SharedReferenceCount.ReferenceController);
    if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Data.AllocatorInstance.Data);
    }
  }
  pFVar16 = FWindowsPlatformMisc::GetDefaultLanguage(&local_178);
  pFVar2 = this->I18N;
  ::FString::FString(&local_1f8,L"en-US-POSIX");
  InternationalizationUtilities::GetCanonicalCultureName(&local_1e8,pFVar16,&local_1f8,pFVar2);
  if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
  FindOrMakeCanonizedCulture(this,&local_298,&local_1e8,Yes);
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  pFVar2 = this->I18N;
  pTVar15 = &pFVar2->DefaultLanguage;
  if (pTVar15 != &local_298) {
    pTVar15->Object = local_298.Object;
    local_298.Object = (FCulture *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar2->DefaultLanguage).SharedReferenceCount,&local_298.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_298.SharedReferenceCount.ReferenceController);
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  FWindowsPlatformMisc::GetDefaultLocale(&local_2a8);
  iVar11 = local_2a8.Data.ArrayNum + -1;
  FVar6.Data = local_2a8.Data.AllocatorInstance.Data;
  if (local_2a8.Data.ArrayNum == 0) {
    iVar11 = iVar24;
    FVar6.Data = (FScriptContainerElement *)L"";
  }
  uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)FVar6.Data);
  iVar11 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FString>
                     ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                       *)&this->AllAvailableCulturesMap,uVar10,&local_2a8);
  if (iVar11 == -1) {
    if (4 < (byte)LogICUInternationalization._0_1_) {
      TSharedPtr<FCulture,1>::operator->(&this->I18N->DefaultLanguage);
      UE::Logging::Private::BasicLog<5>
                (&::LOG_Static,(FLogCategoryBase *)&LogICUInternationalization);
    }
    pFVar2 = this->I18N;
    pTVar3 = (pFVar2->DefaultLanguage).SharedReferenceCount.ReferenceController;
    pFVar4 = (pFVar2->DefaultLanguage).Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_168 = (pFVar2->DefaultLocale).Object;
    local_288.SharedReferenceCount.ReferenceController =
         (pFVar2->DefaultLocale).SharedReferenceCount.ReferenceController;
    (pFVar2->DefaultLocale).Object = pFVar4;
    (pFVar2->DefaultLocale).SharedReferenceCount.ReferenceController = pTVar3;
    pTStack_160 = local_288.SharedReferenceCount.ReferenceController;
  }
  else {
    pFVar2 = this->I18N;
    ::FString::FString(&local_1d8,L"en-US-POSIX");
    InternationalizationUtilities::GetCanonicalCultureName(&local_1c8,&local_2a8,&local_1d8,pFVar2);
    if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
    FindOrMakeCanonizedCulture(this,&local_288,&local_1c8,Yes);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    pFVar2 = this->I18N;
    pTVar15 = &pFVar2->DefaultLocale;
    if (pTVar15 != &local_288) {
      pTVar15->Object = local_288.Object;
      local_288.Object = (FCulture *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pFVar2->DefaultLocale).SharedReferenceCount,&local_288.SharedReferenceCount);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_288.SharedReferenceCount.ReferenceController);
  if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
  }
  pFVar2 = this->I18N;
  pTVar3 = (pFVar2->DefaultLanguage).SharedReferenceCount.ReferenceController;
  pFVar4 = (pFVar2->DefaultLanguage).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_158 = (pFVar2->CurrentLanguage).Object;
  pTStack_150 = (pFVar2->CurrentLanguage).SharedReferenceCount.ReferenceController;
  (pFVar2->CurrentLanguage).Object = pFVar4;
  (pFVar2->CurrentLanguage).SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_150);
  pFVar2 = this->I18N;
  pTVar3 = (pFVar2->DefaultLocale).SharedReferenceCount.ReferenceController;
  pFVar4 = (pFVar2->DefaultLocale).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_148 = (pFVar2->CurrentLocale).Object;
  pTStack_140 = (pFVar2->CurrentLocale).SharedReferenceCount.ReferenceController;
  (pFVar2->CurrentLocale).Object = pFVar4;
  (pFVar2->CurrentLocale).SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_140);
  pTVar17 = TSharedPtr<FCulture,1>::ToSharedRef(&this->I18N->CurrentLanguage,&local_130);
  HandleLanguageChanged(this,pTVar17);
  pFVar2 = this->I18N;
  local_2f0 = pFVar2;
  if (((pFVar2->InvariantCulture).Object == (FCulture *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  pTVar3 = (pFVar2->InvariantCulture).SharedReferenceCount.ReferenceController;
  pFVar4 = (pFVar2->InvariantCulture).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar4 == (FCulture *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  local_228._8_8_ = ::operator_new(0x28);
  if ((GregorianCalendar *)local_228._8_8_ == (GregorianCalendar *)0x0) {
    local_228._0_8_ = ___xmm_00000000000000000000000000000010;
    local_228._8_8_ = _UNK_150651568;
    pGVar19 = pGVar20;
  }
  else {
    *(long *)&((GregorianCalendar *)local_228._8_8_)->_padding_ = 1;
    *(long *)((longlong)&((GregorianCalendar *)local_228._8_8_)->_padding_ + 4) = 1;
    (((FWindowsRecursiveMutex *)&((GregorianCalendar *)local_228._8_8_)->_padding_)->CriticalSection
    ).Opaque1[0] = &
                   ___7__TIntrusiveReferenceController_VFLeetCulture___00_SharedPointerInternals__6B_
    ;
    ((GregorianCalendar *)local_228._8_8_)->_padding_ = (longlong)&___7FLeetCulture__6B_;
    ((GregorianCalendar *)local_228._8_8_)->_padding_ = (longlong)pFVar4;
    ((GregorianCalendar *)local_228._8_8_)->_padding_ = (longlong)pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_2d0 = (ICustomCulture *)&((GregorianCalendar *)local_228._8_8_)->_padding_;
    if ((local_2d0 == (ICustomCulture *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    LOCK();
    *(int *)&((GregorianCalendar *)local_228._8_8_)->_padding_ =
         (int)((GregorianCalendar *)local_228._8_8_)->_padding_ + 1;
    UNLOCK();
    pGVar19 = (GregorianCalendar *)local_228._8_8_;
    local_228._0_8_ = local_2d0;
  }
  FInternationalization::AddCustomCulture(local_2f0,(TSharedRef<ICustomCulture,1> *)local_228);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pGVar19);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pGVar19);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pFVar2 = this->I18N;
  local_2f0 = pFVar2;
  if (((pFVar2->InvariantCulture).Object == (FCulture *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  pTVar3 = (pFVar2->InvariantCulture).SharedReferenceCount.ReferenceController;
  pFVar4 = (pFVar2->InvariantCulture).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar4 == (FCulture *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  local_218.SharedReferenceCount.ReferenceController = ::operator_new(0x28);
  if ((GregorianCalendar *)local_218.SharedReferenceCount.ReferenceController ==
      (GregorianCalendar *)0x0) {
    local_218.Object = ___xmm_00000000000000000000000000000010;
    local_218.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)_UNK_150651568;
    pGVar19 = pGVar20;
  }
  else {
    *(long *)&((GregorianCalendar *)local_218.SharedReferenceCount.ReferenceController)->_padding_ =
         1;
    *(long *)((longlong)
              &((GregorianCalendar *)local_218.SharedReferenceCount.ReferenceController)->_padding_
             + 4) = 1;
    (((FWindowsRecursiveMutex *)
     &((GregorianCalendar *)local_218.SharedReferenceCount.ReferenceController)->_padding_)->
    CriticalSection).Opaque1[0] =
         &___7__TIntrusiveReferenceController_VFKeysCulture___00_SharedPointerInternals__6B_;
    ((GregorianCalendar *)local_218.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)&___7FKeysCulture__6B_;
    ((GregorianCalendar *)local_218.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)pFVar4;
    ((GregorianCalendar *)local_218.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_2d0 = (ICustomCulture *)
                &((GregorianCalendar *)local_218.SharedReferenceCount.ReferenceController)->
                 _padding_;
    if ((local_2d0 == (ICustomCulture *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    LOCK();
    *(int *)&((GregorianCalendar *)local_218.SharedReferenceCount.ReferenceController)->_padding_ =
         (int)((GregorianCalendar *)local_218.SharedReferenceCount.ReferenceController)->_padding_ +
         1;
    UNLOCK();
    pGVar19 = (GregorianCalendar *)local_218.SharedReferenceCount.ReferenceController;
    local_218.Object = local_2d0;
  }
  FInternationalization::AddCustomCulture(local_2f0,&local_218);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pGVar19);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pGVar19);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FGenericPlatformMisc::GetTimeZoneId(&local_278);
  if (local_278.Data.ArrayNum < 2) {
    pTVar18 = icu_64::TimeZone::createDefault();
  }
  else {
    local_2f0 = (FInternationalization *)local_278.Data.AllocatorInstance.Data;
    local_118.fUnion.fStackFields.fLengthAndFlags = 2;
    iVar11 = local_278.Data.ArrayNum + -1;
    if (local_278.Data.ArrayNum == 0) {
      iVar11 = iVar24;
    }
    local_118._padding_ = (longlong)icu_64::UnicodeString::vftable;
    if (0 < iVar11) {
      _Dst = icu_64::UnicodeString::getBuffer(&local_118,iVar11 + 1);
      memcpy(_Dst,local_2f0,(longlong)iVar11 * 2);
      _Dst[iVar11] = L'\0';
      icu_64::UnicodeString::releaseBuffer(&local_118,iVar11);
    }
    pTVar18 = icu_64::TimeZone::createTimeZone(&local_118);
    icu_64::UnicodeString::~UnicodeString(&local_118);
  }
  icu_64::TimeZone::adoptDefault(pTVar18);
  (**(code **)(pTVar18->_padding_ + 0x38))(pTVar18);
  if (4 < (byte)LogICUInternationalization._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogICUInternationalization)
    ;
  }
  if ((FInternationalization *)local_278.Data.AllocatorInstance.Data != (FInternationalization *)0x0
     ) {
    FMemory::Free(local_278.Data.AllocatorInstance.Data);
  }
  local_2d8[0] = U_ZERO_ERROR;
  pGVar19 = icu_64::UMemory::operator_new(0x290);
  if (pGVar19 != (GregorianCalendar *)0x0) {
    pGVar20 = (GregorianCalendar *)icu_64::GregorianCalendar::GregorianCalendar(pGVar19,local_2d8);
  }
  pTVar28 = &this->InvariantGregorianCalendar;
  if (pTVar28 ==
      (TUniquePtr<icu_64::GregorianCalendar,TDefaultDelete<icu_64::GregorianCalendar>_> *)&local_138
     ) {
    if (pGVar20 == (GregorianCalendar *)0x0) goto LAB_1416ff615;
    puVar21 = (((FWindowsRecursiveMutex *)&pGVar20->_padding_)->CriticalSection).Opaque1[0];
  }
  else {
    pGVar19 = pTVar28->Ptr;
    pTVar28->Ptr = pGVar20;
    if (pGVar19 == (GregorianCalendar *)0x0) goto LAB_1416ff615;
    puVar21 = (((FWindowsRecursiveMutex *)&pGVar19->_padding_)->CriticalSection).Opaque1[0];
    pGVar20 = pGVar19;
  }
  (*(code *)*puVar21)(pGVar20,1);
LAB_1416ff615:
  pGVar20 = pTVar28->Ptr;
  if (pGVar20 != (GregorianCalendar *)0x0) {
    pTVar18 = icu_64::TimeZone::getUnknown();
    icu_64::Calendar::setTimeZone((Calendar *)pGVar20,pTVar18);
  }
  puVar23 = local_228;
  bVar7 = local_2f8[0] < 1;
  do {
    puVar21 = (undefined8 *)(puVar23 + -0x10);
    puVar23 = puVar23 + -0x10;
    lVar27 = lVar27 + -1;
    if ((void *)*puVar21 != (void *)0x0) {
      FMemory::Free((void *)*puVar21);
    }
  } while (lVar27 != 0);
  if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Data.AllocatorInstance.Data);
  }
  return bVar7;
}

// InitializeAvailableCultures @ 1416ff6f0

/* WARNING: Removing unreachable block (ram,0x0001416ffed9) */
/* WARNING: Removing unreachable block (ram,0x0001417001fc) */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
FICUInternationalization::InitializeAvailableCultures(FICUInternationalization *this)

{
  int *piVar1;
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *this_00;
  TMap<FString,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
  *this_01;
  ulonglong uVar2;
  char *pcVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  Locale *pLVar10;
  FString *pFVar11;
  char **ppcVar12;
  ForAnyElementType FVar13;
  wchar_t *pwVar14;
  ForAnyElementType FVar15;
  int iVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  uint local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  FString local_258;
  int local_248;
  int local_244;
  int local_240;
  int local_23c;
  int local_238 [2];
  FString local_230;
  FICUInternationalization *local_220;
  FString local_218;
  FString local_208;
  int local_1f8;
  int local_1f4;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  undefined4 local_160;
  undefined4 local_15c;
  undefined1 local_158 [8];
  undefined1 local_150 [8];
  TPairInitializer<FString_const_&,int_const_&> local_148;
  FString *local_138;
  FString *local_130;
  Locale *local_128;
  FString *local_120;
  TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
  *local_118;
  FString *local_110;
  TArray<FICUInternationalization::FICUCultureData,TSizedDefaultAllocator<32>_> *local_108;
  TSet<TTuple<FString,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_100;
  FString *local_f8;
  int *local_f0;
  FString *local_e8;
  int *local_e0;
  FString *local_d8;
  int *local_d0;
  FString *local_c8;
  int *local_c0;
  FString *local_b8;
  int *local_b0;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  local_res8[0] = 0;
  pLVar10 = icu_64::Locale::getAvailableLocales((int *)local_res8);
  local_108 = &this->AllAvailableCultures;
  local_128 = pLVar10;
  if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
  }
  piVar1 = &(this->AllAvailableCultures).ArrayMax;
  if (*piVar1 < (int)local_res8[0]) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,local_res8[0],&local_108->AllocatorInstance,
               (this->AllAvailableCultures).ArrayNum,piVar1);
  }
  uVar8 = local_res8[0];
  this_00 = &this->AllAvailableCulturesMap;
  local_118 = (TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
               *)this_00;
  if ((uint)(*(int *)&(this->AllAvailableCulturesMap).field_0x8 -
            *(int *)&(this->AllAvailableCulturesMap).field_0x34) < local_res8[0]) {
    if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)local_res8[0]);
    }
    TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this_00,local_res8[0]);
    if (uVar8 < 4) {
      iVar7 = 1;
    }
    else {
      uVar2 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar18 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_160 = (undefined4)lVar18;
      iVar7 = 1 << ((byte)lVar18 & 0x1f);
    }
    iVar9 = *(int *)&(this->AllAvailableCulturesMap).field_0x48;
    if ((iVar9 == 0) || (iVar9 < iVar7)) {
      *(int *)&(this->AllAvailableCulturesMap).field_0x48 = iVar7;
      TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
      Rehash((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
              *)this_00);
    }
  }
  this_01 = &this->AllAvailableLanguagesToSubCulturesMap;
  uVar8 = (int)local_res8[0] / 2;
  local_100 = (TSet<TTuple<FString,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
               *)this_01;
  if ((uint)(*(int *)&(this->AllAvailableLanguagesToSubCulturesMap).field_0x8 -
            *(int *)&(this->AllAvailableLanguagesToSubCulturesMap).field_0x34) < uVar8) {
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar8);
    }
    TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this_01,uVar8);
    if (uVar8 < 4) {
      iVar7 = 1;
    }
    else {
      uVar2 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar18 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_15c = (undefined4)lVar18;
      iVar7 = 1 << ((byte)lVar18 & 0x1f);
    }
    iVar9 = *(int *)&(this->AllAvailableLanguagesToSubCulturesMap).field_0x48;
    if ((iVar9 == 0) || (iVar9 < iVar7)) {
      *(int *)&(this->AllAvailableLanguagesToSubCulturesMap).field_0x48 = iVar7;
      TSet<TTuple<FString,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FString,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)this_01);
    }
  }
  iVar7 = 0;
  local_220 = this;
  if (0 < (int)local_res8[0]) {
    do {
      FVar15.Data = (FScriptContainerElement *)0x0;
      ::FString::FString(&local_258,pLVar10[iVar7].language);
      ::FString::FString(&local_218,pLVar10[iVar7].script);
      ::FString::FString(&local_208,pLVar10[iVar7].country);
      iVar9 = local_258.Data.ArrayNum;
      local_1b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b0.Data.ArrayNum = 0;
      local_1b0.Data.ArrayMax = 0;
      FVar13.Data = (FScriptContainerElement *)L"";
      if (iVar9 != 0) {
        FVar13.Data = local_258.Data.AllocatorInstance.Data;
      }
      local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar17 = (FScriptContainerElement *)(ulonglong)(iVar9 - 1);
      if (iVar9 == 0) {
        pFVar17 = FVar15.Data;
      }
      local_1a0.Data.ArrayNum = 0;
      local_1a0.Data.ArrayMax = 0;
      uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>((int)pFVar17,(wchar_t *)FVar13.Data);
      iVar9 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>
                        ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                          *)&this->AllAvailableCulturesMap,uVar8,&local_258);
      FVar13.Data = FVar15.Data;
      if (iVar9 == -1) {
        local_248 = (this->AllAvailableCultures).ArrayNum;
        local_f8 = &local_258;
        local_f0 = &local_248;
        TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<FString_const_&,int_const_&>_>
                  ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                    *)&this->AllAvailableCulturesMap,
                   (TPairInitializer<FString_const_&,int_const_&> *)local_158,(bool *)&local_f8);
        iVar9 = local_258.Data.ArrayNum + -1;
        FVar13.Data = local_258.Data.AllocatorInstance.Data;
        if (local_258.Data.ArrayNum == 0) {
          iVar9 = 0;
          FVar13.Data = (FScriptContainerElement *)L"";
        }
        uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,(wchar_t *)FVar13.Data);
        iVar9 = TSet<TTuple<FString,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FString>
                          ((TSet<TTuple<FString,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                            *)&this->AllAvailableLanguagesToSubCulturesMap,uVar8,&local_258);
        if ((iVar9 == -1) ||
           (lVar18 = *(longlong *)&this->AllAvailableLanguagesToSubCulturesMap +
                     (longlong)iVar9 * 0x28, lVar18 == 0)) {
          local_148.Value = (int *)&local_258;
          TSet<TTuple<FString,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                    ((TSet<TTuple<FString,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&this->AllAvailableLanguagesToSubCulturesMap,(uint)local_res10,
                     (TKeyInitializer<FString_const_&> *)(ulonglong)uVar8,(bool *)&local_148.Value);
          lVar18 = *(longlong *)&this->AllAvailableLanguagesToSubCulturesMap +
                   (longlong)local_res10[0] * 0x28;
        }
        if (((*(int **)(lVar18 + 0x10) <= &local_248) &&
            (&local_248 < *(int **)(lVar18 + 0x10) + *(int *)(lVar18 + 0x1c))) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar9 = *(int *)(lVar18 + 0x18);
        if (iVar9 == *(int *)(lVar18 + 0x1c)) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,(ForAnyElementType *)(lVar18 + 0x10),(int *)(lVar18 + 0x1c));
        }
        *(int *)(lVar18 + 0x18) = iVar9 + 1;
        piVar1 = &(this->AllAvailableCultures).ArrayMax;
        *(int *)(*(longlong *)(lVar18 + 0x10) + (longlong)iVar9 * 4) = local_248;
        iVar9 = (this->AllAvailableCultures).ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x840,&(this->AllAvailableCultures).AllocatorInstance,piVar1);
        }
        pFVar17 = (this->AllAvailableCultures).AllocatorInstance.Data;
        (this->AllAvailableCultures).ArrayNum = iVar9 + 1;
        pFVar17 = pFVar17 + (longlong)iVar9 * 0x40;
        DefaultConstructItems<FICUInternationalization::FICUCultureData,int>(pFVar17,1);
        FVar13.Data = local_258.Data.AllocatorInstance.Data;
        if (pFVar17 != (FScriptContainerElement *)&local_258) {
          pFVar19 = pFVar17 + 0xc;
          iVar9 = *(int *)pFVar19;
          iVar16 = local_258.Data.ArrayNum;
          *(int *)&pFVar17[8].field_0x0 = iVar16;
          if ((iVar16 == 0) && (iVar9 == 0)) {
            *(int *)pFVar19 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar16,iVar9,(ForAnyElementType *)pFVar17,iVar16,(int *)pFVar19);
            if (iVar16 != 0) {
              memcpy(*(void **)&pFVar17->field_0x0,FVar13.Data,(longlong)iVar16 * 2);
            }
          }
        }
        FVar13.Data = local_258.Data.AllocatorInstance.Data;
        pFVar19 = pFVar17 + 0x10;
        if (pFVar19 != (FScriptContainerElement *)&local_258) {
          pFVar5 = pFVar17 + 0x1c;
          iVar9 = *(int *)pFVar5;
          iVar16 = local_258.Data.ArrayNum;
          *(int *)&pFVar17[0x18].field_0x0 = iVar16;
          if ((iVar16 == 0) && (iVar9 == 0)) {
            *(int *)pFVar5 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar16,iVar9,(ForAnyElementType *)pFVar19,iVar16,(int *)pFVar5);
            if (iVar16 != 0) {
              memcpy(*(FScriptContainerElement **)&pFVar19->field_0x0,FVar13.Data,
                     (longlong)iVar16 * 2);
            }
          }
        }
        ::FString::operator=((FString *)(pFVar17 + 0x20),&local_1a0);
        ::FString::operator=((FString *)(pFVar17 + 0x30),&local_1b0);
        FVar15.Data = local_1b0.Data.AllocatorInstance.Data;
        FVar13.Data = local_1a0.Data.AllocatorInstance.Data;
      }
      if (FVar13.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar13.Data);
      }
      if (FVar15.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar15.Data);
      }
      if (1 < local_208.Data.ArrayNum) {
        local_190.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_190.Data.ArrayNum = 0;
        local_190.Data.ArrayMax = 0;
        local_1c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1c0.Data.ArrayNum = 0;
        local_1c0.Data.ArrayMax = 0;
        pFVar11 = FCulture::CreateCultureName(&local_78,&local_258,&local_1c0,&local_208);
        iVar16 = (pFVar11->Data).ArrayNum;
        iVar9 = iVar16 + -1;
        if (iVar16 == 0) {
          pwVar14 = L"";
          iVar9 = 0;
        }
        else {
          pwVar14 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
        }
        uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar14);
        iVar9 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FString>
                          ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                            *)&this->AllAvailableCulturesMap,uVar8,pFVar11);
        if (iVar9 == -1) {
          local_244 = (this->AllAvailableCultures).ArrayNum;
          local_e0 = &local_244;
          local_e8 = pFVar11;
          TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FString_const_&,int_const_&>_>
                    ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                      *)&this->AllAvailableCulturesMap,
                     (TPairInitializer<FString_const_&,int_const_&> *)(local_158 + 4),
                     (bool *)&local_e8);
          iVar9 = local_258.Data.ArrayNum + -1;
          FVar13.Data = local_258.Data.AllocatorInstance.Data;
          if (local_258.Data.ArrayNum == 0) {
            iVar9 = 0;
            FVar13.Data = (FScriptContainerElement *)L"";
          }
          uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,(wchar_t *)FVar13.Data);
          iVar9 = TSet<TTuple<FString,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  ::FindIndexByHash<FString>
                            ((TSet<TTuple<FString,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                              *)&this->AllAvailableLanguagesToSubCulturesMap,uVar8,&local_258);
          if ((iVar9 == -1) ||
             (lVar18 = *(longlong *)&this->AllAvailableLanguagesToSubCulturesMap +
                       (longlong)iVar9 * 0x28, lVar18 == 0)) {
            local_138 = &local_258;
            TSet<TTuple<FString,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                      ((TSet<TTuple<FString,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        *)&this->AllAvailableLanguagesToSubCulturesMap,(uint)local_res18,
                       (TKeyInitializer<FString_const_&> *)(ulonglong)uVar8,(bool *)&local_138);
            lVar18 = *(longlong *)&this->AllAvailableLanguagesToSubCulturesMap +
                     (longlong)local_res18[0] * 0x28;
          }
          if (((*(int **)(lVar18 + 0x10) <= &local_244) &&
              (&local_244 < *(int **)(lVar18 + 0x10) + *(int *)(lVar18 + 0x1c))) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar9 = *(int *)(lVar18 + 0x18);
          if (iVar9 == *(int *)(lVar18 + 0x1c)) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,(ForAnyElementType *)(lVar18 + 0x10),(int *)(lVar18 + 0x1c));
          }
          *(int *)(lVar18 + 0x18) = iVar9 + 1;
          piVar1 = &(this->AllAvailableCultures).ArrayMax;
          *(int *)(*(longlong *)(lVar18 + 0x10) + (longlong)iVar9 * 4) = local_244;
          iVar9 = (this->AllAvailableCultures).ArrayNum;
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x840,&(this->AllAvailableCultures).AllocatorInstance,piVar1);
          }
          (this->AllAvailableCultures).ArrayNum = iVar9 + 1;
          pFVar19 = (this->AllAvailableCultures).AllocatorInstance.Data + (longlong)iVar9 * 0x40;
          DefaultConstructItems<FICUInternationalization::FICUCultureData,int>(pFVar19,1);
          ::FString::operator=((FString *)pFVar19,pFVar11);
          FVar13.Data = local_258.Data.AllocatorInstance.Data;
          pFVar17 = pFVar19 + 0x10;
          if (pFVar17 != (FScriptContainerElement *)&local_258) {
            pFVar5 = pFVar19 + 0x1c;
            iVar9 = local_258.Data.ArrayNum;
            *(int *)(pFVar19 + 0x18) = iVar9;
            if ((iVar9 == 0) && (*(int *)pFVar5 == 0)) {
              *(int *)pFVar5 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar9,*(int *)pFVar5,(ForAnyElementType *)pFVar17,iVar9,(int *)pFVar5);
              if (iVar9 != 0) {
                memcpy(*(FScriptContainerElement **)&pFVar17->field_0x0,FVar13.Data,
                       (longlong)iVar9 * 2);
              }
            }
          }
          ::FString::operator=((FString *)(pFVar19 + 0x20),&local_190);
          iVar9 = local_208.Data.ArrayNum;
          FVar13.Data = local_208.Data.AllocatorInstance.Data;
          pFVar17 = pFVar19 + 0x30;
          if (pFVar17 != (FScriptContainerElement *)&local_208) {
            pFVar5 = pFVar19 + 0x3c;
            *(int *)(pFVar19 + 0x38) = local_208.Data.ArrayNum;
            if ((local_208.Data.ArrayNum == 0) && (*(int *)pFVar5 == 0)) {
              *(int *)pFVar5 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_208.Data.ArrayNum,*(int *)pFVar5,(ForAnyElementType *)pFVar17,
                         local_208.Data.ArrayNum,(int *)pFVar5);
              if (iVar9 != 0) {
                memcpy(*(FScriptContainerElement **)&pFVar17->field_0x0,FVar13.Data,
                       (longlong)iVar9 * 2);
              }
            }
          }
        }
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_190.Data.AllocatorInstance.Data);
        }
      }
      if (1 < local_218.Data.ArrayNum) {
        local_170.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_170.Data.ArrayNum = 0;
        local_170.Data.ArrayMax = 0;
        local_180.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_180.Data.ArrayNum = 0;
        local_180.Data.ArrayMax = 0;
        pFVar11 = FCulture::CreateCultureName(&local_68,&local_258,&local_218,&local_180);
        iVar9 = (pFVar11->Data).ArrayNum;
        if (iVar9 == 0) {
          pwVar14 = L"";
        }
        else {
          pwVar14 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
        }
        iVar16 = iVar9 + -1;
        if (iVar9 == 0) {
          iVar16 = 0;
        }
        uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar16,pwVar14);
        iVar9 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FString>
                          ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                            *)&this->AllAvailableCulturesMap,uVar8,pFVar11);
        FVar13.Data = (FScriptContainerElement *)0x0;
        if (iVar9 == -1) {
          local_240 = (this->AllAvailableCultures).ArrayNum;
          local_d0 = &local_240;
          local_d8 = pFVar11;
          TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FString_const_&,int_const_&>_>
                    ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                      *)&this->AllAvailableCulturesMap,
                     (TPairInitializer<FString_const_&,int_const_&> *)local_150,(bool *)&local_d8);
          iVar9 = local_258.Data.ArrayNum + -1;
          FVar13.Data = local_258.Data.AllocatorInstance.Data;
          if (local_258.Data.ArrayNum == 0) {
            iVar9 = 0;
            FVar13.Data = (FScriptContainerElement *)L"";
          }
          uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,(wchar_t *)FVar13.Data);
          iVar9 = TSet<TTuple<FString,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  ::FindIndexByHash<FString>
                            ((TSet<TTuple<FString,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                              *)&this->AllAvailableLanguagesToSubCulturesMap,uVar8,&local_258);
          if ((iVar9 == -1) ||
             (lVar18 = *(longlong *)&this->AllAvailableLanguagesToSubCulturesMap +
                       (longlong)iVar9 * 0x28, lVar18 == 0)) {
            local_130 = &local_258;
            TSet<TTuple<FString,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                      ((TSet<TTuple<FString,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        *)&this->AllAvailableLanguagesToSubCulturesMap,(uint)local_res20,
                       (TKeyInitializer<FString_const_&> *)(ulonglong)uVar8,(bool *)&local_130);
            lVar18 = *(longlong *)&this->AllAvailableLanguagesToSubCulturesMap +
                     (longlong)local_res20[0] * 0x28;
          }
          if (((*(int **)(lVar18 + 0x10) <= &local_240) &&
              (&local_240 < *(int **)(lVar18 + 0x10) + *(int *)(lVar18 + 0x1c))) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar9 = *(int *)(lVar18 + 0x18);
          if (iVar9 == *(int *)(lVar18 + 0x1c)) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,(ForAnyElementType *)(lVar18 + 0x10),(int *)(lVar18 + 0x1c));
          }
          *(int *)(lVar18 + 0x18) = iVar9 + 1;
          piVar1 = &(this->AllAvailableCultures).ArrayMax;
          *(int *)(*(longlong *)(lVar18 + 0x10) + (longlong)iVar9 * 4) = local_240;
          iVar9 = (this->AllAvailableCultures).ArrayNum;
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x840,&(this->AllAvailableCultures).AllocatorInstance,piVar1);
          }
          (this->AllAvailableCultures).ArrayNum = iVar9 + 1;
          pFVar19 = (this->AllAvailableCultures).AllocatorInstance.Data + (longlong)iVar9 * 0x40;
          DefaultConstructItems<FICUInternationalization::FICUCultureData,int>(pFVar19,1);
          ::FString::operator=((FString *)pFVar19,pFVar11);
          FVar13.Data = local_258.Data.AllocatorInstance.Data;
          pFVar17 = pFVar19 + 0x10;
          if (pFVar17 != (FScriptContainerElement *)&local_258) {
            pFVar5 = pFVar19 + 0x1c;
            iVar9 = local_258.Data.ArrayNum;
            *(int *)(pFVar19 + 0x18) = iVar9;
            if ((iVar9 == 0) && (*(int *)pFVar5 == 0)) {
              *(int *)pFVar5 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar9,*(int *)pFVar5,(ForAnyElementType *)pFVar17,iVar9,(int *)pFVar5);
              if (iVar9 != 0) {
                memcpy(*(FScriptContainerElement **)&pFVar17->field_0x0,FVar13.Data,
                       (longlong)iVar9 * 2);
              }
            }
          }
          iVar9 = local_218.Data.ArrayNum;
          FVar13.Data = local_218.Data.AllocatorInstance.Data;
          pFVar17 = pFVar19 + 0x20;
          if (pFVar17 != (FScriptContainerElement *)&local_218) {
            pFVar5 = pFVar19 + 0x2c;
            *(int *)(pFVar19 + 0x28) = local_218.Data.ArrayNum;
            if ((local_218.Data.ArrayNum == 0) && (*(int *)pFVar5 == 0)) {
              *(int *)pFVar5 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_218.Data.ArrayNum,*(int *)pFVar5,(ForAnyElementType *)pFVar17,
                         local_218.Data.ArrayNum,(int *)pFVar5);
              if (iVar9 != 0) {
                memcpy(*(FScriptContainerElement **)&pFVar17->field_0x0,FVar13.Data,
                       (longlong)iVar9 * 2);
              }
            }
          }
          ::FString::operator=((FString *)(pFVar19 + 0x30),&local_170);
          FVar13.Data = local_170.Data.AllocatorInstance.Data;
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (FVar13.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar13.Data);
        }
        if ((1 < local_218.Data.ArrayNum) && (1 < local_208.Data.ArrayNum)) {
          pFVar11 = FCulture::CreateCultureName(&local_58,&local_258,&local_218,&local_208);
          iVar16 = (pFVar11->Data).ArrayNum;
          iVar9 = iVar16 + -1;
          if (iVar16 == 0) {
            pwVar14 = L"";
            iVar9 = 0;
          }
          else {
            pwVar14 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
          }
          uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar14);
          iVar9 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                  ::FindIndexByHash<FString>
                            ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                              *)&this->AllAvailableCulturesMap,uVar8,pFVar11);
          if (iVar9 == -1) {
            local_23c = (this->AllAvailableCultures).ArrayNum;
            local_c0 = &local_23c;
            local_c8 = pFVar11;
            TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FString_const_&,int_const_&>_>
                      ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                        *)&this->AllAvailableCulturesMap,
                       (TPairInitializer<FString_const_&,int_const_&> *)(local_150 + 4),
                       (bool *)&local_c8);
            iVar9 = local_258.Data.ArrayNum + -1;
            FVar13.Data = local_258.Data.AllocatorInstance.Data;
            if (local_258.Data.ArrayNum == 0) {
              iVar9 = 0;
              FVar13.Data = (FScriptContainerElement *)L"";
            }
            uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,(wchar_t *)FVar13.Data);
            iVar9 = TSet<TTuple<FString,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    ::FindIndexByHash<FString>
                              ((TSet<TTuple<FString,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                                *)&this->AllAvailableLanguagesToSubCulturesMap,uVar8,&local_258);
            if ((iVar9 == -1) ||
               (lVar18 = *(longlong *)&this->AllAvailableLanguagesToSubCulturesMap +
                         (longlong)iVar9 * 0x28, lVar18 == 0)) {
              local_110 = &local_258;
              TSet<TTuple<FString,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                        ((TSet<TTuple<FString,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                          *)&this->AllAvailableLanguagesToSubCulturesMap,(uint)&local_1f8,
                         (TKeyInitializer<FString_const_&> *)(ulonglong)uVar8,(bool *)&local_110);
              lVar18 = *(longlong *)&this->AllAvailableLanguagesToSubCulturesMap +
                       (longlong)local_1f8 * 0x28;
            }
            if (((*(int **)(lVar18 + 0x10) <= &local_23c) &&
                (&local_23c < *(int **)(lVar18 + 0x10) + *(int *)(lVar18 + 0x1c))) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar9 = *(int *)(lVar18 + 0x18);
            if (iVar9 == *(int *)(lVar18 + 0x1c)) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,(ForAnyElementType *)(lVar18 + 0x10),(int *)(lVar18 + 0x1c));
            }
            *(int *)(lVar18 + 0x18) = iVar9 + 1;
            piVar1 = &(this->AllAvailableCultures).ArrayMax;
            *(int *)(*(longlong *)(lVar18 + 0x10) + (longlong)iVar9 * 4) = local_23c;
            iVar9 = (this->AllAvailableCultures).ArrayNum;
            if (iVar9 == *piVar1) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x840,&(this->AllAvailableCultures).AllocatorInstance,piVar1);
            }
            pFVar17 = (this->AllAvailableCultures).AllocatorInstance.Data;
            (this->AllAvailableCultures).ArrayNum = iVar9 + 1;
            pFVar17 = pFVar17 + (longlong)iVar9 * 0x40;
            DefaultConstructItems<FICUInternationalization::FICUCultureData,int>(pFVar17,1);
            ::FString::operator=((FString *)pFVar17,pFVar11);
            ::FString::operator=((FString *)(pFVar17 + 0x10),&local_258);
            ::FString::operator=((FString *)(pFVar17 + 0x20),&local_218);
            ::FString::operator=((FString *)(pFVar17 + 0x30),&local_208);
          }
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
        }
      }
      if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_208.Data.AllocatorInstance.Data);
      }
      if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.Data.AllocatorInstance.Data);
      }
      if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_258.Data.AllocatorInstance.Data);
      }
      iVar7 = iVar7 + 1;
      pLVar10 = local_128;
    } while (iVar7 < (int)local_res8[0]);
  }
  ppcVar12 = icu_64::Locale::getISOLanguages();
  pcVar3 = *ppcVar12;
  do {
    if (pcVar3 == (char *)0x0) {
      ::FString::FString(&local_88,L"US-POSIX");
      local_1d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1d0.Data.ArrayNum = 0;
      local_1d0.Data.ArrayMax = 0;
      ::FString::FString(&local_98,L"en");
      ::FString::FString(&local_a8,L"en-US-POSIX");
      `FICUInternationalization::InitializeAvailableCultures'::__l2::<lambda_1>::operator()
                (&local_220,&local_a8,&local_98,&local_1d0,&local_88);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      iVar7 = local_108->ArrayNum;
      if (local_108->ArrayMax != iVar7) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,iVar7,&local_108->AllocatorInstance,iVar7,&local_108->ArrayMax);
      }
      TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
      Shrink(local_118);
      TSet<TTuple<FString,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::Shrink(local_100);
      return;
    }
    FVar13.Data = (FScriptContainerElement *)0x0;
    if (pcVar3[2] == '\0') {
      ::FString::FString(&local_230,pcVar3);
      ::FString::ToLowerInline(&local_230);
      iVar7 = local_230.Data.ArrayNum;
      local_1f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1f0.Data.ArrayNum = 0;
      local_1f0.Data.ArrayMax = 0;
      FVar15.Data = (FScriptContainerElement *)L"";
      if (iVar7 != 0) {
        FVar15.Data = local_230.Data.AllocatorInstance.Data;
      }
      local_1e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar17 = (FScriptContainerElement *)(ulonglong)(iVar7 - 1);
      if (iVar7 == 0) {
        pFVar17 = FVar13.Data;
      }
      local_1e0.Data.ArrayNum = 0;
      local_1e0.Data.ArrayMax = 0;
      uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>((int)pFVar17,(wchar_t *)FVar15.Data);
      iVar7 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>
                        ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                          *)&this->AllAvailableCulturesMap,uVar8,&local_230);
      FVar15.Data = FVar13.Data;
      if (iVar7 == -1) {
        local_238[0] = (this->AllAvailableCultures).ArrayNum;
        local_b8 = &local_230;
        local_b0 = local_238;
        TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<FString_const_&,int_const_&>_>
                  ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                    *)&this->AllAvailableCulturesMap,&local_148,(bool *)&local_b8);
        iVar7 = local_230.Data.ArrayNum + -1;
        FVar13.Data = local_230.Data.AllocatorInstance.Data;
        if (local_230.Data.ArrayNum == 0) {
          iVar7 = 0;
          FVar13.Data = (FScriptContainerElement *)L"";
        }
        uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,(wchar_t *)FVar13.Data);
        iVar7 = TSet<TTuple<FString,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FString>
                          ((TSet<TTuple<FString,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                            *)&this->AllAvailableLanguagesToSubCulturesMap,uVar8,&local_230);
        if ((iVar7 == -1) ||
           (lVar18 = *(longlong *)&this->AllAvailableLanguagesToSubCulturesMap +
                     (longlong)iVar7 * 0x28, lVar18 == 0)) {
          local_120 = &local_230;
          TSet<TTuple<FString,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                    ((TSet<TTuple<FString,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&this->AllAvailableLanguagesToSubCulturesMap,(uint)&local_1f4,
                     (TKeyInitializer<FString_const_&> *)(ulonglong)uVar8,(bool *)&local_120);
          lVar18 = *(longlong *)&this->AllAvailableLanguagesToSubCulturesMap +
                   (longlong)local_1f4 * 0x28;
        }
        if (((*(int **)(lVar18 + 0x10) <= local_238) &&
            (local_238 < *(int **)(lVar18 + 0x10) + *(int *)(lVar18 + 0x1c))) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar7 = *(int *)(lVar18 + 0x18);
        if (iVar7 == *(int *)(lVar18 + 0x1c)) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,(ForAnyElementType *)(lVar18 + 0x10),(int *)(lVar18 + 0x1c));
        }
        *(int *)(lVar18 + 0x18) = iVar7 + 1;
        piVar1 = &(this->AllAvailableCultures).ArrayMax;
        *(int *)(*(longlong *)(lVar18 + 0x10) + (longlong)iVar7 * 4) = local_238[0];
        iVar7 = (this->AllAvailableCultures).ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x840,&(this->AllAvailableCultures).AllocatorInstance,piVar1);
        }
        pFVar17 = (this->AllAvailableCultures).AllocatorInstance.Data;
        (this->AllAvailableCultures).ArrayNum = iVar7 + 1;
        pFVar17 = pFVar17 + (longlong)iVar7 * 0x40;
        DefaultConstructItems<FICUInternationalization::FICUCultureData,int>(pFVar17,1);
        FVar13.Data = local_230.Data.AllocatorInstance.Data;
        if (pFVar17 != (FScriptContainerElement *)&local_230) {
          pFVar19 = pFVar17 + 0xc;
          iVar7 = *(int *)pFVar19;
          iVar9 = local_230.Data.ArrayNum;
          *(int *)&pFVar17[8].field_0x0 = iVar9;
          if ((iVar9 == 0) && (iVar7 == 0)) {
            *(int *)pFVar19 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar9,iVar7,(ForAnyElementType *)pFVar17,iVar9,(int *)pFVar19);
            if (iVar9 != 0) {
              memcpy(*(void **)&pFVar17->field_0x0,FVar13.Data,(longlong)iVar9 * 2);
            }
          }
        }
        FVar13.Data = local_230.Data.AllocatorInstance.Data;
        pFVar19 = pFVar17 + 0x10;
        if (pFVar19 != (FScriptContainerElement *)&local_230) {
          pFVar5 = pFVar17 + 0x1c;
          iVar7 = *(int *)pFVar5;
          iVar9 = local_230.Data.ArrayNum;
          *(int *)&pFVar17[0x18].field_0x0 = iVar9;
          if ((iVar9 == 0) && (iVar7 == 0)) {
            *(int *)pFVar5 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar9,iVar7,(ForAnyElementType *)pFVar19,iVar9,(int *)pFVar5);
            if (iVar9 != 0) {
              memcpy(*(FScriptContainerElement **)&pFVar19->field_0x0,FVar13.Data,
                     (longlong)iVar9 * 2);
            }
          }
        }
        ::FString::operator=((FString *)(pFVar17 + 0x20),&local_1e0);
        ::FString::operator=((FString *)(pFVar17 + 0x30),&local_1f0);
        FVar13.Data = local_1f0.Data.AllocatorInstance.Data;
        FVar15.Data = local_1e0.Data.AllocatorInstance.Data;
      }
      if (FVar15.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar15.Data);
      }
      if (FVar13.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar13.Data);
      }
      if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_230.Data.AllocatorInstance.Data);
      }
    }
    pcVar3 = ppcVar12[1];
    ppcVar12 = ppcVar12 + 1;
  } while( true );
}

// InitializeInvariantGregorianCalendar @ 141700940

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
FICUInternationalization::InitializeInvariantGregorianCalendar(FICUInternationalization *this)

{
  GregorianCalendar *pGVar1;
  GregorianCalendar *pGVar2;
  undefined8 *puVar3;
  TimeZone *pTVar4;
  TUniquePtr<icu_64::GregorianCalendar,TDefaultDelete<icu_64::GregorianCalendar>_> *pTVar5;
  UErrorCode local_res8 [2];
  longlong local_18 [2];
  
  pGVar2 = (GregorianCalendar *)0x0;
  local_res8[0] = U_ZERO_ERROR;
  pGVar1 = icu_64::UMemory::operator_new(0x290);
  if (pGVar1 != (GregorianCalendar *)0x0) {
    pGVar2 = (GregorianCalendar *)icu_64::GregorianCalendar::GregorianCalendar(pGVar1,local_res8);
  }
  pTVar5 = &this->InvariantGregorianCalendar;
  if (pTVar5 == (TUniquePtr<icu_64::GregorianCalendar,TDefaultDelete<icu_64::GregorianCalendar>_> *)
                local_18) {
    if (pGVar2 == (GregorianCalendar *)0x0) goto LAB_1417009a5;
    puVar3 = (undefined8 *)pGVar2->_padding_;
  }
  else {
    pGVar1 = pTVar5->Ptr;
    pTVar5->Ptr = pGVar2;
    if (pGVar1 == (GregorianCalendar *)0x0) goto LAB_1417009a5;
    puVar3 = (undefined8 *)pGVar1->_padding_;
    pGVar2 = pGVar1;
  }
  (*(code *)*puVar3)(pGVar2,1);
LAB_1417009a5:
  pGVar2 = pTVar5->Ptr;
  if (pGVar2 != (GregorianCalendar *)0x0) {
    pTVar4 = icu_64::TimeZone::getUnknown();
    icu_64::Calendar::setTimeZone((Calendar *)pGVar2,pTVar4);
  }
  return;
}

// InitializeTimeZone @ 141700cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FICUInternationalization::InitializeTimeZone(FICUInternationalization *this)

{
  ForAnyElementType _Src;
  TimeZone *pTVar1;
  wchar16 *_Dst;
  int iVar2;
  undefined1 auStack_a8 [32];
  FScriptContainerElement *local_88;
  FString local_78;
  undefined4 local_68;
  UnicodeString local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_68 = 0;
  FGenericPlatformMisc::GetTimeZoneId(&local_78);
  _Src.Data = local_78.Data.AllocatorInstance.Data;
  if (local_78.Data.ArrayNum < 2) {
    pTVar1 = icu_64::TimeZone::createDefault();
  }
  else {
    iVar2 = local_78.Data.ArrayNum + -1;
    if (local_78.Data.ArrayNum == 0) {
      iVar2 = 0;
    }
    local_58._padding_ = (longlong)icu_64::UnicodeString::vftable;
    local_58.fUnion.fStackFields.fLengthAndFlags = 2;
    if (0 < iVar2) {
      _Dst = icu_64::UnicodeString::getBuffer(&local_58,iVar2 + 1);
      memcpy(_Dst,_Src.Data,(longlong)iVar2 * 2);
      _Dst[iVar2] = L'\0';
      icu_64::UnicodeString::releaseBuffer(&local_58,iVar2);
    }
    pTVar1 = icu_64::TimeZone::createTimeZone(&local_58);
    icu_64::UnicodeString::~UnicodeString(&local_58);
  }
  icu_64::TimeZone::adoptDefault(pTVar1);
  (**(code **)(pTVar1->_padding_ + 0x38))(pTVar1);
  if (4 < (byte)LogICUInternationalization._0_1_) {
    local_88 = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      local_88 = local_78.Data.AllocatorInstance.Data;
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogICUInternationalization)
    ;
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

// IsCultureAllowed @ 141701820

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __thiscall
FICUInternationalization::IsCultureAllowed(FICUInternationalization *this,FString *param_1)

{
  int iVar1;
  FCultureFilter *this_00;
  uint uVar2;
  int iVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  
  ConditionalInitializeAllowedCultures(this);
  this_00 = (this->AllowedCulturesFilter).Ptr;
  pwVar5 = L"";
  if (*(int *)&(this_00->EnabledCultures).Elements.field_0x8 !=
      *(int *)&(this_00->EnabledCultures).Elements.field_0x34) {
    iVar1 = (param_1->Data).ArrayNum;
    iVar3 = iVar1 + -1;
    if (iVar1 == 0) {
      pwVar4 = L"";
      iVar3 = 0;
    }
    else {
      pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
    iVar3 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                      (&this_00->EnabledCultures,uVar2,param_1);
    if (iVar3 == -1) {
      return false;
    }
  }
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
  iVar3 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                    (&this_00->DisabledCultures,uVar2,param_1);
  if (iVar3 != -1) {
    return false;
  }
  return true;
}

// IsCultureRemapped @ 141701900

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __thiscall
FICUInternationalization::IsCultureRemapped
          (FICUInternationalization *this,FString *param_1,FString *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  FString *pFVar6;
  FString *pFVar7;
  bool bVar8;
  
  ConditionalInitializeCultureMappings(this);
  iVar3 = (param_1->Data).ArrayNum;
  if (iVar3 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar7 = (FString *)0x0;
  iVar4 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar4 = 0;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  iVar3 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      *)&this->CultureMappings,uVar2,param_1);
  if (iVar3 != -1) {
    lVar1 = *(longlong *)&this->CultureMappings + (longlong)iVar3 * 0x28;
    pFVar6 = (FString *)(lVar1 + 0x10);
    if (lVar1 == 0) {
      pFVar6 = pFVar7;
    }
    bVar8 = true;
    if (pFVar6 == (FString *)0x0) goto LAB_141701993;
    pFVar7 = pFVar6;
    if (param_2 != (FString *)0x0) {
      ::FString::operator=(param_2,pFVar6);
    }
  }
  bVar8 = pFVar7 == (FString *)0x0;
LAB_141701993:
  return !bVar8;
}

// LoadAllCultureData @ 141703e70

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall FICUInternationalization::LoadAllCultureData(FICUInternationalization *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  TSharedPtr<FCulture,1> local_18;
  
  iVar1 = (this->AllAvailableCultures).ArrayNum;
  pFVar2 = (this->AllAvailableCultures).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x40;
  while( true ) {
    if ((this->AllAvailableCultures).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FICUInternationalization::FICUCultureData,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    FindOrMakeCanonizedCulture(this,&local_18,(FString *)pFVar2,No);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    pFVar2 = pFVar2 + 0x40;
  }
  return;
}

// OpenDataFile @ 141706860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

schar __cdecl
FICUInternationalization::OpenDataFile(void *param_1,void **param_2,void **param_3,char *param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  FName FVar2;
  code *pcVar3;
  undefined8 uVar4;
  void *pvVar5;
  bool bVar6;
  schar sVar7;
  uint uVar8;
  int iVar9;
  size_t sVar10;
  IFileManager *pIVar11;
  longlong *plVar12;
  ulong64 uVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_MemoryICUDataFileAllocationSize> FVar15;
  ForAnyElementType *pFVar16;
  int *piVar17;
  wchar_t *pwVar18;
  FICUCachedFileData *pFVar19;
  ForAnyElementType FVar20;
  void *pvVar21;
  TSet<TTuple<FString,FICUInternationalization::FICUCachedFileData>,TDefaultMapHashableKeyFuncs<FString,FICUInternationalization::FICUCachedFileData,0>,FDefaultSetAllocator>
  *pTVar22;
  int *piVar23;
  undefined1 auStackY_258 [32];
  FString local_1f8;
  FLLMScope local_1e8 [2];
  undefined1 local_1e0 [16];
  undefined8 local_1d0;
  int local_1c8;
  void **local_1c0;
  TSet<TTuple<FString,FICUInternationalization::FICUCachedFileData>,TDefaultMapHashableKeyFuncs<FString,FICUInternationalization::FICUCachedFileData,0>,FDefaultSetAllocator>
  *local_1b8;
  void **local_1b0;
  FMemScope local_1a8;
  undefined4 local_1a0 [2];
  void *local_198;
  FString *local_190;
  undefined4 *local_188;
  FName local_180;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_258;
  local_1c0 = param_2;
  local_1b0 = param_3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name780,L"Localization/ICU");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_1e8,LLMScope_Name780,false,None,Default,true);
  FMemScope::FMemScope(&local_1a8,&LLMScope_Name780,true);
  if ((param_1 == (void *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("This",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICUInternationalization.cpp"
                         ,0x30f,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    sVar7 = (*pcVar3)();
    return sVar7;
  }
  pvVar21 = (void *)0x0;
  local_178._padding_ = 0;
  if (param_4 == (char *)0x0) {
    local_178.Ptr = (wchar_t *)0x0;
    local_178.StringLength = 0;
  }
  else {
    sVar10 = strlen(param_4);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_178,param_4,(int)sVar10,Yes);
  }
  ::FString::FString(&local_1f8,local_178.Ptr);
  if ((void *)local_178._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_178._padding_);
  }
  FPaths::NormalizeFilename(&local_1f8);
  if (*(int *)((longlong)param_1 + 0x20) == 0) {
    pwVar18 = L"";
    iVar9 = 0;
  }
  else {
    pwVar18 = *(wchar_t **)((longlong)param_1 + 0x18);
    iVar9 = *(int *)((longlong)param_1 + 0x20) + -1;
  }
  bVar6 = ::FString::StartsWith(&local_1f8,pwVar18,iVar9,IgnoreCase);
  if (!bVar6) {
    *param_2 = (void *)0x0;
    sVar7 = '\0';
    *param_3 = (void *)0x0;
    goto LAB_141706d2f;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((longlong)param_1 + 0x248);
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  pTVar22 = (TSet<TTuple<FString,FICUInternationalization::FICUCachedFileData>,TDefaultMapHashableKeyFuncs<FString,FICUInternationalization::FICUCachedFileData,0>,FDefaultSetAllocator>
             *)((longlong)param_1 + 0x1f8);
  iVar9 = local_1f8.Data.ArrayNum + -1;
  FVar20.Data = local_1f8.Data.AllocatorInstance.Data;
  if (local_1f8.Data.ArrayNum == 0) {
    iVar9 = 0;
    FVar20.Data = (FScriptContainerElement *)L"";
  }
  local_1b8 = pTVar22;
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,(wchar_t *)FVar20.Data);
  iVar9 = TSet<TTuple<FString,FICUInternationalization::FICUCachedFileData>,TDefaultMapHashableKeyFuncs<FString,FICUInternationalization::FICUCachedFileData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(pTVar22,uVar8,&local_1f8);
  piVar23 = (int *)0x0;
  if (iVar9 == -1) {
LAB_141706a4e:
    FVar20.Data = (FScriptContainerElement *)L"";
    if (local_1f8.Data.ArrayNum != 0) {
      FVar20.Data = local_1f8.Data.AllocatorInstance.Data;
    }
    ::FString::FString((FString *)(local_1e0 + 8),(wchar_t *)FVar20.Data);
    uVar4 = local_1e0._8_8_;
    local_1e0._8_8_ = (FICUCachedFileData *)0x0;
    pFVar19 = (FICUCachedFileData *)L"";
    if ((int)local_1d0 != 0) {
      pFVar19 = (FICUCachedFileData *)uVar4;
    }
    local_1c8 = (int)local_1d0;
    local_1d0 = 0;
    NotifyLoadingStateChanged(true,(wchar_t *)pFVar19);
    if ((FICUCachedFileData *)local_1e0._8_8_ != (FICUCachedFileData *)0x0) {
      FMemory::Free((void *)local_1e0._8_8_);
    }
    pIVar11 = IFileManager::Get();
    FVar20.Data = (FScriptContainerElement *)L"";
    if (local_1f8.Data.ArrayNum != 0) {
      FVar20.Data = local_1f8.Data.AllocatorInstance.Data;
    }
    plVar12 = (longlong *)(**(code **)((longlong)*pIVar11 + 0x18))(pIVar11,FVar20.Data,0);
    if (plVar12 != (longlong *)0x0) {
      local_1e0._8_8_ = (**(code **)(*plVar12 + 0x30))();
      local_1a0[0] = 0;
      local_198 = _anon_134951D2::FICUOverrides::Malloc((void *)0x0,local_1e0._8_8_);
      pTVar22 = local_1b8;
      local_190 = &local_1f8;
      local_188 = local_1a0;
      TSet<TTuple<FString,FICUInternationalization::FICUCachedFileData>,TDefaultMapHashableKeyFuncs<FString,FICUInternationalization::FICUCachedFileData,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_&,FICUInternationalization::FICUCachedFileData_&&>_>
                (local_1b8,
                 (TPairInitializer<FString_&,FICUInternationalization::FICUCachedFileData_&&> *)
                 local_1e0,(bool *)&local_190);
      pvVar5 = local_198;
      piVar23 = (int *)(*(longlong *)&pTVar22->Elements +
                       ((longlong)(int)local_1e0._0_4_ * 5 + 2) * 8);
      if (local_198 != (void *)0x0) {
        uVar13 = FMemory::GetAllocSize(local_198);
        FICUOverrides::BytesInUseCount = FICUOverrides::BytesInUseCount - uVar13;
        if ((FThreadStats::TlsSlot != 0xffffffff) &&
           (FICUOverrides::CachedBytesInUseCount != FICUOverrides::BytesInUseCount)) {
          FICUOverrides::CachedBytesInUseCount = FICUOverrides::BytesInUseCount;
        }
        FMemory::Free(pvVar5);
      }
      (**(code **)(*plVar12 + 0x188))(plVar12,*(undefined8 *)(piVar23 + 2),local_1e0._8_8_);
      (**(code **)*plVar12)(plVar12,1);
      uVar13 = FMemory::GetAllocSize(*(void **)(piVar23 + 2));
      DataFileBytesInUseCount = DataFileBytesInUseCount + uVar13;
      param_2 = local_1c0;
      if ((FThreadStats::TlsSlot != 0xffffffff) &&
         (CachedDataFileBytesInUseCount != DataFileBytesInUseCount)) {
        FVar15 = StatPtr_STAT_MemoryICUDataFileAllocationSize;
        if (StatPtr_STAT_MemoryICUDataFileAllocationSize ==
            (FThreadSafeStaticStat<FStat_STAT_MemoryICUDataFileAllocationSize>)0x0) {
          pFVar14 = ::FName::FName(&local_180,"STAT_MemoryICUDataFileAllocationSize");
          FVar15 = (FThreadSafeStaticStat<FStat_STAT_MemoryICUDataFileAllocationSize>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_MemoryICUDataFileAllocationSize,*pFVar14,
                              L"ICU Data File Memory Used","STATGROUP_Memory","STATCAT_Advanced",
                              L"Memory",true,false,ST_int64,false,false,MCR_Physical);
        }
        FVar2 = *(FName *)FVar15;
        local_1e0._0_4_ = FVar2.ComparisonIndex.Value;
        local_1e0._4_4_ = FVar2.Number;
        FThreadStats::AddMessage<__int64>(FVar2,Set,DataFileBytesInUseCount,false);
        CachedDataFileBytesInUseCount = DataFileBytesInUseCount;
        param_2 = local_1c0;
      }
    }
    pFVar19 = (FICUCachedFileData *)L"";
    if (local_1c8 != 0) {
      pFVar19 = (FICUCachedFileData *)uVar4;
    }
    NotifyLoadingStateChanged(false,(wchar_t *)pFVar19);
    if ((FICUCachedFileData *)uVar4 != (FICUCachedFileData *)0x0) {
      FMemory::Free((void *)uVar4);
    }
    if (piVar23 != (int *)0x0) goto LAB_141706c8c;
    *param_2 = (void *)0x0;
    sVar7 = '\0';
  }
  else {
    lVar1 = *(longlong *)&pTVar22->Elements + (longlong)iVar9 * 0x28;
    piVar23 = (int *)(lVar1 + 0x10);
    if (lVar1 == 0) {
      piVar23 = (int *)0x0;
    }
    if (piVar23 == (int *)0x0) goto LAB_141706a4e;
LAB_141706c8c:
    *piVar23 = *piVar23 + 1;
    pFVar16 = ::operator_new(0x10);
    FVar20.Data = local_1f8.Data.AllocatorInstance.Data;
    if (pFVar16 == (ForAnyElementType *)0x0) {
      *param_2 = (void *)0x0;
      pvVar21 = *(void **)(piVar23 + 2);
      sVar7 = '\x01';
    }
    else {
      pFVar16->Data = (FScriptContainerElement *)0x0;
      *(int *)&pFVar16[1].Data = local_1f8.Data.ArrayNum;
      piVar17 = (int *)((longlong)&pFVar16[1].Data + 4);
      if (local_1f8.Data.ArrayNum == 0) {
        *piVar17 = 0;
        *param_2 = pFVar16;
        sVar7 = '\x01';
        pvVar21 = *(void **)(piVar23 + 2);
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_1f8.Data.ArrayNum,0,pFVar16,local_1f8.Data.ArrayNum,piVar17);
        memcpy(pFVar16->Data,FVar20.Data,(longlong)local_1f8.Data.ArrayNum * 2);
        *param_2 = pFVar16;
        sVar7 = '\x01';
        pvVar21 = *(void **)(piVar23 + 2);
      }
    }
  }
  *local_1b0 = pvVar21;
  LeaveCriticalSection(lpCriticalSection);
LAB_141706d2f:
  if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
  FMemScope::~FMemScope(&local_1a8);
  FLLMScope::~FLLMScope(local_1e8);
  return sVar7;
}

// RefreshCachedConfigData @ 1417091a0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall FICUInternationalization::RefreshCachedConfigData(FICUInternationalization *this)

{
  FCultureFilter *pFVar1;
  
  this->bHasInitializedCultureMappings = false;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
           *)&this->CultureMappings);
  ConditionalInitializeCultureMappings(this);
  this->bHasInitializedAllowedCultures = false;
  pFVar1 = (this->AllowedCulturesFilter).Ptr;
  if (pFVar1 != (FCultureFilter *)0x0) {
    (this->AllowedCulturesFilter).Ptr = (FCultureFilter *)0x0;
    (*(code *)pFVar1[-1].DisabledCultures.Hash.SecondaryData)();
  }
  ConditionalInitializeAllowedCultures(this);
  return;
}

// RefreshCultureDisplayNames @ 141709660

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
FICUInternationalization::RefreshCultureDisplayNames
          (FICUInternationalization *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> *local_res10;
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lpCriticalSection = &this->CachedCulturesCS;
  local_res10 = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar11 = 0;
  puVar1 = &(this->CachedCultures).field_0x10;
  iVar3 = *(int *)&(this->CachedCultures).field_0x28;
  uVar7 = 1;
  iVar13 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->CachedCultures).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14170972e;
      uVar10 = puVar14[lVar9 + 1];
    }
    uVar7 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    iVar8 = iVar13 + -1 + local_res18;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14170972e:
  uVar10 = *(uint *)&(this->CachedCultures).field_0x28;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar11);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->CachedCultures).field_0x8 -
                       *(int *)&(this->CachedCultures).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar5 = local_res10;
  uVar7 = *(uint *)&(this->CachedCultures).field_0x28;
  if (uVar10 != uVar7) {
    puVar12 = *(undefined1 **)&(this->CachedCultures).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_141709840;
      uVar10 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar7 < (int)uVar10) {
      uVar10 = uVar7;
    }
  }
LAB_141709840:
  while( true ) {
    if (*(int *)&(this->CachedCultures).field_0x8 - *(int *)&(this->CachedCultures).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FCulture,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    FCulture::RefreshCultureDisplayNames
              (*(FCulture **)
                (*(longlong *)&this->CachedCultures + 0x10 +
                (longlong)TStack_60.CurrentBitIndex * 0x28),pTVar5,true);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
                    /* WARNING: Could not recover jumptable at 0x0001417098c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// Terminate @ 141714660

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FICUInternationalization::Terminate(FICUInternationalization *this)

{
  undefined1 *puVar1;
  TMap<FString,TSharedRef<FCulture,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FCulture,1>,0>_>
  *this_00;
  FWindowsRecursiveMutex *lpCriticalSection;
  TMap<FString,FICUInternationalization::FICUCachedFileData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FICUInternationalization::FICUCachedFileData,0>_>
  *this_01;
  ulonglong uVar2;
  int iVar3;
  GregorianCalendar *pGVar4;
  ForElementType<FSetElementId> FVar5;
  code *pcVar6;
  FICURegexManager *lpCriticalSection_00;
  FICUBreakIteratorManager *lpCriticalSection_01;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  pGVar4 = (this->InvariantGregorianCalendar).Ptr;
  if (pGVar4 != (GregorianCalendar *)0x0) {
    (this->InvariantGregorianCalendar).Ptr = (GregorianCalendar *)0x0;
    (**(code **)pGVar4->_padding_)();
  }
  if ((FICURegexManager::Singleton == (FICURegexManager *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICURegex.cpp"
                         ,0x5c,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lpCriticalSection_00 = FICURegexManager::Singleton;
  iVar11 = 0;
  if (FICURegexManager::Singleton != (FICURegexManager *)0x0) {
    (FICURegexManager::Singleton->AllocatedRegexMatchers).HashSize = 0;
    FVar5 = (lpCriticalSection_00->AllocatedRegexMatchers).Hash.SecondaryData;
    if (FVar5 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar5);
    }
    TSparseArray<TSparseSetElement<TSharedPtr<icu_64::RegexMatcher,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TSharedPtr<icu_64::RegexMatcher,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&(lpCriticalSection_00->AllocatedRegexMatchers).Elements);
    DeleteCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_00->AllocatedRegexMatchersCS);
    (lpCriticalSection_00->AllocatedRegexPatterns).HashSize = 0;
    FVar5 = (lpCriticalSection_00->AllocatedRegexPatterns).Hash.SecondaryData;
    if (FVar5 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar5);
    }
    TSparseArray<TSparseSetElement<TSharedPtr<icu_64::RegexPattern_const_,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TSharedPtr<icu_64::RegexPattern_const_,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&(lpCriticalSection_00->AllocatedRegexPatterns).Elements);
    DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
    ::operator_delete(lpCriticalSection_00,0xf0);
  }
  FICURegexManager::Singleton = (FICURegexManager *)0x0;
  if ((FICUBreakIteratorManager::Singleton == (FICUBreakIteratorManager *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\ICUBreakIterator.cpp"
                         ,0x15,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lpCriticalSection_01 = FICUBreakIteratorManager::Singleton;
  if (FICUBreakIteratorManager::Singleton != (FICUBreakIteratorManager *)0x0) {
    (FICUBreakIteratorManager::Singleton->AllocatedIterators).HashSize = 0;
    FVar5 = (lpCriticalSection_01->AllocatedIterators).Hash.SecondaryData;
    if (FVar5 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar5);
    }
    TSparseArray<TSparseSetElement<TSharedPtr<icu_64::BreakIterator,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TSharedPtr<icu_64::BreakIterator,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&(lpCriticalSection_01->AllocatedIterators).Elements);
    DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_01);
    ::operator_delete(lpCriticalSection_01,0x78);
  }
  this_00 = &this->CachedCultures;
  FICUBreakIteratorManager::Singleton = (FICUBreakIteratorManager *)0x0;
  bVar7 = 1 < *(int *)&(this->CachedCultures).field_0x48;
  if (!bVar7) {
    TSet<TTuple<FString,TSharedRef<FCulture,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FCulture,1>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FString,TSharedRef<FCulture,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FCulture,1>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FCulture,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FCulture,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->CachedCultures).field_0x8);
  puVar1 = &(this->CachedCultures).field_0xc;
  *(undefined4 *)&(this->CachedCultures).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->CachedCultures).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedCultures).field_0x34 = 0;
  iVar3 = *(int *)&(this->CachedCultures).field_0x2c;
  *(undefined4 *)&(this->CachedCultures).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->CachedCultures).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->CachedCultures).field_0x10,0);
  }
  if (bVar7) {
    *(undefined4 *)&(this->CachedCultures).field_0x48 = 1;
    TSet<TTuple<FString,TSharedRef<FCulture,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FCulture,1>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FString,TSharedRef<FCulture,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FCulture,1>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  u_cleanup_64();
  lpCriticalSection = &this->PathToCachedFileDataMapCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  puVar1 = &(this->PathToCachedFileDataMap).field_0x10;
  iVar3 = *(int *)&(this->PathToCachedFileDataMap).field_0x28;
  this_01 = &this->PathToCachedFileDataMap;
  uVar8 = 1;
  iVar13 = 0;
  iVar9 = iVar13;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->PathToCachedFileDataMap).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar15 = *puVar14;
    iVar13 = 0;
    iVar11 = 0;
    while (uVar15 == 0) {
      lVar10 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_141714910;
      uVar15 = puVar14[lVar10 + 1];
    }
    uVar8 = -uVar15 & uVar15;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iVar9 = iVar13 + -1 + local_res10;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_141714910:
  uVar15 = *(uint *)&(this->PathToCachedFileDataMap).field_0x28;
  uVar16 = uVar15 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar8,iVar11);
  TStack_60.CurrentBitIndex = iVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar15 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->PathToCachedFileDataMap).field_0x8 -
                       *(int *)&(this->PathToCachedFileDataMap).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar3 < (int)uVar15)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar8 = *(uint *)&(this->PathToCachedFileDataMap).field_0x28;
  if (uVar15 != uVar8) {
    puVar12 = *(undefined1 **)&(this->PathToCachedFileDataMap).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar15 == 0) {
      lVar10 = (longlong)iVar11;
      uVar16 = uVar16 + 0x20;
      iVar11 = iVar11 + 1;
      uVar15 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_141714a30;
      uVar15 = *(uint *)(puVar12 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar15 = (int)lVar10 + -1 + uVar16;
    if ((int)uVar8 < (int)uVar15) {
      uVar15 = uVar8;
    }
  }
LAB_141714a30:
  while( true ) {
    if (*(int *)&(this->PathToCachedFileDataMap).field_0x8 -
        *(int *)&(this->PathToCachedFileDataMap).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FICUInternationalization::FICUCachedFileData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar15) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    if (2 < (byte)LogICUInternationalization._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&LogICUInternationalization);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  bVar7 = 1 < *(int *)&(this->PathToCachedFileDataMap).field_0x48;
  if (!bVar7) {
    TSet<TTuple<FString,FICUInternationalization::FICUCachedFileData>,TDefaultMapHashableKeyFuncs<FString,FICUInternationalization::FICUCachedFileData,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FString,FICUInternationalization::FICUCachedFileData>,TDefaultMapHashableKeyFuncs<FString,FICUInternationalization::FICUCachedFileData,0>,FDefaultSetAllocator>
                      *)this_01);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FICUInternationalization::FICUCachedFileData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FICUInternationalization::FICUCachedFileData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_01,0,*(int *)&(this->PathToCachedFileDataMap).field_0x8);
  puVar1 = &(this->PathToCachedFileDataMap).field_0xc;
  *(undefined4 *)&(this->PathToCachedFileDataMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)this_01,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->PathToCachedFileDataMap).field_0x34 = 0;
  *(undefined4 *)&(this->PathToCachedFileDataMap).field_0x30 = 0xffffffff;
  iVar11 = *(int *)&(this->PathToCachedFileDataMap).field_0x2c;
  *(undefined4 *)&(this->PathToCachedFileDataMap).field_0x28 = 0;
  if ((iVar11 < 0) || (0x80 < iVar11)) {
    *(undefined4 *)&(this->PathToCachedFileDataMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->PathToCachedFileDataMap).field_0x10,0
              );
  }
  if (bVar7) {
    *(undefined4 *)&(this->PathToCachedFileDataMap).field_0x48 = 1;
    TSet<TTuple<FString,FICUInternationalization::FICUCachedFileData>,TDefaultMapHashableKeyFuncs<FString,FICUInternationalization::FICUCachedFileData,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FString,FICUInternationalization::FICUCachedFileData>,TDefaultMapHashableKeyFuncs<FString,FICUInternationalization::FICUCachedFileData,0>,FDefaultSetAllocator>
              *)this_01);
  }
                    /* WARNING: Could not recover jumptable at 0x000141714b61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// UEDateTimeToICUDate @ 1417183e0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

double __thiscall
FICUInternationalization::UEDateTimeToICUDate(FICUInternationalization *this,FDateTime *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  longlong lVar2;
  FDateTime *pFVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  FDateTime local_res8 [2];
  int local_res18 [2];
  int local_res20 [2];
  UErrorCode local_48 [8];
  
  if ((this->InvariantGregorianCalendar).Ptr == (GregorianCalendar *)0x0) {
    pFVar3 = FDateTime::FDateTime(local_res8,0x7b2,1,1,0,0,0,0);
    lVar5 = param_1->Ticks - pFVar3->Ticks;
    lVar5 = SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(lVar5),8) + lVar5;
    dVar7 = (double)((lVar5 >> 0x17) - (lVar5 >> 0x3f)) * __real_408f400000000000;
  }
  else {
    FDateTime::GetDate(param_1,local_res20,(int *)local_res8,local_res18);
    lVar1 = param_1->Ticks;
    lpCriticalSection = &this->InvariantGregorianCalendarCS;
    lVar2 = lVar1 / 600000000;
    lVar4 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar2),8) + lVar2;
    lVar5 = lVar1 + SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(lVar1),8);
    lVar6 = (lVar5 >> 0x17) - (lVar5 >> 0x3f);
    lVar5 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar6),8) + lVar6;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    icu_64::Calendar::set
              ((Calendar *)(this->InvariantGregorianCalendar).Ptr,local_res20[0],
               (int)local_res8[0].Ticks + -1,local_res18[0],
               (int)(lVar1 / 36000000000) + (int)((lVar1 / 36000000000) / 0x18) * -0x18,
               (int)lVar2 + ((int)(lVar4 >> 5) - (int)(lVar4 >> 0x3f)) * -0x3c,
               (int)lVar6 + ((int)(lVar5 >> 5) - (int)(lVar5 >> 0x3f)) * -0x3c);
    local_48[0] = U_ZERO_ERROR;
    dVar7 = icu_64::Calendar::getTimeInMillis
                      ((Calendar *)(this->InvariantGregorianCalendar).Ptr,local_48);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return dVar7;
}

