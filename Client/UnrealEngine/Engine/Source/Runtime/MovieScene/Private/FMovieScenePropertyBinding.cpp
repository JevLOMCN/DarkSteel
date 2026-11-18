// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 3

// StaticStruct @ 1461e64b0

UScriptStruct * __cdecl FMovieScenePropertyBinding::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieScenePropertyBinding.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieScenePropertyBinding.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieScenePropertyBinding,(UObject *)pUVar1,
                         L"MovieScenePropertyBinding");
  }
  return Z_Registration_Info_UScriptStruct_FMovieScenePropertyBinding.OuterSingleton;
}

// FMovieScenePropertyBinding @ 1461fc860

FMovieScenePropertyBinding * __thiscall
FMovieScenePropertyBinding::FMovieScenePropertyBinding
          (FMovieScenePropertyBinding *this,FName param_1,FString *param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  
  this->PropertyName = param_1;
  if ((param_2->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&this->PropertyPath,pwVar2);
  iVar1 = ::FString::Find(param_2,L"/",1,IgnoreCase,FromStart,-1);
  if (iVar1 == -1) {
    iVar1 = ::FString::Find(param_2,L"\\",1,IgnoreCase,FromStart,-1);
    if (iVar1 == -1) {
      iVar1 = ::FString::Find(param_2,L"[",1,IgnoreCase,FromStart,-1);
      if (iVar1 == -1) {
        this->bCanUseClassLookup = true;
        return this;
      }
    }
  }
  this->bCanUseClassLookup = false;
  return this;
}

// FromPath @ 146215200

FMovieScenePropertyBinding * __cdecl
FMovieScenePropertyBinding::FromPath
          (FMovieScenePropertyBinding *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FName *pFVar6;
  FScriptContainerElement *pFVar7;
  wchar_t *pwVar8;
  FScriptContainerElement *pFVar9;
  FName local_res8;
  
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  iVar3 = (param_1->Data).ArrayNum;
  pFVar5 = pFVar1 + (longlong)iVar3 * 2;
  pFVar9 = pFVar5;
  pFVar7 = pFVar5;
  if (pFVar5 == pFVar1) {
LAB_146215258:
    if (pFVar5 == pFVar1) goto joined_r0x00014621528f;
  }
  else {
    do {
      pFVar9 = pFVar9 + -2;
      if (*(wchar_t *)pFVar9 == L'.') {
        iVar4 = (int)((longlong)pFVar9 - (longlong)pFVar1 >> 1);
        if (iVar4 == -1) goto LAB_146215258;
        goto LAB_14621536a;
      }
    } while (pFVar9 != pFVar1);
  }
  do {
    pFVar7 = pFVar7 + -2;
    if (*(wchar_t *)pFVar7 == L'/') {
      iVar4 = (int)((longlong)pFVar7 - (longlong)pFVar1 >> 1);
      if (iVar4 == -1) goto joined_r0x00014621528f;
      goto LAB_14621536a;
    }
  } while (pFVar7 != pFVar1);
  do {
    pFVar5 = pFVar5 + -2;
    if (*(wchar_t *)pFVar5 == L'\\') {
      iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 1);
      if (iVar4 != -1) goto LAB_14621536a;
      break;
    }
joined_r0x00014621528f:
  } while (pFVar5 != pFVar1);
  pFVar5 = (FScriptContainerElement *)L"";
  if (iVar3 != 0) {
    pFVar5 = pFVar1;
  }
  ::FName::FName(&local_res8,(wchar_t *)pFVar5);
LAB_1462152c4:
  pwVar8 = L"";
  __return_storage_ptr__->PropertyName = local_res8;
  if ((param_1->Data).ArrayNum != 0) {
    pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&__return_storage_ptr__->PropertyPath,pwVar8);
  iVar3 = ::FString::Find(param_1,L"/",1,IgnoreCase,FromStart,-1);
  if (((iVar3 == -1) &&
      (iVar3 = ::FString::Find(param_1,L"\\",1,IgnoreCase,FromStart,-1), iVar3 == -1)) &&
     (iVar3 = ::FString::Find(param_1,L"[",1,IgnoreCase,FromStart,-1), iVar3 == -1)) {
    __return_storage_ptr__->bCanUseClassLookup = true;
  }
  else {
    __return_storage_ptr__->bCanUseClassLookup = false;
  }
  return __return_storage_ptr__;
LAB_14621536a:
  iVar2 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar2 = 0;
  }
  pFVar5 = (FScriptContainerElement *)L"";
  if (iVar3 != 0) {
    pFVar5 = pFVar1;
  }
  pFVar6 = ::FName::FName(&local_res8,iVar2 - iVar4,(wchar_t *)(pFVar5 + (longlong)iVar4 * 2),
                          FNAME_Add);
  local_res8 = *pFVar6;
  goto LAB_1462152c4;
}

