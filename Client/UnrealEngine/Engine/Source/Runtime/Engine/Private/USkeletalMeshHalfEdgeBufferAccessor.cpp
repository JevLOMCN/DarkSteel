// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1484307a0

UClass * __cdecl USkeletalMeshHalfEdgeBufferAccessor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USkeletalMeshHalfEdgeBufferAccessor.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SkeletalMeshHalfEdgeBufferAccessor",
               &Z_Registration_Info_UClass_USkeletalMeshHalfEdgeBufferAccessor.InnerSingleton,
               StaticRegisterNativesUSkeletalMeshHalfEdgeBufferAccessor,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USkeletalMeshHalfEdgeBufferAccessor>,
               InternalVTableHelperCtorCaller<USkeletalMeshHalfEdgeBufferAccessor>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USkeletalMeshHalfEdgeBufferAccessor.InnerSingleton;
}

// USkeletalMeshHalfEdgeBufferAccessor @ 148444730

USkeletalMeshHalfEdgeBufferAccessor * __thiscall
USkeletalMeshHalfEdgeBufferAccessor::USkeletalMeshHalfEdgeBufferAccessor
          (USkeletalMeshHalfEdgeBufferAccessor *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7USkeletalMeshHalfEdgeBufferAccessor__6B_;
  return this;
}

// USkeletalMeshHalfEdgeBufferAccessor @ 148444760

USkeletalMeshHalfEdgeBufferAccessor * __thiscall
USkeletalMeshHalfEdgeBufferAccessor::USkeletalMeshHalfEdgeBufferAccessor
          (USkeletalMeshHalfEdgeBufferAccessor *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7USkeletalMeshHalfEdgeBufferAccessor__6B_;
  return this;
}

// ~USkeletalMeshHalfEdgeBufferAccessor @ 148446e40

void __thiscall
USkeletalMeshHalfEdgeBufferAccessor::~USkeletalMeshHalfEdgeBufferAccessor
          (USkeletalMeshHalfEdgeBufferAccessor *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14846d990

UClass * __cdecl USkeletalMeshHalfEdgeBufferAccessor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USkeletalMeshHalfEdgeBufferAccessor.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SkeletalMeshHalfEdgeBufferAccessor",
               &Z_Registration_Info_UClass_USkeletalMeshHalfEdgeBufferAccessor.InnerSingleton,
               StaticRegisterNativesUSkeletalMeshHalfEdgeBufferAccessor,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USkeletalMeshHalfEdgeBufferAccessor>,
               InternalVTableHelperCtorCaller<USkeletalMeshHalfEdgeBufferAccessor>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USkeletalMeshHalfEdgeBufferAccessor.InnerSingleton;
}

// StaticRegisterNativesUSkeletalMeshHalfEdgeBufferAccessor @ 148496090

void __cdecl
USkeletalMeshHalfEdgeBufferAccessor::StaticRegisterNativesUSkeletalMeshHalfEdgeBufferAccessor(void)

{
  return;
}

