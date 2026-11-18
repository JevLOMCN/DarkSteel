// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 8

// StaticStruct @ 14def4960

UScriptStruct * __cdecl FIKRetargetScaleSourceOp::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetScaleSourceOp.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetScaleSourceOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetScaleSourceOp,(UObject *)pUVar1,
                         L"IKRetargetScaleSourceOp");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetScaleSourceOp.OuterSingleton;
}

// Initialize @ 14def4a70

bool __thiscall
FIKRetargetScaleSourceOp::Initialize
          (FIKRetargetScaleSourceOp *this,FIKRetargetProcessor *param_1,FRetargetSkeleton *param_2,
          FTargetSkeleton *param_3,FIKRetargetOpBase *param_4,FIKRigLogger *param_5)

{
  *(undefined1 *)((longlong)&this->_padding_ + 5) = 1;
  return true;
}

// Run @ 14def4ac0

void __thiscall
FIKRetargetScaleSourceOp::Run
          (FIKRetargetScaleSourceOp *this,FIKRetargetProcessor *param_1,double param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  return;
}

// GetSettings @ 14def4ae0

FIKRetargetOpSettingsBase * __thiscall
FIKRetargetScaleSourceOp::GetSettings(FIKRetargetScaleSourceOp *this)

{
  return (FIKRetargetOpSettingsBase *)&this->Settings;
}

// GetSettingsType @ 14def4b30

UScriptStruct * __thiscall FIKRetargetScaleSourceOp::GetSettingsType(FIKRetargetScaleSourceOp *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetScaleSourceOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetScaleSourceOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetScaleSourceOpSettings,
                         (UObject *)pUVar1,L"IKRetargetScaleSourceOpSettings");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetScaleSourceOpSettings.OuterSingleton;
}

// GetType @ 14def4b70

UScriptStruct * __thiscall FIKRetargetScaleSourceOp::GetType(FIKRetargetScaleSourceOp *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetScaleSourceOp.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetScaleSourceOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetScaleSourceOp,(UObject *)pUVar1,
                         L"IKRetargetScaleSourceOp");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetScaleSourceOp.OuterSingleton;
}

// IsSingleton @ 14def4bb0

bool __thiscall FIKRetargetScaleSourceOp::IsSingleton(FIKRetargetScaleSourceOp *this)

{
  return true;
}

// GetScalePivotBoneIndex @ 14df3fd40

int __thiscall
FIKRetargetScaleSourceOp::GetScalePivotBoneIndex
          (FIKRetargetScaleSourceOp *this,FRetargetSkeleton *param_1)

{
  FName FVar1;
  FName *pFVar2;
  int iVar3;
  FName *pFVar4;
  
  FVar1 = (this->Settings).ScalePivotBone.BoneName;
  if (this->CachedScalePivotBoneName == FVar1) {
    return this->CachedScalePivotBoneIndex;
  }
  pFVar2 = (FName *)(param_1->BoneNames).AllocatorInstance.Data;
  pFVar4 = pFVar2;
  while( true ) {
    if (pFVar4 == pFVar2 + (param_1->BoneNames).ArrayNum) {
      this->CachedScalePivotBoneName = FVar1;
      this->CachedScalePivotBoneIndex = -1;
      return -1;
    }
    if (*pFVar4 == FVar1) break;
    pFVar4 = pFVar4 + 1;
  }
  this->CachedScalePivotBoneName = FVar1;
  iVar3 = (int)((longlong)pFVar4 - (longlong)pFVar2 >> 3);
  this->CachedScalePivotBoneIndex = iVar3;
  return iVar3;
}

