// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// StaticClass @ 14b5a6ea0

UClass * __cdecl UDS_StuffData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_StuffData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_StuffData",
               &Z_Registration_Info_UClass_UDS_StuffData.InnerSingleton,
               StaticRegisterNativesUDS_StuffData,0x1a8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_StuffData>,InternalVTableHelperCtorCaller<UDS_StuffData>,
               local_res8,UDS_EntityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_StuffData.InnerSingleton;
}

// UDS_StuffData @ 14b5a9150

UDS_StuffData * __thiscall UDS_StuffData::UDS_StuffData(UDS_StuffData *this,FVTableHelper *param_1)

{
  UDS_EntityData::UDS_EntityData((UDS_EntityData *)this,param_1);
  this->StuffType = None;
  this->_padding_ = (longlong)&___7UDS_StuffData__6B_;
  this->StuffValue = 0;
  this->InteractionTime = 0.0;
  (this->TriggerIDArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriggerIDArray).ArrayNum = 0;
  (this->TriggerIDArray).ArrayMax = 0;
  *(undefined8 *)&this->InteractionStartDelegate = 0;
  *(undefined8 *)&(this->InteractionStartDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->InteractionStartDelegate).field_0x10 = 0;
  *(undefined8 *)&this->InteractionCancelDelegate = 0;
  *(undefined8 *)&(this->InteractionCancelDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->InteractionCancelDelegate).field_0x10 = 0;
  *(undefined8 *)&this->InteractionCompleteDelegate = 0;
  *(undefined8 *)&(this->InteractionCompleteDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->InteractionCompleteDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->InteractionStartDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->InteractionCancelDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->InteractionCompleteDelegate).field_0x18 = 2;
  return this;
}

// UDS_StuffData @ 14b5a9200

UDS_StuffData * __thiscall
UDS_StuffData::UDS_StuffData(UDS_StuffData *this,FObjectInitializer *param_1)

{
  UDS_EntityData::UDS_EntityData((UDS_EntityData *)this,param_1);
  this->StuffType = None;
  this->_padding_ = (longlong)&___7UDS_StuffData__6B_;
  this->StuffValue = 0;
  this->InteractionTime = 0.0;
  (this->TriggerIDArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriggerIDArray).ArrayNum = 0;
  (this->TriggerIDArray).ArrayMax = 0;
  *(undefined8 *)&this->InteractionStartDelegate = 0;
  *(undefined8 *)&(this->InteractionStartDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->InteractionStartDelegate).field_0x10 = 0;
  *(undefined8 *)&this->InteractionCancelDelegate = 0;
  *(undefined8 *)&(this->InteractionCancelDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->InteractionCancelDelegate).field_0x10 = 0;
  *(undefined8 *)&this->InteractionCompleteDelegate = 0;
  *(undefined8 *)&(this->InteractionCompleteDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->InteractionCompleteDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->InteractionStartDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->InteractionCancelDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->InteractionCompleteDelegate).field_0x18 = 2;
  return this;
}

// ~UDS_StuffData @ 14b5a9820

void __thiscall UDS_StuffData::~UDS_StuffData(UDS_StuffData *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UDS_StuffData__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->InteractionCompleteDelegate).field_0x8,
             *(int *)&(this->InteractionCompleteDelegate).field_0x10);
  pvVar1 = *(void **)&(this->InteractionCompleteDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->InteractionCompleteDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->InteractionCancelDelegate).field_0x8,
             *(int *)&(this->InteractionCancelDelegate).field_0x10);
  pvVar1 = *(void **)&(this->InteractionCancelDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->InteractionCancelDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->InteractionStartDelegate).field_0x8,
             *(int *)&(this->InteractionStartDelegate).field_0x10);
  pvVar1 = *(void **)&(this->InteractionStartDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->InteractionStartDelegate);
  pFVar2 = (this->TriggerIDArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_EntityData::~UDS_EntityData((UDS_EntityData *)this);
  return;
}

// GetInteractionTime @ 14b5aa3d0

float __thiscall UDS_StuffData::GetInteractionTime(UDS_StuffData *this)

{
  return this->InteractionTime;
}

// GetPrivateStaticClass @ 14b5aa920

