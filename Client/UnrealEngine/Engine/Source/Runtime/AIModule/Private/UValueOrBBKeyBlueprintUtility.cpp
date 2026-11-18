// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 28

// StaticClass @ 146f0f4f0

UClass * __cdecl UValueOrBBKeyBlueprintUtility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UValueOrBBKeyBlueprintUtility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"ValueOrBBKeyBlueprintUtility",
               &Z_Registration_Info_UClass_UValueOrBBKeyBlueprintUtility.InnerSingleton,
               StaticRegisterNativesUValueOrBBKeyBlueprintUtility,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UValueOrBBKeyBlueprintUtility>,
               InternalVTableHelperCtorCaller<UValueOrBBKeyBlueprintUtility>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UValueOrBBKeyBlueprintUtility.InnerSingleton;
}

// UValueOrBBKeyBlueprintUtility @ 146f2dcb0

UValueOrBBKeyBlueprintUtility * __thiscall
UValueOrBBKeyBlueprintUtility::UValueOrBBKeyBlueprintUtility
          (UValueOrBBKeyBlueprintUtility *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UValueOrBBKeyBlueprintUtility__6B_;
  return this;
}

// UValueOrBBKeyBlueprintUtility @ 146f2dce0

UValueOrBBKeyBlueprintUtility * __thiscall
UValueOrBBKeyBlueprintUtility::UValueOrBBKeyBlueprintUtility
          (UValueOrBBKeyBlueprintUtility *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UValueOrBBKeyBlueprintUtility__6B_;
  return this;
}

// ~UValueOrBBKeyBlueprintUtility @ 146f2f330

void __thiscall
UValueOrBBKeyBlueprintUtility::~UValueOrBBKeyBlueprintUtility(UValueOrBBKeyBlueprintUtility *this)

