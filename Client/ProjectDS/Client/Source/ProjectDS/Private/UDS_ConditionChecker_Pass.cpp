// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b46cf70

UClass * __cdecl UDS_ConditionChecker_Pass::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ConditionChecker_Pass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ConditionChecker_Pass",
               &Z_Registration_Info_UClass_UDS_ConditionChecker_Pass.InnerSingleton,
               StaticRegisterNativesUDS_ConditionChecker_Pass,0x68,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ConditionChecker_Pass>,
               InternalVTableHelperCtorCaller<UDS_ConditionChecker_Pass>,local_res8,
               UDS_ConditionChecker::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ConditionChecker_Pass.InnerSingleton;
}

// UDS_ConditionChecker_Pass @ 14b470b50

UDS_ConditionChecker_Pass * __thiscall
UDS_ConditionChecker_Pass::UDS_ConditionChecker_Pass
          (UDS_ConditionChecker_Pass *this,FVTableHelper *param_1)

{
  UDS_ConditionChecker::UDS_ConditionChecker((UDS_ConditionChecker *)this,param_1);
  *(undefined ***)this = &___7UDS_ConditionChecker_Pass__6B_;
  return this;
}

// UDS_ConditionChecker_Pass @ 14b470b80

UDS_ConditionChecker_Pass * __thiscall
UDS_ConditionChecker_Pass::UDS_ConditionChecker_Pass
          (UDS_ConditionChecker_Pass *this,FObjectInitializer *param_1)

{
  UDS_ConditionChecker::UDS_ConditionChecker((UDS_ConditionChecker *)this,param_1);
  *(undefined ***)this = &___7UDS_ConditionChecker_Pass__6B_;
  return this;
}

// ~UDS_ConditionChecker_Pass @ 14b472540

void __thiscall
UDS_ConditionChecker_Pass::~UDS_ConditionChecker_Pass(UDS_ConditionChecker_Pass *this)

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

// GetPrivateStaticClass @ 14b4757d0

UClass * __cdecl UDS_ConditionChecker_Pass::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ConditionChecker_Pass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ConditionChecker_Pass",
               &Z_Registration_Info_UClass_UDS_ConditionChecker_Pass.InnerSingleton,
               StaticRegisterNativesUDS_ConditionChecker_Pass,0x68,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ConditionChecker_Pass>,
               InternalVTableHelperCtorCaller<UDS_ConditionChecker_Pass>,local_res8,
               UDS_ConditionChecker::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ConditionChecker_Pass.InnerSingleton;
}

// OnCheckCondition @ 14b476870

bool __thiscall UDS_ConditionChecker_Pass::OnCheckCondition(UDS_ConditionChecker_Pass *this)

{
  return true;
}

// StaticRegisterNativesUDS_ConditionChecker_Pass @ 14b476d40

void __cdecl UDS_ConditionChecker_Pass::StaticRegisterNativesUDS_ConditionChecker_Pass(void)

{
  return;
}

// OnInit @ 14c095d30

void __thiscall UDS_ConditionChecker_Pass::OnInit(UDS_ConditionChecker_Pass *this)

{
  bool bVar1;
  
  *(undefined4 *)&this->field_0x3c = 0xe;
  bVar1 = (bool)(**(code **)(*(longlong *)this + 0x2c0))();
  UDS_ConditionChecker::SetConditionValue((UDS_ConditionChecker *)this,bVar1);
  return;
}

// OnUnInit @ 14c09c400

void __thiscall UDS_ConditionChecker_Pass::OnUnInit(UDS_ConditionChecker_Pass *this)

{
  return;
}

