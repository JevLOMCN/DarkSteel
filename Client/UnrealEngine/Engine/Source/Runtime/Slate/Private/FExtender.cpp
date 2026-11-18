// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 8

// AddMenuBarExtension @ 1427c7900

TSharedRef<FExtensionBase_const_,1> * __thiscall
FExtender::AddMenuBarExtension
          (FExtender *this,TSharedRef<FExtensionBase_const_,1> *__return_storage_ptr__,FName param_1
          ,Position param_2,TSharedPtr<FUICommandList,1> *param_3,
          TDelegate<void___cdecl(FMenuBarBuilder_&),FDefaultDelegateUserPolicy> *param_4)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  FUICommandList *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FExtensionBase *pFVar7;
  TSharedRef<FExtensionBase_const_,1> *pTVar8;
  FScriptContainerElement *pFVar9;
  FExtensionBase *pFVar10;
  FExtensionBase *pFVar11;
  FExtensionBase *local_38;
  FExtensionBase *local_30;
  FUICommandList *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  
  pFVar7 = ::operator_new(0x40);
  pFVar10 = (FExtensionBase *)0x0;
  pFVar11 = pFVar10;
  if (pFVar7 != (FExtensionBase *)0x0) {
    (pFVar7->Hook).ComparisonIndex = 0;
    (pFVar7->Hook).Number = 0;
    (pFVar7->CommandList).Object = (FUICommandList *)0x0;
    (pFVar7->CommandList).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar7->_padding_ = (longlong)&___7FMenuBarExtension__6B_;
    pFVar7[1]._padding_ = 0;
    pFVar7[1].Hook.ComparisonIndex = 0;
    pFVar7[1].Hook.Number = 0;
    pFVar7[1].HookPosition = Before;
    pFVar11 = pFVar7;
  }
  pFVar7 = ::operator_new(0x18);
  if (pFVar7 != (FExtensionBase *)0x0) {
    (pFVar7->Hook).ComparisonIndex.Value = 1;
    (pFVar7->Hook).Number = 1;
    pFVar7->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFMenuBarExtension__U__DefaultDeleter_VFMenuBarExtension___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    *(FExtensionBase **)&pFVar7->HookPosition = pFVar11;
    pFVar10 = pFVar7;
  }
  if ((pFVar11 == (FExtensionBase *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedRef<FExtensionBase_const_,1> *)(*pcVar4)();
    return pTVar8;
  }
  pFVar11->Hook = param_1;
  pFVar11->HookPosition = param_2;
  pTVar2 = (param_3->SharedReferenceCount).ReferenceController;
  pFVar3 = param_3->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = (pFVar11->CommandList).Object;
  pTStack_20 = (pFVar11->CommandList).SharedReferenceCount.ReferenceController;
  (pFVar11->CommandList).Object = pFVar3;
  (pFVar11->CommandList).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  TDelegate<void___cdecl(FMenuBarBuilder_&),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(FMenuBarBuilder_&),FDefaultDelegateUserPolicy> *)(pFVar11 + 1),
             param_4);
  if (pFVar10 != (FExtensionBase *)0x0) {
    LOCK();
    (pFVar10->Hook).ComparisonIndex.Value = (pFVar10->Hook).ComparisonIndex.Value + 1;
    UNLOCK();
  }
  pFVar9 = (this->Extensions).AllocatorInstance.Data;
  local_38 = pFVar11;
  local_30 = pFVar10;
  if (((pFVar9 <= (FScriptContainerElement *)&local_38) &&
      ((FScriptContainerElement *)&local_38 < pFVar9 + (longlong)(this->Extensions).ArrayMax * 0x10)
      ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedRef<FExtensionBase_const_,1> *)(*pcVar4)();
    return pTVar8;
  }
  iVar6 = (this->Extensions).ArrayNum;
  piVar1 = &(this->Extensions).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar1);
  }
  (this->Extensions).ArrayNum = iVar6 + 1;
  pFVar9 = (this->Extensions).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(FExtensionBase **)pFVar9 = local_38;
  *(FExtensionBase **)(pFVar9 + 8) = local_30;
  local_30 = (FExtensionBase *)0x0;
  local_38 = (FExtensionBase *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  __return_storage_ptr__->Object = pFVar11;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar10;
  if (pFVar10 != (FExtensionBase *)0x0) {
    LOCK();
    (pFVar10->Hook).ComparisonIndex.Value = (pFVar10->Hook).ComparisonIndex.Value + 1;
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar10);
  return __return_storage_ptr__;
}

