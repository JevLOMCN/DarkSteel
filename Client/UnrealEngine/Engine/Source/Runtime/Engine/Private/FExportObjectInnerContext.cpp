// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// FExportObjectInnerContext @ 1489074c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FExportObjectInnerContext * __thiscall
FExportObjectInnerContext::FExportObjectInnerContext
          (FExportObjectInnerContext *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  uint uVar2;
  FUObjectItem *pFVar3;
  bool bVar4;
  EInternalObjectFlags EVar5;
  UClass *pUVar6;
  FScriptContainerElement *pFVar7;
  UObjectBase *pUVar8;
  FUObjectItem *pFVar9;
  UObjectBase *pUVar10;
  TIterator local_68;
  UClass *local_50;
  EObjectFlags local_48;
  EInternalObjectFlags local_44;
  TObjectIteratorBase<1> local_40;
  
  pUVar10 = (UObjectBase *)0x0;
  this->_padding_ = (longlong)&___7FExportObjectInnerContext__6B_;
  *(undefined8 *)&this->ObjectToInnerMap = 0;
  *(undefined8 *)&(this->ObjectToInnerMap).field_0x8 = 0;
  *(undefined8 *)&(this->ObjectToInnerMap).field_0x20 = 0;
  *(undefined4 *)&(this->ObjectToInnerMap).field_0x28 = 0;
  *(undefined4 *)&(this->ObjectToInnerMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ObjectToInnerMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ObjectToInnerMap).field_0x34 = 0;
  *(undefined8 *)&(this->ObjectToInnerMap).field_0x40 = 0;
  *(undefined4 *)&(this->ObjectToInnerMap).field_0x48 = 0;
  EVar5 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar6 = Z_Construct_UClass_UObject_NoRegister();
  TObjectIteratorBase<1>::TObjectIteratorBase<1>
            (&local_40,pUVar6,false,RF_ClassDefaultObject,
             EVar5 | (PendingConstruction|Unreachable|Garbage|AutoRTFMConstructionAborted));
  local_68._8_8_ = ZEXT48((uint)local_40._padding_);
  local_50 = local_40.Class;
  local_48 = local_40.ExclusionFlags;
  lpCriticalSection = (FWindowsRecursiveMutex *)(local_40._padding_ + 0x30);
  local_68.CurrentObject = (FUObjectItem *)local_40._padding_;
  local_44 = local_40.InternalExclusionFlags;
  local_68.Array = (FUObjectArray *)local_40._padding_;
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar2 = ((FChunkedFixedUObjectArray *)(local_40._padding_ + 0x10))->NumElements;
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar3 = local_68.CurrentObject;
  do {
    if ((uint)local_40._padding_ == uVar2) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      LeaveCriticalSection((LPCRITICAL_SECTION)&(local_68.Array)->ObjObjectsCritical);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return this;
    }
    pUVar8 = pUVar10;
    if (pFVar3 != (FUObjectItem *)0x0) {
      pUVar8 = (pFVar3->field1_0x8).Object;
    }
    pFVar7 = (param_1->AllocatorInstance).Data;
    pFVar1 = pFVar7 + (longlong)param_1->ArrayNum * 8;
    for (; pFVar7 != pFVar1; pFVar7 = pFVar7 + 8) {
      if (*(UObjectBase **)pFVar7 == pUVar8) goto LAB_1489075e6;
    }
    AddObjectToInnerMap(this,(UObject *)pUVar8);
LAB_1489075e6:
    do {
      do {
        bVar4 = FUObjectArray::TIterator::Advance(&local_68);
        pFVar3 = local_68.CurrentObject;
        if (!bVar4) goto LAB_14890763a;
        pUVar8 = pUVar10;
        if (local_68.CurrentObject != (FUObjectItem *)0x0) {
          pUVar8 = ((local_68.CurrentObject)->field1_0x8).Object;
        }
      } while ((local_48 & pUVar8->ObjectFlags) != RF_NoFlags);
      pUVar8 = pUVar10;
      if (local_68.CurrentObject != (FUObjectItem *)0x0) {
        pUVar8 = ((local_68.CurrentObject)->field1_0x8).Object;
      }
      pFVar9 = FUObjectArray::IndexToObject(&GUObjectArray,pUVar8->InternalIndex);
    } while ((local_44 &
             (EInternalObjectFlags)((ulonglong)(pFVar9->field0_0x0).FlagsAndRefCount >> 0x20)) !=
             Borrowed);
LAB_14890763a:
    local_40._padding_._0_4_ = local_68.Index;
  } while( true );
}

