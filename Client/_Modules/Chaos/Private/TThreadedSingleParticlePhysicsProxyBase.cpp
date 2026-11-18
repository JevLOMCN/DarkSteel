// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// VerifyContext @ 143dbced0

void __thiscall
Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::VerifyContext
          (TThreadedSingleParticlePhysicsProxyBase<1> *this)

{
  code *pcVar1;
  bool bVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  undefined1 local_res8 [32];
  code *local_18;
  undefined1 *local_10;
  
  if (*(longlong *)&this->field_0x8 != 0) {
    puVar3 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
    local_10 = local_res8;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar4 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar3);
    bVar2 = IsInGameThread();
    if ((((!bVar2) && (*(int *)&pFVar4[2].field_0x4 < 1)) || (*(char *)(pFVar4 + 3) != '\0')) &&
       (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3522308889972310313>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                           ,0x129,"IsInGameThreadContext()"), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// SetSpatialIdx @ 1440b43e0

void __thiscall
Chaos::TThreadedSingleParticlePhysicsProxyBase<1>::SetSpatialIdx
          (TThreadedSingleParticlePhysicsProxyBase<1> *this,FSpatialAccelerationIdx param_1)

{
  longlong lVar1;
  IPhysicsProxyBase *pIVar2;
  
  VerifyContext(this);
  lVar1 = *(longlong *)&this->field_0x40;
  pIVar2 = *(IPhysicsProxyBase **)(lVar1 + 0x10);
  *(FSpatialAccelerationIdx *)(lVar1 + 0x5c) = param_1;
  *(uint *)(lVar1 + 0x9c) = *(uint *)(lVar1 + 0x9c) | 0x10;
  if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
  }
  return;
}

