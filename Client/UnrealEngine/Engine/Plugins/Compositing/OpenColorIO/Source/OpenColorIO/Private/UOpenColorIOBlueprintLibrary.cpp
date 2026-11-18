// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenColorIO
// Functions: 8

// StaticClass @ 14d764730

UClass * __cdecl UOpenColorIOBlueprintLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOpenColorIOBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OpenColorIO",L"OpenColorIOBlueprintLibrary",
               &Z_Registration_Info_UClass_UOpenColorIOBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUOpenColorIOBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOpenColorIOBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UOpenColorIOBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOpenColorIOBlueprintLibrary.InnerSingleton;
}

// UOpenColorIOBlueprintLibrary @ 14d7692c0

UOpenColorIOBlueprintLibrary * __thiscall
UOpenColorIOBlueprintLibrary::UOpenColorIOBlueprintLibrary
          (UOpenColorIOBlueprintLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UOpenColorIOBlueprintLibrary__6B_;
  return this;
}

// UOpenColorIOBlueprintLibrary @ 14d7692f0

UOpenColorIOBlueprintLibrary * __thiscall
UOpenColorIOBlueprintLibrary::UOpenColorIOBlueprintLibrary
          (UOpenColorIOBlueprintLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UOpenColorIOBlueprintLibrary__6B_;
  return this;
}

// ~UOpenColorIOBlueprintLibrary @ 14d769d10

void __thiscall
UOpenColorIOBlueprintLibrary::~UOpenColorIOBlueprintLibrary(UOpenColorIOBlueprintLibrary *this)

{
  *(undefined ***)this = &___7UOpenColorIOBlueprintLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// ApplyColorSpaceTransform @ 14d76c760

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UOpenColorIOBlueprintLibrary::ApplyColorSpaceTransform
          (UObject *param_1,FOpenColorIOColorConversionSettings *param_2,UTexture *param_3,
          UTextureRenderTarget2D *param_4)

{
  bool bVar1;
  UWorld *pUVar2;
  
  pUVar2 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))();
  bVar1 = FOpenColorIORendering::ApplyColorTransform(pUVar2,param_2,param_3,param_4);
  return bVar1;
}

// GetPrivateStaticClass @ 14d771640

UClass * __cdecl UOpenColorIOBlueprintLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOpenColorIOBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OpenColorIO",L"OpenColorIOBlueprintLibrary",
               &Z_Registration_Info_UClass_UOpenColorIOBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUOpenColorIOBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOpenColorIOBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UOpenColorIOBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOpenColorIOBlueprintLibrary.InnerSingleton;
}

// StaticRegisterNativesUOpenColorIOBlueprintLibrary @ 14d778440

void __cdecl UOpenColorIOBlueprintLibrary::StaticRegisterNativesUOpenColorIOBlueprintLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UOpenColorIOBlueprintLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execApplyColorSpaceTransform @ 14d779c10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UOpenColorIOBlueprintLibrary::execApplyColorSpaceTransform
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UTextureRenderTarget2D *pUVar2;
  UTexture *pUVar3;
  bool bVar4;
  UWorld *pUVar5;
  TObjectPtr<UOpenColorIOConfiguration>_u_0 *pTVar6;
  UTextureRenderTarget2D *local_res10;
  UTexture *local_res18;
  longlong *local_res20;
  TObjectPtr<UOpenColorIOConfiguration>_u_0 local_c8;
  void *local_c0;
  undefined8 uStack_b8;
  void *local_b0;
  undefined8 uStack_a8;
  void *local_a0;
  undefined8 uStack_98;
  void *local_90;
  undefined8 uStack_88;
  void *local_80;
  undefined8 uStack_78;
  void *local_70;
  undefined8 uStack_68;
  void *local_60;
  undefined8 uStack_58;
  void *local_50;
  undefined8 uStack_48;
  void *local_40;
  undefined8 uStack_38;
  undefined1 local_30;
  
  local_res20 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_c8.DebugPtr = (UOpenColorIOConfiguration *)0x0;
  local_30 = 0;
  local_c0 = (void *)0x0;
  uStack_b8 = 0;
  local_b0 = (void *)0x0;
  uStack_a8 = 0;
  local_a0 = (void *)0x0;
  uStack_98 = 0;
  local_90 = (void *)0x0;
  uStack_88 = 0;
  local_80 = (void *)0x0;
  uStack_78 = 0;
  local_70 = (void *)0x0;
  uStack_68 = 0;
  local_60 = (void *)0x0;
  uStack_58 = 0;
  local_50 = (void *)0x0;
  uStack_48 = 0;
  local_40 = (void *)0x0;
  uStack_38 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  local_res18 = (UTexture *)0x0;
  pTVar6 = &local_c8;
  if ((TObjectPtr<UOpenColorIOConfiguration>_u_0 *)param_2->MostRecentPropertyAddress !=
      (TObjectPtr<UOpenColorIOConfiguration>_u_0 *)0x0) {
    pTVar6 = (TObjectPtr<UOpenColorIOConfiguration>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10 = (UTextureRenderTarget2D *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar3 = local_res18;
  pUVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar5 = (UWorld *)(**(code **)(*local_res20 + 0x180))();
  bVar4 = FOpenColorIORendering::ApplyColorTransform
                    (pUVar5,(FOpenColorIOColorConversionSettings *)&pTVar6->ObjectPtr,pUVar3,pUVar2)
  ;
  *(bool *)param_3 = bVar4;
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  if (local_80 != (void *)0x0) {
    FMemory::Free(local_80);
  }
  if (local_90 != (void *)0x0) {
    FMemory::Free(local_90);
  }
  if (local_a0 != (void *)0x0) {
    FMemory::Free(local_a0);
  }
  if (local_b0 != (void *)0x0) {
    FMemory::Free(local_b0);
  }
  if (local_c0 != (void *)0x0) {
    FMemory::Free(local_c0);
  }
  return;
}

