// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// StaticClass @ 14b56be30

UClass * __cdecl UDS_QuestData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_QuestData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_QuestData",
               &Z_Registration_Info_UClass_UDS_QuestData.InnerSingleton,
               StaticRegisterNativesUDS_QuestData,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_QuestData>,InternalVTableHelperCtorCaller<UDS_QuestData>,
               local_res8,UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_QuestData.InnerSingleton;
}

// UDS_QuestData @ 14b56dca0

UDS_QuestData * __thiscall UDS_QuestData::UDS_QuestData(UDS_QuestData *this,FVTableHelper *param_1)

{
  UDS_DataBase::UDS_DataBase((UDS_DataBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_QuestData__6B_;
  this->QuestID = 0;
  this->IsAutoTracking = false;
  this->LimitEndTime = 0.0;
  this->QuestType = None;
  this->QuestStateType = Progress;
  *(undefined8 *)&this->QuestStateChangedEvent = 0;
  *(undefined8 *)&(this->QuestStateChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->QuestStateChangedEvent).field_0x10 = 0;
  *(undefined8 *)&this->QuestObjectiveProgressCount_Map = 0;
  *(undefined8 *)&(this->QuestObjectiveProgressCount_Map).field_0x8 = 0;
  *(undefined8 *)&(this->QuestObjectiveProgressCount_Map).field_0x20 = 0;
  *(undefined8 *)&(this->QuestStateChangedEvent).field_0x18 = 2;
  *(undefined4 *)&(this->QuestObjectiveProgressCount_Map).field_0x28 = 0;
  *(undefined4 *)&(this->QuestObjectiveProgressCount_Map).field_0x2c = 0x80;
  *(undefined4 *)&(this->QuestObjectiveProgressCount_Map).field_0x34 = 0;
  *(undefined4 *)&(this->QuestObjectiveProgressCount_Map).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->QuestObjectiveProgressCount_Map).field_0x40 = 0;
  *(undefined4 *)&(this->QuestObjectiveProgressCount_Map).field_0x48 = 0;
  return this;
}

// ~UDS_QuestData @ 14b56e460

void __thiscall UDS_QuestData::~UDS_QuestData(UDS_QuestData *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_QuestData__6B_;
  *(undefined4 *)&(this->QuestObjectiveProgressCount_Map).field_0x48 = 0;
  pvVar1 = *(void **)&(this->QuestObjectiveProgressCount_Map).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->QuestObjectiveProgressCount_Map);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->QuestStateChangedEvent).field_0x8,
             *(int *)&(this->QuestStateChangedEvent).field_0x10);
  pvVar1 = *(void **)&(this->QuestStateChangedEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->QuestStateChangedEvent);
  UDS_DataBase::~UDS_DataBase((UDS_DataBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b56f930

UClass * __cdecl UDS_QuestData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_QuestData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_QuestData",
               &Z_Registration_Info_UClass_UDS_QuestData.InnerSingleton,
               StaticRegisterNativesUDS_QuestData,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_QuestData>,InternalVTableHelperCtorCaller<UDS_QuestData>,
               local_res8,UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_QuestData.InnerSingleton;
}

// StaticRegisterNativesUDS_QuestData @ 14b56fdd0

void __cdecl UDS_QuestData::StaticRegisterNativesUDS_QuestData(void)

{
  return;
}

// UDS_QuestData @ 14ba91ee0

UDS_QuestData * __thiscall
UDS_QuestData::UDS_QuestData(UDS_QuestData *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *this_00;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint *puVar11;
  longlong lVar12;
  int local_78;
  uint uStack_74;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  UDS_DataBase::UDS_DataBase((UDS_DataBase *)this,param_1);
  this->IsAutoTracking = false;
  this->LimitEndTime = 0.0;
  this_00 = &this->QuestObjectiveProgressCount_Map;
  this->QuestType = None;
  this->QuestStateType = Progress;
  puVar1 = &(this->QuestObjectiveProgressCount_Map).field_0x48;
  this->_padding_ = (longlong)&___7UDS_QuestData__6B_;
  puVar5 = &(this->QuestObjectiveProgressCount_Map).field_0xc;
  *(undefined8 *)&this->QuestStateChangedEvent = 0;
  *(undefined8 *)&(this->QuestStateChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->QuestStateChangedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->QuestStateChangedEvent).field_0x18 = 2;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined4 *)&(this->QuestObjectiveProgressCount_Map).field_0x8 = 0;
  *(undefined4 *)puVar5 = 0;
  *(undefined8 *)&(this->QuestObjectiveProgressCount_Map).field_0x20 = 0;
  *(undefined4 *)&(this->QuestObjectiveProgressCount_Map).field_0x28 = 0;
  *(undefined4 *)&(this->QuestObjectiveProgressCount_Map).field_0x2c = 0x80;
  *(undefined4 *)&(this->QuestObjectiveProgressCount_Map).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->QuestObjectiveProgressCount_Map).field_0x34 = 0;
  *(undefined8 *)&(this->QuestObjectiveProgressCount_Map).field_0x40 = 0;
  *(undefined4 *)puVar1 = 0;
  this->QuestID = 0;
  iVar3 = *(int *)puVar1;
  if (1 >= iVar3) {
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)this_00);
  }
  *(undefined4 *)&(this->QuestObjectiveProgressCount_Map).field_0x8 = 0;
  if (*(int *)puVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this_00,0,(int *)puVar5);
  }
  puVar5 = &(this->QuestObjectiveProgressCount_Map).field_0x10;
  *(undefined4 *)&(this->QuestObjectiveProgressCount_Map).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->QuestObjectiveProgressCount_Map).field_0x34 = 0;
  iVar4 = *(int *)&(this->QuestObjectiveProgressCount_Map).field_0x2c;
  *(undefined4 *)&(this->QuestObjectiveProgressCount_Map).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->QuestObjectiveProgressCount_Map).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc((TBitArray<FDefaultBitArrayAllocator> *)puVar5,0);
  }
  if (1 < iVar3) {
    puVar2 = &(this->QuestObjectiveProgressCount_Map).field_0x38;
    *(undefined4 *)puVar1 = 1;
    if ((*(longlong *)&(this->QuestObjectiveProgressCount_Map).field_0x40 != 0) &&
       (TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&(this->QuestObjectiveProgressCount_Map).field_0x40,0,0,4),
       *(longlong *)&(this->QuestObjectiveProgressCount_Map).field_0x40 != 0)) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(this->QuestObjectiveProgressCount_Map).field_0x40,0,0,4);
    }
    puVar6 = *(undefined4 **)&(this->QuestObjectiveProgressCount_Map).field_0x40;
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)puVar2;
    }
    *puVar6 = 0xffffffff;
    if (*(int *)puVar1 != 0) {
      iVar3 = *(int *)&(this->QuestObjectiveProgressCount_Map).field_0x28;
      local_78 = 0;
      uStack_74 = 1;
      iStack_64 = 0;
      iStack_60 = 0;
      if (iVar3 != 0) {
        puVar11 = *(uint **)&(this->QuestObjectiveProgressCount_Map).field_0x20;
        if (puVar11 == (uint *)0x0) {
          puVar11 = (uint *)puVar5;
        }
        uVar10 = *puVar11;
        iStack_60 = 0;
        local_78 = 0;
        while (uVar10 == 0) {
          iStack_60 = iStack_60 + 0x20;
          lVar8 = (longlong)local_78;
          local_78 = local_78 + 1;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78) goto LAB_14ba920ea;
          uVar10 = puVar11[lVar8 + 1];
        }
        uStack_74 = -uVar10 & uVar10;
        uVar7 = (ulonglong)uStack_74 * 2 + 1;
        lVar8 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        iStack_64 = iStack_60 + -1 + (int)lVar8;
        if (iVar3 < iStack_64) {
LAB_14ba920ea:
          iStack_64 = iVar3;
        }
      }
      local_50._padding_._0_4_ = local_78;
      local_50._padding_._4_4_ = uStack_74;
      local_50.UnvisitedBitMask = 0xffffffff;
      local_50.CurrentBitIndex = iStack_64;
      local_50._28_4_ = uStack_5c;
      local_50.BaseBitIndex = iStack_60;
      local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar5;
      if (iStack_64 < iVar3) {
        do {
          lVar8 = *(longlong *)&this_00->field_0x0;
          lVar12 = (longlong)local_50.CurrentBitIndex * 0x10;
          uVar10 = *(int *)puVar1 - 1U & *(uint *)(lVar12 + lVar8);
          *(uint *)(lVar12 + 0xc + lVar8) = uVar10;
          puVar5 = *(undefined1 **)&(this->QuestObjectiveProgressCount_Map).field_0x40;
          puVar9 = puVar2;
          if (puVar5 != (undefined1 *)0x0) {
            puVar9 = puVar5;
          }
          uVar7 = (longlong)*(int *)puVar1 - 1U & (longlong)(int)uVar10;
          *(undefined4 *)(lVar12 + 8 + lVar8) = *(undefined4 *)(puVar9 + uVar7 * 4);
          *(int *)(puVar9 + uVar7 * 4) = local_50.CurrentBitIndex;
          local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
      }
    }
  }
  this->LimitEndTime = 0.0;
  return this;
}

