// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AndroidFileServer
// Functions: 12

// StaticClass @ 14f00b4e0

UClass * __cdecl UAndroidFileServerBPLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAndroidFileServerBPLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AndroidFileServer",L"AndroidFileServerBPLibrary",
               &Z_Registration_Info_UClass_UAndroidFileServerBPLibrary.InnerSingleton,
               StaticRegisterNativesUAndroidFileServerBPLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAndroidFileServerBPLibrary>,
               InternalVTableHelperCtorCaller<UAndroidFileServerBPLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAndroidFileServerBPLibrary.InnerSingleton;
}

// UAndroidFileServerBPLibrary @ 14f00b8a0

UAndroidFileServerBPLibrary * __thiscall
UAndroidFileServerBPLibrary::UAndroidFileServerBPLibrary
          (UAndroidFileServerBPLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UAndroidFileServerBPLibrary__6B_;
  return this;
}

// UAndroidFileServerBPLibrary @ 14f00b8d0

UAndroidFileServerBPLibrary * __thiscall
UAndroidFileServerBPLibrary::UAndroidFileServerBPLibrary
          (UAndroidFileServerBPLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UAndroidFileServerBPLibrary__6B_;
  return this;
}

// ~UAndroidFileServerBPLibrary @ 14f00b900

void __thiscall
UAndroidFileServerBPLibrary::~UAndroidFileServerBPLibrary(UAndroidFileServerBPLibrary *this)

{
  *(undefined ***)this = &___7UAndroidFileServerBPLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetPrivateStaticClass @ 14f00b9a0

UClass * __cdecl UAndroidFileServerBPLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAndroidFileServerBPLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AndroidFileServer",L"AndroidFileServerBPLibrary",
               &Z_Registration_Info_UClass_UAndroidFileServerBPLibrary.InnerSingleton,
               StaticRegisterNativesUAndroidFileServerBPLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAndroidFileServerBPLibrary>,
               InternalVTableHelperCtorCaller<UAndroidFileServerBPLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAndroidFileServerBPLibrary.InnerSingleton;
}

// IsFileServerRunning @ 14f00ba90

TEnumAsByte<EAFSActiveType::Type> __cdecl UAndroidFileServerBPLibrary::IsFileServerRunning(void)

{
  undefined1 *in_RCX;
  
  *in_RCX = 0;
  return (TEnumAsByte<EAFSActiveType::Type>)(uchar)in_RCX;
}

// StartFileServer @ 14f00baa0

bool __cdecl UAndroidFileServerBPLibrary::StartFileServer(bool param_1,bool param_2,int param_3)

{
  return false;
}

// StaticRegisterNativesUAndroidFileServerBPLibrary @ 14f00bab0

void __cdecl UAndroidFileServerBPLibrary::StaticRegisterNativesUAndroidFileServerBPLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UAndroidFileServerBPLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StopFileServer @ 14f00baf0

bool __cdecl UAndroidFileServerBPLibrary::StopFileServer(bool param_1,bool param_2)

{
  return false;
}

// execIsFileServerRunning @ 14f00bbc0

void __cdecl
UAndroidFileServerBPLibrary::execIsFileServerRunning(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 0;
  return;
}

// execStartFileServer @ 14f00bbe0

void __cdecl
UAndroidFileServerBPLibrary::execStartFileServer(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 0;
  return;
}

// execStopFileServer @ 14f00bcd0

void __cdecl
UAndroidFileServerBPLibrary::execStopFileServer(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 0;
  return;
}

