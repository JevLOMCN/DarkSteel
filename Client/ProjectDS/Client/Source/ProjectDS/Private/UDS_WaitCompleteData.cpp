// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// StaticClass @ 14b7541e0

UClass * __cdecl UDS_WaitCompleteData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_WaitCompleteData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_WaitCompleteData",
               &Z_Registration_Info_UClass_UDS_WaitCompleteData.InnerSingleton,
               StaticRegisterNativesUDS_WaitCompleteData,0xa0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_WaitCompleteData>,
               InternalVTableHelperCtorCaller<UDS_WaitCompleteData>,local_res8,
               UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_WaitCompleteData.InnerSingleton;
}

// UDS_WaitCompleteData @ 14b75ac90

UDS_WaitCompleteData * __thiscall
UDS_WaitCompleteData::UDS_WaitCompleteData(UDS_WaitCompleteData *this,FVTableHelper *param_1)

{
  UDS_DataBase::UDS_DataBase((UDS_DataBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_WaitCompleteData__6B_;
  this->UID = 0;
  (this->StartDateTime).Ticks = 0;
  (this->AccelEndDateTime).Ticks = 0;
  (this->OriginEndDateTime).Ticks = 0;
  this->AccelSeconds = 0;
  return this;
}

// UDS_WaitCompleteData @ 14b75ace0

UDS_WaitCompleteData * __thiscall
UDS_WaitCompleteData::UDS_WaitCompleteData(UDS_WaitCompleteData *this,FObjectInitializer *param_1)

{
  UDS_DataBase::UDS_DataBase((UDS_DataBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_WaitCompleteData__6B_;
  this->UID = 0;
  (this->StartDateTime).Ticks = 0;
  (this->AccelEndDateTime).Ticks = 0;
  (this->OriginEndDateTime).Ticks = 0;
  this->AccelSeconds = 0;
  return this;
}

// ~UDS_WaitCompleteData @ 14b75c150

void __thiscall UDS_WaitCompleteData::~UDS_WaitCompleteData(UDS_WaitCompleteData *this)

{
  this->_padding_ = (longlong)&___7UDS_WaitCompleteData__6B_;
  UDS_DataBase::~UDS_DataBase((UDS_DataBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b75ebb0

UClass * __cdecl UDS_WaitCompleteData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_WaitCompleteData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_WaitCompleteData",
               &Z_Registration_Info_UClass_UDS_WaitCompleteData.InnerSingleton,
               StaticRegisterNativesUDS_WaitCompleteData,0xa0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_WaitCompleteData>,
               InternalVTableHelperCtorCaller<UDS_WaitCompleteData>,local_res8,
               UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_WaitCompleteData.InnerSingleton;
}

// StaticRegisterNativesUDS_WaitCompleteData @ 14b75f070

void __cdecl UDS_WaitCompleteData::StaticRegisterNativesUDS_WaitCompleteData(void)

{
  return;
}

// Created @ 14ba9dc30

void __thiscall UDS_WaitCompleteData::Created(UDS_WaitCompleteData *this)

{
  return;
}

// FindOrAddData @ 14baa10f0

TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr> __cdecl
UDS_WaitCompleteData::FindOrAddData(ulong64 param_1,ulong64 param_2)

{
  bool in_R8B;
  
  GetData(param_1,param_2,in_R8B);
  return (TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetData @ 14baa8ae0

TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr> __cdecl
UDS_WaitCompleteData::GetData(ulong64 param_1,ulong64 param_2,bool param_3)

{
  int iVar1;
  bool bVar2;
  UDS_DataSetBase *pUVar3;
  TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> TVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  UDS_WaitCompleteData *pUVar7;
  undefined7 in_register_00000081;
  char in_R9B;
  FWeakObjectPtr local_38;
  FWeakObjectPtr local_30;
  UDS_WaitCompleteData *local_28;
  undefined1 local_20 [8];
  
  if (in_R9B == '\0') {
    TDS_DataSetGetter<UDS_WaitCompleteDataSet>::Get((ulong64)&local_30);
    bVar2 = TWeakObjectPtr<UDS_WaitCompleteDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_WaitCompleteDataSet,FWeakObjectPtr> *)&local_30,
                       (void *)0x0);
    if (!bVar2) {
      pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_30);
      TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_20);
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
      if (pUVar5 == (UObject *)0x0) {
LAB_14baa8b6f:
        pUVar5 = (UObject *)0x0;
      }
      else {
        pUVar6 = Z_Construct_UClass_UDS_WaitCompleteData_NoRegister();
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) goto LAB_14baa8b6f;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      local_38.ObjectIndex = 0;
      local_38.ObjectSerialNumber = 0;
      local_28 = (UDS_WaitCompleteData *)pUVar5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      FWeakObjectPtr::operator=(&local_38,(FObjectPtr)&local_28);
      bVar2 = TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr> *)&local_38,
                         (void *)0x0);
      if (!bVar2) {
LAB_14baa8bca:
        *(FWeakObjectPtr *)param_1 = local_38;
        return (TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
    }
  }
  else {
    TDS_DataSetGetter<UDS_WaitCompleteDataSet>::Get((ulong64)&local_30);
    bVar2 = TWeakObjectPtr<UDS_WaitCompleteDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_WaitCompleteDataSet,FWeakObjectPtr> *)&local_30,
                       (void *)0x0);
    if (bVar2) goto LAB_14baa8d12;
    pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_30);
    TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_20);
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
    if (pUVar5 == (UObject *)0x0) {
LAB_14baa8c39:
      pUVar5 = (UObject *)0x0;
    }
    else {
      pUVar6 = Z_Construct_UClass_UDS_WaitCompleteData_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) goto LAB_14baa8c39;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    local_38.ObjectIndex = 0;
    local_38.ObjectSerialNumber = 0;
    local_28 = (UDS_WaitCompleteData *)pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    FWeakObjectPtr::operator=(&local_38,(FObjectPtr)&local_28);
    bVar2 = TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr> *)&local_38,(void *)0x0)
    ;
    if (!bVar2) goto LAB_14baa8bca;
    pUVar5 = GetTransientPackageAsObject();
    pUVar7 = NewObject<UDS_WaitCompleteData>(pUVar5);
    if (pUVar7 != (UDS_WaitCompleteData *)0x0) {
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
        goto LAB_14baa8d19;
      }
    }
  }
