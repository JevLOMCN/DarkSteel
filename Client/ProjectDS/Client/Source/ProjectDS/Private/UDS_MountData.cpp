// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b4fe240

UClass * __cdecl UDS_MountData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MountData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MountData",
               &Z_Registration_Info_UClass_UDS_MountData.InnerSingleton,
               StaticRegisterNativesUDS_MountData,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_MountData>,InternalVTableHelperCtorCaller<UDS_MountData>,
               local_res8,UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MountData.InnerSingleton;
}

// UDS_MountData @ 14b500c70

UDS_MountData * __thiscall UDS_MountData::UDS_MountData(UDS_MountData *this,FVTableHelper *param_1)

{
  UDS_DataBase::UDS_DataBase((UDS_DataBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_MountData__6B_;
  (this->MountList).PlayerUID = 0;
  (this->MountList).MountUID = 0;
  (this->MountList).MountTID = 0;
  (this->MountList).MountNickname.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MountList).MountNickname.Data.ArrayNum = 0;
  (this->MountList).MountNickname.Data.ArrayMax = 0;
  (this->MountList).Hunger = 0;
  (this->MountList).Fatigue = 0;
  (this->MountList).EquipItemIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MountList).EquipItemIDList.ArrayNum = 0;
  (this->MountList).EquipItemIDList.ArrayMax = 0;
  (this->MountTableStatusInfo).StandardSpeed = 0;
  (this->MountTableStatusInfo).StandardSprintSpeed = 0;
  (this->MountTableStatusInfo).InventorySlot = 0;
  (this->MountTableStatusInfo).MountLoadCapacity = 0;
  return this;
}

// ~UDS_MountData @ 14b502330

void __thiscall UDS_MountData::~UDS_MountData(UDS_MountData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDS_MountData__6B_;
  pFVar1 = (this->MountList).EquipItemIDList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MountList).MountNickname.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_DataBase::~UDS_DataBase((UDS_DataBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b5045a0

UClass * __cdecl UDS_MountData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MountData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MountData",
               &Z_Registration_Info_UClass_UDS_MountData.InnerSingleton,
               StaticRegisterNativesUDS_MountData,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_MountData>,InternalVTableHelperCtorCaller<UDS_MountData>,
               local_res8,UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MountData.InnerSingleton;
}

// StaticRegisterNativesUDS_MountData @ 14b505b10

void __cdecl UDS_MountData::StaticRegisterNativesUDS_MountData(void)

{
  return;
}

// UDS_MountData @ 14ba32e80

UDS_MountData * __thiscall
UDS_MountData::UDS_MountData(UDS_MountData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDS_MountData__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->MountList).PlayerUID = 0;
  (this->MountList).MountUID = 0;
  (this->MountList).MountTID = 0;
  (this->MountList).MountNickname.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MountList).MountNickname.Data.ArrayNum = 0;
  (this->MountList).MountNickname.Data.ArrayMax = 0;
  (this->MountList).Hunger = 0;
  (this->MountList).Fatigue = 0;
  (this->MountList).EquipItemIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MountList).EquipItemIDList.ArrayNum = 0;
  (this->MountList).EquipItemIDList.ArrayMax = 0;
  (this->MountTableStatusInfo).StandardSpeed = 0;
  (this->MountTableStatusInfo).StandardSprintSpeed = 0;
  (this->MountTableStatusInfo).InventorySlot = 0;
  (this->MountTableStatusInfo).MountLoadCapacity = 0;
  return this;
}

// FindOrAddData @ 14ba40b90

TWeakObjectPtr<UDS_MountData,FWeakObjectPtr> __cdecl
UDS_MountData::FindOrAddData(ulong64 param_1,ulong64 param_2)

