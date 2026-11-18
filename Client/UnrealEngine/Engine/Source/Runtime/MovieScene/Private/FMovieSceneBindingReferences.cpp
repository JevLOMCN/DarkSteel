// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 23

// StaticStruct @ 1461e5780

UScriptStruct * __cdecl FMovieSceneBindingReferences::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneBindingReferences.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneBindingReferences.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneBindingReferences,(UObject *)pUVar1,
                         L"MovieSceneBindingReferences");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneBindingReferences.OuterSingleton;
}

// AddBinding @ 1462048e0

FMovieSceneBindingReference * __thiscall
FMovieSceneBindingReferences::AddBinding
          (FMovieSceneBindingReferences *this,FGuid *param_1,FUniversalObjectLocator *param_2)

{
  EFragmentTypeFlags EVar1;
  int iVar2;
  FMovieSceneBindingReference *pFVar3;
  TLess<void> local_res8;
  FMovieSceneBindingReference local_38;
  
  iVar2 = AlgoImpl::
          UpperBoundInternal<FMovieSceneBindingReference_const_,int,FGuid,FGuid_FMovieSceneBindingReference::*,TLess<void>_>
                    ((FMovieSceneBindingReference *)(this->SortedReferences).AllocatorInstance.Data,
                     (this->SortedReferences).ArrayNum,param_1,(pdm_2fa4d329)0x0,local_res8);
  local_38.Locator.Fragments.AllocatorInstance.Data = (param_2->Fragments).AllocatorInstance.Data;
  local_38.ID.A = param_1->A;
  local_38.ID.B = param_1->B;
  local_38.ID.C = param_1->C;
  local_38.ID.D = param_1->D;
  (param_2->Fragments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Locator.Fragments.ArrayNum = (param_2->Fragments).ArrayNum;
  local_38.Locator.Fragments.ArrayMax = (param_2->Fragments).ArrayMax;
  (param_2->Fragments).ArrayNum = 0;
  (param_2->Fragments).ArrayMax = 0;
  local_38.ResolveFlags = None;
  local_38.CustomBinding.field0_0x0.DebugPtr = (TObjectPtr<UMovieSceneCustomBinding>_u_0)0x0;
  pFVar3 = TArray<FMovieSceneBindingReference,TSizedDefaultAllocator<32>_>::Insert_GetRef
                     (&this->SortedReferences,&local_38,iVar2);
  DestructItems<FUniversalObjectLocatorFragment,int>
            ((FUniversalObjectLocatorFragment *)local_38.Locator.Fragments.AllocatorInstance.Data,
             local_38.Locator.Fragments.ArrayNum);
  if ((FUniversalObjectLocatorFragment *)local_38.Locator.Fragments.AllocatorInstance.Data !=
      (FUniversalObjectLocatorFragment *)0x0) {
    FMemory::Free(local_38.Locator.Fragments.AllocatorInstance.Data);
  }
  EVar1 = FUniversalObjectLocator::GetDefaultFlags(&pFVar3->Locator);
  if ((EVar1 & (LoadedByDefault|CanBeLoaded)) == (LoadedByDefault|CanBeLoaded)) {
    pFVar3->ResolveFlags = pFVar3->ResolveFlags | Load;
  }
  return pFVar3;
}

// AddBinding @ 1462049b0

FMovieSceneBindingReference * __thiscall
FMovieSceneBindingReferences::AddBinding
          (FMovieSceneBindingReferences *this,FGuid *param_1,FUniversalObjectLocator *param_2,
          ELocatorResolveFlags param_3,UMovieSceneCustomBinding *param_4)

{
  int iVar1;
  FMovieSceneBindingReference *pFVar2;
  TLess<void> local_res20;
  FMovieSceneBindingReference local_48;
  
  iVar1 = AlgoImpl::
          UpperBoundInternal<FMovieSceneBindingReference_const_,int,FGuid,FGuid_FMovieSceneBindingReference::*,TLess<void>_>
                    ((FMovieSceneBindingReference *)(this->SortedReferences).AllocatorInstance.Data,
                     (this->SortedReferences).ArrayNum,param_1,(pdm_2fa4d329)0x0,local_res20);
  local_48.ID.A = param_1->A;
  local_48.ID.B = param_1->B;
  local_48.ID.C = param_1->C;
  local_48.ID.D = param_1->D;
  local_48.Locator.Fragments.AllocatorInstance.Data = (param_2->Fragments).AllocatorInstance.Data;
  (param_2->Fragments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Locator.Fragments.ArrayNum = (param_2->Fragments).ArrayNum;
  local_48.Locator.Fragments.ArrayMax = (param_2->Fragments).ArrayMax;
  (param_2->Fragments).ArrayNum = 0;
  (param_2->Fragments).ArrayMax = 0;
  local_48.CustomBinding.field0_0x0.DebugPtr = (TObjectPtr<UMovieSceneCustomBinding>_u_0)param_4;
  local_48.ResolveFlags = param_3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_4 != (UMovieSceneCustomBinding *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_4);
  }
  pFVar2 = TArray<FMovieSceneBindingReference,TSizedDefaultAllocator<32>_>::Insert_GetRef
                     (&this->SortedReferences,&local_48,iVar1);
  DestructItems<FUniversalObjectLocatorFragment,int>
            ((FUniversalObjectLocatorFragment *)local_48.Locator.Fragments.AllocatorInstance.Data,
             local_48.Locator.Fragments.ArrayNum);
  if ((FUniversalObjectLocatorFragment *)local_48.Locator.Fragments.AllocatorInstance.Data !=
      (FUniversalObjectLocatorFragment *)0x0) {
    FMemory::Free(local_48.Locator.Fragments.AllocatorInstance.Data);
  }
  return pFVar2;
}

// AddOrReplaceBinding @ 1462056c0

/* WARNING: Type propagation algorithm not settling */

FMovieSceneBindingReference * __thiscall
FMovieSceneBindingReferences::AddOrReplaceBinding
          (FMovieSceneBindingReferences *this,FGuid *param_1,FUniversalObjectLocator *param_2,
          int param_3)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  EFragmentTypeFlags EVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  FMovieSceneBindingReference *pFVar8;
  uint uVar9;
  longlong lVar10;
  TLess<void> local_res20;
  FMovieSceneBindingReference local_88;
  FMovieSceneBindingReference local_58;
  
  iVar7 = (this->SortedReferences).ArrayNum;
  pFVar8 = (FMovieSceneBindingReference *)(this->SortedReferences).AllocatorInstance.Data;
  if (-1 < param_3) {
    iVar5 = AlgoImpl::
            LowerBoundInternal<FMovieSceneBindingReference_const_,int,FGuid,FGuid_FMovieSceneBindingReference::*,TLess<void>_>
                      (pFVar8,iVar7,param_1,(pdm_2fa4d329)0x0,local_res20);
    uVar9 = iVar5 + param_3;
    if ((int)uVar9 < iVar7) {
      if (((int)uVar9 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar8 = (FMovieSceneBindingReference *)(*pcVar1)();
        return pFVar8;
      }
      pFVar8 = (FMovieSceneBindingReference *)(this->SortedReferences).AllocatorInstance.Data;
      lVar10 = (longlong)(int)uVar9;
      if (((pFVar8[lVar10].ID.D == param_1->D && pFVar8[lVar10].ID.C == param_1->C) &&
          pFVar8[lVar10].ID.B == param_1->B) && param_1->A == pFVar8[lVar10].ID.A) {
        local_58.Locator.Fragments.AllocatorInstance.Data =
             (param_2->Fragments).AllocatorInstance.Data;
        local_58.ID.A = param_1->A;
        local_58.ID.B = param_1->B;
        local_58.ID.C = param_1->C;
        local_58.ID.D = param_1->D;
        (param_2->Fragments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_58.Locator.Fragments.ArrayNum = (param_2->Fragments).ArrayNum;
        local_58.Locator.Fragments.ArrayMax = (param_2->Fragments).ArrayMax;
        (param_2->Fragments).ArrayNum = 0;
        (param_2->Fragments).ArrayMax = 0;
        local_58.ResolveFlags = None;
        uVar6 = 0;
        if ((int)uVar9 < (this->SortedReferences).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        local_58.CustomBinding.field0_0x0.DebugPtr = (TObjectPtr<UMovieSceneCustomBinding>_u_0)0x0;
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          pFVar8 = (FMovieSceneBindingReference *)(*pcVar1)();
          return pFVar8;
        }
        FMovieSceneBindingReference::operator=
                  ((FMovieSceneBindingReference *)
                   ((this->SortedReferences).AllocatorInstance.Data + lVar10 * 0x30),&local_58);
        FVar2.Data = local_58.Locator.Fragments.AllocatorInstance.Data;
        DestructItems<FUniversalObjectLocatorFragment,int>
                  ((FUniversalObjectLocatorFragment *)
                   local_58.Locator.Fragments.AllocatorInstance.Data,
                   local_58.Locator.Fragments.ArrayNum);
        if ((FUniversalObjectLocatorFragment *)FVar2.Data != (FUniversalObjectLocatorFragment *)0x0)
        {
          FMemory::Free(FVar2.Data);
        }
        uVar6 = 0;
        if ((int)uVar9 < (this->SortedReferences).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          pFVar8 = (FMovieSceneBindingReference *)(*pcVar1)();
          return pFVar8;
        }
        return (FMovieSceneBindingReference *)
               ((this->SortedReferences).AllocatorInstance.Data + lVar10 * 0x30);
      }
    }
  }
  iVar7 = AlgoImpl::
          UpperBoundInternal<FMovieSceneBindingReference_const_,int,FGuid,FGuid_FMovieSceneBindingReference::*,TLess<void>_>
                    (pFVar8,(this->SortedReferences).ArrayNum,param_1,(pdm_2fa4d329)0x0,local_res20)
  ;
  local_88.Locator.Fragments.AllocatorInstance.Data = (param_2->Fragments).AllocatorInstance.Data;
  local_88.ID.A = param_1->A;
  local_88.ID.B = param_1->B;
  local_88.ID.C = param_1->C;
  local_88.ID.D = param_1->D;
  (param_2->Fragments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Locator.Fragments.ArrayNum = (param_2->Fragments).ArrayNum;
  local_88.Locator.Fragments.ArrayMax = (param_2->Fragments).ArrayMax;
  (param_2->Fragments).ArrayNum = 0;
  (param_2->Fragments).ArrayMax = 0;
  local_88.ResolveFlags = None;
  local_88.CustomBinding.field0_0x0.DebugPtr = (TObjectPtr<UMovieSceneCustomBinding>_u_0)0x0;
  pFVar8 = TArray<FMovieSceneBindingReference,TSizedDefaultAllocator<32>_>::Insert_GetRef
                     (&this->SortedReferences,&local_88,iVar7);
  DestructItems<FUniversalObjectLocatorFragment,int>
            ((FUniversalObjectLocatorFragment *)local_88.Locator.Fragments.AllocatorInstance.Data,
             local_88.Locator.Fragments.ArrayNum);
  if ((FUniversalObjectLocatorFragment *)local_88.Locator.Fragments.AllocatorInstance.Data !=
      (FUniversalObjectLocatorFragment *)0x0) {
    FMemory::Free(local_88.Locator.Fragments.AllocatorInstance.Data);
  }
  EVar4 = FUniversalObjectLocator::GetDefaultFlags(&pFVar8->Locator);
  if ((EVar4 & (LoadedByDefault|CanBeLoaded)) == (LoadedByDefault|CanBeLoaded)) {
    pFVar8->ResolveFlags = pFVar8->ResolveFlags | Load;
  }
  return pFVar8;
}

// AddOrReplaceBinding @ 146205960

FMovieSceneBindingReference * __thiscall
FMovieSceneBindingReferences::AddOrReplaceBinding
          (FMovieSceneBindingReferences *this,FGuid *param_1,UMovieSceneCustomBinding *param_2,
          int param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  FMovieSceneBindingReference *pFVar6;
  FUniversalObjectLocator *pFVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  uint uVar10;
  TLess<void> local_res20;
  FUniversalObjectLocator local_98;
  FMovieSceneBindingReference local_88;
  FMovieSceneBindingReference local_58;
  
  iVar5 = (this->SortedReferences).ArrayNum;
  if (-1 < param_3) {
    iVar3 = AlgoImpl::
            LowerBoundInternal<FMovieSceneBindingReference_const_,int,FGuid,FGuid_FMovieSceneBindingReference::*,TLess<void>_>
                      ((FMovieSceneBindingReference *)
                       (this->SortedReferences).AllocatorInstance.Data,iVar5,param_1,
                       (pdm_2fa4d329)0x0,local_res20);
    uVar10 = iVar3 + param_3;
    if ((int)uVar10 < iVar5) {
      if (((int)uVar10 < 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FMovieSceneBindingReference *)(*pcVar1)();
        return pFVar6;
      }
      lVar9 = (longlong)(int)uVar10 * 0x30;
      pFVar8 = (this->SortedReferences).AllocatorInstance.Data + lVar9;
      if (((*(uint *)(pFVar8 + 0xc) == param_1->D && *(uint *)(pFVar8 + 8) == param_1->C) &&
          *(uint *)(pFVar8 + 4) == param_1->B) && param_1->A == *(uint *)pFVar8) {
        local_58.ID.A = param_1->A;
        local_58.ID.B = param_1->B;
        local_58.ID.C = param_1->C;
        local_58.ID.D = param_1->D;
        FUniversalObjectLocator::FUniversalObjectLocator(&local_58.Locator);
        local_58.ResolveFlags = None;
        local_58.CustomBinding.field0_0x0 = (TObjectPtr<UMovieSceneCustomBinding>_u_0)param_2;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (param_2 != (UMovieSceneCustomBinding *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)param_2);
        }
        uVar4 = 0;
        if ((int)uVar10 < (this->SortedReferences).ArrayNum) {
          uVar4 = ~uVar10 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FMovieSceneBindingReference *)(*pcVar1)();
          return pFVar6;
        }
        FMovieSceneBindingReference::operator=
                  ((FMovieSceneBindingReference *)
                   ((this->SortedReferences).AllocatorInstance.Data + lVar9),&local_58);
        DestructItems<FUniversalObjectLocatorFragment,int>
                  ((FUniversalObjectLocatorFragment *)
                   local_58.Locator.Fragments.AllocatorInstance.Data,
                   local_58.Locator.Fragments.ArrayNum);
        if ((FUniversalObjectLocatorFragment *)local_58.Locator.Fragments.AllocatorInstance.Data !=
            (FUniversalObjectLocatorFragment *)0x0) {
          FMemory::Free(local_58.Locator.Fragments.AllocatorInstance.Data);
        }
        uVar4 = 0;
        if ((int)uVar10 < (this->SortedReferences).ArrayNum) {
          uVar4 = ~uVar10 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FMovieSceneBindingReference *)(*pcVar1)();
          return pFVar6;
        }
        return (FMovieSceneBindingReference *)
               ((this->SortedReferences).AllocatorInstance.Data + lVar9);
      }
    }
  }
  pFVar7 = FUniversalObjectLocator::FUniversalObjectLocator(&local_98);
  iVar5 = AlgoImpl::
          UpperBoundInternal<FMovieSceneBindingReference_const_,int,FGuid,FGuid_FMovieSceneBindingReference::*,TLess<void>_>
                    ((FMovieSceneBindingReference *)(this->SortedReferences).AllocatorInstance.Data,
                     (this->SortedReferences).ArrayNum,param_1,(pdm_2fa4d329)0x0,local_res20);
  local_88.Locator.Fragments.AllocatorInstance.Data = (pFVar7->Fragments).AllocatorInstance.Data;
  local_88.ID.A = param_1->A;
  local_88.ID.B = param_1->B;
  local_88.ID.C = param_1->C;
  local_88.ID.D = param_1->D;
  (pFVar7->Fragments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Locator.Fragments.ArrayNum = (pFVar7->Fragments).ArrayNum;
  local_88.Locator.Fragments.ArrayMax = (pFVar7->Fragments).ArrayMax;
  (pFVar7->Fragments).ArrayNum = 0;
  (pFVar7->Fragments).ArrayMax = 0;
  local_88.ResolveFlags = None;
  local_88.CustomBinding.field0_0x0 = (TObjectPtr<UMovieSceneCustomBinding>_u_0)param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_2 != (UMovieSceneCustomBinding *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  pFVar6 = TArray<FMovieSceneBindingReference,TSizedDefaultAllocator<32>_>::Insert_GetRef
                     (&this->SortedReferences,&local_88,iVar5);
  DestructItems<FUniversalObjectLocatorFragment,int>
            ((FUniversalObjectLocatorFragment *)local_88.Locator.Fragments.AllocatorInstance.Data,
             local_88.Locator.Fragments.ArrayNum);
  if ((FUniversalObjectLocatorFragment *)local_88.Locator.Fragments.AllocatorInstance.Data !=
      (FUniversalObjectLocatorFragment *)0x0) {
    FMemory::Free(local_88.Locator.Fragments.AllocatorInstance.Data);
  }
  DestructItems<FUniversalObjectLocatorFragment,int>
            ((FUniversalObjectLocatorFragment *)local_98.Fragments.AllocatorInstance.Data,
             local_98.Fragments.ArrayNum);
  if ((FUniversalObjectLocatorFragment *)local_98.Fragments.AllocatorInstance.Data !=
      (FUniversalObjectLocatorFragment *)0x0) {
    FMemory::Free(local_98.Fragments.AllocatorInstance.Data);
  }
  return pFVar6;
}

// FindBindingFromObject @ 1462110e0

FGuid * __thiscall
FMovieSceneBindingReferences::FindBindingFromObject
          (FMovieSceneBindingReferences *this,FGuid *__return_storage_ptr__,UObject *param_1,
          UObject *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  FUniversalObjectLocator local_28;
  
  FUniversalObjectLocator::FUniversalObjectLocator(&local_28,param_1,param_2,(UObject *)0x0);
  iVar1 = (this->SortedReferences).ArrayNum;
  pFVar5 = (this->SortedReferences).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((this->SortedReferences).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FMovieSceneBindingReference_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) break;
    bVar4 = ::operator==((FUniversalObjectLocator *)(pFVar5 + 0x10),&local_28);
    if (bVar4) {
      uVar2 = *(undefined8 *)pFVar5;
      uVar3 = *(undefined8 *)(pFVar5 + 8);
      __return_storage_ptr__->A = (int)uVar2;
      __return_storage_ptr__->B = (int)((ulonglong)uVar2 >> 0x20);
      __return_storage_ptr__->C = (int)uVar3;
      __return_storage_ptr__->D = (int)((ulonglong)uVar3 >> 0x20);
LAB_14621116e:
      DestructItems<FUniversalObjectLocatorFragment,int>
                ((FUniversalObjectLocatorFragment *)local_28.Fragments.AllocatorInstance.Data,
                 local_28.Fragments.ArrayNum);
      if ((FUniversalObjectLocatorFragment *)local_28.Fragments.AllocatorInstance.Data !=
          (FUniversalObjectLocatorFragment *)0x0) {
        FMemory::Free(local_28.Fragments.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    pFVar5 = pFVar5 + 0x30;
  }
  __return_storage_ptr__->A = 0;
  __return_storage_ptr__->B = 0;
  __return_storage_ptr__->C = 0;
  __return_storage_ptr__->D = 0;
  goto LAB_14621116e;
}

// GetAllReferences @ 146216220

TArrayView<FMovieSceneBindingReference,int> * __thiscall
FMovieSceneBindingReferences::GetAllReferences
          (FMovieSceneBindingReferences *this,
          TArrayView<FMovieSceneBindingReference,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FMovieSceneBindingReference,int> *pTVar4;
  
  iVar1 = (this->SortedReferences).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FMovieSceneBindingReference *)(this->SortedReferences).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FMovieSceneBindingReference,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetAllReferences @ 146216290

TArrayView<FMovieSceneBindingReference_const_,int> * __thiscall
FMovieSceneBindingReferences::GetAllReferences
          (FMovieSceneBindingReferences *this,
          TArrayView<FMovieSceneBindingReference_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FMovieSceneBindingReference_const_,int> *pTVar4;
  
  iVar1 = (this->SortedReferences).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FMovieSceneBindingReference *)(this->SortedReferences).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FMovieSceneBindingReference_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetCustomBinding @ 1462176a0

UMovieSceneCustomBinding * __thiscall
FMovieSceneBindingReferences::GetCustomBinding
          (FMovieSceneBindingReferences *this,FGuid *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  UMovieSceneCustomBinding *pUVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  TLess<void> TStackX_18;
  
  iVar3 = AlgoImpl::
          LowerBoundInternal<FMovieSceneBindingReference_const_,int,FGuid,FGuid_FMovieSceneBindingReference::*,TLess<void>_>
                    ((FMovieSceneBindingReference *)(this->SortedReferences).AllocatorInstance.Data,
                     (this->SortedReferences).ArrayNum,param_1,(pdm_2fa4d329)0x0,TStackX_18);
  uVar7 = param_2 + iVar3;
  if ((-1 < (int)uVar7) && ((int)uVar7 < (this->SortedReferences).ArrayNum)) {
    if (((int)uVar7 < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar5 = (UMovieSceneCustomBinding *)(*pcVar1)();
      return pUVar5;
    }
    pFVar6 = (this->SortedReferences).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x30;
    if (((*(uint *)(pFVar6 + 0xc) == param_1->D && *(uint *)(pFVar6 + 8) == param_1->C) &&
        *(uint *)(pFVar6 + 4) == param_1->B) && param_1->A == *(uint *)pFVar6) {
      uVar4 = 0;
      if ((int)uVar7 < (this->SortedReferences).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pUVar5 = (UMovieSceneCustomBinding *)(*pcVar1)();
        return pUVar5;
      }
      return *(UMovieSceneCustomBinding **)
              ((this->SortedReferences).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x30 + 0x28)
      ;
    }
  }
  return (UMovieSceneCustomBinding *)0x0;
}

// GetCustomBinding @ 1462176b0

UMovieSceneCustomBinding * __thiscall
FMovieSceneBindingReferences::GetCustomBinding
          (FMovieSceneBindingReferences *this,FGuid *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  UMovieSceneCustomBinding *pUVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  TLess<void> local_res18;
  
  iVar3 = AlgoImpl::
          LowerBoundInternal<FMovieSceneBindingReference_const_,int,FGuid,FGuid_FMovieSceneBindingReference::*,TLess<void>_>
                    ((FMovieSceneBindingReference *)(this->SortedReferences).AllocatorInstance.Data,
                     (this->SortedReferences).ArrayNum,param_1,(pdm_2fa4d329)0x0,local_res18);
  uVar7 = param_2 + iVar3;
  if ((-1 < (int)uVar7) && ((int)uVar7 < (this->SortedReferences).ArrayNum)) {
    if (((int)uVar7 < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar5 = (UMovieSceneCustomBinding *)(*pcVar1)();
      return pUVar5;
    }
    pFVar6 = (this->SortedReferences).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x30;
    if (((*(uint *)(pFVar6 + 0xc) == param_1->D && *(uint *)(pFVar6 + 8) == param_1->C) &&
        *(uint *)(pFVar6 + 4) == param_1->B) && param_1->A == *(uint *)pFVar6) {
      uVar4 = 0;
      if ((int)uVar7 < (this->SortedReferences).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pUVar5 = (UMovieSceneCustomBinding *)(*pcVar1)();
        return pUVar5;
      }
      return *(UMovieSceneCustomBinding **)
              ((this->SortedReferences).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x30 + 0x28)
      ;
    }
  }
  return (UMovieSceneCustomBinding *)0x0;
}

// GetReference @ 14621c150

FMovieSceneBindingReference * __thiscall
FMovieSceneBindingReferences::GetReference
          (FMovieSceneBindingReferences *this,FGuid *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  FMovieSceneBindingReference *pFVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  TLess<void> local_res18;
  
  iVar3 = AlgoImpl::
          LowerBoundInternal<FMovieSceneBindingReference_const_,int,FGuid,FGuid_FMovieSceneBindingReference::*,TLess<void>_>
                    ((FMovieSceneBindingReference *)(this->SortedReferences).AllocatorInstance.Data,
                     (this->SortedReferences).ArrayNum,param_1,(pdm_2fa4d329)0x0,local_res18);
  uVar7 = param_2 + iVar3;
  if ((-1 < (int)uVar7) && ((int)uVar7 < (this->SortedReferences).ArrayNum)) {
    if (((int)uVar7 < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FMovieSceneBindingReference *)(*pcVar1)();
      return pFVar5;
    }
    pFVar6 = (this->SortedReferences).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x30;
    if (((*(uint *)(pFVar6 + 0xc) == param_1->D && *(uint *)(pFVar6 + 8) == param_1->C) &&
        *(uint *)(pFVar6 + 4) == param_1->B) && param_1->A == *(uint *)pFVar6) {
      uVar4 = 0;
      if ((int)uVar7 < (this->SortedReferences).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FMovieSceneBindingReference *)(*pcVar1)();
        return pFVar5;
      }
      return (FMovieSceneBindingReference *)
             ((this->SortedReferences).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x30);
    }
  }
  return (FMovieSceneBindingReference *)0x0;
}

// GetReferences @ 14621c280

TArrayView<FMovieSceneBindingReference_const_,int> * __thiscall
FMovieSceneBindingReferences::GetReferences
          (FMovieSceneBindingReferences *this,
          TArrayView<FMovieSceneBindingReference_const_,int> *__return_storage_ptr__,FGuid *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  TArrayView<FMovieSceneBindingReference_const_,int> *pTVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  FMovieSceneBindingReference *pFVar10;
  TLess<void> local_res8;
  
  pFVar10 = (FMovieSceneBindingReference *)(this->SortedReferences).AllocatorInstance.Data;
  iVar1 = (this->SortedReferences).ArrayNum;
  uVar4 = AlgoImpl::
          LowerBoundInternal<FMovieSceneBindingReference_const_,int,FGuid,FGuid_FMovieSceneBindingReference::*,TLess<void>_>
                    (pFVar10,iVar1,param_1,(pdm_2fa4d329)0x0,local_res8);
  iVar8 = 0;
  if ((int)uVar4 < iVar1) {
    lVar9 = (longlong)(int)uVar4 * 0x30;
    uVar7 = uVar4;
    do {
      uVar5 = 0;
      if ((int)uVar7 < (this->SortedReferences).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArrayView<FMovieSceneBindingReference_const_,int> *)(*pcVar2)();
        return pTVar6;
      }
      pFVar10 = (FMovieSceneBindingReference *)(this->SortedReferences).AllocatorInstance.Data;
      if (((*(uint *)((longlong)&(pFVar10->ID).D + lVar9) != param_1->D ||
           *(uint *)((longlong)&(pFVar10->ID).C + lVar9) != param_1->C) ||
          *(uint *)((longlong)&(pFVar10->ID).B + lVar9) != param_1->B) ||
          *(uint *)((longlong)&(pFVar10->ID).A + lVar9) != param_1->A) break;
      iVar8 = iVar8 + 1;
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 0x30;
    } while ((int)uVar7 < iVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar8;
  __return_storage_ptr__->DataPtr = pFVar10 + (int)uVar4;
  if ((iVar8 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TArrayView<FMovieSceneBindingReference_const_,int> *)(*pcVar2)();
    return pTVar6;
  }
  return __return_storage_ptr__;
}

// HasBinding @ 14621ded0

bool __thiscall
FMovieSceneBindingReferences::HasBinding(FMovieSceneBindingReferences *this,FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  TLess<void> local_res8;
  
  iVar4 = AlgoImpl::
          LowerBoundInternal<FMovieSceneBindingReference_const_,int,FGuid,FGuid_FMovieSceneBindingReference::*,TLess<void>_>
                    ((FMovieSceneBindingReference *)(this->SortedReferences).AllocatorInstance.Data,
                     (this->SortedReferences).ArrayNum,param_1,(pdm_2fa4d329)0x0,local_res8);
  if ((-1 < iVar4) && (iVar4 < (this->SortedReferences).ArrayNum)) {
    if (iVar4 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    pFVar5 = (this->SortedReferences).AllocatorInstance.Data + (longlong)iVar4 * 0x30;
    if (((*(uint *)(pFVar5 + 0xc) == param_1->D && *(uint *)(pFVar5 + 8) == param_1->C) &&
        *(uint *)(pFVar5 + 4) == param_1->B) && param_1->A == *(uint *)pFVar5) {
      return true;
    }
  }
  return false;
}

// RemoveBinding @ 14622f300

/* WARNING: Type propagation algorithm not settling */

void __thiscall
FMovieSceneBindingReferences::RemoveBinding(FMovieSceneBindingReferences *this,FGuid *param_1)

{
  FMovieSceneBindingReference *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  FMovieSceneBindingReference *pFVar7;
  uint uVar8;
  TLess<void> local_res8;
  
  iVar5 = (this->SortedReferences).ArrayNum;
  uVar4 = AlgoImpl::
          LowerBoundInternal<FMovieSceneBindingReference_const_,int,FGuid,FGuid_FMovieSceneBindingReference::*,TLess<void>_>
                    ((FMovieSceneBindingReference *)(this->SortedReferences).AllocatorInstance.Data,
                     iVar5,param_1,(pdm_2fa4d329)0x0,local_res8);
  if ((-1 < (int)uVar4) && ((int)uVar4 < iVar5)) {
    if (((int)uVar4 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = (FMovieSceneBindingReference *)(this->SortedReferences).AllocatorInstance.Data;
    pFVar7 = pFVar1 + (int)uVar4;
    if ((((pFVar7->ID).D == param_1->D && (pFVar7->ID).C == param_1->C) &&
        (pFVar7->ID).B == param_1->B) && param_1->A == (pFVar7->ID).A) {
      iVar5 = AlgoImpl::
              UpperBoundInternal<FMovieSceneBindingReference_const_,int,FGuid,FGuid_FMovieSceneBindingReference::*,TLess<void>_>
                        (pFVar1,(this->SortedReferences).ArrayNum,param_1,(pdm_2fa4d329)0x0,
                         local_res8);
      uVar8 = iVar5 - uVar4;
      uVar6 = 0;
      if (iVar5 <= (this->SortedReferences).ArrayNum) {
        uVar6 = (~uVar8 & ~uVar4) >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar8 != 0) {
        TArray<FMovieSceneBindingReference,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (&this->SortedReferences,uVar4,uVar8);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,(ForAnyElementType *)this,(this->SortedReferences).ArrayNum,
                   &(this->SortedReferences).ArrayMax);
      }
    }
  }
  return;
}

// RemoveInvalidBindings @ 14622fa70

void __thiscall
FMovieSceneBindingReferences::RemoveInvalidBindings
          (FMovieSceneBindingReferences *this,
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulong64 uVar6;
  uint uVar7;
  FGuid *pFVar8;
  longlong lVar9;
  TLess<void> local_res8;
  
  iVar1 = (this->SortedReferences).ArrayNum;
  uVar7 = iVar1 - 1;
  if (-1 < (int)uVar7) {
    lVar9 = (longlong)(int)uVar7 * 0x30;
    do {
      uVar4 = 0;
      if ((int)uVar7 < (this->SortedReferences).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar8 = (FGuid *)((this->SortedReferences).AllocatorInstance.Data + lVar9);
      uVar6 = CityHash64((char *)pFVar8,0x10);
      iVar5 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindIndexByHash<FGuid>
                        (param_1,(uint)uVar6,pFVar8);
      if (iVar5 == -1) {
        uVar4 = 0;
        if ((int)uVar7 < (this->SortedReferences).ArrayNum) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        TArray<FMovieSceneBindingReference,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (&this->SortedReferences,uVar7);
      }
      lVar9 = lVar9 + -0x30;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  iVar5 = (this->SortedReferences).ArrayNum;
  if (iVar5 == iVar1) {
    return;
  }
  AlgoImpl::
  IntroSortInternal<FMovieSceneBindingReference,int,UE::Core::Private::TProjectionMemberData<FGuid_FMovieSceneBindingReference::*>,TLess<void>_>
            ((FMovieSceneBindingReference *)(this->SortedReferences).AllocatorInstance.Data,iVar5,
             (TProjectionMemberData<FGuid_FMovieSceneBindingReference::*>)0x0,local_res8);
  return;
}

// RemoveInvalidObjects @ 14622fbe0

void __thiscall
FMovieSceneBindingReferences::RemoveInvalidObjects
          (FMovieSceneBindingReferences *this,FGuid *param_1,UObject *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  UObject *this_00;
  UClass *pUVar6;
  longlong *plVar7;
  UClass *pUVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  TLess<void> local_res8;
  
  iVar9 = (this->SortedReferences).ArrayNum;
  iVar4 = AlgoImpl::
          LowerBoundInternal<FMovieSceneBindingReference_const_,int,FGuid,FGuid_FMovieSceneBindingReference::*,TLess<void>_>
                    ((FMovieSceneBindingReference *)(this->SortedReferences).AllocatorInstance.Data,
                     iVar9,param_1,(pdm_2fa4d329)0x0,local_res8);
  uVar12 = (ulonglong)iVar4;
  if (iVar4 < iVar9) {
    lVar14 = uVar12 * 0x30;
    do {
      uVar11 = (uint)uVar12;
      uVar13 = ~uVar11 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar11 < iVar9) {
        uVar5 = uVar13;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar10 = (this->SortedReferences).AllocatorInstance.Data + lVar14;
      if (((*(uint *)(pFVar10 + 0xc) != param_1->D || *(uint *)(pFVar10 + 8) != param_1->C) ||
          *(uint *)(pFVar10 + 4) != param_1->B) || *(uint *)pFVar10 != param_1->A) {
        return;
      }
      uVar5 = 0;
      if ((int)uVar11 < (this->SortedReferences).ArrayNum) {
        uVar5 = uVar13;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = FUniversalObjectLocator::SyncFind
                          ((FUniversalObjectLocator *)
                           ((this->SortedReferences).AllocatorInstance.Data + lVar14 + 0x10),param_2
                          );
      if (this_00 == (UObject *)0x0) {
LAB_14622fd8f:
        uVar5 = 0;
        if ((int)uVar11 < (this->SortedReferences).ArrayNum) {
          uVar5 = uVar13;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar10 = (this->SortedReferences).AllocatorInstance.Data + lVar14;
        DestructItems<FUniversalObjectLocatorFragment,int>
                  (*(FUniversalObjectLocatorFragment **)(pFVar10 + 0x10),*(int *)(pFVar10 + 0x18));
        if (*(void **)(pFVar10 + 0x10) != (void *)0x0) {
          FMemory::Free(*(void **)(pFVar10 + 0x10));
        }
        iVar9 = (this->SortedReferences).ArrayNum + ~uVar11;
        if (iVar9 != 0) {
          memmove(pFVar10,pFVar10 + 0x30,(longlong)iVar9 * 0x30);
        }
        piVar1 = &(this->SortedReferences).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,(ForAnyElementType *)this,(this->SortedReferences).ArrayNum,
                   &(this->SortedReferences).ArrayMax);
      }
      else {
        pUVar6 = Z_Construct_UClass_UMovieSceneBoundObjectProxy_NoRegister();
        plVar7 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar6);
        if (plVar7 == (longlong *)0x0) {
          pUVar6 = *(UClass **)&this_00->field_0x10;
          pUVar8 = Z_Construct_UClass_UMovieSceneBoundObjectProxy_NoRegister();
          bVar3 = UClass::ImplementsInterface(pUVar6,pUVar8);
          if (bVar3) {
            this_00 = IMovieSceneBoundObjectProxy::Execute_BP_GetBoundObjectForSequencer
                                (this_00,this_00);
            goto LAB_14622fd70;
          }
        }
        else {
          this_00 = (UObject *)(**(code **)(*plVar7 + 0x10))(plVar7,this_00);
LAB_14622fd70:
          if (this_00 == (UObject *)0x0) goto LAB_14622fd8f;
        }
        if ((*(uint *)&this_00->field_0x8 >> 0x1e & 1) != 0) goto LAB_14622fd8f;
        uVar11 = uVar11 + 1;
        lVar14 = lVar14 + 0x30;
      }
      iVar9 = (this->SortedReferences).ArrayNum;
      uVar12 = (ulonglong)(uVar11 + 1);
      lVar14 = lVar14 + 0x30;
    } while ((int)(uVar11 + 1) < iVar9);
  }
  return;
}

// RemoveObjects @ 14622ffc0

void __thiscall
FMovieSceneBindingReferences::RemoveObjects
          (FMovieSceneBindingReferences *this,FGuid *param_1,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2,UObject *param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  UObject *this_00;
  UClass *pUVar6;
  longlong *plVar7;
  UClass *pUVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  TLess<void> local_res8;
  
  iVar10 = (this->SortedReferences).ArrayNum;
  iVar4 = AlgoImpl::
          LowerBoundInternal<FMovieSceneBindingReference_const_,int,FGuid,FGuid_FMovieSceneBindingReference::*,TLess<void>_>
                    ((FMovieSceneBindingReference *)(this->SortedReferences).AllocatorInstance.Data,
                     iVar10,param_1,(pdm_2fa4d329)0x0,local_res8);
  uVar13 = (ulonglong)iVar4;
  if (iVar4 < iVar10) {
    lVar15 = uVar13 * 0x30;
    do {
      uVar12 = (uint)uVar13;
      uVar14 = ~uVar12 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar12 < iVar10) {
        uVar5 = uVar14;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar11 = (this->SortedReferences).AllocatorInstance.Data + lVar15;
      if (((*(uint *)(pFVar11 + 0xc) != param_1->D || *(uint *)(pFVar11 + 8) != param_1->C) ||
          *(uint *)(pFVar11 + 4) != param_1->B) || param_1->A != *(uint *)pFVar11) {
        return;
      }
      uVar5 = 0;
      if ((int)uVar12 < (this->SortedReferences).ArrayNum) {
        uVar5 = uVar14;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = FUniversalObjectLocator::SyncFind
                          ((FUniversalObjectLocator *)
                           ((this->SortedReferences).AllocatorInstance.Data + lVar15 + 0x10),param_3
                          );
      if (this_00 != (UObject *)0x0) {
        pUVar6 = Z_Construct_UClass_UMovieSceneBoundObjectProxy_NoRegister();
        plVar7 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar6);
        if (plVar7 == (longlong *)0x0) {
          pUVar6 = *(UClass **)&this_00->field_0x10;
          pUVar8 = Z_Construct_UClass_UMovieSceneBoundObjectProxy_NoRegister();
          bVar3 = UClass::ImplementsInterface(pUVar6,pUVar8);
          if (bVar3) {
            this_00 = IMovieSceneBoundObjectProxy::Execute_BP_GetBoundObjectForSequencer
                                (this_00,this_00);
          }
        }
        else {
          this_00 = (UObject *)(**(code **)(*plVar7 + 0x10))(plVar7,this_00);
        }
      }
      pFVar9 = (param_2->AllocatorInstance).Data;
      pFVar11 = pFVar9 + (longlong)param_2->ArrayNum * 8;
      for (; pFVar9 != pFVar11; pFVar9 = pFVar9 + 8) {
        if (*(UObject **)pFVar9 == this_00) {
          uVar5 = 0;
          if ((int)uVar12 < (this->SortedReferences).ArrayNum) {
            uVar5 = uVar14;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar11 = (this->SortedReferences).AllocatorInstance.Data + lVar15;
          DestructItems<FUniversalObjectLocatorFragment,int>
                    (*(FUniversalObjectLocatorFragment **)(pFVar11 + 0x10),*(int *)(pFVar11 + 0x18))
          ;
          if (*(void **)(pFVar11 + 0x10) != (void *)0x0) {
            FMemory::Free(*(void **)(pFVar11 + 0x10));
          }
          iVar10 = (this->SortedReferences).ArrayNum + ~uVar12;
          if (iVar10 != 0) {
            memmove(pFVar11,pFVar11 + 0x30,(longlong)iVar10 * 0x30);
          }
          piVar1 = &(this->SortedReferences).ArrayNum;
          *piVar1 = *piVar1 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,(ForAnyElementType *)this,(this->SortedReferences).ArrayNum,
                     &(this->SortedReferences).ArrayMax);
          goto LAB_146230187;
        }
      }
      uVar12 = uVar12 + 1;
      lVar15 = lVar15 + 0x30;
LAB_146230187:
      iVar10 = (this->SortedReferences).ArrayNum;
      uVar13 = (ulonglong)(uVar12 + 1);
      lVar15 = lVar15 + 0x30;
    } while ((int)(uVar12 + 1) < iVar10);
  }
  return;
}

// ResolveBinding @ 146230c70

void __thiscall
FMovieSceneBindingReferences::ResolveBinding
          (FMovieSceneBindingReferences *this,FGuid *param_1,FResolveParams *param_2,
          TArray<UObject_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *param_3)

{
  int iVar1;
  ForElementType<UObject_*> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ForElementType<UObject_*> FVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  TLess<void> local_res8;
  UObject *local_38 [2];
  
  iVar1 = (this->SortedReferences).ArrayNum;
  iVar5 = AlgoImpl::
          LowerBoundInternal<FMovieSceneBindingReference_const_,int,FGuid,FGuid_FMovieSceneBindingReference::*,TLess<void>_>
                    ((FMovieSceneBindingReference *)(this->SortedReferences).AllocatorInstance.Data,
                     iVar1,param_1,(pdm_2fa4d329)0x0,local_res8);
  uVar11 = (ulonglong)iVar5;
  if (iVar5 < iVar1) {
    lVar9 = uVar11 * 0x30;
    uVar12 = uVar11;
    do {
      uVar10 = (uint)uVar11;
      uVar6 = 0;
      if ((int)uVar10 < (this->SortedReferences).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar8 = (this->SortedReferences).AllocatorInstance.Data + lVar9;
      if (((*(uint *)(pFVar8 + 8) != param_1->C || *(uint *)(pFVar8 + 4) != param_1->B) ||
          *(uint *)(pFVar8 + 0xc) != param_1->D) || param_1->A != *(uint *)pFVar8) {
        return;
      }
      local_38[0] = ResolveBindingFromLocator(this,uVar10,param_2);
      if (local_38[0] != (UObject *)0x0) {
        FVar2 = (param_3->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<UObject_*>)param_3;
        if (FVar2 != (ForElementType<UObject_*>)0x0) {
          FVar7 = FVar2;
        }
        if ((ulonglong)FVar7 <= local_38) {
          FVar7 = (ForElementType<UObject_*>)param_3;
          if (FVar2 != (ForElementType<UObject_*>)0x0) {
            FVar7 = FVar2;
          }
          if ((local_38 < (UObject **)((longlong)FVar7 + (longlong)param_3->ArrayMax * 8)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        iVar5 = param_3->ArrayNum;
        if (iVar5 == param_3->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_*>_>
                            (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
        }
        param_3->ArrayNum = iVar5 + 1;
        FVar2 = (param_3->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<UObject_*>)param_3;
        if (FVar2 != (ForElementType<UObject_*>)0x0) {
          FVar7 = FVar2;
        }
        *(UObject **)((longlong)FVar7 + (longlong)iVar5 * 8) = local_38[0];
      }
      uVar11 = (ulonglong)(uVar10 + 1);
      uVar12 = uVar12 + 1;
      lVar9 = lVar9 + 0x30;
    } while ((longlong)uVar12 < (longlong)iVar1);
  }
  return;
}

// ResolveBinding @ 146230e70

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
FMovieSceneBindingReferences::ResolveBinding
          (FMovieSceneBindingReferences *this,FMovieSceneBindingResolveParams *param_1,
          FResolveParams *param_2,TSharedPtr<UE::MovieScene::FSharedPlaybackState_const_,1> *param_3
          ,TArray<UObject_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  TLess<void> local_res8;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState_const_,1> local_48;
  
  iVar1 = (this->SortedReferences).ArrayNum;
  uVar4 = AlgoImpl::
          LowerBoundInternal<FMovieSceneBindingReference_const_,int,FGuid,FGuid_FMovieSceneBindingReference::*,TLess<void>_>
                    ((FMovieSceneBindingReference *)(this->SortedReferences).AllocatorInstance.Data,
                     iVar1,&param_1->ObjectBindingID,(pdm_2fa4d329)0x0,local_res8);
  lVar8 = (longlong)(int)uVar4;
  if ((int)uVar4 < iVar1) {
    lVar9 = lVar8 * 0x30;
    uVar7 = uVar4;
    do {
      uVar5 = 0;
      if ((int)uVar7 < (this->SortedReferences).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar6 = (this->SortedReferences).AllocatorInstance.Data + lVar9;
      if (((*(uint *)(pFVar6 + 8) != (param_1->ObjectBindingID).C ||
           *(uint *)(pFVar6 + 4) != (param_1->ObjectBindingID).B) ||
          *(uint *)(pFVar6 + 0xc) != (param_1->ObjectBindingID).D) ||
          *(uint *)pFVar6 != (param_1->ObjectBindingID).A) break;
      local_48.Object = param_3->Object;
      local_48.SharedReferenceCount.ReferenceController =
           (param_3->SharedReferenceCount).ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      ResolveBindingInternal(this,param_1,param_2,uVar7 - uVar4,uVar7,&local_48,param_4);
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 1;
      lVar9 = lVar9 + 0x30;
    } while (lVar8 < iVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// ResolveBindingFromLocator @ 146230fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UObject * __thiscall
FMovieSceneBindingReferences::ResolveBindingFromLocator
          (FMovieSceneBindingReferences *this,int param_1,FResolveParams *param_2)

{
  uchar uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  UObject *pUVar7;
  FResolveResult *this_00;
  FResolveResultData *pFVar8;
  UClass *pUVar9;
  longlong *plVar10;
  UObjectBaseUtility *this_01;
  UClass *pUVar11;
  longlong lVar12;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  FResolveResult local_38;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_78;
  lVar12 = (longlong)param_1;
  if ((param_2->Context != (UObject *)0x0) &&
     (lVar6 = (**(code **)(*(longlong *)param_2->Context + 0x180))(), lVar6 != 0)) {
    iVar2 = (this->SortedReferences).ArrayNum;
    uVar5 = 0;
    if (param_1 < iVar2) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (local_58 = lVar12, local_50 = (longlong)iVar2,
       bVar4 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pUVar7 = (UObject *)(*pcVar3)();
      return pUVar7;
    }
    param_2->Flags =
         param_2->Flags |
         (byte)(this->SortedReferences).AllocatorInstance.Data[lVar12 * 0x30 + 0x20];
  }
  iVar2 = (this->SortedReferences).ArrayNum;
  uVar5 = 0;
  if (param_1 < iVar2) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (local_58 = lVar12, local_50 = (longlong)iVar2,
     bVar4 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar4
     )) {
    pcVar3 = (code *)swi(3);
    pUVar7 = (UObject *)(*pcVar3)();
    return pUVar7;
  }
  this_00 = FUniversalObjectLocator::Resolve
                      ((FUniversalObjectLocator *)
                       ((this->SortedReferences).AllocatorInstance.Data + lVar12 * 0x30 + 0x10),
                       &local_38,param_2);
  uVar1 = (this_00->Value).TypeIndex;
  if (uVar1 == '\x01') {
    pFVar8 = TFutureBase<UE::UniversalObjectLocator::FResolveResultData>::Get
                       ((TFutureBase<UE::UniversalObjectLocator::FResolveResultData> *)this_00);
    local_48 = *(undefined4 *)&pFVar8->Object;
    uStack_44 = *(undefined4 *)((longlong)&pFVar8->Object + 4);
    uStack_40 = *(undefined4 *)&pFVar8->Flags;
    uStack_3c = *(undefined4 *)&pFVar8->field_0xc;
  }
  else {
    if ((uVar1 != '\0') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pUVar7 = (UObject *)(*pcVar3)();
      return pUVar7;
    }
    local_48 = (undefined4)(this_00->Value)._padding_;
    uStack_44 = *(undefined4 *)((longlong)&(this_00->Value)._padding_ + 4);
    uStack_40 = (undefined4)(this_00->Value)._padding_;
    uStack_3c = *(undefined4 *)((longlong)&(this_00->Value)._padding_ + 4);
  }
  if ((1 < local_38.Value.TypeIndex) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pUVar7 = (UObject *)(*pcVar3)();
    return pUVar7;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::UniversalObjectLocator::FResolveResultData,TFuture<UE::UniversalObjectLocator::FResolveResultData>_>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_38.Value.TypeIndex])(&local_38);
  this_01 = (UObjectBaseUtility *)CONCAT44(uStack_44,local_48);
  if (this_01 == (UObjectBaseUtility *)0x0) {
    this_01 = (UObjectBaseUtility *)0x0;
  }
  else {
    pUVar9 = Z_Construct_UClass_UMovieSceneBoundObjectProxy_NoRegister();
    plVar10 = UObjectBaseUtility::GetInterfaceAddress(this_01,pUVar9);
    if (plVar10 == (longlong *)0x0) {
      pUVar9 = *(UClass **)&this_01->field_0x10;
      pUVar11 = Z_Construct_UClass_UMovieSceneBoundObjectProxy_NoRegister();
      bVar4 = UClass::ImplementsInterface(pUVar9,pUVar11);
      if (bVar4) {
        this_01 = (UObjectBaseUtility *)
                  IMovieSceneBoundObjectProxy::Execute_BP_GetBoundObjectForSequencer
                            ((UObject *)this_01,(UObject *)this_01);
      }
    }
    else {
      this_01 = (UObjectBaseUtility *)(**(code **)(*plVar10 + 0x10))(plVar10,this_01);
    }
  }
  return (UObject *)this_01;
}

// ResolveBindingInternal @ 1462311d0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
FMovieSceneBindingReferences::ResolveBindingInternal
          (FMovieSceneBindingReferences *this,FMovieSceneBindingResolveParams *param_1,
          FResolveParams *param_2,int param_3,int param_4,
          TSharedPtr<UE::MovieScene::FSharedPlaybackState_const_,1> *param_5,
          TArray<UObject_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *param_6)

{
  undefined8 *puVar1;
  code *pcVar2;
  TArray<UObject_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *pTVar8;
  UClass *pUVar9;
  longlong *plVar10;
  UObject *this_00;
  UClass *pUVar11;
  ForElementType<UObject_*> FVar12;
  ForElementType<UObject_*> FVar13;
  longlong lVar14;
  ForElementType<UObject_*> FVar15;
  uint uVar16;
  undefined8 *puVar17;
  UObject *local_68;
  UObject *local_60;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_58;
  undefined8 *local_48;
  int local_40;
  
  iVar7 = param_4;
  lVar14 = (longlong)param_4;
  uVar16 = ~param_4;
  uVar5 = 0;
  if (param_4 < (this->SortedReferences).ArrayNum) {
    uVar5 = uVar16 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*(longlong *)((this->SortedReferences).AllocatorInstance.Data + lVar14 * 0x30 + 0x28) == 0)
     || (param_5->Object == (FSharedPlaybackState *)0x0)) {
    local_60 = ResolveBindingFromLocator(this,iVar7,param_2);
    FVar15 = (ForElementType<UObject_*>)param_6;
    if (local_60 != (UObject *)0x0) {
      FVar12 = (param_6->AllocatorInstance).SecondaryData;
      FVar13 = (ForElementType<UObject_*>)param_6;
      if (FVar12 != (ForElementType<UObject_*>)0x0) {
        FVar13 = FVar12;
      }
      if ((ulonglong)FVar13 <= &local_60) {
        FVar13 = (ForElementType<UObject_*>)param_6;
        if (FVar12 != (ForElementType<UObject_*>)0x0) {
          FVar13 = FVar12;
        }
        if ((&local_60 < (UObject **)((longlong)FVar13 + (longlong)param_6->ArrayMax * 8)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar7 = ((TArray<UObject_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)FVar15)
              ->ArrayNum;
      if (iVar7 == ((TArray<UObject_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
                   FVar15)->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_*>_>
                          (0x808,(ForElementType<UObject_*> *)FVar15,
                           &((TArray<UObject_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                              *)FVar15)->ArrayMax);
      }
      ((TArray<UObject_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)FVar15)->
      ArrayNum = iVar7 + 1;
      FVar12 = (((TArray<UObject_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
                FVar15)->AllocatorInstance).SecondaryData;
      if (FVar12 != (ForElementType<UObject_*>)0x0) {
        FVar15 = FVar12;
      }
      *(UObject **)((longlong)FVar15 + (longlong)iVar7 * 8) = local_60;
    }
  }
  else {
    uVar5 = 0;
    if (iVar7 < (this->SortedReferences).ArrayNum) {
      uVar5 = uVar16 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    plVar10 = *(longlong **)((this->SortedReferences).AllocatorInstance.Data + lVar14 * 0x30 + 0x28)
    ;
    pcVar2 = *(code **)(*plVar10 + 0x2b0);
    pTVar8 = TSharedPtr<UE::MovieScene::FSharedPlaybackState_const_,1>::ToSharedRef
                       (param_5,&local_58);
    (*pcVar2)(plVar10,&local_48,param_1,param_3,pTVar8);
    iVar7 = local_40;
    pTVar3 = param_6;
    puVar1 = local_48 + local_40;
    puVar17 = local_48;
    while( true ) {
      if (local_40 != iVar7) {
        param_4 = param_4 & 0xffffff00;
        `TCheckedPointerIterator<TObjectPtr<UObject>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&param_4);
      }
      if (puVar17 == puVar1) break;
      this_00 = (UObject *)*puVar17;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (this_00 != (UObject *)0x0) goto LAB_14623134d;
      }
      else if (this_00 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(this_00);
LAB_14623134d:
        pUVar9 = Z_Construct_UClass_UMovieSceneBoundObjectProxy_NoRegister();
        plVar10 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar9);
        if (plVar10 == (longlong *)0x0) {
          pUVar9 = *(UClass **)&this_00->field_0x10;
          pUVar11 = Z_Construct_UClass_UMovieSceneBoundObjectProxy_NoRegister();
          bVar4 = UClass::ImplementsInterface(pUVar9,pUVar11);
          if (bVar4) {
            this_00 = IMovieSceneBoundObjectProxy::Execute_BP_GetBoundObjectForSequencer
                                (this_00,this_00);
          }
        }
        else {
          this_00 = (UObject *)(**(code **)(*plVar10 + 0x10))(plVar10,this_00);
        }
        FVar15 = (pTVar3->AllocatorInstance).SecondaryData;
        FVar12 = (ForElementType<UObject_*>)pTVar3;
        if (FVar15 != (ForElementType<UObject_*>)0x0) {
          FVar12 = FVar15;
        }
        local_68 = this_00;
        if ((ulonglong)FVar12 <= &local_68) {
          FVar12 = (ForElementType<UObject_*>)pTVar3;
          if (FVar15 != (ForElementType<UObject_*>)0x0) {
            FVar12 = FVar15;
          }
          if ((&local_68 < (UObject **)((longlong)FVar12 + (longlong)pTVar3->ArrayMax * 8)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        iVar6 = pTVar3->ArrayNum;
        if (iVar6 == pTVar3->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_*>_>
                            (0x808,&pTVar3->AllocatorInstance,&pTVar3->ArrayMax);
        }
        pTVar3->ArrayNum = iVar6 + 1;
        FVar15 = (pTVar3->AllocatorInstance).SecondaryData;
        FVar12 = (ForElementType<UObject_*>)pTVar3;
        if (FVar15 != (ForElementType<UObject_*>)0x0) {
          FVar12 = FVar15;
        }
        *(UObject **)((longlong)FVar12 + (longlong)iVar6 * 8) = local_68;
      }
      puVar17 = puVar17 + 1;
    }
    if (local_48 != (undefined8 *)0x0) {
      FMemory::Free(local_48);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_5->SharedReferenceCount).ReferenceController);
  return;
}

// ResolveSingleBinding @ 146232840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UObject * __thiscall
FMovieSceneBindingReferences::ResolveSingleBinding
          (FMovieSceneBindingReferences *this,FMovieSceneBindingResolveParams *param_1,int param_2,
          FResolveParams *param_3,TSharedPtr<UE::MovieScene::FSharedPlaybackState_const_,1> *param_4
          )

{
  UObject *pUVar1;
  ForElementType<UObject_*> FVar2;
  undefined1 auStackY_78 [32];
  TSharedPtr<UE::MovieScene::FSharedPlaybackState_const_,1> local_48;
  TArray<UObject_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> local_38;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_78;
  local_38.AllocatorInstance.SecondaryData = (ForElementType<UObject_*>)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 1;
  local_48.Object = param_4->Object;
  local_48.SharedReferenceCount.ReferenceController =
       (param_4->SharedReferenceCount).ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  ResolveSingleBinding(this,param_1,param_2,param_3,&local_48,&local_38);
  if (0 < local_38.ArrayNum) {
    FVar2 = (ForElementType<UObject_*>)&local_38;
    if (local_38.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
      FVar2 = local_38.AllocatorInstance.SecondaryData;
    }
    pUVar1 = *(UObject **)FVar2;
    if (local_38.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
      FMemory::Free((void *)local_38.AllocatorInstance.SecondaryData);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_4->SharedReferenceCount).ReferenceController);
    return pUVar1;
  }
  if (local_38.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
    FMemory::Free((void *)local_38.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return (UObject *)0x0;
}

// ResolveSingleBinding @ 146232920

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
FMovieSceneBindingReferences::ResolveSingleBinding
          (FMovieSceneBindingReferences *this,FMovieSceneBindingResolveParams *param_1,int param_2,
          FResolveParams *param_3,TSharedPtr<UE::MovieScene::FSharedPlaybackState_const_,1> *param_4
          ,TArray<UObject_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  TLess<void> local_res18;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState_const_,1> local_38;
  
  iVar3 = AlgoImpl::
          LowerBoundInternal<FMovieSceneBindingReference_const_,int,FGuid,FGuid_FMovieSceneBindingReference::*,TLess<void>_>
                    ((FMovieSceneBindingReference *)(this->SortedReferences).AllocatorInstance.Data,
                     (this->SortedReferences).ArrayNum,&param_1->ObjectBindingID,(pdm_2fa4d329)0x0,
                     local_res18);
  iVar3 = iVar3 + param_2;
  if ((-1 < iVar3) && (iVar3 < (this->SortedReferences).ArrayNum)) {
    if (iVar3 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar4 = (this->SortedReferences).AllocatorInstance.Data + (longlong)iVar3 * 0x30;
    if (((*(uint *)(pFVar4 + 0xc) == (param_1->ObjectBindingID).D &&
         *(uint *)(pFVar4 + 8) == (param_1->ObjectBindingID).C) &&
        *(uint *)(pFVar4 + 4) == (param_1->ObjectBindingID).B) &&
        (param_1->ObjectBindingID).A == *(uint *)pFVar4) {
      local_38.Object = param_4->Object;
      local_38.SharedReferenceCount.ReferenceController =
           (param_4->SharedReferenceCount).ReferenceController;
      if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      ResolveBindingInternal(this,param_1,param_3,param_2,iVar3,&local_38,param_5);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return;
}

