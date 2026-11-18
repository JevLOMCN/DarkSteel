// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 20

// StaticClass @ 145ecf350

UClass * __cdecl UProceduralFoliageComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProceduralFoliageComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Foliage",L"ProceduralFoliageComponent",
               &Z_Registration_Info_UClass_UProceduralFoliageComponent.InnerSingleton,
               StaticRegisterNativesUProceduralFoliageComponent,0xe8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UProceduralFoliageComponent>,
               InternalVTableHelperCtorCaller<UProceduralFoliageComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProceduralFoliageComponent.InnerSingleton;
}

// UProceduralFoliageComponent @ 145ed9410

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UProceduralFoliageComponent * __thiscall
UProceduralFoliageComponent::UProceduralFoliageComponent
          (UProceduralFoliageComponent *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->FoliageSpawner).field0_0x0.DebugPtr = (UProceduralFoliageSpawner *)0x0;
  (this->SpawningVolume).field0_0x0.DebugPtr = (AVolume *)0x0;
  (this->ProceduralGuid).A = 0;
  (this->ProceduralGuid).B = 0;
  (this->ProceduralGuid).C = 0;
  (this->ProceduralGuid).D = 0;
  return this;
}

// UProceduralFoliageComponent @ 145ed9470

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UProceduralFoliageComponent * __thiscall
UProceduralFoliageComponent::UProceduralFoliageComponent
          (UProceduralFoliageComponent *this,FObjectInitializer *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  FGuid *pFVar5;
  FGuid local_18;
  
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->FoliageSpawner).field0_0x0.DebugPtr = (UProceduralFoliageSpawner *)0x0;
  (this->SpawningVolume).field0_0x0.DebugPtr = (AVolume *)0x0;
  (this->ProceduralGuid).A = 0;
  (this->ProceduralGuid).B = 0;
  (this->ProceduralGuid).C = 0;
  (this->ProceduralGuid).D = 0;
  this->TileOverlap = 0.0;
  bVar4 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar4) {
    pFVar5 = FGuid::NewGuid(&local_18);
    uVar1 = pFVar5->B;
    uVar2 = pFVar5->C;
    uVar3 = pFVar5->D;
    (this->ProceduralGuid).A = pFVar5->A;
    (this->ProceduralGuid).B = uVar1;
    (this->ProceduralGuid).C = uVar2;
    (this->ProceduralGuid).D = uVar3;
  }
  return this;
}

