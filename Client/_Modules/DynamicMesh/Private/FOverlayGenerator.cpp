// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 30

// ~FOverlayGenerator<float,2> @ 14c7b5a50

void __thiscall
UniformTessellateLocals::FOverlayGenerator<float,2>::~FOverlayGenerator<float,2>
          (FOverlayGenerator<float,2> *this)

{
  ForElementType<unsigned_int> FVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7__FOverlayGenerator_M_01_UniformTessellateLocals__6B_;
  FVar1 = (this->SeamEdges).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  pFVar2 = (this->EdgeToElementOffset).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7__FTrianglesGenerator_M_01_UniformTessellateLocals__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
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

// ~FOverlayGenerator<float,3> @ 14c7b5ae0

void __thiscall
UniformTessellateLocals::FOverlayGenerator<float,3>::~FOverlayGenerator<float,3>
          (FOverlayGenerator<float,3> *this)

{
  ForElementType<unsigned_int> FVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7__FOverlayGenerator_M_02_UniformTessellateLocals__6B_;
  FVar1 = (this->SeamEdges).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  pFVar2 = (this->EdgeToElementOffset).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7__FTrianglesGenerator_M_02_UniformTessellateLocals__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
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

// ~FOverlayGenerator<float,4> @ 14c7b5b70

void __thiscall
UniformTessellateLocals::FOverlayGenerator<float,4>::~FOverlayGenerator<float,4>
          (FOverlayGenerator<float,4> *this)

{
  ForElementType<unsigned_int> FVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7__FOverlayGenerator_M_03_UniformTessellateLocals__6B_;
  FVar1 = (this->SeamEdges).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  pFVar2 = (this->EdgeToElementOffset).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7__FTrianglesGenerator_M_03_UniformTessellateLocals__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
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

// operator() @ 14c7be100

void __thiscall
`UniformTessellateLocals::FOverlayGenerator<float,2>::GenerateEdgeElements'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code *pcVar5;
  uint uVar6;
  float fVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  float fVar13;
  float fVar14;
  float local_res8;
  float local_resc;
  float local_res18;
  float local_res1c;
  float local_res20;
  float local_res24;
  undefined4 uStack_64;
  int iStack_5c;
  
  cVar8 = (**(code **)(**(longlong **)this + 8))();
  fVar7 = __real_3f800000;
  if (cVar8 == '\0') {
    plVar11 = *(longlong **)this;
    lVar2 = *(longlong *)(*(longlong *)(plVar11[1] + 0x1c0) + (ulonglong)((uint)param_1 >> 9) * 8);
    uVar3 = *(ulonglong *)(lVar2 + (ulonglong)(param_1 & 0x1ff) * 0x10);
    uVar4 = *(ulonglong *)(lVar2 + 8 + (ulonglong)(param_1 & 0x1ff) * 0x10);
    uVar6 = (int)uVar4 * 3;
    uStack_64 = (undefined4)(uVar3 >> 0x20);
    if (-1 < *(int *)(*(longlong *)
                       (*(longlong *)(plVar11[0x14] + 0x78) + (ulonglong)(uVar6 >> 9) * 8) +
                     (ulonglong)(uVar6 & 0x1ff) * 4)) {
      (**(code **)(*plVar11 + 0x50))(plVar11,uVar4 & 0xffffffff,uVar3 & 0xffffffff,&local_res8);
      (**(code **)(**(longlong **)this + 0x50))
                (*(longlong **)this,uVar4 & 0xffffffff,uStack_64,&local_res18);
      plVar11 = *(longlong **)this;
      iVar10 = 0;
      if (0 < (int)plVar11[2]) {
        do {
          iVar1 = iVar10 + 1;
          fVar14 = (float)iVar1 / (float)((int)plVar11[2] + 1);
          if (fVar7 <= fVar14) {
            fVar14 = fVar7;
          }
          if (fVar14 <= 0.0) {
            fVar14 = 0.0;
          }
          local_res24 = (fVar7 - fVar14) * local_resc + fVar14 * local_res1c;
          local_res20 = fVar14 * local_res18 + (fVar7 - fVar14) * local_res8;
          (**(code **)(*plVar11 + 0x30))(plVar11,param_1,uVar4 & 0xffffffff,iVar10,&local_res20);
          plVar11 = *(longlong **)this;
          iVar10 = iVar1;
        } while (iVar1 < (int)plVar11[2]);
      }
    }
    if (((param_1 < 0) || ((int)plVar11[0x13] <= param_1)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    plVar12 = (longlong *)plVar11[0x12];
    if ((longlong *)plVar11[0x12] == (longlong *)0x0) {
      plVar12 = plVar11 + 0x10;
    }
    if ((((*(uint *)((longlong)plVar12 +
                    (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
           (param_1 & 0x1fU) & 1) != 0) && (iStack_5c = (int)(uVar4 >> 0x20), iStack_5c != -1)) &&
       (plVar11 = *(longlong **)this,
       -1 < *(int *)(*(longlong *)
                      (*(longlong *)(plVar11[0x14] + 0x78) +
                      (ulonglong)((uint)(iStack_5c * 3) >> 9) * 8) +
                    (ulonglong)(iStack_5c * 3 & 0x1ff) * 4))) {
      (**(code **)(*plVar11 + 0x50))(plVar11,iStack_5c,uVar3 & 0xffffffff,&local_res8);
      (**(code **)(**(longlong **)this + 0x50))(*(longlong **)this,iStack_5c,uStack_64,&local_res18)
      ;
      plVar11 = *(longlong **)this;
      iVar10 = 0;
      if (0 < (int)plVar11[2]) {
        do {
          iVar1 = iVar10 + 1;
          fVar14 = (float)iVar1 / (float)((int)plVar11[2] + 1);
          if (fVar7 <= fVar14) {
            fVar14 = fVar7;
          }
          if (fVar14 <= 0.0) {
            fVar14 = 0.0;
          }
          fVar13 = (fVar7 - fVar14) * local_res8;
          local_res24 = (fVar7 - fVar14) * local_resc + fVar14 * local_res1c;
          local_res20 = fVar14 * local_res18 + fVar13;
          (**(code **)(*plVar11 + 0x30))(fVar13,param_1,iStack_5c,iVar10,&local_res20);
          plVar11 = *(longlong **)this;
          iVar10 = iVar1;
        } while (iVar1 < (int)plVar11[2]);
      }
    }
  }
  return;
}

// operator() @ 14c7be450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UniformTessellateLocals::FOverlayGenerator<float,3>::GenerateEdgeElements'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code *pcVar5;
  uint uVar6;
  float fVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  undefined1 auStack_d8 [32];
  float *local_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  float local_98;
  float local_94;
  float local_90;
  float local_88;
  float local_84;
  float local_80;
  float local_78;
  float local_74;
  float local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_d8;
  cVar8 = (**(code **)(**(longlong **)this + 8))();
  fVar7 = __real_3f800000;
  if (cVar8 == '\0') {
    iVar13 = 0;
    plVar11 = *(longlong **)this;
    lVar2 = *(longlong *)(*(longlong *)(plVar11[1] + 0x1c0) + (ulonglong)((uint)param_1 >> 9) * 8);
    uVar3 = *(ulonglong *)(lVar2 + (ulonglong)(param_1 & 0x1ff) * 0x10);
    uVar4 = *(ulonglong *)(lVar2 + 8 + (ulonglong)(param_1 & 0x1ff) * 0x10);
    uVar6 = (int)uVar4 * 3;
    local_a8 = uVar3;
    local_a0 = uVar4;
    if (-1 < *(int *)(*(longlong *)
                       (*(longlong *)(plVar11[0x14] + 0x78) + (ulonglong)(uVar6 >> 9) * 8) +
                     (ulonglong)(uVar6 & 0x1ff) * 4)) {
      (**(code **)(*plVar11 + 0x50))(plVar11,uVar4 & 0xffffffff,uVar3 & 0xffffffff,&local_98);
      (**(code **)(**(longlong **)this + 0x50))
                (*(longlong **)this,uVar4 & 0xffffffff,local_a8._4_4_,&local_88);
      plVar11 = *(longlong **)this;
      iVar10 = 0;
      if (0 < (int)plVar11[2]) {
        do {
          iVar1 = iVar10 + 1;
          local_b8 = &local_78;
          fVar16 = (float)iVar1 / (float)((int)plVar11[2] + 1);
          if (fVar7 <= fVar16) {
            fVar16 = fVar7;
          }
          if (fVar16 <= 0.0) {
            fVar16 = 0.0;
          }
          fVar15 = fVar7 - fVar16;
          local_78 = fVar15 * local_98 + fVar16 * local_88;
          local_70 = fVar15 * local_90 + fVar16 * local_80;
          local_74 = fVar15 * local_94 + fVar16 * local_84;
          (**(code **)(*plVar11 + 0x30))(plVar11,param_1,uVar4 & 0xffffffff,iVar10);
          plVar11 = *(longlong **)this;
          iVar10 = iVar1;
        } while (iVar1 < (int)plVar11[2]);
      }
    }
    if (((param_1 < 0) || ((int)plVar11[0x13] <= param_1)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    plVar12 = (longlong *)plVar11[0x12];
    if ((longlong *)plVar11[0x12] == (longlong *)0x0) {
      plVar12 = plVar11 + 0x10;
    }
    if ((((*(uint *)((longlong)plVar12 +
                    (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
           (param_1 & 0x1fU) & 1) != 0) && (iVar10 = local_a0._4_4_, local_a0._4_4_ != -1)) &&
       (plVar11 = *(longlong **)this,
       -1 < *(int *)(*(longlong *)
                      (*(longlong *)(plVar11[0x14] + 0x78) +
                      (ulonglong)((uint)(local_a0._4_4_ * 3) >> 9) * 8) +
                    (ulonglong)(local_a0._4_4_ * 3 & 0x1ff) * 4))) {
      (**(code **)(*plVar11 + 0x50))(plVar11,local_a0._4_4_,uVar3 & 0xffffffff,&local_98);
      (**(code **)(**(longlong **)this + 0x50))(*(longlong **)this,iVar10,local_a8._4_4_,&local_88);
      plVar11 = *(longlong **)this;
      if (0 < (int)plVar11[2]) {
        do {
          iVar1 = iVar13 + 1;
          local_b8 = &local_78;
          fVar16 = (float)iVar1 / (float)((int)plVar11[2] + 1);
          if (fVar7 <= fVar16) {
            fVar16 = fVar7;
          }
          auVar14 = ZEXT416((uint)fVar16);
          if (fVar16 <= 0.0) {
            auVar14 = ZEXT816(0) << 0x20;
          }
          fVar15 = auVar14._0_4_;
          fVar16 = fVar7 - fVar15;
          local_78 = fVar16 * local_98 + fVar15 * local_88;
          auVar14._0_4_ = fVar15 * local_84;
          local_70 = fVar16 * local_90 + fVar15 * local_80;
          local_74 = fVar16 * local_94 + auVar14._0_4_;
          (**(code **)(*plVar11 + 0x30))(auVar14._0_8_,param_1,iVar10,iVar13);
          plVar11 = *(longlong **)this;
          iVar13 = iVar1;
        } while (iVar1 < (int)plVar11[2]);
      }
    }
  }
  return;
}

// operator() @ 14c7be7e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UniformTessellateLocals::FOverlayGenerator<float,4>::GenerateEdgeElements'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code *pcVar5;
  uint uVar6;
  float fVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_c8 [32];
  float *local_a8;
  undefined8 local_98;
  undefined8 local_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_c8;
  cVar8 = (**(code **)(**(longlong **)this + 8))();
  fVar7 = __real_3f800000;
  if (cVar8 == '\0') {
    plVar11 = *(longlong **)this;
    lVar2 = *(longlong *)(*(longlong *)(plVar11[1] + 0x1c0) + (ulonglong)((uint)param_1 >> 9) * 8);
    uVar3 = *(ulonglong *)(lVar2 + (ulonglong)(param_1 & 0x1ff) * 0x10);
    uVar4 = *(ulonglong *)(lVar2 + 8 + (ulonglong)(param_1 & 0x1ff) * 0x10);
    uVar6 = (int)uVar4 * 3;
    local_98 = uVar3;
    local_90 = uVar4;
    if (-1 < *(int *)(*(longlong *)
                       (*(longlong *)(plVar11[0x14] + 0x78) + (ulonglong)(uVar6 >> 9) * 8) +
                     (ulonglong)(uVar6 & 0x1ff) * 4)) {
      (**(code **)(*plVar11 + 0x50))(plVar11,uVar4 & 0xffffffff,uVar3 & 0xffffffff,&local_88);
      (**(code **)(**(longlong **)this + 0x50))
                (*(longlong **)this,uVar4 & 0xffffffff,local_98._4_4_,&local_78);
      plVar11 = *(longlong **)this;
      iVar10 = 0;
      if (0 < (int)plVar11[2]) {
        do {
          iVar13 = iVar10 + 1;
          local_a8 = &local_68;
          fVar14 = (float)iVar13 / (float)((int)plVar11[2] + 1);
          if (fVar7 <= fVar14) {
            fVar14 = fVar7;
          }
          if (fVar14 <= 0.0) {
            fVar14 = 0.0;
          }
          fVar15 = fVar7 - fVar14;
          local_68 = fVar15 * local_88 + fVar14 * local_78;
          fStack_64 = fVar15 * fStack_84 + fVar14 * fStack_74;
          fStack_60 = fVar15 * fStack_80 + fVar14 * fStack_70;
          fStack_5c = fVar15 * fStack_7c + fVar14 * fStack_6c;
          (**(code **)(*plVar11 + 0x30))(plVar11,param_1,uVar4 & 0xffffffff,iVar10);
          plVar11 = *(longlong **)this;
          iVar10 = iVar13;
        } while (iVar13 < (int)plVar11[2]);
      }
    }
    if (((param_1 < 0) || ((int)plVar11[0x13] <= param_1)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    plVar12 = (longlong *)plVar11[0x12];
    if ((longlong *)plVar11[0x12] == (longlong *)0x0) {
      plVar12 = plVar11 + 0x10;
    }
    if ((((*(uint *)((longlong)plVar12 +
                    (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
           (param_1 & 0x1fU) & 1) != 0) && (iVar10 = local_90._4_4_, local_90._4_4_ != -1)) &&
       (plVar11 = *(longlong **)this,
       -1 < *(int *)(*(longlong *)
                      (*(longlong *)(plVar11[0x14] + 0x78) +
                      (ulonglong)((uint)(local_90._4_4_ * 3) >> 9) * 8) +
                    (ulonglong)(local_90._4_4_ * 3 & 0x1ff) * 4))) {
      (**(code **)(*plVar11 + 0x50))(plVar11,local_90._4_4_,uVar3 & 0xffffffff,&local_88);
      (**(code **)(**(longlong **)this + 0x50))(*(longlong **)this,iVar10,local_98._4_4_,&local_78);
      plVar11 = *(longlong **)this;
      iVar13 = 0;
      if (0 < (int)plVar11[2]) {
        do {
          iVar1 = iVar13 + 1;
          local_a8 = &local_68;
          fVar14 = (float)iVar1 / (float)((int)plVar11[2] + 1);
          if (fVar7 <= fVar14) {
            fVar14 = fVar7;
          }
          if (fVar14 <= 0.0) {
            fVar14 = 0.0;
          }
          fVar15 = fVar7 - fVar14;
          local_68 = fVar15 * local_88 + fVar14 * local_78;
          fStack_64 = fVar15 * fStack_84 + fVar14 * fStack_74;
          fStack_60 = fVar15 * fStack_80 + fVar14 * fStack_70;
          fStack_5c = fVar15 * fStack_7c + fVar14 * fStack_6c;
          (**(code **)(*plVar11 + 0x30))(plVar11,param_1,iVar10,iVar13);
          plVar11 = *(longlong **)this;
          iVar13 = iVar1;
        } while (iVar1 < (int)plVar11[2]);
      }
    }
  }
  return;
}

// CopyToAttribute @ 14c7fa950

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UniformTessellateLocals::FOverlayGenerator<float,2>::CopyToAttribute
          (FOverlayGenerator<float,2> *this,TDynamicMeshOverlay<float,2> *param_1)

{
  undefined8 uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  EMeshResult EVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  float local_res8 [2];
  TDynamicMeshOverlay<float,2> *local_res10;
  uint local_68;
  uint uStack_64;
  FIndex3i_u_0 local_58;
  TArray<int,TSizedDefaultAllocator<32>_> local_48;
  
  if (((this->Overlay != (TDynamicMeshOverlay<float,2> *)0x0) &&
      ((this->Overlay->ElementsRefCounts).UsedCount != 0)) &&
     (param_1 != (TDynamicMeshOverlay<float,2> *)0x0)) {
    local_res10 = param_1;
    UE::Geometry::TDynamicMeshOverlay<float,2>::ClearElements(param_1);
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_48,*(int *)((longlong)&this->_padding_ + 4),Default);
    uVar9 = 0;
    if (0 < *(int *)((longlong)&this->_padding_ + 4)) {
      lVar10 = 0;
      do {
        uVar11 = ~uVar9 >> 0x1f;
        uVar13 = 0;
        if ((int)uVar9 < (int)this->_padding_) {
          uVar13 = uVar11;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(char *)(lVar10 + this->_padding_) == '\0') {
          uVar13 = 0;
          if ((int)uVar9 < local_48.ArrayNum) {
            uVar13 = uVar11;
          }
          if ((uVar13 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          *(undefined4 *)(local_48.AllocatorInstance.Data + lVar10 * 4) = 0xffffffff;
        }
        else {
          FElementsGenerator<float,2>::GetElement
                    ((FElementsGenerator<float,2> *)this,uVar9,local_res8);
          iVar6 = UE::Geometry::TDynamicMeshOverlay<float,2>::AppendElement(param_1,local_res8);
          uVar13 = 0;
          if ((int)uVar9 < local_48.ArrayNum) {
            uVar13 = uVar11;
          }
          if ((uVar13 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          *(int *)(local_48.AllocatorInstance.Data + lVar10 * 4) = iVar6;
          param_1 = local_res10;
        }
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 1;
      } while ((int)uVar9 < *(int *)((longlong)&this->_padding_ + 4));
    }
    iVar6 = 0;
    if (0 < *(int *)(this->_padding_ + 0x140) * 0x200 + *(int *)(this->_padding_ + 0x144)) {
      do {
        cVar5 = (**(code **)(this->_padding_ + 0x68))(this,iVar6);
        if (cVar5 != '\0') {
          iVar7 = *(int *)((longlong)&this->_padding_ + 4);
          iVar12 = 0;
          if (0 < iVar7) {
            do {
              uVar13 = iVar7 * iVar6 + iVar12;
              uVar9 = 0;
              if ((int)uVar13 < (int)this->_padding_) {
                uVar9 = ~uVar13 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              uVar9 = *(uint *)(this->_padding_ + 8 + (longlong)(int)uVar13 * 0xc);
              uVar1 = *(undefined8 *)(this->_padding_ + (longlong)(int)uVar13 * 0xc);
              uVar11 = 0;
              if ((int)uVar9 < local_48.ArrayNum) {
                uVar11 = ~uVar9 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              uStack_64 = (uint)((ulonglong)uVar1 >> 0x20);
              iVar7 = *(int *)(local_48.AllocatorInstance.Data + (longlong)(int)uVar9 * 4);
              uVar9 = 0;
              if ((int)uStack_64 < local_48.ArrayNum) {
                uVar9 = ~uStack_64 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              local_68 = (uint)uVar1;
              iVar2 = *(int *)(local_48.AllocatorInstance.Data + (longlong)(int)uStack_64 * 4);
              uVar9 = 0;
              if ((int)local_68 < local_48.ArrayNum) {
                uVar9 = ~local_68 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              local_58._s_0.A =
                   *(undefined4 *)(local_48.AllocatorInstance.Data + (longlong)(int)local_68 * 4);
              local_58._s_0.B = iVar2;
              local_58._s_0.C = iVar7;
              if ((((local_58._s_0.A != -1) && (iVar2 != -1)) && (iVar7 != -1)) &&
                 ((EVar8 = UE::Geometry::TDynamicMeshOverlay<float,2>::SetTriangle
                                     (local_res10,uVar13,(FIndex3i *)&local_58._s_0,true),
                  EVar8 != Ok &&
                  (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<_5974361012667677762>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\UniformTessellate.cpp"
                                      ,0x3be,
                                      "OutOverlay->SetTriangle(OutTriangleID, MappedElementIDs) == EMeshResult::Ok"
                                     ), bVar4)))) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar7 = *(int *)((longlong)&this->_padding_ + 4);
              iVar12 = iVar12 + 1;
            } while (iVar12 < iVar7);
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(this->_padding_ + 0x140) * 0x200 + *(int *)(this->_padding_ + 0x144)
              );
    }
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  return;
}

// CopyToAttribute @ 14c7fad90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UniformTessellateLocals::FOverlayGenerator<float,3>::CopyToAttribute
          (FOverlayGenerator<float,3> *this,TDynamicMeshOverlay<float,3> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  EMeshResult EVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined1 auStackY_b8 [32];
  TArray<int,TSizedDefaultAllocator<32>_> local_88;
  undefined8 local_78;
  uint local_70;
  TDynamicMeshOverlay<float,3> *local_68;
  FIndex3i_u_0 local_60;
  float local_50 [4];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  if (((this->Overlay != (TDynamicMeshOverlay<float,3> *)0x0) &&
      ((this->Overlay->ElementsRefCounts).UsedCount != 0)) &&
     (param_1 != (TDynamicMeshOverlay<float,3> *)0x0)) {
    local_68 = param_1;
    UE::Geometry::TDynamicMeshOverlay<float,3>::ClearElements(param_1);
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.ArrayNum = 0;
    local_88.ArrayMax = 0;
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_88,*(int *)((longlong)&this->_padding_ + 4),Default);
    uVar8 = 0;
    if (0 < *(int *)((longlong)&this->_padding_ + 4)) {
      lVar9 = 0;
      do {
        uVar10 = ~uVar8 >> 0x1f;
        uVar12 = 0;
        if ((int)uVar8 < (int)this->_padding_) {
          uVar12 = uVar10;
        }
        if ((uVar12 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(char *)(lVar9 + this->_padding_) == '\0') {
          uVar12 = 0;
          if ((int)uVar8 < local_88.ArrayNum) {
            uVar12 = uVar10;
          }
          if ((uVar12 == 0) &&
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
          *(undefined4 *)(local_88.AllocatorInstance.Data + lVar9 * 4) = 0xffffffff;
        }
        else {
          FElementsGenerator<float,3>::GetElement
                    ((FElementsGenerator<float,3> *)this,uVar8,local_50);
          iVar5 = UE::Geometry::TDynamicMeshOverlay<float,3>::AppendElement(param_1,local_50);
          uVar12 = 0;
          if ((int)uVar8 < local_88.ArrayNum) {
            uVar12 = uVar10;
          }
          if ((uVar12 == 0) &&
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
          *(int *)(local_88.AllocatorInstance.Data + lVar9 * 4) = iVar5;
          param_1 = local_68;
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 1;
      } while ((int)uVar8 < *(int *)((longlong)&this->_padding_ + 4));
    }
    iVar5 = 0;
    if (0 < *(int *)(this->_padding_ + 0x140) * 0x200 + *(int *)(this->_padding_ + 0x144)) {
      do {
        cVar4 = (**(code **)(this->_padding_ + 0x68))(this,iVar5);
        if (cVar4 != '\0') {
          iVar6 = *(int *)((longlong)&this->_padding_ + 4);
          iVar11 = 0;
          if (0 < iVar6) {
            do {
              uVar12 = iVar6 * iVar5 + iVar11;
              uVar8 = 0;
              if ((int)uVar12 < (int)this->_padding_) {
                uVar8 = ~uVar12 >> 0x1f;
              }
              if ((uVar8 == 0) &&
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
              uVar8 = *(uint *)(this->_padding_ + 8 + (longlong)(int)uVar12 * 0xc);
              local_78 = *(undefined8 *)(this->_padding_ + (longlong)(int)uVar12 * 0xc);
              uVar10 = 0;
              if ((int)uVar8 < local_88.ArrayNum) {
                uVar10 = ~uVar8 >> 0x1f;
              }
              local_70 = uVar8;
              if ((uVar10 == 0) &&
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
              uVar10 = local_78._4_4_;
              iVar6 = *(int *)(local_88.AllocatorInstance.Data + (longlong)(int)uVar8 * 4);
              uVar8 = 0;
              if ((int)local_78._4_4_ < local_88.ArrayNum) {
                uVar8 = ~local_78._4_4_ >> 0x1f;
              }
              if ((uVar8 == 0) &&
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
              uVar8 = (uint)local_78;
              iVar1 = *(int *)(local_88.AllocatorInstance.Data + (longlong)(int)uVar10 * 4);
              uVar10 = 0;
              if ((int)(uint)local_78 < local_88.ArrayNum) {
                uVar10 = ~(uint)local_78 >> 0x1f;
              }
              if ((uVar10 == 0) &&
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
              local_60._s_0.A =
                   *(undefined4 *)(local_88.AllocatorInstance.Data + (longlong)(int)uVar8 * 4);
              local_60._s_0.B = iVar1;
              local_60._s_0.C = iVar6;
              if ((((local_60._s_0.A != -1) && (iVar1 != -1)) && (iVar6 != -1)) &&
                 ((EVar7 = UE::Geometry::TDynamicMeshOverlay<float,3>::SetTriangle
                                     (local_68,uVar12,(FIndex3i *)&local_60._s_0,true), EVar7 != Ok
                  && (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                                        (&bGEnsureHasExecuted<_5974361012667677762>,false,
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\UniformTessellate.cpp"
                                         ,0x3be,
                                         "OutOverlay->SetTriangle(OutTriangleID, MappedElementIDs) == EMeshResult::Ok"
                                        ), bVar3)))) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              iVar6 = *(int *)((longlong)&this->_padding_ + 4);
              iVar11 = iVar11 + 1;
            } while (iVar11 < iVar6);
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(this->_padding_ + 0x140) * 0x200 + *(int *)(this->_padding_ + 0x144)
              );
    }
    if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.AllocatorInstance.Data);
    }
  }
  return;
}

// CopyToAttribute @ 14c7fb210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UniformTessellateLocals::FOverlayGenerator<float,4>::CopyToAttribute
          (FOverlayGenerator<float,4> *this,TDynamicMeshOverlay<float,4> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  EMeshResult EVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined1 auStackY_b8 [32];
  TArray<int,TSizedDefaultAllocator<32>_> local_88;
  undefined8 local_78;
  uint local_70;
  TDynamicMeshOverlay<float,4> *local_68;
  FIndex3i_u_0 local_60;
  float local_50 [4];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  if (((this->Overlay != (TDynamicMeshOverlay<float,4> *)0x0) &&
      ((this->Overlay->ElementsRefCounts).UsedCount != 0)) &&
     (param_1 != (TDynamicMeshOverlay<float,4> *)0x0)) {
    local_68 = param_1;
    UE::Geometry::TDynamicMeshOverlay<float,4>::ClearElements(param_1);
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.ArrayNum = 0;
    local_88.ArrayMax = 0;
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_88,*(int *)((longlong)&this->_padding_ + 4),Default);
    uVar8 = 0;
    if (0 < *(int *)((longlong)&this->_padding_ + 4)) {
      lVar9 = 0;
      do {
        uVar10 = ~uVar8 >> 0x1f;
        uVar12 = 0;
        if ((int)uVar8 < (int)this->_padding_) {
          uVar12 = uVar10;
        }
        if ((uVar12 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(char *)(lVar9 + this->_padding_) == '\0') {
          uVar12 = 0;
          if ((int)uVar8 < local_88.ArrayNum) {
            uVar12 = uVar10;
          }
          if ((uVar12 == 0) &&
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
          *(undefined4 *)(local_88.AllocatorInstance.Data + lVar9 * 4) = 0xffffffff;
        }
        else {
          FElementsGenerator<float,4>::GetElement
                    ((FElementsGenerator<float,4> *)this,uVar8,local_50);
          iVar5 = UE::Geometry::TDynamicMeshOverlay<float,4>::AppendElement(param_1,local_50);
          uVar12 = 0;
          if ((int)uVar8 < local_88.ArrayNum) {
            uVar12 = uVar10;
          }
          if ((uVar12 == 0) &&
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
          *(int *)(local_88.AllocatorInstance.Data + lVar9 * 4) = iVar5;
          param_1 = local_68;
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 1;
      } while ((int)uVar8 < *(int *)((longlong)&this->_padding_ + 4));
    }
    iVar5 = 0;
    if (0 < *(int *)(this->_padding_ + 0x140) * 0x200 + *(int *)(this->_padding_ + 0x144)) {
      do {
        cVar4 = (**(code **)(this->_padding_ + 0x68))(this,iVar5);
        if (cVar4 != '\0') {
          iVar6 = *(int *)((longlong)&this->_padding_ + 4);
          iVar11 = 0;
          if (0 < iVar6) {
            do {
              uVar12 = iVar6 * iVar5 + iVar11;
              uVar8 = 0;
              if ((int)uVar12 < (int)this->_padding_) {
                uVar8 = ~uVar12 >> 0x1f;
              }
              if ((uVar8 == 0) &&
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
              uVar8 = *(uint *)(this->_padding_ + 8 + (longlong)(int)uVar12 * 0xc);
              local_78 = *(undefined8 *)(this->_padding_ + (longlong)(int)uVar12 * 0xc);
              uVar10 = 0;
              if ((int)uVar8 < local_88.ArrayNum) {
                uVar10 = ~uVar8 >> 0x1f;
              }
              local_70 = uVar8;
              if ((uVar10 == 0) &&
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
              uVar10 = local_78._4_4_;
              iVar6 = *(int *)(local_88.AllocatorInstance.Data + (longlong)(int)uVar8 * 4);
              uVar8 = 0;
              if ((int)local_78._4_4_ < local_88.ArrayNum) {
                uVar8 = ~local_78._4_4_ >> 0x1f;
              }
              if ((uVar8 == 0) &&
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
              uVar8 = (uint)local_78;
              iVar1 = *(int *)(local_88.AllocatorInstance.Data + (longlong)(int)uVar10 * 4);
              uVar10 = 0;
              if ((int)(uint)local_78 < local_88.ArrayNum) {
                uVar10 = ~(uint)local_78 >> 0x1f;
              }
              if ((uVar10 == 0) &&
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
              local_60._s_0.A =
                   *(undefined4 *)(local_88.AllocatorInstance.Data + (longlong)(int)uVar8 * 4);
              local_60._s_0.B = iVar1;
              local_60._s_0.C = iVar6;
              if ((((local_60._s_0.A != -1) && (iVar1 != -1)) && (iVar6 != -1)) &&
                 ((EVar7 = UE::Geometry::TDynamicMeshOverlay<float,4>::SetTriangle
                                     (local_68,uVar12,(FIndex3i *)&local_60._s_0,true), EVar7 != Ok
                  && (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                                        (&bGEnsureHasExecuted<_5974361012667677762>,false,
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\UniformTessellate.cpp"
                                         ,0x3be,
                                         "OutOverlay->SetTriangle(OutTriangleID, MappedElementIDs) == EMeshResult::Ok"
                                        ), bVar3)))) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              iVar6 = *(int *)((longlong)&this->_padding_ + 4);
              iVar11 = iVar11 + 1;
            } while (iVar11 < iVar6);
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(this->_padding_ + 0x140) * 0x200 + *(int *)(this->_padding_ + 0x144)
              );
    }
    if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.AllocatorInstance.Data);
    }
  }
  return;
}

// Generate @ 14c809fb0

bool __thiscall
UniformTessellateLocals::FOverlayGenerator<float,2>::Generate(FOverlayGenerator<float,2> *this)

{
  longlong lVar1;
  <lambda_1> <Var2;
  char cVar3;
  FOverlayGenerator<float,2> *local_res8 [4];
  TArrayView<std::nullptr_t,int> local_28;
  code *local_18;
  FOverlayGenerator<float,2> **local_10;
  
  lVar1 = this->_padding_;
  if ((((lVar1 != 0) && (*(int *)(lVar1 + 0x38) * 0x200 + *(int *)(lVar1 + 0x3c) == 0)) &&
      (*(int *)(lVar1 + 0x1e8) * 0x200 + *(int *)(lVar1 + 0x1ec) == 0)) &&
     ((*(int *)(lVar1 + 0x158) * 0x200 + *(int *)(lVar1 + 0x15c) == 0 && (-1 < (int)this->_padding_)
      ))) {
    if (this->Overlay == (TDynamicMeshOverlay<float,2> *)0x0) {
      return true;
    }
    if ((this->Overlay->ElementsRefCounts).UsedCount == 0) {
      return true;
    }
    (**(code **)(this->_padding_ + 0x20))(this);
    cVar3 = (**(code **)(this->_padding_ + 0x58))(this);
    if ((cVar3 != '\0') && (cVar3 = (**(code **)(this->_padding_ + 0x60))(), cVar3 != '\0')) {
      if ((int)this->_padding_ != 0) {
        local_18 = UE::Core::Private::Function::
                   TFunctionRefCaller<`UniformTessellateLocals::FTrianglesGenerator<float,2>::GenerateTriangles'::__l2::<lambda_1>,void,int>
                   ::Call;
        local_10 = local_res8;
        local_28.DataPtr = (void **)0x0;
        local_28.ArrayNum = 0;
        local_res8[0]._0_1_ = SUB81(this,0);
        <Var2 = local_res8[0]._0_1_;
        local_res8[0] = this;
        ParallelForImpl::
        ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                  (L"ParallelFor Task",
                   *(int *)(this->_padding_ + 0x140) * 0x200 + *(int *)(this->_padding_ + 0x144),1,
                   (TFunctionRef<void___cdecl(int)> *)&local_18,<Var2,
                   (uint)((char)this->_padding_ == '\0'),&local_28);
        cVar3 = (**(code **)(this->_padding_ + 8))(this);
        if (cVar3 != '\0') {
          return false;
        }
      }
      return true;
    }
  }
  return false;
}

