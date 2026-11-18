// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 17

// StaticClass @ 1472f8150

UClass * __cdecl UParticleModuleBeamModifier::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleBeamModifier.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleBeamModifier",
               &Z_Registration_Info_UClass_UParticleModuleBeamModifier.InnerSingleton,
               StaticRegisterNativesUParticleModuleBeamModifier,0x138,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleBeamModifier>,
               InternalVTableHelperCtorCaller<UParticleModuleBeamModifier>,local_res8,
               UParticleModuleBeamBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleBeamModifier.InnerSingleton;
}

// UParticleModuleBeamModifier @ 1472fc6c0

UParticleModuleBeamModifier * __thiscall
UParticleModuleBeamModifier::UParticleModuleBeamModifier
          (UParticleModuleBeamModifier *this,FVTableHelper *param_1)

{
  FBeamModifierOptions *pFVar1;
  undefined8 uVar2;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleBeamModifier__6B_;
  pFVar1->bModify = 0;
  pFVar1->bLock = 0;
  pFVar1->bScale = 0;
  (this->Position)._padding_ = 0;
  (this->Position)._padding_ = 0;
  *(undefined4 *)&(this->Position)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->Position)._padding_ + 4) = 0;
  (this->Position)._padding_ = 0;
  (this->Position).MinValue = 0.0;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Position).MaxValue = 0.0;
  (this->Position).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Position).MinValueVec.field0_0x0._s_0.Y = (double)uVar2;
  (this->Position).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Position).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Position).MaxValueVec.field0_0x0._s_0.Y = (double)uVar2;
  (this->Position).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Position).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  pFVar1->bModify = 0;
  pFVar1->bLock = 0;
  pFVar1->bScale = 0;
  (this->Tangent)._padding_ = 0;
  (this->Tangent)._padding_ = 0;
  *(undefined4 *)&(this->Tangent)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->Tangent)._padding_ + 4) = 0;
  (this->Tangent)._padding_ = 0;
  (this->Tangent).MinValue = 0.0;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Tangent).MaxValue = 0.0;
  (this->Tangent).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Tangent).MinValueVec.field0_0x0._s_0.Y = (double)uVar2;
  (this->Tangent).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Tangent).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Tangent).MaxValueVec.field0_0x0._s_0.Y = (double)uVar2;
  (this->Tangent).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Tangent).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  pFVar1->bModify = 0;
  pFVar1->bLock = 0;
  pFVar1->bScale = 0;
  (this->Strength)._padding_ = 0;
  (this->Strength)._padding_ = 0;
  (this->Strength)._padding_ = 0;
  *(undefined4 *)&(this->Strength)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->Strength)._padding_ + 4) = 0;
  (this->Strength).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->Strength).MinValue = 0.0;
  (this->Strength).MaxValue = 0.0;
  return this;
}

// ~UParticleModuleBeamModifier @ 1472fd900

void __thiscall
UParticleModuleBeamModifier::~UParticleModuleBeamModifier(UParticleModuleBeamModifier *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleBeamModifier__6B_;
  pvVar1 = (void *)(this->Strength)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->Tangent)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->Position)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModule__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147300240

UClass * __cdecl UParticleModuleBeamModifier::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleBeamModifier.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleBeamModifier",
               &Z_Registration_Info_UClass_UParticleModuleBeamModifier.InnerSingleton,
               StaticRegisterNativesUParticleModuleBeamModifier,0x138,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleBeamModifier>,
               InternalVTableHelperCtorCaller<UParticleModuleBeamModifier>,local_res8,
               UParticleModuleBeamBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleBeamModifier.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleBeamModifier @ 1473017d0

void __cdecl UParticleModuleBeamModifier::StaticRegisterNativesUParticleModuleBeamModifier(void)

{
  return;
}

// UParticleModuleBeamModifier @ 1480f5320

UParticleModuleBeamModifier * __thiscall
UParticleModuleBeamModifier::UParticleModuleBeamModifier
          (UParticleModuleBeamModifier *this,FObjectInitializer *param_1)

