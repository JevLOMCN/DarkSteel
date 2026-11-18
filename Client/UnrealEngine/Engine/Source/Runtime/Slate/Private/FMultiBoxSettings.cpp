// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 4

// FMultiBoxSettings @ 1427b3b40

FMultiBoxSettings * __thiscall FMultiBoxSettings::FMultiBoxSettings(FMultiBoxSettings *this)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSToolTip___00__AEBV__TAttribute_VFText____AEBV__TSharedPtr_VSWidget___00__AEBV__TSharedPtr___CBVFUICommandInfo___00___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_VSToolTip___00__AEBV__TAttribute_VFText____AEBV__TSharedPtr_VSWidget___00__AEBV__TSharedPtr___CBVFUICommandInfo___00___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = ConstructDefaultToolTip;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&ToolTipConstructor,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  return this;
}

// AppendKeyBindingToToolTip @ 1427d0870

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
`FMultiBoxSettings::ConstructDefaultToolTip'::__l2::Local::AppendKeyBindingToToolTip
          (FText *__return_storage_ptr__,TAttribute<FText> *param_1,
          TSharedPtr<FUICommandInfo_const_,1> *param_2)

{
  FUICommandInfo *pFVar1;
  FKey *pFVar2;
  void *pvVar3;
  ITextData *pIVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  FText *pFVar8;
  FScriptContainerElement *pFVar9;
  FTextFormat *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  undefined4 local_res18;
  uint uStackX_1c;
  undefined1 local_res20 [8];
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_e8;
  undefined1 local_d8 [8];
  FString local_d0;
  FString local_c0;
  FFormatArgumentValue local_b0;
  FFormatArgumentValue local_90;
  FText local_70;
  FText local_60;
  FTextFormat local_50;
  
  bVar6 = false;
  local_res18 = 0;
  pFVar1 = param_2->Object;
  if (pFVar1 == (FUICommandInfo *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_1c << 0x20);
  }
  else {
    if ((pFVar1->ActiveChords).ArrayNum < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FText *)(*pcVar5)();
        return pFVar8;
      }
    }
    pFVar2 = *(FKey **)(pFVar1->ActiveChords).AllocatorInstance.Data;
    bVar7 = FKey::IsValid(pFVar2);
    bVar6 = true;
    if (bVar7) {
      bVar7 = FKey::IsModifierKey(pFVar2);
      if (bVar7) goto LAB_1427d0943;
      if ((pFVar1->ActiveChords).ArrayNum < 1) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pFVar8 = (FText *)(*pcVar5)();
          return pFVar8;
        }
      }
      pFVar9 = (pFVar1->ActiveChords).AllocatorInstance.Data;
    }
    else {
LAB_1427d0943:
      if ((pFVar1->ActiveChords).ArrayNum < 2) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pFVar8 = (FText *)(*pcVar5)();
          return pFVar8;
        }
      }
      pFVar9 = (pFVar1->ActiveChords).AllocatorInstance.Data + 0x10;
    }
    pTVar11 = *(TReferenceControllerBase<1> **)(pFVar9 + 8);
    pFVar2 = *(FKey **)pFVar9;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar7 = FKey::IsValid(pFVar2);
    if (bVar7) {
      bVar7 = FKey::IsModifierKey(pFVar2);
      if (!bVar7) {
        bVar7 = true;
        goto LAB_1427d09b7;
      }
    }
  }
  bVar7 = false;
LAB_1427d09b7:
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  if (bVar7) {
    local_e8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.Pairs.ArrayNum = 0;
    local_e8.Pairs.ArrayMax = 0;
    pFVar8 = TAttribute<FText>::Get(param_1);
    local_b0.Type = Text;
    local_b0.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(pFVar8->TextData).Reference;
    if (local_b0.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_b0.TextValue.field0_0x0.TypedValue.TextData.Reference + 8))
                (local_b0.TextValue.field0_0x0.TypedValue.TextData.Reference,&local_res18);
    }
    local_b0.TextValue.field0_0x0.TypedValue.Flags = pFVar8->Flags;
    if (local_b0.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FText *)(*pcVar5)();
        return pFVar8;
      }
    }
    ::FString::FString(&local_d0,L"ToolTipDescription");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_e8,&local_d0,&local_b0);
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    if (local_b0.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_b0.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10)
      )();
    }
    if (param_2->Object == (FUICommandInfo *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FText *)(*pcVar5)();
        return pFVar8;
      }
    }
    pFVar8 = FUICommandInfo::GetInputText(param_2->Object,&local_70);
    local_90.Type = Text;
    local_90.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(pFVar8->TextData).Reference;
    if (local_90.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_90.TextValue.field0_0x0.TypedValue.TextData.Reference + 8))
                (local_90.TextValue.field0_0x0.TypedValue.TextData.Reference,local_res20);
    }
    local_90.TextValue.field0_0x0.TypedValue.Flags = pFVar8->Flags;
    if (local_90.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FText *)(*pcVar5)();
        return pFVar8;
      }
    }
    ::FString::FString(&local_c0,L"Keybinding");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_e8,&local_c0,&local_90);
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    if (local_90.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_90.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10)
      )();
    }
    if (local_70.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
    }
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_60,L"ToolBar",L"ToolTip + Keybinding",
                        L"{ToolTipDescription} ({Keybinding})");
    pFVar10 = FTextFormat::FTextFormat(&local_50,pFVar8,Default);
    FText::Format(__return_storage_ptr__,pFVar10,&local_e8);
    if (local_60.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_60.TextData.Reference + 0x10))();
    }
    DestructItems<TTuple<FString,FFormatArgumentValue>,int>
              ((TTuple<FString,FFormatArgumentValue> *)local_e8.Pairs.AllocatorInstance.Data,
               local_e8.Pairs.ArrayNum);
    if ((TTuple<FString,FFormatArgumentValue> *)local_e8.Pairs.AllocatorInstance.Data !=
        (TTuple<FString,FFormatArgumentValue> *)0x0) {
      FMemory::Free(local_e8.Pairs.AllocatorInstance.Data);
    }
  }
  else {
    pFVar8 = TAttribute<FText>::Get(param_1);
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar4 = (pFVar8->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar4;
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_d8);
    }
    __return_storage_ptr__->Flags = pFVar8->Flags;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar3 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  pIVar4 = (param_1->Value).TextData.Reference;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// ConstructDefaultToolTip @ 1427f0c80

TSharedRef<SToolTip,1> * __cdecl
FMultiBoxSettings::ConstructDefaultToolTip
          (TSharedRef<SToolTip,1> *__return_storage_ptr__,TAttribute<FText> *param_1,
          TSharedPtr<SWidget,1> *param_2,TSharedPtr<FUICommandInfo_const_,1> *param_3,bool param_4)

{
  SWidget *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  ITextData *pIVar3;
  code *pcVar4;
  bool bVar5;
  FArguments *pFVar6;
  TSharedRef<SToolTip,1> *pTVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  T0RequiredArgs local_res18 [16];
  T0RequiredArgs local_878 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_870;
  FDelegateAllocation local_868;
  FLLMScope local_858;
  FLLMScope local_854;
  FText local_850;
  undefined1 local_840;
  undefined1 local_838 [8];
  ForAnyElementType FStack_830;
  int local_828;
  FText local_820;
  undefined1 local_810;
  undefined1 local_808 [8];
  ForAnyElementType FStack_800;
  int local_7f8;
  FText local_7f0;
  bool local_7e0;
  undefined1 local_7d8 [8];
  ForAnyElementType FStack_7d0;
  int local_7c8;
  undefined1 local_7c0 [4];
  undefined1 local_7bc [4];
  undefined1 local_7b8 [4];
  FName local_7b4;
  FMemScope local_7a8;
  FName local_7a0;
  FMemScope local_798;
  FDestructionSentinel local_790;
  FDestructionSentinel local_778;
  FDestructionSentinel local_760;
  FDestructionSentinel local_748;
  FDestructionSentinel local_730;
  FDestructionSentinel local_718;
  FDelegateAllocation *local_700;
  SWidget *local_6f8;
  TReferenceControllerBase<1> *pTStack_6f0;
  TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs> local_6e8;
  TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs> local_6d0;
  FArguments local_6b8;
  FArguments local_370;
  
  if (param_2->Object == (SWidget *)0x0) {
    local_850.TextData.Reference = (param_1->Value).TextData.Reference;
    if (local_850.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_850.TextData.Reference + 8))
                (local_850.TextData.Reference,local_7c0);
    }
    local_850.Flags = (param_1->Value).Flags;
    local_840 = param_1->bIsSet;
    local_838 = (undefined1  [8])0x0;
    FStack_830.Data = (FScriptContainerElement *)0x0;
    local_828 = 0;
    TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_838,
               &param_1->Getter);
    if (param_3->Object != (FUICommandInfo *)0x0) {
      local_870.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_868.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_868.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_870,(FWriteAccessScope *)&local_718);
      local_700 = &local_868;
      puVar8 = UE::Core::Private::DelegateAllocate(0x58,&local_868);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &
                  ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy__V__TAttribute_VFText____V__TSharedPtr___CBVFUICommandInfo___00____6B_
        ;
        puVar8[1] = 0;
        pIVar3 = (param_1->Value).TextData.Reference;
        puVar8[1] = pIVar3;
        if (pIVar3 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_7bc);
        }
        *(uint *)(puVar8 + 2) = (param_1->Value).Flags;
        *(bool *)(puVar8 + 3) = param_1->bIsSet;
        puVar8[4] = 0;
        puVar8[5] = 0;
        *(undefined4 *)(puVar8 + 6) = 0;
        TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
        CopyFrom<FDefaultDelegateUserPolicy>
                  ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar8 + 4),
                   &param_1->Getter);
        puVar8[7] = param_3->Object;
        pTVar2 = (param_3->SharedReferenceCount).ReferenceController;
        puVar8[8] = pTVar2;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        uVar9 = FDelegateHandle::GenerateNewID();
        puVar8[9] = uVar9;
        *puVar8 = &
                  ___7__TBaseStaticDelegateInstance___A6A_AVFText__XZUFDefaultDelegateUserPolicy__V__TAttribute_VFText____V__TSharedPtr___CBVFUICommandInfo___00____6B_
        ;
        puVar8[10] = `FMultiBoxSettings::ConstructDefaultToolTip'::__l2::Local::
                     AppendKeyBindingToToolTip;
      }
      if (local_718.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_718.Accessor,&local_718);
      }
      FText::FText(&local_820);
      local_810 = 1;
      local_7f8 = 0;
      local_808 = (undefined1  [8])0x0;
      FStack_800.Data = (FScriptContainerElement *)0x0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_870,(FWriteAccessScope *)&local_790);
      if (FStack_800.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_800.Data);
      }
      FStack_800.Data = (FScriptContainerElement *)local_868.DelegateAllocator;
      local_7f8 = local_868.DelegateSize;
      local_868.DelegateSize = 0;
      local_868.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      if (local_790.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_790.Accessor,&local_790);
      }
      FText::operator=(&local_850,&local_820);
      local_840 = local_810;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_838,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_808);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_808,
                 (FWriteAccessScope *)&local_778);
      if ((local_7f8 != 0) &&
         ((ForElementType<TAlignedBytes<16,16>_>)FStack_800.Data !=
          (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)FStack_800.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_800,0,0,0x10);
        local_7f8 = 0;
      }
      if (local_778.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_778.Accessor,&local_778);
      }
      if ((ForElementType<TAlignedBytes<16,16>_>)FStack_800.Data !=
          (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free(FStack_800.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_808);
      if (local_820.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_820.TextData.Reference + 0x10))();
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_870,(FWriteAccessScope *)&local_760);
      if ((local_868.DelegateSize != 0) &&
         (local_868.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_868.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_868,0,0,0x10);
        local_868.DelegateSize = 0;
      }
      if (local_760.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_760.Accessor,&local_760);
      }
      if (local_868.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_868.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_870.AccessDetector);
    }
    pFVar6 = SToolTip::FArguments::FArguments(&local_370);
    local_7f0.TextData.Reference = local_850.TextData.Reference;
    if (local_850.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_850.TextData.Reference + 8))
                (local_850.TextData.Reference,local_7b8);
    }
    local_7f0.Flags = local_850.Flags;
    local_7e0 = (bool)local_840;
    local_7d8 = (undefined1  [8])0x0;
    FStack_7d0.Data = (FScriptContainerElement *)0x0;
    local_7c8 = 0;
    TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_7d8,
               (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_838);
    FText::operator=(&(pFVar6->_Text).Value,&local_7f0);
    (pFVar6->_Text).bIsSet = local_7e0;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar6->_Text).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_7d8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_7d8,
               (FWriteAccessScope *)&local_748);
    if ((local_7c8 != 0) && (FStack_7d0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_7d0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_7d0,0,0,0x10);
      local_7c8 = 0;
    }
    if (local_748.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_748.Accessor,&local_748);
    }
    if (FStack_7d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_7d0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_7d8);
    if (local_7f0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_7f0.TextData.Reference + 0x10))();
    }
    FLLMScope::FLLMScope(&local_854,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_7a0 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_798,&local_7a0,true);
    TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs>
              (&local_6d0,"SToolTip",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\MultiBox.cpp"
               ,0x89,local_878);
    FMemScope::~FMemScope(&local_798);
    FLLMScope::~FLLMScope(&local_854);
    TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs>::operator<<=
              (&local_6d0,__return_storage_ptr__,pFVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_6d0._Widget.SharedReferenceCount.ReferenceController);
    SToolTip::FArguments::~FArguments(&local_370);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_838,
               (FWriteAccessScope *)&local_730);
    if ((local_828 != 0) && (FStack_830.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_830.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_830,0,0,0x10);
      local_828 = 0;
    }
    if (local_730.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_730.Accessor,&local_730);
    }
    if (FStack_830.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_830.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_838);
    if (local_850.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_850.TextData.Reference + 0x10))();
    }
  }
  else {
    pFVar6 = SToolTip::FArguments::FArguments(&local_6b8);
    if (param_2->Object == (SWidget *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSharedRef<SToolTip,1> *)(*pcVar4)();
        return pTVar7;
      }
    }
    pSVar1 = param_2->Object;
    pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pSVar1 == (SWidget *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSharedRef<SToolTip,1> *)(*pcVar4)();
        return pTVar7;
      }
    }
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_6f8 = (pFVar6->_Content).Widget.Object;
    pTStack_6f0 = (pFVar6->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar6->_Content).Widget.Object = pSVar1;
    (pFVar6->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_6f0)
    ;
    FLLMScope::FLLMScope(&local_858,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_7b4 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_7a8,&local_7b4,true);
    TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs>
              (&local_6e8,"SToolTip",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\MultiBox.cpp"
               ,0x7d,local_res18);
    FMemScope::~FMemScope(&local_7a8);
    FLLMScope::~FLLMScope(&local_858);
    TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs>::operator<<=
              (&local_6e8,__return_storage_ptr__,pFVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_6e8._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    SToolTip::FArguments::~FArguments(&local_6b8);
  }
  return __return_storage_ptr__;
}

// ResetToolTipConstructor @ 142833040

void __cdecl FMultiBoxSettings::ResetToolTipConstructor(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSToolTip___00__AEBV__TAttribute_VFText____AEBV__TSharedPtr_VSWidget___00__AEBV__TSharedPtr___CBVFUICommandInfo___00___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_VSToolTip___00__AEBV__TAttribute_VFText____AEBV__TSharedPtr_VSWidget___00__AEBV__TSharedPtr___CBVFUICommandInfo___00___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = ConstructDefaultToolTip;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&ToolTipConstructor,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  return;
}

