// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b5091d0

UClass * __cdecl UDS_ModelEventCommonProgress::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ModelEventCommonProgress.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ModelEventCommonProgress",
               &Z_Registration_Info_UClass_UDS_ModelEventCommonProgress.InnerSingleton,
               StaticRegisterNativesUDS_ModelEventCommonProgress,0xd0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ModelEventCommonProgress>,
               InternalVTableHelperCtorCaller<UDS_ModelEventCommonProgress>,local_res8,
               UDS_ModelEventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ModelEventCommonProgress.InnerSingleton;
}

// UDS_ModelEventCommonProgress @ 14b511dc0

UDS_ModelEventCommonProgress * __thiscall
UDS_ModelEventCommonProgress::UDS_ModelEventCommonProgress
          (UDS_ModelEventCommonProgress *this,FVTableHelper *param_1)

{
  UDS_ModelEventBase::UDS_ModelEventBase((UDS_ModelEventBase *)this,param_1);
  *(undefined ***)this = &___7UDS_ModelEventCommonProgress__6B_;
  return this;
}

// UDS_ModelEventCommonProgress @ 14b511df0

UDS_ModelEventCommonProgress * __thiscall
UDS_ModelEventCommonProgress::UDS_ModelEventCommonProgress
          (UDS_ModelEventCommonProgress *this,FObjectInitializer *param_1)

{
  UDS_ModelEventBase::UDS_ModelEventBase((UDS_ModelEventBase *)this,param_1);
  *(undefined ***)this = &___7UDS_ModelEventCommonProgress__6B_;
  return this;
}

// ~UDS_ModelEventCommonProgress @ 14b513240

void __thiscall
UDS_ModelEventCommonProgress::~UDS_ModelEventCommonProgress(UDS_ModelEventCommonProgress *this)

{
  *(undefined ***)this = &___7UDS_ModelEventCommonProgress__6B_;
  UDS_ModelEventBase::~UDS_ModelEventBase((UDS_ModelEventBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b516680

UClass * __cdecl UDS_ModelEventCommonProgress::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ModelEventCommonProgress.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ModelEventCommonProgress",
               &Z_Registration_Info_UClass_UDS_ModelEventCommonProgress.InnerSingleton,
               StaticRegisterNativesUDS_ModelEventCommonProgress,0xd0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ModelEventCommonProgress>,
               InternalVTableHelperCtorCaller<UDS_ModelEventCommonProgress>,local_res8,
               UDS_ModelEventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ModelEventCommonProgress.InnerSingleton;
}

// StaticRegisterNativesUDS_ModelEventCommonProgress @ 14b516e30

void __cdecl UDS_ModelEventCommonProgress::StaticRegisterNativesUDS_ModelEventCommonProgress(void)

{
  return;
}

