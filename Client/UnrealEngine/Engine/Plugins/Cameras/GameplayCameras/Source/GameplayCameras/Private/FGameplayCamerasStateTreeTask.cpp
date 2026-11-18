// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 2

// StaticStruct @ 14d5768a0

UScriptStruct * __cdecl FGameplayCamerasStateTreeTask::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGameplayCamerasStateTreeTask.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FGameplayCamerasStateTreeTask.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGameplayCamerasStateTreeTask,(UObject *)pUVar1,
                         L"GameplayCamerasStateTreeTask");
  }
  return Z_Registration_Info_UScriptStruct_FGameplayCamerasStateTreeTask.OuterSingleton;
}

// operator= @ 14d592f30

FGameplayCamerasStateTreeTask * __thiscall
FGameplayCamerasStateTreeTask::operator=
          (FGameplayCamerasStateTreeTask *this,FGameplayCamerasStateTreeTask *param_1)

{
  byte bVar1;
  
  *(undefined8 *)&this->field_0x8 = *(undefined8 *)&param_1->field_0x8;
  *(undefined2 *)&this->field_0x10 = *(undefined2 *)&param_1->field_0x10;
  *(undefined2 *)&this->field_0x12 = *(undefined2 *)&param_1->field_0x12;
  *(undefined2 *)&this->field_0x14 = *(undefined2 *)&param_1->field_0x14;
  *(undefined2 *)&this->field_0x16 = *(undefined2 *)&param_1->field_0x16;
  *(undefined4 *)&this->field_0x18 = *(undefined4 *)&param_1->field_0x18;
  *(undefined2 *)&this->field_0x1c = *(undefined2 *)&param_1->field_0x1c;
  bVar1 = (this->field_0x20 ^ param_1->field_0x20) & 1 ^ this->field_0x20;
  this->field_0x20 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0x20) & 2 ^ bVar1;
  this->field_0x20 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0x20) & 4 ^ bVar1;
  this->field_0x20 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0x20) & 8 ^ bVar1;
  this->field_0x20 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0x20) & 0x10 ^ bVar1;
  this->field_0x20 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0x20) & 0x20 ^ bVar1;
  this->field_0x20 = bVar1;
  bVar1 = (bVar1 ^ param_1->field_0x20) & 0x40 ^ bVar1;
  this->field_0x20 = bVar1;
  this->field_0x20 = (bVar1 ^ param_1->field_0x20) & 0x7f ^ param_1->field_0x20;
  this->field_0x21 = param_1->field_0x21;
  return this;
}

