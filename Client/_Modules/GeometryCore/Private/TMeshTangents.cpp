// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 52

// TMeshTangents<float> @ 143450c00

TMeshTangents<float> * __thiscall
UE::Geometry::TMeshTangents<float>::TMeshTangents<float>
          (TMeshTangents<float> *this,FDynamicMesh3 *param_1)

{
  this->Mesh = param_1;
  (this->Tangents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tangents).ArrayNum = 0;
  (this->Tangents).ArrayMax = 0;
  (this->Bitangents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bitangents).ArrayNum = 0;
  (this->Bitangents).ArrayMax = 0;
  (this->AllDegenerateTris).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllDegenerateTris).ArrayNum = 0;
  (this->AllDegenerateTris).ArrayMax = 0;
  return this;
}

// TMeshTangents<float> @ 143450c30

TMeshTangents<float> * __thiscall
UE::Geometry::TMeshTangents<float>::TMeshTangents<float>(TMeshTangents<float> *this)

{
  (this->Tangents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tangents).ArrayNum = 0;
  (this->Tangents).ArrayMax = 0;
  (this->Bitangents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bitangents).ArrayNum = 0;
  (this->Bitangents).ArrayMax = 0;
  (this->AllDegenerateTris).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllDegenerateTris).ArrayNum = 0;
  (this->AllDegenerateTris).ArrayMax = 0;
  this->Mesh = (FDynamicMesh3 *)0x0;
  return this;
}

// TMeshTangents<double> @ 143450c60

TMeshTangents<double> * __thiscall
UE::Geometry::TMeshTangents<double>::TMeshTangents<double>
          (TMeshTangents<double> *this,FDynamicMesh3 *param_1)

{
  this->Mesh = param_1;
  (this->Tangents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tangents).ArrayNum = 0;
  (this->Tangents).ArrayMax = 0;
  (this->Bitangents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bitangents).ArrayNum = 0;
  (this->Bitangents).ArrayMax = 0;
  (this->AllDegenerateTris).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllDegenerateTris).ArrayNum = 0;
  (this->AllDegenerateTris).ArrayMax = 0;
  return this;
}

// TMeshTangents<double> @ 143450c90

TMeshTangents<double> * __thiscall
UE::Geometry::TMeshTangents<double>::TMeshTangents<double>(TMeshTangents<double> *this)

{
  (this->Tangents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tangents).ArrayNum = 0;
  (this->Tangents).ArrayMax = 0;
  (this->Bitangents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bitangents).ArrayNum = 0;
  (this->Bitangents).ArrayMax = 0;
  (this->AllDegenerateTris).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllDegenerateTris).ArrayNum = 0;
  (this->AllDegenerateTris).ArrayMax = 0;
  this->Mesh = (FDynamicMesh3 *)0x0;
  return this;
}

// ~TMeshTangents<float> @ 1434543b0

void __thiscall
UE::Geometry::TMeshTangents<float>::~TMeshTangents<float>(TMeshTangents<float> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AllDegenerateTris).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Bitangents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Tangents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TMeshTangents<double> @ 143454400

