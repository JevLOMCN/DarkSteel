// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SequencerScripting
// Functions: 18

// StaticClass @ 14c695ef0

UClass * __cdecl UMovieSceneTimeWarpExtensions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTimeWarpExtensions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneTimeWarpExtensions",
               &Z_Registration_Info_UClass_UMovieSceneTimeWarpExtensions.InnerSingleton,
               StaticRegisterNativesUMovieSceneTimeWarpExtensions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneTimeWarpExtensions>,
               InternalVTableHelperCtorCaller<UMovieSceneTimeWarpExtensions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTimeWarpExtensions.InnerSingleton;
}

// UMovieSceneTimeWarpExtensions @ 14c698c20

UMovieSceneTimeWarpExtensions * __thiscall
UMovieSceneTimeWarpExtensions::UMovieSceneTimeWarpExtensions
          (UMovieSceneTimeWarpExtensions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneTimeWarpExtensions__6B_;
  return this;
}

// UMovieSceneTimeWarpExtensions @ 14c698c50

UMovieSceneTimeWarpExtensions * __thiscall
UMovieSceneTimeWarpExtensions::UMovieSceneTimeWarpExtensions
          (UMovieSceneTimeWarpExtensions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneTimeWarpExtensions__6B_;
  return this;
}

// ~UMovieSceneTimeWarpExtensions @ 14c698fc0

void __thiscall
UMovieSceneTimeWarpExtensions::~UMovieSceneTimeWarpExtensions(UMovieSceneTimeWarpExtensions *this)

