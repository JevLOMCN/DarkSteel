// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 8

// FDependency @ 142c96a30

FDependency * __thiscall
UE::Editor::DataStorage::Queries::FDependency::FDependency
          (FDependency *this,FQueryDescription *param_1)

{
  this->Query = param_1;
  return this;
}

// Compile @ 142ca7e40

FQueryDescription * __thiscall
UE::Editor::DataStorage::Queries::FDependency::Compile(FDependency *this)

{
  return this->Query;
}

// ReadOnly @ 142cb3010

FDependency * __thiscall
UE::Editor::DataStorage::Queries::FDependency::ReadOnly(FDependency *this,UClass *param_1)

{
  int *piVar1;
  FWeakObjectPtr *this_00;
  FQueryDescription *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FDependency *pFVar6;
  ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_> FVar7;
  ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> FVar8;
  ForElementType<UE::Editor::DataStorage::EQueryDependencyFlags> FVar9;
  UClass *local_res8;
  
  if (param_1 == (UClass *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Target",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\Elements\\Framework\\TypedElementQueryBuilder.cpp"
                       ,0x32,
                       L"The Dependency section in the Typed Elements query builder doesn\'t support nullptrs as Read-Only input."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FDependency *)(*pcVar3)();
      return pFVar6;
    }
  }
  pFVar2 = this->Query;
  iVar5 = (pFVar2->DependencyTypes).ArrayNum;
  piVar1 = &(pFVar2->DependencyTypes).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_>_>
                      (0x408,&(pFVar2->DependencyTypes).AllocatorInstance,piVar1);
  }
  (pFVar2->DependencyTypes).ArrayNum = iVar5 + 1;
  FVar7 = (pFVar2->DependencyTypes).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_>)0x0) {
    FVar7 = (ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_>)&pFVar2->DependencyTypes;
  }
  this_00 = (FWeakObjectPtr *)((longlong)FVar7 + (longlong)iVar5 * 8);
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1);
  }
  this_00->ObjectIndex = 0;
  this_00->ObjectSerialNumber = 0;
  local_res8 = param_1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(this_00,(FObjectPtr)&local_res8);
  pFVar2 = this->Query;
  iVar5 = (pFVar2->DependencyFlags).ArrayNum;
  piVar1 = &(pFVar2->DependencyFlags).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::EQueryDependencyFlags>_>
                      (0x101,&(pFVar2->DependencyFlags).AllocatorInstance,piVar1);
  }
  (pFVar2->DependencyFlags).ArrayNum = iVar5 + 1;
  FVar9 = (pFVar2->DependencyFlags).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<UE::Editor::DataStorage::EQueryDependencyFlags>)0x0) {
    FVar9 = (ForElementType<UE::Editor::DataStorage::EQueryDependencyFlags>)&pFVar2->DependencyFlags
    ;
  }
  *(undefined1 *)((longlong)FVar9 + (longlong)iVar5) = 1;
  pFVar2 = this->Query;
  iVar5 = (pFVar2->CachedDependencies).ArrayNum;
  piVar1 = &(pFVar2->CachedDependencies).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>
                      (0x408,&(pFVar2->CachedDependencies).AllocatorInstance,piVar1);
  }
  (pFVar2->CachedDependencies).ArrayNum = iVar5 + 1;
  FVar8 = (pFVar2->CachedDependencies).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
    FVar8 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)&pFVar2->CachedDependencies;
  }
  *(undefined8 *)((longlong)FVar8 + (longlong)iVar5 * 8) = 0;
  return this;
}

// ReadOnly @ 142cb3190

FDependency * __thiscall
UE::Editor::DataStorage::Queries::FDependency::ReadOnly
          (FDependency *this,TArrayView<UClass_const_*_const,int> *param_1)

