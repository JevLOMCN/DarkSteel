// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 20

// StaticClass @ 147d560d0

UClass * __cdecl UKismetGuidLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UKismetGuidLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"KismetGuidLibrary",
               &Z_Registration_Info_UClass_UKismetGuidLibrary.InnerSingleton,
               StaticRegisterNativesUKismetGuidLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UKismetGuidLibrary>,
               InternalVTableHelperCtorCaller<UKismetGuidLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UKismetGuidLibrary.InnerSingleton;
}

// UKismetGuidLibrary @ 147d79fd0

UKismetGuidLibrary * __thiscall
UKismetGuidLibrary::UKismetGuidLibrary(UKismetGuidLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UKismetGuidLibrary__6B_;
  return this;
}

// UKismetGuidLibrary @ 147d7a000

UKismetGuidLibrary * __thiscall
UKismetGuidLibrary::UKismetGuidLibrary(UKismetGuidLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UKismetGuidLibrary__6B_;
  return this;
}

// ~UKismetGuidLibrary @ 147d7ba50

void __thiscall UKismetGuidLibrary::~UKismetGuidLibrary(UKismetGuidLibrary *this)

{
  *(undefined ***)this = &___7UKismetGuidLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// Conv_GuidToString @ 147d90d30

FString * __cdecl
UKismetGuidLibrary::Conv_GuidToString(FString *__return_storage_ptr__,FGuid *param_1)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  FGuid::AppendString(param_1,__return_storage_ptr__,Digits);
  return __return_storage_ptr__;
}

// EqualEqual_GuidGuid @ 147d99db0

bool __cdecl UKismetGuidLibrary::EqualEqual_GuidGuid(FGuid *param_1,FGuid *param_2)

{
  return ((param_1->D == param_2->D && param_1->C == param_2->C) && param_1->B == param_2->B) &&
         param_1->A == param_2->A;
}

// GetPrivateStaticClass @ 147da7db0

UClass * __cdecl UKismetGuidLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UKismetGuidLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"KismetGuidLibrary",
               &Z_Registration_Info_UClass_UKismetGuidLibrary.InnerSingleton,
               StaticRegisterNativesUKismetGuidLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UKismetGuidLibrary>,
               InternalVTableHelperCtorCaller<UKismetGuidLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UKismetGuidLibrary.InnerSingleton;
}

// Invalidate_Guid @ 147dad130

void __cdecl UKismetGuidLibrary::Invalidate_Guid(FGuid *param_1)

{
  param_1->C = 0;
  param_1->D = 0;
  param_1->A = 0;
  param_1->B = 0;
  return;
}

// IsValid_Guid @ 147dae370

bool __cdecl UKismetGuidLibrary::IsValid_Guid(FGuid *param_1)

{
  return ((param_1->D != 0 || param_1->C != 0) || param_1->B != 0) || param_1->A != 0;
}

// NewGuid @ 147db80d0

FGuid * __cdecl UKismetGuidLibrary::NewGuid(FGuid *__return_storage_ptr__)

