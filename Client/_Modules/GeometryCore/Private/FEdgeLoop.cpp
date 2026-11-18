// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 14

// FEdgeLoop @ 1435677f0

FEdgeLoop * __thiscall UE::Geometry::FEdgeLoop::FEdgeLoop(FEdgeLoop *this,FEdgeLoop *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  pTVar1 = &this->Vertices;
  this->Mesh = param_1->Mesh;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Vertices).ArrayMax;
  iVar3 = (param_1->Vertices).ArrayNum;
  pFVar4 = (param_1->Vertices).AllocatorInstance.Data;
  (this->Vertices).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 2);
  }
  pTVar1 = &this->Edges;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Edges).ArrayMax;
  iVar3 = (param_1->Edges).ArrayNum;
  pFVar4 = (param_1->Edges).AllocatorInstance.Data;
  (this->Edges).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 2);
  }
  pTVar1 = &this->BowtieVertices;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->BowtieVertices).ArrayMax;
  iVar3 = (param_1->BowtieVertices).ArrayNum;
  pFVar4 = (param_1->BowtieVertices).AllocatorInstance.Data;
  (this->BowtieVertices).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 2);
  }
  this->bBowtiesCalculated = param_1->bBowtiesCalculated;
  return this;
}

// CalculateBowtieVertices @ 1435786e0

