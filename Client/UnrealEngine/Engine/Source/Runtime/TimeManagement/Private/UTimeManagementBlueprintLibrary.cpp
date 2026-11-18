// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TimeManagement
// Functions: 42

// StaticClass @ 14603ac70

UClass * __cdecl UTimeManagementBlueprintLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTimeManagementBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TimeManagement",L"TimeManagementBlueprintLibrary",
               &Z_Registration_Info_UClass_UTimeManagementBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUTimeManagementBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTimeManagementBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UTimeManagementBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTimeManagementBlueprintLibrary.InnerSingleton;
}

// UTimeManagementBlueprintLibrary @ 146040230

UTimeManagementBlueprintLibrary * __thiscall
UTimeManagementBlueprintLibrary::UTimeManagementBlueprintLibrary
          (UTimeManagementBlueprintLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UTimeManagementBlueprintLibrary__6B_;
  return this;
}

// UTimeManagementBlueprintLibrary @ 146040260

UTimeManagementBlueprintLibrary * __thiscall
UTimeManagementBlueprintLibrary::UTimeManagementBlueprintLibrary
          (UTimeManagementBlueprintLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UTimeManagementBlueprintLibrary__6B_;
  return this;
}

// ~UTimeManagementBlueprintLibrary @ 146040610

void __thiscall
UTimeManagementBlueprintLibrary::~UTimeManagementBlueprintLibrary
          (UTimeManagementBlueprintLibrary *this)

{
  *(undefined ***)this = &___7UTimeManagementBlueprintLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// Add_FrameNumberFrameNumber @ 146041eb0

FFrameNumber __cdecl
UTimeManagementBlueprintLibrary::Add_FrameNumberFrameNumber
          (FFrameNumber param_1,FFrameNumber param_2)

{
  undefined4 in_register_0000000c;
  int in_R8D;
  
  *(int *)CONCAT44(in_register_0000000c,param_1.Value) = param_2.Value + in_R8D;
  return (FFrameNumber)param_1.Value;
}

// Add_FrameNumberInteger @ 146041ec0

FFrameNumber __cdecl
UTimeManagementBlueprintLibrary::Add_FrameNumberInteger(FFrameNumber param_1,int param_2)

{
  undefined4 in_register_0000000c;
  int in_R8D;
  
  *(int *)CONCAT44(in_register_0000000c,param_1.Value) = param_2 + in_R8D;
  return (FFrameNumber)param_1.Value;
}

// Conv_FrameNumberToInteger @ 1460460f0

int __cdecl UTimeManagementBlueprintLibrary::Conv_FrameNumberToInteger(FFrameNumber *param_1)

{
  return param_1->Value;
}

// Conv_FrameRateToInterval @ 146046100

float __cdecl UTimeManagementBlueprintLibrary::Conv_FrameRateToInterval(FFrameRate param_1)

{
  return (float)param_1.Denominator / (float)param_1.Numerator;
}

// Conv_FrameRateToSeconds @ 146046130

float __cdecl UTimeManagementBlueprintLibrary::Conv_FrameRateToSeconds(FFrameRate *param_1)

{
  return (float)param_1->Numerator / (float)param_1->Denominator;
}

// Conv_QualifiedFrameTimeToSeconds @ 146046150

float __cdecl
UTimeManagementBlueprintLibrary::Conv_QualifiedFrameTimeToSeconds(FQualifiedFrameTime *param_1)

{
  int iVar1;
  float fStackX_c;
  
  fStackX_c = (param_1->Time).SubFrame;
  iVar1 = (param_1->Rate).Denominator;
  return ((float)((longlong)iVar1 * (longlong)(param_1->Time).FrameNumber.Value) +
         (float)iVar1 * fStackX_c) / (float)(param_1->Rate).Numerator;
}

// Conv_TimecodeToString @ 1460461b0

FString * __cdecl
UTimeManagementBlueprintLibrary::Conv_TimecodeToString
          (FString *__return_storage_ptr__,FTimecode *param_1,bool param_2)

{
  FTimecode::ToString(param_1,__return_storage_ptr__,param_2,false);
  return __return_storage_ptr__;
}

// Divide_FrameNumberInteger @ 146047cf0

FFrameNumber __cdecl
UTimeManagementBlueprintLibrary::Divide_FrameNumberInteger(FFrameNumber param_1,int param_2)

{
  undefined4 in_register_0000000c;
  int in_R8D;
  
  *(int *)CONCAT44(in_register_0000000c,param_1.Value) = param_2 / in_R8D;
  return (FFrameNumber)param_1.Value;
}

// GetPrivateStaticClass @ 14604cfc0

UClass * __cdecl UTimeManagementBlueprintLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTimeManagementBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TimeManagement",L"TimeManagementBlueprintLibrary",
               &Z_Registration_Info_UClass_UTimeManagementBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUTimeManagementBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTimeManagementBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UTimeManagementBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTimeManagementBlueprintLibrary.InnerSingleton;
}

