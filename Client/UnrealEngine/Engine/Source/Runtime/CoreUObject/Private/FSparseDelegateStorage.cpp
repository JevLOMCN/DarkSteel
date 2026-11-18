// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 15

// Add @ 1422032d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
FSparseDelegateStorage::Add
          (UObject *param_1,FName param_2,TScriptDelegate<FNotThreadSafeDelegateMode> *param_3)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this;
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  undefined1 uVar4;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *this_00;
  TSharedRef<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  longlong *plVar10;
  int iVar11;
  FName local_res10;
  <lambda_1> local_res18 [8];
  int local_res20 [2];
  UObject *local_88;
  UObject **local_80;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> local_78;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_68;
  FDestructionSentinel local_58;
  TSharedRef<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> local_40;
  FReadAccessScope local_30;
  
  bVar9 = false;
  local_res10 = param_2;
  bVar3 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound(param_3);
  if (bVar3) {
    EnterCriticalSection((LPCRITICAL_SECTION)&SparseDelegateMapCritical);
    iVar11 = SparseDelegates._52_4_;
    iVar7 = SparseDelegates._8_4_;
    if (iVar7 == iVar11) {
      FUObjectArray::AddUObjectDeleteListener
                (&GUObjectArray,(FUObjectDeleteListener *)&SparseDelegateObjectListener);
      iVar11 = SparseDelegates._52_4_;
      iVar7 = SparseDelegates._8_4_;
    }
    uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    uVar6 = uVar6 >> 0x10 ^ uVar6;
    local_88 = param_1;
    if (iVar7 != iVar11) {
      lVar8 = 0x154ba2b08;
      if (SparseDelegates._64_8_ != 0) {
        lVar8 = SparseDelegates._64_8_;
      }
      iVar7 = *(int *)(lVar8 + (ulonglong)(SparseDelegates._72_4_ - 1 & uVar6) * 4);
      while (iVar7 != -1) {
        plVar10 = (longlong *)((longlong)iVar7 * 0x60 + SparseDelegates._0_8_);
        if ((UObject *)*plVar10 == param_1) {
          if (plVar10 != (longlong *)0x0) goto LAB_14220340c;
          break;
        }
        iVar7 = (int)plVar10[0xb];
      }
    }
    local_80 = &local_88;
    TSet<TTuple<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>_>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<UObjectBase_const_*_&&>_>
              ((TSet<TTuple<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>_>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,0>,FDefaultSetAllocator>
                *)&SparseDelegates,(uint)local_res20,
               (TKeyInitializer<UObjectBase_const_*_&&> *)(ulonglong)uVar6,(bool *)&local_80);
    plVar10 = (longlong *)((longlong)local_res20[0] * 0x60 + SparseDelegates._0_8_);
LAB_14220340c:
    FVar2 = local_res10;
    uVar6 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
    this_00 = TMapBase<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
              ::FindOrAddImpl<FName_const_&>
                        ((TMapBase<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
                          *)(plVar10 + 1),uVar6 + FVar2.Number,&local_res10);
    if (this_00->Object == (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
      pTVar5 = MakeShared<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>(&local_40);
      local_78.Object = pTVar5->Object;
      local_78.SharedReferenceCount.ReferenceController =
           (pTVar5->SharedReferenceCount).ReferenceController;
      if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>::operator=
                (this_00,&local_78);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_40.SharedReferenceCount.ReferenceController);
      if ((this_00->Object == (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    this = this_00->Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_30);
    local_68.Object = param_3->Object;
    local_68.FunctionName = param_3->FunctionName;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
               (FWriteAccessScope *)&local_58);
    TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
    RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
              (&this->InvocationList,local_res18,Default);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal(this,&local_68);
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    bVar9 = true;
    LeaveCriticalSection((LPCRITICAL_SECTION)&SparseDelegateMapCritical);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_3);
  return bVar9;
}

// AddUnique @ 142203920

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
FSparseDelegateStorage::AddUnique
          (UObject *param_1,FName param_2,TScriptDelegate<FNotThreadSafeDelegateMode> *param_3)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this;
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  undefined1 uVar4;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *this_00;
  TSharedRef<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  longlong *plVar10;
  int iVar11;
  FName local_res10;
  <lambda_1> local_res18 [8];
  int local_res20 [2];
  UObject *local_88;
  UObject **local_80;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> local_78;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_68;
  FDestructionSentinel local_58;
  TSharedRef<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> local_40;
  FReadAccessScope local_30;
  
  bVar9 = false;
  local_res10 = param_2;
  bVar3 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound(param_3);
  if (bVar3) {
    EnterCriticalSection((LPCRITICAL_SECTION)&SparseDelegateMapCritical);
    iVar11 = SparseDelegates._52_4_;
    iVar7 = SparseDelegates._8_4_;
    if (iVar7 == iVar11) {
      FUObjectArray::AddUObjectDeleteListener
                (&GUObjectArray,(FUObjectDeleteListener *)&SparseDelegateObjectListener);
      iVar11 = SparseDelegates._52_4_;
      iVar7 = SparseDelegates._8_4_;
    }
    uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    uVar6 = uVar6 >> 0x10 ^ uVar6;
    local_88 = param_1;
    if (iVar7 != iVar11) {
      lVar8 = 0x154ba2b08;
      if (SparseDelegates._64_8_ != 0) {
        lVar8 = SparseDelegates._64_8_;
      }
      iVar7 = *(int *)(lVar8 + (ulonglong)(SparseDelegates._72_4_ - 1 & uVar6) * 4);
      while (iVar7 != -1) {
        plVar10 = (longlong *)((longlong)iVar7 * 0x60 + SparseDelegates._0_8_);
        if ((UObject *)*plVar10 == param_1) {
          if (plVar10 != (longlong *)0x0) goto LAB_142203a5c;
          break;
        }
        iVar7 = (int)plVar10[0xb];
      }
    }
    local_80 = &local_88;
    TSet<TTuple<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>_>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<UObjectBase_const_*_&&>_>
              ((TSet<TTuple<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>_>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,0>,FDefaultSetAllocator>
                *)&SparseDelegates,(uint)local_res20,
               (TKeyInitializer<UObjectBase_const_*_&&> *)(ulonglong)uVar6,(bool *)&local_80);
    plVar10 = (longlong *)((longlong)local_res20[0] * 0x60 + SparseDelegates._0_8_);
LAB_142203a5c:
    FVar2 = local_res10;
    uVar6 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
    this_00 = TMapBase<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
              ::FindOrAddImpl<FName_const_&>
                        ((TMapBase<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
                          *)(plVar10 + 1),uVar6 + FVar2.Number,&local_res10);
    if (this_00->Object == (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
      pTVar5 = MakeShared<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>(&local_40);
      local_78.Object = pTVar5->Object;
      local_78.SharedReferenceCount.ReferenceController =
           (pTVar5->SharedReferenceCount).ReferenceController;
      if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>::operator=
                (this_00,&local_78);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_40.SharedReferenceCount.ReferenceController);
      if ((this_00->Object == (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    this = this_00->Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_30);
    local_68.Object = param_3->Object;
    local_68.FunctionName = param_3->FunctionName;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
               (FWriteAccessScope *)&local_58);
    TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_>
              (&this->InvocationList,&local_68);
    TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
    RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
              (&this->InvocationList,local_res18,Default);
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    bVar9 = true;
    LeaveCriticalSection((LPCRITICAL_SECTION)&SparseDelegateMapCritical);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_3);
  return bVar9;
}

// Clear @ 142206890

void __cdecl FSparseDelegateStorage::Clear(UObject *param_1,FName param_2)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this;
  int *piVar1;
  uint uVar2;
  TSet<TTuple<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>,FDefaultSetAllocator>
  *this_00;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar3;
  uint uStackX_14;
  FName local_res18 [2];
  FDestructionSentinel local_38;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&SparseDelegateMapCritical);
  this_00 = (TSet<TTuple<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>,FDefaultSetAllocator>
             *)TMapBase<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,0>_>
               ::Find((TMapBase<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,0>_>
                       *)&SparseDelegates,(UObjectBase *)param_1);
  if (this_00 !=
      (TSet<TTuple<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>,FDefaultSetAllocator>
       *)0x0) {
    pTVar3 = TMapBase<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
             ::Find((TMapBase<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
                     *)this_00,param_2);
    if (pTVar3 != (TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *)0x0) {
      this = pTVar3->Object;
      if (this != (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
                   (FWriteAccessScope *)&local_38);
        piVar1 = &(this->InvocationList).ArrayMax;
        (this->InvocationList).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,0,&(this->InvocationList).AllocatorInstance,0,piVar1);
        }
        if (local_38.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
        }
      }
      local_res18[0] = param_2;
      if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
        uVar2 = ::GetTypeHash(param_2.ComparisonIndex.Value);
        uStackX_14 = param_2.Number;
        TSet<TTuple<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>,FDefaultSetAllocator>
        ::RemoveImpl<FName>(this_00,uStackX_14 + uVar2,local_res18);
      }
    }
    if (*(int *)&(this_00->Elements).field_0x8 == *(int *)&(this_00->Elements).field_0x34) {
      local_res18[0] = (FName)param_1;
      if (SparseDelegates._8_4_ != SparseDelegates._52_4_) {
        uVar2 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
                -0x7a143595;
        uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
        TSet<TTuple<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>_>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,0>,FDefaultSetAllocator>
        ::RemoveImpl<UObjectBase_const_*>
                  ((TSet<TTuple<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>_>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,0>,FDefaultSetAllocator>
                    *)&SparseDelegates,uVar2 >> 0x10 ^ uVar2,(UObjectBase **)local_res18);
        if (SparseDelegates._8_4_ != SparseDelegates._52_4_) goto LAB_1422069f0;
      }
      FUObjectArray::RemoveUObjectDeleteListener
                (&GUObjectArray,(FUObjectDeleteListener *)&SparseDelegateObjectListener);
    }
  }
