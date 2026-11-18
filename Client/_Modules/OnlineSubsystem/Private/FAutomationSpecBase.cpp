// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 8

// AfterEach @ 14ebb7df0

void __thiscall
FAutomationSpecBase::AfterEach
          (FAutomationSpecBase *this,EAsyncExecution param_1,TFunction<void___cdecl(void)> *param_2)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FAsyncLatentCommand *this_00;
  FAsyncLatentCommand *pFVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  uint uVar11;
  TSharedRef<IAutomationLatentCommand,1> local_78;
  TRawPtrProxy<FAutomationSpecBase::FAsyncLatentCommand> local_68 [2];
  TFunction<void___cdecl(void)> local_58;
  
  iVar6 = (this->DefinitionScopeStack).ArrayNum;
  pFVar7 = (FAsyncLatentCommand *)0x0;
  uVar11 = iVar6 - 1;
  uVar5 = 0;
  if ((int)uVar11 < iVar6) {
    uVar5 = ~uVar11 >> 0x1f;
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
  this_00 = ::operator_new(0xb0);
  if (this_00 != (FAsyncLatentCommand *)0x0) {
    local_58._0_8_ = *(undefined8 *)param_2;
    local_58._40_8_ = 0;
    if (local_58._0_8_ != 0) {
      puVar10 = (undefined8 *)&param_2->field_0x10;
      if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
        puVar10 = *(undefined8 **)&param_2->field_0x28;
      }
      (**(code **)*puVar10)(puVar10,&local_58.field_0x10);
    }
    pFVar7 = FAsyncLatentCommand::FAsyncLatentCommand
                       (this_00,this,param_1,&local_58,&this->DefaultTimeout,false);
    if ((((pFVar7 != (FAsyncLatentCommand *)0x0) && (pFVar7->_padding_ != 0)) &&
        (pFVar7->_padding_ != 0)) && (0 < *(int *)(pFVar7->_padding_ + 8))) {
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
  TSharedRef<IAutomationLatentCommand,1><FAutomationSpecBase::FAsyncLatentCommand>
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
  puVar10 = (undefined8 *)((longlong)iVar6 * 0x10 + *(longlong *)(lVar8 + 0x30));
  *puVar10 = local_78.Object;
  puVar10[1] = local_78.SharedReferenceCount.ReferenceController;
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
  if (*(longlong *)param_2 != 0) {
    plVar9 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar9 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  return;
}

// BeforeEach @ 14ebb8060

void __thiscall
FAutomationSpecBase::BeforeEach
          (FAutomationSpecBase *this,EAsyncExecution param_1,TFunction<void___cdecl(void)> *param_2)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FAsyncLatentCommand *this_00;
  FAsyncLatentCommand *pFVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  uint uVar11;
  TSharedRef<IAutomationLatentCommand,1> local_88;
  TRawPtrProxy<FAutomationSpecBase::FAsyncLatentCommand> local_78 [2];
  TFunction<void___cdecl(void)> local_68;
  
  iVar6 = (this->DefinitionScopeStack).ArrayNum;
  pFVar7 = (FAsyncLatentCommand *)0x0;
  uVar11 = iVar6 - 1;
  uVar5 = 0;
  if ((int)uVar11 < iVar6) {
    uVar5 = ~uVar11 >> 0x1f;
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
  this_00 = ::operator_new(0xb0);
  if (this_00 != (FAsyncLatentCommand *)0x0) {
    local_68._0_8_ = *(undefined8 *)param_2;
    bVar4 = this->bEnableSkipIfError;
    local_68._40_8_ = 0;
    if (local_68._0_8_ != 0) {
      puVar10 = (undefined8 *)&param_2->field_0x10;
      if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
        puVar10 = *(undefined8 **)&param_2->field_0x28;
      }
      (**(code **)*puVar10)(puVar10,&local_68.field_0x10);
    }
    pFVar7 = FAsyncLatentCommand::FAsyncLatentCommand
                       (this_00,this,param_1,&local_68,&this->DefaultTimeout,bVar4);
    if ((((pFVar7 != (FAsyncLatentCommand *)0x0) && (pFVar7->_padding_ != 0)) &&
        (pFVar7->_padding_ != 0)) && (0 < *(int *)(pFVar7->_padding_ + 8))) {
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
  local_78[0].Object = pFVar7;
  TSharedRef<IAutomationLatentCommand,1>::
  TSharedRef<IAutomationLatentCommand,1><FAutomationSpecBase::FAsyncLatentCommand>
            (&local_88,local_78);
  if ((*(TSharedRef<IAutomationLatentCommand,1> **)(lVar8 + 0x10) <= &local_88) &&
     (&local_88 <
      *(TSharedRef<IAutomationLatentCommand,1> **)(lVar8 + 0x10) + *(int *)(lVar8 + 0x1c))) {
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
  iVar6 = *(int *)(lVar8 + 0x18);
  if (iVar6 == *(int *)(lVar8 + 0x1c)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)(lVar8 + 0x10),(int *)(lVar8 + 0x1c));
  }
  *(int *)(lVar8 + 0x18) = iVar6 + 1;
  puVar10 = (undefined8 *)((longlong)iVar6 * 0x10 + *(longlong *)(lVar8 + 0x10));
  *puVar10 = local_88.Object;
  puVar10[1] = local_88.SharedReferenceCount.ReferenceController;
  if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (*(longlong *)param_2 != 0) {
    plVar9 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar9 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  return;
}

// LatentAfterEach @ 14ec0bfb0

void __thiscall
FAutomationSpecBase::LatentAfterEach
          (FAutomationSpecBase *this,
          TFunction<void___cdecl(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_const_&)>
          *param_1)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FUntilDoneLatentCommand *this_00;
  FUntilDoneLatentCommand *pFVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  undefined8 *puVar11;
  TSharedRef<IAutomationLatentCommand,1> local_78;
  TRawPtrProxy<FAutomationSpecBase::FUntilDoneLatentCommand> local_68 [2];
  TFunction<void___cdecl(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_const_&)> local_58
  ;
  
  iVar6 = (this->DefinitionScopeStack).ArrayNum;
  pFVar7 = (FUntilDoneLatentCommand *)0x0;
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
  this_00 = ::operator_new(0x80);
  if (this_00 != (FUntilDoneLatentCommand *)0x0) {
    local_58._0_8_ = *(undefined8 *)param_1;
    local_58._40_8_ = 0;
    if (local_58._0_8_ != 0) {
      puVar11 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar11 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar11)(puVar11,&local_58.field_0x10);
    }
    pFVar7 = FUntilDoneLatentCommand::FUntilDoneLatentCommand
                       (this_00,this,&local_58,&this->DefaultTimeout,false);
    if ((((pFVar7 != (FUntilDoneLatentCommand *)0x0) && (pFVar7->_padding_ != 0)) &&
        (pFVar7->_padding_ != 0)) && (0 < *(int *)(pFVar7->_padding_ + 8))) {
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
  TSharedRef<IAutomationLatentCommand,1><FAutomationSpecBase::FUntilDoneLatentCommand>
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

// LatentAfterEach @ 14ec0c200

void __thiscall
FAutomationSpecBase::LatentAfterEach
          (FAutomationSpecBase *this,EAsyncExecution param_1,
          TFunction<void___cdecl(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_const_&)>
          *param_2)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FAsyncUntilDoneLatentCommand *this_00;
  FAsyncUntilDoneLatentCommand *pFVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  uint uVar11;
  TSharedRef<IAutomationLatentCommand,1> local_78;
  TRawPtrProxy<FAutomationSpecBase::FAsyncUntilDoneLatentCommand> local_68 [2];
  TFunction<void___cdecl(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_const_&)> local_58
  ;
  
  iVar6 = (this->DefinitionScopeStack).ArrayNum;
  pFVar7 = (FAsyncUntilDoneLatentCommand *)0x0;
  uVar11 = iVar6 - 1;
  uVar5 = 0;
  if ((int)uVar11 < iVar6) {
    uVar5 = ~uVar11 >> 0x1f;
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
  this_00 = ::operator_new(0xb0);
  if (this_00 != (FAsyncUntilDoneLatentCommand *)0x0) {
    local_58._0_8_ = *(undefined8 *)param_2;
    local_58._40_8_ = 0;
    if (local_58._0_8_ != 0) {
      puVar10 = (undefined8 *)&param_2->field_0x10;
      if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
        puVar10 = *(undefined8 **)&param_2->field_0x28;
      }
      (**(code **)*puVar10)(puVar10,&local_58.field_0x10);
    }
    pFVar7 = FAsyncUntilDoneLatentCommand::FAsyncUntilDoneLatentCommand
                       (this_00,this,param_1,&local_58,&this->DefaultTimeout,false);
    if ((((pFVar7 != (FAsyncUntilDoneLatentCommand *)0x0) && (pFVar7->_padding_ != 0)) &&
        (pFVar7->_padding_ != 0)) && (0 < *(int *)(pFVar7->_padding_ + 8))) {
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
  TSharedRef<IAutomationLatentCommand,1><FAutomationSpecBase::FAsyncUntilDoneLatentCommand>
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
  puVar10 = (undefined8 *)((longlong)iVar6 * 0x10 + *(longlong *)(lVar8 + 0x30));
  *puVar10 = local_78.Object;
  puVar10[1] = local_78.SharedReferenceCount.ReferenceController;
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
  if (*(longlong *)param_2 != 0) {
    plVar9 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar9 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  return;
}

// LatentBeforeEach @ 14ec0c470

void __thiscall
FAutomationSpecBase::LatentBeforeEach
          (FAutomationSpecBase *this,
          TFunction<void___cdecl(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_const_&)>
          *param_1)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FUntilDoneLatentCommand *this_00;
  FUntilDoneLatentCommand *pFVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  undefined8 *puVar11;
  TSharedRef<IAutomationLatentCommand,1> local_78;
  TRawPtrProxy<FAutomationSpecBase::FUntilDoneLatentCommand> local_68 [2];
  TFunction<void___cdecl(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_const_&)> local_58
  ;
  
  iVar6 = (this->DefinitionScopeStack).ArrayNum;
  pFVar7 = (FUntilDoneLatentCommand *)0x0;
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
  this_00 = ::operator_new(0x80);
  if (this_00 != (FUntilDoneLatentCommand *)0x0) {
    local_58._0_8_ = *(undefined8 *)param_1;
    bVar4 = this->bEnableSkipIfError;
    local_58._40_8_ = 0;
    if (local_58._0_8_ != 0) {
      puVar11 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar11 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar11)(puVar11,&local_58.field_0x10);
    }
    pFVar7 = FUntilDoneLatentCommand::FUntilDoneLatentCommand
                       (this_00,this,&local_58,&this->DefaultTimeout,bVar4);
    if ((((pFVar7 != (FUntilDoneLatentCommand *)0x0) && (pFVar7->_padding_ != 0)) &&
        (pFVar7->_padding_ != 0)) && (0 < *(int *)(pFVar7->_padding_ + 8))) {
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
  TSharedRef<IAutomationLatentCommand,1><FAutomationSpecBase::FUntilDoneLatentCommand>
            (&local_78,local_68);
  if ((*(TSharedRef<IAutomationLatentCommand,1> **)(lVar8 + 0x10) <= &local_78) &&
     (&local_78 <
      *(TSharedRef<IAutomationLatentCommand,1> **)(lVar8 + 0x10) + *(int *)(lVar8 + 0x1c))) {
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
  iVar6 = *(int *)(lVar8 + 0x18);
  if (iVar6 == *(int *)(lVar8 + 0x1c)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)(lVar8 + 0x10),(int *)(lVar8 + 0x1c));
  }
  *(int *)(lVar8 + 0x18) = iVar6 + 1;
  puVar11 = (undefined8 *)((longlong)iVar6 * 0x10 + *(longlong *)(lVar8 + 0x10));
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

// LatentBeforeEach @ 14ec0c700

void __thiscall
FAutomationSpecBase::LatentBeforeEach
          (FAutomationSpecBase *this,EAsyncExecution param_1,
          TFunction<void___cdecl(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_const_&)>
          *param_2)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FAsyncUntilDoneLatentCommand *this_00;
  FAsyncUntilDoneLatentCommand *pFVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  uint uVar11;
  TSharedRef<IAutomationLatentCommand,1> local_88;
  TRawPtrProxy<FAutomationSpecBase::FAsyncUntilDoneLatentCommand> local_78 [2];
  TFunction<void___cdecl(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_const_&)> local_68
  ;
  
  iVar6 = (this->DefinitionScopeStack).ArrayNum;
  pFVar7 = (FAsyncUntilDoneLatentCommand *)0x0;
  uVar11 = iVar6 - 1;
  uVar5 = 0;
  if ((int)uVar11 < iVar6) {
    uVar5 = ~uVar11 >> 0x1f;
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
  this_00 = ::operator_new(0xb0);
  if (this_00 != (FAsyncUntilDoneLatentCommand *)0x0) {
    local_68._0_8_ = *(undefined8 *)param_2;
    bVar4 = this->bEnableSkipIfError;
    local_68._40_8_ = 0;
    if (local_68._0_8_ != 0) {
      puVar10 = (undefined8 *)&param_2->field_0x10;
      if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
        puVar10 = *(undefined8 **)&param_2->field_0x28;
      }
      (**(code **)*puVar10)(puVar10,&local_68.field_0x10);
    }
    pFVar7 = FAsyncUntilDoneLatentCommand::FAsyncUntilDoneLatentCommand
                       (this_00,this,param_1,&local_68,&this->DefaultTimeout,bVar4);
    if ((((pFVar7 != (FAsyncUntilDoneLatentCommand *)0x0) && (pFVar7->_padding_ != 0)) &&
        (pFVar7->_padding_ != 0)) && (0 < *(int *)(pFVar7->_padding_ + 8))) {
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
  local_78[0].Object = pFVar7;
  TSharedRef<IAutomationLatentCommand,1>::
  TSharedRef<IAutomationLatentCommand,1><FAutomationSpecBase::FAsyncUntilDoneLatentCommand>
            (&local_88,local_78);
  if ((*(TSharedRef<IAutomationLatentCommand,1> **)(lVar8 + 0x10) <= &local_88) &&
     (&local_88 <
      *(TSharedRef<IAutomationLatentCommand,1> **)(lVar8 + 0x10) + *(int *)(lVar8 + 0x1c))) {
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
  iVar6 = *(int *)(lVar8 + 0x18);
  if (iVar6 == *(int *)(lVar8 + 0x1c)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)(lVar8 + 0x10),(int *)(lVar8 + 0x1c));
  }
  *(int *)(lVar8 + 0x18) = iVar6 + 1;
  puVar10 = (undefined8 *)((longlong)iVar6 * 0x10 + *(longlong *)(lVar8 + 0x10));
  *puVar10 = local_88.Object;
  puVar10[1] = local_88.SharedReferenceCount.ReferenceController;
  if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (*(longlong *)param_2 != 0) {
    plVar9 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar9 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  return;
}

// LatentIt @ 14ec0c9b0

void __thiscall
FAutomationSpecBase::LatentIt
          (FAutomationSpecBase *this,FString *param_1,
          TFunction<void___cdecl(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_const_&)>
          *param_2,FSourceLocation *param_3)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FSpecIt *this_00;
  FUntilDoneLatentCommand *this_01;
  FUntilDoneLatentCommand *pFVar7;
  TSharedRef<IAutomationLatentCommand,1> *pTVar8;
  FString *pFVar9;
  FString *pFVar10;
  FString *pFVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  undefined8 *puVar15;
  TSharedRef<FAutomationSpecBase::FSpecIt,1> local_e8;
  FSourceLocation *local_d8;
  TRawPtrProxy<FAutomationSpecBase::FUntilDoneLatentCommand> local_d0;
  FString *local_c8;
  TRawPtrProxy<FAutomationSpecBase::FSpecIt> local_c0;
  TFunction<void___cdecl(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_const_&)> local_b8
  ;
  TSharedRef<IAutomationLatentCommand,1> local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  iVar6 = (this->DefinitionScopeStack).ArrayNum;
  pFVar7 = (FUntilDoneLatentCommand *)0x0;
  uVar14 = iVar6 - 1;
  uVar5 = 0;
  if ((int)uVar14 < iVar6) {
    uVar5 = ~uVar14 >> 0x1f;
  }
  local_d8 = param_3;
  local_c8 = param_1;
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
  lVar12 = (longlong)(this->DefinitionScopeStack).ArrayNum;
  pTVar2 = *(TReferenceControllerBase<1> **)(pFVar1 + lVar12 * 0x10 + -8);
  lVar12 = *(longlong *)(pFVar1 + lVar12 * 0x10 + -0x10);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  PushDescription(this,param_1);
  this_00 = ::operator_new(0x48);
  if (this_00 != (FSpecIt *)0x0) {
    this_01 = ::operator_new(0x80);
    if (this_01 != (FUntilDoneLatentCommand *)0x0) {
      local_b8._0_8_ = *(undefined8 *)param_2;
      bVar4 = this->bEnableSkipIfError;
      local_b8._40_8_ = 0;
      if (local_b8._0_8_ != 0) {
        puVar15 = (undefined8 *)&param_2->field_0x10;
        if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
          puVar15 = *(undefined8 **)&param_2->field_0x28;
        }
        (**(code **)*puVar15)(puVar15,&local_b8.field_0x10);
      }
      pFVar7 = FUntilDoneLatentCommand::FUntilDoneLatentCommand
                         (this_01,this,&local_b8,&this->DefaultTimeout,bVar4);
      if ((((pFVar7 != (FUntilDoneLatentCommand *)0x0) && (pFVar7->_padding_ != 0)) &&
          (pFVar7->_padding_ != 0)) && (0 < *(int *)(pFVar7->_padding_ + 8))) {
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
    local_d0.Object = pFVar7;
    pTVar8 = TSharedRef<IAutomationLatentCommand,1>::
             TSharedRef<IAutomationLatentCommand,1><FAutomationSpecBase::FUntilDoneLatentCommand>
                       (&local_88,&local_d0);
    pFVar9 = ::FString::FString(&local_78,(local_d8->Impl)._File);
    pFVar10 = GetId(this,&local_68);
    pFVar11 = GetDescription(this,&local_58);
    pFVar7 = (FUntilDoneLatentCommand *)
             FSpecIt::FSpecIt(this_00,pFVar11,pFVar10,pFVar9,(local_d8->Impl)._Line,pTVar8);
    param_1 = local_c8;
  }
  local_c0.Object = (FSpecIt *)pFVar7;
  TSharedRef<FAutomationSpecBase::FSpecIt,1>::
  TSharedRef<FAutomationSpecBase::FSpecIt,1><FAutomationSpecBase::FSpecIt>(&local_e8,&local_c0);
  if ((*(TSharedRef<FAutomationSpecBase::FSpecIt,1> **)(lVar12 + 0x20) <= &local_e8) &&
     (&local_e8 <
      *(TSharedRef<FAutomationSpecBase::FSpecIt,1> **)(lVar12 + 0x20) + *(int *)(lVar12 + 0x2c))) {
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
  iVar6 = *(int *)(lVar12 + 0x28);
  if (iVar6 == *(int *)(lVar12 + 0x2c)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)(lVar12 + 0x20),(int *)(lVar12 + 0x2c));
  }
  *(int *)(lVar12 + 0x28) = iVar6 + 1;
  puVar15 = (undefined8 *)((longlong)iVar6 * 0x10 + *(longlong *)(lVar12 + 0x20));
  *puVar15 = local_e8.Object;
  puVar15[1] = local_e8.SharedReferenceCount.ReferenceController;
  if (local_e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.SharedReferenceCount.ReferenceController);
  PopDescription(this,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (*(longlong *)param_2 != 0) {
    plVar13 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar13 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  return;
}

// LatentIt @ 14ec0cd10

void __thiscall
FAutomationSpecBase::LatentIt
          (FAutomationSpecBase *this,FString *param_1,EAsyncExecution param_2,
          TFunction<void___cdecl(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_const_&)>
          *param_3,FSourceLocation *param_4)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FSpecIt *this_00;
  FAsyncUntilDoneLatentCommand *this_01;
  FAsyncUntilDoneLatentCommand *pFVar7;
  TSharedRef<IAutomationLatentCommand,1> *pTVar8;
  FString *pFVar9;
  FString *pFVar10;
  FString *pFVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  undefined8 *puVar15;
  TSharedRef<FAutomationSpecBase::FSpecIt,1> local_e0;
  FSourceLocation *local_d0;
  TRawPtrProxy<FAutomationSpecBase::FAsyncUntilDoneLatentCommand> local_c8;
  FString *local_c0;
  TRawPtrProxy<FAutomationSpecBase::FSpecIt> local_b8 [2];
  TFunction<void___cdecl(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_const_&)> local_a8
  ;
  TSharedRef<IAutomationLatentCommand,1> local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  pFVar7 = (FAsyncUntilDoneLatentCommand *)0x0;
  local_d0 = param_4;
  iVar6 = (this->DefinitionScopeStack).ArrayNum;
  uVar14 = iVar6 - 1;
  uVar5 = 0;
  if ((int)uVar14 < iVar6) {
    uVar5 = ~uVar14 >> 0x1f;
  }
  local_c0 = param_1;
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
  lVar12 = (longlong)(this->DefinitionScopeStack).ArrayNum;
  pTVar2 = *(TReferenceControllerBase<1> **)(pFVar1 + lVar12 * 0x10 + -8);
  lVar12 = *(longlong *)(pFVar1 + lVar12 * 0x10 + -0x10);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  PushDescription(this,param_1);
  this_00 = ::operator_new(0x48);
  if (this_00 != (FSpecIt *)0x0) {
    this_01 = ::operator_new(0xb0);
    if (this_01 != (FAsyncUntilDoneLatentCommand *)0x0) {
      local_a8._0_8_ = *(undefined8 *)param_3;
      bVar4 = this->bEnableSkipIfError;
      local_a8._40_8_ = 0;
      if (local_a8._0_8_ != 0) {
        puVar15 = (undefined8 *)&param_3->field_0x10;
        if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
          puVar15 = *(undefined8 **)&param_3->field_0x28;
        }
        (**(code **)*puVar15)(puVar15,&local_a8.field_0x10);
      }
      pFVar7 = FAsyncUntilDoneLatentCommand::FAsyncUntilDoneLatentCommand
                         (this_01,this,param_2,&local_a8,&this->DefaultTimeout,bVar4);
      if ((((pFVar7 != (FAsyncUntilDoneLatentCommand *)0x0) && (pFVar7->_padding_ != 0)) &&
          (pFVar7->_padding_ != 0)) && (0 < *(int *)(pFVar7->_padding_ + 8))) {
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
    local_c8.Object = pFVar7;
    pTVar8 = TSharedRef<IAutomationLatentCommand,1>::
             TSharedRef<IAutomationLatentCommand,1><FAutomationSpecBase::FAsyncUntilDoneLatentCommand>
                       (&local_78,&local_c8);
    pFVar9 = ::FString::FString(&local_68,(local_d0->Impl)._File);
    pFVar10 = GetId(this,&local_58);
    pFVar11 = GetDescription(this,&local_48);
    pFVar7 = (FAsyncUntilDoneLatentCommand *)
             FSpecIt::FSpecIt(this_00,pFVar11,pFVar10,pFVar9,(local_d0->Impl)._Line,pTVar8);
    param_1 = local_c0;
  }
  local_b8[0].Object = (FSpecIt *)pFVar7;
  TSharedRef<FAutomationSpecBase::FSpecIt,1>::
  TSharedRef<FAutomationSpecBase::FSpecIt,1><FAutomationSpecBase::FSpecIt>(&local_e0,local_b8);
  if ((*(TSharedRef<FAutomationSpecBase::FSpecIt,1> **)(lVar12 + 0x20) <= &local_e0) &&
     (&local_e0 <
      *(TSharedRef<FAutomationSpecBase::FSpecIt,1> **)(lVar12 + 0x20) + *(int *)(lVar12 + 0x2c))) {
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
  iVar6 = *(int *)(lVar12 + 0x28);
  if (iVar6 == *(int *)(lVar12 + 0x2c)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)(lVar12 + 0x20),(int *)(lVar12 + 0x2c));
  }
  *(int *)(lVar12 + 0x28) = iVar6 + 1;
  puVar15 = (undefined8 *)((longlong)iVar6 * 0x10 + *(longlong *)(lVar12 + 0x20));
  *puVar15 = local_e0.Object;
  puVar15[1] = local_e0.SharedReferenceCount.ReferenceController;
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
    plVar13 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar13 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  return;
}

