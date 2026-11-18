// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// StaticClass @ 147314720

UClass * __cdecl UParticleModuleTrailSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleTrailSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleTrailSource",
               &Z_Registration_Info_UClass_UParticleModuleTrailSource.InnerSingleton,
               StaticRegisterNativesUParticleModuleTrailSource,0x90,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UParticleModuleTrailSource>,
               InternalVTableHelperCtorCaller<UParticleModuleTrailSource>,local_res8,
               UParticleModuleTrailBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleTrailSource.InnerSingleton;
}

// UParticleModuleTrailSource @ 147318cb0

UParticleModuleTrailSource * __thiscall
UParticleModuleTrailSource::UParticleModuleTrailSource
          (UParticleModuleTrailSource *this,FVTableHelper *param_1)

{
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleTrailSource__6B_;
  (this->SourceName).ComparisonIndex = 0;
  (this->SourceName).Number = 0;
  (this->SourceStrength)._padding_ = 0;
  (this->SourceStrength)._padding_ = 0;
  (this->SourceStrength)._padding_ = 0;
  *(undefined4 *)&(this->SourceStrength)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->SourceStrength)._padding_ + 4) = 0;
  (this->SourceStrength).MinValue = 0.0;
  (this->SourceStrength).MaxValue = 0.0;
  (this->SourceStrength).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->SourceOffsetDefaults).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceOffsetDefaults).ArrayNum = 0;
  (this->SourceOffsetDefaults).ArrayMax = 0;
  return this;
}

// ~UParticleModuleTrailSource @ 1473197b0

void __thiscall
UParticleModuleTrailSource::~UParticleModuleTrailSource(UParticleModuleTrailSource *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UParticleModuleTrailSource__6B_;
  pFVar1 = (this->SourceOffsetDefaults).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = (void *)(this->SourceStrength)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  this->_padding_ = (longlong)&___7UParticleModuleTrailBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14731bd70

UClass * __cdecl UParticleModuleTrailSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleTrailSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleTrailSource",
               &Z_Registration_Info_UClass_UParticleModuleTrailSource.InnerSingleton,
               StaticRegisterNativesUParticleModuleTrailSource,0x90,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UParticleModuleTrailSource>,
               InternalVTableHelperCtorCaller<UParticleModuleTrailSource>,local_res8,
               UParticleModuleTrailBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleTrailSource.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleTrailSource @ 14731d010

void __cdecl UParticleModuleTrailSource::StaticRegisterNativesUParticleModuleTrailSource(void)

{
  return;
}

// UParticleModuleTrailSource @ 1481c8570

UParticleModuleTrailSource * __thiscall
UParticleModuleTrailSource::UParticleModuleTrailSource
          (UParticleModuleTrailSource *this,FObjectInitializer *param_1)

{
  FConstructorStatics FVar1;
  ulonglong uVar2;
  
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfc;
  uVar2 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7UParticleModuleTrailSource__6B_;
  (this->SourceName).ComparisonIndex = 0;
  (this->SourceName).Number = 0;
  (this->SourceStrength)._padding_ = 0;
  (this->SourceStrength)._padding_ = 0;
  (this->SourceStrength)._padding_ = 0;
  *(undefined4 *)&(this->SourceStrength)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->SourceStrength)._padding_ + 4) = 0;
  (this->SourceStrength).MinValue = 0.0;
  (this->SourceStrength).MaxValue = 0.0;
  (this->SourceStrength).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->SourceOffsetDefaults).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceOffsetDefaults).ArrayNum = 0;
  (this->SourceOffsetDefaults).ArrayMax = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar2 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::ConstructorStatics.NAME_None,L"None");
      _Init_thread_footer(&::_TSS0);
    }
  }
  (this->SourceMethod).Value = '\0';
  FVar1 = ::ConstructorStatics;
  this->bInheritRotation = 0;
  this->SourceName = FVar1.NAME_None;
  (this->SelectionMethod).Value = '\x01';
  return this;
}

