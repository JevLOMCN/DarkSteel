// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 5

// Construct @ 14e192940

void __cdecl
UE::Core::Private::TMoveConstructorCaller<Optimus::Expression::FExpressionObject>::Construct
          (void *param_1,void *param_2)

{
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  if (*(longlong *)((longlong)param_2 + 0x60) == 0) {
    memmove(param_1,param_2,0x60);
  }
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  *(undefined8 *)((longlong)param_1 + 0x60) = *(undefined8 *)((longlong)param_2 + 0x60);
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = *(undefined4 *)((longlong)param_2 + 0x68);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
  *(undefined4 *)((longlong)param_2 + 0x68) = 0;
  *(undefined4 *)((longlong)param_2 + 0x6c) = 8;
  return;
}

// Construct @ 14e1929c0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<Optimus::Expression::FExpressionObject::FFunctionRef>::
Construct(void *param_1,void *param_2)

{
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  return;
}

// Construct @ 14e1929d0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<Optimus::Expression::FParseError>::Construct
          (void *param_1,void *param_2)

{
  ::FString::FString(param_1,param_2);
  *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
  return;
}

// Construct @ 14e192a00

void __cdecl
UE::Core::Private::TMoveConstructorCaller<enum_Optimus::Expression::FExpressionObject::EOperator>::
Construct(void *param_1,void *param_2)

{
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  return;
}

// Construct @ 14e192a10

void __cdecl
UE::Core::Private::TMoveConstructorCaller<enum_Optimus::Expression::FEngine::EOperatorToken>::
Construct(void *param_1,void *param_2)

{
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  return;
}

