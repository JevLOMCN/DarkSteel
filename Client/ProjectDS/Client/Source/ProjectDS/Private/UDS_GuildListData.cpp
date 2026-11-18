// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b4a4770

UClass * __cdecl UDS_GuildListData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_GuildListData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_GuildListData",
               &Z_Registration_Info_UClass_UDS_GuildListData.InnerSingleton,
               StaticRegisterNativesUDS_GuildListData,0x178,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_GuildListData>,
               InternalVTableHelperCtorCaller<UDS_GuildListData>,local_res8,
               UDS_GuildData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_GuildListData.InnerSingleton;
}

// UDS_GuildListData @ 14b4a7600

UDS_GuildListData * __thiscall
UDS_GuildListData::UDS_GuildListData(UDS_GuildListData *this,FVTableHelper *param_1)

{
  UDS_GuildData::UDS_GuildData((UDS_GuildData *)this,param_1);
  this->TimeLeft = 0.0;
  this->_padding_ = (longlong)&___7UDS_GuildListData__6B_;
  return this;
}

// ~UDS_GuildListData @ 14b4a7bb0

void __thiscall UDS_GuildListData::~UDS_GuildListData(UDS_GuildListData *this)

{
  this->_padding_ = (longlong)&___7UDS_GuildListData__6B_;
  UDS_GuildData::~UDS_GuildData((UDS_GuildData *)this);
  return;
}

// GetPrivateStaticClass @ 14b4a9130

UClass * __cdecl UDS_GuildListData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_GuildListData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_GuildListData",
               &Z_Registration_Info_UClass_UDS_GuildListData.InnerSingleton,
               StaticRegisterNativesUDS_GuildListData,0x178,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_GuildListData>,
               InternalVTableHelperCtorCaller<UDS_GuildListData>,local_res8,
               UDS_GuildData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_GuildListData.InnerSingleton;
}

// StaticRegisterNativesUDS_GuildListData @ 14b4a9600

void __cdecl UDS_GuildListData::StaticRegisterNativesUDS_GuildListData(void)

{
  return;
}

// UDS_GuildListData @ 14ba912d0

UDS_GuildListData * __thiscall
UDS_GuildListData::UDS_GuildListData(UDS_GuildListData *this,FObjectInitializer *param_1)

{
  UDS_GuildData::UDS_GuildData((UDS_GuildData *)this,param_1);
  this->TimeLeft = 0.0;
  this->_padding_ = (longlong)&___7UDS_GuildListData__6B_;
  TSet<TTuple<__int64,TObjectPtr<UDS_GuildMemberData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_GuildMemberData>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<__int64,TObjectPtr<UDS_GuildMemberData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_GuildMemberData>,0>,FDefaultSetAllocator>
           *)&this->_padding_);
  TSet<TTuple<__int64,TObjectPtr<UDS_GuildMemberData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_GuildMemberData>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<__int64,TObjectPtr<UDS_GuildMemberData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_GuildMemberData>,0>,FDefaultSetAllocator>
           *)&this->_padding_);
  return this;
}

// FindOrAddData @ 14baa1010

TWeakObjectPtr<UDS_GuildListData,FWeakObjectPtr> __cdecl
UDS_GuildListData::FindOrAddData(ulong64 param_1,ulong64 param_2)

