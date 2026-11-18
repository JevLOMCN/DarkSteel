// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 26

// StaticStruct @ 14e11e5a0

UScriptStruct * __cdecl FOptimusCompoundAction::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusCompoundAction.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusCompoundAction.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusCompoundAction,(UObject *)pUVar1,
                         L"OptimusCompoundAction");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusCompoundAction.OuterSingleton;
}

// AddSubAction<FOptimusComponentBindingAction_AddBinding,UOptimusComponentSource_*,FName_&> @ 14e121de0

TWeakPtr<FOptimusComponentBindingAction_AddBinding,1> * __thiscall
FOptimusCompoundAction::
AddSubAction<FOptimusComponentBindingAction_AddBinding,UOptimusComponentSource_*,FName_&>
          (FOptimusCompoundAction *this,
          TWeakPtr<FOptimusComponentBindingAction_AddBinding,1> *__return_storage_ptr__,
          UOptimusComponentSource **param_1,FName *param_2)

{
  int *piVar1;
  code *pcVar2;
  FOptimusComponentBindingAction_AddBinding *pFVar3;
  bool bVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWeakPtr<FOptimusComponentBindingAction_AddBinding,1> *pTVar7;
  FScriptContainerElement *pFVar8;
  TArray<TSharedPtr<FOptimusAction,1>,TSizedDefaultAllocator<32>_> *pTVar9;
  FOptimusComponentBindingAction_AddBinding *local_28;
  TReferenceControllerBase<1> *local_20;
  
  pTVar6 = ::operator_new(0x40);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_28 = (FOptimusComponentBindingAction_AddBinding *)&DAT_00000010;
    local_20 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFOptimusComponentBindingAction_AddBinding___00_SharedPointerInternals__6B_
    ;
    FOptimusComponentBindingAction_AddBinding::FOptimusComponentBindingAction_AddBinding
              ((FOptimusComponentBindingAction_AddBinding *)(pTVar6 + 1),*param_1,*param_2);
    if ((FOptimusComponentBindingAction_AddBinding *)(pTVar6 + 1) ==
        (FOptimusComponentBindingAction_AddBinding *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TWeakPtr<FOptimusComponentBindingAction_AddBinding,1> *)(*pcVar2)();
        return pTVar7;
      }
    }
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    local_28 = (FOptimusComponentBindingAction_AddBinding *)(pTVar6 + 1);
    local_20 = pTVar6;
  }
  pTVar6 = local_20;
  pFVar3 = local_28;
  pTVar9 = &this->SubActions;
  pFVar8 = (pTVar9->AllocatorInstance).Data;
  if ((pFVar8 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 < pFVar8 + (longlong)(this->SubActions).ArrayMax * 0x10))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TWeakPtr<FOptimusComponentBindingAction_AddBinding,1> *)(*pcVar2)();
      return pTVar7;
    }
  }
  iVar5 = (this->SubActions).ArrayNum;
  piVar1 = &(this->SubActions).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar9->AllocatorInstance,piVar1);
    (this->SubActions).ArrayNum = iVar5;
  }
  (this->SubActions).ArrayNum = iVar5 + 1;
  pFVar8 = (pTVar9->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(FOptimusComponentBindingAction_AddBinding **)pFVar8 = local_28;
  *(TReferenceControllerBase<1> **)(pFVar8 + 8) = local_20;
  local_20 = (TReferenceControllerBase<1> *)0x0;
  local_28 = (FOptimusComponentBindingAction_AddBinding *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  __return_storage_ptr__->Object = pFVar3;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// AddSubAction<FOptimusComponentBindingAction_RenameBinding,UOptimusComponentSourceBinding_*_&,FName_&> @ 14e121fb0

TWeakPtr<FOptimusComponentBindingAction_RenameBinding,1> * __thiscall
FOptimusCompoundAction::
AddSubAction<FOptimusComponentBindingAction_RenameBinding,UOptimusComponentSourceBinding_*_&,FName_&>
          (FOptimusCompoundAction *this,
          TWeakPtr<FOptimusComponentBindingAction_RenameBinding,1> *__return_storage_ptr__,
          UOptimusComponentSourceBinding **param_1,FName *param_2)

{
  int *piVar1;
  UOptimusComponentSourceBinding *pUVar2;
  code *pcVar3;
  FNameEntryId FVar4;
  uint uVar5;
  FOptimusComponentBindingAction_RenameBinding *pFVar6;
  bool bVar7;
  int iVar8;
  TReferenceControllerBase<1> *pTVar9;
  TWeakPtr<FOptimusComponentBindingAction_RenameBinding,1> *pTVar10;
  FString *pFVar11;
  FScriptContainerElement *pFVar12;
  wchar_t *pwVar13;
  FOptimusComponentBindingAction_RenameBinding *local_38;
  TReferenceControllerBase<1> *local_30;
  FString local_28;
  
  pTVar9 = ::operator_new(0x38);
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_38 = (FOptimusComponentBindingAction_RenameBinding *)&DAT_00000010;
    local_30 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFOptimusComponentBindingAction_RenameBinding___00_SharedPointerInternals__6B_
    ;
    pUVar2 = *param_1;
    FVar4.Value = (param_2->ComparisonIndex).Value;
    uVar5 = param_2->Number;
    pTVar9[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[2]._padding_ = 0;
    pTVar9[1]._padding_ = (longlong)&___7FOptimusComponentBindingAction_RenameBinding__6B_;
    pTVar9[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[3]._padding_ = 0;
    if (pUVar2 == (UOptimusComponentSourceBinding *)0x0) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2192620421386338154>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusComponentBindingActions.cpp"
                         ,0x96,"InBinding");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        pTVar10 = (TWeakPtr<FOptimusComponentBindingAction_RenameBinding,1> *)(*pcVar3)();
        return pTVar10;
      }
    }
    else {
      pTVar9[3]._padding_ = pUVar2->_padding_;
      pTVar9[2].SharedReferenceCount = (atomic<int>)FVar4.Value;
      pTVar9[2].WeakReferenceCount = (atomic<int>)uVar5;
      pFVar11 = ::FName::ToString((FName *)&pTVar9[2].SharedReferenceCount,&local_28);
      if ((pFVar11->Data).ArrayNum == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      }
      FOptimusAction::SetTitlef<wchar_t_const_*>
                ((FOptimusAction *)(pTVar9 + 1),
                 (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)0x152e04d90,pwVar13);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    if ((FOptimusComponentBindingAction_RenameBinding *)(pTVar9 + 1) ==
        (FOptimusComponentBindingAction_RenameBinding *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        pTVar10 = (TWeakPtr<FOptimusComponentBindingAction_RenameBinding,1> *)(*pcVar3)();
        return pTVar10;
      }
    }
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    local_38 = (FOptimusComponentBindingAction_RenameBinding *)(pTVar9 + 1);
    local_30 = pTVar9;
  }
  pTVar9 = local_30;
  pFVar6 = local_38;
  pFVar12 = (this->SubActions).AllocatorInstance.Data;
  if ((pFVar12 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar12 + (longlong)(this->SubActions).ArrayMax * 0x10)
     ) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TWeakPtr<FOptimusComponentBindingAction_RenameBinding,1> *)(*pcVar3)();
      return pTVar10;
    }
  }
  iVar8 = (this->SubActions).ArrayNum;
  piVar1 = &(this->SubActions).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->SubActions).AllocatorInstance,piVar1);
    (this->SubActions).ArrayNum = iVar8;
  }
  (this->SubActions).ArrayNum = iVar8 + 1;
  pFVar12 = (this->SubActions).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
  *(FOptimusComponentBindingAction_RenameBinding **)pFVar12 = local_38;
  *(TReferenceControllerBase<1> **)(pFVar12 + 8) = local_30;
  local_30 = (TReferenceControllerBase<1> *)0x0;
  local_38 = (FOptimusComponentBindingAction_RenameBinding *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  __return_storage_ptr__->Object = pFVar6;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar9;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// AddSubAction<FOptimusComponentBindingAction_SetComponentSource,UOptimusComponentSourceBinding_*_&,UOptimusComponentSource_const_*_&> @ 14e122220

TWeakPtr<FOptimusComponentBindingAction_SetComponentSource,1> * __thiscall
FOptimusCompoundAction::
AddSubAction<FOptimusComponentBindingAction_SetComponentSource,UOptimusComponentSourceBinding_*_&,UOptimusComponentSource_const_*_&>
          (FOptimusCompoundAction *this,
          TWeakPtr<FOptimusComponentBindingAction_SetComponentSource,1> *__return_storage_ptr__,
          UOptimusComponentSourceBinding **param_1,UOptimusComponentSource **param_2)

{
  int *piVar1;
  code *pcVar2;
  FOptimusComponentBindingAction_SetComponentSource *pFVar3;
  bool bVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWeakPtr<FOptimusComponentBindingAction_SetComponentSource,1> *pTVar7;
  FScriptContainerElement *pFVar8;
  TArray<TSharedPtr<FOptimusAction,1>,TSizedDefaultAllocator<32>_> *pTVar9;
  FOptimusComponentBindingAction_SetComponentSource *local_28;
  TReferenceControllerBase<1> *local_20;
  
  pTVar6 = ::operator_new(0x50);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_28 = (FOptimusComponentBindingAction_SetComponentSource *)&DAT_00000010;
    local_20 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFOptimusComponentBindingAction_SetComponentSource___00_SharedPointerInternals__6B_
    ;
    FOptimusComponentBindingAction_SetComponentSource::
    FOptimusComponentBindingAction_SetComponentSource
              ((FOptimusComponentBindingAction_SetComponentSource *)(pTVar6 + 1),*param_1,*param_2);
    if ((FOptimusComponentBindingAction_SetComponentSource *)(pTVar6 + 1) ==
        (FOptimusComponentBindingAction_SetComponentSource *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TWeakPtr<FOptimusComponentBindingAction_SetComponentSource,1> *)(*pcVar2)();
        return pTVar7;
      }
    }
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    local_28 = (FOptimusComponentBindingAction_SetComponentSource *)(pTVar6 + 1);
    local_20 = pTVar6;
  }
  pTVar6 = local_20;
  pFVar3 = local_28;
  pTVar9 = &this->SubActions;
  pFVar8 = (pTVar9->AllocatorInstance).Data;
  if ((pFVar8 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 < pFVar8 + (longlong)(this->SubActions).ArrayMax * 0x10))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TWeakPtr<FOptimusComponentBindingAction_SetComponentSource,1> *)(*pcVar2)();
      return pTVar7;
    }
  }
  iVar5 = (this->SubActions).ArrayNum;
  piVar1 = &(this->SubActions).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar9->AllocatorInstance,piVar1);
    (this->SubActions).ArrayNum = iVar5;
  }
  (this->SubActions).ArrayNum = iVar5 + 1;
  pFVar8 = (pTVar9->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(FOptimusComponentBindingAction_SetComponentSource **)pFVar8 = local_28;
  *(TReferenceControllerBase<1> **)(pFVar8 + 8) = local_20;
  local_20 = (TReferenceControllerBase<1> *)0x0;
  local_28 = (FOptimusComponentBindingAction_SetComponentSource *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  __return_storage_ptr__->Object = pFVar3;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// AddSubAction<FOptimusNodeAction_RemovePin,UOptimusNodePin_*_&> @ 14e1223f0

TWeakPtr<FOptimusNodeAction_RemovePin,1> * __thiscall
FOptimusCompoundAction::AddSubAction<FOptimusNodeAction_RemovePin,UOptimusNodePin_*_&>
          (FOptimusCompoundAction *this,
          TWeakPtr<FOptimusNodeAction_RemovePin,1> *__return_storage_ptr__,UOptimusNodePin **param_1
          )

{
  int *piVar1;
  code *pcVar2;
  FOptimusNodeAction_RemovePin *pFVar3;
  bool bVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWeakPtr<FOptimusNodeAction_RemovePin,1> *pTVar7;
  FScriptContainerElement *pFVar8;
  FOptimusNodeAction_RemovePin *local_28;
  TReferenceControllerBase<1> *local_20;
  
  pTVar6 = ::operator_new(200);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_28 = (FOptimusNodeAction_RemovePin *)&DAT_00000010;
    local_20 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFOptimusNodeAction_RemovePin___00_SharedPointerInternals__6B_
    ;
    FOptimusNodeAction_AddRemovePin::FOptimusNodeAction_AddRemovePin
              ((FOptimusNodeAction_AddRemovePin *)(pTVar6 + 1),*param_1);
    pTVar6[1]._padding_ = (longlong)&___7FOptimusNodeAction_RemovePin__6B_;
    if ((FOptimusNodeAction_RemovePin *)(pTVar6 + 1) == (FOptimusNodeAction_RemovePin *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TWeakPtr<FOptimusNodeAction_RemovePin,1> *)(*pcVar2)();
        return pTVar7;
      }
    }
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    local_28 = (FOptimusNodeAction_RemovePin *)(pTVar6 + 1);
    local_20 = pTVar6;
  }
  pTVar6 = local_20;
  pFVar3 = local_28;
  pFVar8 = (this->SubActions).AllocatorInstance.Data;
  if ((pFVar8 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 < pFVar8 + (longlong)(this->SubActions).ArrayMax * 0x10))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TWeakPtr<FOptimusNodeAction_RemovePin,1> *)(*pcVar2)();
      return pTVar7;
    }
  }
  iVar5 = (this->SubActions).ArrayNum;
  piVar1 = &(this->SubActions).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->SubActions).AllocatorInstance,piVar1);
    (this->SubActions).ArrayNum = iVar5;
  }
  (this->SubActions).ArrayNum = iVar5 + 1;
  pFVar8 = (this->SubActions).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
  *(FOptimusNodeAction_RemovePin **)pFVar8 = local_28;
  *(TReferenceControllerBase<1> **)(pFVar8 + 8) = local_20;
  local_20 = (TReferenceControllerBase<1> *)0x0;
  local_28 = (FOptimusNodeAction_RemovePin *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  __return_storage_ptr__->Object = pFVar3;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// AddSubAction<FOptimusNodeAction_RenameNode,UOptimusNode_*_&,FText> @ 14e1225c0

TWeakPtr<FOptimusNodeAction_RenameNode,1> * __thiscall
FOptimusCompoundAction::AddSubAction<FOptimusNodeAction_RenameNode,UOptimusNode_*_&,FText>
          (FOptimusCompoundAction *this,
          TWeakPtr<FOptimusNodeAction_RenameNode,1> *__return_storage_ptr__,UOptimusNode **param_1,
          FText *param_2)

{
  int *piVar1;
  code *pcVar2;
  FOptimusNodeAction_RenameNode *pFVar3;
  bool bVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  FText *pFVar7;
  TWeakPtr<FOptimusNodeAction_RenameNode,1> *pTVar8;
  FScriptContainerElement *pFVar9;
  TArray<TSharedPtr<FOptimusAction,1>,TSizedDefaultAllocator<32>_> *pTVar10;
  FOptimusNodeAction_RenameNode *local_38;
  TReferenceControllerBase<1> *local_30;
  FText local_28;
  
  pTVar6 = ::operator_new(0x58);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_38 = (FOptimusNodeAction_RenameNode *)&DAT_00000010;
    local_30 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFOptimusNodeAction_RenameNode___00_SharedPointerInternals__6B_
    ;
    pFVar7 = FText::FText(&local_28,param_2);
    FOptimusNodeAction_RenameNode::FOptimusNodeAction_RenameNode
              ((FOptimusNodeAction_RenameNode *)(pTVar6 + 1),*param_1,pFVar7);
    if ((FOptimusNodeAction_RenameNode *)(pTVar6 + 1) == (FOptimusNodeAction_RenameNode *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TWeakPtr<FOptimusNodeAction_RenameNode,1> *)(*pcVar2)();
        return pTVar8;
      }
    }
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    local_38 = (FOptimusNodeAction_RenameNode *)(pTVar6 + 1);
    local_30 = pTVar6;
  }
  pTVar6 = local_30;
  pFVar3 = local_38;
  pTVar10 = &this->SubActions;
  pFVar9 = (pTVar10->AllocatorInstance).Data;
  if ((pFVar9 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar9 + (longlong)(this->SubActions).ArrayMax * 0x10))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar8 = (TWeakPtr<FOptimusNodeAction_RenameNode,1> *)(*pcVar2)();
      return pTVar8;
    }
  }
  iVar5 = (this->SubActions).ArrayNum;
  piVar1 = &(this->SubActions).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar10->AllocatorInstance,piVar1);
    (this->SubActions).ArrayNum = iVar5;
  }
  (this->SubActions).ArrayNum = iVar5 + 1;
  pFVar9 = (pTVar10->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(FOptimusNodeAction_RenameNode **)pFVar9 = local_38;
  *(TReferenceControllerBase<1> **)(pFVar9 + 8) = local_30;
  local_30 = (TReferenceControllerBase<1> *)0x0;
  local_38 = (FOptimusNodeAction_RenameNode *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  __return_storage_ptr__->Object = pFVar3;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// AddSubAction<FOptimusNodeAction_SetPinDataDomain,UOptimusNodePin_*_&,FOptimusDataDomain_const_&> @ 14e1227a0

TWeakPtr<FOptimusNodeAction_SetPinDataDomain,1> * __thiscall
FOptimusCompoundAction::
AddSubAction<FOptimusNodeAction_SetPinDataDomain,UOptimusNodePin_*_&,FOptimusDataDomain_const_&>
          (FOptimusCompoundAction *this,
          TWeakPtr<FOptimusNodeAction_SetPinDataDomain,1> *__return_storage_ptr__,
          UOptimusNodePin **param_1,FOptimusDataDomain *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TIntrusiveReferenceController<FOptimusNodeAction_SetPinDataDomain,1> *pTVar6;
  TWeakPtr<FOptimusNodeAction_SetPinDataDomain,1> *pTVar7;
  FScriptContainerElement *pFVar8;
  FOptimusNodeAction_SetPinDataDomain *pFVar9;
  FOptimusNodeAction_SetPinDataDomain *local_28;
  TIntrusiveReferenceController<FOptimusNodeAction_SetPinDataDomain,1> *local_20;
  
  pTVar6 = ::operator_new(0xb8);
  if (pTVar6 == (TIntrusiveReferenceController<FOptimusNodeAction_SetPinDataDomain,1> *)0x0) {
    pTVar6 = (TIntrusiveReferenceController<FOptimusNodeAction_SetPinDataDomain,1> *)0x0;
    pFVar9 = (FOptimusNodeAction_SetPinDataDomain *)&DAT_00000010;
  }
  else {
    pTVar6 = SharedPointerInternals::
             TIntrusiveReferenceController<FOptimusNodeAction_SetPinDataDomain,1>::
             TIntrusiveReferenceController<FOptimusNodeAction_SetPinDataDomain,1><UOptimusNodePin_*_&,FOptimusDataDomain_const_&>
                       (pTVar6,param_1,param_2);
    pFVar9 = (FOptimusNodeAction_SetPinDataDomain *)&pTVar6->ObjectStorage;
    if (pFVar9 == (FOptimusNodeAction_SetPinDataDomain *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TWeakPtr<FOptimusNodeAction_SetPinDataDomain,1> *)(*pcVar3)();
        return pTVar7;
      }
    }
    if (pTVar6 != (TIntrusiveReferenceController<FOptimusNodeAction_SetPinDataDomain,1> *)0x0) {
      LOCK();
      *(int *)&pTVar6->_padding_ = (int)pTVar6->_padding_ + 1;
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pTVar6);
      LOCK();
      *(int *)&pTVar6->_padding_ = (int)pTVar6->_padding_ + 1;
      UNLOCK();
      goto LAB_14e122859;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar6);
LAB_14e122859:
  pFVar8 = (this->SubActions).AllocatorInstance.Data;
  local_28 = pFVar9;
  local_20 = pTVar6;
  if ((pFVar8 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 < pFVar8 + (longlong)(this->SubActions).ArrayMax * 0x10))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TWeakPtr<FOptimusNodeAction_SetPinDataDomain,1> *)(*pcVar3)();
      return pTVar7;
    }
  }
  iVar5 = (this->SubActions).ArrayNum;
  piVar1 = &(this->SubActions).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->SubActions).AllocatorInstance,piVar1);
    (this->SubActions).ArrayNum = iVar5;
  }
  (this->SubActions).ArrayNum = iVar5 + 1;
  pFVar8 = (this->SubActions).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
  *(FOptimusNodeAction_SetPinDataDomain **)pFVar8 = local_28;
  *(TIntrusiveReferenceController<FOptimusNodeAction_SetPinDataDomain,1> **)(pFVar8 + 8) = local_20;
  local_20 = (TIntrusiveReferenceController<FOptimusNodeAction_SetPinDataDomain,1> *)0x0;
  local_28 = (FOptimusNodeAction_SetPinDataDomain *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  __return_storage_ptr__->Object = pFVar9;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if (pTVar6 != (TIntrusiveReferenceController<FOptimusNodeAction_SetPinDataDomain,1> *)0x0) {
    LOCK();
    puVar2 = (undefined1 *)((longlong)&pTVar6->_padding_ + 4);
    *(int *)puVar2 = *(int *)puVar2 + 1;
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar6);
  return __return_storage_ptr__;
}

