// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147e8e7f0

UClass * __cdecl ULightmappedSurfaceCollection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULightmappedSurfaceCollection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LightmappedSurfaceCollection",
               &Z_Registration_Info_UClass_ULightmappedSurfaceCollection.InnerSingleton,
               StaticRegisterNativesULightmappedSurfaceCollection,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULightmappedSurfaceCollection>,
               InternalVTableHelperCtorCaller<ULightmappedSurfaceCollection>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULightmappedSurfaceCollection.InnerSingleton;
}

// ULightmappedSurfaceCollection @ 147ea6ec0

ULightmappedSurfaceCollection * __thiscall
ULightmappedSurfaceCollection::ULightmappedSurfaceCollection
          (ULightmappedSurfaceCollection *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULightmappedSurfaceCollection__6B_;
  (this->SourceModel).field0_0x0.DebugPtr = (UModel *)0x0;
  (this->Surfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Surfaces).ArrayNum = 0;
  (this->Surfaces).ArrayMax = 0;
  return this;
}

// ULightmappedSurfaceCollection @ 147ea6f00

ULightmappedSurfaceCollection * __thiscall
ULightmappedSurfaceCollection::ULightmappedSurfaceCollection
          (ULightmappedSurfaceCollection *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULightmappedSurfaceCollection__6B_;
  (this->SourceModel).field0_0x0.DebugPtr = (UModel *)0x0;
  (this->Surfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Surfaces).ArrayNum = 0;
  (this->Surfaces).ArrayMax = 0;
  return this;
}

// ~ULightmappedSurfaceCollection @ 147ea9660

void __thiscall
ULightmappedSurfaceCollection::~ULightmappedSurfaceCollection(ULightmappedSurfaceCollection *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ULightmappedSurfaceCollection__6B_;
  pFVar1 = (this->Surfaces).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147ec44a0

UClass * __cdecl ULightmappedSurfaceCollection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULightmappedSurfaceCollection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LightmappedSurfaceCollection",
               &Z_Registration_Info_UClass_ULightmappedSurfaceCollection.InnerSingleton,
               StaticRegisterNativesULightmappedSurfaceCollection,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULightmappedSurfaceCollection>,
               InternalVTableHelperCtorCaller<ULightmappedSurfaceCollection>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULightmappedSurfaceCollection.InnerSingleton;
}

// StaticRegisterNativesULightmappedSurfaceCollection @ 147edf150

void __cdecl ULightmappedSurfaceCollection::StaticRegisterNativesULightmappedSurfaceCollection(void)

{
  return;
}

