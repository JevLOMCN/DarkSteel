// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 12

// StaticClass @ 14639ae00

UClass * __cdecl AGeometryCollectionRenderLevelSetActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AGeometryCollectionRenderLevelSetActor.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCollectionEngine",L"GeometryCollectionRenderLevelSetActor",
               &Z_Registration_Info_UClass_AGeometryCollectionRenderLevelSetActor.InnerSingleton,
               StaticRegisterNativesAGeometryCollectionRenderLevelSetActor,0x3b0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AGeometryCollectionRenderLevelSetActor>,
               InternalVTableHelperCtorCaller<AGeometryCollectionRenderLevelSetActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGeometryCollectionRenderLevelSetActor.InnerSingleton;
}

// AGeometryCollectionRenderLevelSetActor @ 1463a0db0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AGeometryCollectionRenderLevelSetActor * __thiscall
AGeometryCollectionRenderLevelSetActor::AGeometryCollectionRenderLevelSetActor
          (AGeometryCollectionRenderLevelSetActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AGeometryCollectionRenderLevelSetActor__6B_;
  (this->TargetVolumeTexture).field0_0x0.DebugPtr = (UVolumeTexture *)0x0;
  (this->RayMarchMaterial).field0_0x0.DebugPtr = (UMaterial *)0x0;
  return this;
}