void __thiscall
UE::Geometry::TMeshTangents<double>::~TMeshTangents<double>(TMeshTangents<double> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AllDegenerateTris).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Bitangents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Tangents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator() @ 143458310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Geometry::TMeshTangents<float>::ComputeMikkTStyleTangents'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  int *piVar1;
  double *pdVar2;
  undefined4 *puVar3;
  FDynamicMesh3 *this_00;
  longlong *plVar4;
  longlong lVar5;
  ForAnyElementType *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStackY_188 [32];
  bool local_138 [8];
  uint local_130 [2];
  TVector2<double>_u_0 local_128;
  double local_118;
  TVector<double>_u_0 local_110;
  TVector<double>_u_0 local_f8;
  undefined8 local_d0;
  TVector2<float> local_c8;
  TVector2<float> local_c0;
  TVector2<float> local_b8 [2];
  TVector<double> local_a8;
  TVector<double> local_90;
  TVector<double> local_78;
  ulonglong local_58;
  
  if (-1 < param_1) {
    local_58 = __security_cookie.value ^ (ulonglong)auStackY_188;
    this_00 = (FDynamicMesh3 *)**(undefined8 **)this;
    if (((param_1 < (int)((this_00->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                         (this_00->TriangleRefCounts).RefCounts.CurBlockUsed)) &&
        ((ushort)(*(short *)(*(longlong *)
                              ((this_00->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                              + (ulonglong)((uint)param_1 >> 9) * 8) +
                            (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe)) &&
       (-1 < *(int *)(*(longlong *)
                       (*(longlong *)(**(longlong **)((longlong)this + 8) + 0x78) +
                       (ulonglong)((uint)(param_1 * 3) >> 9) * 8) +
                     (ulonglong)(param_1 * 3 & 0x1ff) * 4))) {
      local_130[0] = param_1;
      UE::Geometry::FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                (this_00,param_1,&local_a8,&local_90,&local_78);
      UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>::GetTriElements
                ((TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)
                 **(undefined8 **)((longlong)this + 8),local_130[0],&local_c8,&local_c0,local_b8);
      ComputeFaceTangent(&local_a8,&local_c8,(TVector<double> *)&local_110._s_0,
                         (TVector<double> *)&local_f8._s_0,(TVector2<double> *)&local_128._s_0,
                         &local_118,local_138);
      lVar11 = (longlong)(int)local_130[0];
      plVar4 = *(longlong **)((longlong)this + 0x10);
      uVar10 = 0;
      if ((int)local_130[0] < (int)plVar4[1]) {
        uVar10 = ~local_130[0] >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar5 = *plVar4;
      pdVar2 = (double *)(lVar5 + lVar11 * 0x18);
      *pdVar2 = local_110._s_0.X;
      pdVar2[1] = local_110._s_0.Y;
      *(double *)(lVar5 + 0x10 + lVar11 * 0x18) = local_110._s_0.Z;
      lVar11 = (longlong)(int)local_130[0];
      plVar4 = *(longlong **)((longlong)this + 0x18);
      uVar10 = 0;
      if ((int)local_130[0] < (int)plVar4[1]) {
        uVar10 = ~local_130[0] >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar5 = *plVar4;
      pdVar2 = (double *)(lVar5 + lVar11 * 0x18);
      *pdVar2 = local_f8._s_0.X;
      pdVar2[1] = local_f8._s_0.Y;
      *(double *)(lVar5 + 0x10 + lVar11 * 0x18) = local_f8._s_0.Z;
      if (local_138[0] == false) {
        uVar16 = 0;
        uVar17 = 0;
        local_d0 = 0;
        uVar12 = local_128._0_4_;
        uVar13 = local_128._4_4_;
        uVar14 = local_128._8_4_;
        uVar15 = local_128._12_4_;
      }
      else {
        uVar16 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
        uVar17 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      }
      lVar11 = (longlong)(int)local_130[0];
      plVar4 = *(longlong **)((longlong)this + 0x20);
      uVar10 = 0;
      if ((int)local_130[0] < (int)plVar4[1]) {
        uVar10 = ~local_130[0] >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar5 = *plVar4;
      puVar3 = (undefined4 *)(lVar5 + lVar11 * 0x18);
      *puVar3 = uVar12;
      puVar3[1] = uVar13;
      puVar3[2] = uVar14;
      puVar3[3] = uVar15;
      *(ulonglong *)(lVar5 + 0x10 + lVar11 * 0x18) = CONCAT44(uVar17,uVar16);
      if (local_138[0] != false) {
        EnterCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x28));
        pFVar6 = *(ForAnyElementType **)((longlong)this + 0x30);
        if (((pFVar6->Data <= (FScriptContainerElement *)local_130) &&
            ((FScriptContainerElement *)local_130 <
             pFVar6->Data + (longlong)*(int *)((longlong)&pFVar6[1].Data + 4) * 4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar9 = *(int *)&pFVar6[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,pFVar6,piVar1);
        }
        *(int *)&pFVar6[1].Data = iVar9 + 1;
        *(uint *)(pFVar6->Data + (longlong)iVar9 * 4) = local_130[0];
        LeaveCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x28));
      }
    }
  }
  return;
}

// operator() @ 1434586d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Geometry::TMeshTangents<double>::ComputeMikkTStyleTangents'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  int *piVar1;
  double *pdVar2;
  undefined4 *puVar3;
  FDynamicMesh3 *this_00;
  longlong *plVar4;
  longlong lVar5;
  ForAnyElementType *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStackY_188 [32];
  bool local_138 [8];
  uint local_130 [2];
  TVector2<double>_u_0 local_128;
  double local_118;
  TVector<double>_u_0 local_110;
  TVector<double>_u_0 local_f8;
  undefined8 local_d0;
  TVector2<float> local_c8;
  TVector2<float> local_c0;
  TVector2<float> local_b8 [2];
  TVector<double> local_a8;
  TVector<double> local_90;
  TVector<double> local_78;
  ulonglong local_58;
  
  if (-1 < param_1) {
    local_58 = __security_cookie.value ^ (ulonglong)auStackY_188;
    this_00 = (FDynamicMesh3 *)**(undefined8 **)this;
    if (((param_1 < (int)((this_00->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                         (this_00->TriangleRefCounts).RefCounts.CurBlockUsed)) &&
        ((ushort)(*(short *)(*(longlong *)
                              ((this_00->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                              + (ulonglong)((uint)param_1 >> 9) * 8) +
                            (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe)) &&
       (-1 < *(int *)(*(longlong *)
                       (*(longlong *)(**(longlong **)((longlong)this + 8) + 0x78) +
                       (ulonglong)((uint)(param_1 * 3) >> 9) * 8) +
                     (ulonglong)(param_1 * 3 & 0x1ff) * 4))) {
      local_130[0] = param_1;
      UE::Geometry::FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                (this_00,param_1,&local_a8,&local_90,&local_78);
      UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>::GetTriElements
                ((TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)
                 **(undefined8 **)((longlong)this + 8),local_130[0],&local_c8,&local_c0,local_b8);
      ComputeFaceTangent(&local_a8,&local_c8,(TVector<double> *)&local_110._s_0,
                         (TVector<double> *)&local_f8._s_0,(TVector2<double> *)&local_128._s_0,
                         &local_118,local_138);
      lVar11 = (longlong)(int)local_130[0];
      plVar4 = *(longlong **)((longlong)this + 0x10);
      uVar10 = 0;
      if ((int)local_130[0] < (int)plVar4[1]) {
        uVar10 = ~local_130[0] >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar5 = *plVar4;
      pdVar2 = (double *)(lVar5 + lVar11 * 0x18);
      *pdVar2 = local_110._s_0.X;
      pdVar2[1] = local_110._s_0.Y;
      *(double *)(lVar5 + 0x10 + lVar11 * 0x18) = local_110._s_0.Z;
      lVar11 = (longlong)(int)local_130[0];
      plVar4 = *(longlong **)((longlong)this + 0x18);
      uVar10 = 0;
      if ((int)local_130[0] < (int)plVar4[1]) {
        uVar10 = ~local_130[0] >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar5 = *plVar4;
      pdVar2 = (double *)(lVar5 + lVar11 * 0x18);
      *pdVar2 = local_f8._s_0.X;
      pdVar2[1] = local_f8._s_0.Y;
      *(double *)(lVar5 + 0x10 + lVar11 * 0x18) = local_f8._s_0.Z;
      if (local_138[0] == false) {
        uVar16 = 0;
        uVar17 = 0;
        local_d0 = 0;
        uVar12 = local_128._0_4_;
        uVar13 = local_128._4_4_;
        uVar14 = local_128._8_4_;
        uVar15 = local_128._12_4_;
      }
      else {
        uVar16 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
        uVar17 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      }
      lVar11 = (longlong)(int)local_130[0];
      plVar4 = *(longlong **)((longlong)this + 0x20);
      uVar10 = 0;
      if ((int)local_130[0] < (int)plVar4[1]) {
        uVar10 = ~local_130[0] >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar5 = *plVar4;
      puVar3 = (undefined4 *)(lVar5 + lVar11 * 0x18);
      *puVar3 = uVar12;
      puVar3[1] = uVar13;
      puVar3[2] = uVar14;
      puVar3[3] = uVar15;
      *(ulonglong *)(lVar5 + 0x10 + lVar11 * 0x18) = CONCAT44(uVar17,uVar16);
      if (local_138[0] != false) {
        EnterCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x28));
        pFVar6 = *(ForAnyElementType **)((longlong)this + 0x30);
        if (((pFVar6->Data <= (FScriptContainerElement *)local_130) &&
            ((FScriptContainerElement *)local_130 <
             pFVar6->Data + (longlong)*(int *)((longlong)&pFVar6[1].Data + 4) * 4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar9 = *(int *)&pFVar6[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,pFVar6,piVar1);
        }
        *(int *)&pFVar6[1].Data = iVar9 + 1;
        *(uint *)(pFVar6->Data + (longlong)iVar9 * 4) = local_130[0];
        LeaveCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x28));
      }
    }
  }
  return;
}

// operator() @ 143458cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Geometry::TMeshTangents<float>::ComputeSeparatePerTriangleTangents'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  FDynamicMesh3 *this_00;
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  undefined8 uVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  float *pfVar15;
  longlong lVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  float fVar24;
  uint uVar25;
  uint uVar26;
  undefined1 auStackY_238 [32];
  bool local_1f8 [4];
  undefined8 local_1f4;
  float local_1ec;
  longlong *local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  float local_1d0;
  TVector<double>_u_0 local_1c8;
  TVector<double>_u_0 local_1b0;
  double local_198;
  TVector2<double> local_190;
  TVector2<float> local_180;
  TVector2<float> local_178;
  TVector2<float> local_170;
  undefined1 local_168 [12];
  TVector<float> local_15c;
  TVector<float> local_150 [2];
  TVector<double> local_138;
  TVector<double> local_120;
  TVector<double> local_108;
  ulonglong local_e8;
  
  if (-1 < param_1) {
    local_e8 = __security_cookie.value ^ (ulonglong)auStackY_238;
    this_00 = (FDynamicMesh3 *)**(undefined8 **)this;
    if (((param_1 < (int)((this_00->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                         (this_00->TriangleRefCounts).RefCounts.CurBlockUsed)) &&
        ((ushort)(*(short *)(*(longlong *)
                              ((this_00->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                              + (ulonglong)((uint)param_1 >> 9) * 8) +
                            (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe)) &&
       (uVar14 = param_1 * 3,
       -1 < *(int *)(*(longlong *)
                      (*(longlong *)(**(longlong **)((longlong)this + 8) + 0x78) +
                      (ulonglong)(uVar14 >> 9) * 8) + (ulonglong)(uVar14 & 0x1ff) * 4))) {
      local_1e8 = this;
      UE::Geometry::FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                (this_00,param_1,&local_138,&local_120,&local_108);
      UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>::GetTriElements
                ((TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)
                 **(undefined8 **)((longlong)this + 8),param_1,&local_180,&local_178,&local_170);
      UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>::GetTriElements
                ((TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)
                 **(undefined8 **)((longlong)this + 0x10),param_1,(TVector<float> *)local_168,
                 &local_15c,local_150);
      ComputeFaceTangent(&local_138,&local_180,(TVector<double> *)&local_1c8._s_0,
                         (TVector<double> *)&local_1b0._s_0,&local_190,&local_198,local_1f8);
      fVar9 = __real_3f800000;
      uVar25 = (uint)__xmm_80000000000000008000000000000000;
      uVar26 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      lVar16 = 3;
      local_1e0 = (longlong)param_1 * 0x24 - (longlong)(local_168 + 4);
      pfVar15 = (float *)(local_168 + 4);
      do {
        lVar11 = local_1e0;
        dVar8 = (double)pfVar15[-1];
        dVar6 = (double)*pfVar15;
        dVar7 = (double)pfVar15[1];
        dVar4 = dVar8 * local_1c8._s_0.X + dVar6 * local_1c8._s_0.Y + dVar7 * local_1c8._s_0.Z;
        dVar5 = local_1c8._s_0.X - dVar8 * dVar4;
        dVar22 = local_1c8._s_0.Y - dVar6 * dVar4;
        dVar4 = local_1c8._s_0.Z - dVar7 * dVar4;
        auVar17._0_8_ = dVar5 * dVar5;
        auVar17._8_8_ = 0;
        auVar18._8_8_ = 0;
        auVar18._0_8_ = dVar22 * dVar22 + auVar17._0_8_ + dVar4 * dVar4;
        auVar18 = sqrtpd(auVar17,auVar18);
        if (auVar18._0_8_ <= 0.0) {
          dVar5 = 0.0;
          dVar22 = 0.0;
          dVar23 = 0.0;
        }
        else {
          dVar23 = __real_3ff0000000000000 / auVar18._0_8_;
          dVar5 = dVar23 * dVar5;
          dVar22 = dVar23 * dVar22;
          dVar23 = dVar23 * dVar4;
        }
        if ((local_1b0._s_0.Z * dVar8 - local_1b0._s_0.X * dVar7) * dVar22 +
            (local_1b0._s_0.Y * dVar7 - local_1b0._s_0.Z * dVar6) * dVar5 +
            (local_1b0._s_0.X * dVar6 - local_1b0._s_0.Y * dVar8) * dVar23 < 0.0) {
          dVar6 = (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) ^ uVar26,SUB84(dVar6,0) ^ uVar25
                                  );
          dVar7 = (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) ^ uVar26,SUB84(dVar7,0) ^ uVar25
                                  );
          dVar8 = (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) ^ uVar26,SUB84(dVar8,0) ^ uVar25
                                  );
        }
        lVar1 = *(longlong *)this;
        fVar20 = (float)(dVar23 * dVar6 - dVar22 * dVar7);
        fVar21 = (float)(dVar5 * dVar7 - dVar23 * dVar8);
        local_1ec = (float)(dVar22 * dVar8 - dVar5 * dVar6);
        fVar19 = SQRT(fVar21 * fVar21 + fVar20 * fVar20 + local_1ec * local_1ec);
        if (fVar19 <= 0.0) {
          local_1f4 = 0;
          local_1ec = 0.0;
        }
        else {
          fVar19 = fVar9 / fVar19;
          local_1ec = local_1ec * fVar19;
          local_1f4 = CONCAT44(fVar21 * fVar19,fVar20 * fVar19);
        }
        fVar21 = (float)dVar5;
        fVar24 = (float)dVar22;
        fVar20 = (float)dVar23;
        fVar19 = SQRT(fVar24 * fVar24 + fVar21 * fVar21 + fVar20 * fVar20);
        if (fVar19 <= 0.0) {
          fVar21 = 0.0;
          fVar24 = 0.0;
          fVar20 = 0.0;
        }
        else {
          fVar19 = fVar9 / fVar19;
          fVar21 = fVar21 * fVar19;
          fVar24 = fVar24 * fVar19;
          fVar20 = fVar20 * fVar19;
        }
        local_1d8 = CONCAT44(fVar24,fVar21);
        uVar13 = 0;
        if ((int)uVar14 < *(int *)(lVar1 + 0x10)) {
          uVar13 = ~uVar14 >> 0x1f;
        }
        local_1d0 = fVar20;
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        fVar19 = local_1ec;
        uVar10 = local_1f4;
        lVar2 = *(longlong *)(lVar1 + 8);
        *(ulonglong *)((longlong)pfVar15 + lVar2 + lVar11) = CONCAT44(fVar24,fVar21);
        *(float *)((longlong)pfVar15 + lVar2 + lVar11 + 8) = fVar20;
        uVar13 = 0;
        if ((int)uVar14 < *(int *)(lVar1 + 0x20)) {
          uVar13 = ~uVar14 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar1 = *(longlong *)(lVar1 + 0x18);
        uVar14 = uVar14 + 1;
        *(undefined8 *)((longlong)pfVar15 + lVar1 + lVar11) = uVar10;
        *(float *)((longlong)pfVar15 + lVar1 + lVar11 + 8) = fVar19;
        lVar16 = lVar16 + -1;
        pfVar15 = pfVar15 + 3;
        this = local_1e8;
      } while (lVar16 != 0);
    }
  }
  return;
}

// operator() @ 143459280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Geometry::TMeshTangents<double>::ComputeSeparatePerTriangleTangents'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  FDynamicMesh3 *this_00;
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  float *pfVar16;
  double dVar17;
  double dVar18;
  undefined1 in_XMM3 [16];
  undefined1 auVar19 [16];
  double dVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  uint uVar23;
  uint uVar24;
  undefined1 auStackY_228 [32];
  bool local_1e8 [8];
  undefined1 local_1e0 [16];
  double local_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  TVector<double>_u_0 local_1b0;
  TVector<double>_u_0 local_198;
  double local_180;
  TVector2<double> local_178;
  TVector2<float> local_168;
  TVector2<float> local_160;
  TVector2<float> local_158;
  undefined1 local_150 [12];
  TVector<float> local_144;
  TVector<float> local_138;
  TVector<double> local_128;
  TVector<double> local_110;
  TVector<double> local_f8;
  ulonglong local_d8;
  
  if (-1 < param_1) {
    local_d8 = __security_cookie.value ^ (ulonglong)auStackY_228;
    this_00 = (FDynamicMesh3 *)**(undefined8 **)this;
    if (((param_1 < (int)((this_00->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                         (this_00->TriangleRefCounts).RefCounts.CurBlockUsed)) &&
        ((ushort)(*(short *)(*(longlong *)
                              ((this_00->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                              + (ulonglong)((uint)param_1 >> 9) * 8) +
                            (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe)) &&
       (uVar13 = param_1 * 3,
       -1 < *(int *)(*(longlong *)
                      (*(longlong *)(**(longlong **)((longlong)this + 8) + 0x78) +
                      (ulonglong)(uVar13 >> 9) * 8) + (ulonglong)(uVar13 & 0x1ff) * 4))) {
      UE::Geometry::FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                (this_00,param_1,&local_128,&local_110,&local_f8);
      UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>::GetTriElements
                ((TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)
                 **(undefined8 **)((longlong)this + 8),param_1,&local_168,&local_160,&local_158);
      UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>::GetTriElements
                ((TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)
                 **(undefined8 **)((longlong)this + 0x10),param_1,(TVector<float> *)local_150,
                 &local_144,&local_138);
      ComputeFaceTangent(&local_128,&local_168,(TVector<double> *)&local_1b0._s_0,
                         (TVector<double> *)&local_198._s_0,&local_178,&local_180,local_1e8);
      dVar10 = __real_3ff0000000000000;
      uVar23 = (uint)__xmm_80000000000000008000000000000000;
      uVar24 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      pfVar16 = (float *)(local_150 + 4);
      lVar14 = (longlong)param_1 * 0x48;
      lVar15 = 3;
      do {
        dVar8 = (double)pfVar16[-1];
        dVar9 = (double)*pfVar16;
        dVar18 = (double)pfVar16[1];
        dVar17 = dVar8 * local_1b0._s_0.X + dVar9 * local_1b0._s_0.Y + dVar18 * local_1b0._s_0.Z;
        dVar5 = local_1b0._s_0.X - dVar8 * dVar17;
        dVar6 = local_1b0._s_0.Y - dVar9 * dVar17;
        local_1b8 = local_1b0._s_0.Z - dVar18 * dVar17;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = dVar6 * dVar6 + dVar5 * dVar5 + local_1b8 * local_1b8;
        auVar19 = sqrtpd(in_XMM3,auVar19);
        if (auVar19._0_8_ <= 0.0) {
          dVar5 = 0.0;
          dVar6 = 0.0;
          local_1b8 = 0.0;
        }
        else {
          dVar17 = dVar10 / auVar19._0_8_;
          dVar5 = dVar5 * dVar17;
          dVar6 = dVar6 * dVar17;
          local_1b8 = local_1b8 * dVar17;
        }
        if ((local_198._s_0.Y * dVar18 - local_198._s_0.Z * dVar9) * dVar5 +
            (dVar8 * local_198._s_0.Z - local_198._s_0.X * dVar18) * dVar6 +
            (local_198._s_0.X * dVar9 - dVar8 * local_198._s_0.Y) * local_1b8 < 0.0) {
          dVar18 = (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) ^ uVar24,
                                    SUB84(dVar18,0) ^ uVar23);
          dVar8 = (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) ^ uVar24,SUB84(dVar8,0) ^ uVar23
                                  );
          dVar9 = (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) ^ uVar24,SUB84(dVar9,0) ^ uVar23
                                  );
        }
        lVar1 = *(longlong *)this;
        dVar20 = dVar5 * dVar18 - local_1b8 * dVar8;
        dVar17 = local_1b8 * dVar9 - dVar6 * dVar18;
        local_1d0 = dVar6 * dVar8 - dVar5 * dVar9;
        dVar18 = SQRT(dVar17 * dVar17 + dVar20 * dVar20 + local_1d0 * local_1d0);
        if (dVar18 <= 0.0) {
          local_1d0 = 0.0;
          dVar17 = 0.0;
          dVar20 = 0.0;
        }
        else {
          dVar18 = dVar10 / dVar18;
          dVar17 = dVar17 * dVar18;
          dVar20 = dVar20 * dVar18;
          local_1d0 = local_1d0 * dVar18;
        }
        uVar22 = (undefined4)((ulonglong)dVar20 >> 0x20);
        local_1e0._8_4_ = SUB84(dVar20,0);
        local_1e0._0_8_ = dVar17;
        local_1e0._12_4_ = uVar22;
        in_XMM3._0_8_ = SQRT(dVar6 * dVar6 + dVar5 * dVar5 + local_1b8 * local_1b8);
        in_XMM3._8_8_ = 0;
        if (in_XMM3._0_8_ <= 0.0) {
          local_1b8 = 0.0;
          dVar5 = 0.0;
          dVar6 = 0.0;
        }
        else {
          dVar18 = dVar10 / in_XMM3._0_8_;
          local_1b8 = local_1b8 * dVar18;
          dVar5 = dVar5 * dVar18;
          dVar6 = dVar6 * dVar18;
        }
        dVar18 = local_1b8;
        uVar21 = (undefined4)((ulonglong)dVar6 >> 0x20);
        local_1c8._8_4_ = SUB84(dVar6,0);
        local_1c8._0_8_ = dVar5;
        local_1c8._12_4_ = uVar21;
        uVar12 = 0;
        if ((int)uVar13 < *(int *)(lVar1 + 0x10)) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        dVar8 = local_1d0;
        lVar2 = *(longlong *)(lVar1 + 8);
        auVar4._8_4_ = SUB84(dVar6,0);
        auVar4._0_8_ = dVar5;
        auVar4._12_4_ = uVar21;
        *(undefined1 (*) [16])(lVar2 + lVar14) = auVar4;
        *(double *)(lVar2 + 0x10 + lVar14) = dVar18;
        uVar12 = 0;
        if ((int)uVar13 < *(int *)(lVar1 + 0x20)) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar1 = *(longlong *)(lVar1 + 0x18);
        uVar13 = uVar13 + 1;
        pfVar16 = pfVar16 + 3;
        auVar7._8_4_ = SUB84(dVar20,0);
        auVar7._0_8_ = dVar17;
        auVar7._12_4_ = uVar22;
        *(undefined1 (*) [16])(lVar14 + lVar1) = auVar7;
        *(double *)(lVar14 + 0x10 + lVar1) = dVar8;
        lVar14 = lVar14 + 0x18;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
  }
  return;
}

// operator() @ 1434597d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Geometry::TMeshTangents<float>::ComputeTriangleTangents'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  uint uVar1;
  FDynamicMesh3 *this_00;
  code *pcVar2;
  double dVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined1 auStackY_1b8 [32];
  uint local_168 [2];
  bool local_160 [8];
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_140;
  TVector<double>_u_0 local_128;
  double local_110;
  TVector2<double> local_108;
  TVector2<float> local_f8;
  TVector2<float> local_f0;
  TVector2<float> local_e8 [2];
  TVector<double> local_d8;
  TVector<double> local_c0;
  TVector<double> local_a8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  this_00 = (FDynamicMesh3 *)**(undefined8 **)this;
  if (((-1 < param_1) &&
      (param_1 < (int)((this_00->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                      (this_00->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
     ((ushort)(*(short *)(*(longlong *)
                           ((this_00->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                           (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 2)
              - 1U) < 0xfffe)) {
    local_168[0] = param_1;
    if (*(int *)(*(longlong *)
                  (*(longlong *)(**(longlong **)((longlong)this + 8) + 0x78) +
                  (ulonglong)((uint)(param_1 * 3) >> 9) * 8) + (ulonglong)(param_1 * 3 & 0x1ff) * 4)
        < 0) {
      EnterCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x10));
      lVar8 = *(longlong *)this;
      if (((*(uint **)(lVar8 + 0x28) <= local_168) &&
          (local_168 < *(uint **)(lVar8 + 0x28) + *(int *)(lVar8 + 0x34))) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = *(int *)(lVar8 + 0x30);
      if (iVar6 == *(int *)(lVar8 + 0x34)) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)(lVar8 + 0x28),(int *)(lVar8 + 0x34));
      }
      *(int *)(lVar8 + 0x30) = iVar6 + 1;
      *(uint *)(*(longlong *)(lVar8 + 0x28) + (longlong)iVar6 * 4) = local_168[0];
      LeaveCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x10));
    }
    else {
      UE::Geometry::FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                (this_00,param_1,&local_d8,&local_c0,&local_a8);
      UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>::GetTriElements
                ((TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)
                 **(undefined8 **)((longlong)this + 8),local_168[0],&local_f8,&local_f0,local_e8);
      uVar1 = local_168[0];
      puVar9 = *(undefined8 **)this;
      UE::Geometry::FDynamicMesh3::GetTriNormal
                ((FDynamicMesh3 *)*puVar9,(TVector<double> *)&local_128._s_0,local_168[0]);
      ComputeFaceTangent(&local_d8,&local_f8,(TVector<double> *)&local_140._s_0,
                         (TVector<double> *)&local_158._s_0,&local_108,&local_110,local_160);
      if (local_160[0] == false) {
        uVar17 = SUB84(local_140._s_0.Z,0);
        uVar19 = (undefined4)((ulonglong)local_140._16_8_ >> 0x20);
        if (**(char **)((longlong)this + 0x18) != '\0') {
          dVar12 = __real_3ff0000000000000;
          if ((local_128._s_0.Z * local_158._s_0.Y - local_128._s_0.Y * local_158._s_0.Z) *
              local_140._s_0.X +
              (local_128._s_0.X * local_158._s_0.Z - local_128._s_0.Z * local_158._s_0.X) *
              local_140._s_0.Y +
              (local_128._s_0.Y * local_158._s_0.X - local_128._s_0.X * local_158._s_0.Y) *
              local_140._s_0.Z < 0.0) {
            dVar12 = __real_bff0000000000000;
          }
          dVar14 = (local_128._s_0.Y * local_140._s_0.Z - local_128._s_0.Z * local_140._s_0.Y) *
                   dVar12;
          auVar10._0_8_ = dVar14 * dVar14;
          auVar10._8_8_ = 0;
          dVar3 = (local_128._s_0.Z * local_140._s_0.X - local_128._s_0.X * local_140._s_0.Z) *
                  dVar12;
          dVar12 = (local_128._s_0.X * local_140._s_0.Y - local_128._s_0.Y * local_140._s_0.X) *
                   dVar12;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = dVar3 * dVar3 + auVar10._0_8_ + dVar12 * dVar12;
          auVar11 = sqrtpd(auVar10,auVar11);
          if (auVar11._0_8_ <= 0.0) {
            local_158._s_0.X = 0.0;
            local_158._s_0.Y = 0.0;
            local_158._s_0.Z = 0.0;
          }
          else {
            dVar13 = __real_3ff0000000000000 / auVar11._0_8_;
            local_158._s_0.X = dVar14 * dVar13;
            local_158._s_0.Y = dVar3 * dVar13;
            local_158._s_0.Z = dVar12 * dVar13;
          }
        }
        uVar4 = 0;
        if ((int)uVar1 < *(int *)(puVar9 + 2)) {
          uVar4 = ~uVar1 >> 0x1f;
        }
      }
      else {
        EnterCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x10));
        lVar8 = *(longlong *)this;
        if (((*(uint **)(lVar8 + 0x28) <= local_168) &&
            (local_168 < *(uint **)(lVar8 + 0x28) + *(int *)(lVar8 + 0x34))) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar6 = *(int *)(lVar8 + 0x30);
        if (iVar6 == *(int *)(lVar8 + 0x34)) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,(ForAnyElementType *)(lVar8 + 0x28),(int *)(lVar8 + 0x34));
        }
        *(int *)(lVar8 + 0x30) = iVar6 + 1;
        *(uint *)(*(longlong *)(lVar8 + 0x28) + (longlong)iVar6 * 4) = local_168[0];
        LeaveCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x10));
        puVar9 = *(undefined8 **)this;
        uVar17 = SUB84(local_140._s_0.Z,0);
        uVar19 = (undefined4)((ulonglong)local_140._16_8_ >> 0x20);
        uVar1 = local_168[0];
        uVar4 = 0;
        if ((int)local_168[0] < *(int *)(puVar9 + 2)) {
          uVar4 = ~local_168[0] >> 0x1f;
        }
      }
      lVar8 = (longlong)(int)uVar1;
      if ((uVar4 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar7 = puVar9[1];
      *(float *)(lVar7 + lVar8 * 0xc) = (float)local_140._s_0.X;
      *(float *)(lVar7 + 4 + lVar8 * 0xc) = (float)local_140._s_0.Y;
      *(float *)(lVar7 + 8 + lVar8 * 0xc) = (float)(double)CONCAT44(uVar19,uVar17);
      lVar8 = *(longlong *)this;
      lVar7 = (longlong)(int)local_168[0];
      fVar18 = (float)local_158._s_0.Z;
      uVar1 = 0;
      if ((int)local_168[0] < *(int *)(lVar8 + 0x20)) {
        uVar1 = ~local_168[0] >> 0x1f;
      }
      fVar16 = (float)local_158._s_0.Y;
      fVar15 = (float)local_158._s_0.X;
      if ((uVar1 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar8 = *(longlong *)(lVar8 + 0x18);
      *(float *)(lVar8 + lVar7 * 0xc) = fVar15;
      *(float *)(lVar8 + 4 + lVar7 * 0xc) = fVar16;
      *(float *)(lVar8 + 8 + lVar7 * 0xc) = fVar18;
    }
  }
  return;
}

// operator() @ 143459db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Geometry::TMeshTangents<double>::ComputeTriangleTangents'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  double *pdVar1;
  FDynamicMesh3 *this_00;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStackY_1c8 [32];
  uint local_178 [2];
  bool local_170 [8];
  TVector<double>_u_0 local_168;
  TVector<double>_u_0 local_150;
  TVector<double>_u_0 local_138;
  double local_120;
  TVector2<double> local_118;
  TVector2<float> local_108;
  TVector2<float> local_100;
  TVector2<float> local_f8 [2];
  TVector<double> local_e8;
  TVector<double> local_d0;
  TVector<double> local_b8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  this_00 = (FDynamicMesh3 *)**(undefined8 **)this;
  if (((-1 < param_1) &&
      (param_1 < (int)((this_00->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                      (this_00->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
     ((ushort)(*(short *)(*(longlong *)
                           ((this_00->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                           (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 2)
              - 1U) < 0xfffe)) {
    local_178[0] = param_1;
    if (*(int *)(*(longlong *)
                  (*(longlong *)(**(longlong **)((longlong)this + 8) + 0x78) +
                  (ulonglong)((uint)(param_1 * 3) >> 9) * 8) + (ulonglong)(param_1 * 3 & 0x1ff) * 4)
        < 0) {
      EnterCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x10));
      lVar2 = *(longlong *)this;
      if (((*(uint **)(lVar2 + 0x28) <= local_178) &&
          (local_178 < *(uint **)(lVar2 + 0x28) + *(int *)(lVar2 + 0x34))) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar10 = *(int *)(lVar2 + 0x30);
      if (iVar10 == *(int *)(lVar2 + 0x34)) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,(ForAnyElementType *)(lVar2 + 0x28),(int *)(lVar2 + 0x34));
      }
      *(int *)(lVar2 + 0x30) = iVar10 + 1;
      *(uint *)(*(longlong *)(lVar2 + 0x28) + (longlong)iVar10 * 4) = local_178[0];
      LeaveCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x10));
    }
    else {
      UE::Geometry::FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                (this_00,param_1,&local_e8,&local_d0,&local_b8);
      UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>::GetTriElements
                ((TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)
                 **(undefined8 **)((longlong)this + 8),local_178[0],&local_108,&local_100,local_f8);
      uVar12 = local_178[0];
      puVar13 = *(undefined8 **)this;
      UE::Geometry::FDynamicMesh3::GetTriNormal
                ((FDynamicMesh3 *)*puVar13,(TVector<double> *)&local_138._s_0,local_178[0]);
      ComputeFaceTangent(&local_e8,&local_108,(TVector<double> *)&local_150._s_0,
                         (TVector<double> *)&local_168._s_0,&local_118,&local_120,local_170);
      if (local_170[0] == false) {
        uVar19 = SUB84(local_150._s_0.Z,0);
        uVar20 = (undefined4)((ulonglong)local_150._16_8_ >> 0x20);
        if (**(char **)((longlong)this + 0x18) != '\0') {
          dVar16 = __real_3ff0000000000000;
          if ((local_138._s_0.X * local_168._s_0.Z - local_168._s_0.X * local_138._s_0.Z) *
              local_150._s_0.Y +
              (local_138._s_0.Z * local_168._s_0.Y - local_138._s_0.Y * local_168._s_0.Z) *
              local_150._s_0.X +
              (local_168._s_0.X * local_138._s_0.Y - local_138._s_0.X * local_168._s_0.Y) *
              local_150._s_0.Z < 0.0) {
            dVar16 = __real_bff0000000000000;
          }
          dVar18 = (local_150._s_0.Z * local_138._s_0.Y - local_150._s_0.Y * local_138._s_0.Z) *
                   dVar16;
          dVar4 = (local_150._s_0.Y * local_138._s_0.X - local_150._s_0.X * local_138._s_0.Y) *
                  dVar16;
          auVar14._0_8_ = dVar18 * dVar18;
          auVar14._8_8_ = 0;
          dVar16 = (local_150._s_0.X * local_138._s_0.Z - local_150._s_0.Z * local_138._s_0.X) *
                   dVar16;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = dVar16 * dVar16 + auVar14._0_8_ + dVar4 * dVar4;
          auVar15 = sqrtpd(auVar14,auVar15);
          if (auVar15._0_8_ <= 0.0) {
            local_168._s_0.X = 0.0;
            local_168._s_0.Y = 0.0;
            local_168._s_0.Z = 0.0;
          }
          else {
            dVar17 = __real_3ff0000000000000 / auVar15._0_8_;
            local_168._s_0.X = dVar18 * dVar17;
            local_168._s_0.Y = dVar16 * dVar17;
            local_168._s_0.Z = dVar4 * dVar17;
          }
        }
        uVar5 = 0;
        if ((int)uVar12 < *(int *)(puVar13 + 2)) {
          uVar5 = ~uVar12 >> 0x1f;
        }
      }
      else {
        EnterCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x10));
        lVar2 = *(longlong *)this;
        if (((*(uint **)(lVar2 + 0x28) <= local_178) &&
            (local_178 < *(uint **)(lVar2 + 0x28) + *(int *)(lVar2 + 0x34))) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar10 = *(int *)(lVar2 + 0x30);
        if (iVar10 == *(int *)(lVar2 + 0x34)) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)(lVar2 + 0x28),(int *)(lVar2 + 0x34));
        }
        *(int *)(lVar2 + 0x30) = iVar10 + 1;
        *(uint *)(*(longlong *)(lVar2 + 0x28) + (longlong)iVar10 * 4) = local_178[0];
        LeaveCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x10));
        puVar13 = *(undefined8 **)this;
        uVar19 = SUB84(local_150._s_0.Z,0);
        uVar20 = (undefined4)((ulonglong)local_150._16_8_ >> 0x20);
        uVar12 = local_178[0];
        uVar5 = 0;
        if ((int)local_178[0] < *(int *)(puVar13 + 2)) {
          uVar5 = ~local_178[0] >> 0x1f;
        }
      }
      if ((uVar5 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar8 = local_168._s_0.Z;
      uVar7 = local_168._s_0.Y;
      uVar6 = local_168._s_0.X;
      lVar2 = puVar13[1];
      pdVar1 = (double *)(lVar2 + (longlong)(int)uVar12 * 0x18);
      *pdVar1 = local_150._s_0.X;
      pdVar1[1] = local_150._s_0.Y;
      *(ulonglong *)(lVar2 + 0x10 + (longlong)(int)uVar12 * 0x18) = CONCAT44(uVar20,uVar19);
      lVar2 = *(longlong *)this;
      lVar11 = (longlong)(int)local_178[0];
      uVar12 = 0;
      if ((int)local_178[0] < *(int *)(lVar2 + 0x20)) {
        uVar12 = ~local_178[0] >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = *(longlong *)(lVar2 + 0x18);
      pdVar1 = (double *)(lVar2 + lVar11 * 0x18);
      *pdVar1 = (double)uVar6;
      pdVar1[1] = (double)uVar7;
      *(undefined8 *)(lVar2 + 0x10 + lVar11 * 0x18) = uVar8;
    }
  }
  return;
}

// operator() @ 1434603b0

bool __thiscall
`UE::Geometry::TMeshTangents<float>::CopyToOverlays'::__l7::<lambda_1>::operator()
          (void *this,int param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int local_38;
  int local_28;
  
  iVar14 = 0;
  lVar3 = *(longlong *)
           (*(longlong *)(*(longlong *)this + 0x130) + (ulonglong)((uint)param_2 >> 9) * 8);
  uVar1 = *(undefined8 *)(lVar3 + (ulonglong)(param_2 & 0x1ff) * 0xc);
  lVar10 = *(longlong *)
            (*(longlong *)(*(longlong *)this + 0x130) + (ulonglong)((uint)param_3 >> 9) * 8);
  uVar2 = *(undefined8 *)(lVar10 + (ulonglong)(param_3 & 0x1ff) * 0xc);
  local_38 = (int)uVar1;
  iVar12 = 0;
  if (local_38 != param_1) {
    if ((int)((ulonglong)uVar1 >> 0x20) == param_1) {
      iVar12 = 1;
    }
    else {
      iVar12 = -1;
      if (*(int *)(lVar3 + 8 + (ulonglong)(param_2 & 0x1ff) * 0xc) == param_1) {
        iVar12 = 2;
      }
    }
  }
  local_28 = (int)uVar2;
  if (((local_28 != param_1) && (iVar14 = 1, (int)((ulonglong)uVar2 >> 0x20) != param_1)) &&
     (iVar14 = -1, *(int *)(lVar10 + 8 + (ulonglong)(param_3 & 0x1ff) * 0xc) == param_1)) {
    iVar14 = 2;
  }
  plVar4 = *(longlong **)((longlong)this + 8);
  uVar15 = iVar12 + param_2 * 3;
  uVar13 = 0;
  if ((int)uVar15 < (int)plVar4[1]) {
    uVar13 = ~uVar15 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  plVar5 = *(longlong **)((longlong)this + 8);
  uVar13 = iVar14 + param_3 * 3;
  lVar3 = *plVar4;
  lVar10 = (longlong)(int)uVar15;
  uVar15 = 0;
  if ((int)uVar13 < (int)plVar5[1]) {
    uVar15 = ~uVar13 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  lVar11 = (longlong)(int)uVar13;
  lVar6 = *plVar5;
  fVar17 = *(float *)(lVar6 + lVar11 * 0xc) - *(float *)(lVar3 + lVar10 * 0xc);
  fVar18 = *(float *)(lVar6 + 4 + lVar11 * 0xc) - *(float *)(lVar3 + 4 + lVar10 * 0xc);
  fVar16 = *(float *)(lVar6 + 8 + lVar11 * 0xc) - *(float *)(lVar3 + 8 + lVar10 * 0xc);
  return fVar18 * fVar18 + fVar17 * fVar17 + fVar16 * fVar16 < __real_358637bd;
}

// operator() @ 1434605b0

bool __thiscall
`UE::Geometry::TMeshTangents<double>::CopyToOverlays'::__l7::<lambda_1>::operator()
          (void *this,int param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  int local_38;
  int local_28;
  
  iVar14 = 0;
  lVar3 = *(longlong *)
           (*(longlong *)(*(longlong *)this + 0x130) + (ulonglong)((uint)param_2 >> 9) * 8);
  uVar1 = *(undefined8 *)(lVar3 + (ulonglong)(param_2 & 0x1ff) * 0xc);
  lVar10 = *(longlong *)
            (*(longlong *)(*(longlong *)this + 0x130) + (ulonglong)((uint)param_3 >> 9) * 8);
  uVar2 = *(undefined8 *)(lVar10 + (ulonglong)(param_3 & 0x1ff) * 0xc);
  local_38 = (int)uVar1;
  iVar12 = 0;
  if (local_38 != param_1) {
    if ((int)((ulonglong)uVar1 >> 0x20) == param_1) {
      iVar12 = 1;
    }
    else {
      iVar12 = -1;
      if (*(int *)(lVar3 + 8 + (ulonglong)(param_2 & 0x1ff) * 0xc) == param_1) {
        iVar12 = 2;
      }
    }
  }
  local_28 = (int)uVar2;
  if (((local_28 != param_1) && (iVar14 = 1, (int)((ulonglong)uVar2 >> 0x20) != param_1)) &&
     (iVar14 = -1, *(int *)(lVar10 + 8 + (ulonglong)(param_3 & 0x1ff) * 0xc) == param_1)) {
    iVar14 = 2;
  }
  plVar4 = *(longlong **)((longlong)this + 8);
  uVar15 = iVar12 + param_2 * 3;
  uVar13 = 0;
  if ((int)uVar15 < (int)plVar4[1]) {
    uVar13 = ~uVar15 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  plVar5 = *(longlong **)((longlong)this + 8);
  uVar13 = iVar14 + param_3 * 3;
  lVar3 = *plVar4;
  lVar10 = (longlong)(int)uVar15;
  uVar15 = 0;
  if ((int)uVar13 < (int)plVar5[1]) {
    uVar15 = ~uVar13 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  lVar11 = (longlong)(int)uVar13;
  lVar6 = *plVar5;
  dVar17 = *(double *)(lVar6 + lVar11 * 0x18) - *(double *)(lVar3 + lVar10 * 0x18);
  dVar18 = *(double *)(lVar6 + 8 + lVar11 * 0x18) - *(double *)(lVar3 + 8 + lVar10 * 0x18);
  dVar16 = *(double *)(lVar6 + 0x10 + lVar11 * 0x18) - *(double *)(lVar3 + 0x10 + lVar10 * 0x18);
  return dVar18 * dVar18 + dVar17 * dVar17 + dVar16 * dVar16 < __real_3e45798ee2308c3a;
}

// operator() @ 1434615a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Geometry::TMeshTangents<float>::ComputeMikkTStyleTangents'::__l2::<lambda_2>::operator()
          (void *this,int param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  float fVar7;
  longlong *plVar8;
  int *piVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  TVector<double>_u_0 *pTVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  ulonglong uVar21;
  ulonglong uVar22;
  float fVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  double dVar31;
  float fVar32;
  double dVar33;
  float fVar34;
  double dVar35;
  undefined4 uVar36;
  undefined1 auStack_518 [32];
  ulonglong local_4f8;
  longlong local_4f0;
  undefined1 local_4e8 [8];
  int local_4e0 [2];
  int local_4d8;
  uint local_4d4;
  int *local_4d0;
  ulonglong local_4c8;
  ulonglong local_4c0;
  longlong *local_4b8;
  int local_4b0 [4];
  undefined1 *local_4a0;
  int *local_498;
  code *local_490;
  undefined8 *local_488;
  TVector<double>_u_0 local_480;
  undefined8 local_468;
  longlong *local_460;
  int *local_458;
  undefined8 local_450;
  undefined8 local_448;
  undefined8 local_440;
  undefined8 local_438;
  undefined8 local_430;
  undefined1 *local_428;
  undefined1 *local_420;
  undefined1 *local_418;
  undefined1 *local_410;
  undefined8 local_408;
  int **local_400;
  TVector<double> local_3f8;
  double local_3d0;
  undefined1 local_3c8 [192];
  undefined1 *local_308;
  int local_300;
  undefined4 local_2fc;
  undefined1 local_2f8 [192];
  undefined1 *local_238;
  uint local_230;
  undefined4 local_22c;
  undefined1 local_228 [192];
  undefined1 *local_168;
  int local_160;
  undefined4 local_15c;
  undefined1 local_158 [96];
  void *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  ulonglong local_e8;
  ulonglong uVar20;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_518;
  local_460 = *(longlong **)this;
  lVar3 = *local_460;
  if (((-1 < param_1) && (param_1 < *(int *)(lVar3 + 0x20) * 0x200 + *(int *)(lVar3 + 0x24))) &&
     ((ushort)(*(short *)(*(longlong *)
                           (*(longlong *)(lVar3 + 0x28) + (ulonglong)((uint)param_1 >> 9) * 8) +
                         (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    local_468 = *(undefined8 *)((longlong)this + 8);
    uVar16 = 0;
    local_f8 = (void *)0x0;
    local_f0 = 0;
    local_238 = (undefined1 *)0x0;
    local_230 = 0;
    local_168 = (undefined1 *)0x0;
    local_160 = 0;
    local_308 = (undefined1 *)0x0;
    local_300 = 0;
    local_4d0 = (int *)0x0;
    local_4c8 = 0;
    local_ec = 8;
    local_22c = 8;
    local_15c = 8;
    local_2fc = 8;
    local_458 = local_4e0;
    local_450 = *(undefined8 *)((longlong)this + 0x10);
    local_448 = *(undefined8 *)((longlong)this + 0x18);
    local_440 = *(undefined8 *)((longlong)this + 0x20);
    local_438 = *(undefined8 *)((longlong)this + 0x28);
    local_430 = *(undefined8 *)((longlong)this + 0x30);
    local_428 = local_158;
    local_420 = local_2f8;
    local_418 = local_228;
    local_410 = local_3c8;
    local_408 = *(undefined8 *)((longlong)this + 0x38);
    local_400 = &local_4d0;
    local_488 = &local_468;
    local_490 = UE::Core::Private::Function::
                TFunctionRefCaller<``UE::Geometry::TMeshTangents<float>::ComputeMikkTStyleTangents'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,void,int>
                ::Call;
    local_4e0[0] = param_1;
    local_4b8 = this;
    UE::Geometry::FDynamicMesh3::EnumerateVertexTriangles
              ((FDynamicMesh3 *)*local_460,param_1,(TFunctionRef<void___cdecl(int)> *)&local_490);
    uVar15 = (ulonglong)(int)local_230;
    uVar36 = (undefined4)__real_3ff0000000000000;
    uVar28 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    uVar21 = uVar15;
    uVar20 = uVar16;
    uVar22 = uVar16;
    if (0 < (int)local_230) {
      do {
        uVar19 = (uint)uVar20;
        uVar17 = ~uVar19 >> 0x1f;
        uVar11 = 0;
        if ((int)uVar19 < (int)uVar21) {
          uVar11 = uVar17;
        }
        if (uVar11 == 0) {
          local_4f0 = (longlong)(int)uVar21;
          local_4f8 = (ulonglong)(int)uVar19;
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        puVar13 = local_2f8;
        if (local_238 != (undefined1 *)0x0) {
          puVar13 = local_238;
        }
        dVar35 = *(double *)(puVar13 + uVar16);
        dVar33 = *(double *)(puVar13 + uVar16 + 8);
        dVar31 = *(double *)(puVar13 + uVar16 + 0x10);
        auVar25._0_8_ = dVar31 * dVar31;
        auVar25._8_8_ = 0;
        auVar26._8_8_ = 0;
        auVar26._0_8_ = dVar33 * dVar33 + dVar35 * dVar35 + auVar25._0_8_;
        auVar26 = sqrtpd(auVar25,auVar26);
        if (auVar26._0_8_ <= 0.0) {
          dVar31 = 0.0;
          dVar33 = 0.0;
          dVar35 = 0.0;
        }
        else {
          dVar24 = (double)CONCAT44(uVar28,uVar36) / auVar26._0_8_;
          dVar31 = dVar31 * dVar24;
          dVar33 = dVar33 * dVar24;
          dVar35 = dVar35 * dVar24;
        }
        *(double *)(puVar13 + uVar16) = dVar35;
        *(double *)(puVar13 + uVar16 + 8) = dVar33;
        *(double *)(puVar13 + uVar16 + 0x10) = dVar31;
        uVar12 = 0;
        uVar11 = uVar12;
        if ((int)uVar19 < local_160) {
          uVar11 = uVar17;
        }
        if ((uVar11 == 0) &&
           (local_4f8 = uVar22, local_4f0 = (longlong)local_160,
           bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar13 = local_228;
        if (local_168 != (undefined1 *)0x0) {
          puVar13 = local_168;
        }
        dVar35 = *(double *)(puVar13 + uVar16);
        dVar33 = *(double *)(puVar13 + uVar16 + 8);
        dVar31 = *(double *)(puVar13 + uVar16 + 0x10);
        auVar27._0_8_ = dVar31 * dVar31;
        auVar27._8_8_ = 0;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = dVar33 * dVar33 + dVar35 * dVar35 + auVar27._0_8_;
        auVar26 = sqrtpd(auVar27,auVar5);
        if (auVar26._0_8_ <= 0.0) {
          dVar31 = 0.0;
          dVar33 = 0.0;
          dVar35 = 0.0;
        }
        else {
          dVar24 = (double)CONCAT44(uVar28,uVar36) / auVar26._0_8_;
          dVar31 = dVar31 * dVar24;
          dVar33 = dVar33 * dVar24;
          dVar35 = dVar35 * dVar24;
        }
        *(double *)(puVar13 + uVar16) = dVar35;
        *(double *)(puVar13 + uVar16 + 8) = dVar33;
        *(double *)(puVar13 + uVar16 + 0x10) = dVar31;
        uVar11 = uVar12;
        if ((int)uVar19 < local_300) {
          uVar11 = uVar17;
        }
        if ((uVar11 == 0) &&
           (local_4f8 = uVar22, local_4f0 = (longlong)local_300,
           bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar13 = local_3c8;
        if (local_308 != (undefined1 *)0x0) {
          puVar13 = local_308;
        }
        if (0.0 < *(double *)(puVar13 + uVar16 + 0x10)) {
          uVar11 = uVar12;
          if ((int)uVar19 < local_300) {
            uVar11 = uVar17;
          }
          if (uVar11 == 0) {
            local_4f0 = (longlong)local_300;
            local_4f8 = (ulonglong)(int)uVar19;
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          puVar13 = local_3c8;
          if (local_308 != (undefined1 *)0x0) {
            puVar13 = local_308;
          }
          dVar35 = *(double *)(puVar13 + uVar16 + 0x10);
          if ((int)uVar19 < local_300) {
            uVar12 = uVar17;
          }
          if (uVar12 == 0) {
            local_4f0 = (longlong)local_300;
            local_4f8 = (ulonglong)(int)uVar19;
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          puVar13 = local_3c8;
          if (local_308 != (undefined1 *)0x0) {
            puVar13 = local_308;
          }
          *(double *)(puVar13 + uVar16) = *(double *)(puVar13 + uVar16) / dVar35;
          uVar11 = 0;
          if ((int)uVar19 < local_300) {
            uVar11 = uVar17;
          }
          if ((uVar11 == 0) &&
             (local_4f8 = uVar22, local_4f0 = (longlong)local_300,
             bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          puVar13 = local_3c8;
          if (local_308 != (undefined1 *)0x0) {
            puVar13 = local_308;
          }
          dVar35 = *(double *)(puVar13 + uVar16 + 0x10);
          uVar11 = 0;
          if ((int)uVar19 < local_300) {
            uVar11 = uVar17;
          }
          if (uVar11 == 0) {
            local_4f0 = (longlong)local_300;
            local_4f8 = uVar22;
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          puVar13 = local_3c8;
          if (local_308 != (undefined1 *)0x0) {
            puVar13 = local_308;
          }
          uVar36 = (undefined4)__real_3ff0000000000000;
          uVar28 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
          *(double *)(puVar13 + uVar16 + 8) = *(double *)(puVar13 + uVar16 + 8) / dVar35;
        }
        uVar21 = (ulonglong)local_230;
        uVar22 = uVar22 + 1;
        uVar16 = uVar16 + 0x18;
        uVar20 = (ulonglong)(uVar19 + 1);
      } while ((longlong)uVar22 < (longlong)uVar15);
    }
    fVar7 = __real_3f800000;
    uVar15 = (ulonglong)(int)(uint)local_4c8;
    uVar36 = (undefined4)__real_bff0000000000000;
    uVar20 = (ulonglong)__real_bff0000000000000 >> 0x20;
    local_498 = local_4d0 + uVar15 * 3;
    local_4d4 = (uint)local_4c8;
    piVar18 = local_4d0;
    uVar22 = uVar15;
    while( true ) {
      piVar9 = local_498;
      uVar11 = (uint)uVar21;
      if ((int)uVar15 != (int)uVar22) {
        local_4e8[0] = 0;
        `TCheckedPointerIterator<UE::Geometry::FIndex3i,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_4e8);
        uVar11 = local_230;
      }
      if (piVar18 == piVar9) break;
      uVar17 = piVar18[2];
      uVar21 = (ulonglong)(int)uVar17;
      iVar1 = piVar18[1];
      iVar2 = *piVar18;
      uVar19 = 0;
      if ((int)uVar17 < (int)uVar11) {
        uVar19 = ~uVar17 >> 0x1f;
      }
      local_4d8 = iVar1;
      if (uVar19 == 0) {
        local_4f0 = (longlong)(int)uVar11;
        local_4f8 = uVar21;
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      puVar13 = local_2f8;
      if (local_238 != (undefined1 *)0x0) {
        puVar13 = local_238;
      }
      uVar11 = 0;
      if ((int)uVar17 < local_160) {
        uVar11 = ~uVar17 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (local_4f8 = uVar21, local_4f0 = (longlong)local_160,
         bVar10 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      fVar30 = (float)*(double *)(puVar13 + uVar21 * 0x18);
      local_4a0 = local_228;
      if (local_168 != (undefined1 *)0x0) {
        local_4a0 = local_168;
      }
      uVar17 = iVar2 * 3;
      local_4c0 = (ulonglong)uVar17;
      uVar11 = uVar17 + iVar1;
      fVar32 = (float)*(double *)(puVar13 + uVar21 * 0x18 + 8);
      fVar34 = (float)*(double *)(puVar13 + uVar21 * 0x18 + 0x10);
      fVar23 = SQRT(fVar32 * fVar32 + fVar30 * fVar30 + fVar34 * fVar34);
      if (fVar23 <= 0.0) {
        fVar30 = 0.0;
        fVar32 = 0.0;
        fVar23 = 0.0;
      }
      else {
        fVar23 = fVar7 / fVar23;
        fVar30 = fVar23 * fVar30;
        fVar32 = fVar23 * fVar32;
        fVar23 = fVar23 * fVar34;
      }
      lVar3 = *local_4b8;
      iVar1 = *(int *)(lVar3 + 0x10);
      uVar19 = 0;
      if ((int)uVar11 < iVar1) {
        uVar19 = ~uVar11 >> 0x1f;
      }
      if (uVar19 == 0) {
        local_4f8 = (ulonglong)(int)uVar11;
        local_4f0 = (longlong)iVar1;
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar17 = (uint)local_4c0;
      }
      plVar8 = local_4b8;
      lVar3 = *(longlong *)(lVar3 + 8);
      *(ulonglong *)(lVar3 + (longlong)(int)uVar11 * 0xc) = CONCAT44(fVar32,fVar30);
      *(float *)(lVar3 + 8 + (longlong)(int)uVar11 * 0xc) = fVar23;
      lVar3 = *(longlong *)(*(longlong *)local_4b8[3] + 0x78);
      local_4b0[0] = *(int *)(*(longlong *)(lVar3 + (ulonglong)(uVar17 >> 9) * 8) +
                             (ulonglong)(uVar17 & 0x1ff) * 4);
      local_4b0[1] = *(undefined4 *)
                      (*(longlong *)(lVar3 + (ulonglong)(uVar17 + 1 >> 9) * 8) +
                      (ulonglong)(uVar17 + 1 & 0x1ff) * 4);
      local_4b0[2] = *(undefined4 *)
                      (*(longlong *)(lVar3 + (ulonglong)(uVar17 + 2 >> 9) * 8) +
                      (ulonglong)(uVar17 + 2 & 0x1ff) * 4);
      if (local_4b0[0] < 0) {
        pTVar14 = &UE::Geometry::FDynamicMesh3::GetTriNormal
                             (*(FDynamicMesh3 **)*local_4b8,&local_3f8,iVar2)->field0_0x0;
      }
      else {
        lVar3 = *(longlong *)(*(longlong *)local_4b8[3] + 0x48);
        uVar17 = local_4b0[local_4d8] * 3;
        local_480._s_0.X =
             (double)*(float *)(*(longlong *)(lVar3 + (ulonglong)(uVar17 >> 9) * 8) +
                               (ulonglong)(uVar17 & 0x1ff) * 4);
        pTVar14 = &local_480;
        local_480._s_0.Y =
             (double)*(float *)(*(longlong *)(lVar3 + (ulonglong)(uVar17 + 1 >> 9) * 8) +
                               (ulonglong)(uVar17 + 1 & 0x1ff) * 4);
        local_480._s_0.Z =
             (double)*(float *)(*(longlong *)(lVar3 + (ulonglong)(uVar17 + 2 >> 9) * 8) +
                               (ulonglong)(uVar17 + 2 & 0x1ff) * 4);
      }
      dVar24 = (((TVector<double>_u_0 *)&(pTVar14->_s_0).X)->_s_0).X;
      dVar6 = (pTVar14->_s_0).Y;
      local_3d0 = (pTVar14->_s_0).Z;
      dVar35 = *(double *)(puVar13 + uVar21 * 0x18 + 8);
      dVar33 = *(double *)(puVar13 + uVar21 * 0x18);
      dVar31 = *(double *)(puVar13 + uVar21 * 0x18 + 0x10);
      lVar3 = *plVar8;
      uVar28 = uVar36;
      uVar29 = (int)uVar20;
      if (0.0 <= (local_3d0 * *(double *)(local_4a0 + uVar21 * 0x18 + 8) -
                 dVar6 * *(double *)(local_4a0 + uVar21 * 0x18 + 0x10)) * dVar33 +
                 (dVar24 * *(double *)(local_4a0 + uVar21 * 0x18 + 0x10) -
                 local_3d0 * *(double *)(local_4a0 + uVar21 * 0x18)) * dVar35 +
                 (dVar6 * *(double *)(local_4a0 + uVar21 * 0x18) -
                 dVar24 * *(double *)(local_4a0 + uVar21 * 0x18 + 8)) * dVar31) {
        uVar28 = (int)__real_3ff0000000000000;
        uVar29 = (int)((ulonglong)__real_3ff0000000000000 >> 0x20);
      }
      fVar23 = (float)((dVar6 * dVar31 - local_3d0 * dVar35) * (double)CONCAT44(uVar29,uVar28));
      fVar32 = (float)((local_3d0 * dVar33 - dVar24 * dVar31) * (double)CONCAT44(uVar29,uVar28));
      fVar34 = (float)((dVar24 * dVar35 - dVar6 * dVar33) * (double)CONCAT44(uVar29,uVar28));
      fVar30 = SQRT(fVar32 * fVar32 + fVar23 * fVar23 + fVar34 * fVar34);
      if (fVar30 <= 0.0) {
        fVar23 = 0.0;
        fVar32 = 0.0;
        fVar30 = 0.0;
      }
      else {
        fVar30 = fVar7 / fVar30;
        fVar23 = fVar30 * fVar23;
        fVar32 = fVar30 * fVar32;
        fVar30 = fVar30 * fVar34;
      }
      iVar1 = *(int *)(lVar3 + 0x20);
      uVar17 = 0;
      if ((int)uVar11 < iVar1) {
        uVar17 = ~uVar11 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (local_4f8 = (longlong)(int)uVar11, local_4f0 = (longlong)iVar1,
         bVar10 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar3 = *(longlong *)(lVar3 + 0x18);
      uVar22 = (ulonglong)local_4d4;
      piVar18 = piVar18 + 3;
      *(ulonglong *)(lVar3 + (longlong)(int)uVar11 * 0xc) = CONCAT44(fVar32,fVar23);
      *(float *)(lVar3 + 8 + (longlong)(int)uVar11 * 0xc) = fVar30;
      uVar21 = (ulonglong)local_230;
      uVar15 = local_4c8 & 0xffffffff;
    }
    if (local_4d0 != (int *)0x0) {
      FMemory::Free(local_4d0);
    }
    if (local_308 != (undefined1 *)0x0) {
      FMemory::Free(local_308);
    }
    if (local_168 != (undefined1 *)0x0) {
      FMemory::Free(local_168);
    }
    if (local_238 != (undefined1 *)0x0) {
      FMemory::Free(local_238);
    }
    if (local_f8 != (void *)0x0) {
      FMemory::Free(local_f8);
    }
  }
  return;
}

// operator() @ 143462140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Geometry::TMeshTangents<double>::ComputeMikkTStyleTangents'::__l2::<lambda_2>::operator()
          (void *this,int param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  longlong *plVar8;
  int *piVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  TVector<double>_u_0 *pTVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auStack_508 [32];
  ulonglong local_4e8;
  longlong local_4e0;
  undefined1 local_4d8 [4];
  int local_4d4;
  int local_4d0 [2];
  int local_4c8;
  uint local_4c4;
  int *local_4c0;
  ulonglong local_4b8;
  longlong *local_4b0;
  int local_4a8 [4];
  longlong local_498;
  undefined1 *local_490;
  int *local_488;
  code *local_480;
  undefined8 *local_478;
  TVector<double>_u_0 local_470;
  undefined8 local_458;
  longlong *local_450;
  int *local_448;
  undefined8 local_440;
  undefined8 local_438;
  undefined8 local_430;
  undefined8 local_428;
  undefined8 local_420;
  undefined1 *local_418;
  undefined1 *local_410;
  undefined1 *local_408;
  undefined1 *local_400;
  undefined8 local_3f8;
  int **local_3f0;
  double local_3d8;
  TVector<double> local_3d0;
  undefined1 local_3b8 [192];
  undefined1 *local_2f8;
  int local_2f0;
  undefined4 local_2ec;
  undefined1 local_2e8 [192];
  undefined1 *local_228;
  uint local_220;
  undefined4 local_21c;
  undefined1 local_218 [192];
  undefined1 *local_158;
  int local_150;
  undefined4 local_14c;
  undefined1 local_148 [96];
  void *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  ulonglong local_d8;
  ulonglong uVar20;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_508;
  local_450 = *(longlong **)this;
  lVar2 = *local_450;
  if (((-1 < param_1) && (param_1 < *(int *)(lVar2 + 0x20) * 0x200 + *(int *)(lVar2 + 0x24))) &&
     ((ushort)(*(short *)(*(longlong *)
                           (*(longlong *)(lVar2 + 0x28) + (ulonglong)((uint)param_1 >> 9) * 8) +
                         (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    local_458 = *(undefined8 *)((longlong)this + 8);
    uVar16 = 0;
    local_e8 = (void *)0x0;
    local_e0 = 0;
    local_228 = (undefined1 *)0x0;
    local_220 = 0;
    local_158 = (undefined1 *)0x0;
    local_150 = 0;
    local_2f8 = (undefined1 *)0x0;
    local_2f0 = 0;
    local_4c0 = (int *)0x0;
    local_4b8 = 0;
    local_dc = 8;
    local_21c = 8;
    local_14c = 8;
    local_2ec = 8;
    local_448 = local_4d0;
    local_440 = *(undefined8 *)((longlong)this + 0x10);
    local_438 = *(undefined8 *)((longlong)this + 0x18);
    local_430 = *(undefined8 *)((longlong)this + 0x20);
    local_428 = *(undefined8 *)((longlong)this + 0x28);
    local_420 = *(undefined8 *)((longlong)this + 0x30);
    local_418 = local_148;
    local_410 = local_2e8;
    local_408 = local_218;
    local_400 = local_3b8;
    local_3f8 = *(undefined8 *)((longlong)this + 0x38);
    local_3f0 = &local_4c0;
    local_478 = &local_458;
    local_480 = UE::Core::Private::Function::
                TFunctionRefCaller<``UE::Geometry::TMeshTangents<double>::ComputeMikkTStyleTangents'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,void,int>
                ::Call;
    local_4d0[0] = param_1;
    local_4b0 = this;
    UE::Geometry::FDynamicMesh3::EnumerateVertexTriangles
              ((FDynamicMesh3 *)*local_450,param_1,(TFunctionRef<void___cdecl(int)> *)&local_480);
    dVar7 = __real_3ff0000000000000;
    uVar15 = (ulonglong)(int)local_220;
    uVar21 = uVar15;
    uVar20 = uVar16;
    uVar23 = uVar16;
    if (0 < (int)local_220) {
      do {
        uVar19 = (uint)uVar20;
        uVar17 = ~uVar19 >> 0x1f;
        uVar11 = 0;
        if ((int)uVar19 < (int)uVar21) {
          uVar11 = uVar17;
        }
        if (uVar11 == 0) {
          local_4e0 = (longlong)(int)uVar21;
          local_4e8 = (ulonglong)(int)uVar19;
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        puVar13 = local_2e8;
        if (local_228 != (undefined1 *)0x0) {
          puVar13 = local_228;
        }
        dVar35 = *(double *)(puVar13 + uVar16);
        dVar34 = *(double *)(puVar13 + uVar16 + 8);
        dVar32 = *(double *)(puVar13 + uVar16 + 0x10);
        auVar29._0_8_ = dVar32 * dVar32;
        auVar29._8_8_ = 0;
        auVar30._8_8_ = 0;
        auVar30._0_8_ = dVar34 * dVar34 + dVar35 * dVar35 + auVar29._0_8_;
        auVar30 = sqrtpd(auVar29,auVar30);
        if (auVar30._0_8_ <= 0.0) {
          dVar32 = 0.0;
          dVar34 = 0.0;
          dVar35 = 0.0;
        }
        else {
          dVar24 = dVar7 / auVar30._0_8_;
          dVar32 = dVar32 * dVar24;
          dVar34 = dVar34 * dVar24;
          dVar35 = dVar35 * dVar24;
        }
        *(double *)(puVar13 + uVar16) = dVar35;
        *(double *)(puVar13 + uVar16 + 8) = dVar34;
        *(double *)(puVar13 + uVar16 + 0x10) = dVar32;
        uVar12 = 0;
        uVar11 = uVar12;
        if ((int)uVar19 < local_150) {
          uVar11 = uVar17;
        }
        if ((uVar11 == 0) &&
           (local_4e8 = uVar23, local_4e0 = (longlong)local_150,
           bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar10)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        puVar13 = local_218;
        if (local_158 != (undefined1 *)0x0) {
          puVar13 = local_158;
        }
        dVar35 = *(double *)(puVar13 + uVar16);
        dVar34 = *(double *)(puVar13 + uVar16 + 8);
        dVar32 = *(double *)(puVar13 + uVar16 + 0x10);
        auVar31._0_8_ = dVar32 * dVar32;
        auVar31._8_8_ = 0;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = dVar34 * dVar34 + dVar35 * dVar35 + auVar31._0_8_;
        auVar30 = sqrtpd(auVar31,auVar4);
        if (auVar30._0_8_ <= 0.0) {
          dVar32 = 0.0;
          dVar34 = 0.0;
          dVar35 = 0.0;
        }
        else {
          dVar24 = dVar7 / auVar30._0_8_;
          dVar32 = dVar32 * dVar24;
          dVar34 = dVar34 * dVar24;
          dVar35 = dVar35 * dVar24;
        }
        *(double *)(puVar13 + uVar16) = dVar35;
        *(double *)(puVar13 + uVar16 + 8) = dVar34;
        *(double *)(puVar13 + uVar16 + 0x10) = dVar32;
        uVar11 = uVar12;
        if ((int)uVar19 < local_2f0) {
          uVar11 = uVar17;
        }
        if ((uVar11 == 0) &&
           (local_4e8 = uVar23, local_4e0 = (longlong)local_2f0,
           bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar10)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        puVar13 = local_3b8;
        if (local_2f8 != (undefined1 *)0x0) {
          puVar13 = local_2f8;
        }
        if (0.0 < *(double *)(puVar13 + uVar16 + 0x10)) {
          uVar11 = uVar12;
          if ((int)uVar19 < local_2f0) {
            uVar11 = uVar17;
          }
          if (uVar11 == 0) {
            local_4e0 = (longlong)local_2f0;
            local_4e8 = (ulonglong)(int)uVar19;
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          puVar13 = local_3b8;
          if (local_2f8 != (undefined1 *)0x0) {
            puVar13 = local_2f8;
          }
          dVar35 = *(double *)(puVar13 + uVar16 + 0x10);
          if ((int)uVar19 < local_2f0) {
            uVar12 = uVar17;
          }
          if (uVar12 == 0) {
            local_4e0 = (longlong)local_2f0;
            local_4e8 = (ulonglong)(int)uVar19;
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          puVar13 = local_3b8;
          if (local_2f8 != (undefined1 *)0x0) {
            puVar13 = local_2f8;
          }
          *(double *)(puVar13 + uVar16) = *(double *)(puVar13 + uVar16) / dVar35;
          uVar11 = 0;
          if ((int)uVar19 < local_2f0) {
            uVar11 = uVar17;
          }
          if ((uVar11 == 0) &&
             (local_4e8 = uVar23, local_4e0 = (longlong)local_2f0,
             bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          puVar13 = local_3b8;
          if (local_2f8 != (undefined1 *)0x0) {
            puVar13 = local_2f8;
          }
          dVar35 = *(double *)(puVar13 + uVar16 + 0x10);
          uVar11 = 0;
          if ((int)uVar19 < local_2f0) {
            uVar11 = uVar17;
          }
          if (uVar11 == 0) {
            local_4e0 = (longlong)local_2f0;
            local_4e8 = uVar23;
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          puVar13 = local_3b8;
          if (local_2f8 != (undefined1 *)0x0) {
            puVar13 = local_2f8;
          }
          *(double *)(puVar13 + uVar16 + 8) = *(double *)(puVar13 + uVar16 + 8) / dVar35;
        }
        uVar21 = (ulonglong)local_220;
        uVar23 = uVar23 + 1;
        uVar16 = uVar16 + 0x18;
        uVar20 = (ulonglong)(uVar19 + 1);
      } while ((longlong)uVar23 < (longlong)uVar15);
    }
    dVar35 = __real_bff0000000000000;
    uVar23 = (ulonglong)(int)(uint)local_4b8;
    local_488 = local_4c0 + uVar23 * 3;
    local_4c4 = (uint)local_4b8;
    piVar18 = local_4c0;
    uVar20 = uVar23;
    while( true ) {
      piVar9 = local_488;
      uVar11 = (uint)uVar21;
      if ((int)uVar23 != (int)uVar20) {
        local_4d8[0] = 0;
        `TCheckedPointerIterator<UE::Geometry::FIndex3i,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_4d8);
        uVar11 = local_220;
      }
      if (piVar18 == piVar9) break;
      uVar17 = piVar18[2];
      uVar21 = (ulonglong)(int)uVar17;
      local_4d4 = piVar18[1];
      iVar1 = *piVar18;
      uVar19 = 0;
      if ((int)uVar17 < (int)uVar11) {
        uVar19 = ~uVar17 >> 0x1f;
      }
      local_4c8 = iVar1;
      if (uVar19 == 0) {
        local_4e0 = (longlong)(int)uVar11;
        local_4e8 = uVar21;
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      local_498 = uVar21 * 3;
      puVar13 = local_2e8;
      if (local_228 != (undefined1 *)0x0) {
        puVar13 = local_228;
      }
      uVar11 = 0;
      if ((int)uVar17 < local_150) {
        uVar11 = ~uVar17 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (local_4e8 = uVar21, local_4e0 = (longlong)local_150,
         bVar10 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      dVar34 = *(double *)(puVar13 + uVar21 * 0x18);
      dVar32 = *(double *)((longlong)(puVar13 + uVar21 * 0x18) + 8);
      local_3d8 = *(double *)(puVar13 + uVar21 * 0x18 + 0x10);
      local_490 = local_218;
      if (local_158 != (undefined1 *)0x0) {
        local_490 = local_158;
      }
      uVar11 = iVar1 * 3;
      uVar17 = local_4d4 + uVar11;
      dVar24 = SQRT(dVar34 * dVar34 + dVar32 * dVar32 + local_3d8 * local_3d8);
      if (dVar24 <= 0.0) {
        dVar6 = 0.0;
        dVar32 = 0.0;
        dVar34 = 0.0;
      }
      else {
        dVar24 = dVar7 / dVar24;
        dVar6 = local_3d8 * dVar24;
        dVar32 = dVar32 * dVar24;
        dVar34 = dVar34 * dVar24;
      }
      lVar2 = *local_4b0;
      iVar1 = *(int *)(lVar2 + 0x10);
      uVar19 = 0;
      if ((int)uVar17 < iVar1) {
        uVar19 = ~uVar17 >> 0x1f;
      }
      if (uVar19 == 0) {
        local_4e8 = (ulonglong)(int)uVar17;
        local_4e0 = (longlong)iVar1;
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      plVar8 = local_4b0;
      lVar2 = *(longlong *)(lVar2 + 8);
      lVar22 = (longlong)(int)uVar17;
      *(double *)(lVar2 + lVar22 * 0x18) = dVar34;
      *(double *)(lVar2 + 8 + lVar22 * 0x18) = dVar32;
      *(double *)(lVar2 + 0x10 + lVar22 * 0x18) = dVar6;
      lVar2 = *(longlong *)(*(longlong *)local_4b0[3] + 0x78);
      local_4a8[0] = *(int *)(*(longlong *)(lVar2 + (ulonglong)(uVar11 >> 9) * 8) +
                             (ulonglong)(uVar11 & 0x1ff) * 4);
      local_4a8[1] = *(undefined4 *)
                      (*(longlong *)(lVar2 + (ulonglong)(uVar11 + 1 >> 9) * 8) +
                      (ulonglong)(uVar11 + 1 & 0x1ff) * 4);
      local_4a8[2] = *(undefined4 *)
                      (*(longlong *)(lVar2 + (ulonglong)(uVar11 + 2 >> 9) * 8) +
                      (ulonglong)(uVar11 + 2 & 0x1ff) * 4);
      if (local_4a8[0] < 0) {
        pTVar14 = &UE::Geometry::FDynamicMesh3::GetTriNormal
                             (*(FDynamicMesh3 **)*local_4b0,&local_3d0,local_4c8)->field0_0x0;
      }
      else {
        lVar2 = *(longlong *)(*(longlong *)local_4b0[3] + 0x48);
        uVar11 = local_4a8[local_4d4] * 3;
        local_470._s_0.X =
             (double)*(float *)(*(longlong *)(lVar2 + (ulonglong)(uVar11 >> 9) * 8) +
                               (ulonglong)(uVar11 & 0x1ff) * 4);
        pTVar14 = &local_470;
        local_470._s_0.Y =
             (double)*(float *)(*(longlong *)(lVar2 + (ulonglong)(uVar11 + 1 >> 9) * 8) +
                               (ulonglong)(uVar11 + 1 & 0x1ff) * 4);
        local_470._s_0.Z =
             (double)*(float *)(*(longlong *)(lVar2 + (ulonglong)(uVar11 + 2 >> 9) * 8) +
                               (ulonglong)(uVar11 + 2 & 0x1ff) * 4);
      }
      auVar30 = *(undefined1 (*) [16])&(pTVar14->_s_0).X;
      local_3d8 = (pTVar14->_s_0).Z;
      lVar2 = *plVar8;
      dVar25 = auVar30._8_8_;
      dVar34 = *(double *)(puVar13 + local_498 * 8 + 8);
      dVar32 = *(double *)(puVar13 + local_498 * 8);
      dVar24 = *(double *)(puVar13 + local_498 * 8 + 0x10);
      dVar28 = auVar30._0_8_;
      dVar6 = dVar7;
      if ((local_3d8 * *(double *)(local_490 + local_498 * 8 + 8) -
          dVar25 * *(double *)(local_490 + local_498 * 8 + 0x10)) * dVar32 +
          (dVar28 * *(double *)(local_490 + local_498 * 8 + 0x10) -
          local_3d8 * *(double *)(local_490 + local_498 * 8)) * dVar34 +
          (dVar25 * *(double *)(local_490 + local_498 * 8) -
          dVar28 * *(double *)(local_490 + local_498 * 8 + 8)) * dVar24 < 0.0) {
        dVar6 = dVar35;
      }
      dVar33 = (dVar25 * dVar24 - local_3d8 * dVar34) * dVar6;
      auVar26._8_4_ = auVar30._8_4_;
      auVar26._0_8_ = dVar33;
      auVar26._12_4_ = auVar30._12_4_;
      auVar27._8_8_ = auVar26._8_8_;
      auVar27._0_8_ = dVar33 * dVar33;
      dVar24 = (local_3d8 * dVar32 - dVar28 * dVar24) * dVar6;
      dVar6 = (dVar28 * dVar34 - dVar25 * dVar32) * dVar6;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = dVar24 * dVar24 + auVar27._0_8_ + dVar6 * dVar6;
      auVar30 = sqrtpd(auVar27,auVar5);
      if (auVar30._0_8_ <= 0.0) {
        dVar6 = 0.0;
        dVar24 = 0.0;
        dVar34 = 0.0;
      }
      else {
        dVar34 = dVar7 / auVar30._0_8_;
        dVar6 = dVar34 * dVar6;
        dVar24 = dVar34 * dVar24;
        dVar34 = dVar34 * dVar33;
      }
      iVar1 = *(int *)(lVar2 + 0x20);
      uVar11 = 0;
      if ((int)uVar17 < iVar1) {
        uVar11 = ~uVar17 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (local_4e8 = (longlong)(int)uVar17, local_4e0 = (longlong)iVar1,
         bVar10 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = *(longlong *)(lVar2 + 0x18);
      piVar18 = piVar18 + 3;
      uVar20 = (ulonglong)local_4c4;
      *(double *)(lVar2 + lVar22 * 0x18) = dVar34;
      *(double *)(lVar2 + 8 + lVar22 * 0x18) = dVar24;
      *(double *)(lVar2 + 0x10 + lVar22 * 0x18) = dVar6;
      uVar21 = (ulonglong)local_220;
      uVar23 = local_4b8 & 0xffffffff;
    }
    if (local_4c0 != (int *)0x0) {
      FMemory::Free(local_4c0);
    }
    if (local_2f8 != (undefined1 *)0x0) {
      FMemory::Free(local_2f8);
    }
    if (local_158 != (undefined1 *)0x0) {
      FMemory::Free(local_158);
    }
    if (local_228 != (undefined1 *)0x0) {
      FMemory::Free(local_228);
    }
    if (local_e8 != (void *)0x0) {
      FMemory::Free(local_e8);
    }
  }
  return;
}

// ComputeDefaultOverlayTangents @ 1434930b0

bool __cdecl
UE::Geometry::TMeshTangents<float>::ComputeDefaultOverlayTangents(FDynamicMesh3 *param_1)

{
  FDynamicMeshAttributeSet *pFVar1;
  bool bVar2;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTVar3;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar4;
  FComputeTangentsOptions local_res8 [16];
  TMeshTangents<float> local_48;
  
  pFVar1 = (param_1->AttributeSet).Ptr;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    pTVar3 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
    pTVar4 = (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)pTVar3;
    if (0 < (pFVar1->UVLayers).Array.ArrayNum) {
      pTVar4 = *(TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> **)
                (pFVar1->UVLayers).Array.AllocatorInstance.Data;
    }
    if (0 < (pFVar1->NormalLayers).Array.ArrayNum) {
      pTVar3 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
                (pFVar1->NormalLayers).Array.AllocatorInstance.Data;
    }
    if ((pTVar4 != (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0) &&
       (pTVar3 != (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0)) {
      local_48.Tangents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Tangents.ArrayNum = 0;
      local_48.Tangents.ArrayMax = 0;
      local_48.Bitangents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Bitangents.ArrayNum = 0;
      local_48.Bitangents.ArrayMax = 0;
      local_48.AllDegenerateTris.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.AllDegenerateTris.ArrayNum = 0;
      local_48.AllDegenerateTris.ArrayMax = 0;
      local_res8[0].bAveraged = true;
      local_res8[0].bAngleWeighted = true;
      local_48.Mesh = param_1;
      ComputeMikkTStyleTangents(&local_48,pTVar3,pTVar4,local_res8);
      pFVar1 = (param_1->AttributeSet).Ptr;
      (**(code **)(pFVar1->_padding_ + 0xc0))(pFVar1,3);
      bVar2 = CopyToOverlays(&local_48,param_1);
      if (local_48.AllDegenerateTris.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.AllDegenerateTris.AllocatorInstance.Data);
      }
      if (local_48.Bitangents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Bitangents.AllocatorInstance.Data);
      }
      if (local_48.Tangents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Tangents.AllocatorInstance.Data);
      }
      return bVar2;
    }
  }
  return false;
}

// ComputeDefaultOverlayTangents @ 1434931b0

bool __cdecl
UE::Geometry::TMeshTangents<double>::ComputeDefaultOverlayTangents(FDynamicMesh3 *param_1)

{
  FDynamicMeshAttributeSet *pFVar1;
  bool bVar2;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTVar3;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar4;
  FComputeTangentsOptions local_res8 [16];
  TMeshTangents<double> local_48;
  
  pFVar1 = (param_1->AttributeSet).Ptr;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    pTVar3 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
    pTVar4 = (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)pTVar3;
    if (0 < (pFVar1->UVLayers).Array.ArrayNum) {
      pTVar4 = *(TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> **)
                (pFVar1->UVLayers).Array.AllocatorInstance.Data;
    }
    if (0 < (pFVar1->NormalLayers).Array.ArrayNum) {
      pTVar3 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
                (pFVar1->NormalLayers).Array.AllocatorInstance.Data;
    }
    if ((pTVar4 != (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0) &&
       (pTVar3 != (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0)) {
      local_48.Tangents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Tangents.ArrayNum = 0;
      local_48.Tangents.ArrayMax = 0;
      local_48.Bitangents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Bitangents.ArrayNum = 0;
      local_48.Bitangents.ArrayMax = 0;
      local_48.AllDegenerateTris.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.AllDegenerateTris.ArrayNum = 0;
      local_48.AllDegenerateTris.ArrayMax = 0;
      local_res8[0].bAveraged = true;
      local_res8[0].bAngleWeighted = true;
      local_48.Mesh = param_1;
      ComputeMikkTStyleTangents(&local_48,pTVar3,pTVar4,local_res8);
      pFVar1 = (param_1->AttributeSet).Ptr;
      (**(code **)(pFVar1->_padding_ + 0xc0))(pFVar1,3);
      bVar2 = CopyToOverlays(&local_48,param_1);
      if (local_48.AllDegenerateTris.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.AllDegenerateTris.AllocatorInstance.Data);
      }
      if (local_48.Bitangents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Bitangents.AllocatorInstance.Data);
      }
      if (local_48.Tangents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Tangents.AllocatorInstance.Data);
      }
      return bVar2;
    }
  }
  return false;
}

// ComputeMikkTStyleTangents @ 143493610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TMeshTangents<float>::ComputeMikkTStyleTangents
          (TMeshTangents<float> *this,
          TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *param_1,
          TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_2,
          FComputeTangentsOptions *param_3)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  uint *puVar3;
  int *piVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  FDynamicMesh3 *pFVar9;
  code *pcVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  byte bVar15;
  ForAnyElementType FVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  uint uVar24;
  uint *puVar25;
  ulonglong uVar26;
  ForElementType<unsigned_int> FVar27;
  int iVar28;
  ForAnyElementType FVar29;
  bool bVar30;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *local_res10;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *local_res18;
  undefined1 auStackY_358 [32];
  uint local_308;
  <lambda_1> local_304;
  ForAnyElementType local_2f8;
  undefined8 uStack_2f0;
  ForAnyElementType local_2e8;
  undefined8 uStack_2e0;
  int local_2d8;
  uint local_2d4;
  int local_2d0;
  uint local_2cc;
  uint local_2c8 [2];
  undefined4 local_2c0;
  int local_2b8;
  uint local_2b0;
  uint uStack_2ac;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2a8;
  undefined4 local_2a0;
  uint uStack_29c;
  uint uStack_298;
  undefined4 uStack_294;
  uint local_290;
  uint uStack_28c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_288;
  undefined4 local_280;
  uint uStack_27c;
  uint uStack_278;
  undefined4 uStack_274;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_270;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_260;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_250;
  undefined8 local_240;
  int local_238;
  longlong local_230;
  undefined8 local_228;
  int local_220;
  undefined4 local_218;
  int local_214;
  undefined4 local_210;
  int local_20c;
  undefined8 local_208;
  longlong local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  longlong *local_1e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1e0;
  longlong *local_1c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1b8;
  FSparseArrayAllocationInfo local_198;
  TArrayView<std::nullptr_t,int> local_188;
  code *local_178;
  TMeshTangents<float> **local_170;
  TArrayView<std::nullptr_t,int> local_168;
  code *local_158;
  TMeshTangents<float> **local_150;
  TMeshTangents<float> *local_148;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> **local_140;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_138;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_130;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_128;
  _RTL_CRITICAL_SECTION *local_120;
  ForAnyElementType *local_118;
  TMeshTangents<float> *local_110;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_108;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> **local_100;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **local_f8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_f0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_e8;
  FComputeTangentsOptions *local_e0;
  undefined8 *local_d8;
  undefined1 local_c8 [32];
  ForElementType<unsigned_int> local_a8;
  uint local_a0;
  int local_9c;
  int local_98;
  int local_94;
  FScriptContainerElement local_90 [8];
  ForAnyElementType local_88;
  uint local_80;
  _RTL_CRITICAL_SECTION local_78;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_358;
  local_208 = __real_bfefae147ae147ae;
  iVar20 = (this->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed +
           (this->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  local_res10 = param_1;
  local_res18 = param_2;
  SetTangentCount(this,iVar20 * 3,true);
  uVar14 = 0;
  local_250.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_250.ArrayNum = 0;
  local_250.ArrayMax = 0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum(&local_250,iVar20,Default);
  local_260.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_260.ArrayNum = 0;
  local_260.ArrayMax = 0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum(&local_260,iVar20,Default);
  local_270.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_270.ArrayNum = 0;
  local_270.ArrayMax = 0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum(&local_270,iVar20,Default);
  local_2f8.Data = (FScriptContainerElement *)0x0;
  uStack_2f0 = 0;
  InitializeCriticalSectionAndSpinCount(&local_78,4000);
  local_140 = &local_res18;
  local_138 = &local_250;
  local_188.DataPtr = (void **)0x0;
  local_130 = &local_260;
  local_188.ArrayNum = 0;
  local_128 = &local_270;
  local_120 = &local_78;
  local_118 = &local_2f8;
  local_178 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::TMeshTangents<float>::ComputeMikkTStyleTangents'::__l2::<lambda_1>,void,int>
              ::Call;
  local_170 = &local_148;
  local_148 = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar20,1,(TFunctionRef<void___cdecl(int)> *)&local_178,local_304,
             None,&local_188);
  local_108 = &local_270;
  local_100 = &local_res18;
  local_f8 = &local_res10;
  local_f0 = &local_250;
  local_e8 = &local_260;
  local_150 = &local_110;
  local_d8 = &local_208;
  local_158 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::TMeshTangents<float>::ComputeMikkTStyleTangents'::__l2::<lambda_2>,void,int>
              ::Call;
  local_168.DataPtr = (void **)0x0;
  local_168.ArrayNum = 0;
  local_110 = this;
  local_e0 = param_3;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",
             (this->Mesh->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (this->Mesh->VertexRefCounts).RefCounts.CurBlockUsed,1,
             (TFunctionRef<void___cdecl(int)> *)&local_158,local_304,None,&local_168);
  FVar29.Data = local_2f8.Data;
  pTVar1 = &this->AllDegenerateTris;
  if (pTVar1 == (TArray<int,TSizedDefaultAllocator<32>_> *)&local_2f8) {
LAB_1434938b3:
    uVar18 = (uint)uStack_2f0;
  }
  else {
    iVar20 = (uint)uStack_2f0;
    lVar23 = (longlong)(int)(uint)uStack_2f0;
    piVar4 = &(this->AllDegenerateTris).ArrayMax;
    (this->AllDegenerateTris).ArrayNum = (uint)uStack_2f0;
    if (((uint)uStack_2f0 != 0) || (*piVar4 != 0)) {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(uint)uStack_2f0,*piVar4,&pTVar1->AllocatorInstance,(uint)uStack_2f0,piVar4);
      if (iVar20 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,FVar29.Data,lVar23 << 2);
      }
      goto LAB_1434938b3;
    }
    *piVar4 = 0;
    uVar18 = 0;
  }
  FVar29.Data = local_2f8.Data;
  if ((int)uVar18 < 1) goto LAB_143494987;
  local_c8._0_8_ = (FScriptContainerElement *)0x0;
  local_c8._8_8_ = 0;
  local_a8 = (ForElementType<unsigned_int>)0x0;
  local_a0 = 0;
  local_9c = 0x80;
  local_98 = -1;
  local_94 = 0;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_c8,uVar18);
  if (uVar18 < 4) {
    uVar21 = 1;
  }
  else {
    uVar19 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
    lVar23 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    local_218 = (int)lVar23;
    uVar21 = 1 << ((byte)lVar23 & 0x1f);
  }
  if ((local_80 == 0) || ((int)local_80 < (int)uVar21)) {
    local_80 = uVar21;
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_88,0,0,4);
    }
    if (uVar21 != 0) {
      uVar22 = uVar21;
      if (uVar21 < 2) {
        if (local_88.Data != (FScriptContainerElement *)0x0) {
          uVar22 = 0;
          goto LAB_1434939a3;
        }
      }
      else {
LAB_1434939a3:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_88,0,uVar22,4);
      }
      if (0 < (int)uVar21) {
        uVar26 = (ulonglong)uVar21;
        uVar19 = uVar14;
        do {
          FVar16.Data = local_90;
          if (local_88.Data != (FScriptContainerElement *)0x0) {
            FVar16.Data = local_88.Data;
          }
          uVar12 = (longlong)(int)uVar21 - 1U & uVar19;
          uVar19 = uVar19 + 1;
          *(undefined4 *)(FVar16.Data + uVar12 * 4) = 0xffffffff;
          uVar26 = uVar26 - 1;
        } while (uVar26 != 0);
      }
    }
    if (local_80 != 0) {
      pTStack_2a8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10);
      local_2b0 = 0;
      uStack_2ac = 1;
      uStack_29c = 0;
      uStack_298 = 0;
      if (local_a0 != 0) {
        FVar27 = (ForElementType<unsigned_int>)((longlong)local_c8 + 0x10);
        if (local_a8 != (ForElementType<unsigned_int>)0x0) {
          FVar27 = local_a8;
        }
        uVar21 = *(uint *)FVar27;
        uVar19 = uVar14;
        while (uVar21 == 0) {
          uStack_298 = (int)uVar19 + 0x20;
          uVar19 = (ulonglong)uStack_298;
          iVar20 = (int)uVar14;
          local_2b0 = iVar20 + 1;
          uVar14 = (ulonglong)local_2b0;
          if ((int)((local_a0 - 1) + ((int)(local_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_2b0)
          goto LAB_143493abd;
          uVar21 = ((uint *)((longlong)FVar27 + 4))[iVar20];
        }
        uStack_2ac = -uVar21 & uVar21;
        uVar14 = (ulonglong)uStack_2ac * 2 + 1;
        lVar23 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        local_214 = (int)lVar23;
        uStack_29c = (int)lVar23 + -1 + (int)uVar19;
        uVar14 = (ulonglong)uStack_29c;
        if ((int)local_a0 < (int)uStack_29c) {
LAB_143493abd:
          uVar14 = (ulonglong)local_a0;
          uStack_29c = local_a0;
        }
      }
      local_2a0 = 0xffffffff;
      local_1e8 = (longlong *)local_c8;
      local_1e0._padding_ = CONCAT44(uStack_2ac,local_2b0);
      local_1e0.Array = pTStack_2a8;
      local_1e0.UnvisitedBitMask = 0xffffffff;
      local_1e0.CurrentBitIndex = uStack_29c;
      local_1e0.BaseBitIndex = uStack_298;
      local_1e0._28_4_ = uStack_294;
      if ((int)uVar14 < (int)local_a0) {
        do {
          lVar23 = *local_1e8;
          lVar13 = (longlong)(int)uVar14;
          uVar21 = local_80 - 1 & *(uint *)(lVar23 + lVar13 * 0xc);
          *(uint *)(lVar23 + 8 + lVar13 * 0xc) = uVar21;
          FVar16.Data = local_90;
          if (local_88.Data != (FScriptContainerElement *)0x0) {
            FVar16.Data = local_88.Data;
          }
          uVar19 = (longlong)(int)local_80 - 1U & (longlong)(int)uVar21;
          *(undefined4 *)(lVar23 + 4 + lVar13 * 0xc) = *(undefined4 *)(FVar16.Data + uVar19 * 4);
          *(int *)(FVar16.Data + uVar19 * 4) = (int)uVar14;
          local_1e0.UnvisitedBitMask = local_1e0.UnvisitedBitMask & ~local_1e0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1e0);
          uVar14 = (ulonglong)(uint)local_1e0.CurrentBitIndex;
        } while (local_1e0.CurrentBitIndex < (local_1e0.Array)->NumBits);
      }
    }
  }
  pFVar2 = FVar29.Data + (longlong)(int)uVar18 * 4;
  if (FVar29.Data != pFVar2) {
    do {
      puVar25 = (uint *)0x0;
      if (local_94 == 0) {
        iVar20 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0xc,4,1,(ForAnyElementType *)local_c8,(int *)(local_c8 + 8),
                            (int *)(local_c8 + 0xc));
        iVar11 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                           ((TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10),1);
        FVar27 = (ForElementType<unsigned_int>)((longlong)local_c8 + 0x10);
        if (local_a8 != (ForElementType<unsigned_int>)0x0) {
          FVar27 = local_a8;
        }
        bVar15 = (byte)iVar11 & 0x1f;
        if (iVar11 < 0) {
          iVar11 = iVar11 + 0x1f;
          bVar15 = bVar15 - 0x20;
        }
        puVar3 = (uint *)((longlong)FVar27 + (longlong)(iVar11 >> 5) * 4);
        *puVar3 = *puVar3 & ~(1 << (bVar15 & 0x1f));
        iVar11 = local_98;
      }
      else {
        local_94 = local_94 + -1;
        iVar11 = *(int *)(local_c8._0_8_ + (longlong)local_98 * 0xc + 4);
        iVar20 = local_98;
        if (local_94 != 0) {
          *(undefined4 *)(local_c8._0_8_ + (longlong)iVar11 * 0xc) = 0xffffffff;
        }
      }
      local_98 = iVar11;
      TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_c8,&local_198,iVar20);
      if (local_198.Pointer != (uint *)0x0) {
        *(uint *)local_198.Pointer = *(uint *)FVar29.Data;
        *(uint *)((longlong)local_198.Pointer + 4) = 0xffffffff;
        puVar25 = local_198.Pointer;
      }
      uVar18 = *puVar25;
      if ((local_c8._8_4_ - local_94 != 1) && (local_c8._8_4_ != local_94)) {
        FVar16.Data = local_90;
        if (local_88.Data != (FScriptContainerElement *)0x0) {
          FVar16.Data = local_88.Data;
        }
        for (iVar20 = *(int *)(FVar16.Data + (ulonglong)(local_80 - 1 & uVar18) * 4); iVar20 != -1;
            iVar20 = *(int *)(local_c8._0_8_ + (longlong)iVar20 * 0xc + 4)) {
          if (*(uint *)(local_c8._0_8_ + (longlong)iVar20 * 0xc) == uVar18) {
            if (iVar20 != -1) {
              *(uint *)(local_c8._0_8_ + (longlong)iVar20 * 0xc) = uVar18;
              TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)local_c8,local_198.Index,1);
              goto LAB_143493fc4;
            }
            break;
          }
        }
      }
      uVar14 = 0;
      uVar22 = 1;
      uVar21 = local_c8._8_4_ - local_94;
      if (3 < uVar21) {
        uVar19 = (ulonglong)((uVar21 >> 1) + 7) * 2 + 1;
        lVar23 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        local_210 = (int)lVar23;
        uVar22 = 1 << ((byte)lVar23 & 0x1f);
      }
      if (((int)uVar21 < 1) || ((int)uVar22 <= (int)local_80)) {
        uVar18 = local_80 - 1 & uVar18;
        puVar25[2] = uVar18;
        FVar16.Data = local_90;
        if (local_88.Data != (FScriptContainerElement *)0x0) {
          FVar16.Data = local_88.Data;
        }
        uVar14 = (longlong)(int)local_80 - 1U & (longlong)(int)uVar18;
        puVar25[1] = *(uint *)(FVar16.Data + uVar14 * 4);
        *(int *)(FVar16.Data + uVar14 * 4) = local_198.Index;
      }
      else {
        local_80 = uVar22;
        if (local_88.Data != (FScriptContainerElement *)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_88,0,0,4);
        }
        if (uVar22 != 0) {
          uVar18 = uVar22;
          if (uVar22 < 2) {
            if (local_88.Data != (FScriptContainerElement *)0x0) {
              uVar18 = 0;
              goto LAB_143493db0;
            }
          }
          else {
LAB_143493db0:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_88,0,uVar18,4);
          }
          if (0 < (int)uVar22) {
            uVar26 = (ulonglong)uVar22;
            uVar19 = uVar14;
            do {
              FVar16.Data = local_90;
              if (local_88.Data != (FScriptContainerElement *)0x0) {
                FVar16.Data = local_88.Data;
              }
              uVar12 = (longlong)(int)uVar22 - 1U & uVar19;
              uVar19 = uVar19 + 1;
              *(undefined4 *)(FVar16.Data + uVar12 * 4) = 0xffffffff;
              uVar26 = uVar26 - 1;
            } while (uVar26 != 0);
          }
        }
        if (local_80 != 0) {
          pTStack_288 = (TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10);
          local_290 = 0;
          uStack_28c = 1;
          uStack_27c = 0;
          uStack_278 = 0;
          if (local_a0 != 0) {
            FVar27 = (ForElementType<unsigned_int>)((longlong)local_c8 + 0x10);
            if (local_a8 != (ForElementType<unsigned_int>)0x0) {
              FVar27 = local_a8;
            }
            uVar18 = *(uint *)FVar27;
            uVar19 = uVar14;
            while (uVar18 == 0) {
              uStack_278 = (int)uVar19 + 0x20;
              uVar19 = (ulonglong)uStack_278;
              iVar20 = (int)uVar14;
              local_290 = iVar20 + 1;
              uVar14 = (ulonglong)local_290;
              if ((int)((local_a0 - 1) + ((int)(local_a0 - 1) >> 0x1f & 0x1fU)) >> 5 <
                  (int)local_290) goto LAB_143493ebd;
              uVar18 = ((uint *)((longlong)FVar27 + 4))[iVar20];
            }
            uStack_28c = -uVar18 & uVar18;
            uVar14 = (ulonglong)uStack_28c * 2 + 1;
            lVar23 = 0x3f;
            if (uVar14 != 0) {
              for (; uVar14 >> lVar23 == 0; lVar23 = lVar23 + -1) {
              }
            }
            local_20c = (int)lVar23;
            uStack_27c = (int)lVar23 + -1 + (int)uVar19;
            uVar14 = (ulonglong)uStack_27c;
            if ((int)local_a0 < (int)uStack_27c) {
LAB_143493ebd:
              uVar14 = (ulonglong)local_a0;
              uStack_27c = local_a0;
            }
          }
          local_280 = 0xffffffff;
          local_1c0 = (longlong *)local_c8;
          local_1b8._padding_ = CONCAT44(uStack_28c,local_290);
          local_1b8.Array = pTStack_288;
          local_1b8.UnvisitedBitMask = 0xffffffff;
          local_1b8.CurrentBitIndex = uStack_27c;
          local_1b8.BaseBitIndex = uStack_278;
          local_1b8._28_4_ = uStack_274;
          if ((int)uVar14 < (int)local_a0) {
            do {
              lVar23 = *local_1c0;
              lVar13 = (longlong)(int)uVar14;
              uVar18 = local_80 - 1 & *(uint *)(lVar23 + lVar13 * 0xc);
              *(uint *)(lVar23 + 8 + lVar13 * 0xc) = uVar18;
              FVar16.Data = local_90;
              if (local_88.Data != (FScriptContainerElement *)0x0) {
                FVar16.Data = local_88.Data;
              }
              uVar19 = (longlong)(int)local_80 - 1U & (longlong)(int)uVar18;
              *(undefined4 *)(lVar23 + 4 + lVar13 * 0xc) = *(undefined4 *)(FVar16.Data + uVar19 * 4)
              ;
              *(int *)(FVar16.Data + uVar19 * 4) = (int)uVar14;
              local_1b8.UnvisitedBitMask = local_1b8.UnvisitedBitMask & ~local_1b8._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1b8);
              uVar14 = (ulonglong)(uint)local_1b8.CurrentBitIndex;
            } while (local_1b8.CurrentBitIndex < (local_1b8.Array)->NumBits);
          }
        }
      }
LAB_143493fc4:
      FVar29.Data = FVar29.Data + 4;
    } while (FVar29.Data != pFVar2);
  }
  local_2e8.Data = (FScriptContainerElement *)0x0;
  uStack_2e0 = 0;
  iVar20 = (uint)uStack_2f0;
  while (0 < iVar20) {
    bVar30 = (longlong)uStack_2e0 < 0;
    uStack_2e0 = uStack_2e0 & 0xffffffff00000000;
    if (bVar30) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&local_2e8,0,(int *)((longlong)&uStack_2e0 + 4));
      iVar20 = (uint)uStack_2f0;
    }
    local_2cc = 0;
    local_200 = (longlong)iVar20;
    local_230 = 0;
    if (0 < iVar20) {
LAB_143494050:
      lVar23 = local_230;
      uVar14 = 0;
      uVar21 = 0;
      uVar18 = uVar21;
      if ((int)local_2cc < iVar20) {
        uVar18 = ~local_2cc >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar30)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar9 = this->Mesh;
      local_308 = *(uint *)(local_2f8.Data + lVar23 * 4);
      uVar26 = (ulonglong)(local_308 & 0x1ff);
      lVar23 = *(longlong *)
                ((pFVar9->TriangleEdges).Blocks.AllocatorInstance.Data +
                (ulonglong)(local_308 >> 9) * 8);
      local_1f8 = *(undefined8 *)(lVar23 + uVar26 * 0xc);
      local_1f0 = *(undefined4 *)(lVar23 + 8 + uVar26 * 0xc);
      uVar19 = uVar14;
      do {
        uVar18 = *(uint *)((longlong)&local_1f8 + uVar19 * 4);
        uVar17 = (ulonglong)(uVar18 & 0x1ff);
        lVar23 = *(longlong *)
                  ((pFVar9->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar18 >> 9) * 8);
        uVar12 = *(ulonglong *)(lVar23 + 8 + uVar17 * 0x10);
        piVar4 = (int *)(lVar23 + uVar17 * 0x10);
        iVar20 = *piVar4;
        iVar11 = piVar4[1];
        if ((uint)uVar12 == local_308) {
          uVar12 = uVar12 >> 0x20;
        }
        uVar18 = (uint)uVar12;
        if (local_c8._8_4_ != local_94) {
          FVar29.Data = local_90;
          if (local_88.Data != (FScriptContainerElement *)0x0) {
            FVar29.Data = local_88.Data;
          }
          for (iVar28 = *(int *)(FVar29.Data + ((ulonglong)(local_80 - 1) & uVar12 & 0xffffffff) * 4
                                ); iVar28 != -1;
              iVar28 = *(int *)(local_c8._0_8_ + (longlong)iVar28 * 0xc + 4)) {
            if (*(uint *)(local_c8._0_8_ + (longlong)iVar28 * 0xc) == uVar18) goto LAB_143494177;
          }
        }
        if (uVar18 != 0xffffffff) {
          pFVar2 = (pFVar9->Triangles).Blocks.AllocatorInstance.Data;
          lVar23 = *(longlong *)(pFVar2 + (ulonglong)(local_308 >> 9) * 8);
          local_240 = *(undefined8 *)(lVar23 + uVar26 * 0xc);
          local_238 = *(int *)(lVar23 + 8 + uVar26 * 0xc);
          iVar28 = (int)((ulonglong)local_240 >> 0x20);
          uVar22 = uVar21;
          if ((int)local_240 != iVar20) {
            if (iVar28 == iVar20) {
              uVar22 = 1;
            }
            else {
              uVar22 = 0xffffffff;
              if (local_238 == iVar20) {
                uVar22 = 2;
              }
            }
          }
          if ((int)local_240 == iVar11) {
            local_2d8 = 0;
          }
          else if (iVar28 == iVar11) {
            local_2d8 = 1;
          }
          else {
            local_2d8 = -1;
            if (local_238 == iVar11) {
              local_2d8 = 2;
            }
          }
          iVar28 = 1;
          uVar19 = uVar14;
          uVar26 = uVar14;
          goto LAB_1434942d0;
        }
LAB_143494177:
        uVar19 = uVar19 + 1;
      } while ((longlong)uVar19 < 3);
      if (((local_2e8.Data <= (FScriptContainerElement *)&local_308) &&
          ((FScriptContainerElement *)&local_308 < local_2e8.Data + (longlong)uStack_2e0._4_4_ * 4))
         && (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar30)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if ((int)uStack_2e0 == uStack_2e0._4_4_) {
        iVar20 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_2e8,(int *)((longlong)&uStack_2e0 + 4));
        uStack_2e0 = CONCAT44(uStack_2e0._4_4_,iVar20);
      }
      lVar23 = (longlong)(int)uStack_2e0;
      uStack_2e0 = CONCAT44(uStack_2e0._4_4_,(int)uStack_2e0 + 1);
      *(uint *)(local_2e8.Data + lVar23 * 4) = local_308;
      goto LAB_1434948a8;
    }
LAB_1434948c9:
    uVar14 = uStack_2f0;
    FVar29.Data = local_2f8.Data;
    if ((int)uStack_2e0 == iVar20) {
      uVar18 = uStack_2f0._4_4_;
      uStack_2f0 = (ulonglong)uStack_2f0._4_4_ << 0x20;
      if ((-1 < (longlong)uVar14) || (uVar18 == 0)) break;
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&local_2f8,0,(int *)((longlong)&uStack_2f0 + 4));
    }
    else {
      local_2f8.Data = local_2e8.Data;
      uStack_2f0 = uStack_2e0;
      local_2e8.Data = FVar29.Data;
      uStack_2e0 = uVar14;
    }
    iVar20 = (uint)uStack_2f0;
  }
  if (local_2e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e8.Data);
  }
  local_80 = 0;
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_c8);
LAB_143494987:
  DeleteCriticalSection(&local_78);
  if (local_2f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f8.Data);
  }
  if (local_270.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_270.AllocatorInstance.Data);
  }
  if (local_260.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_260.AllocatorInstance.Data);
  }
  if (local_250.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_250.AllocatorInstance.Data);
  }
  return;
  while( true ) {
    uVar19 = (ulonglong)((int)uVar19 + 1);
    iVar28 = iVar28 + 1;
    uVar26 = uVar26 + 1;
    if (2 < (longlong)uVar26) break;
LAB_1434942d0:
    iVar6 = *(int *)((longlong)&local_240 +
                    (longlong)
                    (iVar28 + (iVar28 / 3 + (iVar28 >> 0x1f) +
                              (int)(((longlong)iVar28 / 3 + ((longlong)iVar28 >> 0x3f) & 0xffffffffU
                                    ) >> 0x1f)) * -3) * 4);
    iVar7 = *(int *)((longlong)&local_240 + uVar26 * 4);
    if (((iVar20 == iVar7) || (bVar30 = iVar20 == iVar6, iVar6 = iVar7, bVar30)) &&
       (iVar11 == iVar6)) {
      local_2d0 = (int)uVar19 + 2;
      local_2d0 = local_2d0 +
                  (local_2d0 / 3 + (local_2d0 >> 0x1f) +
                  (int)(((longlong)local_2d0 / 3 + ((longlong)local_2d0 >> 0x3f) & 0xffffffffU) >>
                       0x1f)) * -3;
      goto LAB_14349431a;
    }
  }
  local_2d0 = -1;
LAB_14349431a:
  lVar23 = *(longlong *)(pFVar2 + ((uVar12 & 0xffffffff) >> 9) * 8);
  local_228 = *(undefined8 *)(lVar23 + (ulonglong)(uVar18 & 0x1ff) * 0xc);
  local_220 = *(int *)(lVar23 + 8 + (ulonglong)(uVar18 & 0x1ff) * 0xc);
  iVar28 = (int)((ulonglong)local_228 >> 0x20);
  if ((int)local_228 != iVar20) {
    if (iVar28 == iVar20) {
      uVar14 = 1;
    }
    else {
      uVar14 = 0xffffffff;
      if (local_220 == iVar20) {
        uVar14 = 2;
      }
    }
  }
  uVar24 = uVar21;
  if ((int)local_228 != iVar11) {
    if (iVar28 == iVar11) {
      uVar24 = 1;
    }
    else {
      uVar24 = 0xffffffff;
      if (local_220 == iVar11) {
        uVar24 = 2;
      }
    }
  }
  local_2b8 = uVar18 * 3;
  uVar18 = local_2b8 + (int)uVar14;
  if ((int)uVar18 < (this->Tangents).ArrayNum) {
    uVar21 = ~uVar18 >> 0x1f;
  }
  local_2d4 = uVar22;
  if ((uVar21 == 0) &&
     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar30)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar2 = (this->Tangents).AllocatorInstance.Data;
  lVar23 = (longlong)(int)uVar18;
  uVar22 = uVar22 + local_308 * 3;
  uVar5 = *(undefined8 *)(pFVar2 + lVar23 * 0xc);
  local_2c0 = *(undefined4 *)(pFVar2 + lVar23 * 0xc + 8);
  uVar21 = 0;
  if ((int)uVar22 < (this->Tangents).ArrayNum) {
    uVar21 = ~uVar22 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar30)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar2 = (this->Tangents).AllocatorInstance.Data;
  *(undefined8 *)(pFVar2 + (longlong)(int)uVar22 * 0xc) = uVar5;
  *(undefined4 *)(pFVar2 + (longlong)(int)uVar22 * 0xc + 8) = local_2c0;
  uVar21 = 0;
  if ((int)uVar18 < (this->Bitangents).ArrayNum) {
    uVar21 = ~uVar18 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar30)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar2 = (this->Bitangents).AllocatorInstance.Data;
  uVar5 = *(undefined8 *)(pFVar2 + lVar23 * 0xc);
  uVar8 = *(undefined4 *)(pFVar2 + lVar23 * 0xc + 8);
  uVar18 = local_2d4 + local_308 * 3;
  uVar21 = 0;
  if ((int)uVar18 < (this->Bitangents).ArrayNum) {
    uVar21 = ~uVar18 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar30)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar24 = local_2b8 + uVar24;
  pFVar2 = (this->Bitangents).AllocatorInstance.Data;
  *(undefined8 *)(pFVar2 + (longlong)(int)uVar18 * 0xc) = uVar5;
  *(undefined4 *)(pFVar2 + (longlong)(int)uVar18 * 0xc + 8) = uVar8;
  uVar18 = 0;
  if ((int)uVar24 < (this->Tangents).ArrayNum) {
    uVar18 = ~uVar24 >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar30)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar2 = (this->Tangents).AllocatorInstance.Data;
  lVar23 = (longlong)(int)uVar24;
  uVar5 = *(undefined8 *)(pFVar2 + lVar23 * 0xc);
  uVar8 = *(undefined4 *)(pFVar2 + lVar23 * 0xc + 8);
  uVar18 = local_2d8 + local_308 * 3;
  uVar21 = 0;
  if ((int)uVar18 < (this->Tangents).ArrayNum) {
    uVar21 = ~uVar18 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar30)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar2 = (this->Tangents).AllocatorInstance.Data;
  *(undefined8 *)(pFVar2 + (longlong)(int)uVar18 * 0xc) = uVar5;
  *(undefined4 *)(pFVar2 + (longlong)(int)uVar18 * 0xc + 8) = uVar8;
  uVar18 = 0;
  if ((int)uVar24 < (this->Bitangents).ArrayNum) {
    uVar18 = ~uVar24 >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar30)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar2 = (this->Bitangents).AllocatorInstance.Data;
  uVar5 = *(undefined8 *)(pFVar2 + lVar23 * 0xc);
  uVar8 = *(undefined4 *)(pFVar2 + lVar23 * 0xc + 8);
  uVar18 = local_2d8 + local_308 * 3;
  uVar21 = 0;
  if ((int)uVar18 < (this->Bitangents).ArrayNum) {
    uVar21 = ~uVar18 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar30)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar21 = local_2d4;
  pFVar2 = (this->Bitangents).AllocatorInstance.Data;
  *(undefined8 *)(pFVar2 + (longlong)(int)uVar18 * 0xc) = uVar5;
  *(undefined4 *)(pFVar2 + (longlong)(int)uVar18 * 0xc + 8) = uVar8;
  uVar18 = local_2d4 + local_308 * 3;
  uVar22 = 0;
  if ((int)uVar18 < (this->Tangents).ArrayNum) {
    uVar22 = ~uVar18 >> 0x1f;
  }
  if ((uVar22 == 0) &&
     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar30)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar20 = local_2d0;
  pFVar2 = (this->Tangents).AllocatorInstance.Data;
  uVar5 = *(undefined8 *)(pFVar2 + (longlong)(int)uVar18 * 0xc);
  uVar8 = *(undefined4 *)(pFVar2 + (longlong)(int)uVar18 * 0xc + 8);
  uVar18 = local_2d0 + local_308 * 3;
  uVar24 = 0;
  uVar22 = uVar24;
  if ((int)uVar18 < (this->Tangents).ArrayNum) {
    uVar22 = ~uVar18 >> 0x1f;
  }
  if ((uVar22 == 0) &&
     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar30)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar2 = (this->Tangents).AllocatorInstance.Data;
  *(undefined8 *)(pFVar2 + (longlong)(int)uVar18 * 0xc) = uVar5;
  *(undefined4 *)(pFVar2 + (longlong)(int)uVar18 * 0xc + 8) = uVar8;
  uVar21 = uVar21 + local_308 * 3;
  uVar18 = uVar24;
  if ((int)uVar21 < (this->Bitangents).ArrayNum) {
    uVar18 = ~uVar21 >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar30)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar2 = (this->Bitangents).AllocatorInstance.Data;
  uVar5 = *(undefined8 *)(pFVar2 + (longlong)(int)uVar21 * 0xc);
  uVar8 = *(undefined4 *)(pFVar2 + (longlong)(int)uVar21 * 0xc + 8);
  uVar18 = iVar20 + local_308 * 3;
  if ((int)uVar18 < (this->Bitangents).ArrayNum) {
    uVar24 = ~uVar18 >> 0x1f;
  }
  if ((uVar24 == 0) &&
     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar30)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar2 = (this->Bitangents).AllocatorInstance.Data;
  *(undefined8 *)(pFVar2 + (longlong)(int)uVar18 * 0xc) = uVar5;
  *(undefined4 *)(pFVar2 + (longlong)(int)uVar18 * 0xc + 8) = uVar8;
  local_2c8[0] = local_308;
  if (local_c8._8_4_ != local_94) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_c8,local_308,
               (int *)local_2c8);
  }
LAB_1434948a8:
  local_2cc = local_2cc + 1;
  local_230 = local_230 + 1;
  iVar20 = (uint)uStack_2f0;
  if (local_200 <= local_230) goto LAB_1434948c9;
  goto LAB_143494050;
}

// ComputeMikkTStyleTangents @ 143494a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TMeshTangents<double>::ComputeMikkTStyleTangents
          (TMeshTangents<double> *this,
          TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *param_1,
          TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_2,
          FComputeTangentsOptions *param_3)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  uint *puVar3;
  int *piVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  FDynamicMesh3 *pFVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  byte bVar17;
  ForAnyElementType FVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  uint uVar26;
  uint *puVar27;
  ulonglong uVar28;
  ForElementType<unsigned_int> FVar29;
  int iVar30;
  ForAnyElementType FVar31;
  bool bVar32;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *local_res10;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *local_res18;
  undefined1 auStackY_358 [32];
  uint local_308;
  <lambda_1> local_304;
  ForAnyElementType local_2f8;
  undefined8 uStack_2f0;
  ForAnyElementType local_2e8;
  undefined8 uStack_2e0;
  int local_2d8;
  uint local_2d4;
  int local_2d0;
  uint local_2cc;
  uint local_2c8 [2];
  int local_2c0;
  uint local_2b8;
  uint uStack_2b4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2b0;
  undefined4 local_2a8;
  uint uStack_2a4;
  uint uStack_2a0;
  undefined4 uStack_29c;
  uint local_298;
  uint uStack_294;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_290;
  undefined4 local_288;
  uint uStack_284;
  uint uStack_280;
  undefined4 uStack_27c;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_278;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_268;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_258;
  undefined8 local_248;
  int local_240;
  longlong local_238;
  undefined4 local_230;
  int local_22c;
  undefined4 local_228;
  int local_224;
  undefined8 local_220;
  longlong local_218;
  undefined8 local_210;
  undefined4 local_208;
  undefined8 local_200;
  int local_1f8;
  longlong *local_1f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1e8;
  longlong *local_1c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1c0;
  TArrayView<std::nullptr_t,int> local_1a0;
  code *local_190;
  TMeshTangents<double> **local_188;
  TArrayView<std::nullptr_t,int> local_180;
  code *local_170;
  TMeshTangents<double> **local_168;
  FSparseArrayAllocationInfo local_160;
  TMeshTangents<double> *local_150;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> **local_148;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_140;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_138;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_130;
  _RTL_CRITICAL_SECTION *local_128;
  ForAnyElementType *local_120;
  TMeshTangents<double> *local_118;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_110;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> **local_108;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **local_100;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_f8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_f0;
  FComputeTangentsOptions *local_e8;
  undefined8 *local_e0;
  undefined1 local_d8 [32];
  ForElementType<unsigned_int> local_b8;
  uint local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  FScriptContainerElement local_a0 [8];
  ForAnyElementType local_98;
  uint local_90;
  _RTL_CRITICAL_SECTION local_88;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_358;
  local_220 = __real_bfefae147ae147ae;
  iVar22 = (this->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed +
           (this->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  local_res10 = param_1;
  local_res18 = param_2;
  SetTangentCount(this,iVar22 * 3,true);
  uVar16 = 0;
  local_258.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_258.ArrayNum = 0;
  local_258.ArrayMax = 0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum(&local_258,iVar22,Default);
  local_268.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_268.ArrayNum = 0;
  local_268.ArrayMax = 0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum(&local_268,iVar22,Default);
  local_278.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_278.ArrayNum = 0;
  local_278.ArrayMax = 0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum(&local_278,iVar22,Default);
  local_2f8.Data = (FScriptContainerElement *)0x0;
  uStack_2f0 = 0;
  InitializeCriticalSectionAndSpinCount(&local_88,4000);
  local_148 = &local_res18;
  local_1a0.DataPtr = (void **)0x0;
  local_138 = &local_268;
  local_1a0.ArrayNum = 0;
  local_130 = &local_278;
  local_128 = &local_88;
  local_120 = &local_2f8;
  local_190 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::TMeshTangents<double>::ComputeMikkTStyleTangents'::__l2::<lambda_1>,void,int>
              ::Call;
  local_188 = &local_150;
  local_150 = this;
  local_140 = &local_258;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar22,1,(TFunctionRef<void___cdecl(int)> *)&local_190,local_304,
             None,&local_1a0);
  local_110 = &local_278;
  local_108 = &local_res18;
  local_100 = &local_res10;
  local_f0 = &local_268;
  local_168 = &local_118;
  local_e0 = &local_220;
  local_170 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::TMeshTangents<double>::ComputeMikkTStyleTangents'::__l2::<lambda_2>,void,int>
              ::Call;
  local_180.DataPtr = (void **)0x0;
  local_180.ArrayNum = 0;
  local_118 = this;
  local_f8 = &local_258;
  local_e8 = param_3;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",
             (this->Mesh->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (this->Mesh->VertexRefCounts).RefCounts.CurBlockUsed,1,
             (TFunctionRef<void___cdecl(int)> *)&local_170,local_304,None,&local_180);
  FVar31.Data = local_2f8.Data;
  pTVar1 = &this->AllDegenerateTris;
  if (pTVar1 == (TArray<int,TSizedDefaultAllocator<32>_> *)&local_2f8) {
LAB_143494cc3:
    uVar20 = (uint)uStack_2f0;
  }
  else {
    iVar22 = (uint)uStack_2f0;
    lVar25 = (longlong)(int)(uint)uStack_2f0;
    piVar4 = &(this->AllDegenerateTris).ArrayMax;
    (this->AllDegenerateTris).ArrayNum = (uint)uStack_2f0;
    if (((uint)uStack_2f0 != 0) || (*piVar4 != 0)) {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(uint)uStack_2f0,*piVar4,&pTVar1->AllocatorInstance,(uint)uStack_2f0,piVar4);
      if (iVar22 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,FVar31.Data,lVar25 << 2);
      }
      goto LAB_143494cc3;
    }
    *piVar4 = 0;
    uVar20 = 0;
  }
  FVar31.Data = local_2f8.Data;
  if ((int)uVar20 < 1) goto LAB_143495dc4;
  local_d8._0_8_ = (FScriptContainerElement *)0x0;
  local_d8._8_8_ = 0;
  local_b8 = (ForElementType<unsigned_int>)0x0;
  local_b0 = 0;
  local_ac = 0x80;
  local_a8 = -1;
  local_a4 = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_d8,uVar20);
  if (uVar20 < 4) {
    uVar23 = 1;
  }
  else {
    uVar21 = (ulonglong)((uVar20 >> 1) + 7) * 2 + 1;
    lVar25 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    local_230 = (int)lVar25;
    uVar23 = 1 << ((byte)lVar25 & 0x1f);
  }
  if ((local_90 == 0) || ((int)local_90 < (int)uVar23)) {
    local_90 = uVar23;
    if (local_98.Data != (FScriptContainerElement *)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_98,0,0,4);
    }
    if (uVar23 != 0) {
      uVar24 = uVar23;
      if (uVar23 < 2) {
        if (local_98.Data != (FScriptContainerElement *)0x0) {
          uVar24 = 0;
          goto LAB_143494db3;
        }
      }
      else {
LAB_143494db3:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_98,0,uVar24,4);
      }
      if (0 < (int)uVar23) {
        uVar28 = (ulonglong)uVar23;
        uVar21 = uVar16;
        do {
          FVar18.Data = local_a0;
          if (local_98.Data != (FScriptContainerElement *)0x0) {
            FVar18.Data = local_98.Data;
          }
          uVar14 = (longlong)(int)uVar23 - 1U & uVar21;
          uVar21 = uVar21 + 1;
          *(undefined4 *)(FVar18.Data + uVar14 * 4) = 0xffffffff;
          uVar28 = uVar28 - 1;
        } while (uVar28 != 0);
      }
    }
    if (local_90 != 0) {
      pTStack_2b0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
      local_2b8 = 0;
      uStack_2b4 = 1;
      uStack_2a4 = 0;
      uStack_2a0 = 0;
      if (local_b0 != 0) {
        FVar29 = (ForElementType<unsigned_int>)((longlong)local_d8 + 0x10);
        if (local_b8 != (ForElementType<unsigned_int>)0x0) {
          FVar29 = local_b8;
        }
        uVar23 = *(uint *)FVar29;
        uVar21 = uVar16;
        while (uVar23 == 0) {
          uStack_2a0 = (int)uVar21 + 0x20;
          uVar21 = (ulonglong)uStack_2a0;
          iVar22 = (int)uVar16;
          local_2b8 = iVar22 + 1;
          uVar16 = (ulonglong)local_2b8;
          if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_2b8)
          goto LAB_143494ecd;
          uVar23 = ((uint *)((longlong)FVar29 + 4))[iVar22];
        }
        uStack_2b4 = -uVar23 & uVar23;
        uVar16 = (ulonglong)uStack_2b4 * 2 + 1;
        lVar25 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        local_22c = (int)lVar25;
        uStack_2a4 = (int)lVar25 + -1 + (int)uVar21;
        uVar16 = (ulonglong)uStack_2a4;
        if ((int)local_b0 < (int)uStack_2a4) {
LAB_143494ecd:
          uVar16 = (ulonglong)local_b0;
          uStack_2a4 = local_b0;
        }
      }
      local_2a8 = 0xffffffff;
      local_1f0 = (longlong *)local_d8;
      local_1e8._padding_ = CONCAT44(uStack_2b4,local_2b8);
      local_1e8.Array = pTStack_2b0;
      local_1e8.UnvisitedBitMask = 0xffffffff;
      local_1e8.CurrentBitIndex = uStack_2a4;
      local_1e8.BaseBitIndex = uStack_2a0;
      local_1e8._28_4_ = uStack_29c;
      if ((int)uVar16 < (int)local_b0) {
        do {
          lVar25 = *local_1f0;
          lVar15 = (longlong)(int)uVar16;
          uVar23 = local_90 - 1 & *(uint *)(lVar25 + lVar15 * 0xc);
          *(uint *)(lVar25 + 8 + lVar15 * 0xc) = uVar23;
          FVar18.Data = local_a0;
          if (local_98.Data != (FScriptContainerElement *)0x0) {
            FVar18.Data = local_98.Data;
          }
          uVar21 = (longlong)(int)local_90 - 1U & (longlong)(int)uVar23;
          *(undefined4 *)(lVar25 + 4 + lVar15 * 0xc) = *(undefined4 *)(FVar18.Data + uVar21 * 4);
          *(int *)(FVar18.Data + uVar21 * 4) = (int)uVar16;
          local_1e8.UnvisitedBitMask = local_1e8.UnvisitedBitMask & ~local_1e8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1e8);
          uVar16 = (ulonglong)(uint)local_1e8.CurrentBitIndex;
        } while (local_1e8.CurrentBitIndex < (local_1e8.Array)->NumBits);
      }
    }
  }
  pFVar2 = FVar31.Data + (longlong)(int)uVar20 * 4;
  if (FVar31.Data != pFVar2) {
    do {
      puVar27 = (uint *)0x0;
      if (local_a4 == 0) {
        iVar22 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0xc,4,1,(ForAnyElementType *)local_d8,(int *)(local_d8 + 8),
                            (int *)(local_d8 + 0xc));
        iVar13 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                           ((TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10),1);
        FVar29 = (ForElementType<unsigned_int>)((longlong)local_d8 + 0x10);
        if (local_b8 != (ForElementType<unsigned_int>)0x0) {
          FVar29 = local_b8;
        }
        bVar17 = (byte)iVar13 & 0x1f;
        if (iVar13 < 0) {
          iVar13 = iVar13 + 0x1f;
          bVar17 = bVar17 - 0x20;
        }
        puVar3 = (uint *)((longlong)FVar29 + (longlong)(iVar13 >> 5) * 4);
        *puVar3 = *puVar3 & ~(1 << (bVar17 & 0x1f));
        iVar13 = local_a8;
      }
      else {
        local_a4 = local_a4 + -1;
        iVar13 = *(int *)(local_d8._0_8_ + (longlong)local_a8 * 0xc + 4);
        iVar22 = local_a8;
        if (local_a4 != 0) {
          *(undefined4 *)(local_d8._0_8_ + (longlong)iVar13 * 0xc) = 0xffffffff;
        }
      }
      local_a8 = iVar13;
      TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_d8,&local_160,iVar22);
      if (local_160.Pointer != (uint *)0x0) {
        *(uint *)local_160.Pointer = *(uint *)FVar31.Data;
        *(uint *)((longlong)local_160.Pointer + 4) = 0xffffffff;
        puVar27 = local_160.Pointer;
      }
      uVar20 = *puVar27;
      if ((local_d8._8_4_ - local_a4 != 1) && (local_d8._8_4_ != local_a4)) {
        FVar18.Data = local_a0;
        if (local_98.Data != (FScriptContainerElement *)0x0) {
          FVar18.Data = local_98.Data;
        }
        for (iVar22 = *(int *)(FVar18.Data + (ulonglong)(local_90 - 1 & uVar20) * 4); iVar22 != -1;
            iVar22 = *(int *)(local_d8._0_8_ + (longlong)iVar22 * 0xc + 4)) {
          if (*(uint *)(local_d8._0_8_ + (longlong)iVar22 * 0xc) == uVar20) {
            if (iVar22 != -1) {
              *(uint *)(local_d8._0_8_ + (longlong)iVar22 * 0xc) = uVar20;
              TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)local_d8,local_160.Index,1);
              goto LAB_1434953d4;
            }
            break;
          }
        }
      }
      uVar16 = 0;
      uVar24 = 1;
      uVar23 = local_d8._8_4_ - local_a4;
      if (3 < uVar23) {
        uVar21 = (ulonglong)((uVar23 >> 1) + 7) * 2 + 1;
        lVar25 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        local_228 = (int)lVar25;
        uVar24 = 1 << ((byte)lVar25 & 0x1f);
      }
      if (((int)uVar23 < 1) || ((int)uVar24 <= (int)local_90)) {
        uVar20 = local_90 - 1 & uVar20;
        puVar27[2] = uVar20;
        FVar18.Data = local_a0;
        if (local_98.Data != (FScriptContainerElement *)0x0) {
          FVar18.Data = local_98.Data;
        }
        uVar16 = (longlong)(int)local_90 - 1U & (longlong)(int)uVar20;
        puVar27[1] = *(uint *)(FVar18.Data + uVar16 * 4);
        *(int *)(FVar18.Data + uVar16 * 4) = local_160.Index;
      }
      else {
        local_90 = uVar24;
        if (local_98.Data != (FScriptContainerElement *)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_98,0,0,4);
        }
        if (uVar24 != 0) {
          uVar20 = uVar24;
          if (uVar24 < 2) {
            if (local_98.Data != (FScriptContainerElement *)0x0) {
              uVar20 = 0;
              goto LAB_1434951c0;
            }
          }
          else {
LAB_1434951c0:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_98,0,uVar20,4);
          }
          if (0 < (int)uVar24) {
            uVar28 = (ulonglong)uVar24;
            uVar21 = uVar16;
            do {
              FVar18.Data = local_a0;
              if (local_98.Data != (FScriptContainerElement *)0x0) {
                FVar18.Data = local_98.Data;
              }
              uVar14 = (longlong)(int)uVar24 - 1U & uVar21;
              uVar21 = uVar21 + 1;
              *(undefined4 *)(FVar18.Data + uVar14 * 4) = 0xffffffff;
              uVar28 = uVar28 - 1;
            } while (uVar28 != 0);
          }
        }
        if (local_90 != 0) {
          pTStack_290 = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
          local_298 = 0;
          uStack_294 = 1;
          uStack_284 = 0;
          uStack_280 = 0;
          if (local_b0 != 0) {
            FVar29 = (ForElementType<unsigned_int>)((longlong)local_d8 + 0x10);
            if (local_b8 != (ForElementType<unsigned_int>)0x0) {
              FVar29 = local_b8;
            }
            uVar20 = *(uint *)FVar29;
            uVar21 = uVar16;
            while (uVar20 == 0) {
              uStack_280 = (int)uVar21 + 0x20;
              uVar21 = (ulonglong)uStack_280;
              iVar22 = (int)uVar16;
              local_298 = iVar22 + 1;
              uVar16 = (ulonglong)local_298;
              if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 <
                  (int)local_298) goto LAB_1434952cd;
              uVar20 = ((uint *)((longlong)FVar29 + 4))[iVar22];
            }
            uStack_294 = -uVar20 & uVar20;
            uVar16 = (ulonglong)uStack_294 * 2 + 1;
            lVar25 = 0x3f;
            if (uVar16 != 0) {
              for (; uVar16 >> lVar25 == 0; lVar25 = lVar25 + -1) {
              }
            }
            local_224 = (int)lVar25;
            uStack_284 = (int)lVar25 + -1 + (int)uVar21;
            uVar16 = (ulonglong)uStack_284;
            if ((int)local_b0 < (int)uStack_284) {
LAB_1434952cd:
              uVar16 = (ulonglong)local_b0;
              uStack_284 = local_b0;
            }
          }
          local_288 = 0xffffffff;
          local_1c8 = (longlong *)local_d8;
          local_1c0._padding_ = CONCAT44(uStack_294,local_298);
          local_1c0.Array = pTStack_290;
          local_1c0.UnvisitedBitMask = 0xffffffff;
          local_1c0.CurrentBitIndex = uStack_284;
          local_1c0.BaseBitIndex = uStack_280;
          local_1c0._28_4_ = uStack_27c;
          if ((int)uVar16 < (int)local_b0) {
            do {
              lVar25 = *local_1c8;
              lVar15 = (longlong)(int)uVar16;
              uVar20 = local_90 - 1 & *(uint *)(lVar25 + lVar15 * 0xc);
              *(uint *)(lVar25 + 8 + lVar15 * 0xc) = uVar20;
              FVar18.Data = local_a0;
              if (local_98.Data != (FScriptContainerElement *)0x0) {
                FVar18.Data = local_98.Data;
              }
              uVar21 = (longlong)(int)local_90 - 1U & (longlong)(int)uVar20;
              *(undefined4 *)(lVar25 + 4 + lVar15 * 0xc) = *(undefined4 *)(FVar18.Data + uVar21 * 4)
              ;
              *(int *)(FVar18.Data + uVar21 * 4) = (int)uVar16;
              local_1c0.UnvisitedBitMask = local_1c0.UnvisitedBitMask & ~local_1c0._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1c0);
              uVar16 = (ulonglong)(uint)local_1c0.CurrentBitIndex;
            } while (local_1c0.CurrentBitIndex < (local_1c0.Array)->NumBits);
          }
        }
      }
