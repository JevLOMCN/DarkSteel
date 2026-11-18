// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 4

// Apply @ 1496d72a0

void __thiscall FToolChangeWrapperChange::Apply(FToolChangeWrapperChange *this,UObject *param_1)

{
  FToolCommandChange *pFVar1;
  
  pFVar1 = (this->ToolChange).Ptr;
  if (pFVar1 != (FToolCommandChange *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001496d72ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pFVar1 + 0x10))();
    return;
  }
  return;
}

// HasExpired @ 1496deae0

bool __thiscall
FToolChangeWrapperChange::HasExpired(FToolChangeWrapperChange *this,UObject *param_1)

{
  FToolCommandChange *pFVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  UObject *pUVar5;
  UObject *pUVar6;
  
  if (((((this->ToolChange).Ptr != (FToolCommandChange *)0x0) &&
       (bVar3 = FWeakObjectPtr::IsValid(&(this->ToolManager).WeakPtr), bVar3)) &&
      (bVar3 = FWeakObjectPtr::IsValid(&(this->ActiveTool).WeakPtr), bVar3)) &&
     (pFVar1 = (this->ToolChange).Ptr,
     cVar4 = (**(code **)((longlong)*pFVar1 + 0x20))(pFVar1,param_1), cVar4 == '\0')) {
    pUVar5 = FWeakObjectPtr::Get(&(this->ToolManager).WeakPtr);
    pcVar2 = *(code **)(*(longlong *)pUVar5 + 800);
    pUVar6 = FWeakObjectPtr::Get(&(this->ActiveTool).WeakPtr);
    pUVar5 = (UObject *)(*pcVar2)(pUVar5,1);
    return pUVar5 != pUVar6;
  }
  return true;
}

// Revert @ 1496e5670

void __thiscall FToolChangeWrapperChange::Revert(FToolChangeWrapperChange *this,UObject *param_1)

{
  FToolCommandChange *pFVar1;
  
  pFVar1 = (this->ToolChange).Ptr;
  if (pFVar1 != (FToolCommandChange *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001496e567c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pFVar1 + 0x18))();
    return;
  }
  return;
}

// ToString @ 1496e6bd0

FString * __thiscall
FToolChangeWrapperChange::ToString(FToolChangeWrapperChange *this,FString *__return_storage_ptr__)

{
  FToolCommandChange *pFVar1;
  
  pFVar1 = (this->ToolChange).Ptr;
  if (pFVar1 != (FToolCommandChange *)0x0) {
    (**(code **)((longlong)*pFVar1 + 0x30))();
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

