// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 12

// StaticClass @ 149f1a810

UClass * __cdecl UPCGBlueprintPinHelpers::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGBlueprintPinHelpers.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGBlueprintPinHelpers",
               &Z_Registration_Info_UClass_UPCGBlueprintPinHelpers.InnerSingleton,
               StaticRegisterNativesUPCGBlueprintPinHelpers,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGBlueprintPinHelpers>,
               InternalVTableHelperCtorCaller<UPCGBlueprintPinHelpers>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGBlueprintPinHelpers.InnerSingleton;
}

// UPCGBlueprintPinHelpers @ 149f32180

UPCGBlueprintPinHelpers * __thiscall
UPCGBlueprintPinHelpers::UPCGBlueprintPinHelpers
          (UPCGBlueprintPinHelpers *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UPCGBlueprintPinHelpers__6B_;
  return this;
}

// UPCGBlueprintPinHelpers @ 149f321b0

UPCGBlueprintPinHelpers * __thiscall
UPCGBlueprintPinHelpers::UPCGBlueprintPinHelpers
          (UPCGBlueprintPinHelpers *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UPCGBlueprintPinHelpers__6B_;
  return this;
}

// ~UPCGBlueprintPinHelpers @ 149f34670

void __thiscall UPCGBlueprintPinHelpers::~UPCGBlueprintPinHelpers(UPCGBlueprintPinHelpers *this)

