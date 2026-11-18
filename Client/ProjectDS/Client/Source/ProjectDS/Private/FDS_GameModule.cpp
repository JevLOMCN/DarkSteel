// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 5

// StartupModule @ 14bbe5e60

void __thiscall FDS_GameModule::StartupModule(FDS_GameModule *this)

{
  FDS_GameplayTags::InitNativeTags();
  UDS_GameplayAbility::InitAbilityClassTemplateMap();
  UDS_AbilityDataSet::InitAbilityDataClassTemplateMap();
  UDS_CharStateData::InitStateInfoMap();
  return;
}

// PreUnloadCallback @ 14bbe5e90

void __thiscall FDS_GameModule::PreUnloadCallback(FDS_GameModule *this)

{
  return;
}

// PostLoadCallback @ 14bbe5ea0

void __thiscall FDS_GameModule::PostLoadCallback(FDS_GameModule *this)

{
  return;
}

// ShutdownModule @ 14bbe5eb0

void __thiscall FDS_GameModule::ShutdownModule(FDS_GameModule *this)

{
  return;
}

// IsGameModule @ 14bbe5ec0

bool __thiscall FDS_GameModule::IsGameModule(FDS_GameModule *this)

{
  return true;
}

