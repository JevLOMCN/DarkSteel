// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 16

// FEdgeSpan @ 143567940

FEdgeSpan * __thiscall UE::Geometry::FEdgeSpan::FEdgeSpan(FEdgeSpan *this,FEdgeSpan *param_1)

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

// operator() @ 14356bf30

bool __thiscall
`UE::Geometry::FEdgeSpan::GetSubspansByAngle'::__l2::<lambda_1>::operator()
          (void *this,int param_1,FIndex2i *param_2,double param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  longlong *local_58;
  int local_50;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_30;
  
  local_58 = *(longlong **)this;
  lVar3 = *local_58;
  if (((((lVar3 == 0) || (uVar1 = (param_2->field0_0x0)._s_0.A, (int)uVar1 < 0)) ||
       (iVar7 = *(int *)(lVar3 + 0x1d4) + *(int *)(lVar3 + 0x1d0) * 0x200, iVar7 <= (int)uVar1)) ||
      ((0xfffd < (ushort)(*(short *)(*(longlong *)
                                      (*(longlong *)(lVar3 + 0x1d8) + (ulonglong)(uVar1 >> 9) * 8) +
                                    (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) ||
       (uVar2 = (param_2->field0_0x0)._s_0.B, (int)uVar2 < 0)))) ||
     ((iVar7 <= (int)uVar2 ||
      (0xfffd < (ushort)(*(short *)(*(longlong *)
                                     (*(longlong *)(lVar3 + 0x1d8) + (ulonglong)(uVar2 >> 9) * 8) +
                                   (ulonglong)(uVar2 & 0x1ff) * 2) - 1U))))) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5522276676395860256>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\EdgeSpan.cpp"
                       ,0x120,"Mesh && Mesh->IsEdge(AttachedEids.A) && Mesh->IsEdge(AttachedEids.B)"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  else {
    local_50 = param_1;
    bVar5 = ``UE::Geometry::FEdgeSpan::GetSubspansByAngle'::__l2::<lambda_1>::operator()'::__l2::
            <lambda_1>::operator()(&local_58,uVar1,(TVector<double> *)&local_30._s_0);
    if ((bVar5) &&
       (bVar5 = ``UE::Geometry::FEdgeSpan::GetSubspansByAngle'::__l2::<lambda_1>::operator()'::__l2
                ::<lambda_1>::operator()
                          (&local_58,(param_2->field0_0x0)._s_0.B,(TVector<double> *)&local_48._s_0)
       , bVar5)) {
      return param_3 <=
             local_48._s_0.Y * local_30._s_0.Y + local_48._s_0.X * local_30._s_0.X +
             local_48._s_0.Z * local_30._s_0.Z;
    }
  }
  return false;
}

// CalculateBowtieVertices @ 1435788d0

void __thiscall UE::Geometry::FEdgeSpan::CalculateBowtieVertices(FEdgeSpan *this)

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

// CheckValidity @ 143579f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014357a091) */

bool __thiscall
UE::Geometry::FEdgeSpan::CheckValidity(FEdgeSpan *this,EValidityCheckFailMode param_1)

{
  int iVar1;
  char *pcVar2;
  FDynamicMesh3 *pFVar3;
  FDynamicMesh3 *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined ***pppuVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  FSmallListSet *pFVar20;
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
              TFunction_OwnedObject<`UE::Geometry::FEdgeSpan::CheckValidity'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_158[0] = 1;
  pppuStack_a0 = (undefined ***)0x0;
  local_c8 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FEdgeSpan::CheckValidity'::__l2::<lambda_1>,void,bool>
             ::Call;
  if (param_1 == Check) {
    local_c8 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FEdgeSpan::CheckValidity'::__l5::<lambda_2>,void,bool>
               ::Call;
    local_a8 = local_78;
    uStack_a4 = uStack_74;
    pppuStack_a0 = (undefined ***)0x0;
    local_b8 = &Core::Private::Function::
                TFunction_OwnedObject<`UE::Geometry::FEdgeSpan::CheckValidity'::`5'::<lambda_2>,0,0>
                ::_vftable_;
    puStack_b0 = local_158;
    local_98 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FEdgeSpan::CheckValidity'::__l2::<lambda_1>,void,bool>
               ::Call;
    local_88 = &Core::Private::Function::
                TFunction_OwnedObject<`UE::Geometry::FEdgeSpan::CheckValidity'::`2'::<lambda_1>,0,0>
                ::_vftable_;
    puStack_80 = local_158;
    uStack_70 = 0;
  }
  else {
    puStack_b0 = local_158;
    if (param_1 != Ensure) goto LAB_14357a09b;
    local_c8 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FEdgeSpan::CheckValidity'::__l9::<lambda_3>,void,bool>
               ::Call;
    local_a8 = local_48;
    uStack_a4 = uStack_44;
    pppuStack_a0 = (undefined ***)0x0;
    local_b8 = &Core::Private::Function::
                TFunction_OwnedObject<`UE::Geometry::FEdgeSpan::CheckValidity'::`9'::<lambda_3>,0,0>
                ::_vftable_;
    puStack_b0 = local_158;
    local_68 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FEdgeSpan::CheckValidity'::__l2::<lambda_1>,void,bool>
               ::Call;
    local_58 = &Core::Private::Function::
                TFunction_OwnedObject<`UE::Geometry::FEdgeSpan::CheckValidity'::`2'::<lambda_1>,0,0>
                ::_vftable_;
    puStack_50 = local_158;
    uStack_40 = 0;
    pppuVar12 = &local_58;
  }
  pppuStack_a0 = (undefined ***)0x0;
  (*(code *)(*pppuVar12)[2])();
