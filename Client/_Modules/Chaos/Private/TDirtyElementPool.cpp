// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 39

// GetElement @ 1437901d0

FKinematicTarget * __thiscall
Chaos::TDirtyElementPool<Chaos::FKinematicTarget>::GetElement
          (TDirtyElementPool<Chaos::FKinematicTarget> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FKinematicTarget *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FKinematicTarget *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FKinematicTarget *)((this->Elements).AllocatorInstance.Data + (longlong)param_1 * 0x30);
}

// GetElement @ 143790250

FParticleDynamicMisc * __thiscall
Chaos::TDirtyElementPool<Chaos::FParticleDynamicMisc>::GetElement
          (TDirtyElementPool<Chaos::FParticleDynamicMisc> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FParticleDynamicMisc *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FParticleDynamicMisc *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FParticleDynamicMisc *)
         ((this->Elements).AllocatorInstance.Data + (longlong)param_1 * 0x2c);
}

// GetElement @ 1437902d0

FParticleDynamics * __thiscall
Chaos::TDirtyElementPool<Chaos::FParticleDynamics>::GetElement
          (TDirtyElementPool<Chaos::FParticleDynamics> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FParticleDynamics *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FParticleDynamics *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FParticleDynamics *)((this->Elements).AllocatorInstance.Data + (longlong)param_1 * 0x30);
}

// GetElement @ 143790350

FParticleMassProps * __thiscall
Chaos::TDirtyElementPool<Chaos::FParticleMassProps>::GetElement
          (TDirtyElementPool<Chaos::FParticleMassProps> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FParticleMassProps *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FParticleMassProps *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FParticleMassProps *)((this->Elements).AllocatorInstance.Data + (longlong)param_1 * 0x60);
}

// GetElement @ 1437903d0

FParticleNonFrequentData * __thiscall
Chaos::TDirtyElementPool<Chaos::FParticleNonFrequentData>::GetElement
          (TDirtyElementPool<Chaos::FParticleNonFrequentData> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FParticleNonFrequentData *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FParticleNonFrequentData *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FParticleNonFrequentData *)
         ((this->Elements).AllocatorInstance.Data + (longlong)param_1 * 0x28);
}

// GetElement @ 143790450

FParticlePositionRotation * __thiscall
Chaos::TDirtyElementPool<Chaos::FParticlePositionRotation>::GetElement
          (TDirtyElementPool<Chaos::FParticlePositionRotation> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FParticlePositionRotation *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FParticlePositionRotation *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FParticlePositionRotation *)
         ((this->Elements).AllocatorInstance.Data + (longlong)param_1 * 0x30);
}

// GetElement @ 1437904d0

FParticleVelocities * __thiscall
Chaos::TDirtyElementPool<Chaos::FParticleVelocities>::GetElement
          (TDirtyElementPool<Chaos::FParticleVelocities> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FParticleVelocities *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FParticleVelocities *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FParticleVelocities *)((this->Elements).AllocatorInstance.Data + (longlong)param_1 * 0x18)
  ;
}

// GetElement @ 1438ba4c0

FParticleProxyProperty * __thiscall
Chaos::TDirtyElementPool<Chaos::FParticleProxyProperty>::GetElement
          (TDirtyElementPool<Chaos::FParticleProxyProperty> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FParticleProxyProperty *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FParticleProxyProperty *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FParticleProxyProperty *)((this->Elements).AllocatorInstance.Data + (longlong)param_1 * 8)
  ;
}

// GetElement @ 1438ba540

FCharacterGroundConstraintDynamicData * __thiscall
Chaos::TDirtyElementPool<Chaos::FCharacterGroundConstraintDynamicData>::GetElement
          (TDirtyElementPool<Chaos::FCharacterGroundConstraintDynamicData> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FCharacterGroundConstraintDynamicData *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FCharacterGroundConstraintDynamicData *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FCharacterGroundConstraintDynamicData *)
         ((this->Elements).AllocatorInstance.Data + (longlong)param_1 * 0x48);
}

// GetElement @ 1438ba5c0

FCharacterGroundConstraintSettings * __thiscall
Chaos::TDirtyElementPool<Chaos::FCharacterGroundConstraintSettings>::GetElement
          (TDirtyElementPool<Chaos::FCharacterGroundConstraintSettings> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FCharacterGroundConstraintSettings *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FCharacterGroundConstraintSettings *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FCharacterGroundConstraintSettings *)
         ((this->Elements).AllocatorInstance.Data + (longlong)param_1 * 0x78);
}

