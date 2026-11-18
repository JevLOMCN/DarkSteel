// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 17

// StaticClass @ 146e303f0

UClass * __cdecl UNavModifierComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavModifierComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavModifierComponent",
               &Z_Registration_Info_UClass_UNavModifierComponent.InnerSingleton,
               StaticRegisterNativesUNavModifierComponent,0x1c0,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavModifierComponent>,
               InternalVTableHelperCtorCaller<UNavModifierComponent>,local_res8,
               UNavRelevantComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavModifierComponent.InnerSingleton;
}

// UNavModifierComponent @ 146e36c30

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UNavModifierComponent * __thiscall
UNavModifierComponent::UNavModifierComponent(UNavModifierComponent *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&___7UNavModifierComponent__6B_;
  (this->AreaClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->AreaClassToReplace).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ComponentBounds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentBounds).ArrayNum = 0;
  (this->ComponentBounds).ArrayMax = 0;
  (this->TransformUpdateHandle).ID = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->CachedTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->CachedTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->CachedTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->CachedTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->CachedTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->CachedTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->CachedTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->CachedTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->CachedTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->CachedTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->CachedTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->CachedTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  return this;
}

// UNavModifierComponent @ 146e36d10

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

UNavModifierComponent * __thiscall
UNavModifierComponent::UNavModifierComponent
          (UNavModifierComponent *this,FObjectInitializer *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UClass *pUVar4;
  
  UNavRelevantComponent::UNavRelevantComponent((UNavRelevantComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&___7UNavModifierComponent__6B_;
  (this->AreaClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->AreaClassToReplace).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ComponentBounds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentBounds).ArrayNum = 0;
  (this->ComponentBounds).ArrayMax = 0;
  (this->TransformUpdateHandle).ID = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->CachedTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->CachedTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->CachedTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->CachedTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->CachedTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->CachedTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->CachedTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->CachedTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->CachedTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->CachedTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->CachedTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->CachedTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  pUVar4 = Z_Construct_UClass_UNavArea_Null_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->AreaClass).Class.field0_0x0.DebugPtr = pUVar4;
  (this->AreaClassToReplace).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->FailsafeExtent).field0_0x0._s_0.X = 100.0;
  (this->FailsafeExtent).field0_0x0._s_0.Y = 100.0;
  (this->FailsafeExtent).field0_0x0._s_0.Z = 100.0;
  this->bIncludeAgentHeight = '\x01';
  this->NavMeshResolution = Invalid;
  return this;
}

