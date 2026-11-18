// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 26

// FInputBindingManager @ 1426fc020

FInputBindingManager * __thiscall
FInputBindingManager::FInputBindingManager(FInputBindingManager *this)

{
  *(undefined8 *)&(this->OnRegisterCommandList).field_0x18 = 2;
  this->_padding_ = (longlong)&___7FInputBindingManager__6B_;
  *(undefined8 *)&this->OnRegisterCommandList = 0;
  *(undefined8 *)&(this->OnRegisterCommandList).field_0x8 = 0;
  *(undefined8 *)&(this->OnRegisterCommandList).field_0x10 = 0;
  *(undefined8 *)&this->OnUnregisterCommandList = 0;
  *(undefined8 *)&(this->OnUnregisterCommandList).field_0x8 = 0;
  *(undefined8 *)&(this->OnUnregisterCommandList).field_0x10 = 0;
  *(undefined8 *)&this->CommandFiltersByContext = 0;
  *(undefined8 *)&(this->CommandFiltersByContext).field_0x8 = 0;
  *(undefined8 *)&(this->CommandFiltersByContext).field_0x20 = 0;
  *(undefined8 *)&(this->OnUnregisterCommandList).field_0x18 = 2;
  *(undefined4 *)&(this->CommandFiltersByContext).field_0x28 = 0;
  *(undefined4 *)&(this->CommandFiltersByContext).field_0x2c = 0x80;
  *(undefined4 *)&(this->CommandFiltersByContext).field_0x34 = 0;
  *(undefined4 *)&(this->CommandFiltersByContext).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CommandFiltersByContext).field_0x40 = 0;
  *(undefined4 *)&(this->CommandFiltersByContext).field_0x48 = 0;
  *(undefined8 *)&this->ContextMap = 0;
  *(undefined8 *)&(this->ContextMap).field_0x8 = 0;
  *(undefined8 *)&(this->ContextMap).field_0x20 = 0;
  *(undefined4 *)&(this->ContextMap).field_0x28 = 0;
  *(undefined4 *)&(this->ContextMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ContextMap).field_0x34 = 0;
  *(undefined4 *)&(this->ContextMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ContextMap).field_0x40 = 0;
  *(undefined4 *)&(this->ContextMap).field_0x48 = 0;
  *(undefined8 *)&this->ParentToChildMap = 0;
  *(undefined8 *)&(this->ParentToChildMap).field_0x8 = 0;
  *(undefined8 *)&(this->ParentToChildMap).field_0x20 = 0;
  *(undefined4 *)&(this->ParentToChildMap).field_0x28 = 0;
  *(undefined4 *)&(this->ParentToChildMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ParentToChildMap).field_0x34 = 0;
  *(undefined4 *)&(this->ParentToChildMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ParentToChildMap).field_0x40 = 0;
  *(undefined4 *)&(this->ParentToChildMap).field_0x48 = 0;
  (this->UserDefinedChords).Object = (FUserDefinedChords *)0x0;
  (this->UserDefinedChords).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ProjectDefinedChords).Object = (FUserDefinedChords *)0x0;
  (this->ProjectDefinedChords).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->OnUserDefinedChordChanged = 0;
  *(undefined8 *)&(this->OnUserDefinedChordChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnUserDefinedChordChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnUserDefinedChordChanged).field_0x18 = 2;
  return this;
}

// ~FInputBindingManager @ 142700c00

void __thiscall FInputBindingManager::~FInputBindingManager(FInputBindingManager *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FInputBindingManager__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnUserDefinedChordChanged).field_0x8,
             *(int *)&(this->OnUserDefinedChordChanged).field_0x10);
  pvVar1 = *(void **)&(this->OnUserDefinedChordChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUserDefinedChordChanged);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ProjectDefinedChords).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->UserDefinedChords).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->ParentToChildMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ParentToChildMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ParentToChildMap);
  *(undefined4 *)&(this->ContextMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ContextMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FInputBindingManager::FContextEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FInputBindingManager::FContextEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FInputBindingManager::FContextEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ContextMap);
  *(undefined4 *)&(this->CommandFiltersByContext).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CommandFiltersByContext).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FInputBindingManager::FCommandFilterForContext>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FInputBindingManager::FCommandFilterForContext>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FInputBindingManager::FCommandFilterForContext>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CommandFiltersByContext);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnUnregisterCommandList).field_0x8,
             *(int *)&(this->OnUnregisterCommandList).field_0x10);
  pvVar1 = *(void **)&(this->OnUnregisterCommandList).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUnregisterCommandList);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnRegisterCommandList).field_0x8,
             *(int *)&(this->OnRegisterCommandList).field_0x10);
  pvVar1 = *(void **)&(this->OnRegisterCommandList).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRegisterCommandList);
  return;
}

// AddCommandFilter @ 14270a9e0

void __thiscall
FInputBindingManager::AddCommandFilter
          (FInputBindingManager *this,FName param_1,FName param_2,FName param_3,
          ECommandFilterType param_4)

{
  FName FVar1;
  uint uVar2;
  FCommandFilterForContext *pFVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> *this_00;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  if (param_4 == DenyList) {
    uVar2 = ::GetTypeHash(param_2.ComparisonIndex.Value);
    pFVar3 = TMapBase<FName,FInputBindingManager::FCommandFilterForContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FCommandFilterForContext,0>_>
             ::FindOrAddImpl<FName_const_&>
                       ((TMapBase<FName,FInputBindingManager::FCommandFilterForContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FCommandFilterForContext,0>_>
                         *)&this->CommandFiltersByContext,uVar2 + param_2.Number,&local_res18);
  }
  else {
    if (param_4 != AllowList) {
      return;
    }
    uVar2 = ::GetTypeHash(param_2.ComparisonIndex.Value);
    pFVar3 = TMapBase<FName,FInputBindingManager::FCommandFilterForContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FCommandFilterForContext,0>_>
             ::FindOrAddImpl<FName_const_&>
                       ((TMapBase<FName,FInputBindingManager::FCommandFilterForContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FCommandFilterForContext,0>_>
                         *)&this->CommandFiltersByContext,uVar2 + param_2.Number,&local_res18);
    pFVar3 = (FCommandFilterForContext *)&pFVar3->CommandAllowList;
  }
  FVar1 = local_res20;
  uVar2 = ::GetTypeHash(local_res20.ComparisonIndex.Value);
  this_00 = &TMapBase<FName,FInputBindingManager::FCommandFilterOwners,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FCommandFilterOwners,0>_>
             ::FindOrAddImpl<FName_const_&>
                       ((TMapBase<FName,FInputBindingManager::FCommandFilterOwners,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FCommandFilterOwners,0>_>
                         *)pFVar3,uVar2 + FVar1.Number,&local_res20)->OwnerNames;
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>(this_00,&local_res10);
  return;
}

// CheckForDuplicateDefaultChords @ 142711b80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FInputBindingManager::CheckForDuplicateDefaultChords
          (FInputBindingManager *this,FBindingContext *param_1,TSharedPtr<FUICommandInfo,1> *param_2
          )

