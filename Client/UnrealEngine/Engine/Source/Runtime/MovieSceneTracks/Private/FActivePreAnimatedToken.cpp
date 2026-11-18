// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// RestoreState @ 1466e3460

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FActivePreAnimatedToken::RestoreState
          (FActivePreAnimatedToken *this,UObject *param_1,FRestoreStateParams *param_2)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_AEmitter_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      param_1 = *(UObject **)&param_1[0x11].field_0x18;
      goto LAB_1466e34d0;
    }
  }
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_UFXSystemComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_1466e34d0;
  }
  param_1 = (UObject *)0x0;
LAB_1466e34d0:
  if (param_1 != (UObject *)0x0) {
    (**(code **)(*(longlong *)param_1 + 0x2c8))(param_1,this->bCurrentlyActive,1);
  }
  return;
}

