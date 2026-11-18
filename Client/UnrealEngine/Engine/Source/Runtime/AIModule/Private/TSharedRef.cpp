// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 7

// TSharedRef<FGameplayDebuggerCategory,1><FGameplayDebuggerCategory_AI> @ 146f15310

TSharedRef<FGameplayDebuggerCategory,1> * __thiscall
TSharedRef<FGameplayDebuggerCategory,1>::
TSharedRef<FGameplayDebuggerCategory,1><FGameplayDebuggerCategory_AI>
          (TSharedRef<FGameplayDebuggerCategory,1> *this,
          TRawPtrProxy<FGameplayDebuggerCategory_AI> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FGameplayDebuggerCategory_AI *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<FGameplayDebuggerCategory,1> *pTVar9;
  
  this->Object = (FGameplayDebuggerCategory *)param_1->Object;
  pFVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFGameplayDebuggerCategory_AI__U__DefaultDeleter_VFGameplayDebuggerCategory_AI___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (FGameplayDebuggerCategory_AI *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<FGameplayDebuggerCategory,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FGameplayDebuggerCategory_AI *)0x0) &&
     (((plVar1 = &pFVar4->_padding_, pFVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar4->_padding_ = (longlong)pFVar4;
    if (pTVar8 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<FGameplayDebuggerCategory,1><FGameplayDebuggerCategory_BehaviorTree> @ 146f15410

TSharedRef<FGameplayDebuggerCategory,1> * __thiscall
TSharedRef<FGameplayDebuggerCategory,1>::
TSharedRef<FGameplayDebuggerCategory,1><FGameplayDebuggerCategory_BehaviorTree>
          (TSharedRef<FGameplayDebuggerCategory,1> *this,
          TRawPtrProxy<FGameplayDebuggerCategory_BehaviorTree> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FGameplayDebuggerCategory_BehaviorTree *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<FGameplayDebuggerCategory,1> *pTVar9;
  
  this->Object = (FGameplayDebuggerCategory *)param_1->Object;
  pFVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFGameplayDebuggerCategory_BehaviorTree__U__DefaultDeleter_VFGameplayDebuggerCategory_BehaviorTree___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (FGameplayDebuggerCategory_BehaviorTree *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<FGameplayDebuggerCategory,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FGameplayDebuggerCategory_BehaviorTree *)0x0) &&
     (((plVar1 = &pFVar4->_padding_, pFVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar4->_padding_ = (longlong)pFVar4;
    if (pTVar8 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<FGameplayDebuggerCategory,1><FGameplayDebuggerCategory_EQS> @ 146f15510

TSharedRef<FGameplayDebuggerCategory,1> * __thiscall
TSharedRef<FGameplayDebuggerCategory,1>::
TSharedRef<FGameplayDebuggerCategory,1><FGameplayDebuggerCategory_EQS>
          (TSharedRef<FGameplayDebuggerCategory,1> *this,
          TRawPtrProxy<FGameplayDebuggerCategory_EQS> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FGameplayDebuggerCategory_EQS *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<FGameplayDebuggerCategory,1> *pTVar9;
  
  this->Object = (FGameplayDebuggerCategory *)param_1->Object;
  pFVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFGameplayDebuggerCategory_EQS__U__DefaultDeleter_VFGameplayDebuggerCategory_EQS___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (FGameplayDebuggerCategory_EQS *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<FGameplayDebuggerCategory,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FGameplayDebuggerCategory_EQS *)0x0) &&
     (((plVar1 = &pFVar4->_padding_, pFVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar4->_padding_ = (longlong)pFVar4;
    if (pTVar8 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<FGameplayDebuggerCategory,1><FGameplayDebuggerCategory_NavLocalGrid> @ 146f86610

TSharedRef<FGameplayDebuggerCategory,1> * __thiscall
TSharedRef<FGameplayDebuggerCategory,1>::
TSharedRef<FGameplayDebuggerCategory,1><FGameplayDebuggerCategory_NavLocalGrid>
          (TSharedRef<FGameplayDebuggerCategory,1> *this,
          TRawPtrProxy<FGameplayDebuggerCategory_NavLocalGrid> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FGameplayDebuggerCategory_NavLocalGrid *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<FGameplayDebuggerCategory,1> *pTVar9;
  
  this->Object = (FGameplayDebuggerCategory *)param_1->Object;
  pFVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFGameplayDebuggerCategory_NavLocalGrid__U__DefaultDeleter_VFGameplayDebuggerCategory_NavLocalGrid___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (FGameplayDebuggerCategory_NavLocalGrid *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<FGameplayDebuggerCategory,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FGameplayDebuggerCategory_NavLocalGrid *)0x0) &&
     (((plVar1 = &pFVar4->_padding_, pFVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar4->_padding_ = (longlong)pFVar4;
    if (pTVar8 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<FGameplayDebuggerCategory,1><FGameplayDebuggerCategory_Navmesh> @ 146f86710

TSharedRef<FGameplayDebuggerCategory,1> * __thiscall
TSharedRef<FGameplayDebuggerCategory,1>::
TSharedRef<FGameplayDebuggerCategory,1><FGameplayDebuggerCategory_Navmesh>
          (TSharedRef<FGameplayDebuggerCategory,1> *this,
          TRawPtrProxy<FGameplayDebuggerCategory_Navmesh> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FGameplayDebuggerCategory_Navmesh *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<FGameplayDebuggerCategory,1> *pTVar9;
  
  this->Object = (FGameplayDebuggerCategory *)param_1->Object;
  pFVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFGameplayDebuggerCategory_Navmesh__U__DefaultDeleter_VFGameplayDebuggerCategory_Navmesh___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (FGameplayDebuggerCategory_Navmesh *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<FGameplayDebuggerCategory,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FGameplayDebuggerCategory_Navmesh *)0x0) &&
     (((plVar1 = &pFVar4->_padding_, pFVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar4->_padding_ = (longlong)pFVar4;
    if (pTVar8 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<FGameplayDebuggerCategory,1><FGameplayDebuggerCategory_Perception> @ 146f86810

TSharedRef<FGameplayDebuggerCategory,1> * __thiscall
TSharedRef<FGameplayDebuggerCategory,1>::
TSharedRef<FGameplayDebuggerCategory,1><FGameplayDebuggerCategory_Perception>
          (TSharedRef<FGameplayDebuggerCategory,1> *this,
          TRawPtrProxy<FGameplayDebuggerCategory_Perception> *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  FGameplayDebuggerCategory_Perception *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<FGameplayDebuggerCategory,1> *pTVar9;
  
  this->Object = (FGameplayDebuggerCategory *)param_1->Object;
  pFVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFGameplayDebuggerCategory_Perception__U__DefaultDeleter_VFGameplayDebuggerCategory_Perception___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (FGameplayDebuggerCategory_Perception *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<FGameplayDebuggerCategory,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FGameplayDebuggerCategory_Perception *)0x0) &&
     (((puVar1 = &pFVar4->field_0x10, *(longlong *)&pFVar4->field_0x8 == 0 ||
       (*(longlong *)puVar1 == 0)) || (*(int *)(*(longlong *)puVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FGameplayDebuggerCategory_Perception **)&pFVar4->field_0x8 = pFVar4;
    if (pTVar8 != *(TReferenceControllerBase<1> **)puVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = *(longlong **)puVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *(TReferenceControllerBase<1> **)puVar1 = pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

// TSharedRef<FGameplayDebuggerCategory,1><FGameplayDebuggerCategory_PerceptionSystem> @ 146f86910

TSharedRef<FGameplayDebuggerCategory,1> * __thiscall
TSharedRef<FGameplayDebuggerCategory,1>::
TSharedRef<FGameplayDebuggerCategory,1><FGameplayDebuggerCategory_PerceptionSystem>
          (TSharedRef<FGameplayDebuggerCategory,1> *this,
          TRawPtrProxy<FGameplayDebuggerCategory_PerceptionSystem> *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  FGameplayDebuggerCategory_PerceptionSystem *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<FGameplayDebuggerCategory,1> *pTVar9;
  
  this->Object = (FGameplayDebuggerCategory *)param_1->Object;
  pFVar4 = param_1->Object;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFGameplayDebuggerCategory_PerceptionSystem__U__DefaultDeleter_VFGameplayDebuggerCategory_PerceptionSystem___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar8;
  if (param_1->Object == (FGameplayDebuggerCategory_PerceptionSystem *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedRef<FGameplayDebuggerCategory,1> *)(*pcVar6)();
      return pTVar9;
    }
  }
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FGameplayDebuggerCategory_PerceptionSystem *)0x0) &&
     (((puVar1 = &pFVar4->field_0x10, *(longlong *)&pFVar4->field_0x8 == 0 ||
       (*(longlong *)puVar1 == 0)) || (*(int *)(*(longlong *)puVar1 + 8) < 1)))) {
    pTVar8 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FGameplayDebuggerCategory_PerceptionSystem **)&pFVar4->field_0x8 = pFVar4;
    if (pTVar8 != *(TReferenceControllerBase<1> **)puVar1) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = *(longlong **)puVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *(TReferenceControllerBase<1> **)puVar1 = pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return this;
}

