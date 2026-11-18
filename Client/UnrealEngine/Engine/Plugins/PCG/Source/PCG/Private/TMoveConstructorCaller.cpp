// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// Construct @ 149d41fe0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<unsigned_char>::Construct(void *param_1,void *param_2)

{
  *(undefined1 *)param_1 = *(undefined1 *)param_2;
  return;
}

// Construct @ 149d41ff0

void __cdecl
UE::Core::Private::TMoveConstructorCaller<TSoftObjectPtr<UObject>_>::Construct
          (void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x10);
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = *(undefined4 *)((longlong)param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  return;
}

// Construct @ 149d42030

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<TValueOrError<unsigned_char,enum_EPropertyBagResult>::FEmptyType>::Construct
          (void *param_1,void *param_2)

{
  return;
}

// Construct @ 149d42040

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<TValueOrError<TSoftObjectPtr<UObject>,enum_EPropertyBagResult>::FEmptyType>::
Construct(void *param_1,void *param_2)

{
  return;
}

// Construct @ 149d42050

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<TValueOrError<TSoftClassPtr<UObject>,enum_EPropertyBagResult>::FEmptyType>::
Construct(void *param_1,void *param_2)

{
  return;
}

// Construct @ 149d42060

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<TValueOrError<unsigned_char,enum_EPropertyBagResult>::FWrapErrorType>::
Construct(void *param_1,void *param_2)

{
  *(undefined1 *)param_1 = *(undefined1 *)param_2;
  return;
}

// Construct @ 149d42070

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<TValueOrError<TSoftObjectPtr<UObject>,enum_EPropertyBagResult>::FWrapErrorType>
::Construct(void *param_1,void *param_2)

{
  *(undefined1 *)param_1 = *(undefined1 *)param_2;
  return;
}

// Construct @ 149d42080

void __cdecl
UE::Core::Private::
TMoveConstructorCaller<TValueOrError<TSoftClassPtr<UObject>,enum_EPropertyBagResult>::FWrapErrorType>
::Construct(void *param_1,void *param_2)

{
  *(undefined1 *)param_1 = *(undefined1 *)param_2;
  return;
}

// Construct @ 149d42090

void __cdecl
UE::Core::Private::TMoveConstructorCaller<TSoftClassPtr<UObject>_>::Construct
          (void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x10);
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = *(undefined4 *)((longlong)param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  return;
}

