// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 2

// DoesRepresent<APawn> @ 146dcd1a0

bool __thiscall FActorInstanceHandle::DoesRepresent<APawn>(FActorInstanceHandle *this)

{
  int iVar1;
  UClass *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = GetRepresentedClass(this);
  if (pUVar2 != (UClass *)0x0) {
    pUVar3 = Z_Construct_UClass_APawn_NoRegister();
    if (pUVar3 != (UClass *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= (int)pUVar2->_padding_) &&
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return true;
      }
    }
  }
  return false;
}

// FetchActor<APawn> @ 146dce8b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

APawn * __thiscall FActorInstanceHandle::FetchActor<APawn>(FActorInstanceHandle *this)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  APawn *pAVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  FString local_28;
  FString local_18;
  
  pUVar3 = GetRepresentedClass(this);
  if (pUVar3 == (UClass *)0x0) {
    return (APawn *)0x0;
  }
  pUVar4 = Z_Construct_UClass_APawn_NoRegister();
  if (pUVar4 != (UClass *)0x0) {
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= (int)pUVar3->_padding_) &&
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) == &pUVar4->_padding_)
       ) {
      bVar2 = true;
      goto LAB_146dce8f8;
    }
  }
  bVar2 = false;
LAB_146dce8f8:
  if (!bVar2) {
    return (APawn *)0x0;
  }
  pAVar5 = (APawn *)FetchActor(this);
  if (pAVar5 == (APawn *)0x0) {
    pAVar5 = (APawn *)0x0;
  }
  else {
    pUVar3 = Z_Construct_UClass_APawn_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(pAVar5->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar6 = GetTypeName<APawn>(&local_28);
      pwVar8 = L"";
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
      pFVar6 = GetFullNameForCastLogError<AActor>(&local_18,(AActor *)pAVar5);
      if ((pFVar6->Data).ArrayNum != 0) {
        pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar8,pwVar7);
    }
  }
  return pAVar5;
}

