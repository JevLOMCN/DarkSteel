// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 2

// Initialize @ 14cba16e0

/* WARNING: Enum "EEnumerateSelectionMapping": Some values do not have unique names */

void __thiscall
UE::Geometry::FSelectionRenderHelper::Initialize
          (FSelectionRenderHelper *this,FGeometrySelection *param_1,FDynamicMesh3 *param_2,
          FGroupTopology *param_3,TTransform<double> *param_4)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ToolSelectionUtil::AccumulateSelectionElements
                    (&this->Elements,param_1,param_2,param_3,param_4,Default);
  if (!bVar2) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1009773465856639149>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Selection\\ToolSelectionUtil.cpp"
                       ,0xad,"bSuccess");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Render @ 14cbac460

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::FSelectionRenderHelper::Render
          (FSelectionRenderHelper *this,IToolsContextRenderAPI *param_1)

{
  FLinearColor_u_0 local_38;
  FLinearColor_u_0 local_28;
  FLinearColor_u_0 local_18;
  
  local_38._0_8_ = ___xmm_3f80000000000000000000003f800000;
  local_38._8_8_ = _UNK_15076b188;
  local_28._0_8_ = ___xmm_3f8000003f7333333e99999a00000000;
  local_28._8_8_ = _UNK_1528fb378;
  local_18._0_8_ = ___xmm_3f8000003f7333333e99999a00000000;
  local_18._8_8_ = _UNK_1528fb378;
  ToolSelectionUtil::DebugRender
            (param_1,&this->Elements,__real_40400000,(FLinearColor *)&local_18._s_0,__real_41200000,
             (FLinearColor *)&local_28._s_0,0.0,(FLinearColor *)&local_38._s_0);
  return;
}