// AGeometryCollectionRenderLevelSetActor @ 1463a0df0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AGeometryCollectionRenderLevelSetActor * __thiscall
AGeometryCollectionRenderLevelSetActor::AGeometryCollectionRenderLevelSetActor
          (AGeometryCollectionRenderLevelSetActor *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UPostProcessComponent *pUVar4;
  UVolumeTexture *pUVar5;
  UMaterialInterface *this_00;
  UMaterial *pUVar6;
  FName local_res8;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  AActor::AActor((AActor *)this,param_1);
  pUVar6 = (UMaterial *)0x0;
  this->SurfaceTolerance = 0.01;
  this->Isovalue = 0.0;
  this->Enabled = true;
  this->RenderVolumeBoundingBox = false;
  this->_padding_ = (longlong)&___7AGeometryCollectionRenderLevelSetActor__6B_;
  (this->TargetVolumeTexture).field0_0x0.DebugPtr = (UVolumeTexture *)0x0;
  (this->RayMarchMaterial).field0_0x0.DebugPtr = (UMaterial *)0x0;
  this->DynRayMarchMaterial = (UMaterialInstanceDynamic *)0x0;
  this->StepSizeMult = 1.0;
  pFVar2 = ::FName::FName(&local_res8,L"PostProcessComponent0");
  FVar1 = *pFVar2;
  pUVar3 = Z_Construct_UClass_UPostProcessComponent_NoRegister();
  pUVar4 = (UPostProcessComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  this->PostProcessComponent = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UPostProcessComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  this->_padding_ = (longlong)pUVar4;
  local_18.DataPtr = L"/Engine/EngineDebugMaterials/VolumeToRender";
  local_28.DataPtr = (wchar_t *)0x0;
  local_28._8_8_ = (ulonglong)(uint)local_28._12_4_ << 0x20;
  local_18.Size = 0x2b;
  pUVar3 = Z_Construct_UClass_UVolumeTexture_NoRegister();
  pUVar5 = (UVolumeTexture *)
           StaticLoadObject(pUVar3,(UObject *)0x0,&local_18,&local_28,0,(UPackageMap *)0x0,true,
                            (FLinkerInstancingContext *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UVolumeTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->TargetVolumeTexture).field0_0x0.DebugPtr = pUVar5;
  local_28.DataPtr = L"/Engine/EngineDebugMaterials/M_VolumeRenderSphereTracePP";
  local_18.DataPtr = (wchar_t *)0x0;
  local_18._8_8_ = local_18._8_8_ & 0xffffffff00000000;
  local_28.Size = 0x38;
  pUVar3 = Z_Construct_UClass_UMaterialInterface_NoRegister();
  this_00 = (UMaterialInterface *)
            StaticLoadObject(pUVar3,(UObject *)0x0,&local_28,&local_18,0,(UPackageMap *)0x0,true,
                             (FLinkerInstancingContext *)0x0);
  if (this_00 != (UMaterialInterface *)0x0) {
    pUVar6 = UMaterialInterface::GetBaseMaterial(this_00);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UMaterial *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->RayMarchMaterial).field0_0x0.DebugPtr = pUVar6;
  return this;
}

// ~AGeometryCollectionRenderLevelSetActor @ 1463a4f00

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
AGeometryCollectionRenderLevelSetActor::~AGeometryCollectionRenderLevelSetActor
          (AGeometryCollectionRenderLevelSetActor *this)

{
  this->_padding_ = (longlong)&___7AGeometryCollectionRenderLevelSetActor__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// operator() @ 1463a7160

void __thiscall
`AGeometryCollectionRenderLevelSetActor::SetLevelSetToRender'::__l2::<lambda_1>::operator()
          (void *this,int param_1,int param_2,int param_3,void *param_4)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  double dVar14;
  
  lVar5 = *(longlong *)((longlong)this + 8);
  uVar13 = (param_1 * *(int *)(lVar5 + 4) + param_2) * *(int *)(lVar5 + 8) + param_3;
  uVar12 = 0;
  if ((int)uVar13 < *(int *)(lVar5 + 0x18)) {
    uVar12 = ~uVar13 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar11 = (longlong)(int)uVar13;
  lVar5 = *(longlong *)(lVar5 + 0x10);
  dVar2 = *(double *)(lVar5 + lVar11 * 0x18);
  dVar3 = *(double *)(lVar5 + 8 + lVar11 * 0x18);
  dVar4 = *(double *)(lVar5 + 0x10 + lVar11 * 0x18);
  dVar14 = dVar3 * dVar3 + dVar2 * dVar2 + dVar4 * dVar4;
  if (dVar14 == __real_3ff0000000000000) {
    pdVar1 = (double *)(lVar5 + lVar11 * 0x18);
    uVar7 = *pdVar1;
    uVar8 = pdVar1[1];
    uVar9 = *(double *)(lVar5 + 0x10 + lVar11 * 0x18);
  }
  else {
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (__real_3e45798ee0000000 <= dVar14) {
      dVar14 = __real_3ff0000000000000 / SQRT(dVar14);
      uVar7 = dVar2 * dVar14;
      uVar8 = dVar3 * dVar14;
      uVar9 = dVar4 * dVar14;
    }
  }
  lVar5 = *(longlong *)this;
  uVar13 = (param_1 * *(int *)(lVar5 + 4) + param_2) * *(int *)(lVar5 + 8) + param_3;
  uVar12 = 0;
  if ((int)uVar13 < *(int *)(lVar5 + 0x18)) {
    uVar12 = ~uVar13 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  dVar2 = *(double *)(*(longlong *)(lVar5 + 0x10) + (longlong)(int)uVar13 * 8);
  FGenericPlatformMath::StoreHalf(param_4,(float)(double)uVar7);
  FGenericPlatformMath::StoreHalf((ushort *)((longlong)param_4 + 2),(float)(double)uVar8);
  FGenericPlatformMath::StoreHalf((ushort *)((longlong)param_4 + 4),(float)(double)uVar9);
  FGenericPlatformMath::StoreHalf((ushort *)((longlong)param_4 + 6),(float)dVar2);
  return;
}

// BeginPlay @ 1463ab860

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
AGeometryCollectionRenderLevelSetActor::BeginPlay(AGeometryCollectionRenderLevelSetActor *this)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  
  AActor::BeginPlay((AActor *)this);
  uVar2 = *(undefined4 *)&this->PostProcessComponent->field_0x9dc;
  *(uint *)&this->PostProcessComponent->field_0x9dc =
       ((uint)this->Enabled ^ ZPULL(uVar2,0,1)) & 1 ^ uVar2;
  this->PostProcessComponent->bUnbound = 1;
  return;
}

// FindOrCreate @ 1463b2250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

AGeometryCollectionRenderLevelSetActor * __cdecl
AGeometryCollectionRenderLevelSetActor::FindOrCreate(UWorld *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  AGeometryCollectionRenderLevelSetActor *pAVar5;
  AActor *pAVar6;
  AGeometryCollectionRenderLevelSetActor *pAVar7;
  FString *pFVar8;
  longlong *plVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  undefined1 auStackY_148 [32];
  UClass *local_118 [2];
  TActorIteratorBase<TActorIterator<AGeometryCollectionRenderLevelSetActor>_> local_108;
  FString local_a8;
  FString local_98;
  undefined1 local_88 [112];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pAVar5 = (AGeometryCollectionRenderLevelSetActor *)0x0;
  if (param_1 == (UWorld *)0x0) {
    if (2 < (byte)LSR_LOG._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LSR_LOG);
    }
  }
  else {
    pUVar4 = StaticClass();
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar4 != (UClass *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
    }
    local_108.Flags = OnlyActiveLevels|SkipPendingKill;
    local_108.State.bIsSet = false;
    local_118[0] = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    FActorIteratorState::FActorIteratorState
              (&local_108.State.TypedValue,param_1,(TSubclassOf<AActor>)local_118);
    local_108.State.bIsSet = true;
    TActorIteratorBase<TActorIterator<AGeometryCollectionRenderLevelSetActor>_>::operator++
              (&local_108);
    if ((local_108.State.bIsSet == false) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pAVar5 = (AGeometryCollectionRenderLevelSetActor *)(*pcVar2)();
      return pAVar5;
    }
    if (local_108.State.TypedValue.ReachedEnd == false) {
      if ((local_108.State.bIsSet == false) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pAVar5 = (AGeometryCollectionRenderLevelSetActor *)(*pcVar2)();
        return pAVar5;
      }
      pAVar6 = FActorIteratorState::GetActorChecked(&local_108.State.TypedValue);
      pAVar5 = CastChecked<AGeometryCollectionRenderLevelSetActor,AActor>(pAVar6);
    }
    else {
      FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_88);
      local_88[0x30] = AlwaysSpawn;
      pUVar4 = StaticClass();
      pAVar7 = (AGeometryCollectionRenderLevelSetActor *)
               UWorld::SpawnActor(param_1,pUVar4,(TVector<double> *)0x0,(TRotator<double> *)0x0,
                                  (FActorSpawnParameters *)local_88);
      if (pAVar7 != (AGeometryCollectionRenderLevelSetActor *)0x0) {
        pUVar4 = StaticClass();
        iVar1 = (int)pUVar4->_padding_;
        if ((*(int *)(pAVar7->_padding_ + 0x38) < iVar1) ||
           (pAVar5 = pAVar7,
           (longlong *)
           *(undefined1 **)(*(longlong *)(pAVar7->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
           &pUVar4->_padding_)) {
          pFVar8 = GetTypeName<AGeometryCollectionRenderLevelSetActor>(&local_a8);
          pwVar10 = L"";
          if ((pFVar8->Data).ArrayNum == 0) {
            pwVar11 = L"";
          }
          else {
            pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
          }
          pFVar8 = GetFullNameForCastLogError<AActor>(&local_98,(AActor *)pAVar7);
          if ((pFVar8->Data).ArrayNum != 0) {
            pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(pwVar10,pwVar11);
        }
      }
      if (local_88._64_8_ != 0) {
        plVar9 = (longlong *)(local_88 + 0x50);
        if ((longlong *)local_88._104_8_ != (longlong *)0x0) {
          plVar9 = (longlong *)local_88._104_8_;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    if ((pAVar5 == (AGeometryCollectionRenderLevelSetActor *)0x0) && (2 < (byte)LSR_LOG._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LSR_LOG);
    }
    if (local_108.State.bIsSet != false) {
      UWorld::RemoveOnActorSpawnedHandler
                (local_108.State.TypedValue.CurrentWorld,
                 local_108.State.TypedValue.ActorSpawnedDelegateHandle);
      if (local_108.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
      }
      if (local_108.State.TypedValue.ActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.State.TypedValue.ActorArray.AllocatorInstance.Data);
      }
    }
  }
  return pAVar5;
}

// GetPrivateStaticClass @ 1463b7420

UClass * __cdecl AGeometryCollectionRenderLevelSetActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AGeometryCollectionRenderLevelSetActor.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCollectionEngine",L"GeometryCollectionRenderLevelSetActor",
               &Z_Registration_Info_UClass_AGeometryCollectionRenderLevelSetActor.InnerSingleton,
               StaticRegisterNativesAGeometryCollectionRenderLevelSetActor,0x3b0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AGeometryCollectionRenderLevelSetActor>,
               InternalVTableHelperCtorCaller<AGeometryCollectionRenderLevelSetActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGeometryCollectionRenderLevelSetActor.InnerSingleton;
}

// SetLevelSetToRender @ 1463c8ef0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
AGeometryCollectionRenderLevelSetActor::SetLevelSetToRender
          (AGeometryCollectionRenderLevelSetActor *this,FLevelSet *param_1,
          TTransform<double> *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined4 in_EAX;
  int iVar8;
  FString *pFVar9;
  TMatrix<double> *pTVar10;
  uint uVar11;
  FStaticBasicLogRecord *pFVar12;
  longlong lVar13;
  float fVar14;
  undefined1 auVar15 [16];
  FString local_158;
  FString local_148;
  TTransform<double> local_138;
  FString local_d8;
  TMatrix<double> local_c8;
  
  uVar6 = _UNK_15061cc8c;
  uVar5 = _UNK_15061cc88;
  uVar4 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar11 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  if ((this->TargetVolumeTexture).field0_0x0.DebugPtr == (UVolumeTexture *)0x0) {
    if ((byte)LSR_LOG._0_1_ < 3) {
      return false;
    }
    pFVar9 = UObjectBaseUtility::GetFullName
                       ((UObjectBaseUtility *)this,&local_158,(UObject *)0x0,None);
    if ((pFVar9->Data).ArrayNum == 0) {
      pFVar12 = &::LOG_Static;
    }
    else {
      pFVar12 = &::LOG_Static;
    }
  }
  else {
    dVar3 = *(double *)&(param_1->MGrid).field_0x8;
    (this->MinBBoxCorner).field0_0x0._s_0.X = *(double *)&param_1->MGrid;
    (this->MinBBoxCorner).field0_0x0._s_0.Y = dVar3;
    (this->MinBBoxCorner).field0_0x0._s_0.Z = *(double *)&(param_1->MGrid).field_0x10;
    dVar3 = *(double *)&(param_1->MGrid).field_0x20;
    (this->MaxBBoxCorner).field0_0x0._s_0.X = *(double *)&(param_1->MGrid).field_0x18;
    (this->MaxBBoxCorner).field0_0x0._s_0.Y = dVar3;
    (this->MaxBBoxCorner).field0_0x0._s_0.Z = *(double *)&(param_1->MGrid).field_0x28;
    auVar15._0_8_ =
         (double)CONCAT44(uVar4 & *(uint *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 4),
                          uVar11 & *(uint *)(param_2->Scale3D).XY.m128d_f64);
    auVar15._8_4_ = uVar5 & *(uint *)((param_2->Scale3D).XY.m128d_f64 + 1);
    auVar15._12_4_ = uVar6 & *(uint *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 0xc);
    lVar13 = -(ulonglong)
              ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
              (double)CONCAT44(uVar6 & *(uint *)((longlong)(param_2->Scale3D).ZW.m128d_f64 + 0xc),
                               uVar5 & *(uint *)((param_2->Scale3D).ZW.m128d_f64 + 1)));
    auVar2._8_4_ = (int)lVar13;
    auVar2._0_8_ = -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                    (double)CONCAT44(uVar4 & *(uint *)((longlong)(param_2->Scale3D).ZW.m128d_f64 + 4
                                                      ),
                                     uVar11 & *(uint *)(param_2->Scale3D).ZW.m128d_f64));
    auVar2._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
    uVar11 = movmskpd((int)this,auVar2);
    lVar13 = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar15._8_8_);
    auVar1._8_4_ = (int)lVar13;
    auVar1._0_8_ = -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar15._0_8_);
    auVar1._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
    iVar8 = movmskpd(in_EAX,auVar1);
    if ((uVar11 & 0x3fffffff) == 0 && iVar8 == 0) {
      local_138.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
      ;
      local_138.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
      ;
      local_138.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_138.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_138.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_138.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    }
    else {
      UE::Math::TTransform<double>::InverseFast(param_2,&local_138);
    }
    pTVar10 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_138,&local_c8);
    dVar3 = pTVar10->M[0][1];
    (this->WorldToLocal).M[0][0] = pTVar10->M[0][0];
    (this->WorldToLocal).M[0][1] = dVar3;
    dVar3 = pTVar10->M[0][3];
    (this->WorldToLocal).M[0][2] = pTVar10->M[0][2];
    (this->WorldToLocal).M[0][3] = dVar3;
    dVar3 = pTVar10->M[1][1];
    (this->WorldToLocal).M[1][0] = pTVar10->M[1][0];
    (this->WorldToLocal).M[1][1] = dVar3;
    dVar3 = pTVar10->M[1][3];
    (this->WorldToLocal).M[1][2] = pTVar10->M[1][2];
    (this->WorldToLocal).M[1][3] = dVar3;
    dVar3 = pTVar10->M[2][1];
    (this->WorldToLocal).M[2][0] = pTVar10->M[2][0];
    (this->WorldToLocal).M[2][1] = dVar3;
    dVar3 = pTVar10->M[2][3];
    (this->WorldToLocal).M[2][2] = pTVar10->M[2][2];
    (this->WorldToLocal).M[2][3] = dVar3;
    dVar3 = pTVar10->M[3][1];
    (this->WorldToLocal).M[3][0] = pTVar10->M[3][0];
    (this->WorldToLocal).M[3][1] = dVar3;
    dVar3 = pTVar10->M[3][3];
    (this->WorldToLocal).M[3][2] = pTVar10->M[3][2];
    (this->WorldToLocal).M[3][3] = dVar3;
    fVar14 = (float)*(double *)&(param_1->MGrid).field_0x40;
    bVar7 = __real_38d1b717 <= fVar14;
    this->VoxelSize = fVar14;
    if (bVar7) {
      local_138.Rotation.XY.m128d_f64[0] =
           (double)UE::Core::Private::Function::
                   TFunctionRefCaller<`AGeometryCollectionRenderLevelSetActor::SetLevelSetToRender'::__l2::<lambda_1>,void,int,int,int,void_*>
                   ::Call;
      local_138.Rotation.ZW.m128d_f64[1] = (double)&param_1->MPhi;
      local_138.Rotation.ZW.m128d_f64[0] =
           (double)&UE::Core::Private::Function::
                    TFunction_OwnedObject<`AGeometryCollectionRenderLevelSetActor::SetLevelSetToRender'::`2'::<lambda_1>,0,0>
                    ::_vftable_;
      local_138.Translation.XY.m128d_f64[1] = 0.0;
      local_138.Translation.XY.m128d_f64[0] = (double)&param_1->MNormals;
      bVar7 = UVolumeTexture::UpdateSourceFromFunction
                        ((this->TargetVolumeTexture).field0_0x0.DebugPtr,
                         (TFunction<void___cdecl(int,int,int,void_*)> *)&local_138,
                         *(int *)&(param_1->MGrid).field_0x30,*(int *)&(param_1->MGrid).field_0x34,
                         *(int *)&(param_1->MGrid).field_0x38,TSF_RGBA16F);
      if (bVar7) {
        SyncMaterialParameters(this);
        if (4 < (byte)LSR_LOG._0_1_) {
          UE::Math::TMatrix<double>::ToString(&this->WorldToLocal,&local_d8);
          ::FString::PrintfImpl(&local_158,L"X=%3.3f Y=%3.3f Z=%3.3f");
          ::FString::PrintfImpl(&local_148,L"X=%3.3f Y=%3.3f Z=%3.3f");
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LSR_LOG);
          if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_148.Data.AllocatorInstance.Data);
          }
          if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_158.Data.AllocatorInstance.Data);
          }
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          }
        }
        return true;
      }
      if ((byte)LSR_LOG._0_1_ < 3) {
        return false;
      }
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_158,(UObject *)0x0,None);
      pFVar12 = &::LOG_Static;
    }
    else {
      if ((byte)LSR_LOG._0_1_ < 3) {
        return false;
      }
      pFVar9 = UObjectBaseUtility::GetFullName
                         ((UObjectBaseUtility *)this,&local_158,(UObject *)0x0,None);
      if ((pFVar9->Data).ArrayNum == 0) {
        pFVar12 = &::LOG_Static;
      }
      else {
        pFVar12 = &::LOG_Static;
      }
    }
  }
  UE::Logging::Private::BasicLog<3>(pFVar12,(FLogCategoryBase *)&LSR_LOG);
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  return false;
}