// Reset @ 1438cf0b0

/* WARNING: Removing unreachable block (ram,0x0001438cf229) */
/* WARNING: Removing unreachable block (ram,0x0001438cf20f) */
/* WARNING: Removing unreachable block (ram,0x0001438cf21c) */
/* WARNING: Removing unreachable block (ram,0x0001438cf236) */

void __thiscall
Chaos::TDirtyElementPool<Chaos::FMaterialData>::Reset
          (TDirtyElementPool<Chaos::FMaterialData> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  uVar3 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar4 = (this->Elements).AllocatorInstance.Data + (longlong)param_1 * 0x40;
  if (pFVar4 != (FScriptContainerElement *)&local_68) {
    if (*(void **)pFVar4 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar4);
    }
    *(undefined8 *)pFVar4 = 0;
    *(undefined4 *)(pFVar4 + 8) = 0;
    *(undefined4 *)(pFVar4 + 0xc) = 0;
  }
  pFVar5 = pFVar4 + 0x10;
  if (pFVar5 != (FScriptContainerElement *)&local_58) {
    if (*(void **)pFVar5 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar5);
    }
    *(undefined8 *)pFVar5 = 0;
    *(undefined4 *)(pFVar4 + 0x18) = (undefined4)local_50;
    *(undefined4 *)(pFVar4 + 0x1c) = local_50._4_4_;
  }
  pFVar5 = pFVar4 + 0x20;
  if (pFVar5 != (FScriptContainerElement *)&local_48) {
    if (*(void **)pFVar5 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar5);
    }
    *(undefined8 *)pFVar5 = 0;
    *(undefined4 *)(pFVar4 + 0x28) = (undefined4)local_40;
    *(undefined4 *)(pFVar4 + 0x2c) = local_40._4_4_;
  }
  pFVar5 = pFVar4 + 0x30;
  if (pFVar5 != (FScriptContainerElement *)&local_38) {
    if (*(void **)pFVar5 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar5);
    }
    *(undefined8 *)pFVar5 = 0;
    *(undefined4 *)(pFVar4 + 0x38) = (undefined4)local_30;
    *(undefined4 *)(pFVar4 + 0x3c) = local_30._4_4_;
  }
  return;
}

// Reset @ 1438cf270

void __thiscall
Chaos::TDirtyElementPool<Chaos::FParticleProxyProperty>::Reset
          (TDirtyElementPool<Chaos::FParticleProxyProperty> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined8 *)((this->Elements).AllocatorInstance.Data + (longlong)param_1 * 8) = 0;
  return;
}

// Reset @ 1438cf2f0

void __thiscall
Chaos::TDirtyElementPool<Chaos::FPhysicsObjectPairProperty>::Reset
          (TDirtyElementPool<Chaos::FPhysicsObjectPairProperty> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->Elements).AllocatorInstance.Data + (longlong)param_1 * 0x10;
  *(undefined8 *)pFVar1 = 0;
  *(undefined8 *)(pFVar1 + 8) = 0;
  return;
}

// Reset @ 1438cf380

void __thiscall
Chaos::TDirtyElementPool<Chaos::FPhysicsObjectProperty>::Reset
          (TDirtyElementPool<Chaos::FPhysicsObjectProperty> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined8 *)((this->Elements).AllocatorInstance.Data + (longlong)param_1 * 8) = 0;
  return;
}

// Reset @ 1438cf400

void __thiscall
Chaos::TDirtyElementPool<Chaos::FProxyBasePairProperty>::Reset
          (TDirtyElementPool<Chaos::FProxyBasePairProperty> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->Elements).AllocatorInstance.Data + (longlong)param_1 * 0x10;
  *(undefined8 *)pFVar1 = 0;
  *(undefined8 *)(pFVar1 + 8) = 0;
  return;
}

// Reset @ 1438cf490

void __thiscall
Chaos::TDirtyElementPool<Chaos::FSuspensionLocation>::Reset
          (TDirtyElementPool<Chaos::FSuspensionLocation> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uVar10 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->Elements).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)param_1 * 0x18;
  *(undefined4 *)pFVar1 = uVar4;
  *(undefined4 *)(pFVar1 + 4) = uVar5;
  *(undefined4 *)(pFVar1 + 8) = uVar6;
  *(undefined4 *)(pFVar1 + 0xc) = uVar7;
  *(undefined8 *)(pFVar2 + (longlong)param_1 * 0x18 + 0x10) = uVar8;
  return;
}

