// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// FControlRigOverrideValueErrorPipe @ 14a21e9d0

/* WARNING: Enum "Type": Some values do not have unique names */

FControlRigOverrideValueErrorPipe * __thiscall
FControlRigOverrideValueErrorPipe::FControlRigOverrideValueErrorPipe
          (FControlRigOverrideValueErrorPipe *this,Type param_1,
          TFunction<void___cdecl(wchar_t_const_*,ELogVerbosity::Type)> *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  FOutputDevice::FOutputDevice((FOutputDevice *)this);
  this->MaxVerbosity = param_1;
  this->NumErrors = 0;
  this->_padding_ = (longlong)&___7FControlRigOverrideValueErrorPipe__6B_;
  lVar1 = *(longlong *)param_2;
  *(longlong *)&this->ReportFunction = lVar1;
  *(undefined8 *)&(this->ReportFunction).field_0x28 = 0;
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar2)();
  }
  if (*(longlong *)param_2 != 0) {
    plVar3 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar3 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  return this;
}

// Serialize @ 14a28e6f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FControlRigOverrideValueErrorPipe::Serialize
          (FControlRigOverrideValueErrorPipe *this,wchar_t *param_1,Type param_2,FName *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  wchar_t *local_res8;
  Type local_res18 [16];
  
  if (param_2 <= this->MaxVerbosity) {
    this->NumErrors = this->NumErrors + 1;
    if (*(void **)&this->ReportFunction != (void *)0x0) {
      local_res8 = param_1;
      local_res18[0] = param_2;
      UE::Core::Private::Function::CheckCallable(*(void **)&this->ReportFunction);
      plVar1 = *(longlong **)&(this->ReportFunction).field_0x28;
      pcVar2 = *(code **)&this->ReportFunction;
      plVar4 = (longlong *)&(this->ReportFunction).field_0x10;
      if (plVar1 != (longlong *)0x0) {
        plVar4 = plVar1;
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      (*pcVar2)(uVar3,&local_res8,local_res18);
    }
  }
  return;
}

