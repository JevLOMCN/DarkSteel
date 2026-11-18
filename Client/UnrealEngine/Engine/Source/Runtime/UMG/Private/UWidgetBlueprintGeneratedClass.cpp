// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 23

// StaticClass @ 146a4b3b0

UClass * __cdecl UWidgetBlueprintGeneratedClass::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetBlueprintGeneratedClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UClass::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetBlueprintGeneratedClass",
               &Z_Registration_Info_UClass_UWidgetBlueprintGeneratedClass.InnerSingleton,
               StaticRegisterNativesUWidgetBlueprintGeneratedClass,0x3e0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWidgetBlueprintGeneratedClass>,
               InternalVTableHelperCtorCaller<UWidgetBlueprintGeneratedClass>,local_res8,
               UBlueprintGeneratedClass::StaticClass,UPackage::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetBlueprintGeneratedClass.InnerSingleton;
}

// UWidgetBlueprintGeneratedClass @ 146a56cc0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UWidgetBlueprintGeneratedClass * __thiscall
UWidgetBlueprintGeneratedClass::UWidgetBlueprintGeneratedClass
          (UWidgetBlueprintGeneratedClass *this,FVTableHelper *param_1)

{
  UBlueprintGeneratedClass::UBlueprintGeneratedClass((UBlueprintGeneratedClass *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UClass__;
  this->_padding_ = (longlong)&_vftable__for__IBlueprintPropertyGuidProvider__;
  (this->WidgetTree).field0_0x0.DebugPtr = (UWidgetTree *)0x0;
  (this->Extensions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Extensions).ArrayNum = 0;
  (this->Extensions).ArrayMax = 0;
  (this->Bindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bindings).ArrayNum = 0;
  (this->Bindings).ArrayMax = 0;
  (this->Animations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Animations).ArrayNum = 0;
  (this->Animations).ArrayMax = 0;
  (this->NamedSlots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NamedSlots).ArrayNum = 0;
  (this->NamedSlots).ArrayMax = 0;
  (this->AvailableNamedSlots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AvailableNamedSlots).ArrayNum = 0;
  (this->AvailableNamedSlots).ArrayMax = 0;
  (this->InstanceNamedSlots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceNamedSlots).ArrayNum = 0;
  (this->InstanceNamedSlots).ArrayMax = 0;
  return this;
}

// UWidgetBlueprintGeneratedClass @ 146a56d60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UWidgetBlueprintGeneratedClass * __thiscall
UWidgetBlueprintGeneratedClass::UWidgetBlueprintGeneratedClass(UWidgetBlueprintGeneratedClass *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UBlueprintGeneratedClass::UBlueprintGeneratedClass((UBlueprintGeneratedClass *)this,pFVar1);
  this->_padding_ = (longlong)&_vftable__for__UClass__;
  this->_padding_ = (longlong)&_vftable__for__IBlueprintPropertyGuidProvider__;
  this->bCanCallInitializedWithoutPlayerContext = 0;
  (this->WidgetTree).field0_0x0.DebugPtr = (UWidgetTree *)0x0;
  (this->Extensions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Extensions).ArrayNum = 0;
  (this->Extensions).ArrayMax = 0;
  (this->Bindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bindings).ArrayNum = 0;
  (this->Bindings).ArrayMax = 0;
  (this->Animations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Animations).ArrayNum = 0;
  (this->Animations).ArrayMax = 0;
  (this->NamedSlots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NamedSlots).ArrayNum = 0;
  (this->NamedSlots).ArrayMax = 0;
  (this->AvailableNamedSlots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AvailableNamedSlots).ArrayNum = 0;
  (this->AvailableNamedSlots).ArrayMax = 0;
  (this->InstanceNamedSlots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceNamedSlots).ArrayNum = 0;
  (this->InstanceNamedSlots).ArrayMax = 0;
  return this;
}

// ~UWidgetBlueprintGeneratedClass @ 146a58a60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UWidgetBlueprintGeneratedClass::~UWidgetBlueprintGeneratedClass
          (UWidgetBlueprintGeneratedClass *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UClass__;
  this->_padding_ = (longlong)&_vftable__for__IBlueprintPropertyGuidProvider__;
  pFVar1 = (this->InstanceNamedSlots).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AvailableNamedSlots).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NamedSlots).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Animations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDelegateRuntimeBinding,int>
            ((FDelegateRuntimeBinding *)(this->Bindings).AllocatorInstance.Data,
             (this->Bindings).ArrayNum);
  pFVar1 = (this->Bindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Extensions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UBlueprintGeneratedClass::~UBlueprintGeneratedClass((UBlueprintGeneratedClass *)this);
  return;
}

// operator() @ 146a5a240

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UWidgetBlueprintGeneratedClass::InitializeWidgetStatic'::__l21::<lambda_3>::operator()
          (void *this,UWidget *param_1)

{
  FObjectPropertyBase *this_00;
  UWidgetNavigation *pUVar1;
  code *pcVar2;
  bool bVar3;
  FObjectPropertyBase **ppFVar4;
  UWidget *pUVar5;
  
  if (param_1 == (UWidget *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3187170246813286143>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\WidgetBlueprintGeneratedClass.cpp"
                       ,0x101,"Widget != nullptr");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    (param_1->WidgetGeneratedByClass).WeakPtr = **(FWeakObjectPtr **)this;
    ppFVar4 = TMapBase<FName,FObjectPropertyBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FObjectPropertyBase_*,0>_>
              ::Find(*(TMapBase<FName,FObjectPropertyBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FObjectPropertyBase_*,0>_>
                       **)((longlong)this + 8),(FName)param_1->_padding_);
    if (ppFVar4 != (FObjectPropertyBase **)0x0) {
      this_00 = *ppFVar4;
      if (this_00 == (FObjectPropertyBase *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Prop",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\WidgetBlueprintGeneratedClass.cpp"
                           ,0x112,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      FObjectPropertyBase::SetObjectPropertyValue_InContainer
                (this_00,(void *)**(undefined8 **)((longlong)this + 0x10),(UObject *)param_1,0);
      pUVar5 = (UWidget *)
               (**(code **)(this_00->_padding_ + 0x208))
                         (this_00,**(undefined8 **)((longlong)this + 0x10),0);
      if (pUVar5 != param_1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value == Widget",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\WidgetBlueprintGeneratedClass.cpp"
                           ,0x115,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    pUVar1 = (param_1->Navigation).field0_0x0.DebugPtr;
    if (pUVar1 != (UWidgetNavigation *)0x0) {
      (**(code **)(pUVar1->_padding_ + 0x2b0))
                (pUVar1,**(undefined8 **)((longlong)this + 0x10),
                 **(undefined8 **)((longlong)this + 0x18));
    }
  }
  return;
}

// BindAnimationsStatic @ 146a5e980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UWidgetBlueprintGeneratedClass::BindAnimationsStatic
          (UUserWidget *param_1,TArrayView<UWidgetAnimation_*,int> *param_2,
          TMap<FName,FObjectPropertyBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FObjectPropertyBase_*,0>_>
          *param_3)

{
  UWidgetAnimation **ppUVar1;
  UWidgetAnimation *pUVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  FObjectPropertyBase **ppFVar6;
  UWidgetAnimation **ppUVar7;
  
  ppUVar7 = param_2->DataPtr;
  ppUVar1 = ppUVar7 + param_2->ArrayNum;
  do {
    if (ppUVar7 == ppUVar1) {
      return;
    }
    pUVar2 = *ppUVar7;
    lVar5 = (**(code **)(pUVar2->_padding_ + 0x2f8))(pUVar2);
    if (lVar5 != 0) {
      lVar5 = (**(code **)(pUVar2->_padding_ + 0x2f8))(pUVar2);
      ppFVar6 = TMapBase<FName,FObjectPropertyBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FObjectPropertyBase_*,0>_>
                ::Find((TMapBase<FName,FObjectPropertyBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FObjectPropertyBase_*,0>_>
                        *)param_3,*(FName *)(lVar5 + 0x18));
      if (ppFVar6 != (FObjectPropertyBase **)0x0) {
        if ((*ppFVar6 == (FObjectPropertyBase *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("*PropPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\WidgetBlueprintGeneratedClass.cpp"
                               ,0x139,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FObjectPropertyBase::SetObjectPropertyValue_InContainer
                  (*ppFVar6,param_1,(UObject *)pUVar2,0);
      }
    }
    ppUVar7 = ppUVar7 + 1;
  } while( true );
}

// FindWidgetTreeOwningClass @ 146a720c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWidgetBlueprintGeneratedClass * __thiscall
UWidgetBlueprintGeneratedClass::FindWidgetTreeOwningClass(UWidgetBlueprintGeneratedClass *this)

{
  UWidgetTree *pUVar1;
  bool bVar2;
  UWidgetBlueprintGeneratedClass *this_00;
  
  this_00 = this;
  if (this == (UWidgetBlueprintGeneratedClass *)0x0) {
    return (UWidgetBlueprintGeneratedClass *)0x0;
  }
  do {
    UObject::ConditionalPostLoad((UObject *)this_00);
    pUVar1 = (this_00->WidgetTree).field0_0x0.DebugPtr;
    if ((pUVar1 != (UWidgetTree *)0x0) &&
       ((pUVar1->RootWidget).field0_0x0.DebugPtr != (UWidget *)0x0)) {
      return this_00;
    }
    this_00 = (UWidgetBlueprintGeneratedClass *)this_00->_padding_;
    if (this_00 == (UWidgetBlueprintGeneratedClass *)0x0) {
      return this;
    }
    bVar2 = UObjectBaseUtility::IsA<UWidgetBlueprintGeneratedClass>((UObjectBaseUtility *)this_00);
  } while (bVar2);
  return this;
}

// GetExtension @ 146a75f10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWidgetBlueprintGeneratedClassExtension * __thiscall
UWidgetBlueprintGeneratedClass::GetExtension
          (UWidgetBlueprintGeneratedClass *this,
          TSubclassOf<UWidgetBlueprintGeneratedClassExtension> param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  UWidgetBlueprintGeneratedClass *this_00;
  bool bVar5;
  UClass *pUVar6;
  UWidgetBlueprintGeneratedClassExtension *pUVar7;
  UObject *pUVar8;
  FScriptContainerElement *pFVar9;
  UObject *local_res8;
  
  pFVar9 = (this->Extensions).AllocatorInstance.Data;
  iVar2 = (this->Extensions).ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar2 * 8;
  do {
    if ((this->Extensions).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UWidgetBlueprintGeneratedClassExtension>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (pFVar9 == pFVar1) {
      if ((param_2) &&
         (this_00 = (UWidgetBlueprintGeneratedClass *)this->_padding_,
         this_00 != (UWidgetBlueprintGeneratedClass *)0x0)) {
        pUVar6 = StaticClass();
        iVar2 = (int)pUVar6->_padding_;
        if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar6->_padding_)) {
          local_res8 = *(UObject **)param_1.Class.field0_0x0;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)
             ) {
            UE::GC::MarkAsReachable(local_res8);
          }
          pUVar7 = GetExtension(this_00,(TSubclassOf<UWidgetBlueprintGeneratedClassExtension>)
                                        &local_res8,true);
          return pUVar7;
        }
      }
      return (UWidgetBlueprintGeneratedClassExtension *)0x0;
    }
    pUVar7 = *(UWidgetBlueprintGeneratedClassExtension **)pFVar9;
    pUVar8 = *(UObject **)param_1.Class.field0_0x0;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar8 != (UObject *)0x0) goto LAB_146a75f8b;
LAB_146a75fb9:
      pUVar8 = (UObject *)0x0;
    }
    else {
      if (pUVar8 == (UObject *)0x0) goto LAB_146a75fb9;
      UE::GC::MarkAsReachable(pUVar8);
LAB_146a75f8b:
      pUVar6 = Z_Construct_UClass_UWidgetBlueprintGeneratedClassExtension_NoRegister();
      if (pUVar6 == (UClass *)0x0) goto LAB_146a75fb9;
      iVar3 = (int)pUVar6->_padding_;
      if ((*(int *)&pUVar8[1].field_0x10 < iVar3) ||
         ((longlong *)*(undefined1 **)(*(longlong *)&pUVar8[1].field_0x8 + (longlong)iVar3 * 8) !=
          &pUVar6->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) goto LAB_146a75fb9;
    }
    lVar4 = *(longlong *)&pUVar7->field_0x10;
    if ((*(int *)&pUVar8[1].field_0x10 <= *(int *)(lVar4 + 0x38)) &&
       (*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)&pUVar8[1].field_0x10 * 8)
        == &pUVar8[1].field_0x8)) {
      return pUVar7;
    }
    pFVar9 = pFVar9 + 8;
  } while( true );
}

// GetExtensions @ 146a76240

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UWidgetBlueprintGeneratedClass::GetExtensions
          (UWidgetBlueprintGeneratedClass *this,
          TArray<UWidgetBlueprintGeneratedClassExtension_*,TSizedDefaultAllocator<32>_> *param_1,
          TSubclassOf<UWidgetBlueprintGeneratedClassExtension> param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  UWidgetBlueprintGeneratedClass *this_00;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  longlong local_48;
  UObject *local_40;
  
  iVar2 = (this->Extensions).ArrayNum;
  pFVar10 = (this->Extensions).AllocatorInstance.Data;
  pFVar1 = pFVar10 + (longlong)iVar2 * 8;
  do {
    if ((this->Extensions).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UWidgetBlueprintGeneratedClassExtension>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar1) {
      if ((param_3) &&
         (this_00 = (UWidgetBlueprintGeneratedClass *)this->_padding_,
         this_00 != (UWidgetBlueprintGeneratedClass *)0x0)) {
        pUVar7 = StaticClass();
        iVar2 = (int)pUVar7->_padding_;
        if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar7->_padding_)) {
          local_40 = *(UObject **)param_2.Class.field0_0x0;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_40 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_40);
          }
          GetExtensions(this_00,param_1,
                        (TSubclassOf<UWidgetBlueprintGeneratedClassExtension>)&local_40,true);
        }
      }
      return;
    }
    lVar9 = *(longlong *)pFVar10;
    pUVar8 = *(UObject **)param_2.Class.field0_0x0;
    local_48 = lVar9;
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar8 == (UObject *)0x0)) {
      if (pUVar8 != (UObject *)0x0) goto LAB_146a762d9;
LAB_146a76307:
      pUVar8 = (UObject *)0x0;
    }
    else {
      UE::GC::MarkAsReachable(pUVar8);
LAB_146a762d9:
      lVar9 = local_48;
      pUVar7 = Z_Construct_UClass_UWidgetBlueprintGeneratedClassExtension_NoRegister();
      if (pUVar7 == (UClass *)0x0) goto LAB_146a76307;
      iVar6 = (int)pUVar7->_padding_;
      if ((*(int *)&pUVar8[1].field_0x10 < iVar6) ||
         ((longlong *)*(undefined1 **)(*(longlong *)&pUVar8[1].field_0x8 + (longlong)iVar6 * 8) !=
          &pUVar7->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) goto LAB_146a76307;
    }
    if ((*(int *)&pUVar8[1].field_0x10 <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
       (*(undefined1 **)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
         (longlong)*(int *)&pUVar8[1].field_0x10 * 8) == &pUVar8[1].field_0x8)) {
      pFVar3 = (param_1->AllocatorInstance).Data;
      if ((pFVar3 <= (FScriptContainerElement *)&local_48) &&
         ((FScriptContainerElement *)&local_48 < pFVar3 + (longlong)param_1->ArrayMax * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = param_1->ArrayNum;
      if (iVar6 == param_1->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar6 + 1;
      *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_48;
    }
    pFVar10 = pFVar10 + 8;
  } while( true );
}

// GetExtensions @ 146a76460

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UWidgetBlueprintGeneratedClassExtension_*,TSizedDefaultAllocator<32>_> * __thiscall
UWidgetBlueprintGeneratedClass::GetExtensions
          (UWidgetBlueprintGeneratedClass *this,
          TArray<UWidgetBlueprintGeneratedClassExtension_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,TSubclassOf<UWidgetBlueprintGeneratedClassExtension> param_1,
          bool param_2)

{
  UObject *local_res10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_res10 = *(UObject **)param_1.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  GetExtensions(this,__return_storage_ptr__,
                (TSubclassOf<UWidgetBlueprintGeneratedClassExtension>)&local_res10,param_2);
  return __return_storage_ptr__;
}

// GetNamedSlotArchetypeContent @ 146a77280

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UWidgetBlueprintGeneratedClass::GetNamedSlotArchetypeContent
          (UWidgetBlueprintGeneratedClass *this,TFunctionRef<void___cdecl(FName,UWidget_*)> *param_1
          )

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  UClass *pUVar5;
  longlong *plVar6;
  UWidgetBlueprintGeneratedClass *pUVar7;
  FScriptContainerElement *pFVar8;
  longlong local_res8;
  undefined8 local_res18 [2];
  
  pFVar8 = (this->NamedSlots).AllocatorInstance.Data;
  iVar2 = (this->NamedSlots).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  do {
    while( true ) {
      if ((this->NamedSlots).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res8);
      }
      if (pFVar8 == pFVar1) {
        return;
      }
      pUVar7 = this;
      if (this != (UWidgetBlueprintGeneratedClass *)0x0) break;
LAB_146a7733e:
      pFVar8 = pFVar8 + 8;
    }
    do {
      plVar6 = &((pUVar7->WidgetTree).field0_0x0.DebugPtr)->_padding_;
      lVar4 = (**(code **)(*plVar6 + 0x18))(plVar6,*(undefined8 *)pFVar8);
      if (lVar4 != 0) {
        local_res18[0] = *(undefined8 *)pFVar8;
        local_res8 = lVar4;
        (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,local_res18,&local_res8);
        goto LAB_146a7733e;
      }
      pUVar7 = (UWidgetBlueprintGeneratedClass *)pUVar7->_padding_;
      if (pUVar7 == (UWidgetBlueprintGeneratedClass *)0x0) goto LAB_146a7733e;
      pUVar5 = StaticClass();
      iVar3 = (int)pUVar5->_padding_;
      if (*(int *)(pUVar7->_padding_ + 0x38) < iVar3) goto LAB_146a7733e;
    } while ((longlong *)
             *(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
             &pUVar5->_padding_);
    pFVar8 = pFVar8 + 8;
  } while( true );
}

// GetPrivateStaticClass @ 146a78210

UClass * __cdecl UWidgetBlueprintGeneratedClass::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetBlueprintGeneratedClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UClass::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetBlueprintGeneratedClass",
               &Z_Registration_Info_UClass_UWidgetBlueprintGeneratedClass.InnerSingleton,
               StaticRegisterNativesUWidgetBlueprintGeneratedClass,0x3e0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWidgetBlueprintGeneratedClass>,
               InternalVTableHelperCtorCaller<UWidgetBlueprintGeneratedClass>,local_res8,
               UBlueprintGeneratedClass::StaticClass,UPackage::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetBlueprintGeneratedClass.InnerSingleton;
}

