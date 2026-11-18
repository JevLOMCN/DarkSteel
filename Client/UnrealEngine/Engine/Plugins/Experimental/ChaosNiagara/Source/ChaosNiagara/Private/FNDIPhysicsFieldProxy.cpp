// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosNiagara
// Functions: 4

// ConsumePerInstanceDataFromGameThread @ 14e98c000

void __thiscall
FNDIPhysicsFieldProxy::ConsumePerInstanceDataFromGameThread
          (FNDIPhysicsFieldProxy *this,void *param_1,ulong64 *param_2)

{
  code *pcVar1;
  bool bVar2;
  FNDIFieldRenderData *pFVar3;
  
  pFVar3 = TMapBase<unsigned___int64,FNDIFieldRenderData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIFieldRenderData,0>_>
           ::FindOrAddImpl<unsigned___int64_const_&>
                     ((TMapBase<unsigned___int64,FNDIFieldRenderData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIFieldRenderData,0>_>
                       *)&this->SystemInstancesToProxyData,
                      (int)(*param_2 >> 0x20) * 0x17 + (int)*param_2,param_2);
  if (pFVar3 == (FNDIFieldRenderData *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7898972004450041977>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosNiagara\\Source\\ChaosNiagara\\Private\\NiagaraDataInterfacePhysicsField.cpp"
                       ,0x79,"TargetData");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if ((param_1 != (void *)0x0) &&
          (*(FPhysicsFieldResource **)param_1 != (FPhysicsFieldResource *)0x0)) {
    pFVar3->FieldResource = *(FPhysicsFieldResource **)param_1;
    pFVar3->TimeSeconds = *(float *)((longlong)param_1 + 8);
  }
  return;
}

// DestroyPerInstanceData @ 14e991850

void __thiscall
FNDIPhysicsFieldProxy::DestroyPerInstanceData(FNDIPhysicsFieldProxy *this,ulong64 *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosNiagara\\Source\\ChaosNiagara\\Private\\NiagaraDataInterfacePhysicsField.cpp"
                       ,0x8a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TSet<TTuple<unsigned___int64,FNDIFieldRenderData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIFieldRenderData,0>,FDefaultSetAllocator>
  ::Remove((TSet<TTuple<unsigned___int64,FNDIFieldRenderData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIFieldRenderData,0>,FDefaultSetAllocator>
            *)&this->SystemInstancesToProxyData,*param_1);
  return;
}

// InitializePerInstanceData @ 14e9a2190

void __thiscall
FNDIPhysicsFieldProxy::InitializePerInstanceData(FNDIPhysicsFieldProxy *this,ulong64 *param_1)

{
  code *pcVar1;
  bool bVar2;
  TKeyInitializer<unsigned___int64_const_&> local_res8;
  ulong64 *local_res10;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosNiagara\\Source\\ChaosNiagara\\Private\\NiagaraDataInterfacePhysicsField.cpp"
                       ,0x84,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res10 = param_1;
  TSet<TTuple<unsigned___int64,FNDIFieldRenderData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIFieldRenderData,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<unsigned___int64_const_&>_>
            ((TSet<TTuple<unsigned___int64,FNDIFieldRenderData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIFieldRenderData,0>,FDefaultSetAllocator>
              *)&this->SystemInstancesToProxyData,&local_res8,(bool *)&local_res10);
  return;
}

// PerInstanceDataPassedToRenderThreadSize @ 14e9a2520

int __thiscall
FNDIPhysicsFieldProxy::PerInstanceDataPassedToRenderThreadSize(FNDIPhysicsFieldProxy *this)

{
  return 0x10;
}

