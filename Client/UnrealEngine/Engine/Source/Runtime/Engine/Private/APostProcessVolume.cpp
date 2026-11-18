// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 17

// StaticClass @ 148333980

UClass * __cdecl APostProcessVolume::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_APostProcessVolume.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PostProcessVolume",
               &Z_Registration_Info_UClass_APostProcessVolume.InnerSingleton,
               StaticRegisterNativesAPostProcessVolume,0xa90,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<APostProcessVolume>,
               InternalVTableHelperCtorCaller<APostProcessVolume>,aFStackX_8,AVolume::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APostProcessVolume.InnerSingleton;
}

// APostProcessVolume @ 148349e20

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

APostProcessVolume * __thiscall
APostProcessVolume::APostProcessVolume(APostProcessVolume *this,FVTableHelper *param_1)

{
  AVolume::AVolume((AVolume *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AVolume__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PostProcessVolume__;
  FPostProcessSettings::FPostProcessSettings(&this->Settings);
  (this->VolumeGuid).A = 0;
  (this->VolumeGuid).B = 0;
  (this->VolumeGuid).C = 0;
  (this->VolumeGuid).D = 0;
  return this;
}

// APostProcessVolume @ 148349e80

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

APostProcessVolume * __thiscall
APostProcessVolume::APostProcessVolume(APostProcessVolume *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  AVolume::AVolume((AVolume *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AVolume__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PostProcessVolume__;
  FPostProcessSettings::FPostProcessSettings(&this->Settings);
  (this->VolumeGuid).A = 0;
  (this->VolumeGuid).B = 0;
  (this->VolumeGuid).C = 0;
  (this->VolumeGuid).D = 0;
  (**(code **)(*(longlong *)this->_padding_ + 0x788))
            ((longlong *)this->_padding_,UCollisionProfile::NoCollision_ProfileName,1);
  pbVar1 = (byte *)(this->_padding_ + 0x27b);
  *pbVar1 = *pbVar1 | 4;
  *(undefined1 *)(this->_padding_ + 0x1ab) = 2;
  this->bEnabled = 1;
  this->BlendRadius = 100.0;
  this->BlendWeight = 1.0;
  return this;
}

// ~APostProcessVolume @ 14834d350

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall APostProcessVolume::~APostProcessVolume(APostProcessVolume *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__AVolume__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PostProcessVolume__;
  pFVar1 = (this->Settings).WeightedBlendables.Array.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IInterface_PostProcessVolume__6B_;
  AVolume::~AVolume((AVolume *)this);
  return;
}

// EncompassesPoint @ 148378220

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
APostProcessVolume::EncompassesPoint
          (APostProcessVolume *this,TVector<double> *param_1,float param_2,float *param_3)

{
  bool bVar1;
  TVector<double>_u_0 local_28;
  
  local_28._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  bVar1 = AVolume::EncompassesPoint
                    ((AVolume *)&this[-1].Settings.AutoExposureBiasBackup,
                     (TVector<double> *)&local_28._s_0,param_2,param_3);
  return bVar1;
}

// GetDebugName @ 1483809e0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FString * __thiscall
APostProcessVolume::GetDebugName(APostProcessVolume *this,FString *__return_storage_ptr__)

{
  TObjectPtr<UTexture>_u_0 local_res8 [4];
  
  if (1 < (int)this[-1].Settings.DepthOfFieldBarrelRadius) {
    ::FString::FString(__return_storage_ptr__,
                       (FString *)&this[-1].Settings.DepthOfFieldPetzvalExclusionBoxRadius);
    return __return_storage_ptr__;
  }
  local_res8[0] = this[-1].Settings.AutoExposureMeterMask.field0_0x0;
  ::FName::ToString((FName *)&local_res8[0].ObjectPtr,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 148386f90

UClass * __cdecl APostProcessVolume::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APostProcessVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PostProcessVolume",
               &Z_Registration_Info_UClass_APostProcessVolume.InnerSingleton,
               StaticRegisterNativesAPostProcessVolume,0xa90,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<APostProcessVolume>,
               InternalVTableHelperCtorCaller<APostProcessVolume>,local_res8,AVolume::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APostProcessVolume.InnerSingleton;
}

// GetProperties @ 148387580

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FPostProcessVolumeProperties * __thiscall
APostProcessVolume::GetProperties
          (APostProcessVolume *this,FPostProcessVolumeProperties *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  TBoxSphereBounds<double,double> *pTVar7;
  TBoxSphereBounds<double,double> local_58;
  
  __return_storage_ptr__->Size = 1.7976931348623157e+308;
  (__return_storage_ptr__->VolumeGuid).A = 0;
  (__return_storage_ptr__->VolumeGuid).B = 0;
  (__return_storage_ptr__->VolumeGuid).C = 0;
  (__return_storage_ptr__->VolumeGuid).D = 0;
  __return_storage_ptr__->bIsEnabled = (bool)(*(byte *)&(this->Settings).CameraISO & 1);
  fVar4 = (this->Settings).CameraISO;
  __return_storage_ptr__->bIsUnbound = ((uint)fVar4 >> 1 & 1) != 0;
  __return_storage_ptr__->BlendRadius =
       *(float *)((longlong)&(this->Settings).AmbientCubemap.field0_0x0 + 4);
  __return_storage_ptr__->BlendWeight = (this->Settings).CameraShutterSpeed;
  __return_storage_ptr__->Priority = *(float *)&(this->Settings).AmbientCubemap.field0_0x0;
  __return_storage_ptr__->Settings = (FPostProcessSettings *)&this->_padding_;
  dVar1 = __real_7fefffffffffffff;
  if (((uint)fVar4 >> 1 & 1) == 0) {
    pTVar7 = AVolume::GetBounds((AVolume *)&this[-1].Settings.AutoExposureBiasBackup,&local_58);
    dVar1 = (pTVar7->Origin).field0_0x0._s_0.Y;
    dVar2 = (pTVar7->Origin).field0_0x0._s_0.X;
    dVar3 = (pTVar7->Origin).field0_0x0._s_0.Z;
    dVar1 = (((pTVar7->BoxExtent).field0_0x0._s_0.Y + dVar1) -
            (dVar1 - (pTVar7->BoxExtent).field0_0x0._s_0.Y)) *
            (((pTVar7->BoxExtent).field0_0x0._s_0.X + dVar2) -
            (dVar2 - (pTVar7->BoxExtent).field0_0x0._s_0.X)) *
            (((pTVar7->BoxExtent).field0_0x0._s_0.Z + dVar3) -
            (dVar3 - (pTVar7->BoxExtent).field0_0x0._s_0.Z));
  }
  __return_storage_ptr__->Size = dVar1;
  fVar4 = (this->Settings).DepthOfFieldMinFstop;
  iVar5 = (this->Settings).DepthOfFieldBladeCount;
  fVar6 = (this->Settings).AutoExposureBias;
  (__return_storage_ptr__->VolumeGuid).A = (uint)(this->Settings).DepthOfFieldFstop;
  (__return_storage_ptr__->VolumeGuid).B = (uint)fVar4;
  (__return_storage_ptr__->VolumeGuid).C = iVar5;
  (__return_storage_ptr__->VolumeGuid).D = (uint)fVar6;
  return __return_storage_ptr__;
}

// IsPPVEnabled @ 148392de0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall APostProcessVolume::IsPPVEnabled(APostProcessVolume *this)

{
  return this->bEnabled;
}

// PostInitProperties @ 14839a290

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall APostProcessVolume::PostInitProperties(APostProcessVolume *this)

{
  UObject::PostInitProperties((UObject *)this);
  *(byte *)&this->_padding_ = *(byte *)((longlong)&this->_padding_ + 3) >> 3 & 1;
  if ((this->_padding_ & 0x10) == 0) {
    AActor::ResetOwnedComponents((AActor *)this);
    return;
  }
  return;
}

// PostRegisterAllComponents @ 14839a880

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall APostProcessVolume::PostRegisterAllComponents(APostProcessVolume *this)

{
  UWorld *this_00;
  IInterface_PostProcessVolume *pIVar1;
  
  AActor::PostRegisterAllComponents((AActor *)this);
  this_00 = AActor::GetWorld((AActor *)this);
  pIVar1 = (IInterface_PostProcessVolume *)&this->_padding_;
  if (this == (APostProcessVolume *)0x0) {
    pIVar1 = (IInterface_PostProcessVolume *)0x0;
  }
  UWorld::InsertPostProcessVolume(this_00,pIVar1);
  return;
}

// PostUnregisterAllComponents @ 14839a910

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall APostProcessVolume::PostUnregisterAllComponents(APostProcessVolume *this)

{
  UWorld *pUVar1;
  IInterface_PostProcessVolume *pIVar2;
  
  AActor::PostUnregisterAllComponents((AActor *)this);
  pUVar1 = AActor::GetWorld((AActor *)this);
  if (pUVar1 != (UWorld *)0x0) {
    pUVar1 = AActor::GetWorld((AActor *)this);
    pIVar2 = (IInterface_PostProcessVolume *)&this->_padding_;
    if (this == (APostProcessVolume *)0x0) {
      pIVar2 = (IInterface_PostProcessVolume *)0x0;
    }
    UWorld::RemovePostProcessVolume(pUVar1,pIVar2);
    return;
  }
  return;
}

// Serialize @ 1483a39c0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall APostProcessVolume::Serialize(APostProcessVolume *this,FArchive *param_1)

{
  int iVar1;
  bool abStackX_10 [24];
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5SpecialProjectStreamObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  UObject::Serialize((UObject *)this,param_1);
  if ((param_1->field_0x29 & 1) != 0) {
    iVar1 = FArchiveState::CustomVer
                      ((FArchiveState *)param_1,&FUE5SpecialProjectStreamObjectVersion::GUID);
    if (3 < iVar1) {
      if ((*(longlong *)&param_1->field_0x68 == 0) ||
         (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) {
        abStackX_10[0] = false;
      }
      else {
        abStackX_10[0] = true;
      }
      ::operator<<(param_1,abStackX_10);
      if (abStackX_10[0] != false) {
        ::operator<<(param_1,(FString *)&this->_padding_);
      }
    }
  }
  if (((*(longlong *)&param_1->field_0x68 != 0) &&
      (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) != 0)) ||
     ((param_1->field_0x28 & 2) != 0)) {
    iVar1 = FArchiveState::CustomVer
                      ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID);
    if (0x95 < iVar1) {
      FActorInstanceGuid::Serialize(param_1,(AActor *)this);
    }
  }
  return;
}

// Serialize @ 1483a39d0

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
APostProcessVolume::Serialize(APostProcessVolume *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  AActor::Serialize((AActor *)this,pFVar1);
  return;
}

// StaticRegisterNativesAPostProcessVolume @ 1483af6d0

void __cdecl APostProcessVolume::StaticRegisterNativesAPostProcessVolume(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_APostProcessVolume_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// _getUObject @ 1483bb2b0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UObject * __thiscall APostProcessVolume::_getUObject(APostProcessVolume *this)

{
  return (UObject *)&this[-1].Settings.AutoExposureBiasBackup;
}

// execAddOrUpdateBlendable @ 1483bb4f0

void __cdecl
APostProcessVolume::execAddOrUpdateBlendable(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  UObject *pUVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  UObject *pUVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined4 local_res10 [2];
  undefined4 local_68 [2];
  UObject *local_60;
  UObject *local_58;
  undefined8 uStack_50;
  
  local_58 = (UObject *)0x0;
  uStack_50 = 0;
  FInterfaceProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar7 = local_58;
  uVar6 = local_res10[0];
  uVar12 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (local_58 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_58);
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar7 == (UObject *)0x0) {
        return;
      }
      UE::GC::MarkAsReachable(pUVar7);
      goto LAB_1483bb5fd;
    }
  }
  if (pUVar7 == (UObject *)0x0) {
    return;
  }
LAB_1483bb5fd:
  puVar1 = &param_1[0x42].field_0x8;
  iVar10 = *(int *)&param_1[0x42].field_0x10;
  uVar13 = uVar12;
  uVar14 = uVar12;
  if (0 < (longlong)iVar10) {
    do {
      uVar11 = (uint)uVar12;
      uVar9 = 0;
      if ((int)uVar11 < *(int *)&param_1[0x42].field_0x10) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pUVar3 = *(UObject **)(*(longlong *)puVar1 + uVar14 + 8);
      if (pUVar3 == (UObject *)0x0) {
        bVar8 = pUVar7 == (UObject *)0x0;
      }
      else {
        bVar8 = pUVar3 == pUVar7;
      }
      if (bVar8) {
        uVar9 = 0;
        if ((int)uVar11 < *(int *)&param_1[0x42].field_0x10) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(undefined4 *)(*(longlong *)puVar1 + (longlong)(int)uVar11 * 0x10) = uVar6;
        return;
      }
      uVar12 = (ulonglong)(uVar11 + 1);
      uVar13 = uVar13 + 1;
      uVar14 = uVar14 + 0x10;
    } while ((longlong)uVar13 < (longlong)iVar10);
  }
  local_68[0] = uVar6;
  local_60 = pUVar7;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  if (((*(undefined4 **)puVar1 <= local_68) &&
      (local_68 < *(undefined4 **)puVar1 + (longlong)*(int *)&param_1[0x42].field_0x14 * 4)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar10 = *(int *)&param_1[0x42].field_0x10;
  if (iVar10 == *(int *)&param_1[0x42].field_0x14) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,(ForAnyElementType *)puVar1,(int *)&param_1[0x42].field_0x14);
    *(int *)&param_1[0x42].field_0x10 = iVar10;
  }
  *(int *)&param_1[0x42].field_0x10 = iVar10 + 1;
  lVar4 = *(longlong *)puVar1;
  *(undefined4 *)(lVar4 + (longlong)iVar10 * 0x10) = local_68[0];
  *(UObject **)(lVar4 + (longlong)iVar10 * 0x10 + 8) = local_60;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_60 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_60);
  }
  return;
}

