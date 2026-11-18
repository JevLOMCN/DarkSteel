// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// StaticStruct @ 147499950

UScriptStruct * __cdecl FAnimNodeFunctionRef::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNodeFunctionRef.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimNodeFunctionRef.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNodeFunctionRef,(UObject *)pUVar1,
                         L"AnimNodeFunctionRef");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNodeFunctionRef.OuterSingleton;
}

// Call @ 1474c4230

void __thiscall
FAnimNodeFunctionRef::Call(FAnimNodeFunctionRef *this,UObject *param_1,void *param_2)

{
  UClass *this_00;
  longlong lVar1;
  UFunction *pUVar2;
  
  pUVar2 = (this->Function).field0_0x0.DebugPtr;
  if (pUVar2 != (UFunction *)0x0) {
    this_00 = (this->Class).field0_0x0.DebugPtr;
    if (this_00 == (UClass *)0x0) {
      lVar1 = *(longlong *)param_1;
    }
    else {
      if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(this_00);
      }
      param_1 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
      pUVar2 = (this->Function).field0_0x0.DebugPtr;
      lVar1 = *(longlong *)param_1;
    }
    (**(code **)(lVar1 + 0x260))(param_1,pUVar2,param_2);
  }
  return;
}

// Initialize @ 1474e7fa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAnimNodeFunctionRef::Initialize(FAnimNodeFunctionRef *this,UClass *param_1)

{
  FString *pFVar1;
  size_t sVar2;
  UClass *pUVar3;
  UFunction *pUVar4;
  TStringView<wchar_t> local_28;
  FString local_18;
  
  if (this->ClassName == (FName)0x0) goto LAB_1474e8099;
  pFVar1 = ::FName::ToString(&this->ClassName,&local_18);
  if ((pFVar1->Data).ArrayNum == 0) {
    local_28.DataPtr = L"";
LAB_1474e7ff4:
    sVar2 = wcslen(local_28.DataPtr);
    local_28.Size = (int)sVar2;
  }
  else {
    local_28.DataPtr = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
    local_28.Size = 0;
    if ((FScriptContainerElement *)local_28.DataPtr != (FScriptContainerElement *)0x0)
    goto LAB_1474e7ff4;
  }
  pUVar3 = Z_Construct_UClass_UClass_NoRegister();
  pUVar3 = (UClass *)StaticFindObject(pUVar3,(UObject *)0x0,&local_28,None);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (pUVar3 == (UClass *)0x0) {
    if (2 < (byte)LogAnimation._0_1_) {
      ::FName::ToString(&this->ClassName,(FString *)&local_28);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
      if ((FScriptContainerElement *)local_28.DataPtr != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.DataPtr);
      }
    }
  }
  else {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->Class).field0_0x0.DebugPtr = pUVar3;
    param_1 = pUVar3;
  }
LAB_1474e8099:
  if (this->FunctionName != (FName)0x0) {
    pUVar4 = UClass::FindFunctionByName(param_1,this->FunctionName,IncludeSuper);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UFunction *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->Function).field0_0x0.DebugPtr = pUVar4;
  }
  return;
}

// SetFromFunction @ 1474f8400

void __thiscall FAnimNodeFunctionRef::SetFromFunction(FAnimNodeFunctionRef *this,UFunction *param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  UClass *this_00;
  UClass *pUVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  FName local_res10;
  FString local_18;
  
  if (param_1 == (UFunction *)0x0) {
    (this->FunctionName).ComparisonIndex = 0;
    (this->FunctionName).Number = 0;
    (this->ClassName).ComparisonIndex = 0;
    (this->ClassName).Number = 0;
    return;
  }
  uVar3 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  (this->FunctionName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_1->_padding_;
  (this->FunctionName).Number = uVar3;
  this_00 = UField::GetOwnerClass((UField *)param_1);
  if ((this_00 == (UClass *)0x0) || ((param_1->FunctionFlags & FUNC_Static) == FUNC_None)) {
    (this->ClassName).ComparisonIndex = 0;
    (this->ClassName).Number = 0;
    return;
  }
  pUVar4 = Z_Construct_UClass_UAnimInstance_NoRegister();
  if (pUVar4 != (UClass *)0x0) {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)this_00->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(this_00->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_
       )) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_1474f84b0;
  }
  pUVar4 = Z_Construct_UClass_UBlueprintFunctionLibrary_NoRegister();
  if (pUVar4 != (UClass *)0x0) {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)this_00->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(this_00->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_
       )) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_1474f84b0;
  }
  `FAnimNodeFunctionRef::SetFromFunction'::__l8::<lambda_1>::operator()(&local_res10);
LAB_1474f84b0:
  pFVar5 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_18,(UObject *)0x0);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_res10,pwVar6);
  this->ClassName = local_res10;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 15050a6b0

bool __thiscall `FAnimNodeFunctionRef::SetFromFunction'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<4896003529048588309>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4896003529048588309>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

