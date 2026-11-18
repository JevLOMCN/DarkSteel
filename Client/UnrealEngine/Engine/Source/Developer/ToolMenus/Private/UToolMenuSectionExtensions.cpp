// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 14

// StaticClass @ 142c303b0

UClass * __cdecl UToolMenuSectionExtensions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToolMenuSectionExtensions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ToolMenus",L"ToolMenuSectionExtensions",
               &Z_Registration_Info_UClass_UToolMenuSectionExtensions.InnerSingleton,
               StaticRegisterNativesUToolMenuSectionExtensions,0x28,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UToolMenuSectionExtensions>,
               InternalVTableHelperCtorCaller<UToolMenuSectionExtensions>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToolMenuSectionExtensions.InnerSingleton;
}

// UToolMenuSectionExtensions @ 142c3b0f0

UToolMenuSectionExtensions * __thiscall
UToolMenuSectionExtensions::UToolMenuSectionExtensions
          (UToolMenuSectionExtensions *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UToolMenuSectionExtensions__6B_;
  return this;
}

// UToolMenuSectionExtensions @ 142c3b120

UToolMenuSectionExtensions * __thiscall
UToolMenuSectionExtensions::UToolMenuSectionExtensions
          (UToolMenuSectionExtensions *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UToolMenuSectionExtensions__6B_;
  return this;
}

// ~UToolMenuSectionExtensions @ 142c3ca40

void __thiscall
UToolMenuSectionExtensions::~UToolMenuSectionExtensions(UToolMenuSectionExtensions *this)

