// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 23

// OnAdded @ 14b40ac10

void __thiscall UDS_DataSetBase::OnAdded(UDS_DataSetBase *this)

{
  return;
}

// StaticClass @ 14b40ad60

UClass * __cdecl UDS_DataSetBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UDS_DataSetBase.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_DataSetBase",
               &Z_Registration_Info_UClass_UDS_DataSetBase.InnerSingleton,
               StaticRegisterNativesUDS_DataSetBase,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_DataSetBase>,InternalVTableHelperCtorCaller<UDS_DataSetBase>,
               aFStackX_8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_DataSetBase.InnerSingleton;
}

// Update @ 14b40af40

void __thiscall UDS_DataSetBase::Update(UDS_DataSetBase *this,float *param_1)

{
  return;
}

// UDS_DataSetBase @ 14b47d7c0

UDS_DataSetBase * __thiscall
UDS_DataSetBase::UDS_DataSetBase(UDS_DataSetBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_DataSetBase__6B_;
  *(undefined8 *)&this->OnDirty = 0;
  *(undefined8 *)&(this->OnDirty).field_0x8 = 0;
  *(undefined8 *)&(this->OnDirty).field_0x10 = 0;
  *(undefined8 *)&this->DataMap = 0;
  *(undefined8 *)&(this->DataMap).field_0x8 = 0;
  *(undefined8 *)&(this->DataMap).field_0x20 = 0;
  *(undefined4 *)&(this->DataMap).field_0x28 = 0;
  *(undefined4 *)&(this->DataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DataMap).field_0x34 = 0;
  *(undefined4 *)&(this->DataMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DataMap).field_0x40 = 0;
  *(undefined4 *)&(this->DataMap).field_0x48 = 0;
  (this->DataList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataList).ArrayNum = 0;
  (this->DataList).ArrayMax = 0;
  (this->MyDataSetContainer).WeakPtr = (FWeakObjectPtr)0x0;
  this->bIsDirty = true;
  return this;
}

// UDS_DataSetBase @ 14b47d840

UDS_DataSetBase * __thiscall
UDS_DataSetBase::UDS_DataSetBase(UDS_DataSetBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_DataSetBase__6B_;
  *(undefined8 *)&this->OnDirty = 0;
  *(undefined8 *)&(this->OnDirty).field_0x8 = 0;
  *(undefined8 *)&(this->OnDirty).field_0x10 = 0;
  *(undefined8 *)&this->DataMap = 0;
  *(undefined8 *)&(this->DataMap).field_0x8 = 0;
  *(undefined8 *)&(this->DataMap).field_0x20 = 0;
  *(undefined4 *)&(this->DataMap).field_0x28 = 0;
  *(undefined4 *)&(this->DataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DataMap).field_0x34 = 0;
  *(undefined4 *)&(this->DataMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DataMap).field_0x40 = 0;
  *(undefined4 *)&(this->DataMap).field_0x48 = 0;
  (this->DataList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataList).ArrayNum = 0;
  (this->DataList).ArrayMax = 0;
  (this->MyDataSetContainer).WeakPtr = (FWeakObjectPtr)0x0;
  this->bIsDirty = true;
  return this;
}

// ~UDS_DataSetBase @ 14b47df70

void __thiscall UDS_DataSetBase::~UDS_DataSetBase(UDS_DataSetBase *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UDS_DataSetBase__6B_;
  pFVar1 = (this->DataList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->DataMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->DataMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TObjectPtr<UDS_DataBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TObjectPtr<UDS_DataBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TObjectPtr<UDS_DataBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DataMap);
  pvVar2 = *(void **)&(this->OnDirty).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDirty);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b47f460

UClass * __cdecl UDS_DataSetBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_DataSetBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_DataSetBase",
               &Z_Registration_Info_UClass_UDS_DataSetBase.InnerSingleton,
               StaticRegisterNativesUDS_DataSetBase,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_DataSetBase>,InternalVTableHelperCtorCaller<UDS_DataSetBase>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_DataSetBase.InnerSingleton;
}

