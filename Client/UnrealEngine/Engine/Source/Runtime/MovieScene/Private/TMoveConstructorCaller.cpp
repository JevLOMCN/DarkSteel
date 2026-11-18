// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 13

// Construct @ 1460b7320

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::MovieScene::Interpolation::FConstantValue>::Construct
          (void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  return;
}

// Construct @ 1460b7330

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::MovieScene::Interpolation::FCubicBezierInterpolation>
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

// Construct @ 1460b7350

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::MovieScene::Interpolation::FCubicInterpolation>::
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

// Construct @ 1460b7370

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::MovieScene::Interpolation::FInvalidValue>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 1460b7380

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::MovieScene::Interpolation::FLinearInterpolation>::
Construct(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
  return;
}

// Construct @ 1460b73a0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::MovieScene::Interpolation::FQuadraticInterpolation>::
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

// Construct @ 1460b73c0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::MovieScene::Interpolation::FQuarticInterpolation>::
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

// Construct @ 1460b73f0

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<UE::MovieScene::Interpolation::FWeightedCubicInterpolation>::Construct
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

// Construct @ 146128d00

void __cdecl
UE::Core::Private::TMoveConstructorCaller<unsigned_short>::Construct(void *param_1,void *param_2)

{
  *(undefined2 *)param_1 = *(undefined2 *)param_2;
  return;
}

// Construct @ 146128d10

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::MovieScene::FCustomPropertyIndex>::Construct
          (void *param_1,void *param_2)

{
  *(undefined2 *)param_1 = *(undefined2 *)param_2;
  return;
}

// Construct @ 146128d20

void __cdecl
UE::Core::Private::TMoveConstructorCaller<TSharedPtr<FTrackInstancePropertyBindings,1>_>::Construct
          (void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  *(undefined8 *)param_2 = 0;
  return;
}

// Construct @ 1462a8940

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::MovieScene::FCachedProperty>::Construct
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

// Construct @ 1462a89c0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::MovieScene::FVolatileProperty>::Construct
          (void *param_1,void *param_2)

{
  FFieldClass *pFVar1;
  
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = *(undefined4 *)((longlong)param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_2 + 0x28);
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  pFVar1 = FProperty::StaticClass();
  FFieldPath::GetTyped((FFieldPath *)((longlong)param_2 + 0x30),pFVar1,(UStruct *)0x0);
  FFieldPath::operator=
            ((FFieldPath *)((longlong)param_1 + 0x30),(FFieldPath *)((longlong)param_2 + 0x30));
  *(undefined4 *)((longlong)param_1 + 0x50) = *(undefined4 *)((longlong)param_2 + 0x50);
  return;
}

