// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Constraints
// Functions: 14

// operator() @ 1464a1bd0

bool __thiscall
`UE::TransformConstraintUtil::FConstraintsInteractionCache::HasAnyDependencyInternal'::__l2::
<lambda_1>::operator()(void *this,TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *param_1)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  FWeakObjectPtr *this_00;
  UObject *local_res10;
  UObject *local_res18;
  
  pUVar2 = FWeakObjectPtr::Get(&param_1->WeakPtr);
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = UTickableTransformConstraint::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) && (*(longlong *)&pUVar2[3].field_0x18 != 0)) &&
       ((*(uint *)(*(longlong *)&pUVar2[3].field_0x18 + 8) >> 0x1e & 1) == 0)) {
      this_00 = (FWeakObjectPtr *)
                (**(code **)(**(longlong **)&pUVar2[3].field_0x18 + 0x330))
                          (*(longlong **)&pUVar2[3].field_0x18,&local_res10);
      pUVar2 = FWeakObjectPtr::Get(this_00);
      if (pUVar2 != (UObject *)0x0) {
        local_res18 = pUVar2;
        TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::
        Emplace<UObject_*_const_&>
                  (*(TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> **)
                    ((longlong)this + 8),&local_res10,(bool *)&local_res18);
        if (pUVar2 == *(UObject **)this) {
          pUVar2 = FWeakObjectPtr::Get(&param_1->WeakPtr);
          return *(char *)(pUVar2 + 1) != '\0';
        }
      }
    }
  }
  return false;
}

// Get @ 1464b0620

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
UE::TransformConstraintUtil::FConstraintsInteractionCache::Get
          (FConstraintsInteractionCache *this,uint param_1,UWorld *param_2)

{
  FWeakObjectPtr *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  undefined1 *puVar9;
  ForAnyElementType this_00;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar10;
  uint local_res10 [2];
  TKeyInitializer<unsigned_int_const_&> local_res18;
  uint *local_res20;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_48;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_38;
  
  local_res10[0] = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`UE::TransformConstraintUtil::FConstraintsInteractionCache::Get'::__l2::
           _dynamic_atexit_destructor_for__Empty__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((param_2 == (UWorld *)0x0) || (local_res10[0] == 0)) {
    return &::Empty;
  }
  if (*(int *)&(this->PerHandleConstraints).field_0x8 !=
      *(int *)&(this->PerHandleConstraints).field_0x34) {
    puVar9 = *(undefined1 **)&(this->PerHandleConstraints).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->PerHandleConstraints).field_0x38;
    }
    iVar5 = *(int *)(puVar9 + (ulonglong)
                              (*(int *)&(this->PerHandleConstraints).field_0x48 - 1U &
                              local_res10[0]) * 4);
    if (iVar5 != -1) {
      lVar6 = *(longlong *)&this->PerHandleConstraints;
      do {
        if (*(uint *)((longlong)iVar5 * 0x20 + lVar6) == local_res10[0]) {
          if (((iVar5 != -1) && (lVar6 = (longlong)iVar5 * 0x20 + lVar6, lVar6 != 0)) &&
             (pTVar10 = (TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                         *)(lVar6 + 8),
             pTVar10 !=
             (TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
              *)0x0)) {
            return pTVar10;
          }
          break;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + lVar6);
      } while (iVar5 != -1);
    }
  }
  ::Singleton.World = param_2;
  FConstraintsManagerController::GetParentConstraints(&::Singleton,&local_38,local_res10[0],true);
  local_res20 = local_res10;
  TSet<TTuple<unsigned_int,TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned_int_const_&>_>
            ((TSet<TTuple<unsigned_int,TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)this,&local_res18,(bool *)&local_res20);
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  pTVar10 = (TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
             *)(*(longlong *)&this->PerHandleConstraints + (longlong)(int)local_res18.Key * 0x20 + 8
               );
  pFVar1 = (FWeakObjectPtr *)(local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8);
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this_00.Data = local_38.AllocatorInstance.Data;
  do {
    if ((FWeakObjectPtr *)this_00.Data == pFVar1) {
      if (pTVar10 != &local_48) {
        pFVar2 = (pTVar10->AllocatorInstance).Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (pTVar10->AllocatorInstance).Data = local_48.AllocatorInstance.Data;
        pTVar10->ArrayNum = local_48.ArrayNum;
        local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        pTVar10->ArrayMax = local_48.ArrayMax;
        local_48.ArrayNum = 0;
        local_48.ArrayMax = 0;
      }
      if ((FWeakObjectPtr *)local_48.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
      if ((FWeakObjectPtr *)local_38.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
      return pTVar10;
    }
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.Data);
    if (pUVar7 != (UObject *)0x0) {
      pUVar8 = UTickableTransformConstraint::StaticClass();
      iVar5 = (int)pUVar8->_padding_;
      if ((iVar5 <= *(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar5 * 8) ==
          &pUVar8->_padding_)) {
        if ((local_48.AllocatorInstance.Data <= this_00.Data) &&
           ((this_00.Data <
             (FWeakObjectPtr *)(local_48.AllocatorInstance.Data + (longlong)local_48.ArrayMax * 8)
            && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar4)))) {
          pcVar3 = (code *)swi(3);
          pTVar10 = (TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                     *)(*pcVar3)();
          return pTVar10;
        }
        iVar5 = local_48.ArrayNum;
        if (local_48.ArrayNum == local_48.ArrayMax) {
          iVar5 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&local_48.AllocatorInstance,&local_48.ArrayMax);
        }
        local_48.ArrayNum = iVar5 + 1;
        *(FWeakObjectPtr *)(local_48.AllocatorInstance.Data + (longlong)iVar5 * 8) =
             *(FWeakObjectPtr *)this_00.Data;
      }
    }
    this_00.Data = this_00.Data + 8;
  } while( true );
}

