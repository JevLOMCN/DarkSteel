// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenColorIOWrapper
// Functions: 6

// CopyFunc<FOpenColorIOConfigPimpl> @ 14d75da80

void * __cdecl UE::Core::Private::PimplPtr::CopyFunc<FOpenColorIOConfigPimpl>(void *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = ::operator_new(0x20);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = DeleterFunc<FOpenColorIOConfigPimpl>;
    puVar2[1] = CopyFunc<FOpenColorIOConfigPimpl>;
    puVar2[2] = 0;
    puVar2[3] = 0;
    if (*(longlong *)((longlong)param_1 + 8) != 0) {
      LOCK();
      piVar1 = (int *)(*(longlong *)((longlong)param_1 + 8) + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    puVar2[2] = *(undefined8 *)param_1;
    puVar2[3] = *(undefined8 *)((longlong)param_1 + 8);
    return puVar2 + 2;
  }
  return &DAT_00000010;
}

// CopyFunc<FOpenColorIOGPUProcessorPimpl> @ 14d75daf0

void * __cdecl UE::Core::Private::PimplPtr::CopyFunc<FOpenColorIOGPUProcessorPimpl>(void *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = ::operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = DeleterFunc<FOpenColorIOGPUProcessorPimpl>;
    puVar2[1] = CopyFunc<FOpenColorIOGPUProcessorPimpl>;
    puVar2[2] = 0;
    puVar2[3] = 0;
    if (*(longlong *)((longlong)param_1 + 8) != 0) {
      LOCK();
      piVar1 = (int *)(*(longlong *)((longlong)param_1 + 8) + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    puVar2[2] = *(undefined8 *)param_1;
    puVar2[3] = *(undefined8 *)((longlong)param_1 + 8);
    puVar2[4] = 0;
    puVar2[5] = 0;
    if (*(longlong *)((longlong)param_1 + 0x18) != 0) {
      LOCK();
      piVar1 = (int *)(*(longlong *)((longlong)param_1 + 0x18) + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    puVar2[4] = *(undefined8 *)((longlong)param_1 + 0x10);
    puVar2[5] = *(undefined8 *)((longlong)param_1 + 0x18);
    return puVar2 + 2;
  }
  return &DAT_00000010;
}

// CopyFunc<FOpenColorIOProcessorPimpl> @ 14d75db90

void * __cdecl UE::Core::Private::PimplPtr::CopyFunc<FOpenColorIOProcessorPimpl>(void *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = ::operator_new(0x20);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = DeleterFunc<FOpenColorIOProcessorPimpl>;
    puVar2[1] = CopyFunc<FOpenColorIOProcessorPimpl>;
    puVar2[2] = 0;
    puVar2[3] = 0;
    if (*(longlong *)((longlong)param_1 + 8) != 0) {
      LOCK();
      piVar1 = (int *)(*(longlong *)((longlong)param_1 + 8) + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    puVar2[2] = *(undefined8 *)param_1;
    puVar2[3] = *(undefined8 *)((longlong)param_1 + 8);
    return puVar2 + 2;
  }
  return &DAT_00000010;
}

// DeleterFunc<FOpenColorIOConfigPimpl> @ 14d75dc00

void __cdecl UE::Core::Private::PimplPtr::DeleterFunc<FOpenColorIOConfigPimpl>(void *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)((longlong)param_1 + 0x18);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  ::operator_delete(param_1,0x20);
  return;
}

// DeleterFunc<FOpenColorIOGPUProcessorPimpl> @ 14d75dc70

void __cdecl UE::Core::Private::PimplPtr::DeleterFunc<FOpenColorIOGPUProcessorPimpl>(void *param_1)

{
  FOpenColorIOGPUProcessorPimpl::~FOpenColorIOGPUProcessorPimpl
            ((FOpenColorIOGPUProcessorPimpl *)((longlong)param_1 + 0x10));
  ::operator_delete(param_1,0x30);
  return;
}

// DeleterFunc<FOpenColorIOProcessorPimpl> @ 14d75dca0

void __cdecl UE::Core::Private::PimplPtr::DeleterFunc<FOpenColorIOProcessorPimpl>(void *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)((longlong)param_1 + 0x18);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  ::operator_delete(param_1,0x20);
  return;
}

