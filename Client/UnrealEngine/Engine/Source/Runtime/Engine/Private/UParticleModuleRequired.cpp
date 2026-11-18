// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 22

// StaticClass @ 147304ee0

UClass * __cdecl UParticleModuleRequired::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleRequired.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleRequired",
               &Z_Registration_Info_UClass_UParticleModuleRequired.InnerSingleton,
               StaticRegisterNativesUParticleModuleRequired,0x170,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UParticleModuleRequired>,
               InternalVTableHelperCtorCaller<UParticleModuleRequired>,local_res8,
               UParticleModule::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleRequired.InnerSingleton;
}

// UParticleModuleRequired @ 14730b280

UParticleModuleRequired * __thiscall
UParticleModuleRequired::UParticleModuleRequired
          (UParticleModuleRequired *this,FVTableHelper *param_1)

{
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleRequired__6B_;
  (this->Material).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->SpawnRate)._padding_ = 0;
  (this->SpawnRate)._padding_ = 0;
  (this->SpawnRate)._padding_ = 0;
  *(undefined4 *)&(this->SpawnRate)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->SpawnRate)._padding_ + 4) = 0;
  (this->SpawnRate).MinValue = 0.0;
  (this->SpawnRate).MaxValue = 0.0;
  (this->SpawnRate).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->BurstList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BurstList).ArrayNum = 0;
  (this->BurstList).ArrayMax = 0;
  (this->CutoutTexture).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  (this->NamedMaterialOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NamedMaterialOverrides).ArrayNum = 0;
  (this->NamedMaterialOverrides).ArrayMax = 0;
  (this->DerivedData).BoundingGeometry.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DerivedData).BoundingGeometry.ArrayNum = 0;
  (this->DerivedData).BoundingGeometry.ArrayMax = 0;
  FRenderCommandFence::FRenderCommandFence(&this->ReleaseFence);
  return this;
}

// ~UParticleModuleRequired @ 14730bf30

void __thiscall UParticleModuleRequired::~UParticleModuleRequired(UParticleModuleRequired *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UParticleModuleRequired__6B_;
  FRenderCommandFence::~FRenderCommandFence(&this->ReleaseFence);
  pFVar1 = (this->DerivedData).BoundingGeometry.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NamedMaterialOverrides).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BurstList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = (void *)(this->SpawnRate)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// AddModuleCurvesToEditor @ 14730d7f0

bool __thiscall
UParticleModuleRequired::AddModuleCurvesToEditor
          (UParticleModuleRequired *this,UInterpCurveEdSetup *param_1,
          TArray<FCurveEdEntry_const_*,TSizedDefaultAllocator<32>_> *param_2)

{
  return true;
}

// GetModuleType @ 14730db10

EModuleType __thiscall UParticleModuleRequired::GetModuleType(UParticleModuleRequired *this)

{
  return EPMT_Required;
}

// GetPrivateStaticClass @ 14730f4a0

UClass * __cdecl UParticleModuleRequired::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleRequired.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleRequired",
               &Z_Registration_Info_UClass_UParticleModuleRequired.InnerSingleton,
               StaticRegisterNativesUParticleModuleRequired,0x170,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UParticleModuleRequired>,
               InternalVTableHelperCtorCaller<UParticleModuleRequired>,local_res8,
               UParticleModule::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleRequired.InnerSingleton;
}

// Serialize @ 14730fcc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UParticleModuleRequired::Serialize(UParticleModuleRequired *this,FArchive *param_1)

{
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar1;
  undefined1 auStack_1c8 [40];
  FStructuredArchiveFromArchive local_1a0;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1a0,param_1);
  FVar1 = FStructuredArchiveFromArchive::GetSlot(this_00);
  Serialize(this,*(FStructuredArchiveRecord *)FVar1);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1a0);
  return;
}

// StaticRegisterNativesUParticleModuleRequired @ 14730ff60

void __cdecl UParticleModuleRequired::StaticRegisterNativesUParticleModuleRequired(void)

{
  return;
}

// UParticleModuleRequired @ 14815dce0

