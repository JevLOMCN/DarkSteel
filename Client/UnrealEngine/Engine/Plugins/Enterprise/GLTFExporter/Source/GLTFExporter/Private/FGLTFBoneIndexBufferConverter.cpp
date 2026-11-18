// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 7

// Convert<unsigned_char> @ 14e5b7d10

FGLTFJsonAccessor * __thiscall
FGLTFBoneIndexBufferConverter::Convert<unsigned_char>
          (FGLTFBoneIndexBufferConverter *this,FGLTFMeshSection *param_1,
          FSkinWeightVertexBuffer *param_2,uint param_3,uchar *param_4)

{
  bool bVar1;
  <lambda_1> <Var2;
  FGLTFJsonAccessor *pFVar3;
  longlong *local_res18;
  
  bVar1 = (param_2->DataVertexBuffer).bVariableBonesPerVertex;
  if ((param_2->DataVertexBuffer).bUse16BitBoneIndex == false) {
    if (bVar1 == false) {
      pFVar3 = Convert<unsigned_char,unsigned_char,_FGLTFBoneIndexBufferConverter::Convert<unsigned_char,unsigned_char>_::__l2::<lambda_2>_>
                         (this,param_1,param_2,param_3,param_4,
                          (<lambda_2>)(param_2->DataVertexBuffer).MaxBoneInfluences);
      return pFVar3;
    }
    IGLTFBufferAdapter::GetLookups((FSkinWeightVertexBuffer *)&local_res18);
    <Var2.LookupData = (uint *)(**(code **)(*local_res18 + 8))(local_res18);
    if (<Var2.LookupData != (uint *)0x0) {
      pFVar3 = Convert<unsigned_char,unsigned_char,_FGLTFBoneIndexBufferConverter::Convert<unsigned_char,unsigned_char>_::__l5::<lambda_1>_>
                         (this,param_1,param_2,param_3,param_4,<Var2);
      if (local_res18 == (longlong *)0x0) {
        return pFVar3;
      }
      (**(code **)*local_res18)(local_res18,1);
      return pFVar3;
    }
  }
  else {
    if (bVar1 == false) {
      pFVar3 = Convert<unsigned_char,unsigned_short,_FGLTFBoneIndexBufferConverter::Convert<unsigned_char,unsigned_short>_::__l2::<lambda_2>_>
                         (this,param_1,param_2,param_3,param_4,
                          (<lambda_2>)(param_2->DataVertexBuffer).MaxBoneInfluences);
      return pFVar3;
    }
    IGLTFBufferAdapter::GetLookups((FSkinWeightVertexBuffer *)&local_res18);
    <Var2.LookupData = (uint *)(**(code **)(*local_res18 + 8))(local_res18);
    if (<Var2.LookupData != (uint *)0x0) {
      pFVar3 = Convert<unsigned_char,unsigned_short,_FGLTFBoneIndexBufferConverter::Convert<unsigned_char,unsigned_short>_::__l5::<lambda_1>_>
                         (this,param_1,param_2,param_3,param_4,<Var2);
      if (local_res18 == (longlong *)0x0) {
        return pFVar3;
      }
      (**(code **)*local_res18)(local_res18,1);
      return pFVar3;
    }
  }
  if (local_res18 != (longlong *)0x0) {
    (**(code **)*local_res18)(local_res18,1);
  }
  return (FGLTFJsonAccessor *)0x0;
}

// Convert<unsigned_char,unsigned_char> @ 14e5b7f30

FGLTFJsonAccessor * __thiscall
FGLTFBoneIndexBufferConverter::Convert<unsigned_char,unsigned_char>
          (FGLTFBoneIndexBufferConverter *this,FGLTFMeshSection *param_1,
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
      pFVar2 = Convert<unsigned_char,unsigned_char,_FGLTFBoneIndexBufferConverter::Convert<unsigned_char,unsigned_char>_::__l5::<lambda_1>_>
                         (this,param_1,param_2,param_3,param_4,<Var1);
    }
    if (local_res18 != (longlong *)0x0) {
      (**(code **)*local_res18)(local_res18,1);
    }
    return pFVar2;
  }
  pFVar2 = Convert<unsigned_char,unsigned_char,_FGLTFBoneIndexBufferConverter::Convert<unsigned_char,unsigned_char>_::__l2::<lambda_2>_>
                     (this,param_1,param_2,param_3,param_4,
                      (<lambda_2>)(param_2->DataVertexBuffer).MaxBoneInfluences);
  return pFVar2;
}

