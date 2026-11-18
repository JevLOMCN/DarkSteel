// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 16

// StaticClass @ 14798d000

UClass * __cdecl UCompositeCurveTable::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCompositeCurveTable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CompositeCurveTable",
               &Z_Registration_Info_UClass_UCompositeCurveTable.InnerSingleton,
               StaticRegisterNativesUCompositeCurveTable,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCompositeCurveTable>,
               InternalVTableHelperCtorCaller<UCompositeCurveTable>,local_res8,
               UCurveTable::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCompositeCurveTable.InnerSingleton;
}

// UCompositeCurveTable @ 1479a64d0

UCompositeCurveTable * __thiscall
UCompositeCurveTable::UCompositeCurveTable(UCompositeCurveTable *this,FVTableHelper *param_1)

{
  UCurveTable::UCurveTable((UCurveTable *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FCurveOwnerInterface__;
  (this->ParentTables).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParentTables).ArrayNum = 0;
  (this->ParentTables).ArrayMax = 0;
  (this->OldParentTables).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OldParentTables).ArrayNum = 0;
  (this->OldParentTables).ArrayMax = 0;
  return this;
}

// UCompositeCurveTable @ 1479a6520

UCompositeCurveTable * __thiscall
UCompositeCurveTable::UCompositeCurveTable(UCompositeCurveTable *this,FObjectInitializer *param_1)

{
  UCurveTable::UCurveTable((UCurveTable *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FCurveOwnerInterface__;
  this->bIsLoading = '\0';
  (this->ParentTables).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParentTables).ArrayNum = 0;
  (this->ParentTables).ArrayMax = 0;
  (this->OldParentTables).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OldParentTables).ArrayNum = 0;
  (this->OldParentTables).ArrayMax = 0;
  return this;
}

// ~UCompositeCurveTable @ 1479a95e0

void __thiscall UCompositeCurveTable::~UCompositeCurveTable(UCompositeCurveTable *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FCurveOwnerInterface__;
  pFVar1 = (this->OldParentTables).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ParentTables).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UCurveTable::~UCurveTable((UCurveTable *)this);
  return;
}

// operator() @ 1479ac100

