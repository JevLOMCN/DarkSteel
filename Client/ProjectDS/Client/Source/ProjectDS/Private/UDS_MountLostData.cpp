// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b4fd050

UClass * __cdecl UDS_MountLostData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MountLostData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MountLostData",
               &Z_Registration_Info_UClass_UDS_MountLostData.InnerSingleton,
               StaticRegisterNativesUDS_MountLostData,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_MountLostData>,
               InternalVTableHelperCtorCaller<UDS_MountLostData>,local_res8,
               UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MountLostData.InnerSingleton;
}

// UDS_MountLostData @ 14b5012b0

UDS_MountLostData * __thiscall
UDS_MountLostData::UDS_MountLostData(UDS_MountLostData *this,FVTableHelper *param_1)

{
  UDS_DataBase::UDS_DataBase((UDS_DataBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_MountLostData__6B_;
  this->RecoveryTime = 0.0;
  this->LostRecordTime = 0.0;
  *(undefined8 *)&this->MountLostItemMap = 0;
  *(undefined8 *)&(this->MountLostItemMap).field_0x8 = 0;
  *(undefined8 *)&(this->MountLostItemMap).field_0x20 = 0;
  *(undefined4 *)&(this->MountLostItemMap).field_0x28 = 0;
  *(undefined4 *)&(this->MountLostItemMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->MountLostItemMap).field_0x34 = 0;
  *(undefined4 *)&(this->MountLostItemMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MountLostItemMap).field_0x40 = 0;
  *(undefined4 *)&(this->MountLostItemMap).field_0x48 = 0;
  return this;
}

// ~UDS_MountLostData @ 14b5026f0

void __thiscall UDS_MountLostData::~UDS_MountLostData(UDS_MountLostData *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_MountLostData__6B_;
  *(undefined4 *)&(this->MountLostItemMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MountLostItemMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDS_MountLostItemInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FDS_MountLostItemInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FDS_MountLostItemInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MountLostItemMap);
  UDS_DataBase::~UDS_DataBase((UDS_DataBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b5047e0

UClass * __cdecl UDS_MountLostData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MountLostData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MountLostData",
               &Z_Registration_Info_UClass_UDS_MountLostData.InnerSingleton,
               StaticRegisterNativesUDS_MountLostData,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_MountLostData>,
               InternalVTableHelperCtorCaller<UDS_MountLostData>,local_res8,
               UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MountLostData.InnerSingleton;
}

// StaticRegisterNativesUDS_MountLostData @ 14b505b40

void __cdecl UDS_MountLostData::StaticRegisterNativesUDS_MountLostData(void)

{
  return;
}

// UDS_MountLostData @ 14ba32f00

UDS_MountLostData * __thiscall
UDS_MountLostData::UDS_MountLostData(UDS_MountLostData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDS_MountLostData__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->RecoveryTime = 0.0;
  this->LostRecordTime = 0.0;
  *(undefined8 *)&this->MountLostItemMap = 0;
  *(undefined8 *)&(this->MountLostItemMap).field_0x8 = 0;
  *(undefined8 *)&(this->MountLostItemMap).field_0x20 = 0;
  *(undefined4 *)&(this->MountLostItemMap).field_0x28 = 0;
  *(undefined4 *)&(this->MountLostItemMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->MountLostItemMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MountLostItemMap).field_0x34 = 0;
  *(undefined8 *)&(this->MountLostItemMap).field_0x40 = 0;
  *(undefined4 *)&(this->MountLostItemMap).field_0x48 = 0;
  return this;
}

// FindOrAddData @ 14ba40bb0

TWeakObjectPtr<UDS_MountLostData,FWeakObjectPtr> __cdecl
UDS_MountLostData::FindOrAddData(ulong64 param_1,ulong64 param_2)

{
  bool in_R8B;
  
  GetData(param_1,param_2,in_R8B);
  return (TWeakObjectPtr<UDS_MountLostData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetData @ 14ba49180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_MountLostData,FWeakObjectPtr> __cdecl
UDS_MountLostData::GetData(ulong64 param_1,ulong64 param_2,bool param_3)

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
    TDS_DataSetGetter<UDS_MountLostDataSet>::Get((ulong64)&local_c8);
    bVar2 = TWeakObjectPtr<UDS_MountLostDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MountLostDataSet,FWeakObjectPtr> *)&local_c8,(void *)0x0)
    ;
    if (bVar2) goto LAB_14ba4940f;
    pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_c8);
    TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_c0);
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
    if (pUVar5 == (UObject *)0x0) {
LAB_14ba4921b:
      pUVar5 = (UObject *)0x0;
    }
    else {
      pUVar6 = Z_Construct_UClass_UDS_MountLostData_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) goto LAB_14ba4921b;
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
    bVar2 = TWeakObjectPtr<UDS_MountLostData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MountLostData,FWeakObjectPtr> *)&local_d8,(void *)0x0);
    if (!bVar2) {
      *(FWeakObjectPtr *)param_1 = local_d8;
      return (TWeakObjectPtr<UDS_MountLostData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
    }
  }
  else {
    TDS_DataSetGetter<UDS_MountLostDataSet>::Get((ulong64)&local_c8);
    bVar2 = TWeakObjectPtr<UDS_MountLostDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MountLostDataSet,FWeakObjectPtr> *)&local_c8,(void *)0x0)
    ;
    if (!bVar2) {
      pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_c8);
      TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_c0);
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
      if (pUVar5 == (UObject *)0x0) {
LAB_14ba492e5:
        pUVar5 = (UObject *)0x0;
      }
      else {
        pUVar6 = Z_Construct_UClass_UDS_MountLostData_NoRegister();
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) goto LAB_14ba492e5;
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
      bVar2 = TWeakObjectPtr<UDS_MountLostData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_MountLostData,FWeakObjectPtr> *)&local_d8,(void *)0x0);
      if (!bVar2) {
        *(FWeakObjectPtr *)param_1 = local_d8;
        return (TWeakObjectPtr<UDS_MountLostData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
      pUVar5 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar5,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar6 = Z_Construct_UClass_UDS_MountLostData_NoRegister();
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
          goto LAB_14ba49416;
        }
      }
    }
  }
