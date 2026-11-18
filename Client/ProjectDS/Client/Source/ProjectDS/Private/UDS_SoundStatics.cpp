// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// StaticClass @ 14b598de0

UClass * __cdecl UDS_SoundStatics::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SoundStatics.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SoundStatics",
               &Z_Registration_Info_UClass_UDS_SoundStatics.InnerSingleton,
               StaticRegisterNativesUDS_SoundStatics,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_SoundStatics>,
               InternalVTableHelperCtorCaller<UDS_SoundStatics>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SoundStatics.InnerSingleton;
}

// UDS_SoundStatics @ 14b59cf80

UDS_SoundStatics * __thiscall
UDS_SoundStatics::UDS_SoundStatics(UDS_SoundStatics *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UDS_SoundStatics__6B_;
  return this;
}

// UDS_SoundStatics @ 14b59cfb0

UDS_SoundStatics * __thiscall
UDS_SoundStatics::UDS_SoundStatics(UDS_SoundStatics *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UDS_SoundStatics__6B_;
  return this;
}

// ~UDS_SoundStatics @ 14b59d520

void __thiscall UDS_SoundStatics::~UDS_SoundStatics(UDS_SoundStatics *this)

{
  *(undefined ***)this = &___7UDS_SoundStatics__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetPrivateStaticClass @ 14b59e300

UClass * __cdecl UDS_SoundStatics::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SoundStatics.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SoundStatics",
               &Z_Registration_Info_UClass_UDS_SoundStatics.InnerSingleton,
               StaticRegisterNativesUDS_SoundStatics,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_SoundStatics>,
               InternalVTableHelperCtorCaller<UDS_SoundStatics>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SoundStatics.InnerSingleton;
}

// StaticRegisterNativesUDS_SoundStatics @ 14b59e570

void __cdecl UDS_SoundStatics::StaticRegisterNativesUDS_SoundStatics(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UDS_SoundStatics_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execPlayBGM @ 14b59f280

void __cdecl UDS_SoundStatics::execPlayBGM(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [6];
  
  local_res10[0] = 0;
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
  PlayBGM(local_res10[0]);
  return;
}

// execPlaySound2D @ 14b59f300

void __cdecl UDS_SoundStatics::execPlaySound2D(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [6];
  
  local_res10[0] = 0;
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
  PlaySound2D(local_res10[0]);
  return;
}

// execStopBGM @ 14b59f380

void __cdecl UDS_SoundStatics::execStopBGM(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  StopBGM();
  return;
}

// PlayBGM @ 14bbcd4c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UDS_SoundStatics::PlayBGM(int param_1)

{
  UWorld *this;
  UDS_SoundManager *this_00;
  FDS_ResourceSoundTableRow *pFVar1;
  
  this = UDS_GameInstance::GetGameInstanceWorld();
  if ((this != (UWorld *)0x0) &&
     (this_00 = UWorld::GetSubsystem<UDS_SoundManager>(this), this_00 != (UDS_SoundManager *)0x0)) {
    if (param_1 == 0) {
      UDS_SoundManager::StopBGM(this_00);
      return;
    }
    pFVar1 = FDS_ResourceSoundTableRow::GetRef((longlong)param_1,true);
    UDS_SoundManager::PlayBGM(this_00,&pFVar1->FilePath,&FDS_PlaySoundParam::Default);
  }
  return;
}

// PlaySound2D @ 14bbcd850

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UDS_SoundStatics::PlaySound2D(int param_1)

{
  UWorld *this;
  UDS_SoundManager *this_00;
  
  this = UDS_GameInstance::GetGameInstanceWorld();
  if (this != (UWorld *)0x0) {
    this_00 = UWorld::GetSubsystem<UDS_SoundManager>(this);
    if (this_00 != (UDS_SoundManager *)0x0) {
      UDS_SoundManager::PlaySound(this_00,param_1);
      return;
    }
  }
  return;
}

// StopBGM @ 14bbe2450

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UDS_SoundStatics::StopBGM(void)

{
  UWorld *this;
  UDS_SoundManager *this_00;
  
  this = UDS_GameInstance::GetGameInstanceWorld();
  if (this != (UWorld *)0x0) {
    this_00 = UWorld::GetSubsystem<UDS_SoundManager>(this);
    if (this_00 != (UDS_SoundManager *)0x0) {
      UDS_SoundManager::StopBGM(this_00);
      return;
    }
  }
  return;
}

