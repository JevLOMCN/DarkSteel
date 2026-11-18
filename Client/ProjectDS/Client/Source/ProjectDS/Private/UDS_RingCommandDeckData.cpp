// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// StaticClass @ 14b584de0

UClass * __cdecl UDS_RingCommandDeckData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_RingCommandDeckData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RingCommandDeckData",
               &Z_Registration_Info_UClass_UDS_RingCommandDeckData.InnerSingleton,
               StaticRegisterNativesUDS_RingCommandDeckData,0x70,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_RingCommandDeckData>,
               InternalVTableHelperCtorCaller<UDS_RingCommandDeckData>,local_res8,
               UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_RingCommandDeckData.InnerSingleton;
}

// UDS_RingCommandDeckData @ 14b587000

UDS_RingCommandDeckData * __thiscall
UDS_RingCommandDeckData::UDS_RingCommandDeckData
          (UDS_RingCommandDeckData *this,FVTableHelper *param_1)

{
  UDS_DataBase::UDS_DataBase((UDS_DataBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_RingCommandDeckData__6B_;
  this->DeckNum = 0;
  this->SlotCount = 0;
  (this->RingCommandList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RingCommandList).ArrayNum = 0;
  (this->RingCommandList).ArrayMax = 0;
  return this;
}

// ~UDS_RingCommandDeckData @ 14b587990

void __thiscall UDS_RingCommandDeckData::~UDS_RingCommandDeckData(UDS_RingCommandDeckData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDS_RingCommandDeckData__6B_;
  DestructItems<TSharedPtr<FDS_RingCommandSlotData,1>,int>
            ((TSharedPtr<FDS_RingCommandSlotData,1> *)(this->RingCommandList).AllocatorInstance.Data
             ,(this->RingCommandList).ArrayNum);
  pFVar1 = (this->RingCommandList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_DataBase::~UDS_DataBase((UDS_DataBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b589070

UClass * __cdecl UDS_RingCommandDeckData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_RingCommandDeckData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RingCommandDeckData",
               &Z_Registration_Info_UClass_UDS_RingCommandDeckData.InnerSingleton,
               StaticRegisterNativesUDS_RingCommandDeckData,0x70,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_RingCommandDeckData>,
               InternalVTableHelperCtorCaller<UDS_RingCommandDeckData>,local_res8,
               UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_RingCommandDeckData.InnerSingleton;
}

// StaticRegisterNativesUDS_RingCommandDeckData @ 14b589ba0

void __cdecl UDS_RingCommandDeckData::StaticRegisterNativesUDS_RingCommandDeckData(void)

{
  return;
}

// UDS_RingCommandDeckData @ 14ba330d0

UDS_RingCommandDeckData * __thiscall
UDS_RingCommandDeckData::UDS_RingCommandDeckData
          (UDS_RingCommandDeckData *this,FObjectInitializer *param_1)

{
  int *piVar1;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  piVar1 = &(this->RingCommandList).ArrayMax;
  this->_padding_ = (longlong)&___7UDS_RingCommandDeckData__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->DeckNum = 0;
  this->SlotCount = 0;
  (this->RingCommandList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RingCommandList).ArrayNum = 0;
  *piVar1 = 0;
  DestructItems<TSharedPtr<FDS_RingCommandSlotData,1>,int>
            ((TSharedPtr<FDS_RingCommandSlotData,1> *)0x0,0);
  (this->RingCommandList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->RingCommandList).AllocatorInstance,0,piVar1);
  }
  return this;
}

// Created @ 14ba3c2a0

void __thiscall UDS_RingCommandDeckData::Created(UDS_RingCommandDeckData *this)

{
  ulong64 local_res8 [4];
  
  local_res8[0] = this->_padding_;
  InitDeck(this,local_res8);
  return;
}

// Deleted @ 14ba3ce10

void __thiscall UDS_RingCommandDeckData::Deleted(UDS_RingCommandDeckData *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ba3ce13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2c8))();
  return;
}

// FindOrAddData @ 14ba40c30

TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr> __cdecl
UDS_RingCommandDeckData::FindOrAddData(ulong64 param_1,ulong64 param_2)

{
  bool in_R8B;
  
  GetData(param_1,param_2,in_R8B);
  return (TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetData @ 14ba49c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr> __cdecl
UDS_RingCommandDeckData::GetData(ulong64 param_1,ulong64 param_2,bool param_3)

{
  int iVar1;
  bool bVar2;
  UDS_DataSetBase *pUVar3;
  TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> TVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  longlong *plVar7;
  undefined7 in_register_00000081;
  char in_R9B;
  undefined1 auStack_f8 [32];
  FWeakObjectPtr local_d8;
  UObject *local_d0;
  FWeakObjectPtr local_c8;
  undefined1 local_c0 [8];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if (in_R9B == '\0') {
    TDS_DataSetGetter<UDS_RingCommandDeckDataSet>::Get((ulong64)&local_c8);
    bVar2 = TWeakObjectPtr<UDS_RingCommandDeckDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_RingCommandDeckDataSet,FWeakObjectPtr> *)&local_c8,
                       (void *)0x0);
    if (bVar2) goto LAB_14ba49ebf;
    pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_c8);
    TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_c0);
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
    if (pUVar5 == (UObject *)0x0) {
LAB_14ba49ccb:
      pUVar5 = (UObject *)0x0;
    }
    else {
      pUVar6 = Z_Construct_UClass_UDS_RingCommandDeckData_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) goto LAB_14ba49ccb;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    local_d8.ObjectIndex = 0;
    local_d8.ObjectSerialNumber = 0;
    local_d0 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    FWeakObjectPtr::operator=(&local_d8,(FObjectPtr)&local_d0);
    bVar2 = TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr> *)&local_d8,
                       (void *)0x0);
    if (!bVar2) {
      *(FWeakObjectPtr *)param_1 = local_d8;
      return (TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
    }
  }
  else {
    TDS_DataSetGetter<UDS_RingCommandDeckDataSet>::Get((ulong64)&local_c8);
    bVar2 = TWeakObjectPtr<UDS_RingCommandDeckDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_RingCommandDeckDataSet,FWeakObjectPtr> *)&local_c8,
                       (void *)0x0);
    if (!bVar2) {
      pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_c8);
      TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_c0);
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
      if (pUVar5 == (UObject *)0x0) {
LAB_14ba49d95:
        pUVar5 = (UObject *)0x0;
      }
      else {
        pUVar6 = Z_Construct_UClass_UDS_RingCommandDeckData_NoRegister();
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) goto LAB_14ba49d95;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      local_d8.ObjectIndex = 0;
      local_d8.ObjectSerialNumber = 0;
      local_d0 = pUVar5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      FWeakObjectPtr::operator=(&local_d8,(FObjectPtr)&local_d0);
      bVar2 = TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr> *)&local_d8,
                         (void *)0x0);
      if (!bVar2) {
        *(FWeakObjectPtr *)param_1 = local_d8;
        return (TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
      pUVar5 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar5,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar6 = Z_Construct_UClass_UDS_RingCommandDeckData_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_b8,pUVar6);
      local_b8._8_8_ = pUVar5;
      pUVar5 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
      if (local_b8._64_8_ != 0) {
        plVar7 = (longlong *)(local_b8 + 0x50);
        if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
          plVar7 = (longlong *)local_b8._104_8_;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      if (pUVar5 != (UObject *)0x0) {
        pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_c8);
        local_d0 = pUVar5;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        bVar2 = UDS_DataSetBase::AddData
                          (pUVar3,CONCAT71(in_register_00000081,param_3),
                           (TObjectPtr<UDS_DataBase>)&local_d0);
        if (bVar2) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar5);
          }
          *(undefined8 *)param_1 = 0;
          local_d0 = pUVar5;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar5);
          }
          goto LAB_14ba49ec6;
        }
      }
    }
  }
