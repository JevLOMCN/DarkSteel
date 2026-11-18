// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 2

// FTransformHierarchyQuery @ 14c947670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c9479f1) */

FTransformHierarchyQuery * __thiscall
UE::Geometry::FTransformHierarchyQuery::FTransformHierarchyQuery
          (FTransformHierarchyQuery *this,
          TArray<TTuple<UE::Math::TTransform<double>,FMeshBoneInfo>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FTransformHierarchyQuery *pFVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  int *piVar19;
  FScriptContainerElement *pFVar20;
  undefined1 auStack_188 [32];
  FScriptContainerElement *local_168;
  FScriptContainerElement *local_160;
  longlong local_158;
  longlong local_150;
  undefined8 local_148;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 local_120;
  undefined8 local_118;
  longlong local_110;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_188;
  uVar16 = 0;
  (this->BoneFans).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneFans).ArrayNum = 0;
  (this->BoneFans).ArrayMax = 0;
  iVar9 = param_1->ArrayNum;
  if (0 < iVar9) {
    local_110 = 0;
    uVar5 = local_120;
    uVar6 = local_118;
    do {
      local_118 = uVar6;
      local_120 = uVar5;
      lVar18 = local_110;
      uVar13 = 0;
      if ((int)uVar16 < iVar9) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if (uVar13 == 0) {
        local_160 = (FScriptContainerElement *)(longlong)iVar9;
        local_168 = (FScriptContainerElement *)(longlong)(int)uVar16;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FTransformHierarchyQuery *)(*pcVar4)();
          return pFVar10;
        }
      }
      pFVar12 = (param_1->AllocatorInstance).Data;
      local_108.Rotation.XY.m128d_f64[0] = *(double *)(pFVar12 + lVar18);
      local_108.Rotation.XY.m128d_f64[1] = *(double *)(pFVar12 + lVar18 + 8);
      local_108.Rotation.ZW.m128d_f64[0] = *(double *)(pFVar12 + lVar18 + 0x10);
      local_108.Rotation.ZW.m128d_f64[1] = *(double *)(pFVar12 + lVar18 + 0x10 + 8);
      local_108.Translation.XY.m128d_f64[0] = *(double *)(pFVar12 + lVar18 + 0x20);
      local_108.Translation.XY.m128d_f64[1] = *(double *)(pFVar12 + lVar18 + 0x20 + 8);
      local_108.Translation.ZW.m128d_f64[0] = *(double *)(pFVar12 + lVar18 + 0x30);
      local_108.Translation.ZW.m128d_f64[1] = *(double *)(pFVar12 + lVar18 + 0x30 + 8);
      local_108.Scale3D.XY.m128d_f64[0] = *(double *)(pFVar12 + lVar18 + 0x40);
      local_108.Scale3D.XY.m128d_f64[1] = *(double *)(pFVar12 + lVar18 + 0x40 + 8);
      local_108.Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar12 + lVar18 + 0x50);
      local_108.Scale3D.ZW.m128d_f64[1] = *(double *)(pFVar12 + lVar18 + 0x50 + 8);
      uVar13 = 0;
      if ((int)uVar16 < param_1->ArrayNum) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if (uVar13 == 0) {
        local_168 = (FScriptContainerElement *)(longlong)(int)uVar16;
        local_160 = (FScriptContainerElement *)(longlong)param_1->ArrayNum;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FTransformHierarchyQuery *)(*pcVar4)();
          return pFVar10;
        }
      }
      uVar13 = *(uint *)((param_1->AllocatorInstance).Data + lVar18 + 0x68);
      pFVar12 = local_160;
      while (uVar13 != 0xffffffff) {
        local_160 = (FScriptContainerElement *)(longlong)param_1->ArrayNum;
        uVar8 = 0;
        if ((int)uVar13 < param_1->ArrayNum) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if (uVar8 == 0) {
          local_168 = (FScriptContainerElement *)(longlong)(int)uVar13;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          pFVar12 = local_160;
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            pFVar10 = (FTransformHierarchyQuery *)(*pcVar4)();
            return pFVar10;
          }
        }
        local_160 = pFVar12;
        local_a8.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_a8.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_a8.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_a8.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_a8.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_a8.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_a8.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        local_a8.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        lVar18 = (longlong)(int)uVar13 * 0x70;
        local_a8.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_a8.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        local_a8.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_a8.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        UE::Math::TTransform<double>::Multiply
                  (&local_a8,&local_108,
                   (TTransform<double> *)((param_1->AllocatorInstance).Data + lVar18));
        local_108.Rotation.XY.m128d_f64[0] = local_a8.Rotation.XY.m128d_f64[0];
        local_108.Rotation.XY.m128d_f64[1] = local_a8.Rotation.XY.m128d_f64[1];
        local_108.Rotation.ZW.m128d_f64[0] = local_a8.Rotation.ZW.m128d_f64[0];
        local_108.Rotation.ZW.m128d_f64[1] = local_a8.Rotation.ZW.m128d_f64[1];
        uVar8 = 0;
        if ((int)uVar13 < param_1->ArrayNum) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        local_108.Translation.XY.m128d_f64[0] = local_a8.Translation.XY.m128d_f64[0];
        local_108.Translation.XY.m128d_f64[1] = local_a8.Translation.XY.m128d_f64[1];
        local_108.Translation.ZW.m128d_f64[0] = local_a8.Translation.ZW.m128d_f64[0];
        local_108.Translation.ZW.m128d_f64[1] = local_a8.Translation.ZW.m128d_f64[1];
        local_108.Scale3D.XY.m128d_f64[0] = local_a8.Scale3D.XY.m128d_f64[0];
        local_108.Scale3D.XY.m128d_f64[1] = local_a8.Scale3D.XY.m128d_f64[1];
        local_108.Scale3D.ZW.m128d_f64[0] = local_a8.Scale3D.ZW.m128d_f64[0];
        local_108.Scale3D.ZW.m128d_f64[1] = local_a8.Scale3D.ZW.m128d_f64[1];
        if ((uVar8 == 0) &&
           (local_168 = (FScriptContainerElement *)(longlong)(int)uVar13,
           local_160 = (FScriptContainerElement *)(longlong)param_1->ArrayNum,
           bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar7)) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FTransformHierarchyQuery *)(*pcVar4)();
          return pFVar10;
        }
        uVar13 = *(uint *)((param_1->AllocatorInstance).Data + lVar18 + 0x68);
        pFVar12 = local_160;
        lVar18 = local_110;
      }
      piVar19 = &(this->BoneFans).ArrayMax;
      local_160 = (this->BoneFans).AllocatorInstance.Data;
      local_120 = 0;
      local_118 = 0;
      local_138 = local_108.Translation.XY.m128d_f64[0];
      dStack_130 = local_108.Translation.XY.m128d_f64[1];
      local_128 = local_108.Translation.ZW.m128d_f64[0];
      if ((local_160 <= (FScriptContainerElement *)&local_138) &&
         ((FScriptContainerElement *)&local_138 < local_160 + (longlong)*piVar19 * 0x28)) {
        local_150 = (longlong)(this->BoneFans).ArrayNum;
        local_148 = 0x28;
        local_168 = (FScriptContainerElement *)&local_138;
        local_158 = (longlong)*piVar19;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        pFVar12 = local_160;
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FTransformHierarchyQuery *)(*pcVar4)();
          return pFVar10;
        }
      }
      local_160 = pFVar12;
      iVar9 = (this->BoneFans).ArrayNum;
      if (iVar9 == *piVar19) {
        iVar9 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,(ForAnyElementType *)this,piVar19);
      }
      lVar11 = (longlong)iVar9;
      (this->BoneFans).ArrayNum = iVar9 + 1;
      pFVar12 = (this->BoneFans).AllocatorInstance.Data;
      *(double *)(pFVar12 + lVar11 * 0x28) = local_138;
      *(double *)(pFVar12 + lVar11 * 0x28 + 8) = dStack_130;
      *(double *)(pFVar12 + lVar11 * 0x28 + 0x10) = local_128;
      *(undefined8 *)(pFVar12 + lVar11 * 0x28 + 0x18) = 0;
      *(undefined8 *)(pFVar12 + lVar11 * 0x28 + 0x18) = local_120;
      local_120 = 0;
      uVar5 = local_120;
      *(undefined4 *)(pFVar12 + lVar11 * 0x28 + 0x20) = (undefined4)local_118;
      *(undefined4 *)(pFVar12 + lVar11 * 0x28 + 0x24) = local_118._4_4_;
      local_118 = 0;
      uVar6 = local_118;
      local_118 = 0;
      local_120 = 0;
      iVar9 = param_1->ArrayNum;
      local_110 = lVar18 + 0x70;
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < iVar9);
  }
  uVar14 = 0;
  uVar15 = uVar14;
  uVar17 = uVar14;
  if (0 < iVar9) {
    do {
      uVar13 = (uint)uVar14;
      uVar16 = 0;
      if ((int)uVar13 < iVar9) {
        uVar16 = ~uVar13 >> 0x1f;
      }
      if (uVar16 == 0) {
        local_160 = (FScriptContainerElement *)(longlong)iVar9;
        local_168 = (FScriptContainerElement *)(longlong)(int)uVar13;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FTransformHierarchyQuery *)(*pcVar4)();
          return pFVar10;
        }
      }
      uVar16 = *(uint *)((param_1->AllocatorInstance).Data + uVar15 + 0x68);
      pFVar12 = (FScriptContainerElement *)(longlong)(int)uVar16;
      if (uVar16 != 0xffffffff) {
        iVar9 = (this->BoneFans).ArrayNum;
        uVar8 = 0;
        if ((int)uVar16 < iVar9) {
          uVar8 = ~uVar16 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (local_168 = pFVar12, local_160 = (FScriptContainerElement *)(longlong)iVar9,
           bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar7)) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FTransformHierarchyQuery *)(*pcVar4)();
          return pFVar10;
        }
        pFVar2 = (this->BoneFans).AllocatorInstance.Data;
        iVar9 = (this->BoneFans).ArrayNum;
        uVar16 = 0;
        if ((int)uVar13 < iVar9) {
          uVar16 = ~uVar13 >> 0x1f;
        }
        if (uVar16 == 0) {
          local_168 = (FScriptContainerElement *)(longlong)(int)uVar13;
          local_160 = (FScriptContainerElement *)(longlong)iVar9;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            pFVar10 = (FTransformHierarchyQuery *)(*pcVar4)();
            return pFVar10;
          }
        }
        pFVar3 = *(FScriptContainerElement **)(pFVar2 + (longlong)pFVar12 * 0x28 + 0x18);
        pFVar20 = (this->BoneFans).AllocatorInstance.Data + uVar17;
        if ((pFVar3 <= pFVar20) &&
           (pFVar20 < pFVar3 + (longlong)*(int *)(pFVar2 + (longlong)pFVar12 * 0x28 + 0x24) * 0x18))
        {
          local_150 = (longlong)*(int *)(pFVar2 + (longlong)pFVar12 * 0x28 + 0x20);
          local_148 = 0x18;
          local_168 = pFVar20;
          local_160 = pFVar3;
          local_158 = (longlong)*(int *)(pFVar2 + (longlong)pFVar12 * 0x28 + 0x24);
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            pFVar10 = (FTransformHierarchyQuery *)(*pcVar4)();
            return pFVar10;
          }
        }
        iVar9 = *(int *)(pFVar2 + (longlong)pFVar12 * 0x28 + 0x20);
        if (iVar9 == *(int *)(pFVar2 + (longlong)pFVar12 * 0x28 + 0x24)) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,(ForAnyElementType *)(pFVar2 + (longlong)pFVar12 * 0x28 + 0x18),
                             (int *)(pFVar2 + (longlong)pFVar12 * 0x28 + 0x24));
        }
        *(int *)(pFVar2 + (longlong)pFVar12 * 0x28 + 0x20) = iVar9 + 1;
        uVar5 = *(undefined8 *)(pFVar20 + 8);
        lVar18 = *(longlong *)(pFVar2 + (longlong)pFVar12 * 0x28 + 0x18);
        puVar1 = (undefined8 *)(lVar18 + (longlong)iVar9 * 0x18);
        *puVar1 = *(undefined8 *)pFVar20;
        puVar1[1] = uVar5;
        *(undefined8 *)(lVar18 + 0x10 + (longlong)iVar9 * 0x18) = *(undefined8 *)(pFVar20 + 0x10);
      }
      iVar9 = param_1->ArrayNum;
      uVar14 = (ulonglong)(uVar13 + 1);
      uVar15 = uVar15 + 0x70;
      uVar17 = uVar17 + 0x28;
    } while ((int)(uVar13 + 1) < iVar9);
  }
  return this;
}

// IsEndEffector @ 14c981b30

bool __thiscall
UE::Geometry::FTransformHierarchyQuery::IsEndEffector(FTransformHierarchyQuery *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < (this->BoneFans).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return *(int *)((this->BoneFans).AllocatorInstance.Data + (longlong)param_1 * 0x28 + 0x20) == 0;
}

