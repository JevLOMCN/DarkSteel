// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 3

// ~FArea @ 1426ffb70

void __thiscall FTabManager::FArea::~FArea(FArea *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FArea_FTabManager__6B_;
  pFVar1 = (this->InactivePanelDrawerTabs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSplitter::~FSplitter((FSplitter *)this);
  return;
}

// AsArea @ 14270d2d0

TSharedPtr<FTabManager::FArea,1> * __thiscall
FTabManager::FArea::AsArea(FArea *this,TSharedPtr<FTabManager::FArea,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  FArea *pFVar2;
  TSharedRef<FTabManager::FLayoutNode,1> *pTVar3;
  TSharedRef<FTabManager::FLayoutNode,1> local_18;
  
  pTVar3 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                     ((TSharedFromThis<FTabManager::FLayoutNode,1> *)&this->_padding_,&local_18);
  pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
  pFVar2 = (FArea *)pTVar3->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    __return_storage_ptr__->Object = pFVar2;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    __return_storage_ptr__->Object = pFVar2;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// Split @ 14278b780

TSharedRef<FTabManager::FArea,1> * __thiscall
FTabManager::FArea::Split
          (FArea *this,TSharedRef<FTabManager::FArea,1> *__return_storage_ptr__,
          TSharedRef<FTabManager::FLayoutNode,1> *param_1)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TSharedRef<FTabManager::FArea,1> *pTVar6;
  TSharedRef<FTabManager::FLayoutNode,1> *pTVar7;
  undefined8 *puVar8;
  TSharedRef<FTabManager::FLayoutNode,1> local_18;
  
  if (((TSharedRef<FTabManager::FLayoutNode,1> *)this->_padding_ <= param_1) &&
     (param_1 < (TSharedRef<FTabManager::FLayoutNode,1> *)this->_padding_ +
                *(int *)((longlong)&this->_padding_ + 4))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<FTabManager::FArea,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar5 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar5 + 1;
  puVar8 = (undefined8 *)((longlong)iVar5 * 0x10 + this->_padding_);
  *puVar8 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  puVar8[1] = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar7 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                     ((TSharedFromThis<FTabManager::FLayoutNode,1> *)&this->_padding_,&local_18);
  __return_storage_ptr__->Object = (FArea *)pTVar7->Object;
  pTVar2 = (pTVar7->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

