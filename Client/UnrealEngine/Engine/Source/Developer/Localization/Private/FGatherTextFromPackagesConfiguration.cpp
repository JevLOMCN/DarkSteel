// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 9

// StaticStruct @ 146b37e40

UScriptStruct * __cdecl FGatherTextFromPackagesConfiguration::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGatherTextFromPackagesConfiguration.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Localization();
    Z_Registration_Info_UScriptStruct_FGatherTextFromPackagesConfiguration.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGatherTextFromPackagesConfiguration,
                         (UObject *)pUVar1,L"GatherTextFromPackagesConfiguration");
  }
  return Z_Registration_Info_UScriptStruct_FGatherTextFromPackagesConfiguration.OuterSingleton;
}

// FGatherTextFromPackagesConfiguration @ 146b42900

FGatherTextFromPackagesConfiguration * __thiscall
FGatherTextFromPackagesConfiguration::FGatherTextFromPackagesConfiguration
          (FGatherTextFromPackagesConfiguration *this)

{
  TArray<FGatherTextFileExtension,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  void *pvVar7;
  bool bVar8;
  int iVar9;
  FGatherTextFromPackagesConfiguration *pFVar10;
  longlong lVar11;
  undefined1 local_res8 [8];
  FScriptContainerElement local_48 [8];
  FString local_40;
  
  pvVar7 = ThreadLocalStoragePointer;
  pTVar1 = &this->FileExtensions;
  this->IsEnabled = true;
  (this->IncludePathWildcards).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncludePathWildcards).ArrayNum = 0;
  (this->IncludePathWildcards).ArrayMax = 0;
  (this->ExcludePathWildcards).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExcludePathWildcards).ArrayNum = 0;
  (this->ExcludePathWildcards).ArrayMax = 0;
  if (*(int *)(*(longlong *)((longlong)pvVar7 + (ulonglong)_tls_index * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `FGatherTextFromPackagesConfiguration::GetDefaultPackageFileExtensions'::__l2::<lambda_1>::
      operator()(local_res8,&DefaultPackageFileExtensions);
      atexit(`FGatherTextFromPackagesConfiguration::GetDefaultPackageFileExtensions'::__l2::
             _dynamic_atexit_destructor_for__DefaultPackageFileExtensions__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  FVar6 = DefaultPackageFileExtensions.AllocatorInstance;
  piVar2 = &(this->FileExtensions).ArrayMax;
  iVar9 = DefaultPackageFileExtensions.ArrayNum;
  (this->FileExtensions).ArrayNum = iVar9;
  if (iVar9 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar9,0,&pTVar1->AllocatorInstance,iVar9,piVar2);
    ConstructItems<FGatherTextFileExtension,FGatherTextFileExtension,int>
              ((pTVar1->AllocatorInstance).Data,(FGatherTextFileExtension *)FVar6.Data,iVar9);
  }
  (this->Collections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Collections).ArrayNum = 0;
  (this->Collections).ArrayMax = 0;
  (this->WorldCollections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorldCollections).ArrayNum = 0;
  (this->WorldCollections).ArrayMax = 0;
  (this->ExcludeClasses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExcludeClasses).ArrayNum = 0;
  (this->ExcludeClasses).ArrayMax = 0;
  this->ShouldExcludeDerivedClasses = false;
  this->ShouldGatherFromEditorOnlyData = false;
  this->SkipGatherCache = false;
  local_48[0] = (FScriptContainerElement)0x0;
  local_40.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.Data.ArrayNum = 0;
  local_40.Data.ArrayMax = 0;
  ::FString::operator=(&local_40,L"Content/L10N/*");
  pFVar4 = (this->ExcludePathWildcards).AllocatorInstance.Data;
  if ((pFVar4 <= local_48) &&
     (local_48 < pFVar4 + (longlong)(this->ExcludePathWildcards).ArrayMax * 0x18)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FGatherTextFromPackagesConfiguration *)(*pcVar5)();
      return pFVar10;
    }
  }
  iVar9 = (this->ExcludePathWildcards).ArrayNum;
  if (iVar9 == (this->ExcludePathWildcards).ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->ExcludePathWildcards).AllocatorInstance,
                       &(this->ExcludePathWildcards).ArrayMax);
  }
  FVar6.Data = local_40.Data.AllocatorInstance.Data;
  (this->ExcludePathWildcards).ArrayNum = iVar9 + 1;
  pFVar3 = (this->ExcludePathWildcards).AllocatorInstance.Data + (longlong)iVar9 * 0x18;
  *pFVar3 = local_48[0];
  pFVar4 = pFVar3 + 8;
  *(FScriptContainerElement **)&pFVar4->field_0x0 = (FScriptContainerElement *)0x0;
  lVar11 = (longlong)local_40.Data.ArrayNum;
  *(int *)(pFVar3 + 0x10) = local_40.Data.ArrayNum;
  if (local_40.Data.ArrayNum == 0) {
    *(int *)(pFVar3 + 0x14) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_40.Data.ArrayNum,0,(ForAnyElementType *)pFVar4,local_40.Data.ArrayNum,
               (int *)(pFVar3 + 0x14));
    memcpy(*(FScriptContainerElement **)&pFVar4->field_0x0,FVar6.Data,lVar11 * 2);
  }
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~FGatherTextFromPackagesConfiguration @ 146b44740

