// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 2

// ForEachField @ 14a785ed0

void __thiscall
UCommonButtonBase::FFieldNotificationClassDescriptor::ForEachField
          (FFieldNotificationClassDescriptor *this,UClass *param_1,
          TFunctionRef<bool___cdecl(UE::FieldNotification::FFieldId)> *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  TFunctionRef<bool___cdecl(UE::FieldNotification::FFieldId)> local_18;
  
  puVar2 = (undefined8 *)&AllFields;
  do {
    local_18._0_8_ = *(undefined8 *)*puVar2;
    local_18._8_4_ = *(undefined4 *)((undefined8 *)*puVar2 + 1);
    cVar1 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_18);
    if (cVar1 == '\0') {
      return;
    }
    puVar2 = puVar2 + 1;
  } while ((longlong)puVar2 < 0x154cb2470);
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  UWidget::FFieldNotificationClassDescriptor::ForEachField
            ((FFieldNotificationClassDescriptor *)this,param_1,&local_18);
  return;
}

// GetDescriptor @ 14a7e1b30

IClassDescriptor * __cdecl UCommonButtonBase::FFieldNotificationClassDescriptor::GetDescriptor(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UCommonButtonBase::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

