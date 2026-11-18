// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 10

// StaticClass @ 14d56fce0

UClass * __cdecl UCameraObjectInterfaceParameterBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraObjectInterfaceParameterBase.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraObjectInterfaceParameterBase",
               &Z_Registration_Info_UClass_UCameraObjectInterfaceParameterBase.InnerSingleton,
               StaticRegisterNativesUCameraObjectInterfaceParameterBase,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraObjectInterfaceParameterBase>,
               InternalVTableHelperCtorCaller<UCameraObjectInterfaceParameterBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraObjectInterfaceParameterBase.InnerSingleton;
}

// UCameraObjectInterfaceParameterBase @ 14d58f3e0

UCameraObjectInterfaceParameterBase * __thiscall
UCameraObjectInterfaceParameterBase::UCameraObjectInterfaceParameterBase
          (UCameraObjectInterfaceParameterBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->InterfaceParameterName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InterfaceParameterName).Data.ArrayNum = 0;
  (this->InterfaceParameterName).Data.ArrayMax = 0;
  (this->Target).field0_0x0.DebugPtr = (UCameraNode *)0x0;
  (this->TargetPropertyName).ComparisonIndex = 0;
  (this->TargetPropertyName).Number = 0;
  (this->Guid).A = 0;
  (this->Guid).B = 0;
  (this->Guid).C = 0;
  (this->Guid).D = 0;
  return this;
}

// UCameraObjectInterfaceParameterBase @ 14d58f430

UCameraObjectInterfaceParameterBase * __thiscall
UCameraObjectInterfaceParameterBase::UCameraObjectInterfaceParameterBase
          (UCameraObjectInterfaceParameterBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  (this->InterfaceParameterName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InterfaceParameterName).Data.ArrayNum = 0;
  (this->InterfaceParameterName).Data.ArrayMax = 0;
  (this->Target).field0_0x0.DebugPtr = (UCameraNode *)0x0;
  (this->TargetPropertyName).ComparisonIndex = 0;
  (this->TargetPropertyName).Number = 0;
  (this->Guid).A = 0;
  (this->Guid).B = 0;
  (this->Guid).C = 0;
  (this->Guid).D = 0;
  return this;
}

// ~UCameraObjectInterfaceParameterBase @ 14d591ae0

void __thiscall
UCameraObjectInterfaceParameterBase::~UCameraObjectInterfaceParameterBase
          (UCameraObjectInterfaceParameterBase *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IObjectTreeGraphObject__;
  pFVar1 = (this->InterfaceParameterName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IObjectTreeGraphObject__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14d5a9550

UClass * __cdecl UCameraObjectInterfaceParameterBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraObjectInterfaceParameterBase.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraObjectInterfaceParameterBase",
               &Z_Registration_Info_UClass_UCameraObjectInterfaceParameterBase.InnerSingleton,
               StaticRegisterNativesUCameraObjectInterfaceParameterBase,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraObjectInterfaceParameterBase>,
               InternalVTableHelperCtorCaller<UCameraObjectInterfaceParameterBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraObjectInterfaceParameterBase.InnerSingleton;
}

// PostDuplicate @ 14d5c4470

void __thiscall
UCameraObjectInterfaceParameterBase::PostDuplicate
          (UCameraObjectInterfaceParameterBase *this,Type param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FGuid *pFVar4;
  FGuid local_18;
  
  (**(code **)(this->_padding_ + 0xf8))(this,param_1 == PIE);
  if (param_1 == Normal) {
    pFVar4 = FGuid::NewGuid(&local_18);
    uVar1 = pFVar4->B;
    uVar2 = pFVar4->C;
    uVar3 = pFVar4->D;
    (this->Guid).A = pFVar4->A;
    (this->Guid).B = uVar1;
    (this->Guid).C = uVar2;
    (this->Guid).D = uVar3;
  }
  return;
}

// PostInitProperties @ 14d5c45b0

void __thiscall
UCameraObjectInterfaceParameterBase::PostInitProperties(UCameraObjectInterfaceParameterBase *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FGuid *pFVar4;
  FGuid local_18;
  
  UObject::PostInitProperties((UObject *)this);
  if (((this->_padding_ & 0x80430) == 0) &&
     ((((this->Guid).D == 0 && (this->Guid).C == 0) && (this->Guid).B == 0) && (this->Guid).A == 0))
  {
    pFVar4 = FGuid::NewGuid(&local_18);
    uVar1 = pFVar4->B;
    uVar2 = pFVar4->C;
    uVar3 = pFVar4->D;
    (this->Guid).A = pFVar4->A;
    (this->Guid).B = uVar1;
    (this->Guid).C = uVar2;
    (this->Guid).D = uVar3;
  }
  return;
}

// PostLoad @ 14d5c4710

void __thiscall
UCameraObjectInterfaceParameterBase::PostLoad(UCameraObjectInterfaceParameterBase *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FGuid *pFVar4;
  FGuid local_18;
  
  if ((((this->Guid).D == 0 && (this->Guid).C == 0) && (this->Guid).B == 0) && (this->Guid).A == 0)
  {
    pFVar4 = FGuid::NewGuid(&local_18);
    uVar1 = pFVar4->B;
    uVar2 = pFVar4->C;
    uVar3 = pFVar4->D;
    (this->Guid).A = pFVar4->A;
    (this->Guid).B = uVar1;
    (this->Guid).C = uVar2;
    (this->Guid).D = uVar3;
  }
  UObject::PostLoad((UObject *)this);
  return;
}

// StaticRegisterNativesUCameraObjectInterfaceParameterBase @ 14d5d0d20

void __cdecl
UCameraObjectInterfaceParameterBase::StaticRegisterNativesUCameraObjectInterfaceParameterBase(void)

{
  return;
}

// _getUObject @ 14d5d7500

UObject * __thiscall
UCameraObjectInterfaceParameterBase::_getUObject(UCameraObjectInterfaceParameterBase *this)

{
  return (UObject *)&this[-1].InterfaceParameterName.Data.ArrayNum;
}

