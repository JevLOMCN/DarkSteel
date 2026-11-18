// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 12

// operator() @ 142e1bc50

void __thiscall
``SSlateOptions::Construct'::__l2::Local::AddMenuEntry'::__l5::<lambda_1>::operator()(void *this)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 local_38 [12];
  undefined4 local_2c;
  undefined1 local_28;
  undefined8 local_24;
  undefined1 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  plVar1 = *(longlong **)this;
  uVar4 = (**(code **)(*plVar1 + 0x18))(plVar1);
  (**(code **)(*plVar1 + 0x20))(plVar1,uVar4 & 0xf2ffffff);
  plVar1 = *(longlong **)this;
  cVar3 = (**(code **)(*plVar1 + 0xc0))(plVar1);
  lVar2 = *plVar1;
  local_2c = 0xe000000;
  local_24 = 0;
  local_28 = 0;
  local_1c = 0;
  local_18 = 0xf000000;
  local_14 = 0x1000000;
  uVar5 = (**(code **)(lVar2 + 0xa8))(plVar1,local_38,&local_2c);
  puVar6 = &u_0;
  if (cVar3 == '\0') {
    puVar6 = &u_1;
  }
  (**(code **)(lVar2 + 0xb0))(plVar1,puVar6,uVar5);
  return;
}

// operator() @ 142e1bd20

void __thiscall
``SSlateOptions::Construct'::__l2::Local::AddSubMenuEntry'::__l5::<lambda_1>::operator()(void *this)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 local_38 [12];
  undefined4 local_2c;
  undefined1 local_28;
  undefined8 local_24;
  undefined1 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  plVar1 = *(longlong **)this;
  uVar4 = (**(code **)(*plVar1 + 0x18))(plVar1);
  (**(code **)(*plVar1 + 0x20))(plVar1,uVar4 & 0xf2ffffff);
  plVar1 = *(longlong **)this;
  cVar3 = (**(code **)(*plVar1 + 0xc0))(plVar1);
  lVar2 = *plVar1;
  local_2c = 0xe000000;
  local_24 = 0;
  local_28 = 0;
  local_1c = 0;
  local_18 = 0xf000000;
  local_14 = 0x1000000;
  uVar5 = (**(code **)(lVar2 + 0xa8))(plVar1,local_38,&local_2c);
  puVar6 = &u_0;
  if (cVar3 == '\0') {
    puVar6 = &u_1;
  }
  (**(code **)(lVar2 + 0xb0))(plVar1,puVar6,uVar5);
  return;
}

// AddMenuEntry @ 142e2ae80

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl
`SSlateOptions::Construct'::__l2::Local::AddMenuEntry
          (FMenuBuilder *param_1,FSlateIcon *param_2,FText *param_3,wchar_t *param_4,bool param_5)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  wchar_t *pwVar4;
  FString *pFVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  FUIAction *pFVar8;
  FText *pFVar9;
  undefined1 local_298 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_290;
  ForAnyElementType FStack_288;
  ulonglong local_280;
  FTextBuilder local_278;
  FName local_260;
  FName local_258;
  undefined1 local_250 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_238;
  ForAnyElementType FStack_230;
  ulonglong local_228;
  undefined1 local_220 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_208;
  ForAnyElementType FStack_200;
  ulonglong local_1f8;
  undefined1 local_1f0 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1d8;
  ForAnyElementType FStack_1d0;
  ulonglong local_1c8;
  undefined1 local_1c0 [8];
  FDelegateAllocation local_1b8;
  undefined1 local_1a8 [8];
  FDelegateAllocation local_1a0;
  undefined1 local_190 [8];
  FDelegateAllocation local_188;
  undefined1 local_178 [8];
  FDestructionSentinel local_170;
  FDestructionSentinel local_158;
  FDestructionSentinel local_140;
  FDestructionSentinel local_128;
  FDestructionSentinel local_110;
  FDelegateAllocation *local_f8;
  FDestructionSentinel local_f0;
  FDelegateAllocation *local_d8;
  FDestructionSentinel local_d0;
  FDelegateAllocation *local_b8;
  FString local_b0;
  FString local_a0;
  FText local_90;
  undefined1 local_80 [24];
  undefined1 local_68 [24];
  undefined1 local_50 [24];
  undefined1 local_38 [32];
  
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  plVar3 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,param_4,1);
  if (plVar3 != (longlong *)0x0) {
    local_278.Lines.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_278.Lines.ArrayNum = 0;
    local_278.Lines.ArrayMax = 0;
    local_278.IndentCount = 0;
    pwVar4 = (wchar_t *)(**(code **)(*plVar3 + 8))(plVar3);
    pFVar5 = ::FString::FString(&local_b0,pwVar4);
    FTextBuilder::AppendLine(&local_278,pFVar5);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    pFVar5 = ::FString::FString(&local_a0,param_4);
    FTextBuilder::AppendLine(&local_278,pFVar5);
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    local_298[0] = (TEnumAsByte<EVisibility::Private>)0x19;
    local_298[1] = false;
    local_280 = 0;
    local_290.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_288.Data = (FScriptContainerElement *)0x0;
    FText::FText((FText *)local_1f0);
    local_1f0[0x10] = false;
    local_1c8 = 0;
    local_260.ComparisonIndex.Value = 0;
    local_260.Number = 0;
    local_1d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_1d0.Data = (FScriptContainerElement *)0x0;
    local_258.ComparisonIndex.Value = 0;
    local_258.Number = 0;
    local_1c0 = (undefined1  [8])0x0;
    local_1b8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_1b8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1c0,
               (FWriteAccessScope *)&local_110);
    local_f8 = &local_1b8;
    puVar6 = UE::Core::Private::DelegateAllocate(0x20,&local_1b8);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::`2'::Local::AddMenuEntry'::`5'::<lambda_3>_>
                 ::_vftable_;
      puVar6[3] = plVar3;
    }
    if (local_110.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_110.Accessor,&local_110);
    }
    local_1a8 = (undefined1  [8])0x0;
    local_1a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_1a0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a8,
               (FWriteAccessScope *)&local_f0);
    local_d8 = &local_1a0;
    puVar6 = UE::Core::Private::DelegateAllocate(0x20,&local_1a0);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::`2'::Local::AddMenuEntry'::`5'::<lambda_2>_>
                 ::_vftable_;
      *(bool *)(puVar6 + 3) = param_5;
    }
    if (local_f0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f0.Accessor,&local_f0);
    }
    local_190 = (undefined1  [8])0x0;
    local_188.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_188.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_190,
               (FWriteAccessScope *)&local_d0);
    local_b8 = &local_188;
    puVar6 = UE::Core::Private::DelegateAllocate(0x20,&local_188);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::`2'::Local::AddMenuEntry'::`5'::<lambda_1>_>
                 ::_vftable_;
      puVar6[3] = plVar3;
    }
    if (local_d0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
    }
    pFVar8 = FUIAction::FUIAction
                       ((FUIAction *)local_80,
                        (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_190,
                        (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_1a8,
                        (TDelegate<ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy> *)
                        local_1c0,RepeatDisabled);
    pFVar9 = FTextBuilder::ToText(&local_278,&local_90);
    FText::FText((FText *)local_220,pFVar9);
    local_250._0_8_ = (param_3->TextData).Reference;
    local_1f8 = 0;
    local_220[0x10] = true;
    local_208.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_200.Data = (FScriptContainerElement *)0x0;
    if ((ITextData *)local_250._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_250._0_8_ + 8))(local_250._0_8_,local_178);
    }
    local_250._8_4_ = param_3->Flags;
    local_250[0x10] = true;
    local_228 = 0;
    local_238.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_230.Data = (FScriptContainerElement *)0x0;
    FBaseMenuBuilder::AddMenuEntry
              ((FBaseMenuBuilder *)param_1,(TAttribute<FText> *)local_250,
               (TAttribute<FText> *)local_220,param_2,pFVar8,local_258,ToggleButton,local_260,
               (TAttribute<FText> *)local_1f0,(TAttribute<EVisibility> *)local_298);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_238,(FWriteAccessScope *)&local_170);
    if (((int)local_228 != 0) && (FStack_230.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_230.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_230,0,0,0x10);
      local_228 = local_228 & 0xffffffff00000000;
    }
    if (local_170.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_170.Accessor,&local_170);
    }
    if (FStack_230.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_230.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_238.AccessDetector);
    if ((ITextData *)local_250._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_250._0_8_ + 0x10))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_208,(FWriteAccessScope *)&local_158);
    if (((int)local_1f8 != 0) && (FStack_200.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_200.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_200,0,0,0x10);
      local_1f8 = local_1f8 & 0xffffffff00000000;
    }
    if (local_158.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_158.Accessor,&local_158);
    }
    if (FStack_200.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_200.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_208.AccessDetector);
    if ((ITextData *)local_220._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_220._0_8_ + 0x10))();
    }
    if (local_90.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    if ((void *)local_38._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_50);
    if ((void *)local_50._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_50._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_50);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
    if ((void *)local_68._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_68._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_68);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_80);
    if ((void *)local_80._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_80._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_80);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_1d8,(FWriteAccessScope *)&local_140);
    if (((int)local_1c8 != 0) && (FStack_1d0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_1d0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1d0,0,0,0x10);
      local_1c8 = local_1c8 & 0xffffffff00000000;
    }
    if (local_140.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_140.Accessor,&local_140);
    }
    if (FStack_1d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1d0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1d8.AccessDetector);
    if ((ITextData *)local_1f0._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_1f0._0_8_ + 0x10))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_290,(FWriteAccessScope *)&local_128);
    if (((int)local_280 != 0) && (FStack_288.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_288.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_288,0,0,0x10);
      local_280 = local_280 & 0xffffffff00000000;
    }
    if (local_128.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_128.Accessor,&local_128);
    }
    if (FStack_288.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_288.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_290.AccessDetector);
    DestructItems<FText,int>
              ((FText *)local_278.Lines.AllocatorInstance.Data,local_278.Lines.ArrayNum);
    if ((FText *)local_278.Lines.AllocatorInstance.Data != (FText *)0x0) {
      FMemory::Free(local_278.Lines.AllocatorInstance.Data);
    }
  }
  return;
}

// AddSubMenuEntry @ 142e2b570

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl
`SSlateOptions::Construct'::__l2::Local::AddSubMenuEntry
          (FMenuBuilder *param_1,FSlateIcon *param_2,FText *param_3,wchar_t *param_4,
          TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *param_5,bool param_6)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  wchar_t *pwVar4;
  FString *pFVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  FUIAction *pFVar8;
  FText *pFVar9;
  undefined1 local_298 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_290;
  ForAnyElementType FStack_288;
  ulonglong local_280;
  FTextBuilder local_278;
  FName local_260;
  undefined1 local_258 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_240;
  ForAnyElementType FStack_238;
  ulonglong local_230;
  undefined1 local_228 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_210;
  ForAnyElementType FStack_208;
  ulonglong local_200;
  undefined1 local_1f8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1e0;
  ForAnyElementType FStack_1d8;
  ulonglong local_1d0;
  undefined1 local_1c8 [8];
  FDelegateAllocation local_1c0;
  undefined1 local_1b0 [8];
  FDelegateAllocation local_1a8;
  undefined1 local_198 [8];
  FDelegateAllocation local_190;
  undefined1 local_180 [8];
  FDestructionSentinel local_178;
  FDestructionSentinel local_160;
  FDestructionSentinel local_148;
  FDestructionSentinel local_130;
  FDestructionSentinel local_118;
  FDelegateAllocation *local_100;
  FDestructionSentinel local_f8;
  FDelegateAllocation *local_e0;
  FDestructionSentinel local_d8;
  FDelegateAllocation *local_c0;
  FString local_b8;
  FString local_a8;
  FText local_98;
  undefined1 local_88 [24];
  undefined1 local_70 [24];
  undefined1 local_58 [24];
  undefined1 local_40 [40];
  
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  plVar3 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,param_4,1);
  if (plVar3 != (longlong *)0x0) {
    local_278.Lines.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_278.Lines.ArrayNum = 0;
    local_278.Lines.ArrayMax = 0;
    local_278.IndentCount = 0;
    pwVar4 = (wchar_t *)(**(code **)(*plVar3 + 8))(plVar3);
    pFVar5 = ::FString::FString(&local_b8,pwVar4);
    FTextBuilder::AppendLine(&local_278,pFVar5);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    pFVar5 = ::FString::FString(&local_a8,param_4);
    FTextBuilder::AppendLine(&local_278,pFVar5);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    FText::FText((FText *)local_1f8);
    local_1f8[0x10] = false;
    local_1d0 = 0;
    local_280 = 0;
    local_1e0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_1d8.Data = (FScriptContainerElement *)0x0;
    local_298[0] = (TEnumAsByte<EVisibility::Private>)0x19;
    local_298[1] = false;
    local_290.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_288.Data = (FScriptContainerElement *)0x0;
    local_260.ComparisonIndex.Value = 0;
    local_260.Number = 0;
    local_1c8 = (undefined1  [8])0x0;
    local_1c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_1c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1c8,
               (FWriteAccessScope *)&local_118);
    local_100 = &local_1c0;
    puVar6 = UE::Core::Private::DelegateAllocate(0x20,&local_1c0);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::`2'::Local::AddSubMenuEntry'::`5'::<lambda_3>_>
                 ::_vftable_;
      puVar6[3] = plVar3;
    }
    if (local_118.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_118.Accessor,&local_118);
    }
    local_1b0 = (undefined1  [8])0x0;
    local_1a8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_1a8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1b0,
               (FWriteAccessScope *)&local_f8);
    local_e0 = &local_1a8;
    puVar6 = UE::Core::Private::DelegateAllocate(0x20,&local_1a8);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::`2'::Local::AddSubMenuEntry'::`5'::<lambda_2>_>
                 ::_vftable_;
      *(bool *)(puVar6 + 3) = param_6;
    }
    if (local_f8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f8.Accessor,&local_f8);
    }
    local_198 = (undefined1  [8])0x0;
    local_190.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_190.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_198,
               (FWriteAccessScope *)&local_d8);
    local_c0 = &local_190;
    puVar6 = UE::Core::Private::DelegateAllocate(0x20,&local_190);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``SSlateOptions::Construct'::`2'::Local::AddSubMenuEntry'::`5'::<lambda_1>_>
                 ::_vftable_;
      puVar6[3] = plVar3;
    }
    if (local_d8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
    }
    pFVar8 = FUIAction::FUIAction
                       ((FUIAction *)local_88,
                        (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_198,
                        (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_1b0,
                        (TDelegate<ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy> *)
                        local_1c8,RepeatDisabled);
    pFVar9 = FTextBuilder::ToText(&local_278,&local_98);
    FText::FText((FText *)local_228,pFVar9);
    local_258._0_8_ = (param_3->TextData).Reference;
    local_200 = 0;
    local_228[0x10] = true;
    local_210.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_208.Data = (FScriptContainerElement *)0x0;
    if ((ITextData *)local_258._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_258._0_8_ + 8))(local_258._0_8_,local_180);
    }
    local_258._8_4_ = param_3->Flags;
    local_258[0x10] = true;
    local_230 = 0;
    local_240.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_238.Data = (FScriptContainerElement *)0x0;
    FMenuBuilder::AddSubMenu
              (param_1,(TAttribute<FText> *)local_258,(TAttribute<FText> *)local_228,param_5,pFVar8,
               local_260,ToggleButton,false,param_2,true,(TAttribute<EVisibility> *)local_298,
               (TAttribute<FText> *)local_1f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_240,(FWriteAccessScope *)&local_178);
    if (((int)local_230 != 0) && (FStack_238.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_238.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_238,0,0,0x10);
      local_230 = local_230 & 0xffffffff00000000;
    }
    if (local_178.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_178.Accessor,&local_178);
    }
    if (FStack_238.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_238.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_240.AccessDetector);
    if ((ITextData *)local_258._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_258._0_8_ + 0x10))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_210,(FWriteAccessScope *)&local_160);
    if (((int)local_200 != 0) && (FStack_208.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_208.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_208,0,0,0x10);
      local_200 = local_200 & 0xffffffff00000000;
    }
    if (local_160.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_160.Accessor,&local_160);
    }
    if (FStack_208.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_208.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_210.AccessDetector);
    if ((ITextData *)local_228._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_228._0_8_ + 0x10))();
    }
    if (local_98.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_40);
    if ((void *)local_40._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_40._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_40);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    if ((void *)local_58._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_58._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_70);
    if ((void *)local_70._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_70._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_70);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_88);
    if ((void *)local_88._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_88._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_88);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_290,(FWriteAccessScope *)&local_148);
    if (((int)local_280 != 0) && (FStack_288.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_288.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_288,0,0,0x10);
      local_280 = local_280 & 0xffffffff00000000;
    }
    if (local_148.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_148.Accessor,&local_148);
    }
    if (FStack_288.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_288.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_290.AccessDetector);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_1e0,(FWriteAccessScope *)&local_130);
    if (((int)local_1d0 != 0) && (FStack_1d8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_1d8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1d8,0,0,0x10);
      local_1d0 = local_1d0 & 0xffffffff00000000;
    }
    if (local_130.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_130.Accessor,&local_130);
    }
    if (FStack_1d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1d8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1e0.AccessDetector);
    if ((ITextData *)local_1f8._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_1f8._0_8_ + 0x10))();
    }
    DestructItems<FText,int>
              ((FText *)local_278.Lines.AllocatorInstance.Data,local_278.Lines.ArrayNum);
    if ((FText *)local_278.Lines.AllocatorInstance.Data != (FText *)0x0) {
      FMemory::Free(local_278.Lines.AllocatorInstance.Data);
    }
  }
  return;
}

