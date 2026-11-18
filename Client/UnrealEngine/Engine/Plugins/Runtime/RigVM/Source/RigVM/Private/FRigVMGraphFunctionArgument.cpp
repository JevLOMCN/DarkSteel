// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a0ad860

UScriptStruct * __cdecl FRigVMGraphFunctionArgument::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMGraphFunctionArgument.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMGraphFunctionArgument.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMGraphFunctionArgument,(UObject *)pUVar1,
                         L"RigVMGraphFunctionArgument");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMGraphFunctionArgument.OuterSingleton;
}

// FRigVMGraphFunctionArgument @ 14a0bd490

FRigVMGraphFunctionArgument * __thiscall
FRigVMGraphFunctionArgument::FRigVMGraphFunctionArgument(FRigVMGraphFunctionArgument *this)

{
  undefined1 *this_00;
  undefined8 local_res8;
  
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  (this->DisplayName).ComparisonIndex = 0;
  (this->DisplayName).Number = 0;
  (this->CPPType).ComparisonIndex = 0;
  (this->CPPType).Number = 0;
  this_00 = &(this->CPPTypeObject).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->CPPTypeObject).SoftObjectPtr = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->CPPTypeObject).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->CPPTypeObject).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->CPPTypeObject).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  local_res8 = 0;
  FSoftObjectPtr::operator=(&(this->CPPTypeObject).SoftObjectPtr,(FObjectPtr)&local_res8);
  this->bIsArray = false;
  this->Direction = Input;
  (this->DefaultValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultValue).Data.ArrayNum = 0;
  (this->DefaultValue).Data.ArrayMax = 0;
  this->bIsConst = false;
  *(undefined8 *)&this->PathToTooltip = 0;
  *(undefined8 *)&(this->PathToTooltip).field_0x8 = 0;
  *(undefined8 *)&(this->PathToTooltip).field_0x20 = 0;
  *(undefined4 *)&(this->PathToTooltip).field_0x28 = 0;
  *(undefined4 *)&(this->PathToTooltip).field_0x2c = 0x80;
  *(undefined4 *)&(this->PathToTooltip).field_0x34 = 0;
  *(undefined4 *)&(this->PathToTooltip).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PathToTooltip).field_0x40 = 0;
  *(undefined4 *)&(this->PathToTooltip).field_0x48 = 0;
  return this;
}

// GetExternalVariable @ 14a0e4e80

FRigVMExternalVariable * __thiscall
FRigVMGraphFunctionArgument::GetExternalVariable
          (FRigVMGraphFunctionArgument *this,FRigVMExternalVariable *__return_storage_ptr__)

{
  TSoftObjectPtr<UObject> *this_00;
  UObject *pUVar1;
  
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  this_00 = &this->CPPTypeObject;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->Memory = (uchar *)0x0;
  __return_storage_ptr__->_padding_ = (longlong)this->Name;
  *(bool *)&__return_storage_ptr__->_padding_ = this->bIsArray;
  __return_storage_ptr__->_padding_ = (longlong)this->CPPType;
  pUVar1 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar1 == (UObject *)0x0) {
    pUVar1 = TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
    if ((pUVar1 == (UObject *)0x0) &&
       (*(longlong *)&(this->CPPTypeObject).SoftObjectPtr.field_0x8 != 0)) {
      FSoftObjectPath::TryLoad
                ((FSoftObjectPath *)&(this->CPPTypeObject).SoftObjectPtr.field_0x8,
                 (FUObjectSerializeContext *)0x0);
      TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
    }
  }
  pUVar1 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar1 != (UObject *)0x0) {
    pUVar1 = TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
    __return_storage_ptr__->_padding_ = (longlong)pUVar1;
  }
  return __return_storage_ptr__;
}

// IsCPPTypeObjectValid @ 14a0f8f50

bool __thiscall FRigVMGraphFunctionArgument::IsCPPTypeObjectValid(FRigVMGraphFunctionArgument *this)

{
  TSoftObjectPtr<UObject> *this_00;
  UObject *pUVar1;
  
  this_00 = &this->CPPTypeObject;
  pUVar1 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar1 == (UObject *)0x0) {
    pUVar1 = TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
    if ((pUVar1 == (UObject *)0x0) &&
       (*(longlong *)&(this->CPPTypeObject).SoftObjectPtr.field_0x8 != 0)) {
      FSoftObjectPath::TryLoad
                ((FSoftObjectPath *)&(this->CPPTypeObject).SoftObjectPtr.field_0x8,
                 (FUObjectSerializeContext *)0x0);
      TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
    }
  }
  pUVar1 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  return pUVar1 != (UObject *)0x0;
}

// IsExecuteContext @ 14a0f9270

bool __thiscall FRigVMGraphFunctionArgument::IsExecuteContext(FRigVMGraphFunctionArgument *this)

{
  TSoftObjectPtr<UObject> *this_00;
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UScriptStruct *pUVar4;
  
  this_00 = &this->CPPTypeObject;
  pUVar2 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar2 == (UObject *)0x0) {
    pUVar2 = TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
    if ((pUVar2 == (UObject *)0x0) &&
       (*(longlong *)&(this->CPPTypeObject).SoftObjectPtr.field_0x8 != 0)) {
      FSoftObjectPath::TryLoad
                ((FSoftObjectPath *)&(this->CPPTypeObject).SoftObjectPtr.field_0x8,
                 (FUObjectSerializeContext *)0x0);
      TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
    }
  }
  pUVar2 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar2 != (UObject *)0x0) {
    pUVar2 = TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
    if (pUVar2 != (UObject *)0x0) {
      pUVar3 = Z_Construct_UClass_UScriptStruct_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        pUVar4 = FRigVMExecutePin::StaticStruct();
        if (pUVar4 != (UScriptStruct *)0x0) {
          iVar1 = (int)pUVar4->_padding_;
          if ((iVar1 <= *(int *)&pUVar2[1].field_0x10) &&
             ((longlong *)*(undefined1 **)(*(longlong *)&pUVar2[1].field_0x8 + (longlong)iVar1 * 8)
              == &pUVar4->_padding_)) {
            return true;
          }
          return false;
        }
      }
    }
  }
  return false;
}

// IsValid @ 14a0f9ef0

bool __thiscall FRigVMGraphFunctionArgument::IsValid(FRigVMGraphFunctionArgument *this)

{
  TSoftObjectPtr<UObject> *this_00;
  UObject *pUVar1;
  
  if (this->CPPType == (FName)0x0) {
    this_00 = &this->CPPTypeObject;
    pUVar1 = TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
    if (pUVar1 == (UObject *)0x0) {
      pUVar1 = TPersistentObjectPtr<FSoftObjectPath>::Get
                         ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
      if ((pUVar1 == (UObject *)0x0) &&
         (*(longlong *)&(this->CPPTypeObject).SoftObjectPtr.field_0x8 != 0)) {
        FSoftObjectPath::TryLoad
                  ((FSoftObjectPath *)&(this->CPPTypeObject).SoftObjectPtr.field_0x8,
                   (FUObjectSerializeContext *)0x0);
        TPersistentObjectPtr<FSoftObjectPath>::Get((TPersistentObjectPtr<FSoftObjectPath> *)this_00)
        ;
      }
    }
    pUVar1 = TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
    if (pUVar1 == (UObject *)0x0) {
      return false;
    }
  }
  return true;
}

