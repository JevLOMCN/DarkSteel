// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 16

// StaticClass @ 146a47e40

UClass * __cdecl UUIComponentUserWidgetExtension::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUIComponentUserWidgetExtension.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"UIComponentUserWidgetExtension",
               &Z_Registration_Info_UClass_UUIComponentUserWidgetExtension.InnerSingleton,
               StaticRegisterNativesUUIComponentUserWidgetExtension,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UUIComponentUserWidgetExtension>,
               InternalVTableHelperCtorCaller<UUIComponentUserWidgetExtension>,local_res8,
               UUserWidgetExtension::StaticClass,UUserWidget::StaticClass);
  }
  return Z_Registration_Info_UClass_UUIComponentUserWidgetExtension.InnerSingleton;
}

// UUIComponentUserWidgetExtension @ 146a56710

UUIComponentUserWidgetExtension * __thiscall
UUIComponentUserWidgetExtension::UUIComponentUserWidgetExtension
          (UUIComponentUserWidgetExtension *this,FVTableHelper *param_1)

{
  UUserWidgetExtension::UUserWidgetExtension((UUserWidgetExtension *)this,param_1);
  this->bInitialized = false;
  this->_padding_ = (longlong)&___7UUIComponentUserWidgetExtension__6B_;
  (this->ComponentContainer).field0_0x0.DebugPtr = (UUIComponentContainer *)0x0;
  return this;
}

// UUIComponentUserWidgetExtension @ 146a56750

UUIComponentUserWidgetExtension * __thiscall
UUIComponentUserWidgetExtension::UUIComponentUserWidgetExtension
          (UUIComponentUserWidgetExtension *this,FObjectInitializer *param_1)

{
  UUserWidgetExtension::UUserWidgetExtension((UUserWidgetExtension *)this,param_1);
  this->bInitialized = false;
  this->_padding_ = (longlong)&___7UUIComponentUserWidgetExtension__6B_;
  (this->ComponentContainer).field0_0x0.DebugPtr = (UUIComponentContainer *)0x0;
  return this;
}

// ~UUIComponentUserWidgetExtension @ 146a58810

void __thiscall
UUIComponentUserWidgetExtension::~UUIComponentUserWidgetExtension
          (UUIComponentUserWidgetExtension *this)

{
  this->_padding_ = (longlong)&___7UUIComponentUserWidgetExtension__6B_;
  UUserWidgetExtension::~UUserWidgetExtension((UUserWidgetExtension *)this);
  return;
}

// operator() @ 146a59770

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UUIComponentUserWidgetExtension::GetComponentsFor'::__l5::<lambda_1>::operator()
          (void *this,UUIComponent *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UUIComponent *local_res10;
  FWeakObjectPtr local_res18 [2];
  
  local_res10 = param_1;
  if (param_1 == (UUIComponent *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5158412450147598503>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Extensions\\UIComponentUserWidgetExtension.cpp"
                       ,0xa7,"Component");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    local_res18[0] = (param_1->Owner).WeakPtr;
    bVar4 = TWeakObjectPtr<UWidget,FWeakObjectPtr>::UEOpEquals<UWidget,bool>
                      ((TWeakObjectPtr<UWidget,FWeakObjectPtr> *)local_res18,*(UWidget **)this);
    if (bVar4) {
      pFVar2 = *(ForAnyElementType **)((longlong)this + 8);
      if ((pFVar2->Data <= (FScriptContainerElement *)&local_res10) &&
         ((FScriptContainerElement *)&local_res10 <
          pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) {
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
      iVar5 = *(int *)&pFVar2[1].Data;
      piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar2,piVar1);
      }
      *(int *)&pFVar2[1].Data = iVar5 + 1;
      *(UUIComponent **)(pFVar2->Data + (longlong)iVar5 * 8) = local_res10;
    }
  }
  return;
}

// Construct @ 146a62aa0

void __thiscall UUIComponentUserWidgetExtension::Construct(UUIComponentUserWidgetExtension *this)

