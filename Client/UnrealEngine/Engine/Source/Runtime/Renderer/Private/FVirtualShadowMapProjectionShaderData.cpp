// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// PackCullingViewId @ 145804130

uint __cdecl
FVirtualShadowMapProjectionShaderData::PackCullingViewId(int param_1,FPersistentViewId *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (0xffff < param_1 + 1U) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SceneRendererPrimaryViewId >= -1 && SceneRendererPrimaryViewId < ((1 << 16u) - 1)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                       ,0x30d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  if (param_2->Index < -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PersistentViewId.Index >= -1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                       ,0x30e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return (param_1 + 1) * 0x10000 | param_2->Index + 1U;
}

