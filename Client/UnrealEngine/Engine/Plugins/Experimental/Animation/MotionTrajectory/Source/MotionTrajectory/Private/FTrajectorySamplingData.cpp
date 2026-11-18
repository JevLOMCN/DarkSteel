// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MotionTrajectory
// Functions: 2

// StaticStruct @ 14a94aa20

UScriptStruct * __cdecl FTrajectorySamplingData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTrajectorySamplingData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MotionTrajectory();
    Z_Registration_Info_UScriptStruct_FTrajectorySamplingData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTrajectorySamplingData,(UObject *)pUVar1,
                         L"TrajectorySamplingData");
  }
  return Z_Registration_Info_UScriptStruct_FTrajectorySamplingData.OuterSingleton;
}

// Init @ 14a94b9a0

void __thiscall FTrajectorySamplingData::Init(FTrajectorySamplingData *this)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  
  if (this->HistorySamplesPerSecond == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("HistorySamplesPerSecond",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Animation\\MotionTrajectory\\Source\\MotionTrajectory\\Private\\MotionTrajectoryLibrary.cpp"
                       ,0xd,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->PredictionSamplesPerSecond == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PredictionSamplesPerSecond",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Animation\\MotionTrajectory\\Source\\MotionTrajectory\\Private\\MotionTrajectoryLibrary.cpp"
                       ,0xe,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  fVar3 = __real_bf000000;
  fVar2 = __real_3f800000;
  fVar6 = (float)this->HistorySamplesPerSecond;
  fVar5 = __real_3f800000 / fVar6;
  this->NumHistorySamples =
       -((int)ROUND(__real_bf000000 - (fVar6 + fVar6) * this->HistoryLengthSeconds) >> 1);
  fVar6 = (float)this->PredictionSamplesPerSecond;
  this->SecondsPerHistorySample = fVar5;
  this->SecondsPerPredictionSample = fVar2 / fVar6;
  this->NumPredictionSamples =
       -((int)ROUND(fVar3 - (fVar6 + fVar6) * this->PredictionLengthSeconds) >> 1);
  return;
}

