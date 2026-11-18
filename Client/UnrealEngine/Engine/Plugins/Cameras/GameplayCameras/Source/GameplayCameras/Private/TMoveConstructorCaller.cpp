// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// Construct @ 14d5517b0

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<TArray<UE::Cameras::FCameraNodeEvaluator_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
::Construct(void *param_1,void *param_2)

{
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  if (*(longlong *)((longlong)param_2 + 0x20) == 0) {
    memmove(param_1,param_2,0x20);
  }
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = *(undefined4 *)((longlong)param_2 + 0x28);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)((longlong)param_2 + 0x28) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 4;
  return;
}

// Construct @ 14d551830

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<TArray<TObjectPtr<UCameraNode>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
::Construct(void *param_1,void *param_2)

{
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  if (*(longlong *)((longlong)param_2 + 0x20) == 0) {
    memmove(param_1,param_2,0x20);
  }
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = *(undefined4 *)((longlong)param_2 + 0x28);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)((longlong)param_2 + 0x28) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 4;
  return;
}

// Construct @ 14d5518b0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<TArrayView<UE::Cameras::FCameraNodeEvaluator_*,int>_>::
Construct(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  return;
}

// Construct @ 14d5518c0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<TArrayView<TObjectPtr<UCameraNode>,int>_>::Construct
          (void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  return;
}

// Construct @ 14d59c2d0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Cameras::IPriorityQueueEntry_*>::Construct
          (void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  return;
}

// Construct @ 14d59c2e0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Cameras::FCameraDebugClock::FAngleValue>::Construct
          (void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  return;
}

// Construct @ 14d59c2f0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Cameras::FCameraDebugClock::FVectorValue>::Construct
          (void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
  return;
}