// Reset @ 1438cf540

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::TDirtyElementPool<Chaos::FCharacterGroundConstraintDynamicData>::Reset
          (TDirtyElementPool<Chaos::FCharacterGroundConstraintDynamicData> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  bool bVar13;
  uint uVar14;
  longlong lVar15;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  
  uVar12 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._20_4_;
  uVar11 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._16_4_;
  uVar10 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
  uVar9 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar6 = _UNK_150ae9848;
  uVar5 = ___xmm_4202a05f200000000000000000000000;
  uVar4 = __real_3fe44189374bc6a8;
  lVar15 = (longlong)param_1;
  uStack_90 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
  uStack_8c = (undefined4)
              ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
  uVar14 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar14 = (uint)~param_1 >> 0x1f;
  }
  if (uVar14 == 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->Elements).AllocatorInstance.Data;
  *(undefined8 *)(pFVar2 + lVar15 * 0x48) = uVar9;
  *(undefined8 *)(pFVar2 + lVar15 * 0x48 + 8) = uVar10;
  pFVar1 = pFVar2 + lVar15 * 0x48 + 0x10;
  *(undefined4 *)pFVar1 = uVar11;
  *(undefined4 *)(pFVar1 + 4) = uVar12;
  *(undefined4 *)(pFVar1 + 8) = uStack_90;
  *(undefined4 *)(pFVar1 + 0xc) = uStack_8c;
  *(undefined8 *)(pFVar2 + lVar15 * 0x48 + 0x20) = uVar7;
  *(undefined8 *)(pFVar2 + lVar15 * 0x48 + 0x20 + 8) = uVar8;
  *(undefined8 *)(pFVar2 + lVar15 * 0x48 + 0x30) = uVar5;
  *(undefined8 *)(pFVar2 + lVar15 * 0x48 + 0x30 + 8) = uVar6;
  *(undefined8 *)(pFVar2 + lVar15 * 0x48 + 0x40) = uVar4;
  return;
}

// Reset @ 1438cf670

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::TDirtyElementPool<Chaos::FCharacterGroundConstraintSettings>::Reset
          (TDirtyElementPool<Chaos::FCharacterGroundConstraintSettings> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->Elements).AllocatorInstance.Data;
  lVar5 = (longlong)param_1 * 0x78;
  *(undefined8 *)(pFVar1 + lVar5) = 0;
  *(undefined8 *)(pFVar1 + lVar5 + 8) = 0;
  *(undefined8 *)(pFVar1 + lVar5 + 0x10) = 0x3ff0000000000000;
  *(undefined8 *)(pFVar1 + lVar5 + 0x18) = 0;
  *(undefined8 *)(pFVar1 + lVar5 + 0x20) = 0x4097700000000000;
  *(undefined8 *)(pFVar1 + lVar5 + 0x28) = 0x4059000000000000;
  *(undefined8 *)(pFVar1 + lVar5 + 0x30) = 0x408f400000000000;
  *(undefined8 *)(pFVar1 + lVar5 + 0x38) = 0x40b3880000000000;
  *(undefined8 *)(pFVar1 + lVar5 + 0x40) = 0x3fe44189374bc6a8;
  *(undefined8 *)(pFVar1 + lVar5 + 0x48) = 0;
  *(undefined8 *)(pFVar1 + lVar5 + 0x50) = 0x4000000000000000;
  *(undefined8 *)(pFVar1 + lVar5 + 0x58) = 0x3ff0000000000000;
  *(undefined8 *)(pFVar1 + lVar5 + 0x60) = 0x3ff0000000000000;
  *(undefined8 *)(pFVar1 + lVar5 + 0x68) = 0xbff0000000000000;
  *(undefined8 *)(pFVar1 + lVar5 + 0x70) = 0;
  return;
}

// Reset @ 1438cf7f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::TDirtyElementPool<Chaos::FKinematicTarget>::Reset
          (TDirtyElementPool<Chaos::FKinematicTarget> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong lVar6;
  uint uVar7;
  uint uStack_2c;
  
  uVar4 = _UNK_150689648;
  uVar3 = ___xmm_3f800000000000000000000000000000;
  lVar6 = (longlong)param_1;
  uVar7 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->Elements).AllocatorInstance.Data;
  *(undefined8 *)(pFVar1 + lVar6 * 0x30) = uVar3;
  *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 8) = uVar4;
  *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x10) = 0;
  *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x10 + 8) = 0;
  *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x20) = 0;
  *(ulonglong *)(pFVar1 + lVar6 * 0x30 + 0x20 + 8) = (ulonglong)uStack_2c << 0x20;
  return;
}

