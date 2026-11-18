// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 22

// StaticClass @ 147990710

UClass * __cdecl UCompositeDataTable::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCompositeDataTable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UDataTable::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CompositeDataTable",
               &Z_Registration_Info_UClass_UCompositeDataTable.InnerSingleton,
               StaticRegisterNativesUCompositeDataTable,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCompositeDataTable>,
               InternalVTableHelperCtorCaller<UCompositeDataTable>,local_res8,
               UDataTable::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCompositeDataTable.InnerSingleton;
}

// UCompositeDataTable @ 1479a6580

UCompositeDataTable * __thiscall
UCompositeDataTable::UCompositeDataTable(UCompositeDataTable *this,FVTableHelper *param_1)

{
  UDataTable::UDataTable((UDataTable *)this,param_1);
  this->_padding_ = (longlong)&___7UCompositeDataTable__6B_;
  (this->ParentTables).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParentTables).ArrayNum = 0;
  (this->ParentTables).ArrayMax = 0;
  (this->OldParentTables).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OldParentTables).ArrayNum = 0;
  (this->OldParentTables).ArrayMax = 0;
  return this;
}

// UCompositeDataTable @ 1479a65d0

UCompositeDataTable * __thiscall
UCompositeDataTable::UCompositeDataTable(UCompositeDataTable *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  
  UDataTable::UDataTable((UDataTable *)this,param_1);
  this->_padding_ = (longlong)&___7UCompositeDataTable__6B_;
  this->bIsLoading = '\0';
  this->bShouldNotClearParentTablesOnEmpty = '\0';
  (this->ParentTables).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParentTables).ArrayNum = 0;
  (this->ParentTables).ArrayMax = 0;
  (this->OldParentTables).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OldParentTables).ArrayNum = 0;
  (this->OldParentTables).ArrayMax = 0;
  return this;
}

// ~UCompositeDataTable @ 1479a9640

void __thiscall UCompositeDataTable::~UCompositeDataTable(UCompositeDataTable *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UCompositeDataTable__6B_;
  pFVar1 = (this->OldParentTables).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ParentTables).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDataTable::~UDataTable((UDataTable *)this);
  return;
}

// AddParentTable @ 1479af000

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UCompositeDataTable::AddParentTable(UCompositeDataTable *this,TObjectPtr<UDataTable> *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UDataTable>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  UDataTable *pUVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FUObjectItem *this_00;
  
  if ((param_1->field0_0x0).DebugPtr != (UDataTable *)0x0) {
    if (*(int *)((longlong)&this->_padding_ + 4) <= GUObjectArray.ObjLastNonGCIndex) {
      this_00 = FUObjectArray::IndexToObject
                          (&GUObjectArray,
                           *(int *)((longlong)&((param_1->field0_0x0).DebugPtr)->_padding_ + 4));
      FUObjectItem::SetRootFlags(this_00,RootSet);
    }
    pTVar2 = &this->ParentTables;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (longlong)(this->ParentTables).ArrayMax * 8)) {
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
    iVar7 = (this->ParentTables).ArrayNum;
    piVar1 = &(this->ParentTables).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    (this->ParentTables).ArrayNum = iVar7 + 1;
    pUVar4 = (param_1->field0_0x0).DebugPtr;
    *(UDataTable **)(pFVar3 + (longlong)iVar7 * 8) = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDataTable *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    OnParentTablesUpdated(this,0x10);
  }
  return;
}

// AddRow @ 1479afda0

void __thiscall
UCompositeDataTable::AddRow(UCompositeDataTable *this,FName param_1,FTableRowBase *param_2)

{
  return;
}

// AddRow @ 1479afdb0

void __thiscall
UCompositeDataTable::AddRow
          (UCompositeDataTable *this,FName param_1,uchar *param_2,UScriptStruct *param_3)

{
  return;
}

