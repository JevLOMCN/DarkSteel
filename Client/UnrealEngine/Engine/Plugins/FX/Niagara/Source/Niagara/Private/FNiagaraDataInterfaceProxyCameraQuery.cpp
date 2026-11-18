// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// ConsumePerInstanceDataFromGameThread @ 1490d65e0

void __thiscall
FNiagaraDataInterfaceProxyCameraQuery::ConsumePerInstanceDataFromGameThread
          (FNiagaraDataInterfaceProxyCameraQuery *this,void *param_1,ulong64 *param_2)

{
  FCameraDataInterface_InstanceDataRT *pFVar1;
  
  pFVar1 = TMapBase<unsigned___int64,FCameraDataInterface_InstanceDataRT,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FCameraDataInterface_InstanceDataRT,0>_>
           ::FindOrAddImpl<unsigned___int64_const_&>
                     ((TMapBase<unsigned___int64,FCameraDataInterface_InstanceDataRT,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FCameraDataInterface_InstanceDataRT,0>_>
                       *)&this->SystemInstancesToInstanceData_RT,
                      (int)(*param_2 >> 0x20) * 0x17 + (int)*param_2,param_2);
  pFVar1->SplitscreenMode = *(Type *)param_1;
  return;
}

// PerInstanceDataPassedToRenderThreadSize @ 14911aca0

int __thiscall
FNiagaraDataInterfaceProxyCameraQuery::PerInstanceDataPassedToRenderThreadSize
          (FNiagaraDataInterfaceProxyCameraQuery *this)

{
  return 4;
}