LAB_14ba49ebf:
  *(undefined8 *)param_1 = 0;
  local_d0 = (UObject *)0x0;
LAB_14ba49ec6:
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_d0);
  return (TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetRingCommandData @ 14ba4ec10

TSharedPtr<FDS_RingCommandSlotData,1> * __thiscall
UDS_RingCommandDeckData::GetRingCommandData
          (UDS_RingCommandDeckData *this,
          TSharedPtr<FDS_RingCommandSlotData,1> *__return_storage_ptr__,int *param_1)

{
  uint uVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TSharedPtr<FDS_RingCommandSlotData,1> *pTVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  
  uVar1 = *param_1;
  if (((int)uVar1 < 0) || ((this->RingCommandList).ArrayNum <= (int)uVar1)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3034317596313780071>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\DS_RingCommandDeckData.cpp"
                       ,0x99,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TSharedPtr<FDS_RingCommandSlotData,1> *)(*pcVar3)();
      return pTVar5;
    }
    __return_storage_ptr__->Object = (FDS_RingCommandSlotData *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    uVar6 = 0;
    if ((int)uVar1 < (this->RingCommandList).ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TSharedPtr<FDS_RingCommandSlotData,1> *)(*pcVar3)();
        return pTVar5;
      }
    }
    pFVar7 = (this->RingCommandList).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10;
    __return_storage_ptr__->Object = *(FDS_RingCommandSlotData **)pFVar7;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar7 + 8);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// InitDeck @ 14ba542d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall UDS_RingCommandDeckData::InitDeck(UDS_RingCommandDeckData *this,ulong64 *param_1)