// FExportObjectInnerContext @ 148907690

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FExportObjectInnerContext * __thiscall
FExportObjectInnerContext::FExportObjectInnerContext(FExportObjectInnerContext *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint uVar1;
  FUObjectItem *pFVar2;
  bool bVar3;
  EInternalObjectFlags EVar4;
  UClass *pUVar5;
  UObjectBase *pUVar6;
  FUObjectItem *pFVar7;
  UObjectBase *pUVar8;
  TIterator local_58;
  UClass *local_40;
  EObjectFlags local_38;
  EInternalObjectFlags local_34;
  TObjectIteratorBase<1> local_30;
  
  pUVar8 = (UObjectBase *)0x0;
  this->_padding_ = (longlong)&___7FExportObjectInnerContext__6B_;
  *(undefined8 *)&this->ObjectToInnerMap = 0;
  *(undefined8 *)&(this->ObjectToInnerMap).field_0x8 = 0;
  *(undefined8 *)&(this->ObjectToInnerMap).field_0x20 = 0;
  *(undefined4 *)&(this->ObjectToInnerMap).field_0x28 = 0;
  *(undefined4 *)&(this->ObjectToInnerMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ObjectToInnerMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ObjectToInnerMap).field_0x34 = 0;
  *(undefined8 *)&(this->ObjectToInnerMap).field_0x40 = 0;
  *(undefined4 *)&(this->ObjectToInnerMap).field_0x48 = 0;
  EVar4 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar5 = Z_Construct_UClass_UObject_NoRegister();
  TObjectIteratorBase<1>::TObjectIteratorBase<1>
            (&local_30,pUVar5,false,RF_ClassDefaultObject,
             EVar4 | (PendingConstruction|Unreachable|Garbage|AutoRTFMConstructionAborted));
  local_58._8_8_ = ZEXT48((uint)local_30._padding_);
  local_40 = local_30.Class;
  local_38 = local_30.ExclusionFlags;
  lpCriticalSection = (FWindowsRecursiveMutex *)(local_30._padding_ + 0x30);
  local_58.CurrentObject = (FUObjectItem *)local_30._padding_;
  local_34 = local_30.InternalExclusionFlags;
  local_58.Array = (FUObjectArray *)local_30._padding_;
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar1 = ((FChunkedFixedUObjectArray *)(local_30._padding_ + 0x10))->NumElements;
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar2 = local_58.CurrentObject;
  do {
    if ((uint)local_30._padding_ == uVar1) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      LeaveCriticalSection((LPCRITICAL_SECTION)&(local_58.Array)->ObjObjectsCritical);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return this;
    }
    pUVar6 = pUVar8;
    if (pFVar2 != (FUObjectItem *)0x0) {
      pUVar6 = (pFVar2->field1_0x8).Object;
    }
    AddObjectToInnerMap(this,(UObject *)pUVar6);
    do {
      do {
        bVar3 = FUObjectArray::TIterator::Advance(&local_58);
        pFVar2 = local_58.CurrentObject;
        if (!bVar3) goto LAB_1489077e4;
        pUVar6 = pUVar8;
        if (local_58.CurrentObject != (FUObjectItem *)0x0) {
          pUVar6 = ((local_58.CurrentObject)->field1_0x8).Object;
        }
      } while ((local_38 & pUVar6->ObjectFlags) != RF_NoFlags);
      pUVar6 = pUVar8;
      if (local_58.CurrentObject != (FUObjectItem *)0x0) {
        pUVar6 = ((local_58.CurrentObject)->field1_0x8).Object;
      }
      pFVar7 = FUObjectArray::IndexToObject(&GUObjectArray,pUVar6->InternalIndex);
    } while ((local_34 &
             (EInternalObjectFlags)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x20)) !=
             Borrowed);