// AddMenuExtension @ 1427c85d0

TSharedRef<FExtensionBase_const_,1> * __thiscall
FExtender::AddMenuExtension
          (FExtender *this,TSharedRef<FExtensionBase_const_,1> *__return_storage_ptr__,FName param_1
          ,Position param_2,TSharedPtr<FUICommandList,1> *param_3,
          TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *param_4)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  FUICommandList *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FExtensionBase *pFVar7;
  TSharedRef<FExtensionBase_const_,1> *pTVar8;
  FScriptContainerElement *pFVar9;
  FExtensionBase *pFVar10;
  FExtensionBase *pFVar11;
  FExtensionBase *local_38;
  FExtensionBase *local_30;
  FUICommandList *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  
  pFVar7 = ::operator_new(0x40);
  pFVar10 = (FExtensionBase *)0x0;
  pFVar11 = pFVar10;
  if (pFVar7 != (FExtensionBase *)0x0) {
    (pFVar7->Hook).ComparisonIndex = 0;
    (pFVar7->Hook).Number = 0;
    (pFVar7->CommandList).Object = (FUICommandList *)0x0;
    (pFVar7->CommandList).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar7->_padding_ = (longlong)&___7FMenuExtension__6B_;
    pFVar7[1]._padding_ = 0;
    pFVar7[1].Hook.ComparisonIndex = 0;
    pFVar7[1].Hook.Number = 0;
    pFVar7[1].HookPosition = Before;
    pFVar11 = pFVar7;
  }
  pFVar7 = ::operator_new(0x18);
  if (pFVar7 != (FExtensionBase *)0x0) {
    (pFVar7->Hook).ComparisonIndex.Value = 1;
    (pFVar7->Hook).Number = 1;
    pFVar7->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFMenuExtension__U__DefaultDeleter_VFMenuExtension___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    *(FExtensionBase **)&pFVar7->HookPosition = pFVar11;
    pFVar10 = pFVar7;
  }
  if ((pFVar11 == (FExtensionBase *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedRef<FExtensionBase_const_,1> *)(*pcVar4)();
    return pTVar8;
  }
  pFVar11->Hook = param_1;
  pFVar11->HookPosition = param_2;
  pTVar2 = (param_3->SharedReferenceCount).ReferenceController;
  pFVar3 = param_3->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = (pFVar11->CommandList).Object;
  pTStack_20 = (pFVar11->CommandList).SharedReferenceCount.ReferenceController;
  (pFVar11->CommandList).Object = pFVar3;
  (pFVar11->CommandList).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *)(pFVar11 + 1),
             param_4);
  if (pFVar10 != (FExtensionBase *)0x0) {
    LOCK();
    (pFVar10->Hook).ComparisonIndex.Value = (pFVar10->Hook).ComparisonIndex.Value + 1;
    UNLOCK();
  }
  pFVar9 = (this->Extensions).AllocatorInstance.Data;
  local_38 = pFVar11;
  local_30 = pFVar10;
  if (((pFVar9 <= (FScriptContainerElement *)&local_38) &&
      ((FScriptContainerElement *)&local_38 < pFVar9 + (longlong)(this->Extensions).ArrayMax * 0x10)
      ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedRef<FExtensionBase_const_,1> *)(*pcVar4)();
    return pTVar8;
  }
  iVar6 = (this->Extensions).ArrayNum;
  piVar1 = &(this->Extensions).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar1);
  }
  (this->Extensions).ArrayNum = iVar6 + 1;
  pFVar9 = (this->Extensions).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(FExtensionBase **)pFVar9 = local_38;
  *(FExtensionBase **)(pFVar9 + 8) = local_30;
  local_30 = (FExtensionBase *)0x0;
  local_38 = (FExtensionBase *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  __return_storage_ptr__->Object = pFVar11;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar10;
  if (pFVar10 != (FExtensionBase *)0x0) {
    LOCK();
    (pFVar10->Hook).ComparisonIndex.Value = (pFVar10->Hook).ComparisonIndex.Value + 1;
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar10);
  return __return_storage_ptr__;
}

// AddToolBarExtension @ 1427cc060

