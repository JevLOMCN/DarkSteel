// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// operator() @ 148513e70

void __thiscall
`FSceneViewExtensions::GatherActiveExtensions'::__l2::<lambda_1>::operator()
          (void *this,TSharedRef<ISceneViewExtension,1> *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  
  pFVar2 = *(ForAnyElementType **)this;
  if (((TSharedRef<ISceneViewExtension,1> *)pFVar2->Data <= param_1) &&
     (param_1 < (TSharedRef<ISceneViewExtension,1> *)pFVar2->Data +
                *(int *)((longlong)&pFVar2[1].Data + 4))) {
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
  iVar7 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar7 + 1;
  pFVar3 = pFVar2->Data;
  *(ISceneViewExtension **)(pFVar3 + (longlong)iVar7 * 0x10) = param_1->Object;
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar3 + (longlong)iVar7 * 0x10 + 8) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  return;
}

// ForEachActiveViewExtension @ 148526e30

void __cdecl
FSceneViewExtensions::ForEachActiveViewExtension
          (TArray<TWeakPtr<ISceneViewExtension,1>,TSizedDefaultAllocator<32>_> *param_1,
          FSceneViewExtensionContext *param_2,
          TFunctionRef<void___cdecl(TSharedRef<ISceneViewExtension,1>_const_&)> *param_3)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  atomic<int> aVar4;
  char cVar5;
  atomic<int> aVar6;
  TReferenceControllerBase<1> *pTVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  undefined1 local_res8 [8];
  longlong *local_38;
  TReferenceControllerBase<1> *local_30;
  
  iVar1 = param_1->ArrayNum;
  pFVar9 = (param_1->AllocatorInstance).Data;
  pFVar8 = pFVar9 + (longlong)iVar1 * 0x10;
  do {
    while( true ) {
      if (param_1->ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TWeakPtr<ISceneViewExtension,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar9 == pFVar8) {
        return;
      }
      pTVar7 = *(TReferenceControllerBase<1> **)(pFVar9 + 8);
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) break;
LAB_148526ea4:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      pFVar9 = pFVar9 + 0x10;
    }
    aVar4 = pTVar7->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_148526ea4;
      }
      LOCK();
      aVar6 = pTVar7->SharedReferenceCount;
      bVar10 = aVar4 == aVar6;
      if (bVar10) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar10);
    plVar2 = *(longlong **)pFVar9;
    if ((plVar2 == (longlong *)0x0) ||
       (cVar5 = (**(code **)(*plVar2 + 0xa0))(plVar2,param_2), cVar5 == '\0')) goto LAB_148526ea4;
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    local_38 = plVar2;
    local_30 = pTVar7;
    if ((plVar2 == (longlong *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,&local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    pFVar9 = pFVar9 + 0x10;
  } while( true );
}

// GatherActiveExtensions @ 148527080

TArray<TSharedRef<ISceneViewExtension,1>,TSizedDefaultAllocator<32>_> * __thiscall
FSceneViewExtensions::GatherActiveExtensions
          (FSceneViewExtensions *this,
          TArray<TSharedRef<ISceneViewExtension,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,FSceneViewExtensionContext *param_1)

{
  uint uVar1;
  int iVar2;
  ISceneViewExtension *pIVar3;
  code *pcVar4;
  atomic<int> aVar5;
  char cVar6;
  atomic<int> aVar7;
  TArray<TSharedRef<ISceneViewExtension,1>,TSizedDefaultAllocator<32>_> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  bool bVar12;
  TGreater<void> local_res8 [8];
  TArray<TSharedRef<ISceneViewExtension,1>,TSizedDefaultAllocator<32>_> *local_res10;
  TSharedRef<ISceneViewExtension,1> local_48;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayMax = 0;
  __return_storage_ptr__->ArrayNum = 0;
  uVar1 = (this->KnownExtensions).ArrayNum;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (0 < (int)uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar1,&__return_storage_ptr__->AllocatorInstance,0,
               &__return_storage_ptr__->ArrayMax);
  }
  iVar2 = (this->KnownExtensions).ArrayNum;
  pFVar11 = (this->KnownExtensions).AllocatorInstance.Data;
  pFVar10 = pFVar11 + (longlong)iVar2 * 0x10;
  local_res10 = __return_storage_ptr__;
  do {
    while( true ) {
      if ((this->KnownExtensions).ArrayNum != iVar2) {
        local_res8[0] = (TGreater<void>)0x0;
        `TCheckedPointerIterator<TWeakPtr<ISceneViewExtension,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar11 == pFVar10) {
        AlgoImpl::
        IntroSortInternal<TSharedRef<ISceneViewExtension,1>,int,UE::Core::Private::TProjectionMemberFunction<int_(__cdecl_ISceneViewExtension::*)(void)const_>,TGreater<void>_>
                  ((TSharedRef<ISceneViewExtension,1> *)
                   (__return_storage_ptr__->AllocatorInstance).Data,__return_storage_ptr__->ArrayNum
                   ,(TProjectionMemberFunction<int_(__cdecl_ISceneViewExtension::*)(void)const>)
                    0x148514bc0,local_res8[0]);
        return __return_storage_ptr__;
      }
      pTVar9 = *(TReferenceControllerBase<1> **)(pFVar11 + 8);
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) break;
LAB_148527154:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      pFVar11 = pFVar11 + 0x10;
    }
    aVar5 = pTVar9->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_148527154;
      }
      LOCK();
      aVar7 = pTVar9->SharedReferenceCount;
      bVar12 = aVar5 == aVar7;
      if (bVar12) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar7 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar7;
    } while (!bVar12);
    pIVar3 = *(ISceneViewExtension **)pFVar11;
    if ((pIVar3 == (ISceneViewExtension *)0x0) ||
       (cVar6 = (**(code **)((longlong)*pIVar3 + 0xa0))(pIVar3,param_1), cVar6 == '\0'))
    goto LAB_148527154;
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    local_48.Object = pIVar3;
    local_48.SharedReferenceCount.ReferenceController = pTVar9;
    if ((pIVar3 == (ISceneViewExtension *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), bVar12)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TArray<TSharedRef<ISceneViewExtension,1>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar8;
    }
    `FSceneViewExtensions::GatherActiveExtensions'::__l2::<lambda_1>::operator()
              (&local_res10,&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    pFVar11 = pFVar11 + 0x10;
  } while( true );
}

// RegisterExtension @ 14853e770

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FSceneViewExtensions::RegisterExtension(TSharedRef<ISceneViewExtension,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TArray<TWeakPtr<ISceneViewExtension,1>,TSizedDefaultAllocator<32>_> *this;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  UEngine *pUVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  TWeakPtr<ISceneViewExtension,1> local_18;
  
  pUVar6 = GEngine;
  if (GEngine == (UEngine *)0x0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2379122706130927546>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SceneViewExtension.cpp"
                       ,0x46,"GEngine");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    if (((GEngine->ViewExtensions).Object == (FSceneViewExtensions *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    this = &((pUVar6->ViewExtensions).Object)->KnownExtensions;
    uVar10 = 0;
    iVar9 = this->ArrayNum;
    if (0 < iVar9) {
      lVar11 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar10 < iVar9) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = (this->AllocatorInstance).Data;
        if (((*(longlong *)(pFVar3 + lVar11) == 0) ||
            (lVar4 = *(longlong *)(pFVar3 + lVar11 + 8), lVar4 == 0)) || (*(int *)(lVar4 + 8) < 1))
        {
          uVar8 = 0;
          if ((int)uVar10 < this->ArrayNum) {
            uVar8 = ~uVar10 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          TArray<TWeakPtr<ISceneViewExtension,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                    (this,uVar10);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,&this->AllocatorInstance,this->ArrayNum,&this->ArrayMax);
        }
        else {
          uVar10 = uVar10 + 1;
          lVar11 = lVar11 + 0x10;
        }
        iVar9 = this->ArrayNum;
      } while ((int)uVar10 < iVar9);
    }
    local_18.Object = param_1->Object;
    local_18.WeakReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    TArray<TWeakPtr<ISceneViewExtension,1>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TWeakPtr<ISceneViewExtension,1>_>(this,&local_18);
    if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_18.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_18.WeakReferenceCount.ReferenceController,1);
      }
    }
  }
  return;
}

