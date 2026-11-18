// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b51a470

UClass * __cdecl UDS_ModelEventItemRepair::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ModelEventItemRepair.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ModelEventItemRepair",
               &Z_Registration_Info_UClass_UDS_ModelEventItemRepair.InnerSingleton,
               StaticRegisterNativesUDS_ModelEventItemRepair,0xe8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ModelEventItemRepair>,
               InternalVTableHelperCtorCaller<UDS_ModelEventItemRepair>,local_res8,
               UDS_ModelEventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ModelEventItemRepair.InnerSingleton;
}

// UDS_ModelEventItemRepair @ 14b522b70

UDS_ModelEventItemRepair * __thiscall
UDS_ModelEventItemRepair::UDS_ModelEventItemRepair
          (UDS_ModelEventItemRepair *this,FVTableHelper *param_1)

{
  UDS_ModelEventBase::UDS_ModelEventBase((UDS_ModelEventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ModelEventItemRepair__6B_;
  this->Event = None;
  this->ItemUID = 0;
  this->CurrentItemRepairType = None;
  this->BulkRepairSelectedItemGrade = None;
  return this;
}

// UDS_ModelEventItemRepair @ 14b522bb0

UDS_ModelEventItemRepair * __thiscall
UDS_ModelEventItemRepair::UDS_ModelEventItemRepair
          (UDS_ModelEventItemRepair *this,FObjectInitializer *param_1)

{
  UDS_ModelEventBase::UDS_ModelEventBase((UDS_ModelEventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ModelEventItemRepair__6B_;
  this->Event = None;
  this->ItemUID = 0;
  this->CurrentItemRepairType = None;
  this->BulkRepairSelectedItemGrade = None;
  return this;
}

// ~UDS_ModelEventItemRepair @ 14b523820

void __thiscall UDS_ModelEventItemRepair::~UDS_ModelEventItemRepair(UDS_ModelEventItemRepair *this)

{
  this->_padding_ = (longlong)&___7UDS_ModelEventItemRepair__6B_;
  UDS_ModelEventBase::~UDS_ModelEventBase((UDS_ModelEventBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b526d60

UClass * __cdecl UDS_ModelEventItemRepair::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ModelEventItemRepair.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ModelEventItemRepair",
               &Z_Registration_Info_UClass_UDS_ModelEventItemRepair.InnerSingleton,
               StaticRegisterNativesUDS_ModelEventItemRepair,0xe8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ModelEventItemRepair>,
               InternalVTableHelperCtorCaller<UDS_ModelEventItemRepair>,local_res8,
               UDS_ModelEventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ModelEventItemRepair.InnerSingleton;
}

// StaticRegisterNativesUDS_ModelEventItemRepair @ 14b5276c0

void __cdecl UDS_ModelEventItemRepair::StaticRegisterNativesUDS_ModelEventItemRepair(void)

{
  return;
}

