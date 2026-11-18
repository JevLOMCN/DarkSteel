// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 24

// StaticClass @ 14b481380

UClass * __cdecl UDS_DataSetContainer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_DataSetContainer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_DataSetContainer",
               &Z_Registration_Info_UClass_UDS_DataSetContainer.InnerSingleton,
               StaticRegisterNativesUDS_DataSetContainer,0xa0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_DataSetContainer>,
               InternalVTableHelperCtorCaller<UDS_DataSetContainer>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_DataSetContainer.InnerSingleton;
}

// UDS_DataSetContainer @ 14b483570

UDS_DataSetContainer * __thiscall
UDS_DataSetContainer::UDS_DataSetContainer(UDS_DataSetContainer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_DataSetContainer__6B_;
  *(undefined8 *)&this->DataSetMap = 0;
  *(undefined8 *)&(this->DataSetMap).field_0x8 = 0;
  *(undefined8 *)&(this->DataSetMap).field_0x20 = 0;
  this->EntityID = 0;
  this->EntityType = None;
  this->EntityTableID = 0;
  *(undefined4 *)&(this->DataSetMap).field_0x28 = 0;
  *(undefined4 *)&(this->DataSetMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DataSetMap).field_0x34 = 0;
  *(undefined4 *)&(this->DataSetMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DataSetMap).field_0x40 = 0;
  *(undefined4 *)&(this->DataSetMap).field_0x48 = 0;
  (this->DataSetList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataSetList).ArrayNum = 0;
  (this->DataSetList).ArrayMax = 0;
  this->bIsDirty = true;
  return this;
}

// UDS_DataSetContainer @ 14b4835f0

UDS_DataSetContainer * __thiscall
UDS_DataSetContainer::UDS_DataSetContainer(UDS_DataSetContainer *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_DataSetContainer__6B_;
  *(undefined8 *)&this->DataSetMap = 0;
  *(undefined8 *)&(this->DataSetMap).field_0x8 = 0;
  *(undefined8 *)&(this->DataSetMap).field_0x20 = 0;
  this->EntityID = 0;
  this->EntityType = None;
  this->EntityTableID = 0;
  *(undefined4 *)&(this->DataSetMap).field_0x28 = 0;
  *(undefined4 *)&(this->DataSetMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DataSetMap).field_0x34 = 0;
  *(undefined4 *)&(this->DataSetMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DataSetMap).field_0x40 = 0;
  *(undefined4 *)&(this->DataSetMap).field_0x48 = 0;
  (this->DataSetList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataSetList).ArrayNum = 0;
  (this->DataSetList).ArrayMax = 0;
  this->bIsDirty = true;
  return this;
}

// ~UDS_DataSetContainer @ 14b483f20

void __thiscall UDS_DataSetContainer::~UDS_DataSetContainer(UDS_DataSetContainer *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UDS_DataSetContainer__6B_;
  pFVar1 = (this->DataSetList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->DataSetMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->DataSetMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_DataType,TObjectPtr<UDS_DataSetBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_DataType,TObjectPtr<UDS_DataSetBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->DataSetMap);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b484f70

UClass * __cdecl UDS_DataSetContainer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_DataSetContainer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_DataSetContainer",
               &Z_Registration_Info_UClass_UDS_DataSetContainer.InnerSingleton,
               StaticRegisterNativesUDS_DataSetContainer,0xa0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_DataSetContainer>,
               InternalVTableHelperCtorCaller<UDS_DataSetContainer>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_DataSetContainer.InnerSingleton;
}

// StaticRegisterNativesUDS_DataSetContainer @ 14b4855f0

void __cdecl UDS_DataSetContainer::StaticRegisterNativesUDS_DataSetContainer(void)

{
  return;
}

// AddDataSet @ 14ba35580