// InitializeBindingsStatic @ 146a7a920

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UWidgetBlueprintGeneratedClass::InitializeBindingsStatic
          (UUserWidget *param_1,TArrayView<FDelegateRuntimeBinding_const_,int> *param_2,
          TMap<FName,FObjectPropertyBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FObjectPropertyBase_*,0>_>
          *param_3)

{
  FDelegateRuntimeBinding *pFVar1;
  int iVar2;
  int iVar3;
  FDelegateRuntimeBinding *pFVar4;
  FObjectPropertyBase *pFVar5;
  code *pcVar6;
  bool bVar7;
  FName *pFVar8;
  FObjectPropertyBase **ppFVar9;
  UWidget *this;
  UClass *pUVar10;
  FString *pFVar11;
  FDelegateProperty *pFVar12;
  wchar_t *pwVar13;
  ForAnyElementType FVar14;
  FName *this_00;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this_01;
  UUserWidget *local_res10;
  FName local_res20;
  FName local_68;
  FString local_60;
  FString local_50;
  FDestructionSentinel local_40;
  
  bVar7 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)param_1,RF_ArchetypeObject|RF_ClassDefaultObject);
  if ((bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!UserWidget->IsTemplate()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\WidgetBlueprintGeneratedClass.cpp"
                         ,0x8e,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar4 = param_2->DataPtr;
  iVar2 = param_2->ArrayNum;
  if (pFVar4 != pFVar4 + iVar2) {
    this_00 = &pFVar4->PropertyName;
    do {
      if (this_00[-1].ComparisonIndex.Value == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = *(wchar_t **)(this_00 + -2);
      }
      pFVar8 = ::FName::FName(&local_res20,pwVar13);
      ppFVar9 = TMapBase<FName,FObjectPropertyBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FObjectPropertyBase_*,0>_>
                ::Find((TMapBase<FName,FObjectPropertyBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FObjectPropertyBase_*,0>_>
                        *)param_3,*pFVar8);
      if (ppFVar9 != (FObjectPropertyBase **)0x0) {
        pFVar5 = *ppFVar9;
        if ((pFVar5 == (FObjectPropertyBase *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("WidgetProperty",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\WidgetBlueprintGeneratedClass.cpp"
                               ,0x99,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        this = (UWidget *)(**(code **)(pFVar5->_padding_ + 0x208))(pFVar5,param_1,0);
        if (this != (UWidget *)0x0) {
          pUVar10 = Z_Construct_UClass_UWidget_NoRegister();
          iVar3 = (int)pUVar10->_padding_;
          if ((iVar3 <= *(int *)(this->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
              &pUVar10->_padding_)) {
            pFVar11 = ::FName::ToString(this_00,&local_50);
            ::FString::ConcatFC(&local_60,pFVar11,L"Delegate");
            FVar14.Data = (FScriptContainerElement *)L"";
            if (local_60.Data.ArrayNum != 0) {
              FVar14.Data = local_60.Data.AllocatorInstance.Data;
            }
            pFVar8 = ::FName::FName(&local_68,(wchar_t *)FVar14.Data);
            pFVar12 = FindFProperty<FDelegateProperty>((UStruct *)this->_padding_,*pFVar8,Default);
            if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_60.Data.AllocatorInstance.Data);
            }
            if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_50.Data.AllocatorInstance.Data);
            }
            if (((pFVar12 != (FDelegateProperty *)0x0) ||
                (pFVar12 = FindFProperty<FDelegateProperty>
                                     ((UStruct *)this->_padding_,*this_00,Default),
                pFVar12 != (FDelegateProperty *)0x0)) &&
               (((int)this_00[3].ComparisonIndex.Value < 1 ||
                (bVar7 = UWidget::AddBinding(this,pFVar12,(UObject *)param_1,
                                             (FDynamicPropertyPath *)(this_00 + 2)), !bVar7)))) {
              if (((int)pFVar12->_padding_ < 1) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2dd,
                                     L"Array index out of bounds: %i from an array of size %i"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              this_01 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                        ((longlong)&this->_padding_ +
                        (longlong)*(int *)((longlong)&pFVar12->_padding_ + 4));
              if (this_01 != (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)0x0) {
                TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                          (this_01,(FWriteAccessScope *)&local_40);
                local_res10 = param_1;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (param_1 != (UUserWidget *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)param_1);
                }
                FWeakObjectPtr::operator=((FWeakObjectPtr *)(this_01 + 1),(FObjectPtr)&local_res10);
                *(FName *)(this_01 + 2) = this_00[1];
                if (local_40.bDestroyed == false) {
                  FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
                }
              }
            }
          }
        }
      }
      pFVar1 = (FDelegateRuntimeBinding *)(this_00 + 10);
      this_00 = this_00 + 0xc;
    } while (pFVar1 != pFVar4 + iVar2);
  }
  return;
}

// InitializeWidget @ 146a7b310

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UWidgetBlueprintGeneratedClass::InitializeWidget
          (UWidgetBlueprintGeneratedClass *this,UUserWidget *param_1)

{
  int iVar1;
  UWidgetTree *pUVar2;
  code *pcVar3;
  ForElementType<FDelegateRuntimeBinding> FVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  FLowLevelMemTracker *pFVar8;
  FPageAllocator *pFVar9;
  longlong lVar10;
  UWidgetBlueprintGeneratedClass *this_00;
  UWidgetBlueprintGeneratedClass *pUVar11;
  EBindingKind *pEVar12;
  UWidgetAnimation **ppUVar13;
  int *piVar14;
  UWidgetTree *pUVar15;
  ForElementType<FDelegateRuntimeBinding> local_88;
  int local_80 [2];
  ForElementType<UWidgetAnimation_*> local_78;
  int local_70 [2];
  FDelegateRuntimeBinding *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  UWidgetAnimation **local_58;
  int iStack_50;
  undefined4 uStack_4c;
  TArrayView<FDelegateRuntimeBinding_const_,int> local_48;
  TArrayView<UWidgetAnimation_*,int> local_38;
  undefined4 local_1c;
  
  lVar10 = param_1->_padding_;
  local_78.Data = (UWidgetAnimation **)0x0;
  local_70[0] = 0;
  local_70[1] = 0;
  local_88.Data = (FDelegateRuntimeBinding *)0x0;
  local_80[0] = 0;
  local_80[1] = 0;
  for (; lVar10 != 0; lVar10 = *(longlong *)(lVar10 + 0x40)) {
    pUVar7 = StaticClass();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) + (longlong)iVar1 * 8)
        != &pUVar7->_padding_)) break;
    if ((&local_78 == (ForElementType<UWidgetAnimation_*> *)(lVar10 + 0x3a0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)(lVar10 + 0x3a8);
    if (iVar1 != 0) {
      iVar6 = UE::Core::Private::
              ReallocGrow<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<UWidgetAnimation_*>_>
                        (8,8,iVar1,&local_78,local_70,local_70 + 1);
      ConstructItems<UWidgetAnimation_*,TObjectPtr<UWidgetAnimation>,int>
                (local_78.Data + iVar6,
                 (TObjectPtr<UWidgetAnimation> *)
                 ((ForElementType<UWidgetAnimation_*> *)(lVar10 + 0x3a0))->Data,iVar1);
    }
    if ((&local_88 == (ForElementType<FDelegateRuntimeBinding> *)(lVar10 + 0x390)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = *(int *)(lVar10 + 0x398);
    if (iVar1 != 0) {
      iVar6 = UE::Core::Private::
              ReallocGrow<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FDelegateRuntimeBinding>_>
                        (0x60,8,iVar1,&local_88,local_80,local_80 + 1);
      ConstructItems<FDelegateRuntimeBinding,FDelegateRuntimeBinding,int>
                (local_88.Data + iVar6,
                 ((ForElementType<FDelegateRuntimeBinding> *)(lVar10 + 0x390))->Data,iVar1);
    }
  }
  pUVar15 = (this->WidgetTree).field0_0x0.DebugPtr;
  this_00 = this;
  do {
    UObject::ConditionalPostLoad((UObject *)this_00);
    pUVar2 = (this_00->WidgetTree).field0_0x0.DebugPtr;
    if (((pUVar2 != (UWidgetTree *)0x0) &&
        (pUVar11 = this_00, (pUVar2->RootWidget).field0_0x0.DebugPtr != (UWidget *)0x0)) ||
       (this_00 = (UWidgetBlueprintGeneratedClass *)this_00->_padding_, pUVar11 = this,
       this_00 == (UWidgetBlueprintGeneratedClass *)0x0)) break;
    bVar5 = UObjectBaseUtility::IsA<UWidgetBlueprintGeneratedClass>((UObjectBaseUtility *)this_00);
  } while (bVar5);
  FVar4.Data = local_88.Data;
  if (pUVar11 != (UWidgetBlueprintGeneratedClass *)0x0) {
    pUVar15 = (pUVar11->WidgetTree).field0_0x0.DebugPtr;
  }
  iVar1 = local_80[0];
  if ((local_80[0] < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uStack_5c = local_1c;
  iStack_60 = iVar1;
  iVar1 = local_70[0];
  local_58 = local_78.Data;
  local_68 = FVar4.Data;
  if ((local_70[0] < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_48._12_4_ = uStack_5c;
  local_48.ArrayNum = iStack_60;
  iStack_50 = iVar1;
  local_38._12_4_ = uStack_4c;
  local_38.ArrayNum = iVar1;
  local_48.DataPtr = local_68;
  local_38.DataPtr = local_58;
  InitializeWidgetStatic(param_1,(UClass *)this,pUVar15,(UClass *)pUVar11,&local_38,&local_48);
  FVar4.Data = local_88.Data;
  DestructItems<FDelegateRuntimeBinding,int>(local_88.Data,local_80[0]);
  if (FVar4.Data != (FDelegateRuntimeBinding *)0x0) {
    pEVar12 = &FVar4.Data[-1].Kind;
    MemoryTrace_Free((ulong64)pEVar12,0,0);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      pFVar8 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        pFVar8 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(pFVar8,Default,pEVar12,FMalloc,true);
    }
    pEVar12 = pEVar12 + -(ulonglong)*(uint *)pEVar12;
    LOCK();
    iVar1 = *(int *)pEVar12;
    *(int *)pEVar12 = *(int *)pEVar12 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      lVar10 = *(longlong *)(pEVar12 + 0x40);
      MemoryTrace_UnmarkAllocAsHeap((ulong64)pEVar12,0,0);
      if (lVar10 - (longlong)pEVar12 == 0x10000) {
        pFVar9 = FPageAllocator::Get();
        FPageAllocator::Free(pFVar9,pEVar12);
      }
      else {
        (**(code **)((longlong)*UE::Private::GMalloc + 0x48))();
      }
    }
  }
  if (local_78.Data != (UWidgetAnimation **)0x0) {
    ppUVar13 = local_78.Data + -1;
    MemoryTrace_Free((ulong64)ppUVar13,0,0);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      pFVar8 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        pFVar8 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(pFVar8,Default,ppUVar13,FMalloc,true);
    }
    piVar14 = (int *)((longlong)ppUVar13 - (ulonglong)*(uint *)ppUVar13);
    LOCK();
    iVar1 = *piVar14;
    *piVar14 = *piVar14 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      lVar10 = *(longlong *)(piVar14 + 0x10);
      MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar14,0,0);
      if (lVar10 - (longlong)piVar14 == 0x10000) {
        pFVar9 = FPageAllocator::Get();
        FPageAllocator::Free(pFVar9,piVar14);
      }
      else {
        (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,piVar14);
      }
    }
  }
  return;
}

// InitializeWidgetStatic @ 146a7b700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UWidgetBlueprintGeneratedClass::InitializeWidgetStatic
          (UUserWidget *param_1,UClass *param_2,UWidgetTree *param_3,UClass *param_4,
          TArrayView<UWidgetAnimation_*,int> *param_5,
          TArrayView<FDelegateRuntimeBinding_const_,int> *param_6)

{
  FName *pFVar1;
  UWidgetAnimation **ppUVar2;
  int iVar3;
  int iVar4;
  UWidgetAnimation *pUVar5;
  code *pcVar6;
  UUserWidget *pUVar7;
  FField *pFVar8;
  FName FVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  UClass *pUVar13;
  UWidget *pUVar14;
  longlong lVar15;
  FNameEntryId FVar16;
  longlong *plVar17;
  ForElementType<FSetElementId> FVar18;
  longlong lVar19;
  FName *pFVar20;
  UWidgetAnimation **ppUVar21;
  undefined1 auStackY_218 [32];
  undefined1 local_1e8 [8];
  UUserWidget *local_1e0;
  TObjectPtr<UWidgetTree>_u_0 local_1d8;
  TFieldIterator<FObjectPropertyBase> local_1d0;
  FName local_1b8;
  FWeakObjectPtr local_1b0;
  FName local_1a8;
  TPairInitializer<FName_&&,FObjectPropertyBase_*_&&> local_1a0;
  UWidget *local_190;
  FName local_188;
  undefined8 *local_180;
  TArrayView<UWidgetAnimation_*,int> *local_178;
  UClass *local_170;
  TFieldIterator<FObjectPropertyBase> *local_168;
  FField *local_160;
  TArrayView<FDelegateRuntimeBinding_const_,int> *local_158;
  FName *local_150;
  FField **local_148;
  code *local_140;
  FWeakObjectPtr **local_138;
  FWeakObjectPtr *local_130;
  TSet<TTuple<FName,FObjectPropertyBase_*>,TDefaultMapHashableKeyFuncs<FName,FObjectPropertyBase_*,0>,FDefaultSetAllocator>
  *local_128;
  UUserWidget **local_120;
  TObjectPtr<UWidgetTree>_u_0 *local_118;
  TArrayView<FDelegateRuntimeBinding_const_,int> local_108;
  UWidgetAnimation **local_f8;
  undefined8 uStack_f0;
  TSet<TTuple<FName,FObjectPropertyBase_*>,TDefaultMapHashableKeyFuncs<FName,FObjectPropertyBase_*,0>,FDefaultSetAllocator>
  local_e8;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_178 = param_5;
  local_158 = param_6;
  local_1e0 = param_1;
  local_170 = param_2;
  if ((param_2 == (UClass *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InClass",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\WidgetBlueprintGeneratedClass.cpp"
                          ,0xc4,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar10 = UObjectBaseUtility::IsTemplate
                     ((UObjectBaseUtility *)local_1e0,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar10) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    local_1b0.ObjectIndex = 0;
    local_1b0.ObjectSerialNumber = 0;
    local_1a0.Value = (FObjectPropertyBase **)param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_1b0,(FObjectPtr)&local_1a0.Value);
    local_1e0->_padding_ = (longlong)local_1b0;
    local_1d8 = (TObjectPtr<UWidgetTree>_u_0)(local_1e0->WidgetTree).field0_0x0.DebugPtr;
    if (local_1d8.DebugPtr == (UWidgetTree *)0x0) {
      local_98._0_8_ = (FScriptContainerElement *)0x0;
      local_98._8_8_ = 0;
      local_78 = (void *)0x0;
      local_70 = 0;
      local_6c = 0x80;
      local_68 = 0xffffffff;
      local_64 = 0;
      local_58 = (void *)0x0;
      local_50 = 0;
      lVar15 = local_1e0->_padding_;
      if (lVar15 != 0) {
        pUVar13 = StaticClass();
        iVar3 = (int)pUVar13->_padding_;
        if ((iVar3 <= *(int *)(*(longlong *)(lVar15 + 0x10) + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) + (longlong)iVar3 * 8) ==
            &pUVar13->_padding_)) {
          pFVar20 = *(FName **)(lVar15 + 0x3b0);
          local_180 = (undefined8 *)local_98;
          iVar3 = *(int *)(lVar15 + 0x3b8);
          pFVar1 = pFVar20 + iVar3;
LAB_146a7b8c0:
          if (*(int *)(lVar15 + 0x3b8) != iVar3) {
            local_1e8[0] = 0;
            `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_1e8);
          }
          lVar19 = lVar15;
          param_5 = local_178;
          param_2 = local_170;
          if (pFVar20 != pFVar1) {
            do {
              plVar17 = (longlong *)(*(longlong *)(lVar19 + 0x370) + 0x28);
              pUVar14 = (UWidget *)(**(code **)(*plVar17 + 0x18))(plVar17,*pFVar20);
              if (pUVar14 != (UWidget *)0x0) {
                local_188 = *pFVar20;
                local_190 = pUVar14;
                UE::Core::Private::Function::
                TFunctionRefCaller<`UWidgetBlueprintGeneratedClass::InitializeWidgetStatic'::__l18::<lambda_1>,void,FName,UWidget_*>
                ::Call(&local_180,&local_188,&local_190);
LAB_146a7b94a:
                pFVar20 = pFVar20 + 1;
                goto LAB_146a7b8c0;
              }
              lVar19 = *(longlong *)(lVar19 + 0x40);
              if (lVar19 == 0) goto LAB_146a7b94a;
              pUVar13 = StaticClass();
              iVar4 = (int)pUVar13->_padding_;
              if (*(int *)(*(longlong *)(lVar19 + 0x10) + 0x38) < iVar4) goto LAB_146a7b94a;
            } while ((longlong *)
                     *(undefined1 **)
                      (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x30) + (longlong)iVar4 * 8) ==
                     &pUVar13->_padding_);
            pFVar20 = pFVar20 + 1;
            goto LAB_146a7b8c0;
          }
        }
      }
      UUserWidget::DuplicateAndInitializeFromWidgetTree
                (local_1e0,param_3,
                 (TMap<FName,UWidget_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UWidget_*,0>_>
                  *)local_98);
      local_1d8 = (local_1e0->WidgetTree).field0_0x0;
      local_50 = 0;
      if (local_58 != (void *)0x0) {
        FMemory::Free(local_58);
      }
      bVar10 = local_98._12_4_ != 0;
      local_98._8_8_ = (ulonglong)(uint)local_98._12_4_ << 0x20;
      if (bVar10) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
      }
      local_68 = 0xffffffff;
      local_64 = 0;
      local_70 = 0;
      if (0x80 < local_6c) {
        local_6c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
      }
      if (local_78 != (void *)0x0) {
        FMemory::Free(local_78);
      }
      if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_98._0_8_);
      }
      if (local_1d8.DebugPtr == (UWidgetTree *)0x0) {
        return;
      }
    }
    local_1d0.Struct = (UStruct *)local_1e0->_padding_;
    local_e8.Elements._0_8_ = 0;
    local_e8.Elements._8_8_ = 0;
    local_e8.Elements._32_8_ = 0;
    local_e8.Elements._40_4_ = 0;
    local_e8.Elements._44_4_ = 0x80;
    local_e8.Elements._48_4_ = 0xffffffff;
    local_e8.Elements._52_4_ = 0;
    local_e8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_e8.HashSize = 0;
    if (local_1d0.Struct == (UStruct *)0x0) {
      local_1d0.Field = (FField *)0x0;
    }
    else {
      local_1d0.Field = (local_1d0.Struct)->ChildProperties;
    }
    local_1d0.InterfaceIndex = -1;
    local_1d0.bIncludeSuper = true;
    local_1d0.bIncludeDeprecated = true;
    local_1d0.bIncludeInterface = false;
    TFieldIterator<FObjectPropertyBase>::IterateToNext(&local_1d0);
    pUVar7 = local_1e0;
    pFVar8 = local_1d0.Field;
    while (local_1e0 = pUVar7, pFVar8 != (FField *)0x0) {
      local_1d0.Field = pFVar8;
      bVar10 = IsThisNotNull(pFVar8,"FField::GetFName");
      if (bVar10) {
        local_1b8 = pFVar8->NamePrivate;
        FVar16.Value = local_1b8.ComparisonIndex.Value;
        uVar12 = local_1b8.Number;
      }
      else {
        local_1b8.ComparisonIndex.Value = 0;
        local_1b8.Number = 0;
        FVar16.Value = 0;
        uVar12 = 0;
      }
      FVar9 = local_1b8;
      uVar11 = ::GetTypeHash(FVar16);
      if (local_e8.Elements._8_4_ != local_e8.Elements._52_4_) {
        FVar18 = (ForElementType<FSetElementId>)&local_e8.Hash;
        if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar18 = local_e8.Hash.SecondaryData;
        }
        for (iVar3 = *(int *)((longlong)FVar18 +
                             (ulonglong)(local_e8.HashSize - 1U & uVar11 + uVar12) * 4); iVar3 != -1
            ; iVar3 = *(int *)(local_e8.Elements._0_8_ + 0x10 + (longlong)iVar3 * 0x18)) {
          if (*(FName *)(local_e8.Elements._0_8_ + (longlong)iVar3 * 0x18) == FVar9) {
            local_168 = &local_1d0;
            `UWidgetBlueprintGeneratedClass::InitializeWidgetStatic'::__l23::<lambda_2>::operator()
                      (&local_168);
            break;
          }
        }
      }
      pFVar8 = local_1d0.Field;
      local_160 = local_1d0.Field;
      bVar10 = IsThisNotNull(local_1d0.Field,"FField::GetFName");
      if (bVar10) {
        local_1a8 = pFVar8->NamePrivate;
      }
      else {
        local_1a8.ComparisonIndex.Value = 0;
        local_1a8.Number = 0;
      }
      local_150 = &local_1a8;
      local_148 = &local_160;
      TSet<TTuple<FName,FObjectPropertyBase_*>,TDefaultMapHashableKeyFuncs<FName,FObjectPropertyBase_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_&&,FObjectPropertyBase_*_&&>_>
                (&local_e8,&local_1a0,(bool *)&local_150);
      local_1d0.Field = (local_1d0.Field)->Next;
      TFieldIterator<FObjectPropertyBase>::IterateToNext(&local_1d0);
      pUVar7 = local_1e0;
      pFVar8 = local_1d0.Field;
    }
    ppUVar21 = param_5->DataPtr;
    uStack_f0 = *(undefined8 *)&param_5->ArrayNum;
    ppUVar2 = ppUVar21 + param_5->ArrayNum;
    local_1d0.Field = (FField *)0x0;
    local_f8 = ppUVar21;
    for (; ppUVar21 != ppUVar2; ppUVar21 = ppUVar21 + 1) {
      pUVar5 = *ppUVar21;
      lVar15 = (**(code **)(pUVar5->_padding_ + 0x2f8))(pUVar5);
      if (lVar15 != 0) {
        lVar15 = (**(code **)(pUVar5->_padding_ + 0x2f8))(pUVar5);
        lVar15 = *(longlong *)(lVar15 + 0x18);
        uVar12 = ::GetTypeHash((FNameEntryId)(uint)lVar15);
        if (local_e8.Elements._8_4_ != local_e8.Elements._52_4_) {
          FVar18 = (ForElementType<FSetElementId>)&local_e8.Hash;
          if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar18 = local_e8.Hash.SecondaryData;
          }
          for (iVar3 = *(int *)((longlong)FVar18 +
                               (ulonglong)
                               (local_e8.HashSize - 1U & (int)((ulonglong)lVar15 >> 0x20) + uVar12)
                               * 4); iVar3 != -1;
              iVar3 = *(int *)(local_e8.Elements._0_8_ + 0x10 + (longlong)iVar3 * 0x18)) {
            if (*(longlong *)(local_e8.Elements._0_8_ + (longlong)iVar3 * 0x18) == lVar15) {
              if (((iVar3 != -1) &&
                  (lVar15 = local_e8.Elements._0_8_ + (longlong)iVar3 * 0x18, lVar15 != 0)) &&
                 (plVar17 = (longlong *)(lVar15 + 8), plVar17 != (longlong *)0x0)) {
                if ((*plVar17 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("*PropPtr",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\WidgetBlueprintGeneratedClass.cpp"
                                        ,0x139,L""), bVar10)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                FObjectPropertyBase::SetObjectPropertyValue_InContainer
                          ((FObjectPropertyBase *)*plVar17,pUVar7,(UObject *)pUVar5,0);
              }
              break;
            }
          }
        }
      }
    }
    plVar17 = (longlong *)local_1e0->_padding_;
    if (plVar17 != (longlong *)0x0) {
      (**(code **)(*plVar17 + 0x2b0))(plVar17,local_1e0,local_1d8.DebugPtr);
    }
    local_130 = &local_1b0;
    local_128 = &local_e8;
    local_120 = &local_1e0;
    local_118 = &local_1d8;
    local_138 = &local_130;
    local_140 = UE::Core::Private::Function::
                TFunctionRefCaller<`UWidgetBlueprintGeneratedClass::InitializeWidgetStatic'::__l21::<lambda_3>,void,UWidget_*>
                ::Call;
    UWidgetTree::ForEachWidget
              (local_1d8.DebugPtr,(TFunctionRef<void___cdecl(UWidget_*)> *)&local_140);
    local_108.DataPtr = local_158->DataPtr;
    local_108.ArrayNum = local_158->ArrayNum;
    local_108._12_4_ = *(undefined4 *)&local_158->field_0xc;
    InitializeBindingsStatic
              (local_1e0,&local_108,
               (TMap<FName,FObjectPropertyBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FObjectPropertyBase_*,0>_>
                *)&local_e8);
    UBlueprintGeneratedClass::BindDynamicDelegates(param_2,(UObject *)local_1e0);
    local_e8.HashSize = 0;
    if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_e8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FObjectPropertyBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,FObjectPropertyBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_e8.Elements);
  }
  return;
}