{
  FBeamModifierOptions *pFVar1;
  undefined8 uVar2;
  
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  pFVar1->bModify = 0;
  pFVar1->bLock = 0;
  pFVar1->bScale = 0;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfc;
  this->_padding_ = (longlong)&___7UParticleModuleBeamModifier__6B_;
  (this->Position)._padding_ = 0;
  (this->Position)._padding_ = 0;
  *(undefined4 *)&(this->Position)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->Position)._padding_ + 4) = 0;
  (this->Position)._padding_ = 0;
  (this->Position).MinValue = 0.0;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Position).MaxValue = 0.0;
  (this->Position).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Position).MinValueVec.field0_0x0._s_0.Y = (double)uVar2;
  (this->Position).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Position).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Position).MaxValueVec.field0_0x0._s_0.Y = (double)uVar2;
  (this->Position).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Position).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  pFVar1->bModify = 0;
  pFVar1->bLock = 0;
  pFVar1->bScale = 0;
  (this->Tangent)._padding_ = 0;
  (this->Tangent)._padding_ = 0;
  *(undefined4 *)&(this->Tangent)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->Tangent)._padding_ + 4) = 0;
  (this->Tangent)._padding_ = 0;
  (this->Tangent).MinValue = 0.0;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Tangent).MaxValue = 0.0;
  (this->Tangent).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Tangent).MinValueVec.field0_0x0._s_0.Y = (double)uVar2;
  (this->Tangent).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Tangent).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Tangent).MaxValueVec.field0_0x0._s_0.Y = (double)uVar2;
  (this->Tangent).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Tangent).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  pFVar1->bModify = 0;
  pFVar1->bLock = 0;
  pFVar1->bScale = 0;
  (this->Strength)._padding_ = 0;
  (this->Strength)._padding_ = 0;
  (this->Strength)._padding_ = 0;
  *(undefined4 *)&(this->Strength)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->Strength)._padding_ + 4) = 0;
  (this->Strength).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->Strength).MinValue = 0.0;
  (this->Strength).MaxValue = 0.0;
  (this->ModifierType).Value = '\0';
  return this;
}

// AddModuleCurvesToEditor @ 1480fc7d0

bool __thiscall
UParticleModuleBeamModifier::AddModuleCurvesToEditor
          (UParticleModuleBeamModifier *this,UInterpCurveEdSetup *param_1,
          TArray<FCurveEdEntry_const_*,TSizedDefaultAllocator<32>_> *param_2)

{
  return false;
}

// AutoPopulateInstanceProperties @ 1480fe280

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UParticleModuleBeamModifier::AutoPopulateInstanceProperties
          (UParticleModuleBeamModifier *this,UParticleSystemComponent *param_1)

{
  return;
}

// GetCurveObjects @ 148110be0

void __thiscall
UParticleModuleBeamModifier::GetCurveObjects
          (UParticleModuleBeamModifier *this,
          TArray<FParticleCurvePair,TSizedDefaultAllocator<32>_> *param_1)