LAB_1489077e4:
    local_30._padding_._0_4_ = local_58.Index;
  } while( true );
}

// ~FExportObjectInnerContext @ 14890dfc0

void __thiscall
FExportObjectInnerContext::~FExportObjectInnerContext(FExportObjectInnerContext *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->ObjectToInnerMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ObjectToInnerMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_*,TArray<UObject_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_*,TArray<UObject_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObject_*,TArray<UObject_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ObjectToInnerMap);
  return;
}

// AddObjectToInnerMap @ 148917470

void __thiscall
FExportObjectInnerContext::AddObjectToInnerMap(FExportObjectInnerContext *this,UObject *param_1)

{
  TMap<UObject_*,TArray<UObject_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TArray<UObject_*,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  UObject *local_res10;
  TPairInitializer<UObject_*_const_&,TArray<UObject_*,TSizedDefaultAllocator<32>_>_&&> local_res18;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *local_28;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *local_20;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> **local_18;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> **local_10;
  
  local_res18.Value = *(TArray<UObject_*,TSizedDefaultAllocator<32>_> **)&param_1->field_0x20;
  if (((UObject *)local_res18.Value != (UObject *)0x0) &&
     ((*(uint *)&((UObject *)local_res18.Value)->field_0x8 >> 0x1e & 1) == 0)) {
    this_00 = &this->ObjectToInnerMap;
    local_res10 = param_1;
    pTVar4 = TMapBase<UObject_*,TArray<UObject_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TArray<UObject_*,TSizedDefaultAllocator<32>_>,0>_>
             ::Find((TMapBase<UObject_*,TArray<UObject_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TArray<UObject_*,TSizedDefaultAllocator<32>_>,0>_>
                     *)this_00,(UObject *)local_res18.Value);
    if (pTVar4 == (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)0x0) {
      local_18 = &local_res18.Value;
      local_10 = &local_28;
      local_28 = pTVar4;
      local_20 = pTVar4;
      TSet<TTuple<UObject_*,TArray<UObject_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UObject_*,TArray<UObject_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<UObject_*_const_&,TArray<UObject_*,TSizedDefaultAllocator<32>_>_&&>_>
                ((TSet<TTuple<UObject_*,TArray<UObject_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UObject_*,TArray<UObject_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)this_00,&local_res18,(bool *)&local_18);
      lVar6 = (longlong)(int)local_res18.Key * 0x20 + *(longlong *)&this_00->field_0x0;
      if (local_28 != (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_28);
      }
      if ((*(UObject ***)(lVar6 + 8) <= &local_res10) &&
         (&local_res10 < *(UObject ***)(lVar6 + 8) + *(int *)(lVar6 + 0x14))) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      iVar3 = *(int *)(lVar6 + 0x10);
      if (iVar3 == *(int *)(lVar6 + 0x14)) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)(lVar6 + 8),(int *)(lVar6 + 0x14));
      }
      *(int *)(lVar6 + 0x10) = iVar3 + 1;
      pFVar5 = *(FScriptContainerElement **)(lVar6 + 8);
    }
    else {
      pFVar5 = (pTVar4->AllocatorInstance).Data;
      if ((pFVar5 <= (FScriptContainerElement *)&local_res10) &&
         ((FScriptContainerElement *)&local_res10 < pFVar5 + (longlong)pTVar4->ArrayMax * 8)) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      iVar3 = pTVar4->ArrayNum;
      if (iVar3 == pTVar4->ArrayMax) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
      }
      pTVar4->ArrayNum = iVar3 + 1;
      pFVar5 = (pTVar4->AllocatorInstance).Data;
    }
    *(UObject **)(pFVar5 + (longlong)iVar3 * 8) = local_res10;
  }
  return;
}

// GetObjectNumber @ 14895a630

int __thiscall FExportObjectInnerContext::GetObjectNumber(FExportObjectInnerContext *this)

{
  return 0;
}

// IsObjectSelected @ 1489673e0

bool __thiscall
FExportObjectInnerContext::IsObjectSelected(FExportObjectInnerContext *this,UObject *param_1)

{
  bool bVar1;
  
  bVar1 = UObject::IsSelected(param_1);
  return bVar1;
}

