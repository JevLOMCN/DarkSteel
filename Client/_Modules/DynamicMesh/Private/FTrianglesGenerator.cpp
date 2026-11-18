// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 24

// ~FTrianglesGenerator<float,2> @ 14c7b5c00

void __thiscall
UniformTessellateLocals::FTrianglesGenerator<float,2>::~FTrianglesGenerator<float,2>
          (FTrianglesGenerator<float,2> *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7__FTrianglesGenerator_M_01_UniformTessellateLocals__6B_;
  pFVar1 = (this->Triangles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7__FElementsGenerator_M_01_UniformTessellateLocals__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FBaseGenerator_UniformTessellateLocals__6B_;
  return;
}

// ~FTrianglesGenerator<float,3> @ 14c7b5c60

void __thiscall
UniformTessellateLocals::FTrianglesGenerator<float,3>::~FTrianglesGenerator<float,3>
          (FTrianglesGenerator<float,3> *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7__FTrianglesGenerator_M_02_UniformTessellateLocals__6B_;
  pFVar1 = (this->Triangles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7__FElementsGenerator_M_02_UniformTessellateLocals__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FBaseGenerator_UniformTessellateLocals__6B_;
  return;
}

// ~FTrianglesGenerator<float,4> @ 14c7b5cc0

void __thiscall
UniformTessellateLocals::FTrianglesGenerator<float,4>::~FTrianglesGenerator<float,4>
          (FTrianglesGenerator<float,4> *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7__FTrianglesGenerator_M_03_UniformTessellateLocals__6B_;
  pFVar1 = (this->Triangles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7__FElementsGenerator_M_03_UniformTessellateLocals__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FBaseGenerator_UniformTessellateLocals__6B_;
  return;
}

// ~FTrianglesGenerator<double,3> @ 14c7b5d20

void __thiscall
UniformTessellateLocals::FTrianglesGenerator<double,3>::~FTrianglesGenerator<double,3>
          (FTrianglesGenerator<double,3> *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7__FTrianglesGenerator_N_02_UniformTessellateLocals__6B_;
  pFVar1 = (this->Triangles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7__FElementsGenerator_N_02_UniformTessellateLocals__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FBaseGenerator_UniformTessellateLocals__6B_;
  return;
}

// operator() @ 14c7c11e0

void __thiscall
`UniformTessellateLocals::FTrianglesGenerator<float,2>::GenerateTriangles'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  FTrianglesGenerator<float,2> *pFVar9;
  int iVar10;
  bool bVar11;
  TStaticArray<bool,3,4294967295> local_res8 [5];
  uint local_res18;
  int local_res20;
  FIndex3i_u_0 local_58;
  FIndex3i_u_0 local_48;
  
  cVar6 = (**(code **)(**(longlong **)this + 8))();
  if ((cVar6 == '\0') &&
     (cVar6 = (**(code **)(**(longlong **)this + 0x68))(*(longlong **)this,param_1), cVar6 != '\0'))
  {
    lVar1 = (ulonglong)((uint)param_1 >> 9) * 8;
    pFVar9 = *(FTrianglesGenerator<float,2> **)this;
    lVar2 = (ulonglong)(param_1 & 0x1ff) * 0xc;
    lVar3 = pFVar9->_padding_;
    lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x130) + lVar1);
    local_58._s_0.C = *(int *)(lVar4 + 8 + lVar2);
    local_58._0_8_ = *(ulonglong *)(lVar4 + lVar2);
    uVar5 = local_58._s_0.A;
    lVar1 = *(longlong *)(*(longlong *)(lVar3 + 0x180) + lVar1);
    lVar3 = *(longlong *)(lVar3 + 0x1c0);
    local_res18 = *(uint *)(lVar1 + 8 + lVar2);
    local_48._0_8_ = *(ulonglong *)(lVar1 + lVar2);
    iVar8 = *(int *)(*(longlong *)(lVar3 + (ulonglong)((uint)local_48._s_0.A >> 9) * 8) +
                    (ulonglong)(local_48._s_0.A & 0x1ff) * 0x10);
    local_res8[0].Elements[0] = iVar8 != local_58._s_0.A;
    local_res8[0].Elements[1] =
         *(int *)(*(longlong *)(lVar3 + ((ulonglong)local_48._0_8_ >> 0x29) * 8) +
                 (ulonglong)((uint)((ulonglong)local_48._0_8_ >> 0x20) & 0x1ff) * 0x10) !=
         (int)((ulonglong)local_58._0_8_ >> 0x20);
    bVar11 = *(int *)(*(longlong *)(lVar3 + (ulonglong)(local_res18 >> 9) * 8) +
                     (ulonglong)(local_res18 & 0x1ff) * 0x10) != local_58._s_0.A;
    local_res8[0].Elements[2] = bVar11;
    local_48._s_0.C = local_res18;
    local_res20 = (**(code **)(pFVar9->_padding_ + 0x48))
                            (pFVar9,param_1,local_58._0_8_ & 0xffffffff);
    iVar10 = 0;
    iVar7 = iVar10;
    if (iVar8 != uVar5) {
      iVar7 = (int)pFVar9->_padding_ + -1;
    }
    iVar7 = (**(code **)(pFVar9->_padding_ + 0x28))
                      (pFVar9,local_48._0_8_ & 0xffffffff,param_1,iVar7);
    iVar8 = iVar10;
    if (bVar11) {
      iVar8 = (int)pFVar9->_padding_ + -1;
    }
    iVar8 = (**(code **)(pFVar9->_padding_ + 0x28))(pFVar9,local_res18,param_1,iVar8);
    UniformTessellateLocals::FTrianglesGenerator<float,2>::SetTriangleElements
              (pFVar9,param_1 * pFVar9->OutInnerTriangleCount,local_res20,iVar7,iVar8);
    pFVar9 = *(FTrianglesGenerator<float,2> **)this;
    if (0 < (int)pFVar9->_padding_ + -1) {
      do {
        UniformTessellateLocals::FTrianglesGenerator<float,2>::GenerateTriangleStripForLevel
                  (pFVar9,iVar10,param_1,(FIndex3i *)&local_48._s_0,local_res8);
        pFVar9 = *(FTrianglesGenerator<float,2> **)this;
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)pFVar9->_padding_ + -1);
    }
    UniformTessellateLocals::FTrianglesGenerator<float,2>::GenerateBottomTriangleStrip
              (pFVar9,param_1,(FIndex3i *)&local_58._s_0,(FIndex3i *)&local_48._s_0,local_res8);
  }
  return;
}

// operator() @ 14c7c1430

void __thiscall
`UniformTessellateLocals::FTrianglesGenerator<float,3>::GenerateTriangles'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  FTrianglesGenerator<float,3> *pFVar9;
  int iVar10;
  bool bVar11;
  TStaticArray<bool,3,4294967295> local_res8 [5];
  uint local_res18;
  int local_res20;
  FIndex3i_u_0 local_58;
  FIndex3i_u_0 local_48;
  
  cVar6 = (**(code **)(**(longlong **)this + 8))();
  if ((cVar6 == '\0') &&
     (cVar6 = (**(code **)(**(longlong **)this + 0x68))(*(longlong **)this,param_1), cVar6 != '\0'))
  {
    lVar1 = (ulonglong)((uint)param_1 >> 9) * 8;
    pFVar9 = *(FTrianglesGenerator<float,3> **)this;
    lVar2 = (ulonglong)(param_1 & 0x1ff) * 0xc;
    lVar3 = pFVar9->_padding_;
    lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x130) + lVar1);
    local_58._s_0.C = *(int *)(lVar4 + 8 + lVar2);
    local_58._0_8_ = *(ulonglong *)(lVar4 + lVar2);
    uVar5 = local_58._s_0.A;
    lVar1 = *(longlong *)(*(longlong *)(lVar3 + 0x180) + lVar1);
    lVar3 = *(longlong *)(lVar3 + 0x1c0);
    local_res18 = *(uint *)(lVar1 + 8 + lVar2);
    local_48._0_8_ = *(ulonglong *)(lVar1 + lVar2);
    iVar8 = *(int *)(*(longlong *)(lVar3 + (ulonglong)((uint)local_48._s_0.A >> 9) * 8) +
                    (ulonglong)(local_48._s_0.A & 0x1ff) * 0x10);
    local_res8[0].Elements[0] = iVar8 != local_58._s_0.A;
    local_res8[0].Elements[1] =
         *(int *)(*(longlong *)(lVar3 + ((ulonglong)local_48._0_8_ >> 0x29) * 8) +
                 (ulonglong)((uint)((ulonglong)local_48._0_8_ >> 0x20) & 0x1ff) * 0x10) !=
         (int)((ulonglong)local_58._0_8_ >> 0x20);
    bVar11 = *(int *)(*(longlong *)(lVar3 + (ulonglong)(local_res18 >> 9) * 8) +
                     (ulonglong)(local_res18 & 0x1ff) * 0x10) != local_58._s_0.A;
    local_res8[0].Elements[2] = bVar11;
    local_48._s_0.C = local_res18;
    local_res20 = (**(code **)(pFVar9->_padding_ + 0x48))
                            (pFVar9,param_1,local_58._0_8_ & 0xffffffff);
    iVar10 = 0;
    iVar7 = iVar10;
    if (iVar8 != uVar5) {
      iVar7 = (int)pFVar9->_padding_ + -1;
    }
    iVar7 = (**(code **)(pFVar9->_padding_ + 0x28))
                      (pFVar9,local_48._0_8_ & 0xffffffff,param_1,iVar7);
    iVar8 = iVar10;
    if (bVar11) {
      iVar8 = (int)pFVar9->_padding_ + -1;
    }
    iVar8 = (**(code **)(pFVar9->_padding_ + 0x28))(pFVar9,local_res18,param_1,iVar8);
    UniformTessellateLocals::FTrianglesGenerator<float,3>::SetTriangleElements
              (pFVar9,param_1 * pFVar9->OutInnerTriangleCount,local_res20,iVar7,iVar8);
    pFVar9 = *(FTrianglesGenerator<float,3> **)this;
    if (0 < (int)pFVar9->_padding_ + -1) {
      do {
        UniformTessellateLocals::FTrianglesGenerator<float,3>::GenerateTriangleStripForLevel
                  (pFVar9,iVar10,param_1,(FIndex3i *)&local_48._s_0,local_res8);
        pFVar9 = *(FTrianglesGenerator<float,3> **)this;
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)pFVar9->_padding_ + -1);
    }
    UniformTessellateLocals::FTrianglesGenerator<float,3>::GenerateBottomTriangleStrip
              (pFVar9,param_1,(FIndex3i *)&local_58._s_0,(FIndex3i *)&local_48._s_0,local_res8);
  }
  return;
}

