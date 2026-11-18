// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 21

// StaticClass @ 14ce192e0

UClass * __cdecl UGeometryScriptLibrary_MeshSamplingFunctions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSamplingFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshSamplingFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSamplingFunctions.
                InnerSingleton,StaticRegisterNativesUGeometryScriptLibrary_MeshSamplingFunctions,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshSamplingFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshSamplingFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSamplingFunctions.InnerSingleton;
}

// UGeometryScriptLibrary_MeshSamplingFunctions @ 14ce26ac0

UGeometryScriptLibrary_MeshSamplingFunctions * __thiscall
UGeometryScriptLibrary_MeshSamplingFunctions::UGeometryScriptLibrary_MeshSamplingFunctions
          (UGeometryScriptLibrary_MeshSamplingFunctions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshSamplingFunctions__6B_;
  return this;
}

// UGeometryScriptLibrary_MeshSamplingFunctions @ 14ce26af0

UGeometryScriptLibrary_MeshSamplingFunctions * __thiscall
UGeometryScriptLibrary_MeshSamplingFunctions::UGeometryScriptLibrary_MeshSamplingFunctions
          (UGeometryScriptLibrary_MeshSamplingFunctions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshSamplingFunctions__6B_;
  return this;
}

// ~UGeometryScriptLibrary_MeshSamplingFunctions @ 14ce273d0

void __thiscall
UGeometryScriptLibrary_MeshSamplingFunctions::~UGeometryScriptLibrary_MeshSamplingFunctions
          (UGeometryScriptLibrary_MeshSamplingFunctions *this)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshSamplingFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// operator() @ 14ce33df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UGeometryScriptLibrary_MeshSamplingFunctions::ComputeUniformRandomPointSampling'::__l2::<lambda_1>