// AutoPopulateInstanceProperties @ 1481d5140

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleModuleTrailSource::AutoPopulateInstanceProperties
          (UParticleModuleTrailSource *this,UParticleSystemComponent *param_1)

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
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrailModules.cpp"
                         ,0x76,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((this->SourceMethod).Value == '\x02') {
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
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
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
    (param_1->InstanceParameters).ArrayNum = uVar7 + 1;
    lVar8 = (longlong)(int)uVar7 * 0xe0;
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
  }
  return;
}

// GetParticleSysParamsUtilized @ 1481fd580

/* WARNING: Removing unreachable block (ram,0x0001481fd68d) */

void __thiscall
UParticleModuleTrailSource::GetParticleSysParamsUtilized
          (UParticleModuleTrailSource *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FString local_28;
  FString local_18;
  
  if ((this->SourceMethod).Value == '\x02') {
    ::FName::ToString(&this->SourceName,&local_18);
    ::FString::PrintfImpl(&local_28,L"TrailSource: Actor: %s\n");
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

// InitializeDefaults @ 148205170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UParticleModuleTrailSource::InitializeDefaults(UParticleModuleTrailSource *this)

{
  FName FVar1;
  bool bVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UDistributionFloat *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8 [2];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  bVar2 = FRawDistributionFloat::IsCreated(&this->SourceStrength);
  if (!bVar2) {
    pFVar3 = ::FName::FName(local_a8,L"DistributionSourceStrength");
    FVar1 = *pFVar3;
    if (FVar1 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar4 = Z_Construct_UClass_UDistributionFloatConstant_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar4);
    local_98._24_4_ = RF_NoFlags;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_98._8_8_ = this;
    local_98._16_8_ = FVar1;
    pUVar5 = (UDistributionFloat *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar6 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    *(undefined4 *)&pUVar5[1]._padding_ = 0x42c80000;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->SourceStrength).Distribution.field0_0x0.DebugPtr = pUVar5;
  }
  return;
}

// PostInitProperties @ 14820ae10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UParticleModuleTrailSource::PostInitProperties(UParticleModuleTrailSource *this)

{
  FName FVar1;
  bool bVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UDistributionFloat *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8 [2];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    bVar2 = FRawDistributionFloat::IsCreated(&this->SourceStrength);
    if (!bVar2) {
      pFVar3 = ::FName::FName(local_a8,L"DistributionSourceStrength");
      FVar1 = *pFVar3;
      if (FVar1 == (FName)0x0) {
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)this,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
      }
      pUVar4 = Z_Construct_UClass_UDistributionFloatConstant_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_98,pUVar4);
      local_98._24_4_ = RF_NoFlags;
      local_98._40_8_ = (UObject *)0x0;
      local_98[0x20] = false;
      local_98._48_8_ = (FObjectInstancingGraph *)0x0;
      local_98._56_8_ = (UPackage *)0x0;
      local_98._8_8_ = this;
      local_98._16_8_ = FVar1;
      pUVar5 = (UDistributionFloat *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
      if (local_98._64_8_ != 0) {
        plVar6 = (longlong *)(local_98 + 0x50);
        if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
          plVar6 = (longlong *)local_98._104_8_;
        }
        (**(code **)(*plVar6 + 0x10))();
      }
      *(undefined4 *)&pUVar5[1]._padding_ = 0x42c80000;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      (this->SourceStrength).Distribution.field0_0x0.DebugPtr = pUVar5;
    }
  }
  return;
}

// ResolveSourceOffset @ 1482134f0

bool __thiscall
UParticleModuleTrailSource::ResolveSourceOffset
          (UParticleModuleTrailSource *this,int param_1,FParticleEmitterInstance *param_2,
          TVector<double> *param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  undefined1 uVar6;
  
  if ((this->SourceOffsetDefaults).ArrayNum <= param_1) {
    return false;
  }
  if (param_1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  pFVar2 = (this->SourceOffsetDefaults).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)param_1 * 0x18;
  dVar4 = *(double *)(pFVar1 + 8);
  (param_3->field0_0x0)._s_0.X = *(double *)pFVar1;
  (param_3->field0_0x0)._s_0.Y = dVar4;
  (param_3->field0_0x0)._s_0.Z = *(double *)(pFVar2 + (longlong)param_1 * 0x18 + 0x10);
  return true;
}

