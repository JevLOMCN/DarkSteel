// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// Create @ 1432c8b70

IDownloadConnectionCount * __cdecl
BuildPatchServices::FDownloadConnectionCountFactory::Create
          (FDownloadConnectionCountConfig *param_1,IDownloadServiceStatistics *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  IDownloadConnectionCount IVar8;
  IDownloadConnectionCount IVar9;
  IDownloadConnectionCount *pIVar10;
  
  pIVar10 = ::operator_new(0x78);
  if (pIVar10 != (IDownloadConnectionCount *)0x0) {
    uVar2 = param_1->MinLimit;
    uVar3 = param_1->NegativeHysteresis;
    uVar4 = param_1->AverageSpeedMinCount;
    uVar5 = param_1->PositiveHysteresis;
    IVar8 = (IDownloadConnectionCount)param_1->HighBandwidthFactor;
    IVar9 = (IDownloadConnectionCount)param_1->LowBandwidthFactor;
    bVar1 = param_1->bDisableConnectionScaling;
    uVar6 = param_1->HealthHysteresis;
    uVar7 = param_1->FallbackCount;
    *(uint *)(pIVar10 + 2) = param_1->MaxLimit;
    *(undefined4 *)(pIVar10 + 9) = 0;
    pIVar10[10] = (IDownloadConnectionCount)0x0;
    pIVar10[0xb] = (IDownloadConnectionCount)0x0;
    pIVar10[0xc] = (IDownloadConnectionCount)0x0;
    *(undefined4 *)(pIVar10 + 0xd) = 0;
    *(uint *)&pIVar10[7].field_0x4 = uVar7;
    *(uint *)&pIVar10[9].field_0x4 = uVar7;
    *pIVar10 = (IDownloadConnectionCount)&___7FDownloadConnectionCount_BuildPatchServices__6B_;
    pIVar10[1] = (IDownloadConnectionCount)param_2;
    *(uint *)&pIVar10[2].field_0x4 = uVar2;
    *(uint *)(pIVar10 + 3) = uVar3;
    *(uint *)&pIVar10[3].field_0x4 = uVar4;
    *(uint *)(pIVar10 + 4) = uVar5;
    pIVar10[5] = IVar8;
    pIVar10[6] = IVar9;
    *(bool *)(pIVar10 + 7) = bVar1;
    *(uint *)(pIVar10 + 8) = uVar6;
    *(undefined4 *)&pIVar10[0xd].field_0x4 = 4;
    *(undefined4 *)(pIVar10 + 0xe) = 0x10;
    return pIVar10;
  }
  return (IDownloadConnectionCount *)0x0;
}