// Construct @ 142e43190

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SSlateOptions::Construct(SSlateOptions *this,FArguments *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FSlateIcon *pFVar4;
  FText *pFVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  FUIAction *pFVar8;
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *pTVar9;
  FArguments *pFVar10;
  ISlateStyle *pIVar11;
  FName *pFVar12;
  FArguments *pFVar13;
  FSlotArguments *pFVar14;
  FArguments *pFVar15;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<STextBlock,1> *pTVar16;
  FArguments *pFVar17;
  FArguments *pFVar18;
  TBaseSPMethodDelegateInstance<1,SSlateOptions_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
  *this_01;
  TSharedRef<SWidget_const_,1> *pTVar19;
  TAttribute<TOptional<float>_> *pTVar20;
  TAttribute<float> *pTVar21;
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs> *this_02;
  TSharedRef<SSpinBox<float>,1> *pTVar22;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *this_03;
  TSharedRef<SBox,1> *pTVar23;
  FMargin *pFVar24;
  TAttribute<FMargin> *pTVar25;
  TSharedRef<SWidget,1> *pTVar26;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *this_04;
  TSharedRef<SHorizontalBox,1> *pTVar27;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *this_05;
  TSharedRef<SBorder,1> *pTVar28;
  FSlotArguments *pFVar29;
  SSlateOptions *pSVar30;
  FSharedReferencer<1> FVar31;
  FSlotArguments *pFVar32;
  undefined4 local_res18 [2];
  T0RequiredArgs local_res20 [8];
  T0RequiredArgs local_26f8;
  T0RequiredArgs local_26f7;
  T0RequiredArgs local_26f6 [6];
  undefined1 local_26f0 [8];
  FDelegateAllocation local_26e8;
  FArguments *local_26d8;
  FArguments *local_26d0;
  float local_26c8;
  float local_26c4;
  float local_26c0;
  int local_26bc;
  FName local_26b8;
  undefined1 local_26b0 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_26a8;
  ForAnyElementType FStack_26a0;
  ulonglong local_2698;
  undefined1 local_2690 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2688;
  ForAnyElementType FStack_2680;
  ulonglong local_2678;
  undefined1 local_2670 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2668;
  ForAnyElementType FStack_2660;
  ulonglong local_2658;
  undefined1 local_2650 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2648;
  ForAnyElementType FStack_2640;
  ulonglong local_2638;
  int local_2630;
  bool local_262c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2628;
  ForAnyElementType FStack_2620;
  ulonglong local_2618;
  undefined1 local_2610 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2608;
  ForAnyElementType FStack_2600;
  ulonglong local_25f8;
  bool local_25ef;
  bool local_25ed;
  bool local_25e8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_25e0;
  ForAnyElementType FStack_25d8;
  ulonglong local_25d0;
  FName local_25c8;
  undefined4 uStack_25c0;
  undefined4 uStack_25bc;
  undefined8 local_25b8;
  undefined8 local_25b0;
  TSharedPtr<SSlateOptions_const_,1> local_25a8;
  TSharedRef<SWidget,1> local_2598;
  undefined1 local_2588 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2570;
  ForAnyElementType FStack_2568;
  ulonglong local_2560;
  undefined4 local_2558;
  undefined1 local_2554;
  undefined1 local_2550 [8];
  void *pvStack_2548;
  undefined8 local_2540;
  undefined4 local_2538;
  undefined1 local_2534;
  undefined1 local_2530 [8];
  void *pvStack_2528;
  undefined8 local_2520;
  undefined1 local_2518 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2500;
  ForAnyElementType FStack_24f8;
  ulonglong local_24f0;
  undefined1 local_24e8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_24d0;
  ForAnyElementType FStack_24c8;
  ulonglong local_24c0;
  undefined1 local_24b8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_24a0;
  ForAnyElementType FStack_2498;
  ulonglong local_2490;
  undefined1 local_2488 [8];
  undefined1 local_2480 [8];
  void *pvStack_2478;
  undefined8 local_2470;
  undefined1 local_2468 [8];
  undefined1 local_2460 [8];
  void *pvStack_2458;
  undefined8 local_2450;
  undefined1 local_2448 [8];
  undefined1 local_2440 [8];
  void *pvStack_2438;
  undefined8 local_2430;
  undefined1 local_2428 [8];
  undefined1 local_2420 [8];
  void *pvStack_2418;
  undefined8 local_2410;
  int local_2408;
  bool local_2404;
  undefined1 local_2400 [8];
  void *pvStack_23f8;
  undefined8 local_23f0;
  undefined1 local_23e8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_23e0;
  ForAnyElementType FStack_23d8;
  ulonglong local_23d0;
  bool local_23c7;
  bool local_23c5;
  bool local_23c0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_23b8;
  ForAnyElementType FStack_23b0;
  ulonglong local_23a8;
  undefined1 local_23a0 [40];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2378;
  ForAnyElementType FStack_2370;
  ulonglong local_2368;
  undefined1 local_2360 [40];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2338;
  ForAnyElementType FStack_2330;
  ulonglong local_2328;
  undefined1 local_2320 [8];
  undefined4 local_2318 [2];
  undefined1 local_2310 [24];
  undefined1 local_22f8 [8];
  void *pvStack_22f0;
  undefined8 local_22e8;
  TAttribute<EMenuPlacement> local_22e0;
  TAttribute<EVisibility> local_22c0;
  TAttribute<EVisibility> local_22a0;
  TAttribute<EMenuPlacement> local_2280;
  TAttribute<EMenuPlacement> local_2260;
  TAttribute<EVisibility> local_2240;
  undefined1 local_2220 [208];
  undefined1 local_2150 [8];
  void *pvStack_2148;
  undefined8 local_2140;
  TSharedRef<SWidget,1> local_2138;
  FText local_2128;
  TSharedRef<SWidget,1> local_2118;
  TSharedRef<SWidget,1> local_2108;
  TSharedPtr<FUICommandList_const_,1> local_20f8;
  TSharedRef<SWidget,1> local_20e8;
  FToolBarBuilder local_20d8;
  TAttribute<FSlateBrush_const_*> local_1f80;
  undefined1 local_1f58 [40];
  undefined1 local_1f30 [8];
  void *pvStack_1f28;
  undefined8 local_1f20;
  FDestructionSentinel local_1f18;
  FDestructionSentinel local_1f00;
  FDestructionSentinel local_1ee8;
  FDestructionSentinel local_1ed0;
  FDestructionSentinel local_1eb8;
  undefined1 local_1ea0 [24];
  FDestructionSentinel local_1e88;
  FDestructionSentinel local_1e70;
  FDestructionSentinel local_1e58;
  FDestructionSentinel local_1e40;
  FDestructionSentinel local_1e28;
  undefined1 local_1e10 [24];
  FDestructionSentinel local_1df8;
  FDestructionSentinel local_1de0;
  FDestructionSentinel local_1dc8;
  FDestructionSentinel local_1db0;
  FDestructionSentinel local_1d98;
  FDestructionSentinel local_1d80;
  FDestructionSentinel local_1d68;
  FDelegateAllocation *local_1d50;
  TAttribute<FText> local_1d48;
  TAttribute<FText> local_1d18;
  TAttribute<FText> local_1ce8;
  TAttribute<FText> local_1cb8;
  TSharedRef<STextBlock,1> local_1c88;
  TSharedRef<SSpinBox<float>,1> local_1c78;
  TSharedRef<SBox,1> local_1c68;
  TSharedRef<SWidget,1> local_1c58;
  FText local_1c48;
  TSharedRef<SHorizontalBox,1> local_1c38;
  TSharedRef<SBorder,1> local_1c28;
  FText local_1c18;
  FName local_1c08;
  undefined8 uStack_1c00;
  undefined1 local_1bf8 [24];
  undefined1 local_1be0 [24];
  TSharedPtr<FExtender,1> local_1bc8;
  FName local_1bb8;
  undefined1 local_1bb0 [24];
  undefined1 local_1b98 [24];
  undefined1 local_1b80 [24];
  undefined1 local_1b68 [32];
  code *local_1b48;
  TReferenceControllerBase<1> *pTStack_1b40;
  TSharedRef<SWidget_const_,1> local_1b38;
  FText local_1b28;
  TWriteLockedDelegateAllocation<FNotThreadSafeDelegateMode> local_1b18;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_1af8;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_1ae0;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_1ac8;
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs> local_1ab0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1a98;
  FMargin local_1a80;
  FSlateIcon local_1a70;
  FSlateIcon local_1a50;
  FSlateIcon local_1a30;
  TAttribute<float> local_1a10;
  TAttribute<float> local_19f0;
  TAttribute<TOptional<float>_> local_19d0;
  TAttribute<TOptional<float>_> local_19a8;
  TAttribute<FMargin> local_1980;
  FUIAction local_1950;
  FUIAction local_18e8;
  FSlotArguments local_1880;
  FSlotArguments local_1798;
  FSlotArguments local_16b0;
  FArguments local_15c8;
  FArguments local_13c0;
  FArguments local_1080;
  FArguments local_ca0;
  FArguments local_748;
  
  pFVar32 = (FSlotArguments *)0x0;
  local_res18[0] = 0;
  local_25b8 = 0;
  local_25b0 = 0;
  local_20f8.Object = (FUICommandList *)0x0;
  local_20f8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1bc8.Object = (FExtender *)0x0;
  local_1bc8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FMultiBoxBuilder::FMultiBoxBuilder
            ((FMultiBoxBuilder *)&local_20d8,ToolBar,FMultiBoxCustomization::None,false,&local_20f8,
             &local_1bc8,(FName)0x0,(FName)0x0);
  local_20d8.CurrentSectionExtensionHook.ComparisonIndex.Value = 0;
  local_20d8.CurrentSectionExtensionHook.Number = 0;
  local_20d8._padding_ = (longlong)&___7FToolBarBuilder__6B_;
  memset(&local_20d8.CurrentSectionResizeParams,0,200);
  local_20d8.CurrentSectionResizeParams.Value.ClippingPriority.Value = 0;
  local_20d8.CurrentSectionResizeParams.Value.AllowClipping.Value = false;
  local_20d8.CurrentSectionResizeParams.Value.AllowClipping.bIsSet = false;
  local_20d8.CurrentSectionResizeParams.Value.VisibleInOverflow.Value = false;
  local_20d8.CurrentSectionResizeParams.Value.VisibleInOverflow.bIsSet = false;
  local_20d8.CurrentSectionResizeParams.Value.Wrapping.Allow.Value = false;
  local_20d8.CurrentSectionResizeParams.Value.Wrapping.Allow.bIsSet = false;
  local_20d8.CurrentSectionResizeParams.Value.Wrapping.Priority.bIsSet = false;
  local_20d8.CurrentSectionResizeParams.Value.Wrapping.Mode.Value = Preferred;
  local_20d8.CurrentSectionResizeParams.Value.Wrapping.Mode.bIsSet = false;
  local_20d8.CurrentSectionResizeParams.Value.Wrapping.VerticalOverflowBehavior.bIsSet = false;
  local_20d8.CurrentSectionResizeParams.Value.Wrapping.ForceNewLine.bIsSet = false;
  local_20d8.CurrentSectionResizeParams.bIsSet = false;
  local_20d8.bForceSmallIcons = false;
  local_20d8.CurrentSectionResizeParams.Value.ClippingPriority.bIsSet = false;
  local_20d8.CurrentSectionResizeParams.Value.ClippingPriority.Getter._0_8_ = 0;
  local_20d8.CurrentSectionResizeParams.Value.ClippingPriority.Getter._8_8_ = 0;
  local_20d8.CurrentSectionResizeParams.Value.ClippingPriority.Getter._16_8_ = 0;
  local_20d8.CurrentSectionResizeParams.Value.AllowClipping.Getter._0_8_ = 0;
  local_20d8.CurrentSectionResizeParams.Value.AllowClipping.Getter._8_8_ = 0;
  local_20d8.CurrentSectionResizeParams.Value.AllowClipping.Getter._16_8_ = 0;
  local_20d8.CurrentSectionResizeParams.Value.VisibleInOverflow.Getter._0_8_ = 0;
  local_20d8.CurrentSectionResizeParams.Value.VisibleInOverflow.Getter._8_8_ = 0;
  local_20d8.CurrentSectionResizeParams.Value.VisibleInOverflow.Getter._16_8_ = 0;
  local_20d8.CurrentSectionResizeParams.Value.Wrapping.Allow.Getter._0_8_ = 0;
  local_20d8.CurrentSectionResizeParams.Value.Wrapping.Allow.Getter._8_8_ = 0;
  local_20d8.CurrentSectionResizeParams.Value.Wrapping.Allow.Getter._16_8_ = 0;
  local_20d8.CurrentSectionResizeParams.Value.Wrapping.Priority.Value = 0;
  local_20d8.CurrentSectionResizeParams.Value.Wrapping.Priority.Getter._0_8_ = 0;
  local_20d8.CurrentSectionResizeParams.Value.Wrapping.Priority.Getter._8_8_ = 0;
  local_20d8.CurrentSectionResizeParams.Value.Wrapping.Priority.Getter._16_8_ = 0;
  local_20d8.CurrentSectionResizeParams.Value.Wrapping.Mode.Getter._0_8_ = 0;
  local_20d8.CurrentSectionResizeParams.Value.Wrapping.Mode.Getter._8_8_ = 0;
  local_20d8.CurrentSectionResizeParams.Value.Wrapping.Mode.Getter._16_8_ = 0;
  local_20d8.CurrentSectionResizeParams.Getter._0_8_ = 0;
  local_20d8.CurrentSectionResizeParams.Getter._8_8_ = 0;
  local_20d8.CurrentSectionResizeParams.Getter._16_8_ = 0;
  local_20d8.CurrentStyleOverride.ComparisonIndex.Value = 0;
  local_20d8.CurrentStyleOverride.Number = 0;
  local_20d8.LabelVisibility.bIsSet = false;
  local_20d8.bSectionNeedsToBeApplied = false;
  local_20d8.bSectionShouldHaveSeparator = true;
  local_20d8.bIsFocusable = true;
  *(undefined1 *)(local_20d8._padding_ + 0x39) = 1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20f8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  ::FName::FName(&local_26b8,"BoldSlimToolbar");
  if ((FWidgetReflectorStyle::StyleInstance.Object == (FSlateStyleSet *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FMultiBoxBuilder::SetStyle
            ((FMultiBoxBuilder *)&local_20d8,
             (ISlateStyle *)FWidgetReflectorStyle::StyleInstance.Object,&local_26b8);
  memset(local_26b0,0,200);
  local_2630 = 0;
  local_2698 = 0;
  local_2678 = 0;
  local_2658 = 0;
  local_2638 = 0;
  local_2618 = 0;
  local_25f8 = 0;
  local_25d0 = 0;
  local_22e0.Getter._16_8_ = 0;
  local_26a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_26a0.Data = (FScriptContainerElement *)0x0;
  local_2690[0] = false;
  local_2690[1] = false;
  local_2688.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2680.Data = (FScriptContainerElement *)0x0;
  local_2670[0] = false;
  local_2670[1] = false;
  local_2668.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2660.Data = (FScriptContainerElement *)0x0;
  local_2650[0] = false;
  local_2650[1] = false;
  local_2648.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2640.Data = (FScriptContainerElement *)0x0;
  local_262c = false;
  local_2628.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2620.Data = (FScriptContainerElement *)0x0;
  local_2610[0] = Preferred;
  local_2610[1] = false;
  local_2608.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2600.Data = (FScriptContainerElement *)0x0;
  local_25ef = false;
  local_25ed = false;
  local_25e8 = false;
  local_25e0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_25d8.Data = (FScriptContainerElement *)0x0;
  local_22e0.Value = MenuPlacement_BelowAnchor;
  local_22e0.bIsSet = false;
  local_22e0.Getter._0_8_ = 0;
  local_22e0.Getter._8_8_ = 0;
  FText::FText(&local_1cb8.Value);
  local_1cb8.bIsSet = false;
  local_1cb8.Getter._16_8_ = 0;
  local_2240.Getter._16_8_ = 0;
  local_1cb8.Getter._0_8_ = 0;
  local_1cb8.Getter._8_8_ = 0;
  local_2240.Value.Value.Value = (TEnumAsByte<EVisibility::Private>)0x19;
  local_2240.bIsSet = false;
  local_2240.Getter._0_8_ = 0;
  local_2240.Getter._8_8_ = 0;
  local_25c8.ComparisonIndex.Value = 0;
  local_25c8.Number = 0;
  pFVar4 = FSlateIcon::FSlateIcon(&local_1a70);
  local_2360._0_8_ = pFVar4->StyleSetName;
  local_2360._8_8_ = pFVar4->StyleName;
  local_2360._16_8_ = pFVar4->SmallStyleName;
  local_2360._24_8_ = pFVar4->StatusOverlayStyleName;
  local_2360[0x20] = true;
  local_2328 = 0;
  local_2338.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2330.Data = (FScriptContainerElement *)0x0;
  pFVar5 = FText::GetEmpty();
  local_2588._0_8_ = (pFVar5->TextData).Reference;
  if ((ITextData *)local_2588._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_2588._0_8_ + 8))(local_2588._0_8_,local_2320);
  }
  local_2588._8_4_ = pFVar5->Flags;
  local_2588[0x10] = true;
  local_2560 = 0;
  local_2570.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2568.Data = (FScriptContainerElement *)0x0;
  pFVar5 = FText::AsLocalizable_Advanced_LocText(&local_1c18,L"SSlateOptions",L"FlagLabel",L"Flags")
  ;
  FText::FText((FText *)local_2518,pFVar5);
  local_2518[0x10] = true;
  local_24f0 = 0;
  local_26f0 = (undefined1  [8])0x0;
  local_2500.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_24f8.Data = (FScriptContainerElement *)0x0;
  local_26e8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_26e8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_26f0,
             (FWriteAccessScope *)&local_1d68);
  local_1d50 = &local_26e8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,&local_26e8);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = `SSlateOptions::Construct'::__l2::GlobalLocal::FillToolbar;
  }
  if (local_1d68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1d68.Accessor,&local_1d68);
  }
  pFVar8 = FUIAction::FUIAction((FUIAction *)local_1bb0);
  FToolBarBuilder::AddComboButton
            (&local_20d8,pFVar8,
             (TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *)local_26f0
             ,(TAttribute<FText> *)local_2518,(TAttribute<FText> *)local_2588,
             (TAttribute<FSlateIcon> *)local_2360,false,local_25c8,&local_2240,&local_1cb8,
             &local_22e0,Button,(TAttribute<FMenuEntryResizeParams> *)local_26b0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1b68);
  if ((void *)local_1b68._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1b68._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1b68);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1b80);
  if ((void *)local_1b80._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1b80._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1b80);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1b98);
  if ((void *)local_1b98._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1b98._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1b98);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1bb0);
  if ((void *)local_1bb0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1bb0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1bb0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_26f0,
             (FWriteAccessScope *)&local_1de0);
  if ((local_26e8.DelegateSize != 0) &&
     (local_26e8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_26e8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_26e8,0,0,0x10);
    local_26e8.DelegateSize = 0;
  }
  if (local_1de0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1de0.Accessor,&local_1de0);
  }
  if (local_26e8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_26e8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_26f0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2500,(FWriteAccessScope *)&local_1dc8);
  if (((int)local_24f0 != 0) && (FStack_24f8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_24f8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_24f8,0,0,0x10);
    local_24f0 = local_24f0 & 0xffffffff00000000;
  }
  if (local_1dc8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1dc8.Accessor,&local_1dc8);
  }
  if (FStack_24f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_24f8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2500.AccessDetector);
  if ((ITextData *)local_2518._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_2518._0_8_ + 0x10))();
  }
  if (local_1c18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1c18.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2570,(FWriteAccessScope *)&local_1e40);
  if (((int)local_2560 != 0) && (FStack_2568.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2568.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2568,0,0,0x10);
    local_2560 = local_2560 & 0xffffffff00000000;
  }
  if (local_1e40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e40.Accessor,&local_1e40);
  }
  if (FStack_2568.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2568.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2570.AccessDetector);
  if ((ITextData *)local_2588._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_2588._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2338,(FWriteAccessScope *)&local_1db0);
  if (((int)local_2328 != 0) && (FStack_2330.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2330.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2330,0,0,0x10);
    local_2328 = local_2328 & 0xffffffff00000000;
  }
  if (local_1db0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1db0.Accessor,&local_1db0);
  }
  if (FStack_2330.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2330.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2338.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_25e0,(FWriteAccessScope *)&local_1d98);
  if (((int)local_25d0 != 0) && (FStack_25d8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_25d8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_25d8,0,0,0x10);
    local_25d0 = local_25d0 & 0xffffffff00000000;
  }
  if (local_1d98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1d98.Accessor,&local_1d98);
  }
  if (FStack_25d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_25d8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_25e0.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2608,(FWriteAccessScope *)&local_1d80);
  if (((int)local_25f8 != 0) && (FStack_2600.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2600.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2600,0,0,0x10);
    local_25f8 = local_25f8 & 0xffffffff00000000;
  }
  if (local_1d80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1d80.Accessor,&local_1d80);
  }
  if (FStack_2600.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2600.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2608.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2628,(FWriteAccessScope *)&local_1f18);
  if (((int)local_2618 != 0) && (FStack_2620.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2620.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2620,0,0,0x10);
    local_2618 = local_2618 & 0xffffffff00000000;
  }
  if (local_1f18.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1f18.Accessor,&local_1f18);
  }
  if (FStack_2620.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2620.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2628.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2648,(FWriteAccessScope *)&local_1f00);
  if (((int)local_2638 != 0) && (FStack_2640.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2640.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2640,0,0,0x10);
    local_2638 = local_2638 & 0xffffffff00000000;
  }
  if (local_1f00.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1f00.Accessor,&local_1f00);
  }
  if (FStack_2640.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2640.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2648.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2668,(FWriteAccessScope *)&local_1ee8);
  if (((int)local_2658 != 0) && (FStack_2660.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2660.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2660,0,0,0x10);
    local_2658 = local_2658 & 0xffffffff00000000;
  }
  if (local_1ee8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1ee8.Accessor,&local_1ee8);
  }
  if (FStack_2660.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2660.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2668.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2688,(FWriteAccessScope *)&local_1ed0);
  if (((int)local_2678 != 0) && (FStack_2680.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2680.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2680,0,0,0x10);
    local_2678 = local_2678 & 0xffffffff00000000;
  }
  if (local_1ed0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1ed0.Accessor,&local_1ed0);
  }
  if (FStack_2680.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2680.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2688.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_26a8,(FWriteAccessScope *)&local_1eb8);
  if (((int)local_2698 != 0) && (FStack_26a0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_26a0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_26a0,0,0,0x10);
    local_2698 = local_2698 & 0xffffffff00000000;
  }
  if (local_1eb8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1eb8.Accessor,&local_1eb8);
  }
  if (FStack_26a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_26a0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_26a8.AccessDetector);
  memset(local_2488,0,200);
  local_2408 = 0;
  local_2470 = 0;
  local_2450 = 0;
  local_2430 = 0;
  local_2410 = 0;
  local_23f0 = 0;
  local_23d0 = 0;
  local_23a8 = 0;
  local_2260.Getter._16_8_ = 0;
  local_2480 = (undefined1  [8])0x0;
  pvStack_2478 = (void *)0x0;
  local_2468[0] = false;
  local_2468[1] = false;
  local_2460 = (undefined1  [8])0x0;
  pvStack_2458 = (void *)0x0;
  local_2448[0] = false;
  local_2448[1] = false;
  local_2440 = (undefined1  [8])0x0;
  pvStack_2438 = (void *)0x0;
  local_2428[0] = false;
  local_2428[1] = false;
  local_2420 = (undefined1  [8])0x0;
  pvStack_2418 = (void *)0x0;
  local_2404 = false;
  local_2400 = (undefined1  [8])0x0;
  pvStack_23f8 = (void *)0x0;
  local_23e8[0] = Preferred;
  local_23e8[1] = false;
  local_23e0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_23d8.Data = (FScriptContainerElement *)0x0;
  local_23c7 = false;
  local_23c5 = false;
  local_23c0 = false;
  local_23b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_23b0.Data = (FScriptContainerElement *)0x0;
  local_2260.Value = MenuPlacement_BelowAnchor;
  local_2260.bIsSet = false;
  local_2260.Getter._0_8_ = 0;
  local_2260.Getter._8_8_ = 0;
  FText::FText(&local_1d48.Value);
  local_1d48.bIsSet = false;
  local_1d48.Getter._16_8_ = 0;
  local_22c0.Getter._16_8_ = 0;
  local_1d48.Getter._0_8_ = 0;
  local_1d48.Getter._8_8_ = 0;
  local_22c0.Value.Value.Value = (TEnumAsByte<EVisibility::Private>)0x19;
  local_22c0.bIsSet = false;
  local_22c0.Getter._0_8_ = 0;
  local_22c0.Getter._8_8_ = 0;
  local_26d8 = (FArguments *)0x0;
  pFVar4 = FSlateIcon::FSlateIcon(&local_1a50);
  local_23a0._0_8_ = pFVar4->StyleSetName;
  local_23a0._8_8_ = pFVar4->StyleName;
  local_23a0._16_8_ = pFVar4->SmallStyleName;
  local_23a0._24_8_ = pFVar4->StatusOverlayStyleName;
  local_23a0[0x20] = true;
  local_2368 = 0;
  local_2378.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2370.Data = (FScriptContainerElement *)0x0;
  pFVar5 = FText::GetEmpty();
  FText::FText((FText *)local_24e8,pFVar5);
  local_24e8[0x10] = true;
  local_24c0 = 0;
  local_24d0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_24c8.Data = (FScriptContainerElement *)0x0;
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_1c48,L"SSlateOptions",L"DebugLabel",L"Debug Options");
  FText::FText((FText *)local_24b8,pFVar5);
  local_24b8[0x10] = true;
  local_2490 = 0;
  local_24a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2498.Data = (FScriptContainerElement *)0x0;
  pTVar9 = TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::CreateStatic<>
                     ((TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *)
                      local_1ea0,`SSlateOptions::Construct'::__l2::DebugLocal::FillToolbar);
  pFVar8 = FUIAction::FUIAction(&local_1950);
  FToolBarBuilder::AddComboButton
            (&local_20d8,pFVar8,pTVar9,(TAttribute<FText> *)local_24b8,
             (TAttribute<FText> *)local_24e8,(TAttribute<FSlateIcon> *)local_23a0,false,(FName)0x0,
             &local_22c0,&local_1d48,&local_2260,Button,
             (TAttribute<FMenuEntryResizeParams> *)local_2488);
  FUIAction::~FUIAction(&local_1950);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1ea0);
  if ((void *)local_1ea0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1ea0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1ea0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_24a0,(FWriteAccessScope *)&local_1e88);
  if (((int)local_2490 != 0) && (FStack_2498.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2498.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2498,0,0,0x10);
    local_2490 = local_2490 & 0xffffffff00000000;
  }
  if (local_1e88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e88.Accessor,&local_1e88);
  }
  if (FStack_2498.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2498.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_24a0.AccessDetector);
  if ((ITextData *)local_24b8._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_24b8._0_8_ + 0x10))();
  }
  if (local_1c48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1c48.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_24d0,(FWriteAccessScope *)&local_1e70);
  if (((int)local_24c0 != 0) && (FStack_24c8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_24c8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_24c8,0,0,0x10);
    local_24c0 = local_24c0 & 0xffffffff00000000;
  }
  if (local_1e70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e70.Accessor,&local_1e70);
  }
  if (FStack_24c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_24c8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_24d0.AccessDetector);
  if ((ITextData *)local_24e8._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_24e8._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2378,(FWriteAccessScope *)&local_1e58);
  if (((int)local_2368 != 0) && (FStack_2370.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2370.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2370,0,0,0x10);
    local_2368 = local_2368 & 0xffffffff00000000;
  }
  if (local_1e58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e58.Accessor,&local_1e58);
  }
  if (FStack_2370.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2370.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2378.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_23b8,(FWriteAccessScope *)&local_1df8);
  if (((int)local_23a8 != 0) && (FStack_23b0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_23b0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_23b0,0,0,0x10);
    local_23a8 = local_23a8 & 0xffffffff00000000;
  }
  if (local_1df8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1df8.Accessor,&local_1df8);
  }
  if (FStack_23b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_23b0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_23b8.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_23e0,(FWriteAccessScope *)&local_1e28);
  if (((int)local_23d0 != 0) && (FStack_23d8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_23d8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_23d8,0,0,0x10);
    local_23d0 = local_23d0 & 0xffffffff00000000;
  }
  if (local_1e28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e28.Accessor,&local_1e28);
  }
  if (FStack_23d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_23d8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_23e0.AccessDetector);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2400);
  if (pvStack_23f8 != (void *)0x0) {
    FMemory::Free(pvStack_23f8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2400);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2420);
  if (pvStack_2418 != (void *)0x0) {
    FMemory::Free(pvStack_2418);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2420);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2440);
  if (pvStack_2438 != (void *)0x0) {
    FMemory::Free(pvStack_2438);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2440);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2460);
  if (pvStack_2458 != (void *)0x0) {
    FMemory::Free(pvStack_2458);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2460);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2480);
  if (pvStack_2478 != (void *)0x0) {
    FMemory::Free(pvStack_2478);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2480);
  memset(local_2220,0,200);
  local_2220._128_4_ = 0;
  local_2220._24_8_ = 0;
  local_2220._56_8_ = 0;
  local_2220._88_8_ = 0;
  local_2220._120_8_ = 0;
  local_2220._152_8_ = 0;
  local_2220._184_8_ = 0;
  local_2140 = 0;
  local_2280.Getter._16_8_ = 0;
  local_2220._8_8_ = 0;
  local_2220._16_8_ = 0;
  local_2220[0x20] = false;
  local_2220[0x21] = false;
  local_2220._40_8_ = 0;
  local_2220._48_8_ = 0;
  local_2220[0x40] = false;
  local_2220[0x41] = false;
  local_2220._72_8_ = 0;
  local_2220._80_8_ = 0;
  local_2220[0x60] = false;
  local_2220[0x61] = false;
  local_2220._104_8_ = 0;
  local_2220._112_8_ = 0;
  local_2220[0x84] = false;
  local_2220._136_8_ = 0;
  local_2220._144_8_ = 0;
  local_2220[0xa0] = Preferred;
  local_2220[0xa1] = false;
  local_2220._168_8_ = 0;
  local_2220._176_8_ = 0;
  local_2220[0xc1] = false;
  local_2220[0xc3] = false;
  local_2220[200] = false;
  local_2150 = (undefined1  [8])0x0;
  pvStack_2148 = (void *)0x0;
  local_2280.Value = MenuPlacement_BelowAnchor;
  local_2280.bIsSet = false;
  local_2280.Getter._0_8_ = 0;
  local_2280.Getter._8_8_ = 0;
  FText::FText(&local_1ce8.Value);
  local_1ce8.bIsSet = false;
  local_1ce8.Getter._16_8_ = 0;
  local_22a0.Getter._16_8_ = 0;
  local_1ce8.Getter._0_8_ = 0;
  local_1ce8.Getter._8_8_ = 0;
  local_22a0.Value.Value.Value = (TEnumAsByte<EVisibility::Private>)0x19;
  local_22a0.bIsSet = false;
  local_22a0.Getter._0_8_ = 0;
  local_22a0.Getter._8_8_ = 0;
  local_26d0 = (FArguments *)0x0;
  pFVar4 = FSlateIcon::FSlateIcon(&local_1a30);
  local_1f58._0_8_ = pFVar4->StyleSetName;
  local_1f58._8_8_ = pFVar4->StyleName;
  local_1f58._16_8_ = pFVar4->SmallStyleName;
  local_1f58._24_8_ = pFVar4->StatusOverlayStyleName;
  local_1f58[0x20] = true;
  local_1f20 = 0;
  local_1f30 = (undefined1  [8])0x0;
  pvStack_1f28 = (void *)0x0;
  pFVar5 = FText::GetEmpty();
  TAttribute<FText>::TAttribute<FText><FText>((TAttribute<FText> *)local_1bf8,pFVar5);
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_1b28,L"SSlateOptions",L"EnsureLabel",L"Runtime Validation");
  FText::FText((FText *)local_2310,pFVar5);
  local_2310[0x10] = true;
  local_22e8 = 0;
  local_22f8 = (undefined1  [8])0x0;
  pvStack_22f0 = (void *)0x0;
  pTVar9 = TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::CreateStatic<>
                     ((TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *)
                      local_1e10,`SSlateOptions::Construct'::__l2::ValidationLocal::FillToolbar);
  pFVar8 = FUIAction::FUIAction(&local_18e8);
  FToolBarBuilder::AddComboButton
            (&local_20d8,pFVar8,pTVar9,(TAttribute<FText> *)local_2310,
             (TAttribute<FText> *)local_1bf8,(TAttribute<FSlateIcon> *)local_1f58,false,(FName)0x0,
             &local_22a0,&local_1ce8,&local_2280,Button,
             (TAttribute<FMenuEntryResizeParams> *)local_2220);
  FUIAction::~FUIAction(&local_18e8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1e10);
  if ((void *)local_1e10._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1e10._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1e10);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_22f8);
  if (pvStack_22f0 != (void *)0x0) {
    FMemory::Free(pvStack_22f0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_22f8);
  if ((ITextData *)local_2310._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_2310._0_8_ + 0x10))();
  }
  if (local_1b28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1b28.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1be0);
  if ((void *)local_1be0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1be0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1be0);
  if ((ITextData *)local_1bf8._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_1bf8._0_8_ + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f30);
  if (pvStack_1f28 != (void *)0x0) {
    FMemory::Free(pvStack_1f28);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1f30);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2150);
  if (pvStack_2148 != (void *)0x0) {
    FMemory::Free(pvStack_2148);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2150);
  FMenuEntryResizeParams::~FMenuEntryResizeParams((FMenuEntryResizeParams *)local_2220);
  pFVar10 = SBorder::FArguments::FArguments(&local_1080);
  pIVar11 = FAppStyle::Get();
  pcVar2 = *(code **)((longlong)*pIVar11 + 0x50);
  pFVar12 = ::FName::FName(&local_1bb8,"ToolPanel.GroupBorder");
  local_1f80.Value = (FSlateBrush *)(*pcVar2)(pIVar11,*pFVar12,0,0);
  local_1f80.bIsSet = true;
  local_1f80.Getter._16_8_ = 0;
  local_1f80.Getter._0_8_ = 0;
  local_1f80.Getter._8_8_ = 0;
  pFVar10 = SBorder::FArguments::BorderImage(pFVar10,&local_1f80);
  local_26d8 = SBorder::FArguments::Padding(pFVar10,__real_40000000);
  pFVar13 = SHorizontalBox::FArguments::FArguments(&local_15c8);
  pFVar14 = SHorizontalBox::Slot(&local_16b0);
  pFVar14 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar14);
  if (local_2318 != (undefined4 *)&pFVar14->field_0x50) {
    *(undefined4 *)&pFVar14->field_0x50 = 2;
    pFVar14->field_0x54 = 1;
  }
  pFVar29 = pFVar32;
  if (pFVar14 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar29 = pFVar14;
  }
  pFVar14 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar29->field_0x18,0.0,0.0,__real_40800000,0.0);
  pFVar15 = STextBlock::FArguments::FArguments(&local_ca0);
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_2128,L"SSlateOptions",L"AppScale",L"Application Scale: ");
  FText::FText(&local_1d18.Value,pFVar5);
  local_1d18.bIsSet = true;
  local_1d18.Getter._16_8_ = 0;
  local_1d18.Getter._0_8_ = 0;
  local_1d18.Getter._8_8_ = 0;
  pFVar15 = STextBlock::FArguments::Text(pFVar15,&local_1d18);
  this_00 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_1a98,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SSlateOptions.cpp"
                       ,0xe6,(T0RequiredArgs *)local_res18);
  pTVar16 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_00,&local_1c88,pFVar15);
  pTVar1 = (pTVar16->SharedReferenceCount).ReferenceController;
  local_2598.Object = (SWidget *)pTVar16->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2598.SharedReferenceCount.ReferenceController = pTVar1;
  pFVar14 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar14,&local_2598);
  local_26d0 = SHorizontalBox::FArguments::operator+(pFVar13,pFVar14);
  pFVar14 = SHorizontalBox::Slot(&local_1798);
  local_26b8 = (FName)SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar14);
  pFVar17 = SBox::FArguments::FArguments(&local_13c0);
  local_2538 = 0x42c80000;
  local_2534 = 1;
  local_2530 = (undefined1  [8])0x0;
  pvStack_2528 = (void *)0x0;
  local_2520 = 0;
  (pFVar17->_MinDesiredWidth).Value.Size = 100.0;
  (pFVar17->_MinDesiredWidth).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar17->_MinDesiredWidth).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2530);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2530);
  if (pvStack_2528 != (void *)0x0) {
    FMemory::Free(pvStack_2528);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2530);
  local_2558 = 0x437a0000;
  local_2554 = 1;
  local_2550 = (undefined1  [8])0x0;
  pvStack_2548 = (void *)0x0;
  local_2540 = 0;
  (pFVar17->_MaxDesiredWidth).Value.Size = 250.0;
  (pFVar17->_MaxDesiredWidth).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar17->_MaxDesiredWidth).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2550);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2550);
  if (pvStack_2548 != (void *)0x0) {
    FMemory::Free(pvStack_2548);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2550);
  pFVar18 = SSpinBox<float>::FArguments::FArguments(&local_748);
  (pFVar18->_Value).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar18->_Value).Getter,
             &local_1b18.WriteScope);
  local_1b18.Allocation = (FDelegateAllocation *)&(pFVar18->_Value).Getter.field_0x8;
  this_01 = UE::Core::Private::DelegateAllocate(0x38,local_1b18.Allocation);
  pSVar30 = this;
  FVar31.ReferenceController = local_25a8.SharedReferenceCount.ReferenceController;
  if (this_01 !=
      (TBaseSPMethodDelegateInstance<1,SSlateOptions_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
       *)0x0) {
    uStack_25bc = local_2128._12_4_;
    local_25c8 = (FName)HandleAppScaleSliderValue;
    uStack_25c0 = 0;
    pTVar19 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_1b38);
    pSVar30 = (SSlateOptions *)(pTVar19->SharedReferenceCount).ReferenceController;
    local_25a8.Object = (SSlateOptions *)pTVar19->Object;
    if (pSVar30 != (SSlateOptions *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar30->field_0x8 =
           (atomic<int>)((int)*(atomic<int> *)&pSVar30->field_0x8 + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar30->field_0x8 =
           (atomic<int>)((int)*(atomic<int> *)&pSVar30->field_0x8 + 1);
      UNLOCK();
    }
    uStack_1c00._4_4_ = uStack_25bc;
    uStack_1c00._0_4_ = uStack_25c0;
    local_1c08 = local_25c8;
    local_25a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pSVar30;
    TBaseSPMethodDelegateInstance<1,SSlateOptions_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
    ::
    TBaseSPMethodDelegateInstance<1,SSlateOptions_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy><>
              (this_01,&local_25a8,(pmf_c7ecd4ad *)&local_1c08);
    pFVar32 = (FSlotArguments *)&DAT_00000007;
    FVar31.ReferenceController = (TReferenceControllerBase<1> *)pSVar30;
  }
  if (((ulonglong)pFVar32 & 4) != 0) {
    pFVar32 = (FSlotArguments *)(ulonglong)((uint)pFVar32 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar31.ReferenceController);
  }
  if (((ulonglong)pFVar32 & 2) != 0) {
    pFVar32 = (FSlotArguments *)(ulonglong)((uint)pFVar32 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar30);
  }
  if (((ulonglong)pFVar32 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1b38.SharedReferenceCount.ReferenceController);
  }
  TWriteLockedDelegateAllocation<FNotThreadSafeDelegateMode>::
  ~TWriteLockedDelegateAllocation<FNotThreadSafeDelegateMode>(&local_1b18);
  local_26c8 = 0.5;
  pTVar20 = TAttribute<TOptional<float>_>::TAttribute<TOptional<float>_><float>
                      (&local_19d0,&local_26c8);
  pFVar18 = SSpinBox<float>::FArguments::MinValue(pFVar18,pTVar20);
  local_26c4 = 3.0;
  pTVar20 = TAttribute<TOptional<float>_>::TAttribute<TOptional<float>_><float>
                      (&local_19a8,&local_26c4);
  pFVar18 = SSpinBox<float>::FArguments::MaxValue(pFVar18,pTVar20);
  local_26c0 = 0.01;
  pTVar21 = TAttribute<float>::TAttribute<float>(&local_1a10,&local_26c0);
  pFVar18 = SSpinBox<float>::FArguments::Delta(pFVar18,pTVar21);
  local_2598.Object = (SWidget *)HandleAppScaleSliderChanged;
  local_2598.SharedReferenceCount.ReferenceController =
       local_2598.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_1b48 = HandleAppScaleSliderChanged;
  pTStack_1b40 = local_2598.SharedReferenceCount.ReferenceController;
  pFVar18 = SSpinBox<float>::FArguments::OnValueChanged<SSlateOptions>
                      (pFVar18,this,(pmf_d17de8cd *)&local_1b48);
  this_02 = MakeTDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>
                      (&local_1ab0,"SSpinBox<float>",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SSlateOptions.cpp"
                       ,0xf1,local_res20);
  pTVar22 = TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_02,&local_1c78,pFVar18);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSpinBox<float>_>(&local_2108,pTVar22);
  pFVar17 = SBox::FArguments::operator[](pFVar17,&local_2108);
  this_03 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                      (&local_1ac8,"SBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SSlateOptions.cpp"
                       ,0xed,&local_26f8);
  pTVar23 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=(this_03,&local_1c68,pFVar17);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>(&local_2118,pTVar23);
  pFVar32 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_26b8,&local_2118);
  pFVar13 = SHorizontalBox::FArguments::operator+(local_26d0,pFVar32);
  pFVar32 = SHorizontalBox::Slot(&local_1880);
  local_26bc = 1;
  pTVar21 = TAttribute<float>::TAttribute<float><int>(&local_19f0,&local_26bc);
  pFVar32 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(pFVar32,pTVar21);
  pFVar24 = FMargin::FMargin(&local_1a80,__real_40a00000,0.0);
  pTVar25 = TAttribute<FMargin>::TAttribute<FMargin>(&local_1980,pFVar24);
  pFVar32 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar32->field_0x18,pTVar25);
  pTVar26 = FMultiBoxBuilder::MakeWidget
                      ((FMultiBoxBuilder *)&local_20d8,&local_1c58,
                       (TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
                        *)0x0);
  pFVar32 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar32,pTVar26);
  pFVar13 = SHorizontalBox::FArguments::operator+(pFVar13,pFVar32);
  this_04 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_1ae0,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SSlateOptions.cpp"
                       ,0xdf,&local_26f7);
  pTVar27 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_04,&local_1c38,pFVar13);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_20e8,pTVar27);
  pFVar10 = SBorder::FArguments::operator[](local_26d8,&local_20e8);
  this_05 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_1af8,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SSlateOptions.cpp"
                       ,0xdb,local_26f6);
  pTVar28 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_05,&local_1c28,pFVar10);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_2138,pTVar28);
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
             &this->field_0x218,&local_2138);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2138.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1af8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20e8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1ae0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c58.SharedReferenceCount.ReferenceController);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1880);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2118.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c68.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1ac8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2108.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c78.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1ab0._Widget.SharedReferenceCount.ReferenceController);
  SSpinBox<float>::FArguments::~FArguments(&local_748);
  SBox::FArguments::~FArguments(&local_13c0);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1798);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c88.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a98._Widget.SharedReferenceCount.ReferenceController);
  FText::~FText(&local_2128);
  STextBlock::FArguments::~FArguments(&local_ca0);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_16b0);
  SHorizontalBox::FArguments::~FArguments(&local_15c8);
  SBorder::FArguments::~FArguments(&local_1080);
  FToolBarBuilder::~FToolBarBuilder(&local_20d8);
  return;
}

// FillPaintSubmenu @ 142e80da0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl `SSlateOptions::Construct'::__l2::DebugLocal::FillPaintSubmenu(FMenuBuilder *param_1)

{
  FName FVar1;
  FName *pFVar2;
  FText *pFVar3;
  FName local_res20;
  FText local_38;
  FSlateIcon local_28;
  
  pFVar2 = ::FName::FName(&local_res20,"Icon.Empty");
  FVar1 = *pFVar2;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&StyleSetName,L"WidgetReflectorStyleStyle");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FSlateIcon::FSlateIcon(&local_28,StyleSetName,FVar1,(FName)0x0,(FName)0x0);
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"SSlateOptions",L"Paint_OnlyGameWindow",L"Only Game Window");
  __l2::Local::AddMenuEntry(param_1,&local_28,pFVar3,L"SlateDebugger.Paint.OnlyGameWindow",true);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"SSlateOptions",L"Paint_ToggleWidgetNameList",
                      L"Toggle Widget Name List");
  __l2::Local::AddMenuEntry
            (param_1,&local_28,pFVar3,L"SlateDebugger.Paint.EnableWidgetNameList",true);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"SSlateOptions",L"Paint_Draw Border",L"Draw Border");
  __l2::Local::AddMenuEntry(param_1,&local_28,pFVar3,L"SlateDebugger.Paint.DrawBorder",true);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"SSlateOptions",L"Paint_Draw Fill",L"Draw Fill");
  __l2::Local::AddMenuEntry(param_1,&local_28,pFVar3,L"SlateDebugger.Paint.DrawFill",true);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return;
}

