// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 13

// StaticClass @ 1469454d0

UClass * __cdecl UContentWidget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UContentWidget.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"ContentWidget",
               &Z_Registration_Info_UClass_UContentWidget.InnerSingleton,
               StaticRegisterNativesUContentWidget,0x1c8,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UContentWidget>,
               InternalVTableHelperCtorCaller<UContentWidget>,aFStackX_8,UPanelWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UContentWidget.InnerSingleton;
}

// UContentWidget @ 1469897d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UContentWidget * __thiscall
UContentWidget::UContentWidget(UContentWidget *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  *(undefined8 *)&this->field_0x1b0 = 0;
  *(undefined8 *)&this->field_0x1b8 = 0;
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  return this;
}

// UContentWidget @ 146989820

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UContentWidget * __thiscall
UContentWidget::UContentWidget(UContentWidget *this,FObjectInitializer *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->field_0x1c0 = 0;
  *(undefined8 *)&this->field_0x1b0 = 0;
  *(undefined8 *)&this->field_0x1b8 = 0;
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  return this;
}

// ~UContentWidget @ 146992ac0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UContentWidget::~UContentWidget(UContentWidget *this)

{
  *(undefined ***)this = &UPanelWidget::_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &UPanelWidget::_vftable__for__INotifyFieldValueChanged__;
  if (*(void **)&this->field_0x1b0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x1b0);
  }
  UWidget::~UWidget((UWidget *)this);
  return;
}

// GetContent @ 1469ce940

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWidget * __thiscall UContentWidget::GetContent(UContentWidget *this)

{
  UObject *pUVar1;
  
  if ((0 < *(int *)&this->field_0x1b8) &&
     (pUVar1 = (UObject *)**(undefined8 **)&this->field_0x1b0, pUVar1 != (UObject *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    return *(UWidget **)&pUVar1[1].field_0x8;
  }
  return (UWidget *)0x0;
}

// GetContentSlot @ 1469cea10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UPanelSlot * __thiscall UContentWidget::GetContentSlot(UContentWidget *this)

{
  UPanelSlot *pUVar1;
  
  if (0 < *(int *)&this->field_0x1b8) {
    pUVar1 = (UPanelSlot *)**(undefined8 **)&this->field_0x1b0;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UPanelSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    return pUVar1;
  }
  return (UPanelSlot *)0x0;
}

// GetPrivateStaticClass @ 1469d3c70

UClass * __cdecl UContentWidget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UContentWidget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"ContentWidget",
               &Z_Registration_Info_UClass_UContentWidget.InnerSingleton,
               StaticRegisterNativesUContentWidget,0x1c8,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UContentWidget>,
               InternalVTableHelperCtorCaller<UContentWidget>,local_res8,UPanelWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UContentWidget.InnerSingleton;
}

// GetSlotClass @ 1469d8710

UClass * __thiscall UContentWidget::GetSlotClass(UContentWidget *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UPanelSlot.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"PanelSlot",&Z_Registration_Info_UClass_UPanelSlot.InnerSingleton,
               UPanelSlot::StaticRegisterNativesUPanelSlot,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPanelSlot>,InternalVTableHelperCtorCaller<UPanelSlot>,
               aFStackX_8,UVisual::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPanelSlot.InnerSingleton;
}

// SetContent @ 146a12930

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UPanelSlot * __thiscall UContentWidget::SetContent(UContentWidget *this,UWidget *param_1)

{
  UPanelSlot *pUVar1;
  
  (**(code **)(*(longlong *)this + 0x310))();
  pUVar1 = UPanelWidget::AddChild((UPanelWidget *)this,param_1,(UPanelSlot *)0x0);
  return pUVar1;
}

// StaticRegisterNativesUContentWidget @ 146a1e6e0

void __cdecl UContentWidget::StaticRegisterNativesUContentWidget(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UContentWidget_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetContent @ 146a34920

void __cdecl UContentWidget::execGetContent(UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((0 < *(int *)(param_1 + 0xb)) &&
     (pUVar1 = (UObject *)**(undefined8 **)&param_1[10].field_0x20, pUVar1 != (UObject *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    *(undefined8 *)param_3 = *(undefined8 *)&pUVar1[1].field_0x8;
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetContentSlot @ 146a349d0

void __cdecl UContentWidget::execGetContentSlot(UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (0 < *(int *)(param_1 + 0xb)) {
    pUVar1 = (UObject *)**(undefined8 **)&param_1[10].field_0x20;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    *(UObject **)param_3 = pUVar1;
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execSetContent @ 146a3b510

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UContentWidget::execSetContent(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  EObjectFlags EVar2;
  FProperty *pFVar3;
  code *pcVar4;
  TObjectPtr<UWidget>_u_0 TVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  UPanelSlot *pUVar9;
  TObjectPtr<UWidget>_u_0 local_res8;
  undefined8 local_res10;
  UPanelSlot *local_28 [2];
  
  local_res8.DebugPtr = (UWidget *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  TVar5 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x310))(param_1);
  if ((TVar5.DebugPtr == (UWidget *)0x0) ||
     ((param_1[0xb].field_0x8 == '\0' && (0 < *(int *)(param_1 + 0xb))))) {
    *(undefined8 *)param_3 = 0;
  }
  else {
    (**(code **)((TVar5.DebugPtr)->_padding_ + 0x2d0))(TVar5.DebugPtr);
    EVar2 = *(EObjectFlags *)&param_1->field_0x8;
    local_res10 = 0;
    pUVar8 = (UClass *)(**(code **)(*(longlong *)param_1 + 0x318))(param_1);
    pUVar9 = NewObject<UPanelSlot>
                       (param_1,pUVar8,(FName)0x0,EVar2 & RF_Transient | RF_Transactional,
                        (UObject *)0x0,false,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
    }
    (pUVar9->Content).field0_0x0.DebugPtr = (UWidget *)TVar5;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_1);
    }
    (pUVar9->Parent).field0_0x0.DebugPtr = (UPanelWidget *)param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UPanelSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (((TObjectPtr<UPanelSlot> *)((longlong)TVar5 + 0x30))->field0_0x0).DebugPtr = pUVar9;
    puVar1 = &param_1[10].field_0x20;
    local_28[0] = pUVar9;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UPanelSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    if ((*(UPanelSlot ***)puVar1 <= local_28) &&
       (local_28 < *(UPanelSlot ***)puVar1 + *(int *)&param_1[0xb].field_0x4)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar7 = *(int *)(param_1 + 0xb);
    if (iVar7 == *(int *)&param_1[0xb].field_0x4) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)puVar1,(int *)&param_1[0xb].field_0x4);
    }
    *(int *)(param_1 + 0xb) = iVar7 + 1;
    *(UPanelSlot **)(*(longlong *)puVar1 + (longlong)iVar7 * 8) = local_28[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28[0] != (UPanelSlot *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)local_28[0]);
    }
    (**(code **)(*(longlong *)param_1 + 800))(param_1,pUVar9);
    UWidget::InvalidateLayoutAndVolatility((UWidget *)param_1);
    *(UPanelSlot **)param_3 = pUVar9;
  }
  return;
}

