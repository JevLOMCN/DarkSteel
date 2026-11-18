// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 20

// StaticClass @ 1497226c0

UClass * __cdecl UPCGBlueprintPointProcessorElement::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGBlueprintPointProcessorElement.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGBlueprintPointProcessorElement",
               &Z_Registration_Info_UClass_UPCGBlueprintPointProcessorElement.InnerSingleton,
               StaticRegisterNativesUPCGBlueprintPointProcessorElement,0x68,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGBlueprintPointProcessorElement>,
               InternalVTableHelperCtorCaller<UPCGBlueprintPointProcessorElement>,local_res8,
               UPCGBlueprintBaseElement::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGBlueprintPointProcessorElement.InnerSingleton;
}

// UPCGBlueprintPointProcessorElement @ 1497254e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGBlueprintPointProcessorElement * __thiscall
UPCGBlueprintPointProcessorElement::UPCGBlueprintPointProcessorElement
          (UPCGBlueprintPointProcessorElement *this,FVTableHelper *param_1)

{
  UPCGBlueprintBaseElement::UPCGBlueprintBaseElement((UPCGBlueprintBaseElement *)this,param_1);
  *(undefined ***)this = &___7UPCGBlueprintPointProcessorElement__6B_;
  return this;
}

// UPCGBlueprintPointProcessorElement @ 149725510

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGBlueprintPointProcessorElement * __thiscall
UPCGBlueprintPointProcessorElement::UPCGBlueprintPointProcessorElement
          (UPCGBlueprintPointProcessorElement *this,FObjectInitializer *param_1)

{
  UPCGBlueprintBaseElement::UPCGBlueprintBaseElement((UPCGBlueprintBaseElement *)this,param_1);
  *(undefined ***)this = &___7UPCGBlueprintPointProcessorElement__6B_;
  return this;
}

// ~UPCGBlueprintPointProcessorElement @ 149725dc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UPCGBlueprintPointProcessorElement::~UPCGBlueprintPointProcessorElement
          (UPCGBlueprintPointProcessorElement *this)

{
  *(undefined ***)this = &___7UPCGBlueprintPointProcessorElement__6B_;
  UPCGBlueprintBaseElement::~UPCGBlueprintBaseElement((UPCGBlueprintBaseElement *)this);
  return;
}

// GetPrivateStaticClass @ 149726fe0

UClass * __cdecl UPCGBlueprintPointProcessorElement::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGBlueprintPointProcessorElement.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGBlueprintPointProcessorElement",
               &Z_Registration_Info_UClass_UPCGBlueprintPointProcessorElement.InnerSingleton,
               StaticRegisterNativesUPCGBlueprintPointProcessorElement,0x68,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGBlueprintPointProcessorElement>,
               InternalVTableHelperCtorCaller<UPCGBlueprintPointProcessorElement>,local_res8,
               UPCGBlueprintBaseElement::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGBlueprintPointProcessorElement.InnerSingleton;
}

// IterationLoopBody @ 149727ad0

int __thiscall
UPCGBlueprintPointProcessorElement::IterationLoopBody
          (UPCGBlueprintPointProcessorElement *this,int param_1,FPCGPointInputRange *param_2,
          FPCGPointInputRange *param_3,FPCGPointOutputRange *param_4)

{
  UPCGBasePointData *pUVar1;
  UFunction *pUVar2;
  int local_48 [2];
  TObjectPtr<UPCGBasePointData_const_>_u_0 local_40;
  int local_38;
  int local_34;
  TObjectPtr<UPCGBasePointData_const_>_u_0 local_30;
  int local_28;
  int local_24;
  UPCGBasePointData *local_20;
  int local_18;
  int local_14;
  int local_10;
  
  local_10 = 0;
  local_48[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = (param_2->PointData).field0_0x0.DebugPtr, pUVar1 != (UPCGBasePointData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  local_40 = (param_2->PointData).field0_0x0;
  local_38 = param_2->RangeStartIndex;
  local_34 = param_2->RangeSize;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_3->PointData).field0_0x0.DebugPtr, pUVar1 != (UPCGBasePointData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  local_30 = (param_3->PointData).field0_0x0;
  local_28 = param_3->RangeStartIndex;
  local_24 = param_3->RangeSize;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_4->PointData).field0_0x0.DebugPtr, pUVar1 != (UPCGBasePointData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  local_20 = (param_4->PointData).field0_0x0.DebugPtr;
  local_18 = param_4->RangeStartIndex;
  local_14 = param_4->RangeSize;
  pUVar2 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UPCGBlueprintPointProcessorElement_IterationLoopBody);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar2,local_48);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_20 != (UPCGBasePointData *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_20);
  }
  (param_4->PointData).field0_0x0.DebugPtr = local_20;
  param_4->RangeStartIndex = local_18;
  param_4->RangeSize = local_14;
  return local_10;
}

