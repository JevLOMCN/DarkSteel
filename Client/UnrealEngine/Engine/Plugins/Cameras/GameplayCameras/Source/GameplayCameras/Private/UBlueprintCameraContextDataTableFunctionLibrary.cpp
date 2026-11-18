// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 30

// StaticClass @ 14d57a9e0

UClass * __cdecl UBlueprintCameraContextDataTableFunctionLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintCameraContextDataTableFunctionLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"BlueprintCameraContextDataTableFunctionLibrary",
               &Z_Registration_Info_UClass_UBlueprintCameraContextDataTableFunctionLibrary.
                InnerSingleton,StaticRegisterNativesUBlueprintCameraContextDataTableFunctionLibrary,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UBlueprintCameraContextDataTableFunctionLibrary>,
               InternalVTableHelperCtorCaller<UBlueprintCameraContextDataTableFunctionLibrary>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintCameraContextDataTableFunctionLibrary.InnerSingleton;
}

// UBlueprintCameraContextDataTableFunctionLibrary @ 14d58ecc0

UBlueprintCameraContextDataTableFunctionLibrary * __thiscall
UBlueprintCameraContextDataTableFunctionLibrary::UBlueprintCameraContextDataTableFunctionLibrary
          (UBlueprintCameraContextDataTableFunctionLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UBlueprintCameraContextDataTableFunctionLibrary__6B_;
  return this;
}

// UBlueprintCameraContextDataTableFunctionLibrary @ 14d58ecf0

UBlueprintCameraContextDataTableFunctionLibrary * __thiscall
UBlueprintCameraContextDataTableFunctionLibrary::UBlueprintCameraContextDataTableFunctionLibrary
          (UBlueprintCameraContextDataTableFunctionLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UBlueprintCameraContextDataTableFunctionLibrary__6B_;
  return this;
}

// ~UBlueprintCameraContextDataTableFunctionLibrary @ 14d591880

void __thiscall
UBlueprintCameraContextDataTableFunctionLibrary::~UBlueprintCameraContextDataTableFunctionLibrary
          (UBlueprintCameraContextDataTableFunctionLibrary *this)