::operator()(void *this,FDynamicMesh3 *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  int iVar13;
  FText *pFVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  int iVar18;
  double dVar19;
  double dVar20;
  undefined1 auStackY_248 [32];
  uint local_1f8;
  uint local_1f4;
  TMeshUniformSurfaceSampling<UE::Geometry::FDynamicMesh3,double> local_1f0;
  undefined8 local_1d0;
  double local_1c8;
  double local_1c0;
  TQuaternion<double>_u_0 local_1b8;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_180;
  TVector<double>_u_0 local_168;
  FText local_148;
  TVector<double>_u_0 local_138;
  TVector<double> local_120;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  double local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_248;
  if ((param_1->TriangleRefCounts).UsedCount != 0) {
    local_1f0.AliasTable.Probability.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f0.AliasTable.Probability.ArrayNum = 0;
    local_1f0.AliasTable.Probability.ArrayMax = 0;
    local_1f0.AliasTable.Alias.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f0.AliasTable.Alias.ArrayNum = 0;
    local_1f0.AliasTable.Alias.ArrayMax = 0;
    UE::Geometry::TMeshUniformSurfaceSampling<UE::Geometry::FDynamicMesh3,double>::Init
              (&local_1f0,param_1);
    if (local_1f0.AliasTable.Probability.ArrayNum == 0) {
      pFVar14 = FText::AsLocalizable_Advanced_LocText
                          (&local_148,L"UGeometryScriptLibrary_MeshSamplingFunctions",
                           L"ComputeUniformRandomPointSampling_EmptyMesh",
                           L"ComputeUniformRandomPointSampling: TargetMesh does not have triangles to sample."
                          );
      UE::Geometry::AppendWarning(*(UGeometryScriptDebug **)this,InvalidInputs,pFVar14);
      if (local_148.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
      }
    }
    else {
      uVar17 = *(uint *)((longlong)this + 0xc);
      FGeometryScriptIndexList::Reset
                (*(FGeometryScriptIndexList **)((longlong)this + 0x18),Triangle,0);
      lVar16 = *(longlong *)((longlong)this + 0x18);
      if ((*(longlong *)(lVar16 + 8) == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar11 = _UNK_150689688;
      uVar10 = ___xmm_3ff00000000000003ff0000000000000;
      uVar9 = _UNK_150689518;
      uVar8 = ___xmm_00000000000000003ff0000000000000;
      fVar7 = __real_3f800000;
      dVar6 = __real_3ff0000000000000;
      pFVar2 = *(ForAnyElementType **)(lVar16 + 8);
      iVar18 = 0;
      if (0 < *(int *)((longlong)this + 8)) {
        do {
          uVar15 = uVar17 * 0xbb38435 + 0x3619636b;
          local_1f4 = uVar15 * 0xbb38435 + 0x3619636b;
          uVar17 = (uint)(((float)(local_1f4 >> 9 | 0x3f800000) - fVar7) *
                         (float)local_1f0.AliasTable.Probability.ArrayNum);
          if (((int)uVar17 < 0 || local_1f0.AliasTable.Probability.ArrayNum <= (int)uVar17) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (*(double *)
               (local_1f0.AliasTable.Probability.AllocatorInstance.Data + (longlong)(int)uVar17 * 8)
              <= (double)((float)(uVar15 >> 9 | 0x3f800000) - fVar7)) {
            if (((int)uVar17 < 0 || local_1f0.AliasTable.Alias.ArrayNum <= (int)uVar17) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar17 = *(uint *)(local_1f0.AliasTable.Alias.AllocatorInstance.Data +
                              (longlong)(int)uVar17 * 4);
          }
          local_1f8 = uVar17;
          if ((((int)uVar17 < 0) ||
              ((int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                    (param_1->TriangleRefCounts).RefCounts.CurBlockUsed) <= (int)uVar17)) ||
             (0xfffd < (ushort)(*(short *)(*(longlong *)
                                            ((param_1->TriangleRefCounts).RefCounts.Blocks.
                                             AllocatorInstance.Data + (ulonglong)(uVar17 >> 9) * 8)
                                          + (ulonglong)(uVar17 & 0x1ff) * 2) - 1U))) {
            bVar12 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_1542318877638131658>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryScripting\\Source\\GeometryScriptingCore\\Private\\MeshSamplingFunctions.cpp"
                                ,0x36,"ReadMesh.IsTriangle(TID)");
            uVar17 = local_1f4;
            if (bVar12) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          else {
            UE::Geometry::FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                      (param_1,uVar17,(TVector<double> *)&local_198._s_0,
                       (TVector<double> *)&local_180._s_0,(TVector<double> *)&local_168._s_0);
            pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
            UE::Geometry::VectorUtil::Normal<double>
                      (&local_120,(TVector<double> *)&local_198._s_0,
                       (TVector<double> *)&local_180._s_0,(TVector<double> *)&local_168._s_0);
            uVar15 = local_1f4 * 0xbb38435 + 0x3619636b;
            uVar17 = uVar15 * 0xbb38435 + 0x3619636b;
            dVar19 = (double)((float)(uVar15 >> 9 | 0x3f800000) - fVar7);
            dVar20 = (double)((float)(uVar17 >> 9 | 0x3f800000) - fVar7);
            if (dVar6 < dVar20 + dVar19) {
              dVar20 = dVar6 - dVar20;
              dVar19 = dVar6 - dVar19;
            }
            local_1b8._s_0.X = 0.0;
            local_1b8._s_0.W = dVar6;
            local_1b8._s_0.Y = 0.0;
            local_1b8._s_0.Z = 0.0;
            local_1d0 = (local_180._s_0.X - local_198._s_0.X) * dVar20 + local_198._s_0.X +
                        (local_168._s_0.X - local_198._s_0.X) * dVar19;
            local_1c8 = (local_180._s_0.Y - local_198._s_0.Y) * dVar20 + local_198._s_0.Y +
                        (local_168._s_0.Y - local_198._s_0.Y) * dVar19;
            local_1c0 = (local_180._s_0.Z - local_198._s_0.Z) * dVar20 + local_198._s_0.Z +
                        (local_168._s_0.Z - local_198._s_0.Z) * dVar19;
            local_138._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
            local_138._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
            local_138._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
            UE::Geometry::TQuaternion<double>::SetFromTo
                      ((TQuaternion<double> *)&local_1b8._s_0,(TVector<double> *)&local_138._s_0,
                       &local_120);
            local_108 = local_1b8._s_0.X;
            dStack_100 = local_1b8._s_0.Y;
            local_f8 = local_1b8._s_0.Z;
            dStack_f0 = local_1b8._s_0.W;
            uStack_e0 = SUB84(local_1c8,0);
            uStack_dc = (undefined4)((ulonglong)local_1c8 >> 0x20);
            local_d8 = local_1c0;
            uStack_d0 = 0;
            local_e8 = (undefined4)local_1d0;
            uStack_e4 = local_1d0._4_4_;
            local_c8 = uVar10;
            uStack_c0 = uVar11;
            local_b8 = uVar8;
            uStack_b0 = uVar9;
            if (((pFVar3->Data <= (FScriptContainerElement *)&local_108) &&
                ((FScriptContainerElement *)&local_108 <
                 pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0x60)) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar12)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar13 = *(int *)&pFVar3[1].Data;
            piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
            if (iVar13 == *piVar1) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x1060,pFVar3,piVar1);
            }
            *(int *)&pFVar3[1].Data = iVar13 + 1;
            pFVar4 = pFVar3->Data;
            lVar16 = (longlong)iVar13 * 0x60;
            *(double *)(pFVar4 + lVar16) = local_108;
            *(double *)(pFVar4 + lVar16 + 8) = dStack_100;
            *(double *)(pFVar4 + lVar16 + 0x10) = local_f8;
            *(double *)(pFVar4 + lVar16 + 0x10 + 8) = dStack_f0;
            *(ulonglong *)(pFVar4 + lVar16 + 0x20) = CONCAT44(uStack_e4,local_e8);
            *(ulonglong *)(pFVar4 + lVar16 + 0x20 + 8) = CONCAT44(uStack_dc,uStack_e0);
            *(double *)(pFVar4 + lVar16 + 0x30) = local_d8;
            *(undefined8 *)(pFVar4 + lVar16 + 0x30 + 8) = uStack_d0;
            *(undefined8 *)(pFVar4 + lVar16 + 0x40) = local_c8;
            *(undefined8 *)(pFVar4 + lVar16 + 0x40 + 8) = uStack_c0;
            *(undefined8 *)(pFVar4 + lVar16 + 0x50) = local_b8;
            *(undefined8 *)(pFVar4 + lVar16 + 0x50 + 8) = uStack_b0;
            if (((pFVar2->Data <= (FScriptContainerElement *)&local_1f8) &&
                ((FScriptContainerElement *)&local_1f8 <
                 pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 4)) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar12)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar13 = *(int *)&pFVar2[1].Data;
            piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
            if (iVar13 == *piVar1) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,pFVar2,piVar1);
            }
            *(int *)&pFVar2[1].Data = iVar13 + 1;
            *(uint *)(pFVar2->Data + (longlong)iVar13 * 4) = local_1f8;
          }
          iVar18 = iVar18 + 1;
        } while (iVar18 < *(int *)((longlong)this + 8));
      }
    }
    if (local_1f0.AliasTable.Alias.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f0.AliasTable.Alias.AllocatorInstance.Data);
    }
    if (local_1f0.AliasTable.Probability.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f0.AliasTable.Probability.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 14ce344b0

void __thiscall
`UGeometryScriptLibrary_MeshSamplingFunctions::ComputeVertexWeightedPointSampling'::__l2::<lambda_1>
::operator()(void *this,FDynamicMesh3 *param_1)

{
  int iVar1;
  ForAnyElementType *pFVar2;
  longlong lVar3;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar4;
  
  if ((**(char **)this != '\0') &&
     (pFVar2 = (ForAnyElementType *)**(longlong **)((longlong)this + 8),
     pFVar2 != (ForAnyElementType *)0x0)) {
    iVar1 = *(int *)&pFVar2[1].Data;
    if (iVar1 == (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                 (param_1->VertexRefCounts).RefCounts.CurBlockUsed) {
      lVar3 = *(longlong *)((longlong)this + 0x10);
      pFVar4 = (ForAnyElementType *)(lVar3 + 0x48);
      if (pFVar4 != pFVar2) {
        _Src = pFVar2->Data;
        *(int *)(lVar3 + 0x50) = iVar1;
        if ((iVar1 == 0) && (*(int *)(lVar3 + 0x54) == 0)) {
          *(int *)(lVar3 + 0x54) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar1,*(int *)(lVar3 + 0x54),pFVar4,iVar1,(int *)(lVar3 + 0x54));
          if (iVar1 != 0) {
            memcpy(pFVar4->Data,_Src,(longlong)iVar1 << 3);
          }
        }
      }
      *(undefined1 *)(*(longlong *)((longlong)this + 0x10) + 0x40) = 1;
      *(uint *)(*(longlong *)((longlong)this + 0x10) + 0x58) =
           (uint)*(byte *)(*(longlong *)((longlong)this + 0x18) + 0x10);
      *(undefined1 *)(*(longlong *)((longlong)this + 0x10) + 0x5c) =
           *(undefined1 *)(*(longlong *)((longlong)this + 0x18) + 0x11);
    }
  }
  UE::Geometry::FMeshSurfacePointSampling::ComputePoissonSampling
            (*(FMeshSurfacePointSampling **)((longlong)this + 0x10),param_1,(FProgressCancel *)0x0);
  return;
}

// operator() @ 14ce4d550

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UGeometryScriptLibrary_MeshSamplingFunctions::ComputeRenderCapturePointSampling'::__l11::<lambda_3>
::operator()(void *this,int param_1)

{
  double *pdVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  bool bVar19;
  uint uVar20;
  longlong lVar21;
  double dVar22;
  
  plVar7 = *(longlong **)((longlong)this + 8);
  uVar20 = 0;
  if (param_1 < (int)plVar7[1]) {
    uVar20 = (uint)~param_1 >> 0x1f;
  }
  if (uVar20 == 0) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar19) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  uVar18 = _UNK_150689688;
  uVar17 = ___xmm_3ff00000000000003ff0000000000000;
  uVar16 = _UNK_150689518;
  uVar15 = ___xmm_00000000000000003ff0000000000000;
  lVar8 = *plVar7;
  plVar7 = *(longlong **)this;
  lVar21 = (longlong)param_1 * 0x1c;
  fVar3 = *(float *)(lVar21 + lVar8);
  fVar4 = *(float *)(lVar21 + 8 + lVar8);
  fVar5 = *(float *)(lVar21 + 0xc + lVar8);
  uVar6 = *(undefined8 *)(lVar21 + 0x14 + lVar8);
  dVar14 = (double)(float)((ulonglong)uVar6 >> 0x20);
  uVar20 = 0;
  if (param_1 < (int)plVar7[1]) {
    uVar20 = (uint)~param_1 >> 0x1f;
  }
  dVar22 = (double)*(float *)(lVar21 + 4 + lVar8);
  dVar12 = (double)*(float *)(lVar21 + 0x10 + lVar8);
  if (uVar20 == 0) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar19) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  lVar8 = *plVar7;
  lVar21 = (longlong)param_1 * 0x60;
  auVar11._8_4_ = SUB84(dVar12,0);
  auVar11._0_8_ = (double)fVar5;
  auVar11._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  *(undefined1 (*) [16])(lVar21 + lVar8) = auVar11;
  auVar13._8_4_ = SUB84(dVar14,0);
  auVar13._0_8_ = (double)(float)uVar6;
  auVar13._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  *(undefined1 (*) [16])(lVar21 + 0x10 + lVar8) = auVar13;
  auVar10._8_4_ = SUB84(dVar22,0);
  auVar10._0_8_ = (double)fVar3;
  auVar10._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
  *(undefined1 (*) [16])(lVar21 + 0x20 + lVar8) = auVar10;
  pdVar1 = (double *)(lVar21 + 0x30 + lVar8);
  *pdVar1 = (double)fVar4;
  pdVar1[1] = 0.0;
  puVar2 = (undefined8 *)(lVar21 + 0x40 + lVar8);
  *puVar2 = uVar17;
  puVar2[1] = uVar18;
  puVar2 = (undefined8 *)(lVar21 + 0x50 + lVar8);
  *puVar2 = uVar15;
  puVar2[1] = uVar16;
  return;
}

// ComputeNonUniformPointSampling @ 14ce60b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSamplingFunctions::ComputeNonUniformPointSampling
          (UDynamicMesh *param_1,FGeometryScriptMeshPointSamplingOptions *param_2,
          FGeometryScriptNonUniformPointSamplingOptions *param_3,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_4,
          TArray<double,TSizedDefaultAllocator<32>_> *param_5,FGeometryScriptIndexList *param_6,
          UGeometryScriptDebug *param_7)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  double dVar4;
  undefined8 uVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar14;
  bool bVar15;
  uint uVar16;
  int iVar17;
  FText *pFVar18;
  UDynamicMesh *pUVar19;
  ulonglong uVar20;
  longlong lVar21;
  char cVar22;
  uint uVar23;
  FScriptContainerElement *pFVar24;
  uint uVar25;
  bool bVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 auStack_268 [32];
  FScriptContainerElement *local_248;
  FScriptContainerElement *local_240;
  longlong local_238;
  longlong local_230;
  undefined8 local_228;
  char local_218;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_210;
  double local_208;
  int local_200;
  double local_1f8;
  int local_1f0;
  undefined4 local_1ec;
  int local_1e8;
  double local_1e0;
  uint local_1d8;
  undefined8 local_1d0;
  undefined1 local_1c8;
  void *local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined2 local_1ac;
  undefined4 local_1a8;
  FGeometryError *local_1a0;
  undefined8 local_198;
  FGeometryWarning *local_190;
  undefined8 local_188;
  void *local_180;
  ulonglong local_178;
  void *local_170;
  undefined8 local_168;
  void *local_160;
  undefined8 local_158;
  void *local_150;
  undefined8 local_148;
  double *local_138;
  ulonglong local_130;
  UDynamicMesh *local_128;
  code *local_120;
  double **local_118;
  FText local_110 [2];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_268;
  local_210 = param_4;
  local_128 = param_1;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar18 = FText::AsLocalizable_Advanced_LocText
                        (local_110,L"UGeometryScriptLibrary_MeshSamplingFunctions",
                         L"ComputeNonUniformPointSampling",
                         L"ComputeNonUniformPointSampling: TargetMesh is Null");
    UE::Geometry::AppendError(param_7,InvalidInputs,pFVar18);
    if (local_110[0].TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_110[0].TextData.Reference + 0x10))();
    }
    param_1 = (UDynamicMesh *)0x0;
  }
  else {
    bVar26 = CpuChannel->Enabled < 0;
    if (bVar26) {
      local_218 = '\0';
    }
    else {
      local_218 = '\x01';
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId124,"GS_ComputeNonUniformPointSampling",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryScripting\\Source\\GeometryScriptingCore\\Private\\MeshSamplingFunctions.cpp"
                 ,0x7c);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId124);
    }
    uVar25 = 0;
    local_200 = param_2->MaxNumSamples;
    local_1d0 = __real_4000000000000000;
    local_208 = (double)param_2->SamplingRadius;
    local_1f0 = param_2->RandomSeed;
    local_1e8 = param_2->SamplingMethodVersion;
    local_1ec = 50000000;
    local_1e0 = 0.0;
    local_1f8 = param_2->SubSampleDensity;
    local_1d8 = 0;
    local_1c8 = 0;
    local_1c0 = (void *)0x0;
    local_1b8 = 0;
    local_1b0 = 1;
    local_1ac = 0;
    local_1a0 = (FGeometryError *)0x0;
    local_198 = 0;
    local_190 = (FGeometryWarning *)0x0;
    local_188 = 0;
    local_1a8 = 0;
    local_180 = (void *)0x0;
    local_178 = 0;
    local_170 = (void *)0x0;
    local_168 = 0;
    local_160 = (void *)0x0;
    local_158 = 0;
    local_150 = (void *)0x0;
    local_148 = 0;
    if (param_2->SamplingRadius < param_3->MaxSamplingRadius) {
      local_1e0 = (double)param_3->MaxSamplingRadius;
      local_1d8 = (uint)param_3->SizeDistribution;
      dVar4 = param_3->SizeDistributionPower;
      uVar27 = SUB84(dVar4,0);
      uVar28 = (undefined4)((ulonglong)dVar4 >> 0x20);
      if (__real_4024000000000000 <= dVar4) {
        uVar27 = SUB84(__real_4024000000000000,0);
        uVar28 = (undefined4)((ulonglong)__real_4024000000000000 >> 0x20);
      }
      if ((double)CONCAT44(uVar28,uVar27) <= __real_3ff0000000000000) {
        uVar27 = SUB84(__real_3ff0000000000000,0);
        uVar28 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      }
      local_1d0 = CONCAT44(uVar28,uVar27);
    }
    local_138 = &local_208;
    local_118 = &local_138;
    local_120 = UE::Core::Private::Function::
                TFunctionRefCaller<`UGeometryScriptLibrary_MeshSamplingFunctions::ComputeNonUniformPointSampling'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
                ::Call;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_120
              );
    FGeometryScriptIndexList::Reset(param_6,Triangle,0);
    if (((param_6->List).Object == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar15)) {
      pcVar9 = (code *)swi(3);
      pUVar19 = (UDynamicMesh *)(*pcVar9)();
      return pUVar19;
    }
    pTVar14 = local_210;
    uVar13 = _UNK_150689688;
    uVar12 = ___xmm_3ff00000000000003ff0000000000000;
    uVar11 = _UNK_150689518;
    uVar10 = ___xmm_00000000000000003ff0000000000000;
    uVar20 = (ulonglong)(int)local_178;
    pTVar6 = (param_6->List).Object;
    cVar22 = !bVar26;
    local_130 = uVar20;
    if (0 < (int)local_178) {
      pFVar24 = (FScriptContainerElement *)0x0;
      local_210 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)0x0;
      while( true ) {
        piVar1 = &pTVar14->ArrayMax;
        uVar23 = ~uVar25 >> 0x1f;
        uVar16 = 0;
        if ((int)uVar25 < (int)uVar20) {
          uVar16 = uVar23;
        }
        if (uVar16 == 0) {
          local_240 = (FScriptContainerElement *)(longlong)(int)uVar20;
          local_248 = (FScriptContainerElement *)(longlong)(int)uVar25;
          bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar26) {
            pcVar9 = (code *)swi(3);
            pUVar19 = (UDynamicMesh *)(*pcVar9)();
            return pUVar19;
          }
        }
        local_c8 = *(undefined8 *)((longlong)local_210 + (longlong)local_180);
        uStack_c0 = ((undefined8 *)((longlong)local_210 + (longlong)local_180))[1];
        puVar2 = (undefined4 *)((longlong)local_210 + 0x28 + (longlong)local_180);
        local_d8 = *puVar2;
        uStack_d4 = puVar2[1];
        local_f0 = *(undefined8 *)((longlong)local_210 + 0x10 + (longlong)local_180);
        puVar3 = (undefined8 *)((longlong)local_210 + 0x18 + (longlong)local_180);
        local_e8 = *puVar3;
        uStack_e0 = puVar3[1];
        uVar5 = *(undefined8 *)((longlong)local_210 + 0x30 + (longlong)local_180);
        pFVar7 = (pTVar14->AllocatorInstance).Data;
        uStack_d0 = (undefined4)uVar5;
        uStack_cc = (undefined4)((ulonglong)uVar5 >> 0x20);
        uStack_b0 = 0;
        local_a8 = uVar12;
        uStack_a0 = uVar13;
        local_98 = uVar10;
        uStack_90 = uVar11;
        local_b8 = local_f0;
        if ((pFVar7 <= (FScriptContainerElement *)&local_e8) &&
           ((FScriptContainerElement *)&local_e8 < pFVar7 + (longlong)*piVar1 * 0x60)) {
          local_230 = (longlong)pTVar14->ArrayNum;
          local_228 = 0x60;
          local_248 = (FScriptContainerElement *)&local_e8;
          local_240 = pFVar7;
          local_238 = (longlong)*piVar1;
          bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar26) {
            pcVar9 = (code *)swi(3);
            pUVar19 = (UDynamicMesh *)(*pcVar9)();
            return pUVar19;
          }
        }
        iVar17 = pTVar14->ArrayNum;
        if (iVar17 == *piVar1) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1060,&pTVar14->AllocatorInstance,piVar1);
        }
        pTVar14->ArrayNum = iVar17 + 1;
        pFVar7 = (pTVar14->AllocatorInstance).Data;
        lVar21 = (longlong)iVar17 * 0x60;
        *(undefined8 *)(pFVar7 + lVar21) = local_e8;
        *(undefined8 *)(pFVar7 + lVar21 + 8) = uStack_e0;
        *(ulonglong *)(pFVar7 + lVar21 + 0x10) = CONCAT44(uStack_d4,local_d8);
        *(ulonglong *)(pFVar7 + lVar21 + 0x10 + 8) = CONCAT44(uStack_cc,uStack_d0);
        *(undefined8 *)(pFVar7 + lVar21 + 0x20) = local_c8;
        *(undefined8 *)(pFVar7 + lVar21 + 0x20 + 8) = uStack_c0;
        *(undefined8 *)(pFVar7 + lVar21 + 0x30) = local_b8;
        *(undefined8 *)(pFVar7 + lVar21 + 0x30 + 8) = uStack_b0;
        *(undefined8 *)(pFVar7 + lVar21 + 0x40) = local_a8;
        *(undefined8 *)(pFVar7 + lVar21 + 0x40 + 8) = uStack_a0;
        *(undefined8 *)(pFVar7 + lVar21 + 0x50) = local_98;
        *(undefined8 *)(pFVar7 + lVar21 + 0x50 + 8) = uStack_90;
        uVar16 = 0;
        if ((int)uVar25 < (int)local_168) {
          uVar16 = uVar23;
        }
        if ((uVar16 == 0) &&
           (local_248 = pFVar24, local_240 = (FScriptContainerElement *)(longlong)(int)local_168,
           bVar26 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar26)) {
          pcVar9 = (code *)swi(3);
          pUVar19 = (UDynamicMesh *)(*pcVar9)();
          return pUVar19;
        }
        pFVar8 = (param_5->AllocatorInstance).Data;
        pFVar7 = (FScriptContainerElement *)((longlong)local_170 + (longlong)pFVar24 * 8);
        if ((pFVar8 <= pFVar7) && (pFVar7 < pFVar8 + (longlong)param_5->ArrayMax * 8)) {
          local_230 = (longlong)param_5->ArrayNum;
          local_228 = 8;
          local_248 = pFVar7;
          local_240 = pFVar8;
          local_238 = (longlong)param_5->ArrayMax;
          bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar26) {
            pcVar9 = (code *)swi(3);
            pUVar19 = (UDynamicMesh *)(*pcVar9)();
            return pUVar19;
          }
        }
        iVar17 = param_5->ArrayNum;
        if (iVar17 == param_5->ArrayMax) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&param_5->AllocatorInstance,&param_5->ArrayMax);
        }
        param_5->ArrayNum = iVar17 + 1;
        *(undefined8 *)((param_5->AllocatorInstance).Data + (longlong)iVar17 * 8) =
             *(undefined8 *)pFVar7;
        uVar16 = 0;
        if ((int)uVar25 < (int)local_158) {
          uVar16 = uVar23;
        }
        if ((uVar16 == 0) &&
           (local_248 = pFVar24, local_240 = (FScriptContainerElement *)(longlong)(int)local_158,
           bVar26 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar26)) {
          pcVar9 = (code *)swi(3);
          pUVar19 = (UDynamicMesh *)(*pcVar9)();
          return pUVar19;
        }
        piVar1 = &pTVar6->ArrayMax;
        pFVar8 = (pTVar6->AllocatorInstance).Data;
        pFVar7 = (FScriptContainerElement *)((longlong)local_160 + (longlong)pFVar24 * 4);
        if ((pFVar8 <= pFVar7) && (pFVar7 < pFVar8 + (longlong)*piVar1 * 4)) {
          local_230 = (longlong)pTVar6->ArrayNum;
          local_228 = 4;
          local_248 = pFVar7;
          local_240 = pFVar8;
          local_238 = (longlong)*piVar1;
          bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar26) {
            pcVar9 = (code *)swi(3);
            pUVar19 = (UDynamicMesh *)(*pcVar9)();
            return pUVar19;
          }
        }
        iVar17 = pTVar6->ArrayNum;
        if (iVar17 == *piVar1) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar6->AllocatorInstance,piVar1);
        }
        pTVar6->ArrayNum = iVar17 + 1;
        uVar25 = uVar25 + 1;
        pFVar24 = pFVar24 + 1;
        *(undefined4 *)((pTVar6->AllocatorInstance).Data + (longlong)iVar17 * 4) =
             *(undefined4 *)pFVar7;
        local_210 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                    ((longlong)local_210 + 0x38);
        param_1 = local_128;
        cVar22 = local_218;
        if ((longlong)local_130 <= (longlong)pFVar24) break;
        uVar20 = local_178 & 0xffffffff;
      }
    }
    if (local_150 != (void *)0x0) {
      FMemory::Free(local_150);
    }
    if (local_160 != (void *)0x0) {
      FMemory::Free(local_160);
    }
    if (local_170 != (void *)0x0) {
      FMemory::Free(local_170);
    }
    if (local_180 != (void *)0x0) {
      FMemory::Free(local_180);
    }
    DestructItems<UE::Geometry::FGeometryWarning,int>(local_190,(int)local_188);
    if (local_190 != (FGeometryWarning *)0x0) {
      FMemory::Free(local_190);
    }
    DestructItems<UE::Geometry::FGeometryError,int>(local_1a0,(int)local_198);
    if (local_1a0 != (FGeometryError *)0x0) {
      FMemory::Free(local_1a0);
    }
    if (local_1c0 != (void *)0x0) {
      FMemory::Free(local_1c0);
    }
    if (cVar22 != '\0') {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return param_1;
}