{
  *(undefined ***)this = &___7UToolMenuSectionExtensions__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddEntry @ 142c45570

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl UToolMenuSectionExtensions::AddEntry(FToolMenuSection *param_1,FToolMenuEntry *param_2)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  FToolMenuEntry *pFVar8;
  uint uVar9;
  
  if (param_2->Name != (FName)0x0) {
    uVar6 = FToolMenuSection::IndexOfBlock(param_1,param_2->Name);
    if (uVar6 == 0xffffffff) {
      pFVar8 = (FToolMenuEntry *)(param_1->Blocks).AllocatorInstance.Data;
      if ((pFVar8 <= param_2) && (param_2 < pFVar8 + (param_1->Blocks).ArrayMax)) {
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
      iVar5 = (param_1->Blocks).ArrayNum;
      piVar1 = &(param_1->Blocks).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x780,8,&(param_1->Blocks).AllocatorInstance,piVar1);
      }
      (param_1->Blocks).ArrayNum = iVar5 + 1;
      pFVar8 = FToolMenuEntry::FToolMenuEntry
                         ((FToolMenuEntry *)
                          ((param_1->Blocks).AllocatorInstance.Data + (longlong)iVar5 * 0x780),
                          param_2);
      pFVar8->bAddedDuringRegister = param_1->bIsRegistering;
      return;
    }
    uVar9 = ~uVar6 >> 0x1f;
    uVar7 = 0;
    if ((int)uVar6 < (param_1->Blocks).ArrayNum) {
      uVar7 = uVar9;
    }
    if (uVar7 == 0) {
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
    FToolMenuEntry::operator=
              ((FToolMenuEntry *)
               ((param_1->Blocks).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x780),param_2);
    FVar2 = (FScriptContainerElement)param_1->bIsRegistering;
    uVar7 = 0;
    if ((int)uVar6 < (param_1->Blocks).ArrayNum) {
      uVar7 = uVar9;
    }
    if (uVar7 == 0) {
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
    (param_1->Blocks).AllocatorInstance.Data[(longlong)(int)uVar6 * 0x780 + 0x758] = FVar2;
    uVar7 = 0;
    if ((int)uVar6 < (param_1->Blocks).ArrayNum) {
      uVar7 = uVar9;
    }
    if (uVar7 == 0) {
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
    return;
  }
  pFVar8 = (FToolMenuEntry *)(param_1->Blocks).AllocatorInstance.Data;
  if ((pFVar8 <= param_2) && (param_2 < pFVar8 + (param_1->Blocks).ArrayMax)) {
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
  iVar5 = (param_1->Blocks).ArrayNum;
  piVar1 = &(param_1->Blocks).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x780,8,&(param_1->Blocks).AllocatorInstance,piVar1);
  }
  (param_1->Blocks).ArrayNum = iVar5 + 1;
  pFVar8 = FToolMenuEntry::FToolMenuEntry
                     ((FToolMenuEntry *)
                      ((param_1->Blocks).AllocatorInstance.Data + (longlong)iVar5 * 0x780),param_2);
  pFVar8->bAddedDuringRegister = param_1->bIsRegistering;
  return;
}

// AddEntryObject @ 142c456d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl
UToolMenuSectionExtensions::AddEntryObject(FToolMenuSection *param_1,UToolMenuEntryScript *param_2)

{
  FName FVar1;
  UToolMenus *pUVar2;
  char cVar3;
  FName *pFVar4;
  FModuleManager *this;
  UClass *pUVar5;
  undefined1 auStack_7c8 [32];
  FName FStack_7a8;
  FName FStack_7a0;
  FToolMenuEntry FStack_798;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_7c8;
  cVar3 = (**(code **)(param_2->_padding_ + 0x1c0))(param_2);
  if (cVar3 != '\0') {
    FStack_7a8.ComparisonIndex.Value = 0;
    FStack_7a8.Number = 0;
    if ((UToolMenus::Singleton == (UToolMenus *)0x0) && (UToolMenus::bHasShutDown == false)) {
      pFVar4 = ::FName::FName(&FStack_7a0,"ToolMenus");
      FVar1 = *pFVar4;
      this = FModuleManager::Get();
      FModuleManager::LoadModuleChecked(this,FVar1);
      UToolMenus::Singleton = UE::ToolMenus::Private::CreateToolMenusInstance();
    }
    pUVar2 = UToolMenus::Singleton;
    pUVar5 = UToolMenuEntryScript::StaticClass();
    param_2 = (UToolMenuEntryScript *)
              DuplicateObject_Internal(pUVar5,(UObject *)param_2,(UObject *)pUVar2,FStack_7a8);
  }
  FToolMenuEntry::FToolMenuEntry(&FStack_798);
  UToolMenuEntryScript::ToMenuEntry(param_2,&FStack_798);
  FToolMenuSection::AddEntry(param_1,&FStack_798);
  FToolMenuEntry::~FToolMenuEntry(&FStack_798);
  return;
}

// GetLabel @ 142c5e440

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FText * __cdecl
UToolMenuSectionExtensions::GetLabel(FText *__return_storage_ptr__,FToolMenuSection *param_1)

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

// GetPrivateStaticClass @ 142c5f810

UClass * __cdecl UToolMenuSectionExtensions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToolMenuSectionExtensions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ToolMenus",L"ToolMenuSectionExtensions",
               &Z_Registration_Info_UClass_UToolMenuSectionExtensions.InnerSingleton,
               StaticRegisterNativesUToolMenuSectionExtensions,0x28,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UToolMenuSectionExtensions>,
               InternalVTableHelperCtorCaller<UToolMenuSectionExtensions>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToolMenuSectionExtensions.InnerSingleton;
}

// SetLabel @ 142c704d0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl UToolMenuSectionExtensions::SetLabel(FToolMenuSection *param_1,FText *param_2)

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

// StaticRegisterNativesUToolMenuSectionExtensions @ 142c70fa0

