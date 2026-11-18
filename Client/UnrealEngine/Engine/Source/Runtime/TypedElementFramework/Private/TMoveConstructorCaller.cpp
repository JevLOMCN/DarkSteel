// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 11

// Construct @ 142ca8300

void __cdecl
UE::Core::Private::TMoveConstructorCaller<FSoftObjectPath_const_*>::Construct
          (void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  return;
}

// Construct @ 142ca8310

void __cdecl
UE::Core::Private::TMoveConstructorCaller<FName_const_*>::Construct(void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  return;
}

// Construct @ 142ca8320

void __cdecl
UE::Core::Private::TMoveConstructorCaller<FString_const_*>::Construct(void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  return;
}

// Construct @ 142ca8330

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UObject_const_*>::Construct(void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  return;
}

// Construct @ 142ca8340

void __cdecl
UE::Core::Private::TMoveConstructorCaller<void_const_*>::Construct(void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  return;
}

// Construct @ 142ca8350

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<UE::Editor::DataStorage::Private::TConvertibleProperty<FText>_>::Construct
          (void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_2 + 0x28);
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x18);
  *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
  if (*(longlong *)param_1 != 0) {
    *(undefined8 *)param_2 = 0;
  }
  FText::FText((FText *)((longlong)param_1 + 0x30),(FText *)((longlong)param_2 + 0x30));
  return;
}

// Construct @ 142ca83a0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Editor::DataStorage::Private::TDirectProperty<FText>_>
::Construct(void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  return;
}

// Construct @ 142ca83b0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<UE::Editor::DataStorage::Private::TEmptyProperty<FText>_>
::Construct(void *param_1,void *param_2)

{
  return;
}

// Construct @ 142ca83c0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<TStringView<wchar_t>_>::Construct
          (void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  return;
}

// Construct @ 142ca83d0

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Construct
          (void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = 0;
  return;
}

// Construct @ 142ca83f0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<FName>::Construct(void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  return;
}