// BindQuestStateChangedEvent @ 14ba94de0

void __thiscall
UDS_QuestData::BindQuestStateChangedEvent(UDS_QuestData *this,UObject *param_1,FName param_2)

{
  TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
  AddUFunction<UObject>
            ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
             &this->QuestStateChangedEvent,(UObject *)&stack0x00000008,(FName *)param_1);
  TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
            (&this->QuestStateChangedEvent,(uint)this->QuestStateType);
  return;
}

// FindOrAddData @ 14baa1070

TWeakObjectPtr<UDS_QuestData,FWeakObjectPtr> __cdecl
UDS_QuestData::FindOrAddData(ulong64 param_1,ulong64 param_2)

{
  bool in_R8B;
  
  GetData(param_1,param_2,in_R8B);
  return (TWeakObjectPtr<UDS_QuestData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetData @ 14baa7b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_QuestData,FWeakObjectPtr> __cdecl
UDS_QuestData::GetData(ulong64 param_1,ulong64 param_2,bool param_3)

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
    TDS_DataSetGetter<UDS_QuestDataSet>::Get((ulong64)&local_c8);
    bVar2 = TWeakObjectPtr<UDS_QuestDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_QuestDataSet,FWeakObjectPtr> *)&local_c8,(void *)0x0);
    if (bVar2) goto LAB_14baa7d8f;
    pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_c8);
    TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_c0);
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
    if (pUVar5 == (UObject *)0x0) {
LAB_14baa7b9b:
      pUVar5 = (UObject *)0x0;
    }
    else {
      pUVar6 = Z_Construct_UClass_UDS_QuestData_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) goto LAB_14baa7b9b;
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
    bVar2 = TWeakObjectPtr<UDS_QuestData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_QuestData,FWeakObjectPtr> *)&local_d8,(void *)0x0);
    if (!bVar2) {
      *(FWeakObjectPtr *)param_1 = local_d8;
      return (TWeakObjectPtr<UDS_QuestData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
    }
  }
  else {
    TDS_DataSetGetter<UDS_QuestDataSet>::Get((ulong64)&local_c8);
    bVar2 = TWeakObjectPtr<UDS_QuestDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_QuestDataSet,FWeakObjectPtr> *)&local_c8,(void *)0x0);
    if (!bVar2) {
      pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_c8);
      TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_c0);
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
      if (pUVar5 == (UObject *)0x0) {
LAB_14baa7c65:
        pUVar5 = (UObject *)0x0;
      }
      else {
        pUVar6 = Z_Construct_UClass_UDS_QuestData_NoRegister();
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) goto LAB_14baa7c65;
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
      bVar2 = TWeakObjectPtr<UDS_QuestData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_QuestData,FWeakObjectPtr> *)&local_d8,(void *)0x0);
      if (!bVar2) {
        *(FWeakObjectPtr *)param_1 = local_d8;
        return (TWeakObjectPtr<UDS_QuestData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
      pUVar5 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar5,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar6 = Z_Construct_UClass_UDS_QuestData_NoRegister();
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
          goto LAB_14baa7d96;
        }
      }
    }
  }
LAB_14baa7d8f:
  *(undefined8 *)param_1 = 0;
  local_d0 = (UObject *)0x0;
LAB_14baa7d96:
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_d0);
  return (TWeakObjectPtr<UDS_QuestData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetObjectiveProgressCount @ 14baae8b0

int __thiscall UDS_QuestData::GetObjectiveProgressCount(UDS_QuestData *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->QuestObjectiveProgressCount_Map).field_0x8 !=
      *(int *)&(this->QuestObjectiveProgressCount_Map).field_0x34) {
    puVar4 = *(undefined1 **)&(this->QuestObjectiveProgressCount_Map).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->QuestObjectiveProgressCount_Map).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->QuestObjectiveProgressCount_Map).field_0x48 - 1U &
                              param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->QuestObjectiveProgressCount_Map;
      do {
        if (*(int *)(lVar1 + (longlong)iVar2 * 0x10) == param_1) {
          piVar3 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
                   FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                *)&this->QuestObjectiveProgressCount_Map,param_1);
          return *piVar3;
        }
        iVar2 = *(int *)(lVar1 + 8 + (longlong)iVar2 * 0x10);
      } while (iVar2 != -1);
    }
  }
  return 0;
}