{
  *(undefined ***)this = &___7UValueOrBBKeyBlueprintUtility__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetBool @ 146f50310

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __cdecl
UValueOrBBKeyBlueprintUtility::GetBool(FValueOrBBKey_Bool *param_1,UBehaviorTreeComponent *param_2)

{
  bool bVar1;
  
  if ((param_2 != (UBehaviorTreeComponent *)0x0) &&
     ((UBlackboardComponent *)param_2->_padding_ != (UBlackboardComponent *)0x0)) {
    bVar1 = FBlackboard::GetValue<UBlackboardKeyType_Bool>
                      ((UBlackboardComponent *)param_2->_padding_,(FName *)param_1,
                       (FKey *)&param_1->_padding_,&param_1->DefaultValue);
    return bVar1;
  }
  return param_1->DefaultValue;
}

// GetClass @ 146f50670

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UClass * __cdecl
UValueOrBBKeyBlueprintUtility::GetClass
          (FValueOrBBKey_Class *param_1,UBehaviorTreeComponent *param_2)

{
  TObjectPtr<UClass>_u_0 aTStackX_10 [3];
  
  aTStackX_10[0] = (TObjectPtr<UClass>_u_0)(param_1->DefaultValue).field0_0x0.DebugPtr;
  if (param_2 != (UBehaviorTreeComponent *)0x0) {
    if ((UBlackboardComponent *)param_2->_padding_ != (UBlackboardComponent *)0x0) {
      aTStackX_10[0].DebugPtr =
           FBlackboard::GetValue<UBlackboardKeyType_Class>
                     ((UBlackboardComponent *)param_2->_padding_,(FName *)param_1,
                      (FKey *)&param_1->_padding_,&aTStackX_10[0].DebugPtr);
    }
  }
  return aTStackX_10[0].DebugPtr;
}

// GetEnum @ 146f55a30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uchar __cdecl
UValueOrBBKeyBlueprintUtility::GetEnum(FValueOrBBKey_Enum *param_1,UBehaviorTreeComponent *param_2)

{
  uchar uVar1;
  
  if ((param_2 != (UBehaviorTreeComponent *)0x0) &&
     ((UBlackboardComponent *)param_2->_padding_ != (UBlackboardComponent *)0x0)) {
    uVar1 = FBlackboard::GetValue<UBlackboardKeyType_Enum>
                      ((UBlackboardComponent *)param_2->_padding_,(FName *)param_1,
                       (FKey *)&param_1->_padding_,&param_1->DefaultValue);
    return uVar1;
  }
  return param_1->DefaultValue;
}

// GetFloat @ 146f56300

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __cdecl
UValueOrBBKeyBlueprintUtility::GetFloat
          (FValueOrBBKey_Float *param_1,UBehaviorTreeComponent *param_2)

{
  float fVar1;
  
  if ((param_2 != (UBehaviorTreeComponent *)0x0) &&
     ((UBlackboardComponent *)param_2->_padding_ != (UBlackboardComponent *)0x0)) {
    fVar1 = FBlackboard::GetValue<UBlackboardKeyType_Float>
                      ((UBlackboardComponent *)param_2->_padding_,(FName *)param_1,
                       (FKey *)&param_1->_padding_,&param_1->DefaultValue);
    return fVar1;
  }
  return param_1->DefaultValue;
}

// GetInt32 @ 146f56390

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __cdecl
UValueOrBBKeyBlueprintUtility::GetInt32
          (FValueOrBBKey_Int32 *param_1,UBehaviorTreeComponent *param_2)

{
  int iVar1;
  
  if ((param_2 != (UBehaviorTreeComponent *)0x0) &&
     ((UBlackboardComponent *)param_2->_padding_ != (UBlackboardComponent *)0x0)) {
    iVar1 = FBlackboard::GetValue<UBlackboardKeyType_Int>
                      ((UBlackboardComponent *)param_2->_padding_,(FName *)param_1,
                       (FKey *)&param_1->_padding_,&param_1->DefaultValue);
    return iVar1;
  }
  return param_1->DefaultValue;
}

// GetName @ 146f56fb0

FName __cdecl
UValueOrBBKeyBlueprintUtility::GetName(FValueOrBBKey_Name *param_1,UBehaviorTreeComponent *param_2)

{
  FValueOrBBKey_Name::GetValue((FValueOrBBKey_Name *)param_2,(UBehaviorTreeComponent *)param_1);
  return (FName)param_1;
}

// GetObject @ 146f57170

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UObject * __cdecl
UValueOrBBKeyBlueprintUtility::GetObject
          (FValueOrBBKey_Object *param_1,UBehaviorTreeComponent *param_2)

{
  TObjectPtr<UObject>_u_0 aTStackX_10 [3];
  
  aTStackX_10[0] = (TObjectPtr<UObject>_u_0)(param_1->DefaultValue).field0_0x0.DebugPtr;
  if (param_2 != (UBehaviorTreeComponent *)0x0) {
    if ((UBlackboardComponent *)param_2->_padding_ != (UBlackboardComponent *)0x0) {
      aTStackX_10[0].DebugPtr =
           FBlackboard::GetValue<UBlackboardKeyType_Object>
                     ((UBlackboardComponent *)param_2->_padding_,(FName *)param_1,
                      (FKey *)&param_1->_padding_,&aTStackX_10[0].DebugPtr);
    }
  }
  return aTStackX_10[0].DebugPtr;
}

// GetPrivateStaticClass @ 146f59840

UClass * __cdecl UValueOrBBKeyBlueprintUtility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UValueOrBBKeyBlueprintUtility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"ValueOrBBKeyBlueprintUtility",
               &Z_Registration_Info_UClass_UValueOrBBKeyBlueprintUtility.InnerSingleton,
               StaticRegisterNativesUValueOrBBKeyBlueprintUtility,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UValueOrBBKeyBlueprintUtility>,
               InternalVTableHelperCtorCaller<UValueOrBBKeyBlueprintUtility>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UValueOrBBKeyBlueprintUtility.InnerSingleton;
}

// GetRotator @ 146f5a160

TRotator<double> * __cdecl
UValueOrBBKeyBlueprintUtility::GetRotator
          (TRotator<double> *__return_storage_ptr__,FValueOrBBKey_Rotator *param_1,
          UBehaviorTreeComponent *param_2)