// ~UNavModifierComponent @ 146e37ad0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNavModifierComponent::~UNavModifierComponent(UNavModifierComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&___7UNavModifierComponent__6B_;
  pFVar1 = (this->ComponentBounds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&UNavRelevantComponent::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UNavRelevantComponent::_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&UNavRelevantComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&___7INavRelevantInterface__6B_;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// CalcAndCacheBounds @ 146e42f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNavModifierComponent::CalcAndCacheBounds(UNavModifierComponent *this)

{
  undefined1 uVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TTransform<double> *pTVar9;
  FDelegateHandle FVar10;
  FAreaNavModifier *pFVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  undefined1 auStackY_138 [32];
  ForAnyElementType local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [8];
  FLogScopedCategoryAndVerbosityOverride local_d0;
  undefined1 local_c0 [112];
  void *local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  uVar13 = 0;
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x1b8) == 0) {
      pTVar9 = &UE::Math::TTransform<double>::Identity;
    }
    else {
      pTVar9 = (TTransform<double> *)(*(longlong *)(lVar2 + 0x1b8) + 0x1f0);
    }
    dVar5 = (pTVar9->Rotation).XY.m128d_f64[1];
    (this->CachedTransform).Rotation.XY.m128d_f64[0] = (pTVar9->Rotation).XY.m128d_f64[0];
    (this->CachedTransform).Rotation.XY.m128d_f64[1] = dVar5;
    dVar5 = (pTVar9->Rotation).ZW.m128d_f64[1];
    (this->CachedTransform).Rotation.ZW.m128d_f64[0] = (pTVar9->Rotation).ZW.m128d_f64[0];
    (this->CachedTransform).Rotation.ZW.m128d_f64[1] = dVar5;
    dVar5 = (pTVar9->Translation).XY.m128d_f64[1];
    (this->CachedTransform).Translation.XY.m128d_f64[0] = (pTVar9->Translation).XY.m128d_f64[0];
    (this->CachedTransform).Translation.XY.m128d_f64[1] = dVar5;
    dVar5 = (pTVar9->Translation).ZW.m128d_f64[1];
    (this->CachedTransform).Translation.ZW.m128d_f64[0] = (pTVar9->Translation).ZW.m128d_f64[0];
    (this->CachedTransform).Translation.ZW.m128d_f64[1] = dVar5;
    dVar5 = (pTVar9->Scale3D).XY.m128d_f64[1];
    (this->CachedTransform).Scale3D.XY.m128d_f64[0] = (pTVar9->Scale3D).XY.m128d_f64[0];
    (this->CachedTransform).Scale3D.XY.m128d_f64[1] = dVar5;
    dVar5 = (pTVar9->Scale3D).ZW.m128d_f64[1];
    (this->CachedTransform).Scale3D.ZW.m128d_f64[0] = (pTVar9->Scale3D).ZW.m128d_f64[0];
    (this->CachedTransform).Scale3D.ZW.m128d_f64[1] = dVar5;
    if (((this->TransformUpdateHandle).ID == 0) && (*(longlong *)(lVar2 + 0x1b8) != 0)) {
      uStack_e0 = uStack_e0 & 0xffffffff00000000;
      local_e8.Data = (FScriptContainerElement *)OnTransformUpdated;
      local_c0._8_8_ = OnTransformUpdated;
      local_c0._16_8_ = uStack_e0;
      FVar10 = TMulticastDelegateRegistration<void___cdecl(USceneComponent_*,enum_EUpdateTransformFlags,enum_ETeleportType),FDefaultDelegateUserPolicy>
               ::AddUObject<UNavModifierComponent>
                         ((void *)(*(longlong *)(lVar2 + 0x1b8) + 0x1b0),
                          (UNavModifierComponent *)local_c0,(pmf_f8c4f84b *)this);
                    /* WARNING: Load size is inaccurate */
      (this->TransformUpdateHandle).ID = *FVar10.ID;
    }
  }
  (**(code **)(this->_padding_ + 0x500))(this);
  if (6 < (byte)LogNavigation._0_1_) {
    FLogScopedCategoryAndVerbosityOverride::FLogScopedCategoryAndVerbosityOverride
              (&local_d0,(FName)LogNavigation._4_8_,All);
    local_e8.Data = (FScriptContainerElement *)0x0;
    uStack_e0 = 0;
    if (0 < (this->ComponentBounds).ArrayNum) {
      do {
        uVar7 = 0;
        if ((int)uVar13 < (this->ComponentBounds).ArrayNum) {
          uVar7 = ~uVar13 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->ComponentBounds).AllocatorInstance.Data;
        uVar7 = 0;
        if ((int)uVar13 < (this->ComponentBounds).ArrayNum) {
          uVar7 = ~uVar13 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar11 = UE::Navigation::ModComponent::Private::CreateAreaModifier
                            ((FAreaNavModifier *)(local_c0 + 0x18),
                             (TBox<double> *)
                             ((this->ComponentBounds).AllocatorInstance.Data +
                             (longlong)(int)uVar13 * 0x60),
                             (TQuat<double> *)(pFVar3 + (longlong)(int)uVar13 * 0x60 + 0x40),
                             &this->AreaClass,&this->AreaClassToReplace,this->bIncludeAgentHeight);
        if (((local_e8.Data <= pFVar11) &&
            (pFVar11 < (FAreaNavModifier *)(local_e8.Data + (longlong)uStack_e0._4_4_ * 0x70))) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = (int)uStack_e0;
        if ((int)uStack_e0 == uStack_e0._4_4_) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x870,&local_e8,(int *)((longlong)&uStack_e0 + 4));
        }
        uStack_e0 = CONCAT44(uStack_e0._4_4_,iVar8 + 1);
        FAreaNavModifier::FAreaNavModifier
                  ((FAreaNavModifier *)(local_e8.Data + (longlong)iVar8 * 0x70),pFVar11);
        if (local_50 != (void *)0x0) {
          FMemory::Free(local_50);
        }
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < (this->ComponentBounds).ArrayNum);
    }
    iVar8 = (int)uStack_e0;
    pFVar11 = (FAreaNavModifier *)(local_e8.Data + (longlong)(int)uStack_e0 * 0x70);
    FVar12.Data = local_e8.Data;
    while( true ) {
      if ((int)uStack_e0 != iVar8) {
        `TCheckedPointerIterator<FAreaNavModifier,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_d8);
      }
      if ((FAreaNavModifier *)FVar12.Data == pFVar11) break;
      if (FVisualLogger::bIsRecording != 0) {
        FVisualLogger::BoxLogfImpl
                  ((UObject *)this,(FName *)&LogNavigation.field_0x4,All,
                   &((FAreaNavModifier *)FVar12.Data)->Bounds,&UE::Math::TMatrix<double>::Identity,
                   &FColor::Yellow,false,L"");
      }
      FVar12.Data = FVar12.Data + 0x70;
    }
    DestructItems<FAreaNavModifier,int>((FAreaNavModifier *)local_e8.Data,(int)uStack_e0);
    if ((FAreaNavModifier *)local_e8.Data != (FAreaNavModifier *)0x0) {
      FMemory::Free(local_e8.Data);
    }
    FLogCategoryBase::PostTrigger((FLogCategoryBase *)&LogNavigation,All);
    FLogScopedCategoryAndVerbosityOverride::~FLogScopedCategoryAndVerbosityOverride(&local_d0);
  }
  return;
}

// CalculateBounds @ 146e43610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall UNavModifierComponent::CalculateBounds(UNavModifierComponent *this)

{
  TArray<UNavModifierComponent::FRotatedBox,TSizedDefaultAllocator<32>_> *pTVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  UObject *pUVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  bool bVar15;
  uint uVar16;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar17;
  UClass *pUVar18;
  UBodySetup *pUVar19;
  TTransform<float> *pTVar20;
  int *piVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  longlong lVar25;
  uint uVar26;
  int iVar27;
  undefined1 *puVar28;
  uint *puVar29;
  TBitArray<FDefaultBitArrayAllocator> *pTVar30;
  longlong lVar31;
  longlong lVar32;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar37;
  undefined4 uVar38;
  undefined1 auVar36 [16];
  double dVar39;
  uint uVar40;
  double dVar41;
  uint uVar45;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined4 uVar51;
  double dVar52;
  double dVar53;
  double dVar57;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined8 unaff_XMM7_Qb;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  double dVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  uint uVar66;
  undefined1 auStackY_538 [32];
  undefined1 local_4e8 [4];
  uint local_4e4;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_4e0;
  TBitArray<FDefaultBitArrayAllocator> *local_4d8;
  double local_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined1 *local_4b8;
  undefined4 uStack_4b0;
  int iStack_4ac;
  int local_4a8;
  undefined4 uStack_4a4;
  int iStack_4a0;
  undefined4 uStack_49c;
  undefined1 local_498;
  undefined7 uStack_497;
  int local_488;
  int local_484;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_480;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_478;
  undefined8 uStack_458;
  double local_450;
  double dStack_448;
  double local_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined1 local_408;
  undefined4 uStack_407;
  undefined2 uStack_403;
  undefined1 uStack_401;
  TVector<double>_u_0 local_400;
  double local_3e8;
  double local_3e0;
  double dStack_3d8;
  undefined1 local_3d0;
  TVector<double>_u_0 local_3c8;
  double local_3b0;
  double local_3a8;
  double dStack_3a0;
  undefined1 local_398;
  undefined1 local_390 [16];
  undefined1 *local_380;
  double local_378;
  double dStack_370;
  double local_368;
  TTransform<double> local_358;
  TTransform<double> local_2f8;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined1 local_228;
  undefined7 uStack_227;
  undefined4 local_204;
  double local_1f8;
  double dStack_1f0;
  undefined1 local_1e8 [16];
  double local_1d8;
  double dStack_1d0;
  longlong local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  TTransform<double> local_198;
  TTransform<double> local_138;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_538;
  dVar62 = (double)this->_padding_;
  if (dVar62 == 0.0) {
    return;
  }
  uStack_407 = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  uStack_403 = 0;
  uStack_401 = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  local_408 = 0;
  local_418 = 0;
  uStack_410 = 0;
  this->_padding_ = 0;
  piVar21 = &(this->ComponentBounds).ArrayMax;
  local_438 = 0;
  uStack_430 = 0;
  local_428 = 0;
  uStack_420 = 0;
  (this->ComponentBounds).ArrayNum = 0;
  local_4d0 = dVar62;
  if (*piVar21 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,0,&(this->ComponentBounds).AllocatorInstance,0,piVar21);
  }
  pTVar17 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                      ((TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
                        *)((longlong)dVar62 + 0x248));
  iVar23 = *(int *)&(pTVar17->Elements).field_0x28;
  iVar27 = 0;
  iStack_4ac = 0;
  local_4a8 = 0;
  pTVar30 = (TBitArray<FDefaultBitArrayAllocator> *)&(pTVar17->Elements).field_0x10;
  uVar16 = 1;
  iVar22 = 0;
  if (iVar23 != 0) {
    puVar29 = *(uint **)&(pTVar17->Elements).field_0x20;
    if (puVar29 == (uint *)0x0) {
      puVar29 = (uint *)pTVar30;
    }
    uVar26 = *puVar29;
    while (uVar26 == 0) {
      iVar27 = iVar27 + 1;
      local_4a8 = local_4a8 + 0x20;
      iStack_4ac = iVar23;
      if ((int)(iVar23 + -1 + (iVar23 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar27) goto LAB_146e4377f;
      uVar26 = puVar29[iVar27];
    }
    uVar16 = ~(uVar26 - 1) & uVar26;
    uVar2 = (ulonglong)uVar16 * 2 + 1;
    lVar25 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    local_488 = (int)lVar25;
    iStack_4ac = local_4a8 + -1 + local_488;
    if (iVar23 < iStack_4ac) {
      iStack_4ac = iVar23;
    }
LAB_146e4377f:
    iVar22 = *(int *)&(pTVar17->Elements).field_0x28;
  }
  uVar26 = *(uint *)&(pTVar17->Elements).field_0x28;
  uStack_4a4 = local_204;
  uVar24 = uVar26 & 0xffffffe0;
  iStack_4a0 = *(int *)&(pTVar17->Elements).field_0x8 - *(int *)&(pTVar17->Elements).field_0x34;
  uStack_4b0 = 0xffffffff;
  uStack_4c0 = CONCAT44(uVar16,iVar27);
  TStack_478.CurrentBitIndex = iStack_4ac;
  TStack_478.UnvisitedBitMask = 0xffffffff;
  TStack_478._padding_ = uStack_4c0;
  iVar23 = (int)uVar26 >> 5;
  TStack_478._28_4_ = local_204;
  TStack_478.BaseBitIndex = local_4a8;
  uStack_458 = CONCAT44(uStack_49c,iStack_4a0);
  local_4b8 = (undefined1 *)pTVar30;
  local_4e4 = uVar26;
  local_4e0 = pTVar17;
  local_4d8 = pTVar30;
  local_4c8 = pTVar17;
  local_480 = pTVar17;
  TStack_478.Array = pTVar30;
  if ((((int)uVar26 < 0) || (iVar22 < (int)uVar26)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar16 = *(uint *)&(pTVar17->Elements).field_0x28;
  if (uVar26 != uVar16) {
    puVar3 = *(undefined1 **)&(pTVar17->Elements).field_0x20;
    puVar28 = (undefined1 *)pTVar30;
    if (puVar3 != (undefined1 *)0x0) {
      puVar28 = puVar3;
    }
    uVar26 = -1 << ((byte)uVar26 & 0x1f) & *(uint *)(puVar28 + (longlong)iVar23 * 4);
    while (uVar26 == 0) {
      iVar23 = iVar23 + 1;
      uVar24 = uVar24 + 0x20;
      uVar26 = uVar16;
      local_4e4 = uVar16;
      if ((int)(((int)(uVar16 - 1) >> 0x1f & 0x1fU) + (uVar16 - 1)) >> 5 < iVar23)
      goto LAB_146e43890;
      uVar26 = *(uint *)(puVar28 + (longlong)iVar23 * 4);
    }
    uVar2 = (ulonglong)(~(uVar26 - 1) & uVar26) * 2 + 1;
    lVar25 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    local_484 = (int)lVar25;
    uVar26 = (uVar24 - 1) + local_484;
    local_4e4 = uVar26;
    if ((int)uVar16 < (int)uVar26) {
      uVar26 = uVar16;
      local_4e4 = uVar16;
    }
  }
LAB_146e43890:
  do {
    pTVar17 = local_480;
    if (*(int *)&(local_480->Elements).field_0x8 - *(int *)&(local_480->Elements).field_0x34 !=
        (int)uStack_458) {
      local_4e8[0] = 0;
      `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_4e8);
    }
    if (((TStack_478.CurrentBitIndex == uVar26) && (TStack_478.Array == pTVar30)) &&
       (pTVar17 == local_4e0)) {
      pTVar1 = &this->ComponentBounds;
      if ((this->ComponentBounds).ArrayNum == 0) {
        lVar25 = *(longlong *)((longlong)local_4d0 + 0x1b8);
        auVar43 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_16_;
        local_4b8 = (undefined1 *)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        if (lVar25 != 0) {
          local_390 = *(undefined1 (*) [16])(lVar25 + 0x210);
          local_380 = *(undefined1 **)(lVar25 + 0x220);
          auVar43 = local_390;
          local_4b8 = local_380;
        }
        dStack_1d0 = (this->FailsafeExtent).field0_0x0._s_0.Z;
        dStack_1f0 = (this->FailsafeExtent).field0_0x0._s_0.Y;
        auVar12._4_8_ = unaff_XMM7_Qb;
        auVar12._0_4_ = auVar43._4_4_;
        auVar59._0_8_ = auVar12._0_8_ << 0x20;
        auVar59._8_4_ = auVar43._8_4_;
        auVar59._12_4_ = auVar43._12_4_;
        dVar62 = (this->FailsafeExtent).field0_0x0._s_0.X;
        local_1d8 = auVar59._8_8_ + dStack_1f0;
        local_1f8 = auVar43._0_8_ - dVar62;
        local_498 = 1;
        dVar41 = (double)local_4b8 - dStack_1d0;
        dStack_1d0 = (double)local_4b8 + dStack_1d0;
        dStack_1f0 = auVar59._8_8_ - dStack_1f0;
        dVar62 = auVar43._0_8_ + dVar62;
        local_1c8 = CONCAT71(uStack_497,1);
        this->_padding_ = (longlong)local_1f8;
        this->_padding_ = (longlong)dStack_1f0;
        uVar38 = SUB84(dVar62,0);
        uVar51 = (undefined4)((ulonglong)dVar62 >> 0x20);
        auVar43._8_4_ = uVar38;
        auVar43._0_8_ = dVar41;
        auVar43._12_4_ = uVar51;
        this->_padding_ = (longlong)dVar41;
        this->_padding_ = auVar43._8_8_;
        this->_padding_ = (longlong)local_1d8;
        this->_padding_ = (longlong)dStack_1d0;
        this->_padding_ = local_1c8;
        lVar25 = *(longlong *)((longlong)local_4d0 + 0x1b8);
        if (lVar25 == 0) {
          local_1b8 = 0;
          uStack_1b0 = 0;
          local_278 = 0;
          uStack_270 = 0;
          local_268 = ___xmm_3ff00000000000000000000000000000;
          uStack_260 = _UNK_15061cbc8;
          local_1a8 = ___xmm_3ff00000000000000000000000000000;
          uStack_1a0 = _UNK_15061cbc8;
        }
        else {
          local_1b8 = *(undefined8 *)(lVar25 + 0x1f0);
          uStack_1b0 = *(undefined8 *)(lVar25 + 0x1f8);
          local_288 = *(undefined8 *)(lVar25 + 0x200);
          uStack_280 = *(undefined8 *)(lVar25 + 0x208);
          local_1a8 = local_288;
          uStack_1a0 = uStack_280;
          local_298 = local_1b8;
          uStack_290 = uStack_1b0;
        }
        pFVar6 = (pTVar1->AllocatorInstance).Data;
        piVar21 = &(this->ComponentBounds).ArrayMax;
        local_1e8._8_4_ = uVar38;
        local_1e8._0_8_ = dVar41;
        local_1e8._12_4_ = uVar51;
        if (((pFVar6 <= (FScriptContainerElement *)&local_1f8) &&
            ((FScriptContainerElement *)&local_1f8 < pFVar6 + (longlong)*piVar21 * 0x60)) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar15)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar23 = (this->ComponentBounds).ArrayNum;
        if (iVar23 == *piVar21) {
          iVar23 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1060,&pTVar1->AllocatorInstance,piVar21);
        }
        (this->ComponentBounds).ArrayNum = iVar23 + 1;
        pFVar6 = (pTVar1->AllocatorInstance).Data;
        lVar25 = (longlong)iVar23 * 0x60;
        *(double *)(pFVar6 + lVar25) = local_1f8;
        *(double *)(pFVar6 + lVar25 + 8) = dStack_1f0;
        *(undefined8 *)(pFVar6 + lVar25 + 0x10) = local_1e8._0_8_;
        *(undefined8 *)(pFVar6 + lVar25 + 0x10 + 8) = local_1e8._8_8_;
        *(double *)(pFVar6 + lVar25 + 0x20) = local_1d8;
        *(double *)(pFVar6 + lVar25 + 0x20 + 8) = dStack_1d0;
        *(longlong *)(pFVar6 + lVar25 + 0x30) = local_1c8;
        *(undefined8 *)(pFVar6 + lVar25 + 0x30 + 8) = uStack_1c0;
        *(undefined8 *)(pFVar6 + lVar25 + 0x40) = local_1b8;
        *(undefined8 *)(pFVar6 + lVar25 + 0x40 + 8) = uStack_1b0;
        *(undefined8 *)(pFVar6 + lVar25 + 0x50) = local_1a8;
        *(undefined8 *)(pFVar6 + lVar25 + 0x50 + 8) = uStack_1a0;
      }
      dVar62 = __real_3fe0000000000000;
      uVar16 = 0;
      if ((this->ComponentBounds).ArrayNum < 1) {
        return;
      }
      lVar25 = 0;
      local_4c8 = (TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>
                   *)0x0;
      uStack_4c0 = 0;
      while( true ) {
        uVar24 = ~uVar16 >> 0x1f;
        uVar26 = 0;
        if ((int)uVar16 < (this->ComponentBounds).ArrayNum) {
          uVar26 = uVar24;
        }
        if ((uVar26 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar6 = (pTVar1->AllocatorInstance).Data;
        local_450 = (*(double *)(pFVar6 + lVar25) + *(double *)(pFVar6 + lVar25 + 0x18)) * dVar62;
        dStack_448 = (*(double *)(pFVar6 + lVar25 + 0x20) + *(double *)(pFVar6 + lVar25 + 8)) *
                     dVar62;
        uVar26 = 0;
        if ((int)uVar16 < (this->ComponentBounds).ArrayNum) {
          uVar26 = uVar24;
        }
        local_440 = (*(double *)(pFVar6 + lVar25 + 0x28) + *(double *)(pFVar6 + lVar25 + 0x10)) *
                    dVar62;
        if ((uVar26 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar6 = (pTVar1->AllocatorInstance).Data;
        local_4d0 = (*(double *)(pFVar6 + lVar25 + 0x18) - *(double *)(pFVar6 + lVar25)) * dVar62;
        local_4d8 = (TBitArray<FDefaultBitArrayAllocator> *)
                    ((*(double *)(pFVar6 + lVar25 + 0x20) - *(double *)(pFVar6 + lVar25 + 8)) *
                    dVar62);
        uVar26 = 0;
        if ((int)uVar16 < (this->ComponentBounds).ArrayNum) {
          uVar26 = uVar24;
        }
        local_4e0 = (TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>
                     *)((*(double *)(pFVar6 + lVar25 + 0x28) - *(double *)(pFVar6 + lVar25 + 0x10))
                       * dVar62);
        if ((uVar26 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) break;
        pFVar7 = (pTVar1->AllocatorInstance).Data;
        pFVar6 = pFVar7 + lVar25 + 0x40;
        dVar52 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0] * *(double *)pFVar6;
        dVar57 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1] *
                 *(double *)(pFVar6 + 8);
        pFVar7 = pFVar7 + lVar25 + 0x50;
        auVar63._0_8_ =
             *(double *)pFVar7 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        auVar63._8_8_ =
             *(double *)(pFVar7 + 8) * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        auVar58._8_4_ = SUB84(dVar57,0);
        auVar58._0_8_ = dVar52;
        auVar58._12_4_ = (int)((ulonglong)dVar57 >> 0x20);
        auVar59 = blendpd(auVar58,auVar63,2);
        dVar41 = local_450 - (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        dVar9 = dStack_448 - (double)GlobalVectorConstants::FloatZero.m128_f32[1];
        uVar38 = (undefined4)((ulonglong)dVar9 >> 0x20);
        auVar46._8_4_ = SUB84(dVar9,0);
        auVar46._0_8_ = dVar41;
        auVar46._12_4_ = uVar38;
        dVar39 = local_440 - (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        auVar42._8_4_ = SUB84(dVar9,0);
        auVar42._0_8_ = dVar41;
        auVar42._12_4_ = uVar38;
        auVar34._8_4_ = SUB84(auVar63._0_8_,0);
        auVar34._0_8_ = dVar57;
        auVar34._12_4_ = (int)((ulonglong)auVar63._0_8_ >> 0x20);
        auVar11._8_8_ = 0;
        auVar11._0_8_ = dVar39;
        auVar43 = blendpd(auVar42,auVar11,2);
        auVar47._0_8_ = auVar46._8_8_ * dVar52 - dVar57 * dVar41;
        auVar47._8_8_ = dVar39 * dVar57 - auVar34._8_8_ * dVar9;
        auVar35._8_4_ = SUB84(auVar47._8_8_,0);
        auVar35._0_8_ = auVar47._0_8_;
        auVar35._12_4_ = (int)((ulonglong)auVar47._8_8_ >> 0x20);
        dVar53 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        uVar26 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        uVar66 = (uint)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        auVar44._0_8_ = auVar43._0_8_ * auVar63._0_8_ - auVar59._0_8_ * dVar39;
        auVar44._8_8_ = auVar43._8_8_ * auVar63._8_8_ - auVar59._8_8_ * 0.0;
        dVar33 = auVar35._8_8_ + auVar35._8_8_;
        dVar37 = auVar44._0_8_ + auVar44._0_8_;
        auVar43 = blendpd(auVar47,auVar44,2);
        auVar64._8_4_ = SUB84(dVar37,0);
        auVar64._0_8_ = dVar33;
        uVar38 = (undefined4)((ulonglong)dVar37 >> 0x20);
        auVar64._12_4_ = uVar38;
        auVar48._0_8_ = auVar43._0_8_ + auVar43._0_8_;
        auVar48._8_8_ = auVar43._8_8_ + auVar43._8_8_;
        auVar54._8_4_ = SUB84(dVar37,0);
        auVar54._0_8_ = dVar33;
        auVar54._12_4_ = uVar38;
        auVar43 = blendpd(auVar54,auVar48,2);
        auVar65._0_8_ = auVar64._8_8_ * dVar52 - dVar33 * dVar57;
        auVar65._8_8_ = auVar48._0_8_ * dVar57 - dVar37 * auVar63._0_8_;
        dVar52 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        auVar13._4_8_ = auVar48._8_8_;
        auVar13._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
        auVar49._0_8_ = auVar13._0_8_ << 0x20;
        auVar49._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
        auVar49._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
        auVar50._8_8_ = auVar49._8_8_;
        auVar50._0_8_ = dVar52;
        lVar31 = -(ulonglong)
                  ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                    (uint)((ulonglong)dVar52 >> 0x20),
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff & SUB84(dVar52,0))
                  <= (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
        uVar40 = (uint)lVar31;
        uVar45 = (uint)((ulonglong)lVar31 >> 0x20);
        auVar55._0_8_ = auVar43._0_8_ * auVar63._0_8_ - auVar59._0_8_ * auVar48._0_8_;
        auVar55._8_8_ = auVar43._8_8_ * auVar63._8_8_ - auVar59._8_8_ * auVar48._8_8_;
        auVar10._8_4_ = uVar26;
        auVar10._0_8_ = dVar53;
        auVar10._12_4_ = uVar66;
        auVar43 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar10);
        auVar60._0_8_ =
             (double)CONCAT44((uint)((ulonglong)dVar53 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar53,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
        auVar60._8_4_ = uVar26 & _UNK_15061cc88;
        auVar60._12_4_ = uVar66 & _UNK_15061cc8c;
        lVar31 = -(ulonglong)
                  (auVar60._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
        lVar32 = -(ulonglong)
                  (auVar60._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
        auVar36._8_4_ = SUB84(auVar65._8_8_,0);
        auVar36._0_8_ = auVar65._0_8_;
        auVar36._12_4_ = (int)((ulonglong)auVar65._8_8_ >> 0x20);
        auVar61._0_8_ =
             (double)CONCAT44(~(uint)((ulonglong)lVar31 >> 0x20) & auVar43._4_4_,
                              ~(uint)lVar31 & auVar43._0_4_);
        auVar61._8_4_ = ~(uint)lVar32 & auVar43._8_4_;
        auVar61._12_4_ = ~(uint)((ulonglong)lVar32 >> 0x20) & auVar43._12_4_;
        local_378 = auVar61._0_8_ * (auVar36._8_8_ + dVar41 + dVar33 * auVar63._8_8_);
        dStack_370 = auVar61._8_8_ * (auVar55._0_8_ + dVar9 + dVar37 * auVar63._8_8_);
        auVar43 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar50);
        auVar59 = blendpd(auVar65,auVar55,2);
        local_228 = 1;
        uVar26 = 0;
        if ((int)uVar16 < (this->ComponentBounds).ArrayNum) {
          uVar26 = uVar24;
        }
        auVar14._4_8_ = auVar55._8_8_;
        auVar14._0_4_ = (int)((ulonglong)local_378 >> 0x20);
        auVar56._0_8_ = auVar14._0_8_ << 0x20;
        auVar56._8_4_ = SUB84(dStack_370,0);
        auVar56._12_4_ = (int)((ulonglong)dStack_370 >> 0x20);
        dVar41 = auVar56._8_8_ - (double)local_4d8;
        dVar53 = auVar56._8_8_ + (double)local_4d8;
        local_368 = (double)(CONCAT44(~uVar45 & auVar43._4_4_,~uVar40 & auVar43._0_4_) |
                            CONCAT44(local_4c8._4_4_ & uVar45,(uint)local_4c8 & uVar40)) *
                    (auVar59._0_8_ + dVar39 + auVar63._8_8_ * auVar48._0_8_);
        dVar9 = local_368 - (double)local_4e0;
        dVar37 = local_378 - local_4d0;
        dVar33 = local_378 + local_4d0;
        dVar52 = local_368 + (double)local_4e0;
        if ((uVar26 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar6 = (pTVar1->AllocatorInstance).Data;
        uVar16 = uVar16 + 1;
        *(double *)(pFVar6 + lVar25) = dVar37;
        *(double *)(pFVar6 + lVar25 + 8) = dVar41;
        *(double *)(pFVar6 + lVar25 + 0x10) = dVar9;
        *(double *)(pFVar6 + lVar25 + 0x10 + 8) = dVar33;
        *(double *)(pFVar6 + lVar25 + 0x20) = dVar53;
        *(double *)(pFVar6 + lVar25 + 0x20 + 8) = dVar52;
        *(ulonglong *)(pFVar6 + lVar25 + 0x30) = CONCAT71(uStack_227,local_228);
        lVar25 = lVar25 + 0x60;
        if ((this->ComponentBounds).ArrayNum <= (int)uVar16) {
          return;
        }
      }
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    plVar4 = *(longlong **)
              (*(longlong *)&pTVar17->Elements + (longlong)TStack_478.CurrentBitIndex * 0x10);
    if (plVar4 != (longlong *)0x0) {
      pUVar18 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
      iVar23 = (int)pUVar18->_padding_;
      if ((((iVar23 <= *(int *)(plVar4[2] + 0x38)) &&
           ((longlong *)*(undefined1 **)(*(longlong *)(plVar4[2] + 0x30) + (longlong)iVar23 * 8) ==
            &pUVar18->_padding_)) && ((*(byte *)(plVar4 + 0x13) & 1) != 0)) &&
         ((iVar23 = (**(code **)(*plVar4 + 0x5e0))(plVar4), iVar23 != 0 &&
          (*(char *)((longlong)plVar4 + 0x9a) < '\0')))) {
        pUVar19 = (UBodySetup *)(**(code **)(*plVar4 + 0x800))(plVar4);
        if (pUVar19 == (UBodySetup *)0x0) {
          pUVar18 = Z_Construct_UClass_UGeometryCollectionComponent_NoRegister();
          iVar23 = (int)pUVar18->_padding_;
          if ((iVar23 <= *(int *)(plVar4[2] + 0x38)) &&
             ((longlong *)*(undefined1 **)(*(longlong *)(plVar4[2] + 0x30) + (longlong)iVar23 * 8)
              == &pUVar18->_padding_)) {
            pUVar5 = (UObject *)plVar4[0xb4];
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              if (pUVar5 == (UObject *)0x0) goto LAB_146e43cdc;
              UE::GC::MarkAsReachable(pUVar5);
            }
            if (pUVar5 != (UObject *)0x0) {
              local_3c8._s_0.Y = (double)plVar4[0x23] - (double)plVar4[0x26];
              local_3c8._s_0.X = (double)plVar4[0x22] - (double)plVar4[0x25];
              local_398 = 1;
              local_3b0 = (double)plVar4[0x22] + (double)plVar4[0x25];
              local_3c8._s_0.Z = (double)plVar4[0x24] - (double)plVar4[0x27];
              local_3a8 = (double)plVar4[0x23] + (double)plVar4[0x26];
              dStack_3a0 = (double)plVar4[0x24] + (double)plVar4[0x27];
              UE::Math::TBox<double>::operator+=
                        ((TBox<double> *)&this->_padding_,(TBox<double> *)&local_3c8._s_0);
              uVar16 = 0;
              iVar23 = *(int *)&pUVar5[5].field_0x10;
              uVar26 = local_4e4;
              if (0 < iVar23) {
                lVar25 = 0;
                do {
                  uVar26 = 0;
                  if ((int)uVar16 < iVar23) {
                    uVar26 = ~uVar16 >> 0x1f;
                  }
                  if ((uVar26 == 0) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar15)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  lVar31 = *(longlong *)(lVar25 + *(longlong *)&pUVar5[5].field_0x8);
                  if ((lVar31 != 0) &&
                     (pUVar19 = *(UBodySetup **)(lVar31 + 0x1d8), pUVar19 != (UBodySetup *)0x0)) {
                    pTVar20 = FGeometryCollectionProxyMeshData::GetMeshTransform
                                        ((FGeometryCollectionProxyMeshData *)&pUVar5[5].field_0x8,
                                         uVar16);
                    local_138.Translation.XY.m128d_f64[0] =
                         (double)(pTVar20->Translation).m128_f32[0];
                    local_138.Translation.XY.m128d_f64[1] =
                         (double)(pTVar20->Translation).m128_f32[1];
                    local_138.Translation.ZW.m128d_f64[0] =
                         (double)(pTVar20->Translation).m128_f32[2];
                    local_138.Translation.ZW.m128d_f64[1] =
                         (double)(pTVar20->Translation).m128_f32[3];
                    local_138.Rotation.XY.m128d_f64[0] = (double)(pTVar20->Rotation).m128_f32[0];
                    local_138.Rotation.XY.m128d_f64[1] = (double)(pTVar20->Rotation).m128_f32[1];
                    local_138.Rotation.ZW.m128d_f64[0] = (double)(pTVar20->Rotation).m128_f32[2];
                    local_138.Rotation.ZW.m128d_f64[1] = (double)(pTVar20->Rotation).m128_f32[3];
                    local_198.Rotation.XY.m128d_f64[0] =
                         (double)GlobalVectorConstants::Float0001.m128_f32[0];
                    local_198.Rotation.XY.m128d_f64[1] =
                         (double)GlobalVectorConstants::Float0001.m128_f32[1];
                    local_198.Rotation.ZW.m128d_f64[0] =
                         (double)GlobalVectorConstants::Float0001.m128_f32[2];
                    local_198.Rotation.ZW.m128d_f64[1] =
                         (double)GlobalVectorConstants::Float0001.m128_f32[3];
                    local_198.Translation.XY.m128d_f64[0] =
                         (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                    local_198.Translation.XY.m128d_f64[1] =
                         (double)GlobalVectorConstants::FloatZero.m128_f32[1];
                    local_198.Translation.ZW.m128d_f64[0] =
                         (double)GlobalVectorConstants::FloatZero.m128_f32[2];
                    local_198.Translation.ZW.m128d_f64[1] =
                         (double)GlobalVectorConstants::FloatZero.m128_f32[3];
                    local_198.Scale3D.XY.m128d_f64[0] =
                         (double)GlobalVectorConstants::Float1110.m128_f32[0];
                    local_198.Scale3D.XY.m128d_f64[1] =
                         (double)GlobalVectorConstants::Float1110.m128_f32[1];
                    local_198.Scale3D.ZW.m128d_f64[0] =
                         (double)GlobalVectorConstants::Float1110.m128_f32[2];
                    local_198.Scale3D.ZW.m128d_f64[1] =
                         (double)GlobalVectorConstants::Float1110.m128_f32[3];
                    local_138.Scale3D.XY.m128d_f64[1]._0_4_ =
                         SUB84((double)(pTVar20->Scale3D).m128_f32[1],0);
                    local_138.Scale3D.XY.m128d_f64[0] = (double)(pTVar20->Scale3D).m128_f32[0];
                    local_138.Scale3D.XY.m128d_f64[1]._4_4_ =
                         (int)((ulonglong)(double)(pTVar20->Scale3D).m128_f32[1] >> 0x20);
                    local_138.Scale3D.ZW.m128d_f64[1]._0_4_ =
                         SUB84((double)(pTVar20->Scale3D).m128_f32[3],0);
                    local_138.Scale3D.ZW.m128d_f64[0] = (double)(pTVar20->Scale3D).m128_f32[2];
                    local_138.Scale3D.ZW.m128d_f64[1]._4_4_ =
                         (int)((ulonglong)(double)(pTVar20->Scale3D).m128_f32[3] >> 0x20);
                    UE::Math::TTransform<double>::Multiply
                              (&local_198,&local_138,(TTransform<double> *)(plVar4 + 0x3e));
                    local_2f8.Rotation.XY.m128d_f64[0] = local_198.Rotation.XY.m128d_f64[0];
                    local_2f8.Rotation.XY.m128d_f64[1] = local_198.Rotation.XY.m128d_f64[1];
                    local_2f8.Rotation.ZW.m128d_f64[0] = local_198.Rotation.ZW.m128d_f64[0];
                    local_2f8.Rotation.ZW.m128d_f64[1] = local_198.Rotation.ZW.m128d_f64[1];
                    local_2f8.Translation.XY.m128d_f64[0] = local_198.Translation.XY.m128d_f64[0];
                    local_2f8.Translation.XY.m128d_f64[1] = local_198.Translation.XY.m128d_f64[1];
                    local_2f8.Translation.ZW.m128d_f64[0] = local_198.Translation.ZW.m128d_f64[0];
                    local_2f8.Translation.ZW.m128d_f64[1] = local_198.Translation.ZW.m128d_f64[1];
                    local_2f8.Scale3D.XY.m128d_f64[0] = local_198.Scale3D.XY.m128d_f64[0];
                    local_2f8.Scale3D.XY.m128d_f64[1] = local_198.Scale3D.XY.m128d_f64[1];
                    local_2f8.Scale3D.ZW.m128d_f64[0] = local_198.Scale3D.ZW.m128d_f64[0];
                    local_2f8.Scale3D.ZW.m128d_f64[1] = local_198.Scale3D.ZW.m128d_f64[1];
                    PopulateComponentBounds(this,&local_2f8,pUVar19);
                  }
                  iVar23 = *(int *)&pUVar5[5].field_0x10;
                  uVar16 = uVar16 + 1;
                  lVar25 = lVar25 + 8;
                  pTVar30 = local_4d8;
                  uVar26 = local_4e4;
                } while ((int)uVar16 < iVar23);
              }
            }
          }
        }
        else {
          local_400._s_0.Y = (double)plVar4[0x23] - (double)plVar4[0x26];
          local_400._s_0.X = (double)plVar4[0x22] - (double)plVar4[0x25];
          local_3d0 = 1;
          local_3e8 = (double)plVar4[0x22] + (double)plVar4[0x25];
          local_400._s_0.Z = (double)plVar4[0x24] - (double)plVar4[0x27];
          local_3e0 = (double)plVar4[0x23] + (double)plVar4[0x26];
          dStack_3d8 = (double)plVar4[0x24] + (double)plVar4[0x27];
          UE::Math::TBox<double>::operator+=
                    ((TBox<double> *)&this->_padding_,(TBox<double> *)&local_400._s_0);
          local_358.Rotation.XY.m128d_f64[0] = (double)plVar4[0x3e];
          local_358.Rotation.XY.m128d_f64[1] = (double)plVar4[0x3f];
          local_358.Rotation.ZW.m128d_f64[0] = (double)plVar4[0x40];
          local_358.Rotation.ZW.m128d_f64[1] = (double)plVar4[0x41];
          local_358.Translation.XY.m128d_f64[0] = (double)plVar4[0x42];
          local_358.Translation.XY.m128d_f64[1] = (double)plVar4[0x43];
          local_358.Translation.ZW.m128d_f64[0] = (double)plVar4[0x44];
          local_358.Translation.ZW.m128d_f64[1] = (double)plVar4[0x45];
          local_358.Scale3D.XY.m128d_f64[0] = (double)plVar4[0x46];
          local_358.Scale3D.XY.m128d_f64[1] = (double)plVar4[0x47];
          local_358.Scale3D.ZW.m128d_f64[0] = (double)plVar4[0x48];
          local_358.Scale3D.ZW.m128d_f64[1] = (double)plVar4[0x49];
          PopulateComponentBounds(this,&local_358,pUVar19);
        }
      }
    }
LAB_146e43cdc:
    TStack_478.UnvisitedBitMask = TStack_478.UnvisitedBitMask & ~TStack_478._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_478);
  } while( true );
}

// GetNavigationData @ 146e5c2d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
UNavModifierComponent::GetNavigationData
          (UNavModifierComponent *this,FNavigationRelevantData *param_1)

{
  TArray<FAreaNavModifier,TSizedDefaultAllocator<32>_> *pTVar1;
  byte bVar2;
  longlong lVar3;
  FAreaNavModifier *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FAreaNavModifier *pFVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStackY_118 [32];
  FAreaNavModifier local_b8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_118;
  iVar7 = (int)this->_padding_;
  uVar11 = 0;
  if (iVar7 < 1) {
    (param_1->Modifiers).NavMeshResolution = (ENavigationDataResolution)this->_padding_;
  }
  else {
    pTVar1 = &(param_1->Modifiers).Areas;
    do {
      bVar2 = *(byte *)((longlong)&this->_padding_ + 1);
      uVar9 = 0;
      if ((int)uVar11 < iVar7) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      lVar3 = this->_padding_;
      uVar9 = 0;
      if ((int)uVar11 < (int)this->_padding_) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar8 = UE::Navigation::ModComponent::Private::CreateAreaModifier
                         (&local_b8,(TBox<double> *)(this->_padding_ + (longlong)(int)uVar11 * 0x60)
                          ,(TQuat<double> *)(lVar3 + 0x40 + (longlong)(int)uVar11 * 0x60),
                          (TSubclassOf<UNavArea> *)&this->_padding_,
                          (TSubclassOf<UNavArea> *)&this->_padding_,(bool)(bVar2 & 1));
      pFVar4 = (FAreaNavModifier *)(pTVar1->AllocatorInstance).Data;
      if ((pFVar4 <= pFVar8) && (pFVar8 < pFVar4 + (param_1->Modifiers).Areas.ArrayMax)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar7 = (param_1->Modifiers).Areas.ArrayNum;
      if (iVar7 == (param_1->Modifiers).Areas.ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x870,&pTVar1->AllocatorInstance,&(param_1->Modifiers).Areas.ArrayMax);
      }
      (param_1->Modifiers).Areas.ArrayNum = iVar7 + 1;
      FAreaNavModifier::FAreaNavModifier
                ((FAreaNavModifier *)((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x70),
                 pFVar8);
      uVar9 = (uint)(param_1->Modifiers)._padding_;
      uVar10 = pFVar8->_padding_ & 1U | uVar9;
      *(uint *)&(param_1->Modifiers)._padding_ = (uVar10 ^ uVar9) & 0xfffffffe ^ uVar10;
      uVar9 = *(uint *)&(param_1->Modifiers).field_0x50;
      uVar9 = ((byte)pFVar8->field_0x6a | uVar9) & 2 ^ uVar9 & 0xfffffffd;
      *(uint *)&(param_1->Modifiers).field_0x50 = uVar9;
      *(uint *)&(param_1->Modifiers).field_0x50 =
           ((byte)pFVar8->field_0x6a | uVar9) & 4 ^ uVar9 & 0xfffffffb;
      if (local_b8.Points.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Points.AllocatorInstance.Data);
      }
      iVar7 = (int)this->_padding_;
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < iVar7);
    (param_1->Modifiers).NavMeshResolution = (ENavigationDataResolution)this->_padding_;
  }
  return;
}

// GetPrivateStaticClass @ 146e5d200

UClass * __cdecl UNavModifierComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavModifierComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavModifierComponent",
               &Z_Registration_Info_UClass_UNavModifierComponent.InnerSingleton,
               StaticRegisterNativesUNavModifierComponent,0x1c0,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavModifierComponent>,
               InternalVTableHelperCtorCaller<UNavModifierComponent>,local_res8,
               UNavRelevantComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavModifierComponent.InnerSingleton;
}

// OnRegister @ 146e673d0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNavModifierComponent::OnRegister(UNavModifierComponent *this)

{
  UObjectBaseUtility *this_00;
  UObjectBaseUtility *this_01;
  char cVar1;
  UClass *pUVar2;
  longlong *plVar3;
  
  UActorComponent::OnRegister((UActorComponent *)this);
  if (((this->_padding_ & 1) != 0) &&
     (this_00 = (UObjectBaseUtility *)this->_padding_, this_00 != (UObjectBaseUtility *)0x0)) {
    this_01 = *(UObjectBaseUtility **)(this_00 + 0xb);
    if (this_01 != (UObjectBaseUtility *)0x0) {
      pUVar2 = Z_Construct_UClass_UNavRelevantInterface_NoRegister();
      plVar3 = UObjectBaseUtility::GetInterfaceAddress(this_01,pUVar2);
      if (((plVar3 != (longlong *)0x0) &&
          (cVar1 = (**(code **)(*plVar3 + 0x70))(plVar3), cVar1 != '\0')) &&
         (cVar1 = (**(code **)(*(longlong *)this_00 + 0x750))(this_00,this_01), cVar1 != '\0')) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_01);
        }
        this->_padding_ = (longlong)this_01;
      }
    }
    if (this->_padding_ == 0) {
      pUVar2 = Z_Construct_UClass_UNavRelevantInterface_NoRegister();
      plVar3 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar2);
      if ((plVar3 != (longlong *)0x0) &&
         (cVar1 = (**(code **)(*plVar3 + 0x70))(plVar3), cVar1 != '\0')) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        this->_padding_ = (longlong)this_00;
      }
    }
  }
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 4;
  FNavigationSystem::OnComponentRegistered((UActorComponent *)this);
  return;
}

// OnTransformUpdated @ 146e675d0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNavModifierComponent::OnTransformUpdated
          (UNavModifierComponent *this,USceneComponent *param_1,EUpdateTransformFlags param_2,
          ETeleportType param_3)

{
  longlong *plVar1;
  FReadAccessScope FStack_28;
  
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffd;
  if (((param_1 != (USceneComponent *)0x0) && (-1 < *(char *)((longlong)&param_1->_padding_ + 2)))
     && ((this->_padding_ & 1) != 0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &FNavigationSystem::Delegates.UpdateComponentData,&FStack_28);
    plVar1 = (longlong *)0x0;
    if (FNavigationSystem::Delegates.UpdateComponentData._16_4_ != 0) {
      plVar1 = (longlong *)FNavigationSystem::Delegates.UpdateComponentData._8_8_;
    }
    (**(code **)(*plVar1 + 0x60))(plVar1,this);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&FStack_28);
    return;
  }
  return;
}

