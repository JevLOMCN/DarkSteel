// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1482ca1d0

UClass * __cdecl UPhysicsBodyInstanceOwnerResolver::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsBodyInstanceOwnerResolver.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicsBodyInstanceOwnerResolver",
               &Z_Registration_Info_UClass_UPhysicsBodyInstanceOwnerResolver.InnerSingleton,
               StaticRegisterNativesUPhysicsBodyInstanceOwnerResolver,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPhysicsBodyInstanceOwnerResolver>,
               InternalVTableHelperCtorCaller<UPhysicsBodyInstanceOwnerResolver>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsBodyInstanceOwnerResolver.InnerSingleton;
}

// UPhysicsBodyInstanceOwnerResolver @ 1482db9f0

UPhysicsBodyInstanceOwnerResolver * __thiscall
UPhysicsBodyInstanceOwnerResolver::UPhysicsBodyInstanceOwnerResolver
          (UPhysicsBodyInstanceOwnerResolver *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UPhysicsBodyInstanceOwnerResolver__6B_;
  return this;
}

// UPhysicsBodyInstanceOwnerResolver @ 1482dba20

UPhysicsBodyInstanceOwnerResolver * __thiscall
UPhysicsBodyInstanceOwnerResolver::UPhysicsBodyInstanceOwnerResolver
          (UPhysicsBodyInstanceOwnerResolver *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UPhysicsBodyInstanceOwnerResolver__6B_;
  return this;
}

// ~UPhysicsBodyInstanceOwnerResolver @ 1482de120

void __thiscall
UPhysicsBodyInstanceOwnerResolver::~UPhysicsBodyInstanceOwnerResolver
          (UPhysicsBodyInstanceOwnerResolver *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14830c420

UClass * __cdecl UPhysicsBodyInstanceOwnerResolver::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsBodyInstanceOwnerResolver.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicsBodyInstanceOwnerResolver",
               &Z_Registration_Info_UClass_UPhysicsBodyInstanceOwnerResolver.InnerSingleton,
               StaticRegisterNativesUPhysicsBodyInstanceOwnerResolver,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPhysicsBodyInstanceOwnerResolver>,
               InternalVTableHelperCtorCaller<UPhysicsBodyInstanceOwnerResolver>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsBodyInstanceOwnerResolver.InnerSingleton;
}

// StaticRegisterNativesUPhysicsBodyInstanceOwnerResolver @ 148323b30

void __cdecl
UPhysicsBodyInstanceOwnerResolver::StaticRegisterNativesUPhysicsBodyInstanceOwnerResolver(void)

{
  return;
}