// ~UProceduralFoliageComponent @ 145eda5d0

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
UProceduralFoliageComponent::~UProceduralFoliageComponent(UProceduralFoliageComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// GenerateProceduralContent @ 145ee2bf0

bool __thiscall
UProceduralFoliageComponent::GenerateProceduralContent
          (UProceduralFoliageComponent *this,
          TArray<FDesiredFoliageInstance,TSizedDefaultAllocator<32>_> *param_1)

{
  return false;
}

// GenerateProceduralContent @ 145ee2c00

bool __cdecl
UProceduralFoliageComponent::GenerateProceduralContent
          (FGenerateProceduralContentParams *param_1,
          TArray<FDesiredFoliageInstance,TSizedDefaultAllocator<32>_> *param_2)

{
  return false;
}

// GetBounds @ 145ee3200

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TBox<double> * __thiscall
UProceduralFoliageComponent::GetBounds
          (UProceduralFoliageComponent *this,TBox<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  AVolume *pAVar7;
  longlong lVar8;
  ULevel *pUVar9;
  UObject *pUVar10;
  
  pAVar7 = (this->SpawningVolume).field0_0x0.DebugPtr;
  if ((pAVar7 != (AVolume *)0x0) && (lVar8 = *(longlong *)&pAVar7->field_0x2d8, lVar8 != 0)) {
    dVar1 = *(double *)(lVar8 + 0x110);
    dVar2 = *(double *)(lVar8 + 0x128);
    dVar3 = *(double *)(lVar8 + 0x118);
    dVar4 = *(double *)(lVar8 + 0x130);
    dVar5 = *(double *)(lVar8 + 0x138);
    dVar6 = *(double *)(lVar8 + 0x120);
    (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar1 - dVar2;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar3 - dVar4;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar6 - dVar5;
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar1 + dVar2;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar3 + dVar4;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar6 + dVar5;
    __return_storage_ptr__->IsValid = '\x01';
    return __return_storage_ptr__;
  }
  if ((AActor *)this->_padding_ != (AActor *)0x0) {
    pUVar9 = AActor::GetLevel((AActor *)this->_padding_);
    if (pUVar9 != (ULevel *)0x0) {
      pUVar10 = FWeakObjectPtr::Get(&(pUVar9->LevelBoundsActor).WeakPtr);
      if (pUVar10 != (UObject *)0x0) {
        (**(code **)(*(longlong *)pUVar10 + 0x670))(pUVar10,__return_storage_ptr__,0,0);
        return __return_storage_ptr__;
      }
    }
  }
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->IsValid = '\0';
  __return_storage_ptr__->Pad[0] = '\0';
  __return_storage_ptr__->Pad[1] = '\0';
  __return_storage_ptr__->Pad[2] = '\0';
  __return_storage_ptr__->Pad[3] = '\0';
  __return_storage_ptr__->Pad[4] = '\0';
  __return_storage_ptr__->Pad[5] = '\0';
  __return_storage_ptr__->Pad[6] = '\0';
  return __return_storage_ptr__;
}

// GetBoundsBodyInstance @ 145ee3340

FBodyInstance * __thiscall
UProceduralFoliageComponent::GetBoundsBodyInstance(UProceduralFoliageComponent *this)

{
  AVolume *pAVar1;
  longlong *plVar2;
  FBodyInstance *pFVar3;
  
  pAVar1 = (this->SpawningVolume).field0_0x0.DebugPtr;
  if ((pAVar1 != (AVolume *)0x0) &&
     (plVar2 = *(longlong **)&pAVar1->field_0x2d8, plVar2 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145ee3370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pFVar3 = (FBodyInstance *)(**(code **)(*plVar2 + 0x818))(plVar2,0,1,0xffffffff);
    return pFVar3;
  }
  return (FBodyInstance *)0x0;
}

// GetGenerateProceduralContentParams @ 145ee3520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FGenerateProceduralContentParams * __thiscall
UProceduralFoliageComponent::GetGenerateProceduralContentParams
          (UProceduralFoliageComponent *this,
          FGenerateProceduralContentParams *__return_storage_ptr__)

{
  UProceduralFoliageSpawner *pUVar1;
  AVolume *pAVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  double dVar7;
  double *pdVar8;
  FBodyInstance *pFVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_50 [56];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  (__return_storage_ptr__->Bounds).Min.field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Bounds).Min.field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Bounds).Min.field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Bounds).Max.field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Bounds).Max.field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Bounds).Max.field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->FoliageSpawner).field0_0x0.DebugPtr = (UProceduralFoliageSpawner *)0x0;
  (__return_storage_ptr__->Bounds).IsValid = '\0';
  (__return_storage_ptr__->Bounds).Pad[0] = '\0';
  (__return_storage_ptr__->Bounds).Pad[1] = '\0';
  (__return_storage_ptr__->Bounds).Pad[2] = '\0';
  (__return_storage_ptr__->Bounds).Pad[3] = '\0';
  (__return_storage_ptr__->Bounds).Pad[4] = '\0';
  (__return_storage_ptr__->Bounds).Pad[5] = '\0';
  (__return_storage_ptr__->Bounds).Pad[6] = '\0';
  __return_storage_ptr__->TileOverlap = 0.0;
  (__return_storage_ptr__->ProceduralGuid).A = 0;
  (__return_storage_ptr__->ProceduralGuid).B = 0;
  (__return_storage_ptr__->ProceduralGuid).C = 0;
  (__return_storage_ptr__->ProceduralGuid).D = 0;
  __return_storage_ptr__->ProceduralVolumeInstance = (FBodyInstance *)0x0;
  pdVar8 = (double *)(**(code **)(this->_padding_ + 0x4f8))(this,local_50);
  dVar7 = pdVar8[1];
  (__return_storage_ptr__->Bounds).Min.field0_0x0._s_0.X = *pdVar8;
  (__return_storage_ptr__->Bounds).Min.field0_0x0._s_0.Y = dVar7;
  dVar7 = pdVar8[3];
  (__return_storage_ptr__->Bounds).Min.field0_0x0._s_0.Z = pdVar8[2];
  (__return_storage_ptr__->Bounds).Max.field0_0x0._s_0.X = dVar7;
  dVar7 = pdVar8[5];
  (__return_storage_ptr__->Bounds).Max.field0_0x0._s_0.Y = pdVar8[4];
  (__return_storage_ptr__->Bounds).Max.field0_0x0._s_0.Z = dVar7;
  *(double *)&(__return_storage_ptr__->Bounds).IsValid = pdVar8[6];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (this->FoliageSpawner).field0_0x0.DebugPtr,
     pUVar1 != (UProceduralFoliageSpawner *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (__return_storage_ptr__->FoliageSpawner).field0_0x0 = (this->FoliageSpawner).field0_0x0;
  uVar4 = (this->ProceduralGuid).B;
  uVar5 = (this->ProceduralGuid).C;
  uVar6 = (this->ProceduralGuid).D;
  (__return_storage_ptr__->ProceduralGuid).A = (this->ProceduralGuid).A;
  (__return_storage_ptr__->ProceduralGuid).B = uVar4;
  (__return_storage_ptr__->ProceduralGuid).C = uVar5;
  (__return_storage_ptr__->ProceduralGuid).D = uVar6;
  __return_storage_ptr__->TileOverlap = this->TileOverlap;
  pAVar2 = (this->SpawningVolume).field0_0x0.DebugPtr;
  if ((pAVar2 == (AVolume *)0x0) ||
     (plVar3 = *(longlong **)&pAVar2->field_0x2d8, plVar3 == (longlong *)0x0)) {
    __return_storage_ptr__->ProceduralVolumeInstance = (FBodyInstance *)0x0;
  }
  else {
    local_58 = 0;
    pFVar9 = (FBodyInstance *)(**(code **)(*plVar3 + 0x818))(plVar3,0,1,0xffffffff);
    __return_storage_ptr__->ProceduralVolumeInstance = pFVar9;
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 145ee5380

UClass * __cdecl UProceduralFoliageComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProceduralFoliageComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Foliage",L"ProceduralFoliageComponent",
               &Z_Registration_Info_UClass_UProceduralFoliageComponent.InnerSingleton,
               StaticRegisterNativesUProceduralFoliageComponent,0xe8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UProceduralFoliageComponent>,
               InternalVTableHelperCtorCaller<UProceduralFoliageComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProceduralFoliageComponent.InnerSingleton;
}

// GetTileLayout @ 145ee62d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UProceduralFoliageComponent::GetTileLayout(UProceduralFoliageComponent *this,FTileLayout *param_1)

{
  FGenerateProceduralContentParams *pFVar1;
  undefined1 auStack_98 [32];
  FGenerateProceduralContentParams local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  pFVar1 = GetGenerateProceduralContentParams(this,&local_78);
  GetTileLayout(pFVar1,param_1);
  return;
}

// GetTileLayout @ 145ee6330

void __cdecl
UProceduralFoliageComponent::GetTileLayout
          (FGenerateProceduralContentParams *param_1,FTileLayout *param_2)

{
  code *pcVar1;
  float fVar2;
  double dVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  
  dVar3 = __real_3fb0000000000000;
  if ((param_1->Bounds).IsValid != '\0') {
    fVar10 = param_1->TileOverlap;
    dVar5 = (param_1->Bounds).Min.field0_0x0._s_0.Y;
    dVar6 = ((double)fVar10 + (param_1->Bounds).Min.field0_0x0._s_0.X) /
            (double)((param_1->FoliageSpawner).field0_0x0.DebugPtr)->TileSize;
    fVar9 = (float)dVar6;
    dVar6 = (double)fVar9 - dVar6;
    if ((__real_3fb0000000000000 <
         (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("FloatFitsIn<OutType>(In, Precision)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xc0,L"Loss of data caused by narrowing conversion"), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    fVar2 = __real_3f000000;
    uVar8 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar7 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    param_2->BottomLeftX = (int)ROUND((fVar9 + fVar9) - __real_3f000000) >> 1;
    dVar5 = ((double)fVar10 + dVar5) /
            (double)((param_1->FoliageSpawner).field0_0x0.DebugPtr)->TileSize;
    fVar10 = (float)dVar5;
    dVar5 = (double)fVar10 - dVar5;
    if ((dVar3 < (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) & uVar8,SUB84(dVar5,0) & uVar7))
       && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("FloatFitsIn<OutType>(In, Precision)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                              ,0xc0,L"Loss of data caused by narrowing conversion"),
          uVar7 = (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar8 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_, bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    param_2->BottomLeftY = (int)ROUND((fVar10 + fVar10) - fVar2) >> 1;
    fVar10 = param_1->TileOverlap;
    dVar5 = (param_1->Bounds).Max.field0_0x0._s_0.Y;
    dVar6 = ((param_1->Bounds).Max.field0_0x0._s_0.X - (double)fVar10) /
            (double)((param_1->FoliageSpawner).field0_0x0.DebugPtr)->TileSize;
    fVar9 = (float)dVar6;
    dVar6 = (double)fVar9 - dVar6;
    if ((dVar3 < (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) & uVar8,SUB84(dVar6,0) & uVar7))
       && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("FloatFitsIn<OutType>(In, Precision)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                              ,0xc0,L"Loss of data caused by narrowing conversion"),
          uVar7 = (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar8 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_, bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    dVar5 = (dVar5 - (double)fVar10) /
            (double)((param_1->FoliageSpawner).field0_0x0.DebugPtr)->TileSize;
    fVar10 = (float)dVar5;
    dVar5 = (double)fVar10 - dVar5;
    if ((dVar3 < (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) & uVar8,SUB84(dVar5,0) & uVar7))
       && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("FloatFitsIn<OutType>(In, Precision)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                              ,0xc0,L"Loss of data caused by narrowing conversion"), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    param_2->NumTilesX = (((int)ROUND((fVar9 + fVar9) - fVar2) >> 1) - param_2->BottomLeftX) + 1;
    param_2->NumTilesY = (((int)ROUND((fVar10 + fVar10) - fVar2) >> 1) - param_2->BottomLeftY) + 1;
    param_2->HalfHeight =
         ((param_1->Bounds).Max.field0_0x0._s_0.Z - (param_1->Bounds).Min.field0_0x0._s_0.Z) *
         __real_3fe0000000000000;
  }
  return;
}

// GetWorldPosition @ 145ee65e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector<double> * __thiscall
UProceduralFoliageComponent::GetWorldPosition
          (UProceduralFoliageComponent *this,TVector<double> *__return_storage_ptr__)

{
  float fVar1;
  undefined8 uVar2;
  FGenerateProceduralContentParams *pFVar3;
  double dVar4;
  undefined1 auStack_b8 [32];
  FTileLayout local_98;
  FGenerateProceduralContentParams local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pFVar3 = GetGenerateProceduralContentParams(this,&local_78);
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (((pFVar3->Bounds).IsValid == '\0') ||
     ((pFVar3->FoliageSpawner).field0_0x0.DebugPtr == (UProceduralFoliageSpawner *)0x0)) {
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    local_98.HalfHeight = 0.0;
    local_98.BottomLeftX = 0;
    local_98.BottomLeftY = 0;
    local_98.NumTilesX = 0;
    local_98.NumTilesY = 0;
    GetTileLayout(pFVar3,&local_98);
    fVar1 = ((pFVar3->FoliageSpawner).field0_0x0.DebugPtr)->TileSize;
    dVar4 = ((pFVar3->Bounds).Max.field0_0x0._s_0.Z + (pFVar3->Bounds).Min.field0_0x0._s_0.Z) *
            __real_3fe0000000000000;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)((float)local_98.BottomLeftX * fVar1);
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar4;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)((float)local_98.BottomLeftY * fVar1);
  }
  return __return_storage_ptr__;
}

// GetWorldPosition @ 145ee66d0

TVector<double> * __cdecl
UProceduralFoliageComponent::GetWorldPosition
          (TVector<double> *__return_storage_ptr__,FGenerateProceduralContentParams *param_1)

{
  float fVar1;
  UProceduralFoliageSpawner *pUVar2;
  undefined8 uVar3;
  double dVar4;
  FTileLayout local_28;
  
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (((param_1->Bounds).IsValid != '\0') &&
     ((param_1->FoliageSpawner).field0_0x0.DebugPtr != (UProceduralFoliageSpawner *)0x0)) {
    local_28.HalfHeight = 0.0;
    local_28.BottomLeftX = 0;
    local_28.BottomLeftY = 0;
    local_28.NumTilesX = 0;
    local_28.NumTilesY = 0;
    GetTileLayout(param_1,&local_28);
    pUVar2 = (param_1->FoliageSpawner).field0_0x0.DebugPtr;
    dVar4 = ((param_1->Bounds).Max.field0_0x0._s_0.Z + (param_1->Bounds).Min.field0_0x0._s_0.Z) *
            __real_3fe0000000000000;
    fVar1 = pUVar2->TileSize;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (double)((float)local_28.BottomLeftX * pUVar2->TileSize);
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar4;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)((float)local_28.BottomLeftY * fVar1);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// HasSpawnedAnyInstances @ 145ee6a20

bool __thiscall
UProceduralFoliageComponent::HasSpawnedAnyInstances(UProceduralFoliageComponent *this)

{
  return false;
}

// PostEditImport @ 145ee7e00

void __thiscall UProceduralFoliageComponent::PostEditImport(UProceduralFoliageComponent *this)

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
  (this->ProceduralGuid).A = pFVar4->A;
  (this->ProceduralGuid).B = uVar1;
  (this->ProceduralGuid).C = uVar2;
  (this->ProceduralGuid).D = uVar3;
  return;
}

// RemoveProceduralContent @ 145eea860

void __thiscall
UProceduralFoliageComponent::RemoveProceduralContent(UProceduralFoliageComponent *this,bool param_1)

{
  return;
}

// RemoveProceduralContent @ 145eea870

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
UProceduralFoliageComponent::RemoveProceduralContent
          (UWorld *param_1,FGuid *param_2,bool param_3,
          TSet<AInstancedFoliageActor_*,DefaultKeyFuncs<AInstancedFoliageActor_*,0>,FDefaultSetAllocator>
          *param_4)

{
  return;
}

// ResimulateProceduralFoliage @ 145eea8f0

bool __thiscall
UProceduralFoliageComponent::ResimulateProceduralFoliage
          (UProceduralFoliageComponent *this,
          TFunctionRef<void___cdecl(TArray<FDesiredFoliageInstance,TSizedDefaultAllocator<32>_>_const_&)>
          *param_1)

{
  return false;
}

// StaticRegisterNativesUProceduralFoliageComponent @ 145eed080

void __cdecl UProceduralFoliageComponent::StaticRegisterNativesUProceduralFoliageComponent(void)

{
  return;
}