LAB_1422069f0:
                    /* WARNING: Could not recover jumptable at 0x0001422069fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&SparseDelegateMapCritical);
  return;
}

// Contains @ 142207f00

bool __cdecl
FSparseDelegateStorage::Contains(UObject *param_1,FName param_2,UObject *param_3,FName param_4)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this;
  TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
  *this_00;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar1;
  UObject *pUVar2;
  FWeakObjectPtr *pFVar3;
  FWeakObjectPtr *this_01;
  bool bVar4;
  FReadAccessScope local_28;
  
  bVar4 = false;
  EnterCriticalSection((LPCRITICAL_SECTION)&SparseDelegateMapCritical);
  this_00 = TMapBase<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,0>_>
            ::Find((TMapBase<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,0>_>
                    *)&SparseDelegates,(UObjectBase *)param_1);
  if (((this_00 !=
        (TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
         *)0x0) &&
      (pTVar1 = TMapBase<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
                ::Find((TMapBase<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
                        *)this_00,param_2),
      pTVar1 != (TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *)0x0)) &&
     (this = pTVar1->Object, this != (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_28);
    this_01 = (FWeakObjectPtr *)(this->InvocationList).AllocatorInstance.Data;
    pFVar3 = this_01 + (longlong)(this->InvocationList).ArrayNum * 2;
    for (; this_01 != pFVar3; this_01 = this_01 + 2) {
      if (((*(FName *)(this_01 + 1) == param_4) && (param_3 != (UObject *)0x0)) &&
         (pUVar2 = FWeakObjectPtr::GetEvenIfUnreachable(this_01), param_3 == pUVar2))
      goto LAB_142207fa6;
    }
    this_01 = (FWeakObjectPtr *)0x0;
LAB_142207fa6:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    bVar4 = this_01 != (FWeakObjectPtr *)0x0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&SparseDelegateMapCritical);
  return bVar4;
}

// Contains @ 142207ff0

bool __cdecl
FSparseDelegateStorage::Contains
          (UObject *param_1,FName param_2,TScriptDelegate<FNotThreadSafeDelegateMode> *param_3)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this;
  FName FVar1;
  TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
  *this_00;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  FWeakObjectPtr *pFVar5;
  FWeakObjectPtr *this_01;
  bool bVar6;
  FReadAccessScope local_48;
  FReadAccessScope local_28;
  
  bVar6 = false;
  EnterCriticalSection((LPCRITICAL_SECTION)&SparseDelegateMapCritical);
  this_00 = TMapBase<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,0>_>
            ::Find((TMapBase<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,0>_>
                    *)&SparseDelegates,(UObjectBase *)param_1);
  if (((this_00 !=
        (TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
         *)0x0) &&
      (pTVar2 = TMapBase<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
                ::Find((TMapBase<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
                        *)this_00,param_2),
      pTVar2 != (TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *)0x0)) &&
     (this = pTVar2->Object, this != (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_48);
    pUVar3 = FWeakObjectPtr::Get(&param_3->Object);
    FVar1 = param_3->FunctionName;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_28);
    this_01 = (FWeakObjectPtr *)(this->InvocationList).AllocatorInstance.Data;
    local_48.DestructionSentinel.AccessType = (EAccessType)FVar1.ComparisonIndex.Value;
    pFVar5 = this_01 + (longlong)(this->InvocationList).ArrayNum * 2;
    local_48.DestructionSentinel._4_4_ = FVar1.Number;
    for (; this_01 != pFVar5; this_01 = this_01 + 2) {
      if (((*(FName *)(this_01 + 1) == FVar1) && (pUVar3 != (UObject *)0x0)) &&
         (pUVar4 = FWeakObjectPtr::GetEvenIfUnreachable(this_01), pUVar3 == pUVar4))
      goto LAB_1422080d7;
    }
    this_01 = (FWeakObjectPtr *)0x0;
LAB_1422080d7:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    bVar6 = this_01 != (FWeakObjectPtr *)0x0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&SparseDelegateMapCritical);
  return bVar6;
}

// GetMulticastDelegate @ 14220dcc0

TMulticastScriptDelegate<FNotThreadSafeDelegateMode> * __cdecl
FSparseDelegateStorage::GetMulticastDelegate(UObject *param_1,FName param_2)

{
  TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
  *this;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar1;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *pTVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&SparseDelegateMapCritical);
  this = TMapBase<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,0>_>
         ::Find((TMapBase<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,0>_>
                 *)&SparseDelegates,(UObjectBase *)param_1);
  if (this != (TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
               *)0x0) {
    pTVar1 = TMapBase<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
             ::Find((TMapBase<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
                     *)this,param_2);
    if (pTVar1 != (TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *)0x0) {
      pTVar2 = pTVar1->Object;
      goto LAB_14220dd08;
    }
  }
  pTVar2 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0;
LAB_14220dd08:
  LeaveCriticalSection((LPCRITICAL_SECTION)&SparseDelegateMapCritical);
  return pTVar2;
}

// GetSharedMulticastDelegate @ 14220f430

TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> * __cdecl
FSparseDelegateStorage::GetSharedMulticastDelegate
          (TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>
           *__return_storage_ptr__,UObject *param_1,FName param_2)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
  *this;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&SparseDelegateMapCritical);
  __return_storage_ptr__->Object = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this = TMapBase<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,0>_>
         ::Find((TMapBase<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,0>_>
                 *)&SparseDelegates,(UObjectBase *)param_1);
  if (this != (TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
               *)0x0) {
    pTVar4 = TMapBase<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
             ::Find((TMapBase<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
                     *)this,param_2);
    if (pTVar4 != (TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *)0x0) {
      pTVar1 = pTVar4->Object;
      pTVar2 = (pTVar4->SharedReferenceCount).ReferenceController;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar3 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
      __return_storage_ptr__->Object = pTVar1;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&SparseDelegateMapCritical);
  return __return_storage_ptr__;
}

// RegisterDelegateOffset @ 142218b40

void __cdecl
FSparseDelegateStorage::RegisterDelegateOffset(UObject *param_1,FName param_2,ulong64 param_3)

{
  code *pcVar1;
  bool bVar2;
  ulong64 local_res18 [2];
  undefined8 local_28;
  FName local_20;
  undefined8 *local_18;
  ulong64 *local_10;
  
  local_res18[0] = param_3;
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OwningObject",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SparseDelegate.cpp"
                       ,0x34,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_28 = *(undefined8 *)(*(longlong *)&param_1->field_0x10 + 0x18);
  local_18 = &local_28;
  local_10 = local_res18;
  local_20 = param_2;
  TSet<TTuple<TTuple<FName,FName>,unsigned___int64>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,unsigned___int64,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<TTuple<FName,FName>_&&,unsigned___int64_const_&>_>
            ((TSet<TTuple<TTuple<FName,FName>,unsigned___int64>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,unsigned___int64,0>,FDefaultSetAllocator>
              *)&SparseDelegateObjectOffsets,
             (TPairInitializer<TTuple<FName,FName>_&&,unsigned___int64_const_&> *)&stack0x00000008,
             (bool *)&local_18);
  return;
}

// Remove @ 14221aa20

bool __cdecl
FSparseDelegateStorage::Remove(UObject *param_1,FName param_2,UObject *param_3,FName param_4)

{
  int iVar1;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this;
  TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
  *this_00;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar2;
  uint uVar3;
  bool bVar4;
  UObjectBase *local_38;
  FReadAccessScope local_30;
  
  bVar4 = false;
  EnterCriticalSection((LPCRITICAL_SECTION)&SparseDelegateMapCritical);
  this_00 = TMapBase<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,0>_>
            ::Find((TMapBase<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,0>_>
                    *)&SparseDelegates,(UObjectBase *)param_1);
  if (this_00 ==
      (TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
       *)0x0) goto LAB_14221ab4e;
  pTVar2 = TMapBase<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
           ::Find((TMapBase<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
                   *)this_00,param_2);
  if (pTVar2 != (TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *)0x0) {
    this = pTVar2->Object;
    if (this != (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::Remove(this,param_3,param_4);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_30);
      iVar1 = (this->InvocationList).ArrayNum;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_30);
      bVar4 = 0 < iVar1;
      if (0 < iVar1) goto LAB_14221aacf;
    }
    TMapBase<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
    ::Remove((TMapBase<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
              *)this_00,param_2);
  }
LAB_14221aacf:
  if ((*(int *)&this_00->field_0x8 == *(int *)&this_00->field_0x34) &&
     ((local_38 = (UObjectBase *)param_1, SparseDelegates._8_4_ == SparseDelegates._52_4_ ||
      (uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
               -0x7a143595, uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb,
      TSet<TTuple<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>_>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,0>,FDefaultSetAllocator>
      ::RemoveImpl<UObjectBase_const_*>
                ((TSet<TTuple<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>_>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,0>,FDefaultSetAllocator>
                  *)&SparseDelegates,uVar3 >> 0x10 ^ uVar3,&local_38),
      SparseDelegates._8_4_ == SparseDelegates._52_4_)))) {
    FUObjectArray::RemoveUObjectDeleteListener
              (&GUObjectArray,(FUObjectDeleteListener *)&SparseDelegateObjectListener);
  }
LAB_14221ab4e:
  LeaveCriticalSection((LPCRITICAL_SECTION)&SparseDelegateMapCritical);
  return bVar4;
}

// Remove @ 14221ab80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
FSparseDelegateStorage::Remove
          (UObject *param_1,FName param_2,TScriptDelegate<FNotThreadSafeDelegateMode> *param_3)

{
  int *piVar1;
  int iVar2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
  *this_00;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar9;
  uint uVar10;
  <lambda_1> local_res20 [8];
  UObjectBase *local_88;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_80;
  FDestructionSentinel local_70;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  bVar5 = false;
  EnterCriticalSection((LPCRITICAL_SECTION)&SparseDelegateMapCritical);
  this_00 = TMapBase<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,0>_>
            ::Find((TMapBase<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,0>_>
                    *)&SparseDelegates,(UObjectBase *)param_1);
  if (this_00 ==
      (TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
       *)0x0) goto LAB_14221adf8;
  pTVar9 = TMapBase<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
           ::Find((TMapBase<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
                   *)this_00,param_2);
  if (pTVar9 != (TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *)0x0) {
    this = pTVar9->Object;
    if (this != (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_58);
      local_80.Object = param_3->Object;
      local_80.FunctionName = param_3->FunctionName;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_58);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
                 (FWriteAccessScope *)&local_70);
      uVar7 = TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              ::Find(&this->InvocationList,&local_80);
      if (uVar7 != 0xffffffff) {
        uVar10 = 0;
        if ((int)(uVar7 + 1) <= (this->InvocationList).ArrayNum) {
          uVar10 = ~uVar7 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        iVar2 = (this->InvocationList).ArrayNum;
        pFVar3 = (this->InvocationList).AllocatorInstance.Data;
        iVar8 = iVar2 + ~uVar7;
        if (1 < iVar8) {
          iVar8 = 1;
        }
        if (iVar8 != 0) {
          memmove(pFVar3 + (longlong)(int)uVar7 * 0x10,pFVar3 + (longlong)(iVar2 - iVar8) * 0x10,
                  (longlong)iVar8 << 4);
        }
        piVar1 = &(this->InvocationList).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,&(this->InvocationList).AllocatorInstance,(this->InvocationList).ArrayNum,
                   &(this->InvocationList).ArrayMax);
      }
      TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
      RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
                (&this->InvocationList,local_res20,Default);
      if (local_70.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_40);
      iVar8 = (this->InvocationList).ArrayNum;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_40);
      bVar5 = 0 < iVar8;
      if (0 < iVar8) goto LAB_14221ad79;
    }
    TMapBase<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
    ::Remove((TMapBase<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
              *)this_00,param_2);
  }
LAB_14221ad79:
  if ((*(int *)&this_00->field_0x8 == *(int *)&this_00->field_0x34) &&
     ((local_88 = (UObjectBase *)param_1, SparseDelegates._8_4_ == SparseDelegates._52_4_ ||
      (uVar7 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
               -0x7a143595, uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb,
      TSet<TTuple<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>_>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,0>,FDefaultSetAllocator>
      ::RemoveImpl<UObjectBase_const_*>
                ((TSet<TTuple<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>_>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,0>,FDefaultSetAllocator>
                  *)&SparseDelegates,uVar7 >> 0x10 ^ uVar7,&local_88),
      SparseDelegates._8_4_ == SparseDelegates._52_4_)))) {
    FUObjectArray::RemoveUObjectDeleteListener
              (&GUObjectArray,(FUObjectDeleteListener *)&SparseDelegateObjectListener);
  }
LAB_14221adf8:
  LeaveCriticalSection((LPCRITICAL_SECTION)&SparseDelegateMapCritical);
  return bVar5;
}

// RemoveAll @ 14221b010

bool __cdecl FSparseDelegateStorage::RemoveAll(UObject *param_1,FName param_2,UObject *param_3)

{
  int iVar1;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this;
  TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
  *this_00;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar2;
  uint uVar3;
  bool bVar4;
  UObjectBase *local_res20;
  FReadAccessScope local_38;
  
  bVar4 = false;
  EnterCriticalSection((LPCRITICAL_SECTION)&SparseDelegateMapCritical);
  this_00 = TMapBase<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,0>_>
            ::Find((TMapBase<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,0>_>
                    *)&SparseDelegates,(UObjectBase *)param_1);
  if (this_00 ==
      (TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
       *)0x0) goto LAB_14221b130;
  pTVar2 = TMapBase<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
           ::Find((TMapBase<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
                   *)this_00,param_2);
  if (pTVar2 != (TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *)0x0) {
    this = pTVar2->Object;
    if (this != (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll(this,param_3);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_38);
      iVar1 = (this->InvocationList).ArrayNum;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      bVar4 = 0 < iVar1;
      if (0 < iVar1) goto LAB_14221b0b3;
    }
    TMapBase<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
    ::Remove((TMapBase<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
              *)this_00,param_2);
  }
LAB_14221b0b3:
  if ((*(int *)&this_00->field_0x8 == *(int *)&this_00->field_0x34) &&
     ((local_res20 = (UObjectBase *)param_1, SparseDelegates._8_4_ == SparseDelegates._52_4_ ||
      (uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
               -0x7a143595, uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb,
      TSet<TTuple<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>_>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,0>,FDefaultSetAllocator>
      ::RemoveImpl<UObjectBase_const_*>
                ((TSet<TTuple<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>_>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,0>,FDefaultSetAllocator>
                  *)&SparseDelegates,uVar3 >> 0x10 ^ uVar3,&local_res20),
      SparseDelegates._8_4_ == SparseDelegates._52_4_)))) {
    FUObjectArray::RemoveUObjectDeleteListener
              (&GUObjectArray,(FUObjectDeleteListener *)&SparseDelegateObjectListener);
  }
LAB_14221b130:
  LeaveCriticalSection((LPCRITICAL_SECTION)&SparseDelegateMapCritical);
  return bVar4;
}

// ResolveSparseDelegate @ 14221c8a0

FSparseDelegate * __cdecl
FSparseDelegateStorage::ResolveSparseDelegate(UObject *param_1,FName param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  FSparseDelegate *pFVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  
  lVar11 = *(longlong *)&param_1->field_0x10;
  if (lVar11 != 0) {
    do {
      if (((char)*(uint *)(lVar11 + 0xd4) < '\0') && ((*(uint *)(lVar11 + 0xd4) >> 0x12 & 1) == 0))
      {
        lVar2 = *(longlong *)(lVar11 + 0x18);
        uVar5 = ::GetTypeHash((FNameEntryId)(uint)lVar2);
        uVar5 = (int)((ulonglong)lVar2 >> 0x20) + uVar5;
        uVar6 = ::GetTypeHash(param_2.ComparisonIndex.Value);
        if (SparseDelegateObjectOffsets._8_4_ != SparseDelegateObjectOffsets._52_4_) {
          lVar10 = 0x154ba2b58;
          if (SparseDelegateObjectOffsets._64_8_ != 0) {
            lVar10 = SparseDelegateObjectOffsets._64_8_;
          }
          iVar1 = *(int *)(lVar10 + (ulonglong)
                                    (SparseDelegateObjectOffsets._72_4_ - 1 &
                                    (param_2.Number + uVar5 * 0x40 + (uVar5 >> 2) +
                                     uVar6 + 0x9e3779b9 ^ uVar5)) * 4);
          while (iVar1 != -1) {
            plVar7 = (longlong *)((longlong)iVar1 * 0x20 + SparseDelegateObjectOffsets._0_8_);
            if ((*plVar7 == lVar2) && (*(FName *)(plVar7 + 1) == param_2)) {
              if (iVar1 != -1) {
                plVar9 = plVar7 + 2;
                if (plVar7 == (longlong *)0x0) {
                  plVar9 = (longlong *)0x0;
                }
                if (plVar9 != (longlong *)0x0) {
                  return (FSparseDelegate *)(&param_1->field_0x0 + *plVar9);
                }
              }
              break;
            }
            iVar1 = (int)plVar7[3];
          }
        }
      }
      lVar11 = *(longlong *)(lVar11 + 0x40);
    } while (lVar11 != 0);
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SparseDelegate.cpp"
                     ,0x47,L"");
  if (!bVar4) {
    return (FSparseDelegate *)0x0;
  }
  pcVar3 = (code *)swi(3);
  pFVar8 = (FSparseDelegate *)(*pcVar3)();
  return pFVar8;
}

// ResolveSparseOwner @ 14221ca20

UObject * __cdecl
FSparseDelegateStorage::ResolveSparseOwner(FSparseDelegate *param_1,FName param_2,FName param_3)

{
  code *pcVar1;
  bool bVar2;
  ulong64 *puVar3;
  UObject *pUVar4;
  FName local_18;
  FName local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  puVar3 = TMapBase<TTuple<FName,FName>,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,unsigned___int64,0>_>
           ::Find((TMapBase<TTuple<FName,FName>,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,unsigned___int64,0>_>
                   *)&SparseDelegateObjectOffsets,(TTuple<FName,FName> *)&local_18);
  if (puVar3 != (ulong64 *)0x0) {
    return (UObject *)(param_1 + -*puVar3);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\SparseDelegate.cpp"
                     ,0x51,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar4 = (UObject *)(*pcVar1)();
    return pUVar4;
  }
  return (UObject *)0x0;
}

// SetMulticastDelegate @ 14222ac10

void __cdecl
FSparseDelegateStorage::SetMulticastDelegate
          (UObject *param_1,FName param_2,
          TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_3)

{
  atomic<int> *paVar1;
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_> *pTVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FName FVar7;
  bool bVar8;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  TReferenceControllerBase<1> *pTVar14;
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_> *pTVar15
  ;
  longlong *plVar16;
  int iVar17;
  TReferenceControllerBase<1> *pTVar18;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *pTVar19;
  int local_res8 [2];
  FName local_res10;
  UObject *local_res18;
  UObject **local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_88 [2];
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> local_78;
  FDestructionSentinel local_68;
  FReadAccessScope local_50;
  
  local_res10 = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)&SparseDelegateMapCritical);
  iVar17 = SparseDelegates._52_4_;
  iVar12 = SparseDelegates._8_4_;
  if (iVar12 == iVar17) {
    FUObjectArray::AddUObjectDeleteListener
              (&GUObjectArray,(FUObjectDeleteListener *)&SparseDelegateObjectListener);
    iVar17 = SparseDelegates._52_4_;
    iVar12 = SparseDelegates._8_4_;
  }
  pTVar18 = (TReferenceControllerBase<1> *)0x0;
  uVar11 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
           -0x7a143595;
  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
  uVar11 = uVar11 >> 0x10 ^ uVar11;
  local_res18 = param_1;
  if (iVar12 != iVar17) {
    lVar13 = 0x154ba2b08;
    if (SparseDelegates._64_8_ != 0) {
      lVar13 = SparseDelegates._64_8_;
    }
    iVar12 = *(int *)(lVar13 + (ulonglong)(SparseDelegates._72_4_ - 1 & uVar11) * 4);
    while (iVar12 != -1) {
      plVar16 = (longlong *)((longlong)iVar12 * 0x60 + SparseDelegates._0_8_);
      if ((UObject *)*plVar16 == param_1) {
        if (plVar16 != (longlong *)0x0) goto LAB_14222ad49;
        break;
      }
      iVar12 = (int)plVar16[0xb];
    }
  }
  local_res20 = &local_res18;
  TSet<TTuple<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>_>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UObjectBase_const_*_&&>_>
            ((TSet<TTuple<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>_>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,0>,FDefaultSetAllocator>
              *)&SparseDelegates,(uint)local_res8,
             (TKeyInitializer<UObjectBase_const_*_&&> *)(ulonglong)uVar11,(bool *)&local_res20);
  plVar16 = (longlong *)((longlong)local_res8[0] * 0x60 + SparseDelegates._0_8_);
LAB_14222ad49:
  FVar7 = local_res10;
  uVar11 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
  pTVar9 = TMapBase<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
           ::FindOrAddImpl<FName_const_&>
                     ((TMapBase<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>
                       *)(plVar16 + 1),uVar11 + FVar7.Number,&local_res10);
  if (pTVar9->Object == (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
    pTVar10 = ::operator_new(0x28);
    if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
      pTVar19 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&DAT_00000010;
      pTVar10 = pTVar18;
    }
    else {
      pTVar10->SharedReferenceCount = (atomic<int>)0x1;
      pTVar19 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pTVar10 + 1);
      pTVar10->WeakReferenceCount = (atomic<int>)0x1;
      pTVar10->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_V__TMulticastScriptDelegate_UFNotThreadSafeDelegateMode_____00_SharedPointerInternals__6B_
      ;
      pTVar10[1]._padding_ = 0;
      pTVar10[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar10[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar10[2]._padding_ = 0;
      if ((pTVar19 == (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar14 = pTVar10;
    if (pTVar9 != &local_78) {
      pTVar9->Object = pTVar19;
      pTVar4 = (pTVar9->SharedReferenceCount).ReferenceController;
      if (pTVar10 != pTVar4) {
        (pTVar9->SharedReferenceCount).ReferenceController = pTVar10;
        pTVar14 = pTVar18;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar4->SharedReferenceCount;
          aVar3 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar3 == (atomic<int>)0x1) {
            (**(code **)pTVar4->_padding_)(pTVar4);
            LOCK();
            paVar1 = &pTVar4->WeakReferenceCount;
            aVar3 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            pTVar14 = (TReferenceControllerBase<1> *)0x0;
            if (aVar3 == (atomic<int>)0x1) {
              (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
            }
          }
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if ((pTVar9->Object == (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar19 = pTVar9->Object;
  iVar12 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_50);
  pTVar2 = &param_3->InvocationList;
  pTVar10 = pTVar18;
  iVar17 = iVar12;
  if ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_> *)
      local_88 != pTVar2) {
    pTVar10 = (TReferenceControllerBase<1> *)(pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar12 = (param_3->InvocationList).ArrayNum;
    iVar17 = (param_3->InvocationList).ArrayMax;
    (param_3->InvocationList).ArrayNum = 0;
    (param_3->InvocationList).ArrayMax = 0;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar19,
             (FWriteAccessScope *)&local_68);
  pTVar15 = &pTVar19->InvocationList;
  if (pTVar15 !=
      (TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_> *)
      local_88) {
    pFVar5 = (pTVar15->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar15->AllocatorInstance).Data = (FScriptContainerElement *)pTVar10;
    (pTVar19->InvocationList).ArrayNum = iVar12;
    (pTVar19->InvocationList).ArrayMax = iVar17;
    pTVar10 = pTVar18;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    FMemory::Free(pTVar10);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&SparseDelegateMapCritical);
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_3);
  return;
}

// SparseDelegateReport @ 14222d030

/* WARNING: Removing unreachable block (ram,0x00014222d739) */
/* WARNING: Removing unreachable block (ram,0x00014222da5c) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
FSparseDelegateStorage::SparseDelegateReport
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2,
          FOutputDevice *param_3)

{
  TMap<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,0>_>
  *pTVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  ulonglong uVar3;
  UObjectBaseUtility *this;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  TMap<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,0>_>
  *pTVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  FName *pFVar11;
  UClass *pUVar12;
  byte bVar13;
  wchar_t *pwVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  undefined8 *puVar17;
  int iVar18;
  undefined8 *puVar19;
  ForAnyElementType FVar20;
  int iVar21;
  uint uVar23;
  longlong lVar24;
  TBitArray<FDefaultBitArrayAllocator> *pTVar25;
  uint uVar26;
  uint *puVar27;
  uint uVar28;
  FScriptContainerElement *pFVar29;
  uint uVar30;
  undefined1 local_res20 [8];
  ForAnyElementType local_308;
  undefined8 local_300;
  undefined1 local_2f8;
  undefined1 local_2f7;
  undefined1 local_2f6 [2];
  int local_2f4;
  FName local_2f0;
  FName local_2e8;
  FString local_2e0;
  FString local_2d0;
  int local_2c0;
  TMap<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,0>_>
  *local_2b8;
  int iStack_2b0;
  uint uStack_2ac;
  TBitArray<FDefaultBitArrayAllocator> *local_2a8;
  uint uStack_2a0;
  uint uStack_29c;
  uint local_298;
  int iStack_294;
  int iStack_290;
  undefined4 uStack_28c;
  UField *local_288;
  FString local_280;
  FString local_270;
  FString local_260;
  FString local_250;
  TMap<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,0>_>
  *local_240;
  int iStack_238;
  uint uStack_234;
  undefined8 local_230;
  undefined4 uStack_228;
  int iStack_224;
  uint local_220;
  undefined4 uStack_21c;
  int iStack_218;
  undefined4 uStack_214;
  int local_210;
  int local_20c;
  int local_208;
  int local_204;
  FName local_200;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  TMap<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,0>_>
  *local_1b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1b0;
  undefined8 uStack_190;
  TMap<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,0>_>
  *local_188;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_180;
  undefined8 uStack_160;
  FString local_158;
  FString local_148;
  FString local_138;
  FScriptContainerElement *local_128;
  int iStack_120;
  undefined4 uStack_11c;
  FName local_118 [2];
  TStringView<wchar_t> local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  TMap<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,0>_>
  *local_b8;
  undefined8 uStack_b0;
  TBitArray<FDefaultBitArrayAllocator> *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  FName local_88 [4];
  undefined4 local_64;
  int local_44;
  int iVar22;
  
  iVar18 = param_1->ArrayNum;
  iVar22 = 0;
  iVar21 = 0;
  pFVar16 = (param_1->AllocatorInstance).Data;
  bVar9 = false;
  pFVar29 = pFVar16 + (longlong)iVar18 * 0x10;
  local_288 = (UField *)0x0;
  local_2e8.ComparisonIndex.Value = 0;
  local_2e8.Number = 0;
  local_2f0.ComparisonIndex.Value = 0;
  local_2f0.Number = 0;
  bVar6 = true;
  while( true ) {
    if (param_1->ArrayNum != iVar18) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (pFVar16 == pFVar29) break;
    if (*(int *)(pFVar16 + 8) == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = *(wchar_t **)&pFVar16->field_0x0;
    }
    iVar10 = FGenericPlatformStricmp::Stricmp(pwVar14,L"-details");
    if (iVar10 == 0) {
      bVar6 = false;
      pFVar16 = pFVar16 + 0x10;
    }
    else {
      bVar8 = ::FString::StartsWith((FString *)pFVar16,L"name=",5,IgnoreCase);
      if (bVar8) {
        local_260.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_260.Data.ArrayNum = 0;
        local_260.Data.ArrayMax = 0;
        ::FString::FString(&local_158,L"=");
        ::FString::Split((FString *)pFVar16,&local_158,(FString *)0x0,&local_260,CaseSensitive,
                         FromStart);
        if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_158.Data.AllocatorInstance.Data);
        }
        FVar20.Data = (FScriptContainerElement *)L"";
        if (local_260.Data.ArrayNum != 0) {
          FVar20.Data = local_260.Data.AllocatorInstance.Data;
        }
        pFVar11 = ::FName::FName(local_118,(wchar_t *)FVar20.Data,FNAME_Find);
        local_2e8 = *pFVar11;
        FVar20.Data = local_260.Data.AllocatorInstance.Data;
        if (local_2e8 == (FName)0x0) {
          FOutputDevice::LogfImpl(param_3,Warning,L"Invalid object name");
          bVar9 = true;
          FVar20.Data = local_260.Data.AllocatorInstance.Data;
        }
LAB_14222d31a:
        if (FVar20.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar20.Data);
        }
      }
      else {
        bVar8 = ::FString::StartsWith((FString *)pFVar16,L"delegate=",9,IgnoreCase);
        if (bVar8) {
          local_250.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_250.Data.ArrayNum = 0;
          local_250.Data.ArrayMax = 0;
          ::FString::FString(&local_148,L"=");
          ::FString::Split((FString *)pFVar16,&local_148,(FString *)0x0,&local_250,CaseSensitive,
                           FromStart);
          if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_148.Data.AllocatorInstance.Data);
          }
          FVar20.Data = (FScriptContainerElement *)L"";
          if (local_250.Data.ArrayNum != 0) {
            FVar20.Data = local_250.Data.AllocatorInstance.Data;
          }
          pFVar11 = ::FName::FName(local_88,(wchar_t *)FVar20.Data,FNAME_Find);
          local_2f0 = *pFVar11;
          FVar20.Data = local_250.Data.AllocatorInstance.Data;
          if (local_2f0 == (FName)0x0) {
            FOutputDevice::LogfImpl(param_3,Warning,L"Invalid delegate name");
            bVar9 = true;
            FVar20.Data = local_250.Data.AllocatorInstance.Data;
          }
          goto LAB_14222d31a;
        }
        bVar8 = ::FString::StartsWith((FString *)pFVar16,L"class=",6,IgnoreCase);
        if (bVar8) {
          local_280.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_280.Data.ArrayNum = 0;
          local_280.Data.ArrayMax = 0;
          ::FString::FString(&local_138,L"=");
          ::FString::Split((FString *)pFVar16,&local_138,(FString *)0x0,&local_280,CaseSensitive,
                           FromStart);
          if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_138.Data.AllocatorInstance.Data);
          }
          local_128 = local_280.Data.AllocatorInstance.Data;
          iStack_120 = iVar21;
          if (local_280.Data.ArrayNum != 0) {
            iStack_120 = local_280.Data.ArrayNum + -1;
          }
          pUVar12 = Z_Construct_UClass_UClass_NoRegister();
          local_108._12_4_ = uStack_11c;
          local_108.Size = iStack_120;
          local_108.DataPtr = (wchar_t *)local_128;
          local_288 = UClass::TryFindTypeSlow(pUVar12,&local_108,None);
          FVar20.Data = local_280.Data.AllocatorInstance.Data;
          if (local_288 == (UField *)0x0) {
            FOutputDevice::LogfImpl(param_3,Warning,L"No class of specified name found.");
            bVar9 = true;
            FVar20.Data = local_280.Data.AllocatorInstance.Data;
          }
          goto LAB_14222d31a;
        }
      }
      pFVar16 = pFVar16 + 0x10;
    }
  }
  if (!bVar9) {
    local_308.Data = (FScriptContainerElement *)0x0;
    local_300 = 0;
    local_2f4 = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)&SparseDelegateMapCritical);
    uStack_29c = SparseDelegates._40_4_;
    uStack_234 = 1;
    uVar26 = 0;
    iStack_224 = iVar21;
    local_220 = uVar26;
    iStack_238 = iVar22;
    if (SparseDelegates._40_4_ != 0) {
      puVar27 = (uint *)&SparseDelegates.field_0x10;
      if (SparseDelegates._32_8_ != 0) {
        puVar27 = (uint *)SparseDelegates._32_8_;
      }
      uVar23 = *puVar27;
      local_220 = 0;
      while (uVar23 == 0) {
        iStack_238 = iStack_238 + 1;
        local_220 = local_220 + 0x20;
        iStack_224 = SparseDelegates._40_4_;
        if ((int)(SparseDelegates._40_4_ + -1 + (SparseDelegates._40_4_ + -1 >> 0x1f & 0x1fU)) >> 5
            < iStack_238) goto LAB_14222d3e3;
        uVar23 = puVar27[iStack_238];
      }
      uStack_234 = ~(uVar23 - 1) & uVar23;
      uVar3 = (ulonglong)uStack_234 * 2 + 1;
      lVar24 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      local_204 = (int)lVar24;
      iStack_224 = local_204 + -1 + local_220;
      if ((int)SparseDelegates._40_4_ < iStack_224) {
        iStack_224 = SparseDelegates._40_4_;
      }
    }
LAB_14222d3e3:
    local_240 = &SparseDelegates;
    bVar13 = SparseDelegates._40_1_ & 0x1f;
    uStack_21c = local_64;
    iStack_218 = SparseDelegates._8_4_ - SparseDelegates._52_4_;
    uVar23 = SparseDelegates._40_4_ & 0xffffffe0;
    TStack_180._padding_ = CONCAT44(uStack_234,iStack_238);
    local_230 = 0x154ba2ae0;
    uStack_228 = 0xffffffff;
    TStack_180.CurrentBitIndex = iStack_224;
    TStack_180.UnvisitedBitMask = 0xffffffff;
    local_188 = &SparseDelegates;
    iVar18 = (int)SparseDelegates._40_4_ >> 5;
    TStack_180._28_4_ = local_64;
    TStack_180.BaseBitIndex = local_220;
    uStack_160 = CONCAT44(uStack_214,iStack_218);
    uVar28 = 1 << bVar13;
    uVar30 = -1 << bVar13;
    TStack_180.Array = (TBitArray<FDefaultBitArrayAllocator> *)&SparseDelegates.field_0x10;
    if (((int)SparseDelegates._40_4_ < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (uStack_29c != SparseDelegates._40_4_) {
      lVar24 = 0x154ba2ae0;
      if (SparseDelegates._32_8_ != 0) {
        lVar24 = SparseDelegates._32_8_;
      }
      uVar15 = uVar30 & *(uint *)(lVar24 + (longlong)iVar18 * 4);
      while (uVar15 == 0) {
        iVar18 = iVar18 + 1;
        uVar23 = uVar23 + 0x20;
        uStack_29c = SparseDelegates._40_4_;
        if ((int)((SparseDelegates._40_4_ + -1 >> 0x1f & 0x1fU) + SparseDelegates._40_4_ + -1) >> 5
            < iVar18) goto LAB_14222d518;
        uVar30 = 0xffffffff;
        uVar15 = *(uint *)(lVar24 + (longlong)iVar18 * 4);
      }
      uVar28 = ~(uVar15 - 1) & uVar15;
      uVar3 = (ulonglong)uVar28 * 2 + 1;
      lVar24 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      local_210 = (int)lVar24;
      uStack_29c = (uVar23 - 1) + local_210;
      if ((int)SparseDelegates._40_4_ < (int)uStack_29c) {
        uStack_29c = SparseDelegates._40_4_;
      }
    }
LAB_14222d518:
    local_2b8 = &SparseDelegates;
    iStack_294 = local_44;
    iStack_290 = SparseDelegates._8_4_ - SparseDelegates._52_4_;
    uStack_b0 = CONCAT44(uVar28,iVar18);
    local_2a8 = (TBitArray<FDefaultBitArrayAllocator> *)&SparseDelegates.field_0x10;
    uStack_a0 = CONCAT44(uStack_29c,uVar30);
    local_b8 = &SparseDelegates;
    local_98 = CONCAT44(local_44,uVar23);
    uStack_90 = CONCAT44(uStack_28c,iStack_290);
    local_a8 = (TBitArray<FDefaultBitArrayAllocator> *)&SparseDelegates.field_0x10;
    iStack_2b0 = iVar18;
    uStack_2ac = uVar28;
    uStack_2a0 = uVar30;
    local_298 = uVar23;
    iVar18 = iVar22;
    while( true ) {
      pTVar1 = local_188;
      if (*(int *)&local_188->field_0x8 - *(int *)&local_188->field_0x34 != (int)uStack_160) {
        local_2f8 = 0;
        `TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2f8);
      }
      if (((TStack_180.CurrentBitIndex == uStack_a0._4_4_) && (TStack_180.Array == local_a8)) &&
         (pTVar1 == local_b8)) break;
      puVar19 = (undefined8 *)(*(longlong *)pTVar1 + (longlong)TStack_180.CurrentBitIndex * 0x60);
      this = (UObjectBaseUtility *)*puVar19;
      if ((local_2e8 == (FName)0x0) ||
         (FVar4.ComparisonIndex.Value = *(uint *)&this->field_0x18,
         FVar4.Number = *(uint *)&this->field_0x1c, FVar4 == local_2e8)) {
        if (local_288 != (UField *)0x0) {
          iVar10 = (int)local_288[1]._padding_;
          if ((*(int *)(*(longlong *)&this->field_0x10 + 0x38) < iVar10) ||
             (*(UField **)
               (*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)iVar10 * 8) !=
              local_288 + 1)) goto LAB_14222dafa;
        }
        if (!bVar6) {
          UObjectBaseUtility::GetPathName(this,&local_f8,(UObject *)0x0);
          ::FString::PrintfImpl(&local_2e0,L"%s");
          if (((local_308.Data <= (FScriptContainerElement *)&local_2e0) &&
              ((FScriptContainerElement *)&local_2e0 <
               local_308.Data + (longlong)local_300._4_4_ * 0x10)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if ((int)local_300 == local_300._4_4_) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_308,(int *)((longlong)&local_300 + 4));
            pFVar16 = local_308.Data + (longlong)iVar10 * 0x10;
            local_300 = CONCAT44(local_300._4_4_,iVar10 + 1);
          }
          else {
            pFVar16 = local_308.Data + (longlong)(int)local_300 * 0x10;
            local_300 = CONCAT44(local_300._4_4_,(int)local_300 + 1);
          }
          *(undefined8 *)pFVar16 = 0;
          *(FScriptContainerElement **)pFVar16 = local_2e0.Data.AllocatorInstance.Data;
          *(int *)(pFVar16 + 8) = local_2e0.Data.ArrayNum;
          *(int *)(pFVar16 + 0xc) = local_2e0.Data.ArrayMax;
          local_2e0.Data.ArrayNum = 0;
          local_2e0.Data.ArrayMax = 0;
          local_2e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f8.Data.AllocatorInstance.Data);
          }
        }
        FVar4 = local_2f0;
        local_2f4 = local_2f4 + 1;
        pTVar1 = (TMap<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,TMap<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>,0>_>,0>_>
                  *)(puVar19 + 1);
        if (local_2f0 == (FName)0x0) {
          local_2c0 = iVar18 + (*(int *)(puVar19 + 2) - *(int *)((longlong)puVar19 + 0x3c));
          iVar18 = local_2c0;
          if (!bVar6) {
            uVar23 = *(uint *)(puVar19 + 6);
            pTVar2 = (TBitArray<FDefaultBitArrayAllocator> *)(puVar19 + 3);
            uStack_2ac = 1;
            uStack_29c = uVar26;
            local_298 = uVar26;
            iStack_2b0 = iVar22;
            if (uVar23 != 0) {
              pTVar25 = pTVar2;
              if ((TBitArray<FDefaultBitArrayAllocator> *)puVar19[5] !=
                  (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                pTVar25 = (TBitArray<FDefaultBitArrayAllocator> *)puVar19[5];
              }
              uVar30 = *(uint *)(pTVar25->AllocatorInstance).InlineData;
              local_298 = 0;
              while (uVar30 == 0) {
                iStack_2b0 = iStack_2b0 + 1;
                local_298 = local_298 + 0x20;
                uStack_29c = uVar23;
                if ((int)((uVar23 - 1) + ((int)(uVar23 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_2b0)
                goto LAB_14222d7fd;
                uVar30 = *(uint *)((pTVar25->AllocatorInstance).InlineData +
                                  (longlong)iStack_2b0 * 4);
              }
              uStack_2ac = -uVar30 & uVar30;
              uVar3 = (ulonglong)uStack_2ac * 2 + 1;
              lVar24 = 0x3f;
              if (uVar3 != 0) {
                for (; uVar3 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                }
              }
              local_20c = (int)lVar24;
              uStack_29c = local_20c + -1 + local_298;
              if ((int)uVar23 < (int)uStack_29c) {
                uStack_29c = uVar23;
              }
            }
LAB_14222d7fd:
            uVar30 = *(uint *)(puVar19 + 6);
            iStack_294 = iStack_224;
            uVar28 = uVar30 & 0xffffffe0;
            iStack_290 = *(int *)(puVar19 + 2) - *(int *)((longlong)puVar19 + 0x3c);
            TStack_1b0._padding_ = CONCAT44(uStack_2ac,iStack_2b0);
            uStack_2a0 = 0xffffffff;
            TStack_1b0.CurrentBitIndex = uStack_29c;
            TStack_1b0.UnvisitedBitMask = 0xffffffff;
            iVar18 = (int)uVar30 >> 5;
            TStack_1b0._28_4_ = iStack_224;
            TStack_1b0.BaseBitIndex = local_298;
            uStack_190 = CONCAT44(uStack_28c,iStack_290);
            local_2b8 = pTVar1;
            local_2a8 = pTVar2;
            local_1b8 = pTVar1;
            TStack_1b0.Array = pTVar2;
            if ((((int)uVar30 < 0) || ((int)uVar23 < (int)uVar30)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x7af,L""), bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar23 = *(uint *)(puVar19 + 6);
            if (uVar30 != uVar23) {
              pTVar25 = pTVar2;
              if ((TBitArray<FDefaultBitArrayAllocator> *)puVar19[5] !=
                  (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                pTVar25 = (TBitArray<FDefaultBitArrayAllocator> *)puVar19[5];
              }
              uVar30 = -1 << ((byte)uVar30 & 0x1f) &
                       *(uint *)((pTVar25->AllocatorInstance).InlineData + (longlong)iVar18 * 4);
              while (uVar30 == 0) {
                iVar18 = iVar18 + 1;
                uVar28 = uVar28 + 0x20;
                uVar30 = uVar23;
                if ((int)(((int)(uVar23 - 1) >> 0x1f & 0x1fU) + (uVar23 - 1)) >> 5 < iVar18)
                goto LAB_14222d903;
                uVar30 = *(uint *)((pTVar25->AllocatorInstance).InlineData + (longlong)iVar18 * 4);
              }
              uVar3 = (ulonglong)(-uVar30 & uVar30) * 2 + 1;
              lVar24 = 0x3f;
              if (uVar3 != 0) {
                for (; uVar3 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                }
              }
              local_208 = (int)lVar24;
              uVar30 = local_208 + -1 + uVar28;
              if ((int)uVar23 < (int)uVar30) {
                uVar30 = uVar23;
              }
            }
LAB_14222d903:
            while( true ) {
              pTVar7 = local_1b8;
              if (*(int *)&local_1b8->field_0x8 - *(int *)&local_1b8->field_0x34 != (int)uStack_190)
              {
                local_2f7 = 0;
                `TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_2f7);
              }
              if (((TStack_1b0.CurrentBitIndex == uVar30) && (TStack_1b0.Array == pTVar2)) &&
                 (iVar18 = local_2c0, pTVar7 == pTVar1)) break;
              ::FName::ToString((FName *)((longlong)TStack_1b0.CurrentBitIndex * 0x20 +
                                         *(longlong *)pTVar7),&local_e8);
              ::FString::PrintfImpl(&local_2d0,L"   %s");
              if (((local_308.Data <= (FScriptContainerElement *)&local_2d0) &&
                  ((FScriptContainerElement *)&local_2d0 <
                   local_308.Data + (longlong)local_300._4_4_ * 0x10)) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar9)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if ((int)local_300 == local_300._4_4_) {
                iVar18 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&local_308,(int *)((longlong)&local_300 + 4));
                pFVar16 = local_308.Data + (longlong)iVar18 * 0x10;
                local_300 = CONCAT44(local_300._4_4_,iVar18 + 1);
              }
              else {
                pFVar16 = local_308.Data + (longlong)(int)local_300 * 0x10;
                local_300 = CONCAT44(local_300._4_4_,(int)local_300 + 1);
              }
              *(undefined8 *)pFVar16 = 0;
              *(FScriptContainerElement **)pFVar16 = local_2d0.Data.AllocatorInstance.Data;
              *(int *)(pFVar16 + 8) = local_2d0.Data.ArrayNum;
              *(int *)(pFVar16 + 0xc) = local_2d0.Data.ArrayMax;
              local_2d0.Data.ArrayNum = 0;
              local_2d0.Data.ArrayMax = 0;
              local_2d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_e8.Data.AllocatorInstance.Data);
              }
              TStack_1b0.UnvisitedBitMask =
                   TStack_1b0.UnvisitedBitMask & ~TStack_1b0._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1b0);
            }
          }
        }
        else {
          uVar23 = ::GetTypeHash(local_2f0.ComparisonIndex);
          if (*(int *)(puVar19 + 2) != *(int *)((longlong)puVar19 + 0x3c)) {
            puVar17 = puVar19 + 8;
            if ((undefined8 *)puVar19[9] != (undefined8 *)0x0) {
              puVar17 = (undefined8 *)puVar19[9];
            }
            iVar10 = *(int *)((longlong)puVar17 +
                             (ulonglong)(*(int *)(puVar19 + 10) - 1U & FVar4.Number + uVar23) * 4);
            if (iVar10 != -1) {
              do {
                if (*(FName *)((longlong)iVar10 * 0x20 + *(longlong *)pTVar1) == FVar4) {
                  iVar18 = iVar18 + 1;
                  break;
                }
                iVar10 = *(int *)((longlong)iVar10 * 0x20 + 0x18 + *(longlong *)pTVar1);
              } while (iVar10 != -1);
            }
          }
        }
      }
LAB_14222dafa:
      TStack_180.UnvisitedBitMask = TStack_180.UnvisitedBitMask & ~TStack_180._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_180);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&SparseDelegateMapCritical);
    ::FString::FString(&local_270,L"Bound Sparse Delegates");
    if (local_288 != (UField *)0x0) {
      local_200 = (FName)local_288->_padding_;
      ::FName::ToString(&local_200,&local_1e8);
      ::FString::PrintfImpl(&local_1f8,L" - Class=%s");
      iVar18 = iVar21;
      if (local_1f8.Data.ArrayNum != 0) {
        iVar18 = local_1f8.Data.ArrayNum + -1;
      }
      ::FString::AppendChars(&local_270,(wchar_t *)local_1f8.Data.AllocatorInstance.Data,iVar18);
      if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
      }
      if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
      }
    }
    if (local_2e8 != (FName)0x0) {
      ::FName::ToString(&local_2e8,&local_d8);
      ::FString::PrintfImpl(&local_1d8,L" - Name=%s");
      iVar18 = iVar21;
      if (local_1d8.Data.ArrayNum != 0) {
        iVar18 = local_1d8.Data.ArrayNum + -1;
      }
      ::FString::AppendChars(&local_270,(wchar_t *)local_1d8.Data.AllocatorInstance.Data,iVar18);
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
    }
    if (local_2f0 != (FName)0x0) {
      ::FName::ToString(&local_2f0,&local_c8);
      ::FString::PrintfImpl(&local_1c8,L" - Delegate=%s");
      if (local_1c8.Data.ArrayNum != 0) {
        iVar21 = local_1c8.Data.ArrayNum + -1;
      }
      ::FString::AppendChars(&local_270,(wchar_t *)local_1c8.Data.AllocatorInstance.Data,iVar21);
      if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
      }
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
    }
    FOutputDevice::LogfImpl(param_3,Log,L"%s");
    FOutputDevice::LogfImpl(param_3,Log,L"Objects: %d");
    FOutputDevice::LogfImpl(param_3,Log,L"Delegates: %d");
    FOutputDevice::LogfImpl
              (param_3,Log,
               L"------------------------------------------------------------------------");
    iVar21 = (int)local_300;
    pFVar16 = local_308.Data + (longlong)(int)local_300 * 0x10;
    FVar20.Data = local_308.Data;
    while( true ) {
      if ((int)local_300 != iVar21) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_2f6);
      }
      if (FVar20.Data == pFVar16) break;
      FOutputDevice::LogfImpl(param_3,Log,L"%s");
      FVar20.Data = FVar20.Data + 0x10;
    }
    if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_270.Data.AllocatorInstance.Data);
    }
    DestructItems<FString,int>((FString *)local_308.Data,(int)local_300);
    if (local_308.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_308.Data);
    }
  }
  return;
}

