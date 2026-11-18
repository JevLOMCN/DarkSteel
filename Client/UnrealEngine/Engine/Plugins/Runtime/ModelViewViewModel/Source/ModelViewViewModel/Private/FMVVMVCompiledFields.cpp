// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 3

// StaticStruct @ 14a73a4b0

UScriptStruct * __cdecl FMVVMVCompiledFields::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMVVMVCompiledFields.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ModelViewViewModel();
    Z_Registration_Info_UScriptStruct_FMVVMVCompiledFields.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMVVMVCompiledFields,(UObject *)pUVar1,
                         L"MVVMVCompiledFields");
  }
  return Z_Registration_Info_UScriptStruct_FMVVMVCompiledFields.OuterSingleton;
}

// GetFunction @ 14a751bd0

UFunction * __thiscall FMVVMVCompiledFields::GetFunction(FMVVMVCompiledFields *this,FName param_1)

{
  bool bVar1;
  UClass *pUVar2;
  UFunction *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  if ((this->ClassOrScriptStruct).field0_0x0.DebugPtr == (UStruct *)0x0) {
    pFVar4 = GetTypeName<UClass>(&local_18);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar5);
  }
  pUVar2 = Z_Construct_UClass_UClass_NoRegister();
  bVar1 = FObjectPtr::IsA((FObjectPtr *)this,pUVar2);
  if ((bVar1) &&
     (pUVar2 = (UClass *)(this->ClassOrScriptStruct).field0_0x0.DebugPtr, pUVar2 != (UClass *)0x0))
  {
    pUVar3 = UClass::FindFunctionByName(pUVar2,param_1,IncludeSuper);
    return pUVar3;
  }
  pFVar4 = GetTypeName<UClass>(&local_28);
  pwVar5 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UStruct_const_>
                     (&local_18,(this->ClassOrScriptStruct).field0_0x0.DebugPtr);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar5,pwVar6);
}

// GetProperty @ 14a7542d0

FProperty * __thiscall FMVVMVCompiledFields::GetProperty(FMVVMVCompiledFields *this,FName param_1)

{
  FProperty *pFVar1;
  
  pFVar1 = PropertyAccessUtil::FindPropertyByName
                     (param_1,(this->ClassOrScriptStruct).field0_0x0.DebugPtr);
  return pFVar1;
}