LAB_1434953d4:
      FVar31.Data = FVar31.Data + 4;
    } while (FVar31.Data != pFVar2);
  }
  local_2e8.Data = (FScriptContainerElement *)0x0;
  uStack_2e0 = 0;
  iVar22 = (uint)uStack_2f0;
  while (0 < iVar22) {
    bVar32 = (longlong)uStack_2e0 < 0;
    uStack_2e0 = uStack_2e0 & 0xffffffff00000000;
    if (bVar32) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&local_2e8,0,(int *)((longlong)&uStack_2e0 + 4));
      iVar22 = (uint)uStack_2f0;
    }
    local_2cc = 0;
    local_218 = (longlong)iVar22;
    local_238 = 0;
    if (0 < iVar22) {
LAB_143495470:
      lVar25 = local_238;
      uVar16 = 0;
      uVar23 = 0;
      uVar20 = uVar23;
      if ((int)local_2cc < iVar22) {
        uVar20 = ~local_2cc >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar32)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar8 = this->Mesh;
      local_308 = *(uint *)(local_2f8.Data + lVar25 * 4);
      uVar28 = (ulonglong)(local_308 & 0x1ff);
      lVar25 = *(longlong *)
                ((pFVar8->TriangleEdges).Blocks.AllocatorInstance.Data +
                (ulonglong)(local_308 >> 9) * 8);
      local_210 = *(undefined8 *)(lVar25 + uVar28 * 0xc);
      local_208 = *(undefined4 *)(lVar25 + 8 + uVar28 * 0xc);
      uVar21 = uVar16;
      do {
        uVar20 = *(uint *)((longlong)&local_210 + uVar21 * 4);
        uVar19 = (ulonglong)(uVar20 & 0x1ff);
        lVar25 = *(longlong *)
                  ((pFVar8->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar20 >> 9) * 8);
        uVar14 = *(ulonglong *)(lVar25 + 8 + uVar19 * 0x10);
        piVar4 = (int *)(lVar25 + uVar19 * 0x10);
        iVar22 = *piVar4;
        iVar13 = piVar4[1];
        if ((uint)uVar14 == local_308) {
          uVar14 = uVar14 >> 0x20;
        }
        uVar20 = (uint)uVar14;
        if (local_d8._8_4_ != local_a4) {
          FVar31.Data = local_a0;
          if (local_98.Data != (FScriptContainerElement *)0x0) {
            FVar31.Data = local_98.Data;
          }
          for (iVar30 = *(int *)(FVar31.Data + ((ulonglong)(local_90 - 1) & uVar14 & 0xffffffff) * 4
                                ); iVar30 != -1;
              iVar30 = *(int *)(local_d8._0_8_ + (longlong)iVar30 * 0xc + 4)) {
            if (*(uint *)(local_d8._0_8_ + (longlong)iVar30 * 0xc) == uVar20) goto LAB_143495597;
          }
        }
        if (uVar20 != 0xffffffff) {
          pFVar2 = (pFVar8->Triangles).Blocks.AllocatorInstance.Data;
          lVar25 = *(longlong *)(pFVar2 + (ulonglong)(local_308 >> 9) * 8);
          local_248 = *(undefined8 *)(lVar25 + uVar28 * 0xc);
          local_240 = *(int *)(lVar25 + 8 + uVar28 * 0xc);
          iVar30 = (int)((ulonglong)local_248 >> 0x20);
          uVar24 = uVar23;
          if ((int)local_248 != iVar22) {
            if (iVar30 == iVar22) {
              uVar24 = 1;
            }
            else {
              uVar24 = 0xffffffff;
              if (local_240 == iVar22) {
                uVar24 = 2;
              }
            }
          }
          if ((int)local_248 == iVar13) {
            local_2d8 = 0;
          }
          else if (iVar30 == iVar13) {
            local_2d8 = 1;
          }
          else {
            local_2d8 = -1;
            if (local_240 == iVar13) {
              local_2d8 = 2;
            }
          }
          iVar30 = 1;
          uVar21 = uVar16;
          uVar28 = uVar16;
          goto LAB_1434956f0;
        }
LAB_143495597:
        uVar21 = uVar21 + 1;
      } while ((longlong)uVar21 < 3);
      if (((local_2e8.Data <= (FScriptContainerElement *)&local_308) &&
          ((FScriptContainerElement *)&local_308 < local_2e8.Data + (longlong)uStack_2e0._4_4_ * 4))
         && (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar32)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if ((int)uStack_2e0 == uStack_2e0._4_4_) {
        iVar22 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_2e8,(int *)((longlong)&uStack_2e0 + 4));
        uStack_2e0 = CONCAT44(uStack_2e0._4_4_,iVar22);
      }
      lVar25 = (longlong)(int)uStack_2e0;
      uStack_2e0 = CONCAT44(uStack_2e0._4_4_,(int)uStack_2e0 + 1);
      *(uint *)(local_2e8.Data + lVar25 * 4) = local_308;
      goto LAB_143495cdd;
    }