// GetTimecode @ 14604d3d0

FTimecode * __cdecl UTimeManagementBlueprintLibrary::GetTimecode(FTimecode *__return_storage_ptr__)

{
  FApp::GetTimecode(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTimecodeFrameRate @ 14604d3f0

FFrameRate __cdecl UTimeManagementBlueprintLibrary::GetTimecodeFrameRate(void)

{
  FFrameRate in_RCX;
  
  FApp::GetTimecodeFrameRate();
  return in_RCX;
}

// IsValid_Framerate @ 14604e0a0

bool __cdecl UTimeManagementBlueprintLibrary::IsValid_Framerate(FFrameRate *param_1)

{
  return 0 < param_1->Denominator;
}

// IsValid_MultipleOf @ 14604e0b0

bool __cdecl
UTimeManagementBlueprintLibrary::IsValid_MultipleOf(FFrameRate *param_1,FFrameRate *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = (longlong)(*param_2).Denominator * (longlong)param_1->Numerator;
  lVar1 = (longlong)param_1->Denominator * (longlong)(*param_2).Numerator;
  if ((lVar2 - lVar1 == 0 || lVar2 < lVar1) && (lVar1 % lVar2 == 0)) {
    return true;
  }
  return false;
}

// Multiply_FrameNumberInteger @ 14604e830

FFrameNumber __cdecl
UTimeManagementBlueprintLibrary::Multiply_FrameNumberInteger(FFrameNumber param_1,int param_2)

{
  undefined4 in_register_0000000c;
  int in_R8D;
  
  *(int *)CONCAT44(in_register_0000000c,param_1.Value) = param_2 * in_R8D;
  return (FFrameNumber)param_1.Value;
}

// Multiply_SecondsFrameRate @ 14604e840

FFrameTime __cdecl
UTimeManagementBlueprintLibrary::Multiply_SecondsFrameRate(float param_1,FFrameRate *param_2)

{
  FFrameTime in_RCX;
  FFrameRate *in_R8;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM1_Db;
  
  FFrameRate::AsFrameTime(in_R8,(double)CONCAT44(in_XMM1_Db,in_XMM1_Da));
  return in_RCX;
}

// SnapFrameTimeToRate @ 14604fcb0

FFrameTime __cdecl
UTimeManagementBlueprintLibrary::SnapFrameTimeToRate
          (FFrameTime *param_1,FFrameRate *param_2,FFrameRate *param_3)

{
  FFrameRate FVar1;
  FFrameRate FVar2;
  uint uVar3;
  FFrameTime FVar4;
  FFrameRate *in_R9;
  undefined1 local_res10 [8];
  
  FVar1 = *in_R9;
  FVar4 = ConvertFrameTime((FFrameTime)local_res10,*param_2,*param_3);
  uVar3 = *(uint *)FVar4;
  if (__real_3f000000 < *(float *)((longlong)FVar4 + 4) ||
      __real_3f000000 == *(float *)((longlong)FVar4 + 4)) {
    uVar3 = uVar3 + 1;
  }
  FVar2.Denominator = 0;
  FVar2.Numerator = uVar3;
  ConvertFrameTime((FFrameTime)param_1,FVar2,FVar1);
  return (FFrameTime)param_1;
}

// StaticRegisterNativesUTimeManagementBlueprintLibrary @ 14604fe20

void __cdecl
UTimeManagementBlueprintLibrary::StaticRegisterNativesUTimeManagementBlueprintLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x12;
  local_18.DataPtr = Z_Construct_UClass_UTimeManagementBlueprintLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Subtract_FrameNumberFrameNumber @ 14604fe80

FFrameNumber __cdecl
UTimeManagementBlueprintLibrary::Subtract_FrameNumberFrameNumber
          (FFrameNumber param_1,FFrameNumber param_2)

{
  undefined4 in_register_0000000c;
  int in_R8D;
  
  *(int *)CONCAT44(in_register_0000000c,param_1.Value) = param_2.Value - in_R8D;
  return (FFrameNumber)param_1.Value;
}

// Subtract_FrameNumberInteger @ 14604fe90

FFrameNumber __cdecl
UTimeManagementBlueprintLibrary::Subtract_FrameNumberInteger(FFrameNumber param_1,int param_2)

{
  undefined4 in_register_0000000c;
  int in_R8D;
  
  *(int *)CONCAT44(in_register_0000000c,param_1.Value) = param_2 - in_R8D;
  return (FFrameNumber)param_1.Value;
}

// TransformTime @ 14604ff20

FFrameTime __cdecl
UTimeManagementBlueprintLibrary::TransformTime
          (FFrameTime *param_1,FFrameRate *param_2,FFrameRate *param_3)

{
  ConvertFrameTime((FFrameTime)param_1,*param_2,*param_3);
  return (FFrameTime)param_1;
}

// execAdd_FrameNumberFrameNumber @ 1460518c0

void __cdecl
UTimeManagementBlueprintLibrary::execAdd_FrameNumberFrameNumber
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  int local_res18 [2];
  
  local_res10[0] = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(int *)param_3 = local_res10[0] + local_res18[0];
  return;
}

// execAdd_FrameNumberInteger @ 146051990

void __cdecl
UTimeManagementBlueprintLibrary::execAdd_FrameNumberInteger
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  int local_res18 [2];
  
  local_res10[0] = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
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
  *(int *)param_3 = local_res10[0] + local_res18[0];
  return;
}

