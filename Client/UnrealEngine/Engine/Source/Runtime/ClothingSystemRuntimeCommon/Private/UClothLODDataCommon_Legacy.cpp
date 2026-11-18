// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ClothingSystemRuntimeCommon
// Functions: 10

// StaticClass @ 148c0ae00

UClass * __cdecl UClothLODDataCommon_Legacy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClothLODDataCommon_Legacy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ClothingSystemRuntimeCommon",L"ClothLODDataCommon_Legacy",
               &Z_Registration_Info_UClass_UClothLODDataCommon_Legacy.InnerSingleton,
               StaticRegisterNativesUClothLODDataCommon_Legacy,0x1b8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UClothLODDataCommon_Legacy>,
               InternalVTableHelperCtorCaller<UClothLODDataCommon_Legacy>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClothLODDataCommon_Legacy.InnerSingleton;
}

// UClothLODDataCommon_Legacy @ 148c1a0f0

UClothLODDataCommon_Legacy * __thiscall
UClothLODDataCommon_Legacy::UClothLODDataCommon_Legacy
          (UClothLODDataCommon_Legacy *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UClothLODDataCommon_Legacy__6B_;
  (this->PhysicalMeshData_DEPRECATED).field0_0x0.DebugPtr = (UClothPhysicalMeshDataBase_Legacy *)0x0
  ;
  FClothPhysicalMeshData::FClothPhysicalMeshData(&this->ClothPhysicalMeshData);
  (this->CollisionData).Spheres.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollisionData).Spheres.ArrayNum = 0;
  (this->CollisionData).Spheres.ArrayMax = 0;
  (this->CollisionData).SphereConnections.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollisionData).SphereConnections.ArrayNum = 0;
  (this->CollisionData).SphereConnections.ArrayMax = 0;
  (this->CollisionData).Convexes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollisionData).Convexes.ArrayNum = 0;
  (this->CollisionData).Convexes.ArrayMax = 0;
  (this->CollisionData).Boxes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollisionData).Boxes.ArrayNum = 0;
  (this->CollisionData).Boxes.ArrayMax = 0;
  (this->TransitionUpSkinData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransitionUpSkinData).ArrayNum = 0;
  (this->TransitionUpSkinData).ArrayMax = 0;
  (this->TransitionDownSkinData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransitionDownSkinData).ArrayNum = 0;
  (this->TransitionDownSkinData).ArrayMax = 0;
  return this;
}

// UClothLODDataCommon_Legacy @ 148c1a190

UClothLODDataCommon_Legacy * __thiscall
UClothLODDataCommon_Legacy::UClothLODDataCommon_Legacy
          (UClothLODDataCommon_Legacy *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UClothLODDataCommon_Legacy__6B_;
  (this->PhysicalMeshData_DEPRECATED).field0_0x0.DebugPtr = (UClothPhysicalMeshDataBase_Legacy *)0x0
  ;
  FClothPhysicalMeshData::FClothPhysicalMeshData(&this->ClothPhysicalMeshData);
  (this->CollisionData).Spheres.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollisionData).Spheres.ArrayNum = 0;
  (this->CollisionData).Spheres.ArrayMax = 0;
  (this->CollisionData).SphereConnections.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollisionData).SphereConnections.ArrayNum = 0;
  (this->CollisionData).SphereConnections.ArrayMax = 0;
  (this->CollisionData).Convexes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollisionData).Convexes.ArrayNum = 0;
  (this->CollisionData).Convexes.ArrayMax = 0;
  (this->CollisionData).Boxes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollisionData).Boxes.ArrayNum = 0;
  (this->CollisionData).Boxes.ArrayMax = 0;
  (this->TransitionUpSkinData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransitionUpSkinData).ArrayNum = 0;
  (this->TransitionUpSkinData).ArrayMax = 0;
  (this->TransitionDownSkinData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransitionDownSkinData).ArrayNum = 0;
  (this->TransitionDownSkinData).ArrayMax = 0;
  return this;
}

// ~UClothLODDataCommon_Legacy @ 148c1ab20

void __thiscall
UClothLODDataCommon_Legacy::~UClothLODDataCommon_Legacy(UClothLODDataCommon_Legacy *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UClothLODDataCommon_Legacy__6B_;
  pFVar1 = (this->TransitionDownSkinData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TransitionUpSkinData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CollisionData).Boxes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FClothCollisionPrim_Convex,int>
            ((FClothCollisionPrim_Convex *)(this->CollisionData).Convexes.AllocatorInstance.Data,
             (this->CollisionData).Convexes.ArrayNum);
  pFVar1 = (this->CollisionData).Convexes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CollisionData).SphereConnections.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CollisionData).Spheres.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FClothPhysicalMeshData::~FClothPhysicalMeshData(&this->ClothPhysicalMeshData);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 148c2d6c0