// IterationLoopInitialize @ 149727c00

void __thiscall
UPCGBlueprintPointProcessorElement::IterationLoopInitialize
          (UPCGBlueprintPointProcessorElement *this,int param_1,UPCGBasePointData *param_2,
          UPCGBasePointData *param_3,UPCGBasePointData *param_4)

{
  UFunction *this_00;
  UClass *pUVar1;
  int local_28 [2];
  UPCGBasePointData *local_20;
  UPCGBasePointData *local_18;
  UPCGBasePointData *local_10;
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,
                       NAME_UPCGBlueprintPointProcessorElement_IterationLoopInitialize);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_10 = param_4;
    local_28[0] = param_1;
    local_20 = param_2;
    local_18 = param_3;
    (**(code **)(*(longlong *)this + 0x260))(this,this_00,local_28);
  }
  else {
    (**(code **)(*(longlong *)this + 0x2e0))(this,param_1,param_2,param_3,param_4);
  }
  return;
}

// PointLoopBody @ 149727d10

int __thiscall
UPCGBlueprintPointProcessorElement::PointLoopBody
          (UPCGBlueprintPointProcessorElement *this,FPCGPointInputRange *param_1,
          FPCGPointOutputRange *param_2)

{
  UPCGBasePointData *pUVar1;
  UFunction *pUVar2;
  TObjectPtr<UPCGBasePointData_const_>_u_0 local_38;
  int local_30;
  int local_2c;
  UPCGBasePointData *local_28;
  int local_20;
  int local_1c;
  int local_18;
  
  local_18 = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = (param_1->PointData).field0_0x0.DebugPtr, pUVar1 != (UPCGBasePointData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  local_38 = (param_1->PointData).field0_0x0;
  local_30 = param_1->RangeStartIndex;
  local_2c = param_1->RangeSize;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_2->PointData).field0_0x0.DebugPtr, pUVar1 != (UPCGBasePointData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  local_28 = (param_2->PointData).field0_0x0.DebugPtr;
  local_20 = param_2->RangeStartIndex;
  local_1c = param_2->RangeSize;
  pUVar2 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UPCGBlueprintPointProcessorElement_PointLoopBody);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar2,&local_38);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28 != (UPCGBasePointData *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_28);
  }
  (param_2->PointData).field0_0x0.DebugPtr = local_28;
  param_2->RangeStartIndex = local_20;
  param_2->RangeSize = local_1c;
  return local_18;
}

// PointLoopInitialize @ 149727e00

void __thiscall
UPCGBlueprintPointProcessorElement::PointLoopInitialize
          (UPCGBlueprintPointProcessorElement *this,UPCGBasePointData *param_1,
          UPCGBasePointData *param_2)

{
  UFunction *this_00;
  UClass *pUVar1;
  UPCGBasePointData *local_18;
  UPCGBasePointData *local_10;
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UPCGBlueprintPointProcessorElement_PointLoopInitialize);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_18 = param_1;
    local_10 = param_2;
    (**(code **)(*(longlong *)this + 0x260))(this,this_00,&local_18);
  }
  else {
    (**(code **)(*(longlong *)this + 0x2e8))(this,param_1,param_2);
  }
  return;
}

// StaticRegisterNativesUPCGBlueprintPointProcessorElement @ 149727f80

