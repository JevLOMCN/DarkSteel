// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 15

// Construct @ 1460b71e0

void __cdecl
UE::Core::Private::
TCopyConstructorCaller<void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
::Construct(void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  return;
}

// Construct @ 1460b71f0

void __cdecl
UE::Core::Private::
TCopyConstructorCaller<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
::Construct(void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  return;
}

// Construct @ 1460b7200

void __cdecl
UE::Core::Private::
TCopyConstructorCaller<void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
::Construct(void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  return;
}

// Construct @ 1460b7210

void __cdecl
UE::Core::Private::
TCopyConstructorCaller<void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
::Construct(void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  return;
}

// Construct @ 1460b7220

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::MovieScene::Interpolation::FConstantValue>::Construct
          (void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  return;
}

// Construct @ 1460b7230

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::MovieScene::Interpolation::FCubicBezierInterpolation>
::Construct(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x18);
  *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x28);
  *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
  *(undefined8 *)((longlong)param_1 + 0x28) = uVar1;
  return;
}

// Construct @ 1460b7250

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::MovieScene::Interpolation::FCubicInterpolation>::
Construct(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x18);
  *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x28);
  *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
  *(undefined8 *)((longlong)param_1 + 0x28) = uVar1;
  return;
}

// Construct @ 1460b7270

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::MovieScene::Interpolation::FInvalidValue>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 1460b7280

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::MovieScene::Interpolation::FLinearInterpolation>::
Construct(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
  return;
}

// Construct @ 1460b72a0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::MovieScene::Interpolation::FQuadraticInterpolation>::
Construct(void *param_1,void *param_2)

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

// Construct @ 1460b72c0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::MovieScene::Interpolation::FQuarticInterpolation>::
Construct(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x18);
  *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x28);
  *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
  *(undefined8 *)((longlong)param_1 + 0x28) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_2 + 0x30);
  return;
}

// Construct @ 1460b72f0

void __cdecl
UE::Core::Private::
TCopyConstructorCaller<UE::MovieScene::Interpolation::FWeightedCubicInterpolation>::Construct
          (void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x18);
  *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x28);
  *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
  *(undefined8 *)((longlong)param_1 + 0x28) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x38);
  *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_2 + 0x30);
  *(undefined8 *)((longlong)param_1 + 0x38) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x48);
  *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_2 + 0x40);
  *(undefined8 *)((longlong)param_1 + 0x48) = uVar1;
  return;
}

// Construct @ 1462a8910

void __cdecl
UE::Core::Private::TCopyConstructorCaller<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>_>::Construct
          (void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  return;
}

// Construct @ 1462a8920

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::MovieScene::FCachedProperty>::Construct
          (void *param_1,void *param_2)

{
  FFieldClass *pFVar1;
  
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  pFVar1 = FProperty::StaticClass();
  FFieldPath::GetTyped((FFieldPath *)((longlong)param_2 + 8),pFVar1,(UStruct *)0x0);
  FFieldPath::operator=((FFieldPath *)((longlong)param_1 + 8),(FFieldPath *)((longlong)param_2 + 8))
  ;
  *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_2 + 0x28);
  *(undefined4 *)((longlong)param_1 + 0x30) = *(undefined4 *)((longlong)param_2 + 0x30);
  return;
}

// Construct @ 1462a8930

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::MovieScene::FVolatileProperty>::Construct
          (void *param_1,void *param_2)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FVolatilePropertyStep *pFVar3;
  FFieldClass *pFVar4;
  
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  ::FString::FString((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_2 + 8));
  pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x18);
  pFVar1->Data = (FScriptContainerElement *)0x0;
  iVar2 = *(int *)((longlong)param_2 + 0x20);
  pFVar3 = *(FVolatilePropertyStep **)((longlong)param_2 + 0x18);
  *(int *)((longlong)param_1 + 0x20) = iVar2;
  if (iVar2 == 0) {
    *(int *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar2,0,pFVar1,iVar2,(int *)((longlong)param_1 + 0x24));
    ConstructItems<UE::MovieScene::FVolatilePropertyStep,UE::MovieScene::FVolatilePropertyStep,int>
              (pFVar1->Data,pFVar3,iVar2);
  }
  *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_2 + 0x28);
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  pFVar4 = FProperty::StaticClass();
  FFieldPath::GetTyped((FFieldPath *)((longlong)param_2 + 0x30),pFVar4,(UStruct *)0x0);
  FFieldPath::operator=
            ((FFieldPath *)((longlong)param_1 + 0x30),(FFieldPath *)((longlong)param_2 + 0x30));
  *(undefined4 *)((longlong)param_1 + 0x50) = *(undefined4 *)((longlong)param_2 + 0x50);
  return;
}