// execConv_FrameNumberToInteger @ 146051be0

void __cdecl
UTimeManagementBlueprintLibrary::execConv_FrameNumberToInteger
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar local_res10 [8];
  
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
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
  puVar2 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)puVar2;
  return;
}

// execConv_FrameRateToInterval @ 146051c80

void __cdecl
UTimeManagementBlueprintLibrary::execConv_FrameRateToInterval
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10;
  int iStackX_14;
  
  local_res10 = 60000;
  iStackX_14 = 1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(float *)param_3 = (float)iStackX_14 / (float)local_res10;
  return;
}

// execConv_FrameRateToSeconds @ 146051d30

void __cdecl
UTimeManagementBlueprintLibrary::execConv_FrameRateToSeconds
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int *piVar2;
  int local_res10 [2];
  
  local_res10[0] = 60000;
  local_res10[1] = 1;
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
  piVar2 = local_res10;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar2 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(float *)param_3 = (float)*piVar2 / (float)piVar2[1];
  return;
}

// execConv_QualifiedFrameTimeToSeconds @ 146051df0

void __cdecl
UTimeManagementBlueprintLibrary::execConv_QualifiedFrameTimeToSeconds
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  int iVar3;
  float fStackX_14;
  uchar local_18 [16];
  
  local_18[8] = '\x18';
  local_18[9] = '\0';
  local_18[10] = '\0';
  local_18[0xb] = '\0';
  local_18[0] = '\0';
  local_18[1] = '\0';
  local_18[2] = '\0';
  local_18[3] = '\0';
  local_18[4] = '\0';
  local_18[5] = '\0';
  local_18[6] = '\0';
  local_18[7] = '\0';
  local_18[0xc] = '\x01';
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
  fStackX_14 = (float)((ulonglong)*(undefined8 *)puVar2 >> 0x20);
  iVar3 = (int)((ulonglong)*(undefined8 *)(puVar2 + 8) >> 0x20);
  *(float *)param_3 =
       ((float)((longlong)iVar3 * (longlong)(int)*(undefined8 *)puVar2) + (float)iVar3 * fStackX_14)
       / (float)(int)*(undefined8 *)(puVar2 + 8);
  return;
}

// execConv_TimecodeToString @ 146051ef0

void __cdecl
UTimeManagementBlueprintLibrary::execConv_TimecodeToString
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FTimecode *this;
  int local_res10 [2];
  FString local_38;
  FTimecode local_28;
  
  local_28.Subframe = 0.0;
  local_28.bDropFrameFormat = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_28.Hours = 0;
  local_28.Minutes = 0;
  local_28.Seconds = 0;
  local_28.Frames = 0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10[0] = 0;
  this = &local_28;
  if ((FTimecode *)param_2->MostRecentPropertyAddress != (FTimecode *)0x0) {
    this = (FTimecode *)param_2->MostRecentPropertyAddress;
  }
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
  FTimecode::ToString(this,&local_38,local_res10[0] != 0,false);
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
  return;
}

