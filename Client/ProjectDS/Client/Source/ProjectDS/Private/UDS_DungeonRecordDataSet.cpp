// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b4878f0

UClass * __cdecl UDS_DungeonRecordDataSet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_DungeonRecordDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_DungeonRecordDataSet",
               &Z_Registration_Info_UClass_UDS_DungeonRecordDataSet.InnerSingleton,
               StaticRegisterNativesUDS_DungeonRecordDataSet,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_DungeonRecordDataSet>,
               InternalVTableHelperCtorCaller<UDS_DungeonRecordDataSet>,local_res8,
               UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_DungeonRecordDataSet.InnerSingleton;
}

// UDS_DungeonRecordDataSet @ 14b48b2a0

UDS_DungeonRecordDataSet * __thiscall
UDS_DungeonRecordDataSet::UDS_DungeonRecordDataSet
          (UDS_DungeonRecordDataSet *this,FVTableHelper *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  *(undefined ***)this = &___7UDS_DungeonRecordDataSet__6B_;
  return this;
}

// UDS_DungeonRecordDataSet @ 14b48b2d0

UDS_DungeonRecordDataSet * __thiscall
UDS_DungeonRecordDataSet::UDS_DungeonRecordDataSet
          (UDS_DungeonRecordDataSet *this,FObjectInitializer *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  *(undefined ***)this = &___7UDS_DungeonRecordDataSet__6B_;
  return this;
}

// ~UDS_DungeonRecordDataSet @ 14b48bd90

void __thiscall UDS_DungeonRecordDataSet::~UDS_DungeonRecordDataSet(UDS_DungeonRecordDataSet *this)

{
  *(undefined ***)this = &___7UDS_DungeonRecordDataSet__6B_;
  UDS_DataSetBase::~UDS_DataSetBase((UDS_DataSetBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b48d310

UClass * __cdecl UDS_DungeonRecordDataSet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_DungeonRecordDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_DungeonRecordDataSet",
               &Z_Registration_Info_UClass_UDS_DungeonRecordDataSet.InnerSingleton,
               StaticRegisterNativesUDS_DungeonRecordDataSet,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_DungeonRecordDataSet>,
               InternalVTableHelperCtorCaller<UDS_DungeonRecordDataSet>,local_res8,
               UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_DungeonRecordDataSet.InnerSingleton;
}

// StaticRegisterNativesUDS_DungeonRecordDataSet @ 14b48d860

void __cdecl UDS_DungeonRecordDataSet::StaticRegisterNativesUDS_DungeonRecordDataSet(void)

{
  return;
}

// SetData @ 14ba6d860

void __thiscall
UDS_DungeonRecordDataSet::SetData
          (UDS_DungeonRecordDataSet *this,SqlPlayerDungeonRecordTable *param_1)

{
  undefined1 *this_00;
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  FDateTime FVar4;
  ulong64 uVar5;
  FWeakObjectPtr local_res8 [2];
  
  this_00 = &this->field_0xa0;
  iVar1 = (param_1->_impl_).dungeon_id_;
  bVar2 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)this_00,(void *)0x0);
  if (bVar2) {
    uVar5 = 0;
  }
  else {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    uVar5 = *(ulong64 *)(pUVar3 + 1);
  }
  UDS_DungeonRecordData::GetData((ulong64)local_res8,uVar5,SUB41(iVar1,0));
  bVar2 = TWeakObjectPtr<UDS_DungeonRecordData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DungeonRecordData,FWeakObjectPtr> *)local_res8,(void *)0x0)
  ;
  if (!bVar2) {
    pUVar3 = FWeakObjectPtr::Get(local_res8);
    *(int *)&pUVar3[2].field_0x8 = (param_1->_impl_).dungeon_id_;
    *(int *)&pUVar3[2].field_0xc = (param_1->_impl_).enter_count_;
    *(int *)&pUVar3[2].field_0x10 = (param_1->_impl_).reward_count_;
    pUVar3[2].field_0x14 = (param_1->_impl_).first_clear_reward_;
    FVar4 = DS_Util::ConvertTimestampToDateTime((Timestamp *)(local_res8 + 1));
    *(undefined8 *)&pUVar3[2].field_0x18 = *(undefined8 *)FVar4.Ticks;
    FVar4 = DS_Util::ConvertTimestampToDateTime((Timestamp *)(local_res8 + 1));
    *(undefined8 *)&pUVar3[2].field_0x20 = *(undefined8 *)FVar4.Ticks;
  }
  this->field_0xa8 = 1;
  bVar2 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)this_00,(void *)0x0);
  if (!bVar2) {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    pUVar3[3].field_0x20 = 1;
  }
  return;
}

