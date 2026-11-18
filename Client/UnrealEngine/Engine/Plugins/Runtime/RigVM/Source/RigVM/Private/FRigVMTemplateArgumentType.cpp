// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 5

// StaticStruct @ 14a0ae230

UScriptStruct * __cdecl FRigVMTemplateArgumentType::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMTemplateArgumentType.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMTemplateArgumentType.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMTemplateArgumentType,(UObject *)pUVar1,
                         L"RigVMTemplateArgumentType");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMTemplateArgumentType.OuterSingleton;
}

// FRigVMTemplateArgumentType @ 14a0c1e10

FRigVMTemplateArgumentType * __thiscall
FRigVMTemplateArgumentType::FRigVMTemplateArgumentType
          (FRigVMTemplateArgumentType *this,FName *param_1,UObject *param_2)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FName local_res8 [4];
  FString local_28;
  FString local_18;
  
  this->CPPType = *param_1;
  (this->CPPTypeObject).field0_0x0.DebugPtr = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_2);
  }
  ::FName::ToString(&this->CPPType,&local_28);
  pFVar1 = RigVMTypeUtils::PostProcessCPPType
                     (&local_18,&local_28,(this->CPPTypeObject).field0_0x0.DebugPtr,
                      (FRigVMUserDefinedTypeResolver *)0x0);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  ::FName::FName(local_res8,pwVar2);
  this->CPPType = local_res8[0];
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return this;
}

// FRigVMTemplateArgumentType @ 14a0c1eb0

FRigVMTemplateArgumentType * __thiscall
FRigVMTemplateArgumentType::FRigVMTemplateArgumentType(FRigVMTemplateArgumentType *this)

{
  FLazyName *this_00;
  UScriptStruct *pUVar1;
  FName local_res8;
  
  (this->CPPType).ComparisonIndex = 0;
  (this->CPPType).Number = 0;
  (this->CPPTypeObject).field0_0x0.DebugPtr = (UObject *)0x0;
  this_00 = RigVMTypeUtils::GetWildCardCPPTypeName();
  FLazyName::Resolve(this_00);
  this->CPPType = local_res8;
  pUVar1 = RigVMTypeUtils::GetWildCardCPPTypeObject();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->CPPTypeObject).field0_0x0.DebugPtr = (UObject *)pUVar1;
  return this;
}

// ConvertToArray @ 14a0d18b0

FRigVMTemplateArgumentType * __thiscall
FRigVMTemplateArgumentType::ConvertToArray(FRigVMTemplateArgumentType *this)

{
  FString *pFVar1;
  ForAnyElementType FVar2;
  FName local_res8 [4];
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar1 = ::FName::ToString(&this->CPPType,&local_18);
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  RigVMStringUtils::JoinStrings(&local_28,&local_38,pFVar1,L"TArray<",(wchar_t *)0x0,L">");
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar2.Data = local_28.Data.AllocatorInstance.Data;
  }
  ::FName::FName(local_res8,(wchar_t *)FVar2.Data);
  this->CPPType = local_res8[0];
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// Serialize_NoLock @ 14a110bb0

void __thiscall
FRigVMTemplateArgumentType::Serialize_NoLock(FRigVMTemplateArgumentType *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,this);
                    /* WARNING: Could not recover jumptable at 0x00014a110be3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->CPPTypeObject);
  return;
}

