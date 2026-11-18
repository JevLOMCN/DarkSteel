// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 2

// AfterEach @ 142cec770

void __thiscall
FAutomationSpecBase::AfterEach(FAutomationSpecBase *this,TFunction<void___cdecl(void)> *param_1)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FSingleExecuteLatentCommand *this_00;
  FSingleExecuteLatentCommand *pFVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  undefined8 *puVar11;
  TSharedRef<IAutomationLatentCommand,1> local_78;
  TRawPtrProxy<FAutomationSpecBase::FSingleExecuteLatentCommand> local_68 [2];
  TFunction<void___cdecl(void)> local_58;
  
  iVar6 = (this->DefinitionScopeStack).ArrayNum;
  pFVar7 = (FSingleExecuteLatentCommand *)0x0;
  uVar10 = iVar6 - 1;
  uVar5 = 0;
  if ((int)uVar10 < iVar6) {
    uVar5 = ~uVar10 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = (this->DefinitionScopeStack).AllocatorInstance.Data;
  lVar8 = (longlong)(this->DefinitionScopeStack).ArrayNum;
  pTVar2 = *(TReferenceControllerBase<1> **)(pFVar1 + lVar8 * 0x10 + -8);
  lVar8 = *(longlong *)(pFVar1 + lVar8 * 0x10 + -0x10);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = ::operator_new(0x70);
  if (this_00 != (FSingleExecuteLatentCommand *)0x0) {
    local_58._0_8_ = *(undefined8 *)param_1;
    local_58._40_8_ = 0;
    if (local_58._0_8_ != 0) {
      puVar11 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar11 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar11)(puVar11,&local_58.field_0x10);
    }
    pFVar7 = FSingleExecuteLatentCommand::FSingleExecuteLatentCommand(this_00,this,&local_58,false);
    if ((((pFVar7 != (FSingleExecuteLatentCommand *)0x0) && (*(longlong *)&pFVar7->field_0x8 != 0))
        && (*(longlong *)&pFVar7->field_0x10 != 0)) &&
       (0 < *(int *)(*(longlong *)&pFVar7->field_0x10 + 8))) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  local_68[0].Object = pFVar7;
  TSharedRef<IAutomationLatentCommand,1>::
  TSharedRef<IAutomationLatentCommand,1><FAutomationSpecBase::FSingleExecuteLatentCommand>
            (&local_78,local_68);
  if ((*(TSharedRef<IAutomationLatentCommand,1> **)(lVar8 + 0x30) <= &local_78) &&
     (&local_78 <
      *(TSharedRef<IAutomationLatentCommand,1> **)(lVar8 + 0x30) + *(int *)(lVar8 + 0x3c))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = *(int *)(lVar8 + 0x38);
  if (iVar6 == *(int *)(lVar8 + 0x3c)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)(lVar8 + 0x30),(int *)(lVar8 + 0x3c));
  }
  *(int *)(lVar8 + 0x38) = iVar6 + 1;
  puVar11 = (undefined8 *)((longlong)iVar6 * 0x10 + *(longlong *)(lVar8 + 0x30));
  *puVar11 = local_78.Object;
  puVar11[1] = local_78.SharedReferenceCount.ReferenceController;
  if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (*(longlong *)param_1 != 0) {
    plVar9 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar9 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  return;
}

// It @ 142cf6c00