TSharedRef<FExtensionBase_const_,1> * __thiscall
FExtender::AddToolBarExtension
          (FExtender *this,TSharedRef<FExtensionBase_const_,1> *__return_storage_ptr__,FName param_1
          ,Position param_2,TSharedPtr<FUICommandList,1> *param_3,
          TDelegate<void___cdecl(FToolBarBuilder_&),FDefaultDelegateUserPolicy> *param_4)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  FUICommandList *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FExtensionBase *pFVar7;
  TSharedRef<FExtensionBase_const_,1> *pTVar8;
  FScriptContainerElement *pFVar9;
  FExtensionBase *pFVar10;
  FExtensionBase *pFVar11;
  FExtensionBase *local_38;
  FExtensionBase *local_30;
  FUICommandList *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  
  pFVar7 = ::operator_new(0x40);
  pFVar10 = (FExtensionBase *)0x0;
  pFVar11 = pFVar10;
  if (pFVar7 != (FExtensionBase *)0x0) {
    (pFVar7->Hook).ComparisonIndex = 0;
    (pFVar7->Hook).Number = 0;
    (pFVar7->CommandList).Object = (FUICommandList *)0x0;
    (pFVar7->CommandList).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar7->_padding_ = (longlong)&___7FToolBarExtension__6B_;
    pFVar7[1]._padding_ = 0;
    pFVar7[1].Hook.ComparisonIndex = 0;
    pFVar7[1].Hook.Number = 0;
    pFVar7[1].HookPosition = Before;
    pFVar11 = pFVar7;
  }
  pFVar7 = ::operator_new(0x18);
  if (pFVar7 != (FExtensionBase *)0x0) {
    (pFVar7->Hook).ComparisonIndex.Value = 1;
    (pFVar7->Hook).Number = 1;
    pFVar7->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFToolBarExtension__U__DefaultDeleter_VFToolBarExtension___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    *(FExtensionBase **)&pFVar7->HookPosition = pFVar11;
    pFVar10 = pFVar7;
  }
  if ((pFVar11 == (FExtensionBase *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedRef<FExtensionBase_const_,1> *)(*pcVar4)();
    return pTVar8;
  }
  pFVar11->Hook = param_1;
  pFVar11->HookPosition = param_2;
  pTVar2 = (param_3->SharedReferenceCount).ReferenceController;
  pFVar3 = param_3->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = (pFVar11->CommandList).Object;
  pTStack_20 = (pFVar11->CommandList).SharedReferenceCount.ReferenceController;
  (pFVar11->CommandList).Object = pFVar3;
  (pFVar11->CommandList).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  TDelegate<void___cdecl(FToolBarBuilder_&),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(FToolBarBuilder_&),FDefaultDelegateUserPolicy> *)(pFVar11 + 1),
             param_4);
  if (pFVar10 != (FExtensionBase *)0x0) {
    LOCK();
    (pFVar10->Hook).ComparisonIndex.Value = (pFVar10->Hook).ComparisonIndex.Value + 1;
    UNLOCK();
  }
  pFVar9 = (this->Extensions).AllocatorInstance.Data;
  local_38 = pFVar11;
  local_30 = pFVar10;
  if (((pFVar9 <= (FScriptContainerElement *)&local_38) &&
      ((FScriptContainerElement *)&local_38 < pFVar9 + (longlong)(this->Extensions).ArrayMax * 0x10)
      ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedRef<FExtensionBase_const_,1> *)(*pcVar4)();
    return pTVar8;
  }
  iVar6 = (this->Extensions).ArrayNum;
  piVar1 = &(this->Extensions).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar1);
  }
  (this->Extensions).ArrayNum = iVar6 + 1;
  pFVar9 = (this->Extensions).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(FExtensionBase **)pFVar9 = local_38;
  *(FExtensionBase **)(pFVar9 + 8) = local_30;
  local_30 = (FExtensionBase *)0x0;
  local_38 = (FExtensionBase *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  __return_storage_ptr__->Object = pFVar11;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar10;
  if (pFVar10 != (FExtensionBase *)0x0) {
    LOCK();
    (pFVar10->Hook).ComparisonIndex.Value = (pFVar10->Hook).ComparisonIndex.Value + 1;
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar10);
  return __return_storage_ptr__;
}

// Apply @ 1427d0c50