{
  UClass **ppUVar1;
  int iVar2;
  FQueryDescription *pFVar3;
  uint uVar4;
  UClass **ppUVar5;
  
  pFVar3 = this->Query;
  iVar2 = param_1->ArrayNum;
  uVar4 = (pFVar3->CachedDependencies).ArrayNum + iVar2;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if ((pFVar3->DependencyTypes).ArrayMax < (int)uVar4) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_>_>
              (8,4,uVar4,&(pFVar3->DependencyTypes).AllocatorInstance,
               (pFVar3->DependencyTypes).ArrayNum,&(pFVar3->DependencyTypes).ArrayMax);
  }
  pFVar3 = this->Query;
  if ((pFVar3->CachedDependencies).ArrayMax < (int)uVar4) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>
              (8,4,uVar4,&(pFVar3->CachedDependencies).AllocatorInstance,
               (pFVar3->CachedDependencies).ArrayNum,&(pFVar3->CachedDependencies).ArrayMax);
  }
  pFVar3 = this->Query;
  if ((pFVar3->DependencyFlags).ArrayMax < (int)uVar4) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::EQueryDependencyFlags>_>
              (1,1,uVar4,&(pFVar3->DependencyFlags).AllocatorInstance,
               (pFVar3->DependencyFlags).ArrayNum,&(pFVar3->DependencyFlags).ArrayMax);
  }
  ppUVar5 = param_1->DataPtr;
  ppUVar1 = ppUVar5 + iVar2;
  for (; ppUVar5 != ppUVar1; ppUVar5 = ppUVar5 + 1) {
    ReadOnly(this,*ppUVar5);
  }
  return this;
}

// ReadWrite @ 142cb39e0

FDependency * __thiscall
UE::Editor::DataStorage::Queries::FDependency::ReadWrite(FDependency *this,UClass *param_1)

{
  int *piVar1;
  FWeakObjectPtr *this_00;
  FQueryDescription *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FDependency *pFVar6;
  ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_> FVar7;
  ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> FVar8;
  ForElementType<UE::Editor::DataStorage::EQueryDependencyFlags> FVar9;
  UClass *local_res8;
  
  if (param_1 == (UClass *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Target",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\Elements\\Framework\\TypedElementQueryBuilder.cpp"
                       ,0x49,
                       L"The Dependency section in the Typed Elements query builder doesn\'t support nullptrs as Read/Write input."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FDependency *)(*pcVar3)();
      return pFVar6;
    }
  }
  pFVar2 = this->Query;
  iVar5 = (pFVar2->DependencyTypes).ArrayNum;
  piVar1 = &(pFVar2->DependencyTypes).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_>_>
                      (0x408,&(pFVar2->DependencyTypes).AllocatorInstance,piVar1);
  }
  (pFVar2->DependencyTypes).ArrayNum = iVar5 + 1;
  FVar7 = (pFVar2->DependencyTypes).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_>)0x0) {
    FVar7 = (ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_>)&pFVar2->DependencyTypes;
  }
  this_00 = (FWeakObjectPtr *)((longlong)FVar7 + (longlong)iVar5 * 8);
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1);
  }
  this_00->ObjectIndex = 0;
  this_00->ObjectSerialNumber = 0;
  local_res8 = param_1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(this_00,(FObjectPtr)&local_res8);
  pFVar2 = this->Query;
  iVar5 = (pFVar2->DependencyFlags).ArrayNum;
  piVar1 = &(pFVar2->DependencyFlags).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::EQueryDependencyFlags>_>
                      (0x101,&(pFVar2->DependencyFlags).AllocatorInstance,piVar1);
  }
  (pFVar2->DependencyFlags).ArrayNum = iVar5 + 1;
  FVar9 = (pFVar2->DependencyFlags).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<UE::Editor::DataStorage::EQueryDependencyFlags>)0x0) {
    FVar9 = (ForElementType<UE::Editor::DataStorage::EQueryDependencyFlags>)&pFVar2->DependencyFlags
    ;
  }
  *(undefined1 *)((longlong)FVar9 + (longlong)iVar5) = 0;
  pFVar2 = this->Query;
  iVar5 = (pFVar2->CachedDependencies).ArrayNum;
  piVar1 = &(pFVar2->CachedDependencies).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>
                      (0x408,&(pFVar2->CachedDependencies).AllocatorInstance,piVar1);
  }
  (pFVar2->CachedDependencies).ArrayNum = iVar5 + 1;
  FVar8 = (pFVar2->CachedDependencies).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
    FVar8 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)&pFVar2->CachedDependencies;
  }
  *(undefined8 *)((longlong)FVar8 + (longlong)iVar5 * 8) = 0;
  return this;
}

