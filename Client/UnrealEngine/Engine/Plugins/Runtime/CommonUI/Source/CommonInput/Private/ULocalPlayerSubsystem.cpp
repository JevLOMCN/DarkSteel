// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonInput
// Functions: 1

// GetLocalPlayerChecked<ULocalPlayer> @ 14a76f4b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULocalPlayer * __thiscall
ULocalPlayerSubsystem::GetLocalPlayerChecked<ULocalPlayer>(ULocalPlayerSubsystem *this)

{
  int iVar1;
  ULocalPlayer *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  pUVar2 = *(ULocalPlayer **)&this->field_0x20;
  if (pUVar2 == (ULocalPlayer *)0x0) {
    pFVar4 = GetTypeName<ULocalPlayer>(&local_28);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar5);
  }
  pUVar3 = Z_Construct_UClass_ULocalPlayer_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar3->_padding_)) {
    return pUVar2;
  }
  pFVar4 = GetTypeName<ULocalPlayer>(&local_28);
  pwVar5 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UObject>(&local_18,(UObject *)pUVar2);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar5,pwVar6);
}