LAB_143495cfe:
    uVar16 = uStack_2f0;
    FVar31.Data = local_2f8.Data;
    if ((int)uStack_2e0 == iVar22) {
      uVar20 = uStack_2f0._4_4_;
      uStack_2f0 = (ulonglong)uStack_2f0._4_4_ << 0x20;
      if ((-1 < (longlong)uVar16) || (uVar20 == 0)) break;
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&local_2f8,0,(int *)((longlong)&uStack_2f0 + 4));
    }
    else {
      local_2f8.Data = local_2e8.Data;
      uStack_2f0 = uStack_2e0;
      local_2e8.Data = FVar31.Data;
      uStack_2e0 = uVar16;
    }
    iVar22 = (uint)uStack_2f0;
  }
  if (local_2e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e8.Data);
  }
  local_90 = 0;
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_d8);
LAB_143495dc4:
  DeleteCriticalSection(&local_88);
  if (local_2f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f8.Data);
  }
  if (local_278.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.AllocatorInstance.Data);
  }
  if (local_268.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.AllocatorInstance.Data);
  }
  if (local_258.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.AllocatorInstance.Data);
  }
  return;
  while( true ) {
    uVar21 = (ulonglong)((int)uVar21 + 1);
    iVar30 = iVar30 + 1;
    uVar28 = uVar28 + 1;
    if (2 < (longlong)uVar28) break;
LAB_1434956f0:
    iVar6 = *(int *)((longlong)&local_248 +
                    (longlong)
                    (iVar30 + (iVar30 / 3 + (iVar30 >> 0x1f) +
                              (int)(((longlong)iVar30 / 3 + ((longlong)iVar30 >> 0x3f) & 0xffffffffU
                                    ) >> 0x1f)) * -3) * 4);
    iVar7 = *(int *)((longlong)&local_248 + uVar28 * 4);
    if (((iVar22 == iVar7) || (bVar32 = iVar22 == iVar6, iVar6 = iVar7, bVar32)) &&
       (iVar13 == iVar6)) {
      local_2d0 = (int)uVar21 + 2;
      local_2d0 = local_2d0 +
                  (local_2d0 / 3 + (local_2d0 >> 0x1f) +
                  (int)(((longlong)local_2d0 / 3 + ((longlong)local_2d0 >> 0x3f) & 0xffffffffU) >>
                       0x1f)) * -3;
      goto LAB_14349573a;
    }
  }
  local_2d0 = -1;
