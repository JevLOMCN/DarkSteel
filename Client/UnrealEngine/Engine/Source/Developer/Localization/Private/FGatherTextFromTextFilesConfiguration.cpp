// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 8

// StaticStruct @ 146b37920

UScriptStruct * __cdecl FGatherTextFromTextFilesConfiguration::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGatherTextFromTextFilesConfiguration.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Localization();
    Z_Registration_Info_UScriptStruct_FGatherTextFromTextFilesConfiguration.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGatherTextFromTextFilesConfiguration,
                         (UObject *)pUVar1,L"GatherTextFromTextFilesConfiguration");
  }
  return Z_Registration_Info_UScriptStruct_FGatherTextFromTextFilesConfiguration.OuterSingleton;
}

// FGatherTextFromTextFilesConfiguration @ 146b42b60

FGatherTextFromTextFilesConfiguration * __thiscall
FGatherTextFromTextFilesConfiguration::FGatherTextFromTextFilesConfiguration
          (FGatherTextFromTextFilesConfiguration *this)

{
  TArray<FGatherTextFileExtension,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  longlong lVar3;
  ForAnyElementType FVar4;
  void *pvVar5;
  ulonglong uVar6;
  int iVar7;
  undefined1 local_res8 [8];
  
  pvVar5 = ThreadLocalStoragePointer;
  uVar6 = (ulonglong)_tls_index;
  pTVar1 = &this->FileExtensions;
  this->IsEnabled = true;
  (this->SearchDirectories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SearchDirectories).ArrayNum = 0;
  (this->SearchDirectories).ArrayMax = 0;
  lVar3 = *(longlong *)((longlong)pvVar5 + uVar6 * 8);
  (this->ExcludePathWildcards).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExcludePathWildcards).ArrayNum = 0;
  (this->ExcludePathWildcards).ArrayMax = 0;
  if (*(int *)(lVar3 + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `FGatherTextFromTextFilesConfiguration::GetDefaultTextFileExtensions'::__l2::<lambda_1>::
      operator()(local_res8,&DefaultTextFileExtensions);
      atexit(`FGatherTextFromTextFilesConfiguration::GetDefaultTextFileExtensions'::__l2::
             _dynamic_atexit_destructor_for__DefaultTextFileExtensions__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  FVar4 = DefaultTextFileExtensions.AllocatorInstance;
  piVar2 = &(this->FileExtensions).ArrayMax;
  iVar7 = DefaultTextFileExtensions.ArrayNum;
  (this->FileExtensions).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar7,0,&pTVar1->AllocatorInstance,iVar7,piVar2);
    ConstructItems<FGatherTextFileExtension,FGatherTextFileExtension,int>
              ((pTVar1->AllocatorInstance).Data,(FGatherTextFileExtension *)FVar4.Data,iVar7);
  }
  this->ShouldGatherFromEditorOnlyData = false;
  return this;
}

// ~FGatherTextFromTextFilesConfiguration @ 146b447e0

void __thiscall
FGatherTextFromTextFilesConfiguration::~FGatherTextFromTextFilesConfiguration
          (FGatherTextFromTextFilesConfiguration *this)

{
  FScriptContainerElement *pFVar1;
  
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
  DestructItems<FGatherTextSearchDirectory,int>
            ((FGatherTextSearchDirectory *)(this->SearchDirectories).AllocatorInstance.Data,
             (this->SearchDirectories).ArrayNum);
  pFVar1 = (this->SearchDirectories).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 146b45560

FGatherTextFromTextFilesConfiguration * __thiscall
FGatherTextFromTextFilesConfiguration::operator=
          (FGatherTextFromTextFilesConfiguration *this,
          FGatherTextFromTextFilesConfiguration *param_1)

{
  TArray<FGatherTextSearchDirectory,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FGatherTextSearchDirectory *pFVar4;
  
  pTVar1 = &this->SearchDirectories;
  this->IsEnabled = param_1->IsEnabled;
  if (pTVar1 != &param_1->SearchDirectories) {
    DestructItems<FGatherTextSearchDirectory,int>
              ((FGatherTextSearchDirectory *)(pTVar1->AllocatorInstance).Data,
               (this->SearchDirectories).ArrayNum);
    iVar3 = (param_1->SearchDirectories).ArrayNum;
    piVar2 = &(this->SearchDirectories).ArrayMax;
    pFVar4 = (FGatherTextSearchDirectory *)(param_1->SearchDirectories).AllocatorInstance.Data;
    (this->SearchDirectories).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      ConstructItems<FGatherTextSearchDirectory,FGatherTextSearchDirectory,int>
                ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
    }
  }
  TArray<FGatherTextExcludePath,TSizedDefaultAllocator<32>_>::operator=
            (&this->ExcludePathWildcards,&param_1->ExcludePathWildcards);
  TArray<FGatherTextFileExtension,TSizedDefaultAllocator<32>_>::operator=
            (&this->FileExtensions,&param_1->FileExtensions);
  this->ShouldGatherFromEditorOnlyData = param_1->ShouldGatherFromEditorOnlyData;
  return this;
}

