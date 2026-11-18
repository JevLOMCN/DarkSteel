// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 10

// StaticClass @ 146945500

UClass * __cdecl UPanelSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UPanelSlot.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"PanelSlot",&Z_Registration_Info_UClass_UPanelSlot.InnerSingleton,
               StaticRegisterNativesUPanelSlot,0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPanelSlot>,InternalVTableHelperCtorCaller<UPanelSlot>,aFStackX_8
               ,UVisual::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPanelSlot.InnerSingleton;
}

// UPanelSlot @ 14698c510

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UPanelSlot * __thiscall UPanelSlot::UPanelSlot(UPanelSlot *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPanelSlot__6B_;
  (this->Parent).field0_0x0.DebugPtr = (UPanelWidget *)0x0;
  (this->Content).field0_0x0.DebugPtr = (UWidget *)0x0;
  return this;
}

// UPanelSlot @ 14698c550

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UPanelSlot * __thiscall UPanelSlot::UPanelSlot(UPanelSlot *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPanelSlot__6B_;
  (this->Parent).field0_0x0.DebugPtr = (UPanelWidget *)0x0;
  (this->Content).field0_0x0.DebugPtr = (UWidget *)0x0;
  return this;
}

// ~UPanelSlot @ 146993b90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UPanelSlot::~UPanelSlot(UPanelSlot *this)

{
  this->_padding_ = (longlong)&___7UVisual__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetContent @ 1469ce990

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWidget * __thiscall UPanelSlot::GetContent(UPanelSlot *this)

{
  return (this->Content).field0_0x0.DebugPtr;
}

// GetPrivateStaticClass @ 1469d4e70

UClass * __cdecl UPanelSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPanelSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"PanelSlot",&Z_Registration_Info_UClass_UPanelSlot.InnerSingleton,
               StaticRegisterNativesUPanelSlot,0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPanelSlot>,InternalVTableHelperCtorCaller<UPanelSlot>,local_res8
               ,UVisual::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPanelSlot.InnerSingleton;
}

// ReleaseSlateResources @ 146a0ac10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UPanelSlot::ReleaseSlateResources(UPanelSlot *this,bool param_1)

{
  int iVar1;
  UWidget *pUVar2;
  longlong lVar3;
  UClass *pUVar4;
  
  pUVar2 = (this->Content).field0_0x0.DebugPtr;
  if (pUVar2 != (UWidget *)0x0) {
    pUVar4 = Z_Construct_UClass_UUserWidget_NoRegister();
    lVar3 = pUVar2->_padding_;
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      pUVar2 = (this->Content).field0_0x0.DebugPtr;
      (**(code **)(pUVar2->_padding_ + 0x2b0))(pUVar2,param_1);
    }
  }
  return;
}

// StaticRegisterNativesUPanelSlot @ 146a1ec20

void __cdecl UPanelSlot::StaticRegisterNativesUPanelSlot(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UPanelSlot_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 146a238b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UPanelSlot::SynchronizeProperties(UPanelSlot *this)

{
  return;
}

// execGetContent @ 146a349a0

void __cdecl UPanelSlot::execGetContent(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[1].field_0x8;
  return;
}