UClass * __cdecl UClothLODDataCommon_Legacy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClothLODDataCommon_Legacy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ClothingSystemRuntimeCommon",L"ClothLODDataCommon_Legacy",
               &Z_Registration_Info_UClass_UClothLODDataCommon_Legacy.InnerSingleton,
               StaticRegisterNativesUClothLODDataCommon_Legacy,0x1b8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UClothLODDataCommon_Legacy>,
               InternalVTableHelperCtorCaller<UClothLODDataCommon_Legacy>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClothLODDataCommon_Legacy.InnerSingleton;
}

// MigrateTo @ 148c2e0e0

void __thiscall
UClothLODDataCommon_Legacy::MigrateTo(UClothLODDataCommon_Legacy *this,FClothLODDataCommon *param_1)

{
  TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_> *pTVar1;
  UClothPhysicalMeshDataBase_Legacy *this_00;
  FScriptContainerElement *pFVar2;
  TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32>_> *pTVar3;
  
  this_00 = (this->PhysicalMeshData_DEPRECATED).field0_0x0.DebugPtr;
  if (this_00 == (UClothPhysicalMeshDataBase_Legacy *)0x0) {
    FClothPhysicalMeshData::MigrateFrom(&param_1->PhysicalMeshData,&this->ClothPhysicalMeshData);
  }
  else {
    UObject::ConditionalPostLoad((UObject *)this_00);
    FClothPhysicalMeshData::MigrateFrom
              (&param_1->PhysicalMeshData,(this->PhysicalMeshData_DEPRECATED).field0_0x0.DebugPtr);
  }
  pTVar1 = &this->TransitionUpSkinData;
  pTVar3 = &param_1->TransitionUpSkinData;
  if (pTVar3 != pTVar1) {
    pFVar2 = (pTVar3->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar3->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (param_1->TransitionUpSkinData).ArrayNum = (this->TransitionUpSkinData).ArrayNum;
    (param_1->TransitionUpSkinData).ArrayMax = (this->TransitionUpSkinData).ArrayMax;
    (this->TransitionUpSkinData).ArrayNum = 0;
    (this->TransitionUpSkinData).ArrayMax = 0;
  }
  pTVar3 = &this->TransitionDownSkinData;
  pTVar1 = &param_1->TransitionDownSkinData;
  if (pTVar1 != pTVar3) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (param_1->TransitionDownSkinData).ArrayNum = (this->TransitionDownSkinData).ArrayNum;
    (param_1->TransitionDownSkinData).ArrayMax = (this->TransitionDownSkinData).ArrayMax;
    (this->TransitionDownSkinData).ArrayNum = 0;
    (this->TransitionDownSkinData).ArrayMax = 0;
  }
  return;
}

// PostLoad @ 148c2e5e0

void __thiscall UClothLODDataCommon_Legacy::PostLoad(UClothLODDataCommon_Legacy *this)

{
  UClothPhysicalMeshDataBase_Legacy *this_00;
  
  UObject::PostLoad((UObject *)this);
  this_00 = (this->PhysicalMeshData_DEPRECATED).field0_0x0.DebugPtr;
  if (this_00 != (UClothPhysicalMeshDataBase_Legacy *)0x0) {
    UObject::ConditionalPostLoad((UObject *)this_00);
    FClothPhysicalMeshData::MigrateFrom
              (&this->ClothPhysicalMeshData,(this->PhysicalMeshData_DEPRECATED).field0_0x0.DebugPtr)
    ;
    (this->PhysicalMeshData_DEPRECATED).field0_0x0.DebugPtr =
         (UClothPhysicalMeshDataBase_Legacy *)0x0;
  }
  return;
}

// Serialize @ 148c31e70

void __thiscall
UClothLODDataCommon_Legacy::Serialize(UClothLODDataCommon_Legacy *this,FArchive *param_1)

{
  FArchive *pFVar1;
  
  UObject::Serialize((UObject *)this,param_1);
  pFVar1 = TArrayPrivateFriend::Serialize<FMeshToMeshVertData,TSizedDefaultAllocator<32>_>
                     (param_1,&this->TransitionUpSkinData);
  TArrayPrivateFriend::Serialize<FMeshToMeshVertData,TSizedDefaultAllocator<32>_>
            (pFVar1,&this->TransitionDownSkinData);
  return;
}

// Serialize @ 148c31ec0

void __thiscall
UClothLODDataCommon_Legacy::Serialize
          (UClothLODDataCommon_Legacy *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res8;
  
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  UObject::Serialize((UObject *)this,pFVar1);
  pFVar1 = TArrayPrivateFriend::Serialize<FMeshToMeshVertData,TSizedDefaultAllocator<32>_>
                     (pFVar1,&this->TransitionUpSkinData);
  TArrayPrivateFriend::Serialize<FMeshToMeshVertData,TSizedDefaultAllocator<32>_>
            (pFVar1,&this->TransitionDownSkinData);
  return;
}

// StaticRegisterNativesUClothLODDataCommon_Legacy @ 148c34500

void __cdecl UClothLODDataCommon_Legacy::StaticRegisterNativesUClothLODDataCommon_Legacy(void)

{
  return;
}