{
  bool in_R8B;
  
  GetData(param_1,param_2,in_R8B);
  return (TWeakObjectPtr<UDS_MountData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetData @ 14ba48eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_MountData,FWeakObjectPtr> __cdecl
UDS_MountData::GetData(ulong64 param_1,ulong64 param_2,bool param_3)

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
    TDS_DataSetGetter<UDS_MountDataSet>::Get((ulong64)&local_c8);
    bVar2 = TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr> *)&local_c8,(void *)0x0);
    if (bVar2) goto LAB_14ba4913f;
    pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_c8);
    TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_c0);
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
    if (pUVar5 == (UObject *)0x0) {
LAB_14ba48f4b:
      pUVar5 = (UObject *)0x0;
    }
    else {
      pUVar6 = Z_Construct_UClass_UDS_MountData_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) goto LAB_14ba48f4b;
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
    bVar2 = TWeakObjectPtr<UDS_MountData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MountData,FWeakObjectPtr> *)&local_d8,(void *)0x0);
    if (!bVar2) {
      *(FWeakObjectPtr *)param_1 = local_d8;
      return (TWeakObjectPtr<UDS_MountData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
    }
  }
  else {
    TDS_DataSetGetter<UDS_MountDataSet>::Get((ulong64)&local_c8);
    bVar2 = TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr> *)&local_c8,(void *)0x0);
    if (!bVar2) {
      pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_c8);
      TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_c0);
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
      if (pUVar5 == (UObject *)0x0) {
LAB_14ba49015:
        pUVar5 = (UObject *)0x0;
      }
      else {
        pUVar6 = Z_Construct_UClass_UDS_MountData_NoRegister();
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) goto LAB_14ba49015;
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
      bVar2 = TWeakObjectPtr<UDS_MountData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_MountData,FWeakObjectPtr> *)&local_d8,(void *)0x0);
      if (!bVar2) {
        *(FWeakObjectPtr *)param_1 = local_d8;
        return (TWeakObjectPtr<UDS_MountData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
      pUVar5 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar5,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar6 = Z_Construct_UClass_UDS_MountData_NoRegister();
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
          goto LAB_14ba49146;
        }
      }
    }
  }
LAB_14ba4913f:
  *(undefined8 *)param_1 = 0;
  local_d0 = (UObject *)0x0;
LAB_14ba49146:
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_d0);
  return (TWeakObjectPtr<UDS_MountData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetIsSeleteced @ 14ba4c610

bool __thiscall UDS_MountData::GetIsSeleteced(UDS_MountData *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res10 [3];
  
  TDS_DataSetGetter<UDS_MountDataSet>::Get((ulong64)local_res10);
  bVar1 = TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr> *)local_res10,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res10);
    return (this->MountList).MountUID == *(longlong *)&pUVar2[4].field_0x20;
  }
  return false;
}

// UpdateData @ 14ba7c7d0

void __thiscall
UDS_MountData::UpdateData
          (UDS_MountData *this,FDS_MountList *param_1,FDS_MountTableStatusInfo *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  UObject *pUVar6;
  
  (this->MountList).PlayerUID = param_1->PlayerUID;
  (this->MountList).MountUID = param_1->MountUID;
  (this->MountList).MountTID = param_1->MountTID;
  ::FString::operator=(&(this->MountList).MountNickname,&param_1->MountNickname);
  (this->MountList).Hunger = param_1->Hunger;
  (this->MountList).Fatigue = param_1->Fatigue;
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&(this->MountList).EquipItemIDList,&param_1->EquipItemIDList);
  iVar1 = param_2->StandardSpeed;
  iVar2 = param_2->StandardSprintSpeed;
  iVar3 = param_2->InventorySlot;
  iVar4 = param_2->MountLoadCapacity;
  *(undefined1 *)&this->_padding_ = 1;
  (this->MountTableStatusInfo).StandardSpeed = iVar1;
  (this->MountTableStatusInfo).StandardSprintSpeed = iVar2;
  (this->MountTableStatusInfo).InventorySlot = iVar3;
  (this->MountTableStatusInfo).MountLoadCapacity = iVar4;
  bVar5 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar5) {
    pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar6[4].field_0x8 = 1;
    bVar5 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar6 + 4),
                       (void *)0x0);
    if (!bVar5) {
      pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar6 + 4));
      pUVar6[3].field_0x20 = 1;
    }
  }
  return;
}