{
  UUIComponentContainer *this_00;
  undefined1 local_res8 [32];
  code *local_18;
  undefined1 *local_10;
  
  this_00 = (this->ComponentContainer).field0_0x0.DebugPtr;
  if (this_00 != (UUIComponentContainer *)0x0) {
    local_10 = local_res8;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UUIComponentUserWidgetExtension::Construct'::__l5::<lambda_1>,void,UUIComponent_*>
               ::Call;
    UUIComponentContainer::ForEachComponent
              (this_00,(TFunctionRef<void___cdecl(UUIComponent_*)> *)&local_18);
  }
  return;
}

// Destruct @ 146a6ad70

void __thiscall UUIComponentUserWidgetExtension::Destruct(UUIComponentUserWidgetExtension *this)

{
  UUIComponentContainer *this_00;
  undefined1 local_res8 [32];
  code *local_18;
  undefined1 *local_10;
  
  this_00 = (this->ComponentContainer).field0_0x0.DebugPtr;
  if (this_00 != (UUIComponentContainer *)0x0) {
    local_10 = local_res8;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UUIComponentUserWidgetExtension::Destruct'::__l5::<lambda_1>,void,UUIComponent_*>
               ::Call;
    UUIComponentContainer::ForEachComponent
              (this_00,(TFunctionRef<void___cdecl(UUIComponent_*)> *)&local_18);
  }
  return;
}

// GetComponent @ 146a73d90

UUIComponent * __thiscall
UUIComponentUserWidgetExtension::GetComponent
          (UUIComponentUserWidgetExtension *this,UClass *param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  UUIComponent *pUVar3;
  
  if ((this->ComponentContainer).field0_0x0.DebugPtr == (UUIComponentContainer *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ComponentContainer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Extensions\\UIComponentUserWidgetExtension.cpp"
                       ,0xb2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UUIComponent *)(*pcVar1)();
      return pUVar3;
    }
  }
  pUVar3 = UUIComponentContainer::GetComponent
                     ((this->ComponentContainer).field0_0x0.DebugPtr,param_1,param_2);
  return pUVar3;
}

// GetComponentsFor @ 146a73f30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UUIComponent_*,TSizedDefaultAllocator<32>_> * __thiscall
UUIComponentUserWidgetExtension::GetComponentsFor
          (UUIComponentUserWidgetExtension *this,
          TArray<UUIComponent_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  TArray<UUIComponent_*,TSizedDefaultAllocator<32>_> *pTVar3;
  UWidget *local_28;
  TArray<UUIComponent_*,TSizedDefaultAllocator<32>_> *local_20;
  code *local_18;
  UWidget **local_10;
  
  if (param_1 == (UWidget *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5158412450147598497>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Extensions\\UIComponentUserWidgetExtension.cpp"
                       ,0xa1,"Target");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<UUIComponent_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (param_1 != (UWidget *)0x0) {
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UUIComponentUserWidgetExtension::GetComponentsFor'::__l5::<lambda_1>,void,UUIComponent_*>
               ::Call;
    local_28 = param_1;
    local_20 = __return_storage_ptr__;
    UUIComponentContainer::ForEachComponent
              ((this->ComponentContainer).field0_0x0.DebugPtr,
               (TFunctionRef<void___cdecl(UUIComponent_*)> *)&local_18);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146a77f10

UClass * __cdecl UUIComponentUserWidgetExtension::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUIComponentUserWidgetExtension.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"UIComponentUserWidgetExtension",
               &Z_Registration_Info_UClass_UUIComponentUserWidgetExtension.InnerSingleton,
               StaticRegisterNativesUUIComponentUserWidgetExtension,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UUIComponentUserWidgetExtension>,
               InternalVTableHelperCtorCaller<UUIComponentUserWidgetExtension>,local_res8,
               UUserWidgetExtension::StaticClass,UUserWidget::StaticClass);
  }
  return Z_Registration_Info_UClass_UUIComponentUserWidgetExtension.InnerSingleton;
}

// Initialize @ 146a7a410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UUIComponentUserWidgetExtension::Initialize(UUIComponentUserWidgetExtension *this)

