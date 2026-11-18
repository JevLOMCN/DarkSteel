// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 32

// StaticClass @ 142c30260

UClass * __cdecl UToolMenuEntryExtensions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToolMenuEntryExtensions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ToolMenus",L"ToolMenuEntryExtensions",
               &Z_Registration_Info_UClass_UToolMenuEntryExtensions.InnerSingleton,
               StaticRegisterNativesUToolMenuEntryExtensions,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UToolMenuEntryExtensions>,
               InternalVTableHelperCtorCaller<UToolMenuEntryExtensions>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToolMenuEntryExtensions.InnerSingleton;
}

// UToolMenuEntryExtensions @ 142c3af30

UToolMenuEntryExtensions * __thiscall
UToolMenuEntryExtensions::UToolMenuEntryExtensions
          (UToolMenuEntryExtensions *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UToolMenuEntryExtensions__6B_;
  return this;
}

// UToolMenuEntryExtensions @ 142c3af60

UToolMenuEntryExtensions * __thiscall
UToolMenuEntryExtensions::UToolMenuEntryExtensions
          (UToolMenuEntryExtensions *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UToolMenuEntryExtensions__6B_;
  return this;
}

// ~UToolMenuEntryExtensions @ 142c3c970

void __thiscall UToolMenuEntryExtensions::~UToolMenuEntryExtensions(UToolMenuEntryExtensions *this)

{
  *(undefined ***)this = &___7UToolMenuEntryExtensions__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BreakScriptSlateIcon @ 142c4df80

void __cdecl
UToolMenuEntryExtensions::BreakScriptSlateIcon
          (FScriptSlateIcon *param_1,FName *param_2,FName *param_3,FName *param_4)

{
  *param_2 = param_1->StyleSetName;
  *param_3 = param_1->StyleName;
  *param_4 = param_1->SmallStyleName;
  return;
}

// BreakStringCommand @ 142c4dfa0

void __cdecl
UToolMenuEntryExtensions::BreakStringCommand
          (FToolMenuStringCommand *param_1,EToolMenuStringCommandType *param_2,FName *param_3,
          FString *param_4)

{
  *param_2 = param_1->Type;
  *param_3 = param_1->CustomType;
  ::FString::operator=(param_4,&param_1->String);
  return;
}

// BreakToolMenuOwner @ 142c4dfc0

void __cdecl UToolMenuEntryExtensions::BreakToolMenuOwner(FToolMenuOwner *param_1,FName *param_2)

{
  if (param_1->ValueType == Name) {
    *param_2 = (FName)param_1->field0_0x0;
    return;
  }
  param_2->ComparisonIndex = 0;
  param_2->Number = 0;
  return;
}

// GetLabel @ 142c5e250

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FText * __cdecl
UToolMenuEntryExtensions::GetLabel(FText *__return_storage_ptr__,FToolMenuEntry *param_1)

{
  ITextData *pIVar1;
  FText *pFVar2;
  undefined1 local_res8 [8];
  
  pFVar2 = TAttribute<FText>::Get(&param_1->Label);
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar2->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = pFVar2->Flags;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 142c5f540

UClass * __cdecl UToolMenuEntryExtensions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToolMenuEntryExtensions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ToolMenus",L"ToolMenuEntryExtensions",
               &Z_Registration_Info_UClass_UToolMenuEntryExtensions.InnerSingleton,
               StaticRegisterNativesUToolMenuEntryExtensions,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UToolMenuEntryExtensions>,
               InternalVTableHelperCtorCaller<UToolMenuEntryExtensions>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToolMenuEntryExtensions.InnerSingleton;
}

// GetToolTip @ 142c604c0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FText * __cdecl
UToolMenuEntryExtensions::GetToolTip(FText *__return_storage_ptr__,FToolMenuEntry *param_1)

{
  ITextData *pIVar1;
  FText *pFVar2;
  undefined1 local_res8 [8];
  
  pFVar2 = TAttribute<FText>::Get(&param_1->ToolTip);
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar2->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = pFVar2->Flags;
  return __return_storage_ptr__;
}

// InitMenuEntry @ 142c62080

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolMenuEntry * __cdecl
UToolMenuEntryExtensions::InitMenuEntry
          (FToolMenuEntry *__return_storage_ptr__,FName param_1,FName param_2,FText *param_3,
          FText *param_4,EToolMenuStringCommandType param_5,FName param_6,FString *param_7)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FText *pFVar3;
  undefined1 local_res8 [8];
  FToolMenuOwner_u_0 local_78;
  FMRSWRecursiveAccessDetector *pFStack_70;
  char local_68;
  EToolMenuStringCommandType local_58;
  FName local_54;
  FString local_48;
  FText local_38;
  bool local_28;
  undefined1 local_20 [8];
  ForAnyElementType FStack_18;
  ulonglong local_10;
  
  if (param_1 == (FName)0x0) {
    local_78.ValueName.Index = 0;
    local_78.ValueName.Number = 0;
    pFStack_70 = (FMRSWRecursiveAccessDetector *)((ulonglong)pFStack_70._1_7_ << 8);
  }
  else {
    pFStack_70 = (FMRSWRecursiveAccessDetector *)CONCAT71(pFStack_70._1_7_,2);
    local_78 = (FToolMenuOwner_u_0)param_1;
  }
  FToolMenuEntry::FToolMenuEntry
            (__return_storage_ptr__,(FToolMenuOwner *)&local_78.ValueName,param_2,MenuEntry);
  local_38.TextData.Reference = (param_3->TextData).Reference;
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 8))
              (local_38.TextData.Reference,local_res8);
  }
  local_38.Flags = param_3->Flags;
  local_28 = true;
  local_10 = 0;
  local_20 = (undefined1  [8])0x0;
  FStack_18.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(__return_storage_ptr__->Label).Value,&local_38);
  (__return_storage_ptr__->Label).bIsSet = local_28;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(__return_storage_ptr__->Label).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_20);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_20,
             (FWriteAccessScope *)&local_78.ValueName);
  if (((int)local_10 != 0) && (FStack_18.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_18.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_18,0,0,0x10);
    local_10 = local_10 & 0xffffffff00000000;
  }
  if (local_68 == '\0') {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              (pFStack_70,(FDestructionSentinel *)&local_78.ValueName);
  }
  if (FStack_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_20);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  pFVar3 = param_4;
  local_38.TextData.Reference = (param_4->TextData).Reference;
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 8))(local_38.TextData.Reference,&param_4);
  }
  local_38.Flags = pFVar3->Flags;
  local_28 = true;
  local_10 = 0;
  local_20 = (undefined1  [8])0x0;
  FStack_18.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(__return_storage_ptr__->ToolTip).Value,&local_38);
  (__return_storage_ptr__->ToolTip).bIsSet = local_28;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(__return_storage_ptr__->ToolTip).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_20);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_20,
             (FWriteAccessScope *)&local_78.ValueName);
  if (((int)local_10 != 0) && (FStack_18.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_18.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_18,0,0,0x10);
    local_10 = local_10 & 0xffffffff00000000;
  }
  if (local_68 == '\0') {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              (pFStack_70,(FDestructionSentinel *)&local_78.ValueName);
  }
  if (FStack_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_20);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  local_58 = param_5;
  local_54 = param_6;
  ::FString::FString(&local_48,param_7);
  pFVar1 = &(__return_storage_ptr__->StringExecuteAction).String;
  (__return_storage_ptr__->StringExecuteAction).Type = local_58;
  (__return_storage_ptr__->StringExecuteAction).CustomType = local_54;
  if (pFVar1 != &local_48) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->StringExecuteAction).String.Data.ArrayNum = local_48.Data.ArrayNum;
    (__return_storage_ptr__->StringExecuteAction).String.Data.ArrayMax = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// MakeScriptSlateIcon @ 142c63fa0