LAB_14349573a:
  lVar25 = *(longlong *)(pFVar2 + ((uVar14 & 0xffffffff) >> 9) * 8);
  local_200 = *(undefined8 *)(lVar25 + (ulonglong)(uVar20 & 0x1ff) * 0xc);
  local_1f8 = *(int *)(lVar25 + 8 + (ulonglong)(uVar20 & 0x1ff) * 0xc);
  iVar30 = (int)((ulonglong)local_200 >> 0x20);
  if ((int)local_200 != iVar22) {
    if (iVar30 == iVar22) {
      uVar16 = 1;
    }
    else {
      uVar16 = 0xffffffff;
      if (local_1f8 == iVar22) {
        uVar16 = 2;
      }
    }
  }
  uVar26 = uVar23;
  if ((int)local_200 != iVar13) {
    if (iVar30 == iVar13) {
      uVar26 = 1;
    }
    else {
      uVar26 = 0xffffffff;
      if (local_1f8 == iVar13) {
        uVar26 = 2;
      }
    }
  }
  local_2c0 = uVar20 * 3;
  uVar20 = local_2c0 + (int)uVar16;
  if ((int)uVar20 < (this->Tangents).ArrayNum) {
    uVar23 = ~uVar20 >> 0x1f;
  }
  local_2d4 = uVar24;
  if ((uVar23 == 0) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar32)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar9 = (this->Tangents).AllocatorInstance.Data;
  lVar25 = (longlong)(int)uVar20;
  uVar24 = uVar24 + local_308 * 3;
  pFVar2 = pFVar9 + lVar25 * 0x18;
  uVar11 = *(undefined8 *)pFVar2;
  uVar12 = *(undefined8 *)(pFVar2 + 8);
  uVar5 = *(undefined8 *)(pFVar9 + lVar25 * 0x18 + 0x10);
  uVar23 = 0;
  if ((int)uVar24 < (this->Tangents).ArrayNum) {
    uVar23 = ~uVar24 >> 0x1f;
  }
  if ((uVar23 == 0) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar32)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar9 = (this->Tangents).AllocatorInstance.Data;
  pFVar2 = pFVar9 + (longlong)(int)uVar24 * 0x18;
  *(undefined8 *)pFVar2 = uVar11;
  *(undefined8 *)(pFVar2 + 8) = uVar12;
  *(undefined8 *)(pFVar9 + (longlong)(int)uVar24 * 0x18 + 0x10) = uVar5;
  uVar23 = 0;
  if ((int)uVar20 < (this->Bitangents).ArrayNum) {
    uVar23 = ~uVar20 >> 0x1f;
  }
  if ((uVar23 == 0) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar32)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar20 = local_2d4;
  pFVar9 = (this->Bitangents).AllocatorInstance.Data;
  pFVar2 = pFVar9 + lVar25 * 0x18;
  uVar11 = *(undefined8 *)pFVar2;
  uVar12 = *(undefined8 *)(pFVar2 + 8);
  uVar24 = local_308 * 3 + local_2d4;
  uVar5 = *(undefined8 *)(pFVar9 + lVar25 * 0x18 + 0x10);
  uVar23 = 0;
  if ((int)uVar24 < (this->Bitangents).ArrayNum) {
    uVar23 = ~uVar24 >> 0x1f;
  }
  if ((uVar23 == 0) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar32)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar26 = local_2c0 + uVar26;
  pFVar9 = (this->Bitangents).AllocatorInstance.Data;
  pFVar2 = pFVar9 + (longlong)(int)uVar24 * 0x18;
  *(undefined8 *)pFVar2 = uVar11;
  *(undefined8 *)(pFVar2 + 8) = uVar12;
  *(undefined8 *)(pFVar9 + (longlong)(int)uVar24 * 0x18 + 0x10) = uVar5;
  uVar23 = 0;
  if ((int)uVar26 < (this->Tangents).ArrayNum) {
    uVar23 = ~uVar26 >> 0x1f;
  }
  if ((uVar23 == 0) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar32)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar9 = (this->Tangents).AllocatorInstance.Data;
  lVar25 = (longlong)(int)uVar26;
  pFVar2 = pFVar9 + lVar25 * 0x18;
  uVar11 = *(undefined8 *)pFVar2;
  uVar12 = *(undefined8 *)(pFVar2 + 8);
  uVar5 = *(undefined8 *)(pFVar9 + lVar25 * 0x18 + 0x10);
  uVar23 = local_2d8 + local_308 * 3;
  uVar24 = 0;
  if ((int)uVar23 < (this->Tangents).ArrayNum) {
    uVar24 = ~uVar23 >> 0x1f;
  }
  if ((uVar24 == 0) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar32)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar9 = (this->Tangents).AllocatorInstance.Data;
  pFVar2 = pFVar9 + (longlong)(int)uVar23 * 0x18;
  *(undefined8 *)pFVar2 = uVar11;
  *(undefined8 *)(pFVar2 + 8) = uVar12;
  *(undefined8 *)(pFVar9 + (longlong)(int)uVar23 * 0x18 + 0x10) = uVar5;
  uVar23 = 0;
  if ((int)uVar26 < (this->Bitangents).ArrayNum) {
    uVar23 = ~uVar26 >> 0x1f;
  }
  if ((uVar23 == 0) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar32)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar9 = (this->Bitangents).AllocatorInstance.Data;
  pFVar2 = pFVar9 + lVar25 * 0x18;
  uVar11 = *(undefined8 *)pFVar2;
  uVar12 = *(undefined8 *)(pFVar2 + 8);
  uVar5 = *(undefined8 *)(pFVar9 + lVar25 * 0x18 + 0x10);
  uVar23 = local_2d8 + local_308 * 3;
  uVar24 = 0;
  if ((int)uVar23 < (this->Bitangents).ArrayNum) {
    uVar24 = ~uVar23 >> 0x1f;
  }
  if ((uVar24 == 0) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar32)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar9 = (this->Bitangents).AllocatorInstance.Data;
  pFVar2 = pFVar9 + (longlong)(int)uVar23 * 0x18;
  *(undefined8 *)pFVar2 = uVar11;
  *(undefined8 *)(pFVar2 + 8) = uVar12;
  *(undefined8 *)(pFVar9 + (longlong)(int)uVar23 * 0x18 + 0x10) = uVar5;
  uVar24 = local_308 * 3 + uVar20;
  uVar23 = 0;
  if ((int)uVar24 < (this->Tangents).ArrayNum) {
    uVar23 = ~uVar24 >> 0x1f;
  }
  if ((uVar23 == 0) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar32)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar22 = local_2d0;
  pFVar9 = (this->Tangents).AllocatorInstance.Data;
  pFVar2 = pFVar9 + (longlong)(int)uVar24 * 0x18;
  uVar11 = *(undefined8 *)pFVar2;
  uVar12 = *(undefined8 *)(pFVar2 + 8);
  uVar5 = *(undefined8 *)(pFVar9 + (longlong)(int)uVar24 * 0x18 + 0x10);
  uVar23 = local_2d0 + local_308 * 3;
  uVar26 = 0;
  uVar24 = uVar26;
  if ((int)uVar23 < (this->Tangents).ArrayNum) {
    uVar24 = ~uVar23 >> 0x1f;
  }
  if ((uVar24 == 0) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar32)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar9 = (this->Tangents).AllocatorInstance.Data;
  pFVar2 = pFVar9 + (longlong)(int)uVar23 * 0x18;
  *(undefined8 *)pFVar2 = uVar11;
  *(undefined8 *)(pFVar2 + 8) = uVar12;
  *(undefined8 *)(pFVar9 + (longlong)(int)uVar23 * 0x18 + 0x10) = uVar5;
  uVar20 = local_308 * 3 + uVar20;
  uVar23 = uVar26;
  if ((int)uVar20 < (this->Bitangents).ArrayNum) {
    uVar23 = ~uVar20 >> 0x1f;
  }
  if ((uVar23 == 0) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar32)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar9 = (this->Bitangents).AllocatorInstance.Data;
  pFVar2 = pFVar9 + (longlong)(int)uVar20 * 0x18;
  uVar11 = *(undefined8 *)pFVar2;
  uVar12 = *(undefined8 *)(pFVar2 + 8);
  uVar5 = *(undefined8 *)(pFVar9 + (longlong)(int)uVar20 * 0x18 + 0x10);
  uVar20 = iVar22 + local_308 * 3;
  if ((int)uVar20 < (this->Bitangents).ArrayNum) {
    uVar26 = ~uVar20 >> 0x1f;
  }
  if ((uVar26 == 0) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar32)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar9 = (this->Bitangents).AllocatorInstance.Data;
  pFVar2 = pFVar9 + (longlong)(int)uVar20 * 0x18;
  *(undefined8 *)pFVar2 = uVar11;
  *(undefined8 *)(pFVar2 + 8) = uVar12;
  *(undefined8 *)(pFVar9 + (longlong)(int)uVar20 * 0x18 + 0x10) = uVar5;
  local_2c8[0] = local_308;
  if (local_d8._8_4_ != local_a4) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_d8,local_308,
               (int *)local_2c8);
  }