// AddSubAction<FOptimusNodeAction_SetPinName,UOptimusNodePin_*_const_&,FName_&> @ 14e122970

TWeakPtr<FOptimusNodeAction_SetPinName,1> * __thiscall
FOptimusCompoundAction::
AddSubAction<FOptimusNodeAction_SetPinName,UOptimusNodePin_*_const_&,FName_&>
          (FOptimusCompoundAction *this,
          TWeakPtr<FOptimusNodeAction_SetPinName,1> *__return_storage_ptr__,
          UOptimusNodePin **param_1,FName *param_2)

{
  int *piVar1;
  code *pcVar2;
  FOptimusNodeAction_SetPinName *pFVar3;
  bool bVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWeakPtr<FOptimusNodeAction_SetPinName,1> *pTVar7;
  FScriptContainerElement *pFVar8;
  TArray<TSharedPtr<FOptimusAction,1>,TSizedDefaultAllocator<32>_> *pTVar9;
  FOptimusNodeAction_SetPinName *local_28;
  TReferenceControllerBase<1> *local_20;
  
  pTVar6 = ::operator_new(0x48);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_28 = (FOptimusNodeAction_SetPinName *)&DAT_00000010;
    local_20 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFOptimusNodeAction_SetPinName___00_SharedPointerInternals__6B_
    ;
    FOptimusNodeAction_SetPinName::FOptimusNodeAction_SetPinName
              ((FOptimusNodeAction_SetPinName *)(pTVar6 + 1),*param_1,*param_2);
    if ((FOptimusNodeAction_SetPinName *)(pTVar6 + 1) == (FOptimusNodeAction_SetPinName *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TWeakPtr<FOptimusNodeAction_SetPinName,1> *)(*pcVar2)();
        return pTVar7;
      }
    }
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    local_28 = (FOptimusNodeAction_SetPinName *)(pTVar6 + 1);
    local_20 = pTVar6;
  }
  pTVar6 = local_20;
  pFVar3 = local_28;
  pTVar9 = &this->SubActions;
  pFVar8 = (pTVar9->AllocatorInstance).Data;
  if ((pFVar8 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 < pFVar8 + (longlong)(this->SubActions).ArrayMax * 0x10))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TWeakPtr<FOptimusNodeAction_SetPinName,1> *)(*pcVar2)();
      return pTVar7;
    }
  }
  iVar5 = (this->SubActions).ArrayNum;
  piVar1 = &(this->SubActions).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar9->AllocatorInstance,piVar1);
    (this->SubActions).ArrayNum = iVar5;
  }
  (this->SubActions).ArrayNum = iVar5 + 1;
  pFVar8 = (pTVar9->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(FOptimusNodeAction_SetPinName **)pFVar8 = local_28;
  *(TReferenceControllerBase<1> **)(pFVar8 + 8) = local_20;
  local_20 = (TReferenceControllerBase<1> *)0x0;
  local_28 = (FOptimusNodeAction_SetPinName *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  __return_storage_ptr__->Object = pFVar3;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// AddSubAction<FOptimusNodeAction_SetPinType,UOptimusNodePin_*_&,FOptimusDataTypeRef_&> @ 14e122b40

TWeakPtr<FOptimusNodeAction_SetPinType,1> * __thiscall
FOptimusCompoundAction::
AddSubAction<FOptimusNodeAction_SetPinType,UOptimusNodePin_*_&,FOptimusDataTypeRef_&>
          (FOptimusCompoundAction *this,
          TWeakPtr<FOptimusNodeAction_SetPinType,1> *__return_storage_ptr__,
          UOptimusNodePin **param_1,FOptimusDataTypeRef *param_2)

{
  int *piVar1;
  code *pcVar2;
  FOptimusNodeAction_SetPinType *pFVar3;
  bool bVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWeakPtr<FOptimusNodeAction_SetPinType,1> *pTVar7;
  FScriptContainerElement *pFVar8;
  TArray<TSharedPtr<FOptimusAction,1>,TSizedDefaultAllocator<32>_> *pTVar9;
  FOptimusNodeAction_SetPinType *local_58;
  TReferenceControllerBase<1> *local_50;
  undefined1 local_48 [48];
  
  pTVar6 = ::operator_new(0x48);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_58 = (FOptimusNodeAction_SetPinType *)&DAT_00000010;
    local_50 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFOptimusNodeAction_SetPinType___00_SharedPointerInternals__6B_
    ;
    local_48._0_8_ = param_2->TypeName;
    local_48._8_8_ = *(undefined8 *)&(param_2->TypeObject).SoftObjectPtr;
    FSoftObjectPath::FSoftObjectPath
              ((FSoftObjectPath *)(local_48 + 0x10),
               (FSoftObjectPath *)&(param_2->TypeObject).SoftObjectPtr.field_0x8);
    FOptimusNodeAction_SetPinType::FOptimusNodeAction_SetPinType
              ((FOptimusNodeAction_SetPinType *)(pTVar6 + 1),*param_1,
               (FOptimusDataTypeRef *)local_48);
    if ((FOptimusNodeAction_SetPinType *)(pTVar6 + 1) == (FOptimusNodeAction_SetPinType *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TWeakPtr<FOptimusNodeAction_SetPinType,1> *)(*pcVar2)();
        return pTVar7;
      }
    }
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    local_58 = (FOptimusNodeAction_SetPinType *)(pTVar6 + 1);
    local_50 = pTVar6;
  }
  pTVar6 = local_50;
  pFVar3 = local_58;
  pTVar9 = &this->SubActions;
  pFVar8 = (pTVar9->AllocatorInstance).Data;
  if ((pFVar8 <= (FScriptContainerElement *)&local_58) &&
     ((FScriptContainerElement *)&local_58 < pFVar8 + (longlong)(this->SubActions).ArrayMax * 0x10))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TWeakPtr<FOptimusNodeAction_SetPinType,1> *)(*pcVar2)();
      return pTVar7;
    }
  }
  iVar5 = (this->SubActions).ArrayNum;
  piVar1 = &(this->SubActions).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar9->AllocatorInstance,piVar1);
    (this->SubActions).ArrayNum = iVar5;
  }
  (this->SubActions).ArrayNum = iVar5 + 1;
  pFVar8 = (pTVar9->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(FOptimusNodeAction_SetPinType **)pFVar8 = local_58;
  *(TReferenceControllerBase<1> **)(pFVar8 + 8) = local_50;
  local_50 = (TReferenceControllerBase<1> *)0x0;
  local_58 = (FOptimusNodeAction_SetPinType *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  __return_storage_ptr__->Object = pFVar3;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// AddSubAction<FOptimusNodeAction_SetPinType,UOptimusNodePin_*_const_&,FOptimusDataTypeRef_&> @ 14e122d40

TWeakPtr<FOptimusNodeAction_SetPinType,1> * __thiscall
FOptimusCompoundAction::
AddSubAction<FOptimusNodeAction_SetPinType,UOptimusNodePin_*_const_&,FOptimusDataTypeRef_&>
          (FOptimusCompoundAction *this,
          TWeakPtr<FOptimusNodeAction_SetPinType,1> *__return_storage_ptr__,
          UOptimusNodePin **param_1,FOptimusDataTypeRef *param_2)

{
  int *piVar1;
  code *pcVar2;
  FOptimusNodeAction_SetPinType *pFVar3;
  bool bVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWeakPtr<FOptimusNodeAction_SetPinType,1> *pTVar7;
  FScriptContainerElement *pFVar8;
  TArray<TSharedPtr<FOptimusAction,1>,TSizedDefaultAllocator<32>_> *pTVar9;
  FOptimusNodeAction_SetPinType *local_58;
  TReferenceControllerBase<1> *local_50;
  undefined1 local_48 [48];
  
  pTVar6 = ::operator_new(0x48);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_58 = (FOptimusNodeAction_SetPinType *)&DAT_00000010;
    local_50 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFOptimusNodeAction_SetPinType___00_SharedPointerInternals__6B_
    ;
    local_48._0_8_ = param_2->TypeName;
    local_48._8_8_ = *(undefined8 *)&(param_2->TypeObject).SoftObjectPtr;
    FSoftObjectPath::FSoftObjectPath
              ((FSoftObjectPath *)(local_48 + 0x10),
               (FSoftObjectPath *)&(param_2->TypeObject).SoftObjectPtr.field_0x8);
    FOptimusNodeAction_SetPinType::FOptimusNodeAction_SetPinType
              ((FOptimusNodeAction_SetPinType *)(pTVar6 + 1),*param_1,
               (FOptimusDataTypeRef *)local_48);
    if ((FOptimusNodeAction_SetPinType *)(pTVar6 + 1) == (FOptimusNodeAction_SetPinType *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TWeakPtr<FOptimusNodeAction_SetPinType,1> *)(*pcVar2)();
        return pTVar7;
      }
    }
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    local_58 = (FOptimusNodeAction_SetPinType *)(pTVar6 + 1);
    local_50 = pTVar6;
  }
  pTVar6 = local_50;
  pFVar3 = local_58;
  pTVar9 = &this->SubActions;
  pFVar8 = (pTVar9->AllocatorInstance).Data;
  if ((pFVar8 <= (FScriptContainerElement *)&local_58) &&
     ((FScriptContainerElement *)&local_58 < pFVar8 + (longlong)(this->SubActions).ArrayMax * 0x10))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TWeakPtr<FOptimusNodeAction_SetPinType,1> *)(*pcVar2)();
      return pTVar7;
    }
  }
  iVar5 = (this->SubActions).ArrayNum;
  piVar1 = &(this->SubActions).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar9->AllocatorInstance,piVar1);
    (this->SubActions).ArrayNum = iVar5;
  }
  (this->SubActions).ArrayNum = iVar5 + 1;
  pFVar8 = (pTVar9->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(FOptimusNodeAction_SetPinType **)pFVar8 = local_58;
  *(TReferenceControllerBase<1> **)(pFVar8 + 8) = local_50;
  local_50 = (TReferenceControllerBase<1> *)0x0;
  local_58 = (FOptimusNodeAction_SetPinType *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  __return_storage_ptr__->Object = pFVar3;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// AddSubAction<FOptimusNodeGraphAction_AddNodePair,TWeakPtr<FOptimusNodeGraphAction_AddNode,1>_&,TWeakPtr<FOptimusNodeGraphAction_AddNode,1>_&> @ 14e123190

TWeakPtr<FOptimusNodeGraphAction_AddNodePair,1> * __thiscall
FOptimusCompoundAction::
AddSubAction<FOptimusNodeGraphAction_AddNodePair,TWeakPtr<FOptimusNodeGraphAction_AddNode,1>_&,TWeakPtr<FOptimusNodeGraphAction_AddNode,1>_&>
          (FOptimusCompoundAction *this,
          TWeakPtr<FOptimusNodeGraphAction_AddNodePair,1> *__return_storage_ptr__,
          TWeakPtr<FOptimusNodeGraphAction_AddNode,1> *param_1,
          TWeakPtr<FOptimusNodeGraphAction_AddNode,1> *param_2)

{
  int *piVar1;
  code *pcVar2;
  FOptimusNodeGraphAction_AddNodePair *pFVar3;
  bool bVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWeakPtr<FOptimusNodeGraphAction_AddNodePair,1> *pTVar7;
  FScriptContainerElement *pFVar8;
  FOptimusNodeGraphAction_AddNodePair *local_48;
  TReferenceControllerBase<1> *local_40;
  TWeakPtr<FOptimusNodeGraphAction_AddNode,1> local_38;
  TWeakPtr<FOptimusNodeGraphAction_AddNode,1> local_28;
  
  pTVar6 = ::operator_new(0x68);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_48 = (FOptimusNodeGraphAction_AddNodePair *)&DAT_00000010;
    local_40 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFOptimusNodeGraphAction_AddNodePair___00_SharedPointerInternals__6B_
    ;
    local_38.WeakReferenceCount.ReferenceController =
         (param_2->WeakReferenceCount).ReferenceController;
    local_38.Object = param_2->Object;
    if (local_38.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    local_28.Object = param_1->Object;
    local_28.WeakReferenceCount.ReferenceController =
         (param_1->WeakReferenceCount).ReferenceController;
    if (local_28.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    FOptimusNodeGraphAction_AddNodePair::FOptimusNodeGraphAction_AddNodePair
              ((FOptimusNodeGraphAction_AddNodePair *)(pTVar6 + 1),&local_28,&local_38);
    if ((FOptimusNodeGraphAction_AddNodePair *)(pTVar6 + 1) ==
        (FOptimusNodeGraphAction_AddNodePair *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TWeakPtr<FOptimusNodeGraphAction_AddNodePair,1> *)(*pcVar2)();
        return pTVar7;
      }
    }
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    local_48 = (FOptimusNodeGraphAction_AddNodePair *)(pTVar6 + 1);
    local_40 = pTVar6;
  }
  pTVar6 = local_40;
  pFVar3 = local_48;
  pFVar8 = (this->SubActions).AllocatorInstance.Data;
  if ((pFVar8 <= (FScriptContainerElement *)&local_48) &&
     ((FScriptContainerElement *)&local_48 < pFVar8 + (longlong)(this->SubActions).ArrayMax * 0x10))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TWeakPtr<FOptimusNodeGraphAction_AddNodePair,1> *)(*pcVar2)();
      return pTVar7;
    }
  }
  iVar5 = (this->SubActions).ArrayNum;
  piVar1 = &(this->SubActions).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->SubActions).AllocatorInstance,piVar1);
    (this->SubActions).ArrayNum = iVar5;
  }
  (this->SubActions).ArrayNum = iVar5 + 1;
  pFVar8 = (this->SubActions).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
  *(FOptimusNodeGraphAction_AddNodePair **)pFVar8 = local_48;
  *(TReferenceControllerBase<1> **)(pFVar8 + 8) = local_40;
  local_40 = (TReferenceControllerBase<1> *)0x0;
  local_48 = (FOptimusNodeGraphAction_AddNodePair *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  __return_storage_ptr__->Object = pFVar3;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// AddSubAction<FOptimusNodeGraphAction_RemoveLink,UOptimusNodeLink_*_&> @ 14e1233a0

TWeakPtr<FOptimusNodeGraphAction_RemoveLink,1> * __thiscall
FOptimusCompoundAction::AddSubAction<FOptimusNodeGraphAction_RemoveLink,UOptimusNodeLink_*_&>
          (FOptimusCompoundAction *this,
          TWeakPtr<FOptimusNodeGraphAction_RemoveLink,1> *__return_storage_ptr__,
          UOptimusNodeLink **param_1)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  FOptimusNodeGraphAction_RemoveLink *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSharedRef<FOptimusNodeGraphAction_RemoveLink,1> *pTVar7;
  TWeakPtr<FOptimusNodeGraphAction_RemoveLink,1> *pTVar8;
  FScriptContainerElement *pFVar9;
  FOptimusNodeGraphAction_RemoveLink *local_28;
  TReferenceControllerBase<1> *local_20;
  TSharedRef<FOptimusNodeGraphAction_RemoveLink,1> local_18;
  
  pTVar7 = MakeShared<FOptimusNodeGraphAction_RemoveLink,1,UOptimusNodeLink_*_&>(&local_18,param_1);
  pTVar2 = (pTVar7->SharedReferenceCount).ReferenceController;
  pFVar3 = pTVar7->Object;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar9 = (this->SubActions).AllocatorInstance.Data;
  local_28 = pFVar3;
  local_20 = pTVar2;
  if ((pFVar9 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 < pFVar9 + (longlong)(this->SubActions).ArrayMax * 0x10))
  {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TWeakPtr<FOptimusNodeGraphAction_RemoveLink,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  iVar6 = (this->SubActions).ArrayNum;
  piVar1 = &(this->SubActions).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->SubActions).AllocatorInstance,piVar1);
    (this->SubActions).ArrayNum = iVar6;
  }
  (this->SubActions).ArrayNum = iVar6 + 1;
  pFVar9 = (this->SubActions).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(FOptimusNodeGraphAction_RemoveLink **)pFVar9 = local_28;
  *(TReferenceControllerBase<1> **)(pFVar9 + 8) = local_20;
  local_20 = (TReferenceControllerBase<1> *)0x0;
  local_28 = (FOptimusNodeGraphAction_RemoveLink *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  __return_storage_ptr__->Object = pFVar3;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// AddSubAction<FOptimusNodeGraphAction_RemoveLink,UOptimusNodePin_*_&,UOptimusNodePin_*_&> @ 14e123500

TWeakPtr<FOptimusNodeGraphAction_RemoveLink,1> * __thiscall
FOptimusCompoundAction::
AddSubAction<FOptimusNodeGraphAction_RemoveLink,UOptimusNodePin_*_&,UOptimusNodePin_*_&>
          (FOptimusCompoundAction *this,
          TWeakPtr<FOptimusNodeGraphAction_RemoveLink,1> *__return_storage_ptr__,
          UOptimusNodePin **param_1,UOptimusNodePin **param_2)

{
  int *piVar1;
  code *pcVar2;
  FOptimusNodeGraphAction_RemoveLink *pFVar3;
  bool bVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWeakPtr<FOptimusNodeGraphAction_RemoveLink,1> *pTVar7;
  FScriptContainerElement *pFVar8;
  atomic<int> *paVar9;
  FOptimusNodeGraphAction_RemoveLink *local_38;
  TReferenceControllerBase<1> *local_30;
  FString local_28;
  
  pTVar6 = ::operator_new(0x50);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_38 = (FOptimusNodeGraphAction_RemoveLink *)&DAT_00000010;
    local_30 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFOptimusNodeGraphAction_RemoveLink___00_SharedPointerInternals__6B_
    ;
    FOptimusNodeGraphAction_AddRemoveLink::FOptimusNodeGraphAction_AddRemoveLink
              ((FOptimusNodeGraphAction_AddRemoveLink *)(pTVar6 + 1),*param_1,*param_2,false);
    ((FOptimusNodeGraphAction_AddRemoveLink *)(pTVar6 + 1))->_padding_ =
         (longlong)&___7FOptimusNodeGraphAction_RemoveLink__6B_;
    ::FString::PrintfImpl(&local_28,L"Remove Link");
    paVar9 = &pTVar6[1].SharedReferenceCount;
    if (paVar9 != (atomic<int> *)&local_28) {
      if (*(void **)paVar9 != (void *)0x0) {
        FMemory::Free(*(void **)paVar9);
      }
      *(FScriptContainerElement **)paVar9 = local_28.Data.AllocatorInstance.Data;
      *(int *)&pTVar6[2]._padding_ = local_28.Data.ArrayNum;
      *(int *)((longlong)&pTVar6[2]._padding_ + 4) = local_28.Data.ArrayMax;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (((FOptimusNodeGraphAction_RemoveLink *)(pTVar6 + 1) ==
         (FOptimusNodeGraphAction_RemoveLink *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TWeakPtr<FOptimusNodeGraphAction_RemoveLink,1> *)(*pcVar2)();
      return pTVar7;
    }
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    local_38 = (FOptimusNodeGraphAction_RemoveLink *)(pTVar6 + 1);
    local_30 = pTVar6;
  }
  pTVar6 = local_30;
  pFVar3 = local_38;
  pFVar8 = (this->SubActions).AllocatorInstance.Data;
  if (((pFVar8 <= (FScriptContainerElement *)&local_38) &&
      ((FScriptContainerElement *)&local_38 < pFVar8 + (longlong)(this->SubActions).ArrayMax * 0x10)
      ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar7 = (TWeakPtr<FOptimusNodeGraphAction_RemoveLink,1> *)(*pcVar2)();
    return pTVar7;
  }
  iVar5 = (this->SubActions).ArrayNum;
  piVar1 = &(this->SubActions).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->SubActions).AllocatorInstance,piVar1);
    (this->SubActions).ArrayNum = iVar5;
  }
  (this->SubActions).ArrayNum = iVar5 + 1;
  pFVar8 = (this->SubActions).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
  *(FOptimusNodeGraphAction_RemoveLink **)pFVar8 = local_38;
  *(TReferenceControllerBase<1> **)(pFVar8 + 8) = local_30;
  local_30 = (TReferenceControllerBase<1> *)0x0;
  local_38 = (FOptimusNodeGraphAction_RemoveLink *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  __return_storage_ptr__->Object = pFVar3;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// AddSubAction<FOptimusNodeGraphAction_RemoveLink,TObjectPtr<UOptimusNodeLink>_&> @ 14e123750

TWeakPtr<FOptimusNodeGraphAction_RemoveLink,1> * __thiscall
FOptimusCompoundAction::
AddSubAction<FOptimusNodeGraphAction_RemoveLink,TObjectPtr<UOptimusNodeLink>_&>
          (FOptimusCompoundAction *this,
          TWeakPtr<FOptimusNodeGraphAction_RemoveLink,1> *__return_storage_ptr__,
          TObjectPtr<UOptimusNodeLink> *param_1)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  FOptimusNodeGraphAction_RemoveLink *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSharedRef<FOptimusNodeGraphAction_RemoveLink,1> *pTVar7;
  TWeakPtr<FOptimusNodeGraphAction_RemoveLink,1> *pTVar8;
  FScriptContainerElement *pFVar9;
  FOptimusNodeGraphAction_RemoveLink *local_28;
  TReferenceControllerBase<1> *local_20;
  TSharedRef<FOptimusNodeGraphAction_RemoveLink,1> local_18;
  
  pTVar7 = MakeShared<FOptimusNodeGraphAction_RemoveLink,1,TObjectPtr<UOptimusNodeLink>_&>
                     (&local_18,param_1);
  pTVar2 = (pTVar7->SharedReferenceCount).ReferenceController;
  pFVar3 = pTVar7->Object;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar9 = (this->SubActions).AllocatorInstance.Data;
  local_28 = pFVar3;
  local_20 = pTVar2;
  if ((pFVar9 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 < pFVar9 + (longlong)(this->SubActions).ArrayMax * 0x10))
  {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TWeakPtr<FOptimusNodeGraphAction_RemoveLink,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  iVar6 = (this->SubActions).ArrayNum;
  piVar1 = &(this->SubActions).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->SubActions).AllocatorInstance,piVar1);
    (this->SubActions).ArrayNum = iVar6;
  }
  (this->SubActions).ArrayNum = iVar6 + 1;
  pFVar9 = (this->SubActions).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(FOptimusNodeGraphAction_RemoveLink **)pFVar9 = local_28;
  *(TReferenceControllerBase<1> **)(pFVar9 + 8) = local_20;
  local_20 = (TReferenceControllerBase<1> *)0x0;
  local_28 = (FOptimusNodeGraphAction_RemoveLink *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  __return_storage_ptr__->Object = pFVar3;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// AddSubAction<FOptimusNodeGraphAction_RemoveNode,UOptimusNode_ComputeKernelFunction_*_&> @ 14e1238b0

TWeakPtr<FOptimusNodeGraphAction_RemoveNode,1> * __thiscall
FOptimusCompoundAction::
AddSubAction<FOptimusNodeGraphAction_RemoveNode,UOptimusNode_ComputeKernelFunction_*_&>
          (FOptimusCompoundAction *this,
          TWeakPtr<FOptimusNodeGraphAction_RemoveNode,1> *__return_storage_ptr__,
          UOptimusNode_ComputeKernelFunction **param_1)

{
  int *piVar1;
  code *pcVar2;
  FOptimusNodeGraphAction_RemoveNode *pFVar3;
  bool bVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWeakPtr<FOptimusNodeGraphAction_RemoveNode,1> *pTVar7;
  FScriptContainerElement *pFVar8;
  TArray<TSharedPtr<FOptimusAction,1>,TSizedDefaultAllocator<32>_> *pTVar9;
  FOptimusNodeGraphAction_RemoveNode *local_18;
  TReferenceControllerBase<1> *local_10;
  
  pTVar6 = ::operator_new(0x70);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_18 = (FOptimusNodeGraphAction_RemoveNode *)&DAT_00000010;
    local_10 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFOptimusNodeGraphAction_RemoveNode___00_SharedPointerInternals__6B_
    ;
    FOptimusNodeGraphAction_RemoveNode::FOptimusNodeGraphAction_RemoveNode
              ((FOptimusNodeGraphAction_RemoveNode *)(pTVar6 + 1),(UOptimusNode *)*param_1);
    if ((FOptimusNodeGraphAction_RemoveNode *)(pTVar6 + 1) ==
        (FOptimusNodeGraphAction_RemoveNode *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TWeakPtr<FOptimusNodeGraphAction_RemoveNode,1> *)(*pcVar2)();
        return pTVar7;
      }
    }
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    local_18 = (FOptimusNodeGraphAction_RemoveNode *)(pTVar6 + 1);
    local_10 = pTVar6;
  }
  pTVar6 = local_10;
  pFVar3 = local_18;
  pTVar9 = &this->SubActions;
  pFVar8 = (pTVar9->AllocatorInstance).Data;
  if ((pFVar8 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar8 + (longlong)(this->SubActions).ArrayMax * 0x10))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TWeakPtr<FOptimusNodeGraphAction_RemoveNode,1> *)(*pcVar2)();
      return pTVar7;
    }
  }
  iVar5 = (this->SubActions).ArrayNum;
  piVar1 = &(this->SubActions).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar9->AllocatorInstance,piVar1);
    (this->SubActions).ArrayNum = iVar5;
  }
  (this->SubActions).ArrayNum = iVar5 + 1;
  pFVar8 = (pTVar9->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(FOptimusNodeGraphAction_RemoveNode **)pFVar8 = local_18;
  *(TReferenceControllerBase<1> **)(pFVar8 + 8) = local_10;
  local_10 = (TReferenceControllerBase<1> *)0x0;
  local_18 = (FOptimusNodeGraphAction_RemoveNode *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  __return_storage_ptr__->Object = pFVar3;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// AddSubAction<FOptimusNodeGraphAction_RemoveNode,UOptimusNode_CustomComputeKernel_*_&> @ 14e123a80

TWeakPtr<FOptimusNodeGraphAction_RemoveNode,1> * __thiscall
FOptimusCompoundAction::
AddSubAction<FOptimusNodeGraphAction_RemoveNode,UOptimusNode_CustomComputeKernel_*_&>
          (FOptimusCompoundAction *this,
          TWeakPtr<FOptimusNodeGraphAction_RemoveNode,1> *__return_storage_ptr__,
          UOptimusNode_CustomComputeKernel **param_1)

{
  int *piVar1;
  code *pcVar2;
  FOptimusNodeGraphAction_RemoveNode *pFVar3;
  bool bVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWeakPtr<FOptimusNodeGraphAction_RemoveNode,1> *pTVar7;
  FScriptContainerElement *pFVar8;
  TArray<TSharedPtr<FOptimusAction,1>,TSizedDefaultAllocator<32>_> *pTVar9;
  FOptimusNodeGraphAction_RemoveNode *local_18;
  TReferenceControllerBase<1> *local_10;
  
  pTVar6 = ::operator_new(0x70);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_18 = (FOptimusNodeGraphAction_RemoveNode *)&DAT_00000010;
    local_10 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFOptimusNodeGraphAction_RemoveNode___00_SharedPointerInternals__6B_
    ;
    FOptimusNodeGraphAction_RemoveNode::FOptimusNodeGraphAction_RemoveNode
              ((FOptimusNodeGraphAction_RemoveNode *)(pTVar6 + 1),(UOptimusNode *)*param_1);
    if ((FOptimusNodeGraphAction_RemoveNode *)(pTVar6 + 1) ==
        (FOptimusNodeGraphAction_RemoveNode *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TWeakPtr<FOptimusNodeGraphAction_RemoveNode,1> *)(*pcVar2)();
        return pTVar7;
      }
    }
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    local_18 = (FOptimusNodeGraphAction_RemoveNode *)(pTVar6 + 1);
    local_10 = pTVar6;
  }
  pTVar6 = local_10;
  pFVar3 = local_18;
  pTVar9 = &this->SubActions;
  pFVar8 = (pTVar9->AllocatorInstance).Data;
  if ((pFVar8 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar8 + (longlong)(this->SubActions).ArrayMax * 0x10))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TWeakPtr<FOptimusNodeGraphAction_RemoveNode,1> *)(*pcVar2)();
      return pTVar7;
    }
  }
  iVar5 = (this->SubActions).ArrayNum;
  piVar1 = &(this->SubActions).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar9->AllocatorInstance,piVar1);
    (this->SubActions).ArrayNum = iVar5;
  }
  (this->SubActions).ArrayNum = iVar5 + 1;
  pFVar8 = (pTVar9->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(FOptimusNodeGraphAction_RemoveNode **)pFVar8 = local_18;
  *(TReferenceControllerBase<1> **)(pFVar8 + 8) = local_10;
  local_10 = (TReferenceControllerBase<1> *)0x0;
  local_18 = (FOptimusNodeGraphAction_RemoveNode *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  __return_storage_ptr__->Object = pFVar3;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// AddSubAction<FOptimusResourceAction_AddResource,FOptimusDataTypeRef_&,FName_&,FOptimusDataDomain_&> @ 14e123c50

TWeakPtr<FOptimusResourceAction_AddResource,1> * __thiscall
FOptimusCompoundAction::
AddSubAction<FOptimusResourceAction_AddResource,FOptimusDataTypeRef_&,FName_&,FOptimusDataDomain_&>
          (FOptimusCompoundAction *this,
          TWeakPtr<FOptimusResourceAction_AddResource,1> *__return_storage_ptr__,
          FOptimusDataTypeRef *param_1,FName *param_2,FOptimusDataDomain *param_3)

{
  int *piVar1;
  FName FVar2;
  code *pcVar3;
  FOptimusResourceAction_AddResource *pFVar4;
  bool bVar5;
  int iVar6;
  TReferenceControllerBase<1> *pTVar7;
  FOptimusDataDomain *pFVar8;
  TWeakPtr<FOptimusResourceAction_AddResource,1> *pTVar9;
  FScriptContainerElement *pFVar10;
  FOptimusResourceAction_AddResource *local_98;
  TReferenceControllerBase<1> *local_90;
  undefined1 local_88 [48];
  FOptimusDataDomain local_58;
  
  pTVar7 = ::operator_new(0xa0);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_98 = (FOptimusResourceAction_AddResource *)&DAT_00000010;
    local_90 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFOptimusResourceAction_AddResource___00_SharedPointerInternals__6B_
    ;
    pFVar8 = FOptimusDataDomain::FOptimusDataDomain(&local_58,param_3);
    local_88._0_8_ = param_1->TypeName;
    FVar2 = *param_2;
    local_88._8_8_ = *(undefined8 *)&(param_1->TypeObject).SoftObjectPtr;
    FSoftObjectPath::FSoftObjectPath
              ((FSoftObjectPath *)(local_88 + 0x10),
               (FSoftObjectPath *)&(param_1->TypeObject).SoftObjectPtr.field_0x8);
    FOptimusResourceAction_AddResource::FOptimusResourceAction_AddResource
              ((FOptimusResourceAction_AddResource *)(pTVar7 + 1),(FOptimusDataTypeRef *)local_88,
               FVar2,pFVar8);
    if ((FOptimusResourceAction_AddResource *)(pTVar7 + 1) ==
        (FOptimusResourceAction_AddResource *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TWeakPtr<FOptimusResourceAction_AddResource,1> *)(*pcVar3)();
        return pTVar9;
      }
    }
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    local_98 = (FOptimusResourceAction_AddResource *)(pTVar7 + 1);
    local_90 = pTVar7;
  }
  pTVar7 = local_90;
  pFVar4 = local_98;
  pFVar10 = (this->SubActions).AllocatorInstance.Data;
  if ((pFVar10 <= (FScriptContainerElement *)&local_98) &&
     ((FScriptContainerElement *)&local_98 < pFVar10 + (longlong)(this->SubActions).ArrayMax * 0x10)
     ) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TWeakPtr<FOptimusResourceAction_AddResource,1> *)(*pcVar3)();
      return pTVar9;
    }
  }
  iVar6 = (this->SubActions).ArrayNum;
  piVar1 = &(this->SubActions).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->SubActions).AllocatorInstance,piVar1);
    (this->SubActions).ArrayNum = iVar6;
  }
  (this->SubActions).ArrayNum = iVar6 + 1;
  pFVar10 = (this->SubActions).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(FOptimusResourceAction_AddResource **)pFVar10 = local_98;
  *(TReferenceControllerBase<1> **)(pFVar10 + 8) = local_90;
  local_90 = (TReferenceControllerBase<1> *)0x0;
  local_98 = (FOptimusResourceAction_AddResource *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  __return_storage_ptr__->Object = pFVar4;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return __return_storage_ptr__;
}

