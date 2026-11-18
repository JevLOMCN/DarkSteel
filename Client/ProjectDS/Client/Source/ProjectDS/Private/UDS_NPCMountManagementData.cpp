// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b546240

UClass * __cdecl UDS_NPCMountManagementData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCMountManagementData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCMountManagementData",
               &Z_Registration_Info_UClass_UDS_NPCMountManagementData.InnerSingleton,
               StaticRegisterNativesUDS_NPCMountManagementData,0x58,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_NPCMountManagementData>,
               InternalVTableHelperCtorCaller<UDS_NPCMountManagementData>,local_res8,
               UDS_NPCDataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCMountManagementData.InnerSingleton;
}

// UDS_NPCMountManagementData @ 14b54a780

UDS_NPCMountManagementData * __thiscall
UDS_NPCMountManagementData::UDS_NPCMountManagementData
          (UDS_NPCMountManagementData *this,FVTableHelper *param_1)

{
  UDS_NPCDataBase::UDS_NPCDataBase((UDS_NPCDataBase *)this,param_1);
  *(undefined ***)this = &___7UDS_NPCMountManagementData__6B_;
  return this;
}

// ~UDS_NPCMountManagementData @ 14b54b4b0

void __thiscall
UDS_NPCMountManagementData::~UDS_NPCMountManagementData(UDS_NPCMountManagementData *this)

{
  *(undefined ***)this = &___7UDS_NPCMountManagementData__6B_;
  UDS_NPCDataBase::~UDS_NPCDataBase((UDS_NPCDataBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b54c980

UClass * __cdecl UDS_NPCMountManagementData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCMountManagementData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCMountManagementData",
               &Z_Registration_Info_UClass_UDS_NPCMountManagementData.InnerSingleton,
               StaticRegisterNativesUDS_NPCMountManagementData,0x58,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_NPCMountManagementData>,
               InternalVTableHelperCtorCaller<UDS_NPCMountManagementData>,local_res8,
               UDS_NPCDataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCMountManagementData.InnerSingleton;
}

// StaticRegisterNativesUDS_NPCMountManagementData @ 14b54d760

void __cdecl UDS_NPCMountManagementData::StaticRegisterNativesUDS_NPCMountManagementData(void)

{
  return;
}

// UDS_NPCMountManagementData @ 14ba91db0

UDS_NPCMountManagementData * __thiscall
UDS_NPCMountManagementData::UDS_NPCMountManagementData
          (UDS_NPCMountManagementData *this,FObjectInitializer *param_1)

{
  UDS_NPCDataBase::UDS_NPCDataBase((UDS_NPCDataBase *)this,param_1);
  *(undefined ***)this = &___7UDS_NPCMountManagementData__6B_;
  return this;
}

// Created @ 14ba9db40

void __thiscall UDS_NPCMountManagementData::Created(UDS_NPCMountManagementData *this)

{
  return;
}

// Deleted @ 14ba9dcd0

void __thiscall UDS_NPCMountManagementData::Deleted(UDS_NPCMountManagementData *this)

{
  return;
}

// GetData @ 14baa7700

TWeakObjectPtr<UDS_NPCMountManagementData,FWeakObjectPtr> __cdecl
UDS_NPCMountManagementData::GetData(ulong64 param_1)

{
  int iVar1;
  bool bVar2;
  UDS_DataSetBase *this;
  TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> this_00;
  UObject *pUVar3;
  UClass *pUVar4;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  undefined1 local_18 [16];
  
  TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)&local_res18);
  bVar2 = TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> *)&local_res18,(void *)0x0);
  if (bVar2) {
    *(undefined8 *)param_1 = 0;
    local_res20 = (UObject *)0x0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res20);
    return (TWeakObjectPtr<UDS_NPCMountManagementData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_res18);
  this_00 = UDS_DataSetBase::GetData(this,(ulong64)local_18);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_NPCMountManagementData_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14baa77a6;
  }
  pUVar3 = (UObject *)0x0;
LAB_14baa77a6:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  *(undefined8 *)param_1 = 0;
  local_res20 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res20);
  return (TWeakObjectPtr<UDS_NPCMountManagementData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// InitByEntityInfo @ 14bab4310

void __thiscall UDS_NPCMountManagementData::InitByEntityInfo(UDS_NPCMountManagementData *this)

{
  return;
}

// ResetData @ 14bac9b70

void __thiscall UDS_NPCMountManagementData::ResetData(UDS_NPCMountManagementData *this)

{
  return;
}

