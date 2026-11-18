// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 5

// ~FPSOCSVStatTracker @ 145c8a7e0

void __thiscall FPSOCSVStatTracker::~FPSOCSVStatTracker(FPSOCSVStatTracker *this)

{
  atomic<int> *paVar1;
  EPSOPrecacheCompileType EVar2;
  code *pcVar3;
  bool bVar4;
  FCsvProfiler *this_00;
  FPersistentStats *pFVar5;
  TCsvPersistentCustomStat<int> *pTVar6;
  TCsvPersistentCustomStat<int> *pTVar7;
  
  if (bEnableStatTracker) {
    this_00 = FCsvProfiler::Get();
    bVar4 = FCsvProfiler::IsCategoryEnabled(this_00,_GCsvCategory_PSOPrecacheCompiling.Index);
    if ((bVar4) && (this->bPrecache != false)) {
      pFVar5 = GetStats();
      LOCK();
      paVar1 = &pFVar5->TotalCompletedPSOPrecompiles->Value;
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
      LOCK();
      paVar1 = &pFVar5->PSOPrecompileQueueLength->Value;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (this->bCompute != false) {
        LOCK();
        paVar1 = &pFVar5->PSOComputePrecompilesInProgress->Value;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
      }
      EVar2 = this->Pri;
      if (EVar2 == NotSet) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4687553501859939210>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                           ,0x38a,
                           "Pri != FGraphicsPipelineStateInitializer::EPSOPrecacheCompileType::NotSet"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        pFVar5 = GetStats();
        pTVar7 = (TCsvPersistentCustomStat<int> *)0x0;
        if (EVar2 == MinPri) {
          pTVar6 = pFVar5->MinPriPrecacheInFlight;
        }
        else if (EVar2 == NormalPri) {
          pTVar6 = pFVar5->NormalPriPrecacheInFlight;
        }
        else if (EVar2 == MaxPri) {
          pTVar6 = pFVar5->MaxPriPrecacheInFlight;
        }
        else {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                             ,0x39f,L"");
          pTVar6 = pTVar7;
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        LOCK();
        pTVar6->Value = (atomic<int>)((int)pTVar6->Value + -1);
        UNLOCK();
        EVar2 = this->Pri;
        pFVar5 = GetStats();
        if (EVar2 == MinPri) {
          pTVar7 = pFVar5->MinPriPSOPrecompileQueueLength;
        }
        else {
          if (EVar2 == NormalPri) {
            LOCK();
            paVar1 = &pFVar5->NormalPriPSOPrecompileQueueLength->Value;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            return;
          }
          if (EVar2 == MaxPri) {
            LOCK();
            paVar1 = &pFVar5->MaxPriPSOPrecompileQueueLength->Value;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            return;
          }
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                             ,0x39f,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        LOCK();
        pTVar7->Value = (atomic<int>)((int)pTVar7->Value + -1);
        UNLOCK();
      }
    }
  }
  return;
}

// GetStats @ 145cacc90

