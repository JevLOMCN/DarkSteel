// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 147315c00

UClass * __cdecl UParticleSpriteEmitter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleSpriteEmitter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleSpriteEmitter",
               &Z_Registration_Info_UClass_UParticleSpriteEmitter.InnerSingleton,
               StaticRegisterNativesUParticleSpriteEmitter,0x1d0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UParticleSpriteEmitter>,
               InternalVTableHelperCtorCaller<UParticleSpriteEmitter>,local_res8,
               UParticleEmitter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleSpriteEmitter.InnerSingleton;
}

// UParticleSpriteEmitter @ 1473193a0

UParticleSpriteEmitter * __thiscall
UParticleSpriteEmitter::UParticleSpriteEmitter(UParticleSpriteEmitter *this,FVTableHelper *param_1)

{
  UParticleEmitter::UParticleEmitter((UParticleEmitter *)this,param_1);
  *(undefined ***)this = &___7UParticleSpriteEmitter__6B_;
  return this;
}

// ~UParticleSpriteEmitter @ 147319ca0

void __thiscall UParticleSpriteEmitter::~UParticleSpriteEmitter(UParticleSpriteEmitter *this)

{
  *(undefined ***)this = &___7UParticleSpriteEmitter__6B_;
  UParticleEmitter::~UParticleEmitter((UParticleEmitter *)this);
  return;
}

// GetPrivateStaticClass @ 14731cc70

UClass * __cdecl UParticleSpriteEmitter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleSpriteEmitter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleSpriteEmitter",
               &Z_Registration_Info_UClass_UParticleSpriteEmitter.InnerSingleton,
               StaticRegisterNativesUParticleSpriteEmitter,0x1d0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UParticleSpriteEmitter>,
               InternalVTableHelperCtorCaller<UParticleSpriteEmitter>,local_res8,
               UParticleEmitter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleSpriteEmitter.InnerSingleton;
}

// StaticRegisterNativesUParticleSpriteEmitter @ 14731d150

void __cdecl UParticleSpriteEmitter::StaticRegisterNativesUParticleSpriteEmitter(void)

{
  return;
}

// UParticleSpriteEmitter @ 1480f5af0

UParticleSpriteEmitter * __thiscall
UParticleSpriteEmitter::UParticleSpriteEmitter
          (UParticleSpriteEmitter *this,FObjectInitializer *param_1)

{
  UParticleEmitter::UParticleEmitter((UParticleEmitter *)this,param_1);
  *(undefined ***)this = &___7UParticleSpriteEmitter__6B_;
  return this;
}

// CreateInstance @ 148104f60

FParticleEmitterInstance * __thiscall
UParticleSpriteEmitter::CreateInstance
          (UParticleSpriteEmitter *this,IParticleEmitterInstanceOwner *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  FParticleEmitterInstance *pFVar4;
  longlong lVar5;
  
  if (((this->field_0x37 & 0x40) != 0) || (*(int *)&this->field_0x48 == 0)) {
    return (FParticleEmitterInstance *)0x0;
  }
  if (*(int *)&this->field_0x48 < 1) {
    lVar5 = 0;
  }
  else {
    lVar5 = **(longlong **)&this->field_0x40;
    if (lVar5 != 0) goto LAB_148104fd4;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("LODLevel",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitter.cpp"
                     ,0x4c1,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FParticleEmitterInstance *)(*pcVar2)();
    return pFVar4;
  }
LAB_148104fd4:
  plVar1 = *(longlong **)(lVar5 + 0x48);
  if (plVar1 == (longlong *)0x0) {
    pFVar4 = ::operator_new(0x280);
    if (pFVar4 == (FParticleEmitterInstance *)0x0) {
      pFVar4 = (FParticleEmitterInstance *)0x0;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Instance",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitter.cpp"
                         ,0x4cb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FParticleEmitterInstance *)(*pcVar2)();
        return pFVar4;
      }
    }
    else {
      FParticleEmitterInstance::FParticleEmitterInstance(pFVar4,param_1);
      pFVar4->_padding_ = (longlong)&___7FParticleSpriteEmitterInstance__6B_;
    }
    (**(code **)(pFVar4->_padding_ + 8))(pFVar4,this);
  }
  else {
    pFVar4 = (FParticleEmitterInstance *)(**(code **)(*plVar1 + 0x3a8))(plVar1,this,param_1);
  }
  if (pFVar4 != (FParticleEmitterInstance *)0x0) {
    pFVar4->CurrentLODLevelIndex = 0;
    if ((*(int *)&this->field_0x48 < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FParticleEmitterInstance *)(*pcVar2)();
      return pFVar4;
    }
    pFVar4->CurrentLODLevel = (UParticleLODLevel *)**(undefined8 **)&this->field_0x40;
    (**(code **)(pFVar4->_padding_ + 0x10))(pFVar4);
  }
  return pFVar4;
}

