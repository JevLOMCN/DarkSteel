// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// StaticClass @ 148072820

UClass * __cdecl UObjectTraceWorldSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectTraceWorldSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ObjectTraceWorldSubsystem",
               &Z_Registration_Info_UClass_UObjectTraceWorldSubsystem.InnerSingleton,
               StaticRegisterNativesUObjectTraceWorldSubsystem,0x48,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UObjectTraceWorldSubsystem>,
               InternalVTableHelperCtorCaller<UObjectTraceWorldSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectTraceWorldSubsystem.InnerSingleton;
}

// UObjectTraceWorldSubsystem @ 14808c210

UObjectTraceWorldSubsystem * __thiscall
UObjectTraceWorldSubsystem::UObjectTraceWorldSubsystem
          (UObjectTraceWorldSubsystem *this,FVTableHelper *param_1)

{
  UWorldSubsystem::UWorldSubsystem((UWorldSubsystem *)this,param_1);
  this->_padding_ = (longlong)&___7UObjectTraceWorldSubsystem__6B_;
  return this;
}

// ~UObjectTraceWorldSubsystem @ 14808f5e0

void __thiscall
UObjectTraceWorldSubsystem::~UObjectTraceWorldSubsystem(UObjectTraceWorldSubsystem *this)

{
  this->_padding_ = (longlong)&___7UObjectTraceWorldSubsystem__6B_;
  UWorldSubsystem::~UWorldSubsystem((UWorldSubsystem *)this);
  return;
}

// GetPrivateStaticClass @ 1480a9e10

UClass * __cdecl UObjectTraceWorldSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectTraceWorldSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ObjectTraceWorldSubsystem",
               &Z_Registration_Info_UClass_UObjectTraceWorldSubsystem.InnerSingleton,
               StaticRegisterNativesUObjectTraceWorldSubsystem,0x48,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UObjectTraceWorldSubsystem>,
               InternalVTableHelperCtorCaller<UObjectTraceWorldSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectTraceWorldSubsystem.InnerSingleton;
}

// StaticRegisterNativesUObjectTraceWorldSubsystem @ 1480d5780

void __cdecl UObjectTraceWorldSubsystem::StaticRegisterNativesUObjectTraceWorldSubsystem(void)

{
  return;
}

