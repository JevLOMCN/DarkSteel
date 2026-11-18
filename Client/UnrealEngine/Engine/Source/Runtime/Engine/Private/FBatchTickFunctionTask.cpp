// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// DoTask @ 1488bcc60

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
FBatchTickFunctionTask::DoTask
          (FBatchTickFunctionTask *this,Type param_1,TRefCountPtr<FBaseGraphTask> *param_2)

{
  FScriptContainerElement *pFVar1;
  uchar uVar2;
  int iVar3;
  FTickBatchInfo *pFVar4;
  FTickFunction *this_00;
  FInternalData *pFVar5;
  code *pcVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  FScriptContainerElement *pFVar11;
  LARGE_INTEGER LVar12;
  float fVar13;
  float fVar14;
  undefined1 local_res8 [8];
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_a8;
  void *local_a0 [13];
  
  if (((this->TickBatch == (FTickBatchInfo *)0x0) || ((this->TickBatch->TickFunctions).ArrayNum < 1)
      ) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("TickBatch && TickBatch->TickFunctions.Num() > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                                ,0x195,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  fVar8 = __real_bf800000;
  dVar7 = __real_408f400000000000;
  pFVar4 = this->TickBatch;
  pFVar11 = (pFVar4->TickFunctions).AllocatorInstance.Data;
  iVar3 = (pFVar4->TickFunctions).ArrayNum;
  pFVar1 = pFVar11 + (longlong)iVar3 * 8;
  while( true ) {
    if ((pFVar4->TickFunctions).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FTickFunction_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar11 == pFVar1) break;
    this_00 = *(FTickFunction **)pFVar11;
    if ((this->Context).bLogTick != false) {
      FTickFunction::LogTickFunction(this_00,param_1,(this->Context).bLogTicksShowPrerequistes,0);
    }
    fVar9 = GTimeguardThresholdMS;
    if (this_00->TickState != Disabled) {
      if (GTimeguardThresholdMS <= 0.0) {
        LVar12.QuadPart = 0;
      }
      else {
        QueryPerformanceCounter(&local_res20);
        LVar12 = local_res20;
      }
      pFVar5 = (this_00->InternalData).Ptr;
      uVar2 = (this->Context).TickType.Value;
      pcVar6 = *(code **)(this_00->_padding_ + 0x18);
      fVar14 = (this->Context).DeltaSeconds;
      fVar13 = fVar8;
      if (pFVar5->bWasInterval) {
        fVar13 = (float)(&((this->Context).World)->TimeSeconds)[this_00->bTickEvenWhenPaused];
        if (0.0 <= pFVar5->LastTickGameTimeSeconds) {
          fVar14 = fVar13 - pFVar5->LastTickGameTimeSeconds;
        }
      }
      pFVar5->LastTickGameTimeSeconds = fVar13;
      (*pcVar6)(this_00,fVar14,uVar2,param_1,param_2);
      if ((0.0 < fVar9) &&
         (QueryPerformanceCounter(&local_a8),
         fVar9 < (float)((double)(ulonglong)(local_a8.QuadPart - (longlong)LVar12) *
                         FGenericPlatformTime::SecondsPerCycle64 * dVar7))) {
        (**(code **)(this_00->_padding_ + 0x20))(this_00,local_a0);
        if (2 < (byte)LogCore._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_FBatchTickFunctionTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
                      ::__l26::LOG_Static,(FLogCategoryBase *)&LogCore);
        }
        if (local_a0[0] != (void *)0x0) {
          FMemory::Free(local_a0[0]);
        }
      }
    }
    pFVar5 = (this_00->InternalData).Ptr;
    if (pFVar5 != (FInternalData *)0x0) {
      pFVar5->TaskState = NotQueued;
      ((this_00->InternalData).Ptr)->TaskPointer = (void *)0x0;
    }
    pFVar11 = pFVar11 + 8;
  }
  return;
}

