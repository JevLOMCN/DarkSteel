// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b5c2e50

UClass * __cdecl UDS_TransportData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_TransportData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TransportData",
               &Z_Registration_Info_UClass_UDS_TransportData.InnerSingleton,
               StaticRegisterNativesUDS_TransportData,0x140,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_TransportData>,
               InternalVTableHelperCtorCaller<UDS_TransportData>,local_res8,
               UDS_EntityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_TransportData.InnerSingleton;
}

// UDS_TransportData @ 14b5c7540

UDS_TransportData * __thiscall
UDS_TransportData::UDS_TransportData(UDS_TransportData *this,FVTableHelper *param_1)

{
  UDS_EntityData::UDS_EntityData((UDS_EntityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_TransportData__6B_;
  return this;
}

// ~UDS_TransportData @ 14b5c8d60

void __thiscall UDS_TransportData::~UDS_TransportData(UDS_TransportData *this)

{
  this->_padding_ = (longlong)&___7UDS_TransportData__6B_;
  UDS_EntityData::~UDS_EntityData((UDS_EntityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b5cc4a0

UClass * __cdecl UDS_TransportData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_TransportData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TransportData",
               &Z_Registration_Info_UClass_UDS_TransportData.InnerSingleton,
               StaticRegisterNativesUDS_TransportData,0x140,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_TransportData>,
               InternalVTableHelperCtorCaller<UDS_TransportData>,local_res8,
               UDS_EntityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_TransportData.InnerSingleton;
}

// StaticRegisterNativesUDS_TransportData @ 14b5ce060

void __cdecl UDS_TransportData::StaticRegisterNativesUDS_TransportData(void)

{
  return;
}

// UDS_TransportData @ 14ba922f0

UDS_TransportData * __thiscall
UDS_TransportData::UDS_TransportData(UDS_TransportData *this,FObjectInitializer *param_1)

{
  UDS_EntityData::UDS_EntityData((UDS_EntityData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_TransportData__6B_;
  UDS_EntityData::SetMoveMode((UDS_EntityData *)this,Idle);
  this->IsNew = false;
  UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
  this->TransportNameID = 0;
  UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
  this->TransportSpeed = 0.0;
  UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
  this->TransportType = None;
  UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
  return this;
}

// FindOrAddData @ 14baa10d0

TWeakObjectPtr<UDS_TransportData,FWeakObjectPtr> __cdecl
UDS_TransportData::FindOrAddData(ulong64 param_1,ulong64 param_2)

{
  bool in_R8B;
  
  GetData(param_1,param_2,in_R8B);
  return (TWeakObjectPtr<UDS_TransportData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetData @ 14baa8870

TWeakObjectPtr<UDS_TransportData,FWeakObjectPtr> __cdecl
UDS_TransportData::GetData(ulong64 param_1,ulong64 param_2,bool param_3)

{
  int iVar1;
  bool bVar2;
  UDS_DataSetBase *pUVar3;
  TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> TVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  UDS_TransportData *pUVar7;
  undefined7 in_register_00000081;
  char in_R9B;
  FWeakObjectPtr local_38;
  FWeakObjectPtr local_30;
  UDS_TransportData *local_28;
  undefined1 local_20 [8];
  
  if (in_R9B == '\0') {
    TDS_DataSetGetter<UDS_TransportDataSet>::Get((ulong64)&local_30);
    bVar2 = TWeakObjectPtr<UDS_TransportDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_TransportDataSet,FWeakObjectPtr> *)&local_30,(void *)0x0)
    ;
    if (!bVar2) {
      pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_30);
      TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_20);
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
      if (pUVar5 == (UObject *)0x0) {
LAB_14baa88ff:
        pUVar5 = (UObject *)0x0;
      }
      else {
        pUVar6 = Z_Construct_UClass_UDS_TransportData_NoRegister();
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) goto LAB_14baa88ff;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      local_38.ObjectIndex = 0;
      local_38.ObjectSerialNumber = 0;
      local_28 = (UDS_TransportData *)pUVar5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      FWeakObjectPtr::operator=(&local_38,(FObjectPtr)&local_28);
      bVar2 = TWeakObjectPtr<UDS_TransportData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_TransportData,FWeakObjectPtr> *)&local_38,(void *)0x0);
      if (!bVar2) {
LAB_14baa895a:
        *(FWeakObjectPtr *)param_1 = local_38;
        return (TWeakObjectPtr<UDS_TransportData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
    }
  }
  else {
    TDS_DataSetGetter<UDS_TransportDataSet>::Get((ulong64)&local_30);
    bVar2 = TWeakObjectPtr<UDS_TransportDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_TransportDataSet,FWeakObjectPtr> *)&local_30,(void *)0x0)
    ;
    if (bVar2) goto LAB_14baa8aa2;
    pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_30);
    TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_20);
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
    if (pUVar5 == (UObject *)0x0) {
LAB_14baa89c9:
      pUVar5 = (UObject *)0x0;
    }
    else {
      pUVar6 = Z_Construct_UClass_UDS_TransportData_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) goto LAB_14baa89c9;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    local_38.ObjectIndex = 0;
    local_38.ObjectSerialNumber = 0;
    local_28 = (UDS_TransportData *)pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    FWeakObjectPtr::operator=(&local_38,(FObjectPtr)&local_28);
    bVar2 = TWeakObjectPtr<UDS_TransportData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_TransportData,FWeakObjectPtr> *)&local_38,(void *)0x0);
    if (!bVar2) goto LAB_14baa895a;
    pUVar5 = GetTransientPackageAsObject();
    pUVar7 = NewObject<UDS_TransportData>(pUVar5);
    if (pUVar7 != (UDS_TransportData *)0x0) {
      pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_30);
      local_28 = pUVar7;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      bVar2 = UDS_DataSetBase::AddData
                        (pUVar3,CONCAT71(in_register_00000081,param_3),
                         (TObjectPtr<UDS_DataBase>)&local_28);
      if (bVar2) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar7);
        }
        *(undefined8 *)param_1 = 0;
        local_28 = pUVar7;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar7);
        }
        goto LAB_14baa8aa9;
      }
    }
  }
