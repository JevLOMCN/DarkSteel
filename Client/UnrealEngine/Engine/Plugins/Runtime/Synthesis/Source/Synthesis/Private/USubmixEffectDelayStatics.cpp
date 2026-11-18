// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 9

// StaticClass @ 14f0a2550

UClass * __cdecl USubmixEffectDelayStatics::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubmixEffectDelayStatics.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SubmixEffectDelayStatics",
               &Z_Registration_Info_UClass_USubmixEffectDelayStatics.InnerSingleton,
               StaticRegisterNativesUSubmixEffectDelayStatics,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USubmixEffectDelayStatics>,
               InternalVTableHelperCtorCaller<USubmixEffectDelayStatics>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubmixEffectDelayStatics.InnerSingleton;
}

// USubmixEffectDelayStatics @ 14f0bb310

USubmixEffectDelayStatics * __thiscall
USubmixEffectDelayStatics::USubmixEffectDelayStatics
          (USubmixEffectDelayStatics *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7USubmixEffectDelayStatics__6B_;
  return this;
}

// USubmixEffectDelayStatics @ 14f0bb340

USubmixEffectDelayStatics * __thiscall
USubmixEffectDelayStatics::USubmixEffectDelayStatics
          (USubmixEffectDelayStatics *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7USubmixEffectDelayStatics__6B_;
  return this;
}

// ~USubmixEffectDelayStatics @ 14f0c06f0

void __thiscall
USubmixEffectDelayStatics::~USubmixEffectDelayStatics(USubmixEffectDelayStatics *this)

{
  *(undefined ***)this = &___7USubmixEffectDelayStatics__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetPrivateStaticClass @ 14f0dcfc0

UClass * __cdecl USubmixEffectDelayStatics::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubmixEffectDelayStatics.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SubmixEffectDelayStatics",
               &Z_Registration_Info_UClass_USubmixEffectDelayStatics.InnerSingleton,
               StaticRegisterNativesUSubmixEffectDelayStatics,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USubmixEffectDelayStatics>,
               InternalVTableHelperCtorCaller<USubmixEffectDelayStatics>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubmixEffectDelayStatics.InnerSingleton;
}

// StaticRegisterNativesUSubmixEffectDelayStatics @ 14f103a80

void __cdecl USubmixEffectDelayStatics::StaticRegisterNativesUSubmixEffectDelayStatics(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_USubmixEffectDelayStatics_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetDelayLength @ 14f10ecf0

void __cdecl
USubmixEffectDelayStatics::execSetDelayLength(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float *pfVar2;
  undefined8 uVar3;
  float fVar4;
  float local_res10 [2];
  float local_28 [8];
  
  local_28[0] = 2000.0;
  local_28[1] = 400.0;
  local_28[2] = 1000.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  local_res10[0] = 0.0;
  pfVar2 = local_28;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar2 = (float *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  if (local_res10[0] <= 0.0) {
    local_res10[0] = 0.0;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar4 = *pfVar2;
  if (*pfVar2 <= local_res10[0]) {
    fVar4 = local_res10[0];
  }
  pfVar2[2] = local_res10[0];
  uVar3 = CONCAT44((int)((ulonglong)*(undefined8 *)pfVar2 >> 0x20),fVar4);
  *(undefined8 *)pfVar2 = uVar3;
  *(undefined8 *)param_3 = uVar3;
  *(float *)((longlong)param_3 + 8) = pfVar2[2];
  return;
}

// execSetInterpolationTime @ 14f111e90

void __cdecl
USubmixEffectDelayStatics::execSetInterpolationTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  undefined8 uVar3;
  float local_res10 [2];
  uchar local_28 [32];
  
  local_28[0] = '\0';
  local_28[1] = '\0';
  local_28[2] = 0xfa;
  local_28[3] = 'D';
  local_28[4] = '\0';
  local_28[5] = '\0';
  local_28[6] = 200;
  local_28[7] = 'C';
  local_28[8] = '\0';
  local_28[9] = '\0';
  local_28[10] = 'z';
  local_28[0xb] = 'D';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  local_res10[0] = 0.0;
  puVar2 = local_28;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  if (local_res10[0] <= 0.0) {
    local_res10[0] = 0.0;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar3 = CONCAT44(local_res10[0],(int)*(undefined8 *)puVar2);
  *(undefined8 *)puVar2 = uVar3;
  *(undefined8 *)param_3 = uVar3;
  *(undefined4 *)((longlong)param_3 + 8) = *(undefined4 *)(puVar2 + 8);
  return;
}

// execSetMaximumDelayLength @ 14f112b50

void __cdecl
USubmixEffectDelayStatics::execSetMaximumDelayLength(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  float fVar3;
  undefined8 uVar4;
  float local_res10 [2];
  uchar local_28 [32];
  
  local_28[0] = '\0';
  local_28[1] = '\0';
  local_28[2] = 0xfa;
  local_28[3] = 'D';
  local_28[4] = '\0';
  local_28[5] = '\0';
  local_28[6] = 200;
  local_28[7] = 'C';
  local_28[8] = '\0';
  local_28[9] = '\0';
  local_28[10] = 'z';
  local_28[0xb] = 'D';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  local_res10[0] = 0.0;
  puVar2 = local_28;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  if (local_res10[0] <= 0.0) {
    local_res10[0] = 0.0;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar3 = *(float *)(puVar2 + 8);
  if (local_res10[0] <= *(float *)(puVar2 + 8)) {
    fVar3 = local_res10[0];
  }
  *(float *)(puVar2 + 8) = fVar3;
  uVar4 = CONCAT44((int)((ulonglong)*(undefined8 *)puVar2 >> 0x20),local_res10[0]);
  *(undefined8 *)puVar2 = uVar4;
  *(undefined8 *)param_3 = uVar4;
  *(undefined4 *)((longlong)param_3 + 8) = *(undefined4 *)(puVar2 + 8);
  return;
}