// StaticRegisterNativesUDS_DataSetBase @ 14b47f610

void __cdecl UDS_DataSetBase::StaticRegisterNativesUDS_DataSetBase(void)

{
  return;
}

// AddData @ 14ba35290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_DataSetBase::AddData(UDS_DataSetBase *this,ulong64 param_1,TObjectPtr<UDS_DataBase> param_2)

{
  int *piVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  int iVar5;
  UDS_LogManager *pUVar6;
  UObject *pUVar7;
  undefined1 *puVar8;
  TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *this_00;
  undefined1 auStackY_1a8 [32];
  TPairInitializer<unsigned___int64_&,TObjectPtr<UDS_DataBase>_&> local_168;
  TObjectPtr<UDS_DataBase> **local_158;
  TObjectPtr<UDS_DataBase>_u_0 local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_168.Value = (TObjectPtr<UDS_DataBase> *)param_1;
  if (*(longlong *)param_2.field0_0x0 == 0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_DataSetBase::AddData",0x18,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_148.Ptr,0x79,L"InData is nullptr.");
LAB_14ba35553:
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
LAB_14ba35565:
    bVar4 = false;
  }
  else {
    if (*(int *)&(this->DataMap).field_0x8 != *(int *)&(this->DataMap).field_0x34) {
      puVar8 = *(undefined1 **)&(this->DataMap).field_0x40;
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = &(this->DataMap).field_0x38;
      }
      iVar5 = *(int *)(puVar8 + (ulonglong)
                                (*(int *)&(this->DataMap).field_0x48 - 1U &
                                (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
      if (iVar5 != -1) {
        do {
          if (*(ulong64 *)(*(longlong *)&this->DataMap + (longlong)iVar5 * 0x18) == param_1) {
            pUVar6 = UDS_LogManager::GetInst();
            if (pUVar6 == (UDS_LogManager *)0x0) goto LAB_14ba35565;
            pUVar6 = UDS_LogManager::GetInst();
            local_148._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_148,"UDS_DataSetBase::AddData",0x18,Yes);
            UDS_LogManager::PrintLog
                      (pUVar6,1,Warning,local_148.Ptr,0x7f,L"Data already exists. (%d)");
            goto LAB_14ba35553;
          }
          iVar5 = *(int *)(*(longlong *)&this->DataMap + 0x10 + (longlong)iVar5 * 0x18);
        } while (iVar5 != -1);
      }
    }
    *(ulong64 *)(*(longlong *)param_2.field0_0x0 + 0x40) = param_1;
    if (this != (UDS_DataSetBase *)0x0) {
      lVar2 = *(longlong *)param_2.field0_0x0;
      local_168.Key = (ulong64 *)this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(lVar2 + 0x48),(FObjectPtr)&local_168);
    }
    local_158 = &local_168.Value;
    local_150 = param_2.field0_0x0;
    TSet<TTuple<unsigned___int64,TObjectPtr<UDS_DataBase>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataBase>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned___int64_&,TObjectPtr<UDS_DataBase>_&>_>
              ((TSet<TTuple<unsigned___int64,TObjectPtr<UDS_DataBase>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataBase>,0>,FDefaultSetAllocator>
                *)&this->DataMap,&local_168,(bool *)&local_158);
    iVar5 = (this->DataList).ArrayNum;
    piVar1 = &(this->DataList).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->DataList).AllocatorInstance,piVar1);
    }
    pFVar3 = (this->DataList).AllocatorInstance.Data;
    (this->DataList).ArrayNum = iVar5 + 1;
    pUVar7 = *(UObject **)param_2.field0_0x0;
    *(UObject **)(pFVar3 + (longlong)iVar5 * 8) = pUVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar7);
    }
    this->bIsDirty = true;
    this_00 = &this->MyDataSetContainer;
    bVar4 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
    if (!bVar4) {
      pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      pUVar7[3].field_0x20 = 1;
    }
    (**(code **)(**(longlong **)param_2.field0_0x0 + 0x2b0))();
    bVar4 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
    if (!bVar4) {
      pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      if (pUVar7[1].field_0x8 != '\0') {
        bVar4 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0)
        ;
        if (!bVar4) {
          pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          if (0 < *(int *)&pUVar7[1].field_0xc) {
            (**(code **)(**(longlong **)param_2.field0_0x0 + 0x2b8))();
          }
        }
      }
    }
    bVar4 = true;
  }
  return bVar4;
}