// StaticRegisterNativesAGeometryCollectionRenderLevelSetActor @ 1463c9bc0

void __cdecl
AGeometryCollectionRenderLevelSetActor::StaticRegisterNativesAGeometryCollectionRenderLevelSetActor
          (void)

{
  return;
}

// SyncLevelSetTransform @ 1463c9fe0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
AGeometryCollectionRenderLevelSetActor::SyncLevelSetTransform
          (AGeometryCollectionRenderLevelSetActor *this,TTransform<double> *param_1)

{
  UMaterialInstanceDynamic *pUVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  TMatrix<double> *pTVar8;
  FLinearColor *pFVar9;
  FName *pFVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auVar13 [16];
  TVector<double>_u_0 local_138;
  FName local_120;
  FLinearColor_u_0 local_118;
  FLinearColor local_108;
  TTransform<double> local_f8;
  TMatrix<double> local_98;
  
  if ((this->RayMarchMaterial).field0_0x0.DebugPtr != (UMaterial *)0x0) {
    auVar13._0_8_ =
         (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                          *(uint *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 4),
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                          *(uint *)(param_1->Scale3D).XY.m128d_f64);
    auVar13._8_4_ = _UNK_15061cc88 & *(uint *)((param_1->Scale3D).XY.m128d_f64 + 1);
    auVar13._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 0xc);
    lVar12 = -(ulonglong)
              ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
              (double)CONCAT44(_UNK_15061cc8c &
                               *(uint *)((longlong)(param_1->Scale3D).ZW.m128d_f64 + 0xc),
                               _UNK_15061cc88 & *(uint *)((param_1->Scale3D).ZW.m128d_f64 + 1)));
    auVar3._8_4_ = (int)lVar12;
    auVar3._0_8_ = -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                    (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                     *(uint *)((longlong)(param_1->Scale3D).ZW.m128d_f64 + 4),
                                     (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                     *(uint *)(param_1->Scale3D).ZW.m128d_f64));
    auVar3._12_4_ = (int)((ulonglong)lVar12 >> 0x20);
    uVar11 = movmskpd((int)this,auVar3);
    lVar12 = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar13._8_8_);
    auVar2._8_4_ = (int)lVar12;
    auVar2._0_8_ = -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar13._0_8_);
    auVar2._12_4_ = (int)((ulonglong)lVar12 >> 0x20);
    iVar7 = movmskpd((int)&stack0x00000000,auVar2);
    if ((uVar11 & 0x3fffffff) == 0 && iVar7 == 0) {
      local_f8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
      local_f8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
      local_f8.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_f8.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_f8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_f8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    }
    else {
      UE::Math::TTransform<double>::InverseFast(param_1,&local_f8);
    }
    pTVar8 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_f8,&local_98);
    pUVar1 = this->DynRayMarchMaterial;
    dVar4 = pTVar8->M[0][1];
    (this->WorldToLocal).M[0][0] = pTVar8->M[0][0];
    (this->WorldToLocal).M[0][1] = dVar4;
    dVar4 = pTVar8->M[0][3];
    (this->WorldToLocal).M[0][2] = pTVar8->M[0][2];
    (this->WorldToLocal).M[0][3] = dVar4;
    dVar4 = pTVar8->M[1][1];
    (this->WorldToLocal).M[1][0] = pTVar8->M[1][0];
    (this->WorldToLocal).M[1][1] = dVar4;
    dVar4 = pTVar8->M[1][3];
    (this->WorldToLocal).M[1][2] = pTVar8->M[1][2];
    (this->WorldToLocal).M[1][3] = dVar4;
    dVar4 = pTVar8->M[2][1];
    (this->WorldToLocal).M[2][0] = pTVar8->M[2][0];
    (this->WorldToLocal).M[2][1] = dVar4;
    dVar4 = pTVar8->M[2][3];
    (this->WorldToLocal).M[2][2] = pTVar8->M[2][2];
    (this->WorldToLocal).M[2][3] = dVar4;
    dVar4 = pTVar8->M[3][1];
    (this->WorldToLocal).M[3][0] = pTVar8->M[3][0];
    (this->WorldToLocal).M[3][1] = dVar4;
    dVar4 = pTVar8->M[3][3];
    (this->WorldToLocal).M[3][2] = pTVar8->M[3][2];
    (this->WorldToLocal).M[3][3] = dVar4;
    local_138._s_0.X = (this->WorldToLocal).M[0][0];
    local_138._s_0.Y = (this->WorldToLocal).M[1][0];
    local_138._s_0.Z = (this->WorldToLocal).M[2][0];
    pFVar9 = FLinearColor::FLinearColor(&local_108,(TVector<double> *)&local_138._s_0);
    uVar5 = *(undefined8 *)&pFVar9->field0_0x0;
    uVar6 = *(undefined8 *)((longlong)&pFVar9->field0_0x0 + 8);
    pFVar10 = ::FName::FName(&local_120,"WorldToLocalc0");
    local_118._0_8_ = uVar5;
    local_118._8_8_ = uVar6;
    UMaterialInstanceDynamic::SetVectorParameterValue
              (pUVar1,*pFVar10,(FLinearColor *)&local_118._s_0);
    local_138._s_0.X = (this->WorldToLocal).M[0][1];
    local_138._s_0.Y = (this->WorldToLocal).M[1][1];
    pUVar1 = this->DynRayMarchMaterial;
    local_138._s_0.Z = (this->WorldToLocal).M[2][1];
    pFVar9 = FLinearColor::FLinearColor(&local_108,(TVector<double> *)&local_138._s_0);
    uVar5 = *(undefined8 *)&pFVar9->field0_0x0;
    uVar6 = *(undefined8 *)((longlong)&pFVar9->field0_0x0 + 8);
    pFVar10 = ::FName::FName(&local_120,"WorldToLocalc1");
    local_118._0_8_ = uVar5;
    local_118._8_8_ = uVar6;
    UMaterialInstanceDynamic::SetVectorParameterValue
              (pUVar1,*pFVar10,(FLinearColor *)&local_118._s_0);
    local_138._s_0.X = (this->WorldToLocal).M[0][2];
    local_138._s_0.Y = (this->WorldToLocal).M[1][2];
    pUVar1 = this->DynRayMarchMaterial;
    local_138._s_0.Z = (this->WorldToLocal).M[2][2];
    pFVar9 = FLinearColor::FLinearColor(&local_108,(TVector<double> *)&local_138._s_0);
    uVar5 = *(undefined8 *)&pFVar9->field0_0x0;
    uVar6 = *(undefined8 *)((longlong)&pFVar9->field0_0x0 + 8);
    pFVar10 = ::FName::FName(&local_120,"WorldToLocalc2");
    local_118._0_8_ = uVar5;
    local_118._8_8_ = uVar6;
    UMaterialInstanceDynamic::SetVectorParameterValue
              (pUVar1,*pFVar10,(FLinearColor *)&local_118._s_0);
    local_138._s_0.X = (this->WorldToLocal).M[3][0];
    local_138._s_0.Y = (this->WorldToLocal).M[3][1];
    pUVar1 = this->DynRayMarchMaterial;
    local_138._s_0.Z = (this->WorldToLocal).M[3][2];
    pFVar9 = FLinearColor::FLinearColor(&local_108,(TVector<double> *)&local_138._s_0);
    uVar5 = *(undefined8 *)&pFVar9->field0_0x0;
    uVar6 = *(undefined8 *)((longlong)&pFVar9->field0_0x0 + 8);
    pFVar10 = ::FName::FName(&local_120,"WorldToLocalTranslation");
    local_118._0_8_ = uVar5;
    local_118._8_8_ = uVar6;
    UMaterialInstanceDynamic::SetVectorParameterValue
              (pUVar1,*pFVar10,(FLinearColor *)&local_118._s_0);
  }
  return;
}