LAB_14baa8aa2:
  *(undefined8 *)param_1 = 0;
  local_28 = (UDS_TransportData *)0x0;
LAB_14baa8aa9:
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
  return (TWeakObjectPtr<UDS_TransportData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// InitByEntityInfo @ 14bab5080

void __thiscall UDS_TransportData::InitByEntityInfo(UDS_TransportData *this)

{
  int iVar1;
  FDS_TransportBaseTableRow *pFVar2;
  
  UDS_EntityData::InitByEntityInfo((UDS_EntityData *)this);
  iVar1 = UDS_DataBase::GetEntityTableID((UDS_DataBase *)this);
  pFVar2 = FDS_TransportBaseTableRow::Get((longlong)iVar1,true);
  if (pFVar2 != (FDS_TransportBaseTableRow *)0x0) {
    this->TransportNameID = (int)pFVar2->ID_Name;
    UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
    this->TransportType = pFVar2->TransportType;
    UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
    this->TransportSpeed = pFVar2->Speed;
    UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
  }
  return;
}

// ResetData @ 14bac9f10

void __thiscall UDS_TransportData::ResetData(UDS_TransportData *this)

{
  UDS_EntityData::SetMoveMode((UDS_EntityData *)this,Idle);
  this->IsNew = false;
  UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
  this->TransportNameID = 0;
  UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
  this->TransportSpeed = 0.0;
  UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
  this->TransportType = None;
  UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
  return;
}

// SetSpawnTransportResponseData @ 14bace000

void __thiscall
UDS_TransportData::SetSpawnTransportResponseData
          (UDS_TransportData *this,SpawnTransportResponse *param_1)

{
  UDS_EntityData::SetMoveMode((UDS_EntityData *)this,(EDS_MoveMode)(param_1->_impl_).move_mode_);
  this->IsNew = (param_1->_impl_).is_new_;
  UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
  return;
}

