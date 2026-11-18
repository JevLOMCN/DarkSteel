// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// RestorePreAnimatedValue @ 1467bdd60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::MovieScene::FPreAnimatedCameraComponentShakeTraits::RestorePreAnimatedValue
          (FPreAnimatedCameraComponentShakeTraits *this,FObjectKey *param_1,bool param_2,
          FRestoreStateParams *param_3)

{
  int iVar1;
  UCameraComponent *this_00;
  UClass *pUVar2;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0].ObjectIndex = param_1->ObjectIndex;
  local_res10[0].ObjectSerialNumber = param_1->ObjectSerialNumber;
  this_00 = (UCameraComponent *)FWeakObjectPtr::Get(local_res10);
  if (this_00 != (UCameraComponent *)0x0) {
    pUVar2 = Z_Construct_UClass_UCameraComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      UCameraComponent::ClearAdditiveOffset(this_00);
      UCameraComponent::ClearExtraPostProcessBlends(this_00);
    }
  }
  return;
}