void __cdecl
UPCGBlueprintPointProcessorElement::StaticRegisterNativesUPCGBlueprintPointProcessorElement(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UPCGBlueprintPointProcessorElement_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execIterationLoop @ 1497291e0

void __cdecl
UPCGBlueprintPointProcessorElement::execIterationLoop
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UPCGBasePointData **ppUVar2;
  int local_res10 [4];
  UPCGBasePointData *local_res20;
  UPCGBasePointData *local_28;
  UPCGBasePointData *local_20;
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_20 = (UPCGBasePointData *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_20);
  }
  local_28 = (UPCGBasePointData *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res20 = (UPCGBasePointData *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  ppUVar2 = &local_res20;
  if ((UPCGBasePointData **)param_2->MostRecentPropertyAddress != (UPCGBasePointData **)0x0) {
    ppUVar2 = (UPCGBasePointData **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  IterationLoop((UPCGBlueprintPointProcessorElement *)param_1,local_res10[0],local_20,local_28,
                ppUVar2);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (*ppUVar2 != (UPCGBasePointData *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)*ppUVar2);
  }
  return;
}

// execIterationLoopInitialize @ 149729360

void __cdecl
UPCGBlueprintPointProcessorElement::execIterationLoopInitialize
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  undefined8 local_res10 [2];
  undefined8 local_res20;
  undefined8 local_28 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_28[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2e0))
            (param_1,local_res8[0],local_28[0],local_res20,local_res10[0]);
  return;
}

// execPointLoop @ 1497294c0

void __cdecl
UPCGBlueprintPointProcessorElement::execPointLoop(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UPCGBasePointData **ppUVar2;
  UPCGBasePointData *local_res10 [2];
  UPCGBasePointData *local_res20;
  
  local_res20 = (UPCGBasePointData *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = (UPCGBasePointData *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  ppUVar2 = local_res10;
  if ((UPCGBasePointData **)param_2->MostRecentPropertyAddress != (UPCGBasePointData **)0x0) {
    ppUVar2 = (UPCGBasePointData **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  PointLoop((UPCGBlueprintPointProcessorElement *)param_1,local_res20,ppUVar2);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (*ppUVar2 != (UPCGBasePointData *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)*ppUVar2);
  }
  return;
}

// execPointLoopInitialize @ 1497295b0

void __cdecl
UPCGBlueprintPointProcessorElement::execPointLoopInitialize
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  undefined8 local_res10;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2e8))(param_1,local_res10,local_res8);
  return;
}

// operator() @ 1499c8710

