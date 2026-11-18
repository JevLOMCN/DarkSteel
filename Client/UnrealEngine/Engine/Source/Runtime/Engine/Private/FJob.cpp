// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// Execute @ 14827c5f0

bool __thiscall FPhysScene_AsyncPhysicsStateJobQueue::FJob::Execute(FJob *this,FTimeout *param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  
  if (this->Processor != (IAsyncPhysicsStateProcessor *)0x0) {
    lVar2 = (**(code **)((longlong)*this->Processor + 0x18))();
    if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0)) {
      if (this->Type == CreatePhysicsState) {
        if (CpuChannel->Enabled < 0) {
                    /* WARNING: Could not recover jumptable at 0x00014827c6d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar1 = (**(code **)((longlong)*this->Processor + 0x30))(this->Processor,param_1);
          return (bool)uVar1;
        }
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId266,
                   "FPhysScene_AsyncPhysicsStateJobQueue::CreatePhysicsState",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_AsyncPhysicsStateJobQueue.cpp"
                   ,0x10a);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId266);
        uVar1 = (**(code **)((longlong)*this->Processor + 0x30))(this->Processor,param_1);
        FCpuProfilerTrace::OutputEndEvent();
        return (bool)uVar1;
      }
      if (this->Type == DestroyPhysicsState) {
        if (CpuChannel->Enabled < 0) {
                    /* WARNING: Could not recover jumptable at 0x00014827c65c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar1 = (**(code **)((longlong)*this->Processor + 0x48))(this->Processor,param_1);
          return (bool)uVar1;
        }
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId272,
                   "FPhysScene_AsyncPhysicsStateJobQueue::DestroyPhysicsState",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_AsyncPhysicsStateJobQueue.cpp"
                   ,0x110);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId272);
        uVar1 = (**(code **)((longlong)*this->Processor + 0x48))(this->Processor,param_1);
        FCpuProfilerTrace::OutputEndEvent();
        return (bool)uVar1;
      }
    }
  }
  return true;
}

// OnPostExecute_GameThread @ 148297af0

void __thiscall FPhysScene_AsyncPhysicsStateJobQueue::FJob::OnPostExecute_GameThread(FJob *this)

{
  longlong lVar1;
  
  if (this->Processor != (IAsyncPhysicsStateProcessor *)0x0) {
    lVar1 = (**(code **)((longlong)*this->Processor + 0x18))();
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)) {
      if (this->Type == CreatePhysicsState) {
                    /* WARNING: Could not recover jumptable at 0x000148297b3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((longlong)*this->Processor + 0x38))();
        return;
      }
      if (this->Type == DestroyPhysicsState) {
                    /* WARNING: Could not recover jumptable at 0x000148297b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((longlong)*this->Processor + 0x50))();
        return;
      }
    }
  }
  return;
}

// OnPreExecute_GameThread @ 148297b50

void __thiscall FPhysScene_AsyncPhysicsStateJobQueue::FJob::OnPreExecute_GameThread(FJob *this)

{
  bool bVar1;
  
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId242,
               "FPhysScene_AsyncPhysicsStateJobQueue::OnPreExecute_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\Experimental\\PhysScene_AsyncPhysicsStateJobQueue.cpp"
               ,0xf2);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId242);
  }
  if (this->Type == CreatePhysicsState) {
    (**(code **)((longlong)*this->Processor + 0x28))();
  }
  else if (this->Type == DestroyPhysicsState) {
    (**(code **)((longlong)*this->Processor + 0x40))();
  }
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