FScriptSlateIcon * __cdecl
UToolMenuEntryExtensions::MakeScriptSlateIcon
          (FScriptSlateIcon *__return_storage_ptr__,FName param_1,FName param_2,FName param_3)

{
  FString *pFVar1;
  ForAnyElementType FVar2;
  FName local_res20;
  FString local_38;
  FString local_28;
  FString local_18;
  
  __return_storage_ptr__->StyleSetName = param_1;
  __return_storage_ptr__->StyleName = param_2;
  if (param_3 == (FName)0x0) {
    local_res20 = param_2;
    ::FString::FString(&local_28,".Small");
    pFVar1 = ::FName::ToString(&local_res20,&local_18);
    ::FString::ConcatFF(&local_38,pFVar1,&local_28);
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar2.Data = local_38.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&__return_storage_ptr__->SmallStyleName,(wchar_t *)FVar2.Data);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  else {
    __return_storage_ptr__->SmallStyleName = param_3;
  }
  return __return_storage_ptr__;
}

// MakeStringCommand @ 142c64070

FToolMenuStringCommand * __cdecl
UToolMenuEntryExtensions::MakeStringCommand
          (FToolMenuStringCommand *__return_storage_ptr__,EToolMenuStringCommandType param_1,
          FName param_2,FString *param_3)

{
  __return_storage_ptr__->Type = param_1;
  __return_storage_ptr__->CustomType = param_2;
  ::FString::FString(&__return_storage_ptr__->String,param_3);
  return __return_storage_ptr__;
}

// MakeToolMenuOwner @ 142c640a0

FToolMenuOwner * __cdecl
UToolMenuEntryExtensions::MakeToolMenuOwner(FToolMenuOwner *__return_storage_ptr__,FName param_1)

{
  if (param_1 == (FName)0x0) {
    (__return_storage_ptr__->field0_0x0).ValueInt64 = 0;
    __return_storage_ptr__->ValueType = None;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0).ValueName.Number = param_1.Number;
  (__return_storage_ptr__->field0_0x0).ValueName.Index = param_1.ComparisonIndex.Value.Value;
  __return_storage_ptr__->ValueType = Name;
  return __return_storage_ptr__;
}

// SetIcon @ 142c700f0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl
UToolMenuEntryExtensions::SetIcon(FToolMenuEntry *param_1,FName param_2,FName param_3,FName param_4)