{
  *(undefined ***)this = &___7UMovieSceneTimeWarpExtensions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// BreakTimeWarp @ 14c69aa70

void __cdecl
UMovieSceneTimeWarpExtensions::BreakTimeWarp(FMovieSceneTimeWarpVariant *param_1,double *param_2)

{
  uchar uVar1;
  double dVar2;
  
  if (((*(ulonglong *)(param_1->Variant).Data & 0xfff8000000000000) == 0xfff8000000000000) &&
     (uVar1 = FMovieSceneNumericVariant::GetTypeBits(&param_1->Variant), uVar1 != 0xff)) {
    return;
  }
  dVar2 = FMovieSceneTimeWarpVariant::AsFixedPlayRate(param_1);
  *param_2 = dVar2;
  return;
}

// Conv_PlayRateToTimeWarpVariant @ 14c69ac90

FMovieSceneTimeWarpVariant * __cdecl
UMovieSceneTimeWarpExtensions::Conv_PlayRateToTimeWarpVariant
          (FMovieSceneTimeWarpVariant *__return_storage_ptr__,double param_1)

{
  FMovieSceneNumericVariant::FMovieSceneNumericVariant(&__return_storage_ptr__->Variant);
  FMovieSceneTimeWarpVariant::Set(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// Conv_TimeWarpVariantToPlayRate @ 14c69acd0

/* WARNING: Enum "Type": Some values do not have unique names */

double __cdecl
UMovieSceneTimeWarpExtensions::Conv_TimeWarpVariantToPlayRate(FMovieSceneTimeWarpVariant *param_1)

{
  uchar uVar1;
  double dVar2;
  
  if ((*(ulonglong *)(param_1->Variant).Data & 0xfff8000000000000) == 0xfff8000000000000) {
    uVar1 = FMovieSceneNumericVariant::GetTypeBits(&param_1->Variant);
    if (uVar1 != 0xff) {
      FFrame::KismetExecutionMessage
                (L"The specified TimeWarp is not a fixed play rate",Error,(FName)0x0);
      return __real_3ff0000000000000;
    }
  }
  dVar2 = FMovieSceneTimeWarpVariant::AsFixedPlayRate(param_1);
  return dVar2;
}

// GetPrivateStaticClass @ 14c6a2410

UClass * __cdecl UMovieSceneTimeWarpExtensions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTimeWarpExtensions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneTimeWarpExtensions",
               &Z_Registration_Info_UClass_UMovieSceneTimeWarpExtensions.InnerSingleton,
               StaticRegisterNativesUMovieSceneTimeWarpExtensions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneTimeWarpExtensions>,
               InternalVTableHelperCtorCaller<UMovieSceneTimeWarpExtensions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTimeWarpExtensions.InnerSingleton;
}

// MakeTimeWarp @ 14c6a43e0

FMovieSceneTimeWarpVariant * __cdecl
UMovieSceneTimeWarpExtensions::MakeTimeWarp
          (FMovieSceneTimeWarpVariant *__return_storage_ptr__,double param_1)

{
  FMovieSceneNumericVariant::FMovieSceneNumericVariant(&__return_storage_ptr__->Variant);
  FMovieSceneTimeWarpVariant::Set(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// SetFixedPlayRate @ 14c6a5730

void __cdecl
UMovieSceneTimeWarpExtensions::SetFixedPlayRate(FMovieSceneTimeWarpVariant *param_1,double param_2)

{
  uint uVar1;
  uint uVar2;
  FWeakObjectPtr FStackX_18;
  undefined8 uStackX_20;
  
  uVar1 = SUB84(param_2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar2 = (uint)((ulonglong)param_2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  FStackX_18.ObjectIndex = 0;
  FStackX_18.ObjectSerialNumber = 0;
  uStackX_20 = 0;
  if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar2,uVar1) &&
      (double)CONCAT44(uVar2,uVar1) != __real_3e45798ee2308c3a) {
    *(double *)(param_1->Variant).Data = param_2;
  }
  else {
    (param_1->Variant).Data[0] = '\0';
    (param_1->Variant).Data[1] = '\0';
    (param_1->Variant).Data[2] = '\0';
    (param_1->Variant).Data[3] = '\0';
    (param_1->Variant).Data[4] = '\0';
    (param_1->Variant).Data[5] = '\0';
    (param_1->Variant).Data[6] = 0xf9;
    (param_1->Variant).Data[7] = 0xff;
  }
  FWeakObjectPtr::operator=(&FStackX_18,(FObjectPtr)&uStackX_20);
  (param_1->Variant).WeakCustomGetter.WeakPtr = FStackX_18;
  return;
}

// StaticRegisterNativesUMovieSceneTimeWarpExtensions @ 14c6a73e0

void __cdecl UMovieSceneTimeWarpExtensions::StaticRegisterNativesUMovieSceneTimeWarpExtensions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_UMovieSceneTimeWarpExtensions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// ToFixedPlayRate @ 14c6a7460

/* WARNING: Enum "Type": Some values do not have unique names */

double __cdecl UMovieSceneTimeWarpExtensions::ToFixedPlayRate(FMovieSceneTimeWarpVariant *param_1)

{
  uchar uVar1;
  double dVar2;
  
  if ((*(ulonglong *)(param_1->Variant).Data & 0xfff8000000000000) == 0xfff8000000000000) {
    uVar1 = FMovieSceneNumericVariant::GetTypeBits(&param_1->Variant);
    if (uVar1 != 0xff) {
      FFrame::KismetExecutionMessage
                (L"The specified TimeWarp is not a fixed play rate",Error,(FName)0x0);
      return __real_3ff0000000000000;
    }
  }
  dVar2 = FMovieSceneTimeWarpVariant::AsFixedPlayRate(param_1);
  return dVar2;
}

// execBreakTimeWarp @ 14c6aa400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMovieSceneTimeWarpExtensions::execBreakTimeWarp(UObject *param_1,FFrame *param_2,void *param_3)

{
  FMovieSceneNumericVariant *pFVar1;
  FProperty *pFVar2;
  uchar uVar3;
  double *pdVar4;
  FMovieSceneNumericVariant *this;
  double dVar5;
  undefined1 auStack_58 [40];
  double local_30;
  FMovieSceneNumericVariant local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  FMovieSceneNumericVariant::FMovieSceneNumericVariant(&local_28,__real_3ff0000000000000);
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
  pFVar1 = (FMovieSceneNumericVariant *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  this = &local_28;
  if (pFVar1 != (FMovieSceneNumericVariant *)0x0) {
    this = pFVar1;
  }
  local_30 = 0.0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_30,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_30);
  }
  pdVar4 = &local_30;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar4 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((*(ulonglong *)this->Data & 0xfff8000000000000) == 0xfff8000000000000) &&
     (uVar3 = FMovieSceneNumericVariant::GetTypeBits(this), uVar3 != 0xff)) {
    return;
  }
  dVar5 = FMovieSceneTimeWarpVariant::AsFixedPlayRate((FMovieSceneTimeWarpVariant *)this);
  *pdVar4 = dVar5;
  return;
}

// execConv_PlayRateToTimeWarpVariant @ 14c6aa590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMovieSceneTimeWarpExtensions::execConv_PlayRateToTimeWarpVariant
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  undefined1 auStack_58 [32];
  double local_38;
  FMovieSceneNumericVariant local_30;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  local_38 = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  dVar2 = local_38;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FMovieSceneNumericVariant::FMovieSceneNumericVariant(&local_30);
  FMovieSceneTimeWarpVariant::Set((FMovieSceneTimeWarpVariant *)&local_30,dVar2);
  *(uchar (*) [8])param_3 = local_30.Data;
  *(FWeakObjectPtr *)((longlong)param_3 + 8) = local_30.WeakCustomGetter.WeakPtr;
  return;
}

// execConv_TimeWarpVariantToPlayRate @ 14c6aa660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneTimeWarpExtensions::execConv_TimeWarpVariantToPlayRate
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar uVar2;
  FMovieSceneNumericVariant *this;
  double dVar3;
  undefined1 auStack_78 [36];
  undefined8 local_54;
  FMovieSceneNumericVariant local_48;
  ulonglong local_38;
  
  dVar3 = __real_3ff0000000000000;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_78;
  FMovieSceneNumericVariant::FMovieSceneNumericVariant(&local_48,__real_3ff0000000000000);
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
  this = &local_48;
  if ((FMovieSceneNumericVariant *)param_2->MostRecentPropertyAddress !=
      (FMovieSceneNumericVariant *)0x0) {
    this = (FMovieSceneNumericVariant *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((*(ulonglong *)this->Data & 0xfff8000000000000) == 0xfff8000000000000) &&
     (uVar2 = FMovieSceneNumericVariant::GetTypeBits(this), uVar2 != 0xff)) {
    local_54 = 0;
    FFrame::KismetExecutionMessage
              (L"The specified TimeWarp is not a fixed play rate",Error,(FName)0x0);
    *(double *)param_3 = dVar3;
    return;
  }
  dVar3 = FMovieSceneTimeWarpVariant::AsFixedPlayRate((FMovieSceneTimeWarpVariant *)this);
  *(double *)param_3 = dVar3;
  return;
}

// execMakeTimeWarp @ 14c6b44b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMovieSceneTimeWarpExtensions::execMakeTimeWarp(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  undefined1 auStack_58 [32];
  double local_38;
  FMovieSceneNumericVariant local_30;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  local_38 = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  dVar2 = local_38;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FMovieSceneNumericVariant::FMovieSceneNumericVariant(&local_30);
  FMovieSceneTimeWarpVariant::Set((FMovieSceneTimeWarpVariant *)&local_30,dVar2);
  *(uchar (*) [8])param_3 = local_30.Data;
  *(FWeakObjectPtr *)((longlong)param_3 + 8) = local_30.WeakCustomGetter.WeakPtr;
  return;
}

