// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 7

// StaticStruct @ 14a897d90

UScriptStruct * __cdecl FPoseSearchDatabaseMultiAnimAsset::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseMultiAnimAsset.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseMultiAnimAsset.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchDatabaseMultiAnimAsset,
                         (UObject *)pUVar1,L"PoseSearchDatabaseMultiAnimAsset");
  }
  return Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseMultiAnimAsset.OuterSingleton;
}

// GetAnimationAsset @ 14a898240

UObject * __thiscall
FPoseSearchDatabaseMultiAnimAsset::GetAnimationAsset(FPoseSearchDatabaseMultiAnimAsset *this)

{
  return (UObject *)(this->MultiAnimAsset).field0_0x0.DebugPtr;
}

// GetPlayLength @ 14a898250

float __thiscall
FPoseSearchDatabaseMultiAnimAsset::GetPlayLength
          (FPoseSearchDatabaseMultiAnimAsset *this,TVector<double> *param_1)

{
  UMultiAnimAsset *pUVar1;
  float fVar2;
  
  pUVar1 = (this->MultiAnimAsset).field0_0x0.DebugPtr;
  if (pUVar1 != (UMultiAnimAsset *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014a89825c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar2 = (float)(**(code **)(*(longlong *)pUVar1 + 0x2c0))();
    return fVar2;
  }
  return 0.0;
}

// GetNumRoles @ 14a898270

int __thiscall
FPoseSearchDatabaseMultiAnimAsset::GetNumRoles(FPoseSearchDatabaseMultiAnimAsset *this)

{
  UMultiAnimAsset *pUVar1;
  int iVar2;
  
  pUVar1 = (this->MultiAnimAsset).field0_0x0.DebugPtr;
  if (pUVar1 != (UMultiAnimAsset *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014a89827c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (**(code **)(*(longlong *)pUVar1 + 0x2c8))();
    return iVar2;
  }
  return 0;
}

// GetRole @ 14a898290

FName __thiscall
FPoseSearchDatabaseMultiAnimAsset::GetRole(FPoseSearchDatabaseMultiAnimAsset *this,int param_1)

{
  UMultiAnimAsset *pUVar1;
  FName *pFVar2;
  uint in_register_00000014;
  FName FVar3;
  undefined1 local_res8 [32];
  
  FVar3.Number = in_register_00000014;
  FVar3.ComparisonIndex.Value = param_1;
  pUVar1 = (this->MultiAnimAsset).field0_0x0.DebugPtr;
  if (pUVar1 != (UMultiAnimAsset *)0x0) {
    pFVar2 = (FName *)(**(code **)(*(longlong *)pUVar1 + 0x2d0))(pUVar1,local_res8);
    *(FName *)FVar3 = *pFVar2;
    return FVar3;
  }
  *(FName *)FVar3 = UE::PoseSearch::DefaultRole;
  return FVar3;
}

// GetAnimationAssetForRole @ 14a8982e0

UAnimationAsset * __thiscall
FPoseSearchDatabaseMultiAnimAsset::GetAnimationAssetForRole
          (FPoseSearchDatabaseMultiAnimAsset *this,FName *param_1)

{
  UMultiAnimAsset *pUVar1;
  UAnimationAsset *pUVar2;
  
  pUVar1 = (this->MultiAnimAsset).field0_0x0.DebugPtr;
  if (pUVar1 != (UMultiAnimAsset *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014a8982ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar2 = (UAnimationAsset *)(**(code **)(*(longlong *)pUVar1 + 0x2d8))();
    return pUVar2;
  }
  return (UAnimationAsset *)0x0;
}

// GetRootTransformOriginForRole @ 14a898300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __thiscall
FPoseSearchDatabaseMultiAnimAsset::GetRootTransformOriginForRole
          (FPoseSearchDatabaseMultiAnimAsset *this,TTransform<double> *__return_storage_ptr__,
          FName *param_1)

{
  UMultiAnimAsset *pUVar1;
  double dVar2;
  double *pdVar3;
  undefined1 auStack_98 [32];
  double local_78 [2];
  double local_68 [2];
  double local_58 [2];
  double local_48 [2];
  double local_38 [2];
  double local_28 [2];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  pUVar1 = (this->MultiAnimAsset).field0_0x0.DebugPtr;
  if (pUVar1 == (UMultiAnimAsset *)0x0) {
    pdVar3 = local_78;
    local_78 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_68 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_58 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_48 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_38 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_28 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  else {
    pdVar3 = (double *)(**(code **)(*(longlong *)pUVar1 + 0x2e0))(pUVar1,local_78);
  }
  dVar2 = pdVar3[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = *pdVar3;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar2;
  dVar2 = pdVar3[3];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = pdVar3[2];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar2;
  dVar2 = pdVar3[5];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = pdVar3[4];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar2;
  dVar2 = pdVar3[7];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = pdVar3[6];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar2;
  dVar2 = pdVar3[9];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = pdVar3[8];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar2;
  dVar2 = pdVar3[0xb];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = pdVar3[10];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar2;
  return __return_storage_ptr__;
}

