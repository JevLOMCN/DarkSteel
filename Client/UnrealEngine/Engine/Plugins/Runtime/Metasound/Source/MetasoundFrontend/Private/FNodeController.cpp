// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 9

// FNodeController @ 14ae5a6e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FNodeController * __thiscall
Metasound::Frontend::FNodeController::FNodeController
          (FNodeController *this,EPrivateToken param_1,FInitParams *param_2)

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
  this->_padding_ = (longlong)&___7FNodeController_Frontend_Metasound__6B_;
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

// ~FNodeController @ 14ae5c500

void __thiscall Metasound::Frontend::FNodeController::~FNodeController(FNodeController *this)

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
  FBaseNodeController::~FBaseNodeController((FBaseNodeController *)this);
  return;
}

// CreateConstNodeHandle @ 14ae66fa0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<Metasound::Frontend::INodeController_const_,1> * __cdecl
Metasound::Frontend::FNodeController::CreateConstNodeHandle
          (TSharedRef<Metasound::Frontend::INodeController_const_,1> *__return_storage_ptr__,
          FInitParams *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  FGuid *this;
  longlong lVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<Metasound::Frontend::INodeController_const_,1> *pTVar9;
  TSharedRef<Metasound::Frontend::INodeController,1> *pTVar10;
  longlong *plVar11;
  INodeController *pIVar12;
  FString local_58;
  FString local_48;
  FString local_38;
  TSharedRef<Metasound::Frontend::INodeController,1> local_28;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(param_1->NodePtr).field_0x10);
  plVar3 = *(longlong **)&(param_1->NodePtr).field_0x38;
  pcVar4 = *(code **)&(param_1->NodePtr).field_0x10;
  plVar11 = (longlong *)&(param_1->NodePtr).field_0x20;
  if (plVar3 != (longlong *)0x0) {
    plVar11 = plVar3;
  }
  uVar6 = (**(code **)(*plVar11 + 8))();
  this = (FGuid *)(*pcVar4)(uVar6);
  *(FGuid **)&param_1->NodePtr = this;
  if (this != (FGuid *)0x0) {
    UE::Core::Private::Function::CheckCallable(*(void **)&(param_1->ClassPtr).field_0x10);
    plVar3 = *(longlong **)&(param_1->ClassPtr).field_0x38;
    pcVar4 = *(code **)&(param_1->ClassPtr).field_0x10;
    plVar11 = (longlong *)&(param_1->ClassPtr).field_0x20;
    if (plVar3 != (longlong *)0x0) {
      plVar11 = plVar3;
    }
    uVar6 = (**(code **)(*plVar11 + 8))();
    lVar7 = (*pcVar4)(uVar6);
    *(longlong *)&param_1->ClassPtr = lVar7;
    if (lVar7 != 0) {
      if (((this[1].D == *(uint *)(lVar7 + 0x14) && this[1].C == *(uint *)(lVar7 + 0x10)) &&
          this[1].B == *(uint *)(lVar7 + 0xc)) && ((FGuid *)(lVar7 + 8))->A == this[1].A) {
        pTVar8 = ::operator_new(0x100);
        if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
          pTVar8 = (TReferenceControllerBase<1> *)0x0;
          pIVar12 = (INodeController *)&DAT_00000010;
LAB_14ae670db:
          local_28.SharedReferenceCount.ReferenceController = pTVar8;
          if (((*(longlong *)&pIVar12->field_0x8 == 0) || (*(longlong *)&pIVar12->field_0x10 == 0))
             || (*(int *)(*(longlong *)&pIVar12->field_0x10 + 8) < 1)) {
            if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
              UNLOCK();
            }
            *(INodeController **)&pIVar12->field_0x8 = pIVar12;
            if (pTVar8 != *(TReferenceControllerBase<1> **)&pIVar12->field_0x10) {
              if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
                UNLOCK();
              }
              plVar3 = *(longlong **)&pIVar12->field_0x10;
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
              *(TReferenceControllerBase<1> **)&pIVar12->field_0x10 = pTVar8;
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar8);
          }
        }
        else {
          pTVar8->SharedReferenceCount = (atomic<int>)0x1;
          pTVar8->WeakReferenceCount = (atomic<int>)0x1;
          pTVar8->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController___CBVFNodeController_Frontend_Metasound___00_SharedPointerInternals__6B_
          ;
          FNodeController((FNodeController *)(pTVar8 + 1),Token,param_1);
          pIVar12 = (INodeController *)(pTVar8 + 1);
          if (pIVar12 != (INodeController *)0x0) goto LAB_14ae670db;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L"");
          local_28.SharedReferenceCount.ReferenceController = pTVar8;
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pTVar9 = (TSharedRef<Metasound::Frontend::INodeController_const_,1> *)(*pcVar4)();
            return pTVar9;
          }
        }
        __return_storage_ptr__->Object = pIVar12;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             local_28.SharedReferenceCount.ReferenceController;
        if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        goto LAB_14ae6724f;
      }
      if (2 < (byte)LogMetaSound._0_1_) {
        local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_38.Data.ArrayNum = 0;
        local_38.Data.ArrayMax = 0;
        FGuid::AppendString((FGuid *)(lVar7 + 8),&local_38,Digits);
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_48.Data.ArrayNum = 0;
        local_48.Data.ArrayMax = 0;
        FGuid::AppendString(this + 1,&local_48,Digits);
        local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_58.Data.ArrayNum = 0;
        local_58.Data.ArrayMax = 0;
        FGuid::AppendString(this,&local_58,Digits);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  pTVar10 = INodeController::GetInvalidHandle(&local_28);
  __return_storage_ptr__->Object = pTVar10->Object;
  pTVar8 = (pTVar10->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
LAB_14ae6724f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// CreateInputController @ 14ae68050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<Metasound::Frontend::IInputController,1> * __thiscall
Metasound::Frontend::FNodeController::CreateInputController
          (FNodeController *this,
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
  undefined1 auStack_158 [32];
  undefined1 local_138 [72];
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
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_138._16_8_ = param_2->CachedObjectPtr;
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  local_138._0_4_ = param_1->A;
  local_138._4_4_ = param_1->B;
  local_138._8_4_ = param_1->C;
  local_138._12_4_ = param_1->D;
  local_138._32_8_ = *(undefined8 *)&param_2->GetObject;
  local_f0 = (longlong *)0x0;
  if (local_138._32_8_ != 0) {
    puVar3 = *(undefined8 **)&(param_2->GetObject).field_0x28;
    puVar8 = (undefined8 *)&(param_2->GetObject).field_0x10;
    if (puVar3 != (undefined8 *)0x0) {
      puVar8 = puVar3;
    }
    (**(code **)*puVar8)(local_138._0_4_,local_138 + 0x30);
  }
  local_e8 = param_3->CachedObjectPtr;
  local_d8 = *(longlong *)&param_3->GetObject;
  local_b0 = (longlong *)0x0;
  if (local_d8 != 0) {
    puVar3 = *(undefined8 **)&(param_3->GetObject).field_0x28;
    puVar8 = (undefined8 *)&(param_3->GetObject).field_0x10;
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
  pTVar6 = ::operator_new(0x110);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pIVar12 = (IInputController *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFBaseInputController_Frontend_Metasound___00_SharedPointerInternals__6B_
    ;
    FBaseInputController::FBaseInputController
              ((FBaseInputController *)(pTVar6 + 1),(FInitParams *)local_138);
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
      goto LAB_14ae6822b;
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
LAB_14ae6822b:
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
  if (local_138._32_8_ != 0) {
    plVar9 = (longlong *)(local_138 + 0x30);
    if (local_f0 != (longlong *)0x0) {
      plVar9 = local_f0;
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

// CreateNodeHandle @ 14ae69a90

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<Metasound::Frontend::INodeController,1> * __cdecl
Metasound::Frontend::FNodeController::CreateNodeHandle
          (TSharedRef<Metasound::Frontend::INodeController,1> *__return_storage_ptr__,
          FInitParams *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  FGuid *this;
  longlong lVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<Metasound::Frontend::INodeController,1> *pTVar9;
  longlong *plVar10;
  INodeController *pIVar11;
  FString local_48;
  FString local_38;
  FString local_28;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(param_1->NodePtr).field_0x10);
  plVar3 = *(longlong **)&(param_1->NodePtr).field_0x38;
  pcVar4 = *(code **)&(param_1->NodePtr).field_0x10;
  plVar10 = (longlong *)&(param_1->NodePtr).field_0x20;
  if (plVar3 != (longlong *)0x0) {
    plVar10 = plVar3;
  }
  uVar6 = (**(code **)(*plVar10 + 8))();
  this = (FGuid *)(*pcVar4)(uVar6);
  *(FGuid **)&param_1->NodePtr = this;
  if (this == (FGuid *)0x0) {
LAB_14ae69d27:
    INodeController::GetInvalidHandle(__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)&(param_1->ClassPtr).field_0x10);
  plVar3 = *(longlong **)&(param_1->ClassPtr).field_0x38;
  pcVar4 = *(code **)&(param_1->ClassPtr).field_0x10;
  plVar10 = (longlong *)&(param_1->ClassPtr).field_0x20;
  if (plVar3 != (longlong *)0x0) {
    plVar10 = plVar3;
  }
  uVar6 = (**(code **)(*plVar10 + 8))();
  lVar7 = (*pcVar4)(uVar6);
  *(longlong *)&param_1->ClassPtr = lVar7;
  if (lVar7 == 0) goto LAB_14ae69d27;
  if (((this[1].D != *(uint *)(lVar7 + 0x14) || this[1].C != *(uint *)(lVar7 + 0x10)) ||
      this[1].B != *(uint *)(lVar7 + 0xc)) || ((FGuid *)(lVar7 + 8))->A != this[1].A) {
    if (2 < (byte)LogMetaSound._0_1_) {
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      FGuid::AppendString((FGuid *)(lVar7 + 8),&local_28,Digits);
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      FGuid::AppendString(this + 1,&local_38,Digits);
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      FGuid::AppendString(this,&local_48,Digits);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    goto LAB_14ae69d27;
  }
  pTVar8 = ::operator_new(0x100);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
    pIVar11 = (INodeController *)&DAT_00000010;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFNodeController_Frontend_Metasound___00_SharedPointerInternals__6B_
    ;
    FNodeController((FNodeController *)(pTVar8 + 1),Token,param_1);
    pIVar11 = (INodeController *)(pTVar8 + 1);
    if (pIVar11 == (INodeController *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TSharedRef<Metasound::Frontend::INodeController,1> *)(*pcVar4)();
        return pTVar9;
      }
      goto LAB_14ae69c36;
    }
  }
  if (((*(longlong *)&pIVar11->field_0x8 == 0) || (*(longlong *)&pIVar11->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pIVar11->field_0x10 + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(INodeController **)&pIVar11->field_0x8 = pIVar11;
    if (pTVar8 != *(TReferenceControllerBase<1> **)&pIVar11->field_0x10) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pIVar11->field_0x10;
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
      *(TReferenceControllerBase<1> **)&pIVar11->field_0x10 = pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_14ae69c36:
  __return_storage_ptr__->Object = pIVar11;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return __return_storage_ptr__;
}

// CreateOutputController @ 14ae6a670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<Metasound::Frontend::IOutputController,1> * __thiscall
Metasound::Frontend::FNodeController::CreateOutputController
          (FNodeController *this,
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
  undefined1 auStack_158 [32];
  undefined1 local_138 [72];
  longlong *local_f0;
  FMetasoundFrontendClassOutput *local_e8;
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
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_138._16_8_ = param_2->CachedObjectPtr;
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  local_138._0_4_ = param_1->A;
  local_138._4_4_ = param_1->B;
  local_138._8_4_ = param_1->C;
  local_138._12_4_ = param_1->D;
  local_138._32_8_ = *(undefined8 *)&param_2->GetObject;
  local_f0 = (longlong *)0x0;
  if (local_138._32_8_ != 0) {
    puVar3 = *(undefined8 **)&(param_2->GetObject).field_0x28;
    puVar8 = (undefined8 *)&(param_2->GetObject).field_0x10;
    if (puVar3 != (undefined8 *)0x0) {
      puVar8 = puVar3;
    }
    (**(code **)*puVar8)(local_138._0_4_,local_138 + 0x30);
  }
  local_e8 = param_3->CachedObjectPtr;
  local_d8 = *(longlong *)&param_3->GetObject;
  local_b0 = (longlong *)0x0;
  if (local_d8 != 0) {
    puVar3 = *(undefined8 **)&(param_3->GetObject).field_0x28;
    puVar8 = (undefined8 *)&(param_3->GetObject).field_0x10;
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
  pTVar6 = ::operator_new(0x110);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pIVar12 = (IOutputController *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFBaseOutputController_Frontend_Metasound___00_SharedPointerInternals__6B_
    ;
    FBaseOutputController::FBaseOutputController
              ((FBaseOutputController *)(pTVar6 + 1),(FInitParams *)local_138);
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
      goto LAB_14ae6a84b;
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
LAB_14ae6a84b:
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
  if (local_138._32_8_ != 0) {
    plVar9 = (longlong *)(local_138 + 0x30);
    if (local_f0 != (longlong *)0x0) {
      plVar9 = local_f0;
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

// IsValid @ 14ae7aad0

bool __thiscall Metasound::Frontend::FNodeController::IsValid(FNodeController *this)

{
  code *pcVar1;
  longlong *plVar2;
  bool bVar3;
  undefined8 uVar4;
  FMetasoundFrontendGraph *pFVar5;
  longlong *plVar6;
  
  bVar3 = FBaseNodeController::IsValid((FBaseNodeController *)this);
  if (bVar3) {
    UE::Core::Private::Function::CheckCallable(*(void **)&(this->GraphPtr).GetObject);
    pcVar1 = *(code **)&(this->GraphPtr).GetObject;
    plVar2 = *(longlong **)&(this->GraphPtr).GetObject.field_0x28;
    plVar6 = (longlong *)&(this->GraphPtr).GetObject.field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar6 = plVar2;
    }
    uVar4 = (**(code **)(*plVar6 + 8))();
    pFVar5 = (FMetasoundFrontendGraph *)(*pcVar1)(uVar4);
    (this->GraphPtr).CachedObjectPtr = pFVar5;
    if (pFVar5 != (FMetasoundFrontendGraph *)0x0) {
      return true;
    }
  }
  return false;
}

// ShareAccess @ 14ae8a370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDocumentAccess * __thiscall
Metasound::Frontend::FNodeController::ShareAccess
          (FNodeController *this,FDocumentAccess *__return_storage_ptr__)

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
  if (lVar7 != 0) {
    plVar9 = (longlong *)(local_58 + 0x20);
    if (plVar6 != (longlong *)0x0) {
      plVar9 = plVar6;
    }
    local_58._16_8_ = lVar7;
    local_58._24_8_ = lVar8;
    (**(code **)(*plVar9 + 0x10))();
  }
  return __return_storage_ptr__;
}

// ShareAccess @ 14ae8a460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FConstDocumentAccess * __thiscall
Metasound::Frontend::FNodeController::ShareAccess
          (FNodeController *this,FConstDocumentAccess *__return_storage_ptr__)

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
  if (lVar7 != 0) {
    plVar9 = (longlong *)(local_58 + 0x20);
    if (plVar6 != (longlong *)0x0) {
      plVar9 = plVar6;
    }
    local_58._16_8_ = lVar7;
    local_58._24_8_ = uVar8;
    (**(code **)(*plVar9 + 0x10))();
  }
  return __return_storage_ptr__;
}