{
  *(undefined ***)this = &___7UBlueprintCameraContextDataTableFunctionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetClassData @ 14d5a6e00

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UClass * __cdecl
UBlueprintCameraContextDataTableFunctionLibrary::GetClassData
          (FBlueprintCameraEvaluationDataRef *param_1,FCameraContextDataID param_2)

{
  UClass *pUVar1;
  
  if (param_2.Value == 0xffffffff) {
    FFrame::KismetExecutionMessage(L"Invalid camera context data ID",Error,(FName)0x0);
    return (UClass *)0x0;
  }
  if (param_1->Result == (FCameraNodeEvaluationResult *)0x0) {
    FFrame::KismetExecutionMessage(L"No camera context data table has been set",Error,(FName)0x0);
    return (UClass *)0x0;
  }
  pUVar1 = UE::Cameras::FCameraContextDataTable::GetClassData
                     (&param_1->Result->ContextDataTable,param_2);
  return pUVar1;
}

// GetEnumData @ 14d5a7e30

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

uchar __cdecl
UBlueprintCameraContextDataTableFunctionLibrary::GetEnumData
          (FBlueprintCameraEvaluationDataRef *param_1,FCameraContextDataID param_2,UEnum *param_3)

{
  uchar uVar1;
  
  if (param_2.Value == 0xffffffff) {
    FFrame::KismetExecutionMessage(L"Invalid camera context data ID",Error,(FName)0x0);
    return '\0';
  }
  if (param_1->Result == (FCameraNodeEvaluationResult *)0x0) {
    FFrame::KismetExecutionMessage(L"No camera context data table has been set",Error,(FName)0x0);
    return '\0';
  }
  uVar1 = UE::Cameras::FCameraContextDataTable::GetEnumData
                    (&param_1->Result->ContextDataTable,param_2,param_3);
  return uVar1;
}

// GetNameData @ 14d5a87c0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FName __cdecl
UBlueprintCameraContextDataTableFunctionLibrary::GetNameData
          (FBlueprintCameraEvaluationDataRef *param_1,FCameraContextDataID param_2)

{
  FName *pFVar1;
  undefined4 in_register_00000014;
  FCameraContextDataID in_R8D;
  
  if (in_R8D.Value == 0xffffffff) {
    FFrame::KismetExecutionMessage(L"Invalid camera context data ID",Error,(FName)0x0);
    param_1->Result = (FCameraNodeEvaluationResult *)0x0;
    return (FName)param_1;
  }
  if (*(longlong *)CONCAT44(in_register_00000014,param_2.Value) == 0) {
    FFrame::KismetExecutionMessage(L"No camera context data table has been set",Error,(FName)0x0);
    param_1->Result = (FCameraNodeEvaluationResult *)0x0;
    return (FName)param_1;
  }
  pFVar1 = UE::Cameras::FCameraContextDataTable::GetNameData
                     ((FCameraContextDataTable *)
                      (*(longlong *)CONCAT44(in_register_00000014,param_2.Value) + 0xf8),in_R8D);
  param_1->Result = (FCameraNodeEvaluationResult *)*pFVar1;
  return (FName)param_1;
}

// GetObjectData @ 14d5a89d0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl
UBlueprintCameraContextDataTableFunctionLibrary::GetObjectData
          (FBlueprintCameraEvaluationDataRef *param_1,FCameraContextDataID param_2)

{
  UObject *pUVar1;
  
  if (param_2.Value == 0xffffffff) {
    FFrame::KismetExecutionMessage(L"Invalid camera context data ID",Error,(FName)0x0);
    return (UObject *)0x0;
  }
  if (param_1->Result == (FCameraNodeEvaluationResult *)0x0) {
    FFrame::KismetExecutionMessage(L"No camera context data table has been set",Error,(FName)0x0);
    return (UObject *)0x0;
  }
  pUVar1 = UE::Cameras::FCameraContextDataTable::GetObjectData
                     (&param_1->Result->ContextDataTable,param_2);
  return pUVar1;
}

// GetPrivateStaticClass @ 14d5a8c60

UClass * __cdecl UBlueprintCameraContextDataTableFunctionLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintCameraContextDataTableFunctionLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"BlueprintCameraContextDataTableFunctionLibrary",
               &Z_Registration_Info_UClass_UBlueprintCameraContextDataTableFunctionLibrary.
                InnerSingleton,StaticRegisterNativesUBlueprintCameraContextDataTableFunctionLibrary,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UBlueprintCameraContextDataTableFunctionLibrary>,
               InternalVTableHelperCtorCaller<UBlueprintCameraContextDataTableFunctionLibrary>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintCameraContextDataTableFunctionLibrary.InnerSingleton;
}

// GetStringData @ 14d5ab340

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FString * __cdecl
UBlueprintCameraContextDataTableFunctionLibrary::GetStringData
          (FString *__return_storage_ptr__,FBlueprintCameraEvaluationDataRef *param_1,
          FCameraContextDataID param_2)