// InitQuestData @ 14bab5430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_QuestData::InitQuestData(UDS_QuestData *this,DbWorkItem *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FDateTime *pFVar5;
  FDS_QuestBaseTableRow *this_00;
  UDS_LogManager *pUVar6;
  int *piVar7;
  undefined1 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStackY_418 [32];
  ForAnyElementType local_3d8;
  int local_3d0;
  int iStack_3cc;
  undefined4 local_3c8;
  undefined4 local_3c4;
  undefined1 local_3c0 [16];
  undefined4 *local_3b0;
  undefined4 *local_3a8;
  FDateTime local_3a0;
  SqlMainQuestTable local_398;
  SqlWeeklyQuestTable local_348;
  SqlMonthlyQuestTable local_2f8;
  SqlLocalQuestTable local_2a8;
  SqlDailyQuestTable local_258;
  SqlInstanceQuestTable local_208;
  SqlRepeatQuestTable local_1b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_418;
  (**(code **)(this->_padding_ + 0x2c8))();
  uVar10 = 0;
  local_3d8.Data = (FScriptContainerElement *)0x0;
  local_3d0 = 0;
  iStack_3cc = 0;
  switch((param_1->_impl_)._oneof_case_[0]) {
  case 0x55:
    ds_game::SqlMainQuestTable::SqlMainQuestTable
              (&local_398,(Arena *)0x0,(SqlMainQuestTable *)(param_1->_impl_).Item_.characterlevel_)
    ;
    local_398._padding_ = (longlong)&___7SqlMainQuestTable_ds_game__6B_;
    this->QuestID = local_398._impl_.quest_id_;
    this->QuestStateType = (EDS_QuestStateType)local_398._impl_.quest_state_;
    if ((local_398._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int & 4) == 0) {
      piVar7 = &local_398._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.size;
      local_398._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.size =
           (uint)local_398._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int & 3;
      puVar8 = (undefined1 *)((longlong)&local_398._impl_.objective_count_.soo_rep_.field0_0x0 + 8);
    }
    else {
      piVar7 = (int *)(local_398._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int &
                      0xfffffffffffffff8);
      puVar8 = (undefined1 *)
               (local_398._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int &
               0xfffffffffffffff8);
    }
    for (; piVar7 != (int *)(puVar8 + (longlong)
                                      local_398._impl_.objective_count_.soo_rep_.field0_0x0.long_rep
                                      .size * 4); piVar7 = piVar7 + 1) {
      iVar1 = *piVar7;
      if (local_3d0 == iStack_3cc) {
        local_3d0 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_3d8,&iStack_3cc);
      }
      *(int *)(local_3d8.Data + (longlong)local_3d0 * 4) = iVar1;
      local_3d0 = local_3d0 + 1;
    }
    ds_game::SqlMainQuestTable::~SqlMainQuestTable(&local_398);
    break;
  case 0x56:
    ds_game::SqlLocalQuestTable::SqlLocalQuestTable
              (&local_2a8,(Arena *)0x0,(SqlLocalQuestTable *)(param_1->_impl_).Item_.characterlevel_
              );
    local_2a8._padding_ = (longlong)&___7SqlLocalQuestTable_ds_game__6B_;
    this->QuestID = local_2a8._impl_.quest_id_;
    this->IsAutoTracking = local_2a8._impl_.auto_tracking_;
    this->QuestStateType = (EDS_QuestStateType)local_2a8._impl_.quest_state_;
    if ((local_2a8._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int & 4) == 0) {
      piVar7 = &local_2a8._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.size;
      local_2a8._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.size =
           (uint)local_2a8._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int & 3;
      puVar8 = (undefined1 *)((longlong)&local_2a8._impl_.objective_count_.soo_rep_.field0_0x0 + 8);
    }
    else {
      piVar7 = (int *)(local_2a8._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int &
                      0xfffffffffffffff8);
      puVar8 = (undefined1 *)
               (local_2a8._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int &
               0xfffffffffffffff8);
    }
    for (; piVar7 != (int *)(puVar8 + (longlong)
                                      local_2a8._impl_.objective_count_.soo_rep_.field0_0x0.long_rep
                                      .size * 4); piVar7 = piVar7 + 1) {
      iVar1 = *piVar7;
      if (local_3d0 == iStack_3cc) {
        local_3d0 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_3d8,&iStack_3cc);
      }
      *(int *)(local_3d8.Data + (longlong)local_3d0 * 4) = iVar1;
      local_3d0 = local_3d0 + 1;
    }
    ds_game::SqlLocalQuestTable::~SqlLocalQuestTable(&local_2a8);
    break;
  case 0x57:
    ds_game::SqlDailyQuestTable::SqlDailyQuestTable
              (&local_258,(Arena *)0x0,(SqlDailyQuestTable *)(param_1->_impl_).Item_.characterlevel_
              );
    local_258._padding_ = (longlong)&___7SqlDailyQuestTable_ds_game__6B_;
    this->QuestID = local_258._impl_.quest_id_;
    this->IsAutoTracking = local_258._impl_.auto_tracking_;
    this->QuestStateType = (EDS_QuestStateType)local_258._impl_.quest_state_;
    if ((local_258._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int & 4) == 0) {
      piVar7 = &local_258._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.size;
      local_258._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.size =
           (uint)local_258._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int & 3;
      puVar8 = (undefined1 *)((longlong)&local_258._impl_.objective_count_.soo_rep_.field0_0x0 + 8);
    }
    else {
      piVar7 = (int *)(local_258._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int &
                      0xfffffffffffffff8);
      puVar8 = (undefined1 *)
               (local_258._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int &
               0xfffffffffffffff8);
    }
    for (; piVar7 != (int *)(puVar8 + (longlong)
                                      local_258._impl_.objective_count_.soo_rep_.field0_0x0.long_rep
                                      .size * 4); piVar7 = piVar7 + 1) {
      iVar1 = *piVar7;
      if (local_3d0 == iStack_3cc) {
        local_3d0 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_3d8,&iStack_3cc);
      }
      *(int *)(local_3d8.Data + (longlong)local_3d0 * 4) = iVar1;
      local_3d0 = local_3d0 + 1;
    }
    ds_game::SqlDailyQuestTable::~SqlDailyQuestTable(&local_258);
    break;
  case 0x60:
    ds_game::SqlWeeklyQuestTable::SqlWeeklyQuestTable
              (&local_348,(Arena *)0x0,
               (SqlWeeklyQuestTable *)(param_1->_impl_).Item_.characterlevel_);
    local_348._padding_ = (longlong)&___7SqlWeeklyQuestTable_ds_game__6B_;
    this->QuestID = local_348._impl_.quest_id_;
    this->QuestStateType = (EDS_QuestStateType)local_348._impl_.quest_state_;
    if ((local_348._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int & 4) == 0) {
      piVar7 = &local_348._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.size;
      local_348._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.size =
           (uint)local_348._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int & 3;
      puVar8 = (undefined1 *)((longlong)&local_348._impl_.objective_count_.soo_rep_.field0_0x0 + 8);
    }
    else {
      piVar7 = (int *)(local_348._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int &
                      0xfffffffffffffff8);
      puVar8 = (undefined1 *)
               (local_348._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int &
               0xfffffffffffffff8);
    }
    for (; piVar7 != (int *)(puVar8 + (longlong)
                                      local_348._impl_.objective_count_.soo_rep_.field0_0x0.long_rep
                                      .size * 4); piVar7 = piVar7 + 1) {
      iVar1 = *piVar7;
      if (local_3d0 == iStack_3cc) {
        local_3d0 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_3d8,&iStack_3cc);
      }
      *(int *)(local_3d8.Data + (longlong)local_3d0 * 4) = iVar1;
      local_3d0 = local_3d0 + 1;
    }
    ds_game::SqlWeeklyQuestTable::~SqlWeeklyQuestTable(&local_348);
    break;
  case 0x61:
    ds_game::SqlMonthlyQuestTable::SqlMonthlyQuestTable
              (&local_2f8,(Arena *)0x0,
               (SqlMonthlyQuestTable *)(param_1->_impl_).Item_.characterlevel_);
    local_2f8._padding_ = (longlong)&___7SqlMonthlyQuestTable_ds_game__6B_;
    this->QuestID = local_2f8._impl_.quest_id_;
    this->QuestStateType = (EDS_QuestStateType)local_2f8._impl_.quest_state_;
    if ((local_2f8._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int & 4) == 0) {
      piVar7 = &local_2f8._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.size;
      local_2f8._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.size =
           (uint)local_2f8._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int & 3;
      puVar8 = (undefined1 *)((longlong)&local_2f8._impl_.objective_count_.soo_rep_.field0_0x0 + 8);
    }
    else {
      piVar7 = (int *)(local_2f8._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int &
                      0xfffffffffffffff8);
      puVar8 = (undefined1 *)
               (local_2f8._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int &
               0xfffffffffffffff8);
    }
    for (; piVar7 != (int *)(puVar8 + (longlong)
                                      local_2f8._impl_.objective_count_.soo_rep_.field0_0x0.long_rep
                                      .size * 4); piVar7 = piVar7 + 1) {
      iVar1 = *piVar7;
      if (local_3d0 == iStack_3cc) {
        local_3d0 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_3d8,&iStack_3cc);
      }
      *(int *)(local_3d8.Data + (longlong)local_3d0 * 4) = iVar1;
      local_3d0 = local_3d0 + 1;
    }
    ds_game::SqlMonthlyQuestTable::~SqlMonthlyQuestTable(&local_2f8);
    break;
  case 0x62:
    ds_game::SqlInstanceQuestTable::SqlInstanceQuestTable
              (&local_208,(Arena *)0x0,
               (SqlInstanceQuestTable *)(param_1->_impl_).Item_.characterlevel_);
    local_208._padding_ = (longlong)&___7SqlInstanceQuestTable_ds_game__6B_;
    this->QuestID = local_208._impl_.quest_id_;
    this->QuestStateType = (EDS_QuestStateType)local_208._impl_.quest_state_;
    DS_Util::ConvertTimestampToDateTime((Timestamp *)(local_3c0 + 8));
    pFVar5 = FDateTime::FDateTime(&local_3a0,0x7b2,1,1,0,0,0,0);
    this->LimitEndTime = (double)(local_3c0._8_8_ - pFVar5->Ticks) * __real_3e7ad7f29abcaf48;
    if ((local_208._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int & 4) == 0) {
      piVar7 = &local_208._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.size;
      local_208._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.size =
           (uint)local_208._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int & 3;
      puVar8 = (undefined1 *)((longlong)&local_208._impl_.objective_count_.soo_rep_.field0_0x0 + 8);
    }
    else {
      piVar7 = (int *)(local_208._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int &
                      0xfffffffffffffff8);
      puVar8 = (undefined1 *)
               (local_208._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int &
               0xfffffffffffffff8);
    }
    for (; piVar7 != (int *)(puVar8 + (longlong)
                                      local_208._impl_.objective_count_.soo_rep_.field0_0x0.long_rep
                                      .size * 4); piVar7 = piVar7 + 1) {
      iVar1 = *piVar7;
      if (local_3d0 == iStack_3cc) {
        local_3d0 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_3d8,&iStack_3cc);
      }
      *(int *)(local_3d8.Data + (longlong)local_3d0 * 4) = iVar1;
      local_3d0 = local_3d0 + 1;
    }
    ds_game::SqlInstanceQuestTable::~SqlInstanceQuestTable(&local_208);
    break;
  case 0x68:
    ds_game::SqlRepeatQuestTable::SqlRepeatQuestTable
              (&local_1b8,(Arena *)0x0,
               (SqlRepeatQuestTable *)(param_1->_impl_).Item_.characterlevel_);
    local_1b8._padding_ = (longlong)&___7SqlRepeatQuestTable_ds_game__6B_;
    this->QuestID = local_1b8._impl_.quest_id_;
    this->QuestStateType = (EDS_QuestStateType)local_1b8._impl_.quest_state_;
    if ((local_1b8._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int & 4) == 0) {
      piVar7 = &local_1b8._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.size;
      local_1b8._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.size =
           (uint)local_1b8._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int & 3;
      puVar8 = (undefined1 *)((longlong)&local_1b8._impl_.objective_count_.soo_rep_.field0_0x0 + 8);
    }
    else {
      piVar7 = (int *)(local_1b8._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int &
                      0xfffffffffffffff8);
      puVar8 = (undefined1 *)
               (local_1b8._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int &
               0xfffffffffffffff8);
    }
    for (; piVar7 != (int *)(puVar8 + (longlong)
                                      local_1b8._impl_.objective_count_.soo_rep_.field0_0x0.long_rep
                                      .size * 4); piVar7 = piVar7 + 1) {
      iVar1 = *piVar7;
      if (local_3d0 == iStack_3cc) {
        local_3d0 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_3d8,&iStack_3cc);
      }
      *(int *)(local_3d8.Data + (longlong)local_3d0 * 4) = iVar1;
      local_3d0 = local_3d0 + 1;
    }
    ds_game::SqlRepeatQuestTable::~SqlRepeatQuestTable(&local_1b8);
  }
  this_00 = FDS_QuestBaseTableRow::GetRef((longlong)this->QuestID,true);
  bVar3 = FDS_QuestBaseTableRow::IsValid(this_00);
  if (bVar3) {
    this->QuestType = this_00->QuestType;
    uVar11 = uVar10;
    if (0 < (this_00->ID_QuestObjectiveId).ArrayNum) {
      do {
        uVar9 = (uint)uVar10;
        uVar4 = 0;
        if ((int)uVar9 < (this_00->ID_QuestObjectiveId).ArrayNum) {
          uVar4 = ~uVar9 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_3c4 = *(undefined4 *)((this_00->ID_QuestObjectiveId).AllocatorInstance.Data + uVar11);
        local_3c8 = 0;
        if ((int)uVar9 < local_3d0) {
          uVar4 = 0;
          if ((int)uVar9 < local_3d0) {
            uVar4 = ~uVar9 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          local_3c8 = *(undefined4 *)(local_3d8.Data + uVar11);
        }
        local_3b0 = &local_3c4;
        local_3a8 = &local_3c8;
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<int_&,int_&>_>
                  ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)&this->QuestObjectiveProgressCount_Map,
                   (TPairInitializer<int_&,int_&> *)local_3c0,(bool *)&local_3b0);
        uVar10 = (ulonglong)(uVar9 + 1);
        uVar11 = uVar11 + 4;
      } while ((int)(uVar9 + 1) < (this_00->ID_QuestObjectiveId).ArrayNum);
    }
    UpdateQuestObjectiveProgressByItem(this);
    UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
    UDS_DataBase::CheckDirty((UDS_DataBase *)this);
  }
  else {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_QuestData::InitQuestData",0x1c,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_168.Ptr,0x94,
                 L"Quest Data initialization failed. not found quest id %d");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
  }
  if (local_3d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3d8.Data);
  }
  return;
}

