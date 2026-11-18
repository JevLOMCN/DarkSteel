// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 3

// Convert<unsigned_char> @ 14e5b7e60

FGLTFJsonAccessor * __thiscall
FGLTFBoneWeightBufferConverter::Convert<unsigned_char>
          (FGLTFBoneWeightBufferConverter *this,FGLTFMeshSection *param_1,
          FSkinWeightVertexBuffer *param_2,uint param_3,uchar *param_4)

{
  <lambda_1> <Var1;
  FGLTFJsonAccessor *pFVar2;
  longlong *local_res18;
  
  if ((param_2->DataVertexBuffer).bVariableBonesPerVertex != false) {
    IGLTFBufferAdapter::GetLookups((FSkinWeightVertexBuffer *)&local_res18);
    <Var1.LookupData = (uint *)(**(code **)(*local_res18 + 8))(local_res18);
    if (<Var1.LookupData == (uint *)0x0) {
      pFVar2 = (FGLTFJsonAccessor *)0x0;
    }
    else {
      pFVar2 = Convert<unsigned_char,_FGLTFBoneWeightBufferConverter::Convert<unsigned_char>_::__l5::<lambda_1>_>
                         (this,param_1,param_2,param_3,param_4,<Var1);
    }
    if (local_res18 != (longlong *)0x0) {
      (**(code **)*local_res18)(local_res18,1);
    }
    return pFVar2;
  }
  pFVar2 = Convert<unsigned_char,_FGLTFBoneWeightBufferConverter::Convert<unsigned_char>_::__l2::<lambda_2>_>
                     (this,param_1,param_2,param_3,param_4,
                      (<lambda_2>)(param_2->DataVertexBuffer).MaxBoneInfluences);
  return pFVar2;
}

// Convert<unsigned_short> @ 14e5b9490

FGLTFJsonAccessor * __thiscall
FGLTFBoneWeightBufferConverter::Convert<unsigned_short>
          (FGLTFBoneWeightBufferConverter *this,FGLTFMeshSection *param_1,
          FSkinWeightVertexBuffer *param_2,uint param_3,uchar *param_4)

{
  <lambda_1> <Var1;
  FGLTFJsonAccessor *pFVar2;
  longlong *local_res18;
  
  if ((param_2->DataVertexBuffer).bVariableBonesPerVertex != false) {
    IGLTFBufferAdapter::GetLookups((FSkinWeightVertexBuffer *)&local_res18);
    <Var1.LookupData = (uint *)(**(code **)(*local_res18 + 8))(local_res18);
    if (<Var1.LookupData == (uint *)0x0) {
      pFVar2 = (FGLTFJsonAccessor *)0x0;
    }
    else {
      pFVar2 = Convert<unsigned_short,_FGLTFBoneWeightBufferConverter::Convert<unsigned_short>_::__l5::<lambda_1>_>
                         (this,param_1,param_2,param_3,param_4,<Var1);
    }
    if (local_res18 != (longlong *)0x0) {
      (**(code **)*local_res18)(local_res18,1);
    }
    return pFVar2;
  }
  pFVar2 = Convert<unsigned_short,_FGLTFBoneWeightBufferConverter::Convert<unsigned_short>_::__l2::<lambda_2>_>
                     (this,param_1,param_2,param_3,param_4,
                      (<lambda_2>)(param_2->DataVertexBuffer).MaxBoneInfluences);
  return pFVar2;
}

// Convert @ 14e5e4c10

FGLTFJsonAccessor * __thiscall
FGLTFBoneWeightBufferConverter::Convert
          (FGLTFBoneWeightBufferConverter *this,FGLTFMeshSection *param_1,
          FSkinWeightVertexBuffer *param_2,uint param_3)

{
  bool bVar1;
  longlong *plVar2;
  uchar *puVar3;
  <lambda_1> <Var4;
  FGLTFJsonAccessor *pFVar5;
  longlong *local_res18;
  
  if ((param_2 == (FSkinWeightVertexBuffer *)0x0) || ((param_2->DataVertexBuffer).NumVertices == 0))
  {
    return (FGLTFJsonAccessor *)0x0;
  }
  IGLTFBufferAdapter::GetInfluences((FSkinWeightVertexBuffer *)&local_res18);
  plVar2 = local_res18;
  puVar3 = (uchar *)(**(code **)(*local_res18 + 8))(local_res18);
  if (puVar3 == (uchar *)0x0) {
    pFVar5 = (FGLTFJsonAccessor *)0x0;
    goto LAB_14e5e4db4;
  }
  bVar1 = (param_2->DataVertexBuffer).bVariableBonesPerVertex;
  if (param_1->MaxBoneIndex < 0x100) {
    if (bVar1 == false) {
      pFVar5 = Convert<unsigned_char,_FGLTFBoneWeightBufferConverter::Convert<unsigned_char>_::__l2::<lambda_2>_>
                         (this,param_1,param_2,param_3,puVar3,
                          (<lambda_2>)(param_2->DataVertexBuffer).MaxBoneInfluences);
      goto LAB_14e5e4db4;
    }
    IGLTFBufferAdapter::GetLookups((FSkinWeightVertexBuffer *)&local_res18);
    <Var4.LookupData = (uint *)(**(code **)(*local_res18 + 8))(local_res18);
    if (<Var4.LookupData != (uint *)0x0) {
      pFVar5 = Convert<unsigned_char,_FGLTFBoneWeightBufferConverter::Convert<unsigned_char>_::__l5::<lambda_1>_>
                         (this,param_1,param_2,param_3,puVar3,<Var4);
      if (local_res18 != (longlong *)0x0) {
        (**(code **)*local_res18)(local_res18,1);
      }
      goto LAB_14e5e4db4;
    }
    if (local_res18 != (longlong *)0x0) {
      (**(code **)*local_res18)(local_res18,1);
    }
  }
  else {
    if (bVar1 == false) {
      pFVar5 = Convert<unsigned_short,_FGLTFBoneWeightBufferConverter::Convert<unsigned_short>_::__l2::<lambda_2>_>
                         (this,param_1,param_2,param_3,puVar3,
                          (<lambda_2>)(param_2->DataVertexBuffer).MaxBoneInfluences);
      goto LAB_14e5e4db4;
    }
    IGLTFBufferAdapter::GetLookups((FSkinWeightVertexBuffer *)&local_res18);
    <Var4.LookupData = (uint *)(**(code **)(*local_res18 + 8))(local_res18);
    if (<Var4.LookupData != (uint *)0x0) {
      pFVar5 = Convert<unsigned_short,_FGLTFBoneWeightBufferConverter::Convert<unsigned_short>_::__l5::<lambda_1>_>
                         (this,param_1,param_2,param_3,puVar3,<Var4);
      if (local_res18 != (longlong *)0x0) {
        (**(code **)*local_res18)(local_res18,1);
      }
      goto LAB_14e5e4db4;
    }
    if (local_res18 != (longlong *)0x0) {
      (**(code **)*local_res18)(local_res18,1);
      pFVar5 = (FGLTFJsonAccessor *)0x0;
      goto LAB_14e5e4db4;
    }
  }
  pFVar5 = (FGLTFJsonAccessor *)0x0;
LAB_14e5e4db4:
  if (plVar2 != (longlong *)0x0) {
    (**(code **)*plVar2)(plVar2,1);
  }
  return pFVar5;
}