// operator() @ 146b48d00

/* WARNING: Removing unreachable block (ram,0x000146b48ec7) */
/* WARNING: Removing unreachable block (ram,0x000146b48df4) */
/* WARNING: Removing unreachable block (ram,0x000146b48f9a) */

TArray<FGatherTextFileExtension,TSizedDefaultAllocator<32>_> * __thiscall
`FGatherTextFromTextFilesConfiguration::GetDefaultTextFileExtensions'::__l2::<lambda_1>::operator()
          (void *this,
          TArray<FGatherTextFileExtension,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArray<FGatherTextFileExtension,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  FString local_38;
  FString local_28;
  FString local_18;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  ::FString::FString(&local_38,L"h");
  pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_38) &&
      ((FScriptContainerElement *)&local_38 <
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
  *(FScriptContainerElement **)pFVar5 = local_38.Data.AllocatorInstance.Data;
  *(int *)(pFVar5 + 8) = local_38.Data.ArrayNum;
  *(int *)(pFVar5 + 0xc) = local_38.Data.ArrayMax;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_28,L"cpp");
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
  ::FString::FString(&local_18,L"ini");
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

// operator() @ 146b4cbe0

bool __thiscall
`FGatherTextFromTextFilesConfiguration::Validate'::__l2::<lambda_2>::operator()
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
      goto LAB_146b4cc79;
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
LAB_146b4cc79:
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return bVar3;
}

// GetDefaultTextFileExtensions @ 146b72ff0

TArray<FGatherTextFileExtension,TSizedDefaultAllocator<32>_> * __cdecl
FGatherTextFromTextFilesConfiguration::GetDefaultTextFileExtensions(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `FGatherTextFromTextFilesConfiguration::GetDefaultTextFileExtensions'::__l2::<lambda_1>::
      operator()(local_res8,&DefaultTextFileExtensions);
      atexit(`FGatherTextFromTextFilesConfiguration::GetDefaultTextFileExtensions'::__l2::
             _dynamic_atexit_destructor_for__DefaultTextFileExtensions__);
      _Init_thread_footer(&::_TSS0);
      return &DefaultTextFileExtensions;
    }
  }
  return &DefaultTextFileExtensions;
}

// Validate @ 146b91070

bool __thiscall
FGatherTextFromTextFilesConfiguration::Validate
          (FGatherTextFromTextFilesConfiguration *this,bool param_1,FText *param_2)

{
  FGatherTextExcludePath *pFVar1;
  bool bVar2;
  FGatherTextSearchDirectory *pFVar3;
  FGatherTextFileExtension *pFVar4;
  FText *pFVar5;
  FGatherTextExcludePath *pFVar6;
  undefined1 local_res10 [8];
  FText local_28;
  
  if ((0 < (this->SearchDirectories).ArrayNum) &&
     (pFVar3 = TArray<FGatherTextSearchDirectory,TSizedDefaultAllocator<32>_>::
               FindByPredicate<_FGatherTextFromTextFilesConfiguration::Validate_::__l2::<lambda_1>_>
                         (&this->SearchDirectories,(<lambda_1>)param_1),
     pFVar3 == (FGatherTextSearchDirectory *)0x0)) {
    pFVar6 = (FGatherTextExcludePath *)(this->ExcludePathWildcards).AllocatorInstance.Data;
    pFVar1 = pFVar6 + (this->ExcludePathWildcards).ArrayNum;
    local_res10[0] = param_1;
    for (; pFVar6 != pFVar1; pFVar6 = pFVar6 + 1) {
      bVar2 = `FGatherTextFromTextFilesConfiguration::Validate'::__l2::<lambda_2>::operator()
                        (local_res10,pFVar6);
      if (bVar2) {
        if (pFVar6 != (FGatherTextExcludePath *)0x0) goto LAB_146b910fd;
        break;
      }
    }
    if ((0 < (this->FileExtensions).ArrayNum) &&
       (pFVar4 = TArray<FGatherTextFileExtension,TSizedDefaultAllocator<32>_>::
                 FindByPredicate<_FGatherTextFromTextFilesConfiguration::Validate_::__l2::<lambda_3>_>
                           (&this->FileExtensions,(<lambda_3>)param_1),
       pFVar4 == (FGatherTextFileExtension *)0x0)) {
      return true;
    }
  }
LAB_146b910fd:
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_28,L"LocalizationTargetTypes",
                      L"InvalidGatherTextFromFilesConfigurationError",
                      L"Must have at least one search directory, one file extension, and no invalid settings."
                     );
  FText::operator=(param_2,pFVar5);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return false;
}

