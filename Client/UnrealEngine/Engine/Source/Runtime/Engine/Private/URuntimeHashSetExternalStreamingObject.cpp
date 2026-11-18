// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 148a71790

UClass * __cdecl URuntimeHashSetExternalStreamingObject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URuntimeHashSetExternalStreamingObject.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"RuntimeHashSetExternalStreamingObject",
               &Z_Registration_Info_UClass_URuntimeHashSetExternalStreamingObject.InnerSingleton,
               StaticRegisterNativesURuntimeHashSetExternalStreamingObject,0x1d8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<URuntimeHashSetExternalStreamingObject>,
               InternalVTableHelperCtorCaller<URuntimeHashSetExternalStreamingObject>,local_res8,
               URuntimeHashExternalStreamingObjectBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URuntimeHashSetExternalStreamingObject.InnerSingleton;
}

// URuntimeHashSetExternalStreamingObject @ 148a7fd30

URuntimeHashSetExternalStreamingObject * __thiscall
URuntimeHashSetExternalStreamingObject::URuntimeHashSetExternalStreamingObject
          (URuntimeHashSetExternalStreamingObject *this,FVTableHelper *param_1)

{
  URuntimeHashExternalStreamingObjectBase::URuntimeHashExternalStreamingObjectBase
            ((URuntimeHashExternalStreamingObjectBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IWorldPartitionCookPackageObject__;
  this->_padding_ = (longlong)&_vftable__for__IDataLayerInstanceProvider__;
  (this->RuntimeStreamingData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RuntimeStreamingData).ArrayNum = 0;
  (this->RuntimeStreamingData).ArrayMax = 0;
  return this;
}

// URuntimeHashSetExternalStreamingObject @ 148a7fd80

URuntimeHashSetExternalStreamingObject * __thiscall
URuntimeHashSetExternalStreamingObject::URuntimeHashSetExternalStreamingObject
          (URuntimeHashSetExternalStreamingObject *this,FObjectInitializer *param_1)

{
  URuntimeHashExternalStreamingObjectBase::URuntimeHashExternalStreamingObjectBase
            ((URuntimeHashExternalStreamingObjectBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IWorldPartitionCookPackageObject__;
  this->_padding_ = (longlong)&_vftable__for__IDataLayerInstanceProvider__;
  (this->RuntimeStreamingData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RuntimeStreamingData).ArrayNum = 0;
  (this->RuntimeStreamingData).ArrayMax = 0;
  return this;
}

// ~URuntimeHashSetExternalStreamingObject @ 148a819f0

void __thiscall
URuntimeHashSetExternalStreamingObject::~URuntimeHashSetExternalStreamingObject
          (URuntimeHashSetExternalStreamingObject *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IWorldPartitionCookPackageObject__;
  this->_padding_ = (longlong)&_vftable__for__IDataLayerInstanceProvider__;
  DestructItems<FRuntimePartitionStreamingData,int>
            ((FRuntimePartitionStreamingData *)(this->RuntimeStreamingData).AllocatorInstance.Data,
             (this->RuntimeStreamingData).ArrayNum);
  pFVar1 = (this->RuntimeStreamingData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  URuntimeHashExternalStreamingObjectBase::~URuntimeHashExternalStreamingObjectBase
            ((URuntimeHashExternalStreamingObjectBase *)this);
  return;
}

// AddReferencedObjects @ 148a8ad30

void __cdecl
URuntimeHashSetExternalStreamingObject::AddReferencedObjects
          (UObject *param_1,FReferenceCollector *param_2)

{
  return;
}

// CreatePartitionsSpatialIndex @ 148a8cde0

void __thiscall
URuntimeHashSetExternalStreamingObject::CreatePartitionsSpatialIndex
          (URuntimeHashSetExternalStreamingObject *this)

{
  FRuntimePartitionStreamingData *pFVar1;
  int iVar2;
  FRuntimePartitionStreamingData *this_00;
  undefined1 local_res8 [8];
  
  iVar2 = (this->RuntimeStreamingData).ArrayNum;
  this_00 = (FRuntimePartitionStreamingData *)(this->RuntimeStreamingData).AllocatorInstance.Data;
  pFVar1 = this_00 + iVar2;
  while( true ) {
    if ((this->RuntimeStreamingData).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FRuntimePartitionStreamingData_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar1) break;
    FRuntimePartitionStreamingData::CreatePartitionsSpatialIndex(this_00);
    this_00 = this_00 + 1;
  }
  return;
}

// DestroyPartitionsSpatialIndex @ 148a8d670

void __thiscall
URuntimeHashSetExternalStreamingObject::DestroyPartitionsSpatialIndex
          (URuntimeHashSetExternalStreamingObject *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 *puVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar2 = (this->RuntimeStreamingData).ArrayNum;
  pFVar4 = (this->RuntimeStreamingData).AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)iVar2 * 0x48;
  while( true ) {
    if ((this->RuntimeStreamingData).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FRuntimePartitionStreamingData_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    puVar3 = *(undefined8 **)(pFVar4 + 0x30);
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined8 *)(pFVar4 + 0x30) = 0;
      (**(code **)*puVar3)(puVar3,1);
    }
    puVar3 = *(undefined8 **)(pFVar4 + 0x38);
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined8 *)(pFVar4 + 0x38) = 0;
      (**(code **)*puVar3)(puVar3,1);
    }
    puVar3 = *(undefined8 **)(pFVar4 + 0x40);
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined8 *)(pFVar4 + 0x40) = 0;
      (**(code **)*puVar3)(puVar3,1);
    }
    pFVar4 = pFVar4 + 0x48;
  }
  return;
}

// GetPrivateStaticClass @ 148a96190

UClass * __cdecl URuntimeHashSetExternalStreamingObject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URuntimeHashSetExternalStreamingObject.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"RuntimeHashSetExternalStreamingObject",
               &Z_Registration_Info_UClass_URuntimeHashSetExternalStreamingObject.InnerSingleton,
               StaticRegisterNativesURuntimeHashSetExternalStreamingObject,0x1d8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<URuntimeHashSetExternalStreamingObject>,
               InternalVTableHelperCtorCaller<URuntimeHashSetExternalStreamingObject>,local_res8,
               URuntimeHashExternalStreamingObjectBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URuntimeHashSetExternalStreamingObject.InnerSingleton;
}

// StaticRegisterNativesURuntimeHashSetExternalStreamingObject @ 148aa2960

void __cdecl
URuntimeHashSetExternalStreamingObject::StaticRegisterNativesURuntimeHashSetExternalStreamingObject
          (void)

{
  return;
}

