// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 148998c00

UScriptStruct * __cdecl FVirtualTextureBuildSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FVirtualTextureBuildSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FVirtualTextureBuildSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FVirtualTextureBuildSettings,(UObject *)pUVar1,
                         L"VirtualTextureBuildSettings");
  }
  return Z_Registration_Info_UScriptStruct_FVirtualTextureBuildSettings.OuterSingleton;
}

// ClampAndAlignTileBorderSize @ 1489cf200

int __cdecl FVirtualTextureBuildSettings::ClampAndAlignTileBorderSize(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 8;
  if ((uint)param_1 < 8) {
    iVar2 = param_1;
  }
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = iVar2;
  }
  return iVar1 + 1U & 0xfffffffe;
}

// ClampAndAlignTileSize @ 1489cf220

int __cdecl FVirtualTextureBuildSettings::ClampAndAlignTileSize(int param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0x400;
  if ((uint)param_1 < 0x400) {
    uVar3 = param_1;
  }
  uVar4 = 0x10;
  if (0x10 < uVar3) {
    uVar4 = uVar3;
  }
  uVar3 = 1;
  if (uVar4 != 0) {
    uVar3 = uVar4;
  }
  uVar1 = (ulonglong)(uVar3 - 1) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  return 1 << ((byte)lVar2 & 0x1f);
}

// Init @ 1489f2eb0

void __thiscall FVirtualTextureBuildSettings::Init(FVirtualTextureBuildSettings *this)

{
  ulonglong uVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  pTVar2 = CVarVTTileSize.Ref;
  bVar3 = IsInParallelGameThread();
  if (bVar3) {
LAB_1489f2eef:
    lVar4 = 0;
  }
  else {
    bVar3 = IsInGameThread();
    lVar4 = 4;
    if (bVar3) goto LAB_1489f2eef;
  }
  uVar5 = 0x400;
  if (*(uint *)((longlong)pTVar2->ShadowedValue + lVar4) < 0x400) {
    uVar5 = *(uint *)((longlong)pTVar2->ShadowedValue + lVar4);
  }
  uVar7 = 0x10;
  if (0x10 < uVar5) {
    uVar7 = uVar5;
  }
  uVar5 = 1;
  if (uVar7 != 0) {
    uVar5 = uVar7;
  }
  uVar1 = (ulonglong)(uVar5 - 1) * 2 + 1;
  lVar4 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  this->TileSize = 1 << ((byte)lVar4 & 0x1f);
  pTVar2 = CVarVTTileBorderSize.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    lVar4 = 4;
    if (!bVar3) goto LAB_1489f2f46;
  }
  lVar4 = 0;
LAB_1489f2f46:
  iVar6 = 8;
  if (*(uint *)((longlong)pTVar2->ShadowedValue + lVar4) < 8) {
    iVar6 = *(int *)((longlong)pTVar2->ShadowedValue + lVar4);
  }
  iVar8 = 0;
  if (iVar6 != 0) {
    iVar8 = iVar6;
  }
  this->TileBorderSize = iVar8 + 1U & 0xfffffffe;
  return;
}