// Reset @ 1438cf8c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::TDirtyElementPool<Chaos::FPBDJointSettings>::Reset
          (TDirtyElementPool<Chaos::FPBDJointSettings> *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  uint uVar10;
  FPBDJointSettings *pFVar11;
  FPBDJointSettings *pFVar12;
  undefined8 *puVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  undefined1 auStack_688 [32];
  longlong local_668;
  longlong local_660;
  undefined8 local_658 [100];
  FPBDJointSettings local_338;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_688;
  pFVar11 = FPBDJointSettings::FPBDJointSettings(&local_338);
  lVar16 = 6;
  lVar14 = 6;
  puVar7 = local_658;
  do {
    puVar13 = puVar7;
    pFVar12 = pFVar11;
    uVar3 = *(undefined8 *)&(pFVar12->ConnectorTransforms).V[0].field_0x8;
    uVar4 = *(undefined8 *)&(pFVar12->ConnectorTransforms).V[0].field_0x10;
    uVar5 = *(undefined8 *)&(pFVar12->ConnectorTransforms).V[0].field_0x18;
    pFVar11 = (FPBDJointSettings *)&(pFVar12->ConnectorTransforms).V[1].field_0x20;
    *puVar13 = *(undefined8 *)(pFVar12->ConnectorTransforms).V;
    puVar13[1] = uVar3;
    uVar3 = *(undefined8 *)&(pFVar12->ConnectorTransforms).V[0].field_0x20;
    uVar6 = *(undefined8 *)&(pFVar12->ConnectorTransforms).V[0].field_0x28;
    puVar13[2] = uVar4;
    puVar13[3] = uVar5;
    uVar4 = *(undefined8 *)&(pFVar12->ConnectorTransforms).V[0].field_0x30;
    uVar5 = *(undefined8 *)&(pFVar12->ConnectorTransforms).V[0].field_0x38;
    puVar13[4] = uVar3;
    puVar13[5] = uVar6;
    uVar3 = *(undefined8 *)&(pFVar12->ConnectorTransforms).V[0].field_0x40;
    uVar6 = *(undefined8 *)&(pFVar12->ConnectorTransforms).V[0].field_0x48;
    puVar13[6] = uVar4;
    puVar13[7] = uVar5;
    uVar4 = *(undefined8 *)&(pFVar12->ConnectorTransforms).V[0].field_0x50;
    uVar5 = *(undefined8 *)&(pFVar12->ConnectorTransforms).V[0].field_0x58;
    puVar13[8] = uVar3;
    puVar13[9] = uVar6;
    uVar3 = *(undefined8 *)((pFVar12->ConnectorTransforms).V + 1);
    uVar6 = *(undefined8 *)&(pFVar12->ConnectorTransforms).V[1].field_0x8;
    puVar13[10] = uVar4;
    puVar13[0xb] = uVar5;
    uVar4 = *(undefined8 *)&(pFVar12->ConnectorTransforms).V[1].field_0x10;
    uVar5 = *(undefined8 *)&(pFVar12->ConnectorTransforms).V[1].field_0x18;
    puVar13[0xc] = uVar3;
    puVar13[0xd] = uVar6;
    puVar13[0xe] = uVar4;
    puVar13[0xf] = uVar5;
    lVar14 = lVar14 + -1;
    puVar7 = puVar13 + 0x10;
  } while (lVar14 != 0);
  uVar3 = *(undefined8 *)&(pFVar12->ConnectorTransforms).V[1].field_0x28;
  iVar1 = (this->Elements).ArrayNum;
  local_660 = (longlong)iVar1;
  uVar4 = *(undefined8 *)&(pFVar12->ConnectorTransforms).V[1].field_0x30;
  uVar5 = *(undefined8 *)&(pFVar12->ConnectorTransforms).V[1].field_0x38;
  puVar13[0x10] = *(undefined8 *)pFVar11;
  puVar13[0x11] = uVar3;
  uVar10 = 0;
  if (param_1 < iVar1) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  puVar13[0x12] = uVar4;
  puVar13[0x13] = uVar5;
  if (uVar10 == 0) {
    local_668 = (longlong)param_1;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar7 = local_658;
  pFVar8 = (this->Elements).AllocatorInstance.Data + (longlong)param_1 * 800;
  do {
    pFVar15 = pFVar8;
    puVar13 = puVar7;
    uVar3 = puVar13[1];
    uVar4 = puVar13[2];
    uVar5 = puVar13[3];
    *(undefined8 *)pFVar15 = *puVar13;
    *(undefined8 *)(pFVar15 + 8) = uVar3;
    uVar3 = puVar13[4];
    uVar6 = puVar13[5];
    *(undefined8 *)(pFVar15 + 0x10) = uVar4;
    *(undefined8 *)(pFVar15 + 0x18) = uVar5;
    uVar4 = puVar13[6];
    uVar5 = puVar13[7];
    *(undefined8 *)(pFVar15 + 0x20) = uVar3;
    *(undefined8 *)(pFVar15 + 0x28) = uVar6;
    uVar3 = puVar13[8];
    uVar6 = puVar13[9];
    *(undefined8 *)(pFVar15 + 0x30) = uVar4;
    *(undefined8 *)(pFVar15 + 0x38) = uVar5;
    uVar4 = puVar13[10];
    uVar5 = puVar13[0xb];
    *(undefined8 *)(pFVar15 + 0x40) = uVar3;
    *(undefined8 *)(pFVar15 + 0x48) = uVar6;
    uVar3 = puVar13[0xc];
    uVar6 = puVar13[0xd];
    *(undefined8 *)(pFVar15 + 0x50) = uVar4;
    *(undefined8 *)(pFVar15 + 0x58) = uVar5;
    uVar4 = puVar13[0xe];
    uVar5 = puVar13[0xf];
    *(undefined8 *)(pFVar15 + 0x60) = uVar3;
    *(undefined8 *)(pFVar15 + 0x68) = uVar6;
    *(undefined8 *)(pFVar15 + 0x70) = uVar4;
    *(undefined8 *)(pFVar15 + 0x78) = uVar5;
    lVar16 = lVar16 + -1;
    puVar7 = puVar13 + 0x10;
    pFVar8 = pFVar15 + 0x80;
  } while (lVar16 != 0);
  uVar3 = puVar13[0x11];
  uVar4 = puVar13[0x12];
  uVar5 = puVar13[0x13];
  *(undefined8 *)(pFVar15 + 0x80) = puVar13[0x10];
  *(undefined8 *)(pFVar15 + 0x88) = uVar3;
  *(undefined8 *)(pFVar15 + 0x90) = uVar4;
  *(undefined8 *)(pFVar15 + 0x98) = uVar5;
  return;
}

// Reset @ 1438cfa60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::TDirtyElementPool<Chaos::FPBDSuspensionSettings>::Reset
          (TDirtyElementPool<Chaos::FPBDSuspensionSettings> *this,int param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  uint7 uStack_97;
  
  lVar5 = _UNK_150689688;
  lVar4 = ___xmm_3ff00000000000003ff0000000000000;
  lVar3 = _UNK_15061cbc8;
  lVar2 = ___xmm_3ff00000000000000000000000000000;
  uVar7 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar8 = (this->Elements).AllocatorInstance.Data + (longlong)param_1 * 0x88;
  *(ulonglong *)pFVar8 = (ulonglong)uStack_97 << 8;
  *(longlong *)(pFVar8 + 8) = lVar4;
  *(longlong *)(pFVar8 + 0x10) = lVar5;
  *(longlong *)(pFVar8 + 0x18) = 0;
  *(longlong *)(pFVar8 + 0x20) = 0;
  *(longlong *)(pFVar8 + 0x28) = 0;
  *(longlong *)(pFVar8 + 0x30) = 0;
  *(longlong *)(pFVar8 + 0x38) = 0;
  *(longlong *)(pFVar8 + 0x40) = 0;
  *(longlong *)(pFVar8 + 0x48) = lVar2;
  *(longlong *)(pFVar8 + 0x50) = lVar3;
  *(longlong *)(pFVar8 + 0x58) = 0;
  *(longlong *)(pFVar8 + 0x60) = 0;
  *(longlong *)(pFVar8 + 0x68) = 0;
  *(longlong *)(pFVar8 + 0x70) = 0;
  *(longlong *)(pFVar8 + 0x78) = 0;
  *(longlong *)(pFVar8 + 0x80) = 0;
  return;
}

// Reset @ 1438cfb70

void __thiscall
Chaos::TDirtyElementPool<Chaos::FParticleDynamicMisc>::Reset
          (TDirtyElementPool<Chaos::FParticleDynamicMisc> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->Elements).AllocatorInstance.Data;
  lVar4 = (longlong)param_1 * 0x2c;
  *(undefined8 *)(pFVar1 + lVar4) = 0;
  *(undefined8 *)(pFVar1 + lVar4 + 8) = 0;
  *(undefined8 *)(pFVar1 + lVar4 + 0x10) = 0x3f80000000000000;
  *(undefined8 *)(pFVar1 + lVar4 + 0x10 + 8) = 0;
  *(undefined8 *)(pFVar1 + lVar4 + 0x20) = 0xffff000000000000;
  *(undefined4 *)(pFVar1 + lVar4 + 0x28) = 0xff;
  return;
}

