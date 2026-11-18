// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 10

// All @ 14a742770

FToStringArgs * __cdecl
FMVVMViewClass_Binding::FToStringArgs::All(FToStringArgs *__return_storage_ptr__)

{
  __return_storage_ptr__->bUseDisplayName = true;
  __return_storage_ptr__->bAddFlags = true;
  __return_storage_ptr__->bAddBindingId = true;
  __return_storage_ptr__->bAddBindingFields = true;
  __return_storage_ptr__->bAddSources = true;
  return __return_storage_ptr__;
}

// All @ 14a742790

FToStringArgs __cdecl FMVVMViewClass_EvaluateSource::FToStringArgs::All(void)

{
  return (FToStringArgs)true;
}

// All @ 14a7427a0

FToStringArgs __cdecl FMVVMViewClass_Event::FToStringArgs::All(void)

{
  return (FToStringArgs)true;
}

// All @ 14a7427b0

FToStringArgs * __cdecl
FMVVMViewClass_Source::FToStringArgs::All(FToStringArgs *__return_storage_ptr__)

{
  (__return_storage_ptr__->Bindings).bUseDisplayName = true;
  (__return_storage_ptr__->Bindings).bAddFlags = true;
  (__return_storage_ptr__->Bindings).bAddBindingId = true;
  (__return_storage_ptr__->Bindings).bAddBindingFields = true;
  *(undefined4 *)&(__return_storage_ptr__->Bindings).bAddSources = 0x1010101;
  __return_storage_ptr__->bAddBindings = true;
  __return_storage_ptr__->bAddFlags = true;
  return __return_storage_ptr__;
}

// All @ 14a7427d0

FToStringArgs * __cdecl UMVVMViewClass::FToStringArgs::All(FToStringArgs *__return_storage_ptr__)

{
  *(undefined4 *)&(__return_storage_ptr__->Binding).bAddBindingId = 0x1010101;
  (__return_storage_ptr__->Source).Bindings.bUseDisplayName = true;
  (__return_storage_ptr__->Source).Bindings.bAddFlags = true;
  (__return_storage_ptr__->Source).Bindings.bAddBindingId = true;
  (__return_storage_ptr__->Source).Bindings.bAddBindingFields = true;
  *(undefined4 *)&(__return_storage_ptr__->Source).Bindings.bAddSources = 0x1010101;
  *(undefined4 *)&(__return_storage_ptr__->Source).bAddBindings = 0x1010101;
  (__return_storage_ptr__->Event).bUseDisplayName = true;
  return __return_storage_ptr__;
}

// Short @ 14a75ff40

FToStringArgs * __cdecl
FMVVMViewClass_Binding::FToStringArgs::Short(FToStringArgs *__return_storage_ptr__)

{
  __return_storage_ptr__->bUseDisplayName = false;
  __return_storage_ptr__->bAddFlags = false;
  __return_storage_ptr__->bAddBindingId = false;
  __return_storage_ptr__->bAddBindingFields = true;
  __return_storage_ptr__->bAddSources = false;
  return __return_storage_ptr__;
}

// Short @ 14a75ff60

FToStringArgs __cdecl FMVVMViewClass_EvaluateSource::FToStringArgs::Short(void)

{
  return (FToStringArgs)false;
}

// Short @ 14a75ff70

FToStringArgs __cdecl FMVVMViewClass_Event::FToStringArgs::Short(void)

{
  return (FToStringArgs)false;
}

// Short @ 14a75ff80

FToStringArgs * __cdecl
FMVVMViewClass_Source::FToStringArgs::Short(FToStringArgs *__return_storage_ptr__)

{
  (__return_storage_ptr__->Bindings).bUseDisplayName = true;
  (__return_storage_ptr__->Bindings).bAddFlags = true;
  (__return_storage_ptr__->Bindings).bAddBindingId = true;
  (__return_storage_ptr__->Bindings).bAddBindingFields = true;
  *(undefined2 *)&(__return_storage_ptr__->Bindings).bAddSources = 1;
  __return_storage_ptr__->bAddFields = true;
  __return_storage_ptr__->bAddBindings = true;
  __return_storage_ptr__->bAddCreationMode = false;
  __return_storage_ptr__->bAddFlags = false;
  return __return_storage_ptr__;
}

// Short @ 14a75ffb0

FToStringArgs * __cdecl UMVVMViewClass::FToStringArgs::Short(FToStringArgs *__return_storage_ptr__)

{
  *(undefined4 *)&(__return_storage_ptr__->Binding).bAddBindingId = 0x1000100;
  (__return_storage_ptr__->Source).Bindings.bUseDisplayName = true;
  (__return_storage_ptr__->Source).Bindings.bAddFlags = true;
  (__return_storage_ptr__->Source).Bindings.bAddBindingId = true;
  (__return_storage_ptr__->Source).Bindings.bAddBindingFields = true;
  *(undefined4 *)&(__return_storage_ptr__->Source).Bindings.bAddSources = 0x1000001;
  *(undefined4 *)&(__return_storage_ptr__->Source).bAddBindings = 1;
  (__return_storage_ptr__->Event).bUseDisplayName = false;
  return __return_storage_ptr__;
}

