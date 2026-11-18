// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// CachePreAnimatedValue @ 14677fbe0

Type __thiscall
UE::MovieScene::FPreAnimatedMobilityTraits::CachePreAnimatedValue
          (FPreAnimatedMobilityTraits *this,UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      return (Type)(byte)param_1[10].field_0x1b;
    }
  }
  return Static;
}

// RestorePreAnimatedValue @ 1467bdfb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FPreAnimatedMobilityTraits::RestorePreAnimatedValue
          (FPreAnimatedMobilityTraits *this,FObjectKey *param_1,Type param_2,
          FRestoreStateParams *param_3)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0].ObjectIndex = param_1->ObjectIndex;
  local_res10[0].ObjectSerialNumber = param_1->ObjectSerialNumber;
  pUVar2 = FWeakObjectPtr::Get(local_res10);
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      (**(code **)(*(longlong *)pUVar2 + 0x5f8))(pUVar2,param_2);
    }
  }
  return;
}