void __cdecl UToolMenuSectionExtensions::StaticRegisterNativesUToolMenuSectionExtensions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UToolMenuSectionExtensions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddEntry @ 142c75570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl
UToolMenuSectionExtensions::execAddEntry(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FToolMenuEntry *pFVar2;
  FToolMenuSection *this;
  undefined1 auStack_9e8 [32];
  FToolMenuSection local_9c8;
  FToolMenuEntry local_790;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_9e8;
  FToolMenuSection::FToolMenuSection(&local_9c8);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_9c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_9c8);
  }
  this = &local_9c8;
  if ((FToolMenuSection *)param_2->MostRecentPropertyAddress != (FToolMenuSection *)0x0) {
    this = (FToolMenuSection *)param_2->MostRecentPropertyAddress;
  }
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
  pFVar2 = &local_790;
  if ((FToolMenuEntry *)param_2->MostRecentPropertyAddress != (FToolMenuEntry *)0x0) {
    pFVar2 = (FToolMenuEntry *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FToolMenuSection::AddEntry(this,pFVar2);
  FToolMenuEntry::~FToolMenuEntry(&local_790);
  FToolMenuSection::~FToolMenuSection(&local_9c8);
  return;
}

// execAddEntryObject @ 142c756b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl
UToolMenuSectionExtensions::execAddEntryObject(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FToolMenuSection *this;
  undefined1 auStack_278 [32];
  UToolMenuEntryScript *local_258;
  FToolMenuSection local_250;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_278;
  FToolMenuSection::FToolMenuSection(&local_250);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_250,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_250);
  }
  local_258 = (UToolMenuEntryScript *)0x0;
  this = &local_250;
  if ((FToolMenuSection *)param_2->MostRecentPropertyAddress != (FToolMenuSection *)0x0) {
    this = (FToolMenuSection *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_258,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_258);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FToolMenuSection::AddEntryObject(this,local_258);
  FToolMenuSection::~FToolMenuSection(&local_250);
  return;
}

// execGetLabel @ 142c772a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl
UToolMenuSectionExtensions::execGetLabel(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FText *pFVar2;
  FToolMenuSection *pFVar3;
  undefined1 auStack_288 [32];
  undefined1 local_268 [8];
  FText local_260;
  FToolMenuSection local_250;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_288;
  FToolMenuSection::FToolMenuSection(&local_250);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_250,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_250);
  }
  pFVar3 = &local_250;
  if ((FToolMenuSection *)param_2->MostRecentPropertyAddress != (FToolMenuSection *)0x0) {
    pFVar3 = (FToolMenuSection *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = TAttribute<FText>::Get(&pFVar3->Label);
  local_260.TextData.Reference = (pFVar2->TextData).Reference;
  if (local_260.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_260.TextData.Reference + 8))
              (local_260.TextData.Reference,local_268);
  }
  local_260.Flags = pFVar2->Flags;
  FText::operator=(param_3,&local_260);
  if (local_260.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_260.TextData.Reference + 0x10))();
  }
  FToolMenuSection::~FToolMenuSection(&local_250);
  return;
}

// execSetLabel @ 142c79030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl
UToolMenuSectionExtensions::execSetLabel(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FText *pFVar2;
  FToolMenuSection *pFVar3;
  undefined1 auStack_2d8 [32];
  FText local_2b8;
  bool local_2a8;
  undefined1 local_2a0 [8];
  ForAnyElementType FStack_298;
  ulonglong local_290;
  FText local_288;
  undefined1 local_278 [8];
  FDestructionSentinel local_270;
  FToolMenuSection local_258;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  FToolMenuSection::FToolMenuSection(&local_258);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_258,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_258);
  }
  pFVar3 = &local_258;
  if ((FToolMenuSection *)param_2->MostRecentPropertyAddress != (FToolMenuSection *)0x0) {
    pFVar3 = (FToolMenuSection *)param_2->MostRecentPropertyAddress;
  }
  FText::FText(&local_288);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_288,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_288);
  }
  pFVar2 = &local_288;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar2 = (FText *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_2b8.TextData.Reference = (pFVar2->TextData).Reference;
  if (local_2b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2b8.TextData.Reference + 8))
              (local_2b8.TextData.Reference,local_278);
  }
  local_2b8.Flags = pFVar2->Flags;
  local_2a8 = true;
  local_290 = 0;
  local_2a0 = (undefined1  [8])0x0;
  FStack_298.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar3->Label).Value,&local_2b8);
  (pFVar3->Label).bIsSet = local_2a8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar3->Label).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2a0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2a0,
             (FWriteAccessScope *)&local_270);
  if (((int)local_290 != 0) && (FStack_298.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_298.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_298,0,0,0x10);
    local_290 = local_290 & 0xffffffff00000000;
  }
  if (local_270.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_270.Accessor,&local_270);
  }
  if (FStack_298.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_298.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2a0);
  if (local_2b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2b8.TextData.Reference + 0x10))();
  }
  if (local_288.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_288.TextData.Reference + 0x10))();
  }
  FToolMenuSection::~FToolMenuSection(&local_258);
  return;
}

