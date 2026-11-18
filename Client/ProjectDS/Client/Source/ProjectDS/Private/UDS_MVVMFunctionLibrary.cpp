// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 48

// StaticClass @ 14b4fd1d0

UClass * __cdecl UDS_MVVMFunctionLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MVVMFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MVVMFunctionLibrary",
               &Z_Registration_Info_UClass_UDS_MVVMFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUDS_MVVMFunctionLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_MVVMFunctionLibrary>,
               InternalVTableHelperCtorCaller<UDS_MVVMFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MVVMFunctionLibrary.InnerSingleton;
}

// UDS_MVVMFunctionLibrary @ 14b500a20

UDS_MVVMFunctionLibrary * __thiscall
UDS_MVVMFunctionLibrary::UDS_MVVMFunctionLibrary
          (UDS_MVVMFunctionLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UDS_MVVMFunctionLibrary__6B_;
  return this;
}

// ~UDS_MVVMFunctionLibrary @ 14b502240

void __thiscall UDS_MVVMFunctionLibrary::~UDS_MVVMFunctionLibrary(UDS_MVVMFunctionLibrary *this)

{
  *(undefined ***)this = &___7UDS_MVVMFunctionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetPrivateStaticClass @ 14b504420

UClass * __cdecl UDS_MVVMFunctionLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MVVMFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MVVMFunctionLibrary",
               &Z_Registration_Info_UClass_UDS_MVVMFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUDS_MVVMFunctionLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_MVVMFunctionLibrary>,
               InternalVTableHelperCtorCaller<UDS_MVVMFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MVVMFunctionLibrary.InnerSingleton;
}

// StaticRegisterNativesUDS_MVVMFunctionLibrary @ 14b505ac0

void __cdecl UDS_MVVMFunctionLibrary::StaticRegisterNativesUDS_MVVMFunctionLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x15;
  local_18.DataPtr = Z_Construct_UClass_UDS_MVVMFunctionLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execConv_BoolAndBoolToVisibility @ 14b507490

void __cdecl
UDS_MVVMFunctionLibrary::execConv_BoolAndBoolToVisibility
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ESlateVisibility EVar2;
  bool bVar3;
  bool bVar4;
  ESlateVisibility local_res10 [8];
  ESlateVisibility local_res18 [8];
  int local_res20 [2];
  int local_38 [4];
  
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar3 = local_res20[0] != 0;
  local_38[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  bVar4 = local_38[0] != 0;
  local_res18[0] = Visible;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = Visible;
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
  EVar2 = Conv_BoolAndBoolToVisibility(bVar3,bVar4,local_res18[0],local_res10[0]);
  *(ESlateVisibility *)param_3 = EVar2;
  return;
}

// execConv_BoolAndNotBoolToVisibility @ 14b5075f0

void __cdecl
UDS_MVVMFunctionLibrary::execConv_BoolAndNotBoolToVisibility
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ESlateVisibility EVar2;
  bool bVar3;
  bool bVar4;
  ESlateVisibility local_res10 [8];
  ESlateVisibility local_res18 [8];
  int local_res20 [2];
  int local_38 [4];
  
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar3 = local_res20[0] != 0;
  local_38[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  bVar4 = local_38[0] != 0;
  local_res18[0] = Visible;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = Visible;
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
  EVar2 = Conv_BoolAndNotBoolToVisibility(bVar3,bVar4,local_res18[0],local_res10[0]);
  *(ESlateVisibility *)param_3 = EVar2;
  return;
}

// execConv_BoolToButtonStateNormalDisable @ 14b507750

void __cdecl
UDS_MVVMFunctionLibrary::execConv_BoolToButtonStateNormalDisable
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EDS_ButtonStateType EVar2;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar2 = Conv_BoolToButtonStateNormalDisable(local_res10[0] != 0);
  *(EDS_ButtonStateType *)param_3 = EVar2;
  return;
}

// execConv_BoolToDSText @ 14b5077e0

