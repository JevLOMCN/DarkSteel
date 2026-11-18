// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DragonIKPlugin
// Functions: 2

// StaticStruct @ 14d2aebd0

UScriptStruct * __cdecl FCCDIK_Modified_ChainLink::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCCDIK_Modified_ChainLink.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DragonIKPlugin();
    Z_Registration_Info_UScriptStruct_FCCDIK_Modified_ChainLink.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCCDIK_Modified_ChainLink,(UObject *)pUVar1,
                         L"CCDIK_Modified_ChainLink");
  }
  return Z_Registration_Info_UScriptStruct_FCCDIK_Modified_ChainLink.OuterSingleton;
}

// FCCDIK_Modified_ChainLink @ 14d32de10

FCCDIK_Modified_ChainLink * __thiscall
FCCDIK_Modified_ChainLink::FCCDIK_Modified_ChainLink
          (FCCDIK_Modified_ChainLink *this,FCCDIK_Modified_ChainLink *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->Position).field0_0x0._s_0.Y;
  (this->Position).field0_0x0._s_0.X = (param_1->Position).field0_0x0._s_0.X;
  (this->Position).field0_0x0._s_0.Y = dVar1;
  (this->Position).field0_0x0._s_0.Z = (param_1->Position).field0_0x0._s_0.Z;
  dVar1 = (param_1->solverLocalPositions).field0_0x0._s_0.Y;
  (this->solverLocalPositions).field0_0x0._s_0.X = (param_1->solverLocalPositions).field0_0x0._s_0.X
  ;
  (this->solverLocalPositions).field0_0x0._s_0.Y = dVar1;
  (this->solverLocalPositions).field0_0x0._s_0.Z = (param_1->solverLocalPositions).field0_0x0._s_0.Z
  ;
  dVar1 = (param_1->BoneRotation).Y;
  (this->BoneRotation).X = (param_1->BoneRotation).X;
  (this->BoneRotation).Y = dVar1;
  dVar1 = (param_1->BoneRotation).W;
  (this->BoneRotation).Z = (param_1->BoneRotation).Z;
  (this->BoneRotation).W = dVar1;
  this->Length = param_1->Length;
  dVar1 = (param_1->axis).field0_0x0._s_0.Y;
  (this->axis).field0_0x0._s_0.X = (param_1->axis).field0_0x0._s_0.X;
  (this->axis).field0_0x0._s_0.Y = dVar1;
  (this->axis).field0_0x0._s_0.Z = (param_1->axis).field0_0x0._s_0.Z;
  this->BoneIndex = param_1->BoneIndex;
  this->TransformIndex = param_1->TransformIndex;
  dVar1 = (param_1->DefaultDirToParent).field0_0x0._s_0.Y;
  (this->DefaultDirToParent).field0_0x0._s_0.X = (param_1->DefaultDirToParent).field0_0x0._s_0.X;
  (this->DefaultDirToParent).field0_0x0._s_0.Y = dVar1;
  (this->DefaultDirToParent).field0_0x0._s_0.Z = (param_1->DefaultDirToParent).field0_0x0._s_0.Z;
  (this->ChildZeroLengthTransformIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildZeroLengthTransformIndices).AllocatorInstance.Data =
       (param_1->ChildZeroLengthTransformIndices).AllocatorInstance.Data;
  (param_1->ChildZeroLengthTransformIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->ChildZeroLengthTransformIndices).ArrayNum =
       (param_1->ChildZeroLengthTransformIndices).ArrayNum;
  (this->ChildZeroLengthTransformIndices).ArrayMax =
       (param_1->ChildZeroLengthTransformIndices).ArrayMax;
  (param_1->ChildZeroLengthTransformIndices).ArrayNum = 0;
  (param_1->ChildZeroLengthTransformIndices).ArrayMax = 0;
  return this;
}

