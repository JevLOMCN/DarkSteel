// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// RestorePreAnimatedValue @ 1467bdac0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FPreAnimatedAudioStateTraits<UE::MovieScene::FBoundObjectPreAnimatedStateTraits>::
RestorePreAnimatedValue
          (FPreAnimatedAudioStateTraits<UE::MovieScene::FBoundObjectPreAnimatedStateTraits> *this,
          FObjectKey param_1,EPreAnimatedAudioStateType param_2,FRestoreStateParams *param_3)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0].ObjectIndex = param_1.ObjectIndex;
  local_res10[0].ObjectSerialNumber = param_1.ObjectSerialNumber;
  pUVar2 = FWeakObjectPtr::Get(local_res10);
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UAudioComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      if (param_2 == AudioComponentLifespan) {
        (**(code **)(*(longlong *)pUVar2 + 0x4a0))(pUVar2,0);
      }
      else if (param_2 == AudioPlaying) {
        (**(code **)(*(longlong *)pUVar2 + 0x668))(pUVar2);
        return;
      }
    }
  }
  return;
}