void __thiscall
FGatherTextFromPackagesConfiguration::~FGatherTextFromPackagesConfiguration
          (FGatherTextFromPackagesConfiguration *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FSoftClassPath,int>
            ((FSoftClassPath *)(this->ExcludeClasses).AllocatorInstance.Data,
             (this->ExcludeClasses).ArrayNum);
  pFVar1 = (this->ExcludeClasses).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WorldCollections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Collections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FGatherTextFileExtension,int>
            ((FGatherTextFileExtension *)(this->FileExtensions).AllocatorInstance.Data,
             (this->FileExtensions).ArrayNum);
  pFVar1 = (this->FileExtensions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FGatherTextExcludePath,int>
            ((FGatherTextExcludePath *)(this->ExcludePathWildcards).AllocatorInstance.Data,
             (this->ExcludePathWildcards).ArrayNum);
  pFVar1 = (this->ExcludePathWildcards).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FGatherTextIncludePath,int>
            ((FGatherTextIncludePath *)(this->IncludePathWildcards).AllocatorInstance.Data,
             (this->IncludePathWildcards).ArrayNum);
  pFVar1 = (this->IncludePathWildcards).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 146b45450

FGatherTextFromPackagesConfiguration * __thiscall
FGatherTextFromPackagesConfiguration::operator=
          (FGatherTextFromPackagesConfiguration *this,FGatherTextFromPackagesConfiguration *param_1)

{
  TArray<FSoftClassPath,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FSoftClassPath *pFVar4;
  
  this->IsEnabled = param_1->IsEnabled;
  TArray<FGatherTextIncludePath,TSizedDefaultAllocator<32>_>::operator=
            (&this->IncludePathWildcards,&param_1->IncludePathWildcards);
  TArray<FGatherTextExcludePath,TSizedDefaultAllocator<32>_>::operator=
            (&this->ExcludePathWildcards,&param_1->ExcludePathWildcards);
  TArray<FGatherTextFileExtension,TSizedDefaultAllocator<32>_>::operator=
            (&this->FileExtensions,&param_1->FileExtensions);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=(&this->Collections,&param_1->Collections);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&this->WorldCollections,&param_1->WorldCollections);
  pTVar1 = &this->ExcludeClasses;
  if (pTVar1 != &param_1->ExcludeClasses) {
    DestructItems<FSoftClassPath,int>
              ((FSoftClassPath *)(pTVar1->AllocatorInstance).Data,(this->ExcludeClasses).ArrayNum);
    iVar3 = (param_1->ExcludeClasses).ArrayNum;
    piVar2 = &(this->ExcludeClasses).ArrayMax;
    pFVar4 = (FSoftClassPath *)(param_1->ExcludeClasses).AllocatorInstance.Data;
    (this->ExcludeClasses).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      ConstructItems<FSoftClassPath,FSoftClassPath,int>
                ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
    }
  }
  this->ShouldExcludeDerivedClasses = param_1->ShouldExcludeDerivedClasses;
  this->ShouldGatherFromEditorOnlyData = param_1->ShouldGatherFromEditorOnlyData;
  this->SkipGatherCache = param_1->SkipGatherCache;
  return this;
}

