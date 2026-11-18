// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b50b790

UClass * __cdecl UDS_M_EventFilterSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_EventFilterSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_EventFilterSlot",
               &Z_Registration_Info_UClass_UDS_M_EventFilterSlot.InnerSingleton,
               StaticRegisterNativesUDS_M_EventFilterSlot,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_EventFilterSlot>,
               InternalVTableHelperCtorCaller<UDS_M_EventFilterSlot>,local_res8,
               UDS_ModelEventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_EventFilterSlot.InnerSingleton;
}

// UDS_M_EventFilterSlot @ 14b510c20

UDS_M_EventFilterSlot * __thiscall
UDS_M_EventFilterSlot::UDS_M_EventFilterSlot(UDS_M_EventFilterSlot *this,FVTableHelper *param_1)

{
  UDS_ModelEventBase::UDS_ModelEventBase((UDS_ModelEventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_M_EventFilterSlot__6B_;
  return this;
}

// UDS_M_EventFilterSlot @ 14b510c50

UDS_M_EventFilterSlot * __thiscall
UDS_M_EventFilterSlot::UDS_M_EventFilterSlot
          (UDS_M_EventFilterSlot *this,FObjectInitializer *param_1)

{
  UDS_ModelEventBase::UDS_ModelEventBase((UDS_ModelEventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_M_EventFilterSlot__6B_;
  return this;
}

// ~UDS_M_EventFilterSlot @ 14b512d50

void __thiscall UDS_M_EventFilterSlot::~UDS_M_EventFilterSlot(UDS_M_EventFilterSlot *this)

{
  this->_padding_ = (longlong)&___7UDS_M_EventFilterSlot__6B_;
  UDS_ModelEventBase::~UDS_ModelEventBase((UDS_ModelEventBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b515840

UClass * __cdecl UDS_M_EventFilterSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_EventFilterSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_EventFilterSlot",
               &Z_Registration_Info_UClass_UDS_M_EventFilterSlot.InnerSingleton,
               StaticRegisterNativesUDS_M_EventFilterSlot,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_EventFilterSlot>,
               InternalVTableHelperCtorCaller<UDS_M_EventFilterSlot>,local_res8,
               UDS_ModelEventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_EventFilterSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_M_EventFilterSlot @ 14b516c40

void __cdecl UDS_M_EventFilterSlot::StaticRegisterNativesUDS_M_EventFilterSlot(void)

{
  return;
}