void __thiscall
UDS_DataSetContainer::AddDataSet
          (UDS_DataSetContainer *this,EDS_DataType param_1,UDS_DataSetBase *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  TPairInitializer<EDS_DataType_&,UDS_DataSetBase_*_&> local_res8;
  UDS_DataSetBase *local_res18;
  UDS_DataSetBase ***local_18;
  UDS_DataSetBase **local_10;
  
  local_res8.Value._0_4_ = param_1;
  local_res18 = param_2;
  if (this != (UDS_DataSetContainer *)0x0) {
    local_res8.Key = (EDS_DataType *)this;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&(param_2->MyDataSetContainer).WeakPtr,(FObjectPtr)&local_res8);
  }
  local_18 = &local_res8.Value;
  local_10 = &local_res18;
  TSet<TTuple<enum_EDS_DataType,TObjectPtr<UDS_DataSetBase>_>,TDefaultMapHashableKeyFuncs<enum_EDS_DataType,TObjectPtr<UDS_DataSetBase>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_DataType_&,UDS_DataSetBase_*_&>_>
            (&this->DataSetMap,&local_res8,(bool *)&local_18);
  iVar3 = (this->DataSetList).ArrayNum;
  piVar1 = &(this->DataSetList).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->DataSetList).AllocatorInstance,piVar1);
  }
  pFVar2 = (this->DataSetList).AllocatorInstance.Data;
  (this->DataSetList).ArrayNum = iVar3 + 1;
  *(UDS_DataSetBase **)(pFVar2 + (longlong)iVar3 * 8) = local_res18;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18 != (UDS_DataSetBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18);
  }
  (**(code **)(local_res18->_padding_ + 0x2b8))();
  return;
}

// CheckDirty @ 14ba38890

void __thiscall UDS_DataSetContainer::CheckDirty(UDS_DataSetContainer *this)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  UObject *pUVar4;
  longlong lVar5;
  UDS_DataBase *pUVar6;
  FScriptContainerElement *pFVar7;
  undefined8 *puVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_res10;
  
  if (this->bIsDirty == true) {
    this->bIsDirty = false;
    pFVar9 = (this->DataSetList).AllocatorInstance.Data;
    iVar2 = (this->DataSetList).ArrayNum;
    pFVar7 = pFVar9 + (longlong)iVar2 * 8;
    local_res10 = pFVar7;
    while( true ) {
      if ((this->DataSetList).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UDS_DataSetBase>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar9 == pFVar7) break;
      pUVar4 = *(UObject **)pFVar9;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar4 != (UObject *)0x0) goto LAB_14ba38927;
      }
      else if (pUVar4 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar4);
LAB_14ba38927:
        if (pUVar4[4].field_0x8 == '\x01') {
          lVar5 = *(longlong *)pUVar4;
          pUVar4[4].field_0x8 = 0;
          (**(code **)(lVar5 + 0x2c8))(pUVar4);
          puVar8 = *(undefined8 **)&pUVar4[3].field_0x18;
          iVar3 = *(int *)&pUVar4[3].field_0x20;
          puVar1 = puVar8 + iVar3;
          while( true ) {
            if (*(int *)&pUVar4[3].field_0x20 != iVar3) {
              `TCheckedPointerIterator<TObjectPtr<UDS_DataBase>,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_res8);
            }
            pFVar7 = local_res10;
            if (puVar8 == puVar1) break;
            pUVar6 = (UDS_DataBase *)*puVar8;
            if (UE::GC::GIsIncrementalReachabilityPending == false) {
              if (pUVar6 != (UDS_DataBase *)0x0) goto LAB_14ba3898c;
            }
            else if (pUVar6 != (UDS_DataBase *)0x0) {
              UE::GC::MarkAsReachable((UObject *)pUVar6);
LAB_14ba3898c:
              if (pUVar6->bIsDirty == true) {
                pUVar6->bIsDirty = false;
                FDS_DataDirtyDelegate_DelegateWrapper
                          ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar6->OnDirty,
                           pUVar6);
              }
            }
            puVar8 = puVar8 + 1;
          }
        }
      }
      pFVar9 = pFVar9 + 8;
    }
  }
  return;
}

// ClearAllDataSet @ 14ba39e30

void __thiscall UDS_DataSetContainer::ClearAllDataSet(UDS_DataSetContainer *this)

{
  undefined1 *puVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  UObject *pUVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  pFVar7 = (this->DataSetList).AllocatorInstance.Data;
  iVar4 = (this->DataSetList).ArrayNum;
  pFVar3 = pFVar7 + (longlong)iVar4 * 8;
  do {
    if ((this->DataSetList).ArrayNum != iVar4) {
      `TCheckedPointerIterator<TObjectPtr<UDS_DataSetBase>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar7 == pFVar3) {
      bVar6 = 1 < *(int *)&(this->DataSetMap).field_0x48;
      if (!bVar6) {
        TSet<TTuple<enum_EDS_DataType,TObjectPtr<UDS_DataSetBase>_>,TDefaultMapHashableKeyFuncs<enum_EDS_DataType,TObjectPtr<UDS_DataSetBase>,0>,FDefaultSetAllocator>
        ::UnhashElements(&this->DataSetMap);
      }
      puVar1 = &(this->DataSetMap).field_0xc;
      *(undefined4 *)&(this->DataSetMap).field_0x8 = 0;
      if (*(int *)puVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)&this->DataSetMap,0,(int *)puVar1);
      }
      *(undefined4 *)&(this->DataSetMap).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->DataSetMap).field_0x34 = 0;
      iVar4 = *(int *)&(this->DataSetMap).field_0x2c;
      *(undefined4 *)&(this->DataSetMap).field_0x28 = 0;
      if ((iVar4 < 0) || (0x80 < iVar4)) {
        *(undefined4 *)&(this->DataSetMap).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(this->DataSetMap).field_0x10,0);
      }
      if (bVar6) {
        *(undefined4 *)&(this->DataSetMap).field_0x48 = 1;
        TSet<TTuple<enum_EDS_DataType,TObjectPtr<UDS_DataSetBase>_>,TDefaultMapHashableKeyFuncs<enum_EDS_DataType,TObjectPtr<UDS_DataSetBase>,0>,FDefaultSetAllocator>
        ::Rehash(&this->DataSetMap);
      }
      piVar2 = &(this->DataSetList).ArrayMax;
      (this->DataSetList).ArrayNum = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(this->DataSetList).AllocatorInstance,0,piVar2);
      }
      return;
    }
    pUVar5 = *(UObject **)pFVar7;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar5 != (UObject *)0x0) goto LAB_14ba39e94;
    }
    else if (pUVar5 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar5);
