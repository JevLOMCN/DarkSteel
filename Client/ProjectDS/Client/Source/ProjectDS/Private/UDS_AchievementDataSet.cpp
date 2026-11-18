// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticClass @ 14b403270

UClass * __cdecl UDS_AchievementDataSet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AchievementDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AchievementDataSet",
               &Z_Registration_Info_UClass_UDS_AchievementDataSet.InnerSingleton,
               StaticRegisterNativesUDS_AchievementDataSet,0x120,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AchievementDataSet>,
               InternalVTableHelperCtorCaller<UDS_AchievementDataSet>,local_res8,
               UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AchievementDataSet.InnerSingleton;
}

// UDS_AchievementDataSet @ 14b406bf0

UDS_AchievementDataSet * __thiscall
UDS_AchievementDataSet::UDS_AchievementDataSet(UDS_AchievementDataSet *this,FVTableHelper *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_AchievementDataSet__6B_;
  *(undefined8 *)&(this->OnChangedAchievementCategoryNewSymbolDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnChangedAchievementCategoryNewSymbolDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedAchievementCategoryNewSymbolDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&this->AchievementCategorySymbolMap = 0;
  *(undefined8 *)&(this->AchievementCategorySymbolMap).field_0x8 = 0;
  *(undefined8 *)&(this->AchievementCategorySymbolMap).field_0x20 = 0;
  *(undefined8 *)&(this->OnChangedAchievementCategoryNewSymbolDelegate).Delegate.field_0x18 = 2;
  *(undefined4 *)&(this->AchievementCategorySymbolMap).field_0x28 = 0;
  *(undefined4 *)&(this->AchievementCategorySymbolMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->AchievementCategorySymbolMap).field_0x34 = 0;
  *(undefined4 *)&(this->AchievementCategorySymbolMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AchievementCategorySymbolMap).field_0x40 = 0;
  *(undefined4 *)&(this->AchievementCategorySymbolMap).field_0x48 = 0;
  return this;
}

// UDS_AchievementDataSet @ 14b406c80

UDS_AchievementDataSet * __thiscall
UDS_AchievementDataSet::UDS_AchievementDataSet
          (UDS_AchievementDataSet *this,FObjectInitializer *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_AchievementDataSet__6B_;
  *(undefined8 *)&(this->OnChangedAchievementCategoryNewSymbolDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnChangedAchievementCategoryNewSymbolDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedAchievementCategoryNewSymbolDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&this->AchievementCategorySymbolMap = 0;
  *(undefined8 *)&(this->AchievementCategorySymbolMap).field_0x8 = 0;
  *(undefined8 *)&(this->AchievementCategorySymbolMap).field_0x20 = 0;
  *(undefined8 *)&(this->OnChangedAchievementCategoryNewSymbolDelegate).Delegate.field_0x18 = 2;
  *(undefined4 *)&(this->AchievementCategorySymbolMap).field_0x28 = 0;
  *(undefined4 *)&(this->AchievementCategorySymbolMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->AchievementCategorySymbolMap).field_0x34 = 0;
  *(undefined4 *)&(this->AchievementCategorySymbolMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AchievementCategorySymbolMap).field_0x40 = 0;
  *(undefined4 *)&(this->AchievementCategorySymbolMap).field_0x48 = 0;
  return this;
}

// ~UDS_AchievementDataSet @ 14b407df0

void __thiscall UDS_AchievementDataSet::~UDS_AchievementDataSet(UDS_AchievementDataSet *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_AchievementDataSet__6B_;
  *(undefined4 *)&(this->AchievementCategorySymbolMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AchievementCategorySymbolMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_AchievementCategory,TWeakPtr<FDS_AchievementCategorySymbol,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_AchievementCategory,TWeakPtr<FDS_AchievementCategorySymbol,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->AchievementCategorySymbolMap);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangedAchievementCategoryNewSymbolDelegate).Delegate.field_0x8,
             *(int *)&(this->OnChangedAchievementCategoryNewSymbolDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnChangedAchievementCategoryNewSymbolDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangedAchievementCategoryNewSymbolDelegate);
  UDS_DataSetBase::~UDS_DataSetBase((UDS_DataSetBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b409d80

UClass * __cdecl UDS_AchievementDataSet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AchievementDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AchievementDataSet",
               &Z_Registration_Info_UClass_UDS_AchievementDataSet.InnerSingleton,
               StaticRegisterNativesUDS_AchievementDataSet,0x120,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AchievementDataSet>,
               InternalVTableHelperCtorCaller<UDS_AchievementDataSet>,local_res8,
               UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AchievementDataSet.InnerSingleton;
}

// StaticRegisterNativesUDS_AchievementDataSet @ 14b40ae20

void __cdecl UDS_AchievementDataSet::StaticRegisterNativesUDS_AchievementDataSet(void)

{
  return;
}

// GetAchievementCategorySymbol @ 14ba43570

TWeakPtr<FDS_AchievementCategorySymbol,1> * __thiscall
UDS_AchievementDataSet::GetAchievementCategorySymbol
          (UDS_AchievementDataSet *this,
          TWeakPtr<FDS_AchievementCategorySymbol,1> *__return_storage_ptr__,
          EDS_AchievementCategory param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  TWeakPtr<FDS_AchievementCategorySymbol,1> *pTVar3;
  undefined1 *puVar4;
  int iVar5;
  
  if (*(int *)&(this->AchievementCategorySymbolMap).field_0x8 !=
      *(int *)&(this->AchievementCategorySymbolMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->AchievementCategorySymbolMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->AchievementCategorySymbolMap).field_0x38;
    }
    iVar5 = *(int *)(puVar4 + ((ulonglong)
                               (*(int *)&(this->AchievementCategorySymbolMap).field_0x48 - 1) &
                              (ulonglong)param_1) * 4);
    if (iVar5 != -1) {
      lVar1 = *(longlong *)&this->AchievementCategorySymbolMap;
      do {
        if (*(EDS_AchievementCategory *)((longlong)iVar5 * 0x20 + lVar1) == param_1) {
          if (iVar5 != -1) {
            pTVar3 = TMapBase<enum_EDS_AchievementCategory,TWeakPtr<FDS_AchievementCategorySymbol,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_AchievementCategory,TWeakPtr<FDS_AchievementCategorySymbol,1>,0>_>
                     ::FindChecked(&this->AchievementCategorySymbolMap,param_1);
            __return_storage_ptr__->Object = pTVar3->Object;
            pTVar2 = (pTVar3->WeakReferenceCount).ReferenceController;
            (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar2;
            if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
              return __return_storage_ptr__;
            }
            LOCK();
            pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
            UNLOCK();
            return __return_storage_ptr__;
          }
          break;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + lVar1);
      } while (iVar5 != -1);
    }
  }
  __return_storage_ptr__->Object = (FDS_AchievementCategorySymbol *)0x0;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetAchievementClaimAbleDataList @ 14ba43620

TArray<TWeakObjectPtr<UDS_AchievementData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
UDS_AchievementDataSet::GetAchievementClaimAbleDataList
          (UDS_AchievementDataSet *this,
          TArray<TWeakObjectPtr<UDS_AchievementData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FObjectPtr_u_0 *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArray<TWeakObjectPtr<UDS_AchievementData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  FObjectPtr_u_0 FVar7;
  FObjectPtr_u_0 FVar8;
  int iVar9;
  longlong lVar10;
  FObjectPtr_u_0 FVar11;
  FWeakObjectPtr local_res8;
  FObjectPtr_u_0 local_res10;
  
  FVar11.Handle = (UObject *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  lVar10 = (longlong)(int)this->_padding_;
  FVar8.Handle = FVar11.Handle;
  FVar7.Handle = FVar11.Handle;
  if (0 < lVar10) {
    do {
      iVar9 = FVar7._0_4_;
      if ((-1 < iVar9) && (iVar9 < (int)this->_padding_)) {
        if ((iVar9 < 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          pTVar4 = (TArray<TWeakObjectPtr<UDS_AchievementData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                    *)(*pcVar1)();
          return pTVar4;
        }
        this_00 = (FObjectPtr_u_0 *)(this->_padding_ + (longlong)FVar8.Handle * 8);
        FVar7.Handle = FVar11.Handle;
        if (*(longlong *)(this->_padding_ + (longlong)FVar8.Handle * 8) != 0) {
          pUVar5 = Z_Construct_UClass_UDS_AchievementData_NoRegister();
          bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar5);
          if (bVar2) {
            FVar7.Handle = this_00->Handle;
          }
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar7.Handle != (UObject *)0x0)
           ) {
          UE::GC::MarkAsReachable(FVar7.Handle);
        }
        local_res8.ObjectIndex = 0;
        local_res8.ObjectSerialNumber = 0;
        local_res10 = FVar7;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar7.Handle != (UObject *)0x0)
           ) {
          UE::GC::MarkAsReachable(FVar7.Handle);
        }
        FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
        bVar2 = TWeakObjectPtr<UDS_AchievementData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_AchievementData,FWeakObjectPtr> *)&local_res8,
                           (void *)0x0);
        if ((!bVar2) && (pUVar6 = FWeakObjectPtr::Get(&local_res8), pUVar6[2].field_0x14 == '\x02'))
        {
          iVar3 = __return_storage_ptr__->ArrayNum;
          if (iVar3 == __return_storage_ptr__->ArrayMax) {
            iVar3 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar3 + 1;
          *(FWeakObjectPtr *)
           ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar3 * 8) = local_res8;
        }
      }
      FVar7._0_4_ = iVar9 + 1;
      FVar7._4_4_ = 0;
      FVar8.Handle = (UObject *)&(FVar8.Handle)->field_0x1;
    } while ((longlong)FVar8.Handle < lVar10);
  }
  return __return_storage_ptr__;
}