void __cdecl
UDS_MVVMFunctionLibrary::execConv_BoolToDSText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FDS_Text *pFVar2;
  bool bVar3;
  EDS_StringTableType local_res10 [8];
  EDS_StringTableType local_res20 [8];
  int local_88 [2];
  long64 local_80;
  long64 local_78;
  FDS_Text local_70;
  
  local_88[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  bVar3 = local_88[0] != 0;
  local_res20[0] = None;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_78 = 0;
  FInt64Property::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
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
  local_80 = 0;
  FInt64Property::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = Conv_BoolToDSText(&local_70,bVar3,local_res20[0],local_78,local_res10[0],local_80);
  FDS_Text::operator=(param_3,pFVar2);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_70.FormatArgs.AllocatorInstance.Data,
             local_70.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_70.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_70.FormatArgs.AllocatorInstance.Data);
  }
  if (local_70.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

// execConv_BoolToInt32 @ 14b5079c0

void __cdecl
UDS_MVVMFunctionLibrary::execConv_BoolToInt32(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  bool bVar3;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar3 = local_res10[0] != 0;
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = Conv_BoolToInt32(bVar3,local_res20[0],local_res18[0]);
  *(int *)param_3 = iVar2;
  return;
}

// execConv_CharIDToCharIconID @ 14b507ae0

void __cdecl
UDS_MVVMFunctionLibrary::execConv_CharIDToCharIconID(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  int local_res10 [2];
  
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = Conv_CharIDToCharIconID(local_res10[0]);
  *(int *)param_3 = iVar2;
  return;
}

// execConv_CharIDToCharNameDSText @ 14b507b70

void __cdecl
UDS_MVVMFunctionLibrary::execConv_CharIDToCharNameDSText
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FDS_Text *pFVar2;
  int local_res10 [2];
  FDS_Text local_58;
  
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = Conv_CharIDToCharNameDSText(&local_58,local_res10[0]);
  FDS_Text::operator=(param_3,pFVar2);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
             local_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
  }
  if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

// execConv_CharIDToScenarioInfoDSText @ 14b507c40

void __cdecl
UDS_MVVMFunctionLibrary::execConv_CharIDToScenarioInfoDSText
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FDS_Text *pFVar2;
  int local_res10 [2];
  FDS_Text local_58;
  
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = Conv_CharIDToScenarioInfoDSText(&local_58,local_res10[0]);
  FDS_Text::operator=(param_3,pFVar2);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
             local_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
  }
  if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

// execConv_DSTextToVisibility @ 14b507d10

