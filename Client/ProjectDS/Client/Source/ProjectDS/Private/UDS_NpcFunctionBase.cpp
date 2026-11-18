// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// StaticClass @ 14b53c2c0

UClass * __cdecl UDS_NpcFunctionBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NpcFunctionBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NpcFunctionBase",
               &Z_Registration_Info_UClass_UDS_NpcFunctionBase.InnerSingleton,
               StaticRegisterNativesUDS_NpcFunctionBase,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_NpcFunctionBase>,
               InternalVTableHelperCtorCaller<UDS_NpcFunctionBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NpcFunctionBase.InnerSingleton;
}

// UDS_NpcFunctionBase @ 14b5405e0

UDS_NpcFunctionBase * __thiscall
UDS_NpcFunctionBase::UDS_NpcFunctionBase(UDS_NpcFunctionBase *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_NpcFunctionBase__6B_;
  (this->NPCDataSet).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->NPCDataSet).WeakPtr,(FObjectPtr)&local_res8);
  this->InteractionID = 0;
  this->FunctionType = None;
  return this;
}

// UDS_NpcFunctionBase @ 14b540630

UDS_NpcFunctionBase * __thiscall
UDS_NpcFunctionBase::UDS_NpcFunctionBase(UDS_NpcFunctionBase *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_NpcFunctionBase__6B_;
  (this->NPCDataSet).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->NPCDataSet).WeakPtr,(FObjectPtr)&local_res8);
  this->InteractionID = 0;
  this->FunctionType = None;
  return this;
}

// ~UDS_NpcFunctionBase @ 14b5417f0

void __thiscall UDS_NpcFunctionBase::~UDS_NpcFunctionBase(UDS_NpcFunctionBase *this)

{
  this->_padding_ = (longlong)&___7UDS_NpcFunctionBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b542f40

UClass * __cdecl UDS_NpcFunctionBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NpcFunctionBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NpcFunctionBase",
               &Z_Registration_Info_UClass_UDS_NpcFunctionBase.InnerSingleton,
               StaticRegisterNativesUDS_NpcFunctionBase,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_NpcFunctionBase>,
               InternalVTableHelperCtorCaller<UDS_NpcFunctionBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NpcFunctionBase.InnerSingleton;
}

// OpenUI @ 14b543a00

void __thiscall UDS_NpcFunctionBase::OpenUI(UDS_NpcFunctionBase *this)

{
  return;
}

// SetHistoryData @ 14b543a10

void __thiscall
UDS_NpcFunctionBase::SetHistoryData(UDS_NpcFunctionBase *this,FDS_HistoryData *param_1)

{
  return;
}

// StaticRegisterNativesUDS_NpcFunctionBase @ 14b543af0

void __cdecl UDS_NpcFunctionBase::StaticRegisterNativesUDS_NpcFunctionBase(void)

{
  return;
}

// CreateNpcFunction<UDS_NpcFunctionItemDismantle> @ 14becc9f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_NpcFunctionItemDismantle * __cdecl
UDS_NpcFunctionBase::CreateNpcFunction<UDS_NpcFunctionItemDismantle>(UObject *param_1)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_NpcFunctionItemDismantle *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar3 = Z_Construct_UClass_UDS_NpcFunctionItemDismantle_NoRegister();
  FVar1 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UDS_NpcFunctionItemDismantle_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  FVar2 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_a8.Number = FVar1.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar2;
  local_98._8_8_ = param_1;
  pUVar5 = (UDS_NpcFunctionItemDismantle *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  return pUVar5;
}

// CreateNpcFunction<UDS_NpcFunctionItemRepair> @ 14beccaf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_NpcFunctionItemRepair * __cdecl
UDS_NpcFunctionBase::CreateNpcFunction<UDS_NpcFunctionItemRepair>(UObject *param_1)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_NpcFunctionItemRepair *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  pUVar3 = Z_Construct_UClass_UDS_NpcFunctionItemRepair_NoRegister();
  FVar1 = local_a8;
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar4 = Z_Construct_UClass_UDS_NpcFunctionItemRepair_NoRegister();
  CheckIsClassChildOf_Internal(pUVar4,pUVar3);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  FVar2 = local_a8;
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_a8.Number = FVar1.Number;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_a8 = FVar2;
  local_98._8_8_ = param_1;
  pUVar5 = (UDS_NpcFunctionItemRepair *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  return pUVar5;
}

// CloseWindow @ 14beda2a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_NpcFunctionBase::CloseWindow(UDS_NpcFunctionBase *this,EDS_WindowWidget param_1)

{
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  float local_148;
  uint local_144 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_NpcFunctionBase::CloseWindow",0x20,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x33,L"windowMng is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    local_148 = 0.0;
    local_144[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,param_1,local_144,&local_148);
  }
  return;
}

// OnBackEvent @ 14bef71e0

void __thiscall UDS_NpcFunctionBase::OnBackEvent(UDS_NpcFunctionBase *this)

{
  UDS_HistoryManager *this_00;
  
  this_00 = UDS_HistoryManager::GetInst();
  if (this_00 != (UDS_HistoryManager *)0x0) {
    UDS_HistoryManager::OnBack(this_00);
    return;
  }
  return;
}

// OnCloseFunction @ 14befb970

void __thiscall UDS_NpcFunctionBase::OnCloseFunction(UDS_NpcFunctionBase *this)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->NPCDataSet).WeakPtr);
  if (bVar1) {
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = 0;
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    (this->NPCDataSet).WeakPtr = local_res8;
  }
  this->FunctionType = None;
  this->InteractionID = 0;
  return;
}

// OnExit @ 14befdbd0

void __thiscall UDS_NpcFunctionBase::OnExit(UDS_NpcFunctionBase *this)

{
  (**(code **)(this->_padding_ + 0x2c0))();
  CloseWindow(this,NpcInteraction);
  return;
}

// OnOpenFunction @ 14beff260

void __thiscall
UDS_NpcFunctionBase::OnOpenFunction
          (UDS_NpcFunctionBase *this,TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> param_1,
          int param_2,EDS_InteractionFunctionType param_3)

{
  bool bVar1;
  FWeakObjectPtr local_res10;
  
  local_res10 = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  this->InteractionID = param_2;
  this->FunctionType = param_3;
  if (bVar1) {
    (this->NPCDataSet).WeakPtr = local_res10;
  }
  return;
}

