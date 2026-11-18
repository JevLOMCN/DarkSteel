// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticClass @ 148076f70

UClass * __cdecl UNetPushModelHelpers::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetPushModelHelpers.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetPushModelHelpers",
               &Z_Registration_Info_UClass_UNetPushModelHelpers.InnerSingleton,
               StaticRegisterNativesUNetPushModelHelpers,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNetPushModelHelpers>,
               InternalVTableHelperCtorCaller<UNetPushModelHelpers>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetPushModelHelpers.InnerSingleton;
}

// UNetPushModelHelpers @ 14808b8f0

UNetPushModelHelpers * __thiscall
UNetPushModelHelpers::UNetPushModelHelpers(UNetPushModelHelpers *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UNetPushModelHelpers__6B_;
  return this;
}

// UNetPushModelHelpers @ 14808b920

UNetPushModelHelpers * __thiscall
UNetPushModelHelpers::UNetPushModelHelpers(UNetPushModelHelpers *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UNetPushModelHelpers__6B_;
  return this;
}

// ~UNetPushModelHelpers @ 14808f1d0

void __thiscall UNetPushModelHelpers::~UNetPushModelHelpers(UNetPushModelHelpers *this)

{
  *(undefined ***)this = &___7UNetPushModelHelpers__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetPrivateStaticClass @ 1480a9560

UClass * __cdecl UNetPushModelHelpers::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetPushModelHelpers.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetPushModelHelpers",
               &Z_Registration_Info_UClass_UNetPushModelHelpers.InnerSingleton,
               StaticRegisterNativesUNetPushModelHelpers,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNetPushModelHelpers>,
               InternalVTableHelperCtorCaller<UNetPushModelHelpers>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetPushModelHelpers.InnerSingleton;
}

// MarkPropertyDirty @ 1480b8810

void __cdecl UNetPushModelHelpers::MarkPropertyDirty(UObject *param_1,FName param_2)

{
  return;
}

// MarkPropertyDirtyFromRepIndex @ 1480b8820

void __cdecl
UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(UObject *param_1,int param_2,FName param_3)

{
  return;
}

// StaticRegisterNativesUNetPushModelHelpers @ 1480d5690

void __cdecl UNetPushModelHelpers::StaticRegisterNativesUNetPushModelHelpers(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UNetPushModelHelpers_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execMarkPropertyDirty @ 1480e4cb0

void __cdecl
UNetPushModelHelpers::execMarkPropertyDirty(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res10 [2];
  undefined8 local_res20;
  
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
  return;
}

// execMarkPropertyDirtyFromRepIndex @ 1480e4d60

void __cdecl
UNetPushModelHelpers::execMarkPropertyDirtyFromRepIndex
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [4];
  undefined8 local_res20;
  undefined8 local_18 [2];
  
  local_18[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
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
  local_res20 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

