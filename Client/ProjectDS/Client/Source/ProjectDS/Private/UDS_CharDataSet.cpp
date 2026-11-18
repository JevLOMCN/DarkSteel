// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b447a60

UClass * __cdecl UDS_CharDataSet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CharDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CharDataSet",
               &Z_Registration_Info_UClass_UDS_CharDataSet.InnerSingleton,
               StaticRegisterNativesUDS_CharDataSet,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_CharDataSet>,InternalVTableHelperCtorCaller<UDS_CharDataSet>,
               local_res8,UDS_EntityDataSet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CharDataSet.InnerSingleton;
}

// UDS_CharDataSet @ 14b44cd00

UDS_CharDataSet * __thiscall
UDS_CharDataSet::UDS_CharDataSet(UDS_CharDataSet *this,FVTableHelper *param_1)

{
  UDS_EntityDataSet::UDS_EntityDataSet((UDS_EntityDataSet *)this,param_1);
  *(undefined ***)this = &___7UDS_CharDataSet__6B_;
  return this;
}

// ~UDS_CharDataSet @ 14b44fc40

void __thiscall UDS_CharDataSet::~UDS_CharDataSet(UDS_CharDataSet *this)

{
  *(undefined ***)this = &___7UDS_CharDataSet__6B_;
  UDS_EntityDataSet::~UDS_EntityDataSet((UDS_EntityDataSet *)this);
  return;
}

// GetPrivateStaticClass @ 14b453b80

UClass * __cdecl UDS_CharDataSet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CharDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CharDataSet",
               &Z_Registration_Info_UClass_UDS_CharDataSet.InnerSingleton,
               StaticRegisterNativesUDS_CharDataSet,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_CharDataSet>,InternalVTableHelperCtorCaller<UDS_CharDataSet>,
               local_res8,UDS_EntityDataSet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CharDataSet.InnerSingleton;
}

// StaticRegisterNativesUDS_CharDataSet @ 14b4550c0

void __cdecl UDS_CharDataSet::StaticRegisterNativesUDS_CharDataSet(void)

{
  return;
}

// UDS_CharDataSet @ 14ba324e0

UDS_CharDataSet * __thiscall
UDS_CharDataSet::UDS_CharDataSet(UDS_CharDataSet *this,FObjectInitializer *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  *(undefined ***)this = &___7UDS_EntityDataSet__6B_;
  ::FString::FString((FString *)&this->field_0xb0,"");
  *(undefined ***)this = &___7UDS_CharDataSet__6B_;
  return this;
}

// GetCharDataSet @ 14ba456d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TWeakObjectPtr<UDS_CharDataSet,FWeakObjectPtr> __cdecl
UDS_CharDataSet::GetCharDataSet(ulong64 param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_DataManager *this;
  UDS_LogManager *pUVar4;
  TWeakObjectPtr<UDS_CharDataSet,FWeakObjectPtr> TVar5;
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
                (&local_258,"UDS_CharDataSet::GetCharDataSet",0x1f,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_258.Ptr,0x4b,L"Failed To Get DataManager.");
      if ((void *)local_258._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_258._padding_);
      }
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4474866931815415884>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Entity\\Char\\DS_CharData.cpp"
                       ,0x4c,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar5.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_CharDataSet,FWeakObjectPtr>)TVar5.WeakPtr;
    }
    *(undefined8 *)param_1 = 0;
    FVar8.Handle = (UObject *)&local_280;
    local_280 = 0;
    goto LAB_14ba4592a;
  }
  UDS_DataManager::GetDataSetContainer(this,(ulong64)&local_288);
  bVar3 = FWeakObjectPtr::IsValid(&local_288);
  if (!bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_CharDataSet::GetCharDataSet",0x1f,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_138.Ptr,0x53,L"Failed To Get DataSetContainer.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4474866931815415892>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Entity\\Char\\DS_CharData.cpp"
                       ,0x54,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar5.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_CharDataSet,FWeakObjectPtr>)TVar5.WeakPtr;
    }
    *(undefined8 *)param_1 = 0;
    FVar8.Handle = (UObject *)&local_278;
    local_278 = 0;
    goto LAB_14ba4592a;
  }
  this_00 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_288);
  this_01 = UDS_DataSetContainer::GetDataSet(this_00,(EDS_DataType)local_268);
  pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.WeakPtr);
  if (pUVar6 == (UObject *)0x0) {
LAB_14ba458ee:
    pUVar6 = (UObject *)0x0;
  }
  else {
    pUVar7 = Z_Construct_UClass_UDS_CharDataSet_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar7->_padding_)) goto LAB_14ba458ee;
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
LAB_14ba4592a:
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)FVar8);
  return (TWeakObjectPtr<UDS_CharDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetCharID @ 14ba459d0

int __thiscall UDS_CharDataSet::GetCharID(UDS_CharDataSet *this)

{
  int iVar1;
  bool bVar2;
  TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> this_00;
  UObject *pUVar3;
  UClass *pUVar4;
  FWeakObjectPtr local_res10;
  UObject *local_res18;
  undefined1 local_res20 [8];
  
  this_00 = UDS_DataSetBase::GetData((UDS_DataSetBase *)this,(ulong64)local_res20);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_CharInfoData_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14ba45a1b;
  }
  pUVar3 = (UObject *)0x0;
LAB_14ba45a1b:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar2) {
    return 0;
  }
  pUVar3 = FWeakObjectPtr::Get(&local_res10);
  return *(int *)&pUVar3[8].field_0x8;
}

// GetName @ 14ba4d520