// IsGoalQuestObjective @ 14bab88e0

bool __thiscall UDS_QuestData::IsGoalQuestObjective(UDS_QuestData *this,int param_1)

{
  undefined1 *puVar1;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *this_00;
  bool bVar2;
  int iVar3;
  FDS_QuestObjectiveTableRow *this_01;
  int *piVar4;
  undefined1 *puVar5;
  
  this_00 = &this->QuestObjectiveProgressCount_Map;
  if (*(int *)&(this->QuestObjectiveProgressCount_Map).field_0x8 !=
      *(int *)&(this->QuestObjectiveProgressCount_Map).field_0x34) {
    puVar1 = &(this->QuestObjectiveProgressCount_Map).field_0x38;
    puVar5 = *(undefined1 **)&(this->QuestObjectiveProgressCount_Map).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = puVar1;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->QuestObjectiveProgressCount_Map).field_0x48 - 1U &
                              param_1) * 4);
    if (iVar3 != -1) {
      do {
        if (*(int *)(*(longlong *)this_00 + (longlong)iVar3 * 0x10) == param_1) {
          this_01 = FDS_QuestObjectiveTableRow::GetRef((longlong)param_1,true);
          bVar2 = FDS_QuestObjectiveTableRow::IsValid(this_01);
          if (!bVar2) {
            return false;
          }
          if (*(int *)&(this->QuestObjectiveProgressCount_Map).field_0x8 !=
              *(int *)&(this->QuestObjectiveProgressCount_Map).field_0x34) {
            puVar5 = *(undefined1 **)&(this->QuestObjectiveProgressCount_Map).field_0x40;
            if (puVar5 == (undefined1 *)0x0) {
              puVar5 = puVar1;
            }
            iVar3 = *(int *)(puVar5 + (ulonglong)
                                      (*(int *)&(this->QuestObjectiveProgressCount_Map).field_0x48 -
                                       1U & param_1) * 4);
            if (iVar3 != -1) {
              do {
                if (*(int *)(*(longlong *)this_00 + (longlong)iVar3 * 0x10) == param_1) {
                  piVar4 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                           ::FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                          *)this_00,param_1);
                  return this_01->QuestDefineCount <= *piVar4;
                }
                iVar3 = *(int *)(*(longlong *)this_00 + 8 + (longlong)iVar3 * 0x10);
              } while (iVar3 != -1);
            }
          }
          return this_01->QuestDefineCount < 1;
        }
        iVar3 = *(int *)(*(longlong *)this_00 + 8 + (longlong)iVar3 * 0x10);
      } while (iVar3 != -1);
    }
  }
  return false;
}