// AppendParentTables @ 1479b1ca0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UCompositeDataTable::AppendParentTables
          (UCompositeDataTable *this,TArray<UDataTable_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UDataTable>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  UObject *pUVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  FUObjectItem *this_00;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  UObject *local_38 [2];
  
  pFVar11 = (param_1->AllocatorInstance).Data;
  iVar4 = param_1->ArrayNum;
  pFVar3 = pFVar11 + (longlong)iVar4 * 8;
  bVar7 = *(int *)((longlong)&this->_padding_ + 4) <= GUObjectArray.ObjLastNonGCIndex;
  while( true ) {
    if (param_1->ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UDataTable_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar11 == pFVar3) break;
    pUVar5 = *(UObject **)pFVar11;
    if (pUVar5 != (UObject *)0x0) {
      if (bVar7) {
        this_00 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar5->field_0xc);
        FUObjectItem::SetRootFlags(this_00,RootSet);
      }
      pTVar2 = &this->ParentTables;
      local_38[0] = pUVar5;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      pFVar6 = (pTVar2->AllocatorInstance).Data;
      if ((pFVar6 <= (FScriptContainerElement *)local_38) &&
         ((FScriptContainerElement *)local_38 < pFVar6 + (longlong)(this->ParentTables).ArrayMax * 8
         )) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      iVar10 = (this->ParentTables).ArrayNum;
      piVar1 = &(this->ParentTables).ArrayMax;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->ParentTables).ArrayNum = iVar10 + 1;
      *(UObject **)((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_38[0];
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38[0] != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_38[0]);
      }
    }
    pFVar11 = pFVar11 + 8;
  }
  OnParentTablesUpdated(this,0x10);
  return;
}

// EmptyCompositeTable @ 1479bfa80

void __thiscall UCompositeDataTable::EmptyCompositeTable(UCompositeDataTable *this,bool param_1)

{
  int *piVar1;
  
  if (param_1) {
    piVar1 = &(this->ParentTables).ArrayMax;
    (this->ParentTables).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->ParentTables).AllocatorInstance,0,piVar1);
    }
  }
  UDataTable::EmptyTable((UDataTable *)this);
  return;
}

// EmptyTable @ 1479bfe30

void __thiscall UCompositeDataTable::EmptyTable(UCompositeDataTable *this)

{
  int *piVar1;
  
  if (this->bIsLoading == '\0' && this->bShouldNotClearParentTablesOnEmpty == '\0') {
    piVar1 = &(this->ParentTables).ArrayMax;
    (this->ParentTables).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->ParentTables).AllocatorInstance,0,piVar1);
    }
  }
  UDataTable::EmptyTable((UDataTable *)this);
  return;
}

// FindLoops @ 1479c1b70

UCompositeDataTable * __thiscall
UCompositeDataTable::FindLoops
          (UCompositeDataTable *this,
          TArray<UCompositeDataTable_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UCompositeDataTable *pUVar5;
  UClass *pUVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FScriptContainerElement *local_res18;
  UCompositeDataTable *local_58;
  TArray<UCompositeDataTable_const_*,TSizedDefaultAllocator<32>_> local_50;
  
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
    pUVar5 = (UCompositeDataTable *)(*pcVar2)();
    return pUVar5;
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(UCompositeDataTable **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_58;
  pFVar10 = (this->ParentTables).AllocatorInstance.Data;
  iVar4 = (this->ParentTables).ArrayNum;
  pFVar9 = pFVar10 + (longlong)iVar4 * 8;
  local_res18 = pFVar9;
  do {
    if ((this->ParentTables).ArrayNum != iVar4) {
      `TCheckedPointerIterator<TObjectPtr<UDataTable>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar10 == pFVar9) {
      pFVar9 = (param_1->AllocatorInstance).Data;
      if (pFVar9 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar9);
      }
      return (UCompositeDataTable *)0x0;
    }
    pUVar5 = *(UCompositeDataTable **)pFVar10;
    if (pUVar5 != (UCompositeDataTable *)0x0) {
      pUVar6 = StaticClass();
      iVar1 = (int)pUVar6->_padding_;
      if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar6->_padding_)) {
        pFVar7 = (param_1->AllocatorInstance).Data;
        iVar1 = param_1->ArrayNum;
        pFVar9 = pFVar7 + (longlong)iVar1 * 8;
        while( true ) {
          if (param_1->ArrayNum != iVar1) {
            `TCheckedPointerIterator<UCompositeDataTable_const_*,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res10);
          }
          if (pFVar7 == pFVar9) break;
          if (*(UCompositeDataTable **)pFVar7 == pUVar5) {
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
        if (pUVar5 != (UCompositeDataTable *)0x0) {
          pFVar9 = (param_1->AllocatorInstance).Data;
          if (pFVar9 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar9);
          }
          return pUVar5;
        }
      }
    }
    pFVar10 = pFVar10 + 8;
  } while( true );
}