// ComputePointSampling @ 14ce61240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSamplingFunctions::ComputePointSampling
          (UDynamicMesh *param_1,FGeometryScriptMeshPointSamplingOptions *param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3,
          FGeometryScriptIndexList *param_4,UGeometryScriptDebug *param_5)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  FText *pFVar14;
  UDynamicMesh *pUVar15;
  ulonglong uVar16;
  longlong lVar17;
  char cVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  bool bVar22;
  undefined1 auStack_268 [32];
  FScriptContainerElement *local_248;
  FScriptContainerElement *local_240;
  longlong local_238;
  longlong local_230;
  undefined8 local_228;
  char local_218;
  longlong local_210;
  double local_208;
  int local_200;
  double local_1f8;
  int local_1f0;
  undefined4 local_1ec;
  int local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined1 local_1c8;
  void *local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined2 local_1ac;
  undefined4 local_1a8;
  FGeometryError *local_1a0;
  undefined8 local_198;
  FGeometryWarning *local_190;
  undefined8 local_188;
  void *local_180;
  ulonglong local_178;
  void *local_170;
  undefined8 local_168;
  void *local_160;
  undefined8 local_158;
  void *local_150;
  undefined8 local_148;
  double *local_138;
  ulonglong local_130;
  UDynamicMesh *local_128;
  code *local_120;
  double **local_118;
  FText local_110 [2];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_268;
  local_128 = param_1;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar14 = FText::AsLocalizable_Advanced_LocText
                        (local_110,L"UGeometryScriptLibrary_MeshSamplingFunctions",
                         L"ComputePointSampling",L"ComputePointSampling: TargetMesh is Null");
    UE::Geometry::AppendError(param_5,InvalidInputs,pFVar14);
    if (local_110[0].TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_110[0].TextData.Reference + 0x10))();
    }
    param_1 = (UDynamicMesh *)0x0;
  }
  else {
    bVar22 = CpuChannel->Enabled < 0;
    if (bVar22) {
      local_218 = '\0';
    }
    else {
      local_218 = '\x01';
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId80,"GS_ComputePointSampling",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryScripting\\Source\\GeometryScriptingCore\\Private\\MeshSamplingFunctions.cpp"
                 ,0x50);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId80);
    }
    local_200 = param_2->MaxNumSamples;
    pFVar19 = (FScriptContainerElement *)0x0;
    local_1f0 = param_2->RandomSeed;
    local_1e8 = param_2->SamplingMethodVersion;
    local_1d0 = __real_4000000000000000;
    local_138 = &local_208;
    local_208 = (double)param_2->SamplingRadius;
    local_118 = &local_138;
    local_1ec = 50000000;
    local_1d8 = 0;
    local_1c8 = 0;
    local_1e0 = 0;
    local_1f8 = param_2->SubSampleDensity;
    local_1c0 = (void *)0x0;
    local_1b8 = 0;
    local_1b0 = 1;
    local_1ac = 0;
    local_1a0 = (FGeometryError *)0x0;
    local_198 = 0;
    local_190 = (FGeometryWarning *)0x0;
    local_188 = 0;
    local_1a8 = 0;
    local_180 = (void *)0x0;
    local_178 = 0;
    local_170 = (void *)0x0;
    local_168 = 0;
    local_160 = (void *)0x0;
    local_158 = 0;
    local_150 = (void *)0x0;
    local_148 = 0;
    local_120 = UE::Core::Private::Function::
                TFunctionRefCaller<`UGeometryScriptLibrary_MeshSamplingFunctions::ComputePointSampling'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
                ::Call;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_120
              );
    FGeometryScriptIndexList::Reset(param_4,Triangle,0);
    if (((param_4->List).Object == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      pUVar15 = (UDynamicMesh *)(*pcVar6)();
      return pUVar15;
    }
    uVar10 = _UNK_150689688;
    uVar9 = ___xmm_3ff00000000000003ff0000000000000;
    uVar8 = _UNK_150689518;
    uVar7 = ___xmm_00000000000000003ff0000000000000;
    uVar16 = (ulonglong)(int)local_178;
    pTVar5 = (param_4->List).Object;
    cVar18 = !bVar22;
    local_130 = uVar16;
    if (0 < (int)local_178) {
      local_210 = 0;
      pFVar21 = pFVar19;
      while( true ) {
        uVar20 = (uint)pFVar21;
        uVar12 = 0;
        if ((int)uVar20 < (int)uVar16) {
          uVar12 = ~uVar20 >> 0x1f;
        }
        if (uVar12 == 0) {
          local_240 = (FScriptContainerElement *)(longlong)(int)uVar16;
          local_248 = (FScriptContainerElement *)(longlong)(int)uVar20;
          bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar22) {
            pcVar6 = (code *)swi(3);
            pUVar15 = (UDynamicMesh *)(*pcVar6)();
            return pUVar15;
          }
        }
        local_a8 = uVar9;
        uStack_a0 = uVar10;
        local_98 = uVar7;
        uStack_90 = uVar8;
        local_c8 = *(undefined8 *)(local_210 + (longlong)local_180);
        uStack_c0 = ((undefined8 *)(local_210 + (longlong)local_180))[1];
        uVar4 = *(undefined8 *)(local_210 + 0x30 + (longlong)local_180);
        uStack_d0 = (undefined4)uVar4;
        uStack_cc = (undefined4)((ulonglong)uVar4 >> 0x20);
        puVar2 = (undefined8 *)(local_210 + 0x18 + (longlong)local_180);
        local_e8 = *puVar2;
        uStack_e0 = puVar2[1];
        local_f0 = *(undefined8 *)(local_210 + 0x10 + (longlong)local_180);
        puVar3 = (undefined4 *)(local_210 + 0x28 + (longlong)local_180);
        local_d8 = *puVar3;
        uStack_d4 = puVar3[1];
        pFVar21 = (param_3->AllocatorInstance).Data;
        uStack_b0 = 0;
        local_b8 = local_f0;
        if ((pFVar21 <= (FScriptContainerElement *)&local_e8) &&
           ((FScriptContainerElement *)&local_e8 < pFVar21 + (longlong)param_3->ArrayMax * 0x60)) {
          local_230 = (longlong)param_3->ArrayNum;
          local_228 = 0x60;
          local_248 = (FScriptContainerElement *)&local_e8;
          local_240 = pFVar21;
          local_238 = (longlong)param_3->ArrayMax;
          bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar22) {
            pcVar6 = (code *)swi(3);
            pUVar15 = (UDynamicMesh *)(*pcVar6)();
            return pUVar15;
          }
        }
        iVar13 = param_3->ArrayNum;
        if (iVar13 == param_3->ArrayMax) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1060,&param_3->AllocatorInstance,&param_3->ArrayMax);
        }
        param_3->ArrayNum = iVar13 + 1;
        pFVar21 = (param_3->AllocatorInstance).Data;
        lVar17 = (longlong)iVar13 * 0x60;
        *(undefined8 *)(pFVar21 + lVar17) = local_e8;
        *(undefined8 *)(pFVar21 + lVar17 + 8) = uStack_e0;
        *(ulonglong *)(pFVar21 + lVar17 + 0x10) = CONCAT44(uStack_d4,local_d8);
        *(ulonglong *)(pFVar21 + lVar17 + 0x10 + 8) = CONCAT44(uStack_cc,uStack_d0);
        *(undefined8 *)(pFVar21 + lVar17 + 0x20) = local_c8;
        *(undefined8 *)(pFVar21 + lVar17 + 0x20 + 8) = uStack_c0;
        *(undefined8 *)(pFVar21 + lVar17 + 0x30) = local_b8;
        *(undefined8 *)(pFVar21 + lVar17 + 0x30 + 8) = uStack_b0;
        *(undefined8 *)(pFVar21 + lVar17 + 0x40) = local_a8;
        *(undefined8 *)(pFVar21 + lVar17 + 0x40 + 8) = uStack_a0;
        *(undefined8 *)(pFVar21 + lVar17 + 0x50) = local_98;
        *(undefined8 *)(pFVar21 + lVar17 + 0x50 + 8) = uStack_90;
        uVar12 = 0;
        if ((int)uVar20 < (int)local_158) {
          uVar12 = ~uVar20 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (local_248 = pFVar19, local_240 = (FScriptContainerElement *)(longlong)(int)local_158,
           bVar22 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar22)) {
          pcVar6 = (code *)swi(3);
          pUVar15 = (UDynamicMesh *)(*pcVar6)();
          return pUVar15;
        }
        pFVar21 = (pTVar5->AllocatorInstance).Data;
        pFVar1 = (FScriptContainerElement *)((longlong)local_160 + (longlong)pFVar19 * 4);
        if ((pFVar21 <= pFVar1) && (pFVar1 < pFVar21 + (longlong)pTVar5->ArrayMax * 4)) {
          local_230 = (longlong)pTVar5->ArrayNum;
          local_228 = 4;
          local_248 = pFVar1;
          local_240 = pFVar21;
          local_238 = (longlong)pTVar5->ArrayMax;
          bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar22) {
            pcVar6 = (code *)swi(3);
            pUVar15 = (UDynamicMesh *)(*pcVar6)();
            return pUVar15;
          }
        }
        iVar13 = pTVar5->ArrayNum;
        if (iVar13 == pTVar5->ArrayMax) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
        }
        pTVar5->ArrayNum = iVar13 + 1;
        pFVar21 = (FScriptContainerElement *)(ulonglong)(uVar20 + 1);
        pFVar19 = pFVar19 + 1;
        *(undefined4 *)((pTVar5->AllocatorInstance).Data + (longlong)iVar13 * 4) =
             *(undefined4 *)pFVar1;
        local_210 = local_210 + 0x38;
        param_1 = local_128;
        cVar18 = local_218;
        if ((longlong)local_130 <= (longlong)pFVar19) break;
        uVar16 = local_178 & 0xffffffff;
      }
    }
    if (local_150 != (void *)0x0) {
      FMemory::Free(local_150);
    }
    if (local_160 != (void *)0x0) {
      FMemory::Free(local_160);
    }
    if (local_170 != (void *)0x0) {
      FMemory::Free(local_170);
    }
    if (local_180 != (void *)0x0) {
      FMemory::Free(local_180);
    }
    DestructItems<UE::Geometry::FGeometryWarning,int>(local_190,(int)local_188);
    if (local_190 != (FGeometryWarning *)0x0) {
      FMemory::Free(local_190);
    }
    DestructItems<UE::Geometry::FGeometryError,int>(local_1a0,(int)local_198);
    if (local_1a0 != (FGeometryError *)0x0) {
      FMemory::Free(local_1a0);
    }
    if (local_1c0 != (void *)0x0) {
      FMemory::Free(local_1c0);
    }
    if (cVar18 != '\0') {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return param_1;
}

// ComputeRenderCaptureCamerasForBox @ 14ce619c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshSamplingFunctions::ComputeRenderCaptureCamerasForBox
          (TArray<FGeometryScriptRenderCaptureCamera,TSizedDefaultAllocator<32>_> *param_1,
          TBox<double> *param_2,FGeometryScriptRenderCaptureCamerasForBoxOptions *param_3,
          UGeometryScriptDebug *param_4)

{
  FFormatArgumentValue_u_8 *pFVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FFormatArgumentValue_u_8 FVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  TBox<double> *pTVar16;
  bool bVar17;
  int iVar18;
  FText *pFVar19;
  FTextFormat *pFVar20;
  longlong lVar21;
  FFormatArgumentValue_u_8 *pFVar22;
  ForAnyElementType FVar23;
  float fVar24;
  double dVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  double dVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined1 unaff_XMM11 [16];
  undefined1 auVar36 [16];
  undefined1 auStackY_4f8 [32];
  ForAnyElementType local_4a8;
  int local_4a0;
  int iStack_49c;
  undefined1 local_498;
  undefined1 local_497 [7];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_490;
  uint local_480;
  uint uStack_47c;
  uint uStack_478;
  uint uStack_474;
  undefined8 local_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  uint local_450;
  uint uStack_44c;
  uint uStack_448;
  uint uStack_444;
  undefined8 local_440;
  uint local_438;
  uint uStack_434;
  uint uStack_430;
  uint uStack_42c;
  undefined8 local_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined8 uStack_388;
  double local_380;
  undefined8 local_378;
  undefined8 uStack_370;
  double local_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  TBox<double> *local_210;
  int local_208;
  undefined4 uStack_204;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double dStack_1d8;
  double dStack_1d0;
  double local_1c8;
  FTextFormat local_1b8;
  FText local_1a8;
  double local_198;
  FText local_190;
  undefined8 local_180;
  undefined8 uStack_178;
  double local_170;
  double local_158;
  FTextFormat local_150;
  FFormatArgumentValue local_138;
  undefined4 local_118;
  double local_110;
  longlong *local_108;
  undefined4 local_100;
  undefined4 local_f8;
  double local_f0;
  longlong *local_e8;
  undefined4 local_e0;
  ulonglong local_d8;
  
  uVar26 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
  uVar14 = _UNK_15066df7c;
  uVar13 = _UNK_15066df78;
  uVar12 = __xmm_80000000000000008000000000000000._4_4_;
  uVar11 = (uint)__xmm_80000000000000008000000000000000;
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_4f8;
  local_4a8.Data = (FScriptContainerElement *)0x0;
  local_4a0 = 0;
  iStack_49c = 0;
  local_210 = param_2;
  if (param_3->bViewFromBoxFaces != false) {
    uVar29 = CONCAT44(UE::Math::TVector<double>::XAxisVector.field0_0x0._4_4_,
                      UE::Math::TVector<double>::XAxisVector.field0_0x0._0_4_);
    uVar33 = CONCAT44(UE::Math::TVector<double>::XAxisVector.field0_0x0._12_4_,
                      UE::Math::TVector<double>::XAxisVector.field0_0x0._8_4_);
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_4a8,&iStack_49c);
    local_170 = (double)uVar26;
    local_4a0 = iVar18 + 1;
    *(undefined8 *)(local_4a8.Data + (longlong)iVar18 * 0x18) = uVar29;
    *(undefined8 *)(local_4a8.Data + (longlong)iVar18 * 0x18 + 8) = uVar33;
    *(undefined8 *)(local_4a8.Data + (longlong)iVar18 * 0x18 + 0x10) = uVar26;
    local_450 = UE::Math::TVector<double>::XAxisVector.field0_0x0._0_4_ ^ uVar11;
    uStack_44c = UE::Math::TVector<double>::XAxisVector.field0_0x0._4_4_ ^ uVar12;
    uStack_448 = UE::Math::TVector<double>::XAxisVector.field0_0x0._8_4_ ^ uVar13;
    uStack_444 = UE::Math::TVector<double>::XAxisVector.field0_0x0._12_4_ ^ uVar14;
    local_440 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::XAxisVector.field0_0x0._16_8_
                               >> 0x20) ^ uVar12,
                         SUB84(UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z,0) ^ uVar11)
    ;
    local_180 = uVar29;
    uStack_178 = uVar33;
    if (((local_4a8.Data <= (FScriptContainerElement *)&local_450) &&
        ((FScriptContainerElement *)&local_450 < local_4a8.Data + (longlong)iStack_49c * 0x18)) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar17)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (local_4a0 == iStack_49c) {
      local_4a0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&local_4a8,&iStack_49c);
    }
    iVar18 = local_4a0 + 1;
    *(ulonglong *)(local_4a8.Data + (longlong)local_4a0 * 0x18) = CONCAT44(uStack_44c,local_450);
    *(ulonglong *)(local_4a8.Data + (longlong)local_4a0 * 0x18 + 8) =
         CONCAT44(uStack_444,uStack_448);
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18 + 0x10) = local_440;
    local_390 = CONCAT44(UE::Math::TVector<double>::YAxisVector.field0_0x0._4_4_,
                         UE::Math::TVector<double>::YAxisVector.field0_0x0._0_4_);
    uStack_388 = CONCAT44(UE::Math::TVector<double>::YAxisVector.field0_0x0._12_4_,
                          UE::Math::TVector<double>::YAxisVector.field0_0x0._8_4_);
    local_380 = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z;
    local_4a0 = iVar18;
    if (((local_4a8.Data <= (FScriptContainerElement *)&local_390) &&
        ((FScriptContainerElement *)&local_390 < local_4a8.Data + (longlong)iStack_49c * 0x18)) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar17)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (local_4a0 == iStack_49c) {
      local_4a0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&local_4a8,&iStack_49c);
    }
    iVar18 = local_4a0 + 1;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18) = local_390;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18 + 8) = uStack_388;
    *(double *)(local_4a8.Data + (longlong)local_4a0 * 0x18 + 0x10) = local_380;
    local_438 = UE::Math::TVector<double>::YAxisVector.field0_0x0._0_4_ ^ uVar11;
    uStack_434 = UE::Math::TVector<double>::YAxisVector.field0_0x0._4_4_ ^ uVar12;
    uStack_430 = UE::Math::TVector<double>::YAxisVector.field0_0x0._8_4_ ^ uVar13;
    uStack_42c = UE::Math::TVector<double>::YAxisVector.field0_0x0._12_4_ ^ uVar14;
    local_428 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::YAxisVector.field0_0x0._16_8_
                               >> 0x20) ^ uVar12,
                         SUB84(UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z,0) ^ uVar11)
    ;
    local_4a0 = iVar18;
    if (((local_4a8.Data <= (FScriptContainerElement *)&local_438) &&
        ((FScriptContainerElement *)&local_438 < local_4a8.Data + (longlong)iStack_49c * 0x18)) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar17)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (local_4a0 == iStack_49c) {
      local_4a0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&local_4a8,&iStack_49c);
    }
    iVar18 = local_4a0 + 1;
    *(ulonglong *)(local_4a8.Data + (longlong)local_4a0 * 0x18) = CONCAT44(uStack_434,local_438);
    *(ulonglong *)(local_4a8.Data + (longlong)local_4a0 * 0x18 + 8) =
         CONCAT44(uStack_42c,uStack_430);
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18 + 0x10) = local_428;
    local_378 = CONCAT44(UE::Math::TVector<double>::ZAxisVector.field0_0x0._4_4_,
                         UE::Math::TVector<double>::ZAxisVector.field0_0x0._0_4_);
    uStack_370 = CONCAT44(UE::Math::TVector<double>::ZAxisVector.field0_0x0._12_4_,
                          UE::Math::TVector<double>::ZAxisVector.field0_0x0._8_4_);
    local_368 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
    local_4a0 = iVar18;
    if (((local_4a8.Data <= (FScriptContainerElement *)&local_378) &&
        ((FScriptContainerElement *)&local_378 < local_4a8.Data + (longlong)iStack_49c * 0x18)) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar17)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (local_4a0 == iStack_49c) {
      local_4a0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&local_4a8,&iStack_49c);
    }
    iVar18 = local_4a0 + 1;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18) = local_378;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18 + 8) = uStack_370;
    *(double *)(local_4a8.Data + (longlong)local_4a0 * 0x18 + 0x10) = local_368;
    local_480 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._0_4_ ^ uVar11;
    uStack_47c = UE::Math::TVector<double>::ZAxisVector.field0_0x0._4_4_ ^ uVar12;
    uStack_478 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._8_4_ ^ uVar13;
    uStack_474 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._12_4_ ^ uVar14;
    local_470 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::ZAxisVector.field0_0x0._16_8_
                               >> 0x20) ^ uVar12,
                         SUB84(UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z,0) ^ uVar11)
    ;
    local_4a0 = iVar18;
    if (((local_4a8.Data <= (FScriptContainerElement *)&local_480) &&
        ((FScriptContainerElement *)&local_480 < local_4a8.Data + (longlong)iStack_49c * 0x18)) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar17)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (local_4a0 == iStack_49c) {
      local_4a0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&local_4a8,&iStack_49c);
    }
    *(ulonglong *)(local_4a8.Data + (longlong)local_4a0 * 0x18) = CONCAT44(uStack_47c,local_480);
    *(ulonglong *)(local_4a8.Data + (longlong)local_4a0 * 0x18 + 8) =
         CONCAT44(uStack_474,uStack_478);
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18 + 0x10) = local_470;
    local_4a0 = local_4a0 + 1;
  }
  uVar33 = __real_bfe279a74590331d;
  uVar26 = ___xmm_3fe279a74590331d3fe279a74590331d;
  uVar29 = _UNK_150a9e5c8;
  uVar31 = ___xmm_bfe279a74590331dbfe279a74590331d;
  uVar32 = _UNK_15291a4d8;
  uVar27 = ___xmm_3fe279a74590331dbfe279a74590331d;
  uVar30 = _UNK_15291a468;
  uVar34 = ___xmm_bfe279a74590331d3fe279a74590331d;
  uVar35 = _UNK_15291a4c8;
  if (param_3->bViewFromUpperCorners != false) {
    local_350 = __real_bfe279a74590331d;
    local_360 = ___xmm_3fe279a74590331d3fe279a74590331d;
    uStack_358 = _UNK_150a9e5c8;
    if (((local_4a8.Data <= (FScriptContainerElement *)&local_360) &&
        ((FScriptContainerElement *)&local_360 < local_4a8.Data + (longlong)iStack_49c * 0x18)) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar17)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (local_4a0 == iStack_49c) {
      local_4a0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&local_4a8,&iStack_49c);
    }
    uVar30 = _UNK_15291a468;
    uVar27 = ___xmm_3fe279a74590331dbfe279a74590331d;
    uVar29 = _UNK_150a9e5c8;
    uVar26 = ___xmm_3fe279a74590331d3fe279a74590331d;
    iVar18 = local_4a0 + 1;
    local_338 = uVar33;
    local_348 = ___xmm_3fe279a74590331dbfe279a74590331d;
    uStack_340 = _UNK_15291a468;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18) = local_360;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18 + 8) = uStack_358;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18 + 0x10) = local_350;
    local_4a0 = iVar18;
    if (((local_4a8.Data <= (FScriptContainerElement *)&local_348) &&
        ((FScriptContainerElement *)&local_348 < local_4a8.Data + (longlong)iStack_49c * 0x18)) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), uVar26 = ___xmm_3fe279a74590331d3fe279a74590331d,
       uVar29 = _UNK_150a9e5c8, uVar27 = ___xmm_3fe279a74590331dbfe279a74590331d,
       uVar30 = _UNK_15291a468, bVar17)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (local_4a0 == iStack_49c) {
      local_4a0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&local_4a8,&iStack_49c);
      uVar26 = ___xmm_3fe279a74590331d3fe279a74590331d;
      uVar29 = _UNK_150a9e5c8;
      uVar27 = ___xmm_3fe279a74590331dbfe279a74590331d;
      uVar30 = _UNK_15291a468;
    }
    uStack_328 = _UNK_15291a4c8;
    local_330 = ___xmm_bfe279a74590331d3fe279a74590331d;
    iVar18 = local_4a0 + 1;
    local_320 = uVar33;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18) = local_348;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18 + 8) = uStack_340;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18 + 0x10) = local_338;
    uVar34 = local_330;
    uVar35 = uStack_328;
    local_4a0 = iVar18;
    if (((local_4a8.Data <= (FScriptContainerElement *)&local_330) &&
        ((FScriptContainerElement *)&local_330 < local_4a8.Data + (longlong)iStack_49c * 0x18)) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), uVar26 = ___xmm_3fe279a74590331d3fe279a74590331d,
       uVar29 = _UNK_150a9e5c8, uVar27 = ___xmm_3fe279a74590331dbfe279a74590331d,
       uVar30 = _UNK_15291a468, uVar34 = ___xmm_bfe279a74590331d3fe279a74590331d,
       uVar35 = _UNK_15291a4c8, bVar17)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (local_4a0 == iStack_49c) {
      local_4a0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&local_4a8,&iStack_49c);
      uVar26 = ___xmm_3fe279a74590331d3fe279a74590331d;
      uVar29 = _UNK_150a9e5c8;
      uVar27 = ___xmm_3fe279a74590331dbfe279a74590331d;
      uVar30 = _UNK_15291a468;
      uVar34 = ___xmm_bfe279a74590331d3fe279a74590331d;
      uVar35 = _UNK_15291a4c8;
    }
    uStack_310 = _UNK_15291a4d8;
    local_318 = ___xmm_bfe279a74590331dbfe279a74590331d;
    iVar18 = local_4a0 + 1;
    local_308 = uVar33;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18) = local_330;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18 + 8) = uStack_328;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18 + 0x10) = local_320;
    uVar31 = local_318;
    uVar32 = uStack_310;
    local_4a0 = iVar18;
    if (((local_4a8.Data <= (FScriptContainerElement *)&local_318) &&
        ((FScriptContainerElement *)&local_318 < local_4a8.Data + (longlong)iStack_49c * 0x18)) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), uVar26 = ___xmm_3fe279a74590331d3fe279a74590331d,
       uVar29 = _UNK_150a9e5c8, uVar31 = ___xmm_bfe279a74590331dbfe279a74590331d,
       uVar32 = _UNK_15291a4d8, uVar27 = ___xmm_3fe279a74590331dbfe279a74590331d,
       uVar30 = _UNK_15291a468, uVar34 = ___xmm_bfe279a74590331d3fe279a74590331d,
       uVar35 = _UNK_15291a4c8, bVar17)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (local_4a0 == iStack_49c) {
      local_4a0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&local_4a8,&iStack_49c);
      uVar26 = ___xmm_3fe279a74590331d3fe279a74590331d;
      uVar29 = _UNK_150a9e5c8;
      uVar31 = ___xmm_bfe279a74590331dbfe279a74590331d;
      uVar32 = _UNK_15291a4d8;
      uVar27 = ___xmm_3fe279a74590331dbfe279a74590331d;
      uVar30 = _UNK_15291a468;
      uVar34 = ___xmm_bfe279a74590331d3fe279a74590331d;
      uVar35 = _UNK_15291a4c8;
    }
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18) = local_318;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18 + 8) = uStack_310;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18 + 0x10) = local_308;
    local_4a0 = local_4a0 + 1;
  }
  uVar33 = __real_3fe279a74590331d;
  if (param_3->bViewFromLowerCorners != false) {
    local_2f0 = __real_3fe279a74590331d;
    local_300 = uVar26;
    uStack_2f8 = uVar29;
    if (((local_4a8.Data <= (FScriptContainerElement *)&local_300) &&
        ((FScriptContainerElement *)&local_300 < local_4a8.Data + (longlong)iStack_49c * 0x18)) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), uVar31 = ___xmm_bfe279a74590331dbfe279a74590331d,
       uVar32 = _UNK_15291a4d8, uVar27 = ___xmm_3fe279a74590331dbfe279a74590331d,
       uVar30 = _UNK_15291a468, uVar34 = ___xmm_bfe279a74590331d3fe279a74590331d,
       uVar35 = _UNK_15291a4c8, bVar17)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_2e8 = uVar27;
    uStack_2e0 = uVar30;
    if (local_4a0 == iStack_49c) {
      local_4a0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&local_4a8,&iStack_49c);
      uVar31 = ___xmm_bfe279a74590331dbfe279a74590331d;
      uVar32 = _UNK_15291a4d8;
      local_2e8 = ___xmm_3fe279a74590331dbfe279a74590331d;
      uStack_2e0 = _UNK_15291a468;
      uVar34 = ___xmm_bfe279a74590331d3fe279a74590331d;
      uVar35 = _UNK_15291a4c8;
    }
    iVar18 = local_4a0 + 1;
    local_2d8 = uVar33;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18) = local_300;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18 + 8) = uStack_2f8;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18 + 0x10) = local_2f0;
    local_4a0 = iVar18;
    if (((local_4a8.Data <= (FScriptContainerElement *)&local_2e8) &&
        ((FScriptContainerElement *)&local_2e8 < local_4a8.Data + (longlong)iStack_49c * 0x18)) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), uVar31 = ___xmm_bfe279a74590331dbfe279a74590331d,
       uVar32 = _UNK_15291a4d8, uVar34 = ___xmm_bfe279a74590331d3fe279a74590331d,
       uVar35 = _UNK_15291a4c8, bVar17)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_2d0 = uVar34;
    uStack_2c8 = uVar35;
    if (local_4a0 == iStack_49c) {
      local_4a0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&local_4a8,&iStack_49c);
      uVar31 = ___xmm_bfe279a74590331dbfe279a74590331d;
      uVar32 = _UNK_15291a4d8;
      local_2d0 = ___xmm_bfe279a74590331d3fe279a74590331d;
      uStack_2c8 = _UNK_15291a4c8;
    }
    iVar18 = local_4a0 + 1;
    local_2c0 = uVar33;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18) = local_2e8;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18 + 8) = uStack_2e0;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18 + 0x10) = local_2d8;
    local_4a0 = iVar18;
    if (((local_4a8.Data <= (FScriptContainerElement *)&local_2d0) &&
        ((FScriptContainerElement *)&local_2d0 < local_4a8.Data + (longlong)iStack_49c * 0x18)) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), uVar31 = ___xmm_bfe279a74590331dbfe279a74590331d,
       uVar32 = _UNK_15291a4d8, bVar17)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_2b8 = uVar31;
    uStack_2b0 = uVar32;
    if (local_4a0 == iStack_49c) {
      local_4a0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&local_4a8,&iStack_49c);
      local_2b8 = ___xmm_bfe279a74590331dbfe279a74590331d;
      uStack_2b0 = _UNK_15291a4d8;
    }
    iVar18 = local_4a0 + 1;
    local_2a8 = uVar33;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18) = local_2d0;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18 + 8) = uStack_2c8;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18 + 0x10) = local_2c0;
    local_4a0 = iVar18;
    if (((local_4a8.Data <= (FScriptContainerElement *)&local_2b8) &&
        ((FScriptContainerElement *)&local_2b8 < local_4a8.Data + (longlong)iStack_49c * 0x18)) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar17)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (local_4a0 == iStack_49c) {
      local_4a0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&local_4a8,&iStack_49c);
    }
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18) = local_2b8;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18 + 8) = uStack_2b0;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18 + 0x10) = local_2a8;
    local_4a0 = local_4a0 + 1;
  }
  uVar26 = __real_bfe6a09e667f3bcc;
  uVar27 = ___xmm_0000000000000000bfe6a09e667f3bcc;
  uVar30 = _UNK_15291a458;
  uVar31 = ___xmm_3fe6a09e667f3bcc0000000000000000;
  uVar32 = _UNK_15291a478;
  uVar29 = ___xmm_00000000000000003fe6a09e667f3bcc;
  uVar33 = _UNK_15291a448;
  uVar34 = ___xmm_bfe6a09e667f3bcc0000000000000000;
  uVar35 = _UNK_15291a4e8;
  if (param_3->bViewFromUpperEdges != false) {
    local_290 = __real_bfe6a09e667f3bcc;
    local_2a0 = ___xmm_0000000000000000bfe6a09e667f3bcc;
    uStack_298 = _UNK_15291a458;
    if (((local_4a8.Data <= (FScriptContainerElement *)&local_2a0) &&
        ((FScriptContainerElement *)&local_2a0 < local_4a8.Data + (longlong)iStack_49c * 0x18)) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar17)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (local_4a0 == iStack_49c) {
      local_4a0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&local_4a8,&iStack_49c);
    }
    uVar30 = _UNK_15291a458;
    uVar27 = ___xmm_0000000000000000bfe6a09e667f3bcc;
    uVar33 = _UNK_15291a448;
    uVar29 = ___xmm_00000000000000003fe6a09e667f3bcc;
    iVar18 = local_4a0 + 1;
    local_278 = uVar26;
    local_288 = ___xmm_00000000000000003fe6a09e667f3bcc;
    uStack_280 = _UNK_15291a448;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18) = local_2a0;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18 + 8) = uStack_298;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18 + 0x10) = local_290;
    local_4a0 = iVar18;
    if (((local_4a8.Data <= (FScriptContainerElement *)&local_288) &&
        ((FScriptContainerElement *)&local_288 < local_4a8.Data + (longlong)iStack_49c * 0x18)) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), uVar27 = ___xmm_0000000000000000bfe6a09e667f3bcc,
       uVar30 = _UNK_15291a458, uVar29 = ___xmm_00000000000000003fe6a09e667f3bcc,
       uVar33 = _UNK_15291a448, bVar17)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (local_4a0 == iStack_49c) {
      local_4a0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&local_4a8,&iStack_49c);
      uVar27 = ___xmm_0000000000000000bfe6a09e667f3bcc;
      uVar30 = _UNK_15291a458;
      uVar29 = ___xmm_00000000000000003fe6a09e667f3bcc;
      uVar33 = _UNK_15291a448;
    }
    uStack_268 = _UNK_15291a4e8;
    local_270 = ___xmm_bfe6a09e667f3bcc0000000000000000;
    iVar18 = local_4a0 + 1;
    local_260 = uVar26;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18) = local_288;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18 + 8) = uStack_280;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18 + 0x10) = local_278;
    uVar34 = local_270;
    uVar35 = uStack_268;
    local_4a0 = iVar18;
    if (((local_4a8.Data <= (FScriptContainerElement *)&local_270) &&
        ((FScriptContainerElement *)&local_270 < local_4a8.Data + (longlong)iStack_49c * 0x18)) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), uVar27 = ___xmm_0000000000000000bfe6a09e667f3bcc,
       uVar30 = _UNK_15291a458, uVar29 = ___xmm_00000000000000003fe6a09e667f3bcc,
       uVar33 = _UNK_15291a448, uVar34 = ___xmm_bfe6a09e667f3bcc0000000000000000,
       uVar35 = _UNK_15291a4e8, bVar17)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (local_4a0 == iStack_49c) {
      local_4a0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&local_4a8,&iStack_49c);
      uVar27 = ___xmm_0000000000000000bfe6a09e667f3bcc;
      uVar30 = _UNK_15291a458;
      uVar29 = ___xmm_00000000000000003fe6a09e667f3bcc;
      uVar33 = _UNK_15291a448;
      uVar34 = ___xmm_bfe6a09e667f3bcc0000000000000000;
      uVar35 = _UNK_15291a4e8;
    }
    uStack_250 = _UNK_15291a478;
    local_258 = ___xmm_3fe6a09e667f3bcc0000000000000000;
    iVar18 = local_4a0 + 1;
    local_248 = uVar26;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18) = local_270;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18 + 8) = uStack_268;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18 + 0x10) = local_260;
    uVar31 = local_258;
    uVar32 = uStack_250;
    local_4a0 = iVar18;
    if (((local_4a8.Data <= (FScriptContainerElement *)&local_258) &&
        ((FScriptContainerElement *)&local_258 < local_4a8.Data + (longlong)iStack_49c * 0x18)) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), uVar27 = ___xmm_0000000000000000bfe6a09e667f3bcc,
       uVar30 = _UNK_15291a458, uVar31 = ___xmm_3fe6a09e667f3bcc0000000000000000,
       uVar32 = _UNK_15291a478, uVar29 = ___xmm_00000000000000003fe6a09e667f3bcc,
       uVar33 = _UNK_15291a448, uVar34 = ___xmm_bfe6a09e667f3bcc0000000000000000,
       uVar35 = _UNK_15291a4e8, bVar17)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (local_4a0 == iStack_49c) {
      local_4a0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&local_4a8,&iStack_49c);
      uVar27 = ___xmm_0000000000000000bfe6a09e667f3bcc;
      uVar30 = _UNK_15291a458;
      uVar31 = ___xmm_3fe6a09e667f3bcc0000000000000000;
      uVar32 = _UNK_15291a478;
      uVar29 = ___xmm_00000000000000003fe6a09e667f3bcc;
      uVar33 = _UNK_15291a448;
      uVar34 = ___xmm_bfe6a09e667f3bcc0000000000000000;
      uVar35 = _UNK_15291a4e8;
    }
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18) = local_258;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18 + 8) = uStack_250;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18 + 0x10) = local_248;
    local_4a0 = local_4a0 + 1;
  }
  uVar26 = __real_3fe6a09e667f3bcc;
  if (param_3->bViewFromLowerEdges != false) {
    local_230 = __real_3fe6a09e667f3bcc;
    local_240 = uVar27;
    uStack_238 = uVar30;
    if (((local_4a8.Data <= (FScriptContainerElement *)&local_240) &&
        ((FScriptContainerElement *)&local_240 < local_4a8.Data + (longlong)iStack_49c * 0x18)) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), uVar31 = ___xmm_3fe6a09e667f3bcc0000000000000000,
       uVar32 = _UNK_15291a478, uVar29 = ___xmm_00000000000000003fe6a09e667f3bcc,
       uVar33 = _UNK_15291a448, uVar34 = ___xmm_bfe6a09e667f3bcc0000000000000000,
       uVar35 = _UNK_15291a4e8, bVar17)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_228 = uVar29;
    uStack_220 = uVar33;
    if (local_4a0 == iStack_49c) {
      local_4a0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&local_4a8,&iStack_49c);
      uVar31 = ___xmm_3fe6a09e667f3bcc0000000000000000;
      uVar32 = _UNK_15291a478;
      local_228 = ___xmm_00000000000000003fe6a09e667f3bcc;
      uStack_220 = _UNK_15291a448;
      uVar34 = ___xmm_bfe6a09e667f3bcc0000000000000000;
      uVar35 = _UNK_15291a4e8;
    }
    iVar18 = local_4a0 + 1;
    local_218 = uVar26;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18) = local_240;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18 + 8) = uStack_238;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18 + 0x10) = local_230;
    local_4a0 = iVar18;
    if (((local_4a8.Data <= (FScriptContainerElement *)&local_228) &&
        ((FScriptContainerElement *)&local_228 < local_4a8.Data + (longlong)iStack_49c * 0x18)) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), uVar31 = ___xmm_3fe6a09e667f3bcc0000000000000000,
       uVar32 = _UNK_15291a478, uVar34 = ___xmm_bfe6a09e667f3bcc0000000000000000,
       uVar35 = _UNK_15291a4e8, bVar17)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_420 = uVar34;
    uStack_418 = uVar35;
    if (local_4a0 == iStack_49c) {
      local_4a0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&local_4a8,&iStack_49c);
      uVar31 = ___xmm_3fe6a09e667f3bcc0000000000000000;
      uVar32 = _UNK_15291a478;
      local_420 = ___xmm_bfe6a09e667f3bcc0000000000000000;
      uStack_418 = _UNK_15291a4e8;
    }
    iVar18 = local_4a0 + 1;
    local_410 = uVar26;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18) = local_228;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18 + 8) = uStack_220;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18 + 0x10) = local_218;
    local_4a0 = iVar18;
    if (((local_4a8.Data <= (FScriptContainerElement *)&local_420) &&
        ((FScriptContainerElement *)&local_420 < local_4a8.Data + (longlong)iStack_49c * 0x18)) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), uVar31 = ___xmm_3fe6a09e667f3bcc0000000000000000,
       uVar32 = _UNK_15291a478, bVar17)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_408 = uVar31;
    uStack_400 = uVar32;
    if (local_4a0 == iStack_49c) {
      local_4a0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&local_4a8,&iStack_49c);
      local_408 = ___xmm_3fe6a09e667f3bcc0000000000000000;
      uStack_400 = _UNK_15291a478;
    }
    iVar18 = local_4a0 + 1;
    local_3f8 = uVar26;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18) = local_420;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18 + 8) = uStack_418;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18 + 0x10) = local_410;
    local_4a0 = iVar18;
    if (((local_4a8.Data <= (FScriptContainerElement *)&local_408) &&
        ((FScriptContainerElement *)&local_408 < local_4a8.Data + (longlong)iStack_49c * 0x18)) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar17)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (local_4a0 == iStack_49c) {
      local_4a0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&local_4a8,&iStack_49c);
    }
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18) = local_408;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18 + 8) = uStack_400;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18 + 0x10) = local_3f8;
    local_4a0 = local_4a0 + 1;
  }
  if (param_3->bViewFromSideEdges != false) {
    local_3e0 = 0;
    local_3f0 = ___xmm_3fe6a09e667f3bcc3fe6a09e667f3bcc;
    uStack_3e8 = _UNK_15291a488;
    if (((local_4a8.Data <= (FScriptContainerElement *)&local_3f0) &&
        ((FScriptContainerElement *)&local_3f0 < local_4a8.Data + (longlong)iStack_49c * 0x18)) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar17)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (local_4a0 == iStack_49c) {
      local_4a0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&local_4a8,&iStack_49c);
    }
    iVar18 = local_4a0 + 1;
    local_3c8 = 0;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18) = local_3f0;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18 + 8) = uStack_3e8;
    uStack_3d0 = _UNK_15291a498;
    local_3d8 = ___xmm_3fe6a09e667f3bccbfe6a09e667f3bcc;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18 + 0x10) = local_3e0;
    local_4a0 = iVar18;
    if (((local_4a8.Data <= (FScriptContainerElement *)&local_3d8) &&
        ((FScriptContainerElement *)&local_3d8 < local_4a8.Data + (longlong)iStack_49c * 0x18)) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar17)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (local_4a0 == iStack_49c) {
      local_4a0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&local_4a8,&iStack_49c);
    }
    iVar18 = local_4a0 + 1;
    local_3b0 = 0;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18) = local_3d8;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18 + 8) = uStack_3d0;
    uStack_3b8 = _UNK_15291a4f8;
    local_3c0 = ___xmm_bfe6a09e667f3bcc3fe6a09e667f3bcc;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18 + 0x10) = local_3c8;
    local_4a0 = iVar18;
    if (((local_4a8.Data <= (FScriptContainerElement *)&local_3c0) &&
        ((FScriptContainerElement *)&local_3c0 < local_4a8.Data + (longlong)iStack_49c * 0x18)) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar17)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (local_4a0 == iStack_49c) {
      local_4a0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&local_4a8,&iStack_49c);
    }
    iVar18 = local_4a0 + 1;
    local_398 = 0;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18) = local_3c0;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18 + 8) = uStack_3b8;
    uStack_3a0 = _UNK_15291a508;
    local_3a8 = ___xmm_bfe6a09e667f3bccbfe6a09e667f3bcc;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18 + 0x10) = local_3b0;
    local_4a0 = iVar18;
    if (((local_4a8.Data <= (FScriptContainerElement *)&local_3a8) &&
        ((FScriptContainerElement *)&local_3a8 < local_4a8.Data + (longlong)iStack_49c * 0x18)) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar17)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (local_4a0 == iStack_49c) {
      local_4a0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&local_4a8,&iStack_49c);
    }
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18) = local_3a8;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18 + 8) = uStack_3a0;
    *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18 + 0x10) = local_398;
    local_4a0 = local_4a0 + 1;
  }
  dVar10 = __real_3e45798ee2308c3a;
  dVar9 = __real_3ff0000000000000;
  iVar18 = (param_3->ExtraViewFromPositions).ArrayNum;
  pFVar22 = (FFormatArgumentValue_u_8 *)(param_3->ExtraViewFromPositions).AllocatorInstance.Data;
  pFVar1 = pFVar22 + (longlong)iVar18 * 3;
  while( true ) {
    if ((param_3->ExtraViewFromPositions).ArrayNum != iVar18) {
      local_498 = 0;
      `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_498);
    }
    pTVar16 = local_210;
    iVar15 = local_4a0;
    if (pFVar22 == pFVar1) break;
    FVar6 = (FFormatArgumentValue_u_8)pFVar22->DoubleValue;
    dVar28 = pFVar22[1].DoubleValue;
    dVar3 = pFVar22[2].DoubleValue;
    dVar25 = FVar6.DoubleValue * FVar6.DoubleValue + dVar28 * dVar28 + dVar3 * dVar3;
    local_158 = dVar3;
    if (dVar25 <= dVar10) {
      pFVar19 = FText::AsLocalizable_Advanced_LocText
                          (&local_190,L"UGeometryScriptLibrary_MeshSamplingFunctions",
                           L"ComputeRenderCaptureCamerasForBox",
                           L"ComputeRenderCaptureCamerasForBox: Unable to normalize view direction for position ({0}, {1}, {2})"
                          );
      pFVar20 = FTextFormat::FTextFormat(&local_150,pFVar19,Default);
      local_138.TextValue.field0_0x0.TypedValue.TextData.Reference =
           (TRefCountPtr<ITextData>)(ITextData *)0x0;
      local_138.TextValue.field0_0x0.TypedValue.Flags = 0;
      local_108 = (longlong *)0x0;
      local_100 = 0;
      local_e8 = (longlong *)0x0;
      local_e0 = 0;
      local_490.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_138.Type = Double;
      local_118 = 3;
      local_f8 = 3;
      local_490.ArrayNum = 3;
      local_138.field1_0x8 = FVar6;
      local_110 = dVar28;
      local_f0 = dVar3;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,3,0,&local_490.AllocatorInstance,3,&local_490.ArrayMax);
      ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                (local_490.AllocatorInstance.Data,&local_138,3);
      local_1b8.TextFormatData.Object = (pFVar20->TextFormatData).Object;
      local_1b8.TextFormatData.SharedReferenceCount.ReferenceController =
           (pFVar20->TextFormatData).SharedReferenceCount.ReferenceController;
      if (local_1b8.TextFormatData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_1b8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1b8.TextFormatData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      FText::Format(&local_1a8,&local_1b8,&local_490);
      DestructItems<FFormatArgumentValue,int>
                ((FFormatArgumentValue *)local_490.AllocatorInstance.Data,local_490.ArrayNum);
      if ((FFormatArgumentValue *)local_490.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
        FMemory::Free(local_490.AllocatorInstance.Data);
      }
      if (local_e8 != (longlong *)0x0) {
        (**(code **)(*local_e8 + 0x10))();
      }
      if (local_108 != (longlong *)0x0) {
        (**(code **)(*local_108 + 0x10))();
      }
      if (local_138.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_138.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar20->TextFormatData).SharedReferenceCount.ReferenceController);
      if (local_190.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_190.TextData.Reference + 0x10))();
      }
      UE::Geometry::AppendWarning(param_4,InvalidInputs,&local_1a8);
      if (local_1a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1a8.TextData.Reference + 0x10))();
      }
      pFVar22 = pFVar22 + 3;
    }
    else {
      local_198 = dVar9 / SQRT(dVar25);
      local_468 = CONCAT44((uint)((ulonglong)(FVar6.DoubleValue * local_198) >> 0x20) ^ uVar12,
                           SUB84(FVar6.DoubleValue * local_198,0) ^ uVar11);
      uStack_460 = CONCAT44((uint)((ulonglong)(dVar28 * local_198) >> 0x20) ^ uVar12,
                            SUB84(dVar28 * local_198,0) ^ uVar11);
      local_458 = CONCAT44((uint)((ulonglong)(dVar3 * local_198) >> 0x20) ^ uVar12,
                           SUB84(dVar3 * local_198,0) ^ uVar11);
      if (((local_4a8.Data <= (FScriptContainerElement *)&local_468) &&
          ((FScriptContainerElement *)&local_468 < local_4a8.Data + (longlong)iStack_49c * 0x18)) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar17)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (local_4a0 == iStack_49c) {
        local_4a0 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&local_4a8,&iStack_49c);
      }
      pFVar22 = pFVar22 + 3;
      *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18) = local_468;
      *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18 + 8) = uStack_460;
      *(undefined8 *)(local_4a8.Data + (longlong)local_4a0 * 0x18 + 0x10) = local_458;
      local_4a0 = local_4a0 + 1;
    }
  }
  dVar28 = (local_210->Max).field0_0x0._s_0.Y - (local_210->Min).field0_0x0._s_0.Y;
  dVar3 = (local_210->Max).field0_0x0._s_0.X - (local_210->Min).field0_0x0._s_0.X;
  dVar25 = (local_210->Max).field0_0x0._s_0.Z - (local_210->Min).field0_0x0._s_0.Z;
  auVar36._0_8_ = (dVar28 * dVar28 + dVar3 * dVar3 + dVar25 * dVar25) * __real_3fd0000000000000;
  auVar36._8_8_ = 0;
  auVar36 = sqrtpd(unaff_XMM11,auVar36);
  fVar24 = tanf((float)param_3->FieldOfViewDegrees * __real_3c0efa35);
  uVar12 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar11 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar3 = __real_3fe0000000000000;
  pFVar2 = local_4a8.Data + (longlong)iVar15 * 0x18;
  FVar23.Data = local_4a8.Data;
  iVar18 = iVar15;
  while( true ) {
    if (iVar18 != iVar15) {
      local_497[0] = 0;
      `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_497);
    }
    if (FVar23.Data == pFVar2) {
      if (local_4a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4a8.Data);
      }
      return;
    }
    dVar7 = *(double *)FVar23.Data;
    dVar8 = *(double *)(FVar23.Data + 8);
    dVar25 = *(double *)(FVar23.Data + 0x10);
    dVar28 = (dVar7 * dVar7 + dVar8 * dVar8 + dVar25 * dVar25) - dVar9;
    local_158 = dVar25;
    if ((dVar10 <= (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) & uVar12,
                                    SUB84(dVar28,0) & uVar11)) &&
       (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_1542318877638131407>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryScripting\\Source\\GeometryScriptingCore\\Private\\MeshSamplingFunctions.cpp"
                            ,0x131,"IsNormalized(ViewDirection)"), bVar17)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_208 = param_3->Resolution;
    pFVar4 = (param_1->AllocatorInstance).Data;
    if (local_208 < 1) {
      local_208 = 1;
    }
    dVar28 = (double)(float)(auVar36._0_8_ / (double)fVar24);
    local_1c8 = dVar28 - auVar36._0_8_;
    dStack_200 = param_3->FieldOfViewDegrees;
    local_1f8 = ((pTVar16->Min).field0_0x0._s_0.X + (pTVar16->Max).field0_0x0._s_0.X) * dVar3 -
                dVar28 * dVar7;
    dStack_1f0 = ((pTVar16->Max).field0_0x0._s_0.Y + (pTVar16->Min).field0_0x0._s_0.Y) * dVar3 -
                 dVar28 * dVar8;
    local_1e8 = ((pTVar16->Max).field0_0x0._s_0.Z + (pTVar16->Min).field0_0x0._s_0.Z) * dVar3 -
                dVar28 * dVar25;
    dStack_1e0 = dVar7;
    dStack_1d8 = dVar8;
    dStack_1d0 = dVar25;
    if (((pFVar4 <= (FScriptContainerElement *)&local_208) &&
        ((FScriptContainerElement *)&local_208 < pFVar4 + (longlong)param_1->ArrayMax * 0x48)) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar17)) break;
    iVar18 = param_1->ArrayNum;
    if (iVar18 == param_1->ArrayMax) {
      iVar18 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x848,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar18 + 1;
    FVar23.Data = FVar23.Data + 0x18;
    lVar21 = (longlong)iVar18;
    pFVar4 = (param_1->AllocatorInstance).Data;
    *(ulonglong *)(pFVar4 + lVar21 * 0x48) = CONCAT44(uStack_204,local_208);
    *(double *)(pFVar4 + lVar21 * 0x48 + 8) = dStack_200;
    *(double *)(pFVar4 + lVar21 * 0x48 + 0x10) = local_1f8;
    *(double *)(pFVar4 + lVar21 * 0x48 + 0x10 + 8) = dStack_1f0;
    *(double *)(pFVar4 + lVar21 * 0x48 + 0x20) = local_1e8;
    *(double *)(pFVar4 + lVar21 * 0x48 + 0x20 + 8) = dStack_1e0;
    *(double *)(pFVar4 + lVar21 * 0x48 + 0x30) = dStack_1d8;
    *(double *)(pFVar4 + lVar21 * 0x48 + 0x30 + 8) = dStack_1d0;
    *(double *)(pFVar4 + lVar21 * 0x48 + 0x40) = local_1c8;
    iVar18 = local_4a0;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// ComputeRenderCapturePointSampling @ 14ce63930

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshSamplingFunctions::ComputeRenderCapturePointSampling
          (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FGeometryScriptRenderCaptureCamera,TSizedDefaultAllocator<32>_> *param_3,
          UGeometryScriptDebug *param_4)

{
  int *piVar1;
  code *pcVar2;
  double dVar3;
  ulonglong uVar4;
  double dVar5;
  TUniquePtr<UE::Geometry::FSceneCapturePhotoSet,TDefaultDelete<UE::Geometry::FSceneCapturePhotoSet>_>
  TVar6;
  bool bVar7;
  int iVar8;
  FSceneCapturePhotoSet *this;
  UWorld *pUVar9;
  longlong lVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  ForAnyElementType FVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  bool bVar16;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  <lambda_1> local_res10 [8];
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_288;
  TArray<UE::Geometry::FSpatialPhotoParams,TSizedDefaultAllocator<32>_> local_278;
  TUniquePtr<UE::Geometry::FSceneCapturePhotoSet,TDefaultDelete<UE::Geometry::FSceneCapturePhotoSet>_>
  local_268;
  TArray<UE::Geometry::TFrame3<float>,TSizedDefaultAllocator<32>_> local_260;
  TVector<double>_u_0 local_248;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  int local_1f8;
  int iStack_1f4;
  <lambda_2> local_1f0;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_1e8;
  TArray<UE::Geometry::TFrame3<float>,TSizedDefaultAllocator<32>_> *local_1e0;
  TArrayView<std::nullptr_t,int> local_1d8;
  code *local_1c8;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> **local_1c0;
  TQuaternion<double>_u_0 local_1b8;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_180;
  TVector<double>_u_0 local_168;
  TQuaternion<double>_u_0 local_150;
  TVector<double>_u_0 local_130;
  FSceneSamples local_118 [2];
  
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId326,"GS_ComputeRenderCapturePointSampling",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryScripting\\Source\\GeometryScriptingCore\\Private\\MeshSamplingFunctions.cpp"
               ,0x146);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId326);
  }
  pFVar15 = (param_2->AllocatorInstance).Data;
  FVar13.Data = (FScriptContainerElement *)0x0;
  iVar11 = 0;
  local_288.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_288.ArrayNum = 0;
  local_288.ArrayMax = 0;
  pFVar12 = pFVar15 + (longlong)param_2->ArrayNum * 8;
  if (pFVar15 != pFVar12) {
    do {
      if (*(longlong *)pFVar15 != 0) {
        iVar8 = iVar11;
        if ((FVar13.Data <= pFVar15) && (pFVar15 < FVar13.Data + (longlong)local_288.ArrayMax * 8))
        {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar7) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          FVar13.Data = local_288.AllocatorInstance.Data;
          iVar8 = local_288.ArrayNum;
        }
        if (iVar8 == local_288.ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_288.AllocatorInstance,&local_288.ArrayMax);
          FVar13.Data = local_288.AllocatorInstance.Data;
        }
        iVar11 = iVar8 + 1;
        local_288.ArrayNum = iVar11;
        *(longlong *)(FVar13.Data + (longlong)iVar8 * 8) = *(longlong *)pFVar15;
        FVar13.Data = local_288.AllocatorInstance.Data;
      }
      pFVar15 = pFVar15 + 8;
    } while (pFVar15 != pFVar12);
    if (iVar11 != 0) {
      this = ::operator_new(0x138);
      if (this == (FSceneCapturePhotoSet *)0x0) {
        local_268.Ptr = (FSceneCapturePhotoSet *)0x0;
      }
      else {
        local_268.Ptr = UE::Geometry::FSceneCapturePhotoSet::FSceneCapturePhotoSet(this);
      }
      local_1f0.SceneCapture = &local_268;
      UE::Geometry::
      ForEachCaptureType<_UGeometryScriptLibrary_MeshSamplingFunctions::ComputeRenderCapturePointSampling_::__l6::<lambda_2>_>
                (&local_1f0);
      TVar6.Ptr = local_268.Ptr;
      if ((local_288.ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar9 = AActor::GetWorld(*(AActor **)local_288.AllocatorInstance.Data);
      UE::Geometry::FSceneCapturePhotoSet::SetCaptureSceneActors(TVar6.Ptr,pUVar9,&local_288);
      dVar5 = __real_3ff0000000000000;
      iVar11 = param_3->ArrayNum;
      pFVar15 = (param_3->AllocatorInstance).Data;
      uVar23 = SUB84(__real_3ff0000000000000,0);
      uVar4 = (ulonglong)__real_3ff0000000000000 >> 0x20;
      pFVar12 = pFVar15 + (longlong)iVar11 * 0x48;
      local_278.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_278.ArrayNum = 0;
      local_278.ArrayMax = 0;
      while( true ) {
        if (param_3->ArrayNum != iVar11) {
          local_res10[0] = (<lambda_1>)0x0;
          `TCheckedPointerIterator<FGeometryScriptRenderCaptureCamera_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_res10);
        }
        if (pFVar15 == pFVar12) break;
        local_208 = *(undefined8 *)(pFVar15 + 8);
        local_248._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_248._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        iVar8 = *(int *)pFVar15;
        if (*(int *)pFVar15 < 1) {
          iVar8 = 1;
        }
        local_248._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_228 = 0.0;
        dStack_220 = 0.0;
        dStack_210 = *(double *)(pFVar15 + 0x40);
        dStack_230 = 0.0;
        local_218 = dVar5;
        uStack_200 = 0;
        uVar21 = uVar23;
        uVar22 = (int)uVar4;
        if (iVar8 < 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("WidthIn >= 0 && HeightIn >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Image\\ImageDimensions.h"
                             ,0x20,L"");
          if (bVar7) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar21 = SUB84(local_218,0);
          uVar22 = (undefined4)((ulonglong)local_218 >> 0x20);
        }
        dVar17 = dStack_220 + dStack_220;
        uStack_200 = CONCAT44(iVar8,iVar8);
        local_1b8._s_0.X = 0.0;
        dVar18 = local_228 + local_228;
        local_1b8._s_0.W = dVar5;
        local_1b8._s_0.Y = 0.0;
        local_1b8._s_0.Z = 0.0;
        local_198._s_0.X = dVar5 - (dVar17 * dStack_220 + dVar18 * local_228);
        local_198._s_0.Y = dVar17 * (double)CONCAT44(uVar22,uVar21) + dVar18 * dStack_230;
        local_198._s_0.Z = dVar17 * dStack_230 - dVar18 * (double)CONCAT44(uVar22,uVar21);
        local_1f8 = iVar8;
        iStack_1f4 = iVar8;
        UE::Geometry::TQuaternion<double>::SetFromTo
                  ((TQuaternion<double> *)&local_1b8._s_0,(TVector<double> *)&local_198._s_0,
                   (TVector<double> *)(pFVar15 + 0x28));
        UE::Geometry::TFrame3<double>::Rotate
                  ((TFrame3<double> *)&local_248._s_0,(TQuaternion<double> *)&local_1b8._s_0);
        dVar20 = dStack_220 + dStack_220;
        dVar19 = local_228 + local_228;
        dVar18 = dVar20 * local_218 + dVar19 * dStack_230;
        local_130._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
        local_130._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
        local_130._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
        dVar3 = dVar5 - (dVar20 * dStack_220 + dVar19 * local_228);
        dVar17 = dVar20 * dStack_230 - dVar19 * local_218;
        local_168._s_0.X = dVar19 * local_218 + dVar20 * dStack_230;
        local_168._s_0.Y = dVar20 * local_228 - (dStack_230 + dStack_230) * local_218;
        local_168._s_0.Z = dVar5 - ((dStack_230 + dStack_230) * dStack_230 + dVar19 * local_228);
        local_180._s_0.X = dVar3;
        local_180._s_0.Y = dVar18;
        local_180._s_0.Z = dVar17;
        UE::Geometry::VectorUtil::PlaneAngleSignedD<double>
                  ((TVector<double> *)&local_168._s_0,(TVector<double> *)&local_130._s_0,
                   (TVector<double> *)&local_180._s_0);
        __libm_sse2_sincos_();
        local_150._s_0.Y = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * dVar18;
        local_150._s_0.X = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * dVar3;
        local_150._s_0.Z = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * dVar17;
        UE::Geometry::TFrame3<double>::Rotate
                  ((TFrame3<double> *)&local_248._s_0,(TQuaternion<double> *)&local_150._s_0);
        local_248._s_0.X = (double)*(undefined8 *)(pFVar15 + 0x10);
        local_248._s_0.Y = (double)*(undefined8 *)(pFVar15 + 0x18);
        local_248._s_0.Z = (double)*(undefined8 *)(pFVar15 + 0x20);
        if (((local_278.AllocatorInstance.Data <= &local_248) &&
            (&local_248 <
             (TVector<double>_u_0 *)
             (local_278.AllocatorInstance.Data + (longlong)local_278.ArrayMax * 0x50))) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar8 = local_278.ArrayNum;
        if (local_278.ArrayNum == local_278.ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x850,&local_278.AllocatorInstance,&local_278.ArrayMax);
        }
        local_278.ArrayNum = iVar8 + 1;
        pFVar15 = pFVar15 + 0x48;
        lVar10 = (longlong)iVar8;
        *(double *)(local_278.AllocatorInstance.Data + lVar10 * 0x50) = local_248._s_0.X;
        *(double *)(local_278.AllocatorInstance.Data + lVar10 * 0x50 + 8) = local_248._s_0.Y;
        *(double *)(local_278.AllocatorInstance.Data + lVar10 * 0x50 + 0x10) = local_248._s_0.Z;
        *(double *)(local_278.AllocatorInstance.Data + lVar10 * 0x50 + 0x10 + 8) = dStack_230;
        *(double *)(local_278.AllocatorInstance.Data + lVar10 * 0x50 + 0x20) = local_228;
        *(double *)(local_278.AllocatorInstance.Data + lVar10 * 0x50 + 0x20 + 8) = dStack_220;
        *(double *)(local_278.AllocatorInstance.Data + lVar10 * 0x50 + 0x30) = local_218;
        *(double *)(local_278.AllocatorInstance.Data + lVar10 * 0x50 + 0x30 + 8) = dStack_210;
        *(undefined8 *)(local_278.AllocatorInstance.Data + lVar10 * 0x50 + 0x40) = local_208;
        *(undefined8 *)(local_278.AllocatorInstance.Data + lVar10 * 0x50 + 0x40 + 8) = uStack_200;
      }
      UE::Geometry::FSceneCapturePhotoSet::SetSpatialPhotoParams(local_268.Ptr,&local_278);
      if ((TVector<double>_u_0 *)local_278.AllocatorInstance.Data != (TVector<double>_u_0 *)0x0) {
        FMemory::Free(local_278.AllocatorInstance.Data);
      }
      UE::Geometry::FSceneCapturePhotoSet::Compute(local_268.Ptr);
      local_118[0].WorldOrientedPoints = &local_260;
      local_118[0].WorldPoint = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)0x0;
      local_118[0].WorldNormal = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)0x0
      ;
      local_118[0].Roughness = (TArray<float,TSizedDefaultAllocator<32>_> *)0x0;
      local_118[0].Specular = (TArray<float,TSizedDefaultAllocator<32>_> *)0x0;
      local_118[0].PackedMRS = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)0x0;
      local_118[0].Emissive = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)0x0;
      local_118[0].BaseColor = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)0x0;
      local_118[0].SubsurfaceColor =
           (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)0x0;
      local_118[0].Metallic = (TArray<float,TSizedDefaultAllocator<32>_> *)0x0;
      local_118[0].Opacity = (TArray<float,TSizedDefaultAllocator<32>_> *)0x0;
      local_260.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_260.ArrayNum = 0;
      local_260.ArrayMax = 0;
      UE::Geometry::FSceneCapturePhotoSet::GetSceneSamples(local_268.Ptr,local_118);
      iVar11 = param_1->ArrayNum;
      piVar1 = &param_1->ArrayNum;
      iVar8 = local_260.ArrayNum;
      lVar10 = (longlong)local_260.ArrayNum;
      if (iVar11 < local_260.ArrayNum) {
        iVar11 = local_260.ArrayNum - iVar11;
        iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x60,0x10,iVar11,&param_1->AllocatorInstance,piVar1,&param_1->ArrayMax);
        DefaultConstructItems<UE::Math::TTransform<double>,int>
                  ((param_1->AllocatorInstance).Data + (longlong)iVar8 * 0x60,iVar11);
      }
      else {
        if (local_260.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum(local_260._8_8_ & 0xffffffff);
        }
        if (local_260.ArrayNum < iVar11) {
          uVar14 = iVar11 - local_260.ArrayNum;
          if (((int)(uVar14 | local_260.ArrayNum) < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar7)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (uVar14 != 0) {
            pFVar12 = (param_1->AllocatorInstance).Data + lVar10 * 0x60;
            iVar8 = (*piVar1 - uVar14) - iVar8;
            if (iVar8 != 0) {
              memmove(pFVar12,pFVar12 + (longlong)(int)uVar14 * 0x60,(longlong)iVar8 * 0x60);
            }
            *piVar1 = *piVar1 - uVar14;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x60,0x10,&param_1->AllocatorInstance,*piVar1,&param_1->ArrayMax);
          }
        }
      }
      local_1e0 = &local_260;
      local_1c8 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UGeometryScriptLibrary_MeshSamplingFunctions::ComputeRenderCapturePointSampling'::__l11::<lambda_3>,void,int>
                  ::Call;
      local_1c0 = &local_1e8;
      local_1d8.DataPtr = (void **)0x0;
      local_1d8.ArrayNum = 0;
      local_1e8 = param_1;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",local_260.ArrayNum,1,
                 (TFunctionRef<void___cdecl(int)> *)&local_1c8,local_res10[0],None,&local_1d8);
      if (local_260.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_260.AllocatorInstance.Data);
      }
      TVar6.Ptr = local_268.Ptr;
      FVar13.Data = local_288.AllocatorInstance.Data;
      if (local_268.Ptr != (FSceneCapturePhotoSet *)0x0) {
        UE::Geometry::FSceneCapturePhotoSet::~FSceneCapturePhotoSet(local_268.Ptr);
        ::operator_delete(TVar6.Ptr,0x138);
        FVar13.Data = local_288.AllocatorInstance.Data;
      }
    }
  }
  if (FVar13.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar13.Data);
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ComputeUniformRandomPointSampling @ 14ce64410

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSamplingFunctions::ComputeUniformRandomPointSampling
          (UDynamicMesh *param_1,int param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3,
          FGeometryScriptIndexList *param_4,int param_5,UGeometryScriptDebug *param_6)