{
  UDistributionVector *pUVar1;
  FScriptContainerElement *pFVar2;
  UDistributionFloat *pUVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  FString local_48;
  FString local_38;
  FString local_28;
  
  uVar6 = param_1->ArrayNum;
  if (uVar6 == param_1->ArrayMax) {
    uVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  pFVar10 = (FScriptContainerElement *)0x0;
  param_1->ArrayNum = uVar6 + 1;
  uVar9 = 0;
  if ((int)uVar6 < (int)(uVar6 + 1)) {
    uVar9 = ~uVar6 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar8 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x18;
  if (pFVar8 == (FScriptContainerElement *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewCurve",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleBeamModules.cpp"
                       ,0x4c2,L"");
    pFVar8 = pFVar10;
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar8->field_0x0)->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    *(undefined8 *)&pFVar8[8].field_0x0 = 0;
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar8[0x10].field_0x0)->AllocatorInstance).
    Data = (FScriptContainerElement *)0x0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (this->Position).Distribution.field0_0x0.DebugPtr,
     pUVar1 != (UDistributionVector *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(TObjectPtr<UDistributionVector>_u_0 *)(pFVar8 + 0x10) = (this->Position).Distribution.field0_0x0
  ;
  pFVar7 = (FScriptContainerElement *)::FString::FString(&local_48,L"Position");
  if (pFVar8 != pFVar7) {
    pFVar2 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar8->field_0x0)->AllocatorInstance
             ).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar8->field_0x0)->AllocatorInstance).Data =
         (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar7->field_0x0)->AllocatorInstance).
         Data;
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar7->field_0x0)->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    *(int *)&pFVar8[8].field_0x0 = *(int *)&pFVar7[8].field_0x0;
    *(int *)&pFVar8[0xc].field_0x0 = *(int *)&pFVar7[0xc].field_0x0;
    *(undefined8 *)&pFVar7[8].field_0x0 = 0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  uVar6 = param_1->ArrayNum;
  if (uVar6 == param_1->ArrayMax) {
    uVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = uVar6 + 1;
  uVar9 = 0;
  if ((int)uVar6 < (int)(uVar6 + 1)) {
    uVar9 = ~uVar6 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar8 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x18;
  if (pFVar8 == (FScriptContainerElement *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewCurve",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleBeamModules.cpp"
                       ,0x4c6,L"");
    pFVar8 = pFVar10;
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar8->field_0x0)->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    *(undefined8 *)&pFVar8[8].field_0x0 = 0;
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar8[0x10].field_0x0)->AllocatorInstance).
    Data = (FScriptContainerElement *)0x0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (this->Tangent).Distribution.field0_0x0.DebugPtr,
     pUVar1 != (UDistributionVector *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(TObjectPtr<UDistributionVector>_u_0 *)(pFVar8 + 0x10) = (this->Tangent).Distribution.field0_0x0;
  pFVar7 = (FScriptContainerElement *)::FString::FString(&local_38,L"Tangent");
  if (pFVar8 != pFVar7) {
    pFVar2 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar8->field_0x0)->AllocatorInstance
             ).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar8->field_0x0)->AllocatorInstance).Data =
         (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar7->field_0x0)->AllocatorInstance).
         Data;
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar7->field_0x0)->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    *(int *)&pFVar8[8].field_0x0 = *(int *)&pFVar7[8].field_0x0;
    *(int *)&pFVar8[0xc].field_0x0 = *(int *)&pFVar7[0xc].field_0x0;
    *(undefined8 *)&pFVar7[8].field_0x0 = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  uVar6 = param_1->ArrayNum;
  if (uVar6 == param_1->ArrayMax) {
    uVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = uVar6 + 1;
  uVar9 = 0;
  if ((int)uVar6 < (int)(uVar6 + 1)) {
    uVar9 = ~uVar6 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar8 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x18;
  if (pFVar8 == (FScriptContainerElement *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewCurve",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleBeamModules.cpp"
                       ,0x4ca,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar8->field_0x0)->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    *(undefined8 *)&pFVar8[8].field_0x0 = 0;
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar8[0x10].field_0x0)->AllocatorInstance).
    Data = (FScriptContainerElement *)0x0;
    pFVar10 = pFVar8;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 = (this->Strength).Distribution.field0_0x0.DebugPtr,
     pUVar3 != (UDistributionFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  *(TObjectPtr<UDistributionFloat>_u_0 *)(pFVar10 + 0x10) = (this->Strength).Distribution.field0_0x0
  ;
  pFVar8 = (FScriptContainerElement *)::FString::FString(&local_28,L"Strength");
  if (pFVar10 != pFVar8) {
    pFVar7 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar10->field_0x0)->
             AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar10->field_0x0)->AllocatorInstance).Data =
         (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar8->field_0x0)->AllocatorInstance).
         Data;
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar8->field_0x0)->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    *(int *)&pFVar10[8].field_0x0 = *(int *)&pFVar8[8].field_0x0;
    *(int *)&pFVar10[0xc].field_0x0 = *(int *)&pFVar8[0xc].field_0x0;
    *(undefined8 *)&pFVar8[8].field_0x0 = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// GetDataPointerOffsets @ 148111070

void __thiscall
UParticleModuleBeamModifier::GetDataPointerOffsets
          (UParticleModuleBeamModifier *this,FParticleEmitterInstance *param_1,uchar *param_2,
          int *param_3,int *param_4,int *param_5,int *param_6)

{
  if ((param_1 != (FParticleEmitterInstance *)0x0) && (param_1->bIsBeam != 0)) {
    *param_4 = param_1->TypeDataOffset;
    *param_5 = param_1[1].TypeDataInstanceOffset;
    *param_6 = (int)param_1[1].LightVolumetricScatteringIntensity;
  }
  return;
}

// GetDataPointers @ 148111270

void __thiscall
UParticleModuleBeamModifier::GetDataPointers
          (UParticleModuleBeamModifier *this,FParticleEmitterInstance *param_1,uchar *param_2,
          int *param_3,FBeam2TypeDataPayload **param_4,FBeamParticleModifierPayloadData **param_5,
          FBeamParticleModifierPayloadData **param_6)