{
  FSlateIcon *pFVar1;
  FDestructionSentinel local_a8;
  FSlateIcon local_90;
  FName local_70;
  FName FStack_68;
  FName local_60;
  FName FStack_58;
  undefined1 local_50;
  undefined1 local_48 [8];
  ForAnyElementType FStack_40;
  ulonglong local_38;
  
  if (param_4 == (FName)0x0) {
    if ((param_2 == (FName)0x0) && (param_3 == (FName)0x0)) {
      pFVar1 = FSlateIcon::FSlateIcon(&local_90);
      local_70 = pFVar1->StyleSetName;
      FStack_68 = pFVar1->StyleName;
      local_60 = pFVar1->SmallStyleName;
      FStack_58 = pFVar1->StatusOverlayStyleName;
      local_50 = 1;
      (param_1->Icon).Value.StyleSetName = local_70;
      (param_1->Icon).Value.StyleName = FStack_68;
      local_38 = 0;
      (param_1->Icon).bIsSet = true;
      (param_1->Icon).Value.SmallStyleName = local_60;
      (param_1->Icon).Value.StatusOverlayStyleName = FStack_58;
      local_48 = (undefined1  [8])0x0;
      FStack_40.Data = (FScriptContainerElement *)0x0;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->Icon).Getter,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_48);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
                 (FWriteAccessScope *)&local_a8);
      if (((int)local_38 != 0) && (FStack_40.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_40.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_40,0,0,0x10);
        local_38 = local_38 & 0xffffffff00000000;
      }
      if (local_a8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
      }
      if (FStack_40.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_40.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_48);
    }
    pFVar1 = FSlateIcon::FSlateIcon(&local_90,param_2,param_3,(FName)0x0,(FName)0x0);
    local_70 = pFVar1->StyleSetName;
    FStack_68 = pFVar1->StyleName;
    local_60 = pFVar1->SmallStyleName;
    FStack_58 = pFVar1->StatusOverlayStyleName;
    local_50 = 1;
    (param_1->Icon).Value.StyleSetName = local_70;
    (param_1->Icon).Value.StyleName = FStack_68;
    local_38 = 0;
    (param_1->Icon).bIsSet = true;
    (param_1->Icon).Value.SmallStyleName = local_60;
    (param_1->Icon).Value.StatusOverlayStyleName = FStack_58;
    local_48 = (undefined1  [8])0x0;
    FStack_40.Data = (FScriptContainerElement *)0x0;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->Icon).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_48);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
               (FWriteAccessScope *)&local_a8);
    if (((int)local_38 != 0) && (FStack_40.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_40.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_40,0,0,0x10);
      local_38 = local_38 & 0xffffffff00000000;
    }
    if (local_a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
    }
    if (FStack_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_40.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_48);
  }
  pFVar1 = FSlateIcon::FSlateIcon(&local_90,param_2,param_3,param_4,(FName)0x0);
  local_70 = pFVar1->StyleSetName;
  FStack_68 = pFVar1->StyleName;
  local_60 = pFVar1->SmallStyleName;
  FStack_58 = pFVar1->StatusOverlayStyleName;
  local_50 = 1;
  (param_1->Icon).Value.StyleSetName = local_70;
  (param_1->Icon).Value.StyleName = FStack_68;
  local_38 = 0;
  (param_1->Icon).bIsSet = true;
  (param_1->Icon).Value.SmallStyleName = local_60;
  (param_1->Icon).Value.StatusOverlayStyleName = FStack_58;
  local_48 = (undefined1  [8])0x0;
  FStack_40.Data = (FScriptContainerElement *)0x0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->Icon).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_a8);
  if (((int)local_38 != 0) && (FStack_40.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_40,0,0,0x10);
    local_38 = local_38 & 0xffffffff00000000;
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  if (FStack_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_40.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  return;
}

// SetLabel @ 142c703c0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl UToolMenuEntryExtensions::SetLabel(FToolMenuEntry *param_1,FText *param_2)

{
  undefined1 local_res8 [8];
  FDestructionSentinel local_58;
  FText local_40;
  bool local_30;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  local_40.TextData.Reference = (param_2->TextData).Reference;
  if (local_40.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_40.TextData.Reference + 8))
              (local_40.TextData.Reference,local_res8);
  }
  local_40.Flags = param_2->Flags;
  local_30 = true;
  local_18 = 0;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(param_1->Label).Value,&local_40);
  (param_1->Label).bIsSet = local_30;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->Label).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_58);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  if (local_40.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
  }
  return;
}

// SetStringCommand @ 142c70870

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl
UToolMenuEntryExtensions::SetStringCommand
          (FToolMenuEntry *param_1,EToolMenuStringCommandType param_2,FName param_3,FString *param_4
          )