// NeedsLoadForServer @ 146a80ad0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UWidgetBlueprintGeneratedClass::NeedsLoadForServer(UWidgetBlueprintGeneratedClass *this)

{
  UClass *this_00;
  
  this_00 = Z_Construct_UClass_UUserInterfaceSettings_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
    return (bool)(this_00->ClassDefaultObject).field0_0x0.DebugPtr[0xf].field_0x24;
  }
  return (bool)(this_00->ClassDefaultObject).field0_0x0.DebugPtr[0xf].field_0x24;
}

// PostLoad @ 146a8a200

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWidgetBlueprintGeneratedClass::PostLoad(UWidgetBlueprintGeneratedClass *this)

{
  UWidgetTree *this_00;
  
  UBlueprintGeneratedClass::PostLoad((UBlueprintGeneratedClass *)this);
  this_00 = (this->WidgetTree).field0_0x0.DebugPtr;
  if (this_00 != (UWidgetTree *)0x0) {
    UObjectBase::AtomicallyClearFlags
              ((UObjectBase *)this_00,RF_DefaultSubObject|RF_ArchetypeObject|RF_Public);
    UObjectBaseUtility::AddToCluster
              ((UObjectBaseUtility *)(this->WidgetTree).field0_0x0.DebugPtr,
               (UObjectBaseUtility *)this,true);
    return;
  }
  return;
}

