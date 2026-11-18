// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 4

// GetExecuteContextStruct @ 14a37a640

UScriptStruct * __thiscall FRigDispatchFactory::GetExecuteContextStruct(FRigDispatchFactory *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FControlRigExecuteContext,(UObject *)pUVar1,
                         L"ControlRigExecuteContext");
  }
  return Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton;
}

// RegisterDependencyTypes_NoLock @ 14a37a890

void __thiscall
FRigDispatchFactory::RegisterDependencyTypes_NoLock
          (FRigDispatchFactory *this,FRigVMRegistryHandle *param_1)

{
  code *pcVar1;
  FRigVMRegistry_NoLock *pFVar2;
  UScriptStruct *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  undefined1 local_38 [16];
  FName local_28;
  UScriptStruct *local_20;
  FString local_18;
  
  pFVar2 = FRigVMRegistryHandle::operator->(param_1);
  pcVar1 = *(code **)(pFVar2->_padding_ + 0xc0);
  pUVar3 = FControlRigExecuteContext::StaticStruct();
  pFVar4 = RigVMTypeUtils::GetUniqueStructTypeName(&local_18,pUVar3);
  pwVar6 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_28,pwVar5);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  local_20 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (*pcVar1)(pFVar2,local_38,&local_28,0);
  pFVar2 = FRigVMRegistryHandle::operator->(param_1);
  pcVar1 = *(code **)(pFVar2->_padding_ + 0xc0);
  pUVar3 = FRigElementKey::StaticStruct();
  pFVar4 = RigVMTypeUtils::GetUniqueStructTypeName(&local_18,pUVar3);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_28,pwVar5);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  local_20 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (*pcVar1)(pFVar2,local_38,&local_28,0);
  pFVar2 = FRigVMRegistryHandle::operator->(param_1);
  pcVar1 = *(code **)(pFVar2->_padding_ + 0xc0);
  pUVar3 = FCachedRigElement::StaticStruct();
  pFVar4 = RigVMTypeUtils::GetUniqueStructTypeName(&local_18,pUVar3);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_28,pwVar6);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  local_20 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (*pcVar1)(pFVar2,local_38,&local_28,0);
  return;
}

// StaticStruct @ 14a478c70

UScriptStruct * __cdecl FRigDispatchFactory::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigDispatchFactory.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigDispatchFactory.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigDispatchFactory,(UObject *)pUVar1,
                         L"RigDispatchFactory");
  }
  return Z_Registration_Info_UScriptStruct_FRigDispatchFactory.OuterSingleton;
}

// operator= @ 14a519be0

FRigDispatchFactory * __thiscall
FRigDispatchFactory::operator=(FRigDispatchFactory *this,FRigDispatchFactory *param_1)

{
  *(undefined4 *)&this->field_0x8 = *(undefined4 *)&param_1->field_0x8;
  *(undefined8 *)&this->field_0xc = *(undefined8 *)&param_1->field_0xc;
  ::FString::operator=((FString *)&this->field_0x18,(FString *)&param_1->field_0x18);
  *(undefined8 *)&this->field_0x28 = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&this->field_0x30 = *(undefined8 *)&param_1->field_0x30;
  *(undefined8 *)&this->field_0x38 = *(undefined8 *)&param_1->field_0x38;
  if (&this->field_0x40 != &param_1->field_0x40) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&this->field_0x78,(int *)&this->field_0x88,
               (ForElementType<FSetElementId> *)&param_1->field_0x78,*(int *)&param_1->field_0x88);
    TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<TArray<FName,TSizedDefaultAllocator<32>_>,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<TArray<FName,TSizedDefaultAllocator<32>_>,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&this->field_0x40,
                (TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<TArray<FName,TSizedDefaultAllocator<32>_>,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->field_0x40);
  }
  *(undefined8 *)&this->field_0x90 = *(undefined8 *)&param_1->field_0x90;
  TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)&this->field_0x98,
             (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)&param_1->field_0x98)
  ;
  return this;
}

