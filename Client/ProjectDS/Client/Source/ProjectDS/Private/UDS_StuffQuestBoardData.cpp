// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b5a5be0

UClass * __cdecl UDS_StuffQuestBoardData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_StuffQuestBoardData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_StuffQuestBoardData",
               &Z_Registration_Info_UClass_UDS_StuffQuestBoardData.InnerSingleton,
               StaticRegisterNativesUDS_StuffQuestBoardData,0x1a8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_StuffQuestBoardData>,
               InternalVTableHelperCtorCaller<UDS_StuffQuestBoardData>,local_res8,
               UDS_StuffData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_StuffQuestBoardData.InnerSingleton;
}

// UDS_StuffQuestBoardData @ 14b5a94f0

UDS_StuffQuestBoardData * __thiscall
UDS_StuffQuestBoardData::UDS_StuffQuestBoardData
          (UDS_StuffQuestBoardData *this,FVTableHelper *param_1)

{
  UDS_StuffData::UDS_StuffData((UDS_StuffData *)this,param_1);
  *(undefined ***)this = &___7UDS_StuffQuestBoardData__6B_;
  return this;
}

// ~UDS_StuffQuestBoardData @ 14b5a99d0

void __thiscall UDS_StuffQuestBoardData::~UDS_StuffQuestBoardData(UDS_StuffQuestBoardData *this)

{
  *(undefined ***)this = &___7UDS_StuffQuestBoardData__6B_;
  UDS_StuffData::~UDS_StuffData((UDS_StuffData *)this);
  return;
}

// GetPrivateStaticClass @ 14b5aac20

UClass * __cdecl UDS_StuffQuestBoardData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_StuffQuestBoardData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_StuffQuestBoardData",
               &Z_Registration_Info_UClass_UDS_StuffQuestBoardData.InnerSingleton,
               StaticRegisterNativesUDS_StuffQuestBoardData,0x1a8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_StuffQuestBoardData>,
               InternalVTableHelperCtorCaller<UDS_StuffQuestBoardData>,local_res8,
               UDS_StuffData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_StuffQuestBoardData.InnerSingleton;
}

// StaticRegisterNativesUDS_StuffQuestBoardData @ 14b5ab020

void __cdecl UDS_StuffQuestBoardData::StaticRegisterNativesUDS_StuffQuestBoardData(void)

{
  return;
}

// UDS_StuffQuestBoardData @ 14ba921e0

UDS_StuffQuestBoardData * __thiscall
UDS_StuffQuestBoardData::UDS_StuffQuestBoardData
          (UDS_StuffQuestBoardData *this,FObjectInitializer *param_1)

{
  UDS_StuffData::UDS_StuffData((UDS_StuffData *)this,param_1);
  *(undefined ***)this = &___7UDS_StuffQuestBoardData__6B_;
  UDS_EntityData::ResetData((UDS_EntityData *)this);
  return this;
}

// GetData @ 14baa82a0

TWeakObjectPtr<UDS_StuffQuestBoardData,FWeakObjectPtr> __cdecl
UDS_StuffQuestBoardData::GetData(ulong64 param_1)

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
    return (TWeakObjectPtr<UDS_StuffQuestBoardData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_res18);
  this_00 = UDS_DataSetBase::GetData(this,(ulong64)local_18);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_StuffQuestBoardData_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14baa8343;
  }
  pUVar3 = (UObject *)0x0;
LAB_14baa8343:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  *(undefined8 *)param_1 = 0;
  local_res20 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res20);
  return (TWeakObjectPtr<UDS_StuffQuestBoardData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// InitByEntityInfo @ 14bab4f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_StuffQuestBoardData::InitByEntityInfo(UDS_StuffQuestBoardData *this)

{
  int iVar1;
  FDS_StuffBaseTableRow *pFVar2;
  UDS_LogManager *pUVar3;
  FString *pFVar4;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  UDS_EntityData::InitByEntityInfo((UDS_EntityData *)this);
  iVar1 = UDS_DataBase::GetEntityTableID((UDS_DataBase *)this);
  pFVar2 = FDS_StuffBaseTableRow::Get((longlong)iVar1,true);
  if (pFVar2 == (FDS_StuffBaseTableRow *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      TStack_138._padding_ = (longlong)pFVar2;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_StuffData::InitByEntityInfo",0x1f,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,TStack_138.Ptr,0x2c,L"stuffBaseTable is nullptr.");
      if ((FDS_StuffBaseTableRow *)TStack_138._padding_ != (FDS_StuffBaseTableRow *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  else {
    this->field_0x128 = pFVar2->StuffType;
    *(int *)&this->field_0x12c = pFVar2->ID_StuffValue;
    *(float *)&this->field_0x130 = pFVar2->InteractionTime;
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int,TSizedDefaultAllocator<32>_> *)&this->field_0x138,&pFVar2->ID_Trigger);
    pFVar4 = (FString *)(**(code **)((pFVar2->ID_Name)._padding_ + 8))(&pFVar2->ID_Name);
    ::FString::operator=((FString *)&this->field_0x58,pFVar4);
  }
  return;
}

// IsInteractionAvailable @ 14bab9990

bool __thiscall
UDS_StuffQuestBoardData::IsInteractionAvailable(UDS_StuffQuestBoardData *this,ulong64 param_1)

{
  return true;
}

// ResetData @ 14bac9eb0

void __thiscall UDS_StuffQuestBoardData::ResetData(UDS_StuffQuestBoardData *this)

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

