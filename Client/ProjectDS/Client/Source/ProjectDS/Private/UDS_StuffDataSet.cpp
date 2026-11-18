// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b5a7340

UClass * __cdecl UDS_StuffDataSet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_StuffDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_StuffDataSet",
               &Z_Registration_Info_UClass_UDS_StuffDataSet.InnerSingleton,
               StaticRegisterNativesUDS_StuffDataSet,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_StuffDataSet>,
               InternalVTableHelperCtorCaller<UDS_StuffDataSet>,local_res8,
               UDS_EntityDataSet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_StuffDataSet.InnerSingleton;
}

// UDS_StuffDataSet @ 14b5a92b0

UDS_StuffDataSet * __thiscall
UDS_StuffDataSet::UDS_StuffDataSet(UDS_StuffDataSet *this,FVTableHelper *param_1)

{
  UDS_EntityDataSet::UDS_EntityDataSet((UDS_EntityDataSet *)this,param_1);
  *(undefined ***)this = &___7UDS_StuffDataSet__6B_;
  return this;
}

// UDS_StuffDataSet @ 14b5a92e0

UDS_StuffDataSet * __thiscall
UDS_StuffDataSet::UDS_StuffDataSet(UDS_StuffDataSet *this,FObjectInitializer *param_1)

{
  UDS_EntityDataSet::UDS_EntityDataSet((UDS_EntityDataSet *)this,param_1);
  *(undefined ***)this = &___7UDS_StuffDataSet__6B_;
  return this;
}

// ~UDS_StuffDataSet @ 14b5a98f0

void __thiscall UDS_StuffDataSet::~UDS_StuffDataSet(UDS_StuffDataSet *this)

{
  *(undefined ***)this = &___7UDS_StuffDataSet__6B_;
  UDS_EntityDataSet::~UDS_EntityDataSet((UDS_EntityDataSet *)this);
  return;
}

// GetPrivateStaticClass @ 14b5aa9e0

UClass * __cdecl UDS_StuffDataSet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_StuffDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_StuffDataSet",
               &Z_Registration_Info_UClass_UDS_StuffDataSet.InnerSingleton,
               StaticRegisterNativesUDS_StuffDataSet,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_StuffDataSet>,
               InternalVTableHelperCtorCaller<UDS_StuffDataSet>,local_res8,
               UDS_EntityDataSet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_StuffDataSet.InnerSingleton;
}

// StaticRegisterNativesUDS_StuffDataSet @ 14b5aaff0

void __cdecl UDS_StuffDataSet::StaticRegisterNativesUDS_StuffDataSet(void)

{
  return;
}

// OnAdded @ 14babd6a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_StuffDataSet::OnAdded(UDS_StuffDataSet *this)

{
  EDS_EntityType EVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  longlong *plVar5;
  undefined1 auStackY_408 [32];
  UObject *local_3c8 [2];
  undefined1 local_3b8 [128];
  undefined1 local_338 [128];
  undefined1 local_2b8 [128];
  undefined1 local_238 [128];
  undefined1 local_1b8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_408;
  EVar1 = UDS_DataSetBase::GetEntityType((UDS_DataSetBase *)this);
  if (EVar1 == StuffGather) {
    pUVar3 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar3,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar4 = Z_Construct_UClass_UDS_StuffGatherData_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1b8,pUVar4);
    local_1b8._8_8_ = pUVar3;
    local_3c8[0] = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
    if (local_1b8._64_8_ == 0) goto LAB_14babd967;
    plVar5 = (longlong *)(local_1b8 + 0x50);
    local_3b8._104_8_ = local_1b8._104_8_;
  }
  else if (EVar1 == StuffWarpDevice) {
    pUVar3 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar3,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar4 = Z_Construct_UClass_UDS_StuffWarpDeviceData_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_238,pUVar4);
    local_238._8_8_ = pUVar3;
    local_3c8[0] = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_238);
    if (local_238._64_8_ == 0) goto LAB_14babd967;
    plVar5 = (longlong *)(local_238 + 0x50);
    local_3b8._104_8_ = local_238._104_8_;
  }
  else if (EVar1 == StuffPortal) {
    pUVar3 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar3,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar4 = Z_Construct_UClass_UDS_StuffPortalData_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_2b8,pUVar4);
    local_2b8._8_8_ = pUVar3;
    local_3c8[0] = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_2b8);
    if (local_2b8._64_8_ == 0) goto LAB_14babd967;
    plVar5 = (longlong *)(local_2b8 + 0x50);
    local_3b8._104_8_ = local_2b8._104_8_;
  }
  else if (EVar1 == StuffQuestBoard) {
    pUVar3 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar3,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar4 = Z_Construct_UClass_UDS_StuffQuestBoardData_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_338,pUVar4);
    local_338._8_8_ = pUVar3;
    local_3c8[0] = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_338);
    if (local_338._64_8_ == 0) goto LAB_14babd967;
    plVar5 = (longlong *)(local_338 + 0x50);
    local_3b8._104_8_ = local_338._104_8_;
  }
  else {
    if (EVar1 != StuffQuest) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar2 = UDS_LogManager::GetInst();
      UDS_DataSetBase::GetEntityType((UDS_DataSetBase *)this);
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_StuffDataSet::OnAdded",0x19,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x5a,L"Invalid EntityType. (%d)");
      if ((void *)local_138._padding_ == (void *)0x0) {
        return;
      }
      FMemory::Free((void *)local_138._padding_);
      return;
    }
    pUVar3 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar3,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar4 = Z_Construct_UClass_UDS_StuffQuestData_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_3b8,pUVar4);
    local_3b8._8_8_ = pUVar3;
    local_3c8[0] = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_3b8);
    if (local_3b8._64_8_ == 0) goto LAB_14babd967;
    plVar5 = (longlong *)(local_3b8 + 0x50);
  }
  if ((longlong *)local_3b8._104_8_ != (longlong *)0x0) {
    plVar5 = (longlong *)local_3b8._104_8_;
  }
  (**(code **)(*plVar5 + 0x10))();
LAB_14babd967:
  if (local_3c8[0] == (UObject *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_StuffDataSet::OnAdded",0x19,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x62,L"newData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(local_3c8[0]);
    }
    UDS_DataSetBase::AddData((UDS_DataSetBase *)this,0,(TObjectPtr<UDS_DataBase>)local_3c8);
  }
  return;
}

