// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 147510ea0

UClass * __cdecl UAnimationCurveIdentifierExtensions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UAnimationCurveIdentifierExtensions.InnerSingleton == (UClass *)0x0
     ) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimationCurveIdentifierExtensions",
               &Z_Registration_Info_UClass_UAnimationCurveIdentifierExtensions.InnerSingleton,
               StaticRegisterNativesUAnimationCurveIdentifierExtensions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimationCurveIdentifierExtensions>,
               InternalVTableHelperCtorCaller<UAnimationCurveIdentifierExtensions>,aFStackX_8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimationCurveIdentifierExtensions.InnerSingleton;
}

// UAnimationCurveIdentifierExtensions @ 147532370

UAnimationCurveIdentifierExtensions * __thiscall
UAnimationCurveIdentifierExtensions::UAnimationCurveIdentifierExtensions
          (UAnimationCurveIdentifierExtensions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UAnimationCurveIdentifierExtensions__6B_;
  return this;
}

// UAnimationCurveIdentifierExtensions @ 1475323a0

UAnimationCurveIdentifierExtensions * __thiscall
UAnimationCurveIdentifierExtensions::UAnimationCurveIdentifierExtensions
          (UAnimationCurveIdentifierExtensions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UAnimationCurveIdentifierExtensions__6B_;
  return this;
}

// ~UAnimationCurveIdentifierExtensions @ 147533ba0

void __thiscall
UAnimationCurveIdentifierExtensions::~UAnimationCurveIdentifierExtensions
          (UAnimationCurveIdentifierExtensions *this)

{
  *(undefined ***)this = &___7UAnimationCurveIdentifierExtensions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetPrivateStaticClass @ 14755ed70

UClass * __cdecl UAnimationCurveIdentifierExtensions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimationCurveIdentifierExtensions.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimationCurveIdentifierExtensions",
               &Z_Registration_Info_UClass_UAnimationCurveIdentifierExtensions.InnerSingleton,
               StaticRegisterNativesUAnimationCurveIdentifierExtensions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimationCurveIdentifierExtensions>,
               InternalVTableHelperCtorCaller<UAnimationCurveIdentifierExtensions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimationCurveIdentifierExtensions.InnerSingleton;
}

// StaticRegisterNativesUAnimationCurveIdentifierExtensions @ 14757aca0

void __cdecl
UAnimationCurveIdentifierExtensions::StaticRegisterNativesUAnimationCurveIdentifierExtensions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UAnimationCurveIdentifierExtensions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetName @ 147584a10

void __cdecl
UAnimationCurveIdentifierExtensions::execGetName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar local_18 [16];
  
  local_18[8] = '\x03';
  local_18[9] = '\x03';
  local_18[0] = '\0';
  local_18[1] = '\0';
  local_18[2] = '\0';
  local_18[3] = '\0';
  local_18[4] = '\0';
  local_18[5] = '\0';
  local_18[6] = '\0';
  local_18[7] = '\0';
  local_18[10] = 3;
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
  *(undefined8 *)param_3 = *(undefined8 *)puVar2;
  return;
}

// execGetType @ 147585220

void __cdecl
UAnimationCurveIdentifierExtensions::execGetType(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar local_18 [16];
  
  local_18[8] = '\x03';
  local_18[9] = '\x03';
  local_18[0] = '\0';
  local_18[1] = '\0';
  local_18[2] = '\0';
  local_18[3] = '\0';
  local_18[4] = '\0';
  local_18[5] = '\0';
  local_18[6] = '\0';
  local_18[7] = '\0';
  local_18[10] = 3;
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
  *(uchar *)param_3 = puVar2[8];
  return;
}

// execIsValid @ 1475853b0

void __cdecl
UAnimationCurveIdentifierExtensions::execIsValid(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  longlong local_18;
  undefined2 local_10;
  undefined1 local_e;
  
  local_10 = 0x303;
  local_18 = 0;
  local_e = 3;
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
  plVar2 = &local_18;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar2 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*plVar2 != 0) && ((char)plVar2[1] != '\x03')) {
    *(undefined1 *)param_3 = 1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

