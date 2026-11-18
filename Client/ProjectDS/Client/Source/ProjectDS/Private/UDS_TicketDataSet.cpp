// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b5b7e50

UClass * __cdecl UDS_TicketDataSet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_TicketDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TicketDataSet",
               &Z_Registration_Info_UClass_UDS_TicketDataSet.InnerSingleton,
               StaticRegisterNativesUDS_TicketDataSet,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_TicketDataSet>,
               InternalVTableHelperCtorCaller<UDS_TicketDataSet>,local_res8,
               UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_TicketDataSet.InnerSingleton;
}

// UDS_TicketDataSet @ 14b5bd520

UDS_TicketDataSet * __thiscall
UDS_TicketDataSet::UDS_TicketDataSet(UDS_TicketDataSet *this,FVTableHelper *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  *(undefined ***)this = &___7UDS_TicketDataSet__6B_;
  return this;
}

// UDS_TicketDataSet @ 14b5bd550

UDS_TicketDataSet * __thiscall
UDS_TicketDataSet::UDS_TicketDataSet(UDS_TicketDataSet *this,FObjectInitializer *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  *(undefined ***)this = &___7UDS_TicketDataSet__6B_;
  return this;
}

// ~UDS_TicketDataSet @ 14b5be1c0

void __thiscall UDS_TicketDataSet::~UDS_TicketDataSet(UDS_TicketDataSet *this)

{
  *(undefined ***)this = &___7UDS_TicketDataSet__6B_;
  UDS_DataSetBase::~UDS_DataSetBase((UDS_DataSetBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b5bfba0

UClass * __cdecl UDS_TicketDataSet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_TicketDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TicketDataSet",
               &Z_Registration_Info_UClass_UDS_TicketDataSet.InnerSingleton,
               StaticRegisterNativesUDS_TicketDataSet,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_TicketDataSet>,
               InternalVTableHelperCtorCaller<UDS_TicketDataSet>,local_res8,
               UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_TicketDataSet.InnerSingleton;
}

// StaticRegisterNativesUDS_TicketDataSet @ 14b5c00d0

void __cdecl UDS_TicketDataSet::StaticRegisterNativesUDS_TicketDataSet(void)

{
  return;
}

// OnAdded @ 14babda40

void __thiscall UDS_TicketDataSet::OnAdded(UDS_TicketDataSet *this)

{
  return;
}

// Update @ 14bad3fa0

void __thiscall UDS_TicketDataSet::Update(UDS_TicketDataSet *this,float *param_1)

{
  return;
}

// UpdateData @ 14bad7150

void __thiscall
UDS_TicketDataSet::UpdateData
          (UDS_TicketDataSet *this,int *param_1,int *param_2,int *param_3,FDateTime *param_4)

{
  int iVar1;
  bool bVar2;
  ulong64 uVar3;
  UDS_DataBase *this_00;
  FWeakObjectPtr local_res10;
  
  iVar1 = *param_1;
  uVar3 = UDS_DataSetBase::GetDataContainerKey((UDS_DataSetBase *)this);
  UDS_TicketData::GetData((ulong64)&local_res10,uVar3,SUB41(iVar1,0));
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar2) {
    this_00 = (UDS_DataBase *)FWeakObjectPtr::Get(&local_res10);
    *(int *)&this_00[1]._padding_ = *param_1;
    *(int *)((longlong)&this_00[1]._padding_ + 4) = *param_2;
    *(int *)&this_00[1]._padding_ = *param_3;
    this_00[1]._padding_ = param_4->Ticks;
    UDS_DataBase::SetIsDirty(this_00,true);
  }
  UDS_DataSetBase::SetIsDirty((UDS_DataSetBase *)this,true);
  return;
}

