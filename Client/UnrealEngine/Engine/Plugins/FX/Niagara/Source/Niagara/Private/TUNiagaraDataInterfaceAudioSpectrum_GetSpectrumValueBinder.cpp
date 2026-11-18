// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// operator() @ 1490bbca0

void __thiscall
`TUNiagaraDataInterfaceAudioSpectrum_GetSpectrumValueBinder::Bind'::__l2::<lambda_1>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  longlong lVar2;
  FNiagaraDataInterfaceProxySpectrum *pFVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  float fVar13;
  int local_80 [2];
  float *local_78;
  float *local_70;
  int local_68 [2];
  float *local_60;
  float *local_58;
  int local_50 [6];
  
  lVar2 = *(longlong *)this;
  pFVar3 = *(FNiagaraDataInterfaceProxySpectrum **)(lVar2 + 0x28);
  if ((pFVar3 == (FNiagaraDataInterfaceProxySpectrum *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedProxy != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x3a0,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FNiagaraDataInterfaceProxySpectrum::UpdateSpectrum(pFVar3);
  iVar12 = 0;
  local_68[0] = 0;
  pfVar9 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_68);
  iVar6 = local_68[0];
  local_50[0] = 0;
  pfVar9 = pfVar9 + local_68[0] * param_1->PerInstanceFnInstanceIdx;
  local_78 = pfVar9;
  local_70 = pfVar9;
  pfVar10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_50);
  iVar7 = local_50[0];
  local_80[0] = 0;
  pfVar10 = pfVar10 + local_50[0] * param_1->PerInstanceFnInstanceIdx;
  local_60 = pfVar10;
  local_58 = pfVar10;
  pfVar11 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_80);
  iVar5 = local_80[0];
  pfVar11 = pfVar11 + local_80[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      fVar1 = *pfVar10;
      fVar13 = *pfVar9;
      pFVar3 = *(FNiagaraDataInterfaceProxySpectrum **)(lVar2 + 0x28);
      if ((pFVar3 == (FNiagaraDataInterfaceProxySpectrum *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypedProxy != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                             ,0x3a0,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      fVar13 = FNiagaraDataInterfaceProxySpectrum::GetSpectrumValue(pFVar3,fVar13,(int)fVar1);
      iVar12 = iVar12 + 1;
      *pfVar11 = fVar13;
      pfVar9 = pfVar9 + iVar6;
      pfVar10 = pfVar10 + iVar7;
      pfVar11 = pfVar11 + iVar5;
      local_78 = pfVar9;
      local_60 = pfVar10;
    } while (iVar12 < param_1->NumInstances);
  }
  return;
}

