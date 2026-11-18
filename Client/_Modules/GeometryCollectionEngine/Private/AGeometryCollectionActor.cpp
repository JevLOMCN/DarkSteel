// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 8

// StaticClass @ 1463454f0

UClass * __cdecl AGeometryCollectionActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AGeometryCollectionActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCollectionEngine",L"GeometryCollectionActor",
               &Z_Registration_Info_UClass_AGeometryCollectionActor.InnerSingleton,
               StaticRegisterNativesAGeometryCollectionActor,0x2d0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AGeometryCollectionActor>,
               InternalVTableHelperCtorCaller<AGeometryCollectionActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGeometryCollectionActor.InnerSingleton;
}

// AGeometryCollectionActor @ 14635c440

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AGeometryCollectionActor * __thiscall
AGeometryCollectionActor::AGeometryCollectionActor
          (AGeometryCollectionActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AGeometryCollectionActor__6B_;
  (this->GeometryCollectionComponent).field0_0x0.DebugPtr = (UGeometryCollectionComponent *)0x0;
  (this->GeometryCollectionDebugDrawComponent_DEPRECATED).field0_0x0.DebugPtr =
       (UGeometryCollectionDebugDrawComponent *)0x0;
  return this;
}

// AGeometryCollectionActor @ 14635c480

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AGeometryCollectionActor * __thiscall
AGeometryCollectionActor::AGeometryCollectionActor
          (AGeometryCollectionActor *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UGeometryCollectionComponent *pUVar5;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AGeometryCollectionActor__6B_;
  (this->GeometryCollectionComponent).field0_0x0.DebugPtr = (UGeometryCollectionComponent *)0x0;
  (this->GeometryCollectionDebugDrawComponent_DEPRECATED).field0_0x0.DebugPtr =
       (UGeometryCollectionDebugDrawComponent *)0x0;
  if (5 < (byte)AGeometryCollectionActorLogging._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&::LOG_Static,(FLogCategoryBase *)&AGeometryCollectionActorLogging);
  }
  pFVar3 = ::FName::FName(&local_res8,L"GeometryCollectionComponent0");
  FVar2 = *pFVar3;
  pUVar4 = UGeometryCollectionComponent::StaticClass();
  pUVar5 = (UGeometryCollectionComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UGeometryCollectionComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->GeometryCollectionComponent).field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UGeometryCollectionComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  this->_padding_ = (longlong)(this->GeometryCollectionComponent).field0_0x0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 8;
  (this->GeometryCollectionDebugDrawComponent_DEPRECATED).field0_0x0.DebugPtr =
       (UGeometryCollectionDebugDrawComponent *)0x0;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 4;
  return this;
}

// ~AGeometryCollectionActor @ 14635ec60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AGeometryCollectionActor::~AGeometryCollectionActor(AGeometryCollectionActor *this)

{
  this->_padding_ = (longlong)&___7AGeometryCollectionActor__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 146379800

UClass * __cdecl AGeometryCollectionActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AGeometryCollectionActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCollectionEngine",L"GeometryCollectionActor",
               &Z_Registration_Info_UClass_AGeometryCollectionActor.InnerSingleton,
               StaticRegisterNativesAGeometryCollectionActor,0x2d0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AGeometryCollectionActor>,
               InternalVTableHelperCtorCaller<AGeometryCollectionActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGeometryCollectionActor.InnerSingleton;
}

// RaycastSingle @ 146385b00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
AGeometryCollectionActor::RaycastSingle
          (AGeometryCollectionActor *this,TVector<double> *param_1,TVector<double> *param_2,
          FHitResult *param_3)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  FHitResult *pFVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 local_108;
  undefined4 local_64;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((this->GeometryCollectionComponent).field0_0x0.DebugPtr != (UGeometryCollectionComponent *)0x0
     ) {
    memset(&local_108,0,0x100);
    lVar10 = 2;
    local_50 = 0;
    uStack_48 = 0;
    local_108._4_4_ = 0x3f800000;
    local_64 = 0xffffffff;
    local_40 = 0;
    uStack_38 = 0xffffffff;
    pFVar8 = param_3;
    puVar9 = &local_108;
    do {
      uVar2 = *puVar9;
      uVar3 = puVar9[1];
      uVar4 = puVar9[2];
      uVar5 = puVar9[3];
      pFVar8->FaceIndex = (int)uVar2;
      pFVar8->Time = (float)(int)((ulonglong)uVar2 >> 0x20);
      pFVar8->Distance = (float)(int)uVar3;
      pFVar8->_padding_ = (int)((ulonglong)uVar3 >> 0x20);
      uVar2 = puVar9[4];
      uVar3 = puVar9[5];
      *(undefined8 *)&pFVar8->Location = uVar4;
      *(undefined8 *)&(pFVar8->Location).field_0x8 = uVar5;
      uVar4 = puVar9[6];
      uVar5 = puVar9[7];
      *(undefined8 *)&(pFVar8->Location).field_0x10 = uVar2;
      *(undefined8 *)&pFVar8->ImpactPoint = uVar3;
      uVar2 = puVar9[8];
      uVar3 = puVar9[9];
      *(undefined8 *)&(pFVar8->ImpactPoint).field_0x8 = uVar4;
      *(undefined8 *)&(pFVar8->ImpactPoint).field_0x10 = uVar5;
      uVar4 = puVar9[10];
      uVar5 = puVar9[0xb];
      *(undefined8 *)&pFVar8->Normal = uVar2;
      *(undefined8 *)&(pFVar8->Normal).field_0x8 = uVar3;
      uVar2 = puVar9[0xc];
      uVar3 = puVar9[0xd];
      *(undefined8 *)&(pFVar8->Normal).field_0x10 = uVar4;
      *(undefined8 *)&pFVar8->ImpactNormal = uVar5;
      uVar4 = puVar9[0xe];
      uVar5 = puVar9[0xf];
      *(undefined8 *)&(pFVar8->ImpactNormal).field_0x8 = uVar2;
      *(undefined8 *)&(pFVar8->ImpactNormal).field_0x10 = uVar3;
      *(undefined8 *)&pFVar8->TraceStart = uVar4;
      *(undefined8 *)&(pFVar8->TraceStart).field_0x8 = uVar5;
      lVar10 = lVar10 + -1;
      pFVar8 = (FHitResult *)&(pFVar8->TraceStart).field_0x10;
      puVar9 = puVar9 + 0x10;
    } while (lVar10 != 0);
    dVar6 = (param_1->field0_0x0)._s_0.Y;
    dVar1 = (param_1->field0_0x0)._s_0.Z;
    *(double *)&param_3->TraceStart = (param_1->field0_0x0)._s_0.X;
    *(double *)&(param_3->TraceStart).field_0x8 = dVar6;
    dVar6 = (param_2->field0_0x0)._s_0.X;
    dVar7 = (param_2->field0_0x0)._s_0.Y;
    *(double *)&(param_3->TraceStart).field_0x10 = dVar1;
    dVar1 = (param_2->field0_0x0)._s_0.Z;
    *(double *)&param_3->TraceEnd = dVar6;
    *(double *)&(param_3->TraceEnd).field_0x8 = dVar7;
    *(double *)&(param_3->TraceEnd).field_0x10 = dVar1;
  }
  return false;
}