// SyncMaterialParameters @ 1463ca2d0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
AGeometryCollectionRenderLevelSetActor::SyncMaterialParameters
          (AGeometryCollectionRenderLevelSetActor *this)

{
  int *piVar1;
  float fVar2;
  undefined4 uVar3;
  UMaterial *pUVar4;
  UPostProcessComponent *pUVar5;
  UMaterialInstanceDynamic *pUVar6;
  FScriptContainerElement *pFVar7;
  FName FVar8;
  UVolumeTexture *pUVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  UMaterialInstanceDynamic *pUVar16;
  FName *pFVar17;
  FLinearColor *pFVar18;
  longlong lVar19;
  uint uVar20;
  ulonglong uVar21;
  FWeightedBlendables *pFVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  FName local_res20;
  undefined4 local_1e8 [2];
  UMaterialInstanceDynamic *local_1e0;
  TVector<double>_u_0 local_1d8;
  TVector<double>_u_0 local_1c0;
  TVector<double>_u_0 local_1a8;
  TVector<double>_u_0 local_190;
  FName local_178;
  FName local_170;
  FName local_168;
  FName local_160;
  FName local_158;
  FName local_150;
  FName local_148;
  FName local_140;
  FName local_138;
  FName local_130;
  FName local_128 [2];
  FLinearColor_u_0 local_118;
  FLinearColor_u_0 local_108;
  FLinearColor_u_0 local_f8;
  FLinearColor_u_0 local_e8;
  FLinearColor_u_0 local_d8;
  FLinearColor_u_0 local_c8;
  FLinearColor local_b8;
  FLinearColor local_a8;
  FLinearColor local_98;
  FLinearColor local_88;
  FLinearColor local_78;
  FLinearColor local_68 [2];
  
  pUVar4 = (this->RayMarchMaterial).field0_0x0.DebugPtr;
  if (pUVar4 == (UMaterial *)0x0) {
    return;
  }
  if (this->DynRayMarchMaterial != (UMaterialInstanceDynamic *)0x0) goto LAB_1463ca54e;
  uVar21 = 0;
  pUVar16 = UMaterialInstanceDynamic::Create
                      ((UMaterialInterface *)pUVar4,(UObject *)this,(FName)0x0);
  this->DynRayMarchMaterial = pUVar16;
  pUVar5 = this->PostProcessComponent;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_1463ca375:
    if (pUVar16 == (UMaterialInstanceDynamic *)0x0) goto LAB_1463ca54e;
  }
  else {
    if (pUVar16 != (UMaterialInstanceDynamic *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar16);
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_1463ca375;
    if (pUVar16 == (UMaterialInstanceDynamic *)0x0) goto LAB_1463ca54e;
    UE::GC::MarkAsReachable((UObject *)pUVar16);
  }
  lVar19 = (longlong)(pUVar5->Settings).WeightedBlendables.Array.ArrayNum;
  uVar23 = uVar21;
  uVar24 = uVar21;
  if (0 < lVar19) {
    do {
      uVar20 = (uint)uVar21;
      uVar14 = 0;
      if ((int)uVar20 < (pUVar5->Settings).WeightedBlendables.Array.ArrayNum) {
        uVar14 = ~uVar20 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pUVar6 = *(UMaterialInstanceDynamic **)
                ((pUVar5->Settings).WeightedBlendables.Array.AllocatorInstance.Data + uVar24 + 8);
      if (pUVar6 == (UMaterialInstanceDynamic *)0x0) {
        bVar13 = pUVar16 == (UMaterialInstanceDynamic *)0x0;
      }
      else {
        bVar13 = pUVar6 == pUVar16;
      }
      if (bVar13) {
        uVar14 = 0;
        if ((int)uVar20 < (pUVar5->Settings).WeightedBlendables.Array.ArrayNum) {
          uVar14 = ~uVar20 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        *(undefined4 *)
         ((pUVar5->Settings).WeightedBlendables.Array.AllocatorInstance.Data +
         (longlong)(int)uVar20 * 0x10) = 0x3f800000;
        goto LAB_1463ca54e;
      }
      uVar21 = (ulonglong)(uVar20 + 1);
      uVar23 = uVar23 + 1;
      uVar24 = uVar24 + 0x10;
    } while ((longlong)uVar23 < lVar19);
  }
  pFVar22 = &(pUVar5->Settings).WeightedBlendables;
  local_1e8[0] = 0x3f800000;
  local_1e0 = pUVar16;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar16);
  }
  pFVar7 = (pFVar22->Array).AllocatorInstance.Data;
  if (((pFVar7 <= (FScriptContainerElement *)local_1e8) &&
      ((FScriptContainerElement *)local_1e8 <
       pFVar7 + (longlong)(pUVar5->Settings).WeightedBlendables.Array.ArrayMax * 0x10)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar13)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar15 = (pUVar5->Settings).WeightedBlendables.Array.ArrayNum;
  piVar1 = &(pUVar5->Settings).WeightedBlendables.Array.ArrayMax;
  if (iVar15 == *piVar1) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,(ForAnyElementType *)pFVar22,piVar1);
  }
  (pUVar5->Settings).WeightedBlendables.Array.ArrayNum = iVar15 + 1;
  pFVar7 = (pFVar22->Array).AllocatorInstance.Data;
  *(undefined4 *)(pFVar7 + (longlong)iVar15 * 0x10) = local_1e8[0];
  *(UMaterialInstanceDynamic **)(pFVar7 + (longlong)iVar15 * 0x10 + 8) = local_1e0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_1e0 != (UMaterialInstanceDynamic *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_1e0);
  }
