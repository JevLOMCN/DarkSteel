// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// StaticClass @ 14b579810

UClass * __cdecl UDS_QuickSlotDeckData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_QuickSlotDeckData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_QuickSlotDeckData",
               &Z_Registration_Info_UClass_UDS_QuickSlotDeckData.InnerSingleton,
               StaticRegisterNativesUDS_QuickSlotDeckData,0x70,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_QuickSlotDeckData>,
               InternalVTableHelperCtorCaller<UDS_QuickSlotDeckData>,local_res8,
               UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_QuickSlotDeckData.InnerSingleton;
}

// UDS_QuickSlotDeckData @ 14b57da60

UDS_QuickSlotDeckData * __thiscall
UDS_QuickSlotDeckData::UDS_QuickSlotDeckData(UDS_QuickSlotDeckData *this,FVTableHelper *param_1)

{
  UDS_DataBase::UDS_DataBase((UDS_DataBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_QuickSlotDeckData__6B_;
  this->DeckNum = 0;
  (this->QuickSlotList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QuickSlotList).ArrayNum = 0;
  (this->QuickSlotList).ArrayMax = 0;
  return this;
}

// ~UDS_QuickSlotDeckData @ 14b57e230

void __thiscall UDS_QuickSlotDeckData::~UDS_QuickSlotDeckData(UDS_QuickSlotDeckData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDS_QuickSlotDeckData__6B_;
  DestructItems<TSharedPtr<FDS_QuickSlotData,1>,int>
            ((TSharedPtr<FDS_QuickSlotData,1> *)(this->QuickSlotList).AllocatorInstance.Data,
             (this->QuickSlotList).ArrayNum);
  pFVar1 = (this->QuickSlotList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_DataBase::~UDS_DataBase((UDS_DataBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b57f990

UClass * __cdecl UDS_QuickSlotDeckData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_QuickSlotDeckData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_QuickSlotDeckData",
               &Z_Registration_Info_UClass_UDS_QuickSlotDeckData.InnerSingleton,
               StaticRegisterNativesUDS_QuickSlotDeckData,0x70,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_QuickSlotDeckData>,
               InternalVTableHelperCtorCaller<UDS_QuickSlotDeckData>,local_res8,
               UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_QuickSlotDeckData.InnerSingleton;
}

// StaticRegisterNativesUDS_QuickSlotDeckData @ 14b5808d0

void __cdecl UDS_QuickSlotDeckData::StaticRegisterNativesUDS_QuickSlotDeckData(void)

{
  return;
}

// UDS_QuickSlotDeckData @ 14ba33040

UDS_QuickSlotDeckData * __thiscall
UDS_QuickSlotDeckData::UDS_QuickSlotDeckData
          (UDS_QuickSlotDeckData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDS_QuickSlotDeckData__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->DeckNum = 0;
  (this->QuickSlotList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QuickSlotList).ArrayNum = 0;
  (this->QuickSlotList).ArrayMax = 0;
  return this;
}

// Create @ 14ba3a4f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_QuickSlotDeckData * __cdecl UDS_QuickSlotDeckData::Create(ulong64 *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_QuickSlotDeckData *this;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar2 = GetTransientPackageAsObject();
  this = NewObject<UDS_QuickSlotDeckData>(pUVar2);
  if (this == (UDS_QuickSlotDeckData *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_QuickSlotDeckData::Create",0x1d,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Error,local_138.Ptr,0x89,L"DataSetContainer Create Fail.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    this = (UDS_QuickSlotDeckData *)0x0;
  }
  else {
    bVar1 = Init(this,param_1);
    if (!bVar1) {
      this = (UDS_QuickSlotDeckData *)0x0;
    }
  }
  return this;
}

// Created @ 14ba3c290

void __thiscall UDS_QuickSlotDeckData::Created(UDS_QuickSlotDeckData *this)

{
  return;
}

// Deleted @ 14ba3cdc0

void __thiscall UDS_QuickSlotDeckData::Deleted(UDS_QuickSlotDeckData *this)

{
  int *piVar1;
  
  DestructItems<TSharedPtr<FDS_QuickSlotData,1>,int>
            ((TSharedPtr<FDS_QuickSlotData,1> *)(this->QuickSlotList).AllocatorInstance.Data,
             (this->QuickSlotList).ArrayNum);
  piVar1 = &(this->QuickSlotList).ArrayMax;
  (this->QuickSlotList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->QuickSlotList).AllocatorInstance,0,piVar1);
  }
  return;
}

// FindOrAddData @ 14ba40c10

TWeakObjectPtr<UDS_QuickSlotDeckData,FWeakObjectPtr> __cdecl
UDS_QuickSlotDeckData::FindOrAddData(ulong64 param_1,ulong64 param_2)

{
  bool in_R8B;
  
  GetData(param_1,param_2,in_R8B);
  return (TWeakObjectPtr<UDS_QuickSlotDeckData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetData @ 14ba499c0

TWeakObjectPtr<UDS_QuickSlotDeckData,FWeakObjectPtr> __cdecl
UDS_QuickSlotDeckData::GetData(ulong64 param_1,ulong64 param_2,bool param_3)

{
  int iVar1;
  bool bVar2;
  UDS_DataSetBase *pUVar3;
  TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> TVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  UDS_QuickSlotDeckData *pUVar7;
  undefined7 in_register_00000081;
  char in_R9B;
  FWeakObjectPtr local_38;
  FWeakObjectPtr local_30;
  UDS_QuickSlotDeckData *local_28;
  undefined1 local_20 [8];
  
  if (in_R9B == '\0') {
    TDS_DataSetGetter<UDS_QuickSlotDeckDataSet>::Get((ulong64)&local_30);
    bVar2 = TWeakObjectPtr<UDS_QuickSlotDeckDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_QuickSlotDeckDataSet,FWeakObjectPtr> *)&local_30,
                       (void *)0x0);
    if (!bVar2) {
      pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_30);
      TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_20);
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
      if (pUVar5 == (UObject *)0x0) {
LAB_14ba49a4f:
        pUVar5 = (UObject *)0x0;
      }
      else {
        pUVar6 = Z_Construct_UClass_UDS_QuickSlotDeckData_NoRegister();
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) goto LAB_14ba49a4f;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      local_38.ObjectIndex = 0;
      local_38.ObjectSerialNumber = 0;
      local_28 = (UDS_QuickSlotDeckData *)pUVar5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      FWeakObjectPtr::operator=(&local_38,(FObjectPtr)&local_28);
      bVar2 = TWeakObjectPtr<UDS_QuickSlotDeckData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_QuickSlotDeckData,FWeakObjectPtr> *)&local_38,
                         (void *)0x0);
      if (!bVar2) {
LAB_14ba49aaa:
        *(FWeakObjectPtr *)param_1 = local_38;
        return (TWeakObjectPtr<UDS_QuickSlotDeckData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
    }
  }
  else {
    TDS_DataSetGetter<UDS_QuickSlotDeckDataSet>::Get((ulong64)&local_30);
    bVar2 = TWeakObjectPtr<UDS_QuickSlotDeckDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_QuickSlotDeckDataSet,FWeakObjectPtr> *)&local_30,
                       (void *)0x0);
    if (bVar2) goto LAB_14ba49bf2;
    pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_30);
    TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_20);
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
    if (pUVar5 == (UObject *)0x0) {
LAB_14ba49b19:
      pUVar5 = (UObject *)0x0;
    }
    else {
      pUVar6 = Z_Construct_UClass_UDS_QuickSlotDeckData_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) goto LAB_14ba49b19;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    local_38.ObjectIndex = 0;
    local_38.ObjectSerialNumber = 0;
    local_28 = (UDS_QuickSlotDeckData *)pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    FWeakObjectPtr::operator=(&local_38,(FObjectPtr)&local_28);
    bVar2 = TWeakObjectPtr<UDS_QuickSlotDeckData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_QuickSlotDeckData,FWeakObjectPtr> *)&local_38,(void *)0x0
                      );
    if (!bVar2) goto LAB_14ba49aaa;
    pUVar5 = GetTransientPackageAsObject();
    pUVar7 = NewObject<UDS_QuickSlotDeckData>(pUVar5);
    if (pUVar7 != (UDS_QuickSlotDeckData *)0x0) {
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
        goto LAB_14ba49bf9;
      }
    }
  }
