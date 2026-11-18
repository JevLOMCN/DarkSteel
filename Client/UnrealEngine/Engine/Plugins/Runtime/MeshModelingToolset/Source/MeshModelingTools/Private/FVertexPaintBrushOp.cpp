// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 4

// operator() @ 14cccac00

void __thiscall
`UE::Geometry::FVertexPaintBrushOp::ApplyStampToVertexColors'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  undefined8 *puVar1;
  float *pfVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  uint uVar13;
  undefined8 uVar14;
  TVector4<float> *pTVar15;
  uint uVar16;
  longlong *plVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  double dVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  TVector4<float>_u_0 local_f8;
  TVector4<float>_u_0 local_e8;
  TVector4<float>_u_0 local_d8;
  TVector4<float> local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  
  plVar17 = *(longlong **)this;
  lVar19 = (longlong)param_1;
  uVar21 = (uint)~param_1 >> 0x1f;
  uVar13 = 0;
  if (param_1 < (int)plVar17[1]) {
    uVar13 = uVar21;
  }
  if ((uVar13 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar13 = *(uint *)(*plVar17 + lVar19 * 4);
  lVar20 = (longlong)(int)uVar13;
  uVar23 = *(uint *)(*(longlong *)
                      (*(longlong *)(**(longlong **)((longlong)this + 8) + 0x60) +
                      (ulonglong)(uVar13 >> 9) * 8) + (ulonglong)(uVar13 & 0x1ff) * 4);
  uVar22 = (ulonglong)(uVar23 & 0x1ff);
  lVar4 = *(longlong *)
           (*(longlong *)(**(longlong **)((longlong)this + 0x10) + 0x10) +
           (ulonglong)(uVar23 >> 9) * 8);
  puVar1 = (undefined8 *)(lVar4 + uVar22 * 0x18);
  local_b8 = *puVar1;
  uStack_b0 = puVar1[1];
  local_a8 = *(undefined8 *)(lVar4 + 0x10 + uVar22 * 0x18);
  dVar24 = __real_3ff0000000000000;
  if (**(char **)((longlong)this + 0x18) != '\0') {
    lVar4 = *(longlong *)((longlong)this + 0x20);
    if ((*(longlong *)(lVar4 + 0x10) == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    puVar1 = *(undefined8 **)(lVar4 + 0x10);
    uVar5 = *(undefined8 *)((longlong)this + 0x28);
    UE::Core::Private::Function::CheckCallable((void *)*puVar1);
    pcVar6 = (code *)*puVar1;
    plVar17 = puVar1 + 2;
    if ((longlong *)puVar1[5] != (longlong *)0x0) {
      plVar17 = (longlong *)puVar1[5];
    }
    uVar14 = (**(code **)(*plVar17 + 8))();
    dVar24 = (double)(*pcVar6)(uVar14,uVar5,&local_b8);
  }
  dVar24 = dVar24 * **(double **)((longlong)this + 0x30);
  uVar23 = 0;
  if (*(int *)(**(longlong **)((longlong)this + 0x38) + 0xc0) != 1) {
    plVar17 = *(longlong **)this;
    lVar4 = **(longlong **)((longlong)this + 8);
    uVar13 = uVar23;
    if (param_1 < (int)plVar17[1]) {
      uVar13 = uVar21;
    }
    if ((uVar13 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar4 = *(longlong *)(lVar4 + 0x48);
    fVar25 = (float)dVar24;
    uVar13 = *(uint *)(*plVar17 + lVar19 * 4);
    uVar16 = uVar13 * 4;
    local_e8._s_0.X =
         *(float *)(*(longlong *)(lVar4 + (ulonglong)((uVar13 & 0x3fffffff) >> 7) * 8) +
                   (ulonglong)(uVar16 & 0x1ff) * 4);
    local_e8._s_0.Y =
         *(float *)(*(longlong *)(lVar4 + (ulonglong)((uVar13 & 0x3fffffff) >> 7) * 8) +
                   (ulonglong)(uVar16 + 1 & 0x1ff) * 4);
    local_e8._s_0.Z =
         *(float *)(*(longlong *)(lVar4 + (ulonglong)((uVar13 & 0x3fffffff) >> 7) * 8) +
                   (ulonglong)(uVar16 + 2 & 0x1ff) * 4);
    pTVar15 = *(TVector4<float> **)((longlong)this + 0x48);
    local_e8._s_0.W =
         *(float *)(*(longlong *)(lVar4 + (ulonglong)((uVar13 & 0x3fffffff) >> 7) * 8) +
                   (ulonglong)(uVar16 + 3 & 0x1ff) * 4);
    iVar3 = *(int *)(**(longlong **)((longlong)this + 0x38) + 0xc0);
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        UELocal::BlendColors_Mix<float>
                  ((TVector4<float> *)&local_f8._s_0,(TVector4<float> *)&local_e8._s_0,pTVar15,
                   fVar25);
        goto LAB_14cccb4e5;
      }
      if (iVar3 == 2) {
        fVar26 = __real_3f800000 - fVar25;
        local_f8._s_0.X =
             local_e8._s_0.X * (pTVar15->field0_0x0)._s_0.X * fVar25 + local_e8._s_0.X * fVar26;
        if (0.0 <= local_f8._s_0.X) {
          if (__real_3f800000 <= local_f8._s_0.X) {
            local_f8._s_0.X = __real_3f800000;
          }
        }
        else {
          local_f8._s_0.X = 0.0;
        }
        local_f8._s_0.Y =
             local_e8._s_0.Y * fVar26 + fVar25 * local_e8._s_0.Y * (pTVar15->field0_0x0)._s_0.Y;
        if (0.0 <= local_f8._s_0.Y) {
          if (__real_3f800000 <= local_f8._s_0.Y) {
            local_f8._s_0.Y = __real_3f800000;
          }
        }
        else {
          local_f8._s_0.Y = 0.0;
        }
        local_f8._s_0.Z =
             local_e8._s_0.Z * fVar26 + fVar25 * local_e8._s_0.Z * (pTVar15->field0_0x0)._s_0.Z;
        if (0.0 <= local_f8._s_0.Z) {
          if (__real_3f800000 <= local_f8._s_0.Z) {
            local_f8._s_0.Z = __real_3f800000;
          }
        }
        else {
          local_f8._s_0.Z = 0.0;
        }
        fVar25 = local_e8._s_0.W * fVar26 + fVar25 * local_e8._s_0.W * (pTVar15->field0_0x0)._s_0.W;
        local_f8._s_0.W = 0.0;
        if ((0.0 <= fVar25) && (local_f8._s_0.W = fVar25, __real_3f800000 <= fVar25)) {
          local_f8._s_0.W = __real_3f800000;
        }
        goto LAB_14cccb4e5;
      }
    }
    fVar26 = __real_3f800000 - fVar25;
    local_f8._s_0.X = fVar25 * (pTVar15->field0_0x0)._s_0.X + local_e8._s_0.X * fVar26;
    if (0.0 <= local_f8._s_0.X) {
      if (__real_3f800000 <= local_f8._s_0.X) {
        local_f8._s_0.X = __real_3f800000;
      }
    }
    else {
      local_f8._s_0.X = 0.0;
    }
    local_f8._s_0.Y = fVar25 * (pTVar15->field0_0x0)._s_0.Y + fVar26 * local_e8._s_0.Y;
    if (0.0 <= local_f8._s_0.Y) {
      if (__real_3f800000 <= local_f8._s_0.Y) {
        local_f8._s_0.Y = __real_3f800000;
      }
    }
    else {
      local_f8._s_0.Y = 0.0;
    }
    local_f8._s_0.Z = fVar25 * (pTVar15->field0_0x0)._s_0.Z + local_e8._s_0.Z * fVar26;
    if (0.0 <= local_f8._s_0.Z) {
      if (__real_3f800000 <= local_f8._s_0.Z) {
        local_f8._s_0.Z = __real_3f800000;
      }
    }
    else {
      local_f8._s_0.Z = 0.0;
    }
    fVar25 = fVar25 * (pTVar15->field0_0x0)._s_0.W + local_e8._s_0.W * fVar26;
    local_f8._s_0.W = 0.0;
    if ((0.0 <= fVar25) && (local_f8._s_0.W = fVar25, __real_3f800000 <= fVar25)) {
      local_f8._s_0.W = __real_3f800000;
    }
LAB_14cccb4e5:
    plVar17 = *(longlong **)((longlong)this + 0x58);
    uVar5 = CONCAT44(local_f8._s_0.Y,local_f8._s_0.X);
    uVar14 = CONCAT44(local_f8._s_0.W,local_f8._s_0.Z);
    if (param_1 < (int)plVar17[1]) {
      uVar23 = uVar21;
    }
    if ((uVar23 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    puVar1 = (undefined8 *)(*plVar17 + lVar19 * 0x10);
    *puVar1 = uVar5;
    puVar1[1] = uVar14;
    return;
  }
  plVar17 = *(longlong **)((longlong)this + 0x40);
  uVar18 = ~uVar13 >> 0x1f;
  uVar16 = 0;
  if ((int)uVar13 < (int)plVar17[1]) {
    uVar16 = uVar18;
  }
  if ((uVar16 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  puVar1 = (undefined8 *)(*plVar17 + lVar20 * 0x10);
  local_d8._0_8_ = *puVar1;
  local_d8._8_8_ = puVar1[1];
  pTVar15 = UELocal::BlendColors_Mix<float>
                      (&local_c8,(TVector4<float> *)&local_d8._s_0,
                       *(TVector4<float> **)((longlong)this + 0x48),(float)dVar24);
  uVar5 = *(undefined8 *)&pTVar15->field0_0x0;
  uVar14 = *(undefined8 *)((longlong)&pTVar15->field0_0x0 + 8);
  plVar17 = *(longlong **)((longlong)this + 0x40);
  uVar16 = uVar23;
  if ((int)uVar13 < (int)plVar17[1]) {
    uVar16 = uVar18;
  }
  if ((uVar16 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  puVar1 = (undefined8 *)(*plVar17 + lVar20 * 0x10);
  *puVar1 = uVar5;
  puVar1[1] = uVar14;
  plVar17 = *(longlong **)((longlong)this + 0x40);
  uVar16 = uVar23;
  if ((int)uVar13 < (int)plVar17[1]) {
    uVar16 = uVar18;
  }
  if ((uVar16 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pfVar2 = (float *)(*plVar17 + lVar20 * 0x10);
  fVar25 = *pfVar2;
  fVar26 = pfVar2[1];
  fVar7 = pfVar2[2];
  fVar27 = pfVar2[3];
  plVar17 = *(longlong **)((longlong)this + 0x50);
  uVar16 = uVar23;
  if ((int)uVar13 < (int)plVar17[1]) {
    uVar16 = uVar18;
  }
  if ((uVar16 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pfVar2 = (float *)(*plVar17 + lVar20 * 0x10);
  fVar8 = *pfVar2;
  fVar9 = pfVar2[1];
  fVar10 = pfVar2[2];
  fVar11 = pfVar2[3];
  fVar28 = **(float **)((longlong)this + 0x60);
  iVar3 = *(int *)(**(longlong **)((longlong)this + 0x38) + 0xc0);
  if (iVar3 != 0) {
    if (iVar3 == 1) {
      fVar27 = fVar27 * fVar28;
      fVar28 = __real_3f800000 - fVar27;
      local_108 = fVar11 * fVar8 * fVar28 + fVar27 * fVar25;
      fVar25 = fVar28 * fVar11 + fVar27;
      fStack_100 = fVar11 * fVar10 * fVar28 + fVar7 * fVar27;
      fStack_104 = fVar11 * fVar9 * fVar28 + fVar26 * fVar27;
      if (__real_358637bd < fVar25) {
        local_108 = local_108 / fVar25;
        fStack_104 = fStack_104 / fVar25;
        fStack_100 = fStack_100 / fVar25;
      }
      if (0.0 <= local_108) {
        if (__real_3f800000 <= local_108) {
          local_108 = __real_3f800000;
        }
      }
      else {
        local_108 = 0.0;
      }
      if (0.0 <= fStack_104) {
        if (__real_3f800000 <= fStack_104) {
          fStack_104 = __real_3f800000;
        }
      }
      else {
        fStack_104 = 0.0;
      }
      if (0.0 <= fStack_100) {
        if (__real_3f800000 <= fStack_100) {
          fStack_100 = __real_3f800000;
        }
      }
      else {
        fStack_100 = 0.0;
      }
      fStack_fc = 0.0;
      if ((0.0 <= fVar25) && (fStack_fc = fVar25, __real_3f800000 <= fVar25)) {
        fStack_fc = __real_3f800000;
      }
      goto LAB_14cccb1f8;
    }
    if (iVar3 == 2) {
      fVar29 = __real_3f800000 - fVar28;
      local_108 = fVar25 * fVar8 * fVar28 + fVar29 * fVar8;
      if (0.0 <= local_108) {
        if (__real_3f800000 <= local_108) {
          local_108 = __real_3f800000;
        }
      }
      else {
        local_108 = 0.0;
      }
      fStack_104 = fVar9 * fVar29 + fVar26 * fVar9 * fVar28;
      if (0.0 <= fStack_104) {
        if (__real_3f800000 <= fStack_104) {
          fStack_104 = __real_3f800000;
        }
      }
      else {
        fStack_104 = 0.0;
      }
      fStack_100 = fVar7 * fVar10 * fVar28 + fVar10 * fVar29;
      if (0.0 <= fStack_100) {
        if (__real_3f800000 <= fStack_100) {
          fStack_100 = __real_3f800000;
        }
      }
      else {
        fStack_100 = 0.0;
      }
      fVar25 = fVar27 * fVar11 * fVar28 + fVar11 * fVar29;
      fStack_fc = 0.0;
      if ((0.0 <= fVar25) && (fStack_fc = fVar25, __real_3f800000 <= fVar25)) {
        fStack_fc = __real_3f800000;
      }
      goto LAB_14cccb1f8;
    }
  }
  fVar29 = __real_3f800000 - fVar28;
  local_108 = fVar25 * fVar28 + fVar29 * fVar8;
  if (0.0 <= local_108) {
    if (__real_3f800000 <= local_108) {
      local_108 = __real_3f800000;
    }
  }
  else {
    local_108 = 0.0;
  }
  fStack_104 = fVar9 * fVar29 + fVar26 * fVar28;
  if (0.0 <= fStack_104) {
    if (__real_3f800000 <= fStack_104) {
      fStack_104 = __real_3f800000;
    }
  }
  else {
    fStack_104 = 0.0;
  }
  fStack_100 = fVar10 * fVar29 + fVar7 * fVar28;
  if (0.0 <= fStack_100) {
    if (__real_3f800000 <= fStack_100) {
      fStack_100 = __real_3f800000;
    }
  }
  else {
    fStack_100 = 0.0;
  }
  fVar25 = fVar11 * fVar29 + fVar27 * fVar28;
  fStack_fc = 0.0;
  if ((0.0 <= fVar25) && (fStack_fc = fVar25, __real_3f800000 <= fVar25)) {
    fStack_fc = __real_3f800000;
  }
LAB_14cccb1f8:
  plVar17 = *(longlong **)((longlong)this + 0x58);
  if (param_1 < (int)plVar17[1]) {
    uVar23 = uVar21;
  }
  if ((uVar23 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  puVar1 = (undefined8 *)(*plVar17 + lVar19 * 0x10);
  *puVar1 = CONCAT44(fStack_104,local_108);
  puVar1[1] = CONCAT44(fStack_fc,fStack_100);
  return;
}

// ApplyStampToVertexColors @ 14cce3300

void __thiscall
UE::Geometry::FVertexPaintBrushOp::ApplyStampToVertexColors
          (FVertexPaintBrushOp *this,FDynamicMesh3 *param_1,
          TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *param_2,
          TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_4,
          FSculptBrushStamp *param_5,TArray<int,TSizedDefaultAllocator<32>_> *param_6,
          TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_7)

{
  int iVar1;
  code *pcVar2;
  FSculptBrushStamp *pFVar3;
  bool bVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  undefined4 *puVar7;
  undefined4 local_res8 [2];
  FDynamicMesh3 *local_res10;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *local_res18;
  UObject *local_res20;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  double local_d8;
  TArrayView<std::nullptr_t,int> local_d0;
  code *local_c0;
  TArray<int,TSizedDefaultAllocator<32>_> **local_b8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_b0;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> **local_a8;
  FDynamicMesh3 **local_a0;
  FSculptBrushStamp **local_98;
  FVertexPaintBrushOp *local_90;
  FSculptBrushStamp *local_88;
  double *local_80;
  UObject **local_78;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *local_70;
  undefined4 *local_68;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *local_60;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *local_58;
  undefined4 *local_50;
  
  pFVar3 = param_5;
  local_d8 = param_5->Power;
  local_res10 = param_1;
  local_res18 = param_2;
  bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (!bVar4) {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5139374200154226864>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Public\\Sculpting\\MeshBrushOpBase.h"
                       ,0xb0,"PropertySet.IsValid()");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (pUVar5 != (UObject *)0x0) {
    pUVar6 = Z_Construct_UClass_UVertexColorPaintBrushOpProps_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) goto LAB_14cce33d6;
  }
  pUVar5 = (UObject *)0x0;
  bVar4 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<5139374200154226866>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Public\\Sculpting\\MeshBrushOpBase.h"
                     ,0xb2,"CastResult");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14cce33d6:
  local_res20 = pUVar5;
  puVar7 = (undefined4 *)(**(code **)(*(longlong *)pUVar5 + 0x300))(pUVar5);
  local_58 = param_7;
  local_b0 = param_6;
  local_e8 = *puVar7;
  local_e4 = puVar7[1];
  local_e0 = puVar7[2];
  local_res8[0] = puVar7[3];
  local_dc = local_res8[0];
  if (*(int *)&local_res20[4].field_0x20 == 1) {
    local_dc = 0x3f800000;
  }
  param_5._0_1_ = (<lambda_1>)local_res20[4].field_0x24;
  iVar1 = param_6->ArrayNum;
  if (param_7->ArrayNum != iVar1) {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8931431689427615988>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Public\\Sculpting\\MeshVertexPaintBrushOps.h"
                       ,0xf4,"NewColorsOut.Num() == NumElements");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_a8 = &local_res18;
  local_a0 = &local_res10;
  local_98 = &param_5;
  local_80 = &local_d8;
  local_78 = &local_res20;
  local_70 = param_4;
  local_68 = &local_e8;
  local_50 = local_res8;
  local_c0 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FVertexPaintBrushOp::ApplyStampToVertexColors'::__l2::<lambda_1>,void,int>
             ::Call;
  local_b8 = &local_b0;
  local_d0.DataPtr = (void **)0x0;
  local_d0.ArrayNum = 0;
  local_90 = this;
  local_88 = pFVar3;
  local_60 = param_3;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar1,1,(TFunctionRef<void___cdecl(int)> *)&local_c0,param_5._0_1_,
             None,&local_d0);
  return;
}

// SupportsStrokeType @ 14cd2f5c0

bool __thiscall
UE::Geometry::FVertexPaintBrushOp::SupportsStrokeType
          (FVertexPaintBrushOp *this,EMeshSculptStrokeType param_1)

{
  if (((param_1 != Spacing) && (param_1 != Airbrush)) && (param_1 != Dots)) {
    return false;
  }
  return true;
}

// SupportsVariableSpacing @ 14cd2f640

bool __thiscall
UE::Geometry::FVertexPaintBrushOp::SupportsVariableSpacing(FVertexPaintBrushOp *this)

{
  return true;
}

