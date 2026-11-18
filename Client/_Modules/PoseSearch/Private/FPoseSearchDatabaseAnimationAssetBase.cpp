// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 9

// StaticStruct @ 14a8968b0

UScriptStruct * __cdecl FPoseSearchDatabaseAnimationAssetBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimationAssetBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimationAssetBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimationAssetBase,
                         (UObject *)pUVar1,L"PoseSearchDatabaseAnimationAssetBase");
  }
  return Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimationAssetBase.OuterSingleton;
}

// GetPlayLength @ 14a8968f0

float __thiscall
FPoseSearchDatabaseAnimationAssetBase::GetPlayLength(FPoseSearchDatabaseAnimationAssetBase *this)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a8968fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)((longlong)*this + 0x10))(this,&UE::Math::TVector<double>::ZeroVector);
  return fVar1;
}

// GetPlayLength @ 14a896910

float __thiscall
FPoseSearchDatabaseAnimationAssetBase::GetPlayLength
          (FPoseSearchDatabaseAnimationAssetBase *this,TVector<double> *param_1)

{
  int iVar1;
  longlong *plVar2;
  UClass *pUVar3;
  float fVar4;
  
  plVar2 = (longlong *)(**(code **)((longlong)*this + 8))();
  if (plVar2 != (longlong *)0x0) {
    pUVar3 = Z_Construct_UClass_UAnimationAsset_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(plVar2[2] + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(plVar2[2] + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
                    /* WARNING: Could not recover jumptable at 0x00014a896952. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      fVar4 = (float)(**(code **)(*plVar2 + 0x2c0))(plVar2);
      return fVar4;
    }
  }
  return 0.0;
}

// GetNumRoles @ 14a896970

int __thiscall
FPoseSearchDatabaseAnimationAssetBase::GetNumRoles(FPoseSearchDatabaseAnimationAssetBase *this)

{
  return 1;
}

// GetRole @ 14a896980

FName __thiscall
FPoseSearchDatabaseAnimationAssetBase::GetRole
          (FPoseSearchDatabaseAnimationAssetBase *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FName FVar4;
  uint in_register_00000014;
  
  FVar4.Number = in_register_00000014;
  FVar4.ComparisonIndex.Value = param_1;
  iVar3 = (**(code **)((longlong)*this + 0x20))();
  if (iVar3 != 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetNumRoles() == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchDatabase.h"
                       ,0x43,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar4 = (FName)(*pcVar1)();
      return FVar4;
    }
  }
  *(FName *)FVar4 = UE::PoseSearch::DefaultRole;
  return FVar4;
}

// GetAnimationAssetForRole @ 14a8969e0

UAnimationAsset * __thiscall
FPoseSearchDatabaseAnimationAssetBase::GetAnimationAssetForRole
          (FPoseSearchDatabaseAnimationAssetBase *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UAnimationAsset *pUVar4;
  UClass *pUVar5;
  
  iVar3 = (**(code **)((longlong)*this + 0x20))();
  if (iVar3 != 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetNumRoles() == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchDatabase.cpp"
                       ,0x1d6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar4 = (UAnimationAsset *)(*pcVar1)();
      return pUVar4;
    }
  }
  pUVar4 = (UAnimationAsset *)(**(code **)((longlong)*this + 8))(this);
  if (pUVar4 != (UAnimationAsset *)0x0) {
    pUVar5 = Z_Construct_UClass_UAnimationAsset_NoRegister();
    iVar3 = (int)pUVar5->_padding_;
    if ((iVar3 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar3 * 8)
        == &pUVar5->_padding_)) {
      return pUVar4;
    }
  }
  return (UAnimationAsset *)0x0;
}

// GetRootTransformOriginForRole @ 14a896a70

TTransform<double> * __thiscall
FPoseSearchDatabaseAnimationAssetBase::GetRootTransformOriginForRole
          (FPoseSearchDatabaseAnimationAssetBase *this,TTransform<double> *__return_storage_ptr__,
          FName *param_1)

{
  code *pcVar1;
  __m128d _Var2;
  __m128d _Var3;
  bool bVar4;
  int iVar5;
  TTransform<double> *pTVar6;
  
  iVar5 = (**(code **)((longlong)*this + 0x20))();
  if (iVar5 != 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetNumRoles() == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchDatabase.cpp"
                       ,0x1dc,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TTransform<double> *)(*pcVar1)();
      return pTVar6;
    }
  }
  _Var2.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  _Var3 = UE::Math::TTransform<double>::Identity.Translation.XY;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 = _Var2.m128d_f64;
  _Var2 = UE::Math::TTransform<double>::Identity.Translation.ZW;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 = _Var3.m128d_f64;
  _Var3 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 = _Var2.m128d_f64;
  _Var2 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 = _Var3.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = _Var2.m128d_f64;
  return __return_storage_ptr__;
}

// ~FPoseSearchDatabaseAnimationAssetBase @ 14a8adb80

void __thiscall
FPoseSearchDatabaseAnimationAssetBase::~FPoseSearchDatabaseAnimationAssetBase
          (FPoseSearchDatabaseAnimationAssetBase *this)

{
  return;
}

// GetAnimationAsset @ 14a8b97a0

UObject * __thiscall
FPoseSearchDatabaseAnimationAssetBase::GetAnimationAsset
          (FPoseSearchDatabaseAnimationAssetBase *this)

{
  return (UObject *)0x0;
}