void __thiscall
FExtender::Apply(FExtender *this,FName param_1,Position param_2,FMenuBarBuilder *param_3)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  FUICommandList *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  TSharedRef<FUICommandList_const_,1> local_68;
  FReadAccessScope local_58;
  
  for (iVar11 = 0; (-1 < iVar11 && (iVar11 < (this->Extensions).ArrayNum)); iVar11 = iVar11 + 1) {
    if (iVar11 < 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pFVar10 = (this->Extensions).AllocatorInstance.Data + (longlong)iVar11 * 0x10;
    if (*(longlong *)pFVar10 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar9 = (**(code **)(**(longlong **)pFVar10 + 8))();
    if (iVar9 == 0) {
      if (*(longlong *)pFVar10 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if (*(FName *)(*(longlong *)pFVar10 + 8) == param_1) {
        if (*(longlong *)pFVar10 == 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        lVar1 = *(longlong *)pFVar10;
        if (*(Position *)(lVar1 + 0x10) == param_2) {
          pTVar2 = *(TReferenceControllerBase<1> **)(pFVar10 + 8);
          if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
          }
          if (*(longlong *)pFVar10 == 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L"");
            if (bVar8) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          if (*(longlong *)(*(longlong *)pFVar10 + 0x18) != 0) {
            if (*(longlong *)pFVar10 == 0) {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L"");
              if (bVar8) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            lVar3 = *(longlong *)pFVar10;
            if (*(longlong *)(lVar3 + 0x18) == 0) {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x408,L"");
              if (bVar8) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            pFVar4 = *(FUICommandList **)(lVar3 + 0x18);
            pTVar5 = *(TReferenceControllerBase<1> **)(lVar3 + 0x20);
            if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
              UNLOCK();
            }
            if (pFVar4 == (FUICommandList *)0x0) {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x25d,L"");
              if (bVar8) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_68.Object = pFVar4;
            local_68.SharedReferenceCount.ReferenceController = pTVar5;
            FMultiBoxBuilder::PushCommandList((FMultiBoxBuilder *)param_3,&local_68);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar5);
          }
          if (lVar1 == 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L"");
            if (bVar8) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x28),
                     &local_58);
          if ((*(int *)(lVar1 + 0x38) != 0) &&
             (plVar6 = *(longlong **)(lVar1 + 0x30), plVar6 != (longlong *)0x0)) {
            (**(code **)(*plVar6 + 0x68))(plVar6,param_3);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_58);
          if (*(longlong *)pFVar10 == 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L"");
            if (bVar8) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          if (*(longlong *)(*(longlong *)pFVar10 + 0x18) != 0) {
            FMultiBoxBuilder::PopCommandList((FMultiBoxBuilder *)param_3);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar2);
        }
      }
    }
  }
  return;
}

// Apply @ 1427d0f80

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FExtender::Apply(FExtender *this,FName param_1,Position param_2,FMenuBuilder *param_3)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  FUICommandList *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  TSharedRef<FUICommandList_const_,1> local_68;
  FReadAccessScope local_58;
  
  for (iVar11 = 0; (-1 < iVar11 && (iVar11 < (this->Extensions).ArrayNum)); iVar11 = iVar11 + 1) {
    if (iVar11 < 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pFVar10 = (this->Extensions).AllocatorInstance.Data + (longlong)iVar11 * 0x10;
    if (*(longlong *)pFVar10 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar9 = (**(code **)(**(longlong **)pFVar10 + 8))();
    if (iVar9 == 1) {
      if (*(longlong *)pFVar10 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if (*(FName *)(*(longlong *)pFVar10 + 8) == param_1) {
        if (*(longlong *)pFVar10 == 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        lVar1 = *(longlong *)pFVar10;
        if (*(Position *)(lVar1 + 0x10) == param_2) {
          pTVar2 = *(TReferenceControllerBase<1> **)(pFVar10 + 8);
          if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
          }
          if (*(longlong *)pFVar10 == 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L"");
            if (bVar8) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          if (*(longlong *)(*(longlong *)pFVar10 + 0x18) != 0) {
            if (*(longlong *)pFVar10 == 0) {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L"");
              if (bVar8) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            lVar3 = *(longlong *)pFVar10;
            if (*(longlong *)(lVar3 + 0x18) == 0) {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x408,L"");
              if (bVar8) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            pFVar4 = *(FUICommandList **)(lVar3 + 0x18);
            pTVar5 = *(TReferenceControllerBase<1> **)(lVar3 + 0x20);
            if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
              UNLOCK();
            }
            if (pFVar4 == (FUICommandList *)0x0) {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x25d,L"");
              if (bVar8) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_68.Object = pFVar4;
            local_68.SharedReferenceCount.ReferenceController = pTVar5;
            FMultiBoxBuilder::PushCommandList((FMultiBoxBuilder *)param_3,&local_68);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar5);
          }
          if (lVar1 == 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L"");
            if (bVar8) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x28),
                     &local_58);
          if ((*(int *)(lVar1 + 0x38) != 0) &&
             (plVar6 = *(longlong **)(lVar1 + 0x30), plVar6 != (longlong *)0x0)) {
            (**(code **)(*plVar6 + 0x68))(plVar6,param_3);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_58);
          if (*(longlong *)pFVar10 == 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L"");
            if (bVar8) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          if (*(longlong *)(*(longlong *)pFVar10 + 0x18) != 0) {
            FMultiBoxBuilder::PopCommandList((FMultiBoxBuilder *)param_3);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar2);
        }
      }
    }
  }
  return;
}