LAB_143495cdd:
  local_2cc = local_2cc + 1;
  local_238 = local_238 + 1;
  iVar22 = (uint)uStack_2f0;
  if (local_218 <= local_238) goto LAB_143495cfe;
  goto LAB_143495470;
}

// ComputeSeparatePerTriangleTangents @ 143495fd0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TMeshTangents<float>::ComputeSeparatePerTriangleTangents
          (TMeshTangents<float> *this,
          TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *param_1,
          TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_2,
          FComputeTangentsOptions *param_3)

{
  int iVar1;
  int iVar2;
  <lambda_1> local_res8;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *local_res10;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *local_res18 [2];
  TArrayView<std::nullptr_t,int> local_58;
  code *local_48;
  TMeshTangents<float> **local_40;
  TMeshTangents<float> *local_38;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> **local_30;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **local_28;
  
  iVar2 = (this->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
          (this->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed;
  iVar1 = iVar2 * 3;
  local_res10 = param_1;
  local_res18[0] = param_2;
  if ((this->Tangents).ArrayNum < iVar1) {
    TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->Tangents,iVar1,Default);
  }
  if ((this->Bitangents).ArrayNum < iVar1) {
    TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->Bitangents,iVar1,Default);
  }
  local_30 = local_res18;
  local_58.DataPtr = (void **)0x0;
  local_28 = &local_res10;
  local_58.ArrayNum = 0;
  local_48 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TMeshTangents<float>::ComputeSeparatePerTriangleTangents'::__l2::<lambda_1>,void,int>
             ::Call;
  local_40 = &local_38;
  local_38 = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar2,1,(TFunctionRef<void___cdecl(int)> *)&local_48,local_res8,
             None,&local_58);
  return;
}

// ComputeSeparatePerTriangleTangents @ 1434960b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TMeshTangents<double>::ComputeSeparatePerTriangleTangents
          (TMeshTangents<double> *this,
          TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *param_1,
          TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_2,
          FComputeTangentsOptions *param_3)

{
  int iVar1;
  int iVar2;
  <lambda_1> local_res8;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *local_res10;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *local_res18 [2];
  TArrayView<std::nullptr_t,int> local_58;
  code *local_48;
  TMeshTangents<double> **local_40;
  TMeshTangents<double> *local_38;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> **local_30;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **local_28;
  
  iVar2 = (this->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
          (this->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed;
  iVar1 = iVar2 * 3;
  local_res10 = param_1;
  local_res18[0] = param_2;
  if ((this->Tangents).ArrayNum < iVar1) {
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->Tangents,iVar1,Default);
  }
  if ((this->Bitangents).ArrayNum < iVar1) {
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->Bitangents,iVar1,Default);
  }
  local_30 = local_res18;
  local_58.DataPtr = (void **)0x0;
  local_28 = &local_res10;
  local_58.ArrayNum = 0;
  local_48 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TMeshTangents<double>::ComputeSeparatePerTriangleTangents'::__l2::<lambda_1>,void,int>
             ::Call;
  local_40 = &local_38;
  local_38 = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar2,1,(TFunctionRef<void___cdecl(int)> *)&local_48,local_res8,
             None,&local_58);
  return;
}

// ComputeTriVertexTangents @ 143496190

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TMeshTangents<float>::ComputeTriVertexTangents
          (TMeshTangents<float> *this,
          TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *param_1,
          TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_2,
          FComputeTangentsOptions *param_3)

{
  int iVar1;
  int iVar2;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *local_res20;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *local_48;
  TArrayView<std::nullptr_t,int> local_40;
  code *local_30;
  TMeshTangents<float> **local_28;
  TMeshTangents<float> *local_20;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> **local_18;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **local_10;
  
  if (param_3->bAveraged != false) {
    ComputeMikkTStyleTangents(this,param_1,param_2,param_3);
    return;
  }
  iVar2 = (this->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed +
          (this->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  iVar1 = iVar2 * 3;
  local_res20 = param_2;
  local_48 = param_1;
  if ((this->Tangents).ArrayNum < iVar1) {
    TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->Tangents,iVar1,Default);
  }
  if ((this->Bitangents).ArrayNum < iVar1) {
    TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->Bitangents,iVar1,Default);
  }
  local_18 = &local_res20;
  local_40.DataPtr = (void **)0x0;
  local_10 = &local_48;
  local_40.ArrayNum = 0;
  local_30 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TMeshTangents<float>::ComputeSeparatePerTriangleTangents'::__l2::<lambda_1>,void,int>
             ::Call;
  local_28 = &local_20;
  local_20 = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar2,1,(TFunctionRef<void___cdecl(int)> *)&local_30,
             local_res20._0_1_,None,&local_40);
  return;
}

// ComputeTriVertexTangents @ 1434962a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TMeshTangents<double>::ComputeTriVertexTangents
          (TMeshTangents<double> *this,
          TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *param_1,
          TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_2,
          FComputeTangentsOptions *param_3)

{
  int iVar1;
  int iVar2;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *local_res20;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *local_48;
  TArrayView<std::nullptr_t,int> local_40;
  code *local_30;
  TMeshTangents<double> **local_28;
  TMeshTangents<double> *local_20;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> **local_18;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **local_10;
  
  if (param_3->bAveraged != false) {
    ComputeMikkTStyleTangents(this,param_1,param_2,param_3);
    return;
  }
  iVar2 = (this->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed +
          (this->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  iVar1 = iVar2 * 3;
  local_res20 = param_2;
  local_48 = param_1;
  if ((this->Tangents).ArrayNum < iVar1) {
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->Tangents,iVar1,Default);
  }
  if ((this->Bitangents).ArrayNum < iVar1) {
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->Bitangents,iVar1,Default);
  }
  local_18 = &local_res20;
  local_40.DataPtr = (void **)0x0;
  local_10 = &local_48;
  local_40.ArrayNum = 0;
  local_30 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TMeshTangents<double>::ComputeSeparatePerTriangleTangents'::__l2::<lambda_1>,void,int>
             ::Call;
  local_28 = &local_20;
  local_20 = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar2,1,(TFunctionRef<void___cdecl(int)> *)&local_30,
             local_res20._0_1_,None,&local_40);
  return;
}

// ComputeTriangleTangents @ 1434963b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TMeshTangents<float>::ComputeTriangleTangents
          (TMeshTangents<float> *this,
          TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_1,bool param_2)