{
  FString *this;
  FScriptContainerElement *pFVar1;
  undefined8 local_198;
  FSharedReferencer<1> FStack_190;
  undefined8 local_188;
  FSharedReferencer<1> FStack_180;
  undefined8 local_174;
  FString local_168;
  undefined1 local_158 [240];
  FMRSWRecursiveAccessDetector local_68 [3];
  FMRSWRecursiveAccessDetector local_50 [3];
  FMRSWRecursiveAccessDetector local_38 [3];
  bool local_20;
  
  local_158[0x68] = false;
  local_158[0xd0] = false;
  local_20 = false;
  FToolUIActionChoice::operator=(&param_1->Action,(FToolUIActionChoice *)local_158);
  if (local_20 != false) {
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(local_38);
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(local_50);
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(local_68);
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)(local_158 + 0xd8));
  }
  if (local_158[0xd0] != false) {
    FToolUIAction::~FToolUIAction((FToolUIAction *)(local_158 + 0x70));
  }
  if (local_158[0x68] != false) {
    FUIAction::~FUIAction((FUIAction *)local_158);
  }
  local_198 = 0;
  FStack_190.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&param_1->Command != (TSharedPtr<FUICommandInfo_const_,1> *)&local_198) {
    (param_1->Command).Object = (FUICommandInfo *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(param_1->Command).SharedReferenceCount,&FStack_190);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_190.ReferenceController);
  local_188 = 0;
  FStack_180.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&param_1->CommandList != (TSharedPtr<FUICommandList_const_,1> *)&local_188) {
    (param_1->CommandList).Object = (FUICommandList *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(param_1->CommandList).SharedReferenceCount,&FStack_180);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_180.ReferenceController);
  local_174 = 0;
  (param_1->StringExecuteAction).CustomType.ComparisonIndex = 0;
  (param_1->StringExecuteAction).CustomType.Number = 0;
  this = &(param_1->StringExecuteAction).String;
  (param_1->StringExecuteAction).Type = Command;
  if (this != &local_168) {
    pFVar1 = (this->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_1->StringExecuteAction).String.Data.ArrayNum = 0;
    (param_1->StringExecuteAction).String.Data.ArrayMax = 0;
  }
  (param_1->StringExecuteAction).Type = param_2;
  (param_1->StringExecuteAction).CustomType = param_3;
  ::FString::operator=(this,param_4);
  return;
}

// SetToolTip @ 142c70a50

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl UToolMenuEntryExtensions::SetToolTip(FToolMenuEntry *param_1,FText *param_2)

{
  undefined1 local_res8 [8];
  FDestructionSentinel local_58;
  FText local_40;
  bool local_30;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  local_40.TextData.Reference = (param_2->TextData).Reference;
  if (local_40.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_40.TextData.Reference + 8))
              (local_40.TextData.Reference,local_res8);
  }
  local_40.Flags = param_2->Flags;
  local_30 = true;
  local_18 = 0;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(param_1->ToolTip).Value,&local_40);
  (param_1->ToolTip).bIsSet = local_30;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->ToolTip).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_58);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  if (local_40.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
  }
  return;
}

// StaticRegisterNativesUToolMenuEntryExtensions @ 142c70f00

void __cdecl UToolMenuEntryExtensions::StaticRegisterNativesUToolMenuEntryExtensions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xd;
  local_18.DataPtr = Z_Construct_UClass_UToolMenuEntryExtensions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execBreakScriptSlateIcon @ 142c75ef0

