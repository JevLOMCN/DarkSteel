// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 14

// Construct @ 14d4b7de0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<FStateTreeStateHandle>::Construct
          (void *param_1,void *param_2)

{
  *(undefined2 *)param_1 = *(undefined2 *)param_2;
  return;
}

// Construct @ 14d4b7df0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<FStateTreeDebuggerBreakpoint::FStateTreeTaskIndex>::
Construct(void *param_1,void *param_2)

{
  *(undefined2 *)param_1 = *(undefined2 *)param_2;
  return;
}

// Construct @ 14d4b7e00

void __cdecl
UE::Core::Private::TCopyConstructorCaller<FStateTreeTraceActiveStatesEvent>::Construct
          (void *param_1,void *param_2)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FAssetActiveStates *pFVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)((longlong)param_2 + 8);
  pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x10);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = uVar4;
  pFVar1->Data = (FScriptContainerElement *)0x0;
  iVar2 = *(int *)((longlong)param_2 + 0x18);
  pFVar3 = *(FAssetActiveStates **)((longlong)param_2 + 0x10);
  *(int *)((longlong)param_1 + 0x18) = iVar2;
  if (iVar2 == 0) {
    *(int *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar2,0,pFVar1,iVar2,(int *)((longlong)param_1 + 0x1c));
    ConstructItems<FStateTreeTraceActiveStates::FAssetActiveStates,FStateTreeTraceActiveStates::FAssetActiveStates,int>
              (pFVar1->Data,pFVar3,iVar2);
  }
  return;
}

// Construct @ 14d4b7e10

void __cdecl
UE::Core::Private::TCopyConstructorCaller<FStateTreeTraceConditionEvent>::Construct
          (void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
  ::FString::FString((FString *)((longlong)param_1 + 0x18),(FString *)((longlong)param_2 + 0x18));
  ::FString::FString((FString *)((longlong)param_1 + 0x28),(FString *)((longlong)param_2 + 0x28));
  ::FString::FString((FString *)((longlong)param_1 + 0x38),(FString *)((longlong)param_2 + 0x38));
  return;
}

// Construct @ 14d4b7e70

void __cdecl
UE::Core::Private::TCopyConstructorCaller<FStateTreeTraceEvaluatorEvent>::Construct
          (void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
  ::FString::FString((FString *)((longlong)param_1 + 0x18),(FString *)((longlong)param_2 + 0x18));
  ::FString::FString((FString *)((longlong)param_1 + 0x28),(FString *)((longlong)param_2 + 0x28));
  ::FString::FString((FString *)((longlong)param_1 + 0x38),(FString *)((longlong)param_2 + 0x38));
  return;
}

// Construct @ 14d4b7ed0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<FStateTreeTraceInstanceFrameEvent>::Construct
          (void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
  return;
}

// Construct @ 14d4b7ef0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<FStateTreeTraceLogEvent>::Construct
          (void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(undefined1 *)((longlong)param_1 + 0x10) = *(undefined1 *)((longlong)param_2 + 0x10);
  ::FString::FString((FString *)((longlong)param_1 + 0x18),(FString *)((longlong)param_2 + 0x18));
  return;
}

// Construct @ 14d4b7f10

void __cdecl
UE::Core::Private::TCopyConstructorCaller<FStateTreeTraceNodeEvent>::Construct
          (void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
  return;
}

// Construct @ 14d4b7f30

void __cdecl
UE::Core::Private::TCopyConstructorCaller<FStateTreeTracePhaseEvent>::Construct
          (void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
  return;
}

// Construct @ 14d4b7f50

void __cdecl
UE::Core::Private::TCopyConstructorCaller<FStateTreeTracePropertyEvent>::Construct
          (void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(undefined1 *)((longlong)param_1 + 0x10) = *(undefined1 *)((longlong)param_2 + 0x10);
  ::FString::FString((FString *)((longlong)param_1 + 0x18),(FString *)((longlong)param_2 + 0x18));
  return;
}

// Construct @ 14d4b7f70

void __cdecl
UE::Core::Private::TCopyConstructorCaller<FStateTreeTraceStateEvent>::Construct
          (void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
  return;
}

// Construct @ 14d4b7f90

void __cdecl
UE::Core::Private::TCopyConstructorCaller<FStateTreeTraceTaskEvent>::Construct
          (void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
  ::FString::FString((FString *)((longlong)param_1 + 0x18),(FString *)((longlong)param_2 + 0x18));
  ::FString::FString((FString *)((longlong)param_1 + 0x28),(FString *)((longlong)param_2 + 0x28));
  ::FString::FString((FString *)((longlong)param_1 + 0x38),(FString *)((longlong)param_2 + 0x38));
  *(undefined1 *)((longlong)param_1 + 0x48) = *(undefined1 *)((longlong)param_2 + 0x48);
  return;
}

// Construct @ 14d4b7ff0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<FStateTreeTraceTransitionEvent>::Construct
          (void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x18);
  *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
  return;
}

// Construct @ 14d4b8010

void __cdecl
UE::Core::Private::TCopyConstructorCaller<FStateTreeDebuggerBreakpoint::FStateTreeTransitionIndex>::
Construct(void *param_1,void *param_2)

{
  *(undefined2 *)param_1 = *(undefined2 *)param_2;
  return;
}

