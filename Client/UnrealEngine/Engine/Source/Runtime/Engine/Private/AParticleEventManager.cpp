// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// StaticClass @ 1480e5d90

UClass * __cdecl AParticleEventManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AParticleEventManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleEventManager",
               &Z_Registration_Info_UClass_AParticleEventManager.InnerSingleton,
               StaticRegisterNativesAParticleEventManager,0x2c0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<AParticleEventManager>,
               InternalVTableHelperCtorCaller<AParticleEventManager>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AParticleEventManager.InnerSingleton;
}

// AParticleEventManager @ 1480f2d70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AParticleEventManager * __thiscall
AParticleEventManager::AParticleEventManager(AParticleEventManager *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  *(undefined ***)this = &___7AParticleEventManager__6B_;
  return this;
}

// AParticleEventManager @ 1480f2da0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AParticleEventManager * __thiscall
AParticleEventManager::AParticleEventManager
          (AParticleEventManager *this,FObjectInitializer *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  *(undefined ***)this = &___7AParticleEventManager__6B_;
  AActor::SetCanBeDamaged((AActor *)this,false);
  this->field_0x59 = this->field_0x59 | 0x80;
  return this;
}

// ~AParticleEventManager @ 1480f64f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AParticleEventManager::~AParticleEventManager(AParticleEventManager *this)

{
  *(undefined ***)this = &___7AParticleEventManager__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// EndPlay @ 148107c60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AParticleEventManager::EndPlay(AParticleEventManager *this,Type param_1)

{
  AParticleEventManager *pAVar1;
  UWorld *pUVar2;
  bool bVar3;
  
  AActor::EndPlay((AActor *)this,param_1);
  if (param_1 == Destroyed) {
    pUVar2 = AActor::GetWorld((AActor *)this);
    if (pUVar2 != (UWorld *)0x0) {
      pAVar1 = (pUVar2->MyParticleEventManager).field0_0x0.DebugPtr;
      if (pAVar1 == (AParticleEventManager *)0x0) {
        bVar3 = this == (AParticleEventManager *)0x0;
      }
      else {
        bVar3 = pAVar1 == this;
      }
      if (bVar3) {
        (pUVar2->MyParticleEventManager).field0_0x0.DebugPtr = (AParticleEventManager *)0x0;
      }
    }
  }
  return;
}

// GetPrivateStaticClass @ 1481189f0

UClass * __cdecl AParticleEventManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AParticleEventManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleEventManager",
               &Z_Registration_Info_UClass_AParticleEventManager.InnerSingleton,
               StaticRegisterNativesAParticleEventManager,0x2c0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<AParticleEventManager>,
               InternalVTableHelperCtorCaller<AParticleEventManager>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AParticleEventManager.InnerSingleton;
}

// HandleParticleBurstEvents @ 14811cd50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AParticleEventManager::HandleParticleBurstEvents
          (AParticleEventManager *this,UParticleSystemComponent *param_1,
          TArray<FParticleEventBurstData,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UClass *pUVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  
  lVar8 = *(longlong *)&param_1->field_0xa8;
  if (lVar8 != 0) {
    pUVar5 = AEmitter::StaticClass();
    iVar6 = (int)pUVar5->_padding_;
    if ((iVar6 <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)iVar6 * 8) ==
        &pUVar5->_padding_)) goto LAB_14811cd95;
  }
  lVar8 = 0;
