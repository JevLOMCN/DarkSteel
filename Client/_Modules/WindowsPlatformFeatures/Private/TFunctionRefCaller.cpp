// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WindowsPlatformFeatures
// Functions: 3

// Call @ 148d25800

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(bool,FString_const_&),void,bool,FString_const_&>::Call
          (void *param_1,bool *param_2,FString *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000148d2580d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(*param_2,param_3);
  return;
}

// Call @ 148d25820

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FWindowsVideoRecordingSystem::FinalizeRecording'::__l47::<lambda_1>,void,bool,FString_const_&>
::Call(void *param_1,bool *param_2,FString *param_3)

{
  `FWindowsVideoRecordingSystem::FinalizeRecording'::__l47::<lambda_1>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 148d25830

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FHighlightRecorder::SaveHighlight'::__l66::<lambda_1>,void>::Call(void *param_1)

{
  double dVar1;
  FHighlightRecorder *this;
  code *pcVar2;
  longlong *plVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uVar6;
  longlong *plVar7;
  LARGE_INTEGER LStackX_8;
  
  this = *(FHighlightRecorder **)param_1;
  dVar1 = *(double *)((longlong)param_1 + 0x18);
  if (!__CsvProfilerStat220) {
    FCsvProfilerTrace::OutputInlineStat
              ("HighlightRecorder_SaveInBackground",_GCsvCategory_WindowsVideoRecordingSystem.Index)
    ;
    __CsvProfilerStat220 = true;
  }
  uVar4 = _GCsvCategory_WindowsVideoRecordingSystem.Index;
  FCsvProfiler::BeginStat
            ("HighlightRecorder_SaveInBackground",_GCsvCategory_WindowsVideoRecordingSystem.Index,
             "CSV_HighlightRecorder_SaveInBackground");
  QueryPerformanceCounter(&LStackX_8);
  bVar5 = FHighlightRecorder::SaveHighlightInBackgroundImpl
                    (this,(FString *)((longlong)param_1 + 8),dVar1);
  QueryPerformanceCounter(&LStackX_8);
  if (4 < (byte)HighlightRecorder._0_1_) {
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&HighlightRecorder);
  }
  LStackX_8.s.LowPart._0_1_ = bVar5;
  CheckCallable(*(void **)&this->DoneCallback);
  pcVar2 = *(code **)&this->DoneCallback;
  plVar3 = *(longlong **)&(this->DoneCallback).field_0x28;
  plVar7 = (longlong *)&(this->DoneCallback).field_0x10;
  if (plVar3 != (longlong *)0x0) {
    plVar7 = plVar3;
  }
  uVar6 = (**(code **)(*plVar7 + 8))();
  (*pcVar2)(uVar6,&LStackX_8,(FString *)((longlong)param_1 + 8));
  LOCK();
  this->bSaving = (FThreadSafeBool)0x0;
  UNLOCK();
  FCsvProfiler::EndStat("HighlightRecorder_SaveInBackground",uVar4);
  return;
}