{
  FUICommandInfo *pFVar1;
  FUICommandInfo *pFVar2;
  code *pcVar3;
  bool bVar4;
  FText *this_00;
  FKey *this_01;
  longlong lVar5;
  uint uVar6;
  TSharedPtr<FUICommandInfo,1> local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FText local_38;
  
  uVar6 = 0;
  do {
    if ((param_2->Object == (FUICommandInfo *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar1 = param_2->Object;
    if (((pFVar1->DefaultChords).ArrayNum <= (int)uVar6) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar5 = (longlong)(int)uVar6 * 0x20;
    this_01 = (FKey *)((pFVar1->DefaultChords).AllocatorInstance.Data + lVar5);
    bVar4 = FKey::IsValid(this_01);
    if ((bVar4) && (bVar4 = FKey::IsModifierKey(this_01), !bVar4)) {
      if ((param_2->Object == (FUICommandInfo *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = param_2->Object;
      if (((pFVar1->DefaultChords).ArrayNum <= (int)uVar6) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      GetCommandInfoFromInputChord
                (this,&local_88,param_1->ContextName,
                 (FInputChord *)((pFVar1->DefaultChords).AllocatorInstance.Data + lVar5),true);
      pFVar1 = local_88.Object;
      if (local_88.Object != (FUICommandInfo *)0x0) {
        if ((param_2->Object == (FUICommandInfo *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = param_2->Object;
        if ((pFVar1 == (FUICommandInfo *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((pFVar1->CommandName != pFVar2->CommandName) && (2 < (byte)LogSlate._0_1_)) {
          if ((param_2->Object == (FUICommandInfo *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = param_2->Object;
          if (((pFVar2->DefaultChords).ArrayNum <= (int)uVar6) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          this_00 = FInputChord::GetInputText
                              ((FInputChord *)
                               ((pFVar2->DefaultChords).AllocatorInstance.Data + lVar5),&local_38,
                               true);
          FText::ToString(this_00);
          if ((pFVar1 == (FUICommandInfo *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          ::FName::ToString(&pFVar1->CommandName,&local_48);
          if ((pFVar1 == (FUICommandInfo *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          ::FName::ToString(&pFVar1->BindingContext,&local_58);
          if ((param_2->Object == (FUICommandInfo *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          ::FName::ToString(&param_2->Object->CommandName,&local_68);
          if ((param_2->Object == (FUICommandInfo *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          ::FName::ToString(&param_2->Object->BindingContext,&local_78);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          if (local_38.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.SharedReferenceCount.ReferenceController);
    }
    uVar6 = uVar6 + 1;
    if (1 < uVar6) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_2->SharedReferenceCount).ReferenceController);
      return;
    }
  } while( true );
}

// CommandPassesFilter @ 142714ed0

bool __thiscall
FInputBindingManager::CommandPassesFilter(FInputBindingManager *this,FName param_1,FName param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  FCommandFilterForContext *pFVar5;
  undefined1 *puVar6;
  
  pFVar5 = TMapBase<FName,FInputBindingManager::FCommandFilterForContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FCommandFilterForContext,0>_>
           ::Find((TMapBase<FName,FInputBindingManager::FCommandFilterForContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FCommandFilterForContext,0>_>
                   *)&this->CommandFiltersByContext,param_1);
  if (pFVar5 != (FCommandFilterForContext *)0x0) {
    uVar2 = ::GetTypeHash(param_2.ComparisonIndex.Value);
    if (*(int *)&(pFVar5->CommandDenyList).field_0x8 !=
        *(int *)&(pFVar5->CommandDenyList).field_0x34) {
      puVar6 = *(undefined1 **)&(pFVar5->CommandDenyList).field_0x40;
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &(pFVar5->CommandDenyList).field_0x38;
      }
      iVar3 = *(int *)(puVar6 + (ulonglong)
                                (*(int *)&(pFVar5->CommandDenyList).field_0x48 - 1U &
                                uVar2 + param_2.Number) * 4);
      if (iVar3 != -1) {
        do {
          if (*(FName *)((longlong)iVar3 * 0x20 + *(longlong *)&pFVar5->CommandDenyList) == param_2)
          {
            return false;
          }
          iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *(longlong *)&pFVar5->CommandDenyList);
        } while (iVar3 != -1);
      }
    }
    uVar2 = ::GetTypeHash(param_2.ComparisonIndex.Value);
    iVar3 = *(int *)&(pFVar5->CommandAllowList).field_0x8;
    iVar1 = *(int *)&(pFVar5->CommandAllowList).field_0x34;
    if (iVar3 != iVar1) {
      puVar6 = *(undefined1 **)&(pFVar5->CommandAllowList).field_0x40;
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &(pFVar5->CommandAllowList).field_0x38;
      }
      iVar4 = *(int *)(puVar6 + (ulonglong)
                                (*(int *)&(pFVar5->CommandAllowList).field_0x48 - 1U &
                                param_2.Number + uVar2) * 4);
      if (iVar4 != -1) {
        do {
          if (*(FName *)((longlong)iVar4 * 0x20 + *(longlong *)&pFVar5->CommandAllowList) == param_2
             ) {
            return true;
          }
          iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *(longlong *)&pFVar5->CommandAllowList);
        } while (iVar4 != -1);
      }
      return iVar3 - iVar1 < 1;
    }
  }
  return true;
}

// CreateInputCommand @ 1427295c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FInputBindingManager::CreateInputCommand
          (FInputBindingManager *this,TSharedRef<FBindingContext,1> *param_1,
          TSharedRef<FUICommandInfo,1> *param_2)

{
  atomic<int> *paVar1;
  uint uVar2;
  FUICommandInfo *pFVar3;
  FName FVar4;
  longlong *plVar5;
  ForElementType<FSetElementId> FVar6;
  code *pcVar7;
  undefined4 uVar8;
  longlong lVar9;
  TSharedPtr<FUserDefinedChords,1> *this_00;
  bool bVar10;
  uint uVar11;
  FContextEntry *this_01;
  TTuple<FName,FInputBindingManager::FContextEntry> *pTVar12;
  TTuple<FName,TSharedPtr<FUICommandInfo,1>_> *pTVar13;
  FName FVar14;
  TTuple<FInputChord,FName> *pTVar15;
  FInputChord *pFVar16;
  FInputChord *pFVar17;
  undefined1 *puVar18;
  FSharedReferencer<1> FVar19;
  FName *pFVar20;
  FScriptContainerElement *pFVar21;
  longlong *plVar22;
  ForElementType<FSetElementId> FVar23;
  uint uVar24;
  FKey *pFVar25;
  FScriptContainerElement *pFVar26;
  FNameEntryId FVar27;
  TSharedRef<FUICommandInfo,1> *pTVar28;
  FName FVar29;
  int iVar30;
  undefined1 *puVar31;
  TReferenceControllerBase<1> *pTVar32;
  longlong lVar33;
  TSet<TTuple<FInputChord,FName>,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>,FDefaultSetAllocator>
  *this_02;
  longlong lVar34;
  FName FVar35;
  FLLMScope local_res8 [2];
  uint local_res10;
  TSharedRef<FUICommandInfo,1> *local_res18;
  FInputChord local_1a8;
  FInputChord *local_188;
  FName local_180;
  longlong local_178;
  FContextEntry *local_170;
  TReferenceControllerBase<1> *local_168;
  FName local_160;
  longlong local_158;
  longlong local_150;
  FBindingContext *local_148;
  FSharedReferencer<1> local_140;
  undefined1 local_138 [12];
  FName local_12c;
  FName local_124;
  FName local_118;
  TRawPtrProxy<FInputChord> local_110;
  TRawPtrProxy<FInputChord> local_108;
  TRawPtrProxy<FInputChord> local_100;
  FName local_f8;
  TSharedPtr<FUserDefinedChords,1> *local_f0;
  FMemScope local_e8;
  FUICommandInfo *local_e0;
  TReferenceControllerBase<1> *local_d8;
  TSharedRef<FInputChord,1> local_d0;
  TSharedRef<FInputChord,1> local_c0;
  TSharedPtr<FUICommandInfo,1> local_b0;
  TSharedRef<FUICommandInfo,1> *local_a0;
  TSharedRef<FBindingContext,1> *local_98;
  FName *local_90;
  FUICommandInfo **local_88;
  undefined8 local_80;
  FName *local_78;
  undefined8 local_70;
  TReferenceControllerBase<1> *pTStack_68;
  undefined8 local_60;
  TReferenceControllerBase<1> *pTStack_58;
  
  local_res18 = param_2;
  if ((param_2->Object->BindingContext != param_1->Object->ContextName) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCommandInfo->BindingContext == InBindingContext->GetContextName()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Commands\\InputBindingManager.cpp"
                          ,0x1ae,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((param_2->Object->CommandName == (FName)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCommandInfo->CommandName != NAME_None",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Commands\\InputBindingManager.cpp"
                          ,0x1b1,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_138._4_4_ = LLMTagDeclaration_UI_Slate.UniqueName.ComparisonIndex.Value;
  local_138._8_4_ = LLMTagDeclaration_UI_Slate.UniqueName.Number;
  FMemScope::FMemScope(&local_e8,(FName *)(local_138 + 4),true);
  pFVar3 = param_2->Object;
  puVar31 = (undefined1 *)0x0;
  if (((pFVar3->ActiveChords).ArrayNum < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar25 = *(FKey **)(pFVar3->ActiveChords).AllocatorInstance.Data;
  bVar10 = FKey::IsValid(pFVar25);
  if (((bVar10) && (bVar10 = FKey::IsModifierKey(pFVar25), !bVar10)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!InCommandInfo->ActiveChords[i]->IsValidChord()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Commands\\InputBindingManager.cpp"
                          ,0x1b8,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar3 = param_2->Object;
  if (((pFVar3->ActiveChords).ArrayNum < 2) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar25 = *(FKey **)((pFVar3->ActiveChords).AllocatorInstance.Data + 0x10);
  bVar10 = FKey::IsValid(pFVar25);
  if (((bVar10) && (bVar10 = FKey::IsModifierKey(pFVar25), !bVar10)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!InCommandInfo->ActiveChords[i]->IsValidChord()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Commands\\InputBindingManager.cpp"
                          ,0x1b8,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar35 = param_1->Object->ContextName;
  local_160 = FVar35;
  uVar11 = ::GetTypeHash(FVar35.ComparisonIndex.Value);
  this_01 = TMapBase<FName,FInputBindingManager::FContextEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FContextEntry,0>_>
            ::FindOrAddImpl<FName_const_&>
                      ((TMapBase<FName,FInputBindingManager::FContextEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FContextEntry,0>_>
                        *)&this->ContextMap,FVar35.Number + uVar11,&local_160);
  FVar35 = param_1->Object->ContextParent;
  local_170 = this_01;
  if (FVar35 != (FName)0x0) {
    pTVar12 = TSet<TTuple<FName,FInputBindingManager::FContextEntry>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FContextEntry,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,FInputBindingManager::FContextEntry>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FContextEntry,0>,FDefaultSetAllocator>
                      *)&this->ContextMap,FVar35);
    puVar18 = &pTVar12->field_0x8;
    if (pTVar12 == (TTuple<FName,FInputBindingManager::FContextEntry> *)0x0) {
      puVar18 = puVar31;
    }
    if ((puVar18 == (undefined1 *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InBindingContext->GetContextParent() == NAME_None || ContextMap.Find( InBindingContext->GetContextParent() ) != 0"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Commands\\InputBindingManager.cpp"
                            ,0x1c0,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if ((this_01->BindingContext).Object == (FBindingContext *)0x0) {
    local_140.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
    local_148 = param_1->Object;
    if (local_140.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_140.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_140.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&this_01->BindingContext != (TSharedPtr<FBindingContext,1> *)&local_148) {
      (this_01->BindingContext).Object = local_148;
      local_148 = (FBindingContext *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this_01->BindingContext).SharedReferenceCount,&local_140);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_140.ReferenceController);
  }
  FVar35 = param_1->Object->ContextParent;
  if (FVar35 != (FName)0x0) {
    if ((param_1->Object->ContextName == FVar35) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InBindingContext->GetContextName() != InBindingContext->GetContextParent()"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Commands\\InputBindingManager.cpp"
                            ,0x1cb,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_12c = param_1->Object->ContextName;
    local_124 = param_1->Object->ContextParent;
    TMultiMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,1>_>::
    EmplaceUnique<FName,FName>(&this->ParentToChildMap,&local_124,&local_12c);
  }
  local_b0.Object = param_2->Object;
  local_b0.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  if (local_b0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  CheckForDuplicateDefaultChords(this,param_1->Object,&local_b0);
  pTVar13 = TSet<TTuple<FName,TSharedPtr<FUICommandInfo,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FUICommandInfo,1>,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,TSharedPtr<FUICommandInfo,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FUICommandInfo,1>,0>,FDefaultSetAllocator>
                    *)this_01,param_2->Object->CommandName);
  if (pTVar13 == (TTuple<FName,TSharedPtr<FUICommandInfo,1>_> *)0x0) {
    local_178 = 0;
    local_168 = (TReferenceControllerBase<1> *)0x0;
    local_158 = 0;
  }
  else {
    pTVar32 = *(TReferenceControllerBase<1> **)&pTVar13->field_0x10;
    lVar33 = *(longlong *)&pTVar13->field_0x8;
    if (pTVar32 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar32->SharedReferenceCount = (atomic<int>)((int)pTVar32->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_178 = lVar33;
    local_168 = pTVar32;
    local_158 = lVar33;
    if (lVar33 != 0) {
      local_a0 = param_2;
      local_98 = param_1;
      `FInputBindingManager::CreateInputCommand'::__l2::<lambda_1>::operator()(&local_a0);
      local_178 = lVar33;
      local_168 = pTVar32;
    }
  }
  local_e0 = param_2->Object;
  local_d8 = (param_2->SharedReferenceCount).ReferenceController;
  if (local_d8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_d8->SharedReferenceCount = (atomic<int>)((int)local_d8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_90 = &param_2->Object->CommandName;
  local_88 = &local_e0;
  TSet<TTuple<FName,TSharedPtr<FUICommandInfo,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FUICommandInfo,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,TSharedPtr<FUICommandInfo,1>_&&>_>
            ((TSet<TTuple<FName,TSharedPtr<FUICommandInfo,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FUICommandInfo,1>,0>,FDefaultSetAllocator>
              *)this_01,
             (TPairInitializer<FName_const_&,TSharedPtr<FUICommandInfo,1>_&&> *)&stack0x00000020,
             (bool *)&local_90);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_d8);
  local_f0 = &this->UserDefinedChords;
  local_res10 = 0;
  pTVar28 = local_res18;
  do {
    this_00 = local_f0;
    FVar29 = local_160;
    FVar35.ComparisonIndex.Value = 0;
    FVar35.Number = 0;
    uVar11 = (uint)puVar31;
    local_1a8.Key.KeyName = EKeys::Invalid.KeyName;
    local_1a8.Key.KeyDetails.Object = EKeys::Invalid.KeyDetails.Object;
    local_1a8.Key.KeyDetails.SharedReferenceCount.ReferenceController =
         EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController;
    if (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1a8.bCmd = 0;
    local_1a8.bAlt = 0;
    local_1a8.bCtrl = 0;
    local_1a8.bShift = 0;
    FVar4 = pTVar28->Object->CommandName;
    if (local_f0->Object == (FUserDefinedChords *)0x0) {
      FVar14 = (FName)::operator_new(0x10);
      local_118 = FVar35;
      if (FVar14 != (FName)0x0) {
        *(longlong *)FVar14 = 0;
        *(longlong *)((longlong)FVar14 + 8) = 0;
        local_118 = FVar14;
      }
      TSharedPtr<FUserDefinedChords,1>::operator=<FUserDefinedChords>
                (this_00,(TRawPtrProxy<FUserDefinedChords> *)&local_118);
      if ((this_00->Object == (FUserDefinedChords *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FUserDefinedChords::LoadChords(this_00->Object);
      if ((this_00->Object == (FUserDefinedChords *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    bVar10 = FUserDefinedChords::GetUserDefinedChord
                       (this_00->Object,FVar29,FVar4,(EMultipleKeyBindingIndex)puVar31,&local_1a8);
    uVar8 = local_1a8._24_4_;
    if (bVar10) {
      local_180.ComparisonIndex.Value = 0;
      local_180.Number = 0;
      FVar29 = FVar35;
      do {
        if (local_180 != (FName)0x0) goto LAB_142729e45;
        FVar27 = FVar29.ComparisonIndex.Value;
        if (((this_01->ChordToCommandInfoMaps).ArrayNum <= (int)FVar27.Value) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar26 = (this_01->ChordToCommandInfoMaps).AllocatorInstance.Data +
                  (longlong)(int)FVar27.Value * 0x50;
        uVar24 = ::GetTypeHash(local_1a8.Key.KeyName.ComparisonIndex);
        local_180 = FVar35;
        if (*(int *)(pFVar26 + 8) != *(int *)(pFVar26 + 0x34)) {
          pFVar21 = pFVar26 + 0x38;
          if (*(FScriptContainerElement **)(pFVar26 + 0x40) != (FScriptContainerElement *)0x0) {
            pFVar21 = *(FScriptContainerElement **)(pFVar26 + 0x40);
          }
          uVar24 = *(uint *)(pFVar21 +
                            (ulonglong)
                            (*(int *)(pFVar26 + 0x48) - 1U &
                            (uVar24 + local_1a8.Key.KeyName.Number ^ uVar8 & 0xf)) * 4);
          if (uVar24 != 0xffffffff) {
            do {
              pFVar20 = (FName *)((longlong)(int)uVar24 * 0x30 + *(longlong *)pFVar26);
              if ((((*pFVar20 == local_1a8.Key.KeyName) &&
                   (uVar2 = pFVar20[3].ComparisonIndex.Value, ((ZPULL(uVar8,0,1) ^ uVar2) & 1) == 0)
                   ) && (((uVar8 ^ uVar2) & 2) == 0)) &&
                 ((((uVar8 ^ uVar2) & 4) == 0 && (((uVar8 ^ uVar2) & 8) == 0)))) {
                if ((uVar24 != 0xffffffff) && (pFVar20 != (FName *)0x0)) {
                  local_180 = pFVar20[4];
                }
                break;
              }
              uVar24 = pFVar20[5].ComparisonIndex.Value;
            } while (uVar24 != 0xffffffff);
          }
        }
        FVar29.ComparisonIndex.Value = FVar27.Value + 1;
        FVar29.Number = 0;
      } while (FVar29.ComparisonIndex.Value < 2);
      if (local_180 != (FName)0x0) {
LAB_142729e45:
        pTVar13 = TSet<TTuple<FName,TSharedPtr<FUICommandInfo,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FUICommandInfo,1>,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FName,TSharedPtr<FUICommandInfo,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FUICommandInfo,1>,0>,FDefaultSetAllocator>
                          *)this_01,local_180);
        if (pTVar13 == (TTuple<FName,TSharedPtr<FUICommandInfo,1>_> *)0x0) {
          pTVar32 = (TReferenceControllerBase<1> *)0x0;
LAB_142729e7f:
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          if (bVar10) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        else {
          pTVar32 = *(TReferenceControllerBase<1> **)&pTVar13->field_0x10;
          FVar35.ComparisonIndex.Value = *(uint *)&pTVar13->field_0x8;
          FVar35.Number = *(uint *)&pTVar13->field_0xc;
          if (pTVar32 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar32->SharedReferenceCount = (atomic<int>)((int)pTVar32->SharedReferenceCount + 1);
            UNLOCK();
          }
          if (FVar35 == (FName)0x0) goto LAB_142729e7f;
        }
        if ((*(int *)((longlong)FVar35 + 8) <= (int)uVar11) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar34 = (longlong)(int)uVar11;
        lVar33 = lVar34 * 0x10;
        plVar5 = *(longlong **)(lVar33 + *(longlong *)FVar35);
        local_150 = lVar33;
        if ((*(int *)((longlong)FVar35 + 0x38) <= (int)local_res10) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar9 = local_178;
        plVar22 = (longlong *)(lVar34 * 0x20 + *(longlong *)((longlong)FVar35 + 0x30));
        if (*plVar5 == *plVar22) {
          uVar11 = *(uint *)(plVar5 + 3);
          uVar24 = *(uint *)(plVar22 + 3);
          if ((((((uVar11 ^ uVar24) & 1) != 0) || (((uVar11 ^ uVar24) & 2) != 0)) ||
              (((uVar11 ^ uVar24) & 4) != 0)) || (((uVar11 ^ uVar24) & 8) != 0)) goto LAB_142729f7a;
        }
        else {
LAB_142729f7a:
          if (1 < (byte)LogSlate._0_1_) {
            if (local_178 != 0) {
              if ((local_158 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar10)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              FText::ToString((FText *)(lVar9 + 0x10));
            }
            FText::ToString((FText *)((longlong)FVar35 + 0x10));
            FText::ToString(&local_res18->Object->Label);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
            lVar33 = local_150;
          }
        }
        uVar11 = local_res10;
        if (((local_170->ChordToCommandInfoMaps).ArrayNum <= (int)local_res10) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        this_02 = (TSet<TTuple<FInputChord,FName>,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>,FDefaultSetAllocator>
                   *)((local_170->ChordToCommandInfoMaps).AllocatorInstance.Data + lVar34 * 0x50);
        if ((*(int *)((longlong)FVar35 + 8) <= (int)uVar11) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        plVar5 = *(longlong **)(lVar33 + *(longlong *)FVar35);
        if (*(int *)&(this_02->Elements).field_0x8 != *(int *)&(this_02->Elements).field_0x34) {
          lVar33 = *plVar5;
          uVar11 = ::GetTypeHash((FNameEntryId)(uint)lVar33);
          uVar24 = *(uint *)(plVar5 + 3);
          FVar6 = (this_02->Hash).SecondaryData;
          FVar23 = (ForElementType<FSetElementId>)&this_02->Hash;
          if (FVar6 != (ForElementType<FSetElementId>)0x0) {
            FVar23 = FVar6;
          }
          iVar30 = *(int *)((longlong)FVar23 +
                           ((longlong)this_02->HashSize - 1U &
                           (longlong)(int)(uVar24 & 0xf ^ uVar11 + (int)((ulonglong)lVar33 >> 0x20))
                           ) * 4);
          uVar11 = local_res10;
          if (iVar30 != -1) {
            lVar33 = *(longlong *)&this_02->Elements;
            do {
              lVar34 = (longlong)iVar30;
              if ((((*(longlong *)(lVar33 + lVar34 * 0x30) == *plVar5) &&
                   (uVar2 = *(uint *)(lVar33 + 0x18 + lVar34 * 0x30), ((uVar24 ^ uVar2) & 1) == 0))
                  && (((uVar24 ^ uVar2) & 2) == 0)) &&
                 ((((uVar24 ^ uVar2) & 4) == 0 && (((uVar24 ^ uVar2) & 8) == 0)))) {
                TSet<TTuple<FInputChord,FName>,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>,FDefaultSetAllocator>
                ::RemoveByIndex(this_02,iVar30);
                uVar11 = local_res10;
                break;
              }
              iVar30 = *(int *)(lVar33 + 0x28 + lVar34 * 0x30);
            } while (iVar30 != -1);
          }
        }
        local_108.Object = ::operator_new(0x20);
        if (local_108.Object != (FInputChord *)0x0) {
          ((local_108.Object)->Key).KeyName = EKeys::Invalid.KeyName;
          ((local_108.Object)->Key).KeyDetails.Object = EKeys::Invalid.KeyDetails.Object;
          FVar19 = EKeys::Invalid.KeyDetails.SharedReferenceCount;
          ((local_108.Object)->Key).KeyDetails.SharedReferenceCount.ReferenceController =
               EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController;
          if (FVar19.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            paVar1 = &(FVar19.ReferenceController)->SharedReferenceCount;
            *paVar1 = (atomic<int>)((int)*paVar1 + 1);
            UNLOCK();
          }
          (local_108.Object)->bShift = 0;
          (local_108.Object)->bCmd = 0;
          (local_108.Object)->bAlt = 0;
          (local_108.Object)->bCtrl = 0;
        }
        if ((*(int *)((longlong)FVar35 + 8) <= (int)uVar11) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        TSharedRef<FInputChord,1>::operator=<FInputChord>
                  ((TSharedRef<FInputChord,1> *)(local_150 + *(longlong *)FVar35),&local_108);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar32)
        ;
        this_01 = local_170;
        uVar11 = local_res10;
      }
      pFVar17 = (FInputChord *)0x0;
      pFVar16 = ::operator_new(0x20);
      if (pFVar16 != (FInputChord *)0x0) {
        (pFVar16->Key).KeyName = local_1a8.Key.KeyName;
        (pFVar16->Key).KeyDetails.Object = local_1a8.Key.KeyDetails.Object;
        (pFVar16->Key).KeyDetails.SharedReferenceCount.ReferenceController =
             local_1a8.Key.KeyDetails.SharedReferenceCount.ReferenceController;
        if (local_1a8.Key.KeyDetails.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_1a8.Key.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
               = (atomic<int>)
                 ((int)(local_1a8.Key.KeyDetails.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar16->bShift = 0;
        pFVar16->bCmd = 0;
        pFVar16->bAlt = 0;
        pFVar16->bCtrl = 0;
        *(uint *)&pFVar16->field_0x18 = *(uint *)&pFVar16->field_0x18 | uVar8 & 0xf;
        pFVar17 = pFVar16;
      }
      local_100.Object = pFVar17;
      TSharedRef<FInputChord,1>::TSharedRef<FInputChord,1><FInputChord>(&local_c0,&local_100);
      pTVar28 = local_res18;
      pFVar3 = local_res18->Object;
      if (((pFVar3->ActiveChords).ArrayNum <= (int)uVar11) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar26 = (pFVar3->ActiveChords).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x10;
      if (local_c0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_60 = *(undefined8 *)pFVar26;
      pTStack_58 = *(TReferenceControllerBase<1> **)(pFVar26 + 8);
      *(FInputChord **)pFVar26 = local_c0.Object;
      *(TReferenceControllerBase<1> **)(pFVar26 + 8) =
           local_c0.SharedReferenceCount.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_58);
      FVar19.ReferenceController = local_c0.SharedReferenceCount.ReferenceController;
LAB_14272a2fb:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar19.ReferenceController);
    }
    else {
      pFVar3 = pTVar28->Object;
      if (((pFVar3->DefaultChords).ArrayNum <= (int)uVar11) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar33 = (longlong)(int)uVar11;
      lVar34 = lVar33 * 0x20;
      pFVar25 = (FKey *)((pFVar3->DefaultChords).AllocatorInstance.Data + lVar34);
      bVar10 = FKey::IsValid(pFVar25);
      if ((bVar10) && (bVar10 = FKey::IsModifierKey(pFVar25), !bVar10)) {
        uVar24 = 0;
        local_188 = (FInputChord *)0x0;
        do {
          if (local_188 != (FInputChord *)0x0) goto LAB_14272a300;
          if (((this_01->ChordToCommandInfoMaps).ArrayNum <= (int)uVar24) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar3 = pTVar28->Object;
          pFVar26 = (this_01->ChordToCommandInfoMaps).AllocatorInstance.Data;
          if (((pFVar3->DefaultChords).ArrayNum <= (int)uVar11) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pTVar15 = TSet<TTuple<FInputChord,FName>,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<FInputChord,FName>,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>,FDefaultSetAllocator>
                            *)(pFVar26 + (longlong)(int)uVar24 * 0x50),
                           (FInputChord *)((pFVar3->DefaultChords).AllocatorInstance.Data + lVar34))
          ;
          pTVar28 = local_res18;
          pFVar17 = (FInputChord *)0x0;
          local_188 = pFVar17;
          if (pTVar15 != (TTuple<FInputChord,FName> *)0x0) {
            local_188 = *(FInputChord **)&pTVar15->field_0x20;
          }
          uVar24 = uVar24 + 1;
        } while (uVar24 < 2);
        if (local_188 == (FInputChord *)0x0) {
          pFVar16 = ::operator_new(0x20);
          if (pFVar16 != (FInputChord *)0x0) {
            pFVar3 = pTVar28->Object;
            if (((pFVar3->DefaultChords).ArrayNum <= (int)uVar11) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar20 = (FName *)((pFVar3->DefaultChords).AllocatorInstance.Data + lVar34);
            (pFVar16->Key).KeyName = *pFVar20;
            (pFVar16->Key).KeyDetails.Object = (FKeyDetails *)pFVar20[1];
            FVar35 = pFVar20[2];
            (pFVar16->Key).KeyDetails.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)FVar35;
            if (FVar35 != (FName)0x0) {
              LOCK();
              *(int *)((longlong)FVar35 + 8) = *(int *)((longlong)FVar35 + 8) + 1;
              UNLOCK();
            }
            uVar24 = (pFVar16->bShift ^ pFVar20[3].ComparisonIndex.Value) & 1 ^
                     *(uint *)&pFVar16->field_0x18;
            *(uint *)&pFVar16->field_0x18 = uVar24;
            uVar24 = (uVar24 ^ pFVar20[3].ComparisonIndex.Value) & 2 ^ uVar24;
            *(uint *)&pFVar16->field_0x18 = uVar24;
            uVar24 = (uVar24 ^ pFVar20[3].ComparisonIndex.Value) & 4 ^ uVar24;
            *(uint *)&pFVar16->field_0x18 = uVar24;
            *(uint *)&pFVar16->field_0x18 = (uVar24 ^ pFVar20[3].ComparisonIndex.Value) & 8 ^ uVar24
            ;
            pFVar17 = pFVar16;
          }
          local_110.Object = pFVar17;
          TSharedRef<FInputChord,1>::TSharedRef<FInputChord,1><FInputChord>(&local_d0,&local_110);
          pFVar3 = pTVar28->Object;
          if (((pFVar3->ActiveChords).ArrayNum <= (int)uVar11) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar26 = (pFVar3->ActiveChords).AllocatorInstance.Data;
          if (local_d0.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          local_70 = *(undefined8 *)(pFVar26 + lVar33 * 0x10);
          pTStack_68 = *(TReferenceControllerBase<1> **)(pFVar26 + lVar33 * 0x10 + 8);
          *(FInputChord **)(pFVar26 + lVar33 * 0x10) = local_d0.Object;
          *(TReferenceControllerBase<1> **)(pFVar26 + lVar33 * 0x10 + 8) =
               local_d0.SharedReferenceCount.ReferenceController;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_68);
          FVar19.ReferenceController = local_d0.SharedReferenceCount.ReferenceController;
          goto LAB_14272a2fb;
        }
      }
    }
LAB_14272a300:
    pFVar3 = pTVar28->Object;
    if (((pFVar3->ActiveChords).ArrayNum <= (int)uVar11) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar25 = *(FKey **)((pFVar3->ActiveChords).AllocatorInstance.Data +
                        (longlong)(int)uVar11 * 0x10);
    bVar10 = FKey::IsValid(pFVar25);
    if ((bVar10) && (bVar10 = FKey::IsModifierKey(pFVar25), !bVar10)) {
      if (((this_01->ChordToCommandInfoMaps).ArrayNum <= (int)uVar11) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar3 = pTVar28->Object;
      pFVar26 = (this_01->ChordToCommandInfoMaps).AllocatorInstance.Data;
      local_f8 = pFVar3->CommandName;
      if (((pFVar3->ActiveChords).ArrayNum <= (int)(uVar11 & 0xff)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar21 = (pFVar3->ActiveChords).AllocatorInstance.Data;
      pTVar32 = *(TReferenceControllerBase<1> **)(pFVar21 + (ulonglong)(uVar11 & 0xff) * 0x10 + 8);
      local_80 = *(undefined8 *)(pFVar21 + (ulonglong)(uVar11 & 0xff) * 0x10);
      if (pTVar32 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar32->SharedReferenceCount = (atomic<int>)((int)pTVar32->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_78 = &local_f8;
      TSet<TTuple<FInputChord,FName>,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FInputChord_const_&,FName_&&>_>
                ((TSet<TTuple<FInputChord,FName>,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>,FDefaultSetAllocator>
                  *)(pFVar26 + (longlong)(int)uVar11 * 0x50),
                 (TPairInitializer<FInputChord_const_&,FName_&&> *)local_138,(bool *)&local_80);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar32);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1a8.Key.KeyDetails.SharedReferenceCount.ReferenceController);
    local_res10 = uVar11 + 1;
    puVar31 = (undefined1 *)(ulonglong)local_res10;
    if (1 < local_res10) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_168)
      ;
      FMemScope::~FMemScope(&local_e8);
      FLLMScope::~FLLMScope(local_res8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pTVar28->SharedReferenceCount).ReferenceController);
      return;
    }
  } while( true );
}

// FindCommandInContext @ 142734e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedPtr<FUICommandInfo,1> * __thiscall
FInputBindingManager::FindCommandInContext
          (FInputBindingManager *this,TSharedPtr<FUICommandInfo,1> *__return_storage_ptr__,
          FName param_1,FName param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TTuple<FName,TSharedPtr<FUICommandInfo,1>_> *pTVar2;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [72];
  int local_40;
  ForAnyElementType local_38;
  int local_30;
  FSharedReferencer<1> local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  TMapBase<FName,FInputBindingManager::FContextEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FContextEntry,0>_>
  ::FindRef((TMapBase<FName,FInputBindingManager::FContextEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FContextEntry,0>_>
             *)&this->ContextMap,(FContextEntry *)local_88,param_1);
  pTVar2 = TSet<TTuple<FName,TSharedPtr<FUICommandInfo,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FUICommandInfo,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TSharedPtr<FUICommandInfo,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FUICommandInfo,1>,0>,FDefaultSetAllocator>
                   *)local_88,param_2);
  if (pTVar2 == (TTuple<FName,TSharedPtr<FUICommandInfo,1>_> *)0x0) {
    __return_storage_ptr__->Object = (FUICommandInfo *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    __return_storage_ptr__->Object = *(FUICommandInfo **)&pTVar2->field_0x8;
    pTVar1 = *(TReferenceControllerBase<1> **)&pTVar2->field_0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  DestructItems<TMap<FInputChord,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>_>,int>
            ((TMap<FInputChord,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>_>
              *)local_38.Data,local_30);
  if ((TMap<FInputChord,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>_>
       *)local_38.Data !=
      (TMap<FInputChord,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>_>
       *)0x0) {
    FMemory::Free(local_38.Data);
  }
  local_40 = 0;
  if ((ForElementType<FSetElementId>)local_88._64_8_ != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FUICommandInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FUICommandInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FUICommandInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  return __return_storage_ptr__;
}

// FindCommandInContext @ 142734f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedPtr<FUICommandInfo,1> * __thiscall
FInputBindingManager::FindCommandInContext
          (FInputBindingManager *this,TSharedPtr<FUICommandInfo,1> *__return_storage_ptr__,
          FName param_1,FInputChord *param_2,bool param_3)

{
  ulonglong uVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  TSharedPtr<FUICommandInfo,1> *pTVar9;
  TTuple<FInputChord,FName> *pTVar10;
  TTuple<FName,TSharedPtr<FUICommandInfo,1>_> *pTVar11;
  FCommandFilterForContext *pFVar12;
  FName FVar13;
  FName FVar14;
  undefined1 *puVar15;
  FName FVar16;
  FNameEntryId FVar17;
  FName FVar18;
  FName FVar19;
  uint *puVar20;
  FName FVar21;
  FName FVar22;
  longlong lVar23;
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong local_140;
  uint local_138;
  FName local_130;
  undefined8 local_128;
  TSharedPtr<FUICommandInfo,1> *local_120;
  FInputBindingManager *local_118;
  longlong *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  longlong *local_e8;
  uint uStack_e0;
  uint uStack_dc;
  TBitArray<FDefaultBitArrayAllocator> *local_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  uint local_c8;
  uint uStack_c4;
  undefined1 local_b8 [32];
  uint *local_98;
  uint local_90;
  ForElementType<FSetElementId> local_78;
  int local_70;
  ForAnyElementType local_68;
  int local_60;
  FSharedReferencer<1> local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_168;
  local_120 = __return_storage_ptr__;
  local_118 = this;
  TMapBase<FName,FInputBindingManager::FContextEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FContextEntry,0>_>
  ::FindRef((TMapBase<FName,FInputBindingManager::FContextEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FContextEntry,0>_>
             *)&this->ContextMap,(FContextEntry *)local_b8,param_1);
  FVar14.ComparisonIndex.Value = 0;
  FVar14.Number = 0;
  FVar22.ComparisonIndex.Value = 0;
  FVar22.Number = 0;
  local_130.ComparisonIndex.Value = 0;
  local_130.Number = 0;
  FVar21.ComparisonIndex.Value = 0;
  FVar21.Number = 0;
  if (param_3) {
    FVar18.ComparisonIndex.Value = 0;
    uStack_dc = 1;
    FVar13 = FVar14;
    FVar19.ComparisonIndex.Value = FVar18.ComparisonIndex.Value;
    if (local_90 != 0) {
      puVar20 = (uint *)(local_b8 + 0x10);
      if (local_98 != (uint *)0x0) {
        puVar20 = local_98;
      }
      uVar6 = *puVar20;
      FVar21 = FVar14;
      FVar22 = FVar14;
      FVar19.ComparisonIndex.Value = 0;
      FVar18.ComparisonIndex.Value = 0;
      while (uVar6 == 0) {
        FVar19.ComparisonIndex.Value = FVar22.ComparisonIndex.Value.Value + 0x20;
        FVar19.Number = 0;
        FVar18.ComparisonIndex.Value = FVar21.ComparisonIndex.Value.Value + 1;
        FVar18.Number = 0;
        if ((int)(((int)(local_90 - 1) >> 0x1f & 0x1fU) + (local_90 - 1)) >> 5 <
            (int)FVar18.ComparisonIndex.Value) goto LAB_14273502a;
        uVar6 = puVar20[(longlong)(int)FVar21.ComparisonIndex.Value.Value + 1];
        FVar21 = FVar18;
        FVar22 = FVar19;
      }
      uStack_dc = -uVar6 & uVar6;
      uVar1 = (ulonglong)uStack_dc * 2 + 1;
      lVar23 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      local_138 = (uint)lVar23;
      FVar13.ComparisonIndex.Value = (local_138 - 1) + FVar19.ComparisonIndex.Value;
      FVar13.Number = 0;
      if ((int)local_90 < (int)FVar13.ComparisonIndex.Value) {
LAB_14273502a:
        FVar13.Number = 0;
        FVar13.ComparisonIndex.Value = local_90;
      }
    }
    uStack_cc = (uint)FVar13.ComparisonIndex.Value;
    local_110 = (longlong *)local_b8;
    TStack_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10);
    uStack_d0 = 0xffffffff;
    TStack_108._padding_ = CONCAT44(uStack_dc,FVar18.ComparisonIndex.Value);
    TStack_108.CurrentBitIndex = uStack_cc;
    TStack_108.UnvisitedBitMask = 0xffffffff;
    TStack_108._28_4_ = uStack_cc;
    TStack_108.BaseBitIndex = FVar19.ComparisonIndex.Value;
    FVar21 = FVar14;
    FVar22 = FVar14;
    uVar6 = local_138;
    local_e8 = local_110;
    uStack_e0 = FVar18.ComparisonIndex.Value;
    local_d8 = TStack_108.Array;
    local_c8 = FVar19.ComparisonIndex.Value;
    uStack_c4 = uStack_cc;
    if ((int)uStack_cc < (int)local_90) {
      do {
        this = local_118;
        __return_storage_ptr__ = local_120;
        if (FVar22 != (FName)0x0) goto LAB_1427353ad;
        lVar23 = (longlong)(int)FVar13.ComparisonIndex.Value.Value * 0x20 + *local_110;
        if ((*(longlong *)(lVar23 + 8) == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TSharedPtr<FUICommandInfo,1> *)(*pcVar4)();
          return pTVar9;
        }
        FVar16 = (FName)(param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
        lVar23 = *(longlong *)(lVar23 + 8);
        FVar22 = (param_2->Key).KeyName;
        if (FVar16 != (FName)0x0) {
          LOCK();
          *(atomic<int> *)((longlong)FVar16 + 8) =
               (atomic<int>)((int)*(atomic<int> *)((longlong)FVar16 + 8) + 1);
          UNLOCK();
        }
        uVar2 = *(undefined4 *)&param_2->field_0x18;
        uVar6 = (uVar6 ^ ZPULL(uVar2,0,1)) & 1 ^ uVar6;
        uVar6 = (uVar6 ^ uVar2) & 2 ^ uVar6;
        uVar6 = (uVar6 ^ uVar2) & 4 ^ uVar6;
        uVar6 = (uVar6 ^ uVar2) & 8 ^ uVar6;
        if (*(int *)(lVar23 + 0x38) < 1) {
          local_148 = 0;
          local_140 = (longlong)*(int *)(lVar23 + 0x38);
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pTVar9 = (TSharedPtr<FUICommandInfo,1> *)(*pcVar4)();
            return pTVar9;
          }
        }
        if ((((**(FName **)(lVar23 + 0x30) == FVar22) &&
             (FVar19.ComparisonIndex.Value = (*(FName **)(lVar23 + 0x30))[3].ComparisonIndex.Value,
             ((uVar6 ^ FVar19.ComparisonIndex.Value) & 1) == 0)) &&
            (((FVar19.ComparisonIndex.Value ^ uVar6) & 2) == 0)) &&
           ((((FVar19.ComparisonIndex.Value ^ uVar6) & 4) == 0 &&
            (((FVar19.ComparisonIndex.Value ^ uVar6) & 8) == 0)))) {
LAB_1427351d4:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)FVar16);
          FVar21 = *(FName *)((longlong)TStack_108.CurrentBitIndex * 0x20 + 0x10 + *local_110);
          local_130 = *(FName *)((longlong)TStack_108.CurrentBitIndex * 0x20 + 8 + *local_110);
          FVar16 = FVar14;
          if (FVar21 != (FName)0x0) {
            LOCK();
            *(int *)((longlong)FVar21 + 8) = *(int *)((longlong)FVar21 + 8) + 1;
            UNLOCK();
          }
        }
        else {
          if (*(int *)(lVar23 + 0x38) < 2) {
            local_148 = 1;
            local_140 = (longlong)*(int *)(lVar23 + 0x38);
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              pTVar9 = (TSharedPtr<FUICommandInfo,1> *)(*pcVar4)();
              return pTVar9;
            }
          }
          FVar21 = FVar14;
          if (((*(FName *)(*(longlong *)(lVar23 + 0x30) + 0x20) == FVar22) &&
              (FVar19.ComparisonIndex.Value = *(uint *)(*(longlong *)(lVar23 + 0x30) + 0x38),
              ((uVar6 ^ FVar19.ComparisonIndex.Value) & 1) == 0)) &&
             ((((FVar19.ComparisonIndex.Value ^ uVar6) & 2) == 0 &&
              ((((FVar19.ComparisonIndex.Value ^ uVar6) & 4) == 0 &&
               (((FVar19.ComparisonIndex.Value ^ uVar6) & 8) == 0)))))) goto LAB_1427351d4;
        }
        FVar22 = local_130;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)FVar16);
        TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
        FVar13.Number = 0;
        FVar13.ComparisonIndex.Value = TStack_108.CurrentBitIndex;
        this = local_118;
        FVar14 = FVar21;
        __return_storage_ptr__ = local_120;
      } while (TStack_108.CurrentBitIndex < (TStack_108.Array)->NumBits);
LAB_142735321:
      FVar14 = FVar21;
      if (FVar22 != (FName)0x0) {
LAB_1427353ad:
        FVar16 = *(FName *)((longlong)FVar22 + 0x68);
        pFVar12 = TMapBase<FName,FInputBindingManager::FCommandFilterForContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FCommandFilterForContext,0>_>
                  ::Find((TMapBase<FName,FInputBindingManager::FCommandFilterForContext,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FCommandFilterForContext,0>_>
                          *)&this->CommandFiltersByContext,param_1);
        FVar21 = FVar14;
        if (pFVar12 != (FCommandFilterForContext *)0x0) {
          FVar19.ComparisonIndex.Value = ::GetTypeHash(FVar16.ComparisonIndex.Value);
          if (*(int *)&(pFVar12->CommandDenyList).field_0x8 !=
              *(int *)&(pFVar12->CommandDenyList).field_0x34) {
            puVar15 = *(undefined1 **)&(pFVar12->CommandDenyList).field_0x40;
            if (puVar15 == (undefined1 *)0x0) {
              puVar15 = &(pFVar12->CommandDenyList).field_0x38;
            }
            iVar7 = *(int *)(puVar15 +
                            (ulonglong)
                            (*(int *)&(pFVar12->CommandDenyList).field_0x48 - 1U &
                            FVar16.Number + FVar19.ComparisonIndex.Value) * 4);
            if (iVar7 != -1) {
              do {
                if (*(FName *)((longlong)iVar7 * 0x20 + *(longlong *)&pFVar12->CommandDenyList) ==
                    FVar16) goto LAB_142735492;
                iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 +
                                *(longlong *)&pFVar12->CommandDenyList);
              } while (iVar7 != -1);
            }
          }
          FVar19.ComparisonIndex.Value = ::GetTypeHash(FVar16.ComparisonIndex.Value);
          iVar7 = *(int *)&(pFVar12->CommandAllowList).field_0x8;
          iVar3 = *(int *)&(pFVar12->CommandAllowList).field_0x34;
          if (iVar7 != iVar3) {
            puVar15 = *(undefined1 **)&(pFVar12->CommandAllowList).field_0x40;
            if (puVar15 == (undefined1 *)0x0) {
              puVar15 = &(pFVar12->CommandAllowList).field_0x38;
            }
            iVar8 = *(int *)(puVar15 +
                            (ulonglong)
                            (*(int *)&(pFVar12->CommandAllowList).field_0x48 - 1U &
                            FVar16.Number + FVar19.ComparisonIndex.Value) * 4);
            if (iVar8 != -1) {
              do {
                if (*(FName *)((longlong)iVar8 * 0x20 + *(longlong *)&pFVar12->CommandAllowList) ==
                    FVar16) goto LAB_14273532a;
                iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 +
                                *(longlong *)&pFVar12->CommandAllowList);
              } while (iVar8 != -1);
            }
            if (0 < iVar7 - iVar3) {
LAB_142735492:
              __return_storage_ptr__->Object = (FUICommandInfo *)0x0;
              (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
                   (TReferenceControllerBase<1> *)0x0;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)FVar14);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_50.ReferenceController);
              DestructItems<TMap<FInputChord,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>_>,int>
                        ((TMap<FInputChord,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>_>
                          *)local_68.Data,local_60);
              if ((TMap<FInputChord,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>_>
                   *)local_68.Data !=
                  (TMap<FInputChord,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>_>
                   *)0x0) {
                FMemory::Free(local_68.Data);
              }
              goto LAB_142735362;
            }
          }
        }
      }
    }
  }
  else {
    local_128 = 0;
    FVar16 = FVar14;
    do {
      if (FVar14 != (FName)0x0) goto LAB_1427352d0;
      FVar17 = FVar16.ComparisonIndex.Value;
      if (local_60 <= (int)FVar17.Value) {
        local_148 = (longlong)(int)FVar17.Value;
        local_140 = (longlong)local_60;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TSharedPtr<FUICommandInfo,1> *)(*pcVar4)();
          return pTVar9;
        }
      }
      pTVar10 = TSet<TTuple<FInputChord,FName>,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FInputChord,FName>,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>,FDefaultSetAllocator>
                        *)(local_68.Data + (longlong)(int)FVar17.Value * 0x50),param_2);
      if (pTVar10 == (TTuple<FInputChord,FName> *)0x0) {
        FVar14.ComparisonIndex.Value = 0;
        FVar14.Number = 0;
      }
      else {
        FVar14.ComparisonIndex.Value = *(uint *)&pTVar10->field_0x20;
        FVar14.Number = *(uint *)&pTVar10->field_0x24;
      }
      FVar16.ComparisonIndex.Value = FVar17.Value + 1;
      FVar16.Number = 0;
    } while (FVar16.ComparisonIndex.Value < 2);
    if (FVar14 != (FName)0x0) {
LAB_1427352d0:
      pTVar11 = TSet<TTuple<FName,TSharedPtr<FUICommandInfo,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FUICommandInfo,1>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,TSharedPtr<FUICommandInfo,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FUICommandInfo,1>,0>,FDefaultSetAllocator>
                        *)local_b8,FVar14);
      if ((pTVar11 == (TTuple<FName,TSharedPtr<FUICommandInfo,1>_> *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x27b,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TSharedPtr<FUICommandInfo,1> *)(*pcVar4)();
        return pTVar9;
      }
      FVar21 = *(FName *)&pTVar11->field_0x10;
      FVar22.ComparisonIndex.Value = *(uint *)&pTVar11->field_0x8;
      FVar22.Number = *(uint *)&pTVar11->field_0xc;
      if (FVar21 != (FName)0x0) {
        LOCK();
        *(int *)((longlong)FVar21 + 8) = *(int *)((longlong)FVar21 + 8) + 1;
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      goto LAB_142735321;
    }
  }
LAB_14273532a:
  __return_storage_ptr__->Object = (FUICommandInfo *)FVar22;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)FVar21;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50.ReferenceController);
  DestructItems<TMap<FInputChord,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>_>,int>
            ((TMap<FInputChord,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>_>
              *)local_68.Data,local_60);
  if ((TMap<FInputChord,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>_>
       *)local_68.Data !=
      (TMap<FInputChord,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>_>
       *)0x0) {
    FMemory::Free(local_68.Data);
  }
LAB_142735362:
  local_70 = 0;
  if (local_78 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_78);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FUICommandInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FUICommandInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FUICommandInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_b8);
  return __return_storage_ptr__;
}

// Get @ 1427393c0

FInputBindingManager * __cdecl FInputBindingManager::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FInputBindingManager::Get'::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
      return &::Instance;
    }
  }
  return &::Instance;
}

// GetAllChildContexts @ 142739cb0

void __thiscall
FInputBindingManager::GetAllChildContexts
          (FInputBindingManager *this,FName param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  FName local_res10;
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  pFVar1 = (FName *)(param_2->AllocatorInstance).Data;
  local_res10 = param_1;
  if ((pFVar1 <= &local_res10) && (&local_res10 < pFVar1 + param_2->ArrayMax)) {
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
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar4 + 1;
  *(FName *)((param_2->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_res10;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  TMultiMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,1>_>::
  MultiFind<TSizedDefaultAllocator<32>_>(&this->ParentToChildMap,local_res10,&local_18,false);
  uVar6 = 0;
  if (0 < local_18.ArrayNum) {
    do {
      uVar5 = 0;
      if ((int)uVar6 < local_18.ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      GetAllChildContexts(this,*(FName *)(local_18.AllocatorInstance.Data + (longlong)(int)uVar6 * 8
                                         ),param_2);
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < local_18.ArrayNum);
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// GetCommandInfoFromInputChord @ 14273be90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedPtr<FUICommandInfo,1> * __thiscall
FInputBindingManager::GetCommandInfoFromInputChord
          (FInputBindingManager *this,TSharedPtr<FUICommandInfo,1> *__return_storage_ptr__,
          FName param_1,FInputChord *param_2,bool param_3)

{
  int iVar1;
  TMap<FInputChord,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>_>
  *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  FUICommandInfo *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  TTuple<FName,FInputBindingManager::FContextEntry> *pTVar8;
  TSharedPtr<FUICommandInfo,1> *pTVar9;
  uint uVar10;
  FName FVar11;
  undefined1 auStackY_158 [32];
  undefined1 local_110 [16];
  FUICommandInfo *local_100;
  TReferenceControllerBase<1> *pTStack_f8;
  TSharedPtr<FUICommandInfo,1> local_f0;
  FUICommandInfo *local_e0;
  TReferenceControllerBase<1> *pTStack_d8;
  TSharedPtr<FUICommandInfo,1> local_d0;
  undefined1 local_b8 [32];
  void *local_98;
  undefined4 local_90;
  uint local_8c;
  undefined4 local_88;
  undefined4 local_84;
  ForElementType<FSetElementId> local_80;
  int local_70 [2];
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  FBindingContext *local_58;
  FSharedReferencer<1> local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  __return_storage_ptr__->Object = (FUICommandInfo *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FVar11 = param_1;
  while( true ) {
    uVar10 = 0;
    local_110._8_8_ = __return_storage_ptr__->Object;
    if (FVar11 == (FName)0x0) break;
    if ((FUICommandInfo *)local_110._8_8_ != (FUICommandInfo *)0x0) {
      return __return_storage_ptr__;
    }
    pTVar8 = TSet<TTuple<FName,FInputBindingManager::FContextEntry>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FContextEntry,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FInputBindingManager::FContextEntry>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FContextEntry,0>,FDefaultSetAllocator>
                     *)&this->ContextMap,FVar11);
    if (pTVar8 == (TTuple<FName,FInputBindingManager::FContextEntry> *)0x0) {
      FContextEntry::FContextEntry((FContextEntry *)local_b8);
    }
    else {
      local_b8._0_8_ = (FScriptContainerElement *)0x0;
      local_b8._8_8_ = 0;
      local_98 = (void *)0x0;
      local_90 = 0;
      local_8c = 0x80;
      local_88 = 0xffffffff;
      local_84 = 0;
      local_80.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_70[0] = 0;
      if (local_b8 != &pTVar8->field_0x8) {
        UE::Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  (&local_80,local_70,(ForElementType<FSetElementId> *)&pTVar8->field_0x40,
                   *(int *)&pTVar8->field_0x50);
        TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FUICommandInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FUICommandInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_b8,
                    (TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FUICommandInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&pTVar8->field_0x8);
      }
      local_68.Data = (FScriptContainerElement *)0x0;
      iVar1 = *(int *)&pTVar8->field_0x60;
      pTVar2 = *(TMap<FInputChord,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>_>
                 **)&pTVar8->field_0x58;
      local_60 = iVar1;
      if (iVar1 == 0) {
        local_5c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,8,iVar1,0,&local_68,iVar1,&local_5c);
        ConstructItems<TMap<FInputChord,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>_>,TMap<FInputChord,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>_>,int>
                  (local_68.Data,pTVar2,iVar1);
      }
      local_58 = *(FBindingContext **)&pTVar8->field_0x68;
      local_50.ReferenceController = *(TReferenceControllerBase<1> **)&pTVar8->field_0x70;
      if (local_50.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_50.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_50.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    pTVar9 = FindCommandInContext(this,&local_f0,FVar11,param_2,param_3);
    pTVar3 = (pTVar9->SharedReferenceCount).ReferenceController;
    pFVar4 = pTVar9->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_100 = __return_storage_ptr__->Object;
    pTStack_f8 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    __return_storage_ptr__->Object = pFVar4;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_f8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f0.SharedReferenceCount.ReferenceController);
    if ((local_58 == (FBindingContext *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TSharedPtr<FUICommandInfo,1> *)(*pcVar5)();
      return pTVar9;
    }
    FVar11 = local_58->ContextParent;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.ReferenceController);
    DestructItems<TMap<FInputChord,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>_>,int>
              ((TMap<FInputChord,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>_>
                *)local_68.Data,local_60);
    if ((TMap<FInputChord,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>_>
         *)local_68.Data !=
        (TMap<FInputChord,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>_>
         *)0x0) {
      FMemory::Free(local_68.Data);
    }
    local_70[0] = 0;
    if (local_80.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_80.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FUICommandInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FUICommandInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_b8,0,local_b8._8_4_);
    bVar6 = local_b8._12_4_ != 0;
    local_b8._8_8_ = (ulonglong)(uint)local_b8._12_4_ << 0x20;
    if (bVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)local_b8,0,(int *)(local_b8 + 0xc));
    }
    local_88 = 0xffffffff;
    local_84 = 0;
    local_90 = 0;
    if (0x80 < local_8c) {
      local_8c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10),0);
    }
    if (local_98 != (void *)0x0) {
      FMemory::Free(local_98);
    }
    if ((FScriptContainerElement *)local_b8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_b8._0_8_);
    }
  }
  if ((FUICommandInfo *)local_110._8_8_ == (FUICommandInfo *)0x0) {
    local_110._0_8_ = (FScriptContainerElement *)0x0;
    GetAllChildContexts(this,param_1,(TArray<FName,TSizedDefaultAllocator<32>_> *)local_110);
    if (0 < (int)local_110._8_4_) {
      do {
        if (__return_storage_ptr__->Object != (FUICommandInfo *)0x0) break;
        uVar7 = 0;
        if ((int)uVar10 < (int)local_110._8_4_) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TSharedPtr<FUICommandInfo,1> *)(*pcVar5)();
          return pTVar9;
        }
        pTVar9 = FindCommandInContext
                           (this,&local_d0,*(FName *)(local_110._0_8_ + (longlong)(int)uVar10 * 8),
                            param_2,param_3);
        pTVar3 = (pTVar9->SharedReferenceCount).ReferenceController;
        pFVar4 = pTVar9->Object;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_e0 = __return_storage_ptr__->Object;
        pTStack_d8 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
        __return_storage_ptr__->Object = pFVar4;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_d8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d0.SharedReferenceCount.ReferenceController);
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)local_110._8_4_);
    }
    if ((FScriptContainerElement *)local_110._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_110._0_8_);
    }
  }
  return __return_storage_ptr__;
}

// GetCommandInfosFromContext @ 14273c270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FInputBindingManager::GetCommandInfosFromContext
          (FInputBindingManager *this,FName param_1,
          TArray<TSharedPtr<FUICommandInfo,1>,TSizedDefaultAllocator<32>_> *param_2)

{
  FContextEntry *this_00;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [72];
  undefined4 local_40;
  ForAnyElementType local_38;
  int local_30;
  FSharedReferencer<1> local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  this_00 = TMapBase<FName,FInputBindingManager::FContextEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FContextEntry,0>_>
            ::FindRef((TMapBase<FName,FInputBindingManager::FContextEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FContextEntry,0>_>
                       *)&this->ContextMap,(FContextEntry *)local_88,param_1);
  TMapBase<FName,TSharedPtr<FUICommandInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FUICommandInfo,1>,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,TSharedPtr<FUICommandInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FUICommandInfo,1>,0>_>
              *)this_00,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  DestructItems<TMap<FInputChord,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>_>,int>
            ((TMap<FInputChord,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>_>
              *)local_38.Data,local_30);
  if ((TMap<FInputChord,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>_>
       *)local_38.Data !=
      (TMap<FInputChord,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>_>
       *)0x0) {
    FMemory::Free(local_38.Data);
  }
  local_40 = 0;
  if ((void *)local_88._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_88._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FUICommandInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FUICommandInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FUICommandInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  return;
}

// GetContextByName @ 14273ca10

TSharedPtr<FBindingContext,1> * __thiscall
FInputBindingManager::GetContextByName
          (FInputBindingManager *this,TSharedPtr<FBindingContext,1> *__return_storage_ptr__,
          FName *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TTuple<FName,FInputBindingManager::FContextEntry> *pTVar2;
  undefined1 *puVar3;
  
  pTVar2 = TSet<TTuple<FName,FInputBindingManager::FContextEntry>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FContextEntry,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FInputBindingManager::FContextEntry>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FContextEntry,0>,FDefaultSetAllocator>
                   *)&this->ContextMap,*param_1);
  puVar3 = &pTVar2->field_0x8;
  if (pTVar2 == (TTuple<FName,FInputBindingManager::FContextEntry> *)0x0) {
    puVar3 = (undefined1 *)0x0;
  }
  if (puVar3 == (undefined1 *)0x0) {
    __return_storage_ptr__->Object = (FBindingContext *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = *(FBindingContext **)(puVar3 + 0x60);
  pTVar1 = *(TReferenceControllerBase<1> **)(puVar3 + 0x68);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetKnownInputContexts @ 14273f2c0

void __thiscall
FInputBindingManager::GetKnownInputContexts
          (FInputBindingManager *this,
          TArray<TSharedPtr<FBindingContext,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  iVar10 = 0;
  iVar6 = *(int *)&(this->ContextMap).field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ContextMap).field_0x10;
  uVar5 = 1;
  iVar11 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar6 != 0) {
    puVar12 = *(uint **)&(this->ContextMap).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)TStack_40.Array;
    }
    uVar2 = *puVar12;
    while (uVar2 == 0) {
      lVar7 = (longlong)iVar10;
      iVar11 = iVar11 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar6;
      if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14273f361;
      uVar2 = puVar12[lVar7 + 1];
    }
    uVar5 = -uVar2 & uVar2;
    uVar1 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar7 + -1 + iVar11;
    if (iVar6 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar6;
    }
  }
LAB_14273f361:
  TStack_40._padding_ = CONCAT44(uVar5,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar11;
  if (TStack_40.CurrentBitIndex < iVar6) {
    do {
      pFVar8 = (param_1->AllocatorInstance).Data;
      pFVar9 = (FScriptContainerElement *)
               (*(longlong *)&this->ContextMap + 0x68 + (longlong)TStack_40.CurrentBitIndex * 0x80);
      if (((pFVar8 <= pFVar9) && (pFVar9 < pFVar8 + (longlong)param_1->ArrayMax * 0x10)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = param_1->ArrayNum;
      if (iVar6 == param_1->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar6 + 1;
      pFVar8 = (param_1->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
      *(undefined8 *)pFVar8 = *(undefined8 *)pFVar9;
      lVar7 = *(longlong *)(pFVar9 + 8);
      *(longlong *)(pFVar8 + 8) = lVar7;
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
        UNLOCK();
      }
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// GetUserDefinedChord @ 142745bb0

bool __thiscall
FInputBindingManager::GetUserDefinedChord
          (FInputBindingManager *this,FName param_1,FName param_2,EMultipleKeyBindingIndex param_3,
          FInputChord *param_4)

{
  TSharedPtr<FUserDefinedChords,1> *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TRawPtrProxy<FUserDefinedChords> local_res8;
  
  this_00 = &this->UserDefinedChords;
  if (this_00->Object == (FUserDefinedChords *)0x0) {
    local_res8.Object = ::operator_new(0x10);
    if (local_res8.Object != (FUserDefinedChords *)0x0) {
      ((local_res8.Object)->Chords).Object =
           (TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>
            *)0x0;
      ((local_res8.Object)->Chords).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
    }
    TSharedPtr<FUserDefinedChords,1>::operator=<FUserDefinedChords>(this_00,&local_res8);
    if (this_00->Object == (FUserDefinedChords *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    FUserDefinedChords::LoadChords(this_00->Object);
    if (this_00->Object == (FUserDefinedChords *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
  }
  bVar2 = FUserDefinedChords::GetUserDefinedChord(this_00->Object,param_1,param_2,param_3,param_4);
  return bVar2;
}

// NotifyActiveChordChanged @ 14275fc90

void __thiscall
FInputBindingManager::NotifyActiveChordChanged
          (FInputBindingManager *this,FUICommandInfo *param_1,EMultipleKeyBindingIndex param_2)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  FKey *this_00;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  ulonglong uVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  TTuple<FName,FInputBindingManager::FContextEntry> *pTVar11;
  ulonglong uVar12;
  uint uVar13;
  TSet<TTuple<FInputChord,FName>,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>,FDefaultSetAllocator>
  *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  longlong lVar16;
  uint uVar17;
  TPairInitializer<FInputChord_const_&,FName_&&> local_res8;
  undefined4 local_res18;
  TSet<TTuple<FInputChord,FName>,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>,FDefaultSetAllocator>
  *local_res20;
  undefined1 auStack_e0 [16];
  uint uStack_d0;
  uint uStack_cc;
  longlong local_c8;
  TSet<TTuple<FInputChord,FName>,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>,FDefaultSetAllocator>
  *pTStack_c0;
  TSet<TTuple<FInputChord,FName>,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>,FDefaultSetAllocator>
  *local_b8;
  char local_b0;
  char cStack_af;
  undefined8 local_a8;
  FName **local_a0;
  FDestructionSentinel local_98;
  undefined1 local_80 [32];
  longlong local_60;
  TSet<TTuple<FInputChord,FName>,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>,FDefaultSetAllocator>
  *pTStack_58;
  
  uVar6 = (ulonglong)param_2;
  pTVar11 = TSet<TTuple<FName,FInputBindingManager::FContextEntry>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FContextEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FInputBindingManager::FContextEntry>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FContextEntry,0>,FDefaultSetAllocator>
                    *)&this->ContextMap,param_1->BindingContext);
  if ((pTVar11 == (TTuple<FName,FInputBindingManager::FContextEntry> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar13 = (uint)param_2;
  if ((*(int *)&pTVar11->field_0x60 <= (int)uVar13) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar14 = (TSet<TTuple<FInputChord,FName>,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>,FDefaultSetAllocator>
             *)(*(longlong *)&pTVar11->field_0x58 + uVar6 * 0x50);
  local_res20 = pTVar14;
  TSet<TTuple<FInputChord,FName>,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>,FDefaultSetAllocator>
  ::TIterator::TIterator((TIterator *)local_80,pTVar14);
  local_b0 = '\0';
  cStack_af = '\0';
  stack0xffffffffffffff28 = local_80._16_16_;
  auStack_e0._0_8_ = local_80._8_8_;
  local_c8 = local_60;
  pTStack_c0 = pTStack_58;
  uVar12 = local_80._24_8_ >> 0x20;
  uVar17 = local_80._28_4_;
  local_b8 = pTVar14;
  if ((int)uVar17 < *(int *)(local_80._16_8_ + 0x18)) {
    do {
      if (*(FName *)(*(longlong *)local_80._0_8_ + 0x20 + (longlong)(int)uVar12 * 0x30) ==
          param_1->CommandName) {
        TSet<TTuple<FInputChord,FName>,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_c0,uVar17);
        local_b0 = '\x01';
        goto LAB_14275fdf8;
      }
      uStack_d0 = uStack_d0 & ~auStack_e0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_e0);
      uVar12 = (ulonglong)uStack_cc;
      uVar17 = uStack_cc;
    } while ((int)uStack_cc < *(int *)(auStack_e0._8_8_ + 0x18));
    if (local_b0 != '\0') {
LAB_14275fdf8:
      if (cStack_af != '\0') {
        uVar17 = *(int *)&(local_b8->Elements).field_0x8 - *(int *)&(local_b8->Elements).field_0x34;
        if (uVar17 < 4) {
          iVar10 = 1;
        }
        else {
          uVar12 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
          lVar16 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          local_res18 = (undefined4)lVar16;
          iVar10 = 1 << ((byte)lVar16 & 0x1f);
        }
        if (((0 < (int)uVar17) && (local_b8->HashSize < iVar10)) || (iVar10 < local_b8->HashSize)) {
          local_b8->HashSize = iVar10;
          TSet<TTuple<FInputChord,FName>,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>,FDefaultSetAllocator>
          ::Rehash(local_b8);
        }
      }
    }
  }
  if (((param_1->ActiveChords).ArrayNum <= (int)uVar13) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar2 = (param_1->ActiveChords).AllocatorInstance.Data;
  pTVar15 = *(TReferenceControllerBase<1> **)(pFVar2 + uVar6 * 0x10 + 8);
  this_00 = *(FKey **)(pFVar2 + uVar6 * 0x10);
  if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar7 = FKey::IsValid(this_00);
  if ((bVar7) && (bVar7 = FKey::IsModifierKey(this_00), !bVar7)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
    local_res8.Value = *(FName **)&param_1->CommandName;
    if (((param_1->ActiveChords).ArrayNum <= (int)uVar13) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar2 = (param_1->ActiveChords).AllocatorInstance.Data;
    pTVar15 = *(TReferenceControllerBase<1> **)(pFVar2 + uVar6 * 0x10 + 8);
    local_a8 = *(undefined8 *)(pFVar2 + uVar6 * 0x10);
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_a0 = &local_res8.Value;
    TSet<TTuple<FInputChord,FName>,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FInputChord_const_&,FName_&&>_>
              (local_res20,&local_res8,(bool *)&local_a8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  if ((this->UserDefinedChords).Object == (FUserDefinedChords *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("UserDefinedChords.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Commands\\InputBindingManager.cpp"
                       ,0x18e,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (((this->UserDefinedChords).Object == (FUserDefinedChords *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FUserDefinedChords::SetUserDefinedChords((this->UserDefinedChords).Object,param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnUserDefinedChordChanged,(FWriteAccessScope *)&local_98);
  puVar1 = &(this->OnUserDefinedChordChanged).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar7 = false;
  uVar13 = *(int *)&(this->OnUserDefinedChordChanged).field_0x10 - 1;
  if (-1 < (int)uVar13) {
    lVar16 = (longlong)(int)uVar13 << 4;
    bVar7 = false;
    do {
      uVar17 = 0;
      if ((int)uVar13 < *(int *)&(this->OnUserDefinedChordChanged).field_0x10) {
        uVar17 = ~uVar13 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar3 = *(longlong *)&(this->OnUserDefinedChordChanged).field_0x8;
      if (((*(int *)(lVar3 + 8 + lVar16) == 0) ||
          (plVar4 = *(longlong **)(lVar3 + lVar16), plVar4 == (longlong *)0x0)) ||
         (cVar9 = (**(code **)(*plVar4 + 0x68))(), cVar9 == '\0')) {
        bVar7 = true;
      }
      lVar16 = lVar16 + -0x10;
      uVar13 = uVar13 - 1;
    } while (-1 < (int)uVar13);
  }
  puVar1 = &(this->OnUserDefinedChordChanged).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar7) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnUserDefinedChordChanged,false);
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  return;
}

// PrintAllInputCommands @ 142774190

void __thiscall FInputBindingManager::PrintAllInputCommands(FInputBindingManager *this,bool param_1)

{
  return;
}

// RegisterCommandList @ 142776c90

bool __thiscall
FInputBindingManager::RegisterCommandList
          (FInputBindingManager *this,FName param_1,TSharedRef<FUICommandList,1> *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  TSharedRef<FUICommandList,1> local_18;
  
  uVar2 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->ContextMap).field_0x8 != *(int *)&(this->ContextMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->ContextMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->ContextMap).field_0x38;
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->ContextMap).field_0x48 - 1U & param_1.Number + uVar2)
                              * 4);
    if (iVar3 != -1) {
      do {
        if (*(FName *)((longlong)iVar3 * 0x80 + *(longlong *)&this->ContextMap) == param_1) {
          bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                             &this->OnRegisterCommandList);
          if (bVar1) {
            local_18.Object = param_2->Object;
            local_18.SharedReferenceCount.ReferenceController =
                 (param_2->SharedReferenceCount).ReferenceController;
            if (local_18.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                   1);
              UNLOCK();
            }
            TMulticastDelegate<void___cdecl(FName,TSharedRef<FUICommandList,1>),FDefaultDelegateUserPolicy>
            ::Broadcast(&this->OnRegisterCommandList,param_1,&local_18);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((param_2->SharedReferenceCount).ReferenceController);
            return true;
          }
          break;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x80 + 0x78 + *(longlong *)&this->ContextMap);
      } while (iVar3 != -1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return false;
}

// RegisterNewCommandList @ 1427778b0

TSharedPtr<FUICommandList,1> * __thiscall
FInputBindingManager::RegisterNewCommandList
          (FInputBindingManager *this,TSharedPtr<FUICommandList,1> *__return_storage_ptr__,
          FName param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedPtr<FUICommandList,1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 *puVar10;
  FUICommandList *pFVar11;
  TSharedRef<FUICommandList,1> local_38;
  
  pTVar7 = ::operator_new(0x150);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pFVar11 = (FUICommandList *)&DAT_00000010;
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
LAB_14277794c:
    if (((pFVar11->_padding_ == 0) || (pFVar11->_padding_ == 0)) ||
       (*(int *)(pFVar11->_padding_ + 8) < 1)) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar11->_padding_ = (longlong)pFVar11;
      if (pTVar7 != (TReferenceControllerBase<1> *)pFVar11->_padding_) {
        if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar2 = (longlong *)pFVar11->_padding_;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
        pFVar11->_padding_ = (longlong)pTVar7;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    }
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) goto LAB_1427779b7;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFUICommandList___00_SharedPointerInternals__6B_;
    memset(pTVar7 + 1,0,0x140);
    FUICommandList::FUICommandList((FUICommandList *)(pTVar7 + 1));
    pFVar11 = (FUICommandList *)(pTVar7 + 1);
    if (pFVar11 != (FUICommandList *)0x0) goto LAB_14277794c;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TSharedPtr<FUICommandList,1> *)(*pcVar3)();
      return pTVar8;
    }
  }
  LOCK();
  pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
  UNLOCK();
LAB_1427779b7:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if ((pFVar11 == (FUICommandList *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TSharedPtr<FUICommandList,1> *)(*pcVar3)();
    return pTVar8;
  }
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar11 == (FUICommandList *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TSharedPtr<FUICommandList,1> *)(*pcVar3)();
    return pTVar8;
  }
  uVar5 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->ContextMap).field_0x8 != *(int *)&(this->ContextMap).field_0x34) {
    puVar10 = *(undefined1 **)&(this->ContextMap).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->ContextMap).field_0x38;
    }
    iVar6 = *(int *)(puVar10 +
                    (ulonglong)
                    (*(int *)&(this->ContextMap).field_0x48 - 1U & param_1.Number + uVar5) * 4);
    if (iVar6 != -1) {
      do {
        if (*(FName *)((longlong)iVar6 * 0x80 + *(longlong *)&this->ContextMap) == param_1) {
          bVar4 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                             &this->OnRegisterCommandList);
          if (bVar4) {
            if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_38.Object = pFVar11;
            local_38.SharedReferenceCount.ReferenceController = pTVar7;
            TMulticastDelegate<void___cdecl(FName,TSharedRef<FUICommandList,1>),FDefaultDelegateUserPolicy>
            ::Broadcast(&this->OnRegisterCommandList,param_1,&local_38);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar7);
            if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
              UNLOCK();
            }
            __return_storage_ptr__->Object = pFVar11;
            (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
            pTVar9 = pTVar7;
            if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
              UNLOCK();
            }
            goto LAB_142777ab3;
          }
          break;
        }
        iVar6 = *(int *)((longlong)iVar6 * 0x80 + 0x78 + *(longlong *)&this->ContextMap);
      } while (iVar6 != -1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  __return_storage_ptr__->Object = (FUICommandList *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
LAB_142777ab3:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return __return_storage_ptr__;
}

// RemoveContextByName @ 14277c210

void __thiscall FInputBindingManager::RemoveContextByName(FInputBindingManager *this,FName *param_1)

{
  FName FVar1;
  uint uVar2;
  FName local_res8;
  
  FVar1 = *param_1;
  if (*(int *)&(this->ContextMap).field_0x8 != *(int *)&(this->ContextMap).field_0x34) {
    local_res8 = FVar1;
    uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    TSet<TTuple<FName,FInputBindingManager::FContextEntry>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FContextEntry,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,FInputBindingManager::FContextEntry>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FContextEntry,0>,FDefaultSetAllocator>
                         *)&this->ContextMap,FVar1.Number + uVar2,&local_res8);
  }
  return;
}

// RemoveInputCommand @ 14277c8e0

void __thiscall
FInputBindingManager::RemoveInputCommand
          (FInputBindingManager *this,TSharedRef<FBindingContext,1> *param_1,
          TSharedRef<FUICommandInfo,1> *param_2)

{
  FName FVar1;
  FUICommandInfo *pFVar2;
  FKey *this_00;
  FScriptContainerElement *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong *plVar5;
  longlong lVar6;
  ForElementType<FSetElementId> FVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  TTuple<FName,FInputBindingManager::FContextEntry> *pTVar12;
  longlong lVar13;
  undefined1 *puVar14;
  FName *pFVar15;
  ForElementType<FSetElementId> FVar16;
  ulonglong uVar17;
  int iVar18;
  undefined1 *puVar19;
  TMap<FName,FInputBindingManager::FContextEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FContextEntry,0>_>
  *this_01;
  TSet<TTuple<FInputChord,FName>,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>,FDefaultSetAllocator>
  *this_02;
  int iVar20;
  FLLMScope local_res8 [2];
  int local_res10 [2];
  FName local_res18;
  FName local_res20;
  FName *local_58;
  FName local_50;
  FMemScope local_48 [2];
  
  if ((param_2->Object->BindingContext != param_1->Object->ContextName) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUICommandInfo->BindingContext == InBindingContext->GetContextName()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Commands\\InputBindingManager.cpp"
                         ,0x21d,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((param_2->Object->CommandName == (FName)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUICommandInfo->CommandName != NAME_None",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Commands\\InputBindingManager.cpp"
                         ,0x220,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(local_48,&local_res20,true);
  this_01 = &this->ContextMap;
  FVar1 = param_1->Object->ContextName;
  local_res18 = FVar1;
  uVar10 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  puVar19 = (undefined1 *)0x0;
  uVar10 = uVar10 + FVar1.Number;
  if (*(int *)&(this->ContextMap).field_0x8 != *(int *)&(this->ContextMap).field_0x34) {
    puVar14 = *(undefined1 **)&(this->ContextMap).field_0x40;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = &(this->ContextMap).field_0x38;
    }
    uVar11 = *(uint *)(puVar14 +
                      (ulonglong)(*(int *)&(this->ContextMap).field_0x48 - 1U & uVar10) * 4);
    if (uVar11 != 0xffffffff) {
      do {
        pFVar15 = (FName *)((longlong)(int)uVar11 * 0x80 + *(longlong *)&this_01->field_0x0);
        if (*pFVar15 == local_res18) {
          if (pFVar15 != (FName *)0x0) goto LAB_14277ca79;
          break;
        }
        uVar11 = pFVar15[0xf].ComparisonIndex.Value;
      } while (uVar11 != 0xffffffff);
    }
  }
  local_58 = &local_res18;
  TSet<TTuple<FName,FInputBindingManager::FContextEntry>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FContextEntry,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            ((TSet<TTuple<FName,FInputBindingManager::FContextEntry>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FContextEntry,0>,FDefaultSetAllocator>
              *)this_01,(uint)local_res10,(TKeyInitializer<FName_const_&> *)(ulonglong)uVar10,
             (bool *)&local_58);
  pFVar15 = (FName *)((longlong)local_res10[0] * 0x80 + *(longlong *)&this_01->field_0x0);
LAB_14277ca79:
  FVar1 = param_1->Object->ContextParent;
  if (FVar1 != (FName)0x0) {
    pTVar12 = TSet<TTuple<FName,FInputBindingManager::FContextEntry>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FContextEntry,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,FInputBindingManager::FContextEntry>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FContextEntry,0>,FDefaultSetAllocator>
                      *)this_01,FVar1);
    puVar14 = &pTVar12->field_0x8;
    if (pTVar12 == (TTuple<FName,FInputBindingManager::FContextEntry> *)0x0) {
      puVar14 = puVar19;
    }
    if ((puVar14 == (undefined1 *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InBindingContext->GetContextParent() == NAME_None || ContextMap.Find(InBindingContext->GetContextParent()) != 0"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Commands\\InputBindingManager.cpp"
                           ,0x229,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  FVar1 = param_2->Object->CommandName;
  local_50 = FVar1;
  if (pFVar15[2].ComparisonIndex.Value != pFVar15[7].Number) {
    uVar10 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    TSet<TTuple<FName,TSharedPtr<FUICommandInfo,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FUICommandInfo,1>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,TSharedPtr<FUICommandInfo,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FUICommandInfo,1>,0>,FDefaultSetAllocator>
                         *)(pFVar15 + 1),FVar1.Number + uVar10,&local_50);
  }
  do {
    pFVar2 = param_2->Object;
    iVar18 = (int)puVar19;
    if (((pFVar2->ActiveChords).ArrayNum <= iVar18) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    this_00 = *(FKey **)((pFVar2->ActiveChords).AllocatorInstance.Data + (longlong)iVar18 * 0x10);
    bVar9 = FKey::IsValid(this_00);
    if ((bVar9) && (bVar9 = FKey::IsModifierKey(this_00), !bVar9)) {
      if (((int)pFVar15[0xc].ComparisonIndex.Value <= iVar18) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar2 = param_2->Object;
      this_02 = (TSet<TTuple<FInputChord,FName>,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>,FDefaultSetAllocator>
                 *)((longlong)iVar18 * 0x50 + (longlong)pFVar15[0xb]);
      uVar17 = (ulonglong)puVar19 & 0xff;
      if (((pFVar2->ActiveChords).ArrayNum <= (int)uVar17) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar3 = (pFVar2->ActiveChords).AllocatorInstance.Data;
      pTVar4 = *(TReferenceControllerBase<1> **)(pFVar3 + uVar17 * 0x10 + 8);
      plVar5 = *(longlong **)(pFVar3 + uVar17 * 0x10);
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (*(int *)&(this_02->Elements).field_0x8 != *(int *)&(this_02->Elements).field_0x34) {
        lVar6 = *plVar5;
        uVar11 = ::GetTypeHash((FNameEntryId)(uint)lVar6);
        uVar10 = *(uint *)(plVar5 + 3);
        FVar7 = (this_02->Hash).SecondaryData;
        FVar16 = (ForElementType<FSetElementId>)&this_02->Hash;
        if (FVar7 != (ForElementType<FSetElementId>)0x0) {
          FVar16 = FVar7;
        }
        iVar20 = *(int *)((longlong)FVar16 +
                         ((longlong)this_02->HashSize - 1U &
                         (longlong)(int)(uVar10 & 0xf ^ uVar11 + (int)((ulonglong)lVar6 >> 0x20))) *
                         4);
        if (iVar20 != -1) {
          lVar6 = *(longlong *)&this_02->Elements;
          do {
            lVar13 = (longlong)iVar20;
            if ((((*(longlong *)(lVar6 + lVar13 * 0x30) == *plVar5) &&
                 (uVar11 = *(uint *)(lVar6 + 0x18 + lVar13 * 0x30), ((uVar10 ^ uVar11) & 1) == 0))
                && (((uVar10 ^ uVar11) & 2) == 0)) &&
               ((((uVar10 ^ uVar11) & 4) == 0 && (((uVar10 ^ uVar11) & 8) == 0)))) {
              TSet<TTuple<FInputChord,FName>,TDefaultMapHashableKeyFuncs<FInputChord,FName,0>,FDefaultSetAllocator>
              ::RemoveByIndex(this_02,iVar20);
              break;
            }
            iVar20 = *(int *)(lVar6 + 0x28 + lVar13 * 0x30);
          } while (iVar20 != -1);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    }
    puVar19 = (undefined1 *)(ulonglong)(iVar18 + 1U);
    if (1 < iVar18 + 1U) {
      FMemScope::~FMemScope(local_48);
      FLLMScope::~FLLMScope(local_res8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_2->SharedReferenceCount).ReferenceController);
      return;
    }
  } while( true );
}

// RemoveUserDefinedChords @ 14277d610

void __thiscall FInputBindingManager::RemoveUserDefinedChords(FInputBindingManager *this)

{
  TSharedPtr<TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>,1>
  *this_00;
  code *pcVar1;
  bool bVar2;
  TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>
  *pTVar3;
  TRawPtrProxy<TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>_>
  local_res8;
  
  this_00 = &((this->UserDefinedChords).Object)->Chords;
  if (this_00 !=
      (TSharedPtr<TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>,1>
       *)0x0) {
    pTVar3 = ::operator_new(0x50);
    local_res8.Object =
         (TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>
          *)0x0;
    if (pTVar3 != (TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>
                   *)0x0) {
      *(undefined8 *)pTVar3 = 0;
      *(undefined8 *)&pTVar3->field_0x8 = 0;
      *(undefined8 *)&pTVar3->field_0x20 = 0;
      *(undefined4 *)&pTVar3->field_0x28 = 0;
      *(undefined4 *)&pTVar3->field_0x2c = 0x80;
      *(undefined4 *)&pTVar3->field_0x30 = 0xffffffff;
      *(undefined4 *)&pTVar3->field_0x34 = 0;
      *(undefined8 *)&pTVar3->field_0x40 = 0;
      *(undefined4 *)&pTVar3->field_0x48 = 0;
      local_res8.Object = pTVar3;
    }
    TSharedPtr<TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>,1>
    ::
    operator=<TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>_>
              (this_00,&local_res8);
    if (((this->UserDefinedChords).Object == (FUserDefinedChords *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUserDefinedChords::SaveChords((this->UserDefinedChords).Object);
  }
  return;
}

// SaveInputBindings @ 142782e50

/* WARNING: Type propagation algorithm not settling */

void __thiscall FInputBindingManager::SaveInputBindings(FInputBindingManager *this)

{
  undefined1 *puVar1;
  FName *pFVar2;
  ulonglong uVar3;
  uint uVar4;
  TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>
  *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
  *this_00;
  FUserDefinedChords *pFVar7;
  code *pcVar8;
  ForAnyElementType _Src;
  bool bVar9;
  int iVar10;
  FJsonValueObject *pFVar11;
  FJsonObject *pFVar12;
  TSharedPtr<FJsonObject,1> *pTVar13;
  undefined8 *puVar14;
  TJsonValueString<wchar_t> *pTVar15;
  FString *pFVar16;
  FJsonValueNumber *this_01;
  TJsonValueString<wchar_t> *pTVar17;
  FJsonValueBoolean *pFVar18;
  byte bVar19;
  longlong lVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  uint uVar23;
  TJsonValueString<wchar_t> *pTVar24;
  undefined1 *puVar25;
  uint *puVar26;
  uint uVar27;
  int iVar28;
  FName *this_02;
  undefined1 auStackX_8 [8];
  uint uStackX_10;
  int iStackX_18;
  int iStackX_20;
  TArray<FString,TSizedDefaultAllocator<32>_> TStack_3d8;
  ForAnyElementType FStack_3c8;
  int iStack_3c0;
  int iStack_3bc;
  int iStack_3b8;
  uint uStack_3b4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_3b0;
  uint uStack_3a8;
  uint uStack_3a4;
  uint uStack_3a0;
  undefined4 uStack_39c;
  FString FStack_398;
  TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>
  *pTStack_388;
  int iStack_380;
  uint uStack_37c;
  undefined1 *puStack_378;
  undefined4 uStack_370;
  int iStack_36c;
  int iStack_368;
  int iStack_364;
  int iStack_360;
  undefined4 uStack_35c;
  undefined1 auStack_358 [8];
  undefined1 auStack_350 [8];
  undefined1 auStack_348 [8];
  undefined1 auStack_340 [8];
  TRawPtrProxy<FJsonObject> TStack_338;
  TRawPtrProxy<FJsonValueObject> TStack_330;
  TRawPtrProxy<TJsonValueString<wchar_t>_> TStack_328;
  TRawPtrProxy<TJsonValueString<wchar_t>_> TStack_320;
  TRawPtrProxy<FJsonValueNumber> TStack_318;
  TRawPtrProxy<FJsonValueBoolean> TStack_310;
  TRawPtrProxy<FJsonValueBoolean> TStack_308;
  TRawPtrProxy<FJsonValueBoolean> TStack_300;
  TRawPtrProxy<FJsonValueBoolean> TStack_2f8;
  TRawPtrProxy<TJsonValueString<wchar_t>_> TStack_2f0;
  TSharedPtr<FJsonValueObject,1> TStack_2e8;
  TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>
  *pTStack_2d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2d0;
  undefined8 uStack_2b0;
  FString *pFStack_2a8;
  TSharedPtr<FJsonValue,1> *pTStack_2a0;
  FString FStack_298;
  TSharedPtr<FJsonValue,1> TStack_288;
  FString *pFStack_278;
  TSharedPtr<FJsonValue,1> *pTStack_270;
  FString FStack_268;
  TSharedPtr<FJsonValue,1> TStack_258;
  FString *pFStack_248;
  TSharedPtr<FJsonValue,1> *pTStack_240;
  FString FStack_238;
  TSharedPtr<FJsonValue,1> TStack_228;
  FString *pFStack_218;
  TSharedPtr<FJsonValue,1> *pTStack_210;
  FString FStack_208;
  TSharedPtr<FJsonValue,1> TStack_1f8;
  FString *pFStack_1e8;
  TSharedPtr<FJsonValue,1> *pTStack_1e0;
  FString FStack_1d8;
  TSharedPtr<FJsonValue,1> TStack_1c8;
  FString *pFStack_1b8;
  TSharedPtr<FJsonValue,1> *pTStack_1b0;
  FString FStack_1a8;
  TSharedPtr<FJsonValue,1> TStack_198;
  FString *pFStack_188;
  TSharedPtr<FJsonValue,1> *pTStack_180;
  FString FStack_178;
  TSharedPtr<FJsonValue,1> TStack_168;
  TSharedPtr<FJsonObject,1> TStack_158;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> TStack_148;
  TSharedRef<TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>,1> TStack_138;
  FString *pFStack_128;
  TSharedPtr<FJsonValue,1> *pTStack_120;
  FString FStack_118;
  TSharedPtr<FJsonValue,1> TStack_108;
  TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>
  *pTStack_f8;
  undefined8 uStack_f0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  FString FStack_c8;
  FString FStack_b8;
  FString FStack_a8;
  FString FStack_98;
  TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>
  *pTStack_88;
  undefined8 uStack_80;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  TSharedPtr<FJsonObject,1> TStack_58;
  
  pFVar7 = (this->UserDefinedChords).Object;
  if (pFVar7 == (FUserDefinedChords *)0x0) {
    return;
  }
  pTVar5 = (pFVar7->Chords).Object;
  iStack_380 = 0;
  uStackX_10 = 0;
  if (pTVar5 != (TMap<FUserDefinedChordKey,FInputChord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUserDefinedChordKey,FInputChord,0>_>
                 *)0x0) {
    puVar1 = &pTVar5->field_0x10;
    FStack_398.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_398.Data.ArrayNum = 0;
    FStack_398.Data.ArrayMax = 0;
    TStack_3d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_3d8.ArrayNum = 0;
    TStack_3d8.ArrayMax = 0;
    iVar10 = *(int *)&pTVar5->field_0x28;
    uStack_37c = 1;
    iStack_36c = 0;
    iStack_368 = iStack_380;
    if (iVar10 != 0) {
      puVar26 = *(uint **)&pTVar5->field_0x20;
      if (*(uint **)&pTVar5->field_0x20 == (uint *)0x0) {
        puVar26 = (uint *)puVar1;
      }
      uStack_37c = *puVar26;
      iStack_368 = 0;
      iStack_380 = 0;
      while (uStack_37c == 0) {
        lVar20 = (longlong)iStack_380;
        iStack_368 = iStack_368 + 0x20;
        iStack_380 = iStack_380 + 1;
        uStack_37c = 1;
        iStack_36c = iVar10;
        if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_380)
        goto LAB_1427820a0;
        uStack_37c = puVar26[lVar20 + 1];
      }
      uStack_37c = -uStack_37c & uStack_37c;
      uVar3 = (ulonglong)uStack_37c * 2 + 1;
      lVar20 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      iStackX_18 = (int)lVar20;
      iStack_36c = iStackX_18 + -1 + iStack_368;
      if (iVar10 < iStack_36c) {
        iStack_36c = iVar10;
      }
    }
LAB_1427820a0:
    uVar27 = *(uint *)&pTVar5->field_0x28;
    bVar19 = (byte)uVar27 & 0x1f;
    uStack_3b4 = 1 << bVar19;
    iStack_360 = *(int *)&pTVar5->field_0x8 - *(int *)&pTVar5->field_0x34;
    iVar28 = (int)uVar27 >> 5;
    uVar23 = uVar27 & 0xffffffe0;
    uVar22 = -1 << bVar19;
    uStack_370 = 0xffffffff;
    TStack_2d0._padding_ = CONCAT44(uStack_37c,iStack_380);
    TStack_2d0.CurrentBitIndex = iStack_36c;
    TStack_2d0.UnvisitedBitMask = 0xffffffff;
    TStack_2d0._28_4_ = iStack_36c;
    TStack_2d0.BaseBitIndex = iStack_368;
    uStack_2b0 = CONCAT44(uStack_35c,iStack_360);
    iStack_3b8 = iVar28;
    pTStack_3b0 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    uStack_3a8 = uVar22;
    uStack_3a4 = uVar27;
    uStack_3a0 = uVar23;
    pTStack_388 = pTVar5;
    puStack_378 = puVar1;
    iStack_364 = iStack_36c;
    pTStack_2d8 = pTVar5;
    TStack_2d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar27 < 0) || (iVar10 < (int)uVar27)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar4 = *(uint *)&pTVar5->field_0x28;
    if (uVar27 != uVar4) {
      puVar25 = *(undefined1 **)&pTVar5->field_0x20;
      if (*(undefined1 **)&pTVar5->field_0x20 == (undefined1 *)0x0) {
        puVar25 = puVar1;
      }
      uVar22 = uVar22 & *(uint *)(puVar25 + (longlong)iVar28 * 4);
      while (uVar22 == 0) {
        uStack_3a0 = uVar23 + 0x20;
        iStack_3b8 = iVar28 + 1;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_3b8)
        goto LAB_1427821dd;
        uVar22 = *(uint *)(puVar25 + (longlong)iVar28 * 4 + 4);
        uStack_3a8 = 0xffffffff;
        iVar28 = iStack_3b8;
        uVar23 = uStack_3a0;
      }
      uStack_3b4 = -uVar22 & uVar22;
      uVar3 = (ulonglong)uStack_3b4 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      iStackX_20 = (int)lVar20;
      uStack_3a4 = iStackX_20 + -1 + uVar23;
      if ((int)uVar4 < (int)uStack_3a4) {
LAB_1427821dd:
        uStack_3a4 = uVar4;
      }
    }
    uStack_f0 = CONCAT44(uStack_3b4,iStack_3b8);
    uStack_e0 = CONCAT44(uStack_3a4,uStack_3a8);
    uStack_d8 = CONCAT44(uStack_39c,uStack_3a0);
    iStack_d0 = *(int *)&pTVar5->field_0x8 - *(int *)&pTVar5->field_0x34;
    pTStack_e8 = pTStack_3b0;
    uStack_60 = CONCAT44(uStack_cc,iStack_d0);
    pTStack_78 = pTStack_3b0;
    pTStack_f8 = pTVar5;
    pTStack_88 = pTVar5;
    uStack_80 = uStack_f0;
    uStack_70 = uStack_e0;
    uStack_68 = uStack_d8;
    while( true ) {
      pTVar5 = pTStack_2d8;
      if (*(int *)&pTStack_2d8->field_0x8 - *(int *)&pTStack_2d8->field_0x34 != (int)uStack_2b0) {
        auStackX_8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FUserDefinedChordKey,FInputChord>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStackX_8);
      }
      if (((TStack_2d0.CurrentBitIndex == uStack_70._4_4_) && (TStack_2d0.Array == pTStack_78)) &&
         (pTVar5 == pTStack_88)) break;
      this_02 = (FName *)((longlong)TStack_2d0.CurrentBitIndex * 0x40 + *(longlong *)pTVar5);
      if (*(char *)((longlong)&this_02[2].ComparisonIndex.Value + 1) == '\0') {
        pFVar11 = ::operator_new(0x20);
        if (pFVar11 == (FJsonValueObject *)0x0) {
          TStack_330.Object = (FJsonValueObject *)0x0;
        }
        else {
          pFVar12 = ::operator_new(0x50);
          TStack_338.Object = (FJsonObject *)0x0;
          if (pFVar12 != (FJsonObject *)0x0) {
            *(undefined8 *)&pFVar12->Values = 0;
            *(undefined8 *)&(pFVar12->Values).field_0x8 = 0;
            *(undefined8 *)&(pFVar12->Values).field_0x20 = 0;
            *(undefined4 *)&(pFVar12->Values).field_0x28 = 0;
            *(undefined4 *)&(pFVar12->Values).field_0x2c = 0x80;
            *(undefined4 *)&(pFVar12->Values).field_0x30 = 0xffffffff;
            *(undefined4 *)&(pFVar12->Values).field_0x34 = 0;
            *(undefined8 *)&(pFVar12->Values).field_0x40 = 0;
            *(undefined4 *)&(pFVar12->Values).field_0x48 = 0;
            TStack_338.Object = pFVar12;
          }
          pTVar13 = TSharedPtr<FJsonObject,1>::TSharedPtr<FJsonObject,1><FJsonObject>
                              (&TStack_58,&TStack_338);
          TStack_330.Object = FJsonValueObject::FJsonValueObject(pFVar11,pTVar13);
        }
        pTVar24 = (TJsonValueString<wchar_t> *)0x0;
        TSharedPtr<FJsonValueObject,1>::TSharedPtr<FJsonValueObject,1><FJsonValueObject>
                  (&TStack_2e8,&TStack_330);
        pFVar11 = TStack_2e8.Object;
        if ((TStack_2e8.Object == (FJsonValueObject *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        puVar14 = (undefined8 *)(**(code **)pFVar11->_padding_)(pFVar11);
        pTVar6 = (TReferenceControllerBase<1> *)puVar14[1];
        this_00 = (TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
                   *)*puVar14;
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((this_00 ==
             (TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
              *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pTVar15 = ::operator_new(0x20);
        pTVar17 = pTVar24;
        uVar27 = uStackX_10;
        if (pTVar15 != (TJsonValueString<wchar_t> *)0x0) {
          uVar27 = uStackX_10 | 1;
          uStackX_10 = uVar27;
          pFVar16 = ::FName::ToString(this_02,&FStack_b8);
          FJsonValue::FJsonValue((FJsonValue *)pTVar15);
          pTVar15->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
          (pTVar15->Value).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pTVar15->Value).Data.AllocatorInstance.Data = (pFVar16->Data).AllocatorInstance.Data;
          (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pTVar15->Value).Data.ArrayNum = (pFVar16->Data).ArrayNum;
          (pTVar15->Value).Data.ArrayMax = (pFVar16->Data).ArrayMax;
          (pFVar16->Data).ArrayNum = 0;
          (pFVar16->Data).ArrayMax = 0;
          *(EJson *)&pTVar15->_padding_ = String;
          pTVar17 = pTVar15;
        }
        TStack_328.Object = pTVar17;
        TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
                  (&TStack_108,&TStack_328);
        ::FString::FString(&FStack_118,L"BindingContext");
        pFStack_128 = &FStack_118;
        pTStack_120 = &TStack_108;
        TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&>_>
                  (this_00,(TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&> *)auStack_358,
                   (bool *)&pFStack_128);
        if (FStack_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_118.Data.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (TStack_108.SharedReferenceCount.ReferenceController);
        if (((uVar27 & 1) != 0) &&
           (uVar27 = uVar27 & 0xfffffffe, uStackX_10 = uVar27,
           FStack_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(FStack_b8.Data.AllocatorInstance.Data);
        }
        if ((this_00 ==
             (TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
              *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pTVar15 = ::operator_new(0x20);
        pTVar17 = pTVar24;
        if (pTVar15 != (TJsonValueString<wchar_t> *)0x0) {
          uVar27 = uVar27 | 2;
          uStackX_10 = uVar27;
          pFVar16 = ::FName::ToString(this_02 + 1,&FStack_a8);
          FJsonValue::FJsonValue((FJsonValue *)pTVar15);
          pTVar15->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
          (pTVar15->Value).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pTVar15->Value).Data.AllocatorInstance.Data = (pFVar16->Data).AllocatorInstance.Data;
          (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pTVar15->Value).Data.ArrayNum = (pFVar16->Data).ArrayNum;
          (pTVar15->Value).Data.ArrayMax = (pFVar16->Data).ArrayMax;
          (pFVar16->Data).ArrayNum = 0;
          (pFVar16->Data).ArrayMax = 0;
          *(EJson *)&pTVar15->_padding_ = String;
          pTVar17 = pTVar15;
        }
        TStack_320.Object = pTVar17;
        TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
                  (&TStack_288,&TStack_320);
        ::FString::FString(&FStack_298,L"CommandName");
        pFStack_2a8 = &FStack_298;
        pTStack_2a0 = &TStack_288;
        TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&>_>
                  (this_00,(TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&> *)
                           (auStack_358 + 4),(bool *)&pFStack_2a8);
        if (FStack_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_298.Data.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (TStack_288.SharedReferenceCount.ReferenceController);
        if (((uVar27 & 2) != 0) &&
           (uVar27 = uVar27 & 0xfffffffd, uStackX_10 = uVar27,
           FStack_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(FStack_a8.Data.AllocatorInstance.Data);
        }
        if ((this_00 ==
             (TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
              *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        this_01 = ::operator_new(0x18);
        pTVar17 = pTVar24;
        if (this_01 != (FJsonValueNumber *)0x0) {
          pTVar17 = (TJsonValueString<wchar_t> *)
                    FJsonValueNumber::FJsonValueNumber
                              (this_01,(double)(byte)this_02[2].ComparisonIndex.Value);
        }
        TStack_318.Object = (FJsonValueNumber *)pTVar17;
        TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><FJsonValueNumber>
                  (&TStack_258,&TStack_318);
        ::FString::FString(&FStack_268,L"ChordIndex");
        pFStack_278 = &FStack_268;
        pTStack_270 = &TStack_258;
        TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&>_>
                  (this_00,(TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&> *)auStack_350,
                   (bool *)&pFStack_278);
        if (FStack_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_268.Data.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (TStack_258.SharedReferenceCount.ReferenceController);
        if ((this_00 ==
             (TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
              *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar18 = ::operator_new(0x18);
        pFVar2 = this_02 + 6;
        pTVar17 = pTVar24;
        if (pFVar18 != (FJsonValueBoolean *)0x0) {
          pTVar17 = (TJsonValueString<wchar_t> *)
                    FJsonValueBoolean::FJsonValueBoolean
                              (pFVar18,(bool)((byte)((pFVar2->ComparisonIndex).Value >> 1) & 1));
        }
        TStack_310.Object = (FJsonValueBoolean *)pTVar17;
        TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><FJsonValueBoolean>
                  (&TStack_228,&TStack_310);
        ::FString::FString(&FStack_238,L"Control");
        pFStack_248 = &FStack_238;
        pTStack_240 = &TStack_228;
        TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&>_>
                  (this_00,(TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&> *)
                           (auStack_350 + 4),(bool *)&pFStack_248);
        if (FStack_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_238.Data.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (TStack_228.SharedReferenceCount.ReferenceController);
        if ((this_00 ==
             (TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
              *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar18 = ::operator_new(0x18);
        pTVar17 = pTVar24;
        if (pFVar18 != (FJsonValueBoolean *)0x0) {
          pTVar17 = (TJsonValueString<wchar_t> *)
                    FJsonValueBoolean::FJsonValueBoolean
                              (pFVar18,(bool)((byte)((pFVar2->ComparisonIndex).Value >> 2) & 1));
        }
        TStack_308.Object = (FJsonValueBoolean *)pTVar17;
        TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><FJsonValueBoolean>
                  (&TStack_1f8,&TStack_308);
        ::FString::FString(&FStack_208,L"Alt");
        pFStack_218 = &FStack_208;
        pTStack_210 = &TStack_1f8;
        TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&>_>
                  (this_00,(TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&> *)auStack_348,
                   (bool *)&pFStack_218);
        if (FStack_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_208.Data.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (TStack_1f8.SharedReferenceCount.ReferenceController);
        if ((this_00 ==
             (TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
              *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar18 = ::operator_new(0x18);
        pTVar17 = pTVar24;
        if (pFVar18 != (FJsonValueBoolean *)0x0) {
          pTVar17 = (TJsonValueString<wchar_t> *)
                    FJsonValueBoolean::FJsonValueBoolean
                              (pFVar18,(bool)((byte)(pFVar2->ComparisonIndex).Value & 1));
        }
        TStack_300.Object = (FJsonValueBoolean *)pTVar17;
        TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><FJsonValueBoolean>
                  (&TStack_1c8,&TStack_300);
        ::FString::FString(&FStack_1d8,L"Shift");
        pFStack_1e8 = &FStack_1d8;
        pTStack_1e0 = &TStack_1c8;
        TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&>_>
                  (this_00,(TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&> *)
                           (auStack_348 + 4),(bool *)&pFStack_1e8);
        if (FStack_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_1d8.Data.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (TStack_1c8.SharedReferenceCount.ReferenceController);
        if ((this_00 ==
             (TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
              *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar18 = ::operator_new(0x18);
        pTVar17 = pTVar24;
        if (pFVar18 != (FJsonValueBoolean *)0x0) {
          pTVar17 = (TJsonValueString<wchar_t> *)
                    FJsonValueBoolean::FJsonValueBoolean
                              (pFVar18,(bool)((byte)((pFVar2->ComparisonIndex).Value >> 3) & 1));
        }
        TStack_2f8.Object = (FJsonValueBoolean *)pTVar17;
        TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><FJsonValueBoolean>
                  (&TStack_198,&TStack_2f8);
        ::FString::FString(&FStack_1a8,L"Command");
        pFStack_1b8 = &FStack_1a8;
        pTStack_1b0 = &TStack_198;
        TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&>_>
                  (this_00,(TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&> *)auStack_340,
                   (bool *)&pFStack_1b8);
        if (FStack_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_1a8.Data.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (TStack_198.SharedReferenceCount.ReferenceController);
        if ((this_00 ==
             (TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
              *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pTVar17 = ::operator_new(0x20);
        if (pTVar17 != (TJsonValueString<wchar_t> *)0x0) {
          uVar27 = uVar27 | 4;
          uStackX_10 = uVar27;
          pFVar16 = FKey::ToString((FKey *)(this_02 + 3),&FStack_98);
          FJsonValue::FJsonValue((FJsonValue *)pTVar17);
          pTVar17->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
          (pTVar17->Value).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pTVar17->Value).Data.AllocatorInstance.Data = (pFVar16->Data).AllocatorInstance.Data;
          (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pTVar17->Value).Data.ArrayNum = (pFVar16->Data).ArrayNum;
          (pTVar17->Value).Data.ArrayMax = (pFVar16->Data).ArrayMax;
          (pFVar16->Data).ArrayNum = 0;
          (pFVar16->Data).ArrayMax = 0;
          *(undefined4 *)&pTVar17->_padding_ = 2;
          pTVar24 = pTVar17;
        }
        TStack_2f0.Object = pTVar24;
        TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
                  (&TStack_168,&TStack_2f0);
        ::FString::FString(&FStack_178,L"Key");
        pFStack_188 = &FStack_178;
        pTStack_180 = &TStack_168;
        TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&>_>
                  (this_00,(TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_&&> *)
                           (auStack_340 + 4),(bool *)&pFStack_188);
        if (FStack_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_178.Data.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (TStack_168.SharedReferenceCount.ReferenceController);
        if (((uVar27 & 4) != 0) &&
           (uStackX_10 = uVar27 & 0xfffffffb,
           FStack_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(FStack_98.Data.AllocatorInstance.Data);
        }
        TJsonWriterFactory<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Create
                  (&TStack_138,&FStack_398,0);
        if ((this_00 ==
             (TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
              *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x408,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((this_00 ==
             (TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
              *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x25d,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
        }
        TStack_158.Object = (FJsonObject *)this_00;
        TStack_158.SharedReferenceCount.ReferenceController = pTVar6;
        MakeShared<FJsonSerializerPolicy_JsonObject::FElement,1,TSharedPtr<FJsonObject,1>_const_&>
                  (&TStack_148,&TStack_158);
        TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
        Serialize<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>(&TStack_148,TStack_138.Object,true);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (TStack_148.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
        pFVar16 = FRemoteConfig::ReplaceIniCharWithSpecialChar(&FStack_c8,&FStack_398);
        ::FString::ReplaceCharWithEscapedCharInline
                  (pFVar16,(TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0);
        FStack_3c8.Data = (pFVar16->Data).AllocatorInstance.Data;
        (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iStack_3c0 = (pFVar16->Data).ArrayNum;
        iStack_3bc = (pFVar16->Data).ArrayMax;
        (pFVar16->Data).ArrayNum = 0;
        (pFVar16->Data).ArrayMax = 0;
        if (FStack_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_c8.Data.AllocatorInstance.Data);
        }
        if (((TStack_3d8.AllocatorInstance.Data <= (FScriptContainerElement *)&FStack_3c8) &&
            ((FScriptContainerElement *)&FStack_3c8 <
             TStack_3d8.AllocatorInstance.Data + (longlong)TStack_3d8.ArrayMax * 0x10)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar10 = TStack_3d8.ArrayNum;
        if (TStack_3d8.ArrayNum == TStack_3d8.ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&TStack_3d8.AllocatorInstance,&TStack_3d8.ArrayMax);
        }
        _Src.Data = FStack_3c8.Data;
        pFVar21 = TStack_3d8.AllocatorInstance.Data + (longlong)iVar10 * 0x10;
        TStack_3d8.ArrayNum = iVar10 + 1;
        *(FScriptContainerElement **)pFVar21 = (FScriptContainerElement *)0x0;
        lVar20 = (longlong)iStack_3c0;
        *(int *)(pFVar21 + 8) = iStack_3c0;
        if (iStack_3c0 == 0) {
          *(int *)(pFVar21 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iStack_3c0,0,(ForAnyElementType *)pFVar21,iStack_3c0,(int *)(pFVar21 + 0xc)
                    );
                    /* WARNING: Load size is inaccurate */
          memcpy(*pFVar21,_Src.Data,lVar20 * 2);
        }
        if (FStack_3c8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_3c8.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (TStack_138.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (TStack_2e8.SharedReferenceCount.ReferenceController);
      }
      TStack_2d0.UnvisitedBitMask = TStack_2d0.UnvisitedBitMask & ~TStack_2d0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2d0);
    }
    FConfigCacheIni::SetArray
              (GConfig,L"UserDefinedChords",L"UserDefinedChords",&TStack_3d8,&GEditorKeyBindingsIni)
    ;
    FConfigCacheIni::RemoveKey
              (GConfig,L"UserDefinedGestures",L"UserDefinedGestures",&GEditorKeyBindingsIni);
    FConfigCacheIni::RemoveKey(GConfig,L"UserDefinedChords",L"Content",&GEditorKeyBindingsIni);
    FConfigCacheIni::RemoveKey(GConfig,L"UserDefinedChords",L"Content",&GEditorKeyBindingsIni);
    DestructItems<FString,int>((FString *)TStack_3d8.AllocatorInstance.Data,TStack_3d8.ArrayNum);
    if (TStack_3d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_3d8.AllocatorInstance.Data);
    }
    if (FStack_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_398.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// UnregisterCommandFilterOwner @ 1427901a0

void __thiscall
FInputBindingManager::UnregisterCommandFilterOwner(FInputBindingManager *this,FName param_1)

{
  FName *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  FName FVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  longlong lVar9;
  TSet<TTuple<FName,FInputBindingManager::FCommandFilterOwners>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FCommandFilterOwners,0>,FDefaultSetAllocator>
  *pTVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  FName local_res10;
  undefined4 local_res18;
  longlong local_res20;
  undefined1 auStack_1a0 [16];
  uint uStack_190;
  uint uStack_18c;
  longlong local_188;
  TSet<TTuple<FName,FInputBindingManager::FCommandFilterOwners>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FCommandFilterOwners,0>,FDefaultSetAllocator>
  *pTStack_180;
  TSet<TTuple<FName,FInputBindingManager::FCommandFilterOwners>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FCommandFilterOwners,0>,FDefaultSetAllocator>
  *local_178;
  undefined2 local_170;
  longlong *local_168;
  undefined1 auStack_160 [16];
  uint uStack_150;
  uint uStack_14c;
  longlong local_148;
  TSet<TTuple<FName,FInputBindingManager::FCommandFilterOwners>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FCommandFilterOwners,0>,FDefaultSetAllocator>
  *pTStack_140;
  TSet<TTuple<FName,FInputBindingManager::FCommandFilterOwners>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FCommandFilterOwners,0>,FDefaultSetAllocator>
  *local_138;
  undefined2 local_130;
  longlong *local_128;
  undefined1 auStack_120 [16];
  uint uStack_110;
  uint uStack_10c;
  longlong local_108;
  TSet<TTuple<FName,FInputBindingManager::FCommandFilterForContext>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FCommandFilterForContext,0>,FDefaultSetAllocator>
  *pTStack_100;
  TSet<TTuple<FName,FInputBindingManager::FCommandFilterForContext>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FCommandFilterForContext,0>,FDefaultSetAllocator>
  *local_f8;
  char local_f0;
  char cStack_ef;
  TSet<TTuple<FName,FInputBindingManager::FCommandFilterOwners>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FCommandFilterOwners,0>,FDefaultSetAllocator>
  *local_e8;
  undefined1 local_e0 [32];
  longlong local_c0;
  TSet<TTuple<FName,FInputBindingManager::FCommandFilterForContext>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FCommandFilterForContext,0>,FDefaultSetAllocator>
  *pTStack_b8;
  undefined1 local_b0 [32];
  longlong local_90;
  TSet<TTuple<FName,FInputBindingManager::FCommandFilterOwners>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FCommandFilterOwners,0>,FDefaultSetAllocator>
  *pTStack_88;
  undefined1 local_80 [32];
  longlong local_60;
  TSet<TTuple<FName,FInputBindingManager::FCommandFilterOwners>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FCommandFilterOwners,0>,FDefaultSetAllocator>
  *pTStack_58;
  
  local_res10 = param_1;
  TSet<TTuple<FName,FInputBindingManager::FCommandFilterForContext>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FCommandFilterForContext,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_e0,
             (TSet<TTuple<FName,FInputBindingManager::FCommandFilterForContext>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FCommandFilterForContext,0>,FDefaultSetAllocator>
              *)&this->CommandFiltersByContext);
  local_f0 = '\0';
  cStack_ef = '\0';
  stack0xfffffffffffffee8 = local_e0._16_16_;
  local_128 = (longlong *)local_e0._0_8_;
  auStack_120._0_8_ = local_e0._8_8_;
  local_108 = local_c0;
  pTStack_100 = pTStack_b8;
  uVar7 = local_e0._24_8_ >> 0x20;
  local_f8 = (TSet<TTuple<FName,FInputBindingManager::FCommandFilterForContext>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FCommandFilterForContext,0>,FDefaultSetAllocator>
              *)&this->CommandFiltersByContext;
  if (local_e0._28_4_ < *(int *)(local_e0._16_8_ + 0x18)) {
    do {
      local_res20 = *local_128 + (longlong)(int)uVar7 * 0xb0;
      pTVar10 = (TSet<TTuple<FName,FInputBindingManager::FCommandFilterOwners>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FCommandFilterOwners,0>,FDefaultSetAllocator>
                 *)(local_res20 + 8);
      local_e8 = pTVar10;
      TSet<TTuple<FName,FInputBindingManager::FCommandFilterOwners>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FCommandFilterOwners,0>,FDefaultSetAllocator>
      ::TIterator::TIterator((TIterator *)local_b0,pTVar10);
      uVar3 = local_b0._0_8_;
      local_170 = 0;
      stack0xfffffffffffffe68 = local_b0._16_16_;
      auStack_1a0._0_8_ = local_b0._8_8_;
      local_188 = local_90;
      pTStack_180 = pTStack_88;
      uVar7 = local_b0._24_8_ >> 0x20;
      local_178 = pTVar10;
      if (local_b0._28_4_ < *(int *)(local_b0._16_8_ + 0x18)) {
        do {
          puVar8 = (ulonglong *)(*(longlong *)uVar3 + 8 + (longlong)(int)uVar7 * 0x20);
          if ((((FName *)*puVar8 <= &local_res10) &&
              (&local_res10 < (FName *)*puVar8 + *(int *)((longlong)puVar8 + 0xc))) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar5 = (int)puVar8[1];
          if (iVar5 == 0) {
LAB_1427903ee:
            TSet<TTuple<FName,FInputBindingManager::FCommandFilterOwners>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FCommandFilterOwners,0>,FDefaultSetAllocator>
            ::RemoveByIndex(pTStack_180,uStack_18c);
            local_170 = CONCAT11(local_170._1_1_,1);
          }
          else {
            pFVar1 = (FName *)*puVar8;
            iVar14 = 0;
            lVar9 = 0;
            bVar4 = *pFVar1 != local_res10;
            FVar6 = local_res10;
            iVar11 = 0;
            do {
              iVar12 = iVar11;
              do {
                lVar9 = lVar9 + 1;
                iVar12 = iVar12 + 1;
                if (iVar5 <= lVar9) break;
              } while (bVar4 == (pFVar1[lVar9] != FVar6));
              if (bVar4 != false) {
                if (iVar14 != iVar11) {
                  memmove(pFVar1 + iVar14,pFVar1 + iVar11,(longlong)(iVar12 - iVar11) << 3);
                  FVar6 = local_res10;
                }
                iVar14 = iVar14 + (iVar12 - iVar11);
              }
              bVar4 = (bool)(bVar4 ^ 1);
              iVar11 = iVar12;
            } while (lVar9 < iVar5);
            *(int *)(puVar8 + 1) = iVar14;
            if (iVar14 == 0) goto LAB_1427903ee;
          }
          uStack_190 = uStack_190 & ~auStack_1a0._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_1a0);
          uVar7 = (ulonglong)uStack_18c;
        } while ((int)uStack_18c < *(int *)(auStack_1a0._8_8_ + 0x18));
        if (((char)local_170 != '\0') && (local_170._1_1_ != '\0')) {
          uVar13 = *(int *)&(local_178->Elements).field_0x8 -
                   *(int *)&(local_178->Elements).field_0x34;
          if (uVar13 < 4) {
            iVar5 = 1;
          }
          else {
            uVar7 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
            lVar9 = 0x3f;
            if (uVar7 != 0) {
              for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
              }
            }
            iVar5 = 1 << ((byte)lVar9 & 0x1f);
          }
          if (((0 < (int)uVar13) && (local_178->HashSize < iVar5)) || (iVar5 < local_178->HashSize))
          {
            local_178->HashSize = iVar5;
            TSet<TTuple<FName,FInputBindingManager::FCommandFilterOwners>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FCommandFilterOwners,0>,FDefaultSetAllocator>
            ::Rehash(local_178);
          }
        }
      }
      pTVar10 = (TSet<TTuple<FName,FInputBindingManager::FCommandFilterOwners>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FCommandFilterOwners,0>,FDefaultSetAllocator>
                 *)(local_res20 + 0x58);
      TSet<TTuple<FName,FInputBindingManager::FCommandFilterOwners>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FCommandFilterOwners,0>,FDefaultSetAllocator>
      ::TIterator::TIterator((TIterator *)local_80,pTVar10);
      local_130 = 0;
      stack0xfffffffffffffea8 = local_80._16_16_;
      local_168 = (longlong *)local_80._0_8_;
      auStack_160._0_8_ = local_80._8_8_;
      local_148 = local_60;
      pTStack_140 = pTStack_58;
      uVar7 = local_80._24_8_ >> 0x20;
      local_138 = pTVar10;
      if (local_80._28_4_ < *(int *)(local_80._16_8_ + 0x18)) {
        do {
          puVar8 = (ulonglong *)(*local_168 + 8 + (longlong)(int)uVar7 * 0x20);
          if ((((FName *)*puVar8 <= &local_res10) &&
              (&local_res10 < (FName *)*puVar8 + *(int *)((longlong)puVar8 + 0xc))) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar5 = (int)puVar8[1];
          if (iVar5 == 0) {
LAB_142790611:
            TSet<TTuple<FName,FInputBindingManager::FCommandFilterOwners>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FCommandFilterOwners,0>,FDefaultSetAllocator>
            ::RemoveByIndex(pTStack_140,uStack_14c);
            local_130 = CONCAT11(local_130._1_1_,1);
          }
          else {
            pFVar1 = (FName *)*puVar8;
            iVar14 = 0;
            lVar9 = 0;
            bVar4 = *pFVar1 != local_res10;
            FVar6 = local_res10;
            iVar11 = 0;
            do {
              iVar12 = iVar11;
              do {
                lVar9 = lVar9 + 1;
                iVar12 = iVar12 + 1;
                if (iVar5 <= lVar9) break;
              } while (bVar4 == (pFVar1[lVar9] != FVar6));
              if (bVar4 != false) {
                if (iVar14 != iVar11) {
                  memmove(pFVar1 + iVar14,pFVar1 + iVar11,(longlong)(iVar12 - iVar11) << 3);
                  FVar6 = local_res10;
                }
                iVar14 = iVar14 + (iVar12 - iVar11);
              }
              bVar4 = (bool)(bVar4 ^ 1);
              iVar11 = iVar12;
            } while (lVar9 < iVar5);
            *(int *)(puVar8 + 1) = iVar14;
            if (iVar14 == 0) goto LAB_142790611;
          }
          uStack_150 = uStack_150 & ~auStack_160._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_160);
          uVar7 = (ulonglong)uStack_14c;
        } while ((int)uStack_14c < *(int *)(auStack_160._8_8_ + 0x18));
        if (((char)local_130 != '\0') && (local_130._1_1_ != '\0')) {
          uVar13 = *(int *)&(local_138->Elements).field_0x8 -
                   *(int *)&(local_138->Elements).field_0x34;
          if (uVar13 < 4) {
            iVar5 = 1;
          }
          else {
            uVar7 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
            lVar9 = 0x3f;
            if (uVar7 != 0) {
              for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
              }
            }
            local_res18 = (undefined4)lVar9;
            iVar5 = 1 << ((byte)lVar9 & 0x1f);
          }
          if (((0 < (int)uVar13) && (local_138->HashSize < iVar5)) || (iVar5 < local_138->HashSize))
          {
            local_138->HashSize = iVar5;
            TSet<TTuple<FName,FInputBindingManager::FCommandFilterOwners>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FCommandFilterOwners,0>,FDefaultSetAllocator>
            ::Rehash(local_138);
          }
        }
      }
      if ((*(int *)&(local_e8->Elements).field_0x8 == *(int *)(local_res20 + 0x3c)) &&
         (*(int *)(local_res20 + 0x60) == *(int *)(local_res20 + 0x8c))) {
        TSet<TTuple<FName,FInputBindingManager::FCommandFilterForContext>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FCommandFilterForContext,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_100,uStack_10c);
        local_f0 = '\x01';
      }
      uStack_110 = uStack_110 & ~auStack_120._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_120);
      uVar7 = (ulonglong)uStack_10c;
    } while ((int)uStack_10c < *(int *)(auStack_120._8_8_ + 0x18));
    if ((local_f0 != '\0') && (cStack_ef != '\0')) {
      uVar13 = *(int *)&(local_f8->Elements).field_0x8 - *(int *)&(local_f8->Elements).field_0x34;
      if (uVar13 < 4) {
        iVar5 = 1;
      }
      else {
        uVar7 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
        lVar9 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar9 & 0x1f);
      }
      if (((0 < (int)uVar13) && (local_f8->HashSize < iVar5)) || (iVar5 < local_f8->HashSize)) {
        local_f8->HashSize = iVar5;
        TSet<TTuple<FName,FInputBindingManager::FCommandFilterForContext>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FCommandFilterForContext,0>,FDefaultSetAllocator>
        ::Rehash(local_f8);
      }
    }
  }
  return;
}

// UnregisterCommandList @ 1427907e0

bool __thiscall
FInputBindingManager::UnregisterCommandList
          (FInputBindingManager *this,FName param_1,TSharedRef<FUICommandList,1> *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  TSharedRef<FUICommandList,1> local_18;
  
  uVar2 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->ContextMap).field_0x8 != *(int *)&(this->ContextMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->ContextMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->ContextMap).field_0x38;
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->ContextMap).field_0x48 - 1U & param_1.Number + uVar2)
                              * 4);
    if (iVar3 != -1) {
      do {
        if (*(FName *)((longlong)iVar3 * 0x80 + *(longlong *)&this->ContextMap) == param_1) {
          bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                             &this->OnUnregisterCommandList);
          if (bVar1) {
            local_18.Object = param_2->Object;
            local_18.SharedReferenceCount.ReferenceController =
                 (param_2->SharedReferenceCount).ReferenceController;
            if (local_18.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                   1);
              UNLOCK();
            }
            TMulticastDelegate<void___cdecl(FName,TSharedRef<FUICommandList,1>),FDefaultDelegateUserPolicy>
            ::Broadcast(&this->OnUnregisterCommandList,param_1,&local_18);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((param_2->SharedReferenceCount).ReferenceController);
            return true;
          }
          break;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x80 + 0x78 + *(longlong *)&this->ContextMap);
      } while (iVar3 != -1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return false;
}

// operator() @ 150492e70

bool __thiscall `FInputBindingManager::CreateInputCommand'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2767238065784095187>);
  if (bVar4) {
    local_res10 = *(FName *)(**(longlong **)((longlong)this + 8) + 0x10);
    ::FName::ToString(&local_res10,&local_18);
    ::FName::ToString((FName *)(**(longlong **)this + 0x68),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2767238065784095187>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150492f25;
    }
  }
  bVar4 = false;
LAB_150492f25:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

