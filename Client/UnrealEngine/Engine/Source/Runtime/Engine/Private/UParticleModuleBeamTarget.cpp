// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 17

// StaticClass @ 1472f8b60

UClass * __cdecl UParticleModuleBeamTarget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleBeamTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleBeamTarget",
               &Z_Registration_Info_UClass_UParticleModuleBeamTarget.InnerSingleton,
               StaticRegisterNativesUParticleModuleBeamTarget,0x150,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UParticleModuleBeamTarget>,
               InternalVTableHelperCtorCaller<UParticleModuleBeamTarget>,local_res8,
               UParticleModuleBeamBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleBeamTarget.InnerSingleton;
}

// UParticleModuleBeamTarget @ 1472fca90

UParticleModuleBeamTarget * __thiscall
UParticleModuleBeamTarget::UParticleModuleBeamTarget
          (UParticleModuleBeamTarget *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleBeamTarget__6B_;
  (this->TargetName).ComparisonIndex = 0;
  (this->TargetName).Number = 0;
  (this->Target)._padding_ = 0;
  (this->Target)._padding_ = 0;
  *(undefined4 *)&(this->Target)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->Target)._padding_ + 4) = 0;
  (this->Target)._padding_ = 0;
  (this->Target).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Target).MaxValue = 0.0;
  (this->Target).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Target).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->Target).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Target).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Target).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->Target).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Target).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  (this->TargetTangent)._padding_ = 0;
  (this->TargetTangent)._padding_ = 0;
  *(undefined4 *)&(this->TargetTangent)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->TargetTangent)._padding_ + 4) = 0;
  (this->TargetTangent)._padding_ = 0;
  (this->TargetTangent).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->TargetTangent).MaxValue = 0.0;
  (this->TargetTangent).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->TargetTangent).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->TargetTangent).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->TargetTangent).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->TargetTangent).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->TargetTangent).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->TargetTangent).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  (this->TargetStrength)._padding_ = 0;
  (this->TargetStrength)._padding_ = 0;
  (this->TargetStrength)._padding_ = 0;
  *(undefined4 *)&(this->TargetStrength)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->TargetStrength)._padding_ + 4) = 0;
  (this->TargetStrength).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->TargetStrength).MinValue = 0.0;
  (this->TargetStrength).MaxValue = 0.0;
  return this;
}

// ~UParticleModuleBeamTarget @ 1472fda50

void __thiscall
UParticleModuleBeamTarget::~UParticleModuleBeamTarget(UParticleModuleBeamTarget *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleBeamTarget__6B_;
  pvVar1 = (void *)(this->TargetStrength)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->TargetTangent)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->Target)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModule__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147300480

UClass * __cdecl UParticleModuleBeamTarget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleBeamTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleBeamTarget",
               &Z_Registration_Info_UClass_UParticleModuleBeamTarget.InnerSingleton,
               StaticRegisterNativesUParticleModuleBeamTarget,0x150,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UParticleModuleBeamTarget>,
               InternalVTableHelperCtorCaller<UParticleModuleBeamTarget>,local_res8,
               UParticleModuleBeamBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleBeamTarget.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleBeamTarget @ 147301800

void __cdecl UParticleModuleBeamTarget::StaticRegisterNativesUParticleModuleBeamTarget(void)

{
  return;
}

// UParticleModuleBeamTarget @ 1480f57b0

UParticleModuleBeamTarget * __thiscall
UParticleModuleBeamTarget::UParticleModuleBeamTarget
          (UParticleModuleBeamTarget *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  FConstructorStatics FVar2;
  ulonglong uVar3;
  
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfc;
  this->_padding_ = (longlong)&___7UParticleModuleBeamTarget__6B_;
  (this->TargetName).ComparisonIndex = 0;
  (this->TargetName).Number = 0;
  (this->Target)._padding_ = 0;
  (this->Target)._padding_ = 0;
  *(undefined4 *)&(this->Target)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->Target)._padding_ + 4) = 0;
  (this->Target)._padding_ = 0;
  uVar3 = (ulonglong)_tls_index;
  (this->Target).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Target).MaxValue = 0.0;
  (this->Target).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Target).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->Target).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Target).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Target).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->Target).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Target).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  (this->TargetTangent)._padding_ = 0;
  (this->TargetTangent)._padding_ = 0;
  *(undefined4 *)&(this->TargetTangent)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->TargetTangent)._padding_ + 4) = 0;
  (this->TargetTangent)._padding_ = 0;
  (this->TargetTangent).MinValue = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->TargetTangent).MaxValue = 0.0;
  (this->TargetTangent).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->TargetTangent).MinValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->TargetTangent).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->TargetTangent).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->TargetTangent).MaxValueVec.field0_0x0._s_0.Y = (double)uVar1;
  (this->TargetTangent).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->TargetTangent).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  (this->TargetStrength)._padding_ = 0;
  (this->TargetStrength)._padding_ = 0;
  (this->TargetStrength)._padding_ = 0;
  *(undefined4 *)&(this->TargetStrength)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->TargetStrength)._padding_ + 4) = 0;
  (this->TargetStrength).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->TargetStrength).MinValue = 0.0;
  (this->TargetStrength).MaxValue = 0.0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar3 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::ConstructorStatics.NAME_None,L"None");
      _Init_thread_footer(&::_TSS0);
    }
  }
  (this->TargetMethod).Value = '\0';
  FVar2 = ::ConstructorStatics;
  this->bTargetAbsolute = 0;
  this->TargetName = FVar2.NAME_None;
  (this->TargetTangentMethod).Value = '\0';
  this->LockRadius = 10.0;
  return this;
}