// PurgeClass @ 146a8b180

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UWidgetBlueprintGeneratedClass::PurgeClass(UWidgetBlueprintGeneratedClass *this,bool param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UWidgetTree *pUVar4;
  code *pcVar5;
  UObject *pUVar6;
  UPackage *pUVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  UBlueprintGeneratedClass::PurgeClass((UBlueprintGeneratedClass *)this,param_1);
  pUVar4 = (this->WidgetTree).field0_0x0.DebugPtr;
  if (pUVar4 != (UWidgetTree *)0x0) {
    FLinkerLoad::InvalidateExport((UObject *)pUVar4,true);
    pUVar4 = (this->WidgetTree).field0_0x0.DebugPtr;
    pcVar5 = *(code **)(pUVar4->_padding_ + 0x170);
    pUVar7 = GetTransientPackage();
    (*pcVar5)(pUVar4,0,pUVar7,0x34);
    (this->WidgetTree).field0_0x0.DebugPtr = (UWidgetTree *)0x0;
  }
  pFVar8 = (this->Animations).AllocatorInstance.Data;
  iVar3 = (this->Animations).ArrayNum;
  pFVar2 = pFVar8 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->Animations).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<UWidgetAnimation>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar2) break;
    pUVar6 = *(UObject **)pFVar8;
    FLinkerLoad::InvalidateExport(pUVar6,true);
    pcVar5 = *(code **)(*(longlong *)pUVar6 + 0x170);
    pUVar7 = GetTransientPackage();
    (*pcVar5)(pUVar6,0,pUVar7,0x34);
    pFVar8 = pFVar8 + 8;
  }
  piVar1 = &(this->Animations).ArrayMax;
  (this->Animations).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Animations).AllocatorInstance,0,piVar1);
  }
  DestructItems<FDelegateRuntimeBinding,int>
            ((FDelegateRuntimeBinding *)(this->Bindings).AllocatorInstance.Data,
             (this->Bindings).ArrayNum);
  piVar1 = &(this->Bindings).ArrayMax;
  (this->Bindings).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,&(this->Bindings).AllocatorInstance,0,piVar1);
  }
  return;
}

