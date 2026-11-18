// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 18

// StaticClass @ 1472f88c0

UClass * __cdecl UParticleModuleBeamSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleBeamSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleBeamSource",
               &Z_Registration_Info_UClass_UParticleModuleBeamSource.InnerSingleton,
               StaticRegisterNativesUParticleModuleBeamSource,0x148,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UParticleModuleBeamSource>,
               InternalVTableHelperCtorCaller<UParticleModuleBeamSource>,local_res8,
               UParticleModuleBeamBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleBeamSource.InnerSingleton;
}

// UParticleModuleBeamSource @ 1472fc970

UParticleModuleBeamSource * __thiscall
UParticleModuleBeamSource::UParticleModuleBeamSource
          (UParticleModuleBeamSource *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleBeamSource__6B_;
  (this->SourceName).ComparisonIndex = 0;
  (this->SourceName).Number = 0;
  (this->Source)._padding_ = 0;
  (this->Source)._padding_ = 0;
  *(undefined4 *)&(this->Source)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->Source)._padding_ + 4) = 0;
  (this->Source)._padding_ = 0;
  (this->Source).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Source).MaxValue = 0.0;
  (this->Source).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Source).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->Source).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Source).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Source).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->Source).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Source).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  (this->SourceTangent)._padding_ = 0;
  (this->SourceTangent)._padding_ = 0;
  *(undefined4 *)&(this->SourceTangent)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->SourceTangent)._padding_ + 4) = 0;
  (this->SourceTangent)._padding_ = 0;
  (this->SourceTangent).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SourceTangent).MaxValue = 0.0;
  (this->SourceTangent).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SourceTangent).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->SourceTangent).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SourceTangent).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SourceTangent).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->SourceTangent).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->SourceTangent).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  (this->SourceStrength)._padding_ = 0;
  (this->SourceStrength)._padding_ = 0;
  (this->SourceStrength)._padding_ = 0;
  *(undefined4 *)&(this->SourceStrength)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->SourceStrength)._padding_ + 4) = 0;
  (this->SourceStrength).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->SourceStrength).MinValue = 0.0;
  (this->SourceStrength).MaxValue = 0.0;
  return this;
}

// ~UParticleModuleBeamSource @ 1472fd9f0

void __thiscall
UParticleModuleBeamSource::~UParticleModuleBeamSource(UParticleModuleBeamSource *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleBeamSource__6B_;
  pvVar1 = (void *)(this->SourceStrength)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->SourceTangent)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->Source)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModule__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1473003c0

UClass * __cdecl UParticleModuleBeamSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleBeamSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleBeamSource",
               &Z_Registration_Info_UClass_UParticleModuleBeamSource.InnerSingleton,
               StaticRegisterNativesUParticleModuleBeamSource,0x148,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UParticleModuleBeamSource>,
               InternalVTableHelperCtorCaller<UParticleModuleBeamSource>,local_res8,
               UParticleModuleBeamBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleBeamSource.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleBeamSource @ 1473017f0

void __cdecl UParticleModuleBeamSource::StaticRegisterNativesUParticleModuleBeamSource(void)

{
  return;
}

// UParticleModuleBeamSource @ 1480f5610

UParticleModuleBeamSource * __thiscall
UParticleModuleBeamSource::UParticleModuleBeamSource
          (UParticleModuleBeamSource *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  FConstructorStatics FVar2;
  ulonglong uVar3;
  
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfc;
  this->_padding_ = (longlong)&___7UParticleModuleBeamSource__6B_;
  (this->SourceName).ComparisonIndex = 0;
  (this->SourceName).Number = 0;
  (this->Source)._padding_ = 0;
  (this->Source)._padding_ = 0;
  *(undefined4 *)&(this->Source)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->Source)._padding_ + 4) = 0;
  (this->Source)._padding_ = 0;
  uVar3 = (ulonglong)_tls_index;
  (this->Source).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Source).MaxValue = 0.0;
  (this->Source).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Source).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->Source).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Source).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Source).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->Source).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Source).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  (this->SourceTangent)._padding_ = 0;
  (this->SourceTangent)._padding_ = 0;
  *(undefined4 *)&(this->SourceTangent)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->SourceTangent)._padding_ + 4) = 0;
  (this->SourceTangent)._padding_ = 0;
  (this->SourceTangent).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SourceTangent).MaxValue = 0.0;
  (this->SourceTangent).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SourceTangent).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->SourceTangent).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SourceTangent).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SourceTangent).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->SourceTangent).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->SourceTangent).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  (this->SourceStrength)._padding_ = 0;
  (this->SourceStrength)._padding_ = 0;
  (this->SourceStrength)._padding_ = 0;
  *(undefined4 *)&(this->SourceStrength)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->SourceStrength)._padding_ + 4) = 0;
  (this->SourceStrength).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->SourceStrength).MinValue = 0.0;
  (this->SourceStrength).MaxValue = 0.0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar3 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::ConstructorStatics.NAME_None,L"None");
      _Init_thread_footer(&::_TSS0);
    }
  }
  (this->SourceMethod).Value = '\0';
  FVar2 = ::ConstructorStatics;
  this->bSourceAbsolute = 0;
  this->SourceName = FVar2.NAME_None;
  (this->SourceTangentMethod).Value = '\0';
  return this;
}

// AutoPopulateInstanceProperties @ 1480fe290

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleModuleBeamSource::AutoPopulateInstanceProperties
          (UParticleModuleBeamSource *this,UParticleSystemComponent *param_1)

