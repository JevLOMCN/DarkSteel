// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKit
// Functions: 7

// StaticClass @ 14cfcbf10

UClass * __cdecl UARKitMeshGeometry::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARKitMeshGeometry.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AppleARKit",L"ARKitMeshGeometry",
               &Z_Registration_Info_UClass_UARKitMeshGeometry.InnerSingleton,
               StaticRegisterNativesUARKitMeshGeometry,0x160,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UARKitMeshGeometry>,
               InternalVTableHelperCtorCaller<UARKitMeshGeometry>,local_res8,
               UARMeshGeometry::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARKitMeshGeometry.InnerSingleton;
}

// UARKitMeshGeometry @ 14cfd0380

UARKitMeshGeometry * __thiscall
UARKitMeshGeometry::UARKitMeshGeometry(UARKitMeshGeometry *this,FVTableHelper *param_1)

{
  UARMeshGeometry::UARMeshGeometry((UARMeshGeometry *)this,param_1);
  *(undefined ***)this = &___7UARKitMeshGeometry__6B_;
  return this;
}

// UARKitMeshGeometry @ 14cfd03b0

UARKitMeshGeometry * __thiscall UARKitMeshGeometry::UARKitMeshGeometry(UARKitMeshGeometry *this)

{
  UARMeshGeometry::UARMeshGeometry((UARMeshGeometry *)this);
  *(undefined ***)this = &___7UARKitMeshGeometry__6B_;
  return this;
}

// ~UARKitMeshGeometry @ 14cfd12a0

void __thiscall UARKitMeshGeometry::~UARKitMeshGeometry(UARKitMeshGeometry *this)

{
  *(undefined ***)this = &___7UARKitMeshGeometry__6B_;
  UARMeshGeometry::~UARMeshGeometry((UARMeshGeometry *)this);
  return;
}

// GetObjectClassificationAtLocation @ 14cfd6ea0

bool __thiscall
UARKitMeshGeometry::GetObjectClassificationAtLocation
          (UARKitMeshGeometry *this,TVector<double> *param_1,EARObjectClassification *param_2,
          TVector<double> *param_3,float param_4)

{
  return false;
}

// GetPrivateStaticClass @ 14cfd7210

UClass * __cdecl UARKitMeshGeometry::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARKitMeshGeometry.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AppleARKit",L"ARKitMeshGeometry",
               &Z_Registration_Info_UClass_UARKitMeshGeometry.InnerSingleton,
               StaticRegisterNativesUARKitMeshGeometry,0x160,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UARKitMeshGeometry>,
               InternalVTableHelperCtorCaller<UARKitMeshGeometry>,local_res8,
               UARMeshGeometry::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARKitMeshGeometry.InnerSingleton;
}

// StaticRegisterNativesUARKitMeshGeometry @ 14cfdf420

void __cdecl UARKitMeshGeometry::StaticRegisterNativesUARKitMeshGeometry(void)

{
  return;
}

