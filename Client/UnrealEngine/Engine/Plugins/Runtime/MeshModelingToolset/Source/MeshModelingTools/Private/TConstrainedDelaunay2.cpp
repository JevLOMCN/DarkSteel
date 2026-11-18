// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 1

// Add<double> @ 14cc06110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TConstrainedDelaunay2<double>::Add<double>
          (TConstrainedDelaunay2<double> *this,FDynamicGraph2<double> *param_1)

{
  int *piVar1;
  short sVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  ulonglong uVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  FFunctionStorage *pFVar10;
  undefined ***pppuVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStack_288 [32];
  undefined8 *local_268;
  FScriptContainerElement *local_260;
  longlong local_258;
  longlong local_250;
  undefined8 local_248;
  undefined8 local_238;
  uint uStack_230;
  uint uStack_22c;
  TArray<int,TSizedDefaultAllocator<32>_> local_228;
  undefined8 local_218;
  uint local_210 [2];
  undefined8 local_208;
  undefined8 uStack_200;
  code *local_1f8;
  undefined **local_1e8;
  FDynamicGraph2<double> *local_1e0;
  undefined ***local_1d0;
  code *local_1c8 [2];
  FFunctionStorage local_1b8;
  undefined1 local_198 [16];
  BaseIterator local_188;
  code *local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  longlong *plStack_150;
  code *local_148 [2];
  longlong local_138 [3];
  longlong *local_120;
  longlong *local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  uint uStack_100;
  uint uStack_fc;
  code *local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  longlong *plStack_d0;
  code *local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  longlong *plStack_a0;
  code *local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  longlong *plStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_288;
  uVar18 = 0;
  iVar15 = (int)param_1->_padding_ * 0x200 + *(int *)((longlong)&param_1->_padding_ + 4);
  local_228.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_228.ArrayNum = 0;
  local_228.ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_228,iVar15,Default);
  if (0 < iVar15) {
    uVar24 = (undefined4)__real_7fefffffffffffff;
    uVar5 = (ulonglong)__real_7fefffffffffffff >> 0x20;
    uVar19 = uVar18;
    do {
      uVar17 = (uint)uVar18;
      if ((((int)uVar17 < 0) ||
          ((int)param_1->_padding_ * 0x200 + *(int *)((longlong)&param_1->_padding_ + 4) <=
           (int)uVar17)) ||
         (0xfffd < (ushort)(*(short *)(*(longlong *)(param_1->_padding_ + (uVar18 >> 9) * 8) +
                                      (ulonglong)(uVar17 & 0x1ff) * 2) - 1U))) {
        uVar16 = 0;
        if ((int)uVar17 < local_228.ArrayNum) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (local_268 = (undefined8 *)(longlong)(int)uVar17,
           local_260 = (FScriptContainerElement *)(longlong)local_228.ArrayNum,
           bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined4 *)(local_228.AllocatorInstance.Data + uVar19 * 4) = 0xffffffff;
      }
      else {
        iVar7 = (this->Vertices).ArrayNum;
        uVar16 = 0;
        if ((int)uVar17 < local_228.ArrayNum) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (local_268 = (undefined8 *)(longlong)(int)uVar17,
           local_260 = (FScriptContainerElement *)(longlong)local_228.ArrayNum,
           bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(int *)(local_228.AllocatorInstance.Data + uVar19 * 4) = iVar7;
        if (((int)uVar17 <
             (int)param_1->_padding_ * 0x200 + *(int *)((longlong)&param_1->_padding_ + 4)) &&
           ((ushort)(*(short *)(*(longlong *)(param_1->_padding_ + (uVar18 >> 9) * 8) +
                               (ulonglong)(uVar17 & 0x1ff) * 2) - 1U) < 0xfffe)) {
          pFVar3 = (param_1->vertices).Data.Blocks.AllocatorInstance.Data;
          uVar8 = *(undefined8 *)
                   (*(longlong *)(pFVar3 + (ulonglong)((uVar17 & 0x7fffffff) >> 8) * 8) +
                   (ulonglong)(uVar17 * 2 + 1 & 0x1ff) * 8);
          uVar20 = (undefined4)uVar8;
          uVar21 = (undefined4)((ulonglong)uVar8 >> 0x20);
          uVar8 = *(undefined8 *)
                   (*(longlong *)(pFVar3 + (ulonglong)((uVar17 & 0x7fffffff) >> 8) * 8) +
                   (ulonglong)(uVar17 * 2 & 0x1ff) * 8);
          uVar22 = (int)uVar8;
          uVar23 = (int)((ulonglong)uVar8 >> 0x20);
        }
        else {
          uVar20 = 0;
          uVar21 = 0;
          uVar22 = uVar24;
          uVar23 = (int)uVar5;
        }
        pFVar3 = (this->Vertices).AllocatorInstance.Data;
        local_208 = CONCAT44(uVar23,uVar22);
        uStack_200 = CONCAT44(uVar21,uVar20);
        if ((pFVar3 <= (FScriptContainerElement *)&local_208) &&
           (lVar14 = (longlong)(this->Vertices).ArrayMax,
           (FScriptContainerElement *)&local_208 < pFVar3 + lVar14 * 0x10)) {
          local_250 = (longlong)(this->Vertices).ArrayNum;
          local_248 = 0x10;
          local_268 = &local_208;
          local_260 = pFVar3;
          local_258 = lVar14;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar7 = (this->Vertices).ArrayNum;
        piVar1 = &(this->Vertices).ArrayMax;
        if (iVar7 == *piVar1) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,(ForAnyElementType *)this,piVar1);
        }
        (this->Vertices).ArrayNum = iVar7 + 1;
        pFVar3 = (this->Vertices).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
        *(undefined8 *)pFVar3 = local_208;
        *(undefined8 *)(pFVar3 + 8) = uStack_200;
      }
      uVar18 = (ulonglong)(uVar17 + 1);
      uVar19 = uVar19 + 1;
    } while ((longlong)uVar19 < (longlong)iVar15);
  }
  local_1d0 = (undefined ***)0x0;
  local_1e8 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1__Edges_FDynamicGraph_Geometry_UE__QEBA_AV__MappedEnumerable_UFEdge_FDynamicGraph_Geometry_UE___FRefCountVector_45_XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_1f8 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FDynamicGraph::Edges'::__l2::<lambda_1>,UE::Geometry::FDynamicGraph::FEdge,int>
              ::Call;
  local_1c8[0] = Core::Private::Function::
                 TFunctionRefCaller<`UE::Geometry::FDynamicGraph::Edges'::__l2::<lambda_1>,UE::Geometry::FDynamicGraph::FEdge,int>
                 ::Call;
  local_1b8.HeapAllocation = (FFunctionStorage *)0x0;
  local_1e0 = param_1;
  Core::Private::Function::
  TFunction_OwnedObject<`UE::Geometry::FDynamicGraph::Edges'::__l2::<lambda_1>,0,0>::
  CloneToEmptyStorage(&local_1e8,&local_1b8);
  local_148[0] = (code *)0x0;
  local_120 = (longlong *)0x0;
  local_118 = &param_1->_padding_;
  TFunction<UE::Geometry::FDynamicGraph::FEdge___cdecl(int)>::operator=
            ((TFunction<UE::Geometry::FDynamicGraph::FEdge___cdecl(int)> *)local_148,
             (TFunction<UE::Geometry::FDynamicGraph::FEdge___cdecl(int)> *)local_1c8);
  if (local_1c8[0] != (code *)0x0) {
    pFVar10 = &local_1b8;
    if (local_1b8.HeapAllocation != (FFunctionStorage *)0x0) {
      pFVar10 = local_1b8.HeapAllocation;
    }
    (**(code **)(*(longlong *)pFVar10->InlineAllocation + 0x10))();
  }
  if (local_1f8 != (code *)0x0) {
    pppuVar11 = &local_1e8;
    if (local_1d0 != (undefined ***)0x0) {
      pppuVar11 = local_1d0;
    }
    (*(code *)(*pppuVar11)[2])();
  }
  local_238 = local_118;
  plVar13 = local_238;
  uStack_230 = 0;
  uStack_22c = *(int *)((longlong)local_118 + 4) + (int)*local_118 * 0x200;
  if ((uStack_22c != 0) && (0xfffd < (ushort)(**(short **)local_118[1] - 1U))) {
    uVar18 = 1;
    uStack_230 = 1;
    if (1 < (int)uStack_22c) {
      do {
        sVar2 = *(short *)(((undefined8 *)local_118[1])[uVar18 >> 9] +
                          (ulonglong)(uStack_230 & 0x1ff) * 2);
        if ((sVar2 != 0) && (sVar2 != -1)) break;
        uStack_230 = (int)uVar18 + 1;
        uVar18 = (ulonglong)uStack_230;
      } while ((int)uStack_230 < (int)uStack_22c);
    }
  }
  local_178 = (code *)0x0;
  plStack_150 = (longlong *)0x0;
  local_c8 = local_148[0];
  plStack_a0 = (longlong *)0x0;
  local_238._0_4_ = SUB84(local_118,0);
  uVar24 = (undefined4)local_238;
  local_238._4_4_ = (undefined4)((ulonglong)local_118 >> 0x20);
  local_188.Vector._0_4_ = (undefined4)local_238;
  local_188.Vector._4_4_ = local_238._4_4_;
  local_188.Index = uStack_230;
  local_188.LastIndex = uStack_22c;
  local_238 = plVar13;
  if (local_148[0] != (code *)0x0) {
    plVar13 = local_138;
    if (local_120 != (longlong *)0x0) {
      plVar13 = local_120;
    }
    (**(code **)*plVar13)(uVar24,&local_b8);
  }
  plVar13 = plStack_150;
  uVar20 = uStack_15c;
  uVar23 = uStack_160;
  uVar22 = uStack_164;
  uVar24 = local_168;
  uVar8 = uStack_170;
  pcVar4 = local_178;
  local_178 = local_c8;
  uStack_170 = uStack_c0;
  local_158 = local_a8;
  uStack_154 = uStack_a4;
  plStack_150 = plStack_a0;
  local_168 = local_b8;
  uStack_164 = uStack_b4;
  uStack_160 = uStack_b0;
  uStack_15c = uStack_ac;
  local_c8 = pcVar4;
  uStack_c0 = uVar8;
  local_b8 = uVar24;
  uStack_b4 = uVar22;
  uStack_b0 = uVar23;
  uStack_ac = uVar20;
  plStack_a0 = plVar13;
  if (pcVar4 != (code *)0x0) {
    plVar12 = (longlong *)&local_b8;
    if (plVar13 != (longlong *)0x0) {
      plVar12 = plVar13;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  uStack_230 = *(int *)((longlong)local_118 + 4) + (int)*local_118 * 0x200;
  local_f8 = (code *)0x0;
  plStack_d0 = (longlong *)0x0;
  local_98 = local_148[0];
  plStack_70 = (longlong *)0x0;
  local_238._0_4_ = SUB84(local_118,0);
  local_238._4_4_ = (undefined4)((ulonglong)local_118 >> 0x20);
  local_108 = (undefined4)local_238;
  uStack_104 = local_238._4_4_;
  uStack_100 = uStack_230;
  uStack_fc = uStack_230;
  plVar13 = local_118;
  uStack_22c = uStack_230;
  if (local_148[0] != (code *)0x0) {
    plVar13 = local_138;
    if (local_120 != (longlong *)0x0) {
      plVar13 = local_120;
    }
    uVar24 = (undefined4)local_238;
    local_238 = local_118;
    (**(code **)*plVar13)(uVar24,&local_88);
    plVar13 = local_238;
  }
  local_238 = plVar13;
  plVar13 = plStack_d0;
  uVar20 = uStack_dc;
  uVar23 = uStack_e0;
  uVar22 = uStack_e4;
  uVar24 = local_e8;
  uVar8 = uStack_f0;
  pcVar4 = local_f8;
  local_f8 = local_98;
  uStack_f0 = uStack_90;
  local_d8 = local_78;
  uStack_d4 = uStack_74;
  plStack_d0 = plStack_70;
  local_e8 = local_88;
  uStack_e4 = uStack_84;
  uStack_e0 = uStack_80;
  uStack_dc = uStack_7c;
  local_98 = pcVar4;
  uStack_90 = uVar8;
  local_88 = uVar24;
  uStack_84 = uVar22;
  uStack_80 = uVar23;
  uStack_7c = uVar20;
  plStack_70 = plVar13;
  if (pcVar4 != (code *)0x0) {
    plVar12 = (longlong *)&local_88;
    if (plVar13 != (longlong *)0x0) {
      plVar12 = plVar13;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (local_188.Index != uStack_100) {
    do {
      local_210[0] = local_188.Index;
      Core::Private::Function::CheckCallable(local_178);
      pcVar4 = local_178;
      plVar13 = (longlong *)&local_168;
      if (plStack_150 != (longlong *)0x0) {
        plVar13 = plStack_150;
      }
      uVar8 = (**(code **)(*plVar13 + 8))();
      puVar9 = (undefined8 *)(*pcVar4)(local_198,uVar8,local_210);
      plVar13 = (longlong *)*puVar9;
      uStack_230 = *(uint *)(puVar9 + 1);
      uVar16 = (uint)((ulonglong)plVar13 >> 0x20);
      uVar17 = 0;
      if ((int)uVar16 < local_228.ArrayNum) {
        uVar17 = ~uVar16 >> 0x1f;
      }
      local_238 = plVar13;
      if (uVar17 == 0) {
        local_268 = (undefined8 *)(longlong)(int)uVar16;
        local_260 = (FScriptContainerElement *)(longlong)local_228.ArrayNum;
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
      uVar24 = *(undefined4 *)(local_228.AllocatorInstance.Data + (longlong)(int)uVar16 * 4);
      uVar16 = (uint)plVar13;
      uVar17 = 0;
      if ((int)uVar16 < local_228.ArrayNum) {
        uVar17 = ~uVar16 >> 0x1f;
      }
      if (uVar17 == 0) {
        local_260 = (FScriptContainerElement *)(longlong)local_228.ArrayNum;
        local_268 = (undefined8 *)(longlong)(int)uVar16;
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
      local_218._0_4_ =
           *(undefined4 *)(local_228.AllocatorInstance.Data + (longlong)(int)uVar16 * 4);
      pFVar3 = (this->Edges).AllocatorInstance.Data;
      local_218._4_4_ = uVar24;
      if ((pFVar3 <= (FScriptContainerElement *)&local_218) &&
         (lVar14 = (longlong)(this->Edges).ArrayMax,
         (FScriptContainerElement *)&local_218 < pFVar3 + lVar14 * 8)) {
        local_250 = (longlong)(this->Edges).ArrayNum;
        local_248 = 8;
        local_268 = &local_218;
        local_260 = pFVar3;
        local_258 = lVar14;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar15 = (this->Edges).ArrayNum;
      if (iVar15 == (this->Edges).ArrayMax) {
        iVar15 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&(this->Edges).AllocatorInstance,&(this->Edges).ArrayMax);
      }
      (this->Edges).ArrayNum = iVar15 + 1;
      *(ulonglong *)((this->Edges).AllocatorInstance.Data + (longlong)iVar15 * 8) =
           CONCAT44(local_218._4_4_,(undefined4)local_218);
      FRefCountVector::BaseIterator::goto_next(&local_188);
    } while (local_188.Index != uStack_100);
  }
  if (local_f8 != (code *)0x0) {
    plVar13 = (longlong *)&local_e8;
    if (plStack_d0 != (longlong *)0x0) {
      plVar13 = plStack_d0;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (local_178 != (code *)0x0) {
    plVar13 = (longlong *)&local_168;
    if (plStack_150 != (longlong *)0x0) {
      plVar13 = plStack_150;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (local_148[0] != (code *)0x0) {
    plVar13 = local_138;
    if (local_120 != (longlong *)0x0) {
      plVar13 = local_120;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (local_228.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.AllocatorInstance.Data);
  }
  return;
}

