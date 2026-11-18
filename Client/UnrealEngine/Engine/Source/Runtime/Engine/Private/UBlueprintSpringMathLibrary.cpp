// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 48

// StaticClass @ 147258b10

UClass * __cdecl UBlueprintSpringMathLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintSpringMathLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BlueprintSpringMathLibrary",
               &Z_Registration_Info_UClass_UBlueprintSpringMathLibrary.InnerSingleton,
               StaticRegisterNativesUBlueprintSpringMathLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UBlueprintSpringMathLibrary>,
               InternalVTableHelperCtorCaller<UBlueprintSpringMathLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintSpringMathLibrary.InnerSingleton;
}

// UBlueprintSpringMathLibrary @ 14725d450

UBlueprintSpringMathLibrary * __thiscall
UBlueprintSpringMathLibrary::UBlueprintSpringMathLibrary
          (UBlueprintSpringMathLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UBlueprintSpringMathLibrary__6B_;
  return this;
}

// UBlueprintSpringMathLibrary @ 14725d480

UBlueprintSpringMathLibrary * __thiscall
UBlueprintSpringMathLibrary::UBlueprintSpringMathLibrary
          (UBlueprintSpringMathLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UBlueprintSpringMathLibrary__6B_;
  return this;
}

// ~UBlueprintSpringMathLibrary @ 14725df90

void __thiscall
UBlueprintSpringMathLibrary::~UBlueprintSpringMathLibrary(UBlueprintSpringMathLibrary *this)

{
  *(undefined ***)this = &___7UBlueprintSpringMathLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetPrivateStaticClass @ 147260b20

UClass * __cdecl UBlueprintSpringMathLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintSpringMathLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BlueprintSpringMathLibrary",
               &Z_Registration_Info_UClass_UBlueprintSpringMathLibrary.InnerSingleton,
               StaticRegisterNativesUBlueprintSpringMathLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UBlueprintSpringMathLibrary>,
               InternalVTableHelperCtorCaller<UBlueprintSpringMathLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintSpringMathLibrary.InnerSingleton;
}

// StaticRegisterNativesUBlueprintSpringMathLibrary @ 147260fc0

void __cdecl UBlueprintSpringMathLibrary::StaticRegisterNativesUBlueprintSpringMathLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x15;
  local_18.DataPtr = Z_Construct_UClass_UBlueprintSpringMathLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execConvertHalfLifeToSmoothingTime @ 147262e10

void __cdecl
UBlueprintSpringMathLibrary::execConvertHalfLifeToSmoothingTime
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float local_res10 [6];
  
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
  fVar2 = ConvertHalfLifeToSmoothingTime(local_res10[0]);
  *(float *)param_3 = fVar2;
  return;
}

// execConvertSmoothingTimeToHalfLife @ 147262ea0

void __cdecl
UBlueprintSpringMathLibrary::execConvertSmoothingTimeToHalfLife
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float local_res10 [6];
  
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
  fVar2 = ConvertSmoothingTimeToHalfLife(local_res10[0]);
  *(float *)param_3 = fVar2;
  return;
}

// execConvertSmoothingTimeToStrength @ 147262f30

void __cdecl
UBlueprintSpringMathLibrary::execConvertSmoothingTimeToStrength
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float local_res10 [6];
  
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
  fVar2 = ConvertSmoothingTimeToStrength(local_res10[0]);
  *(float *)param_3 = fVar2;
  return;
}

// execConvertStrengthToSmoothingTime @ 147262fc0

void __cdecl
UBlueprintSpringMathLibrary::execConvertStrengthToSmoothingTime
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float local_res10 [6];
  
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
  fVar2 = ConvertStrengthToSmoothingTime(local_res10[0]);
  *(float *)param_3 = fVar2;
  return;
}

// execCriticalSpringDampAngle @ 147263050

void __cdecl
UBlueprintSpringMathLibrary::execCriticalSpringDampAngle
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float local_res10 [2];
  float local_res20 [2];
  float local_28;
  float local_24;
  float local_20 [2];
  
  local_res10[0] = 0.0;
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
  pfVar3 = (float *)param_2->MostRecentPropertyAddress;
  local_res20[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pfVar4 = local_res10;
  if (pfVar3 != (float *)0x0) {
    pfVar4 = pfVar3;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  pfVar3 = (float *)param_2->MostRecentPropertyAddress;
  local_28 = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pfVar2 = local_res20;
  if (pfVar3 != (float *)0x0) {
    pfVar2 = pfVar3;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_20[0] = 0.0;
  pfVar3 = &local_28;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar3 = (float *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_20);
  }
  local_24 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_24,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_24);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  CriticalSpringDampAngle(pfVar4,pfVar2,pfVar3,local_20[0],local_24);
  return;
}

// execCriticalSpringDampFloat @ 147263230

