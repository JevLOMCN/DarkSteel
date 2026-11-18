// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// StaticClass @ 14b5a78d0

UClass * __cdecl UDS_StuffWarpDeviceData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_StuffWarpDeviceData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_StuffWarpDeviceData",
               &Z_Registration_Info_UClass_UDS_StuffWarpDeviceData.InnerSingleton,
               StaticRegisterNativesUDS_StuffWarpDeviceData,0x1d0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_StuffWarpDeviceData>,
               InternalVTableHelperCtorCaller<UDS_StuffWarpDeviceData>,local_res8,
               UDS_StuffData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_StuffWarpDeviceData.InnerSingleton;
}

// UDS_StuffWarpDeviceData @ 14b5a9580

UDS_StuffWarpDeviceData * __thiscall
UDS_StuffWarpDeviceData::UDS_StuffWarpDeviceData
          (UDS_StuffWarpDeviceData *this,FVTableHelper *param_1)

{
  UDS_StuffData::UDS_StuffData((UDS_StuffData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_StuffWarpDeviceData__6B_;
  *(undefined8 *)&this->ChangedWarpStateDelegate = 0;
  *(undefined8 *)&(this->ChangedWarpStateDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ChangedWarpStateDelegate).field_0x10 = 0;
  this->DeviceState = None;
  *(undefined8 *)&(this->ChangedWarpStateDelegate).field_0x18 = 2;
  return this;
}

// ~UDS_StuffWarpDeviceData @ 14b5a9a30

void __thiscall UDS_StuffWarpDeviceData::~UDS_StuffWarpDeviceData(UDS_StuffWarpDeviceData *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_StuffWarpDeviceData__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ChangedWarpStateDelegate).field_0x8,
             *(int *)&(this->ChangedWarpStateDelegate).field_0x10);
  pvVar1 = *(void **)&(this->ChangedWarpStateDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ChangedWarpStateDelegate);
  UDS_StuffData::~UDS_StuffData((UDS_StuffData *)this);
  return;
}

// GetPrivateStaticClass @ 14b5aae60

UClass * __cdecl UDS_StuffWarpDeviceData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_StuffWarpDeviceData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_StuffWarpDeviceData",
               &Z_Registration_Info_UClass_UDS_StuffWarpDeviceData.InnerSingleton,
               StaticRegisterNativesUDS_StuffWarpDeviceData,0x1d0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_StuffWarpDeviceData>,
               InternalVTableHelperCtorCaller<UDS_StuffWarpDeviceData>,local_res8,
               UDS_StuffData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_StuffWarpDeviceData.InnerSingleton;
}

// StaticRegisterNativesUDS_StuffWarpDeviceData @ 14b5ab050

void __cdecl UDS_StuffWarpDeviceData::StaticRegisterNativesUDS_StuffWarpDeviceData(void)

{
  return;
}

// UDS_StuffWarpDeviceData @ 14ba92250

UDS_StuffWarpDeviceData * __thiscall
UDS_StuffWarpDeviceData::UDS_StuffWarpDeviceData
          (UDS_StuffWarpDeviceData *this,FObjectInitializer *param_1)

{
  UDS_StuffData::UDS_StuffData((UDS_StuffData *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_StuffWarpDeviceData__6B_;
  *(undefined8 *)&this->ChangedWarpStateDelegate = 0;
  *(undefined8 *)&(this->ChangedWarpStateDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ChangedWarpStateDelegate).field_0x10 = 0;
  this->DeviceState = None;
  *(undefined8 *)&(this->ChangedWarpStateDelegate).field_0x18 = 2;
  UDS_EntityData::ResetData((UDS_EntityData *)this);
  return this;
}

// GetData @ 14baa84a0

TWeakObjectPtr<UDS_StuffWarpDeviceData,FWeakObjectPtr> __cdecl
UDS_StuffWarpDeviceData::GetData(ulong64 param_1)

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
    return (TWeakObjectPtr<UDS_StuffWarpDeviceData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_res18);
  this_00 = UDS_DataSetBase::GetData(this,(ulong64)local_18);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_StuffWarpDeviceData_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14baa8543;
  }
  pUVar3 = (UObject *)0x0;
LAB_14baa8543:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  *(undefined8 *)param_1 = 0;
  local_res20 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res20);
  return (TWeakObjectPtr<UDS_StuffWarpDeviceData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// InitByEntityInfo @ 14bab5060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_StuffWarpDeviceData::InitByEntityInfo(UDS_StuffWarpDeviceData *this)

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
    *(EDS_StuffType *)&this->_padding_ = pFVar2->StuffType;
    *(int *)((longlong)&this->_padding_ + 4) = pFVar2->ID_StuffValue;
    *(float *)&this->_padding_ = pFVar2->InteractionTime;
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int,TSizedDefaultAllocator<32>_> *)&this->_padding_,&pFVar2->ID_Trigger);
    pFVar4 = (FString *)(**(code **)((pFVar2->ID_Name)._padding_ + 8))(&pFVar2->ID_Name);
    ::FString::operator=((FString *)&this->_padding_,pFVar4);
  }
  return;
}

// IsActivateWarpDevice @ 14bab6ad0