{
  int iVar1;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *local_res10;
  undefined1 local_res18 [16];
  undefined1 auStackY_d8 [32];
  <lambda_1> local_98;
  TArrayView<std::nullptr_t,int> local_90;
  code *local_80;
  TMeshTangents<float> **local_78;
  TMeshTangents<float> *local_70;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> **local_68;
  _RTL_CRITICAL_SECTION *local_60;
  undefined1 *local_58;
  _RTL_CRITICAL_SECTION local_50;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  iVar1 = (this->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
          (this->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed;
  local_res10 = param_1;
  local_res18[0] = param_2;
  if ((this->Tangents).ArrayNum < iVar1) {
    TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->Tangents,iVar1,Default);
  }
  if ((this->Bitangents).ArrayNum < iVar1) {
    TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->Bitangents,iVar1,Default);
  }
  (this->AllDegenerateTris).ArrayNum = 0;
  if ((this->AllDegenerateTris).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->AllDegenerateTris).AllocatorInstance,0,
               &(this->AllDegenerateTris).ArrayMax);
  }
  InitializeCriticalSectionAndSpinCount(&local_50,4000);
  local_68 = &local_res10;
  local_60 = &local_50;
  local_90.DataPtr = (void **)0x0;
  local_58 = local_res18;
  local_90.ArrayNum = 0;
  local_80 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TMeshTangents<float>::ComputeTriangleTangents'::__l2::<lambda_1>,void,int>
             ::Call;
  local_78 = &local_70;
  local_70 = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar1,1,(TFunctionRef<void___cdecl(int)> *)&local_80,local_98,None,
             &local_90);
  DeleteCriticalSection(&local_50);
  return;
}

// ComputeTriangleTangents @ 143496500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TMeshTangents<double>::ComputeTriangleTangents
          (TMeshTangents<double> *this,
          TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_1,bool param_2)

{
  int iVar1;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *local_res10;
  undefined1 local_res18 [16];
  undefined1 auStackY_d8 [32];
  <lambda_1> local_98;
  TArrayView<std::nullptr_t,int> local_90;
  code *local_80;
  TMeshTangents<double> **local_78;
  TMeshTangents<double> *local_70;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> **local_68;
  _RTL_CRITICAL_SECTION *local_60;
  undefined1 *local_58;
  _RTL_CRITICAL_SECTION local_50;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  iVar1 = (this->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
          (this->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed;
  local_res10 = param_1;
  local_res18[0] = param_2;
  if ((this->Tangents).ArrayNum < iVar1) {
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->Tangents,iVar1,Default);
  }
  if ((this->Bitangents).ArrayNum < iVar1) {
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->Bitangents,iVar1,Default);
  }
  (this->AllDegenerateTris).ArrayNum = 0;
  if ((this->AllDegenerateTris).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->AllDegenerateTris).AllocatorInstance,0,
               &(this->AllDegenerateTris).ArrayMax);
  }
  InitializeCriticalSectionAndSpinCount(&local_50,4000);
  local_68 = &local_res10;
  local_60 = &local_50;
  local_90.DataPtr = (void **)0x0;
  local_58 = local_res18;
  local_90.ArrayNum = 0;
  local_80 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TMeshTangents<double>::ComputeTriangleTangents'::__l2::<lambda_1>,void,int>
             ::Call;
  local_78 = &local_70;
  local_70 = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar1,1,(TFunctionRef<void___cdecl(int)> *)&local_80,local_98,None,
             &local_90);
  DeleteCriticalSection(&local_50);
  return;
}

// CopyToOverlays @ 14349c650

bool __thiscall
UE::Geometry::TMeshTangents<float>::CopyToOverlays
          (TMeshTangents<float> *this,FDynamicMesh3 *param_1)

{
  short sVar1;
  FDynamicMeshAttributeSet *pFVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong local_res20;
  int local_b0 [4];
  undefined8 local_a0;
  undefined4 local_98;
  longlong local_90 [2];
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *local_80 [2];
  FDynamicMesh3 *local_70;
  longlong *local_68;
  code *local_60;
  FDynamicMesh3 **local_58;
  
  pFVar2 = (param_1->AttributeSet).Ptr;
  if ((pFVar2 == (FDynamicMeshAttributeSet *)0x0) ||
     (iVar10 = (**(code **)(pFVar2->_padding_ + 0xb8))(), iVar10 != 3)) {
    return false;
  }
  pFVar2 = (param_1->AttributeSet).Ptr;
  if ((pFVar2->NormalLayers).Array.ArrayNum < 2) {
    local_90[0] = 0;
  }
  else {
    local_90[0] = *(longlong *)((pFVar2->NormalLayers).Array.AllocatorInstance.Data + 8);
  }
  if ((pFVar2->NormalLayers).Array.ArrayNum < 3) {
    local_90[1] = 0;
  }
  else {
    local_90[1] = *(longlong *)((pFVar2->NormalLayers).Array.AllocatorInstance.Data + 0x10);
  }
  local_80[0] = &this->Tangents;
  lVar17 = 0;
  local_80[1] = &this->Bitangents;
  do {
    plVar3 = *(longlong **)((longlong)local_80 + lVar17);
    local_68 = plVar3;
    local_58 = &local_70;
    local_60 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::TMeshTangents<float>::CopyToOverlays'::__l7::<lambda_1>,bool,int,int,int>
               ::Call;
    local_70 = param_1;
    TDynamicMeshOverlay<float,3>::CreateFromPredicate
              (*(TDynamicMeshOverlay<float,3> **)((longlong)local_90 + lVar17),
               (TFunctionRef<bool___cdecl(int,int,int)> *)&local_60,0.0);
    uVar14 = 0;
    uVar15 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
    if ((uVar15 == 0) ||
       (pFVar4 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
       (ushort)(**(short **)pFVar4 - 1U) < 0xfffe)) {
LAB_14349c7d6:
      uVar13 = (uint)uVar14;
    }
    else {
      uVar14 = 1;
      uVar13 = 1;
      if (1 < (int)uVar15) {
        do {
          sVar1 = *(short *)(*(longlong *)(pFVar4 + (uVar14 >> 9) * 8) +
                            (ulonglong)((uint)uVar14 & 0x1ff) * 2);
          if ((sVar1 != 0) && (sVar1 != -1)) break;
          uVar13 = (uint)uVar14 + 1;
          uVar14 = (ulonglong)uVar13;
        } while ((int)uVar13 < (int)uVar15);
        goto LAB_14349c7d6;
      }
    }
joined_r0x00014349c7df:
    if (uVar13 != uVar15) {
      while( true ) {
        lVar5 = *(longlong *)((longlong)local_90 + lVar17);
        uVar13 = (int)uVar14 * 3;
        lVar6 = *(longlong *)(lVar5 + 0x78);
        local_res20 = 0;
        local_b0[0] = *(int *)(*(longlong *)(lVar6 + (ulonglong)(uVar13 >> 9) * 8) +
                              (ulonglong)(uVar13 & 0x1ff) * 4);
        local_b0[1] = *(undefined4 *)
                       (*(longlong *)(lVar6 + (ulonglong)(uVar13 + 1 >> 9) * 8) +
                       (ulonglong)(uVar13 + 1 & 0x1ff) * 4);
        lVar16 = (longlong)(int)uVar13 * 0xc;
        local_b0[2] = *(undefined4 *)
                       (*(longlong *)(lVar6 + (ulonglong)(uVar13 + 2 >> 9) * 8) +
                       (ulonglong)(uVar13 + 2 & 0x1ff) * 4);
        do {
          uVar11 = 0;
          if ((int)uVar13 < (int)plVar3[1]) {
            uVar11 = ~uVar13 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            uVar9 = (*pcVar7)();
            return (bool)uVar9;
          }
          local_a0 = *(undefined8 *)(*plVar3 + lVar16);
          local_98 = *(undefined4 *)(*plVar3 + 8 + lVar16);
          lVar16 = lVar16 + 0xc;
          uVar11 = local_b0[local_res20] * 3;
          *(int *)(*(longlong *)(*(longlong *)(lVar5 + 0x48) + (ulonglong)(uVar11 >> 9) * 8) +
                  (ulonglong)(uVar11 & 0x1ff) * 4) = (int)local_a0;
          *(int *)(*(longlong *)(*(longlong *)(lVar5 + 0x48) + (ulonglong)(uVar11 + 1 >> 9) * 8) +
                  (ulonglong)(uVar11 + 1 & 0x1ff) * 4) = (int)((ulonglong)local_a0 >> 0x20);
          *(undefined4 *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x48) + (ulonglong)(uVar11 + 2 >> 9) * 8) +
           (ulonglong)(uVar11 + 2 & 0x1ff) * 4) = local_98;
          local_res20 = local_res20 + 1;
          uVar13 = uVar13 + 1;
        } while (local_res20 < 3);
        uVar13 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar13;
        if ((int)uVar15 <= (int)uVar13) break;
        while( true ) {
          uVar12 = (ulonglong)((uint)uVar14 & 0x1ff);
          lVar5 = *(longlong *)
                   ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                   (uVar14 >> 9) * 8);
          if ((*(short *)(lVar5 + uVar12 * 2) != 0) && (*(short *)(lVar5 + uVar12 * 2) != -1))
          break;
          uVar13 = (uint)uVar14 + 1;
          uVar14 = (ulonglong)uVar13;
          if ((int)uVar15 <= (int)uVar13) goto joined_r0x00014349c7df;
        }
      }
      goto joined_r0x00014349c7df;
    }
    lVar17 = lVar17 + 8;
    if (0xf < lVar17) {
      return true;
    }
  } while( true );
}

// CopyToOverlays @ 14349ca40

bool __thiscall
UE::Geometry::TMeshTangents<double>::CopyToOverlays
          (TMeshTangents<double> *this,FDynamicMesh3 *param_1)

{
  double *pdVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  short sVar5;
  FDynamicMeshAttributeSet *pFVar6;
  longlong *plVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  longlong lVar10;
  code *pcVar11;
  bool bVar12;
  undefined1 uVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong local_res20;
  int local_a0 [4];
  longlong local_90 [2];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_80 [2];
  FDynamicMesh3 *local_70;
  longlong *local_68;
  code *local_60;
  FDynamicMesh3 **local_58;
  
  pFVar6 = (param_1->AttributeSet).Ptr;
  if ((pFVar6 == (FDynamicMeshAttributeSet *)0x0) ||
     (iVar14 = (**(code **)(pFVar6->_padding_ + 0xb8))(), iVar14 != 3)) {
    return false;
  }
  pFVar6 = (param_1->AttributeSet).Ptr;
  if ((pFVar6->NormalLayers).Array.ArrayNum < 2) {
    local_90[0] = 0;
  }
  else {
    local_90[0] = *(longlong *)((pFVar6->NormalLayers).Array.AllocatorInstance.Data + 8);
  }
  if ((pFVar6->NormalLayers).Array.ArrayNum < 3) {
    local_90[1] = 0;
  }
  else {
    local_90[1] = *(longlong *)((pFVar6->NormalLayers).Array.AllocatorInstance.Data + 0x10);
  }
  local_80[0] = &this->Tangents;
  lVar20 = 0;
  local_80[1] = &this->Bitangents;
  do {
    plVar7 = *(longlong **)((longlong)local_80 + lVar20);
    local_68 = plVar7;
    local_58 = &local_70;
    local_60 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::TMeshTangents<double>::CopyToOverlays'::__l7::<lambda_1>,bool,int,int,int>
               ::Call;
    local_70 = param_1;
    TDynamicMeshOverlay<float,3>::CreateFromPredicate
              (*(TDynamicMeshOverlay<float,3> **)((longlong)local_90 + lVar20),
               (TFunctionRef<bool___cdecl(int,int,int)> *)&local_60,0.0);
    uVar18 = 0;
    uVar19 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
    if ((uVar19 == 0) ||
       (pFVar8 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
       (ushort)(**(short **)pFVar8 - 1U) < 0xfffe)) {
LAB_14349cbb6:
      uVar17 = (uint)uVar18;
    }
    else {
      uVar18 = 1;
      uVar17 = 1;
      if (1 < (int)uVar19) {
        do {
          sVar5 = *(short *)(*(longlong *)(pFVar8 + (uVar18 >> 9) * 8) +
                            (ulonglong)((uint)uVar18 & 0x1ff) * 2);
          if ((sVar5 != 0) && (sVar5 != -1)) break;
          uVar17 = (uint)uVar18 + 1;
          uVar18 = (ulonglong)uVar17;
        } while ((int)uVar17 < (int)uVar19);
        goto LAB_14349cbb6;
      }
    }
joined_r0x00014349cbbf:
    if (uVar17 != uVar19) {
      while( true ) {
        lVar9 = *(longlong *)((longlong)local_90 + lVar20);
        uVar17 = (int)uVar18 * 3;
        lVar10 = *(longlong *)(lVar9 + 0x78);
        local_res20 = 0;
        local_a0[0] = *(int *)(*(longlong *)(lVar10 + (ulonglong)(uVar17 >> 9) * 8) +
                              (ulonglong)(uVar17 & 0x1ff) * 4);
        local_a0[1] = *(undefined4 *)
                       (*(longlong *)(lVar10 + (ulonglong)(uVar17 + 1 >> 9) * 8) +
                       (ulonglong)(uVar17 + 1 & 0x1ff) * 4);
        lVar21 = (longlong)(int)uVar17 * 0x18;
        local_a0[2] = *(undefined4 *)
                       (*(longlong *)(lVar10 + (ulonglong)(uVar17 + 2 >> 9) * 8) +
                       (ulonglong)(uVar17 + 2 & 0x1ff) * 4);
        do {
          uVar15 = 0;
          if ((int)uVar17 < (int)plVar7[1]) {
            uVar15 = ~uVar17 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar11 = (code *)swi(3);
            uVar13 = (*pcVar11)();
            return (bool)uVar13;
          }
          lVar10 = *plVar7;
          piVar2 = local_a0 + local_res20;
          local_res20 = local_res20 + 1;
          pdVar1 = (double *)(lVar10 + lVar21);
          dVar3 = *(double *)(lVar10 + 8 + lVar21);
          uVar15 = *piVar2 * 3;
          dVar4 = *(double *)(lVar10 + 0x10 + lVar21);
          lVar21 = lVar21 + 0x18;
          *(float *)(*(longlong *)(*(longlong *)(lVar9 + 0x48) + (ulonglong)(uVar15 >> 9) * 8) +
                    (ulonglong)(uVar15 & 0x1ff) * 4) = (float)*pdVar1;
          *(float *)(*(longlong *)(*(longlong *)(lVar9 + 0x48) + (ulonglong)(uVar15 + 1 >> 9) * 8) +
                    (ulonglong)(uVar15 + 1 & 0x1ff) * 4) = (float)dVar3;
          uVar17 = uVar17 + 1;
          *(float *)(*(longlong *)(*(longlong *)(lVar9 + 0x48) + (ulonglong)(uVar15 + 2 >> 9) * 8) +
                    (ulonglong)(uVar15 + 2 & 0x1ff) * 4) = (float)dVar4;
        } while (local_res20 < 3);
        uVar17 = (int)uVar18 + 1;
        uVar18 = (ulonglong)uVar17;
        if ((int)uVar19 <= (int)uVar17) break;
        while( true ) {
          uVar16 = (ulonglong)((uint)uVar18 & 0x1ff);
          lVar9 = *(longlong *)
                   ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                   (uVar18 >> 9) * 8);
          if ((*(short *)(lVar9 + uVar16 * 2) != 0) && (*(short *)(lVar9 + uVar16 * 2) != -1))
          break;
          uVar17 = (uint)uVar18 + 1;
          uVar18 = (ulonglong)uVar17;
          if ((int)uVar19 <= (int)uVar17) goto joined_r0x00014349cbbf;
        }
      }
      goto joined_r0x00014349cbbf;
    }
    lVar20 = lVar20 + 8;
    if (0xf < lVar20) {
      return true;
    }
  } while( true );
}

// CopyTriVertexTangents @ 14349d020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::TMeshTangents<float>::CopyTriVertexTangents
          (TMeshTangents<float> *this,FDynamicMesh3 *param_1)

{
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *this_00;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *this_01;
  longlong lVar1;
  longlong lVar2;
  short sVar3;
  int iVar4;
  FDynamicMeshAttributeSet *pFVar5;
  FScriptContainerElement *pFVar6;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *this_02;
  code *pcVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  bool bVar12;
  undefined1 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *this_03;
  undefined1 auStackY_e8 [32];
  TVector<float>_u_0 local_90;
  TVector<float>_u_0 local_84;
  TVector<float>_u_0 local_78;
  TVector<float>_u_0 local_68;
  TVector<float>_u_0 local_5c;
  TVector<float>_u_0 local_50;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  pFVar5 = (param_1->AttributeSet).Ptr;
  if (((((pFVar5 == (FDynamicMeshAttributeSet *)0x0) ||
        (iVar4 = (pFVar5->NormalLayers).Array.ArrayNum, iVar4 < 1)) ||
       (pFVar6 = (pFVar5->NormalLayers).Array.AllocatorInstance.Data, *(longlong *)pFVar6 == 0)) ||
      ((iVar4 < 2 || (*(longlong *)(pFVar6 + 8) == 0)))) ||
     ((iVar4 < 3 || (*(longlong *)(pFVar6 + 0x10) == 0)))) {
    bVar12 = false;
  }
  else {
    this_02 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)(pFVar6 + 8);
    if (iVar4 < 3) {
      this_03 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
    }
    else {
      this_03 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)(pFVar6 + 0x10);
    }
    this_00 = &this->Tangents;
    iVar4 = ((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
            (param_1->TriangleRefCounts).RefCounts.CurBlockUsed) * 3;
    if ((this->Tangents).ArrayNum < iVar4) {
      TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum(this_00,iVar4,Default);
    }
    this_01 = &this->Bitangents;
    if ((this->Bitangents).ArrayNum < iVar4) {
      TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum(this_01,iVar4,Default);
    }
    uVar18 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
    uVar16 = 0;
    if ((uVar18 != 0) &&
       (pFVar6 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar16 = 0,
       0xfffd < (ushort)(**(short **)pFVar6 - 1U))) {
      uVar15 = 1;
      uVar16 = 1;
      if (1 < (int)uVar18) {
        do {
          sVar3 = *(short *)(*(longlong *)(pFVar6 + (ulonglong)(uVar15 >> 9) * 8) +
                            (ulonglong)(uVar15 & 0x1ff) * 2);
          if ((sVar3 != 0) && (uVar16 = uVar15, sVar3 != -1)) break;
          uVar15 = uVar15 + 1;
          uVar16 = uVar15;
        } while ((int)uVar15 < (int)uVar18);
      }
    }
joined_r0x00014349d189:
    if (uVar16 != uVar18) {
      while( true ) {
        uVar15 = uVar16 * 3;
        lVar1 = (ulonglong)(uVar15 >> 9) * 8;
        lVar2 = (ulonglong)(uVar15 & 0x1ff) * 4;
        if ((-1 < *(int *)(lVar2 + *(longlong *)(*(longlong *)&this_02->field_0x78 + lVar1))) &&
           (-1 < *(int *)(lVar2 + *(longlong *)(*(longlong *)&this_03->field_0x78 + lVar1)))) {
          TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>::GetTriElements
                    (this_02,uVar16,(TVector<float> *)&local_90._s_0,
                     (TVector<float> *)&local_84._s_0,(TVector<float> *)&local_78._s_0);
          TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>::GetTriElements
                    (this_03,uVar16,(TVector<float> *)&local_68._s_0,
                     (TVector<float> *)&local_5c._s_0,(TVector<float> *)&local_50._s_0);
          uVar9 = local_90._s_0.Z;
          uVar8 = local_90._0_8_;
          uVar14 = 0;
          if ((int)uVar15 < (this->Tangents).ArrayNum) {
            uVar14 = ~uVar15 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar7 = (code *)swi(3);
            uVar13 = (*pcVar7)();
            return (bool)uVar13;
          }
          uVar11 = local_68._s_0.Z;
          uVar10 = local_68._0_8_;
          lVar1 = (longlong)(int)uVar15 * 0xc;
          pFVar6 = (this_00->AllocatorInstance).Data;
          *(undefined8 *)(pFVar6 + lVar1) = uVar8;
          *(undefined4 *)(pFVar6 + lVar1 + 8) = uVar9;
          uVar14 = 0;
          if ((int)uVar15 < (this->Bitangents).ArrayNum) {
            uVar14 = ~uVar15 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar7 = (code *)swi(3);
            uVar13 = (*pcVar7)();
            return (bool)uVar13;
          }
          uVar9 = local_84._s_0.Z;
          uVar8 = local_84._0_8_;
          uVar17 = uVar15 + 1;
          pFVar6 = (this_01->AllocatorInstance).Data;
          *(undefined8 *)(pFVar6 + lVar1) = uVar10;
          *(undefined4 *)(pFVar6 + lVar1 + 8) = uVar11;
          uVar14 = 0;
          if ((int)uVar17 < (this->Tangents).ArrayNum) {
            uVar14 = ~uVar17 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar7 = (code *)swi(3);
            uVar13 = (*pcVar7)();
            return (bool)uVar13;
          }
          uVar11 = local_5c._s_0.Z;
          uVar10 = local_5c._0_8_;
          lVar1 = (longlong)(int)uVar17 * 0xc;
          pFVar6 = (this_00->AllocatorInstance).Data;
          *(undefined8 *)(pFVar6 + lVar1) = uVar8;
          *(undefined4 *)(pFVar6 + lVar1 + 8) = uVar9;
          uVar14 = 0;
          if ((int)uVar17 < (this->Bitangents).ArrayNum) {
            uVar14 = ~uVar17 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar7 = (code *)swi(3);
            uVar13 = (*pcVar7)();
            return (bool)uVar13;
          }
          uVar9 = local_78._s_0.Z;
          uVar8 = local_78._0_8_;
          uVar15 = uVar15 + 2;
          pFVar6 = (this_01->AllocatorInstance).Data;
          *(undefined8 *)(pFVar6 + lVar1) = uVar10;
          *(undefined4 *)(pFVar6 + lVar1 + 8) = uVar11;
          uVar14 = 0;
          if ((int)uVar15 < (this->Tangents).ArrayNum) {
            uVar14 = ~uVar15 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar7 = (code *)swi(3);
            uVar13 = (*pcVar7)();
            return (bool)uVar13;
          }
          uVar11 = local_50._s_0.Z;
          uVar10 = local_50._0_8_;
          lVar1 = (longlong)(int)uVar15 * 0xc;
          pFVar6 = (this_00->AllocatorInstance).Data;
          *(undefined8 *)(pFVar6 + lVar1) = uVar8;
          *(undefined4 *)(pFVar6 + lVar1 + 8) = uVar9;
          uVar14 = 0;
          if ((int)uVar15 < (this->Bitangents).ArrayNum) {
            uVar14 = ~uVar15 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar7 = (code *)swi(3);
            uVar13 = (*pcVar7)();
            return (bool)uVar13;
          }
          pFVar6 = (this_01->AllocatorInstance).Data;
          *(undefined8 *)(pFVar6 + lVar1) = uVar10;
          *(undefined4 *)(pFVar6 + lVar1 + 8) = uVar11;
        }
        uVar16 = uVar16 + 1;
        if ((int)uVar18 <= (int)uVar16) break;
        while( true ) {
          lVar2 = (ulonglong)(uVar16 & 0x1ff) * 2;
          lVar1 = *(longlong *)
                   ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                   (ulonglong)(uVar16 >> 9) * 8);
          if ((*(short *)(lVar2 + lVar1) != 0) && (*(short *)(lVar2 + lVar1) != -1)) break;
          uVar16 = uVar16 + 1;
          if ((int)uVar18 <= (int)uVar16) goto joined_r0x00014349d189;
        }
      }
      goto joined_r0x00014349d189;
    }
    bVar12 = true;
  }
  return bVar12;
}