// ResetData @ 14bac9c80

void __thiscall UDS_QuestData::ResetData(UDS_QuestData *this)

{
  undefined1 *puVar1;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *this_00;
  int iVar2;
  bool bVar3;
  
  this_00 = &this->QuestObjectiveProgressCount_Map;
  this->QuestID = 0;
  bVar3 = 1 < *(int *)&(this->QuestObjectiveProgressCount_Map).field_0x48;
  if (!bVar3) {
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)this_00);
  }
  puVar1 = &(this->QuestObjectiveProgressCount_Map).field_0xc;
  *(undefined4 *)&(this->QuestObjectiveProgressCount_Map).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->QuestObjectiveProgressCount_Map).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->QuestObjectiveProgressCount_Map).field_0x34 = 0;
  iVar2 = *(int *)&(this->QuestObjectiveProgressCount_Map).field_0x2c;
  *(undefined4 *)&(this->QuestObjectiveProgressCount_Map).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->QuestObjectiveProgressCount_Map).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->QuestObjectiveProgressCount_Map).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->QuestObjectiveProgressCount_Map).field_0x48 = 1;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Rehash
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               this_00);
  }
  this->LimitEndTime = 0.0;
  return;
}

// SetIsAutoTracking @ 14baccf60

void __thiscall UDS_QuestData::SetIsAutoTracking(UDS_QuestData *this,bool param_1)

{
  this->IsAutoTracking = param_1;
  return;
}

// UnbindQuestStateChangedEvent @ 14bad0100

void __thiscall UDS_QuestData::UnbindQuestStateChangedEvent(UDS_QuestData *this,UObject *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->QuestStateChangedEvent,
             param_1);
  return;
}

// UpdateObjectiveProgressCount @ 14bad9030

void __thiscall
UDS_QuestData::UpdateObjectiveProgressCount(UDS_QuestData *this,int param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->QuestObjectiveProgressCount_Map).field_0x8 !=
      *(int *)&(this->QuestObjectiveProgressCount_Map).field_0x34) {
    puVar4 = *(undefined1 **)&(this->QuestObjectiveProgressCount_Map).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->QuestObjectiveProgressCount_Map).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->QuestObjectiveProgressCount_Map).field_0x48 - 1U &
                              param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->QuestObjectiveProgressCount_Map;
      while (*(int *)(lVar1 + (longlong)iVar2 * 0x10) != param_1) {
        iVar2 = *(int *)(lVar1 + 8 + (longlong)iVar2 * 0x10);
        if (iVar2 == -1) {
          return;
        }
      }
      piVar3 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
               FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                            *)&this->QuestObjectiveProgressCount_Map,param_1);
      *piVar3 = param_2;
    }
  }
  return;
}

// UpdateQuestData @ 14bad9230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall UDS_QuestData::UpdateQuestData(UDS_QuestData *this,DbWorkItem *param_1)

