// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 6

// operator() @ 142e19cc0

bool __thiscall
`FNavigationSimulationNodeUtils::IndexOfLiveWidget'::__l2::<lambda_1>::operator()
          (void *this,TSharedPtr<FNavigationSimulationWidgetNode,1> *param_1)

{
  FNavigationSimulationWidgetNode *pFVar1;
  SWidget *pSVar2;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  undefined1 uVar6;
  atomic<int> aVar7;
  SWidget *pSVar8;
  SWidget *pSVar9;
  
  if ((param_1->Object == (FNavigationSimulationWidgetNode *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  pFVar1 = param_1->Object;
  pSVar9 = (SWidget *)0x0;
  pSVar2 = (SWidget *)(pFVar1->NavigationSource).WidgetLive.WeakReferenceCount.ReferenceController;
  pSVar8 = pSVar2;
  if (pSVar2 != (SWidget *)0x0) {
    aVar4 = *(atomic<int> *)&pSVar2->_padding_;
    do {
      pSVar8 = pSVar9;
      if (aVar4 == (atomic<int>)0x0) goto LAB_142e19d23;
      LOCK();
      aVar7 = *(atomic<int> *)&pSVar2->_padding_;
      bVar5 = aVar4 == aVar7;
      if (bVar5) {
        *(atomic<int> *)&pSVar2->_padding_ = (atomic<int>)((int)aVar4 + 1);
        aVar7 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar7;
    } while (!bVar5);
    pSVar9 = (pFVar1->NavigationSource).WidgetLive.Object;
    pSVar8 = pSVar2;
  }
LAB_142e19d23:
  pSVar2 = *(SWidget **)this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar8);
  return pSVar2 == pSVar9;
}

// BuildNavigationSimulationNodeListForLive @ 142e2f2f0

TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_> * __cdecl
FNavigationSimulationNodeUtils::BuildNavigationSimulationNodeListForLive
          (TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,
          TArray<FSlateNavigationEventSimulator::FSimulationResult,TSizedDefaultAllocator<32>_>
          *param_1)

{
  NavigationSimulationNodeUtilsInternal::BuildNavigationSimulationNodeList
            (__return_storage_ptr__,Live,param_1);
  return __return_storage_ptr__;
}

// BuildNavigationSimulationNodeListForSnapshot @ 142e2f320

TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_> * __cdecl
FNavigationSimulationNodeUtils::BuildNavigationSimulationNodeListForSnapshot
          (TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,
          TArray<FSlateNavigationEventSimulator::FSimulationResult,TSizedDefaultAllocator<32>_>
          *param_1)

{
  NavigationSimulationNodeUtilsInternal::BuildNavigationSimulationNodeList
            (__return_storage_ptr__,Snapshot,param_1);
  return __return_storage_ptr__;
}

// FindReflectorNodes @ 142e84f80

TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_> * __cdecl
FNavigationSimulationNodeUtils::FindReflectorNodes
          (TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,
          TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_> *param_1
          ,TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulong64 uVar8;
  TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar2 = param_2->ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar2,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  iVar3 = param_2->ArrayNum;
  pFVar12 = (param_2->AllocatorInstance).Data;
  pFVar13 = pFVar12 + (longlong)iVar3 * 0x10;
  while( true ) {
    if (param_2->ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedRef<FWidgetReflectorNodeBase,1>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar12 == pFVar13) break;
    uVar8 = (**(code **)(**(longlong **)pFVar12 + 0xe0))();
    iVar7 = IndexOfSnapshotWidget(param_1,uVar8);
    if ((-1 < iVar7) && (iVar7 < param_1->ArrayNum)) {
      if (iVar7 < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_>
                    *)(*pcVar5)();
          return pTVar9;
        }
      }
      pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data;
      pFVar11 = (param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
      if ((pFVar10 <= pFVar11) && (pFVar11 < pFVar10 + (longlong)*piVar1 * 0x10)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_>
                    *)(*pcVar5)();
          return pTVar9;
        }
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
      *(undefined8 *)pFVar10 = *(undefined8 *)pFVar11;
      lVar4 = *(longlong *)(pFVar11 + 8);
      *(longlong *)(pFVar10 + 8) = lVar4;
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
    }
    pFVar12 = pFVar12 + 0x10;
  }
  return __return_storage_ptr__;
}

// IndexOfLiveWidget @ 142eba540

int __cdecl
FNavigationSimulationNodeUtils::IndexOfLiveWidget
          (TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_>
           *param_1,TSharedPtr<SWidget_const_,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedPtr<FNavigationSimulationWidgetNode,1> *pTVar2;
  bool bVar3;
  int iVar4;
  TSharedPtr<FNavigationSimulationWidgetNode,1> *pTVar5;
  SWidget *local_18;
  TReferenceControllerBase<1> *local_10;
  
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  local_18 = param_2->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = (TSharedPtr<FNavigationSimulationWidgetNode,1> *)(param_1->AllocatorInstance).Data;
  iVar4 = param_1->ArrayNum;
  local_10 = pTVar1;
  pTVar5 = pTVar2;
  do {
    if (pTVar5 == pTVar2 + iVar4) {
      iVar4 = -1;
LAB_142eba5af:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      return iVar4;
    }
    bVar3 = `FNavigationSimulationNodeUtils::IndexOfLiveWidget'::__l2::<lambda_1>::operator()
                      (&local_18,pTVar5);
    if (bVar3) {
      iVar4 = (int)((longlong)pTVar5 - (longlong)pTVar2 >> 4);
      goto LAB_142eba5af;
    }
    pTVar5 = pTVar5 + 1;
  } while( true );
}

// IndexOfSnapshotWidget @ 142eba5e0

int __cdecl
FNavigationSimulationNodeUtils::IndexOfSnapshotWidget
          (TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_>
           *param_1,ulong64 param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (param_1->AllocatorInstance).Data;
  iVar4 = param_1->ArrayNum;
  pFVar5 = pFVar1;
  while( true ) {
    if (pFVar5 == pFVar1 + (longlong)iVar4 * 0x10) {
      return -1;
    }
    if ((*(longlong *)pFVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) break;
    if (**(ulong64 **)pFVar5 == param_2) {
      return (int)((longlong)pFVar5 - (longlong)pFVar1 >> 4);
    }
    pFVar5 = pFVar5 + 0x10;
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