// GetAchievementDataList @ 14ba437b0

TArray<TWeakObjectPtr<UDS_AchievementData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
UDS_AchievementDataSet::GetAchievementDataList
          (UDS_AchievementDataSet *this,
          TArray<TWeakObjectPtr<UDS_AchievementData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,EDS_AchievementCategory param_1)

{
  FObjectPtr_u_0 *this_00;
  code *pcVar1;
  bool bVar2;
  EDS_AchievementCategory EVar3;
  int iVar4;
  TArray<TWeakObjectPtr<UDS_AchievementData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar5;
  UClass *pUVar6;
  UDS_AchievementData *this_01;
  FObjectPtr_u_0 FVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar11;
  FWeakObjectPtr local_res8;
  FObjectPtr_u_0 local_res10;
  ulonglong uVar10;
  
  uVar8 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  lVar11 = (longlong)(int)this->_padding_;
  uVar10 = uVar8;
  if (0 < lVar11) {
    do {
      iVar9 = (int)uVar10;
      if ((-1 < iVar9) && (iVar9 < (int)this->_padding_)) {
        if ((iVar9 < 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          pTVar5 = (TArray<TWeakObjectPtr<UDS_AchievementData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                    *)(*pcVar1)();
          return pTVar5;
        }
        this_00 = (FObjectPtr_u_0 *)(this->_padding_ + uVar8 * 8);
        if (*(longlong *)(this->_padding_ + uVar8 * 8) == 0) {
LAB_14ba43873:
          FVar7.Handle = (UObject *)0x0;
        }
        else {
          pUVar6 = Z_Construct_UClass_UDS_AchievementData_NoRegister();
          bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar6);
          if (!bVar2) goto LAB_14ba43873;
          FVar7 = (FObjectPtr_u_0)this_00->Handle;
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar7.Handle != (UObject *)0x0)
           ) {
          UE::GC::MarkAsReachable(FVar7.Handle);
        }
        local_res8.ObjectIndex = 0;
        local_res8.ObjectSerialNumber = 0;
        local_res10 = FVar7;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar7.Handle != (UObject *)0x0)
           ) {
          UE::GC::MarkAsReachable(FVar7.Handle);
        }
        FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
        bVar2 = TWeakObjectPtr<UDS_AchievementData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_AchievementData,FWeakObjectPtr> *)&local_res8,
                           (void *)0x0);
        if (!bVar2) {
          this_01 = (UDS_AchievementData *)FWeakObjectPtr::Get(&local_res8);
          EVar3 = UDS_AchievementData::GetAchievementCategory(this_01);
          if (EVar3 == param_1) {
            iVar4 = __return_storage_ptr__->ArrayNum;
            if (iVar4 == __return_storage_ptr__->ArrayMax) {
              iVar4 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x408,&__return_storage_ptr__->AllocatorInstance,
                                 &__return_storage_ptr__->ArrayMax);
            }
            __return_storage_ptr__->ArrayNum = iVar4 + 1;
            *(FWeakObjectPtr *)
             ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_res8;
          }
        }
      }
      uVar8 = uVar8 + 1;
      uVar10 = (ulonglong)(iVar9 + 1);
    } while ((longlong)uVar8 < lVar11);
  }
  return __return_storage_ptr__;
}

