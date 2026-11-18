// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// Null'' @ 141161c60

void __cdecl `dynamic_initializer_for_'UE::DerivedData::FValue::Null__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::DerivedData::FValue::Null__);
  return;
}

// Null'' @ 141161c80

void __cdecl `dynamic_initializer_for_'UE::DerivedData::FValueWithId::Null__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::DerivedData::FValueWithId::Null__);
  return;
}

// `dynamic_initializer_for_'CVarShadersSDCEEnabled'' @ 141161ca0

void __cdecl _dynamic_initializer_for__CVarShadersSDCEEnabled__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarShadersSDCEEnabled,L"r.Shaders.SDCE",local_res8,
             L"Strip dead code using symbolic dead code elimination on structured member stores",0);
  atexit(_dynamic_atexit_destructor_for__CVarShadersSDCEEnabled__);
  return;
}

// Null'' @ 150409a90

void __cdecl `dynamic_atexit_destructor_for_'UE::DerivedData::FValue::Null__(void)

{
  FCompositeBuffer::~FCompositeBuffer(&UE::DerivedData::FValue::Null.Data.CompressedData);
  return;
}

// Null'' @ 150409ab0

void __cdecl `dynamic_atexit_destructor_for_'UE::DerivedData::FValueWithId::Null__(void)

{
  FCompositeBuffer::~FCompositeBuffer
            ((FCompositeBuffer *)&UE::DerivedData::FValueWithId::Null._padding_);
  return;
}

// `dynamic_atexit_destructor_for_'CVarShadersSDCEEnabled'' @ 150409ad0

void __cdecl _dynamic_atexit_destructor_for__CVarShadersSDCEEnabled__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarShadersSDCEEnabled);
  return;
}

