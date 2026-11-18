// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SequencerScripting
// Functions: 30

// StaticClass @ 14c6ba890

UClass * __cdecl USequencerScriptingRangeExtensions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USequencerScriptingRangeExtensions.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"SequencerScriptingRangeExtensions",
               &Z_Registration_Info_UClass_USequencerScriptingRangeExtensions.InnerSingleton,
               StaticRegisterNativesUSequencerScriptingRangeExtensions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USequencerScriptingRangeExtensions>,
               InternalVTableHelperCtorCaller<USequencerScriptingRangeExtensions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USequencerScriptingRangeExtensions.InnerSingleton;
}

// USequencerScriptingRangeExtensions @ 14c6bb070

USequencerScriptingRangeExtensions * __thiscall
USequencerScriptingRangeExtensions::USequencerScriptingRangeExtensions
          (USequencerScriptingRangeExtensions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7USequencerScriptingRangeExtensions__6B_;
  return this;
}

// USequencerScriptingRangeExtensions @ 14c6bb0a0

USequencerScriptingRangeExtensions * __thiscall
USequencerScriptingRangeExtensions::USequencerScriptingRangeExtensions
          (USequencerScriptingRangeExtensions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7USequencerScriptingRangeExtensions__6B_;
  return this;
}

// ~USequencerScriptingRangeExtensions @ 14c6bb110

void __thiscall
USequencerScriptingRangeExtensions::~USequencerScriptingRangeExtensions
          (USequencerScriptingRangeExtensions *this)

{
  *(undefined ***)this = &___7USequencerScriptingRangeExtensions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetEndFrame @ 14c6bb270

int __cdecl USequencerScriptingRangeExtensions::GetEndFrame(FSequencerScriptingRange *param_1)

{
  return param_1->ExclusiveEnd;
}

// GetEndSeconds @ 14c6bb280

float __cdecl USequencerScriptingRangeExtensions::GetEndSeconds(FSequencerScriptingRange *param_1)

{
  int iVar1;
  
  iVar1 = (param_1->InternalRate).Denominator;
  return ((float)((longlong)param_1->ExclusiveEnd * (longlong)iVar1) + (float)iVar1 * 0.0) /
         (float)(param_1->InternalRate).Numerator;
}

// GetPrivateStaticClass @ 14c6bb4f0

UClass * __cdecl USequencerScriptingRangeExtensions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USequencerScriptingRangeExtensions.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"SequencerScriptingRangeExtensions",
               &Z_Registration_Info_UClass_USequencerScriptingRangeExtensions.InnerSingleton,
               StaticRegisterNativesUSequencerScriptingRangeExtensions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USequencerScriptingRangeExtensions>,
               InternalVTableHelperCtorCaller<USequencerScriptingRangeExtensions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USequencerScriptingRangeExtensions.InnerSingleton;
}

// GetStartFrame @ 14c6bb5b0

int __cdecl USequencerScriptingRangeExtensions::GetStartFrame(FSequencerScriptingRange *param_1)

{
  return param_1->InclusiveStart;
}

// GetStartSeconds @ 14c6bb5c0

float __cdecl USequencerScriptingRangeExtensions::GetStartSeconds(FSequencerScriptingRange *param_1)

{
  int iVar1;
  
  iVar1 = (param_1->InternalRate).Denominator;
  return ((float)((longlong)param_1->InclusiveStart * (longlong)iVar1) + (float)iVar1 * 0.0) /
         (float)(param_1->InternalRate).Numerator;
}

// HasEnd @ 14c6bb630

bool __cdecl USequencerScriptingRangeExtensions::HasEnd(FSequencerScriptingRange *param_1)

{
  return param_1->bHasEnd;
}

// HasStart @ 14c6bb640

bool __cdecl USequencerScriptingRangeExtensions::HasStart(FSequencerScriptingRange *param_1)

{
  return param_1->bHasStart;
}

// RemoveEnd @ 14c6bb680

void __cdecl USequencerScriptingRangeExtensions::RemoveEnd(FSequencerScriptingRange *param_1)

{
  param_1->bHasEnd = '\0';
  param_1->ExclusiveEnd = 0x7fffffff;
  return;
}

// RemoveStart @ 14c6bb6a0

void __cdecl USequencerScriptingRangeExtensions::RemoveStart(FSequencerScriptingRange *param_1)

{
  param_1->bHasStart = '\0';
  param_1->InclusiveStart = -0x80000000;
  return;
}

// SetEndFrame @ 14c6bb6c0