bool __thiscall UDS_StuffWarpDeviceData::IsActivateWarpDevice(UDS_StuffWarpDeviceData *this)

{
  bool bVar1;
  int iVar2;
  UDS_ActivateWarpDeviceData *this_00;
  FWeakObjectPtr local_res10 [3];
  
  UDS_ActivateWarpDeviceData::GetData((ulong64)local_res10,UDS_PlayerData::MainPlayerEntityID,false)
  ;
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    this_00 = (UDS_ActivateWarpDeviceData *)FWeakObjectPtr::Get(local_res10);
    iVar2 = UDS_DataBase::GetEntityTableID((UDS_DataBase *)this);
    bVar1 = UDS_ActivateWarpDeviceData::IsActivateWarpDevice(this_00,iVar2);
    return bVar1;
  }
  return false;
}

// IsInteractionAvailable @ 14bab99b0

bool __thiscall
UDS_StuffWarpDeviceData::IsInteractionAvailable(UDS_StuffWarpDeviceData *this,ulong64 param_1)

{
  return true;
}

// ResetData @ 14bac9ef0

void __thiscall UDS_StuffWarpDeviceData::ResetData(UDS_StuffWarpDeviceData *this)

{
  longlong *plVar1;
  FString FStack_18;
  
  ::FString::FString(&FStack_18,"");
  plVar1 = &this->_padding_;
  if ((FString *)plVar1 != &FStack_18) {
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
    }
    *plVar1 = (longlong)FStack_18.Data.AllocatorInstance.Data;
    *(int *)&this->_padding_ = FStack_18.Data.ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = FStack_18.Data.ArrayMax;
    FStack_18.Data.ArrayNum = 0;
    FStack_18.Data.ArrayMax = 0;
    FStack_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetDataBySpawnStuffWarpDeviceResponse @ 14bacb4e0

void __thiscall
UDS_StuffWarpDeviceData::SetDataBySpawnStuffWarpDeviceResponse
          (UDS_StuffWarpDeviceData *this,SpawnStuffWarpDeviceResponse *param_1)

{
  bool bVar1;
  int iVar2;
  UDS_ActivateWarpDeviceData *this_00;
  FWeakObjectPtr local_res18 [2];
  
  SetDeviceState(this,Inactive);
  UDS_ActivateWarpDeviceData::GetData((ulong64)local_res18,UDS_PlayerData::MainPlayerEntityID,false)
  ;
  bVar1 = FWeakObjectPtr::IsValid(local_res18);
  if (bVar1) {
    this_00 = (UDS_ActivateWarpDeviceData *)FWeakObjectPtr::Get(local_res18);
    iVar2 = UDS_DataBase::GetEntityTableID((UDS_DataBase *)this);
    bVar1 = UDS_ActivateWarpDeviceData::IsActivateWarpDevice(this_00,iVar2);
    if (bVar1) {
      SetDeviceState(this,Active);
      return;
    }
  }
  return;
}

// SetDataByWarpDeviceActivateResponse @ 14bacb670

void __thiscall
UDS_StuffWarpDeviceData::SetDataByWarpDeviceActivateResponse
          (UDS_StuffWarpDeviceData *this,WarpDeviceActivateResponse *param_1)

{
  bool local_res8 [16];
  bool local_res18 [16];
  
  SetDeviceState(this,Active);
  local_res8[0] = true;
  local_res18[0] = false;
  TMulticastDelegate<void___cdecl(unsigned___int64_const_&,bool_const_&,bool_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast((TMulticastDelegate<void___cdecl(unsigned___int64_const_&,bool_const_&,bool_const_&),FDefaultDelegateUserPolicy>
               *)&this->_padding_,&UDS_PlayerData::MainPlayerEntityID,local_res18,local_res8);
  return;
}

// SetDeviceState @ 14bacc020

void __thiscall
UDS_StuffWarpDeviceData::SetDeviceState(UDS_StuffWarpDeviceData *this,EDS_WarpDeviceState param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  FWeakObjectPtr FVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  FWeakObjectPtr local_res8;
  UDS_StuffWarpDeviceData *local_res18;
  FDestructionSentinel local_48;
  
  this->DeviceState = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18 = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
  FVar6 = local_res8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->ChangedWarpStateDelegate,(FWriteAccessScope *)&local_48);
  puVar1 = &(this->ChangedWarpStateDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar11 = *(int *)&(this->ChangedWarpStateDelegate).field_0x10 - 1;
  if (-1 < (int)uVar11) {
    lVar10 = (longlong)(int)uVar11 << 4;
    bVar5 = false;
    do {
      uVar9 = 0;
      if ((int)uVar11 < *(int *)&(this->ChangedWarpStateDelegate).field_0x10) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->ChangedWarpStateDelegate).field_0x8;
      if (((*(int *)(lVar2 + 8 + lVar10) == 0) ||
          (plVar3 = *(longlong **)(lVar2 + lVar10), plVar3 == (longlong *)0x0)) ||
         (cVar8 = (**(code **)(*plVar3 + 0x68))(plVar3,FVar6,param_1), cVar8 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar11 = uVar11 - 1;
    } while (-1 < (int)uVar11);
  }
  puVar1 = &(this->ChangedWarpStateDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->ChangedWarpStateDelegate
               ,false);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return;
}

