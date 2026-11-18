// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ClothingSystemRuntimeNv
// Functions: 6

// StaticClass @ 148c35580

UClass * __cdecl UClothPhysicalMeshDataNv_Legacy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClothPhysicalMeshDataNv_Legacy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ClothingSystemRuntimeNv",L"ClothPhysicalMeshDataNv_Legacy",
               &Z_Registration_Info_UClass_UClothPhysicalMeshDataNv_Legacy.InnerSingleton,
               StaticRegisterNativesUClothPhysicalMeshDataNv_Legacy,0x120,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UClothPhysicalMeshDataNv_Legacy>,
               InternalVTableHelperCtorCaller<UClothPhysicalMeshDataNv_Legacy>,local_res8,
               UClothPhysicalMeshDataBase_Legacy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClothPhysicalMeshDataNv_Legacy.InnerSingleton;
}

// UClothPhysicalMeshDataNv_Legacy @ 148c36810

UClothPhysicalMeshDataNv_Legacy * __thiscall
UClothPhysicalMeshDataNv_Legacy::UClothPhysicalMeshDataNv_Legacy
          (UClothPhysicalMeshDataNv_Legacy *this,FVTableHelper *param_1)

{
  UClothPhysicalMeshDataBase_Legacy::UClothPhysicalMeshDataBase_Legacy
            ((UClothPhysicalMeshDataBase_Legacy *)this,param_1);
  this->_padding_ = (longlong)&___7UClothPhysicalMeshDataNv_Legacy__6B_;
  (this->MaxDistances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaxDistances).ArrayNum = 0;
  (this->MaxDistances).ArrayMax = 0;
  (this->BackstopDistances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BackstopDistances).ArrayNum = 0;
  (this->BackstopDistances).ArrayMax = 0;
  (this->BackstopRadiuses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BackstopRadiuses).ArrayNum = 0;
  (this->BackstopRadiuses).ArrayMax = 0;
  (this->AnimDriveMultipliers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimDriveMultipliers).ArrayNum = 0;
  (this->AnimDriveMultipliers).ArrayMax = 0;
  return this;
}

// UClothPhysicalMeshDataNv_Legacy @ 148c36880

UClothPhysicalMeshDataNv_Legacy * __thiscall
UClothPhysicalMeshDataNv_Legacy::UClothPhysicalMeshDataNv_Legacy
          (UClothPhysicalMeshDataNv_Legacy *this)

{
  UClothPhysicalMeshDataBase_Legacy::UClothPhysicalMeshDataBase_Legacy
            ((UClothPhysicalMeshDataBase_Legacy *)this);
  this->_padding_ = (longlong)&___7UClothPhysicalMeshDataNv_Legacy__6B_;
  (this->MaxDistances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaxDistances).ArrayNum = 0;
  (this->MaxDistances).ArrayMax = 0;
  (this->BackstopDistances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BackstopDistances).ArrayNum = 0;
  (this->BackstopDistances).ArrayMax = 0;
  (this->BackstopRadiuses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BackstopRadiuses).ArrayNum = 0;
  (this->BackstopRadiuses).ArrayMax = 0;
  (this->AnimDriveMultipliers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimDriveMultipliers).ArrayNum = 0;
  (this->AnimDriveMultipliers).ArrayMax = 0;
  UClothPhysicalMeshDataBase_Legacy::RegisterFloatArray
            ((UClothPhysicalMeshDataBase_Legacy *)this,1,&this->MaxDistances);
  UClothPhysicalMeshDataBase_Legacy::RegisterFloatArray
            ((UClothPhysicalMeshDataBase_Legacy *)this,2,&this->BackstopDistances);
  UClothPhysicalMeshDataBase_Legacy::RegisterFloatArray
            ((UClothPhysicalMeshDataBase_Legacy *)this,3,&this->BackstopRadiuses);
  UClothPhysicalMeshDataBase_Legacy::RegisterFloatArray
            ((UClothPhysicalMeshDataBase_Legacy *)this,4,&this->AnimDriveMultipliers);
  return this;
}

// ~UClothPhysicalMeshDataNv_Legacy @ 148c36a30

void __thiscall
UClothPhysicalMeshDataNv_Legacy::~UClothPhysicalMeshDataNv_Legacy
          (UClothPhysicalMeshDataNv_Legacy *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UClothPhysicalMeshDataNv_Legacy__6B_;
  pFVar1 = (this->AnimDriveMultipliers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BackstopRadiuses).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BackstopDistances).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaxDistances).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UClothPhysicalMeshDataBase_Legacy::~UClothPhysicalMeshDataBase_Legacy
            ((UClothPhysicalMeshDataBase_Legacy *)this);
  return;
}

// GetPrivateStaticClass @ 148c36ec0

UClass * __cdecl UClothPhysicalMeshDataNv_Legacy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClothPhysicalMeshDataNv_Legacy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ClothingSystemRuntimeNv",L"ClothPhysicalMeshDataNv_Legacy",
               &Z_Registration_Info_UClass_UClothPhysicalMeshDataNv_Legacy.InnerSingleton,
               StaticRegisterNativesUClothPhysicalMeshDataNv_Legacy,0x120,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UClothPhysicalMeshDataNv_Legacy>,
               InternalVTableHelperCtorCaller<UClothPhysicalMeshDataNv_Legacy>,local_res8,
               UClothPhysicalMeshDataBase_Legacy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClothPhysicalMeshDataNv_Legacy.InnerSingleton;
}

// StaticRegisterNativesUClothPhysicalMeshDataNv_Legacy @ 148c377c0

void __cdecl
UClothPhysicalMeshDataNv_Legacy::StaticRegisterNativesUClothPhysicalMeshDataNv_Legacy(void)

{
  return;
}