// Reset @ 1438cfc70

void __thiscall
Chaos::TDirtyElementPool<Chaos::FParticleDynamics>::Reset
          (TDirtyElementPool<Chaos::FParticleDynamics> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar5 = (longlong)param_1;
  uVar4 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
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
  pFVar1 = (this->Elements).AllocatorInstance.Data;
  *(undefined8 *)(pFVar1 + lVar5 * 0x30) = 0;
  *(undefined8 *)(pFVar1 + lVar5 * 0x30 + 8) = 0;
  *(undefined8 *)(pFVar1 + lVar5 * 0x30 + 0x10) = 0;
  *(undefined8 *)(pFVar1 + lVar5 * 0x30 + 0x10 + 8) = 0;
  *(undefined8 *)(pFVar1 + lVar5 * 0x30 + 0x20) = 0;
  *(undefined8 *)(pFVar1 + lVar5 * 0x30 + 0x20 + 8) = 0;
  return;
}

// Reset @ 1438cfd10

void __thiscall
Chaos::TDirtyElementPool<Chaos::FParticleMassProps>::Reset
          (TDirtyElementPool<Chaos::FParticleMassProps> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
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
  pFVar1 = (this->Elements).AllocatorInstance.Data;
  lVar5 = (longlong)param_1 * 0x60;
  *(undefined8 *)(pFVar1 + lVar5) = 0;
  *(undefined8 *)(pFVar1 + lVar5 + 8) = 0;
  *(undefined8 *)(pFVar1 + lVar5 + 0x10) = 0;
  *(undefined8 *)(pFVar1 + lVar5 + 0x10 + 8) = 0;
  *(undefined8 *)(pFVar1 + lVar5 + 0x20) = 0;
  *(undefined8 *)(pFVar1 + lVar5 + 0x20 + 8) = 0;
  *(undefined8 *)(pFVar1 + lVar5 + 0x30) = 0;
  *(undefined8 *)(pFVar1 + lVar5 + 0x30 + 8) = 0;
  *(undefined8 *)(pFVar1 + lVar5 + 0x40) = 0;
  *(undefined8 *)(pFVar1 + lVar5 + 0x40 + 8) = 0;
  *(undefined8 *)(pFVar1 + lVar5 + 0x50) = 0;
  *(undefined8 *)(pFVar1 + lVar5 + 0x50 + 8) = 0;
  return;
}

