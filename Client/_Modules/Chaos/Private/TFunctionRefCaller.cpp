// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 738

// Call @ 1436fb910

FTlsAutoCleanup * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TThreadSingleton<ChaosDD::Private::FChaosDDContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
::Call(void *param_1)

{
  DWORD DVar1;
  FTlsAutoCleanup *pFVar2;
  
  pFVar2 = ::operator_new(0x20);
  if (pFVar2 != (FTlsAutoCleanup *)0x0) {
    *pFVar2 = (FTlsAutoCleanup)&___7__TThreadSingleton_VFChaosDDContext_Private_ChaosDD____6B_;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(pFVar2 + 1) = DVar1;
    *pFVar2 = (FTlsAutoCleanup)&___7FChaosDDContext_Private_ChaosDD__6B_;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    return pFVar2;
  }
  return (FTlsAutoCleanup *)0x0;
}

// Call @ 1436fb970

FTlsAutoCleanup * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
::Call(void *param_1)

{
  DWORD DVar1;
  FTlsAutoCleanup *pFVar2;
  
  pFVar2 = ::operator_new(0x20);
  if (pFVar2 != (FTlsAutoCleanup *)0x0) {
    pFVar2[1] = (FTlsAutoCleanup)0x0;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    *pFVar2 = (FTlsAutoCleanup)&___7__TThreadSingleton_VFPhysicsThreadContext_Chaos____6B_;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(pFVar2 + 1) = DVar1;
    *pFVar2 = (FTlsAutoCleanup)&___7FPhysicsThreadContext_Chaos__6B_;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    *(undefined1 *)(pFVar2 + 3) = 0;
    return pFVar2;
  }
  return (FTlsAutoCleanup *)0x0;
}

// Call @ 1436fb980

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FChaosSolversModule::OnCreateMaterial'::__l9::<lambda_1>,void>::Call
          (void *param_1)

{
  ::Chaos::FPBDRigidsSolver::CreateMaterial
            (*(FPBDRigidsSolver **)((longlong)param_1 + 0x88),
             (FMaterialHandle)*(THandle<Chaos::FChaosPhysicsMaterial,24,8> *)param_1,
             (FChaosPhysicsMaterial *)((longlong)param_1 + 8));
  return;
}

// Call @ 1436fb9a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FChaosSolversModule::OnCreateMaterialMask'::__l9::<lambda_1>,void>::Call
          (void *param_1)

{
  ::Chaos::FPBDRigidsSolver::CreateMaterialMask
            (*(FPBDRigidsSolver **)((longlong)param_1 + 0x30),
             (FMaterialMaskHandle)*(THandle<Chaos::FChaosPhysicsMaterialMask,24,8> *)param_1,
             (FChaosPhysicsMaterialMask *)((longlong)param_1 + 8));
  return;
}

// Call @ 1436fb9c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FChaosSolversModule::OnDestroyMaterial'::__l9::<lambda_1>,void>::Call
          (void *param_1)

{
  ::Chaos::FPBDRigidsSolver::DestroyMaterial
            (*(FPBDRigidsSolver **)((longlong)param_1 + 8),
             (FMaterialHandle)*(THandle<Chaos::FChaosPhysicsMaterial,24,8> *)param_1);
  return;
}

// Call @ 1436fb9e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FChaosSolversModule::OnDestroyMaterialMask'::__l9::<lambda_1>,void>::Call
          (void *param_1)

{
  ::Chaos::FPBDRigidsSolver::DestroyMaterialMask
            (*(FPBDRigidsSolver **)((longlong)param_1 + 8),
             (FMaterialMaskHandle)*(THandle<Chaos::FChaosPhysicsMaterialMask,24,8> *)param_1);
  return;
}

// Call @ 1436fba00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FChaosSolversModule::OnUpdateMaterial'::__l9::<lambda_1>,void>::Call
          (void *param_1)

{
  ::Chaos::FPBDRigidsSolver::UpdateMaterial
            (*(FPBDRigidsSolver **)((longlong)param_1 + 0x88),
             (FMaterialHandle)*(THandle<Chaos::FChaosPhysicsMaterial,24,8> *)param_1,
             (FChaosPhysicsMaterial *)((longlong)param_1 + 8));
  return;
}

// Call @ 1436fba20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FChaosSolversModule::OnUpdateMaterialMask'::__l9::<lambda_1>,void>::Call
          (void *param_1)

{
  ::Chaos::FPBDRigidsSolver::UpdateMaterialMask
            (*(FPBDRigidsSolver **)((longlong)param_1 + 0x30),
             (FMaterialMaskHandle)*(THandle<Chaos::FChaosPhysicsMaterialMask,24,8> *)param_1,
             (FChaosPhysicsMaterialMask *)((longlong)param_1 + 8));
  return;
}

// Call @ 1437594b0

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::TParticleView<Chaos::TGeometryParticlesImp<double,3,0>_>::ParallelFor<`FChaosVisualDebuggerTrace::TraceParticlesView<Chaos::TGeometryParticlesImp<double,3,0>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>_const_,int,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  return *param_2;
}

// Call @ 1437594c0

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<`FChaosVisualDebuggerTrace::TraceParticlesView<Chaos::TPBDRigidParticles<double,3>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>_const_,int,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  return *param_2;
}

// Call @ 1437594d0

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<`FChaosVisualDebuggerTrace::TraceParticleClusterChildData'::__l2::<lambda_1>_>'::__l2::<lambda_1>_const_,int,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  return *param_2;
}

// Call @ 1437594e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FCCDManager::ApplySweptConstraints'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  double *pdVar2;
  undefined8 uVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  FScriptContainerElement *pFVar10;
  FCCDConstraint *pFVar11;
  FCCDParticle *pFVar12;
  FCCDParticle *pFVar13;
  ForElementType<Chaos::FManifoldPoint> FVar14;
  TGeometryParticleHandleImp<double,3,1> *pTVar15;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar16;
  FCCDManager *this;
  code *pcVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [12];
  bool bVar22;
  float fVar23;
  bool bVar24;
  undefined1 uVar25;
  uint uVar26;
  uint uVar27;
  FPBDCollisionConstraint *pFVar28;
  FDebugDrawQueue *pFVar29;
  FDebugDrawQueue *pFVar30;
  TVector<double,3> *pTVar31;
  TRigidTransform<double,3> *pTVar32;
  TGeometryParticleHandleImp<double,3,1> *pTVar33;
  uint uVar34;
  uint uVar35;
  longlong lVar36;
  ForElementType<Chaos::FManifoldPoint> FVar37;
  ulonglong uVar38;
  uint uVar39;
  longlong lVar40;
  int iVar41;
  ulonglong uVar42;
  longlong lVar43;
  uint uVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar50;
  double dVar51;
  double dVar55;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  double dVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  double dVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined4 uVar70;
  double dVar71;
  double dVar72;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined4 uVar76;
  undefined4 uVar77;
  undefined4 uVar78;
  undefined1 auStackY_658 [32];
  byte bStack_628;
  uint uStack_624;
  FGenericParticleHandleImp FStack_5d8;
  double dStack_5d0;
  double dStack_5c8;
  double dStack_5c0;
  double dStack_5b8;
  double dStack_5b0;
  double dStack_5a8;
  double dStack_5a0;
  double dStack_598;
  double dStack_590;
  double dStack_588;
  double dStack_580;
  double dStack_578;
  double dStack_568;
  double dStack_560;
  double dStack_558;
  double dStack_548;
  double dStack_540;
  double dStack_538;
  double dStack_528;
  double dStack_520;
  double dStack_518;
  double dStack_508;
  double dStack_500;
  double dStack_4f8;
  double dStack_4f0;
  double dStack_4e8;
  double dStack_4e0;
  double dStack_4d8;
  double dStack_4d0;
  double dStack_4c8;
  undefined1 auStack_4c0 [16];
  double dStack_4b0;
  double dStack_4a8;
  double dStack_4a0;
  double dStack_498;
  double dStack_480;
  double dStack_478;
  double dStack_470;
  double dStack_468;
  double dStack_450;
  TVector<double>_u_0 TStack_448;
  TVector<double>_u_0 TStack_428;
  TQuat<double> TStack_408;
  undefined1 auStack_3e8 [16];
  double dStack_3d8;
  double dStack_3c8;
  double dStack_3c0;
  double dStack_3b8;
  undefined1 auStack_3b0 [16];
  double dStack_3a0;
  undefined1 auStack_398 [16];
  double dStack_388;
  undefined1 auStack_378 [16];
  double adStack_358 [2];
  double adStack_348 [2];
  double adStack_338 [2];
  double adStack_328 [2];
  double adStack_318 [2];
  double adStack_308 [2];
  TVector<double>_u_0 TStack_2f8;
  double dStack_2e0;
  double dStack_2d8;
  double dStack_2d0;
  FColor_u_0 FStack_2c8;
  undefined1 uStack_2c0;
  undefined4 uStack_2b8;
  undefined1 uStack_2b4;
  float fStack_2b0;
  void *pvStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined4 uStack_150;
  TRigidTransform<double,3> TStack_148;
  ulonglong uStack_e8;
  
  this = *(FCCDManager **)((longlong)param_1 + 8);
  uVar39 = *param_2;
  dVar4 = **(double **)((longlong)param_1 + 0x10);
  if (**(char **)param_1 == '\0') {
    ::Chaos::FCCDManager::ApplyIslandSweptConstraints(this,uVar39,dVar4);
    return;
  }
  uStack_e8 = __security_cookie.value ^ (ulonglong)auStackY_658;
  lVar36 = (longlong)(int)uVar39;
  uVar44 = ~uVar39 >> 0x1f;
  uVar35 = 0;
  if ((int)uVar39 < (this->IslandConstraintStart).ArrayNum) {
    uVar35 = uVar44;
  }
  if ((uVar35 == 0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar24)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  uStack_624 = *(uint *)((this->IslandConstraintStart).AllocatorInstance.Data + lVar36 * 4);
  uVar35 = 0;
  if ((int)uVar39 < (this->IslandConstraintNum).ArrayNum) {
    uVar35 = uVar44;
  }
  if ((uVar35 == 0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar24)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  iVar41 = *(int *)((this->IslandConstraintNum).AllocatorInstance.Data + lVar36 * 4);
  uVar35 = 0;
  if ((int)uVar39 < (this->IslandConstraintEnd).ArrayNum) {
    uVar35 = uVar44;
  }
  if ((uVar35 == 0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar24)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  iVar5 = *(int *)((this->IslandConstraintEnd).AllocatorInstance.Data + lVar36 * 4);
  uVar35 = 0;
  if ((int)uVar39 < (this->IslandParticleStart).ArrayNum) {
    uVar35 = uVar44;
  }
  if ((uVar35 == 0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar24)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  uVar35 = *(uint *)((this->IslandParticleStart).AllocatorInstance.Data + lVar36 * 4);
  uVar42 = (ulonglong)(int)uVar35;
  uVar26 = 0;
  if ((int)uVar39 < (this->IslandParticleNum).ArrayNum) {
    uVar26 = uVar44;
  }
  if ((uVar26 == 0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar24)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  iVar6 = *(int *)((this->IslandParticleNum).AllocatorInstance.Data + lVar36 * 4);
  if (iVar41 != 0) {
    if ((int)uVar35 < (int)(iVar6 + uVar35)) {
      lVar36 = uVar42 * 8;
      uVar44 = uVar35;
      do {
        uVar34 = ~uVar44 >> 0x1f;
        uVar26 = 0;
        if ((int)uVar44 < (this->GroupedCCDParticles).ArrayNum) {
          uVar26 = uVar34;
        }
        if ((uVar26 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
        puVar7 = (undefined8 *)
                 **(longlong **)((this->GroupedCCDParticles).AllocatorInstance.Data + lVar36);
        uVar26 = 0;
        if ((int)uVar44 < (this->GroupedCCDParticles).ArrayNum) {
          uVar26 = uVar34;
        }
        if ((uVar26 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
        plVar8 = (longlong *)
                 **(longlong **)((this->GroupedCCDParticles).AllocatorInstance.Data + lVar36);
        uVar26 = *(uint *)(plVar8 + 1);
        lVar43 = (longlong)(int)uVar26;
        lVar40 = *plVar8;
        uVar27 = 0;
        if ((int)uVar26 < *(int *)(lVar40 + 0x550)) {
          uVar27 = ~uVar26 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
        lVar40 = *(longlong *)(lVar40 + 0x548);
        uVar26 = 0;
        if ((int)uVar44 < (this->GroupedCCDParticles).ArrayNum) {
          uVar26 = uVar34;
        }
        if ((uVar26 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
        puVar9 = (undefined8 *)
                 **(longlong **)((this->GroupedCCDParticles).AllocatorInstance.Data + lVar36);
        ::Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetV
                  ((TKinematicGeometryParticlesImp<double,3,0> *)*puVar9,
                   (TVector<double,3> *)&dStack_5b8,*(int *)(puVar9 + 1));
        dStack_5a0 = *(double *)(lVar40 + lVar43 * 0x18) - dStack_5b8 * dVar4;
        dStack_598 = *(double *)(lVar40 + 8 + lVar43 * 0x18) - dStack_5b0 * dVar4;
        dStack_590 = *(double *)(lVar40 + 0x10 + lVar43 * 0x18) - dStack_5a8 * dVar4;
        ::Chaos::TParticles<double,3>::SetX
                  ((TParticles<double,3> *)*puVar7,*(int *)(puVar7 + 1),
                   (TVector<double,3> *)&dStack_5a0);
        uVar44 = uVar44 + 1;
        lVar36 = lVar36 + 8;
      } while ((int)uVar44 < (int)(iVar6 + uVar35));
      uVar42 = (ulonglong)uVar35;
    }
    ::Chaos::FCCDManager::ResetIslandParticles(this,uVar39);
    ::Chaos::FCCDManager::ResetIslandConstraints(this,uVar39);
    dVar18 = __real_3ff0000000000000;
    bStack_628 = 1;
    if ((int)uStack_624 < iVar5) {
      lVar40 = (longlong)(int)uStack_624;
      lVar36 = lVar40 * 8;
      do {
        if (bStack_628 != 0) {
          pFVar10 = (this->SortedCCDConstraints).AllocatorInstance.Data;
          pFVar1 = pFVar10 + (longlong)(int)uStack_624 * 8;
          pFVar10 = pFVar10 + (iVar41 + lVar40) * 8;
          std::
          _Sort_unchecked<Chaos::FCCDConstraint_*_*,bool_(__cdecl*)(Chaos::FCCDConstraint_const_*,Chaos::FCCDConstraint_const_*)>
                    ((FCCDConstraint **)pFVar1,(FCCDConstraint **)pFVar10,
                     (longlong)pFVar10 - (longlong)pFVar1 >> 3,::Chaos::CCDConstraintSortPredicate);
          bStack_628 = 0;
        }
        uVar39 = 0;
        if ((int)uStack_624 < (this->SortedCCDConstraints).ArrayNum) {
          uVar39 = ~uStack_624 >> 0x1f;
        }
        if ((uVar39 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
        pFVar11 = *(FCCDConstraint **)((this->SortedCCDConstraints).AllocatorInstance.Data + lVar36)
        ;
        pFVar12 = pFVar11->Particle[0];
        pFVar13 = pFVar11->Particle[1];
        dVar20 = (double)pFVar11->SweptConstraint->CCDTimeOfImpact;
        if (dVar18 < dVar20) break;
        if ((pFVar12 == (FCCDParticle *)0x0) || (pFVar12->Done != false)) {
          bVar24 = true;
        }
        else {
          bVar24 = false;
        }
        if ((pFVar13 == (FCCDParticle *)0x0) || (pFVar13->Done != false)) {
          bVar22 = true;
        }
        else {
          bVar22 = false;
        }
        if ((!bVar24) || (!bVar22)) {
          pFVar11->ProcessedCount = pFVar11->ProcessedCount + 1;
          if ((pFVar12 != (FCCDParticle *)0x0) && (pFVar12->Done == false)) {
            ::Chaos::FCCDManager::AdvanceParticleXToTOI(this,pFVar12,dVar20,dVar4);
          }
          if ((pFVar13 != (FCCDParticle *)0x0) && (pFVar13->Done == false)) {
            ::Chaos::FCCDManager::AdvanceParticleXToTOI(this,pFVar13,dVar20,dVar4);
          }
          if (::Chaos::CVars::ChaosSolverDrawCCDInteractions != 0) {
            pFVar28 = pFVar11->SweptConstraint;
            uVar39 = 0;
            if (0 < (pFVar28->ManifoldPoints).ArrayNum) {
              lVar43 = 0;
              do {
                uVar44 = 0;
                if ((int)uVar39 < (pFVar28->ManifoldPoints).ArrayNum) {
                  uVar44 = ~uVar39 >> 0x1f;
                }
                if ((uVar44 == 0) &&
                   (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar24)) {
                  pcVar17 = (code *)swi(3);
                  (*pcVar17)();
                  return;
                }
                FVar14 = (pFVar28->ManifoldPoints).AllocatorInstance.SecondaryData;
                FVar37 = (ForElementType<Chaos::FManifoldPoint>)&pFVar28->ManifoldPoints;
                if (FVar14 != (ForElementType<Chaos::FManifoldPoint>)0x0) {
                  FVar37 = FVar14;
                }
                if ((*(byte *)(lVar43 + 0x30 + (longlong)FVar37) & 1) == 0) {
                  pFVar28 = pFVar11->SweptConstraint;
                  uVar3 = *(undefined8 *)(lVar43 + 0xc + (longlong)FVar37);
                  dStack_3c8 = (double)(float)uVar3;
                  dStack_3c0 = (double)(float)((ulonglong)uVar3 >> 0x20);
                  auVar65 = *(undefined1 (*) [16])&pFVar28->ShapeWorldTransforms[1].field_0x10;
                  dVar50 = auVar65._0_8_;
                  auVar60 = *(undefined1 (*) [16])(pFVar28->ShapeWorldTransforms + 1);
                  auVar67._8_4_ = SUB84(dStack_3c0,0);
                  auVar67._0_8_ = dStack_3c8;
                  uVar70 = (undefined4)((ulonglong)dStack_3c0 >> 0x20);
                  auVar67._12_4_ = uVar70;
                  dVar66 = *(double *)&pFVar28->ShapeWorldTransforms[1].field_0x18;
                  dStack_3b8 = (double)*(float *)(lVar43 + 0x14 + (longlong)FVar37);
                  auVar46 = *(undefined1 (*) [16])(pFVar28->ShapeWorldTransforms + 1);
                  dVar55 = auVar65._8_8_;
                  auVar57 = blendpd(auVar46,auVar65,2);
                  auVar68._0_8_ = auVar67._8_8_ * auVar46._0_8_ - auVar46._8_8_ * dStack_3c8;
                  auVar68._8_8_ = dStack_3b8 * auVar46._8_8_ - dVar50 * dStack_3c0;
                  auVar45._8_4_ = SUB84(dStack_3c0,0);
                  auVar45._0_8_ = dStack_3c8;
                  auVar45._12_4_ = uVar70;
                  auVar46._8_8_ = 0;
                  auVar46._0_8_ = dStack_3b8;
                  auVar46 = blendpd(auVar45,auVar46,2);
                  auVar47._0_8_ = auVar46._0_8_ * dVar50 - auVar57._0_8_ * dStack_3b8;
                  auVar47._8_8_ = auVar46._8_8_ * dVar55 - auVar57._8_8_ * 0.0;
                  auVar46 = blendpd(auVar68,auVar47,2);
                  auVar69._0_8_ = auVar46._0_8_ + auVar46._0_8_;
                  auVar69._8_8_ = auVar46._8_8_ + auVar46._8_8_;
                  dVar72 = auVar68._8_8_ + auVar68._8_8_;
                  dVar51 = auVar47._0_8_ + auVar47._0_8_;
                  uVar70 = (undefined4)((ulonglong)dVar51 >> 0x20);
                  auVar61._8_4_ = SUB84(dVar51,0);
                  auVar61._0_8_ = dVar72;
                  auVar61._12_4_ = uVar70;
                  auVar58._8_4_ = SUB84(dVar51,0);
                  auVar58._0_8_ = dVar72;
                  auVar58._12_4_ = uVar70;
                  auVar46 = blendpd(auVar58,auVar69,2);
                  auVar62._0_8_ = auVar61._8_8_ * auVar60._0_8_ - auVar60._8_8_ * dVar72;
                  auVar62._8_8_ = auVar69._0_8_ * auVar60._8_8_ - dVar50 * dVar51;
                  auVar57._8_4_ = SUB84(auVar62._8_8_,0);
                  auVar57._0_8_ = auVar62._0_8_;
                  auVar57._12_4_ = (int)((ulonglong)auVar62._8_8_ >> 0x20);
                  auVar60 = blendpd(auVar60,auVar65,2);
                  auVar59._0_8_ = auVar46._0_8_ * dVar50 - auVar60._0_8_ * auVar69._0_8_;
                  auVar59._8_8_ = auVar46._8_8_ * dVar55 - auVar60._8_8_ * auVar69._8_8_;
                  uVar3 = *(undefined8 *)(lVar43 + 0x18 + (longlong)FVar37);
                  dVar56 = (double)(float)uVar3;
                  dVar71 = (double)(float)((ulonglong)uVar3 >> 0x20);
                  uVar70 = SUB84(dVar71,0);
                  uVar76 = (undefined4)((ulonglong)dVar71 >> 0x20);
                  auVar73._8_4_ = uVar70;
                  auVar73._0_8_ = dVar56;
                  auVar73._12_4_ = uVar76;
                  dVar19 = dVar72 * dVar66 + dStack_3c8 + auVar57._8_8_ +
                           *(double *)&pFVar28->ShapeWorldTransforms[1].field_0x20;
                  dVar72 = dVar51 * dVar66 + dStack_3c0 + auVar59._0_8_ +
                           *(double *)&pFVar28->ShapeWorldTransforms[1].field_0x28;
                  uVar77 = SUB84(dVar72,0);
                  uVar78 = (undefined4)((ulonglong)dVar72 >> 0x20);
                  dStack_3a0 = (double)*(float *)(lVar43 + 0x20 + (longlong)FVar37);
                  auVar60 = blendpd(auVar62,auVar59,2);
                  auStack_378 = *(undefined1 (*) [16])(pFVar28->ShapeWorldTransforms + 1);
                  dVar66 = auVar69._0_8_ * dVar66 + dStack_3b8 + auVar60._0_8_ +
                           *(double *)&pFVar28->ShapeWorldTransforms[1].field_0x30;
                  auVar46 = blendpd(auStack_378,auVar65,2);
                  auVar74._0_8_ = auVar73._8_8_ * auStack_378._0_8_ - auStack_378._8_8_ * dVar56;
                  auVar74._8_8_ = dStack_3a0 * auStack_378._8_8_ - dVar50 * dVar71;
                  auVar48._8_4_ = uVar70;
                  auVar48._0_8_ = dVar56;
                  auVar48._12_4_ = uVar76;
                  auVar60._8_8_ = 0;
                  auVar60._0_8_ = dStack_3a0;
                  auVar60 = blendpd(auVar48,auVar60,2);
                  auStack_398._8_4_ = uVar77;
                  auStack_398._0_8_ = dVar19;
                  auStack_398._12_4_ = uVar78;
                  auVar49._0_8_ = auVar60._0_8_ * dVar50 - auVar46._0_8_ * dStack_3a0;
                  auVar49._8_8_ = auVar60._8_8_ * dVar55 - auVar46._8_8_ * 0.0;
                  auStack_3b0._8_4_ = uVar70;
                  auStack_3b0._0_8_ = dVar56;
                  auStack_3b0._12_4_ = uVar76;
                  auVar60 = *(undefined1 (*) [16])(pFVar28->ShapeWorldTransforms + 1);
                  auVar46 = blendpd(auVar74,auVar49,2);
                  dVar72 = auVar74._8_8_ + auVar74._8_8_;
                  dVar51 = auVar49._0_8_ + auVar49._0_8_;
                  uVar70 = (undefined4)((ulonglong)dVar51 >> 0x20);
                  auVar75._0_8_ = auVar46._0_8_ + auVar46._0_8_;
                  auVar75._8_8_ = auVar46._8_8_ + auVar46._8_8_;
                  auVar63._8_4_ = SUB84(dVar51,0);
                  auVar63._0_8_ = dVar72;
                  auVar63._12_4_ = uVar70;
                  auVar52._8_4_ = SUB84(dVar51,0);
                  auVar52._0_8_ = dVar72;
                  auVar52._12_4_ = uVar70;
                  auVar46 = blendpd(auVar52,auVar75,2);
                  auVar64._0_8_ = auVar63._8_8_ * auVar60._0_8_ - auVar60._8_8_ * dVar72;
                  auVar64._8_8_ = auVar75._0_8_ * auVar60._8_8_ - dVar50 * dVar51;
                  auVar60 = blendpd(auVar60,auVar65,2);
                  auVar65._8_4_ = SUB84(auVar64._8_8_,0);
                  auVar65._0_8_ = auVar64._0_8_;
                  auVar65._12_4_ = (int)((ulonglong)auVar64._8_8_ >> 0x20);
                  auVar53._0_8_ = auVar46._0_8_ * dVar50 - auVar60._0_8_ * auVar75._0_8_;
                  auVar53._8_8_ = auVar46._8_8_ * dVar55 - auVar60._8_8_ * auVar75._8_8_;
                  dVar72 = dVar72 * dVar55 + dVar56 + auVar65._8_8_;
                  dVar51 = dVar51 * dVar55 + dVar71 + auVar53._0_8_;
                  auVar65 = blendpd(auVar64,auVar53,2);
                  auStack_3e8._8_4_ = SUB84(dVar51,0);
                  auStack_3e8._0_8_ = dVar72;
                  auStack_3e8._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
                  dVar71 = auVar75._0_8_ * dVar55 + dStack_3a0 + auVar65._0_8_;
                  pFVar29 = ::Chaos::FDebugDrawQueue::GetInstance();
                  fVar23 = ::Chaos::CVars::ChaosSolverDebugDebugDrawSettings.LineThickness;
                  uVar25 = (undefined1)
                           ::Chaos::CVars::ChaosSolverDebugDebugDrawSettings.DrawPriority;
                  auVar21._4_8_ = auVar53._8_8_;
                  auVar21._0_4_ = (int)((ulonglong)dVar19 >> 0x20);
                  auVar54._0_8_ = auVar21._0_8_ << 0x20;
                  auVar54._8_4_ = uVar77;
                  auVar54._12_4_ = uVar78;
                  dVar56 = (double)(::Chaos::CVars::ChaosSolverDebugDebugDrawSettings.DrawScale *
                                   __real_42480000);
                  dStack_3d8 = dVar71;
                  dStack_388 = dVar66;
                  pFVar30 = ::Chaos::FDebugDrawQueue::GetInstance();
                  if ((pFVar30->bEnableDebugDrawing != false) &&
                     (pFVar30 = ::Chaos::FDebugDrawQueue::GetInstance(), 0 < pFVar30->NumConsumers))
                  {
                    lpCriticalSection = &pFVar29->CommandQueueCS;
                    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                      ReportNotNullPtr();
                    }
                    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
                    auStack_4c0._8_4_ = uVar77;
                    auStack_4c0._0_8_ = dVar19;
                    auStack_4c0._12_4_ = uVar78;
                    dStack_4b0 = dVar66;
                    bVar24 = ::Chaos::FDebugDrawQueue::AcceptCommand
                                       (pFVar29,1,(TVector<double,3> *)auStack_4c0);
                    if (bVar24) {
                      pvStack_230 = (void *)0x0;
                      uStack_228 = 0;
                      uStack_220 = 0;
                      FStack_2c8 = FColor::Red.field0_0x0;
                      fStack_2b0 = fVar23;
                      TStack_2f8._8_4_ = uVar77;
                      TStack_2f8._0_8_ = dVar19;
                      TStack_2f8._12_4_ = uVar78;
                      uStack_2c0 = 0;
                      uStack_2b8 = 0x38d1b717;
                      uStack_150 = 1;
                      TStack_2f8._s_0.Z = dVar66;
                      dStack_2e0 = dVar56 * dVar72 + dVar19;
                      dStack_2d8 = dVar56 * dVar51 + auVar54._8_8_;
                      dStack_2d0 = dVar56 * dVar71 + dVar66;
                      uStack_2b4 = uVar25;
                      ::Chaos::FDebugDrawQueue::AddCommand
                                (pFVar29,(FLatentDrawCommand *)&TStack_2f8._s_0);
                      if (pvStack_230 != (void *)0x0) {
                        FMemory::Free(pvStack_230);
                      }
                    }
                    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
                  }
                }
                pFVar28 = pFVar11->SweptConstraint;
                uVar39 = uVar39 + 1;
                lVar43 = lVar43 + 0x6c;
              } while ((int)uVar39 < (pFVar28->ManifoldPoints).ArrayNum);
            }
          }
          if (::Chaos::CVars::CCDAllowedDepthBoundsScale <= __real_00000000) {
            ::Chaos::FCCDManager::ApplyImpulse(this,pFVar11);
          }
          if (pFVar12 != (FCCDParticle *)0x0) {
            uVar39 = pFVar11->FastMovingKinematicIndex;
            if (uVar39 == 0xffffffff) {
              pTVar16 = pFVar12->Particle;
              pTVar31 = ::Chaos::TParticles<double,3>::GetX
                                  (*(TParticles<double,3> **)pTVar16,*(int *)&pTVar16->field_0x8);
              ::Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetP(pTVar16,pTVar31);
            }
            else {
              pFVar28 = pFVar11->SweptConstraint;
              if ((1 < uVar39) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(ParticleIndex >= 0) && (ParticleIndex < 2)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\PBDCollisionConstraint.h"
                                      ,0x15f,L""), bVar24)) {
                pcVar17 = (code *)swi(3);
                (*pcVar17)();
                return;
              }
              pTVar15 = pFVar28->Particle[(int)uVar39];
              ::Chaos::FPBDCollisionConstraint::CalculateWorldContactNormal
                        (pFVar11->SweptConstraint,(TVector<double,3> *)&dStack_588);
              pTVar33 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
              if (*(undefined1 *)((longlong)&pTVar15->_padding_ + 4) != '\0') {
                pTVar33 = pTVar15;
              }
              dVar72 = (double)::Chaos::FGenericParticleHandleImp::ZeroVector._16_8_;
              dVar51 = (double)::Chaos::FGenericParticleHandleImp::ZeroVector._0_8_;
              dVar56 = (double)::Chaos::FGenericParticleHandleImp::ZeroVector._8_8_;
              if (pTVar33 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
                ::Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetV
                          ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar33->_padding_,
                           (TVector<double,3> *)&dStack_4a8,(int)pTVar33->_padding_);
                dVar72 = dStack_498;
                dVar51 = dStack_4a8;
                dVar56 = dStack_4a0;
              }
              dVar71 = (dVar18 - dVar20) * dVar4;
              dStack_558 = dVar71 * dVar51 * dStack_588 + dVar71 * dVar56 * dStack_580 +
                           dVar71 * dVar72 * dStack_578;
              dStack_560 = dStack_580 * dStack_558;
              dStack_568 = dStack_558 * dStack_588;
              dStack_558 = dStack_578 * dStack_558;
              dStack_480 = dVar72;
              ::Chaos::FCCDManager::ClipParticleP(this,pFVar12,(TVector<double,3> *)&dStack_568);
            }
            pFVar12->Done = true;
          }
          if (pFVar13 != (FCCDParticle *)0x0) {
            uVar39 = pFVar11->FastMovingKinematicIndex;
            if (uVar39 == 0xffffffff) {
              pTVar16 = pFVar13->Particle;
              pTVar31 = ::Chaos::TParticles<double,3>::GetX
                                  (*(TParticles<double,3> **)pTVar16,*(int *)&pTVar16->field_0x8);
              ::Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetP(pTVar16,pTVar31);
            }
            else {
              pFVar28 = pFVar11->SweptConstraint;
              if ((1 < uVar39) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(ParticleIndex >= 0) && (ParticleIndex < 2)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\PBDCollisionConstraint.h"
                                      ,0x15f,L""), bVar24)) {
                pcVar17 = (code *)swi(3);
                (*pcVar17)();
                return;
              }
              pTVar15 = pFVar28->Particle[(int)uVar39];
              ::Chaos::FPBDCollisionConstraint::CalculateWorldContactNormal
                        (pFVar11->SweptConstraint,(TVector<double,3> *)&dStack_548);
              pTVar33 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
              if (*(undefined1 *)((longlong)&pTVar15->_padding_ + 4) != '\0') {
                pTVar33 = pTVar15;
              }
              dVar72 = (double)::Chaos::FGenericParticleHandleImp::ZeroVector._16_8_;
              dVar51 = (double)::Chaos::FGenericParticleHandleImp::ZeroVector._0_8_;
              dVar56 = (double)::Chaos::FGenericParticleHandleImp::ZeroVector._8_8_;
              if (pTVar33 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
                ::Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetV
                          ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar33->_padding_,
                           (TVector<double,3> *)&dStack_478,(int)pTVar33->_padding_);
                dVar72 = dStack_468;
                dVar51 = dStack_478;
                dVar56 = dStack_470;
              }
              dVar71 = (dVar18 - dVar20) * dVar4;
              dStack_518 = dVar71 * dVar51 * dStack_548 + dVar71 * dVar56 * dStack_540 +
                           dVar71 * dVar72 * dStack_538;
              dStack_520 = dStack_540 * dStack_518;
              dStack_528 = dStack_518 * dStack_548;
              dStack_518 = dStack_538 * dStack_518;
              dStack_450 = dVar72;
              ::Chaos::FCCDManager::ClipParticleP(this,pFVar13,(TVector<double,3> *)&dStack_528);
            }
            pFVar13->Done = true;
          }
          if (pFVar12 != (FCCDParticle *)0x0) {
            bVar24 = ::Chaos::FCCDManager::UpdateParticleSweptConstraints(this,pFVar12,dVar20,dVar4)
            ;
            bStack_628 = bStack_628 | bVar24;
          }
          if (pFVar13 != (FCCDParticle *)0x0) {
            bVar24 = ::Chaos::FCCDManager::UpdateParticleSweptConstraints(this,pFVar13,dVar20,dVar4)
            ;
            bStack_628 = bStack_628 | bVar24;
          }
        }
        uStack_624 = uStack_624 + 1;
        lVar36 = lVar36 + 8;
      } while ((int)uStack_624 < iVar5);
    }
    if (::Chaos::CVars::ChaosSolverDrawCCDInteractions != 0) {
      iVar41 = (int)uVar42;
      uVar38 = uVar42 & 0xffffffff;
      if (iVar41 < iVar6 + iVar41) {
        lVar36 = (longlong)iVar41 * 8;
        do {
          uVar44 = (uint)uVar38;
          uVar39 = 0;
          if ((int)uVar44 < (this->GroupedCCDParticles).ArrayNum) {
            uVar39 = ~uVar44 >> 0x1f;
          }
          if ((uVar39 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar17 = (code *)swi(3);
            (*pcVar17)();
            return;
          }
          adStack_358[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
          adStack_358[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
          adStack_348[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
          adStack_348[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
          adStack_338[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
          adStack_338[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
          adStack_328[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
          adStack_328[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
          pTVar15 = (TGeometryParticleHandleImp<double,3,1> *)
                    **(undefined8 **)((this->GroupedCCDParticles).AllocatorInstance.Data + lVar36);
          adStack_318[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
          adStack_318[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
          adStack_308[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
          adStack_308[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
          pFVar29 = ::Chaos::FDebugDrawQueue::GetInstance();
          if ((pFVar29->bEnableDebugDrawing != false) &&
             (pFVar29 = ::Chaos::FDebugDrawQueue::GetInstance(), 0 < pFVar29->NumConsumers)) {
            FStack_5d8.MHandle = pTVar15;
            pTVar32 = ::Chaos::FGenericParticleHandleImp::GetTransformPQ(&FStack_5d8,&TStack_148);
            ::Chaos::DebugDraw::DrawParticleShapesImpl
                      ((TRigidTransform<double,3> *)adStack_358,pTVar15,pTVar32,&FColor::Green,
                       &::Chaos::CVars::ChaosSolverDebugDebugDrawSettings);
          }
          uVar38 = (ulonglong)(uVar44 + 1);
          lVar36 = lVar36 + 8;
        } while ((int)(uVar44 + 1) < iVar6 + iVar41);
        uVar42 = (ulonglong)uVar35;
      }
    }
    iVar41 = (int)uVar42;
    if (iVar41 < iVar6 + iVar41) {
      lVar36 = (longlong)iVar41 * 8;
      do {
        uVar44 = (uint)uVar42;
        uVar35 = ~uVar44 >> 0x1f;
        uVar39 = 0;
        if ((int)uVar44 < (this->GroupedCCDParticles).ArrayNum) {
          uVar39 = uVar35;
        }
        if ((uVar39 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
        puVar7 = (undefined8 *)
                 **(longlong **)((this->GroupedCCDParticles).AllocatorInstance.Data + lVar36);
        ::Chaos::TPBDRigidParticles<double,3>::PCom
                  ((TPBDRigidParticles<double,3> *)*puVar7,(TVector<double,3> *)&dStack_4f0,
                   *(int *)(puVar7 + 1));
        uVar39 = 0;
        if ((int)uVar44 < (this->GroupedCCDParticles).ArrayNum) {
          uVar39 = uVar35;
        }
        if ((uVar39 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
        puVar7 = (undefined8 *)
                 **(longlong **)((this->GroupedCCDParticles).AllocatorInstance.Data + lVar36);
        ::Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetV
                  ((TKinematicGeometryParticlesImp<double,3,0> *)*puVar7,
                   (TVector<double,3> *)&dStack_508,*(int *)(puVar7 + 1));
        uVar39 = 0;
        if ((int)uVar44 < (this->GroupedCCDParticles).ArrayNum) {
          uVar39 = uVar35;
        }
        dVar18 = dStack_4f0 - dStack_508 * dVar4;
        dVar72 = dStack_4e8 - dStack_500 * dVar4;
        dVar20 = dStack_4e0 - dStack_4f8 * dVar4;
        if ((uVar39 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
        plVar8 = (longlong *)
                 **(longlong **)((this->GroupedCCDParticles).AllocatorInstance.Data + lVar36);
        uVar39 = *(uint *)(plVar8 + 1);
        lVar43 = (longlong)(int)uVar39;
        lVar40 = *plVar8;
        uVar35 = 0;
        if ((int)uVar39 < *(int *)(lVar40 + 0x50)) {
          uVar35 = ~uVar39 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
        lVar40 = *(longlong *)(lVar40 + 0x48);
        TStack_408.X = (double)*(float *)(lVar40 + lVar43 * 0x10);
        TStack_408.Y = (double)*(float *)(lVar40 + 4 + lVar43 * 0x10);
        uVar3 = *(undefined8 *)(lVar40 + 8 + lVar43 * 0x10);
        TStack_408.Z = (double)(float)uVar3;
        TStack_408.W = (double)(float)((ulonglong)uVar3 >> 0x20);
        uVar39 = 0;
        if ((int)uVar44 < (this->GroupedCCDParticles).ArrayNum) {
          uVar39 = ~uVar44 >> 0x1f;
        }
        if ((uVar39 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
        plVar8 = (longlong *)
                 **(longlong **)((this->GroupedCCDParticles).AllocatorInstance.Data + lVar36);
        uVar39 = *(uint *)(plVar8 + 1);
        lVar40 = *plVar8;
        uVar35 = 0;
        if ((int)uVar39 < *(int *)(lVar40 + 0x400)) {
          uVar35 = ~uVar39 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
        lVar40 = *(longlong *)(lVar40 + 0x3f8);
        pdVar2 = (double *)(lVar40 + (longlong)(int)uVar39 * 0x18);
        TStack_448._s_0.X = *pdVar2;
        TStack_448._s_0.Y = pdVar2[1];
        TStack_448._s_0.Z = *(double *)(lVar40 + 0x10 + (longlong)(int)uVar39 * 0x18);
        UE::Math::TQuat<double>::RotateVector
                  (&TStack_408,(TVector<double> *)&TStack_428._s_0,
                   (TVector<double> *)&TStack_448._s_0);
        dStack_5c0 = TStack_428._s_0.Z;
        dStack_5d0 = TStack_428._s_0.X;
        dStack_5c8 = TStack_428._s_0.Y;
        uVar39 = 0;
        if ((int)uVar44 < (this->GroupedCCDParticles).ArrayNum) {
          uVar39 = ~uVar44 >> 0x1f;
        }
        if ((uVar39 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
        dStack_4d8 = dVar18 - dStack_5d0;
        dStack_4d0 = dVar72 - dStack_5c8;
        dStack_4c8 = dVar20 - dStack_5c0;
        puVar7 = (undefined8 *)
                 **(longlong **)((this->GroupedCCDParticles).AllocatorInstance.Data + lVar36);
        ::Chaos::TParticles<double,3>::SetX
                  ((TParticles<double,3> *)*puVar7,*(int *)(puVar7 + 1),
                   (TVector<double,3> *)&dStack_4d8);
        uVar42 = (ulonglong)(uVar44 + 1);
        lVar36 = lVar36 + 8;
      } while ((int)(uVar44 + 1) < iVar6 + iVar41);
    }
  }
  return;
}

// Call @ 143759510

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::TBoundingVolumeHierarchy<TArray<Chaos::TSphere<double,3>_*,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>::GenerateNextLevel'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::
  TBoundingVolumeHierarchy<TArray<Chaos::TSphere<double,3>_*,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
  ::GenerateNextLevel'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143759520

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::TBoundingVolumeHierarchy<TArray<Chaos::TSphere<double,3>_*,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>::GenerateNextLevel'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::
  TBoundingVolumeHierarchy<TArray<Chaos::TSphere<double,3>_*,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
  ::GenerateNextLevel'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143759530

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::TBoundingVolumeHierarchy<TArray<Chaos::TTetrahedron<double>_*,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>::GenerateNextLevel'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::
  TBoundingVolumeHierarchy<TArray<Chaos::TTetrahedron<double>_*,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
  ::GenerateNextLevel'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143759540

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::TBoundingVolumeHierarchy<TArray<Chaos::TTetrahedron<double>_*,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>::GenerateNextLevel'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::
  TBoundingVolumeHierarchy<TArray<Chaos::TTetrahedron<double>_*,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
  ::GenerateNextLevel'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143759550

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::TBoundingVolumeHierarchy<TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>::GenerateNextLevel'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::
  TBoundingVolumeHierarchy<TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
  ::GenerateNextLevel'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143759560

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::TBoundingVolumeHierarchy<TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>::GenerateNextLevel'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::
  TBoundingVolumeHierarchy<TArray<TRefCountPtr<Chaos::FImplicitObject>,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
  ::GenerateNextLevel'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143759570

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::TBoundingVolumeHierarchy<TArray<Chaos::Private::FImplicitBVHObject,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>::GenerateNextLevel'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::
  TBoundingVolumeHierarchy<TArray<Chaos::Private::FImplicitBVHObject,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
  ::GenerateNextLevel'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143759580

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::TBoundingVolumeHierarchy<TArray<Chaos::Private::FImplicitBVHObject,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>::GenerateNextLevel'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::
  TBoundingVolumeHierarchy<TArray<Chaos::Private::FImplicitBVHObject,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
  ::GenerateNextLevel'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143759590

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::TBoundingVolumeHierarchy<Chaos::TGeometryParticlesImp<double,3,0>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>::GenerateNextLevel'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::
  TBoundingVolumeHierarchy<Chaos::TGeometryParticlesImp<double,3,0>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
  ::GenerateNextLevel'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 1437595a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::TBoundingVolumeHierarchy<Chaos::TGeometryParticlesImp<double,3,0>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>::GenerateNextLevel'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::
  TBoundingVolumeHierarchy<Chaos::TGeometryParticlesImp<double,3,0>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
  ::GenerateNextLevel'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 1437595b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::TBoundingVolumeHierarchy<Chaos::TGeometryParticlesImp<double,3,0>,Chaos::TBoundingVolume<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3>,double,3>::GenerateNextLevel'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::
  TBoundingVolumeHierarchy<Chaos::TGeometryParticlesImp<double,3,0>,Chaos::TBoundingVolume<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3>,double,3>
  ::GenerateNextLevel'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 1437595c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::TBoundingVolumeHierarchy<Chaos::TGeometryParticlesImp<double,3,0>,Chaos::TBoundingVolume<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3>,double,3>::GenerateNextLevel'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::
  TBoundingVolumeHierarchy<Chaos::TGeometryParticlesImp<double,3,0>,Chaos::TBoundingVolume<Chaos::TGeometryParticleHandleImp<double,3,1>_*,double,3>,double,3>
  ::GenerateNextLevel'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 1437595d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::TBoundingVolumeHierarchy<Chaos::TPBDRigidParticles<double,3>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>::GenerateNextLevel'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::
  TBoundingVolumeHierarchy<Chaos::TPBDRigidParticles<double,3>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
  ::GenerateNextLevel'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 1437595e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::TBoundingVolumeHierarchy<Chaos::TPBDRigidParticles<double,3>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>::GenerateNextLevel'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::
  TBoundingVolumeHierarchy<Chaos::TPBDRigidParticles<double,3>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
  ::GenerateNextLevel'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 1437595f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::TBoundingVolumeHierarchy<Chaos::TPBDRigidParticles<double,3>,Chaos::TBoundingVolume<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3>,double,3>::GenerateNextLevel'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::
  TBoundingVolumeHierarchy<Chaos::TPBDRigidParticles<double,3>,Chaos::TBoundingVolume<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3>,double,3>
  ::GenerateNextLevel'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143759600

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::TBoundingVolumeHierarchy<Chaos::TPBDRigidParticles<double,3>,Chaos::TBoundingVolume<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3>,double,3>::GenerateNextLevel'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::
  TBoundingVolumeHierarchy<Chaos::TPBDRigidParticles<double,3>,Chaos::TBoundingVolume<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,double,3>,double,3>
  ::GenerateNextLevel'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143759610

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::TBoundingVolumeHierarchy<Chaos::TParticles<double,3>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>::GenerateNextLevel'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::
  TBoundingVolumeHierarchy<Chaos::TParticles<double,3>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
  ::GenerateNextLevel'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143759620

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::TBoundingVolumeHierarchy<Chaos::TParticles<double,3>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>::GenerateNextLevel'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::
  TBoundingVolumeHierarchy<Chaos::TParticles<double,3>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
  ::GenerateNextLevel'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143759630

FTlsAutoCleanup * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
::Call(void *param_1)

{
  DWORD DVar1;
  FTlsAutoCleanup *pFVar2;
  
  pFVar2 = ::operator_new(0x240);
  if (pFVar2 != (FTlsAutoCleanup *)0x0) {
    memset(pFVar2 + 1,0,0x238);
    *pFVar2 = (FTlsAutoCleanup)&___7__TThreadSingleton_VFChaosVDThreadContext____6B_;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(pFVar2 + 1) = DVar1;
    *pFVar2 = (FTlsAutoCleanup)&___7FChaosVDThreadContext__6B_;
    pFVar2[0x42] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar2 + 0x43) = 0;
    *(undefined4 *)&pFVar2[0x43].field_0x4 = 0x10;
    pFVar2[0x44] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar2 + 0x45) = 0;
    pFVar2[0x46] = (FTlsAutoCleanup)0x0;
    pFVar2[0x47] = (FTlsAutoCleanup)0x0;
    return pFVar2;
  }
  return (FTlsAutoCleanup *)0x0;
}

// Call @ 143759640

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FChaosVisualDebuggerTrace::TraceCharacterGroundConstraints'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `FChaosVisualDebuggerTrace::TraceCharacterGroundConstraints'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143759650

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FChaosVisualDebuggerTrace::TraceCollisionConstraintView'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `FChaosVisualDebuggerTrace::TraceCollisionConstraintView'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143759660

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FChaosVisualDebuggerTrace::TraceJointsConstraints'::__l2::<lambda_1>,void,int>::
Call(void *param_1,int *param_2)

{
  `FChaosVisualDebuggerTrace::TraceJointsConstraints'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143759670

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FChaosVisualDebuggerTrace::TraceParticles'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `FChaosVisualDebuggerTrace::TraceParticles'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143759680

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::DebugDraw::DrawConvexOptimizerShapes'::__l11::<lambda_1>,void,Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int>
::Call(void *param_1,FImplicitObject **param_2,TRigidTransform<double,3> *param_3,int *param_4,
      int *param_5,int *param_6)

{
  `Chaos::DebugDraw::DrawConvexOptimizerShapes'::__l11::<lambda_1>::operator()
            (param_1,*param_2,param_3,*param_4,*param_5,*param_6);
  return;
}

// Call @ 1437596b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::ParticleViewParallelForImp<Chaos::TParticleView<Chaos::TGeometryParticlesImp<double,3,0>_>,`Chaos::TParticleView<Chaos::TGeometryParticlesImp<double,3,0>_>::ParallelFor<`FChaosVisualDebuggerTrace::TraceParticlesView<Chaos::TGeometryParticlesImp<double,3,0>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`Chaos::TParticleView<Chaos::TGeometryParticlesImp<double,3,0>_>::ParallelFor<`FChaosVisualDebuggerTrace::TraceParticlesView<Chaos::TGeometryParticlesImp<double,3,0>_>'::__l2::<lambda_1>_>'::__l2::<lambda_2>_>'::__l10::<lambda_2>,void,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  `Chaos::
  ParticleViewParallelForImp<Chaos::TParticleView<Chaos::TGeometryParticlesImp<double,3,0>_>,`Chaos::TParticleView<Chaos::TGeometryParticlesImp<double,3,0>_>::ParallelFor<`FChaosVisualDebuggerTrace::TraceParticlesView<Chaos::TGeometryParticlesImp<double,3,0>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`Chaos::TParticleView<Chaos::TGeometryParticlesImp<double,3,0>_>::ParallelFor<`FChaosVisualDebuggerTrace::TraceParticlesView<Chaos::TGeometryParticlesImp<double,3,0>_>'::__l2::<lambda_1>_>'::__l2::<lambda_2>_>'
  ::__l10::<lambda_2>::operator()(param_1,*param_2,*param_3);
  return;
}

// Call @ 1437596c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::ParticleViewParallelForImp<Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>,`Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<`FChaosVisualDebuggerTrace::TraceParticlesView<Chaos::TPBDRigidParticles<double,3>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<`FChaosVisualDebuggerTrace::TraceParticlesView<Chaos::TPBDRigidParticles<double,3>_>'::__l2::<lambda_1>_>'::__l2::<lambda_2>_>'::__l10::<lambda_2>,void,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  `Chaos::
  ParticleViewParallelForImp<Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>,`Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<`FChaosVisualDebuggerTrace::TraceParticlesView<Chaos::TPBDRigidParticles<double,3>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<`FChaosVisualDebuggerTrace::TraceParticlesView<Chaos::TPBDRigidParticles<double,3>_>'::__l2::<lambda_1>_>'::__l2::<lambda_2>_>'
  ::__l10::<lambda_2>::operator()(param_1,*param_2,*param_3);
  return;
}

// Call @ 1437596d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::ParticleViewParallelForImp<Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>,`Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<`FChaosVisualDebuggerTrace::TraceParticleClusterChildData'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<`FChaosVisualDebuggerTrace::TraceParticleClusterChildData'::__l2::<lambda_1>_>'::__l2::<lambda_2>_>'::__l10::<lambda_2>,void,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  `Chaos::
  ParticleViewParallelForImp<Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>,`Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<`FChaosVisualDebuggerTrace::TraceParticleClusterChildData'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<`FChaosVisualDebuggerTrace::TraceParticleClusterChildData'::__l2::<lambda_1>_>'::__l2::<lambda_2>_>'
  ::__l10::<lambda_2>::operator()(param_1,*param_2,*param_3);
  return;
}

// Call @ 1437596e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::ParticleViewParallelForImp<Chaos::TParticleView<Chaos::TGeometryParticlesImp<double,3,0>_>,`Chaos::TParticleView<Chaos::TGeometryParticlesImp<double,3,0>_>::ParallelFor<`FChaosVisualDebuggerTrace::TraceParticlesView<Chaos::TGeometryParticlesImp<double,3,0>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`Chaos::TParticleView<Chaos::TGeometryParticlesImp<double,3,0>_>::ParallelFor<`FChaosVisualDebuggerTrace::TraceParticlesView<Chaos::TGeometryParticlesImp<double,3,0>_>'::__l2::<lambda_1>_>'::__l2::<lambda_2>_>'::__l12::<lambda_3>,void,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  `Chaos::
  ParticleViewParallelForImp<Chaos::TParticleView<Chaos::TGeometryParticlesImp<double,3,0>_>,`Chaos::TParticleView<Chaos::TGeometryParticlesImp<double,3,0>_>::ParallelFor<`FChaosVisualDebuggerTrace::TraceParticlesView<Chaos::TGeometryParticlesImp<double,3,0>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`Chaos::TParticleView<Chaos::TGeometryParticlesImp<double,3,0>_>::ParallelFor<`FChaosVisualDebuggerTrace::TraceParticlesView<Chaos::TGeometryParticlesImp<double,3,0>_>'::__l2::<lambda_1>_>'::__l2::<lambda_2>_>'
  ::__l12::<lambda_3>::operator()(param_1,*param_2,*param_3);
  return;
}

// Call @ 1437596f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::ParticleViewParallelForImp<Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>,`Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<`FChaosVisualDebuggerTrace::TraceParticlesView<Chaos::TPBDRigidParticles<double,3>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<`FChaosVisualDebuggerTrace::TraceParticlesView<Chaos::TPBDRigidParticles<double,3>_>'::__l2::<lambda_1>_>'::__l2::<lambda_2>_>'::__l12::<lambda_3>,void,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  `Chaos::
  ParticleViewParallelForImp<Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>,`Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<`FChaosVisualDebuggerTrace::TraceParticlesView<Chaos::TPBDRigidParticles<double,3>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<`FChaosVisualDebuggerTrace::TraceParticlesView<Chaos::TPBDRigidParticles<double,3>_>'::__l2::<lambda_1>_>'::__l2::<lambda_2>_>'
  ::__l12::<lambda_3>::operator()(param_1,*param_2,*param_3);
  return;
}

// Call @ 143759700

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::ParticleViewParallelForImp<Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>,`Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<`FChaosVisualDebuggerTrace::TraceParticleClusterChildData'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<`FChaosVisualDebuggerTrace::TraceParticleClusterChildData'::__l2::<lambda_1>_>'::__l2::<lambda_2>_>'::__l12::<lambda_3>,void,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  `Chaos::
  ParticleViewParallelForImp<Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>,`Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<`FChaosVisualDebuggerTrace::TraceParticleClusterChildData'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<`FChaosVisualDebuggerTrace::TraceParticleClusterChildData'::__l2::<lambda_1>_>'::__l2::<lambda_2>_>'
  ::__l12::<lambda_3>::operator()(param_1,*param_2,*param_3);
  return;
}

// Call @ 1438a41c0

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationImpl<0,double>'::__l22::FAHelper_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  (*(code *)(*(undefined8 **)param_1)[1])
            (&local_28,**(undefined8 **)param_1,param_2,0,*(undefined8 *)((longlong)param_1 + 8));
  *(undefined8 *)__return_storage_ptr__ = local_28;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uStack_20;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = local_18;
  return __return_storage_ptr__;
}

// Call @ 1438a4210

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationImpl<0,double>'::__l22::FBHelper_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  double dVar1;
  double dVar2;
  TVector<double> *pTVar3;
  TVector<double> local_28;
  
  pTVar3 = ::Chaos::FGeomGJKHelper::SupportFunction
                     (*(FGeomGJKHelper **)param_1,&local_28,
                      *(TRigidTransform<double,3> **)((longlong)param_1 + 0x10),
                      *(TRotation<double,3> **)((longlong)param_1 + 0x18),param_2,
                      *(int **)((longlong)param_1 + 8));
  dVar2 = (pTVar3->field0_0x0)._s_0.Y;
  dVar1 = (pTVar3->field0_0x0)._s_0.Z;
  *(double *)__return_storage_ptr__ = (pTVar3->field0_0x0)._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = dVar2;
  *(double *)&__return_storage_ptr__->field_0x10 = dVar1;
  return __return_storage_ptr__;
}

// Call @ 1438a4260

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationSameSpace2<double,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>,Chaos::TGJKShape<Chaos::TTriangle<double>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  `Chaos::
  GJKPenetrationSameSpace2<double,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>,Chaos::TGJKShape<Chaos::TTriangle<double>_>_>'
  ::__l2::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 1438a4290

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationSameSpace2<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>_>,Chaos::TGJKShape<Chaos::TTriangle<double>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  `Chaos::
  GJKPenetrationSameSpace2<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>_>,Chaos::TGJKShape<Chaos::TTriangle<double>_>_>'
  ::__l2::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 1438a42c0

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationSameSpace2<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>,Chaos::TGJKShape<Chaos::TTriangle<double>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::FConvex::SupportCore
            (*(FConvex **)(**(longlong **)param_1 + 0x28),__return_storage_ptr__,&local_28,
             (double)*(float *)(*(longlong **)param_1 + 1),*(double **)((longlong)param_1 + 8),
             *(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a4320

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationSameSpace2<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>,Chaos::TGJKShape<Chaos::TTriangle<double>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>::SupportCore
            (*(TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_> **)param_1,
             __return_storage_ptr__,&local_28,
             (double)(*(TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_> **)
                       param_1)->Margin,*(double **)((longlong)param_1 + 8),
             *(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a4380

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationSameSpace2<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>,Chaos::TGJKShape<Chaos::TTriangle<double>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  `Chaos::
  GJKPenetrationSameSpace2<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>,Chaos::TGJKShape<Chaos::TTriangle<double>_>_>'
  ::__l2::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 1438a43b0

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationSameSpace2<double,Chaos::TGJKCoreShape<Chaos::FConvex>,Chaos::TGJKShape<Chaos::TTriangle<double>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::FConvex::SupportCore
            ((FConvex *)**(undefined8 **)param_1,__return_storage_ptr__,&local_28,
             (double)*(float *)(*(undefined8 **)param_1 + 1),*(double **)((longlong)param_1 + 8),
             *(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a4410

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationSameSpace2<double,Chaos::TGJKShape<Chaos::TBox<double,3>_>,Chaos::TGJKShape<Chaos::TCoreSegment<double>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::TGJKShape<Chaos::TBox<double,3>_>::SupportCore
            (*(TGJKShape<Chaos::TBox<double,3>_> **)param_1,__return_storage_ptr__,&local_28,0.0,
             *(double **)((longlong)param_1 + 8),*(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a4470

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationSameSpace2<double,Chaos::TGJKShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>,Chaos::TGJKShape<Chaos::TCoreSegment<double>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::TGJKShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>::SupportCore
            (*(TGJKShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_> **)param_1,
             __return_storage_ptr__,&local_28,0.0,*(double **)((longlong)param_1 + 8),
             *(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a44d0

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationSameSpace2<double,Chaos::TGJKShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>,Chaos::TGJKShape<Chaos::TCoreSegment<double>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::TGJKShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>::SupportCore
            (*(TGJKShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_> **)param_1,
             __return_storage_ptr__,&local_28,0.0,*(double **)((longlong)param_1 + 8),
             *(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a4530

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationSameSpace2<double,Chaos::TGJKShape<Chaos::FConvex>,Chaos::TGJKShape<Chaos::TCoreSegment<double>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::TGJKShape<Chaos::FConvex>::SupportCore
            (*(TGJKShape<Chaos::FConvex> **)param_1,__return_storage_ptr__,&local_28,0.0,
             *(double **)((longlong)param_1 + 8),*(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a4590

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationSameSpace<double,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>,Chaos::TGJKShape<Chaos::TTriangle<double>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  `Chaos::
  GJKPenetrationSameSpace<double,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>,Chaos::TGJKShape<Chaos::TTriangle<double>_>_>'
  ::__l2::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 1438a45c0

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationSameSpace<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>_>,Chaos::TGJKShape<Chaos::TTriangle<double>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  `Chaos::
  GJKPenetrationSameSpace<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>_>,Chaos::TGJKShape<Chaos::TTriangle<double>_>_>'
  ::__l2::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 1438a45f0

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationSameSpace<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>,Chaos::TGJKShape<Chaos::TTriangle<double>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::FConvex::SupportCore
            (*(FConvex **)(**(longlong **)param_1 + 0x28),__return_storage_ptr__,&local_28,
             (double)*(float *)(*(longlong **)param_1 + 1),*(double **)((longlong)param_1 + 8),
             *(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a4650

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationSameSpace<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>,Chaos::TGJKShape<Chaos::TTriangle<double>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>::SupportCore
            (*(TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_> **)param_1,
             __return_storage_ptr__,&local_28,
             (double)(*(TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_> **)
                       param_1)->Margin,*(double **)((longlong)param_1 + 8),
             *(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a46b0

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationSameSpace<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>,Chaos::TGJKShape<Chaos::TTriangle<double>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  `Chaos::
  GJKPenetrationSameSpace<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>,Chaos::TGJKShape<Chaos::TTriangle<double>_>_>'
  ::__l2::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 1438a46e0

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationSameSpace<double,Chaos::TGJKCoreShape<Chaos::FConvex>,Chaos::TGJKShape<Chaos::TTriangle<double>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::FConvex::SupportCore
            ((FConvex *)**(undefined8 **)param_1,__return_storage_ptr__,&local_28,
             (double)*(float *)(*(undefined8 **)param_1 + 1),*(double **)((longlong)param_1 + 8),
             *(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a4740

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationSameSpace<double,Chaos::TGJKShape<Chaos::TBox<double,3>_>,Chaos::TGJKShape<Chaos::TCoreSegment<double>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::TGJKShape<Chaos::TBox<double,3>_>::SupportCore
            (*(TGJKShape<Chaos::TBox<double,3>_> **)param_1,__return_storage_ptr__,&local_28,0.0,
             *(double **)((longlong)param_1 + 8),*(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a47a0

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationSameSpace<double,Chaos::TGJKShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>,Chaos::TGJKShape<Chaos::TCoreSegment<double>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::TGJKShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>::SupportCore
            (*(TGJKShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_> **)param_1,
             __return_storage_ptr__,&local_28,0.0,*(double **)((longlong)param_1 + 8),
             *(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a4800

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationSameSpace<double,Chaos::TGJKShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>,Chaos::TGJKShape<Chaos::TCoreSegment<double>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::TGJKShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>::SupportCore
            (*(TGJKShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_> **)param_1,
             __return_storage_ptr__,&local_28,0.0,*(double **)((longlong)param_1 + 8),
             *(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a4860

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationSameSpace<double,Chaos::TGJKShape<Chaos::FConvex>,Chaos::TGJKShape<Chaos::TCoreSegment<double>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::TGJKShape<Chaos::FConvex>::SupportCore
            (*(TGJKShape<Chaos::FConvex> **)param_1,__return_storage_ptr__,&local_28,0.0,
             *(double **)((longlong)param_1 + 8),*(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a48c0

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  `Chaos::
  GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>_>'
  ::__l2::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 1438a48f0

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  `Chaos::
  GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>_>'
  ::__l2::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 1438a4920

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  `Chaos::
  GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>_>'
  ::__l2::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 1438a4950

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>,Chaos::TGJKCoreShape<Chaos::TTriangle<double>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  `Chaos::
  GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>,Chaos::TGJKCoreShape<Chaos::TTriangle<double>_>_>'
  ::__l2::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 1438a4980

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>,Chaos::TGJKCoreShape<Chaos::FConvex>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  `Chaos::
  GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>,Chaos::TGJKCoreShape<Chaos::FConvex>_>'
  ::__l2::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 1438a49b0

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::FConvex::SupportCore
            (*(FConvex **)(**(longlong **)param_1 + 0x28),__return_storage_ptr__,&local_28,
             (double)*(float *)(*(longlong **)param_1 + 1),*(double **)((longlong)param_1 + 8),
             *(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a4a10

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::FConvex::SupportCore
            (*(FConvex **)(**(longlong **)param_1 + 0x28),__return_storage_ptr__,&local_28,
             (double)*(float *)(*(longlong **)param_1 + 1),*(double **)((longlong)param_1 + 8),
             *(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a4a70

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::FConvex::SupportCore
            (*(FConvex **)(**(longlong **)param_1 + 0x28),__return_storage_ptr__,&local_28,
             (double)*(float *)(*(longlong **)param_1 + 1),*(double **)((longlong)param_1 + 8),
             *(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a4ad0

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>,Chaos::TGJKCoreShape<Chaos::FConvex>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::FConvex::SupportCore
            (*(FConvex **)(**(longlong **)param_1 + 0x28),__return_storage_ptr__,&local_28,
             (double)*(float *)(*(longlong **)param_1 + 1),*(double **)((longlong)param_1 + 8),
             *(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a4b30

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>,Chaos::TGJKCoreShape<Chaos::TTriangle<double>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>::SupportCore
            (*(TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_> **)param_1,
             __return_storage_ptr__,&local_28,
             (double)(*(TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_> **)
                       param_1)->Margin,*(double **)((longlong)param_1 + 8),
             *(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a4b90

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>,Chaos::TGJKCoreShape<Chaos::TTriangle<double>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>::SupportCore
            (*(TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_> **)param_1,
             __return_storage_ptr__,&local_28,
             (double)(*(TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_> **)param_1)
                     ->Margin,*(double **)((longlong)param_1 + 8),
             *(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a4bf0

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  `Chaos::
  GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>_>'
  ::__l2::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 1438a4c20

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  `Chaos::
  GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>_>'
  ::__l2::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 1438a4c50

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  `Chaos::
  GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>_>'
  ::__l2::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 1438a4c80

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>,Chaos::TGJKCoreShape<Chaos::TTriangle<double>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  `Chaos::
  GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>,Chaos::TGJKCoreShape<Chaos::TTriangle<double>_>_>'
  ::__l2::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 1438a4cb0

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>,Chaos::TGJKCoreShape<Chaos::FConvex>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  `Chaos::
  GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>,Chaos::TGJKCoreShape<Chaos::FConvex>_>'
  ::__l2::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 1438a4ce0

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::FCapsule>,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::TGJKCoreShape<Chaos::FCapsule>::SupportCore
            (*(TGJKCoreShape<Chaos::FCapsule> **)param_1,__return_storage_ptr__,&local_28,
             (double)(*(TGJKCoreShape<Chaos::FCapsule> **)param_1)->Margin,
             *(double **)((longlong)param_1 + 8),*(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a4d40

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::FCapsule>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::TGJKCoreShape<Chaos::FCapsule>::SupportCore
            (*(TGJKCoreShape<Chaos::FCapsule> **)param_1,__return_storage_ptr__,&local_28,
             (double)(*(TGJKCoreShape<Chaos::FCapsule> **)param_1)->Margin,
             *(double **)((longlong)param_1 + 8),*(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a4da0

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::FCapsule>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::TGJKCoreShape<Chaos::FCapsule>::SupportCore
            (*(TGJKCoreShape<Chaos::FCapsule> **)param_1,__return_storage_ptr__,&local_28,
             (double)(*(TGJKCoreShape<Chaos::FCapsule> **)param_1)->Margin,
             *(double **)((longlong)param_1 + 8),*(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a4e00

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::FCapsule>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::TGJKCoreShape<Chaos::FCapsule>::SupportCore
            (*(TGJKCoreShape<Chaos::FCapsule> **)param_1,__return_storage_ptr__,&local_28,
             (double)(*(TGJKCoreShape<Chaos::FCapsule> **)param_1)->Margin,
             *(double **)((longlong)param_1 + 8),*(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a4e60

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::FCapsule>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::TGJKCoreShape<Chaos::FCapsule>::SupportCore
            (*(TGJKCoreShape<Chaos::FCapsule> **)param_1,__return_storage_ptr__,&local_28,
             (double)(*(TGJKCoreShape<Chaos::FCapsule> **)param_1)->Margin,
             *(double **)((longlong)param_1 + 8),*(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a4ec0

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::FCapsule>,Chaos::TGJKCoreShape<Chaos::TTriangle<double>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::TGJKCoreShape<Chaos::FCapsule>::SupportCore
            (*(TGJKCoreShape<Chaos::FCapsule> **)param_1,__return_storage_ptr__,&local_28,
             (double)(*(TGJKCoreShape<Chaos::FCapsule> **)param_1)->Margin,
             *(double **)((longlong)param_1 + 8),*(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a4f20

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::FCapsule>,Chaos::TGJKCoreShape<Chaos::FConvex>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::TGJKCoreShape<Chaos::FCapsule>::SupportCore
            (*(TGJKCoreShape<Chaos::FCapsule> **)param_1,__return_storage_ptr__,&local_28,
             (double)(*(TGJKCoreShape<Chaos::FCapsule> **)param_1)->Margin,
             *(double **)((longlong)param_1 + 8),*(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a4f80

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::FConvex>,Chaos::TGJKCoreShape<Chaos::FConvex>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::FConvex::SupportCore
            ((FConvex *)**(undefined8 **)param_1,__return_storage_ptr__,&local_28,
             (double)*(float *)(*(undefined8 **)param_1 + 1),*(double **)((longlong)param_1 + 8),
             *(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a4fe0

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::FConvex>,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::FConvex::SupportCore
            ((FConvex *)**(undefined8 **)param_1,__return_storage_ptr__,&local_28,
             (double)*(float *)(*(undefined8 **)param_1 + 1),*(double **)((longlong)param_1 + 8),
             *(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a5040

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::FConvex>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::FConvex::SupportCore
            ((FConvex *)**(undefined8 **)param_1,__return_storage_ptr__,&local_28,
             (double)*(float *)(*(undefined8 **)param_1 + 1),*(double **)((longlong)param_1 + 8),
             *(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a50a0

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::FConvex>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::FConvex::SupportCore
            ((FConvex *)**(undefined8 **)param_1,__return_storage_ptr__,&local_28,
             (double)*(float *)(*(undefined8 **)param_1 + 1),*(double **)((longlong)param_1 + 8),
             *(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a5100

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::FConvex>,Chaos::TGJKCoreShape<Chaos::TTriangle<double>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::FConvex::SupportCore
            ((FConvex *)**(undefined8 **)param_1,__return_storage_ptr__,&local_28,
             (double)*(float *)(*(undefined8 **)param_1 + 1),*(double **)((longlong)param_1 + 8),
             *(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a5160

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  `Chaos::
  GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>_>'
  ::__l2::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 1438a5190

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  `Chaos::
  GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>_>'
  ::__l2::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 1438a51c0

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  `Chaos::
  GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>_>'
  ::__l2::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 1438a51f0

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>,Chaos::TGJKCoreShape<Chaos::TTriangle<double>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  `Chaos::
  GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>,Chaos::TGJKCoreShape<Chaos::TTriangle<double>_>_>'
  ::__l2::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 1438a5220

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>,Chaos::TGJKCoreShape<Chaos::FConvex>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  `Chaos::
  GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>,Chaos::TGJKCoreShape<Chaos::FConvex>_>'
  ::__l2::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 1438a5250

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::FConvex::SupportCore
            (*(FConvex **)(**(longlong **)param_1 + 0x28),__return_storage_ptr__,&local_28,
             (double)*(float *)(*(longlong **)param_1 + 1),*(double **)((longlong)param_1 + 8),
             *(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a52b0

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::FConvex::SupportCore
            (*(FConvex **)(**(longlong **)param_1 + 0x28),__return_storage_ptr__,&local_28,
             (double)*(float *)(*(longlong **)param_1 + 1),*(double **)((longlong)param_1 + 8),
             *(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a5310

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::FConvex::SupportCore
            (*(FConvex **)(**(longlong **)param_1 + 0x28),__return_storage_ptr__,&local_28,
             (double)*(float *)(*(longlong **)param_1 + 1),*(double **)((longlong)param_1 + 8),
             *(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a5370

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>,Chaos::TGJKCoreShape<Chaos::FConvex>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::FConvex::SupportCore
            (*(FConvex **)(**(longlong **)param_1 + 0x28),__return_storage_ptr__,&local_28,
             (double)*(float *)(*(longlong **)param_1 + 1),*(double **)((longlong)param_1 + 8),
             *(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a53d0

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>,Chaos::TGJKCoreShape<Chaos::TTriangle<double>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>::SupportCore
            (*(TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_> **)param_1,
             __return_storage_ptr__,&local_28,
             (double)(*(TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_> **)
                       param_1)->Margin,*(double **)((longlong)param_1 + 8),
             *(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a5430

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>,Chaos::TGJKCoreShape<Chaos::TTriangle<double>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>::SupportCore
            (*(TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_> **)param_1,
             __return_storage_ptr__,&local_28,
             (double)(*(TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_> **)param_1)
                     ->Margin,*(double **)((longlong)param_1 + 8),
             *(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a5490

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  `Chaos::
  GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>_>'
  ::__l2::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 1438a54c0

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  `Chaos::
  GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>_>'
  ::__l2::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 1438a54f0

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  `Chaos::
  GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>_>'
  ::__l2::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 1438a5520

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>,Chaos::TGJKCoreShape<Chaos::TTriangle<double>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  `Chaos::
  GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>,Chaos::TGJKCoreShape<Chaos::TTriangle<double>_>_>'
  ::__l2::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 1438a5550

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>,Chaos::TGJKCoreShape<Chaos::FConvex>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  `Chaos::
  GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>,Chaos::TGJKCoreShape<Chaos::FConvex>_>'
  ::__l2::<lambda_1>::operator()(param_1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// Call @ 1438a5580

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::FCapsule>,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::TGJKCoreShape<Chaos::FCapsule>::SupportCore
            (*(TGJKCoreShape<Chaos::FCapsule> **)param_1,__return_storage_ptr__,&local_28,
             (double)(*(TGJKCoreShape<Chaos::FCapsule> **)param_1)->Margin,
             *(double **)((longlong)param_1 + 8),*(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a55e0

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::FCapsule>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::TGJKCoreShape<Chaos::FCapsule>::SupportCore
            (*(TGJKCoreShape<Chaos::FCapsule> **)param_1,__return_storage_ptr__,&local_28,
             (double)(*(TGJKCoreShape<Chaos::FCapsule> **)param_1)->Margin,
             *(double **)((longlong)param_1 + 8),*(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a5640

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::FCapsule>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::TGJKCoreShape<Chaos::FCapsule>::SupportCore
            (*(TGJKCoreShape<Chaos::FCapsule> **)param_1,__return_storage_ptr__,&local_28,
             (double)(*(TGJKCoreShape<Chaos::FCapsule> **)param_1)->Margin,
             *(double **)((longlong)param_1 + 8),*(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a56a0

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::FCapsule>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::TGJKCoreShape<Chaos::FCapsule>::SupportCore
            (*(TGJKCoreShape<Chaos::FCapsule> **)param_1,__return_storage_ptr__,&local_28,
             (double)(*(TGJKCoreShape<Chaos::FCapsule> **)param_1)->Margin,
             *(double **)((longlong)param_1 + 8),*(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a5700

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::FCapsule>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::TGJKCoreShape<Chaos::FCapsule>::SupportCore
            (*(TGJKCoreShape<Chaos::FCapsule> **)param_1,__return_storage_ptr__,&local_28,
             (double)(*(TGJKCoreShape<Chaos::FCapsule> **)param_1)->Margin,
             *(double **)((longlong)param_1 + 8),*(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a5760

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::FCapsule>,Chaos::TGJKCoreShape<Chaos::TTriangle<double>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::TGJKCoreShape<Chaos::FCapsule>::SupportCore
            (*(TGJKCoreShape<Chaos::FCapsule> **)param_1,__return_storage_ptr__,&local_28,
             (double)(*(TGJKCoreShape<Chaos::FCapsule> **)param_1)->Margin,
             *(double **)((longlong)param_1 + 8),*(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a57c0

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::FCapsule>,Chaos::TGJKCoreShape<Chaos::FConvex>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::TGJKCoreShape<Chaos::FCapsule>::SupportCore
            (*(TGJKCoreShape<Chaos::FCapsule> **)param_1,__return_storage_ptr__,&local_28,
             (double)(*(TGJKCoreShape<Chaos::FCapsule> **)param_1)->Margin,
             *(double **)((longlong)param_1 + 8),*(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a5820

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::FConvex>,Chaos::TGJKCoreShape<Chaos::FConvex>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::FConvex::SupportCore
            ((FConvex *)**(undefined8 **)param_1,__return_storage_ptr__,&local_28,
             (double)*(float *)(*(undefined8 **)param_1 + 1),*(double **)((longlong)param_1 + 8),
             *(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a5880

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::FConvex>,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::FConvex::SupportCore
            ((FConvex *)**(undefined8 **)param_1,__return_storage_ptr__,&local_28,
             (double)*(float *)(*(undefined8 **)param_1 + 1),*(double **)((longlong)param_1 + 8),
             *(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a58e0

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::FConvex>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::FConvex::SupportCore
            ((FConvex *)**(undefined8 **)param_1,__return_storage_ptr__,&local_28,
             (double)*(float *)(*(undefined8 **)param_1 + 1),*(double **)((longlong)param_1 + 8),
             *(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a5940

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::FConvex>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::FConvex::SupportCore
            ((FConvex *)**(undefined8 **)param_1,__return_storage_ptr__,&local_28,
             (double)*(float *)(*(undefined8 **)param_1 + 1),*(double **)((longlong)param_1 + 8),
             *(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a59a0

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::FConvex>,Chaos::TGJKCoreShape<Chaos::TTriangle<double>_>_>'::__l2::<lambda_1>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::FConvex::SupportCore
            ((FConvex *)**(undefined8 **)param_1,__return_storage_ptr__,&local_28,
             (double)*(float *)(*(undefined8 **)param_1 + 1),*(double **)((longlong)param_1 + 8),
             *(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a5a00

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationSameSpace2<double,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>,Chaos::TGJKShape<Chaos::TTriangle<double>_>_>'::__l2::<lambda_2>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::TGJKShape<Chaos::TTriangle<double>_>::SupportCore
            (*(TGJKShape<Chaos::TTriangle<double>_> **)param_1,__return_storage_ptr__,&local_28,0.0,
             *(double **)((longlong)param_1 + 8),*(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a5a60

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationSameSpace2<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>_>,Chaos::TGJKShape<Chaos::TTriangle<double>_>_>'::__l2::<lambda_2>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::TGJKShape<Chaos::TTriangle<double>_>::SupportCore
            (*(TGJKShape<Chaos::TTriangle<double>_> **)param_1,__return_storage_ptr__,&local_28,0.0,
             *(double **)((longlong)param_1 + 8),*(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a5ac0

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationSameSpace2<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>,Chaos::TGJKShape<Chaos::TTriangle<double>_>_>'::__l2::<lambda_2>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::TGJKShape<Chaos::TTriangle<double>_>::SupportCore
            (*(TGJKShape<Chaos::TTriangle<double>_> **)param_1,__return_storage_ptr__,&local_28,0.0,
             *(double **)((longlong)param_1 + 8),*(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a5b20

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationSameSpace2<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>,Chaos::TGJKShape<Chaos::TTriangle<double>_>_>'::__l2::<lambda_2>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::TGJKShape<Chaos::TTriangle<double>_>::SupportCore
            (*(TGJKShape<Chaos::TTriangle<double>_> **)param_1,__return_storage_ptr__,&local_28,0.0,
             *(double **)((longlong)param_1 + 8),*(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a5b80

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationSameSpace2<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>,Chaos::TGJKShape<Chaos::TTriangle<double>_>_>'::__l2::<lambda_2>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::TGJKShape<Chaos::TTriangle<double>_>::SupportCore
            (*(TGJKShape<Chaos::TTriangle<double>_> **)param_1,__return_storage_ptr__,&local_28,0.0,
             *(double **)((longlong)param_1 + 8),*(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a5be0

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationSameSpace2<double,Chaos::TGJKCoreShape<Chaos::FConvex>,Chaos::TGJKShape<Chaos::TTriangle<double>_>_>'::__l2::<lambda_2>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::TGJKShape<Chaos::TTriangle<double>_>::SupportCore
            (*(TGJKShape<Chaos::TTriangle<double>_> **)param_1,__return_storage_ptr__,&local_28,0.0,
             *(double **)((longlong)param_1 + 8),*(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a5c40

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationSameSpace2<double,Chaos::TGJKShape<Chaos::TBox<double,3>_>,Chaos::TGJKShape<Chaos::TCoreSegment<double>_>_>'::__l2::<lambda_2>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::TGJKShape<Chaos::TCoreSegment<double>_>::SupportCore
            (*(TGJKShape<Chaos::TCoreSegment<double>_> **)param_1,__return_storage_ptr__,&local_28,
             0.0,*(double **)((longlong)param_1 + 8),*(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a5ca0

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationSameSpace2<double,Chaos::TGJKShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>,Chaos::TGJKShape<Chaos::TCoreSegment<double>_>_>'::__l2::<lambda_2>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::TGJKShape<Chaos::TCoreSegment<double>_>::SupportCore
            (*(TGJKShape<Chaos::TCoreSegment<double>_> **)param_1,__return_storage_ptr__,&local_28,
             0.0,*(double **)((longlong)param_1 + 8),*(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a5d00

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationSameSpace2<double,Chaos::TGJKShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>,Chaos::TGJKShape<Chaos::TCoreSegment<double>_>_>'::__l2::<lambda_2>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::TGJKShape<Chaos::TCoreSegment<double>_>::SupportCore
            (*(TGJKShape<Chaos::TCoreSegment<double>_> **)param_1,__return_storage_ptr__,&local_28,
             0.0,*(double **)((longlong)param_1 + 8),*(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a5d60

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationSameSpace2<double,Chaos::TGJKShape<Chaos::FConvex>,Chaos::TGJKShape<Chaos::TCoreSegment<double>_>_>'::__l2::<lambda_2>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::TGJKShape<Chaos::TCoreSegment<double>_>::SupportCore
            (*(TGJKShape<Chaos::TCoreSegment<double>_> **)param_1,__return_storage_ptr__,&local_28,
             0.0,*(double **)((longlong)param_1 + 8),*(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a5dc0

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationSameSpace<double,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>,Chaos::TGJKShape<Chaos::TTriangle<double>_>_>'::__l2::<lambda_2>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::TGJKShape<Chaos::TTriangle<double>_>::SupportCore
            (*(TGJKShape<Chaos::TTriangle<double>_> **)param_1,__return_storage_ptr__,&local_28,0.0,
             *(double **)((longlong)param_1 + 8),*(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a5e20

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationSameSpace<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>_>,Chaos::TGJKShape<Chaos::TTriangle<double>_>_>'::__l2::<lambda_2>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::TGJKShape<Chaos::TTriangle<double>_>::SupportCore
            (*(TGJKShape<Chaos::TTriangle<double>_> **)param_1,__return_storage_ptr__,&local_28,0.0,
             *(double **)((longlong)param_1 + 8),*(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a5e80

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationSameSpace<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>,Chaos::TGJKShape<Chaos::TTriangle<double>_>_>'::__l2::<lambda_2>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::TGJKShape<Chaos::TTriangle<double>_>::SupportCore
            (*(TGJKShape<Chaos::TTriangle<double>_> **)param_1,__return_storage_ptr__,&local_28,0.0,
             *(double **)((longlong)param_1 + 8),*(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a5ee0

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationSameSpace<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>,Chaos::TGJKShape<Chaos::TTriangle<double>_>_>'::__l2::<lambda_2>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::TGJKShape<Chaos::TTriangle<double>_>::SupportCore
            (*(TGJKShape<Chaos::TTriangle<double>_> **)param_1,__return_storage_ptr__,&local_28,0.0,
             *(double **)((longlong)param_1 + 8),*(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a5f40

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationSameSpace<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>,Chaos::TGJKShape<Chaos::TTriangle<double>_>_>'::__l2::<lambda_2>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::TGJKShape<Chaos::TTriangle<double>_>::SupportCore
            (*(TGJKShape<Chaos::TTriangle<double>_> **)param_1,__return_storage_ptr__,&local_28,0.0,
             *(double **)((longlong)param_1 + 8),*(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a5fa0

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationSameSpace<double,Chaos::TGJKCoreShape<Chaos::FConvex>,Chaos::TGJKShape<Chaos::TTriangle<double>_>_>'::__l2::<lambda_2>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::TGJKShape<Chaos::TTriangle<double>_>::SupportCore
            (*(TGJKShape<Chaos::TTriangle<double>_> **)param_1,__return_storage_ptr__,&local_28,0.0,
             *(double **)((longlong)param_1 + 8),*(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a6000

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationSameSpace<double,Chaos::TGJKShape<Chaos::TBox<double,3>_>,Chaos::TGJKShape<Chaos::TCoreSegment<double>_>_>'::__l2::<lambda_2>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::TGJKShape<Chaos::TCoreSegment<double>_>::SupportCore
            (*(TGJKShape<Chaos::TCoreSegment<double>_> **)param_1,__return_storage_ptr__,&local_28,
             0.0,*(double **)((longlong)param_1 + 8),*(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a6060

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationSameSpace<double,Chaos::TGJKShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>,Chaos::TGJKShape<Chaos::TCoreSegment<double>_>_>'::__l2::<lambda_2>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::TGJKShape<Chaos::TCoreSegment<double>_>::SupportCore
            (*(TGJKShape<Chaos::TCoreSegment<double>_> **)param_1,__return_storage_ptr__,&local_28,
             0.0,*(double **)((longlong)param_1 + 8),*(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a60c0

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationSameSpace<double,Chaos::TGJKShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>,Chaos::TGJKShape<Chaos::TCoreSegment<double>_>_>'::__l2::<lambda_2>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::TGJKShape<Chaos::TCoreSegment<double>_>::SupportCore
            (*(TGJKShape<Chaos::TCoreSegment<double>_> **)param_1,__return_storage_ptr__,&local_28,
             0.0,*(double **)((longlong)param_1 + 8),*(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a6120

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationSameSpace<double,Chaos::TGJKShape<Chaos::FConvex>,Chaos::TGJKShape<Chaos::TCoreSegment<double>_>_>'::__l2::<lambda_2>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double,3> local_28;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_2->field_0x10;
  ::Chaos::TGJKShape<Chaos::TCoreSegment<double>_>::SupportCore
            (*(TGJKShape<Chaos::TCoreSegment<double>_> **)param_1,__return_storage_ptr__,&local_28,
             0.0,*(double **)((longlong)param_1 + 8),*(int **)((longlong)param_1 + 0x10));
  return __return_storage_ptr__;
}

// Call @ 1438a6180

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a61c0

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a6200

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a6240

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>,Chaos::TGJKCoreShape<Chaos::TTriangle<double>_>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>,Chaos::TGJKCoreShape<Chaos::TTriangle<double>_>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a6280

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>,Chaos::TGJKCoreShape<Chaos::FConvex>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>,Chaos::TGJKCoreShape<Chaos::FConvex>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a62c0

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a6300

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a6340

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a6380

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>,Chaos::TGJKCoreShape<Chaos::FConvex>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>,Chaos::TGJKCoreShape<Chaos::FConvex>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a63c0

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>,Chaos::TGJKCoreShape<Chaos::TTriangle<double>_>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>,Chaos::TGJKCoreShape<Chaos::TTriangle<double>_>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a6400

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>,Chaos::TGJKCoreShape<Chaos::TTriangle<double>_>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>,Chaos::TGJKCoreShape<Chaos::TTriangle<double>_>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a6440

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a6480

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a64c0

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a6500

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>,Chaos::TGJKCoreShape<Chaos::TTriangle<double>_>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>,Chaos::TGJKCoreShape<Chaos::TTriangle<double>_>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a6540

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>,Chaos::TGJKCoreShape<Chaos::FConvex>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>,Chaos::TGJKCoreShape<Chaos::FConvex>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a6580

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::FCapsule>,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::FCapsule>,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a65c0

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::FCapsule>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>_>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::FCapsule>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>_>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a6600

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::FCapsule>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::FCapsule>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a6640

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::FCapsule>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::FCapsule>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a6680

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::FCapsule>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::FCapsule>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a66c0

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::FCapsule>,Chaos::TGJKCoreShape<Chaos::TTriangle<double>_>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::FCapsule>,Chaos::TGJKCoreShape<Chaos::TTriangle<double>_>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a6700

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::FCapsule>,Chaos::TGJKCoreShape<Chaos::FConvex>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::FCapsule>,Chaos::TGJKCoreShape<Chaos::FConvex>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a6740

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::FConvex>,Chaos::TGJKCoreShape<Chaos::FConvex>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::FConvex>,Chaos::TGJKCoreShape<Chaos::FConvex>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a6780

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::FConvex>,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::FConvex>,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a67c0

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::FConvex>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::FConvex>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a6800

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::FConvex>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::FConvex>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a6840

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::FConvex>,Chaos::TGJKCoreShape<Chaos::TTriangle<double>_>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable2<double,Chaos::TGJKCoreShape<Chaos::FConvex>,Chaos::TGJKCoreShape<Chaos::TTriangle<double>_>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a6880

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a68c0

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a6900

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a6940

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>,Chaos::TGJKCoreShape<Chaos::TTriangle<double>_>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>,Chaos::TGJKCoreShape<Chaos::TTriangle<double>_>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a6980

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>,Chaos::TGJKCoreShape<Chaos::FConvex>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>,Chaos::TGJKCoreShape<Chaos::FConvex>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a69c0

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a6a00

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a6a40

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a6a80

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>,Chaos::TGJKCoreShape<Chaos::FConvex>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>,Chaos::TGJKCoreShape<Chaos::FConvex>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a6ac0

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>,Chaos::TGJKCoreShape<Chaos::TTriangle<double>_>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>,Chaos::TGJKCoreShape<Chaos::TTriangle<double>_>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a6b00

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>,Chaos::TGJKCoreShape<Chaos::TTriangle<double>_>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>,Chaos::TGJKCoreShape<Chaos::TTriangle<double>_>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a6b40

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a6b80

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a6bc0

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a6c00

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>,Chaos::TGJKCoreShape<Chaos::TTriangle<double>_>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>,Chaos::TGJKCoreShape<Chaos::TTriangle<double>_>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a6c40

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>,Chaos::TGJKCoreShape<Chaos::FConvex>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>,Chaos::TGJKCoreShape<Chaos::FConvex>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a6c80

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::FCapsule>,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::FCapsule>,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a6cc0

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::FCapsule>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>_>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::FCapsule>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>_>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a6d00

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::FCapsule>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::FCapsule>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a6d40

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::FCapsule>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::FCapsule>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a6d80

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::FCapsule>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::FCapsule>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a6dc0

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::FCapsule>,Chaos::TGJKCoreShape<Chaos::TTriangle<double>_>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::FCapsule>,Chaos::TGJKCoreShape<Chaos::TTriangle<double>_>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a6e00

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::FCapsule>,Chaos::TGJKCoreShape<Chaos::FConvex>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::FCapsule>,Chaos::TGJKCoreShape<Chaos::FConvex>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a6e40

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::FConvex>,Chaos::TGJKCoreShape<Chaos::FConvex>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::FConvex>,Chaos::TGJKCoreShape<Chaos::FConvex>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a6e80

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::FConvex>,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::FConvex>,Chaos::TGJKCoreShape<Chaos::TBox<double,3>_>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a6ec0

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::FConvex>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::FConvex>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a6f00

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::FConvex>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::FConvex>,Chaos::TGJKCoreShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a6f40

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::FConvex>,Chaos::TGJKCoreShape<Chaos::TTriangle<double>_>_>'::__l13::<lambda_3>_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  TVector<double>_u_0 local_28;
  
  `Chaos::
  GJKPenetrationWarmStartable<double,Chaos::TGJKCoreShape<Chaos::FConvex>,Chaos::TGJKCoreShape<Chaos::TTriangle<double>_>_>'
  ::__l13::<lambda_3>::operator()(param_1,(TVector<double> *)&local_28._s_0,param_2);
  *(double *)__return_storage_ptr__ = local_28._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = local_28._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// Call @ 1438a6f80

TVector<float> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TConvexHull3<float>::Solve<Chaos::TVector<float,3>_>'::__l2::<lambda_1>,UE::Math::TVector<float>,int>
::Call(TVector<float> *__return_storage_ptr__,void *param_1,int *param_2)

{
  uint uVar1;
  float fVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  TVector<float> *pTVar8;
  
  plVar3 = *(longlong **)param_1;
  uVar1 = *param_2;
  uVar7 = 0;
  if ((int)uVar1 < (int)plVar3[1]) {
    uVar7 = ~uVar1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TVector<float> *)(*pcVar5)();
      return pTVar8;
    }
  }
  lVar4 = *plVar3;
  fVar2 = *(float *)(lVar4 + 8 + (longlong)(int)uVar1 * 0xc);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       *(undefined8 *)(lVar4 + (longlong)(int)uVar1 * 0xc);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar2;
  return __return_storage_ptr__;
}

// Call @ 1438a7010

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClusterUnionManager::HandleRemoveOperation'::__l2::<lambda_1>,void>::
Call(void *param_1)

{
  *(undefined1 *)(**(longlong **)param_1 + 0x371) = *(undefined1 *)((longlong)param_1 + 8);
  return;
}

// Call @ 1438a7030

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::`anonymous_namespace'::AddParticleToConnectionGraph'::__l5::<lambda_1>,void,Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int>
::Call(void *param_1,FImplicitObject **param_2,TRigidTransform<double,3> *param_3,int *param_4,
      int *param_5,int *param_6)

{
  `Chaos::`anonymous_namespace'::AddParticleToConnectionGraph'::__l5::<lambda_1>::operator()
            (param_1,*param_2,param_3,*param_4,*param_5,*param_6);
  return;
}

// Call @ 1438a7060

TVector<float> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FConvexBuilder::BuildIndices'::__l14::<lambda_1>,UE::Math::TVector<float>,int>
::Call(TVector<float> *__return_storage_ptr__,void *param_1,int *param_2)

{
  uint uVar1;
  float fVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  TVector<float> *pTVar8;
  
  plVar3 = *(longlong **)param_1;
  uVar1 = *param_2;
  uVar7 = 0;
  if ((int)uVar1 < (int)plVar3[1]) {
    uVar7 = ~uVar1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TVector<float> *)(*pcVar5)();
      return pTVar8;
    }
  }
  lVar4 = *plVar3;
  fVar2 = *(float *)(lVar4 + 8 + (longlong)(int)uVar1 * 0xc);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       *(undefined8 *)(lVar4 + (longlong)(int)uVar1 * 0xc);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar2;
  return __return_storage_ptr__;
}

// Call @ 1438a70f0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::TConvexHull3<float>::Solve<Chaos::TVector<float,3>_>'::__l2::<lambda_2>,bool,int>
::Call(void *param_1,int *param_2)

{
  return true;
}

// Call @ 1438a7100

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClusterUnionManager::HandleAddOperation'::__l2::<lambda_2>,void>::Call
          (void *param_1)

{
  *(undefined1 *)(**(longlong **)param_1 + 0x371) = *(undefined1 *)((longlong)param_1 + 8);
  return;
}

// Call @ 1438a7120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::OverlapQuery<Chaos::TBox<double,3>_>'::__l21::<lambda_3>,bool,Chaos::FImplicitObject_const_&,Chaos::TRigidTransform<double,3>_const_&>
::Call(void *param_1,FImplicitObject *param_2,TRigidTransform<double,3> *param_3)

{
  bool bVar1;
  undefined1 auStackY_108 [32];
  TTransform<double> TStack_d8;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  double dStack_20;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_108;
  TStack_d8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  TStack_d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  TStack_d8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  TStack_d8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  TStack_d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  TStack_d8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  TStack_d8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  TStack_d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  TStack_d8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  TStack_d8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  TStack_d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  TStack_d8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  TStack_d8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  TStack_d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  TStack_d8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  TStack_d8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  TStack_d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  TStack_d8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&TStack_d8,(TTransform<double> *)param_3,
             *(TTransform<double> **)((longlong)param_1 + 8));
  dStack_78 = TStack_d8.Rotation.XY.m128d_f64[0];
  dStack_70 = TStack_d8.Rotation.XY.m128d_f64[1];
  dStack_68 = TStack_d8.Rotation.ZW.m128d_f64[0];
  dStack_60 = TStack_d8.Rotation.ZW.m128d_f64[1];
  dStack_58 = TStack_d8.Translation.XY.m128d_f64[0];
  dStack_50 = TStack_d8.Translation.XY.m128d_f64[1];
  dStack_48 = TStack_d8.Translation.ZW.m128d_f64[0];
  dStack_40 = TStack_d8.Translation.ZW.m128d_f64[1];
  dStack_38 = TStack_d8.Scale3D.XY.m128d_f64[0];
  dStack_30 = TStack_d8.Scale3D.XY.m128d_f64[1];
  dStack_28 = TStack_d8.Scale3D.ZW.m128d_f64[0];
  dStack_20 = TStack_d8.Scale3D.ZW.m128d_f64[1];
  bVar1 = ::Chaos::OverlapQuery<Chaos::TBox<double,3>_>
                    (param_2,(TRigidTransform<double,3> *)&dStack_78,
                     *(TBox<double,3> **)((longlong)param_1 + 0x10),
                     *(TRigidTransform<double,3> **)((longlong)param_1 + 0x18),
                     *(double *)((longlong)param_1 + 0x20),
                     (FMTDInfo *)**(undefined8 **)((longlong)param_1 + 0x28));
  if (bVar1) {
    **(undefined1 **)param_1 = 1;
  }
  return bVar1;
}

// Call @ 1438a7130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::OverlapQuery<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>'::__l21::<lambda_3>,bool,Chaos::FImplicitObject_const_&,Chaos::TRigidTransform<double,3>_const_&>
::Call(void *param_1,FImplicitObject *param_2,TRigidTransform<double,3> *param_3)

{
  bool bVar1;
  undefined1 auStackY_108 [32];
  TTransform<double> TStack_d8;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  double dStack_20;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_108;
  TStack_d8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  TStack_d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  TStack_d8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  TStack_d8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  TStack_d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  TStack_d8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  TStack_d8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  TStack_d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  TStack_d8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  TStack_d8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  TStack_d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  TStack_d8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  TStack_d8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  TStack_d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  TStack_d8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  TStack_d8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  TStack_d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  TStack_d8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&TStack_d8,(TTransform<double> *)param_3,
             *(TTransform<double> **)((longlong)param_1 + 8));
  dStack_78 = TStack_d8.Rotation.XY.m128d_f64[0];
  dStack_70 = TStack_d8.Rotation.XY.m128d_f64[1];
  dStack_68 = TStack_d8.Rotation.ZW.m128d_f64[0];
  dStack_60 = TStack_d8.Rotation.ZW.m128d_f64[1];
  dStack_58 = TStack_d8.Translation.XY.m128d_f64[0];
  dStack_50 = TStack_d8.Translation.XY.m128d_f64[1];
  dStack_48 = TStack_d8.Translation.ZW.m128d_f64[0];
  dStack_40 = TStack_d8.Translation.ZW.m128d_f64[1];
  dStack_38 = TStack_d8.Scale3D.XY.m128d_f64[0];
  dStack_30 = TStack_d8.Scale3D.XY.m128d_f64[1];
  dStack_28 = TStack_d8.Scale3D.ZW.m128d_f64[0];
  dStack_20 = TStack_d8.Scale3D.ZW.m128d_f64[1];
  bVar1 = ::Chaos::OverlapQuery<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>
                    (param_2,(TRigidTransform<double,3> *)&dStack_78,
                     *(TImplicitObjectScaled<Chaos::TBox<double,3>,1> **)((longlong)param_1 + 0x10),
                     *(TRigidTransform<double,3> **)((longlong)param_1 + 0x18),
                     *(double *)((longlong)param_1 + 0x20),
                     (FMTDInfo *)**(undefined8 **)((longlong)param_1 + 0x28));
  if (bVar1) {
    **(undefined1 **)param_1 = 1;
  }
  return bVar1;
}

// Call @ 1438a7140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::OverlapQuery<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>'::__l21::<lambda_3>,bool,Chaos::FImplicitObject_const_&,Chaos::TRigidTransform<double,3>_const_&>
::Call(void *param_1,FImplicitObject *param_2,TRigidTransform<double,3> *param_3)

{
  bool bVar1;
  undefined1 auStackY_108 [32];
  TTransform<double> TStack_d8;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  double dStack_20;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_108;
  TStack_d8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  TStack_d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  TStack_d8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  TStack_d8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  TStack_d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  TStack_d8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  TStack_d8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  TStack_d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  TStack_d8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  TStack_d8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  TStack_d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  TStack_d8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  TStack_d8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  TStack_d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  TStack_d8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  TStack_d8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  TStack_d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  TStack_d8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&TStack_d8,(TTransform<double> *)param_3,
             *(TTransform<double> **)((longlong)param_1 + 8));
  dStack_78 = TStack_d8.Rotation.XY.m128d_f64[0];
  dStack_70 = TStack_d8.Rotation.XY.m128d_f64[1];
  dStack_68 = TStack_d8.Rotation.ZW.m128d_f64[0];
  dStack_60 = TStack_d8.Rotation.ZW.m128d_f64[1];
  dStack_58 = TStack_d8.Translation.XY.m128d_f64[0];
  dStack_50 = TStack_d8.Translation.XY.m128d_f64[1];
  dStack_48 = TStack_d8.Translation.ZW.m128d_f64[0];
  dStack_40 = TStack_d8.Translation.ZW.m128d_f64[1];
  dStack_38 = TStack_d8.Scale3D.XY.m128d_f64[0];
  dStack_30 = TStack_d8.Scale3D.XY.m128d_f64[1];
  dStack_28 = TStack_d8.Scale3D.ZW.m128d_f64[0];
  dStack_20 = TStack_d8.Scale3D.ZW.m128d_f64[1];
  bVar1 = ::Chaos::OverlapQuery<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>
                    (param_2,(TRigidTransform<double,3> *)&dStack_78,
                     *(TImplicitObjectScaled<Chaos::TSphere<double,3>,1> **)
                      ((longlong)param_1 + 0x10),
                     *(TRigidTransform<double,3> **)((longlong)param_1 + 0x18),
                     *(double *)((longlong)param_1 + 0x20),
                     (FMTDInfo *)**(undefined8 **)((longlong)param_1 + 0x28));
  if (bVar1) {
    **(undefined1 **)param_1 = 1;
  }
  return bVar1;
}

// Call @ 1438a7150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::OverlapQuery<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>'::__l21::<lambda_3>,bool,Chaos::FImplicitObject_const_&,Chaos::TRigidTransform<double,3>_const_&>
::Call(void *param_1,FImplicitObject *param_2,TRigidTransform<double,3> *param_3)

{
  bool bVar1;
  undefined1 auStackY_108 [32];
  TTransform<double> TStack_d8;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  double dStack_20;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_108;
  TStack_d8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  TStack_d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  TStack_d8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  TStack_d8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  TStack_d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  TStack_d8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  TStack_d8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  TStack_d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  TStack_d8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  TStack_d8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  TStack_d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  TStack_d8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  TStack_d8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  TStack_d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  TStack_d8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  TStack_d8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  TStack_d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  TStack_d8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&TStack_d8,(TTransform<double> *)param_3,
             *(TTransform<double> **)((longlong)param_1 + 8));
  dStack_78 = TStack_d8.Rotation.XY.m128d_f64[0];
  dStack_70 = TStack_d8.Rotation.XY.m128d_f64[1];
  dStack_68 = TStack_d8.Rotation.ZW.m128d_f64[0];
  dStack_60 = TStack_d8.Rotation.ZW.m128d_f64[1];
  dStack_58 = TStack_d8.Translation.XY.m128d_f64[0];
  dStack_50 = TStack_d8.Translation.XY.m128d_f64[1];
  dStack_48 = TStack_d8.Translation.ZW.m128d_f64[0];
  dStack_40 = TStack_d8.Translation.ZW.m128d_f64[1];
  dStack_38 = TStack_d8.Scale3D.XY.m128d_f64[0];
  dStack_30 = TStack_d8.Scale3D.XY.m128d_f64[1];
  dStack_28 = TStack_d8.Scale3D.ZW.m128d_f64[0];
  dStack_20 = TStack_d8.Scale3D.ZW.m128d_f64[1];
  bVar1 = ::Chaos::OverlapQuery<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>
                    (param_2,(TRigidTransform<double,3> *)&dStack_78,
                     *(TImplicitObjectScaled<Chaos::FCapsule,1> **)((longlong)param_1 + 0x10),
                     *(TRigidTransform<double,3> **)((longlong)param_1 + 0x18),
                     *(double *)((longlong)param_1 + 0x20),
                     (FMTDInfo *)**(undefined8 **)((longlong)param_1 + 0x28));
  if (bVar1) {
    **(undefined1 **)param_1 = 1;
  }
  return bVar1;
}

// Call @ 1438a7160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::OverlapQuery<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>'::__l21::<lambda_3>,bool,Chaos::FImplicitObject_const_&,Chaos::TRigidTransform<double,3>_const_&>
::Call(void *param_1,FImplicitObject *param_2,TRigidTransform<double,3> *param_3)

{
  bool bVar1;
  undefined1 auStackY_108 [32];
  TTransform<double> TStack_d8;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  double dStack_20;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_108;
  TStack_d8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  TStack_d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  TStack_d8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  TStack_d8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  TStack_d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  TStack_d8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  TStack_d8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  TStack_d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  TStack_d8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  TStack_d8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  TStack_d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  TStack_d8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  TStack_d8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  TStack_d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  TStack_d8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  TStack_d8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  TStack_d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  TStack_d8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&TStack_d8,(TTransform<double> *)param_3,
             *(TTransform<double> **)((longlong)param_1 + 8));
  dStack_78 = TStack_d8.Rotation.XY.m128d_f64[0];
  dStack_70 = TStack_d8.Rotation.XY.m128d_f64[1];
  dStack_68 = TStack_d8.Rotation.ZW.m128d_f64[0];
  dStack_60 = TStack_d8.Rotation.ZW.m128d_f64[1];
  dStack_58 = TStack_d8.Translation.XY.m128d_f64[0];
  dStack_50 = TStack_d8.Translation.XY.m128d_f64[1];
  dStack_48 = TStack_d8.Translation.ZW.m128d_f64[0];
  dStack_40 = TStack_d8.Translation.ZW.m128d_f64[1];
  dStack_38 = TStack_d8.Scale3D.XY.m128d_f64[0];
  dStack_30 = TStack_d8.Scale3D.XY.m128d_f64[1];
  dStack_28 = TStack_d8.Scale3D.ZW.m128d_f64[0];
  dStack_20 = TStack_d8.Scale3D.ZW.m128d_f64[1];
  bVar1 = ::Chaos::OverlapQuery<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>
                    (param_2,(TRigidTransform<double,3> *)&dStack_78,
                     *(TImplicitObjectScaled<Chaos::FConvex,1> **)((longlong)param_1 + 0x10),
                     *(TRigidTransform<double,3> **)((longlong)param_1 + 0x18),
                     *(double *)((longlong)param_1 + 0x20),
                     (FMTDInfo *)**(undefined8 **)((longlong)param_1 + 0x28));
  if (bVar1) {
    **(undefined1 **)param_1 = 1;
  }
  return bVar1;
}

// Call @ 1438a7170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::OverlapQuery<Chaos::TSphere<double,3>_>'::__l21::<lambda_3>,bool,Chaos::FImplicitObject_const_&,Chaos::TRigidTransform<double,3>_const_&>
::Call(void *param_1,FImplicitObject *param_2,TRigidTransform<double,3> *param_3)

{
  bool bVar1;
  undefined1 auStackY_108 [32];
  TTransform<double> TStack_d8;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  double dStack_20;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_108;
  TStack_d8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  TStack_d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  TStack_d8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  TStack_d8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  TStack_d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  TStack_d8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  TStack_d8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  TStack_d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  TStack_d8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  TStack_d8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  TStack_d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  TStack_d8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  TStack_d8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  TStack_d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  TStack_d8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  TStack_d8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  TStack_d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  TStack_d8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&TStack_d8,(TTransform<double> *)param_3,
             *(TTransform<double> **)((longlong)param_1 + 8));
  dStack_78 = TStack_d8.Rotation.XY.m128d_f64[0];
  dStack_70 = TStack_d8.Rotation.XY.m128d_f64[1];
  dStack_68 = TStack_d8.Rotation.ZW.m128d_f64[0];
  dStack_60 = TStack_d8.Rotation.ZW.m128d_f64[1];
  dStack_58 = TStack_d8.Translation.XY.m128d_f64[0];
  dStack_50 = TStack_d8.Translation.XY.m128d_f64[1];
  dStack_48 = TStack_d8.Translation.ZW.m128d_f64[0];
  dStack_40 = TStack_d8.Translation.ZW.m128d_f64[1];
  dStack_38 = TStack_d8.Scale3D.XY.m128d_f64[0];
  dStack_30 = TStack_d8.Scale3D.XY.m128d_f64[1];
  dStack_28 = TStack_d8.Scale3D.ZW.m128d_f64[0];
  dStack_20 = TStack_d8.Scale3D.ZW.m128d_f64[1];
  bVar1 = ::Chaos::OverlapQuery<Chaos::TSphere<double,3>_>
                    (param_2,(TRigidTransform<double,3> *)&dStack_78,
                     *(TSphere<double,3> **)((longlong)param_1 + 0x10),
                     *(TRigidTransform<double,3> **)((longlong)param_1 + 0x18),
                     *(double *)((longlong)param_1 + 0x20),
                     (FMTDInfo *)**(undefined8 **)((longlong)param_1 + 0x28));
  if (bVar1) {
    **(undefined1 **)param_1 = 1;
  }
  return bVar1;
}

// Call @ 1438a7180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::OverlapQuery<Chaos::FCapsule>'::__l21::<lambda_3>,bool,Chaos::FImplicitObject_const_&,Chaos::TRigidTransform<double,3>_const_&>
::Call(void *param_1,FImplicitObject *param_2,TRigidTransform<double,3> *param_3)

{
  bool bVar1;
  undefined1 auStackY_108 [32];
  TTransform<double> TStack_d8;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  double dStack_20;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_108;
  TStack_d8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  TStack_d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  TStack_d8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  TStack_d8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  TStack_d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  TStack_d8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  TStack_d8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  TStack_d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  TStack_d8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  TStack_d8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  TStack_d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  TStack_d8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  TStack_d8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  TStack_d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  TStack_d8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  TStack_d8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  TStack_d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  TStack_d8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&TStack_d8,(TTransform<double> *)param_3,
             *(TTransform<double> **)((longlong)param_1 + 8));
  dStack_78 = TStack_d8.Rotation.XY.m128d_f64[0];
  dStack_70 = TStack_d8.Rotation.XY.m128d_f64[1];
  dStack_68 = TStack_d8.Rotation.ZW.m128d_f64[0];
  dStack_60 = TStack_d8.Rotation.ZW.m128d_f64[1];
  dStack_58 = TStack_d8.Translation.XY.m128d_f64[0];
  dStack_50 = TStack_d8.Translation.XY.m128d_f64[1];
  dStack_48 = TStack_d8.Translation.ZW.m128d_f64[0];
  dStack_40 = TStack_d8.Translation.ZW.m128d_f64[1];
  dStack_38 = TStack_d8.Scale3D.XY.m128d_f64[0];
  dStack_30 = TStack_d8.Scale3D.XY.m128d_f64[1];
  dStack_28 = TStack_d8.Scale3D.ZW.m128d_f64[0];
  dStack_20 = TStack_d8.Scale3D.ZW.m128d_f64[1];
  bVar1 = ::Chaos::OverlapQuery<Chaos::FCapsule>
                    (param_2,(TRigidTransform<double,3> *)&dStack_78,
                     *(FCapsule **)((longlong)param_1 + 0x10),
                     *(TRigidTransform<double,3> **)((longlong)param_1 + 0x18),
                     *(double *)((longlong)param_1 + 0x20),
                     (FMTDInfo *)**(undefined8 **)((longlong)param_1 + 0x28));
  if (bVar1) {
    **(undefined1 **)param_1 = 1;
  }
  return bVar1;
}

// Call @ 1438a7190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::OverlapQuery<Chaos::FConvex>'::__l21::<lambda_3>,bool,Chaos::FImplicitObject_const_&,Chaos::TRigidTransform<double,3>_const_&>
::Call(void *param_1,FImplicitObject *param_2,TRigidTransform<double,3> *param_3)

{
  bool bVar1;
  undefined1 auStackY_108 [32];
  TTransform<double> TStack_d8;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  double dStack_20;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_108;
  TStack_d8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  TStack_d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  TStack_d8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  TStack_d8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  TStack_d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  TStack_d8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  TStack_d8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  TStack_d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  TStack_d8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  TStack_d8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  TStack_d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  TStack_d8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  TStack_d8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  TStack_d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  TStack_d8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  TStack_d8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  TStack_d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  TStack_d8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&TStack_d8,(TTransform<double> *)param_3,
             *(TTransform<double> **)((longlong)param_1 + 8));
  dStack_78 = TStack_d8.Rotation.XY.m128d_f64[0];
  dStack_70 = TStack_d8.Rotation.XY.m128d_f64[1];
  dStack_68 = TStack_d8.Rotation.ZW.m128d_f64[0];
  dStack_60 = TStack_d8.Rotation.ZW.m128d_f64[1];
  dStack_58 = TStack_d8.Translation.XY.m128d_f64[0];
  dStack_50 = TStack_d8.Translation.XY.m128d_f64[1];
  dStack_48 = TStack_d8.Translation.ZW.m128d_f64[0];
  dStack_40 = TStack_d8.Translation.ZW.m128d_f64[1];
  dStack_38 = TStack_d8.Scale3D.XY.m128d_f64[0];
  dStack_30 = TStack_d8.Scale3D.XY.m128d_f64[1];
  dStack_28 = TStack_d8.Scale3D.ZW.m128d_f64[0];
  dStack_20 = TStack_d8.Scale3D.ZW.m128d_f64[1];
  bVar1 = ::Chaos::OverlapQuery<Chaos::FConvex>
                    (param_2,(TRigidTransform<double,3> *)&dStack_78,
                     *(FConvex **)((longlong)param_1 + 0x10),
                     *(TRigidTransform<double,3> **)((longlong)param_1 + 0x18),
                     *(double *)((longlong)param_1 + 0x20),
                     (FMTDInfo *)**(undefined8 **)((longlong)param_1 + 0x28));
  if (bVar1) {
    **(undefined1 **)param_1 = 1;
  }
  return bVar1;
}

// Call @ 1438a71a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FConvexBuilder::Build'::__l67::<lambda_3>,void,TArray<int,TSizedDefaultAllocator<32>_>_&,UE::Math::TVector<float>_>
::Call(void *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,TVector<float> *param_3)

{
  TVector<float>_u_0 local_18 [2];
  
  local_18[0]._0_8_ = *(undefined8 *)&param_3->field0_0x0;
  local_18[0]._8_4_ = (param_3->field0_0x0)._s_0.Z;
  `Chaos::FConvexBuilder::Build'::__l67::<lambda_3>::operator()
            (param_1,param_2,(TVector<float> *)&local_18[0]._s_0);
  return;
}

// Call @ 1438a71d0

TVector<float> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FConvexBuilder::Build'::__l67::<lambda_4>,UE::Math::TVector<float>,int>::
Call(TVector<float> *__return_storage_ptr__,void *param_1,int *param_2)

{
  uint uVar1;
  float fVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  TVector<float> *pTVar8;
  
  uVar1 = *param_2;
  plVar3 = (longlong *)**(longlong **)param_1;
  uVar7 = 0;
  if ((int)uVar1 < (int)plVar3[1]) {
    uVar7 = ~uVar1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TVector<float> *)(*pcVar5)();
      return pTVar8;
    }
  }
  lVar4 = *plVar3;
  fVar2 = *(float *)(lVar4 + 8 + (longlong)(int)uVar1 * 0xc);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       *(undefined8 *)(lVar4 + (longlong)(int)uVar1 * 0xc);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar2;
  return __return_storage_ptr__;
}

// Call @ 14395a110

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationImpl<1,double>'::__l22::FAHelper_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  (*(code *)(*(undefined8 **)param_1)[1])
            (&local_28,**(undefined8 **)param_1,param_2,0,*(undefined8 *)((longlong)param_1 + 8));
  *(undefined8 *)__return_storage_ptr__ = local_28;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uStack_20;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = local_18;
  return __return_storage_ptr__;
}

// Call @ 14395a160

TVector<double,3> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::GJKPenetrationImpl<1,double>'::__l22::FBHelper_const_,Chaos::TVector<double,3>,Chaos::TVector<double,3>_const_&>
::Call(TVector<double,3> *__return_storage_ptr__,void *param_1,TVector<double,3> *param_2)

{
  double dVar1;
  double dVar2;
  TVector<double> *pTVar3;
  TVector<double> local_28;
  
  pTVar3 = ::Chaos::FGeomGJKHelper::SupportFunction
                     (*(FGeomGJKHelper **)param_1,&local_28,
                      *(TRigidTransform<double,3> **)((longlong)param_1 + 0x10),
                      *(TRotation<double,3> **)((longlong)param_1 + 0x18),param_2,
                      *(int **)((longlong)param_1 + 8));
  dVar2 = (pTVar3->field0_0x0)._s_0.Y;
  dVar1 = (pTVar3->field0_0x0)._s_0.Z;
  *(double *)__return_storage_ptr__ = (pTVar3->field0_0x0)._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x8 = dVar2;
  *(double *)&__return_storage_ptr__->field_0x10 = dVar1;
  return __return_storage_ptr__;
}

// Call @ 1439c7750

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Chaos::FGenericParticlePairMidPhase::GenerateCollisionsImplicitHierarchyImplicitHierarchy'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int>
::Call(void *param_1,FImplicitObject **param_2,TRigidTransform<double,3> *param_3,int *param_4,
      int *param_5,int *param_6)

{
  ``Chaos::FGenericParticlePairMidPhase::GenerateCollisionsImplicitHierarchyImplicitHierarchy'::__l2
  ::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
            (param_1,*param_2,param_3,*param_4,*param_5,*param_6);
  return;
}

// Call @ 1439c7780

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FGenericParticlePairMidPhase::GenerateCollisionsBVHImplicitHierarchy'::__l2::<lambda_1>,void,Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int>
::Call(void *param_1,FImplicitObject **param_2,TRigidTransform<double,3> *param_3,int *param_4,
      int *param_5,int *param_6)

{
  `Chaos::FGenericParticlePairMidPhase::GenerateCollisionsBVHImplicitHierarchy'::__l2::<lambda_1>::
  operator()(param_1,*param_2,param_3,*param_4,*param_5,*param_6);
  return;
}

// Call @ 1439c77b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FGenericParticlePairMidPhase::GenerateCollisionsImplicitHierarchyImplicitHierarchy'::__l2::<lambda_1>,void,Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int>
::Call(void *param_1,FImplicitObject **param_2,TRigidTransform<double,3> *param_3,int *param_4,
      int *param_5,int *param_6)

{
  `Chaos::FGenericParticlePairMidPhase::GenerateCollisionsImplicitHierarchyImplicitHierarchy'::__l2
  ::<lambda_1>::operator()(param_1,*param_2,param_3,*param_4,*param_5,*param_6);
  return;
}

// Call @ 1439c77e0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FindLevelSetParticles'::__l5::<lambda_1>,bool,Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int>
::Call(void *param_1,FImplicitObject **param_2,TRigidTransform<double,3> *param_3,int *param_4,
      int *param_5,int *param_6)

{
  TPBDRigidParticleHandleImp<double,3,1> *this;
  TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_> *pTVar1;
  FImplicitObjectUnionClustered *this_00;
  
  this_00 = (FImplicitObjectUnionClustered *)*param_2;
  if ((char)((FImplicitObjectUnionClustered *)*param_2)->_padding_ != '\x0f') {
    this_00 = (FImplicitObjectUnionClustered *)0x0;
  }
  if (this_00 != (FImplicitObjectUnionClustered *)0x0) {
    this = ::Chaos::FImplicitObjectUnionClustered::FindParticleForImplicitObject
                     (this_00,*(FImplicitObject **)param_1);
    if (this != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
      pTVar1 = ::Chaos::TPBDRigidParticleHandleImp<double,3,1>::CollisionParticles(this);
      **(undefined8 **)((longlong)param_1 + 8) = pTVar1->Ptr;
      return false;
    }
  }
  return true;
}

// Call @ 143a0a760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::SweepQuery<Chaos::TBox<double,3>_>'::__l36::<lambda_5>,bool,Chaos::FImplicitObject_const_&,Chaos::TRigidTransform<double,3>_const_&>
::Call(void *param_1,FImplicitObject *param_2,TRigidTransform<double,3> *param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined1 auStackY_1b8 [32];
  int aiStack_148 [2];
  double dStack_140;
  TVector<double,3> TStack_138;
  TVector<double,3> TStack_120;
  TVector<double,3> TStack_108;
  TTransform<double> TStack_e8;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  TStack_e8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  TStack_e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  TStack_e8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  TStack_e8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  TStack_e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  TStack_e8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  TStack_e8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  TStack_e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  TStack_e8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  TStack_e8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  TStack_e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  TStack_e8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  TStack_e8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  TStack_e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  TStack_e8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  TStack_e8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  TStack_e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  TStack_e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&TStack_e8,(TTransform<double> *)param_3,
             *(TTransform<double> **)((longlong)param_1 + 8));
  dStack_88 = TStack_e8.Rotation.XY.m128d_f64[0];
  dStack_80 = TStack_e8.Rotation.XY.m128d_f64[1];
  dStack_68 = TStack_e8.Translation.XY.m128d_f64[0];
  dStack_60 = TStack_e8.Translation.XY.m128d_f64[1];
  dStack_48 = TStack_e8.Scale3D.XY.m128d_f64[0];
  dStack_40 = TStack_e8.Scale3D.XY.m128d_f64[1];
  dStack_140 = 0.0;
  dStack_78 = TStack_e8.Rotation.ZW.m128d_f64[0];
  dStack_70 = TStack_e8.Rotation.ZW.m128d_f64[1];
  dStack_58 = TStack_e8.Translation.ZW.m128d_f64[0];
  dStack_50 = TStack_e8.Translation.ZW.m128d_f64[1];
  dStack_38 = TStack_e8.Scale3D.ZW.m128d_f64[0];
  dStack_30 = TStack_e8.Scale3D.ZW.m128d_f64[1];
  bVar2 = ::Chaos::SweepQuery<Chaos::TBox<double,3>_>
                    (param_2,(TRigidTransform<double,3> *)&dStack_88,
                     *(TBox<double,3> **)((longlong)param_1 + 0x10),
                     *(TRigidTransform<double,3> **)((longlong)param_1 + 0x18),
                     *(TVector<double,3> **)((longlong)param_1 + 0x20),
                     *(double *)((longlong)param_1 + 0x28),&dStack_140,&TStack_138,&TStack_120,
                     aiStack_148,&TStack_108,*(double *)((longlong)param_1 + 0x58),
                     *(bool *)((longlong)param_1 + 0x60));
  if (bVar2) {
    **(undefined1 **)param_1 = 1;
    if (dStack_140 < **(double **)((longlong)param_1 + 0x30)) {
      **(double **)((longlong)param_1 + 0x30) = dStack_140;
      puVar1 = *(undefined8 **)((longlong)param_1 + 0x38);
      *puVar1 = TStack_138._0_8_;
      puVar1[1] = TStack_138._8_8_;
      puVar1[2] = TStack_138._16_8_;
      puVar1 = *(undefined8 **)((longlong)param_1 + 0x40);
      *puVar1 = TStack_120._0_8_;
      puVar1[1] = TStack_120._8_8_;
      puVar1[2] = TStack_120._16_8_;
      **(int **)((longlong)param_1 + 0x48) = aiStack_148[0];
      puVar1 = *(undefined8 **)((longlong)param_1 + 0x50);
      *puVar1 = TStack_108._0_8_;
      puVar1[1] = TStack_108._8_8_;
      puVar1[2] = TStack_108._16_8_;
    }
  }
  return false;
}

// Call @ 143a0a770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::SweepQuery<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>'::__l36::<lambda_5>,bool,Chaos::FImplicitObject_const_&,Chaos::TRigidTransform<double,3>_const_&>
::Call(void *param_1,FImplicitObject *param_2,TRigidTransform<double,3> *param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined1 auStackY_1b8 [32];
  int aiStack_148 [2];
  double dStack_140;
  TVector<double,3> TStack_138;
  TVector<double,3> TStack_120;
  TVector<double,3> TStack_108;
  TTransform<double> TStack_e8;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  TStack_e8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  TStack_e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  TStack_e8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  TStack_e8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  TStack_e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  TStack_e8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  TStack_e8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  TStack_e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  TStack_e8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  TStack_e8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  TStack_e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  TStack_e8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  TStack_e8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  TStack_e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  TStack_e8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  TStack_e8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  TStack_e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  TStack_e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&TStack_e8,(TTransform<double> *)param_3,
             *(TTransform<double> **)((longlong)param_1 + 8));
  dStack_88 = TStack_e8.Rotation.XY.m128d_f64[0];
  dStack_80 = TStack_e8.Rotation.XY.m128d_f64[1];
  dStack_68 = TStack_e8.Translation.XY.m128d_f64[0];
  dStack_60 = TStack_e8.Translation.XY.m128d_f64[1];
  dStack_48 = TStack_e8.Scale3D.XY.m128d_f64[0];
  dStack_40 = TStack_e8.Scale3D.XY.m128d_f64[1];
  dStack_140 = 0.0;
  dStack_78 = TStack_e8.Rotation.ZW.m128d_f64[0];
  dStack_70 = TStack_e8.Rotation.ZW.m128d_f64[1];
  dStack_58 = TStack_e8.Translation.ZW.m128d_f64[0];
  dStack_50 = TStack_e8.Translation.ZW.m128d_f64[1];
  dStack_38 = TStack_e8.Scale3D.ZW.m128d_f64[0];
  dStack_30 = TStack_e8.Scale3D.ZW.m128d_f64[1];
  bVar2 = ::Chaos::SweepQuery<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>
                    (param_2,(TRigidTransform<double,3> *)&dStack_88,
                     *(TImplicitObjectScaled<Chaos::TBox<double,3>,1> **)((longlong)param_1 + 0x10),
                     *(TRigidTransform<double,3> **)((longlong)param_1 + 0x18),
                     *(TVector<double,3> **)((longlong)param_1 + 0x20),
                     *(double *)((longlong)param_1 + 0x28),&dStack_140,&TStack_138,&TStack_120,
                     aiStack_148,&TStack_108,*(double *)((longlong)param_1 + 0x58),
                     *(bool *)((longlong)param_1 + 0x60));
  if (bVar2) {
    **(undefined1 **)param_1 = 1;
    if (dStack_140 < **(double **)((longlong)param_1 + 0x30)) {
      **(double **)((longlong)param_1 + 0x30) = dStack_140;
      puVar1 = *(undefined8 **)((longlong)param_1 + 0x38);
      *puVar1 = TStack_138._0_8_;
      puVar1[1] = TStack_138._8_8_;
      puVar1[2] = TStack_138._16_8_;
      puVar1 = *(undefined8 **)((longlong)param_1 + 0x40);
      *puVar1 = TStack_120._0_8_;
      puVar1[1] = TStack_120._8_8_;
      puVar1[2] = TStack_120._16_8_;
      **(int **)((longlong)param_1 + 0x48) = aiStack_148[0];
      puVar1 = *(undefined8 **)((longlong)param_1 + 0x50);
      *puVar1 = TStack_108._0_8_;
      puVar1[1] = TStack_108._8_8_;
      puVar1[2] = TStack_108._16_8_;
    }
  }
  return false;
}

// Call @ 143a0a780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::SweepQuery<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>'::__l36::<lambda_5>,bool,Chaos::FImplicitObject_const_&,Chaos::TRigidTransform<double,3>_const_&>
::Call(void *param_1,FImplicitObject *param_2,TRigidTransform<double,3> *param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined1 auStackY_1b8 [32];
  int aiStack_148 [2];
  double dStack_140;
  TVector<double,3> TStack_138;
  TVector<double,3> TStack_120;
  TVector<double,3> TStack_108;
  TTransform<double> TStack_e8;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  TStack_e8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  TStack_e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  TStack_e8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  TStack_e8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  TStack_e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  TStack_e8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  TStack_e8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  TStack_e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  TStack_e8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  TStack_e8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  TStack_e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  TStack_e8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  TStack_e8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  TStack_e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  TStack_e8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  TStack_e8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  TStack_e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  TStack_e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&TStack_e8,(TTransform<double> *)param_3,
             *(TTransform<double> **)((longlong)param_1 + 8));
  dStack_88 = TStack_e8.Rotation.XY.m128d_f64[0];
  dStack_80 = TStack_e8.Rotation.XY.m128d_f64[1];
  dStack_68 = TStack_e8.Translation.XY.m128d_f64[0];
  dStack_60 = TStack_e8.Translation.XY.m128d_f64[1];
  dStack_48 = TStack_e8.Scale3D.XY.m128d_f64[0];
  dStack_40 = TStack_e8.Scale3D.XY.m128d_f64[1];
  dStack_140 = 0.0;
  dStack_78 = TStack_e8.Rotation.ZW.m128d_f64[0];
  dStack_70 = TStack_e8.Rotation.ZW.m128d_f64[1];
  dStack_58 = TStack_e8.Translation.ZW.m128d_f64[0];
  dStack_50 = TStack_e8.Translation.ZW.m128d_f64[1];
  dStack_38 = TStack_e8.Scale3D.ZW.m128d_f64[0];
  dStack_30 = TStack_e8.Scale3D.ZW.m128d_f64[1];
  bVar2 = ::Chaos::SweepQuery<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>
                    (param_2,(TRigidTransform<double,3> *)&dStack_88,
                     *(TImplicitObjectScaled<Chaos::TSphere<double,3>,1> **)
                      ((longlong)param_1 + 0x10),
                     *(TRigidTransform<double,3> **)((longlong)param_1 + 0x18),
                     *(TVector<double,3> **)((longlong)param_1 + 0x20),
                     *(double *)((longlong)param_1 + 0x28),&dStack_140,&TStack_138,&TStack_120,
                     aiStack_148,&TStack_108,*(double *)((longlong)param_1 + 0x58),
                     *(bool *)((longlong)param_1 + 0x60));
  if (bVar2) {
    **(undefined1 **)param_1 = 1;
    if (dStack_140 < **(double **)((longlong)param_1 + 0x30)) {
      **(double **)((longlong)param_1 + 0x30) = dStack_140;
      puVar1 = *(undefined8 **)((longlong)param_1 + 0x38);
      *puVar1 = TStack_138._0_8_;
      puVar1[1] = TStack_138._8_8_;
      puVar1[2] = TStack_138._16_8_;
      puVar1 = *(undefined8 **)((longlong)param_1 + 0x40);
      *puVar1 = TStack_120._0_8_;
      puVar1[1] = TStack_120._8_8_;
      puVar1[2] = TStack_120._16_8_;
      **(int **)((longlong)param_1 + 0x48) = aiStack_148[0];
      puVar1 = *(undefined8 **)((longlong)param_1 + 0x50);
      *puVar1 = TStack_108._0_8_;
      puVar1[1] = TStack_108._8_8_;
      puVar1[2] = TStack_108._16_8_;
    }
  }
  return false;
}

// Call @ 143a0a790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::SweepQuery<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>'::__l36::<lambda_5>,bool,Chaos::FImplicitObject_const_&,Chaos::TRigidTransform<double,3>_const_&>
::Call(void *param_1,FImplicitObject *param_2,TRigidTransform<double,3> *param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined1 auStackY_1b8 [32];
  int aiStack_148 [2];
  double dStack_140;
  TVector<double,3> TStack_138;
  TVector<double,3> TStack_120;
  TVector<double,3> TStack_108;
  TTransform<double> TStack_e8;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  TStack_e8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  TStack_e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  TStack_e8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  TStack_e8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  TStack_e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  TStack_e8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  TStack_e8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  TStack_e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  TStack_e8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  TStack_e8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  TStack_e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  TStack_e8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  TStack_e8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  TStack_e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  TStack_e8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  TStack_e8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  TStack_e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  TStack_e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&TStack_e8,(TTransform<double> *)param_3,
             *(TTransform<double> **)((longlong)param_1 + 8));
  dStack_88 = TStack_e8.Rotation.XY.m128d_f64[0];
  dStack_80 = TStack_e8.Rotation.XY.m128d_f64[1];
  dStack_68 = TStack_e8.Translation.XY.m128d_f64[0];
  dStack_60 = TStack_e8.Translation.XY.m128d_f64[1];
  dStack_48 = TStack_e8.Scale3D.XY.m128d_f64[0];
  dStack_40 = TStack_e8.Scale3D.XY.m128d_f64[1];
  dStack_140 = 0.0;
  dStack_78 = TStack_e8.Rotation.ZW.m128d_f64[0];
  dStack_70 = TStack_e8.Rotation.ZW.m128d_f64[1];
  dStack_58 = TStack_e8.Translation.ZW.m128d_f64[0];
  dStack_50 = TStack_e8.Translation.ZW.m128d_f64[1];
  dStack_38 = TStack_e8.Scale3D.ZW.m128d_f64[0];
  dStack_30 = TStack_e8.Scale3D.ZW.m128d_f64[1];
  bVar2 = ::Chaos::SweepQuery<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>
                    (param_2,(TRigidTransform<double,3> *)&dStack_88,
                     *(TImplicitObjectScaled<Chaos::FCapsule,1> **)((longlong)param_1 + 0x10),
                     *(TRigidTransform<double,3> **)((longlong)param_1 + 0x18),
                     *(TVector<double,3> **)((longlong)param_1 + 0x20),
                     *(double *)((longlong)param_1 + 0x28),&dStack_140,&TStack_138,&TStack_120,
                     aiStack_148,&TStack_108,*(double *)((longlong)param_1 + 0x58),
                     *(bool *)((longlong)param_1 + 0x60));
  if (bVar2) {
    **(undefined1 **)param_1 = 1;
    if (dStack_140 < **(double **)((longlong)param_1 + 0x30)) {
      **(double **)((longlong)param_1 + 0x30) = dStack_140;
      puVar1 = *(undefined8 **)((longlong)param_1 + 0x38);
      *puVar1 = TStack_138._0_8_;
      puVar1[1] = TStack_138._8_8_;
      puVar1[2] = TStack_138._16_8_;
      puVar1 = *(undefined8 **)((longlong)param_1 + 0x40);
      *puVar1 = TStack_120._0_8_;
      puVar1[1] = TStack_120._8_8_;
      puVar1[2] = TStack_120._16_8_;
      **(int **)((longlong)param_1 + 0x48) = aiStack_148[0];
      puVar1 = *(undefined8 **)((longlong)param_1 + 0x50);
      *puVar1 = TStack_108._0_8_;
      puVar1[1] = TStack_108._8_8_;
      puVar1[2] = TStack_108._16_8_;
    }
  }
  return false;
}

// Call @ 143a0a7a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::SweepQuery<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>'::__l36::<lambda_5>,bool,Chaos::FImplicitObject_const_&,Chaos::TRigidTransform<double,3>_const_&>
::Call(void *param_1,FImplicitObject *param_2,TRigidTransform<double,3> *param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined1 auStackY_1b8 [32];
  int aiStack_148 [2];
  double dStack_140;
  TVector<double,3> TStack_138;
  TVector<double,3> TStack_120;
  TVector<double,3> TStack_108;
  TTransform<double> TStack_e8;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  TStack_e8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  TStack_e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  TStack_e8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  TStack_e8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  TStack_e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  TStack_e8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  TStack_e8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  TStack_e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  TStack_e8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  TStack_e8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  TStack_e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  TStack_e8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  TStack_e8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  TStack_e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  TStack_e8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  TStack_e8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  TStack_e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  TStack_e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&TStack_e8,(TTransform<double> *)param_3,
             *(TTransform<double> **)((longlong)param_1 + 8));
  dStack_88 = TStack_e8.Rotation.XY.m128d_f64[0];
  dStack_80 = TStack_e8.Rotation.XY.m128d_f64[1];
  dStack_68 = TStack_e8.Translation.XY.m128d_f64[0];
  dStack_60 = TStack_e8.Translation.XY.m128d_f64[1];
  dStack_48 = TStack_e8.Scale3D.XY.m128d_f64[0];
  dStack_40 = TStack_e8.Scale3D.XY.m128d_f64[1];
  dStack_140 = 0.0;
  dStack_78 = TStack_e8.Rotation.ZW.m128d_f64[0];
  dStack_70 = TStack_e8.Rotation.ZW.m128d_f64[1];
  dStack_58 = TStack_e8.Translation.ZW.m128d_f64[0];
  dStack_50 = TStack_e8.Translation.ZW.m128d_f64[1];
  dStack_38 = TStack_e8.Scale3D.ZW.m128d_f64[0];
  dStack_30 = TStack_e8.Scale3D.ZW.m128d_f64[1];
  bVar2 = ::Chaos::SweepQuery<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>
                    (param_2,(TRigidTransform<double,3> *)&dStack_88,
                     *(TImplicitObjectScaled<Chaos::FConvex,1> **)((longlong)param_1 + 0x10),
                     *(TRigidTransform<double,3> **)((longlong)param_1 + 0x18),
                     *(TVector<double,3> **)((longlong)param_1 + 0x20),
                     *(double *)((longlong)param_1 + 0x28),&dStack_140,&TStack_138,&TStack_120,
                     aiStack_148,&TStack_108,*(double *)((longlong)param_1 + 0x58),
                     *(bool *)((longlong)param_1 + 0x60));
  if (bVar2) {
    **(undefined1 **)param_1 = 1;
    if (dStack_140 < **(double **)((longlong)param_1 + 0x30)) {
      **(double **)((longlong)param_1 + 0x30) = dStack_140;
      puVar1 = *(undefined8 **)((longlong)param_1 + 0x38);
      *puVar1 = TStack_138._0_8_;
      puVar1[1] = TStack_138._8_8_;
      puVar1[2] = TStack_138._16_8_;
      puVar1 = *(undefined8 **)((longlong)param_1 + 0x40);
      *puVar1 = TStack_120._0_8_;
      puVar1[1] = TStack_120._8_8_;
      puVar1[2] = TStack_120._16_8_;
      **(int **)((longlong)param_1 + 0x48) = aiStack_148[0];
      puVar1 = *(undefined8 **)((longlong)param_1 + 0x50);
      *puVar1 = TStack_108._0_8_;
      puVar1[1] = TStack_108._8_8_;
      puVar1[2] = TStack_108._16_8_;
    }
  }
  return false;
}

// Call @ 143a0a7b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::SweepQuery<Chaos::TSphere<double,3>_>'::__l36::<lambda_5>,bool,Chaos::FImplicitObject_const_&,Chaos::TRigidTransform<double,3>_const_&>
::Call(void *param_1,FImplicitObject *param_2,TRigidTransform<double,3> *param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined1 auStackY_1b8 [32];
  int aiStack_148 [2];
  double dStack_140;
  TVector<double,3> TStack_138;
  TVector<double,3> TStack_120;
  TVector<double,3> TStack_108;
  TTransform<double> TStack_e8;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  TStack_e8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  TStack_e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  TStack_e8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  TStack_e8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  TStack_e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  TStack_e8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  TStack_e8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  TStack_e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  TStack_e8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  TStack_e8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  TStack_e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  TStack_e8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  TStack_e8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  TStack_e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  TStack_e8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  TStack_e8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  TStack_e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  TStack_e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&TStack_e8,(TTransform<double> *)param_3,
             *(TTransform<double> **)((longlong)param_1 + 8));
  dStack_88 = TStack_e8.Rotation.XY.m128d_f64[0];
  dStack_80 = TStack_e8.Rotation.XY.m128d_f64[1];
  dStack_68 = TStack_e8.Translation.XY.m128d_f64[0];
  dStack_60 = TStack_e8.Translation.XY.m128d_f64[1];
  dStack_48 = TStack_e8.Scale3D.XY.m128d_f64[0];
  dStack_40 = TStack_e8.Scale3D.XY.m128d_f64[1];
  dStack_140 = 0.0;
  dStack_78 = TStack_e8.Rotation.ZW.m128d_f64[0];
  dStack_70 = TStack_e8.Rotation.ZW.m128d_f64[1];
  dStack_58 = TStack_e8.Translation.ZW.m128d_f64[0];
  dStack_50 = TStack_e8.Translation.ZW.m128d_f64[1];
  dStack_38 = TStack_e8.Scale3D.ZW.m128d_f64[0];
  dStack_30 = TStack_e8.Scale3D.ZW.m128d_f64[1];
  bVar2 = ::Chaos::SweepQuery<Chaos::TSphere<double,3>_>
                    (param_2,(TRigidTransform<double,3> *)&dStack_88,
                     *(TSphere<double,3> **)((longlong)param_1 + 0x10),
                     *(TRigidTransform<double,3> **)((longlong)param_1 + 0x18),
                     *(TVector<double,3> **)((longlong)param_1 + 0x20),
                     *(double *)((longlong)param_1 + 0x28),&dStack_140,&TStack_138,&TStack_120,
                     aiStack_148,&TStack_108,*(double *)((longlong)param_1 + 0x58),
                     *(bool *)((longlong)param_1 + 0x60));
  if (bVar2) {
    **(undefined1 **)param_1 = 1;
    if (dStack_140 < **(double **)((longlong)param_1 + 0x30)) {
      **(double **)((longlong)param_1 + 0x30) = dStack_140;
      puVar1 = *(undefined8 **)((longlong)param_1 + 0x38);
      *puVar1 = TStack_138._0_8_;
      puVar1[1] = TStack_138._8_8_;
      puVar1[2] = TStack_138._16_8_;
      puVar1 = *(undefined8 **)((longlong)param_1 + 0x40);
      *puVar1 = TStack_120._0_8_;
      puVar1[1] = TStack_120._8_8_;
      puVar1[2] = TStack_120._16_8_;
      **(int **)((longlong)param_1 + 0x48) = aiStack_148[0];
      puVar1 = *(undefined8 **)((longlong)param_1 + 0x50);
      *puVar1 = TStack_108._0_8_;
      puVar1[1] = TStack_108._8_8_;
      puVar1[2] = TStack_108._16_8_;
    }
  }
  return false;
}

// Call @ 143a0a7c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::SweepQuery<Chaos::FCapsule>'::__l36::<lambda_5>,bool,Chaos::FImplicitObject_const_&,Chaos::TRigidTransform<double,3>_const_&>
::Call(void *param_1,FImplicitObject *param_2,TRigidTransform<double,3> *param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined1 auStackY_1b8 [32];
  int aiStack_148 [2];
  double dStack_140;
  TVector<double,3> TStack_138;
  TVector<double,3> TStack_120;
  TVector<double,3> TStack_108;
  TTransform<double> TStack_e8;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  TStack_e8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  TStack_e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  TStack_e8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  TStack_e8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  TStack_e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  TStack_e8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  TStack_e8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  TStack_e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  TStack_e8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  TStack_e8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  TStack_e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  TStack_e8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  TStack_e8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  TStack_e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  TStack_e8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  TStack_e8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  TStack_e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  TStack_e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&TStack_e8,(TTransform<double> *)param_3,
             *(TTransform<double> **)((longlong)param_1 + 8));
  dStack_88 = TStack_e8.Rotation.XY.m128d_f64[0];
  dStack_80 = TStack_e8.Rotation.XY.m128d_f64[1];
  dStack_68 = TStack_e8.Translation.XY.m128d_f64[0];
  dStack_60 = TStack_e8.Translation.XY.m128d_f64[1];
  dStack_48 = TStack_e8.Scale3D.XY.m128d_f64[0];
  dStack_40 = TStack_e8.Scale3D.XY.m128d_f64[1];
  dStack_140 = 0.0;
  dStack_78 = TStack_e8.Rotation.ZW.m128d_f64[0];
  dStack_70 = TStack_e8.Rotation.ZW.m128d_f64[1];
  dStack_58 = TStack_e8.Translation.ZW.m128d_f64[0];
  dStack_50 = TStack_e8.Translation.ZW.m128d_f64[1];
  dStack_38 = TStack_e8.Scale3D.ZW.m128d_f64[0];
  dStack_30 = TStack_e8.Scale3D.ZW.m128d_f64[1];
  bVar2 = ::Chaos::SweepQuery<Chaos::FCapsule>
                    (param_2,(TRigidTransform<double,3> *)&dStack_88,
                     *(FCapsule **)((longlong)param_1 + 0x10),
                     *(TRigidTransform<double,3> **)((longlong)param_1 + 0x18),
                     *(TVector<double,3> **)((longlong)param_1 + 0x20),
                     *(double *)((longlong)param_1 + 0x28),&dStack_140,&TStack_138,&TStack_120,
                     aiStack_148,&TStack_108,*(double *)((longlong)param_1 + 0x58),
                     *(bool *)((longlong)param_1 + 0x60));
  if (bVar2) {
    **(undefined1 **)param_1 = 1;
    if (dStack_140 < **(double **)((longlong)param_1 + 0x30)) {
      **(double **)((longlong)param_1 + 0x30) = dStack_140;
      puVar1 = *(undefined8 **)((longlong)param_1 + 0x38);
      *puVar1 = TStack_138._0_8_;
      puVar1[1] = TStack_138._8_8_;
      puVar1[2] = TStack_138._16_8_;
      puVar1 = *(undefined8 **)((longlong)param_1 + 0x40);
      *puVar1 = TStack_120._0_8_;
      puVar1[1] = TStack_120._8_8_;
      puVar1[2] = TStack_120._16_8_;
      **(int **)((longlong)param_1 + 0x48) = aiStack_148[0];
      puVar1 = *(undefined8 **)((longlong)param_1 + 0x50);
      *puVar1 = TStack_108._0_8_;
      puVar1[1] = TStack_108._8_8_;
      puVar1[2] = TStack_108._16_8_;
    }
  }
  return false;
}

// Call @ 143a0a7d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::SweepQuery<Chaos::FConvex>'::__l36::<lambda_5>,bool,Chaos::FImplicitObject_const_&,Chaos::TRigidTransform<double,3>_const_&>
::Call(void *param_1,FImplicitObject *param_2,TRigidTransform<double,3> *param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined1 auStackY_1b8 [32];
  int aiStack_148 [2];
  double dStack_140;
  TVector<double,3> TStack_138;
  TVector<double,3> TStack_120;
  TVector<double,3> TStack_108;
  TTransform<double> TStack_e8;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  TStack_e8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  TStack_e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  TStack_e8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  TStack_e8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  TStack_e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  TStack_e8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  TStack_e8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  TStack_e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  TStack_e8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  TStack_e8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  TStack_e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  TStack_e8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  TStack_e8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  TStack_e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  TStack_e8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  TStack_e8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  TStack_e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  TStack_e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&TStack_e8,(TTransform<double> *)param_3,
             *(TTransform<double> **)((longlong)param_1 + 8));
  dStack_88 = TStack_e8.Rotation.XY.m128d_f64[0];
  dStack_80 = TStack_e8.Rotation.XY.m128d_f64[1];
  dStack_68 = TStack_e8.Translation.XY.m128d_f64[0];
  dStack_60 = TStack_e8.Translation.XY.m128d_f64[1];
  dStack_48 = TStack_e8.Scale3D.XY.m128d_f64[0];
  dStack_40 = TStack_e8.Scale3D.XY.m128d_f64[1];
  dStack_140 = 0.0;
  dStack_78 = TStack_e8.Rotation.ZW.m128d_f64[0];
  dStack_70 = TStack_e8.Rotation.ZW.m128d_f64[1];
  dStack_58 = TStack_e8.Translation.ZW.m128d_f64[0];
  dStack_50 = TStack_e8.Translation.ZW.m128d_f64[1];
  dStack_38 = TStack_e8.Scale3D.ZW.m128d_f64[0];
  dStack_30 = TStack_e8.Scale3D.ZW.m128d_f64[1];
  bVar2 = ::Chaos::SweepQuery<Chaos::FConvex>
                    (param_2,(TRigidTransform<double,3> *)&dStack_88,
                     *(FConvex **)((longlong)param_1 + 0x10),
                     *(TRigidTransform<double,3> **)((longlong)param_1 + 0x18),
                     *(TVector<double,3> **)((longlong)param_1 + 0x20),
                     *(double *)((longlong)param_1 + 0x28),&dStack_140,&TStack_138,&TStack_120,
                     aiStack_148,&TStack_108,*(double *)((longlong)param_1 + 0x58),
                     *(bool *)((longlong)param_1 + 0x60));
  if (bVar2) {
    **(undefined1 **)param_1 = 1;
    if (dStack_140 < **(double **)((longlong)param_1 + 0x30)) {
      **(double **)((longlong)param_1 + 0x30) = dStack_140;
      puVar1 = *(undefined8 **)((longlong)param_1 + 0x38);
      *puVar1 = TStack_138._0_8_;
      puVar1[1] = TStack_138._8_8_;
      puVar1[2] = TStack_138._16_8_;
      puVar1 = *(undefined8 **)((longlong)param_1 + 0x40);
      *puVar1 = TStack_120._0_8_;
      puVar1[1] = TStack_120._8_8_;
      puVar1[2] = TStack_120._16_8_;
      **(int **)((longlong)param_1 + 0x48) = aiStack_148[0];
      puVar1 = *(undefined8 **)((longlong)param_1 + 0x50);
      *puVar1 = TStack_108._0_8_;
      puVar1[1] = TStack_108._8_8_;
      puVar1[2] = TStack_108._16_8_;
    }
  }
  return false;
}

// Call @ 143a585d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FChaosDDParticle::DrawOptimizedShapes'::__l2::<lambda_1>_const_,void,Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int>
::Call(void *param_1,FImplicitObject **param_2,TRigidTransform<double,3> *param_3,int *param_4,
      int *param_5,int *param_6)

{
  `Chaos::FChaosDDParticle::DrawOptimizedShapes'::__l2::<lambda_1>::operator()
            (param_1,*param_2,param_3,*param_4,*param_5,*param_6);
  return;
}

// Call @ 143a58600

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,float,float,int,float,Chaos::PMatrix<float,3,3>_&),void,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,float,float,int,float,Chaos::PMatrix<float,3,3>_&>
::Call(void *param_1,PMatrix<float,3,3> *param_2,PMatrix<float,3,3> *param_3,float *param_4,
      float *param_5,int *param_6,float *param_7,PMatrix<float,3,3> *param_8)

{
  (**(code **)param_1)(param_2,param_3,*param_4,*param_5,*param_6,*param_7,param_8);
  return;
}

// Call @ 143a58660

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(Chaos::PMatrix<float,3,3>_const_&,float,float,Chaos::PMatrix<float,3,3>_&),void,Chaos::PMatrix<float,3,3>_const_&,float,float,Chaos::PMatrix<float,3,3>_&>
::Call(void *param_1,PMatrix<float,3,3> *param_2,float *param_3,float *param_4,
      PMatrix<float,3,3> *param_5)

{
                    /* WARNING: Could not recover jumptable at 0x000143a58678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(param_2,*param_3,*param_4,param_5);
  return;
}

// Call @ 143a58690

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(Chaos::Softs::FSolverParticles_const_&,int,float,Chaos::PMatrix<float,3,3>_&),void,Chaos::Softs::FSolverParticles_const_&,int,float,Chaos::PMatrix<float,3,3>_&>
::Call(void *param_1,FSolverParticles *param_2,int *param_3,float *param_4,
      PMatrix<float,3,3> *param_5)

{
                    /* WARNING: Could not recover jumptable at 0x000143a586a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(param_2,*param_3,*param_4,param_5);
  return;
}

// Call @ 143a586c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(Chaos::Softs::FSolverParticles_const_&,int,float,Chaos::TVector<float,3>_&),void,Chaos::Softs::FSolverParticles_const_&,int,float,Chaos::TVector<float,3>_&>
::Call(void *param_1,FSolverParticles *param_2,int *param_3,float *param_4,TVector<float,3> *param_5
      )

{
                    /* WARNING: Could not recover jumptable at 0x000143a586d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(param_2,*param_3,*param_4,param_5);
  return;
}

// Call @ 143a586f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::TSpatialHashGridPoints<int,float>::FindAllSelfProximities'::__l2::FParticleProximities,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::TSpatialHashGridPoints<int,float>::FindAllSelfProximities'::__l2::FParticleProximities::
  operator()(param_1,*param_2);
  return;
}

// Call @ 143a58700

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FDeformableSolver::InitializeGaussSeidelConstraintVariables'::__l16::<lambda_10>,void,int,float,Chaos::PMatrix<float,3,3>_&>
::Call(void *param_1,int *param_2,float *param_3,PMatrix<float,3,3> *param_4)

{
  ::Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::AddWCHessian
            (*(FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> **)
              (*(longlong *)param_1 + 0x220),*param_2,*param_3,param_4);
  return;
}

// Call @ 143a58720

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FDeformableSolver::InitializeGaussSeidelConstraintVariables'::__l19::<lambda_11>,void,Chaos::Softs::FSolverParticles_const_&,int,int,float,Chaos::TVector<float,3>_&,Chaos::PMatrix<float,3,3>_&>
::Call(void *param_1,FSolverParticles *param_2,int *param_3,int *param_4,float *param_5,
      TVector<float,3> *param_6,PMatrix<float,3,3> *param_7)

{
  ::Chaos::Softs::FGaussSeidelUnilateralTetConstraints<float,Chaos::Softs::FSolverParticles>::
  AddResidualAndHessian
            (*(FGaussSeidelUnilateralTetConstraints<float,Chaos::Softs::FSolverParticles> **)
              (*(longlong *)param_1 + 0x238),
             (FSolverParticles *)(*(longlong *)(*(longlong *)param_1 + 0x1e8) + 0x20),*param_3,
             *param_4,*param_5,param_6,param_7);
  return;
}

// Call @ 143a58760

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FDeformableSolver::InitializeGaussSeidelConstraintVariables'::__l22::<lambda_12>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  ::Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::
  UpdateTriangleNormalAndNodalWeight
            (*(FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> **)
              (*(longlong *)param_1 + 0x220),param_2,false);
  return;
}

// Call @ 143a58780

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FDeformableSolver::InitializeGaussSeidelConstraintVariables'::__l25::<lambda_13>,void,Chaos::Softs::FSolverParticles_const_&,int,int,float,Chaos::TVector<float,3>_&,Chaos::PMatrix<float,3,3>_&>
::Call(void *param_1,FSolverParticles *param_2,int *param_3,int *param_4,float *param_5,
      TVector<float,3> *param_6,PMatrix<float,3,3> *param_7)

{
  ::Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::AddWCResidual
            (*(FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> **)
              (*(longlong *)param_1 + 0x228),param_2,*param_3,*param_4,*param_5,param_6,param_7);
  return;
}

// Call @ 143a587b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FDeformableSolver::InitializeGaussSeidelConstraintVariables'::__l25::<lambda_14>,void,int,float,Chaos::PMatrix<float,3,3>_&>
::Call(void *param_1,int *param_2,float *param_3,PMatrix<float,3,3> *param_4)

{
  ::Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::AddWCHessian
            (*(FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> **)
              (*(longlong *)param_1 + 0x228),*param_2,*param_3,param_4);
  return;
}

// Call @ 143a587d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FDeformableSolver::InitializeGaussSeidelConstraintVariables'::__l25::<lambda_15>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  `Chaos::Softs::FDeformableSolver::InitializeGaussSeidelConstraintVariables'::__l25::<lambda_15>::
  operator()(param_1,param_2,*param_3);
  return;
}

// Call @ 143a587e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FDeformableSolver::InitializeGaussSeidelConstraintVariables'::__l28::<lambda_16>,void,Chaos::Softs::FSolverParticles_const_&,int,int,float,Chaos::TVector<float,3>_&,Chaos::PMatrix<float,3,3>_&>
::Call(void *param_1,FSolverParticles *param_2,int *param_3,int *param_4,float *param_5,
      TVector<float,3> *param_6,PMatrix<float,3,3> *param_7)

{
  ::Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::AddWCResidual
            (*(FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> **)
              (*(longlong *)param_1 + 0x220),param_2,
             (*(FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> **)
               (*(longlong *)param_1 + 0x220))->InitialWCSize + *param_3,*param_4,*param_5,param_6,
             param_7);
  return;
}

// Call @ 143a58820

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FDeformableSolver::InitializeGaussSeidelConstraintVariables'::__l31::<lambda_17>,void,int,float,Chaos::PMatrix<float,3,3>_&>
::Call(void *param_1,int *param_2,float *param_3,PMatrix<float,3,3> *param_4)

{
  ::Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::AddWCHessian
            (*(FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> **)
              (*(longlong *)param_1 + 0x220),*param_2,*param_3,param_4);
  return;
}

// Call @ 143a58840

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FDeformableSolver::InitializeGaussSeidelConstraintVariables'::__l28::<lambda_18>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  `Chaos::Softs::FDeformableSolver::InitializeGaussSeidelConstraintVariables'::__l28::<lambda_18>::
  operator()(param_1,param_2,*param_3);
  return;
}

// Call @ 143a58850

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FDeformableSolver::InitializeGaussSeidelConstraintVariables'::__l34::<lambda_19>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  `Chaos::Softs::FDeformableSolver::InitializeGaussSeidelConstraintVariables'::__l34::<lambda_19>::
  operator()(param_1,param_2,*param_3);
  return;
}

// Call @ 143a58860

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::CollisionDetectionSpatialHash<Chaos::THierarchicalSpatialHash<int,float>_>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::
  CollisionDetectionSpatialHash<Chaos::THierarchicalSpatialHash<int,float>_>'::__l2::<lambda_1>::
  operator()(param_1,*param_2);
  return;
}

// Call @ 143a58870

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::CollisionDetectionSpatialHashInComponent<Chaos::THierarchicalSpatialHash<int,float>_>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::
  CollisionDetectionSpatialHashInComponent<Chaos::THierarchicalSpatialHash<int,float>_>'::__l2::
  <lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143a58880

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::TSpatialHashGridPoints<int,float>::InitializePoints<TArray<Chaos::Softs::FGaussSeidelSphereRepulsionConstraints<float,Chaos::Softs::FSolverParticles>::FSphereSpatialEntry,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::TSpatialHashGridPoints<int,float>::
  InitializePoints<TArray<Chaos::Softs::FGaussSeidelSphereRepulsionConstraints<float,Chaos::Softs::FSolverParticles>::FSphereSpatialEntry,TSizedDefaultAllocator<32>_>_>'
  ::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143a58890

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::CollisionDetectionSpatialHash<Chaos::THierarchicalSpatialHash<int,float>_>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,bool,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  
  bVar1 = ``Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::
          CollisionDetectionSpatialHash<Chaos::THierarchicalSpatialHash<int,float>_>'::__l2::
          <lambda_1>::operator()'::__l2::<lambda_1>::operator()(param_1,*param_2,*param_3);
  return bVar1;
}

// Call @ 143a588a0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::CollisionDetectionSpatialHashInComponent<Chaos::THierarchicalSpatialHash<int,float>_>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,bool,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  
  bVar1 = ``Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::
          CollisionDetectionSpatialHashInComponent<Chaos::THierarchicalSpatialHash<int,float>_>'::
          __l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()(param_1,*param_2,*param_3);
  return bVar1;
}

// Call @ 143a588b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Private::ChaosDDRenderImplicitObject'::__l2::<lambda_1>,void,Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int>
::Call(void *param_1,FImplicitObject **param_2,TRigidTransform<double,3> *param_3,int *param_4,
      int *param_5,int *param_6)

{
  `Chaos::Private::ChaosDDRenderImplicitObject'::__l2::<lambda_1>::operator()
            (param_1,*param_2,param_3,*param_4,*param_5,*param_6);
  return;
}

// Call @ 143a588e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::TMPMTransfer<float>::ComputeAArray'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `Chaos::TMPMTransfer<float>::ComputeAArray'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143a588f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FChaosDDImplicitObject::Draw'::__l2::<lambda_1>,void,ChaosDD::Private::IChaosDDRenderer_&>
::Call(void *param_1,IChaosDDRenderer *param_2)

{
  undefined4 local_res8 [2];
  undefined4 local_res10 [6];
  code *local_48;
  longlong *local_40;
  longlong local_38;
  IChaosDDRenderer *local_30;
  longlong local_28;
  undefined4 *local_20;
  undefined4 *local_18;
  
  local_res10[0] = *(undefined4 *)((longlong)param_1 + 0x78);
  local_38 = (longlong)param_1 + 0x10;
  local_res8[0] = *(undefined4 *)((longlong)param_1 + 0x74);
  local_28 = (longlong)param_1 + 0x70;
  local_20 = local_res8;
  local_18 = local_res10;
  local_40 = &local_38;
  local_48 = TFunctionRefCaller<`Chaos::Private::ChaosDDRenderImplicitObject'::__l2::<lambda_1>,void,Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int>
             ::Call;
  local_30 = param_2;
  ::Chaos::FImplicitObject::VisitLeafObjects
            (*(FImplicitObject **)param_1,
             (TFunctionRef<void___cdecl(Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int)>
              *)&local_48);
  return;
}

// Call @ 143a58960

/* WARNING: Type propagation algorithm not settling */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FChaosDDParticleShape::Draw'::__l2::<lambda_1>,void,ChaosDD::Private::IChaosDDRenderer_&>
::Call(void *param_1,IChaosDDRenderer *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FChaosDDShapeData FVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  FImplicitObject *pFVar7;
  longlong lVar8;
  float fVar9;
  bool bVar10;
  char cVar11;
  FColor FVar12;
  undefined4 extraout_var;
  undefined8 *puVar13;
  uint uVar14;
  TRefCountPtr<Chaos::FImplicitObject_const_> TStackX_8;
  FChaosDDParticleData FStackX_10;
  TRefCountPtr<Chaos::FImplicitObject_const_> TStackX_20;
  undefined1 auStack_98 [16];
  void *pvStack_88;
  IChaosDDRenderer *pIStack_80;
  TRefCountPtr<Chaos::FImplicitObject_const_> *pTStack_78;
  undefined1 *puStack_70;
  longlong lStack_68;
  
  FStackX_10._0_8_ = FStackX_10._0_8_ & 0xffffffff00000000;
  bVar10 = (bool)(**(code **)((longlong)*param_2 + 8))(param_2);
  pFVar7 = *(FImplicitObject **)((longlong)param_1 + 0x60);
  FVar4 = *(FChaosDDShapeData *)((longlong)param_1 + 0x74);
  auStack_98._0_8_ = *(undefined8 *)((longlong)param_1 + 0x68);
  auStack_98._8_4_ = *(undefined4 *)((longlong)param_1 + 0x70);
  if (pFVar7 != (FImplicitObject *)0x0) {
    LOCK();
    *(int *)&pFVar7->_padding_ = (int)pFVar7->_padding_ + 1;
    UNLOCK();
  }
  TStackX_8.Reference = pFVar7;
  cVar11 = ::Chaos::FChaosDDParticleShape::ShouldRender
                     (&TStackX_8,(FChaosDDParticleData *)auStack_98,FVar4,bVar10);
  TStackX_8.Reference._0_1_ = cVar11;
  if (pFVar7 != (FImplicitObject *)0x0) {
    LOCK();
    plVar1 = &pFVar7->_padding_;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar8 == 1) && (*(int *)((longlong)&pFVar7->_padding_ + 4) == 0)) {
      (**(code **)pFVar7->_padding_)(pFVar7);
      cVar11 = (char)TStackX_8.Reference;
    }
  }
  fVar9 = ::Chaos::CVars::ChaosSolverDebugDebugDrawSettings.LineThickness;
  if (cVar11 != '\0') {
    if (*(char *)((longlong)param_1 + 0x7c) == '\0') {
      TStackX_8.Reference._0_4_ = *(undefined4 *)((longlong)param_1 + 0x78);
      pTStack_78 = &TStackX_8;
      puVar13 = (undefined8 *)FStackX_10._0_8_;
      uVar14 = FStackX_10.IslandId;
    }
    else {
      (**(code **)((longlong)*param_2 + 8))(param_2);
      puVar13 = *(undefined8 **)((longlong)param_1 + 0x60);
      uVar5 = *(undefined2 *)((longlong)param_1 + 0x74);
      auStack_98._0_8_ = *(undefined8 *)((longlong)param_1 + 0x68);
      uVar6 = *(undefined4 *)((longlong)param_1 + 0x70);
      if (puVar13 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
        UNLOCK();
      }
      auStack_98._8_4_ = uVar6;
      FStackX_10._0_8_ = puVar13;
      FVar12 = ::Chaos::FChaosDDParticleShape::GetRenderColor
                         (&TStackX_20,&FStackX_10,SUB82(auStack_98,0),SUB21(uVar5,0));
      pTStack_78 = (TRefCountPtr<Chaos::FImplicitObject_const_> *)
                   CONCAT44(extraout_var,FVar12.field0_0x0);
      uVar14 = 1;
    }
    pFVar7 = *(FImplicitObject **)((longlong)param_1 + 0x60);
    if (pFVar7 != (FImplicitObject *)0x0) {
      LOCK();
      *(int *)&pFVar7->_padding_ = (int)pFVar7->_padding_ + 1;
      UNLOCK();
    }
    puStack_70 = (undefined1 *)&FStackX_10;
    FStackX_10.IslandId = (int)fVar9;
    lStack_68 = (longlong)&FStackX_10 + 8;
    FStackX_10.ObjectState = Uninitialized;
    FStackX_10._9_3_ = 0;
    auStack_98._8_8_ = &pvStack_88;
    auStack_98._0_8_ =
         TFunctionRefCaller<`Chaos::Private::ChaosDDRenderImplicitObject'::__l2::<lambda_1>,void,Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int>
         ::Call;
    pvStack_88 = param_1;
    pIStack_80 = param_2;
    ::Chaos::FImplicitObject::VisitLeafObjects
              (pFVar7,(TFunctionRef<void___cdecl(Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int)>
                       *)auStack_98);
    if (pFVar7 != (FImplicitObject *)0x0) {
      LOCK();
      plVar1 = &pFVar7->_padding_;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar8 == 1) && (*(int *)((longlong)&pFVar7->_padding_ + 4) == 0)) {
        (**(code **)pFVar7->_padding_)(pFVar7,1);
      }
    }
    if (((uVar14 & 1) != 0) && (puVar13 != (undefined8 *)0x0)) {
      LOCK();
      piVar2 = (int *)(puVar13 + 1);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if ((iVar3 == 1) && (*(int *)((longlong)puVar13 + 0xc) == 0)) {
        (**(code **)*puVar13)(puVar13,1);
      }
    }
  }
  return;
}

// Call @ 143a58970

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FChaosDDParticleShape::Draw'::__l2::<lambda_1>,void,Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int>
::Call(void *param_1,FImplicitObject **param_2,TRigidTransform<double,3> *param_3,int *param_4,
      int *param_5,int *param_6)

{
  ::Chaos::FChaosDDParticleShape::Draw
            (*(TRigidTransform<double,3> **)((longlong)param_1 + 8),
             (FConstGenericParticleHandle *)((longlong)param_1 + 0x10),
             *(FShapeInstance **)((longlong)param_1 + 0x18),*param_2,param_3,
             *(bool *)((longlong)param_1 + 0x20),*(bool *)((longlong)param_1 + 0x21),
             *(bool *)((longlong)param_1 + 0x22),*(FColor **)((longlong)param_1 + 0x28));
  return;
}

// Call @ 143a589c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FChaosDDPrimitives::DrawArrow'::__l2::<lambda_1>,void,ChaosDD::Private::IChaosDDRenderer_&>
::Call(void *param_1,IChaosDDRenderer *param_2)

{
  (**(code **)((longlong)*param_2 + 0x28))
            (param_2,param_1,(longlong)param_1 + 0x18,*(undefined4 *)((longlong)param_1 + 0x30),
             (longlong)param_1 + 0x34,*(undefined4 *)((longlong)param_1 + 0x38),
             *(undefined4 *)((longlong)param_1 + 0x3c));
  return;
}

// Call @ 143a58a10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FChaosDDPrimitives::DrawBox'::__l2::<lambda_1>,void,ChaosDD::Private::IChaosDDRenderer_&>
::Call(void *param_1,IChaosDDRenderer *param_2)

{
  (**(code **)((longlong)*param_2 + 0x48))
            (param_2,param_1,(longlong)param_1 + 0x20,(longlong)param_1 + 0x40,
             (longlong)param_1 + 0x58,*(undefined4 *)((longlong)param_1 + 0x5c),
             *(undefined4 *)((longlong)param_1 + 0x60));
  return;
}

// Call @ 143a58a60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FChaosDDPrimitives::DrawCapsule'::__l2::<lambda_1>,void,ChaosDD::Private::IChaosDDRenderer_&>
::Call(void *param_1,IChaosDDRenderer *param_2)

{
  (**(code **)((longlong)*param_2 + 0x40))
            (param_2,param_1,(longlong)param_1 + 0x20,*(undefined4 *)((longlong)param_1 + 0x40),
             *(undefined4 *)((longlong)param_1 + 0x44),(longlong)param_1 + 0x48,
             *(undefined4 *)((longlong)param_1 + 0x4c),*(undefined4 *)((longlong)param_1 + 0x50));
  return;
}

// Call @ 143a58ac0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FChaosDDPrimitives::DrawCircle'::__l2::<lambda_1>,void,ChaosDD::Private::IChaosDDRenderer_&>
::Call(void *param_1,IChaosDDRenderer *param_2)

{
  (**(code **)((longlong)*param_2 + 0x30))
            (param_2,param_1,(longlong)param_1 + 0x20,*(undefined4 *)((longlong)param_1 + 0xa0),
             (longlong)param_1 + 0xa4,*(undefined4 *)((longlong)param_1 + 0xa8),
             *(undefined4 *)((longlong)param_1 + 0xac));
  return;
}

// Call @ 143a58b20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FChaosDDPrimitives::DrawLine'::__l2::<lambda_1>,void,ChaosDD::Private::IChaosDDRenderer_&>
::Call(void *param_1,IChaosDDRenderer *param_2)

{
  (**(code **)((longlong)*param_2 + 0x20))
            (param_2,param_1,(longlong)param_1 + 0x18,(longlong)param_1 + 0x30,
             *(undefined4 *)((longlong)param_1 + 0x34),*(undefined4 *)((longlong)param_1 + 0x38));
  return;
}

// Call @ 143a58b60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FChaosDDPrimitives::DrawPoint'::__l2::<lambda_1>,void,ChaosDD::Private::IChaosDDRenderer_&>
::Call(void *param_1,IChaosDDRenderer *param_2)

{
  (**(code **)((longlong)*param_2 + 0x18))
            (param_2,param_1,(longlong)param_1 + 0x18,*(undefined4 *)((longlong)param_1 + 0x1c),
             *(undefined4 *)((longlong)param_1 + 0x20));
  return;
}

// Call @ 143a58ba0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FChaosDDPrimitives::DrawSphere'::__l2::<lambda_1>,void,ChaosDD::Private::IChaosDDRenderer_&>
::Call(void *param_1,IChaosDDRenderer *param_2)

{
  (**(code **)((longlong)*param_2 + 0x38))
            (param_2,param_1,*(undefined4 *)((longlong)param_1 + 0x18),(longlong)param_1 + 0x1c,
             *(undefined4 *)((longlong)param_1 + 0x20),*(undefined4 *)((longlong)param_1 + 0x24));
  return;
}

// Call @ 143a58be0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FChaosDDPrimitives::DrawString'::__l2::<lambda_1>,void,ChaosDD::Private::IChaosDDRenderer_&>
::Call(void *param_1,IChaosDDRenderer *param_2)

{
  (**(code **)((longlong)*param_2 + 0x58))
            (param_2,param_1,(longlong)param_1 + 0x18,(longlong)param_1 + 0x28,
             *(undefined4 *)((longlong)param_1 + 0x2c),*(undefined1 *)((longlong)param_1 + 0x30),
             *(undefined4 *)((longlong)param_1 + 0x34));
  return;
}

// Call @ 143a58c30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FChaosDDPrimitives::DrawTriangle'::__l2::<lambda_1>,void,ChaosDD::Private::IChaosDDRenderer_&>
::Call(void *param_1,IChaosDDRenderer *param_2)

{
  (**(code **)((longlong)*param_2 + 0x50))
            (param_2,param_1,(longlong)param_1 + 0x18,(longlong)param_1 + 0x30,
             (longlong)param_1 + 0x48,*(undefined4 *)((longlong)param_1 + 0x4c),
             *(undefined4 *)((longlong)param_1 + 0x50));
  return;
}

// Call @ 143a58c80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::FinalG2P'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::FinalG2P'
  ::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143a58c90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FDeformableSolver::InitializeGridBasedConstraintVariables'::__l2::<lambda_1>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  ::Chaos::Softs::FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::Init
            (*(FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles> **)
              (*(longlong *)param_1 + 0x260),param_2,*param_3);
  return;
}

// Call @ 143a58cb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FDeformableSolver::InitializeKinematicConstraint'::__l2::<lambda_1>,void,Chaos::Softs::FSolverParticles_&,float,float,int>
::Call(void *param_1,FSolverParticles *param_2,float *param_3,float *param_4,int *param_5)

{
  `Chaos::Softs::FDeformableSolver::InitializeKinematicConstraint'::__l2::<lambda_1>::operator()
            (param_1,param_2,*param_3,*param_4,*param_5);
  return;
}

// Call @ 143a58ce0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::InitializeLambdas'::__l2::<lambda_1>,void,Chaos::Softs::FSolverParticles_const_&,int,float,Chaos::TVector<float,3>_&,Chaos::PMatrix<float,3,3>_&>
::Call(void *param_1,FSolverParticles *param_2,int *param_3,float *param_4,TVector<float,3> *param_5
      ,PMatrix<float,3,3> *param_6)

{
  `Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::
  InitializeLambdas'::__l2::<lambda_1>::operator()
            (param_1,param_2,*param_3,*param_4,param_5,param_6);
  return;
}

// Call @ 143a58d00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FDeformableSolver::InitializeMuscleActivationVariables'::__l2::<lambda_1>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  `Chaos::Softs::FDeformableSolver::InitializeMuscleActivationVariables'::__l2::<lambda_1>::
  operator()(param_1,param_2,*param_3);
  return;
}

// Call @ 143a58d10

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FGaussSeidelSphereRepulsionConstraints<float,Chaos::Softs::FSolverParticles>::UpdateSphereRepulsionConstraints'::__l2::<lambda_1>,bool,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  
  bVar1 = `Chaos::Softs::
          FGaussSeidelSphereRepulsionConstraints<float,Chaos::Softs::FSolverParticles>::
          UpdateSphereRepulsionConstraints'::__l2::<lambda_1>::operator()(param_1,*param_2,*param_3)
  ;
  return bVar1;
}

// Call @ 143a58d20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FDeformableSolver::InitializeGaussSeidelConstraintVariables'::__l5::<lambda_1>,void,Chaos::Softs::FSolverParticles_const_&,int,int,float,Chaos::TVector<float,3>_&,Chaos::PMatrix<float,3,3>_&>
::Call(void *param_1,FSolverParticles *param_2,int *param_3,int *param_4,float *param_5,
      TVector<float,3> *param_6,PMatrix<float,3,3> *param_7)

{
  ::Chaos::Softs::
  FGaussSeidelCorotatedCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>::
  AddHyperelasticResidualAndHessian
            (*(FGaussSeidelCorotatedCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>
               **)(*(longlong *)param_1 + 0x210),param_2,*param_3,*param_4,*param_5,param_6,param_7)
  ;
  return;
}

// Call @ 143a58d50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::ApplyInParallel'::__l6::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::
  ApplyInParallel'::__l6::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143a58d60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::Apply'::__l7::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::Apply'::__l7::
  <lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143a58d70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::TPBDActiveView<Chaos::Softs::FSolverParticles>::ParallelFor'::__l9::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  int local_res8 [8];
  
  local_res8[0] = *(int *)((longlong)param_1 + 8) + *param_2;
  (*(code *)**(undefined8 **)((longlong)param_1 + 0x10))
            ((*(undefined8 **)((longlong)param_1 + 0x10))[1],**(undefined8 **)param_1,local_res8);
  return;
}

// Call @ 143a58da0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles>::ApplyInParallel'::__l10::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles>::ApplyInParallel'::__l10
  ::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143a58db0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Private::BuildConvexTriboxes'::__l10::<lambda_1>,void,Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int>
::Call(void *param_1,FImplicitObject **param_2,TRigidTransform<double,3> *param_3,int *param_4,
      int *param_5,int *param_6)

{
  `Chaos::Private::BuildConvexTriboxes'::__l10::<lambda_1>::operator()
            (param_1,*param_2,param_3,*param_4,*param_5,*param_6);
  return;
}

// Call @ 143a58de0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::TMPMTransfer<float>::InitialP2G'::__l17::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `Chaos::TMPMTransfer<float>::InitialP2G'::__l17::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143a58df0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FDeformableSolver::InitializeWeakConstraint'::__l18::<lambda_1>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined1 local_res18 [16];
  
  lVar3 = *(longlong *)param_1;
  puVar4 = *(undefined4 **)(lVar3 + 0x78);
  iVar2 = *(int *)(lVar3 + 0x80);
  puVar1 = puVar4 + iVar2;
  while( true ) {
    if (*(int *)(lVar3 + 0x80) != iVar2) {
      `TCheckedPointerIterator<float,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (puVar4 == puVar1) break;
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  return;
}

// Call @ 143a58e50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FDeformableSolver::InitializeSelfCollisionVariables'::__l87::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FDeformableSolver::InitializeSelfCollisionVariables'::__l87::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143a58e60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::ApplyInParallel'::__l11::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::ApplyInParallel'::
  __l11::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143a58e70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FDeformableSolver::InitializeGaussSeidelConstraintVariables'::__l34::<lambda_20>,void,Chaos::Softs::FSolverParticles_const_&,int,int,float,Chaos::TVector<float,3>_&,Chaos::PMatrix<float,3,3>_&>
::Call(void *param_1,FSolverParticles *param_2,int *param_3,int *param_4,float *param_5,
      TVector<float,3> *param_6,PMatrix<float,3,3> *param_7)

{
  ::Chaos::Softs::FGaussSeidelSphereRepulsionConstraints<float,Chaos::Softs::FSolverParticles>::
  AddSphereRepulsionResidualAndHessian
            (*(FGaussSeidelSphereRepulsionConstraints<float,Chaos::Softs::FSolverParticles> **)
              (*(longlong *)param_1 + 0x230),param_2,*param_3,*param_4,*param_5,param_6,param_7);
  return;
}

// Call @ 143a58ea0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FDeformableSolver::InitializeGaussSeidelConstraintVariables'::__l37::<lambda_21>,void,int,float,Chaos::PMatrix<float,3,3>_&>
::Call(void *param_1,int *param_2,float *param_3,PMatrix<float,3,3> *param_4)

{
  return;
}

// Call @ 143a58eb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FDeformableSolver::InitializeGridBasedConstraintVariables'::__l2::<lambda_2>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  ::Chaos::Softs::FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::
  ApplyInParallel(*(FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles> **)
                   (*(longlong *)param_1 + 0x260),param_2,*param_3);
  return;
}

// Call @ 143a58ed0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::InitializeLambdas'::__l2::<lambda_2>,void,Chaos::Softs::FSolverParticles_&,int>
::Call(void *param_1,FSolverParticles *param_2,int *param_3)

{
  `Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::
  InitializeLambdas'::__l2::<lambda_2>::operator()(param_1,param_2,*param_3);
  return;
}

// Call @ 143a58ee0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FDeformableSolver::InitializeGaussSeidelConstraintVariables'::__l8::<lambda_2>,void,Chaos::Softs::FSolverParticles_const_&,int,int,float,Chaos::TVector<float,3>_&,Chaos::PMatrix<float,3,3>_&>
::Call(void *param_1,FSolverParticles *param_2,int *param_3,int *param_4,float *param_5,
      TVector<float,3> *param_6,PMatrix<float,3,3> *param_7)

{
  ::Chaos::Softs::FGaussSeidelLinearCodimensionalConstraints<float,Chaos::Softs::FSolverParticles>::
  AddHyperelasticResidualAndHessian
            (*(FGaussSeidelLinearCodimensionalConstraints<float,Chaos::Softs::FSolverParticles> **)
              (*(longlong *)param_1 + 0x218),param_2,*param_3,*param_4,*param_5,param_6,param_7);
  return;
}

// Call @ 143a58f10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::Apply'::__l18::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int local_res8 [2];
  
  lVar1 = *(longlong *)param_1;
  uVar2 = *(undefined8 *)((longlong)param_1 + 8);
  local_res8[0] = *param_2;
  CheckCallable(*(void **)(lVar1 + 0x1a0));
  pcVar3 = *(code **)(lVar1 + 0x1a0);
  plVar5 = (longlong *)(lVar1 + 0x1b0);
  if (*(longlong **)(lVar1 + 0x1c8) != (longlong *)0x0) {
    plVar5 = *(longlong **)(lVar1 + 0x1c8);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar3)(uVar4,uVar2,local_res8);
  return;
}

// Call @ 143a58f80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FDeformableSolver::InitializeWeakConstraint'::__l18::<lambda_2>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  ::Chaos::Softs::FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles>::ApplyInParallel
            (*(FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles> **)param_1,param_2,
             *param_3);
  return;
}

// Call @ 143a58fa0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FDeformableSolver::InitializeTetrahedralOrTriangleConstraint'::__l74::<lambda_2>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000143a58fa6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 8))();
  return;
}

// Call @ 143a58fb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles>::ApplyInParallel'::__l14::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDWeakConstraints<float,Chaos::Softs::FSolverParticles>::ApplyInParallel'::__l14
  ::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 143a58fc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FDeformableSolver::InitializeGridBasedConstraintVariables'::__l2::<lambda_3>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  ::Chaos::Softs::FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::
  TimeStepPostprocessing
            (*(FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles> **)
              (*(longlong *)param_1 + 0x260),param_2,*param_3);
  return;
}

// Call @ 143a58fe0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FDeformableSolver::InitializeTetrahedralOrTriangleConstraint'::__l74::<lambda_3>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  ::Chaos::Softs::FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::ApplyInParallel
            (*(FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> **)param_1,param_2,
             *param_3);
  return;
}

// Call @ 143a59000

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FDeformableSolver::InitializeGaussSeidelConstraintVariables'::__l11::<lambda_3>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  ::Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::Init
            (*(FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> **)
              (*(longlong *)param_1 + 0x268),*param_3,param_2);
  return;
}

// Call @ 143a59020

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FDeformableSolver::InitializeTetrahedralOrTriangleConstraint'::__l76::<lambda_4>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000143a59026. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 8))();
  return;
}

// Call @ 143a59030

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FDeformableSolver::InitializeGaussSeidelConstraintVariables'::__l11::<lambda_4>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  ::Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::Apply
            (*(FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> **)
              (*(longlong *)param_1 + 0x268),param_2,*param_3,10,false,
             (TPBDActiveView<Chaos::Softs::FSolverParticles> *)
             (*(longlong *)(*(longlong *)param_1 + 0x1e8) + 0xd8));
  return;
}

// Call @ 143a59070

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FDeformableSolver::InitializeTetrahedralOrTriangleConstraint'::__l76::<lambda_5>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  ::Chaos::Softs::FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::ApplyInParallel
            (*(FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> **)param_1,param_2,
             *param_3);
  return;
}

// Call @ 143a59090

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FDeformableSolver::InitializeGaussSeidelConstraintVariables'::__l11::<lambda_5>,void,Chaos::Softs::FSolverParticles_const_&,int,int,float,Chaos::TVector<float,3>_&,Chaos::PMatrix<float,3,3>_&>
::Call(void *param_1,FSolverParticles *param_2,int *param_3,int *param_4,float *param_5,
      TVector<float,3> *param_6,PMatrix<float,3,3> *param_7)

{
  ::Chaos::Softs::FGaussSeidelCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::
  AddHyperelasticResidualAndHessian
            (*(FGaussSeidelCorotatedConstraints<float,Chaos::Softs::FSolverParticles> **)
              (*(longlong *)param_1 + 0x208),param_2,*param_3,*param_4,*param_5,param_6,param_7);
  return;
}

// Call @ 143a590c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FDeformableSolver::InitializeGaussSeidelConstraintVariables'::__l13::<lambda_6>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  ::Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::Init
            (*(FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> **)
              (*(longlong *)param_1 + 0x268),*param_3,param_2);
  return;
}

// Call @ 143a590e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FDeformableSolver::InitializeGaussSeidelConstraintVariables'::__l13::<lambda_7>,void,Chaos::Softs::FSolverParticles_&,float>
::Call(void *param_1,FSolverParticles *param_2,float *param_3)

{
  ::Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::Apply
            (*(FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles> **)
              (*(longlong *)param_1 + 0x268),param_2,*param_3,10,false,
             (TPBDActiveView<Chaos::Softs::FSolverParticles> *)
             (*(longlong *)(*(longlong *)param_1 + 0x1e8) + 0xd8));
  return;
}

// Call @ 143a59120

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FDeformableSolver::InitializeGaussSeidelConstraintVariables'::__l13::<lambda_8>,void,Chaos::Softs::FSolverParticles_const_&,int,int,float,Chaos::TVector<float,3>_&,Chaos::PMatrix<float,3,3>_&>
::Call(void *param_1,FSolverParticles *param_2,int *param_3,int *param_4,float *param_5,
      TVector<float,3> *param_6,PMatrix<float,3,3> *param_7)

{
  ::Chaos::Softs::FGaussSeidelCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::
  AddHyperelasticResidualAndHessian
            (*(FGaussSeidelCorotatedConstraints<float,Chaos::Softs::FSolverParticles> **)
              (*(longlong *)param_1 + 0x200),param_2,*param_3,*param_4,*param_5,param_6,param_7);
  return;
}

// Call @ 143a59150

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FDeformableSolver::InitializeGaussSeidelConstraintVariables'::__l16::<lambda_9>,void,Chaos::Softs::FSolverParticles_const_&,int,int,float,Chaos::TVector<float,3>_&,Chaos::PMatrix<float,3,3>_&>
::Call(void *param_1,FSolverParticles *param_2,int *param_3,int *param_4,float *param_5,
      TVector<float,3> *param_6,PMatrix<float,3,3> *param_7)

{
  ::Chaos::Softs::FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles>::AddWCResidual
            (*(FGaussSeidelWeakConstraints<float,Chaos::Softs::FSolverParticles> **)
              (*(longlong *)param_1 + 0x220),param_2,*param_3,*param_4,*param_5,param_6,param_7);
  return;
}

// Call @ 143a59180

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,int)>,void,Chaos::Softs::FSolverParticles_&,int>
::Call(void *param_1,FSolverParticles *param_2,int *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int local_res8 [2];
  
  local_res8[0] = *param_3;
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,param_2,local_res8);
  return;
}

// Call @ 143b17b70

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<`Chaos::FPBDMinEvolution::ApplyKinematicTargets'::__l2::<lambda_1>_>'::__l2::<lambda_1>_const_,int,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  return *param_2;
}

// Call @ 143b17b80

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::TParticleView<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>::ParallelFor<`Chaos::FPBDMinEvolution::ApplyKinematicTargets'::__l2::<lambda_2>_>'::__l2::<lambda_1>_const_,int,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  return *param_2;
}

// Call @ 143b17b90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::ComputeExtraNodalColoring<float>'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `Chaos::ComputeExtraNodalColoring<float>'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143b17ba0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::ComputeExtraNodalColoring<float>'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `Chaos::ComputeExtraNodalColoring<float>'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143b17bb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::ComputeExtraNodalColoring<double>'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `Chaos::ComputeExtraNodalColoring<double>'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143b17bc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::ComputeExtraNodalColoring<double>'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `Chaos::ComputeExtraNodalColoring<double>'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143b17bd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::ComputeGridBasedGraphSubColoringPointer<float>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::ComputeGridBasedGraphSubColoringPointer<float>'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143b17be0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::ComputeGridBasedGraphSubColoringPointer<double>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::ComputeGridBasedGraphSubColoringPointer<double>'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143b17bf0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::ApplyCG'::__l4::<lambda_2>::operator()'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  ``Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::ApplyCG'::__l4::
  <lambda_2>::operator()'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143b17c00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::ApplyCG'::__l2::<lambda_1>,void,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_2)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar7 = 0;
  uVar8 = uVar7;
  uVar9 = uVar7;
  if (0 < param_2->ArrayNum) {
    do {
      lVar1 = *(longlong *)param_1;
      uVar6 = (uint)uVar7;
      uVar5 = 0;
      if ((int)uVar6 < *(int *)(lVar1 + 0x98)) {
        uVar5 = ~uVar6 >> 0x1f;
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
      if (*(float *)(*(longlong *)(lVar1 + 0x90) + uVar8) == 0.0) {
        uVar5 = 0;
        if ((int)uVar6 < param_2->ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (param_2->AllocatorInstance).Data;
        *(undefined8 *)(pFVar2 + uVar9) = 0;
        *(undefined4 *)(pFVar2 + uVar9 + 8) = 0;
      }
      uVar7 = (ulonglong)(uVar6 + 1);
      uVar8 = uVar8 + 4;
      uVar9 = uVar9 + 0xc;
    } while ((int)(uVar6 + 1) < param_2->ArrayNum);
  }
  return;
}

// Call @ 143b17c10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FPhysicsSolverBase::EnqueueSimcallbackRewindRegisteration'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  
  plVar1 = *(longlong **)(*(longlong *)param_1 + 0x240);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143b17c63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x40))(plVar1,*(undefined8 *)((longlong)param_1 + 8));
    return;
  }
  bVar3 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4598212920768201077>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Framework\\PhysicsSolverBase.cpp"
                     ,0x175,"MRewindCallback.IsValid()");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// Call @ 143b17c80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::PhysicsParallelFor'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `Chaos::PhysicsParallelFor'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143b17c90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::PhysicsParallelForRange'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `Chaos::PhysicsParallelForRange'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143b17ca0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Chaos::LanczosCG<float,`Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::ApplyCG'::__l4::<lambda_2>,3>'::__l2::<lambda_3>::operator()'::__l5::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  ``Chaos::
  LanczosCG<float,`Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::ApplyCG'::__l4::<lambda_2>,3>'
  ::__l2::<lambda_3>::operator()'::__l5::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143b17cb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Chaos::LanczosCG<float,`Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::ApplyCG'::__l4::<lambda_2>,3>'::__l2::<lambda_4>::operator()'::__l5::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  ``Chaos::
  LanczosCG<float,`Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::ApplyCG'::__l4::<lambda_2>,3>'
  ::__l2::<lambda_4>::operator()'::__l5::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143b17cc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Chaos::LanczosCG<float,`Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::ApplyCG'::__l4::<lambda_2>,3>'::__l2::<lambda_2>::operator()'::__l6::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  ``Chaos::
  LanczosCG<float,`Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::ApplyCG'::__l4::<lambda_2>,3>'
  ::__l2::<lambda_2>::operator()'::__l6::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143b17cd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::ComputeNewtonResiduals'::__l7::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::
  ComputeNewtonResiduals'::__l7::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143b17ce0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::ComputeNodalColoring<float,Chaos::Softs::FSolverParticles>'::__l10::<lambda_1>,void,Chaos::Softs::FSolverParticles_&,int>
::Call(void *param_1,FSolverParticles *param_2,int *param_3)

{
  `Chaos::ComputeNodalColoring<float,Chaos::Softs::FSolverParticles>'::__l10::<lambda_1>::operator()
            (param_1,(TDynamicParticles<float,3> *)param_2,*param_3);
  return;
}

// Call @ 143b17cf0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::ComputeNodalColoring<double,Chaos::TDynamicParticles<double,3>_>'::__l10::<lambda_1>,void,Chaos::TDynamicParticles<double,3>_&,int>
::Call(void *param_1,TDynamicParticles<double,3> *param_2,int *param_3)

{
  `Chaos::ComputeNodalColoring<double,Chaos::TDynamicParticles<double,3>_>'::__l10::<lambda_1>::
  operator()(param_1,param_2,*param_3);
  return;
}

// Call @ 143b17d00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Chaos::LanczosCG<float,`Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::ApplyCG'::__l4::<lambda_2>,3>'::__l2::<lambda_3>::operator()'::__l7::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  ``Chaos::
  LanczosCG<float,`Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::ApplyCG'::__l4::<lambda_2>,3>'
  ::__l2::<lambda_3>::operator()'::__l7::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 143b17d10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Chaos::LanczosCG<float,`Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::ApplyCG'::__l4::<lambda_2>,3>'::__l2::<lambda_4>::operator()'::__l7::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  ``Chaos::
  LanczosCG<float,`Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::ApplyCG'::__l4::<lambda_2>,3>'
  ::__l2::<lambda_4>::operator()'::__l7::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 143b17d20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Chaos::LanczosCG<float,`Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::ApplyCG'::__l4::<lambda_2>,3>'::__l2::<lambda_2>::operator()'::__l8::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  ``Chaos::
  LanczosCG<float,`Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::ApplyCG'::__l4::<lambda_2>,3>'
  ::__l2::<lambda_2>::operator()'::__l8::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 143b17d30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::ParticleViewParallelForImp<Chaos::TParticleView<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>,`Chaos::TParticleView<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>::ParallelFor<`Chaos::FPBDMinEvolution::ApplyKinematicTargets'::__l2::<lambda_2>_>'::__l2::<lambda_1>,`Chaos::TParticleView<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>::ParallelFor<`Chaos::FPBDMinEvolution::ApplyKinematicTargets'::__l2::<lambda_2>_>'::__l2::<lambda_2>_>'::__l10::<lambda_2>,void,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  `Chaos::
  ParticleViewParallelForImp<Chaos::TParticleView<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>,`Chaos::TParticleView<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>::ParallelFor<`Chaos::FPBDMinEvolution::ApplyKinematicTargets'::__l2::<lambda_2>_>'::__l2::<lambda_1>,`Chaos::TParticleView<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>::ParallelFor<`Chaos::FPBDMinEvolution::ApplyKinematicTargets'::__l2::<lambda_2>_>'::__l2::<lambda_2>_>'
  ::__l10::<lambda_2>::operator()(param_1,*param_2,*param_3);
  return;
}

// Call @ 143b17d40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::ParticleViewParallelForImp<Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>,`Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<`Chaos::FPBDMinEvolution::ApplyKinematicTargets'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<`Chaos::FPBDMinEvolution::ApplyKinematicTargets'::__l2::<lambda_1>_>'::__l2::<lambda_2>_>'::__l10::<lambda_2>,void,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  `Chaos::
  ParticleViewParallelForImp<Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>,`Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<`Chaos::FPBDMinEvolution::ApplyKinematicTargets'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<`Chaos::FPBDMinEvolution::ApplyKinematicTargets'::__l2::<lambda_1>_>'::__l2::<lambda_2>_>'
  ::__l10::<lambda_2>::operator()(param_1,*param_2,*param_3);
  return;
}

// Call @ 143b17d50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::ApplyCG'::__l4::<lambda_3>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FGaussSeidelMainConstraint<float,Chaos::Softs::FSolverParticles>::ApplyCG'::__l4::
  <lambda_3>::operator()(param_1,*param_2);
  return;
}

// Call @ 143b17d60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::ParticleViewParallelForImp<Chaos::TParticleView<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>,`Chaos::TParticleView<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>::ParallelFor<`Chaos::FPBDMinEvolution::ApplyKinematicTargets'::__l2::<lambda_2>_>'::__l2::<lambda_1>,`Chaos::TParticleView<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>::ParallelFor<`Chaos::FPBDMinEvolution::ApplyKinematicTargets'::__l2::<lambda_2>_>'::__l2::<lambda_2>_>'::__l12::<lambda_3>,void,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  `Chaos::
  ParticleViewParallelForImp<Chaos::TParticleView<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>,`Chaos::TParticleView<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>::ParallelFor<`Chaos::FPBDMinEvolution::ApplyKinematicTargets'::__l2::<lambda_2>_>'::__l2::<lambda_1>,`Chaos::TParticleView<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>::ParallelFor<`Chaos::FPBDMinEvolution::ApplyKinematicTargets'::__l2::<lambda_2>_>'::__l2::<lambda_2>_>'
  ::__l12::<lambda_3>::operator()(param_1,*param_2,*param_3);
  return;
}

// Call @ 143b17d70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::ParticleViewParallelForImp<Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>,`Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<`Chaos::FPBDMinEvolution::ApplyKinematicTargets'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<`Chaos::FPBDMinEvolution::ApplyKinematicTargets'::__l2::<lambda_1>_>'::__l2::<lambda_2>_>'::__l12::<lambda_3>,void,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  `Chaos::
  ParticleViewParallelForImp<Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>,`Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<`Chaos::FPBDMinEvolution::ApplyKinematicTargets'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<`Chaos::FPBDMinEvolution::ApplyKinematicTargets'::__l2::<lambda_1>_>'::__l2::<lambda_2>_>'
  ::__l12::<lambda_3>::operator()(param_1,*param_2,*param_3);
  return;
}

// Call @ 143b5fc90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Private::FPBDIslandGroupManager::SolveParallelFor'::__l3::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Private::FPBDIslandGroupManager::SolveParallelFor'::__l3::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143b5fca0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Private::FImplicitBVH::CollectLeafObjects'::__l4::<lambda_1>,void,Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int>
::Call(void *param_1,FImplicitObject **param_2,TRigidTransform<double,3> *param_3,int *param_4,
      int *param_5,int *param_6)

{
  `Chaos::Private::FImplicitBVH::CollectLeafObjects'::__l4::<lambda_1>::operator()
            (param_1,*param_2,param_3,*param_4,*param_5,*param_6);
  return;
}

// Call @ 143b5fcd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::__l4::<lambda_1>,void,enum_ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&>
::Call(void *param_1,Type *param_2,TRefCountPtr<FBaseGraphTask> *param_3)

{
  `Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::__l4::<lambda_1>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 143b5fce0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::__l4::<lambda_1>::operator()'::__l6::<lambda_1>,void>
::Call(void *param_1)

{
  uint uVar1;
  
  if (!__CsvProfilerStat445) {
    FCsvProfilerTrace::OutputInlineStat("StepSolver_Gather",_GCsvCategory_PhysicsVerbose.Index);
    __CsvProfilerStat445 = true;
  }
  uVar1 = _GCsvCategory_PhysicsVerbose.Index;
  FCsvProfiler::BeginStat
            ("StepSolver_Gather",_GCsvCategory_PhysicsVerbose.Index,"CSV_StepSolver_Gather");
  ::Chaos::Private::FPBDConstraintGroupSolver::GatherBodies
            (*(FPBDConstraintGroupSolver **)param_1,*(double *)((longlong)param_1 + 0x10),
             *(int *)((longlong)param_1 + 8),*(int *)((longlong)param_1 + 0xc));
  FCsvProfiler::EndStat("StepSolver_Gather",uVar1);
  return;
}

// Call @ 143b5fcf0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Private::FImplicitBVH::CountLeafObjects'::__l15::<lambda_1>,void,Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int>
::Call(void *param_1,FImplicitObject **param_2,TRigidTransform<double,3> *param_3,int *param_4,
      int *param_5,int *param_6)

{
  **(int **)param_1 = **(int **)param_1 + 1;
  return;
}

// Call @ 143b5fd00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Private::FPBDIslandGroupManager::SolveParallelFor'::__l3::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Private::FPBDIslandGroupManager::SolveParallelFor'::__l3::<lambda_2>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143b5fd10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::__l4::<lambda_1>::operator()'::__l9::<lambda_2>,void>
::Call(void *param_1)

{
  uint uVar1;
  
  if (!__CsvProfilerStat467) {
    FCsvProfilerTrace::OutputInlineStat("StepSolver_Gather",_GCsvCategory_PhysicsVerbose.Index);
    __CsvProfilerStat467 = true;
  }
  uVar1 = _GCsvCategory_PhysicsVerbose.Index;
  FCsvProfiler::BeginStat
            ("StepSolver_Gather",_GCsvCategory_PhysicsVerbose.Index,"CSV_StepSolver_Gather");
  ::Chaos::Private::FPBDConstraintGroupSolver::GatherConstraints
            (*(FPBDConstraintGroupSolver **)((longlong)param_1 + 8),
             *(double *)((longlong)param_1 + 0x18),*(int *)((longlong)param_1 + 0x10),
             *(int *)((longlong)param_1 + 0x14));
  FCsvProfiler::EndStat("StepSolver_Gather",uVar1);
  return;
}

// Call @ 143b5fd20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::__l4::<lambda_1>::operator()'::__l2::<lambda_3>,void>
::Call(void *param_1)

{
  ::Chaos::Private::FPBDIslandGroupManager::SolveGroupConstraints
            (*(FPBDIslandGroupManager **)param_1,*(int *)((longlong)param_1 + 8),
             *(double *)((longlong)param_1 + 0x10));
  return;
}

// Call @ 143b5fd40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Private::FPBDIslandGroupManager::SolveParallelFor'::__l3::<lambda_3>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Private::FPBDIslandGroupManager::SolveParallelFor'::__l3::<lambda_3>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143b5fd50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Private::FPBDIslandGroupManager::SolveParallelFor'::__l2::<lambda_4>,void,int>
::Call(void *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  ::Chaos::Private::FPBDIslandGroupManager::GetGroup(*(FPBDIslandGroupManager **)param_1,iVar1);
  ::Chaos::Private::FPBDIslandGroupManager::SolveGroupConstraints
            (*(FPBDIslandGroupManager **)param_1,iVar1,*(double *)((longlong)param_1 + 8));
  return;
}

// Call @ 143b5fd90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::__l4::<lambda_1>::operator()'::__l12::<lambda_4>,void>
::Call(void *param_1)

{
  uint uVar1;
  
  if (!__CsvProfilerStat503) {
    FCsvProfilerTrace::OutputInlineStat("StepSolver_Scatter",_GCsvCategory_PhysicsVerbose.Index);
    __CsvProfilerStat503 = true;
  }
  uVar1 = _GCsvCategory_PhysicsVerbose.Index;
  FCsvProfiler::BeginStat
            ("StepSolver_Scatter",_GCsvCategory_PhysicsVerbose.Index,"CSV_StepSolver_Scatter");
  ::Chaos::Private::FPBDConstraintGroupSolver::ScatterConstraints
            (*(FPBDConstraintGroupSolver **)((longlong)param_1 + 8),
             *(double *)((longlong)param_1 + 0x18),*(int *)((longlong)param_1 + 0x10),
             *(int *)((longlong)param_1 + 0x14));
  FCsvProfiler::EndStat("StepSolver_Scatter",uVar1);
  return;
}

// Call @ 143b5fda0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Private::FPBDIslandGroupManager::SolveParallelFor'::__l7::<lambda_5>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Private::FPBDIslandGroupManager::SolveParallelFor'::__l7::<lambda_5>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143b5fdb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Chaos::Private::FPBDIslandGroupManager::SolveParallelTasks'::__l4::<lambda_1>::operator()'::__l15::<lambda_5>,void>
::Call(void *param_1)

{
  uint uVar1;
  
  if (!__CsvProfilerStat521) {
    FCsvProfilerTrace::OutputInlineStat("StepSolver_Scatter",_GCsvCategory_PhysicsVerbose.Index);
    __CsvProfilerStat521 = true;
  }
  uVar1 = _GCsvCategory_PhysicsVerbose.Index;
  FCsvProfiler::BeginStat
            ("StepSolver_Scatter",_GCsvCategory_PhysicsVerbose.Index,"CSV_StepSolver_Scatter");
  ::Chaos::Private::FPBDConstraintGroupSolver::ScatterBodies
            (*(FPBDConstraintGroupSolver **)((longlong)param_1 + 8),
             *(double *)((longlong)param_1 + 0x18),*(int *)((longlong)param_1 + 0x10),
             *(int *)((longlong)param_1 + 0x14));
  FCsvProfiler::EndStat("StepSolver_Scatter",uVar1);
  return;
}

// Call @ 143b5fdc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Private::FPBDIslandGroupManager::SolveParallelFor'::__l7::<lambda_6>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Private::FPBDIslandGroupManager::SolveParallelFor'::__l7::<lambda_6>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143bf3a40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FMidPhaseModifier::DisableConvexOptimization'::__l2::<lambda_1>_const_,void,Chaos::FPBDCollisionConstraint_*>
::Call(void *param_1,FPBDCollisionConstraint **param_2)

{
  FPBDCollisionConstraint *pFVar1;
  
  if (((*(longlong **)(*(longlong *)param_1 + 8) != (longlong *)0x0) &&
      (pFVar1 = *param_2, pFVar1 != (FPBDCollisionConstraint *)0x0)) &&
     ((FPBDIslandConstraint *)pFVar1->_padding_ != (FPBDIslandConstraint *)0x0)) {
    ::Chaos::Private::FPBDIslandManager::RemoveConstraint
              ((FPBDIslandManager *)(**(longlong **)(*(longlong *)param_1 + 8) + 0x100),
               (FConstraintHandle *)pFVar1);
    return;
  }
  return;
}

// Call @ 143bf3a80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FNewtonEvolution::DoNewtonStep<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(float,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(float,float,TArray<float,TSizedDefaultAllocator<32>_>_const_&,bool,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(bool)>_>'::__l15::<lambda_10>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FNewtonEvolution::
  DoNewtonStep<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(float,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(float,float,TArray<float,TSizedDefaultAllocator<32>_>_const_&,bool,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(bool)>_>'
  ::__l15::<lambda_10>::operator()(param_1,*param_2);
  return;
}

// Call @ 143bf3a90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FNewtonEvolution::DoNewtonStep<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(float,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(float,float,TArray<float,TSizedDefaultAllocator<32>_>_const_&,bool,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(bool)>_>'::__l17::<lambda_11>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FNewtonEvolution::
  DoNewtonStep<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(float,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(float,float,TArray<float,TSizedDefaultAllocator<32>_>_const_&,bool,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(bool)>_>'
  ::__l17::<lambda_11>::operator()(param_1,*param_2);
  return;
}

// Call @ 143bf3aa0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FNewtonEvolution::FNewtonEvolution'::__l2::<lambda_1>,void,bool>::
Call(void *param_1,bool *param_2)

{
  longlong local_res10 [3];
  code *local_18;
  longlong *local_10;
  
  local_res10[0] = *(longlong *)param_1;
  local_10 = local_res10;
  local_18 = TFunctionRefCaller<``Chaos::Softs::FNewtonEvolution::FNewtonEvolution'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,int>
             ::Call;
  ::Chaos::PhysicsParallelFor
            (*(int *)(local_res10[0] + 0x4f0),(TFunctionRef<void___cdecl(int)> *)&local_18,false);
  return;
}

// Call @ 143bf3af0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Chaos::Softs::FNewtonEvolution::FNewtonEvolution'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  ``Chaos::Softs::FNewtonEvolution::FNewtonEvolution'::__l2::<lambda_1>::operator()'::__l2::
  <lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143bf3b00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FLevelSet::ComputeLevelSetError'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `Chaos::FLevelSet::ComputeLevelSetError'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143bf3b10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::TPBDActiveView<Chaos::Softs::FSolverParticles>::RangeFor'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::TPBDActiveView<Chaos::Softs::FSolverParticles>::RangeFor'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143bf3b20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Chaos::Softs::FNewtonEvolution::DoNewtonStep<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(float,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(float,float,TArray<float,TSizedDefaultAllocator<32>_>_const_&,bool,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(bool)>_>'::__l4::<lambda_1>::operator()'::__l5::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  ``Chaos::Softs::FNewtonEvolution::
  DoNewtonStep<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(float,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(float,float,TArray<float,TSizedDefaultAllocator<32>_>_const_&,bool,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(bool)>_>'
  ::__l4::<lambda_1>::operator()'::__l5::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143bf3b30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Chaos::LanczosCG<float,`Chaos::Softs::FNewtonEvolution::DoNewtonStep<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(float,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(float,float,TArray<float,TSizedDefaultAllocator<32>_>_const_&,bool,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(bool)>_>'::__l4::<lambda_1>,3>'::__l2::<lambda_3>::operator()'::__l5::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  ``Chaos::
  LanczosCG<float,`Chaos::Softs::FNewtonEvolution::DoNewtonStep<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(float,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(float,float,TArray<float,TSizedDefaultAllocator<32>_>_const_&,bool,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(bool)>_>'::__l4::<lambda_1>,3>'
  ::__l2::<lambda_3>::operator()'::__l5::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143bf3b40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Chaos::LanczosCG<float,`Chaos::Softs::FNewtonEvolution::DoNewtonStep<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(float,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(float,float,TArray<float,TSizedDefaultAllocator<32>_>_const_&,bool,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(bool)>_>'::__l4::<lambda_1>,3>'::__l2::<lambda_4>::operator()'::__l5::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  ``Chaos::
  LanczosCG<float,`Chaos::Softs::FNewtonEvolution::DoNewtonStep<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(float,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(float,float,TArray<float,TSizedDefaultAllocator<32>_>_const_&,bool,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(bool)>_>'::__l4::<lambda_1>,3>'
  ::__l2::<lambda_4>::operator()'::__l5::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143bf3b50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Chaos::LanczosCG<float,`Chaos::Softs::FNewtonEvolution::DoNewtonStep<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(float,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(float,float,TArray<float,TSizedDefaultAllocator<32>_>_const_&,bool,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(bool)>_>'::__l4::<lambda_1>,3>'::__l2::<lambda_2>::operator()'::__l6::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  ``Chaos::
  LanczosCG<float,`Chaos::Softs::FNewtonEvolution::DoNewtonStep<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(float,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(float,float,TArray<float,TSizedDefaultAllocator<32>_>_const_&,bool,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(bool)>_>'::__l4::<lambda_1>,3>'
  ::__l2::<lambda_2>::operator()'::__l6::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143bf3b60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FNewtonEvolution::AdvanceOneTimeStep'::__l8::<lambda_1>,void,Chaos::Softs::FSolverParticles_&,int,int>
::Call(void *param_1,FSolverParticles *param_2,int *param_3,int *param_4)

{
  `Chaos::Softs::FNewtonEvolution::AdvanceOneTimeStep'::__l8::<lambda_1>::operator()
            (param_1,param_2,*param_3,*param_4);
  return;
}

// Call @ 143bf3b80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FNewtonEvolution::PreIterationUpdate<1,1,1>'::__l9::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FNewtonEvolution::PreIterationUpdate<1,1,1>'::__l9::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143bf3b90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FNewtonEvolution::PreIterationUpdate<1,1,0>'::__l9::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FNewtonEvolution::PreIterationUpdate<1,1,0>'::__l9::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143bf3ba0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FNewtonEvolution::PreIterationUpdate<1,0,1>'::__l9::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FNewtonEvolution::PreIterationUpdate<1,0,1>'::__l9::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143bf3bb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FNewtonEvolution::PreIterationUpdate<1,0,0>'::__l9::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FNewtonEvolution::PreIterationUpdate<1,0,0>'::__l9::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143bf3bc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FNewtonEvolution::PreIterationUpdate<0,1,1>'::__l9::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FNewtonEvolution::PreIterationUpdate<0,1,1>'::__l9::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143bf3bd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FNewtonEvolution::PreIterationUpdate<0,1,0>'::__l9::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FNewtonEvolution::PreIterationUpdate<0,1,0>'::__l9::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143bf3be0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FNewtonEvolution::PreIterationUpdate<0,0,1>'::__l9::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FNewtonEvolution::PreIterationUpdate<0,0,1>'::__l9::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143bf3bf0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FNewtonEvolution::PreIterationUpdate<0,0,0>'::__l9::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FNewtonEvolution::PreIterationUpdate<0,0,0>'::__l9::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143bf3c00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::ElasticFEM<float,Chaos::Softs::FSolverParticles>::AddNegativeInternalElasticForceDifferential<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>_>'::__l17::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::ElasticFEM<float,Chaos::Softs::FSolverParticles>::
  AddNegativeInternalElasticForceDifferential<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>_>'
  ::__l17::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143bf3c10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FNewtonEvolution::FNewtonEvolution'::__l2::<lambda_2>,void,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int>
::Call(void *param_1,PMatrix<float,3,3> *param_2,PMatrix<float,3,3> *param_3,int *param_4)

{
  `Chaos::Softs::FNewtonEvolution::FNewtonEvolution'::__l2::<lambda_2>::operator()
            (param_1,param_2,param_3,*param_4);
  return;
}

// Call @ 143bf3c20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Chaos::Softs::FNewtonEvolution::DoNewtonStep<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(float,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(float,float,TArray<float,TSizedDefaultAllocator<32>_>_const_&,bool,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(bool)>_>'::__l4::<lambda_1>::operator()'::__l7::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  ``Chaos::Softs::FNewtonEvolution::
  DoNewtonStep<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(float,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(float,float,TArray<float,TSizedDefaultAllocator<32>_>_const_&,bool,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(bool)>_>'
  ::__l4::<lambda_1>::operator()'::__l7::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 143bf3c30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Chaos::LanczosCG<float,`Chaos::Softs::FNewtonEvolution::DoNewtonStep<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(float,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(float,float,TArray<float,TSizedDefaultAllocator<32>_>_const_&,bool,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(bool)>_>'::__l4::<lambda_1>,3>'::__l2::<lambda_3>::operator()'::__l7::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  ``Chaos::
  LanczosCG<float,`Chaos::Softs::FNewtonEvolution::DoNewtonStep<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(float,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(float,float,TArray<float,TSizedDefaultAllocator<32>_>_const_&,bool,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(bool)>_>'::__l4::<lambda_1>,3>'
  ::__l2::<lambda_3>::operator()'::__l7::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 143bf3c40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Chaos::LanczosCG<float,`Chaos::Softs::FNewtonEvolution::DoNewtonStep<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(float,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(float,float,TArray<float,TSizedDefaultAllocator<32>_>_const_&,bool,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(bool)>_>'::__l4::<lambda_1>,3>'::__l2::<lambda_4>::operator()'::__l7::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  ``Chaos::
  LanczosCG<float,`Chaos::Softs::FNewtonEvolution::DoNewtonStep<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(float,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(float,float,TArray<float,TSizedDefaultAllocator<32>_>_const_&,bool,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(bool)>_>'::__l4::<lambda_1>,3>'
  ::__l2::<lambda_4>::operator()'::__l7::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 143bf3c50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Chaos::LanczosCG<float,`Chaos::Softs::FNewtonEvolution::DoNewtonStep<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(float,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(float,float,TArray<float,TSizedDefaultAllocator<32>_>_const_&,bool,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(bool)>_>'::__l4::<lambda_1>,3>'::__l2::<lambda_2>::operator()'::__l8::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  ``Chaos::
  LanczosCG<float,`Chaos::Softs::FNewtonEvolution::DoNewtonStep<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(float,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(float,float,TArray<float,TSizedDefaultAllocator<32>_>_const_&,bool,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(bool)>_>'::__l4::<lambda_1>,3>'
  ::__l2::<lambda_2>::operator()'::__l8::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 143bf3c60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::ElasticFEM<float,Chaos::Softs::FSolverParticles>::AddInternalElasticForce<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>_>'::__l23::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::ElasticFEM<float,Chaos::Softs::FSolverParticles>::
  AddInternalElasticForce<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>_>'
  ::__l23::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 143bf3c70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FNewtonEvolution::AdvanceOneTimeStep'::__l12::<lambda_2>,void,Chaos::Softs::FSolverCollisionParticles_&,int>
::Call(void *param_1,FSolverCollisionParticles *param_2,int *param_3)

{
  `Chaos::Softs::FNewtonEvolution::AdvanceOneTimeStep'::__l12::<lambda_2>::operator()
            (param_1,param_2,*param_3);
  return;
}

// Call @ 143bf3c80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FNewtonEvolution::FNewtonEvolution'::__l2::<lambda_3>,void,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int>
::Call(void *param_1,PMatrix<float,3,3> *param_2,PMatrix<float,3,3> *param_3,
      PMatrix<float,3,3> *param_4,int *param_5)

{
  `Chaos::Softs::FNewtonEvolution::FNewtonEvolution'::__l2::<lambda_3>::operator()
            (param_1,param_2,param_3,param_4,*param_5);
  return;
}

// Call @ 143bf3ca0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::ElasticFEM<float,Chaos::Softs::FSolverParticles>::AddInternalElasticForce<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>_>'::__l26::<lambda_3>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::ElasticFEM<float,Chaos::Softs::FSolverParticles>::
  AddInternalElasticForce<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>_>'
  ::__l26::<lambda_3>::operator()(param_1,*param_2);
  return;
}

// Call @ 143bf3cb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FNewtonEvolution::AdvanceOneTimeStep'::__l14::<lambda_3>,void,TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_&,int>
::Call(void *param_1,
      TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>
      *param_2,int *param_3)

{
  `Chaos::Softs::FNewtonEvolution::AdvanceOneTimeStep'::__l14::<lambda_3>::operator()
            (param_1,param_2,*param_3);
  return;
}

// Call @ 143bf3cc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FNewtonEvolution::FNewtonEvolution'::__l2::<lambda_4>,void,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  lVar9 = *(longlong *)param_1;
  uVar7 = 0;
  uVar8 = uVar7;
  if (0 < *(int *)(lVar9 + 0x598)) {
    do {
      uVar6 = (uint)uVar7;
      uVar4 = 0;
      if ((int)uVar6 < *(int *)(lVar9 + 0x598)) {
        uVar4 = ~uVar6 >> 0x1f;
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
      uVar4 = *(uint *)(uVar8 + *(longlong *)(lVar9 + 0x590));
      uVar5 = 0;
      if ((int)uVar4 < param_2->ArrayNum) {
        uVar5 = ~uVar4 >> 0x1f;
      }
      if ((uVar5 == 0) &&
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
      uVar7 = (ulonglong)(uVar6 + 1);
      *(undefined8 *)(pFVar1 + (longlong)(int)uVar4 * 0xc) = 0;
      *(undefined4 *)(pFVar1 + (longlong)(int)uVar4 * 0xc + 8) = 0;
      lVar9 = *(longlong *)param_1;
      uVar8 = uVar8 + 4;
    } while ((int)(uVar6 + 1) < *(int *)(lVar9 + 0x598));
  }
  return;
}

// Call @ 143bf3cd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FNewtonEvolution::AdvanceOneTimeStep'::__l17::<lambda_4>,void,Chaos::Softs::FSolverParticles_&,int>
::Call(void *param_1,FSolverParticles *param_2,int *param_3)

{
  `Chaos::Softs::FNewtonEvolution::AdvanceOneTimeStep'::__l17::<lambda_4>::operator()
            (param_1,param_2,*param_3);
  return;
}

// Call @ 143bf3ce0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::ElasticFEM<float,Chaos::Softs::FSolverParticles>::AddInternalElasticForce<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>_>'::__l28::<lambda_4>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::ElasticFEM<float,Chaos::Softs::FSolverParticles>::
  AddInternalElasticForce<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>_>'
  ::__l28::<lambda_4>::operator()(param_1,*param_2);
  return;
}

// Call @ 143bf3cf0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FNewtonEvolution::FNewtonEvolution'::__l2::<lambda_5>,void,float,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,float *param_2,
      TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_3)

{
  `Chaos::Softs::FNewtonEvolution::FNewtonEvolution'::__l2::<lambda_5>::operator()
            (param_1,*param_2,param_3);
  return;
}

// Call @ 143bf3d00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FNewtonEvolution::FNewtonEvolution'::__l2::<lambda_6>,void,float,float,TArray<float,TSizedDefaultAllocator<32>_>_const_&,bool,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1,float *param_2,float *param_3,
      TArray<float,TSizedDefaultAllocator<32>_> *param_4,bool *param_5,
      TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_6)

{
  `Chaos::Softs::FNewtonEvolution::FNewtonEvolution'::__l2::<lambda_6>::operator()
            (param_1,*param_2,*param_3,param_4,*param_5,param_6);
  return;
}

// Call @ 143bf3d30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FNewtonEvolution::DoNewtonStep<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(float,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(float,float,TArray<float,TSizedDefaultAllocator<32>_>_const_&,bool,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(bool)>_>'::__l10::<lambda_8>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FNewtonEvolution::
  DoNewtonStep<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(float,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(float,float,TArray<float,TSizedDefaultAllocator<32>_>_const_&,bool,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(bool)>_>'
  ::__l10::<lambda_8>::operator()(param_1,*param_2);
  return;
}

// Call @ 143bf3d40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FNewtonEvolution::DoNewtonStep<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(float,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(float,float,TArray<float,TSizedDefaultAllocator<32>_>_const_&,bool,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(bool)>_>'::__l12::<lambda_9>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FNewtonEvolution::
  DoNewtonStep<TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_const_&,Chaos::PMatrix<float,3,3>_&,int)>,TFunction<void___cdecl(float,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(float,float,TArray<float,TSizedDefaultAllocator<32>_>_const_&,bool,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_&)>,TFunction<void___cdecl(bool)>_>'
  ::__l12::<lambda_9>::operator()(param_1,*param_2);
  return;
}

// Call @ 143c5e2f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::AdvanceOneTimeStep'::__l23::<lambda_10>,void,Chaos::Softs::FSolverParticles_&,int>
::Call(void *param_1,FSolverParticles *param_2,int *param_3)

{
  `Chaos::Softs::FPBDEvolution::AdvanceOneTimeStep'::__l23::<lambda_10>::operator()
            (param_1,param_2,*param_3);
  return;
}

// Call @ 143c5e300

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPerParticlePBDCCDCollisionConstraint::ApplyRangeHelper<1>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPerParticlePBDCCDCollisionConstraint::ApplyRangeHelper<1>'::__l2::<lambda_1>::
  operator()(param_1,*param_2);
  return;
}

// Call @ 143c5e310

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPerParticlePBDCCDCollisionConstraint::ApplyRangeHelper<0>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPerParticlePBDCCDCollisionConstraint::ApplyRangeHelper<0>'::__l2::<lambda_1>::
  operator()(param_1,*param_2);
  return;
}

// Call @ 143c5e320

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Chaos::Softs::FPerParticlePBDCCDCollisionConstraint::ApplyRangeHelper<1>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,Chaos::Softs::FSolverCollisionParticles_&,int>
::Call(void *param_1,FSolverCollisionParticles *param_2,int *param_3)

{
  ``Chaos::Softs::FPerParticlePBDCCDCollisionConstraint::ApplyRangeHelper<1>'::__l2::<lambda_1>::
  operator()'::__l2::<lambda_1>::operator()(param_1,param_2,*param_3);
  return;
}

// Call @ 143c5e330

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Chaos::Softs::FPerParticlePBDCCDCollisionConstraint::ApplyRangeHelper<0>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,Chaos::Softs::FSolverCollisionParticles_&,int>
::Call(void *param_1,FSolverCollisionParticles *param_2,int *param_3)

{
  ``Chaos::Softs::FPerParticlePBDCCDCollisionConstraint::ApplyRangeHelper<0>'::__l2::<lambda_1>::
  operator()'::__l2::<lambda_1>::operator()(param_1,param_2,*param_3);
  return;
}

// Call @ 143c5e340

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Chaos::TPBDActiveView<Chaos::Softs::FSolverParticles>::ParallelFor'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  int local_res8 [8];
  
  local_res8[0] = *(int *)((longlong)param_1 + 8) + *param_2;
  (*(code *)**(undefined8 **)((longlong)param_1 + 0x10))
            ((*(undefined8 **)((longlong)param_1 + 0x10))[1],**(undefined8 **)param_1,local_res8);
  return;
}

// Call @ 143c5e370

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Chaos::Softs::FPBDCollisionSpringConstraintsBase::Init<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>,Chaos::Softs::FSolverParticles>'::__l7::<lambda_1>::operator()'::__l2::<lambda_1>,bool,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  
  bVar1 = ``Chaos::Softs::FPBDCollisionSpringConstraintsBase::
          Init<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>,Chaos::Softs::FSolverParticles>'
          ::__l7::<lambda_1>::operator()'::__l2::<lambda_1>::operator()(param_1,*param_2,*param_3);
  return bVar1;
}

// Call @ 143c5e380

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Chaos::Softs::FPBDCollisionSpringConstraintsBase::Init<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>,Chaos::Softs::FSolverParticlesRange>'::__l7::<lambda_1>::operator()'::__l2::<lambda_1>,bool,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  
  bVar1 = ``Chaos::Softs::FPBDCollisionSpringConstraintsBase::
          Init<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>,Chaos::Softs::FSolverParticlesRange>'
          ::__l7::<lambda_1>::operator()'::__l2::<lambda_1>::operator()(param_1,*param_2,*param_3);
  return bVar1;
}

// Call @ 143c5e390

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Chaos::Softs::FPBDCollisionSpringConstraintsBase::Init<Chaos::THierarchicalSpatialHash<int,float>,Chaos::Softs::FSolverParticles>'::__l7::<lambda_1>::operator()'::__l2::<lambda_1>,bool,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  
  bVar1 = ``Chaos::Softs::FPBDCollisionSpringConstraintsBase::
          Init<Chaos::THierarchicalSpatialHash<int,float>,Chaos::Softs::FSolverParticles>'::__l7::
          <lambda_1>::operator()'::__l2::<lambda_1>::operator()(param_1,*param_2,*param_3);
  return bVar1;
}

// Call @ 143c5e3a0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Chaos::Softs::FPBDCollisionSpringConstraintsBase::Init<Chaos::THierarchicalSpatialHash<int,float>,Chaos::Softs::FSolverParticlesRange>'::__l7::<lambda_1>::operator()'::__l2::<lambda_1>,bool,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  
  bVar1 = ``Chaos::Softs::FPBDCollisionSpringConstraintsBase::
          Init<Chaos::THierarchicalSpatialHash<int,float>,Chaos::Softs::FSolverParticlesRange>'::
          __l7::<lambda_1>::operator()'::__l2::<lambda_1>::operator()(param_1,*param_2,*param_3);
  return bVar1;
}

// Call @ 143c5e3b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::TPBDActiveView<Chaos::Softs::FSolverParticles>::ParallelFor'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::TPBDActiveView<Chaos::Softs::FSolverParticles>::ParallelFor'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143c5e3c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::TPBDActiveView<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_>::RangeFor'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::
  TPBDActiveView<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_>
  ::RangeFor'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143c5e3d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::AdvanceOneTimeStep'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticles_&,int,int>
::Call(void *param_1,FSolverParticles *param_2,int *param_3,int *param_4)

{
  `Chaos::Softs::FPBDEvolution::AdvanceOneTimeStep'::__l3::<lambda_1>::operator()
            (param_1,param_2,*param_3,*param_4);
  return;
}

// Call @ 143c5e3f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDCollisionSpringConstraintsBase::Init<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>,Chaos::Softs::FSolverParticles>'::__l7::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDCollisionSpringConstraintsBase::
  Init<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>,Chaos::Softs::FSolverParticles>'
  ::__l7::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143c5e400

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDCollisionSpringConstraintsBase::Init<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>,Chaos::Softs::FSolverParticlesRange>'::__l7::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDCollisionSpringConstraintsBase::
  Init<Chaos::TAABBTree<int,Chaos::TAABBTreeLeafArray<int,0,float>,1,float,Chaos::TDefaultAABBTreeStorageTraits<int>_>,Chaos::Softs::FSolverParticlesRange>'
  ::__l7::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143c5e410

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDCollisionSpringConstraintsBase::Init<Chaos::THierarchicalSpatialHash<int,float>,Chaos::Softs::FSolverParticles>'::__l7::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDCollisionSpringConstraintsBase::
  Init<Chaos::THierarchicalSpatialHash<int,float>,Chaos::Softs::FSolverParticles>'::__l7::<lambda_1>
  ::operator()(param_1,*param_2);
  return;
}

// Call @ 143c5e420

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDCollisionSpringConstraintsBase::Init<Chaos::THierarchicalSpatialHash<int,float>,Chaos::Softs::FSolverParticlesRange>'::__l7::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDCollisionSpringConstraintsBase::
  Init<Chaos::THierarchicalSpatialHash<int,float>,Chaos::Softs::FSolverParticlesRange>'::__l7::
  <lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143c5e430

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l17::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  ::Chaos::Softs::FPBDAxialSpringConstraints::ApplyHelper<Chaos::Softs::FSolverParticles>
            (*(FPBDAxialSpringConstraints **)param_1,*(FSolverParticles **)((longlong)param_1 + 8),
             *(float *)((longlong)param_1 + 0x10),*(int *)((longlong)param_1 + 0x14) + *param_2,
             *(float *)((longlong)param_1 + 0x18));
  return;
}

// Call @ 143c5e470

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l17::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  ::Chaos::Softs::FPBDBendingConstraints::ApplyHelper<Chaos::Softs::FSolverParticles>
            (*(FPBDBendingConstraints **)((longlong)param_1 + 8),
             *(FSolverParticles **)((longlong)param_1 + 0x10),**(float **)((longlong)param_1 + 0x18)
             ,**(int **)param_1 + *param_2,**(float **)((longlong)param_1 + 0x20),
             **(float **)((longlong)param_1 + 0x28));
  return;
}

// Call @ 143c5e4c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l17::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  ::Chaos::Softs::FPBDAxialSpringConstraints::ApplyHelper<Chaos::Softs::FSolverParticlesRange>
            (*(FPBDAxialSpringConstraints **)param_1,
             *(FSolverParticlesRange **)((longlong)param_1 + 8),*(float *)((longlong)param_1 + 0x10)
             ,*(int *)((longlong)param_1 + 0x14) + *param_2,*(float *)((longlong)param_1 + 0x18));
  return;
}

// Call @ 143c5e500

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l17::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  ::Chaos::Softs::FPBDBendingConstraints::ApplyHelper<Chaos::Softs::FSolverParticlesRange>
            (*(FPBDBendingConstraints **)((longlong)param_1 + 8),
             *(FSolverParticlesRange **)((longlong)param_1 + 0x10),
             **(float **)((longlong)param_1 + 0x18),**(int **)param_1 + *param_2,
             **(float **)((longlong)param_1 + 0x20),**(float **)((longlong)param_1 + 0x28));
  return;
}

// Call @ 143c5e550

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,1,1>'::__l21::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,1,1>'::__l21::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143c5e560

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,1,0>'::__l21::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,1,0>'::__l21::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143c5e570

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,0,1>'::__l21::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,0,1>'::__l21::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143c5e580

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,0,0>'::__l21::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,0,0>'::__l21::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143c5e590

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,1,1>'::__l21::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,1,1>'::__l21::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143c5e5a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,1,0>'::__l21::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,1,0>'::__l21::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143c5e5b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,0,1>'::__l21::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,0,1>'::__l21::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143c5e5c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,0,0>'::__l21::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,0,0>'::__l21::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143c5e5d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::AdvanceOneTimeStep'::__l7::<lambda_2>,void,Chaos::Softs::FSolverCollisionParticles_&,int>
::Call(void *param_1,FSolverCollisionParticles *param_2,int *param_3)

{
  `Chaos::Softs::FPBDEvolution::AdvanceOneTimeStep'::__l7::<lambda_2>::operator()
            (param_1,param_2,*param_3);
  return;
}

// Call @ 143c5e5e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,1,1>'::__l25::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,1,1>'::__l25::<lambda_2>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143c5e5f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,1,0>'::__l25::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,1,0>'::__l25::<lambda_2>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143c5e600

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,0,1>'::__l25::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,0,1>'::__l25::<lambda_2>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143c5e610

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,0,0>'::__l25::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,0,0>'::__l25::<lambda_2>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143c5e620

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,1,1>'::__l25::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,1,1>'::__l25::<lambda_2>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143c5e630

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,1,0>'::__l25::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,1,0>'::__l25::<lambda_2>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143c5e640

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,0,1>'::__l25::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,0,1>'::__l25::<lambda_2>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143c5e650

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,0,0>'::__l25::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,0,0>'::__l25::<lambda_2>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143c5e660

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l28::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  int iVar1;
  float fVar2;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14) + *param_2;
  fVar2 = ::Chaos::Softs::FPBDWeightMap::operator[]
                    ((FPBDWeightMap *)(*(longlong *)param_1 + 0x40),iVar1);
  ::Chaos::Softs::FPBDAxialSpringConstraints::ApplyHelper<Chaos::Softs::FSolverParticles>
            (*(FPBDAxialSpringConstraints **)param_1,*(FSolverParticles **)((longlong)param_1 + 8),
             *(float *)((longlong)param_1 + 0x10),iVar1,fVar2);
  return;
}

// Call @ 143c5e6b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l28::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l28::<lambda_2>::
  operator()(param_1,*param_2);
  return;
}

// Call @ 143c5e6c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l28::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  int iVar1;
  float fVar2;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14) + *param_2;
  fVar2 = ::Chaos::Softs::FPBDWeightMap::operator[]
                    ((FPBDWeightMap *)(*(longlong *)param_1 + 0x40),iVar1);
  ::Chaos::Softs::FPBDAxialSpringConstraints::ApplyHelper<Chaos::Softs::FSolverParticlesRange>
            (*(FPBDAxialSpringConstraints **)param_1,
             *(FSolverParticlesRange **)((longlong)param_1 + 8),*(float *)((longlong)param_1 + 0x10)
             ,iVar1,fVar2);
  return;
}

// Call @ 143c5e710

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l28::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l28::
  <lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 143c5e720

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::AdvanceOneTimeStep'::__l9::<lambda_3>,void,TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_&,int>
::Call(void *param_1,
      TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>
      *param_2,int *param_3)

{
  `Chaos::Softs::FPBDEvolution::AdvanceOneTimeStep'::__l9::<lambda_3>::operator()
            (param_1,param_2,*param_3);
  return;
}

// Call @ 143c5e730

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,1,1>'::__l27::<lambda_3>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,1,1>'::__l27::<lambda_3>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143c5e740

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,1,0>'::__l27::<lambda_3>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,1,0>'::__l27::<lambda_3>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143c5e750

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,0,1>'::__l27::<lambda_3>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,0,1>'::__l27::<lambda_3>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143c5e760

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,0,0>'::__l27::<lambda_3>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,0,0>'::__l27::<lambda_3>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143c5e770

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,1,1>'::__l27::<lambda_3>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,1,1>'::__l27::<lambda_3>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143c5e780

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,1,0>'::__l27::<lambda_3>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,1,0>'::__l27::<lambda_3>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143c5e790

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,0,1>'::__l27::<lambda_3>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,0,1>'::__l27::<lambda_3>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143c5e7a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,0,0>'::__l27::<lambda_3>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,0,0>'::__l27::<lambda_3>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143c5e7b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::AdvanceOneTimeStep'::__l12::<lambda_4>,void,TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_&,int,int>
::Call(void *param_1,
      TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>
      *param_2,int *param_3,int *param_4)

{
  `Chaos::Softs::FPBDEvolution::AdvanceOneTimeStep'::__l12::<lambda_4>::operator()
            (param_1,param_2,*param_3,*param_4);
  return;
}

// Call @ 143c5e7d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::AdvanceOneTimeStep'::__l13::<lambda_5>,void,Chaos::Softs::FSolverParticles_&,int,int>
::Call(void *param_1,FSolverParticles *param_2,int *param_3,int *param_4)

{
  `Chaos::Softs::FPBDEvolution::AdvanceOneTimeStep'::__l13::<lambda_5>::operator()
            (param_1,param_2,*param_3,*param_4);
  return;
}

// Call @ 143c5e7f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::AdvanceOneTimeStep'::__l12::<lambda_6>,void,TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_&,int,int>
::Call(void *param_1,
      TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>
      *param_2,int *param_3,int *param_4)

{
  `Chaos::Softs::FPBDEvolution::AdvanceOneTimeStep'::__l12::<lambda_6>::operator()
            (param_1,param_2,*param_3,*param_4);
  return;
}

// Call @ 143c5e810

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::AdvanceOneTimeStep'::__l14::<lambda_7>,void,TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_&,int,int>
::Call(void *param_1,
      TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>
      *param_2,int *param_3,int *param_4)

{
  `Chaos::Softs::FPBDEvolution::AdvanceOneTimeStep'::__l14::<lambda_7>::operator()
            (param_1,param_2,*param_3,*param_4);
  return;
}

// Call @ 143c5e830

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::AdvanceOneTimeStep'::__l18::<lambda_8>,void,Chaos::Softs::FSolverParticles_&,int,int>
::Call(void *param_1,FSolverParticles *param_2,int *param_3,int *param_4)

{
  PostIterationUpdates
            (param_2->_padding_,param_2->_padding_,*(undefined8 *)&(param_2->MPAndInvM).field_0x8,
             *(undefined4 *)param_1,*param_3,*param_4);
  return;
}

// Call @ 143c5e870

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::AdvanceOneTimeStep'::__l20::<lambda_9>,void,Chaos::Softs::FSolverParticles_&,int>
::Call(void *param_1,FSolverParticles *param_2,int *param_3)

{
  `Chaos::Softs::FPBDEvolution::AdvanceOneTimeStep'::__l20::<lambda_9>::operator()
            (param_1,param_2,*param_3);
  return;
}

// Call @ 143c925a0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Chaos::Softs::FPBDKinematicTriangleMeshCollisions::Init'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,bool,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  return true;
}

// Call @ 143c925b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDKinematicTriangleMeshCollisions::Init'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDKinematicTriangleMeshCollisions::Init'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143c925c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FRigidClustering::UpdateConnectivityGraphUsingPointImplicit'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::FRigidClustering::UpdateConnectivityGraphUsingPointImplicit'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143c925d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDLongRangeConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l21::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDLongRangeConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l21::<lambda_1>
  ::operator()(param_1,*param_2);
  return;
}

// Call @ 143c925e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDLongRangeConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l21::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDLongRangeConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l21::
  <lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143c925f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDPlanarConstraints::Apply'::__l40::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  ::Chaos::Softs::FPBDPlanarConstraints::ApplyHelperWithFriction
            (*(FPBDPlanarConstraints **)param_1,*(FSolverParticlesRange **)((longlong)param_1 + 8),
             *(float *)((longlong)param_1 + 0x10),*param_2);
  return;
}

// Call @ 143c92610

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDLongRangeConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l36::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDLongRangeConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l36::<lambda_2>
  ::operator()(param_1,*param_2);
  return;
}

// Call @ 143c92620

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDLongRangeConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l36::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDLongRangeConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l36::
  <lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 143c92630

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDPlanarConstraints::Apply'::__l42::<lambda_2>,void,int>::Call
          (void *param_1,int *param_2)

{
  ::Chaos::Softs::FPBDPlanarConstraints::ApplyHelperNoFriction
            (*(FPBDPlanarConstraints **)param_1,*(FSolverParticlesRange **)((longlong)param_1 + 8),
             *param_2);
  return;
}

// Call @ 143c92650

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDLongRangeConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l54::<lambda_3>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDLongRangeConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l54::<lambda_3>
  ::operator()(param_1,*param_2);
  return;
}

// Call @ 143c92660

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDLongRangeConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l54::<lambda_3>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDLongRangeConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l54::
  <lambda_3>::operator()(param_1,*param_2);
  return;
}

// Call @ 143c92670

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDLongRangeConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l69::<lambda_4>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDLongRangeConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l69::<lambda_4>
  ::operator()(param_1,*param_2);
  return;
}

// Call @ 143c92680

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDLongRangeConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l69::<lambda_4>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDLongRangeConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l69::
  <lambda_4>::operator()(param_1,*param_2);
  return;
}

// Call @ 143d45c90

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<``Chaos::FPBDRigidsEvolutionGBF::FPBDRigidsEvolutionGBF'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>'::__l2::<lambda_1>_const_,int,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  return *param_2;
}

// Call @ 143d45ca0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,Chaos::TGeometryParticleHandleImp<double,3,1>_const_*),void,Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,Chaos::TGeometryParticleHandleImp<double,3,1>_*>
::Call(void *param_1,TGeometryParticleHandleImp<double,3,1> **param_2,
      TGeometryParticleHandleImp<double,3,1> **param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000143d45cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(*param_2,*param_3);
  return;
}

// Call @ 143d45cc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyInternalCCD<1,1>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyInternalCCD<1,1>'::__l2::<lambda_1>::
  operator()(param_1,*param_2);
  return;
}

// Call @ 143d45cd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyInternalCCD<1,0>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyInternalCCD<1,0>'::__l2::<lambda_1>::
  operator()(param_1,*param_2);
  return;
}

// Call @ 143d45ce0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyInternalCCD<0,1>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyInternalCCD<0,1>'::__l2::<lambda_1>::
  operator()(param_1,*param_2);
  return;
}

// Call @ 143d45cf0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyInternalCCD<0,0>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyInternalCCD<0,0>'::__l2::<lambda_1>::
  operator()(param_1,*param_2);
  return;
}

// Call @ 143d45d00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FPerParticleRule::ApplyPerParticle<Chaos::TDynamicParticles<double,3>_>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143d45d19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 0x40))
            (*(longlong **)param_1,*(undefined8 *)((longlong)param_1 + 8),
             **(undefined8 **)((longlong)param_1 + 0x10),*param_2);
  return;
}

// Call @ 143d45d30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FPerParticleRule::ApplyPerParticle<Chaos::TPBDParticles<double,3>_>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143d45d49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 0x38))
            (*(longlong **)param_1,*(undefined8 *)((longlong)param_1 + 8),
             **(undefined8 **)((longlong)param_1 + 0x10),*param_2);
  return;
}

// Call @ 143d45d60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FPerParticleRule::ApplyPerParticle<Chaos::TParticles<double,3>_>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143d45d79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 0x48))
            (*(longlong **)param_1,*(undefined8 *)((longlong)param_1 + 8),
             **(undefined8 **)((longlong)param_1 + 0x10),*param_2);
  return;
}

// Call @ 143d45d90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<1,1,1>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<1,1,1>'::__l2::<lambda_1>
  ::operator()(param_1,*param_2);
  return;
}

// Call @ 143d45da0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<1,1,0>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<1,1,0>'::__l2::<lambda_1>
  ::operator()(param_1,*param_2);
  return;
}

// Call @ 143d45db0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<1,0,1>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<1,0,1>'::__l2::<lambda_1>
  ::operator()(param_1,*param_2);
  return;
}

// Call @ 143d45dc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<1,0,0>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<1,0,0>'::__l2::<lambda_1>
  ::operator()(param_1,*param_2);
  return;
}

// Call @ 143d45dd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<0,1,1>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<0,1,1>'::__l2::<lambda_1>
  ::operator()(param_1,*param_2);
  return;
}

// Call @ 143d45de0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<0,1,0>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<0,1,0>'::__l2::<lambda_1>
  ::operator()(param_1,*param_2);
  return;
}

// Call @ 143d45df0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<0,0,1>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<0,0,1>'::__l2::<lambda_1>
  ::operator()(param_1,*param_2);
  return;
}

// Call @ 143d45e00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<0,0,0>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternal<0,0,0>'::__l2::<lambda_1>
  ::operator()(param_1,*param_2);
  return;
}

// Call @ 143d45e10

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDSelfCollisionSphereConstraintsBase::Init<Chaos::Softs::FSolverParticles>'::__l2::<lambda_1>,bool,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  
  bVar1 = `Chaos::Softs::FPBDSelfCollisionSphereConstraintsBase::
          Init<Chaos::Softs::FSolverParticles>'::__l2::<lambda_1>::operator()
                    (param_1,*param_2,*param_3);
  return bVar1;
}

// Call @ 143d45e20

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDSelfCollisionSphereConstraintsBase::Init<Chaos::Softs::FSolverParticlesRange>'::__l2::<lambda_1>,bool,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  
  bVar1 = `Chaos::Softs::FPBDSelfCollisionSphereConstraintsBase::
          Init<Chaos::Softs::FSolverParticlesRange>'::__l2::<lambda_1>::operator()
                    (param_1,*param_2,*param_3);
  return bVar1;
}

// Call @ 143d45e30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::TSpatialHashGridPoints<int,float>::InitializePoints<TArray<Chaos::Softs::Private::FSphereSpatialEntry,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::TSpatialHashGridPoints<int,float>::
  InitializePoints<TArray<Chaos::Softs::Private::FSphereSpatialEntry,TSizedDefaultAllocator<32>_>_>'
  ::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143d45e40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FPBDRigidsEvolutionGBF::FPBDRigidsEvolutionGBF'::__l2::<lambda_1>,void,Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>_const_&,double>
::Call(void *param_1,TParticleView<Chaos::TPBDRigidParticles<double,3>_> *param_2,double *param_3)

{
  ulonglong local_res18;
  <lambda_1> local_res20 [8];
  <lambda_2> local_18 [3];
  
  local_res18 = (ulonglong)param_3 & 0xffffffffffffff00;
  local_18[0].Func = (<lambda_1> *)&local_res18;
  ::Chaos::
  ParticlesParallelFor<Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>,_Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<__Chaos::FPBDRigidsEvolutionGBF::FPBDRigidsEvolutionGBF_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>_::__l2::<lambda_1>,_Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<__Chaos::FPBDRigidsEvolutionGBF::FPBDRigidsEvolutionGBF_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>_::__l2::<lambda_2>_>
            (param_2,local_res20,local_18,false);
  return;
}

// Call @ 143d45e80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternalISPC'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplySimpleInternalISPC'::__l2::<lambda_1>::
  operator()(param_1,*param_2);
  return;
}

// Call @ 143d45e90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::UpdateLinearSystem'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::UpdateLinearSystem'::__l2::<lambda_1>::
  operator()(param_1,*param_2);
  return;
}

// Call @ 143d45ea0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<1,1,1>'::__l18::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<1,1,1>'::__l18::
  <lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143d45eb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<1,1,0>'::__l18::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<1,1,0>'::__l18::
  <lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143d45ec0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<0,1,1>'::__l18::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<0,1,1>'::__l18::
  <lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143d45ed0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<0,1,0>'::__l18::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<0,1,0>'::__l18::
  <lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143d45ee0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FPBDRigidsEvolutionGBF::AdvanceOneTimeStepImpl'[::C]::<lambda_1>,void,FPBDRigidsEvolutionGBF::TPBDRigidParticleHandleImp<double,3,1>_*>
::Call(void *param_1,TPBDRigidParticleHandleImp<double,3,1> **param_2)

{
  ::Chaos::FPBDRigidsEvolutionBase::DisableParticle
            (*(FPBDRigidsEvolutionBase **)param_1,(TGeometryParticleHandleImp<double,3,1> *)*param_2
            );
  return;
}

// Call @ 143d45f00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<1,0,1>'::__l15::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<1,0,1>'::__l15::
  <lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143d45f10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<1,0,0>'::__l15::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<1,0,0>'::__l15::
  <lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143d45f20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<0,0,1>'::__l15::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<0,0,1>'::__l15::
  <lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143d45f30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<0,0,0>'::__l15::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<0,0,0>'::__l15::
  <lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143d45f40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FPBDRigidsEvolutionGBF::FPBDRigidsEvolutionGBF'::__l2::<lambda_2>,void,Chaos::TPBDRigidParticleHandleImp<double,3,0>_&,double>
::Call(void *param_1,TPBDRigidParticleHandleImp<double,3,0> *param_2,double *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000143d45f52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(*(longlong *)param_1 + 0xe00) + 0x18))
            ((longlong *)(*(longlong *)param_1 + 0xe00),param_2,*param_3);
  return;
}

// Call @ 143d45f60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::ParticleViewParallelForImp<Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>,`Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<``Chaos::FPBDRigidsEvolutionGBF::FPBDRigidsEvolutionGBF'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<``Chaos::FPBDRigidsEvolutionGBF::FPBDRigidsEvolutionGBF'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>'::__l2::<lambda_2>_>'::__l10::<lambda_2>,void,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  `Chaos::
  ParticleViewParallelForImp<Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>,`Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<``Chaos::FPBDRigidsEvolutionGBF::FPBDRigidsEvolutionGBF'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<``Chaos::FPBDRigidsEvolutionGBF::FPBDRigidsEvolutionGBF'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>'::__l2::<lambda_2>_>'
  ::__l10::<lambda_2>::operator()(param_1,*param_2,*param_3);
  return;
}

// Call @ 143d45f70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<1,1,1>'::__l32::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<1,1,1>'::__l32::
  <lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 143d45f80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<1,1,0>'::__l32::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<1,1,0>'::__l32::
  <lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 143d45f90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<0,1,1>'::__l32::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<0,1,1>'::__l32::
  <lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 143d45fa0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<0,1,0>'::__l32::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPBDSoftBodyCollisionConstraintBase::ApplyComplexInternal<0,1,0>'::__l32::
  <lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 143d45fb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::ParticleViewParallelForImp<Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>,`Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<``Chaos::FPBDRigidsEvolutionGBF::FPBDRigidsEvolutionGBF'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<``Chaos::FPBDRigidsEvolutionGBF::FPBDRigidsEvolutionGBF'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>'::__l2::<lambda_2>_>'::__l12::<lambda_3>,void,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  `Chaos::
  ParticleViewParallelForImp<Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>,`Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<``Chaos::FPBDRigidsEvolutionGBF::FPBDRigidsEvolutionGBF'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<``Chaos::FPBDRigidsEvolutionGBF::FPBDRigidsEvolutionGBF'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>'::__l2::<lambda_2>_>'
  ::__l12::<lambda_3>::operator()(param_1,*param_2,*param_3);
  return;
}

// Call @ 143da3130

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<bool_(__cdecl*)(Chaos::FPhysicsObjectCollisionInterface<1>::FShapeOverlapData_const_&,Chaos::FPhysicsObjectCollisionInterface<1>::FShapeOverlapData_const_&,Chaos::FMTDInfo_const_&),bool,Chaos::FPhysicsObjectCollisionInterface<1>::FShapeOverlapData_const_&,Chaos::FPhysicsObjectCollisionInterface<1>::FShapeOverlapData_const_&,Chaos::FMTDInfo_const_&>
::Call(void *param_1,FShapeOverlapData *param_2,FShapeOverlapData *param_3,FMTDInfo *param_4)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143da3142. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_1)(param_2,param_3,param_4);
  return (bool)uVar1;
}

// Call @ 143da3150

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<bool_(__cdecl*)(Chaos::FPhysicsObjectCollisionInterface<0>::FShapeOverlapData_const_&,Chaos::FPhysicsObjectCollisionInterface<0>::FShapeOverlapData_const_&,Chaos::FMTDInfo_const_&),bool,Chaos::FPhysicsObjectCollisionInterface<0>::FShapeOverlapData_const_&,Chaos::FPhysicsObjectCollisionInterface<0>::FShapeOverlapData_const_&,Chaos::FMTDInfo_const_&>
::Call(void *param_1,FShapeOverlapData *param_2,FShapeOverlapData *param_3,FMTDInfo *param_4)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143da3162. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_1)(param_2,param_3,param_4);
  return (bool)uVar1;
}

// Call @ 143da3170

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::ContourMinimization::BuildGlobalContourMinimizationIntersections<Chaos::Softs::FSolverParticles>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::ContourMinimization::
  BuildGlobalContourMinimizationIntersections<Chaos::Softs::FSolverParticles>'::__l2::<lambda_1>::
  operator()(param_1,*param_2);
  return;
}

// Call @ 143da3180

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::ContourMinimization::BuildGlobalContourMinimizationIntersections<Chaos::Softs::FSolverParticlesRange>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::ContourMinimization::
  BuildGlobalContourMinimizationIntersections<Chaos::Softs::FSolverParticlesRange>'::__l2::
  <lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143da3190

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::ContourMinimization::BuildLocalContourMinimizationIntersections<Chaos::Softs::FSolverParticles>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::ContourMinimization::
  BuildLocalContourMinimizationIntersections<Chaos::Softs::FSolverParticles>'::__l2::<lambda_1>::
  operator()(param_1,*param_2);
  return;
}

// Call @ 143da31a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::ContourMinimization::BuildLocalContourMinimizationIntersections<Chaos::Softs::FSolverParticlesRange>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::ContourMinimization::
  BuildLocalContourMinimizationIntersections<Chaos::Softs::FSolverParticlesRange>'::__l2::<lambda_1>
  ::operator()(param_1,*param_2);
  return;
}

// Call @ 143da31b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FindEdgeFaceIntersections<Chaos::THierarchicalSpatialHash<int,float>,Chaos::Softs::FSolverParticles>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::
  FindEdgeFaceIntersections<Chaos::THierarchicalSpatialHash<int,float>,Chaos::Softs::FSolverParticles>'
  ::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143da31c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FindEdgeFaceIntersections<Chaos::THierarchicalSpatialHash<int,float>,Chaos::Softs::FSolverParticlesRange>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::
  FindEdgeFaceIntersections<Chaos::THierarchicalSpatialHash<int,float>,Chaos::Softs::FSolverParticlesRange>'
  ::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143da31d0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Chaos::Softs::FindEdgeFaceIntersections<Chaos::THierarchicalSpatialHash<int,float>,Chaos::Softs::FSolverParticles>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,bool,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  
  bVar1 = ``Chaos::Softs::
          FindEdgeFaceIntersections<Chaos::THierarchicalSpatialHash<int,float>,Chaos::Softs::FSolverParticles>'
          ::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()(param_1,*param_2,*param_3);
  return bVar1;
}

// Call @ 143da31e0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Chaos::Softs::FindEdgeFaceIntersections<Chaos::THierarchicalSpatialHash<int,float>,Chaos::Softs::FSolverParticlesRange>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,bool,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  
  bVar1 = ``Chaos::Softs::
          FindEdgeFaceIntersections<Chaos::THierarchicalSpatialHash<int,float>,Chaos::Softs::FSolverParticlesRange>'
          ::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()(param_1,*param_2,*param_3);
  return bVar1;
}

// Call @ 143da31f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Chaos::Softs::FPerParticlePBDCollisionConstraint::ApplyHelper<1>'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>,void,Chaos::Softs::FSolverCollisionParticles_&,int>
::Call(void *param_1,FSolverCollisionParticles *param_2,int *param_3)

{
  ``Chaos::Softs::FPerParticlePBDCollisionConstraint::ApplyHelper<1>'::__l5::<lambda_1>::operator()'
  ::__l2::<lambda_1>::operator()(param_1,param_2,*param_3);
  return;
}

// Call @ 143da3200

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Chaos::Softs::FPerParticlePBDCollisionConstraint::ApplyHelper<0>'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>,void,Chaos::Softs::FSolverCollisionParticles_&,int>
::Call(void *param_1,FSolverCollisionParticles *param_2,int *param_3)

{
  ``Chaos::Softs::FPerParticlePBDCollisionConstraint::ApplyHelper<0>'::__l5::<lambda_1>::operator()'
  ::__l2::<lambda_1>::operator()(param_1,param_2,*param_3);
  return;
}

// Call @ 143da3210

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Chaos::Softs::FPerParticlePBDCollisionConstraint::ApplyHelperISPC'::__l19::<lambda_1>::operator()'::__l2::<lambda_1>,void,Chaos::Softs::FSolverCollisionParticles_&,int,int>
::Call(void *param_1,FSolverCollisionParticles *param_2,int *param_3,int *param_4)

{
  ``Chaos::Softs::FPerParticlePBDCollisionConstraint::ApplyHelperISPC'::__l19::<lambda_1>::
  operator()'::__l2::<lambda_1>::operator()(param_1,param_2,*param_3,*param_4);
  return;
}

// Call @ 143da3230

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Chaos::Softs::FPerParticlePBDCollisionConstraint::ApplyHelper<1>'::__l7::<lambda_2>::operator()'::__l2::<lambda_1>,void,Chaos::Softs::FSolverCollisionParticles_&,int>
::Call(void *param_1,FSolverCollisionParticles *param_2,int *param_3)

{
  ``Chaos::Softs::FPerParticlePBDCollisionConstraint::ApplyHelper<1>'::__l7::<lambda_2>::operator()'
  ::__l2::<lambda_1>::operator()(param_1,param_2,*param_3);
  return;
}

// Call @ 143da3240

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Chaos::Softs::FPerParticlePBDCollisionConstraint::ApplyHelper<0>'::__l7::<lambda_2>::operator()'::__l2::<lambda_1>,void,Chaos::Softs::FSolverCollisionParticles_&,int>
::Call(void *param_1,FSolverCollisionParticles *param_2,int *param_3)

{
  ``Chaos::Softs::FPerParticlePBDCollisionConstraint::ApplyHelper<0>'::__l7::<lambda_2>::operator()'
  ::__l2::<lambda_1>::operator()(param_1,param_2,*param_3);
  return;
}

// Call @ 143da3250

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Chaos::Softs::FPerParticlePBDCollisionConstraint::ApplyHelperISPC'::__l21::<lambda_2>::operator()'::__l2::<lambda_1>,void,Chaos::Softs::FSolverCollisionParticles_&,int,int>
::Call(void *param_1,FSolverCollisionParticles *param_2,int *param_3,int *param_4)

{
  ``Chaos::Softs::FPerParticlePBDCollisionConstraint::ApplyHelperISPC'::__l21::<lambda_2>::
  operator()'::__l2::<lambda_1>::operator()(param_1,param_2,*param_3,*param_4);
  return;
}

// Call @ 143da3270

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FPhysicsObjectCollisionInterface<1>::PhysicsObjectOverlapWithAABB'::__l2::<lambda_1>,bool,Chaos::FPhysicsObjectCollisionInterface<1>::FShapeOverlapData_const_&,Chaos::FPhysicsObjectCollisionInterface<1>::FShapeOverlapData_const_&,Chaos::FMTDInfo_const_&>
::Call(void *param_1,FShapeOverlapData *param_2,FShapeOverlapData *param_3,FMTDInfo *param_4)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined7 uStack_57;
  
  dVar10 = *(double *)&(param_2->BoundingBox).MMax.field_0x8;
  dVar12 = *(double *)&(param_3->BoundingBox).MMax.field_0x8;
  if (dVar12 <= dVar10) {
    dVar10 = dVar12;
  }
  dVar12 = *(double *)&(param_2->BoundingBox).MMax.field_0x10;
  dVar9 = *(double *)&(param_3->BoundingBox).MMin.field_0x10;
  dVar1 = *(double *)&(param_3->BoundingBox).MMax.field_0x10;
  if (dVar1 <= dVar12) {
    dVar12 = dVar1;
  }
  dVar1 = *(double *)&(param_2->BoundingBox).MMin.field_0x10;
  if (dVar9 <= dVar1) {
    dVar9 = dVar1;
  }
  pdVar3 = *(double **)param_1;
  dVar1 = *(double *)&(param_3->BoundingBox).MMin;
  uVar6 = SUB84(dVar1,0);
  uVar8 = (undefined4)((ulonglong)dVar1 >> 0x20);
  dVar11 = *(double *)&(param_3->BoundingBox).MMin.field_0x8;
  dVar2 = *(double *)&(param_2->BoundingBox).MMin;
  if (dVar1 <= dVar2) {
    uVar6 = SUB84(dVar2,0);
    uVar8 = (undefined4)((ulonglong)dVar2 >> 0x20);
  }
  dVar1 = *(double *)&(param_2->BoundingBox).MMin.field_0x8;
  if (dVar11 <= dVar1) {
    dVar11 = dVar1;
  }
  dVar1 = *(double *)&(param_3->BoundingBox).MMax;
  uVar13 = SUB84(dVar1,0);
  uVar14 = (undefined4)((ulonglong)dVar1 >> 0x20);
  dVar2 = *(double *)&(param_2->BoundingBox).MMax;
  if (dVar2 <= dVar1) {
    uVar13 = SUB84(dVar2,0);
    uVar14 = (undefined4)((ulonglong)dVar2 >> 0x20);
  }
  uVar5 = (undefined4)((ulonglong)dVar11 >> 0x20);
  if (*(char *)(pdVar3 + 6) != '\0') {
    dVar1 = *pdVar3;
    if (pdVar3[2] <= dVar9) {
      dVar9 = pdVar3[2];
    }
    if (dVar10 <= pdVar3[4]) {
      dVar10 = pdVar3[4];
    }
    uVar4 = SUB84(dVar1,0);
    uVar7 = (int)((ulonglong)dVar1 >> 0x20);
    if ((double)CONCAT44(uVar8,uVar6) <= dVar1) {
      uVar4 = uVar6;
      uVar7 = uVar8;
    }
    dVar1 = pdVar3[1];
    uVar6 = SUB84(dVar1,0);
    uVar8 = (int)((ulonglong)dVar1 >> 0x20);
    if (dVar11 <= dVar1) {
      uVar6 = SUB84(dVar11,0);
      uVar8 = uVar5;
    }
    pdVar3[2] = dVar9;
    pdVar3[4] = dVar10;
    *pdVar3 = (double)CONCAT44(uVar7,uVar4);
    dVar10 = pdVar3[3];
    uVar5 = SUB84(dVar10,0);
    uVar4 = (int)((ulonglong)dVar10 >> 0x20);
    if (dVar10 <= (double)CONCAT44(uVar14,uVar13)) {
      uVar5 = uVar13;
      uVar4 = uVar14;
    }
    pdVar3[1] = (double)CONCAT44(uVar8,uVar6);
    pdVar3[3] = (double)CONCAT44(uVar4,uVar5);
    dVar10 = pdVar3[5];
    uVar6 = SUB84(dVar10,0);
    uVar8 = (undefined4)((ulonglong)dVar10 >> 0x20);
    if (dVar10 <= dVar12) {
      uVar6 = SUB84(dVar12,0);
      uVar8 = (undefined4)((ulonglong)dVar12 >> 0x20);
    }
    pdVar3[5] = (double)CONCAT44(uVar8,uVar6);
    return true;
  }
  *(undefined4 *)pdVar3 = uVar6;
  *(undefined4 *)((longlong)pdVar3 + 4) = uVar8;
  *(int *)(pdVar3 + 1) = SUB84(dVar11,0);
  *(undefined4 *)((longlong)pdVar3 + 0xc) = uVar5;
  pdVar3[2] = dVar9;
  pdVar3[3] = (double)CONCAT44(uVar14,uVar13);
  pdVar3[4] = dVar10;
  pdVar3[5] = dVar12;
  pdVar3[6] = (double)CONCAT71(uStack_57,1);
  return true;
}

// Call @ 143da3280

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FPhysicsObjectCollisionInterface<0>::PhysicsObjectOverlapWithAABB'::__l2::<lambda_1>,bool,Chaos::FPhysicsObjectCollisionInterface<0>::FShapeOverlapData_const_&,Chaos::FPhysicsObjectCollisionInterface<0>::FShapeOverlapData_const_&,Chaos::FMTDInfo_const_&>
::Call(void *param_1,FShapeOverlapData *param_2,FShapeOverlapData *param_3,FMTDInfo *param_4)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined7 uStack_57;
  
  dVar10 = *(double *)&(param_2->BoundingBox).MMax.field_0x8;
  dVar12 = *(double *)&(param_3->BoundingBox).MMax.field_0x8;
  if (dVar12 <= dVar10) {
    dVar10 = dVar12;
  }
  dVar12 = *(double *)&(param_2->BoundingBox).MMax.field_0x10;
  dVar9 = *(double *)&(param_3->BoundingBox).MMin.field_0x10;
  dVar1 = *(double *)&(param_3->BoundingBox).MMax.field_0x10;
  if (dVar1 <= dVar12) {
    dVar12 = dVar1;
  }
  dVar1 = *(double *)&(param_2->BoundingBox).MMin.field_0x10;
  if (dVar9 <= dVar1) {
    dVar9 = dVar1;
  }
  pdVar3 = *(double **)param_1;
  dVar1 = *(double *)&(param_3->BoundingBox).MMin;
  uVar6 = SUB84(dVar1,0);
  uVar8 = (undefined4)((ulonglong)dVar1 >> 0x20);
  dVar11 = *(double *)&(param_3->BoundingBox).MMin.field_0x8;
  dVar2 = *(double *)&(param_2->BoundingBox).MMin;
  if (dVar1 <= dVar2) {
    uVar6 = SUB84(dVar2,0);
    uVar8 = (undefined4)((ulonglong)dVar2 >> 0x20);
  }
  dVar1 = *(double *)&(param_2->BoundingBox).MMin.field_0x8;
  if (dVar11 <= dVar1) {
    dVar11 = dVar1;
  }
  dVar1 = *(double *)&(param_3->BoundingBox).MMax;
  uVar13 = SUB84(dVar1,0);
  uVar14 = (undefined4)((ulonglong)dVar1 >> 0x20);
  dVar2 = *(double *)&(param_2->BoundingBox).MMax;
  if (dVar2 <= dVar1) {
    uVar13 = SUB84(dVar2,0);
    uVar14 = (undefined4)((ulonglong)dVar2 >> 0x20);
  }
  uVar5 = (undefined4)((ulonglong)dVar11 >> 0x20);
  if (*(char *)(pdVar3 + 6) != '\0') {
    dVar1 = *pdVar3;
    if (pdVar3[2] <= dVar9) {
      dVar9 = pdVar3[2];
    }
    if (dVar10 <= pdVar3[4]) {
      dVar10 = pdVar3[4];
    }
    uVar4 = SUB84(dVar1,0);
    uVar7 = (int)((ulonglong)dVar1 >> 0x20);
    if ((double)CONCAT44(uVar8,uVar6) <= dVar1) {
      uVar4 = uVar6;
      uVar7 = uVar8;
    }
    dVar1 = pdVar3[1];
    uVar6 = SUB84(dVar1,0);
    uVar8 = (int)((ulonglong)dVar1 >> 0x20);
    if (dVar11 <= dVar1) {
      uVar6 = SUB84(dVar11,0);
      uVar8 = uVar5;
    }
    pdVar3[2] = dVar9;
    pdVar3[4] = dVar10;
    *pdVar3 = (double)CONCAT44(uVar7,uVar4);
    dVar10 = pdVar3[3];
    uVar5 = SUB84(dVar10,0);
    uVar4 = (int)((ulonglong)dVar10 >> 0x20);
    if (dVar10 <= (double)CONCAT44(uVar14,uVar13)) {
      uVar5 = uVar13;
      uVar4 = uVar14;
    }
    pdVar3[1] = (double)CONCAT44(uVar8,uVar6);
    pdVar3[3] = (double)CONCAT44(uVar4,uVar5);
    dVar10 = pdVar3[5];
    uVar6 = SUB84(dVar10,0);
    uVar8 = (undefined4)((ulonglong)dVar10 >> 0x20);
    if (dVar10 <= dVar12) {
      uVar6 = SUB84(dVar12,0);
      uVar8 = (undefined4)((ulonglong)dVar12 >> 0x20);
    }
    pdVar3[5] = (double)CONCAT44(uVar8,uVar6);
    return true;
  }
  *(undefined4 *)pdVar3 = uVar6;
  *(undefined4 *)((longlong)pdVar3 + 4) = uVar8;
  *(int *)(pdVar3 + 1) = SUB84(dVar11,0);
  *(undefined4 *)((longlong)pdVar3 + 0xc) = uVar5;
  pdVar3[2] = dVar9;
  pdVar3[3] = (double)CONCAT44(uVar14,uVar13);
  pdVar3[4] = dVar10;
  pdVar3[5] = dVar12;
  pdVar3[6] = (double)CONCAT71(uStack_57,1);
  return true;
}

// Call @ 143da3290

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FPhysicsObjectCollisionInterface<1>::PhysicsObjectOverlapWithAABBIntersections'::__l2::<lambda_1>,bool,Chaos::FPhysicsObjectCollisionInterface<1>::FShapeOverlapData_const_&,Chaos::FPhysicsObjectCollisionInterface<1>::FShapeOverlapData_const_&,Chaos::FMTDInfo_const_&>
::Call(void *param_1,FShapeOverlapData *param_2,FShapeOverlapData *param_3,FMTDInfo *param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  double dVar4;
  ForAnyElementType *pFVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  longlong lVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  
  pFVar5 = *(ForAnyElementType **)param_1;
  dVar9 = *(double *)&(param_2->BoundingBox).MMax.field_0x10;
  dVar3 = *(double *)&(param_3->BoundingBox).MMax.field_0x10;
  if (dVar3 <= dVar9) {
    dVar9 = dVar3;
  }
  dVar3 = *(double *)&(param_3->BoundingBox).MMin;
  uVar10 = SUB84(dVar3,0);
  uVar11 = (undefined4)((ulonglong)dVar3 >> 0x20);
  dVar4 = *(double *)&(param_2->BoundingBox).MMin;
  if (dVar3 <= dVar4) {
    uVar10 = SUB84(dVar4,0);
    uVar11 = (undefined4)((ulonglong)dVar4 >> 0x20);
  }
  dVar3 = *(double *)&(param_3->BoundingBox).MMin.field_0x8;
  uVar12 = SUB84(dVar3,0);
  uVar13 = (undefined4)((ulonglong)dVar3 >> 0x20);
  dVar4 = *(double *)&(param_2->BoundingBox).MMin.field_0x8;
  if (dVar3 <= dVar4) {
    uVar12 = SUB84(dVar4,0);
    uVar13 = (undefined4)((ulonglong)dVar4 >> 0x20);
  }
  dVar3 = *(double *)&(param_3->BoundingBox).MMin.field_0x10;
  uVar14 = SUB84(dVar3,0);
  uVar15 = (undefined4)((ulonglong)dVar3 >> 0x20);
  dVar4 = *(double *)&(param_2->BoundingBox).MMin.field_0x10;
  if (dVar3 <= dVar4) {
    uVar14 = SUB84(dVar4,0);
    uVar15 = (undefined4)((ulonglong)dVar4 >> 0x20);
  }
  dVar3 = *(double *)&(param_3->BoundingBox).MMax;
  uVar16 = SUB84(dVar3,0);
  uVar17 = (undefined4)((ulonglong)dVar3 >> 0x20);
  dVar4 = *(double *)&(param_2->BoundingBox).MMax;
  if (dVar4 <= dVar3) {
    uVar16 = SUB84(dVar4,0);
    uVar17 = (undefined4)((ulonglong)dVar4 >> 0x20);
  }
  dVar3 = *(double *)&(param_2->BoundingBox).MMax.field_0x8;
  uVar18 = SUB84(dVar3,0);
  uVar19 = (undefined4)((ulonglong)dVar3 >> 0x20);
  dVar4 = *(double *)&(param_3->BoundingBox).MMax.field_0x8;
  if (dVar4 <= dVar3) {
    uVar18 = SUB84(dVar4,0);
    uVar19 = (undefined4)((ulonglong)dVar4 >> 0x20);
  }
  piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
  iVar7 = *(int *)&pFVar5[1].Data;
  if (iVar7 == *piVar1) {
    iVar7 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,pFVar5,piVar1);
  }
  *(int *)&pFVar5[1].Data = iVar7 + 1;
  lVar8 = (longlong)iVar7 * 0x38;
  pFVar6 = pFVar5->Data;
  *(ulonglong *)(pFVar6 + lVar8) = CONCAT44(uVar11,uVar10);
  *(ulonglong *)(pFVar6 + lVar8 + 8) = CONCAT44(uVar13,uVar12);
  *(ulonglong *)(pFVar6 + lVar8 + 0x10) = CONCAT44(uVar15,uVar14);
  pFVar2 = pFVar6 + lVar8 + 0x18;
  *(undefined4 *)pFVar2 = uVar16;
  *(undefined4 *)(pFVar2 + 4) = uVar17;
  *(undefined4 *)(pFVar2 + 8) = uVar18;
  *(undefined4 *)(pFVar2 + 0xc) = uVar19;
  pFVar6[lVar8 + 0x30] = (FScriptContainerElement)0x1;
  *(double *)(pFVar6 + lVar8 + 0x28) = dVar9;
  return true;
}

// Call @ 143da32a0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FPhysicsObjectCollisionInterface<0>::PhysicsObjectOverlapWithAABBIntersections'::__l2::<lambda_1>,bool,Chaos::FPhysicsObjectCollisionInterface<0>::FShapeOverlapData_const_&,Chaos::FPhysicsObjectCollisionInterface<0>::FShapeOverlapData_const_&,Chaos::FMTDInfo_const_&>
::Call(void *param_1,FShapeOverlapData *param_2,FShapeOverlapData *param_3,FMTDInfo *param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  double dVar4;
  ForAnyElementType *pFVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  longlong lVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  
  pFVar5 = *(ForAnyElementType **)param_1;
  dVar9 = *(double *)&(param_2->BoundingBox).MMax.field_0x10;
  dVar3 = *(double *)&(param_3->BoundingBox).MMax.field_0x10;
  if (dVar3 <= dVar9) {
    dVar9 = dVar3;
  }
  dVar3 = *(double *)&(param_3->BoundingBox).MMin;
  uVar10 = SUB84(dVar3,0);
  uVar11 = (undefined4)((ulonglong)dVar3 >> 0x20);
  dVar4 = *(double *)&(param_2->BoundingBox).MMin;
  if (dVar3 <= dVar4) {
    uVar10 = SUB84(dVar4,0);
    uVar11 = (undefined4)((ulonglong)dVar4 >> 0x20);
  }
  dVar3 = *(double *)&(param_3->BoundingBox).MMin.field_0x8;
  uVar12 = SUB84(dVar3,0);
  uVar13 = (undefined4)((ulonglong)dVar3 >> 0x20);
  dVar4 = *(double *)&(param_2->BoundingBox).MMin.field_0x8;
  if (dVar3 <= dVar4) {
    uVar12 = SUB84(dVar4,0);
    uVar13 = (undefined4)((ulonglong)dVar4 >> 0x20);
  }
  dVar3 = *(double *)&(param_3->BoundingBox).MMin.field_0x10;
  uVar14 = SUB84(dVar3,0);
  uVar15 = (undefined4)((ulonglong)dVar3 >> 0x20);
  dVar4 = *(double *)&(param_2->BoundingBox).MMin.field_0x10;
  if (dVar3 <= dVar4) {
    uVar14 = SUB84(dVar4,0);
    uVar15 = (undefined4)((ulonglong)dVar4 >> 0x20);
  }
  dVar3 = *(double *)&(param_3->BoundingBox).MMax;
  uVar16 = SUB84(dVar3,0);
  uVar17 = (undefined4)((ulonglong)dVar3 >> 0x20);
  dVar4 = *(double *)&(param_2->BoundingBox).MMax;
  if (dVar4 <= dVar3) {
    uVar16 = SUB84(dVar4,0);
    uVar17 = (undefined4)((ulonglong)dVar4 >> 0x20);
  }
  dVar3 = *(double *)&(param_2->BoundingBox).MMax.field_0x8;
  uVar18 = SUB84(dVar3,0);
  uVar19 = (undefined4)((ulonglong)dVar3 >> 0x20);
  dVar4 = *(double *)&(param_3->BoundingBox).MMax.field_0x8;
  if (dVar4 <= dVar3) {
    uVar18 = SUB84(dVar4,0);
    uVar19 = (undefined4)((ulonglong)dVar4 >> 0x20);
  }
  piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
  iVar7 = *(int *)&pFVar5[1].Data;
  if (iVar7 == *piVar1) {
    iVar7 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,pFVar5,piVar1);
  }
  *(int *)&pFVar5[1].Data = iVar7 + 1;
  lVar8 = (longlong)iVar7 * 0x38;
  pFVar6 = pFVar5->Data;
  *(ulonglong *)(pFVar6 + lVar8) = CONCAT44(uVar11,uVar10);
  *(ulonglong *)(pFVar6 + lVar8 + 8) = CONCAT44(uVar13,uVar12);
  *(ulonglong *)(pFVar6 + lVar8 + 0x10) = CONCAT44(uVar15,uVar14);
  pFVar2 = pFVar6 + lVar8 + 0x18;
  *(undefined4 *)pFVar2 = uVar16;
  *(undefined4 *)(pFVar2 + 4) = uVar17;
  *(undefined4 *)(pFVar2 + 8) = uVar18;
  *(undefined4 *)(pFVar2 + 0xc) = uVar19;
  pFVar6[lVar8 + 0x30] = (FScriptContainerElement)0x1;
  *(double *)(pFVar6 + lVar8 + 0x28) = dVar9;
  return true;
}

// Call @ 143da32b0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FPhysicsObjectCollisionInterface<1>::PhysicsObjectOverlapWithAABBSize'::__l2::<lambda_1>,bool,Chaos::FPhysicsObjectCollisionInterface<1>::FShapeOverlapData_const_&,Chaos::FPhysicsObjectCollisionInterface<1>::FShapeOverlapData_const_&,Chaos::FMTDInfo_const_&>
::Call(void *param_1,FShapeOverlapData *param_2,FShapeOverlapData *param_3,FMTDInfo *param_4)

{
  double dVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  pdVar2 = *(double **)param_1;
  dVar3 = *(double *)&(param_3->BoundingBox).MMin.field_0x10;
  dVar8 = *(double *)&(param_2->BoundingBox).MMin.field_0x10;
  if (dVar3 <= dVar8) {
    dVar3 = dVar8;
  }
  dVar8 = *(double *)&(param_2->BoundingBox).MMax.field_0x10;
  dVar7 = *(double *)&(param_3->BoundingBox).MMax.field_0x10;
  if (dVar7 <= dVar8) {
    dVar8 = dVar7;
  }
  dVar7 = *(double *)&(param_2->BoundingBox).MMax.field_0x8;
  dVar6 = *(double *)&(param_3->BoundingBox).MMax.field_0x8;
  if (dVar6 <= dVar7) {
    dVar7 = dVar6;
  }
  dVar6 = *(double *)&(param_3->BoundingBox).MMax;
  dVar4 = *(double *)&(param_2->BoundingBox).MMax;
  if (dVar4 <= dVar6) {
    dVar6 = dVar4;
  }
  dVar4 = *(double *)&(param_3->BoundingBox).MMin.field_0x8;
  dVar5 = *(double *)&(param_2->BoundingBox).MMin.field_0x8;
  if (dVar4 <= dVar5) {
    dVar4 = dVar5;
  }
  dVar5 = *(double *)&(param_3->BoundingBox).MMin;
  dVar1 = *(double *)&(param_2->BoundingBox).MMin;
  if (dVar5 <= dVar1) {
    dVar5 = dVar1;
  }
  pdVar2[2] = (dVar8 - dVar3) + pdVar2[2];
  pdVar2[1] = (dVar7 - dVar4) + pdVar2[1];
  *pdVar2 = (dVar6 - dVar5) + *pdVar2;
  return true;
}

// Call @ 143da3330

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FPhysicsObjectCollisionInterface<0>::PhysicsObjectOverlapWithAABBSize'::__l2::<lambda_1>,bool,Chaos::FPhysicsObjectCollisionInterface<0>::FShapeOverlapData_const_&,Chaos::FPhysicsObjectCollisionInterface<0>::FShapeOverlapData_const_&,Chaos::FMTDInfo_const_&>
::Call(void *param_1,FShapeOverlapData *param_2,FShapeOverlapData *param_3,FMTDInfo *param_4)

{
  double dVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  pdVar2 = *(double **)param_1;
  dVar3 = *(double *)&(param_3->BoundingBox).MMin.field_0x10;
  dVar8 = *(double *)&(param_2->BoundingBox).MMin.field_0x10;
  if (dVar3 <= dVar8) {
    dVar3 = dVar8;
  }
  dVar8 = *(double *)&(param_2->BoundingBox).MMax.field_0x10;
  dVar7 = *(double *)&(param_3->BoundingBox).MMax.field_0x10;
  if (dVar7 <= dVar8) {
    dVar8 = dVar7;
  }
  dVar7 = *(double *)&(param_2->BoundingBox).MMax.field_0x8;
  dVar6 = *(double *)&(param_3->BoundingBox).MMax.field_0x8;
  if (dVar6 <= dVar7) {
    dVar7 = dVar6;
  }
  dVar6 = *(double *)&(param_3->BoundingBox).MMax;
  dVar4 = *(double *)&(param_2->BoundingBox).MMax;
  if (dVar4 <= dVar6) {
    dVar6 = dVar4;
  }
  dVar4 = *(double *)&(param_3->BoundingBox).MMin.field_0x8;
  dVar5 = *(double *)&(param_2->BoundingBox).MMin.field_0x8;
  if (dVar4 <= dVar5) {
    dVar4 = dVar5;
  }
  dVar5 = *(double *)&(param_3->BoundingBox).MMin;
  dVar1 = *(double *)&(param_2->BoundingBox).MMin;
  if (dVar5 <= dVar1) {
    dVar5 = dVar1;
  }
  pdVar2[2] = (dVar8 - dVar3) + pdVar2[2];
  pdVar2[1] = (dVar7 - dVar4) + pdVar2[1];
  *pdVar2 = (dVar6 - dVar5) + *pdVar2;
  return true;
}

// Call @ 143da33b0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FPhysicsObjectCollisionInterface<1>::PhysicsObjectOverlapWithMTD'::__l2::<lambda_1>,bool,Chaos::FPhysicsObjectCollisionInterface<1>::FShapeOverlapData_const_&,Chaos::FPhysicsObjectCollisionInterface<1>::FShapeOverlapData_const_&,Chaos::FMTDInfo_const_&>
::Call(void *param_1,FShapeOverlapData *param_2,FShapeOverlapData *param_3,FMTDInfo *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)param_1;
  if ((double)puVar1[6] < param_4->Penetration) {
    uVar2 = *(undefined8 *)&(param_4->Normal).field_0x8;
    *puVar1 = *(undefined8 *)&param_4->Normal;
    puVar1[1] = uVar2;
    uVar2 = *(undefined8 *)&param_4->Position;
    puVar1[2] = *(undefined8 *)&(param_4->Normal).field_0x10;
    puVar1[3] = uVar2;
    uVar2 = *(undefined8 *)&(param_4->Position).field_0x10;
    puVar1[4] = *(undefined8 *)&(param_4->Position).field_0x8;
    puVar1[5] = uVar2;
    puVar1[6] = param_4->Penetration;
  }
  return true;
}

// Call @ 143da33f0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FPhysicsObjectCollisionInterface<0>::PhysicsObjectOverlapWithMTD'::__l2::<lambda_1>,bool,Chaos::FPhysicsObjectCollisionInterface<0>::FShapeOverlapData_const_&,Chaos::FPhysicsObjectCollisionInterface<0>::FShapeOverlapData_const_&,Chaos::FMTDInfo_const_&>
::Call(void *param_1,FShapeOverlapData *param_2,FShapeOverlapData *param_3,FMTDInfo *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)param_1;
  if ((double)puVar1[6] < param_4->Penetration) {
    uVar2 = *(undefined8 *)&(param_4->Normal).field_0x8;
    *puVar1 = *(undefined8 *)&param_4->Normal;
    puVar1[1] = uVar2;
    uVar2 = *(undefined8 *)&param_4->Position;
    puVar1[2] = *(undefined8 *)&(param_4->Normal).field_0x10;
    puVar1[3] = uVar2;
    uVar2 = *(undefined8 *)&(param_4->Position).field_0x10;
    puVar1[4] = *(undefined8 *)&(param_4->Position).field_0x8;
    puVar1[5] = uVar2;
    puVar1[6] = param_4->Penetration;
  }
  return true;
}

// Call @ 143da3430

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPerParticlePBDCollisionConstraint::ApplyHelper<1>'::__l5::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPerParticlePBDCollisionConstraint::ApplyHelper<1>'::__l5::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143da3440

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPerParticlePBDCollisionConstraint::ApplyHelper<0>'::__l5::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPerParticlePBDCollisionConstraint::ApplyHelper<0>'::__l5::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143da3450

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FWritePhysicsObjectInterface<1>::AddRadialImpulse'::__l5::<lambda_1>,void>
::Call(void *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  FGeometryCollectionPhysicsProxy *this;
  longlong lVar6;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar7;
  FPBDRigidsSOAs *this_00;
  float fVar8;
  EObjectStateType EVar9;
  bool bVar10;
  TGeometryParticleHandleImp<double,3,1> *pTVar11;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar12;
  ulonglong uVar13;
  TGeometryParticleHandleImp<double,3,1> *pTVar14;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar15;
  FScriptContainerElement *pFVar16;
  longlong *plVar17;
  longlong *plVar18;
  float fVar19;
  float fVar20;
  undefined1 auStackX_8 [8];
  uint uStackX_10;
  longlong *plStackX_18;
  
  fVar8 = __real_3f800000;
  plVar18 = *(longlong **)param_1;
  uStackX_10 = *(uint *)((longlong)param_1 + 8);
  uVar13 = (ulonglong)(int)uStackX_10;
  plVar17 = plVar18 + uVar13;
  plStackX_18 = plVar17;
  do {
    if (*(int *)((longlong)param_1 + 8) != (int)uVar13) {
      `TCheckedPointerIterator<Chaos::FPhysicsObject_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(auStackX_8);
    }
    if (plVar18 == plVar17) {
      return;
    }
    puVar5 = (undefined8 *)*plVar18;
    if ((puVar5 != (undefined8 *)0x0) &&
       (this = (FGeometryCollectionPhysicsProxy *)*puVar5,
       this != (FGeometryCollectionPhysicsProxy *)0x0)) {
      iVar4 = *(int *)&this->field_0x1c;
      if (iVar4 == 2) {
        pTVar11 = (TGeometryParticleHandleImp<double,3,1> *)
                  FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                            (this,*(int *)(puVar5 + 1));
      }
      else if (iVar4 == 0xb) {
        pTVar11 = *(TGeometryParticleHandleImp<double,3,1> **)&(this->Parameters).Name.Data.ArrayNum
        ;
      }
      else {
        if (iVar4 != 0xc) goto LAB_143d9698b;
        pTVar11 = *(TGeometryParticleHandleImp<double,3,1> **)
                   &(this->Parameters).InitializationCommands.ArrayNum;
      }
      if (pTVar11 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        bVar3 = *(byte *)((longlong)&pTVar11->_padding_ + 4);
        pTVar14 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
        if (2 < bVar3) {
          pTVar14 = pTVar11;
        }
        if ((pTVar14 == (TGeometryParticleHandleImp<double,3,1> *)0x0) ||
           (*(char *)((longlong)param_1 + 0x3c) == '\0')) {
          pTVar14 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
          if (1 < bVar3) {
            pTVar14 = pTVar11;
          }
          if ((pTVar14 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
             (EVar9 = ::Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                                ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar14),
             EVar9 == Sleeping)) {
            ::Chaos::FPBDRigidsEvolutionBase::SetParticleObjectState
                      (*(FPBDRigidsEvolutionBase **)
                        (*(longlong *)((longlong)param_1 + 0x10) + 0xbd0),
                       (TPBDRigidParticleHandleImp<double,3,1> *)pTVar14,Dynamic);
            pTVar11 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
            if (1 < *(byte *)((longlong)&pTVar14->_padding_ + 4)) {
              pTVar11 = pTVar14;
            }
            this_00 = *(FPBDRigidsSOAs **)
                       (*(longlong *)(*(longlong *)((longlong)param_1 + 0x10) + 0xbd0) + 0x2d8);
            if (((pTVar11 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
                (bVar10 = ::Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                          ::Contains(&this_00->ActiveParticlesMapArray,
                                     (TPBDRigidParticleHandleImp<double,3,1> *)pTVar11), !bVar10))
               && (bVar10 = ::Chaos::
                            TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>::
                            Contains(&this_00->MovingKinematicsMapArray,
                                     (TPBDRigidParticleHandleImp<double,3,1> *)pTVar11), !bVar10)) {
              ::Chaos::FPBDRigidsSOAs::
              AddToList<Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>,Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                        (this_00,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar11,
                         &this_00->TransientDirtyMapArray);
              if (::Chaos::CVars::bChaosSolverCheckParticleViews != false) {
                ::Chaos::FPBDRigidsSOAs::CheckParticleViewMaskImpl(this_00,pTVar14);
              }
              ::Chaos::FPBDRigidsSOAs::UpdateViews(this_00);
            }
          }
          ::`anonymous_namespace'::
          AddRadialImpulseHelper<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>
                    ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar14,
                     (TVector<double> *)((longlong)param_1 + 0x18),
                     *(float *)((longlong)param_1 + 0x30),*(float *)((longlong)param_1 + 0x34),
                     *(ERadialImpulseFalloff *)((longlong)param_1 + 0x38),fVar8,
                     *(bool *)((longlong)param_1 + 0x44),*(bool *)((longlong)param_1 + 0x45),
                     *(float *)((longlong)param_1 + 0x48),*(float *)((longlong)param_1 + 0x4c));
          plVar17 = plStackX_18;
        }
        else {
          lVar6 = *(longlong *)(*(longlong *)((longlong)param_1 + 0x10) + 0xbd0);
          pTVar12 = TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
                    ::Find((TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
                            *)(lVar6 + 0x610),
                           (TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar14);
          if (pTVar12 !=
              (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *
              )0x0) {
            piVar1 = &pTVar12->ArrayNum;
            fVar20 = fVar8;
            if (PhysicsObjectInterfaceCVars::RadialImpulseDistributeToChildren != false) {
              fVar20 = fVar8 / (float)*piVar1;
            }
            pFVar16 = (pTVar12->AllocatorInstance).Data;
            iVar4 = *piVar1;
            pFVar2 = pFVar16 + (longlong)iVar4 * 8;
            while( true ) {
              if (*piVar1 != iVar4) {
                `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>::
                operator!='::__l2::<lambda_1>::operator()(auStackX_8);
              }
              plVar17 = plStackX_18;
              if (pFVar16 == pFVar2) break;
              pTVar7 = *(TPBDRigidParticleHandleImp<double,3,1> **)pFVar16;
              fVar19 = ::`anonymous_namespace'::
                       AddRadialImpulseHelper<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>
                                 (pTVar7,(TVector<double> *)((longlong)param_1 + 0x18),
                                  *(float *)((longlong)param_1 + 0x30),
                                  *(float *)((longlong)param_1 + 0x34),
                                  *(ERadialImpulseFalloff *)((longlong)param_1 + 0x38),fVar20,
                                  *(bool *)((longlong)param_1 + 0x44),
                                  *(bool *)((longlong)param_1 + 0x45),
                                  *(float *)((longlong)param_1 + 0x48),
                                  *(float *)((longlong)param_1 + 0x4c));
              if (0.0 <= *(float *)((longlong)param_1 + 0x40)) {
                fVar19 = *(float *)((longlong)param_1 + 0x40) * fVar19;
              }
              else {
                fVar19 = PhysicsObjectInterfaceCVars::StrainModifier * fVar19 *
                         *(float *)((longlong)param_1 + 0x34);
              }
              if (0.0 < fVar19) {
                pTVar15 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
                if (2 < (byte)pTVar7->field_0xc) {
                  pTVar15 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar7;
                }
                ::Chaos::FRigidClustering::SetExternalStrain
                          ((FRigidClustering *)(lVar6 + 0x548),pTVar15,fVar19);
              }
              pFVar16 = pFVar16 + 8;
            }
          }
        }
      }
    }
LAB_143d9698b:
    uVar13 = (ulonglong)uStackX_10;
    plVar18 = plVar18 + 1;
  } while( true );
}

// Call @ 143da3460

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FWritePhysicsObjectInterface<0>::AddRadialImpulse'::__l5::<lambda_1>,void>
::Call(void *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  FGeometryCollectionPhysicsProxy *this;
  longlong lVar6;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar7;
  FPBDRigidsSOAs *this_00;
  float fVar8;
  EObjectStateType EVar9;
  bool bVar10;
  TGeometryParticleHandleImp<double,3,1> *pTVar11;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar12;
  ulonglong uVar13;
  TGeometryParticleHandleImp<double,3,1> *pTVar14;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar15;
  FScriptContainerElement *pFVar16;
  longlong *plVar17;
  longlong *plVar18;
  float fVar19;
  float fVar20;
  undefined1 auStackX_8 [8];
  uint uStackX_10;
  longlong *plStackX_18;
  
  fVar8 = __real_3f800000;
  plVar18 = *(longlong **)param_1;
  uStackX_10 = *(uint *)((longlong)param_1 + 8);
  uVar13 = (ulonglong)(int)uStackX_10;
  plVar17 = plVar18 + uVar13;
  plStackX_18 = plVar17;
  do {
    if (*(int *)((longlong)param_1 + 8) != (int)uVar13) {
      `TCheckedPointerIterator<Chaos::FPhysicsObject_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(auStackX_8);
    }
    if (plVar18 == plVar17) {
      return;
    }
    puVar5 = (undefined8 *)*plVar18;
    if ((puVar5 != (undefined8 *)0x0) &&
       (this = (FGeometryCollectionPhysicsProxy *)*puVar5,
       this != (FGeometryCollectionPhysicsProxy *)0x0)) {
      iVar4 = *(int *)&this->field_0x1c;
      if (iVar4 == 2) {
        pTVar11 = (TGeometryParticleHandleImp<double,3,1> *)
                  FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                            (this,*(int *)(puVar5 + 1));
      }
      else if (iVar4 == 0xb) {
        pTVar11 = *(TGeometryParticleHandleImp<double,3,1> **)&(this->Parameters).Name.Data.ArrayNum
        ;
      }
      else {
        if (iVar4 != 0xc) goto LAB_143d96cab;
        pTVar11 = *(TGeometryParticleHandleImp<double,3,1> **)
                   &(this->Parameters).InitializationCommands.ArrayNum;
      }
      if (pTVar11 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        bVar3 = *(byte *)((longlong)&pTVar11->_padding_ + 4);
        pTVar14 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
        if (2 < bVar3) {
          pTVar14 = pTVar11;
        }
        if ((pTVar14 == (TGeometryParticleHandleImp<double,3,1> *)0x0) ||
           (*(char *)((longlong)param_1 + 0x3c) == '\0')) {
          pTVar14 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
          if (1 < bVar3) {
            pTVar14 = pTVar11;
          }
          if ((pTVar14 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
             (EVar9 = ::Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                                ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar14),
             EVar9 == Sleeping)) {
            ::Chaos::FPBDRigidsEvolutionBase::SetParticleObjectState
                      (*(FPBDRigidsEvolutionBase **)
                        (*(longlong *)((longlong)param_1 + 0x10) + 0xbd0),
                       (TPBDRigidParticleHandleImp<double,3,1> *)pTVar14,Dynamic);
            pTVar11 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
            if (1 < *(byte *)((longlong)&pTVar14->_padding_ + 4)) {
              pTVar11 = pTVar14;
            }
            this_00 = *(FPBDRigidsSOAs **)
                       (*(longlong *)(*(longlong *)((longlong)param_1 + 0x10) + 0xbd0) + 0x2d8);
            if (((pTVar11 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
                (bVar10 = ::Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                          ::Contains(&this_00->ActiveParticlesMapArray,
                                     (TPBDRigidParticleHandleImp<double,3,1> *)pTVar11), !bVar10))
               && (bVar10 = ::Chaos::
                            TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>::
                            Contains(&this_00->MovingKinematicsMapArray,
                                     (TPBDRigidParticleHandleImp<double,3,1> *)pTVar11), !bVar10)) {
              ::Chaos::FPBDRigidsSOAs::
              AddToList<Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>,Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                        (this_00,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar11,
                         &this_00->TransientDirtyMapArray);
              if (::Chaos::CVars::bChaosSolverCheckParticleViews != false) {
                ::Chaos::FPBDRigidsSOAs::CheckParticleViewMaskImpl(this_00,pTVar14);
              }
              ::Chaos::FPBDRigidsSOAs::UpdateViews(this_00);
            }
          }
          ::`anonymous_namespace'::
          AddRadialImpulseHelper<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>
                    ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar14,
                     (TVector<double> *)((longlong)param_1 + 0x18),
                     *(float *)((longlong)param_1 + 0x30),*(float *)((longlong)param_1 + 0x34),
                     *(ERadialImpulseFalloff *)((longlong)param_1 + 0x38),fVar8,
                     *(bool *)((longlong)param_1 + 0x44),*(bool *)((longlong)param_1 + 0x45),
                     *(float *)((longlong)param_1 + 0x48),*(float *)((longlong)param_1 + 0x4c));
          plVar17 = plStackX_18;
        }
        else {
          lVar6 = *(longlong *)(*(longlong *)((longlong)param_1 + 0x10) + 0xbd0);
          pTVar12 = TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
                    ::Find((TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
                            *)(lVar6 + 0x610),
                           (TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar14);
          if (pTVar12 !=
              (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *
              )0x0) {
            piVar1 = &pTVar12->ArrayNum;
            fVar20 = fVar8;
            if (PhysicsObjectInterfaceCVars::RadialImpulseDistributeToChildren != false) {
              fVar20 = fVar8 / (float)*piVar1;
            }
            pFVar16 = (pTVar12->AllocatorInstance).Data;
            iVar4 = *piVar1;
            pFVar2 = pFVar16 + (longlong)iVar4 * 8;
            while( true ) {
              if (*piVar1 != iVar4) {
                `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>::
                operator!='::__l2::<lambda_1>::operator()(auStackX_8);
              }
              plVar17 = plStackX_18;
              if (pFVar16 == pFVar2) break;
              pTVar7 = *(TPBDRigidParticleHandleImp<double,3,1> **)pFVar16;
              fVar19 = ::`anonymous_namespace'::
                       AddRadialImpulseHelper<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>
                                 (pTVar7,(TVector<double> *)((longlong)param_1 + 0x18),
                                  *(float *)((longlong)param_1 + 0x30),
                                  *(float *)((longlong)param_1 + 0x34),
                                  *(ERadialImpulseFalloff *)((longlong)param_1 + 0x38),fVar20,
                                  *(bool *)((longlong)param_1 + 0x44),
                                  *(bool *)((longlong)param_1 + 0x45),
                                  *(float *)((longlong)param_1 + 0x48),
                                  *(float *)((longlong)param_1 + 0x4c));
              if (0.0 <= *(float *)((longlong)param_1 + 0x40)) {
                fVar19 = *(float *)((longlong)param_1 + 0x40) * fVar19;
              }
              else {
                fVar19 = PhysicsObjectInterfaceCVars::StrainModifier * fVar19 *
                         *(float *)((longlong)param_1 + 0x34);
              }
              if (0.0 < fVar19) {
                pTVar15 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
                if (2 < (byte)pTVar7->field_0xc) {
                  pTVar15 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar7;
                }
                ::Chaos::FRigidClustering::SetExternalStrain
                          ((FRigidClustering *)(lVar6 + 0x548),pTVar15,fVar19);
              }
              pFVar16 = pFVar16 + 8;
            }
          }
        }
      }
    }
LAB_143d96cab:
    uVar13 = (ulonglong)uStackX_10;
    plVar18 = plVar18 + 1;
  } while( true );
}

// Call @ 143da3470

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FWritePhysicsObjectInterface<1>::SetAngularEtherDrag'::__l5::<lambda_1>,void>
::Call(void *param_1)

{
  longlong *plVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  FGeometryCollectionPhysicsProxy *this;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar11;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar12;
  longlong *plVar13;
  undefined1 auStackX_8 [8];
  
  plVar13 = *(longlong **)param_1;
  iVar3 = *(int *)((longlong)param_1 + 8);
  plVar1 = plVar13 + iVar3;
  do {
    if (*(int *)((longlong)param_1 + 8) != iVar3) {
      auStackX_8[0] = 0;
      `TCheckedPointerIterator<Chaos::FPhysicsObject_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(auStackX_8);
    }
    if (plVar13 == plVar1) {
      return;
    }
    puVar6 = (undefined8 *)*plVar13;
    if ((puVar6 != (undefined8 *)0x0) &&
       (this = (FGeometryCollectionPhysicsProxy *)*puVar6,
       this != (FGeometryCollectionPhysicsProxy *)0x0)) {
      iVar4 = *(int *)&this->field_0x1c;
      if (iVar4 == 2) {
        pTVar11 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                            (this,*(int *)(puVar6 + 1));
      }
      else if (iVar4 == 0xb) {
        pTVar11 = *(TPBDRigidParticleHandleImp<double,3,1> **)&(this->Parameters).Name.Data.ArrayNum
        ;
      }
      else {
        if (iVar4 != 0xc) goto LAB_143d96e00;
        pTVar11 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                   &(this->Parameters).InitializationCommands.ArrayNum;
      }
      if (pTVar11 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        pTVar12 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
        if (1 < (byte)pTVar11->field_0xc) {
          pTVar12 = pTVar11;
        }
        if (pTVar12 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
          uVar5 = *(uint *)&pTVar12->field_0x8;
          lVar7 = *(longlong *)pTVar12;
          fVar2 = *(float *)((longlong)param_1 + 0x10);
          uVar10 = 0;
          if ((int)uVar5 < *(int *)(lVar7 + 0x448)) {
            uVar10 = ~uVar5 >> 0x1f;
          }
          if (uVar10 == 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar9) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          *(double *)(*(longlong *)(lVar7 + 0x440) + (longlong)(int)uVar5 * 8) = (double)fVar2;
        }
      }
    }
LAB_143d96e00:
    plVar13 = plVar13 + 1;
  } while( true );
}

// Call @ 143da3480

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FWritePhysicsObjectInterface<0>::SetAngularEtherDrag'::__l5::<lambda_1>,void>
::Call(void *param_1)

{
  longlong *plVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  FGeometryCollectionPhysicsProxy *this;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar11;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar12;
  longlong *plVar13;
  undefined1 auStackX_8 [8];
  
  plVar13 = *(longlong **)param_1;
  iVar3 = *(int *)((longlong)param_1 + 8);
  plVar1 = plVar13 + iVar3;
  do {
    if (*(int *)((longlong)param_1 + 8) != iVar3) {
      auStackX_8[0] = 0;
      `TCheckedPointerIterator<Chaos::FPhysicsObject_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(auStackX_8);
    }
    if (plVar13 == plVar1) {
      return;
    }
    puVar6 = (undefined8 *)*plVar13;
    if ((puVar6 != (undefined8 *)0x0) &&
       (this = (FGeometryCollectionPhysicsProxy *)*puVar6,
       this != (FGeometryCollectionPhysicsProxy *)0x0)) {
      iVar4 = *(int *)&this->field_0x1c;
      if (iVar4 == 2) {
        pTVar11 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                            (this,*(int *)(puVar6 + 1));
      }
      else if (iVar4 == 0xb) {
        pTVar11 = *(TPBDRigidParticleHandleImp<double,3,1> **)&(this->Parameters).Name.Data.ArrayNum
        ;
      }
      else {
        if (iVar4 != 0xc) goto LAB_143d96f40;
        pTVar11 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                   &(this->Parameters).InitializationCommands.ArrayNum;
      }
      if (pTVar11 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        pTVar12 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
        if (1 < (byte)pTVar11->field_0xc) {
          pTVar12 = pTVar11;
        }
        if (pTVar12 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
          uVar5 = *(uint *)&pTVar12->field_0x8;
          lVar7 = *(longlong *)pTVar12;
          fVar2 = *(float *)((longlong)param_1 + 0x10);
          uVar10 = 0;
          if ((int)uVar5 < *(int *)(lVar7 + 0x448)) {
            uVar10 = ~uVar5 >> 0x1f;
          }
          if (uVar10 == 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar9) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          *(double *)(*(longlong *)(lVar7 + 0x440) + (longlong)(int)uVar5 * 8) = (double)fVar2;
        }
      }
    }
LAB_143d96f40:
    plVar13 = plVar13 + 1;
  } while( true );
}

// Call @ 143da3490

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FWritePhysicsObjectInterface<1>::SetLinearEtherDrag'::__l5::<lambda_1>,void>
::Call(void *param_1)

{
  longlong *plVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  FGeometryCollectionPhysicsProxy *this;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar11;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar12;
  longlong *plVar13;
  undefined1 auStackX_8 [8];
  
  plVar13 = *(longlong **)param_1;
  iVar3 = *(int *)((longlong)param_1 + 8);
  plVar1 = plVar13 + iVar3;
  do {
    if (*(int *)((longlong)param_1 + 8) != iVar3) {
      auStackX_8[0] = 0;
      `TCheckedPointerIterator<Chaos::FPhysicsObject_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(auStackX_8);
    }
    if (plVar13 == plVar1) {
      return;
    }
    puVar6 = (undefined8 *)*plVar13;
    if ((puVar6 != (undefined8 *)0x0) &&
       (this = (FGeometryCollectionPhysicsProxy *)*puVar6,
       this != (FGeometryCollectionPhysicsProxy *)0x0)) {
      iVar4 = *(int *)&this->field_0x1c;
      if (iVar4 == 2) {
        pTVar11 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                            (this,*(int *)(puVar6 + 1));
      }
      else if (iVar4 == 0xb) {
        pTVar11 = *(TPBDRigidParticleHandleImp<double,3,1> **)&(this->Parameters).Name.Data.ArrayNum
        ;
      }
      else {
        if (iVar4 != 0xc) goto LAB_143d97080;
        pTVar11 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                   &(this->Parameters).InitializationCommands.ArrayNum;
      }
      if (pTVar11 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        pTVar12 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
        if (1 < (byte)pTVar11->field_0xc) {
          pTVar12 = pTVar11;
        }
        if (pTVar12 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
          uVar5 = *(uint *)&pTVar12->field_0x8;
          lVar7 = *(longlong *)pTVar12;
          fVar2 = *(float *)((longlong)param_1 + 0x10);
          uVar10 = 0;
          if ((int)uVar5 < *(int *)(lVar7 + 0x430)) {
            uVar10 = ~uVar5 >> 0x1f;
          }
          if (uVar10 == 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar9) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          *(double *)(*(longlong *)(lVar7 + 0x428) + (longlong)(int)uVar5 * 8) = (double)fVar2;
        }
      }
    }
LAB_143d97080:
    plVar13 = plVar13 + 1;
  } while( true );
}

// Call @ 143da34a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FWritePhysicsObjectInterface<0>::SetLinearEtherDrag'::__l5::<lambda_1>,void>
::Call(void *param_1)

{
  longlong *plVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  FGeometryCollectionPhysicsProxy *this;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar11;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar12;
  longlong *plVar13;
  undefined1 auStackX_8 [8];
  
  plVar13 = *(longlong **)param_1;
  iVar3 = *(int *)((longlong)param_1 + 8);
  plVar1 = plVar13 + iVar3;
  do {
    if (*(int *)((longlong)param_1 + 8) != iVar3) {
      auStackX_8[0] = 0;
      `TCheckedPointerIterator<Chaos::FPhysicsObject_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(auStackX_8);
    }
    if (plVar13 == plVar1) {
      return;
    }
    puVar6 = (undefined8 *)*plVar13;
    if ((puVar6 != (undefined8 *)0x0) &&
       (this = (FGeometryCollectionPhysicsProxy *)*puVar6,
       this != (FGeometryCollectionPhysicsProxy *)0x0)) {
      iVar4 = *(int *)&this->field_0x1c;
      if (iVar4 == 2) {
        pTVar11 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                            (this,*(int *)(puVar6 + 1));
      }
      else if (iVar4 == 0xb) {
        pTVar11 = *(TPBDRigidParticleHandleImp<double,3,1> **)&(this->Parameters).Name.Data.ArrayNum
        ;
      }
      else {
        if (iVar4 != 0xc) goto LAB_143d971c0;
        pTVar11 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                   &(this->Parameters).InitializationCommands.ArrayNum;
      }
      if (pTVar11 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        pTVar12 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
        if (1 < (byte)pTVar11->field_0xc) {
          pTVar12 = pTVar11;
        }
        if (pTVar12 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
          uVar5 = *(uint *)&pTVar12->field_0x8;
          lVar7 = *(longlong *)pTVar12;
          fVar2 = *(float *)((longlong)param_1 + 0x10);
          uVar10 = 0;
          if ((int)uVar5 < *(int *)(lVar7 + 0x430)) {
            uVar10 = ~uVar5 >> 0x1f;
          }
          if (uVar10 == 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar9) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          *(double *)(*(longlong *)(lVar7 + 0x428) + (longlong)(int)uVar5 * 8) = (double)fVar2;
        }
      }
    }
LAB_143d971c0:
    plVar13 = plVar13 + 1;
  } while( true );
}

// Call @ 143da34b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l17::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  ::Chaos::Softs::FPBDSpringConstraints::ApplyHelper<Chaos::Softs::FSolverParticles>
            (*(FPBDSpringConstraints **)param_1,*(FSolverParticles **)((longlong)param_1 + 8),
             *(float *)((longlong)param_1 + 0x10),*(int *)((longlong)param_1 + 0x14) + *param_2,
             *(float *)((longlong)param_1 + 0x18));
  return;
}

// Call @ 143da34f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l17::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  ::Chaos::Softs::FPBDSpringConstraints::ApplyHelper<Chaos::Softs::FSolverParticlesRange>
            (*(FPBDSpringConstraints **)param_1,*(FSolverParticlesRange **)((longlong)param_1 + 8),
             *(float *)((longlong)param_1 + 0x10),*(int *)((longlong)param_1 + 0x14) + *param_2,
             *(float *)((longlong)param_1 + 0x18));
  return;
}

// Call @ 143da3530

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPerParticlePBDCollisionConstraint::ApplyHelperISPC'::__l19::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPerParticlePBDCollisionConstraint::ApplyHelperISPC'::__l19::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143da3540

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``anonymous_namespace'::SetParticleStateHelper<0>'::__l23::<lambda_1>,void>::Call
          (void *param_1)

{
  EObjectStateType EVar1;
  int iVar2;
  undefined8 *puVar3;
  FGeometryCollectionPhysicsProxy *this;
  FPBDRigidsEvolutionBase *this_00;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar4;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar5;
  
  puVar3 = *(undefined8 **)param_1;
  EVar1 = *(EObjectStateType *)((longlong)param_1 + 8);
  if ((puVar3 != (undefined8 *)0x0) &&
     (this = (FGeometryCollectionPhysicsProxy *)*puVar3,
     this != (FGeometryCollectionPhysicsProxy *)0x0)) {
    iVar2 = *(int *)&this->field_0x1c;
    if (iVar2 == 2) {
      pTVar4 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                         (this,*(int *)(puVar3 + 1));
    }
    else if (iVar2 == 0xb) {
      pTVar4 = *(TPBDRigidParticleHandleImp<double,3,1> **)&(this->Parameters).Name.Data.ArrayNum;
    }
    else {
      if (iVar2 != 0xc) {
        return;
      }
      pTVar4 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                &(this->Parameters).InitializationCommands.ArrayNum;
    }
    if (pTVar4 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
      pTVar5 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
      if (1 < (byte)pTVar4->field_0xc) {
        pTVar5 = pTVar4;
      }
      if (((pTVar5 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) &&
          (*(longlong *)&this->field_0x8 != 0)) &&
         (this_00 = *(FPBDRigidsEvolutionBase **)(*(longlong *)&this->field_0x8 + 0xbd0),
         this_00 != (FPBDRigidsEvolutionBase *)0x0)) {
        ::Chaos::FPBDRigidsEvolutionBase::SetParticleObjectState(this_00,pTVar5,EVar1);
      }
    }
  }
  return;
}

// Call @ 143da3550

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FWritePhysicsObjectInterface<0>::AddForce'::__l27::<lambda_1>,void>::Call
          (void *param_1)

{
  bool bVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FWritePhysicsObjectInterface<1> aFStackX_8 [8];
  undefined4 uStack_1c;
  TArrayView<Chaos::FPhysicsObject_*_const,int> TStack_18;
  
  ::Chaos::FPhysicsObjectInternalInterface::GetWrite();
  TStack_18.DataPtr = *(FPhysicsObject ***)param_1;
  iVar2 = *(int *)((longlong)param_1 + 8);
  bVar1 = *(bool *)((longlong)param_1 + 0x28);
  if (iVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TStack_18._12_4_ = uStack_1c;
  TStack_18.ArrayNum = iVar2;
  ::Chaos::FWritePhysicsObjectInterface<1>::AddForce
            (aFStackX_8,&TStack_18,(TVector<double> *)((longlong)param_1 + 0x10),bVar1);
  return;
}

// Call @ 143da3560

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FWritePhysicsObjectInterface<0>::SetAngularVelocityInRadians'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  bool bVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FWritePhysicsObjectInterface<1> aFStackX_8 [8];
  undefined4 uStack_1c;
  TArrayView<Chaos::FPhysicsObject_*_const,int> TStack_18;
  
  ::Chaos::FPhysicsObjectInternalInterface::GetWrite();
  TStack_18.DataPtr = *(FPhysicsObject ***)param_1;
  iVar2 = *(int *)((longlong)param_1 + 8);
  bVar1 = *(bool *)((longlong)param_1 + 0x28);
  if (iVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TStack_18._12_4_ = uStack_1c;
  TStack_18.ArrayNum = iVar2;
  ::Chaos::FWritePhysicsObjectInterface<1>::SetAngularVelocityInRadians
            (aFStackX_8,&TStack_18,(TVector<double> *)((longlong)param_1 + 0x10),bVar1);
  return;
}

// Call @ 143da3570

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FWritePhysicsObjectInterface<0>::SetLinearVelocity'::__l27::<lambda_1>,void>
::Call(void *param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  FGeometryCollectionPhysicsProxy *this;
  longlong lVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  double dVar9;
  bool bVar10;
  uint uVar11;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar12;
  TVector<double,3> *pTVar13;
  TPBDRigidParticleHandleImp<double,3,1> *this_00;
  longlong *plVar14;
  double dVar15;
  double dVar16;
  
  ::Chaos::FPhysicsObjectInternalInterface::GetWrite();
  iVar3 = *(int *)((longlong)param_1 + 8);
  cVar2 = *(char *)((longlong)param_1 + 0x28);
  plVar14 = *(longlong **)param_1;
  if (iVar3 < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else if (iVar3 == 0) {
    return;
  }
  plVar1 = plVar14 + iVar3;
  do {
    if (plVar14 == plVar1) {
      return;
    }
    puVar5 = (undefined8 *)*plVar14;
    if ((puVar5 != (undefined8 *)0x0) &&
       (this = (FGeometryCollectionPhysicsProxy *)*puVar5,
       this != (FGeometryCollectionPhysicsProxy *)0x0)) {
      iVar3 = *(int *)&this->field_0x1c;
      if (iVar3 == 2) {
        pTVar12 = FGeometryCollectionPhysicsProxy::GetParticleByIndex_Internal
                            (this,*(int *)(puVar5 + 1));
      }
      else if (iVar3 == 0xb) {
        pTVar12 = *(TPBDRigidParticleHandleImp<double,3,1> **)&(this->Parameters).Name.Data.ArrayNum
        ;
      }
      else {
        if (iVar3 != 0xc) goto LAB_143d975fd;
        pTVar12 = *(TPBDRigidParticleHandleImp<double,3,1> **)
                   &(this->Parameters).InitializationCommands.ArrayNum;
      }
      if (pTVar12 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        this_00 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
        if (1 < (byte)pTVar12->field_0xc) {
          this_00 = pTVar12;
        }
        if (this_00 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
          dVar15 = *(double *)((longlong)param_1 + 0x20);
          dVar9 = *(double *)((longlong)param_1 + 0x10);
          dVar16 = *(double *)((longlong)param_1 + 0x18);
          if (cVar2 != '\0') {
            pTVar13 = ::Chaos::TPBDRigidParticleHandleImp<double,3,1>::LinearImpulseVelocity
                                (this_00);
            dVar15 = dVar15 + *(double *)&pTVar13->field_0x10;
            dVar9 = dVar9 + *(double *)pTVar13;
            dVar16 = dVar16 + *(double *)&pTVar13->field_0x8;
          }
          uVar4 = *(uint *)&this_00->field_0x8;
          lVar6 = *(longlong *)this_00;
          uVar11 = 0;
          if ((int)uVar4 < *(int *)(lVar6 + 0x358)) {
            uVar11 = ~uVar4 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar6 = *(longlong *)(lVar6 + 0x350);
          auVar8._8_4_ = SUB84(dVar16,0);
          auVar8._0_8_ = dVar9;
          auVar8._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
          *(undefined1 (*) [16])(lVar6 + (longlong)(int)uVar4 * 0x18) = auVar8;
          *(double *)(lVar6 + 0x10 + (longlong)(int)uVar4 * 0x18) = dVar15;
        }
      }
    }
LAB_143d975fd:
    plVar14 = plVar14 + 1;
  } while( true );
}

// Call @ 143da3580

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FWritePhysicsObjectInterface<0>::SetLinearImpulseVelocity'::__l29::<lambda_1>,void>
::Call(void *param_1)

{
  bool bVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FWritePhysicsObjectInterface<1> aFStackX_8 [8];
  undefined4 uStack_1c;
  TArrayView<Chaos::FPhysicsObject_*_const,int> TStack_18;
  
  ::Chaos::FPhysicsObjectInternalInterface::GetWrite();
  TStack_18.DataPtr = *(FPhysicsObject ***)param_1;
  iVar2 = *(int *)((longlong)param_1 + 8);
  bVar1 = *(bool *)((longlong)param_1 + 0x28);
  if (iVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TStack_18._12_4_ = uStack_1c;
  TStack_18.ArrayNum = iVar2;
  ::Chaos::FWritePhysicsObjectInterface<1>::SetLinearImpulseVelocity
            (aFStackX_8,&TStack_18,(TVector<double> *)((longlong)param_1 + 0x10),bVar1);
  return;
}

// Call @ 143da3590

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FWritePhysicsObjectInterface<0>::AddTorque'::__l35::<lambda_1>,void>::
Call(void *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  FWritePhysicsObjectInterface<1> aFStackX_8 [8];
  undefined4 uStack_1c;
  TArrayView<Chaos::FPhysicsObject_*_const,int> TStack_18;
  
  ::Chaos::FPhysicsObjectInternalInterface::GetWrite();
  TStack_18.DataPtr = *(FPhysicsObject ***)param_1;
  iVar3 = *(int *)((longlong)param_1 + 8);
  bVar1 = *(bool *)((longlong)param_1 + 0x29);
  bVar2 = *(bool *)((longlong)param_1 + 0x28);
  if (iVar3 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TStack_18._12_4_ = uStack_1c;
  TStack_18.ArrayNum = iVar3;
  ::Chaos::FWritePhysicsObjectInterface<1>::AddTorque
            (aFStackX_8,&TStack_18,(TVector<double> *)((longlong)param_1 + 0x10),bVar2,bVar1);
  return;
}

// Call @ 143da35a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FWritePhysicsObjectInterface<0>::AddConnectivityEdgesBetween'::__l11::<lambda_1>,void>
::Call(void *param_1)

{
  int iVar1;
  int iVar2;
  FPhysicsObject **ppFVar3;
  FPhysicsObject **ppFVar4;
  code *pcVar5;
  bool bVar6;
  FWritePhysicsObjectInterface<1> aFStackX_8 [8];
  undefined4 uStack_3c;
  undefined4 uStack_2c;
  TArrayView<Chaos::FPhysicsObject_*_const,int> TStack_28;
  TArrayView<Chaos::FPhysicsObject_*_const,int> TStack_18;
  
  ::Chaos::FPhysicsObjectInternalInterface::GetWrite();
  ppFVar3 = *(FPhysicsObject ***)((longlong)param_1 + 0x10);
  iVar1 = *(int *)((longlong)param_1 + 0x18);
  if (iVar1 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  ppFVar4 = *(FPhysicsObject ***)param_1;
  iVar2 = *(int *)((longlong)param_1 + 8);
  if (iVar2 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  TStack_28._12_4_ = uStack_3c;
  TStack_28.ArrayNum = iVar1;
  TStack_18._12_4_ = uStack_2c;
  TStack_18.ArrayNum = iVar2;
  TStack_28.DataPtr = ppFVar3;
  TStack_18.DataPtr = ppFVar4;
  ::Chaos::FWritePhysicsObjectInterface<1>::AddConnectivityEdgesBetween
            (aFStackX_8,&TStack_18,&TStack_28,
             (FClusterCreationParameters *)((longlong)param_1 + 0x20));
  return;
}

// Call @ 143da35b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPerParticlePBDCollisionConstraint::ApplyHelper<1>'::__l7::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPerParticlePBDCollisionConstraint::ApplyHelper<1>'::__l7::<lambda_2>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143da35c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPerParticlePBDCollisionConstraint::ApplyHelper<0>'::__l7::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPerParticlePBDCollisionConstraint::ApplyHelper<0>'::__l7::<lambda_2>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143da35d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPerParticlePBDCollisionConstraint::ApplyHelperISPC'::__l21::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FPerParticlePBDCollisionConstraint::ApplyHelperISPC'::__l21::<lambda_2>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143da35e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l28::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  int iVar1;
  float fVar2;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14) + *param_2;
  fVar2 = ::Chaos::Softs::FPBDWeightMap::operator[]
                    ((FPBDWeightMap *)(*(longlong *)param_1 + 0x30),iVar1);
  ::Chaos::Softs::FPBDSpringConstraints::ApplyHelper<Chaos::Softs::FSolverParticles>
            (*(FPBDSpringConstraints **)param_1,*(FSolverParticles **)((longlong)param_1 + 8),
             *(float *)((longlong)param_1 + 0x10),iVar1,fVar2);
  return;
}

// Call @ 143da3630

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l28::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  int iVar1;
  float fVar2;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14) + *param_2;
  fVar2 = ::Chaos::Softs::FPBDWeightMap::operator[]
                    ((FPBDWeightMap *)(*(longlong *)param_1 + 0x30),iVar1);
  ::Chaos::Softs::FPBDSpringConstraints::ApplyHelper<Chaos::Softs::FSolverParticlesRange>
            (*(FPBDSpringConstraints **)param_1,*(FSolverParticlesRange **)((longlong)param_1 + 8),
             *(float *)((longlong)param_1 + 0x10),iVar1,fVar2);
  return;
}

// Call @ 143e14470

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FTriangleMesh::EdgeIntersectionQuery<float>'::__l2::<lambda_1>,bool,int>
::Call(void *param_1,int *param_2)

{
  undefined1 uVar1;
  int local_res8 [2];
  undefined4 local_res10 [6];
  
  local_res8[0] = *param_2;
  local_res10[0] = *(undefined4 *)param_1;
  uVar1 = (*(code *)**(undefined8 **)((longlong)param_1 + 8))
                    ((*(undefined8 **)((longlong)param_1 + 8))[1],local_res10,local_res8);
  return (bool)uVar1;
}

// Call @ 143e144b0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FTriangleMesh::EdgeIntersectionQuery<double>'::__l2::<lambda_1>,bool,int>
::Call(void *param_1,int *param_2)

{
  undefined1 uVar1;
  int local_res8 [2];
  undefined4 local_res10 [6];
  
  local_res8[0] = *param_2;
  local_res10[0] = *(undefined4 *)param_1;
  uVar1 = (*(code *)**(undefined8 **)((longlong)param_1 + 8))
                    ((*(undefined8 **)((longlong)param_1 + 8))[1],local_res10,local_res8);
  return (bool)uVar1;
}

// Call @ 143e144f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::THierarchicalSpatialHash<int,float>::Initialize<Chaos::TTriangleMeshBvData<float>_>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::THierarchicalSpatialHash<int,float>::Initialize<Chaos::TTriangleMeshBvData<float>_>'::__l2
  ::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143e14500

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::THierarchicalSpatialHash<int,double>::Initialize<Chaos::TTriangleMeshBvData<double>_>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::THierarchicalSpatialHash<int,double>::Initialize<Chaos::TTriangleMeshBvData<double>_>'::
  __l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143e14510

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::THierarchicalSpatialHash<int,float>::Initialize<Chaos::FTriangleMeshBvDataWithThickness>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::THierarchicalSpatialHash<int,float>::Initialize<Chaos::FTriangleMeshBvDataWithThickness>'
  ::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143e14520

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FTriangleMesh::PointClosestTriangleQuery<float>'::__l2::<lambda_1>,bool,int>
::Call(void *param_1,int *param_2)

{
  undefined1 uVar1;
  int local_res8 [2];
  undefined4 local_res10 [6];
  
  local_res8[0] = *param_2;
  local_res10[0] = *(undefined4 *)param_1;
  uVar1 = (*(code *)**(undefined8 **)((longlong)param_1 + 8))
                    ((*(undefined8 **)((longlong)param_1 + 8))[1],local_res10,local_res8);
  return (bool)uVar1;
}

// Call @ 143e14560

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FTriangleMesh::PointClosestTriangleQuery<double>'::__l2::<lambda_1>,bool,int>
::Call(void *param_1,int *param_2)

{
  undefined1 uVar1;
  int local_res8 [2];
  undefined4 local_res10 [6];
  
  local_res8[0] = *param_2;
  local_res10[0] = *(undefined4 *)param_1;
  uVar1 = (*(code *)**(undefined8 **)((longlong)param_1 + 8))
                    ((*(undefined8 **)((longlong)param_1 + 8))[1],local_res10,local_res8);
  return (bool)uVar1;
}

// Call @ 143e145a0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FTriangleMesh::PointProximityQuery<float>'::__l2::<lambda_1>,bool,int>::
Call(void *param_1,int *param_2)

{
  undefined1 uVar1;
  int local_res8 [2];
  undefined4 local_res10 [6];
  
  local_res8[0] = *param_2;
  local_res10[0] = *(undefined4 *)param_1;
  uVar1 = (*(code *)**(undefined8 **)((longlong)param_1 + 8))
                    ((*(undefined8 **)((longlong)param_1 + 8))[1],local_res10,local_res8);
  return (bool)uVar1;
}

// Call @ 143e145e0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FTriangleMesh::PointProximityQuery<double>'::__l2::<lambda_1>,bool,int>::
Call(void *param_1,int *param_2)

{
  undefined1 uVar1;
  int local_res8 [2];
  undefined4 local_res10 [6];
  
  local_res8[0] = *param_2;
  local_res10[0] = *(undefined4 *)param_1;
  uVar1 = (*(code *)**(undefined8 **)((longlong)param_1 + 8))
                    ((*(undefined8 **)((longlong)param_1 + 8))[1],local_res10,local_res8);
  return (bool)uVar1;
}

// Call @ 143e14620

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::TSmokeEvolution<double,3>::AdvanceOneTimeStep'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::TSmokeEvolution<double,3>::AdvanceOneTimeStep'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143e14630

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FEvolution::AdvanceOneTimeStep'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `Chaos::Softs::FEvolution::AdvanceOneTimeStep'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143e14640

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FTriangleMesh::PointProximityQuery'::__l2::<lambda_1>,bool,int>::Call
          (void *param_1,int *param_2)

{
  undefined1 uVar1;
  int local_res8 [2];
  undefined4 local_res10 [6];
  
  local_res8[0] = *param_2;
  local_res10[0] = *(undefined4 *)param_1;
  uVar1 = (*(code *)**(undefined8 **)((longlong)param_1 + 8))
                    ((*(undefined8 **)((longlong)param_1 + 8))[1],local_res10,local_res8);
  return (bool)uVar1;
}

// Call @ 143e14680

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FEvolution::AdvanceOneTimeStepInternal'::__l33::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FEvolution::AdvanceOneTimeStepInternal'::__l33::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143e14690

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::TSmokeEvolution<double,3>::AdvanceOneTimeStep'::__l4::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::TSmokeEvolution<double,3>::AdvanceOneTimeStep'::__l4::<lambda_2>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143e146a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FEvolution::AdvanceOneTimeStepInternal'::__l63::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FEvolution::AdvanceOneTimeStepInternal'::__l63::<lambda_2>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143e146b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::TSmokeEvolution<double,3>::AdvanceOneTimeStep'::__l2::<lambda_3>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::TSmokeEvolution<double,3>::AdvanceOneTimeStep'::__l2::<lambda_3>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143e146c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::TSmokeEvolution<double,3>::AdvanceOneTimeStep'::__l2::<lambda_4>,void,int>
::Call(void *param_1,int *param_2)

{
  TUniformGrid<double,3> *pTVar1;
  TVector<int,3> local_18;
  
  ::Chaos::TUniformGrid<double,3>::GetIndex(*(TUniformGrid<double,3> **)param_1,&local_18,*param_2);
  pTVar1 = *(TUniformGrid<double,3> **)param_1;
  ::Chaos::TPerCellBoundaryConditions<double,3>::ApplyDirichlet
            (*(TPerCellBoundaryConditions<double,3> **)((longlong)param_1 + 8),pTVar1,
             (TArrayND<bool,3> *)&pTVar1[2].field_0x30,(TArrayND<double,3> *)&pTVar1[2].field_0x10,
             **(double **)((longlong)param_1 + 0x10),&local_18);
  return;
}

// Call @ 143eb8b50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::THierarchicalSpatialHash<int,double>::Initialize<TArray<Chaos::FWeightedLatticeBvEntry,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::THierarchicalSpatialHash<int,double>::
  Initialize<TArray<Chaos::FWeightedLatticeBvEntry,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>
  ::operator()(param_1,*param_2);
  return;
}

// Call @ 143eb8b60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::TWeightedLatticeImplicitObject<Chaos::FLevelSet>::BatchPhiWithNormal'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::TWeightedLatticeImplicitObject<Chaos::FLevelSet>::BatchPhiWithNormal'::__l2::<lambda_1>::
  operator()(param_1,*param_2);
  return;
}

// Call @ 143eb8b70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::TWeightedLatticeImplicitObject<Chaos::FLevelSet>::BatchPhiWithNormalAndGreatestInfluenceBone'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::TWeightedLatticeImplicitObject<Chaos::FLevelSet>::
  BatchPhiWithNormalAndGreatestInfluenceBone'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143eb8b80

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::THierarchicalSpatialHash<int,double>::FindAllIntersections'::__l2::<lambda_1>,bool,int>
::Call(void *param_1,int *param_2)

{
  return true;
}

// Call @ 143f1df80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicBendingConstraints::AddInternalForceDifferential'::__l4::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDAnisotropicBendingConstraints::AddInternalForceDifferential'::__l4::<lambda_1>
  ::operator()(param_1,*param_2);
  return;
}

// Call @ 143f1df90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l25::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l25::
  <lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143f1dfa0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l25::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::
  __l25::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143f1dfb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l54::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::
  __l54::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143f1dfc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l54::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::
  __l54::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143f1dfd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l54::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l54::<lambda_1>
  ::operator()(param_1,*param_2);
  return;
}

// Call @ 143f1dfe0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l54::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'
  ::__l54::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143f1dff0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l54::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'
  ::__l54::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143f1e000

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l54::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l54::
  <lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143f1e010

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::UpdateLinearSystem'::__l13::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::UpdateLinearSystem'::__l13::<lambda_1>::
  operator()(param_1,*param_2);
  return;
}

// Call @ 143f1e020

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::UpdateLinearSystem'::__l13::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::UpdateLinearSystem'::__l13::<lambda_1>::
  operator()(param_1,*param_2);
  return;
}

// Call @ 143f1e030

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::UpdateLinearSystem'::__l17::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::UpdateLinearSystem'::__l17::<lambda_2>::
  operator()(param_1,*param_2);
  return;
}

// Call @ 143f1e040

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::UpdateLinearSystem'::__l17::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::UpdateLinearSystem'::__l17::<lambda_2>::
  operator()(param_1,*param_2);
  return;
}

// Call @ 143f1e050

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l34::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l34::
  <lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 143f1e060

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l34::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::
  __l34::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 143f1e070

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l58::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l58::<lambda_2>
  ::operator()(param_1,*param_2);
  return;
}

// Call @ 143f1e080

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l58::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l58::
  <lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 143f1e090

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l59::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::
  __l59::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 143f1e0a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l59::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::
  __l59::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 143f1e0b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l59::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'
  ::__l59::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 143f1e0c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l59::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'
  ::__l59::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 143f1e0d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l41::<lambda_3>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l41::
  <lambda_3>::operator()(param_1,*param_2);
  return;
}

// Call @ 143f1e0e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l41::<lambda_3>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::
  __l41::<lambda_3>::operator()(param_1,*param_2);
  return;
}

// Call @ 143f1e0f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l60::<lambda_3>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l60::<lambda_3>
  ::operator()(param_1,*param_2);
  return;
}

// Call @ 143f1e100

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l60::<lambda_3>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l60::
  <lambda_3>::operator()(param_1,*param_2);
  return;
}

// Call @ 143f1e110

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l62::<lambda_3>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::
  __l62::<lambda_3>::operator()(param_1,*param_2);
  return;
}

// Call @ 143f1e120

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l62::<lambda_3>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::
  __l62::<lambda_3>::operator()(param_1,*param_2);
  return;
}

// Call @ 143f1e130

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l62::<lambda_3>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'
  ::__l62::<lambda_3>::operator()(param_1,*param_2);
  return;
}

// Call @ 143f1e140

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l62::<lambda_3>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'
  ::__l62::<lambda_3>::operator()(param_1,*param_2);
  return;
}

// Call @ 143f1e150

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l65::<lambda_4>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::
  __l65::<lambda_4>::operator()(param_1,*param_2);
  return;
}

// Call @ 143f1e160

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l65::<lambda_4>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::
  __l65::<lambda_4>::operator()(param_1,*param_2);
  return;
}

// Call @ 143f1e170

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l65::<lambda_4>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'
  ::__l65::<lambda_4>::operator()(param_1,*param_2);
  return;
}

// Call @ 143f1e180

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l65::<lambda_4>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'
  ::__l65::<lambda_4>::operator()(param_1,*param_2);
  return;
}

// Call @ 143f1e190

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l69::<lambda_4>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l69::
  <lambda_4>::operator()(param_1,*param_2);
  return;
}

// Call @ 143f1e1a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l69::<lambda_4>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::
  __l69::<lambda_4>::operator()(param_1,*param_2);
  return;
}

// Call @ 143f1e1b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l68::<lambda_5>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::
  __l68::<lambda_5>::operator()(param_1,*param_2);
  return;
}

// Call @ 143f1e1c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l68::<lambda_5>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::
  __l68::<lambda_5>::operator()(param_1,*param_2);
  return;
}

// Call @ 143f1e1d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l68::<lambda_5>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'
  ::__l68::<lambda_5>::operator()(param_1,*param_2);
  return;
}

// Call @ 143f1e1e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l68::<lambda_5>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'
  ::__l68::<lambda_5>::operator()(param_1,*param_2);
  return;
}

// Call @ 143f1e1f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l73::<lambda_5>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l73::
  <lambda_5>::operator()(param_1,*param_2);
  return;
}

// Call @ 143f1e200

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l73::<lambda_5>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::
  __l73::<lambda_5>::operator()(param_1,*param_2);
  return;
}

// Call @ 143f1e210

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l73::<lambda_6>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::
  __l73::<lambda_6>::operator()(param_1,*param_2);
  return;
}

// Call @ 143f1e220

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l73::<lambda_6>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::
  __l73::<lambda_6>::operator()(param_1,*param_2);
  return;
}

// Call @ 143f1e230

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l73::<lambda_6>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'
  ::__l73::<lambda_6>::operator()(param_1,*param_2);
  return;
}

// Call @ 143f1e240

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l73::<lambda_6>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'
  ::__l73::<lambda_6>::operator()(param_1,*param_2);
  return;
}

// Call @ 143f1e250

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l75::<lambda_6>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l75::
  <lambda_6>::operator()(param_1,*param_2);
  return;
}

// Call @ 143f1e260

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l75::<lambda_6>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::
  __l75::<lambda_6>::operator()(param_1,*param_2);
  return;
}

// Call @ 143f1e270

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l77::<lambda_7>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::
  __l77::<lambda_7>::operator()(param_1,*param_2);
  return;
}

// Call @ 143f1e280

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l77::<lambda_7>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::
  __l77::<lambda_7>::operator()(param_1,*param_2);
  return;
}

// Call @ 143f1e290

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l77::<lambda_7>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'
  ::__l77::<lambda_7>::operator()(param_1,*param_2);
  return;
}

// Call @ 143f1e2a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l77::<lambda_7>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'
  ::__l77::<lambda_7>::operator()(param_1,*param_2);
  return;
}

// Call @ 143f59660

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(Chaos::FPBDRigidsSolver_const_*,Chaos::FBreakingEventData_&,bool),void,Chaos::FPBDRigidsSolver_const_*,Chaos::FBreakingEventData_&,bool>
::Call(void *param_1,FPBDRigidsSolver **param_2,FBreakingEventData *param_3,bool *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000143f59673. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(*param_2,param_3,*param_4);
  return;
}

// Call @ 143f59680

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(Chaos::FPBDRigidsSolver_const_*,Chaos::FCollisionEventData_&,bool),void,Chaos::FPBDRigidsSolver_const_*,Chaos::FCollisionEventData_&,bool>
::Call(void *param_1,FPBDRigidsSolver **param_2,FCollisionEventData *param_3,bool *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000143f59693. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(*param_2,param_3,*param_4);
  return;
}

// Call @ 143f596a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(Chaos::FPBDRigidsSolver_const_*,Chaos::FCrumblingEventData_&,bool),void,Chaos::FPBDRigidsSolver_const_*,Chaos::FCrumblingEventData_&,bool>
::Call(void *param_1,FPBDRigidsSolver **param_2,FCrumblingEventData *param_3,bool *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000143f596b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(*param_2,param_3,*param_4);
  return;
}

// Call @ 143f596c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(Chaos::FPBDRigidsSolver_const_*,Chaos::FRemovalEventData_&,bool),void,Chaos::FPBDRigidsSolver_const_*,Chaos::FRemovalEventData_&,bool>
::Call(void *param_1,FPBDRigidsSolver **param_2,FRemovalEventData *param_3,bool *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000143f596d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(*param_2,param_3,*param_4);
  return;
}

// Call @ 143f596e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(Chaos::FPBDRigidsSolver_const_*,Chaos::FSleepingEventData_&,bool),void,Chaos::FPBDRigidsSolver_const_*,Chaos::FSleepingEventData_&,bool>
::Call(void *param_1,FPBDRigidsSolver **param_2,FSleepingEventData *param_3,bool *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000143f596f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(*param_2,param_3,*param_4);
  return;
}

// Call @ 143f59700

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(Chaos::FPBDRigidsSolver_const_*,Chaos::FTrailingEventData_&,bool),void,Chaos::FPBDRigidsSolver_const_*,Chaos::FTrailingEventData_&,bool>
::Call(void *param_1,FPBDRigidsSolver **param_2,FTrailingEventData *param_3,bool *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000143f59713. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(*param_2,param_3,*param_4);
  return;
}

// Call @ 143f59720

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Chaos::FEventDefaults::RegisterCollisionEvent'::__l2::<lambda_1>::operator()'::__l16::<lambda_1>,void,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  ``Chaos::FEventDefaults::RegisterCollisionEvent'::__l2::<lambda_1>::operator()'::__l16::<lambda_1>
  ::operator()(param_1,*param_2,*param_3);
  return;
}

// Call @ 143f59730

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDStretchBiasElementConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l27::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  ::Chaos::Softs::FXPBDStretchBiasElementConstraints::ApplyHelper<Chaos::Softs::FSolverParticles>
            (*(FXPBDStretchBiasElementConstraints **)((longlong)param_1 + 8),
             *(FSolverParticles **)((longlong)param_1 + 0x10),**(float **)((longlong)param_1 + 0x18)
             ,**(int **)param_1 + *param_2,*(TVector<float,3> **)((longlong)param_1 + 0x20),
             **(float **)((longlong)param_1 + 0x28),**(float **)((longlong)param_1 + 0x30),
             **(float **)((longlong)param_1 + 0x38));
  return;
}

// Call @ 143f597a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDStretchBiasElementConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l27::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  ::Chaos::Softs::FXPBDStretchBiasElementConstraints::
  ApplyHelper<Chaos::Softs::FSolverParticlesRange>
            (*(FXPBDStretchBiasElementConstraints **)((longlong)param_1 + 8),
             *(FSolverParticlesRange **)((longlong)param_1 + 0x10),
             **(float **)((longlong)param_1 + 0x18),**(int **)param_1 + *param_2,
             *(TVector<float,3> **)((longlong)param_1 + 0x20),**(float **)((longlong)param_1 + 0x28)
             ,**(float **)((longlong)param_1 + 0x30),**(float **)((longlong)param_1 + 0x38));
  return;
}

// Call @ 143f59810

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l54::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l54::<lambda_1>::
  operator()(param_1,*param_2);
  return;
}

// Call @ 143f59820

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l54::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l54::
  <lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143f59830

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDStretchBiasElementConstraints::AddInternalForceDifferential'::__l11::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDStretchBiasElementConstraints::AddInternalForceDifferential'::__l11::
  <lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 143f59840

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDSpringConstraints::UpdateLinearSystem'::__l13::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDSpringConstraints::UpdateLinearSystem'::__l13::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143f59850

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDSpringConstraints::UpdateLinearSystem'::__l17::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDSpringConstraints::UpdateLinearSystem'::__l17::<lambda_2>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 143f59860

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``Chaos::FEventDefaults::RegisterCollisionEvent'::__l2::<lambda_1>::operator()'::__l26::<lambda_2>,void,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  ``Chaos::FEventDefaults::RegisterCollisionEvent'::__l2::<lambda_1>::operator()'::__l26::<lambda_2>
  ::operator()(param_1,*param_2,*param_3);
  return;
}

// Call @ 143f59870

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDStretchBiasElementConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l45::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDStretchBiasElementConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l45::
  <lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 143f59880

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDStretchBiasElementConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l45::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDStretchBiasElementConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::
  __l45::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 143f59890

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l59::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l59::<lambda_2>::
  operator()(param_1,*param_2);
  return;
}

// Call @ 143f598a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l59::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l59::
  <lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 143f598b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l62::<lambda_3>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l62::<lambda_3>::
  operator()(param_1,*param_2);
  return;
}

// Call @ 143f598c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l62::<lambda_3>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l62::
  <lambda_3>::operator()(param_1,*param_2);
  return;
}

// Call @ 143f598d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l65::<lambda_4>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l65::<lambda_4>::
  operator()(param_1,*param_2);
  return;
}

// Call @ 143f598e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l65::<lambda_4>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l65::
  <lambda_4>::operator()(param_1,*param_2);
  return;
}

// Call @ 143f598f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l68::<lambda_5>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l68::<lambda_5>::
  operator()(param_1,*param_2);
  return;
}

// Call @ 143f59900

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l68::<lambda_5>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l68::
  <lambda_5>::operator()(param_1,*param_2);
  return;
}

// Call @ 143f59910

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l73::<lambda_6>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l73::<lambda_6>::
  operator()(param_1,*param_2);
  return;
}

// Call @ 143f59920

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l73::<lambda_6>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l73::
  <lambda_6>::operator()(param_1,*param_2);
  return;
}

// Call @ 143f59930

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l77::<lambda_7>,void,int>
::Call(void *param_1,int *param_2)

{
  int iVar1;
  float fVar2;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14) + *param_2;
  if (*(char *)((longlong)param_1 + 0x18) == '\0') {
    fVar2 = *(float *)((longlong)param_1 + 0x1c);
  }
  else {
    fVar2 = ::Chaos::Softs::FPBDWeightMap::operator[]
                      ((FPBDWeightMap *)(*(longlong *)param_1 + 0x30),iVar1);
  }
  ::Chaos::Softs::FXPBDSpringConstraints::ApplyHelper<0,0,1,0,Chaos::Softs::FSolverParticles>
            (*(FXPBDSpringConstraints **)param_1,*(FSolverParticles **)((longlong)param_1 + 8),
             *(float *)((longlong)param_1 + 0x10),iVar1,fVar2,0.0);
  return;
}

// Call @ 143f599a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l77::<lambda_7>,void,int>
::Call(void *param_1,int *param_2)

{
  int iVar1;
  float fVar2;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14) + *param_2;
  if (*(char *)((longlong)param_1 + 0x18) == '\0') {
    fVar2 = *(float *)((longlong)param_1 + 0x1c);
  }
  else {
    fVar2 = ::Chaos::Softs::FPBDWeightMap::operator[]
                      ((FPBDWeightMap *)(*(longlong *)param_1 + 0x30),iVar1);
  }
  ::Chaos::Softs::FXPBDSpringConstraints::ApplyHelper<0,0,1,0,Chaos::Softs::FSolverParticlesRange>
            (*(FXPBDSpringConstraints **)param_1,*(FSolverParticlesRange **)((longlong)param_1 + 8),
             *(float *)((longlong)param_1 + 0x10),iVar1,fVar2,0.0);
  return;
}

// Call @ 143fe0500

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`GeometryCollection::Facades::FCollectionTransformSelectionFacade::SelectContact'::__l12::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  int local_res8 [2];
  int local_res10 [6];
  
  local_res8[0] = *param_2;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)param_1,local_res10,
             (bool *)local_res8);
  return;
}

// Call @ 144022b90

double __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionConvexUtility::MergeHullsOnTransforms'::__l22::<lambda_2>_const_,double,int>
::Call(void *param_1,int *param_2)

{
  uint uVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  double dVar6;
  
  plVar2 = *(longlong **)param_1;
  uVar1 = *param_2;
  uVar5 = 0;
  if ((int)uVar1 < (int)plVar2[1]) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      dVar6 = (double)(*pcVar3)();
      return dVar6;
    }
  }
  return (double)*(float *)(*(longlong *)(*plVar2 + (longlong)(int)uVar1 * 8) + 0x68);
}

// Call @ 144022c10

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionConvexUtility::MergeHullsOnTransforms'::__l22::<lambda_3>_const_,int,int>
::Call(void *param_1,int *param_2)

{
  uint uVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  
  plVar2 = *(longlong **)param_1;
  uVar1 = *param_2;
  uVar5 = 0;
  if ((int)uVar1 < (int)plVar2[1]) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  return *(int *)(*(longlong *)(*plVar2 + (longlong)(int)uVar1 * 8) + 0x38);
}

// Call @ 144022c90

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionConvexUtility::MergeHullsOnTransforms'::__l22::<lambda_4>_const_,UE::Math::TVector<double>,int,int>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,int *param_2,int *param_3)

{
  `FGeometryCollectionConvexUtility::MergeHullsOnTransforms'::__l22::<lambda_4>::operator()
            (param_1,__return_storage_ptr__,*param_2,*param_3);
  return __return_storage_ptr__;
}

// Call @ 144022cc0

double __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionConvexUtility::GenerateClusterConvexHullsFromLeafOrChildrenHullsInternal'::__l65::<lambda_7>_const_,double,int>
::Call(void *param_1,int *param_2)

{
  uint uVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  double dVar6;
  
  plVar2 = *(longlong **)param_1;
  uVar1 = *param_2;
  uVar5 = 0;
  if ((int)uVar1 < (int)plVar2[1]) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      dVar6 = (double)(*pcVar3)();
      return dVar6;
    }
  }
  return (double)*(float *)(*(longlong *)((longlong)(int)uVar1 * 0x70 + *plVar2) + 0x68);
}

// Call @ 144022d40

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionConvexUtility::GenerateClusterConvexHullsFromLeafOrChildrenHullsInternal'::__l65::<lambda_8>_const_,int,int>
::Call(void *param_1,int *param_2)

{
  uint uVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  
  plVar2 = *(longlong **)param_1;
  uVar1 = *param_2;
  uVar5 = 0;
  if ((int)uVar1 < (int)plVar2[1]) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  return *(int *)(*(longlong *)((longlong)(int)uVar1 * 0x70 + *plVar2) + 0x38);
}

// Call @ 144022dc0

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionConvexUtility::GenerateClusterConvexHullsFromLeafOrChildrenHullsInternal'::__l65::<lambda_9>_const_,UE::Math::TVector<double>,int,int>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,int *param_2,int *param_3)

{
  `FGeometryCollectionConvexUtility::GenerateClusterConvexHullsFromLeafOrChildrenHullsInternal'::
  __l65::<lambda_9>::operator()(param_1,__return_storage_ptr__,*param_2,*param_3);
  return __return_storage_ptr__;
}

// Call @ 144022df0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``anonymous_namespace'::CreateNonoverlappingConvexHulls'::__l69::<lambda_13>,void,int>
::Call(void *param_1,int *param_2)

{
  ``anonymous_namespace'::CreateNonoverlappingConvexHulls'::__l69::<lambda_13>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 144022e00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``anonymous_namespace'::CreateNonoverlappingConvexHulls'::__l2::<lambda_14>,void,int>
::Call(void *param_1,int *param_2)

{
  ``anonymous_namespace'::CreateNonoverlappingConvexHulls'::__l2::<lambda_14>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 144022e10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`GeometryCollectionAlgo::ComputeCoincidentVertices'::__l2::<lambda_1>,void,int>::
Call(void *param_1,int *param_2)

{
  `GeometryCollectionAlgo::ComputeCoincidentVertices'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 144022e20

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionConvexUtility::ComputeLeafHulls'::__l2::<lambda_1>,bool,int>
::Call(void *param_1,int *param_2)

{
  return false;
}

// Call @ 144022e30

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionConvexUtility::CreateNonOverlappingConvexHullData'::__l2::<lambda_1>,bool,int>
::Call(void *param_1,int *param_2)

{
  return false;
}

// Call @ 144022e40

TVector<float> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``anonymous_namespace'::FHullPolygons::EstimateSharpContact'::__l2::<lambda_1>,UE::Math::TVector<float>,int>
::Call(TVector<float> *__return_storage_ptr__,void *param_1,int *param_2)

{
  uint uVar1;
  float fVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TVector<float> *pTVar7;
  
  lVar3 = *(longlong *)param_1;
  uVar1 = *param_2;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar3 + 0x18)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TVector<float> *)(*pcVar4)();
      return pTVar7;
    }
  }
  lVar3 = *(longlong *)(lVar3 + 0x10);
  fVar2 = *(float *)(lVar3 + 8 + (longlong)(int)uVar1 * 0xc);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       *(undefined8 *)(lVar3 + (longlong)(int)uVar1 * 0xc);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar2;
  return __return_storage_ptr__;
}

// Call @ 144022ed0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::GeometryCollectionConvexUtility::GetExistingConvexHullsInSharedSpace'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::GeometryCollectionConvexUtility::GetExistingConvexHullsInSharedSpace'::__l2::<lambda_1>::
  operator()(param_1,*param_2);
  return;
}

// Call @ 144022ee0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``anonymous_namespace'::HullsFromGeometry'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  ``anonymous_namespace'::HullsFromGeometry'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 144022ef0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``anonymous_namespace'::TransformHullsToLocal'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  ``anonymous_namespace'::TransformHullsToLocal'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 144022f00

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``anonymous_namespace'::FilterHullPoints'::__l5::<lambda_1>,UE::Math::TVector<double>,int>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,int *param_2)

{
  ``anonymous_namespace'::FilterHullPoints'::__l5::<lambda_1>::operator()
            (param_1,__return_storage_ptr__,*param_2);
  return __return_storage_ptr__;
}

// Call @ 144022f30

FConvex * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionConvexUtility::MergeHullsOnTransforms'::__l31::<lambda_1>,Chaos::FConvex_const_*,int>
::Call(void *param_1,int *param_2)

{
  uint uVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FConvex *pFVar6;
  
  plVar2 = *(longlong **)param_1;
  uVar1 = *param_2;
  uVar5 = 0;
  if ((int)uVar1 < (int)plVar2[1]) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FConvex *)(*pcVar3)();
      return pFVar6;
    }
  }
  return *(FConvex **)(*plVar2 + (longlong)(int)uVar1 * 8);
}

// Call @ 144022fa0

FConvex * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionConvexUtility::GenerateClusterConvexHullsFromLeafOrChildrenHullsInternal'::__l97::<lambda_1>,Chaos::FConvex_const_*,int>
::Call(void *param_1,int *param_2)

{
  uint uVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FConvex *pFVar6;
  
  plVar2 = *(longlong **)param_1;
  uVar1 = *param_2;
  uVar5 = 0;
  if ((int)uVar1 < (int)plVar2[1]) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FConvex *)(*pcVar3)();
      return pFVar6;
    }
  }
  return *(FConvex **)((longlong)(int)uVar1 * 0x70 + *plVar2);
}

// Call @ 144023020

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionConvexUtility::ComputeLeafHulls'::__l2::<lambda_2>,bool,int>
::Call(void *param_1,int *param_2)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  uVar1 = *param_2;
  lVar2 = **(longlong **)param_1;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x18)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  return *(int *)(*(longlong *)(lVar2 + 0x10) + (longlong)(int)uVar1 * 4) != 0;
}

// Call @ 1440230a0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionConvexUtility::CreateNonOverlappingConvexHullData'::__l2::<lambda_2>,bool,int>
::Call(void *param_1,int *param_2)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  uVar1 = *param_2;
  lVar2 = **(longlong **)param_1;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x18)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  return *(int *)(*(longlong *)(lVar2 + 0x10) + (longlong)(int)uVar1 * 4) != 0;
}

// Call @ 144023120

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionConvexUtility::SetVolumeAttributes'::__l2::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `FGeometryCollectionConvexUtility::SetVolumeAttributes'::__l2::<lambda_2>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 144023130

double __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``anonymous_namespace'::FilterHullPoints'::__l16::<lambda_3>,double,int_const_&>
::Call(void *param_1,int *param_2)

{
  double dVar1;
  
  dVar1 = ``anonymous_namespace'::FilterHullPoints'::__l16::<lambda_3>::operator()(param_1,*param_2)
  ;
  return dVar1;
}

// Call @ 144023140

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionConvexUtility::GenerateLeafConvexHulls'::__l58::<lambda_3>,void,int>
::Call(void *param_1,int *param_2)

{
  `FGeometryCollectionConvexUtility::GenerateLeafConvexHulls'::__l58::<lambda_3>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 144023150

FConvex * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionConvexUtility::GenerateClusterConvexHullsFromLeafOrChildrenHullsInternal'::__l102::<lambda_3>,Chaos::FConvex_const_*,int>
::Call(void *param_1,int *param_2)

{
  uint uVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FConvex *pFVar6;
  
  plVar2 = *(longlong **)param_1;
  uVar1 = *param_2;
  uVar5 = 0;
  if ((int)uVar1 < (int)plVar2[1]) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FConvex *)(*pcVar3)();
      return pFVar6;
    }
  }
  return *(FConvex **)((longlong)(int)uVar1 * 0x70 + *plVar2);
}

// Call @ 1440231d0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionConvexUtility::GenerateLeafConvexHulls'::__l64::<lambda_4>,bool,int>
::Call(void *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (*(int *)((longlong)param_1 + 8) != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *(longlong *)((longlong)param_1 + 0x40);
    if (*(longlong *)((longlong)param_1 + 0x40) == 0) {
      lVar2 = (longlong)param_1 + 0x38;
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)((longlong)param_1 + 0x48) - 1U & *param_2) * 4);
    if (iVar1 != -1) {
      do {
        if (*(uint *)(*(longlong *)param_1 + (longlong)iVar1 * 0xc) == *param_2) goto LAB_14402321c;
        iVar1 = *(int *)(*(longlong *)param_1 + 4 + (longlong)iVar1 * 0xc);
      } while (iVar1 != -1);
    }
  }
  iVar1 = -1;
LAB_14402321c:
  return iVar1 != -1;
}

// Call @ 144023230

FConvex * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionConvexUtility::GenerateClusterConvexHullsFromLeafOrChildrenHullsInternal'::__l122::<lambda_4>,Chaos::FConvex_const_*,int>
::Call(void *param_1,int *param_2)

{
  uint uVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FConvex *pFVar6;
  
  plVar2 = *(longlong **)param_1;
  uVar1 = *param_2;
  uVar5 = 0;
  if ((int)uVar1 < (int)plVar2[1]) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FConvex *)(*pcVar3)();
      return pFVar6;
    }
  }
  return *(FConvex **)((longlong)(int)uVar1 * 0x70 + *plVar2);
}

// Call @ 1440232b0

FConvex * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionConvexUtility::GenerateClusterConvexHullsFromLeafOrChildrenHullsInternal'::__l127::<lambda_6>,Chaos::FConvex_const_*,int>
::Call(void *param_1,int *param_2)

{
  uint uVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FConvex *pFVar6;
  
  plVar2 = *(longlong **)param_1;
  uVar1 = *param_2;
  uVar5 = 0;
  if ((int)uVar1 < (int)plVar2[1]) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FConvex *)(*pcVar3)();
      return pFVar6;
    }
  }
  return *(FConvex **)((longlong)(int)uVar1 * 0x70 + *plVar2);
}

// Call @ 144023330

bool __cdecl
UE::Core::Private::Function::TFunctionRefCaller<UE::Geometry::<lambda_6_>,bool,int>::Call
          (void *param_1,int *param_2)

{
  return true;
}

// Call @ 144023340

bool __cdecl
UE::Core::Private::Function::TFunctionRefCaller<UE::Geometry::<lambda_7_>,bool,int>::Call
          (void *param_1,int *param_2)

{
  return true;
}

// Call @ 14407edc0

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<`Chaos::FPBDRigidsEvolutionGBF::EndFrame'::__l2::<lambda_1>_>'::__l2::<lambda_1>_const_,int,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  return *param_2;
}

// Call @ 14407edd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FDirtySet::ParallelForEachProxy<`Chaos::FPBDRigidsSolver::PushPhysicsState'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `Chaos::FDirtySet::
  ParallelForEachProxy<`Chaos::FPBDRigidsSolver::PushPhysicsState'::__l2::<lambda_1>_>'::__l2::
  <lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14407ede0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FPBDRigidsSolver::FPBDRigidsSolver'::__l2::<lambda_1>,void,Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,Chaos::TGeometryParticleHandleImp<double,3,1>_*>
::Call(void *param_1,TGeometryParticleHandleImp<double,3,1> **param_2,
      TGeometryParticleHandleImp<double,3,1> **param_3)

{
  TGeometryParticleHandleImp<double,3,1> *this;
  IPhysicsProxyBase *pIVar1;
  TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator> *this_00;
  TGeometryParticleHandleImp<double,3,1> *pTVar2;
  IPhysicsProxyBase *local_res10;
  IPhysicsProxyBase *local_res18 [2];
  
  this = *param_3;
  pIVar1 = ::Chaos::TGeometryParticlesImp<double,3,0>::PhysicsProxy
                     ((TGeometryParticlesImp<double,3,0> *)(*param_2)->_padding_,
                      (int)(*param_2)->_padding_);
  pTVar2 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (2 < *(byte *)((longlong)&this->_padding_ + 4)) {
    pTVar2 = this;
  }
  if (pTVar2 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    local_res18[0] = pIVar1;
    this_00 = ::Chaos::TPBDRigidClusteredParticles<double,3>::PhysicsProxies
                        ((TPBDRigidClusteredParticles<double,3> *)pTVar2->_padding_,
                         (int)pTVar2->_padding_);
    TSet<IPhysicsProxyBase_*,DefaultKeyFuncs<IPhysicsProxyBase_*,0>,FDefaultSetAllocator>::
    Emplace<IPhysicsProxyBase_*_const_&>(this_00,&local_res10,(bool *)local_res18);
  }
  ::Chaos::TGeometryParticleHandleImp<double,3,1>::SetPhysicsProxy(this,pIVar1);
  return;
}

// Call @ 14407ee50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FPBDRigidsSolver::ClearCollisionEventsForProxy'::__l2::<lambda_1>,void,Chaos::FCollisionEventData_&>
::Call(void *param_1,FCollisionEventData *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ulonglong *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  ulonglong *puVar7;
  IPhysicsProxyBase *apIStackX_10 [3];
  
  if (0 < (param_2->CollisionData).AllCollisionsArray.ArrayNum) {
    if (*(longlong *)param_1 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Proxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PBDRigidsSolver.cpp"
                         ,0x368,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    apIStackX_10[0] = *(IPhysicsProxyBase **)param_1;
    uVar5 = ((uint)((ulonglong)apIStackX_10[0] >> 0x14) & 0xffff ^
            (uint)((ulonglong)apIStackX_10[0] >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    uVar5 = uVar5 >> 0x10 ^ uVar5;
    if (*(int *)&(param_2->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap.field_0x8 !=
        *(int *)&(param_2->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap.field_0x34) {
      puVar6 = *(undefined1 **)
                &(param_2->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap.field_0x40;
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &(param_2->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap.field_0x38;
      }
      iVar3 = *(int *)(puVar6 + (ulonglong)
                                (*(int *)&(param_2->PhysicsProxyToCollisionIndices).
                                          PhysicsProxyToIndicesMap.field_0x48 - 1U & uVar5) * 4);
      if (iVar3 != -1) {
        while (puVar4 = (ulonglong *)
                        ((longlong)iVar3 * 0x20 +
                        *(longlong *)
                         &(param_2->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap),
              (IPhysicsProxyBase *)*puVar4 != apIStackX_10[0]) {
          iVar3 = (int)puVar4[3];
          if (iVar3 == -1) {
            return;
          }
        }
        puVar7 = puVar4 + 1;
        if (puVar4 == (ulonglong *)0x0) {
          puVar7 = (ulonglong *)0x0;
        }
        if (puVar7 != (ulonglong *)0x0) {
          TSet<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::RemoveImpl<IPhysicsProxyBase_const_*>
                    ((TSet<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&(param_2->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap,uVar5,
                     apIStackX_10);
        }
      }
    }
  }
  return;
}

// Call @ 14407ee60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::GeometryCollectionInternal::FGeometryCollectionProximitySpatial::ComputeCoplanarContacts'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::GeometryCollectionInternal::FGeometryCollectionProximitySpatial::ComputeCoplanarContacts'::
  __l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14407ee70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::GeometryCollectionInternal::FGeometryCollectionProximitySpatial::GenerateSurfaceNormals'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::GeometryCollectionInternal::FGeometryCollectionProximitySpatial::GenerateSurfaceNormals'::
  __l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14407ee80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::GeometryCollectionInternal::FGeometryCollectionProximitySpatial::InitGeoNormalBins'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::GeometryCollectionInternal::FGeometryCollectionProximitySpatial::InitGeoNormalBins'::__l2::
  <lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14407ee90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::GeometryCollectionInternal::FGeometryCollectionProximitySpatial::TransformVertices'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::GeometryCollectionInternal::FGeometryCollectionProximitySpatial::TransformVertices'::__l2::
  <lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14407eea0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FPBDRigidsSolver::UnregisterObject'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  
  ::Chaos::FCharacterGroundConstraintProxy::DestroyOnPhysicsThread
            (*(FCharacterGroundConstraintProxy **)param_1,
             *(FPBDRigidsSolver **)((longlong)param_1 + 8));
  lVar1 = *(longlong *)((longlong)param_1 + 8);
  plVar2 = *(longlong **)(lVar1 + 0xc78);
  if (plVar2 != plVar2 + *(int *)(lVar1 + 0xc80)) {
    plVar4 = plVar2;
    do {
      if (*plVar4 == *(longlong *)param_1) {
        iVar3 = (int)((longlong)plVar4 - (longlong)plVar2 >> 3);
        if (iVar3 != -1) {
          memmove(plVar2 + iVar3,plVar2 + iVar3 + 1,
                  (longlong)((*(int *)(lVar1 + 0xc80) - iVar3) + -1) << 3);
          *(int *)(lVar1 + 0xc80) = *(int *)(lVar1 + 0xc80) + -1;
        }
        break;
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar2 + *(int *)(lVar1 + 0xc80));
  }
  plVar2 = *(longlong **)param_1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2,1);
  }
  return;
}

// Call @ 14407eeb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FPBDRigidsSolver::UnregisterObject'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  ForAnyElementType *pFVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uStack_18;
  int iStack_10;
  undefined4 uStack_c;
  
  ::Chaos::FPBDRigidsSolver::ClearCollisionEventsForProxy
            (*(FPBDRigidsSolver **)((longlong)param_1 + 8),*(IPhysicsProxyBase **)param_1);
  lVar7 = *(longlong *)param_1;
  if (*(TGeometryParticleHandleImp<double,3,1> **)(lVar7 + 0x168) !=
      (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    ::Chaos::FPBDRigidsEvolutionBase::DisableParticle
              (*(FPBDRigidsEvolutionBase **)(*(longlong *)((longlong)param_1 + 8) + 0xbd0),
               *(TGeometryParticleHandleImp<double,3,1> **)(lVar7 + 0x168));
    lVar7 = *(longlong *)param_1;
  }
  lVar9 = *(longlong *)((longlong)param_1 + 8);
  plVar2 = *(longlong **)(lVar9 + 0xc58);
  for (plVar8 = plVar2; plVar8 != plVar2 + *(int *)(lVar9 + 0xc60); plVar8 = plVar8 + 1) {
    if (*plVar8 == lVar7) {
      iVar6 = (int)((longlong)plVar8 - (longlong)plVar2 >> 3);
      if (iVar6 != -1) {
        memmove(plVar2 + iVar6,plVar2 + iVar6 + 1,
                (longlong)((*(int *)(lVar9 + 0xc60) - iVar6) + -1) << 3);
        *(int *)(lVar9 + 0xc60) = *(int *)(lVar9 + 0xc60) + -1;
        lVar9 = *(longlong *)((longlong)param_1 + 8);
      }
      break;
    }
  }
  if (::Chaos::bResimDelayDestroyObject != false) {
    lVar9 = *(longlong *)((longlong)param_1 + 8);
    if (*(longlong *)(lVar9 + 0x238) != 0) {
      iStack_10 = *(int *)(*(longlong *)(lVar9 + 0x238) + 0x10);
      goto LAB_14406fad3;
    }
  }
  iStack_10 = 0;
LAB_14406fad3:
  uStack_18 = *(undefined8 *)param_1;
  pFVar1 = (ForAnyElementType *)(lVar9 + 0x17b8);
  iStack_10 = iStack_10 + *(int *)(lVar9 + 0x328);
  if (((pFVar1->Data <= (FScriptContainerElement *)&uStack_18) &&
      ((FScriptContainerElement *)&uStack_18 <
       pFVar1->Data + (longlong)*(int *)(lVar9 + 0x17c4) * 0x10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = *(int *)(lVar9 + 0x17c0);
  if (iVar6 == *(int *)(lVar9 + 0x17c4)) {
    iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar1,(int *)(lVar9 + 0x17c4));
  }
  *(int *)(lVar9 + 0x17c0) = iVar6 + 1;
  pFVar3 = pFVar1->Data;
  *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0x10) = uStack_18;
  *(ulonglong *)(pFVar3 + (longlong)iVar6 * 0x10 + 8) = CONCAT44(uStack_c,iStack_10);
  return;
}

// Call @ 14407eec0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FPBDRigidsSolver::UnregisterObject'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  ForAnyElementType *pFVar1;
  longlong lVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 uStack_18;
  int iStack_10;
  undefined4 uStack_c;
  
  ::Chaos::FPBDRigidsSolver::ClearCollisionEventsForProxy
            (*(FPBDRigidsSolver **)((longlong)param_1 + 8),*(IPhysicsProxyBase **)param_1);
  lVar2 = *(longlong *)((longlong)param_1 + 8);
  plVar3 = *(longlong **)(lVar2 + 0xc38);
  if (plVar3 != plVar3 + *(int *)(lVar2 + 0xc40)) {
    plVar8 = plVar3;
    do {
      if (*plVar8 == *(longlong *)param_1) {
        iVar7 = (int)((longlong)plVar8 - (longlong)plVar3 >> 3);
        if (iVar7 != -1) {
          memmove(plVar3 + iVar7,plVar3 + iVar7 + 1,
                  (longlong)((*(int *)(lVar2 + 0xc40) - iVar7) + -1) << 3);
          *(int *)(lVar2 + 0xc40) = *(int *)(lVar2 + 0xc40) + -1;
        }
        break;
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar3 + *(int *)(lVar2 + 0xc40));
  }
  FGeometryCollectionPhysicsProxy::SyncBeforeDestroy(*(FGeometryCollectionPhysicsProxy **)param_1);
  if ((::Chaos::bResimDelayDestroyObject == false) ||
     (lVar2 = *(longlong *)(*(longlong *)((longlong)param_1 + 8) + 0x238), lVar2 == 0)) {
    iStack_10 = 0;
  }
  else {
    iStack_10 = *(int *)(lVar2 + 0x10);
  }
  lVar2 = *(longlong *)((longlong)param_1 + 8);
  uStack_18 = *(undefined8 *)param_1;
  pFVar1 = (ForAnyElementType *)(lVar2 + 0x17a8);
  iStack_10 = *(int *)(lVar2 + 0x328) + iStack_10;
  if (((pFVar1->Data <= (FScriptContainerElement *)&uStack_18) &&
      ((FScriptContainerElement *)&uStack_18 <
       pFVar1->Data + (longlong)*(int *)(lVar2 + 0x17b4) * 0x10)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = *(int *)(lVar2 + 0x17b0);
  if (iVar7 == *(int *)(lVar2 + 0x17b4)) {
    iVar7 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar1,(int *)(lVar2 + 0x17b4));
  }
  *(int *)(lVar2 + 0x17b0) = iVar7 + 1;
  pFVar4 = pFVar1->Data;
  *(undefined8 *)(pFVar4 + (longlong)iVar7 * 0x10) = uStack_18;
  *(ulonglong *)(pFVar4 + (longlong)iVar7 * 0x10 + 8) = CONCAT44(uStack_c,iStack_10);
  return;
}

// Call @ 14407eed0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FPBDRigidsSolver::UnregisterObject'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)(*(longlong *)((longlong)param_1 + 8) + 0x238);
  if (lVar1 != 0) {
    ::Chaos::
    TDirtyObjects<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle>_>
    ::Remove((TDirtyObjects<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FJointStateBase,Chaos::FPBDJointConstraintHandle>_>
              *)(lVar1 + 0x2f8),*(FPBDJointConstraintHandle **)(*(longlong *)param_1 + 0x48),Default
            );
  }
  ::Chaos::FJointConstraintPhysicsProxy::DestroyOnPhysicsThread
            (*(FJointConstraintPhysicsProxy **)param_1,*(FPBDRigidsSolver **)((longlong)param_1 + 8)
            );
  lVar1 = *(longlong *)((longlong)param_1 + 8);
  plVar2 = *(longlong **)(lVar1 + 0xc68);
  if (plVar2 != plVar2 + *(int *)(lVar1 + 0xc70)) {
    plVar4 = plVar2;
    do {
      if (*plVar4 == *(longlong *)param_1) {
        iVar3 = (int)((longlong)plVar4 - (longlong)plVar2 >> 3);
        if (iVar3 != -1) {
          memmove(plVar2 + iVar3,plVar2 + iVar3 + 1,
                  (longlong)((*(int *)(lVar1 + 0xc70) - iVar3) + -1) << 3);
          *(int *)(lVar1 + 0xc70) = *(int *)(lVar1 + 0xc70) + -1;
        }
        break;
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar2 + *(int *)(lVar1 + 0xc70));
  }
  plVar2 = *(longlong **)param_1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2,1);
  }
  return;
}

// Call @ 14407eee0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FPBDRigidsSolver::UnregisterObject'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  ForAnyElementType *pFVar1;
  FScriptContainerElement *pFVar2;
  uint *puVar3;
  longlong lVar4;
  TGeometryParticleHandleImp<double,3,1> *pTVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  byte bVar9;
  bool bVar10;
  int iVar11;
  undefined4 uVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  undefined8 uStack_38;
  int iStack_30;
  undefined4 uStack_2c;
  TGeometryParticleHandleImp<double,3,1> *pTStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (5 < (byte)LogPBDRigidsSolver._0_1_) {
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPBDRigidsSolver);
  }
  ::Chaos::FPBDRigidsSolver::ClearCollisionEventsForProxy
            (*(FPBDRigidsSolver **)((longlong)param_1 + 0x10),*(IPhysicsProxyBase **)param_1);
  pTVar5 = *(TGeometryParticleHandleImp<double,3,1> **)(*(longlong *)param_1 + 0x48);
  lVar6 = *(longlong *)(*(longlong *)((longlong)param_1 + 0x10) + 0x238);
  if (lVar6 != 0) {
    ::Chaos::
    TDirtyObjects<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>_>
    ::Remove((TDirtyObjects<Chaos::FRewindData::TDirtyObjectInfo<Chaos::FGeometryParticleStateBase,Chaos::TGeometryParticleHandleImp<double,3,1>_>_>
              *)(lVar6 + 0x298),pTVar5,Default);
  }
  iStack_30 = 0;
  *(undefined8 *)(*(longlong *)param_1 + 0x48) = 0;
  lVar6 = *(longlong *)((longlong)param_1 + 0x10);
  if ((::Chaos::bResimDelayDestroyObject != false) && (*(longlong *)(lVar6 + 0x238) != 0)) {
    iStack_30 = *(int *)(*(longlong *)(lVar6 + 0x238) + 0x10);
  }
  uStack_38 = *(undefined8 *)param_1;
  pFVar1 = (ForAnyElementType *)(lVar6 + 0x1798);
  uStack_20 = *(undefined4 *)((longlong)param_1 + 8);
  iStack_30 = *(int *)(lVar6 + 0x328) + iStack_30;
  pTStack_28 = pTVar5;
  if ((pFVar1->Data <= (FScriptContainerElement *)&uStack_38) &&
     ((FScriptContainerElement *)&uStack_38 <
      pFVar1->Data + (longlong)*(int *)(lVar6 + 0x17a4) * 0x20)) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar11 = *(int *)(lVar6 + 0x17a0);
  if (iVar11 == *(int *)(lVar6 + 0x17a4)) {
    iVar11 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,pFVar1,(int *)(lVar6 + 0x17a4));
  }
  *(int *)(lVar6 + 0x17a0) = iVar11 + 1;
  pFVar7 = pFVar1->Data;
  pFVar2 = pFVar7 + (longlong)iVar11 * 0x20;
  *(undefined8 *)pFVar2 = uStack_38;
  *(ulonglong *)(pFVar2 + 8) = CONCAT44(uStack_2c,iStack_30);
  pFVar7 = pFVar7 + (longlong)iVar11 * 0x20 + 0x10;
  *(TGeometryParticleHandleImp<double,3,1> **)pFVar7 = pTStack_28;
  *(ulonglong *)(pFVar7 + 8) = CONCAT44(uStack_1c,uStack_20);
  if (pTVar5 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    ::Chaos::FPBDRigidsEvolutionBase::DisableParticle
              (*(FPBDRigidsEvolutionBase **)(*(longlong *)((longlong)param_1 + 0x10) + 0xbd0),pTVar5
              );
  }
  uVar14 = *(uint *)((longlong)param_1 + 8);
  lVar6 = *(longlong *)((longlong)param_1 + 0x10);
  if ((-1 < (int)uVar14) && ((int)uVar14 < *(int *)(lVar6 + 0xc28))) {
    if (*(int *)(lVar6 + 0xc28) <= (int)uVar14) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index>=0 && Index<NumBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x5c6,L"");
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    lVar13 = *(longlong *)(lVar6 + 0xc20);
    if (*(longlong *)(lVar6 + 0xc20) == 0) {
      lVar13 = lVar6 + 0xc10;
    }
    if ((*(uint *)(lVar13 + (longlong)((int)(uVar14 + ((int)uVar14 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar14 & 0x1f) & 1) != 0) {
      lVar6 = *(longlong *)((longlong)param_1 + 0x10);
      iVar11 = *(int *)((longlong)param_1 + 8);
      lVar13 = *(longlong *)(lVar6 + 0xc00);
      bVar9 = (byte)iVar11 & 0x1f;
      uVar14 = 1 << bVar9 | 1U >> 0x20 - bVar9;
      if ((iVar11 < 0) || (*(int *)(lVar6 + 0xc28) <= iVar11)) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5be,L"");
        if (bVar10) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      lVar4 = (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4;
      lVar15 = *(longlong *)(lVar6 + 0xc20);
      if (*(longlong *)(lVar6 + 0xc20) == 0) {
        lVar15 = lVar6 + 0xc10;
      }
      if ((*(uint *)(lVar15 + lVar4) & uVar14) == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("AllocationFlags[Index]",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                            ,0xc5,L"");
        if (bVar10) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      if (*(int *)(lVar6 + 0xc34) != 0) {
        *(int *)(lVar13 + (longlong)*(int *)(lVar6 + 0xc30) * 8) = iVar11;
      }
      uVar12 = 0xffffffff;
      *(undefined4 *)(lVar13 + (longlong)iVar11 * 8) = 0xffffffff;
      if (0 < *(int *)(lVar6 + 0xc34)) {
        uVar12 = *(undefined4 *)(lVar6 + 0xc30);
      }
      *(undefined4 *)(lVar13 + 4 + (longlong)iVar11 * 8) = uVar12;
      *(int *)(lVar6 + 0xc34) = *(int *)(lVar6 + 0xc34) + 1;
      *(int *)(lVar6 + 0xc30) = iVar11;
      if ((iVar11 < 0) || (*(int *)(lVar6 + 0xc28) <= iVar11)) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5be,L"");
        if (bVar10) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      lVar13 = *(longlong *)(lVar6 + 0xc20);
      if (*(longlong *)(lVar6 + 0xc20) == 0) {
        lVar13 = lVar6 + 0xc10;
      }
      puVar3 = (uint *)(lVar13 + lVar4);
      *puVar3 = *puVar3 & ~uVar14;
    }
  }
  return;
}

// Call @ 14407eef0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FPBDRigidsSolver::UnregisterObject'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  longlong *plVar1;
  
  ::Chaos::FSuspensionConstraintPhysicsProxy::DestroyOnPhysicsThread
            (*(FSuspensionConstraintPhysicsProxy **)((longlong)param_1 + 8),
             *(FPBDRigidsSolver **)((longlong)param_1 + 0x10));
  plVar1 = *(longlong **)((longlong)param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014407ef1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1,1);
    return;
  }
  return;
}

// Call @ 14407ef30

float __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::GeometryCollectionInternal::FGeometryCollectionProximitySpatial::InitProximityFromVertices'::__l9::<lambda_1>,float,int_const_&>
::Call(void *param_1,int *param_2)

{
  uint uVar1;
  longlong *plVar2;
  float *pfVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  plVar2 = *(longlong **)((longlong)param_1 + 8);
  uVar1 = *param_2;
  lVar8 = (longlong)(int)uVar1;
  pfVar3 = *(float **)param_1;
  uVar7 = 0;
  if ((int)uVar1 < (int)plVar2[1]) {
    uVar7 = ~uVar1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      fVar9 = (float)(*pcVar5)();
      return fVar9;
    }
  }
  lVar4 = *plVar2;
  fVar9 = pfVar3[1] - *(float *)(lVar4 + 4 + lVar8 * 0xc);
  fVar11 = *pfVar3 - *(float *)(lVar4 + lVar8 * 0xc);
  fVar10 = pfVar3[2] - *(float *)(lVar4 + 8 + lVar8 * 0xc);
  return fVar9 * fVar9 + fVar11 * fVar11 + fVar10 * fVar10;
}

// Call @ 14407ef40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionProximityUtility::UpdateProximity'::__l19::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `FGeometryCollectionProximityUtility::UpdateProximity'::__l19::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14407ef50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FPBDRigidsSolver::FPBDRigidsSolver'::__l2::<lambda_2>,void,double>::Call
          (void *param_1,double *param_2)

{
  ::Chaos::FPBDRigidsSolver::OnEvolutionPreIntegrate(*(FPBDRigidsSolver **)param_1,*param_2);
  return;
}

// Call @ 14407ef70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::ParticleViewParallelForImp<Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>,`Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<`Chaos::FPBDRigidsEvolutionGBF::EndFrame'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<`Chaos::FPBDRigidsEvolutionGBF::EndFrame'::__l2::<lambda_1>_>'::__l2::<lambda_2>_>'::__l10::<lambda_2>,void,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  `Chaos::
  ParticleViewParallelForImp<Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>,`Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<`Chaos::FPBDRigidsEvolutionGBF::EndFrame'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<`Chaos::FPBDRigidsEvolutionGBF::EndFrame'::__l2::<lambda_1>_>'::__l2::<lambda_2>_>'
  ::__l10::<lambda_2>::operator()(param_1,*param_2,*param_3);
  return;
}

// Call @ 14407ef80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FPBDRigidsSolver::FPBDRigidsSolver'::__l2::<lambda_3>,void,double>::Call
          (void *param_1,double *param_2)

{
  ::Chaos::FPBDRigidsSolver::OnEvolutionPostIntegrate(*(FPBDRigidsSolver **)param_1,*param_2);
  return;
}

// Call @ 14407efa0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionProximityUtility::EnumerateNeighbors'::__l2::<lambda_3>,bool,int>
::Call(void *param_1,int *param_2)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  lVar2 = *(longlong *)param_1;
  uVar1 = *param_2;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x18)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  return *(int *)(*(longlong *)(lVar2 + 0x10) + (longlong)(int)uVar1 * 4) == 1;
}

// Call @ 14407f020

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::ParticleViewParallelForImp<Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>,`Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<`Chaos::FPBDRigidsEvolutionGBF::EndFrame'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<`Chaos::FPBDRigidsEvolutionGBF::EndFrame'::__l2::<lambda_1>_>'::__l2::<lambda_2>_>'::__l12::<lambda_3>,void,int,int>
::Call(void *param_1,int *param_2,int *param_3)

{
  `Chaos::
  ParticleViewParallelForImp<Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>,`Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<`Chaos::FPBDRigidsEvolutionGBF::EndFrame'::__l2::<lambda_1>_>'::__l2::<lambda_1>,`Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<`Chaos::FPBDRigidsEvolutionGBF::EndFrame'::__l2::<lambda_1>_>'::__l2::<lambda_2>_>'
  ::__l12::<lambda_3>::operator()(param_1,*param_2,*param_3);
  return;
}

// Call @ 14407f030

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FPBDRigidsSolver::FPBDRigidsSolver'::__l2::<lambda_4>,void,double>::Call
          (void *param_1,double *param_2)

{
  `Chaos::FPBDRigidsSolver::FPBDRigidsSolver'::__l2::<lambda_4>::operator()(param_1,*param_2);
  return;
}

// Call @ 14407f040

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionProximityUtility::EnumerateNeighbors'::__l2::<lambda_4>,void,int>
::Call(void *param_1,int *param_2)

{
  `FGeometryCollectionProximityUtility::EnumerateNeighbors'::__l2::<lambda_4>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14407f050

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FPBDRigidsSolver::FPBDRigidsSolver'::__l2::<lambda_5>,void,double>::Call
          (void *param_1,double *param_2)

{
  `Chaos::FPBDRigidsSolver::FPBDRigidsSolver'::__l2::<lambda_5>::operator()(param_1,*param_2);
  return;
}

// Call @ 14407f060

bool __cdecl
UE::Core::Private::Function::TFunctionRefCaller<UE::Geometry::<lambda_6_>,bool,int_const_&>::Call
          (void *param_1,int *param_2)

{
  return false;
}

// Call @ 1440d6f30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClusterUnionPhysicsProxy::AddPhysicsObjects_External'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  int iVar1;
  longlong lVar2;
  FPhysicsObject **ppFVar3;
  code *pcVar4;
  bool bVar5;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar6;
  FReadPhysicsObjectInterface<1> aFStackX_8 [8];
  undefined4 uStack_2c;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> TStack_28;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> TStack_18;
  
  aFStackX_8[0] = ::Chaos::FPhysicsObjectInternalInterface::GetRead();
  if (((*(longlong *)param_1 != 0) && (lVar2 = *(longlong *)(*(longlong *)param_1 + 8), lVar2 != 0))
     && (lVar2 = *(longlong *)(lVar2 + 0xbd0), lVar2 != 0)) {
    ppFVar3 = *(FPhysicsObject ***)((longlong)param_1 + 8);
    iVar1 = *(int *)((longlong)param_1 + 0x10);
    if ((iVar1 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TStack_28._12_4_ = uStack_2c;
    TStack_28.ArrayNum = iVar1;
    TStack_28.DataPtr = ppFVar3;
    pTVar6 = ::Chaos::FReadPhysicsObjectInterface<1>::GetAllRigidParticles
                       (aFStackX_8,&TStack_18,&TStack_28,false);
    ::Chaos::FClusterUnionManager::AddPendingClusterIndexOperation
              ((FClusterUnionManager *)(lVar2 + 0x660),*(int *)(*(longlong *)param_1 + 0x170),Add,
               pTVar6);
    if (TStack_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_18.AllocatorInstance.Data);
    }
  }
  return;
}

// Call @ 1440d6f40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClusterUnionPhysicsProxy::BulkSetChildToParent_External'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  code *pcVar1;
  bool bVar2;
  FReadPhysicsObjectInterface<1> aFStackX_8 [8];
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> TStack_38;
  FPhysicsObject **ppFStack_28;
  int iStack_20;
  undefined4 uStack_1c;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> TStack_18;
  
  aFStackX_8[0] = ::Chaos::FPhysicsObjectInternalInterface::GetRead();
  iStack_20 = *(int *)((longlong)param_1 + 0x10);
  ppFStack_28 = *(FPhysicsObject ***)((longlong)param_1 + 8);
  if (iStack_20 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TStack_18._12_4_ = uStack_1c;
  TStack_18.ArrayNum = iStack_20;
  TStack_18.DataPtr = ppFStack_28;
  ::Chaos::FReadPhysicsObjectInterface<1>::GetAllRigidParticles
            (aFStackX_8,&TStack_38,&TStack_18,true);
  if (TStack_38.ArrayNum == *(int *)((longlong)param_1 + 0x10)) {
    ::Chaos::FClusterUnionManager::UpdateClusterUnionParticlesChildToParent
              ((FClusterUnionManager *)
               (*(longlong *)(*(longlong *)(*(longlong *)param_1 + 8) + 0xbd0) + 0x660),
               *(int *)(*(longlong *)param_1 + 0x170),&TStack_38,
               (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x18),*(bool *)((longlong)param_1 + 0x28));
  }
  else {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2667941677485784170>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\ClusterUnionPhysicsProxy.cpp"
                       ,0x396,"Particles.Num() == Objects.Num()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (TStack_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_38.AllocatorInstance.Data);
  }
  return;
}

// Call @ 1440d6f50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClusterUnionPhysicsProxy::ChangeMainParticleStatus_External'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  FClusterUnion *pFVar9;
  uint uVar10;
  undefined1 *puVar11;
  byte *pbVar12;
  ForAnyElementType FVar13;
  FReadPhysicsObjectInterface<1> aFStackX_8 [8];
  undefined1 auStackX_10 [8];
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> TStack_58;
  FPhysicsObject **ppFStack_48;
  int iStack_40;
  undefined4 uStack_3c;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> TStack_38;
  
  aFStackX_8[0] = ::Chaos::FPhysicsObjectInternalInterface::GetRead();
  iStack_40 = *(int *)((longlong)param_1 + 0x10);
  ppFStack_48 = *(FPhysicsObject ***)((longlong)param_1 + 8);
  if ((iStack_40 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  TStack_38._12_4_ = uStack_3c;
  TStack_38.ArrayNum = iStack_40;
  TStack_38.DataPtr = ppFStack_48;
  ::Chaos::FReadPhysicsObjectInterface<1>::GetAllRigidParticles
            (aFStackX_8,&TStack_58,&TStack_38,false);
  pFVar9 = ::Chaos::FClusterUnionManager::FindClusterUnion
                     ((FClusterUnionManager *)
                      (*(longlong *)(*(longlong *)(*(longlong *)param_1 + 8) + 0xbd0) + 0x660),
                      *(int *)(*(longlong *)param_1 + 0x170));
  iVar6 = TStack_58.ArrayNum;
  if (pFVar9 != (FClusterUnion *)0x0) {
    pFVar1 = TStack_58.AllocatorInstance.Data + (longlong)TStack_58.ArrayNum * 8;
    FVar13.Data = TStack_58.AllocatorInstance.Data;
    while( true ) {
      if (TStack_58.ArrayNum != iVar6) {
        `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(auStackX_10);
      }
      if (FVar13.Data == pFVar1) break;
      uVar3 = *(ulonglong *)FVar13.Data;
      uVar10 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
      uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
      if (*(int *)&(pFVar9->ChildProperties).field_0x8 ==
          *(int *)&(pFVar9->ChildProperties).field_0x34) {
LAB_1440ceac1:
        FVar13.Data = FVar13.Data + 8;
      }
      else {
        puVar4 = *(undefined1 **)&(pFVar9->ChildProperties).field_0x40;
        puVar11 = &(pFVar9->ChildProperties).field_0x38;
        if (puVar4 != (undefined1 *)0x0) {
          puVar11 = puVar4;
        }
        iVar8 = *(int *)(puVar11 +
                        (ulonglong)
                        (*(int *)&(pFVar9->ChildProperties).field_0x48 - 1U &
                        (uVar10 >> 0x10 ^ uVar10)) * 4);
        if (iVar8 == -1) goto LAB_1440ceac1;
        do {
          lVar2 = *(longlong *)&pFVar9->ChildProperties + (longlong)iVar8 * 0x18;
          if (*(ulonglong *)(*(longlong *)&pFVar9->ChildProperties + (longlong)iVar8 * 0x18) ==
              uVar3) {
            pbVar12 = (byte *)(lVar2 + 8);
            if (lVar2 == 0) {
              pbVar12 = (byte *)0x0;
            }
            if (pbVar12 != (byte *)0x0) {
              *pbVar12 = *(char *)((longlong)param_1 + 0x18) == '\0' | *pbVar12 & 0xfe;
            }
            goto LAB_1440ceac1;
          }
          iVar8 = *(int *)(lVar2 + 0x10);
        } while (iVar8 != -1);
        FVar13.Data = FVar13.Data + 8;
      }
    }
  }
  if (TStack_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_58.AllocatorInstance.Data);
  }
  return;
}

// Call @ 1440d6f60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClusterUnionPhysicsProxy::RemovePhysicsObjects_External'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  TArray<Chaos::FPhysicsObject_*,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar6;
  FReadPhysicsObjectInterface<1> aFStackX_8 [8];
  undefined4 uStack_3c;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> TStack_38;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> TStack_28;
  TArray<Chaos::FPhysicsObject_*,TSizedDefaultAllocator<32>_> TStack_18;
  
  aFStackX_8[0] = ::Chaos::FPhysicsObjectInternalInterface::GetRead();
  if (((*(longlong *)param_1 != 0) && (lVar2 = *(longlong *)(*(longlong *)param_1 + 8), lVar2 != 0))
     && (lVar2 = *(longlong *)(lVar2 + 0xbd0), lVar2 != 0)) {
    pTVar5 = TSet<Chaos::FPhysicsObject_*,DefaultKeyFuncs<Chaos::FPhysicsObject_*,0>,FDefaultSetAllocator>
             ::Array((TSet<Chaos::FPhysicsObject_*,DefaultKeyFuncs<Chaos::FPhysicsObject_*,0>,FDefaultSetAllocator>
                      *)((longlong)param_1 + 8),&TStack_18);
    TStack_38.DataPtr = (FPhysicsObject **)(pTVar5->AllocatorInstance).Data;
    iVar1 = pTVar5->ArrayNum;
    if ((iVar1 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TStack_38._12_4_ = uStack_3c;
    TStack_38.ArrayNum = iVar1;
    pTVar6 = ::Chaos::FReadPhysicsObjectInterface<1>::GetAllRigidParticles
                       (aFStackX_8,&TStack_28,&TStack_38,false);
    ::Chaos::FClusterUnionManager::AddPendingClusterIndexOperation
              ((FClusterUnionManager *)(lVar2 + 0x660),*(int *)(*(longlong *)param_1 + 0x170),Remove
               ,pTVar6);
    if (TStack_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_28.AllocatorInstance.Data);
    }
    if (TStack_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_18.AllocatorInstance.Data);
    }
  }
  return;
}

// Call @ 1440d6f70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClusterUnionPhysicsProxy::SetIsAnchored_External'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  char cVar1;
  FRigidClusteredFlags FVar2;
  longlong lVar3;
  undefined8 *puVar4;
  FRigidClusteredFlags_u_0 *pFVar5;
  FClusterUnion *pFVar6;
  
  lVar3 = *(longlong *)param_1;
  puVar4 = *(undefined8 **)(lVar3 + 0x168);
  if ((((puVar4 != (undefined8 *)0x0) && (lVar3 != 0)) && (*(longlong *)(lVar3 + 8) != 0)) &&
     (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 8) + 0xbd0), lVar3 != 0)) {
    pFVar5 = &::Chaos::TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                        ((TPBDRigidClusteredParticles<double,3> *)*puVar4,*(int *)(puVar4 + 1))->
              field0_0x0;
    cVar1 = *(char *)((longlong)param_1 + 8);
    FVar2.field0_0x0 = (FRigidClusteredFlags_u_0)pFVar5->Bits;
    pFVar5 = &::Chaos::TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                        ((TPBDRigidClusteredParticles<double,3> *)
                         **(undefined8 **)(*(longlong *)param_1 + 0x168),
                         *(int *)(*(undefined8 **)(*(longlong *)param_1 + 0x168) + 1))->field0_0x0;
    pFVar5->Bits = pFVar5->Bits ^ (cVar1 * '\x02' ^ pFVar5->Bits) & 2;
    pFVar6 = ::Chaos::FClusterUnionManager::FindClusterUnion
                       ((FClusterUnionManager *)(lVar3 + 0x660),
                        *(int *)(*(longlong *)param_1 + 0x170));
    if (pFVar6 != (FClusterUnion *)0x0) {
      pFVar6->bAnchorLock = true;
    }
    if (((byte)FVar2.field0_0x0 >> 1 & 1) != *(byte *)((longlong)param_1 + 8)) {
      ::Chaos::FClusterUnionManager::RequestDeferredClusterPropertiesUpdate
                ((FClusterUnionManager *)(lVar3 + 0x660),*(int *)(*(longlong *)param_1 + 0x170),
                 UpdateKinematicProperties);
    }
  }
  return;
}

// Call @ 1440d6f80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClusterUnionPhysicsProxy::SetMass_External'::__l2::<lambda_1>,void>::
Call(void *param_1)

{
  float fVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  
  plVar3 = *(longlong **)(*(longlong *)param_1 + 0x168);
  if (plVar3 != (longlong *)0x0) {
    lVar4 = *plVar3;
    uVar2 = *(uint *)(plVar3 + 1);
    fVar1 = *(float *)((longlong)param_1 + 8);
    uVar7 = 0;
    if ((int)uVar2 < *(int *)(lVar4 + 0x3d0)) {
      uVar7 = ~uVar2 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    *(double *)(*(longlong *)(lVar4 + 0x3c8) + (longlong)(int)uVar2 * 8) = (double)fVar1;
    fVar1 = *(float *)((longlong)param_1 + 0xc);
    uVar2 = *(uint *)(*(longlong **)(*(longlong *)param_1 + 0x168) + 1);
    lVar4 = **(longlong **)(*(longlong *)param_1 + 0x168);
    uVar7 = 0;
    if ((int)uVar2 < *(int *)(lVar4 + 1000)) {
      uVar7 = ~uVar2 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    *(double *)(*(longlong *)(lVar4 + 0x3e0) + (longlong)(int)uVar2 * 8) = (double)fVar1;
    ::Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetI
              (*(TPBDRigidParticleHandleImp<double,3,1> **)(*(longlong *)param_1 + 0x168),
               (TVector<float,3> *)((longlong)param_1 + 0x10));
    ::Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetInvI
              (*(TPBDRigidParticleHandleImp<double,3,1> **)(*(longlong *)param_1 + 0x168),
               (TVector<float,3> *)((longlong)param_1 + 0x1c));
  }
  return;
}

// Call @ 1440d6f90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClusterUnionPhysicsProxy::SetObjectState_External'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  EObjectStateType EVar1;
  longlong lVar2;
  FPBDRigidsEvolutionBase *this;
  EObjectStateType EVar3;
  
  if (*(TPBDRigidParticleHandleImp<double,3,1> **)(*(longlong *)param_1 + 0x168) !=
      (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
    EVar1 = *(EObjectStateType *)((longlong)param_1 + 8);
    EVar3 = ::Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                      (*(TPBDRigidParticleHandleImp<double,3,1> **)(*(longlong *)param_1 + 0x168));
    if ((((EVar3 != EVar1) && (lVar2 = *(longlong *)param_1, lVar2 != 0)) &&
        (*(longlong *)(lVar2 + 8) != 0)) &&
       (this = *(FPBDRigidsEvolutionBase **)(*(longlong *)(lVar2 + 8) + 0xbd0),
       this != (FPBDRigidsEvolutionBase *)0x0)) {
      ::Chaos::FPBDRigidsEvolutionBase::SetParticleObjectState
                (this,*(TPBDRigidParticleHandleImp<double,3,1> **)(lVar2 + 0x168),EVar1);
    }
  }
  return;
}

// Call @ 1440d7000

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClusterUnionPhysicsProxy::Wake_External'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  longlong lVar1;
  TGeometryParticleHandleImp<double,3,1> *this;
  FPBDRigidsEvolutionBase *this_00;
  EObjectStateType EVar2;
  
  lVar1 = *(longlong *)param_1;
  this = *(TGeometryParticleHandleImp<double,3,1> **)(lVar1 + 0x168);
  if ((((this != (TGeometryParticleHandleImp<double,3,1> *)0x0) && (lVar1 != 0)) &&
      (*(longlong *)(lVar1 + 8) != 0)) &&
     (this_00 = *(FPBDRigidsEvolutionBase **)(*(longlong *)(lVar1 + 8) + 0xbd0),
     this_00 != (FPBDRigidsEvolutionBase *)0x0)) {
    EVar2 = ::Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                      ((TPBDRigidParticleHandleImp<double,3,1> *)this);
    if (EVar2 == Sleeping) {
      ::Chaos::FPBDRigidsEvolutionBase::SetParticleObjectState
                (this_00,(TPBDRigidParticleHandleImp<double,3,1> *)this,Dynamic);
    }
    ::Chaos::Private::FPBDIslandManager::WakeParticleIslands(&this_00->IslandManager,this);
    ::Chaos::Private::FPBDIslandManager::FlagParticleUpdated(&this_00->IslandManager,this);
    return;
  }
  return;
}

// Call @ 1440d7040

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FClusterUnionPhysicsProxy::SetEnableStrainOnCollision_External'::__l5::<lambda_1>,void>
::Call(void *param_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(*(longlong *)param_1 + 0x40);
  *pbVar1 = *pbVar1 ^ (*(char *)((longlong)param_1 + 8) * '\x02' ^
                      *(byte *)(*(longlong *)param_1 + 0x40)) & 2;
  return;
}

// Call @ 1440d7060

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FRewindData::RegisterEvolutionCallbacks'::__l2::<lambda_3>,void,Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>_&>
::Call(void *param_1,TParticleView<Chaos::TPBDRigidParticles<double,3>_> *param_2)

{
  ::Chaos::FRewindData::ProcessDirtyKinematicTargets(*(FRewindData **)param_1,param_2);
  return;
}

// Call @ 1440d7070

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FRewindData::RegisterEvolutionCallbacks'::__l2::<lambda_4>,void,Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>_&>
::Call(void *param_1,TParticleView<Chaos::TPBDRigidParticles<double,3>_> *param_2)

{
  FRewindData *this;
  TParticleHandleBase<double,3>_u_0 *pTVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar5;
  TParticleHandleBase<double,3>_u_0 this_00;
  int iVar6;
  int iVar7;
  int iStack_4c;
  undefined1 auStack_48 [24];
  int iStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  
  this = *(FRewindData **)param_1;
  ::Chaos::TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::
  TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>
            ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)auStack_48,
             (TArray<Chaos::TSOAView<Chaos::TPBDRigidParticles<double,3>_>,TSizedDefaultAllocator<32>_>
              *)param_2);
  if ((TPBDRigidParticles<double,3> *)auStack_48._16_8_ != (TPBDRigidParticles<double,3> *)0x0) {
    this_00 = (TParticleHandleBase<double,3>_u_0)auStack_48._16_8_;
    iVar6 = iStack_30;
    iVar7 = 0;
    do {
      ::Chaos::TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)auStack_48);
      pTVar5 = ::Chaos::TPBDRigidParticles<double,3>::Handle(this_00.PBDRigidParticles,iVar6);
      ::Chaos::FRewindData::PushPTDirtyData(this,pTVar5,iVar7);
      ::Chaos::TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)auStack_48);
      do {
        uVar3 = auStack_48._8_8_;
        if ((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            auStack_48._8_8_ ==
            (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            0x0) {
          iVar6 = iVar6 + 1;
          iStack_30 = iVar6;
          if (iStack_24 <= iVar6) {
LAB_1440d0921:
            iStack_28 = iStack_28 + 1;
            ::Chaos::TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::SeekNonEmptySOA
                      ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)auStack_48);
            this_00 = (TParticleHandleBase<double,3>_u_0)auStack_48._16_8_;
            iVar6 = iStack_30;
          }
        }
        else {
          iVar6 = iStack_20 + 1;
          iStack_20 = iVar6;
          if (*(int *)(auStack_48._8_8_ + 8) <= iVar6) goto LAB_1440d0921;
          if ((iVar6 < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pTVar1 = *(TParticleHandleBase<double,3>_u_0 **)
                    (((ForAnyElementType *)uVar3)->Data + (longlong)iVar6 * 8);
          this_00 = (TParticleHandleBase<double,3>_u_0)pTVar1->GeometryParticles;
          iVar6 = *(int *)(pTVar1 + 1);
          if ((TPBDRigidParticles<double,3> *)this_00.GeometryParticles ==
              (TPBDRigidParticles<double,3> *)0x0) {
            iStack_4c = (uint)iStack_4c._1_3_ << 8;
          }
          else {
            iStack_4c = CONCAT31(iStack_4c._1_3_,(this_00.GeometryParticles)->MParticleType);
          }
          uStack_2c = iStack_4c;
          iStack_30 = iVar6;
          auStack_48._16_8_ = this_00;
        }
        if ((TPBDRigidParticles<double,3> *)this_00.GeometryParticles ==
            (TPBDRigidParticles<double,3> *)0x0) {
          return;
        }
        ::Chaos::TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                  ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)auStack_48);
        bVar4 = ::Chaos::TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                          ((TGeometryParticleHandleImp<double,3,0> *)(auStack_48 + 0x10));
      } while (bVar4);
      iVar7 = iVar7 + 1;
    } while ((TPBDRigidParticles<double,3> *)this_00.GeometryParticles !=
             (TPBDRigidParticles<double,3> *)0x0);
  }
  return;
}

// Call @ 14410d090

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ComputeMassPropertiesAndTriMeshes'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `ComputeMassPropertiesAndTriMeshes'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14410d0a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`GenerateInnerAndOuterRadiiIfNeeded'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `GenerateInnerAndOuterRadiiIfNeeded'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14410d0b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionPhysicsProxy::InitializeSharedCollisionStructures'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `FGeometryCollectionPhysicsProxy::InitializeSharedCollisionStructures'::__l2::<lambda_1>::
  operator()(param_1,*param_2);
  return;
}

// Call @ 14410d0c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionPhysicsProxy::SetDamageModel_External'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  EDamageModelTypeEnum EVar1;
  FGeometryCollectionPhysicsProxy *this;
  code *pcVar2;
  bool bVar3;
  EDamageEvaluationModel EVar4;
  
  EVar1 = *(EDamageModelTypeEnum *)((longlong)param_1 + 8);
  this = *(FGeometryCollectionPhysicsProxy **)param_1;
  (this->Parameters).DamageModel = EVar1;
  if (EVar1 != Chaos_Damage_Model_UserDefined_Damage_Threshold) {
    if (EVar1 == Chaos_Damage_Model_Material_Strength_And_Connectivity_DamageThreshold) {
      EVar4 = StrainFromMaterialStrengthAndConnectivity;
      goto LAB_14410d10b;
    }
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3832111606951575420>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\GeometryCollectionSimulationTypes.h"
                       ,0x84,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar4 = StrainFromDamageThreshold;
LAB_14410d10b:
  (this->Parameters).DamageEvaluationModel = EVar4;
  FGeometryCollectionPhysicsProxy::UpdateDamageThreshold_Internal(this);
  return;
}

// Call @ 14410d130

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionPhysicsProxy::SetDamagePropagationData_External'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)param_1;
  cVar2 = *(char *)((longlong)param_1 + 8);
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x10);
  *(undefined4 *)(lVar3 + 0x1c8) = *(undefined4 *)((longlong)param_1 + 0xc);
  *(undefined4 *)(lVar3 + 0x1cc) = uVar1;
  *(byte *)(lVar3 + 0x1c3) =
       (cVar2 * '\x02' ^ *(byte *)(lVar3 + 0x1c3)) & 2 ^ *(byte *)(lVar3 + 0x1c3);
  return;
}

// Call @ 14410d180

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionPhysicsProxy::SetDamageThresholds_External'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  FGeometryCollectionPhysicsProxy *this;
  
  this = *(FGeometryCollectionPhysicsProxy **)param_1;
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (&(this->Parameters).DamageThreshold,
             (TArray<float,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 8));
  FGeometryCollectionPhysicsProxy::UpdateDamageThreshold_Internal(this);
  return;
}

// Call @ 14410d1b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionPhysicsProxy::SetEnableDamageFromCollision_External'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(*(longlong *)param_1 + 0x1c2);
  *(byte *)(*(longlong *)param_1 + 0x1c2) =
       (*(char *)((longlong)param_1 + 8) << 5 ^ bVar1) & 0x20 ^ bVar1;
  return;
}

// Call @ 14410d1e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionPhysicsProxy::SetEnableGravity_External'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  FPBDRigidsEvolutionBase *this;
  TPBDRigidParticleHandleImp<double,3,1> *this_00;
  bool *pbVar5;
  undefined8 *puVar6;
  undefined1 auStackX_8 [8];
  
  lVar4 = *(longlong *)param_1;
  bVar2 = *(bool *)((longlong)param_1 + 8);
  *(uint *)(lVar4 + 0x1e0) = (uint)bVar2;
  if ((*(longlong *)(lVar4 + 8) != 0) &&
     (this = *(FPBDRigidsEvolutionBase **)(*(longlong *)(lVar4 + 8) + 0xbd0),
     this != (FPBDRigidsEvolutionBase *)0x0)) {
    puVar6 = *(undefined8 **)(lVar4 + 0x340);
    iVar3 = *(int *)(lVar4 + 0x348);
    puVar1 = puVar6 + iVar3;
    while( true ) {
      if (*(int *)(lVar4 + 0x348) != iVar3) {
        `TCheckedPointerIterator<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,int,0>::
        operator!='::__l2::<lambda_1>::operator()(auStackX_8);
      }
      if (puVar6 == puVar1) break;
      this_00 = (TPBDRigidParticleHandleImp<double,3,1> *)*puVar6;
      if (this_00 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        ::Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetGravityEnabled(this_00,bVar2);
        pbVar5 = ::Chaos::TPBDRigidParticleHandleImp<double,3,1>::Disabled(this_00);
        if (*pbVar5 == false) {
          ::Chaos::FPBDRigidsEvolutionBase::WakeParticle(this,this_00);
        }
      }
      puVar6 = puVar6 + 1;
    }
  }
  return;
}

// Call @ 14410d1f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionPhysicsProxy::SetGravityGroupIndex_External'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  ushort *puVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined1 auStackX_8 [8];
  
  lVar6 = *(longlong *)param_1;
  *(undefined4 *)(lVar6 + 0x1e0) = *(undefined4 *)((longlong)param_1 + 8);
  plVar12 = *(longlong **)(lVar6 + 0x340);
  iVar3 = *(int *)(lVar6 + 0x348);
  plVar2 = plVar12 + iVar3;
  while( true ) {
    if (*(int *)(lVar6 + 0x348) != iVar3) {
      auStackX_8[0] = 0;
      `TCheckedPointerIterator<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,int,0>::
      operator!='::__l2::<lambda_1>::operator()(auStackX_8);
    }
    if (plVar12 == plVar2) break;
    plVar7 = (longlong *)*plVar12;
    if (plVar7 != (longlong *)0x0) {
      uVar4 = *(uint *)(plVar7 + 1);
      lVar11 = *plVar7;
      iVar5 = *(int *)(lVar6 + 0x1e0);
      uVar10 = 0;
      if ((int)uVar4 < *(int *)(lVar11 + 0x2e0)) {
        uVar10 = ~uVar4 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      lVar11 = (longlong)(int)uVar4 * 0x10 + *(longlong *)(lVar11 + 0x2d8);
      if (7 < iVar5) {
        bVar9 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1166656608155992106>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\RigidParticleControlFlags.h"
                           ,0x2a,"GravityGroupIndex < 8");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      puVar1 = (ushort *)(lVar11 + 8);
      *puVar1 = *puVar1 ^ ((short)iVar5 << 5 ^ *(ushort *)(lVar11 + 8)) & 0xe0;
    }
    plVar12 = plVar12 + 1;
  }
  return;
}

// Call @ 14410d200

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionPhysicsProxy::SetMaterialOverrideMassScaleMultiplier_External'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  FGeometryCollectionPhysicsProxy::SetMaterialOverrideMassScaleMultiplier_Internal
            (*(FGeometryCollectionPhysicsProxy **)param_1,*(float *)((longlong)param_1 + 8));
  return;
}

// Call @ 14410d220

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionPhysicsProxy::SetNotifyBreakings_External'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  *(byte *)(*(longlong *)param_1 + 0x1c0) =
       *(char *)((longlong)param_1 + 8) << 7 | *(byte *)(*(longlong *)param_1 + 0x1c0) & 0x7f;
  return;
}

// Call @ 14410d250

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionPhysicsProxy::SetNotifyCrumblings_External'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(*(longlong *)param_1 + 0x1c1);
  *(byte *)(*(longlong *)param_1 + 0x1c1) =
       (*(char *)((longlong)param_1 + 8) << 2 ^ bVar1) & 4 ^ bVar1;
  bVar1 = *(byte *)(*(longlong *)param_1 + 0x1c1);
  *(byte *)(*(longlong *)param_1 + 0x1c1) =
       (*(char *)((longlong)param_1 + 9) << 3 ^ bVar1) & 8 ^ bVar1;
  return;
}

// Call @ 14410d2a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionPhysicsProxy::SetNotifyGlobalBreakings_External'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  byte bVar1;
  longlong lVar2;
  
  bVar1 = *(byte *)(*(longlong *)param_1 + 0x1c1);
  *(byte *)(*(longlong *)param_1 + 0x1c1) =
       (*(char *)((longlong)param_1 + 8) << 4 ^ bVar1) & 0x10 ^ bVar1;
  lVar2 = *(longlong *)(*(longlong *)param_1 + 8);
  if (lVar2 != 0) {
    *(undefined1 *)(*(longlong *)(lVar2 + 0xbe0) + 0x21) = 1;
    *(undefined1 *)(*(longlong *)(lVar2 + 0xbd0) + 0x8b9) = 1;
  }
  return;
}

// Call @ 14410d2f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionPhysicsProxy::SetNotifyGlobalCrumblings_External'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(*(longlong *)param_1 + 0x1c1);
  *(byte *)(*(longlong *)param_1 + 0x1c1) =
       (*(char *)((longlong)param_1 + 8) << 6 ^ bVar1) & 0x40 ^ bVar1;
  *(byte *)(*(longlong *)param_1 + 0x1c1) =
       *(char *)((longlong)param_1 + 9) << 7 | *(byte *)(*(longlong *)param_1 + 0x1c1) & 0x7f;
  return;
}

// Call @ 14410d340

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionPhysicsProxy::SetOneWayInteractionLevel_External'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  FGeometryCollectionPhysicsProxy::SetOneWayInteractionLevel_Internal
            (*(FGeometryCollectionPhysicsProxy **)param_1,*(int *)((longlong)param_1 + 8));
  return;
}

// Call @ 14410d360

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionPhysicsProxy::SetPhysicsMaterial_External'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  FGeometryCollectionPhysicsProxy::SetPhysicsMaterial_Internal
            (*(FGeometryCollectionPhysicsProxy **)param_1,(FMaterialHandle *)((longlong)param_1 + 8)
            );
  return;
}

// Call @ 14410d380

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionPhysicsProxy::SetUseMaterialDamageModifiers_External'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  byte bVar1;
  FGeometryCollectionPhysicsProxy *this;
  
  this = *(FGeometryCollectionPhysicsProxy **)param_1;
  bVar1 = (this->Parameters).field_0x180;
  (this->Parameters).field_0x180 = (*(char *)((longlong)param_1 + 8) << 3 ^ bVar1) & 8 ^ bVar1;
  FGeometryCollectionPhysicsProxy::UpdateDamageThreshold_Internal(this);
  return;
}

// Call @ 14410d3b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionPhysicsProxy::SyncParticles_External'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  int iVar1;
  longlong lVar2;
  TGeometryParticle<double,3> *pTVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  TGeometryParticle<double,3> **ppTVar8;
  uint uVar9;
  longlong lVar10;
  
  uVar9 = 0;
  iVar1 = *(int *)(*(longlong *)param_1 + 0x448);
  if (0 < (longlong)iVar1) {
    lVar10 = 0;
    do {
      lVar2 = *(longlong *)param_1;
      uVar7 = 0;
      if ((int)uVar9 < *(int *)(lVar2 + 0x448)) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar3 = *(TGeometryParticle<double,3> **)(*(longlong *)(lVar2 + 0x440) + lVar10 * 8);
      if ((pTVar3 == (TGeometryParticle<double,3> *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("GTParticle != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\GeometryCollectionPhysicsProxy.cpp"
                             ,0x70e,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar2 = *(longlong *)param_1;
      uVar7 = 0;
      if ((int)uVar9 < *(int *)(lVar2 + 0x348)) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      puVar4 = *(undefined8 **)(*(longlong *)(lVar2 + 0x340) + lVar10 * 8);
      if (puVar4 != (undefined8 *)0x0) {
        ppTVar8 = ::Chaos::TGeometryParticlesImp<double,3,0>::GTGeometryParticle
                            ((TGeometryParticlesImp<double,3,0> *)*puVar4,*(int *)(puVar4 + 1));
        *ppTVar8 = pTVar3;
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 1;
    } while (lVar10 < iVar1);
  }
  return;
}

// Call @ 14410d3c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionPhysicsProxy::UpdateFilterData_External'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  FGeometryCollectionPhysicsProxy::SetFilterData_Internal
            (*(FGeometryCollectionPhysicsProxy **)param_1,
             (FCombinedShapeFilterData *)((longlong)param_1 + 8));
  return;
}

// Call @ 14410d3e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionPhysicsProxy::UpdatePerParticleFilterData_External'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  FGeometryCollectionPhysicsProxy::SetPerParticleFilterData_Internal
            (*(FGeometryCollectionPhysicsProxy **)param_1,
             (TArray<FGeometryCollectionPhysicsProxy::FParticleCollisionFilterData,TSizedDefaultAllocator<32>_>
              *)((longlong)param_1 + 8));
  return;
}

// Call @ 14410d400

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionPhysicsProxy::InitializeBodiesPT'::__l5::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `FGeometryCollectionPhysicsProxy::InitializeBodiesPT'::__l5::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14410d410

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionPhysicsProxy::SetWorldTransform_External'::__l5::<lambda_1>,void>
::Call(void *param_1)

{
  FGeometryCollectionPhysicsProxy::SetWorldTransform_Internal
            (*(FGeometryCollectionPhysicsProxy **)param_1,
             (TTransform<double> *)((longlong)param_1 + 0x10),*(bool *)((longlong)param_1 + 0x70));
  return;
}

// Call @ 14410d430

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionPhysicsProxy::ApplyAngularVelocity_External'::__l12::<lambda_1>,void>
::Call(void *param_1)

{
  TPBDRigidClusteredParticleHandleImp<double,3,1> *this;
  bool *pbVar1;
  undefined4 auStackX_8 [2];
  double dStack_58;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  
  auStackX_8[0] = *(undefined4 *)((longlong)param_1 + 8);
  this = FGeometryCollectionPhysicsProxy::FindClusteredParticleHandleByItemIndex_Internal
                   (*(FGeometryCollectionPhysicsProxy **)param_1,
                    (FGeometryCollectionItemIndex)(int)auStackX_8);
  if (this != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
    ::Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetW
              (*(TKinematicGeometryParticlesImp<double,3,0> **)this,(TVector<double,3> *)&dStack_58,
               *(int *)&this->field_0x8);
    dStack_30 = *(double *)((longlong)param_1 + 0x20) + dStack_48;
    dStack_40 = *(double *)((longlong)param_1 + 0x10) + dStack_58;
    dStack_38 = *(double *)((longlong)param_1 + 0x18) + dStack_50;
    ::Chaos::TKinematicGeometryParticlesImp<double,3,0>::SetW
              (*(TKinematicGeometryParticlesImp<double,3,0> **)this,*(int *)&this->field_0x8,
               (TVector<double,3> *)&dStack_40);
    ::Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetW
              (*(TKinematicGeometryParticlesImp<double,3,0> **)this,(TVector<double,3> *)&dStack_40,
               *(int *)&this->field_0x8);
    if (((__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)dStack_40 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dStack_40,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
        (__real_3f1a36e2e0000000 <
         (double)CONCAT44((uint)((ulonglong)dStack_38 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dStack_38,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
       (__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)dStack_30 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dStack_30,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
      pbVar1 = ::Chaos::TPBDRigidParticleHandleImp<double,3,1>::Disabled
                         ((TPBDRigidParticleHandleImp<double,3,1> *)this);
      if (*pbVar1 == false) {
        ::Chaos::FPBDRigidsEvolutionBase::WakeParticle
                  (*(FPBDRigidsEvolutionBase **)(*(longlong *)((longlong)param_1 + 0x28) + 0xbd0),
                   (TPBDRigidParticleHandleImp<double,3,1> *)this);
      }
    }
  }
  return;
}

// Call @ 14410d440

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionPhysicsProxy::ApplyBreakingAngularVelocity_External'::__l12::<lambda_1>,void>
::Call(void *param_1)

{
  longlong *plVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar7;
  ClusterId *pCVar8;
  bool *pbVar9;
  TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
  *pTVar10;
  float *pfVar11;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar12;
  longlong *plVar13;
  float fVar14;
  undefined4 auStackX_8 [2];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_30;
  
  auStackX_8[0] = *(undefined4 *)((longlong)param_1 + 0x10);
  pTVar7 = FGeometryCollectionPhysicsProxy::FindClusteredParticleHandleByItemIndex_Internal
                     (*(FGeometryCollectionPhysicsProxy **)param_1,
                      (FGeometryCollectionItemIndex)(int)auStackX_8);
  if (pTVar7 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
    lVar4 = *(longlong *)((longlong)param_1 + 8);
    uStack_68 = *(undefined8 *)((longlong)param_1 + 0x18);
    uStack_60 = *(undefined8 *)((longlong)param_1 + 0x20);
    uStack_58 = *(undefined4 *)((longlong)param_1 + 0x28);
    uStack_54 = *(undefined4 *)((longlong)param_1 + 0x2c);
    uStack_30._0_4_ = (undefined4)lVar4;
    uStack_30._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
    lVar5 = *(longlong *)(lVar4 + 0xbd0);
    uStack_50 = (undefined4)uStack_30;
    uStack_4c = uStack_30._4_4_;
    uStack_30 = lVar4;
    pCVar8 = ::Chaos::TPBDRigidClusteredParticles<double,3>::ClusterIds
                       (*(TPBDRigidClusteredParticles<double,3> **)pTVar7,*(int *)&pTVar7->field_0x8
                       );
    iVar3 = pCVar8->NumChildren;
    pCVar8 = ::Chaos::TPBDRigidClusteredParticles<double,3>::ClusterIds
                       (*(TPBDRigidClusteredParticles<double,3> **)pTVar7,*(int *)&pTVar7->field_0x8
                       );
    if (pCVar8->Id == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
      pTVar12 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
    }
    else {
      pCVar8 = ::Chaos::TPBDRigidClusteredParticles<double,3>::ClusterIds
                         (*(TPBDRigidClusteredParticles<double,3> **)pTVar7,
                          *(int *)&pTVar7->field_0x8);
      pTVar12 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
      if (2 < (byte)pCVar8->Id->field_0xc) {
        pTVar12 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)pCVar8->Id;
      }
    }
    bVar6 = ::Chaos::FClusterUnionManager::IsClusterUnionParticle
                      ((FClusterUnionManager *)(lVar5 + 0x660),pTVar12);
    pbVar9 = ::Chaos::TPBDRigidParticleHandleImp<double,3,1>::Disabled
                       ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar7);
    if ((*pbVar9 == false) || (bVar6)) {
      if (iVar3 < 1) {
        pfVar11 = ::Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>::GetInternalStrains
                            (pTVar7);
        fVar2 = *pfVar11;
        fVar14 = ::Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>::GetExternalStrain(pTVar7)
        ;
        if (fVar2 <= fVar14) {
          ``FGeometryCollectionPhysicsProxy::ApplyBreakingAngularVelocity_External'::__l12::
          <lambda_1>::operator()'::__l5::<lambda_1>::operator()(&uStack_68,pTVar7);
        }
      }
      else {
        pTVar10 = TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                          *)(lVar5 + 0x610),pTVar7);
        pTVar7 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)&pTVar10->field_0x8;
        if (pTVar10 ==
            (TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
             *)0x0) {
          pTVar7 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
        }
        if (pTVar7 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
          plVar13 = *(longlong **)pTVar7;
          iVar3 = *(int *)&pTVar7->field_0x8;
          plVar1 = plVar13 + iVar3;
          while( true ) {
            if (*(int *)&pTVar7->field_0x8 != iVar3) {
              `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(auStackX_8);
            }
            if (plVar13 == plVar1) break;
            pTVar12 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
            if (2 < (byte)((TPBDRigidClusteredParticleHandleImp<double,3,1> *)*plVar13)->field_0xc)
            {
              pTVar12 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)*plVar13;
            }
            if (pTVar12 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
              pfVar11 = ::Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>::GetInternalStrains
                                  (pTVar12);
              fVar2 = *pfVar11;
              fVar14 = ::Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>::GetExternalStrain
                                 (pTVar12);
              if (fVar2 <= fVar14) {
                ``FGeometryCollectionPhysicsProxy::ApplyBreakingAngularVelocity_External'::__l12::
                <lambda_1>::operator()'::__l5::<lambda_1>::operator()(&uStack_68,pTVar12);
              }
            }
            plVar13 = plVar13 + 1;
          }
        }
      }
    }
  }
  return;
}

// Call @ 14410d450

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionPhysicsProxy::ApplyBreakingLinearVelocity_External'::__l12::<lambda_1>,void>
::Call(void *param_1)

{
  longlong *plVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar7;
  ClusterId *pCVar8;
  bool *pbVar9;
  TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
  *pTVar10;
  float *pfVar11;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar12;
  longlong *plVar13;
  float fVar14;
  undefined4 auStackX_8 [2];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_30;
  
  auStackX_8[0] = *(undefined4 *)((longlong)param_1 + 0x10);
  pTVar7 = FGeometryCollectionPhysicsProxy::FindClusteredParticleHandleByItemIndex_Internal
                     (*(FGeometryCollectionPhysicsProxy **)param_1,
                      (FGeometryCollectionItemIndex)(int)auStackX_8);
  if (pTVar7 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
    lVar4 = *(longlong *)((longlong)param_1 + 8);
    uStack_68 = *(undefined8 *)((longlong)param_1 + 0x18);
    uStack_60 = *(undefined8 *)((longlong)param_1 + 0x20);
    uStack_58 = *(undefined4 *)((longlong)param_1 + 0x28);
    uStack_54 = *(undefined4 *)((longlong)param_1 + 0x2c);
    uStack_30._0_4_ = (undefined4)lVar4;
    uStack_30._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
    lVar5 = *(longlong *)(lVar4 + 0xbd0);
    uStack_50 = (undefined4)uStack_30;
    uStack_4c = uStack_30._4_4_;
    uStack_30 = lVar4;
    pCVar8 = ::Chaos::TPBDRigidClusteredParticles<double,3>::ClusterIds
                       (*(TPBDRigidClusteredParticles<double,3> **)pTVar7,*(int *)&pTVar7->field_0x8
                       );
    iVar3 = pCVar8->NumChildren;
    pCVar8 = ::Chaos::TPBDRigidClusteredParticles<double,3>::ClusterIds
                       (*(TPBDRigidClusteredParticles<double,3> **)pTVar7,*(int *)&pTVar7->field_0x8
                       );
    if (pCVar8->Id == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
      pTVar12 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
    }
    else {
      pCVar8 = ::Chaos::TPBDRigidClusteredParticles<double,3>::ClusterIds
                         (*(TPBDRigidClusteredParticles<double,3> **)pTVar7,
                          *(int *)&pTVar7->field_0x8);
      pTVar12 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
      if (2 < (byte)pCVar8->Id->field_0xc) {
        pTVar12 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)pCVar8->Id;
      }
    }
    bVar6 = ::Chaos::FClusterUnionManager::IsClusterUnionParticle
                      ((FClusterUnionManager *)(lVar5 + 0x660),pTVar12);
    pbVar9 = ::Chaos::TPBDRigidParticleHandleImp<double,3,1>::Disabled
                       ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar7);
    if ((*pbVar9 == false) || (bVar6)) {
      if (iVar3 < 1) {
        pfVar11 = ::Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>::GetInternalStrains
                            (pTVar7);
        fVar2 = *pfVar11;
        fVar14 = ::Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>::GetExternalStrain(pTVar7)
        ;
        if (fVar2 <= fVar14) {
          ``FGeometryCollectionPhysicsProxy::ApplyBreakingLinearVelocity_External'::__l12::
          <lambda_1>::operator()'::__l5::<lambda_1>::operator()(&uStack_68,pTVar7);
        }
      }
      else {
        pTVar10 = TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                          *)(lVar5 + 0x610),pTVar7);
        pTVar7 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)&pTVar10->field_0x8;
        if (pTVar10 ==
            (TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>
             *)0x0) {
          pTVar7 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
        }
        if (pTVar7 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
          plVar13 = *(longlong **)pTVar7;
          iVar3 = *(int *)&pTVar7->field_0x8;
          plVar1 = plVar13 + iVar3;
          while( true ) {
            if (*(int *)&pTVar7->field_0x8 != iVar3) {
              `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(auStackX_8);
            }
            if (plVar13 == plVar1) break;
            pTVar12 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
            if (2 < (byte)((TPBDRigidClusteredParticleHandleImp<double,3,1> *)*plVar13)->field_0xc)
            {
              pTVar12 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)*plVar13;
            }
            if (pTVar12 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
              pfVar11 = ::Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>::GetInternalStrains
                                  (pTVar12);
              fVar2 = *pfVar11;
              fVar14 = ::Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>::GetExternalStrain
                                 (pTVar12);
              if (fVar2 <= fVar14) {
                ``FGeometryCollectionPhysicsProxy::ApplyBreakingLinearVelocity_External'::__l12::
                <lambda_1>::operator()'::__l5::<lambda_1>::operator()(&uStack_68,pTVar12);
              }
            }
            plVar13 = plVar13 + 1;
          }
        }
      }
    }
  }
  return;
}

// Call @ 14410d460

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionPhysicsProxy::ApplyExternalStrain_External'::__l12::<lambda_1>,void>
::Call(void *param_1)

{
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar1;
  undefined4 auStackX_8 [8];
  <lambda_1> <Stack_18;
  
  auStackX_8[0] = *(undefined4 *)((longlong)param_1 + 0x38);
  pTVar1 = FGeometryCollectionPhysicsProxy::FindClusteredParticleHandleByItemIndex_Internal
                     (*(FGeometryCollectionPhysicsProxy **)param_1,
                      (FGeometryCollectionItemIndex)(int)auStackX_8);
  if (pTVar1 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
    <Stack_18.StrainValue = *(float *)((longlong)param_1 + 0xc);
    <Stack_18.RigidClustering =
         (FRigidClustering *)
         (*(longlong *)(*(longlong *)((longlong)param_1 + 0x18) + 0xbd0) + 0x548);
    ApplyToChildrenAtPointWithRadiusAndPropagation_Internal<__FGeometryCollectionPhysicsProxy::ApplyExternalStrain_External_::__l12::<lambda_1>::operator()_::__l5::<lambda_1>_>
              (<Stack_18.RigidClustering,pTVar1,(TVector<double> *)((longlong)param_1 + 0x20),
               *(float *)((longlong)param_1 + 8),*(int *)((longlong)param_1 + 0x10),
               *(float *)((longlong)param_1 + 0x14),&<Stack_18);
  }
  return;
}

// Call @ 14410d470

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionPhysicsProxy::ApplyForceAt_External'::__l12::<lambda_1>,void>
::Call(void *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  TPBDRigidParticleHandleImp<double,3,1> *this;
  code *pcVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  EObjectStateType EVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  TVector<double,3> *pTVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  TBitArray<FDefaultBitArrayAllocator> *pTVar18;
  int iVar19;
  TPBDRigidParticleHandleImp<double,3,1> *this_00;
  double dVar20;
  double dVar21;
  undefined1 auStackX_8 [8];
  int iStackX_10;
  int iStackX_18;
  longlong *plStackX_20;
  undefined4 uStack_ec;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  
  dVar8 = __real_7fefffffffffffff;
  this_00 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
  iVar17 = 0;
  iVar19 = 0;
  uVar11 = 1;
  lVar5 = *(longlong *)(*(longlong *)((longlong)param_1 + 0x38) + 0xbd0);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar5 + 0x580);
  iVar4 = *(int *)(lVar5 + 0x598);
  plVar2 = (longlong *)(lVar5 + 0x570);
  iVar12 = 0;
  if (iVar4 != 0) {
    pTVar18 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar5 + 0x590);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar5 + 0x590) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar18 = pTVar1;
    }
    uVar16 = *(uint *)(pTVar18->AllocatorInstance).InlineData;
    while (uVar16 == 0) {
      lVar15 = (longlong)iVar17;
      iVar19 = iVar19 + 0x20;
      iVar17 = iVar17 + 1;
      iVar12 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_1441009bd;
      uVar16 = *(uint *)((pTVar18->AllocatorInstance).InlineData + lVar15 * 4 + 4);
    }
    uVar11 = -uVar16 & uVar16;
    uVar3 = (ulonglong)uVar11 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iStackX_10 = (int)lVar15;
    iVar12 = iVar19 + -1 + iStackX_10;
    if (iVar4 < iVar12) {
      iVar12 = iVar4;
    }
  }
LAB_1441009bd:
  uVar16 = *(uint *)(lVar5 + 0x598);
  TStack_e0._padding_ = CONCAT44(uVar11,iVar17);
  uVar11 = uVar16 & 0xffffffe0;
  TStack_e0.CurrentBitIndex = iVar12;
  TStack_e0.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar16 >> 5;
  TStack_e0._28_4_ = iVar12;
  TStack_e0.BaseBitIndex = iVar19;
  uStack_c0 = CONCAT44(uStack_ec,*(int *)(lVar5 + 0x578) - *(int *)(lVar5 + 0x5a4));
  plStackX_20 = plVar2;
  TStack_e0.Array = pTVar1;
  if ((((int)uVar16 < 0) || (iVar4 < (int)uVar16)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar13 = *(uint *)(lVar5 + 0x598);
  if (uVar16 != uVar13) {
    pTVar18 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar5 + 0x590);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar5 + 0x590) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar18 = pTVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) &
             *(uint *)((pTVar18->AllocatorInstance).InlineData + (longlong)iVar17 * 4);
    while (uVar16 == 0) {
      lVar15 = (longlong)iVar17;
      uVar11 = uVar11 + 0x20;
      iVar17 = iVar17 + 1;
      uVar16 = uVar13;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
      goto LAB_144100ad0;
      uVar16 = *(uint *)((pTVar18->AllocatorInstance).InlineData + lVar15 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iStackX_18 = (int)lVar15;
    uVar16 = iStackX_18 + -1 + uVar11;
    if ((int)uVar13 < (int)uVar16) {
      uVar16 = uVar13;
    }
  }
LAB_144100ad0:
  do {
    if (*(int *)(lVar5 + 0x578) - *(int *)(lVar5 + 0x5a4) != (int)uStack_c0) {
      auStackX_8[0] = 0;
      `TSparseArray<TSparseSetElement<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStackX_8);
    }
    if (((TStack_e0.CurrentBitIndex == uVar16) && (TStack_e0.Array == pTVar1)) &&
       (plVar2 == plStackX_20)) {
      if (this_00 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        ::Chaos::FParticleUtilities_ActorSpace<Chaos::FParticleSpatialAccessorXR>::
        GetCoMWorldPosition<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*>
                  ((TVector<double,3> *)&dStack_b8,
                   (TPBDRigidClusteredParticleHandleImp<double,3,1> *)this_00);
        dStack_88 = *(double *)((longlong)param_1 + 8);
        dStack_80 = *(double *)((longlong)param_1 + 0x10);
        dStack_78 = *(double *)((longlong)param_1 + 0x18);
        dStack_a8 = *(double *)((longlong)param_1 + 0x30) - dStack_a8;
        dStack_b0 = *(double *)((longlong)param_1 + 0x28) - dStack_b0;
        dStack_b8 = *(double *)((longlong)param_1 + 0x20) - dStack_b8;
        dStack_a0 = dStack_b0 * dStack_78 - dStack_a8 * dStack_80;
        dStack_90 = dStack_b8 * dStack_80 - dStack_b0 * dStack_88;
        dStack_98 = dStack_a8 * dStack_88 - dStack_b8 * dStack_78;
        ::Chaos::TPBDRigidParticleHandleImp<double,3,1>::AddForce
                  (this_00,(TVector<double,3> *)&dStack_88,true);
        ::Chaos::TPBDRigidParticleHandleImp<double,3,1>::AddTorque
                  (this_00,(TVector<double,3> *)&dStack_a0,true);
      }
      return;
    }
    this = *(TPBDRigidParticleHandleImp<double,3,1> **)
            (*plVar2 + (longlong)TStack_e0.CurrentBitIndex * 0x10);
    if (this != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
      uVar11 = *(uint *)&this->field_0x8;
      lVar15 = *(longlong *)this;
      uVar13 = 0;
      if ((int)uVar11 < *(int *)(lVar15 + 0xd0)) {
        uVar13 = ~uVar11 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((*(longlong *)(*(longlong *)(lVar15 + 200) + (longlong)(int)uVar11 * 8) ==
           *(longlong *)param_1) &&
         ((EVar10 = ::Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState(this),
          EVar10 == Dynamic ||
          (EVar10 = ::Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState(this),
          EVar10 == Sleeping)))) {
        pTVar14 = ::Chaos::TParticles<double,3>::GetX
                            (*(TParticles<double,3> **)this,*(int *)&this->field_0x8);
        dVar20 = *(double *)((longlong)param_1 + 0x28) - *(double *)&pTVar14->field_0x8;
        dVar7 = *(double *)((longlong)param_1 + 0x20) - *(double *)pTVar14;
        dVar21 = *(double *)((longlong)param_1 + 0x30) - *(double *)&pTVar14->field_0x10;
        dVar21 = dVar20 * dVar20 + dVar7 * dVar7 + dVar21 * dVar21;
        if (dVar21 < dVar8) {
          this_00 = this;
          dVar8 = dVar21;
        }
      }
    }
    TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
  } while( true );
}

// Call @ 14410d480

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionPhysicsProxy::ApplyImpulseAt_External'::__l12::<lambda_1>,void>
::Call(void *param_1)

{
  ulonglong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  longlong lVar8;
  TPBDRigidParticleHandleImp<double,3,1> *this;
  longlong lVar9;
  code *pcVar10;
  double dVar11;
  undefined1 auVar12 [12];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  EObjectStateType EVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  TVector<double,3> *pTVar22;
  double *pdVar23;
  TRotation<double,3> *pTVar24;
  longlong lVar25;
  int iVar26;
  int iVar27;
  longlong lVar28;
  uint uVar29;
  int iVar30;
  ForElementType<unsigned_int> FVar31;
  int iVar32;
  TPBDRigidParticleHandleImp<double,3,1> *this_00;
  double dVar33;
  undefined1 auVar34 [16];
  undefined8 uVar36;
  undefined1 auVar35 [16];
  double dVar37;
  double dVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined1 auStackX_8 [8];
  int iStackX_10;
  int iStackX_18;
  ForElementType<unsigned_int> FStackX_20;
  undefined4 uStack_27c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_268;
  undefined8 uStack_248;
  double dStack_240;
  double dStack_238;
  double dStack_230;
  double adStack_228 [6];
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  double dStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 auStack_1a8 [16];
  undefined1 auStack_198 [16];
  double dStack_188;
  double dStack_180;
  double dStack_178;
  double dStack_168;
  double dStack_160;
  double dStack_158;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  double dStack_d8;
  
  dVar5 = __real_7fefffffffffffff;
  iVar30 = 0;
  uVar19 = 1;
  iVar32 = 0;
  lVar8 = *(longlong *)(*(longlong *)((longlong)param_1 + 0x38) + 0xbd0);
  FStackX_20 = (ForElementType<unsigned_int>)(lVar8 + 0x580);
  iVar27 = *(int *)(lVar8 + 0x598);
  iVar26 = 0;
  iVar20 = 0;
  if (iVar27 != 0) {
    FVar31 = *(ForElementType<unsigned_int> *)(lVar8 + 0x590);
    if (*(ForElementType<unsigned_int> *)(lVar8 + 0x590) == (ForElementType<unsigned_int>)0x0) {
      FVar31 = FStackX_20;
    }
    uVar29 = *(uint *)FVar31;
    while (uVar29 == 0) {
      lVar25 = (longlong)iVar30;
      iVar32 = iVar32 + 0x20;
      iVar30 = iVar30 + 1;
      if ((int)(iVar27 + -1 + (iVar27 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar30) {
        iVar26 = *(int *)(lVar8 + 0x598);
        iVar20 = iVar27;
        goto LAB_144100dd9;
      }
      uVar29 = ((uint *)((longlong)FVar31 + 4))[lVar25];
    }
    iVar26 = *(int *)(lVar8 + 0x598);
    uVar19 = -uVar29 & uVar29;
    uVar1 = (ulonglong)uVar19 * 2 + 1;
    lVar25 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    iStackX_10 = (int)lVar25;
    iVar20 = iStackX_10 + -1 + iVar32;
    if (iVar26 < iVar20) {
      iVar20 = iVar27;
    }
  }
LAB_144100dd9:
  uVar29 = *(uint *)(lVar8 + 0x598);
  TStack_268._padding_ = CONCAT44(uVar19,iVar30);
  uVar19 = uVar29 & 0xffffffe0;
  TStack_268.CurrentBitIndex = iVar20;
  TStack_268.UnvisitedBitMask = 0xffffffff;
  iVar27 = (int)uVar29 >> 5;
  TStack_268._28_4_ = iVar20;
  TStack_268.BaseBitIndex = iVar32;
  uStack_248 = CONCAT44(uStack_27c,*(int *)(lVar8 + 0x578) - *(int *)(lVar8 + 0x5a4));
  TStack_268.Array = (TBitArray<FDefaultBitArrayAllocator> *)FStackX_20;
  if ((((int)uVar29 < 0) || (iVar26 < (int)uVar29)) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar21 = *(int *)((longlong)FStackX_20 + 0x18);
  this_00 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
  if (uVar29 != uVar21) {
    FVar31 = *(ForElementType<unsigned_int> *)((longlong)FStackX_20 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)FStackX_20 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar31 = FStackX_20;
    }
    uVar29 = -1 << ((byte)uVar29 & 0x1f) & *(uint *)((longlong)FVar31 + (longlong)iVar27 * 4);
    while (uVar29 == 0) {
      lVar25 = (longlong)iVar27;
      uVar19 = uVar19 + 0x20;
      iVar27 = iVar27 + 1;
      uVar29 = uVar21;
      if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar27)
      goto LAB_144100f10;
      uVar29 = ((uint *)((longlong)FVar31 + 4))[lVar25];
    }
    uVar1 = (ulonglong)(-uVar29 & uVar29) * 2 + 1;
    lVar25 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    iStackX_18 = (int)lVar25;
    uVar29 = iStackX_18 + -1 + uVar19;
    this_00 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
    if ((int)uVar21 < (int)uVar29) {
      uVar29 = uVar21;
    }
  }
LAB_144100f10:
  while( true ) {
    if (*(int *)(lVar8 + 0x578) - *(int *)(lVar8 + 0x5a4) != (int)uStack_248) {
      auStackX_8[0] = 0;
      `TSparseArray<TSparseSetElement<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStackX_8);
    }
    if ((TStack_268.CurrentBitIndex == uVar29) &&
       ((ForElementType<unsigned_int>)TStack_268.Array == FStackX_20)) break;
    this = *(TPBDRigidParticleHandleImp<double,3,1> **)
            (*(longlong *)(lVar8 + 0x570) + (longlong)TStack_268.CurrentBitIndex * 0x10);
    if (this != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
      uVar19 = *(uint *)&this->field_0x8;
      lVar25 = *(longlong *)this;
      uVar21 = 0;
      if ((int)uVar19 < *(int *)(lVar25 + 0xd0)) {
        uVar21 = ~uVar19 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if ((*(longlong *)(*(longlong *)(lVar25 + 200) + (longlong)(int)uVar19 * 8) ==
           *(longlong *)param_1) &&
         ((EVar18 = ::Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState(this),
          EVar18 == Dynamic ||
          (EVar18 = ::Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState(this),
          EVar18 == Sleeping)))) {
        pTVar22 = ::Chaos::TParticles<double,3>::GetX
                            (*(TParticles<double,3> **)this,*(int *)&this->field_0x8);
        dVar37 = *(double *)((longlong)param_1 + 0x28) - *(double *)&pTVar22->field_0x8;
        dVar33 = *(double *)((longlong)param_1 + 0x20) - *(double *)pTVar22;
        dVar38 = *(double *)((longlong)param_1 + 0x30) - *(double *)&pTVar22->field_0x10;
        dVar38 = dVar37 * dVar37 + dVar33 * dVar33 + dVar38 * dVar38;
        if (dVar38 < dVar5) {
          this_00 = this;
          dVar5 = dVar38;
        }
      }
    }
    TStack_268.UnvisitedBitMask = TStack_268.UnvisitedBitMask & ~TStack_268._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_268);
  }
  if (this_00 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
    ::Chaos::FParticleUtilities_ActorSpace<Chaos::FParticleSpatialAccessorXR>::
    GetCoMWorldPosition<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*>
              ((TVector<double,3> *)&dStack_240,
               (TPBDRigidClusteredParticleHandleImp<double,3,1> *)this_00);
    pTVar22 = ::Chaos::TPBDRigidParticleHandleImp<double,3,1>::LinearImpulseVelocity(this_00);
    pdVar23 = ::Chaos::TPBDRigidParticleHandleImp<double,3,1>::InvM(this_00);
    uVar19 = *(uint *)&this_00->field_0x8;
    dVar37 = *(double *)((longlong)param_1 + 0x10);
    lVar8 = *(longlong *)this_00;
    dVar5 = *pdVar23;
    dVar38 = *pdVar23;
    dVar33 = *(double *)((longlong)param_1 + 8);
    uVar29 = 0;
    if ((int)uVar19 < *(int *)(lVar8 + 0x358)) {
      uVar29 = ~uVar19 >> 0x1f;
    }
    dVar13 = *(double *)&pTVar22->field_0x8;
    dVar6 = *(double *)pTVar22;
    dVar11 = dVar5 * *(double *)((longlong)param_1 + 0x18) + *(double *)&pTVar22->field_0x10;
    if ((uVar29 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    lVar8 = *(longlong *)(lVar8 + 0x350);
    *(double *)(lVar8 + (longlong)(int)uVar19 * 0x18) = dVar38 * dVar33 + dVar6;
    auVar7._8_4_ = SUB84(dVar11,0);
    auVar7._0_8_ = dVar5 * dVar37 + dVar13;
    auVar7._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    *(undefined1 (*) [16])(lVar8 + 8 + (longlong)(int)uVar19 * 0x18) = auVar7;
    uVar19 = *(uint *)&this_00->field_0x8;
    lVar25 = (longlong)(int)uVar19;
    lVar8 = *(longlong *)this_00;
    uVar29 = 0;
    if ((int)uVar19 < *(int *)(lVar8 + 0x3a0)) {
      uVar29 = ~uVar19 >> 0x1f;
    }
    if ((uVar29 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    lVar8 = *(longlong *)(lVar8 + 0x398);
    uVar19 = *(uint *)&this_00->field_0x8;
    lVar28 = (longlong)(int)uVar19;
    lVar9 = *(longlong *)this_00;
    fVar2 = *(float *)(lVar8 + lVar25 * 0xc);
    fVar3 = *(float *)(lVar8 + 4 + lVar25 * 0xc);
    fVar4 = *(float *)(lVar8 + 8 + lVar25 * 0xc);
    uVar29 = 0;
    if ((int)uVar19 < *(int *)(lVar9 + 0x50)) {
      uVar29 = ~uVar19 >> 0x1f;
    }
    if ((uVar29 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    lVar8 = *(longlong *)(lVar9 + 0x48);
    uVar36 = *(undefined8 *)(lVar8 + 8 + lVar28 * 0x10);
    dVar6 = (double)(float)uVar36;
    dVar11 = (double)(float)((ulonglong)uVar36 >> 0x20);
    dVar5 = (double)*(float *)(lVar8 + lVar28 * 0x10);
    dVar37 = (double)*(float *)(lVar8 + 4 + lVar28 * 0x10);
    pTVar24 = ::Chaos::TPBDRigidParticleHandleImp<double,3,1>::RotationOfMass(this_00);
    dVar13 = *(double *)&pTVar24->field_0x10;
    dVar14 = *(double *)&pTVar24->field_0x18;
    dVar15 = *(double *)pTVar24;
    dVar16 = *(double *)&pTVar24->field_0x8;
    auVar34._8_4_ = SUB84(dVar37,0);
    auVar34._0_8_ = dVar37;
    auVar34._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
    dVar38 = dVar5 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
             dVar11 * dVar15 +
             dVar37 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             dVar6 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar33 = dVar5 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             dVar11 * dVar16 +
             auVar34._8_8_ * dVar14 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
             dVar6 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    uVar39 = SUB84(dVar33,0);
    uVar40 = (undefined4)((ulonglong)dVar33 >> 0x20);
    auStack_108._8_4_ = uVar39;
    auStack_108._0_8_ = dVar38;
    auStack_108._12_4_ = uVar40;
    dVar33 = dVar5 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
             dVar11 * dVar13 +
             dVar37 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
             dVar6 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar5 = dVar5 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
            dVar11 * dVar14 +
            dVar37 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
            dVar6 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    uVar41 = SUB84(dVar5,0);
    uVar42 = (undefined4)((ulonglong)dVar5 >> 0x20);
    auStack_1a8._8_4_ = uVar39;
    auStack_1a8._0_8_ = dVar38;
    auStack_1a8._12_4_ = uVar40;
    adStack_228[4] = 0.0;
    uStack_1e8 = 0;
    adStack_228[1] = 0.0;
    uStack_1e0 = 0;
    adStack_228[2] = 0.0;
    uStack_1f8 = 0;
    adStack_228[3] = 0.0;
    uStack_1f0 = 0;
    uStack_1d0 = 0;
    auStack_f8._8_4_ = uVar41;
    auStack_f8._0_8_ = dVar33;
    auStack_f8._12_4_ = uVar42;
    auStack_198._8_4_ = uVar41;
    auStack_198._0_8_ = dVar33;
    auStack_198._12_4_ = uVar42;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1b8 = ___xmm_3ff00000000000000000000000000000;
    uStack_1b0 = _UNK_15061cbc8;
    uVar36 = _UNK_15061cbc8;
    adStack_228[0] = (double)fVar2;
    adStack_228[5] = (double)fVar3;
    dStack_1d8 = (double)fVar4;
    ::Chaos::Utilities::ComputeWorldSpaceInertia
              ((PMatrix<double,3,3> *)&dStack_188,(TRotation<double,3> *)auStack_1a8,
               (PMatrix<double,3,3> *)adStack_228);
    dStack_238 = *(double *)((longlong)param_1 + 0x28) - dStack_238;
    auVar7 = *(undefined1 (*) [16])((longlong)param_1 + 8);
    dStack_d8 = *(double *)((longlong)param_1 + 0x18);
    dStack_240 = *(double *)((longlong)param_1 + 0x20) - dStack_240;
    dStack_230 = *(double *)((longlong)param_1 + 0x30) - dStack_230;
    uVar19 = *(uint *)&this_00->field_0x8;
    lVar25 = (longlong)(int)uVar19;
    lVar8 = *(longlong *)this_00;
    auVar12._4_8_ = uVar36;
    auVar12._0_4_ = auVar7._4_4_;
    auVar35._0_8_ = auVar12._0_8_ << 0x20;
    auVar35._8_4_ = auVar7._8_4_;
    auVar35._12_4_ = auVar7._12_4_;
    uVar29 = 0;
    if ((int)uVar19 < *(int *)(lVar8 + 0x370)) {
      uVar29 = ~uVar19 >> 0x1f;
    }
    dVar33 = dStack_238 * dStack_d8 - dStack_230 * auVar35._8_8_;
    dVar38 = dStack_240 * auVar35._8_8_ - dStack_238 * auVar7._0_8_;
    dVar5 = dStack_230 * auVar7._0_8_ - dStack_240 * dStack_d8;
    if ((uVar29 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    lVar8 = *(longlong *)(lVar8 + 0x368);
    uVar19 = *(uint *)&this_00->field_0x8;
    lVar28 = (longlong)(int)uVar19;
    lVar9 = *(longlong *)this_00;
    dVar37 = *(double *)(lVar8 + 0x10 + lVar25 * 0x18);
    dVar6 = *(double *)(lVar8 + 8 + lVar25 * 0x18);
    dVar11 = *(double *)(lVar8 + lVar25 * 0x18);
    uVar29 = 0;
    if ((int)uVar19 < *(int *)(lVar9 + 0x370)) {
      uVar29 = ~uVar19 >> 0x1f;
    }
    if ((uVar29 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    lVar8 = *(longlong *)(lVar9 + 0x368);
    *(double *)(lVar8 + lVar28 * 0x18) =
         dStack_188 * dVar33 + dStack_180 * dVar5 + dStack_178 * dVar38 + dVar11;
    *(double *)(lVar8 + 8 + lVar28 * 0x18) =
         dStack_168 * dVar33 + dStack_158 * dVar38 + dStack_160 * dVar5 + dVar6;
    *(double *)(lVar8 + 0x10 + lVar28 * 0x18) =
         dStack_148 * dVar33 + dStack_138 * dVar38 + dStack_140 * dVar5 + dVar37;
  }
  return;
}

// Call @ 14410d490

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionPhysicsProxy::ApplyInternalStrain_External'::__l12::<lambda_1>,void>
::Call(void *param_1)

{
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar1;
  undefined4 auStackX_8 [8];
  <lambda_1> <Stack_18;
  
  auStackX_8[0] = *(undefined4 *)((longlong)param_1 + 0x38);
  pTVar1 = FGeometryCollectionPhysicsProxy::FindClusteredParticleHandleByItemIndex_Internal
                     (*(FGeometryCollectionPhysicsProxy **)param_1,
                      (FGeometryCollectionItemIndex)(int)auStackX_8);
  if (pTVar1 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
    <Stack_18.RBDSolver = *(FPBDRigidsSolver **)((longlong)param_1 + 0x18);
    <Stack_18.StrainValue = *(float *)((longlong)param_1 + 0xc);
    ApplyToChildrenAtPointWithRadiusAndPropagation_Internal<__FGeometryCollectionPhysicsProxy::ApplyInternalStrain_External_::__l12::<lambda_1>::operator()_::__l5::<lambda_1>_>
              (&(((<Stack_18.RBDSolver)->MEvolution).Ptr)->Clustering,pTVar1,
               (TVector<double> *)((longlong)param_1 + 0x20),*(float *)((longlong)param_1 + 8),
               *(int *)((longlong)param_1 + 0x10),*(float *)((longlong)param_1 + 0x14),&<Stack_18);
  }
  return;
}

// Call @ 14410d4a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionPhysicsProxy::ApplyLinearVelocity_External'::__l12::<lambda_1>,void>
::Call(void *param_1)

{
  TPBDRigidClusteredParticleHandleImp<double,3,1> *this;
  bool *pbVar1;
  undefined4 auStackX_8 [2];
  double dStack_58;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  
  auStackX_8[0] = *(undefined4 *)((longlong)param_1 + 8);
  this = FGeometryCollectionPhysicsProxy::FindClusteredParticleHandleByItemIndex_Internal
                   (*(FGeometryCollectionPhysicsProxy **)param_1,
                    (FGeometryCollectionItemIndex)(int)auStackX_8);
  if (this != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
    ::Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetV
              (*(TKinematicGeometryParticlesImp<double,3,0> **)this,(TVector<double,3> *)&dStack_58,
               *(int *)&this->field_0x8);
    dStack_30 = *(double *)((longlong)param_1 + 0x20) + dStack_48;
    dStack_40 = *(double *)((longlong)param_1 + 0x10) + dStack_58;
    dStack_38 = *(double *)((longlong)param_1 + 0x18) + dStack_50;
    ::Chaos::TKinematicGeometryParticlesImp<double,3,0>::SetV
              (*(TKinematicGeometryParticlesImp<double,3,0> **)this,*(int *)&this->field_0x8,
               (TVector<double,3> *)&dStack_40);
    ::Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetV
              (*(TKinematicGeometryParticlesImp<double,3,0> **)this,(TVector<double,3> *)&dStack_40,
               *(int *)&this->field_0x8);
    if (((__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)dStack_40 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dStack_40,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
        (__real_3f1a36e2e0000000 <
         (double)CONCAT44((uint)((ulonglong)dStack_38 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dStack_38,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
       (__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)dStack_30 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dStack_30,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
      pbVar1 = ::Chaos::TPBDRigidParticleHandleImp<double,3,1>::Disabled
                         ((TPBDRigidParticleHandleImp<double,3,1> *)this);
      if (*pbVar1 == false) {
        ::Chaos::FPBDRigidsEvolutionBase::WakeParticle
                  (*(FPBDRigidsEvolutionBase **)(*(longlong *)((longlong)param_1 + 0x28) + 0xbd0),
                   (TPBDRigidParticleHandleImp<double,3,1> *)this);
      }
    }
  }
  return;
}

// Call @ 14410d4b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionPhysicsProxy::BreakActiveClusters_External'::__l12::<lambda_1>,void>
::Call(void *param_1)

{
  ::Chaos::FRigidClustering::BreakClustersByProxy
            ((FRigidClustering *)
             (*(longlong *)(*(longlong *)((longlong)param_1 + 8) + 0xbd0) + 0x548),
             *(IPhysicsProxyBase **)param_1);
  return;
}

// Call @ 14410d4d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionPhysicsProxy::BreakClusters_External'::__l12::<lambda_1>,void>
::Call(void *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar4;
  undefined4 *puVar5;
  undefined4 auStackX_8 [2];
  
  puVar5 = *(undefined4 **)((longlong)param_1 + 0x10);
  iVar2 = *(int *)((longlong)param_1 + 0x18);
  lVar3 = *(longlong *)(*(longlong *)((longlong)param_1 + 8) + 0xbd0);
  puVar1 = puVar5 + iVar2;
  while( true ) {
    if (*(int *)((longlong)param_1 + 0x18) != iVar2) {
      `TCheckedPointerIterator<FGeometryCollectionItemIndex_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(auStackX_8);
    }
    if (puVar5 == puVar1) break;
    auStackX_8[0] = *puVar5;
    pTVar4 = FGeometryCollectionPhysicsProxy::FindClusteredParticleHandleByItemIndex_Internal
                       (*(FGeometryCollectionPhysicsProxy **)param_1,
                        (FGeometryCollectionItemIndex)(int)auStackX_8);
    if (pTVar4 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
      ::Chaos::FRigidClustering::BreakCluster((FRigidClustering *)(lVar3 + 0x548),pTVar4);
    }
    puVar5 = puVar5 + 1;
  }
  return;
}

// Call @ 14410d4e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionPhysicsProxy::BufferFieldCommand_External'::__l12::<lambda_1>,void>
::Call(void *param_1)

{
  FGeometryCollectionPhysicsProxy::BufferFieldCommand_Internal
            (*(FGeometryCollectionPhysicsProxy **)param_1,
             *(FPBDRigidsSolver **)((longlong)param_1 + 8),
             (FFieldSystemCommand *)((longlong)param_1 + 0x10));
  return;
}

// Call @ 14410d500

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionPhysicsProxy::DisableParticles_External'::__l12::<lambda_1>,void>
::Call(void *param_1)

{
  uint uVar1;
  longlong lVar2;
  FPBDRigidsEvolutionBase *this;
  longlong lVar3;
  TGeometryParticleHandleImp<double,3,1> *pTVar4;
  code *pcVar5;
  uint *puVar6;
  bool bVar7;
  uint uVar8;
  ulonglong uVar9;
  FPBDRigidsSOAs *this_00;
  TGeometryParticleHandleImp<double,3,1> *pTVar10;
  uint *puVar11;
  undefined1 auStackX_8 [8];
  uint uStackX_10;
  uint *puStackX_18;
  
  puVar11 = *(uint **)((longlong)param_1 + 0x10);
  uStackX_10 = *(uint *)((longlong)param_1 + 0x18);
  uVar9 = (ulonglong)(int)uStackX_10;
  puStackX_18 = puVar11 + uVar9;
  while( true ) {
    puVar6 = puStackX_18;
    if (*(int *)((longlong)param_1 + 0x18) != (int)uVar9) {
      auStackX_8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStackX_8);
    }
    if (puVar11 == puVar6) break;
    uVar1 = *puVar11;
    lVar2 = *(longlong *)param_1;
    uVar8 = 0;
    if ((int)uVar1 < *(int *)(lVar2 + 0x418)) {
      uVar8 = ~uVar1 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar1 = *(uint *)(*(longlong *)(lVar2 + 0x410) + (longlong)(int)uVar1 * 4);
    if (uVar1 == 0xffffffff) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParticleIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\GeometryCollectionPhysicsProxy.cpp"
                         ,0x98a,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar2 = *(longlong *)param_1;
    this = *(FPBDRigidsEvolutionBase **)(*(longlong *)((longlong)param_1 + 8) + 0xbd0);
    uVar8 = 0;
    if ((int)uVar1 < *(int *)(lVar2 + 0x348)) {
      uVar8 = ~uVar1 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    ::Chaos::FPBDRigidsEvolutionBase::DisableParticleWithRemovalEvent
              (this,*(TGeometryParticleHandleImp<double,3,1> **)
                     (*(longlong *)(lVar2 + 0x340) + (longlong)(int)uVar1 * 8));
    lVar2 = *(longlong *)param_1;
    lVar3 = *(longlong *)((longlong)param_1 + 8);
    this_00 = (FPBDRigidsSOAs *)(lVar3 + 0x4b8);
    uVar8 = 0;
    if ((int)uVar1 < *(int *)(lVar2 + 0x348)) {
      uVar8 = ~uVar1 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pTVar4 = *(TGeometryParticleHandleImp<double,3,1> **)
              (*(longlong *)(lVar2 + 0x340) + (longlong)(int)uVar1 * 8);
    pTVar10 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)&pTVar4->_padding_ + 4)) {
      pTVar10 = pTVar4;
    }
    if (pTVar10 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      bVar7 = ::Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>::Contains
                        ((TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_> *)
                         (lVar3 + 0x6a0),(TPBDRigidParticleHandleImp<double,3,1> *)pTVar10);
      if (!bVar7) {
        bVar7 = ::Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>::Contains
                          ((TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_> *)
                           (lVar3 + 0x770),(TPBDRigidParticleHandleImp<double,3,1> *)pTVar10);
        if (!bVar7) {
          ::Chaos::FPBDRigidsSOAs::
          AddToList<Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>,Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                    (this_00,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar10,
                     (TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_> *)
                     (lVar3 + 0x708));
          if (::Chaos::CVars::bChaosSolverCheckParticleViews != false) {
            ::Chaos::FPBDRigidsSOAs::CheckParticleViewMaskImpl(this_00,pTVar4);
          }
          ::Chaos::FPBDRigidsSOAs::UpdateViews(this_00);
        }
      }
    }
    uVar9 = (ulonglong)uStackX_10;
    puVar11 = puVar11 + 1;
  }
  return;
}

// Call @ 14410d510

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionPhysicsProxy::RemoveAllAnchors_External'::__l12::<lambda_1>,void>
::Call(void *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  FPBDRigidsEvolutionGBF *this;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  undefined8 uVar4;
  undefined8 uVar5;
  EObjectStateType EVar6;
  FRigidClusteredFlags_u_0 *pFVar7;
  undefined8 *puVar8;
  undefined1 auStackX_8 [8];
  FKinematicTarget FStack_78;
  
  uVar5 = _UNK_150689648;
  uVar4 = ___xmm_3f800000000000000000000000000000;
  lVar3 = *(longlong *)param_1;
  puVar8 = *(undefined8 **)(lVar3 + 0x340);
  iVar2 = *(int *)(lVar3 + 0x348);
  this = *(FPBDRigidsEvolutionGBF **)(*(longlong *)((longlong)param_1 + 8) + 0xbd0);
  puVar1 = puVar8 + iVar2;
  while( true ) {
    if (*(int *)(lVar3 + 0x348) != iVar2) {
      `TCheckedPointerIterator<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,int,0>::
      operator!='::__l2::<lambda_1>::operator()(auStackX_8);
    }
    if (puVar8 == puVar1) break;
    this_00 = (TGeometryParticleHandleImp<double,3,1> *)*puVar8;
    if (this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      pFVar7 = &::Chaos::TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                          ((TPBDRigidClusteredParticles<double,3> *)this_00->_padding_,
                           (int)this_00->_padding_)->field0_0x0;
      pFVar7->Bits = pFVar7->Bits & 0xfd;
      if (this != (FPBDRigidsEvolutionGBF *)0x0) {
        EVar6 = ::Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                          ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
        if (EVar6 != Dynamic) {
          EVar6 = ::Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                            ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
          if (EVar6 != Sleeping) {
            FStack_78.Position._16_8_ = 0;
            FStack_78.Position._0_8_ = 0;
            FStack_78.Position._8_8_ = 0;
            FStack_78.Rotation._0_8_ = uVar4;
            FStack_78.Rotation._8_8_ = uVar5;
            FStack_78.Mode = None;
            ::Chaos::FPBDRigidsEvolutionBase::SetParticleObjectState
                      ((FPBDRigidsEvolutionBase *)this,
                       (TPBDRigidParticleHandleImp<double,3,1> *)this_00,Dynamic);
            ::Chaos::FPBDRigidsEvolutionGBF::SetParticleKinematicTarget(this,this_00,&FStack_78);
          }
        }
      }
    }
    puVar8 = puVar8 + 1;
  }
  return;
}

// Call @ 14410d520

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionPhysicsProxy::SetAnchoredByIndex_External'::__l12::<lambda_1>,void>
::Call(void *param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  FPBDRigidsEvolutionGBF *this;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  code *pcVar4;
  bool bVar5;
  EObjectStateType EVar6;
  FRigidClusteredFlags_u_0 *pFVar7;
  ClusterId *pCVar8;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar9;
  uint uVar10;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar11;
  FKinematicTarget FStack_48;
  
  uVar2 = *(uint *)((longlong)param_1 + 8);
  lVar3 = *(longlong *)param_1;
  this = *(FPBDRigidsEvolutionGBF **)(*(longlong *)((longlong)param_1 + 0x10) + 0xbd0);
  uVar10 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x418)) {
    uVar10 = ~uVar2 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar2 = *(uint *)(*(longlong *)(lVar3 + 0x410) + (longlong)(int)uVar2 * 4);
  if ((-1 < (int)uVar2) && (lVar3 = *(longlong *)param_1, (int)uVar2 < *(int *)(lVar3 + 0x348))) {
    cVar1 = *(char *)((longlong)param_1 + 0xc);
    uVar10 = 0;
    if ((int)uVar2 < *(int *)(lVar3 + 0x348)) {
      uVar10 = ~uVar2 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this_00 = *(TGeometryParticleHandleImp<double,3,1> **)
               (*(longlong *)(lVar3 + 0x340) + (longlong)(int)uVar2 * 8);
    if (this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      pFVar7 = &::Chaos::TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                          ((TPBDRigidClusteredParticles<double,3> *)this_00->_padding_,
                           (int)this_00->_padding_)->field0_0x0;
      pFVar7->Bits = pFVar7->Bits ^ (cVar1 * '\x02' ^ pFVar7->Bits) & 2;
      if ((((cVar1 == '\0') && (this != (FPBDRigidsEvolutionGBF *)0x0)) &&
          (EVar6 = ::Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                             ((TPBDRigidParticleHandleImp<double,3,1> *)this_00), EVar6 != Dynamic))
         && (EVar6 = ::Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                               ((TPBDRigidParticleHandleImp<double,3,1> *)this_00),
            EVar6 != Sleeping)) {
        FStack_48.Rotation._0_8_ = ___xmm_3f800000000000000000000000000000;
        FStack_48.Rotation._8_8_ = _UNK_150689648;
        FStack_48.Position._16_8_ = 0;
        FStack_48.Position._0_8_ = 0;
        FStack_48.Position._8_8_ = 0;
        FStack_48.Mode = None;
        ::Chaos::FPBDRigidsEvolutionBase::SetParticleObjectState
                  ((FPBDRigidsEvolutionBase *)this,(TPBDRigidParticleHandleImp<double,3,1> *)this_00
                   ,Dynamic);
        ::Chaos::FPBDRigidsEvolutionGBF::SetParticleKinematicTarget(this,this_00,&FStack_48);
      }
    }
    lVar3 = *(longlong *)param_1;
    uVar10 = 0;
    if ((int)uVar2 < *(int *)(lVar3 + 0x348)) {
      uVar10 = ~uVar2 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar9 = *(TPBDRigidParticleHandleImp<double,3,1> **)
              (*(longlong *)(lVar3 + 0x340) + (longlong)(int)uVar2 * 8);
    if (pTVar9 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
      do {
        pTVar11 = pTVar9;
        pCVar8 = ::Chaos::TPBDRigidClusteredParticles<double,3>::ClusterIds
                           (*(TPBDRigidClusteredParticles<double,3> **)pTVar11,
                            *(int *)&pTVar11->field_0x8);
        if (pCVar8->Id == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) break;
        pCVar8 = ::Chaos::TPBDRigidClusteredParticles<double,3>::ClusterIds
                           (*(TPBDRigidClusteredParticles<double,3> **)pTVar11,
                            *(int *)&pTVar11->field_0x8);
        pTVar9 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
        if (2 < (byte)pCVar8->Id->field_0xc) {
          pTVar9 = pCVar8->Id;
        }
      } while (pTVar9 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0);
      ::Chaos::UpdateKinematicProperties(pTVar11,&(this->Clustering).MChildren,this);
    }
  }
  return;
}

// Call @ 14410d530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionPhysicsProxy::SetAnchoredByTransformedBox_External'::__l12::<lambda_1>,void>
::Call(void *param_1)

{
  uint *puVar1;
  double *pdVar2;
  FPBDRigidsEvolutionGBF *this;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [12];
  undefined8 uVar14;
  undefined8 uVar15;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar16;
  TManagedArray<int> *pTVar17;
  bool bVar18;
  EObjectStateType EVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  TVector<double,3> *pTVar23;
  ClusterId *pCVar24;
  FRigidClusteredFlags_u_0 *pFVar25;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  ulong64 uVar26;
  ulonglong uVar27;
  byte bVar28;
  uint uVar29;
  ForElementType<unsigned_int> FVar30;
  ForAnyElementType FVar31;
  uint uVar32;
  ulonglong uVar33;
  uint uVar34;
  int iVar35;
  ulonglong *puVar36;
  TGeometryParticleHandleImp<double,3,1> *pTVar37;
  ulonglong uVar38;
  int iVar39;
  undefined8 uVar40;
  TGeometryParticleHandleImp<double,3,1> *pTVar41;
  uint uVar42;
  longlong lVar43;
  longlong lVar44;
  longlong lVar45;
  double dVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined4 uVar56;
  undefined4 uVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auStackY_308 [32];
  undefined1 auStack_2d0 [4];
  int iStack_2cc;
  longlong *plStack_2c8;
  longlong lStack_2c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2b8;
  undefined4 uStack_290;
  int iStack_28c;
  undefined8 uStack_288;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTStack_280;
  undefined1 auStack_278 [20];
  uint uStack_264;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTStack_258;
  uint uStack_250;
  uint uStack_24c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_248;
  undefined4 uStack_240;
  uint uStack_23c;
  uint uStack_238;
  undefined4 uStack_234;
  int iStack_230;
  undefined4 uStack_22c;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTStack_228;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_220;
  undefined8 uStack_200;
  FSparseArrayAllocationInfo FStack_1f8;
  undefined1 auStack_1e8 [16];
  double dStack_1d8;
  FKinematicTarget FStack_1c8;
  undefined1 auStack_198 [16];
  double dStack_188;
  TManagedArrayAccessor<int> TStack_180;
  undefined4 uStack_12c;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  TStack_128;
  FScriptContainerElement aFStack_f0 [8];
  ForAnyElementType FStack_e8;
  uint uStack_e0;
  ulonglong uStack_d8;
  
  uStack_d8 = __security_cookie.value ^ (ulonglong)auStackY_308;
  uVar42 = 0;
  TStack_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_128.Data.ArrayNum = 0;
  TStack_128.Data.ArrayMax = 0;
  TStack_128.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  TStack_128.AllocationFlags.NumBits = 0;
  TStack_128.AllocationFlags.MaxBits = 0x80;
  TStack_128.FirstFreeIndex = -1;
  TStack_128.NumFreeIndices = 0;
  FStack_e8.Data = (FScriptContainerElement *)0x0;
  uStack_e0 = 0;
  plStack_2c8 = param_1;
  FGeometryDynamicCollection::GetInitialLevels
            ((FGeometryDynamicCollection *)(*(longlong *)param_1 + 0x5a0),&TStack_180);
  uVar15 = _UNK_150689648;
  uVar14 = ___xmm_3f800000000000000000000000000000;
  if (TStack_180.ConstAttributeArray == (TManagedArray<int> *)0x0) {
    iStack_2cc = -1;
  }
  else {
    iStack_2cc = *(int *)((longlong)param_1 + 0xa4);
  }
  uVar40 = 1;
  uStack_24c = 1;
  lVar44 = *(longlong *)param_1;
  uStack_288 = 1;
  this = *(FPBDRigidsEvolutionGBF **)(*(longlong *)((longlong)param_1 + 0xa8) + 0xbd0);
  if (0 < *(int *)(lVar44 + 0x348)) {
    lStack_2c0 = 0;
    uVar29 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar34 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    do {
      lVar43 = lStack_2c0;
      uVar20 = 0;
      if ((int)uVar42 < *(int *)(lVar44 + 0x348)) {
        uVar20 = ~uVar42 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this_00 = *(TGeometryParticleHandleImp<double,3,1> **)
                 (*(longlong *)(lVar44 + 0x340) + lVar43 * 8);
      if (this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        pTVar23 = ::Chaos::TParticles<double,3>::GetX
                            ((TParticles<double,3> *)this_00->_padding_,(int)this_00->_padding_);
        dVar5 = (double)plStack_2c8[8] *
                GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        dVar6 = (double)plStack_2c8[9] *
                GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        dVar11 = *(double *)pTVar23 - (double)plStack_2c8[0xc];
        dVar12 = *(double *)&pTVar23->field_0x8 - (double)plStack_2c8[0xd];
        uVar56 = (undefined4)((ulonglong)dVar12 >> 0x20);
        dVar7 = (double)plStack_2c8[10] *
                GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        dVar8 = (double)plStack_2c8[0xb] *
                GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        auVar54._8_4_ = SUB84(dVar6,0);
        auVar54._0_8_ = dVar5;
        auVar54._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        dVar46 = *(double *)&pTVar23->field_0x10 - (double)plStack_2c8[0xe];
        auVar51._8_4_ = SUB84(dVar8,0);
        auVar51._0_8_ = dVar7;
        auVar51._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
        auVar55 = blendpd(auVar54,auVar51,2);
        auVar53._8_4_ = SUB84(dVar7,0);
        auVar53._0_8_ = dVar6;
        auVar53._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
        auVar63._8_4_ = SUB84(dVar12,0);
        auVar63._0_8_ = dVar11;
        auVar63._12_4_ = uVar56;
        auVar50._8_4_ = SUB84(dVar12,0);
        auVar50._0_8_ = dVar11;
        auVar50._12_4_ = uVar56;
        auVar59._8_8_ = 0;
        auVar59._0_8_ = dVar46;
        auVar51 = blendpd(auVar50,auVar59,2);
        auVar64._0_8_ = auVar63._8_8_ * dVar5 - dVar6 * dVar11;
        auVar64._8_8_ = dVar46 * dVar6 - auVar53._8_8_ * dVar12;
        auVar52._0_8_ = auVar51._0_8_ * dVar7 - dVar46 * auVar55._0_8_;
        auVar52._8_8_ = auVar51._8_8_ * dVar8 - auVar55._8_8_ * 0.0;
        auVar51 = blendpd(auVar64,auVar52,2);
        dVar9 = auVar64._8_8_ + auVar64._8_8_;
        dVar10 = auVar52._0_8_ + auVar52._0_8_;
        uVar56 = SUB84(dVar10,0);
        uVar57 = (undefined4)((ulonglong)dVar10 >> 0x20);
        auVar65._0_8_ = auVar51._0_8_ + auVar51._0_8_;
        auVar65._8_8_ = auVar51._8_8_ + auVar51._8_8_;
        auVar61._8_4_ = uVar56;
        auVar61._0_8_ = dVar9;
        auVar61._12_4_ = uVar57;
        auVar47._8_4_ = uVar56;
        auVar47._0_8_ = dVar9;
        auVar47._12_4_ = uVar57;
        auVar58._8_4_ = uVar56;
        auVar58._0_8_ = dVar9;
        auVar58._12_4_ = uVar57;
        auVar51 = *(undefined1 (*) [16])(plStack_2c8 + 0x10);
        auVar62._0_8_ = auVar61._8_8_ * dVar5 - dVar9 * dVar6;
        auVar62._8_8_ = auVar65._0_8_ * dVar6 - auVar47._8_8_ * dVar7;
        auVar59 = blendpd(auVar58,auVar65,2);
        auVar48._8_4_ = SUB84(auVar65._8_8_,0);
        auVar48._0_8_ = auVar65._0_8_;
        auVar48._12_4_ = (int)((ulonglong)auVar65._8_8_ >> 0x20);
        auVar60._0_8_ = auVar59._0_8_ * dVar7 - auVar65._0_8_ * auVar55._0_8_;
        auVar60._8_8_ = auVar59._8_8_ * dVar8 - auVar48._8_8_ * auVar55._8_8_;
        auVar59 = *(undefined1 (*) [16])(plStack_2c8 + 0x12);
        lVar43 = -(ulonglong)
                  ((double)CONCAT44(uVar34 & auVar59._4_4_,uVar29 & auVar59._0_4_) <=
                  (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
        lVar44 = -(ulonglong)
                  ((double)CONCAT44(auVar51._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    auVar51._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                  (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
        lVar45 = -(ulonglong)
                  ((double)CONCAT44(auVar51._12_4_ & _UNK_15061cc8c,auVar51._8_4_ & _UNK_15061cc88)
                  <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
        auVar53 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar51);
        auVar49._8_4_ = SUB84(auVar62._8_8_,0);
        auVar49._0_8_ = auVar62._0_8_;
        auVar49._12_4_ = (int)((ulonglong)auVar62._8_8_ >> 0x20);
        auVar55._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
        auVar55._0_8_ = auVar59._0_8_;
        auVar55._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
        auVar51 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar55);
        dVar5 = (double)CONCAT44(~(uint)((ulonglong)lVar44 >> 0x20) & auVar53._4_4_,
                                 ~(uint)lVar44 & auVar53._0_4_) *
                (dVar9 * dVar8 + dVar11 + auVar49._8_8_);
        dVar6 = (double)CONCAT44(~(uint)((ulonglong)lVar45 >> 0x20) & auVar53._12_4_,
                                 ~(uint)lVar45 & auVar53._8_4_) *
                (dVar10 * dVar8 + dVar12 + auVar60._0_8_);
        uVar56 = SUB84(dVar6,0);
        uVar57 = (undefined4)((ulonglong)dVar6 >> 0x20);
        auStack_198._8_4_ = uVar56;
        auStack_198._0_8_ = dVar5;
        auStack_198._12_4_ = uVar57;
        lVar44 = 0;
        auVar59 = blendpd(auVar62,auVar60,2);
        auStack_1e8._8_4_ = uVar56;
        auStack_1e8._0_8_ = dVar5;
        auStack_1e8._12_4_ = uVar57;
        dStack_188 = (double)CONCAT44(~(uint)((ulonglong)lVar43 >> 0x20) & auVar51._4_4_,
                                      ~(uint)lVar43 & auVar51._0_4_) *
                     (auVar65._0_8_ * dVar8 + dVar46 + auVar59._0_8_);
        dStack_1d8 = dStack_188;
        do {
          dVar5 = *(double *)(auStack_1e8 + lVar44);
          uVar29 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
          uVar34 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
          if ((dVar5 < *(double *)
                        ((longlong)plStack_2c8 + (8 - (longlong)auStack_1e8) +
                        (longlong)(auStack_1e8 + lVar44))) ||
             (pdVar2 = (double *)((longlong)plStack_2c8 + lVar44 + 0x20),
             *pdVar2 <= dVar5 && dVar5 != *pdVar2)) goto LAB_1441028c4;
          lVar44 = lVar44 + 8;
        } while (lVar44 < 0x18);
        if (-1 < iStack_2cc) {
          if ((TStack_180.ConstAttributeArray == (TManagedArray<int> *)0x0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                  ,0x67,L""), bVar18)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pTVar17 = TStack_180.ConstAttributeArray;
          lVar44 = *plStack_2c8;
          uVar29 = 0;
          if ((int)uVar42 < *(int *)(lVar44 + 0x408)) {
            uVar29 = ~uVar42 >> 0x1f;
          }
          if ((uVar29 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar29 = *(uint *)(*(longlong *)(lVar44 + 0x400) + lStack_2c0 * 4);
          uVar34 = 0;
          if ((int)uVar29 < *(int *)&pTVar17->field_0x18) {
            uVar34 = ~uVar29 >> 0x1f;
          }
          if ((uVar34 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar21 = iStack_2cc;
          iVar35 = *(int *)(*(longlong *)&pTVar17->field_0x10 + (longlong)(int)uVar29 * 4);
          if (iStack_2cc < iVar35) {
            pCVar24 = ::Chaos::TPBDRigidClusteredParticles<double,3>::ClusterIds
                                ((TPBDRigidClusteredParticles<double,3> *)this_00->_padding_,
                                 (int)this_00->_padding_);
            if (pCVar24->Id == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
              this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
            }
            else {
              pCVar24 = ::Chaos::TPBDRigidClusteredParticles<double,3>::ClusterIds
                                  ((TPBDRigidClusteredParticles<double,3> *)this_00->_padding_,
                                   (int)this_00->_padding_);
              pTVar41 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
              pTVar37 = pTVar41;
              if (2 < *(byte *)((longlong)
                                &((TGeometryParticleHandleImp<double,3,1> *)pCVar24->Id)->_padding_
                               + 4)) {
                pTVar37 = (TGeometryParticleHandleImp<double,3,1> *)pCVar24->Id;
              }
              uVar29 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
              uVar34 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
              if (pTVar37 == (TGeometryParticleHandleImp<double,3,1> *)0x0) goto LAB_1441028c4;
              this_00 = pTVar37;
              if (iVar21 < iVar35 + -1) {
                do {
                  pCVar24 = ::Chaos::TPBDRigidClusteredParticles<double,3>::ClusterIds
                                      ((TPBDRigidClusteredParticles<double,3> *)pTVar37->_padding_,
                                       (int)pTVar37->_padding_);
                  this_00 = pTVar41;
                  if (pCVar24->Id == (TPBDRigidParticleHandleImp<double,3,1> *)0x0)
                  goto LAB_1441022d9;
                  pCVar24 = ::Chaos::TPBDRigidClusteredParticles<double,3>::ClusterIds
                                      ((TPBDRigidClusteredParticles<double,3> *)pTVar37->_padding_,
                                       (int)pTVar37->_padding_);
                  pTVar37 = pTVar41;
                  if (2 < *(byte *)((longlong)
                                    &((TGeometryParticleHandleImp<double,3,1> *)pCVar24->Id)->
                                     _padding_ + 4)) {
                    pTVar37 = (TGeometryParticleHandleImp<double,3,1> *)pCVar24->Id;
                  }
                } while (pTVar37 != (TGeometryParticleHandleImp<double,3,1> *)0x0);
                this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
              }
            }
LAB_1441022d9:
            uVar29 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
            uVar34 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
            if (this_00 == (TGeometryParticleHandleImp<double,3,1> *)0x0) goto LAB_1441028c4;
          }
        }
        lVar44 = plStack_2c8[0x14];
        pFVar25 = &::Chaos::TPBDRigidClusteredParticles<double,3>::RigidClusteredFlags
                             ((TPBDRigidClusteredParticles<double,3> *)this_00->_padding_,
                              (int)this_00->_padding_)->field0_0x0;
        pFVar25->Bits = pFVar25->Bits ^ ((char)lVar44 * '\x02' ^ pFVar25->Bits) & 2;
        if (((((char)lVar44 == '\0') && (this != (FPBDRigidsEvolutionGBF *)0x0)) &&
            (EVar19 = ::Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                                ((TPBDRigidParticleHandleImp<double,3,1> *)this_00),
            EVar19 != Dynamic)) &&
           (EVar19 = ::Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                               ((TPBDRigidParticleHandleImp<double,3,1> *)this_00),
           EVar19 != Sleeping)) {
          FStack_1c8.Rotation._0_8_ = uVar14;
          FStack_1c8.Rotation._8_8_ = uVar15;
          FStack_1c8.Position._16_8_ = 0;
          FStack_1c8.Position._0_8_ = 0;
          FStack_1c8.Position._8_8_ = 0;
          FStack_1c8.Mode = None;
          ::Chaos::FPBDRigidsEvolutionBase::SetParticleObjectState
                    ((FPBDRigidsEvolutionBase *)this,
                     (TPBDRigidParticleHandleImp<double,3,1> *)this_00,Dynamic);
          ::Chaos::FPBDRigidsEvolutionGBF::SetParticleKinematicTarget(this,this_00,&FStack_1c8);
        }
        do {
          pTVar37 = this_00;
          pCVar24 = ::Chaos::TPBDRigidClusteredParticles<double,3>::ClusterIds
                              ((TPBDRigidClusteredParticles<double,3> *)pTVar37->_padding_,
                               (int)pTVar37->_padding_);
          if (pCVar24->Id == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) break;
          pCVar24 = ::Chaos::TPBDRigidClusteredParticles<double,3>::ClusterIds
                              ((TPBDRigidClusteredParticles<double,3> *)pTVar37->_padding_,
                               (int)pTVar37->_padding_);
          this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
          if (2 < *(byte *)((longlong)
                            &((TGeometryParticleHandleImp<double,3,1> *)pCVar24->Id)->_padding_ + 4)
             ) {
            this_00 = (TGeometryParticleHandleImp<double,3,1> *)pCVar24->Id;
          }
        } while (this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0);
        if (TStack_128.NumFreeIndices == 0) {
          iVar21 = ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10,8,(int)uVar40,(ForAnyElementType *)&TStack_128,
                              &TStack_128.Data.ArrayNum,&TStack_128.Data.ArrayMax);
          iVar35 = TStack_128.AllocationFlags.NumBits;
          if (TStack_128.AllocationFlags.NumBits == 0) {
            iVar39 = 0;
LAB_144102436:
            if (TStack_128.AllocationFlags.MaxBits < (int)(TStack_128.AllocationFlags.NumBits + 1U))
            {
              uVar29 = TStack_128.AllocationFlags.MaxBits + 0x1fU >> 5;
              uVar34 = TStack_128.AllocationFlags.NumBits + 0x20U >> 5;
              if (uVar34 < 5) {
                TStack_128.AllocationFlags.MaxBits = 4;
              }
              else {
                uVar33 = (ulonglong)uVar34;
                if (uVar29 < 5) {
                  uVar29 = 0;
                }
                if (uVar29 == 0) {
                  uVar38 = 4;
                  if (4 < uVar33) {
                    uVar38 = uVar33;
                  }
                }
                else {
                  uVar38 = ((ulonglong)uVar34 * 3 >> 3) + 0x10 + uVar33;
                }
                uVar26 = FMemory::QuantizeSize(uVar38 * 4,0);
                TStack_128.AllocationFlags.MaxBits = (int)(uVar26 >> 2);
                if (TStack_128.AllocationFlags.MaxBits < (int)uVar34) {
                  TStack_128.AllocationFlags.MaxBits = 0x7fffffff;
                }
              }
              TStack_128.AllocationFlags.MaxBits = TStack_128.AllocationFlags.MaxBits << 5;
              TBitArray<FDefaultBitArrayAllocator>::Realloc
                        (&TStack_128.AllocationFlags,TStack_128.AllocationFlags.NumBits);
            }
            TStack_128.AllocationFlags.NumBits = TStack_128.AllocationFlags.NumBits + 1;
            uVar34 = TStack_128.AllocationFlags.NumBits >> 0x1f & 0x1f;
            uVar29 = TStack_128.AllocationFlags.NumBits + uVar34;
            iVar22 = (uVar29 & 0x1f) - uVar34;
            if (iVar22 != 0) {
              FVar30 = (ForElementType<unsigned_int>)&TStack_128.AllocationFlags;
              if (TStack_128.AllocationFlags.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar30 = TStack_128.AllocationFlags.AllocatorInstance.SecondaryData;
              }
              puVar1 = (uint *)((longlong)FVar30 + (longlong)((int)uVar29 >> 5) * 4);
              *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar22 & 0x1f);
            }
          }
          else {
            iVar39 = (int)(TStack_128.AllocationFlags.NumBits +
                          (TStack_128.AllocationFlags.NumBits >> 0x1f & 0x1fU)) >> 5;
            if (iVar39 != (int)(((int)(TStack_128.AllocationFlags.NumBits - 1U) >> 0x1f & 0x1fU) +
                               (TStack_128.AllocationFlags.NumBits - 1U)) >> 5) goto LAB_144102436;
            TStack_128.AllocationFlags.NumBits = TStack_128.AllocationFlags.NumBits + 1U;
          }
          FVar30 = (ForElementType<unsigned_int>)&TStack_128.AllocationFlags;
          if (TStack_128.AllocationFlags.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_int>)0x0) {
            FVar30 = TStack_128.AllocationFlags.AllocatorInstance.SecondaryData;
          }
          puVar1 = (uint *)((longlong)FVar30 + (longlong)iVar39 * 4);
          *puVar1 = *puVar1 & ~((int)uStack_288 << ((byte)iVar35 & 0x1f));
          uVar40 = uStack_288;
          iVar35 = TStack_128.FirstFreeIndex;
        }
        else {
          TStack_128.NumFreeIndices = TStack_128.NumFreeIndices + -1;
          iVar35 = *(int *)(TStack_128.Data.AllocatorInstance.Data +
                           (longlong)TStack_128.FirstFreeIndex * 0x10 + 4);
          iVar21 = TStack_128.FirstFreeIndex;
          if (TStack_128.NumFreeIndices != 0) {
            *(undefined4 *)(TStack_128.Data.AllocatorInstance.Data + (longlong)iVar35 * 0x10) =
                 0xffffffff;
          }
        }
        TStack_128.FirstFreeIndex = iVar35;
        TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex(&TStack_128,&FStack_1f8,iVar21);
        if (FStack_1f8.Pointer == (ulonglong *)0x0) {
          puVar36 = (ulonglong *)0x0;
        }
        else {
          *(TGeometryParticleHandleImp<double,3,1> **)FStack_1f8.Pointer = pTVar37;
          *(undefined4 *)((longlong)FStack_1f8.Pointer + 8) = 0xffffffff;
          puVar36 = FStack_1f8.Pointer;
        }
        uVar33 = *puVar36;
        uVar29 = ((uint)(uVar33 >> 0x14) & 0xffff ^ (uint)(uVar33 >> 4)) * -0x7a143595;
        uVar29 = (uVar29 >> 0xd ^ uVar29) * -0x3d4d51cb;
        uVar29 = uVar29 >> 0x10 ^ uVar29;
        uVar20 = (uint)uVar40;
        if ((TStack_128.Data.ArrayNum - TStack_128.NumFreeIndices != 1) &&
           (TStack_128.Data.ArrayNum != TStack_128.NumFreeIndices)) {
          FVar31.Data = aFStack_f0;
          if (FStack_e8.Data != (FScriptContainerElement *)0x0) {
            FVar31.Data = FStack_e8.Data;
          }
          for (iVar35 = *(int *)(FVar31.Data + (ulonglong)(uStack_e0 - 1 & uVar29) * 4);
              iVar35 != -1;
              iVar35 = *(int *)(TStack_128.Data.AllocatorInstance.Data + (longlong)iVar35 * 0x10 + 8
                               )) {
            if (*(ulonglong *)(TStack_128.Data.AllocatorInstance.Data + (longlong)iVar35 * 0x10) ==
                uVar33) {
              if (iVar35 != -1) {
                *(ulonglong *)(TStack_128.Data.AllocatorInstance.Data + (longlong)iVar35 * 0x10) =
                     uVar33;
                TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::RemoveAtUninitialized(&TStack_128,FStack_1f8.Index,uVar20);
                uVar29 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
                uVar34 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
                goto LAB_1441028c4;
              }
              break;
            }
          }
        }
        uVar32 = TStack_128.Data.ArrayNum - TStack_128.NumFreeIndices;
        uVar34 = uVar20;
        if (3 < uVar32) {
          uVar33 = (ulonglong)((uVar32 >> 1) + 7) * 2 + 1;
          lVar44 = 0x3f;
          if (uVar33 != 0) {
            for (; uVar33 >> lVar44 == 0; lVar44 = lVar44 + -1) {
            }
          }
          uStack_290 = (undefined4)lVar44;
          uVar34 = uVar20 << ((byte)lVar44 & 0x1f);
        }
        if (((int)uVar32 < 1) || ((int)uVar34 <= (int)uStack_e0)) {
          uVar29 = uStack_e0 - 1 & uVar29;
          *(uint *)((longlong)puVar36 + 0xc) = uVar29;
          FVar31.Data = aFStack_f0;
          if (FStack_e8.Data != (FScriptContainerElement *)0x0) {
            FVar31.Data = FStack_e8.Data;
          }
          uVar33 = (longlong)(int)uStack_e0 - 1U & (longlong)(int)uVar29;
          *(undefined4 *)(puVar36 + 1) = *(undefined4 *)(FVar31.Data + uVar33 * 4);
          *(int *)(FVar31.Data + uVar33 * 4) = FStack_1f8.Index;
          uVar29 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
          uVar34 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        }
        else {
          uStack_e0 = uVar34;
          if (FStack_e8.Data != (FScriptContainerElement *)0x0) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_e8,0,0,4);
          }
          if (uVar34 != 0) {
            uVar29 = uVar34;
            if (uVar34 < 2) {
              if (FStack_e8.Data != (FScriptContainerElement *)0x0) {
                uVar29 = 0;
                goto LAB_144102704;
              }
            }
            else {
LAB_144102704:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&FStack_e8,0,uVar29,4);
            }
            if (0 < (int)uVar34) {
              uVar33 = 0;
              uVar38 = (ulonglong)uVar34;
              do {
                FVar31.Data = aFStack_f0;
                if (FStack_e8.Data != (FScriptContainerElement *)0x0) {
                  FVar31.Data = FStack_e8.Data;
                }
                uVar27 = (longlong)(int)uVar34 - 1U & uVar33;
                uVar33 = uVar33 + 1;
                *(undefined4 *)(FVar31.Data + uVar27 * 4) = 0xffffffff;
                uVar38 = uVar38 - 1;
              } while (uVar38 != 0);
            }
          }
          uVar29 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
          uVar34 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
          if (uStack_e0 != 0) {
            TStack_2b8.Array = &TStack_128.AllocationFlags;
            TStack_2b8._padding_._0_4_ = 0;
            TStack_2b8.UnvisitedBitMask = 0xffffffff;
            TStack_2b8.CurrentBitIndex = 0;
            TStack_2b8.BaseBitIndex = 0;
            TStack_2b8._padding_._4_4_ = uVar20;
            if (TStack_128.AllocationFlags.NumBits != 0) {
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2b8);
            }
            auVar13._4_4_ = TStack_2b8.CurrentBitIndex;
            auVar13._8_4_ = TStack_2b8.BaseBitIndex;
            auVar13._0_4_ = TStack_2b8.UnvisitedBitMask;
            unique0x10000bc9 = TStack_2b8._28_4_;
            unique0x10000bbd = auVar13;
            pTStack_280 = &TStack_128;
            auStack_278._0_8_ =
                 CONCAT44(TStack_2b8._padding_._4_4_,(undefined4)TStack_2b8._padding_);
            uVar33 = auVar13._0_8_ >> 0x20;
            auStack_278._8_8_ = TStack_2b8.Array;
            uVar29 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
            uVar34 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
            if (TStack_2b8.CurrentBitIndex < (TStack_2b8.Array)->NumBits) {
              do {
                pFVar3 = (pTStack_280->Data).AllocatorInstance.Data;
                lVar44 = (longlong)(int)uVar33;
                uVar29 = ((uint)(*(ulonglong *)(pFVar3 + lVar44 * 0x10) >> 0x14) & 0xffff ^
                         (uint)(*(ulonglong *)(pFVar3 + lVar44 * 0x10) >> 4)) * -0x7a143595;
                uVar29 = (uVar29 >> 0xd ^ uVar29) * -0x3d4d51cb;
                uVar29 = (uVar29 >> 0x10 ^ uVar29) & uStack_e0 - 1;
                *(uint *)(pFVar3 + lVar44 * 0x10 + 0xc) = uVar29;
                FVar31.Data = aFStack_f0;
                if (FStack_e8.Data != (FScriptContainerElement *)0x0) {
                  FVar31.Data = FStack_e8.Data;
                }
                uVar38 = (longlong)(int)uStack_e0 - 1U & (longlong)(int)uVar29;
                *(undefined4 *)(pFVar3 + lVar44 * 0x10 + 8) =
                     *(undefined4 *)(FVar31.Data + uVar38 * 4);
                *(int *)(FVar31.Data + uVar38 * 4) = (int)uVar33;
                auStack_278._16_4_ = auStack_278._16_4_ & ~auStack_278._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                          ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_278);
                uVar33 = (ulonglong)uStack_264;
                uVar29 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
                uVar34 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
              } while ((int)uStack_264 < *(int *)(auStack_278._8_8_ + 0x18));
            }
          }
        }
      }
LAB_1441028c4:
      uStack_24c = (uint)uVar40;
      lStack_2c0 = lStack_2c0 + 1;
      uVar42 = uVar42 + 1;
      lVar44 = *plStack_2c8;
    } while ((int)uVar42 < *(int *)(lVar44 + 0x348));
  }
  uVar42 = TStack_128.AllocationFlags.NumBits;
  uStack_250 = 0;
  uStack_23c = uStack_250;
  uStack_238 = uStack_250;
  if (TStack_128.AllocationFlags.NumBits != 0) {
    FVar30 = (ForElementType<unsigned_int>)&TStack_128.AllocationFlags;
    if (TStack_128.AllocationFlags.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FVar30 = TStack_128.AllocationFlags.AllocatorInstance.SecondaryData;
    }
    uVar29 = *(uint *)FVar30;
    uStack_250 = 0;
    uStack_238 = 0;
    while (uVar29 == 0) {
      lVar44 = (longlong)(int)uStack_250;
      uStack_238 = uStack_238 + 0x20;
      uStack_250 = uStack_250 + 1;
      uStack_23c = TStack_128.AllocationFlags.NumBits;
      if ((int)((TStack_128.AllocationFlags.NumBits - 1U) +
               ((int)(TStack_128.AllocationFlags.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
          (int)uStack_250) goto LAB_1441029c7;
      uVar29 = *(uint *)((uchar *)((longlong)FVar30 + 4) + lVar44 * 4);
    }
    uStack_24c = -uVar29 & uVar29;
    uVar33 = (ulonglong)uStack_24c * 2 + 1;
    lVar44 = 0x3f;
    if (uVar33 != 0) {
      for (; uVar33 >> lVar44 == 0; lVar44 = lVar44 + -1) {
      }
    }
    iStack_28c = (int)lVar44;
    uStack_23c = iStack_28c + -1 + uStack_238;
    if (TStack_128.AllocationFlags.NumBits < (int)uStack_23c) {
      uStack_23c = TStack_128.AllocationFlags.NumBits;
    }
  }
LAB_1441029c7:
  pTStack_258 = &TStack_128;
  pTStack_248 = &TStack_128.AllocationFlags;
  uVar29 = TStack_128.AllocationFlags.NumBits & 0xffffffe0;
  uStack_234 = uStack_12c;
  iStack_230 = TStack_128.Data.ArrayNum - TStack_128.NumFreeIndices;
  uStack_240 = 0xffffffff;
  TStack_220.CurrentBitIndex = uStack_23c;
  TStack_220.UnvisitedBitMask = 0xffffffff;
  TStack_220._padding_ = CONCAT44(uStack_24c,uStack_250);
  iVar35 = TStack_128.AllocationFlags.NumBits >> 5;
  TStack_220._28_4_ = uStack_12c;
  TStack_220.BaseBitIndex = uStack_238;
  uStack_200 = CONCAT44(uStack_22c,iStack_230);
  bVar28 = (byte)TStack_128.AllocationFlags.NumBits;
  pTStack_228 = pTStack_258;
  TStack_220.Array = pTStack_248;
  if ((TStack_128.AllocationFlags.NumBits < 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar18)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (uVar42 != TStack_128.AllocationFlags.NumBits) {
    FVar30 = (ForElementType<unsigned_int>)&TStack_128.AllocationFlags;
    if (TStack_128.AllocationFlags.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FVar30 = TStack_128.AllocationFlags.AllocatorInstance.SecondaryData;
    }
    uVar42 = -1 << (bVar28 & 0x1f) & *(uint *)((longlong)FVar30 + (longlong)iVar35 * 4);
    while (uVar42 == 0) {
      lVar44 = (longlong)iVar35;
      uVar29 = uVar29 + 0x20;
      iVar35 = iVar35 + 1;
      uVar42 = TStack_128.AllocationFlags.NumBits;
      if ((int)((TStack_128.AllocationFlags.NumBits - 1U) +
               ((int)(TStack_128.AllocationFlags.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 < iVar35)
      goto LAB_144102b00;
      uVar42 = *(uint *)((uchar *)((longlong)FVar30 + 4) + lVar44 * 4);
    }
    uVar33 = (ulonglong)(-uVar42 & uVar42) * 2 + 1;
    lVar44 = 0x3f;
    if (uVar33 != 0) {
      for (; uVar33 >> lVar44 == 0; lVar44 = lVar44 + -1) {
      }
    }
    uVar42 = (int)lVar44 + -1 + uVar29;
    if (TStack_128.AllocationFlags.NumBits < (int)uVar42) {
      uVar42 = TStack_128.AllocationFlags.NumBits;
    }
  }
LAB_144102b00:
  while( true ) {
    pTVar16 = pTStack_228;
    if ((pTStack_228->Data).ArrayNum - pTStack_228->NumFreeIndices != (int)uStack_200) {
      `TSparseArray<TSparseSetElement<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStack_2d0);
    }
    if (((TStack_220.CurrentBitIndex == uVar42) && (TStack_220.Array == &TStack_128.AllocationFlags)
        ) && (pTVar16 == &TStack_128)) break;
    ::Chaos::UpdateKinematicProperties
              (*(TPBDRigidParticleHandleImp<double,3,1> **)
                ((pTVar16->Data).AllocatorInstance.Data +
                (longlong)TStack_220.CurrentBitIndex * 0x10),&(this->Clustering).MChildren,this);
    TStack_220.UnvisitedBitMask = TStack_220.UnvisitedBitMask & ~TStack_220._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_220);
  }
  uStack_e0 = 0;
  if (FStack_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_e8.Data);
  }
  TSparseArray<TSparseSetElement<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&TStack_128);
  return;
}

// Call @ 14410d540

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGeometryCollectionPhysicsProxy::InitializeSharedCollisionStructures'::__l2::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `FGeometryCollectionPhysicsProxy::InitializeSharedCollisionStructures'::__l2::<lambda_2>::
  operator()(param_1,*param_2);
  return;
}