// Get @ 1464b0910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
UE::TransformConstraintUtil::FConstraintsInteractionCache::Get
          (FConstraintsInteractionCache *this,UObject *param_1,UWorld *param_2)

{
  ForAnyElementType _Src;
  int *piVar1;
  UConstraintSubsystem *this_00;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  int *piVar9;
  FWeakObjectPtr local_res10 [2];
  UObject *local_res20;
  FWeakObjectPtr local_68;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_60;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_50;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_40;
  
  piVar9 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar9 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`UE::TransformConstraintUtil::FConstraintsInteractionCache::Get'::__l2::
           _dynamic_atexit_destructor_for__Empty__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((param_1 == (UObject *)0x0) ||
     ((param_2 == (UWorld *)0x0 &&
      (param_2 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1),
      param_2 == (UWorld *)0x0)))) {
    return &::Empty;
  }
  if (GC::GIsIncrementalReachabilityPending != false) {
    GC::MarkAsReachable(param_1);
  }
  local_res10[0].ObjectIndex = 0;
  local_res10[0].ObjectSerialNumber = 0;
  local_res20 = param_1;
  if (GC::GIsIncrementalReachabilityPending != false) {
    GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(local_res10,(FObjectPtr)&local_res20);
  uVar4 = local_res10[0].ObjectIndex - local_res10[0].ObjectSerialNumber ^
          (uint)local_res10[0].ObjectSerialNumber >> 0xd;
  uVar3 = (-0x61c88647 - uVar4) - local_res10[0].ObjectSerialNumber ^ uVar4 << 8;
  uVar8 = (local_res10[0].ObjectSerialNumber - uVar3) - uVar4 ^ uVar3 >> 0xd;
  uVar4 = (uVar4 - uVar8) - uVar3 ^ uVar8 >> 0xc;
  uVar3 = (uVar3 - uVar4) - uVar8 ^ uVar4 << 0x10;
  uVar8 = (uVar8 - uVar3) - uVar4 ^ uVar3 >> 5;
  uVar4 = (uVar4 - uVar8) - uVar3 ^ uVar8 >> 3;
  uVar3 = (uVar3 - uVar4) - uVar8 ^ uVar4 << 10;
  if (*(int *)&(this->PerTargetConstraints).field_0x8 !=
      *(int *)&(this->PerTargetConstraints).field_0x34) {
    puVar5 = *(undefined1 **)&(this->PerTargetConstraints).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->PerTargetConstraints).field_0x38;
    }
    iVar6 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->PerTargetConstraints).field_0x48 - 1U &
                              ((uVar8 - uVar3) - uVar4 ^ uVar3 >> 0xf)) * 4);
    if (iVar6 != -1) {
      do {
        piVar1 = (int *)((longlong)iVar6 * 0x20 + *(longlong *)&this->PerTargetConstraints);
        if ((*piVar1 == local_res10[0].ObjectIndex) &&
           (piVar1[1] == local_res10[0].ObjectSerialNumber)) {
          if (iVar6 != -1) {
            pTVar2 = (TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                      *)(piVar1 + 2);
            if (piVar1 == (int *)0x0) {
              pTVar2 = (TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                        *)0x0;
            }
            if (pTVar2 != (TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                           *)0x0) {
              return pTVar2;
            }
          }
          break;
        }
        iVar6 = piVar1[6];
      } while (iVar6 != -1);
    }
  }
  if (GC::GIsIncrementalReachabilityPending != false) {
    GC::MarkAsReachable(param_1);
  }
  local_res10[0].ObjectIndex = 0;
  local_res10[0].ObjectSerialNumber = 0;
  local_res20 = param_1;
  if (GC::GIsIncrementalReachabilityPending != false) {
    GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(local_res10,(FObjectPtr)&local_res20);
  local_68 = local_res10[0];
  local_res20 = (UObject *)&local_68;
  TSet<TTuple<TObjectKey<UObject>,TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UObject>,TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<TObjectKey<UObject>_&&>_>
            ((TSet<TTuple<TObjectKey<UObject>,TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UObject>,TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&this->PerTargetConstraints,(TKeyInitializer<TObjectKey<UObject>_&&> *)local_res10,
             (bool *)&local_res20);
  lVar7 = *(longlong *)&this->PerTargetConstraints + (longlong)local_res10[0].ObjectIndex * 0x20;
  ::Singleton.World = param_2;
  this_00 = UConstraintSubsystem::Get();
  if (this_00 == (UConstraintSubsystem *)0x0) {
    if ((*piVar9 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(`FConstraintsManagerController::
             GetConstraintsByPredicate<`UE::TransformConstraintUtil::FConstraintsInteractionCache::Get'::__l2::<lambda_1>_>'
             ::__l5::_dynamic_atexit_destructor_for__Empty__);
      _Init_thread_footer(&::_TSS0);
    }
    _Src.Data = ::Empty.AllocatorInstance.Data;
    local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar6 = ::Empty.ArrayNum;
    local_60.ArrayNum = iVar6;
    if (iVar6 == 0) {
      local_60.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar6,0,&local_60.AllocatorInstance,iVar6,&local_60.ArrayMax);
      memcpy(local_60.AllocatorInstance.Data,_Src.Data,(longlong)iVar6 << 3);
    }
  }
  else {
    pTVar2 = UConstraintSubsystem::GetConstraints(this_00,&local_40,::Singleton.World);
    TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
    FilterByPredicate<_UE::TransformConstraintUtil::FConstraintsInteractionCache::Get_::__l2::<lambda_1>_>
              (pTVar2,&local_50,(<lambda_1>)param_1);
    if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.AllocatorInstance.Data);
    }
    AlgoImpl::
    StableSortInternal<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,FIdentityFunctor,_FConstraintsManagerController::GetConstraintsByPredicate<_UE::TransformConstraintUtil::FConstraintsInteractionCache::Get_::__l2::<lambda_1>_>_::__l2::<lambda_2>_>
              ((TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)local_50.AllocatorInstance.Data
               ,local_50.ArrayNum,local_res10[0].ObjectIndex._0_1_,(<lambda_2>)0x1551aea28);
    local_60.AllocatorInstance.Data = local_50.AllocatorInstance.Data;
    local_60.ArrayNum = local_50.ArrayNum;
    local_60.ArrayMax = local_50.ArrayMax;
  }
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
              *)(lVar7 + 8),&local_60);
  if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.AllocatorInstance.Data);
  }
  return (TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)
         (lVar7 + 8);
}

// Get @ 1464b0ce0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
UE::TransformConstraintUtil::FConstraintsInteractionCache::Get
          (FConstraintsInteractionCache *this,UObject *param_1,FName *param_2)

{
  uint uVar1;
  UWorld *pUVar2;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar3;
  
  uVar1 = TransformConstraintUtil::Private::GetHandleHash(param_1,param_2);
  if (uVar1 == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        atexit(`UE::TransformConstraintUtil::FConstraintsInteractionCache::Get'::__l5::
               _dynamic_atexit_destructor_for__Empty__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    return &::Empty;
  }
  pUVar2 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
  pTVar3 = Get(this,uVar1,pUVar2);
  return pTVar3;
}

