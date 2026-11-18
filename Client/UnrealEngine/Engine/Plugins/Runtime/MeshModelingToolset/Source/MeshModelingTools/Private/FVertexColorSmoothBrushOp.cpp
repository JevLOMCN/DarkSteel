// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 5

// FVertexColorSmoothBrushOp @ 14ccba870

FVertexColorSmoothBrushOp * __thiscall
UE::Geometry::FVertexColorSmoothBrushOp::FVertexColorSmoothBrushOp(FVertexColorSmoothBrushOp *this)

{
  undefined8 uVar1;
  
  this->_padding_ = (longlong)&___7FMeshSculptBrushOp__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0x3ff0000000000000;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->_padding_ = uVar1;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0x3ff0000000000000;
  this->_padding_ = (longlong)&___7FVertexColorSmoothBrushOp_Geometry_UE__6B_;
  this->BrushSpeedTuning = 6.0;
  (this->TempElementIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TempElementIDs).ArrayNum = 0;
  (this->TempElementIDs).ArrayMax = 0;
  (this->ElementIDVertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ElementIDVertices).ArrayNum = 0;
  (this->ElementIDVertices).ArrayMax = 0;
  (this->ElementIDVertexIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ElementIDVertexIndices).ArrayNum = 0;
  (this->ElementIDVertexIndices).ArrayMax = 0;
  (this->UniqueVertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UniqueVertices).ArrayNum = 0;
  (this->UniqueVertices).ArrayMax = 0;
  (this->SoftenedVertexColors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SoftenedVertexColors).ArrayNum = 0;
  (this->SoftenedVertexColors).ArrayMax = 0;
  (this->SmoothedVertexColors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SmoothedVertexColors).ArrayNum = 0;
  (this->SmoothedVertexColors).ArrayMax = 0;
  return this;
}

// operator() @ 14ccca830

