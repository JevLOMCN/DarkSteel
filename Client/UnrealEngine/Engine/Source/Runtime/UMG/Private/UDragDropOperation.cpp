// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 16

// StaticClass @ 146a451a0

UClass * __cdecl UDragDropOperation::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDragDropOperation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"DragDropOperation",
               &Z_Registration_Info_UClass_UDragDropOperation.InnerSingleton,
               StaticRegisterNativesUDragDropOperation,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDragDropOperation>,
               InternalVTableHelperCtorCaller<UDragDropOperation>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDragDropOperation.InnerSingleton;
}

// UDragDropOperation @ 146a56310

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDragDropOperation * __thiscall
UDragDropOperation::UDragDropOperation(UDragDropOperation *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDragDropOperation__6B_;
  (this->Tag).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tag).Data.ArrayNum = 0;
  (this->Tag).Data.ArrayMax = 0;
  (this->Payload).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->DefaultDragVisual).field0_0x0.DebugPtr = (UWidget *)0x0;
  *(undefined8 *)&this->OnDrop = 0;
  *(undefined8 *)&(this->OnDrop).field_0x8 = 0;
  *(undefined8 *)&(this->OnDrop).field_0x10 = 0;
  *(undefined8 *)&this->OnDragCancelled = 0;
  *(undefined8 *)&(this->OnDragCancelled).field_0x8 = 0;
  *(undefined8 *)&(this->OnDragCancelled).field_0x10 = 0;
  *(undefined8 *)&this->OnDragged = 0;
  *(undefined8 *)&(this->OnDragged).field_0x8 = 0;
  *(undefined8 *)&(this->OnDragged).field_0x10 = 0;
  return this;
}

// UDragDropOperation @ 146a56380

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDragDropOperation * __thiscall
UDragDropOperation::UDragDropOperation(UDragDropOperation *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->Pivot = CenterCenter;
  this->_padding_ = (longlong)&___7UDragDropOperation__6B_;
  (this->Tag).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tag).Data.ArrayNum = 0;
  (this->Tag).Data.ArrayMax = 0;
  (this->Payload).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->DefaultDragVisual).field0_0x0.DebugPtr = (UWidget *)0x0;
  *(undefined8 *)&this->OnDrop = 0;
  *(undefined8 *)&(this->OnDrop).field_0x8 = 0;
  *(undefined8 *)&(this->OnDrop).field_0x10 = 0;
  *(undefined8 *)&this->OnDragCancelled = 0;
  *(undefined8 *)&(this->OnDragCancelled).field_0x8 = 0;
  *(undefined8 *)&(this->OnDragCancelled).field_0x10 = 0;
  *(undefined8 *)&this->OnDragged = 0;
  *(undefined8 *)&(this->OnDragged).field_0x8 = 0;
  *(undefined8 *)&(this->OnDragged).field_0x10 = 0;
  return this;
}

// ~UDragDropOperation @ 146a585b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDragDropOperation::~UDragDropOperation(UDragDropOperation *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UDragDropOperation__6B_;
  pvVar1 = *(void **)&(this->OnDragged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDragged);
  pvVar1 = *(void **)&(this->OnDragCancelled).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDragCancelled);
  pvVar1 = *(void **)&(this->OnDrop).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDrop);
  pFVar2 = (this->Tag).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// ConvertSlateDropZoneToUMG @ 146a62b30

EUMGItemDropZone __cdecl
UDragDropOperation::ConvertSlateDropZoneToUMG(TOptional<EItemDropZone> param_1)

{
  int iVar1;
  
  if (*(char *)((longlong)param_1 + 4) != '\0') {
    iVar1 = *(int *)param_1;
    if (iVar1 == 0) {
      return AboveItem;
    }
    if (iVar1 == 1) {
      return OntoItem;
    }
    if (iVar1 == 2) {
      return BelowItem;
    }
  }
  return None;
}

// DragCancelled @ 146a6b710

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDragDropOperation::DragCancelled(UDragDropOperation *this,FPointerEvent *param_1)

{
  UFunction *this_00;
  UClass *pUVar1;
  FPointerEvent local_88;
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UDragDropOperation_DragCancelled);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    FPointerEvent::FPointerEvent(&local_88);
    FPointerEvent::operator=(&local_88,param_1);
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_88);
    FPointerEvent::~FPointerEvent(&local_88);
  }
  else {
    (**(code **)(this->_padding_ + 0x2b8))(this,param_1);
  }
  return;
}