void __cdecl
UDS_MVVMFunctionLibrary::execConv_DSTextToVisibility(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ESlateVisibility EVar2;
  FDS_Text *pFVar3;
  ESlateVisibility local_res10 [8];
  ESlateVisibility local_res18 [8];
  FDS_Text local_68;
  
  local_68.StringTableType = None;
  local_68.StringTableID = 0;
  local_68.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_68.StringEnumTableNameID.Number = 0;
  local_68.DateTime.Ticks = 0;
  local_68.TimeSpan.Ticks = 0;
  local_68.TimeExpressionType = None;
  local_68.IsExpression = false;
  local_68.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.UniqueString.Data.ArrayNum = 0;
  local_68.UniqueString.Data.ArrayMax = 0;
  local_68.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.FormatArgs.ArrayNum = 0;
  local_68.FormatArgs.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res18[0] = Visible;
  pFVar3 = &local_68;
  if ((FDS_Text *)param_2->MostRecentPropertyAddress != (FDS_Text *)0x0) {
    pFVar3 = (FDS_Text *)param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = Visible;
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
  EVar2 = Conv_DSTextToVisibility(pFVar3,local_res18[0],local_res10[0]);
  *(ESlateVisibility *)param_3 = EVar2;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_68.FormatArgs.AllocatorInstance.Data,
             local_68.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_68.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_68.FormatArgs.AllocatorInstance.Data);
  }
  if (local_68.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

// execConv_DSTextWithStringIDAddNumber @ 14b507e90

void __cdecl
UDS_MVVMFunctionLibrary::execConv_DSTextWithStringIDAddNumber
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FDS_Text *pFVar2;
  EDS_StringTableType local_res10 [8];
  int local_res20 [2];
  int local_68 [2];
  FDS_Text local_60;
  
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
  local_68[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = Conv_DSTextWithStringIDAddNumber(&local_60,local_res10[0],local_68[0],local_res20[0]);
  FDS_Text::operator=(param_3,pFVar2);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_60.FormatArgs.AllocatorInstance.Data,
             local_60.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_60.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_60.FormatArgs.AllocatorInstance.Data);
  }
  if (local_60.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

// execConv_FVector2DMulFloat @ 14b508000

void __cdecl
UDS_MVVMFunctionLibrary::execConv_FVector2DMulFloat(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  TVector2<double> *pTVar3;
  float local_res10 [6];
  double local_38;
  double dStack_30;
  TVector2<double>_u_0 local_28;
  TVector2<double> local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_28._s_0.X = local_38;
  local_28._s_0.Y = dStack_30;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar3 = Conv_FVector2DMulFloat(&local_18,(TVector2<double> *)&local_28._s_0,local_res10[0]);
  dVar2 = (pTVar3->field0_0x0)._s_0.Y;
  *(double *)param_3 = (pTVar3->field0_0x0)._s_0.X;
  *(double *)((longlong)param_3 + 8) = dVar2;
  return;
}

// execConv_FloatToFVector2D @ 14b5080e0

void __cdecl
UDS_MVVMFunctionLibrary::execConv_FloatToFVector2D(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  TVector2<double> *pTVar3;
  float local_res10 [6];
  TVector2<double> local_18;
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar3 = Conv_FloatToFVector2D(&local_18,local_res10[0]);
  dVar2 = (pTVar3->field0_0x0)._s_0.Y;
  *(double *)param_3 = (pTVar3->field0_0x0)._s_0.X;
  *(double *)((longlong)param_3 + 8) = dVar2;
  return;
}

// execConv_FormatWithDSText @ 14b508170

void __cdecl
UDS_MVVMFunctionLibrary::execConv_FormatWithDSText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FDS_Text *pFVar2;
  EDS_StringTableType local_res10 [16];
  long64 local_res20;
  FDS_Text local_b8;
  FDS_Text local_68;
  
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
  local_res20 = 0;
  FInt64Property::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_b8.StringTableType = None;
  local_b8.StringTableID = 0;
  local_b8.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_b8.StringEnumTableNameID.Number = 0;
  local_b8.DateTime.Ticks = 0;
  local_b8.TimeSpan.Ticks = 0;
  local_b8.TimeExpressionType = None;
  local_b8.IsExpression = false;
  local_b8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.UniqueString.Data.ArrayNum = 0;
  local_b8.UniqueString.Data.ArrayMax = 0;
  local_b8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.FormatArgs.ArrayNum = 0;
  local_b8.FormatArgs.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  pFVar2 = &local_b8;
  if ((FDS_Text *)param_2->MostRecentPropertyAddress != (FDS_Text *)0x0) {
    pFVar2 = (FDS_Text *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = Conv_FormatWithDSText(&local_68,local_res10[0],local_res20,pFVar2);
  FDS_Text::operator=(param_3,pFVar2);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_68.FormatArgs.AllocatorInstance.Data,
             local_68.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_68.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_68.FormatArgs.AllocatorInstance.Data);
  }
  if (local_68.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.UniqueString.Data.AllocatorInstance.Data);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_b8.FormatArgs.AllocatorInstance.Data,
             local_b8.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_b8.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_b8.FormatArgs.AllocatorInstance.Data);
  }
  if (local_b8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

// execConv_FormatWithInt64 @ 14b508320

void __cdecl
UDS_MVVMFunctionLibrary::execConv_FormatWithInt64(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FDS_Text *pFVar2;
  EDS_StringTableType local_res10 [8];
  long64 local_res20;
  long64 local_68;
  FDS_Text local_60;
  
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
  local_68 = 0;
  FInt64Property::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res20 = 0;
  FInt64Property::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = Conv_FormatWithInt64(&local_60,local_res10[0],local_68,local_res20);
  FDS_Text::operator=(param_3,pFVar2);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_60.FormatArgs.AllocatorInstance.Data,
             local_60.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_60.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_60.FormatArgs.AllocatorInstance.Data);
  }
  if (local_60.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

// execConv_IndexToNumberDSText @ 14b508490

void __cdecl
UDS_MVVMFunctionLibrary::execConv_IndexToNumberDSText
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FDS_Text *pFVar2;
  int local_res10 [2];
  FDS_Text local_58;
  
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = Conv_IndexToNumberDSText(&local_58,local_res10[0]);
  FDS_Text::operator=(param_3,pFVar2);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
             local_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
  }
  if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

