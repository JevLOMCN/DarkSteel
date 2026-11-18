// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// StaticClass @ 14b7542a0

UClass * __cdecl UDS_WaitCompleteDataSet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_WaitCompleteDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_WaitCompleteDataSet",
               &Z_Registration_Info_UClass_UDS_WaitCompleteDataSet.InnerSingleton,
               StaticRegisterNativesUDS_WaitCompleteDataSet,0x100,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_WaitCompleteDataSet>,
               InternalVTableHelperCtorCaller<UDS_WaitCompleteDataSet>,local_res8,
               UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_WaitCompleteDataSet.InnerSingleton;
}

// UDS_WaitCompleteDataSet @ 14b75ad30

UDS_WaitCompleteDataSet * __thiscall
UDS_WaitCompleteDataSet::UDS_WaitCompleteDataSet
          (UDS_WaitCompleteDataSet *this,FVTableHelper *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_WaitCompleteDataSet__6B_;
  *(undefined8 *)&this->WaitCompleteDataMap = 0;
  *(undefined8 *)&(this->WaitCompleteDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->WaitCompleteDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->WaitCompleteDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->WaitCompleteDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->WaitCompleteDataMap).field_0x34 = 0;
  *(undefined4 *)&(this->WaitCompleteDataMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->WaitCompleteDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->WaitCompleteDataMap).field_0x48 = 0;
  return this;
}

// UDS_WaitCompleteDataSet @ 14b75ada0

UDS_WaitCompleteDataSet * __thiscall
UDS_WaitCompleteDataSet::UDS_WaitCompleteDataSet
          (UDS_WaitCompleteDataSet *this,FObjectInitializer *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_WaitCompleteDataSet__6B_;
  *(undefined8 *)&this->WaitCompleteDataMap = 0;
  *(undefined8 *)&(this->WaitCompleteDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->WaitCompleteDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->WaitCompleteDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->WaitCompleteDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->WaitCompleteDataMap).field_0x34 = 0;
  *(undefined4 *)&(this->WaitCompleteDataMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->WaitCompleteDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->WaitCompleteDataMap).field_0x48 = 0;
  return this;
}

// ~UDS_WaitCompleteDataSet @ 14b75c170

void __thiscall UDS_WaitCompleteDataSet::~UDS_WaitCompleteDataSet(UDS_WaitCompleteDataSet *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_WaitCompleteDataSet__6B_;
  *(undefined4 *)&(this->WaitCompleteDataMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->WaitCompleteDataMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_WaitCompleteType,TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_WaitCompleteType,TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->WaitCompleteDataMap);
  UDS_DataSetBase::~UDS_DataSetBase((UDS_DataSetBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b75ec70

UClass * __cdecl UDS_WaitCompleteDataSet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_WaitCompleteDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_WaitCompleteDataSet",
               &Z_Registration_Info_UClass_UDS_WaitCompleteDataSet.InnerSingleton,
               StaticRegisterNativesUDS_WaitCompleteDataSet,0x100,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_WaitCompleteDataSet>,
               InternalVTableHelperCtorCaller<UDS_WaitCompleteDataSet>,local_res8,
               UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_WaitCompleteDataSet.InnerSingleton;
}

// StaticRegisterNativesUDS_WaitCompleteDataSet @ 14b75f080

void __cdecl UDS_WaitCompleteDataSet::StaticRegisterNativesUDS_WaitCompleteDataSet(void)

{
  return;
}

// ClearAllData @ 14ba97c80

void __thiscall UDS_WaitCompleteDataSet::ClearAllData(UDS_WaitCompleteDataSet *this)

{
  undefined1 *puVar1;
  TMap<EDS_WaitCompleteType,TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_WaitCompleteType,TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  int iVar2;
  bool bVar3;
  
  this_00 = &this->WaitCompleteDataMap;
  bVar3 = 1 < *(int *)&(this->WaitCompleteDataMap).field_0x48;
  if (!bVar3) {
    TSet<TTuple<enum_EDS_WaitCompleteType,TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_WaitCompleteType,TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::UnhashElements(this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_WaitCompleteType,TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(this_00,0,*(int *)&(this->WaitCompleteDataMap).field_0x8);
  puVar1 = &(this->WaitCompleteDataMap).field_0xc;
  *(undefined4 *)&(this->WaitCompleteDataMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->WaitCompleteDataMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WaitCompleteDataMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->WaitCompleteDataMap).field_0x2c;
  *(undefined4 *)&(this->WaitCompleteDataMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->WaitCompleteDataMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->WaitCompleteDataMap).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->WaitCompleteDataMap).field_0x48 = 1;
    TSet<TTuple<enum_EDS_WaitCompleteType,TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_WaitCompleteType,TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Rehash(this_00);
  }
  UDS_DataSetBase::ClearAllData((UDS_DataSetBase *)this);
  return;
}

// GetAllData @ 14baa39f0

TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
UDS_WaitCompleteDataSet::GetAllData
          (UDS_WaitCompleteDataSet *this,
          TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,EDS_WaitCompleteType *param_1)

{
  FObjectPtr_u_0 *pFVar1;
  FWeakObjectPtr *pFVar2;
  EDS_WaitCompleteType EVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  UClass *pUVar7;
  TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar8;
  undefined1 *puVar9;
  FObjectPtr_u_0 *this_00;
  UObject *pUVar10;
  FWeakObjectPtr *this_01;
  UObject *local_res10;
  FWeakObjectPtr local_res18 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  EVar3 = *param_1;
  if (EVar3 == Max) {
    this_00 = (FObjectPtr_u_0 *)this->_padding_;
    iVar6 = (int)this->_padding_;
    pFVar1 = this_00 + iVar6;
    while( true ) {
      if ((int)this->_padding_ != iVar6) {
        `TCheckedPointerIterator<TObjectPtr<UDS_DataBase>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res10);
      }
      if (this_00 == pFVar1) break;
      pUVar10 = (UObject *)0x0;
      if (this_00->Handle != (UObject *)0x0) {
        pUVar7 = Z_Construct_UClass_UDS_WaitCompleteData_NoRegister();
        bVar4 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar7);
        if (bVar4) {
          pUVar10 = this_00->Handle;
        }
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar10);
      }
      local_res18[0].ObjectIndex = 0;
      local_res18[0].ObjectSerialNumber = 0;
      local_res10 = pUVar10;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar10);
      }
      FWeakObjectPtr::operator=(local_res18,(FObjectPtr)&local_res10);
      bVar4 = FWeakObjectPtr::IsValid(local_res18);
      if (bVar4) {
        iVar5 = __return_storage_ptr__->ArrayNum;
        if (iVar5 == __return_storage_ptr__->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar5 + 1;
        *(FWeakObjectPtr *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8)
             = local_res18[0];
      }
      this_00 = this_00 + 1;
    }
  }
  else if (*(int *)&(this->WaitCompleteDataMap).field_0x8 !=
           *(int *)&(this->WaitCompleteDataMap).field_0x34) {
    puVar9 = *(undefined1 **)&(this->WaitCompleteDataMap).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->WaitCompleteDataMap).field_0x38;
    }
    iVar6 = *(int *)(puVar9 + ((ulonglong)(*(int *)&(this->WaitCompleteDataMap).field_0x48 - 1) &
                              (ulonglong)EVar3) * 4);
    if (iVar6 != -1) {
      do {
        if (*(EDS_WaitCompleteType *)
             ((longlong)iVar6 * 0x20 + *(longlong *)&this->WaitCompleteDataMap) == EVar3) {
          pTVar8 = TMapBase<enum_EDS_WaitCompleteType,TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_WaitCompleteType,TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                   ::FindChecked(&this->WaitCompleteDataMap,EVar3);
          this_01 = (FWeakObjectPtr *)(pTVar8->AllocatorInstance).Data;
          iVar6 = pTVar8->ArrayNum;
          pFVar2 = this_01 + iVar6;
          while( true ) {
            if (pTVar8->ArrayNum != iVar6) {
              `TCheckedPointerIterator<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,int,0>::
              operator!='::__l2::<lambda_1>::operator()(&local_res10);
            }
            if (this_01 == pFVar2) break;
            bVar4 = FWeakObjectPtr::IsValid(this_01);
            if (bVar4) {
              iVar5 = __return_storage_ptr__->ArrayNum;
              if (iVar5 == __return_storage_ptr__->ArrayMax) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x408,&__return_storage_ptr__->AllocatorInstance,
                                   &__return_storage_ptr__->ArrayMax);
              }
              __return_storage_ptr__->ArrayNum = iVar5 + 1;
              *(FWeakObjectPtr *)
               ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8) = *this_01;
            }
            this_01 = this_01 + 1;
          }
          return __return_storage_ptr__;
        }
        iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + *(longlong *)&this->WaitCompleteDataMap);
      } while (iVar6 != -1);
    }
  }
  return __return_storage_ptr__;
}

