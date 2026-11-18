// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 6

// StaticClass @ 14d578090

UClass * __cdecl UCameraRigProxyTable::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraRigProxyTable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraRigProxyTable",
               &Z_Registration_Info_UClass_UCameraRigProxyTable.InnerSingleton,
               StaticRegisterNativesUCameraRigProxyTable,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCameraRigProxyTable>,
               InternalVTableHelperCtorCaller<UCameraRigProxyTable>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraRigProxyTable.InnerSingleton;
}

// UCameraRigProxyTable @ 14d58f750

UCameraRigProxyTable * __thiscall
UCameraRigProxyTable::UCameraRigProxyTable(UCameraRigProxyTable *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UCameraRigProxyTable__6B_;
  (this->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Entries).ArrayNum = 0;
  (this->Entries).ArrayMax = 0;
  return this;
}

// UCameraRigProxyTable @ 14d58f790

UCameraRigProxyTable * __thiscall
UCameraRigProxyTable::UCameraRigProxyTable(UCameraRigProxyTable *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UCameraRigProxyTable__6B_;
  (this->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Entries).ArrayNum = 0;
  (this->Entries).ArrayMax = 0;
  return this;
}

// ~UCameraRigProxyTable @ 14d591c70

void __thiscall UCameraRigProxyTable::~UCameraRigProxyTable(UCameraRigProxyTable *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UCameraRigProxyTable__6B_;
  pFVar1 = (this->Entries).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14d5a98f0

UClass * __cdecl UCameraRigProxyTable::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraRigProxyTable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraRigProxyTable",
               &Z_Registration_Info_UClass_UCameraRigProxyTable.InnerSingleton,
               StaticRegisterNativesUCameraRigProxyTable,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCameraRigProxyTable>,
               InternalVTableHelperCtorCaller<UCameraRigProxyTable>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraRigProxyTable.InnerSingleton;
}

// StaticRegisterNativesUCameraRigProxyTable @ 14d5d0dd0

void __cdecl UCameraRigProxyTable::StaticRegisterNativesUCameraRigProxyTable(void)

{
  return;
}