// Serialize @ 146a92160

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UWidgetBlueprintGeneratedClass::Serialize(UWidgetBlueprintGeneratedClass *this,FArchive *param_1)

{
  int iVar1;
  
  UBlueprintGeneratedClass::Serialize((UBlueprintGeneratedClass *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FEditorObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  if ((param_1->field_0x28 & 1) != 0) {
    iVar1 = FArchiveState::CustomVer
                      ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID);
    if (iVar1 < 0x46) {
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                (&this->AvailableNamedSlots,&this->NamedSlots);
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                (&this->InstanceNamedSlots,&this->NamedSlots);
    }
  }
  return;
}

// Serialize @ 146a921f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UWidgetBlueprintGeneratedClass::Serialize
          (UWidgetBlueprintGeneratedClass *this,FStructuredArchiveRecord param_1)

{
  int iVar1;
  FArchiveState *this_00;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UBlueprintGeneratedClass::Serialize((UBlueprintGeneratedClass *)this,(FArchive *)this_00);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FEditorObjectVersion::GUID);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FFortniteMainBranchObjectVersion::GUID);
  if (this_00->ArIsLoading != 0) {
    iVar1 = FArchiveState::CustomVer(this_00,&FFortniteMainBranchObjectVersion::GUID);
    if (iVar1 < 0x46) {
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                (&this->AvailableNamedSlots,&this->NamedSlots);
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                (&this->InstanceNamedSlots,&this->NamedSlots);
    }
  }
  return;
}

