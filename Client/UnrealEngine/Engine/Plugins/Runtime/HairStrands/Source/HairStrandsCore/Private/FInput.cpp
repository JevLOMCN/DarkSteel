// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 1

// FInput @ 14dfae220

FInput * __thiscall
FGroomBindingBuilder::FInput::FInput
          (FInput *this,UGroomBindingAsset *param_1,ITargetPlatform *param_2,int param_3,int param_4
          )

{
  EGroomBindingMeshType EVar1;
  USkeletalMesh *pUVar2;
  code *pcVar3;
  bool bVar4;
  FInput *pFVar5;
  
  EVar1 = param_1->GroomBindingType;
  this->BindingType = EVar1;
  this->NumInterpolationPoints = param_1->NumInterpolationPoints;
  this->MatchingSection = param_1->MatchingSection;
  this->TargetBindingAttribute = param_1->TargetBindingAttribute;
  this->SourceMeshLOD = param_3;
  this->TargetMeshMinLOD = param_4;
  if (param_1->GroomBindingType == SkeletalMesh) {
    pUVar2 = (param_1->TargetSkeletalMesh).field0_0x0.DebugPtr;
LAB_14dfae268:
    if (pUVar2 != (USkeletalMesh *)0x0) {
      bVar4 = true;
      goto LAB_14dfae270;
    }
  }
  else if (param_1->GroomBindingType == GeometryCache) {
    pUVar2 = (USkeletalMesh *)(param_1->TargetGeometryCache).field0_0x0.DebugPtr;
    goto LAB_14dfae268;
  }
  bVar4 = false;
LAB_14dfae270:
  this->bHasValidTarget = bVar4;
  this->GroomAsset = (UGroomAsset *)(param_1->Groom).field0_0x0;
  this->SourceSkeletalMesh = (USkeletalMesh *)(param_1->SourceSkeletalMesh).field0_0x0;
  this->TargetSkeletalMesh = (USkeletalMesh *)(param_1->TargetSkeletalMesh).field0_0x0;
  this->SourceGeometryCache = (UGeometryCache *)(param_1->SourceGeometryCache).field0_0x0;
  this->TargetGeometryCache = (UGeometryCache *)(param_1->TargetGeometryCache).field0_0x0;
  this->bForceUseRunningPlatform = false;
  if ((EVar1 != SkeletalMesh) && ((param_3 != 0 || (param_4 != 0)))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("BindingType == EGroomBindingMeshType::SkeletalMesh || (SourceMeshLOD == 0 && TargetMeshMinLOD == 0)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBindingBuilder.cpp"
                       ,0x59,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FInput *)(*pcVar3)();
      return pFVar5;
    }
  }
  return this;
}