// execConv_Int32EqualToVisibility @ 14b508560

void __cdecl
UDS_MVVMFunctionLibrary::execConv_Int32EqualToVisibility
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ESlateVisibility EVar2;
  ESlateVisibility local_res10 [8];
  ESlateVisibility local_res18 [8];
  int local_res20 [2];
  int local_28 [4];
  
  local_28[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res18[0] = Visible;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = Visible;
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
  EVar2 = Conv_Int32EqualToVisibility(local_28[0],local_res20[0],local_res18[0],local_res10[0]);
  *(ESlateVisibility *)param_3 = EVar2;
  return;
}

// execConv_Int32ToDSTextWithAddNumber @ 14b5086b0

void __cdecl
UDS_MVVMFunctionLibrary::execConv_Int32ToDSTextWithAddNumber
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FDS_Text *pFVar2;
  int local_res10 [2];
  int local_res20 [2];
  FDS_Text local_58;
  
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = Conv_Int32ToDSTextWithAddNumber(&local_58,local_res20[0],local_res10[0]);
  FDS_Text::operator=(param_3,pFVar2);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
             local_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
  }
  if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

// execConv_NotBool @ 14b5087d0

void __cdecl
UDS_MVVMFunctionLibrary::execConv_NotBool(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = Conv_NotBool(local_res10[0] != 0);
  *(bool *)param_3 = bVar2;
  return;
}

// execConv_SkillUseTypeVisibility @ 14b508860

void __cdecl
UDS_MVVMFunctionLibrary::execConv_SkillUseTypeVisibility
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ESlateVisibility EVar2;
  ESlateVisibility local_res10 [8];
  ESlateVisibility local_res18 [8];
  EDS_SkillUseType local_res20 [8];
  EDS_SkillUseType local_18 [16];
  
  local_18[0] = ActiveSkill;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_res20[0] = ActiveSkill;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res18[0] = Visible;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = Visible;
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
  EVar2 = Conv_SkillUseTypeVisibility(local_18[0],local_res20[0],local_res18[0],local_res10[0]);
  *(ESlateVisibility *)param_3 = EVar2;
  return;
}

// execConv_StringToVisibility @ 14b5089c0