UClass * __cdecl UDS_StuffData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_StuffData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_StuffData",
               &Z_Registration_Info_UClass_UDS_StuffData.InnerSingleton,
               StaticRegisterNativesUDS_StuffData,0x1a8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_StuffData>,InternalVTableHelperCtorCaller<UDS_StuffData>,
               local_res8,UDS_EntityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_StuffData.InnerSingleton;
}

// StaticRegisterNativesUDS_StuffData @ 14b5aafe0

void __cdecl UDS_StuffData::StaticRegisterNativesUDS_StuffData(void)

{
  return;
}

// Created @ 14ba9dba0

void __thiscall UDS_StuffData::Created(UDS_StuffData *this)

{
  return;
}

// Deleted @ 14ba9dd40

void __thiscall UDS_StuffData::Deleted(UDS_StuffData *this)

{
  return;
}

// FindOrAddData @ 14baa1090

TWeakObjectPtr<UDS_StuffData,FWeakObjectPtr> __cdecl
UDS_StuffData::FindOrAddData(ulong64 param_1,ulong64 param_2)

{
  bool in_R8B;
  
  GetData(param_1,param_2,in_R8B);
  return (TWeakObjectPtr<UDS_StuffData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetData @ 14baa7dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_StuffData,FWeakObjectPtr> __cdecl
UDS_StuffData::GetData(ulong64 param_1,ulong64 param_2,bool param_3)

{
  int iVar1;
  bool bVar2;
  UDS_DataSetBase *pUVar3;
  TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> TVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  longlong *plVar7;
  undefined7 in_register_00000081;
  char in_R9B;
  undefined1 auStack_f8 [32];
  FWeakObjectPtr local_d8;
  UObject *local_d0;
  FWeakObjectPtr local_c8;
  undefined1 local_c0 [8];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if (in_R9B == '\0') {
    TDS_DataSetGetter<UDS_StuffDataSet>::Get((ulong64)&local_c8);
    bVar2 = TWeakObjectPtr<UDS_StuffDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_StuffDataSet,FWeakObjectPtr> *)&local_c8,(void *)0x0);
    if (bVar2) goto LAB_14baa805f;
    pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_c8);
    TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_c0);
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
    if (pUVar5 == (UObject *)0x0) {
LAB_14baa7e6b:
      pUVar5 = (UObject *)0x0;
    }
    else {
      pUVar6 = Z_Construct_UClass_UDS_StuffData_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) goto LAB_14baa7e6b;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    local_d8.ObjectIndex = 0;
    local_d8.ObjectSerialNumber = 0;
    local_d0 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    FWeakObjectPtr::operator=(&local_d8,(FObjectPtr)&local_d0);
    bVar2 = TWeakObjectPtr<UDS_StuffData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_StuffData,FWeakObjectPtr> *)&local_d8,(void *)0x0);
    if (!bVar2) {
      *(FWeakObjectPtr *)param_1 = local_d8;
      return (TWeakObjectPtr<UDS_StuffData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
    }
  }
  else {
    TDS_DataSetGetter<UDS_StuffDataSet>::Get((ulong64)&local_c8);
    bVar2 = TWeakObjectPtr<UDS_StuffDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_StuffDataSet,FWeakObjectPtr> *)&local_c8,(void *)0x0);
    if (!bVar2) {
      pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_c8);
      TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_c0);
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
      if (pUVar5 == (UObject *)0x0) {
LAB_14baa7f35:
        pUVar5 = (UObject *)0x0;
      }
      else {
        pUVar6 = Z_Construct_UClass_UDS_StuffData_NoRegister();
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) goto LAB_14baa7f35;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      local_d8.ObjectIndex = 0;
      local_d8.ObjectSerialNumber = 0;
      local_d0 = pUVar5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      FWeakObjectPtr::operator=(&local_d8,(FObjectPtr)&local_d0);
      bVar2 = TWeakObjectPtr<UDS_StuffData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_StuffData,FWeakObjectPtr> *)&local_d8,(void *)0x0);
      if (!bVar2) {
        *(FWeakObjectPtr *)param_1 = local_d8;
        return (TWeakObjectPtr<UDS_StuffData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
      pUVar5 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar5,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar6 = Z_Construct_UClass_UDS_StuffData_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_b8,pUVar6);
      local_b8._8_8_ = pUVar5;
      pUVar5 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
      if (local_b8._64_8_ != 0) {
        plVar7 = (longlong *)(local_b8 + 0x50);
        if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
          plVar7 = (longlong *)local_b8._104_8_;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      if (pUVar5 != (UObject *)0x0) {
        pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_c8);
        local_d0 = pUVar5;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        bVar2 = UDS_DataSetBase::AddData
                          (pUVar3,CONCAT71(in_register_00000081,param_3),
                           (TObjectPtr<UDS_DataBase>)&local_d0);
        if (bVar2) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar5);
          }
          *(undefined8 *)param_1 = 0;
          local_d0 = pUVar5;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar5);
          }
          goto LAB_14baa8066;
        }
      }
    }
  }
