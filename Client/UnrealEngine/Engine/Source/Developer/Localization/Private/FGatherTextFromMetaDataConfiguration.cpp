// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 7

// StaticStruct @ 146b382c0

UScriptStruct * __cdecl FGatherTextFromMetaDataConfiguration::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGatherTextFromMetaDataConfiguration.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Localization();
    Z_Registration_Info_UScriptStruct_FGatherTextFromMetaDataConfiguration.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGatherTextFromMetaDataConfiguration,
                         (UObject *)pUVar1,L"GatherTextFromMetaDataConfiguration");
  }
  return Z_Registration_Info_UScriptStruct_FGatherTextFromMetaDataConfiguration.OuterSingleton;
}

// ~FGatherTextFromMetaDataConfiguration @ 146b44670

void __thiscall
FGatherTextFromMetaDataConfiguration::~FGatherTextFromMetaDataConfiguration
          (FGatherTextFromMetaDataConfiguration *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FString,int>
            ((FString *)(this->FieldOwnerTypesToExclude).AllocatorInstance.Data,
             (this->FieldOwnerTypesToExclude).ArrayNum);
  pFVar1 = (this->FieldOwnerTypesToExclude).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->FieldOwnerTypesToInclude).AllocatorInstance.Data,
             (this->FieldOwnerTypesToInclude).ArrayNum);
  pFVar1 = (this->FieldOwnerTypesToInclude).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->FieldTypesToExclude).AllocatorInstance.Data,
             (this->FieldTypesToExclude).ArrayNum);
  pFVar1 = (this->FieldTypesToExclude).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->FieldTypesToInclude).AllocatorInstance.Data,
             (this->FieldTypesToInclude).ArrayNum);
  pFVar1 = (this->FieldTypesToInclude).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMetaDataKeyGatherSpecification,int>
            ((FMetaDataKeyGatherSpecification *)(this->KeySpecifications).AllocatorInstance.Data,
             (this->KeySpecifications).ArrayNum);
  pFVar1 = (this->KeySpecifications).AllocatorInstance.Data;
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

// operator= @ 146b45340

FGatherTextFromMetaDataConfiguration * __thiscall
FGatherTextFromMetaDataConfiguration::operator=
          (FGatherTextFromMetaDataConfiguration *this,FGatherTextFromMetaDataConfiguration *param_1)

{
  TArray<FMetaDataKeyGatherSpecification,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FMetaDataKeyGatherSpecification *pFVar4;
  
  this->IsEnabled = param_1->IsEnabled;
  TArray<FGatherTextIncludePath,TSizedDefaultAllocator<32>_>::operator=
            (&this->IncludePathWildcards,&param_1->IncludePathWildcards);
  TArray<FGatherTextExcludePath,TSizedDefaultAllocator<32>_>::operator=
            (&this->ExcludePathWildcards,&param_1->ExcludePathWildcards);
  pTVar1 = &this->KeySpecifications;
  if (pTVar1 != &param_1->KeySpecifications) {
    DestructItems<FMetaDataKeyGatherSpecification,int>
              ((FMetaDataKeyGatherSpecification *)(pTVar1->AllocatorInstance).Data,
               (this->KeySpecifications).ArrayNum);
    iVar3 = (param_1->KeySpecifications).ArrayNum;
    piVar2 = &(this->KeySpecifications).ArrayMax;
    pFVar4 = (FMetaDataKeyGatherSpecification *)(param_1->KeySpecifications).AllocatorInstance.Data;
    (this->KeySpecifications).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      ConstructItems<FMetaDataKeyGatherSpecification,FMetaDataKeyGatherSpecification,int>
                ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
    }
  }
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            (&this->FieldTypesToInclude,&param_1->FieldTypesToInclude);
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            (&this->FieldTypesToExclude,&param_1->FieldTypesToExclude);
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            (&this->FieldOwnerTypesToInclude,&param_1->FieldOwnerTypesToInclude);
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            (&this->FieldOwnerTypesToExclude,&param_1->FieldOwnerTypesToExclude);
  this->ShouldGatherFromEditorOnlyData = param_1->ShouldGatherFromEditorOnlyData;
  return this;
}

// operator() @ 146b4b5e0

bool __thiscall
`FGatherTextFromMetaDataConfiguration::Validate'::__l2::<lambda_1>::operator()
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
      goto LAB_146b4b679;
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
LAB_146b4b679:
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return bVar3;
}

// operator() @ 146b4ca60

bool __thiscall
`FGatherTextFromMetaDataConfiguration::Validate'::__l2::<lambda_2>::operator()
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
      goto LAB_146b4caf9;
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
LAB_146b4caf9:
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return bVar3;
}

// operator() @ 146b4dc60

