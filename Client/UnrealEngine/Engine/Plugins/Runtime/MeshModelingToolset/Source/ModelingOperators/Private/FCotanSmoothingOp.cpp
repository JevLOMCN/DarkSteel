// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 6

// FCotanSmoothingOp @ 14c9461b0

FCotanSmoothingOp * __thiscall
UE::Geometry::FCotanSmoothingOp::FCotanSmoothingOp
          (FCotanSmoothingOp *this,FDynamicMesh3 *param_1,FOptions *param_2)

{
  FSmoothingOpBase::FSmoothingOpBase((FSmoothingOpBase *)this,param_1,param_2);
  *(undefined ***)this = &___7FCotanSmoothingOp_Geometry_UE__6B_;
  return this;
}

// FCotanSmoothingOp @ 14c9461e0

FCotanSmoothingOp * __thiscall
UE::Geometry::FCotanSmoothingOp::FCotanSmoothingOp
          (FCotanSmoothingOp *this,FDynamicMesh3 *param_1,FOptions *param_2,
          FDynamicSubmesh3 *param_3)

{
  FSmoothingOpBase::FSmoothingOpBase((FSmoothingOpBase *)this,param_1,param_2,param_3);
  *(undefined ***)this = &___7FCotanSmoothingOp_Geometry_UE__6B_;
  return this;
}

// ~FCotanSmoothingOp @ 14c949460

void __thiscall UE::Geometry::FCotanSmoothingOp::~FCotanSmoothingOp(FCotanSmoothingOp *this)

{
  *(undefined ***)this = &___7FCotanSmoothingOp_Geometry_UE__6B_;
  FSmoothingOpBase::~FSmoothingOpBase((FSmoothingOpBase *)this);
  return;
}

// CalculateResult @ 14c961a00

void __thiscall
UE::Geometry::FCotanSmoothingOp::CalculateResult(FCotanSmoothingOp *this,FProgressCancel *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  Smooth(this,param_1);
  if (param_1 != (FProgressCancel *)0x0) {
    if (param_1->WasCancelled != false) {
      return;
    }
    Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar1 = *(code **)&param_1->CancelF;
    plVar2 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar5 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar5 = plVar2;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    bVar3 = (bool)(*pcVar1)(uVar4);
    param_1->WasCancelled = bVar3;
    if (bVar3 != false) {
      return;
    }
  }
  FSmoothingOpBase::UpdateResultMesh((FSmoothingOpBase *)this);
  return;
}

// GetSmoothPower @ 14c9803a0

double __thiscall
UE::Geometry::FCotanSmoothingOp::GetSmoothPower(FCotanSmoothingOp *this,int param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar4 = (double)*(float *)&this->field_0x94;
  if (this->field_0xd0 == '\0') {
    return dVar4;
  }
  if (*(longlong *)&this->field_0xc0 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      dVar4 = (double)(*pcVar1)();
      return dVar4;
    }
  }
  fVar3 = TIndexedWeightMap<float>::GetValue
                    (*(TIndexedWeightMap<float> **)&this->field_0xc0,param_1);
  dVar6 = (double)fVar3;
  dVar5 = 0.0;
  if (0.0 <= dVar6) {
    if (__real_3ff0000000000000 <= dVar6) {
      dVar6 = __real_3ff0000000000000;
    }
    if (dVar6 < 0.0) goto LAB_14c980438;
  }
  else {
    dVar6 = 0.0;
  }
  dVar5 = dVar6;
  if (__real_3ff0000000000000 <= dVar6) {
    dVar5 = __real_3ff0000000000000;
  }
LAB_14c980438:
  return (double)*(float *)&this->field_0xd4 * dVar4 * (__real_3ff0000000000000 - dVar5) +
         dVar5 * dVar4;
}

// Smooth @ 14c9863d0

void __thiscall
UE::Geometry::FCotanSmoothingOp::Smooth(FCotanSmoothingOp *this,FProgressCancel *param_1)

