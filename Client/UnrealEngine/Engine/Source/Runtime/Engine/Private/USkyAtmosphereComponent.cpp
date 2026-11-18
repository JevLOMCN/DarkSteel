// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 75

// StaticClass @ 1475feb70

UClass * __cdecl USkyAtmosphereComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USkyAtmosphereComponent.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SkyAtmosphereComponent",
               &Z_Registration_Info_UClass_USkyAtmosphereComponent.InnerSingleton,
               StaticRegisterNativesUSkyAtmosphereComponent,0x360,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<USkyAtmosphereComponent>,
               InternalVTableHelperCtorCaller<USkyAtmosphereComponent>,aFStackX_8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USkyAtmosphereComponent.InnerSingleton;
}

// USkyAtmosphereComponent @ 1479a6680

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

USkyAtmosphereComponent * __thiscall
USkyAtmosphereComponent::USkyAtmosphereComponent
          (USkyAtmosphereComponent *this,FVTableHelper *param_1)

{
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->OtherTentDistribution).TipAltitude = 0.0;
  (this->OtherTentDistribution).TipValue = 0.0;
  (this->bStaticLightingBuiltGUID).A = 0;
  (this->bStaticLightingBuiltGUID).B = 0;
  (this->bStaticLightingBuiltGUID).C = 0;
  (this->bStaticLightingBuiltGUID).D = 0;
  this->bIsAtmosphericFog = false;
  (this->OtherTentDistribution).Width = 1.0;
  return this;
}

// USkyAtmosphereComponent @ 1479a66f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

USkyAtmosphereComponent * __thiscall
USkyAtmosphereComponent::USkyAtmosphereComponent
          (USkyAtmosphereComponent *this,FObjectInitializer *param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  FLinearColor FVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  FGuid *pFVar9;
  FGuid local_18;
  
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  this->BottomRadius = 6360.0;
  this->AtmosphereHeight = 60.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->OtherTentDistribution).Width = 1.0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->OtherTentDistribution).TipAltitude = 0.0;
  (this->OtherTentDistribution).TipValue = 0.0;
  (this->bStaticLightingBuiltGUID).A = 0;
  (this->bStaticLightingBuiltGUID).B = 0;
  (this->bStaticLightingBuiltGUID).C = 0;
  (this->bStaticLightingBuiltGUID).D = 0;
  this->SkyAtmosphereSceneProxy = (FSkyAtmosphereSceneProxy *)0x0;
  this->bIsAtmosphericFog = false;
  this->TransformMode = PlanetTopAtAbsoluteWorldOrigin;
  (this->GroundAlbedo).field0_0x0.Bits = 0xffaaaaaa;
  (this->RayleighScattering).field0_0x0._s_0.R = 0.175287;
  (this->RayleighScattering).field0_0x0._s_0.G = 0.40960723;
  (this->RayleighScattering).field0_0x0._s_0.B = 1.0;
  (this->RayleighScattering).field0_0x0._s_0.A = 30.21148;
  fVar6 = __real_3b808081;
  this->RayleighScatteringScale = 0.0331;
  this->RayleighExponentialDistribution = 8.0;
  fVar1 = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.G];
  fVar2 = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.B];
  uVar8 = (uint)FColor::White.field0_0x0._s_0.A;
  (this->MieScattering).field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.R];
  (this->MieScattering).field0_0x0._s_0.G = fVar1;
  (this->MieScattering).field0_0x0._s_0.B = fVar2;
  (this->MieScattering).field0_0x0._s_0.A = (float)uVar8 * fVar6;
  this->MieScatteringScale = 0.003996;
  fVar1 = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.G];
  fVar2 = FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.B];
  uVar8 = (uint)FColor::White.field0_0x0._s_0.A;
  (this->MieAbsorption).field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.R];
  (this->MieAbsorption).field0_0x0._s_0.G = fVar1;
  (this->MieAbsorption).field0_0x0._s_0.B = fVar2;
  (this->MieAbsorption).field0_0x0._s_0.A = (float)uVar8 * fVar6;
  this->MieAbsorptionScale = 0.000444;
  this->MieAnisotropy = 0.8;
  this->MieExponentialDistribution = 1.2;
  this->OtherAbsorptionScale = 0.001881;
  (this->OtherAbsorption).field0_0x0._s_0.R = 0.34556085;
  (this->OtherAbsorption).field0_0x0._s_0.G = 0.99999994;
  (this->OtherAbsorption).field0_0x0._s_0.B = 0.045188725;
  (this->OtherAbsorption).field0_0x0._s_0.A = 531.6321;
  (this->OtherTentDistribution).TipAltitude = 25.0;
  (this->OtherTentDistribution).TipValue = 1.0;
  (this->OtherTentDistribution).Width = 15.0;
  (this->SkyLuminanceFactor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  FVar5 = FLinearColor::White;
  this->bHoldout = '\0';
  this->bRenderInMainPass = '\x01';
  (this->SkyAndAerialPerspectiveLuminanceFactor).field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar5.field0_0x0;
  this->MultiScatteringFactor = 1.0;
  this->AerialPespectiveViewDistanceScale = 1.0;
  this->HeightFogContribution = 1.0;
  this->TransmittanceMinLightElevationAngle = -90.0;
  this->AerialPerspectiveStartDepth = 0.1;
  this->TraceSampleCountScale = 1.0;
  this->OverrideAtmosphericLight[0] = false;
  this->OverrideAtmosphericLight[1] = false;
  bVar7 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if ((!bVar7) &&
     ((((this->bStaticLightingBuiltGUID).B == 0 && (this->bStaticLightingBuiltGUID).A == 0) &&
      (this->bStaticLightingBuiltGUID).D == 0) && (this->bStaticLightingBuiltGUID).C == 0)) {
    pFVar9 = FGuid::NewGuid(&local_18);
    uVar8 = pFVar9->B;
    uVar3 = pFVar9->C;
    uVar4 = pFVar9->D;
    (this->bStaticLightingBuiltGUID).A = pFVar9->A;
    (this->bStaticLightingBuiltGUID).B = uVar8;
    (this->bStaticLightingBuiltGUID).C = uVar3;
    (this->bStaticLightingBuiltGUID).D = uVar4;
  }
  return this;
}

// ~USkyAtmosphereComponent @ 1479a96b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USkyAtmosphereComponent::~USkyAtmosphereComponent(USkyAtmosphereComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  USceneComponent::~USceneComponent((USceneComponent *)this);
  return;
}

// CreateRenderState_Concurrent @ 1479bb970

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
USkyAtmosphereComponent::CreateRenderState_Concurrent
          (USkyAtmosphereComponent *this,FRegisterComponentContext *param_1)

