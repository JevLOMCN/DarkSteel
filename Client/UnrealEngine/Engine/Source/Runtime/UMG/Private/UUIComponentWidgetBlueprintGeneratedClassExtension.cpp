// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 13

// StaticClass @ 146a4a130

UClass * __cdecl UUIComponentWidgetBlueprintGeneratedClassExtension::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUIComponentWidgetBlueprintGeneratedClassExtension.InnerSingleton
      == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"UIComponentWidgetBlueprintGeneratedClassExtension",
               &Z_Registration_Info_UClass_UUIComponentWidgetBlueprintGeneratedClassExtension.
                InnerSingleton,
               StaticRegisterNativesUUIComponentWidgetBlueprintGeneratedClassExtension,0x30,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UUIComponentWidgetBlueprintGeneratedClassExtension>,
               InternalVTableHelperCtorCaller<UUIComponentWidgetBlueprintGeneratedClassExtension>,
               local_res8,UWidgetBlueprintGeneratedClassExtension::StaticClass,UObject::StaticClass)
    ;
  }
  return Z_Registration_Info_UClass_UUIComponentWidgetBlueprintGeneratedClassExtension.
         InnerSingleton;
}

// UUIComponentWidgetBlueprintGeneratedClassExtension @ 146a56790

UUIComponentWidgetBlueprintGeneratedClassExtension * __thiscall
UUIComponentWidgetBlueprintGeneratedClassExtension::
UUIComponentWidgetBlueprintGeneratedClassExtension
          (UUIComponentWidgetBlueprintGeneratedClassExtension *this,FVTableHelper *param_1)

{
  UWidgetBlueprintGeneratedClassExtension::UWidgetBlueprintGeneratedClassExtension
            ((UWidgetBlueprintGeneratedClassExtension *)this,param_1);
  this->_padding_ = (longlong)&___7UUIComponentWidgetBlueprintGeneratedClassExtension__6B_;
  (this->ComponentContainer).field0_0x0.DebugPtr = (UUIComponentContainer *)0x0;
  return this;
}

// UUIComponentWidgetBlueprintGeneratedClassExtension @ 146a567c0

UUIComponentWidgetBlueprintGeneratedClassExtension * __thiscall
UUIComponentWidgetBlueprintGeneratedClassExtension::
UUIComponentWidgetBlueprintGeneratedClassExtension
          (UUIComponentWidgetBlueprintGeneratedClassExtension *this,FObjectInitializer *param_1)

{
  UWidgetBlueprintGeneratedClassExtension::UWidgetBlueprintGeneratedClassExtension
            ((UWidgetBlueprintGeneratedClassExtension *)this,param_1);
  this->_padding_ = (longlong)&___7UUIComponentWidgetBlueprintGeneratedClassExtension__6B_;
  (this->ComponentContainer).field0_0x0.DebugPtr = (UUIComponentContainer *)0x0;
  return this;
}

// ~UUIComponentWidgetBlueprintGeneratedClassExtension @ 146a58830

void __thiscall
UUIComponentWidgetBlueprintGeneratedClassExtension::
~UUIComponentWidgetBlueprintGeneratedClassExtension
          (UUIComponentWidgetBlueprintGeneratedClassExtension *this)

{
  this->_padding_ = (longlong)&___7UUIComponentWidgetBlueprintGeneratedClassExtension__6B_;
  UWidgetBlueprintGeneratedClassExtension::~UWidgetBlueprintGeneratedClassExtension
            ((UWidgetBlueprintGeneratedClassExtension *)this);
  return;
}

// operator() @ 146a59880

void __thiscall
`UUIComponentWidgetBlueprintGeneratedClassExtension::VerifyContainer'::__l5::<lambda_1>::operator()
          (void *this,FUIComponentTarget *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  
  pFVar2 = *(ForAnyElementType **)this;
  if (((FUIComponentTarget *)pFVar2->Data <= param_1) &&
     (param_1 < (FUIComponentTarget *)pFVar2->Data + *(int *)((longlong)&pFVar2[1].Data + 4))) {
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
  iVar7 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar7 + 1;
  pFVar3 = pFVar2->Data;
  *(FName *)(pFVar3 + (longlong)iVar7 * 0x10) = param_1->TargetName;
  FVar4 = (FName)(param_1->Component).field0_0x0.DebugPtr;
  ((FName *)(pFVar3 + (longlong)iVar7 * 0x10))[1] = FVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar4 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar4);
  }
  return;
}

// operator() @ 146a59a50

void __thiscall
`UUIComponentWidgetBlueprintGeneratedClassExtension::PreConstruct'::__l13::<lambda_1>::operator()
          (void *this,FUIComponentTarget *param_1)

