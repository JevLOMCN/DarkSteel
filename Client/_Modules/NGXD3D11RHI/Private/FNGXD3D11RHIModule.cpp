// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NGXD3D11RHI
// Functions: 3

// StartupModule @ 14de12660

void __thiscall FNGXD3D11RHIModule::StartupModule(FNGXD3D11RHIModule *this)

{
  FName FVar1;
  FName *pFVar2;
  FModuleManager *this_00;
  FName local_res10 [3];
  
  pFVar2 = ::FName::FName(local_res10,L"NGXRHI");
  FVar1 = *pFVar2;
  this_00 = FModuleManager::Get();
  FModuleManager::LoadModuleChecked(this_00,FVar1);
  return;
}

// ShutdownModule @ 14de126a0

void __thiscall FNGXD3D11RHIModule::ShutdownModule(FNGXD3D11RHIModule *this)

{
  return;
}

// CreateNGXRHI @ 14de126b0

/* WARNING: Enum "ENGXBinariesSearchOrder": Some values do not have unique names */
/* WARNING: Enum "ENGXProjectIdentifier": Some values do not have unique names */

TUniquePtr<NGXRHI,TDefaultDelete<NGXRHI>_> __thiscall
FNGXD3D11RHIModule::CreateNGXRHI(FNGXD3D11RHIModule *this,FNGXRHICreateArguments *param_1)

{
  FNGXD3D11RHI *pFVar1;
  FNGXRHICreateArguments *in_R8;
  
  pFVar1 = ::operator_new(0x128);
  if (pFVar1 != (FNGXD3D11RHI *)0x0) {
    pFVar1 = FNGXD3D11RHI::FNGXD3D11RHI(pFVar1,in_R8);
    (param_1->PluginBaseDir).Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar1;
    return (TUniquePtr<NGXRHI,TDefaultDelete<NGXRHI>_>)(NGXRHI *)param_1;
  }
  (param_1->PluginBaseDir).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  return (TUniquePtr<NGXRHI,TDefaultDelete<NGXRHI>_>)(NGXRHI *)param_1;
}

