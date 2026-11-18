// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147a0d9b0

UClass * __cdecl UDamageType::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UDamageType.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DamageType",
               &Z_Registration_Info_UClass_UDamageType.InnerSingleton,
               StaticRegisterNativesUDamageType,0x40,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDamageType>,InternalVTableHelperCtorCaller<UDamageType>,
               aFStackX_8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDamageType.InnerSingleton;
}

// UDamageType @ 147a28190

UDamageType * __thiscall UDamageType::UDamageType(UDamageType *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDamageType__6B_;
  return this;
}

// UDamageType @ 147a281c0

UDamageType * __thiscall UDamageType::UDamageType(UDamageType *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bScaleMomentumByMass = 1;
  this->_padding_ = (longlong)&___7UDamageType__6B_;
  this->DamageImpulse = 800.0;
  this->DestructibleImpulse = 800.0;
  this->DestructibleDamageSpreadScale = 1.0;
  this->DamageFalloff = 1.0;
  return this;
}

// ~UDamageType @ 147a2a8c0

void __thiscall UDamageType::~UDamageType(UDamageType *this)

{
  this->_padding_ = (longlong)&___7UDamageType__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147a573b0

UClass * __cdecl UDamageType::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDamageType.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DamageType",
               &Z_Registration_Info_UClass_UDamageType.InnerSingleton,
               StaticRegisterNativesUDamageType,0x40,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDamageType>,InternalVTableHelperCtorCaller<UDamageType>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDamageType.InnerSingleton;
}

// StaticRegisterNativesUDamageType @ 147a97630

void __cdecl UDamageType::StaticRegisterNativesUDamageType(void)

{
  return;
}

