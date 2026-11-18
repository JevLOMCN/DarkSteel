// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// operator() @ 1490bbbc0

void __thiscall
`TUNiagaraDataInterfaceAudioSpectrum_GetNumChannelsBinder::Bind'::__l2::<lambda_1>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong lVar1;
  FNiagaraDataInterfaceProxySubmix *this_00;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  float fVar5;
  float *pfVar6;
  int iVar7;
  int local_20 [2];
  
  lVar1 = *(longlong *)this;
  iVar7 = 0;
  local_20[0] = 0;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  iVar3 = local_20[0];
  pfVar6 = pfVar6 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      this_00 = *(FNiagaraDataInterfaceProxySubmix **)(lVar1 + 0x28);
      if ((this_00 == (FNiagaraDataInterfaceProxySubmix *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypedProxy != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                             ,0x3a0,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      fVar5 = (float)FNiagaraDataInterfaceProxySubmix::GetNumChannels(this_00);
      iVar7 = iVar7 + 1;
      *pfVar6 = fVar5;
      pfVar6 = pfVar6 + iVar3;
    } while (iVar7 < param_1->NumInstances);
  }
  return;
}