LAB_1463ca54e:
  pUVar16 = this->DynRayMarchMaterial;
  fVar2 = this->SurfaceTolerance;
  pFVar17 = ::FName::FName(&local_res20,"Surface Tolerance");
  UMaterialInstanceDynamic::SetScalarParameterValue(pUVar16,*pFVar17,fVar2);
  pUVar16 = this->DynRayMarchMaterial;
  fVar2 = this->Isovalue;
  pFVar17 = ::FName::FName(&local_178,"Isovalue");
  UMaterialInstanceDynamic::SetScalarParameterValue(pUVar16,*pFVar17,fVar2);
  pUVar16 = this->DynRayMarchMaterial;
  fVar2 = this->StepSizeMult;
  pFVar17 = ::FName::FName(&local_170,"Step Size Mult");
  UMaterialInstanceDynamic::SetScalarParameterValue(pUVar16,*pFVar17,fVar2);
  pUVar16 = this->DynRayMarchMaterial;
  fVar2 = this->VoxelSize;
  pFVar17 = ::FName::FName(&local_168,"Voxel Size");
  UMaterialInstanceDynamic::SetScalarParameterValue(pUVar16,*pFVar17,fVar2);
  pUVar16 = this->DynRayMarchMaterial;
  pFVar17 = ::FName::FName(&local_160,"Min Bounds");
  FVar8 = *pFVar17;
  pFVar18 = FLinearColor::FLinearColor(&local_b8,&this->MinBBoxCorner);
  local_118._0_8_ = *(undefined8 *)&pFVar18->field0_0x0;
  local_118._8_8_ = *(undefined8 *)((longlong)&pFVar18->field0_0x0 + 8);
  UMaterialInstanceDynamic::SetVectorParameterValue(pUVar16,FVar8,(FLinearColor *)&local_118._s_0);
  pUVar16 = this->DynRayMarchMaterial;
  pFVar17 = ::FName::FName(&local_158,"Max Bounds");
  FVar8 = *pFVar17;
  pFVar18 = FLinearColor::FLinearColor(&local_a8,&this->MaxBBoxCorner);
  local_108._0_8_ = *(undefined8 *)&pFVar18->field0_0x0;
  local_108._8_8_ = *(undefined8 *)((longlong)&pFVar18->field0_0x0 + 8);
  UMaterialInstanceDynamic::SetVectorParameterValue(pUVar16,FVar8,(FLinearColor *)&local_108._s_0);
  local_1d8._s_0.X = (this->WorldToLocal).M[0][0];
  local_1d8._s_0.Y = (this->WorldToLocal).M[1][0];
  pUVar16 = this->DynRayMarchMaterial;
  local_1d8._s_0.Z = (this->WorldToLocal).M[2][0];
  pFVar18 = FLinearColor::FLinearColor(&local_98,(TVector<double> *)&local_1d8._s_0);
  uVar11 = *(undefined8 *)&pFVar18->field0_0x0;
  uVar12 = *(undefined8 *)((longlong)&pFVar18->field0_0x0 + 8);
  pFVar17 = ::FName::FName(&local_150,"WorldToLocalc0");
  local_f8._0_8_ = uVar11;
  local_f8._8_8_ = uVar12;
  UMaterialInstanceDynamic::SetVectorParameterValue(pUVar16,*pFVar17,(FLinearColor *)&local_f8._s_0)
  ;
  local_1c0._s_0.X = (this->WorldToLocal).M[0][1];
  local_1c0._s_0.Y = (this->WorldToLocal).M[1][1];
  pUVar16 = this->DynRayMarchMaterial;
  local_1c0._s_0.Z = (this->WorldToLocal).M[2][1];
  pFVar18 = FLinearColor::FLinearColor(&local_88,(TVector<double> *)&local_1c0._s_0);
  uVar11 = *(undefined8 *)&pFVar18->field0_0x0;
  uVar12 = *(undefined8 *)((longlong)&pFVar18->field0_0x0 + 8);
  pFVar17 = ::FName::FName(&local_148,"WorldToLocalc1");
  local_e8._0_8_ = uVar11;
  local_e8._8_8_ = uVar12;
  UMaterialInstanceDynamic::SetVectorParameterValue(pUVar16,*pFVar17,(FLinearColor *)&local_e8._s_0)
  ;
  local_1a8._s_0.X = (this->WorldToLocal).M[0][2];
  local_1a8._s_0.Y = (this->WorldToLocal).M[1][2];
  pUVar16 = this->DynRayMarchMaterial;
  local_1a8._s_0.Z = (this->WorldToLocal).M[2][2];
  pFVar18 = FLinearColor::FLinearColor(&local_78,(TVector<double> *)&local_1a8._s_0);
  uVar11 = *(undefined8 *)&pFVar18->field0_0x0;
  uVar12 = *(undefined8 *)((longlong)&pFVar18->field0_0x0 + 8);
  pFVar17 = ::FName::FName(&local_140,"WorldToLocalc2");
  local_d8._0_8_ = uVar11;
  local_d8._8_8_ = uVar12;
  UMaterialInstanceDynamic::SetVectorParameterValue(pUVar16,*pFVar17,(FLinearColor *)&local_d8._s_0)
  ;
  local_190._s_0.X = (this->WorldToLocal).M[3][0];
  local_190._s_0.Y = (this->WorldToLocal).M[3][1];
  pUVar16 = this->DynRayMarchMaterial;
  local_190._s_0.Z = (this->WorldToLocal).M[3][2];
  pFVar18 = FLinearColor::FLinearColor(local_68,(TVector<double> *)&local_190._s_0);
  uVar11 = *(undefined8 *)&pFVar18->field0_0x0;
  uVar12 = *(undefined8 *)((longlong)&pFVar18->field0_0x0 + 8);
  pFVar17 = ::FName::FName(&local_138,"WorldToLocalTranslation");
  local_c8._0_8_ = uVar11;
  local_c8._8_8_ = uVar12;
  UMaterialInstanceDynamic::SetVectorParameterValue(pUVar16,*pFVar17,(FLinearColor *)&local_c8._s_0)
  ;
  pUVar16 = this->DynRayMarchMaterial;
  pUVar9 = (this->TargetVolumeTexture).field0_0x0.DebugPtr;
  pFVar17 = ::FName::FName(&local_130,"Volume To Render");
  UMaterialInstanceDynamic::SetTextureParameterValue(pUVar16,*pFVar17,(UTexture *)pUVar9);
  bVar13 = this->RenderVolumeBoundingBox;
  pUVar16 = this->DynRayMarchMaterial;
  pFVar17 = ::FName::FName(local_128,"Debug BBox");
  UMaterialInstanceDynamic::SetScalarParameterValue(pUVar16,*pFVar17,(float)bVar13);
  uVar3 = *(undefined4 *)&this->PostProcessComponent->field_0x9dc;
  *(uint *)&this->PostProcessComponent->field_0x9dc =
       ((uint)this->Enabled ^ ZPULL(uVar3,0,1)) & 1 ^ uVar3;
  return;
}

