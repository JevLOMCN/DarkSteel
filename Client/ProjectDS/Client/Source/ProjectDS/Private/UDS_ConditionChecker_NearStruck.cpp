// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b46c1d0

UClass * __cdecl UDS_ConditionChecker_NearStruck::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ConditionChecker_NearStruck.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ConditionChecker_NearStruck",
               &Z_Registration_Info_UClass_UDS_ConditionChecker_NearStruck.InnerSingleton,
               StaticRegisterNativesUDS_ConditionChecker_NearStruck,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ConditionChecker_NearStruck>,
               InternalVTableHelperCtorCaller<UDS_ConditionChecker_NearStruck>,local_res8,
               UDS_ConditionChecker_Struck::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ConditionChecker_NearStruck.InnerSingleton;
}

// UDS_ConditionChecker_NearStruck @ 14b470af0

UDS_ConditionChecker_NearStruck * __thiscall
UDS_ConditionChecker_NearStruck::UDS_ConditionChecker_NearStruck
          (UDS_ConditionChecker_NearStruck *this,FVTableHelper *param_1)

{
  UDS_ConditionChecker::UDS_ConditionChecker((UDS_ConditionChecker *)this,param_1);
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined ***)this = &___7UDS_ConditionChecker_NearStruck__6B_;
  return this;
}

// UDS_ConditionChecker_NearStruck @ 14b470b20

UDS_ConditionChecker_NearStruck * __thiscall
UDS_ConditionChecker_NearStruck::UDS_ConditionChecker_NearStruck
          (UDS_ConditionChecker_NearStruck *this,FObjectInitializer *param_1)

{
  UDS_ConditionChecker::UDS_ConditionChecker((UDS_ConditionChecker *)this,param_1);
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined ***)this = &___7UDS_ConditionChecker_NearStruck__6B_;
  return this;
}

// ~UDS_ConditionChecker_NearStruck @ 14b4724e0

void __thiscall
UDS_ConditionChecker_NearStruck::~UDS_ConditionChecker_NearStruck
          (UDS_ConditionChecker_NearStruck *this)

{
  *(undefined ***)this = &___7UDS_ConditionChecker__6B_;
  UDS_ConditionChecker::UnInit((UDS_ConditionChecker *)this);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)&this->field_0x50,
             *(int *)&this->field_0x58);
  if (*(void **)&this->field_0x50 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x50);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->field_0x48);
  UObject::~UObject((UObject *)this);
  return;
}

// CheckStruckType @ 14b4747e0

bool __thiscall
UDS_ConditionChecker_NearStruck::CheckStruckType(UDS_ConditionChecker_NearStruck *this)

{
  return true;
}

// GetPrivateStaticClass @ 14b475710

UClass * __cdecl UDS_ConditionChecker_NearStruck::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ConditionChecker_NearStruck.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ConditionChecker_NearStruck",
               &Z_Registration_Info_UClass_UDS_ConditionChecker_NearStruck.InnerSingleton,
               StaticRegisterNativesUDS_ConditionChecker_NearStruck,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ConditionChecker_NearStruck>,
               InternalVTableHelperCtorCaller<UDS_ConditionChecker_NearStruck>,local_res8,
               UDS_ConditionChecker_Struck::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ConditionChecker_NearStruck.InnerSingleton;
}

// StaticRegisterNativesUDS_ConditionChecker_NearStruck @ 14b476d30

void __cdecl
UDS_ConditionChecker_NearStruck::StaticRegisterNativesUDS_ConditionChecker_NearStruck(void)

{
  return;
}

// OnInit @ 14c095d00

void __thiscall UDS_ConditionChecker_NearStruck::OnInit(UDS_ConditionChecker_NearStruck *this)

{
  UDS_ConditionChecker_Struck::OnInit((UDS_ConditionChecker_Struck *)this);
  *(undefined4 *)&this->field_0x3c = 3;
  return;
}

