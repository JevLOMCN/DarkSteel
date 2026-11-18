// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 1

// AddMultiple @ 14337d2a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Geometry::FConvexDecomposition3::SplitWorstHelper'::__l2::FConvexEdgeCandidates::AddMultiple
          (void *this,FConvexPart *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,int param_5,double param_6)

{
  ForAnyElementType *pFVar1;
  uchar *puVar2;
  double dVar3;
  double dVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  bool bVar11;
  int iVar12;
  longlong lVar13;
  double *pdVar14;
  longlong lVar15;
  ForElementType<UE::Geometry::TPlane3<double>_> *_Dst;
  longlong lVar16;
  double dVar17;
  double dVar18;
  undefined1 auStackY_1b8 [32];
  float local_168;
  float local_164;
  undefined1 local_160 [16];
  double local_150;
  double dStack_148;
  double local_140;
  TVector<double>_u_0 local_138;
  undefined1 local_118 [24];
  double adStack_100 [17];
  int local_78;
  int local_74;
  ulonglong local_70;
  
  dVar10 = __real_3e45798ee0000000;
  dVar7 = __real_3ff0000000000000;
  local_70 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  lVar15 = (longlong)param_5;
  iVar12 = 0;
  local_74 = 5;
  local_78 = 0;
  if (0 < lVar15) {
    pdVar14 = &(param_3->field0_0x0)._s_0.Z;
    lVar16 = (longlong)param_4 - (longlong)param_3;
    do {
      dVar18 = ((TVector<double>_u_0_s_0 *)(pdVar14 + -2))->X;
      dVar3 = pdVar14[-1];
      dVar4 = *pdVar14;
      dVar17 = dVar18 * dVar18 + dVar3 * dVar3 + dVar4 * dVar4;
      if (dVar10 < dVar17) {
        local_140 = dVar7 / SQRT(dVar17);
        dVar18 = dVar18 * local_140;
        pdVar14[-1] = dVar3 * local_140;
        *pdVar14 = dVar4 * local_140;
        uVar8 = *(undefined4 *)(pdVar14 + -1);
        uVar9 = *(undefined4 *)((longlong)pdVar14 + -4);
        auVar6._8_4_ = uVar8;
        auVar6._0_8_ = dVar18;
        auVar6._12_4_ = uVar9;
        ((TVector<double>_u_0_s_0 *)(pdVar14 + -2))->X = dVar18;
        ((TVector<double>_u_0_s_0 *)(pdVar14 + -2))->Y = (double)auVar6._8_8_;
        local_160._8_4_ = uVar8;
        local_160._0_8_ = dVar18;
        local_160._12_4_ = uVar9;
        local_150 = *pdVar14;
        dStack_148 = (*(double *)((longlong)pdVar14 + lVar16 + -8) + (param_2->field0_0x0)._s_0.Y) *
                     dVar3 * local_140 +
                     (*(double *)((longlong)pdVar14 + lVar16 + -0x10) + (param_2->field0_0x0)._s_0.X
                     ) * dVar18 +
                     ((param_2->field0_0x0)._s_0.Z + *(double *)((longlong)pdVar14 + lVar16)) *
                     dVar4 * local_140;
        if (((local_118 <= local_160) && (local_160 < local_118 + (longlong)local_74 * 0x20)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), iVar12 = local_78, bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (iVar12 == local_74) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<5>::ForElementType<UE::Geometry::TPlane3<double>_>_>
                             (0x820,(ForElementType<UE::Geometry::TPlane3<double>_> *)local_118,
                              &local_74);
        }
        local_78 = iVar12 + 1;
        lVar13 = (longlong)iVar12 * 0x20;
        *(undefined8 *)(local_118 + lVar13) = local_160._0_8_;
        *(undefined8 *)(local_118 + lVar13 + 8) = local_160._8_8_;
        *(double *)(local_118 + lVar13 + 0x10) = local_150;
        adStack_100[(longlong)iVar12 * 4] = dStack_148;
        iVar12 = local_78;
      }
      pdVar14 = pdVar14 + 3;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    if (iVar12 != 0) {
      if (((*(TVector<double> **)this <= param_2) &&
          (param_2 < *(TVector<double> **)this + *(int *)((longlong)this + 0xc))) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar12 = *(int *)((longlong)this + 8);
      if (iVar12 == *(int *)((longlong)this + 0xc)) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,this,(int *)((longlong)this + 0xc));
      }
      *(int *)((longlong)this + 8) = iVar12 + 1;
      dVar7 = (param_2->field0_0x0)._s_0.Y;
      lVar15 = *(longlong *)this;
      pdVar14 = (double *)(lVar15 + (longlong)iVar12 * 0x18);
      *pdVar14 = (param_2->field0_0x0)._s_0.X;
      pdVar14[1] = dVar7;
      *(double *)(lVar15 + 0x10 + (longlong)iVar12 * 0x18) = (param_2->field0_0x0)._s_0.Z;
      if (((*(undefined1 **)((longlong)this + 0x30) <= local_118) &&
          (local_118 <
           *(undefined1 **)((longlong)this + 0x30) +
           (longlong)*(int *)((longlong)this + 0x3c) * 0xa8)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar12 = *(int *)((longlong)this + 0x38);
      if (iVar12 == *(int *)((longlong)this + 0x3c)) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x8a8,(ForAnyElementType *)((longlong)this + 0x30),
                            (int *)((longlong)this + 0x3c));
      }
      lVar15 = (longlong)local_78;
      *(int *)((longlong)this + 0x38) = iVar12 + 1;
      _Dst = (ForElementType<UE::Geometry::TPlane3<double>_> *)
             ((longlong)iVar12 * 0xa8 + *(longlong *)((longlong)this + 0x30));
      *(int *)_Dst[1].InlineData[0].Pad = local_78;
      puVar2 = _Dst[1].InlineData[0].Pad + 4;
      if (local_78 == 0) {
        puVar2[0] = '\x05';
        puVar2[1] = '\0';
        puVar2[2] = '\0';
        puVar2[3] = '\0';
      }
      else {
        UE::Core::Private::
        ReallocForCopy<0,TFixedAllocator<5>::ForElementType<UE::Geometry::TPlane3<double>_>_>
                  (0x20,8,local_78,0,_Dst,local_78,(int *)puVar2);
        memcpy(_Dst,local_118,lVar15 << 5);
      }
      local_138._s_0.X = (param_2->field0_0x0)._s_0.X;
      local_138._s_0.Y = (param_2->field0_0x0)._s_0.Y;
      local_138._s_0.Z = (param_2->field0_0x0)._s_0.Z;
      dVar7 = UE::Geometry::FConvexDecomposition3::FConvexPart::GetHullDepth
                        (param_1,(TVector<double> *)&local_138._s_0);
      local_168 = (float)dVar7;
      if (((*(float **)((longlong)this + 0x10) <= &local_168) &&
          (&local_168 < *(float **)((longlong)this + 0x10) + *(int *)((longlong)this + 0x1c))) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar12 = *(int *)((longlong)this + 0x18);
      if (iVar12 == *(int *)((longlong)this + 0x1c)) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,(ForAnyElementType *)((longlong)this + 0x10),
                            (int *)((longlong)this + 0x1c));
      }
      *(int *)((longlong)this + 0x18) = iVar12 + 1;
      pFVar1 = (ForAnyElementType *)((longlong)this + 0x20);
      *(float *)(*(longlong *)((longlong)this + 0x10) + (longlong)iVar12 * 4) = local_168;
      local_164 = (float)param_6;
      if (((pFVar1->Data <= (FScriptContainerElement *)&local_164) &&
          ((FScriptContainerElement *)&local_164 <
           pFVar1->Data + (longlong)*(int *)((longlong)this + 0x2c) * 4)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar12 = *(int *)((longlong)this + 0x28);
      if (iVar12 == *(int *)((longlong)this + 0x2c)) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,pFVar1,(int *)((longlong)this + 0x2c));
      }
      *(int *)((longlong)this + 0x28) = iVar12 + 1;
      *(float *)(pFVar1->Data + (longlong)iVar12 * 4) = local_164;
    }
  }
  return;
}