// FillPrepassSubmenu @ 142e80fa0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl `SSlateOptions::Construct'::__l2::DebugLocal::FillPrepassSubmenu(FMenuBuilder *param_1)

{
  FName FVar1;
  FName *pFVar2;
  FText *pFVar3;
  FName local_res20;
  FText local_38;
  FSlateIcon local_28;
  
  pFVar2 = ::FName::FName(&local_res20,"Icon.Empty");
  FVar1 = *pFVar2;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&StyleSetName,L"WidgetReflectorStyleStyle");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FSlateIcon::FSlateIcon(&local_28,StyleSetName,FVar1,(FName)0x0,(FName)0x0);
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"SSlateOptions",L"Prepass_OnlyGameWindow",L"Only Game Window");
  __l2::Local::AddMenuEntry(param_1,&local_28,pFVar3,L"SlateDebugger.Prepass.OnlyGameWindow",true);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"SSlateOptions",L"Prepass_ToggleWidgetNameList",
                      L"Toggle Widget Name List");
  __l2::Local::AddMenuEntry
            (param_1,&local_28,pFVar3,L"SlateDebugger.Prepass.EnableWidgetNameList",true);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"SSlateOptions",L"Prepass_Draw Border",L"Draw Border");
  __l2::Local::AddMenuEntry(param_1,&local_28,pFVar3,L"SlateDebugger.Prepass.DrawBorder",true);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"SSlateOptions",L"Prepass_Draw Fill",L"Draw Fill");
  __l2::Local::AddMenuEntry(param_1,&local_28,pFVar3,L"SlateDebugger.Prepass.DrawFill",true);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return;
}