{
  code *pcVar1;
  bool bVar2;
  UUserWidget *pUVar3;
  
  if (this->bInitialized != false) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5158412450147598352>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Extensions\\UIComponentUserWidgetExtension.cpp"
                       ,0x10,"!bInitialized");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->ComponentContainer).field0_0x0.DebugPtr == (UUIComponentContainer *)0x0)
  goto LAB_146a7a4d0;
  if ((this->_padding_ & 0x10) == 0) {
    pUVar3 = (UUserWidget *)this->_padding_;
    if (pUVar3 == (UUserWidget *)0x0) goto LAB_146a7a499;
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
    pUVar3 = (UUserWidget *)0x0;
LAB_146a7a499:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UserWidget",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Extensions\\UIComponentUserWidgetExtension.cpp"
                       ,0x57,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UUIComponentContainer::InitializeComponents((this->ComponentContainer).field0_0x0.DebugPtr,pUVar3)
  ;
LAB_146a7a4d0:
  this->bInitialized = true;
  return;
}

// InitializeComponents @ 146a7adb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UUIComponentUserWidgetExtension::InitializeComponents(UUIComponentUserWidgetExtension *this)

{
  code *pcVar1;
  bool bVar2;
  UUserWidget *pUVar3;
  
  if ((this->ComponentContainer).field0_0x0.DebugPtr == (UUIComponentContainer *)0x0) {
    return;
  }
  if ((this->_padding_ & 0x10) == 0) {
    pUVar3 = (UUserWidget *)this->_padding_;
    if (pUVar3 != (UUserWidget *)0x0) goto LAB_146a7ae2c;
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
    pUVar3 = (UUserWidget *)0x0;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("UserWidget",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Extensions\\UIComponentUserWidgetExtension.cpp"
                     ,0x57,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_146a7ae2c:
  UUIComponentContainer::InitializeComponents((this->ComponentContainer).field0_0x0.DebugPtr,pUVar3)
  ;
  return;
}

// InitializeContainer @ 146a7ae50

void __thiscall
UUIComponentUserWidgetExtension::InitializeContainer
          (UUIComponentUserWidgetExtension *this,UUIComponentContainer *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (UUIComponentContainer *)0x0) {
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
  if ((this->ComponentContainer).field0_0x0.DebugPtr != (UUIComponentContainer *)0x0) {
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
     (param_1 != (UUIComponentContainer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->ComponentContainer).field0_0x0.DebugPtr = param_1;
  return;
}

// IsContainerInitialized @ 146a7c0f0

bool __thiscall
UUIComponentUserWidgetExtension::IsContainerInitialized(UUIComponentUserWidgetExtension *this)

{
  return (this->ComponentContainer).field0_0x0.DebugPtr != (UUIComponentContainer *)0x0;
}

// PreConstruct @ 146a8a490

void __thiscall
UUIComponentUserWidgetExtension::PreConstruct(UUIComponentUserWidgetExtension *this,bool param_1)

{
  UUIComponentContainer *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 local_res8 [8];
  code *local_18;
  undefined1 *local_10;
  
  if (this->bInitialized == false) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5158412450147598359>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Extensions\\UIComponentUserWidgetExtension.cpp"
                       ,0x17,"bInitialized");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (this->ComponentContainer).field0_0x0.DebugPtr;
  if (this_00 != (UUIComponentContainer *)0x0) {
    local_10 = local_res8;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UUIComponentUserWidgetExtension::PreConstruct'::__l5::<lambda_1>,void,UUIComponent_*>
               ::Call;
    local_res8[0] = param_1;
    UUIComponentContainer::ForEachComponent
              (this_00,(TFunctionRef<void___cdecl(UUIComponent_*)> *)&local_18);
  }
  return;
}

// StaticRegisterNativesUUIComponentUserWidgetExtension @ 146a96820

void __cdecl
UUIComponentUserWidgetExtension::StaticRegisterNativesUUIComponentUserWidgetExtension(void)

{
  return;
}