UParticleModuleRequired * __thiscall
UParticleModuleRequired::UParticleModuleRequired
          (UParticleModuleRequired *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  byte bVar4;
  
  UObject::UObject((UObject *)this,param_1);
  *(byte *)((longlong)&this->_padding_ + 1) = *(byte *)((longlong)&this->_padding_ + 1) & 0xf3 | 3;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x17 | 0x80;
  this->_padding_ = (longlong)&___7UParticleModuleRequired__6B_;
  (this->Material).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->SpawnRate)._padding_ = 0;
  (this->SpawnRate)._padding_ = 0;
  (this->SpawnRate)._padding_ = 0;
  *(undefined4 *)&(this->SpawnRate)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->SpawnRate)._padding_ + 4) = 0;
  (this->SpawnRate).MinValue = 0.0;
  (this->SpawnRate).MaxValue = 0.0;
  (this->SpawnRate).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->BurstList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BurstList).ArrayNum = 0;
  (this->BurstList).ArrayMax = 0;
  (this->CutoutTexture).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  (this->NamedMaterialOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NamedMaterialOverrides).ArrayNum = 0;
  (this->NamedMaterialOverrides).ArrayMax = 0;
  (this->DerivedData).BoundingGeometry.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DerivedData).BoundingGeometry.ArrayNum = 0;
  (this->DerivedData).BoundingGeometry.ArrayMax = 0;
  FRenderCommandFence::FRenderCommandFence(&this->ReleaseFence);
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 3;
  this->bEmitterDelayUseRange = '\0';
  this->bUseMaxDrawCount = '\x01';
  pbVar2 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar2 = *pbVar2 | 2;
  (this->ScreenAlignment).Value = '\x01';
  this->EmitterDuration = 1.0;
  this->MaxDrawCount = 500;
  this->EmitterDurationLow = 0.0;
  this->EmitterDelay = 0.0;
  this->EmitterDelayLow = 0.0;
  this->AlphaThreshold = 0.1;
  this->EmitterLoops = 0;
  this->SubImages_Horizontal = 1;
  this->SubImages_Vertical = 1;
  (this->NormalsSphereCenter).field0_0x0._s_0.X = 0.0;
  (this->NormalsSphereCenter).field0_0x0._s_0.Y = 0.0;
  (this->NormalsSphereCenter).field0_0x0._s_0.Z = 100.0;
  (this->NormalsCylinderDirection).field0_0x0._s_0.X = 0.0;
  (this->NormalsCylinderDirection).field0_0x0._s_0.Y = 0.0;
  (this->NormalsCylinderDirection).field0_0x0._s_0.Z = 1.0;
  puVar3 = &this->field_0x73;
  this->bUseLegacyEmitterTime = '\x01';
  this->bEmitterDurationUseRange = '\0';
  this->bSupportLargeWorldCoordinates = '\x01';
  this->UVFlippingMode = None;
  this->BoundingMode = '\x01';
  return this;
}

// BeginDestroy @ 148167330

void __thiscall UParticleModuleRequired::BeginDestroy(UParticleModuleRequired *this)

{
  UObject::BeginDestroy((UObject *)this);
  if (this->BoundingGeometryBuffer != (FSubUVBoundingGeometryBuffer *)0x0) {
    BeginReleaseResource((FRenderResource *)this->BoundingGeometryBuffer,(FRenderCommandPipe *)0x0);
    FRenderCommandFence::BeginFence(&this->ReleaseFence,RenderThread);
    return;
  }
  return;
}

// CacheDerivedData @ 1481678c0

void __thiscall UParticleModuleRequired::CacheDerivedData(UParticleModuleRequired *this)

{
  return;
}

// FinishDestroy @ 148174a20

void __thiscall UParticleModuleRequired::FinishDestroy(UParticleModuleRequired *this)

{
  FSubUVBoundingGeometryBuffer *pFVar1;
  
  pFVar1 = this->BoundingGeometryBuffer;
  if (pFVar1 != (FSubUVBoundingGeometryBuffer *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  UObject::FinishDestroy((UObject *)this);
  return;
}

// GenerateLODModuleValues @ 148175990

bool __thiscall
UParticleModuleRequired::GenerateLODModuleValues
          (UParticleModuleRequired *this,UParticleModule *param_1,float param_2,
          UParticleLODLevel *param_3)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UParticleModule *)0x0) {
    pUVar2 = Z_Construct_UClass_UParticleModuleRequired_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)param_1[1]._padding_ != (UObject *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1[1]._padding_);
      }
      (this->Material).field0_0x0 = *(TObjectPtr<UMaterialInterface>_u_0 *)(param_1 + 1);
      (this->ScreenAlignment).Value = (uchar)param_1[2]._padding_;
      return true;
    }
  }
  return false;
}

// GetDefaultCutout @ 1481796a0

void __thiscall UParticleModuleRequired::GetDefaultCutout(UParticleModuleRequired *this)

{
  return;
}

// InitBoundingGeometryBuffer @ 148181920

void __thiscall UParticleModuleRequired::InitBoundingGeometryBuffer(UParticleModuleRequired *this)

{
  if (this->BoundingGeometryBuffer->Vertices->ArrayNum != 0) {
    BeginInitResource((FRenderResource *)this->BoundingGeometryBuffer,(FRenderCommandPipe *)0x0);
    return;
  }
  return;
}

// InitializeDefaults @ 148184880

void __thiscall UParticleModuleRequired::InitializeDefaults(UParticleModuleRequired *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionFloatConstant *pUVar3;
  FName local_res8;
  
  bVar1 = FRawDistributionFloat::IsCreated(&this->SpawnRate);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"RequiredDistributionSpawnRate");
    pUVar3 = NewObject<UDistributionFloatConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDistributionFloatConstant *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->SpawnRate).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
  }
  return;
}

