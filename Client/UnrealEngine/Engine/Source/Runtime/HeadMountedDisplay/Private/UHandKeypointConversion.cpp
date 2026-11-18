// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HeadMountedDisplay
// Functions: 7

// StaticClass @ 14594b470

UClass * __cdecl UHandKeypointConversion::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHandKeypointConversion.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HeadMountedDisplay",L"HandKeypointConversion",
               &Z_Registration_Info_UClass_UHandKeypointConversion.InnerSingleton,
               StaticRegisterNativesUHandKeypointConversion,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UHandKeypointConversion>,
               InternalVTableHelperCtorCaller<UHandKeypointConversion>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHandKeypointConversion.InnerSingleton;
}

// UHandKeypointConversion @ 14594e3d0

UHandKeypointConversion * __thiscall
UHandKeypointConversion::UHandKeypointConversion
          (UHandKeypointConversion *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UHandKeypointConversion__6B_;
  return this;
}

// UHandKeypointConversion @ 14594e400

UHandKeypointConversion * __thiscall
UHandKeypointConversion::UHandKeypointConversion
          (UHandKeypointConversion *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UHandKeypointConversion__6B_;
  return this;
}

// ~UHandKeypointConversion @ 14594eac0

void __thiscall UHandKeypointConversion::~UHandKeypointConversion(UHandKeypointConversion *this)

{
  *(undefined ***)this = &___7UHandKeypointConversion__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetPrivateStaticClass @ 145953cd0

UClass * __cdecl UHandKeypointConversion::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHandKeypointConversion.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HeadMountedDisplay",L"HandKeypointConversion",
               &Z_Registration_Info_UClass_UHandKeypointConversion.InnerSingleton,
               StaticRegisterNativesUHandKeypointConversion,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UHandKeypointConversion>,
               InternalVTableHelperCtorCaller<UHandKeypointConversion>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHandKeypointConversion.InnerSingleton;
}

// StaticRegisterNativesUHandKeypointConversion @ 145957db0

void __cdecl UHandKeypointConversion::StaticRegisterNativesUHandKeypointConversion(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UHandKeypointConversion_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execConv_HandKeypointToInt32 @ 1459598c0

void __cdecl
UHandKeypointConversion::execConv_HandKeypointToInt32
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte local_res10 [24];
  
  local_res10[0] = 0;
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
  *(uint *)param_3 = (uint)local_res10[0];
  return;
}

