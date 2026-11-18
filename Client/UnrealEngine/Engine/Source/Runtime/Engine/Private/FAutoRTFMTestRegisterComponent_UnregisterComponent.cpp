// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Run @ 1487ec8f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
_anon_689E48D4::FAutoRTFMTestRegisterComponent_UnregisterComponent::Run
          (FAutoRTFMTestRegisterComponent_UnregisterComponent *this,UWorld *param_1,
          UAutoRTFMTestLevel *param_2,AAutoRTFMTestActor *param_3,
          UAutoRTFMTestPrimitiveComponent *param_4)

{
  TGeometryParticle<double,3> *pTVar1;
  FPBDRigidsSolver *this_00;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  TGeometryParticle<double,3> *pTVar5;
  FSingleParticlePhysicsProxy *pFVar6;
  TSphere<double,3> *this_01;
  TGeometryParticle<double,3> *pTVar7;
  longlong *plVar8;
  IPhysicsProxyBase *pIVar9;
  FGeometryParticleParameters local_res10 [8];
  TUniquePtr<Chaos::TGeometryParticle<double,3>,TDefaultDelete<Chaos::TGeometryParticle<double,3>_>_>
  local_40;
  TVector<double,3> local_38;
  
  local_res10[0].bDisabled = false;
  pTVar5 = ::operator_new(0xa0);
  pTVar7 = (TGeometryParticle<double,3> *)0x0;
  local_40.Ptr = pTVar7;
  if (pTVar5 != (TGeometryParticle<double,3> *)0x0) {
    local_40.Ptr = Chaos::TGeometryParticle<double,3>::TGeometryParticle<double,3>
                             (pTVar5,local_res10);
  }
  if (((local_40.Ptr)->Proxy != (IPhysicsProxyBase *)0x0) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_12814936870746524>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\PhysicsProxy\\SingleParticlePhysicsProxy.h"
                         ,0x664,"Particle->GetProxy() == nullptr"), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar6 = ::operator_new(0x68);
  pTVar5 = pTVar7;
  if (pFVar6 != (FSingleParticlePhysicsProxy *)0x0) {
    pTVar5 = (TGeometryParticle<double,3> *)
             Chaos::FSingleParticlePhysicsProxy::FSingleParticlePhysicsProxy
                       (pFVar6,&local_40,(TGeometryParticleHandleImp<double,3,1> *)0x0,
                        (UObject *)0x0);
  }
  FBodyInstance::SetPhysicsActor
            ((FBodyInstance *)&param_4->_padding_,(FSingleParticlePhysicsProxy *)pTVar5);
  if (local_40.Ptr != (TGeometryParticle<double,3> *)0x0) {
    (**(code **)(local_40.Ptr)->_padding_)(local_40.Ptr,1);
  }
  pFVar6 = FBodyInstance::GetPhysicsActor((FBodyInstance *)&param_4->_padding_);
  local_38._0_8_ = ___xmm_40000000000000003ff0000000000000;
  local_38._8_8_ = _UNK_150744178;
  pTVar5 = (pFVar6->Particle).Ptr;
  local_38._16_8_ = __real_4008000000000000;
  this_01 = ::operator_new(0x30);
  if ((this_01 == (TSphere<double,3> *)0x0) ||
     (pTVar7 = (TGeometryParticle<double,3> *)
               Chaos::TSphere<double,3>::TSphere<double,3>
                         (this_01,&local_38,__real_3ff0000000000000),
     pTVar7 == (TGeometryParticle<double,3> *)0x0)) {
    pIVar9 = pTVar5->Proxy;
    plVar8 = (longlong *)&DAT_00000008;
  }
  else {
    plVar8 = &pTVar7->_padding_;
    LOCK();
    *(int *)plVar8 = (int)*plVar8 + 1;
    UNLOCK();
    pIVar9 = pTVar5->Proxy;
    LOCK();
    *(int *)plVar8 = (int)*plVar8 + 1;
    UNLOCK();
  }
  pTVar1 = (TGeometryParticle<double,3> *)(pTVar5->MNonFrequentData).Property.MGeometry.Reference;
  if (pTVar1 != pTVar7) {
    (pTVar5->MNonFrequentData).Property.MGeometry.Reference = (FImplicitObject *)pTVar7;
    if (pTVar7 != (TGeometryParticle<double,3> *)0x0) {
      LOCK();
      *(int *)plVar8 = (int)*plVar8 + 1;
      UNLOCK();
    }
    if (pTVar1 != (TGeometryParticle<double,3> *)0x0) {
      LOCK();
      plVar8 = &pTVar1->_padding_;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if (((int)lVar3 == 1) && (*(int *)((longlong)&pTVar1->_padding_ + 4) == 0)) {
        (**(code **)pTVar1->_padding_)(pTVar1,1);
      }
    }
  }
  if (pTVar7 != (TGeometryParticle<double,3> *)0x0) {
    LOCK();
    plVar8 = &pTVar7->_padding_;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (*(int *)((longlong)&pTVar7->_padding_ + 4) == 0)) {
      (**(code **)pTVar7->_padding_)(pTVar7,1);
    }
  }
  (pTVar5->MDirtyFlags).Bits = (pTVar5->MDirtyFlags).Bits | 0x10;
  if ((pIVar9 != (IPhysicsProxyBase *)0x0) && (pIVar9->Solver != (FPhysicsSolverBase *)0x0)) {
    Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar9->Solver,pIVar9);
  }
  Chaos::TGeometryParticle<double,3>::UpdateShapesArray(pTVar5);
  if (pTVar7 != (TGeometryParticle<double,3> *)0x0) {
    LOCK();
    plVar8 = &pTVar7->_padding_;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (*(int *)((longlong)&pTVar7->_padding_ + 4) == 0)) {
      (**(code **)pTVar7->_padding_)(pTVar7,1);
    }
  }
  this_00 = (FPBDRigidsSolver *)param_1->PhysicsScene->_padding_;
  pFVar6 = FBodyInstance::GetPhysicsActor((FBodyInstance *)&param_4->_padding_);
  Chaos::FPBDRigidsSolver::RegisterObject(this_00,pFVar6);
  UActorComponent::RegisterComponent((UActorComponent *)param_4);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"AutoRTFM::ETransactionResult::AbortedByRequest == Result"
             ,false);
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"Component->IsRegistered()",
             (bool)((byte)param_4->_padding_ & 1));
  UActorComponent::RegisterComponent((UActorComponent *)param_4);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"bWasRegistered",(bool)((byte)param_4->_padding_ & 1));
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Component->IsRegistered()",
             (bool)((byte)param_4->_padding_ & 1));
  UActorComponent::UnregisterComponent((UActorComponent *)param_4);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"AutoRTFM::ETransactionResult::AbortedByRequest == Result"
             ,false);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Component->IsRegistered()",
             (bool)((byte)param_4->_padding_ & 1));
  UActorComponent::UnregisterComponent((UActorComponent *)param_4);
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"Component->IsRegistered()",
             (bool)((byte)param_4->_padding_ & 1));
  return;
}

