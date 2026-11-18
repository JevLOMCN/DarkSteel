// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticClass @ 14b46c7c0

UClass * __cdecl UDS_ConditionChecker_Timeband::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ConditionChecker_Timeband.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ConditionChecker_Timeband",
               &Z_Registration_Info_UClass_UDS_ConditionChecker_Timeband.InnerSingleton,
               StaticRegisterNativesUDS_ConditionChecker_Timeband,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ConditionChecker_Timeband>,
               InternalVTableHelperCtorCaller<UDS_ConditionChecker_Timeband>,local_res8,
               UDS_ConditionChecker::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ConditionChecker_Timeband.InnerSingleton;
}

// UDS_ConditionChecker_Timeband @ 14b470f90

UDS_ConditionChecker_Timeband * __thiscall
UDS_ConditionChecker_Timeband::UDS_ConditionChecker_Timeband
          (UDS_ConditionChecker_Timeband *this,FVTableHelper *param_1)

{
  UDS_ConditionChecker::UDS_ConditionChecker((UDS_ConditionChecker *)this,param_1);
  this->TimebandType = 0;
  this->_padding_ = (longlong)&___7UDS_ConditionChecker_Timeband__6B_;
  return this;
}

// UDS_ConditionChecker_Timeband @ 14b470fc0

UDS_ConditionChecker_Timeband * __thiscall
UDS_ConditionChecker_Timeband::UDS_ConditionChecker_Timeband
          (UDS_ConditionChecker_Timeband *this,FObjectInitializer *param_1)

{
  UDS_ConditionChecker::UDS_ConditionChecker((UDS_ConditionChecker *)this,param_1);
  this->TimebandType = 0;
  this->_padding_ = (longlong)&___7UDS_ConditionChecker_Timeband__6B_;
  return this;
}

// ~UDS_ConditionChecker_Timeband @ 14b472900

void __thiscall
UDS_ConditionChecker_Timeband::~UDS_ConditionChecker_Timeband(UDS_ConditionChecker_Timeband *this)

{
  this->_padding_ = (longlong)&___7UDS_ConditionChecker__6B_;
  UDS_ConditionChecker::UnInit((UDS_ConditionChecker *)this);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)this->_padding_,
             (int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b475f50

UClass * __cdecl UDS_ConditionChecker_Timeband::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ConditionChecker_Timeband.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ConditionChecker_Timeband",
               &Z_Registration_Info_UClass_UDS_ConditionChecker_Timeband.InnerSingleton,
               StaticRegisterNativesUDS_ConditionChecker_Timeband,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ConditionChecker_Timeband>,
               InternalVTableHelperCtorCaller<UDS_ConditionChecker_Timeband>,local_res8,
               UDS_ConditionChecker::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ConditionChecker_Timeband.InnerSingleton;
}

// StaticRegisterNativesUDS_ConditionChecker_Timeband @ 14b476e40

void __cdecl UDS_ConditionChecker_Timeband::StaticRegisterNativesUDS_ConditionChecker_Timeband(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_ConditionChecker_Timeband_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnChangedTimebandEventCallback @ 14b479220

void __cdecl
UDS_ConditionChecker_Timeband::execOnChangedTimebandEventCallback
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int *piVar2;
  int local_res10 [2];
  
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  piVar2 = local_res10;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar2 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChangedTimebandEventCallback((UDS_ConditionChecker_Timeband *)param_1,piVar2);
  return;
}

// BindTimebandEvent @ 14c06da90

void __thiscall
UDS_ConditionChecker_Timeband::BindTimebandEvent(UDS_ConditionChecker_Timeband *this)

{
  FWeakObjectPtr local_res10;
  UDS_EnvironmentManager *local_res18 [2];
  
  local_res18[0] = UDS_EnvironmentManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18[0] != (UDS_EnvironmentManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0]);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18[0] != (UDS_EnvironmentManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0]);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
  FWeakObjectPtr::IsValid(&local_res10);
  return;
}

// OnChangedTimebandEventCallback @ 14c092ad0

void __thiscall
UDS_ConditionChecker_Timeband::OnChangedTimebandEventCallback
          (UDS_ConditionChecker_Timeband *this,int *param_1)

{
  bool bVar1;
  
  this->TimebandType = *param_1;
  bVar1 = (bool)(**(code **)(this->_padding_ + 0x2c0))();
  UDS_ConditionChecker::SetConditionValue((UDS_ConditionChecker *)this,bVar1);
  return;
}

// OnCheckCondition @ 14c092d60

bool __thiscall UDS_ConditionChecker_Timeband::OnCheckCondition(UDS_ConditionChecker_Timeband *this)

{
  return (int)this->_padding_ == this->TimebandType;
}

// OnInit @ 14c096070

void __thiscall UDS_ConditionChecker_Timeband::OnInit(UDS_ConditionChecker_Timeband *this)

{
  FWeakObjectPtr local_res10;
  UDS_EnvironmentManager *local_res18 [2];
  
  local_res18[0] = UDS_EnvironmentManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18[0] != (UDS_EnvironmentManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0]);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18[0] != (UDS_EnvironmentManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0]);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
  FWeakObjectPtr::IsValid(&local_res10);
  return;
}

// OnUnInit @ 14c09c730

void __thiscall UDS_ConditionChecker_Timeband::OnUnInit(UDS_ConditionChecker_Timeband *this)

{
  FWeakObjectPtr local_res10;
  UDS_EnvironmentManager *local_res18 [2];
  
  local_res18[0] = UDS_EnvironmentManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18[0] != (UDS_EnvironmentManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0]);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18[0] != (UDS_EnvironmentManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0]);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
  FWeakObjectPtr::IsValid(&local_res10);
  return;
}

// UnBindTimebandEvent @ 14c0ad9f0

void __thiscall
UDS_ConditionChecker_Timeband::UnBindTimebandEvent(UDS_ConditionChecker_Timeband *this)

{
  FWeakObjectPtr local_res10;
  UDS_EnvironmentManager *local_res18 [2];
  
  local_res18[0] = UDS_EnvironmentManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18[0] != (UDS_EnvironmentManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0]);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18[0] != (UDS_EnvironmentManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0]);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
  FWeakObjectPtr::IsValid(&local_res10);
  return;
}