// FillToolbar @ 142e811e0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SWidget,1> * __cdecl
`SSlateOptions::Construct'::__l2::DebugLocal::FillToolbar
          (TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  FName FVar1;
  ISlateStyle *pIVar2;
  FName *pFVar3;
  FText *pFVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FName local_res18;
  TSharedPtr<FUICommandList_const_,1> local_218;
  FDestructionSentinel local_208;
  FDelegateAllocation *local_1f0;
  undefined1 local_1e8 [8];
  FDelegateAllocation FStack_1e0;
  FSlateIcon local_1d0;
  undefined1 local_1b0 [128];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_130;
  ForAnyElementType FStack_128;
  ulonglong local_120;
  int local_118;
  bool local_114;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_110;
  ForAnyElementType FStack_108;
  ulonglong local_100;
  undefined1 local_f8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_f0;
  ForAnyElementType FStack_e8;
  ulonglong local_e0;
  undefined1 local_d8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d0;
  ForAnyElementType FStack_c8;
  ulonglong local_c0;
  undefined1 local_b8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b0;
  ForAnyElementType FStack_a8;
  ulonglong local_a0;
  int local_98;
  bool local_94;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_90;
  ForAnyElementType FStack_88;
  ulonglong local_80;
  undefined1 local_78 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_70;
  ForAnyElementType FStack_68;
  ulonglong local_60;
  bool local_57;
  bool local_55;
  bool local_50;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_48;
  ForAnyElementType FStack_40;
  ulonglong local_38;
  undefined4 local_30;
  
  pIVar2 = FAppStyle::Get();
  local_1e8 = (undefined1  [8])0x0;
  FStack_1e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_218.Object = (FUICommandList *)0x0;
  local_218.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FBaseMenuBuilder::FBaseMenuBuilder
            ((FBaseMenuBuilder *)local_1b0,Menu,true,&local_218,false,
             (TSharedPtr<FExtender,1> *)local_1e8,pIVar2,(FName)0x0,(FName)0x0);
  local_1b0._96_4_ = 0;
  local_1b0._100_4_ = 0;
  local_1b0._0_8_ = &___7FMenuBuilder__6B_;
  FText::FText((FText *)(local_1b0 + 0x68));
  local_1b0[0x78] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_1b0[0x79] = false;
  local_120 = 0;
  local_130.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_128.Data = (FScriptContainerElement *)0x0;
  memset(&local_118,0,200);
  local_118 = 0;
  local_100 = 0;
  local_e0 = 0;
  local_c0 = 0;
  local_a0 = 0;
  local_80 = 0;
  local_60 = 0;
  local_38 = 0;
  local_114 = false;
  local_110.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_108.Data = (FScriptContainerElement *)0x0;
  local_f8[0] = false;
  local_f8[1] = false;
  local_f0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_e8.Data = (FScriptContainerElement *)0x0;
  local_d8[0] = false;
  local_d8[1] = false;
  local_d0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_c8.Data = (FScriptContainerElement *)0x0;
  local_b8[0] = false;
  local_b8[1] = false;
  local_b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_a8.Data = (FScriptContainerElement *)0x0;
  local_98 = 0;
  local_94 = false;
  local_90.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_88.Data = (FScriptContainerElement *)0x0;
  local_78[0] = Preferred;
  local_78[1] = false;
  local_70.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_68.Data = (FScriptContainerElement *)0x0;
  local_57 = false;
  local_55 = false;
  local_50 = false;
  local_48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_40.Data = (FScriptContainerElement *)0x0;
  local_30._0_1_ = false;
  local_30._1_1_ = true;
  local_30._2_1_ = true;
  local_30._3_1_ = false;
  FMenuBuilder::AddSearchWidget((FMenuBuilder *)local_1b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pFVar3 = ::FName::FName(&local_res18,"Icon.Empty");
  FVar1 = *pFVar3;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&StyleSetName,L"WidgetReflectorStyleStyle");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FSlateIcon::FSlateIcon(&local_1d0,StyleSetName,FVar1,(FName)0x0,(FName)0x0);
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_218,L"SSlateOptions",L"EnableInvalidationPanels",
                      L"Enable InvalidationBox");
  __l2::Local::AddMenuEntry
            ((FMenuBuilder *)local_1b0,&local_1d0,pFVar4,L"Slate.EnableInvalidationPanels",true);
  if (local_218.Object != (FUICommandList *)0x0) {
    (**(code **)((local_218.Object)->_padding_ + 0x10))();
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_218,L"SSlateOptions",L"InvalidationDebugging",
                      L"Show Invalidation");
  __l2::Local::AddMenuEntry
            ((FMenuBuilder *)local_1b0,&local_1d0,pFVar4,L"SlateDebugger.Invalidate.Enable",true);
  if (local_218.Object != (FUICommandList *)0x0) {
    (**(code **)((local_218.Object)->_padding_ + 0x10))();
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_218,L"SSlateOptions",L"InvalidationRootDebugging",
                      L"Show Root Invalidation");
  __l2::Local::AddMenuEntry
            ((FMenuBuilder *)local_1b0,&local_1d0,pFVar4,L"SlateDebugger.InvalidationRoot.Enable",
             true);
  if (local_218.Object != (FUICommandList *)0x0) {
    (**(code **)((local_218.Object)->_padding_ + 0x10))();
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_218,L"SSlateOptions",L"UpdateDebugging",L"Show Update");
  __l2::Local::AddMenuEntry
            ((FMenuBuilder *)local_1b0,&local_1d0,pFVar4,L"SlateDebugger.Update.Enable",true);
  if (local_218.Object != (FUICommandList *)0x0) {
    (**(code **)((local_218.Object)->_padding_ + 0x10))();
  }
  local_1e8 = (undefined1  [8])0x0;
  FStack_1e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_1e0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1e8,
             (FWriteAccessScope *)&local_208);
  local_1f0 = &FStack_1e0;
  puVar5 = UE::Core::Private::DelegateAllocate(0x20,&FStack_1e0);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    puVar5[3] = FillPaintSubmenu;
    *puVar5 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
  }
  if (local_208.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_208.Accessor,&local_208);
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_218,L"SSlateOptions",L"PaintDebugging",L"Show Paint");
  __l2::Local::AddSubMenuEntry
            ((FMenuBuilder *)local_1b0,&local_1d0,pFVar4,L"SlateDebugger.Paint.Enable",
             (TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *)local_1e8,true);
  if (local_218.Object != (FUICommandList *)0x0) {
    (**(code **)((local_218.Object)->_padding_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1e8,
             (FWriteAccessScope *)&local_208);
  if ((FStack_1e0.DelegateSize != 0) &&
     (FStack_1e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (**(code **)*(longlong *)FStack_1e0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FStack_1e0,0,0,0x10);
    FStack_1e0.DelegateSize = 0;
  }
  if (local_208.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_208.Accessor,&local_208);
  }
  if (FStack_1e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FStack_1e0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1e8);
  local_1e8 = (undefined1  [8])0x0;
  FStack_1e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_1e0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1e8,
             (FWriteAccessScope *)&local_208);
  local_1f0 = &FStack_1e0;
  puVar5 = UE::Core::Private::DelegateAllocate(0x20,&FStack_1e0);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    puVar5[3] = FillPrepassSubmenu;
    *puVar5 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
  }
  if (local_208.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_208.Accessor,&local_208);
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_218,L"SSlateOptions",L"PrepassDebugging",L"Show Prepass");
  __l2::Local::AddSubMenuEntry
            ((FMenuBuilder *)local_1b0,&local_1d0,pFVar4,L"SlateDebugger.Prepass.Enable",
             (TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *)local_1e8,true);
  if (local_218.Object != (FUICommandList *)0x0) {
    (**(code **)((local_218.Object)->_padding_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1e8,
             (FWriteAccessScope *)&local_208);
  if ((FStack_1e0.DelegateSize != 0) &&
     (FStack_1e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (**(code **)*(longlong *)FStack_1e0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FStack_1e0,0,0,0x10);
    FStack_1e0.DelegateSize = 0;
  }
  if (local_208.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_208.Accessor,&local_208);
  }
  if (FStack_1e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FStack_1e0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1e8);
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_218,L"SSlateOptions",L"ShowClipping",L"Show Clipping");
  __l2::Local::AddMenuEntry((FMenuBuilder *)local_1b0,&local_1d0,pFVar4,L"Slate.ShowClipping",true);
  if (local_218.Object != (FUICommandList *)0x0) {
    (**(code **)((local_218.Object)->_padding_ + 0x10))();
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_218,L"SSlateOptions",L"DebugCulling",L"Debug Culling");
  __l2::Local::AddMenuEntry((FMenuBuilder *)local_1b0,&local_1d0,pFVar4,L"Slate.DebugCulling",true);
  if (local_218.Object != (FUICommandList *)0x0) {
    (**(code **)((local_218.Object)->_padding_ + 0x10))();
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_218,L"SSlateOptions",L"ShowHitTestGrid",L"Show HitTestGrid");
  __l2::Local::AddMenuEntry
            ((FMenuBuilder *)local_1b0,&local_1d0,pFVar4,L"Slate.HitTestGridDebugging",true);
  if (local_218.Object != (FUICommandList *)0x0) {
    (**(code **)((local_218.Object)->_padding_ + 0x10))();
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_218,L"SSlateOptions",L"DesignerRetainedRendering",
                      L"Designer Retained Rendering");
  __l2::Local::AddMenuEntry
            ((FMenuBuilder *)local_1b0,&local_1d0,pFVar4,L"Slate.EnableDesignerRetainedRendering",
             true);
  if (local_218.Object != (FUICommandList *)0x0) {
    (**(code **)((local_218.Object)->_padding_ + 0x10))();
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_218,L"SSlateOptions",L"ShowBatching",L"Show Batching");
  __l2::Local::AddMenuEntry((FMenuBuilder *)local_1b0,&local_1d0,pFVar4,L"Slate.ShowBatching",true);
  if (local_218.Object != (FUICommandList *)0x0) {
    (**(code **)((local_218.Object)->_padding_ + 0x10))();
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_218,L"SSlateOptions",L"ShowOverdraw",L"Show Overdraw");
  __l2::Local::AddMenuEntry((FMenuBuilder *)local_1b0,&local_1d0,pFVar4,L"Slate.ShowOverdraw",true);
  if (local_218.Object != (FUICommandList *)0x0) {
    (**(code **)((local_218.Object)->_padding_ + 0x10))();
  }
  FMenuBuilder::MakeWidget
            ((FMenuBuilder *)local_1b0,__return_storage_ptr__,
             (TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
              *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_48,(FWriteAccessScope *)&local_208);
  if (((int)local_38 != 0) && (FStack_40.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_40,0,0,0x10);
    local_38 = local_38 & 0xffffffff00000000;
  }
  if (local_208.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_208.Accessor,&local_208);
  }
  if (FStack_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_40.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_48.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_70,(FWriteAccessScope *)&local_208);
  if (((int)local_60 != 0) && (FStack_68.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_68.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_68,0,0,0x10);
    local_60 = local_60 & 0xffffffff00000000;
  }
  if (local_208.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_208.Accessor,&local_208);
  }
  if (FStack_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_68.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_70.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_90,(FWriteAccessScope *)&local_208);
  if (((int)local_80 != 0) && (FStack_88.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_88.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_88,0,0,0x10);
    local_80 = local_80 & 0xffffffff00000000;
  }
  if (local_208.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_208.Accessor,&local_208);
  }
  if (FStack_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_88.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_90.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b0,(FWriteAccessScope *)&local_208);
  if (((int)local_a0 != 0) && (FStack_a8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_a8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_a8,0,0,0x10);
    local_a0 = local_a0 & 0xffffffff00000000;
  }
  if (local_208.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_208.Accessor,&local_208);
  }
  if (FStack_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b0.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_d0,(FWriteAccessScope *)&local_208);
  if (((int)local_c0 != 0) && (FStack_c8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_c8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_c8,0,0,0x10);
    local_c0 = local_c0 & 0xffffffff00000000;
  }
  if (local_208.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_208.Accessor,&local_208);
  }
  if (FStack_c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_c8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d0.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_f0,(FWriteAccessScope *)&local_208);
  if (((int)local_e0 != 0) && (FStack_e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_e8,0,0,0x10);
    local_e0 = local_e0 & 0xffffffff00000000;
  }
  if (local_208.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_208.Accessor,&local_208);
  }
  if (FStack_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f0.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_110,(FWriteAccessScope *)&local_208);
  if (((int)local_100 != 0) && (FStack_108.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_108.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_108,0,0,0x10);
    local_100 = local_100 & 0xffffffff00000000;
  }
  if (local_208.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_208.Accessor,&local_208);
  }
  if (FStack_108.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_108.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_110.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_130,(FWriteAccessScope *)&local_208);
  if (((int)local_120 != 0) && (FStack_128.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_128.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_128,0,0,0x10);
    local_120 = local_120 & 0xffffffff00000000;
  }
  if (local_208.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_208.Accessor,&local_208);
  }
  if (FStack_128.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_128.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_130.AccessDetector);
  if ((ITextData *)local_1b0._104_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_1b0._104_8_ + 0x10))();
  }
  local_1b0._0_8_ = &___7FMultiBoxBuilder__6B_;
  DestructItems<TSharedPtr<FExtender,1>,int>
            ((TSharedPtr<FExtender,1> *)local_1b0._40_8_,local_1b0._48_4_);
  if ((TSharedPtr<FExtender,1> *)local_1b0._40_8_ != (TSharedPtr<FExtender,1> *)0x0) {
    FMemory::Free((void *)local_1b0._40_8_);
  }
  DestructItems<TSharedPtr<FUICommandList_const_,1>,int>
            ((TSharedPtr<FUICommandList_const_,1> *)local_1b0._24_8_,local_1b0._32_4_);
  if ((TSharedPtr<FUICommandList_const_,1> *)local_1b0._24_8_ !=
      (TSharedPtr<FUICommandList_const_,1> *)0x0) {
    FMemory::Free((void *)local_1b0._24_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1b0._16_8_);
  return __return_storage_ptr__;
}

// FillToolbar @ 142e81df0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SWidget,1> * __cdecl
`SSlateOptions::Construct'::__l2::GlobalLocal::FillToolbar
          (TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  FName FVar1;
  ISlateStyle *pIVar2;
  FName *pFVar3;
  FText *pFVar4;
  FName local_res18;
  longlong *local_1e8;
  FMRSWRecursiveAccessDetector *pFStack_1e0;
  bool local_1d8;
  undefined1 local_1d0 [128];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_150;
  ForAnyElementType FStack_148;
  ulonglong local_140;
  int local_138;
  bool local_134;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_130;
  ForAnyElementType FStack_128;
  ulonglong local_120;
  undefined1 local_118 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_110;
  ForAnyElementType FStack_108;
  ulonglong local_100;
  undefined1 local_f8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_f0;
  ForAnyElementType FStack_e8;
  ulonglong local_e0;
  undefined1 local_d8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d0;
  ForAnyElementType FStack_c8;
  ulonglong local_c0;
  int local_b8;
  bool local_b4;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b0;
  ForAnyElementType FStack_a8;
  ulonglong local_a0;
  undefined1 local_98 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_90;
  ForAnyElementType FStack_88;
  ulonglong local_80;
  bool local_77;
  bool local_75;
  bool local_70;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  ForAnyElementType FStack_60;
  ulonglong local_58;
  undefined4 local_50;
  FSlateIcon local_48;
  TSharedPtr<FExtender,1> local_28;
  
  pIVar2 = FAppStyle::Get();
  local_28.Object = (FExtender *)0x0;
  local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1e8 = (longlong *)0x0;
  pFStack_1e0 = (FMRSWRecursiveAccessDetector *)0x0;
  FBaseMenuBuilder::FBaseMenuBuilder
            ((FBaseMenuBuilder *)local_1d0,Menu,true,
             (TSharedPtr<FUICommandList_const_,1> *)&local_1e8,false,&local_28,pIVar2,(FName)0x0,
             (FName)0x0);
  local_1d0._96_4_ = 0;
  local_1d0._100_4_ = 0;
  local_1d0._0_8_ = &___7FMenuBuilder__6B_;
  FText::FText((FText *)(local_1d0 + 0x68));
  local_1d0[0x78] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_1d0[0x79] = false;
  local_140 = 0;
  local_150.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_148.Data = (FScriptContainerElement *)0x0;
  memset(&local_138,0,200);
  local_138 = 0;
  local_120 = 0;
  local_100 = 0;
  local_e0 = 0;
  local_c0 = 0;
  local_a0 = 0;
  local_80 = 0;
  local_58 = 0;
  local_134 = false;
  local_130.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_128.Data = (FScriptContainerElement *)0x0;
  local_118[0] = false;
  local_118[1] = false;
  local_110.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_108.Data = (FScriptContainerElement *)0x0;
  local_f8[0] = false;
  local_f8[1] = false;
  local_f0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_e8.Data = (FScriptContainerElement *)0x0;
  local_d8[0] = false;
  local_d8[1] = false;
  local_d0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_c8.Data = (FScriptContainerElement *)0x0;
  local_b8 = 0;
  local_b4 = false;
  local_b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_a8.Data = (FScriptContainerElement *)0x0;
  local_98[0] = Preferred;
  local_98[1] = false;
  local_90.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_88.Data = (FScriptContainerElement *)0x0;
  local_77 = false;
  local_75 = false;
  local_70 = false;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_60.Data = (FScriptContainerElement *)0x0;
  local_50._0_1_ = false;
  local_50._1_1_ = true;
  local_50._2_1_ = true;
  local_50._3_1_ = false;
  FMenuBuilder::AddSearchWidget((FMenuBuilder *)local_1d0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pFVar3 = ::FName::FName(&local_res18,"Icon.Empty");
  FVar1 = *pFVar3;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&StyleSetName,L"WidgetReflectorStyleStyle");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FSlateIcon::FSlateIcon(&local_48,StyleSetName,FVar1,(FName)0x0,(FName)0x0);
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_1e8,L"SSlateOptions",L"EnableFastWidgetPath",
                      L"Fast Widget Path");
  __l2::Local::AddMenuEntry
            ((FMenuBuilder *)local_1d0,&local_48,pFVar4,L"Slate.EnableFastWidgetPath",false);
  if ((FUICommandList *)local_1e8 != (FUICommandList *)0x0) {
    (**(code **)(*local_1e8 + 0x10))();
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_1e8,L"SSlateOptions",L"EnableToolTips",L"Enable Tooltips");
  __l2::Local::AddMenuEntry((FMenuBuilder *)local_1d0,&local_48,pFVar4,L"Slate.EnableTooltips",true)
  ;
  if ((FUICommandList *)local_1e8 != (FUICommandList *)0x0) {
    (**(code **)(*local_1e8 + 0x10))();
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_1e8,L"SSlateOptions",L"GlobalInvalidation",
                      L"Global Invalidation");
  __l2::Local::AddMenuEntry
            ((FMenuBuilder *)local_1d0,&local_48,pFVar4,L"Slate.EnableGlobalInvalidation",true);
  if ((FUICommandList *)local_1e8 != (FUICommandList *)0x0) {
    (**(code **)(*local_1e8 + 0x10))();
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_1e8,L"SSlateOptions",L"DisabledEffect",
                      L"Transparent Disabled Effect");
  __l2::Local::AddMenuEntry
            ((FMenuBuilder *)local_1d0,&local_48,pFVar4,L"Slate.ApplyDisabledEffectOnWidgets",true);
  if ((FUICommandList *)local_1e8 != (FUICommandList *)0x0) {
    (**(code **)(*local_1e8 + 0x10))();
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_1e8,L"SSlateOptions",L"FocusOnPick",L"Focus On Pick");
  __l2::Local::AddMenuEntry
            ((FMenuBuilder *)local_1d0,&local_48,pFVar4,L"Slate.EnableFocusOnPick",true);
  if ((FUICommandList *)local_1e8 != (FUICommandList *)0x0) {
    (**(code **)(*local_1e8 + 0x10))();
  }
  FMenuBuilder::MakeWidget
            ((FMenuBuilder *)local_1d0,__return_storage_ptr__,
             (TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
              *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_1e8);
  if (((int)local_58 != 0) && (FStack_60.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_60.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_60,0,0,0x10);
    local_58 = local_58 & 0xffffffff00000000;
  }
  if (local_1d8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(pFStack_1e0,(FDestructionSentinel *)&local_1e8)
    ;
  }
  if (FStack_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_60.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_90,(FWriteAccessScope *)&local_1e8);
  if (((int)local_80 != 0) && (FStack_88.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_88.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_88,0,0,0x10);
    local_80 = local_80 & 0xffffffff00000000;
  }
  if (local_1d8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(pFStack_1e0,(FDestructionSentinel *)&local_1e8)
    ;
  }
  if (FStack_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_88.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_90.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b0,(FWriteAccessScope *)&local_1e8);
  if (((int)local_a0 != 0) && (FStack_a8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_a8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_a8,0,0,0x10);
    local_a0 = local_a0 & 0xffffffff00000000;
  }
  if (local_1d8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(pFStack_1e0,(FDestructionSentinel *)&local_1e8)
    ;
  }
  if (FStack_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b0.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_d0,(FWriteAccessScope *)&local_1e8);
  if (((int)local_c0 != 0) && (FStack_c8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_c8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_c8,0,0,0x10);
    local_c0 = local_c0 & 0xffffffff00000000;
  }
  if (local_1d8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(pFStack_1e0,(FDestructionSentinel *)&local_1e8)
    ;
  }
  if (FStack_c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_c8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d0.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_f0,(FWriteAccessScope *)&local_1e8);
  if (((int)local_e0 != 0) && (FStack_e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_e8,0,0,0x10);
    local_e0 = local_e0 & 0xffffffff00000000;
  }
  if (local_1d8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(pFStack_1e0,(FDestructionSentinel *)&local_1e8)
    ;
  }
  if (FStack_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f0.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_110,(FWriteAccessScope *)&local_1e8);
  if (((int)local_100 != 0) && (FStack_108.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_108.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_108,0,0,0x10);
    local_100 = local_100 & 0xffffffff00000000;
  }
  if (local_1d8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(pFStack_1e0,(FDestructionSentinel *)&local_1e8)
    ;
  }
  if (FStack_108.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_108.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_110.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_130,(FWriteAccessScope *)&local_1e8);
  if (((int)local_120 != 0) && (FStack_128.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_128.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_128,0,0,0x10);
    local_120 = local_120 & 0xffffffff00000000;
  }
  if (local_1d8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(pFStack_1e0,(FDestructionSentinel *)&local_1e8)
    ;
  }
  if (FStack_128.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_128.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_130.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_150,(FWriteAccessScope *)&local_1e8);
  if (((int)local_140 != 0) && (FStack_148.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_148.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_148,0,0,0x10);
    local_140 = local_140 & 0xffffffff00000000;
  }
  if (local_1d8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(pFStack_1e0,(FDestructionSentinel *)&local_1e8)
    ;
  }
  if (FStack_148.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_148.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_150.AccessDetector);
  if ((ITextData *)local_1d0._104_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_1d0._104_8_ + 0x10))();
  }
  local_1d0._0_8_ = &___7FMultiBoxBuilder__6B_;
  DestructItems<TSharedPtr<FExtender,1>,int>
            ((TSharedPtr<FExtender,1> *)local_1d0._40_8_,local_1d0._48_4_);
  if ((TSharedPtr<FExtender,1> *)local_1d0._40_8_ != (TSharedPtr<FExtender,1> *)0x0) {
    FMemory::Free((void *)local_1d0._40_8_);
  }
  DestructItems<TSharedPtr<FUICommandList_const_,1>,int>
            ((TSharedPtr<FUICommandList_const_,1> *)local_1d0._24_8_,local_1d0._32_4_);
  if ((TSharedPtr<FUICommandList_const_,1> *)local_1d0._24_8_ !=
      (TSharedPtr<FUICommandList_const_,1> *)0x0) {
    FMemory::Free((void *)local_1d0._24_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1d0._16_8_);
  return __return_storage_ptr__;
}

