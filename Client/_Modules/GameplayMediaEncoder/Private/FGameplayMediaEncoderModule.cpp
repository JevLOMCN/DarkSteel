// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayMediaEncoder
// Functions: 2

// StartupModule @ 148d1f750

void __thiscall FGameplayMediaEncoderModule::StartupModule(FGameplayMediaEncoderModule *this)

{
  FModuleManager *this_00;
  FName *pFVar1;
  FName local_res10 [3];
  
  this_00 = FModuleManager::Get();
  pFVar1 = ::FName::FName(local_res10,L"AVEncoder");
  FModuleManager::LoadModule(this_00,*pFVar1,None);
  return;
}

// ShutdownModule @ 148d1f790

void __thiscall FGameplayMediaEncoderModule::ShutdownModule(FGameplayMediaEncoderModule *this)

{
  FSharedReferencer<1> local_10 [2];
  
  local_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FGameplayMediaEncoder::Singleton.Object = (FGameplayMediaEncoder *)0x0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&FGameplayMediaEncoder::Singleton.SharedReferenceCount,local_10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10[0].ReferenceController);
  return;
}

