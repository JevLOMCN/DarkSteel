// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 4

// FNiagaraGpuProfilerListener @ 1492d1210

FNiagaraGpuProfilerListener * __thiscall
FNiagaraGpuProfilerListener::FNiagaraGpuProfilerListener(FNiagaraGpuProfilerListener *this)

{
  this->bEnabled = false;
  (this->GameThreadHandler).ID = 0;
  return this;
}

// ~FNiagaraGpuProfilerListener @ 1492d4810

/* WARNING: Removing unreachable block (ram,0x0001492d4914) */
/* WARNING: Removing unreachable block (ram,0x0001492d491d) */
/* WARNING: Removing unreachable block (ram,0x0001492d4942) */
/* WARNING: Removing unreachable block (ram,0x0001492d4943) */
/* WARNING: Removing unreachable block (ram,0x0001492d4968) */
/* WARNING: Removing unreachable block (ram,0x0001492d4975) */
/* WARNING: Removing unreachable block (ram,0x0001492d4979) */

void __thiscall
FNiagaraGpuProfilerListener::~FNiagaraGpuProfilerListener(FNiagaraGpuProfilerListener *this)

{
  FDelegateHandle FVar1;
  code *pcVar2;
  bool bVar3;
  
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUProfilerInterface.cpp"
                         ,0x18,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUProfilerInterface.cpp"
                         ,0x1f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (this->bEnabled != false) {
    this->bEnabled = false;
    LOCK();
    FNiagaraGPUProfilerInterface::NumReaders =
         (atomic<int>)((int)FNiagaraGPUProfilerInterface::NumReaders + -1);
    UNLOCK();
  }
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUProfilerInterface.cpp"
                         ,0x29,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((this->GameThreadHandler).ID != 0) {
    bVar3 = IsInGameThread();
    if ((!bVar3) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraGPUProfilerInterface.h"
                           ,0x5f,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FVar1.ID = (this->GameThreadHandler).ID;
    if (FVar1.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &FNiagaraGPUProfilerInterface::OnFrameResults_GameThread,FVar1);
    }
  }
  return;
}

// SetEnabled @ 149306340

void __thiscall
FNiagaraGpuProfilerListener::SetEnabled(FNiagaraGpuProfilerListener *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUProfilerInterface.cpp"
                       ,0x1f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->bEnabled != param_1) {
    this->bEnabled = param_1;
    LOCK();
    FNiagaraGPUProfilerInterface::NumReaders =
         (atomic<int>)((int)FNiagaraGPUProfilerInterface::NumReaders + (uint)param_1 * 2 + -1);
    UNLOCK();
  }
  return;
}

// SetHandler @ 149306690

void __thiscall
FNiagaraGpuProfilerListener::SetHandler
          (FNiagaraGpuProfilerListener *this,
          TFunction<void___cdecl(TSharedPtr<FNiagaraGpuFrameResults,1>_const_&)> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FDelegateHandle FVar3;
  longlong *plVar4;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGPUProfilerInterface.cpp"
                       ,0x29,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->GameThreadHandler).ID != 0) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraGPUProfilerInterface.h"
                         ,0x5f,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FVar3.ID = (this->GameThreadHandler).ID;
    if (FVar3.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &FNiagaraGPUProfilerInterface::OnFrameResults_GameThread,FVar3);
    }
  }
  if (*(longlong *)param_1 != 0) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraGPUProfilerInterface.h"
                         ,0x5f,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FVar3 = TMulticastDelegateRegistration<void___cdecl(TSharedPtr<FNiagaraGpuFrameResults,1>_const_&),FDefaultDelegateUserPolicy>
            ::AddLambda<TFunction<void___cdecl(TSharedPtr<FNiagaraGpuFrameResults,1>_const_&)>_&>
                      ((TMulticastDelegateRegistration<void___cdecl(TSharedPtr<FNiagaraGpuFrameResults,1>_const_&),FDefaultDelegateUserPolicy>
                        *)&FNiagaraGPUProfilerInterface::OnFrameResults_GameThread,
                       (TFunction<void___cdecl(TSharedPtr<FNiagaraGpuFrameResults,1>_const_&)> *)
                       &stack0xffffffffffffffe8);
                    /* WARNING: Load size is inaccurate */
    (this->GameThreadHandler).ID = *FVar3.ID;
    if (*(longlong *)param_1 != 0) {
      plVar4 = (longlong *)&param_1->field_0x10;
      if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
        plVar4 = *(longlong **)&param_1->field_0x28;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  return;
}