{
  longlong lVar1;
  longlong lVar2;
  FBeamParticleModifierPayloadData *pFVar3;
  
  if ((param_1 != (FParticleEmitterInstance *)0x0) && (param_1->bIsBeam != 0)) {
    lVar1._0_4_ = param_1[1].CurrentLODLevelIndex;
    lVar1._4_4_ = param_1[1].TypeDataOffset;
    if (lVar1 == 0) {
      pFVar3 = (FBeamParticleModifierPayloadData *)0x0;
    }
    else {
      pFVar3 = (FBeamParticleModifierPayloadData *)(param_2 + param_1[1].TypeDataInstanceOffset);
    }
    *param_5 = pFVar3;
    lVar2._0_4_ = param_1[1].DynamicParameterDataOffset;
    lVar2._4_4_ = param_1[1].LightDataOffset;
    if (lVar2 != 0) {
      *param_6 = (FBeamParticleModifierPayloadData *)
                 (param_2 + (int)param_1[1].LightVolumetricScatteringIntensity);
      return;
    }
    *param_6 = (FBeamParticleModifierPayloadData *)0x0;
  }
  return;
}

// GetParticleSysParamsUtilized @ 148118090

void __thiscall
UParticleModuleBeamModifier::GetParticleSysParamsUtilized
          (UParticleModuleBeamModifier *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// InitializeDefaults @ 1481216f0

/* WARNING: Type propagation algorithm not settling */

void __thiscall UParticleModuleBeamModifier::InitializeDefaults(UParticleModuleBeamModifier *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionVectorConstant *pUVar3;
  UDistributionFloatConstant *pUVar4;
  FName local_res8;
  FName local_res10;
  
  bVar1 = FRawDistributionVector::IsCreated(&this->Position);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionPosition");
    pUVar3 = NewObject<UDistributionVectorConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    (pUVar3->Constant).field0_0x0._s_0.X = 0.0;
    (pUVar3->Constant).field0_0x0._s_0.Y = 0.0;
    (pUVar3->Constant).field0_0x0._s_0.Z = 0.0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDistributionVectorConstant *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->Position).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
  }
  bVar1 = FRawDistributionVector::IsCreated(&this->Tangent);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res10,L"DistributionTangent");
    pUVar3 = NewObject<UDistributionVectorConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    (pUVar3->Constant).field0_0x0._s_0.X = 0.0;
    (pUVar3->Constant).field0_0x0._s_0.Y = 0.0;
    (pUVar3->Constant).field0_0x0._s_0.Z = 0.0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDistributionVectorConstant *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->Tangent).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
  }
  bVar1 = FRawDistributionFloat::IsCreated(&this->Strength);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionStrength");
    pUVar4 = NewObject<UDistributionFloatConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    pUVar4->Constant = 0.0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->Strength).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar4;
  }
  return;
}

// PostInitProperties @ 148125890

/* WARNING: Type propagation algorithm not settling */

void __thiscall UParticleModuleBeamModifier::PostInitProperties(UParticleModuleBeamModifier *this)

