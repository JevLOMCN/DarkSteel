// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// TFunction<void___cdecl(enum_EMessageSeverity::Type,FString_const_&)> @ 14a21d060

TFunction<void___cdecl(EMessageSeverity::Type,FString_const_&)> * __thiscall
TFunction<void___cdecl(enum_EMessageSeverity::Type,FString_const_&)>::
TFunction<void___cdecl(enum_EMessageSeverity::Type,FString_const_&)>
          (void *this,TFunction<void___cdecl(EMessageSeverity::Type,FString_const_&)> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)param_1;
  *(longlong *)this = lVar1;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar2)(puVar2,(longlong)this + 0x10);
  }
  return this;
}

// TFunction<void___cdecl(FBaseParameterNameAndValue_*)> @ 14a3b5240

TFunction<void___cdecl(FBaseParameterNameAndValue_*)> * __thiscall
TFunction<void___cdecl(FBaseParameterNameAndValue_*)>::
TFunction<void___cdecl(FBaseParameterNameAndValue_*)>
          (TFunction<void___cdecl(FBaseParameterNameAndValue_*)> *this,
          TFunction<void___cdecl(FBaseParameterNameAndValue_*)> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)param_1;
  *(longlong *)this = lVar1;
  *(undefined8 *)&this->field_0x28 = 0;
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar2)(puVar2,&this->field_0x10);
  }
  return this;
}

