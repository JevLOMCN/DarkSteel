// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 147321130

UClass * __cdecl APlanarReflection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APlanarReflection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PlanarReflection",
               &Z_Registration_Info_UClass_APlanarReflection.InnerSingleton,
               StaticRegisterNativesAPlanarReflection,0x2e0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<APlanarReflection>,
               InternalVTableHelperCtorCaller<APlanarReflection>,local_res8,
               ASceneCapture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APlanarReflection.InnerSingleton;
}

// APlanarReflection @ 147324690

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

APlanarReflection * __thiscall
APlanarReflection::APlanarReflection(APlanarReflection *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7APlanarReflection__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->PlanarReflectionComponent).field0_0x0.DebugPtr = (UPlanarReflectionComponent *)0x0;
  return this;
}

// ~APlanarReflection @ 147325010

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall APlanarReflection::~APlanarReflection(APlanarReflection *this)

{
  this->_padding_ = (longlong)&___7ASceneCapture__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 147326720

UClass * __cdecl APlanarReflection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APlanarReflection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PlanarReflection",
               &Z_Registration_Info_UClass_APlanarReflection.InnerSingleton,
               StaticRegisterNativesAPlanarReflection,0x2e0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<APlanarReflection>,
               InternalVTableHelperCtorCaller<APlanarReflection>,local_res8,
               ASceneCapture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APlanarReflection.InnerSingleton;
}

// StaticRegisterNativesAPlanarReflection @ 147328020

void __cdecl APlanarReflection::StaticRegisterNativesAPlanarReflection(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_APlanarReflection_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnInterpToggle @ 14732a5d0

void __cdecl APlanarReflection::execOnInterpToggle(UObject *param_1,FFrame *param_2,void *param_3)

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
  OnInterpToggle((APlanarReflection *)param_1,local_res10[0] != 0);
  return;
}

// APlanarReflection @ 147928620

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

APlanarReflection * __thiscall
APlanarReflection::APlanarReflection(APlanarReflection *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  longlong lVar3;
  TObjectPtr<UPlanarReflectionComponent>_u_0 TVar4;
  FName *pFVar5;
  UClass *pUVar6;
  UPlanarReflectionComponent *pUVar7;
  USceneComponent *this_00;
  FName local_res8;
  FName local_res18;
  
  ASceneCapture::ASceneCapture((ASceneCapture *)this,param_1);
  this->bShowPreviewPlane_DEPRECATED = true;
  this->_padding_ = (longlong)&___7APlanarReflection__6B_;
  (this->PlanarReflectionComponent).field0_0x0.DebugPtr = (UPlanarReflectionComponent *)0x0;
  pFVar5 = ::FName::FName(&local_res8,L"NewPlanarReflectionComponent");
  FVar2 = *pFVar5;
  pUVar6 = Z_Construct_UClass_UPlanarReflectionComponent_NoRegister();
  pUVar7 = (UPlanarReflectionComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar6,pUVar6,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 != (UPlanarReflectionComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (this->PlanarReflectionComponent).field0_0x0.DebugPtr = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 != (UPlanarReflectionComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  this->_padding_ = (longlong)(this->PlanarReflectionComponent).field0_0x0;
  pFVar5 = ::FName::FName(&local_res18,L"DrawBox0");
  FVar2 = *pFVar5;
  pUVar6 = Z_Construct_UClass_UBoxComponent_NoRegister();
  this_00 = (USceneComponent *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar6,pUVar6,true,false);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  USceneComponent::SetupAttachment
            (this_00,(USceneComponent *)(this->PlanarReflectionComponent).field0_0x0.DebugPtr,
             (FName)0x0);
  lVar3 = this_00->_padding_;
  pbVar1 = (byte *)((longlong)&this_00[1]._padding_ + 1);
  *pbVar1 = *pbVar1 | 0x10;
  (**(code **)(lVar3 + 0x788))(this_00,UCollisionProfile::NoCollision_ProfileName,1);
  TVar4 = (this->PlanarReflectionComponent).field0_0x0;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  *(USceneComponent **)((longlong)TVar4 + 0x350) = this_00;
  return this;
}

// OnInterpToggle @ 147959c00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall APlanarReflection::OnInterpToggle(APlanarReflection *this,bool param_1)

{
  USceneComponent::SetVisibility
            ((USceneComponent *)(this->PlanarReflectionComponent).field0_0x0.DebugPtr,param_1,
             DirtyOnly);
  return;
}

// PostLoad @ 14795ccb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall APlanarReflection::PostLoad(APlanarReflection *this)

{
  UPlanarReflectionComponent *pUVar1;
  int iVar2;
  FGuid local_18;
  
  AActor::PostLoad((AActor *)this);
  local_18 = FEditorObjectVersion::GUID;
  iVar2 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_18);
  if ((iVar2 < 0x1b) &&
     (pUVar1 = (this->PlanarReflectionComponent).field0_0x0.DebugPtr,
     pUVar1 != (UPlanarReflectionComponent *)0x0)) {
    pUVar1->bShowPreviewPlane = this->bShowPreviewPlane_DEPRECATED;
  }
  return;
}