// operator() @ 14c7c1680

void __thiscall
`UniformTessellateLocals::FTrianglesGenerator<float,4>::GenerateTriangles'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  FTrianglesGenerator<float,4> *pFVar9;
  int iVar10;
  bool bVar11;
  TStaticArray<bool,3,4294967295> local_res8 [5];
  uint local_res18;
  int local_res20;
  FIndex3i_u_0 local_58;
  FIndex3i_u_0 local_48;
  
  cVar6 = (**(code **)(**(longlong **)this + 8))();
  if ((cVar6 == '\0') &&
     (cVar6 = (**(code **)(**(longlong **)this + 0x68))(*(longlong **)this,param_1), cVar6 != '\0'))
  {
    lVar1 = (ulonglong)((uint)param_1 >> 9) * 8;
    pFVar9 = *(FTrianglesGenerator<float,4> **)this;
    lVar2 = (ulonglong)(param_1 & 0x1ff) * 0xc;
    lVar3 = pFVar9->_padding_;
    lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x130) + lVar1);
    local_58._s_0.C = *(int *)(lVar4 + 8 + lVar2);
    local_58._0_8_ = *(ulonglong *)(lVar4 + lVar2);
    uVar5 = local_58._s_0.A;
    lVar1 = *(longlong *)(*(longlong *)(lVar3 + 0x180) + lVar1);
    lVar3 = *(longlong *)(lVar3 + 0x1c0);
    local_res18 = *(uint *)(lVar1 + 8 + lVar2);
    local_48._0_8_ = *(ulonglong *)(lVar1 + lVar2);
    iVar8 = *(int *)(*(longlong *)(lVar3 + (ulonglong)((uint)local_48._s_0.A >> 9) * 8) +
                    (ulonglong)(local_48._s_0.A & 0x1ff) * 0x10);
    local_res8[0].Elements[0] = iVar8 != local_58._s_0.A;
    local_res8[0].Elements[1] =
         *(int *)(*(longlong *)(lVar3 + ((ulonglong)local_48._0_8_ >> 0x29) * 8) +
                 (ulonglong)((uint)((ulonglong)local_48._0_8_ >> 0x20) & 0x1ff) * 0x10) !=
         (int)((ulonglong)local_58._0_8_ >> 0x20);
    bVar11 = *(int *)(*(longlong *)(lVar3 + (ulonglong)(local_res18 >> 9) * 8) +
                     (ulonglong)(local_res18 & 0x1ff) * 0x10) != local_58._s_0.A;
    local_res8[0].Elements[2] = bVar11;
    local_48._s_0.C = local_res18;
    local_res20 = (**(code **)(pFVar9->_padding_ + 0x48))
                            (pFVar9,param_1,local_58._0_8_ & 0xffffffff);
    iVar10 = 0;
    iVar7 = iVar10;
    if (iVar8 != uVar5) {
      iVar7 = (int)pFVar9->_padding_ + -1;
    }
    iVar7 = (**(code **)(pFVar9->_padding_ + 0x28))
                      (pFVar9,local_48._0_8_ & 0xffffffff,param_1,iVar7);
    iVar8 = iVar10;
    if (bVar11) {
      iVar8 = (int)pFVar9->_padding_ + -1;
    }
    iVar8 = (**(code **)(pFVar9->_padding_ + 0x28))(pFVar9,local_res18,param_1,iVar8);
    UniformTessellateLocals::FTrianglesGenerator<float,4>::SetTriangleElements
              (pFVar9,param_1 * pFVar9->OutInnerTriangleCount,local_res20,iVar7,iVar8);
    pFVar9 = *(FTrianglesGenerator<float,4> **)this;
    if (0 < (int)pFVar9->_padding_ + -1) {
      do {
        UniformTessellateLocals::FTrianglesGenerator<float,4>::GenerateTriangleStripForLevel
                  (pFVar9,iVar10,param_1,(FIndex3i *)&local_48._s_0,local_res8);
        pFVar9 = *(FTrianglesGenerator<float,4> **)this;
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)pFVar9->_padding_ + -1);
    }
    UniformTessellateLocals::FTrianglesGenerator<float,4>::GenerateBottomTriangleStrip
              (pFVar9,param_1,(FIndex3i *)&local_58._s_0,(FIndex3i *)&local_48._s_0,local_res8);
  }
  return;
}

// operator() @ 14c7c18d0

void __thiscall
`UniformTessellateLocals::FTrianglesGenerator<double,3>::GenerateTriangles'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  FTrianglesGenerator<double,3> *pFVar9;
  int iVar10;
  bool bVar11;
  TStaticArray<bool,3,4294967295> local_res8 [5];
  uint local_res18;
  int local_res20;
  FIndex3i_u_0 local_58;
  FIndex3i_u_0 local_48;
  
  cVar6 = (**(code **)(**(longlong **)this + 8))();
  if ((cVar6 == '\0') &&
     (cVar6 = (**(code **)(**(longlong **)this + 0x68))(*(longlong **)this,param_1), cVar6 != '\0'))
  {
    lVar1 = (ulonglong)((uint)param_1 >> 9) * 8;
    pFVar9 = *(FTrianglesGenerator<double,3> **)this;
    lVar2 = (ulonglong)(param_1 & 0x1ff) * 0xc;
    lVar3 = pFVar9->_padding_;
    lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x130) + lVar1);
    local_58._s_0.C = *(int *)(lVar4 + 8 + lVar2);
    local_58._0_8_ = *(ulonglong *)(lVar4 + lVar2);
    uVar5 = local_58._s_0.A;
    lVar1 = *(longlong *)(*(longlong *)(lVar3 + 0x180) + lVar1);
    lVar3 = *(longlong *)(lVar3 + 0x1c0);
    local_res18 = *(uint *)(lVar1 + 8 + lVar2);
    local_48._0_8_ = *(ulonglong *)(lVar1 + lVar2);
    iVar8 = *(int *)(*(longlong *)(lVar3 + (ulonglong)((uint)local_48._s_0.A >> 9) * 8) +
                    (ulonglong)(local_48._s_0.A & 0x1ff) * 0x10);
    local_res8[0].Elements[0] = iVar8 != local_58._s_0.A;
    local_res8[0].Elements[1] =
         *(int *)(*(longlong *)(lVar3 + ((ulonglong)local_48._0_8_ >> 0x29) * 8) +
                 (ulonglong)((uint)((ulonglong)local_48._0_8_ >> 0x20) & 0x1ff) * 0x10) !=
         (int)((ulonglong)local_58._0_8_ >> 0x20);
    bVar11 = *(int *)(*(longlong *)(lVar3 + (ulonglong)(local_res18 >> 9) * 8) +
                     (ulonglong)(local_res18 & 0x1ff) * 0x10) != local_58._s_0.A;
    local_res8[0].Elements[2] = bVar11;
    local_48._s_0.C = local_res18;
    local_res20 = (**(code **)(pFVar9->_padding_ + 0x48))
                            (pFVar9,param_1,local_58._0_8_ & 0xffffffff);
    iVar10 = 0;
    iVar7 = iVar10;
    if (iVar8 != uVar5) {
      iVar7 = (int)pFVar9->_padding_ + -1;
    }
    iVar7 = (**(code **)(pFVar9->_padding_ + 0x28))
                      (pFVar9,local_48._0_8_ & 0xffffffff,param_1,iVar7);
    iVar8 = iVar10;
    if (bVar11) {
      iVar8 = (int)pFVar9->_padding_ + -1;
    }
    iVar8 = (**(code **)(pFVar9->_padding_ + 0x28))(pFVar9,local_res18,param_1,iVar8);
    UniformTessellateLocals::FTrianglesGenerator<double,3>::SetTriangleElements
              (pFVar9,param_1 * pFVar9->OutInnerTriangleCount,local_res20,iVar7,iVar8);
    pFVar9 = *(FTrianglesGenerator<double,3> **)this;
    if (0 < (int)pFVar9->_padding_ + -1) {
      do {
        UniformTessellateLocals::FTrianglesGenerator<double,3>::GenerateTriangleStripForLevel
                  (pFVar9,iVar10,param_1,(FIndex3i *)&local_48._s_0,local_res8);
        pFVar9 = *(FTrianglesGenerator<double,3> **)this;
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)pFVar9->_padding_ + -1);
    }
    UniformTessellateLocals::FTrianglesGenerator<double,3>::GenerateBottomTriangleStrip
              (pFVar9,param_1,(FIndex3i *)&local_58._s_0,(FIndex3i *)&local_48._s_0,local_res8);
  }
  return;
}

