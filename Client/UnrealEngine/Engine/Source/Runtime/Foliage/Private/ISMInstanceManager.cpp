// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 8

// ~ISMInstanceManager @ 145eda250

void __thiscall ISMInstanceManager::~ISMInstanceManager(ISMInstanceManager *this)

{
  *this = (ISMInstanceManager)&___7ISMInstanceManager__6B_;
  return;
}

// CanDeleteSMInstance @ 145edf260

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
ISMInstanceManager::CanDeleteSMInstance(ISMInstanceManager *this,FSMInstanceId *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000145edf263. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this + 0x20))();
  return (bool)uVar1;
}

// CanDuplicateSMInstance @ 145edf280

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
ISMInstanceManager::CanDuplicateSMInstance(ISMInstanceManager *this,FSMInstanceId *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000145edf283. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this + 0x20))();
  return (bool)uVar1;
}

// ForEachSMInstanceInSelectionGroup @ 145ee2bc0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
ISMInstanceManager::ForEachSMInstanceInSelectionGroup
          (ISMInstanceManager *this,FSMInstanceId *param_1,
          TFunctionRef<bool___cdecl(FSMInstanceId)> *param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)&param_1->ISMComponent;
  uStack_14 = *(undefined4 *)((longlong)&param_1->ISMComponent + 4);
  iStack_10 = param_1->InstanceIndex;
  uStack_c = *(undefined4 *)&param_1->field_0xc;
  (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_18);
  return;
}

// GetSMInstanceDisplayName @ 145ee5df0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FText * __thiscall
ISMInstanceManager::GetSMInstanceDisplayName
          (ISMInstanceManager *this,FText *__return_storage_ptr__,FSMInstanceId *param_1)

{
  FText::FText(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetSMInstanceEditingProxyClass @ 145ee5e10

TSubclassOf<USMInstanceProxyEditingObject> __thiscall
ISMInstanceManager::GetSMInstanceEditingProxyClass(ISMInstanceManager *this)

{
  TObjectPtr<UClass> in_RDX;
  
  *(undefined8 *)in_RDX.field0_0x0 = 0;
  return (TSubclassOf<USMInstanceProxyEditingObject>)in_RDX.field0_0x0;
}

// GetSMInstanceTooltip @ 145ee5e40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FText * __thiscall
ISMInstanceManager::GetSMInstanceTooltip
          (ISMInstanceManager *this,FText *__return_storage_ptr__,FSMInstanceId *param_1)

{
  FText::FText(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// _getUObject @ 145eef330

UObject * __thiscall ISMInstanceManager::_getUObject(ISMInstanceManager *this)

{
  return (UObject *)0x0;
}

