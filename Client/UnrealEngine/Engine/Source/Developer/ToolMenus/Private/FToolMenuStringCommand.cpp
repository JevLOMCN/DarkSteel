// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 3

// StaticStruct @ 142c2ef10

UScriptStruct * __cdecl FToolMenuStringCommand::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FToolMenuStringCommand.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ToolMenus();
    Z_Registration_Info_UScriptStruct_FToolMenuStringCommand.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FToolMenuStringCommand,(UObject *)pUVar1,
                         L"ToolMenuStringCommand");
  }
  return Z_Registration_Info_UScriptStruct_FToolMenuStringCommand.OuterSingleton;
}

// GetTypeName @ 142c60740

FName __thiscall FToolMenuStringCommand::GetTypeName(FToolMenuStringCommand *this)

{
  EToolMenuStringCommandType EVar1;
  FName FVar2;
  FName in_RDX;
  int *piVar3;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&CommandName,"Command");
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar3 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FName::FName(&PythonName,"Python");
    _Init_thread_footer(&::_TSS1);
  }
  EVar1 = this->Type;
  FVar2 = CommandName;
  if ((EVar1 != Command) && (FVar2 = PythonName, EVar1 != Python)) {
    if (EVar1 == Custom) {
      FVar2 = this->CustomType;
    }
    else {
      FVar2.ComparisonIndex.Value = 0;
      FVar2.Number = 0;
    }
  }
  *(FName *)in_RDX = FVar2;
  return in_RDX;
}

// ToExecuteAction @ 142c71110

TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __thiscall
FToolMenuStringCommand::ToExecuteAction
          (FToolMenuStringCommand *this,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          FName param_1,FToolMenuContext *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  iVar2 = (this->String).Data.ArrayNum;
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  if (iVar3 < 1) {
    *(undefined4 *)&__return_storage_ptr__->field_0x14 = 0;
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)puVar1 = 0;
    *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  }
  else {
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)puVar1 = 0;
    *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
               (FWriteAccessScope *)&local_38);
    local_20 = puVar1;
    puVar4 = UE::Core::Private::DelegateAllocate(0xa8,(FDelegateAllocation *)puVar1);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__UFToolMenuStringCommand__VFName__UFToolMenuContext____6B_
      ;
      *(EToolMenuStringCommandType *)(puVar4 + 1) = this->Type;
      *(FName *)((longlong)puVar4 + 0xc) = this->CustomType;
      ::FString::FString((FString *)(puVar4 + 3),&this->String);
      *(FName *)(puVar4 + 5) = param_1;
      FToolMenuContext::FToolMenuContext((FToolMenuContext *)(puVar4 + 6),param_2);
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[0x13] = uVar5;
      *puVar4 = &
                ___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__UFToolMenuStringCommand__VFName__UFToolMenuContext____6B_
      ;
      puVar4[0x14] = UToolMenus::ExecuteStringCommand;
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
  }
  return __return_storage_ptr__;
}

