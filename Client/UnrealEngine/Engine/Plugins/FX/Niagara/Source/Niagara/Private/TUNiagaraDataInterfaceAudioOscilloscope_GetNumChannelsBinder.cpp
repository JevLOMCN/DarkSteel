// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// operator() @ 1490bbaf0

void __thiscall
`TUNiagaraDataInterfaceAudioOscilloscope_GetNumChannelsBinder::Bind'::__l2::<lambda_1>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  float *pfVar6;
  int iVar7;
  int local_20 [2];
  
  lVar1 = *(longlong *)this;
  iVar7 = 0;
  local_20[0] = 0;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  iVar4 = local_20[0];
  pfVar6 = pfVar6 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      lVar2 = *(longlong *)(lVar1 + 0x28);
      if ((lVar2 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypedProxy != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                             ,0x3a0,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar7 = iVar7 + 1;
      *pfVar6 = *(float *)(lVar2 + 0x158);
      pfVar6 = pfVar6 + iVar4;
    } while (iVar7 < param_1->NumInstances);
  }
  return;
}