LAB_14811cd95:
  iVar6 = param_2->ArrayNum;
  uVar7 = 0;
  if (0 < iVar6) {
    lVar9 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < iVar6) {
        uVar4 = ~uVar7 >> 0x1f;
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
      pFVar1 = (param_2->AllocatorInstance).Data;
      local_38 = *(undefined8 *)(pFVar1 + lVar9 + 4);
      local_30 = *(undefined4 *)(pFVar1 + lVar9 + 0xc);
      local_2c = *(undefined4 *)(pFVar1 + lVar9 + 0x50);
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&param_1->OnParticleBurst,
                 &local_38);
      if (lVar8 != 0) {
        local_28 = *(undefined8 *)(pFVar1 + lVar9 + 4);
        local_20 = *(undefined4 *)(pFVar1 + lVar9 + 0xc);
        local_1c = *(undefined4 *)(pFVar1 + lVar9 + 0x50);
        TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                  ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(lVar8 + 0x2e8),&local_28
                  );
      }
      iVar6 = param_2->ArrayNum;
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 0x58;
    } while ((int)uVar7 < iVar6);
  }
  return;
}

// HandleParticleCollisionEvents @ 14811cea0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AParticleEventManager::HandleParticleCollisionEvents
          (AParticleEventManager *this,UParticleSystemComponent *param_1,
          TArray<FParticleEventCollideData,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UClass *pUVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 local_118;
  undefined4 local_110;
  int local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  int local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  lVar9 = *(longlong *)&param_1->field_0xa8;
  if (lVar9 != 0) {
    pUVar5 = AEmitter::StaticClass();
    iVar6 = (int)pUVar5->_padding_;
    if ((iVar6 <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)iVar6 * 8) ==
        &pUVar5->_padding_)) goto LAB_14811cef4;
  }
  lVar9 = 0;
LAB_14811cef4:
  iVar6 = param_2->ArrayNum;
  uVar8 = 0;
  if (0 < iVar6) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar8 < iVar6) {
        uVar4 = ~uVar8 >> 0x1f;
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
      pFVar1 = (param_2->AllocatorInstance).Data;
      local_118 = *(undefined8 *)(pFVar1 + lVar7 + 4);
      local_110 = *(undefined4 *)(pFVar1 + lVar7 + 0xc);
      local_f8 = *(undefined8 *)(pFVar1 + lVar7 + 0x20);
      local_108 = *(undefined8 *)(pFVar1 + lVar7 + 0x10);
      uStack_100 = *(undefined8 *)(pFVar1 + lVar7 + 0x10 + 8);
      local_10c = (int)*(float *)(pFVar1 + lVar7 + 0x50);
      local_f0 = *(undefined8 *)(pFVar1 + lVar7 + 0x28);
      uStack_e8 = *(undefined8 *)(pFVar1 + lVar7 + 0x28 + 8);
      local_a8 = *(undefined8 *)(pFVar1 + lVar7 + 0x90);
      local_e0 = *(undefined8 *)(pFVar1 + lVar7 + 0x38);
      local_d8 = *(undefined8 *)(pFVar1 + lVar7 + 0x58);
      uStack_d0 = *(undefined8 *)(pFVar1 + lVar7 + 0x58 + 8);
      local_a0 = *(undefined8 *)(pFVar1 + lVar7 + 0x98);
      local_c8 = *(undefined8 *)(pFVar1 + lVar7 + 0x68);
      local_c0 = *(undefined8 *)(pFVar1 + lVar7 + 0x70);
      uStack_b8 = *(undefined8 *)(pFVar1 + lVar7 + 0x70 + 8);
      local_b0 = *(undefined8 *)(pFVar1 + lVar7 + 0x80);
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&param_1->OnParticleCollide
                 ,&local_118);
      if (lVar9 != 0) {
        local_98 = *(undefined8 *)(pFVar1 + lVar7 + 4);
        local_90 = *(undefined4 *)(pFVar1 + lVar7 + 0xc);
        local_78 = *(undefined8 *)(pFVar1 + lVar7 + 0x20);
        local_88 = *(undefined8 *)(pFVar1 + lVar7 + 0x10);
        uStack_80 = *(undefined8 *)(pFVar1 + lVar7 + 0x10 + 8);
        local_8c = (int)*(float *)(pFVar1 + lVar7 + 0x50);
        local_70 = *(undefined8 *)(pFVar1 + lVar7 + 0x28);
        uStack_68 = *(undefined8 *)(pFVar1 + lVar7 + 0x28 + 8);
        local_28 = *(undefined8 *)(pFVar1 + lVar7 + 0x90);
        local_60 = *(undefined8 *)(pFVar1 + lVar7 + 0x38);
        local_58 = *(undefined8 *)(pFVar1 + lVar7 + 0x58);
        uStack_50 = *(undefined8 *)(pFVar1 + lVar7 + 0x58 + 8);
        local_20 = *(undefined8 *)(pFVar1 + lVar7 + 0x98);
        local_48 = *(undefined8 *)(pFVar1 + lVar7 + 0x68);
        local_40 = *(undefined8 *)(pFVar1 + lVar7 + 0x70);
        uStack_38 = *(undefined8 *)(pFVar1 + lVar7 + 0x70 + 8);
        local_30 = *(undefined8 *)(pFVar1 + lVar7 + 0x80);
        TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                  ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(lVar9 + 0x318),&local_98
                  );
      }
      iVar6 = param_2->ArrayNum;
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0xa0;
    } while ((int)uVar8 < iVar6);
  }
  return;
}