// GenerateBottomTriangleStrip @ 14c80a8a0

void __thiscall
UniformTessellateLocals::FTrianglesGenerator<float,2>::GenerateBottomTriangleStrip
          (FTrianglesGenerator<float,2> *this,int param_1,FIndex3i *param_2,FIndex3i *param_3,
          TStaticArray<bool,3,4294967295> *param_4)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  
  uVar1 = (uint)this->_padding_;
  uVar16 = uVar1 - 1;
  iVar14 = uVar1 + 1;
  uVar19 = ~uVar16;
  if (param_4->Elements[0] == false) {
    uVar19 = 0xffffffff;
  }
  uVar4 = (**(code **)(this->_padding_ + 0x28))
                    (this,(param_3->field0_0x0)._s_0.A,param_1,uVar19 + uVar1);
  if (param_4->Elements[2] != false) {
    uVar16 = (int)this->_padding_ + ~uVar16;
  }
  uVar5 = (**(code **)(this->_padding_ + 0x28))(this,(param_3->field0_0x0)._s_0.C,param_1,uVar16);
  uVar6 = (**(code **)(this->_padding_ + 0x48))(this,param_1,(param_2->field0_0x0)._s_0.B);
  uVar7 = (**(code **)(this->_padding_ + 0x48))(this,param_1,(param_2->field0_0x0)._s_0.C);
  uVar16 = 0;
  iVar20 = uVar1 * uVar1;
  iVar15 = (int)((uVar1 + 2) * iVar14) / 2 + iVar14 * -3 + 3;
  if (0 < iVar14) {
    do {
      uVar8 = uVar5;
      if (uVar16 == 0) {
        if (uVar1 != 1) {
          uVar8 = (**(code **)(this->_padding_ + 0x38))(this,param_1,iVar15);
        }
        if (param_4->Elements[1] == false) {
          iVar18 = 0;
        }
        else {
          iVar18 = (int)this->_padding_ + -1;
        }
        uVar9 = (**(code **)(this->_padding_ + 0x28))
                          (this,(param_3->field0_0x0)._s_0.B,param_1,iVar18);
        uVar17 = param_1 * this->OutInnerTriangleCount + iVar20;
        uVar19 = 0;
        if ((int)uVar17 < (this->Triangles).ArrayNum) {
          uVar19 = ~uVar17 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar12 = (longlong)(int)uVar17;
        pFVar13 = (this->Triangles).AllocatorInstance.Data;
        *(undefined4 *)(pFVar13 + lVar12 * 0xc) = uVar4;
        *(undefined4 *)(pFVar13 + lVar12 * 0xc + 4) = uVar6;
        *(undefined4 *)(pFVar13 + lVar12 * 0xc + 8) = uVar9;
        uVar17 = param_1 * this->OutInnerTriangleCount + 1 + iVar20;
        uVar19 = 0;
        if ((int)uVar17 < (this->Triangles).ArrayNum) {
          uVar19 = ~uVar17 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar12 = (longlong)(int)uVar17;
        pFVar13 = (this->Triangles).AllocatorInstance.Data;
        *(undefined4 *)(pFVar13 + lVar12 * 0xc) = uVar4;
LAB_14c80acfe:
        *(undefined4 *)(pFVar13 + lVar12 * 0xc + 4) = uVar9;
        *(undefined4 *)(pFVar13 + lVar12 * 0xc + 8) = uVar8;
        iVar18 = 2;
      }
      else {
        if (uVar16 != uVar1) {
          iVar18 = uVar16 + iVar15;
          uVar10 = (**(code **)(this->_padding_ + 0x38))(this,param_1,iVar18 + -1);
          uVar19 = uVar16 - 1;
          if (param_4->Elements[1] != false) {
            uVar19 = ~uVar19 + (int)this->_padding_;
          }
          uVar11 = (**(code **)(this->_padding_ + 0x28))
                             (this,(param_3->field0_0x0)._s_0.B,param_1,uVar19);
          uVar19 = uVar16;
          if (param_4->Elements[1] != false) {
            uVar19 = ~uVar16 + (int)this->_padding_;
          }
          uVar9 = (**(code **)(this->_padding_ + 0x28))
                            (this,(param_3->field0_0x0)._s_0.B,param_1,uVar19);
          if (uVar16 + 1 != uVar1) {
            uVar8 = (**(code **)(this->_padding_ + 0x38))(this,param_1,iVar18);
          }
          uVar17 = param_1 * this->OutInnerTriangleCount + iVar20;
          uVar19 = 0;
          if ((int)uVar17 < (this->Triangles).ArrayNum) {
            uVar19 = ~uVar17 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar12 = (longlong)(int)uVar17;
          pFVar13 = (this->Triangles).AllocatorInstance.Data;
          *(undefined4 *)(pFVar13 + lVar12 * 0xc) = uVar10;
          *(undefined4 *)(pFVar13 + lVar12 * 0xc + 4) = uVar11;
          *(undefined4 *)(pFVar13 + lVar12 * 0xc + 8) = uVar9;
          uVar17 = iVar20 + 1 + param_1 * this->OutInnerTriangleCount;
          uVar19 = 0;
          if ((int)uVar17 < (this->Triangles).ArrayNum) {
            uVar19 = ~uVar17 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar12 = (longlong)(int)uVar17;
          pFVar13 = (this->Triangles).AllocatorInstance.Data;
          *(undefined4 *)(pFVar13 + lVar12 * 0xc) = uVar10;
          goto LAB_14c80acfe;
        }
        iVar18 = (int)this->_padding_;
        uVar19 = iVar18 - 1;
        if (param_4->Elements[1] != false) {
          uVar19 = ~uVar19 + iVar18;
        }
        uVar8 = (**(code **)(this->_padding_ + 0x28))
                          (this,(param_3->field0_0x0)._s_0.B,param_1,uVar19);
        uVar17 = param_1 * this->OutInnerTriangleCount + iVar20;
        uVar19 = 0;
        if ((int)uVar17 < (this->Triangles).ArrayNum) {
          uVar19 = ~uVar17 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar12 = (longlong)(int)uVar17;
        pFVar13 = (this->Triangles).AllocatorInstance.Data;
        *(undefined4 *)(pFVar13 + lVar12 * 0xc) = uVar5;
        *(undefined4 *)(pFVar13 + lVar12 * 0xc + 4) = uVar8;
        *(undefined4 *)(pFVar13 + lVar12 * 0xc + 8) = uVar7;
        iVar18 = 1;
      }
      iVar20 = iVar20 + iVar18;
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < iVar14);
  }
  return;
}

// GenerateBottomTriangleStrip @ 14c80ad60

void __thiscall
UniformTessellateLocals::FTrianglesGenerator<float,3>::GenerateBottomTriangleStrip
          (FTrianglesGenerator<float,3> *this,int param_1,FIndex3i *param_2,FIndex3i *param_3,
          TStaticArray<bool,3,4294967295> *param_4)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  
  uVar1 = (uint)this->_padding_;
  uVar16 = uVar1 - 1;
  iVar14 = uVar1 + 1;
  uVar19 = ~uVar16;
  if (param_4->Elements[0] == false) {
    uVar19 = 0xffffffff;
  }
  uVar4 = (**(code **)(this->_padding_ + 0x28))
                    (this,(param_3->field0_0x0)._s_0.A,param_1,uVar19 + uVar1);
  if (param_4->Elements[2] != false) {
    uVar16 = (int)this->_padding_ + ~uVar16;
  }
  uVar5 = (**(code **)(this->_padding_ + 0x28))(this,(param_3->field0_0x0)._s_0.C,param_1,uVar16);
  uVar6 = (**(code **)(this->_padding_ + 0x48))(this,param_1,(param_2->field0_0x0)._s_0.B);
  uVar7 = (**(code **)(this->_padding_ + 0x48))(this,param_1,(param_2->field0_0x0)._s_0.C);
  uVar16 = 0;
  iVar20 = uVar1 * uVar1;
  iVar15 = (int)((uVar1 + 2) * iVar14) / 2 + iVar14 * -3 + 3;
  if (0 < iVar14) {
    do {
      uVar8 = uVar5;
      if (uVar16 == 0) {
        if (uVar1 != 1) {
          uVar8 = (**(code **)(this->_padding_ + 0x38))(this,param_1,iVar15);
        }
        if (param_4->Elements[1] == false) {
          iVar18 = 0;
        }
        else {
          iVar18 = (int)this->_padding_ + -1;
        }
        uVar9 = (**(code **)(this->_padding_ + 0x28))
                          (this,(param_3->field0_0x0)._s_0.B,param_1,iVar18);
        uVar17 = param_1 * this->OutInnerTriangleCount + iVar20;
        uVar19 = 0;
        if ((int)uVar17 < (this->Triangles).ArrayNum) {
          uVar19 = ~uVar17 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar12 = (longlong)(int)uVar17;
        pFVar13 = (this->Triangles).AllocatorInstance.Data;
        *(undefined4 *)(pFVar13 + lVar12 * 0xc) = uVar4;
        *(undefined4 *)(pFVar13 + lVar12 * 0xc + 4) = uVar6;
        *(undefined4 *)(pFVar13 + lVar12 * 0xc + 8) = uVar9;
        uVar17 = param_1 * this->OutInnerTriangleCount + 1 + iVar20;
        uVar19 = 0;
        if ((int)uVar17 < (this->Triangles).ArrayNum) {
          uVar19 = ~uVar17 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar12 = (longlong)(int)uVar17;
        pFVar13 = (this->Triangles).AllocatorInstance.Data;
        *(undefined4 *)(pFVar13 + lVar12 * 0xc) = uVar4;
LAB_14c80b1be:
        *(undefined4 *)(pFVar13 + lVar12 * 0xc + 4) = uVar9;
        *(undefined4 *)(pFVar13 + lVar12 * 0xc + 8) = uVar8;
        iVar18 = 2;
      }
      else {
        if (uVar16 != uVar1) {
          iVar18 = uVar16 + iVar15;
          uVar10 = (**(code **)(this->_padding_ + 0x38))(this,param_1,iVar18 + -1);
          uVar19 = uVar16 - 1;
          if (param_4->Elements[1] != false) {
            uVar19 = ~uVar19 + (int)this->_padding_;
          }
          uVar11 = (**(code **)(this->_padding_ + 0x28))
                             (this,(param_3->field0_0x0)._s_0.B,param_1,uVar19);
          uVar19 = uVar16;
          if (param_4->Elements[1] != false) {
            uVar19 = ~uVar16 + (int)this->_padding_;
          }
          uVar9 = (**(code **)(this->_padding_ + 0x28))
                            (this,(param_3->field0_0x0)._s_0.B,param_1,uVar19);
          if (uVar16 + 1 != uVar1) {
            uVar8 = (**(code **)(this->_padding_ + 0x38))(this,param_1,iVar18);
          }
          uVar17 = param_1 * this->OutInnerTriangleCount + iVar20;
          uVar19 = 0;
          if ((int)uVar17 < (this->Triangles).ArrayNum) {
            uVar19 = ~uVar17 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar12 = (longlong)(int)uVar17;
          pFVar13 = (this->Triangles).AllocatorInstance.Data;
          *(undefined4 *)(pFVar13 + lVar12 * 0xc) = uVar10;
          *(undefined4 *)(pFVar13 + lVar12 * 0xc + 4) = uVar11;
          *(undefined4 *)(pFVar13 + lVar12 * 0xc + 8) = uVar9;
          uVar17 = iVar20 + 1 + param_1 * this->OutInnerTriangleCount;
          uVar19 = 0;
          if ((int)uVar17 < (this->Triangles).ArrayNum) {
            uVar19 = ~uVar17 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar12 = (longlong)(int)uVar17;
          pFVar13 = (this->Triangles).AllocatorInstance.Data;
          *(undefined4 *)(pFVar13 + lVar12 * 0xc) = uVar10;
          goto LAB_14c80b1be;
        }
        iVar18 = (int)this->_padding_;
        uVar19 = iVar18 - 1;
        if (param_4->Elements[1] != false) {
          uVar19 = ~uVar19 + iVar18;
        }
        uVar8 = (**(code **)(this->_padding_ + 0x28))
                          (this,(param_3->field0_0x0)._s_0.B,param_1,uVar19);
        uVar17 = param_1 * this->OutInnerTriangleCount + iVar20;
        uVar19 = 0;
        if ((int)uVar17 < (this->Triangles).ArrayNum) {
          uVar19 = ~uVar17 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar12 = (longlong)(int)uVar17;
        pFVar13 = (this->Triangles).AllocatorInstance.Data;
        *(undefined4 *)(pFVar13 + lVar12 * 0xc) = uVar5;
        *(undefined4 *)(pFVar13 + lVar12 * 0xc + 4) = uVar8;
        *(undefined4 *)(pFVar13 + lVar12 * 0xc + 8) = uVar7;
        iVar18 = 1;
      }
      iVar20 = iVar20 + iVar18;
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < iVar14);
  }
  return;
}

// GenerateBottomTriangleStrip @ 14c80b220

void __thiscall
UniformTessellateLocals::FTrianglesGenerator<float,4>::GenerateBottomTriangleStrip
          (FTrianglesGenerator<float,4> *this,int param_1,FIndex3i *param_2,FIndex3i *param_3,
          TStaticArray<bool,3,4294967295> *param_4)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  
  uVar1 = (uint)this->_padding_;
  uVar16 = uVar1 - 1;
  iVar14 = uVar1 + 1;
  uVar19 = ~uVar16;
  if (param_4->Elements[0] == false) {
    uVar19 = 0xffffffff;
  }
  uVar4 = (**(code **)(this->_padding_ + 0x28))
                    (this,(param_3->field0_0x0)._s_0.A,param_1,uVar19 + uVar1);
  if (param_4->Elements[2] != false) {
    uVar16 = (int)this->_padding_ + ~uVar16;
  }
  uVar5 = (**(code **)(this->_padding_ + 0x28))(this,(param_3->field0_0x0)._s_0.C,param_1,uVar16);
  uVar6 = (**(code **)(this->_padding_ + 0x48))(this,param_1,(param_2->field0_0x0)._s_0.B);
  uVar7 = (**(code **)(this->_padding_ + 0x48))(this,param_1,(param_2->field0_0x0)._s_0.C);
  uVar16 = 0;
  iVar20 = uVar1 * uVar1;
  iVar15 = (int)((uVar1 + 2) * iVar14) / 2 + iVar14 * -3 + 3;
  if (0 < iVar14) {
    do {
      uVar8 = uVar5;
      if (uVar16 == 0) {
        if (uVar1 != 1) {
          uVar8 = (**(code **)(this->_padding_ + 0x38))(this,param_1,iVar15);
        }
        if (param_4->Elements[1] == false) {
          iVar18 = 0;
        }
        else {
          iVar18 = (int)this->_padding_ + -1;
        }
        uVar9 = (**(code **)(this->_padding_ + 0x28))
                          (this,(param_3->field0_0x0)._s_0.B,param_1,iVar18);
        uVar17 = param_1 * this->OutInnerTriangleCount + iVar20;
        uVar19 = 0;
        if ((int)uVar17 < (this->Triangles).ArrayNum) {
          uVar19 = ~uVar17 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar12 = (longlong)(int)uVar17;
        pFVar13 = (this->Triangles).AllocatorInstance.Data;
        *(undefined4 *)(pFVar13 + lVar12 * 0xc) = uVar4;
        *(undefined4 *)(pFVar13 + lVar12 * 0xc + 4) = uVar6;
        *(undefined4 *)(pFVar13 + lVar12 * 0xc + 8) = uVar9;
        uVar17 = param_1 * this->OutInnerTriangleCount + 1 + iVar20;
        uVar19 = 0;
        if ((int)uVar17 < (this->Triangles).ArrayNum) {
          uVar19 = ~uVar17 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar12 = (longlong)(int)uVar17;
        pFVar13 = (this->Triangles).AllocatorInstance.Data;
        *(undefined4 *)(pFVar13 + lVar12 * 0xc) = uVar4;
LAB_14c80b67e:
        *(undefined4 *)(pFVar13 + lVar12 * 0xc + 4) = uVar9;
        *(undefined4 *)(pFVar13 + lVar12 * 0xc + 8) = uVar8;
        iVar18 = 2;
      }
      else {
        if (uVar16 != uVar1) {
          iVar18 = uVar16 + iVar15;
          uVar10 = (**(code **)(this->_padding_ + 0x38))(this,param_1,iVar18 + -1);
          uVar19 = uVar16 - 1;
          if (param_4->Elements[1] != false) {
            uVar19 = ~uVar19 + (int)this->_padding_;
          }
          uVar11 = (**(code **)(this->_padding_ + 0x28))
                             (this,(param_3->field0_0x0)._s_0.B,param_1,uVar19);
          uVar19 = uVar16;
          if (param_4->Elements[1] != false) {
            uVar19 = ~uVar16 + (int)this->_padding_;
          }
          uVar9 = (**(code **)(this->_padding_ + 0x28))
                            (this,(param_3->field0_0x0)._s_0.B,param_1,uVar19);
          if (uVar16 + 1 != uVar1) {
            uVar8 = (**(code **)(this->_padding_ + 0x38))(this,param_1,iVar18);
          }
          uVar17 = param_1 * this->OutInnerTriangleCount + iVar20;
          uVar19 = 0;
          if ((int)uVar17 < (this->Triangles).ArrayNum) {
            uVar19 = ~uVar17 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar12 = (longlong)(int)uVar17;
          pFVar13 = (this->Triangles).AllocatorInstance.Data;
          *(undefined4 *)(pFVar13 + lVar12 * 0xc) = uVar10;
          *(undefined4 *)(pFVar13 + lVar12 * 0xc + 4) = uVar11;
          *(undefined4 *)(pFVar13 + lVar12 * 0xc + 8) = uVar9;
          uVar17 = iVar20 + 1 + param_1 * this->OutInnerTriangleCount;
          uVar19 = 0;
          if ((int)uVar17 < (this->Triangles).ArrayNum) {
            uVar19 = ~uVar17 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar12 = (longlong)(int)uVar17;
          pFVar13 = (this->Triangles).AllocatorInstance.Data;
          *(undefined4 *)(pFVar13 + lVar12 * 0xc) = uVar10;
          goto LAB_14c80b67e;
        }
        iVar18 = (int)this->_padding_;
        uVar19 = iVar18 - 1;
        if (param_4->Elements[1] != false) {
          uVar19 = ~uVar19 + iVar18;
        }
        uVar8 = (**(code **)(this->_padding_ + 0x28))
                          (this,(param_3->field0_0x0)._s_0.B,param_1,uVar19);
        uVar17 = param_1 * this->OutInnerTriangleCount + iVar20;
        uVar19 = 0;
        if ((int)uVar17 < (this->Triangles).ArrayNum) {
          uVar19 = ~uVar17 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar12 = (longlong)(int)uVar17;
        pFVar13 = (this->Triangles).AllocatorInstance.Data;
        *(undefined4 *)(pFVar13 + lVar12 * 0xc) = uVar5;
        *(undefined4 *)(pFVar13 + lVar12 * 0xc + 4) = uVar8;
        *(undefined4 *)(pFVar13 + lVar12 * 0xc + 8) = uVar7;
        iVar18 = 1;
      }
      iVar20 = iVar20 + iVar18;
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < iVar14);
  }
  return;
}

// GenerateBottomTriangleStrip @ 14c80b6e0

void __thiscall
UniformTessellateLocals::FTrianglesGenerator<double,3>::GenerateBottomTriangleStrip
          (FTrianglesGenerator<double,3> *this,int param_1,FIndex3i *param_2,FIndex3i *param_3,
          TStaticArray<bool,3,4294967295> *param_4)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  
  uVar1 = (uint)this->_padding_;
  uVar16 = uVar1 - 1;
  iVar14 = uVar1 + 1;
  uVar19 = ~uVar16;
  if (param_4->Elements[0] == false) {
    uVar19 = 0xffffffff;
  }
  uVar4 = (**(code **)(this->_padding_ + 0x28))
                    (this,(param_3->field0_0x0)._s_0.A,param_1,uVar19 + uVar1);
  if (param_4->Elements[2] != false) {
    uVar16 = (int)this->_padding_ + ~uVar16;
  }
  uVar5 = (**(code **)(this->_padding_ + 0x28))(this,(param_3->field0_0x0)._s_0.C,param_1,uVar16);
  uVar6 = (**(code **)(this->_padding_ + 0x48))(this,param_1,(param_2->field0_0x0)._s_0.B);
  uVar7 = (**(code **)(this->_padding_ + 0x48))(this,param_1,(param_2->field0_0x0)._s_0.C);
  uVar16 = 0;
  iVar20 = uVar1 * uVar1;
  iVar15 = (int)((uVar1 + 2) * iVar14) / 2 + iVar14 * -3 + 3;
  if (0 < iVar14) {
    do {
      uVar8 = uVar5;
      if (uVar16 == 0) {
        if (uVar1 != 1) {
          uVar8 = (**(code **)(this->_padding_ + 0x38))(this,param_1,iVar15);
        }
        if (param_4->Elements[1] == false) {
          iVar18 = 0;
        }
        else {
          iVar18 = (int)this->_padding_ + -1;
        }
        uVar9 = (**(code **)(this->_padding_ + 0x28))
                          (this,(param_3->field0_0x0)._s_0.B,param_1,iVar18);
        uVar17 = param_1 * this->OutInnerTriangleCount + iVar20;
        uVar19 = 0;
        if ((int)uVar17 < (this->Triangles).ArrayNum) {
          uVar19 = ~uVar17 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar12 = (longlong)(int)uVar17;
        pFVar13 = (this->Triangles).AllocatorInstance.Data;
        *(undefined4 *)(pFVar13 + lVar12 * 0xc) = uVar4;
        *(undefined4 *)(pFVar13 + lVar12 * 0xc + 4) = uVar6;
        *(undefined4 *)(pFVar13 + lVar12 * 0xc + 8) = uVar9;
        uVar17 = param_1 * this->OutInnerTriangleCount + 1 + iVar20;
        uVar19 = 0;
        if ((int)uVar17 < (this->Triangles).ArrayNum) {
          uVar19 = ~uVar17 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar12 = (longlong)(int)uVar17;
        pFVar13 = (this->Triangles).AllocatorInstance.Data;
        *(undefined4 *)(pFVar13 + lVar12 * 0xc) = uVar4;
LAB_14c80bb3e:
        *(undefined4 *)(pFVar13 + lVar12 * 0xc + 4) = uVar9;
        *(undefined4 *)(pFVar13 + lVar12 * 0xc + 8) = uVar8;
        iVar18 = 2;
      }
      else {
        if (uVar16 != uVar1) {
          iVar18 = uVar16 + iVar15;
          uVar10 = (**(code **)(this->_padding_ + 0x38))(this,param_1,iVar18 + -1);
          uVar19 = uVar16 - 1;
          if (param_4->Elements[1] != false) {
            uVar19 = ~uVar19 + (int)this->_padding_;
          }
          uVar11 = (**(code **)(this->_padding_ + 0x28))
                             (this,(param_3->field0_0x0)._s_0.B,param_1,uVar19);
          uVar19 = uVar16;
          if (param_4->Elements[1] != false) {
            uVar19 = ~uVar16 + (int)this->_padding_;
          }
          uVar9 = (**(code **)(this->_padding_ + 0x28))
                            (this,(param_3->field0_0x0)._s_0.B,param_1,uVar19);
          if (uVar16 + 1 != uVar1) {
            uVar8 = (**(code **)(this->_padding_ + 0x38))(this,param_1,iVar18);
          }
          uVar17 = param_1 * this->OutInnerTriangleCount + iVar20;
          uVar19 = 0;
          if ((int)uVar17 < (this->Triangles).ArrayNum) {
            uVar19 = ~uVar17 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar12 = (longlong)(int)uVar17;
          pFVar13 = (this->Triangles).AllocatorInstance.Data;
          *(undefined4 *)(pFVar13 + lVar12 * 0xc) = uVar10;
          *(undefined4 *)(pFVar13 + lVar12 * 0xc + 4) = uVar11;
          *(undefined4 *)(pFVar13 + lVar12 * 0xc + 8) = uVar9;
          uVar17 = iVar20 + 1 + param_1 * this->OutInnerTriangleCount;
          uVar19 = 0;
          if ((int)uVar17 < (this->Triangles).ArrayNum) {
            uVar19 = ~uVar17 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar12 = (longlong)(int)uVar17;
          pFVar13 = (this->Triangles).AllocatorInstance.Data;
          *(undefined4 *)(pFVar13 + lVar12 * 0xc) = uVar10;
          goto LAB_14c80bb3e;
        }
        iVar18 = (int)this->_padding_;
        uVar19 = iVar18 - 1;
        if (param_4->Elements[1] != false) {
          uVar19 = ~uVar19 + iVar18;
        }
        uVar8 = (**(code **)(this->_padding_ + 0x28))
                          (this,(param_3->field0_0x0)._s_0.B,param_1,uVar19);
        uVar17 = param_1 * this->OutInnerTriangleCount + iVar20;
        uVar19 = 0;
        if ((int)uVar17 < (this->Triangles).ArrayNum) {
          uVar19 = ~uVar17 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar12 = (longlong)(int)uVar17;
        pFVar13 = (this->Triangles).AllocatorInstance.Data;
        *(undefined4 *)(pFVar13 + lVar12 * 0xc) = uVar5;
        *(undefined4 *)(pFVar13 + lVar12 * 0xc + 4) = uVar8;
        *(undefined4 *)(pFVar13 + lVar12 * 0xc + 8) = uVar7;
        iVar18 = 1;
      }
      iVar20 = iVar20 + iVar18;
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < iVar14);
  }
  return;
}

// GenerateTriangleStripForLevel @ 14c80c340

void __thiscall
UniformTessellateLocals::FTrianglesGenerator<float,2>::GenerateTriangleStripForLevel
          (FTrianglesGenerator<float,2> *this,int param_1,int param_2,FIndex3i *param_3,
          TStaticArray<bool,3,4294967295> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined4 in_register_00000084;
  int iVar17;
  int iVar18;
  int iVar19;
  
  iVar19 = param_1 + 2;
  iVar17 = param_1;
  if (param_4->Elements[0] != false) {
    iVar17 = (int)this->_padding_ + ~param_1;
  }
  uVar4 = (**(code **)(this->_padding_ + 0x28))
                    (this,(param_3->field0_0x0)._s_0.A,CONCAT44(in_register_00000084,param_2),iVar17
                    );
  iVar17 = param_1;
  if (param_4->Elements[2] != false) {
    iVar17 = (int)this->_padding_ + ~param_1;
  }
  uVar5 = (**(code **)(this->_padding_ + 0x28))(this,(param_3->field0_0x0)._s_0.C,param_2,iVar17);
  if (param_4->Elements[0] == false) {
    iVar17 = param_1 + 1;
  }
  else {
    iVar17 = (int)this->_padding_ + ~(param_1 + 1U);
  }
  uVar6 = (**(code **)(this->_padding_ + 0x28))(this,(param_3->field0_0x0)._s_0.A,param_2,iVar17);
  if (param_4->Elements[2] == false) {
    iVar17 = param_1 + 1;
  }
  else {
    iVar17 = (int)this->_padding_ + ~(param_1 + 1U);
  }
  uVar7 = (**(code **)(this->_padding_ + 0x28))(this,(param_3->field0_0x0)._s_0.C,param_2,iVar17);
  iVar17 = param_1 + 1;
  iVar18 = 0;
  iVar14 = iVar17 * iVar17;
  iVar15 = ((param_1 + 3) * iVar19) / 2 + iVar19 * -3 + 3;
  if (0 < iVar19) {
    do {
      if (iVar18 == 0) {
        uVar8 = uVar5;
        if (iVar17 != 1) {
          uVar8 = (**(code **)(this->_padding_ + 0x38))(this,param_2,iVar15);
        }
        uVar9 = (**(code **)(this->_padding_ + 0x38))(this,param_2,iVar15 + param_1);
        uVar16 = param_2 * this->OutInnerTriangleCount + iVar14;
        uVar13 = 0;
        if ((int)uVar16 < (this->Triangles).ArrayNum) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar12 = (longlong)(int)uVar16;
        pFVar1 = (this->Triangles).AllocatorInstance.Data;
        *(undefined4 *)(pFVar1 + lVar12 * 0xc) = uVar4;
        *(undefined4 *)(pFVar1 + lVar12 * 0xc + 4) = uVar6;
        *(undefined4 *)(pFVar1 + lVar12 * 0xc + 8) = uVar9;
        uVar16 = param_2 * this->OutInnerTriangleCount + 1 + iVar14;
        uVar13 = 0;
        if ((int)uVar16 < (this->Triangles).ArrayNum) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar12 = (longlong)(int)uVar16;
        pFVar1 = (this->Triangles).AllocatorInstance.Data;
        *(undefined4 *)(pFVar1 + lVar12 * 0xc) = uVar4;
        *(undefined4 *)(pFVar1 + lVar12 * 0xc + 4) = uVar9;
        *(undefined4 *)(pFVar1 + lVar12 * 0xc + 8) = uVar8;
LAB_14c80c76e:
        iVar19 = 2;
      }
      else {
        pcVar2 = *(code **)(this->_padding_ + 0x38);
        if (iVar18 != iVar17) {
          iVar19 = iVar18 + iVar15 + -1;
          uVar9 = (*pcVar2)(this,param_2,iVar19);
          iVar19 = iVar19 + param_1;
          uVar10 = (**(code **)(this->_padding_ + 0x38))(this,param_2,iVar19);
          uVar11 = (**(code **)(this->_padding_ + 0x38))(this,param_2,iVar19 + 1);
          uVar8 = uVar5;
          if (iVar18 + 1 != iVar17) {
            uVar8 = (**(code **)(this->_padding_ + 0x38))(this,param_2,iVar18 + iVar15);
          }
          uVar16 = param_2 * this->OutInnerTriangleCount + iVar14;
          uVar13 = 0;
          if ((int)uVar16 < (this->Triangles).ArrayNum) {
            uVar13 = ~uVar16 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar12 = (longlong)(int)uVar16;
          pFVar1 = (this->Triangles).AllocatorInstance.Data;
          *(undefined4 *)(pFVar1 + lVar12 * 0xc) = uVar9;
          *(undefined4 *)(pFVar1 + lVar12 * 0xc + 4) = uVar10;
          *(undefined4 *)(pFVar1 + lVar12 * 0xc + 8) = uVar11;
          uVar16 = param_2 * this->OutInnerTriangleCount + 1 + iVar14;
          uVar13 = 0;
          if ((int)uVar16 < (this->Triangles).ArrayNum) {
            uVar13 = ~uVar16 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar12 = (longlong)(int)uVar16;
          pFVar1 = (this->Triangles).AllocatorInstance.Data;
          *(undefined4 *)(pFVar1 + lVar12 * 0xc) = uVar9;
          *(undefined4 *)(pFVar1 + lVar12 * 0xc + 4) = uVar11;
          *(undefined4 *)(pFVar1 + lVar12 * 0xc + 8) = uVar8;
          goto LAB_14c80c76e;
        }
        uVar8 = (*pcVar2)(this,param_2,param_1 * 2 + iVar15);
        uVar16 = param_2 * this->OutInnerTriangleCount + iVar14;
        uVar13 = 0;
        if ((int)uVar16 < (this->Triangles).ArrayNum) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar12 = (longlong)(int)uVar16;
        pFVar1 = (this->Triangles).AllocatorInstance.Data;
        *(undefined4 *)(pFVar1 + lVar12 * 0xc) = uVar5;
        *(undefined4 *)(pFVar1 + lVar12 * 0xc + 4) = uVar8;
        *(undefined4 *)(pFVar1 + lVar12 * 0xc + 8) = uVar7;
        iVar19 = 1;
      }
      iVar14 = iVar14 + iVar19;
      iVar18 = iVar18 + 1;
    } while (iVar18 < param_1 + 2);
  }
  return;
}

// GenerateTriangleStripForLevel @ 14c80c7c0

void __thiscall
UniformTessellateLocals::FTrianglesGenerator<float,3>::GenerateTriangleStripForLevel
          (FTrianglesGenerator<float,3> *this,int param_1,int param_2,FIndex3i *param_3,
          TStaticArray<bool,3,4294967295> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined4 in_register_00000084;
  int iVar17;
  int iVar18;
  int iVar19;
  
  iVar19 = param_1 + 2;
  iVar17 = param_1;
  if (param_4->Elements[0] != false) {
    iVar17 = (int)this->_padding_ + ~param_1;
  }
  uVar4 = (**(code **)(this->_padding_ + 0x28))
                    (this,(param_3->field0_0x0)._s_0.A,CONCAT44(in_register_00000084,param_2),iVar17
                    );
  iVar17 = param_1;
  if (param_4->Elements[2] != false) {
    iVar17 = (int)this->_padding_ + ~param_1;
  }
  uVar5 = (**(code **)(this->_padding_ + 0x28))(this,(param_3->field0_0x0)._s_0.C,param_2,iVar17);
  if (param_4->Elements[0] == false) {
    iVar17 = param_1 + 1;
  }
  else {
    iVar17 = (int)this->_padding_ + ~(param_1 + 1U);
  }
  uVar6 = (**(code **)(this->_padding_ + 0x28))(this,(param_3->field0_0x0)._s_0.A,param_2,iVar17);
  if (param_4->Elements[2] == false) {
    iVar17 = param_1 + 1;
  }
  else {
    iVar17 = (int)this->_padding_ + ~(param_1 + 1U);
  }
  uVar7 = (**(code **)(this->_padding_ + 0x28))(this,(param_3->field0_0x0)._s_0.C,param_2,iVar17);
  iVar17 = param_1 + 1;
  iVar18 = 0;
  iVar14 = iVar17 * iVar17;
  iVar15 = ((param_1 + 3) * iVar19) / 2 + iVar19 * -3 + 3;
  if (0 < iVar19) {
    do {
      if (iVar18 == 0) {
        uVar8 = uVar5;
        if (iVar17 != 1) {
          uVar8 = (**(code **)(this->_padding_ + 0x38))(this,param_2,iVar15);
        }
        uVar9 = (**(code **)(this->_padding_ + 0x38))(this,param_2,iVar15 + param_1);
        uVar16 = param_2 * this->OutInnerTriangleCount + iVar14;
        uVar13 = 0;
        if ((int)uVar16 < (this->Triangles).ArrayNum) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar12 = (longlong)(int)uVar16;
        pFVar1 = (this->Triangles).AllocatorInstance.Data;
        *(undefined4 *)(pFVar1 + lVar12 * 0xc) = uVar4;
        *(undefined4 *)(pFVar1 + lVar12 * 0xc + 4) = uVar6;
        *(undefined4 *)(pFVar1 + lVar12 * 0xc + 8) = uVar9;
        uVar16 = param_2 * this->OutInnerTriangleCount + 1 + iVar14;
        uVar13 = 0;
        if ((int)uVar16 < (this->Triangles).ArrayNum) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar12 = (longlong)(int)uVar16;
        pFVar1 = (this->Triangles).AllocatorInstance.Data;
        *(undefined4 *)(pFVar1 + lVar12 * 0xc) = uVar4;
        *(undefined4 *)(pFVar1 + lVar12 * 0xc + 4) = uVar9;
        *(undefined4 *)(pFVar1 + lVar12 * 0xc + 8) = uVar8;
LAB_14c80cbee:
        iVar19 = 2;
      }
      else {
        pcVar2 = *(code **)(this->_padding_ + 0x38);
        if (iVar18 != iVar17) {
          iVar19 = iVar18 + iVar15 + -1;
          uVar9 = (*pcVar2)(this,param_2,iVar19);
          iVar19 = iVar19 + param_1;
          uVar10 = (**(code **)(this->_padding_ + 0x38))(this,param_2,iVar19);
          uVar11 = (**(code **)(this->_padding_ + 0x38))(this,param_2,iVar19 + 1);
          uVar8 = uVar5;
          if (iVar18 + 1 != iVar17) {
            uVar8 = (**(code **)(this->_padding_ + 0x38))(this,param_2,iVar18 + iVar15);
          }
          uVar16 = param_2 * this->OutInnerTriangleCount + iVar14;
          uVar13 = 0;
          if ((int)uVar16 < (this->Triangles).ArrayNum) {
            uVar13 = ~uVar16 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar12 = (longlong)(int)uVar16;
          pFVar1 = (this->Triangles).AllocatorInstance.Data;
          *(undefined4 *)(pFVar1 + lVar12 * 0xc) = uVar9;
          *(undefined4 *)(pFVar1 + lVar12 * 0xc + 4) = uVar10;
          *(undefined4 *)(pFVar1 + lVar12 * 0xc + 8) = uVar11;
          uVar16 = param_2 * this->OutInnerTriangleCount + 1 + iVar14;
          uVar13 = 0;
          if ((int)uVar16 < (this->Triangles).ArrayNum) {
            uVar13 = ~uVar16 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar12 = (longlong)(int)uVar16;
          pFVar1 = (this->Triangles).AllocatorInstance.Data;
          *(undefined4 *)(pFVar1 + lVar12 * 0xc) = uVar9;
          *(undefined4 *)(pFVar1 + lVar12 * 0xc + 4) = uVar11;
          *(undefined4 *)(pFVar1 + lVar12 * 0xc + 8) = uVar8;
          goto LAB_14c80cbee;
        }
        uVar8 = (*pcVar2)(this,param_2,param_1 * 2 + iVar15);
        uVar16 = param_2 * this->OutInnerTriangleCount + iVar14;
        uVar13 = 0;
        if ((int)uVar16 < (this->Triangles).ArrayNum) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar12 = (longlong)(int)uVar16;
        pFVar1 = (this->Triangles).AllocatorInstance.Data;
        *(undefined4 *)(pFVar1 + lVar12 * 0xc) = uVar5;
        *(undefined4 *)(pFVar1 + lVar12 * 0xc + 4) = uVar8;
        *(undefined4 *)(pFVar1 + lVar12 * 0xc + 8) = uVar7;
        iVar19 = 1;
      }
      iVar14 = iVar14 + iVar19;
      iVar18 = iVar18 + 1;
    } while (iVar18 < param_1 + 2);
  }
  return;
}

// GenerateTriangleStripForLevel @ 14c80cc40

void __thiscall
UniformTessellateLocals::FTrianglesGenerator<float,4>::GenerateTriangleStripForLevel
          (FTrianglesGenerator<float,4> *this,int param_1,int param_2,FIndex3i *param_3,
          TStaticArray<bool,3,4294967295> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined4 in_register_00000084;
  int iVar17;
  int iVar18;
  int iVar19;
  
  iVar19 = param_1 + 2;
  iVar17 = param_1;
  if (param_4->Elements[0] != false) {
    iVar17 = (int)this->_padding_ + ~param_1;
  }
  uVar4 = (**(code **)(this->_padding_ + 0x28))
                    (this,(param_3->field0_0x0)._s_0.A,CONCAT44(in_register_00000084,param_2),iVar17
                    );
  iVar17 = param_1;
  if (param_4->Elements[2] != false) {
    iVar17 = (int)this->_padding_ + ~param_1;
  }
  uVar5 = (**(code **)(this->_padding_ + 0x28))(this,(param_3->field0_0x0)._s_0.C,param_2,iVar17);
  if (param_4->Elements[0] == false) {
    iVar17 = param_1 + 1;
  }
  else {
    iVar17 = (int)this->_padding_ + ~(param_1 + 1U);
  }
  uVar6 = (**(code **)(this->_padding_ + 0x28))(this,(param_3->field0_0x0)._s_0.A,param_2,iVar17);
  if (param_4->Elements[2] == false) {
    iVar17 = param_1 + 1;
  }
  else {
    iVar17 = (int)this->_padding_ + ~(param_1 + 1U);
  }
  uVar7 = (**(code **)(this->_padding_ + 0x28))(this,(param_3->field0_0x0)._s_0.C,param_2,iVar17);
  iVar17 = param_1 + 1;
  iVar18 = 0;
  iVar14 = iVar17 * iVar17;
  iVar15 = ((param_1 + 3) * iVar19) / 2 + iVar19 * -3 + 3;
  if (0 < iVar19) {
    do {
      if (iVar18 == 0) {
        uVar8 = uVar5;
        if (iVar17 != 1) {
          uVar8 = (**(code **)(this->_padding_ + 0x38))(this,param_2,iVar15);
        }
        uVar9 = (**(code **)(this->_padding_ + 0x38))(this,param_2,iVar15 + param_1);
        uVar16 = param_2 * this->OutInnerTriangleCount + iVar14;
        uVar13 = 0;
        if ((int)uVar16 < (this->Triangles).ArrayNum) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar12 = (longlong)(int)uVar16;
        pFVar1 = (this->Triangles).AllocatorInstance.Data;
        *(undefined4 *)(pFVar1 + lVar12 * 0xc) = uVar4;
        *(undefined4 *)(pFVar1 + lVar12 * 0xc + 4) = uVar6;
        *(undefined4 *)(pFVar1 + lVar12 * 0xc + 8) = uVar9;
        uVar16 = param_2 * this->OutInnerTriangleCount + 1 + iVar14;
        uVar13 = 0;
        if ((int)uVar16 < (this->Triangles).ArrayNum) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar12 = (longlong)(int)uVar16;
        pFVar1 = (this->Triangles).AllocatorInstance.Data;
        *(undefined4 *)(pFVar1 + lVar12 * 0xc) = uVar4;
        *(undefined4 *)(pFVar1 + lVar12 * 0xc + 4) = uVar9;
        *(undefined4 *)(pFVar1 + lVar12 * 0xc + 8) = uVar8;
LAB_14c80d06e:
        iVar19 = 2;
      }
      else {
        pcVar2 = *(code **)(this->_padding_ + 0x38);
        if (iVar18 != iVar17) {
          iVar19 = iVar18 + iVar15 + -1;
          uVar9 = (*pcVar2)(this,param_2,iVar19);
          iVar19 = iVar19 + param_1;
          uVar10 = (**(code **)(this->_padding_ + 0x38))(this,param_2,iVar19);
          uVar11 = (**(code **)(this->_padding_ + 0x38))(this,param_2,iVar19 + 1);
          uVar8 = uVar5;
          if (iVar18 + 1 != iVar17) {
            uVar8 = (**(code **)(this->_padding_ + 0x38))(this,param_2,iVar18 + iVar15);
          }
          uVar16 = param_2 * this->OutInnerTriangleCount + iVar14;
          uVar13 = 0;
          if ((int)uVar16 < (this->Triangles).ArrayNum) {
            uVar13 = ~uVar16 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar12 = (longlong)(int)uVar16;
          pFVar1 = (this->Triangles).AllocatorInstance.Data;
          *(undefined4 *)(pFVar1 + lVar12 * 0xc) = uVar9;
          *(undefined4 *)(pFVar1 + lVar12 * 0xc + 4) = uVar10;
          *(undefined4 *)(pFVar1 + lVar12 * 0xc + 8) = uVar11;
          uVar16 = param_2 * this->OutInnerTriangleCount + 1 + iVar14;
          uVar13 = 0;
          if ((int)uVar16 < (this->Triangles).ArrayNum) {
            uVar13 = ~uVar16 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar12 = (longlong)(int)uVar16;
          pFVar1 = (this->Triangles).AllocatorInstance.Data;
          *(undefined4 *)(pFVar1 + lVar12 * 0xc) = uVar9;
          *(undefined4 *)(pFVar1 + lVar12 * 0xc + 4) = uVar11;
          *(undefined4 *)(pFVar1 + lVar12 * 0xc + 8) = uVar8;
          goto LAB_14c80d06e;
        }
        uVar8 = (*pcVar2)(this,param_2,param_1 * 2 + iVar15);
        uVar16 = param_2 * this->OutInnerTriangleCount + iVar14;
        uVar13 = 0;
        if ((int)uVar16 < (this->Triangles).ArrayNum) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar12 = (longlong)(int)uVar16;
        pFVar1 = (this->Triangles).AllocatorInstance.Data;
        *(undefined4 *)(pFVar1 + lVar12 * 0xc) = uVar5;
        *(undefined4 *)(pFVar1 + lVar12 * 0xc + 4) = uVar8;
        *(undefined4 *)(pFVar1 + lVar12 * 0xc + 8) = uVar7;
        iVar19 = 1;
      }
      iVar14 = iVar14 + iVar19;
      iVar18 = iVar18 + 1;
    } while (iVar18 < param_1 + 2);
  }
  return;
}

// GenerateTriangleStripForLevel @ 14c80d0c0

void __thiscall
UniformTessellateLocals::FTrianglesGenerator<double,3>::GenerateTriangleStripForLevel
          (FTrianglesGenerator<double,3> *this,int param_1,int param_2,FIndex3i *param_3,
          TStaticArray<bool,3,4294967295> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined4 in_register_00000084;
  int iVar17;
  int iVar18;
  int iVar19;
  
  iVar19 = param_1 + 2;
  iVar17 = param_1;
  if (param_4->Elements[0] != false) {
    iVar17 = (int)this->_padding_ + ~param_1;
  }
  uVar4 = (**(code **)(this->_padding_ + 0x28))
                    (this,(param_3->field0_0x0)._s_0.A,CONCAT44(in_register_00000084,param_2),iVar17
                    );
  iVar17 = param_1;
  if (param_4->Elements[2] != false) {
    iVar17 = (int)this->_padding_ + ~param_1;
  }
  uVar5 = (**(code **)(this->_padding_ + 0x28))(this,(param_3->field0_0x0)._s_0.C,param_2,iVar17);
  if (param_4->Elements[0] == false) {
    iVar17 = param_1 + 1;
  }
  else {
    iVar17 = (int)this->_padding_ + ~(param_1 + 1U);
  }
  uVar6 = (**(code **)(this->_padding_ + 0x28))(this,(param_3->field0_0x0)._s_0.A,param_2,iVar17);
  if (param_4->Elements[2] == false) {
    iVar17 = param_1 + 1;
  }
  else {
    iVar17 = (int)this->_padding_ + ~(param_1 + 1U);
  }
  uVar7 = (**(code **)(this->_padding_ + 0x28))(this,(param_3->field0_0x0)._s_0.C,param_2,iVar17);
  iVar17 = param_1 + 1;
  iVar18 = 0;
  iVar14 = iVar17 * iVar17;
  iVar15 = ((param_1 + 3) * iVar19) / 2 + iVar19 * -3 + 3;
  if (0 < iVar19) {
    do {
      if (iVar18 == 0) {
        uVar8 = uVar5;
        if (iVar17 != 1) {
          uVar8 = (**(code **)(this->_padding_ + 0x38))(this,param_2,iVar15);
        }
        uVar9 = (**(code **)(this->_padding_ + 0x38))(this,param_2,iVar15 + param_1);
        uVar16 = param_2 * this->OutInnerTriangleCount + iVar14;
        uVar13 = 0;
        if ((int)uVar16 < (this->Triangles).ArrayNum) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar12 = (longlong)(int)uVar16;
        pFVar1 = (this->Triangles).AllocatorInstance.Data;
        *(undefined4 *)(pFVar1 + lVar12 * 0xc) = uVar4;
        *(undefined4 *)(pFVar1 + lVar12 * 0xc + 4) = uVar6;
        *(undefined4 *)(pFVar1 + lVar12 * 0xc + 8) = uVar9;
        uVar16 = param_2 * this->OutInnerTriangleCount + 1 + iVar14;
        uVar13 = 0;
        if ((int)uVar16 < (this->Triangles).ArrayNum) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar12 = (longlong)(int)uVar16;
        pFVar1 = (this->Triangles).AllocatorInstance.Data;
        *(undefined4 *)(pFVar1 + lVar12 * 0xc) = uVar4;
        *(undefined4 *)(pFVar1 + lVar12 * 0xc + 4) = uVar9;
        *(undefined4 *)(pFVar1 + lVar12 * 0xc + 8) = uVar8;
LAB_14c80d4ee:
        iVar19 = 2;
      }
      else {
        pcVar2 = *(code **)(this->_padding_ + 0x38);
        if (iVar18 != iVar17) {
          iVar19 = iVar18 + iVar15 + -1;
          uVar9 = (*pcVar2)(this,param_2,iVar19);
          iVar19 = iVar19 + param_1;
          uVar10 = (**(code **)(this->_padding_ + 0x38))(this,param_2,iVar19);
          uVar11 = (**(code **)(this->_padding_ + 0x38))(this,param_2,iVar19 + 1);
          uVar8 = uVar5;
          if (iVar18 + 1 != iVar17) {
            uVar8 = (**(code **)(this->_padding_ + 0x38))(this,param_2,iVar18 + iVar15);
          }
          uVar16 = param_2 * this->OutInnerTriangleCount + iVar14;
          uVar13 = 0;
          if ((int)uVar16 < (this->Triangles).ArrayNum) {
            uVar13 = ~uVar16 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar12 = (longlong)(int)uVar16;
          pFVar1 = (this->Triangles).AllocatorInstance.Data;
          *(undefined4 *)(pFVar1 + lVar12 * 0xc) = uVar9;
          *(undefined4 *)(pFVar1 + lVar12 * 0xc + 4) = uVar10;
          *(undefined4 *)(pFVar1 + lVar12 * 0xc + 8) = uVar11;
          uVar16 = param_2 * this->OutInnerTriangleCount + 1 + iVar14;
          uVar13 = 0;
          if ((int)uVar16 < (this->Triangles).ArrayNum) {
            uVar13 = ~uVar16 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar12 = (longlong)(int)uVar16;
          pFVar1 = (this->Triangles).AllocatorInstance.Data;
          *(undefined4 *)(pFVar1 + lVar12 * 0xc) = uVar9;
          *(undefined4 *)(pFVar1 + lVar12 * 0xc + 4) = uVar11;
          *(undefined4 *)(pFVar1 + lVar12 * 0xc + 8) = uVar8;
          goto LAB_14c80d4ee;
        }
        uVar8 = (*pcVar2)(this,param_2,param_1 * 2 + iVar15);
        uVar16 = param_2 * this->OutInnerTriangleCount + iVar14;
        uVar13 = 0;
        if ((int)uVar16 < (this->Triangles).ArrayNum) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar12 = (longlong)(int)uVar16;
        pFVar1 = (this->Triangles).AllocatorInstance.Data;
        *(undefined4 *)(pFVar1 + lVar12 * 0xc) = uVar5;
        *(undefined4 *)(pFVar1 + lVar12 * 0xc + 4) = uVar8;
        *(undefined4 *)(pFVar1 + lVar12 * 0xc + 8) = uVar7;
        iVar19 = 1;
      }
      iVar14 = iVar14 + iVar19;
      iVar18 = iVar18 + 1;
    } while (iVar18 < param_1 + 2);
  }
  return;
}

// SetBufferSizes @ 14c827b80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UniformTessellateLocals::FTrianglesGenerator<float,2>::SetBufferSizes
          (FTrianglesGenerator<float,2> *this,int param_1,int param_2)

{
  (**(code **)(this->_padding_ + 0x18))(this,param_2);
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>::SetNum
            (&this->Triangles,param_1,Default);
  return;
}

// SetBufferSizes @ 14c827bc0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UniformTessellateLocals::FTrianglesGenerator<float,3>::SetBufferSizes
          (FTrianglesGenerator<float,3> *this,int param_1,int param_2)

{
  (**(code **)(this->_padding_ + 0x18))(this,param_2);
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>::SetNum
            (&this->Triangles,param_1,Default);
  return;
}

// SetBufferSizes @ 14c827c00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UniformTessellateLocals::FTrianglesGenerator<float,4>::SetBufferSizes
          (FTrianglesGenerator<float,4> *this,int param_1,int param_2)

{
  (**(code **)(this->_padding_ + 0x18))(this,param_2);
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>::SetNum
            (&this->Triangles,param_1,Default);
  return;
}

// SetBufferSizes @ 14c827c40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UniformTessellateLocals::FTrianglesGenerator<double,3>::SetBufferSizes
          (FTrianglesGenerator<double,3> *this,int param_1,int param_2)

{
  (**(code **)(this->_padding_ + 0x18))(this,param_2);
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>::SetNum
            (&this->Triangles,param_1,Default);
  return;
}

// SetTriangleElements @ 14c828fd0

void __thiscall
UniformTessellateLocals::FTrianglesGenerator<float,2>::SetTriangleElements
          (FTrianglesGenerator<float,2> *this,int param_1,int param_2,int param_3,int param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar5 = (longlong)param_1;
  uVar4 = 0;
  if (param_1 < (this->Triangles).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->Triangles).AllocatorInstance.Data;
  *(int *)(pFVar1 + lVar5 * 0xc) = param_2;
  *(int *)(pFVar1 + lVar5 * 0xc + 4) = param_3;
  *(int *)(pFVar1 + lVar5 * 0xc + 8) = param_4;
  return;
}

// SetTriangleElements @ 14c829070

void __thiscall
UniformTessellateLocals::FTrianglesGenerator<float,3>::SetTriangleElements
          (FTrianglesGenerator<float,3> *this,int param_1,int param_2,int param_3,int param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar5 = (longlong)param_1;
  uVar4 = 0;
  if (param_1 < (this->Triangles).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->Triangles).AllocatorInstance.Data;
  *(int *)(pFVar1 + lVar5 * 0xc) = param_2;
  *(int *)(pFVar1 + lVar5 * 0xc + 4) = param_3;
  *(int *)(pFVar1 + lVar5 * 0xc + 8) = param_4;
  return;
}

// SetTriangleElements @ 14c829110

void __thiscall
UniformTessellateLocals::FTrianglesGenerator<float,4>::SetTriangleElements
          (FTrianglesGenerator<float,4> *this,int param_1,int param_2,int param_3,int param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar5 = (longlong)param_1;
  uVar4 = 0;
  if (param_1 < (this->Triangles).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->Triangles).AllocatorInstance.Data;
  *(int *)(pFVar1 + lVar5 * 0xc) = param_2;
  *(int *)(pFVar1 + lVar5 * 0xc + 4) = param_3;
  *(int *)(pFVar1 + lVar5 * 0xc + 8) = param_4;
  return;
}

// SetTriangleElements @ 14c8291b0

void __thiscall
UniformTessellateLocals::FTrianglesGenerator<double,3>::SetTriangleElements
          (FTrianglesGenerator<double,3> *this,int param_1,int param_2,int param_3,int param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar5 = (longlong)param_1;
  uVar4 = 0;
  if (param_1 < (this->Triangles).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->Triangles).AllocatorInstance.Data;
  *(int *)(pFVar1 + lVar5 * 0xc) = param_2;
  *(int *)(pFVar1 + lVar5 * 0xc + 4) = param_3;
  *(int *)(pFVar1 + lVar5 * 0xc + 8) = param_4;
  return;
}

