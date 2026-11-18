// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 2

// operator<UObject_*,FNavigationInvoker>_TTuple<UObject_*,FNavigationInvoker> @ 146d64db0

TTuple<UObject_*,FNavigationInvoker> * __thiscall
TKeyInitializer<UObject_*_&&>::
operator<UObject_*,FNavigationInvoker>_TTuple<UObject_*,FNavigationInvoker>
          (TKeyInitializer<UObject_*_&&> *this,
          TTuple<UObject_*,FNavigationInvoker> *__return_storage_ptr__)

{
  undefined8 local_res8;
  FWeakObjectPtr local_38;
  FWeakObjectPtr FStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  FNavAgentSelector_u_0 local_18;
  undefined4 uStack_14;
  
  local_38.ObjectIndex = 0;
  local_38.ObjectSerialNumber = 0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&local_38,(FObjectPtr)&local_res8);
  FStack_30.ObjectIndex = 0;
  FStack_30.ObjectSerialNumber = 0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&FStack_30,(FObjectPtr)&local_res8);
  local_28 = 0;
  uStack_20 = 0;
  FNavAgentSelector::FNavAgentSelector((FNavAgentSelector *)&local_18._s_0,0x7fffffff);
  uStack_14 = CONCAT31(uStack_14._1_3_,3);
  *(UObject **)__return_storage_ptr__ = *this->Key;
  *(int *)&__return_storage_ptr__->field_0x8 = local_38.ObjectIndex;
  *(int *)&__return_storage_ptr__->field_0xc = local_38.ObjectSerialNumber;
  *(int *)&__return_storage_ptr__->field_0x10 = FStack_30.ObjectIndex;
  *(int *)&__return_storage_ptr__->field_0x14 = FStack_30.ObjectSerialNumber;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = local_28;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = uStack_20;
  *(ulonglong *)&__return_storage_ptr__->field_0x28 =
       CONCAT44(uStack_14,local_18.PackedBits) | 0x80000000;
  return __return_storage_ptr__;
}

// operator<UObject_*,FNavigationInvoker>_TTuple<UObject_*,FNavigationInvoker> @ 146d64e60

TTuple<UObject_*,FNavigationInvoker> * __thiscall
TKeyInitializer<UObject_*_const_&>::
operator<UObject_*,FNavigationInvoker>_TTuple<UObject_*,FNavigationInvoker>
          (TKeyInitializer<UObject_*_const_&> *this,
          TTuple<UObject_*,FNavigationInvoker> *__return_storage_ptr__)

{
  undefined8 local_res8;
  FWeakObjectPtr local_38;
  FWeakObjectPtr FStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  FNavAgentSelector_u_0 local_18;
  undefined4 uStack_14;
  
  local_38.ObjectIndex = 0;
  local_38.ObjectSerialNumber = 0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&local_38,(FObjectPtr)&local_res8);
  FStack_30.ObjectIndex = 0;
  FStack_30.ObjectSerialNumber = 0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&FStack_30,(FObjectPtr)&local_res8);
  local_28 = 0;
  uStack_20 = 0;
  FNavAgentSelector::FNavAgentSelector((FNavAgentSelector *)&local_18._s_0,0x7fffffff);
  uStack_14 = CONCAT31(uStack_14._1_3_,3);
  *(UObject **)__return_storage_ptr__ = *this->Key;
  *(int *)&__return_storage_ptr__->field_0x8 = local_38.ObjectIndex;
  *(int *)&__return_storage_ptr__->field_0xc = local_38.ObjectSerialNumber;
  *(int *)&__return_storage_ptr__->field_0x10 = FStack_30.ObjectIndex;
  *(int *)&__return_storage_ptr__->field_0x14 = FStack_30.ObjectSerialNumber;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = local_28;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = uStack_20;
  *(ulonglong *)&__return_storage_ptr__->field_0x28 =
       CONCAT44(uStack_14,local_18.PackedBits) | 0x80000000;
  return __return_storage_ptr__;
}