{
  FString *pFVar1;
  
  if (param_2.Value == 0xffffffff) {
    FFrame::KismetExecutionMessage(L"Invalid camera context data ID",Error,(FName)0x0);
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  if (param_1->Result == (FCameraNodeEvaluationResult *)0x0) {
    FFrame::KismetExecutionMessage(L"No camera context data table has been set",Error,(FName)0x0);
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  pFVar1 = UE::Cameras::FCameraContextDataTable::GetStringData
                     (&param_1->Result->ContextDataTable,param_2);
  ::FString::FString(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GetStructData @ 14d5ab4b0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FInstancedStruct * __cdecl
UBlueprintCameraContextDataTableFunctionLibrary::GetStructData
          (FInstancedStruct *__return_storage_ptr__,FBlueprintCameraEvaluationDataRef *param_1,
          FCameraContextDataID param_2,UScriptStruct *param_3)

{
  if (param_2.Value == 0xffffffff) {
    FFrame::KismetExecutionMessage(L"Invalid camera context data ID",Error,(FName)0x0);
    FInstancedStruct::FInstancedStruct(__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  if (param_1->Result == (FCameraNodeEvaluationResult *)0x0) {
    FFrame::KismetExecutionMessage(L"No camera context data table has been set",Error,(FName)0x0);
    FInstancedStruct::FInstancedStruct(__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  UE::Cameras::FCameraContextDataTable::GetInstancedStructData
            (&param_1->Result->ContextDataTable,__return_storage_ptr__,param_2,param_3);
  return __return_storage_ptr__;
}

// SetClassData @ 14d5ce410

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UBlueprintCameraContextDataTableFunctionLibrary::SetClassData
          (FBlueprintCameraEvaluationDataRef *param_1,FCameraContextDataID param_2,UClass *param_3)

{
  if (param_2.Value == 0xffffffff) {
    FFrame::KismetExecutionMessage(L"Invalid camera context data ID",Error,(FName)0x0);
    return false;
  }
  if (param_1->Result == (FCameraNodeEvaluationResult *)0x0) {
    FFrame::KismetExecutionMessage(L"No camera context data table has been set",Error,(FName)0x0);
    return false;
  }
  UE::Cameras::FCameraContextDataTable::SetClassData
            (&param_1->Result->ContextDataTable,param_2,param_3);
  return true;
}

// SetEnumData @ 14d5ce880

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UBlueprintCameraContextDataTableFunctionLibrary::SetEnumData
          (FBlueprintCameraEvaluationDataRef *param_1,FCameraContextDataID param_2,UEnum *param_3,
          uchar param_4)

{
  if (param_2.Value == 0xffffffff) {
    FFrame::KismetExecutionMessage(L"Invalid camera context data ID",Error,(FName)0x0);
    return false;
  }
  if (param_1->Result == (FCameraNodeEvaluationResult *)0x0) {
    FFrame::KismetExecutionMessage(L"No camera context data table has been set",Error,(FName)0x0);
    return false;
  }
  UE::Cameras::FCameraContextDataTable::SetEnumData
            (&param_1->Result->ContextDataTable,param_2,param_3,param_4);
  return true;
}

// SetNameData @ 14d5ced40

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UBlueprintCameraContextDataTableFunctionLibrary::SetNameData
          (FBlueprintCameraEvaluationDataRef *param_1,FCameraContextDataID param_2,FName *param_3)

{
  if (param_2.Value == 0xffffffff) {
    FFrame::KismetExecutionMessage(L"Invalid camera context data ID",Error,(FName)0x0);
    return false;
  }
  if (param_1->Result == (FCameraNodeEvaluationResult *)0x0) {
    FFrame::KismetExecutionMessage(L"No camera context data table has been set",Error,(FName)0x0);
    return false;
  }
  UE::Cameras::FCameraContextDataTable::SetNameData
            (&param_1->Result->ContextDataTable,param_2,param_3);
  return true;
}

// SetObjectData @ 14d5cedb0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UBlueprintCameraContextDataTableFunctionLibrary::SetObjectData
          (FBlueprintCameraEvaluationDataRef *param_1,FCameraContextDataID param_2,UObject *param_3)

{
  if (param_2.Value == 0xffffffff) {
    FFrame::KismetExecutionMessage(L"Invalid camera context data ID",Error,(FName)0x0);
    return false;
  }
  if (param_1->Result == (FCameraNodeEvaluationResult *)0x0) {
    FFrame::KismetExecutionMessage(L"No camera context data table has been set",Error,(FName)0x0);
    return false;
  }
  UE::Cameras::FCameraContextDataTable::SetObjectData
            (&param_1->Result->ContextDataTable,param_2,param_3);
  return true;
}

// SetStringData @ 14d5cf040

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UBlueprintCameraContextDataTableFunctionLibrary::SetStringData
          (FBlueprintCameraEvaluationDataRef *param_1,FCameraContextDataID param_2,FString *param_3)

{
  if (param_2.Value == 0xffffffff) {
    FFrame::KismetExecutionMessage(L"Invalid camera context data ID",Error,(FName)0x0);
    return false;
  }
  if (param_1->Result == (FCameraNodeEvaluationResult *)0x0) {
    FFrame::KismetExecutionMessage(L"No camera context data table has been set",Error,(FName)0x0);
    return false;
  }
  UE::Cameras::FCameraContextDataTable::SetStringData
            (&param_1->Result->ContextDataTable,param_2,param_3);
  return true;
}

// SetStructData @ 14d5cf0b0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UBlueprintCameraContextDataTableFunctionLibrary::SetStructData
          (FBlueprintCameraEvaluationDataRef *param_1,FCameraContextDataID param_2,
          FInstancedStruct *param_3)

{
  if (param_2.Value == 0xffffffff) {
    FFrame::KismetExecutionMessage(L"Invalid camera context data ID",Error,(FName)0x0);
    return false;
  }
  if (param_1->Result == (FCameraNodeEvaluationResult *)0x0) {
    FFrame::KismetExecutionMessage(L"No camera context data table has been set",Error,(FName)0x0);
    return false;
  }
  UE::Cameras::FCameraContextDataTable::SetInstancedStructData
            (&param_1->Result->ContextDataTable,param_2,param_3);
  return true;
}

// StaticRegisterNativesUBlueprintCameraContextDataTableFunctionLibrary @ 14d5d0b70

void __cdecl
UBlueprintCameraContextDataTableFunctionLibrary::
StaticRegisterNativesUBlueprintCameraContextDataTableFunctionLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xc;
  local_18.DataPtr =
       Z_Construct_UClass_UBlueprintCameraContextDataTableFunctionLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetClassData @ 14d5d96e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintCameraContextDataTableFunctionLibrary::execGetClassData
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UClass *pUVar2;
  longlong *plVar3;
  FCameraContextDataID local_res10 [2];
  undefined8 local_res18;
  longlong local_38 [2];
  TReferenceControllerBase<1> *local_28;
  
  pUVar2 = (UClass *)0x0;
  local_28 = (TReferenceControllerBase<1> *)0x0;
  local_38[0] = 0;
  local_38[1] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_res10[0].Value = 0xffffffff;
  plVar3 = local_38;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar3 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0].Value == 0xffffffff) {
    local_res18 = 0;
    FFrame::KismetExecutionMessage(L"Invalid camera context data ID",Error,(FName)0x0);
  }
  else if (*plVar3 == 0) {
    local_res18 = 0;
    FFrame::KismetExecutionMessage(L"No camera context data table has been set",Error,(FName)0x0);
  }
  else {
    pUVar2 = UE::Cameras::FCameraContextDataTable::GetClassData
                       ((FCameraContextDataTable *)(*plVar3 + 0xf8),local_res10[0]);
  }
  *(UClass **)param_3 = pUVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_28);
  return;
}

// execGetEnumData @ 14d5d9c60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintCameraContextDataTableFunctionLibrary::execGetEnumData
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar uVar2;
  longlong *plVar3;
  FCameraContextDataID local_res10 [2];
  UEnum *local_res18;
  undefined8 local_res20;
  longlong local_38 [2];
  TReferenceControllerBase<1> *local_28;
  
  local_28 = (TReferenceControllerBase<1> *)0x0;
  local_38[0] = 0;
  local_38[1] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_res10[0].Value = 0xffffffff;
  plVar3 = local_38;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar3 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18 = (UEnum *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0].Value == 0xffffffff) {
    local_res20 = 0;
    FFrame::KismetExecutionMessage(L"Invalid camera context data ID",Error,(FName)0x0);
    uVar2 = '\0';
  }
  else if (*plVar3 == 0) {
    local_res20 = 0;
    FFrame::KismetExecutionMessage(L"No camera context data table has been set",Error,(FName)0x0);
    uVar2 = '\0';
  }
  else {
    uVar2 = UE::Cameras::FCameraContextDataTable::GetEnumData
                      ((FCameraContextDataTable *)(*plVar3 + 0xf8),local_res10[0],local_res18);
  }
  *(uchar *)param_3 = uVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_28);
  return;
}

// execGetNameData @ 14d5da560

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintCameraContextDataTableFunctionLibrary::execGetNameData
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName *pFVar2;
  FName FVar3;
  longlong *plVar4;
  FCameraContextDataID local_res10 [2];
  undefined8 local_res18;
  longlong local_38 [2];
  TReferenceControllerBase<1> *local_28;
  
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  local_28 = (TReferenceControllerBase<1> *)0x0;
  local_38[0] = 0;
  local_38[1] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_res10[0].Value = 0xffffffff;
  plVar4 = local_38;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar4 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0].Value == 0xffffffff) {
    local_res18 = 0;
    FFrame::KismetExecutionMessage(L"Invalid camera context data ID",Error,(FName)0x0);
  }
  else if (*plVar4 == 0) {
    local_res18 = 0;
    FFrame::KismetExecutionMessage(L"No camera context data table has been set",Error,(FName)0x0);
  }
  else {
    pFVar2 = UE::Cameras::FCameraContextDataTable::GetNameData
                       ((FCameraContextDataTable *)(*plVar4 + 0xf8),local_res10[0]);
    FVar3 = *pFVar2;
  }
  *(FName *)param_3 = FVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_28);
  return;
}