void __cdecl
USequencerScriptingRangeExtensions::SetEndFrame(FSequencerScriptingRange *param_1,int param_2)

{
  param_1->bHasEnd = '\x01';
  param_1->ExclusiveEnd = param_2;
  return;
}

// SetEndSeconds @ 14c6bb6d0

void __cdecl
USequencerScriptingRangeExtensions::SetEndSeconds(FSequencerScriptingRange *param_1,float param_2)

{
  int iVar1;
  double dVar2;
  undefined1 in_XMM2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  float fVar5;
  float fVar6;
  
  param_1->bHasEnd = '\x01';
  dVar4 = ((double)(param_1->InternalRate).Numerator * (double)param_2) /
          (double)(param_1->InternalRate).Denominator;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = dVar4;
  auVar3 = roundpd(in_XMM2,auVar3,1);
  dVar2 = auVar3._0_8_;
  dVar4 = dVar4 - dVar2;
  if (__real_41dfffffffc00000 <= dVar2) {
    dVar2 = __real_41dfffffffc00000;
  }
  if (dVar2 <= __real_c1e0000000000000) {
    dVar2 = __real_c1e0000000000000;
  }
  iVar1 = (int)dVar4;
  fVar5 = (float)dVar4 - (float)iVar1;
  fVar6 = fVar5;
  if ((0.0 < fVar5) && (fVar6 = ::FFrameTime::MaxSubframe, fVar5 <= ::FFrameTime::MaxSubframe)) {
    fVar6 = fVar5;
  }
  fVar5 = ::FFrameTime::MaxSubframe;
  if (fVar6 <= ::FFrameTime::MaxSubframe) {
    fVar5 = fVar6;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  iVar1 = (int)dVar2 + iVar1;
  if (fVar5 != 0.0) {
    iVar1 = iVar1 + 1;
  }
  param_1->ExclusiveEnd = iVar1;
  return;
}

// SetStartFrame @ 14c6bb7d0

void __cdecl
USequencerScriptingRangeExtensions::SetStartFrame(FSequencerScriptingRange *param_1,int param_2)

{
  param_1->bHasStart = '\x01';
  param_1->InclusiveStart = param_2;
  return;
}

// SetStartSeconds @ 14c6bb7e0

void __cdecl
USequencerScriptingRangeExtensions::SetStartSeconds(FSequencerScriptingRange *param_1,float param_2)

{
  double dVar1;
  double dVar2;
  undefined1 in_XMM2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  
  param_1->bHasStart = '\x01';
  dVar4 = ((double)(param_1->InternalRate).Numerator * (double)param_2) /
          (double)(param_1->InternalRate).Denominator;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = dVar4;
  auVar3 = roundpd(in_XMM2,auVar3,1);
  dVar1 = auVar3._0_8_;
  dVar2 = dVar1;
  if (__real_41dfffffffc00000 <= dVar1) {
    dVar2 = __real_41dfffffffc00000;
  }
  if (dVar2 <= __real_c1e0000000000000) {
    dVar2 = __real_c1e0000000000000;
  }
  param_1->InclusiveStart = (int)(dVar4 - dVar1) + (int)dVar2;
  return;
}

// StaticRegisterNativesUSequencerScriptingRangeExtensions @ 14c6bb8c0

void __cdecl
USequencerScriptingRangeExtensions::StaticRegisterNativesUSequencerScriptingRangeExtensions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xc;
  local_18.DataPtr = Z_Construct_UClass_USequencerScriptingRangeExtensions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetEndFrame @ 14c6bbb40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
USequencerScriptingRangeExtensions::execGetEndFrame(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte *pbVar2;
  byte local_28 [4];
  undefined8 local_24;
  undefined8 uStack_1c;
  
  uStack_1c = _UNK_1528a8c88;
  local_24 = ___xmm_000000010000ea600000000000000000;
  local_28[0] = local_28[0] & 0xfc;
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
  pbVar2 = local_28;
  if (param_2->MostRecentPropertyAddress != (byte *)0x0) {
    pbVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)(pbVar2 + 8);
  return;
}

// execGetEndSeconds @ 14c6bbbf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
USequencerScriptingRangeExtensions::execGetEndSeconds
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  byte *pbVar3;
  byte local_28 [4];
  undefined8 local_24;
  undefined8 uStack_1c;
  
  uStack_1c = _UNK_1528a8c88;
  local_24 = ___xmm_000000010000ea600000000000000000;
  local_28[0] = local_28[0] & 0xfc;
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
  pbVar3 = local_28;
  if (param_2->MostRecentPropertyAddress != (byte *)0x0) {
    pbVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = (int)((ulonglong)*(undefined8 *)(pbVar3 + 0xc) >> 0x20);
  *(float *)param_3 =
       ((float)((longlong)*(int *)(pbVar3 + 8) * (longlong)iVar2) + (float)iVar2 * 0.0) /
       (float)(int)*(undefined8 *)(pbVar3 + 0xc);
  return;
}

// execGetStartFrame @ 14c6bbe80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
USequencerScriptingRangeExtensions::execGetStartFrame
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte *pbVar2;
  byte local_28 [4];
  undefined8 local_24;
  undefined8 uStack_1c;
  
  uStack_1c = _UNK_1528a8c88;
  local_24 = ___xmm_000000010000ea600000000000000000;
  local_28[0] = local_28[0] & 0xfc;
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
  pbVar2 = local_28;
  if (param_2->MostRecentPropertyAddress != (byte *)0x0) {
    pbVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)(pbVar2 + 4);
  return;
}