// HandleParticleDeathEvents @ 14811d0f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AParticleEventManager::HandleParticleDeathEvents
          (AParticleEventManager *this,UParticleSystemComponent *param_1,
          TArray<FParticleEventDeathData,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UClass *pUVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  undefined8 local_d8;
  undefined4 local_d0;
  int local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined4 local_70;
  int local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  lVar8 = *(longlong *)&param_1->field_0xa8;
  if (lVar8 != 0) {
    pUVar5 = AEmitter::StaticClass();
    iVar6 = (int)pUVar5->_padding_;
    if ((iVar6 <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)iVar6 * 8) ==
        &pUVar5->_padding_)) goto LAB_14811d138;
  }
  lVar8 = 0;
LAB_14811d138:
  iVar6 = param_2->ArrayNum;
  uVar9 = 0;
  if (0 < iVar6) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar9 < iVar6) {
        uVar4 = ~uVar9 >> 0x1f;
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
      pFVar1 = (param_2->AllocatorInstance).Data;
      local_d0 = *(undefined4 *)(pFVar1 + lVar7 + 0xc);
      local_d8 = *(undefined8 *)(pFVar1 + lVar7 + 4);
      local_b8 = *(undefined8 *)(pFVar1 + lVar7 + 0x20);
      local_c8 = *(undefined8 *)(pFVar1 + lVar7 + 0x10);
      uStack_c0 = *(undefined8 *)(pFVar1 + lVar7 + 0x10 + 8);
      local_cc = (int)*(float *)(pFVar1 + lVar7 + 0x50);
      local_b0 = *(undefined8 *)(pFVar1 + lVar7 + 0x28);
      uStack_a8 = *(undefined8 *)(pFVar1 + lVar7 + 0x28 + 8);
      local_a0 = *(undefined8 *)(pFVar1 + lVar7 + 0x38);
      local_98 = *(undefined8 *)(pFVar1 + lVar7 + 0x58);
      uStack_90 = *(undefined8 *)(pFVar1 + lVar7 + 0x58 + 8);
      local_88 = *(undefined8 *)(pFVar1 + lVar7 + 0x68);
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&param_1->OnParticleDeath,
                 &local_d8);
      if (lVar8 != 0) {
        local_70 = *(undefined4 *)(pFVar1 + lVar7 + 0xc);
        local_78 = *(undefined8 *)(pFVar1 + lVar7 + 4);
        local_58 = *(undefined8 *)(pFVar1 + lVar7 + 0x20);
        local_68 = *(undefined8 *)(pFVar1 + lVar7 + 0x10);
        uStack_60 = *(undefined8 *)(pFVar1 + lVar7 + 0x10 + 8);
        local_6c = (int)*(float *)(pFVar1 + lVar7 + 0x50);
        local_50 = *(undefined8 *)(pFVar1 + lVar7 + 0x28);
        uStack_48 = *(undefined8 *)(pFVar1 + lVar7 + 0x28 + 8);
        local_40 = *(undefined8 *)(pFVar1 + lVar7 + 0x38);
        local_38 = *(undefined8 *)(pFVar1 + lVar7 + 0x58);
        uStack_30 = *(undefined8 *)(pFVar1 + lVar7 + 0x58 + 8);
        local_28 = *(undefined8 *)(pFVar1 + lVar7 + 0x68);
        TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                  ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(lVar8 + 0x300),&local_78
                  );
      }
      iVar6 = param_2->ArrayNum;
      uVar9 = uVar9 + 1;
      lVar7 = lVar7 + 0x70;
    } while ((int)uVar9 < iVar6);
  }
  return;
}