// execGetObjectData @ 14d5da6a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintCameraContextDataTableFunctionLibrary::execGetObjectData
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  longlong *plVar3;
  FCameraContextDataID local_res10 [2];
  undefined8 local_res18;
  longlong local_38 [2];
  TReferenceControllerBase<1> *local_28;
  
  pUVar2 = (UObject *)0x0;
  local_28 = (TReferenceControllerBase<1> *)0x0;
  local_38[0] = 0;
  local_38[1] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_res10[0].Value = 0xffffffff;
  plVar3 = local_38;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar3 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0].Value == 0xffffffff) {
    local_res18 = 0;
    FFrame::KismetExecutionMessage(L"Invalid camera context data ID",Error,(FName)0x0);
  }
  else if (*plVar3 == 0) {
    local_res18 = 0;
    FFrame::KismetExecutionMessage(L"No camera context data table has been set",Error,(FName)0x0);
  }
  else {
    pUVar2 = UE::Cameras::FCameraContextDataTable::GetObjectData
                       ((FCameraContextDataTable *)(*plVar3 + 0xf8),local_res10[0]);
  }
  *(UObject **)param_3 = pUVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_28);
  return;
}

// execGetStringData @ 14d5dac00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintCameraContextDataTableFunctionLibrary::execGetStringData
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  FScriptContainerElement *_Src;
  FString *pFVar3;
  wchar_t *pwVar4;
  longlong *plVar5;
  FCameraContextDataID local_res10 [2];
  undefined8 local_res18;
  ForAnyElementType local_48;
  undefined8 local_40;
  longlong local_38 [2];
  TReferenceControllerBase<1> *local_28;
  
  local_28 = (TReferenceControllerBase<1> *)0x0;
  local_38[0] = 0;
  local_38[1] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_res10[0].Value = 0xffffffff;
  plVar5 = local_38;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar5 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0].Value == 0xffffffff) {
    pwVar4 = L"Invalid camera context data ID";
  }
  else {
    if (*plVar5 != 0) {
      pFVar3 = UE::Cameras::FCameraContextDataTable::GetStringData
                         ((FCameraContextDataTable *)(*plVar5 + 0xf8),local_res10[0]);
      local_48.Data = (FScriptContainerElement *)0x0;
      iVar1 = (pFVar3->Data).ArrayNum;
      _Src = (pFVar3->Data).AllocatorInstance.Data;
      local_40 = CONCAT44(local_40._4_4_,iVar1);
      if (iVar1 == 0) {
        local_40 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar1,0,&local_48,iVar1,(int *)((longlong)&local_40 + 4));
        memcpy(local_48.Data,_Src,(longlong)iVar1 * 2);
      }
      goto LAB_14d5dad67;
    }
    pwVar4 = L"No camera context data table has been set";
  }
  local_res18 = 0;
  FFrame::KismetExecutionMessage(pwVar4,Error,(FName)0x0);
  local_40 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