// operator() @ 146b48b10

/* WARNING: Removing unreachable block (ram,0x000146b48c03) */
/* WARNING: Removing unreachable block (ram,0x000146b48ce0) */

TArray<FGatherTextFileExtension,TSizedDefaultAllocator<32>_> * __thiscall
`FGatherTextFromPackagesConfiguration::GetDefaultPackageFileExtensions'::__l2::<lambda_1>::
operator()(void *this,
          TArray<FGatherTextFileExtension,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArray<FGatherTextFileExtension,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  FString local_28;
  FString local_18;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  ::FString::FString(&local_28,L"umap");
  pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 <
       pFVar5 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TArray<FGatherTextFileExtension,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar4;
  }
  iVar3 = __return_storage_ptr__->ArrayNum;
  if (iVar3 == __return_storage_ptr__->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar3 + 1;
  pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_28.Data.AllocatorInstance.Data;
  *(int *)(pFVar5 + 8) = local_28.Data.ArrayNum;
  *(int *)(pFVar5 + 0xc) = local_28.Data.ArrayMax;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_18,L"uasset");
  pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 <
       pFVar5 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TArray<FGatherTextFileExtension,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar4;
  }
  iVar3 = __return_storage_ptr__->ArrayNum;
  if (iVar3 == __return_storage_ptr__->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar3 + 1;
  pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(FScriptContainerElement **)pFVar5 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar5 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar5 + 0xc) = local_18.Data.ArrayMax;
  return __return_storage_ptr__;
}

// operator() @ 146b4b6a0

bool __thiscall
`FGatherTextFromPackagesConfiguration::Validate'::__l2::<lambda_1>::operator()
          (void *this,FGatherTextIncludePath *param_1)