// IsAllClaimAble @ 14ba59e90

bool __thiscall UDS_AchievementDataSet::IsAllClaimAble(UDS_AchievementDataSet *this)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  undefined8 *puVar7;
  UObject *local_res8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  
  puVar7 = (undefined8 *)this->_padding_;
  iVar2 = (int)this->_padding_;
  puVar1 = puVar7 + iVar2;
  do {
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDS_DataBase>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_res8);
    }
    if (puVar7 == puVar1) {
      return false;
    }
    pUVar5 = (UObject *)*puVar7;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar5 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res8 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res8);
    bVar4 = TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> *)&local_res10,(void *)0x0);
    if (!bVar4) {
      pUVar5 = FWeakObjectPtr::Get(&local_res10);
      if (pUVar5 == (UObject *)0x0) {
LAB_14ba59f88:
        pUVar5 = (UObject *)0x0;
      }
      else {
        pUVar6 = Z_Construct_UClass_UDS_AchievementData_NoRegister();
        iVar3 = (int)pUVar6->_padding_;
        if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar3) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
            &pUVar6->_padding_)) goto LAB_14ba59f88;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      local_res18.ObjectIndex = 0;
      local_res18.ObjectSerialNumber = 0;
      local_res8 = pUVar5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res8);
      bVar4 = TWeakObjectPtr<UDS_AchievementData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_AchievementData,FWeakObjectPtr> *)&local_res18,
                         (void *)0x0);
      if (!bVar4) {
        pUVar5 = FWeakObjectPtr::Get(&local_res18);
        if (pUVar5[2].field_0x14 == '\x02') {
          return true;
        }
      }
    }
    puVar7 = puVar7 + 1;
  } while( true );
}