LAB_14ba39e94:
      (**(code **)(*(longlong *)pUVar5 + 0x2c0))(pUVar5);
    }
    pFVar7 = pFVar7 + 8;
  } while( true );
}

// Create @ 14ba3a2b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_DataSetContainer * __cdecl
UDS_DataSetContainer::Create(ulong64 param_1,EDS_EntityType param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  UDS_DataSetContainer *pUVar7;
  UDS_LogManager *pUVar8;
  longlong *plVar9;
  int iVar10;
  undefined1 auStackY_1e8 [32];
  undefined1 local_1b8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  pUVar5 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar5,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = Z_Construct_UClass_UDS_DataSetContainer_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1b8,pUVar6);
  local_1b8._8_8_ = pUVar5;
  pUVar7 = (UDS_DataSetContainer *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
  if (local_1b8._64_8_ != 0) {
    plVar9 = (longlong *)(local_1b8 + 0x50);
    if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_1b8._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if (pUVar7 == (UDS_DataSetContainer *)0x0) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_DataSetContainer::Create",0x1c,Yes);
      UDS_LogManager::PrintLog(pUVar8,1,Error,local_138.Ptr,0x30,L"DataSetContainer Create Fail.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    pUVar7 = (UDS_DataSetContainer *)0x0;
  }
  else {
    pUVar7->EntityType = param_2;
    for (lVar3 = 0x3f; 0x37UL >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
    pUVar7->EntityID = param_1;
    iVar10 = 1 << ((byte)lVar3 & 0x1f);
    pUVar7->EntityTableID = param_3;
    iVar2 = *(int *)&(pUVar7->DataSetMap).field_0x48;
    if ((iVar2 < iVar10) || (iVar10 < iVar2)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
      TSet<TTuple<enum_EDS_DataType,TObjectPtr<UDS_DataSetBase>_>,TDefaultMapHashableKeyFuncs<enum_EDS_DataType,TObjectPtr<UDS_DataSetBase>,0>,FDefaultSetAllocator>
      ::UnhashElements(&pUVar7->DataSetMap);
    }
    puVar1 = &(pUVar7->DataSetMap).field_0xc;
    *(undefined4 *)&(pUVar7->DataSetMap).field_0x8 = 0;
    if (*(int *)puVar1 != 0x29) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0x29,(ForAnyElementType *)&pUVar7->DataSetMap,0,(int *)puVar1);
    }
    *(undefined4 *)&(pUVar7->DataSetMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pUVar7->DataSetMap).field_0x34 = 0;
    iVar2 = *(int *)&(pUVar7->DataSetMap).field_0x2c;
    *(undefined4 *)&(pUVar7->DataSetMap).field_0x28 = 0;
    if ((iVar2 < 0x40) || (0x80 < iVar2)) {
      *(undefined4 *)&(pUVar7->DataSetMap).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(pUVar7->DataSetMap).field_0x10,0);
    }
    if (bVar4) {
      *(int *)&(pUVar7->DataSetMap).field_0x48 = iVar10;
      TSet<TTuple<enum_EDS_DataType,TObjectPtr<UDS_DataSetBase>_>,TDefaultMapHashableKeyFuncs<enum_EDS_DataType,TObjectPtr<UDS_DataSetBase>,0>,FDefaultSetAllocator>
      ::Rehash(&pUVar7->DataSetMap);
    }
    (pUVar7->DataSetList).ArrayNum = 0;
    if ((pUVar7->DataSetList).ArrayMax != 0x29) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0x29,&(pUVar7->DataSetList).AllocatorInstance,0,&(pUVar7->DataSetList).ArrayMax
                );
    }
  }
  return pUVar7;
}

