// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// RegisterFunction @ 141f95aa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FNativeFunctionRegistrar::RegisterFunction
          (UClass *param_1,char *param_2,_func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *param_3
          )

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  FName *pFVar4;
  FName local_res18 [2];
  FString local_18;
  
  ::FName::FName(local_res18,param_2);
  bVar2 = IsReloadActive();
  if (bVar2) {
    bVar2 = UClass::ReplaceNativeFunction(param_1,local_res18[0],param_3,true);
    if (bVar2) {
      return;
    }
    if (4 < (byte)LogClass._0_1_) {
      ::FName::ToString(local_res18,&local_18);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  iVar3 = (param_1->NativeFunctionLookupTable).ArrayNum;
  piVar1 = &(param_1->NativeFunctionLookupTable).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(param_1->NativeFunctionLookupTable).AllocatorInstance,piVar1);
  }
  (param_1->NativeFunctionLookupTable).ArrayNum = iVar3 + 1;
  pFVar4 = (FName *)((param_1->NativeFunctionLookupTable).AllocatorInstance.Data +
                    (longlong)iVar3 * 0x10);
  *pFVar4 = local_res18[0];
  pFVar4[1] = (FName)param_3;
  return;
}

// RegisterFunction @ 141f95b90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FNativeFunctionRegistrar::RegisterFunction
          (UClass *param_1,wchar_t *param_2,
          _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *param_3)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  FName *pFVar4;
  FName FStackX_20;
  FString FStack_18;
  
  ::FName::FName(&FStackX_20,param_2);
  bVar2 = IsReloadActive();
  if (bVar2) {
    bVar2 = UClass::ReplaceNativeFunction(param_1,FStackX_20,param_3,true);
    if (bVar2) {
      return;
    }
    if (4 < (byte)LogClass._0_1_) {
      ::FName::ToString(&FStackX_20,&FStack_18);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
      if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
      }
    }
  }
  iVar3 = (param_1->NativeFunctionLookupTable).ArrayNum;
  piVar1 = &(param_1->NativeFunctionLookupTable).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(param_1->NativeFunctionLookupTable).AllocatorInstance,piVar1);
  }
  (param_1->NativeFunctionLookupTable).ArrayNum = iVar3 + 1;
  pFVar4 = (FName *)((param_1->NativeFunctionLookupTable).AllocatorInstance.Data +
                    (longlong)iVar3 * 0x10);
  *pFVar4 = FStackX_20;
  pFVar4[1] = (FName)param_3;
  return;
}

// RegisterFunctions @ 141f95ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FNativeFunctionRegistrar::RegisterFunctions(UClass *param_1,FNameNativePtrPair *param_2,int param_3)

{
  uint uVar1;
  uchar *_Str;
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var2;
  size_t sVar3;
  uint uVar4;
  undefined1 auStack_188 [32];
  FScriptContainerElement local_168 [256];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  
  if (param_3 != 0) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_188;
    do {
      _Str = (uchar *)param_2->NameUTF8;
      p_Var2 = param_2->Pointer;
      local_68.Data = (FScriptContainerElement *)0x0;
      if (_Str == (uchar *)0x0) {
        local_58 = 0;
        local_60 = (FScriptContainerElement *)0x0;
      }
      else {
        sVar3 = strlen((char *)_Str);
        local_58 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,_Str,(int)sVar3);
        uVar1 = local_58 + 1;
        uVar4 = uVar1;
        if (uVar1 < 0x81) {
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            uVar4 = 0;
            goto LAB_141f95c47;
          }
        }
        else {
LAB_141f95c47:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar4,2);
        }
        local_60 = local_168;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          local_60 = local_68.Data;
        }
        UE::Core::Private::Convert((wchar_t *)local_60,uVar1,_Str,(int)sVar3 + 1);
      }
      UClass::AddNativeFunction(param_1,(wchar_t *)local_60,p_Var2);
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// RegisterFunctions @ 141f95d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FNativeFunctionRegistrar::RegisterFunctions
          (UClass *param_1,TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> *param_2)

{
  uint uVar1;
  uchar *_Str;
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var2;
  size_t sVar3;
  FClassNativeFunction *pFVar4;
  FClassNativeFunction *pFVar5;
  uint uVar6;
  undefined1 auStack_188 [32];
  FScriptContainerElement local_168 [256];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_188;
  pFVar4 = param_2->DataPtr;
  pFVar5 = pFVar4 + param_2->ArrayNum;
  do {
    if (pFVar4 == pFVar5) {
      return;
    }
    _Str = pFVar4->NameUTF8;
    p_Var2 = pFVar4->Pointer;
    local_68.Data = (FScriptContainerElement *)0x0;
    if (_Str == (uchar *)0x0) {
      local_58 = 0;
      local_60 = (FScriptContainerElement *)0x0;
    }
    else {
      sVar3 = strlen((char *)_Str);
      local_58 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,_Str,(int)sVar3);
      uVar1 = local_58 + 1;
      uVar6 = uVar1;
      if (uVar1 < 0x81) {
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          uVar6 = 0;
          goto LAB_141f95dc8;
        }
      }
      else {
LAB_141f95dc8:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar6,2);
      }
      local_60 = local_168;
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        local_60 = local_68.Data;
      }
      UE::Core::Private::Convert((wchar_t *)local_60,uVar1,_Str,(int)sVar3 + 1);
    }
    UClass::AddNativeFunction(param_1,(wchar_t *)local_60,p_Var2);
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
    pFVar4 = pFVar4 + 1;
  } while( true );
}