LAB_14ba4940f:
  *(undefined8 *)param_1 = 0;
  local_d0 = (UObject *)0x0;
LAB_14ba49416:
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_d0);
  return (TWeakObjectPtr<UDS_MountLostData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// IsRecoveryTimeLeft @ 14ba5c760

bool __thiscall UDS_MountLostData::IsRecoveryTimeLeft(UDS_MountLostData *this)

{
  double dVar1;
  double dVar2;
  
  dVar1 = this->RecoveryTime;
  dVar2 = UDS_TimeUtilManager::GetCurrentServerTime();
  return 0.0 < (float)(int)(dVar1 - dVar2);
}

// ResetData @ 14ba68c10

void __thiscall UDS_MountLostData::ResetData(UDS_MountLostData *this)

{
  this->RecoveryTime = 0.0;
  this->LostRecordTime = 0.0;
  TSet<TTuple<int,FDS_MountLostItemInfo>,TDefaultMapHashableKeyFuncs<int,FDS_MountLostItemInfo,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int,FDS_MountLostItemInfo>,TDefaultMapHashableKeyFuncs<int,FDS_MountLostItemInfo,0>,FDefaultSetAllocator>
           *)&this->MountLostItemMap);
  return;
}

// SetMountLostData @ 14ba72c80

void __thiscall UDS_MountLostData::SetMountLostData(UDS_MountLostData *this,MountLostInfo *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 *local_28;
  undefined4 *local_20;
  
  (**(code **)(this->_padding_ + 0x2c8))();
  this->RecoveryTime = (double)(param_1->_impl_).end_time_;
  uVar5 = 0;
  this->LostRecordTime = (double)(param_1->_impl_).record_time_;
  uVar6 = uVar5;
  while( true ) {
    uVar1 = (param_1->_impl_).item_id_.soo_rep_.field0_0x0.long_rep.elements_int;
    if ((uVar1 & 4) == 0) {
      uVar3 = (uint)uVar1 & 3;
    }
    else {
      uVar3 = (param_1->_impl_).item_id_.soo_rep_.field0_0x0.long_rep.size;
    }
    if ((int)uVar3 <= (int)uVar6) break;
    uVar2 = (param_1->_impl_).quantity_.soo_rep_.field0_0x0.long_rep.elements_int;
    puVar4 = (undefined1 *)((longlong)&(param_1->_impl_).item_id_.soo_rep_.field0_0x0 + 8);
    if ((uVar1 & 4) != 0) {
      puVar4 = (undefined1 *)(uVar1 & 0xfffffffffffffff8);
    }
    local_38 = *(undefined4 *)(puVar4 + uVar5);
    puVar4 = (undefined1 *)((longlong)&(param_1->_impl_).quantity_.soo_rep_.field0_0x0 + 8);
    if ((uVar2 & 4) != 0) {
      puVar4 = (undefined1 *)(uVar2 & 0xfffffffffffffff8);
    }
    uVar1 = (param_1->_impl_).quantity_trade_.soo_rep_.field0_0x0.long_rep.elements_int;
    local_34 = *(undefined4 *)(puVar4 + uVar5);
    puVar4 = (undefined1 *)((longlong)&(param_1->_impl_).quantity_trade_.soo_rep_.field0_0x0 + 8);
    if ((uVar1 & 4) != 0) {
      puVar4 = (undefined1 *)(uVar1 & 0xfffffffffffffff8);
    }
    local_30 = *(undefined4 *)(puVar4 + uVar5);
    local_28 = &local_38;
    local_20 = &local_38;
    TSet<TTuple<int,FDS_MountLostItemInfo>,TDefaultMapHashableKeyFuncs<int,FDS_MountLostItemInfo,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_&,FDS_MountLostItemInfo_&>_>
              ((TSet<TTuple<int,FDS_MountLostItemInfo>,TDefaultMapHashableKeyFuncs<int,FDS_MountLostItemInfo,0>,FDefaultSetAllocator>
                *)&this->MountLostItemMap,
               (TPairInitializer<int_&,FDS_MountLostItemInfo_&> *)&stack0x00000008,(bool *)&local_28
              );
    uVar6 = (ulonglong)((int)uVar6 + 1);
    uVar5 = uVar5 + 4;
  }
  return;
}

