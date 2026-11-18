// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 148aaa430

UClass * __cdecl URuntimeSpatialHashExternalStreamingObject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URuntimeSpatialHashExternalStreamingObject.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"RuntimeSpatialHashExternalStreamingObject",
               &Z_Registration_Info_UClass_URuntimeSpatialHashExternalStreamingObject.InnerSingleton
               ,StaticRegisterNativesURuntimeSpatialHashExternalStreamingObject,0x1d8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<URuntimeSpatialHashExternalStreamingObject>,
               InternalVTableHelperCtorCaller<URuntimeSpatialHashExternalStreamingObject>,local_res8
               ,URuntimeHashExternalStreamingObjectBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URuntimeSpatialHashExternalStreamingObject.InnerSingleton;
}

// URuntimeSpatialHashExternalStreamingObject @ 148ab5080

URuntimeSpatialHashExternalStreamingObject * __thiscall
URuntimeSpatialHashExternalStreamingObject::URuntimeSpatialHashExternalStreamingObject
          (URuntimeSpatialHashExternalStreamingObject *this,FVTableHelper *param_1)

{
  URuntimeHashExternalStreamingObjectBase::URuntimeHashExternalStreamingObjectBase
            ((URuntimeHashExternalStreamingObjectBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IWorldPartitionCookPackageObject__;
  this->_padding_ = (longlong)&_vftable__for__IDataLayerInstanceProvider__;
  (this->StreamingGrids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StreamingGrids).ArrayNum = 0;
  (this->StreamingGrids).ArrayMax = 0;
  return this;
}

// URuntimeSpatialHashExternalStreamingObject @ 148ab50d0

URuntimeSpatialHashExternalStreamingObject * __thiscall
URuntimeSpatialHashExternalStreamingObject::URuntimeSpatialHashExternalStreamingObject
          (URuntimeSpatialHashExternalStreamingObject *this,FObjectInitializer *param_1)

{
  URuntimeHashExternalStreamingObjectBase::URuntimeHashExternalStreamingObjectBase
            ((URuntimeHashExternalStreamingObjectBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IWorldPartitionCookPackageObject__;
  this->_padding_ = (longlong)&_vftable__for__IDataLayerInstanceProvider__;
  (this->StreamingGrids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StreamingGrids).ArrayNum = 0;
  (this->StreamingGrids).ArrayMax = 0;
  return this;
}

// ~URuntimeSpatialHashExternalStreamingObject @ 148ab7370

void __thiscall
URuntimeSpatialHashExternalStreamingObject::~URuntimeSpatialHashExternalStreamingObject
          (URuntimeSpatialHashExternalStreamingObject *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IWorldPartitionCookPackageObject__;
  this->_padding_ = (longlong)&_vftable__for__IDataLayerInstanceProvider__;
  DestructItems<FSpatialHashStreamingGrid,int>
            ((FSpatialHashStreamingGrid *)(this->StreamingGrids).AllocatorInstance.Data,
             (this->StreamingGrids).ArrayNum);
  pFVar1 = (this->StreamingGrids).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  URuntimeHashExternalStreamingObjectBase::~URuntimeHashExternalStreamingObjectBase
            ((URuntimeHashExternalStreamingObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 148acefb0

UClass * __cdecl URuntimeSpatialHashExternalStreamingObject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URuntimeSpatialHashExternalStreamingObject.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"RuntimeSpatialHashExternalStreamingObject",
               &Z_Registration_Info_UClass_URuntimeSpatialHashExternalStreamingObject.InnerSingleton
               ,StaticRegisterNativesURuntimeSpatialHashExternalStreamingObject,0x1d8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<URuntimeSpatialHashExternalStreamingObject>,
               InternalVTableHelperCtorCaller<URuntimeSpatialHashExternalStreamingObject>,local_res8
               ,URuntimeHashExternalStreamingObjectBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URuntimeSpatialHashExternalStreamingObject.InnerSingleton;
}

// StaticRegisterNativesURuntimeSpatialHashExternalStreamingObject @ 148adb810

void __cdecl
URuntimeSpatialHashExternalStreamingObject::
StaticRegisterNativesURuntimeSpatialHashExternalStreamingObject(void)

{
  return;
}