// PostLoad @ 1481267c0

void __thiscall UParticleSpriteEmitter::PostLoad(UParticleSpriteEmitter *this)

{
  longlong lVar1;
  UObject *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  UParticleEmitter::PostLoad((UParticleEmitter *)this);
  uVar5 = 0;
  if (0 < *(int *)&this->field_0x48) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < *(int *)&this->field_0x48) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)(lVar6 + *(longlong *)&this->field_0x40);
      if (((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x30), lVar1 != 0)) &&
         (this_00 = *(UObject **)(lVar1 + 0x30), this_00 != (UObject *)0x0)) {
        UObject::ConditionalPostLoad(this_00);
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < *(int *)&this->field_0x48);
  }
  return;
}

// SetToSensibleDefaults @ 1481311a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UParticleSpriteEmitter::SetToSensibleDefaults(UParticleSpriteEmitter *this)

{
  longlong lVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  UObject *pUVar11;
  longlong *plVar12;
  int iVar13;
  ForAnyElementType *pFVar14;
  undefined1 auStack_348 [32];
  UObject **local_328;
  FScriptContainerElement *local_320;
  longlong local_318;
  longlong local_310;
  undefined8 local_308;
  UObject *local_2f8;
  UObject *local_2f0;
  UObject *local_2e8;
  UObject *local_2e0;
  longlong local_2d8;
  undefined1 local_2c8 [128];
  undefined1 local_248 [128];
  undefined1 local_1c8 [128];
  undefined1 local_148 [128];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_348;
  if (*(int *)&this->field_0x48 < 1) {
    local_328 = (UObject **)0x0;
    local_320 = (FScriptContainerElement *)(longlong)*(int *)&this->field_0x48;
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
  lVar1 = **(longlong **)&this->field_0x40;
  *(undefined1 *)(*(longlong *)(lVar1 + 0x50) + 0x2a) = 1;
  lVar2 = *(longlong *)(lVar1 + 0x50);
  if (*(longlong *)(lVar2 + 0x60) != 0) {
    pUVar9 = Z_Construct_UClass_UDistributionFloatConstant_NoRegister();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)(lVar2 + 0x60),pUVar9);
    if ((bVar5) && (*(longlong *)(lVar2 + 0x60) != 0)) {
      *(undefined4 *)(*(longlong *)(lVar2 + 0x60) + 0x38) = 0x41a00000;
    }
  }
  pUVar10 = *(UObject **)&this->field_0x20;
  FObjectInitializer::AssertIfInConstructor
            (pUVar10,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar9 = Z_Construct_UClass_UParticleModuleLifetime_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_2c8,pUVar9);
  local_2c8._8_8_ = pUVar10;
  pUVar10 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_2c8);
  if (local_2c8._64_8_ != 0) {
    plVar12 = (longlong *)(local_2c8 + 0x50);
    if ((longlong *)local_2c8._104_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_2c8._104_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (*(longlong *)&pUVar10[2].field_0x8 != 0) {
    pUVar9 = Z_Construct_UClass_UDistributionFloatUniform_NoRegister();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&pUVar10[2].field_0x8,pUVar9);
    if ((bVar5) && (lVar2 = *(longlong *)&pUVar10[2].field_0x8, lVar2 != 0)) {
      *(byte *)(lVar2 + 0x30) = *(byte *)(lVar2 + 0x30) | 2;
      *(undefined4 *)(lVar2 + 0x38) = 0x3f800000;
      *(undefined4 *)(lVar2 + 0x3c) = 0x3f800000;
    }
  }
  pFVar14 = (ForAnyElementType *)(lVar1 + 0x38);
  pUVar10[1].field_0x2 = 1;
  local_2f8 = pUVar10;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(pUVar10);
  }
  pFVar3 = pFVar14->Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_2f8) &&
     ((FScriptContainerElement *)&local_2f8 < pFVar3 + (longlong)*(int *)(lVar1 + 0x44) * 8)) {
    local_310 = (longlong)*(int *)(lVar1 + 0x40);
    local_308 = 8;
    local_328 = &local_2f8;
    local_320 = pFVar3;
    local_318 = (longlong)*(int *)(lVar1 + 0x44);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)(lVar1 + 0x40);
  if (iVar6 == *(int *)(lVar1 + 0x44)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar14,(int *)(lVar1 + 0x44));
  }
  *(int *)(lVar1 + 0x40) = iVar6 + 1;
  *(UObject **)(pFVar14->Data + (longlong)iVar6 * 8) = local_2f8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_2f8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_2f8);
  }
  pUVar10 = *(UObject **)&this->field_0x20;
  FObjectInitializer::AssertIfInConstructor
            (pUVar10,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar9 = Z_Construct_UClass_UParticleModuleSize_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_248,pUVar9);
  local_248._8_8_ = pUVar10;
  pUVar10 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_248);
  if (local_248._64_8_ != 0) {
    plVar12 = (longlong *)(local_248 + 0x50);
    if ((longlong *)local_248._104_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_248._104_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (*(longlong *)&pUVar10[3].field_0x10 != 0) {
    pUVar9 = Z_Construct_UClass_UDistributionVectorUniform_NoRegister();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&pUVar10[3].field_0x10,pUVar9);
    if ((bVar5) && (lVar2 = *(longlong *)&pUVar10[3].field_0x10, lVar2 != 0)) {
      *(undefined8 *)(lVar2 + 0x50) = 0x4039000000000000;
      *(undefined8 *)(lVar2 + 0x58) = 0x4039000000000000;
      *(undefined8 *)(lVar2 + 0x60) = 0x4039000000000000;
      *(undefined8 *)(lVar2 + 0x38) = 0x4039000000000000;
      *(undefined8 *)(lVar2 + 0x40) = 0x4039000000000000;
      *(undefined8 *)(lVar2 + 0x48) = 0x4039000000000000;
      *(byte *)(lVar2 + 0x30) = *(byte *)(lVar2 + 0x30) | 2;
    }
  }
  pUVar10[1].field_0x2 = 1;
  local_2f0 = pUVar10;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(pUVar10);
  }
  pFVar3 = pFVar14->Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_2f0) &&
     ((FScriptContainerElement *)&local_2f0 < pFVar3 + (longlong)*(int *)(lVar1 + 0x44) * 8)) {
    local_310 = (longlong)*(int *)(lVar1 + 0x40);
    local_308 = 8;
    local_328 = &local_2f0;
    local_320 = pFVar3;
    local_318 = (longlong)*(int *)(lVar1 + 0x44);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)(lVar1 + 0x40);
  if (iVar6 == *(int *)(lVar1 + 0x44)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar14,(int *)(lVar1 + 0x44));
  }
  *(int *)(lVar1 + 0x40) = iVar6 + 1;
  *(UObject **)(pFVar14->Data + (longlong)iVar6 * 8) = local_2f0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_2f0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_2f0);
  }
  pUVar10 = *(UObject **)&this->field_0x20;
  FObjectInitializer::AssertIfInConstructor
            (pUVar10,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar9 = Z_Construct_UClass_UParticleModuleVelocity_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1c8,pUVar9);
  local_1c8._8_8_ = pUVar10;
  pUVar10 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
  if (local_1c8._64_8_ != 0) {
    plVar12 = (longlong *)(local_1c8 + 0x50);
    if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_1c8._104_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (*(longlong *)&pUVar10[3].field_0x18 != 0) {
    pUVar9 = Z_Construct_UClass_UDistributionVectorUniform_NoRegister();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&pUVar10[3].field_0x18,pUVar9);
    if ((bVar5) && (lVar2 = *(longlong *)&pUVar10[3].field_0x18, lVar2 != 0)) {
      *(undefined8 *)(lVar2 + 0x50) = 0xc024000000000000;
      *(undefined8 *)(lVar2 + 0x58) = 0xc024000000000000;
      *(undefined8 *)(lVar2 + 0x60) = 0x4049000000000000;
      *(undefined8 *)(lVar2 + 0x38) = 0x4024000000000000;
      *(undefined8 *)(lVar2 + 0x40) = 0x4024000000000000;
      *(undefined8 *)(lVar2 + 0x48) = 0x4059000000000000;
      *(byte *)(lVar2 + 0x30) = *(byte *)(lVar2 + 0x30) | 2;
    }
  }
  pUVar10[1].field_0x2 = 1;
  local_2e8 = pUVar10;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(pUVar10);
  }
  pFVar3 = pFVar14->Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_2e8) &&
     ((FScriptContainerElement *)&local_2e8 < pFVar3 + (longlong)*(int *)(lVar1 + 0x44) * 8)) {
    local_310 = (longlong)*(int *)(lVar1 + 0x40);
    local_308 = 8;
    local_328 = &local_2e8;
    local_320 = pFVar3;
    local_318 = (longlong)*(int *)(lVar1 + 0x44);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)(lVar1 + 0x40);
  if (iVar6 == *(int *)(lVar1 + 0x44)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar14,(int *)(lVar1 + 0x44));
  }
  *(int *)(lVar1 + 0x40) = iVar6 + 1;
  *(UObject **)(pFVar14->Data + (longlong)iVar6 * 8) = local_2e8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_2e8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_2e8);
  }
  pUVar10 = *(UObject **)&this->field_0x20;
  FObjectInitializer::AssertIfInConstructor
            (pUVar10,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar9 = Z_Construct_UClass_UParticleModuleColorOverLife_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_148,pUVar9);
  local_148._8_8_ = pUVar10;
  pUVar10 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_148);
  if (local_148._64_8_ != 0) {
    plVar12 = (longlong *)(local_148 + 0x50);
    if ((longlong *)local_148._104_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_148._104_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  uVar8 = __real_3f800000;
  if (*(longlong *)&pUVar10[3].field_0x10 != 0) {
    pUVar9 = Z_Construct_UClass_UDistributionVectorConstantCurve_NoRegister();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&pUVar10[3].field_0x10,pUVar9);
    if (bVar5) {
      local_2d8 = *(longlong *)&pUVar10[3].field_0x10;
      if (local_2d8 != 0) {
        plVar12 = (longlong *)(local_2d8 + 0x28);
        iVar6 = 0;
        do {
          uVar7 = (**(code **)(*plVar12 + 0x58))(plVar12);
          iVar13 = 0;
          do {
            (**(code **)(*plVar12 + 0x70))(plVar12,iVar13,uVar7,uVar8);
            iVar13 = iVar13 + 1;
          } while (iVar13 < 3);
          iVar6 = iVar6 + 1;
        } while (iVar6 < 2);
        *(byte *)(local_2d8 + 0x30) = *(byte *)(local_2d8 + 0x30) | 2;
      }
    }
  }
  FObjectInitializer::AssertIfInConstructor
            (pUVar10,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar9 = Z_Construct_UClass_UDistributionFloatConstantCurve_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,pUVar9);
  local_c8._8_8_ = pUVar10;
  pUVar11 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar12 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar11 == (UObject *)0x0)) {
    *(UObject **)&pUVar10[4].field_0x18 = pUVar11;
    if (pUVar11 == (UObject *)0x0) goto LAB_1481318c9;
  }
  else {
    UE::GC::MarkAsReachable(pUVar11);
    *(UObject **)&pUVar10[4].field_0x18 = pUVar11;
  }
  pUVar9 = Z_Construct_UClass_UDistributionFloatConstantCurve_NoRegister();
  bVar5 = FObjectPtr::IsA((FObjectPtr *)&pUVar10[4].field_0x18,pUVar9);
  if ((bVar5) && (lVar2 = *(longlong *)&pUVar10[4].field_0x18, lVar2 != 0)) {
    uVar7 = (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x58))(lVar2 + 0x28);
    (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x70))(lVar2 + 0x28,0,uVar7,uVar8);
    uVar8 = (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x58))(lVar2 + 0x28);
    (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x70))(lVar2 + 0x28,0,uVar8,0);
    *(byte *)(lVar2 + 0x30) = *(byte *)(lVar2 + 0x30) | 2;
  }
LAB_1481318c9:
  pUVar10[1].field_0x2 = 1;
  local_2e0 = pUVar10;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(pUVar10);
  }
  pFVar3 = pFVar14->Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_2e0) &&
     ((FScriptContainerElement *)&local_2e0 < pFVar3 + (longlong)*(int *)(lVar1 + 0x44) * 8)) {
    local_310 = (longlong)*(int *)(lVar1 + 0x40);
    local_308 = 8;
    local_328 = &local_2e0;
    local_320 = pFVar3;
    local_318 = (longlong)*(int *)(lVar1 + 0x44);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)(lVar1 + 0x40);
  if (iVar6 == *(int *)(lVar1 + 0x44)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar14,(int *)(lVar1 + 0x44));
  }
  *(int *)(lVar1 + 0x40) = iVar6 + 1;
  *(UObject **)(pFVar14->Data + (longlong)iVar6 * 8) = local_2e0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_2e0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_2e0);
  }
  return;
}