{
  FSceneInterface *pFVar1;
  undefined8 uVar2;
  double dVar3;
  bool bVar4;
  char cVar5;
  ULevel *pUVar6;
  ULevel *pUVar7;
  FSkyAtmosphereMapBuildData *pFVar8;
  UWorld *pUVar9;
  FSkyAtmosphereSceneProxy *pFVar10;
  UMapBuildDataRegistry *this_00;
  undefined8 uVar11;
  FGuid local_18;
  
  UActorComponent::CreateRenderState_Concurrent((UActorComponent *)this,param_1);
  bVar4 = USceneComponent::ShouldComponentAddToScene((USceneComponent *)this);
  if ((this->_padding_ & 0x20) == 0) {
    return;
  }
  if (!bVar4) {
    return;
  }
  bVar4 = USceneComponent::ShouldComponentAddToScene((USceneComponent *)this);
  if (!bVar4) {
    return;
  }
  bVar4 = USceneComponent::ShouldRender((USceneComponent *)this);
  if (!bVar4) {
    return;
  }
  if ((this->_padding_ & 1) == 0) {
    return;
  }
  if ((this->_padding_ != 0) && ((*(uint *)(this->_padding_ + 8) & 0x10) != 0)) {
    return;
  }
  if (((((AActor *)this->_padding_ == (AActor *)0x0) ||
       (pUVar6 = AActor::GetLevel((AActor *)this->_padding_), pUVar6 == (ULevel *)0x0)) ||
      (pUVar9 = (pUVar6->OwningWorld).field0_0x0.DebugPtr, pUVar9 == (UWorld *)0x0)) ||
     (((pUVar7 = UWorld::GetActiveLightingScenario(pUVar9), pUVar7 == (ULevel *)0x0 ||
       (this_00 = (pUVar7->MapBuildData).field0_0x0.DebugPtr,
       this_00 == (UMapBuildDataRegistry *)0x0)) &&
      (this_00 = (pUVar6->MapBuildData).field0_0x0.DebugPtr, this_00 == (UMapBuildDataRegistry *)0x0
      )))) {
    pFVar8 = (FSkyAtmosphereMapBuildData *)0x0;
  }
  else {
    local_18.A = (this->bStaticLightingBuiltGUID).A;
    local_18.B = (this->bStaticLightingBuiltGUID).B;
    local_18.C = (this->bStaticLightingBuiltGUID).C;
    local_18.D = (this->bStaticLightingBuiltGUID).D;
    pFVar8 = UMapBuildDataRegistry::GetSkyAtmosphereBuildData(this_00,&local_18);
  }
  if ((this->_padding_ != 0) ||
     (pUVar9 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar9 != (UWorld *)0x0)
     ) {
    pUVar9 = (UWorld *)this->_padding_;
    if (pUVar9 == (UWorld *)0x0) {
      pUVar9 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    pFVar1 = pUVar9->Scene;
    cVar5 = (**(code **)(pFVar1->_padding_ + 0x118))(pFVar1);
    if (cVar5 == '\0') {
      cVar5 = (**(code **)(pFVar1->_padding_ + 0x120))(pFVar1);
      bVar4 = false;
      if (cVar5 != '\0') goto LAB_1479bba9c;
    }
    else {
LAB_1479bba9c:
      bVar4 = true;
    }
    if ((pFVar8 == (FSkyAtmosphereMapBuildData *)0x0) && (uVar11 = 0, bVar4)) goto LAB_1479bbaaa;
  }
  uVar11 = 1;
LAB_1479bbaaa:
  pFVar10 = ::operator_new(0x128);
  if (pFVar10 == (FSkyAtmosphereSceneProxy *)0x0) {
    pFVar10 = (FSkyAtmosphereSceneProxy *)0x0;
  }
  else {
    pFVar10->bStaticLightingBuilt = false;
    FAtmosphereSetup::FAtmosphereSetup(&pFVar10->AtmosphereSetup,this);
    pFVar10->bHoldout = this->bHoldout;
    pFVar10->bRenderInMainPass = this->bRenderInMainPass != '\0';
    uVar2 = *(undefined8 *)((longlong)&(this->SkyLuminanceFactor).field0_0x0 + 8);
    *(undefined8 *)&(pFVar10->SkyLuminanceFactor).field0_0x0 =
         *(undefined8 *)&(this->SkyLuminanceFactor).field0_0x0;
    *(undefined8 *)((longlong)&(pFVar10->SkyLuminanceFactor).field0_0x0 + 8) = uVar2;
    uVar2 = *(undefined8 *)
             ((longlong)&(this->SkyAndAerialPerspectiveLuminanceFactor).field0_0x0 + 8);
    *(undefined8 *)&(pFVar10->SkyAndAerialPerspectiveLuminanceFactor).field0_0x0 =
         *(undefined8 *)&(this->SkyAndAerialPerspectiveLuminanceFactor).field0_0x0;
    *(undefined8 *)((longlong)&(pFVar10->SkyAndAerialPerspectiveLuminanceFactor).field0_0x0 + 8) =
         uVar2;
    pFVar10->AerialPespectiveViewDistanceScale = this->AerialPespectiveViewDistanceScale;
    pFVar10->HeightFogContribution = this->HeightFogContribution;
    pFVar10->AerialPerspectiveStartDepthKm = this->AerialPerspectiveStartDepth;
    pFVar10->TraceSampleCountScale = this->TraceSampleCountScale;
    *(undefined2 *)pFVar10->OverrideAtmosphericLight = *(undefined2 *)this->OverrideAtmosphericLight
    ;
    dVar3 = this->OverrideAtmosphericLightDirection[0].field0_0x0._s_0.Y;
    pFVar10->OverrideAtmosphericLightDirection[0].field0_0x0._s_0.X =
         this->OverrideAtmosphericLightDirection[0].field0_0x0._s_0.X;
    pFVar10->OverrideAtmosphericLightDirection[0].field0_0x0._s_0.Y = dVar3;
    dVar3 = this->OverrideAtmosphericLightDirection[1].field0_0x0._s_0.X;
    pFVar10->OverrideAtmosphericLightDirection[0].field0_0x0._s_0.Z =
         this->OverrideAtmosphericLightDirection[0].field0_0x0._s_0.Z;
    pFVar10->OverrideAtmosphericLightDirection[1].field0_0x0._s_0.X = dVar3;
    dVar3 = this->OverrideAtmosphericLightDirection[1].field0_0x0._s_0.Z;
    pFVar10->OverrideAtmosphericLightDirection[1].field0_0x0._s_0.Y =
         this->OverrideAtmosphericLightDirection[1].field0_0x0._s_0.Y;
    pFVar10->OverrideAtmosphericLightDirection[1].field0_0x0._s_0.Z = dVar3;
  }
  pUVar9 = (UWorld *)this->_padding_;
  this->SkyAtmosphereSceneProxy = pFVar10;
  if (pUVar9 == (UWorld *)0x0) {
    pUVar9 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  (**(code **)(pUVar9->Scene->_padding_ + 0x2d0))
            (pUVar9->Scene,this->SkyAtmosphereSceneProxy,uVar11);
  return;
}

// DestroyRenderState_Concurrent @ 1479bcb60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USkyAtmosphereComponent::DestroyRenderState_Concurrent(USkyAtmosphereComponent *this)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FSkyAtmosphereSceneProxy *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FSkyAtmosphereSceneProxy *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  UActorComponent::DestroyRenderState_Concurrent((UActorComponent *)this);
  if (this->SkyAtmosphereSceneProxy != (FSkyAtmosphereSceneProxy *)0x0) {
    pUVar3 = (UWorld *)this->_padding_;
    if (pUVar3 == (UWorld *)0x0) {
      pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    (**(code **)(pUVar3->Scene->_padding_ + 0x2d8))(pUVar3->Scene,this->SkyAtmosphereSceneProxy);
    local_60 = (undefined ***)0x0;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`USkyAtmosphereComponent::DestroyRenderState_Concurrent'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    pFStack_70 = this->SkyAtmosphereSceneProxy;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`USkyAtmosphereComponent::DestroyRenderState_Concurrent'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_USkyAtmosphereComponent::DestroyRenderState_Concurrent_::__l5::TSTR_FDestroySkyAtmosphereSceneProxyCommand261>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      pFStack_40 = pFStack_70;
      local_38 = local_68;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar4 = (FRenderCommandTag *)
               TRenderCommandTag<`USkyAtmosphereComponent::DestroyRenderState_Concurrent'::__l5::TSTR_FDestroySkyAtmosphereSceneProxyCommand261>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar4);
      uVar6 = (ulonglong)local_28;
      if (2 < uVar6) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar6] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar5 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar5 = local_30;
          }
          (*(code *)(*pppuVar5)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar6])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar5 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar5 = local_60;
      }
      (*(code *)(*pppuVar5)[2])();
    }
    this->SkyAtmosphereSceneProxy = (FSkyAtmosphereSceneProxy *)0x0;
  }
  return;
}

// GetAtmosphereTransmitanceOnGroundAtPlanetTop @ 1479c4110

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

FLinearColor * __thiscall
USkyAtmosphereComponent::GetAtmosphereTransmitanceOnGroundAtPlanetTop
          (USkyAtmosphereComponent *this,FLinearColor *__return_storage_ptr__,
          UDirectionalLightComponent *param_1)

{
  undefined8 uVar1;
  TVector<double> *pTVar2;
  TVector<double>_u_0 local_f8;
  FLinearColor_u_0 local_e0;
  TVector<double> local_d0;
  FAtmosphereSetup local_b8;
  
  if (param_1 == (UDirectionalLightComponent *)0x0) {
    (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White;
  }
  else {
    FAtmosphereSetup::FAtmosphereSetup(&local_b8,this);
    pTVar2 = ULightComponent::GetDirection((ULightComponent *)param_1,&local_d0);
    uVar1 = *(undefined8 *)((longlong)&pTVar2->field0_0x0 + 0x10);
    local_f8._0_4_ = *(uint *)&pTVar2->field0_0x0 ^ (uint)__xmm_80000000000000008000000000000000;
    local_f8._4_4_ =
         *(uint *)((longlong)&pTVar2->field0_0x0 + 4) ^ __xmm_80000000000000008000000000000000._4_4_
    ;
    local_f8._8_4_ = *(uint *)((longlong)&pTVar2->field0_0x0 + 8) ^ _UNK_15066df78;
    local_f8._12_4_ = *(uint *)((longlong)&pTVar2->field0_0x0 + 0xc) ^ _UNK_15066df7c;
    local_f8._s_0.Z =
         (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          (uint)uVar1 ^ (uint)__xmm_80000000000000008000000000000000);
    FAtmosphereSetup::GetTransmittanceAtGroundLevel
              (&local_b8,(FLinearColor *)&local_e0._s_0,(TVector<double> *)&local_f8._s_0);
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = local_e0._0_8_;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = local_e0._8_8_;
  }
  return __return_storage_ptr__;
}

// GetAtmosphericLightToMatchIlluminanceOnGround @ 1479c41b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall
USkyAtmosphereComponent::GetAtmosphericLightToMatchIlluminanceOnGround
          (USkyAtmosphereComponent *this,TVector<double> *param_1,float param_2)

{
  FColorSpace *this_00;
  float fVar1;
  FLinearColor local_d8;
  FAtmosphereSetup local_c8;
  
  FAtmosphereSetup::FAtmosphereSetup(&local_c8,this);
  FAtmosphereSetup::GetTransmittanceAtGroundLevel(&local_c8,&local_d8,param_1);
  this_00 = UE::Color::FColorSpace::GetWorking();
  fVar1 = UE::Color::FColorSpace::GetLuminance(this_00,&local_d8);
  if (fVar1 <= __real_322bcc77) {
    fVar1 = __real_322bcc77;
  }
  return param_2 / fVar1;
}

// GetOverrideLightStatus @ 1479ccb50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
USkyAtmosphereComponent::GetOverrideLightStatus
          (USkyAtmosphereComponent *this,bool *param_1,TVector<double> *param_2)

{
  double dVar1;
  
  *(undefined2 *)param_1 = *(undefined2 *)this->OverrideAtmosphericLight;
  dVar1 = this->OverrideAtmosphericLightDirection[0].field0_0x0._s_0.Y;
  (param_2->field0_0x0)._s_0.X = this->OverrideAtmosphericLightDirection[0].field0_0x0._s_0.X;
  (param_2->field0_0x0)._s_0.Y = dVar1;
  dVar1 = this->OverrideAtmosphericLightDirection[1].field0_0x0._s_0.X;
  (param_2->field0_0x0)._s_0.Z = this->OverrideAtmosphericLightDirection[0].field0_0x0._s_0.Z;
  param_2[1].field0_0x0._s_0.X = dVar1;
  dVar1 = this->OverrideAtmosphericLightDirection[1].field0_0x0._s_0.Z;
  param_2[1].field0_0x0._s_0.Y = this->OverrideAtmosphericLightDirection[1].field0_0x0._s_0.Y;
  param_2[1].field0_0x0._s_0.Z = dVar1;
  return;
}

// GetOverridenAtmosphereLightDirection @ 1479ccb90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __thiscall
USkyAtmosphereComponent::GetOverridenAtmosphereLightDirection
          (USkyAtmosphereComponent *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  undefined8 uVar4;
  bool bVar5;
  TVector<double> *pTVar6;
  
  if (1 < (uint)param_1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtmosphereLightIndex >= 0 && AtmosphereLightIndex < 2",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SkyAtmosphereComponent.cpp"
                       ,0x19d,L"");
    uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TVector<double> *)(*pcVar2)();
      return pTVar6;
    }
    if (1 < (uint)param_1) {
      (__return_storage_ptr__->field0_0x0)._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar4;
      (__return_storage_ptr__->field0_0x0)._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      return __return_storage_ptr__;
    }
  }
  dVar3 = this->OverrideAtmosphericLightDirection[param_1].field0_0x0._s_0.Y;
  dVar1 = this->OverrideAtmosphericLightDirection[param_1].field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       this->OverrideAtmosphericLightDirection[param_1].field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1479cdc80

UClass * __cdecl USkyAtmosphereComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USkyAtmosphereComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SkyAtmosphereComponent",
               &Z_Registration_Info_UClass_USkyAtmosphereComponent.InnerSingleton,
               StaticRegisterNativesUSkyAtmosphereComponent,0x360,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<USkyAtmosphereComponent>,
               InternalVTableHelperCtorCaller<USkyAtmosphereComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USkyAtmosphereComponent.InnerSingleton;
}

// IsAtmosphereLightDirectionOverriden @ 1479da380

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
USkyAtmosphereComponent::IsAtmosphereLightDirectionOverriden
          (USkyAtmosphereComponent *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (1 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtmosphereLightIndex >= 0 && AtmosphereLightIndex < 2",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SkyAtmosphereComponent.cpp"
                       ,0x193,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if (1 < (uint)param_1) {
      return false;
    }
  }
  return this->OverrideAtmosphericLight[param_1];
}

// OverrideAtmosphereLightDirection @ 1479dce70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USkyAtmosphereComponent::OverrideAtmosphereLightDirection
          (USkyAtmosphereComponent *this,int param_1,TVector<double> *param_2)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  
  if (1 < (uint)param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtmosphereLightIndex >= 0 && AtmosphereLightIndex < 2",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SkyAtmosphereComponent.cpp"
                       ,0x17d,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar3 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar3) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) &&
     ((this->SkyAtmosphereSceneProxy != (FSkyAtmosphereSceneProxy *)0x0 &&
      (((this->OverrideAtmosphericLight[param_1] == false ||
        ((param_2->field0_0x0)._s_0.X !=
         this->OverrideAtmosphericLightDirection[param_1].field0_0x0._s_0.X)) ||
       (((param_2->field0_0x0)._s_0.Y !=
         this->OverrideAtmosphericLightDirection[param_1].field0_0x0._s_0.Y ||
        ((param_2->field0_0x0)._s_0.Z !=
         this->OverrideAtmosphericLightDirection[param_1].field0_0x0._s_0.Z)))))))) {
    this->OverrideAtmosphericLight[param_1] = true;
    dVar2 = (param_2->field0_0x0)._s_0.Y;
    this->OverrideAtmosphericLightDirection[param_1].field0_0x0._s_0.X =
         (param_2->field0_0x0)._s_0.X;
    this->OverrideAtmosphericLightDirection[param_1].field0_0x0._s_0.Y = dVar2;
    this->OverrideAtmosphericLightDirection[param_1].field0_0x0._s_0.Z =
         (param_2->field0_0x0)._s_0.Z;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// ResetAtmosphereLightDirectionOverride @ 1479e4c90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
USkyAtmosphereComponent::ResetAtmosphereLightDirectionOverride
          (USkyAtmosphereComponent *this,int param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  
  if (1 < (uint)param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtmosphereLightIndex >= 0 && AtmosphereLightIndex < 2",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SkyAtmosphereComponent.cpp"
                       ,0x1a7,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (1 < (uint)param_1) {
      return;
    }
  }
  this->OverrideAtmosphericLight[param_1] = false;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->OverrideAtmosphericLightDirection[param_1].field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->OverrideAtmosphericLightDirection[param_1].field0_0x0._s_0.Y = (double)uVar2;
  this->OverrideAtmosphericLightDirection[param_1].field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// SendRenderTransformCommand @ 1479e50b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall USkyAtmosphereComponent::SendRenderTransformCommand(USkyAtmosphereComponent *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  code **ppcVar4;
  ulonglong uVar5;
  undefined1 auStack_188 [32];
  code *local_168;
  code *pcStack_160;
  code *local_158;
  code *pcStack_150;
  code *local_148;
  code *pcStack_140;
  code *local_138;
  code *pcStack_130;
  code *local_128;
  code *pcStack_120;
  code *local_118;
  code *pcStack_110;
  FSkyAtmosphereSceneProxy *local_108;
  code *pcStack_100;
  code *local_f8;
  code *pcStack_f0;
  code *local_e8;
  code *pcStack_e0;
  code *local_d8;
  code *pcStack_d0;
  code *local_c8;
  code *pcStack_c0;
  code *local_b8;
  code *pcStack_b0;
  code *local_a8;
  code *pcStack_a0;
  ESkyAtmosphereTransformMode local_98;
  undefined7 uStack_97;
  code *pcStack_90;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  undefined1 local_58 [40];
  code **local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_188;
  local_108 = this->SkyAtmosphereSceneProxy;
  if (local_108 != (FSkyAtmosphereSceneProxy *)0x0) {
    local_168 = (code *)this->_padding_;
    pcStack_160 = (code *)this->_padding_;
    local_158 = (code *)this->_padding_;
    pcStack_150 = (code *)this->_padding_;
    local_148 = (code *)this->_padding_;
    pcStack_140 = (code *)this->_padding_;
    local_138 = (code *)this->_padding_;
    pcStack_130 = (code *)this->_padding_;
    local_128 = (code *)this->_padding_;
    pcStack_120 = (code *)this->_padding_;
    local_118 = (code *)this->_padding_;
    pcStack_110 = (code *)this->_padding_;
    local_98 = this->TransformMode;
    local_88[0] = (code *)0x0;
    local_f8 = local_168;
    pcStack_f0 = pcStack_160;
    local_e8 = local_158;
    pcStack_e0 = pcStack_150;
    local_d8 = local_148;
    pcStack_d0 = pcStack_140;
    local_c8 = local_138;
    pcStack_c0 = pcStack_130;
    local_b8 = local_128;
    pcStack_b0 = pcStack_120;
    local_a8 = local_118;
    pcStack_a0 = pcStack_110;
    local_60 = FMemory::Malloc(0x90,0x10);
    local_60[2] = (code *)local_108;
    local_60[3] = pcStack_100;
    *local_60 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`USkyAtmosphereComponent::SendRenderTransformCommand'::`5'::<lambda_1>,1,1>
                         ::_vftable_;
    local_60[4] = local_168;
    local_60[5] = pcStack_160;
    local_60[6] = local_158;
    local_60[7] = pcStack_150;
    local_60[8] = local_148;
    local_60[9] = pcStack_140;
    local_60[10] = local_138;
    local_60[0xb] = pcStack_130;
    local_60[0xc] = local_128;
    local_60[0xd] = pcStack_120;
    local_60[0xe] = local_118;
    local_60[0xf] = pcStack_110;
    local_60[0x10] = (code *)CONCAT71(uStack_97,local_98);
    local_60[0x11] = pcStack_90;
    if (local_60 != (code **)0xfffffffffffffff0) {
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`USkyAtmosphereComponent::SendRenderTransformCommand'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_USkyAtmosphereComponent::SendRenderTransformCommand_::__l5::TSTR_FUpdateSkyAtmosphereSceneProxyTransformCommand194>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_60 = (code **)0x0;
      local_58._16_8_ = local_78[0];
      local_58._24_8_ = local_78[1];
      local_58._32_8_ = local_78[2];
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar3 = (FRenderCommandTag *)
               TRenderCommandTag<`USkyAtmosphereComponent::SendRenderTransformCommand'::__l5::TSTR_FUpdateSkyAtmosphereSceneProxyTransformCommand194>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar3);
      uVar5 = (ulonglong)local_28;
      if (2 < uVar5) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          ppcVar4 = (code **)(local_58 + 0x10);
          if (local_30 != (code **)0x0) {
            ppcVar4 = local_30;
          }
          (**(code **)(*ppcVar4 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      ppcVar4 = local_88 + 2;
      if (local_60 != (code **)0x0) {
        ppcVar4 = local_60;
      }
      (**(code **)(*ppcVar4 + 0x10))();
    }
  }
  return;
}

// SendRenderTransform_Concurrent @ 1479e52f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USkyAtmosphereComponent::SendRenderTransform_Concurrent(USkyAtmosphereComponent *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  code **ppcVar4;
  ulonglong uVar5;
  undefined1 auStack_188 [32];
  code *local_168;
  code *pcStack_160;
  code *local_158;
  code *pcStack_150;
  code *local_148;
  code *pcStack_140;
  code *local_138;
  code *pcStack_130;
  code *local_128;
  code *pcStack_120;
  code *local_118;
  code *pcStack_110;
  FSkyAtmosphereSceneProxy *local_108;
  code *pcStack_100;
  code *local_f8;
  code *pcStack_f0;
  code *local_e8;
  code *pcStack_e0;
  code *local_d8;
  code *pcStack_d0;
  code *local_c8;
  code *pcStack_c0;
  code *local_b8;
  code *pcStack_b0;
  code *local_a8;
  code *pcStack_a0;
  ESkyAtmosphereTransformMode local_98;
  undefined7 uStack_97;
  code *pcStack_90;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  undefined1 local_58 [40];
  code **local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_188;
  UActorComponent::SendRenderTransform_Concurrent((UActorComponent *)this);
  local_108 = this->SkyAtmosphereSceneProxy;
  if (local_108 != (FSkyAtmosphereSceneProxy *)0x0) {
    local_168 = (code *)this->_padding_;
    pcStack_160 = (code *)this->_padding_;
    local_158 = (code *)this->_padding_;
    pcStack_150 = (code *)this->_padding_;
    local_148 = (code *)this->_padding_;
    pcStack_140 = (code *)this->_padding_;
    local_138 = (code *)this->_padding_;
    pcStack_130 = (code *)this->_padding_;
    local_128 = (code *)this->_padding_;
    pcStack_120 = (code *)this->_padding_;
    local_118 = (code *)this->_padding_;
    pcStack_110 = (code *)this->_padding_;
    local_98 = this->TransformMode;
    local_88[0] = (code *)0x0;
    local_f8 = local_168;
    pcStack_f0 = pcStack_160;
    local_e8 = local_158;
    pcStack_e0 = pcStack_150;
    local_d8 = local_148;
    pcStack_d0 = pcStack_140;
    local_c8 = local_138;
    pcStack_c0 = pcStack_130;
    local_b8 = local_128;
    pcStack_b0 = pcStack_120;
    local_a8 = local_118;
    pcStack_a0 = pcStack_110;
    local_60 = FMemory::Malloc(0x90,0x10);
    local_60[2] = (code *)local_108;
    local_60[3] = pcStack_100;
    *local_60 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`USkyAtmosphereComponent::SendRenderTransformCommand'::`5'::<lambda_1>,1,1>
                         ::_vftable_;
    local_60[4] = local_168;
    local_60[5] = pcStack_160;
    local_60[6] = local_158;
    local_60[7] = pcStack_150;
    local_60[8] = local_148;
    local_60[9] = pcStack_140;
    local_60[10] = local_138;
    local_60[0xb] = pcStack_130;
    local_60[0xc] = local_128;
    local_60[0xd] = pcStack_120;
    local_60[0xe] = local_118;
    local_60[0xf] = pcStack_110;
    local_60[0x10] = (code *)CONCAT71(uStack_97,local_98);
    local_60[0x11] = pcStack_90;
    if (local_60 != (code **)0xfffffffffffffff0) {
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`USkyAtmosphereComponent::SendRenderTransformCommand'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_USkyAtmosphereComponent::SendRenderTransformCommand_::__l5::TSTR_FUpdateSkyAtmosphereSceneProxyTransformCommand194>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_60 = (code **)0x0;
      local_58._16_8_ = local_78[0];
      local_58._24_8_ = local_78[1];
      local_58._32_8_ = local_78[2];
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar3 = (FRenderCommandTag *)
               TRenderCommandTag<`USkyAtmosphereComponent::SendRenderTransformCommand'::__l5::TSTR_FUpdateSkyAtmosphereSceneProxyTransformCommand194>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar3);
      uVar5 = (ulonglong)local_28;
      if (2 < uVar5) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          ppcVar4 = (code **)(local_58 + 0x10);
          if (local_30 != (code **)0x0) {
            ppcVar4 = local_30;
          }
          (**(code **)(*ppcVar4 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      ppcVar4 = local_88 + 2;
      if (local_60 != (code **)0x0) {
        ppcVar4 = local_60;
      }
      (**(code **)(*ppcVar4 + 0x10))();
    }
  }
  return;
}

// Serialize @ 1479e59e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USkyAtmosphereComponent::Serialize(USkyAtmosphereComponent *this,FArchive *param_1)

{
  int iVar1;
  
  USceneComponent::Serialize((USceneComponent *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID);
  if ((((0x2d < iVar1) && ((param_1->field_0x28 & 1) != 0)) && (this->bIsAtmosphericFog != false))
     || (((param_1->field_0x28 & 4) != 0 || (this->bIsAtmosphericFog == false)))) {
    ::operator<<(param_1,&this->bStaticLightingBuiltGUID);
  }
  return;
}

// Serialize @ 1479e5a60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USkyAtmosphereComponent::Serialize(USkyAtmosphereComponent *this,FStructuredArchiveRecord param_1)

{
  int iVar1;
  FArchiveState *this_00;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  USceneComponent::Serialize((USceneComponent *)this,(FArchive *)this_00);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FUE5MainStreamObjectVersion::GUID);
  iVar1 = FArchiveState::CustomVer(this_00,&FUE5MainStreamObjectVersion::GUID);
  if ((((0x2d < iVar1) && (this_00->ArIsLoading != 0)) && (this->bIsAtmosphericFog != false)) ||
     ((this_00->ArIsSaving != '\0' || (this->bIsAtmosphericFog == false)))) {
    ::operator<<((FArchive *)this_00,&this->bStaticLightingBuiltGUID);
  }
  return;
}

// SetAerialPerspectiveStartDepth @ 1479e6aa0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USkyAtmosphereComponent::SetAerialPerspectiveStartDepth(USkyAtmosphereComponent *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) &&
     (param_1 != this->AerialPerspectiveStartDepth)) {
    this->AerialPerspectiveStartDepth = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetAerialPespectiveViewDistanceScale @ 1479e6b00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USkyAtmosphereComponent::SetAerialPespectiveViewDistanceScale
          (USkyAtmosphereComponent *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) &&
     (param_1 != this->AerialPespectiveViewDistanceScale)) {
    this->AerialPespectiveViewDistanceScale = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetAtmosphereHeight @ 1479e6b60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USkyAtmosphereComponent::SetAtmosphereHeight(USkyAtmosphereComponent *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) && (param_1 != this->AtmosphereHeight)) {
    this->AtmosphereHeight = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetBottomRadius @ 1479e6c10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USkyAtmosphereComponent::SetBottomRadius(USkyAtmosphereComponent *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) && (param_1 != this->BottomRadius)) {
    this->BottomRadius = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetDummyStaticLightingGUIDs @ 1479e7f40

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall USkyAtmosphereComponent::SetDummyStaticLightingGUIDs(USkyAtmosphereComponent *this)

{
  (this->bStaticLightingBuiltGUID).A = 1;
  (this->bStaticLightingBuiltGUID).B = 0;
  (this->bStaticLightingBuiltGUID).C = 0;
  (this->bStaticLightingBuiltGUID).D = 0;
  return;
}

// SetGroundAlbedo @ 1479e8830

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USkyAtmosphereComponent::SetGroundAlbedo(USkyAtmosphereComponent *this,FColor *param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) &&
     ((this->GroundAlbedo).field0_0x0.Bits != (param_1->field0_0x0).Bits)) {
    (this->GroundAlbedo).field0_0x0._s_0 = (FColor_u_0_s_0)(param_1->field0_0x0).Bits;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetHeightFogContribution @ 1479e8900

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USkyAtmosphereComponent::SetHeightFogContribution(USkyAtmosphereComponent *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) &&
     (param_1 != this->HeightFogContribution)) {
    this->HeightFogContribution = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetHoldout @ 1479e8960

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USkyAtmosphereComponent::SetHoldout(USkyAtmosphereComponent *this,bool param_1)

{
  if (this->bHoldout != param_1) {
    this->field_0x300 = this->field_0x300 & 0xfe | param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    return;
  }
  return;
}

// SetMieAbsorption @ 1479e9550

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USkyAtmosphereComponent::SetMieAbsorption(USkyAtmosphereComponent *this,FLinearColor *param_1)

{
  float fVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  fVar1 = __real_7e967699;
  if ((((bVar2) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) &&
     ((((param_1->field0_0x0)._s_0.R != (this->MieAbsorption).field0_0x0._s_0.R ||
       ((param_1->field0_0x0)._s_0.G != (this->MieAbsorption).field0_0x0._s_0.G)) ||
      (((param_1->field0_0x0)._s_0.B != (this->MieAbsorption).field0_0x0._s_0.B ||
       ((param_1->field0_0x0)._s_0.A != (this->MieAbsorption).field0_0x0._s_0.A)))))) {
    fVar3 = (param_1->field0_0x0)._s_0.R;
    fVar5 = (param_1->field0_0x0)._s_0.G;
    fVar4 = (param_1->field0_0x0)._s_0.B;
    fVar6 = (param_1->field0_0x0)._s_0.A;
    if (__real_7e967699 <= fVar3) {
      fVar3 = __real_7e967699;
    }
    if (__real_7e967699 <= fVar5) {
      fVar5 = __real_7e967699;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    (this->MieAbsorption).field0_0x0._s_0.R = fVar3;
    if (fVar1 <= fVar4) {
      fVar4 = fVar1;
    }
    (this->MieAbsorption).field0_0x0._s_0.G = fVar5;
    if (fVar1 <= fVar6) {
      fVar6 = fVar1;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    (this->MieAbsorption).field0_0x0._s_0.B = fVar4;
    (this->MieAbsorption).field0_0x0._s_0.A = fVar6;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetMieAbsorptionScale @ 1479e9640

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USkyAtmosphereComponent::SetMieAbsorptionScale(USkyAtmosphereComponent *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) && (param_1 != this->MieAbsorptionScale))
  {
    this->MieAbsorptionScale = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetMieAnisotropy @ 1479e96a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USkyAtmosphereComponent::SetMieAnisotropy(USkyAtmosphereComponent *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) && (param_1 != this->MieAnisotropy)) {
    this->MieAnisotropy = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetMieExponentialDistribution @ 1479e9700

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USkyAtmosphereComponent::SetMieExponentialDistribution(USkyAtmosphereComponent *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) &&
     (param_1 != this->MieExponentialDistribution)) {
    this->MieExponentialDistribution = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetMieScattering @ 1479e9760

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USkyAtmosphereComponent::SetMieScattering(USkyAtmosphereComponent *this,FLinearColor *param_1)

{
  float fVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  fVar1 = __real_7e967699;
  if ((((bVar2) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) &&
     ((((param_1->field0_0x0)._s_0.R != (this->MieScattering).field0_0x0._s_0.R ||
       ((param_1->field0_0x0)._s_0.G != (this->MieScattering).field0_0x0._s_0.G)) ||
      (((param_1->field0_0x0)._s_0.B != (this->MieScattering).field0_0x0._s_0.B ||
       ((param_1->field0_0x0)._s_0.A != (this->MieScattering).field0_0x0._s_0.A)))))) {
    fVar3 = (param_1->field0_0x0)._s_0.R;
    fVar5 = (param_1->field0_0x0)._s_0.G;
    fVar4 = (param_1->field0_0x0)._s_0.B;
    fVar6 = (param_1->field0_0x0)._s_0.A;
    if (__real_7e967699 <= fVar3) {
      fVar3 = __real_7e967699;
    }
    if (__real_7e967699 <= fVar5) {
      fVar5 = __real_7e967699;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    (this->MieScattering).field0_0x0._s_0.R = fVar3;
    if (fVar1 <= fVar4) {
      fVar4 = fVar1;
    }
    (this->MieScattering).field0_0x0._s_0.G = fVar5;
    if (fVar1 <= fVar6) {
      fVar6 = fVar1;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    (this->MieScattering).field0_0x0._s_0.B = fVar4;
    (this->MieScattering).field0_0x0._s_0.A = fVar6;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetMieScatteringScale @ 1479e9850

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USkyAtmosphereComponent::SetMieScatteringScale(USkyAtmosphereComponent *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) && (param_1 != this->MieScatteringScale))
  {
    this->MieScatteringScale = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetMultiScatteringFactor @ 1479e9910

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USkyAtmosphereComponent::SetMultiScatteringFactor(USkyAtmosphereComponent *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) &&
     (param_1 != this->MultiScatteringFactor)) {
    this->MultiScatteringFactor = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetOtherAbsorption @ 1479e9aa0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USkyAtmosphereComponent::SetOtherAbsorption(USkyAtmosphereComponent *this,FLinearColor *param_1)

{
  float fVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  fVar1 = __real_7e967699;
  if ((((bVar2) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) &&
     ((((param_1->field0_0x0)._s_0.R != (this->OtherAbsorption).field0_0x0._s_0.R ||
       ((param_1->field0_0x0)._s_0.G != (this->OtherAbsorption).field0_0x0._s_0.G)) ||
      (((param_1->field0_0x0)._s_0.B != (this->OtherAbsorption).field0_0x0._s_0.B ||
       ((param_1->field0_0x0)._s_0.A != (this->OtherAbsorption).field0_0x0._s_0.A)))))) {
    fVar3 = (param_1->field0_0x0)._s_0.R;
    fVar5 = (param_1->field0_0x0)._s_0.G;
    fVar4 = (param_1->field0_0x0)._s_0.B;
    fVar6 = (param_1->field0_0x0)._s_0.A;
    if (__real_7e967699 <= fVar3) {
      fVar3 = __real_7e967699;
    }
    if (__real_7e967699 <= fVar5) {
      fVar5 = __real_7e967699;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    (this->OtherAbsorption).field0_0x0._s_0.R = fVar3;
    if (fVar1 <= fVar4) {
      fVar4 = fVar1;
    }
    (this->OtherAbsorption).field0_0x0._s_0.G = fVar5;
    if (fVar1 <= fVar6) {
      fVar6 = fVar1;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    (this->OtherAbsorption).field0_0x0._s_0.B = fVar4;
    (this->OtherAbsorption).field0_0x0._s_0.A = fVar6;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetOtherAbsorptionScale @ 1479e9b90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USkyAtmosphereComponent::SetOtherAbsorptionScale(USkyAtmosphereComponent *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) &&
     (param_1 != this->OtherAbsorptionScale)) {
    this->OtherAbsorptionScale = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetPositionToMatchDeprecatedAtmosphericFog @ 1479e9ef0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USkyAtmosphereComponent::SetPositionToMatchDeprecatedAtmosphericFog(USkyAtmosphereComponent *this)

{
  TVector<double>_u_0 local_28;
  
  local_28._s_0.Z = __real_c0f86a0000000000;
  local_28._s_0.X = 0.0;
  local_28._s_0.Y = 0.0;
  this->TransformMode = PlanetTopAtComponentTransform;
  USceneComponent::SetWorldLocation
            ((USceneComponent *)this,(TVector<double> *)&local_28._s_0,false,(FHitResult *)0x0,None)
  ;
  return;
}

// SetRayleighExponentialDistribution @ 1479ea710

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USkyAtmosphereComponent::SetRayleighExponentialDistribution
          (USkyAtmosphereComponent *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) &&
     (param_1 != this->RayleighExponentialDistribution)) {
    this->RayleighExponentialDistribution = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetRayleighScattering @ 1479ea770

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USkyAtmosphereComponent::SetRayleighScattering(USkyAtmosphereComponent *this,FLinearColor *param_1)

{
  float fVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  fVar1 = __real_7e967699;
  if ((((bVar2) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) &&
     ((((param_1->field0_0x0)._s_0.R != (this->RayleighScattering).field0_0x0._s_0.R ||
       ((param_1->field0_0x0)._s_0.G != (this->RayleighScattering).field0_0x0._s_0.G)) ||
      (((param_1->field0_0x0)._s_0.B != (this->RayleighScattering).field0_0x0._s_0.B ||
       ((param_1->field0_0x0)._s_0.A != (this->RayleighScattering).field0_0x0._s_0.A)))))) {
    fVar3 = (param_1->field0_0x0)._s_0.R;
    fVar5 = (param_1->field0_0x0)._s_0.G;
    fVar4 = (param_1->field0_0x0)._s_0.B;
    fVar6 = (param_1->field0_0x0)._s_0.A;
    if (__real_7e967699 <= fVar3) {
      fVar3 = __real_7e967699;
    }
    if (__real_7e967699 <= fVar5) {
      fVar5 = __real_7e967699;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    (this->RayleighScattering).field0_0x0._s_0.R = fVar3;
    if (fVar1 <= fVar4) {
      fVar4 = fVar1;
    }
    (this->RayleighScattering).field0_0x0._s_0.G = fVar5;
    if (fVar1 <= fVar6) {
      fVar6 = fVar1;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    (this->RayleighScattering).field0_0x0._s_0.B = fVar4;
    (this->RayleighScattering).field0_0x0._s_0.A = fVar6;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetRayleighScatteringScale @ 1479ea860

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USkyAtmosphereComponent::SetRayleighScatteringScale(USkyAtmosphereComponent *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) &&
     (param_1 != this->RayleighScatteringScale)) {
    this->RayleighScatteringScale = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetRenderInMainPass @ 1479eaa10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USkyAtmosphereComponent::SetRenderInMainPass(USkyAtmosphereComponent *this,bool param_1)

{
  if (this->bRenderInMainPass != param_1) {
    this->field_0x300 = this->field_0x300 & 0xfd | param_1 * '\x02';
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
    return;
  }
  return;
}

// SetSkyAndAerialPerspectiveLuminanceFactor @ 1479eade0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USkyAtmosphereComponent::SetSkyAndAerialPerspectiveLuminanceFactor
          (USkyAtmosphereComponent *this,FLinearColor *param_1)

{
  float fVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  fVar1 = __real_7e967699;
  if ((((bVar2) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) &&
     ((((param_1->field0_0x0)._s_0.R !=
        (this->SkyAndAerialPerspectiveLuminanceFactor).field0_0x0._s_0.R ||
       ((param_1->field0_0x0)._s_0.G !=
        (this->SkyAndAerialPerspectiveLuminanceFactor).field0_0x0._s_0.G)) ||
      (((param_1->field0_0x0)._s_0.B !=
        (this->SkyAndAerialPerspectiveLuminanceFactor).field0_0x0._s_0.B ||
       ((param_1->field0_0x0)._s_0.A !=
        (this->SkyAndAerialPerspectiveLuminanceFactor).field0_0x0._s_0.A)))))) {
    fVar3 = (param_1->field0_0x0)._s_0.R;
    fVar5 = (param_1->field0_0x0)._s_0.G;
    fVar4 = (param_1->field0_0x0)._s_0.B;
    fVar6 = (param_1->field0_0x0)._s_0.A;
    if (__real_7e967699 <= fVar3) {
      fVar3 = __real_7e967699;
    }
    if (__real_7e967699 <= fVar5) {
      fVar5 = __real_7e967699;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    (this->SkyAndAerialPerspectiveLuminanceFactor).field0_0x0._s_0.R = fVar3;
    if (fVar1 <= fVar4) {
      fVar4 = fVar1;
    }
    (this->SkyAndAerialPerspectiveLuminanceFactor).field0_0x0._s_0.G = fVar5;
    if (fVar1 <= fVar6) {
      fVar6 = fVar1;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    (this->SkyAndAerialPerspectiveLuminanceFactor).field0_0x0._s_0.B = fVar4;
    (this->SkyAndAerialPerspectiveLuminanceFactor).field0_0x0._s_0.A = fVar6;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetSkyLuminanceFactor @ 1479eaf30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USkyAtmosphereComponent::SetSkyLuminanceFactor(USkyAtmosphereComponent *this,FLinearColor *param_1)

{
  float fVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  fVar1 = __real_7e967699;
  if ((((bVar2) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) &&
     ((((param_1->field0_0x0)._s_0.R != (this->SkyLuminanceFactor).field0_0x0._s_0.R ||
       ((param_1->field0_0x0)._s_0.G != (this->SkyLuminanceFactor).field0_0x0._s_0.G)) ||
      (((param_1->field0_0x0)._s_0.B != (this->SkyLuminanceFactor).field0_0x0._s_0.B ||
       ((param_1->field0_0x0)._s_0.A != (this->SkyLuminanceFactor).field0_0x0._s_0.A)))))) {
    fVar3 = (param_1->field0_0x0)._s_0.R;
    fVar5 = (param_1->field0_0x0)._s_0.G;
    fVar4 = (param_1->field0_0x0)._s_0.B;
    fVar6 = (param_1->field0_0x0)._s_0.A;
    if (__real_7e967699 <= fVar3) {
      fVar3 = __real_7e967699;
    }
    if (__real_7e967699 <= fVar5) {
      fVar5 = __real_7e967699;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    (this->SkyLuminanceFactor).field0_0x0._s_0.R = fVar3;
    if (fVar1 <= fVar4) {
      fVar4 = fVar1;
    }
    (this->SkyLuminanceFactor).field0_0x0._s_0.G = fVar5;
    if (fVar1 <= fVar6) {
      fVar6 = fVar1;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    (this->SkyLuminanceFactor).field0_0x0._s_0.B = fVar4;
    (this->SkyLuminanceFactor).field0_0x0._s_0.A = fVar6;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetTransmittanceMinLightElevationAngle @ 1479ecbd0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USkyAtmosphereComponent::SetTransmittanceMinLightElevationAngle
          (USkyAtmosphereComponent *this,float param_1)

{
  bool bVar1;
  
  bVar1 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)this);
  if ((((bVar1) || ((this->_padding_ & 1) == 0)) ||
      (*(char *)((longlong)&this->_padding_ + 3) != '\0')) &&
     (param_1 != this->TransmittanceMinLightElevationAngle)) {
    this->TransmittanceMinLightElevationAngle = param_1;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// StaticRegisterNativesUSkyAtmosphereComponent @ 1479ede60

void __cdecl USkyAtmosphereComponent::StaticRegisterNativesUSkyAtmosphereComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x1d;
  local_18.DataPtr = Z_Construct_UClass_USkyAtmosphereComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateStaticLightingGUIDs @ 1479f3f50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall USkyAtmosphereComponent::UpdateStaticLightingGUIDs(USkyAtmosphereComponent *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FGuid *pFVar4;
  FGuid local_18;
  
  pFVar4 = FGuid::NewGuid(&local_18);
  uVar1 = pFVar4->B;
  uVar2 = pFVar4->C;
  uVar3 = pFVar4->D;
  (this->bStaticLightingBuiltGUID).A = pFVar4->A;
  (this->bStaticLightingBuiltGUID).B = uVar1;
  (this->bStaticLightingBuiltGUID).C = uVar2;
  (this->bStaticLightingBuiltGUID).D = uVar3;
  return;
}

// ValidateStaticLightingGUIDs @ 1479f58e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall USkyAtmosphereComponent::ValidateStaticLightingGUIDs(USkyAtmosphereComponent *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FGuid *pFVar4;
  FGuid local_18;
  
  if ((((this->bStaticLightingBuiltGUID).D == 0 && (this->bStaticLightingBuiltGUID).C == 0) &&
      (this->bStaticLightingBuiltGUID).B == 0) && (this->bStaticLightingBuiltGUID).A == 0) {
    pFVar4 = FGuid::NewGuid(&local_18);
    uVar1 = pFVar4->B;
    uVar2 = pFVar4->C;
    uVar3 = pFVar4->D;
    (this->bStaticLightingBuiltGUID).A = pFVar4->A;
    (this->bStaticLightingBuiltGUID).B = uVar1;
    (this->bStaticLightingBuiltGUID).C = uVar2;
    (this->bStaticLightingBuiltGUID).D = uVar3;
  }
  return;
}

// execGetAtmosphereTransmitanceOnGroundAtPlanetTop @ 1479f9c90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __cdecl
USkyAtmosphereComponent::execGetAtmosphereTransmitanceOnGroundAtPlanetTop
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  FProperty *pFVar2;
  ULightComponent *this;
  TVector<double> *pTVar3;
  ULightComponent *local_res10;
  TVector<double>_u_0 local_108;
  FLinearColor_u_0 local_e8;
  TVector<double> local_d8;
  FAtmosphereSetup local_b8;
  
  local_res10 = (ULightComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  this = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (ULightComponent *)0x0) {
    local_e8._s_0.R = (float)FLinearColor::White.field0_0x0._0_4_;
    local_e8._s_0.G = (float)FLinearColor::White.field0_0x0._4_4_;
    local_e8._s_0.B = (float)FLinearColor::White.field0_0x0._8_4_;
    local_e8._s_0.A = (float)FLinearColor::White.field0_0x0._12_4_;
  }
  else {
    FAtmosphereSetup::FAtmosphereSetup(&local_b8,(USkyAtmosphereComponent *)param_1);
    pTVar3 = ULightComponent::GetDirection(this,&local_d8);
    uVar1 = *(undefined8 *)((longlong)&pTVar3->field0_0x0 + 0x10);
    local_108._0_4_ = *(uint *)&pTVar3->field0_0x0 ^ (uint)__xmm_80000000000000008000000000000000;
    local_108._4_4_ =
         *(uint *)((longlong)&pTVar3->field0_0x0 + 4) ^ __xmm_80000000000000008000000000000000._4_4_
    ;
    local_108._8_4_ = *(uint *)((longlong)&pTVar3->field0_0x0 + 8) ^ _UNK_15066df78;
    local_108._12_4_ = *(uint *)((longlong)&pTVar3->field0_0x0 + 0xc) ^ _UNK_15066df7c;
    local_108._s_0.Z =
         (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          (uint)uVar1 ^ (uint)__xmm_80000000000000008000000000000000);
    FAtmosphereSetup::GetTransmittanceAtGroundLevel
              (&local_b8,(FLinearColor *)&local_e8._s_0,(TVector<double> *)&local_108._s_0);
  }
  *(undefined4 *)param_3 = local_e8._s_0.R;
  *(undefined4 *)((longlong)param_3 + 4) = local_e8._s_0.G;
  *(undefined4 *)((longlong)param_3 + 8) = local_e8._s_0.B;
  *(undefined4 *)((longlong)param_3 + 0xc) = local_e8._s_0.A;
  return;
}

// execGetAtmosphericLightToMatchIlluminanceOnGround @ 1479f9da0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
USkyAtmosphereComponent::execGetAtmosphericLightToMatchIlluminanceOnGround
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  FColorSpace *this;
  float fVar3;
  float local_res10 [2];
  double local_118;
  double dStack_110;
  double local_108;
  FLinearColor local_100;
  TVector<double>_u_0 local_e8;
  FAtmosphereSetup local_c8;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_118,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_118);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar2 = local_res10[0];
  local_e8._s_0.X = local_118;
  local_e8._s_0.Y = dStack_110;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_e8._s_0.Z = local_108;
  FAtmosphereSetup::FAtmosphereSetup(&local_c8,(USkyAtmosphereComponent *)param_1);
  FAtmosphereSetup::GetTransmittanceAtGroundLevel
            (&local_c8,&local_100,(TVector<double> *)&local_e8._s_0);
  this = UE::Color::FColorSpace::GetWorking();
  fVar3 = UE::Color::FColorSpace::GetLuminance(this,&local_100);
  if (fVar3 <= __real_322bcc77) {
    fVar3 = __real_322bcc77;
  }
  *(float *)param_3 = fVar2 / fVar3;
  return;
}

// execGetOverridenAtmosphereLightDirection @ 1479fd150

void __cdecl
USkyAtmosphereComponent::execGetOverridenAtmosphereLightDirection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 *puVar1;
  FProperty *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  uint local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar4 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar6 = (longlong)(int)local_res10[0];
  if ((((int)local_res10[0] < 0) || (1 < (int)local_res10[0])) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("AtmosphereLightIndex >= 0 && AtmosphereLightIndex < 2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SkyAtmosphereComponent.cpp"
                         ,0x19d,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (uVar4 < 2) {
    puVar1 = (undefined4 *)(&param_1[0x13].field_0x20 + lVar6 * 0x18);
    uVar7 = *puVar1;
    uVar8 = puVar1[1];
    uVar9 = puVar1[2];
    uVar10 = puVar1[3];
    uVar11 = *(double *)(&param_1[0x14].field_0x8 + lVar6 * 0x18);
  }
  *(undefined4 *)param_3 = uVar7;
  *(undefined4 *)((longlong)param_3 + 4) = uVar8;
  *(undefined4 *)((longlong)param_3 + 8) = uVar9;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar10;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar11;
  return;
}

// execIsAtmosphereLightDirectionOverriden @ 147a02da0

void __cdecl
USkyAtmosphereComponent::execIsAtmosphereLightDirectionOverriden
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  uint local_res10 [2];
  
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
  uVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar5 = (longlong)(int)local_res10[0];
  if (((int)local_res10[0] < 0) || (1 < (int)local_res10[0])) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtmosphereLightIndex >= 0 && AtmosphereLightIndex < 2",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SkyAtmosphereComponent.cpp"
                       ,0x193,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (uVar3 < 2) {
    *(undefined1 *)param_3 = (&param_1[0x13].field_0x18)[lVar5];
  }
  else {
    *(undefined1 *)param_3 = 0;
  }
  return;
}

// execOverrideAtmosphereLightDirection @ 147a03480

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
USkyAtmosphereComponent::execOverrideAtmosphereLightDirection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  double *pdVar5;
  longlong lVar6;
  int local_res10 [2];
  double local_28 [4];
  
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
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  pdVar5 = local_28;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar5 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar6 = (longlong)local_res10[0];
  if ((local_res10[0] < 0) || (1 < local_res10[0])) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtmosphereLightIndex >= 0 && AtmosphereLightIndex < 2",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SkyAtmosphereComponent.cpp"
                       ,0x17d,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar4 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar4) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     ((*(longlong *)&param_1[0x13].field_0x10 != 0 &&
      ((((&param_1[0x13].field_0x18)[lVar6] == '\0' ||
        (*pdVar5 != *(double *)(&param_1[0x13].field_0x20 + lVar6 * 0x18))) ||
       ((pdVar5[1] != *(double *)(&param_1[0x14].field_0x0 + lVar6 * 0x18) ||
        (pdVar5[2] != *(double *)(&param_1[0x14].field_0x8 + lVar6 * 0x18))))))))) {
    (&param_1[0x13].field_0x18)[lVar6] = 1;
    dVar3 = pdVar5[1];
    *(double *)(&param_1[0x13].field_0x20 + lVar6 * 0x18) = *pdVar5;
    *(double *)((longlong)(&param_1[0x13].field_0x20 + lVar6 * 0x18) + 8) = dVar3;
    *(double *)(&param_1[0x14].field_0x8 + lVar6 * 0x18) = pdVar5[2];
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execResetAtmosphereLightDirectionOverride @ 147a039e0

void __cdecl
USkyAtmosphereComponent::execResetAtmosphereLightDirectionOverride
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  uint uVar4;
  bool bVar5;
  longlong lVar6;
  uint local_res10 [2];
  
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
  uVar4 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar6 = (longlong)(int)local_res10[0];
  if (((int)local_res10[0] < 0) || (1 < (int)local_res10[0])) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtmosphereLightIndex >= 0 && AtmosphereLightIndex < 2",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SkyAtmosphereComponent.cpp"
                       ,0x1a7,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (uVar4 < 2) {
    (&param_1[0x13].field_0x18)[lVar6] = 0;
    uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)(&param_1[0x13].field_0x20 + lVar6 * 0x18) =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)((longlong)(&param_1[0x13].field_0x20 + lVar6 * 0x18) + 8) = uVar3;
    *(double *)(&param_1[0x14].field_0x8 + lVar6 * 0x18) =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  return;
}

// execSetAerialPerspectiveStartDepth @ 147a03b60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
USkyAtmosphereComponent::execSetAerialPerspectiveStartDepth
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  bool bVar3;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar3) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (fVar2 != *(float *)&param_1[0x13].field_0x4)) {
    *(float *)&param_1[0x13].field_0x4 = fVar2;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetAerialPespectiveViewDistanceScale @ 147a03c20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
USkyAtmosphereComponent::execSetAerialPespectiveViewDistanceScale
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  bool bVar3;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar3) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (fVar2 != *(float *)&param_1[0x12].field_0x20)) {
    *(float *)&param_1[0x12].field_0x20 = fVar2;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetAtmosphereHeight @ 147a03ce0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
USkyAtmosphereComponent::execSetAtmosphereHeight(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  bool bVar3;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar3) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (fVar2 != *(float *)&param_1[0xf].field_0x4)) {
    *(float *)&param_1[0xf].field_0x4 = fVar2;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetBottomRadius @ 147a03da0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
USkyAtmosphereComponent::execSetBottomRadius(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  bool bVar3;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar3) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (fVar2 != *(float *)&param_1[0xe].field_0x24)) {
    *(float *)&param_1[0xe].field_0x24 = fVar2;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetGroundAlbedo @ 147a05d60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
USkyAtmosphereComponent::execSetGroundAlbedo(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int *piVar3;
  int local_18 [4];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  piVar3 = local_18;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar3 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar2) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (*(int *)(param_1 + 0xf) != *piVar3)) {
    *(int *)(param_1 + 0xf) = *piVar3;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetHeightFogContribution @ 147a05f80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
USkyAtmosphereComponent::execSetHeightFogContribution
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  bool bVar3;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar3) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (fVar2 != *(float *)&param_1[0x12].field_0x24)) {
    *(float *)&param_1[0x12].field_0x24 = fVar2;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetHoldout @ 147a06040

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl USkyAtmosphereComponent::execSetHoldout(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((bool)(param_1[0x13].field_0x8 & 1) != (local_res8[0] != 0)) {
    param_1[0x13].field_0x8 = param_1[0x13].field_0x8 & 0xfe | local_res8[0] != 0;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetMieAbsorption @ 147a06df0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
USkyAtmosphereComponent::execSetMieAbsorption(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar2) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (((local_58 != *(float *)&param_1[0x10].field_0x18 ||
       (local_54 != *(float *)&param_1[0x10].field_0x1c)) ||
      ((local_50 != *(float *)&param_1[0x10].field_0x20 ||
       (local_4c != *(float *)&param_1[0x10].field_0x24)))))) {
    if (__real_7e967699 <= local_58) {
      local_58 = __real_7e967699;
    }
    if (__real_7e967699 <= local_54) {
      local_54 = __real_7e967699;
    }
    if (__real_7e967699 <= local_50) {
      local_50 = __real_7e967699;
    }
    if (__real_7e967699 <= local_4c) {
      local_4c = __real_7e967699;
    }
    if (local_58 <= 0.0) {
      local_58 = 0.0;
    }
    if (local_54 <= 0.0) {
      local_54 = 0.0;
    }
    if (local_50 <= 0.0) {
      local_50 = 0.0;
    }
    if (local_4c <= 0.0) {
      local_4c = 0.0;
    }
    *(float *)&param_1[0x10].field_0x18 = local_58;
    *(float *)&param_1[0x10].field_0x1c = local_54;
    *(float *)&param_1[0x10].field_0x20 = local_50;
    *(float *)&param_1[0x10].field_0x24 = local_4c;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetMieAbsorptionScale @ 147a06f50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
USkyAtmosphereComponent::execSetMieAbsorptionScale(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  bool bVar3;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar3) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (fVar2 != *(float *)&param_1[0x10].field_0x14)) {
    *(float *)&param_1[0x10].field_0x14 = fVar2;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetMieAnisotropy @ 147a07010

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
USkyAtmosphereComponent::execSetMieAnisotropy(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  bool bVar3;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar3) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (fVar2 != *(float *)(param_1 + 0x11))) {
    *(float *)(param_1 + 0x11) = fVar2;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetMieExponentialDistribution @ 147a070d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
USkyAtmosphereComponent::execSetMieExponentialDistribution
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  bool bVar3;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar3) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (fVar2 != *(float *)&param_1[0x11].field_0x4)) {
    *(float *)&param_1[0x11].field_0x4 = fVar2;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetMieScattering @ 147a07190

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
USkyAtmosphereComponent::execSetMieScattering(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar2) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (((local_58 != *(float *)&param_1[0x10].field_0x4 ||
       (local_54 != *(float *)&param_1[0x10].field_0x8)) ||
      ((local_50 != *(float *)&param_1[0x10].field_0xc ||
       (local_4c != *(float *)&param_1[0x10].field_0x10)))))) {
    if (__real_7e967699 <= local_58) {
      local_58 = __real_7e967699;
    }
    if (__real_7e967699 <= local_54) {
      local_54 = __real_7e967699;
    }
    if (__real_7e967699 <= local_50) {
      local_50 = __real_7e967699;
    }
    if (__real_7e967699 <= local_4c) {
      local_4c = __real_7e967699;
    }
    if (local_58 <= 0.0) {
      local_58 = 0.0;
    }
    if (local_54 <= 0.0) {
      local_54 = 0.0;
    }
    if (local_50 <= 0.0) {
      local_50 = 0.0;
    }
    if (local_4c <= 0.0) {
      local_4c = 0.0;
    }
    *(float *)&param_1[0x10].field_0x4 = local_58;
    *(float *)&param_1[0x10].field_0x8 = local_54;
    *(float *)&param_1[0x10].field_0xc = local_50;
    *(float *)&param_1[0x10].field_0x10 = local_4c;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetMieScatteringScale @ 147a072f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
USkyAtmosphereComponent::execSetMieScatteringScale(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  bool bVar3;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar3) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (fVar2 != *(float *)(param_1 + 0x10))) {
    *(float *)(param_1 + 0x10) = fVar2;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetMultiScatteringFactor @ 147a07470

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
USkyAtmosphereComponent::execSetMultiScatteringFactor
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  bool bVar3;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar3) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (fVar2 != *(float *)&param_1[0xf].field_0x8)) {
    *(float *)&param_1[0xf].field_0x8 = fVar2;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetOtherAbsorption @ 147a07780

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
USkyAtmosphereComponent::execSetOtherAbsorption(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar2) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (((local_58 != *(float *)&param_1[0x11].field_0xc ||
       (local_54 != *(float *)&param_1[0x11].field_0x10)) ||
      ((local_50 != *(float *)&param_1[0x11].field_0x14 ||
       (local_4c != *(float *)&param_1[0x11].field_0x18)))))) {
    if (__real_7e967699 <= local_58) {
      local_58 = __real_7e967699;
    }
    if (__real_7e967699 <= local_54) {
      local_54 = __real_7e967699;
    }
    if (__real_7e967699 <= local_50) {
      local_50 = __real_7e967699;
    }
    if (__real_7e967699 <= local_4c) {
      local_4c = __real_7e967699;
    }
    if (local_58 <= 0.0) {
      local_58 = 0.0;
    }
    if (local_54 <= 0.0) {
      local_54 = 0.0;
    }
    if (local_50 <= 0.0) {
      local_50 = 0.0;
    }
    if (local_4c <= 0.0) {
      local_4c = 0.0;
    }
    *(float *)&param_1[0x11].field_0xc = local_58;
    *(float *)&param_1[0x11].field_0x10 = local_54;
    *(float *)&param_1[0x11].field_0x14 = local_50;
    *(float *)&param_1[0x11].field_0x18 = local_4c;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetOtherAbsorptionScale @ 147a078e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
USkyAtmosphereComponent::execSetOtherAbsorptionScale(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  bool bVar3;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar3) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (fVar2 != *(float *)&param_1[0x11].field_0x8)) {
    *(float *)&param_1[0x11].field_0x8 = fVar2;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetRayleighExponentialDistribution @ 147a07e40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
USkyAtmosphereComponent::execSetRayleighExponentialDistribution
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  bool bVar3;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar3) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (fVar2 != *(float *)&param_1[0xf].field_0x24)) {
    *(float *)&param_1[0xf].field_0x24 = fVar2;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetRayleighScattering @ 147a07f00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
USkyAtmosphereComponent::execSetRayleighScattering(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar2) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (((local_58 != *(float *)&param_1[0xf].field_0x14 ||
       (local_54 != *(float *)&param_1[0xf].field_0x18)) ||
      ((local_50 != *(float *)&param_1[0xf].field_0x1c ||
       (local_4c != *(float *)&param_1[0xf].field_0x20)))))) {
    if (__real_7e967699 <= local_58) {
      local_58 = __real_7e967699;
    }
    if (__real_7e967699 <= local_54) {
      local_54 = __real_7e967699;
    }
    if (__real_7e967699 <= local_50) {
      local_50 = __real_7e967699;
    }
    if (__real_7e967699 <= local_4c) {
      local_4c = __real_7e967699;
    }
    if (local_58 <= 0.0) {
      local_58 = 0.0;
    }
    if (local_54 <= 0.0) {
      local_54 = 0.0;
    }
    if (local_50 <= 0.0) {
      local_50 = 0.0;
    }
    if (local_4c <= 0.0) {
      local_4c = 0.0;
    }
    *(float *)&param_1[0xf].field_0x14 = local_58;
    *(float *)&param_1[0xf].field_0x18 = local_54;
    *(float *)&param_1[0xf].field_0x1c = local_50;
    *(float *)&param_1[0xf].field_0x20 = local_4c;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetRayleighScatteringScale @ 147a08060

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
USkyAtmosphereComponent::execSetRayleighScatteringScale
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  bool bVar3;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar3) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (fVar2 != *(float *)&param_1[0xf].field_0x10)) {
    *(float *)&param_1[0xf].field_0x10 = fVar2;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetRenderInMainPass @ 147a08380

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
USkyAtmosphereComponent::execSetRenderInMainPass(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((bool)((byte)param_1[0x13].field_0x8 >> 1 & 1) != (local_res8[0] != 0)) {
    param_1[0x13].field_0x8 = param_1[0x13].field_0x8 & 0xfd | (local_res8[0] != 0) * '\x02';
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetSkyAndAerialPerspectiveLuminanceFactor @ 147a08cf0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
USkyAtmosphereComponent::execSetSkyAndAerialPerspectiveLuminanceFactor
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar2) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (((local_58 != *(float *)&param_1[0x12].field_0x10 ||
       (local_54 != *(float *)&param_1[0x12].field_0x14)) ||
      ((local_50 != *(float *)&param_1[0x12].field_0x18 ||
       (local_4c != *(float *)&param_1[0x12].field_0x1c)))))) {
    if (__real_7e967699 <= local_58) {
      local_58 = __real_7e967699;
    }
    if (__real_7e967699 <= local_54) {
      local_54 = __real_7e967699;
    }
    if (__real_7e967699 <= local_50) {
      local_50 = __real_7e967699;
    }
    if (__real_7e967699 <= local_4c) {
      local_4c = __real_7e967699;
    }
    if (local_58 <= 0.0) {
      local_58 = 0.0;
    }
    if (local_54 <= 0.0) {
      local_54 = 0.0;
    }
    if (local_50 <= 0.0) {
      local_50 = 0.0;
    }
    if (local_4c <= 0.0) {
      local_4c = 0.0;
    }
    *(float *)&param_1[0x12].field_0x10 = local_58;
    *(float *)&param_1[0x12].field_0x14 = local_54;
    *(float *)&param_1[0x12].field_0x18 = local_50;
    *(float *)&param_1[0x12].field_0x1c = local_4c;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetSkyLuminanceFactor @ 147a08f10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
USkyAtmosphereComponent::execSetSkyLuminanceFactor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar2) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (((local_58 != *(float *)(param_1 + 0x12) || (local_54 != *(float *)&param_1[0x12].field_0x4))
      || ((local_50 != *(float *)&param_1[0x12].field_0x8 ||
          (local_4c != *(float *)&param_1[0x12].field_0xc)))))) {
    if (__real_7e967699 <= local_58) {
      local_58 = __real_7e967699;
    }
    if (__real_7e967699 <= local_54) {
      local_54 = __real_7e967699;
    }
    if (__real_7e967699 <= local_50) {
      local_50 = __real_7e967699;
    }
    if (__real_7e967699 <= local_4c) {
      local_4c = __real_7e967699;
    }
    if (local_58 <= 0.0) {
      local_58 = 0.0;
    }
    if (local_54 <= 0.0) {
      local_54 = 0.0;
    }
    if (local_50 <= 0.0) {
      local_50 = 0.0;
    }
    if (local_4c <= 0.0) {
      local_4c = 0.0;
    }
    *(float *)(param_1 + 0x12) = local_58;
    *(float *)&param_1[0x12].field_0x4 = local_54;
    *(float *)&param_1[0x12].field_0x8 = local_50;
    *(float *)&param_1[0x12].field_0xc = local_4c;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execSetTransmittanceMinLightElevationAngle @ 147a0aac0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
USkyAtmosphereComponent::execSetTransmittanceMinLightElevationAngle
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  bool bVar3;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = UActorComponent::IsOwnerRunningUserConstructionScript((UActorComponent *)param_1);
  if ((((bVar3) || ((param_1[3].field_0x20 & 1) == 0)) || (param_1[10].field_0x1b != '\0')) &&
     (fVar2 != *(float *)(param_1 + 0x13))) {
    *(float *)(param_1 + 0x13) = fVar2;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