// GetParentTransform @ 1464b54d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TOptional<UE::Math::TTransform<double>_> * __thiscall
UE::TransformConstraintUtil::FConstraintsInteractionCache::GetParentTransform
          (FConstraintsInteractionCache *this,
          TOptional<UE::Math::TTransform<double>_> *__return_storage_ptr__,uint param_1,
          UWorld *param_2)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *this_00;
  TOptional<UE::Math::TTransform<double>_> *pTVar7;
  UObject *pUVar8;
  UClass *pUVar9;
  double *pdVar10;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  <lambda_1> local_98;
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  this_00 = Get(this,param_1,param_2);
  uVar5 = TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
          FindLastByPredicate<_UE::TransformConstraintUtil::GetLastActiveConstraintIndex_::__l2::<lambda_1>_>
                    (this_00,local_98,this_00->ArrayNum);
  if (uVar5 != 0xffffffff) {
    uVar6 = 0;
    if ((int)uVar5 < this_00->ArrayNum) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (local_a8 = (longlong)(int)uVar5, local_a0 = (longlong)this_00->ArrayNum,
       bVar4 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TOptional<UE::Math::TTransform<double>_> *)(*pcVar2)();
      return pTVar7;
    }
    pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                 ((this_00->AllocatorInstance).Data + (longlong)(int)uVar5 * 8));
    if (pUVar8 != (UObject *)0x0) {
      pUVar9 = UTickableTransformConstraint::StaticClass();
      iVar1 = (int)pUVar9->_padding_;
      if ((((iVar1 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar9->_padding_)) && (*(longlong *)&pUVar8[3].field_0x18 != 0)) &&
         ((*(uint *)(*(longlong *)&pUVar8[3].field_0x18 + 8) >> 0x1e & 1) == 0)) {
        pdVar10 = (double *)
                  (**(code **)(**(longlong **)&pUVar8[3].field_0x18 + 0x2c8))
                            (*(longlong **)&pUVar8[3].field_0x18,local_88);
        dVar3 = pdVar10[1];
        (__return_storage_ptr__->TypedValue).Rotation.XY.m128d_f64[0] = *pdVar10;
        (__return_storage_ptr__->TypedValue).Rotation.XY.m128d_f64[1] = dVar3;
        dVar3 = pdVar10[3];
        (__return_storage_ptr__->TypedValue).Rotation.ZW.m128d_f64[0] = pdVar10[2];
        (__return_storage_ptr__->TypedValue).Rotation.ZW.m128d_f64[1] = dVar3;
        dVar3 = pdVar10[5];
        (__return_storage_ptr__->TypedValue).Translation.XY.m128d_f64[0] = pdVar10[4];
        (__return_storage_ptr__->TypedValue).Translation.XY.m128d_f64[1] = dVar3;
        dVar3 = pdVar10[7];
        (__return_storage_ptr__->TypedValue).Translation.ZW.m128d_f64[0] = pdVar10[6];
        (__return_storage_ptr__->TypedValue).Translation.ZW.m128d_f64[1] = dVar3;
        dVar3 = pdVar10[9];
        (__return_storage_ptr__->TypedValue).Scale3D.XY.m128d_f64[0] = pdVar10[8];
        (__return_storage_ptr__->TypedValue).Scale3D.XY.m128d_f64[1] = dVar3;
        dVar3 = pdVar10[0xb];
        (__return_storage_ptr__->TypedValue).Scale3D.ZW.m128d_f64[0] = pdVar10[10];
        (__return_storage_ptr__->TypedValue).Scale3D.ZW.m128d_f64[1] = dVar3;
        __return_storage_ptr__->bIsSet = true;
        return __return_storage_ptr__;
      }
    }
  }
  __return_storage_ptr__->bIsSet = false;
  bVar4 = ::Invalid.bIsSet;
  __return_storage_ptr__->bIsSet = ::Invalid.bIsSet;
  if (bVar4 != false) {
    *&(__return_storage_ptr__->TypedValue).Rotation.XY.m128d_f64 =
         ::Invalid.TypedValue.Rotation.XY.m128d_f64;
    *&(__return_storage_ptr__->TypedValue).Rotation.ZW.m128d_f64 =
         ::Invalid.TypedValue.Rotation.ZW.m128d_f64;
    *&(__return_storage_ptr__->TypedValue).Translation.XY.m128d_f64 =
         ::Invalid.TypedValue.Translation.XY.m128d_f64;
    *&(__return_storage_ptr__->TypedValue).Translation.ZW.m128d_f64 =
         ::Invalid.TypedValue.Translation.ZW.m128d_f64;
    *&(__return_storage_ptr__->TypedValue).Scale3D.XY.m128d_f64 =
         ::Invalid.TypedValue.Scale3D.XY.m128d_f64;
    *&(__return_storage_ptr__->TypedValue).Scale3D.ZW.m128d_f64 =
         ::Invalid.TypedValue.Scale3D.ZW.m128d_f64;
  }
  return __return_storage_ptr__;
}