{
  int *piVar1;
  TArray<FParticleSysParam,TSizedDefaultAllocator<32>_> *pTVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleBeamModules.cpp"
                         ,0x71a,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar7 = 0;
  pTVar2 = &param_1->InstanceParameters;
  if (0 < (param_1->InstanceParameters).ArrayNum) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (param_1->InstanceParameters).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(FName *)((pTVar2->AllocatorInstance).Data + lVar8) == this->SourceName) {
        return;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0xe0;
    } while ((int)uVar7 < (param_1->InstanceParameters).ArrayNum);
  }
  piVar1 = &(param_1->InstanceParameters).ArrayMax;
  uVar7 = (param_1->InstanceParameters).ArrayNum;
  if (uVar7 == *piVar1) {
    uVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10e0,&pTVar2->AllocatorInstance,piVar1);
    (param_1->InstanceParameters).ArrayNum = uVar7;
  }
  lVar8 = (longlong)(int)uVar7 * 0xe0;
  (param_1->InstanceParameters).ArrayNum = uVar7 + 1;
  memset((pTVar2->AllocatorInstance).Data + lVar8,0,0xe0);
  FVar3 = this->SourceName;
  uVar9 = ~uVar7 >> 0x1f;
  uVar6 = 0;
  if ((int)uVar7 < (param_1->InstanceParameters).ArrayNum) {
    uVar6 = uVar9;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(FName *)((pTVar2->AllocatorInstance).Data + lVar8) = FVar3;
  uVar6 = 0;
  if ((int)uVar7 < (param_1->InstanceParameters).ArrayNum) {
    uVar6 = uVar9;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (pTVar2->AllocatorInstance).Data[lVar8 + 8] = (FScriptContainerElement)0x6;
  uVar6 = 0;
  if ((int)uVar7 < (param_1->InstanceParameters).ArrayNum) {
    uVar6 = uVar9;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar7 * 0xe0 + 0x50) = 0;
  return;
}

// GetDataPointers @ 1481112d0

void __thiscall
UParticleModuleBeamSource::GetDataPointers
          (UParticleModuleBeamSource *this,FParticleEmitterInstance *param_1,uchar *param_2,
          int *param_3,FBeamParticleSourceTargetPayloadData **param_4,
          FBeamParticleSourceBranchPayloadData **param_5)

{
  int iVar1;
  longlong lVar2;
  
  if (((param_1 != (FParticleEmitterInstance *)0x0) && (param_1->bIsBeam != 0)) &&
     (lVar2 = param_1[1]._padding_, lVar2 != 0)) {
    if ((this->SourceMethod).Value == '\x03') {
      iVar1 = *param_3;
      *param_3 = iVar1 + 4;
      *param_4 = (FBeamParticleSourceTargetPayloadData *)(param_2 + iVar1);
    }
    if (*(char *)(lVar2 + 0x30) == '\x02') {
      iVar1 = *param_3;
      *param_3 = iVar1 + 4;
      *param_5 = (FBeamParticleSourceBranchPayloadData *)(param_2 + iVar1);
    }
  }
  return;
}

// GetParticleSysParamsUtilized @ 1481180a0

/* WARNING: Removing unreachable block (ram,0x0001481181ad) */

void __thiscall
UParticleModuleBeamSource::GetParticleSysParamsUtilized
          (UParticleModuleBeamSource *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FString local_28;
  FString local_18;
  
  if ((this->SourceMethod).Value == '\x04') {
    ::FName::ToString(&this->SourceName,&local_18);
    ::FString::PrintfImpl(&local_28,L"BeamSource : Actor: %s\n");
    pFVar4 = (param_1->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
        ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar3 = param_1->ArrayNum;
    if (iVar3 == param_1->ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar3 + 1;
    pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
    *(undefined8 *)pFVar4 = 0;
    *(FScriptContainerElement **)pFVar4 = local_28.Data.AllocatorInstance.Data;
    *(int *)(pFVar4 + 8) = local_28.Data.ArrayNum;
    *(int *)(pFVar4 + 0xc) = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// InitializeDefaults @ 148121a80

/* WARNING: Type propagation algorithm not settling */

void __thiscall UParticleModuleBeamSource::InitializeDefaults(UParticleModuleBeamSource *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionVectorConstant *pUVar3;
  UDistributionFloatConstant *pUVar4;
  FName local_res8;
  FName local_res10;
  
  bVar1 = FRawDistributionVector::IsCreated(&this->Source);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionSource");
    pUVar3 = NewObject<UDistributionVectorConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    (pUVar3->Constant).field0_0x0._s_0.X = 50.0;
    (pUVar3->Constant).field0_0x0._s_0.Y = 50.0;
    (pUVar3->Constant).field0_0x0._s_0.Z = 50.0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDistributionVectorConstant *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->Source).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
  }
  bVar1 = FRawDistributionVector::IsCreated(&this->SourceTangent);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res10,L"DistributionSourceTangent");
    pUVar3 = NewObject<UDistributionVectorConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    (pUVar3->Constant).field0_0x0._s_0.X = 1.0;
    (pUVar3->Constant).field0_0x0._s_0.Y = 0.0;
    (pUVar3->Constant).field0_0x0._s_0.Z = 0.0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDistributionVectorConstant *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->SourceTangent).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
  }
  bVar1 = FRawDistributionFloat::IsCreated(&this->SourceStrength);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionSourceStrength");
    pUVar4 = NewObject<UDistributionFloatConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    pUVar4->Constant = 25.0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->SourceStrength).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar4;
  }
  return;
}

// PostInitProperties @ 148125bf0

/* WARNING: Type propagation algorithm not settling */

void __thiscall UParticleModuleBeamSource::PostInitProperties(UParticleModuleBeamSource *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionVectorConstant *pUVar3;
  UDistributionFloatConstant *pUVar4;
  FName local_res8;
  FName local_res10;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    bVar1 = FRawDistributionVector::IsCreated(&this->Source);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"DistributionSource");
      pUVar3 = NewObject<UDistributionVectorConstant>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      (pUVar3->Constant).field0_0x0._s_0.X = 50.0;
      (pUVar3->Constant).field0_0x0._s_0.Y = 50.0;
      (pUVar3->Constant).field0_0x0._s_0.Z = 50.0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UDistributionVectorConstant *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->Source).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
    }
    bVar1 = FRawDistributionVector::IsCreated(&this->SourceTangent);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res10,L"DistributionSourceTangent");
      pUVar3 = NewObject<UDistributionVectorConstant>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      (pUVar3->Constant).field0_0x0._s_0.X = 1.0;
      (pUVar3->Constant).field0_0x0._s_0.Y = 0.0;
      (pUVar3->Constant).field0_0x0._s_0.Z = 0.0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UDistributionVectorConstant *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->SourceTangent).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
    }
    bVar1 = FRawDistributionFloat::IsCreated(&this->SourceStrength);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"DistributionSourceStrength");
      pUVar4 = NewObject<UDistributionFloatConstant>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      pUVar4->Constant = 25.0;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      (this->SourceStrength).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar4;
    }
  }
  return;
}

// RequiredBytes @ 14812a1e0

uint __thiscall
UParticleModuleBeamSource::RequiredBytes
          (UParticleModuleBeamSource *this,UParticleModuleTypeDataBase *param_1)

{
  int iVar1;
  UClass *pUVar2;
  uint uVar3;
  
  uVar3 = 4;
  if ((this->SourceMethod).Value != '\x03') {
    uVar3 = 0;
  }
  if (param_1 != (UParticleModuleTypeDataBase *)0x0) {
    pUVar2 = Z_Construct_UClass_UParticleModuleTypeDataBeam2_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if (((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar2->_padding_)) && (*(char *)(param_1 + 1) == '\x02')) {
      return uVar3 + 4;
    }
  }
  return uVar3;
}

// ResolveSourceData @ 14812bf10

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UParticleModuleBeamSource::ResolveSourceData
          (UParticleModuleBeamSource *this,FContext *param_1,FParticleBeam2EmitterInstance *param_2,
          FBeam2TypeDataPayload *param_3,uchar *param_4,int *param_5,int param_6,bool param_7,
          FBeamParticleModifierPayloadData *param_8)