// execDivide_FrameNumberInteger @ 146052040

void __cdecl
UTimeManagementBlueprintLibrary::execDivide_FrameNumberInteger
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  int local_res18 [2];
  
  local_res10[0] = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
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
  *(int *)param_3 = local_res10[0] / local_res18[0];
  return;
}

// execGetTimecode @ 1460522c0

void __cdecl
UTimeManagementBlueprintLibrary::execGetTimecode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FTimecode local_28;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FApp::GetTimecode(&local_28);
  *(undefined8 *)param_3 = local_28._0_8_;
  *(undefined8 *)((longlong)param_3 + 8) = local_28._8_8_;
  *(undefined8 *)((longlong)param_3 + 0x10) = local_28._16_8_;
  return;
}

// execGetTimecodeFrameRate @ 146052310

void __cdecl
UTimeManagementBlueprintLibrary::execGetTimecodeFrameRate
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 local_res10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FApp::GetTimecodeFrameRate();
  *(undefined8 *)param_3 = local_res10;
  return;
}

// execIsValid_Framerate @ 146052410

void __cdecl
UTimeManagementBlueprintLibrary::execIsValid_Framerate
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar local_res10 [8];
  
  local_res10[0] = '`';
  local_res10[1] = 0xea;
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  local_res10[4] = '\x01';
  local_res10[5] = '\0';
  local_res10[6] = '\0';
  local_res10[7] = '\0';
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
  puVar2 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = 0 < *(int *)(puVar2 + 4);
  return;
}

// execIsValid_MultipleOf @ 1460524c0

void __cdecl
UTimeManagementBlueprintLibrary::execIsValid_MultipleOf
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  uchar *puVar3;
  int *piVar4;
  longlong lVar5;
  uchar local_res10 [8];
  int local_18 [4];
  
  local_18[0] = 60000;
  local_18[1] = 1;
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
  local_res10[0] = '`';
  local_res10[1] = 0xea;
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  local_res10[4] = '\x01';
  local_res10[5] = '\0';
  local_res10[6] = '\0';
  local_res10[7] = '\0';
  piVar4 = local_18;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar4 = (int *)param_2->MostRecentPropertyAddress;
  }
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
  puVar3 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar5 = (longlong)(int)((ulonglong)*(undefined8 *)puVar3 >> 0x20) * (longlong)*piVar4;
  lVar2 = (longlong)piVar4[1] * (longlong)(int)*(undefined8 *)puVar3;
  if ((lVar5 - lVar2 == 0 || lVar5 < lVar2) && (lVar2 % lVar5 == 0)) {
    *(undefined1 *)param_3 = 1;
  }
  else {
    *(undefined1 *)param_3 = 0;
  }
  return;
}

// execMultiply_FrameNumberInteger @ 146052600

void __cdecl
UTimeManagementBlueprintLibrary::execMultiply_FrameNumberInteger
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  int local_res18 [2];
  
  local_res18[0] = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
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
  *(int *)param_3 = local_res10[0] * local_res18[0];
  return;
}

// execMultiply_SecondsFrameRate @ 1460526d0

void __cdecl
UTimeManagementBlueprintLibrary::execMultiply_SecondsFrameRate
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  int *piVar3;
  double dVar4;
  undefined1 in_XMM2 [16];
  undefined1 auVar5 [16];
  double dVar6;
  float fVar7;
  float fVar8;
  float local_res10 [2];
  int local_28 [8];
  
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
  local_28[0] = 60000;
  local_28[1] = 1;
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
  piVar3 = local_28;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar3 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  dVar6 = ((double)*piVar3 * (double)local_res10[0]) / (double)piVar3[1];
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar6;
  auVar5 = roundpd(in_XMM2,auVar5,1);
  dVar4 = auVar5._0_8_;
  dVar6 = dVar6 - dVar4;
  if (__real_41dfffffffc00000 <= dVar4) {
    dVar4 = __real_41dfffffffc00000;
  }
  if (dVar4 <= __real_c1e0000000000000) {
    dVar4 = __real_c1e0000000000000;
  }
  iVar2 = (int)dVar6;
  fVar7 = (float)dVar6 - (float)iVar2;
  fVar8 = fVar7;
  if ((0.0 < fVar7) && (fVar8 = ::FFrameTime::MaxSubframe, fVar7 <= ::FFrameTime::MaxSubframe)) {
    fVar8 = fVar7;
  }
  fVar7 = ::FFrameTime::MaxSubframe;
  if (fVar8 <= ::FFrameTime::MaxSubframe) {
    fVar7 = fVar8;
  }
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  *(ulonglong *)param_3 = CONCAT44(fVar7,iVar2 + (int)dVar4);
  return;
}