void __cdecl
UDS_MVVMFunctionLibrary::execConv_StringToVisibility(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ESlateVisibility EVar2;
  ESlateVisibility local_res10 [8];
  ESlateVisibility local_res18 [8];
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res18[0] = Visible;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = Visible;
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
  EVar2 = Conv_StringToVisibility(&local_18,local_res18[0],local_res10[0]);
  *(ESlateVisibility *)param_3 = EVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execConv_TextToVisibility @ 14b508af0

void __cdecl
UDS_MVVMFunctionLibrary::execConv_TextToVisibility(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ESlateVisibility EVar2;
  FText *pFVar3;
  ESlateVisibility local_res10 [8];
  ESlateVisibility local_res18 [16];
  FText local_28;
  
  FText::FText(&local_28);
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
  local_res18[0] = Visible;
  pFVar3 = &local_28;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar3 = (FText *)param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = Visible;
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
  EVar2 = Conv_TextToVisibility(pFVar3,local_res18[0],local_res10[0]);
  *(ESlateVisibility *)param_3 = EVar2;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return;
}

// UDS_MVVMFunctionLibrary @ 14bce5220

UDS_MVVMFunctionLibrary * __thiscall
UDS_MVVMFunctionLibrary::UDS_MVVMFunctionLibrary
          (UDS_MVVMFunctionLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UDS_MVVMFunctionLibrary__6B_;
  return this;
}

// Conv_BoolAndBoolToVisibility @ 14bceb7f0

ESlateVisibility __cdecl
UDS_MVVMFunctionLibrary::Conv_BoolAndBoolToVisibility
          (bool param_1,bool param_2,ESlateVisibility param_3,ESlateVisibility param_4)

{
  if (param_1) {
    if (param_2) {
      param_4 = param_3;
    }
    return param_4;
  }
  return param_4;
}

// Conv_BoolAndNotBoolToVisibility @ 14bceb810

ESlateVisibility __cdecl
UDS_MVVMFunctionLibrary::Conv_BoolAndNotBoolToVisibility
          (bool param_1,bool param_2,ESlateVisibility param_3,ESlateVisibility param_4)

{
  if (param_1) {
    if (!param_2) {
      param_4 = param_3;
    }
    return param_4;
  }
  return param_4;
}

// Conv_BoolToButtonStateNormalDisable @ 14bceb830

EDS_ButtonStateType __cdecl
UDS_MVVMFunctionLibrary::Conv_BoolToButtonStateNormalDisable(bool param_1)

{
  EDS_ButtonStateType EVar1;
  
  EVar1 = Disabled;
  if (param_1) {
    EVar1 = Normal;
  }
  return EVar1;
}

// Conv_BoolToDSText @ 14bceb850

FDS_Text * __cdecl
UDS_MVVMFunctionLibrary::Conv_BoolToDSText
          (FDS_Text *__return_storage_ptr__,bool param_1,EDS_StringTableType param_2,long64 param_3,
          EDS_StringTableType param_4,long64 param_5)

{
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  if (param_1) {
    __return_storage_ptr__->StringTableType = param_2;
    __return_storage_ptr__->StringTableID = param_3;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->StringTableType = param_4;
  __return_storage_ptr__->StringTableID = param_5;
  return __return_storage_ptr__;
}

// Conv_BoolToInt32 @ 14bceb8a0

int __cdecl UDS_MVVMFunctionLibrary::Conv_BoolToInt32(bool param_1,int param_2,int param_3)

{
  if (param_1) {
    param_3 = param_2;
  }
  return param_3;
}

// Conv_CharIDToCharIconID @ 14bceb8c0

int __cdecl UDS_MVVMFunctionLibrary::Conv_CharIDToCharIconID(int param_1)

{
  FDS_CharacterBaseTableRow *this;
  FDS_CharacterSkinTableRow *pFVar1;
  
  this = FDS_CharacterBaseTableRow::GetRef((longlong)param_1,true);
  pFVar1 = FDS_CharacterBaseTableRow::ID_DefaultSkinTable(this);
  return pFVar1->ID_Portrait;
}

// Conv_CharIDToCharNameDSText @ 14bceb8f0

FDS_Text * __cdecl
UDS_MVVMFunctionLibrary::Conv_CharIDToCharNameDSText(FDS_Text *__return_storage_ptr__,int param_1)

{
  FDS_CharacterBaseTableRow *pFVar1;
  
  pFVar1 = FDS_CharacterBaseTableRow::GetRef((longlong)param_1,true);
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  __return_storage_ptr__->StringTableID = (pFVar1->ID_Name).ID;
  __return_storage_ptr__->StringTableType = StringBase;
  return __return_storage_ptr__;
}

// Conv_CharIDToScenarioInfoDSText @ 14bceb950

FDS_Text * __cdecl
UDS_MVVMFunctionLibrary::Conv_CharIDToScenarioInfoDSText
          (FDS_Text *__return_storage_ptr__,int param_1)

{
  FDS_CharacterBaseTableRow *pFVar1;
  
  if (param_1 < 1) {
    __return_storage_ptr__->StringTableType = None;
    __return_storage_ptr__->StringTableID = 0;
    (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
    (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
    (__return_storage_ptr__->DateTime).Ticks = 0;
    (__return_storage_ptr__->TimeSpan).Ticks = 0;
    __return_storage_ptr__->TimeExpressionType = None;
    __return_storage_ptr__->IsExpression = false;
    (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
    (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
    (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
    (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  pFVar1 = FDS_CharacterBaseTableRow::Get((longlong)param_1,true);
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  if (pFVar1 != (FDS_CharacterBaseTableRow *)0x0) {
    __return_storage_ptr__->StringTableID = (pFVar1->ID_ScenarioInfo).ID;
    __return_storage_ptr__->StringTableType = StringBase;
  }
  return __return_storage_ptr__;
}

// Conv_DSTextToVisibility @ 14bceb9f0

ESlateVisibility __cdecl
UDS_MVVMFunctionLibrary::Conv_DSTextToVisibility
          (FDS_Text *param_1,ESlateVisibility param_2,ESlateVisibility param_3)

{
  if ((((param_1->StringTableType != None) || (param_1->StringTableID != 0)) ||
      (param_1->StringEnumTableNameID != (FName)0x0)) ||
     ((0 < (param_1->FormatArgs).ArrayNum || (1 < (param_1->UniqueString).Data.ArrayNum)))) {
    param_3 = param_2;
  }
  return param_3;
}

// Conv_DSTextWithStringIDAddNumber @ 14bceba20

FDS_Text * __cdecl
UDS_MVVMFunctionLibrary::Conv_DSTextWithStringIDAddNumber
          (FDS_Text *__return_storage_ptr__,EDS_StringTableType param_1,int param_2,int param_3)

{
  __return_storage_ptr__->StringTableType = param_1;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  __return_storage_ptr__->StringTableID = (longlong)(param_2 + param_3);
  return __return_storage_ptr__;
}

// Conv_FVector2DMulFloat @ 14bceba60

TVector2<double> * __cdecl
UDS_MVVMFunctionLibrary::Conv_FVector2DMulFloat
          (TVector2<double> *__return_storage_ptr__,TVector2<double> *param_1,float param_2)

{
  TVector2<double>_u_0 TVar1;
  double dVar2;
  
  dVar2 = (param_1->field0_0x0)._s_0.Y * (double)param_2;
  TVar1._8_4_ = SUB84(dVar2,0);
  TVar1._s_0.X = (param_1->field0_0x0)._s_0.X * (double)param_2;
  TVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  __return_storage_ptr__->field0_0x0 = TVar1;
  return __return_storage_ptr__;
}

// Conv_FloatToFVector2D @ 14bceba80

TVector2<double> * __cdecl
UDS_MVVMFunctionLibrary::Conv_FloatToFVector2D
          (TVector2<double> *__return_storage_ptr__,float param_1)

{
  TVector2<double>_u_0 TVar1;
  double dVar2;
  
  dVar2 = (double)param_1;
  TVar1._8_4_ = SUB84(dVar2,0);
  TVar1._s_0.X = dVar2;
  TVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  __return_storage_ptr__->field0_0x0 = TVar1;
  return __return_storage_ptr__;
}

// Conv_FormatWithDSText @ 14bcebaa0

FDS_Text * __cdecl
UDS_MVVMFunctionLibrary::Conv_FormatWithDSText
          (FDS_Text *__return_storage_ptr__,EDS_StringTableType param_1,long64 param_2,
          FDS_Text *param_3)

{
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FDS_TextFormatArg *this;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  ERoundingMode EVar6;
  int iVar7;
  ForAnyElementType FVar8;
  int iVar9;
  FNumberFormattingOptions *pFVar10;
  ForAnyElementType local_38;
  undefined8 local_30;
  
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  pTVar1 = &__return_storage_ptr__->FormatArgs;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  piVar2 = &(__return_storage_ptr__->FormatArgs).ArrayMax;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  *piVar2 = 0;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  iVar9 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x828,&local_38,(int *)((longlong)&local_30 + 4));
  local_30 = CONCAT44(local_30._4_4_,iVar9 + 1);
  this = (FDS_TextFormatArg *)(local_38.Data + (longlong)iVar9 * 0x28);
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)this);
  pFVar10 = FNumberFormattingOptions::DefaultWithGrouping();
  bVar3 = pFVar10->UseGrouping;
  bVar4 = pFVar10->IndicateNearlyInteger;
  uVar5 = pFVar10->field_0x3;
  EVar6 = pFVar10->RoundingMode;
  iVar9 = pFVar10->MinimumIntegralDigits;
  iVar7 = pFVar10->MaximumIntegralDigits;
  (this->NumberFormatOption).AlwaysSign = pFVar10->AlwaysSign;
  (this->NumberFormatOption).UseGrouping = bVar3;
  (this->NumberFormatOption).IndicateNearlyInteger = bVar4;
  (this->NumberFormatOption).field_0x3 = uVar5;
  (this->NumberFormatOption).RoundingMode = EVar6;
  (this->NumberFormatOption).MinimumIntegralDigits = iVar9;
  (this->NumberFormatOption).MaximumIntegralDigits = iVar7;
  iVar9 = pFVar10->MaximumFractionalDigits;
  (this->NumberFormatOption).MinimumFractionalDigits = pFVar10->MinimumFractionalDigits;
  (this->NumberFormatOption).MaximumFractionalDigits = iVar9;
  FDS_TextFormatArg::SetArg<FDS_Text_const_&>(this,param_3);
  __return_storage_ptr__->StringTableType = param_1;
  __return_storage_ptr__->StringTableID = param_2;
  if (pTVar1 != (TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *)&local_38) {
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)(pTVar1->AllocatorInstance).Data,
               (__return_storage_ptr__->FormatArgs).ArrayNum);
    FVar8.Data = local_38.Data;
    iVar9 = (int)local_30;
    (__return_storage_ptr__->FormatArgs).ArrayNum = (int)local_30;
    if (((int)local_30 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
      iVar9 = 0;
      goto LAB_14bcebbc9;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,(int)local_30,*piVar2,&pTVar1->AllocatorInstance,(int)local_30,piVar2);
    ConstructItems<FDS_TextFormatArg,FDS_TextFormatArg,int>
              ((pTVar1->AllocatorInstance).Data,(FDS_TextFormatArg *)FVar8.Data,iVar9);
  }
  iVar9 = (int)local_30;
LAB_14bcebbc9:
  DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)local_38.Data,iVar9);
  if ((FDS_TextFormatArg *)local_38.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return __return_storage_ptr__;
}

// Conv_FormatWithInt64 @ 14bcebc10

FDS_Text * __cdecl
UDS_MVVMFunctionLibrary::Conv_FormatWithInt64
          (FDS_Text *__return_storage_ptr__,EDS_StringTableType param_1,long64 param_2,
          long64 param_3)

{
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  ForAnyElementType FVar3;
  int iVar4;
  long64 local_res20;
  ForAnyElementType local_28;
  undefined8 local_20;
  
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  pTVar1 = &__return_storage_ptr__->FormatArgs;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  piVar2 = &(__return_storage_ptr__->FormatArgs).ArrayMax;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  *piVar2 = 0;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = 0;
  local_res20 = param_3;
  iVar4 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x828,&local_28,(int *)((longlong)&local_20 + 4));
  local_20 = CONCAT44(local_20._4_4_,iVar4 + 1);
  FDS_TextFormatArg::FDS_TextFormatArg<__int64_&>
            ((FDS_TextFormatArg *)(local_28.Data + (longlong)iVar4 * 0x28),&local_res20);
  __return_storage_ptr__->StringTableType = param_1;
  __return_storage_ptr__->StringTableID = param_2;
  if (pTVar1 != (TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *)&local_28) {
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)(pTVar1->AllocatorInstance).Data,
               (__return_storage_ptr__->FormatArgs).ArrayNum);
    FVar3.Data = local_28.Data;
    iVar4 = (int)local_20;
    (__return_storage_ptr__->FormatArgs).ArrayNum = (int)local_20;
    if (((int)local_20 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
      iVar4 = 0;
      goto LAB_14bcebd12;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,(int)local_20,*piVar2,&pTVar1->AllocatorInstance,(int)local_20,piVar2);
    ConstructItems<FDS_TextFormatArg,FDS_TextFormatArg,int>
              ((pTVar1->AllocatorInstance).Data,(FDS_TextFormatArg *)FVar3.Data,iVar4);
  }
  iVar4 = (int)local_20;
LAB_14bcebd12:
  DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)local_28.Data,iVar4);
  if ((FDS_TextFormatArg *)local_28.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return __return_storage_ptr__;
}

// Conv_IndexToNumberDSText @ 14bcebd60

FDS_Text * __cdecl
UDS_MVVMFunctionLibrary::Conv_IndexToNumberDSText(FDS_Text *__return_storage_ptr__,int param_1)

{
  FNumberFormattingOptions *pFVar1;
  FNumberFormattingOptions local_48;
  FNumberFormattingOptions local_28;
  
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  pFVar1 = FNumberFormattingOptions::FNumberFormattingOptions(&local_28);
  local_48.AlwaysSign = pFVar1->AlwaysSign;
  local_48.UseGrouping = pFVar1->UseGrouping;
  local_48.IndicateNearlyInteger = pFVar1->IndicateNearlyInteger;
  local_48._3_1_ = pFVar1->field_0x3;
  local_48.RoundingMode = pFVar1->RoundingMode;
  local_48.MinimumIntegralDigits = pFVar1->MinimumIntegralDigits;
  local_48.MaximumIntegralDigits = pFVar1->MaximumIntegralDigits;
  local_48.MinimumFractionalDigits = pFVar1->MinimumFractionalDigits;
  local_48.MaximumFractionalDigits = pFVar1->MaximumFractionalDigits;
  FDS_Text::SetTextFromNumber(__return_storage_ptr__,param_1 + 1,&local_48);
  return __return_storage_ptr__;
}

// Conv_Int32EqualToVisibility @ 14bcebde0

ESlateVisibility __cdecl
UDS_MVVMFunctionLibrary::Conv_Int32EqualToVisibility
          (int param_1,int param_2,ESlateVisibility param_3,ESlateVisibility param_4)

{
  if (param_1 == param_2) {
    param_4 = param_3;
  }
  return param_4;
}

// Conv_Int32ToDSTextWithAddNumber @ 14bcebe00

FDS_Text * __cdecl
UDS_MVVMFunctionLibrary::Conv_Int32ToDSTextWithAddNumber
          (FDS_Text *__return_storage_ptr__,int param_1,int param_2)

{
  FNumberFormattingOptions *pFVar1;
  FNumberFormattingOptions local_48;
  FNumberFormattingOptions local_28;
  
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  pFVar1 = FNumberFormattingOptions::FNumberFormattingOptions(&local_28);
  local_48.AlwaysSign = pFVar1->AlwaysSign;
  local_48.UseGrouping = pFVar1->UseGrouping;
  local_48.IndicateNearlyInteger = pFVar1->IndicateNearlyInteger;
  local_48._3_1_ = pFVar1->field_0x3;
  local_48.RoundingMode = pFVar1->RoundingMode;
  local_48.MinimumIntegralDigits = pFVar1->MinimumIntegralDigits;
  local_48.MaximumIntegralDigits = pFVar1->MaximumIntegralDigits;
  local_48.MinimumFractionalDigits = pFVar1->MinimumFractionalDigits;
  local_48.MaximumFractionalDigits = pFVar1->MaximumFractionalDigits;
  FDS_Text::SetTextFromNumber(__return_storage_ptr__,param_1 + param_2,&local_48);
  return __return_storage_ptr__;
}

// Conv_NotBool @ 14bcebe90

bool __cdecl UDS_MVVMFunctionLibrary::Conv_NotBool(bool param_1)

{
  return !param_1;
}

// Conv_SkillUseTypeVisibility @ 14bcebea0

ESlateVisibility __cdecl
UDS_MVVMFunctionLibrary::Conv_SkillUseTypeVisibility
          (EDS_SkillUseType param_1,EDS_SkillUseType param_2,ESlateVisibility param_3,
          ESlateVisibility param_4)

{
  if (param_1 == param_2) {
    param_4 = param_3;
  }
  return param_4;
}

// Conv_StringToVisibility @ 14bcebec0

ESlateVisibility __cdecl
UDS_MVVMFunctionLibrary::Conv_StringToVisibility
          (FString *param_1,ESlateVisibility param_2,ESlateVisibility param_3)

{
  if ((param_1->Data).ArrayNum < 2) {
    param_2 = param_3;
  }
  return param_2;
}

// Conv_TextToVisibility @ 14bcebee0

ESlateVisibility __cdecl
UDS_MVVMFunctionLibrary::Conv_TextToVisibility
          (FText *param_1,ESlateVisibility param_2,ESlateVisibility param_3)

{
  bool bVar1;
  
  bVar1 = FText::IsEmpty(param_1);
  if (bVar1) {
    param_2 = param_3;
  }
  return param_2;
}