void __thiscall
`UCompositeCurveTable::UpdateCachedRowMap'::__l44::<lambda_1>::operator()
          (void *this,FName param_1,FRealCurve *param_2)

{
  FRealCurve *pFVar1;
  FRealCurve **ppFVar2;
  TPairInitializer<FName_const_&,FRealCurve_*_const_&> local_res8;
  FRealCurve *local_res18;
  FRealCurve ***local_18;
  FRealCurve **local_10;
  
  local_res8.Value = (FRealCurve **)param_1;
  local_res18 = param_2;
  ppFVar2 = TMapBase<FName,FRealCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>_>
            ::Find(*(TMapBase<FName,FRealCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>_>
                     **)this,param_1);
  if (ppFVar2 != (FRealCurve **)0x0) {
    pFVar1 = *ppFVar2;
    if (pFVar1 != (FRealCurve *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    *ppFVar2 = local_res18;
    return;
  }
  local_18 = &local_res8.Value;
  local_10 = &local_res18;
  TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FRealCurve_*_const_&>_>
            (*(TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
               **)this,&local_res8,(bool *)&local_18);
  return;
}

// AppendParentTables @ 1479b1be0

void __thiscall
UCompositeCurveTable::AppendParentTables
          (UCompositeCurveTable *this,TArray<UCurveTable_*,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<TObjectPtr<UCurveTable>,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  pTVar1 = &this->ParentTables;
  if (pTVar1 == (TArray<TObjectPtr<UCurveTable>,TSizedDefaultAllocator<32>_> *)param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar2 = param_1->ArrayNum;
  if (iVar2 != 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar2,&pTVar1->AllocatorInstance,&(this->ParentTables).ArrayNum,
                       &(this->ParentTables).ArrayMax);
    ConstructItems<TObjectPtr<UCurveTable>,UCurveTable_*,int>
              ((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 8,
               (UCurveTable **)(param_1->AllocatorInstance).Data,iVar2);
  }
  OnParentTablesUpdated(this,1);
  return;
}

// EmptyTable @ 1479bfde0

void __thiscall UCompositeCurveTable::EmptyTable(UCompositeCurveTable *this)

{
  int *piVar1;
  
  piVar1 = &(this->ParentTables).ArrayMax;
  (this->ParentTables).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ParentTables).AllocatorInstance,0,piVar1);
  }
  UCurveTable::EmptyTable((UCurveTable *)this);
  return;
}

// FindLoops @ 1479c1940

UCompositeCurveTable * __thiscall
UCompositeCurveTable::FindLoops
          (UCompositeCurveTable *this,
          TArray<UCompositeCurveTable_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UCompositeCurveTable *pUVar5;
  UClass *pUVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *this_00;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FScriptContainerElement *local_res18;
  UCompositeCurveTable *local_58;
  TArray<UCompositeCurveTable_const_*,TSizedDefaultAllocator<32>_> local_50;
  
  pFVar9 = (param_1->AllocatorInstance).Data;
  local_58 = this;
  if (((pFVar9 <= (FScriptContainerElement *)&local_58) &&
      ((FScriptContainerElement *)&local_58 < pFVar9 + (longlong)param_1->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar5 = (UCompositeCurveTable *)(*pcVar2)();
    return pUVar5;
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(UCompositeCurveTable **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_58;
  this_00 = (this->ParentTables).AllocatorInstance.Data;
  iVar4 = (this->ParentTables).ArrayNum;
  pFVar9 = this_00 + (longlong)iVar4 * 8;
  local_res18 = pFVar9;
  do {
    if ((this->ParentTables).ArrayNum != iVar4) {
      `TCheckedPointerIterator<TObjectPtr<UCurveTable>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (this_00 == pFVar9) {
      pFVar9 = (param_1->AllocatorInstance).Data;
      if (pFVar9 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar9);
      }
      return (UCompositeCurveTable *)0x0;
    }
    if (*(longlong *)this_00 != 0) {
      pUVar6 = StaticClass();
      bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar6);
      if ((bVar3) &&
         (pUVar5 = *(UCompositeCurveTable **)this_00, pUVar5 != (UCompositeCurveTable *)0x0)) {
        pFVar7 = (param_1->AllocatorInstance).Data;
        iVar1 = param_1->ArrayNum;
        pFVar9 = pFVar7 + (longlong)iVar1 * 8;
        while( true ) {
          if (param_1->ArrayNum != iVar1) {
            `TCheckedPointerIterator<UCompositeCurveTable_const_*,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res10);
          }
          if (pFVar7 == pFVar9) break;
          if (*(UCompositeCurveTable **)pFVar7 == pUVar5) {
            pFVar9 = (param_1->AllocatorInstance).Data;
            if (pFVar9 == (FScriptContainerElement *)0x0) {
              return pUVar5;
            }
            FMemory::Free(pFVar9);
            return pUVar5;
          }
          pFVar7 = pFVar7 + 8;
        }
        local_50.ArrayNum = param_1->ArrayNum;
        lVar8 = (longlong)local_50.ArrayNum;
        pFVar9 = (param_1->AllocatorInstance).Data;
        local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_50.ArrayNum == 0) {
          local_50.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,local_50.ArrayNum,0,&local_50.AllocatorInstance,local_50.ArrayNum,
                     &local_50.ArrayMax);
          memcpy(local_50.AllocatorInstance.Data,pFVar9,lVar8 << 3);
        }
        pUVar5 = FindLoops(pUVar5,&local_50);
        pFVar9 = local_res18;
        if (pUVar5 != (UCompositeCurveTable *)0x0) {
          pFVar9 = (param_1->AllocatorInstance).Data;
          if (pFVar9 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar9);
          }
          return pUVar5;
        }
      }
    }
    this_00 = this_00 + 8;
  } while( true );
}

// GetPreloadDependencies @ 1479cd1f0

void __thiscall
UCompositeCurveTable::GetPreloadDependencies
          (UCompositeCurveTable *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  longlong local_28 [2];
  
  UObject::GetPreloadDependencies((UObject *)this,param_1);
  pFVar8 = (this->ParentTables).AllocatorInstance.Data;
  iVar2 = (this->ParentTables).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ParentTables).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UCurveTable>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    lVar3 = *(longlong *)pFVar8;
    if (lVar3 != 0) {
      pFVar4 = (param_1->AllocatorInstance).Data;
      local_28[0] = lVar3;
      if ((pFVar4 <= (FScriptContainerElement *)local_28) &&
         ((FScriptContainerElement *)local_28 < pFVar4 + (longlong)param_1->ArrayMax * 8)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar7 = param_1->ArrayNum;
      if (iVar7 == param_1->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar7 + 1;
      *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_28[0];
    }
    pFVar8 = pFVar8 + 8;
  }
  return;
}

// GetPrivateStaticClass @ 1479cda50

UClass * __cdecl UCompositeCurveTable::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCompositeCurveTable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CompositeCurveTable",
               &Z_Registration_Info_UClass_UCompositeCurveTable.InnerSingleton,
               StaticRegisterNativesUCompositeCurveTable,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCompositeCurveTable>,
               InternalVTableHelperCtorCaller<UCompositeCurveTable>,local_res8,
               UCurveTable::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCompositeCurveTable.InnerSingleton;
}

// OnParentTablesUpdated @ 1479dbab0

void __thiscall UCompositeCurveTable::OnParentTablesUpdated(UCompositeCurveTable *this,uint param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UCurveTable>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  UObject *pUVar4;
  FScriptContainerElement *pFVar5;
  UCompositeCurveTable *pUVar6;
  FScriptContainerElement *pFVar7;
  char cVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  FScriptContainerElement *pFVar13;
  ForElementType<TAlignedBytes<16,16>_> *pFVar14;
  UCompositeCurveTable *local_res8;
  undefined1 local_res20 [8];
  uint uStack_8c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_88;
  FDelegateAllocation local_80;
  FDestructionSentinel local_70;
  FDestructionSentinel local_58;
  FDelegateAllocation *local_40;
  
  if (this->bUpdatingParentTables == '\0') {
    this->field_0xc8 = this->field_0xc8 | 2;
    iVar3 = (this->OldParentTables).ArrayNum;
    pFVar13 = (this->OldParentTables).AllocatorInstance.Data;
    pFVar7 = pFVar13 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this->OldParentTables).ArrayNum != iVar3) {
        `TCheckedPointerIterator<TObjectPtr<UCurveTable>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (pFVar13 == pFVar7) break;
      pUVar4 = *(UObject **)pFVar13;
      if (pUVar4 != (UObject *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar4);
        }
        pFVar5 = (this->ParentTables).AllocatorInstance.Data;
        for (pFVar10 = pFVar5; pFVar10 != pFVar5 + (longlong)(this->ParentTables).ArrayNum * 8;
            pFVar10 = pFVar10 + 8) {
          if (*(UObject **)pFVar10 == pUVar4) {
            if ((int)((longlong)pFVar10 - (longlong)pFVar5 >> 3) != -1) goto LAB_1479dbb7b;
            break;
          }
        }
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4[3].field_0x8,this);
      }
LAB_1479dbb7b:
      pFVar13 = pFVar13 + 8;
    }
    UpdateCachedRowMap(this,(param_1 - 0x10 & 0xffffffef) == 0);
    pFVar13 = (this->ParentTables).AllocatorInstance.Data;
    iVar3 = (this->ParentTables).ArrayNum;
    pFVar7 = pFVar13 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this->ParentTables).ArrayNum != iVar3) {
        `TCheckedPointerIterator<TObjectPtr<UCurveTable>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (pFVar13 == pFVar7) break;
      pUVar6 = *(UCompositeCurveTable **)pFVar13;
      if ((pUVar6 != (UCompositeCurveTable *)0x0) && (pUVar6 != this)) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar6);
        }
        pFVar5 = (this->OldParentTables).AllocatorInstance.Data;
        for (pFVar10 = pFVar5; pFVar10 != pFVar5 + (longlong)(this->OldParentTables).ArrayNum * 8;
            pFVar10 = pFVar10 + 8) {
          if (*(UCompositeCurveTable **)pFVar10 == pUVar6) {
            if ((int)((longlong)pFVar10 - (longlong)pFVar5 >> 3) != -1) goto LAB_1479dbe80;
            break;
          }
        }
        local_88.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
        local_80.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_80.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_88,(FWriteAccessScope *)&local_58);
        local_40 = &local_80;
        puVar11 = UE::Core::Private::DelegateAllocate(0x30,&local_80);
        if (puVar11 != (undefined8 *)0x0) {
          *puVar11 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__I__6B_
          ;
          *(undefined4 *)(puVar11 + 1) = 1;
          uVar12 = FDelegateHandle::GenerateNewID();
          puVar11[2] = uVar12;
          *puVar11 = &
                     ___7__TBaseUObjectMethodDelegateInstance__0A_VUCompositeCurveTable____A6AXXZUFDefaultDelegateUserPolicy__I__6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar11[3] = 0;
          local_res8 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_res8);
          puVar11[4] = OnParentTablesUpdated;
          puVar11[5] = (ulonglong)uStack_8c << 0x20;
        }
        if (local_58.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar6->_padding_,
                   (FWriteAccessScope *)&local_58);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  (&local_88,(FReadAccessScope *)&local_70);
        if (((local_80.DelegateSize == 0) ||
            (local_80.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
           (cVar8 = (**(code **)(*(longlong *)local_80.DelegateAllocator + 0x38))(), cVar8 == '\0'))
        {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope((FReadAccessScope *)&local_70);
        }
        else {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope((FReadAccessScope *)&local_70);
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar6->_padding_,true);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    (&local_88,(FReadAccessScope *)&local_70);
          if ((local_80.DelegateSize != 0) &&
             (local_80.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (**(code **)(*(longlong *)local_80.DelegateAllocator + 0x40))
                      (local_80.DelegateAllocator,local_res20);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope((FReadAccessScope *)&local_70);
          iVar9 = (int)pUVar6->_padding_;
          piVar1 = (int *)((longlong)&pUVar6->_padding_ + 4);
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,(ForAnyElementType *)&pUVar6->_padding_,piVar1);
            *(int *)&pUVar6->_padding_ = iVar9;
          }
          *(int *)&pUVar6->_padding_ = iVar9 + 1;
          pFVar14 = (ForElementType<TAlignedBytes<16,16>_> *)
                    ((longlong)iVar9 * 0x10 + pUVar6->_padding_);
          *pFVar14 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          *(undefined4 *)(pFVar14 + 1) = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_88,(FWriteAccessScope *)&local_70);
          if (*pFVar14 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free((void *)*pFVar14);
          }
          *pFVar14 = local_80.DelegateAllocator;
          local_80.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          *(int *)(pFVar14 + 1) = local_80.DelegateSize;
          local_80.DelegateSize = 0;
          if (local_70.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
          }
        }
        if (local_58.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_88,(FWriteAccessScope *)&local_58);
        if ((local_80.DelegateSize != 0) &&
           (local_80.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_80.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_80,0,0,0x10);
          local_80.DelegateSize = 0;
        }
        if (local_58.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
        }
        if (local_80.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_80.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_88.AccessDetector);
      }
LAB_1479dbe80:
      pFVar13 = pFVar13 + 8;
    }
    pTVar2 = &this->OldParentTables;
    if (pTVar2 != &this->ParentTables) {
      iVar3 = (this->ParentTables).ArrayNum;
      piVar1 = &(this->OldParentTables).ArrayMax;
      pFVar7 = (this->ParentTables).AllocatorInstance.Data;
      (this->OldParentTables).ArrayNum = iVar3;
      if ((iVar3 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
        ConstructItems<TObjectPtr<UCurveTable>,TObjectPtr<UCurveTable>,int>
                  ((pTVar2->AllocatorInstance).Data,(TObjectPtr<UCurveTable> *)pFVar7,iVar3);
      }
    }
    this->bUpdatingParentTables = '\0';
  }
  return;
}

// PostLoad @ 1479ddf60

void __thiscall UCompositeCurveTable::PostLoad(UCompositeCurveTable *this)

{
  UObject::PostLoad((UObject *)this);
  this->bIsLoading = '\0';
  return;
}

// Serialize @ 1479e5720

void __thiscall UCompositeCurveTable::Serialize(UCompositeCurveTable *this,FArchive *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  if ((param_1->field_0x28 & 1) != 0) {
    this->bIsLoading = '\x01';
  }
  UCurveTable::Serialize((UCurveTable *)this,param_1);
  if (this->bIsLoading != 0) {
    pFVar3 = (this->ParentTables).AllocatorInstance.Data;
    iVar2 = (this->ParentTables).ArrayNum;
    pFVar1 = pFVar3 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->ParentTables).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UCurveTable>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar3 == pFVar1) break;
      if (*(UObject **)pFVar3 != (UObject *)0x0) {
        UObject::ConditionalPreload(*(UObject **)pFVar3);
      }
      pFVar3 = pFVar3 + 8;
    }
    OnParentTablesUpdated(this,1);
  }
  return;
}

// Serialize @ 1479e57c0

void __thiscall
UCompositeCurveTable::Serialize(UCompositeCurveTable *this,FStructuredArchiveRecord param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FArchive *pFVar3;
  FScriptContainerElement *pFVar4;
  FSlotBase local_res8;
  
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar3 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  if ((pFVar3->field_0x28 & 1) != 0) {
    this->bIsLoading = '\x01';
  }
  UCurveTable::Serialize((UCurveTable *)this,pFVar3);
  if (this->bIsLoading != 0) {
    pFVar4 = (this->ParentTables).AllocatorInstance.Data;
    iVar2 = (this->ParentTables).ArrayNum;
    pFVar1 = pFVar4 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->ParentTables).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UCurveTable>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (pFVar4 == pFVar1) break;
      if (*(UObject **)pFVar4 != (UObject *)0x0) {
        UObject::ConditionalPreload(*(UObject **)pFVar4);
      }
      pFVar4 = pFVar4 + 8;
    }
    OnParentTablesUpdated(this,1);
  }
  return;
}

// StaticRegisterNativesUCompositeCurveTable @ 1479ede00

void __cdecl UCompositeCurveTable::StaticRegisterNativesUCompositeCurveTable(void)

{
  return;
}

// UpdateCachedRowMap @ 1479f0430

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCompositeCurveTable::UpdateCachedRowMap(UCompositeCurveTable *this,bool param_1)

{
  longlong *this_00;
  LPCRITICAL_SECTION p_Var1;
  ulonglong uVar2;
  uchar uVar3;
  PRTL_CRITICAL_SECTION_DEBUG p_Var4;
  FSimpleCurve *pFVar5;
  FName FVar6;
  FRealCurve *pFVar7;
  code *pcVar8;
  LPCRITICAL_SECTION p_Var9;
  bool bVar10;
  uint uVar11;
  UCompositeCurveTable *this_01;
  FString *pFVar12;
  FText *pFVar13;
  FText *pFVar14;
  FTextFormat *pFVar15;
  LPCRITICAL_SECTION lpCriticalSection;
  FSimpleCurve *pFVar16;
  TArray<FSimpleCurveKey,TSizedDefaultAllocator<32>_> *pTVar17;
  FRealCurve **ppFVar18;
  FRichCurve *this_02;
  TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *pTVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  FScriptContainerElement *pFVar23;
  FScriptContainerElement *pFVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  TBitArray<FDefaultBitArrayAllocator> *pTVar28;
  TBitArray<FDefaultBitArrayAllocator> *pTVar29;
  uint uVar30;
  float fVar31;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FKeyHandle in_stack_fffffffffffffd98;
  undefined1 local_258;
  undefined1 local_257;
  undefined1 local_256;
  undefined1 local_255;
  undefined1 local_254 [4];
  uint local_250;
  TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
  *local_248;
  LPCRITICAL_SECTION local_240;
  undefined8 uStack_238;
  TBitArray<FDefaultBitArrayAllocator> *local_230;
  uint uStack_228;
  uint uStack_224;
  int local_220;
  undefined4 uStack_21c;
  int iStack_218;
  undefined4 uStack_214;
  FSimpleCurve *local_210;
  LPCRITICAL_SECTION local_208;
  FKeyHandle local_200;
  uint local_1fc;
  FName local_1f8;
  FScriptContainerElement *local_1f0;
  FScriptContainerElement *local_1e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1e0;
  int local_1c0;
  int local_1bc;
  int local_1b8;
  int local_1b4;
  FKeyHandle local_1b0 [2];
  LPCRITICAL_SECTION local_1a8;
  int local_1a0;
  TBitArray<FDefaultBitArrayAllocator> *local_198;
  TArray<UCompositeCurveTable_const_*,TSizedDefaultAllocator<32>_> local_190;
  TPairInitializer<FName_const_&,FRealCurve_*_const_&> local_180;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_170;
  undefined8 uStack_150;
  LPCRITICAL_SECTION local_148;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined8 uStack_120;
  LPCRITICAL_SECTION local_118;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_110;
  undefined8 uStack_f0;
  FText local_e8;
  FName *local_d8;
  FSimpleCurve **local_d0;
  FText local_c8;
  FString local_b8;
  FText local_a8;
  FTextFormat local_98 [2];
  undefined4 local_6c;
  undefined4 local_4c;
  
  local_190.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_190.ArrayNum = 0;
  local_190.ArrayMax = 0;
  bVar10 = false;
  this_01 = FindLoops(this,&local_190);
  if (this_01 != (UCompositeCurveTable *)0x0) {
    if (param_1) {
      pFVar12 = UObjectBaseUtility::GetPathName
                          ((UObjectBaseUtility *)this_01,&local_b8,(UObject *)0x0);
      pFVar13 = FText::FromString(&local_a8,pFVar12);
      pFVar14 = FText::AsLocalizable_Advanced_LocText
                          (&local_c8,L"CompositeCurveTables",L"FoundLoopError",
                           L"Cyclic dependency found. Table {0} depends on itself. Please fix your data"
                          );
      pFVar15 = FTextFormat::FTextFormat(local_98,pFVar14,Default);
      FText::Format<FText>(&local_e8,pFVar15,pFVar13);
      if (local_c8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if (2 < (byte)LogCurveTable._0_1_) {
        FText::ToString(&local_e8);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCurveTable);
      }
      if (local_e8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
      }
    }
    bVar10 = true;
    if ((int)this->_padding_ == *(int *)((longlong)&this->_padding_ + 4)) {
      return;
    }
  }
  UCurveTable::EmptyTable((UCurveTable *)this);
  if (!bVar10) {
    *(undefined1 *)&this->_padding_ = 1;
    pFVar23 = (this->ParentTables).AllocatorInstance.Data;
    iVar27 = (this->ParentTables).ArrayNum;
    pFVar24 = pFVar23 + (longlong)iVar27 * 8;
    while( true ) {
      if ((this->ParentTables).ArrayNum != iVar27) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UCurveTable>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar23 == pFVar24) goto LAB_1479f05f6;
      if ((*(longlong *)pFVar23 != 0) && (*(char *)(*(longlong *)pFVar23 + 0xa0) == '\x02')) break;
      pFVar23 = pFVar23 + 8;
    }
    *(undefined1 *)&this->_padding_ = 2;
LAB_1479f05f6:
    local_1fc = (this->ParentTables).ArrayNum;
    uVar20 = (ulonglong)(int)local_1fc;
    pFVar23 = (this->ParentTables).AllocatorInstance.Data;
    pFVar24 = pFVar23 + uVar20 * 8;
    local_1e8 = pFVar24;
    while( true ) {
      local_1f0 = pFVar23;
      if ((this->ParentTables).ArrayNum != (int)uVar20) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UCurveTable>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (pFVar23 == pFVar24) break;
      lVar22 = *(longlong *)pFVar23;
      if (lVar22 != 0) {
        this_00 = &this->_padding_;
        local_248 = (TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
                     *)this_00;
        lpCriticalSection = (LPCRITICAL_SECTION)UCurveTable::GetCurveTableChangeCriticalSection();
        local_208 = lpCriticalSection;
        if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Mutex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                              ,0x1b,L"");
          if (bVar10) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        EnterCriticalSection(lpCriticalSection);
        if ((char)this->_padding_ == '\x01') {
          if (*(char *)(lVar22 + 0xa0) == '\x02') {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("CurveTableMode != ECurveTableMode::RichCurves",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\CurveTable.h"
                                ,0x36,L"");
            if (bVar10) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          iVar27 = *(int *)(lVar22 + 0x58);
          local_230 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar22 + 0x40);
          iVar26 = 0;
          local_240 = (LPCRITICAL_SECTION)(lVar22 + 0x30);
          local_220 = 0;
          uVar11 = 1;
          uStack_224 = 0;
          if (iVar27 != 0) {
            pTVar28 = local_230;
            if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar22 + 0x50) !=
                (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              pTVar28 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar22 + 0x50);
            }
            uVar25 = *(uint *)(pTVar28->AllocatorInstance).InlineData;
            while (uVar25 == 0) {
              lVar21 = (longlong)iVar26;
              local_220 = local_220 + 0x20;
              iVar26 = iVar26 + 1;
              uStack_224 = iVar27;
              if ((int)(iVar27 + -1 + (iVar27 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar26)
              goto LAB_1479f075f;
              uVar25 = *(uint *)((pTVar28->AllocatorInstance).InlineData + lVar21 * 4 + 4);
            }
            uVar11 = -uVar25 & uVar25;
            uVar20 = (ulonglong)uVar11 * 2 + 1;
            lVar21 = 0x3f;
            if (uVar20 != 0) {
              for (; uVar20 >> lVar21 == 0; lVar21 = lVar21 + -1) {
              }
            }
            local_1c0 = (int)lVar21;
            uStack_224 = local_220 + -1 + local_1c0;
            if (iVar27 < (int)uStack_224) {
              uStack_224 = iVar27;
            }
          }
LAB_1479f075f:
          iStack_218 = *(int *)(lVar22 + 0x38) - *(int *)(lVar22 + 100);
          uVar25 = *(uint *)(lVar22 + 0x58);
          uStack_238 = CONCAT44(uVar11,iVar26);
          uVar11 = uVar25 & 0xffffffe0;
          uStack_228 = 0xffffffff;
          uStack_21c = local_6c;
          TStack_170._padding_ = uStack_238;
          iVar26 = (int)uVar25 >> 5;
          uStack_150 = CONCAT44(uStack_214,iStack_218);
          TStack_170.UnvisitedBitMask = 0xffffffff;
          TStack_170.CurrentBitIndex = uStack_224;
          TStack_170.BaseBitIndex = local_220;
          TStack_170._28_4_ = local_6c;
          local_208 = local_240;
          local_180.Value = (FRealCurve **)local_240;
          TStack_170.Array = local_230;
          if (((int)uVar25 < 0) || (iVar27 < (int)uVar25)) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L"");
            if (bVar10) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          uVar30 = *(uint *)(lVar22 + 0x58);
          if (uVar25 != uVar30) {
            pTVar28 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar22 + 0x40);
            if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar22 + 0x50) !=
                (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              pTVar28 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar22 + 0x50);
            }
            uVar25 = -1 << ((byte)uVar25 & 0x1f) &
                     *(uint *)((pTVar28->AllocatorInstance).InlineData + (longlong)iVar26 * 4);
            while (uVar25 == 0) {
              lVar21 = (longlong)iVar26;
              uVar11 = uVar11 + 0x20;
              iVar26 = iVar26 + 1;
              uVar25 = uVar30;
              if ((int)((uVar30 - 1) + ((int)(uVar30 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar26)
              goto LAB_1479f0880;
              uVar25 = *(uint *)((pTVar28->AllocatorInstance).InlineData + lVar21 * 4 + 4);
            }
            uVar20 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
            lVar21 = 0x3f;
            if (uVar20 != 0) {
              for (; uVar20 >> lVar21 == 0; lVar21 = lVar21 + -1) {
              }
            }
            local_1bc = (int)lVar21;
            uVar25 = (uVar11 - 1) + local_1bc;
            if ((int)uVar30 < (int)uVar25) {
              uVar25 = uVar30;
            }
          }
LAB_1479f0880:
          do {
            ppFVar18 = local_180.Value;
            if (*(LONG *)((longlong)local_180.Value + 8) -
                ((LPCRITICAL_SECTION)((longlong)local_180.Value + 0x28))->RecursionCount !=
                (int)uStack_150) {
              local_258 = 0;
              `TSparseArray<TSparseSetElement<TTuple<FName,FSimpleCurve_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_258);
            }
            lVar21 = (longlong)TStack_170.CurrentBitIndex;
            if (((TStack_170.CurrentBitIndex == uVar25) &&
                (TStack_170.Array == (TBitArray<FDefaultBitArrayAllocator> *)(lVar22 + 0x40))) &&
               ((LPCRITICAL_SECTION)ppFVar18 == local_208)) goto LAB_1479f0f65;
            p_Var4 = *(PRTL_CRITICAL_SECTION_DEBUG *)ppFVar18;
            pFVar16 = ::operator_new(0x88);
            if (pFVar16 == (FSimpleCurve *)0x0) {
              pFVar16 = (FSimpleCurve *)0x0;
            }
            else {
              pFVar16->_padding_ = 0;
              pFVar16->_padding_ = 0;
              pFVar16->_padding_ = 0;
              *(undefined4 *)&pFVar16->_padding_ = 0;
              *(undefined4 *)((longlong)&pFVar16->_padding_ + 4) = 0x80;
              *(undefined4 *)&pFVar16->_padding_ = 0xffffffff;
              *(undefined4 *)((longlong)&pFVar16->_padding_ + 4) = 0;
              pFVar16->_padding_ = 0;
              *(undefined4 *)&pFVar16->_padding_ = 0;
              pFVar16->_padding_ = 0;
              pFVar16->_padding_ = 0;
              *(undefined4 *)&pFVar16->_padding_ = 0x7f7fffff;
              *(undefined2 *)((longlong)&pFVar16->_padding_ + 4) = 0x404;
              pFVar16->_padding_ = (longlong)&___7FSimpleCurve__6B_;
              (pFVar16->InterpMode).Value = '\0';
              (pFVar16->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              (pFVar16->Keys).ArrayNum = 0;
              (pFVar16->Keys).ArrayMax = 0;
            }
            pFVar5 = (FSimpleCurve *)(&p_Var4->CriticalSection)[lVar21 * 3];
            pTVar17 = FSimpleCurve::GetConstRefOfKeys(pFVar5);
            FSimpleCurve::SetKeys(pFVar16,pTVar17);
            uVar3 = (pFVar5->InterpMode).Value;
            if (uVar3 == '\x02') {
              local_257 = 0;
              bVar10 = `FSimpleCurve::SetKeyInterpMode'::__l3::<lambda_1>::operator()(&local_257);
              if (bVar10) goto LAB_1479f095e;
            }
            else {
LAB_1479f095e:
              (pFVar16->InterpMode).Value = uVar3;
            }
            `UCompositeCurveTable::UpdateCachedRowMap'::__l44::<lambda_1>::operator()
                      (&local_248,*(FName *)(&p_Var4->Type + lVar21 * 0xc),(FRealCurve *)pFVar16);
            TStack_170.UnvisitedBitMask = TStack_170.UnvisitedBitMask & ~TStack_170._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_170);
          } while( true );
        }
        p_Var1 = (LPCRITICAL_SECTION)(lVar22 + 0x30);
        pTVar28 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar22 + 0x40);
        local_1a8 = p_Var1;
        if (*(char *)(lVar22 + 0xa0) == '\x01') {
          uVar11 = *(uint *)(lVar22 + 0x58);
          iVar27 = 0;
          local_220 = 0;
          uVar25 = 1;
          TStack_140.CurrentBitIndex = 0;
          if (uVar11 != 0) {
            pTVar29 = pTVar28;
            if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar22 + 0x50) !=
                (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              pTVar29 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar22 + 0x50);
            }
            uVar30 = *(uint *)(pTVar29->AllocatorInstance).InlineData;
            while (uVar30 == 0) {
              lVar21 = (longlong)iVar27;
              local_220 = local_220 + 0x20;
              iVar27 = iVar27 + 1;
              TStack_140.CurrentBitIndex = uVar11;
              if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar27)
              goto LAB_1479f0a1f;
              uVar30 = *(uint *)((pTVar29->AllocatorInstance).InlineData + lVar21 * 4 + 4);
            }
            uVar25 = -uVar30 & uVar30;
            uVar20 = (ulonglong)uVar25 * 2 + 1;
            lVar21 = 0x3f;
            if (uVar20 != 0) {
              for (; uVar20 >> lVar21 == 0; lVar21 = lVar21 + -1) {
              }
            }
            local_1b8 = (int)lVar21;
            TStack_140.CurrentBitIndex = local_220 + -1 + local_1b8;
            if ((int)uVar11 < TStack_140.CurrentBitIndex) {
              TStack_140.CurrentBitIndex = uVar11;
            }
          }