void __cdecl
UToolMenuEntryExtensions::execBreakScriptSlateIcon(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar *puVar3;
  uchar *puVar4;
  uchar *puVar5;
  uchar local_res10 [16];
  uchar local_res20 [8];
  uchar local_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  puVar2 = param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  local_res10[4] = '\0';
  local_res10[5] = '\0';
  local_res10[6] = '\0';
  local_res10[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar5 = (uchar *)&local_40;
  if (puVar2 != (uchar *)0x0) {
    puVar5 = puVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar2 = param_2->MostRecentPropertyAddress;
  local_res20[0] = '\0';
  local_res20[1] = '\0';
  local_res20[2] = '\0';
  local_res20[3] = '\0';
  local_res20[4] = '\0';
  local_res20[5] = '\0';
  local_res20[6] = '\0';
  local_res20[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar4 = local_res10;
  if (puVar2 != (uchar *)0x0) {
    puVar4 = puVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  puVar2 = param_2->MostRecentPropertyAddress;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar3 = local_res20;
  if (puVar2 != (uchar *)0x0) {
    puVar3 = puVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  puVar2 = local_48;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)puVar4 = *(undefined8 *)puVar5;
  *(undefined8 *)puVar3 = *(undefined8 *)(puVar5 + 8);
  *(undefined8 *)puVar2 = *(undefined8 *)(puVar5 + 0x10);
  return;
}

// execBreakStringCommand @ 142c76090

void __cdecl
UToolMenuEntryExtensions::execBreakStringCommand(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString *this;
  uchar *puVar2;
  uchar *puVar3;
  uchar *puVar4;
  uchar local_res10 [16];
  uchar local_res20 [8];
  FString local_58;
  uchar local_48 [4];
  undefined8 local_44;
  void *local_38;
  undefined8 local_30;
  
  local_48[0] = '\0';
  local_44 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  puVar2 = param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar4 = local_48;
  if (puVar2 != (uchar *)0x0) {
    puVar4 = puVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar2 = param_2->MostRecentPropertyAddress;
  local_res20[0] = '\0';
  local_res20[1] = '\0';
  local_res20[2] = '\0';
  local_res20[3] = '\0';
  local_res20[4] = '\0';
  local_res20[5] = '\0';
  local_res20[6] = '\0';
  local_res20[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar3 = local_res10;
  if (puVar2 != (uchar *)0x0) {
    puVar3 = puVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  puVar2 = local_res20;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  this = &local_58;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    this = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *puVar3 = *puVar4;
  *(undefined8 *)puVar2 = *(undefined8 *)(puVar4 + 4);
  ::FString::operator=(this,(FString *)(puVar4 + 0x10));
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// execBreakToolMenuOwner @ 142c76250

void __cdecl
UToolMenuEntryExtensions::execBreakToolMenuOwner(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar *puVar3;
  uchar local_res10 [8];
  uchar local_18 [16];
  
  local_18[0] = '\0';
  local_18[1] = '\0';
  local_18[2] = '\0';
  local_18[3] = '\0';
  local_18[4] = '\0';
  local_18[5] = '\0';
  local_18[6] = '\0';
  local_18[7] = '\0';
  local_18[8] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  puVar2 = param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  local_res10[4] = '\0';
  local_res10[5] = '\0';
  local_res10[6] = '\0';
  local_res10[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar3 = local_18;
  if (puVar2 != (uchar *)0x0) {
    puVar3 = puVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar2 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (puVar3[8] == '\x02') {
    *(undefined8 *)puVar2 = *(undefined8 *)puVar3;
    return;
  }
  puVar2[0] = '\0';
  puVar2[1] = '\0';
  puVar2[2] = '\0';
  puVar2[3] = '\0';
  puVar2[4] = '\0';
  puVar2[5] = '\0';
  puVar2[6] = '\0';
  puVar2[7] = '\0';
  return;
}

// execGetLabel @ 142c76ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl UToolMenuEntryExtensions::execGetLabel(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FText *pFVar2;
  FToolMenuEntry *pFVar3;
  undefined1 auStack_7c8 [32];
  undefined1 local_7a8 [8];
  FText local_7a0;
  FToolMenuEntry local_790;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_7c8;
  FToolMenuEntry::FToolMenuEntry(&local_790);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_790,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_790);
  }
  pFVar3 = &local_790;
  if ((FToolMenuEntry *)param_2->MostRecentPropertyAddress != (FToolMenuEntry *)0x0) {
    pFVar3 = (FToolMenuEntry *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = TAttribute<FText>::Get(&pFVar3->Label);
  local_7a0.TextData.Reference = (pFVar2->TextData).Reference;
  if (local_7a0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_7a0.TextData.Reference + 8))
              (local_7a0.TextData.Reference,local_7a8);
  }
  local_7a0.Flags = pFVar2->Flags;
  FText::operator=(param_3,&local_7a0);
  if (local_7a0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_7a0.TextData.Reference + 0x10))();
  }
  FToolMenuEntry::~FToolMenuEntry(&local_790);
  return;
}

// execGetToolTip @ 142c773c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl
UToolMenuEntryExtensions::execGetToolTip(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FText *pFVar2;
  FToolMenuEntry *pFVar3;
  undefined1 auStack_7c8 [32];
  undefined1 local_7a8 [8];
  FText local_7a0;
  FToolMenuEntry local_790;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_7c8;
  FToolMenuEntry::FToolMenuEntry(&local_790);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_790,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_790);
  }
  pFVar3 = &local_790;
  if ((FToolMenuEntry *)param_2->MostRecentPropertyAddress != (FToolMenuEntry *)0x0) {
    pFVar3 = (FToolMenuEntry *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = TAttribute<FText>::Get(&pFVar3->ToolTip);
  local_7a0.TextData.Reference = (pFVar2->TextData).Reference;
  if (local_7a0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_7a0.TextData.Reference + 8))
              (local_7a0.TextData.Reference,local_7a8);
  }
  local_7a0.Flags = pFVar2->Flags;
  FText::operator=(param_3,&local_7a0);
  if (local_7a0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_7a0.TextData.Reference + 0x10))();
  }
  FToolMenuEntry::~FToolMenuEntry(&local_790);
  return;
}

// execInitMenuEntry @ 142c77a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl
UToolMenuEntryExtensions::execInitMenuEntry(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FToolMenuEntry *pFVar2;
  FText *pFVar3;
  FText *pFVar4;
  undefined1 auStackY_848 [32];
  EToolMenuStringCommandType local_808 [8];
  FName local_800;
  FName local_7f8;
  FName local_7f0;
  FString local_7e8;
  FText local_7d8;
  FText local_7c8;
  FToolMenuEntry local_7b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_848;
  local_7f0.ComparisonIndex.Value = 0;
  local_7f0.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_7f0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_7f0);
  }
  local_7f8.ComparisonIndex.Value = 0;
  local_7f8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_7f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_7f8);
  }
  FText::FText(&local_7c8);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_7c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_7c8);
  }
  pFVar4 = &local_7c8;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar4 = (FText *)param_2->MostRecentPropertyAddress;
  }
  FText::FText(&local_7d8);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_7d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_7d8);
  }
  local_808[0] = Command;
  pFVar3 = &local_7d8;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar3 = (FText *)param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_808,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_808);
  }
  local_800.ComparisonIndex.Value = 0;
  local_800.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_800,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_800);
  }
  local_7e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_7e8.Data.ArrayNum = 0;
  local_7e8.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_7e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_7e8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = InitMenuEntry(&local_7b8,local_7f0,local_7f8,pFVar4,pFVar3,local_808[0],local_800,
                         &local_7e8);
  FToolMenuEntry::operator=(param_3,pFVar2);
  FToolMenuEntry::~FToolMenuEntry(&local_7b8);
  if (local_7e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7e8.Data.AllocatorInstance.Data);
  }
  if (local_7d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_7d8.TextData.Reference + 0x10))();
  }
  if (local_7c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_7c8.TextData.Reference + 0x10))();
  }
  return;
}

