// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 32

// Get @ 14b7aa090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> __cdecl
TDS_DataSetGetter<UDS_AbilityDataSet>::Get(ulong64 param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_DataManager *this;
  UDS_LogManager *pUVar4;
  UDS_DataSetContainer *pUVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UDS_DataSetBase *pUVar8;
  TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr> TVar9;
  longlong *plVar10;
  undefined1 auStackY_248 [32];
  FWeakObjectPtr local_208;
  FWeakObjectPtr local_200;
  FWeakObjectPtr local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  UDS_DataSetBase *local_1d8;
  UObject *local_1d0;
  undefined1 local_1c8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_248;
  this = UDS_DataManager::GetInst();
  if (this == (UDS_DataManager *)0x0) {
    *(undefined8 *)param_1 = 0;
    local_1f0 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1f0);
    return (TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  UDS_DataManager::GetDataSetContainer(this,(ulong64)&local_208);
  bVar3 = FWeakObjectPtr::IsValid(&local_208);
  if (!bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"TDS_DataSetGetter<class UDS_AbilityDataSet>::Get",0x30,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_148.Ptr,0xee,L"Not ExistDataSetContainer. EntityID : %llu");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    *(undefined8 *)param_1 = 0;
    local_1e8 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e8);
    return (TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
  UDS_DataSetContainer::GetDataSet(pUVar5,(EDS_DataType)&local_200);
  bVar3 = FWeakObjectPtr::IsValid(&local_200);
  if (!bVar3) {
    pUVar6 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UDS_AbilityDataSet_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1c8,pUVar7);
    local_1c8._8_8_ = pUVar6;
    pUVar8 = (UDS_DataSetBase *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
    if (local_1c8._64_8_ != 0) {
      plVar10 = (longlong *)(local_1c8 + 0x50);
      if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_1c8._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if (pUVar8 == (UDS_DataSetBase *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\DS_DataBase.h"
                         ,0xfa,L"");
      if (!bVar3) {
        *(undefined8 *)param_1 = 0;
        local_1e0 = 0;
        FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e0);
        return (TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
      pcVar2 = (code *)swi(3);
      TVar9.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>)TVar9.WeakPtr;
    }
    pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
    UDS_DataSetContainer::AddDataSet(pUVar5,Ability,pUVar8);
    local_1d8 = pUVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    FWeakObjectPtr::operator=(&local_200,(FObjectPtr)&local_1d8);
  }
  pUVar6 = FWeakObjectPtr::Get(&local_200);
  if (pUVar6 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_UDS_AbilityDataSet_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) goto LAB_14b7aa2e7;
  }
  pUVar6 = (UObject *)0x0;
LAB_14b7aa2e7:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_1f8.ObjectIndex = 0;
  local_1f8.ObjectSerialNumber = 0;
  local_1d0 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_1f8,(FObjectPtr)&local_1d0);
  *(FWeakObjectPtr *)param_1 = local_1f8;
  return (TWeakObjectPtr<UDS_AbilityDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// Get @ 14b7aa370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> __cdecl
TDS_DataSetGetter<UDS_NPCDataSet>::Get(ulong64 param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_DataManager *this;
  UDS_LogManager *pUVar4;
  UDS_DataSetContainer *pUVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UDS_DataSetBase *pUVar8;
  TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> TVar9;
  longlong *plVar10;
  undefined1 auStackY_248 [32];
  FWeakObjectPtr local_208;
  FWeakObjectPtr local_200;
  FWeakObjectPtr local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  UDS_DataSetBase *local_1d8;
  UObject *local_1d0;
  undefined1 local_1c8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_248;
  this = UDS_DataManager::GetInst();
  if (this == (UDS_DataManager *)0x0) {
    *(undefined8 *)param_1 = 0;
    local_1f0 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1f0);
    return (TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  UDS_DataManager::GetDataSetContainer(this,(ulong64)&local_208);
  bVar3 = FWeakObjectPtr::IsValid(&local_208);
  if (!bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"TDS_DataSetGetter<class UDS_NPCDataSet>::Get",0x2c,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_148.Ptr,0xee,L"Not ExistDataSetContainer. EntityID : %llu");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    *(undefined8 *)param_1 = 0;
    local_1e8 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e8);
    return (TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
  UDS_DataSetContainer::GetDataSet(pUVar5,(EDS_DataType)&local_200);
  bVar3 = FWeakObjectPtr::IsValid(&local_200);
  if (!bVar3) {
    pUVar6 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UDS_NPCDataSet_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1c8,pUVar7);
    local_1c8._8_8_ = pUVar6;
    pUVar8 = (UDS_DataSetBase *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
    if (local_1c8._64_8_ != 0) {
      plVar10 = (longlong *)(local_1c8 + 0x50);
      if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_1c8._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if (pUVar8 == (UDS_DataSetBase *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\DS_DataBase.h"
                         ,0xfa,L"");
      if (!bVar3) {
        *(undefined8 *)param_1 = 0;
        local_1e0 = 0;
        FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e0);
        return (TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
      pcVar2 = (code *)swi(3);
      TVar9.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr>)TVar9.WeakPtr;
    }
    pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
    UDS_DataSetContainer::AddDataSet(pUVar5,NPC,pUVar8);
    local_1d8 = pUVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    FWeakObjectPtr::operator=(&local_200,(FObjectPtr)&local_1d8);
  }
  pUVar6 = FWeakObjectPtr::Get(&local_200);
  if (pUVar6 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_UDS_NPCDataSet_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) goto LAB_14b7aa5c7;
  }
  pUVar6 = (UObject *)0x0;
LAB_14b7aa5c7:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_1f8.ObjectIndex = 0;
  local_1f8.ObjectSerialNumber = 0;
  local_1d0 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_1f8,(FObjectPtr)&local_1d0);
  *(FWeakObjectPtr *)param_1 = local_1f8;
  return (TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// Get @ 14b7aa650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_SkillDataSet,FWeakObjectPtr> __cdecl
TDS_DataSetGetter<UDS_SkillDataSet>::Get(ulong64 param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_DataManager *this;
  UDS_LogManager *pUVar4;
  UDS_DataSetContainer *pUVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UDS_DataSetBase *pUVar8;
  TWeakObjectPtr<UDS_SkillDataSet,FWeakObjectPtr> TVar9;
  longlong *plVar10;
  undefined1 auStackY_248 [32];
  FWeakObjectPtr local_208;
  FWeakObjectPtr local_200;
  FWeakObjectPtr local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  UDS_DataSetBase *local_1d8;
  UObject *local_1d0;
  undefined1 local_1c8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_248;
  this = UDS_DataManager::GetInst();
  if (this == (UDS_DataManager *)0x0) {
    *(undefined8 *)param_1 = 0;
    local_1f0 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1f0);
    return (TWeakObjectPtr<UDS_SkillDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  UDS_DataManager::GetDataSetContainer(this,(ulong64)&local_208);
  bVar3 = FWeakObjectPtr::IsValid(&local_208);
  if (!bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"TDS_DataSetGetter<class UDS_SkillDataSet>::Get",0x2e,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_148.Ptr,0xee,L"Not ExistDataSetContainer. EntityID : %llu");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    *(undefined8 *)param_1 = 0;
    local_1e8 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e8);
    return (TWeakObjectPtr<UDS_SkillDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
  UDS_DataSetContainer::GetDataSet(pUVar5,(EDS_DataType)&local_200);
  bVar3 = FWeakObjectPtr::IsValid(&local_200);
  if (!bVar3) {
    pUVar6 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UDS_SkillDataSet_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1c8,pUVar7);
    local_1c8._8_8_ = pUVar6;
    pUVar8 = (UDS_DataSetBase *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
    if (local_1c8._64_8_ != 0) {
      plVar10 = (longlong *)(local_1c8 + 0x50);
      if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_1c8._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if (pUVar8 == (UDS_DataSetBase *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\DS_DataBase.h"
                         ,0xfa,L"");
      if (!bVar3) {
        *(undefined8 *)param_1 = 0;
        local_1e0 = 0;
        FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e0);
        return (TWeakObjectPtr<UDS_SkillDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
      pcVar2 = (code *)swi(3);
      TVar9.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_SkillDataSet,FWeakObjectPtr>)TVar9.WeakPtr;
    }
    pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
    UDS_DataSetContainer::AddDataSet(pUVar5,Skill,pUVar8);
    local_1d8 = pUVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    FWeakObjectPtr::operator=(&local_200,(FObjectPtr)&local_1d8);
  }
  pUVar6 = FWeakObjectPtr::Get(&local_200);
  if (pUVar6 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_UDS_SkillDataSet_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) goto LAB_14b7aa8a7;
  }
  pUVar6 = (UObject *)0x0;
LAB_14b7aa8a7:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_1f8.ObjectIndex = 0;
  local_1f8.ObjectSerialNumber = 0;
  local_1d0 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_1f8,(FObjectPtr)&local_1d0);
  *(FWeakObjectPtr *)param_1 = local_1f8;
  return (TWeakObjectPtr<UDS_SkillDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// Get @ 14b830ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr> __cdecl
TDS_DataSetGetter<UDS_MountDataSet>::Get(ulong64 param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_DataManager *this;
  UDS_LogManager *pUVar4;
  UDS_DataSetContainer *pUVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UDS_DataSetBase *pUVar8;
  TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr> TVar9;
  longlong *plVar10;
  undefined1 auStackY_248 [32];
  FWeakObjectPtr local_208;
  FWeakObjectPtr local_200;
  FWeakObjectPtr local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  UDS_DataSetBase *local_1d8;
  UObject *local_1d0;
  undefined1 local_1c8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_248;
  this = UDS_DataManager::GetInst();
  if (this == (UDS_DataManager *)0x0) {
    *(undefined8 *)param_1 = 0;
    local_1f0 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1f0);
    return (TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  UDS_DataManager::GetDataSetContainer(this,(ulong64)&local_208);
  bVar3 = FWeakObjectPtr::IsValid(&local_208);
  if (!bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"TDS_DataSetGetter<class UDS_MountDataSet>::Get",0x2e,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_148.Ptr,0xee,L"Not ExistDataSetContainer. EntityID : %llu");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    *(undefined8 *)param_1 = 0;
    local_1e8 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e8);
    return (TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
  UDS_DataSetContainer::GetDataSet(pUVar5,(EDS_DataType)&local_200);
  bVar3 = FWeakObjectPtr::IsValid(&local_200);
  if (!bVar3) {
    pUVar6 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UDS_MountDataSet_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1c8,pUVar7);
    local_1c8._8_8_ = pUVar6;
    pUVar8 = (UDS_DataSetBase *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
    if (local_1c8._64_8_ != 0) {
      plVar10 = (longlong *)(local_1c8 + 0x50);
      if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_1c8._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if (pUVar8 == (UDS_DataSetBase *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\DS_DataBase.h"
                         ,0xfa,L"");
      if (!bVar3) {
        *(undefined8 *)param_1 = 0;
        local_1e0 = 0;
        FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e0);
        return (TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
      pcVar2 = (code *)swi(3);
      TVar9.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr>)TVar9.WeakPtr;
    }
    pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
    UDS_DataSetContainer::AddDataSet(pUVar5,Mount,pUVar8);
    local_1d8 = pUVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    FWeakObjectPtr::operator=(&local_200,(FObjectPtr)&local_1d8);
  }
  pUVar6 = FWeakObjectPtr::Get(&local_200);
  if (pUVar6 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_UDS_MountDataSet_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) goto LAB_14b830d17;
  }
  pUVar6 = (UObject *)0x0;
LAB_14b830d17:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_1f8.ObjectIndex = 0;
  local_1f8.ObjectSerialNumber = 0;
  local_1d0 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_1f8,(FObjectPtr)&local_1d0);
  *(FWeakObjectPtr *)param_1 = local_1f8;
  return (TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// Get @ 14b8c3ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_QuickSlotDeckDataSet,FWeakObjectPtr> __cdecl
TDS_DataSetGetter<UDS_QuickSlotDeckDataSet>::Get(ulong64 param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_DataManager *this;
  UDS_LogManager *pUVar4;
  UDS_DataSetContainer *pUVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UDS_DataSetBase *pUVar8;
  TWeakObjectPtr<UDS_QuickSlotDeckDataSet,FWeakObjectPtr> TVar9;
  longlong *plVar10;
  undefined1 auStackY_248 [32];
  FWeakObjectPtr local_208;
  FWeakObjectPtr local_200;
  FWeakObjectPtr local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  UDS_DataSetBase *local_1d8;
  UObject *local_1d0;
  undefined1 local_1c8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_248;
  this = UDS_DataManager::GetInst();
  if (this == (UDS_DataManager *)0x0) {
    *(undefined8 *)param_1 = 0;
    local_1f0 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1f0);
    return (TWeakObjectPtr<UDS_QuickSlotDeckDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  UDS_DataManager::GetDataSetContainer(this,(ulong64)&local_208);
  bVar3 = FWeakObjectPtr::IsValid(&local_208);
  if (!bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"TDS_DataSetGetter<class UDS_QuickSlotDeckDataSet>::Get",0x36,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_148.Ptr,0xee,L"Not ExistDataSetContainer. EntityID : %llu");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    *(undefined8 *)param_1 = 0;
    local_1e8 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e8);
    return (TWeakObjectPtr<UDS_QuickSlotDeckDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
  UDS_DataSetContainer::GetDataSet(pUVar5,(EDS_DataType)&local_200);
  bVar3 = FWeakObjectPtr::IsValid(&local_200);
  if (!bVar3) {
    pUVar6 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UDS_QuickSlotDeckDataSet_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1c8,pUVar7);
    local_1c8._8_8_ = pUVar6;
    pUVar8 = (UDS_DataSetBase *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
    if (local_1c8._64_8_ != 0) {
      plVar10 = (longlong *)(local_1c8 + 0x50);
      if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_1c8._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if (pUVar8 == (UDS_DataSetBase *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\DS_DataBase.h"
                         ,0xfa,L"");
      if (!bVar3) {
        *(undefined8 *)param_1 = 0;
        local_1e0 = 0;
        FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e0);
        return (TWeakObjectPtr<UDS_QuickSlotDeckDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
      pcVar2 = (code *)swi(3);
      TVar9.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_QuickSlotDeckDataSet,FWeakObjectPtr>)TVar9.WeakPtr;
    }
    pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
    UDS_DataSetContainer::AddDataSet(pUVar5,QuickSlotDeck,pUVar8);
    local_1d8 = pUVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    FWeakObjectPtr::operator=(&local_200,(FObjectPtr)&local_1d8);
  }
  pUVar6 = FWeakObjectPtr::Get(&local_200);
  if (pUVar6 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_UDS_QuickSlotDeckDataSet_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) goto LAB_14b8c3df7;
  }
  pUVar6 = (UObject *)0x0;
LAB_14b8c3df7:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_1f8.ObjectIndex = 0;
  local_1f8.ObjectSerialNumber = 0;
  local_1d0 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_1f8,(FObjectPtr)&local_1d0);
  *(FWeakObjectPtr *)param_1 = local_1f8;
  return (TWeakObjectPtr<UDS_QuickSlotDeckDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// Get @ 14b9aaa20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_PKDataSet,FWeakObjectPtr> __cdecl
TDS_DataSetGetter<UDS_PKDataSet>::Get(ulong64 param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_DataManager *this;
  UDS_LogManager *pUVar4;
  UDS_DataSetContainer *pUVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UDS_DataSetBase *pUVar8;
  TWeakObjectPtr<UDS_PKDataSet,FWeakObjectPtr> TVar9;
  longlong *plVar10;
  undefined1 auStackY_248 [32];
  FWeakObjectPtr local_208;
  FWeakObjectPtr local_200;
  FWeakObjectPtr local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  UDS_DataSetBase *local_1d8;
  UObject *local_1d0;
  undefined1 local_1c8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_248;
  this = UDS_DataManager::GetInst();
  if (this == (UDS_DataManager *)0x0) {
    *(undefined8 *)param_1 = 0;
    local_1f0 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1f0);
    return (TWeakObjectPtr<UDS_PKDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  UDS_DataManager::GetDataSetContainer(this,(ulong64)&local_208);
  bVar3 = FWeakObjectPtr::IsValid(&local_208);
  if (!bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"TDS_DataSetGetter<class UDS_PKDataSet>::Get",0x2b,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_148.Ptr,0xee,L"Not ExistDataSetContainer. EntityID : %llu");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    *(undefined8 *)param_1 = 0;
    local_1e8 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e8);
    return (TWeakObjectPtr<UDS_PKDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
  UDS_DataSetContainer::GetDataSet(pUVar5,(EDS_DataType)&local_200);
  bVar3 = FWeakObjectPtr::IsValid(&local_200);
  if (!bVar3) {
    pUVar6 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UDS_PKDataSet_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1c8,pUVar7);
    local_1c8._8_8_ = pUVar6;
    pUVar8 = (UDS_DataSetBase *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
    if (local_1c8._64_8_ != 0) {
      plVar10 = (longlong *)(local_1c8 + 0x50);
      if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_1c8._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if (pUVar8 == (UDS_DataSetBase *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\DS_DataBase.h"
                         ,0xfa,L"");
      if (!bVar3) {
        *(undefined8 *)param_1 = 0;
        local_1e0 = 0;
        FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e0);
        return (TWeakObjectPtr<UDS_PKDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
      pcVar2 = (code *)swi(3);
      TVar9.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_PKDataSet,FWeakObjectPtr>)TVar9.WeakPtr;
    }
    pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
    UDS_DataSetContainer::AddDataSet(pUVar5,PK,pUVar8);
    local_1d8 = pUVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    FWeakObjectPtr::operator=(&local_200,(FObjectPtr)&local_1d8);
  }
  pUVar6 = FWeakObjectPtr::Get(&local_200);
  if (pUVar6 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_UDS_PKDataSet_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) goto LAB_14b9aac77;
  }
  pUVar6 = (UObject *)0x0;
LAB_14b9aac77:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_1f8.ObjectIndex = 0;
  local_1f8.ObjectSerialNumber = 0;
  local_1d0 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_1f8,(FObjectPtr)&local_1d0);
  *(FWeakObjectPtr *)param_1 = local_1f8;
  return (TWeakObjectPtr<UDS_PKDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// Get @ 14b9eba80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_ChattingDataSet,FWeakObjectPtr> __cdecl
TDS_DataSetGetter<UDS_ChattingDataSet>::Get(ulong64 param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_DataManager *this;
  UDS_LogManager *pUVar4;
  UDS_DataSetContainer *pUVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UDS_DataSetBase *pUVar8;
  TWeakObjectPtr<UDS_ChattingDataSet,FWeakObjectPtr> TVar9;
  longlong *plVar10;
  undefined1 auStackY_248 [32];
  FWeakObjectPtr local_208;
  FWeakObjectPtr local_200;
  FWeakObjectPtr local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  UDS_DataSetBase *local_1d8;
  UObject *local_1d0;
  undefined1 local_1c8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_248;
  this = UDS_DataManager::GetInst();
  if (this == (UDS_DataManager *)0x0) {
    *(undefined8 *)param_1 = 0;
    local_1f0 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1f0);
    return (TWeakObjectPtr<UDS_ChattingDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  UDS_DataManager::GetDataSetContainer(this,(ulong64)&local_208);
  bVar3 = FWeakObjectPtr::IsValid(&local_208);
  if (!bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"TDS_DataSetGetter<class UDS_ChattingDataSet>::Get",0x31,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_148.Ptr,0xee,L"Not ExistDataSetContainer. EntityID : %llu");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    *(undefined8 *)param_1 = 0;
    local_1e8 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e8);
    return (TWeakObjectPtr<UDS_ChattingDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
  UDS_DataSetContainer::GetDataSet(pUVar5,(EDS_DataType)&local_200);
  bVar3 = FWeakObjectPtr::IsValid(&local_200);
  if (!bVar3) {
    pUVar6 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UDS_ChattingDataSet_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1c8,pUVar7);
    local_1c8._8_8_ = pUVar6;
    pUVar8 = (UDS_DataSetBase *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
    if (local_1c8._64_8_ != 0) {
      plVar10 = (longlong *)(local_1c8 + 0x50);
      if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_1c8._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if (pUVar8 == (UDS_DataSetBase *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\DS_DataBase.h"
                         ,0xfa,L"");
      if (!bVar3) {
        *(undefined8 *)param_1 = 0;
        local_1e0 = 0;
        FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e0);
        return (TWeakObjectPtr<UDS_ChattingDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
      pcVar2 = (code *)swi(3);
      TVar9.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_ChattingDataSet,FWeakObjectPtr>)TVar9.WeakPtr;
    }
    pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
    UDS_DataSetContainer::AddDataSet(pUVar5,Chatting,pUVar8);
    local_1d8 = pUVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    FWeakObjectPtr::operator=(&local_200,(FObjectPtr)&local_1d8);
  }
  pUVar6 = FWeakObjectPtr::Get(&local_200);
  if (pUVar6 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_UDS_ChattingDataSet_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) goto LAB_14b9ebcd7;
  }
  pUVar6 = (UObject *)0x0;
LAB_14b9ebcd7:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_1f8.ObjectIndex = 0;
  local_1f8.ObjectSerialNumber = 0;
  local_1d0 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_1f8,(FObjectPtr)&local_1d0);
  *(FWeakObjectPtr *)param_1 = local_1f8;
  return (TWeakObjectPtr<UDS_ChattingDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// Get @ 14ba40c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_AchievementDataSet,FWeakObjectPtr> __cdecl
TDS_DataSetGetter<UDS_AchievementDataSet>::Get(ulong64 param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_DataManager *this;
  UDS_LogManager *pUVar4;
  UDS_DataSetContainer *pUVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UDS_DataSetBase *pUVar8;
  TWeakObjectPtr<UDS_AchievementDataSet,FWeakObjectPtr> TVar9;
  longlong *plVar10;
  undefined1 auStackY_248 [32];
  FWeakObjectPtr local_208;
  FWeakObjectPtr local_200;
  FWeakObjectPtr local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  UDS_DataSetBase *local_1d8;
  UObject *local_1d0;
  undefined1 local_1c8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_248;
  this = UDS_DataManager::GetInst();
  if (this == (UDS_DataManager *)0x0) {
    *(undefined8 *)param_1 = 0;
    local_1f0 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1f0);
    return (TWeakObjectPtr<UDS_AchievementDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  UDS_DataManager::GetDataSetContainer(this,(ulong64)&local_208);
  bVar3 = FWeakObjectPtr::IsValid(&local_208);
  if (!bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"TDS_DataSetGetter<class UDS_AchievementDataSet>::Get",0x34,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_148.Ptr,0xee,L"Not ExistDataSetContainer. EntityID : %llu");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    *(undefined8 *)param_1 = 0;
    local_1e8 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e8);
    return (TWeakObjectPtr<UDS_AchievementDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
  UDS_DataSetContainer::GetDataSet(pUVar5,(EDS_DataType)&local_200);
  bVar3 = FWeakObjectPtr::IsValid(&local_200);
  if (!bVar3) {
    pUVar6 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UDS_AchievementDataSet_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1c8,pUVar7);
    local_1c8._8_8_ = pUVar6;
    pUVar8 = (UDS_DataSetBase *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
    if (local_1c8._64_8_ != 0) {
      plVar10 = (longlong *)(local_1c8 + 0x50);
      if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_1c8._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if (pUVar8 == (UDS_DataSetBase *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\DS_DataBase.h"
                         ,0xfa,L"");
      if (!bVar3) {
        *(undefined8 *)param_1 = 0;
        local_1e0 = 0;
        FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e0);
        return (TWeakObjectPtr<UDS_AchievementDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
      pcVar2 = (code *)swi(3);
      TVar9.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_AchievementDataSet,FWeakObjectPtr>)TVar9.WeakPtr;
    }
    pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
    UDS_DataSetContainer::AddDataSet(pUVar5,Achievement,pUVar8);
    local_1d8 = pUVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    FWeakObjectPtr::operator=(&local_200,(FObjectPtr)&local_1d8);
  }
  pUVar6 = FWeakObjectPtr::Get(&local_200);
  if (pUVar6 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_UDS_AchievementDataSet_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) goto LAB_14ba40ea7;
  }
  pUVar6 = (UObject *)0x0;
LAB_14ba40ea7:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_1f8.ObjectIndex = 0;
  local_1f8.ObjectSerialNumber = 0;
  local_1d0 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_1f8,(FObjectPtr)&local_1d0);
  *(FWeakObjectPtr *)param_1 = local_1f8;
  return (TWeakObjectPtr<UDS_AchievementDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// Get @ 14ba40f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_ActivateWarpDeviceDataSet,FWeakObjectPtr> __cdecl
TDS_DataSetGetter<UDS_ActivateWarpDeviceDataSet>::Get(ulong64 param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_DataManager *this;
  UDS_LogManager *pUVar4;
  UDS_DataSetContainer *pUVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UDS_DataSetBase *pUVar8;
  TWeakObjectPtr<UDS_ActivateWarpDeviceDataSet,FWeakObjectPtr> TVar9;
  longlong *plVar10;
  undefined1 auStackY_248 [32];
  FWeakObjectPtr local_208;
  FWeakObjectPtr local_200;
  FWeakObjectPtr local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  UDS_DataSetBase *local_1d8;
  UObject *local_1d0;
  undefined1 local_1c8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_248;
  this = UDS_DataManager::GetInst();
  if (this == (UDS_DataManager *)0x0) {
    *(undefined8 *)param_1 = 0;
    local_1f0 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1f0);
    return (TWeakObjectPtr<UDS_ActivateWarpDeviceDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  UDS_DataManager::GetDataSetContainer(this,(ulong64)&local_208);
  bVar3 = FWeakObjectPtr::IsValid(&local_208);
  if (!bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"TDS_DataSetGetter<class UDS_ActivateWarpDeviceDataSet>::Get",0x3b,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_148.Ptr,0xee,L"Not ExistDataSetContainer. EntityID : %llu");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    *(undefined8 *)param_1 = 0;
    local_1e8 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e8);
    return (TWeakObjectPtr<UDS_ActivateWarpDeviceDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
  UDS_DataSetContainer::GetDataSet(pUVar5,(EDS_DataType)&local_200);
  bVar3 = FWeakObjectPtr::IsValid(&local_200);
  if (!bVar3) {
    pUVar6 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UDS_ActivateWarpDeviceDataSet_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1c8,pUVar7);
    local_1c8._8_8_ = pUVar6;
    pUVar8 = (UDS_DataSetBase *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
    if (local_1c8._64_8_ != 0) {
      plVar10 = (longlong *)(local_1c8 + 0x50);
      if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_1c8._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if (pUVar8 == (UDS_DataSetBase *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\DS_DataBase.h"
                         ,0xfa,L"");
      if (!bVar3) {
        *(undefined8 *)param_1 = 0;
        local_1e0 = 0;
        FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e0);
        return (TWeakObjectPtr<UDS_ActivateWarpDeviceDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1
        ;
      }
      pcVar2 = (code *)swi(3);
      TVar9.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_ActivateWarpDeviceDataSet,FWeakObjectPtr>)TVar9.WeakPtr;
    }
    pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
    UDS_DataSetContainer::AddDataSet(pUVar5,ActivateWarpDevice,pUVar8);
    local_1d8 = pUVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    FWeakObjectPtr::operator=(&local_200,(FObjectPtr)&local_1d8);
  }
  pUVar6 = FWeakObjectPtr::Get(&local_200);
  if (pUVar6 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_UDS_ActivateWarpDeviceDataSet_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) goto LAB_14ba41187;
  }
  pUVar6 = (UObject *)0x0;
LAB_14ba41187:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_1f8.ObjectIndex = 0;
  local_1f8.ObjectSerialNumber = 0;
  local_1d0 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_1f8,(FObjectPtr)&local_1d0);
  *(FWeakObjectPtr *)param_1 = local_1f8;
  return (TWeakObjectPtr<UDS_ActivateWarpDeviceDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// Get @ 14ba41210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_CharDataSet,FWeakObjectPtr> __cdecl
TDS_DataSetGetter<UDS_CharDataSet>::Get(ulong64 param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_DataManager *this;
  UDS_LogManager *pUVar4;
  UDS_DataSetContainer *pUVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UDS_DataSetBase *pUVar8;
  TWeakObjectPtr<UDS_CharDataSet,FWeakObjectPtr> TVar9;
  longlong *plVar10;
  undefined1 auStackY_248 [32];
  FWeakObjectPtr local_208;
  FWeakObjectPtr local_200;
  FWeakObjectPtr local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  UDS_DataSetBase *local_1d8;
  UObject *local_1d0;
  undefined1 local_1c8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_248;
  this = UDS_DataManager::GetInst();
  if (this == (UDS_DataManager *)0x0) {
    *(undefined8 *)param_1 = 0;
    local_1f0 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1f0);
    return (TWeakObjectPtr<UDS_CharDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  UDS_DataManager::GetDataSetContainer(this,(ulong64)&local_208);
  bVar3 = FWeakObjectPtr::IsValid(&local_208);
  if (!bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"TDS_DataSetGetter<class UDS_CharDataSet>::Get",0x2d,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_148.Ptr,0xee,L"Not ExistDataSetContainer. EntityID : %llu");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    *(undefined8 *)param_1 = 0;
    local_1e8 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e8);
    return (TWeakObjectPtr<UDS_CharDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
  UDS_DataSetContainer::GetDataSet(pUVar5,(EDS_DataType)&local_200);
  bVar3 = FWeakObjectPtr::IsValid(&local_200);
  if (!bVar3) {
    pUVar6 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UDS_CharDataSet_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1c8,pUVar7);
    local_1c8._8_8_ = pUVar6;
    pUVar8 = (UDS_DataSetBase *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
    if (local_1c8._64_8_ != 0) {
      plVar10 = (longlong *)(local_1c8 + 0x50);
      if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_1c8._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if (pUVar8 == (UDS_DataSetBase *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\DS_DataBase.h"
                         ,0xfa,L"");
      if (!bVar3) {
        *(undefined8 *)param_1 = 0;
        local_1e0 = 0;
        FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e0);
        return (TWeakObjectPtr<UDS_CharDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
      pcVar2 = (code *)swi(3);
      TVar9.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_CharDataSet,FWeakObjectPtr>)TVar9.WeakPtr;
    }
    pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
    UDS_DataSetContainer::AddDataSet(pUVar5,Entity,pUVar8);
    local_1d8 = pUVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    FWeakObjectPtr::operator=(&local_200,(FObjectPtr)&local_1d8);
  }
  pUVar6 = FWeakObjectPtr::Get(&local_200);
  if (pUVar6 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_UDS_CharDataSet_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) goto LAB_14ba41461;
  }
  pUVar6 = (UObject *)0x0;
LAB_14ba41461:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_1f8.ObjectIndex = 0;
  local_1f8.ObjectSerialNumber = 0;
  local_1d0 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_1f8,(FObjectPtr)&local_1d0);
  *(FWeakObjectPtr *)param_1 = local_1f8;
  return (TWeakObjectPtr<UDS_CharDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// Get @ 14ba414f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_ContentDataSet,FWeakObjectPtr> __cdecl
TDS_DataSetGetter<UDS_ContentDataSet>::Get(ulong64 param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_DataManager *this;
  UDS_LogManager *pUVar4;
  UDS_DataSetContainer *pUVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UDS_DataSetBase *pUVar8;
  TWeakObjectPtr<UDS_ContentDataSet,FWeakObjectPtr> TVar9;
  longlong *plVar10;
  undefined1 auStackY_248 [32];
  FWeakObjectPtr local_208;
  FWeakObjectPtr local_200;
  FWeakObjectPtr local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  UDS_DataSetBase *local_1d8;
  UObject *local_1d0;
  undefined1 local_1c8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_248;
  this = UDS_DataManager::GetInst();
  if (this == (UDS_DataManager *)0x0) {
    *(undefined8 *)param_1 = 0;
    local_1f0 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1f0);
    return (TWeakObjectPtr<UDS_ContentDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  UDS_DataManager::GetDataSetContainer(this,(ulong64)&local_208);
  bVar3 = FWeakObjectPtr::IsValid(&local_208);
  if (!bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"TDS_DataSetGetter<class UDS_ContentDataSet>::Get",0x30,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_148.Ptr,0xee,L"Not ExistDataSetContainer. EntityID : %llu");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    *(undefined8 *)param_1 = 0;
    local_1e8 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e8);
    return (TWeakObjectPtr<UDS_ContentDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
  UDS_DataSetContainer::GetDataSet(pUVar5,(EDS_DataType)&local_200);
  bVar3 = FWeakObjectPtr::IsValid(&local_200);
  if (!bVar3) {
    pUVar6 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UDS_ContentDataSet_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1c8,pUVar7);
    local_1c8._8_8_ = pUVar6;
    pUVar8 = (UDS_DataSetBase *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
    if (local_1c8._64_8_ != 0) {
      plVar10 = (longlong *)(local_1c8 + 0x50);
      if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_1c8._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if (pUVar8 == (UDS_DataSetBase *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\DS_DataBase.h"
                         ,0xfa,L"");
      if (!bVar3) {
        *(undefined8 *)param_1 = 0;
        local_1e0 = 0;
        FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e0);
        return (TWeakObjectPtr<UDS_ContentDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
      pcVar2 = (code *)swi(3);
      TVar9.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_ContentDataSet,FWeakObjectPtr>)TVar9.WeakPtr;
    }
    pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
    UDS_DataSetContainer::AddDataSet(pUVar5,Content,pUVar8);
    local_1d8 = pUVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    FWeakObjectPtr::operator=(&local_200,(FObjectPtr)&local_1d8);
  }
  pUVar6 = FWeakObjectPtr::Get(&local_200);
  if (pUVar6 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_UDS_ContentDataSet_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) goto LAB_14ba41747;
  }
  pUVar6 = (UObject *)0x0;
LAB_14ba41747:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_1f8.ObjectIndex = 0;
  local_1f8.ObjectSerialNumber = 0;
  local_1d0 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_1f8,(FObjectPtr)&local_1d0);
  *(FWeakObjectPtr *)param_1 = local_1f8;
  return (TWeakObjectPtr<UDS_ContentDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// Get @ 14ba417d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_CustomizeDataSet,FWeakObjectPtr> __cdecl
TDS_DataSetGetter<UDS_CustomizeDataSet>::Get(ulong64 param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_DataManager *this;
  UDS_LogManager *pUVar4;
  UDS_DataSetContainer *pUVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UDS_DataSetBase *pUVar8;
  TWeakObjectPtr<UDS_CustomizeDataSet,FWeakObjectPtr> TVar9;
  longlong *plVar10;
  undefined1 auStackY_248 [32];
  FWeakObjectPtr local_208;
  FWeakObjectPtr local_200;
  FWeakObjectPtr local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  UDS_DataSetBase *local_1d8;
  UObject *local_1d0;
  undefined1 local_1c8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_248;
  this = UDS_DataManager::GetInst();
  if (this == (UDS_DataManager *)0x0) {
    *(undefined8 *)param_1 = 0;
    local_1f0 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1f0);
    return (TWeakObjectPtr<UDS_CustomizeDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  UDS_DataManager::GetDataSetContainer(this,(ulong64)&local_208);
  bVar3 = FWeakObjectPtr::IsValid(&local_208);
  if (!bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"TDS_DataSetGetter<class UDS_CustomizeDataSet>::Get",0x32,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_148.Ptr,0xee,L"Not ExistDataSetContainer. EntityID : %llu");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    *(undefined8 *)param_1 = 0;
    local_1e8 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e8);
    return (TWeakObjectPtr<UDS_CustomizeDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
  UDS_DataSetContainer::GetDataSet(pUVar5,(EDS_DataType)&local_200);
  bVar3 = FWeakObjectPtr::IsValid(&local_200);
  if (!bVar3) {
    pUVar6 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UDS_CustomizeDataSet_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1c8,pUVar7);
    local_1c8._8_8_ = pUVar6;
    pUVar8 = (UDS_DataSetBase *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
    if (local_1c8._64_8_ != 0) {
      plVar10 = (longlong *)(local_1c8 + 0x50);
      if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_1c8._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if (pUVar8 == (UDS_DataSetBase *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\DS_DataBase.h"
                         ,0xfa,L"");
      if (!bVar3) {
        *(undefined8 *)param_1 = 0;
        local_1e0 = 0;
        FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e0);
        return (TWeakObjectPtr<UDS_CustomizeDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
      pcVar2 = (code *)swi(3);
      TVar9.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_CustomizeDataSet,FWeakObjectPtr>)TVar9.WeakPtr;
    }
    pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
    UDS_DataSetContainer::AddDataSet(pUVar5,Customize,pUVar8);
    local_1d8 = pUVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    FWeakObjectPtr::operator=(&local_200,(FObjectPtr)&local_1d8);
  }
  pUVar6 = FWeakObjectPtr::Get(&local_200);
  if (pUVar6 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_UDS_CustomizeDataSet_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) goto LAB_14ba41a27;
  }
  pUVar6 = (UObject *)0x0;
LAB_14ba41a27:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_1f8.ObjectIndex = 0;
  local_1f8.ObjectSerialNumber = 0;
  local_1d0 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_1f8,(FObjectPtr)&local_1d0);
  *(FWeakObjectPtr *)param_1 = local_1f8;
  return (TWeakObjectPtr<UDS_CustomizeDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// Get @ 14ba41ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_DeathDataSet,FWeakObjectPtr> __cdecl
TDS_DataSetGetter<UDS_DeathDataSet>::Get(ulong64 param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_DataManager *this;
  UDS_LogManager *pUVar4;
  UDS_DataSetContainer *pUVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UDS_DataSetBase *pUVar8;
  TWeakObjectPtr<UDS_DeathDataSet,FWeakObjectPtr> TVar9;
  longlong *plVar10;
  undefined1 auStackY_248 [32];
  FWeakObjectPtr local_208;
  FWeakObjectPtr local_200;
  FWeakObjectPtr local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  UDS_DataSetBase *local_1d8;
  UObject *local_1d0;
  undefined1 local_1c8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_248;
  this = UDS_DataManager::GetInst();
  if (this == (UDS_DataManager *)0x0) {
    *(undefined8 *)param_1 = 0;
    local_1f0 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1f0);
    return (TWeakObjectPtr<UDS_DeathDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  UDS_DataManager::GetDataSetContainer(this,(ulong64)&local_208);
  bVar3 = FWeakObjectPtr::IsValid(&local_208);
  if (!bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"TDS_DataSetGetter<class UDS_DeathDataSet>::Get",0x2e,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_148.Ptr,0xee,L"Not ExistDataSetContainer. EntityID : %llu");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    *(undefined8 *)param_1 = 0;
    local_1e8 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e8);
    return (TWeakObjectPtr<UDS_DeathDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
  UDS_DataSetContainer::GetDataSet(pUVar5,(EDS_DataType)&local_200);
  bVar3 = FWeakObjectPtr::IsValid(&local_200);
  if (!bVar3) {
    pUVar6 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UDS_DeathDataSet_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1c8,pUVar7);
    local_1c8._8_8_ = pUVar6;
    pUVar8 = (UDS_DataSetBase *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
    if (local_1c8._64_8_ != 0) {
      plVar10 = (longlong *)(local_1c8 + 0x50);
      if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_1c8._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if (pUVar8 == (UDS_DataSetBase *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\DS_DataBase.h"
                         ,0xfa,L"");
      if (!bVar3) {
        *(undefined8 *)param_1 = 0;
        local_1e0 = 0;
        FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e0);
        return (TWeakObjectPtr<UDS_DeathDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
      pcVar2 = (code *)swi(3);
      TVar9.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_DeathDataSet,FWeakObjectPtr>)TVar9.WeakPtr;
    }
    pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
    UDS_DataSetContainer::AddDataSet(pUVar5,Death,pUVar8);
    local_1d8 = pUVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    FWeakObjectPtr::operator=(&local_200,(FObjectPtr)&local_1d8);
  }
  pUVar6 = FWeakObjectPtr::Get(&local_200);
  if (pUVar6 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_UDS_DeathDataSet_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) goto LAB_14ba41d07;
  }
  pUVar6 = (UObject *)0x0;
LAB_14ba41d07:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_1f8.ObjectIndex = 0;
  local_1f8.ObjectSerialNumber = 0;
  local_1d0 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_1f8,(FObjectPtr)&local_1d0);
  *(FWeakObjectPtr *)param_1 = local_1f8;
  return (TWeakObjectPtr<UDS_DeathDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// Get @ 14ba41d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_DungeonRecordDataSet,FWeakObjectPtr> __cdecl
TDS_DataSetGetter<UDS_DungeonRecordDataSet>::Get(ulong64 param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_DataManager *this;
  UDS_LogManager *pUVar4;
  UDS_DataSetContainer *pUVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UDS_DataSetBase *pUVar8;
  TWeakObjectPtr<UDS_DungeonRecordDataSet,FWeakObjectPtr> TVar9;
  longlong *plVar10;
  undefined1 auStackY_248 [32];
  FWeakObjectPtr local_208;
  FWeakObjectPtr local_200;
  FWeakObjectPtr local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  UDS_DataSetBase *local_1d8;
  UObject *local_1d0;
  undefined1 local_1c8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_248;
  this = UDS_DataManager::GetInst();
  if (this == (UDS_DataManager *)0x0) {
    *(undefined8 *)param_1 = 0;
    local_1f0 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1f0);
    return (TWeakObjectPtr<UDS_DungeonRecordDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  UDS_DataManager::GetDataSetContainer(this,(ulong64)&local_208);
  bVar3 = FWeakObjectPtr::IsValid(&local_208);
  if (!bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"TDS_DataSetGetter<class UDS_DungeonRecordDataSet>::Get",0x36,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_148.Ptr,0xee,L"Not ExistDataSetContainer. EntityID : %llu");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    *(undefined8 *)param_1 = 0;
    local_1e8 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e8);
    return (TWeakObjectPtr<UDS_DungeonRecordDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
  UDS_DataSetContainer::GetDataSet(pUVar5,(EDS_DataType)&local_200);
  bVar3 = FWeakObjectPtr::IsValid(&local_200);
  if (!bVar3) {
    pUVar6 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UDS_DungeonRecordDataSet_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1c8,pUVar7);
    local_1c8._8_8_ = pUVar6;
    pUVar8 = (UDS_DataSetBase *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
    if (local_1c8._64_8_ != 0) {
      plVar10 = (longlong *)(local_1c8 + 0x50);
      if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_1c8._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if (pUVar8 == (UDS_DataSetBase *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\DS_DataBase.h"
                         ,0xfa,L"");
      if (!bVar3) {
        *(undefined8 *)param_1 = 0;
        local_1e0 = 0;
        FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e0);
        return (TWeakObjectPtr<UDS_DungeonRecordDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
      pcVar2 = (code *)swi(3);
      TVar9.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_DungeonRecordDataSet,FWeakObjectPtr>)TVar9.WeakPtr;
    }
    pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
    UDS_DataSetContainer::AddDataSet(pUVar5,DungeonRecord,pUVar8);
    local_1d8 = pUVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    FWeakObjectPtr::operator=(&local_200,(FObjectPtr)&local_1d8);
  }
  pUVar6 = FWeakObjectPtr::Get(&local_200);
  if (pUVar6 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_UDS_DungeonRecordDataSet_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) goto LAB_14ba41fe7;
  }
  pUVar6 = (UObject *)0x0;
LAB_14ba41fe7:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_1f8.ObjectIndex = 0;
  local_1f8.ObjectSerialNumber = 0;
  local_1d0 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_1f8,(FObjectPtr)&local_1d0);
  *(FWeakObjectPtr *)param_1 = local_1f8;
  return (TWeakObjectPtr<UDS_DungeonRecordDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// Get @ 14ba42070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_InteractionDataSet,FWeakObjectPtr> __cdecl
TDS_DataSetGetter<UDS_InteractionDataSet>::Get(ulong64 param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_DataManager *this;
  UDS_LogManager *pUVar4;
  UDS_DataSetContainer *pUVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UDS_DataSetBase *pUVar8;
  TWeakObjectPtr<UDS_InteractionDataSet,FWeakObjectPtr> TVar9;
  longlong *plVar10;
  undefined1 auStackY_248 [32];
  FWeakObjectPtr local_208;
  FWeakObjectPtr local_200;
  FWeakObjectPtr local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  UDS_DataSetBase *local_1d8;
  UObject *local_1d0;
  undefined1 local_1c8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_248;
  this = UDS_DataManager::GetInst();
  if (this == (UDS_DataManager *)0x0) {
    *(undefined8 *)param_1 = 0;
    local_1f0 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1f0);
    return (TWeakObjectPtr<UDS_InteractionDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  UDS_DataManager::GetDataSetContainer(this,(ulong64)&local_208);
  bVar3 = FWeakObjectPtr::IsValid(&local_208);
  if (!bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"TDS_DataSetGetter<class UDS_InteractionDataSet>::Get",0x34,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_148.Ptr,0xee,L"Not ExistDataSetContainer. EntityID : %llu");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    *(undefined8 *)param_1 = 0;
    local_1e8 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e8);
    return (TWeakObjectPtr<UDS_InteractionDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
  UDS_DataSetContainer::GetDataSet(pUVar5,(EDS_DataType)&local_200);
  bVar3 = FWeakObjectPtr::IsValid(&local_200);
  if (!bVar3) {
    pUVar6 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UDS_InteractionDataSet_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1c8,pUVar7);
    local_1c8._8_8_ = pUVar6;
    pUVar8 = (UDS_DataSetBase *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
    if (local_1c8._64_8_ != 0) {
      plVar10 = (longlong *)(local_1c8 + 0x50);
      if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_1c8._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if (pUVar8 == (UDS_DataSetBase *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\DS_DataBase.h"
                         ,0xfa,L"");
      if (!bVar3) {
        *(undefined8 *)param_1 = 0;
        local_1e0 = 0;
        FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e0);
        return (TWeakObjectPtr<UDS_InteractionDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
      pcVar2 = (code *)swi(3);
      TVar9.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_InteractionDataSet,FWeakObjectPtr>)TVar9.WeakPtr;
    }
    pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
    UDS_DataSetContainer::AddDataSet(pUVar5,Interaction,pUVar8);
    local_1d8 = pUVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    FWeakObjectPtr::operator=(&local_200,(FObjectPtr)&local_1d8);
  }
  pUVar6 = FWeakObjectPtr::Get(&local_200);
  if (pUVar6 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_UDS_InteractionDataSet_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) goto LAB_14ba422c7;
  }
  pUVar6 = (UObject *)0x0;
LAB_14ba422c7:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_1f8.ObjectIndex = 0;
  local_1f8.ObjectSerialNumber = 0;
  local_1d0 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_1f8,(FObjectPtr)&local_1d0);
  *(FWeakObjectPtr *)param_1 = local_1f8;
  return (TWeakObjectPtr<UDS_InteractionDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// Get @ 14ba42350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_MailDataSet,FWeakObjectPtr> __cdecl
TDS_DataSetGetter<UDS_MailDataSet>::Get(ulong64 param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_DataManager *this;
  UDS_LogManager *pUVar4;
  UDS_DataSetContainer *pUVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UDS_DataSetBase *pUVar8;
  TWeakObjectPtr<UDS_MailDataSet,FWeakObjectPtr> TVar9;
  longlong *plVar10;
  undefined1 auStackY_248 [32];
  FWeakObjectPtr local_208;
  FWeakObjectPtr local_200;
  FWeakObjectPtr local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  UDS_DataSetBase *local_1d8;
  UObject *local_1d0;
  undefined1 local_1c8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_248;
  this = UDS_DataManager::GetInst();
  if (this == (UDS_DataManager *)0x0) {
    *(undefined8 *)param_1 = 0;
    local_1f0 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1f0);
    return (TWeakObjectPtr<UDS_MailDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  UDS_DataManager::GetDataSetContainer(this,(ulong64)&local_208);
  bVar3 = FWeakObjectPtr::IsValid(&local_208);
  if (!bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"TDS_DataSetGetter<class UDS_MailDataSet>::Get",0x2d,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_148.Ptr,0xee,L"Not ExistDataSetContainer. EntityID : %llu");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    *(undefined8 *)param_1 = 0;
    local_1e8 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e8);
    return (TWeakObjectPtr<UDS_MailDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
  UDS_DataSetContainer::GetDataSet(pUVar5,(EDS_DataType)&local_200);
  bVar3 = FWeakObjectPtr::IsValid(&local_200);
  if (!bVar3) {
    pUVar6 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UDS_MailDataSet_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1c8,pUVar7);
    local_1c8._8_8_ = pUVar6;
    pUVar8 = (UDS_DataSetBase *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
    if (local_1c8._64_8_ != 0) {
      plVar10 = (longlong *)(local_1c8 + 0x50);
      if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_1c8._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if (pUVar8 == (UDS_DataSetBase *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\DS_DataBase.h"
                         ,0xfa,L"");
      if (!bVar3) {
        *(undefined8 *)param_1 = 0;
        local_1e0 = 0;
        FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e0);
        return (TWeakObjectPtr<UDS_MailDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
      pcVar2 = (code *)swi(3);
      TVar9.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_MailDataSet,FWeakObjectPtr>)TVar9.WeakPtr;
    }
    pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
    UDS_DataSetContainer::AddDataSet(pUVar5,Mail,pUVar8);
    local_1d8 = pUVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    FWeakObjectPtr::operator=(&local_200,(FObjectPtr)&local_1d8);
  }
  pUVar6 = FWeakObjectPtr::Get(&local_200);
  if (pUVar6 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_UDS_MailDataSet_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) goto LAB_14ba425a7;
  }
  pUVar6 = (UObject *)0x0;
LAB_14ba425a7:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_1f8.ObjectIndex = 0;
  local_1f8.ObjectSerialNumber = 0;
  local_1d0 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_1f8,(FObjectPtr)&local_1d0);
  *(FWeakObjectPtr *)param_1 = local_1f8;
  return (TWeakObjectPtr<UDS_MailDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// Get @ 14ba42630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_MountLostDataSet,FWeakObjectPtr> __cdecl
TDS_DataSetGetter<UDS_MountLostDataSet>::Get(ulong64 param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_DataManager *this;
  UDS_LogManager *pUVar4;
  UDS_DataSetContainer *pUVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UDS_DataSetBase *pUVar8;
  TWeakObjectPtr<UDS_MountLostDataSet,FWeakObjectPtr> TVar9;
  longlong *plVar10;
  undefined1 auStackY_248 [32];
  FWeakObjectPtr local_208;
  FWeakObjectPtr local_200;
  FWeakObjectPtr local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  UDS_DataSetBase *local_1d8;
  UObject *local_1d0;
  undefined1 local_1c8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_248;
  this = UDS_DataManager::GetInst();
  if (this == (UDS_DataManager *)0x0) {
    *(undefined8 *)param_1 = 0;
    local_1f0 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1f0);
    return (TWeakObjectPtr<UDS_MountLostDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  UDS_DataManager::GetDataSetContainer(this,(ulong64)&local_208);
  bVar3 = FWeakObjectPtr::IsValid(&local_208);
  if (!bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"TDS_DataSetGetter<class UDS_MountLostDataSet>::Get",0x32,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_148.Ptr,0xee,L"Not ExistDataSetContainer. EntityID : %llu");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    *(undefined8 *)param_1 = 0;
    local_1e8 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e8);
    return (TWeakObjectPtr<UDS_MountLostDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
  UDS_DataSetContainer::GetDataSet(pUVar5,(EDS_DataType)&local_200);
  bVar3 = FWeakObjectPtr::IsValid(&local_200);
  if (!bVar3) {
    pUVar6 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UDS_MountLostDataSet_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1c8,pUVar7);
    local_1c8._8_8_ = pUVar6;
    pUVar8 = (UDS_DataSetBase *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
    if (local_1c8._64_8_ != 0) {
      plVar10 = (longlong *)(local_1c8 + 0x50);
      if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_1c8._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if (pUVar8 == (UDS_DataSetBase *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\DS_DataBase.h"
                         ,0xfa,L"");
      if (!bVar3) {
        *(undefined8 *)param_1 = 0;
        local_1e0 = 0;
        FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e0);
        return (TWeakObjectPtr<UDS_MountLostDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
      pcVar2 = (code *)swi(3);
      TVar9.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_MountLostDataSet,FWeakObjectPtr>)TVar9.WeakPtr;
    }
    pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
    UDS_DataSetContainer::AddDataSet(pUVar5,MountLost,pUVar8);
    local_1d8 = pUVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    FWeakObjectPtr::operator=(&local_200,(FObjectPtr)&local_1d8);
  }
  pUVar6 = FWeakObjectPtr::Get(&local_200);
  if (pUVar6 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_UDS_MountLostDataSet_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) goto LAB_14ba42887;
  }
  pUVar6 = (UObject *)0x0;
LAB_14ba42887:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_1f8.ObjectIndex = 0;
  local_1f8.ObjectSerialNumber = 0;
  local_1d0 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_1f8,(FObjectPtr)&local_1d0);
  *(FWeakObjectPtr *)param_1 = local_1f8;
  return (TWeakObjectPtr<UDS_MountLostDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// Get @ 14ba42910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_NpcRelationDataSet,FWeakObjectPtr> __cdecl
TDS_DataSetGetter<UDS_NpcRelationDataSet>::Get(ulong64 param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_DataManager *this;
  UDS_LogManager *pUVar4;
  UDS_DataSetContainer *pUVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UDS_DataSetBase *pUVar8;
  TWeakObjectPtr<UDS_NpcRelationDataSet,FWeakObjectPtr> TVar9;
  longlong *plVar10;
  undefined1 auStackY_248 [32];
  FWeakObjectPtr local_208;
  FWeakObjectPtr local_200;
  FWeakObjectPtr local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  UDS_DataSetBase *local_1d8;
  UObject *local_1d0;
  undefined1 local_1c8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_248;
  this = UDS_DataManager::GetInst();
  if (this == (UDS_DataManager *)0x0) {
    *(undefined8 *)param_1 = 0;
    local_1f0 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1f0);
    return (TWeakObjectPtr<UDS_NpcRelationDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  UDS_DataManager::GetDataSetContainer(this,(ulong64)&local_208);
  bVar3 = FWeakObjectPtr::IsValid(&local_208);
  if (!bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"TDS_DataSetGetter<class UDS_NpcRelationDataSet>::Get",0x34,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_148.Ptr,0xee,L"Not ExistDataSetContainer. EntityID : %llu");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    *(undefined8 *)param_1 = 0;
    local_1e8 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e8);
    return (TWeakObjectPtr<UDS_NpcRelationDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
  UDS_DataSetContainer::GetDataSet(pUVar5,(EDS_DataType)&local_200);
  bVar3 = FWeakObjectPtr::IsValid(&local_200);
  if (!bVar3) {
    pUVar6 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UDS_NpcRelationDataSet_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1c8,pUVar7);
    local_1c8._8_8_ = pUVar6;
    pUVar8 = (UDS_DataSetBase *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
    if (local_1c8._64_8_ != 0) {
      plVar10 = (longlong *)(local_1c8 + 0x50);
      if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_1c8._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if (pUVar8 == (UDS_DataSetBase *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\DS_DataBase.h"
                         ,0xfa,L"");
      if (!bVar3) {
        *(undefined8 *)param_1 = 0;
        local_1e0 = 0;
        FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e0);
        return (TWeakObjectPtr<UDS_NpcRelationDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
      pcVar2 = (code *)swi(3);
      TVar9.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_NpcRelationDataSet,FWeakObjectPtr>)TVar9.WeakPtr;
    }
    pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
    UDS_DataSetContainer::AddDataSet(pUVar5,NpcRelation,pUVar8);
    local_1d8 = pUVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    FWeakObjectPtr::operator=(&local_200,(FObjectPtr)&local_1d8);
  }
  pUVar6 = FWeakObjectPtr::Get(&local_200);
  if (pUVar6 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_UDS_NpcRelationDataSet_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) goto LAB_14ba42b67;
  }
  pUVar6 = (UObject *)0x0;
LAB_14ba42b67:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_1f8.ObjectIndex = 0;
  local_1f8.ObjectSerialNumber = 0;
  local_1d0 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_1f8,(FObjectPtr)&local_1d0);
  *(FWeakObjectPtr *)param_1 = local_1f8;
  return (TWeakObjectPtr<UDS_NpcRelationDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// Get @ 14ba42bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_PlayerDataSet,FWeakObjectPtr> __cdecl
TDS_DataSetGetter<UDS_PlayerDataSet>::Get(ulong64 param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_DataManager *this;
  UDS_LogManager *pUVar4;
  UDS_DataSetContainer *pUVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UDS_DataSetBase *pUVar8;
  TWeakObjectPtr<UDS_PlayerDataSet,FWeakObjectPtr> TVar9;
  longlong *plVar10;
  undefined1 auStackY_248 [32];
  FWeakObjectPtr local_208;
  FWeakObjectPtr local_200;
  FWeakObjectPtr local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  UDS_DataSetBase *local_1d8;
  UObject *local_1d0;
  undefined1 local_1c8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_248;
  this = UDS_DataManager::GetInst();
  if (this == (UDS_DataManager *)0x0) {
    *(undefined8 *)param_1 = 0;
    local_1f0 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1f0);
    return (TWeakObjectPtr<UDS_PlayerDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  UDS_DataManager::GetDataSetContainer(this,(ulong64)&local_208);
  bVar3 = FWeakObjectPtr::IsValid(&local_208);
  if (!bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"TDS_DataSetGetter<class UDS_PlayerDataSet>::Get",0x2f,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_148.Ptr,0xee,L"Not ExistDataSetContainer. EntityID : %llu");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    *(undefined8 *)param_1 = 0;
    local_1e8 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e8);
    return (TWeakObjectPtr<UDS_PlayerDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
  UDS_DataSetContainer::GetDataSet(pUVar5,(EDS_DataType)&local_200);
  bVar3 = FWeakObjectPtr::IsValid(&local_200);
  if (!bVar3) {
    pUVar6 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UDS_PlayerDataSet_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1c8,pUVar7);
    local_1c8._8_8_ = pUVar6;
    pUVar8 = (UDS_DataSetBase *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
    if (local_1c8._64_8_ != 0) {
      plVar10 = (longlong *)(local_1c8 + 0x50);
      if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_1c8._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if (pUVar8 == (UDS_DataSetBase *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\DS_DataBase.h"
                         ,0xfa,L"");
      if (!bVar3) {
        *(undefined8 *)param_1 = 0;
        local_1e0 = 0;
        FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e0);
        return (TWeakObjectPtr<UDS_PlayerDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
      pcVar2 = (code *)swi(3);
      TVar9.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_PlayerDataSet,FWeakObjectPtr>)TVar9.WeakPtr;
    }
    pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
    UDS_DataSetContainer::AddDataSet(pUVar5,Player,pUVar8);
    local_1d8 = pUVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    FWeakObjectPtr::operator=(&local_200,(FObjectPtr)&local_1d8);
  }
  pUVar6 = FWeakObjectPtr::Get(&local_200);
  if (pUVar6 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_UDS_PlayerDataSet_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) goto LAB_14ba42e47;
  }
  pUVar6 = (UObject *)0x0;
LAB_14ba42e47:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_1f8.ObjectIndex = 0;
  local_1f8.ObjectSerialNumber = 0;
  local_1d0 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_1f8,(FObjectPtr)&local_1d0);
  *(FWeakObjectPtr *)param_1 = local_1f8;
  return (TWeakObjectPtr<UDS_PlayerDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// Get @ 14ba42ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_RingCommandDeckDataSet,FWeakObjectPtr> __cdecl
TDS_DataSetGetter<UDS_RingCommandDeckDataSet>::Get(ulong64 param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_DataManager *this;
  UDS_LogManager *pUVar4;
  UDS_DataSetContainer *pUVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UDS_DataSetBase *pUVar8;
  TWeakObjectPtr<UDS_RingCommandDeckDataSet,FWeakObjectPtr> TVar9;
  longlong *plVar10;
  undefined1 auStackY_248 [32];
  FWeakObjectPtr local_208;
  FWeakObjectPtr local_200;
  FWeakObjectPtr local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  UDS_DataSetBase *local_1d8;
  UObject *local_1d0;
  undefined1 local_1c8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_248;
  this = UDS_DataManager::GetInst();
  if (this == (UDS_DataManager *)0x0) {
    *(undefined8 *)param_1 = 0;
    local_1f0 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1f0);
    return (TWeakObjectPtr<UDS_RingCommandDeckDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  UDS_DataManager::GetDataSetContainer(this,(ulong64)&local_208);
  bVar3 = FWeakObjectPtr::IsValid(&local_208);
  if (!bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"TDS_DataSetGetter<class UDS_RingCommandDeckDataSet>::Get",0x38,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_148.Ptr,0xee,L"Not ExistDataSetContainer. EntityID : %llu");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    *(undefined8 *)param_1 = 0;
    local_1e8 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e8);
    return (TWeakObjectPtr<UDS_RingCommandDeckDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
  UDS_DataSetContainer::GetDataSet(pUVar5,(EDS_DataType)&local_200);
  bVar3 = FWeakObjectPtr::IsValid(&local_200);
  if (!bVar3) {
    pUVar6 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UDS_RingCommandDeckDataSet_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1c8,pUVar7);
    local_1c8._8_8_ = pUVar6;
    pUVar8 = (UDS_DataSetBase *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
    if (local_1c8._64_8_ != 0) {
      plVar10 = (longlong *)(local_1c8 + 0x50);
      if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_1c8._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if (pUVar8 == (UDS_DataSetBase *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\DS_DataBase.h"
                         ,0xfa,L"");
      if (!bVar3) {
        *(undefined8 *)param_1 = 0;
        local_1e0 = 0;
        FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e0);
        return (TWeakObjectPtr<UDS_RingCommandDeckDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
      pcVar2 = (code *)swi(3);
      TVar9.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_RingCommandDeckDataSet,FWeakObjectPtr>)TVar9.WeakPtr;
    }
    pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
    UDS_DataSetContainer::AddDataSet(pUVar5,RingCmdSlot,pUVar8);
    local_1d8 = pUVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    FWeakObjectPtr::operator=(&local_200,(FObjectPtr)&local_1d8);
  }
  pUVar6 = FWeakObjectPtr::Get(&local_200);
  if (pUVar6 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_UDS_RingCommandDeckDataSet_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) goto LAB_14ba43127;
  }
  pUVar6 = (UObject *)0x0;
LAB_14ba43127:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_1f8.ObjectIndex = 0;
  local_1f8.ObjectSerialNumber = 0;
  local_1d0 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_1f8,(FObjectPtr)&local_1d0);
  *(FWeakObjectPtr *)param_1 = local_1f8;
  return (TWeakObjectPtr<UDS_RingCommandDeckDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// Get @ 14baa1510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_DropDataSet,FWeakObjectPtr> __cdecl
TDS_DataSetGetter<UDS_DropDataSet>::Get(ulong64 param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_DataManager *this;
  UDS_LogManager *pUVar4;
  UDS_DataSetContainer *pUVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UDS_DataSetBase *pUVar8;
  TWeakObjectPtr<UDS_DropDataSet,FWeakObjectPtr> TVar9;
  longlong *plVar10;
  undefined1 auStackY_248 [32];
  FWeakObjectPtr local_208;
  FWeakObjectPtr local_200;
  FWeakObjectPtr local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  UDS_DataSetBase *local_1d8;
  UObject *local_1d0;
  undefined1 local_1c8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_248;
  this = UDS_DataManager::GetInst();
  if (this == (UDS_DataManager *)0x0) {
    *(undefined8 *)param_1 = 0;
    local_1f0 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1f0);
    return (TWeakObjectPtr<UDS_DropDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  UDS_DataManager::GetDataSetContainer(this,(ulong64)&local_208);
  bVar3 = FWeakObjectPtr::IsValid(&local_208);
  if (!bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"TDS_DataSetGetter<class UDS_DropDataSet>::Get",0x2d,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_148.Ptr,0xee,L"Not ExistDataSetContainer. EntityID : %llu");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    *(undefined8 *)param_1 = 0;
    local_1e8 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e8);
    return (TWeakObjectPtr<UDS_DropDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
  UDS_DataSetContainer::GetDataSet(pUVar5,(EDS_DataType)&local_200);
  bVar3 = FWeakObjectPtr::IsValid(&local_200);
  if (!bVar3) {
    pUVar6 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UDS_DropDataSet_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1c8,pUVar7);
    local_1c8._8_8_ = pUVar6;
    pUVar8 = (UDS_DataSetBase *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
    if (local_1c8._64_8_ != 0) {
      plVar10 = (longlong *)(local_1c8 + 0x50);
      if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_1c8._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if (pUVar8 == (UDS_DataSetBase *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\DS_DataBase.h"
                         ,0xfa,L"");
      if (!bVar3) {
        *(undefined8 *)param_1 = 0;
        local_1e0 = 0;
        FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e0);
        return (TWeakObjectPtr<UDS_DropDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
      pcVar2 = (code *)swi(3);
      TVar9.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_DropDataSet,FWeakObjectPtr>)TVar9.WeakPtr;
    }
    pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
    UDS_DataSetContainer::AddDataSet(pUVar5,Drop,pUVar8);
    local_1d8 = pUVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    FWeakObjectPtr::operator=(&local_200,(FObjectPtr)&local_1d8);
  }
  pUVar6 = FWeakObjectPtr::Get(&local_200);
  if (pUVar6 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_UDS_DropDataSet_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) goto LAB_14baa1767;
  }
  pUVar6 = (UObject *)0x0;
LAB_14baa1767:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_1f8.ObjectIndex = 0;
  local_1f8.ObjectSerialNumber = 0;
  local_1d0 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_1f8,(FObjectPtr)&local_1d0);
  *(FWeakObjectPtr *)param_1 = local_1f8;
  return (TWeakObjectPtr<UDS_DropDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// Get @ 14baa17f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_GuildDataSet,FWeakObjectPtr> __cdecl
TDS_DataSetGetter<UDS_GuildDataSet>::Get(ulong64 param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_DataManager *this;
  UDS_LogManager *pUVar4;
  UDS_DataSetContainer *pUVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UDS_DataSetBase *pUVar8;
  TWeakObjectPtr<UDS_GuildDataSet,FWeakObjectPtr> TVar9;
  longlong *plVar10;
  undefined1 auStackY_248 [32];
  FWeakObjectPtr local_208;
  FWeakObjectPtr local_200;
  FWeakObjectPtr local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  UDS_DataSetBase *local_1d8;
  UObject *local_1d0;
  undefined1 local_1c8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_248;
  this = UDS_DataManager::GetInst();
  if (this == (UDS_DataManager *)0x0) {
    *(undefined8 *)param_1 = 0;
    local_1f0 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1f0);
    return (TWeakObjectPtr<UDS_GuildDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  UDS_DataManager::GetDataSetContainer(this,(ulong64)&local_208);
  bVar3 = FWeakObjectPtr::IsValid(&local_208);
  if (!bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"TDS_DataSetGetter<class UDS_GuildDataSet>::Get",0x2e,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_148.Ptr,0xee,L"Not ExistDataSetContainer. EntityID : %llu");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    *(undefined8 *)param_1 = 0;
    local_1e8 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e8);
    return (TWeakObjectPtr<UDS_GuildDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
  UDS_DataSetContainer::GetDataSet(pUVar5,(EDS_DataType)&local_200);
  bVar3 = FWeakObjectPtr::IsValid(&local_200);
  if (!bVar3) {
    pUVar6 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UDS_GuildDataSet_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1c8,pUVar7);
    local_1c8._8_8_ = pUVar6;
    pUVar8 = (UDS_DataSetBase *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
    if (local_1c8._64_8_ != 0) {
      plVar10 = (longlong *)(local_1c8 + 0x50);
      if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_1c8._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if (pUVar8 == (UDS_DataSetBase *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\DS_DataBase.h"
                         ,0xfa,L"");
      if (!bVar3) {
        *(undefined8 *)param_1 = 0;
        local_1e0 = 0;
        FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e0);
        return (TWeakObjectPtr<UDS_GuildDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
      pcVar2 = (code *)swi(3);
      TVar9.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_GuildDataSet,FWeakObjectPtr>)TVar9.WeakPtr;
    }
    pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
    UDS_DataSetContainer::AddDataSet(pUVar5,Guild,pUVar8);
    local_1d8 = pUVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    FWeakObjectPtr::operator=(&local_200,(FObjectPtr)&local_1d8);
  }
  pUVar6 = FWeakObjectPtr::Get(&local_200);
  if (pUVar6 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_UDS_GuildDataSet_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) goto LAB_14baa1a47;
  }
  pUVar6 = (UObject *)0x0;
LAB_14baa1a47:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_1f8.ObjectIndex = 0;
  local_1f8.ObjectSerialNumber = 0;
  local_1d0 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_1f8,(FObjectPtr)&local_1d0);
  *(FWeakObjectPtr *)param_1 = local_1f8;
  return (TWeakObjectPtr<UDS_GuildDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// Get @ 14baa1ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_GuildListDataSet,FWeakObjectPtr> __cdecl
TDS_DataSetGetter<UDS_GuildListDataSet>::Get(ulong64 param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_DataManager *this;
  UDS_LogManager *pUVar4;
  UDS_DataSetContainer *pUVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UDS_DataSetBase *pUVar8;
  TWeakObjectPtr<UDS_GuildListDataSet,FWeakObjectPtr> TVar9;
  longlong *plVar10;
  undefined1 auStackY_248 [32];
  FWeakObjectPtr local_208;
  FWeakObjectPtr local_200;
  FWeakObjectPtr local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  UDS_DataSetBase *local_1d8;
  UObject *local_1d0;
  undefined1 local_1c8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_248;
  this = UDS_DataManager::GetInst();
  if (this == (UDS_DataManager *)0x0) {
    *(undefined8 *)param_1 = 0;
    local_1f0 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1f0);
    return (TWeakObjectPtr<UDS_GuildListDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  UDS_DataManager::GetDataSetContainer(this,(ulong64)&local_208);
  bVar3 = FWeakObjectPtr::IsValid(&local_208);
  if (!bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"TDS_DataSetGetter<class UDS_GuildListDataSet>::Get",0x32,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_148.Ptr,0xee,L"Not ExistDataSetContainer. EntityID : %llu");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    *(undefined8 *)param_1 = 0;
    local_1e8 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e8);
    return (TWeakObjectPtr<UDS_GuildListDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
  UDS_DataSetContainer::GetDataSet(pUVar5,(EDS_DataType)&local_200);
  bVar3 = FWeakObjectPtr::IsValid(&local_200);
  if (!bVar3) {
    pUVar6 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UDS_GuildListDataSet_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1c8,pUVar7);
    local_1c8._8_8_ = pUVar6;
    pUVar8 = (UDS_DataSetBase *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
    if (local_1c8._64_8_ != 0) {
      plVar10 = (longlong *)(local_1c8 + 0x50);
      if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_1c8._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if (pUVar8 == (UDS_DataSetBase *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\DS_DataBase.h"
                         ,0xfa,L"");
      if (!bVar3) {
        *(undefined8 *)param_1 = 0;
        local_1e0 = 0;
        FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e0);
        return (TWeakObjectPtr<UDS_GuildListDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
      pcVar2 = (code *)swi(3);
      TVar9.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_GuildListDataSet,FWeakObjectPtr>)TVar9.WeakPtr;
    }
    pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
    UDS_DataSetContainer::AddDataSet(pUVar5,GuildList,pUVar8);
    local_1d8 = pUVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    FWeakObjectPtr::operator=(&local_200,(FObjectPtr)&local_1d8);
  }
  pUVar6 = FWeakObjectPtr::Get(&local_200);
  if (pUVar6 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_UDS_GuildListDataSet_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) goto LAB_14baa1d27;
  }
  pUVar6 = (UObject *)0x0;
LAB_14baa1d27:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_1f8.ObjectIndex = 0;
  local_1f8.ObjectSerialNumber = 0;
  local_1d0 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_1f8,(FObjectPtr)&local_1d0);
  *(FWeakObjectPtr *)param_1 = local_1f8;
  return (TWeakObjectPtr<UDS_GuildListDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// Get @ 14baa1db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr> __cdecl
TDS_DataSetGetter<UDS_ItemDataSet>::Get(ulong64 param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_DataManager *this;
  UDS_LogManager *pUVar4;
  UDS_DataSetContainer *pUVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UDS_DataSetBase *pUVar8;
  TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr> TVar9;
  longlong *plVar10;
  undefined1 auStackY_248 [32];
  FWeakObjectPtr local_208;
  FWeakObjectPtr local_200;
  FWeakObjectPtr local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  UDS_DataSetBase *local_1d8;
  UObject *local_1d0;
  undefined1 local_1c8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_248;
  this = UDS_DataManager::GetInst();
  if (this == (UDS_DataManager *)0x0) {
    *(undefined8 *)param_1 = 0;
    local_1f0 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1f0);
    return (TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  UDS_DataManager::GetDataSetContainer(this,(ulong64)&local_208);
  bVar3 = FWeakObjectPtr::IsValid(&local_208);
  if (!bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"TDS_DataSetGetter<class UDS_ItemDataSet>::Get",0x2d,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_148.Ptr,0xee,L"Not ExistDataSetContainer. EntityID : %llu");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    *(undefined8 *)param_1 = 0;
    local_1e8 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e8);
    return (TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
  UDS_DataSetContainer::GetDataSet(pUVar5,(EDS_DataType)&local_200);
  bVar3 = FWeakObjectPtr::IsValid(&local_200);
  if (!bVar3) {
    pUVar6 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UDS_ItemDataSet_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1c8,pUVar7);
    local_1c8._8_8_ = pUVar6;
    pUVar8 = (UDS_DataSetBase *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
    if (local_1c8._64_8_ != 0) {
      plVar10 = (longlong *)(local_1c8 + 0x50);
      if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_1c8._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if (pUVar8 == (UDS_DataSetBase *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\DS_DataBase.h"
                         ,0xfa,L"");
      if (!bVar3) {
        *(undefined8 *)param_1 = 0;
        local_1e0 = 0;
        FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e0);
        return (TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
      pcVar2 = (code *)swi(3);
      TVar9.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr>)TVar9.WeakPtr;
    }
    pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
    UDS_DataSetContainer::AddDataSet(pUVar5,Item,pUVar8);
    local_1d8 = pUVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    FWeakObjectPtr::operator=(&local_200,(FObjectPtr)&local_1d8);
  }
  pUVar6 = FWeakObjectPtr::Get(&local_200);
  if (pUVar6 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_UDS_ItemDataSet_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) goto LAB_14baa2007;
  }
  pUVar6 = (UObject *)0x0;
LAB_14baa2007:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_1f8.ObjectIndex = 0;
  local_1f8.ObjectSerialNumber = 0;
  local_1d0 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_1f8,(FObjectPtr)&local_1d0);
  *(FWeakObjectPtr *)param_1 = local_1f8;
  return (TWeakObjectPtr<UDS_ItemDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// Get @ 14baa2090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_MoneyDataSet,FWeakObjectPtr> __cdecl
TDS_DataSetGetter<UDS_MoneyDataSet>::Get(ulong64 param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_DataManager *this;
  UDS_LogManager *pUVar4;
  UDS_DataSetContainer *pUVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UDS_DataSetBase *pUVar8;
  TWeakObjectPtr<UDS_MoneyDataSet,FWeakObjectPtr> TVar9;
  longlong *plVar10;
  undefined1 auStackY_248 [32];
  FWeakObjectPtr local_208;
  FWeakObjectPtr local_200;
  FWeakObjectPtr local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  UDS_DataSetBase *local_1d8;
  UObject *local_1d0;
  undefined1 local_1c8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_248;
  this = UDS_DataManager::GetInst();
  if (this == (UDS_DataManager *)0x0) {
    *(undefined8 *)param_1 = 0;
    local_1f0 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1f0);
    return (TWeakObjectPtr<UDS_MoneyDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  UDS_DataManager::GetDataSetContainer(this,(ulong64)&local_208);
  bVar3 = FWeakObjectPtr::IsValid(&local_208);
  if (!bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"TDS_DataSetGetter<class UDS_MoneyDataSet>::Get",0x2e,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_148.Ptr,0xee,L"Not ExistDataSetContainer. EntityID : %llu");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    *(undefined8 *)param_1 = 0;
    local_1e8 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e8);
    return (TWeakObjectPtr<UDS_MoneyDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
  UDS_DataSetContainer::GetDataSet(pUVar5,(EDS_DataType)&local_200);
  bVar3 = FWeakObjectPtr::IsValid(&local_200);
  if (!bVar3) {
    pUVar6 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UDS_MoneyDataSet_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1c8,pUVar7);
    local_1c8._8_8_ = pUVar6;
    pUVar8 = (UDS_DataSetBase *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
    if (local_1c8._64_8_ != 0) {
      plVar10 = (longlong *)(local_1c8 + 0x50);
      if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_1c8._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if (pUVar8 == (UDS_DataSetBase *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\DS_DataBase.h"
                         ,0xfa,L"");
      if (!bVar3) {
        *(undefined8 *)param_1 = 0;
        local_1e0 = 0;
        FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e0);
        return (TWeakObjectPtr<UDS_MoneyDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
      pcVar2 = (code *)swi(3);
      TVar9.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_MoneyDataSet,FWeakObjectPtr>)TVar9.WeakPtr;
    }
    pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
    UDS_DataSetContainer::AddDataSet(pUVar5,Money,pUVar8);
    local_1d8 = pUVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    FWeakObjectPtr::operator=(&local_200,(FObjectPtr)&local_1d8);
  }
  pUVar6 = FWeakObjectPtr::Get(&local_200);
  if (pUVar6 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_UDS_MoneyDataSet_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) goto LAB_14baa22e7;
  }
  pUVar6 = (UObject *)0x0;
LAB_14baa22e7:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_1f8.ObjectIndex = 0;
  local_1f8.ObjectSerialNumber = 0;
  local_1d0 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_1f8,(FObjectPtr)&local_1d0);
  *(FWeakObjectPtr *)param_1 = local_1f8;
  return (TWeakObjectPtr<UDS_MoneyDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// Get @ 14baa2370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_PlayerSkillDataSet,FWeakObjectPtr> __cdecl
TDS_DataSetGetter<UDS_PlayerSkillDataSet>::Get(ulong64 param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_DataManager *this;
  UDS_LogManager *pUVar4;
  UDS_DataSetContainer *pUVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UDS_DataSetBase *pUVar8;
  TWeakObjectPtr<UDS_PlayerSkillDataSet,FWeakObjectPtr> TVar9;
  longlong *plVar10;
  undefined1 auStackY_248 [32];
  FWeakObjectPtr local_208;
  FWeakObjectPtr local_200;
  FWeakObjectPtr local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  UDS_DataSetBase *local_1d8;
  UObject *local_1d0;
  undefined1 local_1c8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_248;
  this = UDS_DataManager::GetInst();
  if (this == (UDS_DataManager *)0x0) {
    *(undefined8 *)param_1 = 0;
    local_1f0 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1f0);
    return (TWeakObjectPtr<UDS_PlayerSkillDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  UDS_DataManager::GetDataSetContainer(this,(ulong64)&local_208);
  bVar3 = FWeakObjectPtr::IsValid(&local_208);
  if (!bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"TDS_DataSetGetter<class UDS_PlayerSkillDataSet>::Get",0x34,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_148.Ptr,0xee,L"Not ExistDataSetContainer. EntityID : %llu");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    *(undefined8 *)param_1 = 0;
    local_1e8 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e8);
    return (TWeakObjectPtr<UDS_PlayerSkillDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
  UDS_DataSetContainer::GetDataSet(pUVar5,(EDS_DataType)&local_200);
  bVar3 = FWeakObjectPtr::IsValid(&local_200);
  if (!bVar3) {
    pUVar6 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UDS_PlayerSkillDataSet_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1c8,pUVar7);
    local_1c8._8_8_ = pUVar6;
    pUVar8 = (UDS_DataSetBase *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
    if (local_1c8._64_8_ != 0) {
      plVar10 = (longlong *)(local_1c8 + 0x50);
      if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_1c8._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if (pUVar8 == (UDS_DataSetBase *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\DS_DataBase.h"
                         ,0xfa,L"");
      if (!bVar3) {
        *(undefined8 *)param_1 = 0;
        local_1e0 = 0;
        FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e0);
        return (TWeakObjectPtr<UDS_PlayerSkillDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
      pcVar2 = (code *)swi(3);
      TVar9.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_PlayerSkillDataSet,FWeakObjectPtr>)TVar9.WeakPtr;
    }
    pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
    UDS_DataSetContainer::AddDataSet(pUVar5,PlayerSkillData,pUVar8);
    local_1d8 = pUVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    FWeakObjectPtr::operator=(&local_200,(FObjectPtr)&local_1d8);
  }
  pUVar6 = FWeakObjectPtr::Get(&local_200);
  if (pUVar6 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_UDS_PlayerSkillDataSet_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) goto LAB_14baa25c7;
  }
  pUVar6 = (UObject *)0x0;
LAB_14baa25c7:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_1f8.ObjectIndex = 0;
  local_1f8.ObjectSerialNumber = 0;
  local_1d0 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_1f8,(FObjectPtr)&local_1d0);
  *(FWeakObjectPtr *)param_1 = local_1f8;
  return (TWeakObjectPtr<UDS_PlayerSkillDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// Get @ 14baa2650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_QuestDataSet,FWeakObjectPtr> __cdecl
TDS_DataSetGetter<UDS_QuestDataSet>::Get(ulong64 param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_DataManager *this;
  UDS_LogManager *pUVar4;
  UDS_DataSetContainer *pUVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UDS_DataSetBase *pUVar8;
  TWeakObjectPtr<UDS_QuestDataSet,FWeakObjectPtr> TVar9;
  longlong *plVar10;
  undefined1 auStackY_248 [32];
  FWeakObjectPtr local_208;
  FWeakObjectPtr local_200;
  FWeakObjectPtr local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  UDS_DataSetBase *local_1d8;
  UObject *local_1d0;
  undefined1 local_1c8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_248;
  this = UDS_DataManager::GetInst();
  if (this == (UDS_DataManager *)0x0) {
    *(undefined8 *)param_1 = 0;
    local_1f0 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1f0);
    return (TWeakObjectPtr<UDS_QuestDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  UDS_DataManager::GetDataSetContainer(this,(ulong64)&local_208);
  bVar3 = FWeakObjectPtr::IsValid(&local_208);
  if (!bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"TDS_DataSetGetter<class UDS_QuestDataSet>::Get",0x2e,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_148.Ptr,0xee,L"Not ExistDataSetContainer. EntityID : %llu");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    *(undefined8 *)param_1 = 0;
    local_1e8 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e8);
    return (TWeakObjectPtr<UDS_QuestDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
  UDS_DataSetContainer::GetDataSet(pUVar5,(EDS_DataType)&local_200);
  bVar3 = FWeakObjectPtr::IsValid(&local_200);
  if (!bVar3) {
    pUVar6 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UDS_QuestDataSet_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1c8,pUVar7);
    local_1c8._8_8_ = pUVar6;
    pUVar8 = (UDS_DataSetBase *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
    if (local_1c8._64_8_ != 0) {
      plVar10 = (longlong *)(local_1c8 + 0x50);
      if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_1c8._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if (pUVar8 == (UDS_DataSetBase *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\DS_DataBase.h"
                         ,0xfa,L"");
      if (!bVar3) {
        *(undefined8 *)param_1 = 0;
        local_1e0 = 0;
        FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e0);
        return (TWeakObjectPtr<UDS_QuestDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
      pcVar2 = (code *)swi(3);
      TVar9.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_QuestDataSet,FWeakObjectPtr>)TVar9.WeakPtr;
    }
    pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
    UDS_DataSetContainer::AddDataSet(pUVar5,Quest,pUVar8);
    local_1d8 = pUVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    FWeakObjectPtr::operator=(&local_200,(FObjectPtr)&local_1d8);
  }
  pUVar6 = FWeakObjectPtr::Get(&local_200);
  if (pUVar6 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_UDS_QuestDataSet_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) goto LAB_14baa28a7;
  }
  pUVar6 = (UObject *)0x0;
LAB_14baa28a7:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_1f8.ObjectIndex = 0;
  local_1f8.ObjectSerialNumber = 0;
  local_1d0 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_1f8,(FObjectPtr)&local_1d0);
  *(FWeakObjectPtr *)param_1 = local_1f8;
  return (TWeakObjectPtr<UDS_QuestDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// Get @ 14baa2930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_StuffDataSet,FWeakObjectPtr> __cdecl
TDS_DataSetGetter<UDS_StuffDataSet>::Get(ulong64 param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_DataManager *this;
  UDS_LogManager *pUVar4;
  UDS_DataSetContainer *pUVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UDS_DataSetBase *pUVar8;
  TWeakObjectPtr<UDS_StuffDataSet,FWeakObjectPtr> TVar9;
  longlong *plVar10;
  undefined1 auStackY_248 [32];
  FWeakObjectPtr local_208;
  FWeakObjectPtr local_200;
  FWeakObjectPtr local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  UDS_DataSetBase *local_1d8;
  UObject *local_1d0;
  undefined1 local_1c8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_248;
  this = UDS_DataManager::GetInst();
  if (this == (UDS_DataManager *)0x0) {
    *(undefined8 *)param_1 = 0;
    local_1f0 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1f0);
    return (TWeakObjectPtr<UDS_StuffDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  UDS_DataManager::GetDataSetContainer(this,(ulong64)&local_208);
  bVar3 = FWeakObjectPtr::IsValid(&local_208);
  if (!bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"TDS_DataSetGetter<class UDS_StuffDataSet>::Get",0x2e,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_148.Ptr,0xee,L"Not ExistDataSetContainer. EntityID : %llu");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    *(undefined8 *)param_1 = 0;
    local_1e8 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e8);
    return (TWeakObjectPtr<UDS_StuffDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
  UDS_DataSetContainer::GetDataSet(pUVar5,(EDS_DataType)&local_200);
  bVar3 = FWeakObjectPtr::IsValid(&local_200);
  if (!bVar3) {
    pUVar6 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UDS_StuffDataSet_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1c8,pUVar7);
    local_1c8._8_8_ = pUVar6;
    pUVar8 = (UDS_DataSetBase *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
    if (local_1c8._64_8_ != 0) {
      plVar10 = (longlong *)(local_1c8 + 0x50);
      if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_1c8._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if (pUVar8 == (UDS_DataSetBase *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\DS_DataBase.h"
                         ,0xfa,L"");
      if (!bVar3) {
        *(undefined8 *)param_1 = 0;
        local_1e0 = 0;
        FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e0);
        return (TWeakObjectPtr<UDS_StuffDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
      pcVar2 = (code *)swi(3);
      TVar9.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_StuffDataSet,FWeakObjectPtr>)TVar9.WeakPtr;
    }
    pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
    UDS_DataSetContainer::AddDataSet(pUVar5,Entity,pUVar8);
    local_1d8 = pUVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    FWeakObjectPtr::operator=(&local_200,(FObjectPtr)&local_1d8);
  }
  pUVar6 = FWeakObjectPtr::Get(&local_200);
  if (pUVar6 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_UDS_StuffDataSet_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) goto LAB_14baa2b81;
  }
  pUVar6 = (UObject *)0x0;
LAB_14baa2b81:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_1f8.ObjectIndex = 0;
  local_1f8.ObjectSerialNumber = 0;
  local_1d0 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_1f8,(FObjectPtr)&local_1d0);
  *(FWeakObjectPtr *)param_1 = local_1f8;
  return (TWeakObjectPtr<UDS_StuffDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// Get @ 14baa2c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_TicketDataSet,FWeakObjectPtr> __cdecl
TDS_DataSetGetter<UDS_TicketDataSet>::Get(ulong64 param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_DataManager *this;
  UDS_LogManager *pUVar4;
  UDS_DataSetContainer *pUVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UDS_DataSetBase *pUVar8;
  TWeakObjectPtr<UDS_TicketDataSet,FWeakObjectPtr> TVar9;
  longlong *plVar10;
  undefined1 auStackY_248 [32];
  FWeakObjectPtr local_208;
  FWeakObjectPtr local_200;
  FWeakObjectPtr local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  UDS_DataSetBase *local_1d8;
  UObject *local_1d0;
  undefined1 local_1c8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_248;
  this = UDS_DataManager::GetInst();
  if (this == (UDS_DataManager *)0x0) {
    *(undefined8 *)param_1 = 0;
    local_1f0 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1f0);
    return (TWeakObjectPtr<UDS_TicketDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  UDS_DataManager::GetDataSetContainer(this,(ulong64)&local_208);
  bVar3 = FWeakObjectPtr::IsValid(&local_208);
  if (!bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"TDS_DataSetGetter<class UDS_TicketDataSet>::Get",0x2f,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_148.Ptr,0xee,L"Not ExistDataSetContainer. EntityID : %llu");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    *(undefined8 *)param_1 = 0;
    local_1e8 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e8);
    return (TWeakObjectPtr<UDS_TicketDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
  UDS_DataSetContainer::GetDataSet(pUVar5,(EDS_DataType)&local_200);
  bVar3 = FWeakObjectPtr::IsValid(&local_200);
  if (!bVar3) {
    pUVar6 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UDS_TicketDataSet_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1c8,pUVar7);
    local_1c8._8_8_ = pUVar6;
    pUVar8 = (UDS_DataSetBase *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
    if (local_1c8._64_8_ != 0) {
      plVar10 = (longlong *)(local_1c8 + 0x50);
      if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_1c8._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if (pUVar8 == (UDS_DataSetBase *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\DS_DataBase.h"
                         ,0xfa,L"");
      if (!bVar3) {
        *(undefined8 *)param_1 = 0;
        local_1e0 = 0;
        FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e0);
        return (TWeakObjectPtr<UDS_TicketDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
      pcVar2 = (code *)swi(3);
      TVar9.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_TicketDataSet,FWeakObjectPtr>)TVar9.WeakPtr;
    }
    pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
    UDS_DataSetContainer::AddDataSet(pUVar5,Ticket,pUVar8);
    local_1d8 = pUVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    FWeakObjectPtr::operator=(&local_200,(FObjectPtr)&local_1d8);
  }
  pUVar6 = FWeakObjectPtr::Get(&local_200);
  if (pUVar6 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_UDS_TicketDataSet_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) goto LAB_14baa2e67;
  }
  pUVar6 = (UObject *)0x0;
LAB_14baa2e67:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_1f8.ObjectIndex = 0;
  local_1f8.ObjectSerialNumber = 0;
  local_1d0 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_1f8,(FObjectPtr)&local_1d0);
  *(FWeakObjectPtr *)param_1 = local_1f8;
  return (TWeakObjectPtr<UDS_TicketDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// Get @ 14baa2ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_TransportDataSet,FWeakObjectPtr> __cdecl
TDS_DataSetGetter<UDS_TransportDataSet>::Get(ulong64 param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_DataManager *this;
  UDS_LogManager *pUVar4;
  UDS_DataSetContainer *pUVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UDS_DataSetBase *pUVar8;
  TWeakObjectPtr<UDS_TransportDataSet,FWeakObjectPtr> TVar9;
  longlong *plVar10;
  undefined1 auStackY_248 [32];
  FWeakObjectPtr local_208;
  FWeakObjectPtr local_200;
  FWeakObjectPtr local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  UDS_DataSetBase *local_1d8;
  UObject *local_1d0;
  undefined1 local_1c8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_248;
  this = UDS_DataManager::GetInst();
  if (this == (UDS_DataManager *)0x0) {
    *(undefined8 *)param_1 = 0;
    local_1f0 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1f0);
    return (TWeakObjectPtr<UDS_TransportDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  UDS_DataManager::GetDataSetContainer(this,(ulong64)&local_208);
  bVar3 = FWeakObjectPtr::IsValid(&local_208);
  if (!bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"TDS_DataSetGetter<class UDS_TransportDataSet>::Get",0x32,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_148.Ptr,0xee,L"Not ExistDataSetContainer. EntityID : %llu");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    *(undefined8 *)param_1 = 0;
    local_1e8 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e8);
    return (TWeakObjectPtr<UDS_TransportDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
  UDS_DataSetContainer::GetDataSet(pUVar5,(EDS_DataType)&local_200);
  bVar3 = FWeakObjectPtr::IsValid(&local_200);
  if (!bVar3) {
    pUVar6 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UDS_TransportDataSet_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1c8,pUVar7);
    local_1c8._8_8_ = pUVar6;
    pUVar8 = (UDS_DataSetBase *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
    if (local_1c8._64_8_ != 0) {
      plVar10 = (longlong *)(local_1c8 + 0x50);
      if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_1c8._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if (pUVar8 == (UDS_DataSetBase *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\DS_DataBase.h"
                         ,0xfa,L"");
      if (!bVar3) {
        *(undefined8 *)param_1 = 0;
        local_1e0 = 0;
        FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e0);
        return (TWeakObjectPtr<UDS_TransportDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
      pcVar2 = (code *)swi(3);
      TVar9.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_TransportDataSet,FWeakObjectPtr>)TVar9.WeakPtr;
    }
    pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
    UDS_DataSetContainer::AddDataSet(pUVar5,Entity,pUVar8);
    local_1d8 = pUVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    FWeakObjectPtr::operator=(&local_200,(FObjectPtr)&local_1d8);
  }
  pUVar6 = FWeakObjectPtr::Get(&local_200);
  if (pUVar6 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_UDS_TransportDataSet_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) goto LAB_14baa3141;
  }
  pUVar6 = (UObject *)0x0;
LAB_14baa3141:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_1f8.ObjectIndex = 0;
  local_1f8.ObjectSerialNumber = 0;
  local_1d0 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_1f8,(FObjectPtr)&local_1d0);
  *(FWeakObjectPtr *)param_1 = local_1f8;
  return (TWeakObjectPtr<UDS_TransportDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// Get @ 14baa31d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_WaitCompleteDataSet,FWeakObjectPtr> __cdecl
TDS_DataSetGetter<UDS_WaitCompleteDataSet>::Get(ulong64 param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_DataManager *this;
  UDS_LogManager *pUVar4;
  UDS_DataSetContainer *pUVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UDS_DataSetBase *pUVar8;
  TWeakObjectPtr<UDS_WaitCompleteDataSet,FWeakObjectPtr> TVar9;
  longlong *plVar10;
  undefined1 auStackY_248 [32];
  FWeakObjectPtr local_208;
  FWeakObjectPtr local_200;
  FWeakObjectPtr local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  UDS_DataSetBase *local_1d8;
  UObject *local_1d0;
  undefined1 local_1c8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_248;
  this = UDS_DataManager::GetInst();
  if (this == (UDS_DataManager *)0x0) {
    *(undefined8 *)param_1 = 0;
    local_1f0 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1f0);
    return (TWeakObjectPtr<UDS_WaitCompleteDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  UDS_DataManager::GetDataSetContainer(this,(ulong64)&local_208);
  bVar3 = FWeakObjectPtr::IsValid(&local_208);
  if (!bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"TDS_DataSetGetter<class UDS_WaitCompleteDataSet>::Get",0x35,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_148.Ptr,0xee,L"Not ExistDataSetContainer. EntityID : %llu");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    *(undefined8 *)param_1 = 0;
    local_1e8 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e8);
    return (TWeakObjectPtr<UDS_WaitCompleteDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
  UDS_DataSetContainer::GetDataSet(pUVar5,(EDS_DataType)&local_200);
  bVar3 = FWeakObjectPtr::IsValid(&local_200);
  if (!bVar3) {
    pUVar6 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UDS_WaitCompleteDataSet_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1c8,pUVar7);
    local_1c8._8_8_ = pUVar6;
    pUVar8 = (UDS_DataSetBase *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
    if (local_1c8._64_8_ != 0) {
      plVar10 = (longlong *)(local_1c8 + 0x50);
      if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_1c8._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if (pUVar8 == (UDS_DataSetBase *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\DS_DataBase.h"
                         ,0xfa,L"");
      if (!bVar3) {
        *(undefined8 *)param_1 = 0;
        local_1e0 = 0;
        FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e0);
        return (TWeakObjectPtr<UDS_WaitCompleteDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
      pcVar2 = (code *)swi(3);
      TVar9.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_WaitCompleteDataSet,FWeakObjectPtr>)TVar9.WeakPtr;
    }
    pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
    UDS_DataSetContainer::AddDataSet(pUVar5,WaitComplete,pUVar8);
    local_1d8 = pUVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    FWeakObjectPtr::operator=(&local_200,(FObjectPtr)&local_1d8);
  }
  pUVar6 = FWeakObjectPtr::Get(&local_200);
  if (pUVar6 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_UDS_WaitCompleteDataSet_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) goto LAB_14baa3427;
  }
  pUVar6 = (UObject *)0x0;
LAB_14baa3427:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_1f8.ObjectIndex = 0;
  local_1f8.ObjectSerialNumber = 0;
  local_1d0 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_1f8,(FObjectPtr)&local_1d0);
  *(FWeakObjectPtr *)param_1 = local_1f8;
  return (TWeakObjectPtr<UDS_WaitCompleteDataSet,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// Get @ 14bbbac70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_InputData,FWeakObjectPtr> __cdecl
TDS_DataSetGetter<UDS_InputData>::Get(ulong64 param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_DataManager *this;
  UDS_LogManager *pUVar4;
  UDS_DataSetContainer *pUVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UDS_DataSetBase *pUVar8;
  TWeakObjectPtr<UDS_InputData,FWeakObjectPtr> TVar9;
  longlong *plVar10;
  undefined1 auStackY_248 [32];
  FWeakObjectPtr local_208;
  FWeakObjectPtr local_200;
  FWeakObjectPtr local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  UDS_DataSetBase *local_1d8;
  UObject *local_1d0;
  undefined1 local_1c8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_248;
  this = UDS_DataManager::GetInst();
  if (this == (UDS_DataManager *)0x0) {
    *(undefined8 *)param_1 = 0;
    local_1f0 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1f0);
    return (TWeakObjectPtr<UDS_InputData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  UDS_DataManager::GetDataSetContainer(this,(ulong64)&local_208);
  bVar3 = FWeakObjectPtr::IsValid(&local_208);
  if (!bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"TDS_DataSetGetter<class UDS_InputData>::Get",0x2b,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_148.Ptr,0xee,L"Not ExistDataSetContainer. EntityID : %llu");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    *(undefined8 *)param_1 = 0;
    local_1e8 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e8);
    return (TWeakObjectPtr<UDS_InputData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
  UDS_DataSetContainer::GetDataSet(pUVar5,(EDS_DataType)&local_200);
  bVar3 = FWeakObjectPtr::IsValid(&local_200);
  if (!bVar3) {
    pUVar6 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UDS_InputData_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1c8,pUVar7);
    local_1c8._8_8_ = pUVar6;
    pUVar8 = (UDS_DataSetBase *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
    if (local_1c8._64_8_ != 0) {
      plVar10 = (longlong *)(local_1c8 + 0x50);
      if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_1c8._104_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if (pUVar8 == (UDS_DataSetBase *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\DS_DataBase.h"
                         ,0xfa,L"");
      if (!bVar3) {
        *(undefined8 *)param_1 = 0;
        local_1e0 = 0;
        FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_1e0);
        return (TWeakObjectPtr<UDS_InputData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
      pcVar2 = (code *)swi(3);
      TVar9.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_InputData,FWeakObjectPtr>)TVar9.WeakPtr;
    }
    pUVar5 = (UDS_DataSetContainer *)FWeakObjectPtr::Get(&local_208);
    UDS_DataSetContainer::AddDataSet(pUVar5,InputData,pUVar8);
    local_1d8 = pUVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    FWeakObjectPtr::operator=(&local_200,(FObjectPtr)&local_1d8);
  }
  pUVar6 = FWeakObjectPtr::Get(&local_200);
  if (pUVar6 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_UDS_InputData_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) goto LAB_14bbbaec7;
  }
  pUVar6 = (UObject *)0x0;
LAB_14bbbaec7:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_1f8.ObjectIndex = 0;
  local_1f8.ObjectSerialNumber = 0;
  local_1d0 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_1f8,(FObjectPtr)&local_1d0);
  *(FWeakObjectPtr *)param_1 = local_1f8;
  return (TWeakObjectPtr<UDS_InputData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

