// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// RestorePreAnimatedValue @ 1467bdbc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::MovieScene::FComponentAttachmentPreAnimatedTraits::RestorePreAnimatedValue
          (FObjectKey *param_1,FPreAnimAttachment *param_2,FRestoreStateParams *param_3)

{
  int iVar1;
  USceneComponent *pUVar2;
  UClass *pUVar3;
  USceneComponent *pUVar4;
  FWeakObjectPtr local_res8;
  
  local_res8.ObjectIndex = param_1->ObjectIndex;
  local_res8.ObjectSerialNumber = param_1->ObjectSerialNumber;
  pUVar2 = (USceneComponent *)FWeakObjectPtr::Get(&local_res8);
  if (pUVar2 != (USceneComponent *)0x0) {
    pUVar3 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      pUVar4 = (USceneComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_2);
      FComponentDetachParams::ApplyDetach
                (&param_2->DetachParams,pUVar2,pUVar4,&param_2->OldAttachSocket);
    }
  }
  return;
}