{
  undefined8 *puVar1;
  double *pdVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  uint uVar16;
  undefined8 uVar17;
  longlong *plVar18;
  uint uVar19;
  int iVar20;
  longlong lVar21;
  float fVar22;
  double dVar23;
  longlong *local_res8;
  ulonglong in_stack_ffffffffffffff38;
  double local_b8;
  double dStack_b0;
  double local_a8;
  
  uVar19 = 0;
  if (this->field_0x9a == '\0') {
    uVar19 = 5;
  }
  if (param_1 == (FProgressCancel *)0x0) {
    MeshDeformation::ConstructConstrainedMeshSmoother
              ((ELaplacianWeightScheme)&local_res8,(FDynamicMesh3 *)(ulonglong)uVar19);
  }
  else {
    if (param_1->WasCancelled != false) {
      return;
    }
    Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar5 = *(code **)&param_1->CancelF;
    plVar6 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar18 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar6 != (longlong *)0x0) {
      plVar18 = plVar6;
    }
    uVar17 = (**(code **)(*plVar18 + 8))();
    bVar15 = (bool)(*pcVar5)(uVar17);
    param_1->WasCancelled = bVar15;
    if (bVar15 != false) {
      return;
    }
    MeshDeformation::ConstructConstrainedMeshSmoother
              ((ELaplacianWeightScheme)&local_res8,(FDynamicMesh3 *)(ulonglong)uVar19);
    if (param_1->WasCancelled != false) goto LAB_14c986a06;
    Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar5 = *(code **)&param_1->CancelF;
    plVar6 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar18 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar6 != (longlong *)0x0) {
      plVar18 = plVar6;
    }
    uVar17 = (**(code **)(*plVar18 + 8))();
    bVar15 = (bool)(*pcVar5)(uVar17);
    param_1->WasCancelled = bVar15;
    if (bVar15 != false) goto LAB_14c986a06;
  }
  dVar14 = __real_412e847e00000000;
  dVar13 = __real_3eb0c6f7a0000000;
  dVar12 = __real_3ff0000000000000;
  if (__real_3f1a36e2eb1c432d <= (double)*(float *)&this->field_0x94) {
    if (*(float *)&this->field_0x94 <= __real_461c4000) {
      lVar7 = *(longlong *)&this->field_0x8;
      iVar20 = *(int *)(lVar7 + 0x20) * 0x200 + *(int *)(lVar7 + 0x24);
      uVar19 = 0;
      if (((iVar20 != 0) &&
          (uVar19 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar7 + 0x28) - 1U))) &&
         (uVar19 = 1, 1 < iVar20)) {
        do {
          lVar8 = (*(undefined8 **)(lVar7 + 0x28))[uVar19 >> 9];
          if ((*(short *)(lVar8 + (ulonglong)(uVar19 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar8 + (ulonglong)(uVar19 & 0x1ff) * 2) != -1)) break;
          uVar19 = uVar19 + 1;
        } while ((int)uVar19 < iVar20);
      }
      iVar3 = *(int *)(lVar7 + 0x20);
      iVar4 = *(int *)(lVar7 + 0x24);
joined_r0x00014c9866d6:
      if (uVar19 != iVar3 * 0x200 + iVar4) {
        do {
          dVar9 = (double)*(float *)&this->field_0x94;
          lVar8 = *(longlong *)
                   (*(longlong *)(*(longlong *)&this->field_0x8 + 0x10) +
                   (ulonglong)(uVar19 >> 9) * 8);
          pdVar2 = (double *)(lVar8 + (ulonglong)(uVar19 & 0x1ff) * 0x18);
          local_b8 = *pdVar2;
          dStack_b0 = pdVar2[1];
          local_a8 = *(double *)(lVar8 + 0x10 + (ulonglong)(uVar19 & 0x1ff) * 0x18);
          if (this->field_0xd0 != '\0') {
            if ((*(longlong *)&this->field_0xc0 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar15)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            fVar22 = TIndexedWeightMap<float>::GetValue
                               (*(TIndexedWeightMap<float> **)&this->field_0xc0,uVar19);
            if (0.0 <= fVar22) {
              dVar23 = (double)fVar22;
              if (dVar12 <= (double)fVar22) {
                dVar23 = dVar12;
              }
              if (0.0 <= dVar23) goto LAB_14c9867bf;
              dVar23 = 0.0;
            }
            else {
              dVar23 = 0.0;
LAB_14c9867bf:
              if (dVar12 <= dVar23) {
                dVar23 = dVar12;
              }
            }
            dVar9 = (double)*(float *)&this->field_0xd4 * dVar9 * (dVar12 - dVar23) + dVar23 * dVar9
            ;
          }
          dVar23 = dVar14;
          if (dVar13 <= dVar9) {
            dVar23 = dVar12 / dVar9;
          }
          if (*(double *)&this->field_0xb8 != 0.0) {
            if (*(longlong *)&this->field_0xa8 == 0) {
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("SmoothOptions.BaseNormals.IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\SmoothingOps\\CotanSmoothingOp.cpp"
                                  ,0x59,L"");
              if (bVar15) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if ((*(longlong *)&this->field_0xa8 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar15)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            lVar8 = *(longlong *)&this->field_0xa8;
            uVar16 = 0;
            if ((int)uVar19 < *(int *)(lVar8 + 0x10)) {
              uVar16 = ~uVar19 >> 0x1f;
            }
            if (uVar16 == 0) {
              in_stack_ffffffffffffff38 = (ulonglong)(int)uVar19;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            dVar9 = *(double *)&this->field_0xb8;
            lVar21 = (longlong)(int)uVar19;
            lVar8 = *(longlong *)(lVar8 + 8);
            local_b8 = local_b8 + dVar9 * *(double *)(lVar8 + lVar21 * 0x18);
            dStack_b0 = dStack_b0 + dVar9 * *(double *)(lVar8 + 8 + lVar21 * 0x18);
            local_a8 = local_a8 + dVar9 * *(double *)(lVar8 + 0x10 + lVar21 * 0x18);
          }
          in_stack_ffffffffffffff38 = in_stack_ffffffffffffff38 & 0xffffffffffffff00;
          (**(code **)(*local_res8 + 8))
                    (local_res8,uVar19,dVar23,&local_b8,in_stack_ffffffffffffff38);
          uVar19 = uVar19 + 1;
          if (iVar20 <= (int)uVar19) goto joined_r0x00014c9866d6;
          while( true ) {
            lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x28) + (ulonglong)(uVar19 >> 9) * 8);
            if ((*(short *)(lVar8 + (ulonglong)(uVar19 & 0x1ff) * 2) != 0) &&
               (*(short *)(lVar8 + (ulonglong)(uVar19 & 0x1ff) * 2) != -1)) break;
            uVar19 = uVar19 + 1;
            if (iVar20 <= (int)uVar19) goto joined_r0x00014c9866d6;
          }
        } while( true );
      }
      if ((param_1 != (FProgressCancel *)0x0) &&
         (bVar15 = FProgressCancel::Cancelled(param_1), bVar15)) goto LAB_14c986a06;
    }
    (**(code **)(*local_res8 + 0x40))(local_res8,&this->field_0xd8);
  }
  else {
    lVar7 = *(longlong *)&this->field_0x8;
    iVar20 = *(int *)(lVar7 + 0x24) + *(int *)(lVar7 + 0x20) * 0x200;
    uVar19 = 0;
    if (((iVar20 != 0) &&
        (uVar19 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar7 + 0x28) - 1U))) &&
       (uVar19 = 1, 1 < iVar20)) {
      do {
        lVar8 = (*(undefined8 **)(lVar7 + 0x28))[uVar19 >> 9];
        if ((*(short *)(lVar8 + (ulonglong)(uVar19 & 0x1ff) * 2) != 0) &&
           (*(short *)(lVar8 + (ulonglong)(uVar19 & 0x1ff) * 2) != -1)) break;
        uVar19 = uVar19 + 1;
      } while ((int)uVar19 < iVar20);
    }
    iVar3 = *(int *)(lVar7 + 0x20);
    iVar4 = *(int *)(lVar7 + 0x24);