// GetCompleteCount @ 14baa58b0

int __thiscall
UDS_WaitCompleteDataSet::GetCompleteCount
          (UDS_WaitCompleteDataSet *this,EDS_WaitCompleteType *param_1)

{
  FObjectPtr_u_0 *pFVar1;
  FWeakObjectPtr *pFVar2;
  EDS_WaitCompleteType EVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  UDS_TimeUtilManager *pUVar8;
  TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar9;
  UObject *pUVar10;
  undefined1 *puVar11;
  FWeakObjectPtr *this_00;
  int iVar12;
  UObject *pUVar13;
  FObjectPtr_u_0 *this_01;
  UObject *local_res10;
  FWeakObjectPtr local_res18;
  longlong local_res20;
  
  EVar3 = *param_1;
  pUVar13 = (UObject *)0x0;
  if (EVar3 == Max) {
    this_01 = (FObjectPtr_u_0 *)this->_padding_;
    iVar5 = (int)this->_padding_;
    pFVar1 = this_01 + iVar5;
    pUVar10 = pUVar13;
    while( true ) {
      if ((int)this->_padding_ != iVar5) {
        `TCheckedPointerIterator<TObjectPtr<UDS_DataBase>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res10);
      }
      iVar12 = (int)pUVar10;
      if (this_01 == pFVar1) break;
      pUVar7 = pUVar13;
      if (this_01->Handle != (UObject *)0x0) {
        pUVar6 = Z_Construct_UClass_UDS_WaitCompleteData_NoRegister();
        bVar4 = FObjectPtr::IsA((FObjectPtr *)this_01,pUVar6);
        if (bVar4) {
          pUVar7 = this_01->Handle;
        }
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar7);
      }
      local_res18.ObjectIndex = 0;
      local_res18.ObjectSerialNumber = 0;
      local_res10 = pUVar7;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar7);
      }
      FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res10);
      bVar4 = FWeakObjectPtr::IsValid(&local_res18);
      if (bVar4) {
        pUVar7 = FWeakObjectPtr::Get(&local_res18);
        pUVar8 = UDS_TimeUtilManager::GetInst();
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar8 != (UDS_TimeUtilManager *)0x0) goto LAB_14baa59af;
        }
        else if (pUVar8 != (UDS_TimeUtilManager *)0x0) {
          UE::GC::MarkAsReachable((UObject *)pUVar8);
LAB_14baa59af:
          UDS_TimeUtilManager::GetCurrentServerDateTime();
          if (*(longlong *)&pUVar7[3].field_0x10 <= local_res20) {
            pUVar10 = (UObject *)(ulonglong)((int)pUVar10 + 1);
          }
        }
      }
      this_01 = this_01 + 1;
    }
  }
  else {
    iVar12 = 0;
    if (*(int *)&(this->WaitCompleteDataMap).field_0x8 !=
        *(int *)&(this->WaitCompleteDataMap).field_0x34) {
      puVar11 = *(undefined1 **)&(this->WaitCompleteDataMap).field_0x40;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = &(this->WaitCompleteDataMap).field_0x38;
      }
      iVar5 = *(int *)(puVar11 +
                      ((ulonglong)(*(int *)&(this->WaitCompleteDataMap).field_0x48 - 1) &
                      (ulonglong)EVar3) * 4);
      iVar12 = 0;
      if (iVar5 != -1) {
        do {
          if (*(EDS_WaitCompleteType *)
               ((longlong)iVar5 * 0x20 + *(longlong *)&this->WaitCompleteDataMap) == EVar3) {
            pTVar9 = TMapBase<enum_EDS_WaitCompleteType,TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_WaitCompleteType,TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                     ::FindChecked(&this->WaitCompleteDataMap,EVar3);
            this_00 = (FWeakObjectPtr *)(pTVar9->AllocatorInstance).Data;
            iVar12 = pTVar9->ArrayNum;
            pFVar2 = this_00 + iVar12;
            goto LAB_14baa5a54;
          }
          iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + *(longlong *)&this->WaitCompleteDataMap);
        } while (iVar5 != -1);
      }
    }
  }
  return iVar12;
LAB_14baa5a54:
  if (pTVar9->ArrayNum != iVar12) {
    `TCheckedPointerIterator<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,int,0>::operator!='
    ::__l2::<lambda_1>::operator()(&local_res10);
  }
  if (this_00 == pFVar2) {
    return (int)pUVar13;
  }
  bVar4 = FWeakObjectPtr::IsValid(this_00);
  if (bVar4) {
    pUVar10 = FWeakObjectPtr::Get(this_00);
    pUVar8 = UDS_TimeUtilManager::GetInst();
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar8 != (UDS_TimeUtilManager *)0x0) goto LAB_14baa5aa2;
    }
    else if (pUVar8 != (UDS_TimeUtilManager *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
LAB_14baa5aa2:
      UDS_TimeUtilManager::GetCurrentServerDateTime();
      if (*(longlong *)&pUVar10[3].field_0x10 <= (longlong)local_res18) {
        pUVar13 = (UObject *)(ulonglong)((int)pUVar13 + 1);
      }
    }
  }
  this_00 = this_00 + 1;
  goto LAB_14baa5a54;
}

// GetTotalCount @ 14bab0c70

int __thiscall
UDS_WaitCompleteDataSet::GetTotalCount(UDS_WaitCompleteDataSet *this,EDS_WaitCompleteType *param_1)

{
  EDS_WaitCompleteType EVar1;
  longlong lVar2;
  int iVar3;
  TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar4;
  undefined1 *puVar5;
  
  EVar1 = *param_1;
  if (EVar1 == Max) {
    return (int)this->_padding_;
  }
  if (*(int *)&(this->WaitCompleteDataMap).field_0x8 !=
      *(int *)&(this->WaitCompleteDataMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->WaitCompleteDataMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->WaitCompleteDataMap).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + ((ulonglong)(*(int *)&(this->WaitCompleteDataMap).field_0x48 - 1) &
                              (ulonglong)EVar1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&this->WaitCompleteDataMap;
      do {
        if (*(EDS_WaitCompleteType *)((longlong)iVar3 * 0x20 + lVar2) == EVar1) {
          pTVar4 = TMapBase<enum_EDS_WaitCompleteType,TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_WaitCompleteType,TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                   ::FindChecked(&this->WaitCompleteDataMap,EVar1);
          return pTVar4->ArrayNum;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + lVar2);
      } while (iVar3 != -1);
    }
  }
  return 0;
}

// GetWaitCompleteDataByOneParam @ 14bab1470

TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr> __thiscall
UDS_WaitCompleteDataSet::GetWaitCompleteDataByOneParam
          (UDS_WaitCompleteDataSet *this,EDS_WaitCompleteType param_1,long64 param_2)

{
  FWeakObjectPtr *pFVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar5;
  UObject *pUVar6;
  undefined7 in_register_00000011;
  FWeakObjectPtr this_00;
  FWeakObjectPtr *this_01;
  longlong in_R9;
  undefined1 *puVar7;
  undefined8 local_res8;
  undefined1 local_res18 [16];
  
  this_00._1_7_ = in_register_00000011;
  this_00.ObjectIndex._0_1_ = param_1;
  if (*(int *)&(this->WaitCompleteDataMap).field_0x8 !=
      *(int *)&(this->WaitCompleteDataMap).field_0x34) {
    puVar7 = *(undefined1 **)&(this->WaitCompleteDataMap).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->WaitCompleteDataMap).field_0x38;
    }
    iVar4 = *(int *)(puVar7 + ((ulonglong)(*(int *)&(this->WaitCompleteDataMap).field_0x48 - 1) &
                              param_2 & 0xffU) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&this->WaitCompleteDataMap;
      do {
        if (*(EDS_WaitCompleteType *)((longlong)iVar4 * 0x20 + lVar2) ==
            (EDS_WaitCompleteType)param_2) {
          pTVar5 = TMapBase<enum_EDS_WaitCompleteType,TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_WaitCompleteType,TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                   ::FindChecked(&this->WaitCompleteDataMap,(EDS_WaitCompleteType)param_2);
          this_01 = (FWeakObjectPtr *)(pTVar5->AllocatorInstance).Data;
          iVar4 = pTVar5->ArrayNum;
          pFVar1 = this_01 + iVar4;
          while( true ) {
            if (pTVar5->ArrayNum != iVar4) {
              `TCheckedPointerIterator<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,int,0>::
              operator!='::__l2::<lambda_1>::operator()(local_res18);
            }
            if (this_01 == pFVar1) break;
            bVar3 = FWeakObjectPtr::IsValid(this_01);
            if ((bVar3) &&
               (pUVar6 = FWeakObjectPtr::Get(this_01), *(longlong *)&pUVar6[2].field_0x18 == in_R9))
            {
              *(FWeakObjectPtr *)this_00 = *this_01;
              return (TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>)this_00;
            }
            this_01 = this_01 + 1;
          }
          break;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + lVar2);
      } while (iVar4 != -1);
    }
  }
  *(undefined8 *)this_00 = 0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this_00,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>)this_00;
}

// GetWaitCompleteDataByThreeParam @ 14bab1570

TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr> __thiscall
UDS_WaitCompleteDataSet::GetWaitCompleteDataByThreeParam
          (UDS_WaitCompleteDataSet *this,EDS_WaitCompleteType param_1,long64 param_2,long64 param_3,
          long64 param_4)

{
  FWeakObjectPtr *pFVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar5;
  UObject *pUVar6;
  undefined7 in_register_00000011;
  FWeakObjectPtr this_00;
  FWeakObjectPtr *this_01;
  undefined1 *puVar7;
  undefined8 local_res8;
  undefined1 local_res18 [16];
  longlong in_stack_00000030;
  
  this_00._1_7_ = in_register_00000011;
  this_00.ObjectIndex._0_1_ = param_1;
  if (*(int *)&(this->WaitCompleteDataMap).field_0x8 !=
      *(int *)&(this->WaitCompleteDataMap).field_0x34) {
    puVar7 = *(undefined1 **)&(this->WaitCompleteDataMap).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->WaitCompleteDataMap).field_0x38;
    }
    iVar4 = *(int *)(puVar7 + ((ulonglong)(*(int *)&(this->WaitCompleteDataMap).field_0x48 - 1) &
                              param_2 & 0xffU) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&this->WaitCompleteDataMap;
      do {
        if (*(EDS_WaitCompleteType *)((longlong)iVar4 * 0x20 + lVar2) ==
            (EDS_WaitCompleteType)param_2) {
          pTVar5 = TMapBase<enum_EDS_WaitCompleteType,TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_WaitCompleteType,TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                   ::FindChecked(&this->WaitCompleteDataMap,(EDS_WaitCompleteType)param_2);
          this_01 = (FWeakObjectPtr *)(pTVar5->AllocatorInstance).Data;
          iVar4 = pTVar5->ArrayNum;
          pFVar1 = this_01 + iVar4;
          while( true ) {
            if (pTVar5->ArrayNum != iVar4) {
              `TCheckedPointerIterator<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,int,0>::
              operator!='::__l2::<lambda_1>::operator()(local_res18);
            }
            if (this_01 == pFVar1) break;
            bVar3 = FWeakObjectPtr::IsValid(this_01);
            if ((((bVar3) &&
                 (pUVar6 = FWeakObjectPtr::Get(this_01),
                 *(longlong *)&pUVar6[2].field_0x18 == param_3)) &&
                (pUVar6 = FWeakObjectPtr::Get(this_01),
                *(longlong *)&pUVar6[2].field_0x20 == param_4)) &&
               ((pUVar6 = FWeakObjectPtr::Get(this_01), *(longlong *)(pUVar6 + 3) != 0 &&
                (in_stack_00000030 != 0)))) {
              *(FWeakObjectPtr *)this_00 = *this_01;
              return (TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>)this_00;
            }
            this_01 = this_01 + 1;
          }
          break;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + lVar2);
      } while (iVar4 != -1);
    }
  }
  *(undefined8 *)this_00 = 0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this_00,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>)this_00;
}