{
  int iVar1;
  FText *pFVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FText local_28;
  FText local_18;
  
  FText::FText(&local_28);
  if ((param_1->Pattern).Data.ArrayNum < 2) {
    pwVar5 = L"Include path not specified. Use \".\" to specify the root directory.";
    pwVar4 = L"IncludePathEmptyError";
  }
  else {
    iVar1 = ::FString::Find(&param_1->Pattern,L"*",1,IgnoreCase,FromStart,-1);
    if (iVar1 != -1) {
      bVar3 = false;
      goto LAB_146b4b739;
    }
    pwVar5 = 
    L"Include path does not specify a wild card (\"*\"). Append \"*\" or only the file at the exact specified directory will be gathered from."
    ;
    pwVar4 = L"IncludePathNoWildcardError";
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText(&local_18,L"LocalizationTargetTypes",pwVar4,pwVar5)
  ;
  FText::operator=(&local_28,pFVar2);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  bVar3 = true;
LAB_146b4b739:
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return bVar3;
}

// operator() @ 146b4cb20

bool __thiscall
`FGatherTextFromPackagesConfiguration::Validate'::__l2::<lambda_2>::operator()
          (void *this,FGatherTextExcludePath *param_1)

{
  int iVar1;
  FText *pFVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FText local_28;
  FText local_18;
  
  FText::FText(&local_28);
  if ((param_1->Pattern).Data.ArrayNum < 2) {
    pwVar5 = L"Exclude path not specified. Use \".\" to specify the root directory.";
    pwVar4 = L"ExcludePathEmptyError";
  }
  else {
    iVar1 = ::FString::Find(&param_1->Pattern,L"*",1,IgnoreCase,FromStart,-1);
    if (iVar1 != -1) {
      bVar3 = false;
      goto LAB_146b4cbb9;
    }
    pwVar5 = 
    L"Exclude path does not specify a wild card (\"*\"). Append \"*\" or only the file at the exact specified directory will be excluded."
    ;
    pwVar4 = L"ExcludePathNoWildcardError";
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText(&local_18,L"LocalizationTargetTypes",pwVar4,pwVar5)
  ;
  FText::operator=(&local_28,pFVar2);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  bVar3 = true;
LAB_146b4cbb9:
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return bVar3;
}

// GetDefaultPackageFileExtensions @ 146b72a50

TArray<FGatherTextFileExtension,TSizedDefaultAllocator<32>_> * __cdecl
FGatherTextFromPackagesConfiguration::GetDefaultPackageFileExtensions(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `FGatherTextFromPackagesConfiguration::GetDefaultPackageFileExtensions'::__l2::<lambda_1>::
      operator()(local_res8,&DefaultPackageFileExtensions);
      atexit(`FGatherTextFromPackagesConfiguration::GetDefaultPackageFileExtensions'::__l2::
             _dynamic_atexit_destructor_for__DefaultPackageFileExtensions__);
      _Init_thread_footer(&::_TSS0);
      return &DefaultPackageFileExtensions;
    }
  }
  return &DefaultPackageFileExtensions;
}

// Validate @ 146b90f50

bool __thiscall
FGatherTextFromPackagesConfiguration::Validate
          (FGatherTextFromPackagesConfiguration *this,bool param_1,FText *param_2)

{
  FGatherTextIncludePath *pFVar1;
  FGatherTextExcludePath *pFVar2;
  int iVar3;
  bool bVar4;
  FGatherTextFileExtension *pFVar5;
  FText *pFVar6;
  FGatherTextIncludePath *pFVar7;
  FGatherTextExcludePath *pFVar8;
  undefined1 local_res10 [8];
  FText local_28;
  
  iVar3 = (this->IncludePathWildcards).ArrayNum;
  if (0 < iVar3) {
    pFVar7 = (FGatherTextIncludePath *)(this->IncludePathWildcards).AllocatorInstance.Data;
    pFVar1 = pFVar7 + iVar3;
    local_res10[0] = param_1;
    for (; pFVar7 != pFVar1; pFVar7 = pFVar7 + 1) {
      bVar4 = `FGatherTextFromPackagesConfiguration::Validate'::__l2::<lambda_1>::operator()
                        (local_res10,pFVar7);
      if (bVar4) {
        if (pFVar7 != (FGatherTextIncludePath *)0x0) goto LAB_146b9100d;
        break;
      }
    }
    pFVar8 = (FGatherTextExcludePath *)(this->ExcludePathWildcards).AllocatorInstance.Data;
    pFVar2 = pFVar8 + (this->ExcludePathWildcards).ArrayNum;
    local_res10[0] = param_1;
    for (; pFVar8 != pFVar2; pFVar8 = pFVar8 + 1) {
      bVar4 = `FGatherTextFromPackagesConfiguration::Validate'::__l2::<lambda_2>::operator()
                        (local_res10,pFVar8);
      if (bVar4) {
        if (pFVar8 != (FGatherTextExcludePath *)0x0) goto LAB_146b9100d;
        break;
      }
    }
    if ((0 < (this->FileExtensions).ArrayNum) &&
       (pFVar5 = TArray<FGatherTextFileExtension,TSizedDefaultAllocator<32>_>::
                 FindByPredicate<_FGatherTextFromPackagesConfiguration::Validate_::__l2::<lambda_3>_>
                           (&this->FileExtensions,(<lambda_3>)param_1),
       pFVar5 == (FGatherTextFileExtension *)0x0)) {
      return true;
    }
  }
LAB_146b9100d:
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_28,L"LocalizationTargetTypes",
                      L"InvalidGatherTextFromPackagesConfigurationError",
                      L"Must have at least one include path, one file extension, and no invalid settings."
                     );
  FText::operator=(param_2,pFVar6);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return false;
}

