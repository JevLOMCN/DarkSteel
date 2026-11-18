// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147512f40

UClass * __cdecl UAnimationAttributeIdentifierExtensions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UAnimationAttributeIdentifierExtensions.InnerSingleton ==
      (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimationAttributeIdentifierExtensions",
               &Z_Registration_Info_UClass_UAnimationAttributeIdentifierExtensions.InnerSingleton,
               StaticRegisterNativesUAnimationAttributeIdentifierExtensions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimationAttributeIdentifierExtensions>
               ,InternalVTableHelperCtorCaller<UAnimationAttributeIdentifierExtensions>,aFStackX_8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimationAttributeIdentifierExtensions.InnerSingleton;
}

// UAnimationAttributeIdentifierExtensions @ 147532310

UAnimationAttributeIdentifierExtensions * __thiscall
UAnimationAttributeIdentifierExtensions::UAnimationAttributeIdentifierExtensions
          (UAnimationAttributeIdentifierExtensions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UAnimationAttributeIdentifierExtensions__6B_;
  return this;
}

// UAnimationAttributeIdentifierExtensions @ 147532340

UAnimationAttributeIdentifierExtensions * __thiscall
UAnimationAttributeIdentifierExtensions::UAnimationAttributeIdentifierExtensions
          (UAnimationAttributeIdentifierExtensions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UAnimationAttributeIdentifierExtensions__6B_;
  return this;
}

// ~UAnimationAttributeIdentifierExtensions @ 147533b80

void __thiscall
UAnimationAttributeIdentifierExtensions::~UAnimationAttributeIdentifierExtensions
          (UAnimationAttributeIdentifierExtensions *this)

{
  *(undefined ***)this = &___7UAnimationAttributeIdentifierExtensions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetPrivateStaticClass @ 14755ecb0

UClass * __cdecl UAnimationAttributeIdentifierExtensions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimationAttributeIdentifierExtensions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimationAttributeIdentifierExtensions",
               &Z_Registration_Info_UClass_UAnimationAttributeIdentifierExtensions.InnerSingleton,
               StaticRegisterNativesUAnimationAttributeIdentifierExtensions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimationAttributeIdentifierExtensions>
               ,InternalVTableHelperCtorCaller<UAnimationAttributeIdentifierExtensions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimationAttributeIdentifierExtensions.InnerSingleton;
}

// StaticRegisterNativesUAnimationAttributeIdentifierExtensions @ 14757ac60

void __cdecl
UAnimationAttributeIdentifierExtensions::
StaticRegisterNativesUAnimationAttributeIdentifierExtensions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UAnimationAttributeIdentifierExtensions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execIsValid @ 1475852d0

void __cdecl
UAnimationAttributeIdentifierExtensions::execIsValid(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong local_48 [2];
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  void *local_18;
  undefined8 local_10;
  
  local_38 = 0xffffffff;
  local_48[0] = 0;
  local_48[1] = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = (void *)0x0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  plVar3 = local_48;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar3 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((((*plVar3 == 0) || (plVar3[1] == 0)) || ((int)plVar3[2] == -1)) || (plVar3[3] == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)param_3 = uVar2;
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