// GetWaitCompleteDataByTwoParam @ 14bab16a0

TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr> __thiscall
UDS_WaitCompleteDataSet::GetWaitCompleteDataByTwoParam
          (UDS_WaitCompleteDataSet *this,EDS_WaitCompleteType param_1,long64 param_2,long64 param_3)

{
  FWeakObjectPtr *pFVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar5;
  UObject *pUVar6;
  undefined7 in_register_00000011;
  FWeakObjectPtr this_00;
  FWeakObjectPtr *this_01;
  undefined1 *puVar7;
  undefined8 local_res8;
  undefined1 local_res18 [8];
  longlong in_stack_00000028;
  
  this_00._1_7_ = in_register_00000011;
  this_00.ObjectIndex._0_1_ = param_1;
  if (*(int *)&(this->WaitCompleteDataMap).field_0x8 !=
      *(int *)&(this->WaitCompleteDataMap).field_0x34) {
    puVar7 = *(undefined1 **)&(this->WaitCompleteDataMap).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->WaitCompleteDataMap).field_0x38;
    }
    iVar4 = *(int *)(puVar7 + ((ulonglong)(*(int *)&(this->WaitCompleteDataMap).field_0x48 - 1) &
                              param_2 & 0xffU) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&this->WaitCompleteDataMap;
      do {
        if (*(EDS_WaitCompleteType *)((longlong)iVar4 * 0x20 + lVar2) ==
            (EDS_WaitCompleteType)param_2) {
          pTVar5 = TMapBase<enum_EDS_WaitCompleteType,TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_WaitCompleteType,TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                   ::FindChecked(&this->WaitCompleteDataMap,(EDS_WaitCompleteType)param_2);
          this_01 = (FWeakObjectPtr *)(pTVar5->AllocatorInstance).Data;
          iVar4 = pTVar5->ArrayNum;
          pFVar1 = this_01 + iVar4;
          while( true ) {
            if (pTVar5->ArrayNum != iVar4) {
              `TCheckedPointerIterator<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,int,0>::
              operator!='::__l2::<lambda_1>::operator()(local_res18);
            }
            if (this_01 == pFVar1) break;
            bVar3 = FWeakObjectPtr::IsValid(this_01);
            if (((bVar3) &&
                (pUVar6 = FWeakObjectPtr::Get(this_01),
                *(longlong *)&pUVar6[2].field_0x18 == param_3)) &&
               (pUVar6 = FWeakObjectPtr::Get(this_01),
               *(longlong *)&pUVar6[2].field_0x20 == in_stack_00000028)) {
              *(FWeakObjectPtr *)this_00 = *this_01;
              return (TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>)this_00;
            }
            this_01 = this_01 + 1;
          }
          break;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + lVar2);
      } while (iVar4 != -1);
    }
  }
  *(undefined8 *)this_00 = 0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this_00,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>)this_00;
}

// GetWaitingCount @ 14bab1a30

int __thiscall
UDS_WaitCompleteDataSet::GetWaitingCount
          (UDS_WaitCompleteDataSet *this,EDS_WaitCompleteType *param_1)

{
  FObjectPtr_u_0 *pFVar1;
  FWeakObjectPtr *pFVar2;
  EDS_WaitCompleteType EVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  UDS_TimeUtilManager *pUVar8;
  TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar9;
  UObject *pUVar10;
  undefined1 *puVar11;
  FWeakObjectPtr *this_00;
  int iVar12;
  UObject *pUVar13;
  FObjectPtr_u_0 *this_01;
  UObject *local_res10;
  FWeakObjectPtr local_res18;
  longlong local_res20;
  
  EVar3 = *param_1;
  pUVar13 = (UObject *)0x0;
  if (EVar3 == Max) {
    this_01 = (FObjectPtr_u_0 *)this->_padding_;
    iVar5 = (int)this->_padding_;
    pFVar1 = this_01 + iVar5;
    pUVar10 = pUVar13;
    while( true ) {
      if ((int)this->_padding_ != iVar5) {
        `TCheckedPointerIterator<TObjectPtr<UDS_DataBase>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res10);
      }
      iVar12 = (int)pUVar10;
      if (this_01 == pFVar1) break;
      pUVar7 = pUVar13;
      if (this_01->Handle != (UObject *)0x0) {
        pUVar6 = Z_Construct_UClass_UDS_WaitCompleteData_NoRegister();
        bVar4 = FObjectPtr::IsA((FObjectPtr *)this_01,pUVar6);
        if (bVar4) {
          pUVar7 = this_01->Handle;
        }
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar7);
      }
      local_res18.ObjectIndex = 0;
      local_res18.ObjectSerialNumber = 0;
      local_res10 = pUVar7;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar7);
      }
      FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res10);
      bVar4 = FWeakObjectPtr::IsValid(&local_res18);
      if (bVar4) {
        pUVar7 = FWeakObjectPtr::Get(&local_res18);
        pUVar8 = UDS_TimeUtilManager::GetInst();
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar8 != (UDS_TimeUtilManager *)0x0) goto LAB_14bab1b2f;
        }
        else if (pUVar8 != (UDS_TimeUtilManager *)0x0) {
          UE::GC::MarkAsReachable((UObject *)pUVar8);
LAB_14bab1b2f:
          UDS_TimeUtilManager::GetCurrentServerDateTime();
          if (*(longlong *)&pUVar7[3].field_0x10 <= local_res20) goto LAB_14bab1b49;
        }
        pUVar10 = (UObject *)(ulonglong)((int)pUVar10 + 1);
      }