bool __thiscall
`FGatherTextFromMetaDataConfiguration::Validate'::__l2::<lambda_3>::operator()
          (void *this,FMetaDataKeyGatherSpecification *param_1)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  FText *pFVar4;
  bool bVar5;
  ForAnyElementType FVar6;
  FScriptContainerElement *pFVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  undefined1 local_res8 [8];
  FText local_38;
  FText local_28;
  
  FText::FText(&local_38);
  if (1 < (param_1->MetaDataKey).Name.Data.ArrayNum) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      `FMetaDataTextKeyPattern::GetPossiblePlaceHolders'::__l2::<lambda_1>::operator()
                (local_res8,&PossiblePlaceHolders);
      atexit(`FMetaDataTextKeyPattern::GetPossiblePlaceHolders'::__l2::
             _dynamic_atexit_destructor_for__PossiblePlaceHolders__);
      _Init_thread_footer(&::_TSS0);
    }
    iVar1 = PossiblePlaceHolders.ArrayNum;
    pFVar7 = PossiblePlaceHolders.AllocatorInstance.Data +
             (longlong)PossiblePlaceHolders.ArrayNum * 0x10;
    FVar6.Data = PossiblePlaceHolders.AllocatorInstance.Data;
    do {
      if (PossiblePlaceHolders.ArrayNum != iVar1) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (FVar6.Data == pFVar7) {
        pwVar9 = L"No place holders used. All generated keys will conflict!";
        pwVar8 = L"NoMetaDataLocalizationKeyPlaceHolderError";
        goto LAB_146b4dd5b;
      }
      if (*(int *)(FVar6.Data + 8) == 0) {
        pwVar8 = L"";
LAB_146b4dd15:
        sVar3 = wcslen(pwVar8);
        iVar2 = ::FString::Find(&(param_1->TextKeyPattern).Pattern,pwVar8,(int)sVar3,IgnoreCase,
                                FromStart,-1);
        if (iVar2 != -1) goto LAB_146b4dd49;
      }
      else {
        pwVar8 = *(wchar_t **)FVar6.Data;
        if (pwVar8 != (wchar_t *)0x0) goto LAB_146b4dd15;
      }
      FVar6.Data = FVar6.Data + 0x10;
    } while( true );
  }
  pwVar9 = L"Meta data key not specified.";
  pwVar8 = L"MetaDataKeyNameEmptyError";
LAB_146b4dd5b:
  pFVar4 = FText::AsLocalizable_Advanced_LocText(&local_28,L"LocalizationTargetTypes",pwVar8,pwVar9)
  ;
  FText::operator=(&local_38,pFVar4);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  bVar5 = true;
LAB_146b4dd8b:
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return bVar5;
LAB_146b4dd49:
  bVar5 = false;
  goto LAB_146b4dd8b;
}

// Validate @ 146b90e10

bool __thiscall
FGatherTextFromMetaDataConfiguration::Validate
          (FGatherTextFromMetaDataConfiguration *this,bool param_1,FText *param_2)

{
  FGatherTextIncludePath *pFVar1;
  FGatherTextExcludePath *pFVar2;
  int iVar3;
  bool bVar4;
  FText *pFVar5;
  FGatherTextIncludePath *pFVar6;
  FGatherTextExcludePath *pFVar7;
  FMetaDataKeyGatherSpecification *pFVar8;
  FMetaDataKeyGatherSpecification *pFVar9;
  undefined1 local_res10 [8];
  FText local_28;
  
  iVar3 = (this->IncludePathWildcards).ArrayNum;
  if (0 < iVar3) {
    pFVar6 = (FGatherTextIncludePath *)(this->IncludePathWildcards).AllocatorInstance.Data;
    pFVar1 = pFVar6 + iVar3;
    local_res10[0] = param_1;
    for (; pFVar6 != pFVar1; pFVar6 = pFVar6 + 1) {
      bVar4 = `FGatherTextFromMetaDataConfiguration::Validate'::__l2::<lambda_1>::operator()
                        (local_res10,pFVar6);
      if (bVar4) {
        if (pFVar6 != (FGatherTextIncludePath *)0x0) goto LAB_146b90ef9;
        break;
      }
    }
    pFVar7 = (FGatherTextExcludePath *)(this->ExcludePathWildcards).AllocatorInstance.Data;
    pFVar2 = pFVar7 + (this->ExcludePathWildcards).ArrayNum;
    local_res10[0] = param_1;
    for (; pFVar7 != pFVar2; pFVar7 = pFVar7 + 1) {
      bVar4 = `FGatherTextFromMetaDataConfiguration::Validate'::__l2::<lambda_2>::operator()
                        (local_res10,pFVar7);
      if (bVar4) {
        if (pFVar7 != (FGatherTextExcludePath *)0x0) goto LAB_146b90ef9;
        break;
      }
    }
    iVar3 = (this->KeySpecifications).ArrayNum;
    if (0 < iVar3) {
      pFVar8 = (FMetaDataKeyGatherSpecification *)(this->KeySpecifications).AllocatorInstance.Data;
      pFVar9 = pFVar8 + iVar3;
      local_res10[0] = param_1;
      if (pFVar8 != pFVar9) {
        while (bVar4 = `FGatherTextFromMetaDataConfiguration::Validate'::__l2::<lambda_3>::
                       operator()(local_res10,pFVar8), !bVar4) {
          pFVar8 = pFVar8 + 1;
          if (pFVar8 == pFVar9) {
            return true;
          }
        }
        if (pFVar8 != (FMetaDataKeyGatherSpecification *)0x0) goto LAB_146b90ef9;
      }
      return true;
    }
  }
LAB_146b90ef9:
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_28,L"LocalizationTargetTypes",
                      L"InvalidGatherTextFromMetadataConfigurationError",
                      L"Must have at least one include path, one meta data key specification, and no invalid settings."
                     );
  FText::operator=(param_2,pFVar5);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return false;
}

