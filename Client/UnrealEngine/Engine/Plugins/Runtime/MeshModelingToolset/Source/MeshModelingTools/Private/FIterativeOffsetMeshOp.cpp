// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 5

// operator() @ 14ccd04b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Geometry::FIterativeOffsetMeshOp::Offset_Smoothed'::__l31::<lambda_1>::operator()
          (void *this,int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  code *pcVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  uint uVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  undefined1 auStack_158 [32];
  longlong local_138;
  longlong local_130;
  longlong local_128;
  code *local_120;
  code *local_118;
  longlong *local_110;
  TVector<double>_u_0 local_108;
  undefined1 local_f0 [24];
  undefined8 local_d8 [2];
  longlong local_c8;
  longlong local_b8 [3];
  longlong *local_a0;
  undefined1 local_98;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_158;
  lVar7 = *(longlong *)this;
  lVar19 = (longlong)param_1;
  uVar21 = 0;
  uVar15 = 0;
  if ((-1 < param_1) &&
     (lVar8 = *(longlong *)(lVar7 + 8),
     param_1 < *(int *)(lVar8 + 0x20) * 0x200 + *(int *)(lVar8 + 0x24))) {
    uVar18 = (uint)*(ushort *)
                    (*(longlong *)
                      (*(longlong *)(lVar8 + 0x28) + (ulonglong)((uint)param_1 >> 9) * 8) +
                    (ulonglong)(param_1 & 0x1ff) * 2);
    if (uVar18 == 0xffff) {
      uVar18 = uVar21;
    }
    if (1 < uVar18) {
      uVar20 = (uint)~param_1 >> 0x1f;
      uVar18 = uVar21;
      if (param_1 < *(int *)(lVar7 + 200)) {
        uVar18 = uVar20;
      }
      if ((uVar18 == 0) &&
         (local_138 = lVar19, local_130 = (longlong)*(int *)(lVar7 + 200),
         bVar14 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (*(char *)(lVar19 + *(longlong *)(lVar7 + 0xc0)) == '\0') {
        local_128 = *(longlong *)this;
        local_110 = &local_128;
        local_118 = UE::Core::Private::Function::
                    TFunctionRefCaller<``UE::Geometry::FIterativeOffsetMeshOp::Offset_Smoothed'::__l31::<lambda_1>::operator()'::__l2::<lambda_1>,UE::Math::TVector<double>,int>
                    ::Call;
        UE::Geometry::FMeshWeights::UniformCentroid
                  ((TVector<double> *)&local_108._s_0,*(FDynamicMesh3 **)(local_128 + 8),param_1,
                   (TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *)&local_118);
        lVar7 = *(longlong *)this;
        dVar1 = *(double *)(lVar7 + 0x118);
        if (param_1 < *(int *)(lVar7 + 0x90)) {
          uVar21 = uVar20;
        }
        if ((uVar21 == 0) &&
           (local_138 = lVar19, local_130 = (longlong)*(int *)(lVar7 + 0x90),
           bVar14 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar14)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        lVar7 = *(longlong *)(lVar7 + 0x88);
        dVar11 = __real_3ff0000000000000 - dVar1;
        plVar17 = *(longlong **)((longlong)this + 8);
        iVar6 = (int)plVar17[1];
        dVar2 = *(double *)(lVar7 + lVar19 * 0x18);
        dVar3 = *(double *)(lVar7 + 8 + lVar19 * 0x18);
        dVar4 = *(double *)(lVar7 + 0x10 + lVar19 * 0x18);
        uVar21 = uVar15;
        if (param_1 < iVar6) {
          uVar21 = uVar20;
        }
        if ((uVar21 == 0) &&
           (local_138 = lVar19, local_130 = (longlong)iVar6,
           bVar14 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar14)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        lVar7 = *plVar17;
        *(double *)(lVar7 + lVar19 * 0x18) = local_108._s_0.X * dVar1 + dVar11 * dVar2;
        *(double *)(lVar7 + 8 + lVar19 * 0x18) = dVar11 * dVar3 + local_108._s_0.Y * dVar1;
        *(double *)(lVar7 + 0x10 + lVar19 * 0x18) = dVar11 * dVar4 + local_108._s_0.Z * dVar1;
        if (*(char *)(*(longlong *)this + 0x120) == '\0') {
          return;
        }
        plVar17 = *(longlong **)((longlong)this + 0x10);
        plVar9 = *(longlong **)((longlong)this + 8);
        local_d8[0] = __real_7fefffffffffffff;
        local_c8 = 0;
        local_a0 = (longlong *)0x0;
        local_120 = *(code **)(*plVar17 + 0x50);
        local_98 = 0;
        iVar6 = (int)plVar9[1];
        if (param_1 < iVar6) {
          uVar15 = uVar20;
        }
        if ((uVar15 == 0) &&
           (local_138 = lVar19, local_130 = (longlong)iVar6,
           bVar14 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar14)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        puVar16 = (undefined8 *)(*local_120)(plVar17,local_f0,*plVar9 + lVar19 * 0x18,local_d8);
        plVar17 = *(longlong **)((longlong)this + 8);
        uVar12 = *puVar16;
        uVar13 = puVar16[1];
        uVar5 = puVar16[2];
        iVar6 = (int)plVar17[1];
        uVar21 = 0;
        if (param_1 < iVar6) {
          uVar21 = uVar20;
        }
        if ((uVar21 == 0) &&
           (local_138 = lVar19, local_130 = (longlong)iVar6,
           bVar14 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar14)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        lVar7 = *plVar17;
        puVar16 = (undefined8 *)(lVar7 + lVar19 * 0x18);
        *puVar16 = uVar12;
        puVar16[1] = uVar13;
        *(undefined8 *)(lVar7 + 0x10 + lVar19 * 0x18) = uVar5;
        if (local_c8 == 0) {
          return;
        }
        plVar17 = local_b8;
        if (local_a0 != (longlong *)0x0) {
          plVar17 = local_a0;
        }
        (**(code **)(*plVar17 + 0x10))();
        return;
      }
    }
  }
  lVar7 = *(longlong *)this;
  iVar6 = *(int *)(lVar7 + 0x90);
  local_130 = (longlong)iVar6;
  uVar21 = 0;
  if (param_1 < iVar6) {
    uVar21 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (local_138 = lVar19,
     bVar14 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  lVar7 = *(longlong *)(lVar7 + 0x88);
  plVar17 = *(longlong **)((longlong)this + 8);
  puVar16 = (undefined8 *)(lVar7 + lVar19 * 0x18);
  uVar12 = *puVar16;
  uVar13 = puVar16[1];
  uVar5 = *(undefined8 *)(lVar7 + 0x10 + lVar19 * 0x18);
  iVar6 = (int)plVar17[1];
  local_130 = (longlong)iVar6;
  if (param_1 < iVar6) {
    uVar15 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (local_138 = lVar19,
     bVar14 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  lVar7 = *plVar17;
  puVar16 = (undefined8 *)(lVar7 + lVar19 * 0x18);
  *puVar16 = uVar12;
  puVar16[1] = uVar13;
  *(undefined8 *)(lVar7 + 0x10 + lVar19 * 0x18) = uVar5;
  return;
}

// operator() @ 14ccd2340

void __thiscall
`UE::Geometry::FIterativeOffsetMeshOp::Offset_Smoothed'::__l34::<lambda_2>::operator()
          (void *this,int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong local_res8;
  longlong local_res18 [2];
  code *local_a8;
  longlong *local_a0;
  code *local_98;
  longlong *local_90;
  TVector<double>_u_0 local_88 [4];
  
  lVar5 = *(longlong *)this;
  uVar11 = 0;
  if (param_1 < *(int *)(lVar5 + 0xd8)) {
    uVar11 = (uint)~param_1 >> 0x1f;
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
  local_res8 = *(longlong *)this;
  uVar11 = *(uint *)(*(longlong *)(lVar5 + 0xd0) + (longlong)param_1 * 4);
  lVar12 = (longlong)(int)uVar11;
  local_a0 = &local_res8;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::FIterativeOffsetMeshOp::Offset_Smoothed'::__l34::<lambda_2>::operator()'::__l2::<lambda_2>,bool,int>
             ::Call;
  local_90 = local_res18;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<``UE::Geometry::FIterativeOffsetMeshOp::Offset_Smoothed'::__l34::<lambda_2>::operator()'::__l2::<lambda_1>,UE::Math::TVector<double>,int>
             ::Call;
  local_res18[0] = local_res8;
  UE::Geometry::FMeshWeights::FilteredUniformCentroid
            ((TVector<double> *)&local_88[0]._s_0,*(FDynamicMesh3 **)(local_res8 + 8),uVar11,
             (TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *)&local_98,
             (TFunctionRef<bool___cdecl(int)> *)&local_a8);
  lVar5 = *(longlong *)this;
  dVar1 = *(double *)(lVar5 + 0x128);
  uVar10 = 0;
  if ((int)uVar11 < *(int *)(lVar5 + 0x90)) {
    uVar10 = ~uVar11 >> 0x1f;
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
  lVar5 = *(longlong *)(lVar5 + 0x88);
  dVar8 = __real_3ff0000000000000 - dVar1;
  plVar6 = *(longlong **)((longlong)this + 8);
  dVar2 = *(double *)(lVar5 + lVar12 * 0x18);
  dVar3 = *(double *)(lVar5 + 8 + lVar12 * 0x18);
  dVar4 = *(double *)(lVar5 + 0x10 + lVar12 * 0x18);
  uVar10 = 0;
  if ((int)uVar11 < (int)plVar6[1]) {
    uVar10 = ~uVar11 >> 0x1f;
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
  lVar5 = *plVar6;
  *(double *)(lVar5 + lVar12 * 0x18) = dVar8 * dVar2 + (double)local_88[0]._0_8_ * dVar1;
  *(double *)(lVar5 + 8 + lVar12 * 0x18) = dVar8 * dVar3 + (double)local_88[0]._8_8_ * dVar1;
  *(double *)(lVar5 + 0x10 + lVar12 * 0x18) = dVar8 * dVar4 + (double)local_88[0]._16_8_ * dVar1;
  return;
}

// CalculateOffset @ 14cce7e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FIterativeOffsetMeshOp::CalculateOffset
          (FIterativeOffsetMeshOp *this,FProgressCancel *param_1)

{
  atomic<unsigned_char> *this_00;
  double *pdVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FMutex FVar4;
  undefined8 uVar5;
  void *_Src;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  atomic<unsigned_char> aVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  byte bVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  undefined4 uVar16;
  FMeshNormals *pFVar17;
  bool bVar18;
  bool bVar19;
  short sVar20;
  int iVar21;
  longlong lVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  longlong lVar26;
  longlong lVar27;
  uint uVar28;
  float fVar29;
  double dVar30;
  double dVar31;
  undefined1 auStackY_508 [32];
  int iStack_4b8;
  IndexIterator IStack_4b0;
  ForAnyElementType FStack_4a0;
  int iStack_498;
  int iStack_494;
  FMeshNormals *pFStack_490;
  int iStack_488;
  IndexIterator IStack_480;
  IndexIterator IStack_470;
  FMeshNormals FStack_460;
  longlong lStack_448;
  BaseIterator BStack_440;
  double dStack_430;
  double dStack_428;
  double dStack_420;
  IndexIterator IStack_418;
  TArrayView<std::nullptr_t,int> TStack_408;
  code *pcStack_3f8;
  FIterativeOffsetMeshOp **ppFStack_3f0;
  FIterativeOffsetMeshOp *pFStack_3e8;
  ForAnyElementType *pFStack_3e0;
  TArrayView<std::nullptr_t,int> TStack_3d8;
  code *pcStack_3c8;
  FIterativeOffsetMeshOp **ppFStack_3c0;
  IndexIterator IStack_3b8;
  FIterativeOffsetMeshOp *pFStack_3a8;
  ForAnyElementType *pFStack_3a0;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTStack_398;
  FDynamicMesh3 FStack_388;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> TStack_158;
  ulonglong uStack_98;
  
  if ((this->Steps < 2) || (this->SmoothAlpha <= 0.0)) {
    Offset(this,param_1);
    return;
  }
  uStack_98 = __security_cookie.value ^ (ulonglong)auStackY_508;
  if ((this->_padding_ == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("BaseNormals.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Public\\DeformationOps\\MeshOffsetOps.h"
                          ,0xd6,L""), bVar18)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iStack_498 = (int)this->_padding_;
  lVar22 = (longlong)iStack_498;
  _Src = (void *)this->_padding_;
  iVar25 = this->Steps;
  if (this->Steps < 1) {
    iVar25 = 1;
  }
  FStack_4a0.Data = (FScriptContainerElement *)0x0;
  iStack_488 = iVar25;
  if (iStack_498 == 0) {
    iStack_494 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iStack_498,0,&FStack_4a0,iStack_498,&iStack_494);
    memcpy(FStack_4a0.Data,_Src,lVar22 * 0x18);
  }
  bVar18 = 0.0 < this->SmoothAlpha;
  FDynamicMesh3::FDynamicMesh3(&FStack_388);
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>
            (&TStack_158);
  if ((this->bReprojectSmooth != false) && (bVar18)) {
    FDynamicMesh3::Copy(&FStack_388,(FDynamicMesh3 *)this->_padding_,false,false,false,false);
    TStack_158.Mesh = &FStack_388;
    TStack_158.MeshChangeStamp = 0;
    TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown(&TStack_158,false);
    TStack_158.MeshChangeStamp = FDynamicMesh3::GetChangeStamp(TStack_158.Mesh);
  }
  dVar15 = __real_3ff0000000000000;
  FStack_460.Mesh = (FDynamicMesh3 *)this->_padding_;
  FStack_460.Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_460.Normals.ArrayNum = 0;
  FStack_460.Normals.ArrayMax = 0;
  iStack_4b8 = 0;
  if (0 < iVar25) {
    do {
      if (iStack_4b8 == 0) {
        if ((this->_padding_ == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x44d,L""), bVar19)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFStack_490 = (FMeshNormals *)this->_padding_;
      }
      else {
        pFStack_490 = &FStack_460;
      }
      lVar22 = this->_padding_;
      iVar21 = *(int *)(lVar22 + 0x24) + *(int *)(lVar22 + 0x20) * 0x200;
      FRefCountVector::IndexIterator::IndexIterator
                (&IStack_4b0,(FRefCountVector *)(lVar22 + 0x20),0,iVar21);
      iVar24 = *(int *)(lVar22 + 0x20) * 0x200 + *(int *)(lVar22 + 0x24);
      FRefCountVector::IndexIterator::IndexIterator
                (&IStack_418,(FRefCountVector *)(lVar22 + 0x20),iVar24,iVar24);
      if (IStack_4b0._8_4_ != IStack_418._8_4_) {
        do {
          uVar16 = IStack_4b0._8_4_;
          lVar22 = (longlong)(int)IStack_4b0._8_4_;
          dVar9 = dVar15;
          if ((char)this->_padding_ == '\0') {
LAB_14cd0d5c8:
            if (dVar15 <= dVar9) {
              dVar9 = dVar15;
            }
          }
          else {
            if ((this->_padding_ == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar19)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            fVar29 = TIndexedWeightMap<float>::GetValue
                               ((TIndexedWeightMap<float> *)this->_padding_,uVar16);
            dVar9 = (double)fVar29;
            if (0.0 <= (double)fVar29) goto LAB_14cd0d5c8;
            dVar9 = 0.0;
          }
          lVar26 = *(longlong *)
                    (*(longlong *)(this->_padding_ + 0x10) + (ulonglong)((uint)uVar16 >> 9) * 8);
          pdVar1 = (double *)(lVar26 + (ulonglong)(uVar16 & 0x1ff) * 0x18);
          dVar11 = *pdVar1;
          dVar31 = pdVar1[1];
          dVar30 = *(double *)(lVar26 + 0x10 + (ulonglong)(uVar16 & 0x1ff) * 0x18);
          dVar9 = ((dVar15 - dVar9) * (double)this->_padding_ + dVar9 * (double)this->_padding_) *
                  (double)this->_padding_ * (dVar15 / (double)iVar25);
          dStack_430 = dVar11;
          dStack_428 = dVar31;
          dStack_420 = dVar30;
          if ((char)this->_padding_ == '\0') {
LAB_14cd0d69b:
            pFVar17 = pFStack_490;
            uVar28 = (uint)~uVar16 >> 0x1f;
            uVar23 = 0;
            if ((int)uVar16 < (pFStack_490->Normals).ArrayNum) {
              uVar23 = uVar28;
            }
            if ((uVar23 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar6 = (pFVar17->Normals).AllocatorInstance.Data;
            dVar11 = dStack_430 + dVar9 * *(double *)(pFVar6 + lVar22 * 0x18);
            dVar31 = dStack_428 + dVar9 * *(double *)(pFVar6 + lVar22 * 0x18 + 8);
            dVar30 = dStack_420 + dVar9 * *(double *)(pFVar6 + lVar22 * 0x18 + 0x10);
            dStack_420 = dVar30;
          }
          else {
            uVar28 = (uint)~uVar16 >> 0x1f;
            uVar23 = 0;
            if ((int)uVar16 < (int)this->_padding_) {
              uVar23 = uVar28;
            }
            if ((uVar23 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (*(char *)(lVar22 + this->_padding_) == '\0') goto LAB_14cd0d69b;
          }
          if (((uVar28 & (int)uVar16 < (int)this->_padding_) == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar26 = this->_padding_;
          IStack_4b0._8_4_ = uVar16 + 1;
          auVar10._8_4_ = SUB84(dVar31,0);
          auVar10._0_8_ = dVar11;
          auVar10._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
          *(undefined1 (*) [16])(lVar26 + lVar22 * 0x18) = auVar10;
          *(double *)(lVar26 + 0x10 + lVar22 * 0x18) = dVar30;
          if ((int)IStack_4b0._8_4_ < (int)IStack_4b0._12_4_) {
            do {
              if ((*(short *)(*(longlong *)
                               (*(longlong *)(IStack_4b0._0_8_ + 8) +
                               (ulonglong)((uint)IStack_4b0._8_4_ >> 9) * 8) +
                             (ulonglong)(IStack_4b0._8_4_ & 0x1ff) * 2) != 0) &&
                 (*(short *)(*(longlong *)
                              (*(longlong *)(IStack_4b0._0_8_ + 8) +
                              (ulonglong)((uint)IStack_4b0._8_4_ >> 9) * 8) +
                            (ulonglong)(IStack_4b0._8_4_ & 0x1ff) * 2) != -1)) break;
              IStack_4b0._8_4_ = IStack_4b0._8_4_ + 1;
            } while ((int)IStack_4b0._8_4_ < (int)IStack_4b0._12_4_);
          }
        } while (IStack_4b0._8_4_ != IStack_418._8_4_);
      }
      if (this->bReprojectSmooth == false) {
LAB_14cd0da36:
        if (bVar18) {
          pFStack_3a0 = &FStack_4a0;
          pTStack_398 = &TStack_158;
          TStack_408.DataPtr = (void **)0x0;
          pcStack_3f8 = Core::Private::Function::
                        TFunctionRefCaller<`UE::Geometry::FIterativeOffsetMeshOp::Offset_Smoothed'::__l31::<lambda_1>,void,int>
                        ::Call;
          ppFStack_3f0 = &pFStack_3a8;
          TStack_408.ArrayNum = 0;
          pFStack_3a8 = this;
          ParallelForImpl::
          ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                    (L"ParallelFor Task",iVar21,1,(TFunctionRef<void___cdecl(int)> *)&pcStack_3f8,
                     (<lambda_1>)0x1,None,&TStack_408);
          if ((char)this->_padding_ == '\0') {
            pFStack_3e0 = &FStack_4a0;
            pcStack_3c8 = Core::Private::Function::
                          TFunctionRefCaller<`UE::Geometry::FIterativeOffsetMeshOp::Offset_Smoothed'::__l34::<lambda_2>,void,int>
                          ::Call;
            ppFStack_3c0 = &pFStack_3e8;
            TStack_3d8.DataPtr = (void **)0x0;
            TStack_3d8.ArrayNum = 0;
            pFStack_3e8 = this;
            ParallelForImpl::
            ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                      (L"ParallelFor Task",(int)this->_padding_,1,
                       (TFunctionRef<void___cdecl(int)> *)&pcStack_3c8,(<lambda_1>)0x1,None,
                       &TStack_3d8);
          }
          lVar22 = this->_padding_;
          uVar23 = 0;
          iVar25 = *(int *)(lVar22 + 0x24) + *(int *)(lVar22 + 0x20) * 0x200;
          if ((iVar25 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar22 + 0x28) - 1U)))
          {
            uVar23 = 1;
            uVar28 = 1;
            if (1 < iVar25) {
              do {
                uVar23 = uVar28;
                sVar20 = *(short *)((*(undefined8 **)(lVar22 + 0x28))[uVar23 >> 9] +
                                   (ulonglong)(uVar23 & 0x1ff) * 2);
                if ((sVar20 != 0) && (sVar20 != -1)) break;
                uVar23 = uVar23 + 1;
                uVar28 = uVar23;
              } while ((int)uVar23 < iVar25);
            }
          }
          iVar21 = *(int *)(lVar22 + 0x20);
          iVar24 = *(int *)(lVar22 + 0x24);
joined_r0x00014cd0db89:
          if (uVar23 != iVar21 * 0x200 + iVar24) {
            while( true ) {
              uVar28 = 0;
              if ((int)uVar23 < iStack_498) {
                uVar28 = ~uVar23 >> 0x1f;
              }
              if ((uVar28 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              lVar26 = (longlong)(int)uVar23;
              uVar13 = *(undefined8 *)(FStack_4a0.Data + lVar26 * 0x18);
              uVar14 = *(undefined8 *)(FStack_4a0.Data + lVar26 * 0x18 + 8);
              uVar5 = *(undefined8 *)(FStack_4a0.Data + lVar26 * 0x18 + 0x10);
              uVar28 = 0;
              if ((int)uVar23 < (int)this->_padding_) {
                uVar28 = ~uVar23 >> 0x1f;
              }
              if ((uVar28 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              lVar27 = this->_padding_;
              uVar23 = uVar23 + 1;
              puVar2 = (undefined8 *)(lVar27 + lVar26 * 0x18);
              *puVar2 = uVar13;
              puVar2[1] = uVar14;
              *(undefined8 *)(lVar27 + 0x10 + lVar26 * 0x18) = uVar5;
              if (iVar25 <= (int)uVar23) break;
              while( true ) {
                lVar26 = *(longlong *)(*(longlong *)(lVar22 + 0x28) + (ulonglong)(uVar23 >> 9) * 8);
                if ((*(short *)(lVar26 + (ulonglong)(uVar23 & 0x1ff) * 2) != 0) &&
                   (*(short *)(lVar26 + (ulonglong)(uVar23 & 0x1ff) * 2) != -1)) break;
                uVar23 = uVar23 + 1;
                if (iVar25 <= (int)uVar23) goto joined_r0x00014cd0db89;
              }
            }
            goto joined_r0x00014cd0db89;
          }
        }
      }
      else if (bVar18) {
        lVar22 = this->_padding_;
        FRefCountVector::IndexIterator::IndexIterator
                  (&IStack_480,(FRefCountVector *)(lVar22 + 0x20),0,
                   *(int *)(lVar22 + 0x20) * 0x200 + *(int *)(lVar22 + 0x24));
        iVar25 = *(int *)(lVar22 + 0x20) * 0x200 + *(int *)(lVar22 + 0x24);
        FRefCountVector::IndexIterator::IndexIterator
                  (&IStack_470,(FRefCountVector *)(lVar22 + 0x20),iVar25,iVar25);
        uVar23 = IStack_470._8_4_;
        if (IStack_480._8_4_ != IStack_470._8_4_) {
          do {
            uVar16 = IStack_480._8_4_;
            uVar28 = 0;
            if ((int)IStack_480._8_4_ < (int)this->_padding_) {
              uVar28 = (uint)~IStack_480._8_4_ >> 0x1f;
            }
            if ((uVar28 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            lVar22 = this->_padding_;
            lVar26 = (longlong)(int)uVar16;
            sVar20 = _dclass(*(undefined8 *)(lVar22 + lVar26 * 0x18));
            if (((sVar20 < 1) &&
                (sVar20 = _dclass(*(undefined8 *)(lVar22 + 8 + lVar26 * 0x18)), sVar20 < 1)) &&
               (sVar20 = _dclass(*(undefined8 *)(lVar22 + 0x10 + lVar26 * 0x18)), sVar20 < 1)) {
              puVar2 = (undefined8 *)(lVar22 + lVar26 * 0x18);
              uVar13 = puVar2[1];
              uVar5 = *(undefined8 *)(lVar22 + 0x10 + lVar26 * 0x18);
              lVar22 = *(longlong *)
                        (FStack_388.Vertices.Blocks.AllocatorInstance.Data +
                        (ulonglong)((uint)uVar16 >> 9) * 8);
              puVar3 = (undefined8 *)(lVar22 + (ulonglong)(uVar16 & 0x1ff) * 0x18);
              *puVar3 = *puVar2;
              puVar3[1] = uVar13;
              *(undefined8 *)(lVar22 + 0x10 + (ulonglong)(uVar16 & 0x1ff) * 0x18) = uVar5;
              if (FStack_388.ChangeStampShape.bIsEnabled != false) {
                LOCK();
                bVar19 = FStack_388.ChangeStampShape.Mutex.State == (atomic<unsigned_char>)0x0;
                if (bVar19) {
                  FStack_388.ChangeStampShape.Mutex.State = (atomic<unsigned_char>)0x1;
                }
                UNLOCK();
                if (!bVar19) {
                  FMutex::LockSlow(&FStack_388.ChangeStampShape.Mutex);
                }
                FStack_388.ChangeStampShape.Value = FStack_388.ChangeStampShape.Value + 1;
                LOCK();
                aVar8 = FStack_388.ChangeStampShape.Mutex.State - 1;
                UNLOCK();
                bVar12 = (byte)FStack_388.ChangeStampShape.Mutex.State & 2;
                FStack_388.ChangeStampShape.Mutex.State = aVar8;
                if (bVar12 != 0) {
                  FMutex::WakeWaitingThread(&FStack_388.ChangeStampShape.Mutex);
                }
              }
            }
            IStack_480._8_4_ = uVar16 + 1;
            if ((int)IStack_480._8_4_ < (int)IStack_480._12_4_) {
              do {
                uVar23 = IStack_470._8_4_;
                if ((*(short *)(*(longlong *)
                                 (*(longlong *)(IStack_480._0_8_ + 8) +
                                 (ulonglong)((uint)IStack_480._8_4_ >> 9) * 8) +
                               (ulonglong)(IStack_480._8_4_ & 0x1ff) * 2) != 0) &&
                   (*(short *)(*(longlong *)
                                (*(longlong *)(IStack_480._0_8_ + 8) +
                                (ulonglong)((uint)IStack_480._8_4_ >> 9) * 8) +
                              (ulonglong)(IStack_480._8_4_ & 0x1ff) * 2) != -1)) break;
                IStack_480._8_4_ = IStack_480._8_4_ + 1;
              } while ((int)IStack_480._8_4_ < (int)IStack_480._12_4_);
            }
          } while (IStack_480._8_4_ != uVar23);
        }
        TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown(&TStack_158,false);
        TStack_158.MeshChangeStamp = FDynamicMesh3::GetChangeStamp(TStack_158.Mesh);
        goto LAB_14cd0da36;
      }
      lStack_448 = this->_padding_;
      uVar23 = 0;
      iVar25 = *(int *)(lStack_448 + 0x24) + *(int *)(lStack_448 + 0x20) * 0x200;
      pFStack_490 = (FMeshNormals *)CONCAT44(pFStack_490._4_4_,iVar25);
      if ((iVar25 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lStack_448 + 0x28) - 1U)))
      {
        uVar23 = 1;
        uVar28 = 1;
        if (1 < iVar25) {
          do {
            uVar23 = uVar28;
            sVar20 = *(short *)((*(undefined8 **)(lStack_448 + 0x28))[uVar23 >> 9] +
                               (ulonglong)(uVar23 & 0x1ff) * 2);
            if ((sVar20 != 0) && (sVar20 != -1)) break;
            uVar23 = uVar23 + 1;
            uVar28 = uVar23;
          } while ((int)uVar23 < iVar25);
        }
      }
      iVar25 = *(int *)(lStack_448 + 0x20);
      iVar21 = *(int *)(lStack_448 + 0x24);
joined_r0x00014cd0dd3b:
      if (uVar23 != iVar25 * 0x200 + iVar21) {
        while( true ) {
          lVar22 = this->_padding_;
          uVar28 = 0;
          if ((int)uVar23 < (int)this->_padding_) {
            uVar28 = ~uVar23 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar26 = this->_padding_;
          lVar27 = (longlong)(int)uVar23;
          sVar20 = _dclass(*(undefined8 *)(lVar26 + lVar27 * 0x18));
          if (((sVar20 < 1) &&
              (sVar20 = _dclass(*(undefined8 *)(lVar26 + 8 + lVar27 * 0x18)), sVar20 < 1)) &&
             (sVar20 = _dclass(*(undefined8 *)(lVar26 + 0x10 + lVar27 * 0x18)), sVar20 < 1)) {
            puVar2 = (undefined8 *)(lVar26 + lVar27 * 0x18);
            uVar13 = puVar2[1];
            uVar5 = *(undefined8 *)(lVar26 + 0x10 + lVar27 * 0x18);
            lVar26 = *(longlong *)(*(longlong *)(lVar22 + 0x10) + (ulonglong)(uVar23 >> 9) * 8);
            puVar3 = (undefined8 *)(lVar26 + (ulonglong)(uVar23 & 0x1ff) * 0x18);
            *puVar3 = *puVar2;
            puVar3[1] = uVar13;
            *(undefined8 *)(lVar26 + 0x10 + (ulonglong)(uVar23 & 0x1ff) * 0x18) = uVar5;
            if (*(char *)(lVar22 + 0x21c) != '\0') {
              this_00 = (atomic<unsigned_char> *)(lVar22 + 0x21d);
              LOCK();
              FVar4.State = *this_00;
              if (FVar4.State == (atomic<unsigned_char>)0x0) {
                *this_00 = (atomic<unsigned_char>)0x1;
              }
              UNLOCK();
              if (FVar4.State != (atomic<unsigned_char>)0x0) {
                FMutex::LockSlow((FMutex *)this_00);
              }
              *(int *)(lVar22 + 0x220) = *(int *)(lVar22 + 0x220) + 1;
              LOCK();
              aVar8 = *this_00;
              *this_00 = (atomic<unsigned_char>)((char)*this_00 + -1);
              UNLOCK();
              if (((byte)aVar8 & 2) != 0) {
                FMutex::WakeWaitingThread((FMutex *)this_00);
              }
            }
          }
          uVar23 = uVar23 + 1;
          if ((int)pFStack_490 <= (int)uVar23) break;
          while( true ) {
            lVar22 = *(longlong *)(*(longlong *)(lStack_448 + 0x28) + (ulonglong)(uVar23 >> 9) * 8);
            if ((*(short *)(lVar22 + (ulonglong)(uVar23 & 0x1ff) * 2) != 0) &&
               (*(short *)(lVar22 + (ulonglong)(uVar23 & 0x1ff) * 2) != -1)) break;
            uVar23 = uVar23 + 1;
            if ((int)pFStack_490 <= (int)uVar23) goto joined_r0x00014cd0dd3b;
          }
        }
        goto joined_r0x00014cd0dd3b;
      }
      FMeshNormals::Compute_FaceAvg(&FStack_460,true,true);
      iStack_4b8 = iStack_4b8 + 1;
      iVar25 = iStack_488;
    } while (iStack_4b8 < iStack_488);
  }
  lVar22 = this->_padding_;
  FRefCountVector::IndexIterator::IndexIterator
            ((IndexIterator *)&BStack_440,(FRefCountVector *)(lVar22 + 0x20),0,
             *(int *)(lVar22 + 0x20) * 0x200 + *(int *)(lVar22 + 0x24));
  iVar25 = *(int *)(lVar22 + 0x20) * 0x200 + *(int *)(lVar22 + 0x24);
  FRefCountVector::IndexIterator::IndexIterator
            (&IStack_3b8,(FRefCountVector *)(lVar22 + 0x20),iVar25,iVar25);
  iVar25 = BStack_440.Index;
  while( true ) {
    if (iVar25 == IStack_3b8._8_4_) {
      if (FStack_460.Normals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_460.Normals.AllocatorInstance.Data);
      }
      TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::~TMeshAABBTree3<UE::Geometry::FDynamicMesh3>
                (&TStack_158);
      FDynamicMesh3::~FDynamicMesh3(&FStack_388);
      if (FStack_4a0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_4a0.Data);
      }
      return;
    }
    uVar28 = (uint)BStack_440._8_8_;
    lVar22 = *(longlong *)
              (*(longlong *)(this->_padding_ + 0x10) + ((BStack_440._8_8_ & 0xffffffff) >> 9) * 8);
    puVar2 = (undefined8 *)(lVar22 + (ulonglong)(uVar28 & 0x1ff) * 0x18);
    uVar13 = *puVar2;
    uVar14 = puVar2[1];
    uVar5 = *(undefined8 *)(lVar22 + 0x10 + (ulonglong)(uVar28 & 0x1ff) * 0x18);
    uVar23 = 0;
    if ((int)uVar28 < (int)this->_padding_) {
      uVar23 = ~uVar28 >> 0x1f;
    }
    if ((uVar23 == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) break;
    lVar22 = this->_padding_;
    puVar2 = (undefined8 *)(lVar22 + (longlong)(int)uVar28 * 0x18);
    *puVar2 = uVar13;
    puVar2[1] = uVar14;
    *(undefined8 *)(lVar22 + 0x10 + (longlong)(int)uVar28 * 0x18) = uVar5;
    FRefCountVector::BaseIterator::goto_next(&BStack_440);
    iVar25 = BStack_440.Index;
  }
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

// Offset @ 14cd0c3f0

void __thiscall
UE::Geometry::FIterativeOffsetMeshOp::Offset(FIterativeOffsetMeshOp *this,FProgressCancel *param_1)

{
  FRefCountVector *pFVar1;
  atomic<unsigned_char> *this_00;
  double *pdVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  FMutex FVar5;
  atomic<unsigned_char> aVar6;
  undefined8 uVar7;
  int iVar8;
  FDynamicMesh3 *pFVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  code *pcVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  double dVar19;
  undefined4 uVar20;
  bool bVar21;
  short sVar22;
  FMeshNormals *pFVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  longlong lVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  uint uVar30;
  int iVar31;
  longlong lVar32;
  longlong lVar33;
  float fVar34;
  double dVar35;
  double dVar36;
  IndexIterator local_108;
  int local_f8;
  IndexIterator local_f0;
  int local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  FMeshNormals local_c0;
  IndexIterator local_a8 [7];
  
  if ((this->_padding_ == 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("BaseNormals.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Public\\DeformationOps\\MeshOffsetOps.h"
                          ,0x9e,L""), bVar21)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  dVar19 = __real_3ff0000000000000;
  pFVar9 = (FDynamicMesh3 *)this->_padding_;
  iVar29 = this->Steps;
  if (this->Steps < 1) {
    iVar29 = 1;
  }
  if (iVar29 == 1) {
    pFVar1 = &pFVar9->VertexRefCounts;
    FRefCountVector::IndexIterator::IndexIterator
              (&local_108,pFVar1,0,
               (pFVar9->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               (pFVar9->VertexRefCounts).RefCounts.CurBlockUsed);
    iVar29 = (pFVar1->RefCounts).CurBlock * 0x200 + (pFVar9->VertexRefCounts).RefCounts.CurBlockUsed
    ;
    FRefCountVector::IndexIterator::IndexIterator(local_a8,pFVar1,iVar29,iVar29);
    dVar19 = __real_3ff0000000000000;
    if (local_108._8_4_ != local_a8[0]._8_4_) {
      do {
        uVar20 = local_108._8_4_;
        lVar26 = (longlong)(int)local_108._8_4_;
        dVar13 = dVar19;
        if ((char)this->_padding_ == '\0') {
LAB_14cd0c567:
          if (dVar19 <= dVar13) {
            dVar13 = dVar19;
          }
        }
        else {
          if ((this->_padding_ == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar21)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          fVar34 = TIndexedWeightMap<float>::GetValue
                             ((TIndexedWeightMap<float> *)this->_padding_,uVar20);
          dVar13 = (double)fVar34;
          if (0.0 <= (double)fVar34) goto LAB_14cd0c567;
          dVar13 = 0.0;
        }
        lVar10 = *(longlong *)
                  (*(longlong *)(this->_padding_ + 0x10) + (ulonglong)((uint)uVar20 >> 9) * 8);
        pdVar2 = (double *)(lVar10 + (ulonglong)(uVar20 & 0x1ff) * 0x18);
        dVar16 = *pdVar2;
        dVar36 = pdVar2[1];
        dVar35 = *(double *)(lVar10 + 0x10 + (ulonglong)(uVar20 & 0x1ff) * 0x18);
        dVar13 = ((dVar19 - dVar13) * (double)this->_padding_ + dVar13 * (double)this->_padding_) *
                 (double)this->_padding_;
        local_d8 = dVar16;
        dStack_d0 = dVar36;
        local_c8 = dVar35;
        if ((char)this->_padding_ == '\0') {
LAB_14cd0c631:
          if ((this->_padding_ == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar21)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          lVar10 = this->_padding_;
          uVar27 = (uint)~uVar20 >> 0x1f;
          uVar30 = 0;
          if ((int)uVar20 < *(int *)(lVar10 + 0x10)) {
            uVar30 = uVar27;
          }
          if ((uVar30 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          lVar10 = *(longlong *)(lVar10 + 8);
          dVar16 = local_d8 + dVar13 * *(double *)(lVar10 + lVar26 * 0x18);
          dVar36 = dStack_d0 + dVar13 * *(double *)(lVar10 + 8 + lVar26 * 0x18);
          dVar35 = local_c8 + dVar13 * *(double *)(lVar10 + 0x10 + lVar26 * 0x18);
          local_c8 = dVar35;
        }
        else {
          uVar27 = (uint)~uVar20 >> 0x1f;
          uVar30 = 0;
          if ((int)uVar20 < (int)this->_padding_) {
            uVar30 = uVar27;
          }
          if ((uVar30 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          if (*(char *)(lVar26 + this->_padding_) == '\0') goto LAB_14cd0c631;
        }
        if (((uVar27 & (int)uVar20 < (int)this->_padding_) == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        lVar10 = this->_padding_;
        local_108._8_4_ = uVar20 + 1;
        auVar14._8_4_ = SUB84(dVar36,0);
        auVar14._0_8_ = dVar16;
        auVar14._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
        *(undefined1 (*) [16])(lVar10 + lVar26 * 0x18) = auVar14;
        *(double *)(lVar10 + 0x10 + lVar26 * 0x18) = dVar35;
        if ((int)local_108._8_4_ < (int)local_108._12_4_) {
          do {
            if ((*(short *)(*(longlong *)
                             (*(longlong *)(local_108._0_8_ + 8) +
                             (ulonglong)((uint)local_108._8_4_ >> 9) * 8) +
                           (ulonglong)(local_108._8_4_ & 0x1ff) * 2) != 0) &&
               (*(short *)(*(longlong *)
                            (*(longlong *)(local_108._0_8_ + 8) +
                            (ulonglong)((uint)local_108._8_4_ >> 9) * 8) +
                          (ulonglong)(local_108._8_4_ & 0x1ff) * 2) != -1)) break;
            local_108._8_4_ = local_108._8_4_ + 1;
          } while ((int)local_108._8_4_ < (int)local_108._12_4_);
        }
      } while (local_108._8_4_ != local_a8[0]._8_4_);
    }
  }
  else {
    local_c0.Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c0.Normals.ArrayNum = 0;
    local_c0.Normals.ArrayMax = 0;
    local_f8 = 0;
    local_c0.Mesh = pFVar9;
    if (0 < iVar29) {
      do {
        if (local_f8 == 0) {
          if ((this->_padding_ == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x44d,L""), bVar21)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar23 = (FMeshNormals *)this->_padding_;
        }
        else {
          pFVar23 = &local_c0;
        }
        lVar26 = this->_padding_;
        FRefCountVector::IndexIterator::IndexIterator
                  (&local_f0,(FRefCountVector *)(lVar26 + 0x20),0,
                   *(int *)(lVar26 + 0x20) * 0x200 + *(int *)(lVar26 + 0x24));
        uVar30 = *(int *)(lVar26 + 0x20) * 0x200 + *(int *)(lVar26 + 0x24);
        if (local_f0._8_4_ != uVar30) {
          do {
            uVar20 = local_f0._8_4_;
            lVar26 = (longlong)(int)local_f0._8_4_;
            dVar13 = dVar19;
            if ((char)this->_padding_ == '\0') {
LAB_14cd0c8f8:
              if (dVar19 <= dVar13) {
                dVar13 = dVar19;
              }
            }
            else {
              if ((this->_padding_ == 0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar21)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              fVar34 = TIndexedWeightMap<float>::GetValue
                                 ((TIndexedWeightMap<float> *)this->_padding_,uVar20);
              dVar13 = (double)fVar34;
              if (0.0 <= (double)fVar34) goto LAB_14cd0c8f8;
              dVar13 = 0.0;
            }
            lVar10 = *(longlong *)
                      (*(longlong *)(this->_padding_ + 0x10) + (ulonglong)((uint)uVar20 >> 9) * 8);
            pdVar2 = (double *)(lVar10 + (ulonglong)(uVar20 & 0x1ff) * 0x18);
            dVar16 = *pdVar2;
            dVar36 = pdVar2[1];
            dVar35 = *(double *)(lVar10 + 0x10 + (ulonglong)(uVar20 & 0x1ff) * 0x18);
            dVar13 = ((dVar19 - dVar13) * (double)this->_padding_ + dVar13 * (double)this->_padding_
                     ) * (double)this->_padding_ * (dVar19 / (double)iVar29);
            local_d8 = dVar16;
            dStack_d0 = dVar36;
            local_c8 = dVar35;
            if ((char)this->_padding_ == '\0') {
LAB_14cd0c9c7:
              uVar28 = (uint)~uVar20 >> 0x1f;
              uVar27 = 0;
              if ((int)uVar20 < (pFVar23->Normals).ArrayNum) {
                uVar27 = uVar28;
              }
              if ((uVar27 == 0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar21)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pFVar11 = (pFVar23->Normals).AllocatorInstance.Data;
              dVar16 = local_d8 + dVar13 * *(double *)(pFVar11 + lVar26 * 0x18);
              dVar36 = dStack_d0 + dVar13 * *(double *)(pFVar11 + lVar26 * 0x18 + 8);
              dVar35 = local_c8 + dVar13 * *(double *)(pFVar11 + lVar26 * 0x18 + 0x10);
              local_c8 = dVar35;
            }
            else {
              uVar28 = (uint)~uVar20 >> 0x1f;
              uVar27 = 0;
              if ((int)uVar20 < (int)this->_padding_) {
                uVar27 = uVar28;
              }
              if ((uVar27 == 0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar21)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              if (*(char *)(lVar26 + this->_padding_) == '\0') goto LAB_14cd0c9c7;
            }
            if (((uVar28 & (int)uVar20 < (int)this->_padding_) == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            lVar10 = this->_padding_;
            local_f0._8_4_ = uVar20 + 1;
            auVar15._8_4_ = SUB84(dVar36,0);
            auVar15._0_8_ = dVar16;
            auVar15._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
            *(undefined1 (*) [16])(lVar10 + lVar26 * 0x18) = auVar15;
            *(double *)(lVar10 + 0x10 + lVar26 * 0x18) = dVar35;
            if ((int)local_f0._8_4_ < (int)local_f0._12_4_) {
              do {
                if ((*(short *)(*(longlong *)
                                 (*(longlong *)(local_f0._0_8_ + 8) +
                                 (ulonglong)((uint)local_f0._8_4_ >> 9) * 8) +
                               (ulonglong)(local_f0._8_4_ & 0x1ff) * 2) != 0) &&
                   (*(short *)(*(longlong *)
                                (*(longlong *)(local_f0._0_8_ + 8) +
                                (ulonglong)((uint)local_f0._8_4_ >> 9) * 8) +
                              (ulonglong)(local_f0._8_4_ & 0x1ff) * 2) != -1)) break;
                local_f0._8_4_ = local_f0._8_4_ + 1;
              } while ((int)local_f0._8_4_ < (int)local_f0._12_4_);
            }
          } while (local_f0._8_4_ != uVar30);
        }
        lVar26 = this->_padding_;
        uVar25 = 0;
        iVar31 = *(int *)(lVar26 + 0x20) * 0x200 + *(int *)(lVar26 + 0x24);
        if ((iVar31 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar26 + 0x28) - 1U))) {
          uVar25 = 1;
          uVar24 = 1;
          if (1 < iVar31) {
            do {
              uVar25 = uVar24;
              sVar22 = *(short *)((*(undefined8 **)(lVar26 + 0x28))[uVar25 >> 9] +
                                 (ulonglong)((uint)uVar25 & 0x1ff) * 2);
              if ((sVar22 != 0) && (sVar22 != -1)) break;
              uVar30 = (uint)uVar25 + 1;
              uVar25 = (ulonglong)uVar30;
              uVar24 = uVar25;
            } while ((int)uVar30 < iVar31);
          }
        }
        local_e0 = *(int *)(lVar26 + 0x20) * 0x200 + *(int *)(lVar26 + 0x24);
        if ((int)uVar25 != local_e0) {
LAB_14cd0cba0:
          do {
            lVar10 = this->_padding_;
            uVar27 = (uint)uVar25;
            uVar30 = 0;
            if ((int)uVar27 < (int)this->_padding_) {
              uVar30 = ~uVar27 >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            lVar32 = (longlong)(int)uVar27;
            lVar33 = this->_padding_;
            sVar22 = _dclass(*(undefined8 *)(lVar33 + lVar32 * 0x18));
            if (((sVar22 < 1) &&
                (sVar22 = _dclass(*(undefined8 *)(lVar33 + 8 + lVar32 * 0x18)), sVar22 < 1)) &&
               (sVar22 = _dclass(*(undefined8 *)(lVar33 + 0x10 + lVar32 * 0x18)), sVar22 < 1)) {
              puVar3 = (undefined8 *)(lVar33 + lVar32 * 0x18);
              uVar17 = puVar3[1];
              uVar7 = *(undefined8 *)(lVar33 + 0x10 + lVar32 * 0x18);
              lVar33 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + (uVar25 >> 9) * 8);
              puVar4 = (undefined8 *)(lVar33 + (ulonglong)(uVar27 & 0x1ff) * 0x18);
              *puVar4 = *puVar3;
              puVar4[1] = uVar17;
              *(undefined8 *)(lVar33 + 0x10 + (ulonglong)(uVar27 & 0x1ff) * 0x18) = uVar7;
              if (*(char *)(lVar10 + 0x21c) != '\0') {
                this_00 = (atomic<unsigned_char> *)(lVar10 + 0x21d);
                LOCK();
                FVar5.State = *this_00;
                if (FVar5.State == (atomic<unsigned_char>)0x0) {
                  *this_00 = (atomic<unsigned_char>)0x1;
                }
                UNLOCK();
                if (FVar5.State != (atomic<unsigned_char>)0x0) {
                  FMutex::LockSlow((FMutex *)this_00);
                }
                *(int *)(lVar10 + 0x220) = *(int *)(lVar10 + 0x220) + 1;
                LOCK();
                aVar6 = *this_00;
                *this_00 = (atomic<unsigned_char>)((char)*this_00 + -1);
                UNLOCK();
                if (((byte)aVar6 & 2) != 0) {
                  FMutex::WakeWaitingThread((FMutex *)this_00);
                }
              }
            }
            uVar25 = (ulonglong)(uVar27 + 1);
            if ((int)(uVar27 + 1) < iVar31) {
              do {
                uVar24 = (ulonglong)((uint)uVar25 & 0x1ff);
                lVar10 = *(longlong *)(*(longlong *)(lVar26 + 0x28) + (uVar25 >> 9) * 8);
                if ((*(short *)(lVar10 + uVar24 * 2) != 0) &&
                   (*(short *)(lVar10 + uVar24 * 2) != -1)) goto LAB_14cd0cba0;
                uVar30 = (uint)uVar25 + 1;
                uVar25 = (ulonglong)uVar30;
              } while ((int)uVar30 < iVar31);
            }
          } while ((int)uVar25 != local_e0);
        }
        FMeshNormals::Compute_FaceAvg(&local_c0,true,true);
        local_f8 = local_f8 + 1;
      } while (local_f8 < iVar29);
    }
    lVar26 = this->_padding_;
    iVar29 = *(int *)(lVar26 + 0x24) + *(int *)(lVar26 + 0x20) * 0x200;
    uVar30 = 0;
    if ((iVar29 != 0) &&
       (uVar30 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar26 + 0x28) - 1U))) {
      uVar27 = 1;
      uVar30 = 1;
      if (1 < iVar29) {
        do {
          lVar10 = (*(undefined8 **)(lVar26 + 0x28))[uVar27 >> 9];
          if ((*(short *)(lVar10 + (ulonglong)(uVar27 & 0x1ff) * 2) != 0) &&
             (uVar30 = uVar27, *(short *)(lVar10 + (ulonglong)(uVar27 & 0x1ff) * 2) != -1)) break;
          uVar27 = uVar27 + 1;
          uVar30 = uVar27;
        } while ((int)uVar27 < iVar29);
      }
    }
    iVar31 = *(int *)(lVar26 + 0x20);
    iVar8 = *(int *)(lVar26 + 0x24);
joined_r0x00014cd0cda5:
    if (uVar30 != iVar31 * 0x200 + iVar8) {
      while( true ) {
        lVar33 = (longlong)(int)uVar30;
        lVar10 = *(longlong *)(*(longlong *)(this->_padding_ + 0x10) + (ulonglong)(uVar30 >> 9) * 8)
        ;
        puVar3 = (undefined8 *)(lVar10 + (ulonglong)(uVar30 & 0x1ff) * 0x18);
        uVar17 = *puVar3;
        uVar18 = puVar3[1];
        uVar7 = *(undefined8 *)(lVar10 + 0x10 + (ulonglong)(uVar30 & 0x1ff) * 0x18);
        uVar27 = 0;
        if ((int)uVar30 < (int)this->_padding_) {
          uVar27 = ~uVar30 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        lVar10 = this->_padding_;
        uVar30 = uVar30 + 1;
        puVar3 = (undefined8 *)(lVar10 + lVar33 * 0x18);
        *puVar3 = uVar17;
        puVar3[1] = uVar18;
        *(undefined8 *)(lVar10 + 0x10 + lVar33 * 0x18) = uVar7;
        if (iVar29 <= (int)uVar30) break;
        while( true ) {
          lVar10 = *(longlong *)(*(longlong *)(lVar26 + 0x28) + (ulonglong)(uVar30 >> 9) * 8);
          if ((*(short *)(lVar10 + (ulonglong)(uVar30 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar10 + (ulonglong)(uVar30 & 0x1ff) * 2) != -1)) break;
          uVar30 = uVar30 + 1;
          if (iVar29 <= (int)uVar30) goto joined_r0x00014cd0cda5;
        }
      }
      goto joined_r0x00014cd0cda5;
    }
    if (local_c0.Normals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Normals.AllocatorInstance.Data);
    }
  }
  return;
}

// Offset_Smoothed @ 14cd0d2b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FIterativeOffsetMeshOp::Offset_Smoothed
          (FIterativeOffsetMeshOp *this,FProgressCancel *param_1)

{
  atomic<unsigned_char> *this_00;
  double *pdVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FMutex FVar4;
  undefined8 uVar5;
  void *_Src;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  atomic<unsigned_char> aVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  byte bVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  undefined4 uVar16;
  FMeshNormals *pFVar17;
  bool bVar18;
  bool bVar19;
  short sVar20;
  int iVar21;
  longlong lVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  longlong lVar26;
  longlong lVar27;
  uint uVar28;
  float fVar29;
  double dVar30;
  double dVar31;
  undefined1 auStackY_508 [32];
  int local_4b8;
  IndexIterator local_4b0;
  ForAnyElementType local_4a0;
  int local_498;
  int local_494;
  FMeshNormals *local_490;
  int local_488;
  IndexIterator local_480;
  IndexIterator local_470;
  FMeshNormals local_460;
  longlong local_448;
  BaseIterator local_440;
  double local_430;
  double dStack_428;
  double local_420;
  IndexIterator local_418;
  TArrayView<std::nullptr_t,int> local_408;
  code *local_3f8;
  FIterativeOffsetMeshOp **local_3f0;
  FIterativeOffsetMeshOp *local_3e8;
  ForAnyElementType *local_3e0;
  TArrayView<std::nullptr_t,int> local_3d8;
  code *local_3c8;
  FIterativeOffsetMeshOp **local_3c0;
  IndexIterator local_3b8;
  FIterativeOffsetMeshOp *local_3a8;
  ForAnyElementType *local_3a0;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *local_398;
  FDynamicMesh3 local_388;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> local_158;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_508;
  if ((this->_padding_ == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("BaseNormals.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Public\\DeformationOps\\MeshOffsetOps.h"
                          ,0xd6,L""), bVar18)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_498 = (int)this->_padding_;
  lVar22 = (longlong)local_498;
  _Src = (void *)this->_padding_;
  iVar25 = this->Steps;
  if (this->Steps < 1) {
    iVar25 = 1;
  }
  local_4a0.Data = (FScriptContainerElement *)0x0;
  local_488 = iVar25;
  if (local_498 == 0) {
    local_494 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,local_498,0,&local_4a0,local_498,&local_494);
    memcpy(local_4a0.Data,_Src,lVar22 * 0x18);
  }
  bVar18 = 0.0 < this->SmoothAlpha;
  FDynamicMesh3::FDynamicMesh3(&local_388);
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>
            (&local_158);
  if ((this->bReprojectSmooth != false) && (bVar18)) {
    FDynamicMesh3::Copy(&local_388,(FDynamicMesh3 *)this->_padding_,false,false,false,false);
    local_158.Mesh = &local_388;
    local_158.MeshChangeStamp = 0;
    TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown(&local_158,false);
    local_158.MeshChangeStamp = FDynamicMesh3::GetChangeStamp(local_158.Mesh);
  }
  dVar15 = __real_3ff0000000000000;
  local_460.Mesh = (FDynamicMesh3 *)this->_padding_;
  local_460.Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_460.Normals.ArrayNum = 0;
  local_460.Normals.ArrayMax = 0;
  local_4b8 = 0;
  if (0 < iVar25) {
    do {
      if (local_4b8 == 0) {
        if ((this->_padding_ == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x44d,L""), bVar19)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_490 = (FMeshNormals *)this->_padding_;
      }
      else {
        local_490 = &local_460;
      }
      lVar22 = this->_padding_;
      iVar21 = *(int *)(lVar22 + 0x24) + *(int *)(lVar22 + 0x20) * 0x200;
      FRefCountVector::IndexIterator::IndexIterator
                (&local_4b0,(FRefCountVector *)(lVar22 + 0x20),0,iVar21);
      iVar24 = *(int *)(lVar22 + 0x20) * 0x200 + *(int *)(lVar22 + 0x24);
      FRefCountVector::IndexIterator::IndexIterator
                (&local_418,(FRefCountVector *)(lVar22 + 0x20),iVar24,iVar24);
      if (local_4b0._8_4_ != local_418._8_4_) {
        do {
          uVar16 = local_4b0._8_4_;
          lVar22 = (longlong)(int)local_4b0._8_4_;
          dVar9 = dVar15;
          if ((char)this->_padding_ == '\0') {
LAB_14cd0d5c8:
            if (dVar15 <= dVar9) {
              dVar9 = dVar15;
            }
          }
          else {
            if ((this->_padding_ == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar19)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            fVar29 = TIndexedWeightMap<float>::GetValue
                               ((TIndexedWeightMap<float> *)this->_padding_,uVar16);
            dVar9 = (double)fVar29;
            if (0.0 <= (double)fVar29) goto LAB_14cd0d5c8;
            dVar9 = 0.0;
          }
          lVar26 = *(longlong *)
                    (*(longlong *)(this->_padding_ + 0x10) + (ulonglong)((uint)uVar16 >> 9) * 8);
          pdVar1 = (double *)(lVar26 + (ulonglong)(uVar16 & 0x1ff) * 0x18);
          dVar11 = *pdVar1;
          dVar31 = pdVar1[1];
          dVar30 = *(double *)(lVar26 + 0x10 + (ulonglong)(uVar16 & 0x1ff) * 0x18);
          dVar9 = ((dVar15 - dVar9) * (double)this->_padding_ + dVar9 * (double)this->_padding_) *
                  (double)this->_padding_ * (dVar15 / (double)iVar25);
          local_430 = dVar11;
          dStack_428 = dVar31;
          local_420 = dVar30;
          if ((char)this->_padding_ == '\0') {
LAB_14cd0d69b:
            pFVar17 = local_490;
            uVar28 = (uint)~uVar16 >> 0x1f;
            uVar23 = 0;
            if ((int)uVar16 < (local_490->Normals).ArrayNum) {
              uVar23 = uVar28;
            }
            if ((uVar23 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar6 = (pFVar17->Normals).AllocatorInstance.Data;
            dVar11 = local_430 + dVar9 * *(double *)(pFVar6 + lVar22 * 0x18);
            dVar31 = dStack_428 + dVar9 * *(double *)(pFVar6 + lVar22 * 0x18 + 8);
            dVar30 = local_420 + dVar9 * *(double *)(pFVar6 + lVar22 * 0x18 + 0x10);
            local_420 = dVar30;
          }
          else {
            uVar28 = (uint)~uVar16 >> 0x1f;
            uVar23 = 0;
            if ((int)uVar16 < (int)this->_padding_) {
              uVar23 = uVar28;
            }
            if ((uVar23 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (*(char *)(lVar22 + this->_padding_) == '\0') goto LAB_14cd0d69b;
          }
          if (((uVar28 & (int)uVar16 < (int)this->_padding_) == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar26 = this->_padding_;
          local_4b0._8_4_ = uVar16 + 1;
          auVar10._8_4_ = SUB84(dVar31,0);
          auVar10._0_8_ = dVar11;
          auVar10._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
          *(undefined1 (*) [16])(lVar26 + lVar22 * 0x18) = auVar10;
          *(double *)(lVar26 + 0x10 + lVar22 * 0x18) = dVar30;
          if ((int)local_4b0._8_4_ < (int)local_4b0._12_4_) {
            do {
              if ((*(short *)(*(longlong *)
                               (*(longlong *)(local_4b0._0_8_ + 8) +
                               (ulonglong)((uint)local_4b0._8_4_ >> 9) * 8) +
                             (ulonglong)(local_4b0._8_4_ & 0x1ff) * 2) != 0) &&
                 (*(short *)(*(longlong *)
                              (*(longlong *)(local_4b0._0_8_ + 8) +
                              (ulonglong)((uint)local_4b0._8_4_ >> 9) * 8) +
                            (ulonglong)(local_4b0._8_4_ & 0x1ff) * 2) != -1)) break;
              local_4b0._8_4_ = local_4b0._8_4_ + 1;
            } while ((int)local_4b0._8_4_ < (int)local_4b0._12_4_);
          }
        } while (local_4b0._8_4_ != local_418._8_4_);
      }
      if (this->bReprojectSmooth == false) {
LAB_14cd0da36:
        if (bVar18) {
          local_3a0 = &local_4a0;
          local_398 = &local_158;
          local_408.DataPtr = (void **)0x0;
          local_3f8 = Core::Private::Function::
                      TFunctionRefCaller<`UE::Geometry::FIterativeOffsetMeshOp::Offset_Smoothed'::__l31::<lambda_1>,void,int>
                      ::Call;
          local_3f0 = &local_3a8;
          local_408.ArrayNum = 0;
          local_3a8 = this;
          ParallelForImpl::
          ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                    (L"ParallelFor Task",iVar21,1,(TFunctionRef<void___cdecl(int)> *)&local_3f8,
                     (<lambda_1>)0x1,None,&local_408);
          if ((char)this->_padding_ == '\0') {
            local_3e0 = &local_4a0;
            local_3c8 = Core::Private::Function::
                        TFunctionRefCaller<`UE::Geometry::FIterativeOffsetMeshOp::Offset_Smoothed'::__l34::<lambda_2>,void,int>
                        ::Call;
            local_3c0 = &local_3e8;
            local_3d8.DataPtr = (void **)0x0;
            local_3d8.ArrayNum = 0;
            local_3e8 = this;
            ParallelForImpl::
            ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                      (L"ParallelFor Task",(int)this->_padding_,1,
                       (TFunctionRef<void___cdecl(int)> *)&local_3c8,(<lambda_1>)0x1,None,&local_3d8
                      );
          }
          lVar22 = this->_padding_;
          uVar23 = 0;
          iVar25 = *(int *)(lVar22 + 0x24) + *(int *)(lVar22 + 0x20) * 0x200;
          if ((iVar25 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar22 + 0x28) - 1U)))
          {
            uVar23 = 1;
            uVar28 = 1;
            if (1 < iVar25) {
              do {
                uVar23 = uVar28;
                sVar20 = *(short *)((*(undefined8 **)(lVar22 + 0x28))[uVar23 >> 9] +
                                   (ulonglong)(uVar23 & 0x1ff) * 2);
                if ((sVar20 != 0) && (sVar20 != -1)) break;
                uVar23 = uVar23 + 1;
                uVar28 = uVar23;
              } while ((int)uVar23 < iVar25);
            }
          }
          iVar21 = *(int *)(lVar22 + 0x20);
          iVar24 = *(int *)(lVar22 + 0x24);
joined_r0x00014cd0db89:
          if (uVar23 != iVar21 * 0x200 + iVar24) {
            while( true ) {
              uVar28 = 0;
              if ((int)uVar23 < local_498) {
                uVar28 = ~uVar23 >> 0x1f;
              }
              if ((uVar28 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              lVar26 = (longlong)(int)uVar23;
              uVar13 = *(undefined8 *)(local_4a0.Data + lVar26 * 0x18);
              uVar14 = *(undefined8 *)(local_4a0.Data + lVar26 * 0x18 + 8);
              uVar5 = *(undefined8 *)(local_4a0.Data + lVar26 * 0x18 + 0x10);
              uVar28 = 0;
              if ((int)uVar23 < (int)this->_padding_) {
                uVar28 = ~uVar23 >> 0x1f;
              }
              if ((uVar28 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              lVar27 = this->_padding_;
              uVar23 = uVar23 + 1;
              puVar2 = (undefined8 *)(lVar27 + lVar26 * 0x18);
              *puVar2 = uVar13;
              puVar2[1] = uVar14;
              *(undefined8 *)(lVar27 + 0x10 + lVar26 * 0x18) = uVar5;
              if (iVar25 <= (int)uVar23) break;
              while( true ) {
                lVar26 = *(longlong *)(*(longlong *)(lVar22 + 0x28) + (ulonglong)(uVar23 >> 9) * 8);
                if ((*(short *)(lVar26 + (ulonglong)(uVar23 & 0x1ff) * 2) != 0) &&
                   (*(short *)(lVar26 + (ulonglong)(uVar23 & 0x1ff) * 2) != -1)) break;
                uVar23 = uVar23 + 1;
                if (iVar25 <= (int)uVar23) goto joined_r0x00014cd0db89;
              }
            }
            goto joined_r0x00014cd0db89;
          }
        }
      }
      else if (bVar18) {
        lVar22 = this->_padding_;
        FRefCountVector::IndexIterator::IndexIterator
                  (&local_480,(FRefCountVector *)(lVar22 + 0x20),0,
                   *(int *)(lVar22 + 0x20) * 0x200 + *(int *)(lVar22 + 0x24));
        iVar25 = *(int *)(lVar22 + 0x20) * 0x200 + *(int *)(lVar22 + 0x24);
        FRefCountVector::IndexIterator::IndexIterator
                  (&local_470,(FRefCountVector *)(lVar22 + 0x20),iVar25,iVar25);
        uVar23 = local_470._8_4_;
        if (local_480._8_4_ != local_470._8_4_) {
          do {
            uVar16 = local_480._8_4_;
            uVar28 = 0;
            if ((int)local_480._8_4_ < (int)this->_padding_) {
              uVar28 = (uint)~local_480._8_4_ >> 0x1f;
            }
            if ((uVar28 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            lVar22 = this->_padding_;
            lVar26 = (longlong)(int)uVar16;
            sVar20 = _dclass(*(undefined8 *)(lVar22 + lVar26 * 0x18));
            if (((sVar20 < 1) &&
                (sVar20 = _dclass(*(undefined8 *)(lVar22 + 8 + lVar26 * 0x18)), sVar20 < 1)) &&
               (sVar20 = _dclass(*(undefined8 *)(lVar22 + 0x10 + lVar26 * 0x18)), sVar20 < 1)) {
              puVar2 = (undefined8 *)(lVar22 + lVar26 * 0x18);
              uVar13 = puVar2[1];
              uVar5 = *(undefined8 *)(lVar22 + 0x10 + lVar26 * 0x18);
              lVar22 = *(longlong *)
                        (local_388.Vertices.Blocks.AllocatorInstance.Data +
                        (ulonglong)((uint)uVar16 >> 9) * 8);
              puVar3 = (undefined8 *)(lVar22 + (ulonglong)(uVar16 & 0x1ff) * 0x18);
              *puVar3 = *puVar2;
              puVar3[1] = uVar13;
              *(undefined8 *)(lVar22 + 0x10 + (ulonglong)(uVar16 & 0x1ff) * 0x18) = uVar5;
              if (local_388.ChangeStampShape.bIsEnabled != false) {
                LOCK();
                bVar19 = local_388.ChangeStampShape.Mutex.State == (atomic<unsigned_char>)0x0;
                if (bVar19) {
                  local_388.ChangeStampShape.Mutex.State = (atomic<unsigned_char>)0x1;
                }
                UNLOCK();
                if (!bVar19) {
                  FMutex::LockSlow(&local_388.ChangeStampShape.Mutex);
                }
                local_388.ChangeStampShape.Value = local_388.ChangeStampShape.Value + 1;
                LOCK();
                aVar8 = local_388.ChangeStampShape.Mutex.State - 1;
                UNLOCK();
                bVar12 = (byte)local_388.ChangeStampShape.Mutex.State & 2;
                local_388.ChangeStampShape.Mutex.State = aVar8;
                if (bVar12 != 0) {
                  FMutex::WakeWaitingThread(&local_388.ChangeStampShape.Mutex);
                }
              }
            }
            local_480._8_4_ = uVar16 + 1;
            if ((int)local_480._8_4_ < (int)local_480._12_4_) {
              do {
                uVar23 = local_470._8_4_;
                if ((*(short *)(*(longlong *)
                                 (*(longlong *)(local_480._0_8_ + 8) +
                                 (ulonglong)((uint)local_480._8_4_ >> 9) * 8) +
                               (ulonglong)(local_480._8_4_ & 0x1ff) * 2) != 0) &&
                   (*(short *)(*(longlong *)
                                (*(longlong *)(local_480._0_8_ + 8) +
                                (ulonglong)((uint)local_480._8_4_ >> 9) * 8) +
                              (ulonglong)(local_480._8_4_ & 0x1ff) * 2) != -1)) break;
                local_480._8_4_ = local_480._8_4_ + 1;
              } while ((int)local_480._8_4_ < (int)local_480._12_4_);
            }
          } while (local_480._8_4_ != uVar23);
        }
        TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown(&local_158,false);
        local_158.MeshChangeStamp = FDynamicMesh3::GetChangeStamp(local_158.Mesh);
        goto LAB_14cd0da36;
      }
      local_448 = this->_padding_;
      uVar23 = 0;
      iVar25 = *(int *)(local_448 + 0x24) + *(int *)(local_448 + 0x20) * 0x200;
      local_490 = (FMeshNormals *)CONCAT44(local_490._4_4_,iVar25);
      if ((iVar25 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(local_448 + 0x28) - 1U)))
      {
        uVar23 = 1;
        uVar28 = 1;
        if (1 < iVar25) {
          do {
            uVar23 = uVar28;
            sVar20 = *(short *)((*(undefined8 **)(local_448 + 0x28))[uVar23 >> 9] +
                               (ulonglong)(uVar23 & 0x1ff) * 2);
            if ((sVar20 != 0) && (sVar20 != -1)) break;
            uVar23 = uVar23 + 1;
            uVar28 = uVar23;
          } while ((int)uVar23 < iVar25);
        }
      }
      iVar25 = *(int *)(local_448 + 0x20);
      iVar21 = *(int *)(local_448 + 0x24);
joined_r0x00014cd0dd3b:
      if (uVar23 != iVar25 * 0x200 + iVar21) {
        while( true ) {
          lVar22 = this->_padding_;
          uVar28 = 0;
          if ((int)uVar23 < (int)this->_padding_) {
            uVar28 = ~uVar23 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar26 = this->_padding_;
          lVar27 = (longlong)(int)uVar23;
          sVar20 = _dclass(*(undefined8 *)(lVar26 + lVar27 * 0x18));
          if (((sVar20 < 1) &&
              (sVar20 = _dclass(*(undefined8 *)(lVar26 + 8 + lVar27 * 0x18)), sVar20 < 1)) &&
             (sVar20 = _dclass(*(undefined8 *)(lVar26 + 0x10 + lVar27 * 0x18)), sVar20 < 1)) {
            puVar2 = (undefined8 *)(lVar26 + lVar27 * 0x18);
            uVar13 = puVar2[1];
            uVar5 = *(undefined8 *)(lVar26 + 0x10 + lVar27 * 0x18);
            lVar26 = *(longlong *)(*(longlong *)(lVar22 + 0x10) + (ulonglong)(uVar23 >> 9) * 8);
            puVar3 = (undefined8 *)(lVar26 + (ulonglong)(uVar23 & 0x1ff) * 0x18);
            *puVar3 = *puVar2;
            puVar3[1] = uVar13;
            *(undefined8 *)(lVar26 + 0x10 + (ulonglong)(uVar23 & 0x1ff) * 0x18) = uVar5;
            if (*(char *)(lVar22 + 0x21c) != '\0') {
              this_00 = (atomic<unsigned_char> *)(lVar22 + 0x21d);
              LOCK();
              FVar4.State = *this_00;
              if (FVar4.State == (atomic<unsigned_char>)0x0) {
                *this_00 = (atomic<unsigned_char>)0x1;
              }
              UNLOCK();
              if (FVar4.State != (atomic<unsigned_char>)0x0) {
                FMutex::LockSlow((FMutex *)this_00);
              }
              *(int *)(lVar22 + 0x220) = *(int *)(lVar22 + 0x220) + 1;
              LOCK();
              aVar8 = *this_00;
              *this_00 = (atomic<unsigned_char>)((char)*this_00 + -1);
              UNLOCK();
              if (((byte)aVar8 & 2) != 0) {
                FMutex::WakeWaitingThread((FMutex *)this_00);
              }
            }
          }
          uVar23 = uVar23 + 1;
          if ((int)local_490 <= (int)uVar23) break;
          while( true ) {
            lVar22 = *(longlong *)(*(longlong *)(local_448 + 0x28) + (ulonglong)(uVar23 >> 9) * 8);
            if ((*(short *)(lVar22 + (ulonglong)(uVar23 & 0x1ff) * 2) != 0) &&
               (*(short *)(lVar22 + (ulonglong)(uVar23 & 0x1ff) * 2) != -1)) break;
            uVar23 = uVar23 + 1;
            if ((int)local_490 <= (int)uVar23) goto joined_r0x00014cd0dd3b;
          }
        }
        goto joined_r0x00014cd0dd3b;
      }
      FMeshNormals::Compute_FaceAvg(&local_460,true,true);
      local_4b8 = local_4b8 + 1;
      iVar25 = local_488;
    } while (local_4b8 < local_488);
  }
  lVar22 = this->_padding_;
  FRefCountVector::IndexIterator::IndexIterator
            ((IndexIterator *)&local_440,(FRefCountVector *)(lVar22 + 0x20),0,
             *(int *)(lVar22 + 0x20) * 0x200 + *(int *)(lVar22 + 0x24));
  iVar25 = *(int *)(lVar22 + 0x20) * 0x200 + *(int *)(lVar22 + 0x24);
  FRefCountVector::IndexIterator::IndexIterator
            (&local_3b8,(FRefCountVector *)(lVar22 + 0x20),iVar25,iVar25);
  iVar25 = local_440.Index;
  while( true ) {
    if (iVar25 == local_3b8._8_4_) {
      if (local_460.Normals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_460.Normals.AllocatorInstance.Data);
      }
      TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::~TMeshAABBTree3<UE::Geometry::FDynamicMesh3>
                (&local_158);
      FDynamicMesh3::~FDynamicMesh3(&local_388);
      if (local_4a0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4a0.Data);
      }
      return;
    }
    uVar28 = (uint)local_440._8_8_;
    lVar22 = *(longlong *)
              (*(longlong *)(this->_padding_ + 0x10) + ((local_440._8_8_ & 0xffffffff) >> 9) * 8);
    puVar2 = (undefined8 *)(lVar22 + (ulonglong)(uVar28 & 0x1ff) * 0x18);
    uVar13 = *puVar2;
    uVar14 = puVar2[1];
    uVar5 = *(undefined8 *)(lVar22 + 0x10 + (ulonglong)(uVar28 & 0x1ff) * 0x18);
    uVar23 = 0;
    if ((int)uVar28 < (int)this->_padding_) {
      uVar23 = ~uVar28 >> 0x1f;
    }
    if ((uVar23 == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) break;
    lVar22 = this->_padding_;
    puVar2 = (undefined8 *)(lVar22 + (longlong)(int)uVar28 * 0x18);
    *puVar2 = uVar13;
    puVar2[1] = uVar14;
    *(undefined8 *)(lVar22 + 0x10 + (longlong)(int)uVar28 * 0x18) = uVar5;
    FRefCountVector::BaseIterator::goto_next(&local_440);
    iVar25 = local_440.Index;
  }
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