// GetPreloadDependencies @ 1479cd320

void __thiscall
UCompositeDataTable::GetPreloadDependencies
          (UCompositeDataTable *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

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
  
  UDataTable::GetPreloadDependencies((UDataTable *)this,param_1);
  pFVar8 = (this->ParentTables).AllocatorInstance.Data;
  iVar2 = (this->ParentTables).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ParentTables).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UDataTable>,int,0>::operator!='::__l2::<lambda_1>::
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

// GetPrivateStaticClass @ 1479cdb10

UClass * __cdecl UCompositeDataTable::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCompositeDataTable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UDataTable::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CompositeDataTable",
               &Z_Registration_Info_UClass_UCompositeDataTable.InnerSingleton,
               StaticRegisterNativesUCompositeDataTable,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCompositeDataTable>,
               InternalVTableHelperCtorCaller<UCompositeDataTable>,local_res8,
               UDataTable::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCompositeDataTable.InnerSingleton;
}

// OnParentTablesUpdated @ 1479dbf30

void __thiscall UCompositeDataTable::OnParentTablesUpdated(UCompositeDataTable *this,uint param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UDataTable>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  UObject *pUVar4;
  FScriptContainerElement *pFVar5;
  UCompositeDataTable *pUVar6;
  FScriptContainerElement *pFVar7;
  char cVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  ForElementType<TAlignedBytes<16,16>_> *pFVar13;
  FScriptContainerElement *pFVar14;
  UCompositeDataTable *local_res8;
  undefined1 local_res18 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_88;
  FDelegateAllocation local_80;
  FDestructionSentinel local_70;
  FDestructionSentinel local_58;
  FDelegateAllocation *local_40;
  
  if (this->bUpdatingParentTables == '\0') {
    this->field_0xd8 = this->field_0xd8 | 2;
    iVar3 = (this->OldParentTables).ArrayNum;
    pFVar14 = (this->OldParentTables).AllocatorInstance.Data;
    pFVar7 = pFVar14 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this->OldParentTables).ArrayNum != iVar3) {
        `TCheckedPointerIterator<TObjectPtr<UDataTable>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (pFVar14 == pFVar7) break;
      pUVar4 = *(UObject **)pFVar14;
      if (pUVar4 != (UObject *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar4);
        }
        pFVar5 = (this->ParentTables).AllocatorInstance.Data;
        for (pFVar10 = pFVar5; pFVar10 != pFVar5 + (longlong)(this->ParentTables).ArrayNum * 8;
            pFVar10 = pFVar10 + 8) {
          if (*(UObject **)pFVar10 == pUVar4) {
            if ((int)((longlong)pFVar10 - (longlong)pFVar5 >> 3) != -1) goto LAB_1479dbffb;
            break;
          }
        }
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4[3].field_0x20,this)
        ;
      }
LAB_1479dbffb:
      pFVar14 = pFVar14 + 8;
    }
    UpdateCachedRowMap(this,(param_1 - 0x10 & 0xffffffef) == 0);
    pFVar14 = (this->ParentTables).AllocatorInstance.Data;
    iVar3 = (this->ParentTables).ArrayNum;
    pFVar7 = pFVar14 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this->ParentTables).ArrayNum != iVar3) {
        `TCheckedPointerIterator<TObjectPtr<UDataTable>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (pFVar14 == pFVar7) break;
      pUVar6 = *(UCompositeDataTable **)pFVar14;
      if ((pUVar6 != (UCompositeDataTable *)0x0) && (pUVar6 != this)) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar6);
        }
        pFVar5 = (this->OldParentTables).AllocatorInstance.Data;
        for (pFVar10 = pFVar5; pFVar10 != pFVar5 + (longlong)(this->OldParentTables).ArrayNum * 8;
            pFVar10 = pFVar10 + 8) {
          if (*(UCompositeDataTable **)pFVar10 == pUVar6) {
            if ((int)((longlong)pFVar10 - (longlong)pFVar5 >> 3) != -1) goto LAB_1479dc2eb;
            break;
          }
        }
        local_88.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
        local_80.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_80.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_88,(FWriteAccessScope *)&local_58);
        local_40 = &local_80;
        puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_80);
        if (puVar11 != (undefined8 *)0x0) {
          *puVar11 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__I__6B_
          ;
          *(undefined4 *)(puVar11 + 1) = 1;
          uVar12 = FDelegateHandle::GenerateNewID();
          puVar11[2] = uVar12;
          *puVar11 = &
                     ___7__TBaseUObjectMethodDelegateInstance__0A_VUCompositeDataTable____A6AXXZUFDefaultDelegateUserPolicy__I__6B_
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
                      (local_80.DelegateAllocator,local_res18);
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
          pFVar13 = (ForElementType<TAlignedBytes<16,16>_> *)
                    ((longlong)iVar9 * 0x10 + pUVar6->_padding_);
          *pFVar13 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          *(undefined4 *)(pFVar13 + 1) = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_88,(FWriteAccessScope *)&local_70);
          if (*pFVar13 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free((void *)*pFVar13);
          }
          *pFVar13 = local_80.DelegateAllocator;
          local_80.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          *(int *)(pFVar13 + 1) = local_80.DelegateSize;
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
LAB_1479dc2eb:
      pFVar14 = pFVar14 + 8;
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
        ConstructItems<TObjectPtr<UDataTable>,TObjectPtr<UDataTable>,int>
                  ((pTVar2->AllocatorInstance).Data,(TObjectPtr<UDataTable> *)pFVar7,iVar3);
      }
    }
    this->bUpdatingParentTables = '\0';
  }
  return;
}

