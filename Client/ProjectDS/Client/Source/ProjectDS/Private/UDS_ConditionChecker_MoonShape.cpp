// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticClass @ 14b46c880

UClass * __cdecl UDS_ConditionChecker_MoonShape::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ConditionChecker_MoonShape.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ConditionChecker_MoonShape",
               &Z_Registration_Info_UClass_UDS_ConditionChecker_MoonShape.InnerSingleton,
               StaticRegisterNativesUDS_ConditionChecker_MoonShape,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ConditionChecker_MoonShape>,
               InternalVTableHelperCtorCaller<UDS_ConditionChecker_MoonShape>,local_res8,
               UDS_ConditionChecker::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ConditionChecker_MoonShape.InnerSingleton;
}

// UDS_ConditionChecker_MoonShape @ 14b470a90

UDS_ConditionChecker_MoonShape * __thiscall
UDS_ConditionChecker_MoonShape::UDS_ConditionChecker_MoonShape
          (UDS_ConditionChecker_MoonShape *this,FVTableHelper *param_1)

{
  UDS_ConditionChecker::UDS_ConditionChecker((UDS_ConditionChecker *)this,param_1);
  this->MoonShapeType = 0;
  this->_padding_ = (longlong)&___7UDS_ConditionChecker_MoonShape__6B_;
  return this;
}

// UDS_ConditionChecker_MoonShape @ 14b470ac0

UDS_ConditionChecker_MoonShape * __thiscall
UDS_ConditionChecker_MoonShape::UDS_ConditionChecker_MoonShape
          (UDS_ConditionChecker_MoonShape *this,FObjectInitializer *param_1)

{
  UDS_ConditionChecker::UDS_ConditionChecker((UDS_ConditionChecker *)this,param_1);
  this->MoonShapeType = 0;
  this->_padding_ = (longlong)&___7UDS_ConditionChecker_MoonShape__6B_;
  return this;
}

// ~UDS_ConditionChecker_MoonShape @ 14b472480

void __thiscall
UDS_ConditionChecker_MoonShape::~UDS_ConditionChecker_MoonShape
          (UDS_ConditionChecker_MoonShape *this)

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

// GetPrivateStaticClass @ 14b475650

UClass * __cdecl UDS_ConditionChecker_MoonShape::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ConditionChecker_MoonShape.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ConditionChecker_MoonShape",
               &Z_Registration_Info_UClass_UDS_ConditionChecker_MoonShape.InnerSingleton,
               StaticRegisterNativesUDS_ConditionChecker_MoonShape,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ConditionChecker_MoonShape>,
               InternalVTableHelperCtorCaller<UDS_ConditionChecker_MoonShape>,local_res8,
               UDS_ConditionChecker::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ConditionChecker_MoonShape.InnerSingleton;
}

// StaticRegisterNativesUDS_ConditionChecker_MoonShape @ 14b476cf0

void __cdecl
UDS_ConditionChecker_MoonShape::StaticRegisterNativesUDS_ConditionChecker_MoonShape(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_ConditionChecker_MoonShape_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnChangedMoonShapeEventCallback @ 14b4790f0

void __cdecl
UDS_ConditionChecker_MoonShape::execOnChangedMoonShapeEventCallback
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
  OnChangedMoonShapeEventCallback((UDS_ConditionChecker_MoonShape *)param_1,piVar2);
  return;
}

// BindMoonShapeEvent @ 14c06d3d0

void __thiscall
UDS_ConditionChecker_MoonShape::BindMoonShapeEvent(UDS_ConditionChecker_MoonShape *this)

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

// OnChangedMoonShapeEventCallback @ 14c092820

void __thiscall
UDS_ConditionChecker_MoonShape::OnChangedMoonShapeEventCallback
          (UDS_ConditionChecker_MoonShape *this,int *param_1)

{
  bool bVar1;
  
  this->MoonShapeType = *param_1;
  bVar1 = (bool)(**(code **)(this->_padding_ + 0x2c0))();
  UDS_ConditionChecker::SetConditionValue((UDS_ConditionChecker *)this,bVar1);
  return;
}

// OnCheckCondition @ 14c092c40

bool __thiscall
UDS_ConditionChecker_MoonShape::OnCheckCondition(UDS_ConditionChecker_MoonShape *this)

{
  return false;
}

// OnInit @ 14c095c90

void __thiscall UDS_ConditionChecker_MoonShape::OnInit(UDS_ConditionChecker_MoonShape *this)

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

// OnUnInit @ 14c09c390

void __thiscall UDS_ConditionChecker_MoonShape::OnUnInit(UDS_ConditionChecker_MoonShape *this)

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

// UnBindMoonShapeEvent @ 14c0ad880

void __thiscall
UDS_ConditionChecker_MoonShape::UnBindMoonShapeEvent(UDS_ConditionChecker_MoonShape *this)

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