// IsReadyForFinishDestroy @ 148185c40

bool __thiscall UParticleModuleRequired::IsReadyForFinishDestroy(UParticleModuleRequired *this)

{
  bool bVar1;
  
  bVar1 = FRenderCommandFence::IsFenceComplete(&this->ReleaseFence);
  return bVar1;
}

// PostInitProperties @ 14818b410

void __thiscall UParticleModuleRequired::PostInitProperties(UParticleModuleRequired *this)

{
  bool bVar1;
  FSubUVBoundingGeometryBuffer *this_00;
  FSubUVBoundingGeometryBuffer *pFVar2;
  FName *pFVar3;
  UDistributionFloatConstant *pUVar4;
  FName local_res8;
  
  UObject::PostInitProperties((UObject *)this);
  pFVar2 = (FSubUVBoundingGeometryBuffer *)0x0;
  if ((this->_padding_ & 0x10) == 0) {
    this_00 = ::operator_new(0x38);
    if (this_00 != (FSubUVBoundingGeometryBuffer *)0x0) {
      pFVar2 = FSubUVBoundingGeometryBuffer::FSubUVBoundingGeometryBuffer
                         (this_00,&(this->DerivedData).BoundingGeometry);
    }
    this->BoundingGeometryBuffer = pFVar2;
  }
  if (((this->_padding_ & 0x410) == 0) &&
     (bVar1 = FRawDistributionFloat::IsCreated(&this->SpawnRate), !bVar1)) {
    pFVar3 = ::FName::FName(&local_res8,L"RequiredDistributionSpawnRate");
    pUVar4 = NewObject<UDistributionFloatConstant>
                       ((UObject *)this,*pFVar3,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDistributionFloatConstant *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->SpawnRate).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar4;
  }
  return;
}

// PostLoad @ 14818c520

void __thiscall UParticleModuleRequired::PostLoad(UParticleModuleRequired *this)

{
  int iVar1;
  
  UObject::PostLoad((UObject *)this);
  iVar1 = 1;
  if (1 < this->SubImages_Horizontal) {
    iVar1 = this->SubImages_Horizontal;
  }
  this->SubImages_Horizontal = iVar1;
  iVar1 = 1;
  if (1 < this->SubImages_Vertical) {
    iVar1 = this->SubImages_Vertical;
  }
  this->SubImages_Vertical = iVar1;
  if (this->BoundingGeometryBuffer->Vertices->ArrayNum != 0) {
    BeginInitResource((FRenderResource *)this->BoundingGeometryBuffer,(FRenderCommandPipe *)0x0);
    return;
  }
  return;
}

// Serialize @ 1481948f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleModuleRequired::Serialize(UParticleModuleRequired *this,FStructuredArchiveRecord param_1)

{
  int iVar1;
  FArchiveState *this_00;
  FSlotBase local_res10;
  bool local_res18 [8];
  FName local_res20;
  FString local_18;
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  UObject::Serialize((UObject *)this,(FStructuredArchiveRecord)local_res10.StructuredArchive);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FRenderingObjectVersion::GUID);
  iVar1 = FArchiveState::CustomVer(this_00,&FRenderingObjectVersion::GUID);
  if (iVar1 < 8) {
    return;
  }
  if ((this_00->SavePackageData == (FArchiveSavePackageData *)0x0) ||
     (this_00->SavePackageData->CookContext == (FArchiveCookContext *)0x0)) {
    local_res18[0] = false;
  }
  else {
    local_res18[0] = true;
  }
  ::operator<<((local_res10.StructuredArchive)->Formatter->Inner,local_res18);
  if (local_res18[0] == false) {
    if (this_00->ArIsLoading == 0) {
      return;
    }
    local_res20 = (FName)this->_padding_;
    ::FName::ToString(&local_res20,&local_18);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (local_res18[0] == false) {
      return;
    }
  }
  FSubUVDerivedData::Serialize
            (&this->DerivedData,(FStructuredArchiveSlot)local_res10.StructuredArchive);
  return;
}

// SetToSensibleDefaults @ 148197e70

void __thiscall
UParticleModuleRequired::SetToSensibleDefaults
          (UParticleModuleRequired *this,UParticleEmitter *param_1)

{
  this->bUseLegacyEmitterTime = '\0';
  return;
}

// ShouldUseVelocityForMotionBlur @ 148199570

bool __thiscall
UParticleModuleRequired::ShouldUseVelocityForMotionBlur(UParticleModuleRequired *this)

{
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  
  pTVar1 = CVarFxCascadeUseVelocityForMotionBlur.Ref;
  if (this->bOverrideUseVelocityForMotionBlur != '\0') {
    return this->bUseVelocityForMotionBlur;
  }
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      return pTVar1->ShadowedValue[1];
    }
  }
  return pTVar1->ShadowedValue[0];
}

