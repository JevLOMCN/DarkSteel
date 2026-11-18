// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// Get @ 147944a30

FParallelAnimationEvaluationStats * __cdecl FParallelAnimationEvaluationStats::Get(void)

{
  FDelegateHandle FVar1;
  FParallelAnimationEvaluationStats local_res8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_FParallelAnimationEvaluationStats&___ptr64___cdecl_FParallelAnimationEvaluationStats::Get(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_FParallelAnimationEvaluationStats&___ptr64___cdecl_FParallelAnimationEvaluationStats::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_FParallelAnimationEvaluationStats&___ptr64___cdecl_FParallelAnimationEvaluationStats::Get(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_struct_FParallelAnimationEvaluationStats&___ptr64___cdecl_FParallelAnimationEvaluationStats::Get(void)'
      ::__l2::Stats.MinTime = (atomic<float>)0x0;
      `public:_static_struct_FParallelAnimationEvaluationStats&___ptr64___cdecl_FParallelAnimationEvaluationStats::Get(void)'
      ::__l2::Stats.MaxTime = (atomic<float>)0x0;
      `public:_static_struct_FParallelAnimationEvaluationStats&___ptr64___cdecl_FParallelAnimationEvaluationStats::Get(void)'
      ::__l2::Stats.TotalTime = (atomic<float>)0x0;
      `public:_static_struct_FParallelAnimationEvaluationStats&___ptr64___cdecl_FParallelAnimationEvaluationStats::Get(void)'
      ::__l2::Stats.NumberOfTasks = (atomic<int>)0x0;
      `public:_static_struct_FParallelAnimationEvaluationStats&___ptr64___cdecl_FParallelAnimationEvaluationStats::Get(void)'
      ::__l2::Stats.EndOfFrameHandle.ID = 0;
      FVar1 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
              AddRaw<FParallelAnimationEvaluationStats>
                        ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                          *)&FCoreDelegates::OnEndFrame,&local_res8,(pmf_686309e9)0x1551f8948);
                    /* WARNING: Load size is inaccurate */
      `public:_static_struct_FParallelAnimationEvaluationStats&___ptr64___cdecl_FParallelAnimationEvaluationStats::Get(void)'
      ::__l2::Stats.EndOfFrameHandle.ID = *FVar1.ID;
      `public:_static_struct_FParallelAnimationEvaluationStats&___ptr64___cdecl_FParallelAnimationEvaluationStats::Get(void)'
      ::__l2::Stats.MaxTime = (atomic<float>)0x0;
      `public:_static_struct_FParallelAnimationEvaluationStats&___ptr64___cdecl_FParallelAnimationEvaluationStats::Get(void)'
      ::__l2::Stats.MinTime = (atomic<float>)__real_7f7fffff;
      `public:_static_struct_FParallelAnimationEvaluationStats&___ptr64___cdecl_FParallelAnimationEvaluationStats::Get(void)'
      ::__l2::Stats.TotalTime = (atomic<float>)0x0;
      `public:_static_struct_FParallelAnimationEvaluationStats&___ptr64___cdecl_FParallelAnimationEvaluationStats::Get(void)'
      ::__l2::Stats.NumberOfTasks = (atomic<int>)0x0;
      atexit(`FParallelAnimationEvaluationStats::Get'::__l2::_dynamic_atexit_destructor_for__Stats__
            );
      _Init_thread_footer(&`public:_static_struct_FParallelAnimationEvaluationStats&___ptr64___cdecl_FParallelAnimationEvaluationStats::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_FParallelAnimationEvaluationStats&___ptr64___cdecl_FParallelAnimationEvaluationStats::Get(void)'
              ::__l2::Stats;
    }
  }
  return &`public:_static_struct_FParallelAnimationEvaluationStats&___ptr64___cdecl_FParallelAnimationEvaluationStats::Get(void)'
          ::__l2::Stats;
}

// OnEndFrame @ 147959a10

void __thiscall
FParallelAnimationEvaluationStats::OnEndFrame(FParallelAnimationEvaluationStats *this)