// HandleParticleSpawnEvents @ 14811d300

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AParticleEventManager::HandleParticleSpawnEvents
          (AParticleEventManager *this,UParticleSystemComponent *param_1,
          TArray<FParticleEventSpawnData,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UClass *pUVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  lVar8 = *(longlong *)&param_1->field_0xa8;
  if (lVar8 != 0) {
    pUVar5 = AEmitter::StaticClass();
    iVar6 = (int)pUVar5->_padding_;
    if ((iVar6 <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)iVar6 * 8) ==
        &pUVar5->_padding_)) goto LAB_14811d348;
  }
  lVar8 = 0;
LAB_14811d348:
  iVar6 = param_2->ArrayNum;
  uVar9 = 0;
  if (0 < iVar6) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar9 < iVar6) {
        uVar4 = ~uVar9 >> 0x1f;
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
      pFVar1 = (param_2->AllocatorInstance).Data;
      local_88 = *(undefined8 *)(pFVar1 + lVar7 + 0x10);
      uStack_80 = *(undefined8 *)(pFVar1 + lVar7 + 0x10 + 8);
      local_98 = *(undefined8 *)(pFVar1 + lVar7 + 4);
      local_90 = *(undefined4 *)(pFVar1 + lVar7 + 0xc);
      local_78 = *(undefined8 *)(pFVar1 + lVar7 + 0x20);
      local_70 = *(undefined8 *)(pFVar1 + lVar7 + 0x28);
      uStack_68 = *(undefined8 *)(pFVar1 + lVar7 + 0x28 + 8);
      local_60 = *(undefined8 *)(pFVar1 + lVar7 + 0x38);
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&param_1->OnParticleSpawn,
                 &local_98);
      if (lVar8 != 0) {
        local_48 = *(undefined8 *)(pFVar1 + lVar7 + 0x10);
        uStack_40 = *(undefined8 *)(pFVar1 + lVar7 + 0x10 + 8);
        local_58 = *(undefined8 *)(pFVar1 + lVar7 + 4);
        local_50 = *(undefined4 *)(pFVar1 + lVar7 + 0xc);
        local_38 = *(undefined8 *)(pFVar1 + lVar7 + 0x20);
        local_30 = *(undefined8 *)(pFVar1 + lVar7 + 0x28);
        uStack_28 = *(undefined8 *)(pFVar1 + lVar7 + 0x28 + 8);
        local_20 = *(undefined8 *)(pFVar1 + lVar7 + 0x38);
        TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                  ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(lVar8 + 0x2d0),&local_58
                  );
      }
      iVar6 = param_2->ArrayNum;
      uVar9 = uVar9 + 1;
      lVar7 = lVar7 + 0x50;
    } while ((int)uVar9 < iVar6);
  }
  return;
}

// StaticRegisterNativesAParticleEventManager @ 148137d80

void __cdecl AParticleEventManager::StaticRegisterNativesAParticleEventManager(void)

{
  return;
}

