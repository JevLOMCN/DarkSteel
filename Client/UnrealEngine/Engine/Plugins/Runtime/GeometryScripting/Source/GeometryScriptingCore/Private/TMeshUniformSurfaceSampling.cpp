// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 1

// Init @ 14ce6e980

bool __thiscall
UE::Geometry::TMeshUniformSurfaceSampling<UE::Geometry::FDynamicMesh3,double>::Init
          (TMeshUniformSurfaceSampling<UE::Geometry::FDynamicMesh3,double> *this,
          FDynamicMesh3 *param_1)

{
  double *pdVar1;
  uint uVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined1 uVar12;
  bool bVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int iVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double local_e8;
  undefined8 local_e0;
  ForAnyElementType local_d8;
  uint local_d0;
  uint local_cc;
  FScriptContainerElement *local_c8;
  uint uStack_c0;
  undefined4 uStack_bc;
  TArrayView<double_const_,int> local_b8 [2];
  double local_98;
  
  uVar10 = __real_bff0000000000000;
  dVar9 = __real_3fe0000000000000;
  uVar16 = 0;
  bVar13 = false;
  bVar11 = false;
  iVar20 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
  dVar8 = 0.0;
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = 0;
  local_cc = 0;
  uVar18 = uVar16;
  uVar19 = uVar16;
  dVar26 = 0.0;
  if (0 < iVar20) {
    do {
      uVar14 = (uint)uVar16;
      if ((int)uVar18 <
          (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->TriangleRefCounts).RefCounts.CurBlockUsed)) {
        uVar16 = (ulonglong)((uint)uVar19 & 0x1ff);
        if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                          ((param_1->TriangleRefCounts).RefCounts.Blocks.
                                           AllocatorInstance.Data + (uVar18 >> 9) * 8) + uVar16 * 2)
                             - 1U)) goto LAB_14ce6ec2c;
        lVar3 = *(longlong *)
                 ((param_1->Triangles).Blocks.AllocatorInstance.Data + (uVar18 >> 9) * 8);
        pFVar4 = (param_1->Vertices).Blocks.AllocatorInstance.Data;
        uVar17 = *(uint *)(lVar3 + uVar16 * 0xc);
        uVar15 = (ulonglong)(uVar17 & 0x1ff);
        pdVar1 = (double *)(*(longlong *)(pFVar4 + (ulonglong)(uVar17 >> 9) * 8) + uVar15 * 0x18);
        dVar24 = *pdVar1;
        dVar6 = pdVar1[1];
        dVar26 = *(double *)
                  (*(longlong *)(pFVar4 + (ulonglong)(uVar17 >> 9) * 8) + 0x10 + uVar15 * 0x18);
        uVar17 = *(uint *)(lVar3 + 4 + uVar16 * 0xc);
        uVar15 = (ulonglong)(uVar17 & 0x1ff);
        pdVar1 = (double *)(*(longlong *)(pFVar4 + (ulonglong)(uVar17 >> 9) * 8) + uVar15 * 0x18);
        uVar2 = *(uint *)(lVar3 + 8 + uVar16 * 0xc);
        dVar27 = *pdVar1 - dVar24;
        dVar25 = *(double *)
                  (*(longlong *)(pFVar4 + (ulonglong)(uVar17 >> 9) * 8) + 0x10 + uVar15 * 0x18) -
                 dVar26;
        dVar7 = pdVar1[1] - dVar6;
        uVar16 = (ulonglong)(uVar2 & 0x1ff);
        local_98 = *(double *)
                    (*(longlong *)(pFVar4 + (ulonglong)(uVar2 >> 9) * 8) + 0x10 + uVar16 * 0x18);
        pdVar1 = (double *)(*(longlong *)(pFVar4 + (ulonglong)(uVar2 >> 9) * 8) + uVar16 * 0x18);
        dVar26 = local_98 - dVar26;
        dVar24 = *pdVar1 - dVar24;
        dVar6 = pdVar1[1] - dVar6;
        dVar23 = dVar26 * dVar27 - dVar24 * dVar25;
        dVar26 = dVar6 * dVar25 - dVar26 * dVar7;
        dVar25 = dVar24 * dVar7 - dVar6 * dVar27;
        local_e8 = SQRT(dVar26 * dVar26 + dVar23 * dVar23 + dVar25 * dVar25) * dVar9;
        dVar8 = dVar8 + local_e8;
        if (((local_d8.Data <= (FScriptContainerElement *)&local_e8) &&
            ((FScriptContainerElement *)&local_e8 < local_d8.Data + (longlong)(int)local_cc * 8)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), uVar14 = local_d0, bVar11)) {
          pcVar5 = (code *)swi(3);
          uVar12 = (*pcVar5)();
          return (bool)uVar12;
        }
        if (uVar14 == local_cc) {
          uVar14 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_d8,(int *)&local_cc);
        }
        uVar21 = SUB84(local_e8,0);
        uVar22 = (undefined4)((ulonglong)local_e8 >> 0x20);
        bVar11 = bVar13;
      }
      else {
LAB_14ce6ec2c:
        local_e0 = uVar10;
        bVar11 = true;
        if (((local_d8.Data <= (FScriptContainerElement *)&local_e0) &&
            ((FScriptContainerElement *)&local_e0 < local_d8.Data + (longlong)(int)local_cc * 8)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), uVar14 = local_d0, bVar13)) {
          pcVar5 = (code *)swi(3);
          uVar12 = (*pcVar5)();
          return (bool)uVar12;
        }
        if (uVar14 == local_cc) {
          uVar14 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_d8,(int *)&local_cc);
        }
        uVar21 = (undefined4)local_e0;
        uVar22 = (undefined4)((ulonglong)local_e0 >> 0x20);
      }
      local_d0 = uVar14 + 1;
      uVar17 = (int)uVar18 + 1;
      *(ulonglong *)(local_d8.Data + (longlong)(int)uVar14 * 8) = CONCAT44(uVar22,uVar21);
      uVar16 = (ulonglong)local_d0;
      uVar18 = (ulonglong)uVar17;
      uVar19 = uVar19 + 1;
      bVar13 = bVar11;
      dVar26 = dVar8;
    } while ((int)uVar17 < iVar20);
  }
  uVar14 = local_d0;
  local_c8 = local_d8.Data;
  if (((int)local_d0 < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar13)) {
    pcVar5 = (code *)swi(3);
    uVar12 = (*pcVar5)();
    return (bool)uVar12;
  }
  local_b8[0]._12_4_ = uStack_bc;
  local_b8[0].ArrayNum = uVar14;
  local_b8[0].DataPtr = (double *)local_c8;
  uStack_c0 = uVar14;
  bVar13 = TWeightedSamplingAliasTable<double>::Init(&this->AliasTable,local_b8,dVar26,bVar11);
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  return bVar13;
}