int __thiscall
`UPCGBlueprintPointProcessorElement::IterationLoop'::__l2::<lambda_1>::operator()
          (void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  TObjectPtr<UPCGBasePointData_const_>_u_0 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  TObjectPtr<UPCGBasePointData_const_>_u_0 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  TObjectPtr<UPCGBasePointData>_u_0 local_18;
  int local_10;
  int local_c;
  
  local_28 = (TObjectPtr<UPCGBasePointData_const_>_u_0)
             ((TObjectPtr<UPCGBasePointData_const_>_u_0 *)((longlong)this + 8))->DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_28.DebugPtr != (UPCGBasePointData *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_28.DebugPtr);
  }
  local_20 = 0;
  if (*(longlong **)((longlong)this + 8) == (longlong *)0x0) {
    local_1c = 0;
  }
  else {
    local_1c = (**(code **)(**(longlong **)((longlong)this + 8) + 0x488))();
  }
  local_38 = (TObjectPtr<UPCGBasePointData_const_>_u_0)
             ((TObjectPtr<UPCGBasePointData_const_>_u_0 *)((longlong)this + 0x10))->DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_38.DebugPtr != (UPCGBasePointData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_38.DebugPtr);
  }
  local_30 = 0;
  if (*(longlong **)((longlong)this + 0x10) == (longlong *)0x0) {
    local_2c = 0;
  }
  else {
    local_2c = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x488))();
  }
  local_18 = (TObjectPtr<UPCGBasePointData>_u_0)
             ((TObjectPtr<UPCGBasePointData>_u_0 *)((longlong)this + 0x18))->DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_18.DebugPtr != (UPCGBasePointData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18.DebugPtr);
  }
  local_10 = param_2;
  local_c = param_3;
  iVar1 = UPCGBlueprintPointProcessorElement::IterationLoopBody
                    (*(UPCGBlueprintPointProcessorElement **)this,param_1,
                     (FPCGPointInputRange *)&local_28.ObjectPtr,
                     (FPCGPointInputRange *)&local_38.ObjectPtr,
                     (FPCGPointOutputRange *)&local_18.ObjectPtr);
  return iVar1;
}

// operator() @ 1499c8820

int __thiscall
`UPCGBlueprintPointProcessorElement::PointLoop'::__l2::<lambda_1>::operator()
          (void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  TObjectPtr<UPCGBasePointData>_u_0 local_28;
  int local_20;
  int local_1c;
  TObjectPtr<UPCGBasePointData_const_>_u_0 local_18;
  int local_10;
  int local_c;
  
  local_18 = (TObjectPtr<UPCGBasePointData_const_>_u_0)
             ((TObjectPtr<UPCGBasePointData_const_>_u_0 *)((longlong)this + 8))->DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_18.DebugPtr != (UPCGBasePointData *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_18.DebugPtr);
  }
  local_28 = (TObjectPtr<UPCGBasePointData>_u_0)
             ((TObjectPtr<UPCGBasePointData>_u_0 *)((longlong)this + 0x10))->DebugPtr;
  local_10 = param_1;
  local_c = param_3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_28.DebugPtr != (UPCGBasePointData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_28.DebugPtr);
  }
  local_20 = param_2;
  local_1c = param_3;
  iVar1 = UPCGBlueprintPointProcessorElement::PointLoopBody
                    (*(UPCGBlueprintPointProcessorElement **)this,
                     (FPCGPointInputRange *)&local_18.ObjectPtr,
                     (FPCGPointOutputRange *)&local_28.ObjectPtr);
  return iVar1;
}

// IterationLoop @ 149a015f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UPCGBlueprintPointProcessorElement::IterationLoop
          (UPCGBlueprintPointProcessorElement *this,int param_1,UPCGBasePointData *param_2,
          UPCGBasePointData *param_3,UPCGBasePointData **param_4)

{
  undefined1 uVar1;
  longlong lVar2;
  UPCGBasePointData **ppUVar3;
  UPCGBasePointData *pUVar4;
  <lambda_3> local_res8;
  <lambda_2> local_res18;
  <lambda_1> local_38;
  
  pUVar4 = FPCGContext::NewPointData_AnyThread(*(FPCGContext **)&this->field_0x60);
  ppUVar3 = param_4;
  *param_4 = pUVar4;
  IterationLoopInitialize(this,param_1,param_2,param_3,pUVar4);
  local_res8.OutputPointData = *ppUVar3;
  lVar2 = *(longlong *)&this->field_0x60;
  uVar1 = *(undefined1 *)(lVar2 + 0x112);
  *(undefined1 *)(lVar2 + 0x112) = 1;
  local_res18.OutputPointData = local_res8.OutputPointData;
  local_38.__this = this;
  local_38.InputPointDataA = param_2;
  local_38.InputPointDataB = param_3;
  local_38.OutputPointData = local_res8.OutputPointData;
  FPCGAsync::
  AsyncProcessingRangeEx<_UPCGBlueprintPointProcessorElement::IterationLoop_::__l3::<lambda_4>,_UPCGBlueprintPointProcessorElement::IterationLoop_::__l2::<lambda_1>_&,_UPCGBlueprintPointProcessorElement::IterationLoop_::__l2::<lambda_2>_&,_UPCGBlueprintPointProcessorElement::IterationLoop_::__l2::<lambda_3>_&>
            ((FPCGAsyncState *)(*(longlong *)&this->field_0x60 + 0x88),param_1,
             (<lambda_4> *)&param_4,&local_38,&local_res18,&local_res8,false,0x40,true);
  *(undefined1 *)(lVar2 + 0x112) = uVar1;
  return;
}

// IterationLoopInitialize_Implementation @ 149a016e0