// GetContainerKey @ 14ba46540

ulong64 __thiscall UDS_DataSetContainer::GetContainerKey(UDS_DataSetContainer *this)

{
  return this->EntityID;
}

// GetDataSet @ 14ba4a350

TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> __thiscall
UDS_DataSetContainer::GetDataSet(UDS_DataSetContainer *this,EDS_DataType param_1)

{
  longlong lVar1;
  UDS_DataSetBase *pUVar2;
  int iVar3;
  TObjectPtr<UDS_DataSetBase> *pTVar4;
  int in_register_00000014;
  FWeakObjectPtr this_00;
  EDS_DataType in_R8D;
  undefined1 *puVar5;
  UDS_DataSetBase *local_res8;
  
  this_00.ObjectSerialNumber = in_register_00000014;
  this_00.ObjectIndex = param_1;
  if (*(int *)&(this->DataSetMap).field_0x8 != *(int *)&(this->DataSetMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->DataSetMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->DataSetMap).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)(*(int *)&(this->DataSetMap).field_0x48 - Player & in_R8D)
                              * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->DataSetMap;
      do {
        if (*(EDS_DataType *)(lVar1 + (longlong)iVar3 * 0x18) == in_R8D) {
          pTVar4 = TMapBase<enum_EDS_DataType,TObjectPtr<UDS_DataSetBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_DataType,TObjectPtr<UDS_DataSetBase>,0>_>
                   ::FindChecked(&this->DataSetMap,in_R8D);
          pUVar2 = (pTVar4->field0_0x0).DebugPtr;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            if (pUVar2 != (UDS_DataSetBase *)0x0) {
              UE::GC::MarkAsReachable((UObject *)pUVar2);
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar2 != (UDS_DataSetBase *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar2);
            }
          }
          *(undefined8 *)this_00 = 0;
          local_res8 = pUVar2;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar2 != (UDS_DataSetBase *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar2);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)this_00,(FObjectPtr)&local_res8);
          return (TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>)this_00;
        }
        iVar3 = *(int *)(lVar1 + 0x10 + (longlong)iVar3 * 0x18);
      } while (iVar3 != -1);
    }
  }
  *(undefined8 *)this_00 = 0;
  local_res8 = (UDS_DataSetBase *)0x0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this_00,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>)this_00;
}

// GetDataSetContainer @ 14ba4a450

TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> __cdecl
UDS_DataSetContainer::GetDataSetContainer(ulong64 param_1)

