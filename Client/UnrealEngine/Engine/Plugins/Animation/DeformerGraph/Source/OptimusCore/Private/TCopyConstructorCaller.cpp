// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 5

// Construct @ 14e1928d0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<Optimus::Expression::FExpressionObject>::Construct
          (void *param_1,void *param_2)

{
  int iVar1;
  TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>
  *pTVar2;
  
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  pTVar2 = *(TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>
             **)((longlong)param_2 + 0x60);
  iVar1 = *(int *)((longlong)param_2 + 0x68);
  *(int *)((longlong)param_1 + 0x68) = iVar1;
  if (pTVar2 != (TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>
                 *)0x0) {
    param_2 = pTVar2;
  }
  if (iVar1 == 0) {
    *(int *)((longlong)param_1 + 0x6c) = 8;
    return;
  }
  ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TVariant<enum_Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>_>
            (0xc,4,iVar1,0,param_1,iVar1,(int *)((longlong)param_1 + 0x6c));
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    param_1 = *(void **)((longlong)param_1 + 0x60);
  }
  ConstructItems<TVariant<enum_Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>,TVariant<enum_Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>,int>
            (param_1,param_2,iVar1);
  return;
}

// Construct @ 14e1928e0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<Optimus::Expression::FExpressionObject::FFunctionRef>::
Construct(void *param_1,void *param_2)

{
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  return;
}

// Construct @ 14e1928f0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<Optimus::Expression::FParseError>::Construct
          (void *param_1,void *param_2)

{
  ::FString::FString(param_1,param_2);
  *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
  return;
}

// Construct @ 14e192920

void __cdecl
UE::Core::Private::TCopyConstructorCaller<enum_Optimus::Expression::FExpressionObject::EOperator>::
Construct(void *param_1,void *param_2)

{
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  return;
}

// Construct @ 14e192930

void __cdecl
UE::Core::Private::TCopyConstructorCaller<enum_Optimus::Expression::FEngine::EOperatorToken>::
Construct(void *param_1,void *param_2)

{
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  return;
}