{
  atomic<int> aVar1;
  atomic<float> aVar2;
  atomic<float> aVar3;
  atomic<float> aVar4;
  float fVar5;
  
  aVar1 = this->NumberOfTasks;
  if (0 < (int)aVar1) {
    aVar2 = this->MinTime;
    aVar3 = this->MaxTime;
    aVar4 = this->TotalTime;
    if (__real_322bcc77 < (float)((uint)aVar4 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      fVar5 = (float)aVar4 / (float)(int)aVar1;
    }
    else {
      fVar5 = 0.0;
    }
    if (!`private:_void___cdecl_FParallelAnimationEvaluationStats::OnEndFrame(void)___ptr64'::__l6::
         __CsvProfilerStat263) {
      FCsvProfilerTrace::OutputInlineStat
                ("TotalTaskTime",_GCsvCategory_AnimationParallelEvaluation.Index);
      `private:_void___cdecl_FParallelAnimationEvaluationStats::OnEndFrame(void)___ptr64'::__l6::
      __CsvProfilerStat263 = true;
    }
    FCsvProfiler::RecordCustomStat
              ("TotalTaskTime",_GCsvCategory_AnimationParallelEvaluation.Index,(float)aVar4,Set);
    if (`private:_void___cdecl_FParallelAnimationEvaluationStats::OnEndFrame(void)___ptr64'::__l10::
        __CsvProfilerStat264 == false) {
      FCsvProfilerTrace::OutputInlineStat
                ("AverageTaskTime",_GCsvCategory_AnimationParallelEvaluation.Index);
      `private:_void___cdecl_FParallelAnimationEvaluationStats::OnEndFrame(void)___ptr64'::__l10::
      __CsvProfilerStat264 = true;
    }
    FCsvProfiler::RecordCustomStat
              ("AverageTaskTime",_GCsvCategory_AnimationParallelEvaluation.Index,fVar5,Set);
    if (`private:_void___cdecl_FParallelAnimationEvaluationStats::OnEndFrame(void)___ptr64'::__l14::
        __CsvProfilerStat265 == false) {
      FCsvProfilerTrace::OutputInlineStat
                ("NumberOfTasks",_GCsvCategory_AnimationParallelEvaluation.Index);
      `private:_void___cdecl_FParallelAnimationEvaluationStats::OnEndFrame(void)___ptr64'::__l14::
      __CsvProfilerStat265 = true;
    }
    FCsvProfiler::RecordCustomStat
              ("NumberOfTasks",_GCsvCategory_AnimationParallelEvaluation.Index,(int)aVar1,Set);
    if (`private:_void___cdecl_FParallelAnimationEvaluationStats::OnEndFrame(void)___ptr64'::__l18::
        __CsvProfilerStat267 == false) {
      FCsvProfilerTrace::OutputInlineStat
                ("MinTaskTime",_GCsvCategory_AnimationParallelEvaluation.Index);
      `private:_void___cdecl_FParallelAnimationEvaluationStats::OnEndFrame(void)___ptr64'::__l18::
      __CsvProfilerStat267 = true;
    }
    FCsvProfiler::RecordCustomStat
              ("MinTaskTime",_GCsvCategory_AnimationParallelEvaluation.Index,(float)aVar2,Set);
    if (`private:_void___cdecl_FParallelAnimationEvaluationStats::OnEndFrame(void)___ptr64'::__l22::
        __CsvProfilerStat268 == false) {
      FCsvProfilerTrace::OutputInlineStat
                ("MaxTaskTime",_GCsvCategory_AnimationParallelEvaluation.Index);
      `private:_void___cdecl_FParallelAnimationEvaluationStats::OnEndFrame(void)___ptr64'::__l22::
      __CsvProfilerStat268 = true;
    }
    FCsvProfiler::RecordCustomStat
              ("MaxTaskTime",_GCsvCategory_AnimationParallelEvaluation.Index,(float)aVar3,Set);
  }
  this->MinTime = __real_7f7fffff;
  this->MaxTime = (atomic<float>)0x0;
  this->TotalTime = (atomic<float>)0x0;
  this->NumberOfTasks = (atomic<int>)0x0;
  return;
}