// AutoPopulateInstanceProperties @ 1480fe4f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleModuleBeamTarget::AutoPopulateInstanceProperties
          (UParticleModuleBeamTarget *this,UParticleSystemComponent *param_1)

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
                         ,0x8e3,L""), bVar5)) {
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
      if (*(FName *)((pTVar2->AllocatorInstance).Data + lVar8) == this->TargetName) {
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
  FVar3 = this->TargetName;
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

// GetDataPointers @ 148111330

void __thiscall
UParticleModuleBeamTarget::GetDataPointers
          (UParticleModuleBeamTarget *this,FParticleEmitterInstance *param_1,uchar *param_2,
          int *param_3,FBeamParticleSourceTargetPayloadData **param_4)

{
  int iVar1;
  
  if ((((param_1 != (FParticleEmitterInstance *)0x0) && (param_1->bIsBeam != 0)) &&
      (param_1[1]._padding_ != 0)) && ((this->TargetMethod).Value == '\x03')) {
    iVar1 = *param_3;
    *param_3 = iVar1 + 4;
    *param_4 = (FBeamParticleSourceTargetPayloadData *)(param_2 + iVar1);
  }
  return;
}

// GetParticleSysParamsUtilized @ 1481181d0

/* WARNING: Removing unreachable block (ram,0x0001481182dd) */

void __thiscall
UParticleModuleBeamTarget::GetParticleSysParamsUtilized
          (UParticleModuleBeamTarget *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FString local_28;
  FString local_18;
  
  if ((this->TargetMethod).Value == '\x04') {
    ::FName::ToString(&this->TargetName,&local_18);
    ::FString::PrintfImpl(&local_28,L"BeamTarget : Actor: %s\n");
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

// InitializeDefaults @ 148121c00

/* WARNING: Type propagation algorithm not settling */

void __thiscall UParticleModuleBeamTarget::InitializeDefaults(UParticleModuleBeamTarget *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionVectorConstant *pUVar3;
  UDistributionFloatConstant *pUVar4;
  FName local_res8;
  FName local_res10;
  
  bVar1 = FRawDistributionVector::IsCreated(&this->Target);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionTarget");
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
    (this->Target).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
  }
  bVar1 = FRawDistributionVector::IsCreated(&this->TargetTangent);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res10,L"DistributionTargetTangent");
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
    (this->TargetTangent).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
  }
  bVar1 = FRawDistributionFloat::IsCreated(&this->TargetStrength);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionTargetStrength");
    pUVar4 = NewObject<UDistributionFloatConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    pUVar4->Constant = 25.0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->TargetStrength).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar4;
  }
  return;
}

// PostInitProperties @ 148125d80

/* WARNING: Type propagation algorithm not settling */

void __thiscall UParticleModuleBeamTarget::PostInitProperties(UParticleModuleBeamTarget *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionVectorConstant *pUVar3;
  UDistributionFloatConstant *pUVar4;
  FName local_res8;
  FName local_res10;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    bVar1 = FRawDistributionVector::IsCreated(&this->Target);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"DistributionTarget");
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
      (this->Target).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
    }
    bVar1 = FRawDistributionVector::IsCreated(&this->TargetTangent);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res10,L"DistributionTargetTangent");
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
      (this->TargetTangent).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
    }
    bVar1 = FRawDistributionFloat::IsCreated(&this->TargetStrength);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"DistributionTargetStrength");
      pUVar4 = NewObject<UDistributionFloatConstant>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      pUVar4->Constant = 25.0;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      (this->TargetStrength).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar4;
    }
  }
  return;
}

// ResolveTargetData @ 14812cd00

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
UParticleModuleBeamTarget::ResolveTargetData
          (UParticleModuleBeamTarget *this,FContext *param_1,FParticleBeam2EmitterInstance *param_2,
          FBeam2TypeDataPayload *param_3,uchar *param_4,int *param_5,int param_6,bool param_7,
          FBeamParticleModifierPayloadData *param_8)