// CheckDirty @ 14ba387c0

void __thiscall UDS_DataSetBase::CheckDirty(UDS_DataSetBase *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UDS_DataBase *pUVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  if (this->bIsDirty == true) {
    this->bIsDirty = false;
    (**(code **)(this->_padding_ + 0x2c8))();
    pFVar4 = (this->DataList).AllocatorInstance.Data;
    iVar2 = (this->DataList).ArrayNum;
    pFVar1 = pFVar4 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->DataList).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UDS_DataBase>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar4 == pFVar1) break;
      pUVar3 = *(UDS_DataBase **)pFVar4;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar3 != (UDS_DataBase *)0x0) goto LAB_14ba38847;
      }
      else if (pUVar3 != (UDS_DataBase *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
LAB_14ba38847:
        if (pUVar3->bIsDirty == true) {
          pUVar3->bIsDirty = false;
          FDS_DataDirtyDelegate_DelegateWrapper
                    ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar3->OnDirty,pUVar3
                    );
        }
      }
      pFVar4 = pFVar4 + 8;
    }
  }
  return;
}

// ClearAllData @ 14ba39cb0

void __thiscall UDS_DataSetBase::ClearAllData(UDS_DataSetBase *this)

{
  undefined1 *puVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  bool bVar5;
  UObject *pUVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  pFVar7 = (this->DataList).AllocatorInstance.Data;
  iVar4 = (this->DataList).ArrayNum;
  pFVar3 = pFVar7 + (longlong)iVar4 * 8;
  do {
    if ((this->DataList).ArrayNum != iVar4) {
      `TCheckedPointerIterator<TObjectPtr<UDS_DataBase>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar7 == pFVar3) {
      bVar5 = 1 < *(int *)&(this->DataMap).field_0x48;
      if (!bVar5) {
        TSet<TTuple<unsigned___int64,TObjectPtr<UDS_DataBase>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataBase>,0>,FDefaultSetAllocator>
        ::UnhashElements((TSet<TTuple<unsigned___int64,TObjectPtr<UDS_DataBase>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataBase>,0>,FDefaultSetAllocator>
                          *)&this->DataMap);
      }
      puVar1 = &(this->DataMap).field_0xc;
      *(undefined4 *)&(this->DataMap).field_0x8 = 0;
      if (*(int *)puVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)&this->DataMap,0,(int *)puVar1);
      }
      *(undefined4 *)&(this->DataMap).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->DataMap).field_0x34 = 0;
      iVar4 = *(int *)&(this->DataMap).field_0x2c;
      *(undefined4 *)&(this->DataMap).field_0x28 = 0;
      if ((iVar4 < 0) || (0x80 < iVar4)) {
        *(undefined4 *)&(this->DataMap).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(this->DataMap).field_0x10,0);
      }
      if (bVar5) {
        *(undefined4 *)&(this->DataMap).field_0x48 = 1;
        TSet<TTuple<unsigned___int64,TObjectPtr<UDS_DataBase>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataBase>,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<unsigned___int64,TObjectPtr<UDS_DataBase>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataBase>,0>,FDefaultSetAllocator>
                  *)&this->DataMap);
      }
      piVar2 = &(this->DataList).ArrayMax;
      (this->DataList).ArrayNum = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(this->DataList).AllocatorInstance,0,piVar2);
      }
      this->bIsDirty = true;
      bVar5 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                        (&this->MyDataSetContainer,(void *)0x0);
      if (!bVar5) {
        pUVar6 = FWeakObjectPtr::Get(&(this->MyDataSetContainer).WeakPtr);
        pUVar6[3].field_0x20 = 1;
      }
      return;
    }
    pUVar6 = *(UObject **)pFVar7;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar6 != (UObject *)0x0) goto LAB_14ba39d14;
    }
    else if (pUVar6 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar6);
LAB_14ba39d14:
      (**(code **)(*(longlong *)pUVar6 + 0x2c0))(pUVar6);
    }
    pFVar7 = pFVar7 + 8;
  } while( true );
}

// GetData @ 14ba48460

TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> __thiscall
UDS_DataSetBase::GetData(UDS_DataSetBase *this,ulong64 param_1)

{
  longlong lVar1;
  UDS_DataBase *pUVar2;
  int iVar3;
  TObjectPtr<UDS_DataBase> *pTVar4;
  undefined1 *puVar5;
  int in_R8D;
  int in_register_00000084;
  UDS_DataBase *local_res8;
  
  if (*(int *)&(this->DataMap).field_0x8 != *(int *)&(this->DataMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->DataMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->DataMap).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->DataMap).field_0x48 - 1U &
                              in_register_00000084 * 0x17 + in_R8D) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->DataMap;
      do {
        if (*(longlong *)(lVar1 + (longlong)iVar3 * 0x18) == CONCAT44(in_register_00000084,in_R8D))
        {
          pTVar4 = TMapBase<unsigned___int64,TObjectPtr<UDS_DataBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataBase>,0>_>
                   ::FindChecked((TMapBase<unsigned___int64,TObjectPtr<UDS_DataBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataBase>,0>_>
                                  *)&this->DataMap,CONCAT44(in_register_00000084,in_R8D));
          pUVar2 = (pTVar4->field0_0x0).DebugPtr;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            if (pUVar2 != (UDS_DataBase *)0x0) {
              UE::GC::MarkAsReachable((UObject *)pUVar2);
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar2 != (UDS_DataBase *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar2);
            }
          }
          *(undefined8 *)param_1 = 0;
          local_res8 = pUVar2;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar2 != (UDS_DataBase *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar2);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res8);
          return (TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
        }
        iVar3 = *(int *)(lVar1 + 0x10 + (longlong)iVar3 * 0x18);
      } while (iVar3 != -1);
    }
  }
  *(undefined8 *)param_1 = 0;
  local_res8 = (UDS_DataBase *)0x0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetDataContainerKey @ 14ba4a310

ulong64 __thiscall UDS_DataSetBase::GetDataContainerKey(UDS_DataSetBase *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                    (&this->MyDataSetContainer,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->MyDataSetContainer).WeakPtr);
    return *(ulong64 *)(pUVar2 + 1);
  }
  return 0;
}

// GetEntityID @ 14ba4a960

ulong64 __thiscall UDS_DataSetBase::GetEntityID(UDS_DataSetBase *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                    (&this->MyDataSetContainer,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->MyDataSetContainer).WeakPtr);
    return *(ulong64 *)(pUVar2 + 1);
  }
  return 0;
}

// GetEntityTableID @ 14ba4aa10

int __thiscall UDS_DataSetBase::GetEntityTableID(UDS_DataSetBase *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                    (&this->MyDataSetContainer,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->MyDataSetContainer).WeakPtr);
    return *(int *)&pUVar2[1].field_0xc;
  }
  return 0;
}

// GetEntityType @ 14ba4aac0

EDS_EntityType __thiscall UDS_DataSetBase::GetEntityType(UDS_DataSetBase *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                    (&this->MyDataSetContainer,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->MyDataSetContainer).WeakPtr);
    return pUVar2[1].field_0x8;
  }
  return None;
}

// GetIsDirty @ 14ba4c5c0

bool __thiscall UDS_DataSetBase::GetIsDirty(UDS_DataSetBase *this)

{
  return this->bIsDirty;
}

// GetMyDataSetContainer @ 14ba4d500

TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> __thiscall
UDS_DataSetBase::GetMyDataSetContainer(UDS_DataSetBase *this)

{
  FWeakObjectPtr in_RDX;
  
  *(FWeakObjectPtr *)in_RDX = (this->MyDataSetContainer).WeakPtr;
  return (TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>)in_RDX;
}

// HasData @ 14ba51510

bool __thiscall UDS_DataSetBase::HasData(UDS_DataSetBase *this,ulong64 param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  if (*(int *)&(this->DataMap).field_0x8 != *(int *)&(this->DataMap).field_0x34) {
    puVar2 = *(undefined1 **)&(this->DataMap).field_0x40;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &(this->DataMap).field_0x38;
    }
    iVar1 = *(int *)(puVar2 + (ulonglong)
                              (*(int *)&(this->DataMap).field_0x48 - 1U &
                              (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulong64 *)(*(longlong *)&this->DataMap + (longlong)iVar1 * 0x18) == param_1)
        goto LAB_14ba5157c;
        iVar1 = *(int *)(*(longlong *)&this->DataMap + 0x10 + (longlong)iVar1 * 0x18);
      } while (iVar1 != -1);
    }
  }
  iVar1 = -1;
LAB_14ba5157c:
  return iVar1 != -1;
}

// OnDirtyBroadcast @ 14ba60bc0

void __thiscall UDS_DataSetBase::OnDirtyBroadcast(UDS_DataSetBase *this)

{
  FDS_DataSetDirtyDelegate_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnDirty,this);
  return;
}

// RemoveData @ 14ba66080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_DataSetBase::RemoveData(UDS_DataSetBase *this,ulong64 param_1)

{
  TObjectPtr<UDS_DataBase>_u_0 *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  UDS_LogManager *pUVar7;
  TObjectPtr<UDS_DataBase> *pTVar8;
  TObjectPtr<UDS_DataBase>_u_0 TVar9;
  UObject *pUVar10;
  void *pvVar11;
  undefined1 *puVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined1 auStackY_2e8 [32];
  TObjectPtr<UDS_DataBase>_u_0 local_298;
  ulong64 local_290;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  uVar14 = (int)(param_1 >> 0x20) * 0x17 + (int)param_1;
  if (*(int *)&(this->DataMap).field_0x8 != *(int *)&(this->DataMap).field_0x34) {
    puVar12 = *(undefined1 **)&(this->DataMap).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->DataMap).field_0x38;
    }
    iVar6 = *(int *)(puVar12 + (ulonglong)(*(int *)&(this->DataMap).field_0x48 - 1U & uVar14) * 4);
    if (iVar6 != -1) {
      do {
        if (*(ulong64 *)(*(longlong *)&this->DataMap + (longlong)iVar6 * 0x18) == param_1) {
          pTVar8 = TMapBase<unsigned___int64,TObjectPtr<UDS_DataBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataBase>,0>_>
                   ::FindChecked((TMapBase<unsigned___int64,TObjectPtr<UDS_DataBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataBase>,0>_>
                                  *)&this->DataMap,param_1);
          local_298.ObjectPtr.field0_0x0 = (FObjectPtr)(pTVar8->field0_0x0).DebugPtr;
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14ba661d8:
            if (local_298.DebugPtr != (UDS_DataBase *)0x0) {
              (**(code **)((local_298.DebugPtr)->_padding_ + 0x2c0))();
              local_290 = param_1;
              if (*(int *)&(this->DataMap).field_0x8 != *(int *)&(this->DataMap).field_0x34) {
                TSet<TTuple<unsigned___int64,TObjectPtr<UDS_DataBase>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataBase>,0>,FDefaultSetAllocator>
                ::RemoveImpl<unsigned___int64>
                          ((TSet<TTuple<unsigned___int64,TObjectPtr<UDS_DataBase>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataBase>,0>,FDefaultSetAllocator>
                            *)&this->DataMap,uVar14,&local_290);
              }
              pTVar1 = (TObjectPtr<UDS_DataBase>_u_0 *)(this->DataList).AllocatorInstance.Data;
              if (((pTVar1 <= &local_298) && (&local_298 < pTVar1 + (this->DataList).ArrayMax)) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
                pcVar3 = (code *)swi(3);
                uVar5 = (*pcVar3)();
                return (bool)uVar5;
              }
              iVar6 = (this->DataList).ArrayNum;
              if (iVar6 != 0) {
                iVar17 = 0;
                pFVar2 = (this->DataList).AllocatorInstance.Data;
                bVar4 = *(UDS_DataBase **)pFVar2 != local_298.DebugPtr;
                lVar13 = 0;
                TVar9 = local_298;
                iVar15 = 0;
                do {
                  iVar16 = iVar15;
                  do {
                    lVar13 = lVar13 + 1;
                    iVar16 = iVar16 + 1;
                    if (iVar6 <= lVar13) break;
                  } while (bVar4 == (*(UDS_DataBase **)(pFVar2 + lVar13 * 8) != TVar9.DebugPtr));
                  if (bVar4 != false) {
                    if (iVar17 != iVar15) {
                      memmove(pFVar2 + (longlong)iVar17 * 8,pFVar2 + (longlong)iVar15 * 8,
                              (longlong)(iVar16 - iVar15) << 3);
                      TVar9 = local_298;
                    }
                    iVar17 = iVar17 + (iVar16 - iVar15);
                  }
                  bVar4 = (bool)(bVar4 ^ 1);
                  iVar15 = iVar16;
                } while (lVar13 < iVar6);
                (this->DataList).ArrayNum = iVar17;
              }
              this->bIsDirty = true;
              bVar4 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                                (&this->MyDataSetContainer,(void *)0x0);
              if (!bVar4) {
                pUVar10 = FWeakObjectPtr::Get(&(this->MyDataSetContainer).WeakPtr);
                pUVar10[3].field_0x20 = 1;
              }
              return true;
            }
          }
          else if (local_298.DebugPtr != (UDS_DataBase *)0x0) {
            UE::GC::MarkAsReachable((UObject *)local_298.DebugPtr);
            goto LAB_14ba661d8;
          }
          pUVar7 = UDS_LogManager::GetInst();
          if (pUVar7 == (UDS_LogManager *)0x0) {
            return false;
          }
          pUVar7 = UDS_LogManager::GetInst();
          local_288._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_288,"UDS_DataSetBase::RemoveData",0x1b,Yes);
          UDS_LogManager::PrintLog(pUVar7,1,Warning,local_288.Ptr,0x9f,L"Data is nullptr.");
          pvVar11 = (void *)local_288._padding_;
          goto LAB_14ba66183;
        }
        iVar6 = *(int *)(*(longlong *)&this->DataMap + 0x10 + (longlong)iVar6 * 0x18);
      } while (iVar6 != -1);
    }
  }
  pUVar7 = UDS_LogManager::GetInst();
  if (pUVar7 != (UDS_LogManager *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_DataSetBase::RemoveData",0x1b,Yes);
    UDS_LogManager::PrintLog(pUVar7,1,Warning,local_168.Ptr,0x98,L"Couldn\'t find data. (%d)");
    pvVar11 = (void *)local_168._padding_;
LAB_14ba66183:
    if (pvVar11 != (void *)0x0) {
      FMemory::Free(pvVar11);
    }
  }
  return false;
}

// SetIsDirty @ 14ba718f0

void __thiscall UDS_DataSetBase::SetIsDirty(UDS_DataSetBase *this,bool param_1)

{
  bool bVar1;
  UObject *pUVar2;
  
  this->bIsDirty = param_1;
  if (param_1) {
    bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      (&this->MyDataSetContainer,(void *)0x0);
    if (!bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&(this->MyDataSetContainer).WeakPtr);
      pUVar2[3].field_0x20 = 1;
    }
  }
  return;
}

// SetMyDataSetContainer @ 14ba72f60

void __thiscall
UDS_DataSetBase::SetMyDataSetContainer(UDS_DataSetBase *this,UDS_DataSetContainer *param_1)

{
  UDS_DataSetContainer *local_res10 [3];
  
  if (param_1 != (UDS_DataSetContainer *)0x0) {
    local_res10[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&(this->MyDataSetContainer).WeakPtr,(FObjectPtr)local_res10);
  }
  return;
}