// execSetFixedPlayRate @ 14c6b6760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMovieSceneTimeWarpExtensions::execSetFixedPlayRate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FMovieSceneNumericVariant *this;
  undefined1 auStack_48 [32];
  double local_28;
  FMovieSceneNumericVariant local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  FMovieSceneNumericVariant::FMovieSceneNumericVariant(&local_20,__real_3ff0000000000000);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_20);
  }
  local_28 = 0.0;
  this = &local_20;
  if ((FMovieSceneNumericVariant *)param_2->MostRecentPropertyAddress !=
      (FMovieSceneNumericVariant *)0x0) {
    this = (FMovieSceneNumericVariant *)param_2->MostRecentPropertyAddress;
  }
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FMovieSceneTimeWarpVariant::Set((FMovieSceneTimeWarpVariant *)this,local_28);
  return;
}

// execToFixedPlayRate @ 14c6b9e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneTimeWarpExtensions::execToFixedPlayRate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar uVar2;
  FMovieSceneNumericVariant *this;
  double dVar3;
  undefined1 auStack_78 [36];
  undefined8 local_54;
  FMovieSceneNumericVariant local_48;
  ulonglong local_38;
  
  dVar3 = __real_3ff0000000000000;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_78;
  FMovieSceneNumericVariant::FMovieSceneNumericVariant(&local_48,__real_3ff0000000000000);
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
  this = &local_48;
  if ((FMovieSceneNumericVariant *)param_2->MostRecentPropertyAddress !=
      (FMovieSceneNumericVariant *)0x0) {
    this = (FMovieSceneNumericVariant *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((*(ulonglong *)this->Data & 0xfff8000000000000) == 0xfff8000000000000) &&
     (uVar2 = FMovieSceneNumericVariant::GetTypeBits(this), uVar2 != 0xff)) {
    local_54 = 0;
    FFrame::KismetExecutionMessage
              (L"The specified TimeWarp is not a fixed play rate",Error,(FName)0x0);
    *(double *)param_3 = dVar3;
    return;
  }
  dVar3 = FMovieSceneTimeWarpVariant::AsFixedPlayRate((FMovieSceneTimeWarpVariant *)this);
  *(double *)param_3 = dVar3;
  return;
}

