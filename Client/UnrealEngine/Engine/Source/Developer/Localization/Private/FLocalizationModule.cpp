// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 2

// HandleRegenLocCommand @ 146b37310

bool __thiscall
FLocalizationModule::HandleRegenLocCommand(FLocalizationModule *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = FTextLocalizationResourceGenerator::GenerateLocResAndUpdateLiveEntriesFromConfig
                    (param_1,None);
  return bVar1;
}

// GetLocalizationTargetByName @ 146b37360

ULocalizationTarget * __thiscall
FLocalizationModule::GetLocalizationTargetByName
          (FLocalizationModule *this,FString *param_1,bool param_2)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  ULocalizationTargetSet *pUVar5;
  FScriptContainerElement *pFVar6;
  ULocalizationTarget *pUVar7;
  bool bVar8;
  undefined1 local_res18 [8];
  
  if (!param_2) {
    pUVar5 = ULocalizationSettings::GetGameTargetSet();
    pFVar6 = (pUVar5->TargetObjects).AllocatorInstance.Data;
    iVar1 = (pUVar5->TargetObjects).ArrayNum;
    pFVar3 = pFVar6 + (longlong)iVar1 * 8;
    do {
      if ((pUVar5->TargetObjects).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TObjectPtr<ULocalizationTarget>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar6 == pFVar3) goto LAB_146b37450;
      pUVar7 = *(ULocalizationTarget **)pFVar6;
      iVar4 = (param_1->Data).ArrayNum;
      iVar2 = (pUVar7->Settings).Name.Data.ArrayNum;
      if (iVar2 == iVar4) {
        if (iVar2 < 2) goto LAB_146b373e1;
        iVar4 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(pUVar7->Settings).Name.Data.AllocatorInstance.Data,
                           (wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar8 = iVar4 == 0;
      }
      else {
        bVar8 = iVar2 + iVar4 == 1;
      }
      if (bVar8) goto LAB_146b373e1;
      pFVar6 = pFVar6 + 8;
    } while( true );
  }
  pUVar5 = ULocalizationSettings::GetEngineTargetSet();
  pFVar6 = (pUVar5->TargetObjects).AllocatorInstance.Data;
  iVar1 = (pUVar5->TargetObjects).ArrayNum;
  pFVar3 = pFVar6 + (longlong)iVar1 * 8;
  do {
    if ((pUVar5->TargetObjects).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TObjectPtr<ULocalizationTarget>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res18);
    }
    if (pFVar6 == pFVar3) {
LAB_146b37450:
      pFVar3 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      return (ULocalizationTarget *)0x0;
    }
    pUVar7 = *(ULocalizationTarget **)pFVar6;
    iVar4 = (param_1->Data).ArrayNum;
    iVar2 = (pUVar7->Settings).Name.Data.ArrayNum;
    if (iVar2 == iVar4) {
      if (iVar2 < 2) {
LAB_146b373e1:
        pFVar3 = (param_1->Data).AllocatorInstance.Data;
        if (pFVar3 == (FScriptContainerElement *)0x0) {
          return pUVar7;
        }
        FMemory::Free(pFVar3);
        return pUVar7;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pUVar7->Settings).Name.Data.AllocatorInstance.Data,
                         (wchar_t *)(param_1->Data).AllocatorInstance.Data);
      bVar8 = iVar4 == 0;
    }
    else {
      bVar8 = iVar2 + iVar4 == 1;
    }
    if (bVar8) goto LAB_146b373e1;
    pFVar6 = pFVar6 + 8;
  } while( true );
}