// Apply @ 1427d12b0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FExtender::Apply(FExtender *this,FName param_1,Position param_2,FToolBarBuilder *param_3)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  FUICommandList *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  TSharedRef<FUICommandList_const_,1> local_68;
  FReadAccessScope local_58;
  
  for (iVar11 = 0; (-1 < iVar11 && (iVar11 < (this->Extensions).ArrayNum)); iVar11 = iVar11 + 1) {
    if (iVar11 < 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pFVar10 = (this->Extensions).AllocatorInstance.Data + (longlong)iVar11 * 0x10;
    if (*(longlong *)pFVar10 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar9 = (**(code **)(**(longlong **)pFVar10 + 8))();
    if (iVar9 == 2) {
      if (*(longlong *)pFVar10 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if (*(FName *)(*(longlong *)pFVar10 + 8) == param_1) {
        if (*(longlong *)pFVar10 == 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        lVar1 = *(longlong *)pFVar10;
        if (*(Position *)(lVar1 + 0x10) == param_2) {
          pTVar2 = *(TReferenceControllerBase<1> **)(pFVar10 + 8);
          if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
          }
          if (*(longlong *)pFVar10 == 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L"");
            if (bVar8) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          if (*(longlong *)(*(longlong *)pFVar10 + 0x18) != 0) {
            if (*(longlong *)pFVar10 == 0) {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L"");
              if (bVar8) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            lVar3 = *(longlong *)pFVar10;
            if (*(longlong *)(lVar3 + 0x18) == 0) {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x408,L"");
              if (bVar8) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            pFVar4 = *(FUICommandList **)(lVar3 + 0x18);
            pTVar5 = *(TReferenceControllerBase<1> **)(lVar3 + 0x20);
            if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
              UNLOCK();
            }
            if (pFVar4 == (FUICommandList *)0x0) {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x25d,L"");
              if (bVar8) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_68.Object = pFVar4;
            local_68.SharedReferenceCount.ReferenceController = pTVar5;
            FMultiBoxBuilder::PushCommandList((FMultiBoxBuilder *)param_3,&local_68);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar5);
          }
          if (lVar1 == 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L"");
            if (bVar8) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x28),
                     &local_58);
          if ((*(int *)(lVar1 + 0x38) != 0) &&
             (plVar6 = *(longlong **)(lVar1 + 0x30), plVar6 != (longlong *)0x0)) {
            (**(code **)(*plVar6 + 0x68))(plVar6,param_3);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_58);
          if (*(longlong *)pFVar10 == 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L"");
            if (bVar8) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          if (*(longlong *)(*(longlong *)pFVar10 + 0x18) != 0) {
            FMultiBoxBuilder::PopCommandList((FMultiBoxBuilder *)param_3);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar2);
        }
      }
    }
  }
  return;
}

// Combine @ 1427ecd70