LAB_14d5dad67:
  if (param_3 != &local_48) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_48.Data;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_40;
    local_48.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_40._4_4_;
    local_40 = 0;
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_28);
  return;
}

// execGetStructData @ 14d5dadd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintCameraContextDataTableFunctionLibrary::execGetStructData
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  FCameraContextDataID local_res10 [4];
  UScriptStruct *local_res20;
  TObjectPtr<UScriptStruct_const_>_u_0 local_48 [2];
  longlong local_38 [2];
  TReferenceControllerBase<1> *local_28;
  
  local_28 = (TReferenceControllerBase<1> *)0x0;
  local_38[0] = 0;
  local_38[1] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_res10[0].Value = 0xffffffff;
  plVar2 = local_38;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar2 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20 = (UScriptStruct *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0].Value == 0xffffffff) {
    local_48[0].DebugPtr = (UScriptStruct *)0x0;
    FFrame::KismetExecutionMessage(L"Invalid camera context data ID",Error,(FName)0x0);
    FInstancedStruct::FInstancedStruct((FInstancedStruct *)&local_48[0].ObjectPtr);
  }
  else if (*plVar2 == 0) {
    local_48[0].DebugPtr = (UScriptStruct *)0x0;
    FFrame::KismetExecutionMessage(L"No camera context data table has been set",Error,(FName)0x0);
    FInstancedStruct::FInstancedStruct((FInstancedStruct *)&local_48[0].ObjectPtr);
  }
  else {
    UE::Cameras::FCameraContextDataTable::GetInstancedStructData
              ((FCameraContextDataTable *)(*plVar2 + 0xf8),
               (FInstancedStruct *)&local_48[0].ObjectPtr,local_res10[0],local_res20);
  }
  FInstancedStruct::operator=(param_3,(FInstancedStruct *)&local_48[0].ObjectPtr);
  FInstancedStruct::Reset((FInstancedStruct *)&local_48[0].ObjectPtr);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_28);
  return;
}