// Generate @ 14c80a0f0

bool __thiscall
UniformTessellateLocals::FOverlayGenerator<float,3>::Generate(FOverlayGenerator<float,3> *this)

{
  longlong lVar1;
  <lambda_1> <Var2;
  char cVar3;
  FOverlayGenerator<float,3> *local_res8 [4];
  TArrayView<std::nullptr_t,int> local_28;
  code *local_18;
  FOverlayGenerator<float,3> **local_10;
  
  lVar1 = this->_padding_;
  if ((((lVar1 != 0) && (*(int *)(lVar1 + 0x38) * 0x200 + *(int *)(lVar1 + 0x3c) == 0)) &&
      (*(int *)(lVar1 + 0x1e8) * 0x200 + *(int *)(lVar1 + 0x1ec) == 0)) &&
     ((*(int *)(lVar1 + 0x158) * 0x200 + *(int *)(lVar1 + 0x15c) == 0 && (-1 < (int)this->_padding_)
      ))) {
    if (this->Overlay == (TDynamicMeshOverlay<float,3> *)0x0) {
      return true;
    }
    if ((this->Overlay->ElementsRefCounts).UsedCount == 0) {
      return true;
    }
    (**(code **)(this->_padding_ + 0x20))(this);
    cVar3 = (**(code **)(this->_padding_ + 0x58))(this);
    if ((cVar3 != '\0') && (cVar3 = (**(code **)(this->_padding_ + 0x60))(), cVar3 != '\0')) {
      if ((int)this->_padding_ != 0) {
        local_18 = UE::Core::Private::Function::
                   TFunctionRefCaller<`UniformTessellateLocals::FTrianglesGenerator<float,3>::GenerateTriangles'::__l2::<lambda_1>,void,int>
                   ::Call;
        local_10 = local_res8;
        local_28.DataPtr = (void **)0x0;
        local_28.ArrayNum = 0;
        local_res8[0]._0_1_ = SUB81(this,0);
        <Var2 = local_res8[0]._0_1_;
        local_res8[0] = this;
        ParallelForImpl::
        ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                  (L"ParallelFor Task",
                   *(int *)(this->_padding_ + 0x140) * 0x200 + *(int *)(this->_padding_ + 0x144),1,
                   (TFunctionRef<void___cdecl(int)> *)&local_18,<Var2,
                   (uint)((char)this->_padding_ == '\0'),&local_28);
        cVar3 = (**(code **)(this->_padding_ + 8))(this);
        if (cVar3 != '\0') {
          return false;
        }
      }
      return true;
    }
  }
  return false;
}

// Generate @ 14c80a230

bool __thiscall
UniformTessellateLocals::FOverlayGenerator<float,4>::Generate(FOverlayGenerator<float,4> *this)

{
  longlong lVar1;
  <lambda_1> <Var2;
  char cVar3;
  FOverlayGenerator<float,4> *local_res8 [4];
  TArrayView<std::nullptr_t,int> local_28;
  code *local_18;
  FOverlayGenerator<float,4> **local_10;
  
  lVar1 = this->_padding_;
  if ((((lVar1 != 0) && (*(int *)(lVar1 + 0x38) * 0x200 + *(int *)(lVar1 + 0x3c) == 0)) &&
      (*(int *)(lVar1 + 0x1e8) * 0x200 + *(int *)(lVar1 + 0x1ec) == 0)) &&
     ((*(int *)(lVar1 + 0x158) * 0x200 + *(int *)(lVar1 + 0x15c) == 0 && (-1 < (int)this->_padding_)
      ))) {
    if (this->Overlay == (TDynamicMeshOverlay<float,4> *)0x0) {
      return true;
    }
    if ((this->Overlay->ElementsRefCounts).UsedCount == 0) {
      return true;
    }
    (**(code **)(this->_padding_ + 0x20))(this);
    cVar3 = (**(code **)(this->_padding_ + 0x58))(this);
    if ((cVar3 != '\0') && (cVar3 = (**(code **)(this->_padding_ + 0x60))(), cVar3 != '\0')) {
      if ((int)this->_padding_ != 0) {
        local_18 = UE::Core::Private::Function::
                   TFunctionRefCaller<`UniformTessellateLocals::FTrianglesGenerator<float,4>::GenerateTriangles'::__l2::<lambda_1>,void,int>
                   ::Call;
        local_10 = local_res8;
        local_28.DataPtr = (void **)0x0;
        local_28.ArrayNum = 0;
        local_res8[0]._0_1_ = SUB81(this,0);
        <Var2 = local_res8[0]._0_1_;
        local_res8[0] = this;
        ParallelForImpl::
        ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                  (L"ParallelFor Task",
                   *(int *)(this->_padding_ + 0x140) * 0x200 + *(int *)(this->_padding_ + 0x144),1,
                   (TFunctionRef<void___cdecl(int)> *)&local_18,<Var2,
                   (uint)((char)this->_padding_ == '\0'),&local_28);
        cVar3 = (**(code **)(this->_padding_ + 8))(this);
        if (cVar3 != '\0') {
          return false;
        }
      }
      return true;
    }
  }
  return false;
}