LAB_14baa805f:
  *(undefined8 *)param_1 = 0;
  local_d0 = (UObject *)0x0;
LAB_14baa8066:
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_d0);
  return (TWeakObjectPtr<UDS_StuffData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetStuffBaseTable @ 14bab0550

FDS_StuffBaseTableRow * __thiscall UDS_StuffData::GetStuffBaseTable(UDS_StuffData *this)

{
  int iVar1;
  FDS_StuffBaseTableRow *pFVar2;
  
  iVar1 = UDS_DataBase::GetEntityTableID((UDS_DataBase *)this);
  pFVar2 = FDS_StuffBaseTableRow::Get((longlong)iVar1,true);
  return pFVar2;
}

// HasInteractionData @ 14bab26b0

bool __thiscall UDS_StuffData::HasInteractionData(UDS_StuffData *this)

{
  bool bVar1;
  int iVar2;
  UDS_InteractionDataSet *this_00;
  FWeakObjectPtr local_res10 [3];
  
  UDS_DataBase::GetEntityID((UDS_DataBase *)this);
  TDS_DataSetGetter<UDS_InteractionDataSet>::Get((ulong64)local_res10);
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (!bVar1) {
    return false;
  }
  this_00 = (UDS_InteractionDataSet *)FWeakObjectPtr::Get(local_res10);
  iVar2 = UDS_InteractionDataSet::GetInteractionDataCount(this_00);
  return 0 < iVar2;
}

// InitByEntityInfo @ 14bab4ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_StuffData::InitByEntityInfo(UDS_StuffData *this)

{
  int iVar1;
  FDS_StuffBaseTableRow *pFVar2;
  UDS_LogManager *pUVar3;
  FString *pFVar4;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  UDS_EntityData::InitByEntityInfo((UDS_EntityData *)this);
  iVar1 = UDS_DataBase::GetEntityTableID((UDS_DataBase *)this);
  pFVar2 = FDS_StuffBaseTableRow::Get((longlong)iVar1,true);
  if (pFVar2 == (FDS_StuffBaseTableRow *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = (longlong)pFVar2;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_StuffData::InitByEntityInfo",0x1f,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x2c,L"stuffBaseTable is nullptr.");
      if ((FDS_StuffBaseTableRow *)local_138._padding_ != (FDS_StuffBaseTableRow *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    this->StuffType = pFVar2->StuffType;
    this->StuffValue = pFVar2->ID_StuffValue;
    this->InteractionTime = pFVar2->InteractionTime;
    TArray<int,TSizedDefaultAllocator<32>_>::operator=(&this->TriggerIDArray,&pFVar2->ID_Trigger);
    pFVar4 = (FString *)(**(code **)((pFVar2->ID_Name)._padding_ + 8))(&pFVar2->ID_Name);
    ::FString::operator=((FString *)&this->_padding_,pFVar4);
  }
  return;
}

// ResetData @ 14bac9d50

void __thiscall UDS_StuffData::ResetData(UDS_StuffData *this)

{
  longlong *plVar1;
  FString FStack_18;
  
  ::FString::FString(&FStack_18,"");
  plVar1 = &this->_padding_;
  if ((FString *)plVar1 != &FStack_18) {
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
    }
    *plVar1 = (longlong)FStack_18.Data.AllocatorInstance.Data;
    *(int *)&this->_padding_ = FStack_18.Data.ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = FStack_18.Data.ArrayMax;
    FStack_18.Data.ArrayNum = 0;
    FStack_18.Data.ArrayMax = 0;
    FStack_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  return;
}