{
  *(undefined ***)this = &___7UPCGBlueprintPinHelpers__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetCorrespondingDataType_Internal @ 149f49180

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __cdecl
UPCGBlueprintPinHelpers::GetCorrespondingDataType_Internal(EPCGExclusiveDataType param_1)

{
  code *pcVar1;
  bool bVar2;
  EPCGDataType EVar3;
  UEnum *this;
  UEnum *this_00;
  long64 lVar4;
  atomic<unsigned_char> *paVar5;
  int iVar6;
  FName local_res10 [3];
  char *pcVar7;
  
  this = StaticEnum<enum_EPCGDataType>();
  this_00 = StaticEnum<enum_EPCGExclusiveDataType>();
  if ((this != (UEnum *)0x0) && (this_00 != (UEnum *)0x0)) {
    UEnum::GetNameByValue(this_00,(long64)local_res10);
    if (local_res10[0] == (FName)0x0) {
      iVar6 = 0xea;
      pcVar7 = "ExclusiveDataTypeName != NAME_None";
      paVar5 = &bGEnsureHasExecuted<638990103129096426>;
    }
    else {
      lVar4 = UEnum::GetValueByName(this,local_res10[0],None);
      if (lVar4 != -1) goto LAB_149f4921c;
      iVar6 = 0xed;
      pcVar7 = "MatchingType != INDEX_NONE";
      paVar5 = &bGEnsureHasExecuted<638990103129096429>;
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (paVar5,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPin.h"
                       ,iVar6,pcVar7);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  lVar4 = 0x20000000;
LAB_149f4921c:
  return (EPCGDataType)lVar4;
}

// GetPrivateStaticClass @ 149f4cf30

UClass * __cdecl UPCGBlueprintPinHelpers::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGBlueprintPinHelpers.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGBlueprintPinHelpers",
               &Z_Registration_Info_UClass_UPCGBlueprintPinHelpers.InnerSingleton,
               StaticRegisterNativesUPCGBlueprintPinHelpers,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGBlueprintPinHelpers>,
               InternalVTableHelperCtorCaller<UPCGBlueprintPinHelpers>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGBlueprintPinHelpers.InnerSingleton;
}

// StaticRegisterNativesUPCGBlueprintPinHelpers @ 149f638f0

void __cdecl UPCGBlueprintPinHelpers::StaticRegisterNativesUPCGBlueprintPinHelpers(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UPCGBlueprintPinHelpers_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execBreakPinProperty @ 149f6f9a0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

void __cdecl
UPCGBlueprintPinHelpers::execBreakPinProperty(UObject *param_1,FFrame *param_2,void *param_3)

{
  FPCGPinProperties *pFVar1;
  FName FVar2;
  FProperty *pFVar3;
  uchar uVar4;
  UEnum *this;
  UEnum *this_00;
  long64 lVar5;
  FPCGPinProperties *pFVar6;
  uchar *puVar7;
  uchar *puVar8;
  uchar *puVar9;
  uchar *puVar10;
  uchar local_res10 [16];
  uchar local_res20 [8];
  uchar local_88 [8];
  undefined8 local_80;
  FName local_78;
  FPCGPinProperties local_70;
  
  FPCGPinProperties::FPCGPinProperties(&local_70);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  pFVar1 = (FPCGPinProperties *)param_2->MostRecentPropertyAddress;
  local_80 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar6 = &local_70;
  if (pFVar1 != (FPCGPinProperties *)0x0) {
    pFVar6 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  FVar2 = (FName)param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_78 = (FName)&local_80;
  if (FVar2 != (FName)0x0) {
    local_78 = FVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar10 = param_2->MostRecentPropertyAddress;
  local_res20[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar8 = local_res10;
  if (puVar10 != (uchar *)0x0) {
    puVar8 = puVar10;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  puVar10 = param_2->MostRecentPropertyAddress;
  local_88[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar7 = local_res20;
  if (puVar10 != (uchar *)0x0) {
    puVar7 = puVar10;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  puVar10 = param_2->MostRecentPropertyAddress;
  local_88[1] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar9 = local_88;
  if (puVar10 != (uchar *)0x0) {
    puVar9 = puVar10;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88 + 1,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88 + 1);
  }
  puVar10 = local_88 + 1;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar10 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(FName *)local_78 = pFVar6->Label;
  this = StaticEnum<enum_EPCGDataType>();
  this_00 = StaticEnum<enum_EPCGExclusiveDataType>();
  *puVar10 = '\x12';
  if ((this != (UEnum *)0x0) && (this_00 != (UEnum *)0x0)) {
    FPCGDataTypeIdentifier::operator_enum_EPCGDataType(&pFVar6->AllowedTypes);
    UEnum::GetNameByValue(this,(long64)&local_78);
    if (local_78 != (FName)0x0) {
      lVar5 = UEnum::GetValueByName(this_00,local_78,None);
      if (lVar5 != -1) {
        *puVar10 = (uchar)lVar5;
      }
    }
  }
  *puVar8 = pFVar6->bAllowMultipleData;
  if ((pFVar6->bAllowMultipleData == false) || (pFVar6->bAllowMultipleConnections == false)) {
    uVar4 = '\0';
  }
  else {
    uVar4 = '\x01';
  }
  *puVar7 = uVar4;
  if ((pFVar6->PinStatus == Advanced) || (pFVar6->PinStatus == OverrideOrUserParam)) {
    uVar4 = '\x01';
  }
  else {
    uVar4 = '\0';
  }
  *puVar9 = uVar4;
  if (local_70.AllowedTypes.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.AllowedTypes.Ids.AllocatorInstance.Data);
  }
  return;
}

// execGetCorrespondingDataType @ 149f707e0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

void __cdecl
UPCGBlueprintPinHelpers::execGetCorrespondingDataType
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EPCGDataType EVar2;
  EPCGExclusiveDataType local_res10 [24];
  
  local_res10[0] = None;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar2 = GetCorrespondingDataType_Internal(local_res10[0]);
  *(EPCGDataType *)param_3 = EVar2;
  return;
}

// execIsExactlySameType @ 149f71a30

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

void __cdecl
UPCGBlueprintPinHelpers::execIsExactlySameType(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EPCGDataType EVar2;
  EPCGDataType EVar3;
  EPCGExclusiveDataType local_res10 [8];
  EPCGDataType local_res18 [2];
  
  local_res18[0] = None;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = None;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  EVar2 = local_res18[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar3 = GetCorrespondingDataType_Internal(local_res10[0]);
  *(bool *)param_3 = EVar2 == EVar3;
  return;
}

// execIsOfType @ 149f71bc0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

void __cdecl UPCGBlueprintPinHelpers::execIsOfType(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EPCGDataType EVar2;
  EPCGDataType EVar3;
  EPCGExclusiveDataType local_res10 [8];
  EPCGDataType local_res18 [2];
  
  local_res18[0] = None;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = None;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  EVar2 = local_res18[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar3 = GetCorrespondingDataType_Internal(local_res10[0]);
  *(bool *)param_3 = (EVar2 & EVar3) != None;
  return;
}

// execMakePinProperty @ 149f71ff0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

void __cdecl
UPCGBlueprintPinHelpers::execMakePinProperty(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  FField **ppFVar2;
  int iVar3;
  int iVar4;
  FProperty *pFVar5;
  undefined8 uVar6;
  EPCGDataType EVar7;
  FPCGDataTypeIdentifier *pFVar8;
  undefined1 uVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  bool bVar12;
  EPCGExclusiveDataType local_res10 [8];
  undefined1 local_res18;
  int local_res20 [2];
  int local_98;
  int local_94;
  undefined8 local_90;
  int local_88;
  FPCGDataTypeIdentifier local_80;
  undefined8 local_58 [4];
  
  local_90 = 0;
  FNameProperty::StaticClass();
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res18 = local_res20[0] != 0;
  local_98 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  bVar11 = local_98 != 0;
  local_94 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_94,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_94);
  }
  bVar12 = local_94 != 0;
  local_res10[0] = None;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar6 = local_90;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar7 = GetCorrespondingDataType_Internal(local_res10[0]);
  FText::GetEmpty();
  pFVar8 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_80,EVar7);
  pFVar10 = (pFVar8->Ids).AllocatorInstance.Data;
  (pFVar8->Ids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88 = (pFVar8->Ids).ArrayMax;
  iVar3 = (pFVar8->Ids).ArrayNum;
  (pFVar8->Ids).ArrayNum = 0;
  (pFVar8->Ids).ArrayMax = 0;
  iVar4 = pFVar8->CustomSubtype;
  uVar9 = local_res18;
  if (bVar11) {
    uVar9 = 1;
  }
  *(undefined8 *)param_3 = uVar6;
  *(undefined1 *)((longlong)param_3 + 8) = 0;
  puVar1 = (undefined8 *)((longlong)param_3 + 0x10);
  if (puVar1 != local_58) {
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
    *puVar1 = pFVar10;
    pFVar10 = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 0x18) = iVar3;
    *(int *)((longlong)param_3 + 0x1c) = local_88;
  }
  *(int *)((longlong)param_3 + 0x20) = iVar4;
  *(undefined1 *)((longlong)param_3 + 0x28) = uVar9;
  *(char *)((longlong)param_3 + 0x29) = bVar12 * '\x02';
  *(undefined1 *)((longlong)param_3 + 0x2a) = 0;
  *(bool *)((longlong)param_3 + 0x2b) = bVar11;
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
  return;
}