{
  bool in_R8B;
  
  GetData(param_1,param_2,in_R8B);
  return (TWeakObjectPtr<UDS_GuildListData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetData @ 14baa6960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_GuildListData,FWeakObjectPtr> __cdecl
UDS_GuildListData::GetData(ulong64 param_1,ulong64 param_2,bool param_3)

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
    TDS_DataSetGetter<UDS_GuildListDataSet>::Get((ulong64)&local_c8);
    bVar2 = TWeakObjectPtr<UDS_GuildListDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_GuildListDataSet,FWeakObjectPtr> *)&local_c8,(void *)0x0)
    ;
    if (bVar2) goto LAB_14baa6bef;
    pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_c8);
    TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_c0);
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
    if (pUVar5 == (UObject *)0x0) {
LAB_14baa69fb:
      pUVar5 = (UObject *)0x0;
    }
    else {
      pUVar6 = Z_Construct_UClass_UDS_GuildListData_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) goto LAB_14baa69fb;
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
    bVar2 = TWeakObjectPtr<UDS_GuildListData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_GuildListData,FWeakObjectPtr> *)&local_d8,(void *)0x0);
    if (!bVar2) {
      *(FWeakObjectPtr *)param_1 = local_d8;
      return (TWeakObjectPtr<UDS_GuildListData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
    }
  }
  else {
    TDS_DataSetGetter<UDS_GuildListDataSet>::Get((ulong64)&local_c8);
    bVar2 = TWeakObjectPtr<UDS_GuildListDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_GuildListDataSet,FWeakObjectPtr> *)&local_c8,(void *)0x0)
    ;
    if (!bVar2) {
      pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_c8);
      TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_c0);
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
      if (pUVar5 == (UObject *)0x0) {
LAB_14baa6ac5:
        pUVar5 = (UObject *)0x0;
      }
      else {
        pUVar6 = Z_Construct_UClass_UDS_GuildListData_NoRegister();
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) goto LAB_14baa6ac5;
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
      bVar2 = TWeakObjectPtr<UDS_GuildListData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_GuildListData,FWeakObjectPtr> *)&local_d8,(void *)0x0);
      if (!bVar2) {
        *(FWeakObjectPtr *)param_1 = local_d8;
        return (TWeakObjectPtr<UDS_GuildListData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
      pUVar5 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar5,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar6 = Z_Construct_UClass_UDS_GuildListData_NoRegister();
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
          goto LAB_14baa6bf6;
        }
      }
    }
  }
LAB_14baa6bef:
  *(undefined8 *)param_1 = 0;
  local_d0 = (UObject *)0x0;
LAB_14baa6bf6:
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_d0);
  return (TWeakObjectPtr<UDS_GuildListData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// HasTimeLeft @ 14bab2c50

bool __thiscall UDS_GuildListData::HasTimeLeft(UDS_GuildListData *this)

{
  double dVar1;
  double dVar2;
  
  dVar1 = this->TimeLeft;
  dVar2 = UDS_TimeUtilManager::GetCurrentServerTime();
  return 0.0 < dVar1 - dVar2;
}

// ResetData @ 14bac9940

void __thiscall UDS_GuildListData::ResetData(UDS_GuildListData *this)

{
  TSet<TTuple<__int64,TObjectPtr<UDS_GuildMemberData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_GuildMemberData>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<__int64,TObjectPtr<UDS_GuildMemberData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_GuildMemberData>,0>,FDefaultSetAllocator>
           *)&this->_padding_);
  TSet<TTuple<__int64,TObjectPtr<UDS_GuildMemberData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_GuildMemberData>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<__int64,TObjectPtr<UDS_GuildMemberData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_GuildMemberData>,0>,FDefaultSetAllocator>
           *)&this->_padding_);
  return;
}

// SetGuildListData @ 14baccd30

void __thiscall
UDS_GuildListData::SetGuildListData(UDS_GuildListData *this,PlayerPendingInfo *param_1)

{
  SqlGuildTable *pSVar1;
  Timestamp *pTVar2;
  Timestamp *pTVar3;
  SqlGuildTable *pSVar4;
  
  pSVar1 = (param_1->_impl_).guild_info_;
  pSVar4 = &ds_guild::_SqlGuildTable_default_instance_._instance;
  if (pSVar1 != (SqlGuildTable *)0x0) {
    pSVar4 = pSVar1;
  }
  UDS_GuildData::SetGuildData((UDS_GuildData *)this,pSVar4);
  pTVar2 = (param_1->_impl_).expired_time_;
  pTVar3 = (Timestamp *)&google::protobuf::_Timestamp_default_instance_;
  if (pTVar2 != (Timestamp *)0x0) {
    pTVar3 = pTVar2;
  }
  this->TimeLeft = (double)(pTVar3->_impl_).seconds_;
  return;
}