// execMakeScriptSlateIcon @ 142c77f70

void __cdecl
UToolMenuEntryExtensions::execMakeScriptSlateIcon(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  FString *pFVar3;
  ForAnyElementType FVar4;
  FName local_res10;
  undefined8 local_res18;
  FName local_res20;
  FName local_78;
  FString local_70;
  FString local_60;
  FString local_50;
  undefined4 local_40;
  undefined4 uStack_3c;
  uint uStack_38;
  uint uStack_34;
  FName local_30;
  
  local_res18 = 0;
  FNameProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (FName)0x0) {
    local_40 = (undefined4)local_res18;
    uStack_3c = local_res18._4_4_;
    uStack_38 = local_res10.ComparisonIndex.Value;
    uStack_34 = local_res10.Number;
    local_78 = local_res10;
    ::FString::FString(&local_60,".Small");
    pFVar3 = ::FName::ToString(&local_78,&local_50);
    ::FString::ConcatFF(&local_70,pFVar3,&local_60);
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_70.Data.ArrayNum != 0) {
      FVar4.Data = local_70.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_30,(wchar_t *)FVar4.Data);
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
  }
  else {
    local_40 = (undefined4)local_res18;
    uStack_3c = local_res18._4_4_;
    uStack_38 = local_res10.ComparisonIndex.Value;
    uStack_34 = local_res10.Number;
    local_30 = local_res20;
  }
  *(ulonglong *)param_3 = CONCAT44(uStack_3c,local_40);
  *(ulonglong *)((longlong)param_3 + 8) = CONCAT44(uStack_34,uStack_38);
  *(FName *)((longlong)param_3 + 0x10) = local_30;
  return;
}

// execMakeStringCommand @ 142c78130

void __cdecl
UToolMenuEntryExtensions::execMakeStringCommand(UObject *param_1,FFrame *param_2,void *param_3)

{
  ForAnyElementType *pFVar1;
  FProperty *pFVar2;
  void *_Src;
  longlong lVar3;
  undefined1 local_res10 [8];
  undefined8 local_res18;
  void *local_48;
  ulonglong local_40;
  undefined1 local_38;
  undefined8 local_34;
  ForAnyElementType local_28;
  undefined8 local_20;
  
  local_res10[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_48 = (void *)0x0;
  local_40 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  _Src = local_48;
  local_38 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar3 = (longlong)(int)local_40;
  local_34 = local_res18;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = CONCAT44(local_20._4_4_,(int)local_40);
  if ((int)local_40 == 0) {
    local_20 = local_40 & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_40,0,&local_28,(int)local_40,(int *)((longlong)&local_20 + 4));
    memcpy(local_28.Data,_Src,lVar3 * 2);
  }
  *(undefined8 *)((longlong)param_3 + 4) = local_34;
  pFVar1 = (ForAnyElementType *)((longlong)param_3 + 0x10);
  *(undefined1 *)param_3 = local_38;
  if (pFVar1 != &local_28) {
    if (pFVar1->Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1->Data);
    }
    pFVar1->Data = local_28.Data;
    *(undefined4 *)((longlong)param_3 + 0x18) = (undefined4)local_20;
    local_28.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)param_3 + 0x1c) = local_20._4_4_;
    local_20 = 0;
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// execMakeToolMenuOwner @ 142c78300

void __cdecl
UToolMenuEntryExtensions::execMakeToolMenuOwner(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong local_res10 [3];
  uint7 uStack_f;
  
  local_res10[0] = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == 0) {
    *(undefined8 *)param_3 = 0;
    *(ulonglong *)((longlong)param_3 + 8) = (ulonglong)uStack_f << 8;
    return;
  }
  *(longlong *)param_3 = local_res10[0];
  *(ulonglong *)((longlong)param_3 + 8) = CONCAT71(uStack_f,2);
  return;
}