{
  FText *pFVar1;
  undefined1 local_38 [16];
  UGeometryScriptDebug *local_28;
  int local_20;
  int local_1c;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_18;
  FGeometryScriptIndexList *local_10;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshSamplingFunctions",
                        L"ComputeUniformRandomPointSampling_InvalidInput",
                        L"ComputeUniformRandomPointSampling: TargetMesh is Null");
    UE::Geometry::AppendError(param_6,InvalidInputs,pFVar1);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_28 = param_6;
  local_1c = param_5;
  local_38._8_8_ = &local_28;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshSamplingFunctions::ComputeUniformRandomPointSampling'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
       ::Call;
  local_20 = param_2;
  local_18 = param_3;
  local_10 = param_4;
  UDynamicMesh::ProcessMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_38);
  return param_1;
}

// ComputeVertexWeightedPointSampling @ 14ce644c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSamplingFunctions::ComputeVertexWeightedPointSampling
          (UDynamicMesh *param_1,FGeometryScriptMeshPointSamplingOptions *param_2,
          FGeometryScriptNonUniformPointSamplingOptions *param_3,FGeometryScriptScalarList *param_4,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_5,
          TArray<double,TSizedDefaultAllocator<32>_> *param_6,FGeometryScriptIndexList *param_7,
          UGeometryScriptDebug *param_8)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  double dVar4;
  undefined8 uVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar14;
  bool bVar15;
  uint uVar16;
  int iVar17;
  FText *pFVar18;
  UDynamicMesh *pUVar19;
  ulonglong uVar20;
  longlong lVar21;
  char cVar22;
  uint uVar23;
  FScriptContainerElement *pFVar24;
  uint uVar25;
  bool bVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 auStack_298 [32];
  FScriptContainerElement *local_278;
  FScriptContainerElement *local_270;
  longlong local_268;
  longlong local_260;
  undefined8 local_258;
  undefined1 local_248;
  char local_247;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_240;
  UDynamicMesh *local_238;
  double local_228;
  int local_220;
  double local_218;
  int local_210;
  undefined4 local_20c;
  int local_208;
  double local_200;
  uint local_1f8;
  undefined8 local_1f0;
  undefined1 local_1e8;
  void *local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined2 local_1cc;
  undefined4 local_1c8;
  FGeometryError *local_1c0;
  undefined8 local_1b8;
  FGeometryWarning *local_1b0;
  undefined8 local_1a8;
  void *local_1a0;
  ulonglong local_198;
  void *local_190;
  undefined8 local_188;
  void *local_180;
  undefined8 local_178;
  void *local_170;
  undefined8 local_168;
  ulonglong local_158;
  FGeometryScriptScalarList *local_150;
  code *local_148;
  undefined1 **local_140;
  undefined1 *local_138;
  FGeometryScriptScalarList *local_130;
  double *local_128;
  FGeometryScriptNonUniformPointSamplingOptions *local_120;
  FText local_118 [2];
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_298;
  local_240 = param_5;
  local_238 = param_1;
  local_150 = param_4;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar18 = FText::AsLocalizable_Advanced_LocText
                        (local_118,L"UGeometryScriptLibrary_MeshSamplingFunctions",
                         L"ComputeVertexWeightedPointSampling_InvalidInput",
                         L"ComputeVertexWeightedPointSampling: TargetMesh is Null");
    UE::Geometry::AppendError(param_8,InvalidInputs,pFVar18);
    if (local_118[0].TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_118[0].TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_4->List).SharedReferenceCount.ReferenceController);
    local_238 = (UDynamicMesh *)0x0;
  }
  else {
    bVar26 = CpuChannel->Enabled < 0;
    if (bVar26) {
      local_247 = '\0';
    }
    else {
      local_247 = '\x01';
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId178,"GS_ComputeVertexWeightedPointSampling",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryScripting\\Source\\GeometryScriptingCore\\Private\\MeshSamplingFunctions.cpp"
                 ,0xb2);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId178);
    }
    uVar25 = 0;
    local_220 = param_2->MaxNumSamples;
    local_1f0 = __real_4000000000000000;
    local_228 = (double)param_2->SamplingRadius;
    local_210 = param_2->RandomSeed;
    local_208 = param_2->SamplingMethodVersion;
    local_20c = 50000000;
    local_200 = 0.0;
    local_218 = param_2->SubSampleDensity;
    local_1f8 = 0;
    local_1e8 = 0;
    local_1e0 = (void *)0x0;
    local_1d8 = 0;
    local_1d0 = 1;
    local_1cc = 0;
    local_1c0 = (FGeometryError *)0x0;
    local_1b8 = 0;
    local_1b0 = (FGeometryWarning *)0x0;
    local_1a8 = 0;
    local_1c8 = 0;
    local_1a0 = (void *)0x0;
    local_198 = 0;
    local_190 = (void *)0x0;
    local_188 = 0;
    local_180 = (void *)0x0;
    local_178 = 0;
    local_170 = (void *)0x0;
    local_168 = 0;
    local_248 = 0;
    if (param_2->SamplingRadius < param_3->MaxSamplingRadius) {
      local_200 = (double)param_3->MaxSamplingRadius;
      local_248 = 1;
      local_1f8 = (uint)param_3->SizeDistribution;
      dVar4 = param_3->SizeDistributionPower;
      uVar27 = SUB84(dVar4,0);
      uVar28 = (undefined4)((ulonglong)dVar4 >> 0x20);
      if (__real_4024000000000000 <= dVar4) {
        uVar27 = SUB84(__real_4024000000000000,0);
        uVar28 = (undefined4)((ulonglong)__real_4024000000000000 >> 0x20);
      }
      if ((double)CONCAT44(uVar28,uVar27) <= __real_3ff0000000000000) {
        uVar27 = SUB84(__real_3ff0000000000000,0);
        uVar28 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      }
      local_1f0 = CONCAT44(uVar28,uVar27);
    }
    local_138 = &local_248;
    local_128 = &local_228;
    local_140 = &local_138;
    local_148 = UE::Core::Private::Function::
                TFunctionRefCaller<`UGeometryScriptLibrary_MeshSamplingFunctions::ComputeVertexWeightedPointSampling'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
                ::Call;
    local_130 = param_4;
    local_120 = param_3;
    UDynamicMesh::ProcessMesh
              (local_238,
               (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_148);
    FGeometryScriptIndexList::Reset(param_7,Triangle,0);
    if (((param_7->List).Object == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar15)) {
      pcVar9 = (code *)swi(3);
      pUVar19 = (UDynamicMesh *)(*pcVar9)();
      return pUVar19;
    }
    pTVar14 = local_240;
    uVar13 = _UNK_150689688;
    uVar12 = ___xmm_3ff00000000000003ff0000000000000;
    uVar11 = _UNK_150689518;
    uVar10 = ___xmm_00000000000000003ff0000000000000;
    uVar20 = (ulonglong)(int)local_198;
    pTVar6 = (param_7->List).Object;
    cVar22 = !bVar26;
    local_158 = uVar20;
    if (0 < (int)local_198) {
      pFVar24 = (FScriptContainerElement *)0x0;
      local_240 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)0x0;
      while( true ) {
        piVar1 = &pTVar14->ArrayMax;
        uVar23 = ~uVar25 >> 0x1f;
        uVar16 = 0;
        if ((int)uVar25 < (int)uVar20) {
          uVar16 = uVar23;
        }
        if (uVar16 == 0) {
          local_270 = (FScriptContainerElement *)(longlong)(int)uVar20;
          local_278 = (FScriptContainerElement *)(longlong)(int)uVar25;
          bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar26) {
            pcVar9 = (code *)swi(3);
            pUVar19 = (UDynamicMesh *)(*pcVar9)();
            return pUVar19;
          }
        }
        local_c8 = *(undefined8 *)((longlong)local_240 + (longlong)local_1a0);
        uStack_c0 = ((undefined8 *)((longlong)local_240 + (longlong)local_1a0))[1];
        puVar2 = (undefined4 *)((longlong)local_240 + 0x28 + (longlong)local_1a0);
        local_d8 = *puVar2;
        uStack_d4 = puVar2[1];
        local_f8 = *(undefined8 *)((longlong)local_240 + 0x10 + (longlong)local_1a0);
        puVar3 = (undefined8 *)((longlong)local_240 + 0x18 + (longlong)local_1a0);
        local_e8 = *puVar3;
        uStack_e0 = puVar3[1];
        uVar5 = *(undefined8 *)((longlong)local_240 + 0x30 + (longlong)local_1a0);
        pFVar7 = (pTVar14->AllocatorInstance).Data;
        uStack_d0 = (undefined4)uVar5;
        uStack_cc = (undefined4)((ulonglong)uVar5 >> 0x20);
        uStack_b0 = 0;
        local_a8 = uVar12;
        uStack_a0 = uVar13;
        local_98 = uVar10;
        uStack_90 = uVar11;
        local_b8 = local_f8;
        if ((pFVar7 <= (FScriptContainerElement *)&local_e8) &&
           ((FScriptContainerElement *)&local_e8 < pFVar7 + (longlong)*piVar1 * 0x60)) {
          local_260 = (longlong)pTVar14->ArrayNum;
          local_258 = 0x60;
          local_278 = (FScriptContainerElement *)&local_e8;
          local_270 = pFVar7;
          local_268 = (longlong)*piVar1;
          bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar26) {
            pcVar9 = (code *)swi(3);
            pUVar19 = (UDynamicMesh *)(*pcVar9)();
            return pUVar19;
          }
        }
        iVar17 = pTVar14->ArrayNum;
        if (iVar17 == *piVar1) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1060,&pTVar14->AllocatorInstance,piVar1);
        }
        pTVar14->ArrayNum = iVar17 + 1;
        pFVar7 = (pTVar14->AllocatorInstance).Data;
        lVar21 = (longlong)iVar17 * 0x60;
        *(undefined8 *)(pFVar7 + lVar21) = local_e8;
        *(undefined8 *)(pFVar7 + lVar21 + 8) = uStack_e0;
        *(ulonglong *)(pFVar7 + lVar21 + 0x10) = CONCAT44(uStack_d4,local_d8);
        *(ulonglong *)(pFVar7 + lVar21 + 0x10 + 8) = CONCAT44(uStack_cc,uStack_d0);
        *(undefined8 *)(pFVar7 + lVar21 + 0x20) = local_c8;
        *(undefined8 *)(pFVar7 + lVar21 + 0x20 + 8) = uStack_c0;
        *(undefined8 *)(pFVar7 + lVar21 + 0x30) = local_b8;
        *(undefined8 *)(pFVar7 + lVar21 + 0x30 + 8) = uStack_b0;
        *(undefined8 *)(pFVar7 + lVar21 + 0x40) = local_a8;
        *(undefined8 *)(pFVar7 + lVar21 + 0x40 + 8) = uStack_a0;
        *(undefined8 *)(pFVar7 + lVar21 + 0x50) = local_98;
        *(undefined8 *)(pFVar7 + lVar21 + 0x50 + 8) = uStack_90;
        uVar16 = 0;
        if ((int)uVar25 < (int)local_188) {
          uVar16 = uVar23;
        }
        if ((uVar16 == 0) &&
           (local_278 = pFVar24, local_270 = (FScriptContainerElement *)(longlong)(int)local_188,
           bVar26 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar26)) {
          pcVar9 = (code *)swi(3);
          pUVar19 = (UDynamicMesh *)(*pcVar9)();
          return pUVar19;
        }
        pFVar8 = (param_6->AllocatorInstance).Data;
        pFVar7 = (FScriptContainerElement *)((longlong)local_190 + (longlong)pFVar24 * 8);
        if ((pFVar8 <= pFVar7) && (pFVar7 < pFVar8 + (longlong)param_6->ArrayMax * 8)) {
          local_260 = (longlong)param_6->ArrayNum;
          local_258 = 8;
          local_278 = pFVar7;
          local_270 = pFVar8;
          local_268 = (longlong)param_6->ArrayMax;
          bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar26) {
            pcVar9 = (code *)swi(3);
            pUVar19 = (UDynamicMesh *)(*pcVar9)();
            return pUVar19;
          }
        }
        iVar17 = param_6->ArrayNum;
        if (iVar17 == param_6->ArrayMax) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&param_6->AllocatorInstance,&param_6->ArrayMax);
        }
        param_6->ArrayNum = iVar17 + 1;
        *(undefined8 *)((param_6->AllocatorInstance).Data + (longlong)iVar17 * 8) =
             *(undefined8 *)pFVar7;
        uVar16 = 0;
        if ((int)uVar25 < (int)local_178) {
          uVar16 = uVar23;
        }
        if ((uVar16 == 0) &&
           (local_278 = pFVar24, local_270 = (FScriptContainerElement *)(longlong)(int)local_178,
           bVar26 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar26)) {
          pcVar9 = (code *)swi(3);
          pUVar19 = (UDynamicMesh *)(*pcVar9)();
          return pUVar19;
        }
        piVar1 = &pTVar6->ArrayMax;
        pFVar8 = (pTVar6->AllocatorInstance).Data;
        pFVar7 = (FScriptContainerElement *)((longlong)local_180 + (longlong)pFVar24 * 4);
        if ((pFVar8 <= pFVar7) && (pFVar7 < pFVar8 + (longlong)*piVar1 * 4)) {
          local_260 = (longlong)pTVar6->ArrayNum;
          local_258 = 4;
          local_278 = pFVar7;
          local_270 = pFVar8;
          local_268 = (longlong)*piVar1;
          bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar26) {
            pcVar9 = (code *)swi(3);
            pUVar19 = (UDynamicMesh *)(*pcVar9)();
            return pUVar19;
          }
        }
        iVar17 = pTVar6->ArrayNum;
        if (iVar17 == *piVar1) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar6->AllocatorInstance,piVar1);
        }
        pTVar6->ArrayNum = iVar17 + 1;
        uVar25 = uVar25 + 1;
        pFVar24 = pFVar24 + 1;
        *(undefined4 *)((pTVar6->AllocatorInstance).Data + (longlong)iVar17 * 4) =
             *(undefined4 *)pFVar7;
        local_240 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                    ((longlong)local_240 + 0x38);
        param_4 = local_150;
        cVar22 = local_247;
        if ((longlong)local_158 <= (longlong)pFVar24) break;
        uVar20 = local_198 & 0xffffffff;
      }
    }
    if (local_170 != (void *)0x0) {
      FMemory::Free(local_170);
    }
    if (local_180 != (void *)0x0) {
      FMemory::Free(local_180);
    }
    if (local_190 != (void *)0x0) {
      FMemory::Free(local_190);
    }
    if (local_1a0 != (void *)0x0) {
      FMemory::Free(local_1a0);
    }
    DestructItems<UE::Geometry::FGeometryWarning,int>(local_1b0,(int)local_1a8);
    if (local_1b0 != (FGeometryWarning *)0x0) {
      FMemory::Free(local_1b0);
    }
    DestructItems<UE::Geometry::FGeometryError,int>(local_1c0,(int)local_1b8);
    if (local_1c0 != (FGeometryError *)0x0) {
      FMemory::Free(local_1c0);
    }
    if (local_1e0 != (void *)0x0) {
      FMemory::Free(local_1e0);
    }
    if (cVar22 != '\0') {
      FCpuProfilerTrace::OutputEndEvent();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_4->List).SharedReferenceCount.ReferenceController);
  }
  return local_238;
}

// GetPrivateStaticClass @ 14ce6d230

UClass * __cdecl UGeometryScriptLibrary_MeshSamplingFunctions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSamplingFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshSamplingFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSamplingFunctions.
                InnerSingleton,StaticRegisterNativesUGeometryScriptLibrary_MeshSamplingFunctions,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshSamplingFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshSamplingFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSamplingFunctions.InnerSingleton;
}

// StaticRegisterNativesUGeometryScriptLibrary_MeshSamplingFunctions @ 14ce75080

void __cdecl
UGeometryScriptLibrary_MeshSamplingFunctions::
StaticRegisterNativesUGeometryScriptLibrary_MeshSamplingFunctions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_UGeometryScriptLibrary_MeshSamplingFunctions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execComputeNonUniformPointSampling @ 14ce89f80

void __cdecl
UGeometryScriptLibrary_MeshSamplingFunctions::execComputeNonUniformPointSampling
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar1;
  FProperty *pFVar2;
  UDynamicMesh *pUVar3;
  FGeometryScriptIndexList *pFVar4;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar6;
  UGeometryScriptDebug *local_res10;
  UDynamicMesh *local_res18;
  TArray<double,TSizedDefaultAllocator<32>_> local_d8;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_c8;
  float local_b8;
  uint uStack_b4;
  double dStack_b0;
  undefined2 local_a8;
  undefined6 uStack_a6;
  FGeometryScriptMeshPointSamplingOptions local_a0;
  FGeometryScriptIndexList local_80;
  FGeometryScriptNonUniformPointSamplingOptions local_68;
  FGeometryScriptMeshPointSamplingOptions local_48;
  
  local_res18 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_a0.SubSampleDensity = __real_4024000000000000;
  local_a0.SamplingRadius = 10.0;
  local_a0.MaxNumSamples = 0;
  local_a0.RandomSeed = 0;
  local_a0.SamplingMethodVersion = -1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  dStack_b0 = __real_4000000000000000;
  local_b8 = 0.0;
  uStack_b4 = uStack_b4 & 0xffffff00;
  local_a8 = 2;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0;
  pTVar6 = &local_c8;
  if ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar6 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  pTVar1 = (TArray<double,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  local_80.IndexType = Any;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pTVar5 = &local_d8;
  if (pTVar1 != (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar5 = pTVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_80.List.Object = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_80.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  local_res10 = (UGeometryScriptDebug *)0x0;
  pFVar4 = &local_80;
  if ((FGeometryScriptIndexList *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptIndexList *)0x0) {
    pFVar4 = (FGeometryScriptIndexList *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_68._4_4_ = uStack_b4;
  local_68.MaxSamplingRadius = local_b8;
  local_68._18_6_ = uStack_a6;
  local_68.WeightMode = (undefined1)local_a8;
  local_68.bInvertWeights = (bool)local_a8._1_1_;
  local_68.SizeDistributionPower = dStack_b0;
  local_48._12_4_ = local_a0._12_4_;
  local_48.RandomSeed = local_a0.RandomSeed;
  local_48._28_4_ = local_a0._28_4_;
  local_48.SamplingMethodVersion = local_a0.SamplingMethodVersion;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_48.SamplingRadius = local_a0.SamplingRadius;
  local_48.MaxNumSamples = local_a0.MaxNumSamples;
  local_48.SubSampleDensity = local_a0.SubSampleDensity;
  pUVar3 = ComputeNonUniformPointSampling
                     (local_res18,&local_48,&local_68,pTVar6,pTVar5,pFVar4,local_res10);
  *(UDynamicMesh **)param_3 = pUVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80.List.SharedReferenceCount.ReferenceController);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  return;
}

// execComputePointSampling @ 14ce8a270

void __cdecl
UGeometryScriptLibrary_MeshSamplingFunctions::execComputePointSampling
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  FProperty *pFVar2;
  UDynamicMesh *pUVar3;
  FGeometryScriptIndexList *pFVar4;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  UGeometryScriptDebug *local_res10;
  UDynamicMesh *local_res18 [2];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_98;
  FGeometryScriptIndexList local_88;
  FGeometryScriptMeshPointSamplingOptions local_70;
  FGeometryScriptMeshPointSamplingOptions local_48;
  
  local_res18[0] = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_70.SubSampleDensity = __real_4024000000000000;
  local_70.SamplingRadius = 10.0;
  local_70.MaxNumSamples = 0;
  local_70.RandomSeed = 0;
  local_70.SamplingMethodVersion = -1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  pTVar1 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
           param_2->MostRecentPropertyAddress;
  local_88.IndexType = Any;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pTVar5 = &local_98;
  if (pTVar1 != (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar5 = pTVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_88.List.Object = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_88.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_res10 = (UGeometryScriptDebug *)0x0;
  pFVar4 = &local_88;
  if ((FGeometryScriptIndexList *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptIndexList *)0x0) {
    pFVar4 = (FGeometryScriptIndexList *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_48._12_4_ = local_70._12_4_;
  local_48.RandomSeed = local_70.RandomSeed;
  local_48._28_4_ = local_70._28_4_;
  local_48.SamplingMethodVersion = local_70.SamplingMethodVersion;
  local_48.SamplingRadius = local_70.SamplingRadius;
  local_48.MaxNumSamples = local_70.MaxNumSamples;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_48.SubSampleDensity = local_70.SubSampleDensity;
  pUVar3 = ComputePointSampling(local_res18[0],&local_48,pTVar5,pFVar4,local_res10);
  *(UDynamicMesh **)param_3 = pUVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.List.SharedReferenceCount.ReferenceController);
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  return;
}

// execComputeRenderCaptureCamerasForBox @ 14ce8a9f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_MeshSamplingFunctions::execComputeRenderCaptureCamerasForBox
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGeometryScriptRenderCaptureCamerasForBoxOptions *pFVar2;
  TArray<FGeometryScriptRenderCaptureCamera,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined1 auStack_f8 [32];
  UGeometryScriptDebug *local_d8;
  TArray<FGeometryScriptRenderCaptureCamera,TSizedDefaultAllocator<32>_> local_d0;
  FGeometryScriptRenderCaptureCamerasForBoxOptions local_c0;
  TVector<double>_u_0 local_98;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  double local_58;
  double dStack_50;
  double local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined7 uStack_27;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.ArrayNum = 0;
  local_d0.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d0);
  }
  local_28 = 0;
  pTVar3 = &local_d0;
  if ((TArray<FGeometryScriptRenderCaptureCamera,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<FGeometryScriptRenderCaptureCamera,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<FGeometryScriptRenderCaptureCamera,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_c0.FieldOfViewDegrees = __real_4046800000000000;
  local_c0.Resolution = 0x100;
  local_c0.bViewFromBoxFaces = true;
  local_c0.bViewFromUpperCorners = false;
  local_c0.bViewFromLowerCorners = false;
  local_c0.bViewFromUpperEdges = false;
  local_c0.bViewFromLowerEdges = false;
  local_c0.bViewFromSideEdges = false;
  local_c0.ExtraViewFromPositions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.ExtraViewFromPositions.ArrayNum = 0;
  local_c0.ExtraViewFromPositions.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c0);
  }
  local_d8 = (UGeometryScriptDebug *)0x0;
  pFVar2 = &local_c0;
  if ((FGeometryScriptRenderCaptureCamerasForBoxOptions *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptRenderCaptureCamerasForBoxOptions *)0x0) {
    pFVar2 = (FGeometryScriptRenderCaptureCamerasForBoxOptions *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_98._s_0.X = local_58;
  local_98._s_0.Y = dStack_50;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_98._s_0.Z = local_48;
  uStack_80 = uStack_40;
  local_68 = CONCAT71(uStack_27,local_28);
  local_78 = local_38;
  uStack_70 = uStack_30;
  ComputeRenderCaptureCamerasForBox(pTVar3,(TBox<double> *)&local_98._s_0,pFVar2,local_d8);
  if (local_c0.ExtraViewFromPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.ExtraViewFromPositions.AllocatorInstance.Data);
  }
  if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.AllocatorInstance.Data);
  }
  return;
}

// execComputeRenderCapturePointSampling @ 14ce8abf0

void __cdecl
UGeometryScriptLibrary_MeshSamplingFunctions::execComputeRenderCapturePointSampling
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FGeometryScriptRenderCaptureCamera,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  UGeometryScriptDebug *local_res10;
  TArray<FGeometryScriptRenderCaptureCamera,TSizedDefaultAllocator<32>_> local_48;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_38;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_28;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  pTVar4 = &local_28;
  if ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  pTVar3 = &local_38;
  if ((TArray<AActor_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<AActor_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<AActor_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10 = (UGeometryScriptDebug *)0x0;
  pTVar2 = &local_48;
  if ((TArray<FGeometryScriptRenderCaptureCamera,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<FGeometryScriptRenderCaptureCamera,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FGeometryScriptRenderCaptureCamera,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ComputeRenderCapturePointSampling(pTVar4,pTVar3,pTVar2,local_res10);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execComputeUniformRandomPointSampling @ 14ce8b4b0

void __cdecl
UGeometryScriptLibrary_MeshSamplingFunctions::execComputeUniformRandomPointSampling
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  void **ppvVar1;
  FProperty *pFVar2;
  UGeometryScriptDebug *pUVar3;
  FText *pFVar4;
  UDynamicMesh *pUVar5;
  uchar *puVar6;
  void **ppvVar7;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  UGeometryScriptDebug *local_res20;
  UDynamicMesh *local_98;
  void *local_90;
  undefined8 local_88;
  undefined1 local_80 [16];
  uchar local_70 [8];
  undefined8 local_68;
  TReferenceControllerBase<1> *pTStack_60;
  UGeometryScriptDebug *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  void **local_48;
  uchar *local_40;
  
  local_98 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_90 = (void *)0x0;
  local_88 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  ppvVar1 = (void **)param_2->MostRecentPropertyAddress;
  local_70[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  ppvVar7 = &local_90;
  if (ppvVar1 != (void **)0x0) {
    ppvVar7 = ppvVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_68 = 0;
  pTStack_60 = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_70,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_70);
  }
  local_res18[0] = 0;
  puVar6 = local_70;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar6 = param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res20 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  pUVar5 = local_98;
  pUVar3 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_98 == (UDynamicMesh *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_80,L"UGeometryScriptLibrary_MeshSamplingFunctions",
                        L"ComputeUniformRandomPointSampling_InvalidInput",
                        L"ComputeUniformRandomPointSampling: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar3,InvalidInputs,pFVar4);
    pUVar5 = (UDynamicMesh *)0x0;
    if ((ITextData *)local_80._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_80._0_8_ + 0x10))();
    }
  }
  else {
    local_50 = local_res10[0];
    local_4c = local_res18[0];
    local_80._8_8_ = &local_58;
    local_80._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshSamplingFunctions::ComputeUniformRandomPointSampling'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
         ::Call;
    local_58 = local_res20;
    local_48 = ppvVar7;
    local_40 = puVar6;
    UDynamicMesh::ProcessMesh
              (local_98,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_80)
    ;
  }
  *(UDynamicMesh **)param_3 = pUVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  if (local_90 != (void *)0x0) {
    FMemory::Free(local_90);
  }
  return;
}

// execComputeVertexWeightedPointSampling @ 14ce8b730

void __cdecl
UGeometryScriptLibrary_MeshSamplingFunctions::execComputeVertexWeightedPointSampling
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar1;
  FProperty *pFVar2;
  UDynamicMesh *pUVar3;
  FGeometryScriptIndexList *pFVar4;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar6;
  UGeometryScriptDebug *local_res10;
  UDynamicMesh *local_res18;
  TArray<double,TSizedDefaultAllocator<32>_> local_108;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_f8;
  float local_e8;
  uint uStack_e4;
  double dStack_e0;
  undefined2 local_d8;
  undefined6 uStack_d6;
  TArray<double,TSizedDefaultAllocator<32>_> *local_c8;
  TReferenceControllerBase<1> *pTStack_c0;
  FGeometryScriptMeshPointSamplingOptions local_b8;
  FGeometryScriptIndexList local_98;
  FGeometryScriptScalarList local_78;
  FGeometryScriptNonUniformPointSamplingOptions local_68;
  FGeometryScriptMeshPointSamplingOptions local_48;
  
  local_res18 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_b8.SubSampleDensity = __real_4024000000000000;
  local_b8.SamplingRadius = 10.0;
  local_b8.MaxNumSamples = 0;
  local_b8.RandomSeed = 0;
  local_b8.SamplingMethodVersion = -1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  dStack_e0 = __real_4000000000000000;
  local_e8 = 0.0;
  uStack_e4 = uStack_e4 & 0xffffff00;
  local_d8 = 2;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_c8 = (TArray<double,TSizedDefaultAllocator<32>_> *)0x0;
  pTStack_c0 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 0;
  local_108.ArrayMax = 0;
  pTVar6 = &local_f8;
  if ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar6 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  pTVar1 = (TArray<double,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  local_98.IndexType = Any;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pTVar5 = &local_108;
  if (pTVar1 != (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar5 = pTVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_98.List.Object = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_98.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_res10 = (UGeometryScriptDebug *)0x0;
  pFVar4 = &local_98;
  if ((FGeometryScriptIndexList *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptIndexList *)0x0) {
    pFVar4 = (FGeometryScriptIndexList *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_78.List.Object = local_c8;
  local_78.List.SharedReferenceCount.ReferenceController = pTStack_c0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_c0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_c0->SharedReferenceCount = (atomic<int>)((int)pTStack_c0->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_68._4_4_ = uStack_e4;
  local_68.MaxSamplingRadius = local_e8;
  local_68._18_6_ = uStack_d6;
  local_68.WeightMode = (undefined1)local_d8;
  local_68.bInvertWeights = (bool)local_d8._1_1_;
  local_68.SizeDistributionPower = dStack_e0;
  local_48._12_4_ = local_b8._12_4_;
  local_48.RandomSeed = local_b8.RandomSeed;
  local_48._28_4_ = local_b8._28_4_;
  local_48.SamplingMethodVersion = local_b8.SamplingMethodVersion;
  local_48.SamplingRadius = local_b8.SamplingRadius;
  local_48.MaxNumSamples = local_b8.MaxNumSamples;
  local_48.SubSampleDensity = local_b8.SubSampleDensity;
  pUVar3 = ComputeVertexWeightedPointSampling
                     (local_res18,&local_48,&local_68,&local_78,pTVar6,pTVar5,pFVar4,local_res10);
  *(UDynamicMesh **)param_3 = pUVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.List.SharedReferenceCount.ReferenceController);
  if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_c0);
  return;
}