LAB_14bab1b49:
      this_01 = this_01 + 1;
    }
  }
  else {
    iVar12 = 0;
    if (*(int *)&(this->WaitCompleteDataMap).field_0x8 !=
        *(int *)&(this->WaitCompleteDataMap).field_0x34) {
      puVar11 = *(undefined1 **)&(this->WaitCompleteDataMap).field_0x40;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = &(this->WaitCompleteDataMap).field_0x38;
      }
      iVar5 = *(int *)(puVar11 +
                      ((ulonglong)(*(int *)&(this->WaitCompleteDataMap).field_0x48 - 1) &
                      (ulonglong)EVar3) * 4);
      iVar12 = 0;
      if (iVar5 != -1) {
        do {
          if (*(EDS_WaitCompleteType *)
               ((longlong)iVar5 * 0x20 + *(longlong *)&this->WaitCompleteDataMap) == EVar3) {
            pTVar9 = TMapBase<enum_EDS_WaitCompleteType,TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_WaitCompleteType,TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                     ::FindChecked(&this->WaitCompleteDataMap,EVar3);
            this_00 = (FWeakObjectPtr *)(pTVar9->AllocatorInstance).Data;
            iVar12 = pTVar9->ArrayNum;
            pFVar2 = this_00 + iVar12;
            goto LAB_14bab1bd4;
          }
          iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + *(longlong *)&this->WaitCompleteDataMap);
        } while (iVar5 != -1);
      }
    }
  }
  return iVar12;