// GetParentTransform @ 1464b5680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TOptional<UE::Math::TTransform<double>_> * __thiscall
UE::TransformConstraintUtil::FConstraintsInteractionCache::GetParentTransform
          (FConstraintsInteractionCache *this,
          TOptional<UE::Math::TTransform<double>_> *__return_storage_ptr__,UObject *param_1,
          FName *param_2)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  uint uVar5;
  UWorld *pUVar6;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *this_00;
  TOptional<UE::Math::TTransform<double>_> *pTVar7;
  UObject *pUVar8;
  UClass *pUVar9;
  double *pdVar10;
  uint uVar11;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  <lambda_1> local_a8;
  undefined1 local_98 [96];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  uVar5 = TransformConstraintUtil::Private::GetHandleHash(param_1,param_2);
  if (uVar5 == 0) {
    __return_storage_ptr__->bIsSet = false;
    bVar4 = ::Invalid.bIsSet;
    __return_storage_ptr__->bIsSet = ::Invalid.bIsSet;
    if (bVar4 != false) {
      *&(__return_storage_ptr__->TypedValue).Rotation.XY.m128d_f64 =
           ::Invalid.TypedValue.Rotation.XY.m128d_f64;
      *&(__return_storage_ptr__->TypedValue).Rotation.ZW.m128d_f64 =
           ::Invalid.TypedValue.Rotation.ZW.m128d_f64;
      *&(__return_storage_ptr__->TypedValue).Translation.XY.m128d_f64 =
           ::Invalid.TypedValue.Translation.XY.m128d_f64;
      *&(__return_storage_ptr__->TypedValue).Translation.ZW.m128d_f64 =
           ::Invalid.TypedValue.Translation.ZW.m128d_f64;
      *&(__return_storage_ptr__->TypedValue).Scale3D.XY.m128d_f64 =
           ::Invalid.TypedValue.Scale3D.XY.m128d_f64;
      *&(__return_storage_ptr__->TypedValue).Scale3D.ZW.m128d_f64 =
           ::Invalid.TypedValue.Scale3D.ZW.m128d_f64;
    }
  }
  else {
    pUVar6 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
    this_00 = Get(this,uVar5,pUVar6);
    uVar5 = TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
            FindLastByPredicate<_UE::TransformConstraintUtil::GetLastActiveConstraintIndex_::__l2::<lambda_1>_>
                      (this_00,local_a8,this_00->ArrayNum);
    if (uVar5 != 0xffffffff) {
      uVar11 = 0;
      if ((int)uVar5 < this_00->ArrayNum) {
        uVar11 = ~uVar5 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (local_b8 = (longlong)(int)uVar5, local_b0 = (longlong)this_00->ArrayNum,
         bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TOptional<UE::Math::TTransform<double>_> *)(*pcVar2)();
        return pTVar7;
      }
      pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                   ((this_00->AllocatorInstance).Data + (longlong)(int)uVar5 * 8));
      if (pUVar8 != (UObject *)0x0) {
        pUVar9 = UTickableTransformConstraint::StaticClass();
        iVar1 = (int)pUVar9->_padding_;
        if ((((iVar1 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
              &pUVar9->_padding_)) && (*(longlong *)&pUVar8[3].field_0x18 != 0)) &&
           ((*(uint *)(*(longlong *)&pUVar8[3].field_0x18 + 8) >> 0x1e & 1) == 0)) {
          pdVar10 = (double *)
                    (**(code **)(**(longlong **)&pUVar8[3].field_0x18 + 0x2c8))
                              (*(longlong **)&pUVar8[3].field_0x18,local_98);
          dVar3 = pdVar10[1];
          (__return_storage_ptr__->TypedValue).Rotation.XY.m128d_f64[0] = *pdVar10;
          (__return_storage_ptr__->TypedValue).Rotation.XY.m128d_f64[1] = dVar3;
          dVar3 = pdVar10[3];
          (__return_storage_ptr__->TypedValue).Rotation.ZW.m128d_f64[0] = pdVar10[2];
          (__return_storage_ptr__->TypedValue).Rotation.ZW.m128d_f64[1] = dVar3;
          dVar3 = pdVar10[5];
          (__return_storage_ptr__->TypedValue).Translation.XY.m128d_f64[0] = pdVar10[4];
          (__return_storage_ptr__->TypedValue).Translation.XY.m128d_f64[1] = dVar3;
          dVar3 = pdVar10[7];
          (__return_storage_ptr__->TypedValue).Translation.ZW.m128d_f64[0] = pdVar10[6];
          (__return_storage_ptr__->TypedValue).Translation.ZW.m128d_f64[1] = dVar3;
          dVar3 = pdVar10[9];
          (__return_storage_ptr__->TypedValue).Scale3D.XY.m128d_f64[0] = pdVar10[8];
          (__return_storage_ptr__->TypedValue).Scale3D.XY.m128d_f64[1] = dVar3;
          dVar3 = pdVar10[0xb];
          (__return_storage_ptr__->TypedValue).Scale3D.ZW.m128d_f64[0] = pdVar10[10];
          (__return_storage_ptr__->TypedValue).Scale3D.ZW.m128d_f64[1] = dVar3;
          __return_storage_ptr__->bIsSet = true;
          return __return_storage_ptr__;
        }
      }
    }
    __return_storage_ptr__->bIsSet = false;
    bVar4 = ::Invalid.bIsSet;
    __return_storage_ptr__->bIsSet = ::Invalid.bIsSet;
    if (bVar4 != false) {
      *&(__return_storage_ptr__->TypedValue).Rotation.XY.m128d_f64 =
           ::Invalid.TypedValue.Rotation.XY.m128d_f64;
      *&(__return_storage_ptr__->TypedValue).Rotation.ZW.m128d_f64 =
           ::Invalid.TypedValue.Rotation.ZW.m128d_f64;
      *&(__return_storage_ptr__->TypedValue).Translation.XY.m128d_f64 =
           ::Invalid.TypedValue.Translation.XY.m128d_f64;
      *&(__return_storage_ptr__->TypedValue).Translation.ZW.m128d_f64 =
           ::Invalid.TypedValue.Translation.ZW.m128d_f64;
      *&(__return_storage_ptr__->TypedValue).Scale3D.XY.m128d_f64 =
           ::Invalid.TypedValue.Scale3D.XY.m128d_f64;
      *&(__return_storage_ptr__->TypedValue).Scale3D.ZW.m128d_f64 =
           ::Invalid.TypedValue.Scale3D.ZW.m128d_f64;
    }
  }
  return __return_storage_ptr__;
}