void __thiscall
`UE::Geometry::FVertexColorSmoothBrushOp::ApplyStampToVertexColors'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  TDynamicMeshOverlay<float,4> *this_00;
  longlong lVar10;
  code *pcVar11;
  bool bVar12;
  uint uVar13;
  ulonglong uVar14;
  uint *puVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  ForAnyElementType FVar18;
  uint uVar19;
  int iVar20;
  float fVar21;
  undefined1 local_res8 [8];
  int local_res10;
  uint local_res18;
  FScriptContainerElement *local_res20;
  TArray<int,TSizedDefaultAllocator<32>_> local_98 [5];
  
  iVar20 = 0;
  lVar16 = (longlong)param_1;
  local_98[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98[0].ArrayNum = 0;
  local_98[0].ArrayMax = 0;
  local_res10 = param_1;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,0x10,&local_98[0].AllocatorInstance,0,&local_98[0].ArrayMax);
  lVar9 = *(longlong *)((longlong)this + 8);
  uVar19 = (uint)~param_1 >> 0x1f;
  this_00 = (TDynamicMeshOverlay<float,4> *)**(undefined8 **)this;
  uVar13 = 0;
  if (param_1 < *(int *)(lVar9 + 0x98)) {
    uVar13 = uVar19;
  }
  if (uVar13 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  UE::Geometry::TDynamicMeshOverlay<float,4>::GetVertexElements
            (this_00,*(int *)(*(longlong *)(lVar9 + 0x90) + lVar16 * 4),local_98);
  lVar9 = *(longlong *)((longlong)this + 8);
  uVar13 = 0;
  if (param_1 < *(int *)(lVar9 + 0xa8)) {
    uVar13 = uVar19;
  }
  if (uVar13 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  puVar1 = (undefined8 *)(*(longlong *)(lVar9 + 0xa0) + lVar16 * 0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  uVar14 = (ulonglong)local_98[0].ArrayNum;
  local_res18 = local_98[0].ArrayNum;
  pFVar17 = local_98[0].AllocatorInstance.Data + uVar14 * 4;
  FVar18.Data = local_98[0].AllocatorInstance.Data;
  local_res20 = pFVar17;
  do {
    while( true ) {
      if (local_98[0].ArrayNum != (int)uVar14) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (FVar18.Data == pFVar17) {
        if (1 < iVar20) {
          lVar9 = *(longlong *)((longlong)this + 8);
          uVar13 = 0;
          if (local_res10 < *(int *)(lVar9 + 0xa8)) {
            uVar13 = uVar19;
          }
          if (uVar13 == 0) {
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar12) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
          lVar9 = *(longlong *)(lVar9 + 0xa0);
          pfVar3 = (float *)(lVar9 + lVar16 * 0x10);
          fVar6 = pfVar3[1];
          fVar7 = pfVar3[2];
          fVar8 = pfVar3[3];
          fVar21 = (float)(__real_3ff0000000000000 / (double)iVar20);
          pfVar4 = (float *)(lVar9 + lVar16 * 0x10);
          *pfVar4 = fVar21 * *pfVar3;
          pfVar4[1] = fVar21 * fVar6;
          pfVar4[2] = fVar21 * fVar7;
          pfVar4[3] = fVar21 * fVar8;
        }
        if (local_98[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98[0].AllocatorInstance.Data);
        }
        return;
      }
      uVar13 = *(uint *)FVar18.Data;
      puVar15 = (uint *)**(undefined8 **)((longlong)this + 0x10);
      puVar2 = puVar15 + *(int *)(*(undefined8 **)((longlong)this + 0x10) + 1);
      if (puVar15 != puVar2) break;
LAB_14cccaafd:
      uVar14 = (ulonglong)local_res18;
      FVar18.Data = FVar18.Data + 4;
    }
    do {
      if (*puVar15 == uVar13) {
        uVar5 = uVar13 * 4;
        lVar9 = *(longlong *)((longlong)this + 8);
        lVar10 = *(longlong *)(**(longlong **)this + 0x48);
        fVar6 = *(float *)(*(longlong *)(lVar10 + (ulonglong)((uVar13 & 0x3fffffff) >> 7) * 8) +
                          (ulonglong)(uVar5 & 0x1ff) * 4);
        fVar7 = *(float *)(*(longlong *)(lVar10 + (ulonglong)((uVar13 & 0x3fffffff) >> 7) * 8) +
                          (ulonglong)(uVar5 + 1 & 0x1ff) * 4);
        fVar8 = *(float *)(*(longlong *)(lVar10 + (ulonglong)((uVar13 & 0x3fffffff) >> 7) * 8) +
                          (ulonglong)(uVar5 + 2 & 0x1ff) * 4);
        fVar21 = *(float *)(*(longlong *)(lVar10 + (ulonglong)((uVar13 & 0x3fffffff) >> 7) * 8) +
                           (ulonglong)(uVar5 + 3 & 0x1ff) * 4);
        uVar13 = 0;
        if (local_res10 < *(int *)(lVar9 + 0xa8)) {
          uVar13 = uVar19;
        }
        if (uVar13 == 0) {
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar12) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        lVar9 = *(longlong *)(lVar9 + 0xa0);
        iVar20 = iVar20 + 1;
        *(float *)(lVar9 + lVar16 * 0x10) = fVar6 + *(float *)(lVar9 + lVar16 * 0x10);
        *(float *)(lVar9 + 4 + lVar16 * 0x10) = fVar7 + *(float *)(lVar9 + 4 + lVar16 * 0x10);
        *(float *)(lVar9 + 8 + lVar16 * 0x10) = fVar8 + *(float *)(lVar9 + 8 + lVar16 * 0x10);
        *(float *)(lVar9 + 0xc + lVar16 * 0x10) = fVar21 + *(float *)(lVar9 + 0xc + lVar16 * 0x10);
        pFVar17 = local_res20;
        goto LAB_14cccaafd;
      }
      puVar15 = puVar15 + 1;
    } while (puVar15 != puVar2);
    uVar14 = (ulonglong)local_res18;
    FVar18.Data = FVar18.Data + 4;
  } while( true );
}

// operator() @ 14ccd0c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Geometry::FVertexColorSmoothBrushOp::ApplyStampToVertexColors'::__l2::<lambda_2>::operator()
          (void *this,int param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  int *piVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStackY_238 [32];
  int local_208 [2];
  uint local_200;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  TFunction<int___cdecl(int)> local_1e8;
  TFunction<int___cdecl(int)> local_1b8;
  undefined1 local_188 [64];
  undefined1 local_148 [64];
  longlong local_108 [3];
  longlong *local_f0;
  undefined1 local_e8 [96];
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_238;
  lVar2 = *(longlong *)this;
  iVar15 = 0;
  fVar17 = 0.0;
  fVar18 = 0.0;
  local_200 = (uint)~param_1 >> 0x1f;
  fVar19 = 0.0;
  fVar20 = 0.0;
  uVar13 = 0;
  if (param_1 < *(int *)(lVar2 + 0x98)) {
    uVar13 = local_200;
  }
  if ((uVar13 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  UE::Geometry::FDynamicMesh3::VtxVerticesItr
            ((FDynamicMesh3 *)**(undefined8 **)((longlong)this + 8),
             (MappedValueEnumerable *)local_188,
             *(int *)(*(longlong *)(lVar2 + 0x90) + (longlong)param_1 * 4));
  uVar6 = local_188._8_4_;
  uVar5 = local_188._0_8_;
  local_1e8._0_8_ = local_188._16_8_;
  local_1e8._40_8_ = 0;
  if (local_188._16_8_ != 0) {
    plVar12 = (longlong *)(local_188 + 0x20);
    if ((longlong *)local_188._56_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_188._56_8_;
    }
    (**(code **)*plVar12)(plVar12,&local_1e8.field_0x10);
  }
  UE::Geometry::FSmallListSet::MappedValueIterator::MappedValueIterator
            ((MappedValueIterator *)local_148,(FSmallListSet *)uVar5,uVar6,false,&local_1e8);
  local_1b8._0_8_ = local_188._16_8_;
  local_1b8._40_8_ = 0;
  if (local_188._16_8_ != 0) {
    plVar12 = (longlong *)(local_188 + 0x20);
    if ((longlong *)local_188._56_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_188._56_8_;
    }
    (**(code **)*plVar12)(plVar12,&local_1b8.field_0x10);
  }
  UE::Geometry::FSmallListSet::MappedValueIterator::MappedValueIterator
            ((MappedValueIterator *)local_e8,(FSmallListSet *)local_188._0_8_,local_188._8_4_,true,
             &local_1b8);
  do {
    while( true ) {
      if ((((local_148._0_8_ == local_e8._0_8_) && (local_148._8_4_ == local_e8._8_4_)) &&
          (local_148._24_4_ == local_e8._24_4_)) && (local_148._28_4_ == local_e8._28_4_)) {
        if (local_e8._48_8_ != 0) {
          plVar12 = (longlong *)(local_e8 + 0x40);
          if ((longlong *)local_e8._88_8_ != (longlong *)0x0) {
            plVar12 = (longlong *)local_e8._88_8_;
          }
          (**(code **)(*plVar12 + 0x10))();
        }
        if ((code *)local_148._48_8_ != (code *)0x0) {
          plVar12 = local_108;
          if (local_f0 != (longlong *)0x0) {
            plVar12 = local_f0;
          }
          (**(code **)(*plVar12 + 0x10))();
        }
        if (local_188._16_8_ != 0) {
          plVar12 = (longlong *)(local_188 + 0x20);
          if ((longlong *)local_188._56_8_ != (longlong *)0x0) {
            plVar12 = (longlong *)local_188._56_8_;
          }
          (**(code **)(*plVar12 + 0x10))();
        }
        if (1 < iVar15) {
          fVar16 = (float)(__real_3ff0000000000000 / (double)iVar15);
          fVar17 = fVar17 * fVar16;
          fVar18 = fVar18 * fVar16;
          fVar19 = fVar19 * fVar16;
          fVar20 = fVar20 * fVar16;
        }
        lVar2 = *(longlong *)this;
        uVar13 = 0;
        if (param_1 < *(int *)(lVar2 + 0xb8)) {
          uVar13 = local_200;
        }
        local_1f8 = fVar17;
        fStack_1f4 = fVar18;
        fStack_1f0 = fVar19;
        fStack_1ec = fVar20;
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar1 = (undefined8 *)(*(longlong *)(lVar2 + 0xb0) + (longlong)param_1 * 0x10);
        *puVar1 = CONCAT44(fStack_1f4,local_1f8);
        puVar1[1] = CONCAT44(fStack_1ec,fStack_1f0);
        return;
      }
      local_208[0] = local_148._32_4_;
      UE::Core::Private::Function::CheckCallable((void *)local_148._48_8_);
      uVar5 = local_148._48_8_;
      plVar12 = local_108;
      if (local_f0 != (longlong *)0x0) {
        plVar12 = local_f0;
      }
      uVar10 = (**(code **)(*plVar12 + 8))();
      iVar8 = (*(code *)uVar5)(uVar10,local_208);
      lVar2 = *(longlong *)this;
      piVar3 = *(int **)(lVar2 + 0x90);
      piVar14 = piVar3;
      if (piVar3 != piVar3 + *(int *)(lVar2 + 0x98)) break;
LAB_14ccd0ecc:
      UE::Geometry::FSmallListSet::BaseValueIterator::GotoNext((BaseValueIterator *)local_148);
    }
    do {
      if (*piVar14 == iVar8) {
        uVar13 = (uint)((longlong)piVar14 - (longlong)piVar3 >> 2);
        if (uVar13 != 0xffffffff) {
          uVar9 = 0;
          if ((int)uVar13 < *(int *)(lVar2 + 0xa8)) {
            uVar9 = ~uVar13 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar2 = *(longlong *)(lVar2 + 0xa0);
          lVar11 = (longlong)(int)uVar13;
          iVar15 = iVar15 + 1;
          fVar17 = fVar17 + *(float *)(lVar2 + lVar11 * 0x10);
          fVar18 = fVar18 + *(float *)(lVar2 + 4 + lVar11 * 0x10);
          fVar19 = fVar19 + *(float *)(lVar2 + 8 + lVar11 * 0x10);
          fVar20 = fVar20 + *(float *)(lVar2 + 0xc + lVar11 * 0x10);
        }
        goto LAB_14ccd0ecc;
      }
      piVar14 = piVar14 + 1;
    } while (piVar14 != piVar3 + *(int *)(lVar2 + 0x98));
    UE::Geometry::FSmallListSet::BaseValueIterator::GotoNext((BaseValueIterator *)local_148);
  } while( true );
}

// operator() @ 14ccd2850

void __thiscall
`UE::Geometry::FVertexColorSmoothBrushOp::ApplyStampToVertexColors'::__l2::<lambda_3>::operator()
          (void *this,int param_1)