TSharedRef<FExtender,1> * __cdecl
FExtender::Combine(TSharedRef<FExtender,1> *__return_storage_ptr__,
                  TArray<TSharedPtr<FExtender,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  FExtender *pFVar1;
  FScriptContainerElement *pFVar2;
  FExtender *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<FExtender,1> *pTVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  
  pTVar8 = ::operator_new(0x20);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FExtender *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)&___7__TIntrusiveReferenceController_VFExtender___00_SharedPointerInternals__6B_;
    pTVar8[1]._padding_ = 0;
    pTVar8[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[1].WeakReferenceCount = (atomic<int>)0x0;
    __return_storage_ptr__->Object = (FExtender *)(pTVar8 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar8;
    if ((pTVar8 + 1 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TSharedRef<FExtender,1> *)(*pcVar4)();
      return pTVar9;
    }
  }
  iVar10 = param_1->ArrayNum;
  uVar11 = 0;
  if (0 < iVar10) {
    lVar12 = 0;
    do {
      pFVar1 = __return_storage_ptr__->Object;
      uVar6 = 0;
      if ((int)uVar11 < iVar10) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TSharedRef<FExtender,1> *)(*pcVar4)();
        return pTVar9;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      if ((*(longlong *)(pFVar2 + lVar12) == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TSharedRef<FExtender,1> *)(*pcVar4)();
        return pTVar9;
      }
      pFVar3 = *(FExtender **)(pFVar2 + lVar12);
      if ((pFVar1 == pFVar3) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TSharedRef<FExtender,1> *)(*pcVar4)();
        return pTVar9;
      }
      iVar10 = (pFVar3->Extensions).ArrayNum;
      if (iVar10 != 0) {
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,iVar10,(ForAnyElementType *)pFVar1,&(pFVar1->Extensions).ArrayNum,
                           &(pFVar1->Extensions).ArrayMax);
        ConstructItems<TSharedPtr<FExtensionBase_const_,1>,TSharedPtr<FExtensionBase_const_,1>,int>
                  ((pFVar1->Extensions).AllocatorInstance.Data + (longlong)iVar7 * 0x10,
                   (TSharedPtr<FExtensionBase_const_,1> *)
                   (pFVar3->Extensions).AllocatorInstance.Data,iVar10);
      }
      iVar10 = param_1->ArrayNum;
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0x10;
    } while ((int)uVar11 < iVar10);
  }
  return __return_storage_ptr__;
}

// RemoveExtension @ 1428327a0

void __thiscall
FExtender::RemoveExtension(FExtender *this,TSharedRef<FExtensionBase_const_,1> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FExtensionBase *local_38;
  TReferenceControllerBase<1> *local_30;
  
  local_38 = param_1->Object;
  local_30 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar1 = (this->Extensions).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar1 + (longlong)(this->Extensions).ArrayMax * 0x10))
  {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar8 = (this->Extensions).ArrayNum;
  lVar4 = (longlong)iVar8;
  if (iVar8 != 0) {
    pFVar1 = (this->Extensions).AllocatorInstance.Data;
    iVar10 = 0;
    bVar3 = *(FExtensionBase **)pFVar1 != local_38;
    lVar6 = 0;
    iVar8 = 0;
    do {
      lVar6 = lVar6 + 1;
      iVar9 = iVar8 + 1;
      if (lVar6 < lVar4) {
        pFVar5 = pFVar1 + lVar6 * 0x10;
        do {
          if (bVar3 != (*(FExtensionBase **)pFVar5 != local_38)) break;
          iVar9 = iVar9 + 1;
          lVar6 = lVar6 + 1;
          pFVar5 = pFVar5 + 0x10;
        } while (lVar6 < lVar4);
      }
      iVar7 = iVar9 - iVar8;
      if (bVar3 == false) {
        DestructItems<TSharedPtr<FExtensionBase_const_,1>,int>
                  ((TSharedPtr<FExtensionBase_const_,1> *)(pFVar1 + (longlong)iVar8 * 0x10),iVar7);
      }
      else {
        if (iVar10 != iVar8) {
          memmove(pFVar1 + (longlong)iVar10 * 0x10,pFVar1 + (longlong)iVar8 * 0x10,
                  (longlong)iVar7 << 4);
        }
        iVar10 = iVar10 + iVar7;
      }
      bVar3 = (bool)(bVar3 ^ 1);
      iVar8 = iVar9;
    } while (lVar6 < lVar4);
    (this->Extensions).ArrayNum = iVar10;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  return;
}

