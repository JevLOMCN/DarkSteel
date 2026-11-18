// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Update @ 14885fb60

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FStreamAllResourcesLatentCommand::Update(FStreamAllResourcesLatentCommand *this)

{
  FStreamingManagerCollection *pFVar1;
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  pFVar1 = IStreamingManager::Get();
  GStreamAllResourcesStillInFlight = (**(code **)(pFVar1->_padding_ + 0x18))(pFVar1,this->Duration);
  QueryPerformanceCounter(local_res8);
  if (GStreamAllResourcesStillInFlight == 0) {
    if (4 < (byte)LogEngineAutomationLatentCommand._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&::LOG_Static,(FLogCategoryBase *)&LogEngineAutomationLatentCommand);
    }
  }
  else if (2 < (byte)LogEngineAutomationLatentCommand._0_1_) {
    UE::Logging::Private::BasicLog<3>
              (&::LOG_Static,(FLogCategoryBase *)&LogEngineAutomationLatentCommand);
    return true;
  }
  return true;
}

