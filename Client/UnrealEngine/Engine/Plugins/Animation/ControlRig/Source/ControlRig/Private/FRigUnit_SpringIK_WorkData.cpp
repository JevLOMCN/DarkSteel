// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// StaticStruct @ 14a4d2860

UScriptStruct * __cdecl FRigUnit_SpringIK_WorkData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SpringIK_WorkData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SpringIK_WorkData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SpringIK_WorkData,(UObject *)pUVar1,
                         L"RigUnit_SpringIK_WorkData");
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_SpringIK_WorkData.OuterSingleton;
}

// FRigUnit_SpringIK_WorkData @ 14a516450

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_SpringIK_WorkData * __thiscall
FRigUnit_SpringIK_WorkData::FRigUnit_SpringIK_WorkData(FRigUnit_SpringIK_WorkData *this)

{
  ulonglong uVar1;
  uint local_28;
  undefined2 uStack_1a;
  undefined4 uStack_14;
  
  (this->CachedBones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedBones).ArrayNum = 0;
  (this->CachedBones).ArrayMax = 0;
  (this->Simulation)._padding_ = (longlong)&___7FCRSimPointContainer__6B_;
  (this->Transforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Transforms).ArrayNum = 0;
  (this->Transforms).ArrayMax = 0;
  (this->Simulation)._padding_ = 0x3c888889;
  *(undefined4 *)&(this->Simulation)._padding_ = 0;
  (this->Simulation).Points.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Simulation).Points.ArrayNum = 0;
  (this->Simulation).Points.ArrayMax = 0;
  (this->Simulation).Springs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Simulation).Springs.ArrayNum = 0;
  (this->Simulation).Springs.ArrayMax = 0;
  (this->Simulation).Forces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Simulation).Forces.ArrayNum = 0;
  (this->Simulation).Forces.ArrayMax = 0;
  (this->Simulation).CollisionVolumes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Simulation).CollisionVolumes.ArrayNum = 0;
  (this->Simulation).CollisionVolumes.ArrayMax = 0;
  (this->Simulation).Constraints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Simulation).Constraints.ArrayNum = 0;
  (this->Simulation).Constraints.ArrayMax = 0;
  (this->Simulation).PreviousStep.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Simulation).PreviousStep.ArrayNum = 0;
  (this->Simulation).PreviousStep.ArrayMax = 0;
  local_28 = local_28 & 0xffffff00;
  uVar1 = (ulonglong)local_28;
  (this->CachedPoleVector).Key.Type = (char)uVar1;
  *(int3 *)&(this->CachedPoleVector).Key.field_0x1 = (int3)(uVar1 >> 8);
  (this->CachedPoleVector).Key.Name.ComparisonIndex = (FNameEntryId)(int)(uVar1 >> 0x20);
  *(ulonglong *)&(this->CachedPoleVector).Key.Name.Number = CONCAT26(uStack_1a,0xffff00000000);
  *(ulonglong *)&(this->CachedPoleVector).ContainerVersion = CONCAT44(uStack_14,0xffffffff);
  (this->CachedPoleVector).Element = (FRigBaseElement *)0x0;
  return this;
}

