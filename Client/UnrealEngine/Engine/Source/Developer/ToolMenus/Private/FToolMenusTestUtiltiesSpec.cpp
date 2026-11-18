// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 12

// GetTestFlags @ 142c2f090

EAutomationTestFlags __thiscall
UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::GetTestFlags(FToolMenusTestUtiltiesSpec *this)

{
  return EngineFilter|EditorContext;
}

// GetTestSourceFileName @ 142c2f0a0

FString * __thiscall
UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::GetTestSourceFileName
          (FToolMenusTestUtiltiesSpec *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolMenus\\Private\\Tests\\ToolMenusTestUtilities.spec.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 142c2f0d0

int __thiscall
UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::GetTestSourceFileLine
          (FToolMenusTestUtiltiesSpec *this)

{
  return 10;
}

// GetBeautifiedTestName @ 142c2f0e0

FString * __thiscall
UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::GetBeautifiedTestName
          (FToolMenusTestUtiltiesSpec *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.ToolMenus.TestUtilities");
  return __return_storage_ptr__;
}

// Define @ 142c2f110

void __thiscall
UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define(FToolMenusTestUtiltiesSpec *this)

{
  FString local_48;
  code *local_38 [2];
  undefined **local_28;
  FToolMenusTestUtiltiesSpec *local_20;
  undefined8 local_10;
  
  RegisterTestMenu(this);
  local_10 = 0;
  local_28 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = Core::Private::Function::
                TFunctionRefCaller<`UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = this;
  ::FString::FString(&local_48,"Exact Match");
  FAutomationSpecBase::Describe
            ((FAutomationSpecBase *)this,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  local_10 = 0;
  local_28 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::`2'::<lambda_2>,0,0>
              ::_vftable_;
  local_38[0] = Core::Private::Function::
                TFunctionRefCaller<`UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_2>,void>
                ::Call;
  local_20 = this;
  ::FString::FString(&local_48,"Partial Match");
  FAutomationSpecBase::Describe
            ((FAutomationSpecBase *)this,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 142c3f8d0

void __thiscall
`UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_1>::operator()
          (void *this)

{
  FAutomationSpecBase *pFVar1;
  FString local_68;
  FSourceLocation local_58;
  code *local_38 [2];
  undefined **local_28;
  FAutomationSpecBase *local_20;
  undefined8 local_10;
  
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = pFVar1;
  ::FString::FString(&local_68,"Should match the exact sections");
  local_58.Impl._Line = 0x1a;
  local_58.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolMenus\\Private\\Tests\\ToolMenusTestUtilities.spec.cpp"
  ;
  local_58.Impl._Function =
       "auto __cdecl UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define::<lambda_1>::operator ()(void) const"
  ;
  local_58.Impl._Column = 4;
  FAutomationSpecBase::It(pFVar1,&local_68,(TFunction<void___cdecl(void)> *)local_38,&local_58);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::`2'::<lambda_1>::operator()'::`2'::<lambda_2>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>,void>
                ::Call;
  local_20 = pFVar1;
  ::FString::FString(&local_68,"Should match the exact entries");
  local_58.Impl._Line = 0x31;
  local_58.Impl._Column = 4;
  local_58.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolMenus\\Private\\Tests\\ToolMenusTestUtilities.spec.cpp"
  ;
  local_58.Impl._Function =
       "auto __cdecl UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define::<lambda_1>::operator ()(void) const"
  ;
  FAutomationSpecBase::It(pFVar1,&local_68,(TFunction<void___cdecl(void)> *)local_38,&local_58);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 142c40380

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolMenuEntry * __thiscall
`UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::RegisterTestMenu'::__l5::<lambda_1>::operator()
          (void *this,FToolMenuEntry *__return_storage_ptr__,FName param_1)

{
  FUIAction *pFVar1;
  FSlateIcon *pFVar2;
  FText *pFVar3;
  undefined1 local_res10 [8];
  FDestructionSentinel local_298;
  undefined1 local_280 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_268;
  ForAnyElementType FStack_260;
  ulonglong local_258;
  undefined1 local_250 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_238;
  ForAnyElementType FStack_230;
  ulonglong local_228;
  undefined1 local_220 [40];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1f8;
  ForAnyElementType FStack_1f0;
  ulonglong local_1e8;
  undefined1 local_1e0 [24];
  undefined1 local_1c8 [24];
  undefined1 local_1b0 [24];
  undefined1 local_198 [32];
  undefined1 local_178 [240];
  FMRSWRecursiveAccessDetector local_88 [3];
  FMRSWRecursiveAccessDetector local_70 [3];
  FMRSWRecursiveAccessDetector local_58 [3];
  bool local_40;
  FSlateIcon local_38;
  
  pFVar1 = FUIAction::FUIAction((FUIAction *)local_1e0);
  FUIAction::FUIAction((FUIAction *)local_178,pFVar1);
  local_178[0x68] = true;
  local_178[0xd0] = false;
  local_40 = false;
  pFVar2 = FSlateIcon::FSlateIcon(&local_38);
  local_220._0_8_ = pFVar2->StyleSetName;
  local_220._8_8_ = pFVar2->StyleName;
  local_220._16_8_ = pFVar2->SmallStyleName;
  local_220._24_8_ = pFVar2->StatusOverlayStyleName;
  local_220[0x20] = true;
  local_1e8 = 0;
  local_1f8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1f0.Data = (FScriptContainerElement *)0x0;
  pFVar3 = FText::GetEmpty();
  local_250._0_8_ = (pFVar3->TextData).Reference;
  if ((ITextData *)local_250._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_250._0_8_ + 8))(local_250._0_8_,local_res10);
  }
  local_250._8_4_ = pFVar3->Flags;
  local_228 = 0;
  local_250[0x10] = true;
  local_238.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_230.Data = (FScriptContainerElement *)0x0;
  pFVar3 = FText::GetEmpty();
  local_280._0_8_ = (pFVar3->TextData).Reference;
  if ((ITextData *)local_280._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_280._0_8_ + 8))(local_280._0_8_,local_res10);
  }
  local_280._8_4_ = pFVar3->Flags;
  local_280[0x10] = true;
  local_268.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_260.Data = (FScriptContainerElement *)0x0;
  local_258 = 0;
  FToolMenuEntry::InitMenuEntry
            (__return_storage_ptr__,param_1,(TAttribute<FText> *)local_280,
             (TAttribute<FText> *)local_250,(TAttribute<FSlateIcon> *)local_220,
             (FToolUIActionChoice *)local_178,Button,(FName)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_268,(FWriteAccessScope *)&local_298);
  if (((int)local_258 != 0) && (FStack_260.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_260.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_260,0,0,0x10);
    local_258 = local_258 & 0xffffffff00000000;
  }
  if (local_298.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_298.Accessor,&local_298);
  }
  if (FStack_260.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_260.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_268.AccessDetector);
  if ((ITextData *)local_280._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_280._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_238,(FWriteAccessScope *)&local_298);
  if (((int)local_228 != 0) && (FStack_230.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_230.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_230,0,0,0x10);
    local_228 = local_228 & 0xffffffff00000000;
  }
  if (local_298.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_298.Accessor,&local_298);
  }
  if (FStack_230.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_230.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_238.AccessDetector);
  if ((ITextData *)local_250._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_250._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1f8,(FWriteAccessScope *)&local_298);
  if (((int)local_1e8 != 0) && (FStack_1f0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1f0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1f0,0,0,0x10);
    local_1e8 = local_1e8 & 0xffffffff00000000;
  }
  if (local_298.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_298.Accessor,&local_298);
  }
  if (FStack_1f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1f0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1f8.AccessDetector);
  if (local_40 != false) {
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(local_58);
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(local_70);
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(local_88);
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)(local_178 + 0xd8));
  }
  if (local_178[0xd0] != false) {
    FToolUIAction::~FToolUIAction((FToolUIAction *)(local_178 + 0x70));
  }
  if (local_178[0x68] != false) {
    FUIAction::~FUIAction((FUIAction *)local_178);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_198);
  if ((void *)local_198._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_198._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_198);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1b0);
  if ((void *)local_1b0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1b0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1b0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1c8);
  if ((void *)local_1c8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1c8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1c8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1e0);
  if ((void *)local_1e0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1e0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1e0);
  return __return_storage_ptr__;
}

// operator() @ 142c41780

void __thiscall
`UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_2>::operator()
          (void *this)

{
  FAutomationSpecBase *pFVar1;
  FString local_78;
  FSourceLocation local_68;
  code *local_48 [2];
  undefined **local_38;
  FAutomationSpecBase *local_30;
  undefined8 local_20;
  
  pFVar1 = *(FAutomationSpecBase **)this;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = 0;
  local_30 = pFVar1;
  ::FString::FString(&local_78,"Should match any existing section");
  local_68.Impl._Line = 0x50;
  local_68.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolMenus\\Private\\Tests\\ToolMenusTestUtilities.spec.cpp"
  ;
  local_68.Impl._Function =
       "auto __cdecl UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define::<lambda_2>::operator ()(void) const"
  ;
  local_68.Impl._Column = 4;
  FAutomationSpecBase::It(pFVar1,&local_78,(TFunction<void___cdecl(void)> *)local_48,&local_68);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>,0,0>
              ::_vftable_;
  local_20 = 0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,void>
                ::Call;
  local_30 = pFVar1;
  ::FString::FString(&local_78,"Should allow extra sections");
  local_68.Impl._Line = 0x66;
  local_68.Impl._Column = 4;
  local_68.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolMenus\\Private\\Tests\\ToolMenusTestUtilities.spec.cpp"
  ;
  local_68.Impl._Function =
       "auto __cdecl UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define::<lambda_2>::operator ()(void) const"
  ;
  FAutomationSpecBase::It(pFVar1,&local_78,(TFunction<void___cdecl(void)> *)local_48,&local_68);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_3>,0,0>
              ::_vftable_;
  local_20 = 0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_3>,void>
                ::Call;
  local_30 = pFVar1;
  ::FString::FString(&local_78,"Shouldn\'t match out-of-order sections");
  local_68.Impl._Line = 0x7b;
  local_68.Impl._Column = 4;
  local_68.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolMenus\\Private\\Tests\\ToolMenusTestUtilities.spec.cpp"
  ;
  local_68.Impl._Function =
       "auto __cdecl UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define::<lambda_2>::operator ()(void) const"
  ;
  FAutomationSpecBase::It(pFVar1,&local_78,(TFunction<void___cdecl(void)> *)local_48,&local_68);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_4>,0,0>
              ::_vftable_;
  local_20 = 0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>,void>
                ::Call;
  local_30 = pFVar1;
  ::FString::FString(&local_78,"Should match any existing entry");
  local_68.Impl._Line = 0x92;
  local_68.Impl._Column = 4;
  local_68.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolMenus\\Private\\Tests\\ToolMenusTestUtilities.spec.cpp"
  ;
  local_68.Impl._Function =
       "auto __cdecl UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define::<lambda_2>::operator ()(void) const"
  ;
  FAutomationSpecBase::It(pFVar1,&local_78,(TFunction<void___cdecl(void)> *)local_48,&local_68);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_5>,0,0>
              ::_vftable_;
  local_20 = 0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_5>,void>
                ::Call;
  local_30 = pFVar1;
  ::FString::FString(&local_78,"Shouldn\'t match out-of-order entries");
  local_68.Impl._Line = 0xaa;
  local_68.Impl._Column = 4;
  local_68.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolMenus\\Private\\Tests\\ToolMenusTestUtilities.spec.cpp"
  ;
  local_68.Impl._Function =
       "auto __cdecl UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define::<lambda_2>::operator ()(void) const"
  ;
  FAutomationSpecBase::It(pFVar1,&local_78,(TFunction<void___cdecl(void)> *)local_48,&local_68);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

// GenerateTestMenu @ 142c5c240

UToolMenu * __thiscall
UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::GenerateTestMenu
          (FToolMenusTestUtiltiesSpec *this)

{
  FName FVar1;
  UToolMenus *this_00;
  ForAnyElementType FVar2;
  FName *pFVar3;
  FModuleManager *this_01;
  TArray<UToolMenu_*,TSizedDefaultAllocator<32>_> *pTVar4;
  UToolMenu *pUVar5;
  FName local_res10;
  TArray<UToolMenu_*,TSizedDefaultAllocator<32>_> local_88;
  FToolMenuContext local_78;
  
  local_78.bIsEditing = false;
  local_78.ContextObjects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ContextObjects.ArrayNum = 0;
  local_78.ContextObjects.ArrayMax = 0;
  local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ContextObjectCleanupFuncs.Pairs.ArrayNum = 0;
  local_78.ContextObjectCleanupFuncs.Pairs.ArrayMax = 0;
  local_78.ContextCleanupFuncs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ContextCleanupFuncs.ArrayNum = 0;
  local_78.ContextCleanupFuncs.ArrayMax = 0;
  local_78.CommandLists.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.CommandLists.ArrayNum = 0;
  local_78.CommandLists.ArrayMax = 0;
  local_78.CommandList.Object = (FUICommandList *)0x0;
  local_78.CommandList.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  local_78.Extenders.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Extenders.ArrayNum = 0;
  local_78.Extenders.ArrayMax = 0;
  if ((UToolMenus::Singleton == (UToolMenus *)0x0) && (!UToolMenus::bHasShutDown)) {
    pFVar3 = ::FName::FName(&local_res10,"ToolMenus");
    FVar1 = *pFVar3;
    this_01 = FModuleManager::Get();
    FModuleManager::LoadModuleChecked(this_01,FVar1);
    UToolMenus::Singleton = CreateToolMenusInstance();
  }
  this_00 = UToolMenus::Singleton;
  pTVar4 = UToolMenus::CollectHierarchy(UToolMenus::Singleton,&local_88,TestMenuName);
  pUVar5 = UToolMenus::GenerateMenuFromHierarchy(this_00,pTVar4,&local_78);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  FVar2.Data = local_78.Extenders.AllocatorInstance.Data;
  DestructItems<TSharedPtr<FExtender,1>,int>
            ((TSharedPtr<FExtender,1> *)local_78.Extenders.AllocatorInstance.Data,
             local_78.Extenders.ArrayNum);
  if ((TSharedPtr<FExtender,1> *)FVar2.Data != (TSharedPtr<FExtender,1> *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.CommandList.SharedReferenceCount.ReferenceController);
  FVar2.Data = local_78.CommandLists.AllocatorInstance.Data;
  DestructItems<TSharedPtr<FUICommandList,1>,int>
            ((TSharedPtr<FUICommandList,1> *)local_78.CommandLists.AllocatorInstance.Data,
             local_78.CommandLists.ArrayNum);
  if ((TSharedPtr<FUICommandList,1> *)FVar2.Data != (TSharedPtr<FUICommandList,1> *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  FVar2.Data = local_78.ContextCleanupFuncs.AllocatorInstance.Data;
  DestructItems<TFunction<void___cdecl(void)>,int>
            ((TFunction<void___cdecl(void)> *)local_78.ContextCleanupFuncs.AllocatorInstance.Data,
             local_78.ContextCleanupFuncs.ArrayNum);
  if ((TFunction<void___cdecl(void)> *)FVar2.Data != (TFunction<void___cdecl(void)> *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  FVar2.Data = local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data;
  DestructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
            ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
             local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data,
             local_78.ContextObjectCleanupFuncs.Pairs.ArrayNum);
  if ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)FVar2.Data !=
      (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  if (local_78.ContextObjects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.ContextObjects.AllocatorInstance.Data);
  }
  return pUVar5;
}

// RegisterTestMenu @ 142c6d690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::RegisterTestMenu
          (FToolMenusTestUtiltiesSpec *this)

{
  FName FVar1;
  FName *pFVar2;
  FModuleManager *pFVar3;
  TObjectPtr<UToolMenu>_u_0 *pTVar4;
  UToolMenu *this_00;
  FToolMenuSection *this_01;
  FToolMenuEntry *pFVar5;
  undefined1 auStack_848 [32];
  undefined1 local_818 [8];
  FName local_810;
  undefined4 local_808;
  undefined1 local_800 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_7e8;
  ForAnyElementType FStack_7e0;
  ulonglong local_7d8;
  FName local_7d0;
  undefined4 local_7c8;
  FName local_7b8;
  undefined4 local_7b0;
  undefined4 uStack_7ac;
  bool local_7a8;
  FToolMenuEntry local_798;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_848;
  if ((UToolMenus::Singleton == (UToolMenus *)0x0) && (!UToolMenus::bHasShutDown)) {
    pFVar2 = ::FName::FName(&local_810,"ToolMenus");
    FVar1 = *pFVar2;
    pFVar3 = FModuleManager::Get();
    FModuleManager::LoadModuleChecked(pFVar3,FVar1);
    UToolMenus::Singleton = CreateToolMenusInstance();
  }
  pTVar4 = &TMapBase<FName,TObjectPtr<UToolMenu>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UToolMenu>,0>_>
            ::Find((TMapBase<FName,TObjectPtr<UToolMenu>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UToolMenu>,0>_>
                    *)&UToolMenus::Singleton->Menus,TestMenuName)->field0_0x0;
  if (((pTVar4 == (TObjectPtr<UToolMenu>_u_0 *)0x0) || (pTVar4->DebugPtr == (UToolMenu *)0x0)) ||
     (*(char *)((longlong)pTVar4->DebugPtr + 0x108) == '\0')) {
    if ((UToolMenus::Singleton == (UToolMenus *)0x0) && (UToolMenus::bHasShutDown == false)) {
      pFVar2 = ::FName::FName(&local_810,"ToolMenus");
      FVar1 = *pFVar2;
      pFVar3 = FModuleManager::Get();
      FModuleManager::LoadModuleChecked(pFVar3,FVar1);
      UToolMenus::Singleton = CreateToolMenusInstance();
    }
    local_810.ComparisonIndex.Value = 0;
    local_810.Number = 0;
    this_00 = UToolMenus::RegisterMenu(UToolMenus::Singleton,TestMenuName,(FName)0x0,Menu,true);
    local_7d0.ComparisonIndex.Value = 0;
    local_7d0.Number = 0;
    local_7c8._0_1_ = Default;
    local_7c8._1_1_ = Log|Insert;
    FText::FText((FText *)local_800);
    local_800[0x10] = false;
    local_7d8 = 0;
    local_7e8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_7e0.Data = (FScriptContainerElement *)0x0;
    pFVar2 = ::FName::FName(&local_810,"FirstSection");
    local_7b0._0_1_ = (EToolMenuInsertType)local_7c8;
    local_7b0._1_1_ = local_7c8._1_1_;
    local_7b0._2_2_ = local_7c8._2_2_;
    local_7b8 = local_7d0;
    this_01 = UToolMenu::AddSection
                        (this_00,*pFVar2,(TAttribute<FText> *)local_800,
                         (FToolMenuInsert *)&local_7b8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_7e8,(FWriteAccessScope *)&local_7b8);
    if (((int)local_7d8 != 0) && (FStack_7e0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_7e0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_7e0,0,0,0x10);
      local_7d8 = local_7d8 & 0xffffffff00000000;
    }
    if (local_7a8 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_7ac,local_7b0),
                 (FDestructionSentinel *)&local_7b8);
    }
    if (FStack_7e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_7e0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_7e8.AccessDetector);
    if ((ITextData *)local_800._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_800._0_8_ + 0x10))();
    }
    pFVar2 = ::FName::FName(&local_7d0,"FirstEntry");
    pFVar5 = `UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::RegisterTestMenu'::__l5::
             <lambda_1>::operator()(local_818,&local_798,*pFVar2);
    FToolMenuSection::AddEntry(this_01,pFVar5);
    FToolMenuEntry::~FToolMenuEntry(&local_798);
    pFVar2 = ::FName::FName(&local_7d0,"MiddleEntry");
    pFVar5 = `UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::RegisterTestMenu'::__l5::
             <lambda_1>::operator()(local_818,&local_798,*pFVar2);
    FToolMenuSection::AddEntry(this_01,pFVar5);
    FToolMenuEntry::~FToolMenuEntry(&local_798);
    pFVar2 = ::FName::FName(&local_7d0,"FirstSeparator");
    FToolMenuSection::AddSeparator(this_01,*pFVar2);
    pFVar2 = ::FName::FName(&local_7d0,"LastEntry");
    pFVar5 = `UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::RegisterTestMenu'::__l5::
             <lambda_1>::operator()(local_818,&local_798,*pFVar2);
    FToolMenuSection::AddEntry(this_01,pFVar5);
    FToolMenuEntry::~FToolMenuEntry(&local_798);
    local_810.ComparisonIndex.Value = 0;
    local_810.Number = 0;
    local_808._0_1_ = Default;
    local_808._1_1_ = Log|Insert;
    FText::FText((FText *)local_800);
    local_800[0x10] = false;
    local_7d8 = 0;
    local_7e8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_7e0.Data = (FScriptContainerElement *)0x0;
    pFVar2 = ::FName::FName(&local_7d0,"MiddleSection");
    local_7b0._0_1_ = (EToolMenuInsertType)local_808;
    local_7b0._1_1_ = local_808._1_1_;
    local_7b0._2_2_ = local_808._2_2_;
    local_7b8 = local_810;
    UToolMenu::AddSection
              (this_00,*pFVar2,(TAttribute<FText> *)local_800,(FToolMenuInsert *)&local_7b8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_7e8,(FWriteAccessScope *)&local_7b8);
    if (((int)local_7d8 != 0) && (FStack_7e0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_7e0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_7e0,0,0,0x10);
      local_7d8 = local_7d8 & 0xffffffff00000000;
    }
    if (local_7a8 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_7ac,local_7b0),
                 (FDestructionSentinel *)&local_7b8);
    }
    if (FStack_7e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_7e0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_7e8.AccessDetector);
    if ((ITextData *)local_800._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_800._0_8_ + 0x10))();
    }
    local_810.ComparisonIndex.Value = 0;
    local_810.Number = 0;
    local_808._0_1_ = Default;
    local_808._1_1_ = Log|Insert;
    FText::FText((FText *)local_800);
    local_800[0x10] = false;
    local_7d8 = 0;
    local_7e8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_7e0.Data = (FScriptContainerElement *)0x0;
    pFVar2 = ::FName::FName(&local_7d0,"LastSection");
    local_7b0._0_1_ = (EToolMenuInsertType)local_808;
    local_7b0._1_1_ = local_808._1_1_;
    local_7b0._2_2_ = local_808._2_2_;
    local_7b8 = local_810;
    UToolMenu::AddSection
              (this_00,*pFVar2,(TAttribute<FText> *)local_800,(FToolMenuInsert *)&local_7b8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_7e8,(FWriteAccessScope *)&local_7b8);
    if (((int)local_7d8 != 0) && (FStack_7e0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_7e0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_7e0,0,0,0x10);
      local_7d8 = local_7d8 & 0xffffffff00000000;
    }
    if (local_7a8 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_7ac,local_7b0),
                 (FDestructionSentinel *)&local_7b8);
    }
    if (FStack_7e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_7e0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_7e8.AccessDetector);
    if ((ITextData *)local_800._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_800._0_8_ + 0x10))();
    }
  }
  return;
}

// TestMatch @ 142c71030

bool __thiscall
UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::TestMatch
          (FToolMenusTestUtiltiesSpec *this,FString *param_1,FMenu *param_2,UToolMenu *param_3,
          FToolMenuAutomationTestAdapterParameters *param_4)

{
  bool bVar1;
  wchar_t *pwVar2;
  FToolMenuAutomationTestAdapter local_18;
  
  local_18.Parameters = *param_4;
  local_18.TestInstance = (FAutomationTestBase *)this;
  bVar1 = FToolMenuAutomationTestAdapter::Matches(&local_18,param_2,param_3);
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar1 = FAutomationTestBase::TestTrue((FAutomationTestBase *)this,pwVar2,bVar1);
  return bVar1;
}

// TestMismatch @ 142c710a0

bool __thiscall
UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::TestMismatch
          (FToolMenusTestUtiltiesSpec *this,FString *param_1,FMenu *param_2,UToolMenu *param_3,
          FToolMenuAutomationTestAdapterParameters *param_4)

{
  bool bVar1;
  wchar_t *pwVar2;
  FToolMenuAutomationTestAdapter local_18;
  
  local_18.Parameters = *param_4;
  local_18.TestInstance = (FAutomationTestBase *)this;
  bVar1 = FToolMenuAutomationTestAdapter::Matches(&local_18,param_2,param_3);
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar1 = FAutomationTestBase::TestFalse((FAutomationTestBase *)this,pwVar2,bVar1);
  return bVar1;
}