// execSnapFrameTimeToRate @ 146052850

void __cdecl
UTimeManagementBlueprintLibrary::execSnapFrameTimeToRate
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FFrameRate FVar2;
  FFrameRate FVar3;
  FFrameTime FVar4;
  FFrameRate *pFVar5;
  FFrameRate *pFVar6;
  FFrameRate *pFVar7;
  FFrameRate local_res10;
  FFrameRate local_res18;
  FFrameRate local_res20;
  uint local_38;
  undefined4 uStack_34;
  undefined1 local_30 [8];
  
  local_res10.Numerator = 0;
  local_res10.Denominator = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res18.Numerator = 60000;
  local_res18.Denominator = 1;
  pFVar7 = &local_res10;
  if ((FFrameRate *)param_2->MostRecentPropertyAddress != (FFrameRate *)0x0) {
    pFVar7 = (FFrameRate *)param_2->MostRecentPropertyAddress;
  }
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
  local_res20.Numerator = 60000;
  local_res20.Denominator = 1;
  pFVar6 = &local_res18;
  if ((FFrameRate *)param_2->MostRecentPropertyAddress != (FFrameRate *)0x0) {
    pFVar6 = (FFrameRate *)param_2->MostRecentPropertyAddress;
  }
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
  pFVar5 = &local_res20;
  if ((FFrameRate *)param_2->MostRecentPropertyAddress != (FFrameRate *)0x0) {
    pFVar5 = (FFrameRate *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar2 = *pFVar5;
  FVar4 = ConvertFrameTime((FFrameTime)local_30,*pFVar7,*pFVar6);
  local_38 = *(uint *)FVar4;
  if (__real_3f000000 < *(float *)((longlong)FVar4 + 4) ||
      __real_3f000000 == *(float *)((longlong)FVar4 + 4)) {
    local_38 = local_38 + 1;
  }
  uStack_34 = 0;
  FVar3.Denominator = 0;
  FVar3.Numerator = local_38;
  ConvertFrameTime((FFrameTime)&local_38,FVar3,FVar2);
  *(ulonglong *)param_3 = CONCAT44(uStack_34,local_38);
  return;
}

// execSubtract_FrameNumberFrameNumber @ 146052a00

void __cdecl
UTimeManagementBlueprintLibrary::execSubtract_FrameNumberFrameNumber
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  int local_res18 [2];
  
  local_res10[0] = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(int *)param_3 = local_res10[0] - local_res18[0];
  return;
}

// execSubtract_FrameNumberInteger @ 146052ad0

void __cdecl
UTimeManagementBlueprintLibrary::execSubtract_FrameNumberInteger
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  int local_res18 [2];
  
  local_res10[0] = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
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
  *(int *)param_3 = local_res10[0] - local_res18[0];
  return;
}

// execTransformTime @ 146052ba0

void __cdecl
UTimeManagementBlueprintLibrary::execTransformTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FFrameRate *pFVar2;
  FFrameRate *pFVar3;
  FFrameRate local_res10;
  FFrameRate local_res18;
  undefined4 local_res20;
  undefined4 uStackX_24;
  undefined8 local_38 [2];
  
  local_res10.Numerator = 0;
  local_res10.Denominator = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res18.Numerator = 60000;
  local_res18.Denominator = 1;
  pFVar3 = &local_res10;
  if ((FFrameRate *)param_2->MostRecentPropertyAddress != (FFrameRate *)0x0) {
    pFVar3 = (FFrameRate *)param_2->MostRecentPropertyAddress;
  }
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
  local_res20 = 60000;
  uStackX_24 = 1;
  pFVar2 = &local_res18;
  if ((FFrameRate *)param_2->MostRecentPropertyAddress != (FFrameRate *)0x0) {
    pFVar2 = (FFrameRate *)param_2->MostRecentPropertyAddress;
  }
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ConvertFrameTime((FFrameTime)local_38,*pFVar3,*pFVar2);
  *(undefined8 *)param_3 = local_38[0];
  return;
}

