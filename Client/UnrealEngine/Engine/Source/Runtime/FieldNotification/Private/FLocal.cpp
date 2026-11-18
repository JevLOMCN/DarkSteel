// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FieldNotification
// Functions: 3

// FooA @ 1441c21b0

void __thiscall
`FFieldNotificationMulticastDelegateTest::RunTest'::__l2::FLocal::FooA
          (void *this,UObject *param_1,FFieldId *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  FString local_18;
  
  *(int *)((longlong)this + 0x20) = *(int *)((longlong)this + 0x20) + 1;
  if ((*(FName *)((longlong)this + 0x2c) != (FName)0x0) &&
     (param_2->FieldName != *(FName *)((longlong)this + 0x2c))) {
    plVar1 = *(longlong **)this;
    pcVar2 = *(code **)(*plVar1 + 0x28);
    ::FString::FString(&local_18,L"The expected field A is not valid.");
    (*pcVar2)(plVar1,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// FooB @ 1441c2220

void __thiscall
`FFieldNotificationMulticastDelegateTest::RunTest'::__l2::FLocal::FooB
          (void *this,UObject *param_1,FFieldId *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  FString local_18;
  
  *(int *)((longlong)this + 0x24) = *(int *)((longlong)this + 0x24) + 1;
  if ((*(FName *)((longlong)this + 0x38) != (FName)0x0) &&
     (param_2->FieldName != *(FName *)((longlong)this + 0x38))) {
    plVar1 = *(longlong **)this;
    pcVar2 = *(code **)(*plVar1 + 0x28);
    ::FString::FString(&local_18,L"The expected field B is not valid.");
    (*pcVar2)(plVar1,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// FooC @ 1441c2290

void __thiscall
`FFieldNotificationMulticastDelegateTest::RunTest'::__l2::FLocal::FooC
          (void *this,UObject *param_1,FFieldId *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  FString local_18;
  
  *(int *)((longlong)this + 0x28) = *(int *)((longlong)this + 0x28) + 1;
  if ((*(FName *)((longlong)this + 0x44) != (FName)0x0) &&
     (param_2->FieldName != *(FName *)((longlong)this + 0x44))) {
    plVar1 = *(longlong **)this;
    pcVar2 = *(code **)(*plVar1 + 0x28);
    ::FString::FString(&local_18,L"The expected field C is not valid.");
    (*pcVar2)(plVar1,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