{
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  FDS_QuestBaseTableRow *this_01;
  int *piVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_328 [32];
  longlong local_308;
  longlong local_300;
  ForAnyElementType local_2f8;
  int local_2f0;
  int iStack_2ec;
  int local_2e8;
  uint local_2e4;
  int local_2e0;
  undefined1 local_2dc [4];
  uint *local_2d8;
  int *local_2d0;
  SqlMainQuestTable local_2c8;
  SqlWeeklyQuestTable local_278;
  SqlMonthlyQuestTable local_228;
  SqlDailyQuestTable local_1d8;
  SqlLocalQuestTable local_188;
  SqlInstanceQuestTable local_138;
  SqlRepeatQuestTable local_e8;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_328;
  uVar11 = 0;
  local_2e8 = 0;
  local_2f8.Data = (FScriptContainerElement *)0x0;
  local_2f0 = 0;
  iStack_2ec = 0;
  switch((param_1->_impl_)._oneof_case_[0]) {
  case 0x55:
    ds_game::SqlMainQuestTable::SqlMainQuestTable
              (&local_2c8,(Arena *)0x0,(SqlMainQuestTable *)(param_1->_impl_).Item_.characterlevel_)
    ;
    local_2c8._padding_ = (longlong)&___7SqlMainQuestTable_ds_game__6B_;
    local_2e8 = local_2c8._impl_.quest_id_;
    this->QuestStateType = (EDS_QuestStateType)local_2c8._impl_.quest_state_;
    uVar10 = uVar11;
    uVar12 = uVar11;
    while( true ) {
      uVar7 = local_2c8._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.size;
      if ((local_2c8._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int & 4) == 0) {
        uVar7 = (uint)local_2c8._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int &
                3;
      }
      if ((int)uVar7 <= (int)uVar10) break;
      if ((local_2c8._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int & 4) == 0) {
        puVar5 = (undefined1 *)
                 ((longlong)&local_2c8._impl_.objective_count_.soo_rep_.field0_0x0 + 8);
      }
      else {
        puVar5 = (undefined1 *)
                 (local_2c8._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int &
                 0xfffffffffffffff8);
      }
      uVar7 = *(undefined4 *)(puVar5 + uVar12);
      if (local_2f0 == iStack_2ec) {
        local_2f0 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_2f8,&iStack_2ec);
      }
      uVar10 = (ulonglong)((int)uVar10 + 1);
      uVar12 = uVar12 + 4;
      *(undefined4 *)(local_2f8.Data + (longlong)local_2f0 * 4) = uVar7;
      local_2f0 = local_2f0 + 1;
    }
    ds_game::SqlMainQuestTable::~SqlMainQuestTable(&local_2c8);
    break;
  case 0x56:
    ds_game::SqlLocalQuestTable::SqlLocalQuestTable
              (&local_188,(Arena *)0x0,(SqlLocalQuestTable *)(param_1->_impl_).Item_.characterlevel_
              );
    local_188._padding_ = (longlong)&___7SqlLocalQuestTable_ds_game__6B_;
    local_2e8 = local_188._impl_.quest_id_;
    this->QuestStateType = (EDS_QuestStateType)local_188._impl_.quest_state_;
    uVar10 = uVar11;
    uVar12 = uVar11;
    while( true ) {
      uVar7 = local_188._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.size;
      if ((local_188._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int & 4) == 0) {
        uVar7 = (uint)local_188._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int &
                3;
      }
      if ((int)uVar7 <= (int)uVar10) break;
      if ((local_188._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int & 4) == 0) {
        puVar5 = (undefined1 *)
                 ((longlong)&local_188._impl_.objective_count_.soo_rep_.field0_0x0 + 8);
      }
      else {
        puVar5 = (undefined1 *)
                 (local_188._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int &
                 0xfffffffffffffff8);
      }
      uVar7 = *(undefined4 *)(puVar5 + uVar12);
      if (local_2f0 == iStack_2ec) {
        local_2f0 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_2f8,&iStack_2ec);
      }
      uVar10 = (ulonglong)((int)uVar10 + 1);
      uVar12 = uVar12 + 4;
      *(undefined4 *)(local_2f8.Data + (longlong)local_2f0 * 4) = uVar7;
      local_2f0 = local_2f0 + 1;
    }
    ds_game::SqlLocalQuestTable::~SqlLocalQuestTable(&local_188);
    break;
  case 0x57:
    ds_game::SqlDailyQuestTable::SqlDailyQuestTable
              (&local_1d8,(Arena *)0x0,(SqlDailyQuestTable *)(param_1->_impl_).Item_.characterlevel_
              );
    local_1d8._padding_ = (longlong)&___7SqlDailyQuestTable_ds_game__6B_;
    local_2e8 = local_1d8._impl_.quest_id_;
    this->QuestStateType = (EDS_QuestStateType)local_1d8._impl_.quest_state_;
    uVar10 = uVar11;
    uVar12 = uVar11;
    while( true ) {
      uVar7 = local_1d8._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.size;
      if ((local_1d8._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int & 4) == 0) {
        uVar7 = (uint)local_1d8._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int &
                3;
      }
      if ((int)uVar7 <= (int)uVar10) break;
      if ((local_1d8._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int & 4) == 0) {
        puVar5 = (undefined1 *)
                 ((longlong)&local_1d8._impl_.objective_count_.soo_rep_.field0_0x0 + 8);
      }
      else {
        puVar5 = (undefined1 *)
                 (local_1d8._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int &
                 0xfffffffffffffff8);
      }
      uVar7 = *(undefined4 *)(puVar5 + uVar12);
      if (local_2f0 == iStack_2ec) {
        local_2f0 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_2f8,&iStack_2ec);
      }
      uVar10 = (ulonglong)((int)uVar10 + 1);
      uVar12 = uVar12 + 4;
      *(undefined4 *)(local_2f8.Data + (longlong)local_2f0 * 4) = uVar7;
      local_2f0 = local_2f0 + 1;
    }
    ds_game::SqlDailyQuestTable::~SqlDailyQuestTable(&local_1d8);
    break;
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
    goto switchD_14bad929a_caseD_58;
  case 0x60:
    ds_game::SqlWeeklyQuestTable::SqlWeeklyQuestTable
              (&local_278,(Arena *)0x0,
               (SqlWeeklyQuestTable *)(param_1->_impl_).Item_.characterlevel_);
    local_278._padding_ = (longlong)&___7SqlWeeklyQuestTable_ds_game__6B_;
    local_2e8 = local_278._impl_.quest_id_;
    this->QuestStateType = (EDS_QuestStateType)local_278._impl_.quest_state_;
    uVar10 = uVar11;
    uVar12 = uVar11;
    while( true ) {
      uVar7 = local_278._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.size;
      if ((local_278._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int & 4) == 0) {
        uVar7 = (uint)local_278._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int &
                3;
      }
      if ((int)uVar7 <= (int)uVar10) break;
      if ((local_278._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int & 4) == 0) {
        puVar5 = (undefined1 *)
                 ((longlong)&local_278._impl_.objective_count_.soo_rep_.field0_0x0 + 8);
      }
      else {
        puVar5 = (undefined1 *)
                 (local_278._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int &
                 0xfffffffffffffff8);
      }
      uVar7 = *(undefined4 *)(puVar5 + uVar12);
      if (local_2f0 == iStack_2ec) {
        local_2f0 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_2f8,&iStack_2ec);
      }
      uVar10 = (ulonglong)((int)uVar10 + 1);
      uVar12 = uVar12 + 4;
      *(undefined4 *)(local_2f8.Data + (longlong)local_2f0 * 4) = uVar7;
      local_2f0 = local_2f0 + 1;
    }
    ds_game::SqlWeeklyQuestTable::~SqlWeeklyQuestTable(&local_278);
    break;
  case 0x61:
    ds_game::SqlMonthlyQuestTable::SqlMonthlyQuestTable
              (&local_228,(Arena *)0x0,
               (SqlMonthlyQuestTable *)(param_1->_impl_).Item_.characterlevel_);
    local_228._padding_ = (longlong)&___7SqlMonthlyQuestTable_ds_game__6B_;
    local_2e8 = local_228._impl_.quest_id_;
    this->QuestStateType = (EDS_QuestStateType)local_228._impl_.quest_state_;
    uVar10 = uVar11;
    uVar12 = uVar11;
    while( true ) {
      uVar7 = local_228._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.size;
      if ((local_228._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int & 4) == 0) {
        uVar7 = (uint)local_228._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int &
                3;
      }
      if ((int)uVar7 <= (int)uVar10) break;
      if ((local_228._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int & 4) == 0) {
        puVar5 = (undefined1 *)
                 ((longlong)&local_228._impl_.objective_count_.soo_rep_.field0_0x0 + 8);
      }
      else {
        puVar5 = (undefined1 *)
                 (local_228._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int &
                 0xfffffffffffffff8);
      }
      uVar7 = *(undefined4 *)(puVar5 + uVar12);
      if (local_2f0 == iStack_2ec) {
        local_2f0 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_2f8,&iStack_2ec);
      }
      uVar10 = (ulonglong)((int)uVar10 + 1);
      uVar12 = uVar12 + 4;
      *(undefined4 *)(local_2f8.Data + (longlong)local_2f0 * 4) = uVar7;
      local_2f0 = local_2f0 + 1;
    }
    ds_game::SqlMonthlyQuestTable::~SqlMonthlyQuestTable(&local_228);
    break;
  case 0x62:
    ds_game::SqlInstanceQuestTable::SqlInstanceQuestTable
              (&local_138,(Arena *)0x0,
               (SqlInstanceQuestTable *)(param_1->_impl_).Item_.characterlevel_);
    local_138._padding_ = (longlong)&___7SqlInstanceQuestTable_ds_game__6B_;
    local_2e8 = local_138._impl_.quest_id_;
    this->QuestStateType = (EDS_QuestStateType)local_138._impl_.quest_state_;
    uVar10 = uVar11;
    uVar12 = uVar11;
    while( true ) {
      uVar7 = local_138._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.size;
      if ((local_138._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int & 4) == 0) {
        uVar7 = (uint)local_138._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int &
                3;
      }
      if ((int)uVar7 <= (int)uVar10) break;
      if ((local_138._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int & 4) == 0) {
        puVar5 = (undefined1 *)
                 ((longlong)&local_138._impl_.objective_count_.soo_rep_.field0_0x0 + 8);
      }
      else {
        puVar5 = (undefined1 *)
                 (local_138._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int &
                 0xfffffffffffffff8);
      }
      uVar7 = *(undefined4 *)(puVar5 + uVar12);
      if (local_2f0 == iStack_2ec) {
        local_2f0 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_2f8,&iStack_2ec);
      }
      uVar10 = (ulonglong)((int)uVar10 + 1);
      uVar12 = uVar12 + 4;
      *(undefined4 *)(local_2f8.Data + (longlong)local_2f0 * 4) = uVar7;
      local_2f0 = local_2f0 + 1;
    }
    ds_game::SqlInstanceQuestTable::~SqlInstanceQuestTable(&local_138);
    break;
  case 0x68:
    ds_game::SqlRepeatQuestTable::SqlRepeatQuestTable
              (&local_e8,(Arena *)0x0,(SqlRepeatQuestTable *)(param_1->_impl_).Item_.characterlevel_
              );
    local_e8._padding_ = (longlong)&___7SqlRepeatQuestTable_ds_game__6B_;
    local_2e8 = local_e8._impl_.quest_id_;
    this->QuestStateType = (EDS_QuestStateType)local_e8._impl_.quest_state_;
    uVar10 = uVar11;
    uVar12 = uVar11;
    while( true ) {
      uVar7 = local_e8._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.size;
      if ((local_e8._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int & 4) == 0) {
        uVar7 = (uint)local_e8._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int & 3
        ;
      }
      if ((int)uVar7 <= (int)uVar10) break;
      if ((local_e8._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int & 4) == 0) {
        puVar5 = (undefined1 *)((longlong)&local_e8._impl_.objective_count_.soo_rep_.field0_0x0 + 8)
        ;
      }
      else {
        puVar5 = (undefined1 *)
                 (local_e8._impl_.objective_count_.soo_rep_.field0_0x0.long_rep.elements_int &
                 0xfffffffffffffff8);
      }
      uVar7 = *(undefined4 *)(puVar5 + uVar12);
      if (local_2f0 == iStack_2ec) {
        local_2f0 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_2f8,&iStack_2ec);
      }
      uVar10 = (ulonglong)((int)uVar10 + 1);
      uVar12 = uVar12 + 4;
      *(undefined4 *)(local_2f8.Data + (longlong)local_2f0 * 4) = uVar7;
      local_2f0 = local_2f0 + 1;
    }
    ds_game::SqlRepeatQuestTable::~SqlRepeatQuestTable(&local_e8);
    break;
  default:
