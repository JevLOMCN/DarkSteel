// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 14

// FInputNodeController @ 14ae59130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputNodeController * __thiscall
Metasound::Frontend::FInputNodeController::FInputNodeController
          (FInputNodeController *this,EPrivateToken param_1,FInitParams *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [56];
  longlong *local_70;
  undefined1 local_68 [56];
  longlong *local_30;
  IGraphController *local_28;
  FSharedReferencer<1> local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8._0_8_ = *(undefined8 *)&param_2->NodePtr;
  local_a8._16_8_ = *(undefined8 *)&(param_2->NodePtr).field_0x10;
  local_70 = (longlong *)0x0;
  if (local_a8._16_8_ != 0) {
    puVar1 = *(undefined8 **)&(param_2->NodePtr).field_0x38;
    puVar4 = (undefined8 *)&(param_2->NodePtr).field_0x20;
    if (puVar1 != (undefined8 *)0x0) {
      puVar4 = puVar1;
    }
    (**(code **)*puVar4)(puVar4,local_a8 + 0x20);
  }
  local_68._0_8_ = *(undefined8 *)&param_2->ClassPtr;
  local_68._16_8_ = *(undefined8 *)&(param_2->ClassPtr).field_0x10;
  local_30 = (longlong *)0x0;
  if (local_68._16_8_ != 0) {
    puVar1 = *(undefined8 **)&(param_2->ClassPtr).field_0x38;
    puVar4 = (undefined8 *)&(param_2->ClassPtr).field_0x20;
    if (puVar1 != (undefined8 *)0x0) {
      puVar4 = puVar1;
    }
    (**(code **)*puVar4)(puVar4,local_68 + 0x20);
  }
  local_28 = (param_2->OwningGraph).Object;
  local_20.ReferenceController = (param_2->OwningGraph).SharedReferenceCount.ReferenceController;
  if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_20.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FBaseNodeController::FBaseNodeController((FBaseNodeController *)this,(FInitParams *)local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  if (local_68._16_8_ != 0) {
    plVar3 = (longlong *)(local_68 + 0x20);
    if (local_30 != (longlong *)0x0) {
      plVar3 = local_30;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (local_a8._16_8_ != 0) {
    plVar3 = (longlong *)(local_a8 + 0x20);
    if (local_70 != (longlong *)0x0) {
      plVar3 = local_70;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FInputNodeController_Frontend_Metasound__6B_;
  (this->OwningGraphClassInputPtr).CachedObjectPtr =
       (param_2->OwningGraphClassInputPtr).CachedObjectPtr;
  lVar2 = *(longlong *)&(param_2->OwningGraphClassInputPtr).GetObject;
  *(longlong *)&(this->OwningGraphClassInputPtr).GetObject = lVar2;
  *(undefined8 *)&(this->OwningGraphClassInputPtr).GetObject.field_0x28 = 0;
  if (lVar2 != 0) {
    puVar1 = *(undefined8 **)&(param_2->OwningGraphClassInputPtr).GetObject.field_0x28;
    puVar4 = (undefined8 *)&(param_2->OwningGraphClassInputPtr).GetObject.field_0x10;
    if (puVar1 != (undefined8 *)0x0) {
      puVar4 = puVar1;
    }
    (**(code **)*puVar4)();
  }
  (this->GraphPtr).CachedObjectPtr = (param_2->GraphPtr).CachedObjectPtr;
  lVar2 = *(longlong *)&(param_2->GraphPtr).GetObject;
  *(longlong *)&(this->GraphPtr).GetObject = lVar2;
  *(undefined8 *)&(this->GraphPtr).GetObject.field_0x28 = 0;
  if (lVar2 != 0) {
    puVar1 = *(undefined8 **)&(param_2->GraphPtr).GetObject.field_0x28;
    puVar4 = (undefined8 *)&(param_2->GraphPtr).GetObject.field_0x10;
    if (puVar1 != (undefined8 *)0x0) {
      puVar4 = puVar1;
    }
    (**(code **)*puVar4)();
  }
  return this;
}

// ~FInputNodeController @ 14ae5c1c0

void __thiscall
Metasound::Frontend::FInputNodeController::~FInputNodeController(FInputNodeController *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&(this->GraphPtr).GetObject != 0) {
    plVar1 = *(longlong **)&(this->GraphPtr).GetObject.field_0x28;
    plVar2 = (longlong *)&(this->GraphPtr).GetObject.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&(this->OwningGraphClassInputPtr).GetObject != 0) {
    plVar1 = *(longlong **)&(this->OwningGraphClassInputPtr).GetObject.field_0x28;
    plVar2 = (longlong *)&(this->OwningGraphClassInputPtr).GetObject.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  FBaseNodeController::~FBaseNodeController((FBaseNodeController *)this);
  return;
}

// ClearInputLiteral @ 14ae66190

bool __thiscall
Metasound::Frontend::FInputNodeController::ClearInputLiteral
          (FInputNodeController *this,FGuid *param_1)

{
  return false;
}

// CreateConstInputNodeHandle @ 14ae66c70

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<Metasound::Frontend::INodeController_const_,1> * __cdecl
Metasound::Frontend::FInputNodeController::CreateConstInputNodeHandle
          (TSharedRef<Metasound::Frontend::INodeController_const_,1> *__return_storage_ptr__,
          FInitParams *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  EMetasoundFrontendClassType EVar5;
  bool bVar6;
  undefined8 uVar7;
  FGuid *this;
  longlong lVar8;
  TReferenceControllerBase<1> *pTVar9;
  TSharedRef<Metasound::Frontend::INodeController_const_,1> *pTVar10;
  TSharedRef<Metasound::Frontend::INodeController,1> *pTVar11;
  longlong *plVar12;
  ForAnyElementType FVar13;
  INodeController *pIVar14;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  TSharedRef<Metasound::Frontend::INodeController,1> local_38;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(param_1->NodePtr).field_0x10);
  plVar3 = *(longlong **)&(param_1->NodePtr).field_0x38;
  pcVar4 = *(code **)&(param_1->NodePtr).field_0x10;
  plVar12 = (longlong *)&(param_1->NodePtr).field_0x20;
  if (plVar3 != (longlong *)0x0) {
    plVar12 = plVar3;
  }
  uVar7 = (**(code **)(*plVar12 + 8))();
  this = (FGuid *)(*pcVar4)(uVar7);
  *(FGuid **)&param_1->NodePtr = this;
  if (this != (FGuid *)0x0) {
    UE::Core::Private::Function::CheckCallable(*(void **)&(param_1->ClassPtr).field_0x10);
    plVar3 = *(longlong **)&(param_1->ClassPtr).field_0x38;
    pcVar4 = *(code **)&(param_1->ClassPtr).field_0x10;
    plVar12 = (longlong *)&(param_1->ClassPtr).field_0x20;
    if (plVar3 != (longlong *)0x0) {
      plVar12 = plVar3;
    }
    uVar7 = (**(code **)(*plVar12 + 8))();
    lVar8 = (*pcVar4)(uVar7);
    *(longlong *)&param_1->ClassPtr = lVar8;
    if (lVar8 != 0) {
      EVar5 = FMetasoundFrontendClassMetadata::GetType
                        ((FMetasoundFrontendClassMetadata *)(lVar8 + 0x18));
      if (EVar5 == Input) {
        if (((*(uint *)(lVar8 + 0x14) == this[1].D && *(uint *)(lVar8 + 0x10) == this[1].C) &&
            *(uint *)(lVar8 + 0xc) == this[1].B) && *(uint *)(lVar8 + 8) == this[1].A) {
          pTVar9 = ::operator_new(0x140);
          if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
            pTVar9 = (TReferenceControllerBase<1> *)0x0;
            pIVar14 = (INodeController *)&DAT_00000010;
LAB_14ae66dc2:
            local_38.SharedReferenceCount.ReferenceController = pTVar9;
            if (((*(longlong *)&pIVar14->field_0x8 == 0) || (*(longlong *)&pIVar14->field_0x10 == 0)
                ) || (*(int *)(*(longlong *)&pIVar14->field_0x10 + 8) < 1)) {
              if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
                UNLOCK();
              }
              *(INodeController **)&pIVar14->field_0x8 = pIVar14;
              if (pTVar9 != *(TReferenceControllerBase<1> **)&pIVar14->field_0x10) {
                if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
                  UNLOCK();
                }
                plVar3 = *(longlong **)&pIVar14->field_0x10;
                if (plVar3 != (longlong *)0x0) {
                  LOCK();
                  piVar1 = (int *)((longlong)plVar3 + 0xc);
                  iVar2 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar2 == 1) {
                    (**(code **)(*plVar3 + 8))(plVar3,1);
                  }
                }
                *(TReferenceControllerBase<1> **)&pIVar14->field_0x10 = pTVar9;
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar9);
            }
          }
          else {
            pTVar9->SharedReferenceCount = (atomic<int>)0x1;
            pTVar9->WeakReferenceCount = (atomic<int>)0x1;
            pTVar9->_padding_ =
                 (longlong)
                 &
                 ___7__TIntrusiveReferenceController___CBVFInputNodeController_Frontend_Metasound___00_SharedPointerInternals__6B_
            ;
            FInputNodeController((FInputNodeController *)(pTVar9 + 1),Token,param_1);
            pIVar14 = (INodeController *)(pTVar9 + 1);
            if (pIVar14 != (INodeController *)0x0) goto LAB_14ae66dc2;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L"");
            local_38.SharedReferenceCount.ReferenceController = pTVar9;
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              pTVar10 = (TSharedRef<Metasound::Frontend::INodeController_const_,1> *)(*pcVar4)();
              return pTVar10;
            }
          }
          __return_storage_ptr__->Object = pIVar14;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
               local_38.SharedReferenceCount.ReferenceController;
          if (local_38.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          goto LAB_14ae66f6e;
        }
        if (2 < (byte)LogMetaSound._0_1_) {
          local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_58.Data.ArrayNum = 0;
          local_58.Data.ArrayMax = 0;
          FGuid::AppendString((FGuid *)(lVar8 + 8),&local_58,Digits);
          local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_68.Data.ArrayNum = 0;
          local_68.Data.ArrayMax = 0;
          FGuid::AppendString(this + 1,&local_68,Digits);
          local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_78.Data.ArrayNum = 0;
          local_78.Data.ArrayMax = 0;
          FGuid::AppendString(this,&local_78,Digits);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          FVar13.Data = local_58.Data.AllocatorInstance.Data;
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
            FVar13.Data = local_58.Data.AllocatorInstance.Data;
          }
          goto LAB_14ae66f40;
        }
      }
      else if (2 < (byte)LogMetaSound._0_1_) {
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_48.Data.ArrayNum = 0;
        local_48.Data.ArrayMax = 0;
        FGuid::AppendString((FGuid *)(lVar8 + 8),&local_48,Digits);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        FVar13.Data = local_48.Data.AllocatorInstance.Data;
LAB_14ae66f40:
        if (FVar13.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar13.Data);
        }
      }
    }
  }
  pTVar11 = INodeController::GetInvalidHandle(&local_38);
  __return_storage_ptr__->Object = pTVar11->Object;
  pTVar9 = (pTVar11->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
LAB_14ae66f6e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// CreateInputController @ 14ae67d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<Metasound::Frontend::IInputController,1> * __thiscall
Metasound::Frontend::FInputNodeController::CreateInputController
          (FInputNodeController *this,
          TSharedRef<Metasound::Frontend::IInputController,1> *__return_storage_ptr__,FGuid *param_1
          ,TAccessPtr<FMetasoundFrontendVertex_const_> *param_2,
          TAccessPtr<FMetasoundFrontendClassInput_const_> *param_3,
          TSharedRef<Metasound::Frontend::INodeController,1> *param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedRef<Metasound::Frontend::IInputController,1> *pTVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  TReferenceControllerBase<1> *pTVar11;
  IInputController *pIVar12;
  undefined1 auStack_198 [32];
  undefined1 local_178 [72];
  longlong *local_130;
  FMetasoundFrontendClassInput *local_128;
  longlong local_118;
  longlong local_108 [3];
  longlong *local_f0;
  FMetasoundFrontendClassInput *local_e8;
  longlong local_d8;
  longlong local_c8 [3];
  longlong *local_b0;
  FMetasoundFrontendGraph *local_a8;
  longlong local_98;
  longlong local_88 [3];
  longlong *local_70;
  INodeController *local_68;
  FSharedReferencer<1> local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_198;
  local_178._16_8_ = param_2->CachedObjectPtr;
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  local_178._0_4_ = param_1->A;
  local_178._4_4_ = param_1->B;
  local_178._8_4_ = param_1->C;
  local_178._12_4_ = param_1->D;
  local_178._32_8_ = *(undefined8 *)&param_2->GetObject;
  local_130 = (longlong *)0x0;
  if (local_178._32_8_ != 0) {
    puVar3 = *(undefined8 **)&(param_2->GetObject).field_0x28;
    puVar8 = (undefined8 *)&(param_2->GetObject).field_0x10;
    if (puVar3 != (undefined8 *)0x0) {
      puVar8 = puVar3;
    }
    (**(code **)*puVar8)(local_178._0_4_,local_178 + 0x30);
  }
  local_128 = param_3->CachedObjectPtr;
  local_118 = *(longlong *)&param_3->GetObject;
  local_f0 = (longlong *)0x0;
  if (local_118 != 0) {
    puVar3 = *(undefined8 **)&(param_3->GetObject).field_0x28;
    puVar8 = (undefined8 *)&(param_3->GetObject).field_0x10;
    if (puVar3 != (undefined8 *)0x0) {
      puVar8 = puVar3;
    }
    (**(code **)*puVar8)(puVar8,local_108);
  }
  local_e8 = (this->OwningGraphClassInputPtr).CachedObjectPtr;
  local_d8 = *(longlong *)&(this->OwningGraphClassInputPtr).GetObject;
  local_b0 = (longlong *)0x0;
  if (local_d8 != 0) {
    puVar3 = *(undefined8 **)&(this->OwningGraphClassInputPtr).GetObject.field_0x28;
    puVar8 = (undefined8 *)&(this->OwningGraphClassInputPtr).GetObject.field_0x10;
    if (puVar3 != (undefined8 *)0x0) {
      puVar8 = puVar3;
    }
    (**(code **)*puVar8)(puVar8,local_c8);
  }
  local_a8 = (this->GraphPtr).CachedObjectPtr;
  local_98 = *(longlong *)&(this->GraphPtr).GetObject;
  local_70 = (longlong *)0x0;
  if (local_98 != 0) {
    puVar3 = *(undefined8 **)&(this->GraphPtr).GetObject.field_0x28;
    puVar8 = (undefined8 *)&(this->GraphPtr).GetObject.field_0x10;
    if (puVar3 != (undefined8 *)0x0) {
      puVar8 = puVar3;
    }
    (**(code **)*puVar8)(puVar8,local_88);
  }
  local_68 = param_4->Object;
  local_60.ReferenceController = (param_4->SharedReferenceCount).ReferenceController;
  if (local_60.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_60.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_60.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = ::operator_new(0x150);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pIVar12 = (IInputController *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFInputNodeInputController_Frontend_Metasound___00_SharedPointerInternals__6B_
    ;
    FInputNodeInputController::FInputNodeInputController
              ((FInputNodeInputController *)(pTVar6 + 1),(FInitParams *)local_178);
    pIVar12 = (IInputController *)(pTVar6 + 1);
    pTVar11 = pTVar6;
    if (pIVar12 == (IInputController *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSharedRef<Metasound::Frontend::IInputController,1> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ae67f45;
    }
  }
  if (((*(longlong *)&pIVar12->field_0x8 == 0) || (*(longlong *)&pIVar12->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pIVar12->field_0x10 + 8) < 1)) {
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(IInputController **)&pIVar12->field_0x8 = pIVar12;
    if (pTVar11 != *(TReferenceControllerBase<1> **)&pIVar12->field_0x10) {
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar9 = *(longlong **)&pIVar12->field_0x10;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pIVar12->field_0x10 = pTVar11;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
LAB_14ae67f45:
  __return_storage_ptr__->Object = pIVar12;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar11;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.ReferenceController);
  if (local_98 != 0) {
    plVar9 = local_88;
    if (local_70 != (longlong *)0x0) {
      plVar9 = local_70;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if (local_d8 != 0) {
    plVar9 = local_c8;
    if (local_b0 != (longlong *)0x0) {
      plVar9 = local_b0;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if (local_118 != 0) {
    plVar9 = local_108;
    if (local_f0 != (longlong *)0x0) {
      plVar9 = local_f0;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if (local_178._32_8_ != 0) {
    plVar9 = (longlong *)(local_178 + 0x30);
    if (local_130 != (longlong *)0x0) {
      plVar9 = local_130;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if (*(longlong *)&param_2->GetObject != 0) {
    plVar9 = *(longlong **)&(param_2->GetObject).field_0x28;
    plVar10 = (longlong *)&(param_2->GetObject).field_0x10;
    if (plVar9 != (longlong *)0x0) {
      plVar10 = plVar9;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  if (*(longlong *)&param_3->GetObject != 0) {
    plVar9 = *(longlong **)&(param_3->GetObject).field_0x28;
    plVar10 = (longlong *)&(param_3->GetObject).field_0x10;
    if (plVar9 != (longlong *)0x0) {
      plVar10 = plVar9;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// CreateInputNodeHandle @ 14ae68d60

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<Metasound::Frontend::INodeController,1> * __cdecl
Metasound::Frontend::FInputNodeController::CreateInputNodeHandle
          (TSharedRef<Metasound::Frontend::INodeController,1> *__return_storage_ptr__,
          FInitParams *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  EMetasoundFrontendClassType EVar5;
  bool bVar6;
  undefined8 uVar7;
  FGuid *this;
  longlong lVar8;
  TReferenceControllerBase<1> *pTVar9;
  TSharedRef<Metasound::Frontend::INodeController,1> *pTVar10;
  longlong *plVar11;
  ForAnyElementType FVar12;
  INodeController *pIVar13;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(param_1->NodePtr).field_0x10);
  plVar3 = *(longlong **)&(param_1->NodePtr).field_0x38;
  pcVar4 = *(code **)&(param_1->NodePtr).field_0x10;
  plVar11 = (longlong *)&(param_1->NodePtr).field_0x20;
  if (plVar3 != (longlong *)0x0) {
    plVar11 = plVar3;
  }
  uVar7 = (**(code **)(*plVar11 + 8))();
  this = (FGuid *)(*pcVar4)(uVar7);
  *(FGuid **)&param_1->NodePtr = this;
  if (this != (FGuid *)0x0) {
    UE::Core::Private::Function::CheckCallable(*(void **)&(param_1->ClassPtr).field_0x10);
    plVar3 = *(longlong **)&(param_1->ClassPtr).field_0x38;
    pcVar4 = *(code **)&(param_1->ClassPtr).field_0x10;
    plVar11 = (longlong *)&(param_1->ClassPtr).field_0x20;
    if (plVar3 != (longlong *)0x0) {
      plVar11 = plVar3;
    }
    uVar7 = (**(code **)(*plVar11 + 8))();
    lVar8 = (*pcVar4)(uVar7);
    *(longlong *)&param_1->ClassPtr = lVar8;
    if (lVar8 == 0) goto LAB_14ae69045;
    EVar5 = FMetasoundFrontendClassMetadata::GetType
                      ((FMetasoundFrontendClassMetadata *)(lVar8 + 0x18));
    if (EVar5 == Input) {
      if (((*(uint *)(lVar8 + 0x14) == this[1].D && *(uint *)(lVar8 + 0x10) == this[1].C) &&
          *(uint *)(lVar8 + 0xc) == this[1].B) && *(uint *)(lVar8 + 8) == this[1].A) {
        pTVar9 = ::operator_new(0x140);
        if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
          pTVar9 = (TReferenceControllerBase<1> *)0x0;
          pIVar13 = (INodeController *)&DAT_00000010;
        }
        else {
          pTVar9->SharedReferenceCount = (atomic<int>)0x1;
          pTVar9->WeakReferenceCount = (atomic<int>)0x1;
          pTVar9->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_VFInputNodeController_Frontend_Metasound___00_SharedPointerInternals__6B_
          ;
          FInputNodeController((FInputNodeController *)(pTVar9 + 1),Token,param_1);
          pIVar13 = (INodeController *)(pTVar9 + 1);
          if (pIVar13 == (INodeController *)0x0) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L"");
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              pTVar10 = (TSharedRef<Metasound::Frontend::INodeController,1> *)(*pcVar4)();
              return pTVar10;
            }
            goto LAB_14ae68f1a;
          }
        }
        if (((*(longlong *)&pIVar13->field_0x8 == 0) || (*(longlong *)&pIVar13->field_0x10 == 0)) ||
           (*(int *)(*(longlong *)&pIVar13->field_0x10 + 8) < 1)) {
          if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
            UNLOCK();
          }
          *(INodeController **)&pIVar13->field_0x8 = pIVar13;
          if (pTVar9 != *(TReferenceControllerBase<1> **)&pIVar13->field_0x10) {
            if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
              UNLOCK();
            }
            plVar3 = *(longlong **)&pIVar13->field_0x10;
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
              }
            }
            *(TReferenceControllerBase<1> **)&pIVar13->field_0x10 = pTVar9;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar9);
        }
LAB_14ae68f1a:
        __return_storage_ptr__->Object = pIVar13;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
        if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
        return __return_storage_ptr__;
      }
      if ((byte)LogMetaSound._0_1_ < 3) goto LAB_14ae69045;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      FGuid::AppendString((FGuid *)(lVar8 + 8),&local_48,Digits);
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      FGuid::AppendString(this + 1,&local_58,Digits);
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      FGuid::AppendString(this,&local_68,Digits);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      FVar12.Data = local_48.Data.AllocatorInstance.Data;
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
        FVar12.Data = local_48.Data.AllocatorInstance.Data;
      }
    }
    else {
      if ((byte)LogMetaSound._0_1_ < 3) goto LAB_14ae69045;
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      FGuid::AppendString((FGuid *)(lVar8 + 8),&local_38,Digits);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      FVar12.Data = local_38.Data.AllocatorInstance.Data;
    }
    if (FVar12.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar12.Data);
    }
  }
LAB_14ae69045:
  INodeController::GetInvalidHandle(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// CreateOutputController @ 14ae6a350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<Metasound::Frontend::IOutputController,1> * __thiscall
Metasound::Frontend::FInputNodeController::CreateOutputController
          (FInputNodeController *this,
          TSharedRef<Metasound::Frontend::IOutputController,1> *__return_storage_ptr__,
          FGuid *param_1,TAccessPtr<FMetasoundFrontendVertex_const_> *param_2,
          TAccessPtr<FMetasoundFrontendClassOutput_const_> *param_3,
          TSharedRef<Metasound::Frontend::INodeController,1> *param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedRef<Metasound::Frontend::IOutputController,1> *pTVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  TReferenceControllerBase<1> *pTVar11;
  IOutputController *pIVar12;
  undefined1 auStack_198 [32];
  undefined1 local_178 [72];
  longlong *local_130;
  FMetasoundFrontendClassOutput *local_128;
  longlong local_118;
  longlong local_108 [3];
  longlong *local_f0;
  FMetasoundFrontendClassInput *local_e8;
  longlong local_d8;
  longlong local_c8 [3];
  longlong *local_b0;
  FMetasoundFrontendGraph *local_a8;
  longlong local_98;
  longlong local_88 [3];
  longlong *local_70;
  INodeController *local_68;
  FSharedReferencer<1> local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_198;
  local_178._16_8_ = param_2->CachedObjectPtr;
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  local_178._0_4_ = param_1->A;
  local_178._4_4_ = param_1->B;
  local_178._8_4_ = param_1->C;
  local_178._12_4_ = param_1->D;
  local_178._32_8_ = *(undefined8 *)&param_2->GetObject;
  local_130 = (longlong *)0x0;
  if (local_178._32_8_ != 0) {
    puVar3 = *(undefined8 **)&(param_2->GetObject).field_0x28;
    puVar8 = (undefined8 *)&(param_2->GetObject).field_0x10;
    if (puVar3 != (undefined8 *)0x0) {
      puVar8 = puVar3;
    }
    (**(code **)*puVar8)(local_178._0_4_,local_178 + 0x30);
  }
  local_128 = param_3->CachedObjectPtr;
  local_118 = *(longlong *)&param_3->GetObject;
  local_f0 = (longlong *)0x0;
  if (local_118 != 0) {
    puVar3 = *(undefined8 **)&(param_3->GetObject).field_0x28;
    puVar8 = (undefined8 *)&(param_3->GetObject).field_0x10;
    if (puVar3 != (undefined8 *)0x0) {
      puVar8 = puVar3;
    }
    (**(code **)*puVar8)(puVar8,local_108);
  }
  local_e8 = (this->OwningGraphClassInputPtr).CachedObjectPtr;
  local_d8 = *(longlong *)&(this->OwningGraphClassInputPtr).GetObject;
  local_b0 = (longlong *)0x0;
  if (local_d8 != 0) {
    puVar3 = *(undefined8 **)&(this->OwningGraphClassInputPtr).GetObject.field_0x28;
    puVar8 = (undefined8 *)&(this->OwningGraphClassInputPtr).GetObject.field_0x10;
    if (puVar3 != (undefined8 *)0x0) {
      puVar8 = puVar3;
    }
    (**(code **)*puVar8)(puVar8,local_c8);
  }
  local_a8 = (this->GraphPtr).CachedObjectPtr;
  local_98 = *(longlong *)&(this->GraphPtr).GetObject;
  local_70 = (longlong *)0x0;
  if (local_98 != 0) {
    puVar3 = *(undefined8 **)&(this->GraphPtr).GetObject.field_0x28;
    puVar8 = (undefined8 *)&(this->GraphPtr).GetObject.field_0x10;
    if (puVar3 != (undefined8 *)0x0) {
      puVar8 = puVar3;
    }
    (**(code **)*puVar8)(puVar8,local_88);
  }
  local_68 = param_4->Object;
  local_60.ReferenceController = (param_4->SharedReferenceCount).ReferenceController;
  if (local_60.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_60.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_60.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = ::operator_new(0x160);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pIVar12 = (IOutputController *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFInputNodeOutputController_Frontend_Metasound___00_SharedPointerInternals__6B_
    ;
    FInputNodeOutputController::FInputNodeOutputController
              ((FInputNodeOutputController *)(pTVar6 + 1),(FInitParams *)local_178);
    pIVar12 = (IOutputController *)(pTVar6 + 1);
    pTVar11 = pTVar6;
    if (pIVar12 == (IOutputController *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSharedRef<Metasound::Frontend::IOutputController,1> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14ae6a565;
    }
  }
  if (((*(longlong *)&pIVar12->field_0x8 == 0) || (*(longlong *)&pIVar12->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pIVar12->field_0x10 + 8) < 1)) {
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(IOutputController **)&pIVar12->field_0x8 = pIVar12;
    if (pTVar11 != *(TReferenceControllerBase<1> **)&pIVar12->field_0x10) {
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar9 = *(longlong **)&pIVar12->field_0x10;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pIVar12->field_0x10 = pTVar11;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
LAB_14ae6a565:
  __return_storage_ptr__->Object = pIVar12;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar11;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.ReferenceController);
  if (local_98 != 0) {
    plVar9 = local_88;
    if (local_70 != (longlong *)0x0) {
      plVar9 = local_70;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if (local_d8 != 0) {
    plVar9 = local_c8;
    if (local_b0 != (longlong *)0x0) {
      plVar9 = local_b0;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if (local_118 != 0) {
    plVar9 = local_108;
    if (local_f0 != (longlong *)0x0) {
      plVar9 = local_f0;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if (local_178._32_8_ != 0) {
    plVar9 = (longlong *)(local_178 + 0x30);
    if (local_130 != (longlong *)0x0) {
      plVar9 = local_130;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if (*(longlong *)&param_2->GetObject != 0) {
    plVar9 = *(longlong **)&(param_2->GetObject).field_0x28;
    plVar10 = (longlong *)&(param_2->GetObject).field_0x10;
    if (plVar9 != (longlong *)0x0) {
      plVar10 = plVar9;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  if (*(longlong *)&param_3->GetObject != 0) {
    plVar9 = *(longlong **)&(param_3->GetObject).field_0x28;
    plVar10 = (longlong *)&(param_3->GetObject).field_0x10;
    if (plVar9 != (longlong *)0x0) {
      plVar10 = plVar9;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// GetInputLiteral @ 14ae76040

FMetasoundFrontendLiteral * __thiscall
Metasound::Frontend::FInputNodeController::GetInputLiteral
          (FInputNodeController *this,FGuid *param_1)

{
  return (FMetasoundFrontendLiteral *)0x0;
}

// GetInterfaceVersion @ 14ae769b0

FMetasoundFrontendVersion * __thiscall
Metasound::Frontend::FInputNodeController::GetInterfaceVersion(FInputNodeController *this)

{
  FMetasoundFrontendVertex *pFVar1;
  ulonglong uVar2;
  TBitArray<FDefaultBitArrayAllocator> *pTVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  char cVar8;
  bool bVar9;
  undefined8 *puVar10;
  int *piVar11;
  int *piVar12;
  undefined8 uVar13;
  longlong lVar14;
  FMetasoundFrontendVersion *pFVar15;
  longlong *plVar16;
  IInterfaceRegistry *pIVar17;
  longlong *plVar18;
  longlong lVar19;
  uint uVar20;
  int iVar21;
  FMetasoundFrontendVertex *pFVar22;
  uint uVar23;
  TBitArray<FDefaultBitArrayAllocator> *pTVar24;
  undefined1 local_res8 [8];
  int local_res10;
  TReferenceControllerBase<1> *local_res18;
  FString local_108;
  longlong *local_f8;
  int iStack_f0;
  uint uStack_ec;
  TBitArray<FDefaultBitArrayAllocator> *local_e8;
  undefined4 uStack_e0;
  int iStack_dc;
  int local_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  longlong *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  longlong *local_98;
  TReferenceControllerBase<1> *local_90;
  undefined1 local_88 [8];
  TReferenceControllerBase<1> *local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [44];
  undefined4 local_3c;
  
  puVar10 = (undefined8 *)
            (**(code **)(*(longlong *)this->_padding_ + 0x230))
                      ((longlong *)this->_padding_,local_88);
  plVar16 = (longlong *)*puVar10;
  local_res18 = (TReferenceControllerBase<1> *)puVar10[1];
  if (local_res18 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_res18->SharedReferenceCount = (atomic<int>)((int)local_res18->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
  (**(code **)(*plVar16 + 0xf8))(plVar16,&local_98);
  cVar8 = (**(code **)(*(longlong *)this->_padding_ + 0x18))();
  if (cVar8 != '\0') {
    piVar11 = (int *)(**(code **)(*(longlong *)this->_padding_ + 0x20))
                               ((longlong *)this->_padding_,local_78);
    piVar12 = (int *)(**(code **)(*local_98 + 0x20))(local_98,local_68);
    if (((piVar12[3] == piVar11[3] && piVar12[2] == piVar11[2]) && piVar12[1] == piVar11[1]) &&
        *piVar12 == *piVar11) {
      UE::Core::Private::Function::CheckCallable((void *)this->_padding_);
      pcVar7 = (code *)this->_padding_;
      plVar18 = &this->_padding_;
      if ((longlong *)this->_padding_ != (longlong *)0x0) {
        plVar18 = (longlong *)this->_padding_;
      }
      uVar13 = (**(code **)(*plVar18 + 8))();
      lVar14 = (*pcVar7)(uVar13);
      this->_padding_ = lVar14;
      if (lVar14 != 0) {
        if (*(int *)(lVar14 + 0x30) == 1) {
          plVar16 = (longlong *)(**(code **)(*plVar16 + 0xa8))(plVar16);
          iStack_f0 = 0;
          uVar20 = *(int *)(lVar14 + 0x30) - 1;
          uVar23 = 0;
          if ((int)uVar20 < *(int *)(lVar14 + 0x30)) {
            uVar23 = ~uVar20 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            pFVar15 = (FMetasoundFrontendVersion *)(*pcVar7)();
            return pFVar15;
          }
          iVar4 = *(int *)(lVar14 + 0x30);
          pTVar3 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar16 + 2);
          iVar5 = (int)plVar16[5];
          uStack_ec = 1;
          lVar14 = *(longlong *)(lVar14 + 0x28);
          local_d8 = 0;
          iStack_dc = 0;
          if (iVar5 != 0) {
            pTVar24 = (TBitArray<FDefaultBitArrayAllocator> *)plVar16[4];
            if ((TBitArray<FDefaultBitArrayAllocator> *)plVar16[4] ==
                (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              pTVar24 = pTVar3;
            }
            uVar23 = *(uint *)(pTVar24->AllocatorInstance).InlineData;
            local_d8 = 0;
            while (uVar23 == 0) {
              lVar19 = (longlong)iStack_f0;
              local_d8 = local_d8 + 0x20;
              iStack_f0 = iStack_f0 + 1;
              iStack_dc = iVar5;
              if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f0)
              goto LAB_14ae76c1d;
              uVar23 = *(uint *)((pTVar24->AllocatorInstance).InlineData + lVar19 * 4 + 4);
            }
            uStack_ec = -uVar23 & uVar23;
            uVar2 = (ulonglong)uStack_ec * 2 + 1;
            lVar19 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar19 == 0; lVar19 = lVar19 + -1) {
              }
            }
            local_res10 = (int)lVar19;
            iStack_dc = local_d8 + -1 + local_res10;
            if (iVar5 < iStack_dc) {
              iStack_dc = iVar5;
            }
          }
LAB_14ae76c1d:
          uVar23 = *(uint *)(plVar16 + 5);
          uStack_d4 = local_3c;
          uVar20 = uVar23 & 0xffffffe0;
          iStack_d0 = (int)plVar16[1] - *(int *)((longlong)plVar16 + 0x34);
          uStack_e0 = 0xffffffff;
          TStack_c0._padding_ = CONCAT44(uStack_ec,iStack_f0);
          TStack_c0.CurrentBitIndex = iStack_dc;
          TStack_c0.UnvisitedBitMask = 0xffffffff;
          iVar21 = (int)uVar23 >> 5;
          TStack_c0._28_4_ = local_3c;
          TStack_c0.BaseBitIndex = local_d8;
          uStack_a0 = CONCAT44(uStack_cc,iStack_d0);
          local_f8 = plVar16;
          local_e8 = pTVar3;
          local_c8 = plVar16;
          TStack_c0.Array = pTVar3;
          if ((((int)uVar23 < 0) || (iVar5 < (int)uVar23)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x7af,L""), bVar9)) {
            pcVar7 = (code *)swi(3);
            pFVar15 = (FMetasoundFrontendVersion *)(*pcVar7)();
            return pFVar15;
          }
          uVar6 = *(uint *)(plVar16 + 5);
          if (uVar23 != uVar6) {
            pTVar24 = (TBitArray<FDefaultBitArrayAllocator> *)plVar16[4];
            if ((TBitArray<FDefaultBitArrayAllocator> *)plVar16[4] ==
                (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              pTVar24 = pTVar3;
            }
            uVar23 = -1 << ((byte)uVar23 & 0x1f) &
                     *(uint *)((pTVar24->AllocatorInstance).InlineData + (longlong)iVar21 * 4);
            while (uVar23 == 0) {
              lVar19 = (longlong)iVar21;
              uVar20 = uVar20 + 0x20;
              iVar21 = iVar21 + 1;
              uVar23 = uVar6;
              if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
              goto LAB_14ae76d30;
              uVar23 = *(uint *)((pTVar24->AllocatorInstance).InlineData + lVar19 * 4 + 4);
            }
            uVar2 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
            lVar19 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar19 == 0; lVar19 = lVar19 + -1) {
              }
            }
            uVar23 = (int)lVar19 + -1 + uVar20;
            if ((int)uVar6 < (int)uVar23) {
              uVar23 = uVar6;
            }
          }
LAB_14ae76d30:
          while( true ) {
            plVar18 = local_c8;
            if ((int)local_c8[1] - *(int *)((longlong)local_c8 + 0x34) != (int)uStack_a0) {
              `TSparseArray<TSparseSetElement<FMetasoundFrontendVersion>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
            }
            if (((TStack_c0.CurrentBitIndex == uVar23) && (TStack_c0.Array == pTVar3)) &&
               (plVar18 == plVar16)) break;
            pFVar15 = (FMetasoundFrontendVersion *)
                      (*plVar18 + (longlong)TStack_c0.CurrentBitIndex * 0x18);
            GetInterfaceRegistryKey(&local_108,pFVar15);
            pIVar17 = IInterfaceRegistry::Get();
            plVar18 = (longlong *)(**(code **)((longlong)*pIVar17 + 0x10))(pIVar17);
            if (plVar18 != (longlong *)0x0) {
              plVar18 = (longlong *)(**(code **)(*plVar18 + 8))(plVar18);
              pFVar22 = (FMetasoundFrontendVertex *)*plVar18;
              pFVar1 = (FMetasoundFrontendVertex *)
                       ((longlong)pFVar22 + (longlong)(int)plVar18[1] * 0x48);
              for (; pFVar22 != pFVar1; pFVar22 = (FMetasoundFrontendVertex *)&pFVar22[2].TypeName)
              {
                bVar9 = FMetasoundFrontendVertex::IsFunctionalEquivalent
                                  ((FMetasoundFrontendVertex *)
                                   ((longlong)(iVar4 + -1) * 0x20 + lVar14),pFVar22);
                if (bVar9) {
                  if (pFVar22 != (FMetasoundFrontendVertex *)0x0) {
                    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_108.Data.AllocatorInstance.Data);
                    }
                    DestructItems<FMetasoundFrontendClassInput,int>
                              ((FMetasoundFrontendClassInput *)0x0,0);
                    goto LAB_14ae76aed;
                  }
                  break;
                }
              }
            }
            if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_108.Data.AllocatorInstance.Data);
            }
            DestructItems<FMetasoundFrontendClassInput,int>((FMetasoundFrontendClassInput *)0x0,0);
            TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
          }
        }
        else {
          bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_3501407040784300340>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeController.cpp"
                             ,0x6cc,"Node->Interface.Inputs.Num() == 1");
          if (bVar9) {
            pcVar7 = (code *)swi(3);
            pFVar15 = (FMetasoundFrontendVersion *)(*pcVar7)();
            return pFVar15;
          }
        }
      }
    }
  }
  pFVar15 = FMetasoundFrontendVersion::GetInvalid();
LAB_14ae76aed:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_res18);
  return pFVar15;
}

// IsValid @ 14ae7a960

bool __thiscall Metasound::Frontend::FInputNodeController::IsValid(FInputNodeController *this)

{
  code *pcVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  FMetasoundFrontendClassInput *pFVar5;
  FMetasoundFrontendGraph *pFVar6;
  longlong *plVar7;
  
  cVar3 = (**(code **)(*(longlong *)this->_padding_ + 0x18))();
  if (cVar3 != '\0') {
    UE::Core::Private::Function::CheckCallable
              (*(void **)&(this->OwningGraphClassInputPtr).GetObject);
    pcVar1 = *(code **)&(this->OwningGraphClassInputPtr).GetObject;
    plVar2 = *(longlong **)&(this->OwningGraphClassInputPtr).GetObject.field_0x28;
    plVar7 = (longlong *)&(this->OwningGraphClassInputPtr).GetObject.field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar7 = plVar2;
    }
    uVar4 = (**(code **)(*plVar7 + 8))();
    pFVar5 = (FMetasoundFrontendClassInput *)(*pcVar1)(uVar4);
    (this->OwningGraphClassInputPtr).CachedObjectPtr = pFVar5;
    if (pFVar5 != (FMetasoundFrontendClassInput *)0x0) {
      UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphPtr).GetObject);
      pcVar1 = *(code **)&(this->GraphPtr).GetObject;
      plVar2 = *(longlong **)&(this->GraphPtr).GetObject.field_0x28;
      plVar7 = (longlong *)&(this->GraphPtr).GetObject.field_0x10;
      if (plVar2 != (longlong *)0x0) {
        plVar7 = plVar2;
      }
      uVar4 = (**(code **)(*plVar7 + 8))();
      pFVar6 = (FMetasoundFrontendGraph *)(*pcVar1)(uVar4);
      (this->GraphPtr).CachedObjectPtr = pFVar6;
      if (pFVar6 != (FMetasoundFrontendGraph *)0x0) {
        return true;
      }
    }
  }
  return false;
}

// SetInputLiteral @ 14ae89070

void __thiscall
Metasound::Frontend::FInputNodeController::SetInputLiteral
          (FInputNodeController *this,FMetasoundFrontendVertexLiteral *param_1)

{
  return;
}

// SetNodeName @ 14ae89410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Metasound::Frontend::FInputNodeController::SetNodeName(FInputNodeController *this,FName *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  code *pcVar10;
  FName *pFVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  FName *pFVar14;
  bool bVar15;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [16];
  FName *local_d8;
  code *local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  longlong *plStack_a0;
  longlong local_98;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong *local_70;
  code *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  UE::Core::Private::Function::CheckCallable((void *)this->_padding_);
  pcVar10 = (code *)this->_padding_;
  plVar13 = &this->_padding_;
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    plVar13 = (longlong *)this->_padding_;
  }
  uVar7 = (**(code **)(*plVar13 + 8))();
  lVar8 = (*pcVar10)(uVar7);
  this->_padding_ = lVar8;
  if (lVar8 != 0) {
    *(FName *)(lVar8 + 0x20) = *param_1;
    pFVar11 = *(FName **)(lVar8 + 0x28);
    iVar1 = *(int *)(lVar8 + 0x30);
    pFVar14 = pFVar11 + (longlong)iVar1 * 4;
    while( true ) {
      if (*(int *)(lVar8 + 0x30) != iVar1) {
        `TCheckedPointerIterator<FMetasoundFrontendVertex,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_e8);
      }
      if (pFVar11 == pFVar14) break;
      *pFVar11 = *param_1;
      pFVar11 = pFVar11 + 4;
    }
    iVar1 = *(int *)(lVar8 + 0x40);
    pFVar11 = *(FName **)(lVar8 + 0x38);
    pFVar14 = pFVar11 + (longlong)iVar1 * 4;
    while( true ) {
      if (*(int *)(lVar8 + 0x40) != iVar1) {
        `TCheckedPointerIterator<FMetasoundFrontendVertex,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_e8);
      }
      if (pFVar11 == pFVar14) break;
      *pFVar11 = *param_1;
      pFVar11 = pFVar11 + 4;
    }
  }
  local_98 = *(longlong *)&(this->OwningGraphClassInputPtr).GetObject;
  local_d8 = (FName *)0x0;
  local_c8 = (code *)0x0;
  plStack_a0 = (longlong *)0x0;
  local_70 = (longlong *)0x0;
  if (local_98 != 0) {
    puVar2 = *(undefined8 **)&(this->OwningGraphClassInputPtr).GetObject.field_0x28;
    puVar12 = (undefined8 *)&(this->OwningGraphClassInputPtr).GetObject.field_0x10;
    if (puVar2 != (undefined8 *)0x0) {
      puVar12 = puVar2;
    }
    (**(code **)*puVar12)(puVar12,&local_88);
  }
  local_68 = (code *)0x0;
  plVar9 = FMemory::Malloc(0x40,0x10);
  plStack_40 = plStack_a0;
  uVar6 = uStack_ac;
  uVar5 = uStack_b0;
  uVar4 = uStack_b4;
  uVar3 = local_b8;
  uVar7 = uStack_c0;
  *plVar9 = (longlong)
            &
            ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__CBUFMetasoundFrontendClassInput_____TAccessPtr_UFMetasoundFrontendClassInput___Frontend_Metasound__QEAA_AEBV__TAccessPtr___CBUFMetasoundFrontendClassInput___34_W4EConstCast_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  plVar13 = plVar9 + 2;
  *plVar13 = local_98;
  plVar9[7] = (longlong)local_70;
  local_70 = (longlong *)0x0;
  plVar9[4] = local_88;
  plVar9[5] = lStack_80;
  plVar9[6] = local_78;
  if (*plVar13 != 0) {
    local_98 = 0;
  }
  pcVar10 = local_68;
  if (plVar13 != (longlong *)0x0) {
    pcVar10 = UE::Core::Private::Function::
              TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClassInput>::TAccessPtr<FMetasoundFrontendClassInput><FMetasoundFrontendClassInput_const_>'::__l2::<lambda_1>,FMetasoundFrontendClassInput_*>
              ::Call;
  }
  uStack_c0 = uStack_60;
  local_a8 = local_48;
  uStack_a4 = uStack_44;
  plStack_a0 = plVar9;
  local_b8 = local_58;
  uStack_b4 = uStack_54;
  uStack_b0 = uStack_50;
  uStack_ac = uStack_4c;
  local_68 = local_c8;
  uStack_60 = uVar7;
  local_58 = uVar3;
  uStack_54 = uVar4;
  uStack_50 = uVar5;
  uStack_4c = uVar6;
  bVar15 = local_c8 != (code *)0x0;
  local_c8 = pcVar10;
  if (bVar15) {
    plVar13 = (longlong *)&local_58;
    if (plStack_40 != (longlong *)0x0) {
      plVar13 = plStack_40;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (local_98 != 0) {
    plVar13 = &local_88;
    if (local_70 != (longlong *)0x0) {
      plVar13 = local_70;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  UE::Core::Private::Function::CheckCallable(local_c8);
  pcVar10 = local_c8;
  plVar13 = (longlong *)&local_b8;
  if (plStack_a0 != (longlong *)0x0) {
    plVar13 = plStack_a0;
  }
  uVar7 = (**(code **)(*plVar13 + 8))();
  local_d8 = (FName *)(*pcVar10)(uVar7);
  UE::Core::Private::Function::CheckCallable(local_c8);
  pcVar10 = local_c8;
  plVar13 = (longlong *)&local_b8;
  if (plStack_a0 != (longlong *)0x0) {
    plVar13 = plStack_a0;
  }
  uVar7 = (**(code **)(*plVar13 + 8))();
  pFVar11 = (FName *)(*pcVar10)(uVar7);
  if (local_c8 != (code *)0x0) {
    plVar13 = (longlong *)&local_b8;
    if (plStack_a0 != (longlong *)0x0) {
      plVar13 = plStack_a0;
    }
    local_d8 = pFVar11;
    (**(code **)(*plVar13 + 0x10))();
  }
  if (pFVar11 != (FName *)0x0) {
    *pFVar11 = *param_1;
  }
  return;
}

// ShareAccess @ 14ae89f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDocumentAccess * __thiscall
Metasound::Frontend::FInputNodeController::ShareAccess
          (FInputNodeController *this,FDocumentAccess *__return_storage_ptr__)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_78 [32];
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  FBaseNodeController::ShareAccess((FBaseNodeController *)this,__return_storage_ptr__);
  TAccessPtr<FMetasoundFrontendGraph>::operator=(&__return_storage_ptr__->Graph,&this->GraphPtr);
  TAccessPtr<FMetasoundFrontendGraph_const_>::
  TAccessPtr<FMetasoundFrontendGraph_const_><FMetasoundFrontendGraph>
            ((TAccessPtr<FMetasoundFrontendGraph_const_> *)local_58,&this->GraphPtr,Tag);
  __return_storage_ptr__->_padding_ = local_58._0_8_;
  lVar7 = __return_storage_ptr__->_padding_;
  lVar8 = __return_storage_ptr__->_padding_;
  uVar1 = *(undefined4 *)&__return_storage_ptr__->_padding_;
  uVar2 = *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  uVar3 = *(undefined4 *)&__return_storage_ptr__->_padding_;
  uVar4 = *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  lVar5 = __return_storage_ptr__->_padding_;
  plVar6 = (longlong *)__return_storage_ptr__->_padding_;
  __return_storage_ptr__->_padding_ = local_58._16_8_;
  __return_storage_ptr__->_padding_ = local_58._24_8_;
  *(undefined4 *)&__return_storage_ptr__->_padding_ = local_58._32_4_;
  *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = local_58._36_4_;
  *(undefined4 *)&__return_storage_ptr__->_padding_ = local_58._40_4_;
  *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = local_58._44_4_;
  *(undefined4 *)&__return_storage_ptr__->_padding_ = local_58._48_4_;
  *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = local_58._52_4_;
  *(undefined4 *)&__return_storage_ptr__->_padding_ = local_58._56_4_;
  *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = local_58._60_4_;
  local_58._32_4_ = uVar1;
  local_58._36_4_ = uVar2;
  local_58._40_4_ = uVar3;
  local_58._44_4_ = uVar4;
  local_58._48_8_ = lVar5;
  local_58._56_8_ = plVar6;
  local_58._16_8_ = lVar7;
  local_58._24_8_ = lVar8;
  if (lVar7 != 0) {
    plVar9 = (longlong *)(local_58 + 0x20);
    if (plVar6 != (longlong *)0x0) {
      plVar9 = plVar6;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  TAccessPtr<FMetasoundFrontendClassInput_const_>::operator=
            ((TAccessPtr<FMetasoundFrontendClassInput_const_> *)&__return_storage_ptr__->_padding_,
             &this->OwningGraphClassInputPtr);
  return __return_storage_ptr__;
}

// ShareAccess @ 14ae8a040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FConstDocumentAccess * __thiscall
Metasound::Frontend::FInputNodeController::ShareAccess
          (FInputNodeController *this,FConstDocumentAccess *__return_storage_ptr__)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 auStack_78 [32];
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  FBaseNodeController::ShareAccess((FBaseNodeController *)this,__return_storage_ptr__);
  TAccessPtr<FMetasoundFrontendGraph_const_>::
  TAccessPtr<FMetasoundFrontendGraph_const_><FMetasoundFrontendGraph>
            ((TAccessPtr<FMetasoundFrontendGraph_const_> *)local_58,&this->GraphPtr,Tag);
  (__return_storage_ptr__->ConstGraph).CachedObjectPtr = (FMetasoundFrontendGraph *)local_58._0_8_;
  lVar7 = *(longlong *)&(__return_storage_ptr__->ConstGraph).GetObject;
  uVar8 = *(undefined8 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x8;
  uVar1 = *(undefined4 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x10;
  uVar2 = *(undefined4 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x14;
  uVar3 = *(undefined4 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x18;
  uVar4 = *(undefined4 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x1c;
  uVar5 = *(undefined8 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x20;
  plVar6 = *(longlong **)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x28;
  *(undefined8 *)&(__return_storage_ptr__->ConstGraph).GetObject = local_58._16_8_;
  *(undefined8 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x8 = local_58._24_8_;
  *(undefined4 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x10 = local_58._32_4_;
  *(undefined4 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x14 = local_58._36_4_;
  *(undefined4 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x18 = local_58._40_4_;
  *(undefined4 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x1c = local_58._44_4_;
  *(undefined4 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x20 = local_58._48_4_;
  *(undefined4 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x24 = local_58._52_4_;
  *(undefined4 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x28 = local_58._56_4_;
  *(undefined4 *)&(__return_storage_ptr__->ConstGraph).GetObject.field_0x2c = local_58._60_4_;
  local_58._32_4_ = uVar1;
  local_58._36_4_ = uVar2;
  local_58._40_4_ = uVar3;
  local_58._44_4_ = uVar4;
  local_58._48_8_ = uVar5;
  local_58._56_8_ = plVar6;
  local_58._16_8_ = lVar7;
  local_58._24_8_ = uVar8;
  if (lVar7 != 0) {
    plVar9 = (longlong *)(local_58 + 0x20);
    if (plVar6 != (longlong *)0x0) {
      plVar9 = plVar6;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  TAccessPtr<FMetasoundFrontendClassInput_const_>::operator=
            (&__return_storage_ptr__->ConstClassInput,&this->OwningGraphClassInputPtr);
  return __return_storage_ptr__;
}