// HasAnyActiveConstraint @ 1464b70c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UE::TransformConstraintUtil::FConstraintsInteractionCache::HasAnyActiveConstraint
          (FConstraintsInteractionCache *this,uint param_1,UWorld *param_2)

{
  int iVar1;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *this_00;
  <lambda_1> local_res20;
  
  this_00 = Get(this,param_1,param_2);
  iVar1 = TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
          FindLastByPredicate<_UE::TransformConstraintUtil::GetLastActiveConstraintIndex_::__l2::<lambda_1>_>
                    (this_00,local_res20,this_00->ArrayNum);
  return iVar1 != -1;
}

// HasAnyActiveConstraint @ 1464b70f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UE::TransformConstraintUtil::FConstraintsInteractionCache::HasAnyActiveConstraint
          (FConstraintsInteractionCache *this,UObject *param_1,UWorld *param_2)

{
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *this_00;
  TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *pTVar1;
  undefined1 local_res20;
  
  this_00 = Get(this,param_1,param_2);
  pTVar1 = TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_UE::TransformConstraintUtil::FConstraintsInteractionCache::HasAnyActiveConstraint_::__l2::<lambda_1>_>
                     (this_00,local_res20);
  return pTVar1 != (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)0x0;
}

// HasAnyActiveConstraint @ 1464b7120

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UE::TransformConstraintUtil::FConstraintsInteractionCache::HasAnyActiveConstraint
          (FConstraintsInteractionCache *this,UObject *param_1,FName *param_2)

{
  uint uVar1;
  int iVar2;
  UWorld *pUVar3;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *this_00;
  <lambda_1> local_res20;
  
  uVar1 = TransformConstraintUtil::Private::GetHandleHash(param_1,param_2);
  if (uVar1 == 0) {
    return false;
  }
  pUVar3 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
  this_00 = Get(this,uVar1,pUVar3);
  iVar2 = TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
          FindLastByPredicate<_UE::TransformConstraintUtil::GetLastActiveConstraintIndex_::__l2::<lambda_1>_>
                    (this_00,local_res20,this_00->ArrayNum);
  return iVar2 != -1;
}

// HasAnyDependency @ 1464b71a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UE::TransformConstraintUtil::FConstraintsInteractionCache::HasAnyDependency
          (FConstraintsInteractionCache *this,UObject *param_1,UObject *param_2,UWorld *param_3)