switchD_14bad929a_default:
    if (local_2f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data);
    }
    return;
  }
  if (0 < local_2e8) {
    if (this->QuestStateType == Rewarded) {
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)&this->QuestObjectiveProgressCount_Map);
    }
    local_98.Elements._0_8_ = 0;
    local_98.Elements._8_8_ = 0;
    local_98.Elements._32_8_ = 0;
    local_98.Elements._40_4_ = 0;
    local_98.Elements._44_4_ = 0x80;
    local_98.Elements._48_4_ = 0xffffffff;
    local_98.Elements._52_4_ = 0;
    local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_98.HashSize = 0;
    this_01 = FDS_QuestBaseTableRow::GetRef((longlong)local_2e8,true);
    bVar2 = FDS_QuestBaseTableRow::IsValid(this_01);
    if ((bVar2) && (uVar10 = uVar11, 0 < local_2f0)) {
      do {
        uVar9 = (uint)uVar11;
        if ((-1 < (int)uVar9) && ((int)uVar9 < (this_01->ID_QuestObjectiveId).ArrayNum)) {
          iVar4 = (this_01->ID_QuestObjectiveId).ArrayNum;
          uVar3 = 0;
          if ((int)uVar9 < iVar4) {
            uVar3 = ~uVar9 >> 0x1f;
          }
          if (uVar3 == 0) {
            local_308 = (longlong)(int)uVar9;
            local_300 = (longlong)iVar4;
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          local_2e4 = *(uint *)((this_01->ID_QuestObjectiveId).AllocatorInstance.Data + uVar10);
          uVar3 = 0;
          if ((int)uVar9 < local_2f0) {
            uVar3 = ~uVar9 >> 0x1f;
          }
          if (uVar3 == 0) {
            local_308 = (longlong)(int)uVar9;
            local_300 = (longlong)local_2f0;
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          this_00 = &this->QuestObjectiveProgressCount_Map;
          local_2e0 = *(int *)(local_2f8.Data + uVar10);
          if (*(int *)&(this->QuestObjectiveProgressCount_Map).field_0x8 !=
              *(int *)&(this->QuestObjectiveProgressCount_Map).field_0x34) {
            puVar5 = *(undefined1 **)&(this->QuestObjectiveProgressCount_Map).field_0x40;
            puVar8 = &(this->QuestObjectiveProgressCount_Map).field_0x38;
            if (puVar5 != (undefined1 *)0x0) {
              puVar8 = puVar5;
            }
            iVar4 = *(int *)(puVar8 + (ulonglong)
                                      (*(int *)&(this->QuestObjectiveProgressCount_Map).field_0x48 -
                                       1U & local_2e4) * 4);
            if (iVar4 != -1) {
              do {
                if (*(uint *)(*(longlong *)this_00 + (longlong)iVar4 * 0x10) == local_2e4) {
                  piVar6 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                           ::FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                          *)this_00,local_2e4);
                  iVar4 = local_2e0;
                  if (*piVar6 < local_2e0) {
                    piVar6 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                             ::FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                            *)this_00,local_2e4);
                    *piVar6 = iVar4;
                    local_2d8 = &local_2e4;
                    local_2d0 = &local_2e0;
                    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    ::Emplace<TPairInitializer<int_&,int_&>_>
                              (&local_98,(TPairInitializer<int_&,int_&> *)local_2dc,
                               (bool *)(local_2dc + 4));
                  }
                  break;
                }
                iVar4 = *(int *)(*(longlong *)this_00 + 8 + (longlong)iVar4 * 0x10);
              } while (iVar4 != -1);
            }
          }
        }
        uVar11 = (ulonglong)(uVar9 + 1);
        uVar10 = uVar10 + 4;
      } while ((int)(uVar9 + 1) < local_2f0);
    }
    UpdateQuestObjectiveProgressByItem(this);
    UDS_QuestManager::QuestObjectiveCountHudMsg
              (&local_2e8,
               (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
               &local_98);
    UDS_QuestManager::QuestObjectiveCountSmallTalk
              (&local_2e8,
               (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
               &local_98);
    local_98.HashSize = 0;
    if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_98.Elements);
  }
