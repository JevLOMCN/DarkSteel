// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TimeManagement
// Functions: 14

// StaticClass @ 14603b2e0

UClass * __cdecl UMusicalTimeFunctionLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMusicalTimeFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TimeManagement",L"MusicalTimeFunctionLibrary",
               &Z_Registration_Info_UClass_UMusicalTimeFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUMusicalTimeFunctionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMusicalTimeFunctionLibrary>,
               InternalVTableHelperCtorCaller<UMusicalTimeFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMusicalTimeFunctionLibrary.InnerSingleton;
}

// UMusicalTimeFunctionLibrary @ 1460401d0

UMusicalTimeFunctionLibrary * __thiscall
UMusicalTimeFunctionLibrary::UMusicalTimeFunctionLibrary
          (UMusicalTimeFunctionLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMusicalTimeFunctionLibrary__6B_;
  return this;
}

// UMusicalTimeFunctionLibrary @ 146040200

UMusicalTimeFunctionLibrary * __thiscall
UMusicalTimeFunctionLibrary::UMusicalTimeFunctionLibrary
          (UMusicalTimeFunctionLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMusicalTimeFunctionLibrary__6B_;
  return this;
}

// ~UMusicalTimeFunctionLibrary @ 1460405f0

void __thiscall
UMusicalTimeFunctionLibrary::~UMusicalTimeFunctionLibrary(UMusicalTimeFunctionLibrary *this)

{
  *(undefined ***)this = &___7UMusicalTimeFunctionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// BarAndBeat @ 146041f60

void __cdecl
UMusicalTimeFunctionLibrary::BarAndBeat(FMusicalTime *param_1,int *param_2,float *param_3)

{
  *param_2 = param_1->Bar;
  if ((0 < param_1->TicksPerBar) && (0 < param_1->TicksPerBeat)) {
    *param_3 = (float)param_1->TickInBar / (float)param_1->TicksPerBeat;
    return;
  }
  *param_3 = 0.0;
  return;
}

// FractionalBars @ 14604c010

float __cdecl UMusicalTimeFunctionLibrary::FractionalBars(FMusicalTime *param_1)

{
  if ((0 < param_1->TicksPerBar) && (0 < param_1->TicksPerBeat)) {
    return (float)param_1->TickInBar / (float)param_1->TicksPerBar + (float)param_1->Bar;
  }
  return 0.0;
}

// FractionalBeatsInBar @ 14604c060

float __cdecl UMusicalTimeFunctionLibrary::FractionalBeatsInBar(FMusicalTime *param_1)

{
  if ((0 < param_1->TicksPerBar) && (0 < param_1->TicksPerBeat)) {
    return (float)param_1->TickInBar / (float)param_1->TicksPerBeat;
  }
  return 0.0;
}

// GetPrivateStaticClass @ 14604cf00

UClass * __cdecl UMusicalTimeFunctionLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMusicalTimeFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TimeManagement",L"MusicalTimeFunctionLibrary",
               &Z_Registration_Info_UClass_UMusicalTimeFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUMusicalTimeFunctionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMusicalTimeFunctionLibrary>,
               InternalVTableHelperCtorCaller<UMusicalTimeFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMusicalTimeFunctionLibrary.InnerSingleton;
}

// IsValid @ 14604e080

bool __cdecl UMusicalTimeFunctionLibrary::IsValid(FMusicalTime *param_1)

{
  if ((0 < param_1->TicksPerBar) && (0 < param_1->TicksPerBeat)) {
    return true;
  }
  return false;
}

// StaticRegisterNativesUMusicalTimeFunctionLibrary @ 14604fde0

void __cdecl UMusicalTimeFunctionLibrary::StaticRegisterNativesUMusicalTimeFunctionLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UMusicalTimeFunctionLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execBarAndBeat @ 146051a60

void __cdecl
UMusicalTimeFunctionLibrary::execBarAndBeat(UObject *param_1,FFrame *param_2,void *param_3)