// GenerateEdgeElements @ 14c80be70

bool __thiscall
UniformTessellateLocals::FOverlayGenerator<float,2>::GenerateEdgeElements
          (FOverlayGenerator<float,2> *this)

{
  <lambda_1> <Var1;
  char cVar2;
  FOverlayGenerator<float,2> *local_res8 [4];
  TArrayView<std::nullptr_t,int> local_28;
  code *local_18;
  FOverlayGenerator<float,2> **local_10;
  
  local_28.DataPtr = (void **)0x0;
  local_28.ArrayNum = 0;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UniformTessellateLocals::FOverlayGenerator<float,2>::GenerateEdgeElements'::__l2::<lambda_1>,void,int>
             ::Call;
  local_10 = local_res8;
  local_res8[0]._0_1_ = SUB81(this,0);
  <Var1 = local_res8[0]._0_1_;
  local_res8[0] = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",
             *(int *)(this->_padding_ + 0x1d0) * 0x200 + *(int *)(this->_padding_ + 0x1d4),1,
             (TFunctionRef<void___cdecl(int)> *)&local_18,<Var1,
             (uint)((char)this->_padding_ == '\0'),&local_28);
  cVar2 = (**(code **)(this->_padding_ + 8))(this);
  return cVar2 == '\0';
}

