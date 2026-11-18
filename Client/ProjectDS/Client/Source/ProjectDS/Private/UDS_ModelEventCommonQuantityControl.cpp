// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b509890

UClass * __cdecl UDS_ModelEventCommonQuantityControl::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ModelEventCommonQuantityControl.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ModelEventCommonQuantityControl",
               &Z_Registration_Info_UClass_UDS_ModelEventCommonQuantityControl.InnerSingleton,
               StaticRegisterNativesUDS_ModelEventCommonQuantityControl,0xd0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ModelEventCommonQuantityControl>,
               InternalVTableHelperCtorCaller<UDS_ModelEventCommonQuantityControl>,local_res8,
               UDS_ModelEventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ModelEventCommonQuantityControl.InnerSingleton;
}

// UDS_ModelEventCommonQuantityControl @ 14b511e20

UDS_ModelEventCommonQuantityControl * __thiscall
UDS_ModelEventCommonQuantityControl::UDS_ModelEventCommonQuantityControl
          (UDS_ModelEventCommonQuantityControl *this,FVTableHelper *param_1)

{
  UDS_ModelEventBase::UDS_ModelEventBase((UDS_ModelEventBase *)this,param_1);
  *(undefined ***)this = &___7UDS_ModelEventCommonQuantityControl__6B_;
  return this;
}

// UDS_ModelEventCommonQuantityControl @ 14b511e50

UDS_ModelEventCommonQuantityControl * __thiscall
UDS_ModelEventCommonQuantityControl::UDS_ModelEventCommonQuantityControl
          (UDS_ModelEventCommonQuantityControl *this,FObjectInitializer *param_1)

{
  UDS_ModelEventBase::UDS_ModelEventBase((UDS_ModelEventBase *)this,param_1);
  *(undefined ***)this = &___7UDS_ModelEventCommonQuantityControl__6B_;
  return this;
}

// ~UDS_ModelEventCommonQuantityControl @ 14b513260

void __thiscall
UDS_ModelEventCommonQuantityControl::~UDS_ModelEventCommonQuantityControl
          (UDS_ModelEventCommonQuantityControl *this)

{
  *(undefined ***)this = &___7UDS_ModelEventCommonQuantityControl__6B_;
  UDS_ModelEventBase::~UDS_ModelEventBase((UDS_ModelEventBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b516740

UClass * __cdecl UDS_ModelEventCommonQuantityControl::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ModelEventCommonQuantityControl.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ModelEventCommonQuantityControl",
               &Z_Registration_Info_UClass_UDS_ModelEventCommonQuantityControl.InnerSingleton,
               StaticRegisterNativesUDS_ModelEventCommonQuantityControl,0xd0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ModelEventCommonQuantityControl>,
               InternalVTableHelperCtorCaller<UDS_ModelEventCommonQuantityControl>,local_res8,
               UDS_ModelEventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ModelEventCommonQuantityControl.InnerSingleton;
}

// StaticRegisterNativesUDS_ModelEventCommonQuantityControl @ 14b516e40

void __cdecl
UDS_ModelEventCommonQuantityControl::StaticRegisterNativesUDS_ModelEventCommonQuantityControl(void)

{
  return;
}