FPersistentStats * __cdecl FPSOCSVStatTracker::GetStats(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_struct_FPSOCSVStatTracker::FPersistentStats&___ptr64___cdecl_FPSOCSVStatTracker::GetStats(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_struct_FPSOCSVStatTracker::FPersistentStats&___ptr64___cdecl_FPSOCSVStatTracker::GetStats(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_struct_FPSOCSVStatTracker::FPersistentStats&___ptr64___cdecl_FPSOCSVStatTracker::GetStats(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FPersistentStats::FPersistentStats
                (&`private:_static_struct_FPSOCSVStatTracker::FPersistentStats&___ptr64___cdecl_FPSOCSVStatTracker::GetStats(void)'
                  ::__l2::PersistentStats);
      _Init_thread_footer(&`private:_static_struct_FPSOCSVStatTracker::FPersistentStats&___ptr64___cdecl_FPSOCSVStatTracker::GetStats(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`private:_static_struct_FPSOCSVStatTracker::FPersistentStats&___ptr64___cdecl_FPSOCSVStatTracker::GetStats(void)'
              ::__l2::PersistentStats;
    }
  }
  return &`private:_static_struct_FPSOCSVStatTracker::FPersistentStats&___ptr64___cdecl_FPSOCSVStatTracker::GetStats(void)'
          ::__l2::PersistentStats;
}

// SetInFlightPriority @ 145cbf370

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FPSOCSVStatTracker::SetInFlightPriority(FPSOCSVStatTracker *this,EPSOPrecacheCompileType param_1)

{
  atomic<int> *paVar1;
  EPSOPrecacheCompileType EVar2;
  code *pcVar3;
  bool bVar4;
  FCsvProfiler *this_00;
  FPersistentStats *pFVar5;
  
  if (bEnableStatTracker) {
    this_00 = FCsvProfiler::Get();
    bVar4 = FCsvProfiler::IsCategoryEnabled(this_00,_GCsvCategory_PSOPrecacheCompiling.Index);
    if ((bVar4) && (this->bPrecache != false)) {
      if (param_1 != this->Pri) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPri == Pri",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                           ,0x371,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (param_1 == NotSet) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPri != FGraphicsPipelineStateInitializer::EPSOPrecacheCompileType::NotSet"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                           ,0x372,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      EVar2 = this->Pri;
      pFVar5 = GetStats();
      if (EVar2 != MinPri) {
        if (EVar2 == NormalPri) {
          LOCK();
          paVar1 = &pFVar5->NormalPriPrecacheInFlight->Value;
          *paVar1 = (atomic<int>)((int)*paVar1 + 1);
          UNLOCK();
          return;
        }
        if (EVar2 != MaxPri) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                             ,0x39f,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          LOCK();
          _DAT_00000010 = _DAT_00000010 + 1;
          UNLOCK();
          return;
        }
        LOCK();
        paVar1 = &pFVar5->MaxPriPrecacheInFlight->Value;
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
        return;
      }
      LOCK();
      paVar1 = &pFVar5->MinPriPrecacheInFlight->Value;
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
    }
  }
  return;
}

// SetPriority @ 145cbfe20

void __thiscall
FPSOCSVStatTracker::SetPriority(FPSOCSVStatTracker *this,EPSOPrecacheCompileType param_1)

{
  EPSOPrecacheCompileType EVar1;
  code *pcVar2;
  bool bVar3;
  FCsvProfiler *this_00;
  FPersistentStats *pFVar4;
  TCsvPersistentCustomStat<int> *pTVar5;
  TCsvPersistentCustomStat<int> *pTVar6;
  
  if (bEnableStatTracker) {
    this_00 = FCsvProfiler::Get();
    bVar3 = FCsvProfiler::IsCategoryEnabled(this_00,_GCsvCategory_PSOPrecacheCompiling.Index);
    if (((bVar3) && (this->bPrecache != false)) && (EVar1 = this->Pri, param_1 != EVar1)) {
      pTVar6 = (TCsvPersistentCustomStat<int> *)0x0;
      if (EVar1 != NotSet) {
        pFVar4 = GetStats();
        if (EVar1 == MinPri) {
          pTVar5 = pFVar4->MinPriPSOPrecompileQueueLength;
        }
        else if (EVar1 == NormalPri) {
          pTVar5 = pFVar4->NormalPriPSOPrecompileQueueLength;
        }
        else if (EVar1 == MaxPri) {
          pTVar5 = pFVar4->MaxPriPSOPrecompileQueueLength;
        }
        else {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                             ,0x39f,L"");
          pTVar5 = pTVar6;
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        LOCK();
        pTVar5->Value = (atomic<int>)((int)pTVar5->Value + -1);
        UNLOCK();
      }
      this->Pri = param_1;
      pFVar4 = GetStats();
      if (param_1 == MinPri) {
        pTVar6 = pFVar4->MinPriPSOPrecompileQueueLength;
      }
      else if (param_1 == NormalPri) {
        pTVar6 = pFVar4->NormalPriPSOPrecompileQueueLength;
      }
      else if (param_1 == MaxPri) {
        pTVar6 = pFVar4->MaxPriPSOPrecompileQueueLength;
      }
      else {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                           ,0x39f,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      LOCK();
      pTVar6->Value = (atomic<int>)((int)pTVar6->Value + 1);
      UNLOCK();
    }
  }
  return;
}

// SetState @ 145cbff50

void __thiscall
FPSOCSVStatTracker::SetState
          (FPSOCSVStatTracker *this,bool param_1,bool param_2,EPSOPrecacheCompileType param_3)

{
  atomic<int> *paVar1;
  bool bVar2;
  FCsvProfiler *this_00;
  FPersistentStats *pFVar3;
  
  if (bEnableStatTracker) {
    this_00 = FCsvProfiler::Get();
    bVar2 = FCsvProfiler::IsCategoryEnabled(this_00,_GCsvCategory_PSOPrecacheCompiling.Index);
    if (bVar2) {
      this->bPrecache = param_1;
      this->bCompute = param_2;
      if (param_1) {
        pFVar3 = GetStats();
        LOCK();
        paVar1 = &pFVar3->PSOPrecompileQueueLength->Value;
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
        if (this->bCompute != false) {
          LOCK();
          paVar1 = &pFVar3->PSOComputePrecompilesInProgress->Value;
          *paVar1 = (atomic<int>)((int)*paVar1 + 1);
          UNLOCK();
        }
        SetPriority(this,param_3);
      }
    }
  }
  return;
}