// execSetClassData @ 14d5dd2a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintCameraContextDataTableFunctionLibrary::execSetClassData
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  longlong *plVar3;
  FCameraContextDataID local_res10 [2];
  UClass *local_res18;
  undefined8 local_res20;
  longlong local_38 [2];
  TReferenceControllerBase<1> *local_28;
  
  local_28 = (TReferenceControllerBase<1> *)0x0;
  local_38[0] = 0;
  local_38[1] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_res10[0].Value = 0xffffffff;
  plVar3 = local_38;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar3 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18 = (UClass *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0].Value == 0xffffffff) {
    local_res20 = 0;
    FFrame::KismetExecutionMessage(L"Invalid camera context data ID",Error,(FName)0x0);
    uVar2 = 0;
  }
  else if (*plVar3 == 0) {
    local_res20 = 0;
    FFrame::KismetExecutionMessage(L"No camera context data table has been set",Error,(FName)0x0);
    uVar2 = 0;
  }
  else {
    UE::Cameras::FCameraContextDataTable::SetClassData
              ((FCameraContextDataTable *)(*plVar3 + 0xf8),local_res10[0],local_res18);
    uVar2 = 1;
  }
  *(undefined1 *)param_3 = uVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_28);
  return;
}

// execSetEnumData @ 14d5dd7f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintCameraContextDataTableFunctionLibrary::execSetEnumData
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  longlong *plVar3;
  uchar local_res10 [8];
  FCameraContextDataID local_res18 [2];
  UEnum *local_res20;
  longlong local_30 [2];
  TReferenceControllerBase<1> *local_20;
  
  local_20 = (TReferenceControllerBase<1> *)0x0;
  local_30[0] = 0;
  local_30[1] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_30);
  }
  local_res18[0].Value = 0xffffffff;
  plVar3 = local_30;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar3 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res20 = (UEnum *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18[0].Value == 0xffffffff) {
    FFrame::KismetExecutionMessage(L"Invalid camera context data ID",Error,(FName)0x0);
    uVar2 = 0;
  }
  else if (*plVar3 == 0) {
    FFrame::KismetExecutionMessage(L"No camera context data table has been set",Error,(FName)0x0);
    uVar2 = 0;
  }
  else {
    UE::Cameras::FCameraContextDataTable::SetEnumData
              ((FCameraContextDataTable *)(*plVar3 + 0xf8),local_res18[0],local_res20,local_res10[0]
              );
    uVar2 = 1;
  }
  *(undefined1 *)param_3 = uVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  return;
}

// execSetNameData @ 14d5de500

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintCameraContextDataTableFunctionLibrary::execSetNameData
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  longlong *plVar3;
  FName *pFVar4;
  FCameraContextDataID local_res10 [2];
  FName local_res18;
  undefined8 local_res20;
  longlong local_38 [2];
  TReferenceControllerBase<1> *local_28;
  
  local_28 = (TReferenceControllerBase<1> *)0x0;
  local_38[0] = 0;
  local_38[1] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_res10[0].Value = 0xffffffff;
  plVar3 = local_38;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar3 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  pFVar4 = &local_res18;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar4 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0].Value == 0xffffffff) {
    local_res20 = 0;
    FFrame::KismetExecutionMessage(L"Invalid camera context data ID",Error,(FName)0x0);
    uVar2 = 0;
  }
  else if (*plVar3 == 0) {
    local_res20 = 0;
    FFrame::KismetExecutionMessage(L"No camera context data table has been set",Error,(FName)0x0);
    uVar2 = 0;
  }
  else {
    UE::Cameras::FCameraContextDataTable::SetNameData
              ((FCameraContextDataTable *)(*plVar3 + 0xf8),local_res10[0],pFVar4);
    uVar2 = 1;
  }
  *(undefined1 *)param_3 = uVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_28);
  return;
}