// Reset @ 1438cfdd0

void __thiscall
Chaos::TDirtyElementPool<Chaos::FParticleNonFrequentData>::Reset
          (TDirtyElementPool<Chaos::FParticleNonFrequentData> *this,int param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  FParticleNonFrequentData local_38;
  
  local_38.MParticleID.GlobalID = -1;
  local_38.MParticleID.LocalID = -1;
  local_38.MGeometry.Reference = (FImplicitObject *)0x0;
  local_38.MSpatialIdx.InnerIdx = 0;
  local_38.MSpatialIdx.Bucket = 0;
  local_38.MUniqueIdx.Idx = -1;
  local_38.MDebugName.Object = (FString *)0x0;
  local_38.MDebugName.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  uVar5 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FParticleNonFrequentData::operator=
            ((FParticleNonFrequentData *)
             ((this->Elements).AllocatorInstance.Data + (longlong)param_1 * 0x28),&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.MDebugName.SharedReferenceCount.ReferenceController);
  if (local_38.MGeometry.Reference != (FImplicitObject *)0x0) {
    LOCK();
    plVar1 = &(local_38.MGeometry.Reference)->_padding_;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) &&
       (*(int *)((longlong)&(local_38.MGeometry.Reference)->_padding_ + 4) == 0)) {
      (**(code **)(local_38.MGeometry.Reference)->_padding_)(local_38.MGeometry.Reference,1);
    }
  }
  return;
}