{
  FName FVar1;
  UClass *pUVar2;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  FName *pFVar6;
  FObjectPropertyBase *this_00;
  UClass *pUVar7;
  UUIComponent *pUVar8;
  int iVar9;
  undefined1 local_res8 [8];
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  local_res10 = param_1->TargetName;
  pUVar8 = (param_1->Component).field0_0x0.DebugPtr;
  pFVar5 = ::FName::ToString(&local_res10,&local_38);
  ::FString::FString(&local_48,"_");
  local_res18 = (FName)pUVar8->_padding_;
  ::FName::ToString(&local_res18,&local_58);
  ::FString::ConcatFF(&local_68,&local_58,&local_48);
  ::FString::ConcatFF(&local_78,&local_68,pFVar5);
  iVar9 = local_78.Data.ArrayNum + -1;
  if (local_78.Data.ArrayNum == 0) {
    iVar9 = 0;
  }
  pFVar6 = ::FName::FName(&local_res20,iVar9,(wchar_t *)local_78.Data.AllocatorInstance.Data,
                          FNAME_Add);
  FVar1 = *pFVar6;
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
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  this_00 = FindFProperty<FObjectPropertyBase>
                      (*(UStruct **)(*(longlong *)((longlong)this + 8) + 0x10),FVar1,Default);
  if (this_00 != (FObjectPropertyBase *)0x0) {
    pUVar2 = (this_00->PropertyClass).field0_0x0.DebugPtr;
    pUVar7 = UUIComponent::StaticClass();
    if (pUVar7 != (UClass *)0x0) {
      iVar9 = (int)pUVar7->_padding_;
      if (((int)pUVar2->_padding_ < iVar9) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar9 * 8) !=
          &pUVar7->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) goto LAB_146a59bb0;
    }
  }
  local_res8[0] = 0;
  bVar4 = ``UUIComponentWidgetBlueprintGeneratedClassExtension::PreConstruct'::__l13::<lambda_1>::
          operator()'::__l2::<lambda_1>::operator()(local_res8);
  if (!bVar4) {
    return;
  }
