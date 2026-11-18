// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// RestorePreAnimatedValue @ 1467bde50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FPreAnimatedCameraSourceShakeTraits::RestorePreAnimatedValue
          (FPreAnimatedCameraSourceShakeTraits *this,FObjectKey *param_1,bool param_2,
          FRestoreStateParams *param_3)

{
  int iVar1;
  UCameraShakeSourceComponent *this_00;
  UClass *pUVar2;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0].ObjectIndex = param_1->ObjectIndex;
  local_res10[0].ObjectSerialNumber = param_1->ObjectSerialNumber;
  this_00 = (UCameraShakeSourceComponent *)FWeakObjectPtr::Get(local_res10);
  if (this_00 != (UCameraShakeSourceComponent *)0x0) {
    pUVar2 = Z_Construct_UClass_UCameraShakeSourceComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      UCameraShakeSourceComponent::StopAllCameraShakes(this_00,true);
    }
  }
  return;
}