// SetWidgetTreeArchetype @ 146a955d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UWidgetBlueprintGeneratedClass::SetWidgetTreeArchetype
          (UWidgetBlueprintGeneratedClass *this,UWidgetTree *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UWidgetTree *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->WidgetTree).field0_0x0.DebugPtr = param_1;
  }
  else {
    (this->WidgetTree).field0_0x0.DebugPtr = param_1;
    if (param_1 == (UWidgetTree *)0x0) {
      return;
    }
  }
  UObjectBase::AtomicallyClearFlags
            ((UObjectBase *)param_1,RF_DefaultSubObject|RF_Transient|RF_ArchetypeObject|RF_Public);
  return;
}

// StaticRegisterNativesUWidgetBlueprintGeneratedClass @ 146a968c0

void __cdecl
UWidgetBlueprintGeneratedClass::StaticRegisterNativesUWidgetBlueprintGeneratedClass(void)

{
  return;
}

// operator() @ 1504f7a20

bool __thiscall
`UWidgetBlueprintGeneratedClass::InitializeWidgetStatic'::__l23::<lambda_2>::operator()(void *this)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  FString local_18;
  
  bVar5 = false;
  bVar3 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3187170246813286158>);
  if (bVar3) {
    pvVar1 = *(void **)(*(longlong *)this + 8);
    bVar3 = IsThisNotNull(pvVar1,"FField::GetName");
    if (bVar3) {
      ::FName::ToString((FName *)((longlong)pvVar1 + 0x20),&local_18);
    }
    else {
      ::FString::FString(&local_18,L"None");
    }
    bVar5 = true;
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3187170246813286158>,&::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_1504f7ab6;
    }
  }
  bVar3 = false;
LAB_1504f7ab6:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return false;
}

