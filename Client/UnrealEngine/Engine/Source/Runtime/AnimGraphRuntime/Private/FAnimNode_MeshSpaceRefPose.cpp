// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 2

// StaticStruct @ 1463d5e90

UScriptStruct * __cdecl FAnimNode_MeshSpaceRefPose::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_MeshSpaceRefPose.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_MeshSpaceRefPose.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_MeshSpaceRefPose,(UObject *)pUVar1,
                         L"AnimNode_MeshSpaceRefPose");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_MeshSpaceRefPose.OuterSingleton;
}

// EvaluateComponentSpace_AnyThread @ 1463d5ed0

void __thiscall
FAnimNode_MeshSpaceRefPose::EvaluateComponentSpace_AnyThread
          (FAnimNode_MeshSpaceRefPose *this,FComponentSpacePoseContext *param_1)

{
  FStatsHierarchical::BeginMeasurement
            ("FAnimNode_MeshSpaceRefPose::EvaluateComponentSpace_AnyThread");
  FComponentSpacePoseContext::ResetToRefPose(param_1);
  FStatsHierarchical::EndMeasurement();
  return;
}