// FillToolbar @ 142e825e0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SWidget,1> * __cdecl
`SSlateOptions::Construct'::__l2::ValidationLocal::FillToolbar
          (TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  FName FVar1;
  ISlateStyle *pIVar2;
  FName *pFVar3;
  FText *pFVar4;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  TSharedPtr<FUICommandList_const_,1> local_328;
  FDestructionSentinel local_318;
  undefined1 local_300 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2f8;
  ForAnyElementType FStack_2f0;
  ulonglong local_2e8;
  FSlateIcon local_2e0;
  undefined1 local_2c0 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2b8;
  ForAnyElementType FStack_2b0;
  ulonglong local_2a8;
  undefined1 local_2a0 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_298;
  ForAnyElementType FStack_290;
  ulonglong local_288;
  undefined1 local_280 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_278;
  ForAnyElementType FStack_270;
  ulonglong local_268;
  undefined1 local_260 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_258;
  ForAnyElementType FStack_250;
  ulonglong local_248;
  int local_240;
  bool local_23c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_238;
  ForAnyElementType FStack_230;
  ulonglong local_228;
  undefined1 local_220 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_218;
  ForAnyElementType FStack_210;
  ulonglong local_208;
  bool local_1ff;
  bool local_1fd;
  bool local_1f8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1f0;
  ForAnyElementType FStack_1e8;
  ulonglong local_1e0;
  undefined1 local_1d8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1c0;
  ForAnyElementType FStack_1b8;
  ulonglong local_1b0;
  FMenuBuilder local_1a8;
  
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pIVar2 = FAppStyle::Get();
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  local_318.AccessType = Reader;
  local_318._4_4_ = 0;
  local_318.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
  local_328.Object = (FUICommandList *)0x0;
  local_328.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FBaseMenuBuilder::FBaseMenuBuilder
            ((FBaseMenuBuilder *)&local_1a8,Menu,true,&local_328,false,
             (TSharedPtr<FExtender,1> *)&local_318,pIVar2,(FName)0x0,(FName)0x0);
  local_1a8.CurrentSectionExtensionHook.ComparisonIndex.Value = 0;
  local_1a8.CurrentSectionExtensionHook.Number = 0;
  local_1a8._padding_ = (longlong)&___7FMenuBuilder__6B_;
  FText::FText(&local_1a8.CurrentSectionHeadingText);
  local_1a8.CurrentSectionVisibility.Value.Value.Value = (TEnumAsByte<EVisibility::Private>)0x19;
  local_1a8.CurrentSectionVisibility.bIsSet = false;
  local_1a8.CurrentSectionVisibility.Getter._16_8_ = 0;
  local_1a8.CurrentSectionVisibility.Getter._0_8_ = 0;
  local_1a8.CurrentSectionVisibility.Getter._8_8_ = 0;
  memset(&local_1a8.CurrentSectionResizeParams,0,200);
  local_1a8.CurrentSectionResizeParams.Value.ClippingPriority.Value = 0;
  local_1a8.CurrentSectionResizeParams.Value.ClippingPriority.Getter._16_8_ = 0;
  local_1a8.CurrentSectionResizeParams.Value.AllowClipping.Getter._16_8_ = 0;
  local_1a8.CurrentSectionResizeParams.Value.VisibleInOverflow.Getter._16_8_ = 0;
  local_1a8.CurrentSectionResizeParams.Value.Wrapping.Allow.Getter._16_8_ = 0;
  local_1a8.CurrentSectionResizeParams.Value.Wrapping.Priority.Getter._16_8_ = 0;
  local_1a8.CurrentSectionResizeParams.Value.Wrapping.Mode.Getter._16_8_ = 0;
  local_1a8.CurrentSectionResizeParams.Getter._16_8_ = 0;
  local_1a8.CurrentSectionResizeParams.Value.ClippingPriority.bIsSet = false;
  local_1a8.CurrentSectionResizeParams.Value.ClippingPriority.Getter._0_8_ = 0;
  local_1a8.CurrentSectionResizeParams.Value.ClippingPriority.Getter._8_8_ = 0;
  local_1a8.CurrentSectionResizeParams.Value.AllowClipping.Value = false;
  local_1a8.CurrentSectionResizeParams.Value.AllowClipping.bIsSet = false;
  local_1a8.CurrentSectionResizeParams.Value.AllowClipping.Getter._0_8_ = 0;
  local_1a8.CurrentSectionResizeParams.Value.AllowClipping.Getter._8_8_ = 0;
  local_1a8.CurrentSectionResizeParams.Value.VisibleInOverflow.Value = false;
  local_1a8.CurrentSectionResizeParams.Value.VisibleInOverflow.bIsSet = false;
  local_1a8.CurrentSectionResizeParams.Value.VisibleInOverflow.Getter._0_8_ = 0;
  local_1a8.CurrentSectionResizeParams.Value.VisibleInOverflow.Getter._8_8_ = 0;
  local_1a8.CurrentSectionResizeParams.Value.Wrapping.Allow.Value = false;
  local_1a8.CurrentSectionResizeParams.Value.Wrapping.Allow.bIsSet = false;
  local_1a8.CurrentSectionResizeParams.Value.Wrapping.Allow.Getter._0_8_ = 0;
  local_1a8.CurrentSectionResizeParams.Value.Wrapping.Allow.Getter._8_8_ = 0;
  local_1a8.CurrentSectionResizeParams.Value.Wrapping.Priority.Value = 0;
  local_1a8.CurrentSectionResizeParams.Value.Wrapping.Priority.bIsSet = false;
  local_1a8.CurrentSectionResizeParams.Value.Wrapping.Priority.Getter._0_8_ = 0;
  local_1a8.CurrentSectionResizeParams.Value.Wrapping.Priority.Getter._8_8_ = 0;
  local_1a8.CurrentSectionResizeParams.Value.Wrapping.Mode.Value = Preferred;
  local_1a8.CurrentSectionResizeParams.Value.Wrapping.Mode.bIsSet = false;
  local_1a8.CurrentSectionResizeParams.Value.Wrapping.Mode.Getter._0_8_ = 0;
  local_1a8.CurrentSectionResizeParams.Value.Wrapping.Mode.Getter._8_8_ = 0;
  local_1a8.CurrentSectionResizeParams.Value.Wrapping.VerticalOverflowBehavior.bIsSet = false;
  local_1a8.CurrentSectionResizeParams.Value.Wrapping.ForceNewLine.bIsSet = false;
  local_1a8.CurrentSectionResizeParams.bIsSet = false;
  local_1a8.CurrentSectionResizeParams.Getter._0_8_ = 0;
  local_1a8.CurrentSectionResizeParams.Getter._8_8_ = 0;
  local_1a8.bSectionNeedsToBeApplied = false;
  local_1a8.bSearchable = true;
  local_1a8.bRecursivelySearchable = true;
  local_1a8.bIsEditing = false;
  FMenuBuilder::AddSearchWidget(&local_1a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  pFVar3 = ::FName::FName(&local_res18,"Icon.Empty");
  FVar1 = *pFVar3;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&StyleSetName,L"WidgetReflectorStyleStyle");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FSlateIcon::FSlateIcon(&local_2e0,StyleSetName,FVar1,local_res10,local_res8);
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_328,L"SSlateOptions",L"VerifyParentChildrenRelationship",
                      L"Verify Parent/Children Relationship");
  __l2::Local::AddMenuEntry
            (&local_1a8,&local_2e0,pFVar4,L"Slate.VerifyParentChildrenRelationship",true);
  if (local_328.Object != (FUICommandList *)0x0) {
    (**(code **)((local_328.Object)->_padding_ + 0x10))();
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_328,L"SSlateOptions",L"VerifyLayerId",L"Verify LayerId");
  __l2::Local::AddMenuEntry(&local_1a8,&local_2e0,pFVar4,L"Slate.VerifyWidgetLayerId",true);
  if (local_328.Object != (FUICommandList *)0x0) {
    (**(code **)((local_328.Object)->_padding_ + 0x10))();
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_328,L"SSlateOptions",L"VerifyOutgoingLayerId",
                      L"Verify Outgoing LayerId");
  __l2::Local::AddMenuEntry(&local_1a8,&local_2e0,pFVar4,L"Slate.EnsureOutgoingLayerId",true);
  if (local_328.Object != (FUICommandList *)0x0) {
    (**(code **)((local_328.Object)->_padding_ + 0x10))();
  }
  memset(local_2c0,0,200);
  local_240 = 0;
  local_2a8 = 0;
  local_288 = 0;
  local_268 = 0;
  local_248 = 0;
  local_228 = 0;
  local_208 = 0;
  local_1e0 = 0;
  local_2e8 = 0;
  local_2b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2b0.Data = (FScriptContainerElement *)0x0;
  local_2a0[0] = false;
  local_2a0[1] = false;
  local_298.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_290.Data = (FScriptContainerElement *)0x0;
  local_280[0] = false;
  local_280[1] = false;
  local_278.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_270.Data = (FScriptContainerElement *)0x0;
  local_260[0] = false;
  local_260[1] = false;
  local_258.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_250.Data = (FScriptContainerElement *)0x0;
  local_23c = false;
  local_238.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_230.Data = (FScriptContainerElement *)0x0;
  local_220[0] = Preferred;
  local_220[1] = false;
  local_218.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_210.Data = (FScriptContainerElement *)0x0;
  local_1ff = false;
  local_1fd = false;
  local_1f8 = false;
  local_1f0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1e8.Data = (FScriptContainerElement *)0x0;
  local_300[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_300[1] = false;
  local_2f8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2f0.Data = (FScriptContainerElement *)0x0;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_328,L"SSlateOptions",L"Invalidation",L"Invalidation");
  FText::FText((FText *)local_1d8,pFVar4);
  local_1d8[0x10] = true;
  local_1b0 = 0;
  local_1c0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1b8.Data = (FScriptContainerElement *)0x0;
  pFVar3 = ::FName::FName(&local_res8,"InvalidationRoot");
  FMenuBuilder::BeginSection
            (&local_1a8,*pFVar3,(TAttribute<FText> *)local_1d8,(TAttribute<EVisibility> *)local_300,
             (TAttribute<FMenuEntryResizeParams> *)local_2c0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1c0,(FWriteAccessScope *)&local_318);
  if (((int)local_1b0 != 0) && (FStack_1b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1b8,0,0,0x10);
    local_1b0 = local_1b0 & 0xffffffff00000000;
  }
  if (local_318.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_318.Accessor,&local_318);
  }
  if (FStack_1b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1c0.AccessDetector);
  if ((ITextData *)local_1d8._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_1d8._0_8_ + 0x10))();
  }
  if (local_328.Object != (FUICommandList *)0x0) {
    (**(code **)((local_328.Object)->_padding_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2f8,(FWriteAccessScope *)&local_318);
  if (((int)local_2e8 != 0) && (FStack_2f0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2f0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2f0,0,0,0x10);
    local_2e8 = local_2e8 & 0xffffffff00000000;
  }
  if (local_318.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_318.Accessor,&local_318);
  }
  if (FStack_2f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2f0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2f8.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1f0,(FWriteAccessScope *)&local_318);
  if (((int)local_1e0 != 0) && (FStack_1e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1e8,0,0,0x10);
    local_1e0 = local_1e0 & 0xffffffff00000000;
  }
  if (local_318.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_318.Accessor,&local_318);
  }
  if (FStack_1e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1f0.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_218,(FWriteAccessScope *)&local_318);
  if (((int)local_208 != 0) && (FStack_210.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_210.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_210,0,0,0x10);
    local_208 = local_208 & 0xffffffff00000000;
  }
  if (local_318.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_318.Accessor,&local_318);
  }
  if (FStack_210.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_210.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_218.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_238,(FWriteAccessScope *)&local_318);
  if (((int)local_228 != 0) && (FStack_230.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_230.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_230,0,0,0x10);
    local_228 = local_228 & 0xffffffff00000000;
  }
  if (local_318.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_318.Accessor,&local_318);
  }
  if (FStack_230.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_230.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_238.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_258,(FWriteAccessScope *)&local_318);
  if (((int)local_248 != 0) && (FStack_250.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_250.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_250,0,0,0x10);
    local_248 = local_248 & 0xffffffff00000000;
  }
  if (local_318.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_318.Accessor,&local_318);
  }
  if (FStack_250.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_250.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_258.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_278,(FWriteAccessScope *)&local_318);
  if (((int)local_268 != 0) && (FStack_270.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_270.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_270,0,0,0x10);
    local_268 = local_268 & 0xffffffff00000000;
  }
  if (local_318.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_318.Accessor,&local_318);
  }
  if (FStack_270.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_270.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_278.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_298,(FWriteAccessScope *)&local_318);
  if (((int)local_288 != 0) && (FStack_290.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_290.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_290,0,0,0x10);
    local_288 = local_288 & 0xffffffff00000000;
  }
  if (local_318.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_318.Accessor,&local_318);
  }
  if (FStack_290.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_290.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_298.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2b8,(FWriteAccessScope *)&local_318);
  if (((int)local_2a8 != 0) && (FStack_2b0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2b0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2b0,0,0,0x10);
    local_2a8 = local_2a8 & 0xffffffff00000000;
  }
  if (local_318.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_318.Accessor,&local_318);
  }
  if (FStack_2b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2b0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2b8.AccessDetector);
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_328,L"SSlateOptions",L"EnsureAllVisibleWidgetsPaint",
                      L"Verify Visible Widgets Paint");
  __l2::Local::AddMenuEntry(&local_1a8,&local_2e0,pFVar4,L"Slate.EnsureAllVisibleWidgetsPaint",true)
  ;
  if (local_328.Object != (FUICommandList *)0x0) {
    (**(code **)((local_328.Object)->_padding_ + 0x10))();
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_328,L"SSlateOptions",L"VerifyWidgetList",L"Verify Widget List"
                     );
  __l2::Local::AddMenuEntry
            (&local_1a8,&local_2e0,pFVar4,L"Slate.InvalidationRoot.VerifyWidgetList",true);
  if (local_328.Object != (FUICommandList *)0x0) {
    (**(code **)((local_328.Object)->_padding_ + 0x10))();
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_328,L"SSlateOptions",L"VerifyWidgetIndex",
                      L"Verify Widget\'s index");
  __l2::Local::AddMenuEntry
            (&local_1a8,&local_2e0,pFVar4,L"Slate.InvalidationRoot.VerifyWidgetsIndex",true);
  if (local_328.Object != (FUICommandList *)0x0) {
    (**(code **)((local_328.Object)->_padding_ + 0x10))();
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_328,L"SSlateOptions",L"VerifyWidgetPtr",
                      L"Verify Widget Pointer");
  __l2::Local::AddMenuEntry
            (&local_1a8,&local_2e0,pFVar4,L"Slate.InvalidationRoot.VerifyValidWidgets",true);
  if (local_328.Object != (FUICommandList *)0x0) {
    (**(code **)((local_328.Object)->_padding_ + 0x10))();
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_328,L"SSlateOptions",L"VerifyHittestGrid",
                      L"Verify Hittest Grid");
  __l2::Local::AddMenuEntry
            (&local_1a8,&local_2e0,pFVar4,L"Slate.InvalidationRoot.VerifyHittestGrid",true);
  if (local_328.Object != (FUICommandList *)0x0) {
    (**(code **)((local_328.Object)->_padding_ + 0x10))();
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_328,L"SSlateOptions",L"VerifyCachedElement",
                      L"Verify Cached Elements");
  __l2::Local::AddMenuEntry
            (&local_1a8,&local_2e0,pFVar4,L"Slate.InvalidationRoot.VerifyCachedElementDataList",true
            );
  if (local_328.Object != (FUICommandList *)0x0) {
    (**(code **)((local_328.Object)->_padding_ + 0x10))();
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_328,L"SSlateOptions",L"VefiryVisibility",L"Verify Visibility")
  ;
  __l2::Local::AddMenuEntry
            (&local_1a8,&local_2e0,pFVar4,L"Slate.InvalidationRoot.VerifyWidgetVisibility",true);
  if (local_328.Object != (FUICommandList *)0x0) {
    (**(code **)((local_328.Object)->_padding_ + 0x10))();
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_328,L"SSlateOptions",L"VerifyVolatility",L"Verify Volatility")
  ;
  __l2::Local::AddMenuEntry
            (&local_1a8,&local_2e0,pFVar4,L"Slate.InvalidationRoot.VerifyWidgetVolatile",true);
  if (local_328.Object != (FUICommandList *)0x0) {
    (**(code **)((local_328.Object)->_padding_ + 0x10))();
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_328,L"SSlateOptions",L"VerifyUpdateList",L"Verify Update List"
                     );
  __l2::Local::AddMenuEntry
            (&local_1a8,&local_2e0,pFVar4,L"Slate.InvalidationRoot.VerifyWidgetUpdateList",true);
  if (local_328.Object != (FUICommandList *)0x0) {
    (**(code **)((local_328.Object)->_padding_ + 0x10))();
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_328,L"SSlateOptions",L"VerifyUpdateOnce",
                      L"Verify Updated Once");
  __l2::Local::AddMenuEntry
            (&local_1a8,&local_2e0,pFVar4,L"Slate.InvalidationRoot.VerifyWidgetsAreUpdatedOnce",true
            );
  if (local_328.Object != (FUICommandList *)0x0) {
    (**(code **)((local_328.Object)->_padding_ + 0x10))();
  }
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_328,L"SSlateOptions",L"VerifySlateAttributes",
                      L"Verify Attributes");
  __l2::Local::AddMenuEntry
            (&local_1a8,&local_2e0,pFVar4,L"Slate.InvalidationRoot.VerifySlateAttribute",true);
  if (local_328.Object != (FUICommandList *)0x0) {
    (**(code **)((local_328.Object)->_padding_ + 0x10))();
  }
  FMenuBuilder::EndSection(&local_1a8);
  FMenuBuilder::MakeWidget
            (&local_1a8,__return_storage_ptr__,
             (TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
              *)0x0);
  FMenuBuilder::~FMenuBuilder(&local_1a8);
  return __return_storage_ptr__;
}

// HandleAppScaleSliderChanged @ 142ead380

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SSlateOptions::HandleAppScaleSliderChanged(SSlateOptions *this,float param_1)

{
  FSlateApplication *pFVar1;
  
  pFVar1 = FSlateApplication::Get();
  pFVar1->Scale = param_1;
  return;
}

// HandleAppScaleSliderValue @ 142ead3b0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall SSlateOptions::HandleAppScaleSliderValue(SSlateOptions *this)

{
  FSlateApplication *pFVar1;
  float fVar2;
  
  pFVar1 = FSlateApplication::Get();
                    /* WARNING: Could not recover jumptable at 0x000142ead3c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar2 = (float)(**(code **)(*(longlong *)pFVar1 + 0x58))
                           (pFVar1,*(code **)(*(longlong *)pFVar1 + 0x58));
  return fVar2;
}

