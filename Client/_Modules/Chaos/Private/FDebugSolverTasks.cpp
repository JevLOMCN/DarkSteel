// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// Add @ 143f93330

void __thiscall Chaos::FDebugSolverTasks::Add(FDebugSolverTasks *this,FPhysicsSolverBase *param_1)

{
  TPairInitializer<Chaos::FPhysicsSolverBase_*_const_&,FAsyncTask<Chaos::FDebugSolverTask>_*_&&>
  local_res8;
  undefined8 local_res18 [2];
  FAsyncTask<Chaos::FDebugSolverTask> ***local_18;
  undefined8 *local_10;
  
  local_18 = &local_res8.Value;
  local_res18[0] = 0;
  local_10 = local_res18;
  local_res8.Value = (FAsyncTask<Chaos::FDebugSolverTask> **)param_1;
  TSet<TTuple<Chaos::FPhysicsSolverBase_*,FAsyncTask<Chaos::FDebugSolverTask>_*>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsSolverBase_*,FAsyncTask<Chaos::FDebugSolverTask>_*,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<Chaos::FPhysicsSolverBase_*_const_&,FAsyncTask<Chaos::FDebugSolverTask>_*_&&>_>
            ((TSet<TTuple<Chaos::FPhysicsSolverBase_*,FAsyncTask<Chaos::FDebugSolverTask>_*>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsSolverBase_*,FAsyncTask<Chaos::FDebugSolverTask>_*,0>,FDefaultSetAllocator>
              *)this,&local_res8,(bool *)&local_18);
  return;
}

// DebugStep @ 143fa89d0

void __thiscall
Chaos::FDebugSolverTasks::DebugStep
          (FDebugSolverTasks *this,FPhysicsSolverBase *param_1,
          TFunction<void___cdecl(void)> *param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  longlong lVar6;
  FPhysicsSolverBase *local_res10 [3];
  TPairInitializer<Chaos::FPhysicsSolverBase_*_const_&,FAsyncTask<Chaos::FDebugSolverTask>_*_&&>
  local_28;
  FPhysicsSolverBase **local_18;
  FAsyncTask<Chaos::FDebugSolverTask> ***local_10;
  
  uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  local_res10[0] = param_1;
  if (*(int *)&(this->SolverToTaskMap).field_0x8 != *(int *)&(this->SolverToTaskMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->SolverToTaskMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->SolverToTaskMap).field_0x38;
    }
    iVar2 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->SolverToTaskMap).field_0x48 - 1U &
                              (uVar3 >> 0x10 ^ uVar3)) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)&this->SolverToTaskMap + (longlong)iVar2 * 0x18;
        if (*(FPhysicsSolverBase **)(*(longlong *)&this->SolverToTaskMap + (longlong)iVar2 * 0x18)
            == param_1) {
          lVar6 = lVar1 + 8;
          if (lVar1 == 0) {
            lVar6 = 0;
          }
          if (lVar6 != 0) goto LAB_143fa8aa8;
          break;
        }
        iVar2 = *(int *)(lVar1 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_18 = local_res10;
  local_28.Value = (FAsyncTask<Chaos::FDebugSolverTask> **)0x0;
  local_10 = &local_28.Value;
  TSet<TTuple<Chaos::FPhysicsSolverBase_*,FAsyncTask<Chaos::FDebugSolverTask>_*>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsSolverBase_*,FAsyncTask<Chaos::FDebugSolverTask>_*,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<Chaos::FPhysicsSolverBase_*_const_&,FAsyncTask<Chaos::FDebugSolverTask>_*_&&>_>
            ((TSet<TTuple<Chaos::FPhysicsSolverBase_*,FAsyncTask<Chaos::FDebugSolverTask>_*>,TDefaultMapHashableKeyFuncs<Chaos::FPhysicsSolverBase_*,FAsyncTask<Chaos::FDebugSolverTask>_*,0>,FDefaultSetAllocator>
              *)this,&local_28,(bool *)&local_18);
LAB_143fa8aa8:
  if (*(longlong *)param_2 != 0) {
    plVar4 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return;
}

// Remove @ 143fbd050

void __thiscall
Chaos::FDebugSolverTasks::Remove(FDebugSolverTasks *this,FPhysicsSolverBase *param_1)

{
  return;
}

// Shutdown @ 143fcc3a0

void __thiscall Chaos::FDebugSolverTasks::Shutdown(FDebugSolverTasks *this)

{
  return;
}