// DragCancelled_Implementation @ 146a6b7b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDragDropOperation::DragCancelled_Implementation(UDragDropOperation *this,FPointerEvent *param_1)

{
  UDragDropOperation *local_res8 [4];
  
  local_res8[0] = this;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnDragCancelled,
             local_res8);
  return;
}

// Dragged @ 146a6b7e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDragDropOperation::Dragged(UDragDropOperation *this,FPointerEvent *param_1)

{
  UFunction *this_00;
  UClass *pUVar1;
  FPointerEvent local_88;
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UDragDropOperation_Dragged);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    FPointerEvent::FPointerEvent(&local_88);
    FPointerEvent::operator=(&local_88,param_1);
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_88);
    FPointerEvent::~FPointerEvent(&local_88);
  }
  else {
    (**(code **)(this->_padding_ + 0x2b0))(this,param_1);
  }
  return;
}

// Dragged_Implementation @ 146a6b880

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDragDropOperation::Dragged_Implementation(UDragDropOperation *this,FPointerEvent *param_1)

{
  UDragDropOperation *local_res8 [4];
  
  local_res8[0] = this;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnDragged,local_res8);
  return;
}

// Drop @ 146a6f3d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDragDropOperation::Drop(UDragDropOperation *this,FPointerEvent *param_1)

{
  UFunction *this_00;
  UClass *pUVar1;
  FPointerEvent local_88;
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UDragDropOperation_Drop);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    FPointerEvent::FPointerEvent(&local_88);
    FPointerEvent::operator=(&local_88,param_1);
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_88);
    FPointerEvent::~FPointerEvent(&local_88);
  }
  else {
    (**(code **)(this->_padding_ + 0x2c0))(this,param_1);
  }
  return;
}

// Drop_Implementation @ 146a6f470

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDragDropOperation::Drop_Implementation(UDragDropOperation *this,FPointerEvent *param_1)

{
  UDragDropOperation *local_res8 [4];
  
  local_res8[0] = this;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnDrop,local_res8);
  return;
}

// GetPrivateStaticClass @ 146a77ad0

UClass * __cdecl UDragDropOperation::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDragDropOperation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"DragDropOperation",
               &Z_Registration_Info_UClass_UDragDropOperation.InnerSingleton,
               StaticRegisterNativesUDragDropOperation,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDragDropOperation>,
               InternalVTableHelperCtorCaller<UDragDropOperation>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDragDropOperation.InnerSingleton;
}

// StaticRegisterNativesUDragDropOperation @ 146a96760

void __cdecl UDragDropOperation::StaticRegisterNativesUDragDropOperation(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UDragDropOperation_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execDragCancelled @ 146a9f1b0

void __cdecl UDragDropOperation::execDragCancelled(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FPointerEvent *pFVar2;
  FPointerEvent local_88;
  
  FPointerEvent::FPointerEvent(&local_88);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pFVar2 = &local_88;
  if ((FPointerEvent *)param_2->MostRecentPropertyAddress != (FPointerEvent *)0x0) {
    pFVar2 = (FPointerEvent *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2b8))(param_1,pFVar2);
  FPointerEvent::~FPointerEvent(&local_88);
  return;
}

// execDragged @ 146a9f270

void __cdecl UDragDropOperation::execDragged(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FPointerEvent *pFVar2;
  FPointerEvent local_88;
  
  FPointerEvent::FPointerEvent(&local_88);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pFVar2 = &local_88;
  if ((FPointerEvent *)param_2->MostRecentPropertyAddress != (FPointerEvent *)0x0) {
    pFVar2 = (FPointerEvent *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,pFVar2);
  FPointerEvent::~FPointerEvent(&local_88);
  return;
}

// execDrop @ 146aa0220

void __cdecl UDragDropOperation::execDrop(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FPointerEvent *pFVar2;
  FPointerEvent local_88;
  
  FPointerEvent::FPointerEvent(&local_88);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pFVar2 = &local_88;
  if ((FPointerEvent *)param_2->MostRecentPropertyAddress != (FPointerEvent *)0x0) {
    pFVar2 = (FPointerEvent *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2c0))(param_1,pFVar2);
  FPointerEvent::~FPointerEvent(&local_88);
  return;
}