{
  FGuid::NewGuid(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// NotEqual_GuidGuid @ 147db8310

bool __cdecl UKismetGuidLibrary::NotEqual_GuidGuid(FGuid *param_1,FGuid *param_2)

{
  return ((param_1->D != param_2->D || param_1->C != param_2->C) || param_1->B != param_2->B) ||
         param_1->A != param_2->A;
}

// Parse_StringToGuid @ 147db8bb0

void __cdecl UKismetGuidLibrary::Parse_StringToGuid(FString *param_1,FGuid *param_2,bool *param_3)

{
  bool bVar1;
  
  bVar1 = FGuid::Parse(param_1,param_2);
  *param_3 = bVar1;
  return;
}

// StaticRegisterNativesUKismetGuidLibrary @ 147dc40d0

void __cdecl UKismetGuidLibrary::StaticRegisterNativesUKismetGuidLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 7;
  local_18.DataPtr = Z_Construct_UClass_UKismetGuidLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execConv_GuidToString @ 147de1ed0

void __cdecl
UKismetGuidLibrary::execConv_GuidToString(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGuid *this;
  FString local_28;
  FGuid local_18;
  
  local_18.A = 0;
  local_18.B = 0;
  local_18.C = 0;
  local_18.D = 0;
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
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  this = &local_18;
  if ((FGuid *)param_2->MostRecentPropertyAddress != (FGuid *)0x0) {
    this = (FGuid *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FGuid::AppendString(this,&local_28,Digits);
  if (param_3 != &local_28) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_28.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_28.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execEqualEqual_GuidGuid @ 147df0e20

void __cdecl
UKismetGuidLibrary::execEqualEqual_GuidGuid(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int *piVar2;
  int *piVar3;
  int local_28 [4];
  undefined8 local_18;
  undefined8 local_10;
  
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
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
  local_18 = 0;
  local_10 = 0;
  piVar3 = local_28;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar3 = (int *)param_2->MostRecentPropertyAddress;
  }
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
  piVar2 = (int *)&local_18;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar2 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 =
       ((piVar2[3] == piVar3[3] && piVar2[2] == piVar3[2]) && piVar2[1] == piVar3[1]) &&
       *piVar2 == *piVar3;
  return;
}

// execInvalidate_Guid @ 147e03b00

void __cdecl UKismetGuidLibrary::execInvalidate_Guid(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar local_18 [16];
  
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
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
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
  puVar2[8] = '\0';
  puVar2[9] = '\0';
  puVar2[10] = '\0';
  puVar2[0xb] = '\0';
  puVar2[0xc] = '\0';
  puVar2[0xd] = '\0';
  puVar2[0xe] = '\0';
  puVar2[0xf] = '\0';
  puVar2[0] = '\0';
  puVar2[1] = '\0';
  puVar2[2] = '\0';
  puVar2[3] = '\0';
  puVar2[4] = '\0';
  puVar2[5] = '\0';
  puVar2[6] = '\0';
  puVar2[7] = '\0';
  return;
}

// execIsValid_Guid @ 147e06860

void __cdecl UKismetGuidLibrary::execIsValid_Guid(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int *piVar2;
  int local_18 [4];
  
  local_18[0] = 0;
  local_18[1] = 0;
  local_18[2] = 0;
  local_18[3] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
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
  *(bool *)param_3 = ((piVar2[3] != 0 || piVar2[2] != 0) || piVar2[1] != 0) || *piVar2 != 0;
  return;
}

// execNewGuid @ 147e1d1d0

void __cdecl UKismetGuidLibrary::execNewGuid(UObject *param_1,FFrame *param_2,void *param_3)

{
  FGuid local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FGuid::NewGuid(&local_18);
  *(undefined8 *)param_3 = local_18._0_8_;
  *(undefined8 *)((longlong)param_3 + 8) = local_18._8_8_;
  return;
}

// execNotEqual_GuidGuid @ 147e1e610

void __cdecl
UKismetGuidLibrary::execNotEqual_GuidGuid(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int *piVar2;
  int *piVar3;
  int local_28 [4];
  undefined8 local_18;
  undefined8 local_10;
  
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
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
  local_18 = 0;
  local_10 = 0;
  piVar3 = local_28;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar3 = (int *)param_2->MostRecentPropertyAddress;
  }
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
  piVar2 = (int *)&local_18;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar2 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 =
       ((piVar2[3] != piVar3[3] || piVar2[2] != piVar3[2]) || piVar2[1] != piVar3[1]) ||
       *piVar2 != *piVar3;
  return;
}

// execParse_StringToGuid @ 147e20b00

void __cdecl
UKismetGuidLibrary::execParse_StringToGuid(UObject *param_1,FFrame *param_2,void *param_3)

{
  FGuid *pFVar1;
  FProperty *pFVar2;
  bool bVar3;
  uchar *puVar4;
  FGuid *pFVar5;
  uchar local_res10 [8];
  FGuid local_28;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28.A = 0;
  local_28.B = 0;
  local_28.C = 0;
  local_28.D = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar1 = (FGuid *)param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar5 = &local_28;
  if (pFVar1 != (FGuid *)0x0) {
    pFVar5 = pFVar1;
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
  puVar4 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = FGuid::Parse(&local_18,pFVar5);
  *puVar4 = bVar3;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