{
  int iVar1;
  bool bVar2;
  undefined1 auStackY_a8 [32];
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_4c = 0x80;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_44 = 0;
  local_38 = (ForElementType<FSetElementId>)0x0;
  local_30 = 0;
  local_48 = 0xffffffff;
  bVar2 = HasAnyDependencyInternal
                    (this,param_1,param_2,param_3,
                     (TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *)local_78);
  local_30 = 0;
  if (local_38 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_38);
  }
  iVar1 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return bVar2;
}

// HasAnyDependencyInternal @ 1464b72a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UE::TransformConstraintUtil::FConstraintsInteractionCache::HasAnyDependencyInternal
          (FConstraintsInteractionCache *this,UObject *param_1,UObject *param_2,UWorld *param_3,
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *param_4)

{
  code *pcVar1;
  UWorld *pUVar2;
  FConstraintsInteractionCache *this_00;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar3;
  bool bVar4;
  undefined1 uVar5;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar6;
  TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *pTVar7;
  ulonglong uVar8;
  byte bVar9;
  uint uVar10;
  ForAnyElementType FVar11;
  ulonglong uVar12;
  longlong lVar13;
  ForElementType<FSetElementId> FVar14;
  uint uVar15;
  int iVar16;
  FScriptContainerElement *pFVar17;
  ulonglong uVar18;
  ForElementType<unsigned_int> FVar19;
  FScriptContainerElement *pFVar20;
  undefined1 auStackY_1c8 [32];
  <lambda_1> local_198 [8];
  undefined8 local_190;
  int local_188;
  uint uStack_184;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_180;
  undefined4 local_178;
  uint uStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_168;
  int iStack_160;
  uint uStack_15c;
  TBitArray<FDefaultBitArrayAllocator> *local_158;
  undefined4 uStack_150;
  uint uStack_14c;
  int local_148;
  uint uStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  int local_134;
  UObject *local_130;
  UObject *local_128;
  UWorld *local_120;
  FConstraintsInteractionCache *local_118;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_108;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  UObject *local_b8;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_b0;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_a8;
  FScriptContainerElement local_70 [8];
  ForAnyElementType local_68;
  uint local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  if ((((param_1 == (UObject *)0x0) || (param_2 == (UObject *)0x0)) || (param_3 == (UWorld *)0x0))
     || (param_1 == param_2)) {
    return false;
  }
  local_128 = param_1;
  local_120 = param_3;
  local_118 = this;
  pTVar6 = Get(this,param_1,param_3);
  pTVar7 = TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_UE::TransformConstraintUtil::FConstraintsInteractionCache::HasAnyActiveConstraint_::__l2::<lambda_1>_>
                     (pTVar6,local_198[0]);
  if (pTVar7 == (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)0x0) {
    return false;
  }
  pTVar6 = Get(this,param_1,param_3);
  local_a8.AllocationFlags.MaxBits = 0x80;
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  local_a8.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_a8.AllocationFlags.NumBits = 0;
  local_a8.NumFreeIndices = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  local_a8.FirstFreeIndex = -1;
  uVar10 = pTVar6->ArrayNum;
  local_190 = 1;
  if (uVar10 != 0) {
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidSetNum((longlong)(int)uVar10);
    }
    TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve(&local_a8,uVar10);
    uVar15 = 1;
    if (3 < uVar10) {
      uVar12 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_138 = (undefined4)lVar13;
      uVar15 = 1 << ((byte)lVar13 & 0x1f);
    }
    if ((local_60 == 0) || ((int)local_60 < (int)uVar15)) {
      local_60 = uVar15;
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,0,4);
      }
      if (uVar15 != 0) {
        uVar10 = uVar15;
        if (uVar15 < 2) {
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            uVar10 = 0;
            goto LAB_1464b740a;
          }
        }
        else {
LAB_1464b740a:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar10,4)
          ;
        }
        if (0 < (int)uVar15) {
          uVar18 = (ulonglong)uVar15;
          uVar12 = 0;
          do {
            FVar11.Data = local_70;
            if (local_68.Data != (FScriptContainerElement *)0x0) {
              FVar11.Data = local_68.Data;
            }
            uVar8 = uVar12 & (longlong)(int)uVar15 - 1U;
            uVar12 = uVar12 + 1;
            *(undefined4 *)(FVar11.Data + uVar8 * 4) = 0xffffffff;
            uVar18 = uVar18 - 1;
          } while (uVar18 != 0);
        }
      }
      if (local_60 != 0) {
        pTStack_180 = &local_a8.AllocationFlags;
        local_188 = 0;
        uStack_184 = 1;
        uStack_174 = 0;
        iStack_170 = 0;
        if (local_a8.AllocationFlags.NumBits != 0) {
          FVar19 = (ForElementType<unsigned_int>)&local_a8.AllocationFlags;
          if (local_a8.AllocationFlags.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_int>)0x0) {
            FVar19 = local_a8.AllocationFlags.AllocatorInstance.SecondaryData;
          }
          uVar10 = *(uint *)FVar19;
          while (uVar10 == 0) {
            iStack_170 = iStack_170 + 0x20;
            lVar13 = (longlong)local_188;
            local_188 = local_188 + 1;
            if ((int)((local_a8.AllocationFlags.NumBits - 1U) +
                     ((int)(local_a8.AllocationFlags.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
                local_188) goto LAB_1464b74fe;
            uVar10 = *(uint *)((uchar *)((longlong)FVar19 + 4) + lVar13 * 4);
          }
          uStack_184 = -uVar10 & uVar10;
          uVar12 = (ulonglong)uStack_184 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          local_134 = (int)lVar13;
          uStack_174 = local_134 + -1 + iStack_170;
          if (local_a8.AllocationFlags.NumBits < (int)uStack_174) {
LAB_1464b74fe:
            uStack_174 = local_a8.AllocationFlags.NumBits;
          }
        }
        local_178 = 0xffffffff;
        local_110 = &local_a8;
        local_108._padding_ = CONCAT44(uStack_184,local_188);
        local_108.CurrentBitIndex = uStack_174;
        local_108.UnvisitedBitMask = 0xffffffff;
        local_108._28_4_ = uStack_16c;
        local_108.BaseBitIndex = iStack_170;
        local_108.Array = pTStack_180;
        uVar10 = uStack_174;
        if ((int)uStack_174 < local_a8.AllocationFlags.NumBits) {
          do {
            pFVar20 = (local_110->Data).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x10;
            uVar15 = ((uint)(*(ulonglong *)pFVar20 >> 0x14) & 0xffff ^
                     (uint)(*(ulonglong *)pFVar20 >> 4)) * -0x7a143595;
            uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
            uVar15 = (uVar15 >> 0x10 ^ uVar15) & local_60 - 1;
            *(uint *)(pFVar20 + 0xc) = uVar15;
            FVar11.Data = local_70;
            if (local_68.Data != (FScriptContainerElement *)0x0) {
              FVar11.Data = local_68.Data;
            }
            uVar12 = (longlong)(int)local_60 - 1U & (longlong)(int)uVar15;
            *(undefined4 *)(pFVar20 + 8) = *(undefined4 *)(FVar11.Data + uVar12 * 4);
            *(uint *)(FVar11.Data + uVar12 * 4) = uVar10;
            local_108.UnvisitedBitMask = local_108.UnvisitedBitMask & ~local_108._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_108);
            uVar10 = local_108.CurrentBitIndex;
          } while (local_108.CurrentBitIndex < (local_108.Array)->NumBits);
        }
      }
    }
  }
  pFVar17 = (pTVar6->AllocatorInstance).Data;
  local_b0 = &local_a8;
  pFVar20 = pFVar17 + (longlong)pTVar6->ArrayNum * 8;
  local_b8 = param_2;
  for (; pFVar17 != pFVar20; pFVar17 = pFVar17 + 8) {
    bVar4 = `UE::TransformConstraintUtil::FConstraintsInteractionCache::HasAnyDependencyInternal'::
            __l2::<lambda_1>::operator()
                      (&local_b8,(TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)pFVar17);
    if (bVar4) {
      if (pFVar17 != (FScriptContainerElement *)0x0) goto LAB_1464b78a0;
      break;
    }
  }
  uVar10 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
           -0x7a143595;
  uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
  if (*(int *)&(param_4->Elements).field_0x8 != *(int *)&(param_4->Elements).field_0x34) {
    FVar14 = (param_4->Hash).SecondaryData;
    if (FVar14 == (ForElementType<FSetElementId>)0x0) {
      FVar14 = (ForElementType<FSetElementId>)&param_4->Hash;
    }
    iVar16 = *(int *)((longlong)FVar14 +
                     (ulonglong)(param_4->HashSize - 1U & (uVar10 >> 0x10 ^ uVar10)) * 4);
    if (iVar16 != -1) {
      do {
        if (*(UObject **)(*(longlong *)&param_4->Elements + (longlong)iVar16 * 0x10) == param_1)
        goto LAB_1464b770f;
        iVar16 = *(int *)(*(longlong *)&param_4->Elements + 8 + (longlong)iVar16 * 0x10);
      } while (iVar16 != -1);
    }
  }
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Emplace<UObject_*_const_&>
            (param_4,&local_130,(bool *)&local_128);
  uVar10 = local_a8.AllocationFlags.NumBits;
  iStack_160 = 0;
  local_148 = 0;
  uStack_14c = 0;
  if (local_a8.AllocationFlags.NumBits == 0) {
LAB_1464b7719:
    uStack_15c = (uint)local_190;
  }
  else {
    FVar19 = (ForElementType<unsigned_int>)&local_a8.AllocationFlags;
    if (local_a8.AllocationFlags.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FVar19 = local_a8.AllocationFlags.AllocatorInstance.SecondaryData;
    }
    uStack_15c = *(uint *)FVar19;
    while (uStack_15c == 0) {
      lVar13 = (longlong)iStack_160;
      local_148 = local_148 + 0x20;
      iStack_160 = iStack_160 + 1;
      uStack_14c = local_a8.AllocationFlags.NumBits;
      if ((int)((local_a8.AllocationFlags.NumBits - 1U) +
               ((int)(local_a8.AllocationFlags.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 < iStack_160)
      goto LAB_1464b7719;
      uStack_15c = *(uint *)((uchar *)((longlong)FVar19 + 4) + lVar13 * 4);
    }
    uStack_15c = -uStack_15c & uStack_15c;
    uVar12 = (ulonglong)uStack_15c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uStack_14c = local_148 + -1 + (int)lVar13;
    local_190 = CONCAT44(local_190._4_4_,(int)lVar13);
    if (local_a8.AllocationFlags.NumBits < (int)uStack_14c) {
      uStack_14c = local_a8.AllocationFlags.NumBits;
    }
  }
  local_168 = &local_a8;
  local_158 = &local_a8.AllocationFlags;
  uVar15 = local_a8.AllocationFlags.NumBits & 0xffffffe0;
  iStack_140 = local_a8.Data.ArrayNum - local_a8.NumFreeIndices;
  uStack_150 = 0xffffffff;
  TStack_e0.CurrentBitIndex = uStack_14c;
  TStack_e0.UnvisitedBitMask = 0xffffffff;
  TStack_e0._padding_ = CONCAT44(uStack_15c,iStack_160);
  iVar16 = local_a8.AllocationFlags.NumBits >> 5;
  TStack_e0._28_4_ = uStack_14c;
  TStack_e0.BaseBitIndex = local_148;
  uStack_c0 = CONCAT44(uStack_13c,iStack_140);
  bVar9 = (byte)local_a8.AllocationFlags.NumBits;
  uStack_144 = uStack_14c;
  local_e8 = local_168;
  TStack_e0.Array = local_158;
  if ((local_a8.AllocationFlags.NumBits < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  this_00 = local_118;
  pUVar2 = local_120;
  if (uVar10 != local_a8.AllocationFlags.NumBits) {
    FVar19 = (ForElementType<unsigned_int>)&local_a8.AllocationFlags;
    if (local_a8.AllocationFlags.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FVar19 = local_a8.AllocationFlags.AllocatorInstance.SecondaryData;
    }
    uVar10 = -1 << (bVar9 & 0x1f) & *(uint *)((longlong)FVar19 + (longlong)iVar16 * 4);
    while (uVar10 == 0) {
      lVar13 = (longlong)iVar16;
      uVar15 = uVar15 + 0x20;
      iVar16 = iVar16 + 1;
      uVar10 = local_a8.AllocationFlags.NumBits;
      if ((int)((local_a8.AllocationFlags.NumBits - 1U) +
               ((int)(local_a8.AllocationFlags.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 < iVar16)
      goto LAB_1464b781c;
      uVar10 = *(uint *)((uchar *)((longlong)FVar19 + 4) + lVar13 * 4);
    }
    uVar12 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar10 = (int)lVar13 + -1 + uVar15;
    if (local_a8.AllocationFlags.NumBits < (int)uVar10) {
      uVar10 = local_a8.AllocationFlags.NumBits;
    }
  }
LAB_1464b781c:
  while( true ) {
    pTVar3 = local_e8;
    if ((local_e8->Data).ArrayNum - local_e8->NumFreeIndices != (int)uStack_c0) {
      `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_198);
    }
    if (((TStack_e0.CurrentBitIndex == uVar10) && (TStack_e0.Array == &local_a8.AllocationFlags)) &&
       (pTVar3 == &local_a8)) goto LAB_1464b770f;
    bVar4 = HasAnyDependencyInternal
                      (this_00,*(UObject **)
                                ((pTVar3->Data).AllocatorInstance.Data +
                                (longlong)TStack_e0.CurrentBitIndex * 0x10),param_2,pUVar2,param_4);
    if (bVar4) break;
    TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
  }
