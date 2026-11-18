// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 2

// Serialize @ 14d635390

void __thiscall
TOptional<UE::Math::TTransform<double>_>::Serialize
          (TOptional<UE::Math::TTransform<double>_> *this,FArchive *param_1)

{
  uint *puVar1;
  uint uVar2;
  ulonglong *puVar3;
  uint *puVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  char cVar10;
  uint local_res8 [2];
  uint local_res10 [2];
  
  cVar10 = this->bIsSet;
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  puVar4 = (uint *)*puVar3;
  puVar1 = puVar4 + 1;
  if ((param_1->field_0x28 & 1) == 0) {
    if ((uint *)puVar3[1] < puVar1) {
      local_res10[0] = (uint)((bool)cVar10 != false);
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
      if (1 < local_res10[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      uVar2 = local_res10[0];
      if ((param_1->field_0x28 & 1) != 0) goto LAB_14d6354e1;
    }
    else {
      uVar2 = *puVar4;
      *puVar3 = (ulonglong)puVar1;
LAB_14d6354e1:
      cVar10 = uVar2 != 0;
    }
    if (cVar10 == '\0') {
      return;
    }
LAB_14d6354ea:
    if ((this->bIsSet == false) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    UE::Math::operator<<(param_1,&this->TypedValue);
  }
  else {
    if ((uint *)puVar3[1] < puVar1) {
      local_res8[0] = 0;
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      if (1 < local_res8[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      uVar2 = local_res8[0];
      if ((param_1->field_0x28 & 1) != 0) goto LAB_14d635414;
    }
    else {
      uVar2 = *puVar4;
      *puVar3 = (ulonglong)puVar1;
LAB_14d635414:
      if (uVar2 != 0) {
        if ((bool)cVar10 == false) {
          fVar6 = GlobalVectorConstants::Float0001.m128_f32[1];
          fVar7 = GlobalVectorConstants::Float0001.m128_f32[2];
          fVar8 = GlobalVectorConstants::Float0001.m128_f32[3];
          (this->TypedValue).Rotation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::Float0001.m128_f32[0];
          (this->TypedValue).Rotation.XY.m128d_f64[1] = (double)fVar6;
          (this->TypedValue).Rotation.ZW.m128d_f64[0] = (double)fVar7;
          (this->TypedValue).Rotation.ZW.m128d_f64[1] = (double)fVar8;
          fVar6 = GlobalVectorConstants::FloatZero.m128_f32[1];
          fVar7 = GlobalVectorConstants::FloatZero.m128_f32[2];
          fVar8 = GlobalVectorConstants::FloatZero.m128_f32[3];
          (this->TypedValue).Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          (this->TypedValue).Translation.XY.m128d_f64[1] = (double)fVar6;
          (this->TypedValue).Translation.ZW.m128d_f64[0] = (double)fVar7;
          (this->TypedValue).Translation.ZW.m128d_f64[1] = (double)fVar8;
          fVar6 = GlobalVectorConstants::Float1110.m128_f32[1];
          fVar7 = GlobalVectorConstants::Float1110.m128_f32[2];
          fVar8 = GlobalVectorConstants::Float1110.m128_f32[3];
          (this->TypedValue).Scale3D.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::Float1110.m128_f32[0];
          (this->TypedValue).Scale3D.XY.m128d_f64[1] = (double)fVar6;
          (this->TypedValue).Scale3D.ZW.m128d_f64[0] = (double)fVar7;
          (this->TypedValue).Scale3D.ZW.m128d_f64[1] = (double)fVar8;
          this->bIsSet = true;
        }
        goto LAB_14d6354ea;
      }
    }
    if (this->bIsSet != false) {
      this->bIsSet = false;
      return;
    }
  }
  return;
}

// GetValue @ 14d661d10

TVector<double> * __thiscall
TOptional<UE::Math::TVector<double>_>::GetValue(TOptional<UE::Math::TVector<double>_> *this)

{
  code *pcVar1;
  bool bVar2;
  TVector<double> *pTVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TVector<double> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return &this->TypedValue;
}