LAB_14ba49bf2:
  *(undefined8 *)param_1 = 0;
  local_28 = (UDS_QuickSlotDeckData *)0x0;
LAB_14ba49bf9:
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
  return (TWeakObjectPtr<UDS_QuickSlotDeckData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetQuickSlotData @ 14ba4e530

TSharedPtr<FDS_QuickSlotData,1> * __thiscall
UDS_QuickSlotDeckData::GetQuickSlotData
          (UDS_QuickSlotDeckData *this,TSharedPtr<FDS_QuickSlotData,1> *__return_storage_ptr__,
          int *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<FDS_QuickSlotData,1> *pTVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  
  uVar7 = *param_1 - 1;
  if (((int)uVar7 < 0) || ((this->QuickSlotList).ArrayNum <= (int)uVar7)) {
    __return_storage_ptr__->Object = (FDS_QuickSlotData *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    uVar5 = 0;
    if ((int)uVar7 < (this->QuickSlotList).ArrayNum) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TSharedPtr<FDS_QuickSlotData,1> *)(*pcVar2)();
        return pTVar4;
      }
    }
    pFVar6 = (this->QuickSlotList).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10;
    __return_storage_ptr__->Object = *(FDS_QuickSlotData **)pFVar6;
    pTVar1 = *(TReferenceControllerBase<1> **)(pFVar6 + 8);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetQuickSlotDataByTID @ 14ba4e600

TSharedPtr<FDS_QuickSlotData,1> * __thiscall
UDS_QuickSlotDeckData::GetQuickSlotDataByTID
          (UDS_QuickSlotDeckData *this,TSharedPtr<FDS_QuickSlotData,1> *__return_storage_ptr__,
          int param_1)

{
  int iVar1;
  FDS_QuickSlotData *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->QuickSlotList).ArrayNum;
  pFVar4 = (this->QuickSlotList).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->QuickSlotList).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<FDS_QuickSlotData,1>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    pFVar2 = *(FDS_QuickSlotData **)pFVar4;
    if ((pFVar2 != (FDS_QuickSlotData *)0x0) && (pFVar2->TargetTID == param_1)) {
      __return_storage_ptr__->Object = pFVar2;
      pTVar3 = *(TReferenceControllerBase<1> **)(pFVar4 + 8);
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      return __return_storage_ptr__;
    }
    pFVar4 = pFVar4 + 0x10;
  }
  __return_storage_ptr__->Object = (FDS_QuickSlotData *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetQuickSlotDataByUID @ 14ba4e6a0

TSharedPtr<FDS_QuickSlotData,1> * __thiscall
UDS_QuickSlotDeckData::GetQuickSlotDataByUID
          (UDS_QuickSlotDeckData *this,TSharedPtr<FDS_QuickSlotData,1> *__return_storage_ptr__,
          ulong64 param_1)

{
  int iVar1;
  FDS_QuickSlotData *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->QuickSlotList).ArrayNum;
  pFVar4 = (this->QuickSlotList).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->QuickSlotList).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<FDS_QuickSlotData,1>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    pFVar2 = *(FDS_QuickSlotData **)pFVar4;
    if ((pFVar2 != (FDS_QuickSlotData *)0x0) && (pFVar2->TargetUID == param_1)) {
      __return_storage_ptr__->Object = pFVar2;
      pTVar3 = *(TReferenceControllerBase<1> **)(pFVar4 + 8);
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      return __return_storage_ptr__;
    }
    pFVar4 = pFVar4 + 0x10;
  }
  __return_storage_ptr__->Object = (FDS_QuickSlotData *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// Init @ 14ba53500

bool __thiscall UDS_QuickSlotDeckData::Init(UDS_QuickSlotDeckData *this,ulong64 *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  atomic<int> aVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  
  aVar7 = (atomic<int>)0x1;
  do {
    pTVar9 = (TReferenceControllerBase<1> *)0x0;
    this->DeckNum = (int)*param_1;
    pTVar6 = ::operator_new(0x70);
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
    }
    else {
      pTVar6->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_UFDS_QuickSlotData___00_SharedPointerInternals__6B_;
      pTVar8 = pTVar6 + 1;
      pTVar6->SharedReferenceCount = (atomic<int>)0x1;
      pTVar6->WeakReferenceCount = (atomic<int>)0x1;
      pTVar6[5]._padding_ = 0;
      pTVar6[1]._padding_ = 0;
      pTVar6[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar6[3]._padding_ = 0;
      pTVar6[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar6[3].WeakReferenceCount = (atomic<int>)0x0;
      pTVar6[5].SharedReferenceCount = (atomic<int>)0x0;
      pTVar6[5].WeakReferenceCount = (atomic<int>)0x0;
      pTVar6[6].SharedReferenceCount = (atomic<int>)0x0;
      pTVar6[6].WeakReferenceCount = (atomic<int>)0x0;
      pTVar6[2]._padding_ = 0;
      pTVar6[2].SharedReferenceCount = (atomic<int>)0x2;
      pTVar6[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar6[4]._padding_ = 0;
      pTVar6[4].SharedReferenceCount = (atomic<int>)0x2;
      pTVar6[4].WeakReferenceCount = (atomic<int>)0x0;
      pTVar6[6]._padding_ = 0;
      if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      pTVar9 = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    pTVar8[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[4].WeakReferenceCount = (atomic<int>)0x0;
    *(int *)((longlong)&pTVar8[5]._padding_ + 4) = this->DeckNum;
    pTVar8[5].SharedReferenceCount = aVar7;
    iVar5 = (this->QuickSlotList).ArrayNum;
    if (iVar5 == (this->QuickSlotList).ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->QuickSlotList).AllocatorInstance,
                         &(this->QuickSlotList).ArrayMax);
    }
    (this->QuickSlotList).ArrayNum = iVar5 + 1;
    pFVar1 = (this->QuickSlotList).AllocatorInstance.Data;
    *(TReferenceControllerBase<1> **)(pFVar1 + (longlong)iVar5 * 0x10) = pTVar8;
    *(TReferenceControllerBase<1> **)(pFVar1 + (longlong)iVar5 * 0x10 + 8) = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    aVar7 = (atomic<int>)((int)aVar7 + 1);
  } while ((int)aVar7 < 5);
  return true;
}

// UpdateQuickSlotData @ 14ba808b0

void __thiscall
UDS_QuickSlotDeckData::UpdateQuickSlotData(UDS_QuickSlotDeckData *this,SqlQuickSlotTable *param_1)

{
  char cVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  code *pcVar4;
  bool bVar5;
  FDS_ItemBaseTableRow *pFVar6;
  FDS_ItemConsumeFunctionTableRow *pFVar7;
  UObject *pUVar8;
  uint uVar9;
  uint uVar10;
  TReferenceControllerBase<1> *pTVar11;
  FWeakObjectPtr local_res8;
  
  uVar9 = (param_1->_impl_).slot_index_ - 1;
  if (((int)uVar9 < 0) || ((this->QuickSlotList).ArrayNum <= (int)uVar9)) {
    pTVar11 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    uVar10 = 0;
    if ((int)uVar9 < (this->QuickSlotList).ArrayNum) {
      uVar10 = ~uVar9 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar3 = (this->QuickSlotList).AllocatorInstance.Data;
    pTVar11 = *(TReferenceControllerBase<1> **)(pFVar3 + (longlong)(int)uVar9 * 0x10 + 8);
    this_00 = *(TMulticastDelegateBase<FDefaultDelegateUserPolicy> **)
               (pFVar3 + (longlong)(int)uVar9 * 0x10);
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
      cVar1 = (char)(param_1->_impl_).template_type_;
      *(char *)&this_00[2]._padding_ = cVar1;
      iVar2 = (param_1->_impl_).template_id_;
      this_00[2].InvocationList.ArrayNum = iVar2;
      this_00[2].InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)(longlong)iVar2;
      if (cVar1 == ')') {
        pFVar6 = FDS_ItemBaseTableRow::Get((long64)(longlong)iVar2,true);
        if (pFVar6 != (FDS_ItemBaseTableRow *)0x0) {
          pFVar7 = FDS_ItemConsumeFunctionTableRow::Get((longlong)(int)pFVar6->ItemType,true);
          if (pFVar7 != (FDS_ItemConsumeFunctionTableRow *)0x0) {
            *(bool *)&this_00[2].InvocationListLockCount = pFVar7->IsAutoUse;
          }
        }
      }
      bVar5 = (param_1->_impl_).auto_use_;
      if ((bool)*(char *)((longlong)&this_00[2].InvocationListLockCount + 1) != bVar5) {
        *(bool *)((longlong)&this_00[2].InvocationListLockCount + 1) = bVar5;
        bVar5 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound(this_00 + 1);
        if (bVar5) {
          TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                    ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                     (this_00 + 1));
        }
      }
      DS_ItemDataUtil::GetItemDataByTID((int)&local_res8);
      FWeakObjectPtr::IsValid(&local_res8);
      bVar5 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound(this_00);
      if (bVar5) {
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)this_00);
      }
      *(undefined1 *)&this->_padding_ = 1;
      bVar5 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,
                         (void *)0x0);
      if (!bVar5) {
        pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        pUVar8[4].field_0x8 = 1;
        bVar5 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar8 + 4),
                           (void *)0x0);
        if (!bVar5) {
          pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar8 + 4));
          pUVar8[3].field_0x20 = 1;
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return;
}