{
  uchar *puVar1;
  FProperty *pFVar2;
  float *pfVar3;
  uchar *puVar4;
  uchar *puVar5;
  uchar local_res10 [16];
  float local_res20 [2];
  uchar local_28 [16];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_28[0] = '\0';
  local_28[1] = '\0';
  local_28[2] = '\0';
  local_28[3] = '\0';
  local_28[4] = '\0';
  local_28[5] = '\0';
  local_28[6] = '\0';
  local_28[7] = '\0';
  local_28[8] = '\0';
  local_28[9] = '\0';
  local_28[10] = '\0';
  local_28[0xb] = '\0';
  local_28[0xc] = '\0';
  local_28[0xd] = '\0';
  local_28[0xe] = '\0';
  local_28[0xf] = '\0';
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  puVar1 = param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar4 = local_28;
  if (puVar1 != (uchar *)0x0) {
    puVar4 = puVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar1 = param_2->MostRecentPropertyAddress;
  local_res20[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar5 = local_res10;
  if (puVar1 != (uchar *)0x0) {
    puVar5 = puVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  pfVar3 = local_res20;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar3 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)puVar5 = *(undefined4 *)puVar4;
  if ((0 < *(int *)(puVar4 + 8)) && (0 < *(int *)(puVar4 + 0xc))) {
    *pfVar3 = (float)*(int *)(puVar4 + 4) / (float)*(int *)(puVar4 + 0xc);
    return;
  }
  *pfVar3 = 0.0;
  return;
}

// execFractionalBars @ 146052110

void __cdecl
UMusicalTimeFunctionLibrary::execFractionalBars(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int *piVar2;
  float fVar3;
  int local_18 [4];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_18[0] = 0;
  local_18[1] = 0;
  local_18[2] = 0;
  local_18[3] = 0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  piVar2 = local_18;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar2 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((piVar2[2] < 1) || (piVar2[3] < 1)) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = (float)piVar2[1] / (float)piVar2[2] + (float)*piVar2;
  }
  *(float *)param_3 = fVar3;
  return;
}

// execFractionalBeatsInBar @ 1460521f0

void __cdecl
UMusicalTimeFunctionLibrary::execFractionalBeatsInBar
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  uchar *puVar3;
  uchar local_18 [16];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_18[0] = '\0';
  local_18[1] = '\0';
  local_18[2] = '\0';
  local_18[3] = '\0';
  local_18[4] = '\0';
  local_18[5] = '\0';
  local_18[6] = '\0';
  local_18[7] = '\0';
  local_18[8] = '\0';
  local_18[9] = '\0';
  local_18[10] = '\0';
  local_18[0xb] = '\0';
  local_18[0xc] = '\0';
  local_18[0xd] = '\0';
  local_18[0xe] = '\0';
  local_18[0xf] = '\0';
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  puVar3 = local_18;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(int *)(puVar3 + 8) < 1) || (*(int *)(puVar3 + 0xc) < 1)) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = (float)*(int *)(puVar3 + 4) / (float)*(int *)(puVar3 + 0xc);
  }
  *(float *)param_3 = fVar2;
  return;
}

// execIsValid @ 146052350

void __cdecl
UMusicalTimeFunctionLibrary::execIsValid(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar local_18 [16];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_18[0] = '\0';
  local_18[1] = '\0';
  local_18[2] = '\0';
  local_18[3] = '\0';
  local_18[4] = '\0';
  local_18[5] = '\0';
  local_18[6] = '\0';
  local_18[7] = '\0';
  local_18[8] = '\0';
  local_18[9] = '\0';
  local_18[10] = '\0';
  local_18[0xb] = '\0';
  local_18[0xc] = '\0';
  local_18[0xd] = '\0';
  local_18[0xe] = '\0';
  local_18[0xf] = '\0';
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  puVar2 = local_18;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((0 < *(int *)(puVar2 + 8)) && (0 < *(int *)(puVar2 + 0xc))) {
    *(undefined1 *)param_3 = 1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

