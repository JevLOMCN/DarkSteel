// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b4479a0

UClass * __cdecl UDS_CharData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CharData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CharData",
               &Z_Registration_Info_UClass_UDS_CharData.InnerSingleton,
               StaticRegisterNativesUDS_CharData,0x128,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_CharData>,InternalVTableHelperCtorCaller<UDS_CharData>,
               local_res8,UDS_EntityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CharData.InnerSingleton;
}

// UDS_CharData @ 14b44cca0

UDS_CharData * __thiscall UDS_CharData::UDS_CharData(UDS_CharData *this,FVTableHelper *param_1)

{
  UDS_EntityData::UDS_EntityData((UDS_EntityData *)this,param_1);
  *(undefined ***)this = &___7UDS_CharData__6B_;
  return this;
}

// UDS_CharData @ 14b44ccd0

UDS_CharData * __thiscall UDS_CharData::UDS_CharData(UDS_CharData *this,FObjectInitializer *param_1)

{
  UDS_EntityData::UDS_EntityData((UDS_EntityData *)this,param_1);
  *(undefined ***)this = &___7UDS_CharData__6B_;
  return this;
}

// ~UDS_CharData @ 14b44fc20

void __thiscall UDS_CharData::~UDS_CharData(UDS_CharData *this)

{
  *(undefined ***)this = &___7UDS_CharData__6B_;
  UDS_EntityData::~UDS_EntityData((UDS_EntityData *)this);
  return;
}

// GetPrivateStaticClass @ 14b453ac0

UClass * __cdecl UDS_CharData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CharData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CharData",
               &Z_Registration_Info_UClass_UDS_CharData.InnerSingleton,
               StaticRegisterNativesUDS_CharData,0x128,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_CharData>,InternalVTableHelperCtorCaller<UDS_CharData>,
               local_res8,UDS_EntityData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CharData.InnerSingleton;
}

// StaticRegisterNativesUDS_CharData @ 14b4550b0

void __cdecl UDS_CharData::StaticRegisterNativesUDS_CharData(void)

{
  return;
}

// Deleted @ 14ba3c740

void __thiscall UDS_CharData::Deleted(UDS_CharData *this)

{
  return;
}

// GetData @ 14ba47b20

TWeakObjectPtr<UDS_CharData,FWeakObjectPtr> __cdecl UDS_CharData::GetData(ulong64 param_1)

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
  
  TDS_DataSetGetter<UDS_CharDataSet>::Get((ulong64)&local_res18);
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (!bVar2) {
    *(undefined8 *)param_1 = 0;
    local_res20 = (UObject *)0x0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res20);
    return (TWeakObjectPtr<UDS_CharData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_res18);
  this_00 = UDS_DataSetBase::GetData(this,(ulong64)local_18);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_CharData_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14ba47bc1;
  }
  pUVar3 = (UObject *)0x0;
LAB_14ba47bc1:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  *(undefined8 *)param_1 = 0;
  local_res20 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res20);
  return (TWeakObjectPtr<UDS_CharData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// SetDataBySpawnCharacterResponse @ 14ba70100

void __thiscall
UDS_CharData::SetDataBySpawnCharacterResponse(UDS_CharData *this,SpawnCharacterResponse *param_1)

{
  UDS_EntityData::SetMoveMode((UDS_EntityData *)this,(EDS_MoveMode)(param_1->_impl_).move_mode_);
  return;
}

