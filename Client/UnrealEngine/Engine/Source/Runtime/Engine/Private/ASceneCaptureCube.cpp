// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 14731fb50

UClass * __cdecl ASceneCaptureCube::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ASceneCaptureCube.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SceneCaptureCube",
               &Z_Registration_Info_UClass_ASceneCaptureCube.InnerSingleton,
               StaticRegisterNativesASceneCaptureCube,0x2d8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ASceneCaptureCube>,
               InternalVTableHelperCtorCaller<ASceneCaptureCube>,local_res8,
               ASceneCapture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ASceneCaptureCube.InnerSingleton;
}

// ASceneCaptureCube @ 1473248b0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ASceneCaptureCube * __thiscall
ASceneCaptureCube::ASceneCaptureCube(ASceneCaptureCube *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ASceneCaptureCube__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->CaptureComponentCube).field0_0x0.DebugPtr = (USceneCaptureComponentCube *)0x0;
  return this;
}

// ~ASceneCaptureCube @ 147325150

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ASceneCaptureCube::~ASceneCaptureCube(ASceneCaptureCube *this)

{
  this->_padding_ = (longlong)&___7ASceneCapture__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 147326d20

UClass * __cdecl ASceneCaptureCube::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ASceneCaptureCube.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SceneCaptureCube",
               &Z_Registration_Info_UClass_ASceneCaptureCube.InnerSingleton,
               StaticRegisterNativesASceneCaptureCube,0x2d8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ASceneCaptureCube>,
               InternalVTableHelperCtorCaller<ASceneCaptureCube>,local_res8,
               ASceneCapture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ASceneCaptureCube.InnerSingleton;
}

// StaticRegisterNativesASceneCaptureCube @ 147328160

void __cdecl ASceneCaptureCube::StaticRegisterNativesASceneCaptureCube(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_ASceneCaptureCube_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnInterpToggle @ 14732a6f0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl ASceneCaptureCube::execOnInterpToggle(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnInterpToggle((ASceneCaptureCube *)param_1,local_res10[0] != 0);
  return;
}

// ASceneCaptureCube @ 147928c50

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ASceneCaptureCube * __thiscall
ASceneCaptureCube::ASceneCaptureCube(ASceneCaptureCube *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  USceneCaptureComponentCube *this_00;
  FName local_res8;
  
  ASceneCapture::ASceneCapture((ASceneCapture *)this,param_1);
  this->_padding_ = (longlong)&___7ASceneCaptureCube__6B_;
  (this->CaptureComponentCube).field0_0x0.DebugPtr = (USceneCaptureComponentCube *)0x0;
  pFVar2 = ::FName::FName(&local_res8,L"NewSceneCaptureComponentCube");
  FVar1 = *pFVar2;
  pUVar3 = Z_Construct_UClass_USceneCaptureComponentCube_NoRegister();
  this_00 = (USceneCaptureComponentCube *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_00 != (USceneCaptureComponentCube *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  (this->CaptureComponentCube).field0_0x0.DebugPtr = this_00;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  USceneComponent::SetupAttachment
            ((USceneComponent *)this_00,(USceneComponent *)this->_padding_,(FName)0x0);
  return this;
}

// OnInterpToggle @ 147959c40

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ASceneCaptureCube::OnInterpToggle(ASceneCaptureCube *this,bool param_1)

{
  USceneComponent::SetVisibility
            ((USceneComponent *)(this->CaptureComponentCube).field0_0x0.DebugPtr,param_1,DirtyOnly);
  return;
}