// AddSubAction<FOptimusResourceAction_RenameResource,UOptimusResourceDescription_*_&,FName_&> @ 14e123e70

TWeakPtr<FOptimusResourceAction_RenameResource,1> * __thiscall
FOptimusCompoundAction::
AddSubAction<FOptimusResourceAction_RenameResource,UOptimusResourceDescription_*_&,FName_&>
          (FOptimusCompoundAction *this,
          TWeakPtr<FOptimusResourceAction_RenameResource,1> *__return_storage_ptr__,
          UOptimusResourceDescription **param_1,FName *param_2)

{
  int *piVar1;
  UOptimusResourceDescription *pUVar2;
  code *pcVar3;
  FNameEntryId FVar4;
  uint uVar5;
  FOptimusResourceAction_RenameResource *pFVar6;
  bool bVar7;
  int iVar8;
  TReferenceControllerBase<1> *pTVar9;
  TWeakPtr<FOptimusResourceAction_RenameResource,1> *pTVar10;
  FString *pFVar11;
  FScriptContainerElement *pFVar12;
  wchar_t *pwVar13;
  FOptimusResourceAction_RenameResource *local_38;
  TReferenceControllerBase<1> *local_30;
  FString local_28;
  
  pTVar9 = ::operator_new(0x38);
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_38 = (FOptimusResourceAction_RenameResource *)&DAT_00000010;
    local_30 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFOptimusResourceAction_RenameResource___00_SharedPointerInternals__6B_
    ;
    pUVar2 = *param_1;
    FVar4.Value = (param_2->ComparisonIndex).Value;
    uVar5 = param_2->Number;
    pTVar9[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[2]._padding_ = 0;
    pTVar9[1]._padding_ = (longlong)&___7FOptimusResourceAction_RenameResource__6B_;
    pTVar9[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[3]._padding_ = 0;
    if (pUVar2 == (UOptimusResourceDescription *)0x0) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3523978412479742102>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusResourceActions.cpp"
                         ,0x96,"InResource");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        pTVar10 = (TWeakPtr<FOptimusResourceAction_RenameResource,1> *)(*pcVar3)();
        return pTVar10;
      }
    }
    else {
      pTVar9[3]._padding_ = pUVar2->_padding_;
      pTVar9[2].SharedReferenceCount = (atomic<int>)FVar4.Value;
      pTVar9[2].WeakReferenceCount = (atomic<int>)uVar5;
      pFVar11 = ::FName::ToString((FName *)&pTVar9[2].SharedReferenceCount,&local_28);
      if ((pFVar11->Data).ArrayNum == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      }
      FOptimusAction::SetTitlef<wchar_t_const_*>
                ((FOptimusAction *)(pTVar9 + 1),
                 (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)0x152e07ff8,pwVar13);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    if ((FOptimusResourceAction_RenameResource *)(pTVar9 + 1) ==
        (FOptimusResourceAction_RenameResource *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        pTVar10 = (TWeakPtr<FOptimusResourceAction_RenameResource,1> *)(*pcVar3)();
        return pTVar10;
      }
    }
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    local_38 = (FOptimusResourceAction_RenameResource *)(pTVar9 + 1);
    local_30 = pTVar9;
  }
  pTVar9 = local_30;
  pFVar6 = local_38;
  pFVar12 = (this->SubActions).AllocatorInstance.Data;
  if ((pFVar12 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar12 + (longlong)(this->SubActions).ArrayMax * 0x10)
     ) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TWeakPtr<FOptimusResourceAction_RenameResource,1> *)(*pcVar3)();
      return pTVar10;
    }
  }
  iVar8 = (this->SubActions).ArrayNum;
  piVar1 = &(this->SubActions).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->SubActions).AllocatorInstance,piVar1);
    (this->SubActions).ArrayNum = iVar8;
  }
  (this->SubActions).ArrayNum = iVar8 + 1;
  pFVar12 = (this->SubActions).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
  *(FOptimusResourceAction_RenameResource **)pFVar12 = local_38;
  *(TReferenceControllerBase<1> **)(pFVar12 + 8) = local_30;
  local_30 = (TReferenceControllerBase<1> *)0x0;
  local_38 = (FOptimusResourceAction_RenameResource *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  __return_storage_ptr__->Object = pFVar6;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar9;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// AddSubAction<FOptimusResourceAction_SetDataType,UOptimusResourceDescription_*_&,FOptimusDataTypeRef_&> @ 14e1240e0

TWeakPtr<FOptimusResourceAction_SetDataType,1> * __thiscall
FOptimusCompoundAction::
AddSubAction<FOptimusResourceAction_SetDataType,UOptimusResourceDescription_*_&,FOptimusDataTypeRef_&>
          (FOptimusCompoundAction *this,
          TWeakPtr<FOptimusResourceAction_SetDataType,1> *__return_storage_ptr__,
          UOptimusResourceDescription **param_1,FOptimusDataTypeRef *param_2)

{
  int *piVar1;
  code *pcVar2;
  FOptimusResourceAction_SetDataType *pFVar3;
  bool bVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWeakPtr<FOptimusResourceAction_SetDataType,1> *pTVar7;
  FScriptContainerElement *pFVar8;
  TArray<TSharedPtr<FOptimusAction,1>,TSizedDefaultAllocator<32>_> *pTVar9;
  FOptimusResourceAction_SetDataType *local_58;
  TReferenceControllerBase<1> *local_50;
  undefined1 local_48 [48];
  
  pTVar6 = ::operator_new(0x90);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_58 = (FOptimusResourceAction_SetDataType *)&DAT_00000010;
    local_50 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFOptimusResourceAction_SetDataType___00_SharedPointerInternals__6B_
    ;
    local_48._0_8_ = param_2->TypeName;
    local_48._8_8_ = *(undefined8 *)&(param_2->TypeObject).SoftObjectPtr;
    FSoftObjectPath::FSoftObjectPath
              ((FSoftObjectPath *)(local_48 + 0x10),
               (FSoftObjectPath *)&(param_2->TypeObject).SoftObjectPtr.field_0x8);
    FOptimusResourceAction_SetDataType::FOptimusResourceAction_SetDataType
              ((FOptimusResourceAction_SetDataType *)(pTVar6 + 1),*param_1,
               (FOptimusDataTypeRef *)local_48);
    if ((FOptimusResourceAction_SetDataType *)(pTVar6 + 1) ==
        (FOptimusResourceAction_SetDataType *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TWeakPtr<FOptimusResourceAction_SetDataType,1> *)(*pcVar2)();
        return pTVar7;
      }
    }
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    local_58 = (FOptimusResourceAction_SetDataType *)(pTVar6 + 1);
    local_50 = pTVar6;
  }
  pTVar6 = local_50;
  pFVar3 = local_58;
  pTVar9 = &this->SubActions;
  pFVar8 = (pTVar9->AllocatorInstance).Data;
  if ((pFVar8 <= (FScriptContainerElement *)&local_58) &&
     ((FScriptContainerElement *)&local_58 < pFVar8 + (longlong)(this->SubActions).ArrayMax * 0x10))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TWeakPtr<FOptimusResourceAction_SetDataType,1> *)(*pcVar2)();
      return pTVar7;
    }
  }
  iVar5 = (this->SubActions).ArrayNum;
  piVar1 = &(this->SubActions).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar9->AllocatorInstance,piVar1);
    (this->SubActions).ArrayNum = iVar5;
  }
  (this->SubActions).ArrayNum = iVar5 + 1;
  pFVar8 = (pTVar9->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(FOptimusResourceAction_SetDataType **)pFVar8 = local_58;
  *(TReferenceControllerBase<1> **)(pFVar8 + 8) = local_50;
  local_50 = (TReferenceControllerBase<1> *)0x0;
  local_58 = (FOptimusResourceAction_SetDataType *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  __return_storage_ptr__->Object = pFVar3;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// AddSubAction<FOptimusVariableAction_AddVariable,FOptimusDataTypeRef_&,FName_&> @ 14e1242e0

TWeakPtr<FOptimusVariableAction_AddVariable,1> * __thiscall
FOptimusCompoundAction::
AddSubAction<FOptimusVariableAction_AddVariable,FOptimusDataTypeRef_&,FName_&>
          (FOptimusCompoundAction *this,
          TWeakPtr<FOptimusVariableAction_AddVariable,1> *__return_storage_ptr__,
          FOptimusDataTypeRef *param_1,FName *param_2)

{
  int *piVar1;
  FName FVar2;
  code *pcVar3;
  FOptimusVariableAction_AddVariable *pFVar4;
  bool bVar5;
  int iVar6;
  TReferenceControllerBase<1> *pTVar7;
  TWeakPtr<FOptimusVariableAction_AddVariable,1> *pTVar8;
  FScriptContainerElement *pFVar9;
  FOptimusVariableAction_AddVariable *local_58;
  TReferenceControllerBase<1> *local_50;
  undefined1 local_48 [48];
  
  pTVar7 = ::operator_new(0x60);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_58 = (FOptimusVariableAction_AddVariable *)&DAT_00000010;
    local_50 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFOptimusVariableAction_AddVariable___00_SharedPointerInternals__6B_
    ;
    local_48._0_8_ = param_1->TypeName;
    local_48._8_8_ = *(undefined8 *)&(param_1->TypeObject).SoftObjectPtr;
    FVar2 = *param_2;
    FSoftObjectPath::FSoftObjectPath
              ((FSoftObjectPath *)(local_48 + 0x10),
               (FSoftObjectPath *)&(param_1->TypeObject).SoftObjectPtr.field_0x8);
    FOptimusVariableAction_AddVariable::FOptimusVariableAction_AddVariable
              ((FOptimusVariableAction_AddVariable *)(pTVar7 + 1),(FOptimusDataTypeRef *)local_48,
               FVar2);
    if ((FOptimusVariableAction_AddVariable *)(pTVar7 + 1) ==
        (FOptimusVariableAction_AddVariable *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TWeakPtr<FOptimusVariableAction_AddVariable,1> *)(*pcVar3)();
        return pTVar8;
      }
    }
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    local_58 = (FOptimusVariableAction_AddVariable *)(pTVar7 + 1);
    local_50 = pTVar7;
  }
  pTVar7 = local_50;
  pFVar4 = local_58;
  pFVar9 = (this->SubActions).AllocatorInstance.Data;
  if ((pFVar9 <= (FScriptContainerElement *)&local_58) &&
     ((FScriptContainerElement *)&local_58 < pFVar9 + (longlong)(this->SubActions).ArrayMax * 0x10))
  {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TWeakPtr<FOptimusVariableAction_AddVariable,1> *)(*pcVar3)();
      return pTVar8;
    }
  }
  iVar6 = (this->SubActions).ArrayNum;
  piVar1 = &(this->SubActions).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->SubActions).AllocatorInstance,piVar1);
    (this->SubActions).ArrayNum = iVar6;
  }
  (this->SubActions).ArrayNum = iVar6 + 1;
  pFVar9 = (this->SubActions).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(FOptimusVariableAction_AddVariable **)pFVar9 = local_58;
  *(TReferenceControllerBase<1> **)(pFVar9 + 8) = local_50;
  local_50 = (TReferenceControllerBase<1> *)0x0;
  local_58 = (FOptimusVariableAction_AddVariable *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  __return_storage_ptr__->Object = pFVar4;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return __return_storage_ptr__;
}

