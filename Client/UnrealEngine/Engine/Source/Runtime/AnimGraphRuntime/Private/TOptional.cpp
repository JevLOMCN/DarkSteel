// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 2

// operator= @ 14640a210

/* WARNING: Type propagation algorithm not settling */

TOptional<FRootMotionOverride> * __thiscall
TOptional<FRootMotionOverride>::operator=
          (TOptional<FRootMotionOverride> *this,TOptional<FRootMotionOverride> *param_1)

{
  longlong lVar1;
  double dVar2;
  undefined3 uVar3;
  int iVar4;
  
  if (param_1 != this) {
    if (param_1->bIsSet == false) {
      if (this->bIsSet != false) {
        this->bIsSet = false;
        return this;
      }
    }
    else {
      uVar3 = *(undefined3 *)&(param_1->TypedValue).field_0x1;
      iVar4 = (param_1->TypedValue).ChildBoneIndex;
      lVar1 = (param_1->TypedValue)._padding_;
      (this->TypedValue).bBlendFirstChildOfRoot = (param_1->TypedValue).bBlendFirstChildOfRoot;
      *(undefined3 *)&(this->TypedValue).field_0x1 = uVar3;
      (this->TypedValue).ChildBoneIndex = iVar4;
      (this->TypedValue)._padding_ = lVar1;
      dVar2 = (param_1->TypedValue).RootMotion.Rotation.XY.m128d_f64[1];
      (this->TypedValue).RootMotion.Rotation.XY.m128d_f64[0] =
           (param_1->TypedValue).RootMotion.Rotation.XY.m128d_f64[0];
      (this->TypedValue).RootMotion.Rotation.XY.m128d_f64[1] = dVar2;
      dVar2 = (param_1->TypedValue).RootMotion.Rotation.ZW.m128d_f64[1];
      (this->TypedValue).RootMotion.Rotation.ZW.m128d_f64[0] =
           (param_1->TypedValue).RootMotion.Rotation.ZW.m128d_f64[0];
      (this->TypedValue).RootMotion.Rotation.ZW.m128d_f64[1] = dVar2;
      dVar2 = (param_1->TypedValue).RootMotion.Translation.XY.m128d_f64[1];
      (this->TypedValue).RootMotion.Translation.XY.m128d_f64[0] =
           (param_1->TypedValue).RootMotion.Translation.XY.m128d_f64[0];
      (this->TypedValue).RootMotion.Translation.XY.m128d_f64[1] = dVar2;
      dVar2 = (param_1->TypedValue).RootMotion.Translation.ZW.m128d_f64[1];
      (this->TypedValue).RootMotion.Translation.ZW.m128d_f64[0] =
           (param_1->TypedValue).RootMotion.Translation.ZW.m128d_f64[0];
      (this->TypedValue).RootMotion.Translation.ZW.m128d_f64[1] = dVar2;
      dVar2 = (param_1->TypedValue).RootMotion.Scale3D.XY.m128d_f64[1];
      (this->TypedValue).RootMotion.Scale3D.XY.m128d_f64[0] =
           (param_1->TypedValue).RootMotion.Scale3D.XY.m128d_f64[0];
      (this->TypedValue).RootMotion.Scale3D.XY.m128d_f64[1] = dVar2;
      dVar2 = (param_1->TypedValue).RootMotion.Scale3D.ZW.m128d_f64[1];
      (this->TypedValue).RootMotion.Scale3D.ZW.m128d_f64[0] =
           (param_1->TypedValue).RootMotion.Scale3D.ZW.m128d_f64[0];
      (this->TypedValue).RootMotion.Scale3D.ZW.m128d_f64[1] = dVar2;
      dVar2 = (param_1->TypedValue).PreviousTransform.Rotation.XY.m128d_f64[1];
      (this->TypedValue).PreviousTransform.Rotation.XY.m128d_f64[0] =
           (param_1->TypedValue).PreviousTransform.Rotation.XY.m128d_f64[0];
      (this->TypedValue).PreviousTransform.Rotation.XY.m128d_f64[1] = dVar2;
      dVar2 = (param_1->TypedValue).PreviousTransform.Rotation.ZW.m128d_f64[1];
      (this->TypedValue).PreviousTransform.Rotation.ZW.m128d_f64[0] =
           (param_1->TypedValue).PreviousTransform.Rotation.ZW.m128d_f64[0];
      (this->TypedValue).PreviousTransform.Rotation.ZW.m128d_f64[1] = dVar2;
      dVar2 = (param_1->TypedValue).PreviousTransform.Translation.XY.m128d_f64[1];
      (this->TypedValue).PreviousTransform.Translation.XY.m128d_f64[0] =
           (param_1->TypedValue).PreviousTransform.Translation.XY.m128d_f64[0];
      (this->TypedValue).PreviousTransform.Translation.XY.m128d_f64[1] = dVar2;
      dVar2 = (param_1->TypedValue).PreviousTransform.Translation.ZW.m128d_f64[1];
      (this->TypedValue).PreviousTransform.Translation.ZW.m128d_f64[0] =
           (param_1->TypedValue).PreviousTransform.Translation.ZW.m128d_f64[0];
      (this->TypedValue).PreviousTransform.Translation.ZW.m128d_f64[1] = dVar2;
      dVar2 = (param_1->TypedValue).PreviousTransform.Scale3D.XY.m128d_f64[1];
      (this->TypedValue).PreviousTransform.Scale3D.XY.m128d_f64[0] =
           (param_1->TypedValue).PreviousTransform.Scale3D.XY.m128d_f64[0];
      (this->TypedValue).PreviousTransform.Scale3D.XY.m128d_f64[1] = dVar2;
      dVar2 = (param_1->TypedValue).PreviousTransform.Scale3D.ZW.m128d_f64[1];
      (this->TypedValue).PreviousTransform.Scale3D.ZW.m128d_f64[0] =
           (param_1->TypedValue).PreviousTransform.Scale3D.ZW.m128d_f64[0];
      (this->TypedValue).PreviousTransform.Scale3D.ZW.m128d_f64[1] = dVar2;
      this->bIsSet = true;
    }
  }
  return this;
}

// GetValue @ 1464506c0

FRootMotionOverride * __thiscall
TOptional<FRootMotionOverride>::GetValue(TOptional<FRootMotionOverride> *this)

{
  code *pcVar1;
  bool bVar2;
  FRootMotionOverride *pFVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRootMotionOverride *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->TypedValue;
}

