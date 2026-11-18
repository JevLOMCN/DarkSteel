// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b51c4f0

UClass * __cdecl UDS_ModelEventWaitCompleteListSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ModelEventWaitCompleteListSlot.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ModelEventWaitCompleteListSlot",
               &Z_Registration_Info_UClass_UDS_ModelEventWaitCompleteListSlot.InnerSingleton,
               StaticRegisterNativesUDS_ModelEventWaitCompleteListSlot,0xd8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ModelEventWaitCompleteListSlot>,
               InternalVTableHelperCtorCaller<UDS_ModelEventWaitCompleteListSlot>,local_res8,
               UDS_ModelEventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ModelEventWaitCompleteListSlot.InnerSingleton;
}

// UDS_ModelEventWaitCompleteListSlot @ 14b522bf0

UDS_ModelEventWaitCompleteListSlot * __thiscall
UDS_ModelEventWaitCompleteListSlot::UDS_ModelEventWaitCompleteListSlot
          (UDS_ModelEventWaitCompleteListSlot *this,FVTableHelper *param_1)

{
  UDS_ModelEventBase::UDS_ModelEventBase((UDS_ModelEventBase *)this,param_1);
  this->Event = None;
  this->_padding_ = (longlong)&___7UDS_ModelEventWaitCompleteListSlot__6B_;
  return this;
}

// UDS_ModelEventWaitCompleteListSlot @ 14b522c30

UDS_ModelEventWaitCompleteListSlot * __thiscall
UDS_ModelEventWaitCompleteListSlot::UDS_ModelEventWaitCompleteListSlot
          (UDS_ModelEventWaitCompleteListSlot *this,FObjectInitializer *param_1)

{
  UDS_ModelEventBase::UDS_ModelEventBase((UDS_ModelEventBase *)this,param_1);
  this->Event = None;
  this->_padding_ = (longlong)&___7UDS_ModelEventWaitCompleteListSlot__6B_;
  return this;
}

// ~UDS_ModelEventWaitCompleteListSlot @ 14b523840

void __thiscall
UDS_ModelEventWaitCompleteListSlot::~UDS_ModelEventWaitCompleteListSlot
          (UDS_ModelEventWaitCompleteListSlot *this)

{
  this->_padding_ = (longlong)&___7UDS_ModelEventWaitCompleteListSlot__6B_;
  UDS_ModelEventBase::~UDS_ModelEventBase((UDS_ModelEventBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b526e20

UClass * __cdecl UDS_ModelEventWaitCompleteListSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ModelEventWaitCompleteListSlot.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ModelEventWaitCompleteListSlot",
               &Z_Registration_Info_UClass_UDS_ModelEventWaitCompleteListSlot.InnerSingleton,
               StaticRegisterNativesUDS_ModelEventWaitCompleteListSlot,0xd8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ModelEventWaitCompleteListSlot>,
               InternalVTableHelperCtorCaller<UDS_ModelEventWaitCompleteListSlot>,local_res8,
               UDS_ModelEventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ModelEventWaitCompleteListSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_ModelEventWaitCompleteListSlot @ 14b5276d0

void __cdecl
UDS_ModelEventWaitCompleteListSlot::StaticRegisterNativesUDS_ModelEventWaitCompleteListSlot(void)

{
  return;
}

