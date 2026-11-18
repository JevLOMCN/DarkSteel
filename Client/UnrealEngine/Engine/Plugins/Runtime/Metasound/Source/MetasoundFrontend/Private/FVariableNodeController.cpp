// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 8

// FVariableNodeController @ 14ae5b350

FVariableNodeController * __thiscall
Metasound::Frontend::FVariableNodeController::FVariableNodeController
          (FVariableNodeController *this,EPrivateToken param_1,FInitParams *param_2)

{
  FNodeController::FNodeController((FNodeController *)this,Token,param_2);
  *(undefined ***)this = &___7FVariableNodeController_Frontend_Metasound__6B_;
  return this;
}

// ~FVariableNodeController @ 14ae5c730

void __thiscall
Metasound::Frontend::FVariableNodeController::~FVariableNodeController
          (FVariableNodeController *this)

{
  longlong *plVar1;
  
  if (*(longlong *)&this->field_0xc0 != 0) {
    plVar1 = (longlong *)&this->field_0xd0;
    if (*(longlong **)&this->field_0xe8 != (longlong *)0x0) {
      plVar1 = *(longlong **)&this->field_0xe8;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FBaseNodeController::~FBaseNodeController((FBaseNodeController *)this);
  return;
}

// CreateConstNodeHandle @ 14ae67560

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<Metasound::Frontend::INodeController_const_,1> * __cdecl
Metasound::Frontend::FVariableNodeController::CreateConstNodeHandle
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
  TSharedRef<Metasound::Frontend::INodeController_const_,1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TSharedRef<Metasound::Frontend::INodeController,1> *pTVar11;
  longlong *plVar12;
  INodeController *pIVar13;
  FString local_58;
  FString local_48;
  FString local_38;
  TSharedRef<Metasound::Frontend::INodeController,1> local_28;
  
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
      if (((this[1].D == *(uint *)(lVar8 + 0x14) && this[1].C == *(uint *)(lVar8 + 0x10)) &&
          this[1].B == *(uint *)(lVar8 + 0xc)) && ((FGuid *)(lVar8 + 8))->A == this[1].A) {
        EVar5 = FMetasoundFrontendClassMetadata::GetType
                          ((FMetasoundFrontendClassMetadata *)(lVar8 + 0x18));
        if ((byte)(EVar5 - Variable) < 4) {
          pTVar10 = ::operator_new(0x100);
          if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
            pTVar10 = (TReferenceControllerBase<1> *)0x0;
            pIVar13 = (INodeController *)&DAT_00000010;
LAB_14ae676ee:
            local_28.SharedReferenceCount.ReferenceController = pTVar10;
            if (((*(longlong *)&pIVar13->field_0x8 == 0) || (*(longlong *)&pIVar13->field_0x10 == 0)
                ) || (*(int *)(*(longlong *)&pIVar13->field_0x10 + 8) < 1)) {
              if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar10->SharedReferenceCount =
                     (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
                UNLOCK();
              }
              *(INodeController **)&pIVar13->field_0x8 = pIVar13;
              if (pTVar10 != *(TReferenceControllerBase<1> **)&pIVar13->field_0x10) {
                if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
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
                *(TReferenceControllerBase<1> **)&pIVar13->field_0x10 = pTVar10;
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar10);
            }
          }
          else {
            pTVar10->SharedReferenceCount = (atomic<int>)0x1;
            pTVar10->WeakReferenceCount = (atomic<int>)0x1;
            pTVar10->_padding_ =
                 (longlong)
                 &
                 ___7__TIntrusiveReferenceController___CBVFVariableNodeController_Frontend_Metasound___00_SharedPointerInternals__6B_
            ;
            FNodeController::FNodeController((FNodeController *)(pTVar10 + 1),Token,param_1);
            pIVar13 = (INodeController *)(pTVar10 + 1);
            pTVar10[1]._padding_ = (longlong)&___7FVariableNodeController_Frontend_Metasound__6B_;
            if (pIVar13 != (INodeController *)0x0) goto LAB_14ae676ee;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L"");
            local_28.SharedReferenceCount.ReferenceController = pTVar10;
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              pTVar9 = (TSharedRef<Metasound::Frontend::INodeController_const_,1> *)(*pcVar4)();
              return pTVar9;
            }
          }
          __return_storage_ptr__->Object = pIVar13;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
               local_28.SharedReferenceCount.ReferenceController;
          if (local_28.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          goto LAB_14ae67862;
        }
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3501407040784300197>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeController.cpp"
                           ,0x75b,"IsSupportedClassType(ClassType)");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TSharedRef<Metasound::Frontend::INodeController_const_,1> *)(*pcVar4)();
          return pTVar9;
        }
      }
      else if (2 < (byte)LogMetaSound._0_1_) {
        local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_38.Data.ArrayNum = 0;
        local_38.Data.ArrayMax = 0;
        FGuid::AppendString((FGuid *)(lVar8 + 8),&local_38,Digits);
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
  pTVar11 = INodeController::GetInvalidHandle(&local_28);
  __return_storage_ptr__->Object = pTVar11->Object;
  pTVar10 = (pTVar11->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar10;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
LAB_14ae67862:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// CreateInputController @ 14ae688f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<Metasound::Frontend::IInputController,1> * __thiscall
Metasound::Frontend::FVariableNodeController::CreateInputController
          (FVariableNodeController *this,
          TSharedRef<Metasound::Frontend::IInputController,1> *__return_storage_ptr__,FGuid *param_1
          ,TAccessPtr<FMetasoundFrontendVertex_const_> *param_2,
          TAccessPtr<FMetasoundFrontendClassInput_const_> *param_3,
          TSharedRef<Metasound::Frontend::INodeController,1> *param_4)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  FMetasoundFrontendClassInput *pFVar6;
  FConstDocumentAccess *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<Metasound::Frontend::IInputController,1> *pTVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  TReferenceControllerBase<1> *pTVar14;
  undefined8 *puVar15;
  IInputController *pIVar16;
  undefined1 auStackY_448 [32];
  FGuid *local_418 [2];
  TSharedRef<Metasound::Frontend::INodeController,1> local_408;
  TAccessPtr<FMetasoundFrontendClassInput_const_> local_3f8;
  TAccessPtr<FMetasoundFrontendVertex_const_> local_3b8;
  undefined1 local_378 [64];
  undefined1 local_338 [72];
  longlong *local_2f0;
  FMetasoundFrontendClassInput *local_2e8;
  longlong local_2d8;
  longlong local_2c8 [3];
  longlong *local_2b0;
  FMetasoundFrontendGraph *local_2a8;
  longlong local_298;
  longlong local_288 [3];
  longlong *local_270;
  INodeController *local_268;
  FSharedReferencer<1> local_260;
  FConstDocumentAccess local_258;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_448;
  local_418[0] = param_1;
  UE::Core::Private::Function::CheckCallable(*(void **)&param_3->GetObject);
  plVar11 = *(longlong **)&(param_3->GetObject).field_0x28;
  puVar15 = (undefined8 *)&(param_3->GetObject).field_0x10;
  pcVar3 = *(code **)&param_3->GetObject;
  plVar12 = puVar15;
  if (plVar11 != (longlong *)0x0) {
    plVar12 = plVar11;
  }
  uVar5 = (**(code **)(*plVar12 + 8))();
  pFVar6 = (FMetasoundFrontendClassInput *)(*pcVar3)(uVar5);
  param_3->CachedObjectPtr = pFVar6;
  if (pFVar6 != (FMetasoundFrontendClassInput *)0x0) {
    bVar4 = IsVariableDataType((FName *)&pFVar6->_padding_);
    if (bVar4) {
      pFVar7 = FNodeController::ShareAccess((FNodeController *)this,&local_258);
      ConstCastAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph>,Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph_const_>_>
                ((TAccessPtr<FMetasoundFrontendGraph> *)local_378,&pFVar7->ConstGraph);
      FConstDocumentAccess::~FConstDocumentAccess(&local_258);
      pTVar14 = (TReferenceControllerBase<1> *)0x0;
      local_2f0 = (longlong *)0x0;
      local_338._16_8_ = param_2->CachedObjectPtr;
      local_338._0_4_ = local_418[0]->A;
      local_338._4_4_ = local_418[0]->B;
      local_338._8_4_ = local_418[0]->C;
      local_338._12_4_ = local_418[0]->D;
      local_338._32_8_ = *(longlong *)&param_2->GetObject;
      if (*(longlong *)&param_2->GetObject != 0) {
        puVar13 = *(undefined8 **)&(param_2->GetObject).field_0x28;
        puVar10 = (undefined8 *)&(param_2->GetObject).field_0x10;
        if (puVar13 != (undefined8 *)0x0) {
          puVar10 = puVar13;
        }
        (**(code **)*puVar10)(local_418[0]->A,local_338 + 0x30);
      }
      local_2e8 = param_3->CachedObjectPtr;
      local_2d8 = *(longlong *)&param_3->GetObject;
      local_2b0 = (longlong *)0x0;
      if (*(longlong *)&param_3->GetObject != 0) {
        puVar13 = *(undefined8 **)&(param_3->GetObject).field_0x28;
        if (puVar13 != (undefined8 *)0x0) {
          puVar15 = puVar13;
        }
        (**(code **)*puVar15)(puVar15,local_2c8);
      }
      local_2a8 = (FMetasoundFrontendGraph *)local_378._0_8_;
      local_298 = local_378._16_8_;
      local_270 = (longlong *)0x0;
      if (local_378._16_8_ != 0) {
        plVar11 = (longlong *)(local_378 + 0x20);
        if ((longlong *)local_378._56_8_ != (longlong *)0x0) {
          plVar11 = (longlong *)local_378._56_8_;
        }
        (**(code **)*plVar11)(plVar11,local_288);
      }
      local_268 = param_4->Object;
      local_260.ReferenceController = (param_4->SharedReferenceCount).ReferenceController;
      if (local_260.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_260.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_260.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar8 = ::operator_new(0x110);
      if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
        pIVar16 = (IInputController *)&DAT_00000010;
LAB_14ae68af3:
        if (((*(longlong *)&pIVar16->field_0x8 == 0) || (*(longlong *)&pIVar16->field_0x10 == 0)) ||
           (*(int *)(*(longlong *)&pIVar16->field_0x10 + 8) < 1)) {
          if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
            UNLOCK();
          }
          *(IInputController **)&pIVar16->field_0x8 = pIVar16;
          if (pTVar14 != *(TReferenceControllerBase<1> **)&pIVar16->field_0x10) {
            if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar14->WeakReferenceCount = (atomic<int>)((int)pTVar14->WeakReferenceCount + 1);
              UNLOCK();
            }
            plVar11 = *(longlong **)&pIVar16->field_0x10;
            if (plVar11 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*plVar11 + 8))(plVar11,1);
              }
            }
            *(TReferenceControllerBase<1> **)&pIVar16->field_0x10 = pTVar14;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar14);
        }
      }
      else {
        pTVar8->SharedReferenceCount = (atomic<int>)0x1;
        pTVar8->WeakReferenceCount = (atomic<int>)0x1;
        pTVar8->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFVariableInputController_Frontend_Metasound___00_SharedPointerInternals__6B_
        ;
        FVariableInputController::FVariableInputController
                  ((FVariableInputController *)(pTVar8 + 1),(FInitParams *)local_338);
        pIVar16 = (IInputController *)(pTVar8 + 1);
        pTVar14 = pTVar8;
        if (pIVar16 != (IInputController *)0x0) goto LAB_14ae68af3;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TSharedRef<Metasound::Frontend::IInputController,1> *)(*pcVar3)();
          return pTVar9;
        }
      }
      __return_storage_ptr__->Object = pIVar16;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar14;
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_260.ReferenceController);
      if (local_298 != 0) {
        plVar11 = local_288;
        if (local_270 != (longlong *)0x0) {
          plVar11 = local_270;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
      if (local_2d8 != 0) {
        plVar11 = local_2c8;
        if (local_2b0 != (longlong *)0x0) {
          plVar11 = local_2b0;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
      if (local_338._32_8_ != 0) {
        plVar11 = (longlong *)(local_338 + 0x30);
        if (local_2f0 != (longlong *)0x0) {
          plVar11 = local_2f0;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
      if (local_378._16_8_ != 0) {
        plVar11 = (longlong *)(local_378 + 0x20);
        if ((longlong *)local_378._56_8_ != (longlong *)0x0) {
          plVar11 = (longlong *)local_378._56_8_;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
      if (*(longlong *)&param_2->GetObject != 0) {
        plVar11 = *(longlong **)&(param_2->GetObject).field_0x28;
        plVar12 = (longlong *)&(param_2->GetObject).field_0x10;
        if (plVar11 != (longlong *)0x0) {
          plVar12 = plVar11;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      if (*(longlong *)&param_3->GetObject != 0) {
        plVar11 = *(longlong **)&(param_3->GetObject).field_0x28;
        plVar12 = (longlong *)&(param_3->GetObject).field_0x10;
        if (plVar11 != (longlong *)0x0) {
          plVar12 = plVar11;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      goto LAB_14ae68d25;
    }
  }
  local_408.Object = param_4->Object;
  local_408.SharedReferenceCount.ReferenceController =
       (param_4->SharedReferenceCount).ReferenceController;
  if (local_408.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_408.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_408.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3f8.CachedObjectPtr = param_3->CachedObjectPtr;
  local_3f8.GetObject._0_8_ = *(undefined8 *)&param_3->GetObject;
  local_3f8.GetObject._40_8_ = 0;
  if (local_3f8.GetObject._0_8_ != 0) {
    puVar13 = *(undefined8 **)&(param_3->GetObject).field_0x28;
    if (puVar13 != (undefined8 *)0x0) {
      puVar15 = puVar13;
    }
    (**(code **)*puVar15)(puVar15,&local_3f8.GetObject.field_0x10);
  }
  local_3b8.CachedObjectPtr = param_2->CachedObjectPtr;
  local_3b8.GetObject._0_8_ = *(undefined8 *)&param_2->GetObject;
  local_3b8.GetObject._40_8_ = 0;
  if (local_3b8.GetObject._0_8_ != 0) {
    puVar15 = *(undefined8 **)&(param_2->GetObject).field_0x28;
    puVar13 = (undefined8 *)&(param_2->GetObject).field_0x10;
    if (puVar15 != (undefined8 *)0x0) {
      puVar13 = puVar15;
    }
    (**(code **)*puVar13)(puVar13,&local_3b8.GetObject.field_0x10);
  }
  local_418[1]._0_4_ = local_418[0]->C;
  local_418[1]._4_4_ = local_418[0]->D;
  local_418[0] = *(FGuid **)local_418[0];
  FNodeController::CreateInputController
            ((FNodeController *)this,__return_storage_ptr__,(FGuid *)local_418,&local_3b8,&local_3f8
             ,&local_408);
  if (*(longlong *)&param_2->GetObject != 0) {
    plVar11 = *(longlong **)&(param_2->GetObject).field_0x28;
    plVar12 = (longlong *)&(param_2->GetObject).field_0x10;
    if (plVar11 != (longlong *)0x0) {
      plVar12 = plVar11;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (*(longlong *)&param_3->GetObject != 0) {
    plVar11 = *(longlong **)&(param_3->GetObject).field_0x28;
    plVar12 = (longlong *)&(param_3->GetObject).field_0x10;
    if (plVar11 != (longlong *)0x0) {
      plVar12 = plVar11;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
LAB_14ae68d25:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// CreateNodeHandle @ 14ae6a030

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<Metasound::Frontend::INodeController,1> * __cdecl
Metasound::Frontend::FVariableNodeController::CreateNodeHandle
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
  TSharedRef<Metasound::Frontend::INodeController,1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  longlong *plVar11;
  INodeController *pIVar12;
  FString local_48;
  FString local_38;
  FString local_28;
  
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
  if (this == (FGuid *)0x0) {
LAB_14ae6a31a:
    INodeController::GetInvalidHandle(__return_storage_ptr__);
    return __return_storage_ptr__;
  }
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
  if (lVar8 == 0) goto LAB_14ae6a31a;
  if (((this[1].D != *(uint *)(lVar8 + 0x14) || this[1].C != *(uint *)(lVar8 + 0x10)) ||
      this[1].B != *(uint *)(lVar8 + 0xc)) || ((FGuid *)(lVar8 + 8))->A != this[1].A) {
    if (2 < (byte)LogMetaSound._0_1_) {
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      FGuid::AppendString((FGuid *)(lVar8 + 8),&local_28,Digits);
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
    goto LAB_14ae6a31a;
  }
  EVar5 = FMetasoundFrontendClassMetadata::GetType
                    ((FMetasoundFrontendClassMetadata *)(lVar8 + 0x18));
  if (3 < (byte)(EVar5 - Variable)) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3501407040784300223>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeController.cpp"
                       ,0x741,"IsSupportedClassType(ClassType)");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TSharedRef<Metasound::Frontend::INodeController,1> *)(*pcVar4)();
      return pTVar9;
    }
    goto LAB_14ae6a31a;
  }
  pTVar10 = ::operator_new(0x100);
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)0x0;
    pIVar12 = (INodeController *)&DAT_00000010;
  }
  else {
    pTVar10->SharedReferenceCount = (atomic<int>)0x1;
    pTVar10->WeakReferenceCount = (atomic<int>)0x1;
    pTVar10->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFVariableNodeController_Frontend_Metasound___00_SharedPointerInternals__6B_
    ;
    FNodeController::FNodeController((FNodeController *)(pTVar10 + 1),Token,param_1);
    pIVar12 = (INodeController *)(pTVar10 + 1);
    pTVar10[1]._padding_ = (longlong)&___7FVariableNodeController_Frontend_Metasound__6B_;
    if (pIVar12 == (INodeController *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TSharedRef<Metasound::Frontend::INodeController,1> *)(*pcVar4)();
        return pTVar9;
      }
      goto LAB_14ae6a229;
    }
  }
  if (((*(longlong *)&pIVar12->field_0x8 == 0) || (*(longlong *)&pIVar12->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pIVar12->field_0x10 + 8) < 1)) {
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(INodeController **)&pIVar12->field_0x8 = pIVar12;
    if (pTVar10 != *(TReferenceControllerBase<1> **)&pIVar12->field_0x10) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
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
      *(TReferenceControllerBase<1> **)&pIVar12->field_0x10 = pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
LAB_14ae6a229:
  __return_storage_ptr__->Object = pIVar12;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar10;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return __return_storage_ptr__;
}

// CreateOutputController @ 14ae6af10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<Metasound::Frontend::IOutputController,1> * __thiscall
Metasound::Frontend::FVariableNodeController::CreateOutputController
          (FVariableNodeController *this,
          TSharedRef<Metasound::Frontend::IOutputController,1> *__return_storage_ptr__,
          FGuid *param_1,TAccessPtr<FMetasoundFrontendVertex_const_> *param_2,
          TAccessPtr<FMetasoundFrontendClassOutput_const_> *param_3,
          TSharedRef<Metasound::Frontend::INodeController,1> *param_4)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  FMetasoundFrontendClassOutput *pFVar6;
  FConstDocumentAccess *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<Metasound::Frontend::IOutputController,1> *pTVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  TReferenceControllerBase<1> *pTVar14;
  undefined8 *puVar15;
  IOutputController *pIVar16;
  undefined1 auStackY_448 [32];
  FGuid *local_418 [2];
  TSharedRef<Metasound::Frontend::INodeController,1> local_408;
  TAccessPtr<FMetasoundFrontendClassOutput_const_> local_3f8;
  TAccessPtr<FMetasoundFrontendVertex_const_> local_3b8;
  undefined1 local_378 [64];
  undefined1 local_338 [72];
  longlong *local_2f0;
  FMetasoundFrontendClassOutput *local_2e8;
  longlong local_2d8;
  longlong local_2c8 [3];
  longlong *local_2b0;
  FMetasoundFrontendGraph *local_2a8;
  longlong local_298;
  longlong local_288 [3];
  longlong *local_270;
  INodeController *local_268;
  FSharedReferencer<1> local_260;
  FConstDocumentAccess local_258;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_448;
  local_418[0] = param_1;
  UE::Core::Private::Function::CheckCallable(*(void **)&param_3->GetObject);
  plVar11 = *(longlong **)&(param_3->GetObject).field_0x28;
  puVar15 = (undefined8 *)&(param_3->GetObject).field_0x10;
  pcVar3 = *(code **)&param_3->GetObject;
  plVar12 = puVar15;
  if (plVar11 != (longlong *)0x0) {
    plVar12 = plVar11;
  }
  uVar5 = (**(code **)(*plVar12 + 8))();
  pFVar6 = (FMetasoundFrontendClassOutput *)(*pcVar3)(uVar5);
  param_3->CachedObjectPtr = pFVar6;
  if (pFVar6 != (FMetasoundFrontendClassOutput *)0x0) {
    bVar4 = IsVariableDataType((FName *)&pFVar6->field_0x8);
    if (bVar4) {
      pFVar7 = FNodeController::ShareAccess((FNodeController *)this,&local_258);
      ConstCastAccessPtr<Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph>,Metasound::Frontend::TAccessPtr<FMetasoundFrontendGraph_const_>_>
                ((TAccessPtr<FMetasoundFrontendGraph> *)local_378,&pFVar7->ConstGraph);
      FConstDocumentAccess::~FConstDocumentAccess(&local_258);
      pTVar14 = (TReferenceControllerBase<1> *)0x0;
      local_2f0 = (longlong *)0x0;
      local_338._16_8_ = param_2->CachedObjectPtr;
      local_338._0_4_ = local_418[0]->A;
      local_338._4_4_ = local_418[0]->B;
      local_338._8_4_ = local_418[0]->C;
      local_338._12_4_ = local_418[0]->D;
      local_338._32_8_ = *(longlong *)&param_2->GetObject;
      if (*(longlong *)&param_2->GetObject != 0) {
        puVar13 = *(undefined8 **)&(param_2->GetObject).field_0x28;
        puVar10 = (undefined8 *)&(param_2->GetObject).field_0x10;
        if (puVar13 != (undefined8 *)0x0) {
          puVar10 = puVar13;
        }
        (**(code **)*puVar10)(local_418[0]->A,local_338 + 0x30);
      }
      local_2e8 = param_3->CachedObjectPtr;
      local_2d8 = *(longlong *)&param_3->GetObject;
      local_2b0 = (longlong *)0x0;
      if (*(longlong *)&param_3->GetObject != 0) {
        puVar13 = *(undefined8 **)&(param_3->GetObject).field_0x28;
        if (puVar13 != (undefined8 *)0x0) {
          puVar15 = puVar13;
        }
        (**(code **)*puVar15)(puVar15,local_2c8);
      }
      local_2a8 = (FMetasoundFrontendGraph *)local_378._0_8_;
      local_298 = local_378._16_8_;
      local_270 = (longlong *)0x0;
      if (local_378._16_8_ != 0) {
        plVar11 = (longlong *)(local_378 + 0x20);
        if ((longlong *)local_378._56_8_ != (longlong *)0x0) {
          plVar11 = (longlong *)local_378._56_8_;
        }
        (**(code **)*plVar11)(plVar11,local_288);
      }
      local_268 = param_4->Object;
      local_260.ReferenceController = (param_4->SharedReferenceCount).ReferenceController;
      if (local_260.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_260.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_260.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar8 = ::operator_new(0x110);
      if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
        pIVar16 = (IOutputController *)&DAT_00000010;
LAB_14ae6b11e:
        if (((*(longlong *)&pIVar16->field_0x8 == 0) || (*(longlong *)&pIVar16->field_0x10 == 0)) ||
           (*(int *)(*(longlong *)&pIVar16->field_0x10 + 8) < 1)) {
          if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
            UNLOCK();
          }
          *(IOutputController **)&pIVar16->field_0x8 = pIVar16;
          if (pTVar14 != *(TReferenceControllerBase<1> **)&pIVar16->field_0x10) {
            if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar14->WeakReferenceCount = (atomic<int>)((int)pTVar14->WeakReferenceCount + 1);
              UNLOCK();
            }
            plVar11 = *(longlong **)&pIVar16->field_0x10;
            if (plVar11 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*plVar11 + 8))(plVar11,1);
              }
            }
            *(TReferenceControllerBase<1> **)&pIVar16->field_0x10 = pTVar14;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar14);
        }
      }
      else {
        pTVar8->SharedReferenceCount = (atomic<int>)0x1;
        pTVar8->WeakReferenceCount = (atomic<int>)0x1;
        pTVar8->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFVariableOutputController_Frontend_Metasound___00_SharedPointerInternals__6B_
        ;
        FBaseOutputController::FBaseOutputController
                  ((FBaseOutputController *)(pTVar8 + 1),(FInitParams *)local_338);
        pIVar16 = (IOutputController *)(pTVar8 + 1);
        pTVar8[1]._padding_ = (longlong)&___7FVariableOutputController_Frontend_Metasound__6B_;
        pTVar14 = pTVar8;
        if (pIVar16 != (IOutputController *)0x0) goto LAB_14ae6b11e;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TSharedRef<Metasound::Frontend::IOutputController,1> *)(*pcVar3)();
          return pTVar9;
        }
      }
      __return_storage_ptr__->Object = pIVar16;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar14;
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_260.ReferenceController);
      if (local_298 != 0) {
        plVar11 = local_288;
        if (local_270 != (longlong *)0x0) {
          plVar11 = local_270;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
      if (local_2d8 != 0) {
        plVar11 = local_2c8;
        if (local_2b0 != (longlong *)0x0) {
          plVar11 = local_2b0;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
      if (local_338._32_8_ != 0) {
        plVar11 = (longlong *)(local_338 + 0x30);
        if (local_2f0 != (longlong *)0x0) {
          plVar11 = local_2f0;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
      if (local_378._16_8_ != 0) {
        plVar11 = (longlong *)(local_378 + 0x20);
        if ((longlong *)local_378._56_8_ != (longlong *)0x0) {
          plVar11 = (longlong *)local_378._56_8_;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
      if (*(longlong *)&param_2->GetObject != 0) {
        plVar11 = *(longlong **)&(param_2->GetObject).field_0x28;
        plVar12 = (longlong *)&(param_2->GetObject).field_0x10;
        if (plVar11 != (longlong *)0x0) {
          plVar12 = plVar11;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      if (*(longlong *)&param_3->GetObject != 0) {
        plVar11 = *(longlong **)&(param_3->GetObject).field_0x28;
        plVar12 = (longlong *)&(param_3->GetObject).field_0x10;
        if (plVar11 != (longlong *)0x0) {
          plVar12 = plVar11;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      goto LAB_14ae6b350;
    }
  }
  local_408.Object = param_4->Object;
  local_408.SharedReferenceCount.ReferenceController =
       (param_4->SharedReferenceCount).ReferenceController;
  if (local_408.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_408.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_408.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3f8.CachedObjectPtr = param_3->CachedObjectPtr;
  local_3f8.GetObject._0_8_ = *(undefined8 *)&param_3->GetObject;
  local_3f8.GetObject._40_8_ = 0;
  if (local_3f8.GetObject._0_8_ != 0) {
    puVar13 = *(undefined8 **)&(param_3->GetObject).field_0x28;
    if (puVar13 != (undefined8 *)0x0) {
      puVar15 = puVar13;
    }
    (**(code **)*puVar15)(puVar15,&local_3f8.GetObject.field_0x10);
  }
  local_3b8.CachedObjectPtr = param_2->CachedObjectPtr;
  local_3b8.GetObject._0_8_ = *(undefined8 *)&param_2->GetObject;
  local_3b8.GetObject._40_8_ = 0;
  if (local_3b8.GetObject._0_8_ != 0) {
    puVar15 = *(undefined8 **)&(param_2->GetObject).field_0x28;
    puVar13 = (undefined8 *)&(param_2->GetObject).field_0x10;
    if (puVar15 != (undefined8 *)0x0) {
      puVar13 = puVar15;
    }
    (**(code **)*puVar13)(puVar13,&local_3b8.GetObject.field_0x10);
  }
  local_418[1]._0_4_ = local_418[0]->C;
  local_418[1]._4_4_ = local_418[0]->D;
  local_418[0] = *(FGuid **)local_418[0];
  FNodeController::CreateOutputController
            ((FNodeController *)this,__return_storage_ptr__,(FGuid *)local_418,&local_3b8,&local_3f8
             ,&local_408);
  if (*(longlong *)&param_2->GetObject != 0) {
    plVar11 = *(longlong **)&(param_2->GetObject).field_0x28;
    plVar12 = (longlong *)&(param_2->GetObject).field_0x10;
    if (plVar11 != (longlong *)0x0) {
      plVar12 = plVar11;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (*(longlong *)&param_3->GetObject != 0) {
    plVar11 = *(longlong **)&(param_3->GetObject).field_0x28;
    plVar12 = (longlong *)&(param_3->GetObject).field_0x10;
    if (plVar11 != (longlong *)0x0) {
      plVar12 = plVar11;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
LAB_14ae6b350:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// IsSupportedClassType @ 14ae7a7a0

bool __cdecl
Metasound::Frontend::FVariableNodeController::IsSupportedClassType
          (EMetasoundFrontendClassType param_1)

{
  return (byte)(param_1 - Variable) < 4;
}

// IsVariableDataType @ 14ae7aea0

bool __cdecl Metasound::Frontend::FVariableNodeController::IsVariableDataType(FName *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  IDataTypeRegistry *pIVar5;
  undefined8 local_58;
  FText local_50;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined2 local_2c;
  undefined1 local_2a;
  undefined8 local_28;
  undefined2 local_20;
  undefined8 local_1c;
  
  local_58 = 0;
  FText::FText(&local_50);
  local_40 = 0xc;
  local_38 = 0;
  local_30 = 0;
  local_2c = 0;
  local_2a = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  pIVar5 = IDataTypeRegistry::Get();
  cVar2 = (**(code **)((longlong)*pIVar5 + 0x20))(pIVar5,param_1,&local_58);
  if (cVar2 == '\0') {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3501407040784300144>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeController.cpp"
                       ,0x790,"IDataTypeRegistry::Get().GetDataTypeInfo(InTypeName, DataTypeInfo)");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    uVar4 = 0;
  }
  else {
    uVar4 = local_30._3_1_;
  }
  if (local_50.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
  }
  return (bool)uVar4;
}

