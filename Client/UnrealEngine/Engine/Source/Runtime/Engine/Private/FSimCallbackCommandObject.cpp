// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FSimCallbackCommandObject @ 1482da870

FSimCallbackCommandObject * __thiscall
Chaos::FSimCallbackCommandObject::FSimCallbackCommandObject
          (FSimCallbackCommandObject *this,TUniqueFunction<void___cdecl(void)> *param_1,int param_2)

{
  undefined8 uVar1;
  undefined1 local_res18 [16];
  
  *(undefined2 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined2 *)&this->field_0x40 = 1;
  *(undefined ***)this = &___7FSimCallbackCommandObject_Chaos__6B_;
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
  *(undefined8 *)&this->Func2 = 0;
  *(undefined8 *)&(this->Func2).field_0x28 = 0;
  this->bFuncHasTimeParameters = false;
  this->ExecuteOnStep = param_2;
  if (*(longlong *)&this->Func == 0) {
    `Chaos::FSimCallbackCommandObject::FSimCallbackCommandObject'::__l2::<lambda_1>::operator()
              (local_res18);
  }
  return this;
}