// Reset @ 1438cfeb0

void __thiscall
Chaos::TDirtyElementPool<Chaos::FParticlePositionRotation>::Reset
          (TDirtyElementPool<Chaos::FParticlePositionRotation> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar5 = (longlong)param_1;
  uVar4 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
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
  pFVar1 = (this->Elements).AllocatorInstance.Data;
  *(undefined8 *)(pFVar1 + lVar5 * 0x30) = 0;
  *(undefined8 *)(pFVar1 + lVar5 * 0x30 + 8) = 0;
  *(undefined8 *)(pFVar1 + lVar5 * 0x30 + 0x10) = 0;
  *(undefined8 *)(pFVar1 + lVar5 * 0x30 + 0x10 + 8) = 0;
  *(undefined8 *)(pFVar1 + lVar5 * 0x30 + 0x20) = 0;
  *(undefined8 *)(pFVar1 + lVar5 * 0x30 + 0x20 + 8) = 0;
  return;
}

// Reset @ 1438cff50

void __thiscall
Chaos::TDirtyElementPool<Chaos::FParticleVelocities>::Reset
          (TDirtyElementPool<Chaos::FParticleVelocities> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->Elements).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)param_1 * 0x18;
  *(undefined8 *)pFVar1 = 0;
  *(undefined8 *)(pFVar1 + 8) = 0;
  *(undefined8 *)(pFVar2 + (longlong)param_1 * 0x18 + 0x10) = 0;
  return;
}

// SetNum @ 1438d35c0

void __thiscall
Chaos::TDirtyElementPool<Chaos::FParticleProxyProperty>::SetNum
          (TDirtyElementPool<Chaos::FParticleProxyProperty> *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &(this->Elements).ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,param_1 - iVar5,(ForAnyElementType *)this,piVar1,
                       &(this->Elements).ArrayMax);
    DefaultConstructItems<Chaos::FParticleProxyProperty,int>
              ((this->Elements).AllocatorInstance.Data + (longlong)iVar4 * 8,param_1 - iVar5);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar5) {
    uVar6 = iVar5 - param_1;
    if (((int)(uVar6 | param_1) < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar6 != 0) {
      _Dst = (this->Elements).AllocatorInstance.Data + (longlong)param_1 * 8;
      iVar5 = (*piVar1 - uVar6) - param_1;
      if (iVar5 != 0) {
        memmove(_Dst,_Dst + (longlong)(int)uVar6 * 8,(longlong)iVar5 << 3);
      }
      *piVar1 = *piVar1 - uVar6;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,(ForAnyElementType *)this,*piVar1,&(this->Elements).ArrayMax);
    }
  }
  return;
}

// SetNum @ 1438d36f0

void __thiscall
Chaos::TDirtyElementPool<Chaos::FParticlePositionRotation>::SetNum
          (TDirtyElementPool<Chaos::FParticlePositionRotation> *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  uint uVar6;
  
  piVar1 = &(this->Elements).ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,0x10,param_1 - iVar5,(ForAnyElementType *)this,piVar1,
                       &(this->Elements).ArrayMax);
    DefaultConstructItems<Chaos::FParticlePositionRotation,int>
              ((this->Elements).AllocatorInstance.Data + (longlong)iVar4 * 0x30,param_1 - iVar5);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar5) {
    uVar6 = iVar5 - param_1;
    if (((int)(uVar6 | param_1) < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar6 != 0) {
      _Dst = (this->Elements).AllocatorInstance.Data + (longlong)param_1 * 0x30;
      iVar5 = (*piVar1 - uVar6) - param_1;
      if (iVar5 != 0) {
        memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x30,(longlong)iVar5 * 0x30);
      }
      *piVar1 = *piVar1 - uVar6;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,0x10,(ForAnyElementType *)this,*piVar1,&(this->Elements).ArrayMax);
    }
  }
  return;
}

// SetNum @ 1438d3830

