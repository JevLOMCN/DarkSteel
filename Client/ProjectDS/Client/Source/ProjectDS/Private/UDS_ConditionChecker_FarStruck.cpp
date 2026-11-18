// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b46c320

UClass * __cdecl UDS_ConditionChecker_FarStruck::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ConditionChecker_FarStruck.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ConditionChecker_FarStruck",
               &Z_Registration_Info_UClass_UDS_ConditionChecker_FarStruck.InnerSingleton,
               StaticRegisterNativesUDS_ConditionChecker_FarStruck,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ConditionChecker_FarStruck>,
               InternalVTableHelperCtorCaller<UDS_ConditionChecker_FarStruck>,local_res8,
               UDS_ConditionChecker_Struck::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ConditionChecker_FarStruck.InnerSingleton;
}

// UDS_ConditionChecker_FarStruck @ 14b470930

UDS_ConditionChecker_FarStruck * __thiscall
UDS_ConditionChecker_FarStruck::UDS_ConditionChecker_FarStruck
          (UDS_ConditionChecker_FarStruck *this,FVTableHelper *param_1)

{
  UDS_ConditionChecker::UDS_ConditionChecker((UDS_ConditionChecker *)this,param_1);
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined ***)this = &___7UDS_ConditionChecker_FarStruck__6B_;
  return this;
}

// UDS_ConditionChecker_FarStruck @ 14b470960

UDS_ConditionChecker_FarStruck * __thiscall
UDS_ConditionChecker_FarStruck::UDS_ConditionChecker_FarStruck
          (UDS_ConditionChecker_FarStruck *this,FObjectInitializer *param_1)

{
  UDS_ConditionChecker::UDS_ConditionChecker((UDS_ConditionChecker *)this,param_1);
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined ***)this = &___7UDS_ConditionChecker_FarStruck__6B_;
  return this;
}

// ~UDS_ConditionChecker_FarStruck @ 14b472360

void __thiscall
UDS_ConditionChecker_FarStruck::~UDS_ConditionChecker_FarStruck
          (UDS_ConditionChecker_FarStruck *this)

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

// CheckStruckType @ 14b4747d0

bool __thiscall
UDS_ConditionChecker_FarStruck::CheckStruckType(UDS_ConditionChecker_FarStruck *this)

{
  return false;
}

// GetPrivateStaticClass @ 14b475410

UClass * __cdecl UDS_ConditionChecker_FarStruck::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ConditionChecker_FarStruck.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ConditionChecker_FarStruck",
               &Z_Registration_Info_UClass_UDS_ConditionChecker_FarStruck.InnerSingleton,
               StaticRegisterNativesUDS_ConditionChecker_FarStruck,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ConditionChecker_FarStruck>,
               InternalVTableHelperCtorCaller<UDS_ConditionChecker_FarStruck>,local_res8,
               UDS_ConditionChecker_Struck::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ConditionChecker_FarStruck.InnerSingleton;
}

// StaticRegisterNativesUDS_ConditionChecker_FarStruck @ 14b476cc0

void __cdecl
UDS_ConditionChecker_FarStruck::StaticRegisterNativesUDS_ConditionChecker_FarStruck(void)

{
  return;
}

// OnInit @ 14c095c40

void __thiscall UDS_ConditionChecker_FarStruck::OnInit(UDS_ConditionChecker_FarStruck *this)

{
  UDS_ConditionChecker_Struck::OnInit((UDS_ConditionChecker_Struck *)this);
  *(undefined4 *)&this->field_0x3c = 4;
  return;
}

