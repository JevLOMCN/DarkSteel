// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147257730

UClass * __cdecl UAutoRTFMTestObject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAutoRTFMTestObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AutoRTFMTestObject",
               &Z_Registration_Info_UClass_UAutoRTFMTestObject.InnerSingleton,
               StaticRegisterNativesUAutoRTFMTestObject,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAutoRTFMTestObject>,
               InternalVTableHelperCtorCaller<UAutoRTFMTestObject>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAutoRTFMTestObject.InnerSingleton;
}

// UAutoRTFMTestObject @ 14725d210

UAutoRTFMTestObject * __thiscall
UAutoRTFMTestObject::UAutoRTFMTestObject(UAutoRTFMTestObject *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bHitOnComponentPhysicsStateChanged = false;
  this->_padding_ = (longlong)&___7UAutoRTFMTestObject__6B_;
  return this;
}

// ~UAutoRTFMTestObject @ 14725de20

void __thiscall UAutoRTFMTestObject::~UAutoRTFMTestObject(UAutoRTFMTestObject *this)

{
  this->_padding_ = (longlong)&___7UAutoRTFMTestObject__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147260790

UClass * __cdecl UAutoRTFMTestObject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAutoRTFMTestObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AutoRTFMTestObject",
               &Z_Registration_Info_UClass_UAutoRTFMTestObject.InnerSingleton,
               StaticRegisterNativesUAutoRTFMTestObject,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAutoRTFMTestObject>,
               InternalVTableHelperCtorCaller<UAutoRTFMTestObject>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAutoRTFMTestObject.InnerSingleton;
}

// StaticRegisterNativesUAutoRTFMTestObject @ 147260f40

void __cdecl UAutoRTFMTestObject::StaticRegisterNativesUAutoRTFMTestObject(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UAutoRTFMTestObject_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnComponentPhysicsStateChanged @ 147264550

void __cdecl
UAutoRTFMTestObject::execOnComponentPhysicsStateChanged
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
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
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[1].field_0x4 = 1;
  return;
}

// OnComponentPhysicsStateChanged @ 14884b970

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UAutoRTFMTestObject::OnComponentPhysicsStateChanged
          (UAutoRTFMTestObject *this,UPrimitiveComponent *param_1,
          EComponentPhysicsStateChange param_2)

{
  this->bHitOnComponentPhysicsStateChanged = true;
  return;
}

