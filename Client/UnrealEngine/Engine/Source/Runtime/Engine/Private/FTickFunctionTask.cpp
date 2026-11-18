// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// DoTask @ 1488bcf00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FTickFunctionTask::DoTask
          (FTickFunctionTask *this,Type param_1,TRefCountPtr<FBaseGraphTask> *param_2)

{
  uchar uVar1;
  FTickFunction *pFVar2;
  FInternalData *pFVar3;
  code *pcVar4;
  float fVar5;
  LARGE_INTEGER LVar6;
  float fVar7;
  float fVar8;
  LARGE_INTEGER local_res8;
  void *local_38 [6];
  
  if ((this->Context).bLogTick != false) {
    FTickFunction::LogTickFunction(this->Target,param_1,(this->Context).bLogTicksShowPrerequistes,0)
    ;
  }
  fVar5 = GTimeguardThresholdMS;
  if (this->Target->TickState != Disabled) {
    if (GTimeguardThresholdMS <= 0.0) {
      LVar6.QuadPart = 0;
    }
    else {
      QueryPerformanceCounter(&local_res8);
      LVar6 = local_res8;
    }
    pFVar2 = this->Target;
    uVar1 = (this->Context).TickType.Value;
    fVar8 = (this->Context).DeltaSeconds;
    pFVar3 = (pFVar2->InternalData).Ptr;
    pcVar4 = *(code **)(pFVar2->_padding_ + 0x18);
    fVar7 = __real_bf800000;
    if (pFVar3->bWasInterval) {
      fVar7 = (float)(&((this->Context).World)->TimeSeconds)[pFVar2->bTickEvenWhenPaused];
      if (0.0 <= pFVar3->LastTickGameTimeSeconds) {
        fVar8 = fVar7 - pFVar3->LastTickGameTimeSeconds;
      }
    }
    pFVar3->LastTickGameTimeSeconds = fVar7;
    (*pcVar4)(pFVar2,fVar8,uVar1,param_1,param_2);
    if ((0.0 < fVar5) &&
       (QueryPerformanceCounter(&local_res8),
       fVar5 < (float)((double)(ulonglong)(local_res8.QuadPart - (longlong)LVar6) *
                       FGenericPlatformTime::SecondsPerCycle64 * __real_408f400000000000))) {
      (**(code **)(this->Target->_padding_ + 0x20))(this->Target,local_38);
      if (2 < (byte)LogCore._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_FTickFunctionTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
                    ::__l15::LOG_Static,(FLogCategoryBase *)&LogCore);
      }
      if (local_38[0] != (void *)0x0) {
        FMemory::Free(local_38[0]);
      }
    }
  }
  pFVar2 = this->Target;
  pFVar3 = (pFVar2->InternalData).Ptr;
  if (pFVar3 != (FInternalData *)0x0) {
    pFVar3->TaskState = NotQueued;
    ((pFVar2->InternalData).Ptr)->TaskPointer = (void *)0x0;
  }
  return;
}