{
  FValueOrBBKey_Rotator::GetValue(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// GetString @ 146f5a850

FString * __cdecl
UValueOrBBKeyBlueprintUtility::GetString
          (FString *__return_storage_ptr__,FValueOrBBKey_String *param_1,
          UBehaviorTreeComponent *param_2)

{
  FValueOrBBKey_String::GetValue(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// GetStruct @ 146f5a880

FInstancedStruct * __cdecl
UValueOrBBKeyBlueprintUtility::GetStruct
          (FInstancedStruct *__return_storage_ptr__,FValueOrBBKey_Struct *param_1,
          UBehaviorTreeComponent *param_2)

{
  FConstStructView *pFVar1;
  FConstStructView local_28;
  FConstStructView local_18;
  
  pFVar1 = FValueOrBBKey_Struct::GetValue(param_1,&local_18,param_2);
  local_28.ScriptStruct = pFVar1->ScriptStruct;
  local_28.StructMemory = pFVar1->StructMemory;
  FInstancedStruct::FInstancedStruct(__return_storage_ptr__,&local_28);
  return __return_storage_ptr__;
}

// GetVector @ 146f5ab60

TVector<double> * __cdecl
UValueOrBBKeyBlueprintUtility::GetVector
          (TVector<double> *__return_storage_ptr__,FValueOrBBKey_Vector *param_1,
          UBehaviorTreeComponent *param_2)

{
  FValueOrBBKey_Vector::GetValue(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUValueOrBBKeyBlueprintUtility @ 146f76f50

void __cdecl UValueOrBBKeyBlueprintUtility::StaticRegisterNativesUValueOrBBKeyBlueprintUtility(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xb;
  local_18.DataPtr = Z_Construct_UClass_UValueOrBBKeyBlueprintUtility_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetBool @ 146f7fa30

void __cdecl
UValueOrBBKeyBlueprintUtility::execGetBool(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FValueOrBBKey_Bool *this;
  UBehaviorTreeComponent *local_res10;
  FValueOrBBKey_Bool local_18;
  
  local_18._padding_ = 0;
  local_18._padding_._0_2_ = 0xffff;
  local_18.DefaultValue = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10 = (UBehaviorTreeComponent *)0x0;
  this = &local_18;
  if ((FValueOrBBKey_Bool *)param_2->MostRecentPropertyAddress != (FValueOrBBKey_Bool *)0x0) {
    this = (FValueOrBBKey_Bool *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FValueOrBBKey_Bool::GetValue(this,local_res10);
  *(bool *)param_3 = bVar2;
  return;
}

// execGetClass @ 146f7fb30

void __cdecl
UValueOrBBKeyBlueprintUtility::execGetClass(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UClass *pUVar2;
  FValueOrBBKey_Class *this;
  UBehaviorTreeComponent *local_res10;
  FValueOrBBKey_Class local_28;
  
  local_28._padding_ = 0;
  local_28._padding_._0_2_ = 0xffff;
  local_28.DefaultValue.field0_0x0.DebugPtr = (TObjectPtr<UClass>_u_0)0x0;
  local_28.BaseClass.field0_0x0 = (TObjectPtr<UClass>_u_0)Z_Construct_UClass_UObject_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_28.BaseClass.field0_0x0.DebugPtr != (TObjectPtr<UClass>_u_0)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_28.BaseClass.field0_0x0);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10 = (UBehaviorTreeComponent *)0x0;
  this = &local_28;
  if ((FValueOrBBKey_Class *)param_2->MostRecentPropertyAddress != (FValueOrBBKey_Class *)0x0) {
    this = (FValueOrBBKey_Class *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = FValueOrBBKey_Class::GetValue(this,local_res10);
  *(UClass **)param_3 = pUVar2;
  return;
}

// execGetEnum @ 146f7ffa0

void __cdecl
UValueOrBBKeyBlueprintUtility::execGetEnum(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar uVar2;
  FValueOrBBKey_Enum *this;
  UBehaviorTreeComponent *local_res10;
  FValueOrBBKey_Enum local_38;
  
  local_38._padding_ = 0;
  local_38.DefaultValue = '\0';
  local_38._padding_._0_2_ = 0xffff;
  local_38.EnumType.field0_0x0.DebugPtr = (TObjectPtr<UEnum>_u_0)0x0;
  ::FString::FString(&local_38.NativeEnumTypeName,L"");
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10 = (UBehaviorTreeComponent *)0x0;
  this = &local_38;
  if ((FValueOrBBKey_Enum *)param_2->MostRecentPropertyAddress != (FValueOrBBKey_Enum *)0x0) {
    this = (FValueOrBBKey_Enum *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = FValueOrBBKey_Enum::GetValue(this,local_res10);
  *(uchar *)param_3 = uVar2;
  if (local_38.NativeEnumTypeName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.NativeEnumTypeName.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetFloat @ 146f800c0

void __cdecl
UValueOrBBKeyBlueprintUtility::execGetFloat(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FValueOrBBKey_Float *this;
  float fVar2;
  UBehaviorTreeComponent *local_res10;
  FValueOrBBKey_Float local_18;
  
  local_18._padding_ = 0;
  local_18._padding_._0_2_ = 0xffff;
  local_18.DefaultValue = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10 = (UBehaviorTreeComponent *)0x0;
  this = &local_18;
  if ((FValueOrBBKey_Float *)param_2->MostRecentPropertyAddress != (FValueOrBBKey_Float *)0x0) {
    this = (FValueOrBBKey_Float *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar2 = FValueOrBBKey_Float::GetValue(this,local_res10);
  *(float *)param_3 = fVar2;
  return;
}

// execGetInt32 @ 146f801c0

void __cdecl
UValueOrBBKeyBlueprintUtility::execGetInt32(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FValueOrBBKey_Int32 *this;
  UBehaviorTreeComponent *local_res10;
  FValueOrBBKey_Int32 local_18;
  
  local_18._padding_ = 0;
  local_18._padding_._0_2_ = 0xffff;
  local_18.DefaultValue = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10 = (UBehaviorTreeComponent *)0x0;
  this = &local_18;
  if ((FValueOrBBKey_Int32 *)param_2->MostRecentPropertyAddress != (FValueOrBBKey_Int32 *)0x0) {
    this = (FValueOrBBKey_Int32 *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = FValueOrBBKey_Int32::GetValue(this,local_res10);
  *(int *)param_3 = iVar2;
  return;
}

// execGetName @ 146f803d0

void __cdecl
UValueOrBBKeyBlueprintUtility::execGetName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FValueOrBBKey_Name *this;
  undefined8 local_res10;
  longlong local_res18;
  FValueOrBBKey_Name local_38;
  
  local_38._0_8_ = 0;
  local_38._8_2_ = 0xffff;
  local_38.DefaultValue.ComparisonIndex.Value = 0;
  local_38.DefaultValue.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10 = 0;
  this = &local_38;
  if ((FValueOrBBKey_Name *)param_2->MostRecentPropertyAddress != (FValueOrBBKey_Name *)0x0) {
    this = (FValueOrBBKey_Name *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FValueOrBBKey_Name::GetValue(this,(UBehaviorTreeComponent *)&local_res18);
  *(longlong *)param_3 = local_res18;
  return;
}

// execGetObject @ 146f80660

void __cdecl
UValueOrBBKeyBlueprintUtility::execGetObject(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  FValueOrBBKey_Object *this;
  UBehaviorTreeComponent *local_res10;
  FValueOrBBKey_Object local_28;
  
  local_28._padding_ = 0;
  local_28._padding_._0_2_ = 0xffff;
  local_28.DefaultValue.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  local_28.BaseClass.field0_0x0 = (TObjectPtr<UClass>_u_0)Z_Construct_UClass_UObject_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_28.BaseClass.field0_0x0.DebugPtr != (TObjectPtr<UClass>_u_0)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_28.BaseClass.field0_0x0);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10 = (UBehaviorTreeComponent *)0x0;
  this = &local_28;
  if ((FValueOrBBKey_Object *)param_2->MostRecentPropertyAddress != (FValueOrBBKey_Object *)0x0) {
    this = (FValueOrBBKey_Object *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = FValueOrBBKey_Object::GetValue(this,local_res10);
  *(UObject **)param_3 = pUVar2;
  return;
}

// execGetRotator @ 146f80cc0

void __cdecl
UValueOrBBKeyBlueprintUtility::execGetRotator(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FValueOrBBKey_Rotator *this;
  UBehaviorTreeComponent *local_res10;
  TRotator<double> local_48;
  FValueOrBBKey_Rotator local_30;
  
  local_30._padding_ = 0;
  local_30.DefaultValue.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  local_30.DefaultValue.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  local_30._padding_._0_2_ = 0xffff;
  local_30.DefaultValue.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_30);
  }
  local_res10 = (UBehaviorTreeComponent *)0x0;
  this = &local_30;
  if ((FValueOrBBKey_Rotator *)param_2->MostRecentPropertyAddress != (FValueOrBBKey_Rotator *)0x0) {
    this = (FValueOrBBKey_Rotator *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FValueOrBBKey_Rotator::GetValue(this,&local_48,local_res10);
  *(double *)param_3 = local_48.Pitch;
  *(double *)((longlong)param_3 + 8) = local_48.Yaw;
  *(double *)((longlong)param_3 + 0x10) = local_48.Roll;
  return;
}

// execGetString @ 146f80df0

void __cdecl
UValueOrBBKeyBlueprintUtility::execGetString(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FValueOrBBKey_String *this;
  UBehaviorTreeComponent *local_res10;
  FString local_38;
  FValueOrBBKey_String local_28;
  
  local_28._padding_ = 0;
  local_28._padding_._0_2_ = 0xffff;
  local_28.DefaultValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.DefaultValue.Data.ArrayNum = 0;
  local_28.DefaultValue.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10 = (UBehaviorTreeComponent *)0x0;
  this = &local_28;
  if ((FValueOrBBKey_String *)param_2->MostRecentPropertyAddress != (FValueOrBBKey_String *)0x0) {
    this = (FValueOrBBKey_String *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FValueOrBBKey_String::GetValue(this,&local_38,local_res10);
  if (param_3 != &local_38) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_38.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_38.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.DefaultValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.DefaultValue.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetStruct @ 146f80f50

void __cdecl
UValueOrBBKeyBlueprintUtility::execGetStruct(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  FConstStructView *pFVar3;
  FValueOrBBKey_Struct *this;
  UBehaviorTreeComponent *local_res10;
  TObjectPtr<UScriptStruct_const_>_u_0 local_58;
  undefined8 uStack_50;
  FConstStructView local_48;
  FConstStructView local_38;
  FValueOrBBKey_Struct local_28;
  
  local_28._padding_._0_2_ = 0xffff;
  local_28._padding_ = 0;
  FInstancedStruct::FInstancedStruct(&local_28.DefaultValue);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10 = (UBehaviorTreeComponent *)0x0;
  this = &local_28;
  if ((FValueOrBBKey_Struct *)param_2->MostRecentPropertyAddress != (FValueOrBBKey_Struct *)0x0) {
    this = (FValueOrBBKey_Struct *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = FValueOrBBKey_Struct::GetValue(this,&local_38,local_res10);
  local_48.ScriptStruct = pFVar3->ScriptStruct;
  local_48.StructMemory = pFVar3->StructMemory;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&local_58.ObjectPtr,&local_48);
  if (param_3 != &local_58) {
    FInstancedStruct::Reset(param_3);
    uVar2 = uStack_50;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_58.DebugPtr != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_58.DebugPtr);
    }
    *(TObjectPtr<UScriptStruct_const_>_u_0 *)param_3 = local_58;
    local_58.DebugPtr = (UScriptStruct *)0x0;
    uStack_50 = 0;
    *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  }
  FInstancedStruct::Reset((FInstancedStruct *)&local_58.ObjectPtr);
  FInstancedStruct::Reset(&local_28.DefaultValue);
  return;
}

// execGetVector @ 146f810d0

void __cdecl
UValueOrBBKeyBlueprintUtility::execGetVector(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FValueOrBBKey_Vector *this;
  UBehaviorTreeComponent *local_res10;
  TVector<double>_u_0 local_48;
  FValueOrBBKey_Vector local_30;
  
  local_30._padding_ = 0;
  local_30.DefaultValue.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_30.DefaultValue.field0_0x0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_30._padding_._0_2_ = 0xffff;
  local_30.DefaultValue.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_30);
  }
  local_res10 = (UBehaviorTreeComponent *)0x0;
  this = &local_30;
  if ((FValueOrBBKey_Vector *)param_2->MostRecentPropertyAddress != (FValueOrBBKey_Vector *)0x0) {
    this = (FValueOrBBKey_Vector *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FValueOrBBKey_Vector::GetValue(this,(TVector<double> *)&local_48._s_0,local_res10);
  *(double *)param_3 = local_48._s_0.X;
  *(double *)((longlong)param_3 + 8) = local_48._s_0.Y;
  *(double *)((longlong)param_3 + 0x10) = local_48._s_0.Z;
  return;
}