LAB_146a59bb0:
  pUVar2 = (this_00->PropertyClass).field0_0x0.DebugPtr;
  pUVar7 = (UClass *)((param_1->Component).field0_0x0.DebugPtr)->_padding_;
  if (pUVar2 == (UClass *)0x0) {
    bVar4 = pUVar7 == (UClass *)0x0;
  }
  else {
    bVar4 = pUVar2 == pUVar7;
  }
  if (bVar4) {
    pUVar8 = UUIComponentUserWidgetExtension::GetComponent
                       (*(UUIComponentUserWidgetExtension **)this,pUVar2,param_1->TargetName);
    FObjectPropertyBase::SetObjectPropertyValue_InContainer
              (this_00,*(void **)((longlong)this + 8),(UObject *)pUVar8,0);
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6249991217493311628>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Extensions\\UIComponentWidgetBlueprintGeneratedClassExtension.cpp"
                       ,0x8c,
                       "FoundPanelObjectProperty->PropertyClass == ComponentTarget.GetComponent()->GetClass()"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// DuplicateContainer @ 146a6ff60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UUIComponentContainer * __thiscall
UUIComponentWidgetBlueprintGeneratedClassExtension::DuplicateContainer
          (UUIComponentWidgetBlueprintGeneratedClassExtension *this,UUserWidget *param_1)

{
  UClass *pUVar1;
  code *pcVar2;
  bool bVar3;
  UUIComponentContainer *pUVar4;
  UClass *pUVar5;
  longlong *plVar6;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (((this->ComponentContainer).field0_0x0.DebugPtr == (UUIComponentContainer *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ComponentContainer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Extensions\\UIComponentWidgetBlueprintGeneratedClassExtension.cpp"
                         ,0x12,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar4 = (UUIComponentContainer *)(*pcVar2)();
    return pUVar4;
  }
  if (((((this->ComponentContainer).field0_0x0.DebugPtr)->Components).ArrayNum == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ComponentContainer->IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Extensions\\UIComponentWidgetBlueprintGeneratedClassExtension.cpp"
                         ,0x13,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar4 = (UUIComponentContainer *)(*pcVar2)();
    return pUVar4;
  }
  pUVar4 = (this->ComponentContainer).field0_0x0.DebugPtr;
  local_b8 = 0;
  pUVar1 = (UClass *)pUVar4->_padding_;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar5 = UUIComponentContainer::StaticClass();
  CheckIsClassChildOf_Internal(pUVar5,pUVar1);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar1);
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_a8._16_4_ = 0;
  local_a8._20_4_ = 0;
  local_a8._24_4_ = RF_Transactional;
  local_a8[0x20] = false;
  local_a8._8_8_ = param_1;
  local_a8._40_8_ = pUVar4;
  pUVar4 = (UUIComponentContainer *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar6 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  return pUVar4;
}

// GetPrivateStaticClass @ 146a77fd0

UClass * __cdecl UUIComponentWidgetBlueprintGeneratedClassExtension::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUIComponentWidgetBlueprintGeneratedClassExtension.InnerSingleton
      == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"UIComponentWidgetBlueprintGeneratedClassExtension",
               &Z_Registration_Info_UClass_UUIComponentWidgetBlueprintGeneratedClassExtension.
                InnerSingleton,
               StaticRegisterNativesUUIComponentWidgetBlueprintGeneratedClassExtension,0x30,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UUIComponentWidgetBlueprintGeneratedClassExtension>,
               InternalVTableHelperCtorCaller<UUIComponentWidgetBlueprintGeneratedClassExtension>,
               local_res8,UWidgetBlueprintGeneratedClassExtension::StaticClass,UObject::StaticClass)
    ;
  }
  return Z_Registration_Info_UClass_UUIComponentWidgetBlueprintGeneratedClassExtension.
         InnerSingleton;
}

// Initialize @ 146a7a4e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UUIComponentWidgetBlueprintGeneratedClassExtension::Initialize
          (UUIComponentWidgetBlueprintGeneratedClassExtension *this,UUserWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  UUIComponentUserWidgetExtension *pUVar3;
  UUIComponentContainer *pUVar4;
  
  pUVar3 = UUserWidget::GetExtension<UUIComponentUserWidgetExtension>(param_1);
  if (pUVar3 == (UUIComponentUserWidgetExtension *)0x0) {
    pUVar3 = UUserWidget::AddExtension<UUIComponentUserWidgetExtension>(param_1);
  }
  if ((pUVar3->ComponentContainer).field0_0x0.DebugPtr == (UUIComponentContainer *)0x0) {
    pUVar4 = DuplicateContainer(this,param_1);
    if (pUVar4 == (UUIComponentContainer *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InComponentContainer != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Extensions\\UIComponentUserWidgetExtension.cpp"
                         ,0x48,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((pUVar3->ComponentContainer).field0_0x0.DebugPtr != (UUIComponentContainer *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ComponentContainer == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Extensions\\UIComponentUserWidgetExtension.cpp"
                         ,0x49,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UUIComponentContainer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (pUVar3->ComponentContainer).field0_0x0.DebugPtr = pUVar4;
  }
  return;
}

// InitializeContainer @ 146a7aef0

void __thiscall
UUIComponentWidgetBlueprintGeneratedClassExtension::InitializeContainer
          (UUIComponentWidgetBlueprintGeneratedClassExtension *this,UUIComponentContainer *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (UUIComponentContainer *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InComponentContainer != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Extensions\\UIComponentWidgetBlueprintGeneratedClassExtension.cpp"
                       ,0x59,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->ComponentContainer).field0_0x0.DebugPtr != (UUIComponentContainer *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ComponentContainer == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Extensions\\UIComponentWidgetBlueprintGeneratedClassExtension.cpp"
                       ,0x5a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UUIComponentContainer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->ComponentContainer).field0_0x0.DebugPtr = param_1;
  return;
}

// PreConstruct @ 146a8a520

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UUIComponentWidgetBlueprintGeneratedClassExtension::PreConstruct
          (UUIComponentWidgetBlueprintGeneratedClassExtension *this,UUserWidget *param_1,
          bool param_2)

{
  code *pcVar1;
  bool bVar2;
  UUIComponentUserWidgetExtension *pUVar3;
  UUIComponentContainer *pUVar4;
  UUserWidget *pUVar5;
  UUIComponentUserWidgetExtension *local_28;
  UUserWidget *local_20;
  code *local_18;
  UUIComponentUserWidgetExtension **local_10;
  
  pUVar3 = UUserWidget::GetExtension<UUIComponentUserWidgetExtension>(param_1);
  if (pUVar3 == (UUIComponentUserWidgetExtension *)0x0) {
    pUVar3 = UUserWidget::AddExtension<UUIComponentUserWidgetExtension>(param_1);
    pUVar4 = DuplicateContainer(this,param_1);
    if (pUVar4 == (UUIComponentContainer *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InComponentContainer != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Extensions\\UIComponentUserWidgetExtension.cpp"
                         ,0x48,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((pUVar3->ComponentContainer).field0_0x0.DebugPtr != (UUIComponentContainer *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ComponentContainer == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Extensions\\UIComponentUserWidgetExtension.cpp"
                         ,0x49,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UUIComponentContainer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (pUVar3->ComponentContainer).field0_0x0.DebugPtr = pUVar4;
  }
  else {
    if ((pUVar3->_padding_ & 0x10) == 0) {
      pUVar5 = (UUserWidget *)pUVar3->_padding_;
    }
    else {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1637797074370035733>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                         ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pUVar5 = (UUserWidget *)0x0;
    }
    if (param_1 != pUVar5) {
      (**(code **)(pUVar3->_padding_ + 0x170))(pUVar3,0,param_1,0);
    }
  }
  if (!param_2) {
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UUIComponentWidgetBlueprintGeneratedClassExtension::PreConstruct'::__l13::<lambda_1>,void,FUIComponentTarget_const_&>
               ::Call;
    local_28 = pUVar3;
    local_20 = param_1;
    UUIComponentContainer::ForEachComponentTarget
              ((this->ComponentContainer).field0_0x0.DebugPtr,
               (TFunctionRef<void___cdecl(FUIComponentTarget_const_&)> *)&local_18);
  }
  return;
}

// StaticRegisterNativesUUIComponentWidgetBlueprintGeneratedClassExtension @ 146a96830

void __cdecl
UUIComponentWidgetBlueprintGeneratedClassExtension::
StaticRegisterNativesUUIComponentWidgetBlueprintGeneratedClassExtension(void)

{
  return;
}

// VerifyContainer @ 146a9c620

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
UUIComponentWidgetBlueprintGeneratedClassExtension::VerifyContainer
          (UUIComponentWidgetBlueprintGeneratedClassExtension *this,UUserWidget *param_1)

{
  FName FVar1;
  UClass *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  UUIComponentUserWidgetExtension *pUVar8;
  UUIComponent *pUVar9;
  uint uVar10;
  int iVar11;
  ForAnyElementType *local_res18 [2];
  ForAnyElementType local_28;
  undefined8 local_20;
  code *local_18;
  ForAnyElementType **local_10;
  
  pUVar8 = UUserWidget::GetExtension<UUIComponentUserWidgetExtension>(param_1);
  if (pUVar8 == (UUIComponentUserWidgetExtension *)0x0) {
    return false;
  }
  local_res18[0] = &local_28;
  local_10 = local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UUIComponentWidgetBlueprintGeneratedClassExtension::VerifyContainer'::__l5::<lambda_1>,void,FUIComponentTarget_const_&>
             ::Call;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = 0;
  UUIComponentContainer::ForEachComponentTarget
            ((this->ComponentContainer).field0_0x0.DebugPtr,
             (TFunctionRef<void___cdecl(FUIComponentTarget_const_&)> *)&local_18);
  do {
    if ((int)local_20 < 1) {
      bVar4 = true;
LAB_146a9c7ed:
      if (local_28.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data);
      }
      return bVar4;
    }
    uVar6 = (int)local_20 - 1;
    uVar10 = 0;
    if ((int)uVar6 < (int)local_20) {
      uVar10 = ~uVar6 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    FVar1 = *(FName *)(local_28.Data + (longlong)(int)uVar6 * 0x10);
    pUVar2 = *(UClass **)(*(longlong *)(local_28.Data + (longlong)(int)uVar6 * 0x10 + 8) + 0x10);
    if (((pUVar8->ComponentContainer).field0_0x0.DebugPtr == (UUIComponentContainer *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ComponentContainer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Extensions\\UIComponentUserWidgetExtension.cpp"
                           ,0xb2,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pUVar9 = UUIComponentContainer::GetComponent
                       ((pUVar8->ComponentContainer).field0_0x0.DebugPtr,pUVar2,FVar1);
    if (pUVar9 == (UUIComponent *)0x0) {
      bVar4 = false;
      goto LAB_146a9c7ed;
    }
    uVar10 = (int)local_20 - 1;
    uVar6 = 0;
    if ((int)uVar10 < (int)local_20) {
      uVar6 = ~uVar10 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    iVar7 = ((int)local_20 - uVar10) + -1;
    iVar11 = (int)local_20;
    if (iVar7 != 0) {
      memmove(local_28.Data + (longlong)(int)uVar10 * 0x10,
              local_28.Data + (longlong)(int)uVar10 * 0x10 + 0x10,(longlong)iVar7 << 4);
      iVar11 = (int)local_20;
    }
    local_20 = CONCAT44(local_20._4_4_,iVar11 + -1);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&local_28,iVar11 + -1,(int *)((longlong)&local_20 + 4));
  } while( true );
}

