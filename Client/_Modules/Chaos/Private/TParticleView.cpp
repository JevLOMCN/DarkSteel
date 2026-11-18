// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// operator()<Chaos::TPBDRigidParticleHandleImp<double,3,0>_> @ 14370a580

void __thiscall
`Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::
ParallelFor<`FChaosVisualDebuggerTrace::TraceParticleClusterChildData'::__l2::<lambda_1>_>'::__l2::
<lambda_2>::operator()<Chaos::TPBDRigidParticleHandleImp<double,3,0>_>
          (void *this,TPBDRigidParticleHandleImp<double,3,0> *param_1,int param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FChaosVDContext *pFVar3;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar4;
  uint *puVar5;
  FChaosVDThreadContext *pFVar6;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar7;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  code *local_28;
  undefined1 *local_20;
  
  pFVar3 = *(FChaosVDContext **)this;
  pTVar4 = Chaos::TPBDRigidParticles<double,3>::Handle
                     (*(TPBDRigidParticles<double,3> **)param_1,*(int *)&param_1->field_0x8);
  pTVar8 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
  if (2 < (byte)pTVar4->field_0xc) {
    pTVar8 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar4;
  }
  if (pTVar8 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
    puVar5 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
    local_20 = local_res8;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar6 = (FChaosVDThreadContext *)
             FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_28,puVar5);
    FChaosVDThreadContext::PushContext(pFVar6,pFVar3);
    pTVar7 = TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
             ::Find((TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
                     *)(*(longlong *)(pFVar3 + 1) + 200),pTVar8);
    if (pTVar7 != (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)0x0) {
      pFVar9 = (pTVar7->AllocatorInstance).Data;
      iVar2 = pTVar7->ArrayNum;
      pFVar1 = pFVar9 + (longlong)iVar2 * 8;
      while( true ) {
        if (pTVar7->ArrayNum != iVar2) {
          `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (pFVar9 == pFVar1) break;
        FChaosVisualDebuggerTrace::TraceParticle(*(TGeometryParticleHandleImp<double,3,1> **)pFVar9)
        ;
        pFVar9 = pFVar9 + 8;
      }
    }
    puVar5 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
    local_20 = local_res8;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar6 = (FChaosVDThreadContext *)
             FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_28,puVar5);
    FChaosVDThreadContext::PopContext(pFVar6);
  }
  return;
}

