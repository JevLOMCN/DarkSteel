// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 6

// StaticClass @ 145eefcf0

UClass * __cdecl ULandscapeMeshCollisionComponent_DEPRECATED::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeMeshCollisionComponent_DEPRECATED.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeMeshCollisionComponent_DEPRECATED",
               &Z_Registration_Info_UClass_ULandscapeMeshCollisionComponent_DEPRECATED.
                InnerSingleton,StaticRegisterNativesULandscapeMeshCollisionComponent_DEPRECATED,
               0x660,0x10,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ULandscapeMeshCollisionComponent_DEPRECATED>,
               InternalVTableHelperCtorCaller<ULandscapeMeshCollisionComponent_DEPRECATED>,
               local_res8,ULandscapeHeightfieldCollisionComponent::StaticClass,
               ALandscapeProxy::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeMeshCollisionComponent_DEPRECATED.InnerSingleton;
}

// ULandscapeMeshCollisionComponent_DEPRECATED @ 145ef3c00

ULandscapeMeshCollisionComponent_DEPRECATED * __thiscall
ULandscapeMeshCollisionComponent_DEPRECATED::ULandscapeMeshCollisionComponent_DEPRECATED
          (ULandscapeMeshCollisionComponent_DEPRECATED *this,FVTableHelper *param_1)

{
  ULandscapeHeightfieldCollisionComponent::ULandscapeHeightfieldCollisionComponent
            ((ULandscapeHeightfieldCollisionComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  (this->MeshGuid).A = 0;
  (this->MeshGuid).B = 0;
  (this->MeshGuid).C = 0;
  (this->MeshGuid).D = 0;
  (this->MeshRef).Reference = (FTriMeshGeometryRef *)0x0;
  return this;
}

// ULandscapeMeshCollisionComponent_DEPRECATED @ 145ef3c80

ULandscapeMeshCollisionComponent_DEPRECATED * __thiscall
ULandscapeMeshCollisionComponent_DEPRECATED::ULandscapeMeshCollisionComponent_DEPRECATED
          (ULandscapeMeshCollisionComponent_DEPRECATED *this,FObjectInitializer *param_1)

{
  ULandscapeHeightfieldCollisionComponent::ULandscapeHeightfieldCollisionComponent
            ((ULandscapeHeightfieldCollisionComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  (this->MeshGuid).A = 0;
  (this->MeshGuid).B = 0;
  (this->MeshGuid).C = 0;
  (this->MeshGuid).D = 0;
  (this->MeshRef).Reference = (FTriMeshGeometryRef *)0x0;
  return this;
}

// ~ULandscapeMeshCollisionComponent_DEPRECATED @ 145ef4370

void __thiscall
ULandscapeMeshCollisionComponent_DEPRECATED::~ULandscapeMeshCollisionComponent_DEPRECATED
          (ULandscapeMeshCollisionComponent_DEPRECATED *this)

{
  longlong *plVar1;
  FTriMeshGeometryRef *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  pFVar2 = (this->MeshRef).Reference;
  if (pFVar2 != (FTriMeshGeometryRef *)0x0) {
    plVar1 = &pFVar2->_padding_;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  ULandscapeHeightfieldCollisionComponent::~ULandscapeHeightfieldCollisionComponent
            ((ULandscapeHeightfieldCollisionComponent *)this);
  return;
}

// GetPrivateStaticClass @ 145ef5a10

UClass * __cdecl ULandscapeMeshCollisionComponent_DEPRECATED::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeMeshCollisionComponent_DEPRECATED.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeMeshCollisionComponent_DEPRECATED",
               &Z_Registration_Info_UClass_ULandscapeMeshCollisionComponent_DEPRECATED.
                InnerSingleton,StaticRegisterNativesULandscapeMeshCollisionComponent_DEPRECATED,
               0x660,0x10,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ULandscapeMeshCollisionComponent_DEPRECATED>,
               InternalVTableHelperCtorCaller<ULandscapeMeshCollisionComponent_DEPRECATED>,
               local_res8,ULandscapeHeightfieldCollisionComponent::StaticClass,
               ALandscapeProxy::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeMeshCollisionComponent_DEPRECATED.InnerSingleton;
}

// StaticRegisterNativesULandscapeMeshCollisionComponent_DEPRECATED @ 145ef6090

void __cdecl
ULandscapeMeshCollisionComponent_DEPRECATED::
StaticRegisterNativesULandscapeMeshCollisionComponent_DEPRECATED(void)

{
  return;
}

