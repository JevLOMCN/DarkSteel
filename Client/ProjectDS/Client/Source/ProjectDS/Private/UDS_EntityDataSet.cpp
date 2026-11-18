// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b455090

UClass * __cdecl UDS_EntityDataSet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UDS_EntityDataSet.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_EntityDataSet",
               &Z_Registration_Info_UClass_UDS_EntityDataSet.InnerSingleton,
               StaticRegisterNativesUDS_EntityDataSet,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_EntityDataSet>,
               InternalVTableHelperCtorCaller<UDS_EntityDataSet>,aFStackX_8,
               UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_EntityDataSet.InnerSingleton;
}

// UDS_EntityDataSet @ 14b492520

UDS_EntityDataSet * __thiscall
UDS_EntityDataSet::UDS_EntityDataSet(UDS_EntityDataSet *this,FVTableHelper *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_EntityDataSet__6B_;
  ::FString::FString(&this->DefaultEntityName,"");
  return this;
}

// ~UDS_EntityDataSet @ 14b4935f0

void __thiscall UDS_EntityDataSet::~UDS_EntityDataSet(UDS_EntityDataSet *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDS_EntityDataSet__6B_;
  pFVar1 = (this->DefaultEntityName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_DataSetBase::~UDS_DataSetBase((UDS_DataSetBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b495020

UClass * __cdecl UDS_EntityDataSet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_EntityDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_EntityDataSet",
               &Z_Registration_Info_UClass_UDS_EntityDataSet.InnerSingleton,
               StaticRegisterNativesUDS_EntityDataSet,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_EntityDataSet>,
               InternalVTableHelperCtorCaller<UDS_EntityDataSet>,local_res8,
               UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_EntityDataSet.InnerSingleton;
}

// StaticRegisterNativesUDS_EntityDataSet @ 14b495830

void __cdecl UDS_EntityDataSet::StaticRegisterNativesUDS_EntityDataSet(void)

{
  return;
}

// UDS_EntityDataSet @ 14ba32d20

UDS_EntityDataSet * __thiscall
UDS_EntityDataSet::UDS_EntityDataSet(UDS_EntityDataSet *this,FObjectInitializer *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_EntityDataSet__6B_;
  ::FString::FString(&this->DefaultEntityName,"");
  return this;
}

// GetEntityDataSet @ 14ba4a690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TWeakObjectPtr<UDS_EntityDataSet,FWeakObjectPtr> __cdecl
UDS_EntityDataSet::GetEntityDataSet(ulong64 param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_DataManager *this;
  UDS_LogManager *pUVar4;
  TWeakObjectPtr<UDS_EntityDataSet,FWeakObjectPtr> TVar5;
  UDS_DataSetContainer *this_00;
  TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> this_01;
  UObject *pUVar6;
  UClass *pUVar7;
  FObjectPtr_u_0 FVar8;
  undefined1 auStackY_2b8 [32];
  FWeakObjectPtr local_288;
  undefined8 local_280;
  undefined8 local_278;
  UObject *local_270;
  undefined1 local_268 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  this = UDS_DataManager::GetInst();
  if (this == (UDS_DataManager *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_258._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_258,"UDS_EntityDataSet::GetEntityDataSet",0x23,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_258.Ptr,300,L"Failed To Get DataManager.");
      if ((void *)local_258._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_258._padding_);
      }
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8301371437487226579>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Entity\\DS_EntityData.cpp"
                       ,0x12d,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar5.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_EntityDataSet,FWeakObjectPtr>)TVar5.WeakPtr;
    }
    *(undefined8 *)param_1 = 0;
    FVar8.Handle = (UObject *)&local_280;
    local_280 = 0;
    goto LAB_14ba4a8bd;
  }
  UDS_DataManager::GetDataSetContainer(this,(ulong64)&local_288);
  bVar3 = FWeakObjectPtr::IsValid(&local_288);
  if (!bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_EntityDataSet::GetEntityDataSet",0x23,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_138.Ptr,0x134,L"Failed To Get DataSetContainer.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    *(undefined8 *)param_1 = 0;
    FVar8.Handle = (UObject *)&local_278;
    local_278 = 0;
    goto LAB_14ba4a8bd;
  }
  this_00 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_288);
  this_01 = UDS_DataSetContainer::GetDataSet(this_00,(EDS_DataType)local_268);
  pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.WeakPtr);
  if (pUVar6 == (UObject *)0x0) {
LAB_14ba4a881:
    pUVar6 = (UObject *)0x0;
  }
  else {
    pUVar7 = Z_Construct_UClass_UDS_EntityDataSet_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar7->_padding_)) goto LAB_14ba4a881;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  *(undefined8 *)param_1 = 0;
  local_270 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FVar8.Handle = (UObject *)&local_270;
LAB_14ba4a8bd:
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)FVar8);
  return (TWeakObjectPtr<UDS_EntityDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetName @ 14ba4d660

FString * __thiscall UDS_EntityDataSet::GetName(UDS_EntityDataSet *this)

{
  bool bVar1;
  FObjectPtr_u_0 *this_00;
  UClass *pUVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res8;
  UObject *local_res10;
  
  this_00 = (FObjectPtr_u_0 *)
            TMapBase<unsigned___int64,TObjectPtr<UDS_DataBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataBase>,0>_>
            ::FindChecked((TMapBase<unsigned___int64,TObjectPtr<UDS_DataBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataBase>,0>_>
                           *)&this->_padding_,0);
  if (this_00->Handle != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_EntityData_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar2);
    if (bVar1) {
      pUVar3 = this_00->Handle;
      goto LAB_14ba4d69c;
    }
  }
  pUVar3 = (UObject *)0x0;
LAB_14ba4d69c:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  bVar1 = FWeakObjectPtr::IsValid(&local_res8);
  if (!bVar1) {
    return &this->DefaultEntityName;
  }
  pUVar3 = FWeakObjectPtr::Get(&local_res8);
  return (FString *)&pUVar3[2].field_0x8;
}

// OnAdded @ 14ba5ed00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_EntityDataSet::OnAdded(UDS_EntityDataSet *this)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_LogManager *pUVar3;
  longlong *plVar4;
  undefined1 auStackY_1f8 [32];
  UObject *local_1c8 [2];
  undefined1 local_1b8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pUVar1 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = Z_Construct_UClass_UDS_EntityData_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1b8,pUVar2);
  local_1b8._8_8_ = pUVar1;
  local_1c8[0] = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
  if (local_1b8._64_8_ != 0) {
    plVar4 = (longlong *)(local_1b8 + 0x50);
    if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_1b8._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (local_1c8[0] == (UObject *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_EntityDataSet::OnAdded",0x1a,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x142,L"Failed to create EntityData");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(local_1c8[0]);
    }
    UDS_DataSetBase::AddData((UDS_DataSetBase *)this,0,(TObjectPtr<UDS_DataBase>)local_1c8);
  }
  return;
}