// execSetIcon @ 142c78c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl UToolMenuEntryExtensions::execSetIcon(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FToolMenuEntry *pFVar2;
  undefined1 auStack_7c8 [32];
  FName local_7a8;
  FName local_7a0;
  FName local_798;
  FToolMenuEntry local_790;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_7c8;
  FToolMenuEntry::FToolMenuEntry(&local_790);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_790,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_790);
  }
  local_798.ComparisonIndex.Value = 0;
  local_798.Number = 0;
  pFVar2 = &local_790;
  if ((FToolMenuEntry *)param_2->MostRecentPropertyAddress != (FToolMenuEntry *)0x0) {
    pFVar2 = (FToolMenuEntry *)param_2->MostRecentPropertyAddress;
  }
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_798,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_798);
  }
  local_7a0.ComparisonIndex.Value = 0;
  local_7a0.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_7a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_7a0);
  }
  local_7a8.ComparisonIndex.Value = 0;
  local_7a8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_7a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_7a8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetIcon(pFVar2,local_798,local_7a0,local_7a8);
  FToolMenuEntry::~FToolMenuEntry(&local_790);
  return;
}

// execSetLabel @ 142c78e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl UToolMenuEntryExtensions::execSetLabel(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FText *pFVar2;
  FToolMenuEntry *pFVar3;
  undefined1 auStack_828 [32];
  FText local_808;
  bool local_7f8;
  undefined1 local_7f0 [8];
  ForAnyElementType FStack_7e8;
  ulonglong local_7e0;
  FText local_7d8;
  undefined1 local_7c8 [8];
  FDestructionSentinel local_7c0;
  FToolMenuEntry local_7a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_828;
  FToolMenuEntry::FToolMenuEntry(&local_7a8);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_7a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_7a8);
  }
  pFVar3 = &local_7a8;
  if ((FToolMenuEntry *)param_2->MostRecentPropertyAddress != (FToolMenuEntry *)0x0) {
    pFVar3 = (FToolMenuEntry *)param_2->MostRecentPropertyAddress;
  }
  FText::FText(&local_7d8);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_7d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_7d8);
  }
  pFVar2 = &local_7d8;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar2 = (FText *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_808.TextData.Reference = (pFVar2->TextData).Reference;
  if (local_808.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_808.TextData.Reference + 8))
              (local_808.TextData.Reference,local_7c8);
  }
  local_808.Flags = pFVar2->Flags;
  local_7f8 = true;
  local_7e0 = 0;
  local_7f0 = (undefined1  [8])0x0;
  FStack_7e8.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar3->Label).Value,&local_808);
  (pFVar3->Label).bIsSet = local_7f8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar3->Label).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_7f0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_7f0,
             (FWriteAccessScope *)&local_7c0);
  if (((int)local_7e0 != 0) && (FStack_7e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_7e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_7e8,0,0,0x10);
    local_7e0 = local_7e0 & 0xffffffff00000000;
  }
  if (local_7c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7c0.Accessor,&local_7c0);
  }
  if (FStack_7e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_7e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_7f0);
  if (local_808.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_808.TextData.Reference + 0x10))();
  }
  if (local_7d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_7d8.TextData.Reference + 0x10))();
  }
  FToolMenuEntry::~FToolMenuEntry(&local_7a8);
  return;
}

