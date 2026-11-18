// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 147322350

UClass * __cdecl ASceneCapture2D::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ASceneCapture2D.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SceneCapture2D",
               &Z_Registration_Info_UClass_ASceneCapture2D.InnerSingleton,
               StaticRegisterNativesASceneCapture2D,0x2d8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ASceneCapture2D>,
               InternalVTableHelperCtorCaller<ASceneCapture2D>,local_res8,ASceneCapture::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ASceneCapture2D.InnerSingleton;
}

// ASceneCapture2D @ 147324830

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ASceneCapture2D * __thiscall
ASceneCapture2D::ASceneCapture2D(ASceneCapture2D *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ASceneCapture2D__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->CaptureComponent2D).field0_0x0.DebugPtr = (USceneCaptureComponent2D *)0x0;
  return this;
}

// ~ASceneCapture2D @ 147325110

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ASceneCapture2D::~ASceneCapture2D(ASceneCapture2D *this)

{
  this->_padding_ = (longlong)&___7ASceneCapture__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 147326ba0

UClass * __cdecl ASceneCapture2D::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ASceneCapture2D.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SceneCapture2D",
               &Z_Registration_Info_UClass_ASceneCapture2D.InnerSingleton,
               StaticRegisterNativesASceneCapture2D,0x2d8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ASceneCapture2D>,
               InternalVTableHelperCtorCaller<ASceneCapture2D>,local_res8,ASceneCapture::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ASceneCapture2D.InnerSingleton;
}

// StaticRegisterNativesASceneCapture2D @ 147328110

void __cdecl ASceneCapture2D::StaticRegisterNativesASceneCapture2D(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_ASceneCapture2D_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnInterpToggle @ 14732a660

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl ASceneCapture2D::execOnInterpToggle(UObject *param_1,FFrame *param_2,void *param_3)

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
  OnInterpToggle((ASceneCapture2D *)param_1,local_res10[0] != 0);
  return;
}

// ASceneCapture2D @ 147928ae0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ASceneCapture2D * __thiscall
ASceneCapture2D::ASceneCapture2D(ASceneCapture2D *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  USceneCaptureComponent2D *this_00;
  FName local_res8;
  
  ASceneCapture::ASceneCapture((ASceneCapture *)this,param_1);
  this->_padding_ = (longlong)&___7ASceneCapture2D__6B_;
  (this->CaptureComponent2D).field0_0x0.DebugPtr = (USceneCaptureComponent2D *)0x0;
  pFVar2 = ::FName::FName(&local_res8,L"NewSceneCaptureComponent2D");
  FVar1 = *pFVar2;
  pUVar3 = Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
  this_00 = (USceneCaptureComponent2D *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_00 != (USceneCaptureComponent2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  (this->CaptureComponent2D).field0_0x0.DebugPtr = this_00;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  USceneComponent::SetupAttachment
            ((USceneComponent *)this_00,(USceneComponent *)this->_padding_,(FName)0x0);
  return this;
}

// CalcCamera @ 147937110

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ASceneCapture2D::CalcCamera(ASceneCapture2D *this,float param_1,FMinimalViewInfo *param_2)

{
  USceneCaptureComponent2D *pUVar1;
  
  pUVar1 = (this->CaptureComponent2D).field0_0x0.DebugPtr;
  if (pUVar1 != (USceneCaptureComponent2D *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147937122. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar1 + 0x668))();
    return;
  }
  AActor::CalcCamera((AActor *)this,param_1,param_2);
  return;
}

// OnInterpToggle @ 147959c20

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ASceneCapture2D::OnInterpToggle(ASceneCapture2D *this,bool param_1)

{
  USceneComponent::SetVisibility
            ((USceneComponent *)(this->CaptureComponent2D).field0_0x0.DebugPtr,param_1,DirtyOnly);
  return;
}

