// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// ~FTasks @ 145520ba0

void __thiscall FVisibilityTaskData::FTasks::~FTasks(FTasks *this)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  undefined1 *puVar3;
  atomic<unsigned_int> aVar4;
  int iVar5;
  FTaskBase *pFVar6;
  FTaskEvent FVar7;
  FBaseGraphTask *pFVar8;
  
  pFVar6 = (this->MeshPassSetup).Pimpl.Reference;
  if (pFVar6 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &pFVar6->RefCount;
    aVar4 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar4 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar6->_padding_)(pFVar6,1);
    }
  }
  pFVar6 = (this->FinalizeRelevance).Pimpl.Reference;
  if (pFVar6 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &pFVar6->RefCount;
    aVar4 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar4 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar6->_padding_)(pFVar6,1);
    }
  }
  FVar7 = this->DynamicMeshElements;
  if (FVar7 != (FTaskEvent)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)FVar7 + 0x30);
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (*(code *)**(undefined8 **)FVar7)(FVar7,1);
    }
  }
  FVar7 = this->DynamicMeshElementsPrerequisites;
  if (FVar7 != (FTaskEvent)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)FVar7 + 0x30);
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (*(code *)**(undefined8 **)FVar7)(FVar7,1);
    }
  }
  FVar7 = this->ComputeRelevance;
  if (FVar7 != (FTaskEvent)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)FVar7 + 0x30);
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (*(code *)**(undefined8 **)FVar7)(FVar7,1);
    }
  }
  FVar7 = this->OcclusionCull;
  if (FVar7 != (FTaskEvent)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)FVar7 + 0x30);
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (*(code *)**(undefined8 **)FVar7)(FVar7,1);
    }
  }
  FVar7 = this->FrustumCull;
  if (FVar7 != (FTaskEvent)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)FVar7 + 0x30);
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (*(code *)**(undefined8 **)FVar7)(FVar7,1);
    }
  }
  FVar7 = this->BeginInitVisibility;
  if (FVar7 != (FTaskEvent)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)FVar7 + 0x30);
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (*(code *)**(undefined8 **)FVar7)(FVar7,1);
    }
  }
  FVar7 = this->LightVisibility;
  if (FVar7 != (FTaskEvent)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)FVar7 + 0x30);
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (*(code *)**(undefined8 **)FVar7)(FVar7,1);
    }
  }
  pFVar8 = (this->DynamicMeshElementsRenderThread).Reference;
  if (pFVar8 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar3 = &pFVar8->field_0x30;
    iVar5 = *(int *)puVar3;
    *(int *)puVar3 = *(int *)puVar3 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (*(code *)**(undefined8 **)pFVar8)(pFVar8,1);
    }
  }
  pFVar8 = (this->DynamicMeshElementsPipe).Reference;
  if (pFVar8 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar3 = &pFVar8->field_0x30;
    iVar5 = *(int *)puVar3;
    *(int *)puVar3 = *(int *)puVar3 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (*(code *)**(undefined8 **)pFVar8)(pFVar8,1);
    }
  }
  pFVar8 = (this->ComputeRelevanceLegacyTask).Reference;
  if (pFVar8 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar3 = &pFVar8->field_0x30;
    iVar5 = *(int *)puVar3;
    *(int *)puVar3 = *(int *)puVar3 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (*(code *)**(undefined8 **)pFVar8)(pFVar8,1);
    }
  }
  pFVar8 = (this->FrustumCullLegacyTask).Reference;
  if (pFVar8 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar3 = &pFVar8->field_0x30;
    iVar5 = *(int *)puVar3;
    *(int *)puVar3 = *(int *)puVar3 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (*(code *)**(undefined8 **)pFVar8)(pFVar8,1);
    }
  }
  return;
}

// ~FTasks @ 145520d60

void __thiscall FVisibilityViewPacket::FTasks::~FTasks(FTasks *this)

{
  int *piVar1;
  int iVar2;
  FTaskEvent FVar3;
  
  FVar3 = this->LightVisibility;
  if (FVar3 != (FTaskEvent)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)FVar3 + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)FVar3)(FVar3,1);
    }
  }
  FVar3 = this->ComputeRelevance;
  if (FVar3 != (FTaskEvent)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)FVar3 + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)FVar3)(FVar3,1);
    }
  }
  FVar3 = this->OcclusionCull;
  if (FVar3 != (FTaskEvent)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)FVar3 + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)FVar3)(FVar3,1);
    }
  }
  FVar3 = this->FrustumCull;
  if (FVar3 != (FTaskEvent)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)FVar3 + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)FVar3)(FVar3,1);
    }
  }
  FVar3 = this->AlwaysVisible;
  if (FVar3 != (FTaskEvent)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)FVar3 + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)FVar3)(FVar3,1);
    }
  }
  return;
}

