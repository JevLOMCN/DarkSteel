// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 4

// operator() @ 142552de0

bool __thiscall
`FSlateIconFinder::FindIcon'::__l2::<lambda_1>::operator()(void *this,ISlateStyle *param_1)

{
  FName FVar1;
  longlong lVar2;
  FName *pFVar3;
  FSlateIcon *pFVar4;
  FSlateIcon local_28;
  
  lVar2 = (**(code **)((longlong)*param_1 + 0x58))(param_1,**(undefined8 **)this,0,0);
  if (lVar2 != 0) {
    FVar1 = **(FName **)this;
    pFVar3 = (FName *)(**(code **)((longlong)*param_1 + 8))(param_1);
    pFVar4 = FSlateIcon::FSlateIcon(&local_28,*pFVar3,FVar1,(FName)0x0,(FName)0x0);
    pFVar3 = *(FName **)((longlong)this + 8);
    FVar1 = pFVar4->StyleName;
    *pFVar3 = pFVar4->StyleSetName;
    pFVar3[1] = FVar1;
    FVar1 = pFVar4->StatusOverlayStyleName;
    pFVar3[2] = pFVar4->SmallStyleName;
    pFVar3[3] = FVar1;
    return false;
  }
  return true;
}

// FindCustomIconForClass @ 14257df60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FSlateIcon * __cdecl
FSlateIconFinder::FindCustomIconForClass
          (FSlateIcon *__return_storage_ptr__,UStruct *param_1,wchar_t *param_2,FName *param_3)

{
  ForAnyElementType FVar1;
  int iVar2;
  int iVar3;
  FName local_res10;
  FName local_88;
  FString local_80;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FSlateIcon local_50;
  
  ::FString::FString(&local_80,param_2);
  ::FString::AppendChars(&local_80,L".",1);
  iVar2 = local_80.Data.ArrayNum + -1;
  if (local_80.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  if (param_1 != (UStruct *)0x0) {
    local_58 = (FName)&local_70;
    local_60 = (FName)UE::Core::Private::Function::
                      TFunctionRefCaller<`FSlateIconFinder::FindIcon'::__l2::<lambda_1>,bool,ISlateStyle_const_&>
                      ::Call;
    do {
      local_res10 = (FName)param_1->_padding_;
      ::FName::AppendString(&local_res10,&local_80);
      FVar1.Data = (FScriptContainerElement *)L"";
      if (local_80.Data.ArrayNum != 0) {
        FVar1.Data = local_80.Data.AllocatorInstance.Data;
      }
      ::FName::FName(&local_88,(wchar_t *)FVar1.Data);
      FSlateIcon::FSlateIcon(&local_50);
      local_70 = (FName)&local_88;
      local_68 = (FName)&local_50;
      FSlateStyleRegistry::IterateAllStyles
                ((TFunctionRef<bool___cdecl(ISlateStyle_const_&)> *)&local_60);
      if ((local_50.StyleSetName != (FName)0x0) && (local_50.StyleName != (FName)0x0)) {
        __return_storage_ptr__->StyleSetName = local_50.StyleSetName;
        __return_storage_ptr__->StyleName = local_50.StyleName;
        __return_storage_ptr__->SmallStyleName = local_50.SmallStyleName;
        __return_storage_ptr__->StatusOverlayStyleName = local_50.StatusOverlayStyleName;
        goto LAB_14257e0d8;
      }
      param_1 = (param_1->SuperStruct).field0_0x0.DebugPtr;
      iVar3 = local_80.Data.ArrayNum + -1;
      if (local_80.Data.ArrayNum == 0) {
        iVar3 = 0;
      }
      ::FString::RemoveAt(&local_80,iVar2,iVar3 - iVar2,No);
    } while (param_1 != (UStruct *)0x0);
  }
  if (*param_3 == (FName)0x0) {
    ::FString::AppendChars(&local_80,L"Default",7);
    FVar1.Data = (FScriptContainerElement *)L"";
    if (local_80.Data.ArrayNum != 0) {
      FVar1.Data = local_80.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res10,(wchar_t *)FVar1.Data);
    FSlateIcon::FSlateIcon(__return_storage_ptr__);
    local_60 = (FName)&local_res10;
  }
  else {
    FSlateIcon::FSlateIcon(__return_storage_ptr__);
    local_60 = (FName)param_3;
  }
  local_68 = (FName)&local_60;
  local_70 = (FName)UE::Core::Private::Function::
                    TFunctionRefCaller<`FSlateIconFinder::FindIcon'::__l2::<lambda_1>,bool,ISlateStyle_const_&>
                    ::Call;
  local_58 = (FName)__return_storage_ptr__;
  FSlateStyleRegistry::IterateAllStyles
            ((TFunctionRef<bool___cdecl(ISlateStyle_const_&)> *)&local_70);
LAB_14257e0d8:
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FindIcon @ 14257e110

FSlateIcon * __cdecl FSlateIconFinder::FindIcon(FSlateIcon *__return_storage_ptr__,FName *param_1)

{
  FName *local_28;
  FSlateIcon *local_20;
  code *local_18;
  FName **local_10;
  
  FSlateIcon::FSlateIcon(__return_storage_ptr__);
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FSlateIconFinder::FindIcon'::__l2::<lambda_1>,bool,ISlateStyle_const_&>
             ::Call;
  local_28 = param_1;
  local_20 = __return_storage_ptr__;
  FSlateStyleRegistry::IterateAllStyles
            ((TFunctionRef<bool___cdecl(ISlateStyle_const_&)> *)&local_18);
  return __return_storage_ptr__;
}

// FindIconForClass @ 14257e170

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FSlateIcon * __cdecl
FSlateIconFinder::FindIconForClass
          (FSlateIcon *__return_storage_ptr__,UStruct *param_1,FName *param_2)

{
  ForAnyElementType FVar1;
  int iVar2;
  int iVar3;
  FName local_res8;
  FName local_res10;
  FString local_88;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FSlateIcon local_58;
  
  ::FString::FString(&local_88,L"ClassIcon");
  ::FString::AppendChars(&local_88,L".",1);
  iVar2 = local_88.Data.ArrayNum + -1;
  if (local_88.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  if (param_1 != (UStruct *)0x0) {
    local_60 = (FName)&local_78;
    local_68 = (FName)UE::Core::Private::Function::
                      TFunctionRefCaller<`FSlateIconFinder::FindIcon'::__l2::<lambda_1>,bool,ISlateStyle_const_&>
                      ::Call;
    do {
      local_res8 = (FName)param_1->_padding_;
      ::FName::AppendString(&local_res8,&local_88);
      FVar1.Data = (FScriptContainerElement *)L"";
      if (local_88.Data.ArrayNum != 0) {
        FVar1.Data = local_88.Data.AllocatorInstance.Data;
      }
      ::FName::FName(&local_res10,(wchar_t *)FVar1.Data);
      FSlateIcon::FSlateIcon(&local_58);
      local_78 = (FName)&local_res10;
      local_70 = (FName)&local_58;
      FSlateStyleRegistry::IterateAllStyles
                ((TFunctionRef<bool___cdecl(ISlateStyle_const_&)> *)&local_68);
      if ((local_58.StyleSetName != (FName)0x0) && (local_58.StyleName != (FName)0x0)) {
        __return_storage_ptr__->StyleSetName = local_58.StyleSetName;
        __return_storage_ptr__->StyleName = local_58.StyleName;
        __return_storage_ptr__->SmallStyleName = local_58.SmallStyleName;
        __return_storage_ptr__->StatusOverlayStyleName = local_58.StatusOverlayStyleName;
        goto LAB_14257e2e8;
      }
      param_1 = (param_1->SuperStruct).field0_0x0.DebugPtr;
      iVar3 = local_88.Data.ArrayNum + -1;
      if (local_88.Data.ArrayNum == 0) {
        iVar3 = 0;
      }
      ::FString::RemoveAt(&local_88,iVar2,iVar3 - iVar2,No);
    } while (param_1 != (UStruct *)0x0);
  }
  if (*param_2 == (FName)0x0) {
    ::FString::AppendChars(&local_88,L"Default",7);
    FVar1.Data = (FScriptContainerElement *)L"";
    if (local_88.Data.ArrayNum != 0) {
      FVar1.Data = local_88.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar1.Data);
    FSlateIcon::FSlateIcon(__return_storage_ptr__);
    local_68 = (FName)&local_res8;
  }
  else {
    FSlateIcon::FSlateIcon(__return_storage_ptr__);
    local_68 = (FName)param_2;
  }
  local_70 = (FName)&local_68;
  local_78 = (FName)UE::Core::Private::Function::
                    TFunctionRefCaller<`FSlateIconFinder::FindIcon'::__l2::<lambda_1>,bool,ISlateStyle_const_&>
                    ::Call;
  local_60 = (FName)__return_storage_ptr__;
  FSlateStyleRegistry::IterateAllStyles
            ((TFunctionRef<bool___cdecl(ISlateStyle_const_&)> *)&local_78);
LAB_14257e2e8:
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