// OnUnregister @ 146e67600

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNavModifierComponent::OnUnregister(UNavModifierComponent *this)

{
  UActorComponent::OnUnregister((UActorComponent *)this);
  FNavigationSystem::OnComponentUnregistered((UActorComponent *)this);
  return;
}

// PopulateComponentBounds @ 146e679a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
UNavModifierComponent::PopulateComponentBounds
          (UNavModifierComponent *this,TTransform<double> *param_1,UBodySetup *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [12];
  ulonglong uVar16;
  __m128 _Var17;
  __m128d _Var18;
  __m128d _Var19;
  UNavModifierComponent *pUVar20;
  bool bVar21;
  int iVar22;
  uint uVar23;
  TQuat<double> *pTVar24;
  longlong lVar25;
  TArray<UNavModifierComponent::FRotatedBox,TSizedDefaultAllocator<32>_> *pTVar26;
  uint uVar27;
  uint uVar28;
  longlong lVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar49;
  double dVar50;
  double dVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined4 uVar61;
  undefined4 uVar62;
  double dVar63;
  double dVar64;
  undefined1 auStack_5e8 [32];
  double *local_5c8;
  FScriptContainerElement *local_5c0;
  longlong local_5b8;
  longlong local_5b0;
  undefined8 local_5a8;
  double local_598;
  double dStack_590;
  double local_588;
  undefined1 local_578 [16];
  UNavModifierComponent *local_568;
  double dStack_560;
  undefined1 local_528;
  undefined7 uStack_527;
  undefined1 local_520 [16];
  double local_508;
  double dStack_500;
  undefined1 local_4f8 [16];
  double local_4e8;
  double dStack_4e0;
  double local_4d8;
  double local_4d0 [2];
  double local_4c0;
  double local_4b8;
  double dStack_4b0;
  double local_4a8;
  undefined1 local_4a0 [16];
  double local_490;
  undefined1 local_488 [16];
  UNavModifierComponent *local_478;
  double local_468;
  double dStack_460;
  double local_458;
  double dStack_450;
  double local_448;
  double dStack_440;
  double local_438;
  double dStack_430;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  TQuat<double> local_3c8;
  TQuat<double> local_3a8;
  undefined1 local_388 [16];
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  undefined8 local_358;
  undefined8 uStack_350;
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  undefined8 local_298;
  undefined8 uStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  undefined1 local_268 [16];
  double local_258;
  double dStack_250;
  undefined1 local_248 [16];
  undefined8 local_238;
  undefined8 uStack_230;
  double local_228;
  double dStack_220;
  undefined1 local_218 [16];
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  _Var19.m128d_f64 = GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64;
  _Var18.m128d_f64 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64;
  _Var17.m128_f32 = GlobalVectorConstants::Float1110.m128_f32;
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_5e8;
  dVar14 = (param_1->Scale3D).XY.m128d_f64[0];
  dVar64 = (param_1->Scale3D).XY.m128d_f64[1];
  auVar41 = *(undefined1 (*) [16])(param_1->Scale3D).XY.m128d_f64;
  pTVar26 = &this->ComponentBounds;
  local_588 = (param_1->Scale3D).ZW.m128d_f64[0];
  uVar27 = 0;
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[1];
  auVar43._8_8_ = GlobalVectorConstants::Float1110.m128_u64[1];
  auVar43._0_8_ = auVar43._8_8_;
  (param_1->Scale3D).XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (param_1->Scale3D).XY.m128d_f64[1] = (double)fVar6;
  (param_1->Scale3D).ZW.m128d_f64[0] = (double)_Var17.m128_f32[2];
  (param_1->Scale3D).ZW.m128d_f64[1] = (double)_Var17.m128_f32[3];
  dVar34 = (param_1->Rotation).XY.m128d_f64[0];
  dVar49 = (param_1->Rotation).XY.m128d_f64[1];
  dVar63 = (param_1->Rotation).ZW.m128d_f64[0];
  dVar9 = (param_1->Rotation).ZW.m128d_f64[1];
  dVar7 = dVar63 * dVar63 + dVar34 * dVar34;
  dVar8 = dVar9 * dVar9 + dVar49 * dVar49;
  auVar45._8_4_ = SUB84(dVar8,0);
  auVar45._0_8_ = dVar7;
  auVar45._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  auVar35._0_8_ = auVar45._8_8_ + dVar7;
  auVar35._8_8_ = dVar7 + dVar8;
  auVar44 = sqrtpd(auVar43,auVar35);
  uVar30 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar35._0_8_);
  uVar32 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar35._8_8_);
  uVar31 = -(ulonglong)(_Var19.m128d_f64[0] <= auVar35._0_8_);
  uVar33 = -(ulonglong)(_Var19.m128d_f64[1] <= auVar35._8_8_);
  auVar36 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar44);
  auVar44 = divpd((undefined1  [16])_Var18.m128d_f64,auVar44);
  auVar37._0_8_ = uVar31 & (ulonglong)(auVar36._0_8_ * dVar34);
  uVar16 = uVar33 & (ulonglong)(auVar36._8_8_ * dVar49);
  auVar37._8_4_ = (undefined4)uVar16;
  auVar37._12_4_ = (undefined4)(uVar16 >> 0x20);
  auVar52._0_8_ = uVar30 & (ulonglong)(auVar44._0_8_ * dVar63);
  uVar16 = uVar32 & (ulonglong)(auVar44._8_8_ * dVar9);
  auVar52._8_4_ = (undefined4)uVar16;
  auVar52._12_4_ = (undefined4)(uVar16 >> 0x20);
  auVar44._4_4_ = ~(uint)(uVar31 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
  auVar44._0_4_ = ~(uint)uVar31 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
  auVar44._8_4_ = ~(uint)uVar33 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
  auVar44._12_4_ = ~(uint)(uVar33 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_
  ;
  uVar28 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
  uVar23 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
  uVar4 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
  uVar5 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
  *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64 = auVar37 | auVar44;
  auVar36._4_4_ = ~(uint)(uVar30 >> 0x20) & uVar23;
  auVar36._0_4_ = ~(uint)uVar30 & uVar28;
  auVar36._8_4_ = ~(uint)uVar32 & uVar4;
  auVar36._12_4_ = ~(uint)(uVar32 >> 0x20) & uVar5;
  *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64 = auVar52 | auVar36;
  uVar56 = SUB84(dVar14,0);
  uVar57 = (undefined4)((ulonglong)dVar14 >> 0x20);
  local_598 = dVar14;
  dStack_590 = dVar64;
  local_568 = this;
  if (0 < (param_2->AggGeom).SphereElems.ArrayNum) {
    lVar29 = 0;
    local_578 = auVar41;
    do {
      iVar22 = (param_2->AggGeom).SphereElems.ArrayNum;
      uVar28 = 0;
      if ((int)uVar27 < iVar22) {
        uVar28 = ~uVar27 >> 0x1f;
      }
      if (uVar28 == 0) {
        local_5c8 = (double *)(longlong)(int)uVar27;
        local_5c0 = (FScriptContainerElement *)(longlong)iVar22;
        bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar21) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar1 = (param_2->AggGeom).SphereElems.AllocatorInstance.Data;
      local_208.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_208.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_208.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_208.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_208.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_208.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_208.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_208.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      local_208.Translation.XY.m128d_f64[0] = *(double *)(pFVar1 + lVar29 + 0x30) * dVar14;
      local_208.Translation.XY.m128d_f64[1] = *(double *)(pFVar1 + lVar29 + 0x30 + 8) * dVar64;
      local_208.Translation.ZW.m128d_f64[0] = local_588 * *(double *)(pFVar1 + lVar29 + 0x40);
      local_208.Translation.ZW.m128d_f64[1] = 0.0;
      UE::Math::TTransform<double>::Multiply(&local_208,&local_208,param_1);
      pFVar2 = (pTVar26->AllocatorInstance).Data;
      local_528 = 1;
      local_4d8 = local_208.Translation.ZW.m128d_f64[0];
      dVar34 = (double)*(float *)(pFVar1 + lVar29 + 0x48);
      local_4e8 = local_208.Translation.XY.m128d_f64[0];
      dStack_4e0 = local_208.Translation.XY.m128d_f64[1];
      dVar49 = local_208.Translation.XY.m128d_f64[1] - dStack_590 * dVar34;
      local_358 = CONCAT71(uStack_527,1);
      dVar8 = dVar14 * dVar34 + local_208.Translation.XY.m128d_f64[0];
      dVar7 = local_588 * dVar34 + local_208.Translation.ZW.m128d_f64[0];
      local_388._8_4_ = SUB84(dVar49,0);
      local_388._0_8_ = local_208.Translation.XY.m128d_f64[0] - dVar14 * dVar34;
      local_388._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
      local_338 = local_208.Rotation.ZW.m128d_f64[0];
      dStack_330 = local_208.Rotation.ZW.m128d_f64[1];
      local_378._8_4_ = SUB84(dVar8,0);
      local_378._0_8_ = local_208.Translation.ZW.m128d_f64[0] - local_588 * dVar34;
      local_378._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      local_348 = local_208.Rotation.XY.m128d_f64[0];
      dStack_340 = local_208.Rotation.XY.m128d_f64[1];
      local_368._8_4_ = SUB84(dVar7,0);
      local_368._0_8_ = dStack_590 * dVar34 + local_208.Translation.XY.m128d_f64[1];
      local_368._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      if ((pFVar2 <= (FScriptContainerElement *)local_388) &&
         (lVar25 = (longlong)(this->ComponentBounds).ArrayMax,
         (FScriptContainerElement *)local_388 < pFVar2 + lVar25 * 0x60)) {
        local_5b0 = (longlong)(this->ComponentBounds).ArrayNum;
        local_5a8 = 0x60;
        local_5c8 = (double *)local_388;
        local_5c0 = pFVar2;
        local_5b8 = lVar25;
        bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar21) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar22 = (this->ComponentBounds).ArrayNum;
      if (iVar22 == (this->ComponentBounds).ArrayMax) {
        iVar22 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1060,&pTVar26->AllocatorInstance,&(this->ComponentBounds).ArrayMax);
      }
      (this->ComponentBounds).ArrayNum = iVar22 + 1;
      uVar27 = uVar27 + 1;
      lVar29 = lVar29 + 0x50;
      pFVar1 = (pTVar26->AllocatorInstance).Data;
      lVar25 = (longlong)iVar22 * 0x60;
      *(undefined8 *)(pFVar1 + lVar25) = local_388._0_8_;
      *(undefined8 *)(pFVar1 + lVar25 + 8) = local_388._8_8_;
      *(undefined8 *)(pFVar1 + lVar25 + 0x10) = local_378._0_8_;
      *(undefined8 *)(pFVar1 + lVar25 + 0x10 + 8) = local_378._8_8_;
      *(undefined8 *)(pFVar1 + lVar25 + 0x20) = local_368._0_8_;
      *(undefined8 *)(pFVar1 + lVar25 + 0x20 + 8) = local_368._8_8_;
      *(undefined8 *)(pFVar1 + lVar25 + 0x30) = local_358;
      *(undefined8 *)(pFVar1 + lVar25 + 0x30 + 8) = uStack_350;
      *(double *)(pFVar1 + lVar25 + 0x40) = local_348;
      *(double *)(pFVar1 + lVar25 + 0x40 + 8) = dStack_340;
      *(double *)(pFVar1 + lVar25 + 0x50) = local_338;
      *(double *)(pFVar1 + lVar25 + 0x50 + 8) = dStack_330;
    } while ((int)uVar27 < (param_2->AggGeom).SphereElems.ArrayNum);
  }
  dVar63 = _UNK_150689688;
  dVar49 = ___xmm_3ff00000000000003ff0000000000000;
  dVar34 = _UNK_150689518;
  dVar8 = ___xmm_00000000000000003ff0000000000000;
  dVar7 = __real_3fe0000000000000;
  iVar22 = (param_2->AggGeom).BoxElems.ArrayNum;
  uVar28 = 0;
  uVar61 = SUB84(__real_3fe0000000000000,0);
  uVar62 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
  if (0 < iVar22) {
    lVar29 = 0;
    local_578 = auVar41;
    do {
      uVar23 = 0;
      if ((int)uVar28 < iVar22) {
        uVar23 = ~uVar28 >> 0x1f;
      }
      if (uVar23 == 0) {
        local_5c0 = (FScriptContainerElement *)(longlong)iVar22;
        local_5c8 = (double *)(longlong)(int)uVar28;
        bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar21) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar1 = (param_2->AggGeom).BoxElems.AllocatorInstance.Data;
      pTVar24 = UE::Math::TRotator<double>::Quaternion
                          ((TRotator<double> *)(pFVar1 + lVar29 + 0x48),&local_3c8);
      local_468 = pTVar24->X;
      dStack_460 = pTVar24->Y;
      local_458 = pTVar24->Z;
      dStack_450 = pTVar24->W;
      local_1a8.Translation.ZW.m128d_f64[0] = local_588 * *(double *)(pFVar1 + lVar29 + 0x40);
      local_1a8.Translation.ZW.m128d_f64[1] = 0.0;
      local_1a8.Scale3D.XY.m128d_f64[0] = dVar49;
      local_1a8.Scale3D.XY.m128d_f64[1] = dVar63;
      local_1a8.Scale3D.ZW.m128d_f64[0] = dVar8;
      local_1a8.Scale3D.ZW.m128d_f64[1] = dVar34;
      local_1a8.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84(*(double *)(pFVar1 + lVar29 + 0x38) * dVar64,0);
      local_1a8.Translation.XY.m128d_f64[0] = *(double *)(pFVar1 + lVar29 + 0x30) * dVar14;
      local_1a8.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(*(double *)(pFVar1 + lVar29 + 0x38) * dVar64) >> 0x20);
      local_1a8.Rotation.XY.m128d_f64[0] = local_468;
      local_1a8.Rotation.XY.m128d_f64[1] = dStack_460;
      local_1a8.Rotation.ZW.m128d_f64[0] = local_458;
      local_1a8.Rotation.ZW.m128d_f64[1] = dStack_450;
      UE::Math::TTransform<double>::Multiply(&local_1a8,&local_1a8,param_1);
      auVar15._4_8_ = extraout_XMM0_Qb;
      auVar15._0_4_ = local_1a8.Translation.XY.m128d_f64[0]._4_4_;
      auVar38._0_8_ = auVar15._0_8_ << 0x20;
      auVar38._8_4_ = local_1a8.Translation.XY.m128d_f64[1]._0_4_;
      auVar38._12_4_ = local_1a8.Translation.XY.m128d_f64[1]._4_4_;
      pFVar2 = (pTVar26->AllocatorInstance).Data;
      local_528 = 1;
      local_4c0 = local_1a8.Translation.ZW.m128d_f64[0];
      dVar10 = (double)*(float *)(pFVar1 + lVar29 + 100) * dStack_590 * dVar7;
      dVar12 = (double)*(float *)(pFVar1 + lVar29 + 0x60) * dVar14 * dVar7;
      dVar50 = auVar38._8_8_ - dVar10;
      dVar9 = (double)*(float *)(pFVar1 + lVar29 + 0x68) * local_588 * dVar7;
      local_2f8 = CONCAT71(uStack_527,1);
      dVar13 = dVar12 + local_1a8.Translation.XY.m128d_f64[0];
      local_2d8 = local_1a8.Rotation.ZW.m128d_f64[0];
      dStack_2d0 = local_1a8.Rotation.ZW.m128d_f64[1];
      dVar51 = dVar9 + local_1a8.Translation.ZW.m128d_f64[0];
      local_328._8_4_ = SUB84(dVar50,0);
      local_328._0_8_ = local_1a8.Translation.XY.m128d_f64[0] - dVar12;
      local_328._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
      local_4d0[0] = local_1a8.Translation.XY.m128d_f64[0];
      local_4d0[1] = local_1a8.Translation.XY.m128d_f64[1];
      local_318._8_4_ = SUB84(dVar13,0);
      local_318._0_8_ = local_1a8.Translation.ZW.m128d_f64[0] - dVar9;
      local_318._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
      local_2e8 = local_1a8.Rotation.XY.m128d_f64[0];
      dStack_2e0 = local_1a8.Rotation.XY.m128d_f64[1];
      local_308._8_4_ = SUB84(dVar51,0);
      local_308._0_8_ = dVar10 + auVar38._8_8_;
      local_308._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
      if ((pFVar2 <= (FScriptContainerElement *)local_328) &&
         (lVar25 = (longlong)(this->ComponentBounds).ArrayMax,
         (FScriptContainerElement *)local_328 < pFVar2 + lVar25 * 0x60)) {
        local_5b0 = (longlong)(this->ComponentBounds).ArrayNum;
        local_5a8 = 0x60;
        local_5c8 = (double *)local_328;
        local_5c0 = pFVar2;
        local_5b8 = lVar25;
        bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar21) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar22 = (this->ComponentBounds).ArrayNum;
      if (iVar22 == (this->ComponentBounds).ArrayMax) {
        iVar22 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1060,&pTVar26->AllocatorInstance,&(this->ComponentBounds).ArrayMax);
        (this->ComponentBounds).ArrayNum = iVar22;
      }
      (this->ComponentBounds).ArrayNum = iVar22 + 1;
      uVar28 = uVar28 + 1;
      lVar29 = lVar29 + 0x70;
      pFVar1 = (pTVar26->AllocatorInstance).Data;
      lVar25 = (longlong)iVar22 * 0x60;
      *(undefined8 *)(pFVar1 + lVar25) = local_328._0_8_;
      *(undefined8 *)(pFVar1 + lVar25 + 8) = local_328._8_8_;
      *(undefined8 *)(pFVar1 + lVar25 + 0x10) = local_318._0_8_;
      *(undefined8 *)(pFVar1 + lVar25 + 0x10 + 8) = local_318._8_8_;
      *(undefined8 *)(pFVar1 + lVar25 + 0x20) = local_308._0_8_;
      *(undefined8 *)(pFVar1 + lVar25 + 0x20 + 8) = local_308._8_8_;
      *(undefined8 *)(pFVar1 + lVar25 + 0x30) = local_2f8;
      *(undefined8 *)(pFVar1 + lVar25 + 0x30 + 8) = uStack_2f0;
      *(double *)(pFVar1 + lVar25 + 0x40) = local_2e8;
      *(double *)(pFVar1 + lVar25 + 0x40 + 8) = dStack_2e0;
      *(double *)(pFVar1 + lVar25 + 0x50) = local_2d8;
      *(double *)(pFVar1 + lVar25 + 0x50 + 8) = dStack_2d0;
      iVar22 = (param_2->AggGeom).BoxElems.ArrayNum;
    } while ((int)uVar28 < iVar22);
  }
  pUVar20 = local_568;
  dVar49 = _UNK_150689688;
  dVar34 = ___xmm_3ff00000000000003ff0000000000000;
  dVar8 = _UNK_150689518;
  dVar7 = ___xmm_00000000000000003ff0000000000000;
  iVar22 = (param_2->AggGeom).SphylElems.ArrayNum;
  uVar28 = 0;
  if (0 < iVar22) {
    pTVar26 = &local_568->ComponentBounds;
    lVar29 = 0;
    local_578 = auVar41;
    do {
      uVar23 = 0;
      if ((int)uVar28 < iVar22) {
        uVar23 = ~uVar28 >> 0x1f;
      }
      if (uVar23 == 0) {
        local_5c0 = (FScriptContainerElement *)(longlong)iVar22;
        local_5c8 = (double *)(longlong)(int)uVar28;
        bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar21) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar1 = (param_2->AggGeom).SphylElems.AllocatorInstance.Data;
      pTVar24 = UE::Math::TRotator<double>::Quaternion
                          ((TRotator<double> *)(pFVar1 + lVar29 + 0x48),&local_3a8);
      local_448 = pTVar24->X;
      dStack_440 = pTVar24->Y;
      local_438 = pTVar24->Z;
      dStack_430 = pTVar24->W;
      local_148.Translation.ZW.m128d_f64[0] = local_588 * *(double *)(pFVar1 + lVar29 + 0x40);
      local_148.Translation.ZW.m128d_f64[1] = 0.0;
      local_148.Scale3D.XY.m128d_f64[0] = dVar34;
      local_148.Scale3D.XY.m128d_f64[1] = dVar49;
      local_148.Scale3D.ZW.m128d_f64[0] = dVar7;
      local_148.Scale3D.ZW.m128d_f64[1] = dVar8;
      local_148.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84(*(double *)(pFVar1 + lVar29 + 0x38) * dVar64,0);
      local_148.Translation.XY.m128d_f64[0] = *(double *)(pFVar1 + lVar29 + 0x30) * dVar14;
      local_148.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(*(double *)(pFVar1 + lVar29 + 0x38) * dVar64) >> 0x20);
      local_148.Rotation.XY.m128d_f64[0] = local_448;
      local_148.Rotation.XY.m128d_f64[1] = dStack_440;
      local_148.Rotation.ZW.m128d_f64[0] = local_438;
      local_148.Rotation.ZW.m128d_f64[1] = dStack_430;
      UE::Math::TTransform<double>::Multiply(&local_148,&local_148,param_1);
      pFVar2 = (pTVar26->AllocatorInstance).Data;
      local_4a8 = local_148.Translation.ZW.m128d_f64[0];
      local_528 = 1;
      dVar9 = dVar14 * (double)*(float *)(pFVar1 + lVar29 + 0x60);
      dVar51 = dStack_590 * (double)*(float *)(pFVar1 + lVar29 + 0x60);
      local_2c8 = local_148.Translation.XY.m128d_f64[0] - dVar9;
      dVar9 = dVar9 + local_148.Translation.XY.m128d_f64[0];
      dVar63 = local_148.Translation.ZW.m128d_f64[0] +
               (double)*(float *)(pFVar1 + lVar29 + 100) * local_588;
      dStack_2c0 = local_148.Translation.XY.m128d_f64[1] - dVar51;
      local_4b8 = local_148.Translation.XY.m128d_f64[0];
      dStack_4b0 = local_148.Translation.XY.m128d_f64[1];
      local_298 = CONCAT71(uStack_527,1);
      local_2b8._8_4_ = SUB84(dVar9,0);
      local_2b8._0_8_ =
           local_148.Translation.ZW.m128d_f64[0] -
           (double)*(float *)(pFVar1 + lVar29 + 100) * local_588;
      local_2b8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      local_288 = local_148.Rotation.XY.m128d_f64[0];
      dStack_280 = local_148.Rotation.XY.m128d_f64[1];
      local_2a8._8_4_ = SUB84(dVar63,0);
      local_2a8._0_8_ = local_148.Translation.XY.m128d_f64[1] + dVar51;
      local_2a8._12_4_ = (int)((ulonglong)dVar63 >> 0x20);
      local_278 = local_148.Rotation.ZW.m128d_f64[0];
      dStack_270 = local_148.Rotation.ZW.m128d_f64[1];
      if ((pFVar2 <= (FScriptContainerElement *)&local_2c8) &&
         (lVar25 = (longlong)(pUVar20->ComponentBounds).ArrayMax,
         (FScriptContainerElement *)&local_2c8 < pFVar2 + lVar25 * 0x60)) {
        local_5b0 = (longlong)(pUVar20->ComponentBounds).ArrayNum;
        local_5a8 = 0x60;
        local_5c8 = &local_2c8;
        local_5c0 = pFVar2;
        local_5b8 = lVar25;
        bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar21) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar22 = (pUVar20->ComponentBounds).ArrayNum;
      if (iVar22 == (pUVar20->ComponentBounds).ArrayMax) {
        iVar22 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1060,&pTVar26->AllocatorInstance,&(pUVar20->ComponentBounds).ArrayMax)
        ;
      }
      (pUVar20->ComponentBounds).ArrayNum = iVar22 + 1;
      uVar28 = uVar28 + 1;
      lVar29 = lVar29 + 0x68;
      pFVar1 = (pTVar26->AllocatorInstance).Data;
      lVar25 = (longlong)iVar22 * 0x60;
      *(double *)(pFVar1 + lVar25) = local_2c8;
      *(double *)(pFVar1 + lVar25 + 8) = dStack_2c0;
      *(undefined8 *)(pFVar1 + lVar25 + 0x10) = local_2b8._0_8_;
      *(undefined8 *)(pFVar1 + lVar25 + 0x10 + 8) = local_2b8._8_8_;
      *(undefined8 *)(pFVar1 + lVar25 + 0x20) = local_2a8._0_8_;
      *(undefined8 *)(pFVar1 + lVar25 + 0x20 + 8) = local_2a8._8_8_;
      *(undefined8 *)(pFVar1 + lVar25 + 0x30) = local_298;
      *(undefined8 *)(pFVar1 + lVar25 + 0x30 + 8) = uStack_290;
      *(double *)(pFVar1 + lVar25 + 0x40) = local_288;
      *(double *)(pFVar1 + lVar25 + 0x40 + 8) = dStack_280;
      *(double *)(pFVar1 + lVar25 + 0x50) = local_278;
      *(double *)(pFVar1 + lVar25 + 0x50 + 8) = dStack_270;
      iVar22 = (param_2->AggGeom).SphylElems.ArrayNum;
    } while ((int)uVar28 < iVar22);
  }
  pUVar20 = local_568;
  iVar22 = (param_2->AggGeom).ConvexElems.ArrayNum;
  uVar28 = 0;
  if (0 < iVar22) {
    pTVar26 = &local_568->ComponentBounds;
    lVar29 = 0;
    local_578 = auVar41;
    do {
      uVar23 = 0;
      if ((int)uVar28 < iVar22) {
        uVar23 = ~uVar28 >> 0x1f;
      }
      if (uVar23 == 0) {
        local_5c0 = (FScriptContainerElement *)(longlong)iVar22;
        local_5c8 = (double *)(longlong)(int)uVar28;
        bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar21) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar1 = (param_2->AggGeom).ConvexElems.AllocatorInstance.Data;
      auVar36 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
      local_408 = *(undefined8 *)(pFVar1 + lVar29 + 0xb0);
      uStack_400 = *(undefined8 *)(pFVar1 + lVar29 + 0xb0 + 8);
      local_3f8 = *(undefined8 *)(pFVar1 + lVar29 + 0xc0);
      uStack_3f0 = *(undefined8 *)(pFVar1 + lVar29 + 0xc0 + 8);
      local_3e8 = *(undefined8 *)(pFVar1 + lVar29 + 0xd0);
      uStack_3e0 = *(undefined8 *)(pFVar1 + lVar29 + 0xd0 + 8);
      auVar44 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
      local_490 = (*(double *)(pFVar1 + lVar29 + 0x78) + *(double *)(pFVar1 + lVar29 + 0x60)) *
                  (double)CONCAT44(uVar62,uVar61) * local_588;
      dVar49 = (*(double *)(pFVar1 + lVar29 + 0x68) + *(double *)(pFVar1 + lVar29 + 0x50)) *
               (double)CONCAT44(uVar62,uVar61) * (double)CONCAT44(uVar57,uVar56);
      dVar34 = (*(double *)(pFVar1 + lVar29 + 0x70) + *(double *)(pFVar1 + lVar29 + 0x58)) *
               (double)CONCAT44(uVar62,uVar61) * dStack_590;
      dVar14 = local_490 * (param_1->Scale3D).ZW.m128d_f64[0];
      dVar64 = (param_1->Scale3D).ZW.m128d_f64[1] * 0.0;
      dVar10 = (param_1->Rotation).ZW.m128d_f64[1];
      local_3d8 = *(undefined8 *)(pFVar1 + lVar29 + 0xe0);
      uStack_3d0 = *(undefined8 *)(pFVar1 + lVar29 + 0xe0 + 8);
      local_4a0._8_4_ = SUB84(dVar34,0);
      local_4a0._0_8_ = dVar49;
      local_4a0._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
      dVar49 = dVar49 * (param_1->Scale3D).XY.m128d_f64[0];
      dVar34 = dVar34 * (param_1->Scale3D).XY.m128d_f64[1];
      uVar55 = (undefined4)((ulonglong)dVar34 >> 0x20);
      auVar41 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
      auVar58._8_4_ = SUB84(dVar34,0);
      auVar58._0_8_ = dVar49;
      auVar58._12_4_ = uVar55;
      auVar45 = blendpd(auVar44,auVar41,2);
      dVar7 = auVar41._0_8_;
      auVar59._0_8_ = auVar58._8_8_ * auVar44._0_8_ - auVar44._8_8_ * dVar49;
      auVar59._8_8_ = dVar14 * auVar44._8_8_ - dVar7 * dVar34;
      auVar39._8_4_ = SUB84(dVar34,0);
      auVar39._0_8_ = dVar49;
      auVar39._12_4_ = uVar55;
      auVar11._8_4_ = SUB84(dVar64,0);
      auVar11._0_8_ = dVar14;
      auVar11._12_4_ = (int)((ulonglong)dVar64 >> 0x20);
      auVar44 = blendpd(auVar39,auVar11,2);
      dVar8 = auVar41._8_8_;
      auVar40._0_8_ = auVar44._0_8_ * dVar7 - auVar45._0_8_ * dVar14;
      auVar40._8_8_ = auVar44._8_8_ * dVar8 - auVar45._8_8_ * dVar64;
      dVar50 = (*(double *)(pFVar1 + lVar29 + 0x70) - *(double *)(pFVar1 + lVar29 + 0x58)) *
               (double)CONCAT44(uVar62,uVar61) * dStack_590;
      dVar63 = auVar59._8_8_ + auVar59._8_8_;
      dVar9 = auVar40._0_8_ + auVar40._0_8_;
      uVar55 = (undefined4)((ulonglong)dVar9 >> 0x20);
      auVar44 = blendpd(auVar59,auVar40,2);
      auVar53._8_4_ = SUB84(dVar9,0);
      auVar53._0_8_ = dVar63;
      auVar53._12_4_ = uVar55;
      auVar46._8_4_ = SUB84(dVar9,0);
      auVar46._0_8_ = dVar63;
      auVar46._12_4_ = uVar55;
      dVar51 = (*(double *)(pFVar1 + lVar29 + 0x68) - *(double *)(pFVar1 + lVar29 + 0x50)) *
               (double)CONCAT44(uVar62,uVar61) * (double)CONCAT44(uVar57,uVar56);
      auVar60._0_8_ = auVar44._0_8_ + auVar44._0_8_;
      auVar60._8_8_ = auVar44._8_8_ + auVar44._8_8_;
      local_258 = (*(double *)(pFVar1 + lVar29 + 0x78) - *(double *)(pFVar1 + lVar29 + 0x60)) *
                  (double)CONCAT44(uVar62,uVar61) * local_588;
      auVar44 = blendpd(auVar46,auVar60,2);
      auVar54._0_8_ = auVar53._8_8_ * auVar36._0_8_ - auVar36._8_8_ * dVar63;
      auVar54._8_8_ = auVar60._0_8_ * auVar36._8_8_ - dVar7 * dVar9;
      auVar36 = blendpd(auVar36,auVar41,2);
      auVar47._0_8_ = auVar44._0_8_ * dVar7 - auVar36._0_8_ * auVar60._0_8_;
      auVar47._8_8_ = auVar44._8_8_ * dVar8 - auVar36._8_8_ * auVar60._8_8_;
      auVar41._8_4_ = SUB84(auVar54._8_8_,0);
      auVar41._0_8_ = auVar54._0_8_;
      auVar41._12_4_ = (int)((ulonglong)auVar54._8_8_ >> 0x20);
      dVar49 = dVar63 * dVar10 + dVar49 + auVar41._8_8_ + (param_1->Translation).XY.m128d_f64[0];
      dVar34 = dVar9 * dVar10 + dVar34 + auVar47._0_8_ + (param_1->Translation).XY.m128d_f64[1];
      uVar56 = (undefined4)((ulonglong)dVar34 >> 0x20);
      pFVar2 = (pTVar26->AllocatorInstance).Data;
      local_528 = 1;
      auVar44 = blendpd(auVar54,auVar47,2);
      local_488._8_4_ = SUB84(dVar34,0);
      local_488._0_8_ = dVar49;
      local_488._12_4_ = uVar56;
      dStack_250 = dVar49 + dVar51;
      auVar36 = *(undefined1 (*) [16])(pFVar1 + lVar29 + 0xa0);
      dVar12 = (param_1->Rotation).XY.m128d_f64[0];
      dVar13 = (param_1->Rotation).XY.m128d_f64[1];
      dVar63 = dVar34 - dVar50;
      local_520._8_4_ = SUB84(dVar34,0);
      local_520._0_8_ = dStack_250;
      local_520._12_4_ = uVar56;
      local_568 = (UNavModifierComponent *)
                  (auVar60._0_8_ * dVar10 + dVar14 + auVar44._0_8_ +
                  (param_1->Translation).ZW.m128d_f64[0]);
      dStack_560 = auVar60._8_8_ * dVar10 + dVar64 + auVar44._8_8_ +
                   (param_1->Translation).ZW.m128d_f64[1];
      dVar14 = auVar36._8_8_;
      dVar64 = (double)local_568 + local_258;
      local_258 = (double)local_568 - local_258;
      dVar9 = auVar36._0_8_;
      auVar44 = *(undefined1 (*) [16])(pFVar1 + lVar29 + 0x90);
      local_268._8_4_ = SUB84(dVar63,0);
      local_268._0_8_ = dVar49 - dVar51;
      local_268._12_4_ = (int)((ulonglong)dVar63 >> 0x20);
      dVar49 = auVar44._0_8_;
      dVar63 = auVar44._8_8_;
      auVar48._8_4_ = auVar44._0_4_;
      auVar48._0_8_ = dVar49;
      auVar48._12_4_ = auVar44._4_4_;
      local_248._8_4_ = SUB84(dVar64,0);
      local_248._0_8_ = dVar34 + dVar50;
      local_248._12_4_ = (int)((ulonglong)dVar64 >> 0x20);
      auVar42._8_4_ = auVar36._0_4_;
      auVar42._0_8_ = dVar9;
      auVar42._12_4_ = auVar36._4_4_;
      local_228 = dVar49 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                  dVar12 * dVar14 +
                  dVar7 * dVar63 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                  dVar9 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      dStack_220 = auVar48._8_8_ * dVar7 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] + dVar13 * dVar14
                   + dVar8 * dVar63 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                   auVar42._8_8_ * dVar12 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      local_238 = CONCAT71(uStack_527,1);
      dStack_500 = dStack_220;
      local_508 = local_228;
      dVar34 = dVar49 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
               dVar7 * dVar14 +
               dVar12 * dVar63 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
               dVar9 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      dVar7 = dVar49 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
              dVar8 * dVar14 +
              dVar13 * dVar63 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
              dVar9 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      uVar56 = SUB84(dVar7,0);
      uVar57 = (undefined4)((ulonglong)dVar7 >> 0x20);
      local_4f8._8_4_ = uVar56;
      local_4f8._0_8_ = dVar34;
      local_4f8._12_4_ = uVar57;
      local_218._8_4_ = uVar56;
      local_218._0_8_ = dVar34;
      local_218._12_4_ = uVar57;
      local_478 = local_568;
      if ((pFVar2 <= (FScriptContainerElement *)local_268) &&
         (lVar25 = (longlong)(pUVar20->ComponentBounds).ArrayMax,
         (FScriptContainerElement *)local_268 < pFVar2 + lVar25 * 0x60)) {
        local_5b0 = (longlong)(pUVar20->ComponentBounds).ArrayNum;
        local_5a8 = 0x60;
        local_5c8 = (double *)local_268;
        local_5c0 = pFVar2;
        local_5b8 = lVar25;
        bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar21) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      uVar56 = local_578._0_4_;
      uVar57 = local_578._4_4_;
      iVar22 = (pUVar20->ComponentBounds).ArrayNum;
      if (iVar22 == (pUVar20->ComponentBounds).ArrayMax) {
        iVar22 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1060,&pTVar26->AllocatorInstance,&(pUVar20->ComponentBounds).ArrayMax)
        ;
      }
      uVar61 = SUB84(__real_3fe0000000000000,0);
      uVar62 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
      uVar28 = uVar28 + 1;
      (pUVar20->ComponentBounds).ArrayNum = iVar22 + 1;
      lVar29 = lVar29 + 0x100;
      pFVar1 = (pTVar26->AllocatorInstance).Data;
      lVar25 = (longlong)iVar22 * 0x60;
      *(undefined8 *)(pFVar1 + lVar25) = local_268._0_8_;
      *(undefined8 *)(pFVar1 + lVar25 + 8) = local_268._8_8_;
      *(double *)(pFVar1 + lVar25 + 0x10) = local_258;
      *(double *)(pFVar1 + lVar25 + 0x10 + 8) = dStack_250;
      *(undefined8 *)(pFVar1 + lVar25 + 0x20) = local_248._0_8_;
      *(undefined8 *)(pFVar1 + lVar25 + 0x20 + 8) = local_248._8_8_;
      *(undefined8 *)(pFVar1 + lVar25 + 0x30) = local_238;
      *(undefined8 *)(pFVar1 + lVar25 + 0x30 + 8) = uStack_230;
      *(double *)(pFVar1 + lVar25 + 0x40) = local_228;
      *(double *)(pFVar1 + lVar25 + 0x40 + 8) = dStack_220;
      *(undefined8 *)(pFVar1 + lVar25 + 0x50) = local_218._0_8_;
      *(undefined8 *)(pFVar1 + lVar25 + 0x50 + 8) = local_218._8_8_;
      iVar22 = (param_2->AggGeom).ConvexElems.ArrayNum;
    } while ((int)uVar28 < iVar22);
  }
  return;
}