// Convert<unsigned_char,unsigned_short> @ 14e5b86e0

FGLTFJsonAccessor * __thiscall
FGLTFBoneIndexBufferConverter::Convert<unsigned_char,unsigned_short>
          (FGLTFBoneIndexBufferConverter *this,FGLTFMeshSection *param_1,
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
      pFVar2 = Convert<unsigned_char,unsigned_short,_FGLTFBoneIndexBufferConverter::Convert<unsigned_char,unsigned_short>_::__l5::<lambda_1>_>
                         (this,param_1,param_2,param_3,param_4,<Var1);
    }
    if (local_res18 != (longlong *)0x0) {
      (**(code **)*local_res18)(local_res18,1);
    }
    return pFVar2;
  }
  pFVar2 = Convert<unsigned_char,unsigned_short,_FGLTFBoneIndexBufferConverter::Convert<unsigned_char,unsigned_short>_::__l2::<lambda_2>_>
                     (this,param_1,param_2,param_3,param_4,
                      (<lambda_2>)(param_2->DataVertexBuffer).MaxBoneInfluences);
  return pFVar2;
}

// Convert<unsigned_short> @ 14e5b9340

FGLTFJsonAccessor * __thiscall
FGLTFBoneIndexBufferConverter::Convert<unsigned_short>
          (FGLTFBoneIndexBufferConverter *this,FGLTFMeshSection *param_1,
          FSkinWeightVertexBuffer *param_2,uint param_3,uchar *param_4)

{
  bool bVar1;
  <lambda_1> <Var2;
  FGLTFJsonAccessor *pFVar3;
  longlong *local_res18;
  
  bVar1 = (param_2->DataVertexBuffer).bVariableBonesPerVertex;
  if ((param_2->DataVertexBuffer).bUse16BitBoneIndex == false) {
    if (bVar1 == false) {
      pFVar3 = Convert<unsigned_short,unsigned_char,_FGLTFBoneIndexBufferConverter::Convert<unsigned_short,unsigned_char>_::__l2::<lambda_2>_>
                         (this,param_1,param_2,param_3,param_4,
                          (<lambda_2>)(param_2->DataVertexBuffer).MaxBoneInfluences);
      return pFVar3;
    }
    IGLTFBufferAdapter::GetLookups((FSkinWeightVertexBuffer *)&local_res18);
    <Var2.LookupData = (uint *)(**(code **)(*local_res18 + 8))(local_res18);
    if (<Var2.LookupData != (uint *)0x0) {
      pFVar3 = Convert<unsigned_short,unsigned_char,_FGLTFBoneIndexBufferConverter::Convert<unsigned_short,unsigned_char>_::__l5::<lambda_1>_>
                         (this,param_1,param_2,param_3,param_4,<Var2);
      if (local_res18 == (longlong *)0x0) {
        return pFVar3;
      }
      (**(code **)*local_res18)(local_res18,1);
      return pFVar3;
    }
  }
  else {
    if (bVar1 == false) {
      pFVar3 = Convert<unsigned_short,unsigned_short,_FGLTFBoneIndexBufferConverter::Convert<unsigned_short,unsigned_short>_::__l2::<lambda_2>_>
                         (this,param_1,param_2,param_3,param_4,
                          (<lambda_2>)(param_2->DataVertexBuffer).MaxBoneInfluences);
      return pFVar3;
    }
    IGLTFBufferAdapter::GetLookups((FSkinWeightVertexBuffer *)&local_res18);
    <Var2.LookupData = (uint *)(**(code **)(*local_res18 + 8))(local_res18);
    if (<Var2.LookupData != (uint *)0x0) {
      pFVar3 = Convert<unsigned_short,unsigned_short,_FGLTFBoneIndexBufferConverter::Convert<unsigned_short,unsigned_short>_::__l5::<lambda_1>_>
                         (this,param_1,param_2,param_3,param_4,<Var2);
      if (local_res18 == (longlong *)0x0) {
        return pFVar3;
      }
      (**(code **)*local_res18)(local_res18,1);
      return pFVar3;
    }
  }
  if (local_res18 != (longlong *)0x0) {
    (**(code **)*local_res18)(local_res18,1);
  }
  return (FGLTFJsonAccessor *)0x0;
}

