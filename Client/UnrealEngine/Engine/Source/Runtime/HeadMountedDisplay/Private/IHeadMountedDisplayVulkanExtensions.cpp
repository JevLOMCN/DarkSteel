// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HeadMountedDisplay
// Functions: 1

// ShouldDisableVulkanVSync @ 145957d30

bool __thiscall
IHeadMountedDisplayVulkanExtensions::ShouldDisableVulkanVSync
          (IHeadMountedDisplayVulkanExtensions *this)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  longlong lVar3;
  UClass *pUVar4;
  wchar_t *pwVar5;
  bool abStackX_8 [32];
  
  pTVar1 = CVarForceStartInVR.Ref;
  abStackX_8[0] = false;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      lVar3 = 4;
      goto LAB_1487af55d;
    }
  }
  lVar3 = 0;
LAB_1487af55d:
  if (*(int *)((longlong)pTVar1->ShadowedValue + lVar3) < 1) {
    pUVar4 = Z_Construct_UClass_UGeneralProjectSettings_NoRegister();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      FConfigCacheIni::GetBool
                (GConfig,L"/Script/EngineSettings.GeneralProjectSettings",L"bStartInVR",abStackX_8,
                 &GGameIni);
    }
    else {
      pUVar4 = Z_Construct_UClass_UGeneralProjectSettings_NoRegister();
      if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar4);
      }
      abStackX_8[0] = (bool)(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[6].field_0xa;
    }
  }
  else {
    abStackX_8[0] = true;
  }
  pwVar5 = FCommandLine::Get();
  bVar2 = FParse::Param(pwVar5,L"vr");
  if ((!bVar2) && (abStackX_8[0] == false)) {
    return false;
  }
  return true;
}

