// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 5

// IsSourceControlAutoSubmitEnabled @ 146b7a910

bool __cdecl FLocalizationSourceControlSettings::IsSourceControlAutoSubmitEnabled(void)

{
  char cVar1;
  bool bVar2;
  ISourceControlModule *pIVar3;
  longlong *plVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  bool local_res8 [32];
  
  pIVar3 = ISourceControlModule::Get();
  cVar1 = (**(code **)((longlong)*pIVar3 + 0x70))(pIVar3);
  if (cVar1 != '\0') {
    plVar4 = (longlong *)(**(code **)((longlong)*pIVar3 + 0x78))(pIVar3);
    cVar1 = (**(code **)(*plVar4 + 0x40))(plVar4);
    if (cVar1 != '\0') {
      pwVar5 = L"";
      pwVar6 = L"";
      local_res8[0] = false;
      if (SourceControlAutoSubmitEnabledSettingName.Data.ArrayNum != 0) {
        pwVar6 = (wchar_t *)SourceControlAutoSubmitEnabledSettingName.Data.AllocatorInstance;
      }
      if (LocalizationSourceControlSettingsCategoryName.Data.ArrayNum != 0) {
        pwVar5 = (wchar_t *)LocalizationSourceControlSettingsCategoryName.Data.AllocatorInstance;
      }
      bVar2 = FConfigCacheIni::GetBool(GConfig,pwVar5,pwVar6,local_res8,&GEditorPerProjectIni);
      if (bVar2) {
        return local_res8[0];
      }
    }
  }
  return false;
}

// IsSourceControlAvailable @ 146b7a9c0

bool __cdecl FLocalizationSourceControlSettings::IsSourceControlAvailable(void)

{
  char cVar1;
  ISourceControlModule *pIVar2;
  longlong *plVar3;
  
  pIVar2 = ISourceControlModule::Get();
  cVar1 = (**(code **)((longlong)*pIVar2 + 0x70))(pIVar2);
  if (cVar1 != '\0') {
    plVar3 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x78))(pIVar2);
    cVar1 = (**(code **)(*plVar3 + 0x40))(plVar3);
    if (cVar1 != '\0') {
      return true;
    }
  }
  return false;
}

// IsSourceControlEnabled @ 146b7aa10

bool __cdecl FLocalizationSourceControlSettings::IsSourceControlEnabled(void)

{
  char cVar1;
  bool bVar2;
  ISourceControlModule *pIVar3;
  longlong *plVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  bool local_res8 [32];
  
  pIVar3 = ISourceControlModule::Get();
  cVar1 = (**(code **)((longlong)*pIVar3 + 0x70))(pIVar3);
  if (cVar1 != '\0') {
    plVar4 = (longlong *)(**(code **)((longlong)*pIVar3 + 0x78))(pIVar3);
    cVar1 = (**(code **)(*plVar4 + 0x40))(plVar4);
    if (cVar1 != '\0') {
      pwVar5 = L"";
      pwVar6 = L"";
      local_res8[0] = true;
      if (SourceControlEnabledSettingName.Data.ArrayNum != 0) {
        pwVar6 = (wchar_t *)SourceControlEnabledSettingName.Data.AllocatorInstance;
      }
      if (LocalizationSourceControlSettingsCategoryName.Data.ArrayNum != 0) {
        pwVar5 = (wchar_t *)LocalizationSourceControlSettingsCategoryName.Data.AllocatorInstance;
      }
      bVar2 = FConfigCacheIni::GetBool(GConfig,pwVar5,pwVar6,local_res8,&GEditorPerProjectIni);
      if (!bVar2) {
        return true;
      }
      return local_res8[0];
    }
  }
  return false;
}

// SetSourceControlAutoSubmitEnabled @ 146b889b0

void __cdecl FLocalizationSourceControlSettings::SetSourceControlAutoSubmitEnabled(bool param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  
  pwVar1 = L"";
  pwVar2 = L"";
  if (SourceControlAutoSubmitEnabledSettingName.Data.ArrayNum != 0) {
    pwVar2 = (wchar_t *)SourceControlAutoSubmitEnabledSettingName.Data.AllocatorInstance.Data;
  }
  if (LocalizationSourceControlSettingsCategoryName.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)LocalizationSourceControlSettingsCategoryName.Data.AllocatorInstance.Data;
  }
  FConfigCacheIni::SetBool(GConfig,pwVar1,pwVar2,param_1,&GEditorPerProjectIni);
  return;
}

// SetSourceControlEnabled @ 146b88a10

void __cdecl FLocalizationSourceControlSettings::SetSourceControlEnabled(bool param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  
  pwVar1 = L"";
  pwVar2 = L"";
  if (SourceControlEnabledSettingName.Data.ArrayNum != 0) {
    pwVar2 = (wchar_t *)SourceControlEnabledSettingName.Data.AllocatorInstance.Data;
  }
  if (LocalizationSourceControlSettingsCategoryName.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)LocalizationSourceControlSettingsCategoryName.Data.AllocatorInstance.Data;
  }
  FConfigCacheIni::SetBool(GConfig,pwVar1,pwVar2,param_1,&GEditorPerProjectIni);
  return;
}