LAB_14baa8d12:
  *(undefined8 *)param_1 = 0;
  local_28 = (UDS_WaitCompleteData *)0x0;
LAB_14baa8d19:
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
  return (TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetOriginalTimeMillisec @ 14baaeab0

double __thiscall UDS_WaitCompleteData::GetOriginalTimeMillisec(UDS_WaitCompleteData *this)

{
  double dVar1;
  
  dVar1 = (double)((this->OriginEndDateTime).Ticks - (this->StartDateTime).Ticks) *
          __real_3f1a36e2eb1c432d;
  if (dVar1 <= __real_3ff0000000000000) {
    dVar1 = __real_3ff0000000000000;
  }
  return dVar1;
}

// GetProgressRatio @ 14baaf4d0

float __thiscall UDS_WaitCompleteData::GetProgressRatio(UDS_WaitCompleteData *this)

{
  longlong lVar1;
  UDS_TimeUtilManager *pUVar2;
  longlong lVar3;
  double dVar4;
  longlong local_res8;
  
  lVar3 = 0;
  pUVar2 = UDS_TimeUtilManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar2 == (UDS_TimeUtilManager *)0x0) goto LAB_14baaf521;
  }
  else {
    if (pUVar2 == (UDS_TimeUtilManager *)0x0) goto LAB_14baaf521;
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  UDS_TimeUtilManager::GetCurrentServerDateTime();
  lVar1 = (this->AccelEndDateTime).Ticks;
  if (local_res8 < lVar1) {
    lVar3 = lVar1 - local_res8;
  }
LAB_14baaf521:
  dVar4 = (double)((this->OriginEndDateTime).Ticks - (this->StartDateTime).Ticks) *
          __real_3f1a36e2eb1c432d;
  if (dVar4 <= __real_3ff0000000000000) {
    dVar4 = __real_3ff0000000000000;
  }
  return (float)(__real_3ff0000000000000 - ((double)lVar3 * __real_3f1a36e2eb1c432d) / dVar4);
}

// GetProgressedSeconds @ 14baaf580

int __thiscall UDS_WaitCompleteData::GetProgressedSeconds(UDS_WaitCompleteData *this)