// Convert<unsigned_short,unsigned_char> @ 14e5b9560

FGLTFJsonAccessor * __thiscall
FGLTFBoneIndexBufferConverter::Convert<unsigned_short,unsigned_char>
          (FGLTFBoneIndexBufferConverter *this,FGLTFMeshSection *param_1,
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
      pFVar2 = Convert<unsigned_short,unsigned_char,_FGLTFBoneIndexBufferConverter::Convert<unsigned_short,unsigned_char>_::__l5::<lambda_1>_>
                         (this,param_1,param_2,param_3,param_4,<Var1);
    }
    if (local_res18 != (longlong *)0x0) {
      (**(code **)*local_res18)(local_res18,1);
    }
    return pFVar2;
  }
  pFVar2 = Convert<unsigned_short,unsigned_char,_FGLTFBoneIndexBufferConverter::Convert<unsigned_short,unsigned_char>_::__l2::<lambda_2>_>
                     (this,param_1,param_2,param_3,param_4,
                      (<lambda_2>)(param_2->DataVertexBuffer).MaxBoneInfluences);
  return pFVar2;
}

// Convert<unsigned_short,unsigned_short> @ 14e5b9d20

FGLTFJsonAccessor * __thiscall
FGLTFBoneIndexBufferConverter::Convert<unsigned_short,unsigned_short>
          (FGLTFBoneIndexBufferConverter *this,FGLTFMeshSection *param_1,
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
      pFVar2 = Convert<unsigned_short,unsigned_short,_FGLTFBoneIndexBufferConverter::Convert<unsigned_short,unsigned_short>_::__l5::<lambda_1>_>
                         (this,param_1,param_2,param_3,param_4,<Var1);
    }
    if (local_res18 != (longlong *)0x0) {
      (**(code **)*local_res18)(local_res18,1);
    }
    return pFVar2;
  }
  pFVar2 = Convert<unsigned_short,unsigned_short,_FGLTFBoneIndexBufferConverter::Convert<unsigned_short,unsigned_short>_::__l2::<lambda_2>_>
                     (this,param_1,param_2,param_3,param_4,
                      (<lambda_2>)(param_2->DataVertexBuffer).MaxBoneInfluences);
  return pFVar2;
}

// Convert @ 14e5e4b10

FGLTFJsonAccessor * __thiscall
FGLTFBoneIndexBufferConverter::Convert
          (FGLTFBoneIndexBufferConverter *this,FGLTFMeshSection *param_1,
          FSkinWeightVertexBuffer *param_2,uint param_3)

{
  uchar *puVar1;
  FGLTFJsonAccessor *pFVar2;
  longlong *local_res18;
  
  if ((param_2 != (FSkinWeightVertexBuffer *)0x0) && ((param_2->DataVertexBuffer).NumVertices != 0))
  {
    IGLTFBufferAdapter::GetInfluences((FSkinWeightVertexBuffer *)&local_res18);
    puVar1 = (uchar *)(**(code **)(*local_res18 + 8))(local_res18);
    if (puVar1 == (uchar *)0x0) {
      pFVar2 = (FGLTFJsonAccessor *)0x0;
    }
    else if (param_1->MaxBoneIndex < 0x100) {
      pFVar2 = Convert<unsigned_char>(this,param_1,param_2,param_3,puVar1);
    }
    else {
      pFVar2 = Convert<unsigned_short>(this,param_1,param_2,param_3,puVar1);
    }
    if (local_res18 != (longlong *)0x0) {
      (**(code **)*local_res18)(local_res18,1);
    }
    return pFVar2;
  }
  return (FGLTFJsonAccessor *)0x0;
}