void __thiscall
FAutomationSpecBase::It
          (FAutomationSpecBase *this,FString *param_1,EAsyncExecution param_2,
          TFunction<void___cdecl(void)> *param_3,FSourceLocation *param_4)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FAsyncLatentCommand *pFVar8;
  TSharedRef<IAutomationLatentCommand,1> *pTVar9;
  FString *pFVar10;
  FString *pFVar11;
  FString *pFVar12;
  FSpecIt *pFVar13;
  longlong lVar14;
  longlong *plVar15;
  uint uVar16;
  undefined8 *puVar17;
  TSharedRef<FAutomationSpecBase::FSpecIt,1> local_e0;
  FSourceLocation *local_d0;
  TRawPtrProxy<FAutomationSpecBase::FAsyncLatentCommand> local_c8;
  FSpecIt *local_c0;
  FString *local_b8;
  TRawPtrProxy<FAutomationSpecBase::FSpecIt> local_b0;
  longlong local_a8;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  longlong *local_80;
  TSharedRef<IAutomationLatentCommand,1> local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  pFVar13 = (FSpecIt *)0x0;
  local_d0 = param_4;
  iVar7 = (this->DefinitionScopeStack).ArrayNum;
  uVar16 = iVar7 - 1;
  uVar6 = 0;
  if ((int)uVar16 < iVar7) {
    uVar6 = ~uVar16 >> 0x1f;
  }
  local_b8 = param_1;
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar1 = (this->DefinitionScopeStack).AllocatorInstance.Data;
  lVar14 = (longlong)(this->DefinitionScopeStack).ArrayNum;
  pTVar2 = *(TReferenceControllerBase<1> **)(pFVar1 + lVar14 * 0x10 + -8);
  lVar14 = *(longlong *)(pFVar1 + lVar14 * 0x10 + -0x10);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  PushDescription(this,param_1);
  local_c0 = ::operator_new(0x48);
  if (local_c0 != (FSpecIt *)0x0) {
    pFVar8 = ::operator_new(0xb0);
    if (pFVar8 == (FAsyncLatentCommand *)0x0) {
      pFVar8 = (FAsyncLatentCommand *)0x0;
    }
    else {
      local_a8 = *(longlong *)param_3;
      bVar5 = this->bEnableSkipIfError;
      local_80 = (longlong *)0x0;
      if (local_a8 != 0) {
        puVar17 = (undefined8 *)&param_3->field_0x10;
        if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
          puVar17 = *(undefined8 **)&param_3->field_0x28;
        }
        (**(code **)*puVar17)(puVar17,&local_98);
      }
      pFVar8->_padding_ = 0;
      pFVar8->_padding_ = (longlong)&___7FAsyncLatentCommand_FAutomationSpecBase__6B_;
      pFVar8->Execution = param_2;
      pFVar8->_padding_ = 0;
      pFVar8->_padding_ = 0;
      pFVar8->Spec = this;
      *(longlong *)&pFVar8->Predicate = local_a8;
      *(longlong **)&(pFVar8->Predicate).field_0x28 = local_80;
      local_80 = (longlong *)0x0;
      *(undefined4 *)&(pFVar8->Predicate).field_0x10 = (undefined4)local_98;
      *(undefined4 *)&(pFVar8->Predicate).field_0x14 = local_98._4_4_;
      *(undefined4 *)&(pFVar8->Predicate).field_0x18 = uStack_90;
      *(undefined4 *)&(pFVar8->Predicate).field_0x1c = uStack_8c;
      *(undefined8 *)&(pFVar8->Predicate).field_0x20 = local_88;
      if (*(longlong *)&pFVar8->Predicate != 0) {
        local_a8 = 0;
      }
      (pFVar8->Timeout).Ticks = (this->DefaultTimeout).Ticks;
      pFVar8->bSkipIfErrored = bVar5;
      pFVar8->bDone = (FThreadSafeBool)0x0;
      (pFVar8->StartedRunning).Ticks = 0;
      *(undefined8 *)&pFVar8->Future = 0;
      *(undefined8 *)&(pFVar8->Future).field_0x8 = 0;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pFVar8->ActionCS,4000);
      if (local_a8 != 0) {
        plVar15 = &local_98;
        if (local_80 != (longlong *)0x0) {
          plVar15 = local_80;
        }
        (**(code **)(*plVar15 + 0x10))();
      }
      if (((pFVar8->_padding_ != 0) && (pFVar8->_padding_ != 0)) &&
         (0 < *(int *)(pFVar8->_padding_ + 8))) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    local_c8.Object = pFVar8;
    pTVar9 = TSharedRef<IAutomationLatentCommand,1>::
             TSharedRef<IAutomationLatentCommand,1><FAutomationSpecBase::FAsyncLatentCommand>
                       (&local_78,&local_c8);
    pFVar10 = ::FString::FString(&local_68,(local_d0->Impl)._File);
    pFVar11 = GetId(this,&local_58);
    pFVar12 = GetDescription(this,&local_48);
    pFVar13 = FSpecIt::FSpecIt(local_c0,pFVar12,pFVar11,pFVar10,(local_d0->Impl)._Line,pTVar9);
    param_1 = local_b8;
  }
  local_b0.Object = pFVar13;
  TSharedRef<FAutomationSpecBase::FSpecIt,1>::
  TSharedRef<FAutomationSpecBase::FSpecIt,1><FAutomationSpecBase::FSpecIt>(&local_e0,&local_b0);
  if ((*(TSharedRef<FAutomationSpecBase::FSpecIt,1> **)(lVar14 + 0x20) <= &local_e0) &&
     (&local_e0 <
      *(TSharedRef<FAutomationSpecBase::FSpecIt,1> **)(lVar14 + 0x20) + *(int *)(lVar14 + 0x2c))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = *(int *)(lVar14 + 0x28);
  if (iVar7 == *(int *)(lVar14 + 0x2c)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)(lVar14 + 0x20),(int *)(lVar14 + 0x2c));
  }
  lVar3 = *(longlong *)(lVar14 + 0x20);
  *(int *)(lVar14 + 0x28) = iVar7 + 1;
  *(FSpecIt **)(lVar3 + (longlong)iVar7 * 0x10) = local_e0.Object;
  *(TReferenceControllerBase<1> **)(lVar3 + 8 + (longlong)iVar7 * 0x10) =
       local_e0.SharedReferenceCount.ReferenceController;
  if (local_e0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e0.SharedReferenceCount.ReferenceController);
  PopDescription(this,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (*(longlong *)param_3 != 0) {
    plVar15 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar15 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  return;
}