// ReadWrite @ 142cb3b60

FDependency * __thiscall
UE::Editor::DataStorage::Queries::FDependency::ReadWrite
          (FDependency *this,TArrayView<UClass_const_*_const,int> *param_1)

{
  UClass **ppUVar1;
  int iVar2;
  FQueryDescription *pFVar3;
  uint uVar4;
  UClass **ppUVar5;
  
  pFVar3 = this->Query;
  iVar2 = param_1->ArrayNum;
  uVar4 = (pFVar3->CachedDependencies).ArrayNum + iVar2;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if ((pFVar3->DependencyTypes).ArrayMax < (int)uVar4) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_>_>
              (8,4,uVar4,&(pFVar3->DependencyTypes).AllocatorInstance,
               (pFVar3->DependencyTypes).ArrayNum,&(pFVar3->DependencyTypes).ArrayMax);
  }
  pFVar3 = this->Query;
  if ((pFVar3->CachedDependencies).ArrayMax < (int)uVar4) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>
              (8,4,uVar4,&(pFVar3->CachedDependencies).AllocatorInstance,
               (pFVar3->CachedDependencies).ArrayNum,&(pFVar3->CachedDependencies).ArrayMax);
  }
  pFVar3 = this->Query;
  if ((pFVar3->DependencyFlags).ArrayMax < (int)uVar4) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::EQueryDependencyFlags>_>
              (1,1,uVar4,&(pFVar3->DependencyFlags).AllocatorInstance,
               (pFVar3->DependencyFlags).ArrayNum,&(pFVar3->DependencyFlags).ArrayMax);
  }
  ppUVar5 = param_1->DataPtr;
  ppUVar1 = ppUVar5 + iVar2;
  for (; ppUVar5 != ppUVar1; ppUVar5 = ppUVar5 + 1) {
    ReadWrite(this,*ppUVar5);
  }
  return this;
}

// SubQuery @ 142cbc510

FDependency * __thiscall
UE::Editor::DataStorage::Queries::FDependency::SubQuery
          (FDependency *this,TArrayView<unsigned___int64_const_,int> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FDependency *pFVar3;
  
  if ((this->Query->Callback).ExecutionMode == ThreadedChunks) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Query->Callback.ExecutionMode != EExecutionMode::ThreadedChunks",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\Elements\\Framework\\TypedElementQueryBuilder.cpp"
                       ,0x69,
                       L"TEDS sub-queries can not be added to queries with a callback that process chunks in parallel."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FDependency *)(*pcVar1)();
      return pFVar3;
    }
  }
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::Insert
            (&this->Query->Subqueries,param_1->DataPtr,param_1->ArrayNum,
             (this->Query->Subqueries).ArrayNum);
  return this;
}

// SubQuery @ 142cbc580

FDependency * __thiscall
UE::Editor::DataStorage::Queries::FDependency::SubQuery(FDependency *this,ulong64 param_1)

{
  int *piVar1;
  FQueryDescription *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FDependency *pFVar7;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar8;
  ulong64 local_res10 [3];
  
  local_res10[0] = param_1;
  if ((this->Query->Callback).ExecutionMode == ThreadedChunks) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Query->Callback.ExecutionMode != EExecutionMode::ThreadedChunks",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\Elements\\Framework\\TypedElementQueryBuilder.cpp"
                       ,0x61,
                       L"TEDS sub-queries can not be added to queries with a callback that process chunks in parallel."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FDependency *)(*pcVar4)();
      return pFVar7;
    }
  }
  pFVar2 = this->Query;
  pTVar8 = &pFVar2->Subqueries;
  pFVar3 = (pTVar8->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 < pFVar3 + (longlong)(pFVar2->Subqueries).ArrayMax * 8)
     ) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FDependency *)(*pcVar4)();
      return pFVar7;
    }
  }
  iVar6 = (pFVar2->Subqueries).ArrayNum;
  piVar1 = &(pFVar2->Subqueries).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar8->AllocatorInstance,piVar1);
  }
  (pFVar2->Subqueries).ArrayNum = iVar6 + 1;
  *(ulong64 *)((pTVar8->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_res10[0];
  return this;
}

