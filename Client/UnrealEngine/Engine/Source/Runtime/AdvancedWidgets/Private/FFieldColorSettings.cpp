// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdvancedWidgets
// Functions: 1

// FFieldColorSettings @ 14d835d40

FFieldColorSettings * __thiscall
UE::PropertyViewer::FFieldColorSettings::FFieldColorSettings
          (FFieldColorSettings *this,FFieldColorSettings *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)&(param_1->DefaultTypeColor).field0_0x0 + 8);
  *(undefined8 *)&(this->DefaultTypeColor).field0_0x0 =
       *(undefined8 *)&(param_1->DefaultTypeColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->DefaultTypeColor).field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_1->BooleanTypeColor).field0_0x0 + 8);
  *(undefined8 *)&(this->BooleanTypeColor).field0_0x0 =
       *(undefined8 *)&(param_1->BooleanTypeColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->BooleanTypeColor).field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_1->ClassTypeColor).field0_0x0 + 8);
  *(undefined8 *)&(this->ClassTypeColor).field0_0x0 =
       *(undefined8 *)&(param_1->ClassTypeColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->ClassTypeColor).field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_1->EnumTypeColor).field0_0x0 + 8);
  *(undefined8 *)&(this->EnumTypeColor).field0_0x0 =
       *(undefined8 *)&(param_1->EnumTypeColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->EnumTypeColor).field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_1->IntTypeColor).field0_0x0 + 8);
  *(undefined8 *)&(this->IntTypeColor).field0_0x0 =
       *(undefined8 *)&(param_1->IntTypeColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->IntTypeColor).field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_1->FloatTypeColor).field0_0x0 + 8);
  *(undefined8 *)&(this->FloatTypeColor).field0_0x0 =
       *(undefined8 *)&(param_1->FloatTypeColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->FloatTypeColor).field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_1->NameTypeColor).field0_0x0 + 8);
  *(undefined8 *)&(this->NameTypeColor).field0_0x0 =
       *(undefined8 *)&(param_1->NameTypeColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->NameTypeColor).field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_1->DelegateTypeColor).field0_0x0 + 8);
  *(undefined8 *)&(this->DelegateTypeColor).field0_0x0 =
       *(undefined8 *)&(param_1->DelegateTypeColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->DelegateTypeColor).field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_1->ObjectTypeColor).field0_0x0 + 8);
  *(undefined8 *)&(this->ObjectTypeColor).field0_0x0 =
       *(undefined8 *)&(param_1->ObjectTypeColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->ObjectTypeColor).field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_1->InterfaceTypeColor).field0_0x0 + 8);
  *(undefined8 *)&(this->InterfaceTypeColor).field0_0x0 =
       *(undefined8 *)&(param_1->InterfaceTypeColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->InterfaceTypeColor).field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_1->StringTypeColor).field0_0x0 + 8);
  *(undefined8 *)&(this->StringTypeColor).field0_0x0 =
       *(undefined8 *)&(param_1->StringTypeColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->StringTypeColor).field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_1->TextTypeColor).field0_0x0 + 8);
  *(undefined8 *)&(this->TextTypeColor).field0_0x0 =
       *(undefined8 *)&(param_1->TextTypeColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->TextTypeColor).field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&(param_1->DefaultStructTypeColor).field0_0x0 + 8);
  *(undefined8 *)&(this->DefaultStructTypeColor).field0_0x0 =
       *(undefined8 *)&(param_1->DefaultStructTypeColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->DefaultStructTypeColor).field0_0x0 + 8) = uVar1;
  *(undefined8 *)&(this->StructColors).field_0x0 = 0;
  *(undefined8 *)&(this->StructColors).field_0x8 = 0;
  *(undefined8 *)&(this->StructColors).field_0x20 = 0;
  *(undefined4 *)&(this->StructColors).field_0x28 = 0;
  *(undefined4 *)&(this->StructColors).field_0x2c = 0x80;
  *(undefined4 *)&(this->StructColors).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StructColors).field_0x34 = 0;
  *(undefined8 *)&(this->StructColors).field_0x40 = 0;
  *(undefined4 *)&(this->StructColors).field_0x48 = 0;
  TSet<TTuple<FString,FLinearColor>,TDefaultMapHashableKeyFuncs<FString,FLinearColor,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,FLinearColor>,TDefaultMapHashableKeyFuncs<FString,FLinearColor,0>,FDefaultSetAllocator>
               *)&this->StructColors,
              (TSet<TTuple<FString,FLinearColor>,TDefaultMapHashableKeyFuncs<FString,FLinearColor,0>,FDefaultSetAllocator>
               *)&param_1->StructColors);
  return this;
}