// GenerateEdgeElements @ 14c80bf00

bool __thiscall
UniformTessellateLocals::FOverlayGenerator<float,3>::GenerateEdgeElements
          (FOverlayGenerator<float,3> *this)

{
  <lambda_1> <Var1;
  char cVar2;
  FOverlayGenerator<float,3> *local_res8 [4];
  TArrayView<std::nullptr_t,int> local_28;
  code *local_18;
  FOverlayGenerator<float,3> **local_10;
  
  local_28.DataPtr = (void **)0x0;
  local_28.ArrayNum = 0;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UniformTessellateLocals::FOverlayGenerator<float,3>::GenerateEdgeElements'::__l2::<lambda_1>,void,int>
             ::Call;
  local_10 = local_res8;
  local_res8[0]._0_1_ = SUB81(this,0);
  <Var1 = local_res8[0]._0_1_;
  local_res8[0] = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",
             *(int *)(this->_padding_ + 0x1d0) * 0x200 + *(int *)(this->_padding_ + 0x1d4),1,
             (TFunctionRef<void___cdecl(int)> *)&local_18,<Var1,
             (uint)((char)this->_padding_ == '\0'),&local_28);
  cVar2 = (**(code **)(this->_padding_ + 8))(this);
  return cVar2 == '\0';
}

// GenerateEdgeElements @ 14c80bf90

bool __thiscall
UniformTessellateLocals::FOverlayGenerator<float,4>::GenerateEdgeElements
          (FOverlayGenerator<float,4> *this)

{
  <lambda_1> <Var1;
  char cVar2;
  FOverlayGenerator<float,4> *local_res8 [4];
  TArrayView<std::nullptr_t,int> local_28;
  code *local_18;
  FOverlayGenerator<float,4> **local_10;
  
  local_28.DataPtr = (void **)0x0;
  local_28.ArrayNum = 0;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UniformTessellateLocals::FOverlayGenerator<float,4>::GenerateEdgeElements'::__l2::<lambda_1>,void,int>
             ::Call;
  local_10 = local_res8;
  local_res8[0]._0_1_ = SUB81(this,0);
  <Var1 = local_res8[0]._0_1_;
  local_res8[0] = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",
             *(int *)(this->_padding_ + 0x1d0) * 0x200 + *(int *)(this->_padding_ + 0x1d4),1,
             (TFunctionRef<void___cdecl(int)> *)&local_18,<Var1,
             (uint)((char)this->_padding_ == '\0'),&local_28);
  cVar2 = (**(code **)(this->_padding_ + 8))(this);
  return cVar2 == '\0';
}

