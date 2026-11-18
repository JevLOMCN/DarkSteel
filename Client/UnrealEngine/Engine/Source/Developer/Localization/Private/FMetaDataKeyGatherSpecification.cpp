// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 2

// StaticStruct @ 146b38280

UScriptStruct * __cdecl FMetaDataKeyGatherSpecification::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMetaDataKeyGatherSpecification.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Localization();
    Z_Registration_Info_UScriptStruct_FMetaDataKeyGatherSpecification.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetaDataKeyGatherSpecification,(UObject *)pUVar1
                         ,L"MetaDataKeyGatherSpecification");
  }
  return Z_Registration_Info_UScriptStruct_FMetaDataKeyGatherSpecification.OuterSingleton;
}

// Validate @ 146b91780

bool __thiscall
FMetaDataKeyGatherSpecification::Validate
          (FMetaDataKeyGatherSpecification *this,bool param_1,FText *param_2)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  FText *pFVar4;
  ForAnyElementType FVar5;
  FScriptContainerElement *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  undefined1 local_res8 [8];
  FText local_38;
  
  if ((this->MetaDataKey).Name.Data.ArrayNum < 2) {
    pwVar8 = L"Meta data key not specified.";
    pwVar7 = L"MetaDataKeyNameEmptyError";
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      `FMetaDataTextKeyPattern::GetPossiblePlaceHolders'::__l2::<lambda_1>::operator()
                (local_res8,&PossiblePlaceHolders);
      atexit(`FMetaDataTextKeyPattern::GetPossiblePlaceHolders'::__l2::
             _dynamic_atexit_destructor_for__PossiblePlaceHolders__);
      _Init_thread_footer(&::_TSS0);
    }
    iVar1 = PossiblePlaceHolders.ArrayNum;
    pFVar6 = PossiblePlaceHolders.AllocatorInstance.Data +
             (longlong)PossiblePlaceHolders.ArrayNum * 0x10;
    FVar5.Data = PossiblePlaceHolders.AllocatorInstance.Data;
    while( true ) {
      if (PossiblePlaceHolders.ArrayNum != iVar1) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (FVar5.Data == pFVar6) break;
      if (*(int *)(FVar5.Data + 8) == 0) {
        pwVar7 = L"";
LAB_146b91826:
        sVar3 = wcslen(pwVar7);
        iVar2 = ::FString::Find(&(this->TextKeyPattern).Pattern,pwVar7,(int)sVar3,IgnoreCase,
                                FromStart,-1);
        if (iVar2 != -1) {
          return true;
        }
      }
      else {
        pwVar7 = *(wchar_t **)FVar5.Data;
        if (pwVar7 != (wchar_t *)0x0) goto LAB_146b91826;
      }
      FVar5.Data = FVar5.Data + 0x10;
    }
    pwVar8 = L"No place holders used. All generated keys will conflict!";
    pwVar7 = L"NoMetaDataLocalizationKeyPlaceHolderError";
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText(&local_38,L"LocalizationTargetTypes",pwVar7,pwVar8)
  ;
  FText::operator=(param_2,pFVar4);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return false;
}