{
  UDS_DataManager *this;
  longlong in_RDX;
  undefined8 local_res10 [3];
  
  if (in_RDX == 1) {
    `UDS_DataSetContainer::GetDataSetContainer'::__l5::<lambda_1>::operator()(local_res10);
  }
  else {
    this = UDS_DataManager::GetInst();
    if (this != (UDS_DataManager *)0x0) {
      UDS_DataManager::GetDataSetContainer(this,param_1);
      return (TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
    }
  }
  *(undefined8 *)param_1 = 0;
  local_res10[0] = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_res10);
  return (TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetEntityID @ 14ba4a9a0

ulong64 __thiscall UDS_DataSetContainer::GetEntityID(UDS_DataSetContainer *this)

{
  return this->EntityID;
}

// GetEntityTableID @ 14ba4aa50

int __thiscall UDS_DataSetContainer::GetEntityTableID(UDS_DataSetContainer *this)

{
  return this->EntityTableID;
}

// GetEntityType @ 14ba4ab00

EDS_EntityType __thiscall UDS_DataSetContainer::GetEntityType(UDS_DataSetContainer *this)

{
  return this->EntityType;
}

// GetIsDirty @ 14ba4c5d0

bool __thiscall UDS_DataSetContainer::GetIsDirty(UDS_DataSetContainer *this)

{
  return this->bIsDirty;
}

// Init @ 14ba533e0

bool __thiscall
UDS_DataSetContainer::Init
          (UDS_DataSetContainer *this,ulong64 param_1,EDS_EntityType param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  
  this->EntityID = param_1;
  this->EntityType = param_2;
  this->EntityTableID = param_3;
  for (lVar3 = 0x3f; 0x37UL >> lVar3 == 0; lVar3 = lVar3 + -1) {
  }
  iVar5 = 1 << ((byte)lVar3 & 0x1f);
  iVar2 = *(int *)&(this->DataSetMap).field_0x48;
  if ((iVar2 < iVar5) || (iVar5 < iVar2)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
    TSet<TTuple<enum_EDS_DataType,TObjectPtr<UDS_DataSetBase>_>,TDefaultMapHashableKeyFuncs<enum_EDS_DataType,TObjectPtr<UDS_DataSetBase>,0>,FDefaultSetAllocator>
    ::UnhashElements(&this->DataSetMap);
  }
  puVar1 = &(this->DataSetMap).field_0xc;
  *(undefined4 *)&(this->DataSetMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0x29) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0x29,(ForAnyElementType *)&this->DataSetMap,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->DataSetMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DataSetMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->DataSetMap).field_0x2c;
  *(undefined4 *)&(this->DataSetMap).field_0x28 = 0;
  if ((iVar2 < 0x40) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->DataSetMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->DataSetMap).field_0x10,0);
  }
  if (bVar4) {
    *(int *)&(this->DataSetMap).field_0x48 = iVar5;
    TSet<TTuple<enum_EDS_DataType,TObjectPtr<UDS_DataSetBase>_>,TDefaultMapHashableKeyFuncs<enum_EDS_DataType,TObjectPtr<UDS_DataSetBase>,0>,FDefaultSetAllocator>
    ::Rehash(&this->DataSetMap);
  }
  (this->DataSetList).ArrayNum = 0;
  if ((this->DataSetList).ArrayMax != 0x29) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0x29,&(this->DataSetList).AllocatorInstance,0,&(this->DataSetList).ArrayMax);
  }
  return true;
}

// SetEntityID @ 14ba70f20

void __thiscall UDS_DataSetContainer::SetEntityID(UDS_DataSetContainer *this,ulong64 param_1)

{
  this->EntityID = param_1;
  return;
}

// SetEntityTableID @ 14ba70f30

void __thiscall UDS_DataSetContainer::SetEntityTableID(UDS_DataSetContainer *this,int param_1)

{
  this->EntityTableID = param_1;
  return;
}

// SetEntityType @ 14ba70f40

void __thiscall
UDS_DataSetContainer::SetEntityType(UDS_DataSetContainer *this,EDS_EntityType param_1)

{
  this->EntityType = param_1;
  return;
}

// SetIsDirty @ 14ba71940

void __thiscall UDS_DataSetContainer::SetIsDirty(UDS_DataSetContainer *this,bool param_1)

{
  this->bIsDirty = param_1;
  return;
}

// Update @ 14ba7aec0

void __thiscall UDS_DataSetContainer::Update(UDS_DataSetContainer *this,float *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UObject *pUVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->DataSetList).AllocatorInstance.Data;
  iVar2 = (this->DataSetList).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  do {
    if ((this->DataSetList).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDS_DataSetBase>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar1) {
      return;
    }
    pUVar3 = *(UObject **)pFVar4;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar3 != (UObject *)0x0) goto LAB_14ba7af27;
    }
    else if (pUVar3 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar3);
LAB_14ba7af27:
      (**(code **)(*(longlong *)pUVar3 + 0x2b0))(pUVar3,param_1);
    }
    pFVar4 = pFVar4 + 8;
  } while( true );
}

// operator() @ 150569c00

bool __thiscall
`UDS_DataSetContainer::GetDataSetContainer'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6535399976225210338>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6535399976225210338>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