void __thiscall UE::Geometry::FEdgeLoop::CalculateBowtieVertices(FEdgeLoop *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FDynamicMesh3 *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  
  piVar1 = &(this->BowtieVertices).ArrayMax;
  (this->BowtieVertices).ArrayNum = 0;
  if ((this->BowtieVertices).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->BowtieVertices).AllocatorInstance,0,piVar1);
  }
  lVar9 = (longlong)(this->Vertices).ArrayNum;
  uVar8 = 0;
  if (0 < lVar9) {
    lVar10 = 0;
    do {
      this_00 = this->Mesh;
      uVar6 = 0;
      if ((int)uVar8 < (this->Vertices).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      bVar5 = FDynamicMesh3::IsBowtieVertex
                        (this_00,*(int *)((this->Vertices).AllocatorInstance.Data + lVar10 * 4));
      if (bVar5) {
        uVar6 = 0;
        if ((int)uVar8 < (this->Vertices).ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->BowtieVertices).AllocatorInstance.Data;
        pFVar2 = (this->Vertices).AllocatorInstance.Data + lVar10 * 4;
        if (((pFVar3 <= pFVar2) && (pFVar2 < pFVar3 + (longlong)*piVar1 * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar7 = (this->BowtieVertices).ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(this->BowtieVertices).AllocatorInstance,piVar1);
        }
        (this->BowtieVertices).ArrayNum = iVar7 + 1;
        *(undefined4 *)((this->BowtieVertices).AllocatorInstance.Data + (longlong)iVar7 * 4) =
             *(undefined4 *)pFVar2;
      }
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 1;
    } while (lVar10 < lVar9);
  }
  this->bBowtiesCalculated = true;
  return;
}

// CheckValidity @ 143579650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000143579795) */

bool __thiscall
UE::Geometry::FEdgeLoop::CheckValidity(FEdgeLoop *this,EValidityCheckFailMode param_1)

{
  int iVar1;
  char *pcVar2;
  FDynamicMesh3 *pFVar3;
  FDynamicMesh3 *pFVar4;
  code *pcVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined ***pppuVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  FSmallListSet *pFVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong local_160;
  undefined1 local_158 [8];
  char local_150 [8];
  undefined1 local_148 [8];
  undefined1 local_140 [8];
  undefined1 local_138 [8];
  undefined1 local_130 [8];
  undefined1 local_128 [8];
  undefined1 local_120 [8];
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [8];
  undefined8 local_100;
  BaseValueIterator local_f8;
  code *local_c8;
  undefined **local_b8;
  undefined1 *puStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined ***pppuStack_a0;
  code *local_98;
  undefined **local_88;
  undefined1 *puStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  code *local_68;
  undefined **local_58;
  undefined1 *puStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  ulonglong local_38;
  
  pppuVar12 = &local_88;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_188;
  local_b8 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::Geometry::FEdgeLoop::CheckValidity'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_158[0] = 1;
  pppuStack_a0 = (undefined ***)0x0;
  local_c8 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FEdgeLoop::CheckValidity'::__l2::<lambda_1>,void,bool>
             ::Call;
  if (param_1 == Check) {
    local_c8 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FEdgeLoop::CheckValidity'::__l5::<lambda_2>,void,bool>
               ::Call;
    local_a8 = local_78;
    uStack_a4 = uStack_74;
    pppuStack_a0 = (undefined ***)0x0;
    local_b8 = &Core::Private::Function::
                TFunction_OwnedObject<`UE::Geometry::FEdgeLoop::CheckValidity'::`5'::<lambda_2>,0,0>
                ::_vftable_;
    puStack_b0 = local_158;
    local_98 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FEdgeLoop::CheckValidity'::__l2::<lambda_1>,void,bool>
               ::Call;
    local_88 = &Core::Private::Function::
                TFunction_OwnedObject<`UE::Geometry::FEdgeLoop::CheckValidity'::`2'::<lambda_1>,0,0>
                ::_vftable_;
    puStack_80 = local_158;
    uStack_70 = 0;
  }
  else {
    puStack_b0 = local_158;
    if (param_1 != Ensure) goto LAB_14357979f;
    local_c8 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FEdgeLoop::CheckValidity'::__l9::<lambda_3>,void,bool>
               ::Call;
    local_a8 = local_48;
    uStack_a4 = uStack_44;
    pppuStack_a0 = (undefined ***)0x0;
    local_b8 = &Core::Private::Function::
                TFunction_OwnedObject<`UE::Geometry::FEdgeLoop::CheckValidity'::`9'::<lambda_3>,0,0>
                ::_vftable_;
    puStack_b0 = local_158;
    local_68 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FEdgeLoop::CheckValidity'::__l2::<lambda_1>,void,bool>
               ::Call;
    local_58 = &Core::Private::Function::
                TFunction_OwnedObject<`UE::Geometry::FEdgeLoop::CheckValidity'::`2'::<lambda_1>,0,0>
                ::_vftable_;
    puStack_50 = local_158;
    uStack_40 = 0;
    pppuVar12 = &local_58;
  }
  pppuStack_a0 = (undefined ***)0x0;
  (*(code *)(*pppuVar12)[2])();
LAB_14357979f:
  local_150[0] = (this->Vertices).ArrayNum == (this->Edges).ArrayNum;
  Core::Private::Function::CheckCallable(local_c8);
  pcVar5 = local_c8;
  pppuVar12 = &local_b8;
  if (pppuStack_a0 != (undefined ***)0x0) {
    pppuVar12 = pppuStack_a0;
  }
  puVar10 = (undefined8 *)(*(code *)(*pppuVar12)[1])();
  if (pcVar5 == Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FEdgeLoop::CheckValidity'::__l2::<lambda_1>,void,bool>
                ::Call) {
    pcVar2 = (char *)*puVar10;
    if ((*pcVar2 == '\0') || (local_150[0] == '\0')) {
      *pcVar2 = '\0';
    }
    else {
      *pcVar2 = '\x01';
    }
  }
  else {
    (*pcVar5)(puVar10,local_150);
  }
  uVar20 = 0;
  if (0 < (this->Edges).ArrayNum) {
    lVar17 = 0;
    do {
      iVar9 = (this->Edges).ArrayNum;
      pFVar3 = this->Mesh;
      uVar19 = ~uVar20 >> 0x1f;
      uVar15 = 0;
      if ((int)uVar20 < iVar9) {
        uVar15 = uVar19;
      }
      if (uVar15 == 0) {
        local_168 = (longlong)(int)uVar20;
        local_160 = (longlong)iVar9;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      pFVar4 = this->Mesh;
      uVar15 = *(uint *)((this->Edges).AllocatorInstance.Data + lVar17);
      local_100 = *(ulonglong *)
                   (*(longlong *)
                     ((pFVar3->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar15 >> 9) * 8)
                   + (ulonglong)(uVar15 & 0x1ff) * 0x10);
      uVar15 = (uint)local_100;
      if ((((int)uVar15 < 0) ||
          ((int)((pFVar4->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                (pFVar4->VertexRefCounts).RefCounts.CurBlockUsed) <= (int)uVar15)) ||
         (0xfffd < (ushort)(*(short *)(*(longlong *)
                                        ((pFVar4->VertexRefCounts).RefCounts.Blocks.
                                         AllocatorInstance.Data +
                                        ((local_100 & 0xffffffff) >> 9) * 8) +
                                      (ulonglong)(uVar15 & 0x1ff) * 2) - 1U))) {
        local_148[0] = 0;
      }
      else {
        local_148[0] = 1;
      }
      Core::Private::Function::CheckCallable(local_c8);
      pcVar5 = local_c8;
      pppuVar12 = &local_b8;
      if (pppuStack_a0 != (undefined ***)0x0) {
        pppuVar12 = pppuStack_a0;
      }
      uVar11 = (*(code *)(*pppuVar12)[1])();
      (*pcVar5)(uVar11,local_148);
      uVar14 = local_100._4_4_;
      pFVar3 = this->Mesh;
      if ((((longlong)local_100 < 0) ||
          ((int)((pFVar3->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                (pFVar3->VertexRefCounts).RefCounts.CurBlockUsed) <= (int)local_100._4_4_)) ||
         (0xfffd < (ushort)(*(short *)(*(longlong *)
                                        ((pFVar3->VertexRefCounts).RefCounts.Blocks.
                                         AllocatorInstance.Data +
                                        (ulonglong)(local_100._4_4_ >> 9) * 8) +
                                      (ulonglong)(local_100._4_4_ & 0x1ff) * 2) - 1U))) {
        local_140[0] = 0;
      }
      else {
        local_140[0] = 1;
      }
      Core::Private::Function::CheckCallable(local_c8);
      pcVar5 = local_c8;
      pppuVar12 = &local_b8;
      if (pppuStack_a0 != (undefined ***)0x0) {
        pppuVar12 = pppuStack_a0;
      }
      uVar11 = (*(code *)(*pppuVar12)[1])();
      (*pcVar5)(uVar11,local_140);
      iVar9 = FDynamicMesh3::FindEdge(this->Mesh,uVar15,uVar14);
      local_138[0] = iVar9 != -1;
      Core::Private::Function::CheckCallable(local_c8);
      pcVar5 = local_c8;
      pppuVar12 = &local_b8;
      if (pppuStack_a0 != (undefined ***)0x0) {
        pppuVar12 = pppuStack_a0;
      }
      uVar11 = (*(code *)(*pppuVar12)[1])();
      (*pcVar5)(uVar11,local_138);
      iVar9 = (this->Vertices).ArrayNum;
      uVar13 = 0;
      if ((int)uVar20 < iVar9) {
        uVar13 = uVar19;
      }
      if (uVar13 == 0) {
        local_168 = (longlong)(int)uVar20;
        local_160 = (longlong)iVar9;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      if (*(uint *)((this->Vertices).AllocatorInstance.Data + lVar17) == uVar15) {
LAB_143579a7a:
        local_130[0] = 1;
      }
      else {
        iVar9 = (this->Vertices).ArrayNum;
        uVar13 = 0;
        if ((int)uVar20 < iVar9) {
          uVar13 = uVar19;
        }
        if (uVar13 == 0) {
          local_168 = (longlong)(int)uVar20;
          local_160 = (longlong)iVar9;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
        }
        if (*(uint *)((this->Vertices).AllocatorInstance.Data + lVar17) == uVar14)
        goto LAB_143579a7a;
        local_130[0] = 0;
      }
      Core::Private::Function::CheckCallable(local_c8);
      pcVar5 = local_c8;
      pppuVar12 = &local_b8;
      if (pppuStack_a0 != (undefined ***)0x0) {
        pppuVar12 = pppuStack_a0;
      }
      uVar11 = (*(code *)(*pppuVar12)[1])();
      (*pcVar5)(uVar11,local_130);
      uVar20 = uVar20 + 1;
      uVar13 = (int)uVar20 % (this->Edges).ArrayNum;
      iVar9 = (this->Vertices).ArrayNum;
      uVar19 = 0;
      if ((int)uVar13 < iVar9) {
        uVar19 = ~uVar13 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (local_168 = (longlong)(int)uVar13, local_160 = (longlong)iVar9,
         bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      if (*(uint *)((this->Vertices).AllocatorInstance.Data + (longlong)(int)uVar13 * 4) == uVar15)
      {
LAB_143579b67:
        local_128[0] = 1;
      }
      else {
        uVar19 = (int)uVar20 % (this->Edges).ArrayNum;
        iVar9 = (this->Vertices).ArrayNum;
        uVar15 = 0;
        if ((int)uVar19 < iVar9) {
          uVar15 = ~uVar19 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (local_168 = (longlong)(int)uVar19, local_160 = (longlong)iVar9,
           bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        if (*(uint *)((this->Vertices).AllocatorInstance.Data + (longlong)(int)uVar19 * 4) == uVar14
           ) goto LAB_143579b67;
        local_128[0] = 0;
      }
      Core::Private::Function::CheckCallable(local_c8);
      pcVar5 = local_c8;
      pppuVar12 = &local_b8;
      if (pppuStack_a0 != (undefined ***)0x0) {
        pppuVar12 = pppuStack_a0;
      }
      uVar11 = (*(code *)(*pppuVar12)[1])();
      (*pcVar5)(uVar11,local_128);
      lVar17 = lVar17 + 4;
    } while ((int)uVar20 < (this->Edges).ArrayNum);
  }
  uVar20 = 0;
  if (0 < (this->Vertices).ArrayNum) {
    local_100 = 0;
    do {
      uVar6 = local_100;
      iVar9 = (this->Vertices).ArrayNum;
      uVar15 = 0;
      if ((int)uVar20 < iVar9) {
        uVar15 = ~uVar20 >> 0x1f;
      }
      if (uVar15 == 0) {
        local_168 = (longlong)(int)uVar20;
        local_160 = (longlong)iVar9;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      iVar9 = (this->Vertices).ArrayNum;
      uVar15 = *(uint *)((this->Vertices).AllocatorInstance.Data + uVar6);
      uVar14 = (int)(uVar20 + 1) % iVar9;
      uVar19 = 0;
      if ((int)uVar14 < iVar9) {
        uVar19 = ~uVar14 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (local_168 = (longlong)(int)uVar14, local_160 = (longlong)iVar9,
         bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      pFVar3 = this->Mesh;
      uVar19 = *(uint *)((this->Vertices).AllocatorInstance.Data + (longlong)(int)uVar14 * 4);
      if ((((int)uVar15 < 0) ||
          ((int)((pFVar3->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                (pFVar3->VertexRefCounts).RefCounts.CurBlockUsed) <= (int)uVar15)) ||
         (0xfffd < (ushort)(*(short *)(*(longlong *)
                                        ((pFVar3->VertexRefCounts).RefCounts.Blocks.
                                         AllocatorInstance.Data + (ulonglong)(uVar15 >> 9) * 8) +
                                      (ulonglong)(uVar15 & 0x1ff) * 2) - 1U))) {
        local_120[0] = 0;
      }
      else {
        local_120[0] = 1;
      }
      Core::Private::Function::CheckCallable(local_c8);
      pcVar5 = local_c8;
      pppuVar12 = &local_b8;
      if (pppuStack_a0 != (undefined ***)0x0) {
        pppuVar12 = pppuStack_a0;
      }
      uVar11 = (*(code *)(*pppuVar12)[1])();
      (*pcVar5)(uVar11,local_120);
      pFVar3 = this->Mesh;
      if ((((int)uVar19 < 0) ||
          ((int)((pFVar3->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                (pFVar3->VertexRefCounts).RefCounts.CurBlockUsed) <= (int)uVar19)) ||
         (0xfffd < (ushort)(*(short *)(*(longlong *)
                                        ((pFVar3->VertexRefCounts).RefCounts.Blocks.
                                         AllocatorInstance.Data + (ulonglong)(uVar19 >> 9) * 8) +
                                      (ulonglong)(uVar19 & 0x1ff) * 2) - 1U))) {
        local_118[0] = 0;
      }
      else {
        local_118[0] = 1;
      }
      Core::Private::Function::CheckCallable(local_c8);
      pcVar5 = local_c8;
      pppuVar12 = &local_b8;
      if (pppuStack_a0 != (undefined ***)0x0) {
        pppuVar12 = pppuStack_a0;
      }
      uVar11 = (*(code *)(*pppuVar12)[1])();
      (*pcVar5)(uVar11,local_118);
      iVar9 = FDynamicMesh3::FindEdge(this->Mesh,uVar15,uVar19);
      local_110[0] = iVar9 != -1;
      Core::Private::Function::CheckCallable(local_c8);
      pcVar5 = local_c8;
      pppuVar12 = &local_b8;
      if (pppuStack_a0 != (undefined ***)0x0) {
        pppuVar12 = pppuStack_a0;
      }
      uVar11 = (*(code *)(*pppuVar12)[1])();
      (*pcVar5)(uVar11,local_110);
      iVar9 = (this->Edges).ArrayNum;
      iVar16 = 0;
      uVar15 = 0;
      if ((int)uVar20 < iVar9) {
        uVar15 = ~uVar20 >> 0x1f;
      }
      if (uVar15 == 0) {
        local_168 = (longlong)(int)uVar20;
        local_160 = (longlong)iVar9;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      iVar9 = *(int *)((this->Edges).AllocatorInstance.Data + uVar6);
      uVar14 = (int)(uVar20 + 1) % (this->Vertices).ArrayNum;
      iVar1 = (this->Edges).ArrayNum;
      uVar15 = 0;
      if ((int)uVar14 < iVar1) {
        uVar15 = ~uVar14 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (local_168 = (longlong)(int)uVar14, local_160 = (longlong)iVar1,
         bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      iVar1 = *(int *)((this->Edges).AllocatorInstance.Data + (longlong)(int)uVar14 * 4);
      pFVar18 = &this->Mesh->VertexEdgeLists;
      FSmallListSet::BaseValueIterator::BaseValueIterator(&local_f8,pFVar18,uVar19,false);
      while ((((local_f8.ListSet != pFVar18 || (local_f8.ListIndex != uVar19)) ||
              (local_f8.iCur != -1)) || (local_f8.cur_ptr != -1))) {
        if ((local_f8.cur_value == iVar9) || (local_f8.cur_value == iVar1)) {
          iVar16 = iVar16 + 1;
        }
        FSmallListSet::BaseValueIterator::GotoNext(&local_f8);
      }
      local_108[0] = iVar16 == 2;
      Core::Private::Function::CheckCallable(local_c8);
      pcVar5 = local_c8;
      pppuVar12 = &local_b8;
      if (pppuStack_a0 != (undefined ***)0x0) {
        pppuVar12 = pppuStack_a0;
      }
      uVar11 = (*(code *)(*pppuVar12)[1])();
      (*pcVar5)(uVar11,local_108);
      uVar20 = uVar20 + 1;
      local_100 = local_100 + 4;
    } while ((int)uVar20 < (this->Vertices).ArrayNum);
  }
  uVar8 = local_158[0];
  if (local_c8 != (code *)0x0) {
    pppuVar12 = &local_b8;
    if (pppuStack_a0 != (undefined ***)0x0) {
      pppuVar12 = pppuStack_a0;
    }
    (*(code *)(*pppuVar12)[2])();
  }
  return (bool)uVar8;
}

// FindNearestVertexIndex @ 1435934f0

int __thiscall
UE::Geometry::FEdgeLoop::FindNearestVertexIndex(FEdgeLoop *this,TVector<double> *param_1)

{
  double *pdVar1;
  FDynamicMesh3 *pFVar2;
  longlong lVar3;
  bool bVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  undefined4 uVar16;
  double dVar17;
  undefined4 uVar18;
  
  lVar12 = (longlong)(this->Vertices).ArrayNum;
  uVar10 = 0;
  uVar16 = (undefined4)__real_7fefffffffffffff;
  uVar18 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
  uVar7 = 0xffffffff;
  if (0 < lVar12) {
    lVar13 = 0;
    uVar11 = 0xffffffff;
    do {
      pFVar2 = this->Mesh;
      uVar7 = 0;
      if ((int)uVar10 < (this->Vertices).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar8 = (*pcVar5)();
        return iVar8;
      }
      uVar7 = *(uint *)((this->Vertices).AllocatorInstance.Data + lVar13 * 4);
      uVar9 = (ulonglong)(uVar7 & 0x1ff);
      lVar3 = *(longlong *)
               ((pFVar2->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar7 >> 9) * 8);
      pdVar1 = (double *)(lVar3 + uVar9 * 0x18);
      dVar15 = *(double *)(lVar3 + 0x10 + uVar9 * 0x18) - (param_1->field0_0x0)._s_0.Z;
      dVar17 = *pdVar1 - (param_1->field0_0x0)._s_0.X;
      dVar14 = pdVar1[1] - (param_1->field0_0x0)._s_0.Y;
      dVar14 = dVar17 * dVar17 + dVar14 * dVar14 + dVar15 * dVar15;
      bVar6 = (double)CONCAT44(uVar18,uVar16) == dVar14;
      bVar4 = (double)CONCAT44(uVar18,uVar16) < dVar14;
      if ((double)CONCAT44(uVar18,uVar16) <= dVar14) {
        dVar14 = (double)CONCAT44(uVar18,uVar16);
      }
      uVar7 = uVar10;
      if (bVar4 || bVar6) {
        uVar7 = uVar11;
      }
      uVar10 = uVar10 + 1;
      lVar13 = lVar13 + 1;
      uVar16 = SUB84(dVar14,0);
      uVar18 = (undefined4)((ulonglong)dVar14 >> 0x20);
      uVar11 = uVar7;
    } while (lVar13 < lVar12);
  }
  return uVar7;
}

// FindVertexIndex @ 143594900

int __thiscall UE::Geometry::FEdgeLoop::FindVertexIndex(FEdgeLoop *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = (longlong)(this->Vertices).ArrayNum;
  uVar5 = 0;
  if (0 < lVar6) {
    lVar7 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->Vertices).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if (*(int *)((this->Vertices).AllocatorInstance.Data + lVar7 * 4) == param_1) {
        return uVar5;
      }
      uVar5 = uVar5 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar6);
  }
  return -1;
}

// GetBounds @ 1435b0d10

TAxisAlignedBox3<double> * __thiscall
UE::Geometry::FEdgeLoop::GetBounds(FEdgeLoop *this,TAxisAlignedBox3<double> *__return_storage_ptr__)

{
  double *pdVar1;
  double dVar2;
  FDynamicMesh3 *pFVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  TAxisAlignedBox3<double> *pTVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  
  uVar13 = 0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 1.7976931348623157e+308;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = -1.7976931348623157e+308;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = -1.7976931348623157e+308;
  lVar14 = (longlong)(this->Vertices).ArrayNum;
  if (0 < lVar14) {
    lVar12 = 0;
    do {
      pFVar3 = this->Mesh;
      uVar9 = 0;
      if ((int)uVar13 < (this->Vertices).ArrayNum) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TAxisAlignedBox3<double> *)(*pcVar5)();
        return pTVar10;
      }
      uVar9 = *(uint *)((this->Vertices).AllocatorInstance.Data + lVar12 * 4);
      uVar11 = (ulonglong)(uVar9 & 0x1ff);
      lVar4 = *(longlong *)
               ((pFVar3->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar9 >> 9) * 8);
      pdVar1 = (double *)(lVar4 + uVar11 * 0x18);
      dVar6 = *pdVar1;
      dVar7 = pdVar1[1];
      dVar2 = *(double *)(lVar4 + 0x10 + uVar11 * 0x18);
      if (dVar6 < (__return_storage_ptr__->Min).field0_0x0._s_0.X) {
        (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar6;
      }
      if ((__return_storage_ptr__->Max).field0_0x0._s_0.X <= dVar6 &&
          dVar6 != (__return_storage_ptr__->Max).field0_0x0._s_0.X) {
        (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar6;
      }
      if (dVar7 < (__return_storage_ptr__->Min).field0_0x0._s_0.Y) {
        (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar7;
      }
      pdVar1 = &(__return_storage_ptr__->Max).field0_0x0._s_0.Y;
      if (*pdVar1 <= dVar7 && dVar7 != *pdVar1) {
        (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar7;
      }
      if (dVar2 < (__return_storage_ptr__->Min).field0_0x0._s_0.Z) {
        (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar2;
      }
      pdVar1 = &(__return_storage_ptr__->Max).field0_0x0._s_0.Z;
      if (*pdVar1 <= dVar2 && dVar2 != *pdVar1) {
        (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar2;
      }
      uVar13 = uVar13 + 1;
      lVar12 = lVar12 + 1;
    } while (lVar12 < lVar14);
  }
  return __return_storage_ptr__;
}

// Initialize @ 1435b5fb0

void __thiscall
UE::Geometry::FEdgeLoop::Initialize
          (FEdgeLoop *this,FDynamicMesh3 *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4)

{
  this->Mesh = param_1;
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(&this->Vertices,param_2);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(&this->Edges,param_3);
  if (param_4 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    TArray<int,TSizedDefaultAllocator<32>_>::operator=(&this->BowtieVertices,param_4);
    this->bBowtiesCalculated = true;
  }
  return;
}

// InitializeFromEdges @ 1435b62f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FEdgeLoop::InitializeFromEdges
          (FEdgeLoop *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FDynamicMesh3 *pFVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar12;
  longlong lVar13;
  int iStackX_1c;
  int iStackX_24;
  undefined8 uVar11;
  
  if ((this->Mesh == (FDynamicMesh3 *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mesh != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\EdgeLoop.cpp"
                         ,0x17,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(&this->Edges,param_1);
  iVar1 = (this->Edges).ArrayNum;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&this->Vertices,iVar1,Default);
  pFVar2 = this->Mesh;
  if (((this->Edges).ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar12 = 1;
  uVar7 = *(uint *)(this->Edges).AllocatorInstance.Data;
  uVar3 = *(undefined8 *)
           (*(longlong *)
             ((pFVar2->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar7 >> 9) * 8) +
           (ulonglong)(uVar7 & 0x1ff) * 0x10);
  if (1 < iVar1) {
    lVar13 = 4;
    uVar11 = uVar3;
    do {
      iVar10 = (int)uVar11;
      pFVar2 = this->Mesh;
      uVar9 = (int)uVar12 % iVar1;
      uVar7 = 0;
      if ((int)uVar9 < (this->Edges).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
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
      uVar7 = *(uint *)((this->Edges).AllocatorInstance.Data + (longlong)(int)uVar9 * 4);
      uVar4 = *(undefined8 *)
               (*(longlong *)
                 ((pFVar2->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar7 >> 9) * 8) +
               (ulonglong)(uVar7 & 0x1ff) * 0x10);
      if ((((iVar10 != (int)uVar4) && (iVar8 = (int)((ulonglong)uVar4 >> 0x20), iVar10 != iVar8)) &&
          (iStackX_1c = (int)((ulonglong)uVar11 >> 0x20), iVar10 = iStackX_1c,
          iStackX_1c != (int)uVar4)) && (iVar10 = -1, iStackX_1c == iVar8)) {
        iVar10 = iStackX_1c;
      }
      uVar7 = 0;
      if ((int)uVar12 < (this->Vertices).ArrayNum) {
        uVar7 = ~uVar12 >> 0x1f;
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
      uVar12 = uVar12 + 1;
      *(int *)((this->Vertices).AllocatorInstance.Data + lVar13) = iVar10;
      lVar13 = lVar13 + 4;
      uVar11 = uVar4;
    } while ((int)uVar12 < iVar1);
  }
  if (((this->Vertices).ArrayNum < 2) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar1 = *(int *)((this->Vertices).AllocatorInstance.Data + 4);
  iStackX_24 = (int)((ulonglong)uVar3 >> 0x20);
  if (((int)uVar3 != iVar1) && (bVar6 = iStackX_24 == iVar1, iStackX_24 = -1, bVar6)) {
    iStackX_24 = (int)uVar3;
  }
  if (((this->Vertices).ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *(int *)(this->Vertices).AllocatorInstance.Data = iStackX_24;
  return;
}

// InitializeFromVertices @ 1435b6ad0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::FEdgeLoop::InitializeFromVertices
          (FEdgeLoop *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  int local_res8 [2];
  int local_58 [2];
  int *local_50;
  int *local_48;
  
  if ((this->Mesh == (FDynamicMesh3 *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mesh != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\EdgeLoop.cpp"
                         ,0x2b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(&this->Vertices,param_1);
  iVar1 = (this->Vertices).ArrayNum;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&this->Edges,iVar1,Default);
  if (0 < iVar1) {
    lVar10 = 0;
    uVar9 = 0;
    do {
      uVar11 = ~uVar9 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar9 < (this->Vertices).ArrayNum) {
        uVar5 = uVar11;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      local_res8[0] = *(int *)((this->Vertices).AllocatorInstance.Data + lVar10);
      uVar5 = uVar9 + 1;
      uVar8 = (int)uVar5 % iVar1;
      uVar6 = 0;
      if ((int)uVar8 < (this->Vertices).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      local_58[0] = *(int *)((this->Vertices).AllocatorInstance.Data + (longlong)(int)uVar8 * 4);
      iVar7 = FDynamicMesh3::FindEdge(this->Mesh,local_res8[0],local_58[0]);
      uVar6 = 0;
      if ((int)uVar9 < (this->Edges).ArrayNum) {
        uVar6 = uVar11;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      *(int *)((this->Edges).AllocatorInstance.Data + lVar10) = iVar7;
      uVar6 = 0;
      if ((int)uVar9 < (this->Edges).ArrayNum) {
        uVar6 = uVar11;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if (*(int *)((this->Edges).AllocatorInstance.Data + lVar10) == -1) {
        local_50 = local_res8;
        local_48 = local_58;
        `UE::Geometry::FEdgeLoop::InitializeFromVertices'::__l14::<lambda_1>::operator()(&local_50);
        return false;
      }
      lVar10 = lVar10 + 4;
      uVar9 = uVar5;
    } while ((int)uVar5 < iVar1);
  }
  if (param_2) {
    SetCorrectOrientation(this);
  }
  return true;
}

// IsBoundaryLoop @ 1435b9a60

bool __thiscall UE::Geometry::FEdgeLoop::IsBoundaryLoop(FEdgeLoop *this,FDynamicMesh3 *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (param_1 == (FDynamicMesh3 *)0x0) {
    param_1 = this->Mesh;
  }
  lVar6 = (longlong)(this->Edges).ArrayNum;
  uVar5 = 0;
  if (0 < lVar6) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->Edges).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      uVar4 = *(uint *)((this->Edges).AllocatorInstance.Data + lVar7 * 4);
      if (*(int *)(*(longlong *)
                    ((param_1->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar4 >> 9) * 8) +
                   0xc + (ulonglong)(uVar4 & 0x1ff) * 0x10) != -1) {
        return false;
      }
      uVar5 = uVar5 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar6);
  }
  return true;
}

// IsInternalLoop @ 1435ba3a0

bool __thiscall UE::Geometry::FEdgeLoop::IsInternalLoop(FEdgeLoop *this)

{
  FDynamicMesh3 *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar7 = (longlong)(this->Edges).ArrayNum;
  uVar6 = 0;
  if (0 < lVar7) {
    lVar8 = 0;
    do {
      pFVar1 = this->Mesh;
      uVar5 = 0;
      if ((int)uVar6 < (this->Edges).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar5 = *(uint *)((this->Edges).AllocatorInstance.Data + lVar8 * 4);
      if (*(int *)(*(longlong *)
                    ((pFVar1->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar5 >> 9) * 8) +
                   0xc + (ulonglong)(uVar5 & 0x1ff) * 0x10) == -1) {
        return false;
      }
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 1;
    } while (lVar8 < lVar7);
  }
  return true;
}

// SetCorrectOrientation @ 1435c20e0

bool __thiscall UE::Geometry::FEdgeLoop::SetCorrectOrientation(FEdgeLoop *this)

{
  int iVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int local_res8;
  int local_resc;
  
  iVar1 = (this->Edges).ArrayNum;
  uVar11 = 0;
  uVar12 = uVar11;
  uVar13 = uVar11;
  if (0 < iVar1) {
    do {
      uVar9 = (uint)uVar13;
      uVar7 = 0;
      if ((int)uVar9 < (this->Edges).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      uVar7 = *(uint *)((this->Edges).AllocatorInstance.Data + uVar12 * 4);
      if (*(int *)(*(longlong *)
                    ((this->Mesh->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar7 >> 9) * 8
                    ) + 0xc + (ulonglong)(uVar7 & 0x1ff) * 0x10) == -1) {
        uVar7 = 0;
        if ((int)uVar9 < (this->Vertices).ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        iVar8 = *(int *)((this->Vertices).AllocatorInstance.Data + (longlong)(int)uVar9 * 4);
        uVar9 = (int)(uVar9 + 1) % iVar1;
        uVar7 = 0;
        if ((int)uVar9 < (this->Vertices).ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        iVar1 = *(int *)((this->Vertices).AllocatorInstance.Data + (longlong)(int)uVar9 * 4);
        FDynamicMesh3::GetOrientedBoundaryEdgeV(this->Mesh,(int)&local_res8);
        if (local_res8 != iVar1) {
          return false;
        }
        if (local_resc != iVar8) {
          return false;
        }
        iVar1 = (this->Vertices).ArrayNum;
        pFVar3 = (this->Vertices).AllocatorInstance.Data;
        iVar8 = iVar1 / 2;
        if (0 < iVar8) {
          uVar12 = uVar11;
          pFVar10 = pFVar3 + (longlong)(iVar1 + -1) * 4;
          do {
            uVar2 = *(undefined4 *)(pFVar3 + uVar12 * 4);
            *(undefined4 *)(pFVar3 + uVar12 * 4) = *(undefined4 *)pFVar10;
            uVar12 = uVar12 + 1;
            *(undefined4 *)pFVar10 = uVar2;
            pFVar10 = pFVar10 + -4;
          } while ((longlong)uVar12 < (longlong)iVar8);
        }
        iVar1 = (this->Edges).ArrayNum;
        pFVar3 = (this->Edges).AllocatorInstance.Data;
        iVar8 = iVar1 / 2;
        if (0 < iVar8) {
          pFVar10 = pFVar3 + (longlong)(iVar1 + -1) * 4;
          do {
            uVar2 = *(undefined4 *)(pFVar3 + uVar11 * 4);
            *(undefined4 *)(pFVar3 + uVar11 * 4) = *(undefined4 *)pFVar10;
            uVar11 = uVar11 + 1;
            *(undefined4 *)pFVar10 = uVar2;
            pFVar10 = pFVar10 + -4;
          } while ((longlong)uVar11 < (longlong)iVar8);
        }
        return true;
      }
      uVar12 = uVar12 + 1;
      uVar13 = (ulonglong)(uVar9 + 1);
    } while ((longlong)uVar12 < (longlong)iVar1);
  }
  return false;
}

// VertexLoopToEdgeLoop @ 1435cac50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Geometry::FEdgeLoop::VertexLoopToEdgeLoop
          (FDynamicMesh3 *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  iVar1 = param_2->ArrayNum;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(param_3,iVar1,Default);
  if (0 < iVar1) {
    lVar9 = 0;
    uVar8 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar8 < param_2->ArrayNum) {
        uVar4 = ~uVar8 >> 0x1f;
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
      iVar6 = *(int *)((param_2->AllocatorInstance).Data + lVar9);
      uVar4 = uVar8 + 1;
      uVar7 = (int)uVar4 % iVar1;
      uVar5 = 0;
      if ((int)uVar7 < param_2->ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = FDynamicMesh3::FindEdge
                        (param_1,iVar6,
                         *(int *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar7 * 4));
      uVar5 = 0;
      if ((int)uVar8 < param_3->ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(int *)((param_3->AllocatorInstance).Data + lVar9) = iVar6;
      lVar9 = lVar9 + 4;
      uVar8 = uVar4;
    } while ((int)uVar4 < iVar1);
  }
  return;
}

// operator() @ 15049f930

bool __thiscall
`UE::Geometry::FEdgeLoop::InitializeFromVertices'::__l14::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6149546230385999818>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6149546230385999818>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