switchD_14bad929a_caseD_58:
  goto switchD_14bad929a_default;
}

// UpdateQuestObjectiveProgressByItem @ 14bad9aa0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall UDS_QuestData::UpdateQuestObjectiveProgressByItem(UDS_QuestData *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar5;
  bool bVar6;
  undefined1 uVar7;
  longlong lVar8;
  FDS_QuestObjectiveTableRow *this_00;
  UObject *pUVar9;
  int *piVar10;
  int *piVar11;
  undefined1 *puVar12;
  int iVar13;
  uint uVar14;
  int *piVar15;
  uint uVar16;
  uint *puVar17;
  int iVar18;
  int iVar19;
  EDS_InventoryType local_res8 [8];
  EDS_InventoryType local_res10 [8];
  char local_res18;
  undefined1 local_res20 [8];
  FWeakObjectPtr local_b0;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  if (this->QuestStateType == Complete) {
    return false;
  }
  local_a8 = &this->QuestObjectiveProgressCount_Map;
  uStack_9c = 1;
  puVar1 = &(this->QuestObjectiveProgressCount_Map).field_0x10;
  iVar18 = 0;
  iVar19 = *(int *)&(this->QuestObjectiveProgressCount_Map).field_0x28;
  iStack_a0 = 0;
  local_res18 = '\0';
  local_88 = 0;
  iStack_8c = 0;
  if (iVar19 != 0) {
    puVar17 = *(uint **)&(this->QuestObjectiveProgressCount_Map).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar16 = *puVar17;
    local_88 = 0;
    while (uVar16 == 0) {
      lVar8 = (longlong)iStack_a0;
      local_88 = local_88 + 0x20;
      iStack_a0 = iStack_a0 + 1;
      iStack_8c = iVar19;
      if ((int)((iVar19 + -1 >> 0x1f & 0x1fU) + iVar19 + -1) >> 5 < iStack_a0) goto LAB_14bad9b6d;
      uVar16 = puVar17[lVar8 + 1];
    }
    uStack_9c = -uVar16 & uVar16;
    uVar2 = (ulonglong)uStack_9c * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iStack_8c = local_88 + -1 + (int)lVar8;
    if (iVar19 < iStack_8c) {
      iStack_8c = iVar19;
    }
  }
LAB_14bad9b6d:
  uVar16 = *(uint *)&(this->QuestObjectiveProgressCount_Map).field_0x28;
  iStack_80 = *(int *)&(this->QuestObjectiveProgressCount_Map).field_0x8 -
              *(int *)&(this->QuestObjectiveProgressCount_Map).field_0x34;
  uVar14 = uVar16 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uStack_9c,iStack_a0);
  uStack_90 = 0xffffffff;
  TStack_70.CurrentBitIndex = iStack_8c;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar16 >> 5;
  TStack_70._28_4_ = iStack_8c;
  TStack_70.BaseBitIndex = local_88;
  uStack_50 = CONCAT44(uStack_7c,iStack_80);
  local_98 = puVar1;
  iStack_84 = iStack_8c;
  local_78 = local_a8;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar19 < (int)uVar16)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  uVar3 = *(uint *)&(this->QuestObjectiveProgressCount_Map).field_0x28;
  iVar19 = 0;
  if (uVar16 != uVar3) {
    puVar12 = *(undefined1 **)&(this->QuestObjectiveProgressCount_Map).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar13 * 4);
    while (iVar19 = iVar18, uVar16 == 0) {
      lVar8 = (longlong)iVar13;
      uVar14 = uVar14 + 0x20;
      iVar13 = iVar13 + 1;
      uVar16 = uVar3;
      if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < iVar13) goto LAB_14bad9c70;
      uVar16 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar16 = (int)lVar8 + -1 + uVar14;
    if ((int)uVar3 < (int)uVar16) {
      uVar16 = uVar3;
    }
  }
LAB_14bad9c70:
  do {
    pTVar5 = local_78;
    if (*(int *)&local_78->field_0x8 - *(int *)&local_78->field_0x34 != (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_70.CurrentBitIndex == uVar16) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar5 == &this->QuestObjectiveProgressCount_Map)) {
      if (local_res18 != '\x01') {
        return (bool)local_res18;
      }
      if (iVar19 != *(int *)&(this->QuestObjectiveProgressCount_Map).field_0x8 -
                    *(int *)&(this->QuestObjectiveProgressCount_Map).field_0x34) {
        return true;
      }
      this->QuestStateType = Complete;
      return true;
    }
    piVar15 = (int *)((longlong)TStack_70.CurrentBitIndex * 0x10 + *(longlong *)pTVar5);
    this_00 = FDS_QuestObjectiveTableRow::GetRef((longlong)*piVar15,true);
    bVar6 = FDS_QuestObjectiveTableRow::IsValid(this_00);
    if (bVar6) {
      bVar6 = IsGoalQuestObjective(this,*piVar15);
      if (!bVar6) {
        if (this_00->QuestDefineType == ItemAppointTake) {
          DS_ItemDataUtil::GetItemDataByTID((int)&local_b0);
          bVar6 = FWeakObjectPtr::IsValid(&local_b0);
          if (bVar6) {
            pUVar9 = FWeakObjectPtr::Get(&local_b0);
            local_res8[0] = PlayerNormal;
            piVar10 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                      ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                                (&pUVar9[10].field_0x18,1,local_res8);
            piVar11 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                      ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                                (&pUVar9[8].field_0x18,(uint)local_res8[0],local_res8);
            if (piVar15[1] != *piVar11 + *piVar10) {
              pUVar9 = FWeakObjectPtr::Get(&local_b0);
              local_res10[0] = PlayerNormal;
              piVar10 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                        ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                                  (&pUVar9[10].field_0x18,1,local_res10);
              piVar11 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                        ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                                  (&pUVar9[8].field_0x18,(uint)local_res10[0],local_res10);
              local_res18 = '\x01';
              piVar15[1] = *piVar10 + *piVar11;
            }
          }
        }
        bVar6 = IsGoalQuestObjective(this,*piVar15);
        if (!bVar6) goto LAB_14bad9da7;
      }
      iVar19 = iVar19 + 1;
    }
LAB_14bad9da7:
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  } while( true );
}

