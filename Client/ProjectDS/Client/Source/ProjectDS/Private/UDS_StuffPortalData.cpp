// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// StaticClass @ 14b5a5080

UClass * __cdecl UDS_StuffPortalData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_StuffPortalData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_StuffPortalData",
               &Z_Registration_Info_UClass_UDS_StuffPortalData.InnerSingleton,
               StaticRegisterNativesUDS_StuffPortalData,0x1a8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_StuffPortalData>,
               InternalVTableHelperCtorCaller<UDS_StuffPortalData>,local_res8,
               UDS_StuffData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_StuffPortalData.InnerSingleton;
}

// UDS_StuffPortalData @ 14b5a9490

UDS_StuffPortalData * __thiscall
UDS_StuffPortalData::UDS_StuffPortalData(UDS_StuffPortalData *this,FVTableHelper *param_1)

{
  UDS_StuffData::UDS_StuffData((UDS_StuffData *)this,param_1);
  *(undefined ***)this = &___7UDS_StuffPortalData__6B_;
  return this;
}

// UDS_StuffPortalData @ 14b5a94c0

UDS_StuffPortalData * __thiscall
UDS_StuffPortalData::UDS_StuffPortalData(UDS_StuffPortalData *this,FObjectInitializer *param_1)

{
  UDS_StuffData::UDS_StuffData((UDS_StuffData *)this,param_1);
  *(undefined ***)this = &___7UDS_StuffPortalData__6B_;
  return this;
}

// ~UDS_StuffPortalData @ 14b5a99b0

void __thiscall UDS_StuffPortalData::~UDS_StuffPortalData(UDS_StuffPortalData *this)

{
  *(undefined ***)this = &___7UDS_StuffPortalData__6B_;
  UDS_StuffData::~UDS_StuffData((UDS_StuffData *)this);
  return;
}

// GetPrivateStaticClass @ 14b5aab60

UClass * __cdecl UDS_StuffPortalData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_StuffPortalData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_StuffPortalData",
               &Z_Registration_Info_UClass_UDS_StuffPortalData.InnerSingleton,
               StaticRegisterNativesUDS_StuffPortalData,0x1a8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_StuffPortalData>,
               InternalVTableHelperCtorCaller<UDS_StuffPortalData>,local_res8,
               UDS_StuffData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_StuffPortalData.InnerSingleton;
}

// StaticRegisterNativesUDS_StuffPortalData @ 14b5ab010

void __cdecl UDS_StuffPortalData::StaticRegisterNativesUDS_StuffPortalData(void)

{
  return;
}

// Created @ 14ba9dbb0

void __thiscall UDS_StuffPortalData::Created(UDS_StuffPortalData *this)

{
  return;
}

// Deleted @ 14ba9dd50

void __thiscall UDS_StuffPortalData::Deleted(UDS_StuffPortalData *this)

{
  return;
}

// GetData @ 14baa81a0

TWeakObjectPtr<UDS_StuffPortalData,FWeakObjectPtr> __cdecl
UDS_StuffPortalData::GetData(ulong64 param_1)

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
  
  TDS_DataSetGetter<UDS_StuffDataSet>::Get((ulong64)&local_res18);
  bVar2 = TWeakObjectPtr<UDS_StuffDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_StuffDataSet,FWeakObjectPtr> *)&local_res18,(void *)0x0);
  if (bVar2) {
    *(undefined8 *)param_1 = 0;
    local_res20 = (UObject *)0x0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res20);
    return (TWeakObjectPtr<UDS_StuffPortalData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_res18);
  this_00 = UDS_DataSetBase::GetData(this,(ulong64)local_18);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_StuffPortalData_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14baa8243;
  }
  pUVar3 = (UObject *)0x0;
