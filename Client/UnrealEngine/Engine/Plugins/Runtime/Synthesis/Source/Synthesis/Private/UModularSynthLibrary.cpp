// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 8

// StaticClass @ 14f0a8020

UClass * __cdecl UModularSynthLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModularSynthLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"ModularSynthLibrary",
               &Z_Registration_Info_UClass_UModularSynthLibrary.InnerSingleton,
               StaticRegisterNativesUModularSynthLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UModularSynthLibrary>,
               InternalVTableHelperCtorCaller<UModularSynthLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModularSynthLibrary.InnerSingleton;
}

// UModularSynthLibrary @ 14f0b99d0

UModularSynthLibrary * __thiscall
UModularSynthLibrary::UModularSynthLibrary(UModularSynthLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UModularSynthLibrary__6B_;
  return this;
}

// UModularSynthLibrary @ 14f0b9a00

UModularSynthLibrary * __thiscall
UModularSynthLibrary::UModularSynthLibrary(UModularSynthLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UModularSynthLibrary__6B_;
  return this;
}

// ~UModularSynthLibrary @ 14f0c0070

void __thiscall UModularSynthLibrary::~UModularSynthLibrary(UModularSynthLibrary *this)

{
  *(undefined ***)this = &___7UModularSynthLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// AddModularSynthPresetToBankAsset @ 14f0c9730

void __cdecl
UModularSynthLibrary::AddModularSynthPresetToBankAsset
          (UModularSynthPresetBank *param_1,FModularSynthPreset *param_2,FString *param_3)

{
  return;
}

// GetPrivateStaticClass @ 14f0dc020

UClass * __cdecl UModularSynthLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModularSynthLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"ModularSynthLibrary",
               &Z_Registration_Info_UClass_UModularSynthLibrary.InnerSingleton,
               StaticRegisterNativesUModularSynthLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UModularSynthLibrary>,
               InternalVTableHelperCtorCaller<UModularSynthLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModularSynthLibrary.InnerSingleton;
}

// StaticRegisterNativesUModularSynthLibrary @ 14f1035a0

void __cdecl UModularSynthLibrary::StaticRegisterNativesUModularSynthLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UModularSynthLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddModularSynthPresetToBankAsset @ 14f10b890

void __cdecl
UModularSynthLibrary::execAddModularSynthPresetToBankAsset
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res10 [3];
  void *local_f8;
  undefined8 local_f0;
  FModularSynthPreset local_e8;
  
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FModularSynthPreset::FModularSynthPreset(&local_e8);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_f8 = (void *)0x0;
  local_f0 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_f8 != (void *)0x0) {
    FMemory::Free(local_f8);
  }
  DestructItems<FEpicSynth1Patch,int>
            ((FEpicSynth1Patch *)local_e8.Patches.AllocatorInstance.Data,local_e8.Patches.ArrayNum);
  if ((FEpicSynth1Patch *)local_e8.Patches.AllocatorInstance.Data != (FEpicSynth1Patch *)0x0) {
    FMemory::Free(local_e8.Patches.AllocatorInstance.Data);
  }
  return;
}

