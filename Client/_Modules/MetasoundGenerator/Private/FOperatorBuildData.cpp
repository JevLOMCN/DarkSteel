// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGenerator
// Functions: 1

// FOperatorBuildData @ 14b2a6db0

FOperatorBuildData * __thiscall
Metasound::FOperatorBuildData::FOperatorBuildData
          (FOperatorBuildData *this,FGeneratorInitParams *param_1,FGraphClassRegistryKey *param_2,
          FGuid *param_3,int param_4,bool param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  EMetasoundFrontendClassType EVar6;
  undefined3 uVar7;
  FNameEntryId FVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  FGeneratorInitParams::FGeneratorInitParams(&this->InitParams,param_1);
  EVar6 = (param_2->NodeKey).Type;
  uVar7 = *(undefined3 *)&(param_2->NodeKey).field_0x1;
  FVar8.Value = (param_2->NodeKey).ClassName.Namespace.ComparisonIndex.Value;
  uVar1 = *(undefined8 *)&(param_2->NodeKey).ClassName.Namespace.Number;
  uVar2 = *(undefined8 *)&(param_2->NodeKey).ClassName.Name.Number;
  uVar3 = *(undefined8 *)&(param_2->NodeKey).ClassName.Variant.Number;
  this->NumInstances = param_4;
  (this->RegistryKey).NodeKey.Type = EVar6;
  *(undefined3 *)&(this->RegistryKey).NodeKey.field_0x1 = uVar7;
  (this->RegistryKey).NodeKey.ClassName.Namespace.ComparisonIndex = (FNameEntryId)FVar8.Value;
  *(undefined8 *)&(this->RegistryKey).NodeKey.ClassName.Namespace.Number = uVar1;
  this->bTouchExisting = param_5;
  uVar4 = *(undefined8 *)&(param_2->NodeKey).Version.Minor;
  uVar5 = *(undefined8 *)&(param_2->AssetPath).PackageName.Number;
  *(undefined8 *)&(this->RegistryKey).NodeKey.ClassName.Name.Number = uVar2;
  *(undefined8 *)&(this->RegistryKey).NodeKey.ClassName.Variant.Number = uVar3;
  uVar1 = *(undefined8 *)&(param_2->AssetPath).AssetName.Number;
  *(undefined8 *)&(this->RegistryKey).NodeKey.Version.Minor = uVar4;
  *(undefined8 *)&(this->RegistryKey).AssetPath.PackageName.Number = uVar5;
  uVar9 = param_3->A;
  uVar10 = param_3->B;
  uVar11 = param_3->C;
  uVar12 = param_3->D;
  *(undefined8 *)&(this->RegistryKey).AssetPath.AssetName.Number = uVar1;
  (this->AssetClassID).A = uVar9;
  (this->AssetClassID).B = uVar10;
  (this->AssetClassID).C = uVar11;
  (this->AssetClassID).D = uVar12;
  return this;
}