LAB_14baa8243:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  *(undefined8 *)param_1 = 0;
  local_res20 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res20);
  return (TWeakObjectPtr<UDS_StuffPortalData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetStuffPortalTable @ 14bab05c0

FDS_StuffPortalTableRow * __thiscall
UDS_StuffPortalData::GetStuffPortalTable(UDS_StuffPortalData *this)

{
  FDS_StuffPortalTableRow *pFVar1;
  
  pFVar1 = FDS_StuffPortalTableRow::Get((longlong)*(int *)&this->field_0x12c,true);
  return pFVar1;
}

// InitByEntityInfo @ 14bab4e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_StuffPortalData::InitByEntityInfo(UDS_StuffPortalData *this)

{
  int iVar1;
  FDS_StuffPortalTableRow *pFVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  UDS_StuffData::InitByEntityInfo((UDS_StuffData *)this);
  pFVar2 = FDS_StuffPortalTableRow::Get((longlong)*(int *)&this->field_0x12c,true);
  if (pFVar2 == (FDS_StuffPortalTableRow *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = (longlong)pFVar2;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_StuffPortalData::InitByEntityInfo",0x25,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x2f,L"stuffPortalTable is nullptr.");
      if ((FDS_StuffPortalTableRow *)local_138._padding_ != (FDS_StuffPortalTableRow *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else if (0 < pFVar2->ID_Trigger) {
    iVar1 = *(int *)&this->field_0x140;
    if (iVar1 == *(int *)&this->field_0x144) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,(ForAnyElementType *)&this->field_0x138,(int *)&this->field_0x144);
    }
    *(int *)&this->field_0x140 = iVar1 + 1;
    *(int *)(*(longlong *)&this->field_0x138 + (longlong)iVar1 * 4) = pFVar2->ID_Trigger;
  }
  return;
}

// IsBreach @ 14bab6e10

bool __thiscall UDS_StuffPortalData::IsBreach(UDS_StuffPortalData *this)

{
  FDS_StuffPortalTableRow *pFVar1;
  
  pFVar1 = FDS_StuffPortalTableRow::Get((longlong)*(int *)&this->field_0x12c,true);
  if (pFVar1 == (FDS_StuffPortalTableRow *)0x0) {
    return false;
  }
  return pFVar1->PortalType == Breach;
}

// IsGate @ 14bab87f0

bool __thiscall UDS_StuffPortalData::IsGate(UDS_StuffPortalData *this)

{
  FDS_StuffPortalTableRow *pFVar1;
  
  pFVar1 = FDS_StuffPortalTableRow::Get((longlong)*(int *)&this->field_0x12c,true);
  if (pFVar1 == (FDS_StuffPortalTableRow *)0x0) {
    return false;
  }
  return pFVar1->PortalType == Gate;
}

// IsInn @ 14bab8a30

bool __thiscall UDS_StuffPortalData::IsInn(UDS_StuffPortalData *this)

{
  FDS_StuffPortalTableRow *pFVar1;
  
  pFVar1 = FDS_StuffPortalTableRow::Get((longlong)*(int *)&this->field_0x12c,true);
  if (pFVar1 == (FDS_StuffPortalTableRow *)0x0) {
    return false;
  }
  return pFVar1->PortalType == Inn;
}

// IsInteractionAvailable @ 14bab9980

bool __thiscall
UDS_StuffPortalData::IsInteractionAvailable(UDS_StuffPortalData *this,ulong64 param_1)

{
  return true;
}

// ResetData @ 14bac9ea0

void __thiscall UDS_StuffPortalData::ResetData(UDS_StuffPortalData *this)

{
  undefined1 *puVar1;
  FString FStack_18;
  
  ::FString::FString(&FStack_18,"");
  puVar1 = &this->field_0x58;
  if ((FString *)puVar1 != &FStack_18) {
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
    }
    *(FScriptContainerElement **)puVar1 = FStack_18.Data.AllocatorInstance.Data;
    *(int *)&this->field_0x60 = FStack_18.Data.ArrayNum;
    *(int *)&this->field_0x64 = FStack_18.Data.ArrayMax;
    FStack_18.Data.ArrayNum = 0;
    FStack_18.Data.ArrayMax = 0;
    FStack_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetDataBySpawnStuffPortalResponse @ 14bacb410

void __thiscall
UDS_StuffPortalData::SetDataBySpawnStuffPortalResponse
          (UDS_StuffPortalData *this,SpawnStuffPortalResponse *param_1)

{
  return;
}