// OnAdded @ 14ba5e550

void __thiscall UDS_AchievementDataSet::OnAdded(UDS_AchievementDataSet *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TMap<int,TArray<FDS_AchievementBaseTableRow_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FDS_AchievementBaseTableRow_const_*,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar9;
  UObject *pUVar10;
  longlong lVar11;
  ulong64 uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  uint *puVar18;
  undefined1 local_res10 [8];
  int local_res18;
  undefined1 local_res20 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  pTVar9 = FDS_AchievementService::GetAchievementGroupMap();
  iVar3 = *(int *)&pTVar9->field_0x28;
  iVar15 = 0;
  iVar17 = 0;
  uVar7 = 1;
  puVar1 = &pTVar9->field_0x10;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar18 = *(uint **)&pTVar9->field_0x20;
    if (*(uint **)&pTVar9->field_0x20 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar14 = *puVar18;
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar15;
      iVar17 = iVar17 + 0x20;
      iVar15 = iVar15 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14ba5e5ee;
      uVar14 = puVar18[lVar11 + 1];
    }
    uVar7 = -uVar14 & uVar14;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res18 = (int)lVar11;
    iVar8 = local_res18 + -1 + iVar17;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14ba5e5ee:
  uVar14 = *(uint *)&pTVar9->field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar15);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar14 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar17;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&pTVar9->field_0x8 - *(int *)&pTVar9->field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&pTVar9->field_0x28;
  if (uVar14 != uVar7) {
    puVar16 = *(undefined1 **)&pTVar9->field_0x20;
    if (*(undefined1 **)&pTVar9->field_0x20 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar15;
      uVar13 = uVar13 + 0x20;
      iVar15 = iVar15 + 1;
      uVar14 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14ba5e6f0;
      uVar14 = *(uint *)(puVar16 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar14 = (int)lVar11 + -1 + uVar13;
    if ((int)uVar7 < (int)uVar14) {
      uVar14 = uVar7;
    }
  }
LAB_14ba5e6f0:
  while( true ) {
    if (*(int *)&pTVar9->field_0x8 - *(int *)&pTVar9->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<int,TArray<FDS_AchievementBaseTableRow_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar14) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    uVar4 = *(undefined4 *)((longlong)TStack_60.CurrentBitIndex * 0x20 + *(longlong *)pTVar9);
    bVar6 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)&this->_padding_,
                       (void *)0x0);
    if (bVar6) {
      uVar12 = 0;
    }
    else {
      pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      uVar12 = *(ulong64 *)(pUVar10 + 1);
    }
    UDS_AchievementData::GetData((ulong64)local_res20,uVar12,SUB41(uVar4,0));
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// SetAchievementCategorySymbolMap @ 14ba69bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_AchievementDataSet::SetAchievementCategorySymbolMap
          (UDS_AchievementDataSet *this,EDS_AchievementCategory param_1,
          TSharedPtr<FDS_AchievementCategorySymbol,1> *param_2)

{
  atomic<int> *paVar1;
  TMap<EDS_AchievementCategory,TWeakPtr<FDS_AchievementCategorySymbol,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_AchievementCategory,TWeakPtr<FDS_AchievementCategorySymbol,1>,0>_>
  *this_00;
  atomic<int> aVar2;
  FDS_AchievementCategorySymbol *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  UDS_LogManager *pUVar5;
  longlong lVar6;
  TWeakPtr<FDS_AchievementCategorySymbol,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined1 auStackY_1c8 [32];
  uint uVar11;
  wchar_t *pwVar12;
  EDS_AchievementCategory local_198 [8];
  TPairInitializer<EDS_AchievementCategory_&,TWeakPtr<FDS_AchievementCategorySymbol,1>_&&> local_190
  ;
  TReferenceControllerBase<1> *local_180;
  EDS_AchievementCategory *local_178;
  TWeakPtr<FDS_AchievementCategorySymbol,1> **local_170;
  TWeakPtr<FDS_AchievementCategorySymbol,1> local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pTVar7 = (TWeakPtr<FDS_AchievementCategorySymbol,1> *)param_2->Object;
  local_198[0] = param_1;
  if (pTVar7 == (TWeakPtr<FDS_AchievementCategorySymbol,1> *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_AchievementDataSet::SetAchievementCategorySymbolMap",0x37,Yes);
      pwVar12 = L"InSymbolData is nullptr.";
      uVar11 = 0x129;
LAB_14ba69c7b:
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_158.Ptr,uVar11,pwVar12);
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    this_00 = &this->AchievementCategorySymbolMap;
    if (*(int *)&(this->AchievementCategorySymbolMap).field_0x8 !=
        *(int *)&(this->AchievementCategorySymbolMap).field_0x34) {
      puVar9 = *(undefined1 **)&(this->AchievementCategorySymbolMap).field_0x40;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = &(this->AchievementCategorySymbolMap).field_0x38;
      }
      iVar10 = *(int *)(puVar9 + ((ulonglong)
                                  (*(int *)&(this->AchievementCategorySymbolMap).field_0x48 - 1) &
                                 (ulonglong)param_1) * 4);
      if (iVar10 != -1) {
        do {
          if (*(EDS_AchievementCategory *)((longlong)iVar10 * 0x20 + *(longlong *)this_00) ==
              param_1) {
            if (iVar10 != -1) {
              pTVar7 = TMapBase<enum_EDS_AchievementCategory,TWeakPtr<FDS_AchievementCategorySymbol,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_AchievementCategory,TWeakPtr<FDS_AchievementCategorySymbol,1>,0>_>
                       ::FindChecked(this_00,param_1);
              if (((pTVar7->Object != (FDS_AchievementCategorySymbol *)0x0) &&
                  (pTVar8 = (pTVar7->WeakReferenceCount).ReferenceController,
                  pTVar8 != (TReferenceControllerBase<1> *)0x0)) &&
                 (0 < (int)pTVar8->SharedReferenceCount)) {
                pUVar5 = UDS_LogManager::GetInst();
                if (pUVar5 == (UDS_LogManager *)0x0) goto LAB_14ba69d64;
                pUVar5 = UDS_LogManager::GetInst();
                local_158._padding_ = 0;
                TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                          (&local_158,"UDS_AchievementDataSet::SetAchievementCategorySymbolMap",0x37
                           ,Yes);
                pwVar12 = L"InAchievementSymbolData is valid. check please.";
                uVar11 = 0x131;
                goto LAB_14ba69c7b;
              }
              pTVar8 = (param_2->SharedReferenceCount).ReferenceController;
              pFVar3 = param_2->Object;
              if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
                UNLOCK();
              }
              pTVar7 = TMapBase<enum_EDS_AchievementCategory,TWeakPtr<FDS_AchievementCategorySymbol,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_AchievementCategory,TWeakPtr<FDS_AchievementCategorySymbol,1>,0>_>
                       ::FindChecked(this_00,local_198[0]);
              if (pTVar7 != &local_168) {
                pTVar4 = (pTVar7->WeakReferenceCount).ReferenceController;
                (pTVar7->WeakReferenceCount).ReferenceController = pTVar8;
                pTVar7->Object = pFVar3;
                pTVar8 = pTVar4;
                goto LAB_14ba69d45;
              }
              if (pTVar8 == (TReferenceControllerBase<1> *)0x0) goto LAB_14ba69d64;
              LOCK();
              paVar1 = &pTVar8->WeakReferenceCount;
              aVar2 = *paVar1;
              *paVar1 = (atomic<int>)((int)*paVar1 + -1);
              UNLOCK();
              if (aVar2 != (atomic<int>)0x1) goto LAB_14ba69d64;
              lVar6 = pTVar8->_padding_;
              goto LAB_14ba69d5c;
            }
            break;
          }
          iVar10 = *(int *)((longlong)iVar10 * 0x20 + 0x18 + *(longlong *)this_00);
        } while (iVar10 != -1);
      }
    }
    local_180 = (param_2->SharedReferenceCount).ReferenceController;
    if (local_180 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_180->WeakReferenceCount = (atomic<int>)((int)local_180->WeakReferenceCount + 1);
      UNLOCK();
    }
    local_178 = local_198;
    local_170 = &local_190.Value;
    local_190.Value = pTVar7;
    TSet<TTuple<enum_EDS_AchievementCategory,TWeakPtr<FDS_AchievementCategorySymbol,1>_>,TDefaultMapHashableKeyFuncs<enum_EDS_AchievementCategory,TWeakPtr<FDS_AchievementCategorySymbol,1>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<enum_EDS_AchievementCategory_&,TWeakPtr<FDS_AchievementCategorySymbol,1>_&&>_>
              (this_00,&local_190,(bool *)&local_178);
    pTVar8 = local_180;
LAB_14ba69d45:
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar8->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        lVar6 = pTVar8->_padding_;
LAB_14ba69d5c:
        (**(code **)(lVar6 + 8))(pTVar8,1);
      }
    }
  }
LAB_14ba69d64:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// SetData @ 14ba6d740

void __thiscall
UDS_AchievementDataSet::SetData(UDS_AchievementDataSet *this,SqlAchievementGroupTable *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long64 lVar4;
  bool bVar5;
  UObject *pUVar6;
  UDS_AchievementData *this_00;
  ulong64 uVar7;
  FWeakObjectPtr local_res8;
  
  iVar1 = (param_1->_impl_).group_id_;
  iVar2 = (param_1->_impl_).step_;
  iVar3 = (param_1->_impl_).state_;
  lVar4 = (param_1->_impl_).total_count_;
  bVar5 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)&this->_padding_,
                     (void *)0x0);
  if (bVar5) {
    uVar7 = 0;
  }
  else {
    pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    uVar7 = *(ulong64 *)(pUVar6 + 1);
  }
  UDS_AchievementData::GetData((ulong64)&local_res8,uVar7,SUB41(iVar1,0));
  this_00 = (UDS_AchievementData *)FWeakObjectPtr::Get(&local_res8);
  UDS_AchievementData::SetData(this_00,iVar2,iVar3,(int)lVar4);
  return;
}