joined_r0x00014c986565:
    if (uVar19 != iVar3 * 0x200 + iVar4) {
      while( true ) {
        lVar21 = (longlong)(int)uVar19;
        lVar8 = *(longlong *)
                 (*(longlong *)(*(longlong *)&this->field_0x8 + 0x10) + (ulonglong)(uVar19 >> 9) * 8
                 );
        puVar1 = (undefined8 *)(lVar8 + (ulonglong)(uVar19 & 0x1ff) * 0x18);
        uVar10 = *puVar1;
        uVar11 = puVar1[1];
        uVar17 = *(undefined8 *)(lVar8 + 0x10 + (ulonglong)(uVar19 & 0x1ff) * 0x18);
        uVar16 = 0;
        if ((int)uVar19 < *(int *)&this->field_0xe0) {
          uVar16 = ~uVar19 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar8 = *(longlong *)&this->field_0xd8;
        uVar19 = uVar19 + 1;
        puVar1 = (undefined8 *)(lVar8 + lVar21 * 0x18);
        *puVar1 = uVar10;
        puVar1[1] = uVar11;
        *(undefined8 *)(lVar8 + 0x10 + lVar21 * 0x18) = uVar17;
        if (iVar20 <= (int)uVar19) break;
        while( true ) {
          lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x28) + (ulonglong)(uVar19 >> 9) * 8);
          if ((*(short *)(lVar8 + (ulonglong)(uVar19 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar8 + (ulonglong)(uVar19 & 0x1ff) * 2) != -1)) break;
          uVar19 = uVar19 + 1;
          if (iVar20 <= (int)uVar19) goto joined_r0x00014c986565;
        }
      }
      goto joined_r0x00014c986565;
    }
  }
LAB_14c986a06:
  if (local_res8 != (longlong *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  return;
}

