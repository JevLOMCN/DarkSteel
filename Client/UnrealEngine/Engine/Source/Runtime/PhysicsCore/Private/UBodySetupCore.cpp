// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsCore
// Functions: 7

// StaticClass @ 144134800

UClass * __cdecl UBodySetupCore::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBodySetupCore.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PhysicsCore",L"BodySetupCore",
               &Z_Registration_Info_UClass_UBodySetupCore.InnerSingleton,
               StaticRegisterNativesUBodySetupCore,0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UBodySetupCore>,InternalVTableHelperCtorCaller<UBodySetupCore>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBodySetupCore.InnerSingleton;
}

// UBodySetupCore @ 1441a0a40

UBodySetupCore * __thiscall
UBodySetupCore::UBodySetupCore(UBodySetupCore *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UBodySetupCore__6B_;
  (this->BoneName).ComparisonIndex = 0;
  (this->BoneName).Number = 0;
  return this;
}

// UBodySetupCore @ 1441a0a70

UBodySetupCore * __thiscall
UBodySetupCore::UBodySetupCore(UBodySetupCore *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UBodySetupCore__6B_;
  (this->BoneName).ComparisonIndex = 0;
  (this->BoneName).Number = 0;
  (this->CollisionTraceFlag).Value = '\0';
  return this;
}

// ~UBodySetupCore @ 1441a1c10

void __thiscall UBodySetupCore::~UBodySetupCore(UBodySetupCore *this)

{
  this->_padding_ = (longlong)&___7UBodySetupCore__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetCollisionTraceFlag @ 1441ad710

TEnumAsByte<ECollisionTraceFlag> __thiscall
UBodySetupCore::GetCollisionTraceFlag(UBodySetupCore *this)

{
  uchar uVar1;
  UPhysicsSettingsCore *pUVar2;
  uchar uVar3;
  uchar *in_RDX;
  
  pUVar2 = UPhysicsSettingsCore::Get();
  uVar1 = (this->CollisionTraceFlag).Value;
  uVar3 = (pUVar2->DefaultShapeComplexity).Value;
  if (uVar1 != '\0') {
    uVar3 = uVar1;
  }
  *in_RDX = uVar3;
  return (TEnumAsByte<ECollisionTraceFlag>)(uchar)in_RDX;
}

// GetPrivateStaticClass @ 1441af220

UClass * __cdecl UBodySetupCore::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBodySetupCore.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PhysicsCore",L"BodySetupCore",
               &Z_Registration_Info_UClass_UBodySetupCore.InnerSingleton,
               StaticRegisterNativesUBodySetupCore,0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UBodySetupCore>,InternalVTableHelperCtorCaller<UBodySetupCore>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBodySetupCore.InnerSingleton;
}

// StaticRegisterNativesUBodySetupCore @ 1441ba9c0

void __cdecl UBodySetupCore::StaticRegisterNativesUBodySetupCore(void)

{
  return;
}

