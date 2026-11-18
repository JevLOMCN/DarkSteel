// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b487830

UClass * __cdecl UDS_DungeonRecordData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_DungeonRecordData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_DungeonRecordData",
               &Z_Registration_Info_UClass_UDS_DungeonRecordData.InnerSingleton,
               StaticRegisterNativesUDS_DungeonRecordData,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_DungeonRecordData>,
               InternalVTableHelperCtorCaller<UDS_DungeonRecordData>,local_res8,
               UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_DungeonRecordData.InnerSingleton;
}

// UDS_DungeonRecordData @ 14b48b260

UDS_DungeonRecordData * __thiscall
UDS_DungeonRecordData::UDS_DungeonRecordData(UDS_DungeonRecordData *this,FVTableHelper *param_1)

{
  UDS_DataBase::UDS_DataBase((UDS_DataBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_DungeonRecordData__6B_;
  (this->EnterUpdateTime).Ticks = 0;
  (this->RewardUpdateTime).Ticks = 0;
  return this;
}

// ~UDS_DungeonRecordData @ 14b48bd70

void __thiscall UDS_DungeonRecordData::~UDS_DungeonRecordData(UDS_DungeonRecordData *this)

{
  this->_padding_ = (longlong)&___7UDS_DungeonRecordData__6B_;
  UDS_DataBase::~UDS_DataBase((UDS_DataBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b48d250

UClass * __cdecl UDS_DungeonRecordData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_DungeonRecordData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_DungeonRecordData",
               &Z_Registration_Info_UClass_UDS_DungeonRecordData.InnerSingleton,
               StaticRegisterNativesUDS_DungeonRecordData,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_DungeonRecordData>,
               InternalVTableHelperCtorCaller<UDS_DungeonRecordData>,local_res8,
               UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_DungeonRecordData.InnerSingleton;
}

// StaticRegisterNativesUDS_DungeonRecordData @ 14b48d850

void __cdecl UDS_DungeonRecordData::StaticRegisterNativesUDS_DungeonRecordData(void)

{
  return;
}

// UDS_DungeonRecordData @ 14ba32bc0

UDS_DungeonRecordData * __thiscall
UDS_DungeonRecordData::UDS_DungeonRecordData
          (UDS_DungeonRecordData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDS_DungeonRecordData__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->EnterUpdateTime).Ticks = 0;
  (this->RewardUpdateTime).Ticks = 0;
  return this;
}

// FindOrAddData @ 14ba40b50

TWeakObjectPtr<UDS_DungeonRecordData,FWeakObjectPtr> __cdecl
UDS_DungeonRecordData::FindOrAddData(ulong64 param_1,ulong64 param_2)

{
  bool in_R8B;
  
  GetData(param_1,param_2,in_R8B);
  return (TWeakObjectPtr<UDS_DungeonRecordData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetData @ 14ba48840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_DungeonRecordData,FWeakObjectPtr> __cdecl
UDS_DungeonRecordData::GetData(ulong64 param_1,ulong64 param_2,bool param_3)

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
    TDS_DataSetGetter<UDS_DungeonRecordDataSet>::Get((ulong64)&local_c8);
    bVar2 = TWeakObjectPtr<UDS_DungeonRecordDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DungeonRecordDataSet,FWeakObjectPtr> *)&local_c8,
                       (void *)0x0);
    if (bVar2) goto LAB_14ba48acf;
    pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_c8);
    TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_c0);
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
    if (pUVar5 == (UObject *)0x0) {
LAB_14ba488db:
      pUVar5 = (UObject *)0x0;
    }
    else {
      pUVar6 = Z_Construct_UClass_UDS_DungeonRecordData_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) goto LAB_14ba488db;
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
    bVar2 = TWeakObjectPtr<UDS_DungeonRecordData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DungeonRecordData,FWeakObjectPtr> *)&local_d8,(void *)0x0
                      );
    if (!bVar2) {
      *(FWeakObjectPtr *)param_1 = local_d8;
      return (TWeakObjectPtr<UDS_DungeonRecordData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
    }
  }
  else {
    TDS_DataSetGetter<UDS_DungeonRecordDataSet>::Get((ulong64)&local_c8);
    bVar2 = TWeakObjectPtr<UDS_DungeonRecordDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DungeonRecordDataSet,FWeakObjectPtr> *)&local_c8,
                       (void *)0x0);
    if (!bVar2) {
      pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_c8);
      TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_c0);
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
      if (pUVar5 == (UObject *)0x0) {
LAB_14ba489a5:
        pUVar5 = (UObject *)0x0;
      }
      else {
        pUVar6 = Z_Construct_UClass_UDS_DungeonRecordData_NoRegister();
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) goto LAB_14ba489a5;
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
      bVar2 = TWeakObjectPtr<UDS_DungeonRecordData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_DungeonRecordData,FWeakObjectPtr> *)&local_d8,
                         (void *)0x0);
      if (!bVar2) {
        *(FWeakObjectPtr *)param_1 = local_d8;
        return (TWeakObjectPtr<UDS_DungeonRecordData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
      pUVar5 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar5,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar6 = Z_Construct_UClass_UDS_DungeonRecordData_NoRegister();
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
          goto LAB_14ba48ad6;
        }
      }
    }
  }
LAB_14ba48acf:
  *(undefined8 *)param_1 = 0;
  local_d0 = (UObject *)0x0;
LAB_14ba48ad6:
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_d0);
  return (TWeakObjectPtr<UDS_DungeonRecordData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// ResetData @ 14ba68b70

void __thiscall UDS_DungeonRecordData::ResetData(UDS_DungeonRecordData *this)

{
  this->DungeonId = 0;
  this->EnterCount = 0;
  this->RewardCount = 0;
  this->FirstClearReward = false;
  (this->EnterUpdateTime).Ticks = 0;
  (this->RewardUpdateTime).Ticks = 0;
  return;
}

// SetData @ 14ba6d7d0

void __thiscall
UDS_DungeonRecordData::SetData(UDS_DungeonRecordData *this,SqlPlayerDungeonRecordTable *param_1)

{
  FDateTime FVar1;
  
  this->DungeonId = (param_1->_impl_).dungeon_id_;
  this->EnterCount = (param_1->_impl_).enter_count_;
  this->RewardCount = (param_1->_impl_).reward_count_;
  this->FirstClearReward = (param_1->_impl_).first_clear_reward_;
  FVar1 = DS_Util::ConvertTimestampToDateTime((Timestamp *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
  (this->EnterUpdateTime).Ticks = *FVar1.Ticks;
  FVar1 = DS_Util::ConvertTimestampToDateTime((Timestamp *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
  (this->RewardUpdateTime).Ticks = *FVar1.Ticks;
  return;
}

