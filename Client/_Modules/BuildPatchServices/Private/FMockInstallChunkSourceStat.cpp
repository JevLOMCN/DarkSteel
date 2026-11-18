// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 2

// OnLoadComplete @ 1433251e0

void __thiscall
BuildPatchServices::FMockInstallChunkSourceStat::OnLoadComplete
          (FMockInstallChunkSourceStat *this,FGuid *param_1,ELoadResult *param_2,FRecord *param_3)

{
  int *piVar1;
  code *pcVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  double dVar5;
  ulong64 uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  
  if (*(void **)&this->OnLoadCompleteFunc != (void *)0x0) {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->OnLoadCompleteFunc);
    pcVar2 = *(code **)&this->OnLoadCompleteFunc;
    plVar3 = *(longlong **)&(this->OnLoadCompleteFunc).field_0x28;
    plVar9 = (longlong *)&(this->OnLoadCompleteFunc).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar9 = plVar3;
    }
    uVar8 = (**(code **)(*plVar9 + 8))();
    (*pcVar2)(uVar8,param_1,param_2,param_3);
  }
  dVar5 = FStatsCollector::GetSeconds();
  iVar7 = (this->RxLoadComplete).ArrayNum;
  piVar1 = &(this->RxLoadComplete).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&(this->RxLoadComplete).AllocatorInstance,piVar1);
  }
  (this->RxLoadComplete).ArrayNum = iVar7 + 1;
  pFVar4 = (this->RxLoadComplete).AllocatorInstance.Data;
  lVar10 = (longlong)iVar7 * 0x38;
  *(double *)(pFVar4 + lVar10) = dVar5;
  uVar8 = *(undefined8 *)&param_1->C;
  *(undefined8 *)(pFVar4 + lVar10 + 8) = *(undefined8 *)param_1;
  *(undefined8 *)(pFVar4 + lVar10 + 8 + 8) = uVar8;
  pFVar4[lVar10 + 0x18] = (FScriptContainerElement)*param_2;
  uVar6 = param_3->CyclesEnd;
  *(ulong64 *)(pFVar4 + lVar10 + 0x20) = param_3->CyclesStart;
  *(ulong64 *)(pFVar4 + lVar10 + 0x20 + 8) = uVar6;
  *(ulong64 *)(pFVar4 + lVar10 + 0x30) = param_3->Size;
  return;
}

// OnLoadStarted @ 1433252d0

void __thiscall
BuildPatchServices::FMockInstallChunkSourceStat::OnLoadStarted
          (FMockInstallChunkSourceStat *this,FGuid *param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  double dVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  
  if (*(void **)&this->OnLoadStartedFunc != (void *)0x0) {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->OnLoadStartedFunc);
    plVar2 = *(longlong **)&(this->OnLoadStartedFunc).field_0x28;
    pcVar3 = *(code **)&this->OnLoadStartedFunc;
    plVar8 = (longlong *)&(this->OnLoadStartedFunc).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar8 = plVar2;
    }
    uVar7 = (**(code **)(*plVar8 + 8))();
    (*pcVar3)(uVar7,param_1);
  }
  dVar5 = FStatsCollector::GetSeconds();
  iVar6 = (this->RxLoadStarted).ArrayNum;
  piVar1 = &(this->RxLoadStarted).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->RxLoadStarted).AllocatorInstance,piVar1);
  }
  (this->RxLoadStarted).ArrayNum = iVar6 + 1;
  pFVar4 = (this->RxLoadStarted).AllocatorInstance.Data;
  *(double *)(pFVar4 + (longlong)iVar6 * 0x18) = dVar5;
  uVar7 = *(undefined8 *)&param_1->C;
  pFVar4 = pFVar4 + (longlong)iVar6 * 0x18 + 8;
  *(undefined8 *)pFVar4 = *(undefined8 *)param_1;
  *(undefined8 *)(pFVar4 + 8) = uVar7;
  return;
}