{
  undefined8 uVar1;
  uchar uVar2;
  uchar uVar3;
  UParticleModuleTypeDataBeam2 *pUVar4;
  USceneComponent *pUVar5;
  FParticleEmitterInstance *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  bool bVar13;
  undefined1 uVar14;
  UObject *pUVar15;
  TTransform<double> *pTVar16;
  longlong lVar17;
  undefined8 *puVar18;
  TVector<double> *pTVar19;
  uint uVar20;
  int iVar21;
  IParticleEmitterInstanceOwner *pIVar22;
  longlong lVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar36;
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
  undefined4 uVar37;
  undefined4 uVar38;
  double dVar39;
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
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined4 uVar60;
  undefined4 uVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  double dVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  double dVar77;
  double dVar78;
  double dVar81;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  IParticleEmitterInstanceOwner *local_res18;
  IParticleEmitterInstanceOwner *local_248 [2];
  IParticleEmitterInstanceOwner *local_238;
  TVector<double>_u_0 local_230;
  TVector<double>_u_0 local_218;
  TVector<double>_u_0 local_200;
  TVector<double>_u_0 local_1e8;
  undefined1 local_1d0 [16];
  double local_1c0;
  TVector<double>_u_0 local_1b8 [2];
  double local_188;
  double dStack_180;
  undefined8 local_178;
  double local_170;
  double dStack_168;
  double local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined1 local_140 [16];
  double local_130;
  double local_128;
  double dStack_120;
  undefined8 local_118;
  undefined1 local_110 [16];
  double local_100;
  undefined1 local_f8 [16];
  TVector<double> local_d8;
  TVector<double> local_c0;
  TVector<double> local_a8 [5];
  
  if ((((param_2 != (FParticleBeam2EmitterInstance *)0x0) && ((param_2->_padding_ & 0x100) != 0)) &&
      (param_2->BeamTypeData != (UParticleModuleTypeDataBeam2 *)0x0)) &&
     ((this->TargetMethod).Value == '\x03')) {
    *param_5 = *param_5 + 4;
  }
  lVar23 = (longlong)param_6;
  if ((param_7) || (this->bLockTarget == 0)) {
    pUVar4 = param_2->BeamTypeData;
    uVar2 = (pUVar4->BeamMethod).Value;
    if (uVar2 == '\0') {
      pUVar15 = UParticleModule::FContext::GetDistributionData(param_1);
      fVar24 = FRawDistributionFloat::GetValue
                         (&pUVar4->Distance,*(float *)(param_4 + 0x90),pUVar15,(FRandomStream *)0x0)
      ;
      if ((float)((uint)fVar24 & __xmm_7fffffff7fffffff7fffffff7fffffff) < __real_38d1b717) {
        fVar24 = __real_3a83126f;
      }
      pTVar16 = UParticleModule::FContext::GetTransform(param_1);
      local_188 = ___xmm_00000000000000003ff0000000000000;
      dStack_180 = _UNK_150689518;
      local_178 = 0;
      auVar53 = *(undefined1 (*) [16])(pTVar16->Rotation).ZW.m128d_f64;
      dVar77 = ___xmm_00000000000000003ff0000000000000 * (pTVar16->Scale3D).XY.m128d_f64[0];
      dVar81 = _UNK_150689518 * (pTVar16->Scale3D).XY.m128d_f64[1];
      auVar72._0_8_ = (pTVar16->Scale3D).ZW.m128d_f64[0] * 0.0;
      auVar72._8_8_ = (pTVar16->Scale3D).ZW.m128d_f64[1] * 0.0;
      local_1b8[0]._0_16_ = *(undefined1 (*) [16])(pTVar16->Rotation).XY.m128d_f64;
      auVar62._8_4_ = SUB84(dVar81,0);
      auVar62._0_8_ = dVar77;
      uVar37 = (undefined4)((ulonglong)dVar81 >> 0x20);
      auVar62._12_4_ = uVar37;
      dVar12 = (pTVar16->Rotation).ZW.m128d_f64[1];
      dVar71 = auVar53._0_8_;
      auVar40 = blendpd(local_1b8[0]._0_16_,auVar53,2);
      auVar63._0_8_ = auVar62._8_8_ * local_1b8[0]._0_8_ - local_1b8[0]._8_8_ * dVar77;
      auVar63._8_8_ = auVar72._0_8_ * local_1b8[0]._8_8_ - dVar71 * dVar81;
      auVar26._8_4_ = SUB84(dVar81,0);
      auVar26._0_8_ = dVar77;
      auVar26._12_4_ = uVar37;
      auVar27 = blendpd(auVar26,auVar72,2);
      auVar28._0_8_ = auVar27._0_8_ * dVar71 - auVar40._0_8_ * auVar72._0_8_;
      auVar28._8_8_ = auVar27._8_8_ * auVar53._8_8_ - auVar40._8_8_ * auVar72._8_8_;
      auVar27 = *(undefined1 (*) [16])(pTVar16->Rotation).XY.m128d_f64;
      auVar40 = blendpd(auVar63,auVar28,2);
      dVar78 = auVar63._8_8_ + auVar63._8_8_;
      dVar39 = auVar28._0_8_ + auVar28._0_8_;
      uVar37 = (undefined4)((ulonglong)dVar39 >> 0x20);
      auVar64._0_8_ = auVar40._0_8_ + auVar40._0_8_;
      auVar64._8_8_ = auVar40._8_8_ + auVar40._8_8_;
      auVar51._8_4_ = SUB84(dVar39,0);
      auVar51._0_8_ = dVar78;
      auVar51._12_4_ = uVar37;
      auVar42._8_4_ = SUB84(dVar39,0);
      auVar42._0_8_ = dVar78;
      auVar42._12_4_ = uVar37;
      auVar43 = blendpd(auVar42,auVar64,2);
      auVar40 = blendpd(auVar27,auVar53,2);
      auVar52._0_8_ = auVar51._8_8_ * auVar27._0_8_ - auVar27._8_8_ * dVar78;
      auVar52._8_8_ = auVar64._0_8_ * auVar27._8_8_ - dVar71 * dVar39;
      auVar29._8_4_ = SUB84(auVar52._8_8_,0);
      auVar29._0_8_ = auVar52._0_8_;
      auVar29._12_4_ = (int)((ulonglong)auVar52._8_8_ >> 0x20);
      auVar44._0_8_ = auVar43._0_8_ * dVar71 - auVar40._0_8_ * auVar64._0_8_;
      auVar44._8_8_ = auVar43._8_8_ * auVar53._8_8_ - auVar40._8_8_ * auVar64._8_8_;
      auVar53 = blendpd(auVar52,auVar44,2);
      dVar71 = dVar39 * dVar12 + dVar81 + auVar44._0_8_;
      local_230._s_0.Z = auVar64._0_8_ * dVar12 + auVar72._0_8_ + auVar53._0_8_;
      local_230._8_4_ = SUB84(dVar71,0);
      local_230._s_0.X = dVar78 * dVar12 + dVar77 + auVar29._8_8_;
      local_230._12_4_ = (int)((ulonglong)dVar71 >> 0x20);
      UE::Math::TVector<double>::Normalize
                ((TVector<double> *)&local_230._s_0,__real_3e45798ee0000000);
      dVar39 = (double)fVar24;
      dVar71 = (param_3->SourcePoint).field0_0x0._s_0.Y;
      dVar78 = (param_3->SourcePoint).field0_0x0._s_0.Z;
      (param_3->TargetPoint).field0_0x0._s_0.X =
           dVar39 * local_230._s_0.X + (param_3->SourcePoint).field0_0x0._s_0.X;
      (param_3->TargetPoint).field0_0x0._s_0.Y = dVar39 * local_230._s_0.Y + dVar71;
      (param_3->TargetPoint).field0_0x0._s_0.Z = dVar39 * local_230._s_0.Z + dVar78;
    }
    else {
      uVar3 = (this->TargetMethod).Value;
      if (uVar3 == '\x01') {
        iVar21 = (param_2->UserSetTargetArray).ArrayNum;
        if (iVar21 < 1) goto LAB_14812d266;
        if (param_6 < iVar21) {
          if ((param_6 < 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar9 = (code *)swi(3);
            uVar14 = (*pcVar9)();
            return (bool)uVar14;
          }
          pFVar8 = (param_2->UserSetTargetArray).AllocatorInstance.Data;
          pFVar7 = pFVar8 + lVar23 * 0x18;
          dVar71 = *(double *)(pFVar7 + 8);
          (param_3->TargetPoint).field0_0x0._s_0.X = *(double *)pFVar7;
          (param_3->TargetPoint).field0_0x0._s_0.Y = dVar71;
          (param_3->TargetPoint).field0_0x0._s_0.Z = *(double *)(pFVar8 + lVar23 * 0x18 + 0x10);
        }
        else {
          pFVar7 = (param_2->UserSetTargetArray).AllocatorInstance.Data;
          dVar71 = *(double *)(pFVar7 + 8);
          (param_3->TargetPoint).field0_0x0._s_0.X = *(double *)pFVar7;
          (param_3->TargetPoint).field0_0x0._s_0.Y = dVar71;
          (param_3->TargetPoint).field0_0x0._s_0.Z = *(double *)(pFVar7 + 0x10);
        }
      }
      else {
        if (uVar3 == '\x03') {
          if ((uVar2 == '\x02') || (uVar2 == '\x01')) {
            if (param_2->TargetEmitter == (FParticleEmitterInstance *)0x0) {
              FParticleBeam2EmitterInstance::ResolveTarget(param_2);
            }
            uVar61 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
            uVar60 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
            uVar38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
            uVar37 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
            pFVar6 = param_2->TargetEmitter;
            if (pFVar6 != (FParticleEmitterInstance *)0x0) {
              uVar20 = this->LastSelectedParticleIndex;
              uVar25 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
              uVar36 = (undefined4)
                       ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
              if (pFVar6->ParticleIndices != (ushort *)0x0) {
                if (((uVar20 == 0xffffffff) ||
                    (lVar17 = (**(code **)(pFVar6->_padding_ + 0x110))(), lVar17 == 0)) ||
                   (__real_3f800000 < *(float *)(lVar17 + 0x90))) {
                  this->LastSelectedParticleIndex = this->LastSelectedParticleIndex + 1;
                  iVar21 = this->LastSelectedParticleIndex;
                  if (param_2->TargetEmitter->ActiveParticles <= iVar21) {
                    this->LastSelectedParticleIndex = 0;
                    iVar21 = 0;
                  }
                  uVar20 = (uint)param_2->TargetEmitter->ParticleIndices[iVar21];
                  if (iVar21 != -1) goto LAB_14812d09c;
                  pIVar22 = param_2->TargetEmitter->Component;
LAB_14812d0bf:
                  pTVar19 = (TVector<double> *)0x0;
                }
                else {
LAB_14812d09c:
                  pIVar22 = param_2->TargetEmitter->Component;
                  if ((int)uVar20 < 0) goto LAB_14812d0bf;
                  pTVar19 = (TVector<double> *)
                            (**(code **)(param_2->TargetEmitter->_padding_ + 0x110))();
                }
                pFVar6 = param_2->TargetEmitter;
                if (pTVar19 == (TVector<double> *)0x0) {
                  lVar17 = (**(code **)((longlong)*pFVar6->Component + 0x10))();
                  local_148 = *(undefined8 *)(lVar17 + 0x30);
                  uVar37 = *(undefined4 *)(lVar17 + 0x20);
                  uVar38 = *(undefined4 *)(lVar17 + 0x24);
                  uVar60 = *(undefined4 *)(lVar17 + 0x28);
                  uVar61 = *(undefined4 *)(lVar17 + 0x2c);
                  uVar25 = (undefined4)local_148;
                  uVar36 = (undefined4)((ulonglong)local_148 >> 0x20);
                  local_158 = uVar37;
                  uStack_154 = uVar38;
                  uStack_150 = uVar60;
                  uStack_14c = uVar61;
                }
                else {
                  dVar71 = (pFVar6->SimulationToWorld).M[3][0];
                  dVar78 = (pFVar6->SimulationToWorld).M[3][1];
                  dVar39 = (pFVar6->SimulationToWorld).M[3][2];
                  local_218._s_0.X = dVar71;
                  local_218._s_0.Y = dVar78;
                  local_218._s_0.Z = dVar39;
                  bVar13 = UE::Math::TVector<double>::ContainsNaN(pTVar19 + 1);
                  if ((((!bVar13) ||
                       (local_res18 = pIVar22,
                       bVar13 = `UParticleModuleBeamTarget::ResolveTargetData'::__l56::<lambda_1>::
                                operator()(&local_res18), bVar13)) &&
                      ((bVar13 = UE::Math::TVector<double>::ContainsNaN(pTVar19), !bVar13 ||
                       (local_238 = pIVar22,
                       bVar13 = `UParticleModuleBeamTarget::ResolveTargetData'::__l56::<lambda_2>::
                                operator()(&local_238), bVar13)))) &&
                     ((bVar13 = UE::Math::TVector<double>::ContainsNaN
                                          ((TVector<double> *)&local_218._s_0), !bVar13 ||
                      (local_248[0] = pIVar22,
                      bVar13 = `UParticleModuleBeamTarget::ResolveTargetData'::__l56::<lambda_3>::
                               operator()(local_248), bVar13)))) {
                    local_1c0 = dVar39 + pTVar19[1].field0_0x0._s_0.Z;
                    dVar78 = dVar78 + pTVar19[1].field0_0x0._s_0.Y;
                    auVar53._8_4_ = SUB84(dVar78,0);
                    auVar53._0_8_ = dVar71 + pTVar19[1].field0_0x0._s_0.X;
                    auVar53._12_4_ = (int)((ulonglong)dVar78 >> 0x20);
                    *(undefined1 (*) [16])&(param_3->TargetPoint).field0_0x0 = auVar53;
                    (param_3->TargetPoint).field0_0x0._s_0.Z = local_1c0;
                    goto LAB_14812d462;
                  }
                }
                *(undefined4 *)&(param_3->TargetPoint).field0_0x0 = uVar37;
                *(undefined4 *)((longlong)&(param_3->TargetPoint).field0_0x0 + 4) = uVar38;
                *(undefined4 *)((longlong)&(param_3->TargetPoint).field0_0x0 + 8) = uVar60;
                *(undefined4 *)((longlong)&(param_3->TargetPoint).field0_0x0 + 0xc) = uVar61;
                (param_3->TargetPoint).field0_0x0._s_0.Z = (double)CONCAT44(uVar36,uVar25);
                goto LAB_14812d462;
              }
            }
          }
LAB_14812d266:
          if (this->bTargetAbsolute != 0) {
            pUVar15 = UParticleModule::FContext::GetDistributionData(param_1);
            pTVar19 = FRawDistributionVector::GetValue
                                (&this->Target,&local_d8,*(float *)&param_2->_padding_,pUVar15,0,
                                 (FRandomStream *)0x0);
            dVar71 = (pTVar19->field0_0x0)._s_0.Y;
            (param_3->TargetPoint).field0_0x0._s_0.X = (pTVar19->field0_0x0)._s_0.X;
            (param_3->TargetPoint).field0_0x0._s_0.Y = dVar71;
            (param_3->TargetPoint).field0_0x0._s_0.Z = (pTVar19->field0_0x0)._s_0.Z;
            puVar18 = (undefined8 *)(**(code **)(*(longlong *)param_2->_padding_ + 0x60))();
            local_248[0] = (IParticleEmitterInstanceOwner *)*puVar18;
            iVar21 = *(int *)(puVar18 + 1);
            (param_3->TargetPoint).field0_0x0._s_0.X =
                 (param_3->TargetPoint).field0_0x0._s_0.X - (double)(int)local_248[0];
            (param_3->TargetPoint).field0_0x0._s_0.Y =
                 (param_3->TargetPoint).field0_0x0._s_0.Y -
                 (double)(int)((ulonglong)local_248[0] >> 0x20);
            (param_3->TargetPoint).field0_0x0._s_0.Z =
                 (param_3->TargetPoint).field0_0x0._s_0.Z - (double)iVar21;
            goto LAB_14812d462;
          }
          pTVar16 = UParticleModule::FContext::GetTransform(param_1);
          pUVar15 = UParticleModule::FContext::GetDistributionData(param_1);
          pTVar19 = FRawDistributionVector::GetValue
                              (&this->Target,&local_c0,*(float *)&param_2->_padding_,pUVar15,0,
                               (FRandomStream *)0x0);
          auVar53 = *(undefined1 (*) [16])(pTVar16->Rotation).ZW.m128d_f64;
          local_1b8[0]._0_16_ = *(undefined1 (*) [16])(pTVar16->Rotation).XY.m128d_f64;
          dVar12 = (pTVar16->Rotation).ZW.m128d_f64[1];
          dVar77 = (pTVar19->field0_0x0)._s_0.X * (pTVar16->Scale3D).XY.m128d_f64[0];
          dVar81 = (pTVar19->field0_0x0)._s_0.Y * (pTVar16->Scale3D).XY.m128d_f64[1];
          auVar79._0_8_ = (pTVar19->field0_0x0)._s_0.Z * (pTVar16->Scale3D).ZW.m128d_f64[0];
          auVar79._8_8_ = (pTVar16->Scale3D).ZW.m128d_f64[1] * 0.0;
          auVar73._8_4_ = SUB84(dVar81,0);
          auVar73._0_8_ = dVar77;
          uVar37 = (undefined4)((ulonglong)dVar81 >> 0x20);
          auVar73._12_4_ = uVar37;
          dVar71 = auVar53._0_8_;
          auVar41 = blendpd(local_1b8[0]._0_16_,auVar53,2);
          auVar74._0_8_ = auVar73._8_8_ * local_1b8[0]._0_8_ - local_1b8[0]._8_8_ * dVar77;
          auVar74._8_8_ = auVar79._0_8_ * local_1b8[0]._8_8_ - dVar71 * dVar81;
          auVar40._8_4_ = SUB84(dVar81,0);
          auVar40._0_8_ = dVar77;
          auVar40._12_4_ = uVar37;
          auVar27 = blendpd(auVar40,auVar79,2);
          auVar43._0_8_ = auVar27._0_8_ * dVar71 - auVar41._0_8_ * auVar79._0_8_;
          auVar43._8_8_ = auVar27._8_8_ * auVar53._8_8_ - auVar41._8_8_ * auVar79._8_8_;
          auVar27 = *(undefined1 (*) [16])(pTVar16->Rotation).XY.m128d_f64;
          auVar40 = blendpd(auVar74,auVar43,2);
          dVar78 = auVar74._8_8_ + auVar74._8_8_;
          dVar39 = auVar43._0_8_ + auVar43._0_8_;
          uVar37 = (undefined4)((ulonglong)dVar39 >> 0x20);
          auVar75._0_8_ = auVar40._0_8_ + auVar40._0_8_;
          auVar75._8_8_ = auVar40._8_8_ + auVar40._8_8_;
          auVar54._8_4_ = SUB84(dVar39,0);
          auVar54._0_8_ = dVar78;
          auVar54._12_4_ = uVar37;
          auVar45._8_4_ = SUB84(dVar39,0);
          auVar45._0_8_ = dVar78;
          auVar45._12_4_ = uVar37;
          auVar40 = blendpd(auVar45,auVar75,2);
          auVar55._0_8_ = auVar54._8_8_ * auVar27._0_8_ - auVar27._8_8_ * dVar78;
          auVar55._8_8_ = auVar75._0_8_ * auVar27._8_8_ - dVar71 * dVar39;
          auVar41._8_4_ = SUB84(auVar55._8_8_,0);
          auVar41._0_8_ = auVar55._0_8_;
          auVar41._12_4_ = (int)((ulonglong)auVar55._8_8_ >> 0x20);
          auVar27 = blendpd(auVar27,auVar53,2);
          auVar46._0_8_ = auVar40._0_8_ * dVar71 - auVar27._0_8_ * auVar75._0_8_;
          auVar46._8_8_ = auVar40._8_8_ * auVar53._8_8_ - auVar27._8_8_ * auVar75._8_8_;
          auVar53 = blendpd(auVar55,auVar46,2);
          dVar78 = dVar78 * dVar12 + dVar77 + auVar41._8_8_ + (pTVar16->Translation).XY.m128d_f64[0]
          ;
          dVar71 = dVar39 * dVar12 + dVar81 + auVar46._0_8_ + (pTVar16->Translation).XY.m128d_f64[1]
          ;
          uVar37 = SUB84(dVar71,0);
          uVar38 = (undefined4)((ulonglong)dVar71 >> 0x20);
          local_140._8_4_ = uVar37;
          local_140._0_8_ = dVar78;
          local_140._12_4_ = uVar38;
          dVar71 = auVar75._0_8_ * dVar12 + auVar79._0_8_ + auVar53._0_8_ +
                   (pTVar16->Translation).ZW.m128d_f64[0];
          auVar27._8_4_ = uVar37;
          auVar27._0_8_ = dVar78;
          auVar27._12_4_ = uVar38;
          *(undefined1 (*) [16])&(param_3->TargetPoint).field0_0x0 = auVar27;
          local_130 = dVar71;
        }
        else {
          if ((uVar3 != '\x04') || (this->TargetName == (FName)0x0)) goto LAB_14812d266;
          FParticleBeam2EmitterInstance::ResolveTarget(param_2);
          if (param_2->TargetActor == (AActor *)0x0) goto LAB_14812d266;
          pUVar5 = (param_2->TargetActor->RootComponent).field0_0x0.DebugPtr;
          if (pUVar5 == (USceneComponent *)0x0) {
            pTVar16 = &UE::Math::TTransform<double>::Identity;
          }
          else {
            pTVar16 = &pUVar5->ComponentToWorld;
          }
          local_170 = (pTVar16->Translation).XY.m128d_f64[0];
          dStack_168 = (pTVar16->Translation).XY.m128d_f64[1];
          dVar71 = (pTVar16->Translation).ZW.m128d_f64[0];
          (param_3->TargetPoint).field0_0x0._s_0.X = local_170;
          (param_3->TargetPoint).field0_0x0._s_0.Y = dStack_168;
          local_160 = dVar71;
        }
        (param_3->TargetPoint).field0_0x0._s_0.Z = dVar71;
      }
    }
LAB_14812d462:
    if (!param_7) goto LAB_14812d47a;
LAB_14812d488:
    uVar2 = (this->TargetTangentMethod).Value;
    if (uVar2 == '\0') {
      pTVar16 = UParticleModule::FContext::GetTransform(param_1);
      local_200._s_0.Z = 0.0;
      local_200._s_0.X = ___xmm_00000000000000003ff0000000000000;
      local_200._s_0.Y = _UNK_150689518;
      UE::Math::TTransform<double>::TransformVector
                (pTVar16,(TVector<double> *)&local_1e8._s_0,(TVector<double> *)&local_200._s_0);
      uVar37 = SUB84(local_1e8._s_0.Z,0);
      uVar38 = (undefined4)((ulonglong)local_1e8._16_8_ >> 0x20);
      (param_3->TargetTangent).field0_0x0._s_0.X = local_1e8._s_0.X;
      (param_3->TargetTangent).field0_0x0._s_0.Y = local_1e8._s_0.Y;
LAB_14812d808:
      (param_3->TargetTangent).field0_0x0._s_0.Z = (double)CONCAT44(uVar38,uVar37);
    }
    else if (uVar2 == '\x01') {
      iVar21 = (param_2->UserSetTargetTangentArray).ArrayNum;
      if (0 < iVar21) {
        if (param_6 < iVar21) {
          if ((param_6 < 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar9 = (code *)swi(3);
            uVar14 = (*pcVar9)();
            return (bool)uVar14;
          }
          pFVar8 = (param_2->UserSetTargetTangentArray).AllocatorInstance.Data;
          pFVar7 = pFVar8 + lVar23 * 0x18;
          dVar71 = *(double *)(pFVar7 + 8);
          (param_3->TargetTangent).field0_0x0._s_0.X = *(double *)pFVar7;
          (param_3->TargetTangent).field0_0x0._s_0.Y = dVar71;
          uVar1 = *(undefined8 *)(pFVar8 + lVar23 * 0x18 + 0x10);
          uVar37 = (undefined4)uVar1;
          uVar38 = (undefined4)((ulonglong)uVar1 >> 0x20);
        }
        else {
          pFVar7 = (param_2->UserSetTargetTangentArray).AllocatorInstance.Data;
          dVar71 = *(double *)(pFVar7 + 8);
          (param_3->TargetTangent).field0_0x0._s_0.X = *(double *)pFVar7;
          (param_3->TargetTangent).field0_0x0._s_0.Y = dVar71;
          uVar37 = (undefined4)*(undefined8 *)(pFVar7 + 0x10);
          uVar38 = (undefined4)((ulonglong)*(undefined8 *)(pFVar7 + 0x10) >> 0x20);
        }
        goto LAB_14812d808;
      }
LAB_14812d683:
      pUVar15 = UParticleModule::FContext::GetDistributionData(param_1);
      pTVar19 = FRawDistributionVector::GetValue
                          (&this->TargetTangent,(TVector<double> *)&local_1b8[0]._s_0,
                           *(float *)(param_4 + 0x90),pUVar15,0,(FRandomStream *)0x0);
      dVar71 = (pTVar19->field0_0x0)._s_0.Y;
      (param_3->TargetTangent).field0_0x0._s_0.X = (pTVar19->field0_0x0)._s_0.X;
      (param_3->TargetTangent).field0_0x0._s_0.Y = dVar71;
      (param_3->TargetTangent).field0_0x0._s_0.Z = (pTVar19->field0_0x0)._s_0.Z;
      if (this->bTargetAbsolute == 0) {
        pTVar16 = UParticleModule::FContext::GetTransform(param_1);
        auVar53 = *(undefined1 (*) [16])(pTVar16->Rotation).ZW.m128d_f64;
        dVar77 = (param_3->TargetTangent).field0_0x0._s_0.X * (pTVar16->Scale3D).XY.m128d_f64[0];
        dVar81 = (param_3->TargetTangent).field0_0x0._s_0.Y * (pTVar16->Scale3D).XY.m128d_f64[1];
        auVar80._0_8_ =
             (param_3->TargetTangent).field0_0x0._s_0.Z * (pTVar16->Scale3D).ZW.m128d_f64[0];
        auVar80._8_8_ = (pTVar16->Scale3D).ZW.m128d_f64[1] * 0.0;
        local_f8 = *(undefined1 (*) [16])(pTVar16->Rotation).XY.m128d_f64;
        auVar68._8_4_ = SUB84(dVar81,0);
        auVar68._0_8_ = dVar77;
        uVar37 = (undefined4)((ulonglong)dVar81 >> 0x20);
        auVar68._12_4_ = uVar37;
        dVar12 = (pTVar16->Rotation).ZW.m128d_f64[1];
        dVar71 = auVar53._0_8_;
        auVar40 = blendpd(local_f8,auVar53,2);
        auVar69._0_8_ = auVar68._8_8_ * local_f8._0_8_ - local_f8._8_8_ * dVar77;
        auVar69._8_8_ = auVar80._0_8_ * local_f8._8_8_ - dVar71 * dVar81;
        auVar33._8_4_ = SUB84(dVar81,0);
        auVar33._0_8_ = dVar77;
        auVar33._12_4_ = uVar37;
        auVar27 = blendpd(auVar33,auVar80,2);
        auVar34._0_8_ = auVar27._0_8_ * dVar71 - auVar40._0_8_ * auVar80._0_8_;
        auVar34._8_8_ = auVar27._8_8_ * auVar53._8_8_ - auVar40._8_8_ * auVar80._8_8_;
        auVar27 = *(undefined1 (*) [16])(pTVar16->Rotation).XY.m128d_f64;
        auVar40 = blendpd(auVar69,auVar34,2);
        dVar78 = auVar69._8_8_ + auVar69._8_8_;
        dVar39 = auVar34._0_8_ + auVar34._0_8_;
        uVar37 = (undefined4)((ulonglong)dVar39 >> 0x20);
        auVar70._0_8_ = auVar40._0_8_ + auVar40._0_8_;
        auVar70._8_8_ = auVar40._8_8_ + auVar40._8_8_;
        auVar58._8_4_ = SUB84(dVar39,0);
        auVar58._0_8_ = dVar78;
        auVar58._12_4_ = uVar37;
        auVar49._8_4_ = SUB84(dVar39,0);
        auVar49._0_8_ = dVar78;
        auVar49._12_4_ = uVar37;
        auVar40 = blendpd(auVar49,auVar70,2);
        auVar59._0_8_ = auVar58._8_8_ * auVar27._0_8_ - auVar27._8_8_ * dVar78;
        auVar59._8_8_ = auVar70._0_8_ * auVar27._8_8_ - dVar71 * dVar39;
        auVar27 = blendpd(auVar27,auVar53,2);
        auVar35._8_4_ = SUB84(auVar59._8_8_,0);
        auVar35._0_8_ = auVar59._0_8_;
        auVar35._12_4_ = (int)((ulonglong)auVar59._8_8_ >> 0x20);
        auVar50._0_8_ = auVar40._0_8_ * dVar71 - auVar27._0_8_ * auVar70._0_8_;
        auVar50._8_8_ = auVar40._8_8_ * auVar53._8_8_ - auVar27._8_8_ * auVar70._8_8_;
        dVar71 = dVar78 * dVar12 + dVar77 + auVar35._8_8_;
        dVar78 = dVar39 * dVar12 + dVar81 + auVar50._0_8_;
        uVar37 = SUB84(dVar78,0);
        uVar38 = (undefined4)((ulonglong)dVar78 >> 0x20);
        auVar53 = blendpd(auVar59,auVar50,2);
        local_1c0 = auVar70._0_8_ * dVar12 + auVar80._0_8_ + auVar53._0_8_;
        auVar11._8_4_ = uVar37;
        auVar11._0_8_ = dVar71;
        auVar11._12_4_ = uVar38;
        *(undefined1 (*) [16])&(param_3->TargetTangent).field0_0x0 = auVar11;
        (param_3->TargetTangent).field0_0x0._s_0.Z = local_1c0;
        local_1d0._8_4_ = uVar37;
        local_1d0._0_8_ = dVar71;
        local_1d0._12_4_ = uVar38;
      }
    }
    else {
      if (uVar2 == '\x02') {
        pUVar15 = UParticleModule::FContext::GetDistributionData(param_1);
        pTVar19 = FRawDistributionVector::GetValue
                            (&this->TargetTangent,local_a8,*(float *)(param_4 + 0x90),pUVar15,0,
                             (FRandomStream *)0x0);
        dVar71 = (pTVar19->field0_0x0)._s_0.Y;
        (param_3->TargetTangent).field0_0x0._s_0.X = (pTVar19->field0_0x0)._s_0.X;
        (param_3->TargetTangent).field0_0x0._s_0.Y = dVar71;
        uVar1 = *(undefined8 *)((longlong)&pTVar19->field0_0x0 + 0x10);
        uVar37 = (undefined4)uVar1;
        uVar38 = (undefined4)((ulonglong)uVar1 >> 0x20);
        goto LAB_14812d808;
      }
      if (uVar2 != '\x03') goto LAB_14812d683;
      pTVar16 = UParticleModule::FContext::GetTransform(param_1);
      local_128 = ___xmm_00000000000000003ff0000000000000;
      dStack_120 = _UNK_150689518;
      auVar53 = *(undefined1 (*) [16])(pTVar16->Rotation).ZW.m128d_f64;
      dVar77 = ___xmm_00000000000000003ff0000000000000 * (pTVar16->Scale3D).XY.m128d_f64[0];
      dVar81 = _UNK_150689518 * (pTVar16->Scale3D).XY.m128d_f64[1];
      auVar76._0_8_ = (pTVar16->Scale3D).ZW.m128d_f64[0] * 0.0;
      auVar76._8_8_ = (pTVar16->Scale3D).ZW.m128d_f64[1] * 0.0;
      local_f8 = *(undefined1 (*) [16])(pTVar16->Rotation).XY.m128d_f64;
      auVar65._8_4_ = SUB84(dVar81,0);
      auVar65._0_8_ = dVar77;
      uVar37 = (undefined4)((ulonglong)dVar81 >> 0x20);
      auVar65._12_4_ = uVar37;
      dVar12 = (pTVar16->Rotation).ZW.m128d_f64[1];
      dVar71 = auVar53._0_8_;
      auVar40 = blendpd(local_f8,auVar53,2);
      auVar66._0_8_ = auVar65._8_8_ * local_f8._0_8_ - local_f8._8_8_ * dVar77;
      auVar66._8_8_ = auVar76._0_8_ * local_f8._8_8_ - dVar71 * dVar81;
      auVar30._8_4_ = SUB84(dVar81,0);
      auVar30._0_8_ = dVar77;
      auVar30._12_4_ = uVar37;
      local_118 = 0;
      auVar27 = blendpd(auVar30,auVar76,2);
      auVar31._0_8_ = auVar27._0_8_ * dVar71 - auVar40._0_8_ * auVar76._0_8_;
      auVar31._8_8_ = auVar27._8_8_ * auVar53._8_8_ - auVar40._8_8_ * auVar76._8_8_;
      auVar27 = *(undefined1 (*) [16])(pTVar16->Rotation).XY.m128d_f64;
      auVar40 = blendpd(auVar66,auVar31,2);
      dVar78 = auVar66._8_8_ + auVar66._8_8_;
      dVar39 = auVar31._0_8_ + auVar31._0_8_;
      uVar37 = (undefined4)((ulonglong)dVar39 >> 0x20);
      auVar67._0_8_ = auVar40._0_8_ + auVar40._0_8_;
      auVar67._8_8_ = auVar40._8_8_ + auVar40._8_8_;
      auVar56._8_4_ = SUB84(dVar39,0);
      auVar56._0_8_ = dVar78;
      auVar56._12_4_ = uVar37;
      auVar47._8_4_ = SUB84(dVar39,0);
      auVar47._0_8_ = dVar78;
      auVar47._12_4_ = uVar37;
      auVar40 = blendpd(auVar47,auVar67,2);
      auVar57._0_8_ = auVar56._8_8_ * auVar27._0_8_ - auVar27._8_8_ * dVar78;
      auVar57._8_8_ = auVar67._0_8_ * auVar27._8_8_ - dVar71 * dVar39;
      auVar27 = blendpd(auVar27,auVar53,2);
      auVar32._8_4_ = SUB84(auVar57._8_8_,0);
      auVar32._0_8_ = auVar57._0_8_;
      auVar32._12_4_ = (int)((ulonglong)auVar57._8_8_ >> 0x20);
      auVar48._0_8_ = auVar40._0_8_ * dVar71 - auVar27._0_8_ * auVar67._0_8_;
      auVar48._8_8_ = auVar40._8_8_ * auVar53._8_8_ - auVar27._8_8_ * auVar67._8_8_;
      dVar71 = dVar78 * dVar12 + dVar77 + auVar32._8_8_;
      dVar78 = dVar39 * dVar12 + dVar81 + auVar48._0_8_;
      uVar37 = SUB84(dVar78,0);
      uVar38 = (undefined4)((ulonglong)dVar78 >> 0x20);
      auVar53 = blendpd(auVar57,auVar48,2);
      local_100 = auVar67._0_8_ * dVar12 + auVar76._0_8_ + auVar53._0_8_;
      auVar10._8_4_ = uVar37;
      auVar10._0_8_ = dVar71;
      auVar10._12_4_ = uVar38;
      *(undefined1 (*) [16])&(param_3->TargetTangent).field0_0x0 = auVar10;
      (param_3->TargetTangent).field0_0x0._s_0.Z = local_100;
      local_110._8_4_ = uVar37;
      local_110._0_8_ = dVar71;
      local_110._12_4_ = uVar38;
    }
    if (param_7) goto LAB_14812d821;
  }
  else {
LAB_14812d47a:
    if (this->bLockTargetTangent == 0) goto LAB_14812d488;
  }
  if (this->bLockTargetStength != 0) {
    return true;
  }
LAB_14812d821:
  if (((this->TargetTangentMethod).Value == '\x01') &&
     (iVar21 = (param_2->UserSetTargetStrengthArray).ArrayNum, 0 < iVar21)) {
    if (param_6 < iVar21) {
      if ((param_6 < 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar9 = (code *)swi(3);
        uVar14 = (*pcVar9)();
        return (bool)uVar14;
      }
      fVar24 = *(float *)((param_2->UserSetTargetStrengthArray).AllocatorInstance.Data + lVar23 * 4)
      ;
    }
    else {
      fVar24 = *(float *)(param_2->UserSetTargetStrengthArray).AllocatorInstance.Data;
    }
  }
  else {
    pUVar15 = UParticleModule::FContext::GetDistributionData(param_1);
    fVar24 = FRawDistributionFloat::GetValue
                       (&this->TargetStrength,*(float *)(param_4 + 0x90),pUVar15,
                        (FRandomStream *)0x0);
  }
  param_3->TargetStrength = fVar24;
  return true;
}

// Spawn @ 148135680

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
UParticleModuleBeamTarget::Spawn(UParticleModuleBeamTarget *this,FSpawnContext *param_1)

{
  FParticleBeam2EmitterInstance *pFVar1;
  FBaseParticle *pFVar2;
  undefined4 local_res10 [2];
  int local_res18 [2];
  FBeamParticleModifierPayloadData *local_res20;
  FBeam2TypeDataPayload *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38 [2];
  
  pFVar1 = (FParticleBeam2EmitterInstance *)param_1->_padding_;
  if ((pFVar1 != (FParticleBeam2EmitterInstance *)0x0) && ((pFVar1->_padding_ & 0x100) != 0)) {
    pFVar2 = param_1->ParticleBase;
    local_78 = (FBeam2TypeDataPayload *)0x0;
    local_38[0] = 0;
    local_40 = 0;
    local_48 = 0;
    local_50 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
    local_70 = 0;
    local_res20 = (FBeamParticleModifierPayloadData *)0x0;
    local_res10[0] = *(undefined4 *)((longlong)&pFVar1->_padding_ + 4);
    (**(code **)(pFVar1->BeamTypeData->_padding_ + 0x3f0))
              (pFVar1->BeamTypeData,pFVar1,pFVar2,local_res10,&local_78,local_38,&local_40,&local_48
               ,&local_50,&local_58,&local_60,&local_68,&local_70,&local_res20);
    local_res18[0] = param_1->Offset;
    ResolveTargetData(this,(FContext *)param_1,pFVar1,local_78,(uchar *)pFVar2,local_res18,
                      *(int *)((longlong)&pFVar1->_padding_ + 4),true,local_res20);
  }
  return;
}

// Update @ 14813d180

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
UParticleModuleBeamTarget::Update(UParticleModuleBeamTarget *this,FUpdateContext *param_1)

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
  
  if ((((this->bLockTarget == 0) || (this->bLockTargetTangent == 0)) ||
      (this->bLockTargetStength == 0)) &&
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
          local_90 = 0;
          local_res20 = (FBeamParticleModifierPayloadData *)0x0;
          (**(code **)(pUVar6->_padding_ + 0x3f0))
                    (pUVar6,pFVar1,puVar7,local_res8,&local_98,&local_58,&local_60,&local_68,
                     &local_70,&local_78,&local_80,&local_88,&local_90,&local_res20);
          ResolveTargetData(this,(FContext *)local_res10,pFVar1,local_98,puVar7,local_res18,iVar4,
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

// operator() @ 150524cc0

bool __thiscall
`UParticleModuleBeamTarget::ResolveTargetData'::__l56::<lambda_1>::operator()(void *this)

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
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7259912687922973072>);
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
                      (&bGEnsureHasExecuted<7259912687922973072>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150524d91;
    }
  }
  bVar4 = false;
LAB_150524d91:
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

// operator() @ 150524f00

bool __thiscall
`UParticleModuleBeamTarget::ResolveTargetData'::__l56::<lambda_2>::operator()(void *this)

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
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7259912687922973073>);
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
                      (&bGEnsureHasExecuted<7259912687922973073>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150524fd1;
    }
  }
  bVar4 = false;
LAB_150524fd1:
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

// operator() @ 150525140

bool __thiscall
`UParticleModuleBeamTarget::ResolveTargetData'::__l56::<lambda_3>::operator()(void *this)

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
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7259912687922973074>);
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
                      (&bGEnsureHasExecuted<7259912687922973074>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150525211;
    }
  }
  bVar4 = false;
LAB_150525211:
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