LAB_14bab1bd4:
  if (pTVar9->ArrayNum != iVar12) {
    `TCheckedPointerIterator<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,int,0>::operator!='
    ::__l2::<lambda_1>::operator()(&local_res10);
  }
  if (this_00 == pFVar2) {
    return (int)pUVar13;
  }
  bVar4 = FWeakObjectPtr::IsValid(this_00);
  if (bVar4) {
    pUVar10 = FWeakObjectPtr::Get(this_00);
    pUVar8 = UDS_TimeUtilManager::GetInst();
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar8 != (UDS_TimeUtilManager *)0x0) goto LAB_14bab1c22;
    }
    else if (pUVar8 != (UDS_TimeUtilManager *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
LAB_14bab1c22:
      UDS_TimeUtilManager::GetCurrentServerDateTime();
      if (*(longlong *)&pUVar10[3].field_0x10 <= (longlong)local_res18) goto LAB_14bab1c3c;
    }
    pUVar13 = (UObject *)(ulonglong)((int)pUVar13 + 1);
  }
LAB_14bab1c3c:
  this_00 = this_00 + 1;
  goto LAB_14bab1bd4;
}

// Update @ 14bad3fb0

void __thiscall UDS_WaitCompleteDataSet::Update(UDS_WaitCompleteDataSet *this,float *param_1)

{
  return;
}

// UpdateWaitComplete @ 14badb2d0

void __thiscall
UDS_WaitCompleteDataSet::UpdateWaitComplete(UDS_WaitCompleteDataSet *this,DbWorkItem *param_1)

{
  TMap<EDS_WaitCompleteType,TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_WaitCompleteType,TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  uint uVar1;
  ulonglong uVar2;
  FWeakObjectPtr *pFVar3;
  FWeakObjectPtr FVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  UObject *pUVar11;
  FDateTime FVar12;
  UDS_DataBase *this_01;
  FObjectPtr_u_0 *this_02;
  UClass *pUVar13;
  UDS_WaitCompleteData *pUVar14;
  TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar15;
  int iVar16;
  longlong *plVar17;
  undefined1 *puVar18;
  longlong lVar19;
  ulonglong uVar20;
  EDS_WaitCompleteType *pEVar21;
  ulonglong uVar22;
  SqlWaitCompleteTableDefaultTypeInternal *pSVar23;
  int iVar24;
  EDS_WaitCompleteType local_res10 [8];
  TPairInitializer<EDS_WaitCompleteType_&,TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_&&>
  local_res18;
  FWeakObjectPtr local_a8;
  FWeakObjectPtr local_a0;
  UObject *local_98;
  void *local_90;
  undefined8 local_88;
  undefined8 local_80;
  UDS_WaitCompleteData *local_78;
  UDS_WaitCompleteData *local_70;
  EDS_WaitCompleteType *local_68;
  void **local_60;
  
  uVar1 = (param_1->_impl_)._oneof_case_[0];
  if (uVar1 == 0x3c) {
    pSVar23 = (SqlWaitCompleteTableDefaultTypeInternal *)(param_1->_impl_).Item_.characterlevel_;
  }
  else {
    pSVar23 = &ds_game::_SqlWaitCompleteTable_default_instance_;
  }
  local_res10[0] = *(EDS_WaitCompleteType *)((longlong)pSVar23 + 0x50);
  uVar2 = *(ulonglong *)((longlong)pSVar23 + 0x30);
  if ((param_1->_impl_).dirty_flag_ == 5) {
    UDS_DataSetBase::RemoveData((UDS_DataSetBase *)this,uVar2);
    if (*(int *)&(this->WaitCompleteDataMap).field_0x8 !=
        *(int *)&(this->WaitCompleteDataMap).field_0x34) {
      puVar18 = *(undefined1 **)&(this->WaitCompleteDataMap).field_0x40;
      if (puVar18 == (undefined1 *)0x0) {
        puVar18 = &(this->WaitCompleteDataMap).field_0x38;
      }
      iVar10 = *(int *)(puVar18 +
                       ((ulonglong)(*(int *)&(this->WaitCompleteDataMap).field_0x48 - 1) &
                       (ulonglong)local_res10[0]) * 4);
      if (iVar10 != -1) {
        lVar19 = *(longlong *)&this->WaitCompleteDataMap;
        do {
          if (*(EDS_WaitCompleteType *)((longlong)iVar10 * 0x20 + lVar19) == local_res10[0]) {
            local_98 = (UObject *)
                       TMapBase<enum_EDS_WaitCompleteType,TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_WaitCompleteType,TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                       ::FindChecked(&this->WaitCompleteDataMap,local_res10[0]);
            lVar19 = (longlong)
                     ((TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                       *)local_98)->ArrayNum;
            if (((TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                  *)local_98)->ArrayNum == 0) {
              return;
            }
            pFVar3 = (FWeakObjectPtr *)
                     (((TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                        *)local_98)->AllocatorInstance).Data;
            uVar20 = 0;
            local_res18.Value =
                 (TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                  *)((ulonglong)local_res18.Value._4_4_ << 0x20);
            local_a8 = *pFVar3;
            bVar7 = FWeakObjectPtr::IsValid(&local_a8);
            if ((bVar7) &&
               (pUVar11 = FWeakObjectPtr::Get(&local_a8),
               *(ulonglong *)&pUVar11[2].field_0x10 == uVar2)) {
              bVar9 = 0;
            }
            else {
              bVar9 = 1;
            }
            local_res18.Key = (EDS_WaitCompleteType *)CONCAT71(local_res18.Key._1_7_,bVar9);
            uVar22 = uVar20;
            do {
              iVar10 = (int)uVar22;
              uVar20 = uVar20 + 1;
              uVar22 = (ulonglong)(iVar10 + 1);
              local_a8.ObjectIndex = iVar10;
              bVar8 = bVar9;
              if ((longlong)uVar20 < lVar19) {
                do {
                  local_a0 = pFVar3[uVar20];
                  bVar7 = FWeakObjectPtr::IsValid(&local_a0);
                  if ((!bVar7) ||
                     (pUVar11 = FWeakObjectPtr::Get(&local_a0), bVar8 = 0,
                     *(ulonglong *)&pUVar11[2].field_0x10 != uVar2)) {
                    bVar8 = 1;
                  }
                  if (bVar9 != bVar8) break;
                  uVar22 = (ulonglong)((int)uVar22 + 1);
                  uVar20 = uVar20 + 1;
                } while ((longlong)uVar20 < lVar19);
                bVar8 = (byte)local_res18.Key;
                iVar10 = local_a8.ObjectIndex;
              }
              iVar24 = (int)uVar22 - iVar10;
              iVar16 = (int)local_res18.Value;
              if (bVar8 != 0) {
                if ((int)local_res18.Value != iVar10) {
                  memmove(pFVar3 + (int)local_res18.Value,pFVar3 + iVar10,(longlong)iVar24 << 3);
                  bVar8 = (byte)local_res18.Key;
                }
                iVar16 = (int)local_res18.Value + iVar24;
                local_res18.Value =
                     (TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                      *)CONCAT44(local_res18.Value._4_4_,iVar16);
              }
              bVar9 = bVar8 ^ 1;
              local_res18.Key = (EDS_WaitCompleteType *)(CONCAT71(local_res18.Key._1_7_,bVar8) ^ 1);
              if (lVar19 <= (longlong)uVar20) {
                *(int *)&local_98->field_0x8 = iVar16;
                return;
              }
            } while( true );
          }
          iVar10 = *(int *)((longlong)iVar10 * 0x20 + 0x18 + lVar19);
        } while (iVar10 != -1);
      }
    }
  }
  else if (uVar1 == 0x3c) {
    pEVar21 = *(EDS_WaitCompleteType **)&((Message *)((longlong)pSVar23 + 0x30))->field_0x8;
    FVar4.ObjectIndex = *(int *)&((Message *)((longlong)pSVar23 + 0x40))->field_0x0;
    FVar4.ObjectSerialNumber = *(int *)&((Message *)((longlong)pSVar23 + 0x40))->field_0x4;
    iVar10 = *(int *)&((Message *)((longlong)pSVar23 + 0x50))->field_0x4;
    local_a0.ObjectIndex = *(int *)&((Message *)((longlong)pSVar23 + 0x40))->field_0x8;
    local_a0.ObjectSerialNumber = *(int *)&((Message *)((longlong)pSVar23 + 0x40))->field_0xc;
    local_res18.Key = pEVar21;
    local_a8 = FVar4;
    bVar7 = UDS_DataSetBase::HasData((UDS_DataSetBase *)this,uVar2);
    if (bVar7) {
      if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
        plVar17 = (longlong *)this->_padding_;
        if ((longlong *)this->_padding_ == (longlong *)0x0) {
          plVar17 = &this->_padding_;
        }
        iVar16 = *(int *)((longlong)plVar17 +
                         ((ulonglong)((int)this->_padding_ - 1) & (uVar2 >> 0x20) * 0x17 + uVar2) *
                         4);
        if (iVar16 != -1) {
          do {
            if (*(ulonglong *)(this->_padding_ + (longlong)iVar16 * 0x18) == uVar2) {
              this_02 = (FObjectPtr_u_0 *)
                        TMapBase<unsigned___int64,TObjectPtr<UDS_DataBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataBase>,0>_>
                        ::FindChecked((TMapBase<unsigned___int64,TObjectPtr<UDS_DataBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataBase>,0>_>
                                       *)&this->_padding_,uVar2);
              pUVar11 = (UObject *)0x0;
              if (this_02->Handle != (UObject *)0x0) {
                pUVar13 = Z_Construct_UClass_UDS_WaitCompleteData_NoRegister();
                bVar7 = FObjectPtr::IsA((FObjectPtr *)this_02,pUVar13);
                if (bVar7) {
                  pUVar11 = this_02->Handle;
                }
              }
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar11 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(pUVar11);
              }
              local_res18.Value =
                   (TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                    *)0x0;
              local_98 = pUVar11;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar11 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(pUVar11);
              }
              FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res18.Value,(FObjectPtr)&local_98);
              pEVar21 = local_res18.Key;
              goto LAB_14badb590;
            }
            iVar16 = *(int *)(this->_padding_ + 0x10 + (longlong)iVar16 * 0x18);
          } while (iVar16 != -1);
        }
      }
      local_res18.Value =
           (TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
            *)0x0;
      local_80 = 0;
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res18.Value,(FObjectPtr)&local_80);
LAB_14badb590:
      bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_res18.Value);
      if (bVar7) {
        pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_res18.Value);
        *(EDS_WaitCompleteType **)&pUVar11[2].field_0x18 = pEVar21;
        pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_res18.Value);
        *(int *)&pUVar11[2].field_0x20 = local_a8.ObjectIndex;
        *(int *)&pUVar11[2].field_0x24 = local_a8.ObjectSerialNumber;
        pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_res18.Value);
        *(int *)&pUVar11[3].field_0x0 = local_a0.ObjectIndex;
        *(int *)&pUVar11[3].field_0x4 = local_a0.ObjectSerialNumber;
        FVar12 = DS_Util::ConvertTimestampToDateTime((Timestamp *)&stack0xffffffffffffffa8);
        uVar5 = *(undefined8 *)FVar12.Ticks;
        pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_res18.Value);
        *(undefined8 *)&pUVar11[3].field_0x8 = uVar5;
        FVar12 = DS_Util::ConvertTimestampToDateTime((Timestamp *)&stack0xffffffffffffffb0);
        uVar5 = *(undefined8 *)FVar12.Ticks;
        pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_res18.Value);
        *(undefined8 *)&pUVar11[3].field_0x10 = uVar5;
        pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_res18.Value);
        lVar19 = *(longlong *)&pUVar11[3].field_0x10;
        pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_res18.Value);
        *(longlong *)&pUVar11[3].field_0x18 = (longlong)iVar10 * 10000000 + lVar19;
        pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_res18.Value);
        *(int *)&pUVar11[3].field_0x20 = iVar10;
        this_01 = (UDS_DataBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_res18.Value);
        UDS_DataBase::SetIsDirty(this_01,true);
      }
      else {
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<80325723910308092>,true,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Wait\\DS_WaitCompleteData.cpp"
                           ,0xfc,"false");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
    }
    else {
      pUVar11 = GetTransientPackageAsObject();
      pUVar14 = NewObject<UDS_WaitCompleteData>(pUVar11);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar14 != (UDS_WaitCompleteData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar14);
      }
      pUVar14->WaitCompleteType = local_res10[0];
      pUVar14->UID = uVar2;
      pUVar14->Param1 = (long64)local_res18.Key;
      pUVar14->Param2 = (long64)FVar4;
      pUVar14->Param3 = (long64)local_a0;
      FVar12 = DS_Util::ConvertTimestampToDateTime((Timestamp *)&stack0xffffffffffffffb8);
                    /* WARNING: Load size is inaccurate */
      (pUVar14->StartDateTime).Ticks = *FVar12.Ticks;
      FVar12 = DS_Util::ConvertTimestampToDateTime((Timestamp *)&stack0xffffffffffffffc0);
      this_00 = &this->WaitCompleteDataMap;
      lVar19 = *(longlong *)FVar12.Ticks;
      (pUVar14->AccelEndDateTime).Ticks = lVar19;
      (pUVar14->OriginEndDateTime).Ticks = (longlong)iVar10 * 10000000 + lVar19;
      pUVar14->AccelSeconds = iVar10;
      if (*(int *)&(this->WaitCompleteDataMap).field_0x8 !=
          *(int *)&(this->WaitCompleteDataMap).field_0x34) {
        puVar18 = *(undefined1 **)&(this->WaitCompleteDataMap).field_0x40;
        if (puVar18 == (undefined1 *)0x0) {
          puVar18 = &(this->WaitCompleteDataMap).field_0x38;
        }
        iVar10 = *(int *)(puVar18 +
                         ((ulonglong)(*(int *)&(this->WaitCompleteDataMap).field_0x48 - 1) &
                         (ulonglong)local_res10[0]) * 4);
        if (iVar10 != -1) {
          do {
            if (*(EDS_WaitCompleteType *)((longlong)iVar10 * 0x20 + *(longlong *)this_00) ==
                local_res10[0]) goto LAB_14badb827;
            iVar10 = *(int *)((longlong)iVar10 * 0x20 + 0x18 + *(longlong *)this_00);
          } while (iVar10 != -1);
        }
      }
      local_68 = local_res10;
      local_90 = (void *)0x0;
      local_60 = &local_90;
      local_88 = 0;
      TSet<TTuple<enum_EDS_WaitCompleteType,TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EDS_WaitCompleteType,TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<enum_EDS_WaitCompleteType_&,TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_&&>_>
                (this_00,&local_res18,(bool *)&local_68);
      if (local_90 != (void *)0x0) {
        FMemory::Free(local_90);
      }
LAB_14badb827:
      pTVar15 = TMapBase<enum_EDS_WaitCompleteType,TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_WaitCompleteType,TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
                ::FindChecked(this_00,local_res10[0]);
      iVar10 = pTVar15->ArrayNum;
      if (iVar10 == pTVar15->ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&pTVar15->AllocatorInstance,&pTVar15->ArrayMax);
      }
      pTVar15->ArrayNum = iVar10 + 1;
      pFVar3 = (FWeakObjectPtr *)((pTVar15->AllocatorInstance).Data + (longlong)iVar10 * 8);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (UE::GC::MarkAsReachable((UObject *)pUVar14),
         UE::GC::GIsIncrementalReachabilityPending != false)) {
        UE::GC::MarkAsReachable((UObject *)pUVar14);
      }
      pFVar3->ObjectIndex = 0;
      pFVar3->ObjectSerialNumber = 0;
      local_78 = pUVar14;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar14);
      }
      FWeakObjectPtr::operator=(pFVar3,(FObjectPtr)&local_78);
      local_70 = pUVar14;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar14);
      }
      UDS_DataSetBase::AddData((UDS_DataSetBase *)this,uVar2,(TObjectPtr<UDS_DataBase>)&local_70);
      UDS_DataSetBase::SetIsDirty((UDS_DataSetBase *)this,true);
    }
  }
  return;
}