void __thiscall
UPCGBlueprintPointProcessorElement::IterationLoopInitialize_Implementation
          (UPCGBlueprintPointProcessorElement *this,int param_1,UPCGBasePointData *param_2,
          UPCGBasePointData *param_3,UPCGBasePointData *param_4)

{
  FPCGInitializeFromDataParams local_48;
  
  if (param_2 != (UPCGBasePointData *)0x0) {
    param_3 = param_2;
  }
  if (param_3 != (UPCGBasePointData *)0x0) {
    FPCGInitializeFromDataParams::FPCGInitializeFromDataParams(&local_48,(UPCGSpatialData *)param_3)
    ;
    local_48.bInheritMetadata = true;
    local_48.bInheritSpatialData = false;
    UPCGSpatialData::InitializeFromDataWithParams((UPCGSpatialData *)param_4,&local_48);
    DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
              ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
               local_48.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data,
               local_48.MetadataInitializeParams.DomainInitializeParams.ArrayNum);
    if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
        local_48.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data !=
        (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
      FMemory::Free(local_48.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data)
      ;
    }
    if (local_48.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000149a01765. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4->_padding_ + 0x490))(param_4,param_1,1);
  return;
}

// PointLoop @ 149a047f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UPCGBlueprintPointProcessorElement::PointLoop
          (UPCGBlueprintPointProcessorElement *this,UPCGBasePointData *param_1,
          UPCGBasePointData **param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  int iVar3;
  UPCGBasePointData *pUVar4;
  <lambda_4> local_res10 [16];
  <lambda_3> local_res20;
  <lambda_2> local_38;
  <lambda_1> local_30;
  
  if (param_1 != (UPCGBasePointData *)0x0) {
    pUVar4 = FPCGContext::NewPointData_AnyThread(*(FPCGContext **)&this->field_0x60);
    *param_2 = pUVar4;
    PointLoopInitialize(this,param_1,pUVar4);
    local_res20.OutputPointData = *param_2;
    lVar2 = *(longlong *)&this->field_0x60;
    uVar1 = *(undefined1 *)(lVar2 + 0x112);
    *(undefined1 *)(lVar2 + 0x112) = 1;
    local_38.OutputPointData = local_res20.OutputPointData;
    local_30.__this = this;
    local_30.InputPointData = param_1;
    local_30.OutputPointData = local_res20.OutputPointData;
    iVar3 = (**(code **)(param_1->_padding_ + 0x488))(param_1);
    FPCGAsync::
    AsyncProcessingRangeEx<_UPCGBlueprintPointProcessorElement::PointLoop_::__l6::<lambda_4>,_UPCGBlueprintPointProcessorElement::PointLoop_::__l2::<lambda_1>_&,_UPCGBlueprintPointProcessorElement::PointLoop_::__l2::<lambda_2>_&,_UPCGBlueprintPointProcessorElement::PointLoop_::__l2::<lambda_3>_&>
              ((FPCGAsyncState *)(*(longlong *)&this->field_0x60 + 0x88),iVar3,local_res10,&local_30
               ,&local_38,&local_res20,false,0x40,true);
    *(undefined1 *)(lVar2 + 0x112) = uVar1;
  }
  return;
}

// PointLoopInitialize_Implementation @ 149a04b20

void __thiscall
UPCGBlueprintPointProcessorElement::PointLoopInitialize_Implementation
          (UPCGBlueprintPointProcessorElement *this,UPCGBasePointData *param_1,
          UPCGBasePointData *param_2)

{
  FPCGInitializeFromDataParams local_48;
  
  FPCGInitializeFromDataParams::FPCGInitializeFromDataParams(&local_48,(UPCGSpatialData *)param_1);
  local_48.bInheritMetadata = true;
  local_48.bInheritSpatialData = true;
  UPCGSpatialData::InitializeFromDataWithParams((UPCGSpatialData *)param_2,&local_48);
  DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
            ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
             local_48.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data,
             local_48.MetadataInitializeParams.DomainInitializeParams.ArrayNum);
  if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
      local_48.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data !=
      (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
    FMemory::Free(local_48.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data);
  }
  if (local_48.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data);
  }
  return;
}

