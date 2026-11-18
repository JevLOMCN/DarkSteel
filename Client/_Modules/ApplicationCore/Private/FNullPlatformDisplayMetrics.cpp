// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 1

// RebuildDisplayMetrics @ 1423fdca0

void __cdecl FNullPlatformDisplayMetrics::RebuildDisplayMetrics(FDisplayMetrics *param_1)

{
  uint uVar1;
  FNullApplication *this;
  ulonglong *puVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  uint local_res8;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18 [16];
  
  if (NullApplication == (FNullApplication *)0x0) {
    this = ::operator_new(0x120);
    if (this == (FNullApplication *)0x0) {
      NullApplication = (FNullApplication *)0x0;
    }
    else {
      NullApplication = FNullApplication::FNullApplication(this);
    }
    if (NullApplication == (FNullApplication *)0x0) {
      uVar5 = (ulonglong)local_res8;
      uVar1 = local_res8;
      uVar3 = local_res8;
      goto LAB_1423fdd27;
    }
  }
  local_28 = 0;
  uStack_20 = 0;
  puVar2 = (ulonglong *)(**(code **)(NullApplication->_padding_ + 0xb0))(0,local_18,&local_28);
  uVar5 = *puVar2;
  local_res8 = (int)puVar2[1] - (int)uVar5;
  uVar3 = (uint)(uVar5 >> 0x20);
  uVar1 = (int)(puVar2[1] >> 0x20) - uVar3;
LAB_1423fdd27:
  param_1->PrimaryDisplayWidth = local_res8;
  iVar4 = (int)uVar5;
  param_1->PrimaryDisplayHeight = uVar1;
  (param_1->PrimaryDisplayWorkAreaRect).Bottom = uVar1 + uVar3;
  (param_1->VirtualDisplayRect).Bottom = uVar1 + uVar3;
  (param_1->PrimaryDisplayWorkAreaRect).Left = iVar4;
  (param_1->PrimaryDisplayWorkAreaRect).Top = uVar3;
  (param_1->PrimaryDisplayWorkAreaRect).Right = local_res8 + iVar4;
  (param_1->VirtualDisplayRect).Left = iVar4;
  (param_1->VirtualDisplayRect).Top = uVar3;
  (param_1->VirtualDisplayRect).Right = local_res8 + iVar4;
  return;
}