{
  int *piVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FDS_SlotDeckTableRow *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  TReferenceControllerBase<1> *pTVar12;
  TReferenceControllerBase<1> *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  
  (**(code **)(this->_padding_ + 0x2c8))();
  this->DeckNum = (int)*param_1;
  pFVar8 = FDS_SlotDeckTableRow::GetRef(0x1f,true);
  iVar7 = pFVar8->SlotCntMax;
  this->SlotCount = iVar7;
  pTVar4 = _UNK_150651568;
  pTVar3 = ___xmm_00000000000000000000000000000010;
  pTVar12 = (TReferenceControllerBase<1> *)0x0;
  if (0 < iVar7) {
    do {
      pTVar9 = ::operator_new(0x28);
      if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
        local_38 = pTVar3;
        pTStack_30 = pTVar4;
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTVar9->SharedReferenceCount = (atomic<int>)0x1;
        pTVar9->WeakReferenceCount = (atomic<int>)0x1;
        pTVar9->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFDS_RingCommandSlotData___00_SharedPointerInternals__6B_
        ;
        *(undefined1 *)&pTVar9[1]._padding_ = 0;
        *(undefined8 *)((longlong)&pTVar9[1]._padding_ + 4) = 0;
        pTVar9[2]._padding_ = 0;
        if ((pTVar9 + 1 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          uVar6 = (*pcVar2)();
          return (bool)uVar6;
        }
        LOCK();
        pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
        UNLOCK();
        local_38 = pTVar9 + 1;
        pTStack_30 = pTVar9;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      if (local_38 != (TReferenceControllerBase<1> *)0x0) {
        if ((local_38 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          uVar6 = (*pcVar2)();
          return (bool)uVar6;
        }
        *(undefined1 *)&local_38->_padding_ = 0;
        *(int *)((longlong)&local_38->_padding_ + 4) = this->DeckNum;
        local_38->SharedReferenceCount = SUB84(pTVar12,0);
        pFVar10 = (this->RingCommandList).AllocatorInstance.Data;
        if (((pFVar10 <= (FScriptContainerElement *)&local_38) &&
            ((FScriptContainerElement *)&local_38 <
             pFVar10 + (longlong)(this->RingCommandList).ArrayMax * 0x10)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar2 = (code *)swi(3);
          uVar6 = (*pcVar2)();
          return (bool)uVar6;
        }
        iVar7 = (this->RingCommandList).ArrayNum;
        piVar1 = &(this->RingCommandList).ArrayMax;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&(this->RingCommandList).AllocatorInstance,piVar1);
        }
        (this->RingCommandList).ArrayNum = iVar7 + 1;
        pFVar10 = (this->RingCommandList).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
        *(TReferenceControllerBase<1> **)pFVar10 = local_38;
        *(TReferenceControllerBase<1> **)(pFVar10 + 8) = pTStack_30;
        if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_30->SharedReferenceCount =
               (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
          UNLOCK();
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_30);
      uVar11 = (int)SUB84(pTVar12,0) + 1;
      pTVar12 = (TReferenceControllerBase<1> *)(ulonglong)uVar11;
    } while ((int)uVar11 < this->SlotCount);
  }
  return true;
}

// ResetData @ 14ba69080

void __thiscall UDS_RingCommandDeckData::ResetData(UDS_RingCommandDeckData *this)

{
  int *piVar1;
  
  DestructItems<TSharedPtr<FDS_RingCommandSlotData,1>,int>
            ((TSharedPtr<FDS_RingCommandSlotData,1> *)(this->RingCommandList).AllocatorInstance.Data
             ,(this->RingCommandList).ArrayNum);
  piVar1 = &(this->RingCommandList).ArrayMax;
  (this->RingCommandList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->RingCommandList).AllocatorInstance,0,piVar1);
  }
  return;
}