FString * __thiscall UDS_CharDataSet::GetName(UDS_CharDataSet *this)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> this_00;
  UClass *pUVar4;
  ulong64 uVar5;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  UObject *local_res18;
  undefined1 local_res20 [8];
  
  bVar2 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)&this->field_0xa0,
                     (void *)0x0);
  if (bVar2) {
    uVar5 = 0;
  }
  else {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xa0);
    uVar5 = *(ulong64 *)(pUVar3 + 1);
  }
  UDS_PlayerData::GetData((ulong64)&local_res10,uVar5,false);
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&local_res10);
    return (FString *)&pUVar3[7].field_0x20;
  }
  this_00 = UDS_DataSetBase::GetData((UDS_DataSetBase *)this,(ulong64)local_res20);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_CharInfoData_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14ba4d5cd;
  }
  pUVar3 = (UObject *)0x0;
LAB_14ba4d5cd:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&local_res8);
    return (FString *)&pUVar3[8].field_0x18;
  }
  return (FString *)&this->field_0xb0;
}

// OnAdded @ 14ba5e850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_CharDataSet::OnAdded(UDS_CharDataSet *this)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_LogManager *pUVar3;
  UDS_CharStatusData *pUVar4;
  longlong *plVar5;
  undefined1 auStackY_1f8 [32];
  uint uVar6;
  UDS_CharStatusData *local_1c8 [2];
  undefined1 local_1b8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pUVar1 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = Z_Construct_UClass_UDS_CharData_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1b8,pUVar2);
  local_1b8._8_8_ = pUVar1;
  pUVar1 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
  if (local_1b8._64_8_ != 0) {
    plVar5 = (longlong *)(local_1b8 + 0x50);
    if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_1b8._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if (pUVar1 == (UObject *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_CharDataSet::OnAdded",0x18,Yes);
    uVar6 = 0x3a;
  }
  else {
    local_1c8[0] = (UDS_CharStatusData *)pUVar1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    UDS_DataSetBase::AddData((UDS_DataSetBase *)this,0,(TObjectPtr<UDS_DataBase>)local_1c8);
    pUVar1 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UDS_CharStateData_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1b8,pUVar2);
    local_1b8._8_8_ = pUVar1;
    pUVar1 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
    if (local_1b8._64_8_ != 0) {
      plVar5 = (longlong *)(local_1b8 + 0x50);
      if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
        plVar5 = (longlong *)local_1b8._104_8_;
      }
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
    if (pUVar1 == (UObject *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_CharDataSet::OnAdded",0x18,Yes);
      uVar6 = 0x3b;
    }
    else {
      local_1c8[0] = (UDS_CharStatusData *)pUVar1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar1);
      }
      UDS_DataSetBase::AddData((UDS_DataSetBase *)this,2,(TObjectPtr<UDS_DataBase>)local_1c8);
      pUVar1 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar1,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar2 = Z_Construct_UClass_UDS_CharInfoData_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_1b8,pUVar2);
      local_1b8._8_8_ = pUVar1;
      pUVar1 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
      if (local_1b8._64_8_ != 0) {
        plVar5 = (longlong *)(local_1b8 + 0x50);
        if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
          plVar5 = (longlong *)local_1b8._104_8_;
        }
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
      if (pUVar1 == (UObject *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_CharDataSet::OnAdded",0x18,Yes);
        uVar6 = 0x3c;
      }
      else {
        local_1c8[0] = (UDS_CharStatusData *)pUVar1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar1);
        }
        UDS_DataSetBase::AddData((UDS_DataSetBase *)this,1,(TObjectPtr<UDS_DataBase>)local_1c8);
        pUVar1 = GetTransientPackageAsObject();
        FObjectInitializer::AssertIfInConstructor
                  (pUVar1,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar2 = Z_Construct_UClass_UDS_CharBuffData_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_1b8,pUVar2);
        local_1b8._8_8_ = pUVar1;
        pUVar1 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
        if (local_1b8._64_8_ != 0) {
          plVar5 = (longlong *)(local_1b8 + 0x50);
          if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
            plVar5 = (longlong *)local_1b8._104_8_;
          }
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
        if (pUVar1 == (UObject *)0x0) {
          pUVar3 = UDS_LogManager::GetInst();
          if (pUVar3 == (UDS_LogManager *)0x0) {
            return;
          }
          pUVar3 = UDS_LogManager::GetInst();
          local_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_138,"UDS_CharDataSet::OnAdded",0x18,Yes);
          uVar6 = 0x3d;
        }
        else {
          local_1c8[0] = (UDS_CharStatusData *)pUVar1;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar1);
          }
          UDS_DataSetBase::AddData((UDS_DataSetBase *)this,4,(TObjectPtr<UDS_DataBase>)local_1c8);
          pUVar1 = GetTransientPackageAsObject();
          pUVar4 = NewObject<UDS_CharStatusData>(pUVar1);
          if (pUVar4 != (UDS_CharStatusData *)0x0) {
            local_1c8[0] = pUVar4;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar4);
            }
            UDS_DataSetBase::AddData((UDS_DataSetBase *)this,3,(TObjectPtr<UDS_DataBase>)local_1c8);
            return;
          }
          pUVar3 = UDS_LogManager::GetInst();
          if (pUVar3 == (UDS_LogManager *)0x0) {
            return;
          }
          pUVar3 = UDS_LogManager::GetInst();
          local_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_138,"UDS_CharDataSet::OnAdded",0x18,Yes);
          uVar6 = 0x3e;
        }
      }
    }
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,uVar6,L"Failed to create CharData");
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// Update @ 14ba7aeb0

void __thiscall UDS_CharDataSet::Update(UDS_CharDataSet *this,float *param_1)

{
  return;
}