// AddSubAction<FOptimusVariableAction_RenameVariable,UOptimusVariableDescription_*_&,FName_&> @ 14e1244e0

TWeakPtr<FOptimusVariableAction_RenameVariable,1> * __thiscall
FOptimusCompoundAction::
AddSubAction<FOptimusVariableAction_RenameVariable,UOptimusVariableDescription_*_&,FName_&>
          (FOptimusCompoundAction *this,
          TWeakPtr<FOptimusVariableAction_RenameVariable,1> *__return_storage_ptr__,
          UOptimusVariableDescription **param_1,FName *param_2)

{
  int *piVar1;
  UOptimusVariableDescription *pUVar2;
  code *pcVar3;
  FNameEntryId FVar4;
  uint uVar5;
  FOptimusVariableAction_RenameVariable *pFVar6;
  bool bVar7;
  int iVar8;
  TReferenceControllerBase<1> *pTVar9;
  TWeakPtr<FOptimusVariableAction_RenameVariable,1> *pTVar10;
  FString *pFVar11;
  FScriptContainerElement *pFVar12;
  wchar_t *pwVar13;
  FOptimusVariableAction_RenameVariable *local_38;
  TReferenceControllerBase<1> *local_30;
  FString local_28;
  
  pTVar9 = ::operator_new(0x38);
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_38 = (FOptimusVariableAction_RenameVariable *)&DAT_00000010;
    local_30 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFOptimusVariableAction_RenameVariable___00_SharedPointerInternals__6B_
    ;
    pUVar2 = *param_1;
    FVar4.Value = (param_2->ComparisonIndex).Value;
    uVar5 = param_2->Number;
    pTVar9[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[2]._padding_ = 0;
    pTVar9[1]._padding_ = (longlong)&___7FOptimusVariableAction_RenameVariable__6B_;
    pTVar9[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[3]._padding_ = 0;
    if (pUVar2 == (UOptimusVariableDescription *)0x0) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5431583799081172851>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusVariableActions.cpp"
                         ,0x8d,"InVariable");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        pTVar10 = (TWeakPtr<FOptimusVariableAction_RenameVariable,1> *)(*pcVar3)();
        return pTVar10;
      }
    }
    else {
      pTVar9[3]._padding_ = pUVar2->_padding_;
      pTVar9[2].SharedReferenceCount = (atomic<int>)FVar4.Value;
      pTVar9[2].WeakReferenceCount = (atomic<int>)uVar5;
      pFVar11 = ::FName::ToString((FName *)&pTVar9[2].SharedReferenceCount,&local_28);
      if ((pFVar11->Data).ArrayNum == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      }
      FOptimusAction::SetTitlef<wchar_t_const_*>
                ((FOptimusAction *)(pTVar9 + 1),
                 (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)0x152e08b18,pwVar13);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    if ((FOptimusVariableAction_RenameVariable *)(pTVar9 + 1) ==
        (FOptimusVariableAction_RenameVariable *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        pTVar10 = (TWeakPtr<FOptimusVariableAction_RenameVariable,1> *)(*pcVar3)();
        return pTVar10;
      }
    }
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    local_38 = (FOptimusVariableAction_RenameVariable *)(pTVar9 + 1);
    local_30 = pTVar9;
  }
  pTVar9 = local_30;
  pFVar6 = local_38;
  pFVar12 = (this->SubActions).AllocatorInstance.Data;
  if ((pFVar12 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar12 + (longlong)(this->SubActions).ArrayMax * 0x10)
     ) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TWeakPtr<FOptimusVariableAction_RenameVariable,1> *)(*pcVar3)();
      return pTVar10;
    }
  }
  iVar8 = (this->SubActions).ArrayNum;
  piVar1 = &(this->SubActions).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->SubActions).AllocatorInstance,piVar1);
    (this->SubActions).ArrayNum = iVar8;
  }
  (this->SubActions).ArrayNum = iVar8 + 1;
  pFVar12 = (this->SubActions).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
  *(FOptimusVariableAction_RenameVariable **)pFVar12 = local_38;
  *(TReferenceControllerBase<1> **)(pFVar12 + 8) = local_30;
  local_30 = (TReferenceControllerBase<1> *)0x0;
  local_38 = (FOptimusVariableAction_RenameVariable *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  __return_storage_ptr__->Object = pFVar6;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar9;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// AddSubAction<FOptimusVariableAction_SetDataType,UOptimusVariableDescription_*_&,FOptimusDataTypeRef_&> @ 14e124750

TWeakPtr<FOptimusVariableAction_SetDataType,1> * __thiscall
FOptimusCompoundAction::
AddSubAction<FOptimusVariableAction_SetDataType,UOptimusVariableDescription_*_&,FOptimusDataTypeRef_&>
          (FOptimusCompoundAction *this,
          TWeakPtr<FOptimusVariableAction_SetDataType,1> *__return_storage_ptr__,
          UOptimusVariableDescription **param_1,FOptimusDataTypeRef *param_2)

{
  int *piVar1;
  code *pcVar2;
  FOptimusVariableAction_SetDataType *pFVar3;
  bool bVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWeakPtr<FOptimusVariableAction_SetDataType,1> *pTVar7;
  FScriptContainerElement *pFVar8;
  TArray<TSharedPtr<FOptimusAction,1>,TSizedDefaultAllocator<32>_> *pTVar9;
  FOptimusVariableAction_SetDataType *local_58;
  TReferenceControllerBase<1> *local_50;
  undefined1 local_48 [48];
  
  pTVar6 = ::operator_new(0x90);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_58 = (FOptimusVariableAction_SetDataType *)&DAT_00000010;
    local_50 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFOptimusVariableAction_SetDataType___00_SharedPointerInternals__6B_
    ;
    local_48._0_8_ = param_2->TypeName;
    local_48._8_8_ = *(undefined8 *)&(param_2->TypeObject).SoftObjectPtr;
    FSoftObjectPath::FSoftObjectPath
              ((FSoftObjectPath *)(local_48 + 0x10),
               (FSoftObjectPath *)&(param_2->TypeObject).SoftObjectPtr.field_0x8);
    FOptimusVariableAction_SetDataType::FOptimusVariableAction_SetDataType
              ((FOptimusVariableAction_SetDataType *)(pTVar6 + 1),*param_1,
               (FOptimusDataTypeRef *)local_48);
    if ((FOptimusVariableAction_SetDataType *)(pTVar6 + 1) ==
        (FOptimusVariableAction_SetDataType *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TWeakPtr<FOptimusVariableAction_SetDataType,1> *)(*pcVar2)();
        return pTVar7;
      }
    }
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    local_58 = (FOptimusVariableAction_SetDataType *)(pTVar6 + 1);
    local_50 = pTVar6;
  }
  pTVar6 = local_50;
  pFVar3 = local_58;
  pTVar9 = &this->SubActions;
  pFVar8 = (pTVar9->AllocatorInstance).Data;
  if ((pFVar8 <= (FScriptContainerElement *)&local_58) &&
     ((FScriptContainerElement *)&local_58 < pFVar8 + (longlong)(this->SubActions).ArrayMax * 0x10))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TWeakPtr<FOptimusVariableAction_SetDataType,1> *)(*pcVar2)();
      return pTVar7;
    }
  }
  iVar5 = (this->SubActions).ArrayNum;
  piVar1 = &(this->SubActions).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar9->AllocatorInstance,piVar1);
    (this->SubActions).ArrayNum = iVar5;
  }
  (this->SubActions).ArrayNum = iVar5 + 1;
  pFVar8 = (pTVar9->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(FOptimusVariableAction_SetDataType **)pFVar8 = local_58;
  *(TReferenceControllerBase<1> **)(pFVar8 + 8) = local_50;
  local_50 = (TReferenceControllerBase<1> *)0x0;
  local_58 = (FOptimusVariableAction_SetDataType *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  __return_storage_ptr__->Object = pFVar3;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// AddSubAction @ 14e179210

void __thiscall
FOptimusCompoundAction::AddSubAction
          (FOptimusCompoundAction *this,TSharedPtr<FOptimusAction,1> *param_1)

{
  TArray<TSharedPtr<FOptimusAction,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TSharedPtr<FOptimusAction,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  
  pTVar1 = &this->SubActions;
  pTVar3 = (TSharedPtr<FOptimusAction,1> *)(pTVar1->AllocatorInstance).Data;
  if ((pTVar3 <= param_1) && (param_1 < pTVar3 + (this->SubActions).ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (this->SubActions).ArrayNum;
  piVar2 = &(this->SubActions).ArrayMax;
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->SubActions).ArrayNum = iVar7 + 1;
  pFVar8 = (pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
  *(FOptimusAction **)pFVar8 = param_1->Object;
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar8 + 8) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// AddSubAction @ 14e1792e0

TWeakPtr<FOptimusAction,1> * __thiscall
FOptimusCompoundAction::AddSubAction
          (FOptimusCompoundAction *this,TWeakPtr<FOptimusAction,1> *__return_storage_ptr__,
          FOptimusAction *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  TWeakPtr<FOptimusAction,1> *pTVar6;
  uint uVar7;
  uint uVar8;
  TSharedPtr<FOptimusAction,1> local_18;
  
  local_18.Object = param_1;
  pTVar5 = ::operator_new(0x18);
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFOptimusAction__U__DefaultDeleter_UFOptimusAction___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5[1]._padding_ = (longlong)param_1;
    local_18.SharedReferenceCount.ReferenceController = pTVar5;
  }
  AddSubAction(this,&local_18);
  iVar1 = (this->SubActions).ArrayNum;
  uVar7 = iVar1 - 1;
  uVar8 = 0;
  if ((int)uVar7 < iVar1) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TWeakPtr<FOptimusAction,1> *)(*pcVar3)();
    return pTVar6;
  }
  iVar1 = (this->SubActions).ArrayNum;
  pFVar2 = (this->SubActions).AllocatorInstance.Data;
  __return_storage_ptr__->Object = *(FOptimusAction **)(pFVar2 + (longlong)iVar1 * 0x10 + -0x10);
  pTVar5 = *(TReferenceControllerBase<1> **)(pFVar2 + (longlong)iVar1 * 0x10 + -8);
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// Do @ 14e1a3f40

bool __thiscall
FOptimusCompoundAction::Do(FOptimusCompoundAction *this,IOptimusPathResolver *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  
  uVar8 = 0;
  if (0 < (this->SubActions).ArrayNum) {
    lVar10 = 0;
    lVar11 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar8 < (this->SubActions).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar1 = (this->SubActions).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar1 + lVar11) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      plVar2 = *(longlong **)(pFVar1 + lVar11);
      cVar6 = (**(code **)(*plVar2 + 8))(plVar2,param_1);
      if (cVar6 == '\0') {
        if (0 < (int)uVar8) {
          lVar10 = lVar10 << 4;
          do {
            lVar10 = lVar10 + -0x10;
            uVar9 = uVar8 - 1;
            uVar7 = 0;
            if ((int)uVar9 < (this->SubActions).ArrayNum) {
              uVar7 = -uVar8 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            pFVar1 = (this->SubActions).AllocatorInstance.Data;
            if ((*(longlong *)(pFVar1 + lVar10) == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            plVar2 = *(longlong **)(pFVar1 + lVar10);
            (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
            uVar8 = uVar9;
          } while (0 < (int)uVar9);
        }
        return false;
      }
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 1;
      lVar11 = lVar11 + 0x10;
    } while ((int)uVar8 < (this->SubActions).ArrayNum);
  }
  return true;
}

// Undo @ 14e229690

bool __thiscall
FOptimusCompoundAction::Undo(FOptimusCompoundAction *this,IOptimusPathResolver *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  iVar10 = (this->SubActions).ArrayNum;
  uVar12 = (ulonglong)iVar10;
  if (0 < iVar10) {
    lVar9 = uVar12 << 4;
    do {
      lVar9 = lVar9 + -0x10;
      iVar10 = (int)uVar12;
      uVar13 = uVar12 & 0xffffffff;
      uVar8 = uVar12 & 0xffffffff;
      uVar11 = iVar10 - 1;
      uVar12 = (ulonglong)uVar11;
      uVar7 = 0;
      if ((int)uVar11 < (this->SubActions).ArrayNum) {
        uVar7 = (uint)-iVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar1 = (this->SubActions).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar1 + lVar9) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      plVar2 = *(longlong **)(pFVar1 + lVar9);
      cVar6 = (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
      if (cVar6 == '\0') {
        if (iVar10 < (this->SubActions).ArrayNum) {
          lVar9 = uVar13 << 4;
          do {
            uVar11 = (uint)uVar8;
            uVar7 = 0;
            if ((int)uVar11 < (this->SubActions).ArrayNum) {
              uVar7 = ~uVar11 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            pFVar1 = (this->SubActions).AllocatorInstance.Data;
            if ((*(longlong *)(pFVar1 + lVar9) == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            plVar2 = *(longlong **)(pFVar1 + lVar9);
            (**(code **)(*plVar2 + 8))(plVar2,param_1);
            uVar8 = (ulonglong)(uVar11 + 1);
            lVar9 = lVar9 + 0x10;
          } while ((int)(uVar11 + 1) < (this->SubActions).ArrayNum);
        }
        return false;
      }
    } while (0 < (int)uVar11);
  }
  return true;
}

