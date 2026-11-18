// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 3

// FLoadedFunction @ 14a73f390

FLoadedFunction * __thiscall
FMVVMCompiledBindingLibrary::FLoadedFunction::FLoadedFunction
          (FLoadedFunction *this,UFunction *param_1)

{
  undefined4 uVar1;
  UClass *local_res8;
  
  (this->ClassOwner).WeakPtr = (FWeakObjectPtr)0x0;
  (this->FunctionName).ComparisonIndex = 0;
  (this->FunctionName).Number = 0;
  this->bIsFunctionVirtual = false;
  if (param_1 != (UFunction *)0x0) {
    local_res8 = UField::GetOwnerClass((UField *)param_1);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
    uVar1 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    (this->FunctionName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_1->_padding_;
    (this->FunctionName).Number = uVar1;
    this->bIsFunctionVirtual = (param_1->FunctionFlags & (FUNC_Static|FUNC_Final)) == FUNC_None;
  }
  return this;
}

// GetFunction @ 14a751a80

UFunction * __thiscall
FMVVMCompiledBindingLibrary::FLoadedFunction::GetFunction(FLoadedFunction *this,UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  UFunction *pUVar3;
  UClass *this_00;
  
  if (this->bIsFunctionVirtual == false) {
    this_00 = (UClass *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    if (this_00 != (UClass *)0x0) {
      if (this->FunctionName == (FName)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!FunctionName.IsNone()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMCompiledBindingLibrary.cpp"
                           ,0x40,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pUVar3 = (UFunction *)(*pcVar1)();
          return pUVar3;
        }
      }
      pUVar3 = UClass::FindFunctionByName(this_00,this->FunctionName,IncludeSuper);
      return pUVar3;
    }
  }
  else {
    if (this->FunctionName == (FName)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!FunctionName.IsNone()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMCompiledBindingLibrary.cpp"
                         ,0x4a,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UFunction *)(*pcVar1)();
        return pUVar3;
      }
    }
    if (param_1 != (UObject *)0x0) {
      pUVar3 = UClass::FindFunctionByName
                         (*(UClass **)&param_1->field_0x10,this->FunctionName,IncludeSuper);
      return pUVar3;
    }
  }
  return (UFunction *)0x0;
}

// GetFunction @ 14a751b50

UFunction * __thiscall
FMVVMCompiledBindingLibrary::FLoadedFunction::GetFunction(FLoadedFunction *this)

{
  code *pcVar1;
  bool bVar2;
  UClass *this_00;
  UFunction *pUVar3;
  
  this_00 = (UClass *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (this_00 == (UClass *)0x0) {
    return (UFunction *)0x0;
  }
  if (this->FunctionName == (FName)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!FunctionName.IsNone()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMCompiledBindingLibrary.cpp"
                       ,0x40,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UFunction *)(*pcVar1)();
      return pUVar3;
    }
  }
  pUVar3 = UClass::FindFunctionByName(this_00,this->FunctionName,IncludeSuper);
  return pUVar3;
}