// SetAreaClass @ 146e71d70

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNavModifierComponent::SetAreaClass(UNavModifierComponent *this,TSubclassOf<UNavArea> param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  
  pUVar5 = (this->AreaClass).Class.field0_0x0.DebugPtr;
  pUVar6 = (UClass *)0x0;
  pUVar7 = pUVar6;
  if ((pUVar5 != (UClass *)0x0) &&
     (pUVar4 = Z_Construct_UClass_UNavArea_NoRegister(), pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar5->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar7 = (this->AreaClass).Class.field0_0x0.DebugPtr;
    }
  }
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if ((lVar2 != 0) && (pUVar5 = Z_Construct_UClass_UNavArea_NoRegister(), pUVar5 != (UClass *)0x0))
  {
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar6 = *(UClass **)param_1.Class.field0_0x0;
    }
  }
  if (pUVar7 != pUVar6) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)param_1.Class.field0_0x0 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(*(UObject **)param_1.Class.field0_0x0);
    }
    (this->AreaClass).Class.field0_0x0 = *(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0;
    if ((this->_padding_ & 1) != 0) {
      FNavigationSystem::UpdateComponentData((UActorComponent *)this);
    }
  }
  return;
}

// SetAreaClassToReplace @ 146e71f60

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNavModifierComponent::SetAreaClassToReplace
          (UNavModifierComponent *this,TSubclassOf<UNavArea> param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  
  pUVar5 = (this->AreaClassToReplace).Class.field0_0x0.DebugPtr;
  pUVar6 = (UClass *)0x0;
  pUVar7 = pUVar6;
  if ((pUVar5 != (UClass *)0x0) &&
     (pUVar4 = Z_Construct_UClass_UNavArea_NoRegister(), pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar5->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar7 = (this->AreaClassToReplace).Class.field0_0x0.DebugPtr;
    }
  }
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if ((lVar2 != 0) && (pUVar5 = Z_Construct_UClass_UNavArea_NoRegister(), pUVar5 != (UClass *)0x0))
  {
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar6 = *(UClass **)param_1.Class.field0_0x0;
    }
  }
  if (pUVar7 != pUVar6) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)param_1.Class.field0_0x0 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(*(UObject **)param_1.Class.field0_0x0);
    }
    (this->AreaClassToReplace).Class.field0_0x0 =
         *(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0;
    if ((this->_padding_ & 1) != 0) {
      FNavigationSystem::UpdateComponentData((UActorComponent *)this);
    }
  }
  return;
}