// CopyTriVertexTangents @ 14349d600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::TMeshTangents<double>::CopyTriVertexTangents
          (TMeshTangents<double> *this,FDynamicMesh3 *param_1)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *this_00;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *this_01;
  short sVar1;
  int iVar2;
  FDynamicMeshAttributeSet *pFVar3;
  FScriptContainerElement *pFVar4;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *this_02;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *this_03;
  undefined1 auStackY_118 [32];
  TVector<float>_u_0 local_c8;
  TVector<float>_u_0 local_bc;
  TVector<float>_u_0 local_b0;
  TVector<float>_u_0 local_a0;
  TVector<float>_u_0 local_94;
  TVector<float>_u_0 local_88;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_118;
  pFVar3 = (param_1->AttributeSet).Ptr;
  if (((((pFVar3 == (FDynamicMeshAttributeSet *)0x0) ||
        (iVar2 = (pFVar3->NormalLayers).Array.ArrayNum, iVar2 < 1)) ||
       (pFVar4 = (pFVar3->NormalLayers).Array.AllocatorInstance.Data, *(longlong *)pFVar4 == 0)) ||
      ((iVar2 < 2 || (*(longlong *)(pFVar4 + 8) == 0)))) ||
     ((iVar2 < 3 || (*(longlong *)(pFVar4 + 0x10) == 0)))) {
    bVar9 = false;
  }
  else {
    this_02 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)(pFVar4 + 8);
    if (iVar2 < 3) {
      this_03 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
    }
    else {
      this_03 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)(pFVar4 + 0x10);
    }
    this_00 = &this->Tangents;
    iVar2 = ((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
            (param_1->TriangleRefCounts).RefCounts.CurBlockUsed) * 3;
    if ((this->Tangents).ArrayNum < iVar2) {
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum(this_00,iVar2,Default);
    }
    this_01 = &this->Bitangents;
    if ((this->Bitangents).ArrayNum < iVar2) {
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum(this_01,iVar2,Default);
    }
    uVar15 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
    uVar13 = 0;
    if ((uVar15 != 0) &&
       (pFVar4 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar13 = 0,
       0xfffd < (ushort)(**(short **)pFVar4 - 1U))) {
      uVar12 = 1;
      uVar13 = 1;
      if (1 < (int)uVar15) {
        do {
          sVar1 = *(short *)(*(longlong *)(pFVar4 + (ulonglong)(uVar12 >> 9) * 8) +
                            (ulonglong)(uVar12 & 0x1ff) * 2);
          if ((sVar1 != 0) && (uVar13 = uVar12, sVar1 != -1)) break;
          uVar12 = uVar12 + 1;
          uVar13 = uVar12;
        } while ((int)uVar12 < (int)uVar15);
      }
    }
joined_r0x00014349d769:
    if (uVar13 != uVar15) {
      while( true ) {
        uVar12 = uVar13 * 3;
        lVar14 = (longlong)(int)uVar12;
        if ((-1 < *(int *)(*(longlong *)
                            (*(longlong *)&this_02->field_0x78 + (ulonglong)(uVar12 >> 9) * 8) +
                          (ulonglong)(uVar12 & 0x1ff) * 4)) &&
           (-1 < *(int *)(*(longlong *)
                           (*(longlong *)&this_03->field_0x78 + (ulonglong)(uVar12 >> 9) * 8) +
                         (ulonglong)(uVar12 & 0x1ff) * 4))) {
          TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>::GetTriElements
                    (this_02,uVar13,(TVector<float> *)&local_c8._s_0,
                     (TVector<float> *)&local_bc._s_0,(TVector<float> *)&local_b0._s_0);
          TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>::GetTriElements
                    (this_03,uVar13,(TVector<float> *)&local_a0._s_0,
                     (TVector<float> *)&local_94._s_0,(TVector<float> *)&local_88._s_0);
          dVar6 = (double)local_c8._s_0.X;
          uVar11 = 0;
          if ((int)uVar12 < (this->Tangents).ArrayNum) {
            uVar11 = ~uVar12 >> 0x1f;
          }
          dVar7 = (double)local_c8._s_0.Y;
          dVar8 = (double)local_c8._s_0.Z;
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            uVar10 = (*pcVar5)();
            return (bool)uVar10;
          }
          pFVar4 = (this_00->AllocatorInstance).Data;
          *(double *)(pFVar4 + lVar14 * 0x18) = dVar6;
          *(double *)(pFVar4 + lVar14 * 0x18 + 8) = dVar7;
          *(double *)(pFVar4 + lVar14 * 0x18 + 0x10) = dVar8;
          uVar11 = 0;
          if ((int)uVar12 < (this->Bitangents).ArrayNum) {
            uVar11 = ~uVar12 >> 0x1f;
          }
          dVar6 = (double)local_a0._s_0.X;
          dVar7 = (double)local_a0._s_0.Y;
          dVar8 = (double)local_a0._s_0.Z;
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            uVar10 = (*pcVar5)();
            return (bool)uVar10;
          }
          pFVar4 = (this_01->AllocatorInstance).Data;
          *(double *)(pFVar4 + lVar14 * 0x18) = dVar6;
          *(double *)(pFVar4 + lVar14 * 0x18 + 8) = dVar7;
          *(double *)(pFVar4 + lVar14 * 0x18 + 0x10) = dVar8;
          uVar16 = uVar12 + 1;
          dVar6 = (double)local_bc._s_0.X;
          uVar11 = 0;
          if ((int)uVar16 < (this->Tangents).ArrayNum) {
            uVar11 = ~uVar16 >> 0x1f;
          }
          dVar7 = (double)local_bc._s_0.Y;
          dVar8 = (double)local_bc._s_0.Z;
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            uVar10 = (*pcVar5)();
            return (bool)uVar10;
          }
          lVar14 = (longlong)(int)uVar16;
          pFVar4 = (this_00->AllocatorInstance).Data;
          *(double *)(pFVar4 + lVar14 * 0x18) = dVar6;
          *(double *)(pFVar4 + lVar14 * 0x18 + 8) = dVar7;
          *(double *)(pFVar4 + lVar14 * 0x18 + 0x10) = dVar8;
          dVar6 = (double)local_94._s_0.X;
          uVar11 = 0;
          if ((int)uVar16 < (this->Bitangents).ArrayNum) {
            uVar11 = ~uVar16 >> 0x1f;
          }
          dVar7 = (double)local_94._s_0.Y;
          dVar8 = (double)local_94._s_0.Z;
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            uVar10 = (*pcVar5)();
            return (bool)uVar10;
          }
          uVar12 = uVar12 + 2;
          pFVar4 = (this_01->AllocatorInstance).Data;
          *(double *)(pFVar4 + lVar14 * 0x18) = dVar6;
          *(double *)(pFVar4 + lVar14 * 0x18 + 8) = dVar7;
          *(double *)(pFVar4 + lVar14 * 0x18 + 0x10) = dVar8;
          uVar11 = 0;
          if ((int)uVar12 < (this->Tangents).ArrayNum) {
            uVar11 = ~uVar12 >> 0x1f;
          }
          dVar6 = (double)local_b0._s_0.X;
          dVar7 = (double)local_b0._s_0.Y;
          dVar8 = (double)local_b0._s_0.Z;
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            uVar10 = (*pcVar5)();
            return (bool)uVar10;
          }
          pFVar4 = (this_00->AllocatorInstance).Data;
          lVar14 = (longlong)(int)uVar12;
          *(double *)(pFVar4 + lVar14 * 0x18) = dVar6;
          *(double *)(pFVar4 + lVar14 * 0x18 + 8) = dVar7;
          *(double *)(pFVar4 + lVar14 * 0x18 + 0x10) = dVar8;
          uVar11 = 0;
          if ((int)uVar12 < (this->Bitangents).ArrayNum) {
            uVar11 = ~uVar12 >> 0x1f;
          }
          dVar6 = (double)local_88._s_0.X;
          dVar7 = (double)local_88._s_0.Y;
          dVar8 = (double)local_88._s_0.Z;
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            uVar10 = (*pcVar5)();
            return (bool)uVar10;
          }
          pFVar4 = (this_01->AllocatorInstance).Data;
          *(double *)(pFVar4 + lVar14 * 0x18) = dVar6;
          *(double *)(pFVar4 + lVar14 * 0x18 + 8) = dVar7;
          *(double *)(pFVar4 + lVar14 * 0x18 + 0x10) = dVar8;
        }
        uVar13 = uVar13 + 1;
        if ((int)uVar15 <= (int)uVar13) break;
        while( true ) {
          lVar14 = *(longlong *)
                    ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar13 >> 9) * 8);
          if ((*(short *)(lVar14 + (ulonglong)(uVar13 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar14 + (ulonglong)(uVar13 & 0x1ff) * 2) != -1)) break;
          uVar13 = uVar13 + 1;
          if ((int)uVar15 <= (int)uVar13) goto joined_r0x00014349d769;
        }
      }
      goto joined_r0x00014349d769;
    }
    bVar9 = true;
  }
  return bVar9;
}

// GetBitangents @ 1434bd440

TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::TMeshTangents<float>::GetBitangents(TMeshTangents<float> *this)

{
  return &this->Bitangents;
}

// GetBitangents @ 1434bd450

TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::TMeshTangents<double>::GetBitangents(TMeshTangents<double> *this)

{
  return &this->Bitangents;
}

// GetDegenerateTris @ 1434bff90

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::TMeshTangents<float>::GetDegenerateTris(TMeshTangents<float> *this)

{
  return &this->AllDegenerateTris;
}

// GetDegenerateTris @ 1434bffa0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::TMeshTangents<double>::GetDegenerateTris(TMeshTangents<double> *this)

{
  return &this->AllDegenerateTris;
}

// GetInterpolatedTriangleTangent @ 1434c3590

void __thiscall
UE::Geometry::TMeshTangents<float>::GetInterpolatedTriangleTangent
          (TMeshTangents<float> *this,int param_1,TVector<float> *param_2,TVector<float> *param_3,
          TVector<float> *param_4)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  code *pcVar14;
  uint uVar15;
  bool bVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  
  uVar15 = param_1 * 3;
  if (((int)uVar15 < 0) || (uVar18 = uVar15 + 2, (this->Tangents).ArrayNum <= (int)uVar18)) {
    *(undefined8 *)&param_3->field0_0x0 = UE::Math::TVector<float>::XAxisVector.field0_0x0._0_8_;
    (param_3->field0_0x0)._s_0.Z = UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Z;
    *(undefined8 *)&param_4->field0_0x0 = UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
    (param_4->field0_0x0)._s_0.Z = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
    return;
  }
  if (((int)uVar18 < 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  lVar19 = (longlong)(int)uVar18;
  uVar1 = uVar15 + 1;
  pFVar11 = (this->Tangents).AllocatorInstance.Data;
  uVar17 = 0;
  if ((int)uVar1 < (this->Tangents).ArrayNum) {
    uVar17 = ~uVar1 >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pFVar12 = (this->Tangents).AllocatorInstance.Data;
  uVar17 = 0;
  if ((int)uVar15 < (this->Tangents).ArrayNum) {
    uVar17 = ~uVar15 >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  lVar20 = (longlong)(int)uVar15;
  fVar2 = (param_2->field0_0x0)._s_0.X;
  fVar3 = (param_2->field0_0x0)._s_0.Y;
  fVar4 = (param_2->field0_0x0)._s_0.Z;
  pFVar13 = (this->Tangents).AllocatorInstance.Data;
  lVar21 = (longlong)(int)uVar1;
  fVar5 = *(float *)(pFVar13 + lVar20 * 0xc + 4);
  fVar6 = *(float *)(pFVar12 + lVar21 * 0xc + 4);
  fVar7 = *(float *)(pFVar11 + lVar19 * 0xc + 4);
  fVar8 = *(float *)(pFVar12 + lVar21 * 0xc + 8);
  fVar9 = *(float *)(pFVar13 + lVar20 * 0xc + 8);
  fVar10 = *(float *)(pFVar11 + lVar19 * 0xc + 8);
  (param_3->field0_0x0)._s_0.X =
       fVar3 * *(float *)(pFVar12 + lVar21 * 0xc) + fVar2 * *(float *)(pFVar13 + lVar20 * 0xc) +
       fVar4 * *(float *)(pFVar11 + lVar19 * 0xc);
  (param_3->field0_0x0)._s_0.Y = fVar3 * fVar6 + fVar2 * fVar5 + fVar4 * fVar7;
  (param_3->field0_0x0)._s_0.Z = fVar3 * fVar8 + fVar2 * fVar9 + fVar4 * fVar10;
  Normalize<float>(param_3,0.0);
  uVar17 = 0;
  if ((int)uVar18 < (this->Bitangents).ArrayNum) {
    uVar17 = ~uVar18 >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pFVar11 = (this->Bitangents).AllocatorInstance.Data;
  uVar18 = 0;
  if ((int)uVar1 < (this->Bitangents).ArrayNum) {
    uVar18 = ~uVar1 >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  lVar21 = (longlong)(int)uVar1;
  pFVar12 = (this->Bitangents).AllocatorInstance.Data;
  uVar18 = 0;
  if ((int)uVar15 < (this->Bitangents).ArrayNum) {
    uVar18 = ~uVar15 >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pFVar13 = (this->Bitangents).AllocatorInstance.Data;
  fVar2 = (param_2->field0_0x0)._s_0.X;
  fVar3 = (param_2->field0_0x0)._s_0.Y;
  fVar4 = (param_2->field0_0x0)._s_0.Z;
  fVar5 = *(float *)(pFVar13 + lVar20 * 0xc + 4);
  fVar6 = *(float *)(pFVar12 + lVar21 * 0xc + 4);
  fVar7 = *(float *)(pFVar11 + lVar19 * 0xc + 4);
  fVar8 = *(float *)(pFVar12 + lVar21 * 0xc + 8);
  fVar9 = *(float *)(pFVar13 + lVar20 * 0xc + 8);
  fVar10 = *(float *)(pFVar11 + lVar19 * 0xc + 8);
  (param_4->field0_0x0)._s_0.X =
       fVar3 * *(float *)(pFVar12 + lVar21 * 0xc) + fVar2 * *(float *)(pFVar13 + lVar20 * 0xc) +
       fVar4 * *(float *)(pFVar11 + lVar19 * 0xc);
  (param_4->field0_0x0)._s_0.Y = fVar3 * fVar6 + fVar2 * fVar5 + fVar4 * fVar7;
  (param_4->field0_0x0)._s_0.Z = fVar3 * fVar8 + fVar2 * fVar9 + fVar4 * fVar10;
  Normalize<float>(param_4,0.0);
  return;
}

// GetInterpolatedTriangleTangent @ 1434c39b0

void __thiscall
UE::Geometry::TMeshTangents<double>::GetInterpolatedTriangleTangent
          (TMeshTangents<double> *this,int param_1,TVector<double> *param_2,TVector<double> *param_3
          ,TVector<double> *param_4)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  code *pcVar14;
  uint uVar15;
  undefined8 uVar16;
  bool bVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  
  uVar16 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
  uVar15 = param_1 * 3;
  if (((int)uVar15 < 0) || (uVar19 = uVar15 + 2, (this->Tangents).ArrayNum <= (int)uVar19)) {
    (param_3->field0_0x0)._s_0.X = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
    (param_3->field0_0x0)._s_0.Y = (double)uVar16;
    (param_3->field0_0x0)._s_0.Z = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
    uVar16 = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Y;
    (param_4->field0_0x0)._s_0.X = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.X;
    (param_4->field0_0x0)._s_0.Y = (double)uVar16;
    (param_4->field0_0x0)._s_0.Z = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z;
    return;
  }
  if (((int)uVar19 < 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  lVar20 = (longlong)(int)uVar19;
  uVar1 = uVar15 + 1;
  pFVar11 = (this->Tangents).AllocatorInstance.Data;
  uVar18 = 0;
  if ((int)uVar1 < (this->Tangents).ArrayNum) {
    uVar18 = ~uVar1 >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pFVar12 = (this->Tangents).AllocatorInstance.Data;
  uVar18 = 0;
  if ((int)uVar15 < (this->Tangents).ArrayNum) {
    uVar18 = ~uVar15 >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  lVar21 = (longlong)(int)uVar15;
  dVar2 = (param_2->field0_0x0)._s_0.X;
  dVar3 = (param_2->field0_0x0)._s_0.Y;
  dVar4 = (param_2->field0_0x0)._s_0.Z;
  pFVar13 = (this->Tangents).AllocatorInstance.Data;
  lVar22 = (longlong)(int)uVar1;
  dVar5 = *(double *)(pFVar13 + lVar21 * 0x18 + 8);
  dVar6 = *(double *)(pFVar12 + lVar22 * 0x18 + 8);
  dVar7 = *(double *)(pFVar11 + lVar20 * 0x18 + 8);
  dVar8 = *(double *)(pFVar12 + lVar22 * 0x18 + 0x10);
  dVar9 = *(double *)(pFVar13 + lVar21 * 0x18 + 0x10);
  dVar10 = *(double *)(pFVar11 + lVar20 * 0x18 + 0x10);
  (param_3->field0_0x0)._s_0.X =
       dVar3 * *(double *)(pFVar12 + lVar22 * 0x18) + dVar2 * *(double *)(pFVar13 + lVar21 * 0x18) +
       dVar4 * *(double *)(pFVar11 + lVar20 * 0x18);
  (param_3->field0_0x0)._s_0.Y = dVar3 * dVar6 + dVar2 * dVar5 + dVar4 * dVar7;
  (param_3->field0_0x0)._s_0.Z = dVar3 * dVar8 + dVar2 * dVar9 + dVar4 * dVar10;
  Normalize<double>(param_3,0.0);
  uVar18 = 0;
  if ((int)uVar19 < (this->Bitangents).ArrayNum) {
    uVar18 = ~uVar19 >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pFVar11 = (this->Bitangents).AllocatorInstance.Data;
  uVar19 = 0;
  if ((int)uVar1 < (this->Bitangents).ArrayNum) {
    uVar19 = ~uVar1 >> 0x1f;
  }
  if ((uVar19 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  lVar22 = (longlong)(int)uVar1;
  pFVar12 = (this->Bitangents).AllocatorInstance.Data;
  uVar19 = 0;
  if ((int)uVar15 < (this->Bitangents).ArrayNum) {
    uVar19 = ~uVar15 >> 0x1f;
  }
  if ((uVar19 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pFVar13 = (this->Bitangents).AllocatorInstance.Data;
  dVar2 = (param_2->field0_0x0)._s_0.X;
  dVar3 = (param_2->field0_0x0)._s_0.Y;
  dVar4 = (param_2->field0_0x0)._s_0.Z;
  dVar5 = *(double *)(pFVar13 + lVar21 * 0x18 + 8);
  dVar6 = *(double *)(pFVar12 + lVar22 * 0x18 + 8);
  dVar7 = *(double *)(pFVar11 + lVar20 * 0x18 + 8);
  dVar8 = *(double *)(pFVar12 + lVar22 * 0x18 + 0x10);
  dVar9 = *(double *)(pFVar13 + lVar21 * 0x18 + 0x10);
  dVar10 = *(double *)(pFVar11 + lVar20 * 0x18 + 0x10);
  (param_4->field0_0x0)._s_0.X =
       dVar3 * *(double *)(pFVar12 + lVar22 * 0x18) + dVar2 * *(double *)(pFVar13 + lVar21 * 0x18) +
       dVar4 * *(double *)(pFVar11 + lVar20 * 0x18);
  (param_4->field0_0x0)._s_0.Y = dVar3 * dVar6 + dVar2 * dVar5 + dVar4 * dVar7;
  (param_4->field0_0x0)._s_0.Z = dVar3 * dVar8 + dVar2 * dVar9 + dVar4 * dVar10;
  Normalize<double>(param_4,0.0);
  return;
}

// GetMesh @ 1434c3f30

FDynamicMesh3 * __thiscall UE::Geometry::TMeshTangents<float>::GetMesh(TMeshTangents<float> *this)

{
  return this->Mesh;
}

// GetMesh @ 1434c3f40

FDynamicMesh3 * __thiscall UE::Geometry::TMeshTangents<double>::GetMesh(TMeshTangents<double> *this)

{
  return this->Mesh;
}

// GetPerTriangleTangent @ 1434c43f0

void __thiscall
UE::Geometry::TMeshTangents<float>::GetPerTriangleTangent
          (TMeshTangents<float> *this,int param_1,int param_2,TVector<float> *param_3,
          TVector<float> *param_4)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = param_2 + param_1 * 3;
  uVar5 = 0;
  if ((int)uVar6 < (this->Tangents).ArrayNum) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar1 = (longlong)(int)uVar6 * 0xc;
  pFVar2 = (this->Tangents).AllocatorInstance.Data;
  *(undefined8 *)&param_3->field0_0x0 = *(undefined8 *)(pFVar2 + lVar1);
  (param_3->field0_0x0)._s_0.Z = *(float *)(pFVar2 + lVar1 + 8);
  uVar5 = 0;
  if ((int)uVar6 < (this->Bitangents).ArrayNum) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->Bitangents).AllocatorInstance.Data;
  *(undefined8 *)&param_4->field0_0x0 = *(undefined8 *)(pFVar2 + lVar1);
  (param_4->field0_0x0)._s_0.Z = *(float *)(pFVar2 + lVar1 + 8);
  return;
}

// GetPerTriangleTangent @ 1434c4500

void __thiscall
UE::Geometry::TMeshTangents<double>::GetPerTriangleTangent
          (TMeshTangents<double> *this,int param_1,int param_2,TVector<double> *param_3,
          TVector<double> *param_4)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = param_2 + param_1 * 3;
  uVar7 = 0;
  if ((int)uVar8 < (this->Tangents).ArrayNum) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar2 = (longlong)(int)uVar8 * 0x18;
  pFVar3 = (this->Tangents).AllocatorInstance.Data;
  pFVar1 = pFVar3 + lVar2;
  dVar5 = *(double *)(pFVar1 + 8);
  (param_3->field0_0x0)._s_0.X = *(double *)pFVar1;
  (param_3->field0_0x0)._s_0.Y = dVar5;
  (param_3->field0_0x0)._s_0.Z = *(double *)(pFVar3 + lVar2 + 0x10);
  uVar7 = 0;
  if ((int)uVar8 < (this->Bitangents).ArrayNum) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = (this->Bitangents).AllocatorInstance.Data;
  pFVar1 = pFVar3 + lVar2;
  dVar5 = *(double *)(pFVar1 + 8);
  (param_4->field0_0x0)._s_0.X = *(double *)pFVar1;
  (param_4->field0_0x0)._s_0.Y = dVar5;
  (param_4->field0_0x0)._s_0.Z = *(double *)(pFVar3 + lVar2 + 0x10);
  return;
}

// GetTangents @ 1434c4f70

TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::TMeshTangents<float>::GetTangents(TMeshTangents<float> *this)

{
  return &this->Tangents;
}

// GetTangents @ 1434c4f80

TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::TMeshTangents<double>::GetTangents(TMeshTangents<double> *this)

{
  return &this->Tangents;
}

// InitializeTriVertexTangents @ 1434d2340

void __thiscall
UE::Geometry::TMeshTangents<float>::InitializeTriVertexTangents
          (TMeshTangents<float> *this,bool param_1)

{
  SetTangentCount(this,((this->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                       (this->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed) * 3,param_1);
  return;
}

// InitializeTriVertexTangents @ 1434d2370

void __thiscall
UE::Geometry::TMeshTangents<double>::InitializeTriVertexTangents
          (TMeshTangents<double> *this,bool param_1)

{
  SetTangentCount(this,((this->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                       (this->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed) * 3,param_1);
  return;
}

// InitializeTriangleTangents @ 1434d23a0

void __thiscall
UE::Geometry::TMeshTangents<float>::InitializeTriangleTangents
          (TMeshTangents<float> *this,bool param_1)

{
  SetTangentCount(this,(this->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                       (this->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed,param_1);
  return;
}

// InitializeTriangleTangents @ 1434d23d0

void __thiscall
UE::Geometry::TMeshTangents<double>::InitializeTriangleTangents
          (TMeshTangents<double> *this,bool param_1)

{
  SetTangentCount(this,(this->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                       (this->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed,param_1);
  return;
}

// SetMesh @ 14352e9d0

void __thiscall
UE::Geometry::TMeshTangents<float>::SetMesh(TMeshTangents<float> *this,FDynamicMesh3 *param_1)

{
  this->Mesh = param_1;
  return;
}

// SetMesh @ 14352e9e0

void __thiscall
UE::Geometry::TMeshTangents<double>::SetMesh(TMeshTangents<double> *this,FDynamicMesh3 *param_1)

{
  this->Mesh = param_1;
  return;
}

// SetPerTriangleTangent @ 1435302b0

void __thiscall
UE::Geometry::TMeshTangents<float>::SetPerTriangleTangent
          (TMeshTangents<float> *this,int param_1,int param_2,TVector<float> *param_3,
          TVector<float> *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  float fVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  
  uVar2 = *(undefined8 *)&param_3->field0_0x0;
  uVar8 = param_2 + param_1 * 3;
  fVar3 = (param_3->field0_0x0)._s_0.Z;
  uVar7 = 0;
  if ((int)uVar8 < (this->Tangents).ArrayNum) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar1 = (longlong)(int)uVar8 * 0xc;
  pFVar4 = (this->Tangents).AllocatorInstance.Data;
  *(undefined8 *)(pFVar4 + lVar1) = uVar2;
  *(float *)(pFVar4 + lVar1 + 8) = fVar3;
  uVar2 = *(undefined8 *)&param_4->field0_0x0;
  fVar3 = (param_4->field0_0x0)._s_0.Z;
  uVar7 = 0;
  if ((int)uVar8 < (this->Bitangents).ArrayNum) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar4 = (this->Bitangents).AllocatorInstance.Data;
  *(undefined8 *)(pFVar4 + lVar1) = uVar2;
  *(float *)(pFVar4 + lVar1 + 8) = fVar3;
  return;
}

// SetPerTriangleTangent @ 1435303e0

void __thiscall
UE::Geometry::TMeshTangents<double>::SetPerTriangleTangent
          (TMeshTangents<double> *this,int param_1,int param_2,TVector<double> *param_3,
          TVector<double> *param_4)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  
  uVar6 = *(undefined4 *)&param_3->field0_0x0;
  uVar7 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 4);
  uVar8 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 8);
  uVar9 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 0xc);
  uVar12 = param_2 + param_1 * 3;
  dVar3 = (param_3->field0_0x0)._s_0.Z;
  uVar11 = 0;
  if ((int)uVar12 < (this->Tangents).ArrayNum) {
    uVar11 = ~uVar12 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar2 = (longlong)(int)uVar12 * 0x18;
  pFVar4 = (this->Tangents).AllocatorInstance.Data;
  pFVar1 = pFVar4 + lVar2;
  *(undefined4 *)pFVar1 = uVar6;
  *(undefined4 *)(pFVar1 + 4) = uVar7;
  *(undefined4 *)(pFVar1 + 8) = uVar8;
  *(undefined4 *)(pFVar1 + 0xc) = uVar9;
  *(double *)(pFVar4 + lVar2 + 0x10) = dVar3;
  uVar6 = *(undefined4 *)&param_4->field0_0x0;
  uVar7 = *(undefined4 *)((longlong)&param_4->field0_0x0 + 4);
  uVar8 = *(undefined4 *)((longlong)&param_4->field0_0x0 + 8);
  uVar9 = *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc);
  dVar3 = (param_4->field0_0x0)._s_0.Z;
  uVar11 = 0;
  if ((int)uVar12 < (this->Bitangents).ArrayNum) {
    uVar11 = ~uVar12 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar4 = (this->Bitangents).AllocatorInstance.Data;
  pFVar1 = pFVar4 + lVar2;
  *(undefined4 *)pFVar1 = uVar6;
  *(undefined4 *)(pFVar1 + 4) = uVar7;
  *(undefined4 *)(pFVar1 + 8) = uVar8;
  *(undefined4 *)(pFVar1 + 0xc) = uVar9;
  *(double *)(pFVar4 + lVar2 + 0x10) = dVar3;
  return;
}

// SetTangentCount @ 143530520

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TMeshTangents<float>::SetTangentCount
          (TMeshTangents<float> *this,int param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  if ((this->Tangents).ArrayNum < param_1) {
    TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->Tangents,param_1,Default);
  }
  if ((this->Bitangents).ArrayNum < param_1) {
    TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->Bitangents,param_1,Default);
  }
  if ((param_2) && (uVar7 = 0, 0 < param_1)) {
    lVar8 = 0;
    do {
      uVar4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      uVar3 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      uVar6 = 0;
      if ((int)uVar7 < (this->Tangents).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->Tangents).AllocatorInstance.Data;
      *(undefined8 *)(pFVar1 + lVar8) = uVar3;
      *(undefined4 *)(pFVar1 + lVar8 + 8) = uVar4;
      uVar4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      uVar3 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      uVar6 = 0;
      if ((int)uVar7 < (this->Bitangents).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->Bitangents).AllocatorInstance.Data;
      uVar7 = uVar7 + 1;
      *(undefined8 *)(pFVar1 + lVar8) = uVar3;
      *(undefined4 *)(pFVar1 + lVar8 + 8) = uVar4;
      lVar8 = lVar8 + 0xc;
    } while ((int)uVar7 < param_1);
  }
  return;
}

// SetTangentCount @ 1435306a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TMeshTangents<double>::SetTangentCount
          (TMeshTangents<double> *this,int param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  
  if ((this->Tangents).ArrayNum < param_1) {
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->Tangents,param_1,Default);
  }
  if ((this->Bitangents).ArrayNum < param_1) {
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->Bitangents,param_1,Default);
  }
  if ((param_2) && (uVar11 = 0, 0 < param_1)) {
    lVar12 = 0;
    do {
      uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uVar10 = 0;
      if ((int)uVar11 < (this->Tangents).ArrayNum) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->Tangents).AllocatorInstance.Data;
      pFVar1 = pFVar2 + lVar12;
      *(undefined4 *)pFVar1 = uVar4;
      *(undefined4 *)(pFVar1 + 4) = uVar5;
      *(undefined4 *)(pFVar1 + 8) = uVar6;
      *(undefined4 *)(pFVar1 + 0xc) = uVar7;
      *(undefined8 *)(pFVar2 + lVar12 + 0x10) = uVar8;
      uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uVar10 = 0;
      if ((int)uVar11 < (this->Bitangents).ArrayNum) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->Bitangents).AllocatorInstance.Data;
      uVar11 = uVar11 + 1;
      pFVar1 = pFVar2 + lVar12;
      *(undefined4 *)pFVar1 = uVar4;
      *(undefined4 *)(pFVar1 + 4) = uVar5;
      *(undefined4 *)(pFVar1 + 8) = uVar6;
      *(undefined4 *)(pFVar1 + 0xc) = uVar7;
      *(undefined8 *)(pFVar2 + lVar12 + 0x10) = uVar8;
      lVar12 = lVar12 + 0x18;
    } while ((int)uVar11 < param_1);
  }
  return;
}