LAB_1464b78a0:
  bVar4 = true;
LAB_1464b78a2:
  local_60 = 0;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_a8);
  return bVar4;
LAB_1464b770f:
  bVar4 = false;
  goto LAB_1464b78a2;
}

// RegisterNotifications @ 1464bd240

void __thiscall
UE::TransformConstraintUtil::FConstraintsInteractionCache::RegisterNotifications
          (FConstraintsInteractionCache *this)

{
  TMulticastDelegate<void___cdecl(EConstraintsManagerNotifyType,UObject_*),FDefaultDelegateUserPolicy>
  *this_00;
  FDelegateHandle FVar1;
  <lambda_1> local_res10 [3];
  
  if ((this->ConstraintsNotificationHandle).ID == 0) {
    this_00 = FConstraintsManagerController::GetNotifyDelegate();
    FVar1 = TMulticastDelegateRegistration<void___cdecl(enum_EConstraintsManagerNotifyType,UObject_*),FDefaultDelegateUserPolicy>
            ::
            AddLambda<_UE::TransformConstraintUtil::FConstraintsInteractionCache::RegisterNotifications_::__l5::<lambda_1>_>
                      (this_00,local_res10);
                    /* WARNING: Load size is inaccurate */
    (this->ConstraintsNotificationHandle).ID = *FVar1.ID;
  }
  return;
}

// Reset @ 1464bf7d0

void __thiscall
UE::TransformConstraintUtil::FConstraintsInteractionCache::Reset(FConstraintsInteractionCache *this)

{
  TSet<TTuple<unsigned_int,TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned_int,TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)this);
  TSet<TTuple<TObjectKey<UObject>,TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UObject>,TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<TObjectKey<UObject>,TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UObject>,TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)&this->PerTargetConstraints);
  return;
}

// UnregisterNotifications @ 1464c3d30

void __thiscall
UE::TransformConstraintUtil::FConstraintsInteractionCache::UnregisterNotifications
          (FConstraintsInteractionCache *this)

{
  FDelegateHandle FVar1;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  
  if ((this->ConstraintsNotificationHandle).ID != 0) {
    this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
              FConstraintsManagerController::GetNotifyDelegate();
    FVar1.ID = (this->ConstraintsNotificationHandle).ID;
    if (FVar1.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance(this_00,FVar1);
    }
    (this->ConstraintsNotificationHandle).ID = 0;
  }
  return;
}