LAB_1479f0a1f:
          iStack_218 = *(int *)(lVar22 + 0x38) - *(int *)(lVar22 + 100);
          uVar30 = *(uint *)(lVar22 + 0x58);
          pTVar29 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar22 + 0x40);
          uStack_238 = CONCAT44(uVar25,iVar27);
          uStack_224 = TStack_140.CurrentBitIndex;
          uStack_228 = 0xffffffff;
          local_230._0_4_ = SUB84(pTVar28,0);
          uStack_21c = local_4c;
          uVar25 = uVar30 & 0xffffffe0;
          TStack_140._padding_ = uStack_238;
          iVar27 = (int)uVar30 >> 5;
          uStack_120 = CONCAT44(uStack_214,iStack_218);
          TStack_140.BaseBitIndex = local_220;
          TStack_140._28_4_ = local_4c;
          TStack_140.UnvisitedBitMask = 0xffffffff;
          fVar31 = local_230._0_4_;
          local_250 = uVar30;
          local_198 = pTVar29;
          local_148 = p_Var1;
          TStack_140.Array = pTVar28;
          if (((int)uVar30 < 0) || (local_240 = p_Var1, (int)uVar11 < (int)uVar30)) {
            local_240 = p_Var1;
            local_230 = pTVar28;
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L"");
            pTVar28 = local_230;
            if (bVar10) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          local_230 = pTVar28;
          uVar11 = *(uint *)(lVar22 + 0x58);
          uVar20 = (ulonglong)uVar11;
          if (uVar30 != uVar11) {
            pTVar28 = pTVar29;
            if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar22 + 0x50) !=
                (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              pTVar28 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar22 + 0x50);
            }
            uVar30 = -1 << ((byte)uVar30 & 0x1f) &
                     *(uint *)((pTVar28->AllocatorInstance).InlineData + (longlong)iVar27 * 4);
            while (uVar30 == 0) {
              lVar22 = (longlong)iVar27;
              uVar25 = uVar25 + 0x20;
              iVar27 = iVar27 + 1;
              uVar30 = uVar11;
              local_250 = uVar11;
              if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar27)
              goto LAB_1479f0b60;
              uVar30 = *(uint *)((pTVar28->AllocatorInstance).InlineData + lVar22 * 4 + 4);
            }
            uVar2 = (ulonglong)(-uVar30 & uVar30) * 2 + 1;
            lVar22 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar22 == 0; lVar22 = lVar22 + -1) {
              }
            }
            local_1b4 = (int)lVar22;
            uVar30 = local_1b4 + -1 + uVar25;
            local_250 = uVar30;
            if ((int)uVar11 < (int)uVar30) {
              uVar30 = uVar11;
              local_250 = uVar11;
            }
          }
