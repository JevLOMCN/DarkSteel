// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Paper2D
// Functions: 6

// StaticClass @ 14ace1f10

UClass * __cdecl APaperTerrainActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APaperTerrainActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperTerrainActor",
               &Z_Registration_Info_UClass_APaperTerrainActor.InnerSingleton,
               StaticRegisterNativesAPaperTerrainActor,0x2d8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<APaperTerrainActor>,
               InternalVTableHelperCtorCaller<APaperTerrainActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APaperTerrainActor.InnerSingleton;
}

// APaperTerrainActor @ 14ace7bd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

APaperTerrainActor * __thiscall
APaperTerrainActor::APaperTerrainActor(APaperTerrainActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7APaperTerrainActor__6B_;
  (this->DummyRoot).field0_0x0.DebugPtr = (USceneComponent *)0x0;
  (this->SplineComponent).field0_0x0.DebugPtr = (UPaperTerrainSplineComponent *)0x0;
  (this->RenderComponent).field0_0x0.DebugPtr = (UPaperTerrainComponent *)0x0;
  return this;
}

// APaperTerrainActor @ 14ace7c10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

APaperTerrainActor * __thiscall
APaperTerrainActor::APaperTerrainActor(APaperTerrainActor *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  USceneComponent *pUVar4;
  UPaperTerrainSplineComponent *pUVar5;
  UPaperTerrainComponent *pUVar6;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7APaperTerrainActor__6B_;
  (this->DummyRoot).field0_0x0.DebugPtr = (USceneComponent *)0x0;
  (this->SplineComponent).field0_0x0.DebugPtr = (UPaperTerrainSplineComponent *)0x0;
  (this->RenderComponent).field0_0x0.DebugPtr = (UPaperTerrainComponent *)0x0;
  pFVar2 = ::FName::FName(&local_res8,L"RootComponent");
  FVar1 = *pFVar2;
  pUVar3 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar4 = (USceneComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->DummyRoot).field0_0x0.DebugPtr = pUVar4;
  pFVar2 = ::FName::FName(&local_res8,L"SplineComponent");
  FVar1 = *pFVar2;
  pUVar3 = UPaperTerrainSplineComponent::StaticClass();
  pUVar5 = (UPaperTerrainSplineComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UPaperTerrainSplineComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->SplineComponent).field0_0x0.DebugPtr = pUVar5;
  pFVar2 = ::FName::FName(&local_res8,L"RenderComponent");
  FVar1 = *pFVar2;
  pUVar3 = UPaperTerrainComponent::StaticClass();
  pUVar6 = (UPaperTerrainComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (UPaperTerrainComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->RenderComponent).field0_0x0.DebugPtr = pUVar6;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  USceneComponent::SetupAttachment
            ((USceneComponent *)(this->SplineComponent).field0_0x0.DebugPtr,
             (this->DummyRoot).field0_0x0.DebugPtr,(FName)0x0);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  USceneComponent::SetupAttachment
            ((USceneComponent *)(this->RenderComponent).field0_0x0.DebugPtr,
             (this->DummyRoot).field0_0x0.DebugPtr,(FName)0x0);
  pUVar6 = (this->RenderComponent).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 = (this->SplineComponent).field0_0x0.DebugPtr,
     pUVar5 != (UPaperTerrainSplineComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (pUVar6->AssociatedSpline).field0_0x0 = (this->SplineComponent).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 = (this->DummyRoot).field0_0x0.DebugPtr, pUVar4 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  this->_padding_ = (longlong)(this->DummyRoot).field0_0x0;
  return this;
}

// ~APaperTerrainActor @ 14aceb790

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall APaperTerrainActor::~APaperTerrainActor(APaperTerrainActor *this)

{
  this->_padding_ = (longlong)&___7APaperTerrainActor__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 14acfcd10

UClass * __cdecl APaperTerrainActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APaperTerrainActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperTerrainActor",
               &Z_Registration_Info_UClass_APaperTerrainActor.InnerSingleton,
               StaticRegisterNativesAPaperTerrainActor,0x2d8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<APaperTerrainActor>,
               InternalVTableHelperCtorCaller<APaperTerrainActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APaperTerrainActor.InnerSingleton;
}

// StaticRegisterNativesAPaperTerrainActor @ 14ad0df20

void __cdecl APaperTerrainActor::StaticRegisterNativesAPaperTerrainActor(void)

{
  return;
}

