// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 1

// RestorePreAnimatedValue @ 14693e4d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UE::MovieScene::
TPreAnimatedMaterialTraits<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
::RestorePreAnimatedValue
          (FWidgetMaterialKey *param_1,FMovieScenePreAnimatedMaterialParameters *param_2,
          FRestoreStateParams *param_3)

{
  int iVar1;
  UWidget *pUVar2;
  UClass *pUVar3;
  UMaterialInterface *pUVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  FWeakObjectPtr local_res8;
  undefined1 local_38 [16];
  undefined1 local_28 [8];
  FWidgetMaterialHandle local_20;
  
  local_res8 = *(FWeakObjectPtr *)&param_1->Object;
  pUVar2 = (UWidget *)FWeakObjectPtr::Get(&local_res8);
  if (pUVar2 != (UWidget *)0x0) {
    pUVar3 = Z_Construct_UClass_UWidget_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar5 = GetTypeName<UWidget>((FString *)local_38);
      pwVar6 = L"";
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      pFVar5 = GetFullNameForCastLogError<UObject>((FString *)local_28,(UObject *)pUVar2);
      if ((pFVar5->Data).ArrayNum != 0) {
        pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar6,pwVar7);
    }
    local_38._0_8_ = (param_1->WidgetMaterialHandle).TypeName;
    local_38._8_8_ = (param_1->WidgetMaterialHandle).Data;
    local_28 = (undefined1  [8])pUVar2;
    local_20.TypeName = (FName)local_38._0_8_;
    local_20.Data = (void *)local_38._8_8_;
    pUVar4 = FMovieScenePreAnimatedMaterialParameters::GetMaterial(param_2);
    if (pUVar4 != (UMaterialInterface *)0x0) {
      pUVar4 = FMovieScenePreAnimatedMaterialParameters::GetMaterial(param_2);
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      if (((FName)local_38._0_8_ != (FName)0x0) && ((void *)local_38._8_8_ != (void *)0x0)) {
        FWidgetMaterialHandle::SetMaterial(&local_20,pUVar4,pUVar2);
      }
    }
  }
  return;
}

