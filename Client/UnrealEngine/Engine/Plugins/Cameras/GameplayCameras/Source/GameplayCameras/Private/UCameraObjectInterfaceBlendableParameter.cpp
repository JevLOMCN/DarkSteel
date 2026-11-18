// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// StaticClass @ 14d5702f0

UClass * __cdecl UCameraObjectInterfaceBlendableParameter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraObjectInterfaceBlendableParameter.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraObjectInterfaceBlendableParameter",
               &Z_Registration_Info_UClass_UCameraObjectInterfaceBlendableParameter.InnerSingleton,
               StaticRegisterNativesUCameraObjectInterfaceBlendableParameter,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UCameraObjectInterfaceBlendableParameter>,
               InternalVTableHelperCtorCaller<UCameraObjectInterfaceBlendableParameter>,local_res8,
               UCameraObjectInterfaceParameterBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraObjectInterfaceBlendableParameter.InnerSingleton;
}

// UCameraObjectInterfaceBlendableParameter @ 14d58f240

UCameraObjectInterfaceBlendableParameter * __thiscall
UCameraObjectInterfaceBlendableParameter::UCameraObjectInterfaceBlendableParameter
          (UCameraObjectInterfaceBlendableParameter *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->PrivateVariableID).Value = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->ParameterType = Boolean;
  (this->BlendableStructType).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  this->bIsPreBlended = false;
  (this->PrivateVariable_DEPRECATED).field0_0x0.DebugPtr = (UCameraVariableAsset *)0x0;
  return this;
}

// UCameraObjectInterfaceBlendableParameter @ 14d58f2b0

UCameraObjectInterfaceBlendableParameter * __thiscall
UCameraObjectInterfaceBlendableParameter::UCameraObjectInterfaceBlendableParameter
          (UCameraObjectInterfaceBlendableParameter *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->PrivateVariableID).Value = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->ParameterType = Boolean;
  (this->BlendableStructType).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  this->bIsPreBlended = false;
  (this->PrivateVariable_DEPRECATED).field0_0x0.DebugPtr = (UCameraVariableAsset *)0x0;
  return this;
}

// ~UCameraObjectInterfaceBlendableParameter @ 14d591a40

void __thiscall
UCameraObjectInterfaceBlendableParameter::~UCameraObjectInterfaceBlendableParameter
          (UCameraObjectInterfaceBlendableParameter *this)

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

// GetPrivateStaticClass @ 14d5a93d0

UClass * __cdecl UCameraObjectInterfaceBlendableParameter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraObjectInterfaceBlendableParameter.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraObjectInterfaceBlendableParameter",
               &Z_Registration_Info_UClass_UCameraObjectInterfaceBlendableParameter.InnerSingleton,
               StaticRegisterNativesUCameraObjectInterfaceBlendableParameter,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UCameraObjectInterfaceBlendableParameter>,
               InternalVTableHelperCtorCaller<UCameraObjectInterfaceBlendableParameter>,local_res8,
               UCameraObjectInterfaceParameterBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraObjectInterfaceBlendableParameter.InnerSingleton;
}

// GetVariableDefinition @ 14d5ac630

FCameraVariableDefinition * __thiscall
UCameraObjectInterfaceBlendableParameter::GetVariableDefinition
          (UCameraObjectInterfaceBlendableParameter *this,
          FCameraVariableDefinition *__return_storage_ptr__)

{
  UScriptStruct *pUVar1;
  
  (__return_storage_ptr__->VariableID).Value = 0xffffffff;
  __return_storage_ptr__->VariableType = Boolean;
  (__return_storage_ptr__->BlendableStructType).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  __return_storage_ptr__->bIsPrivate = false;
  __return_storage_ptr__->bIsInput = false;
  __return_storage_ptr__->bAutoReset = false;
  (__return_storage_ptr__->VariableID).Value = (this->PrivateVariableID).Value;
  __return_storage_ptr__->VariableType = this->ParameterType;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (this->BlendableStructType).field0_0x0.DebugPtr, pUVar1 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (__return_storage_ptr__->BlendableStructType).field0_0x0 = (this->BlendableStructType).field0_0x0;
  __return_storage_ptr__->bIsPrivate = true;
  __return_storage_ptr__->bIsInput = this->bIsPreBlended;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUCameraObjectInterfaceBlendableParameter @ 14d5d0d00

void __cdecl
UCameraObjectInterfaceBlendableParameter::
StaticRegisterNativesUCameraObjectInterfaceBlendableParameter(void)

{
  return;
}

