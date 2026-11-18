// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// StaticClass @ 14d570a80

UClass * __cdecl UCameraObjectInterfaceDataParameter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraObjectInterfaceDataParameter.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraObjectInterfaceDataParameter",
               &Z_Registration_Info_UClass_UCameraObjectInterfaceDataParameter.InnerSingleton,
               StaticRegisterNativesUCameraObjectInterfaceDataParameter,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraObjectInterfaceDataParameter>,
               InternalVTableHelperCtorCaller<UCameraObjectInterfaceDataParameter>,local_res8,
               UCameraObjectInterfaceParameterBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraObjectInterfaceDataParameter.InnerSingleton;
}

// UCameraObjectInterfaceDataParameter @ 14d58f320

UCameraObjectInterfaceDataParameter * __thiscall
UCameraObjectInterfaceDataParameter::UCameraObjectInterfaceDataParameter
          (UCameraObjectInterfaceDataParameter *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->PrivateDataID).Value = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->DataType = Name;
  this->DataContainerType = None;
  (this->DataTypeObject).field0_0x0.DebugPtr = (UObject *)0x0;
  return this;
}

// UCameraObjectInterfaceDataParameter @ 14d58f380

UCameraObjectInterfaceDataParameter * __thiscall
UCameraObjectInterfaceDataParameter::UCameraObjectInterfaceDataParameter
          (UCameraObjectInterfaceDataParameter *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->PrivateDataID).Value = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->DataType = Name;
  this->DataContainerType = None;
  (this->DataTypeObject).field0_0x0.DebugPtr = (UObject *)0x0;
  return this;
}

// ~UCameraObjectInterfaceDataParameter @ 14d591a90

void __thiscall
UCameraObjectInterfaceDataParameter::~UCameraObjectInterfaceDataParameter
          (UCameraObjectInterfaceDataParameter *this)

{
  this->_padding_ = (longlong)&UCameraObjectInterfaceParameterBase::_vftable__for__UObject__;
  this->_padding_ =
       (longlong)&UCameraObjectInterfaceParameterBase::_vftable__for__IObjectTreeGraphObject__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IObjectTreeGraphObject__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetDataDefinition @ 14d5a7370

FCameraContextDataDefinition * __thiscall
UCameraObjectInterfaceDataParameter::GetDataDefinition
          (UCameraObjectInterfaceDataParameter *this,
          FCameraContextDataDefinition *__return_storage_ptr__)

{
  UObject *pUVar1;
  
  (__return_storage_ptr__->DataID).Value = 0xffffffff;
  __return_storage_ptr__->DataType = Name;
  __return_storage_ptr__->DataContainerType = None;
  (__return_storage_ptr__->DataTypeObject).field0_0x0.DebugPtr = (UObject *)0x0;
  __return_storage_ptr__->bAutoReset = false;
  (__return_storage_ptr__->DataID).Value = (this->PrivateDataID).Value;
  __return_storage_ptr__->DataType = this->DataType;
  __return_storage_ptr__->DataContainerType = this->DataContainerType;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (this->DataTypeObject).field0_0x0.DebugPtr, pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  (__return_storage_ptr__->DataTypeObject).field0_0x0 = (this->DataTypeObject).field0_0x0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14d5a9490

UClass * __cdecl UCameraObjectInterfaceDataParameter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraObjectInterfaceDataParameter.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraObjectInterfaceDataParameter",
               &Z_Registration_Info_UClass_UCameraObjectInterfaceDataParameter.InnerSingleton,
               StaticRegisterNativesUCameraObjectInterfaceDataParameter,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraObjectInterfaceDataParameter>,
               InternalVTableHelperCtorCaller<UCameraObjectInterfaceDataParameter>,local_res8,
               UCameraObjectInterfaceParameterBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraObjectInterfaceDataParameter.InnerSingleton;
}

// StaticRegisterNativesUCameraObjectInterfaceDataParameter @ 14d5d0d10

void __cdecl
UCameraObjectInterfaceDataParameter::StaticRegisterNativesUCameraObjectInterfaceDataParameter(void)

{
  return;
}