{
  undefined8 *puVar1;
  float *pfVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  code *pcVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  uint uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  
  lVar4 = *(longlong *)this;
  lVar17 = (longlong)param_1;
  uVar16 = (uint)~param_1 >> 0x1f;
  uVar10 = 0;
  if (param_1 < *(int *)(lVar4 + 0x78)) {
    uVar10 = uVar16;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  lVar5 = *(longlong *)this;
  uVar10 = *(uint *)(*(longlong *)(lVar4 + 0x70) + lVar17 * 4);
  uVar15 = (ulonglong)(uVar10 & 0x1ff);
  lVar4 = *(longlong *)
           (*(longlong *)(**(longlong **)((longlong)this + 8) + 0x10) + (ulonglong)(uVar10 >> 9) * 8
           );
  puVar1 = (undefined8 *)(lVar4 + uVar15 * 0x18);
  local_98 = *puVar1;
  uStack_90 = puVar1[1];
  local_88 = *(undefined8 *)(lVar4 + 0x10 + uVar15 * 0x18);
  if (*(longlong *)(lVar5 + 0x10) == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  puVar1 = *(undefined8 **)(lVar5 + 0x10);
  uVar6 = *(undefined8 *)((longlong)this + 0x10);
  UE::Core::Private::Function::CheckCallable((void *)*puVar1);
  pcVar7 = (code *)*puVar1;
  plVar14 = puVar1 + 2;
  if ((longlong *)puVar1[5] != (longlong *)0x0) {
    plVar14 = (longlong *)puVar1[5];
  }
  uVar12 = (**(code **)(*plVar14 + 8))();
  dVar8 = (double)(*pcVar7)(uVar12,uVar6,&local_98);
  plVar14 = *(longlong **)((longlong)this + 0x28);
  dVar3 = **(double **)((longlong)this + 0x18);
  lVar4 = **(longlong **)((longlong)this + 0x20);
  uVar10 = 0;
  if (param_1 < (int)plVar14[1]) {
    uVar10 = uVar16;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  lVar4 = *(longlong *)(lVar4 + 0x48);
  lVar5 = *(longlong *)this;
  uVar10 = *(uint *)(*plVar14 + lVar17 * 4);
  uVar13 = uVar10 * 4;
  fVar19 = *(float *)(*(longlong *)(lVar4 + (ulonglong)((uVar10 & 0x3fffffff) >> 7) * 8) +
                     (ulonglong)(uVar13 & 0x1ff) * 4);
  fVar21 = *(float *)(*(longlong *)(lVar4 + (ulonglong)((uVar10 & 0x3fffffff) >> 7) * 8) +
                     (ulonglong)(uVar13 + 1 & 0x1ff) * 4);
  fVar22 = *(float *)(*(longlong *)(lVar4 + (ulonglong)((uVar10 & 0x3fffffff) >> 7) * 8) +
                     (ulonglong)(uVar13 + 2 & 0x1ff) * 4);
  fVar18 = *(float *)(*(longlong *)(lVar4 + (ulonglong)((uVar10 & 0x3fffffff) >> 7) * 8) +
                     (ulonglong)(uVar13 + 3 & 0x1ff) * 4);
  uVar13 = 0;
  uVar10 = uVar13;
  if (param_1 < *(int *)(lVar5 + 0x88)) {
    uVar10 = uVar16;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  lVar4 = *(longlong *)this;
  uVar10 = *(uint *)(*(longlong *)(lVar5 + 0x80) + lVar17 * 4);
  uVar11 = uVar13;
  if ((int)uVar10 < *(int *)(lVar4 + 0xb8)) {
    uVar11 = ~uVar10 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  fVar23 = (float)(dVar8 * dVar3);
  pfVar2 = (float *)(*(longlong *)(lVar4 + 0xb0) + (longlong)(int)uVar10 * 0x10);
  fVar20 = __real_3f800000 - fVar23;
  fVar19 = fVar23 * *pfVar2 + fVar19 * fVar20;
  if (0.0 <= fVar19) {
    if (__real_3f800000 <= fVar19) {
      fVar19 = __real_3f800000;
    }
  }
  else {
    fVar19 = 0.0;
  }
  fVar21 = fVar21 * fVar20 + pfVar2[1] * fVar23;
  if (0.0 <= fVar21) {
    if (__real_3f800000 <= fVar21) {
      fVar21 = __real_3f800000;
    }
  }
  else {
    fVar21 = 0.0;
  }
  fVar22 = fVar22 * fVar20 + pfVar2[2] * fVar23;
  if (0.0 <= fVar22) {
    if (__real_3f800000 <= fVar22) {
      fVar22 = __real_3f800000;
    }
  }
  else {
    fVar22 = 0.0;
  }
  fVar20 = fVar18 * fVar20 + pfVar2[3] * fVar23;
  fVar18 = 0.0;
  if ((0.0 <= fVar20) && (fVar18 = fVar20, __real_3f800000 <= fVar20)) {
    fVar18 = __real_3f800000;
  }
  plVar14 = *(longlong **)((longlong)this + 0x30);
  if (param_1 < (int)plVar14[1]) {
    uVar13 = uVar16;
  }
  if (uVar13 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  puVar1 = (undefined8 *)(*plVar14 + lVar17 * 0x10);
  *puVar1 = CONCAT44(fVar21,fVar19);
  puVar1[1] = CONCAT44(fVar18,fVar22);
  return;
}

// ApplyStampToVertexColors @ 14cce29e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FVertexColorSmoothBrushOp::ApplyStampToVertexColors
          (FVertexColorSmoothBrushOp *this,FDynamicMesh3 *param_1,
          TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *param_2,
          TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_4,
          FSculptBrushStamp *param_5,TArray<int,TSizedDefaultAllocator<32>_> *param_6,
          TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_7)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  <lambda_1> local_res8;
  FDynamicMesh3 *local_res10;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *local_res18;
  int local_108 [2];
  double local_100;
  TArrayView<std::nullptr_t,int> local_f8;
  code *local_e8;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> ***local_e0;
  FVertexColorSmoothBrushOp *local_d8;
  FDynamicMesh3 **local_d0;
  TArrayView<std::nullptr_t,int> local_c8;
  code *local_b8;
  FVertexColorSmoothBrushOp **local_b0;
  TArrayView<std::nullptr_t,int> local_a8;
  code *local_98;
  FVertexColorSmoothBrushOp **local_90;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> **local_88;
  FVertexColorSmoothBrushOp *local_80;
  TArray<int,TSizedDefaultAllocator<32>_> *local_78;
  FVertexColorSmoothBrushOp *local_70;
  FDynamicMesh3 **local_68;
  FSculptBrushStamp *local_60;
  double *local_58;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> **local_50;
  TArray<int,TSizedDefaultAllocator<32>_> *local_48;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *local_40;
  
  local_100 = param_5->Power;
  local_res10 = param_1;
  local_res18 = param_2;
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if ((!bVar3) &&
     (bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5139374200154226864>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Public\\Sculpting\\MeshBrushOpBase.h"
                         ,0xb0,"PropertySet.IsValid()"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (pUVar6 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_UVertexColorSmoothBrushOpProps_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) goto LAB_14cce2abb;
  }
  bVar3 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<5139374200154226866>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Public\\Sculpting\\MeshBrushOpBase.h"
                     ,0xb2,"CastResult");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14cce2abb:
  iVar1 = param_6->ArrayNum;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&this->ElementIDVertices,iVar1,No);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&this->ElementIDVertexIndices,iVar1,No);
  if ((param_7->ArrayNum != iVar1) &&
     (bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8931431689427616116>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Public\\Sculpting\\MeshVertexPaintBrushOps.h"
                         ,0x174,"NewColorsOut.Num() == NumElements"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (this->UniqueVertices).ArrayNum = 0;
  if ((this->UniqueVertices).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->UniqueVertices).AllocatorInstance,0,&(this->UniqueVertices).ArrayMax);
  }
  uVar8 = 0;
  lVar9 = 0;
  if (0 < iVar1) {
    do {
      uVar10 = ~uVar8 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar8 < param_6->ArrayNum) {
        uVar4 = uVar10;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar4 = *(uint *)((param_6->AllocatorInstance).Data + lVar9 * 4);
      iVar5 = *(int *)(*(longlong *)
                        (*(longlong *)&local_res18->field_0x60 + (ulonglong)(uVar4 >> 9) * 8) +
                      (ulonglong)(uVar4 & 0x1ff) * 4);
      uVar4 = 0;
      if ((int)uVar8 < (this->ElementIDVertices).ArrayNum) {
        uVar4 = uVar10;
      }
      local_108[0] = iVar5;
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(int *)((this->ElementIDVertices).AllocatorInstance.Data + lVar9 * 4) = iVar5;
      iVar5 = TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                        (&this->UniqueVertices,local_108);
      uVar4 = 0;
      if ((int)uVar8 < (this->ElementIDVertexIndices).ArrayNum) {
        uVar4 = uVar10;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar8 = uVar8 + 1;
      *(int *)((this->ElementIDVertexIndices).AllocatorInstance.Data + lVar9 * 4) = iVar5;
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar1);
  }
  iVar5 = (this->UniqueVertices).ArrayNum;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->SoftenedVertexColors,iVar5,No);
  local_88 = &local_res18;
  local_f8.DataPtr = (void **)0x0;
  local_e8 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FVertexColorSmoothBrushOp::ApplyStampToVertexColors'::__l2::<lambda_1>,void,int>
             ::Call;
  local_e0 = &local_88;
  local_f8.ArrayNum = 0;
  local_res8 = SUB81(this,0);
  local_80 = this;
  local_78 = param_6;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar5,1,(TFunctionRef<void___cdecl(int)> *)&local_e8,local_res8,
             None,&local_f8);
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->SmoothedVertexColors,iVar5,No);
  local_d0 = &local_res10;
  local_c8.DataPtr = (void **)0x0;
  local_b8 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FVertexColorSmoothBrushOp::ApplyStampToVertexColors'::__l2::<lambda_2>,void,int>
             ::Call;
  local_b0 = &local_d8;
  local_c8.ArrayNum = 0;
  local_d8 = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar5,1,(TFunctionRef<void___cdecl(int)> *)&local_b8,local_res8,
             None,&local_c8);
  local_68 = &local_res10;
  local_60 = param_5;
  local_58 = &local_100;
  local_50 = &local_res18;
  local_a8.DataPtr = (void **)0x0;
  local_40 = param_7;
  local_98 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FVertexColorSmoothBrushOp::ApplyStampToVertexColors'::__l2::<lambda_3>,void,int>
             ::Call;
  local_90 = &local_70;
  local_a8.ArrayNum = 0;
  local_70 = this;
  local_48 = param_6;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar1,1,(TFunctionRef<void___cdecl(int)> *)&local_98,local_res8,
             None,&local_a8);
  return;
}