// PostLoad @ 1479ddf90

void __thiscall UCompositeDataTable::PostLoad(UCompositeDataTable *this)

{
  this->bIsLoading = '\0';
  UObject::PostLoad((UObject *)this);
  return;
}

// RemoveParentTable @ 1479e3de0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UCompositeDataTable::RemoveParentTable(UCompositeDataTable *this,TObjectPtr<UDataTable> *param_1)

{
  FUObjectItem *this_00;
  
  if ((param_1->field0_0x0).DebugPtr != (UDataTable *)0x0) {
    this_00 = FUObjectArray::IndexToObject
                        (&GUObjectArray,
                         *(int *)((longlong)&((param_1->field0_0x0).DebugPtr)->_padding_ + 4));
    FUObjectItem::ClearRootFlags(this_00,RootSet);
    TArray<TObjectPtr<UDataTable>,TSizedDefaultAllocator<32>_>::Remove(&this->ParentTables,param_1);
    OnParentTablesUpdated(this,0x10);
  }
  return;
}

// RemoveParentTables @ 1479e3e50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UCompositeDataTable::RemoveParentTables
          (UCompositeDataTable *this,TArray<UDataTable_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FUObjectItem *this_00;
  ulonglong uVar4;
  FScriptContainerElement *pFVar5;
  UObject *pUVar6;
  int iVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  int iVar11;
  undefined1 local_res18 [8];
  uint local_res20;
  UObject *local_68;
  FScriptContainerElement *local_60;
  FScriptContainerElement *local_58;
  
  pFVar5 = (param_1->AllocatorInstance).Data;
  local_res20 = param_1->ArrayNum;
  uVar4 = (ulonglong)(int)local_res20;
  pFVar9 = pFVar5 + uVar4 * 8;
  local_58 = pFVar9;
  do {
    local_60 = pFVar5;
    if (param_1->ArrayNum != (int)uVar4) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UDataTable_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar5 == pFVar9) {
      OnParentTablesUpdated(this,0x10);
      return;
    }
    pUVar6 = *(UObject **)pFVar5;
    if (pUVar6 != (UObject *)0x0) {
      this_00 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar6->field_0xc);
      FUObjectItem::ClearRootFlags(this_00,RootSet);
      local_68 = pUVar6;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      pFVar5 = (this->ParentTables).AllocatorInstance.Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_68) &&
          ((FScriptContainerElement *)&local_68 <
           pFVar5 + (longlong)(this->ParentTables).ArrayMax * 8)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar1 = (this->ParentTables).ArrayNum;
      if (iVar1 != 0) {
        pFVar9 = (this->ParentTables).AllocatorInstance.Data;
        iVar11 = 0;
        lVar10 = 0;
        bVar3 = *(UObject **)pFVar9 != local_68;
        pUVar6 = local_68;
        iVar7 = 0;
        do {
          iVar8 = iVar7;
          do {
            lVar10 = lVar10 + 1;
            iVar8 = iVar8 + 1;
            if (iVar1 <= lVar10) break;
          } while (bVar3 == (*(UObject **)(pFVar9 + lVar10 * 8) != pUVar6));
          if (bVar3 != false) {
            if (iVar11 != iVar7) {
              memmove(pFVar9 + (longlong)iVar11 * 8,pFVar9 + (longlong)iVar7 * 8,
                      (longlong)(iVar8 - iVar7) << 3);
              pUVar6 = local_68;
            }
            iVar11 = iVar11 + (iVar8 - iVar7);
          }
          bVar3 = (bool)(bVar3 ^ 1);
          iVar7 = iVar8;
        } while (lVar10 < iVar1);
        (this->ParentTables).ArrayNum = iVar11;
        pFVar9 = local_58;
      }
    }
    pFVar5 = local_60 + 8;
    uVar4 = (ulonglong)local_res20;
  } while( true );
}

