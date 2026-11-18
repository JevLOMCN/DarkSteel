// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LocalizationService
// Functions: 3

// FScopedLocalizationService @ 146b2d9f0

FScopedLocalizationService * __thiscall
FScopedLocalizationService::FScopedLocalizationService(FScopedLocalizationService *this)

{
  ILocalizationServiceModule *pIVar1;
  longlong *plVar2;
  
  pIVar1 = ILocalizationServiceModule::Get();
  plVar2 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x50))(pIVar1);
  (**(code **)(*plVar2 + 8))(plVar2,CONCAT71((int7)((ulonglong)*plVar2 >> 8),1));
  return this;
}

// ~FScopedLocalizationService @ 146b2e1c0

void __thiscall
FScopedLocalizationService::~FScopedLocalizationService(FScopedLocalizationService *this)

{
  ILocalizationServiceModule *pIVar1;
  longlong *plVar2;
  
  pIVar1 = ILocalizationServiceModule::Get();
  plVar2 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x50))(pIVar1);
                    /* WARNING: Could not recover jumptable at 0x000146b2e1e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x10))(plVar2,*(code **)(*plVar2 + 0x10));
  return;
}

// GetProvider @ 146b31f10

ILocalizationServiceProvider * __thiscall
FScopedLocalizationService::GetProvider(FScopedLocalizationService *this)

{
  ILocalizationServiceModule *pIVar1;
  ILocalizationServiceProvider *pIVar2;
  
  pIVar1 = ILocalizationServiceModule::Get();
                    /* WARNING: Could not recover jumptable at 0x000146b31f27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar2 = (ILocalizationServiceProvider *)
           (**(code **)((longlong)*pIVar1 + 0x50))(pIVar1,*(code **)((longlong)*pIVar1 + 0x50));
  return pIVar2;
}