// StaticRegisterNativesUNavModifierComponent @ 146e73be0

void __cdecl UNavModifierComponent::StaticRegisterNativesUNavModifierComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UNavModifierComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetAreaClass @ 146e76ba0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UNavModifierComponent::execSetAreaClass(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  bool bVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  UObject *pUVar8;
  UObject *local_res8;
  
  pUVar8 = (UObject *)0x0;
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar5 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  lVar3 = *(longlong *)&param_1[6].field_0x20;
  pUVar7 = pUVar8;
  if ((lVar3 != 0) && (pUVar6 = Z_Construct_UClass_UNavArea_NoRegister(), pUVar6 != (UClass *)0x0))
  {
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pUVar7 = *(UObject **)&param_1[6].field_0x20;
    }
  }
  if ((pUVar5 != (UObject *)0x0) &&
     (pUVar6 = Z_Construct_UClass_UNavArea_NoRegister(), pUVar6 != (UClass *)0x0)) {
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)&pUVar5[1].field_0x10 < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)&pUVar5[1].field_0x8 + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pUVar8 = pUVar5;
    }
  }
  if (pUVar7 != pUVar8) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    *(UObject **)&param_1[6].field_0x20 = pUVar5;
    if ((param_1[3].field_0x20 & 1) != 0) {
      FNavigationSystem::UpdateComponentData((UActorComponent *)param_1);
    }
  }
  return;
}

// execSetAreaClassToReplace @ 146e76e50

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
UNavModifierComponent::execSetAreaClassToReplace(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  bool bVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  UObject *pUVar8;
  UObject *local_res8;
  
  pUVar8 = (UObject *)0x0;
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar5 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  lVar3 = *(longlong *)(param_1 + 7);
  pUVar7 = pUVar8;
  if ((lVar3 != 0) && (pUVar6 = Z_Construct_UClass_UNavArea_NoRegister(), pUVar6 != (UClass *)0x0))
  {
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pUVar7 = *(UObject **)(param_1 + 7);
    }
  }
  if ((pUVar5 != (UObject *)0x0) &&
     (pUVar6 = Z_Construct_UClass_UNavArea_NoRegister(), pUVar6 != (UClass *)0x0)) {
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)&pUVar5[1].field_0x10 < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)&pUVar5[1].field_0x8 + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pUVar8 = pUVar5;
    }
  }
  if (pUVar7 != pUVar8) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    *(UObject **)(param_1 + 7) = pUVar5;
    if ((param_1[3].field_0x20 & 1) != 0) {
      FNavigationSystem::UpdateComponentData((UActorComponent *)param_1);
    }
  }
  return;
}

