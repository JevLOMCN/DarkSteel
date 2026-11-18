// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshConversionEngineTypes
// Functions: 2

// Call @ 14ca36310

FColor __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FSkeletalMeshLODRenderDataToDynamicMesh::Convert'::__l2::<lambda_1>,FColor,int>
::Call(void *param_1,int *param_2)

{
  int *in_R8;
  
  *(undefined4 *)param_1 =
       *(undefined4 *)
        ((ulonglong)(uint)(*(int *)(*(longlong *)param_2 + 0x178) * *in_R8) +
        *(longlong *)(*(longlong *)param_2 + 0x170));
  return (FColor)SUB84(param_1,0);
}

// Call @ 14ca36340

FColor __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Geometry::FStaticMeshLODResourcesToDynamicMesh::Convert'::__l2::<lambda_1>,FColor,int>
::Call(void *param_1,int *param_2)

{
  int *in_R8;
  
  *(undefined4 *)param_1 =
       *(undefined4 *)
        ((ulonglong)(uint)(*(int *)(*(longlong *)param_2 + 0x218) * *in_R8) +
        *(longlong *)(*(longlong *)param_2 + 0x210));
  return (FColor)SUB84(param_1,0);
}

