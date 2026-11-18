// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 2

// DiagnosticMessage @ 14a8f2cd0

FString * __thiscall
UE::PoseSearch::FInteractionIsland::FPostTickFunction::DiagnosticMessage
          (FPostTickFunction *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"UE::PoseSearch::FInteractionIsland::FPostTickFunction"
                    );
  return __return_storage_ptr__;
}

// ExecuteTick @ 14a8f5760

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::PoseSearch::FInteractionIsland::FPostTickFunction::ExecuteTick
          (FPostTickFunction *this,float param_1,ELevelTick param_2,Type param_3,
          TRefCountPtr<FBaseGraphTask> *param_4)

{
  code *pcVar1;
  bool bVar2;
  FInteractionValidator local_18;
  
  if (this->Island == (FInteractionIsland *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Island",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionIsland.cpp"
                       ,0x1fd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->Island->bHasTickDependencies != false) {
    FInteractionValidator::FInteractionValidator(&local_18,this->Island);
    if (this->Island->bPostTickFunctionExecuted == false) {
      if (this->Island->bPreTickFunctionExecuted == false) {
        if (1 < (byte)LogPoseSearch._0_1_) {
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
        }
        LogTickDependencies(this->Island);
      }
      this->Island->bPostTickFunctionExecuted = true;
    }
    else if (2 < (byte)LogPoseSearch._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
      FInteractionValidator::~FInteractionValidator(&local_18);
      return;
    }
    FInteractionValidator::~FInteractionValidator(&local_18);
  }
  return;
}

