// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 19

// Add<float> @ 1448425f0

void __thiscall
FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic>::Add<float>
          (FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic> *this,
          TBounds<float> *param_1,uint param_2)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FNode *pFVar7;
  uint uVar8;
  int iVar9;
  
  pTVar1 = &this->Leaves;
  piVar2 = &(this->Leaves).ArrayNum;
  if ((uint)*piVar2 <= param_2) {
    iVar9 = (param_2 - *piVar2) + 1;
    uVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar9,&pTVar1->AllocatorInstance,piVar2,&(this->Leaves).ArrayMax);
    uVar8 = 0;
    if ((int)uVar6 < *piVar2) {
      uVar8 = ~uVar6 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    memset((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar6 * 4,0xff,(longlong)iVar9 << 2);
  }
  if ((this->Roots).Root.FirstChild == 0xffffffff) {
    uVar8 = this->FreeHead;
    if (uVar8 == 0xffffffff) {
      iVar9 = (this->Nodes).ArrayNum;
      piVar3 = &(this->Nodes).ArrayMax;
      if (iVar9 == *piVar3) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10a0,&(this->Nodes).AllocatorInstance,piVar3);
      }
      (this->Nodes).ArrayNum = iVar9 + 1;
      uVar8 = iVar9 * 4;
    }
    else {
      pFVar7 = GetNode(this,uVar8);
      this->FreeHead = pFVar7->ParentIndex;
      pFVar7->ParentIndex = 0xffffffff;
    }
    (this->Roots).Root.FirstChild = uVar8;
    pFVar7 = GetNode(this,uVar8);
    pFVar7->ParentIndex = 0xffffffff;
    pFVar7 = GetNode(this,(this->Roots).Root.FirstChild);
    pFVar7->NumChildren = 0;
  }
  uVar8 = 0;
  if ((int)param_2 < *piVar2) {
    uVar8 = ~param_2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (*(int *)((pTVar1->AllocatorInstance).Data + (longlong)(int)param_2 * 4) != -1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Leaves[ Index ] == ~0u",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DynamicBVH.h"
                       ,0x1bf,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar6 = Insert(this,(FRoot *)this,param_1,param_2 * 2 | 1);
  uVar8 = 0;
  if ((int)param_2 < *piVar2) {
    uVar8 = ~param_2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(uint *)((pTVar1->AllocatorInstance).Data + (longlong)(int)param_2 * 4) = uVar6;
  return;
}

// Update<float> @ 144859e90

void __thiscall
FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic>::Update<float>
          (FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic> *this,
          TBounds<float> *param_1,uint param_2)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FNode *pFVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  
  lVar12 = (longlong)(int)param_2;
  pTVar1 = &this->Leaves;
  piVar2 = &(this->Leaves).ArrayNum;
  uVar11 = ~param_2 >> 0x1f;
  uVar13 = 0;
  if ((int)param_2 < *piVar2) {
    uVar13 = uVar11;
  }
  if (uVar13 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (*(int *)((pTVar1->AllocatorInstance).Data + lVar12 * 4) == -1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Leaves[ Index ] != ~0u",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DynamicBVH.h"
                       ,0x1d0,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar13 = 0;
  if ((int)param_2 < *piVar2) {
    uVar13 = uVar11;
  }
  if (uVar13 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar13 = *(uint *)((pTVar1->AllocatorInstance).Data + lVar12 * 4) >> 2;
  if ((this->Nodes).ArrayNum <= (int)uVar13) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar4 = (this->Nodes).AllocatorInstance.Data;
  uVar10 = 0;
  if ((int)param_2 < *piVar2) {
    uVar10 = uVar11;
  }
  if (uVar10 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar10 = param_2 * 2 | 1;
  if (*(uint *)(pFVar4 + ((ulonglong)(*(uint *)((pTVar1->AllocatorInstance).Data + lVar12 * 4) & 3)
                         + (ulonglong)uVar13 * 0x28) * 4 + 8) != uVar10) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetNode( Leaves[ Index ] ).GetFirstChild( Leaves[ Index ] ) == ( (Index << 1) | 1 )"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DynamicBVH.h"
                       ,0x1d1,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar13 = 0;
  if ((int)param_2 < *piVar2) {
    uVar13 = uVar11;
  }
  if (uVar13 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  Extract(this,*(uint *)((pTVar1->AllocatorInstance).Data + lVar12 * 4));
  uVar13 = 0;
  if ((int)param_2 < *piVar2) {
    uVar13 = uVar11;
  }
  if (uVar13 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar12 * 4) = 0xffffffff;
  uVar13 = (this->Leaves).ArrayNum;
  if (uVar13 <= param_2) {
    iVar8 = (param_2 - uVar13) + 1;
    uVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar8,&pTVar1->AllocatorInstance,piVar2,&(this->Leaves).ArrayMax);
    uVar13 = 0;
    if ((int)uVar7 < *piVar2) {
      uVar13 = ~uVar7 >> 0x1f;
    }
    if (uVar13 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    memset((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar7 * 4,0xff,(longlong)iVar8 << 2);
  }
  if ((this->Roots).Root.FirstChild == 0xffffffff) {
    uVar13 = this->FreeHead;
    if (uVar13 == 0xffffffff) {
      iVar8 = (this->Nodes).ArrayNum;
      piVar3 = &(this->Nodes).ArrayMax;
      if (iVar8 == *piVar3) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10a0,&(this->Nodes).AllocatorInstance,piVar3);
      }
      (this->Nodes).ArrayNum = iVar8 + 1;
      uVar13 = iVar8 * 4;
    }
    else {
      pFVar9 = GetNode(this,uVar13);
      this->FreeHead = pFVar9->ParentIndex;
      pFVar9->ParentIndex = 0xffffffff;
    }
    (this->Roots).Root.FirstChild = uVar13;
    pFVar9 = GetNode(this,uVar13);
    pFVar9->ParentIndex = 0xffffffff;
    pFVar9 = GetNode(this,(this->Roots).Root.FirstChild);
    pFVar9->NumChildren = 0;
  }
  uVar13 = 0;
  if ((int)param_2 < *piVar2) {
    uVar13 = uVar11;
  }
  if (uVar13 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (*(int *)((pTVar1->AllocatorInstance).Data + lVar12 * 4) != -1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Leaves[ Index ] == ~0u",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DynamicBVH.h"
                       ,0x1bf,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar10 = Insert(this,(FRoot *)this,param_1,uVar10);
  uVar13 = 0;
  if ((int)param_2 < *piVar2) {
    uVar13 = uVar11;
  }
  if (uVar13 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  *(uint *)((pTVar1->AllocatorInstance).Data + lVar12 * 4) = uVar10;
  return;
}

// FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic> @ 14485a310

/* WARNING: Type propagation algorithm not settling */

FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic> * __thiscall
FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic>::
FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic>
          (FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic> *this)

{
  (this->Roots).Root.Bounds.Min.field0_0x0._s_0.X = 3.4028235e+38;
  this->NumTested = 0;
  (this->Nodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Nodes).ArrayNum = 0;
  (this->Nodes).ArrayMax = 0;
  (this->Leaves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Leaves).ArrayNum = 0;
  (this->Leaves).ArrayMax = 0;
  (this->Candidates).Candidates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Candidates).Candidates.ArrayNum = 0;
  (this->Candidates).Candidates.ArrayMax = 0;
  (this->Candidates).NumZeros = 0;
  (this->Roots).Root.Bounds.Min.field0_0x0._s_0.Y = 3.4028235e+38;
  (this->Roots).Root.Bounds.Min.field0_0x0._s_0.Z = 3.4028235e+38;
  (this->Roots).Root.Bounds.Min.field0_0x0._s_0.W = 1.0;
  (this->Roots).Root.Bounds.Max.field0_0x0._s_0.X = -3.4028235e+38;
  (this->Roots).Root.Bounds.Max.field0_0x0._s_0.Y = -3.4028235e+38;
  (this->Roots).Root.Bounds.Max.field0_0x0._s_0.Z = -3.4028235e+38;
  (this->Roots).Root.Bounds.Max.field0_0x0._s_0.W = 1.0;
  (this->Roots).Root.FirstChild = 0xffffffff;
  this->FreeHead = 0xffffffff;
  return this;
}

// Build @ 144868b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic>::Build
          (FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic> *this,
          TArray<TBounds<float>,TSizedDefaultAllocator<32>_> *param_1,uint param_2)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar1;
  void *_Dst;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  TArray<TBounds<float>,TSizedDefaultAllocator<32>_> *pTVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  FNode *pFVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  ForElementType<_public:_void___cdecl_FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic>::Build(TArray<TBounds<float>,TSizedDefaultAllocator<32>_>_const_&,unsigned_int)_::_2_::FCreateNode>
  FVar16;
  uint uVar17;
  FRange FVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  FRange *pFVar23;
  int *piVar24;
  longlong lVar25;
  longlong lVar26;
  TArray<FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic>::FNode,TSizedDefaultAllocator<32>_>
  *pTVar27;
  FScriptContainerElement *pFVar28;
  ulonglong uVar29;
  longlong lVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auStackY_388 [32];
  FRange local_330;
  FRange local_328;
  uint local_320;
  TArray<FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic>::FNode,TSizedDefaultAllocator<32>_>
  *local_318;
  FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic> *local_310;
  int *local_308;
  uint local_300;
  FMortonArray local_2f8;
  uint local_2e0;
  TArray<FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic>::FNode,TSizedDefaultAllocator<32>_>
  *local_2d8;
  longlong local_2d0;
  longlong local_2c8;
  FScriptContainerElement *local_2c0;
  TArray<TBounds<float>,TSizedDefaultAllocator<32>_> *local_2b8;
  int local_2b0;
  int *local_2a8;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *local_2a0;
  longlong local_298;
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  uint local_248;
  int iStack_244;
  int iStack_240;
  ForElementType<_public:_void___cdecl_FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic>::Build(TArray<TBounds<float>,TSizedDefaultAllocator<32>_>_const_&,unsigned_int)_::_2_::FCreateNode>
  local_238;
  int local_b0;
  int local_ac;
  FRange local_a8;
  FRange local_a0 [3];
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_388;
  pTVar1 = &this->Leaves;
  piVar24 = &(this->Leaves).ArrayNum;
  local_310 = this;
  local_300 = param_2;
  local_2b8 = param_1;
  local_2a8 = piVar24;
  local_2a0 = pTVar1;
  if ((uint)*piVar24 < param_2 + param_1->ArrayNum) {
    iVar20 = (param_2 - *piVar24) + param_1->ArrayNum;
    uVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,iVar20,&pTVar1->AllocatorInstance,piVar24,&(this->Leaves).ArrayMax);
    uVar19 = 0;
    if ((int)uVar11 < *piVar24) {
      uVar19 = ~uVar11 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    memset((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar11 * 4,0xff,(longlong)iVar20 << 2);
  }
  FMortonArray::FMortonArray(&local_2f8,param_1);
  auVar8 = ___xmm_3f800000ff7fffffff7fffffff7fffff;
  auVar7 = ___xmm_3f8000007f7fffff7f7fffff7f7fffff;
  uVar19 = 0xffffffff;
  local_318 = &local_310->Nodes;
  (local_310->Roots).Root.FirstChild = 0;
  local_238.SecondaryData =
       (ForElementType<_public:_void___cdecl_FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic>::Build(TArray<TBounds<float>,TSizedDefaultAllocator<32>_>_const_&,unsigned_int)_::_2_::FCreateNode>
        )0x0;
  local_b0 = 0;
  local_308 = &(local_310->Nodes).ArrayNum;
  local_328 = (FRange)((ulonglong)(uint)param_1->ArrayNum << 0x20);
  local_ac = 0x20;
  FVar18 = local_328;
  piVar24 = local_308;
  pTVar27 = local_318;
  uVar11 = param_1->ArrayNum;
  uVar21 = 0;
  local_2d8 = local_318;
  do {
    while( true ) {
      uVar17 = local_310->FreeHead;
      if (uVar17 == 0xffffffff) {
        iVar20 = *piVar24;
        if (iVar20 == local_2d8->ArrayMax) {
          iVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10a0,&local_2d8->AllocatorInstance,&local_2d8->ArrayMax);
        }
        uVar17 = iVar20 * 4;
        *piVar24 = iVar20 + 1;
        pTVar27 = local_2d8;
        local_318 = local_2d8;
      }
      else {
        pFVar13 = GetNode(local_310,uVar17);
        local_310->FreeHead = pFVar13->ParentIndex;
        pFVar13->ParentIndex = 0xffffffff;
      }
      if ((*piVar24 <= (int)(uVar17 >> 2)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar28 = (pTVar27->AllocatorInstance).Data;
      lVar25 = (ulonglong)(uVar17 >> 2) * 0xa0;
      *(uint *)(pFVar28 + lVar25) = uVar19;
      local_2c8 = lVar25;
      local_2c0 = pFVar28;
      if (uVar19 != 0xffffffff) {
        if ((*local_308 <= (int)(uVar19 >> 2)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(uint *)((local_318->AllocatorInstance).Data +
                 ((ulonglong)(uVar19 & 3) + (ulonglong)(uVar19 >> 2) * 0x28) * 4 + 8) = uVar17;
        if ((uVar17 & 1) == 0) {
          pFVar13 = GetNode(local_310,uVar17);
          pFVar13->ParentIndex = uVar19;
        }
        else {
          if ((*local_2a8 <= (int)(uVar17 >> 1)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(uint *)((local_2a0->AllocatorInstance).Data + (ulonglong)(uVar17 >> 1) * 4) = uVar19;
        }
      }
      if (((int)uVar11 <= (int)uVar21) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Range.Begin < Range.End",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DynamicBVH.h"
                              ,0x4f2,L""), bVar10)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      piVar24 = local_308;
      uVar11 = uVar11 - uVar21;
      if (4 < uVar11) break;
      *(uint *)(pFVar28 + lVar25 + 4) = uVar11;
      if (0 < (int)uVar11) {
        iVar20 = uVar17 - uVar21;
        uVar29 = (ulonglong)uVar11;
        do {
          uVar19 = 0;
          if ((int)uVar21 < local_2f8.Sorted.ArrayNum) {
            uVar19 = ~uVar21 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pTVar9 = local_2b8;
          uVar19 = *(uint *)(local_2f8.Sorted.AllocatorInstance.Data + (longlong)(int)uVar21 * 8 + 4
                            );
          uVar11 = 0;
          if ((int)uVar19 < local_2b8->ArrayNum) {
            uVar11 = ~uVar19 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar14 = (pTVar9->AllocatorInstance).Data;
          uVar11 = uVar21 + iVar20;
          uVar17 = uVar11 >> 2;
          pFVar28 = pFVar14 + (longlong)(int)uVar19 * 0x20;
          uVar3 = *(undefined8 *)pFVar28;
          uVar4 = *(undefined8 *)(pFVar28 + 8);
          pFVar14 = pFVar14 + (longlong)(int)uVar19 * 0x20 + 0x10;
          uVar5 = *(undefined8 *)pFVar14;
          uVar6 = *(undefined8 *)(pFVar14 + 8);
          if ((*piVar24 <= (int)uVar17) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar14 = (local_318->AllocatorInstance).Data;
          lVar25 = ((ulonglong)uVar17 + 1 + (ulonglong)uVar17 * 4 + (ulonglong)(uVar11 & 3)) * 0x20;
          pFVar28 = pFVar14 + lVar25;
          *(undefined8 *)pFVar28 = uVar3;
          *(undefined8 *)(pFVar28 + 8) = uVar4;
          pFVar14 = pFVar14 + lVar25 + 0x10;
          *(undefined8 *)pFVar14 = uVar5;
          *(undefined8 *)(pFVar14 + 8) = uVar6;
          SetFirstChild(local_310,uVar11,(local_300 + uVar19) * 2 | 1);
          uVar21 = uVar21 + 1;
          uVar29 = uVar29 - 1;
          lVar25 = local_2c8;
          pFVar28 = local_2c0;
        } while (uVar29 != 0);
      }
      piVar24 = local_308;
      pTVar27 = local_318;
      uVar29 = (ulonglong)*(uint *)(pFVar28 + lVar25 + 4);
      auVar31 = auVar7;
      auVar32 = auVar8;
      if (*(uint *)(pFVar28 + lVar25 + 4) != 0) {
        pFVar14 = pFVar28 + lVar25 + 0x30;
        do {
          auVar31 = minps(auVar31,*(undefined1 (*) [16])(pFVar14 + -0x10));
          auVar32 = maxps(auVar32,*(undefined1 (*) [16])pFVar14);
          pFVar14 = pFVar14 + 0x20;
          uVar29 = uVar29 - 1;
        } while (uVar29 != 0);
      }
      uVar19 = *(uint *)(pFVar28 + lVar25);
      while (local_288 = auVar31, local_278 = auVar32, uVar19 != 0xffffffff) {
        uVar11 = uVar19 >> 2;
        if ((*piVar24 <= (int)uVar11) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar28 = (pTVar27->AllocatorInstance).Data;
        lVar25 = ((ulonglong)uVar11 * 4 + 1 + (ulonglong)uVar11 + (ulonglong)(uVar19 & 3)) * 0x20;
        *(undefined1 (*) [16])(pFVar28 + lVar25) = auVar31;
        *(undefined1 (*) [16])(pFVar28 + lVar25 + 0x10) = auVar32;
        if ((uVar19 & 3) != 0) break;
        if ((*piVar24 <= (int)uVar11) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar28 = (pTVar27->AllocatorInstance).Data;
        lVar25 = (ulonglong)uVar11 * 0xa0;
        uVar29 = (ulonglong)*(uint *)(pFVar28 + lVar25 + 4);
        auVar31 = auVar7;
        auVar32 = auVar8;
        if (*(uint *)(pFVar28 + lVar25 + 4) != 0) {
          pFVar14 = pFVar28 + lVar25 + 0x30;
          do {
            auVar31 = minps(auVar31,*(undefined1 (*) [16])(pFVar14 + -0x10));
            auVar32 = maxps(auVar32,*(undefined1 (*) [16])pFVar14);
            pFVar14 = pFVar14 + 0x20;
            uVar29 = uVar29 - 1;
          } while (uVar29 != 0);
        }
        local_268 = auVar31;
        local_258 = auVar32;
        uVar19 = *(uint *)(pFVar28 + lVar25);
      }
      if (local_b0 == 0) {
        if (local_238.SecondaryData !=
            (ForElementType<_public:_void___cdecl_FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic>::Build(TArray<TBounds<float>,TSizedDefaultAllocator<32>_>_const_&,unsigned_int)_::_2_::FCreateNode>
             )0x0) {
          FMemory::Free((void *)local_238.SecondaryData);
        }
        if (local_2f8.Sorted.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2f8.Sorted.AllocatorInstance.Data);
        }
        return;
      }
      uVar19 = 0;
      if ((int)(local_b0 - 1U) < local_b0) {
        uVar19 = ~(local_b0 - 1U) >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar11 = local_b0 - 1;
      FVar16 = (ForElementType<_public:_void___cdecl_FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic>::Build(TArray<TBounds<float>,TSizedDefaultAllocator<32>_>_const_&,unsigned_int)_::_2_::FCreateNode>
                )&local_238;
      if (local_238.SecondaryData !=
          (ForElementType<_public:_void___cdecl_FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic>::Build(TArray<TBounds<float>,TSizedDefaultAllocator<32>_>_const_&,unsigned_int)_::_2_::FCreateNode>
           )0x0) {
        FVar16 = local_238.SecondaryData;
      }
      uVar19 = *(uint *)((longlong)FVar16 + (longlong)(int)uVar11 * 0xc);
      uVar21 = 0;
      if ((int)uVar11 < local_b0) {
        uVar21 = ~uVar11 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar16 = (ForElementType<_public:_void___cdecl_FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic>::Build(TArray<TBounds<float>,TSizedDefaultAllocator<32>_>_const_&,unsigned_int)_::_2_::FCreateNode>
                )&local_238;
      if (local_238.SecondaryData !=
          (ForElementType<_public:_void___cdecl_FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic>::Build(TArray<TBounds<float>,TSizedDefaultAllocator<32>_>_const_&,unsigned_int)_::_2_::FCreateNode>
           )0x0) {
        FVar16 = local_238.SecondaryData;
      }
      FVar18 = *(FRange *)((uchar *)((longlong)FVar16 + 4) + (longlong)(local_b0 + -1) * 0xc);
      local_328 = FVar18;
      if ((local_b0 < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar16 = (ForElementType<_public:_void___cdecl_FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic>::Build(TArray<TBounds<float>,TSizedDefaultAllocator<32>_>_const_&,unsigned_int)_::_2_::FCreateNode>
                )&local_238;
      if (local_238.SecondaryData !=
          (ForElementType<_public:_void___cdecl_FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic>::Build(TArray<TBounds<float>,TSizedDefaultAllocator<32>_>_const_&,unsigned_int)_::_2_::FCreateNode>
           )0x0) {
        FVar16 = local_238.SecondaryData;
      }
      _Dst = (void *)((longlong)FVar16 + (longlong)(local_b0 + -1) * 0xc);
      iVar20 = (local_b0 - (local_b0 + -1)) + -1;
      if (iVar20 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + 0xc),(longlong)iVar20 * 0xc);
      }
      local_b0 = local_b0 + -1;
      uVar11 = local_328.End;
      uVar21 = local_328.Begin;
    }
    local_a8 = FVar18;
    local_320 = 1;
    lVar30 = 0;
    lVar25 = 1;
    do {
      lVar26 = lVar25;
      uVar19 = local_320;
      local_330 = local_a0[lVar30 + -1];
      uVar21 = local_330.Begin;
      local_328.Begin = local_320;
      uVar11 = 0;
      if ((int)uVar21 < local_2f8.Sorted.ArrayNum) {
        uVar11 = ~uVar21 >> 0x1f;
      }
      local_2e0 = local_320;
      local_298 = lVar26;
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar22 = local_330.End - 1;
      uVar11 = *(uint *)(local_2f8.Sorted.AllocatorInstance.Data + (longlong)(int)uVar21 * 8);
      uVar21 = 0;
      if ((int)uVar22 < local_2f8.Sorted.ArrayNum) {
        uVar21 = ~uVar22 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar11 = uVar11 ^ *(uint *)(local_2f8.Sorted.AllocatorInstance.Data +
                                 (longlong)(int)uVar22 * 8);
      if (uVar11 == 0) {
        FMortonArray::RegenerateCodes(&local_2f8,&local_330);
        lVar25 = (longlong)local_330.Begin;
        uVar11 = 0;
        if (local_330.Begin < local_2f8.Sorted.ArrayNum) {
          uVar11 = (uint)~local_330.Begin >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar22 = local_330.End - 1;
        uVar11 = *(uint *)(local_2f8.Sorted.AllocatorInstance.Data + lVar25 * 8);
        uVar21 = 0;
        if ((int)uVar22 < local_2f8.Sorted.ArrayNum) {
          uVar21 = ~uVar22 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar11 = uVar11 ^ *(uint *)(local_2f8.Sorted.AllocatorInstance.Data +
                                   (longlong)(int)uVar22 * 8);
        if (uVar11 != 0) goto LAB_1448694a8;
        uVar11 = local_330.End + local_330.Begin >> 1;
      }
      else {
LAB_1448694a8:
        local_2b0 = 0x1f;
        if (uVar11 != 0) {
          for (; uVar11 >> local_2b0 == 0; local_2b0 = local_2b0 + -1) {
          }
        }
        iVar20 = 0;
        if (uVar11 != 0) {
          iVar20 = local_2b0;
        }
        uVar19 = local_320;
        uVar11 = local_330.End;
        uVar21 = local_330.Begin;
        if (local_330.Begin + 1U != local_330.End) {
          do {
            uVar22 = (int)(uVar11 + uVar21) >> 1;
            uVar19 = 0;
            if ((int)uVar22 < local_2f8.Sorted.ArrayNum) {
              uVar19 = ~uVar22 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if ((1 << ((byte)iVar20 & 0x1f) &
                *(uint *)(local_2f8.Sorted.AllocatorInstance.Data + (longlong)(int)uVar22 * 8)) == 0
               ) {
              uVar21 = uVar22;
              uVar22 = uVar11;
            }
            uVar11 = uVar22;
            uVar19 = local_320;
          } while (uVar21 + 1 != uVar11);
        }
      }
      if ((uVar11 == local_330.Begin) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Middle != Child.Begin",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DynamicBVH.h"
                              ,0x523,L""), bVar10)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((uVar11 == local_330.End) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Middle != Child.End",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DynamicBVH.h"
                              ,0x524,L""), bVar10)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      piVar24 = local_308;
      local_a0[lVar30 + -1].Begin = local_330.Begin;
      local_320 = uVar19 + 1;
      lVar25 = lVar26 + 1;
      local_a0[lVar30 + -1].End = uVar11;
      uVar19 = 0;
      local_a0[lVar26 + -1].End = local_330.End;
      lVar30 = -1;
      lVar15 = 0;
      local_a0[lVar26 + -1].Begin = uVar11;
      if (0 < lVar25) {
        do {
          uVar11 = local_a0[lVar15 + -1].End - local_a0[lVar15 + -1].Begin;
          if ((4 < uVar11) && ((int)uVar19 < (int)uVar11)) {
            lVar30 = lVar15;
            uVar19 = uVar11;
          }
          lVar15 = lVar15 + 1;
        } while (lVar15 < lVar25);
      }
    } while ((local_320 < 4) && (-1 < lVar30));
    lVar30 = 0;
    *(uint *)(local_2c0 + local_2c8 + 4) = local_320;
    local_2d0 = lVar25;
    if (lVar26 < 1) {
      iVar20 = 0;
      lVar30 = 0;
      lVar25 = lVar26;
      uVar19 = local_328.Begin;
      if (-1 < lVar26) goto LAB_1448696b0;
    }
    else {
      pFVar23 = local_a0 + lVar26 + -1;
      do {
        if (local_a0[lVar30 + -1].End - local_a0[lVar30 + -1].Begin == 1) {
          FVar18 = local_a0[lVar30 + -1];
          lVar26 = lVar26 + -1;
          local_a0[lVar30 + -1] = *pFVar23;
          *pFVar23 = FVar18;
          pFVar23 = pFVar23 + -1;
        }
        else {
          lVar30 = lVar30 + 1;
        }
        lVar25 = local_298;
        uVar19 = local_2e0;
      } while (lVar30 < lVar26);
LAB_1448696b0:
      iVar20 = 0;
      lVar30 = 0;
      uVar19 = uVar17 + uVar19;
      do {
        uVar11 = local_a0[lVar25 + -1].Begin;
        if (local_a0[lVar25 + -1].End - uVar11 != 1) break;
        iVar20 = iVar20 + 1;
        lVar30 = lVar30 + 1;
        uVar21 = 0;
        if ((int)uVar11 < local_2f8.Sorted.ArrayNum) {
          uVar21 = ~uVar11 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pTVar9 = local_2b8;
        uVar11 = *(uint *)(local_2f8.Sorted.AllocatorInstance.Data + (longlong)(int)uVar11 * 8 + 4);
        uVar21 = 0;
        if ((int)uVar11 < local_2b8->ArrayNum) {
          uVar21 = ~uVar11 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar28 = (pTVar9->AllocatorInstance).Data;
        uVar21 = uVar19 >> 2;
        auVar31 = *(undefined1 (*) [16])(pFVar28 + (longlong)(int)uVar11 * 0x20);
        auVar32 = *(undefined1 (*) [16])(pFVar28 + (longlong)(int)uVar11 * 0x20 + 0x10);
        if ((*piVar24 <= (int)uVar21) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar28 = (local_318->AllocatorInstance).Data;
        lVar26 = ((ulonglong)uVar21 + 1 + (ulonglong)uVar21 * 4 + (ulonglong)(uVar19 & 3)) * 0x20;
        *(undefined1 (*) [16])(pFVar28 + lVar26) = auVar31;
        *(undefined1 (*) [16])(pFVar28 + lVar26 + 0x10) = auVar32;
        SetFirstChild(local_310,uVar19,(local_300 + uVar11) * 2 | 1);
        uVar19 = uVar19 - 1;
        lVar25 = lVar25 + -1;
      } while (-1 < lVar25);
    }
    lVar25 = local_2d0;
    uVar19 = local_320;
    if (((int)local_320 <= iVar20) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("NumLeaves < NumChildren",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DynamicBVH.h"
                            ,0x555,L""), bVar10)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar15 = 0;
    lVar26 = (lVar25 - lVar30) + -1;
    uVar11 = uVar17;
    if (0 < lVar26) {
      do {
        iStack_244 = local_a0[lVar15 + -1].Begin;
        iStack_240 = local_a0[lVar15 + -1].End;
        FVar16 = (ForElementType<_public:_void___cdecl_FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic>::Build(TArray<TBounds<float>,TSizedDefaultAllocator<32>_>_const_&,unsigned_int)_::_2_::FCreateNode>
                  )&local_238;
        if (local_238.SecondaryData !=
            (ForElementType<_public:_void___cdecl_FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic>::Build(TArray<TBounds<float>,TSizedDefaultAllocator<32>_>_const_&,unsigned_int)_::_2_::FCreateNode>
             )0x0) {
          FVar16 = local_238.SecondaryData;
        }
        local_248 = uVar11;
        if ((ulonglong)FVar16 <= &local_248) {
          FVar16 = (ForElementType<_public:_void___cdecl_FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic>::Build(TArray<TBounds<float>,TSizedDefaultAllocator<32>_>_const_&,unsigned_int)_::_2_::FCreateNode>
                    )&local_238;
          if (local_238.SecondaryData !=
              (ForElementType<_public:_void___cdecl_FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic>::Build(TArray<TBounds<float>,TSizedDefaultAllocator<32>_>_const_&,unsigned_int)_::_2_::FCreateNode>
               )0x0) {
            FVar16 = local_238.SecondaryData;
          }
          if ((&local_248 < (uint *)((longlong)FVar16 + (longlong)local_ac * 0xc)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        iVar12 = local_b0;
        if (local_b0 == local_ac) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<_FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic>::Build_::__l2::FCreateNode>_>
                             (0x40c,&local_238,&local_ac);
        }
        local_b0 = iVar12 + 1;
        FVar16 = (ForElementType<_public:_void___cdecl_FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic>::Build(TArray<TBounds<float>,TSizedDefaultAllocator<32>_>_const_&,unsigned_int)_::_2_::FCreateNode>
                  )&local_238;
        if (local_238.SecondaryData !=
            (ForElementType<_public:_void___cdecl_FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic>::Build(TArray<TBounds<float>,TSizedDefaultAllocator<32>_>_const_&,unsigned_int)_::_2_::FCreateNode>
             )0x0) {
          FVar16 = local_238.SecondaryData;
        }
        lVar15 = lVar15 + 1;
        *(ulonglong *)((longlong)FVar16 + (longlong)iVar12 * 0xc) = CONCAT44(iStack_244,local_248);
        *(int *)((uchar *)((longlong)FVar16 + 8) + (longlong)iVar12 * 0xc) = iStack_240;
        uVar11 = uVar11 + 1;
      } while (lVar15 < lVar26);
    }
    FVar18 = local_a0[(lVar25 - lVar30) + -2];
    uVar19 = (uVar17 - 1) + (uVar19 - iVar20);
    local_328.End = FVar18.End;
    local_328.Begin = FVar18.Begin;
    piVar24 = local_308;
    pTVar27 = local_318;
    uVar11 = local_328.End;
    uVar21 = local_328.Begin;
    local_328 = FVar18;
  } while( true );
}

// Check @ 14486a400

bool __thiscall
FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic>::Check
          (FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic> *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  if (0 < (this->Nodes).ArrayNum) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      while( true ) {
        uVar4 = 0;
        if ((int)uVar6 < (this->Nodes).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        if (*(uint *)((this->Nodes).AllocatorInstance.Data + lVar7 + 4) <= uVar5) break;
        CheckNode(this,uVar6 * 4 | uVar5);
        uVar5 = uVar5 + 1;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0xa0;
    } while ((int)uVar6 < (this->Nodes).ArrayNum);
  }
  return true;
}

// CheckNode @ 14486a4e0

void __thiscall
FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic>::CheckNode
          (FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic> *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  FNode *pFVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  
  if ((this->Nodes).ArrayNum <= (int)(param_1 >> 2)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar5 = (this->Nodes).AllocatorInstance.Data + (ulonglong)(param_1 >> 2) * 0xa0;
  if (*(uint *)(pFVar5 + 4) <= (param_1 & 3)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("( NodeIndex & ChildMask ) < Node.NumChildren",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DynamicBVH.h"
                       ,0x3ce,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(uint *)pFVar5 != 0xffffffff) {
    if (*(uint *)(pFVar5 + 4) < 2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Node.NumChildren > 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DynamicBVH.h"
                         ,0x3d2,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar3 = GetNode(this,*(uint *)pFVar5);
    if (pFVar3->ChildIndexes[*(uint *)pFVar5 & 3] != (param_1 & 0xfffffffc)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetNode( Node.ParentIndex ).GetFirstChild( Node.ParentIndex ) == ( NodeIndex & ~ChildMask )"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DynamicBVH.h"
                         ,0x3d3,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  uVar4 = *(uint *)(pFVar5 + ((ulonglong)(param_1 & 3) + 2) * 4);
  if ((uVar4 & 1) == 0) {
    if ((uVar4 & 3) != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("( FirstChild & ChildMask ) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DynamicBVH.h"
                         ,0x3dd,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar3 = GetNode(this,uVar4);
    uVar4 = 0;
    if (pFVar3->NumChildren != 0) {
      do {
        if (pFVar3->ParentIndex != param_1) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Children.ParentIndex == NodeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DynamicBVH.h"
                             ,0x3e2,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < pFVar3->NumChildren);
    }
  }
  else {
    if ((this->Leaves).ArrayNum <= (int)(uVar4 >> 1)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (*(uint *)((this->Leaves).AllocatorInstance.Data + (ulonglong)(uVar4 >> 1) * 4) != param_1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Leaves[ FirstChild >> 1 ] == NodeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DynamicBVH.h"
                         ,0x3d9,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// Extract @ 144879290

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic>::Extract
          (FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  TVector4<float>_u_0 TVar3;
  TVector4<float>_u_0 TVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  TVector4<float>_u_0 TVar14;
  TVector4<float>_u_0 TVar15;
  
  uVar12 = param_1 >> 2;
  if (((this->Nodes).ArrayNum <= (int)uVar12) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (this->Nodes).AllocatorInstance.Data;
  lVar13 = (ulonglong)uVar12 * 0xa0;
  if (((*(int *)(pFVar1 + lVar13) != -1) && (*(uint *)(pFVar1 + lVar13 + 4) < 2)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Node.IsRoot() || Node.NumChildren > 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DynamicBVH.h"
                         ,0x2d9,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((this->Nodes).ArrayNum <= (int)uVar12) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar6 = (this->Nodes).AllocatorInstance.Data;
  uVar8 = *(int *)(pFVar6 + lVar13 + 4) - 1;
  *(uint *)(pFVar6 + lVar13 + 4) = uVar8;
  if ((param_1 & 3) < uVar8) {
    Set(this,param_1,(TBounds<float> *)(pFVar6 + ((ulonglong)(uVar8 & 3) + 1) * 0x20 + lVar13),
        *(uint *)(pFVar6 + (ulonglong)(uVar8 & 3) * 4 + lVar13 + 8));
  }
  TVar4 = ___xmm_3f800000ff7fffffff7fffffff7fffff;
  TVar3 = ___xmm_3f8000007f7fffff7f7fffff7f7fffff;
  uVar9 = (ulonglong)*(uint *)(pFVar1 + lVar13 + 4);
  TVar14 = ___xmm_3f8000007f7fffff7f7fffff7f7fffff;
  TVar15 = ___xmm_3f800000ff7fffffff7fffffff7fffff;
  if (*(uint *)(pFVar1 + lVar13 + 4) != 0) {
    pFVar6 = pFVar1 + lVar13 + 0x30;
    do {
      TVar14._s_0 = (TVector4<float>_u_0_s_0)
                    minps(TVar14._s_0,*(undefined1 (*) [16])(pFVar6 + -0x10));
      TVar15._s_0 = (TVector4<float>_u_0_s_0)maxps(TVar15._s_0,*(undefined1 (*) [16])pFVar6);
      pFVar6 = pFVar6 + 0x20;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  uVar8 = *(uint *)(pFVar1 + lVar13);
  while (uVar8 != 0xffffffff) {
    uVar11 = uVar8 >> 2;
    if (((this->Nodes).ArrayNum <= (int)uVar11) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar6 = (this->Nodes).AllocatorInstance.Data;
    lVar10 = ((ulonglong)uVar11 * 4 + 1 + (ulonglong)uVar11 + (ulonglong)(uVar8 & 3)) * 0x20;
    *(TVector4<float>_u_0 *)(pFVar6 + lVar10) = TVar14;
    *(TVector4<float>_u_0 *)(pFVar6 + lVar10 + 0x10) = TVar15;
    if (((this->Nodes).ArrayNum <= (int)uVar11) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar6 = (this->Nodes).AllocatorInstance.Data;
    lVar10 = (ulonglong)uVar11 * 0xa0;
    uVar9 = (ulonglong)*(uint *)(pFVar6 + lVar10 + 4);
    TVar14 = TVar3;
    TVar15 = TVar4;
    if (*(uint *)(pFVar6 + lVar10 + 4) != 0) {
      pFVar7 = pFVar6 + lVar10 + 0x30;
      do {
        TVar14._s_0 = (TVector4<float>_u_0_s_0)
                      minps(TVar14._s_0,*(undefined1 (*) [16])(pFVar7 + -0x10));
        TVar15._s_0 = (TVector4<float>_u_0_s_0)maxps(TVar15._s_0,*(undefined1 (*) [16])pFVar7);
        pFVar7 = pFVar7 + 0x20;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    uVar8 = *(uint *)(pFVar6 + lVar10);
  }
  (this->Roots).Root.Bounds.Min.field0_0x0 = TVar14;
  (this->Roots).Root.Bounds.Max.field0_0x0 = TVar15;
  if (*(uint *)(pFVar1 + lVar13) == 0xffffffff) {
    if (*(int *)(pFVar1 + lVar13 + 4) != 0) goto LAB_144879630;
    (this->Roots).Root.FirstChild = 0xffffffff;
  }
  else {
    if (*(int *)(pFVar1 + lVar13 + 4) != 1) {
LAB_144879630:
      RecursivePromoteChild(this,param_1);
      return;
    }
    Set(this,*(uint *)(pFVar1 + lVar13),(TBounds<float> *)(pFVar1 + lVar13 + 0x20),
        *(uint *)(pFVar1 + lVar13 + 8));
  }
  uVar8 = this->FreeHead;
  if (((this->Nodes).ArrayNum <= (int)uVar12) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(uint *)((this->Nodes).AllocatorInstance.Data + lVar13) = uVar8;
  if (((this->Nodes).ArrayNum <= (int)uVar12) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(undefined4 *)((this->Nodes).AllocatorInstance.Data + lVar13 + 4) = 0;
  this->FreeHead = param_1 & 0xfffffffc;
  return;
}

// FindBestInsertion_Greedy @ 144879670

uint __thiscall
FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic>::FindBestInsertion_Greedy
          (FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic> *this,uint param_1,
          TBounds<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_d8 [4];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  
  fVar7 = __real_7f7fffff;
  uVar9 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar24 = 0.0;
  fVar23 = __real_7f7fffff;
  uVar15 = 0;
  do {
    if (((this->Nodes).ArrayNum <= (int)(param_1 >> 2)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return uVar9;
    }
    pFVar14 = (this->Nodes).AllocatorInstance.Data + (ulonglong)(param_1 >> 2) * 0xa0;
    this->NumTested = this->NumTested + 1;
    if (*(uint *)(pFVar14 + 4) != 4) {
      return *(uint *)pFVar14;
    }
    fVar19 = (param_2->Min).field0_0x0._s_0.X;
    uVar16 = 0;
    fVar20 = (param_2->Min).field0_0x0._s_0.Y;
    uVar17 = 0;
    fVar1 = (param_2->Min).field0_0x0._s_0.Z;
    fVar2 = (param_2->Max).field0_0x0._s_0.X;
    fVar3 = (param_2->Max).field0_0x0._s_0.Y;
    fVar4 = (param_2->Max).field0_0x0._s_0.Z;
    fVar22 = fVar7;
    do {
      iVar18 = (int)uVar17;
      lVar10 = uVar17 + 1;
      lVar13 = (ulonglong)(iVar18 + 1) + 1;
      lVar11 = (ulonglong)(iVar18 + 2) + 1;
      local_d8[0] = (float)((uint)((fVar3 - *(float *)(pFVar14 + (lVar10 * 8 + 5) * 4)) +
                                  (fVar20 - *(float *)(pFVar14 + (lVar10 * 8 + 1) * 4))) & uVar9) +
                    (float)((uint)((fVar2 - *(float *)(pFVar14 + (lVar10 * 8 + 4) * 4)) +
                                  (fVar19 - *(float *)(pFVar14 + lVar10 * 0x20))) & uVar9) +
                    (float)((uint)((fVar4 - *(float *)(pFVar14 + (lVar10 * 8 + 6) * 4)) +
                                  (fVar1 - *(float *)(pFVar14 + (lVar10 * 8 + 2) * 4))) & uVar9);
      lVar10 = (ulonglong)(iVar18 + 3) + 1;
      local_d8[1] = (float)((uint)((fVar3 - *(float *)(pFVar14 + (lVar13 * 8 + 5) * 4)) +
                                  (fVar20 - *(float *)(pFVar14 + (lVar13 * 8 + 1) * 4))) & uVar9) +
                    (float)((uint)((fVar2 - *(float *)(pFVar14 + (lVar13 * 8 + 4) * 4)) +
                                  (fVar19 - *(float *)(pFVar14 + lVar13 * 0x20))) & uVar9) +
                    (float)((uint)((fVar1 - *(float *)(pFVar14 + (lVar13 * 8 + 2) * 4)) +
                                  (fVar4 - *(float *)(pFVar14 + (lVar13 * 8 + 6) * 4))) & uVar9);
      local_d8[2] = (float)((uint)((fVar3 - *(float *)(pFVar14 + (lVar11 * 8 + 5) * 4)) +
                                  (fVar20 - *(float *)(pFVar14 + (lVar11 * 8 + 1) * 4))) & uVar9) +
                    (float)((uint)((fVar2 - *(float *)(pFVar14 + (lVar11 * 8 + 4) * 4)) +
                                  (fVar19 - *(float *)(pFVar14 + lVar11 * 0x20))) & uVar9) +
                    (float)((uint)((fVar4 - *(float *)(pFVar14 + (lVar11 * 8 + 6) * 4)) +
                                  (fVar1 - *(float *)(pFVar14 + (lVar11 * 8 + 2) * 4))) & uVar9);
      uVar12 = 0;
      local_d8[3] = (float)((uint)((fVar3 - *(float *)(pFVar14 + (lVar10 * 8 + 5) * 4)) +
                                  (fVar20 - *(float *)(pFVar14 + (lVar10 * 8 + 1) * 4))) & uVar9) +
                    (float)((uint)((fVar2 - *(float *)(pFVar14 + (lVar10 * 8 + 4) * 4)) +
                                  (fVar19 - *(float *)(pFVar14 + lVar10 * 0x20))) & uVar9) +
                    (float)((uint)((fVar4 - *(float *)(pFVar14 + (lVar10 * 8 + 6) * 4)) +
                                  (fVar1 - *(float *)(pFVar14 + (lVar10 * 8 + 2) * 4))) & uVar9);
      uVar17 = uVar16;
      fVar21 = fVar22;
      do {
        uVar16 = uVar17;
        fVar22 = fVar21;
        if (3 < uVar12 + iVar18) break;
        fVar5 = local_d8[(int)uVar12];
        fVar22 = fVar5;
        if (fVar21 <= fVar5) {
          fVar22 = fVar21;
        }
        uVar16 = (ulonglong)(uVar12 + iVar18);
        if (fVar21 <= fVar5) {
          uVar16 = uVar17;
        }
        uVar12 = uVar12 + 1;
        uVar17 = uVar16;
        fVar21 = fVar22;
      } while (uVar12 < 4);
      uVar17 = (ulonglong)(iVar18 + 4U);
    } while (iVar18 + 4U < 4);
    local_b8 = maxps((undefined1  [16])(param_2->Max).field0_0x0,
                     *(undefined1 (*) [16])(pFVar14 + (uVar16 * 8 + 0xc) * 4));
    local_c8 = minps((undefined1  [16])(param_2->Min).field0_0x0,
                     *(undefined1 (*) [16])(pFVar14 + (uVar16 * 8 + 8) * 4));
    fVar20 = local_b8._4_4_ - local_c8._4_4_;
    fVar19 = local_b8._8_4_ - local_c8._8_4_;
    fVar19 = (local_b8._0_4_ - local_c8._0_4_) * (fVar19 + fVar20) + fVar19 * fVar20 + fVar24;
    fVar24 = fVar19 - ((*(float *)(pFVar14 + (uVar16 * 8 + 0xc) * 4) -
                       *(float *)(pFVar14 + (uVar16 * 8 + 8) * 4)) *
                       ((*(float *)(pFVar14 + (uVar16 * 8 + 0xe) * 4) -
                        *(float *)(pFVar14 + (uVar16 * 8 + 10) * 4)) +
                       (*(float *)(pFVar14 + (uVar16 * 8 + 0xd) * 4) -
                       *(float *)(pFVar14 + (uVar16 * 8 + 9) * 4))) +
                      (*(float *)(pFVar14 + (uVar16 * 8 + 0xe) * 4) -
                      *(float *)(pFVar14 + (uVar16 * 8 + 10) * 4)) *
                      (*(float *)(pFVar14 + (uVar16 * 8 + 0xd) * 4) -
                      *(float *)(pFVar14 + (uVar16 * 8 + 9) * 4)));
    if (fVar23 <= fVar24) {
      return uVar15;
    }
    uVar12 = (int)uVar16 + param_1;
    param_1 = *(uint *)(pFVar14 + (uVar16 + 2) * 4);
    if (fVar23 <= fVar19) {
      uVar12 = uVar15;
      fVar19 = fVar23;
    }
    fVar23 = fVar19;
    if ((param_1 & 1) != 0) {
      return uVar12;
    }
    if (fVar23 <= fVar24) {
      return uVar12;
    }
    uVar15 = uVar12;
    if (param_1 == 0xffffffff) {
      return uVar12;
    }
  } while( true );
}

// GetNode @ 14487c9c0

FNode * __thiscall
FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic>::GetNode
          (FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic> *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  FNode *pFVar3;
  
  if ((this->Nodes).ArrayNum <= (int)(param_1 >> 2)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNode *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FNode *)((this->Nodes).AllocatorInstance.Data + (ulonglong)(param_1 >> 2) * 0xa0);
}

// GetNode @ 14487ca30

FNode * __thiscall
FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic>::GetNode
          (FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic> *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  FNode *pFVar3;
  
  if ((this->Nodes).ArrayNum <= (int)(param_1 >> 2)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNode *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FNode *)((this->Nodes).AllocatorInstance.Data + (ulonglong)(param_1 >> 2) * 0xa0);
}

// GetTotalCost @ 144886830

float __thiscall
FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic>::GetTotalCost
          (FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic> *this)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  uint uVar10;
  float fVar11;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Nodes).ArrayNum;
  pFVar7 = (this->Nodes).AllocatorInstance.Data;
  fVar11 = 0.0;
  pFVar8 = pFVar7 + (longlong)iVar1 * 0xa0;
LAB_144886870:
  do {
    if ((this->Nodes).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic>::FNode_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar8) {
      return fVar11;
    }
    uVar2 = *(uint *)(pFVar7 + 4);
    uVar10 = 0;
    if (uVar2 < 4) {
      if (uVar2 != 0) {
        lVar4 = 0;
        goto LAB_1448869d4;
      }
    }
    else {
      pFVar6 = pFVar7 + 0xc;
      uVar3 = (uVar2 - 4 >> 2) + 1;
      pFVar5 = pFVar7 + 0x38;
      uVar9 = (ulonglong)uVar3;
      uVar10 = uVar3 * 4;
      lVar4 = (ulonglong)uVar3 * 4;
      do {
        if (((byte)pFVar6[-4] & 1) == 0) {
          fVar11 = fVar11 + (*(float *)(pFVar5 + -8) - *(float *)(pFVar5 + -0x18)) *
                            ((*(float *)pFVar5 - *(float *)(pFVar5 + -0x10)) +
                            (*(float *)(pFVar5 + -4) - *(float *)(pFVar5 + -0x14))) +
                            (*(float *)pFVar5 - *(float *)(pFVar5 + -0x10)) *
                            (*(float *)(pFVar5 + -4) - *(float *)(pFVar5 + -0x14));
        }
        if (((byte)*pFVar6 & 1) == 0) {
          fVar11 = fVar11 + (*(float *)(pFVar5 + 0x18) - *(float *)(pFVar5 + 8)) *
                            ((*(float *)(pFVar5 + 0x20) - *(float *)(pFVar5 + 0x10)) +
                            (*(float *)(pFVar5 + 0x1c) - *(float *)(pFVar5 + 0xc))) +
                            (*(float *)(pFVar5 + 0x20) - *(float *)(pFVar5 + 0x10)) *
                            (*(float *)(pFVar5 + 0x1c) - *(float *)(pFVar5 + 0xc));
        }
        if (((byte)pFVar6[4] & 1) == 0) {
          fVar11 = fVar11 + (*(float *)(pFVar5 + 0x38) - *(float *)(pFVar5 + 0x28)) *
                            ((*(float *)(pFVar5 + 0x40) - *(float *)(pFVar5 + 0x30)) +
                            (*(float *)(pFVar5 + 0x3c) - *(float *)(pFVar5 + 0x2c))) +
                            (*(float *)(pFVar5 + 0x40) - *(float *)(pFVar5 + 0x30)) *
                            (*(float *)(pFVar5 + 0x3c) - *(float *)(pFVar5 + 0x2c));
        }
        if (((byte)pFVar6[8] & 1) == 0) {
          fVar11 = fVar11 + (*(float *)(pFVar5 + 0x58) - *(float *)(pFVar5 + 0x48)) *
                            ((*(float *)(pFVar5 + 0x60) - *(float *)(pFVar5 + 0x50)) +
                            (*(float *)(pFVar5 + 0x5c) - *(float *)(pFVar5 + 0x4c))) +
                            (*(float *)(pFVar5 + 0x60) - *(float *)(pFVar5 + 0x50)) *
                            (*(float *)(pFVar5 + 0x5c) - *(float *)(pFVar5 + 0x4c));
        }
        pFVar6 = pFVar6 + 0x10;
        pFVar5 = pFVar5 + 0x80;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      if (uVar2 <= uVar10) {
        pFVar7 = pFVar7 + 0xa0;
        goto LAB_144886870;
      }
LAB_1448869d4:
      pFVar6 = pFVar7 + (lVar4 + 2) * 4;
      pFVar5 = pFVar7 + lVar4 * 0x20 + 0x38;
      uVar9 = (ulonglong)(uVar2 - uVar10);
      do {
        if (((byte)*pFVar6 & 1) == 0) {
          fVar11 = fVar11 + (*(float *)(pFVar5 + -8) - *(float *)(pFVar5 + -0x18)) *
                            ((*(float *)pFVar5 - *(float *)(pFVar5 + -0x10)) +
                            (*(float *)(pFVar5 + -4) - *(float *)(pFVar5 + -0x14))) +
                            (*(float *)pFVar5 - *(float *)(pFVar5 + -0x10)) *
                            (*(float *)(pFVar5 + -4) - *(float *)(pFVar5 + -0x14));
        }
        pFVar6 = pFVar6 + 4;
        pFVar5 = pFVar5 + 0x20;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    pFVar7 = pFVar7 + 0xa0;
  } while( true );
}

// Insert @ 144887df0

uint __thiscall
FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic>::Insert
          (FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic> *this,FRoot *param_1,
          TBounds<float> *param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  bool bVar15;
  int iVar16;
  FNode *pFVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  uint uVar23;
  TVector4<float>_u_0 TVar24;
  TVector4<float>_u_0 TVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  uVar20 = param_1->FirstChild >> 2;
  if (((this->Nodes).ArrayNum <= (int)uVar20) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar4 = (code *)swi(3);
    uVar20 = (*pcVar4)();
    return uVar20;
  }
  pFVar18 = (this->Nodes).AllocatorInstance.Data;
  iVar16 = *(int *)(pFVar18 + (ulonglong)uVar20 * 0xa0 + 4);
  if (iVar16 == 4) {
    uVar20 = FindBestInsertion_Greedy(this,param_1->FirstChild,param_2);
    pFVar17 = GetNode(this,uVar20);
    uVar21 = uVar20 & 3;
    uVar23 = pFVar17->ChildIndexes[uVar21];
    if (((uVar23 & 1) != 0) || (pFVar17 = GetNode(this,uVar23), pFVar17->NumChildren == 4)) {
      uVar23 = this->FreeHead;
      if (uVar23 == 0xffffffff) {
        iVar16 = (this->Nodes).ArrayNum;
        piVar1 = &(this->Nodes).ArrayMax;
        if (iVar16 == *piVar1) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10a0,&(this->Nodes).AllocatorInstance,piVar1);
        }
        (this->Nodes).ArrayNum = iVar16 + 1;
        uVar23 = iVar16 * 4;
      }
      else {
        pFVar17 = GetNode(this,uVar23);
        this->FreeHead = pFVar17->ParentIndex;
        pFVar17->ParentIndex = 0xffffffff;
      }
      pFVar17 = GetNode(this,uVar23);
      pFVar17->NumChildren = 1;
      pFVar17 = GetNode(this,uVar20);
      uVar2 = pFVar17->ChildIndexes[uVar21];
      pFVar17 = GetNode(this,uVar20);
      Set(this,uVar23,pFVar17->ChildBounds + uVar21,uVar2);
      SetFirstChild(this,uVar20,uVar23);
    }
    pFVar17 = GetNode(this,uVar23);
    uVar23 = uVar23 | pFVar17->NumChildren;
    pFVar17->NumChildren = pFVar17->NumChildren + 1;
    Set(this,uVar23,param_2,param_3);
    uVar7 = *(undefined4 *)&(param_2->Min).field0_0x0;
    uVar8 = *(undefined4 *)((longlong)&(param_2->Min).field0_0x0 + 4);
    uVar9 = *(undefined4 *)((longlong)&(param_2->Min).field0_0x0 + 8);
    uVar10 = *(undefined4 *)((longlong)&(param_2->Min).field0_0x0 + 0xc);
    uVar11 = *(undefined4 *)&(param_2->Max).field0_0x0;
    uVar12 = *(undefined4 *)((longlong)&(param_2->Max).field0_0x0 + 4);
    uVar13 = *(undefined4 *)((longlong)&(param_2->Max).field0_0x0 + 8);
    uVar14 = *(undefined4 *)((longlong)&(param_2->Max).field0_0x0 + 0xc);
    while (uVar20 != 0xffffffff) {
      uVar21 = uVar20 >> 2;
      if (((this->Nodes).ArrayNum <= (int)uVar21) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar4 = (code *)swi(3);
        uVar20 = (*pcVar4)();
        return uVar20;
      }
      pFVar18 = (this->Nodes).AllocatorInstance.Data + (ulonglong)uVar21 * 0xa0;
      pFVar22 = pFVar18 + ((ulonglong)(uVar20 & 3) + 1) * 0x20;
      auVar26._4_4_ = uVar8;
      auVar26._0_4_ = uVar7;
      auVar26._8_4_ = uVar9;
      auVar26._12_4_ = uVar10;
      auVar26 = minps(*(undefined1 (*) [16])pFVar22,auVar26);
      auVar27._4_4_ = uVar12;
      auVar27._0_4_ = uVar11;
      auVar27._8_4_ = uVar13;
      auVar27._12_4_ = uVar14;
      auVar27 = maxps(*(undefined1 (*) [16])(pFVar22 + 0x10),auVar27);
      if (((this->Nodes).ArrayNum <= (int)uVar21) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar4 = (code *)swi(3);
        uVar20 = (*pcVar4)();
        return uVar20;
      }
      pFVar3 = (this->Nodes).AllocatorInstance.Data;
      lVar19 = ((ulonglong)(uVar20 & 3) + 1 + (ulonglong)uVar21 * 4 + (ulonglong)uVar21) * 0x20;
      *(undefined1 (*) [16])(pFVar3 + lVar19) = auVar26;
      *(undefined1 (*) [16])(pFVar3 + lVar19 + 0x10) = auVar27;
      Rotate(this,uVar20);
      uVar7 = *(undefined4 *)&pFVar22->field_0x0;
      uVar8 = *(undefined4 *)(pFVar22 + 4);
      uVar9 = *(undefined4 *)(pFVar22 + 8);
      uVar10 = *(undefined4 *)(pFVar22 + 0xc);
      uVar11 = *(undefined4 *)&pFVar22[0x10].field_0x0;
      uVar12 = *(undefined4 *)(pFVar22 + 0x14);
      uVar13 = *(undefined4 *)(pFVar22 + 0x18);
      uVar14 = *(undefined4 *)(pFVar22 + 0x1c);
      uVar20 = *(uint *)pFVar18;
    }
    auVar5._4_4_ = uVar8;
    auVar5._0_4_ = uVar7;
    auVar5._8_4_ = uVar9;
    auVar5._12_4_ = uVar10;
    TVar24._s_0 = (TVector4<float>_u_0_s_0)minps((param_1->Bounds).Min.field0_0x0,auVar5);
    auVar6._4_4_ = uVar12;
    auVar6._0_4_ = uVar11;
    auVar6._8_4_ = uVar13;
    auVar6._12_4_ = uVar14;
    TVar25._s_0 = (TVector4<float>_u_0_s_0)maxps((param_1->Bounds).Max.field0_0x0,auVar6);
  }
  else {
    uVar23 = param_1->FirstChild + iVar16;
    *(int *)(pFVar18 + (ulonglong)uVar20 * 0xa0 + 4) = iVar16 + 1;
    Set(this,uVar23,param_2,param_3);
    TVar24._s_0 = (TVector4<float>_u_0_s_0)
                  minps((param_1->Bounds).Min.field0_0x0,(param_2->Min).field0_0x0);
    TVar25._s_0 = (TVector4<float>_u_0_s_0)
                  maxps((param_1->Bounds).Max.field0_0x0,(param_2->Max).field0_0x0);
  }
  (param_1->Bounds).Max.field0_0x0 = TVar25;
  (param_1->Bounds).Min.field0_0x0 = TVar24;
  return uVar23;
}

// PromoteChild @ 14488f400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall
FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic>::PromoteChild
          (FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic> *this,uint param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  float *pfVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar15;
  uint uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auStack_e8 [32];
  ulonglong local_c8;
  longlong local_c0;
  undefined1 local_b8 [8];
  float afStack_b0 [2];
  undefined1 local_a8 [8];
  float afStack_a0 [2];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38;
  ulonglong uVar14;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  iVar1 = (this->Nodes).ArrayNum;
  uVar13 = (ulonglong)(param_1 >> 2);
  if ((iVar1 <= (int)(param_1 >> 2)) &&
     (local_c8 = uVar13, local_c0 = (longlong)iVar1,
     bVar6 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar6
     )) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return uVar7;
  }
  pFVar2 = (this->Nodes).AllocatorInstance.Data;
  if ((((byte)pFVar2[(ulonglong)(param_1 & 3) * 4 + uVar13 * 0xa0 + 8] & 1) != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Node.IsLeaf( NodeIndex )",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DynamicBVH.h"
                         ,0x339,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return uVar7;
  }
  if ((3 < *(uint *)(pFVar2 + uVar13 * 0xa0 + 4)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Node.NumChildren < MaxChildren",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DynamicBVH.h"
                         ,0x33a,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return uVar7;
  }
  uVar7 = *(uint *)(pFVar2 + (ulonglong)(param_1 & 3) * 4 + uVar13 * 0xa0 + 8);
  iVar1 = (this->Nodes).ArrayNum;
  uVar12 = uVar7 >> 2;
  uVar14 = (ulonglong)uVar12;
  if ((iVar1 <= (int)uVar12) &&
     (local_c8 = uVar14, local_c0 = (longlong)iVar1,
     bVar6 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar6
     )) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return uVar7;
  }
  uVar16 = 0;
  pFVar3 = (this->Nodes).AllocatorInstance.Data;
  _local_b8 = ___xmm_3f8000007f7fffff7f7fffff7f7fffff;
  _local_a8 = ___xmm_3f800000ff7fffffff7fffffff7fffff;
  local_98 = ___xmm_3f8000007f7fffff7f7fffff7f7fffff;
  local_88 = ___xmm_3f800000ff7fffffff7fffffff7fffff;
  local_78 = ___xmm_3f8000007f7fffff7f7fffff7f7fffff;
  local_68 = ___xmm_3f800000ff7fffffff7fffffff7fffff;
  local_58 = ___xmm_3f8000007f7fffff7f7fffff7f7fffff;
  local_48 = ___xmm_3f800000ff7fffffff7fffffff7fffff;
  uVar12 = *(uint *)(pFVar3 + uVar14 * 0xa0 + 4);
  auVar19 = ___xmm_3f8000007f7fffff7f7fffff7f7fffff;
  auVar21 = ___xmm_3f800000ff7fffffff7fffffff7fffff;
  auVar22 = ___xmm_3f8000007f7fffff7f7fffff7f7fffff;
  auVar23 = ___xmm_3f800000ff7fffffff7fffffff7fffff;
  uVar8 = 0;
  if (uVar12 != 0) {
    do {
      lVar11 = (ulonglong)uVar16 * 0x20;
      uVar8 = ~uVar16;
      uVar16 = uVar16 + 1;
      lVar9 = (ulonglong)(uVar8 + uVar12) * 0x20;
      auVar17 = minps(*(undefined1 (*) [16])(local_b8 + lVar11),auVar19);
      auVar18 = maxps(*(undefined1 (*) [16])(local_a8 + lVar11),auVar21);
      *(undefined1 (*) [16])(local_b8 + lVar11) = auVar17;
      *(undefined1 (*) [16])(local_a8 + lVar11) = auVar18;
      auVar17 = minps(*(undefined1 (*) [16])(local_b8 + lVar9),auVar22);
      auVar18 = maxps(*(undefined1 (*) [16])(local_a8 + lVar9),auVar23);
      *(undefined1 (*) [16])(local_b8 + lVar9) = auVar17;
      *(undefined1 (*) [16])(local_a8 + lVar9) = auVar18;
      uVar12 = *(uint *)(pFVar3 + uVar14 * 0xa0 + 4);
      auVar19 = minps(auVar19,*(undefined1 (*) [16])(pFVar3 + lVar11 + 0x20 + uVar14 * 0xa0));
      auVar21 = maxps(auVar21,*(undefined1 (*) [16])(pFVar3 + lVar11 + 0x30 + uVar14 * 0xa0));
      auVar22 = minps(auVar22,*(undefined1 (*) [16])(pFVar3 + lVar9 + 0x20 + uVar14 * 0xa0));
      auVar23 = maxps(auVar23,*(undefined1 (*) [16])(pFVar3 + lVar9 + 0x30 + uVar14 * 0xa0));
      uVar8 = uVar12;
    } while (uVar16 < uVar12);
  }
  uVar16 = 0;
  uVar12 = 0xffffffff;
  if (uVar8 != 0) {
    pfVar10 = (float *)local_b8;
    fVar5 = __real_7f7fffff;
    uVar15 = 0xffffffff;
    do {
      fVar20 = (pfVar10[4] - *pfVar10) * ((pfVar10[6] - pfVar10[2]) + (pfVar10[5] - pfVar10[1])) +
               (pfVar10[6] - pfVar10[2]) * (pfVar10[5] - pfVar10[1]);
      uVar12 = uVar16 | uVar7;
      if (fVar5 <= fVar20) {
        uVar12 = uVar15;
        fVar20 = fVar5;
      }
      fVar5 = fVar20;
      uVar16 = uVar16 + 1;
      pfVar10 = pfVar10 + 8;
      uVar15 = uVar12;
    } while (uVar16 < uVar8);
  }
  lVar9 = (ulonglong)(uVar12 & 3) * 0x20;
  SetBounds(this,param_1,(TBounds<float> *)(local_b8 + lVar9));
  Set(this,param_1 & 0xfffffffc | *(uint *)(pFVar2 + uVar13 * 0xa0 + 4),
      (TBounds<float> *)(pFVar3 + lVar9 + uVar14 * 0xa0 + 0x20),
      *(uint *)(pFVar3 + (ulonglong)(uVar12 & 3) * 4 + uVar14 * 0xa0 + 8));
  *(int *)(pFVar2 + uVar13 * 0xa0 + 4) = *(int *)(pFVar2 + uVar13 * 0xa0 + 4) + 1;
  uVar7 = *(int *)(pFVar3 + uVar14 * 0xa0 + 4) - 1;
  *(uint *)(pFVar3 + uVar14 * 0xa0 + 4) = uVar7;
  if (uVar7 == 1) {
    Set(this,param_1,
        (TBounds<float> *)(pFVar3 + ((ulonglong)(~uVar12 & 1) + 1) * 0x20 + uVar14 * 0xa0),
        *(uint *)(pFVar3 + (ulonglong)(~uVar12 & 1) * 4 + uVar14 * 0xa0 + 8));
    iVar1 = (this->Nodes).ArrayNum;
    local_c0 = (longlong)iVar1;
    uVar7 = this->FreeHead;
    uVar8 = uVar12 >> 2;
    if (iVar1 <= (int)uVar8) {
      local_c8 = (ulonglong)uVar8;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return uVar7;
      }
    }
    local_c8 = (ulonglong)uVar8;
    *(uint *)((this->Nodes).AllocatorInstance.Data + (ulonglong)uVar8 * 0xa0) = uVar7;
    iVar1 = (this->Nodes).ArrayNum;
    local_c0 = (longlong)iVar1;
    if ((iVar1 <= (int)uVar8) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return uVar7;
    }
    uVar7 = uVar12 & 0xfffffffc;
    uVar12 = 0xffffffff;
    *(undefined4 *)((this->Nodes).AllocatorInstance.Data + (ulonglong)uVar8 * 0xa0 + 4) = 0;
    this->FreeHead = uVar7;
  }
  else if ((uVar12 & 3) != uVar7) {
    Set(this,uVar12,(TBounds<float> *)(pFVar3 + ((ulonglong)(uVar7 & 3) + 1) * 0x20 + uVar14 * 0xa0)
        ,*(uint *)(pFVar3 + (ulonglong)(uVar7 & 3) * 4 + uVar14 * 0xa0 + 8));
  }
  return uVar12;
}

// RecursivePromoteChild @ 1448901f0

bool __thiscall
FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic>::RecursivePromoteChild
          (FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic> *this,uint param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  
  bVar12 = false;
  do {
    uVar10 = param_1 >> 2;
    if (((this->Nodes).ArrayNum <= (int)uVar10) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    uVar6 = 0;
    uVar7 = 0;
    fVar14 = 0.0;
    pFVar2 = (this->Nodes).AllocatorInstance.Data;
    uVar8 = 0xffffffff;
    uVar1 = *(uint *)(pFVar2 + (ulonglong)uVar10 * 0xa0 + 4);
    if (uVar1 < 4) {
      if (uVar1 == 0) {
        return bVar12;
      }
      lVar9 = 0;
LAB_14489041c:
      pFVar11 = pFVar2 + lVar9 * 0x20 + 0x38 + (ulonglong)uVar10 * 0xa0;
      do {
        if ((((byte)pFVar2[(ulonglong)(uVar7 & 3) * 4 + (ulonglong)uVar10 * 0xa0 + 8] & 1) == 0) &&
           (fVar13 = (*(float *)(pFVar11 + -8) - *(float *)(pFVar11 + -0x18)) *
                     ((*(float *)pFVar11 - *(float *)(pFVar11 + -0x10)) +
                     (*(float *)(pFVar11 + -4) - *(float *)(pFVar11 + -0x14))) +
                     (*(float *)pFVar11 - *(float *)(pFVar11 + -0x10)) *
                     (*(float *)(pFVar11 + -4) - *(float *)(pFVar11 + -0x14)), fVar14 < fVar13)) {
          uVar8 = param_1 & 0xfffffffc | uVar7;
          fVar14 = fVar13;
        }
        pFVar11 = pFVar11 + 0x20;
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar1);
    }
    else {
      pFVar11 = pFVar2 + (ulonglong)uVar10 * 0xa0 + 0x38;
      lVar9 = (ulonglong)((uVar1 - 4 >> 2) + 1) << 2;
      do {
        if ((((byte)pFVar2[(ulonglong)uVar10 * 0xa0 + 8] & 1) == 0) &&
           (fVar13 = (*(float *)(pFVar11 + -8) - *(float *)(pFVar11 + -0x18)) *
                     ((*(float *)pFVar11 - *(float *)(pFVar11 + -0x10)) +
                     (*(float *)(pFVar11 + -4) - *(float *)(pFVar11 + -0x14))) +
                     (*(float *)pFVar11 - *(float *)(pFVar11 + -0x10)) *
                     (*(float *)(pFVar11 + -4) - *(float *)(pFVar11 + -0x14)), fVar14 < fVar13)) {
          uVar8 = param_1 & 0xfffffffc | uVar6;
          fVar14 = fVar13;
        }
        if ((((byte)pFVar2[(ulonglong)(uVar6 + 1 & 3) * 4 + (ulonglong)uVar10 * 0xa0 + 8] & 1) == 0)
           && (fVar13 = (*(float *)(pFVar11 + 0x18) - *(float *)(pFVar11 + 8)) *
                        ((*(float *)(pFVar11 + 0x20) - *(float *)(pFVar11 + 0x10)) +
                        (*(float *)(pFVar11 + 0x1c) - *(float *)(pFVar11 + 0xc))) +
                        (*(float *)(pFVar11 + 0x20) - *(float *)(pFVar11 + 0x10)) *
                        (*(float *)(pFVar11 + 0x1c) - *(float *)(pFVar11 + 0xc)), fVar14 < fVar13))
        {
          uVar8 = param_1 & 0xfffffffc | uVar6 + 1;
          fVar14 = fVar13;
        }
        if ((((byte)pFVar2[(ulonglong)(uVar6 - 2 & 3) * 4 + (ulonglong)uVar10 * 0xa0 + 8] & 1) == 0)
           && (fVar13 = (*(float *)(pFVar11 + 0x38) - *(float *)(pFVar11 + 0x28)) *
                        ((*(float *)(pFVar11 + 0x40) - *(float *)(pFVar11 + 0x30)) +
                        (*(float *)(pFVar11 + 0x3c) - *(float *)(pFVar11 + 0x2c))) +
                        (*(float *)(pFVar11 + 0x40) - *(float *)(pFVar11 + 0x30)) *
                        (*(float *)(pFVar11 + 0x3c) - *(float *)(pFVar11 + 0x2c)), fVar14 < fVar13))
        {
          uVar8 = uVar6 + 2 | param_1 & 0xfffffffc;
          fVar14 = fVar13;
        }
        if ((((byte)pFVar2[(ulonglong)(uVar6 - 1 & 3) * 4 + (ulonglong)uVar10 * 0xa0 + 8] & 1) == 0)
           && (fVar13 = (*(float *)(pFVar11 + 0x58) - *(float *)(pFVar11 + 0x48)) *
                        ((*(float *)(pFVar11 + 0x60) - *(float *)(pFVar11 + 0x50)) +
                        (*(float *)(pFVar11 + 0x5c) - *(float *)(pFVar11 + 0x4c))) +
                        (*(float *)(pFVar11 + 0x60) - *(float *)(pFVar11 + 0x50)) *
                        (*(float *)(pFVar11 + 0x5c) - *(float *)(pFVar11 + 0x4c)), fVar14 < fVar13))
        {
          uVar8 = uVar6 + 3 | param_1 & 0xfffffffc;
          fVar14 = fVar13;
        }
        pFVar11 = pFVar11 + 0x80;
        uVar6 = uVar6 + 4;
      } while (uVar6 < uVar1 - 3);
      uVar7 = uVar6;
      if (uVar6 < uVar1) goto LAB_14489041c;
    }
    if (uVar8 == 0xffffffff) {
      return bVar12;
    }
    param_1 = PromoteChild(this,uVar8);
    bVar12 = true;
    if (param_1 == 0xffffffff) {
      return true;
    }
  } while( true );
}

// RemoveAndSwap @ 144891140

void __thiscall
FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic>::RemoveAndSwap
          (FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_1 >> 2;
  if ((this->Nodes).ArrayNum <= (int)uVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->Nodes).AllocatorInstance.Data;
  uVar4 = *(int *)(pFVar1 + (ulonglong)uVar5 * 0xa0 + 4) - 1;
  *(uint *)(pFVar1 + (ulonglong)uVar5 * 0xa0 + 4) = uVar4;
  if ((param_1 & 3) < uVar4) {
    Set(this,param_1,
        (TBounds<float> *)(pFVar1 + ((ulonglong)(uVar4 & 3) + 1) * 0x20 + (ulonglong)uVar5 * 0xa0),
        *(uint *)(pFVar1 + (ulonglong)(uVar4 & 3) * 4 + (ulonglong)uVar5 * 0xa0 + 8));
  }
  return;
}

// Rotate @ 14489eb00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic>::Rotate
          (FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic> *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  TVector4<float>_u_0 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong uVar6;
  
  if (((this->Nodes).ArrayNum <= (int)(param_1 >> 2)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar15 = (this->Nodes).AllocatorInstance.Data + (ulonglong)(param_1 >> 2) * 0xa0;
  if (*(uint *)pFVar15 == 0xffffffff) {
    return;
  }
  uVar13 = 0;
  auVar21 = ___xmm_3f8000007f7fffff7f7fffff7f7fffff;
  auVar22 = ___xmm_3f800000ff7fffffff7fffffff7fffff;
  if (*(uint *)(pFVar15 + 4) != 0) {
    pFVar10 = pFVar15 + 0x30;
    uVar6 = uVar13;
    do {
      if ((uint)uVar6 != (param_1 & 3)) {
        auVar21 = minps(auVar21,*(undefined1 (*) [16])(pFVar10 + -0x10));
        auVar22 = maxps(auVar22,*(undefined1 (*) [16])pFVar10);
      }
      uVar5 = (uint)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      pFVar10 = pFVar10 + 0x20;
    } while (uVar5 < *(uint *)(pFVar15 + 4));
  }
  uVar5 = *(uint *)pFVar15 >> 2;
  if (((this->Nodes).ArrayNum <= (int)uVar5) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar1 = *(uint *)pFVar15;
  pFVar10 = (this->Nodes).AllocatorInstance.Data;
  uVar14 = 0xffffffff;
  lVar7 = ((ulonglong)(uVar1 & 3) + 1) * 0x20;
  uVar2 = *(uint *)(pFVar10 + (ulonglong)uVar5 * 0xa0 + 4);
  fVar19 = (*(float *)(pFVar10 + lVar7 + 0x10 + (ulonglong)uVar5 * 0xa0) -
           *(float *)(pFVar10 + lVar7 + (ulonglong)uVar5 * 0xa0)) *
           ((*(float *)(pFVar10 + lVar7 + 0x18 + (ulonglong)uVar5 * 0xa0) -
            *(float *)(pFVar10 + lVar7 + 8 + (ulonglong)uVar5 * 0xa0)) +
           (*(float *)(pFVar10 + lVar7 + 0x14 + (ulonglong)uVar5 * 0xa0) -
           *(float *)(pFVar10 + lVar7 + 4 + (ulonglong)uVar5 * 0xa0))) +
           (*(float *)(pFVar10 + lVar7 + 0x18 + (ulonglong)uVar5 * 0xa0) -
           *(float *)(pFVar10 + lVar7 + 8 + (ulonglong)uVar5 * 0xa0)) *
           (*(float *)(pFVar10 + lVar7 + 0x14 + (ulonglong)uVar5 * 0xa0) -
           *(float *)(pFVar10 + lVar7 + 4 + (ulonglong)uVar5 * 0xa0));
  if (uVar2 < 4) {
    uVar6 = uVar13;
    if (uVar2 == 0) {
      return;
    }
  }
  else {
    pFVar8 = pFVar10 + (ulonglong)uVar5 * 0xa0 + 0x30;
    uVar9 = uVar1 & 3;
    uVar11 = 2;
    do {
      uVar12 = (uint)uVar13;
      if (uVar12 != uVar9) {
        auVar20 = maxps(auVar22,*(undefined1 (*) [16])pFVar8);
        auVar18 = minps(auVar21,*(undefined1 (*) [16])(pFVar8 + -0x10));
        fVar17 = auVar20._4_4_ - auVar18._4_4_;
        fVar16 = auVar20._8_4_ - auVar18._8_4_;
        fVar16 = (auVar20._0_4_ - auVar18._0_4_) * (fVar16 + fVar17) + fVar16 * fVar17;
        if (fVar16 < fVar19) {
          uVar14 = uVar1 & 0xfffffffc | uVar12;
          fVar19 = fVar16;
        }
      }
      if (uVar11 - 1 != uVar9) {
        auVar20 = maxps(auVar22,*(undefined1 (*) [16])(pFVar8 + 0x20));
        auVar18 = minps(auVar21,*(undefined1 (*) [16])(pFVar8 + 0x10));
        fVar17 = auVar20._4_4_ - auVar18._4_4_;
        fVar16 = auVar20._8_4_ - auVar18._8_4_;
        fVar16 = (auVar20._0_4_ - auVar18._0_4_) * (fVar16 + fVar17) + fVar16 * fVar17;
        if (fVar16 < fVar19) {
          uVar14 = uVar1 & 0xfffffffc | uVar11 - 1;
          fVar19 = fVar16;
        }
      }
      if (uVar11 != uVar9) {
        auVar20 = maxps(auVar22,*(undefined1 (*) [16])(pFVar8 + 0x40));
        auVar18 = minps(auVar21,*(undefined1 (*) [16])(pFVar8 + 0x30));
        fVar17 = auVar20._4_4_ - auVar18._4_4_;
        fVar16 = auVar20._8_4_ - auVar18._8_4_;
        fVar16 = (auVar20._0_4_ - auVar18._0_4_) * (fVar16 + fVar17) + fVar16 * fVar17;
        if (fVar16 < fVar19) {
          uVar14 = uVar1 & 0xfffffffc | uVar11;
          fVar19 = fVar16;
        }
      }
      if (uVar11 + 1 != uVar9) {
        auVar20 = maxps(auVar22,*(undefined1 (*) [16])(pFVar8 + 0x60));
        auVar18 = minps(auVar21,*(undefined1 (*) [16])(pFVar8 + 0x50));
        fVar17 = auVar20._4_4_ - auVar18._4_4_;
        fVar16 = auVar20._8_4_ - auVar18._8_4_;
        fVar16 = (auVar20._0_4_ - auVar18._0_4_) * (fVar16 + fVar17) + fVar16 * fVar17;
        if (fVar16 < fVar19) {
          uVar14 = uVar1 & 0xfffffffc | uVar11 + 1;
          fVar19 = fVar16;
        }
      }
      pFVar8 = pFVar8 + 0x80;
      uVar12 = uVar12 + 4;
      uVar13 = (ulonglong)uVar12;
      uVar11 = uVar11 + 4;
    } while (uVar12 < uVar2 - 3);
    uVar6 = (ulonglong)((uVar2 - 4 >> 2) + 1) << 2;
    if (uVar2 <= uVar12) goto LAB_14489eebc;
  }
  pFVar8 = pFVar10 + uVar6 * 0x20 + (ulonglong)uVar5 * 0xa0 + 0x30;
  do {
    uVar9 = (uint)uVar13;
    if (uVar9 != (uVar1 & 3)) {
      auVar20 = maxps(auVar22,*(undefined1 (*) [16])pFVar8);
      auVar18 = minps(auVar21,*(undefined1 (*) [16])(pFVar8 + -0x10));
      fVar17 = auVar20._4_4_ - auVar18._4_4_;
      fVar16 = auVar20._8_4_ - auVar18._8_4_;
      fVar16 = (auVar20._0_4_ - auVar18._0_4_) * (fVar16 + fVar17) + fVar16 * fVar17;
      if (fVar16 < fVar19) {
        uVar14 = uVar1 & 0xfffffffc | uVar9;
        fVar19 = fVar16;
      }
    }
    pFVar8 = pFVar8 + 0x20;
    uVar13 = (ulonglong)(uVar9 + 1);
  } while (uVar9 + 1 < uVar2);
LAB_14489eebc:
  if (uVar14 != 0xffffffff) {
    uVar1 = *(uint *)(pFVar15 + ((ulonglong)(param_1 & 3) + 2) * 4);
    lVar7 = (ulonglong)(param_1 & 3) + 1;
    local_58._0_8_ = *(undefined8 *)(pFVar15 + lVar7 * 0x20);
    local_58._8_8_ = *(undefined8 *)(pFVar15 + lVar7 * 0x20 + 8);
    local_48 = *(undefined8 *)(pFVar15 + (lVar7 * 8 + 4) * 4);
    uStack_40 = *(undefined8 *)(pFVar15 + (lVar7 * 8 + 4) * 4 + 8);
    Set(this,param_1,
        (TBounds<float> *)(pFVar10 + ((ulonglong)(uVar14 & 3) + 1) * 0x20 + (ulonglong)uVar5 * 0xa0)
        ,*(uint *)(pFVar10 + (ulonglong)(uVar14 & 3) * 4 + (ulonglong)uVar5 * 0xa0 + 8));
    Set(this,uVar14,(TBounds<float> *)&local_58._s_0,uVar1);
  }
  return;
}

// Set @ 1448a0150

void __thiscall
FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic>::Set
          (FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic> *this,uint param_1,
          TBounds<float> *param_2,uint param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  longlong lVar11;
  
  fVar4 = (param_2->Min).field0_0x0._s_0.X;
  fVar5 = (param_2->Min).field0_0x0._s_0.Y;
  fVar6 = (param_2->Min).field0_0x0._s_0.Z;
  fVar7 = (param_2->Min).field0_0x0._s_0.W;
  uVar8 = *(undefined8 *)&(param_2->Max).field0_0x0;
  uVar9 = *(undefined8 *)((longlong)&(param_2->Max).field0_0x0 + 8);
  if (((this->Nodes).ArrayNum <= (int)(param_1 >> 2)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->Nodes).AllocatorInstance.Data;
  lVar11 = ((ulonglong)(param_1 & 3) + (ulonglong)(param_1 >> 2) * 5 + 1) * 0x20;
  pFVar1 = pFVar2 + lVar11;
  *(float *)pFVar1 = fVar4;
  *(float *)(pFVar1 + 4) = fVar5;
  *(float *)(pFVar1 + 8) = fVar6;
  *(float *)(pFVar1 + 0xc) = fVar7;
  pFVar2 = pFVar2 + lVar11 + 0x10;
  *(undefined8 *)pFVar2 = uVar8;
  *(undefined8 *)(pFVar2 + 8) = uVar9;
  SetFirstChild(this,param_1,param_3);
  return;
}

// SetBounds @ 1448a0220

void __thiscall
FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic>::SetBounds
          (FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic> *this,uint param_1,
          TBounds<float> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  longlong lVar11;
  
  fVar4 = (param_2->Min).field0_0x0._s_0.X;
  fVar5 = (param_2->Min).field0_0x0._s_0.Y;
  fVar6 = (param_2->Min).field0_0x0._s_0.Z;
  fVar7 = (param_2->Min).field0_0x0._s_0.W;
  uVar8 = *(undefined8 *)&(param_2->Max).field0_0x0;
  uVar9 = *(undefined8 *)((longlong)&(param_2->Max).field0_0x0 + 8);
  if (((this->Nodes).ArrayNum <= (int)(param_1 >> 2)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->Nodes).AllocatorInstance.Data;
  lVar11 = ((ulonglong)(param_1 & 3) + 1 + (ulonglong)(param_1 >> 2) * 5) * 0x20;
  pFVar1 = pFVar2 + lVar11;
  *(float *)pFVar1 = fVar4;
  *(float *)(pFVar1 + 4) = fVar5;
  *(float *)(pFVar1 + 8) = fVar6;
  *(float *)(pFVar1 + 0xc) = fVar7;
  pFVar2 = pFVar2 + lVar11 + 0x10;
  *(undefined8 *)pFVar2 = uVar8;
  *(undefined8 *)(pFVar2 + 8) = uVar9;
  return;
}

// SetFirstChild @ 1448a02d0

void __thiscall
FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic>::SetFirstChild
          (FDynamicBVH<4,FSingleRoot,FIgnoreDirty,FSurfaceAreaHeuristic> *this,uint param_1,
          uint param_2)

{
  code *pcVar1;
  bool bVar2;
  FNode *pFVar3;
  
  if ((this->Nodes).ArrayNum <= (int)(param_1 >> 2)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(uint *)((this->Nodes).AllocatorInstance.Data +
           (ulonglong)(param_1 & 3) * 4 + (ulonglong)(param_1 >> 2) * 0xa0 + 8) = param_2;
  if ((param_2 & 1) == 0) {
    pFVar3 = GetNode(this,param_2);
    pFVar3->ParentIndex = param_1;
  }
  else {
    if ((this->Leaves).ArrayNum <= (int)(param_2 >> 1)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(uint *)((this->Leaves).AllocatorInstance.Data + (ulonglong)(param_2 >> 1) * 4) = param_1;
  }
  return;
}