{
  FName *pFVar1;
  UDistributionVectorConstant *pUVar2;
  UDistributionFloatConstant *pUVar3;
  FName local_res8;
  FName local_res10;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    pFVar1 = ::FName::FName(&local_res8,L"DistributionPosition");
    pUVar2 = NewObject<UDistributionVectorConstant>
                       ((UObject *)this,*pFVar1,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    (pUVar2->Constant).field0_0x0._s_0.X = 0.0;
    (pUVar2->Constant).field0_0x0._s_0.Y = 0.0;
    (pUVar2->Constant).field0_0x0._s_0.Z = 0.0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 != (UDistributionVectorConstant *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->Position).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar2;
    pFVar1 = ::FName::FName(&local_res10,L"DistributionTangent");
    pUVar2 = NewObject<UDistributionVectorConstant>
                       ((UObject *)this,*pFVar1,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    (pUVar2->Constant).field0_0x0._s_0.X = 0.0;
    (pUVar2->Constant).field0_0x0._s_0.Y = 0.0;
    (pUVar2->Constant).field0_0x0._s_0.Z = 0.0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 != (UDistributionVectorConstant *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->Tangent).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar2;
    pFVar1 = ::FName::FName(&local_res8,L"DistributionStrength");
    pUVar3 = NewObject<UDistributionFloatConstant>
                       ((UObject *)this,*pFVar1,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    pUVar3->Constant = 0.0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->Strength).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
  }
  return;
}

// RequiredBytes @ 14812a1d0

uint __thiscall
UParticleModuleBeamModifier::RequiredBytes
          (UParticleModuleBeamModifier *this,UParticleModuleTypeDataBase *param_1)

{
  return 0x40;
}

// Spawn @ 148134fd0

void __thiscall
UParticleModuleBeamModifier::Spawn(UParticleModuleBeamModifier *this,FSpawnContext *param_1)

{
  longlong lVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  uint *puVar5;
  UObject *pUVar6;
  TVector<double> *pTVar7;
  uint uVar8;
  uint *puVar9;
  float fVar10;
  TVector<double> local_38;
  TVector<double> local_20;
  
  lVar1 = param_1->_padding_;
  if (lVar1 != 0) {
    if (((*(byte *)(lVar1 + 0x161) & 1) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Owner->bIsBeam",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleBeamModules.cpp"
                           ,0x445,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    puVar5 = (uint *)0x0;
    puVar9 = puVar5;
    if ((*(byte *)(lVar1 + 0x161) & 1) != 0) {
      if (*(longlong *)(lVar1 + 0x2a0) != 0) {
        puVar5 = (uint *)((longlong)&(param_1->ParticleBase->OldLocation).field0_0x0 +
                         (longlong)*(int *)(lVar1 + 0x2a8));
      }
      puVar9 = (uint *)0x0;
      if (*(longlong *)(lVar1 + 0x2b0) != 0) {
        puVar9 = (uint *)((longlong)&(param_1->ParticleBase->OldLocation).field0_0x0 +
                         (longlong)*(int *)(lVar1 + 0x2b8));
      }
    }
    if ((this->ModifierType).Value == '\0') {
      puVar9 = puVar5;
    }
    if (puVar9 != (uint *)0x0) {
      uVar8 = (*puVar9 ^ (this->PositionOptions).bModify) & 1 ^ *puVar9;
      *puVar9 = uVar8;
      if ((this->PositionOptions).bModify != 0) {
        pUVar6 = UParticleModule::FContext::GetDistributionData((FContext *)param_1);
        pTVar7 = FRawDistributionVector::GetValue
                           (&this->Position,&local_38,*(float *)(lVar1 + 0x1a0),pUVar6,0,
                            (FRandomStream *)0x0);
        dVar3 = (pTVar7->field0_0x0)._s_0.Y;
        *(double *)(puVar9 + 2) = (pTVar7->field0_0x0)._s_0.X;
        *(double *)(puVar9 + 4) = dVar3;
        *(double *)(puVar9 + 6) = (pTVar7->field0_0x0)._s_0.Z;
        uVar8 = (*puVar9 ^ (uint)this->PositionOptions) & 2 ^ *puVar9;
        *puVar9 = uVar8;
      }
      uVar8 = ((int)this->TangentOptions << 2 ^ uVar8) & 4 ^ uVar8;
      *puVar9 = uVar8;
      if ((this->TangentOptions).bModify != 0) {
        pUVar6 = UParticleModule::FContext::GetDistributionData((FContext *)param_1);
        pTVar7 = FRawDistributionVector::GetValue
                           (&this->Tangent,&local_20,*(float *)(lVar1 + 0x1a0),pUVar6,0,
                            (FRandomStream *)0x0);
        dVar3 = (pTVar7->field0_0x0)._s_0.Y;
        *(double *)(puVar9 + 8) = (pTVar7->field0_0x0)._s_0.X;
        *(double *)(puVar9 + 10) = dVar3;
        *(double *)(puVar9 + 0xc) = (pTVar7->field0_0x0)._s_0.Z;
        uVar8 = ((int)this->TangentOptions << 2 ^ *puVar9) & 8 ^ *puVar9;
        *puVar9 = uVar8;
      }
      *puVar9 = ((int)this->StrengthOptions << 4 ^ uVar8) & 0x10 ^ uVar8;
      if ((this->StrengthOptions).bModify != 0) {
        pUVar6 = UParticleModule::FContext::GetDistributionData((FContext *)param_1);
        fVar10 = FRawDistributionFloat::GetValue
                           (&this->Strength,*(float *)(lVar1 + 0x1a0),pUVar6,(FRandomStream *)0x0);
        puVar9[0xe] = (uint)fVar10;
        *puVar9 = *puVar9 ^ ((int)this->StrengthOptions << 4 ^ *puVar9) & 0x20;
      }
    }
  }
  return;
}

// Update @ 14813c8e0

void __thiscall
UParticleModuleBeamModifier::Update(UParticleModuleBeamModifier *this,FUpdateContext *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  int iVar6;
  uint *puVar7;
  UObject *pUVar8;
  TVector<double> *pTVar9;
  longlong lVar10;
  uint uVar11;
  uint *puVar12;
  longlong lVar13;
  float fVar14;
  TVector<double> local_48;
  
  lVar2 = param_1->_padding_;
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x161) & 1) != 0)) {
    iVar6 = *(int *)(lVar2 + 0x18c) + -1;
    iVar1 = *(int *)(lVar2 + 0x188);
    lVar3 = *(longlong *)(lVar2 + 0x170);
    lVar4 = *(longlong *)(lVar2 + 0x168);
    lVar13 = (longlong)iVar6;
    if (-1 < iVar6) {
      do {
        lVar10 = (ulonglong)((uint)*(ushort *)(lVar3 + lVar13 * 2) * iVar1) + lVar4;
        if ((*(uint *)(lVar10 + 0x6c) & 0x4000000) == 0) {
          puVar7 = (uint *)0x0;
          puVar12 = (uint *)0x0;
          if ((*(byte *)(lVar2 + 0x161) & 1) != 0) {
            if (*(longlong *)(lVar2 + 0x2a0) != 0) {
              puVar7 = (uint *)(*(int *)(lVar2 + 0x2a8) + lVar10);
            }
            if (*(longlong *)(lVar2 + 0x2b0) != 0) {
              puVar12 = (uint *)(*(int *)(lVar2 + 0x2b8) + lVar10);
            }
          }
          if ((this->ModifierType).Value == '\0') {
            puVar12 = puVar7;
          }
          if (puVar12 != (uint *)0x0) {
            uVar11 = (*puVar12 ^ (this->PositionOptions).bModify) & 1 ^ *puVar12;
            *puVar12 = uVar11;
            if (((this->PositionOptions).bModify != 0) && ((this->PositionOptions).bLock == 0)) {
              pUVar8 = UParticleModule::FContext::GetDistributionData((FContext *)param_1);
              pTVar9 = FRawDistributionVector::GetValue
                                 (&this->Position,&local_48,*(float *)(lVar2 + 0x1a0),pUVar8,0,
                                  (FRandomStream *)0x0);
              dVar5 = (pTVar9->field0_0x0)._s_0.Y;
              *(double *)(puVar12 + 2) = (pTVar9->field0_0x0)._s_0.X;
              *(double *)(puVar12 + 4) = dVar5;
              *(double *)(puVar12 + 6) = (pTVar9->field0_0x0)._s_0.Z;
              uVar11 = (*puVar12 ^ (uint)this->PositionOptions) & 2 ^ *puVar12;
              *puVar12 = uVar11;
            }
            uVar11 = ((int)this->TangentOptions << 2 ^ uVar11) & 4 ^ uVar11;
            *puVar12 = uVar11;
            if (((this->TangentOptions).bModify != 0) && ((this->TangentOptions).bLock == 0)) {
              pUVar8 = UParticleModule::FContext::GetDistributionData((FContext *)param_1);
              pTVar9 = FRawDistributionVector::GetValue
                                 (&this->Tangent,&local_48,*(float *)(lVar2 + 0x1a0),pUVar8,0,
                                  (FRandomStream *)0x0);
              dVar5 = (pTVar9->field0_0x0)._s_0.Y;
              *(double *)(puVar12 + 8) = (pTVar9->field0_0x0)._s_0.X;
              *(double *)(puVar12 + 10) = dVar5;
              *(double *)(puVar12 + 0xc) = (pTVar9->field0_0x0)._s_0.Z;
              uVar11 = ((int)this->TangentOptions << 2 ^ *puVar12) & 8 ^ *puVar12;
              *puVar12 = uVar11;
            }
            *puVar12 = ((int)this->StrengthOptions << 4 ^ uVar11) & 0x10 ^ uVar11;
            if ((this->StrengthOptions).bModify == 1 && (this->StrengthOptions).bLock == 0) {
              pUVar8 = UParticleModule::FContext::GetDistributionData((FContext *)param_1);
              fVar14 = FRawDistributionFloat::GetValue
                                 (&this->Strength,*(float *)(lVar2 + 0x1a0),pUVar8,
                                  (FRandomStream *)0x0);
              puVar12[0xe] = (uint)fVar14;
              *puVar12 = *puVar12 ^ ((int)this->StrengthOptions << 4 ^ *puVar12) & 0x20;
            }
          }
        }
        lVar13 = lVar13 + -1;
      } while (-1 < lVar13);
    }
  }
  return;
}

