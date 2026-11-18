// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// FScopedAdditionalCrashContextProvider @ 145d8e300

FScopedAdditionalCrashContextProvider * __thiscall
FScopedAdditionalCrashContextProvider::FScopedAdditionalCrashContextProvider
          (FScopedAdditionalCrashContextProvider *this,
          TUniqueFunction<void___cdecl(FCrashContextExtendedWriter_&)> *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  *(undefined8 *)&this->Func = *(undefined8 *)param_1;
  *(undefined8 *)&(this->Func).field_0x28 = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&param_1->field_0x28 = 0;
  uVar1 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)&(this->Func).field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&(this->Func).field_0x18 = uVar1;
  *(undefined8 *)&(this->Func).field_0x20 = *(undefined8 *)&param_1->field_0x20;
  if (*(longlong *)&this->Func != 0) {
    *(undefined8 *)param_1 = 0;
  }
  FAdditionalCrashContextStack::PushProvider(this);
  if (*(longlong *)param_1 != 0) {
    plVar2 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar2 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  return this;
}

