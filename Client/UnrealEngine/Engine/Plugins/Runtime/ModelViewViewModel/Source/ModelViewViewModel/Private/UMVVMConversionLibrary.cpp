// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 8

// StaticClass @ 14a735a40

UClass * __cdecl UMVVMConversionLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMConversionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMConversionLibrary",
               &Z_Registration_Info_UClass_UMVVMConversionLibrary.InnerSingleton,
               StaticRegisterNativesUMVVMConversionLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMVVMConversionLibrary>,
               InternalVTableHelperCtorCaller<UMVVMConversionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMVVMConversionLibrary.InnerSingleton;
}

// UMVVMConversionLibrary @ 14a73f910

UMVVMConversionLibrary * __thiscall
UMVVMConversionLibrary::UMVVMConversionLibrary(UMVVMConversionLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMVVMConversionLibrary__6B_;
  return this;
}

// UMVVMConversionLibrary @ 14a73f940

UMVVMConversionLibrary * __thiscall
UMVVMConversionLibrary::UMVVMConversionLibrary
          (UMVVMConversionLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMVVMConversionLibrary__6B_;
  return this;
}

// ~UMVVMConversionLibrary @ 14a740680

void __thiscall UMVVMConversionLibrary::~UMVVMConversionLibrary(UMVVMConversionLibrary *this)

{
  *(undefined ***)this = &___7UMVVMConversionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// Conv_BoolToSlateVisibility @ 14a7456c0

ESlateVisibility __cdecl
UMVVMConversionLibrary::Conv_BoolToSlateVisibility
          (bool param_1,ESlateVisibility param_2,ESlateVisibility param_3)

{
  if (param_1) {
    param_3 = param_2;
  }
  return param_3;
}

// GetPrivateStaticClass @ 14a7536b0

UClass * __cdecl UMVVMConversionLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMConversionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMConversionLibrary",
               &Z_Registration_Info_UClass_UMVVMConversionLibrary.InnerSingleton,
               StaticRegisterNativesUMVVMConversionLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMVVMConversionLibrary>,
               InternalVTableHelperCtorCaller<UMVVMConversionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMVVMConversionLibrary.InnerSingleton;
}

// StaticRegisterNativesUMVVMConversionLibrary @ 14a760040

void __cdecl UMVVMConversionLibrary::StaticRegisterNativesUMVVMConversionLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UMVVMConversionLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execConv_BoolToSlateVisibility @ 14a769330

void __cdecl
UMVVMConversionLibrary::execConv_BoolToSlateVisibility
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20 [2];
  
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar2 = local_res20[0] != 0;
  local_res18[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
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
  if (bVar2) {
    local_res10[0] = local_res18[0];
  }
  *(undefined1 *)param_3 = local_res10[0];
  return;
}