void __cdecl
UBlueprintSpringMathLibrary::execCriticalSpringDampFloat
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float local_res10 [2];
  float local_res20 [2];
  float local_28;
  float local_24;
  float local_20 [2];
  
  local_res10[0] = 0.0;
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
  pfVar3 = (float *)param_2->MostRecentPropertyAddress;
  local_res20[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pfVar4 = local_res10;
  if (pfVar3 != (float *)0x0) {
    pfVar4 = pfVar3;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  pfVar3 = (float *)param_2->MostRecentPropertyAddress;
  local_28 = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pfVar2 = local_res20;
  if (pfVar3 != (float *)0x0) {
    pfVar2 = pfVar3;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_20[0] = 0.0;
  pfVar3 = &local_28;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar3 = (float *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_20);
  }
  local_24 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_24,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_24);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  CriticalSpringDampFloat(pfVar4,pfVar2,pfVar3,local_20[0],local_24);
  return;
}

// execCriticalSpringDampQuat @ 147263410

void __cdecl
UBlueprintSpringMathLibrary::execCriticalSpringDampQuat
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TVector<double> *pTVar1;
  FProperty *pFVar2;
  TVector<double> *pTVar3;
  TQuat<double> *pTVar4;
  TQuat<double> *pTVar5;
  float local_res10 [2];
  float local_res20 [2];
  TVector<double> local_78;
  TQuat<double> local_58;
  TQuat<double> local_38;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  pTVar4 = (TQuat<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar5 = &local_58;
  if (pTVar4 != (TQuat<double> *)0x0) {
    pTVar5 = pTVar4;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pTVar1 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar3 = &local_78;
  if (pTVar1 != (TVector<double> *)0x0) {
    pTVar3 = pTVar1;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res20[0] = 0.0;
  pTVar4 = &local_38;
  if ((TQuat<double> *)param_2->MostRecentPropertyAddress != (TQuat<double> *)0x0) {
    pTVar4 = (TQuat<double> *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  CriticalSpringDampQuat(pTVar5,pTVar3,pTVar4,local_res20[0],local_res10[0]);
  return;
}

// execCriticalSpringDampRotator @ 147263600

void __cdecl
UBlueprintSpringMathLibrary::execCriticalSpringDampRotator
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TVector<double> *pTVar1;
  FProperty *pFVar2;
  TVector<double> *pTVar3;
  TRotator<double> *pTVar4;
  TRotator<double> *pTVar5;
  float local_res10 [2];
  float local_res20 [2];
  TRotator<double> local_68;
  TVector<double> local_50;
  TRotator<double> local_38;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  pTVar4 = (TRotator<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar5 = &local_68;
  if (pTVar4 != (TRotator<double> *)0x0) {
    pTVar5 = pTVar4;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  pTVar1 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar3 = &local_50;
  if (pTVar1 != (TVector<double> *)0x0) {
    pTVar3 = pTVar1;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res20[0] = 0.0;
  pTVar4 = &local_38;
  if ((TRotator<double> *)param_2->MostRecentPropertyAddress != (TRotator<double> *)0x0) {
    pTVar4 = (TRotator<double> *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  CriticalSpringDampRotator(pTVar5,pTVar3,pTVar4,local_res20[0],local_res10[0]);
  return;
}

// execCriticalSpringDampVector2D @ 1472637f0

void __cdecl
UBlueprintSpringMathLibrary::execCriticalSpringDampVector2D
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector2<double> *pTVar2;
  TVector2<double> *pTVar3;
  TVector2<double> *pTVar4;
  float local_res10 [2];
  float local_res20 [2];
  TVector2<double> local_48;
  TVector2<double> local_38;
  TVector2<double> local_28;
  
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
  pTVar3 = (TVector2<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar4 = &local_48;
  if (pTVar3 != (TVector2<double> *)0x0) {
    pTVar4 = pTVar3;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pTVar3 = (TVector2<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar2 = &local_38;
  if (pTVar3 != (TVector2<double> *)0x0) {
    pTVar2 = pTVar3;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res20[0] = 0.0;
  pTVar3 = &local_28;
  if ((TVector2<double> *)param_2->MostRecentPropertyAddress != (TVector2<double> *)0x0) {
    pTVar3 = (TVector2<double> *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  CriticalSpringDampVector2D(pTVar4,pTVar2,pTVar3,local_res20[0],local_res10[0]);
  return;
}

// execCriticalSpringDampVector @ 1472639d0

void __cdecl
UBlueprintSpringMathLibrary::execCriticalSpringDampVector
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector<double> *pTVar2;
  TVector<double> *pTVar3;
  TVector<double> *pTVar4;
  float local_res10 [2];
  float local_res20 [2];
  TVector<double> local_68;
  TVector<double> local_50;
  TVector<double> local_38;
  
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
  pTVar3 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar4 = &local_68;
  if (pTVar3 != (TVector<double> *)0x0) {
    pTVar4 = pTVar3;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  pTVar3 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar2 = &local_50;
  if (pTVar3 != (TVector<double> *)0x0) {
    pTVar2 = pTVar3;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res20[0] = 0.0;
  pTVar3 = &local_38;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar3 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  CriticalSpringDampVector(pTVar4,pTVar2,pTVar3,local_res20[0],local_res10[0]);
  return;
}

// execDampAngle @ 147263bc0

void __cdecl
UBlueprintSpringMathLibrary::execDampAngle(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  float local_18 [4];
  
  local_18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar2 = DampAngle(local_18[0],local_res20[0],local_res18[0],local_res10[0]);
  *(float *)param_3 = fVar2;
  return;
}

// execDampFloat @ 147263d30

void __cdecl
UBlueprintSpringMathLibrary::execDampFloat(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  float local_18 [4];
  
  local_18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar2 = DampFloat(local_18[0],local_res20[0],local_res18[0],local_res10[0]);
  *(float *)param_3 = fVar2;
  return;
}

// execDampQuat @ 147263ea0

void __cdecl
UBlueprintSpringMathLibrary::execDampQuat(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  TQuat<double> *pTVar3;
  TQuat<double> *pTVar4;
  float local_res10 [2];
  float local_res18 [2];
  TQuat<double> local_78;
  TQuat<double> local_58;
  TQuat<double> local_38;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pTVar3 = (TQuat<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar4 = &local_78;
  if (pTVar3 != (TQuat<double> *)0x0) {
    pTVar4 = pTVar3;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res18[0] = 0.0;
  pTVar3 = &local_58;
  if ((TQuat<double> *)param_2->MostRecentPropertyAddress != (TQuat<double> *)0x0) {
    pTVar3 = (TQuat<double> *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar3 = DampQuat(&local_38,pTVar4,pTVar3,local_res18[0],local_res10[0]);
  dVar2 = pTVar3->Y;
  *(double *)param_3 = pTVar3->X;
  *(double *)((longlong)param_3 + 8) = dVar2;
  dVar2 = pTVar3->W;
  *(double *)((longlong)param_3 + 0x10) = pTVar3->Z;
  *(double *)((longlong)param_3 + 0x18) = dVar2;
  return;
}

// execDampRotator @ 147264050

void __cdecl
UBlueprintSpringMathLibrary::execDampRotator(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  TRotator<double> *pTVar3;
  TRotator<double> *pTVar4;
  float local_res10 [2];
  float local_res18 [2];
  TRotator<double> local_68;
  TRotator<double> local_50;
  TRotator<double> local_38;
  
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
  pTVar3 = (TRotator<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar4 = &local_68;
  if (pTVar3 != (TRotator<double> *)0x0) {
    pTVar4 = pTVar3;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  local_res18[0] = 0.0;
  pTVar3 = &local_50;
  if ((TRotator<double> *)param_2->MostRecentPropertyAddress != (TRotator<double> *)0x0) {
    pTVar3 = (TRotator<double> *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar3 = DampRotator(&local_38,pTVar4,pTVar3,local_res18[0],local_res10[0]);
  dVar2 = pTVar3->Yaw;
  *(double *)param_3 = pTVar3->Pitch;
  *(double *)((longlong)param_3 + 8) = dVar2;
  *(double *)((longlong)param_3 + 0x10) = pTVar3->Roll;
  return;
}

// execDampVector2D @ 147264200

void __cdecl
UBlueprintSpringMathLibrary::execDampVector2D(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  TVector2<double> *pTVar3;
  TVector2<double> *pTVar4;
  float local_res10 [2];
  float local_res18 [2];
  TVector2<double> local_48;
  TVector2<double> local_38;
  TVector2<double> local_28;
  
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
  pTVar3 = (TVector2<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar4 = &local_48;
  if (pTVar3 != (TVector2<double> *)0x0) {
    pTVar4 = pTVar3;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res18[0] = 0.0;
  pTVar3 = &local_38;
  if ((TVector2<double> *)param_2->MostRecentPropertyAddress != (TVector2<double> *)0x0) {
    pTVar3 = (TVector2<double> *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar3 = DampVector2D(&local_28,pTVar4,pTVar3,local_res18[0],local_res10[0]);
  dVar2 = (pTVar3->field0_0x0)._s_0.Y;
  *(double *)param_3 = (pTVar3->field0_0x0)._s_0.X;
  *(double *)((longlong)param_3 + 8) = dVar2;
  return;
}

// execDampVector @ 1472643a0

void __cdecl
UBlueprintSpringMathLibrary::execDampVector(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  TVector<double> *pTVar3;
  TVector<double> *pTVar4;
  float local_res10 [2];
  float local_res18 [2];
  TVector<double> local_68;
  TVector<double> local_50;
  TVector<double> local_38;
  
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
  pTVar3 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar4 = &local_68;
  if (pTVar3 != (TVector<double> *)0x0) {
    pTVar4 = pTVar3;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  local_res18[0] = 0.0;
  pTVar3 = &local_50;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar3 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar3 = DampVector(&local_38,pTVar4,pTVar3,local_res18[0],local_res10[0]);
  dVar2 = (pTVar3->field0_0x0)._s_0.Y;
  *(double *)param_3 = (pTVar3->field0_0x0)._s_0.X;
  *(double *)((longlong)param_3 + 8) = dVar2;
  *(double *)((longlong)param_3 + 0x10) = (pTVar3->field0_0x0)._s_0.Z;
  return;
}

// execSpringCharacterUpdate @ 147264620

void __cdecl
UBlueprintSpringMathLibrary::execSpringCharacterUpdate
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector<double> *pTVar2;
  TVector<double> *pTVar3;
  TVector<double> *pTVar4;
  TVector<double> *pTVar5;
  float local_res10 [4];
  float local_res20 [2];
  TVector<double> local_88;
  TVector<double> local_70;
  TVector<double> local_58;
  TVector<double> local_40;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pTVar3 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar5 = &local_88;
  if (pTVar3 != (TVector<double> *)0x0) {
    pTVar5 = pTVar3;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  pTVar3 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar4 = &local_70;
  if (pTVar3 != (TVector<double> *)0x0) {
    pTVar4 = pTVar3;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  pTVar3 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar2 = &local_58;
  if (pTVar3 != (TVector<double> *)0x0) {
    pTVar2 = pTVar3;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  local_res20[0] = 0.0;
  pTVar3 = &local_40;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar3 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SpringCharacterUpdate(pTVar5,pTVar4,pTVar2,pTVar3,local_res20[0],local_res10[0]);
  return;
}

// execVelocitySpringCharacterUpdate @ 147264860

void __cdecl
UBlueprintSpringMathLibrary::execVelocitySpringCharacterUpdate
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector<double> *pTVar2;
  TVector<double> *pTVar3;
  TVector<double> *pTVar4;
  TVector<double> *pTVar5;
  TVector<double> *pTVar6;
  float local_res10 [4];
  float local_res20 [2];
  float local_b8 [2];
  TVector<double> local_b0;
  TVector<double> local_98;
  TVector<double> local_80;
  TVector<double> local_68;
  TVector<double> local_50;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  pTVar2 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar4 = &local_b0;
  if (pTVar2 != (TVector<double> *)0x0) {
    pTVar4 = pTVar2;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  pTVar2 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar3 = &local_98;
  if (pTVar2 != (TVector<double> *)0x0) {
    pTVar3 = pTVar2;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  pTVar2 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar6 = &local_80;
  if (pTVar2 != (TVector<double> *)0x0) {
    pTVar6 = pTVar2;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  pTVar2 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar5 = &local_68;
  if (pTVar2 != (TVector<double> *)0x0) {
    pTVar5 = pTVar2;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  local_b8[0] = 0.0;
  pTVar2 = &local_50;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar2 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_b8);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  VelocitySpringCharacterUpdate
            (pTVar4,pTVar3,pTVar6,pTVar5,pTVar2,local_b8[0],local_res20[0],local_res10[0]);
  return;
}

// execVelocitySpringDampFloat @ 147264b10

void __cdecl
UBlueprintSpringMathLibrary::execVelocitySpringDampFloat
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float local_res10 [4];
  float local_res20 [2];
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38 [4];
  
  local_res10[0] = 0.0;
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
  pfVar2 = (float *)param_2->MostRecentPropertyAddress;
  local_res20[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pfVar4 = local_res10;
  if (pfVar2 != (float *)0x0) {
    pfVar4 = pfVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  pfVar2 = (float *)param_2->MostRecentPropertyAddress;
  local_48 = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pfVar3 = local_res20;
  if (pfVar2 != (float *)0x0) {
    pfVar3 = pfVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_38[0] = 0.0;
  pfVar2 = &local_48;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar2 = (float *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_3c = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_3c,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_3c);
  }
  local_40 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  local_44 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_44,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_44);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  VelocitySpringDampFloat(pfVar4,pfVar3,pfVar2,local_38[0],local_3c,local_40,local_44);
  return;
}

// execVelocitySpringDampVector2D @ 147264d60

void __cdecl
UBlueprintSpringMathLibrary::execVelocitySpringDampVector2D
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector2<double> *pTVar2;
  TVector2<double> *pTVar3;
  TVector2<double> *pTVar4;
  TVector2<double> *pTVar5;
  float local_res10 [2];
  float local_res20 [2];
  float local_78 [2];
  TVector2<double> local_70;
  TVector2<double> local_60;
  TVector2<double> local_50;
  TVector2<double> local_40;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  pTVar2 = (TVector2<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar3 = &local_70;
  if (pTVar2 != (TVector2<double> *)0x0) {
    pTVar3 = pTVar2;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  pTVar2 = (TVector2<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar5 = &local_60;
  if (pTVar2 != (TVector2<double> *)0x0) {
    pTVar5 = pTVar2;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  pTVar2 = (TVector2<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar4 = &local_50;
  if (pTVar2 != (TVector2<double> *)0x0) {
    pTVar4 = pTVar2;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  local_78[0] = 0.0;
  pTVar2 = &local_40;
  if ((TVector2<double> *)param_2->MostRecentPropertyAddress != (TVector2<double> *)0x0) {
    pTVar2 = (TVector2<double> *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  VelocitySpringDampVector2D(pTVar3,pTVar5,pTVar4,pTVar2,local_78[0],local_res20[0],local_res10[0]);
  return;
}

// execVelocitySpringDampVector @ 147264fd0

void __cdecl
UBlueprintSpringMathLibrary::execVelocitySpringDampVector
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector<double> *pTVar2;
  TVector<double> *pTVar3;
  TVector<double> *pTVar4;
  TVector<double> *pTVar5;
  float local_res10 [2];
  float local_res20 [2];
  float local_98 [2];
  TVector<double> local_90;
  TVector<double> local_78;
  TVector<double> local_60;
  TVector<double> local_48;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  pTVar2 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar3 = &local_90;
  if (pTVar2 != (TVector<double> *)0x0) {
    pTVar3 = pTVar2;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pTVar2 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar5 = &local_78;
  if (pTVar2 != (TVector<double> *)0x0) {
    pTVar5 = pTVar2;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  pTVar2 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar4 = &local_60;
  if (pTVar2 != (TVector<double> *)0x0) {
    pTVar4 = pTVar2;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_98[0] = 0.0;
  pTVar2 = &local_48;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar2 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  VelocitySpringDampVector(pTVar3,pTVar5,pTVar4,pTVar2,local_98[0],local_res20[0],local_res10[0]);
  return;
}

// ConvertHalfLifeToSmoothingTime @ 1476990c0

float __cdecl UBlueprintSpringMathLibrary::ConvertHalfLifeToSmoothingTime(float param_1)

{
  return param_1 * __real_3fb8aa3b;
}

// ConvertSmoothingTimeToHalfLife @ 1476990d0

float __cdecl UBlueprintSpringMathLibrary::ConvertSmoothingTimeToHalfLife(float param_1)

{
  return param_1 * __real_3f317218;
}

// ConvertSmoothingTimeToStrength @ 1476990e0

float __cdecl UBlueprintSpringMathLibrary::ConvertSmoothingTimeToStrength(float param_1)

{
  if (param_1 <= __real_38d1b717) {
    param_1 = __real_38d1b717;
  }
  return __real_40000000 / param_1;
}

// ConvertStrengthToSmoothingTime @ 147699100

float __cdecl UBlueprintSpringMathLibrary::ConvertStrengthToSmoothingTime(float param_1)

{
  if (param_1 <= __real_38d1b717) {
    param_1 = __real_38d1b717;
  }
  return __real_40000000 / param_1;
}

// CriticalSpringDampAngle @ 14769af00

void __cdecl
UBlueprintSpringMathLibrary::CriticalSpringDampAngle
          (float *param_1,float *param_2,float *param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (param_5 <= __real_38d1b717) {
    param_5 = __real_38d1b717;
  }
  fVar4 = *param_3 * __real_3c8efa35;
  fVar5 = __real_40000000 / param_5;
  fVar6 = *param_2 * __real_3c8efa35;
  fVar1 = FMath::FindDeltaAngleRadians<float,float>(fVar4,*param_1 * __real_3c8efa35);
  fVar2 = fVar5 * param_4;
  fVar3 = fVar5 * fVar1 + fVar6;
  fVar2 = __real_3f800000 /
          (((fVar2 * __real_3e83b5ca + __real_3ee6ad0d) * fVar2 + __real_3f80f478) * fVar2 +
          __real_3f800000);
  fVar5 = (fVar6 - fVar3 * fVar5 * param_4) * fVar2 * __real_42652ee0;
  *param_1 = ((fVar3 * param_4 + fVar1) * fVar2 + fVar4) * __real_42652ee0;
  *param_2 = fVar5;
  return;
}

// CriticalSpringDampFloat @ 14769b030

void __cdecl
UBlueprintSpringMathLibrary::CriticalSpringDampFloat
          (float *param_1,float *param_2,float *param_3,float param_4,float param_5)

{
  SpringMath::CriticalSpringDamper<float>(param_1,param_2,*param_3,param_5,param_4);
  return;
}

// CriticalSpringDampQuat @ 14769b060

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UBlueprintSpringMathLibrary::CriticalSpringDampQuat
          (TQuat<double> *param_1,TVector<double> *param_2,TQuat<double> *param_3,float param_4,
          float param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  TVector<double>_u_0 local_28;
  
  local_28._s_0.X = ___xmm_3f91df46a00000003f91df46a0000000 * (param_2->field0_0x0)._s_0.X;
  local_28._s_0.Y = _UNK_150689668 * (param_2->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_2->field0_0x0)._s_0.Z * __real_3f91df46a0000000;
  SpringMath::CriticalSpringDamperQuat
            (param_1,(TVector<double> *)&local_28._s_0,param_3,param_5,param_4);
  dVar2 = local_28._s_0.Z * ___xmm_404ca5dc00000000404ca5dc00000000;
  auVar1._8_4_ = SUB84(local_28._s_0.Y * _UNK_1506896a8,0);
  auVar1._0_8_ = local_28._s_0.X * ___xmm_404ca5dc00000000404ca5dc00000000;
  auVar1._12_4_ = (int)((ulonglong)(local_28._s_0.Y * _UNK_1506896a8) >> 0x20);
  *(undefined1 (*) [16])&param_2->field0_0x0 = auVar1;
  (param_2->field0_0x0)._s_0.Z = dVar2;
  return;
}

// CriticalSpringDampRotator @ 14769b0e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UBlueprintSpringMathLibrary::CriticalSpringDampRotator
          (TRotator<double> *param_1,TVector<double> *param_2,TRotator<double> *param_3,
          float param_4,float param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  TQuat<double> *pTVar5;
  TRotator<double> *pTVar6;
  TVector<double>_u_0 local_78;
  TQuat<double> local_58;
  TQuat<double> local_38;
  
  UE::Math::TRotator<double>::Quaternion(param_1,&local_38);
  local_78._s_0.X = ___xmm_3f91df46a00000003f91df46a0000000 * (param_2->field0_0x0)._s_0.X;
  local_78._s_0.Y = _UNK_150689668 * (param_2->field0_0x0)._s_0.Y;
  local_78._s_0.Z = (param_2->field0_0x0)._s_0.Z * __real_3f91df46a0000000;
  pTVar5 = UE::Math::TRotator<double>::Quaternion(param_3,&local_58);
  SpringMath::CriticalSpringDamperQuat
            (&local_38,(TVector<double> *)&local_78._s_0,pTVar5,param_5,param_4);
  pTVar6 = UE::Math::TQuat<double>::Rotator(&local_38,(TRotator<double> *)&local_58);
  dVar4 = _UNK_1506896a8;
  dVar3 = ___xmm_404ca5dc00000000404ca5dc00000000;
  dVar2 = pTVar6->Yaw;
  param_1->Pitch = pTVar6->Pitch;
  param_1->Yaw = dVar2;
  param_1->Roll = pTVar6->Roll;
  auVar1._8_4_ = SUB84(local_78._s_0.Y * dVar4,0);
  auVar1._0_8_ = local_78._s_0.X * dVar3;
  auVar1._12_4_ = (int)((ulonglong)(local_78._s_0.Y * dVar4) >> 0x20);
  *(undefined1 (*) [16])&param_2->field0_0x0 = auVar1;
  (param_2->field0_0x0)._s_0.Z = local_78._s_0.Z * dVar3;
  return;
}

// CriticalSpringDampVector2D @ 14769b1d0

void __cdecl
UBlueprintSpringMathLibrary::CriticalSpringDampVector2D
          (TVector2<double> *param_1,TVector2<double> *param_2,TVector2<double> *param_3,
          float param_4,float param_5)

{
  TVector2<double>_u_0 local_18;
  
  local_18._s_0.X = (param_3->field0_0x0)._s_0.X;
  local_18._s_0.Y = (param_3->field0_0x0)._s_0.Y;
  SpringMath::CriticalSpringDamper<UE::Math::TVector2<double>_>
            (param_1,param_2,(TVector2<double> *)&local_18._s_0,param_5,param_4);
  return;
}

// CriticalSpringDampVector @ 14769b200

void __cdecl
UBlueprintSpringMathLibrary::CriticalSpringDampVector
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,float param_4,
          float param_5)

{
  TVector<double>_u_0 local_28;
  
  local_28._s_0.X = (param_3->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_3->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  SpringMath::CriticalSpringDamper<UE::Math::TVector<double>_>
            (param_1,param_2,(TVector<double> *)&local_28._s_0,param_5,param_4);
  return;
}

// DampAngle @ 14769b6d0

float __cdecl
UBlueprintSpringMathLibrary::DampAngle(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2 * __real_3c8efa35;
  fVar2 = param_1 * __real_3c8efa35;
  if (__real_38d1b717 < param_4) {
    fVar3 = param_3 / param_4;
    fVar1 = FMath::FindDeltaAngleRadians<float,float>(fVar2,fVar1);
    fVar1 = fVar2 + fVar1 * (__real_3f800000 -
                            __real_3f800000 /
                            ((fVar3 * __real_3e83b5ca * fVar3 + __real_3f80f478 +
                             fVar3 * __real_3ee6ad0d) * fVar3 + __real_3f800000));
  }
  return fVar1 * __real_42652ee0;
}

// DampFloat @ 14769b780

float __cdecl
UBlueprintSpringMathLibrary::DampFloat(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  
  if (__real_38d1b717 < param_4) {
    fVar1 = param_3 / param_4;
    return (param_1 - param_2) /
           ((fVar1 * __real_3e83b5ca * fVar1 + __real_3f80f478 + fVar1 * __real_3ee6ad0d) * fVar1 +
           __real_3f800000) + param_2;
  }
  return param_2;
}

// DampQuat @ 14769b7e0

TQuat<double> * __cdecl
UBlueprintSpringMathLibrary::DampQuat
          (TQuat<double> *__return_storage_ptr__,TQuat<double> *param_1,TQuat<double> *param_2,
          float param_3,float param_4)

{
  double dVar1;
  
  dVar1 = param_1->Y;
  __return_storage_ptr__->X = param_1->X;
  __return_storage_ptr__->Y = dVar1;
  dVar1 = param_1->W;
  __return_storage_ptr__->Z = param_1->Z;
  __return_storage_ptr__->W = dVar1;
  SpringMath::ExponentialSmoothingApproxQuat(__return_storage_ptr__,param_2,param_3,param_4);
  return __return_storage_ptr__;
}

// DampRotator @ 14769b820

TRotator<double> * __cdecl
UBlueprintSpringMathLibrary::DampRotator
          (TRotator<double> *__return_storage_ptr__,TRotator<double> *param_1,
          TRotator<double> *param_2,float param_3,float param_4)

{
  TQuat<double> *pTVar1;
  TQuat<double> local_58;
  TQuat<double> local_38;
  
  UE::Math::TRotator<double>::Quaternion(param_1,&local_58);
  pTVar1 = UE::Math::TRotator<double>::Quaternion(param_2,&local_38);
  SpringMath::ExponentialSmoothingApproxQuat(&local_58,pTVar1,param_3,param_4);
  UE::Math::TQuat<double>::Rotator(&local_58,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// DampVector2D @ 14769b8a0

TVector2<double> * __cdecl
UBlueprintSpringMathLibrary::DampVector2D
          (TVector2<double> *__return_storage_ptr__,TVector2<double> *param_1,
          TVector2<double> *param_2,float param_3,float param_4)

{
  double dVar1;
  double dVar2;
  float fVar3;
  double dVar4;
  
  fVar3 = __real_38d1b717;
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  if (fVar3 < param_4) {
    fVar3 = param_3 / param_4;
    dVar4 = (double)(__real_3f800000 /
                    ((fVar3 * __real_3e83b5ca * fVar3 + __real_3f80f478 + fVar3 * __real_3ee6ad0d) *
                     fVar3 + __real_3f800000));
    dVar1 = (param_2->field0_0x0)._s_0.Y;
    dVar2 = (param_2->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         ((__return_storage_ptr__->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X) * dVar4 +
         (param_2->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         ((__return_storage_ptr__->field0_0x0)._s_0.Y - dVar1) * dVar4 + dVar2;
    return __return_storage_ptr__;
  }
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// DampVector @ 14769b940

TVector<double> * __cdecl
UBlueprintSpringMathLibrary::DampVector
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2
          ,float param_3,float param_4)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  float fVar6;
  double dVar7;
  
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  fVar6 = __real_38d1b717;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  if (fVar6 < param_4) {
    dVar5 = (param_2->field0_0x0)._s_0.X;
    dVar4 = (param_2->field0_0x0)._s_0.Y;
    fVar6 = param_3 / param_4;
    dVar7 = (double)(__real_3f800000 /
                    (((fVar6 * __real_3e83b5ca + __real_3ee6ad0d) * fVar6 + __real_3f80f478) * fVar6
                    + __real_3f800000));
    dVar1 = (__return_storage_ptr__->field0_0x0)._s_0.Z;
    dVar2 = (param_2->field0_0x0)._s_0.Z;
    dVar4 = ((__return_storage_ptr__->field0_0x0)._s_0.Y - dVar4) * dVar7 + dVar4;
    auVar3._8_4_ = SUB84(dVar4,0);
    auVar3._0_8_ = ((__return_storage_ptr__->field0_0x0)._s_0.X - dVar5) * dVar7 + dVar5;
    auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         (dVar1 - dVar2) * dVar7 + (param_2->field0_0x0)._s_0.Z;
    return __return_storage_ptr__;
  }
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// SpringCharacterUpdate @ 1476c9e70

void __cdecl
UBlueprintSpringMathLibrary::SpringCharacterUpdate
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,float param_5,float param_6)

{
  SpringMath::SpringCharacterUpdate<UE::Math::TVector<double>_>
            (param_1,param_2,param_3,param_4,param_6,param_5,__real_3c23d70a,__real_38d1b717);
  return;
}

// VelocitySpringCharacterUpdate @ 1476ccf60

void __cdecl
UBlueprintSpringMathLibrary::VelocitySpringCharacterUpdate
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,TVector<double> *param_5,float param_6,float param_7,
          float param_8)

{
  TVector<double>_u_0 local_28;
  
  local_28._s_0.X = (param_5->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_5->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_5->field0_0x0)._s_0.Z;
  SpringMath::VelocitySpringCharacterUpdate<UE::Math::TVector<double>_>
            (param_1,param_2,param_3,param_4,(TVector<double> *)&local_28._s_0,param_7,param_8,
             param_6,__real_3c23d70a,__real_38d1b717);
  return;
}

// VelocitySpringDampFloat @ 1476ccff0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintSpringMathLibrary::VelocitySpringDampFloat
          (float *param_1,float *param_2,float *param_3,float param_4,float param_5,float param_6,
          float param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (0.0 <= param_5) {
    if (param_5 <= 0.0) {
      param_5 = 0.0;
    }
    fVar1 = param_4 - *param_3;
    fVar3 = param_5;
    if (fVar1 <= 0.0) {
      fVar3 = (float)((uint)param_5 ^ __xmm_80000000800000008000000080000000);
    }
    fVar2 = param_4;
    if (param_5 * param_7 < (float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      fVar2 = fVar3 * param_7 + *param_3;
    }
    SpringMath::CriticalSpringDamper<float>(param_1,param_2,fVar2,param_7,param_6);
    if (param_5 * param_6 <
        (float)((uint)(param_4 - *param_3) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      param_4 = fVar3 * param_6 + *param_3;
    }
    *param_3 = param_4;
  }
  else if (2 < (byte)LogBlueprintSpingMathLibrary._0_1_) {
    UE::Logging::Private::BasicLog<3>
              (&::LOG_Static,(FLogCategoryBase *)&LogBlueprintSpingMathLibrary);
    return;
  }
  return;
}

// VelocitySpringDampVector2D @ 1476cd110

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintSpringMathLibrary::VelocitySpringDampVector2D
          (TVector2<double> *param_1,TVector2<double> *param_2,TVector2<double> *param_3,
          TVector2<double> *param_4,float param_5,float param_6,float param_7)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  TVector2<double>_u_0 local_78 [7];
  
  if (0.0 <= param_5) {
    dVar1 = (param_3->field0_0x0)._s_0.X;
    dVar2 = (param_3->field0_0x0)._s_0.Y;
    dVar6 = (param_4->field0_0x0)._s_0.X;
    dVar7 = (param_4->field0_0x0)._s_0.Y;
    dVar10 = dVar6 - dVar1;
    dVar9 = dVar7 - dVar2;
    fVar11 = (float)SQRT(dVar9 * dVar9 + dVar10 * dVar10);
    uVar8 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar3 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
    if (__real_34000000 < fVar11) {
      uVar8 = (__real_3ff0000000000000 / (double)fVar11) * dVar9;
      uVar3 = (__real_3ff0000000000000 / (double)fVar11) * dVar10;
    }
    dVar9 = (double)param_5 * (double)uVar8;
    dVar10 = (double)param_5 * (double)uVar3;
    dVar4 = dVar6;
    dVar5 = dVar7;
    if (param_5 * param_7 < fVar11) {
      dVar4 = (double)param_7 * dVar10 + dVar1;
      dVar5 = (double)param_7 * dVar9 + dVar2;
    }
    local_78[0]._8_4_ = SUB84(dVar5,0);
    local_78[0]._s_0.X = dVar4;
    local_78[0]._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    SpringMath::CriticalSpringDamper<UE::Math::TVector2<double>_>
              (param_1,param_2,(TVector2<double> *)&local_78[0]._s_0,param_7,param_6);
    local_78[0]._0_8_ = dVar6;
    local_78[0]._8_8_ = dVar7;
    if (param_5 * param_6 < fVar11) {
      local_78[0]._0_8_ = (double)param_6 * dVar10 + (param_3->field0_0x0)._s_0.X;
      local_78[0]._8_8_ = (double)param_6 * dVar9 + (param_3->field0_0x0)._s_0.Y;
    }
    (param_3->field0_0x0)._s_0.X = (double)local_78[0]._0_8_;
    (param_3->field0_0x0)._s_0.Y = (double)local_78[0]._8_8_;
  }
  else if (2 < (byte)LogBlueprintSpingMathLibrary._0_1_) {
    UE::Logging::Private::BasicLog<3>
              (&::LOG_Static,(FLogCategoryBase *)&LogBlueprintSpingMathLibrary);
    return;
  }
  return;
}

// VelocitySpringDampVector @ 1476cd2f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintSpringMathLibrary::VelocitySpringDampVector
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,float param_5,float param_6,float param_7)

{
  TVector<double>_u_0 local_28;
  
  if (0.0 <= param_5) {
    local_28._s_0.X = (param_4->field0_0x0)._s_0.X;
    local_28._s_0.Y = (param_4->field0_0x0)._s_0.Y;
    local_28._s_0.Z = (param_4->field0_0x0)._s_0.Z;
    SpringMath::VelocitySpringDamper<UE::Math::TVector<double>_>
              (param_1,param_2,param_3,(TVector<double> *)&local_28._s_0,param_5,param_7,param_6);
  }
  else if (2 < (byte)LogBlueprintSpingMathLibrary._0_1_) {
    UE::Logging::Private::BasicLog<3>
              (&::LOG_Static,(FLogCategoryBase *)&LogBlueprintSpingMathLibrary);
    return;
  }
  return;
}