LAB_1479f0b60:
          while( true ) {
            p_Var1 = local_148;
            if (local_148->LockCount - local_148[1].RecursionCount != (int)uStack_120) {
              local_256 = 0;
              `TSparseArray<TSparseSetElement<TTuple<FName,FSimpleCurve_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_256);
            }
            lVar22 = (longlong)TStack_140.CurrentBitIndex;
            if (((TStack_140.CurrentBitIndex == uVar30) && (TStack_140.Array == pTVar29)) &&
               (p_Var1 == local_1a8)) break;
            FVar6 = (FName)p_Var1->DebugInfo;
            local_248 = (TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
                         *)(lVar22 * 3);
            local_1f8 = FVar6;
            pFVar16 = ::operator_new(0x80);
            if (pFVar16 == (FSimpleCurve *)0x0) {
              pFVar16 = (FSimpleCurve *)0x0;
            }
            else {
              pFVar16->_padding_ = 0;
              pFVar16->_padding_ = 0;
              pFVar16->_padding_ = 0;
              pFVar16->_padding_ = 0;
              *(undefined4 *)((longlong)&pFVar16->_padding_ + 4) = 0x404;
              pFVar16->_padding_ = 0;
              pFVar16->_padding_ = 0;
              pFVar16->_padding_ = 0;
              *(undefined4 *)&pFVar16->_padding_ = 0;
              *(undefined4 *)((longlong)&pFVar16->_padding_ + 4) = 0x80;
              *(undefined4 *)&pFVar16->_padding_ = 0xffffffff;
              *(undefined4 *)((longlong)&pFVar16->_padding_ + 4) = 0;
              pFVar16->_padding_ = 0;
              pFVar16->_padding_ = 0;
              pFVar16->_padding_ = 0;
              *(undefined4 *)&pFVar16->_padding_ = 0x7f7fffff;
              pFVar16->_padding_ = (longlong)&___7FRichCurve__6B_;
              (((TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> *)&pFVar16->InterpMode)->
              AllocatorInstance).Data = (FScriptContainerElement *)0x0;
              (pFVar16->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            }
            local_210 = (FSimpleCurve *)
                        ((_RTL_CRITICAL_SECTION **)((longlong)FVar6 + 8))[lVar22 * 3];
            pTVar17 = FSimpleCurve::GetConstRefOfKeys(local_210);
            pFVar5 = local_210;
            pFVar23 = (pTVar17->AllocatorInstance).Data;
            iVar27 = pTVar17->ArrayNum;
            pFVar24 = pFVar23 + (longlong)iVar27 * 8;
            while( true ) {
              if (pTVar17->ArrayNum != iVar27) {
                local_255 = 0;
                `TCheckedPointerIterator<FSimpleCurveKey_const_,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_255);
              }
              if (pFVar23 == pFVar24) break;
              FKeyHandle::FKeyHandle(local_1b0);
              in_stack_fffffffffffffd98.Index = in_stack_fffffffffffffd98.Index & 0xffffff00;
              FRichCurve::AddKey((FRichCurve *)pFVar16,fVar31,*(float *)pFVar23,SUB81(uVar20,0),
                                 in_stack_fffffffffffffd98);
              FRichCurve::SetKeyInterpMode
                        ((FRichCurve *)pFVar16,local_200,(uint)(pFVar5->InterpMode).Value);
              pFVar23 = pFVar23 + 8;
            }
            fVar31 = 0.0;
            FRichCurve::AutoSetTangents((FRichCurve *)pFVar16,0.0);
            local_1f8 = *(FName *)((longlong)local_1f8 + (longlong)local_248 * 8);
            local_210 = pFVar16;
            ppFVar18 = TMapBase<FName,FRealCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>_>
                       ::Find((TMapBase<FName,FRealCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>_>
                               *)this_00,local_1f8);
            if (ppFVar18 == (FRealCurve **)0x0) {
              local_d8 = &local_1f8;
              uVar20 = 0;
              local_d0 = &local_210;
              TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<FName_const_&,FRealCurve_*_const_&>_>
                        ((TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
                          *)this_00,&local_180,(bool *)&local_d8);
            }
            else {
              pFVar7 = *ppFVar18;
              if (pFVar7 != (FRealCurve *)0x0) {
                (**(code **)pFVar7->_padding_)(pFVar7,1);
              }
              *ppFVar18 = (FRealCurve *)local_210;
            }
            TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
            lpCriticalSection = local_208;
            pTVar29 = local_198;
            uVar30 = local_250;
          }
        }
        else {
          local_1e0._padding_._4_4_ = 1;
          local_1e0._padding_._0_4_ = 0;
          local_1e0.UnvisitedBitMask = 0xffffffff;
          local_1e0.CurrentBitIndex = 0;
          local_1e0.BaseBitIndex = 0;
          local_1e0.Array = pTVar28;
          if (*(int *)(lVar22 + 0x58) != 0) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1e0);
          }
          uVar11 = *(uint *)(lVar22 + 0x58);
          iStack_218 = *(int *)(lVar22 + 0x38) - *(int *)(lVar22 + 100);
          uStack_238 = CONCAT44(local_1e0._padding_._4_4_,(undefined4)local_1e0._padding_);
          uStack_224 = local_1e0.CurrentBitIndex;
          uStack_228 = local_1e0.UnvisitedBitMask;
          uStack_21c = local_1e0._28_4_;
          local_220 = local_1e0.BaseBitIndex;
          uVar25 = uVar11 & 0xffffffe0;
          local_230 = local_1e0.Array;
          iVar27 = (int)uVar11 >> 5;
          uStack_f0 = CONCAT44(uStack_214,iStack_218);
          TStack_110.Array = local_1e0.Array;
          local_240 = p_Var1;
          local_118 = p_Var1;
          TStack_110._padding_ = uStack_238;
          TStack_110._16_8_ = _uStack_228;
          TStack_110._24_8_ = _local_220;
          if ((int)uVar11 < 0) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L"");
            if (bVar10) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          uVar30 = *(uint *)(lVar22 + 0x58);
          if (uVar11 != uVar30) {
            pTVar29 = pTVar28;
            if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar22 + 0x50) !=
                (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              pTVar29 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar22 + 0x50);
            }
            uVar11 = -1 << ((byte)uVar11 & 0x1f) &
                     *(uint *)((pTVar29->AllocatorInstance).InlineData + (longlong)iVar27 * 4);
            while (uVar11 == 0) {
              lVar22 = (longlong)iVar27;
              uVar25 = uVar25 + 0x20;
              iVar27 = iVar27 + 1;
              uVar11 = uVar30;
              if ((int)((uVar30 - 1) + ((int)(uVar30 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar27)
              goto LAB_1479f0e70;
              uVar11 = *(uint *)((pTVar29->AllocatorInstance).InlineData + lVar22 * 4 + 4);
            }
            uVar20 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
            lVar22 = 0x3f;
            if (uVar20 != 0) {
              for (; uVar20 >> lVar22 == 0; lVar22 = lVar22 + -1) {
              }
            }
            local_1a0 = (int)lVar22;
            uVar11 = local_1a0 + -1 + uVar25;
            if ((int)uVar30 < (int)uVar11) {
              uVar11 = uVar30;
            }
          }
LAB_1479f0e70:
          while( true ) {
            p_Var9 = local_118;
            if (local_118->LockCount - local_118[1].RecursionCount != (int)uStack_f0) {
              local_254[0] = 0;
              `TSparseArray<TSparseSetElement<TTuple<FName,FRichCurve_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_254);
            }
            lVar22 = (longlong)TStack_110.CurrentBitIndex;
            if (((TStack_110.CurrentBitIndex == uVar11) && (TStack_110.Array == pTVar28)) &&
               (lpCriticalSection = local_208, p_Var9 == p_Var1)) break;
            p_Var4 = p_Var9->DebugInfo;
            this_02 = ::operator_new(0x80);
            if (this_02 == (FRichCurve *)0x0) {
              this_02 = (FRichCurve *)0x0;
            }
            else {
              this_02->_padding_ = 0;
              this_02->_padding_ = 0;
              this_02->_padding_ = 0;
              this_02->_padding_ = 0;
              *(undefined4 *)((longlong)&this_02->_padding_ + 4) = 0x404;
              this_02->_padding_ = 0;
              this_02->_padding_ = 0;
              this_02->_padding_ = 0;
              *(undefined4 *)&this_02->_padding_ = 0;
              *(undefined4 *)((longlong)&this_02->_padding_ + 4) = 0x80;
              *(undefined4 *)&this_02->_padding_ = 0xffffffff;
              *(undefined4 *)((longlong)&this_02->_padding_ + 4) = 0;
              this_02->_padding_ = 0;
              this_02->_padding_ = 0;
              this_02->_padding_ = 0;
              *(undefined4 *)&this_02->_padding_ = 0x7f7fffff;
              this_02->_padding_ = (longlong)&___7FRichCurve__6B_;
              (this_02->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              (this_02->Keys).ArrayNum = 0;
              (this_02->Keys).ArrayMax = 0;
            }
            pTVar19 = FRichCurve::GetConstRefOfKeys
                                ((FRichCurve *)(&p_Var4->CriticalSection)[lVar22 * 3]);
            FRichCurve::SetKeys(this_02,pTVar19);
            `UCompositeCurveTable::UpdateCachedRowMap'::__l44::<lambda_1>::operator()
                      (&local_248,*(FName *)(&p_Var4->Type + lVar22 * 0xc),(FRealCurve *)this_02);
            TStack_110.UnvisitedBitMask = TStack_110.UnvisitedBitMask & ~TStack_110._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_110);
          }
        }
LAB_1479f0f65:
        pFVar24 = local_1e8;
        if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
          LeaveCriticalSection(lpCriticalSection);
          pFVar24 = local_1e8;
        }
      }
      uVar20 = (ulonglong)local_1fc;
      pFVar23 = local_1f0 + 8;
    }
  }
  return;
}