// execGetStartSeconds @ 14c6bbf30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
USequencerScriptingRangeExtensions::execGetStartSeconds
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  byte *pbVar3;
  byte local_28 [4];
  undefined8 local_24;
  undefined8 uStack_1c;
  
  uStack_1c = _UNK_1528a8c88;
  local_24 = ___xmm_000000010000ea600000000000000000;
  local_28[0] = local_28[0] & 0xfc;
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
  pbVar3 = local_28;
  if (param_2->MostRecentPropertyAddress != (byte *)0x0) {
    pbVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = (int)((ulonglong)*(undefined8 *)(pbVar3 + 0xc) >> 0x20);
  *(float *)param_3 =
       ((float)((longlong)*(int *)(pbVar3 + 4) * (longlong)iVar2) + (float)iVar2 * 0.0) /
       (float)(int)*(undefined8 *)(pbVar3 + 0xc);
  return;
}

// execHasEnd @ 14c6bc040

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
USequencerScriptingRangeExtensions::execHasEnd(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte *pbVar2;
  byte local_28 [4];
  undefined8 local_24;
  undefined8 uStack_1c;
  
  uStack_1c = _UNK_1528a8c88;
  local_24 = ___xmm_000000010000ea600000000000000000;
  local_28[0] = local_28[0] & 0xfc;
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
  pbVar2 = local_28;
  if (param_2->MostRecentPropertyAddress != (byte *)0x0) {
    pbVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = *pbVar2 >> 1 & 1;
  return;
}

// execHasStart @ 14c6bc0f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
USequencerScriptingRangeExtensions::execHasStart(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte *pbVar2;
  byte local_28 [4];
  undefined8 local_24;
  undefined8 uStack_1c;
  
  uStack_1c = _UNK_1528a8c88;
  local_24 = ___xmm_000000010000ea600000000000000000;
  local_28[0] = local_28[0] & 0xfc;
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
  pbVar2 = local_28;
  if (param_2->MostRecentPropertyAddress != (byte *)0x0) {
    pbVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = *pbVar2 & 1;
  return;
}

// execRemoveEnd @ 14c6bc1a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
USequencerScriptingRangeExtensions::execRemoveEnd(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte *pbVar2;
  byte local_28 [4];
  undefined8 local_24;
  undefined8 uStack_1c;
  
  uStack_1c = _UNK_1528a8c88;
  local_24 = ___xmm_000000010000ea600000000000000000;
  local_28[0] = local_28[0] & 0xfc;
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
  pbVar2 = local_28;
  if (param_2->MostRecentPropertyAddress != (byte *)0x0) {
    pbVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *pbVar2 = *pbVar2 & 0xfd;
  pbVar2[8] = 0xff;
  pbVar2[9] = 0xff;
  pbVar2[10] = 0xff;
  pbVar2[0xb] = 0x7f;
  return;
}

// execRemoveStart @ 14c6bc240

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
USequencerScriptingRangeExtensions::execRemoveStart(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte *pbVar2;
  byte local_28 [4];
  undefined8 local_24;
  undefined8 uStack_1c;
  
  uStack_1c = _UNK_1528a8c88;
  local_24 = ___xmm_000000010000ea600000000000000000;
  local_28[0] = local_28[0] & 0xfc;
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
  pbVar2 = local_28;
  if (param_2->MostRecentPropertyAddress != (byte *)0x0) {
    pbVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *pbVar2 = *pbVar2 & 0xfe;
  pbVar2[4] = 0;
  pbVar2[5] = 0;
  pbVar2[6] = 0;
  pbVar2[7] = 0x80;
  return;
}

// execSetEndFrame @ 14c6bc2e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
USequencerScriptingRangeExtensions::execSetEndFrame(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte *pbVar2;
  undefined4 local_res10 [2];
  byte local_28 [4];
  undefined8 local_24;
  undefined8 uStack_1c;
  
  uStack_1c = _UNK_1528a8c88;
  local_24 = ___xmm_000000010000ea600000000000000000;
  local_28[0] = local_28[0] & 0xfc;
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
  local_res10[0] = 0;
  pbVar2 = local_28;
  if (param_2->MostRecentPropertyAddress != (byte *)0x0) {
    pbVar2 = param_2->MostRecentPropertyAddress;
  }
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
  *pbVar2 = *pbVar2 | 2;
  *(undefined4 *)(pbVar2 + 8) = local_res10[0];
  return;
}

// execSetEndSeconds @ 14c6bc3d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
USequencerScriptingRangeExtensions::execSetEndSeconds
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  byte *pbVar3;
  double dVar4;
  undefined1 in_XMM2 [16];
  undefined1 auVar5 [16];
  double dVar6;
  float fVar7;
  float fVar8;
  float local_res10 [2];
  byte local_38 [4];
  undefined8 local_34;
  undefined8 uStack_2c;
  
  local_38[0] = local_38[0] & 0xfc;
  local_34 = ___xmm_000000010000ea600000000000000000;
  uStack_2c = _UNK_1528a8c88;
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
  local_res10[0] = 0.0;
  pbVar3 = local_38;
  if (param_2->MostRecentPropertyAddress != (byte *)0x0) {
    pbVar3 = param_2->MostRecentPropertyAddress;
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *pbVar3 = *pbVar3 | 2;
  dVar6 = ((double)(int)*(undefined8 *)(pbVar3 + 0xc) * (double)local_res10[0]) /
          (double)(int)((ulonglong)*(undefined8 *)(pbVar3 + 0xc) >> 0x20);
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
  iVar2 = (int)dVar4 + iVar2;
  if (fVar7 != 0.0) {
    iVar2 = iVar2 + 1;
  }
  *(int *)(pbVar3 + 8) = iVar2;
  return;
}

// execSetStartFrame @ 14c6bc730

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
USequencerScriptingRangeExtensions::execSetStartFrame
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte *pbVar2;
  undefined4 local_res10 [2];
  byte local_28 [4];
  undefined8 local_24;
  undefined8 uStack_1c;
  
  uStack_1c = _UNK_1528a8c88;
  local_24 = ___xmm_000000010000ea600000000000000000;
  local_28[0] = local_28[0] & 0xfc;
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
  local_res10[0] = 0;
  pbVar2 = local_28;
  if (param_2->MostRecentPropertyAddress != (byte *)0x0) {
    pbVar2 = param_2->MostRecentPropertyAddress;
  }
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
  *pbVar2 = *pbVar2 | 1;
  *(undefined4 *)(pbVar2 + 4) = local_res10[0];
  return;
}

// execSetStartSeconds @ 14c6bc820

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
USequencerScriptingRangeExtensions::execSetStartSeconds
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte *pbVar2;
  double dVar3;
  double dVar4;
  undefined1 in_XMM2 [16];
  undefined1 auVar5 [16];
  double dVar6;
  float local_res10 [2];
  byte local_28 [4];
  undefined8 local_24;
  undefined8 uStack_1c;
  
  uStack_1c = _UNK_1528a8c88;
  local_24 = ___xmm_000000010000ea600000000000000000;
  local_28[0] = local_28[0] & 0xfc;
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
  pbVar2 = local_28;
  if (param_2->MostRecentPropertyAddress != (byte *)0x0) {
    pbVar2 = param_2->MostRecentPropertyAddress;
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *pbVar2 = *pbVar2 | 1;
  dVar6 = ((double)(int)*(undefined8 *)(pbVar2 + 0xc) * (double)local_res10[0]) /
          (double)(int)((ulonglong)*(undefined8 *)(pbVar2 + 0xc) >> 0x20);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar6;
  auVar5 = roundpd(in_XMM2,auVar5,1);
  dVar3 = auVar5._0_8_;
  dVar4 = dVar3;
  if (__real_41dfffffffc00000 <= dVar3) {
    dVar4 = __real_41dfffffffc00000;
  }
  if (dVar4 <= __real_c1e0000000000000) {
    dVar4 = __real_c1e0000000000000;
  }
  *(int *)(pbVar2 + 4) = (int)(dVar6 - dVar3) + (int)dVar4;
  return;
}