// execSetStringCommand @ 142c79600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl
UToolMenuEntryExtensions::execSetStringCommand(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  FProperty *pFVar3;
  FScriptContainerElement *pFVar4;
  EToolMenuStringCommandType EVar5;
  FName FVar6;
  ForAnyElementType _Src;
  int iVar7;
  longlong lVar8;
  FToolMenuEntry *pFVar9;
  FString *pFVar10;
  undefined1 auStackY_988 [32];
  EToolMenuStringCommandType local_948 [8];
  FName local_940;
  ForAnyElementType local_938;
  undefined8 local_930;
  uchar local_928 [8];
  FSharedReferencer<1> FStack_920;
  uchar local_918 [8];
  FSharedReferencer<1> FStack_910;
  undefined8 local_904;
  uchar local_8f8 [16];
  undefined1 local_8e8 [240];
  FMRSWRecursiveAccessDetector local_7f8 [3];
  FMRSWRecursiveAccessDetector local_7e0 [3];
  FMRSWRecursiveAccessDetector local_7c8 [3];
  bool local_7b0;
  FToolMenuEntry local_7a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_988;
  FToolMenuEntry::FToolMenuEntry(&local_7a8);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_7a8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_7a8);
  }
  local_948[0] = Command;
  pFVar9 = &local_7a8;
  if ((FToolMenuEntry *)param_2->MostRecentPropertyAddress != (FToolMenuEntry *)0x0) {
    pFVar9 = (FToolMenuEntry *)param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_948,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_948);
  }
  local_940.ComparisonIndex.Value = 0;
  local_940.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_940,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_940);
  }
  local_938.Data = (FScriptContainerElement *)0x0;
  local_930 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_938,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_938);
  }
  FVar6 = local_940;
  EVar5 = local_948[0];
  local_8e8[0x68] = false;
  local_8e8[0xd0] = false;
  local_7b0 = false;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FToolUIActionChoice::operator=(&pFVar9->Action,(FToolUIActionChoice *)local_8e8);
  if (local_7b0 != false) {
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(local_7c8);
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(local_7e0);
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(local_7f8);
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)(local_8e8 + 0xd8));
  }
  if (local_8e8[0xd0] != false) {
    FToolUIAction::~FToolUIAction((FToolUIAction *)(local_8e8 + 0x70));
  }
  if (local_8e8[0x68] != false) {
    FUIAction::~FUIAction((FUIAction *)local_8e8);
  }
  local_928[0] = '\0';
  local_928[1] = '\0';
  local_928[2] = '\0';
  local_928[3] = '\0';
  local_928[4] = '\0';
  local_928[5] = '\0';
  local_928[6] = '\0';
  local_928[7] = '\0';
  FStack_920.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&pFVar9->Command != (TSharedPtr<FUICommandInfo_const_,1> *)local_928) {
    (pFVar9->Command).Object = (FUICommandInfo *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar9->Command).SharedReferenceCount,&FStack_920);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_920.ReferenceController);
  local_918[0] = '\0';
  local_918[1] = '\0';
  local_918[2] = '\0';
  local_918[3] = '\0';
  local_918[4] = '\0';
  local_918[5] = '\0';
  local_918[6] = '\0';
  local_918[7] = '\0';
  FStack_910.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&pFVar9->CommandList != (TSharedPtr<FUICommandList_const_,1> *)local_918) {
    (pFVar9->CommandList).Object = (FUICommandList *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar9->CommandList).SharedReferenceCount,&FStack_910);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_910.ReferenceController);
  local_904 = 0;
  (pFVar9->StringExecuteAction).CustomType.ComparisonIndex = 0;
  (pFVar9->StringExecuteAction).CustomType.Number = 0;
  pFVar10 = &(pFVar9->StringExecuteAction).String;
  (pFVar9->StringExecuteAction).Type = Command;
  if (pFVar10 != (FString *)local_8f8) {
    pFVar4 = (pFVar10->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar9->StringExecuteAction).String.Data.ArrayNum = 0;
    (pFVar9->StringExecuteAction).String.Data.ArrayMax = 0;
  }
  _Src.Data = local_938.Data;
  (pFVar9->StringExecuteAction).Type = EVar5;
  (pFVar9->StringExecuteAction).CustomType = FVar6;
  pFVar10 = &(pFVar9->StringExecuteAction).String;
  if (pFVar10 != (FString *)&local_938) {
    iVar7 = (int)local_930;
    lVar8 = (longlong)(int)local_930;
    piVar1 = &(pFVar9->StringExecuteAction).String.Data.ArrayMax;
    iVar2 = *piVar1;
    (pFVar9->StringExecuteAction).String.Data.ArrayNum = (int)local_930;
    if (((int)local_930 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,(int)local_930,iVar2,(ForAnyElementType *)pFVar10,(int)local_930,piVar1);
      if (iVar7 != 0) {
        memcpy((pFVar10->Data).AllocatorInstance.Data,_Src.Data,lVar8 * 2);
      }
    }
  }
  if (local_938.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_938.Data);
  }
  FToolMenuEntry::~FToolMenuEntry(&local_7a8);
  return;
}

// execSetToolTip @ 142c79950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl
UToolMenuEntryExtensions::execSetToolTip(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FText *pFVar2;
  FToolMenuEntry *pFVar3;
  undefined1 auStack_828 [32];
  FText local_808;
  bool local_7f8;
  undefined1 local_7f0 [8];
  ForAnyElementType FStack_7e8;
  ulonglong local_7e0;
  FText local_7d8;
  undefined1 local_7c8 [8];
  FDestructionSentinel local_7c0;
  FToolMenuEntry local_7a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_828;
  FToolMenuEntry::FToolMenuEntry(&local_7a8);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_7a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_7a8);
  }
  pFVar3 = &local_7a8;
  if ((FToolMenuEntry *)param_2->MostRecentPropertyAddress != (FToolMenuEntry *)0x0) {
    pFVar3 = (FToolMenuEntry *)param_2->MostRecentPropertyAddress;
  }
  FText::FText(&local_7d8);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_7d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_7d8);
  }
  pFVar2 = &local_7d8;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar2 = (FText *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_808.TextData.Reference = (pFVar2->TextData).Reference;
  if (local_808.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_808.TextData.Reference + 8))
              (local_808.TextData.Reference,local_7c8);
  }
  local_808.Flags = pFVar2->Flags;
  local_7f8 = true;
  local_7e0 = 0;
  local_7f0 = (undefined1  [8])0x0;
  FStack_7e8.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar3->ToolTip).Value,&local_808);
  (pFVar3->ToolTip).bIsSet = local_7f8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar3->ToolTip).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_7f0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_7f0,
             (FWriteAccessScope *)&local_7c0);
  if (((int)local_7e0 != 0) && (FStack_7e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_7e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_7e8,0,0,0x10);
    local_7e0 = local_7e0 & 0xffffffff00000000;
  }
  if (local_7c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7c0.Accessor,&local_7c0);
  }
  if (FStack_7e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_7e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_7f0);
  if (local_808.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_808.TextData.Reference + 0x10))();
  }
  if (local_7d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_7d8.TextData.Reference + 0x10))();
  }
  FToolMenuEntry::~FToolMenuEntry(&local_7a8);
  return;
}