{
  IParticleEmitterInstanceOwner IVar1;
  IParticleEmitterInstanceOwner IVar2;
  uchar uVar3;
  UParticleModuleTypeDataBeam2 *pUVar4;
  USceneComponent *pUVar5;
  FParticleEmitterInstance *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  bool bVar12;
  undefined1 uVar13;
  longlong lVar14;
  IParticleEmitterInstanceOwner *pIVar15;
  double *pdVar16;
  TTransform<double> *pTVar17;
  FScriptContainerElement *pFVar18;
  TVector<double> *pTVar19;
  UObject *pUVar20;
  IParticleEmitterInstanceOwner *pIVar21;
  int iVar22;
  uint uVar23;
  longlong lVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
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
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined4 uVar55;
  undefined4 uVar56;
  double dVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  double dVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  double dVar73;
  undefined1 auVar74 [16];
  double dVar76;
  undefined1 auVar75 [16];
  IParticleEmitterInstanceOwner *local_res18;
  IParticleEmitterInstanceOwner *local_218;
  IParticleEmitterInstanceOwner *local_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  TVector<double>_u_0 local_1e8;
  undefined1 local_1c8 [16];
  undefined1 local_1a8 [16];
  double local_198;
  double dStack_190;
  double local_188;
  double local_180;
  double dStack_178;
  double local_170;
  undefined1 local_168 [16];
  double local_158;
  double local_150;
  double dStack_148;
  undefined8 local_140;
  undefined1 local_138 [16];
  double local_128;
  undefined1 local_120 [16];
  double local_110;
  double local_108;
  double dStack_100;
  undefined8 local_f8;
  undefined1 local_f0 [16];
  double local_e0;
  TVector<double>_u_0 local_d8;
  TVector<double> local_b8;
  TVector<double> local_a0;
  TVector<double> local_88 [4];
  
  if (((param_2 != (FParticleBeam2EmitterInstance *)0x0) && ((param_2->_padding_ & 0x100) != 0)) &&
     (pUVar4 = param_2->BeamTypeData, pUVar4 != (UParticleModuleTypeDataBeam2 *)0x0)) {
    if ((this->SourceMethod).Value == '\x03') {
      *param_5 = *param_5 + 4;
    }
    if ((pUVar4->BeamMethod).Value == '\x02') {
      *param_5 = *param_5 + 4;
    }
  }
  lVar24 = (longlong)param_6;
  if ((param_7) || (this->bLockSource == 0)) {
    uVar3 = (this->SourceMethod).Value;
    if (uVar3 == '\x01') {
      iVar22 = (param_2->UserSetSourceArray).ArrayNum;
      if (iVar22 < 1) goto LAB_14812c2e4;
      if (param_6 < iVar22) {
        if ((param_6 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          uVar13 = (*pcVar8)();
          return (bool)uVar13;
        }
        pFVar7 = (param_2->UserSetSourceArray).AllocatorInstance.Data;
        pFVar18 = pFVar7 + lVar24 * 0x18;
        dVar67 = *(double *)(pFVar18 + 8);
        (param_3->SourcePoint).field0_0x0._s_0.X = *(double *)pFVar18;
        (param_3->SourcePoint).field0_0x0._s_0.Y = dVar67;
        (param_3->SourcePoint).field0_0x0._s_0.Z = *(double *)(pFVar7 + lVar24 * 0x18 + 0x10);
      }
      else {
        pFVar18 = (param_2->UserSetSourceArray).AllocatorInstance.Data;
        dVar67 = *(double *)(pFVar18 + 8);
        (param_3->SourcePoint).field0_0x0._s_0.X = *(double *)pFVar18;
        (param_3->SourcePoint).field0_0x0._s_0.Y = dVar67;
        (param_3->SourcePoint).field0_0x0._s_0.Z = *(double *)(pFVar18 + 0x10);
      }
    }
    else {
      if (uVar3 == '\x02') {
        lVar14 = (**(code **)(*(longlong *)param_2->_padding_ + 0x10))();
        local_180 = *(double *)(lVar14 + 0x20);
        dStack_178 = *(double *)(lVar14 + 0x28);
        dVar67 = *(double *)(lVar14 + 0x30);
        (param_3->SourcePoint).field0_0x0._s_0.X = local_180;
        (param_3->SourcePoint).field0_0x0._s_0.Y = dStack_178;
        local_170 = dVar67;
      }
      else {
        if (uVar3 == '\x03') {
          uVar3 = (param_2->BeamTypeData->BeamMethod).Value;
          if ((uVar3 == '\x02') || (uVar3 == '\x01')) {
            if (param_2->SourceEmitter == (FParticleEmitterInstance *)0x0) {
              FParticleBeam2EmitterInstance::ResolveSource(param_2);
            }
            pFVar6 = param_2->SourceEmitter;
            if ((pFVar6 != (FParticleEmitterInstance *)0x0) &&
               (pFVar6->ParticleIndices != (ushort *)0x0)) {
              uVar23 = this->LastSelectedParticleIndex;
              if ((uVar23 == 0xffffffff) ||
                 ((lVar14 = (**(code **)(pFVar6->_padding_ + 0x110))(pFVar6,uVar23), lVar14 == 0 ||
                  (__real_3f800000 < *(float *)(lVar14 + 0x90))))) {
                this->LastSelectedParticleIndex = this->LastSelectedParticleIndex + 1;
                iVar22 = this->LastSelectedParticleIndex;
                if (param_2->SourceEmitter->ActiveParticles <= iVar22) {
                  this->LastSelectedParticleIndex = 0;
                  iVar22 = 0;
                }
                uVar23 = (uint)param_2->SourceEmitter->ParticleIndices[iVar22];
                if (iVar22 != -1) goto LAB_14812c100;
                pIVar21 = param_2->SourceEmitter->Component;
              }
              else {
LAB_14812c100:
                pFVar6 = param_2->SourceEmitter;
                pIVar21 = pFVar6->Component;
                if ((-1 < (int)uVar23) &&
                   (pIVar15 = (IParticleEmitterInstanceOwner *)
                              (**(code **)(pFVar6->_padding_ + 0x110))(pFVar6,uVar23),
                   local_218 = pIVar15, pIVar15 != (IParticleEmitterInstanceOwner *)0x0)) {
                  pFVar6 = param_2->SourceEmitter;
                  dVar67 = (pFVar6->SimulationToWorld).M[3][0];
                  dVar10 = (pFVar6->SimulationToWorld).M[3][1];
                  dVar57 = (pFVar6->SimulationToWorld).M[3][2];
                  local_1e8._s_0.X = dVar67;
                  local_1e8._s_0.Y = dVar10;
                  local_1e8._s_0.Z = dVar57;
                  bVar12 = UE::Math::TVector<double>::ContainsNaN((TVector<double> *)(pIVar15 + 3));
                  if ((((!bVar12) ||
                       (local_res18 = pIVar21,
                       bVar12 = `UParticleModuleBeamSource::ResolveSourceData'::__l45::<lambda_1>::
                                operator()(&local_res18), bVar12)) &&
                      ((bVar12 = UE::Math::TVector<double>::ContainsNaN
                                           ((TVector<double> *)local_218), !bVar12 ||
                       (local_218 = pIVar21,
                       bVar12 = `UParticleModuleBeamSource::ResolveSourceData'::__l45::<lambda_2>::
                                operator()(&local_218), bVar12)))) &&
                     ((bVar12 = UE::Math::TVector<double>::ContainsNaN
                                          ((TVector<double> *)&local_1e8._s_0), !bVar12 ||
                      (local_210 = pIVar21,
                      bVar12 = `UParticleModuleBeamSource::ResolveSourceData'::__l45::<lambda_3>::
                               operator()(&local_210), bVar12)))) {
                    IVar1 = pIVar15[4];
                    IVar2 = pIVar15[5];
                    (param_3->SourcePoint).field0_0x0._s_0.X = dVar67 + (double)pIVar15[3];
                    (param_3->SourcePoint).field0_0x0._s_0.Y = dVar10 + (double)IVar1;
                    (param_3->SourcePoint).field0_0x0._s_0.Z = dVar57 + (double)IVar2;
                    goto LAB_14812c4d9;
                  }
                  goto LAB_14812c2e4;
                }
              }
              lVar14 = (**(code **)((longlong)*pIVar21 + 0x10))(pIVar21);
              local_198 = *(double *)(lVar14 + 0x20);
              dStack_190 = *(double *)(lVar14 + 0x28);
              dVar67 = *(double *)(lVar14 + 0x30);
              (param_3->SourcePoint).field0_0x0._s_0.X = local_198;
              (param_3->SourcePoint).field0_0x0._s_0.Y = dStack_190;
              local_188 = dVar67;
              goto LAB_14812c4d4;
            }
          }
        }
        else if ((uVar3 == '\x04') && (this->SourceName != (FName)0x0)) {
          FParticleBeam2EmitterInstance::ResolveSource(param_2);
          if (param_2->SourceActor != (AActor *)0x0) {
            pUVar5 = (param_2->SourceActor->RootComponent).field0_0x0.DebugPtr;
            if (pUVar5 == (USceneComponent *)0x0) {
              pTVar17 = &UE::Math::TTransform<double>::Identity;
            }
            else {
              pTVar17 = &pUVar5->ComponentToWorld;
            }
            local_208 = (pTVar17->Translation).XY.m128d_f64[0];
            dStack_200 = (pTVar17->Translation).XY.m128d_f64[1];
            dVar67 = (pTVar17->Translation).ZW.m128d_f64[0];
            (param_3->SourcePoint).field0_0x0._s_0.X = local_208;
            (param_3->SourcePoint).field0_0x0._s_0.Y = dStack_200;
            local_1f8 = dVar67;
            goto LAB_14812c4d4;
          }
        }
LAB_14812c2e4:
        if (this->bSourceAbsolute != 0) {
          pUVar20 = UParticleModule::FContext::GetDistributionData(param_1);
          pTVar19 = FRawDistributionVector::GetValue
                              (&this->Source,&local_b8,*(float *)&param_2->_padding_,pUVar20,0,
                               (FRandomStream *)0x0);
          dVar67 = (pTVar19->field0_0x0)._s_0.Y;
          (param_3->SourcePoint).field0_0x0._s_0.X = (pTVar19->field0_0x0)._s_0.X;
          (param_3->SourcePoint).field0_0x0._s_0.Y = dVar67;
          (param_3->SourcePoint).field0_0x0._s_0.Z = (pTVar19->field0_0x0)._s_0.Z;
          pdVar16 = (double *)
                    (**(code **)(*(longlong *)param_2->_padding_ + 0x60))
                              ((longlong *)param_2->_padding_,local_1a8);
          local_208 = *pdVar16;
          iVar22 = *(int *)(pdVar16 + 1);
          (param_3->SourcePoint).field0_0x0._s_0.X =
               (param_3->SourcePoint).field0_0x0._s_0.X - (double)local_208._0_4_;
          (param_3->SourcePoint).field0_0x0._s_0.Y =
               (param_3->SourcePoint).field0_0x0._s_0.Y -
               (double)(int)((ulonglong)local_208 >> 0x20);
          (param_3->SourcePoint).field0_0x0._s_0.Z =
               (param_3->SourcePoint).field0_0x0._s_0.Z - (double)iVar22;
          goto LAB_14812c4d9;
        }
        pTVar17 = UParticleModule::FContext::GetTransform(param_1);
        pUVar20 = UParticleModule::FContext::GetDistributionData(param_1);
        pTVar19 = FRawDistributionVector::GetValue
                            (&this->Source,&local_a0,*(float *)&param_2->_padding_,pUVar20,0,
                             (FRandomStream *)0x0);
        auVar50 = *(undefined1 (*) [16])(pTVar17->Rotation).ZW.m128d_f64;
        local_d8._0_16_ = *(undefined1 (*) [16])(pTVar17->Rotation).XY.m128d_f64;
        dVar11 = (pTVar17->Rotation).ZW.m128d_f64[1];
        dVar73 = (pTVar19->field0_0x0)._s_0.X * (pTVar17->Scale3D).XY.m128d_f64[0];
        dVar76 = (pTVar19->field0_0x0)._s_0.Y * (pTVar17->Scale3D).XY.m128d_f64[1];
        auVar74._0_8_ = (pTVar19->field0_0x0)._s_0.Z * (pTVar17->Scale3D).ZW.m128d_f64[0];
        auVar74._8_8_ = (pTVar17->Scale3D).ZW.m128d_f64[1] * 0.0;
        auVar68._8_4_ = SUB84(dVar76,0);
        auVar68._0_8_ = dVar73;
        uVar55 = (undefined4)((ulonglong)dVar76 >> 0x20);
        auVar68._12_4_ = uVar55;
        dVar67 = auVar50._0_8_;
        auVar36 = blendpd(local_d8._0_16_,auVar50,2);
        auVar69._0_8_ = auVar68._8_8_ * local_d8._0_8_ - local_d8._8_8_ * dVar73;
        auVar69._8_8_ = auVar74._0_8_ * local_d8._8_8_ - dVar67 * dVar76;
        auVar27._8_4_ = SUB84(dVar76,0);
        auVar27._0_8_ = dVar73;
        auVar27._12_4_ = uVar55;
        auVar27 = blendpd(auVar27,auVar74,2);
        auVar37._0_8_ = auVar27._0_8_ * dVar67 - auVar36._0_8_ * auVar74._0_8_;
        auVar37._8_8_ = auVar27._8_8_ * auVar50._8_8_ - auVar36._8_8_ * auVar74._8_8_;
        auVar27 = *(undefined1 (*) [16])(pTVar17->Rotation).XY.m128d_f64;
        auVar36 = blendpd(auVar69,auVar37,2);
        dVar10 = auVar69._8_8_ + auVar69._8_8_;
        dVar57 = auVar37._0_8_ + auVar37._0_8_;
        uVar55 = (undefined4)((ulonglong)dVar57 >> 0x20);
        auVar70._0_8_ = auVar36._0_8_ + auVar36._0_8_;
        auVar70._8_8_ = auVar36._8_8_ + auVar36._8_8_;
        auVar46._8_4_ = SUB84(dVar57,0);
        auVar46._0_8_ = dVar10;
        auVar46._12_4_ = uVar55;
        auVar38._8_4_ = SUB84(dVar57,0);
        auVar38._0_8_ = dVar10;
        auVar38._12_4_ = uVar55;
        auVar37 = blendpd(auVar38,auVar70,2);
        auVar47._0_8_ = auVar46._8_8_ * auVar27._0_8_ - auVar27._8_8_ * dVar10;
        auVar47._8_8_ = auVar70._0_8_ * auVar27._8_8_ - dVar67 * dVar57;
        auVar36._8_4_ = SUB84(auVar47._8_8_,0);
        auVar36._0_8_ = auVar47._0_8_;
        auVar36._12_4_ = (int)((ulonglong)auVar47._8_8_ >> 0x20);
        auVar27 = blendpd(auVar27,auVar50,2);
        auVar39._0_8_ = auVar37._0_8_ * dVar67 - auVar27._0_8_ * auVar70._0_8_;
        auVar39._8_8_ = auVar37._8_8_ * auVar50._8_8_ - auVar27._8_8_ * auVar70._8_8_;
        auVar50 = blendpd(auVar47,auVar39,2);
        dVar10 = dVar10 * dVar11 + dVar73 + auVar36._8_8_ + (pTVar17->Translation).XY.m128d_f64[0];
        dVar67 = dVar57 * dVar11 + dVar76 + auVar39._0_8_ + (pTVar17->Translation).XY.m128d_f64[1];
        uVar55 = SUB84(dVar67,0);
        uVar56 = (undefined4)((ulonglong)dVar67 >> 0x20);
        local_168._8_4_ = uVar55;
        local_168._0_8_ = dVar10;
        local_168._12_4_ = uVar56;
        dVar67 = auVar70._0_8_ * dVar11 + auVar74._0_8_ + auVar50._0_8_ +
                 (pTVar17->Translation).ZW.m128d_f64[0];
        auVar50._8_4_ = uVar55;
        auVar50._0_8_ = dVar10;
        auVar50._12_4_ = uVar56;
        *(undefined1 (*) [16])&(param_3->SourcePoint).field0_0x0 = auVar50;
        local_158 = dVar67;
      }
LAB_14812c4d4:
      (param_3->SourcePoint).field0_0x0._s_0.Z = dVar67;
    }
LAB_14812c4d9:
    if (!param_7) goto LAB_14812c4e6;
LAB_14812c4f4:
    uVar3 = (this->SourceTangentMethod).Value;
    if (uVar3 == '\0') {
      pTVar17 = UParticleModule::FContext::GetTransform(param_1);
      local_f8 = 0;
      local_108 = ___xmm_00000000000000003ff0000000000000;
      dStack_100 = _UNK_150689518;
      auVar50 = *(undefined1 (*) [16])(pTVar17->Rotation).ZW.m128d_f64;
      dVar73 = ___xmm_00000000000000003ff0000000000000 * (pTVar17->Scale3D).XY.m128d_f64[0];
      dVar76 = _UNK_150689518 * (pTVar17->Scale3D).XY.m128d_f64[1];
      auVar72._0_8_ = (pTVar17->Scale3D).ZW.m128d_f64[0] * 0.0;
      auVar72._8_8_ = (pTVar17->Scale3D).ZW.m128d_f64[1] * 0.0;
      local_1c8 = *(undefined1 (*) [16])(pTVar17->Rotation).XY.m128d_f64;
      auVar64._8_4_ = SUB84(dVar76,0);
      auVar64._0_8_ = dVar73;
      uVar55 = (undefined4)((ulonglong)dVar76 >> 0x20);
      auVar64._12_4_ = uVar55;
      dVar11 = (pTVar17->Rotation).ZW.m128d_f64[1];
      dVar67 = auVar50._0_8_;
      auVar37 = blendpd(local_1c8,auVar50,2);
      auVar65._0_8_ = auVar64._8_8_ * local_1c8._0_8_ - local_1c8._8_8_ * dVar73;
      auVar65._8_8_ = auVar72._0_8_ * local_1c8._8_8_ - dVar67 * dVar76;
      auVar33._8_4_ = SUB84(dVar76,0);
      auVar33._0_8_ = dVar73;
      auVar33._12_4_ = uVar55;
      auVar27 = blendpd(auVar33,auVar72,2);
      auVar34._0_8_ = auVar27._0_8_ * dVar67 - auVar37._0_8_ * auVar72._0_8_;
      auVar34._8_8_ = auVar27._8_8_ * auVar50._8_8_ - auVar37._8_8_ * auVar72._8_8_;
      auVar27 = *(undefined1 (*) [16])(pTVar17->Rotation).XY.m128d_f64;
      auVar37 = blendpd(auVar65,auVar34,2);
      dVar10 = auVar65._8_8_ + auVar65._8_8_;
      dVar57 = auVar34._0_8_ + auVar34._0_8_;
      uVar55 = (undefined4)((ulonglong)dVar57 >> 0x20);
      auVar66._0_8_ = auVar37._0_8_ + auVar37._0_8_;
      auVar66._8_8_ = auVar37._8_8_ + auVar37._8_8_;
      auVar53._8_4_ = SUB84(dVar57,0);
      auVar53._0_8_ = dVar10;
      auVar53._12_4_ = uVar55;
      auVar44._8_4_ = SUB84(dVar57,0);
      auVar44._0_8_ = dVar10;
      auVar44._12_4_ = uVar55;
      auVar37 = blendpd(auVar44,auVar66,2);
      auVar54._0_8_ = auVar53._8_8_ * auVar27._0_8_ - auVar27._8_8_ * dVar10;
      auVar54._8_8_ = auVar66._0_8_ * auVar27._8_8_ - dVar67 * dVar57;
      auVar27 = blendpd(auVar27,auVar50,2);
      auVar35._8_4_ = SUB84(auVar54._8_8_,0);
      auVar35._0_8_ = auVar54._0_8_;
      auVar35._12_4_ = (int)((ulonglong)auVar54._8_8_ >> 0x20);
      auVar45._0_8_ = auVar37._0_8_ * dVar67 - auVar27._0_8_ * auVar66._0_8_;
      auVar45._8_8_ = auVar37._8_8_ * auVar50._8_8_ - auVar27._8_8_ * auVar66._8_8_;
      auVar50 = blendpd(auVar54,auVar45,2);
      dVar67 = dVar10 * dVar11 + dVar73 + auVar35._8_8_;
      dVar10 = dVar57 * dVar11 + dVar76 + auVar45._0_8_;
      dVar57 = auVar66._0_8_ * dVar11 + auVar72._0_8_ + auVar50._0_8_;
      local_f0._8_4_ = SUB84(dVar10,0);
      local_f0._0_8_ = dVar67;
      local_f0._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      local_e0 = dVar57;
LAB_14812c93a:
      auVar9._8_4_ = SUB84(dVar10,0);
      auVar9._0_8_ = dVar67;
      auVar9._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      *(undefined1 (*) [16])&(param_3->SourceTangent).field0_0x0 = auVar9;
      (param_3->SourceTangent).field0_0x0._s_0.Z = dVar57;
    }
    else if (uVar3 == '\x01') {
      iVar22 = (param_2->UserSetSourceTangentArray).ArrayNum;
      if (iVar22 < 1) {
LAB_14812c6ed:
        pUVar20 = UParticleModule::FContext::GetDistributionData(param_1);
        pTVar19 = FRawDistributionVector::GetValue
                            (&this->SourceTangent,(TVector<double> *)&local_d8._s_0,
                             *(float *)(param_4 + 0x90),pUVar20,0,(FRandomStream *)0x0);
        dVar67 = (pTVar19->field0_0x0)._s_0.Y;
        (param_3->SourceTangent).field0_0x0._s_0.X = (pTVar19->field0_0x0)._s_0.X;
        (param_3->SourceTangent).field0_0x0._s_0.Y = dVar67;
        (param_3->SourceTangent).field0_0x0._s_0.Z = (pTVar19->field0_0x0)._s_0.Z;
        if (this->bSourceAbsolute == 0) {
          pTVar17 = UParticleModule::FContext::GetTransform(param_1);
          auVar50 = *(undefined1 (*) [16])(pTVar17->Rotation).ZW.m128d_f64;
          dVar73 = (param_3->SourceTangent).field0_0x0._s_0.X * (pTVar17->Scale3D).XY.m128d_f64[0];
          dVar76 = (param_3->SourceTangent).field0_0x0._s_0.Y * (pTVar17->Scale3D).XY.m128d_f64[1];
          auVar75._0_8_ =
               (param_3->SourceTangent).field0_0x0._s_0.Z * (pTVar17->Scale3D).ZW.m128d_f64[0];
          auVar75._8_8_ = (pTVar17->Scale3D).ZW.m128d_f64[1] * 0.0;
          local_1c8 = *(undefined1 (*) [16])(pTVar17->Rotation).XY.m128d_f64;
          auVar61._8_4_ = SUB84(dVar76,0);
          auVar61._0_8_ = dVar73;
          uVar55 = (undefined4)((ulonglong)dVar76 >> 0x20);
          auVar61._12_4_ = uVar55;
          dVar11 = (pTVar17->Rotation).ZW.m128d_f64[1];
          dVar67 = auVar50._0_8_;
          auVar37 = blendpd(local_1c8,auVar50,2);
          auVar62._0_8_ = auVar61._8_8_ * local_1c8._0_8_ - local_1c8._8_8_ * dVar73;
          auVar62._8_8_ = auVar75._0_8_ * local_1c8._8_8_ - dVar67 * dVar76;
          auVar30._8_4_ = SUB84(dVar76,0);
          auVar30._0_8_ = dVar73;
          auVar30._12_4_ = uVar55;
          auVar27 = blendpd(auVar30,auVar75,2);
          auVar31._0_8_ = auVar27._0_8_ * dVar67 - auVar37._0_8_ * auVar75._0_8_;
          auVar31._8_8_ = auVar27._8_8_ * auVar50._8_8_ - auVar37._8_8_ * auVar75._8_8_;
          auVar27 = *(undefined1 (*) [16])(pTVar17->Rotation).XY.m128d_f64;
          auVar37 = blendpd(auVar62,auVar31,2);
          dVar10 = auVar62._8_8_ + auVar62._8_8_;
          dVar57 = auVar31._0_8_ + auVar31._0_8_;
          uVar55 = (undefined4)((ulonglong)dVar57 >> 0x20);
          auVar63._0_8_ = auVar37._0_8_ + auVar37._0_8_;
          auVar63._8_8_ = auVar37._8_8_ + auVar37._8_8_;
          auVar51._8_4_ = SUB84(dVar57,0);
          auVar51._0_8_ = dVar10;
          auVar51._12_4_ = uVar55;
          auVar42._8_4_ = SUB84(dVar57,0);
          auVar42._0_8_ = dVar10;
          auVar42._12_4_ = uVar55;
          auVar37 = blendpd(auVar42,auVar63,2);
          auVar52._0_8_ = auVar51._8_8_ * auVar27._0_8_ - auVar27._8_8_ * dVar10;
          auVar52._8_8_ = auVar63._0_8_ * auVar27._8_8_ - dVar67 * dVar57;
          auVar27 = blendpd(auVar27,auVar50,2);
          auVar32._8_4_ = SUB84(auVar52._8_8_,0);
          auVar32._0_8_ = auVar52._0_8_;
          auVar32._12_4_ = (int)((ulonglong)auVar52._8_8_ >> 0x20);
          auVar43._0_8_ = auVar37._0_8_ * dVar67 - auVar27._0_8_ * auVar63._0_8_;
          auVar43._8_8_ = auVar37._8_8_ * auVar50._8_8_ - auVar27._8_8_ * auVar63._8_8_;
          auVar50 = blendpd(auVar52,auVar43,2);
          dVar67 = dVar10 * dVar11 + dVar73 + auVar32._8_8_;
          dVar10 = dVar57 * dVar11 + dVar76 + auVar43._0_8_;
          dVar57 = auVar63._0_8_ * dVar11 + auVar75._0_8_ + auVar50._0_8_;
          local_120._8_4_ = SUB84(dVar10,0);
          local_120._0_8_ = dVar67;
          local_120._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
          local_110 = dVar57;
          goto LAB_14812c93a;
        }
      }
      else {
        if (iVar22 <= param_6) {
          pFVar18 = (param_2->UserSetSourceTangentArray).AllocatorInstance.Data;
          goto LAB_14812c662;
        }
        if ((param_6 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          uVar13 = (*pcVar8)();
          return (bool)uVar13;
        }
        pFVar7 = (param_2->UserSetSourceTangentArray).AllocatorInstance.Data;
        pFVar18 = pFVar7 + lVar24 * 0x18;
        dVar67 = *(double *)(pFVar18 + 8);
        (param_3->SourceTangent).field0_0x0._s_0.X = *(double *)pFVar18;
        (param_3->SourceTangent).field0_0x0._s_0.Y = dVar67;
        (param_3->SourceTangent).field0_0x0._s_0.Z = *(double *)(pFVar7 + lVar24 * 0x18 + 0x10);
      }
    }
    else {
      if (uVar3 != '\x02') {
        if (uVar3 != '\x03') goto LAB_14812c6ed;
        pTVar17 = UParticleModule::FContext::GetTransform(param_1);
        local_140 = 0;
        local_150 = ___xmm_00000000000000003ff0000000000000;
        dStack_148 = _UNK_150689518;
        auVar50 = *(undefined1 (*) [16])(pTVar17->Rotation).ZW.m128d_f64;
        dVar73 = ___xmm_00000000000000003ff0000000000000 * (pTVar17->Scale3D).XY.m128d_f64[0];
        dVar76 = _UNK_150689518 * (pTVar17->Scale3D).XY.m128d_f64[1];
        auVar71._0_8_ = (pTVar17->Scale3D).ZW.m128d_f64[0] * 0.0;
        auVar71._8_8_ = (pTVar17->Scale3D).ZW.m128d_f64[1] * 0.0;
        local_1c8 = *(undefined1 (*) [16])(pTVar17->Rotation).XY.m128d_f64;
        auVar58._8_4_ = SUB84(dVar76,0);
        auVar58._0_8_ = dVar73;
        uVar55 = (undefined4)((ulonglong)dVar76 >> 0x20);
        auVar58._12_4_ = uVar55;
        dVar11 = (pTVar17->Rotation).ZW.m128d_f64[1];
        dVar67 = auVar50._0_8_;
        auVar37 = blendpd(local_1c8,auVar50,2);
        auVar59._0_8_ = auVar58._8_8_ * local_1c8._0_8_ - local_1c8._8_8_ * dVar73;
        auVar59._8_8_ = auVar71._0_8_ * local_1c8._8_8_ - dVar67 * dVar76;
        auVar26._8_4_ = SUB84(dVar76,0);
        auVar26._0_8_ = dVar73;
        auVar26._12_4_ = uVar55;
        auVar27 = blendpd(auVar26,auVar71,2);
        auVar28._0_8_ = auVar27._0_8_ * dVar67 - auVar37._0_8_ * auVar71._0_8_;
        auVar28._8_8_ = auVar27._8_8_ * auVar50._8_8_ - auVar37._8_8_ * auVar71._8_8_;
        auVar27 = *(undefined1 (*) [16])(pTVar17->Rotation).XY.m128d_f64;
        auVar37 = blendpd(auVar59,auVar28,2);
        dVar10 = auVar59._8_8_ + auVar59._8_8_;
        dVar57 = auVar28._0_8_ + auVar28._0_8_;
        uVar55 = (undefined4)((ulonglong)dVar57 >> 0x20);
        auVar60._0_8_ = auVar37._0_8_ + auVar37._0_8_;
        auVar60._8_8_ = auVar37._8_8_ + auVar37._8_8_;
        auVar48._8_4_ = SUB84(dVar57,0);
        auVar48._0_8_ = dVar10;
        auVar48._12_4_ = uVar55;
        auVar40._8_4_ = SUB84(dVar57,0);
        auVar40._0_8_ = dVar10;
        auVar40._12_4_ = uVar55;
        auVar37 = blendpd(auVar40,auVar60,2);
        auVar49._0_8_ = auVar48._8_8_ * auVar27._0_8_ - auVar27._8_8_ * dVar10;
        auVar49._8_8_ = auVar60._0_8_ * auVar27._8_8_ - dVar67 * dVar57;
        auVar27 = blendpd(auVar27,auVar50,2);
        auVar29._8_4_ = SUB84(auVar49._8_8_,0);
        auVar29._0_8_ = auVar49._0_8_;
        auVar29._12_4_ = (int)((ulonglong)auVar49._8_8_ >> 0x20);
        auVar41._0_8_ = auVar37._0_8_ * dVar67 - auVar27._0_8_ * auVar60._0_8_;
        auVar41._8_8_ = auVar37._8_8_ * auVar50._8_8_ - auVar27._8_8_ * auVar60._8_8_;
        auVar50 = blendpd(auVar49,auVar41,2);
        dVar67 = dVar10 * dVar11 + dVar73 + auVar29._8_8_;
        dVar10 = dVar57 * dVar11 + dVar76 + auVar41._0_8_;
        dVar57 = auVar60._0_8_ * dVar11 + auVar71._0_8_ + auVar50._0_8_;
        local_138._8_4_ = SUB84(dVar10,0);
        local_138._0_8_ = dVar67;
        local_138._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        local_128 = dVar57;
        goto LAB_14812c93a;
      }
      pUVar20 = UParticleModule::FContext::GetDistributionData(param_1);
      pFVar18 = (FScriptContainerElement *)
                FRawDistributionVector::GetValue
                          (&this->SourceTangent,local_88,*(float *)(param_4 + 0x90),pUVar20,0,
                           (FRandomStream *)0x0);
LAB_14812c662:
      dVar67 = *(double *)(pFVar18 + 8);
      (param_3->SourceTangent).field0_0x0._s_0.X =
           (((TVector<double>_u_0 *)&pFVar18->field_0x0)->_s_0).X;
      (param_3->SourceTangent).field0_0x0._s_0.Y = dVar67;
      (param_3->SourceTangent).field0_0x0._s_0.Z = *(double *)(pFVar18 + 0x10);
    }
    if (param_7) goto LAB_14812c956;
  }
  else {
LAB_14812c4e6:
    if (this->bLockSourceTangent == 0) goto LAB_14812c4f4;
  }
  if (this->bLockSourceStength != 0) {
    return true;
  }
LAB_14812c956:
  if (((this->SourceTangentMethod).Value == '\x01') &&
     (iVar22 = (param_2->UserSetSourceStrengthArray).ArrayNum, 0 < iVar22)) {
    if (param_6 < iVar22) {
      if ((param_6 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        uVar13 = (*pcVar8)();
        return (bool)uVar13;
      }
      fVar25 = *(float *)((param_2->UserSetSourceStrengthArray).AllocatorInstance.Data + lVar24 * 4)
      ;
    }
    else {
      fVar25 = *(float *)(param_2->UserSetSourceStrengthArray).AllocatorInstance.Data;
    }
  }
  else {
    pUVar20 = UParticleModule::FContext::GetDistributionData(param_1);
    fVar25 = FRawDistributionFloat::GetValue
                       (&this->SourceStrength,*(float *)(param_4 + 0x90),pUVar20,
                        (FRandomStream *)0x0);
  }
  param_3->SourceStrength = fVar25;
  return true;
}

// Spawn @ 1481354d0

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
UParticleModuleBeamSource::Spawn(UParticleModuleBeamSource *this,FSpawnContext *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  FParticleBeam2EmitterInstance *pFVar5;
  FBaseParticle *pFVar6;
  undefined4 local_res10 [2];
  int local_res18 [2];
  FBeam2TypeDataPayload *local_res20;
  FBeamParticleModifierPayloadData *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38 [2];
  
  pFVar5 = (FParticleBeam2EmitterInstance *)param_1->_padding_;
  if ((pFVar5 != (FParticleBeam2EmitterInstance *)0x0) && ((pFVar5->_padding_ & 0x100) != 0)) {
    pFVar6 = param_1->ParticleBase;
    local_res20 = (FBeam2TypeDataPayload *)0x0;
    local_38[0] = 0;
    local_40 = 0;
    local_48 = 0;
    local_50 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
    local_78 = (FBeamParticleModifierPayloadData *)0x0;
    local_70 = 0;
    local_res10[0] = *(undefined4 *)((longlong)&pFVar5->_padding_ + 4);
    (**(code **)(pFVar5->BeamTypeData->_padding_ + 0x3f0))
              (pFVar5->BeamTypeData,pFVar5,pFVar6,local_res10,&local_res20,local_38,&local_40,
               &local_48,&local_50,&local_58,&local_60,&local_68,&local_78,&local_70);
    local_res18[0] = param_1->Offset;
    ResolveSourceData(this,(FContext *)param_1,pFVar5,local_res20,(uchar *)pFVar6,local_res18,
                      *(int *)((longlong)&pFVar5->_padding_ + 4),true,local_78);
    dVar1 = (local_res20->SourcePoint).field0_0x0._s_0.Y;
    dVar2 = (local_res20->SourcePoint).field0_0x0._s_0.Z;
    dVar3 = (double)pFVar5->_padding_;
    dVar4 = (double)pFVar5->_padding_;
    (pFVar6->Location).field0_0x0._s_0.X =
         (local_res20->SourcePoint).field0_0x0._s_0.X - (double)pFVar5->_padding_;
    (pFVar6->Location).field0_0x0._s_0.Y = dVar1 - dVar3;
    (pFVar6->Location).field0_0x0._s_0.Z = dVar2 - dVar4;
    local_res20->Lock_Max_NumNoisePoints = 0;
    local_res20->StepSize = 0.0;
    local_res20->Steps = 0;
    local_res20->TravelRatio = 0.0;
    local_res20->TriangleCount = 0;
  }
  return;
}

// Update @ 14813cf80

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
UParticleModuleBeamSource::Update(UParticleModuleBeamSource *this,FUpdateContext *param_1)

{
  FParticleBeam2EmitterInstance *pFVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ushort *puVar5;
  UParticleModuleTypeDataBeam2 *pUVar6;
  uchar *puVar7;
  undefined4 local_res8 [2];
  FUpdateContext *local_res10;
  int local_res18 [2];
  FBeamParticleModifierPayloadData *local_res20;
  FBeam2TypeDataPayload *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  UParticleModuleTypeDataBeam2 *local_50;
  
  if ((((this->bLockSource == 0) || (this->bLockSourceTangent == 0)) ||
      (this->bLockSourceStength == 0)) &&
     ((pFVar1 = (FParticleBeam2EmitterInstance *)param_1->_padding_,
      pFVar1 != (FParticleBeam2EmitterInstance *)0x0 && ((pFVar1->_padding_ & 0x100) != 0)))) {
    pUVar6 = pFVar1->BeamTypeData;
    local_res18[0] = param_1->Offset;
    iVar4 = *(int *)((longlong)&pFVar1->_padding_ + 4) + -1;
    lVar2 = pFVar1->_padding_;
    lVar3 = pFVar1->_padding_;
    if (-1 < iVar4) {
      puVar5 = (ushort *)(pFVar1->_padding_ + (longlong)iVar4 * 2);
      local_res10 = param_1;
      local_50 = pUVar6;
      do {
        puVar7 = (uchar *)((ulonglong)((uint)*puVar5 * (int)lVar3) + lVar2);
        if ((*(uint *)(puVar7 + 0x6c) & 0x4000000) == 0) {
          local_res8[0] = *(undefined4 *)((longlong)&pFVar1->_padding_ + 4);
          local_98 = (FBeam2TypeDataPayload *)0x0;
          local_58 = 0;
          local_60 = 0;
          local_68 = 0;
          local_70 = 0;
          local_78 = 0;
          local_80 = 0;
          local_88 = 0;
          local_res20 = (FBeamParticleModifierPayloadData *)0x0;
          local_90 = 0;
          (**(code **)(pUVar6->_padding_ + 0x3f0))
                    (pUVar6,pFVar1,puVar7,local_res8,&local_98,&local_58,&local_60,&local_68,
                     &local_70,&local_78,&local_80,&local_88,&local_res20,&local_90);
          ResolveSourceData(this,(FContext *)local_res10,pFVar1,local_98,puVar7,local_res18,iVar4,
                            false,local_res20);
          pUVar6 = local_50;
        }
        puVar5 = puVar5 + -1;
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
    }
  }
  return;
}

// operator() @ 150524ba0

bool __thiscall
`UParticleModuleBeamSource::ResolveSourceData'::__l45::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  FName local_res10;
  FString local_28;
  void *local_18 [2];
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7259912687922972606>);
  if (bVar4) {
    (**(code **)(**(longlong **)this + 0x90))(*(longlong **)this,local_18);
    lVar6 = (**(code **)(**(longlong **)this + 0xd8))();
    if (lVar6 == 0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res10 = *(FName *)(lVar6 + 0x18);
      ::FName::ToString(&local_res10,&local_28);
    }
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7259912687922972606>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150524c71;
    }
  }
  bVar4 = false;
LAB_150524c71:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18[0] != (void *)0x0)) {
    FMemory::Free(local_18[0]);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150524de0

bool __thiscall
`UParticleModuleBeamSource::ResolveSourceData'::__l45::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  FName local_res10;
  FString local_28;
  void *local_18 [2];
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7259912687922972607>);
  if (bVar4) {
    (**(code **)(**(longlong **)this + 0x90))(*(longlong **)this,local_18);
    lVar6 = (**(code **)(**(longlong **)this + 0xd8))();
    if (lVar6 == 0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res10 = *(FName *)(lVar6 + 0x18);
      ::FName::ToString(&local_res10,&local_28);
    }
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7259912687922972607>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150524eb1;
    }
  }
  bVar4 = false;
LAB_150524eb1:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18[0] != (void *)0x0)) {
    FMemory::Free(local_18[0]);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150525020

bool __thiscall
`UParticleModuleBeamSource::ResolveSourceData'::__l45::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  FName local_res10;
  FString local_28;
  void *local_18 [2];
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7259912687922972608>);
  if (bVar4) {
    (**(code **)(**(longlong **)this + 0x90))(*(longlong **)this,local_18);
    lVar6 = (**(code **)(**(longlong **)this + 0xd8))();
    if (lVar6 == 0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res10 = *(FName *)(lVar6 + 0x18);
      ::FName::ToString(&local_res10,&local_28);
    }
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7259912687922972608>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1505250f1;
    }
  }
  bVar4 = false;
LAB_1505250f1:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18[0] != (void *)0x0)) {
    FMemory::Free(local_18[0]);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