// SetData @ 14ba6db70

void __thiscall
UDS_RingCommandDeckData::SetData
          (UDS_RingCommandDeckData *this,int *param_1,EDS_RingCmdType param_2,long64 *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  TSharedPtr<FDS_RingCommandSlotData,1> local_18;
  
  GetRingCommandData(this,&local_18,param_1);
  if (local_18.Object != (FDS_RingCommandSlotData *)0x0) {
    (local_18.Object)->SlotType = param_2;
    (local_18.Object)->SlotData = *param_3;
    *(undefined1 *)&this->_padding_ = 1;
    bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,
                       (void *)0x0);
    if (!bVar1) {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      pUVar2[4].field_0x8 = 1;
      bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar2 + 4),
                         (void *)0x0);
      if (!bVar1) {
        pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar2 + 4));
        pUVar2[3].field_0x20 = 1;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// SwapData @ 14ba76430

void __thiscall
UDS_RingCommandDeckData::SwapData(UDS_RingCommandDeckData *this,int *param_1,int *param_2)

{
  EDS_RingCmdType EVar1;
  bool bVar2;
  UObject *pUVar3;
  TSharedPtr<FDS_RingCommandSlotData,1> local_48;
  TSharedPtr<FDS_RingCommandSlotData,1> local_38 [2];
  long64 local_18;
  
  GetRingCommandData(this,local_38,param_1);
  GetRingCommandData(this,&local_48,param_2);
  if ((local_38[0].Object != (FDS_RingCommandSlotData *)0x0) &&
     (local_48.Object != (FDS_RingCommandSlotData *)0x0)) {
    EVar1 = (local_38[0].Object)->SlotType;
    local_18 = (local_38[0].Object)->SlotData;
    (local_38[0].Object)->SlotType = (local_48.Object)->SlotType;
    (local_38[0].Object)->SlotData = (local_48.Object)->SlotData;
    (local_48.Object)->SlotType = EVar1;
    (local_48.Object)->SlotData = local_18;
    *(undefined1 *)&this->_padding_ = 1;
    bVar2 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,
                       (void *)0x0);
    if (!bVar2) {
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      pUVar3[4].field_0x8 = 1;
      bVar2 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar3 + 4),
                         (void *)0x0);
      if (!bVar2) {
        pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar3 + 4));
        pUVar3[3].field_0x20 = 1;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38[0].SharedReferenceCount.ReferenceController);
  return;
}

