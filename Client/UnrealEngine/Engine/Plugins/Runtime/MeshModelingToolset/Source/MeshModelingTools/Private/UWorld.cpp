// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 1

// SpawnActor<AInternalToolFrameworkActor> @ 14cc1a5d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

AInternalToolFrameworkActor * __thiscall
UWorld::SpawnActor<AInternalToolFrameworkActor>
          (UWorld *this,TVector<double> *param_1,TRotator<double> *param_2,
          FActorSpawnParameters *param_3)

{
  int iVar1;
  UClass *pUVar2;
  AInternalToolFrameworkActor *pAVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  pUVar2 = Z_Construct_UClass_AInternalToolFrameworkActor_NoRegister();
  pAVar3 = (AInternalToolFrameworkActor *)SpawnActor(this,pUVar2,param_1,param_2,param_3);
  if (pAVar3 == (AInternalToolFrameworkActor *)0x0) {
    pAVar3 = (AInternalToolFrameworkActor *)0x0;
  }
  else {
    pUVar2 = Z_Construct_UClass_AInternalToolFrameworkActor_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(pAVar3->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar2->_padding_)) {
      pFVar4 = GetTypeName<AInternalToolFrameworkActor>(&local_28);
      pwVar6 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<AActor>(&local_18,(AActor *)pAVar3);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar6,pwVar5);
    }
  }
  return pAVar3;
}