void __thiscall
Chaos::TDirtyElementPool<Chaos::FParticleVelocities>::SetNum
          (TDirtyElementPool<Chaos::FParticleVelocities> *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = &(this->Elements).ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,param_1 - iVar4,(ForAnyElementType *)this,piVar1,&(this->Elements).ArrayMax);
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  if (param_1 < iVar4) {
    uVar5 = iVar4 - param_1;
    if (((int)(uVar5 | param_1) < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar5 != 0) {
      _Dst = (this->Elements).AllocatorInstance.Data + (longlong)param_1 * 0x18;
      iVar4 = (*piVar1 - uVar5) - param_1;
      if (iVar4 != 0) {
        memmove(_Dst,_Dst + (longlong)(int)uVar5 * 0x18,(longlong)iVar4 * 0x18);
      }
      *piVar1 = *piVar1 - uVar5;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,(ForAnyElementType *)this,*piVar1,&(this->Elements).ArrayMax);
    }
  }
  return;
}

// GetElement @ 143c688d0

FPhysicsObjectPairProperty * __thiscall
Chaos::TDirtyElementPool<Chaos::FPhysicsObjectPairProperty>::GetElement
          (TDirtyElementPool<Chaos::FPhysicsObjectPairProperty> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPhysicsObjectPairProperty *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPhysicsObjectPairProperty *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FPhysicsObjectPairProperty *)
         ((this->Elements).AllocatorInstance.Data + (longlong)param_1 * 0x10);
}

// GetElement @ 143c68950

FProxyBasePairProperty * __thiscall
Chaos::TDirtyElementPool<Chaos::FProxyBasePairProperty>::GetElement
          (TDirtyElementPool<Chaos::FProxyBasePairProperty> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FProxyBasePairProperty *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FProxyBasePairProperty *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FProxyBasePairProperty *)
         ((this->Elements).AllocatorInstance.Data + (longlong)param_1 * 0x10);
}

// GetElement @ 143c689d0

FPBDJointSettings * __thiscall
Chaos::TDirtyElementPool<Chaos::FPBDJointSettings>::GetElement
          (TDirtyElementPool<Chaos::FPBDJointSettings> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPBDJointSettings *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPBDJointSettings *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FPBDJointSettings *)((this->Elements).AllocatorInstance.Data + (longlong)param_1 * 800);
}

// GetElement @ 143dab600

FPhysicsObjectProperty * __thiscall
Chaos::TDirtyElementPool<Chaos::FPhysicsObjectProperty>::GetElement
          (TDirtyElementPool<Chaos::FPhysicsObjectProperty> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPhysicsObjectProperty *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPhysicsObjectProperty *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FPhysicsObjectProperty *)((this->Elements).AllocatorInstance.Data + (longlong)param_1 * 8)
  ;
}

// GetElement @ 143dab680

FSuspensionLocation * __thiscall
Chaos::TDirtyElementPool<Chaos::FSuspensionLocation>::GetElement
          (TDirtyElementPool<Chaos::FSuspensionLocation> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSuspensionLocation *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSuspensionLocation *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FSuspensionLocation *)((this->Elements).AllocatorInstance.Data + (longlong)param_1 * 0x18)
  ;
}

// GetElement @ 143dab700

FPBDSuspensionSettings * __thiscall
Chaos::TDirtyElementPool<Chaos::FPBDSuspensionSettings>::GetElement
          (TDirtyElementPool<Chaos::FPBDSuspensionSettings> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPBDSuspensionSettings *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPBDSuspensionSettings *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FPBDSuspensionSettings *)
         ((this->Elements).AllocatorInstance.Data + (longlong)param_1 * 0x88);
}

// GetElement @ 1440e38e0

FParticleProxyProperty * __thiscall
Chaos::TDirtyElementPool<Chaos::FParticleProxyProperty>::GetElement
          (TDirtyElementPool<Chaos::FParticleProxyProperty> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FParticleProxyProperty *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FParticleProxyProperty *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FParticleProxyProperty *)((this->Elements).AllocatorInstance.Data + (longlong)param_1 * 8)
  ;
}

// GetElement @ 1440e3960

FParticlePositionRotation * __thiscall
Chaos::TDirtyElementPool<Chaos::FParticlePositionRotation>::GetElement
          (TDirtyElementPool<Chaos::FParticlePositionRotation> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FParticlePositionRotation *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FParticlePositionRotation *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FParticlePositionRotation *)
         ((this->Elements).AllocatorInstance.Data + (longlong)param_1 * 0x30);
}

// GetElement @ 1440e39e0

FParticleVelocities * __thiscall
Chaos::TDirtyElementPool<Chaos::FParticleVelocities>::GetElement
          (TDirtyElementPool<Chaos::FParticleVelocities> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FParticleVelocities *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FParticleVelocities *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FParticleVelocities *)((this->Elements).AllocatorInstance.Data + (longlong)param_1 * 0x18)
  ;
}