{
  longlong lVar1;
  UDS_TimeUtilManager *pUVar2;
  longlong lVar3;
  longlong local_res8;
  
  lVar3 = 0;
  pUVar2 = UDS_TimeUtilManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar2 == (UDS_TimeUtilManager *)0x0) goto LAB_14baaf5d1;
  }
  else {
    if (pUVar2 == (UDS_TimeUtilManager *)0x0) goto LAB_14baaf5d1;
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  UDS_TimeUtilManager::GetCurrentServerDateTime();
  lVar1 = (this->StartDateTime).Ticks;
  if (lVar1 < local_res8) {
    lVar3 = local_res8 - lVar1;
  }
LAB_14baaf5d1:
  return (int)((double)lVar3 * __real_3e7ad7f29abcaf48 + (double)this->AccelSeconds);
}

// GetRemainTimeMillisec @ 14baaf740

double __thiscall UDS_WaitCompleteData::GetRemainTimeMillisec(UDS_WaitCompleteData *this)

{
  longlong lVar1;
  UDS_TimeUtilManager *pUVar2;
  longlong lVar3;
  longlong local_res10;
  
  lVar3 = 0;
  pUVar2 = UDS_TimeUtilManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar2 == (UDS_TimeUtilManager *)0x0) goto LAB_14baaf791;
  }
  else {
    if (pUVar2 == (UDS_TimeUtilManager *)0x0) goto LAB_14baaf791;
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  UDS_TimeUtilManager::GetCurrentServerDateTime();
  lVar1 = (this->AccelEndDateTime).Ticks;
  if (local_res10 < lVar1) {
    lVar3 = lVar1 - local_res10;
  }
LAB_14baaf791:
  return (double)lVar3 * __real_3f1a36e2eb1c432d;
}

// GetRemainingSeconds @ 14baaf7c0

int __thiscall UDS_WaitCompleteData::GetRemainingSeconds(UDS_WaitCompleteData *this)

{
  longlong lVar1;
  UDS_TimeUtilManager *pUVar2;
  longlong lVar3;
  longlong local_res10;
  
  lVar3 = 0;
  pUVar2 = UDS_TimeUtilManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar2 == (UDS_TimeUtilManager *)0x0) goto LAB_14baaf811;
  }
  else {
    if (pUVar2 == (UDS_TimeUtilManager *)0x0) goto LAB_14baaf811;
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  UDS_TimeUtilManager::GetCurrentServerDateTime();
  lVar1 = (this->AccelEndDateTime).Ticks;
  if (local_res10 < lVar1) {
    lVar3 = lVar1 - local_res10;
  }
LAB_14baaf811:
  return (int)((double)lVar3 * __real_3e7ad7f29abcaf48);
}

// GetRemainingTimespan @ 14baaf840

FTimespan __thiscall UDS_WaitCompleteData::GetRemainingTimespan(UDS_WaitCompleteData *this)

{
  longlong lVar1;
  UDS_TimeUtilManager *pUVar2;
  longlong *in_RDX;
  longlong local_res10;
  
  *in_RDX = 0;
  pUVar2 = UDS_TimeUtilManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar2 == (UDS_TimeUtilManager *)0x0) {
      return (FTimespan)(long64)in_RDX;
    }
  }
  else {
    if (pUVar2 == (UDS_TimeUtilManager *)0x0) {
      return (FTimespan)(long64)in_RDX;
    }
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  UDS_TimeUtilManager::GetCurrentServerDateTime();
  lVar1 = (this->AccelEndDateTime).Ticks;
  if (local_res10 < lVar1) {
    *in_RDX = lVar1 - local_res10;
  }
  return (FTimespan)(long64)in_RDX;
}

// IsComplete @ 14bab7400

bool __thiscall UDS_WaitCompleteData::IsComplete(UDS_WaitCompleteData *this)

{
  UDS_TimeUtilManager *pUVar1;
  longlong local_res10;
  
  pUVar1 = UDS_TimeUtilManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar1 == (UDS_TimeUtilManager *)0x0) {
      return false;
    }
  }
  else {
    if (pUVar1 == (UDS_TimeUtilManager *)0x0) {
      return false;
    }
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  UDS_TimeUtilManager::GetCurrentServerDateTime();
  return (this->AccelEndDateTime).Ticks <= local_res10;
}

