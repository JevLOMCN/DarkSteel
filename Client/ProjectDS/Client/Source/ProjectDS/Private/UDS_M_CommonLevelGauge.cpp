// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b50bcd0

UClass * __cdecl UDS_M_CommonLevelGauge::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_CommonLevelGauge.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_CommonLevelGauge",
               &Z_Registration_Info_UClass_UDS_M_CommonLevelGauge.InnerSingleton,
               StaticRegisterNativesUDS_M_CommonLevelGauge,0x1a8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_CommonLevelGauge>,
               InternalVTableHelperCtorCaller<UDS_M_CommonLevelGauge>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_CommonLevelGauge.InnerSingleton;
}

// UDS_M_CommonLevelGauge @ 14b50ff20

UDS_M_CommonLevelGauge * __thiscall
UDS_M_CommonLevelGauge::UDS_M_CommonLevelGauge(UDS_M_CommonLevelGauge *this,FVTableHelper *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  *(undefined ***)this = &___7UDS_M_CommonLevelGauge__6B_;
  return this;
}

// UDS_M_CommonLevelGauge @ 14b50ff50

UDS_M_CommonLevelGauge * __thiscall
UDS_M_CommonLevelGauge::UDS_M_CommonLevelGauge
          (UDS_M_CommonLevelGauge *this,FObjectInitializer *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  *(undefined ***)this = &___7UDS_M_CommonLevelGauge__6B_;
  return this;
}

// ~UDS_M_CommonLevelGauge @ 14b512880

void __thiscall UDS_M_CommonLevelGauge::~UDS_M_CommonLevelGauge(UDS_M_CommonLevelGauge *this)

{
  *(undefined ***)this = &___7UDS_M_CommonLevelGauge__6B_;
  UDS_ModelBase::~UDS_ModelBase((UDS_ModelBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b514f40

UClass * __cdecl UDS_M_CommonLevelGauge::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_CommonLevelGauge.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_CommonLevelGauge",
               &Z_Registration_Info_UClass_UDS_M_CommonLevelGauge.InnerSingleton,
               StaticRegisterNativesUDS_M_CommonLevelGauge,0x1a8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_CommonLevelGauge>,
               InternalVTableHelperCtorCaller<UDS_M_CommonLevelGauge>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_CommonLevelGauge.InnerSingleton;
}

// GetViewModelContext @ 14b516b00

TSharedPtr<FDS_ViewModelContext_ModelBase,1> * __thiscall
UDS_M_CommonLevelGauge::GetViewModelContext
          (UDS_M_CommonLevelGauge *this,
          TSharedPtr<FDS_ViewModelContext_ModelBase,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (FDS_ViewModelContext_ModelBase *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUDS_M_CommonLevelGauge @ 14b516b80

void __cdecl UDS_M_CommonLevelGauge::StaticRegisterNativesUDS_M_CommonLevelGauge(void)

{
  return;
}