// GetElementIDOnEdge @ 14c80fbc0

int __thiscall
UniformTessellateLocals::FOverlayGenerator<float,2>::GetElementIDOnEdge
          (FOverlayGenerator<float,2> *this,int param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ForElementType<unsigned_int> FVar5;
  
  if ((param_1 < 0) || ((this->SeamEdges).NumBits <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5c6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  FVar5 = (this->SeamEdges).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<unsigned_int>)0x0) {
    FVar5 = (ForElementType<unsigned_int>)&this->SeamEdges;
  }
  if ((*(uint *)((longlong)FVar5 + (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4)
       >> (param_1 & 0x1fU) & 1) != 0) {
    param_3 = (uint)(*(int *)(*(longlong *)
                               (*(longlong *)(this->_padding_ + 0x1c0) +
                               (ulonglong)((uint)param_1 >> 9) * 8) + 8 +
                             (ulonglong)(param_1 & 0x1ff) * 0x10) != param_2) + param_3 * 2;
  }
  uVar4 = 0;
  if (param_1 < (this->EdgeToElementOffset).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return *(int *)((this->EdgeToElementOffset).AllocatorInstance.Data + (longlong)param_1 * 4) +
         (int)this->_padding_ + param_3;
}

// GetElementIDOnEdge @ 14c80fcf0

int __thiscall
UniformTessellateLocals::FOverlayGenerator<float,3>::GetElementIDOnEdge
          (FOverlayGenerator<float,3> *this,int param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ForElementType<unsigned_int> FVar5;
  
  if ((param_1 < 0) || ((this->SeamEdges).NumBits <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5c6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  FVar5 = (this->SeamEdges).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<unsigned_int>)0x0) {
    FVar5 = (ForElementType<unsigned_int>)&this->SeamEdges;
  }
  if ((*(uint *)((longlong)FVar5 + (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4)
       >> (param_1 & 0x1fU) & 1) != 0) {
    param_3 = (uint)(*(int *)(*(longlong *)
                               (*(longlong *)(this->_padding_ + 0x1c0) +
                               (ulonglong)((uint)param_1 >> 9) * 8) + 8 +
                             (ulonglong)(param_1 & 0x1ff) * 0x10) != param_2) + param_3 * 2;
  }
  uVar4 = 0;
  if (param_1 < (this->EdgeToElementOffset).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return *(int *)((this->EdgeToElementOffset).AllocatorInstance.Data + (longlong)param_1 * 4) +
         (int)this->_padding_ + param_3;
}

// GetElementIDOnEdge @ 14c80fe20

int __thiscall
UniformTessellateLocals::FOverlayGenerator<float,4>::GetElementIDOnEdge
          (FOverlayGenerator<float,4> *this,int param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ForElementType<unsigned_int> FVar5;
  
  if ((param_1 < 0) || ((this->SeamEdges).NumBits <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5c6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  FVar5 = (this->SeamEdges).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<unsigned_int>)0x0) {
    FVar5 = (ForElementType<unsigned_int>)&this->SeamEdges;
  }
  if ((*(uint *)((longlong)FVar5 + (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4)
       >> (param_1 & 0x1fU) & 1) != 0) {
    param_3 = (uint)(*(int *)(*(longlong *)
                               (*(longlong *)(this->_padding_ + 0x1c0) +
                               (ulonglong)((uint)param_1 >> 9) * 8) + 8 +
                             (ulonglong)(param_1 & 0x1ff) * 0x10) != param_2) + param_3 * 2;
  }
  uVar4 = 0;
  if (param_1 < (this->EdgeToElementOffset).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return *(int *)((this->EdgeToElementOffset).AllocatorInstance.Data + (longlong)param_1 * 4) +
         (int)this->_padding_ + param_3;
}

// GetInputMeshElementID @ 14c8101d0

int __thiscall
UniformTessellateLocals::FOverlayGenerator<float,2>::GetInputMeshElementID
          (FOverlayGenerator<float,2> *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = UE::Geometry::TDynamicMeshOverlay<float,2>::GetElementIDAtVertex
                    (this->Overlay,param_1,param_2);
  return iVar1;
}

// GetInputMeshElementID @ 14c8101f0

int __thiscall
UniformTessellateLocals::FOverlayGenerator<float,3>::GetInputMeshElementID
          (FOverlayGenerator<float,3> *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = UE::Geometry::TDynamicMeshOverlay<float,3>::GetElementIDAtVertex
                    (this->Overlay,param_1,param_2);
  return iVar1;
}

// GetInputMeshElementID @ 14c810210

int __thiscall
UniformTessellateLocals::FOverlayGenerator<float,4>::GetInputMeshElementID
          (FOverlayGenerator<float,4> *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = UE::Geometry::TDynamicMeshOverlay<float,4>::GetElementIDAtVertex
                    (this->Overlay,param_1,param_2);
  return iVar1;
}

// GetInputMeshElementValue @ 14c8102c0

void __thiscall
UniformTessellateLocals::FOverlayGenerator<float,2>::GetInputMeshElementValue
          (FOverlayGenerator<float,2> *this,int param_1,int param_2,float *param_3)

{
  TDynamicMeshOverlay<float,2> *this_00;
  uint uVar1;
  
  this_00 = this->Overlay;
  uVar1 = UE::Geometry::TDynamicMeshOverlay<float,2>::GetElementIDAtVertex(this_00,param_1,param_2);
  if (uVar1 != 0xffffffff) {
    *param_3 = *(float *)(*(longlong *)
                           ((this_00->Elements).Blocks.AllocatorInstance.Data +
                           (ulonglong)((uVar1 & 0x7fffffff) >> 8) * 8) +
                         (ulonglong)(uVar1 * 2 & 0x1ff) * 4);
    param_3[1] = *(float *)(*(longlong *)
                             ((this_00->Elements).Blocks.AllocatorInstance.Data +
                             (ulonglong)((uVar1 & 0x7fffffff) >> 8) * 8) +
                           (ulonglong)(uVar1 * 2 + 1 & 0x1ff) * 4);
  }
  return;
}

// GetInputMeshElementValue @ 14c810340

void __thiscall
UniformTessellateLocals::FOverlayGenerator<float,3>::GetInputMeshElementValue
          (FOverlayGenerator<float,3> *this,int param_1,int param_2,float *param_3)

{
  TDynamicMeshOverlay<float,3> *this_00;
  uint uVar1;
  int iVar2;
  
  this_00 = this->Overlay;
  iVar2 = UE::Geometry::TDynamicMeshOverlay<float,3>::GetElementIDAtVertex(this_00,param_1,param_2);
  if (iVar2 != -1) {
    uVar1 = iVar2 * 3;
    *param_3 = *(float *)(*(longlong *)
                           ((this_00->Elements).Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar1 >> 9) * 8) + (ulonglong)(uVar1 & 0x1ff) * 4);
    param_3[1] = *(float *)(*(longlong *)
                             ((this_00->Elements).Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar1 + 1 >> 9) * 8) + (ulonglong)(uVar1 + 1 & 0x1ff) * 4);
    param_3[2] = *(float *)(*(longlong *)
                             ((this_00->Elements).Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar1 + 2 >> 9) * 8) + (ulonglong)(uVar1 + 2 & 0x1ff) * 4);
  }
  return;
}

// GetInputMeshElementValue @ 14c8103d0

void __thiscall
UniformTessellateLocals::FOverlayGenerator<float,4>::GetInputMeshElementValue
          (FOverlayGenerator<float,4> *this,int param_1,int param_2,float *param_3)

{
  uint uVar1;
  TDynamicMeshOverlay<float,4> *this_00;
  uint uVar2;
  
  this_00 = this->Overlay;
  uVar2 = UE::Geometry::TDynamicMeshOverlay<float,4>::GetElementIDAtVertex(this_00,param_1,param_2);
  if (uVar2 != 0xffffffff) {
    uVar1 = uVar2 * 4;
    *param_3 = *(float *)(*(longlong *)
                           ((this_00->Elements).Blocks.AllocatorInstance.Data +
                           (ulonglong)((uVar2 & 0x3fffffff) >> 7) * 8) +
                         (ulonglong)(uVar1 & 0x1ff) * 4);
    param_3[1] = *(float *)(*(longlong *)
                             ((this_00->Elements).Blocks.AllocatorInstance.Data +
                             (ulonglong)((uVar2 & 0x3fffffff) >> 7) * 8) +
                           (ulonglong)(uVar1 + 1 & 0x1ff) * 4);
    param_3[2] = *(float *)(*(longlong *)
                             ((this_00->Elements).Blocks.AllocatorInstance.Data +
                             (ulonglong)((uVar2 & 0x3fffffff) >> 7) * 8) +
                           (ulonglong)(uVar1 + 2 & 0x1ff) * 4);
    param_3[3] = *(float *)(*(longlong *)
                             ((this_00->Elements).Blocks.AllocatorInstance.Data +
                             (ulonglong)((uVar2 & 0x3fffffff) >> 7) * 8) +
                           (ulonglong)(uVar1 + 3 & 0x1ff) * 4);
  }
  return;
}

// Initialize @ 14c8149e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UniformTessellateLocals::FOverlayGenerator<float,2>::Initialize(FOverlayGenerator<float,2> *this)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  TDynamicMeshOverlay<float,2> *pTVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  longlong lVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  ForElementType<unsigned_int> FVar15;
  int iVar16;
  ForElementType<unsigned_int> FVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  ForElementType<unsigned_int> local_78;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_a8;
  uVar19 = *(uint *)(this->_padding_ + 0x200);
  local_78.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_60 = CONCAT44(0x80,uVar19);
  uVar18 = uVar19 + 0x1f >> 5;
  if (uVar19 + 0x1f >> 5 != 0) {
    if (4 < uVar18) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&local_78,0,uVar18,4);
      local_60 = CONCAT44(uVar18 << 5,(uint)local_60);
    }
    FVar15 = (ForElementType<unsigned_int>)&local_78;
    if (local_78.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar15 = local_78.SecondaryData;
    }
    memset((void *)FVar15,0,(ulonglong)uVar18 << 2);
    uVar18 = (uint)local_60 & 0x8000001f;
    if ((int)uVar18 < 0) {
      uVar18 = (uVar18 - 1 | 0xffffffe0) + 1;
    }
    uVar19 = (uint)local_60;
    if (uVar18 != 0) {
      FVar15 = (ForElementType<unsigned_int>)&local_78;
      if (local_78.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar15 = local_78.SecondaryData;
      }
      puVar2 = (uint *)((longlong)FVar15 +
                       (longlong)
                       ((int)((uint)local_60 + ((int)(uint)local_60 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)uVar18 & 0x1f);
      uVar19 = (uint)local_60;
    }
  }
  pTVar1 = &this->SeamEdges;
  if (pTVar1 != (TBitArray<FDefaultBitArrayAllocator> *)&local_78) {
    if (local_78.SecondaryData == (ForElementType<unsigned_int>)0x0) {
      *(undefined8 *)(pTVar1->AllocatorInstance).InlineData = local_78.InlineData._0_8_;
      *(undefined8 *)((this->SeamEdges).AllocatorInstance.InlineData + 8) =
           local_78.InlineData._8_8_;
    }
    FVar15 = (this->SeamEdges).AllocatorInstance.SecondaryData;
    if (FVar15 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar15);
      uVar19 = (uint)local_60;
    }
    iVar24 = local_60._4_4_;
    (this->SeamEdges).AllocatorInstance.SecondaryData = local_78.SecondaryData;
    local_78.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_60 = 0;
    (this->SeamEdges).NumBits = uVar19;
    (this->SeamEdges).MaxBits = iVar24;
  }
  if (local_78.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_78.SecondaryData);
  }
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum
            (&this->EdgeToElementOffset,*(int *)(this->_padding_ + 0x200),Default);
  lVar22 = this->_padding_;
  iVar24 = 0;
  uVar19 = 0;
  if (0 < *(int *)(lVar22 + 0x200)) {
    uVar18 = 1;
    lVar23 = 0;
    do {
      iVar14 = (this->EdgeToElementOffset).ArrayNum;
      uVar12 = 0;
      if ((int)uVar19 < iVar14) {
        uVar12 = ~uVar19 >> 0x1f;
      }
      if (uVar12 == 0) {
        local_88 = (longlong)(int)uVar19;
        local_80 = (longlong)iVar14;
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      *(int *)((this->EdgeToElementOffset).AllocatorInstance.Data + lVar23) = iVar24;
      uVar5 = *(undefined8 *)
               (*(longlong *)(*(longlong *)(this->_padding_ + 0x1c0) + (ulonglong)(uVar19 >> 9) * 8)
                + 8 + (ulonglong)(uVar19 & 0x1ff) * 0x10);
      bVar10 = UE::Geometry::TDynamicMeshOverlay<float,2>::IsSeamEdge
                         (this->Overlay,uVar19,(bool *)0x0);
      if ((bVar10) && ((int)((ulonglong)uVar5 >> 0x20) != -1)) {
        bVar10 = true;
      }
      else {
        bVar10 = false;
      }
      if ((((int)uVar19 < 0) || ((this->SeamEdges).NumBits <= (int)uVar19)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FVar15 = (this->SeamEdges).AllocatorInstance.SecondaryData;
      FVar17 = (ForElementType<unsigned_int>)pTVar1;
      if (FVar15 != (ForElementType<unsigned_int>)0x0) {
        FVar17 = FVar15;
      }
      uVar12 = uVar19;
      if ((int)uVar19 < 0) {
        uVar12 = uVar19 + 0x1f;
      }
      uVar13 = *(uint *)((longlong)FVar17 + (longlong)((int)uVar12 >> 5) * 4);
      if (bVar10) {
        uVar13 = uVar18 | uVar13;
      }
      else {
        uVar13 = ~uVar18 & uVar13;
      }
      *(uint *)((longlong)FVar17 + (longlong)((int)uVar12 >> 5) * 4) = uVar13;
      iVar14 = (int)this->_padding_;
      lVar22 = this->_padding_;
      iVar16 = iVar14 * 2;
      if (!bVar10) {
        iVar16 = iVar14;
      }
      uVar19 = uVar19 + 1;
      iVar24 = iVar24 + iVar16;
      uVar18 = uVar18 << 1 | (uint)((int)uVar18 < 0);
      lVar23 = lVar23 + 4;
    } while ((int)uVar19 < *(int *)(lVar22 + 0x200));
  }
  iVar21 = (this->Overlay->ElementsRefCounts).RefCounts.CurBlockUsed +
           (this->Overlay->ElementsRefCounts).RefCounts.CurBlock * 0x200;
  *(int *)&this->_padding_ = iVar24;
  iVar14 = (int)this->_padding_;
  iVar16 = iVar14 + 2;
  *(int *)&this->_padding_ = iVar21;
  lVar9 = this->_padding_;
  iVar14 = ((iVar14 + 3) * iVar16) / 2 + iVar16 * -3 + 3;
  *(int *)((longlong)&this->_padding_ + 4) = iVar14;
  lVar23 = this->_padding_;
  *(int *)((longlong)&this->_padding_ + 4) = iVar21 + iVar14 * *(int *)(lVar22 + 0x170) + iVar24;
  (**(code **)(lVar23 + 0x70))(this,(int)lVar9);
  pTVar6 = this->Overlay;
  uVar19 = 0;
  uVar18 = (pTVar6->ElementsRefCounts).RefCounts.CurBlockUsed +
           (pTVar6->ElementsRefCounts).RefCounts.CurBlock * 0x200;
  if ((uVar18 != 0) &&
     (pFVar7 = (pTVar6->ElementsRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar7 - 1U))) {
    uVar19 = 1;
    bVar10 = uVar18 == 1;
    if ((int)uVar18 < 2) goto LAB_14c814d68;
    do {
      lVar22 = *(longlong *)(pFVar7 + (ulonglong)(uVar19 >> 9) * 8);
      if ((*(short *)(lVar22 + (ulonglong)(uVar19 & 0x1ff) * 2) != 0) &&
         (*(short *)(lVar22 + (ulonglong)(uVar19 & 0x1ff) * 2) != -1)) break;
      uVar19 = uVar19 + 1;
    } while ((int)uVar19 < (int)uVar18);
  }
  bVar10 = uVar19 == uVar18;
LAB_14c814d68:
  if (!bVar10) {
LAB_14c814d80:
    do {
      uVar12 = uVar19 * 2;
      uVar20 = uVar12 + 1;
      pFVar7 = (this->Overlay->Elements).Blocks.AllocatorInstance.Data;
      uVar3 = *(undefined4 *)
               (*(longlong *)(pFVar7 + (ulonglong)((uVar19 & 0x7fffffff) >> 8) * 8) +
               (ulonglong)(uVar12 & 0x1ff) * 4);
      iVar24 = (int)this->_padding_;
      local_80 = (longlong)iVar24;
      uVar4 = *(undefined4 *)
               (*(longlong *)(pFVar7 + (ulonglong)(uVar20 >> 9) * 8) +
               (ulonglong)(uVar12 + 1 & 0x1ff) * 4);
      uVar13 = 0;
      if ((int)uVar19 < iVar24) {
        uVar13 = ~uVar19 >> 0x1f;
      }
      if (uVar13 == 0) {
        local_88 = (longlong)(int)uVar19;
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      *(undefined1 *)((longlong)(int)uVar19 + this->_padding_) = 1;
      iVar24 = (int)this->_padding_;
      local_80 = (longlong)iVar24;
      uVar13 = 0;
      if ((int)uVar12 < iVar24) {
        uVar13 = ~uVar12 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (local_88 = (longlong)(int)uVar12,
         bVar10 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(undefined4 *)(this->_padding_ + (longlong)(int)uVar12 * 4) = uVar3;
      iVar24 = (int)this->_padding_;
      local_80 = (longlong)iVar24;
      uVar12 = 0;
      if ((int)uVar20 < iVar24) {
        uVar12 = ~uVar20 >> 0x1f;
      }
      if (uVar12 == 0) {
        local_88 = (longlong)(int)uVar20;
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      uVar19 = uVar19 + 1;
      *(undefined4 *)(this->_padding_ + (longlong)(int)uVar20 * 4) = uVar4;
      if ((int)uVar19 < (int)uVar18) {
        do {
          lVar22 = *(longlong *)
                    ((pTVar6->ElementsRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar19 >> 9) * 8);
          if ((*(short *)(lVar22 + (ulonglong)(uVar19 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar22 + (ulonglong)(uVar19 & 0x1ff) * 2) != -1)) goto LAB_14c814d80;
          uVar19 = uVar19 + 1;
        } while ((int)uVar19 < (int)uVar18);
      }
    } while (uVar19 != uVar18);
  }
  return;
}

// Initialize @ 14c814f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UniformTessellateLocals::FOverlayGenerator<float,3>::Initialize(FOverlayGenerator<float,3> *this)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  TDynamicMeshOverlay<float,3> *pTVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  longlong lVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  ForElementType<unsigned_int> FVar15;
  int iVar16;
  ForElementType<unsigned_int> FVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  ForElementType<unsigned_int> local_88;
  undefined8 local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_b8;
  uVar19 = *(uint *)(this->_padding_ + 0x200);
  local_88.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_70 = CONCAT44(0x80,uVar19);
  uVar18 = uVar19 + 0x1f >> 5;
  if (uVar19 + 0x1f >> 5 != 0) {
    if (4 < uVar18) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&local_88,0,uVar18,4);
      local_70 = CONCAT44(uVar18 << 5,(uint)local_70);
    }
    FVar15 = (ForElementType<unsigned_int>)&local_88;
    if (local_88.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar15 = local_88.SecondaryData;
    }
    memset((void *)FVar15,0,(ulonglong)uVar18 << 2);
    uVar18 = (uint)local_70 & 0x8000001f;
    if ((int)uVar18 < 0) {
      uVar18 = (uVar18 - 1 | 0xffffffe0) + 1;
    }
    uVar19 = (uint)local_70;
    if (uVar18 != 0) {
      FVar15 = (ForElementType<unsigned_int>)&local_88;
      if (local_88.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar15 = local_88.SecondaryData;
      }
      puVar2 = (uint *)((longlong)FVar15 +
                       (longlong)
                       ((int)((uint)local_70 + ((int)(uint)local_70 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)uVar18 & 0x1f);
      uVar19 = (uint)local_70;
    }
  }
  pTVar1 = &this->SeamEdges;
  if (pTVar1 != (TBitArray<FDefaultBitArrayAllocator> *)&local_88) {
    if (local_88.SecondaryData == (ForElementType<unsigned_int>)0x0) {
      *(undefined8 *)(pTVar1->AllocatorInstance).InlineData = local_88.InlineData._0_8_;
      *(undefined8 *)((this->SeamEdges).AllocatorInstance.InlineData + 8) =
           local_88.InlineData._8_8_;
    }
    FVar15 = (this->SeamEdges).AllocatorInstance.SecondaryData;
    if (FVar15 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar15);
      uVar19 = (uint)local_70;
    }
    iVar25 = local_70._4_4_;
    (this->SeamEdges).AllocatorInstance.SecondaryData = local_88.SecondaryData;
    local_88.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_70 = 0;
    (this->SeamEdges).NumBits = uVar19;
    (this->SeamEdges).MaxBits = iVar25;
  }
  if (local_88.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_88.SecondaryData);
  }
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum
            (&this->EdgeToElementOffset,*(int *)(this->_padding_ + 0x200),Default);
  lVar21 = this->_padding_;
  iVar25 = 0;
  uVar19 = 0;
  if (0 < *(int *)(lVar21 + 0x200)) {
    uVar18 = 1;
    lVar22 = 0;
    do {
      iVar14 = (this->EdgeToElementOffset).ArrayNum;
      uVar24 = 0;
      if ((int)uVar19 < iVar14) {
        uVar24 = ~uVar19 >> 0x1f;
      }
      if (uVar24 == 0) {
        local_98 = (longlong)(int)uVar19;
        local_90 = (longlong)iVar14;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      *(int *)((this->EdgeToElementOffset).AllocatorInstance.Data + lVar22) = iVar25;
      uVar6 = *(undefined8 *)
               (*(longlong *)(*(longlong *)(this->_padding_ + 0x1c0) + (ulonglong)(uVar19 >> 9) * 8)
                + 8 + (ulonglong)(uVar19 & 0x1ff) * 0x10);
      bVar11 = UE::Geometry::TDynamicMeshOverlay<float,3>::IsSeamEdge
                         (this->Overlay,uVar19,(bool *)0x0);
      if ((bVar11) && ((int)((ulonglong)uVar6 >> 0x20) != -1)) {
        bVar11 = true;
      }
      else {
        bVar11 = false;
      }
      if ((((int)uVar19 < 0) || ((this->SeamEdges).NumBits <= (int)uVar19)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar15 = (this->SeamEdges).AllocatorInstance.SecondaryData;
      FVar17 = (ForElementType<unsigned_int>)pTVar1;
      if (FVar15 != (ForElementType<unsigned_int>)0x0) {
        FVar17 = FVar15;
      }
      uVar24 = uVar19;
      if ((int)uVar19 < 0) {
        uVar24 = uVar19 + 0x1f;
      }
      uVar13 = *(uint *)((longlong)FVar17 + (longlong)((int)uVar24 >> 5) * 4);
      if (bVar11) {
        uVar13 = uVar18 | uVar13;
      }
      else {
        uVar13 = ~uVar18 & uVar13;
      }
      *(uint *)((longlong)FVar17 + (longlong)((int)uVar24 >> 5) * 4) = uVar13;
      iVar14 = (int)this->_padding_;
      lVar21 = this->_padding_;
      iVar16 = iVar14 * 2;
      if (!bVar11) {
        iVar16 = iVar14;
      }
      uVar19 = uVar19 + 1;
      iVar25 = iVar25 + iVar16;
      uVar18 = uVar18 << 1 | (uint)((int)uVar18 < 0);
      lVar22 = lVar22 + 4;
    } while ((int)uVar19 < *(int *)(lVar21 + 0x200));
  }
  iVar20 = (this->Overlay->ElementsRefCounts).RefCounts.CurBlockUsed +
           (this->Overlay->ElementsRefCounts).RefCounts.CurBlock * 0x200;
  *(int *)&this->_padding_ = iVar25;
  iVar14 = (int)this->_padding_;
  iVar16 = iVar14 + 2;
  *(int *)&this->_padding_ = iVar20;
  lVar10 = this->_padding_;
  iVar14 = ((iVar14 + 3) * iVar16) / 2 + iVar16 * -3 + 3;
  *(int *)((longlong)&this->_padding_ + 4) = iVar14;
  lVar22 = this->_padding_;
  *(int *)((longlong)&this->_padding_ + 4) = iVar20 + iVar14 * *(int *)(lVar21 + 0x170) + iVar25;
  (**(code **)(lVar22 + 0x70))(this,(int)lVar10);
  pTVar7 = this->Overlay;
  uVar19 = 0;
  uVar18 = (pTVar7->ElementsRefCounts).RefCounts.CurBlockUsed +
           (pTVar7->ElementsRefCounts).RefCounts.CurBlock * 0x200;
  if ((uVar18 != 0) &&
     (pFVar8 = (pTVar7->ElementsRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar8 - 1U))) {
    uVar19 = 1;
    bVar11 = uVar18 == 1;
    if ((int)uVar18 < 2) goto LAB_14c8152d8;
    do {
      lVar21 = *(longlong *)(pFVar8 + (ulonglong)(uVar19 >> 9) * 8);
      if ((*(short *)(lVar21 + (ulonglong)(uVar19 & 0x1ff) * 2) != 0) &&
         (*(short *)(lVar21 + (ulonglong)(uVar19 & 0x1ff) * 2) != -1)) break;
      uVar19 = uVar19 + 1;
    } while ((int)uVar19 < (int)uVar18);
  }
  bVar11 = uVar19 == uVar18;
LAB_14c8152d8:
  if (!bVar11) {
LAB_14c8152f1:
    do {
      uVar24 = uVar19 * 3;
      uVar23 = uVar24 + 1;
      pFVar8 = (this->Overlay->Elements).Blocks.AllocatorInstance.Data;
      uVar3 = *(undefined4 *)
               (*(longlong *)(pFVar8 + (ulonglong)(uVar24 >> 9) * 8) +
               (ulonglong)(uVar24 & 0x1ff) * 4);
      uVar4 = *(undefined4 *)
               (*(longlong *)(pFVar8 + (ulonglong)(uVar23 >> 9) * 8) +
               (ulonglong)(uVar23 & 0x1ff) * 4);
      iVar25 = (int)this->_padding_;
      local_90 = (longlong)iVar25;
      uVar5 = *(undefined4 *)
               (*(longlong *)(pFVar8 + (ulonglong)(uVar24 + 2 >> 9) * 8) +
               (ulonglong)(uVar24 + 2 & 0x1ff) * 4);
      uVar13 = 0;
      if ((int)uVar19 < iVar25) {
        uVar13 = ~uVar19 >> 0x1f;
      }
      if (uVar13 == 0) {
        local_98 = (longlong)(int)uVar19;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      *(undefined1 *)((longlong)(int)uVar19 + this->_padding_) = 1;
      iVar25 = (int)this->_padding_;
      local_90 = (longlong)iVar25;
      uVar13 = 0;
      if ((int)uVar24 < iVar25) {
        uVar13 = ~uVar24 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (local_98 = (longlong)(int)uVar24,
         bVar11 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      *(undefined4 *)(this->_padding_ + (longlong)(int)uVar24 * 4) = uVar3;
      iVar25 = (int)this->_padding_;
      local_90 = (longlong)iVar25;
      uVar13 = 0;
      if ((int)uVar23 < iVar25) {
        uVar13 = ~uVar23 >> 0x1f;
      }
      if (uVar13 == 0) {
        local_98 = (longlong)(int)uVar23;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      uVar24 = uVar24 + 2;
      *(undefined4 *)(this->_padding_ + (longlong)(int)uVar23 * 4) = uVar4;
      iVar25 = (int)this->_padding_;
      local_90 = (longlong)iVar25;
      uVar13 = 0;
      if ((int)uVar24 < iVar25) {
        uVar13 = ~uVar24 >> 0x1f;
      }
      if (uVar13 == 0) {
        local_98 = (longlong)(int)uVar24;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      uVar19 = uVar19 + 1;
      *(undefined4 *)(this->_padding_ + (longlong)(int)uVar24 * 4) = uVar5;
      if ((int)uVar19 < (int)uVar18) {
        do {
          lVar21 = *(longlong *)
                    ((pTVar7->ElementsRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar19 >> 9) * 8);
          if ((*(short *)(lVar21 + (ulonglong)(uVar19 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar21 + (ulonglong)(uVar19 & 0x1ff) * 2) != -1)) goto LAB_14c8152f1;
          uVar19 = uVar19 + 1;
        } while ((int)uVar19 < (int)uVar18);
      }
    } while (uVar19 != uVar18);
  }
  return;
}

// Initialize @ 14c815540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UniformTessellateLocals::FOverlayGenerator<float,4>::Initialize(FOverlayGenerator<float,4> *this)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  TDynamicMeshOverlay<float,4> *pTVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  longlong lVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  ForElementType<unsigned_int> FVar16;
  int iVar17;
  ForElementType<unsigned_int> FVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  longlong lVar25;
  longlong lVar26;
  int iVar27;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  ForElementType<unsigned_int> local_98;
  undefined8 local_80;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_c8;
  uVar20 = *(uint *)(this->_padding_ + 0x200);
  local_98.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_80 = CONCAT44(0x80,uVar20);
  uVar19 = uVar20 + 0x1f >> 5;
  if (uVar20 + 0x1f >> 5 != 0) {
    if (4 < uVar19) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&local_98,0,uVar19,4);
      local_80 = CONCAT44(uVar19 << 5,(uint)local_80);
    }
    FVar16 = (ForElementType<unsigned_int>)&local_98;
    if (local_98.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar16 = local_98.SecondaryData;
    }
    memset((void *)FVar16,0,(ulonglong)uVar19 << 2);
    uVar19 = (uint)local_80 & 0x8000001f;
    if ((int)uVar19 < 0) {
      uVar19 = (uVar19 - 1 | 0xffffffe0) + 1;
    }
    uVar20 = (uint)local_80;
    if (uVar19 != 0) {
      FVar16 = (ForElementType<unsigned_int>)&local_98;
      if (local_98.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar16 = local_98.SecondaryData;
      }
      puVar2 = (uint *)((longlong)FVar16 +
                       (longlong)
                       ((int)((uint)local_80 + ((int)(uint)local_80 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)uVar19 & 0x1f);
      uVar20 = (uint)local_80;
    }
  }
  pTVar1 = &this->SeamEdges;
  if (pTVar1 != (TBitArray<FDefaultBitArrayAllocator> *)&local_98) {
    if (local_98.SecondaryData == (ForElementType<unsigned_int>)0x0) {
      *(undefined8 *)(pTVar1->AllocatorInstance).InlineData = local_98.InlineData._0_8_;
      *(undefined8 *)((this->SeamEdges).AllocatorInstance.InlineData + 8) =
           local_98.InlineData._8_8_;
    }
    FVar16 = (this->SeamEdges).AllocatorInstance.SecondaryData;
    if (FVar16 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar16);
      uVar20 = (uint)local_80;
    }
    iVar27 = local_80._4_4_;
    (this->SeamEdges).AllocatorInstance.SecondaryData = local_98.SecondaryData;
    local_98.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_80 = 0;
    (this->SeamEdges).NumBits = uVar20;
    (this->SeamEdges).MaxBits = iVar27;
  }
  if (local_98.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_98.SecondaryData);
  }
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum
            (&this->EdgeToElementOffset,*(int *)(this->_padding_ + 0x200),Default);
  lVar25 = this->_padding_;
  iVar27 = 0;
  uVar20 = 0;
  if (0 < *(int *)(lVar25 + 0x200)) {
    uVar19 = 1;
    lVar26 = 0;
    do {
      iVar15 = (this->EdgeToElementOffset).ArrayNum;
      uVar23 = 0;
      if ((int)uVar20 < iVar15) {
        uVar23 = ~uVar20 >> 0x1f;
      }
      if (uVar23 == 0) {
        local_a8 = (longlong)(int)uVar20;
        local_a0 = (longlong)iVar15;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar12) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      *(int *)((this->EdgeToElementOffset).AllocatorInstance.Data + lVar26) = iVar27;
      uVar7 = *(undefined8 *)
               (*(longlong *)(*(longlong *)(this->_padding_ + 0x1c0) + (ulonglong)(uVar20 >> 9) * 8)
                + 8 + (ulonglong)(uVar20 & 0x1ff) * 0x10);
      bVar12 = UE::Geometry::TDynamicMeshOverlay<float,4>::IsSeamEdge
                         (this->Overlay,uVar20,(bool *)0x0);
      if ((bVar12) && ((int)((ulonglong)uVar7 >> 0x20) != -1)) {
        bVar12 = true;
      }
      else {
        bVar12 = false;
      }
      if ((((int)uVar20 < 0) || ((this->SeamEdges).NumBits <= (int)uVar20)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar13)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      FVar16 = (this->SeamEdges).AllocatorInstance.SecondaryData;
      FVar18 = (ForElementType<unsigned_int>)pTVar1;
      if (FVar16 != (ForElementType<unsigned_int>)0x0) {
        FVar18 = FVar16;
      }
      uVar23 = uVar20;
      if ((int)uVar20 < 0) {
        uVar23 = uVar20 + 0x1f;
      }
      uVar14 = *(uint *)((longlong)FVar18 + (longlong)((int)uVar23 >> 5) * 4);
      if (bVar12) {
        uVar14 = uVar19 | uVar14;
      }
      else {
        uVar14 = ~uVar19 & uVar14;
      }
      *(uint *)((longlong)FVar18 + (longlong)((int)uVar23 >> 5) * 4) = uVar14;
      iVar15 = (int)this->_padding_;
      lVar25 = this->_padding_;
      iVar17 = iVar15 * 2;
      if (!bVar12) {
        iVar17 = iVar15;
      }
      uVar20 = uVar20 + 1;
      iVar27 = iVar27 + iVar17;
      uVar19 = uVar19 << 1 | (uint)((int)uVar19 < 0);
      lVar26 = lVar26 + 4;
    } while ((int)uVar20 < *(int *)(lVar25 + 0x200));
  }
  iVar24 = (this->Overlay->ElementsRefCounts).RefCounts.CurBlockUsed +
           (this->Overlay->ElementsRefCounts).RefCounts.CurBlock * 0x200;
  *(int *)&this->_padding_ = iVar27;
  iVar15 = (int)this->_padding_;
  iVar17 = iVar15 + 2;
  *(int *)&this->_padding_ = iVar24;
  lVar11 = this->_padding_;
  iVar15 = ((iVar15 + 3) * iVar17) / 2 + iVar17 * -3 + 3;
  *(int *)((longlong)&this->_padding_ + 4) = iVar15;
  lVar26 = this->_padding_;
  *(int *)((longlong)&this->_padding_ + 4) = iVar24 + iVar15 * *(int *)(lVar25 + 0x170) + iVar27;
  (**(code **)(lVar26 + 0x70))(this,(int)lVar11);
  pTVar8 = this->Overlay;
  uVar20 = 0;
  uVar19 = (pTVar8->ElementsRefCounts).RefCounts.CurBlock * 0x200 +
           (pTVar8->ElementsRefCounts).RefCounts.CurBlockUsed;
  if ((uVar19 != 0) &&
     (pFVar9 = (pTVar8->ElementsRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar9 - 1U))) {
    uVar20 = 1;
    bVar12 = uVar19 == 1;
    if ((int)uVar19 < 2) goto LAB_14c8158c8;
    do {
      lVar25 = *(longlong *)(pFVar9 + (ulonglong)(uVar20 >> 9) * 8);
      if ((*(short *)(lVar25 + (ulonglong)(uVar20 & 0x1ff) * 2) != 0) &&
         (*(short *)(lVar25 + (ulonglong)(uVar20 & 0x1ff) * 2) != -1)) break;
      uVar20 = uVar20 + 1;
    } while ((int)uVar20 < (int)uVar19);
  }
  bVar12 = uVar20 == uVar19;
LAB_14c8158c8:
  if (!bVar12) {
LAB_14c8158f0:
    do {
      uVar23 = uVar20 * 4;
      uVar21 = uVar23 + 1;
      pFVar9 = (this->Overlay->Elements).Blocks.AllocatorInstance.Data;
      uVar3 = *(undefined4 *)
               (*(longlong *)(pFVar9 + (ulonglong)((uVar20 & 0x3fffffff) >> 7) * 8) +
               (ulonglong)(uVar23 & 0x1ff) * 4);
      uVar4 = *(undefined4 *)
               (*(longlong *)(pFVar9 + (ulonglong)(uVar21 >> 9) * 8) +
               (ulonglong)(uVar23 + 1 & 0x1ff) * 4);
      uVar5 = *(undefined4 *)
               (*(longlong *)(pFVar9 + (ulonglong)((uVar20 & 0x3fffffff) >> 7) * 8) +
               (ulonglong)(uVar23 + 2 & 0x1ff) * 4);
      iVar27 = (int)this->_padding_;
      local_a0 = (longlong)iVar27;
      uVar6 = *(undefined4 *)
               (*(longlong *)(pFVar9 + (ulonglong)((uVar20 & 0x3fffffff) >> 7) * 8) +
               (ulonglong)(uVar23 + 3 & 0x1ff) * 4);
      uVar14 = 0;
      if ((int)uVar20 < iVar27) {
        uVar14 = ~uVar20 >> 0x1f;
      }
      if (uVar14 == 0) {
        local_a8 = (longlong)(int)uVar20;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar12) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      *(undefined1 *)((longlong)(int)uVar20 + this->_padding_) = 1;
      iVar27 = (int)this->_padding_;
      local_a0 = (longlong)iVar27;
      uVar14 = 0;
      if ((int)uVar23 < iVar27) {
        uVar14 = ~uVar23 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (local_a8 = (longlong)(int)uVar23,
         bVar12 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      *(undefined4 *)(this->_padding_ + (longlong)(int)uVar23 * 4) = uVar3;
      iVar27 = (int)this->_padding_;
      local_a0 = (longlong)iVar27;
      uVar14 = 0;
      if ((int)uVar21 < iVar27) {
        uVar14 = ~uVar21 >> 0x1f;
      }
      if (uVar14 == 0) {
        local_a8 = (longlong)(int)uVar21;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar12) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      uVar22 = uVar23 + 2;
      *(undefined4 *)(this->_padding_ + (longlong)(int)uVar21 * 4) = uVar4;
      iVar27 = (int)this->_padding_;
      local_a0 = (longlong)iVar27;
      uVar14 = 0;
      if ((int)uVar22 < iVar27) {
        uVar14 = ~uVar22 >> 0x1f;
      }
      if (uVar14 == 0) {
        local_a8 = (longlong)(int)uVar22;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar12) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      uVar23 = uVar23 + 3;
      *(undefined4 *)(this->_padding_ + (longlong)(int)uVar22 * 4) = uVar5;
      iVar27 = (int)this->_padding_;
      local_a0 = (longlong)iVar27;
      uVar14 = 0;
      if ((int)uVar23 < iVar27) {
        uVar14 = ~uVar23 >> 0x1f;
      }
      if (uVar14 == 0) {
        local_a8 = (longlong)(int)uVar23;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar12) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      uVar20 = uVar20 + 1;
      *(undefined4 *)(this->_padding_ + (longlong)(int)uVar23 * 4) = uVar6;
      if ((int)uVar20 < (int)uVar19) {
        do {
          lVar25 = *(longlong *)
                    ((pTVar8->ElementsRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar20 >> 9) * 8);
          if ((*(short *)(lVar25 + (ulonglong)(uVar20 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar25 + (ulonglong)(uVar20 & 0x1ff) * 2) != -1)) goto LAB_14c8158f0;
          uVar20 = uVar20 + 1;
        } while ((int)uVar20 < (int)uVar19);
      }
    } while (uVar20 != uVar19);
  }
  return;
}

// IsValidTriangle @ 14c818dd0

bool __thiscall
UniformTessellateLocals::FOverlayGenerator<float,2>::IsValidTriangle
          (FOverlayGenerator<float,2> *this,int param_1)

{
  longlong lVar1;
  
  lVar1 = this->_padding_;
  if ((((-1 < param_1) && (param_1 < *(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144))) &&
      ((ushort)(*(short *)(*(longlong *)
                            (*(longlong *)(lVar1 + 0x148) + (ulonglong)((uint)param_1 >> 9) * 8) +
                          (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe)) &&
     (-1 < *(int *)(*(longlong *)
                     ((this->Overlay->ElementTriangles).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)(param_1 * 3) >> 9) * 8) +
                   (ulonglong)(param_1 * 3 & 0x1ff) * 4))) {
    return true;
  }
  return false;
}

// IsValidTriangle @ 14c818e60

bool __thiscall
UniformTessellateLocals::FOverlayGenerator<float,3>::IsValidTriangle
          (FOverlayGenerator<float,3> *this,int param_1)

{
  longlong lVar1;
  
  lVar1 = this->_padding_;
  if ((((-1 < param_1) && (param_1 < *(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144))) &&
      ((ushort)(*(short *)(*(longlong *)
                            (*(longlong *)(lVar1 + 0x148) + (ulonglong)((uint)param_1 >> 9) * 8) +
                          (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe)) &&
     (-1 < *(int *)(*(longlong *)
                     ((this->Overlay->ElementTriangles).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)(param_1 * 3) >> 9) * 8) +
                   (ulonglong)(param_1 * 3 & 0x1ff) * 4))) {
    return true;
  }
  return false;
}

// IsValidTriangle @ 14c818ef0

bool __thiscall
UniformTessellateLocals::FOverlayGenerator<float,4>::IsValidTriangle
          (FOverlayGenerator<float,4> *this,int param_1)

{
  longlong lVar1;
  
  lVar1 = this->_padding_;
  if ((((-1 < param_1) && (param_1 < *(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144))) &&
      ((ushort)(*(short *)(*(longlong *)
                            (*(longlong *)(lVar1 + 0x148) + (ulonglong)((uint)param_1 >> 9) * 8) +
                          (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe)) &&
     (-1 < *(int *)(*(longlong *)
                     ((this->Overlay->ElementTriangles).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)(param_1 * 3) >> 9) * 8) +
                   (ulonglong)(param_1 * 3 & 0x1ff) * 4))) {
    return true;
  }
  return false;
}

