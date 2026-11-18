// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 4

// ConvertRandomToLookup @ 14943e560

void __cdecl
FNiagaraStatelessBuiltDistribution::ConvertRandomToLookup
          (TIntVector3<unsigned_int> *param_1,float param_2,uint *param_3,uint *param_4,
          float *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  
  uVar3 = (param_1->field0_0x0)._s_0.X >> 0x11 & 0x1ff;
  fVar5 = (float)uVar3 * param_2;
  if (((param_1->field0_0x0)._s_0.X & 0x40000000) == 0) {
    fVar5 = 0.0;
    uVar1 = (int)ROUND((param_2 + param_2) * (float)uVar3 + __real_3f000000) >> 1;
    *param_3 = uVar1;
    *param_4 = uVar1 + 1;
  }
  else {
    *param_3 = (uint)(longlong)fVar5;
    *param_4 = (uint)(longlong)fVar5 + 1;
    fVar4 = (float)truncf(fVar5);
    fVar5 = fVar5 - fVar4;
  }
  *param_5 = fVar5;
  uVar1 = *param_4;
  if (((param_1->field0_0x0)._s_0.X & 0x20000000) == 0) {
    if (uVar1 < uVar3) {
      uVar3 = uVar1;
    }
    *param_4 = uVar3;
  }
  else {
    uVar2 = 0;
    if (uVar1 <= uVar3) {
      uVar2 = uVar1;
    }
    *param_4 = uVar2;
  }
  return;
}

// ConvertTimeToLookup @ 14943e9c0

void __cdecl
FNiagaraStatelessBuiltDistribution::ConvertTimeToLookup
          (TIntVector3<unsigned_int> *param_1,float param_2,uint *param_3,uint *param_4,
          float *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  
  uVar3 = (param_1->field0_0x0)._s_0.X;
  uVar4 = uVar3 >> 0x11 & 0x1ff;
  fVar6 = (param_2 - *(float *)((longlong)&param_1->field0_0x0 + 4)) *
          *(float *)((longlong)&param_1->field0_0x0 + 8);
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  uVar3 = uVar3 & 0x40000000;
  if (uVar3 == 0) {
    uVar1 = (int)ROUND(fVar6 + fVar6 + __real_3f000000) >> 1;
  }
  else {
    uVar1 = (uint)(longlong)fVar6;
  }
  *param_3 = uVar1;
  *param_4 = uVar1 + 1;
  uVar1 = *param_3;
  if (((param_1->field0_0x0)._s_0.X & 0x20000000) == 0) {
    uVar2 = uVar4;
    if (uVar1 < uVar4) {
      uVar2 = uVar1;
    }
    *param_3 = uVar2;
    if (*param_4 < uVar4) {
      uVar4 = *param_4;
    }
    *param_4 = uVar4;
  }
  else {
    *param_3 = uVar1 % (uVar4 + 1);
    uVar1 = 0;
    if (*param_4 <= uVar4) {
      uVar1 = *param_4;
    }
    *param_4 = uVar1;
  }
  if (uVar3 != 0) {
    fVar5 = (float)truncf(fVar6);
    *param_5 = fVar6 - fVar5;
    return;
  }
  *param_5 = 0.0;
  return;
}

// SetLookupParameters @ 149465420

void __cdecl
FNiagaraStatelessBuiltDistribution::SetLookupParameters
          (TIntVector3<unsigned_int> *param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (0x1ffff < param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("BufferOffset <= EFlags::BufferOffsetMask",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Shaders\\Shared\\NiagaraStatelessBuiltDistribution.h"
                       ,0x9c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (0x1fe < param_3 - 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TableLength > 0 && TableLength <= EFlags::TableLengthMask",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Shaders\\Shared\\NiagaraStatelessBuiltDistribution.h"
                       ,0x9d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (param_1->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X & 0xfffe0000;
  (param_1->field0_0x0)._s_0.X =
       (param_2 | (param_1->field0_0x0)._s_0.X) & 0xfc01ffff | (param_3 - 1) * 0x20000;
  (param_1->field0_0x0)._s_0.Y = 0;
  fVar3 = (float)(param_3 - 1);
  if (fVar3 <= __real_38d1b717) {
    fVar3 = __real_38d1b717;
  }
  *(float *)((longlong)&param_1->field0_0x0 + 8) = fVar3;
  return;
}

// SetLookupParameters @ 1494654f0

void __cdecl
FNiagaraStatelessBuiltDistribution::SetLookupParameters
          (TIntVector3<unsigned_int> *param_1,uint param_2,uint param_3,float param_4,float param_5)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (param_3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TableLength > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Shaders\\Shared\\NiagaraStatelessBuiltDistribution.h"
                       ,0xaa,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SetLookupParameters(param_1,param_2,param_3);
  fVar3 = 0.0;
  if ((param_3 - 1 != 0) && (0.0 < param_5 - param_4)) {
    fVar3 = (float)(param_3 - 1) / (param_5 - param_4);
  }
  if (fVar3 <= __real_38d1b717) {
    fVar3 = __real_38d1b717;
  }
  (param_1->field0_0x0)._s_0.Y = (uint)param_4;
  (param_1->field0_0x0)._s_0.Z = (uint)fVar3;
  return;
}