// execSetObjectData @ 14d5de690

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintCameraContextDataTableFunctionLibrary::execSetObjectData
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  longlong *plVar3;
  FCameraContextDataID local_res10 [2];
  UObject *local_res18;
  undefined8 local_res20;
  longlong local_38 [2];
  TReferenceControllerBase<1> *local_28;
  
  local_28 = (TReferenceControllerBase<1> *)0x0;
  local_38[0] = 0;
  local_38[1] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_res10[0].Value = 0xffffffff;
  plVar3 = local_38;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar3 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0].Value == 0xffffffff) {
    local_res20 = 0;
    FFrame::KismetExecutionMessage(L"Invalid camera context data ID",Error,(FName)0x0);
    uVar2 = 0;
  }
  else if (*plVar3 == 0) {
    local_res20 = 0;
    FFrame::KismetExecutionMessage(L"No camera context data table has been set",Error,(FName)0x0);
    uVar2 = 0;
  }
  else {
    UE::Cameras::FCameraContextDataTable::SetObjectData
              ((FCameraContextDataTable *)(*plVar3 + 0xf8),local_res10[0],local_res18);
    uVar2 = 1;
  }
  *(undefined1 *)param_3 = uVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_28);
  return;
}

// execSetStringData @ 14d5ded10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintCameraContextDataTableFunctionLibrary::execSetStringData
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  longlong *plVar3;
  FCameraContextDataID local_res10 [2];
  undefined8 local_res18;
  FString local_48;
  longlong local_38 [2];
  TReferenceControllerBase<1> *local_28;
  
  local_28 = (TReferenceControllerBase<1> *)0x0;
  local_38[0] = 0;
  local_38[1] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_res10[0].Value = 0xffffffff;
  plVar3 = local_38;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar3 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0].Value == 0xffffffff) {
    local_res18 = 0;
    FFrame::KismetExecutionMessage(L"Invalid camera context data ID",Error,(FName)0x0);
    uVar2 = 0;
  }
  else if (*plVar3 == 0) {
    local_res18 = 0;
    FFrame::KismetExecutionMessage(L"No camera context data table has been set",Error,(FName)0x0);
    uVar2 = 0;
  }
  else {
    UE::Cameras::FCameraContextDataTable::SetStringData
              ((FCameraContextDataTable *)(*plVar3 + 0xf8),local_res10[0],&local_48);
    uVar2 = 1;
  }
  *(undefined1 *)param_3 = uVar2;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_28);
  return;
}

// execSetStructData @ 14d5deeb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintCameraContextDataTableFunctionLibrary::execSetStructData
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  longlong *plVar3;
  FInstancedStruct *pFVar4;
  FCameraContextDataID local_res10 [2];
  undefined8 local_res18;
  FInstancedStruct local_48;
  longlong local_38 [2];
  TReferenceControllerBase<1> *local_28;
  
  local_28 = (TReferenceControllerBase<1> *)0x0;
  local_38[0] = 0;
  local_38[1] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_res10[0].Value = 0xffffffff;
  plVar3 = local_38;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar3 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FInstancedStruct::FInstancedStruct(&local_48);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  pFVar4 = &local_48;
  if ((FInstancedStruct *)param_2->MostRecentPropertyAddress != (FInstancedStruct *)0x0) {
    pFVar4 = (FInstancedStruct *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0].Value == 0xffffffff) {
    local_res18 = 0;
    FFrame::KismetExecutionMessage(L"Invalid camera context data ID",Error,(FName)0x0);
    uVar2 = 0;
  }
  else if (*plVar3 == 0) {
    local_res18 = 0;
    FFrame::KismetExecutionMessage(L"No camera context data table has been set",Error,(FName)0x0);
    uVar2 = 0;
  }
  else {
    UE::Cameras::FCameraContextDataTable::SetInstancedStructData
              ((FCameraContextDataTable *)(*plVar3 + 0xf8),local_res10[0],pFVar4);
    uVar2 = 1;
  }
  *(undefined1 *)param_3 = uVar2;
  FInstancedStruct::Reset(&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_28);
  return;
}

