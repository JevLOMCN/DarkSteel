// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// RestorePreAnimatedValue @ 1467bdb50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TPreAnimatedMaterialTraits<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>
::RestorePreAnimatedValue
          (FComponentMaterialKey *param_1,FMovieScenePreAnimatedMaterialParameters *param_2,
          FRestoreStateParams *param_3)

{
  UMaterialInterface *pUVar1;
  FWeakObjectPtr local_res8;
  FComponentMaterialAccessor local_28;
  
  local_res8.ObjectIndex = (param_1->Object).ObjectIndex;
  local_res8.ObjectSerialNumber = (param_1->Object).ObjectSerialNumber;
  local_28.Object = FWeakObjectPtr::Get(&local_res8);
  local_28.MaterialInfo.MaterialSlotName = (param_1->MaterialInfo).MaterialSlotName;
  local_28.MaterialInfo.MaterialSlotIndex = (param_1->MaterialInfo).MaterialSlotIndex;
  local_28.MaterialInfo.MaterialType = (param_1->MaterialInfo).MaterialType;
  local_28.MaterialInfo._13_3_ = *(undefined3 *)&(param_1->MaterialInfo).field_0xd;
  if (local_28.Object != (UObject *)0x0) {
    pUVar1 = FMovieScenePreAnimatedMaterialParameters::GetMaterial(param_2);
    if (pUVar1 != (UMaterialInterface *)0x0) {
      pUVar1 = FMovieScenePreAnimatedMaterialParameters::GetMaterial(param_2);
      FComponentMaterialAccessor::SetMaterial(&local_28,pUVar1);
    }
  }
  return;
}