// RemoveRow @ 1479e41c0

void __thiscall UCompositeDataTable::RemoveRow(UCompositeDataTable *this,FName param_1)

{
  return;
}

// Serialize @ 1479e5880

void __thiscall UCompositeDataTable::Serialize(UCompositeDataTable *this,FArchive *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  if ((param_1->field_0x28 & 1) != 0) {
    this->bIsLoading = '\x01';
  }
  UDataTable::Serialize((UDataTable *)this,param_1);
  if (this->bIsLoading != 0) {
    pFVar3 = (this->ParentTables).AllocatorInstance.Data;
    iVar2 = (this->ParentTables).ArrayNum;
    pFVar1 = pFVar3 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->ParentTables).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UDataTable>,int,0>::operator!='::__l2::<lambda_1>::
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

// Serialize @ 1479e5920

void __thiscall
UCompositeDataTable::Serialize(UCompositeDataTable *this,FStructuredArchiveRecord param_1)

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
  UDataTable::Serialize((UDataTable *)this,pFVar3);
  if (this->bIsLoading != 0) {
    pFVar4 = (this->ParentTables).AllocatorInstance.Data;
    iVar2 = (this->ParentTables).ArrayNum;
    pFVar1 = pFVar4 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->ParentTables).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UDataTable>,int,0>::operator!='::__l2::<lambda_1>::
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

// StaticRegisterNativesUCompositeDataTable @ 1479ede10

void __cdecl UCompositeDataTable::StaticRegisterNativesUCompositeDataTable(void)

{
  return;
}

// UpdateCachedRowMap @ 1479f0fd0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCompositeDataTable::UpdateCachedRowMap(UCompositeDataTable *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FTableRowBase *pFVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  byte bVar13;
  byte bVar14;
  int iVar15;
  UCompositeDataTable *this_00;
  FString *pFVar16;
  FText *pFVar17;
  FText *pFVar18;
  FTextFormat *pFVar19;
  ulonglong uVar20;
  longlong lVar21;
  FScriptContainerElement *pFVar22;
  TBitArray<FDefaultBitArrayAllocator> *pTVar23;
  bool bVar24;
  undefined1 local_res20 [8];
  FName local_1fc;
  FName local_1f4;
  FName local_1ec;
  FName local_1e4;
  FName local_1dc;
  TArray<UCompositeDataTable_const_*,TSizedDefaultAllocator<32>_> local_1d0;
  FString local_1c0;
  FString local_1b0;
  longlong *local_1a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_198;
  longlong *local_178;
  int iStack_170;
  uint uStack_16c;
  TBitArray<FDefaultBitArrayAllocator> *local_168;
  undefined4 uStack_160;
  int iStack_15c;
  int local_158;
  undefined4 uStack_154;
  FText local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FText local_108;
  FText local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FText local_b8;
  FScopedDataTableChange local_a8;
  FText local_98;
  FTextFormat local_88;
  FText local_78;
  FTextFormat local_68 [2];
  undefined4 local_3c;
  
  bVar12 = false;
  bVar11 = false;
  local_1d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d0.ArrayNum = 0;
  local_1d0.ArrayMax = 0;
  bVar10 = false;
  this_00 = FindLoops(this,&local_1d0);
  if (this_00 != (UCompositeDataTable *)0x0) {
    if (param_1) {
      pFVar16 = UObjectBaseUtility::GetPathName
                          ((UObjectBaseUtility *)this_00,&local_e8,(UObject *)0x0);
      pFVar17 = FText::FromString(&local_98,pFVar16);
      pFVar18 = FText::AsLocalizable_Advanced_LocText
                          (&local_f8,L"CompositeDataTables",L"FoundLoopError",
                           L"Cyclic dependency found. Table {0} depends on itself. Please fix your data"
                          );
      pFVar19 = FTextFormat::FTextFormat(&local_88,pFVar18,Default);
      FText::Format<FText>(&local_148,pFVar19,pFVar17);
      if (local_f8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
      }
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      if (2 < (byte)LogDataTable._0_1_) {
        FText::ToString(&local_148);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDataTable);
      }
      if (local_148.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
      }
    }
    bVar10 = true;
    if ((int)this->_padding_ == *(int *)((longlong)&this->_padding_ + 4)) {
      return;
    }
  }
  UDataTable::FScopedDataTableChange::FScopedDataTableChange(&local_a8,(UDataTable *)this);
  UDataTable::EmptyTable((UDataTable *)this);
  if (!bVar10) {
    uVar2 = (this->ParentTables).ArrayNum;
    uVar20 = (ulonglong)(int)uVar2;
    pFVar22 = (this->ParentTables).AllocatorInstance.Data;
    bVar10 = false;
    pFVar1 = pFVar22 + uVar20 * 8;
    bVar14 = 0;
    while( true ) {
      if ((this->ParentTables).ArrayNum != (int)uVar20) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UDataTable>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (pFVar22 == pFVar1) break;
      plVar5 = *(longlong **)pFVar22;
      bVar13 = bVar14;
      if (plVar5 != (longlong *)0x0) {
        lVar21 = this->_padding_;
        if (plVar5[5] == lVar21) {
          local_1a0 = (longlong *)(**(code **)(*plVar5 + 0x2d0))();
          iVar3 = (int)local_1a0[5];
          iStack_170 = 0;
          local_158 = 0;
          uStack_16c = 1;
          TStack_198.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_1a0 + 2);
          iVar15 = 0;
          if (iVar3 != 0) {
            pTVar23 = TStack_198.Array;
            if ((TBitArray<FDefaultBitArrayAllocator> *)local_1a0[4] !=
                (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              pTVar23 = (TBitArray<FDefaultBitArrayAllocator> *)local_1a0[4];
            }
            uVar4 = *(uint *)(pTVar23->AllocatorInstance).InlineData;
            while (uVar4 == 0) {
              lVar21 = (longlong)iStack_170;
              local_158 = local_158 + 0x20;
              iStack_170 = iStack_170 + 1;
              iVar15 = iVar3;
              if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_170)
              goto LAB_1479f142d;
              uVar4 = *(uint *)((pTVar23->AllocatorInstance).InlineData + lVar21 * 4 + 4);
            }
            uStack_16c = -uVar4 & uVar4;
            uVar20 = (ulonglong)uStack_16c * 2 + 1;
            lVar21 = 0x3f;
            if (uVar20 != 0) {
              for (; uVar20 >> lVar21 == 0; lVar21 = lVar21 + -1) {
              }
            }
            iVar15 = local_158 + -1 + (int)lVar21;
            if (iVar3 < iVar15) {
              iVar15 = iVar3;
            }
          }
LAB_1479f142d:
          uStack_154 = local_3c;
          uStack_160 = 0xffffffff;
          TStack_198._padding_ = CONCAT44(uStack_16c,iStack_170);
          TStack_198.CurrentBitIndex = iVar15;
          TStack_198.UnvisitedBitMask = 0xffffffff;
          TStack_198._28_4_ = local_3c;
          TStack_198.BaseBitIndex = local_158;
          local_178 = local_1a0;
          local_168 = TStack_198.Array;
          iStack_15c = iVar15;
          if (iVar15 < iVar3) {
            do {
              pFVar8 = *(FTableRowBase **)(*local_1a0 + 8 + (longlong)iVar15 * 0x18);
              if (pFVar8 == (FTableRowBase *)0x0) {
                bVar24 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<4671122387209551986>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\CompositeDataTable.cpp"
                                    ,0x72,"RowMapIter.Value() != nullptr");
                if (bVar24) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
              }
              else {
                UDataTable::AddRow((UDataTable *)this,
                                   *(FName *)(*local_1a0 + (longlong)iVar15 * 0x18),pFVar8);
              }
              TStack_198.UnvisitedBitMask =
                   TStack_198.UnvisitedBitMask & ~TStack_198._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_198);
              iVar15 = TStack_198.CurrentBitIndex;
            } while (TStack_198.CurrentBitIndex < (TStack_198.Array)->NumBits);
          }
        }
        else if (param_1) {
          bVar10 = true;
          if (lVar21 == 0) {
            bVar11 = true;
            pFVar16 = ::FString::FString(&local_d8,"Missing row struct");
          }
          else {
            local_1fc = *(FName *)(lVar21 + 0x18);
            bVar12 = true;
            ::FName::ToString(&local_1fc,&local_138);
            pFVar16 = &local_138;
          }
          pFVar6 = (pFVar16->Data).AllocatorInstance.Data;
          (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar16->Data).ArrayNum = 0;
          (pFVar16->Data).ArrayMax = 0;
          if ((bVar11) &&
             (bVar11 = false, local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
             )) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          }
          if ((bVar12) &&
             (bVar12 = false,
             local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_138.Data.AllocatorInstance.Data);
          }
          bVar24 = plVar5[5] == 0;
          if (bVar24) {
            pFVar16 = ::FString::FString(&local_c8,"Missing row struct");
          }
          else {
            local_1f4 = *(FName *)(plVar5[5] + 0x18);
            ::FName::ToString(&local_1f4,&local_128);
            pFVar16 = &local_128;
          }
          pFVar7 = (pFVar16->Data).AllocatorInstance.Data;
          bVar13 = bVar14 | bVar24;
          (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar16->Data).ArrayNum = 0;
          (pFVar16->Data).ArrayMax = 0;
          if (((bool)(bVar14 | bVar24)) &&
             (bVar13 = 0, local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          }
          if ((!bVar24) && (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
             ) {
            FMemory::Free(local_128.Data.AllocatorInstance.Data);
          }
          if (1 < (byte)LogDataTable._0_1_) {
            local_1ec = *(FName *)(plVar5 + 3);
            ::FName::ToString(&local_1ec,&local_1b0);
            local_1e4 = (FName)this->_padding_;
            ::FName::ToString(&local_1e4,&local_1c0);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDataTable);
            if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
            }
            if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
            }
          }
          if (pFVar7 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar7);
          }
          if (pFVar6 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar6);
          }
        }
      }
      uVar20 = (ulonglong)uVar2;
      pFVar22 = pFVar22 + 8;
      bVar14 = bVar13;
    }
    if (bVar10) {
      local_1dc = (FName)this->_padding_;
      ::FName::ToString(&local_1dc,&local_118);
      pFVar17 = FText::FromString(&local_78,&local_118);
      pFVar18 = FText::AsLocalizable_Advanced_LocText
                          (&local_b8,L"CompositeDataTables",L"ParentsIncludesOtherRowStructError",
                           L"Composite table \'{0}\' must have the same row struct as it\'s parent tables. See output log for list of invalid rows."
                          );
      pFVar19 = FTextFormat::FTextFormat(local_68,pFVar18,Default);
      FText::Format<FText>(&local_108,pFVar19,pFVar17);
      if (local_b8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
      }
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      if (2 < (byte)LogDataTable._0_1_) {
        FText::ToString(&local_108);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDataTable);
      }
      if (local_108.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
      }
    }
  }
  UDataTable::FScopedDataTableChange::~FScopedDataTableChange(&local_a8);
  return;
}

