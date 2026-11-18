// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b547070

UClass * __cdecl UDS_NPCObjectHandlingData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCObjectHandlingData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCObjectHandlingData",
               &Z_Registration_Info_UClass_UDS_NPCObjectHandlingData.InnerSingleton,
               StaticRegisterNativesUDS_NPCObjectHandlingData,0x70,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_NPCObjectHandlingData>,
               InternalVTableHelperCtorCaller<UDS_NPCObjectHandlingData>,local_res8,
               UDS_NPCDataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCObjectHandlingData.InnerSingleton;
}

// UDS_NPCObjectHandlingData @ 14b54a7b0

UDS_NPCObjectHandlingData * __thiscall
UDS_NPCObjectHandlingData::UDS_NPCObjectHandlingData
          (UDS_NPCObjectHandlingData *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UDS_NPCDataBase::UDS_NPCDataBase((UDS_NPCDataBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_NPCObjectHandlingData__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->OriginSpawnLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->OriginSpawnLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->OriginSpawnLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return this;
}

// UDS_NPCObjectHandlingData @ 14b54a7f0

UDS_NPCObjectHandlingData * __thiscall
UDS_NPCObjectHandlingData::UDS_NPCObjectHandlingData
          (UDS_NPCObjectHandlingData *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UDS_NPCDataBase::UDS_NPCDataBase((UDS_NPCDataBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_NPCObjectHandlingData__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->OriginSpawnLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->OriginSpawnLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->OriginSpawnLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return this;
}

// ~UDS_NPCObjectHandlingData @ 14b54b4d0

void __thiscall
UDS_NPCObjectHandlingData::~UDS_NPCObjectHandlingData(UDS_NPCObjectHandlingData *this)

{
  this->_padding_ = (longlong)&___7UDS_NPCObjectHandlingData__6B_;
  UDS_NPCDataBase::~UDS_NPCDataBase((UDS_NPCDataBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b54ca40

UClass * __cdecl UDS_NPCObjectHandlingData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCObjectHandlingData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCObjectHandlingData",
               &Z_Registration_Info_UClass_UDS_NPCObjectHandlingData.InnerSingleton,
               StaticRegisterNativesUDS_NPCObjectHandlingData,0x70,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_NPCObjectHandlingData>,
               InternalVTableHelperCtorCaller<UDS_NPCObjectHandlingData>,local_res8,
               UDS_NPCDataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCObjectHandlingData.InnerSingleton;
}

// StaticRegisterNativesUDS_NPCObjectHandlingData @ 14b54d770

void __cdecl UDS_NPCObjectHandlingData::StaticRegisterNativesUDS_NPCObjectHandlingData(void)

{
  return;
}

// Created @ 14ba9db50

void __thiscall UDS_NPCObjectHandlingData::Created(UDS_NPCObjectHandlingData *this)

{
  return;
}

// Deleted @ 14ba9dce0

void __thiscall UDS_NPCObjectHandlingData::Deleted(UDS_NPCObjectHandlingData *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ba9dce3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2c8))();
  return;
}

// GetData @ 14baa7800

TWeakObjectPtr<UDS_NPCObjectHandlingData,FWeakObjectPtr> __cdecl
UDS_NPCObjectHandlingData::GetData(ulong64 param_1)

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
    return (TWeakObjectPtr<UDS_NPCObjectHandlingData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_res18);
  this_00 = UDS_DataSetBase::GetData(this,(ulong64)local_18);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_NPCObjectHandlingData_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14baa78a6;
  }
  pUVar3 = (UObject *)0x0;
LAB_14baa78a6:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  *(undefined8 *)param_1 = 0;
  local_res20 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res20);
  return (TWeakObjectPtr<UDS_NPCObjectHandlingData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// InitByEntityInfo @ 14bab4320

void __thiscall UDS_NPCObjectHandlingData::InitByEntityInfo(UDS_NPCObjectHandlingData *this)

{
  return;
}

// ResetData @ 14bac9b80

void __thiscall UDS_NPCObjectHandlingData::ResetData(UDS_NPCObjectHandlingData *this)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->OriginSpawnLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->OriginSpawnLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->OriginSpawnLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