// StaticRegisterNativesAGeometryCollectionActor @ 14638f480

void __cdecl AGeometryCollectionActor::StaticRegisterNativesAGeometryCollectionActor(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_AGeometryCollectionActor_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execRaycastSingle @ 146395fe0

void __cdecl
AGeometryCollectionActor::execRaycastSingle(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uchar *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  uchar *puVar9;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  uchar local_258 [4];
  undefined4 local_254;
  undefined4 local_1b4;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_158;
  undefined4 local_b4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_270,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_270);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_288,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_288);
  }
  memset(local_258,0,0x100);
  local_1a0 = 0;
  uStack_198 = 0;
  uStack_188 = 0xffffffff;
  local_254 = 0x3f800000;
  local_1b4 = 0xffffffff;
  local_190 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_258,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_258);
  }
  puVar9 = local_258;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar9 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0x11].field_0x18 != 0) {
    memset(&local_158,0,0x100);
    local_a0 = 0;
    uStack_98 = 0;
    lVar8 = 2;
    local_158._4_4_ = 0x3f800000;
    local_b4 = 0xffffffff;
    local_90 = 0;
    uStack_88 = 0xffffffff;
    puVar6 = puVar9;
    puVar7 = &local_158;
    do {
      uVar2 = puVar7[1];
      uVar3 = puVar7[2];
      uVar4 = puVar7[3];
      *(undefined8 *)puVar6 = *puVar7;
      *(undefined8 *)(puVar6 + 8) = uVar2;
      uVar2 = puVar7[4];
      uVar5 = puVar7[5];
      *(undefined8 *)(puVar6 + 0x10) = uVar3;
      *(undefined8 *)(puVar6 + 0x18) = uVar4;
      uVar3 = puVar7[6];
      uVar4 = puVar7[7];
      *(undefined8 *)(puVar6 + 0x20) = uVar2;
      *(undefined8 *)(puVar6 + 0x28) = uVar5;
      uVar2 = puVar7[8];
      uVar5 = puVar7[9];
      *(undefined8 *)(puVar6 + 0x30) = uVar3;
      *(undefined8 *)(puVar6 + 0x38) = uVar4;
      uVar3 = puVar7[10];
      uVar4 = puVar7[0xb];
      *(undefined8 *)(puVar6 + 0x40) = uVar2;
      *(undefined8 *)(puVar6 + 0x48) = uVar5;
      uVar2 = puVar7[0xc];
      uVar5 = puVar7[0xd];
      *(undefined8 *)(puVar6 + 0x50) = uVar3;
      *(undefined8 *)(puVar6 + 0x58) = uVar4;
      uVar3 = puVar7[0xe];
      uVar4 = puVar7[0xf];
      *(undefined8 *)(puVar6 + 0x60) = uVar2;
      *(undefined8 *)(puVar6 + 0x68) = uVar5;
      *(undefined8 *)(puVar6 + 0x70) = uVar3;
      *(undefined8 *)(puVar6 + 0x78) = uVar4;
      lVar8 = lVar8 + -1;
      puVar6 = puVar6 + 0x80;
      puVar7 = puVar7 + 0x10;
    } while (lVar8 != 0);
    *(undefined8 *)(puVar9 + 0x70) = local_270;
    *(undefined8 *)(puVar9 + 0x78) = uStack_268;
    *(undefined8 *)(puVar9 + 0x88) = local_288;
    *(undefined8 *)(puVar9 + 0x90) = uStack_280;
    *(undefined8 *)(puVar9 + 0x80) = local_260;
    *(undefined8 *)(puVar9 + 0x98) = local_278;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

