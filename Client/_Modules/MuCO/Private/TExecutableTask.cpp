// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 1

// Create @ 14ac176b0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TExecutableTask<TUniqueFunction<void___cdecl(void)>_> * __cdecl
UE::Tasks::Private::TExecutableTask<TUniqueFunction<void___cdecl(void)>_>::Create
          (wchar_t *param_1,TUniqueFunction<void___cdecl(void)> *param_2,ETaskPriority param_3,
          EExtendedTaskPriority param_4,ETaskFlags param_5)

{
  undefined8 uVar1;
  TExecutableTask<TUniqueFunction<void___cdecl(void)>_> *this;
  
  this = FMemory::Malloc(0x140,0x40);
  if (this != (TExecutableTask<TUniqueFunction<void___cdecl(void)>_> *)0x0) {
    FTaskBase::FTaskBase((FTaskBase *)this,2,true);
    *(undefined ***)this =
         &___7__TExecutableTaskBase_V__TUniqueFunction___A6AXXZ__XX_Private_Tasks_UE__6B_;
    FTaskBase::Init((FTaskBase *)this,param_1,param_3,param_4,param_5);
    *(undefined8 *)&this->field_0xe0 = *(undefined8 *)param_2;
    *(undefined8 *)&this->field_0x108 = *(undefined8 *)&param_2->field_0x28;
    *(undefined8 *)&param_2->field_0x28 = 0;
    uVar1 = *(undefined8 *)&param_2->field_0x18;
    *(undefined8 *)&this->field_0xf0 = *(undefined8 *)&param_2->field_0x10;
    *(undefined8 *)&this->field_0xf8 = uVar1;
    *(undefined8 *)&this->field_0x100 = *(undefined8 *)&param_2->field_0x20;
    if (*(longlong *)&this->field_0xe0 != 0) {
      *(undefined8 *)param_2 = 0;
    }
    *(undefined ***)this =
         &___7__TExecutableTask_V__TUniqueFunction___A6AXXZ___Private_Tasks_UE__6B_;
  }
  return this;
}