LAB_14357a09b:
  local_150[0] = (this->Vertices).ArrayNum == (this->Edges).ArrayNum + 1;
  Core::Private::Function::CheckCallable(local_c8);
  pcVar5 = local_c8;
  pppuVar12 = &local_b8;
  if (pppuStack_a0 != (undefined ***)0x0) {
    pppuVar12 = pppuStack_a0;
  }
  puVar10 = (undefined8 *)(*(code *)(*pppuVar12)[1])();
  if (pcVar5 == Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FEdgeSpan::CheckValidity'::__l2::<lambda_1>,void,bool>
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
  if (0 < (this->Edges).ArrayNum) {
    lVar16 = 0;
    uVar18 = 0;
    do {
      iVar8 = (this->Edges).ArrayNum;
      pFVar3 = this->Mesh;
      uVar19 = ~uVar18 >> 0x1f;
      uVar14 = 0;
      if ((int)uVar18 < iVar8) {
        uVar14 = uVar19;
      }
      if (uVar14 == 0) {
        local_168 = (longlong)(int)uVar18;
        local_160 = (longlong)iVar8;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      pFVar4 = this->Mesh;
      uVar14 = *(uint *)((this->Edges).AllocatorInstance.Data + lVar16);
      local_100 = *(ulonglong *)
                   (*(longlong *)
                     ((pFVar3->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar14 >> 9) * 8)
                   + (ulonglong)(uVar14 & 0x1ff) * 0x10);
      uVar14 = (uint)local_100;
      if ((((int)uVar14 < 0) ||
          ((int)((pFVar4->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                (pFVar4->VertexRefCounts).RefCounts.CurBlockUsed) <= (int)uVar14)) ||
         (0xfffd < (ushort)(*(short *)(*(longlong *)
                                        ((pFVar4->VertexRefCounts).RefCounts.Blocks.
                                         AllocatorInstance.Data +
                                        ((local_100 & 0xffffffff) >> 9) * 8) +
                                      (ulonglong)(uVar14 & 0x1ff) * 2) - 1U))) {
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
      uVar13 = local_100._4_4_;
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
      iVar8 = FDynamicMesh3::FindEdge(this->Mesh,uVar14,uVar13);
      local_138[0] = iVar8 != -1;
      Core::Private::Function::CheckCallable(local_c8);
      pcVar5 = local_c8;
      pppuVar12 = &local_b8;
      if (pppuStack_a0 != (undefined ***)0x0) {
        pppuVar12 = pppuStack_a0;
      }
      uVar11 = (*(code *)(*pppuVar12)[1])();
      (*pcVar5)(uVar11,local_138);
      iVar8 = (this->Vertices).ArrayNum;
      uVar9 = 0;
      if ((int)uVar18 < iVar8) {
        uVar9 = uVar19;
      }
      if (uVar9 == 0) {
        local_168 = (longlong)(int)uVar18;
        local_160 = (longlong)iVar8;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      if (*(uint *)((this->Vertices).AllocatorInstance.Data + lVar16) == uVar14) {
LAB_14357a38a:
        local_130[0] = 1;
      }
      else {
        iVar8 = (this->Vertices).ArrayNum;
        uVar9 = 0;
        if ((int)uVar18 < iVar8) {
          uVar9 = uVar19;
        }
        if (uVar9 == 0) {
          local_168 = (longlong)(int)uVar18;
          local_160 = (longlong)iVar8;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
        }
        if (*(uint *)((this->Vertices).AllocatorInstance.Data + lVar16) == uVar13)
        goto LAB_14357a38a;
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
      iVar8 = (this->Vertices).ArrayNum;
      uVar19 = uVar18 + 1;
      uVar9 = 0;
      if ((int)uVar19 < iVar8) {
        uVar9 = ~uVar19 >> 0x1f;
      }
      if (uVar9 == 0) {
        local_168 = (longlong)(int)uVar19;
        local_160 = (longlong)iVar8;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      lVar16 = lVar16 + 4;
      if (*(uint *)((this->Vertices).AllocatorInstance.Data + lVar16) == uVar14) {
LAB_14357a475:
        local_128[0] = 1;
      }
      else {
        iVar8 = (this->Vertices).ArrayNum;
        uVar14 = 0;
        if ((int)uVar19 < iVar8) {
          uVar14 = ~uVar19 >> 0x1f;
        }
        if (uVar14 == 0) {
          local_168 = (longlong)(int)uVar18 + 1;
          local_160 = (longlong)iVar8;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
        }
        if (*(uint *)((this->Vertices).AllocatorInstance.Data + lVar16) == uVar13)
        goto LAB_14357a475;
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
      uVar18 = uVar19;
    } while ((int)uVar19 < (this->Edges).ArrayNum);
  }
  uVar18 = 0;
  if (0 < (this->Vertices).ArrayNum + -1) {
    local_100 = 0;
    do {
      uVar17 = local_100;
      iVar8 = (this->Vertices).ArrayNum;
      uVar14 = 0;
      if ((int)uVar18 < iVar8) {
        uVar14 = ~uVar18 >> 0x1f;
      }
      if (uVar14 == 0) {
        local_168 = (longlong)(int)uVar18;
        local_160 = (longlong)iVar8;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      uVar14 = uVar18 + 1;
      iVar8 = (this->Vertices).ArrayNum;
      uVar19 = *(uint *)((this->Vertices).AllocatorInstance.Data + uVar17);
      uVar13 = 0;
      if ((int)uVar14 < iVar8) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if (uVar13 == 0) {
        local_168 = (longlong)(int)uVar14;
        local_160 = (longlong)iVar8;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      pFVar3 = this->Mesh;
      uVar14 = *(uint *)((this->Vertices).AllocatorInstance.Data + uVar17 + 4);
      if ((((int)uVar19 < 0) ||
          ((int)((pFVar3->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                (pFVar3->VertexRefCounts).RefCounts.CurBlockUsed) <= (int)uVar19)) ||
         (0xfffd < (ushort)(*(short *)(*(longlong *)
                                        ((pFVar3->VertexRefCounts).RefCounts.Blocks.
                                         AllocatorInstance.Data + (ulonglong)(uVar19 >> 9) * 8) +
                                      (ulonglong)(uVar19 & 0x1ff) * 2) - 1U))) {
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
      if ((((int)uVar14 < 0) ||
          ((int)((pFVar3->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                (pFVar3->VertexRefCounts).RefCounts.CurBlockUsed) <= (int)uVar14)) ||
         (0xfffd < (ushort)(*(short *)(*(longlong *)
                                        ((pFVar3->VertexRefCounts).RefCounts.Blocks.
                                         AllocatorInstance.Data + (ulonglong)(uVar14 >> 9) * 8) +
                                      (ulonglong)(uVar14 & 0x1ff) * 2) - 1U))) {
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
      iVar8 = FDynamicMesh3::FindEdge(this->Mesh,uVar19,uVar14);
      local_110[0] = iVar8 != -1;
      Core::Private::Function::CheckCallable(local_c8);
      pcVar5 = local_c8;
      pppuVar12 = &local_b8;
      if (pppuStack_a0 != (undefined ***)0x0) {
        pppuVar12 = pppuStack_a0;
      }
      uVar11 = (*(code *)(*pppuVar12)[1])();
      (*pcVar5)(uVar11,local_110);
      if ((int)uVar18 < (this->Vertices).ArrayNum + -2) {
        iVar8 = (this->Edges).ArrayNum;
        iVar15 = 0;
        uVar19 = 0;
        if ((int)uVar18 < iVar8) {
          uVar19 = ~uVar18 >> 0x1f;
        }
        if (uVar19 == 0) {
          local_168 = (longlong)(int)uVar18;
          local_160 = (longlong)iVar8;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
        }
        iVar8 = *(int *)((this->Edges).AllocatorInstance.Data + uVar17);
        uVar13 = (int)(uVar18 + 1) % (this->Vertices).ArrayNum;
        iVar1 = (this->Edges).ArrayNum;
        uVar19 = 0;
        if ((int)uVar13 < iVar1) {
          uVar19 = ~uVar13 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (local_168 = (longlong)(int)uVar13, local_160 = (longlong)iVar1,
           bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        iVar1 = *(int *)((this->Edges).AllocatorInstance.Data + (longlong)(int)uVar13 * 4);
        pFVar20 = &this->Mesh->VertexEdgeLists;
        FSmallListSet::BaseValueIterator::BaseValueIterator(&local_f8,pFVar20,uVar14,false);
        while (((local_f8.ListSet != pFVar20 || (local_f8.ListIndex != uVar14)) ||
               ((local_f8.iCur != -1 || (local_f8.cur_ptr != -1))))) {
          if ((local_f8.cur_value == iVar8) || (local_f8.cur_value == iVar1)) {
            iVar15 = iVar15 + 1;
          }
          FSmallListSet::BaseValueIterator::GotoNext(&local_f8);
        }
        local_108[0] = iVar15 == 2;
        Core::Private::Function::CheckCallable(local_c8);
        pcVar5 = local_c8;
        pppuVar12 = &local_b8;
        if (pppuStack_a0 != (undefined ***)0x0) {
          pppuVar12 = pppuStack_a0;
        }
        uVar11 = (*(code *)(*pppuVar12)[1])();
        (*pcVar5)(uVar11,local_108);
        uVar17 = local_100;
      }
      local_100 = uVar17 + 4;
      uVar18 = uVar18 + 1;
    } while ((int)uVar18 < (this->Vertices).ArrayNum + -1);
  }
  uVar7 = local_158[0];
  if (local_c8 != (code *)0x0) {
    pppuVar12 = &local_b8;
    if (pppuStack_a0 != (undefined ***)0x0) {
      pppuVar12 = pppuStack_a0;
    }
    (*(code *)(*pppuVar12)[2])();
  }
  return (bool)uVar7;
}

// FindNearestVertexIndex @ 143593640

int __thiscall
UE::Geometry::FEdgeSpan::FindNearestVertexIndex(FEdgeSpan *this,TVector<double> *param_1)

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

// FindVertexIndex @ 1435949c0

int __thiscall UE::Geometry::FEdgeSpan::FindVertexIndex(FEdgeSpan *this,int param_1)

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

// GetBounds @ 1435b0e70

TAxisAlignedBox3<double> * __thiscall
UE::Geometry::FEdgeSpan::GetBounds(FEdgeSpan *this,TAxisAlignedBox3<double> *__return_storage_ptr__)

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
  uint uVar12;
  longlong lVar13;
  
  uVar12 = 0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 1.7976931348623157e+308;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = -1.7976931348623157e+308;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = -1.7976931348623157e+308;
  if (0 < (this->Vertices).ArrayNum) {
    lVar13 = 0;
    do {
      pFVar3 = this->Mesh;
      uVar9 = 0;
      if ((int)uVar12 < (this->Vertices).ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
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
      uVar9 = *(uint *)((this->Vertices).AllocatorInstance.Data + lVar13);
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
      uVar12 = uVar12 + 1;
      lVar13 = lVar13 + 4;
    } while ((int)uVar12 < (this->Vertices).ArrayNum);
  }
  return __return_storage_ptr__;
}

// GetPolyline @ 1435b2820

void __thiscall UE::Geometry::FEdgeSpan::GetPolyline(FEdgeSpan *this,TPolyline<double,3> *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  FDynamicMesh3 *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  piVar1 = &(param_1->Vertices).ArrayMax;
  (param_1->Vertices).ArrayNum = 0;
  if ((param_1->Vertices).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)param_1,0,piVar1);
  }
  uVar12 = 0;
  if (0 < (this->Vertices).ArrayNum) {
    lVar13 = 0;
    do {
      pFVar3 = this->Mesh;
      uVar9 = 0;
      if ((int)uVar12 < (this->Vertices).ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar4 = (param_1->Vertices).AllocatorInstance.Data;
      uVar9 = *(uint *)((this->Vertices).AllocatorInstance.Data + lVar13);
      uVar11 = (ulonglong)(uVar9 & 0x1ff);
      lVar5 = *(longlong *)
               ((pFVar3->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar9 >> 9) * 8);
      puVar2 = (undefined8 *)(lVar5 + uVar11 * 0x18);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      local_28 = *(undefined8 *)(lVar5 + 0x10 + uVar11 * 0x18);
      if (((pFVar4 <= (FScriptContainerElement *)&local_38) &&
          ((FScriptContainerElement *)&local_38 < pFVar4 + (longlong)*piVar1 * 0x18)) &&
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
      iVar10 = (param_1->Vertices).ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,(ForAnyElementType *)param_1,piVar1);
      }
      uVar12 = uVar12 + 1;
      (param_1->Vertices).ArrayNum = iVar10 + 1;
      lVar13 = lVar13 + 4;
      pFVar6 = (param_1->Vertices).AllocatorInstance.Data;
      pFVar4 = pFVar6 + (longlong)iVar10 * 0x18;
      *(undefined8 *)pFVar4 = local_38;
      *(undefined8 *)(pFVar4 + 8) = uStack_30;
      *(undefined8 *)(pFVar6 + (longlong)iVar10 * 0x18 + 0x10) = local_28;
    } while ((int)uVar12 < (this->Vertices).ArrayNum);
  }
  return;
}

// GetSubspansByAngle @ 1435b30e0

/* WARNING: Removing unreachable block (ram,0x0001435b3d29) */
/* WARNING: Removing unreachable block (ram,0x0001435b4658) */
/* WARNING: Removing unreachable block (ram,0x0001435b3d37) */
/* WARNING: Removing unreachable block (ram,0x0001435b4666) */
/* WARNING: Removing unreachable block (ram,0x0001435b3d45) */
/* WARNING: Removing unreachable block (ram,0x0001435b4674) */

void __thiscall
UE::Geometry::FEdgeSpan::GetSubspansByAngle
          (FEdgeSpan *this,double param_1,int param_2,
          TArray<UE::Geometry::FEdgeSpan,TSizedDefaultAllocator<32>_> *param_3)

{
  undefined4 uVar1;
  FDynamicMesh3 *pFVar2;
  FEdgeSpan *pFVar3;
  FDynamicMesh3 *pFVar4;
  undefined8 uVar5;
  code *pcVar6;
  TArray<UE::Geometry::FEdgeSpan,TSizedDefaultAllocator<32>_> *pTVar7;
  ForAnyElementType FVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  int iVar21;
  longlong lVar22;
  double dVar23;
  undefined1 local_res10 [8];
  int local_res18;
  TArray<UE::Geometry::FEdgeSpan,TSizedDefaultAllocator<32>_> *local_res20;
  uint local_1b8 [2];
  ForAnyElementType local_1b0;
  undefined8 local_1a8;
  ForAnyElementType local_1a0;
  undefined8 local_198;
  ForAnyElementType local_190;
  uint local_188;
  int iStack_184;
  ForAnyElementType local_180;
  undefined8 local_178;
  TArray<int,TSizedDefaultAllocator<32>_> local_170;
  ForAnyElementType local_160;
  undefined8 local_158;
  TArray<int,TSizedDefaultAllocator<32>_> *local_150;
  FDynamicMesh3 *local_148;
  ForAnyElementType local_140;
  undefined8 local_138;
  ForAnyElementType local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  FScriptContainerElement local_110;
  FDynamicMesh3 *local_108;
  ForAnyElementType local_100;
  undefined8 local_f8;
  ForAnyElementType local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  FScriptContainerElement local_d0;
  FScriptContainerElement *local_c8;
  uint local_c0;
  FIndex2i_u_0 local_bc;
  FEdgeSpan *local_b0;
  FScriptContainerElement *local_a8;
  FEdgeSpan *local_a0;
  undefined4 local_98;
  TVector<double>_u_0 local_90;
  TVector<double>_u_0 local_78 [2];
  
  local_res18 = param_2;
  local_res20 = param_3;
  local_b0 = this;
  dVar23 = cos(param_1 * __real_3f91df46a2529d39);
  local_198._0_4_ = 0;
  local_c8 = (FScriptContainerElement *)0x0;
  uVar19 = 1;
  local_1a0.Data = (FScriptContainerElement *)0x0;
  local_198 = 0;
  local_1b8[0] = 1;
  if (1 < (this->Vertices).ArrayNum + -1) {
    do {
      uVar15 = local_1b8[0] - 1;
      uVar14 = 0;
      if ((int)uVar15 < (this->Edges).ArrayNum) {
        uVar14 = ~uVar15 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar16 = (longlong)(int)local_1b8[0];
      uVar14 = *(uint *)((this->Edges).AllocatorInstance.Data + (longlong)(int)uVar15 * 4);
      uVar15 = 0;
      if ((int)local_1b8[0] < (this->Vertices).ArrayNum) {
        uVar15 = ~local_1b8[0] >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar1 = *(undefined4 *)((this->Vertices).AllocatorInstance.Data + lVar16 * 4);
      if (((this->Edges).ArrayNum <= (int)local_1b8[0]) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("SpanVertexIndex < Edges.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\EdgeSpan.cpp"
                              ,0x145,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar16 = (longlong)(int)local_1b8[0];
      uVar15 = 0;
      if ((int)local_1b8[0] < (this->Edges).ArrayNum) {
        uVar15 = ~local_1b8[0] >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar15 = *(uint *)((this->Edges).AllocatorInstance.Data + lVar16 * 4);
      pFVar2 = local_b0->Mesh;
      if ((((pFVar2 == (FDynamicMesh3 *)0x0) || ((int)uVar14 < 0)) ||
          (iVar21 = (pFVar2->EdgeRefCounts).RefCounts.CurBlockUsed +
                    (pFVar2->EdgeRefCounts).RefCounts.CurBlock * 0x200, iVar21 <= (int)uVar14)) ||
         (((pFVar17 = (pFVar2->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
           0xfffd < (ushort)(*(short *)(*(longlong *)(pFVar17 + (ulonglong)(uVar14 >> 9) * 8) +
                                       (ulonglong)(uVar14 & 0x1ff) * 2) - 1U) || ((int)uVar15 < 0))
          || ((iVar21 <= (int)uVar15 ||
              (0xfffd < (ushort)(*(short *)(*(longlong *)(pFVar17 + (ulonglong)(uVar15 >> 9) * 8) +
                                           (ulonglong)(uVar15 & 0x1ff) * 2) - 1U))))))) {
        bVar10 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<5522276676395860256>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\EdgeSpan.cpp"
                            ,0x120,
                            "Mesh && Mesh->IsEdge(AttachedEids.A) && Mesh->IsEdge(AttachedEids.B)");
        if (bVar10) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      else {
        local_a0 = local_b0;
        local_98 = uVar1;
        bVar10 = ``UE::Geometry::FEdgeSpan::GetSubspansByAngle'::__l2::<lambda_1>::operator()'::__l2
                 ::<lambda_1>::operator()(&local_a0,uVar14,(TVector<double> *)&local_78[0]._s_0);
        if (((bVar10) &&
            (bVar10 = ``UE::Geometry::FEdgeSpan::GetSubspansByAngle'::__l2::<lambda_1>::operator()'
                      ::__l2::<lambda_1>::operator()
                                (&local_a0,uVar15,(TVector<double> *)&local_90._s_0), bVar10)) &&
           (dVar23 <= local_90._s_0.Y * (double)local_78[0]._8_8_ +
                      local_90._s_0.X * (double)local_78[0]._0_8_ +
                      local_90._s_0.Z * (double)local_78[0]._16_8_)) {
          if (((local_1a0.Data <= (FScriptContainerElement *)local_1b8) &&
              ((FScriptContainerElement *)local_1b8 < local_1a0.Data + (longlong)local_198._4_4_ * 4
              )) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar21 = (uint)local_198;
          if ((uint)local_198 == local_198._4_4_) {
            iVar21 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_1a0,(int *)((longlong)&local_198 + 4));
          }
          local_198 = CONCAT44(local_198._4_4_,iVar21 + 1);
          *(uint *)(local_1a0.Data + (longlong)iVar21 * 4) = local_1b8[0];
        }
      }
      local_1b8[0] = local_1b8[0] + 1;
    } while ((int)local_1b8[0] < (this->Vertices).ArrayNum + -1);
    local_c8 = local_1a0.Data;
    param_3 = local_res20;
    param_2 = local_res18;
  }
  pFVar17 = local_c8;
  uVar14 = (uint)local_198;
  if (1 < (int)(uint)local_198) {
    local_180.Data = (FScriptContainerElement *)0x0;
    local_178 = 0;
    local_1a0.Data = local_c8;
    iVar21 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&local_180,(int *)((longlong)&local_178 + 4));
    *(uint *)(local_180.Data + (longlong)iVar21 * 4) = *(uint *)pFVar17;
    local_178._0_4_ = iVar21 + 1;
    if (1 < (int)(uint)local_198) {
      lVar16 = 4;
      iVar21 = (uint)local_198;
      do {
        uVar14 = 0;
        if ((int)((uint)local_178 - 1) < (int)(uint)local_178) {
          uVar14 = ~((uint)local_178 - 1) >> 0x1f;
        }
        if (uVar14 == 0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar21 = (uint)local_198;
        }
        FVar8.Data = local_180.Data;
        lVar22 = (longlong)(int)(uint)local_178;
        uVar14 = 0;
        if ((int)uVar19 < iVar21) {
          uVar14 = ~uVar19 >> 0x1f;
        }
        if (uVar14 == 0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar21 = (uint)local_198;
        }
        iVar12 = *(int *)(local_1a0.Data + lVar16) - *(int *)(FVar8.Data + lVar22 * 4 + -4);
        iVar11 = (this->Vertices).ArrayNum - iVar12;
        if (iVar12 < iVar11) {
          iVar11 = iVar12;
        }
        if (param_2 <= iVar11) {
          uVar14 = 0;
          if ((int)uVar19 < iVar21) {
            uVar14 = ~uVar19 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar17 = local_1a0.Data + lVar16;
          if (((local_180.Data <= pFVar17) &&
              (pFVar17 < local_180.Data + (longlong)(int)local_178._4_4_ * 4)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if ((uint)local_178 == local_178._4_4_) {
            local_178._0_4_ =
                 Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_180,(int *)((longlong)&local_178 + 4));
          }
          lVar22 = (longlong)(int)(uint)local_178;
          local_178._0_4_ = (uint)local_178 + 1;
          *(uint *)(local_180.Data + lVar22 * 4) = *(uint *)pFVar17;
          iVar21 = (uint)local_198;
        }
        uVar19 = uVar19 + 1;
        lVar16 = lVar16 + 4;
        param_3 = local_res20;
      } while ((int)uVar19 < iVar21);
    }
    if (local_1a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Data);
    }
    uVar14 = (uint)local_178;
    local_c8 = local_180.Data;
    local_180.Data = (FScriptContainerElement *)0x0;
    local_198 = CONCAT44(local_178._4_4_,(uint)local_178);
    local_178 = 0;
  }
  local_1a0.Data = local_c8;
  if (uVar14 == 0) {
    pFVar3 = (FEdgeSpan *)(param_3->AllocatorInstance).Data;
    if (((pFVar3 <= this) && (this < pFVar3 + param_3->ArrayMax)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar21 = param_3->ArrayNum;
    if (iVar21 == param_3->ArrayMax) {
      iVar21 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x840,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar21 + 1;
    FEdgeSpan((FEdgeSpan *)((param_3->AllocatorInstance).Data + (longlong)iVar21 * 0x40),this);
  }
  else {
    uVar13 = (ulonglong)(int)uVar14;
    local_150 = &this->Vertices;
    local_a8 = local_c8 + uVar13 * 4;
    uVar19 = 0;
    local_c0 = uVar14;
    while( true ) {
      pFVar20 = local_a8;
      pFVar17 = local_c8;
      pTVar18 = local_150;
      if (uVar14 != (uint)uVar13) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
        pTVar18 = &this->Vertices;
      }
      local_150 = pTVar18;
      if (pFVar17 == pFVar20) break;
      uVar14 = *(uint *)pFVar17;
      local_190.Data = (FScriptContainerElement *)0x0;
      local_188 = 0;
      iStack_184 = 0;
      local_160.Data = (FScriptContainerElement *)0x0;
      local_158 = 0;
      if ((int)uVar19 < (int)uVar14) {
        lVar16 = (longlong)(int)uVar19;
        do {
          pTVar9 = local_150;
          uVar15 = 0;
          if ((int)uVar19 < pTVar18->ArrayNum) {
            uVar15 = ~uVar19 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar17 = (pTVar9->AllocatorInstance).Data + lVar16 * 4;
          if (((local_190.Data <= pFVar17) && (pFVar17 < local_190.Data + (longlong)iStack_184 * 4))
             && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (local_188 == iStack_184) {
            local_188 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&local_190,&iStack_184);
          }
          lVar22 = (longlong)(int)local_188;
          local_188 = local_188 + 1;
          *(undefined4 *)(local_190.Data + lVar22 * 4) = *(undefined4 *)pFVar17;
          if (((this->Edges).ArrayNum <= (int)uVar19) &&
             (bVar10 = Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<5522276676395860342>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\EdgeSpan.cpp"
                                  ,0x176,"NewSpanVertexIndex < Edges.Num()"), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar15 = 0;
          if ((int)uVar19 < (this->Edges).ArrayNum) {
            uVar15 = ~uVar19 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar17 = (this->Edges).AllocatorInstance.Data + lVar16 * 4;
          if (((local_160.Data <= pFVar17) &&
              (pFVar17 < local_160.Data + (longlong)local_158._4_4_ * 4)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar21 = (int)local_158;
          if ((int)local_158 == local_158._4_4_) {
            iVar21 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_160,(int *)((longlong)&local_158 + 4));
          }
          uVar19 = uVar19 + 1;
          local_158 = CONCAT44(local_158._4_4_,iVar21 + 1);
          lVar16 = lVar16 + 1;
          *(undefined4 *)(local_160.Data + (longlong)iVar21 * 4) = *(undefined4 *)pFVar17;
        } while ((int)uVar19 < (int)uVar14);
      }
      pTVar9 = local_150;
      uVar19 = 0;
      if ((int)uVar14 < pTVar18->ArrayNum) {
        uVar19 = ~uVar14 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar17 = (pTVar9->AllocatorInstance).Data + (longlong)(int)uVar14 * 4;
      if (((local_190.Data <= pFVar17) && (pFVar17 < local_190.Data + (longlong)iStack_184 * 4)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (local_188 == iStack_184) {
        local_188 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_190,&iStack_184);
      }
      FVar8.Data = local_190.Data;
      lVar16 = (longlong)(int)local_188;
      uVar19 = local_188 + 1;
      _local_188 = CONCAT44(iStack_184,uVar19);
      *(undefined4 *)(local_190.Data + lVar16 * 4) = *(undefined4 *)pFVar17;
      if ((int)uVar19 < 1) {
        bVar10 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<5522276676395860347>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\EdgeSpan.cpp"
                            ,0x17b,"NewSpanVertices.Num() > 0");
        if (bVar10) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      else {
        local_148 = this->Mesh;
        local_140.Data = (FScriptContainerElement *)0x0;
        local_130.Data = (FScriptContainerElement *)0x0;
        local_128 = 0;
        local_120 = 0;
        local_118 = 0;
        local_110 = (FScriptContainerElement)0x0;
        local_138 = (ulonglong)uVar19;
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar19,0,&local_140,uVar19,(int *)((longlong)&local_138 + 4));
        memcpy(local_140.Data,FVar8.Data,(longlong)(int)uVar19 << 2);
        FVar8.Data = local_160.Data;
        iVar21 = (int)local_158;
        lVar16 = (longlong)(int)local_158;
        local_128 = CONCAT44(local_128._4_4_,(int)local_158);
        if (((int)local_158 == 0) && (local_128._4_4_ == 0)) {
          local_128 = local_158 & 0xffffffff;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,(int)local_158,local_128._4_4_,&local_130,(int)local_158,
                     (int *)((longlong)&local_128 + 4));
          if (iVar21 != 0) {
            memcpy(local_130.Data,FVar8.Data,lVar16 << 2);
          }
        }
        pTVar7 = local_res20;
        pFVar17 = (local_res20->AllocatorInstance).Data;
        if (((pFVar17 <= (FScriptContainerElement *)&local_148) &&
            ((FScriptContainerElement *)&local_148 <
             pFVar17 + (longlong)local_res20->ArrayMax * 0x40)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar21 = pTVar7->ArrayNum;
        if (iVar21 == pTVar7->ArrayMax) {
          iVar21 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x840,&pTVar7->AllocatorInstance,&pTVar7->ArrayMax);
        }
        pTVar7->ArrayNum = iVar21 + 1;
        pFVar17 = (pTVar7->AllocatorInstance).Data;
        lVar16 = (longlong)iVar21 * 0x40;
        *(FDynamicMesh3 **)(pFVar17 + lVar16) = local_148;
        *(undefined8 *)(pFVar17 + lVar16 + 8) = 0;
        *(FScriptContainerElement **)(pFVar17 + lVar16 + 8) = local_140.Data;
        *(undefined4 *)(pFVar17 + lVar16 + 0x10) = (undefined4)local_138;
        *(undefined4 *)(pFVar17 + lVar16 + 0x14) = local_138._4_4_;
        *(undefined8 *)(pFVar17 + lVar16 + 0x18) = 0;
        *(FScriptContainerElement **)(pFVar17 + lVar16 + 0x18) = local_130.Data;
        *(undefined4 *)(pFVar17 + lVar16 + 0x20) = (undefined4)local_128;
        *(int *)(pFVar17 + lVar16 + 0x24) = local_128._4_4_;
        *(undefined8 *)(pFVar17 + lVar16 + 0x28) = 0;
        *(undefined8 *)(pFVar17 + lVar16 + 0x28) = local_120;
        *(undefined4 *)(pFVar17 + lVar16 + 0x30) = (undefined4)local_118;
        *(undefined4 *)(pFVar17 + lVar16 + 0x34) = local_118._4_4_;
        pFVar17[lVar16 + 0x38] = local_110;
        local_118 = 0;
        local_120 = 0;
        local_128 = 0;
        local_130.Data = (FScriptContainerElement *)0x0;
        local_138 = 0;
        local_140.Data = (FScriptContainerElement *)0x0;
      }
      if (local_160.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_160.Data);
      }
      if (local_190.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_190.Data);
      }
      local_c8 = local_c8 + 4;
      uVar13 = (ulonglong)local_c0;
      uVar19 = uVar14;
      uVar14 = (uint)local_198;
    }
    local_1b0.Data = (FScriptContainerElement *)0x0;
    local_1a8 = 0;
    local_170.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_170.ArrayNum = 0;
    local_170.ArrayMax = 0;
    if ((int)uVar19 < (this->Vertices).ArrayNum) {
      lVar16 = (longlong)(int)uVar19;
      do {
        uVar14 = 0;
        if ((int)uVar19 < pTVar18->ArrayNum) {
          uVar14 = ~uVar19 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar17 = (pTVar18->AllocatorInstance).Data + lVar16 * 4;
        if (((local_1b0.Data <= pFVar17) &&
            (pFVar17 < local_1b0.Data + (longlong)local_1a8._4_4_ * 4)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((int)local_1a8 == local_1a8._4_4_) {
          iVar21 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_1b0,(int *)((longlong)&local_1a8 + 4));
          local_1a8 = CONCAT44(local_1a8._4_4_,iVar21);
        }
        lVar22 = (longlong)(int)local_1a8;
        local_1a8 = CONCAT44(local_1a8._4_4_,(int)local_1a8 + 1);
        *(undefined4 *)(local_1b0.Data + lVar22 * 4) = *(undefined4 *)pFVar17;
        if ((int)uVar19 < (this->Edges).ArrayNum) {
          if (((int)uVar19 < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar17 = (this->Edges).AllocatorInstance.Data + lVar16 * 4;
          if (((local_170.AllocatorInstance.Data <= pFVar17) &&
              (pFVar17 < local_170.AllocatorInstance.Data + (longlong)local_170.ArrayMax * 4)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar21 = local_170.ArrayNum;
          if (local_170.ArrayNum == local_170.ArrayMax) {
            iVar21 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_170.AllocatorInstance,&local_170.ArrayMax);
          }
          local_170.ArrayNum = iVar21 + 1;
          *(undefined4 *)(local_170.AllocatorInstance.Data + (longlong)iVar21 * 4) =
               *(undefined4 *)pFVar17;
        }
        uVar19 = uVar19 + 1;
        lVar16 = lVar16 + 1;
      } while ((int)uVar19 < (this->Vertices).ArrayNum);
    }
    iVar21 = (this->Edges).ArrayNum;
    pTVar18 = &this->Edges;
    pFVar2 = this->Mesh;
    uVar14 = iVar21 - 1;
    uVar19 = 0;
    if ((int)uVar14 < iVar21) {
      uVar19 = ~uVar14 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar21 = (this->Edges).ArrayNum;
    pFVar4 = this->Mesh;
    uVar19 = *(uint *)((pTVar18->AllocatorInstance).Data + (longlong)iVar21 * 4 + -4);
    uVar5 = *(undefined8 *)
             (*(longlong *)
               ((pFVar2->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar19 >> 9) * 8) +
             (ulonglong)(uVar19 & 0x1ff) * 0x10);
    if ((iVar21 < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar19 = *(uint *)(pTVar18->AllocatorInstance).Data;
    uVar13 = *(ulonglong *)
              (*(longlong *)
                ((pFVar4->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar19 >> 9) * 8) +
              (ulonglong)(uVar19 & 0x1ff) * 0x10);
    iVar21 = (int)uVar5;
    if (((((int)uVar13 != iVar21) &&
         (iVar11 = (int)((ulonglong)uVar5 >> 0x20), (int)uVar13 != iVar11)) &&
        (iVar12 = (int)(uVar13 >> 0x20), uVar13 = uVar13 >> 0x20, iVar12 != iVar21)) &&
       (iVar12 != iVar11)) {
      uVar13 = 0xffffffff;
    }
    if (((this->Edges).ArrayNum < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar21 = (this->Edges).ArrayNum;
    uVar14 = iVar21 - 1;
    iVar11 = *(int *)(pTVar18->AllocatorInstance).Data;
    uVar19 = 0;
    if ((int)uVar14 < iVar21) {
      uVar19 = ~uVar14 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_bc._s_0.B =
         *(undefined4 *)
          ((pTVar18->AllocatorInstance).Data + (longlong)(this->Edges).ArrayNum * 4 + -4);
    local_bc._s_0.A = iVar11;
    if (((this->Vertices).ArrayNum < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    bVar10 = `UE::Geometry::FEdgeSpan::GetSubspansByAngle'::__l2::<lambda_1>::operator()
                       (&local_b0,*(int *)(this->Vertices).AllocatorInstance.Data,
                        (FIndex2i *)&local_bc._s_0,dVar23);
    FVar8.Data = local_1b0.Data;
    pTVar7 = local_res20;
    if ((((int)uVar13 == -1) || (bVar10)) || (local_res20->ArrayNum < 1)) {
      lVar16 = (longlong)(int)local_1a8;
      local_108 = this->Mesh;
      local_100.Data = (FScriptContainerElement *)0x0;
      local_f0.Data = (FScriptContainerElement *)0x0;
      local_e8 = 0;
      local_e0 = 0;
      local_d8 = 0;
      local_d0 = (FScriptContainerElement)0x0;
      local_f8 = local_1a8 & 0xffffffff;
      uVar19 = 0;
      if ((int)local_1a8 != 0) {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(int)local_1a8,0,&local_100,(int)local_1a8,(int *)((longlong)&local_f8 + 4));
        memcpy(local_100.Data,FVar8.Data,lVar16 << 2);
        uVar19 = local_e8._4_4_;
      }
      FVar8.Data = local_170.AllocatorInstance.Data;
      iVar21 = local_170.ArrayNum;
      lVar16 = (longlong)local_170.ArrayNum;
      local_e8 = CONCAT44(local_e8._4_4_,local_170.ArrayNum);
      if ((local_170.ArrayNum == 0) && (uVar19 == 0)) {
        local_e8 = local_170._8_8_ & 0xffffffff;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_170.ArrayNum,uVar19,&local_f0,local_170.ArrayNum,
                   (int *)((longlong)&local_e8 + 4));
        if (iVar21 != 0) {
          memcpy(local_f0.Data,FVar8.Data,lVar16 << 2);
        }
      }
      pFVar17 = (pTVar7->AllocatorInstance).Data;
      if (((pFVar17 <= (FScriptContainerElement *)&local_108) &&
          ((FScriptContainerElement *)&local_108 < pFVar17 + (longlong)pTVar7->ArrayMax * 0x40)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar21 = pTVar7->ArrayNum;
      if (iVar21 == pTVar7->ArrayMax) {
        iVar21 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x840,&pTVar7->AllocatorInstance,&pTVar7->ArrayMax);
      }
      pTVar7->ArrayNum = iVar21 + 1;
      pFVar17 = (pTVar7->AllocatorInstance).Data;
      lVar16 = (longlong)iVar21 * 0x40;
      *(FDynamicMesh3 **)(pFVar17 + lVar16) = local_108;
      *(undefined8 *)(pFVar17 + lVar16 + 8) = 0;
      *(FScriptContainerElement **)(pFVar17 + lVar16 + 8) = local_100.Data;
      *(undefined4 *)(pFVar17 + lVar16 + 0x10) = (undefined4)local_f8;
      *(undefined4 *)(pFVar17 + lVar16 + 0x14) = local_f8._4_4_;
      *(undefined8 *)(pFVar17 + lVar16 + 0x18) = 0;
      *(FScriptContainerElement **)(pFVar17 + lVar16 + 0x18) = local_f0.Data;
      *(undefined4 *)(pFVar17 + lVar16 + 0x20) = (undefined4)local_e8;
      *(uint *)(pFVar17 + lVar16 + 0x24) = local_e8._4_4_;
      *(undefined8 *)(pFVar17 + lVar16 + 0x28) = 0;
      *(undefined8 *)(pFVar17 + lVar16 + 0x28) = local_e0;
      *(undefined4 *)(pFVar17 + lVar16 + 0x30) = (undefined4)local_d8;
      *(undefined4 *)(pFVar17 + lVar16 + 0x34) = local_d8._4_4_;
      pFVar17[lVar16 + 0x38] = local_d0;
      local_d8 = 0;
      local_e0 = 0;
      local_e8 = 0;
      local_f0.Data = (FScriptContainerElement *)0x0;
      local_f8 = 0;
      local_100.Data = (FScriptContainerElement *)0x0;
    }
    else {
      pFVar17 = (local_res20->AllocatorInstance).Data;
      uVar19 = 0;
      if ((int)((int)local_1a8 - 1U) < (int)local_1a8) {
        uVar19 = ~((int)local_1a8 - 1U) >> 0x1f;
      }
      if (uVar19 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      FVar8.Data = local_1b0.Data;
      lVar16 = (longlong)(int)local_1a8;
      iVar21 = (int)local_1a8;
      if (*(int *)(pFVar17 + 0x10) < 1) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar21 = (int)local_1a8;
      }
      if (*(int *)(FVar8.Data + lVar16 * 4 + -4) == **(int **)(pFVar17 + 8)) {
        if (iVar21 < 1) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar21 = (int)local_1a8;
        }
        iVar11 = (iVar21 - (iVar21 + -1)) + -1;
        if (iVar11 != 0) {
          memmove(local_1b0.Data + (longlong)(iVar21 + -1) * 4,
                  local_1b0.Data + (longlong)(iVar21 + -1) * 4 + 4,(longlong)iVar11 << 2);
          iVar21 = (int)local_1a8;
        }
        local_1a8 = CONCAT44(local_1a8._4_4_,iVar21 + -1);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&local_1b0,iVar21 + -1,(int *)((longlong)&local_1a8 + 4));
      }
      else {
        bVar10 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<5522276676395860373>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\EdgeSpan.cpp"
                            ,0x195,"FinalSpanVertices.Last() == OutSpans[0].Vertices[0]");
        if (bVar10) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if ((pTVar7->ArrayNum < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar17 = (pTVar7->AllocatorInstance).Data;
      pFVar20 = pFVar17 + 8;
      if ((pFVar20 == (FScriptContainerElement *)&local_1b0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(const void*)this != (const void*)&Items",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x767,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar21 = (int)local_1a8;
      lVar16 = (longlong)(int)local_1a8;
      iVar11 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,(int)local_1a8,(ForAnyElementType *)pFVar20,(int *)(pFVar17 + 0x10),
                          (int *)(pFVar17 + 0x14));
      memmove(*(FScriptContainerElement **)&pFVar20->field_0x0 + lVar16 * 4,
              *(FScriptContainerElement **)&pFVar20->field_0x0,(longlong)iVar11 << 2);
      if (iVar21 != 0) {
        memcpy(*(FScriptContainerElement **)&pFVar20->field_0x0,local_1b0.Data,lVar16 * 4);
      }
      if ((pTVar7->ArrayNum < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      TArray<int,TSizedDefaultAllocator<32>_>::Insert<TSizedDefaultAllocator<32>_>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)
                 ((pTVar7->AllocatorInstance).Data + 0x18),&local_170,0);
    }
    if (local_170.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.AllocatorInstance.Data);
    }
    if (local_1b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.Data);
    }
  }
  if (local_1a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.Data);
  }
  return;
}

// Initialize @ 1435b6010

void __thiscall
UE::Geometry::FEdgeSpan::Initialize
          (FEdgeSpan *this,FDynamicMesh3 *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
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

// InitializeFromEdges @ 1435b65f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FEdgeSpan::InitializeFromEdges
          (FEdgeSpan *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *_Src;
  FDynamicMesh3 *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  int iStackX_14;
  int iStackX_1c;
  ulonglong uVar8;
  
  if ((this->Mesh == (FDynamicMesh3 *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mesh != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\EdgeSpan.cpp"
                         ,0x17,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar2 = &this->Edges;
  if (pTVar2 != param_1) {
    iVar7 = param_1->ArrayNum;
    piVar1 = &(this->Edges).ArrayMax;
    _Src = (param_1->AllocatorInstance).Data;
    (this->Edges).ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar7,*piVar1,&pTVar2->AllocatorInstance,iVar7,piVar1);
      if (iVar7 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar7 << 2);
      }
    }
  }
  iVar7 = (this->Edges).ArrayNum;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&this->Vertices,iVar7 + 1,Default);
  pFVar3 = this->Mesh;
  if (((this->Edges).ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar10 = *(uint *)(pTVar2->AllocatorInstance).Data;
  uVar9 = *(ulonglong *)
           (*(longlong *)
             ((pFVar3->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar10 >> 9) * 8) +
           (ulonglong)(uVar10 & 0x1ff) * 0x10);
  iVar12 = (int)uVar9;
  iStackX_1c = (int)(uVar9 >> 0x20);
  if (iVar7 < 2) {
    if (((this->Vertices).ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(int *)(this->Vertices).AllocatorInstance.Data = iVar12;
    if (((this->Vertices).ArrayNum < 2) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(int *)((this->Vertices).AllocatorInstance.Data + 4) = iStackX_1c;
  }
  else {
    uVar10 = 1;
    if (1 < (this->Edges).ArrayNum) {
      lVar14 = 4;
      uVar8 = uVar9;
      uVar9 = uVar9 & 0xffffffff;
      do {
        iVar7 = (int)uVar8;
        pFVar3 = this->Mesh;
        uVar13 = 0;
        if ((int)uVar10 < (this->Edges).ArrayNum) {
          uVar13 = ~uVar10 >> 0x1f;
        }
        iVar11 = iVar7;
        if ((uVar13 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , iVar11 = (int)uVar9, bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar13 = *(uint *)((this->Edges).AllocatorInstance.Data + lVar14);
        uVar9 = *(ulonglong *)
                 (*(longlong *)
                   ((pFVar3->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar13 >> 9) * 8) +
                 (ulonglong)(uVar13 & 0x1ff) * 0x10);
        if ((((iVar7 != (int)uVar9) &&
             (iVar6 = (int)(uVar9 >> 0x20), iVar11 = iVar7, iVar7 != iVar6)) &&
            (iStackX_14 = (int)(uVar8 >> 0x20), iVar11 = iStackX_14, iStackX_14 != (int)uVar9)) &&
           (iVar11 = -1, iStackX_14 == iVar6)) {
          iVar11 = iStackX_14;
        }
        uVar13 = 0;
        if ((int)uVar10 < (this->Vertices).ArrayNum) {
          uVar13 = ~uVar10 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar10 = uVar10 + 1;
        *(int *)((this->Vertices).AllocatorInstance.Data + lVar14) = iVar11;
        lVar14 = lVar14 + 4;
        uVar8 = uVar9;
      } while ((int)uVar10 < (this->Edges).ArrayNum);
    }
    if (((this->Vertices).ArrayNum < 2) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = *(int *)((this->Vertices).AllocatorInstance.Data + 4);
    if ((iVar12 != iVar7) && (bVar5 = iStackX_1c == iVar7, iStackX_1c = -1, bVar5)) {
      iStackX_1c = iVar12;
    }
    if (((this->Vertices).ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(int *)(this->Vertices).AllocatorInstance.Data = iStackX_1c;
    iVar7 = (this->Vertices).ArrayNum;
    uVar13 = iVar7 - 2;
    uVar10 = 0;
    if ((int)uVar13 < iVar7) {
      uVar10 = ~uVar13 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = *(int *)((this->Vertices).AllocatorInstance.Data + (longlong)(int)uVar13 * 4);
    iStackX_14 = (int)(uVar9 >> 0x20);
    if (((int)uVar9 != iVar7) && (bVar5 = iStackX_14 == iVar7, iStackX_14 = -1, bVar5)) {
      iStackX_14 = (int)uVar9;
    }
    iVar7 = (this->Vertices).ArrayNum;
    uVar13 = iVar7 - 1;
    uVar10 = 0;
    if ((int)uVar13 < iVar7) {
      uVar10 = ~uVar13 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(int *)((this->Vertices).AllocatorInstance.Data + (longlong)(int)uVar13 * 4) = iStackX_14;
  }
  return;
}

// InitializeFromVertices @ 1435b6d50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::FEdgeSpan::InitializeFromVertices
          (FEdgeSpan *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  TArray<int,TSizedDefaultAllocator<32>_> *this_00;
  TArray<int,TSizedDefaultAllocator<32>_> *this_01;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  
  if ((this->Mesh == (FDynamicMesh3 *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mesh != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\EdgeSpan.cpp"
                         ,0x36,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  this_00 = &this->Vertices;
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(this_00,param_1);
  this_01 = &this->Edges;
  iVar9 = (this->Vertices).ArrayNum + -1;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(this_01,iVar9,Default);
  if (0 < iVar9) {
    lVar8 = 0;
    uVar7 = 0;
    do {
      uVar10 = ~uVar7 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar7 < (this->Vertices).ArrayNum) {
        uVar4 = uVar10;
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
      uVar4 = uVar7 + 1;
      iVar6 = *(int *)((this_00->AllocatorInstance).Data + lVar8);
      uVar5 = 0;
      if ((int)uVar4 < (this->Vertices).ArrayNum) {
        uVar5 = ~uVar4 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      iVar6 = FDynamicMesh3::FindEdge
                        (this->Mesh,iVar6,*(int *)((this_00->AllocatorInstance).Data + lVar8 + 4));
      uVar5 = 0;
      if ((int)uVar7 < (this->Edges).ArrayNum) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      *(int *)((this_01->AllocatorInstance).Data + lVar8) = iVar6;
      uVar5 = 0;
      if ((int)uVar7 < (this->Edges).ArrayNum) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if (*(int *)((this_01->AllocatorInstance).Data + lVar8) == -1) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\EdgeSpan.cpp"
                           ,0x41,L"EdgeSpan.FromVertices: invalid edge [%d,%d]");
        if (!bVar2) {
          return false;
        }
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      lVar8 = lVar8 + 4;
      uVar7 = uVar4;
    } while ((int)uVar4 < iVar9);
  }
  if (param_2) {
    SetCorrectOrientation(this);
  }
  return true;
}

// IsBoundaryspan @ 1435b9b50

bool __thiscall UE::Geometry::FEdgeSpan::IsBoundaryspan(FEdgeSpan *this,FDynamicMesh3 *param_1)

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

// IsInternalspan @ 1435ba480

bool __thiscall UE::Geometry::FEdgeSpan::IsInternalspan(FEdgeSpan *this)

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

// SetCorrectOrientation @ 1435c2320

bool __thiscall UE::Geometry::FEdgeSpan::SetCorrectOrientation(FEdgeSpan *this)

{
  int iVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  int local_res8;
  int local_resc;
  
  lVar15 = (longlong)(this->Edges).ArrayNum;
  uVar14 = 0;
  uVar9 = uVar14;
  uVar13 = uVar14;
  if (0 < lVar15) {
    do {
      uVar11 = (uint)uVar9;
      uVar7 = 0;
      if ((int)uVar11 < (this->Edges).ArrayNum) {
        uVar7 = ~uVar11 >> 0x1f;
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
      uVar7 = *(uint *)((this->Edges).AllocatorInstance.Data + uVar13 * 4);
      if (*(int *)(*(longlong *)
                    ((this->Mesh->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar7 >> 9) * 8
                    ) + 0xc + (ulonglong)(uVar7 & 0x1ff) * 0x10) == -1) {
        uVar7 = 0;
        if ((int)uVar11 < (this->Vertices).ArrayNum) {
          uVar7 = ~uVar11 >> 0x1f;
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
        uVar12 = uVar11 + 1;
        iVar1 = *(int *)((this->Vertices).AllocatorInstance.Data + (longlong)(int)uVar11 * 4);
        uVar7 = 0;
        if ((int)uVar12 < (this->Vertices).ArrayNum) {
          uVar7 = ~uVar12 >> 0x1f;
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
        iVar8 = *(int *)((this->Vertices).AllocatorInstance.Data + (longlong)(int)uVar12 * 4);
        FDynamicMesh3::GetOrientedBoundaryEdgeV(this->Mesh,(int)&local_res8);
        if (local_res8 != iVar8) {
          return false;
        }
        if (local_resc != iVar1) {
          return false;
        }
        iVar1 = (this->Vertices).ArrayNum;
        pFVar3 = (this->Vertices).AllocatorInstance.Data;
        iVar8 = iVar1 / 2;
        if (0 < iVar8) {
          uVar9 = uVar14;
          pFVar10 = pFVar3 + (longlong)(iVar1 + -1) * 4;
          do {
            uVar2 = *(undefined4 *)(pFVar3 + uVar9 * 4);
            *(undefined4 *)(pFVar3 + uVar9 * 4) = *(undefined4 *)pFVar10;
            uVar9 = uVar9 + 1;
            *(undefined4 *)pFVar10 = uVar2;
            pFVar10 = pFVar10 + -4;
          } while ((longlong)uVar9 < (longlong)iVar8);
        }
        iVar1 = (this->Edges).ArrayNum;
        pFVar3 = (this->Edges).AllocatorInstance.Data;
        iVar8 = iVar1 / 2;
        if (0 < iVar8) {
          pFVar10 = pFVar3 + (longlong)(iVar1 + -1) * 4;
          do {
            uVar2 = *(undefined4 *)(pFVar3 + uVar14 * 4);
            *(undefined4 *)(pFVar3 + uVar14 * 4) = *(undefined4 *)pFVar10;
            uVar14 = uVar14 + 1;
            *(undefined4 *)pFVar10 = uVar2;
            pFVar10 = pFVar10 + -4;
          } while ((longlong)uVar14 < (longlong)iVar8);
        }
        return true;
      }
      uVar13 = uVar13 + 1;
      uVar9 = (ulonglong)(uVar11 + 1);
    } while ((longlong)uVar13 < lVar15);
  }
  return false;
}

// VertexSpanToEdgeSpan @ 1435cadf0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Geometry::FEdgeSpan::VertexSpanToEdgeSpan
          (FDynamicMesh3 *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  
  iVar7 = param_2->ArrayNum + -1;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(param_3,iVar7,Default);
  if (0 < iVar7) {
    lVar8 = 0;
    uVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar6 < param_2->ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar3 = uVar6 + 1;
      iVar5 = *(int *)((param_2->AllocatorInstance).Data + lVar8);
      uVar4 = 0;
      if ((int)uVar3 < param_2->ArrayNum) {
        uVar4 = ~uVar3 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar5 = FDynamicMesh3::FindEdge
                        (param_1,iVar5,*(int *)((param_2->AllocatorInstance).Data + lVar8 + 4));
      uVar4 = 0;
      if ((int)uVar6 < param_3->ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(int *)((param_3->AllocatorInstance).Data + lVar8) = iVar5;
      lVar8 = lVar8 + 4;
      uVar6 = uVar3;
    } while ((int)uVar3 < iVar7);
  }
  return;
}

