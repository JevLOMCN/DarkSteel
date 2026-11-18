// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 18

// Compute @ 14357be30

bool __thiscall UE::Geometry::FMeshBoundaryLoops::Compute(FMeshBoundaryLoops *this)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  undefined4 uVar5;
  FDynamicMesh3 *pFVar6;
  FEdgeSpan *pFVar7;
  FEdgeLoop *pFVar8;
  code *pcVar9;
  TFunction<bool___cdecl(int)> *pTVar10;
  bool bVar11;
  undefined1 uVar12;
  char cVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  undefined8 uVar18;
  ForAnyElementType FVar19;
  ulonglong uVar20;
  longlong *plVar21;
  longlong *plVar22;
  FEdgeSpan *pFVar23;
  uint uVar24;
  ulonglong uVar25;
  FScriptContainerElement *pFVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  longlong *plVar30;
  FEdgeLoop *pFVar31;
  uint uVar32;
  ulonglong uVar33;
  TFunction<bool___cdecl(int)> *pTVar34;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FScriptContainerElement local_148 [4];
  uint local_144;
  int local_140 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_138;
  uint local_128;
  TArray<bool,TSizedDefaultAllocator<32>_> local_120;
  longlong local_110;
  TArray<int,TSizedDefaultAllocator<32>_> local_108;
  int local_f8;
  uint local_f4;
  uint local_f0 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_e8;
  TArray<int,TSizedDefaultAllocator<32>_> local_d8;
  uint local_c8 [2];
  longlong local_c0;
  uint local_b8;
  Subloops local_b0;
  uint local_90 [2];
  undefined4 local_88 [2];
  int local_80;
  uint local_78 [2];
  uint local_70 [2];
  int local_68;
  int iStack_64;
  TFunction<bool___cdecl(int)> *local_60;
  int *local_58;
  
  piVar1 = &(this->Loops).ArrayMax;
  pFVar31 = (FEdgeLoop *)(this->Loops).AllocatorInstance.Data;
  iVar27 = (this->Loops).ArrayNum;
  local_58 = piVar1;
  if ((this->Loops).ArrayMax < 0) {
    DestructItems<UE::Geometry::FEdgeLoop,int>(pFVar31,iVar27);
    (this->Loops).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,0,&(this->Loops).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<UE::Geometry::FEdgeLoop,int>(pFVar31,iVar27);
    (this->Loops).ArrayNum = 0;
  }
  uVar20 = 0;
  piVar1 = &(this->Spans).ArrayMax;
  pFVar23 = (FEdgeSpan *)(this->Spans).AllocatorInstance.Data;
  iVar27 = (this->Spans).ArrayNum;
  if ((this->Spans).ArrayMax < 0) {
    DestructItems<UE::Geometry::FEdgeSpan,int>(pFVar23,iVar27);
    (this->Spans).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,0,&(this->Spans).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<UE::Geometry::FEdgeSpan,int>(pFVar23,iVar27);
    (this->Spans).ArrayNum = 0;
  }
  this->bSawOpenSpans = false;
  this->bFellBackToSpansOnFailure = false;
  bVar11 = FDynamicMesh3::IsClosed(this->Mesh);
  if (bVar11) {
    bVar11 = true;
  }
  else {
    pFVar6 = this->Mesh;
    iVar27 = (pFVar6->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
             (pFVar6->EdgeRefCounts).RefCounts.CurBlockUsed;
    local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_120.ArrayMax = 0;
    uVar24 = (pFVar6->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
             (pFVar6->EdgeRefCounts).RefCounts.CurBlockUsed;
    uVar25 = (ulonglong)uVar24;
    local_148[0] = (FScriptContainerElement)0x0;
    if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar24);
    }
    local_120.ArrayNum = 0;
    if ((uVar24 != 0) &&
       (Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,uVar24,&local_120.AllocatorInstance,0,&local_120.ArrayMax), 0 < (int)uVar24))
    {
      do {
        if ((local_120.AllocatorInstance.Data <= local_148) &&
           ((local_148 < local_120.AllocatorInstance.Data + local_120.ArrayMax &&
            (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar11)))) {
          pcVar9 = (code *)swi(3);
          uVar12 = (*pcVar9)();
          return (bool)uVar12;
        }
        if (local_120.ArrayNum == local_120.ArrayMax) {
          local_120.ArrayNum =
               Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x101,&local_120.AllocatorInstance,&local_120.ArrayMax);
        }
        iVar16 = local_120.ArrayNum + 1;
        local_120.AllocatorInstance.Data[local_120.ArrayNum] = local_148[0];
        uVar25 = uVar25 - 1;
        local_120.ArrayNum = iVar16;
      } while (uVar25 != 0);
    }
    local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.ArrayNum = 0;
    local_138.ArrayMax = 0;
    local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.ArrayNum = 0;
    local_108.ArrayMax = 0;
    local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.ArrayNum = 0;
    local_d8.ArrayMax = 0;
    local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.ArrayNum = 0;
    local_e8.ArrayMax = 0;
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0x20,&local_e8.AllocatorInstance,0,&local_e8.ArrayMax);
    local_128 = 0;
    if (0 < iVar27) {
      lVar17 = (longlong)iVar27;
      local_110 = 0;
      local_c0 = lVar17;
      do {
        uVar25 = 0;
        pFVar6 = this->Mesh;
        uVar29 = (uint)uVar20;
        uVar24 = uVar29;
        if ((-1 < (int)uVar29) &&
           ((int)uVar29 <
            (int)((pFVar6->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
                 (pFVar6->EdgeRefCounts).RefCounts.CurBlockUsed))) {
          lVar4 = (uVar20 >> 9) * 8;
          lVar17 = local_c0;
          if ((ushort)(*(short *)(*(longlong *)
                                   ((pFVar6->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                                   + lVar4) + (ulonglong)(uVar29 & 0x1ff) * 2) - 1U) < 0xfffe) {
            uVar32 = 0;
            uVar28 = ~uVar29 >> 0x1f;
            uVar15 = uVar32;
            if ((int)uVar29 < local_120.ArrayNum) {
              uVar15 = uVar28;
            }
            if ((uVar15 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               uVar24 = local_128, bVar11)) {
              pcVar9 = (code *)swi(3);
              uVar12 = (*pcVar9)();
              return (bool)uVar12;
            }
            lVar17 = local_c0;
            if ((local_120.AllocatorInstance.Data[local_110] != (FScriptContainerElement)0x1) &&
               (*(int *)(*(longlong *)((this->Mesh->Edges).Blocks.AllocatorInstance.Data + lVar4) +
                         0xc + (ulonglong)(uVar29 & 0x1ff) * 0x10) == -1)) {
              pTVar34 = &this->EdgeFilterFunc;
              local_60 = pTVar34;
              if (*(void **)&this->EdgeFilterFunc != (void *)0x0) {
                local_90[0] = uVar24;
                Core::Private::Function::CheckCallable(*(void **)&this->EdgeFilterFunc);
                plVar30 = *(longlong **)&(this->EdgeFilterFunc).field_0x28;
                pcVar9 = *(code **)pTVar34;
                plVar21 = (longlong *)&(this->EdgeFilterFunc).field_0x10;
                if (plVar30 != (longlong *)0x0) {
                  plVar21 = plVar30;
                }
                uVar18 = (**(code **)(*plVar21 + 8))();
                cVar13 = (*pcVar9)(uVar18,local_90);
                if (cVar13 == '\0') {
                  if ((int)local_128 < local_120.ArrayNum) {
                    uVar32 = uVar28;
                  }
                  if ((uVar32 == 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar9 = (code *)swi(3);
                    uVar12 = (*pcVar9)();
                    return (bool)uVar12;
                  }
                  local_120.AllocatorInstance.Data[local_110] = (FScriptContainerElement)0x1;
                  lVar17 = local_c0;
                  uVar24 = local_128;
                  goto LAB_14357c246;
                }
              }
              uVar24 = local_128;
              local_f0[0] = local_128;
              uVar29 = uVar32;
              if ((int)local_128 < local_120.ArrayNum) {
                uVar29 = uVar28;
              }
              if ((uVar29 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar9 = (code *)swi(3);
                uVar12 = (*pcVar9)();
                return (bool)uVar12;
              }
              local_120.AllocatorInstance.Data[local_110] = (FScriptContainerElement)0x1;
              if (((local_138.AllocatorInstance.Data <= (FScriptContainerElement *)local_f0) &&
                  ((FScriptContainerElement *)local_f0 <
                   local_138.AllocatorInstance.Data + (longlong)local_138.ArrayMax * 4)) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar11)) {
                pcVar9 = (code *)swi(3);
                uVar12 = (*pcVar9)();
                return (bool)uVar12;
              }
              iVar27 = local_138.ArrayNum;
              if (local_138.ArrayNum == local_138.ArrayMax) {
                iVar27 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&local_138.AllocatorInstance,&local_138.ArrayMax);
              }
              local_b8 = uVar24;
              local_138.ArrayNum = iVar27 + 1;
              bVar11 = false;
              *(uint *)(local_138.AllocatorInstance.Data + (longlong)iVar27 * 4) = local_f0[0];
LAB_14357c3d0:
              uVar24 = local_b8;
              FDynamicMesh3::GetOrientedBoundaryEdgeV(this->Mesh,(int)&local_68);
              local_f8 = local_68;
              local_140[0] = iStack_64;
              if (bVar11) {
                local_f8 = iStack_64;
                local_140[0] = local_68;
              }
              else {
                if (((local_108.AllocatorInstance.Data <= (FScriptContainerElement *)&local_f8) &&
                    ((FScriptContainerElement *)&local_f8 <
                     local_108.AllocatorInstance.Data + (longlong)local_108.ArrayMax * 4)) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar14)) {
                  pcVar9 = (code *)swi(3);
                  uVar12 = (*pcVar9)();
                  return (bool)uVar12;
                }
                iVar27 = local_108.ArrayNum;
                if (local_108.ArrayNum == local_108.ArrayMax) {
                  iVar27 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&local_108.AllocatorInstance,&local_108.ArrayMax);
                }
                local_108.ArrayNum = iVar27 + 1;
                *(int *)(local_108.AllocatorInstance.Data + (longlong)iVar27 * 4) = local_f8;
              }
              local_f4 = 0xffffffff;
              local_c8[0] = 1;
              iVar27 = FDynamicMesh3::GetVtxBoundaryEdges
                                 (this->Mesh,local_140[0],(int *)&local_f4,(int *)local_c8);
              uVar18 = local_e8._8_8_;
              local_80 = iVar27;
              if (*(void **)pTVar34 == (void *)0x0) {
LAB_14357c668:
                if (1 < iVar27) {
                  local_144 = 0xffffffff;
                  if (2 < iVar27) goto LAB_14357c72f;
                  bVar14 = local_f4 == uVar24;
                  if (!bVar14) {
                    if ((local_c8[0] != uVar24) &&
                       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                           ("e0 == eCur || e1 == eCur",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\MeshBoundaryLoops.cpp"
                                            ,0x10d,L""), bVar14)) {
                      pcVar9 = (code *)swi(3);
                      uVar12 = (*pcVar9)();
                      return (bool)uVar12;
                    }
                    bVar14 = local_f4 == uVar24;
                  }
                  local_144 = local_f4;
                  if (bVar14) {
                    local_144 = local_c8[0];
                  }
                  goto LAB_14357c941;
                }
                if (this->SpanBehavior == Abort) {
                  this->bSawOpenSpans = true;
                  bVar11 = false;
                  this->bAborted = true;
                  goto LAB_14357c260;
                }
                if (!bVar11) goto code_r0x00014357c687;
                goto LAB_14357cb58;
              }
              if (iVar27 < 3) {
                local_78[0] = local_f4;
                Core::Private::Function::CheckCallable(*(void **)pTVar34);
                plVar21 = *(longlong **)&(this->EdgeFilterFunc).field_0x28;
                plVar30 = (longlong *)&(this->EdgeFilterFunc).field_0x10;
                pcVar9 = *(code **)pTVar34;
                plVar22 = plVar30;
                if (plVar21 != (longlong *)0x0) {
                  plVar22 = plVar21;
                }
                uVar18 = (**(code **)(*plVar22 + 8))();
                cVar13 = (*pcVar9)(uVar18,local_78);
                if (cVar13 == '\0') {
                  iVar27 = iVar27 + -1;
                }
                local_70[0] = local_c8[0];
                Core::Private::Function::CheckCallable(*(void **)pTVar34);
                plVar21 = *(longlong **)&(this->EdgeFilterFunc).field_0x28;
                pcVar9 = *(code **)pTVar34;
                if (plVar21 != (longlong *)0x0) {
                  plVar30 = plVar21;
                }
                uVar18 = (**(code **)(*plVar30 + 8))(plVar30);
                cVar13 = (*pcVar9)(uVar18,local_70);
                if (cVar13 == '\0') {
                  iVar27 = iVar27 + -1;
                }
                goto LAB_14357c668;
              }
              iVar16 = local_e8.ArrayMax;
              local_e8._8_8_ = (ulonglong)(uint)local_e8.ArrayMax << 0x20;
              if (((longlong)uVar18 < 0) && (iVar16 != 0)) {
                Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,0,&local_e8.AllocatorInstance,0,&local_e8.ArrayMax);
              }
              iVar16 = FDynamicMesh3::
                       GetAllVtxBoundaryEdges<TArray<int,TSizedDefaultAllocator<32>_>_>
                                 (this->Mesh,local_140[0],&local_e8);
              pTVar10 = local_60;
              if (iVar16 == -1) {
                iVar16 = local_e8.ArrayNum;
              }
              uVar20 = uVar25;
              uVar33 = uVar25;
              uVar24 = local_b8;
              if (0 < iVar16) {
                while( true ) {
                  uVar29 = (uint)uVar20;
                  uVar24 = uVar32;
                  if ((int)uVar29 < local_e8.ArrayNum) {
                    uVar24 = ~uVar29 >> 0x1f;
                  }
                  if ((uVar24 == 0) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar14)) {
                    pcVar9 = (code *)swi(3);
                    uVar12 = (*pcVar9)();
                    return (bool)uVar12;
                  }
                  local_88[0] = *(undefined4 *)(local_e8.AllocatorInstance.Data + uVar33 * 4);
                  Core::Private::Function::CheckCallable(*(void **)pTVar10);
                  pcVar9 = *(code **)pTVar10;
                  plVar30 = *(longlong **)&(this->EdgeFilterFunc).field_0x28;
                  plVar21 = (longlong *)&(this->EdgeFilterFunc).field_0x10;
                  if (plVar30 != (longlong *)0x0) {
                    plVar21 = plVar30;
                  }
                  uVar18 = (**(code **)(*plVar21 + 8))();
                  (*pcVar9)(uVar18,local_88);
                  pTVar34 = local_60;
                  uVar24 = local_b8;
                  iVar27 = local_80;
                  if ((longlong)iVar16 <= (longlong)(uVar33 + 1)) break;
                  uVar20 = (ulonglong)(uVar29 + 1);
                  uVar33 = uVar33 + 1;
                }
              }
LAB_14357c72f:
              local_144 = 0xffffffff;
              if ((local_108.ArrayNum < 1) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar9 = (code *)swi(3);
                uVar12 = (*pcVar9)();
                return (bool)uVar12;
              }
              uVar18 = local_e8._8_8_;
              if (local_140[0] == *(int *)local_108.AllocatorInstance.Data) {
                local_144 = 0xfffffffe;
LAB_14357c834:
                for (FVar19.Data = local_d8.AllocatorInstance.Data;
                    FVar19.Data != local_d8.AllocatorInstance.Data + (longlong)local_d8.ArrayNum * 4
                    ; FVar19.Data = FVar19.Data + 4) {
                  if (*(int *)FVar19.Data == local_140[0]) goto LAB_14357c944;
                }
                iVar27 = local_d8.ArrayNum;
                if ((local_d8.AllocatorInstance.Data <= (FScriptContainerElement *)local_140) &&
                   ((FScriptContainerElement *)local_140 <
                    local_d8.AllocatorInstance.Data + (longlong)local_d8.ArrayMax * 4)) {
                  bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     );
                  if (bVar14) {
                    pcVar9 = (code *)swi(3);
                    uVar12 = (*pcVar9)();
                    return (bool)uVar12;
                  }
                  iVar27 = local_d8.ArrayNum;
                }
                if (iVar27 == local_d8.ArrayMax) {
                  iVar27 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&local_d8.AllocatorInstance,&local_d8.ArrayMax);
                }
                local_d8.ArrayNum = iVar27 + 1;
                *(int *)(local_d8.AllocatorInstance.Data + (longlong)iVar27 * 4) = local_140[0];
LAB_14357c941:
LAB_14357c944:
                lVar17 = (longlong)(int)local_144;
                if ((local_144 == 0xfffffffe) || (local_144 == local_f0[0])) {
                  if ((!bVar11) && (this->bOnlyComputeSpans == false)) {
                    if (local_d8.ArrayNum < 1) {
                      uVar24 = (this->Loops).ArrayNum;
                      if (uVar24 == (this->Loops).ArrayMax) {
                        uVar24 = Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x840,&(this->Loops).AllocatorInstance,
                                            &(this->Loops).ArrayMax);
                      }
                      (this->Loops).ArrayNum = uVar24 + 1;
                      pFVar26 = (this->Loops).AllocatorInstance.Data;
                      lVar17 = (longlong)(int)uVar24 * 0x40;
                      *(undefined8 *)(pFVar26 + lVar17 + 8) = 0;
                      *(undefined8 *)(pFVar26 + lVar17 + 0x10) = 0;
                      *(undefined8 *)(pFVar26 + lVar17 + 0x18) = 0;
                      *(undefined8 *)(pFVar26 + lVar17 + 0x20) = 0;
                      *(undefined8 *)(pFVar26 + lVar17 + 0x28) = 0;
                      *(undefined8 *)(pFVar26 + lVar17 + 0x30) = 0;
                      pFVar26[lVar17 + 0x38] = (FScriptContainerElement)0x0;
                      *(undefined8 *)(pFVar26 + lVar17) = 0;
                      if ((int)uVar24 < (this->Loops).ArrayNum) {
                        uVar32 = ~uVar24 >> 0x1f;
                      }
                      if ((uVar32 == 0) &&
                         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar11)) {
                        pcVar9 = (code *)swi(3);
                        uVar12 = (*pcVar9)();
                        return (bool)uVar12;
                      }
                      FVar19.Data = local_108.AllocatorInstance.Data;
                      pFVar26 = (this->Loops).AllocatorInstance.Data + lVar17;
                      *(FDynamicMesh3 **)pFVar26 = this->Mesh;
                      pTVar2 = (TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar26 + 8);
                      if (pTVar2 != &local_108) {
                        iVar27 = local_108.ArrayNum;
                        lVar17 = (longlong)local_108.ArrayNum;
                        pFVar3 = pFVar26 + 0x14;
                        *(int *)(pFVar26 + 0x10) = local_108.ArrayNum;
                        if ((local_108.ArrayNum == 0) && (*(int *)pFVar3 == 0)) {
                          *(int *)pFVar3 = 0;
                        }
                        else {
                          Core::Private::
                          ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (4,4,local_108.ArrayNum,*(int *)pFVar3,
                                     (ForAnyElementType *)pTVar2,local_108.ArrayNum,(int *)pFVar3);
                          if (iVar27 != 0) {
                            memcpy((pTVar2->AllocatorInstance).Data,FVar19.Data,lVar17 << 2);
                          }
                        }
                      }
                      FVar19.Data = local_138.AllocatorInstance.Data;
                      pTVar2 = (TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar26 + 0x18);
                      if (pTVar2 != &local_138) {
                        iVar27 = local_138.ArrayNum;
                        lVar17 = (longlong)local_138.ArrayNum;
                        pFVar3 = pFVar26 + 0x24;
                        *(int *)(pFVar26 + 0x20) = local_138.ArrayNum;
                        if ((local_138.ArrayNum == 0) && (*(int *)pFVar3 == 0)) {
                          *(int *)pFVar3 = 0;
                        }
                        else {
                          Core::Private::
                          ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (4,4,local_138.ArrayNum,*(int *)pFVar3,
                                     (ForAnyElementType *)pTVar2,local_138.ArrayNum,(int *)pFVar3);
                          if (iVar27 != 0) {
                            memcpy((pTVar2->AllocatorInstance).Data,FVar19.Data,lVar17 << 2);
                          }
                        }
                      }
                    }
                    else {
                      local_b0.Loops.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      local_b0.Loops.ArrayNum = 0;
                      local_b0.Loops.ArrayMax = 0;
                      local_b0.Spans.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      local_b0.Spans.ArrayNum = 0;
                      local_b0.Spans.ArrayMax = 0;
                      bVar11 = ExtractSubloops(this,&local_108,&local_138,&local_d8,&local_b0);
                      piVar1 = local_58;
                      if (bVar11) {
                        iVar27 = local_b0.Loops.ArrayNum;
                        uVar20 = (ulonglong)local_b0.Loops.ArrayNum;
                        pFVar31 = (FEdgeLoop *)
                                  (local_b0.Loops.AllocatorInstance.Data + uVar20 * 0x40);
                        FVar19.Data = local_b0.Loops.AllocatorInstance.Data;
                        while( true ) {
                          if ((int)uVar20 != iVar27) {
                            local_res20[0] = 0;
                            `TCheckedPointerIterator<UE::Geometry::FEdgeLoop,int,0>::operator!='::
                            __l2::<lambda_1>::operator()(local_res20);
                          }
                          if ((FEdgeLoop *)FVar19.Data == pFVar31) break;
                          pFVar8 = (FEdgeLoop *)(this->Loops).AllocatorInstance.Data;
                          if (((pFVar8 <= FVar19.Data) && (FVar19.Data < pFVar8 + *piVar1)) &&
                             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                 ), bVar11)) {
                            pcVar9 = (code *)swi(3);
                            uVar12 = (*pcVar9)();
                            return (bool)uVar12;
                          }
                          iVar16 = (this->Loops).ArrayNum;
                          if (iVar16 == *piVar1) {
                            iVar16 = Core::Private::
                                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                               (0x840,&(this->Loops).AllocatorInstance,piVar1);
                          }
                          (this->Loops).ArrayNum = iVar16 + 1;
                          FEdgeLoop::FEdgeLoop
                                    ((FEdgeLoop *)
                                     ((this->Loops).AllocatorInstance.Data + (longlong)iVar16 * 0x40
                                     ),(FEdgeLoop *)FVar19.Data);
                          uVar20 = local_b0.Loops._8_8_ & 0xffffffff;
                          FVar19.Data = FVar19.Data + 0x40;
                        }
                      }
                      else {
                        iVar27 = local_b0.Spans.ArrayNum;
                        if (this->FailureBehavior == Abort) {
                          DestructItems<UE::Geometry::FEdgeSpan,int>
                                    ((FEdgeSpan *)local_b0.Spans.AllocatorInstance.Data,
                                     local_b0.Spans.ArrayNum);
                          if ((FEdgeSpan *)local_b0.Spans.AllocatorInstance.Data != (FEdgeSpan *)0x0
                             ) {
                            FMemory::Free(local_b0.Spans.AllocatorInstance.Data);
                          }
                          DestructItems<UE::Geometry::FEdgeLoop,int>
                                    ((FEdgeLoop *)local_b0.Loops.AllocatorInstance.Data,
                                     local_b0.Loops.ArrayNum);
                          if ((FEdgeLoop *)local_b0.Loops.AllocatorInstance.Data != (FEdgeLoop *)0x0
                             ) {
                            FMemory::Free(local_b0.Loops.AllocatorInstance.Data);
                          }
                          goto LAB_14357d18d;
                        }
                        if (0 < local_b0.Spans.ArrayNum) {
                          pFVar23 = (FEdgeSpan *)
                                    (local_b0.Spans.AllocatorInstance.Data +
                                    (longlong)local_b0.Spans.ArrayNum * 0x40);
                          this->bFellBackToSpansOnFailure = true;
                          FVar19.Data = local_b0.Spans.AllocatorInstance.Data;
                          while( true ) {
                            if (local_b0.Spans.ArrayNum != iVar27) {
                              local_res18[0] = 0;
                              `TCheckedPointerIterator<UE::Geometry::FEdgeSpan,int,0>::operator!='::
                              __l2::<lambda_1>::operator()(local_res18);
                            }
                            if ((FEdgeSpan *)FVar19.Data == pFVar23) break;
                            pFVar7 = (FEdgeSpan *)(this->Spans).AllocatorInstance.Data;
                            if (((pFVar7 <= FVar19.Data) &&
                                (FVar19.Data < pFVar7 + (this->Spans).ArrayMax)) &&
                               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                                   (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar11)) {
                              pcVar9 = (code *)swi(3);
                              uVar12 = (*pcVar9)();
                              return (bool)uVar12;
                            }
                            iVar16 = (this->Spans).ArrayNum;
                            if (iVar16 == (this->Spans).ArrayMax) {
                              iVar16 = Core::Private::
                                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                                 (0x840,&(this->Spans).AllocatorInstance,
                                                  &(this->Spans).ArrayMax);
                            }
                            (this->Spans).ArrayNum = iVar16 + 1;
                            FEdgeSpan::FEdgeSpan
                                      ((FEdgeSpan *)
                                       ((this->Spans).AllocatorInstance.Data +
                                       (longlong)iVar16 * 0x40),(FEdgeSpan *)FVar19.Data);
                            FVar19.Data = FVar19.Data + 0x40;
                          }
                        }
                      }
                      DestructItems<UE::Geometry::FEdgeSpan,int>
                                ((FEdgeSpan *)local_b0.Spans.AllocatorInstance.Data,
                                 local_b0.Spans.ArrayNum);
                      if ((FEdgeSpan *)local_b0.Spans.AllocatorInstance.Data != (FEdgeSpan *)0x0) {
                        FMemory::Free(local_b0.Spans.AllocatorInstance.Data);
                      }
                      DestructItems<UE::Geometry::FEdgeLoop,int>
                                ((FEdgeLoop *)local_b0.Loops.AllocatorInstance.Data,
                                 local_b0.Loops.ArrayNum);
                      if ((FEdgeLoop *)local_b0.Loops.AllocatorInstance.Data != (FEdgeLoop *)0x0) {
                        FMemory::Free(local_b0.Loops.AllocatorInstance.Data);
                      }
                    }
                    goto LAB_14357cc77;
                  }
                  goto LAB_14357cb58;
                }
                uVar24 = uVar32;
                if ((int)local_144 < local_120.ArrayNum) {
                  uVar24 = ~local_144 >> 0x1f;
                }
                if ((uVar24 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar9 = (code *)swi(3);
                  uVar12 = (*pcVar9)();
                  return (bool)uVar12;
                }
                if (local_120.AllocatorInstance.Data[lVar17] != (FScriptContainerElement)0x0)
                goto LAB_14357cb40;
                lVar17 = (longlong)(int)local_144;
                uVar24 = uVar32;
                if ((int)local_144 < local_120.ArrayNum) {
                  uVar24 = ~local_144 >> 0x1f;
                }
                if ((uVar24 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar9 = (code *)swi(3);
                  uVar12 = (*pcVar9)();
                  return (bool)uVar12;
                }
                if ((local_120.AllocatorInstance.Data[lVar17] != (FScriptContainerElement)0x0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("used_edge[eNext] == false",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\MeshBoundaryLoops.cpp"
                                        ,299,L""), bVar14)) {
                  pcVar9 = (code *)swi(3);
                  uVar12 = (*pcVar9)();
                  return (bool)uVar12;
                }
                if (((local_138.AllocatorInstance.Data <= (FScriptContainerElement *)&local_144) &&
                    ((FScriptContainerElement *)&local_144 <
                     local_138.AllocatorInstance.Data + (longlong)local_138.ArrayMax * 4)) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar14)) {
                  pcVar9 = (code *)swi(3);
                  uVar12 = (*pcVar9)();
                  return (bool)uVar12;
                }
                iVar27 = local_138.ArrayNum;
                if (local_138.ArrayNum == local_138.ArrayMax) {
                  iVar27 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&local_138.AllocatorInstance,&local_138.ArrayMax);
                }
                local_138.ArrayNum = iVar27 + 1;
                *(uint *)(local_138.AllocatorInstance.Data + (longlong)iVar27 * 4) = local_144;
                lVar17 = (longlong)(int)local_144;
                uVar24 = uVar32;
                if ((int)local_144 < local_120.ArrayNum) {
                  uVar24 = ~local_144 >> 0x1f;
                }
                if ((uVar24 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar9 = (code *)swi(3);
                  uVar12 = (*pcVar9)();
                  return (bool)uVar12;
                }
                local_120.AllocatorInstance.Data[lVar17] = (FScriptContainerElement)0x1;
                local_b8 = local_144;
                goto LAB_14357c3d0;
              }
              iVar16 = local_e8.ArrayMax;
              local_e8._8_8_ = (ulonglong)(uint)local_e8.ArrayMax << 0x20;
              if (((longlong)uVar18 < 0) && (iVar16 != 0)) {
                Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,0,&local_e8.AllocatorInstance,0,&local_e8.ArrayMax);
              }
              iVar16 = FDynamicMesh3::
                       GetAllVtxBoundaryEdges<TArray<int,TSizedDefaultAllocator<32>_>_>
                                 (this->Mesh,local_140[0],&local_e8);
              if ((iVar16 != iVar27) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("num_be == bdry_nbrs",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\MeshBoundaryLoops.cpp"
                                      ,0xe6,L""), bVar14)) {
                pcVar9 = (code *)swi(3);
                uVar12 = (*pcVar9)();
                return (bool)uVar12;
              }
              if (*(longlong *)pTVar34 != 0) {
                iVar16 = BufferUtil::FilterInPlace<int>(&local_e8,pTVar34,iVar16,0);
              }
              local_144 = FindLeftTurnEdge(this,uVar24,local_140[0],&local_e8,iVar16,&local_120);
              if (local_144 != 0xffffffff) goto LAB_14357c834;
LAB_14357cb40:
              if ((this->FailureBehavior == Abort) || (this->SpanBehavior == Abort)) {
LAB_14357d18d:
                this->bAborted = true;
                bVar11 = false;
                goto LAB_14357c260;
              }
LAB_14357cb58:
              this->bSawOpenSpans = true;
              if (this->SpanBehavior == Compute) {
                if (0 < local_138.ArrayNum / 2) {
                  pFVar26 = local_138.AllocatorInstance.Data +
                            (longlong)(local_138.ArrayNum + -1) * 4;
                  do {
                    uVar5 = *(undefined4 *)(local_138.AllocatorInstance.Data + uVar25 * 4);
                    *(undefined4 *)(local_138.AllocatorInstance.Data + uVar25 * 4) =
                         *(undefined4 *)pFVar26;
                    uVar25 = uVar25 + 1;
                    *(undefined4 *)pFVar26 = uVar5;
                    pFVar26 = pFVar26 + -4;
                  } while ((longlong)uVar25 < (longlong)(local_138.ArrayNum / 2));
                }
                uVar24 = (this->Spans).ArrayNum;
                if (uVar24 == (this->Spans).ArrayMax) {
                  uVar24 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x840,&(this->Spans).AllocatorInstance,&(this->Spans).ArrayMax
                                     );
                }
                (this->Spans).ArrayNum = uVar24 + 1;
                pFVar26 = (this->Spans).AllocatorInstance.Data;
                lVar17 = (longlong)(int)uVar24 * 0x40;
                *(undefined8 *)(pFVar26 + lVar17 + 8) = 0;
                *(undefined8 *)(pFVar26 + lVar17 + 0x10) = 0;
                *(undefined8 *)(pFVar26 + lVar17 + 0x18) = 0;
                *(undefined8 *)(pFVar26 + lVar17 + 0x20) = 0;
                *(undefined8 *)(pFVar26 + lVar17 + 0x28) = 0;
                *(undefined8 *)(pFVar26 + lVar17 + 0x30) = 0;
                pFVar26[lVar17 + 0x38] = (FScriptContainerElement)0x0;
                *(undefined8 *)(pFVar26 + lVar17) = 0;
                if ((int)uVar24 < (this->Spans).ArrayNum) {
                  uVar32 = ~uVar24 >> 0x1f;
                }
                if ((uVar32 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar9 = (code *)swi(3);
                  uVar12 = (*pcVar9)();
                  return (bool)uVar12;
                }
                pFVar23 = (FEdgeSpan *)((this->Spans).AllocatorInstance.Data + lVar17);
                pFVar23->Mesh = this->Mesh;
                FEdgeSpan::InitializeFromEdges(pFVar23,&local_138);
              }
LAB_14357cc77:
              uVar18 = local_138._8_8_;
              iVar27 = local_138.ArrayMax;
              local_138._8_8_ = (ulonglong)(uint)local_138.ArrayMax << 0x20;
              if (((longlong)uVar18 < 0) && (iVar27 != 0)) {
                Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,0,&local_138.AllocatorInstance,0,&local_138.ArrayMax);
              }
              uVar18 = local_108._8_8_;
              iVar27 = local_108.ArrayMax;
              local_108._8_8_ = (ulonglong)(uint)local_108.ArrayMax << 0x20;
              if (((longlong)uVar18 < 0) && (iVar27 != 0)) {
                Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,0,&local_108.AllocatorInstance,0,&local_108.ArrayMax);
              }
              uVar18 = local_d8._8_8_;
              iVar27 = local_d8.ArrayMax;
              local_d8._8_8_ = (ulonglong)(uint)local_d8.ArrayMax << 0x20;
              lVar17 = local_c0;
              uVar24 = local_128;
              if (((longlong)uVar18 < 0) && (iVar27 != 0)) {
                Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,0,&local_d8.AllocatorInstance,0,&local_d8.ArrayMax);
                lVar17 = local_c0;
                uVar24 = local_128;
              }
            }
          }
        }
LAB_14357c246:
        local_128 = uVar24 + 1;
        uVar20 = (ulonglong)local_128;
        local_110 = local_110 + 1;
      } while (local_110 < lVar17);
    }
    bVar11 = true;
LAB_14357c260:
    if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.AllocatorInstance.Data);
    }
    if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.AllocatorInstance.Data);
    }
    if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.AllocatorInstance.Data);
    }
    if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.AllocatorInstance.Data);
    }
    if (local_120.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.AllocatorInstance.Data);
    }
  }
  return bVar11;
code_r0x00014357c687:
  bVar11 = true;
  if (local_138.ArrayNum < 1) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar9 = (code *)swi(3);
      uVar12 = (*pcVar9)();
      return (bool)uVar12;
    }
  }
  local_b8 = *(uint *)local_138.AllocatorInstance.Data;
  if (0 < local_138.ArrayNum / 2) {
    pFVar26 = local_138.AllocatorInstance.Data + (longlong)(local_138.ArrayNum + -1) * 4;
    uVar20 = uVar25;
    do {
      uVar5 = *(undefined4 *)(local_138.AllocatorInstance.Data + uVar20 * 4);
      *(undefined4 *)(local_138.AllocatorInstance.Data + uVar20 * 4) = *(undefined4 *)pFVar26;
      uVar20 = uVar20 + 1;
      *(undefined4 *)pFVar26 = uVar5;
      pFVar26 = pFVar26 + -4;
    } while ((longlong)uVar20 < (longlong)(local_138.ArrayNum / 2));
  }
  goto LAB_14357c3d0;
}

// CountInList @ 14358b290

int __cdecl
UE::Geometry::FMeshBoundaryLoops::CountInList
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  
  iVar5 = param_1->ArrayNum;
  iVar8 = 0;
  uVar6 = 0;
  if (0 < iVar5) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < iVar5) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        iVar5 = (*pcVar1)();
        return iVar5;
      }
      iVar5 = param_1->ArrayNum;
      iVar2 = iVar8 + 1;
      if (*(int *)((param_1->AllocatorInstance).Data + lVar7) != param_2) {
        iVar2 = iVar8;
      }
      iVar8 = iVar2;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 4;
    } while ((int)uVar6 < iVar5);
  }
  return iVar8;
}

// CountSpan @ 14358b350

int __cdecl
UE::Geometry::FMeshBoundaryLoops::CountSpan
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,int param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = param_1->ArrayNum;
  iVar2 = 0;
  while( true ) {
    if (param_2 == param_3) {
      return iVar2;
    }
    uVar4 = 0;
    if (param_2 < param_1->ArrayNum) {
      uVar4 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) break;
    iVar6 = iVar2 + 1;
    if (*(int *)((param_1->AllocatorInstance).Data + (longlong)param_2 * 4) == -1) {
      iVar6 = iVar2;
    }
    param_2 = (int)(param_2 + 1U) % iVar5;
    iVar2 = iVar6;
  }
  pcVar1 = (code *)swi(3);
  iVar5 = (*pcVar1)();
  return iVar5;
}

// ExtractSpan @ 14358fae0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Geometry::FMeshBoundaryLoops::ExtractSpan
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,int param_2,int param_3,bool param_4,
          TArray<int,TSizedDefaultAllocator<32>_> *param_5)

{
  undefined4 uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  
  iVar4 = CountSpan(param_1,param_2,param_3);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(param_5,iVar4,Default);
  iVar4 = param_1->ArrayNum;
  uVar9 = 0;
  if (param_2 != param_3) {
    lVar8 = 0;
    do {
      uVar7 = (uint)~param_2 >> 0x1f;
      uVar5 = 0;
      if (param_2 < param_1->ArrayNum) {
        uVar5 = uVar7;
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
      lVar6 = (longlong)param_2;
      if (*(int *)((param_1->AllocatorInstance).Data + lVar6 * 4) != -1) {
        uVar5 = 0;
        if (param_2 < param_1->ArrayNum) {
          uVar5 = uVar7;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar1 = *(undefined4 *)((param_1->AllocatorInstance).Data + lVar6 * 4);
        uVar5 = 0;
        if ((int)uVar9 < param_5->ArrayNum) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar9 = uVar9 + 1;
        *(undefined4 *)((param_5->AllocatorInstance).Data + lVar8) = uVar1;
        lVar8 = lVar8 + 4;
        if (param_4) {
          uVar5 = 0;
          if (param_2 < param_1->ArrayNum) {
            uVar5 = uVar7;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(undefined4 *)((param_1->AllocatorInstance).Data + lVar6 * 4) = 0xffffffff;
        }
      }
      param_2 = (int)(param_2 + 1U) % iVar4;
    } while (param_2 != param_3);
  }
  return;
}

// ExtractSubloops @ 14358fcd0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::FMeshBoundaryLoops::ExtractSubloops
          (FMeshBoundaryLoops *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,Subloops *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  FScriptContainerElement *pFVar18;
  ulonglong uVar19;
  longlong lVar20;
  FEdgeSpan *this_00;
  int iVar21;
  FScriptContainerElement *pFVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar25;
  int iVar26;
  FEdgeLoop *pFVar27;
  ulonglong uVar28;
  uint local_78;
  int local_74;
  uint local_70;
  ForAnyElementType local_68;
  undefined8 local_60;
  undefined1 local_58 [4];
  int local_54;
  int local_50;
  uint local_4c;
  FEdgeLoop *local_48;
  
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  pFVar22 = (param_3->AllocatorInstance).Data;
  iVar13 = param_3->ArrayNum;
  pFVar18 = pFVar22 + (longlong)iVar13 * 4;
  while( true ) {
    if (param_3->ArrayNum != iVar13) {
      local_58[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_58);
    }
    if (pFVar22 == pFVar18) break;
    local_54 = *(int *)pFVar22;
    iVar7 = CountInList(param_1,local_54);
    if (1 < iVar7) {
      if (((local_68.Data <= (FScriptContainerElement *)&local_54) &&
          ((FScriptContainerElement *)&local_54 < local_68.Data + (longlong)local_60._4_4_ * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      iVar7 = (int)local_60;
      if ((int)local_60 == local_60._4_4_) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_68,(int *)((longlong)&local_60 + 4));
      }
      local_60 = CONCAT44(local_60._4_4_,iVar7 + 1);
      *(int *)(local_68.Data + (longlong)iVar7 * 4) = local_54;
    }
    pFVar22 = pFVar22 + 4;
  }
  if ((int)local_60 == 0) {
    piVar1 = &(param_4->Loops).ArrayMax;
    uVar8 = (param_4->Loops).ArrayNum;
    if (uVar8 == *piVar1) {
      uVar8 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x840,(ForAnyElementType *)param_4,piVar1);
    }
    (param_4->Loops).ArrayNum = uVar8 + 1;
    pFVar18 = (param_4->Loops).AllocatorInstance.Data;
    lVar17 = (longlong)(int)uVar8 * 0x40;
    *(undefined8 *)(pFVar18 + lVar17 + 8) = 0;
    *(undefined8 *)(pFVar18 + lVar17 + 0x10) = 0;
    *(undefined8 *)(pFVar18 + lVar17 + 0x18) = 0;
    *(undefined8 *)(pFVar18 + lVar17 + 0x20) = 0;
    *(undefined8 *)(pFVar18 + lVar17 + 0x28) = 0;
    *(undefined8 *)(pFVar18 + lVar17 + 0x30) = 0;
    pFVar18[lVar17 + 0x38] = (FScriptContainerElement)0x0;
    *(undefined8 *)(pFVar18 + lVar17) = 0;
    uVar15 = 0;
    if ((int)uVar8 < (param_4->Loops).ArrayNum) {
      uVar15 = ~uVar8 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    pFVar18 = (param_4->Loops).AllocatorInstance.Data + lVar17;
    *(FDynamicMesh3 **)pFVar18 = this->Mesh;
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar18 + 8),param_1);
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar18 + 0x18),param_2);
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar18 + 0x28),param_3);
    pFVar18[0x38] = (FScriptContainerElement)0x1;
  }
  else {
    if (0 < (int)local_60) {
LAB_14358fee1:
      uVar28 = 0;
      local_4c = 0x7fffffff;
      local_74 = 0;
      local_50 = -1;
      uVar8 = 0;
      if (0 < (int)local_60) {
        local_48 = (FEdgeLoop *)0x0;
        uVar19 = uVar28;
LAB_14358ff10:
        pFVar27 = local_48;
        uVar16 = (uint)uVar19;
        uVar15 = 0;
        if ((int)uVar16 < (int)local_60) {
          uVar15 = ~uVar16 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        iVar13 = *(int *)(local_68.Data + (longlong)&pFVar27->Mesh);
        local_74 = iVar13;
        uVar9 = FindIndex(param_1,0,iVar13);
        local_70 = uVar9;
        uVar10 = FindIndex(param_1,uVar9 + 1,iVar13);
        iVar7 = param_1->ArrayNum;
        uVar12 = 0;
        for (uVar15 = uVar9; uVar11 = uVar9, local_78 = uVar10, uVar4 = local_70, uVar15 != uVar10;
            uVar15 = (int)(uVar15 + 1) % iVar7) {
          uVar11 = uVar12;
          if ((int)uVar15 < param_1->ArrayNum) {
            uVar11 = ~uVar15 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          iVar21 = *(int *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar15 * 4);
          if ((iVar21 != -1) && (iVar21 != iVar13)) {
            for (FVar14.Data = local_68.Data;
                FVar14.Data != local_68.Data + (longlong)(int)local_60 * 4;
                FVar14.Data = FVar14.Data + 4) {
              if (*(int *)FVar14.Data == iVar21) {
                iVar7 = param_1->ArrayNum;
                uVar19 = (ulonglong)uVar10;
                goto LAB_143590040;
              }
            }
          }
        }
        goto LAB_1435900e1;
      }
      goto LAB_143590b9a;
    }
LAB_143590870:
    uVar24 = 0;
    iVar13 = param_1->ArrayNum;
    uVar28 = uVar24;
    uVar19 = uVar24;
    uVar23 = uVar24;
    if (0 < iVar13) {
      do {
        uVar15 = (uint)uVar28;
        uVar8 = 0;
        if ((int)uVar15 < iVar13) {
          uVar8 = ~uVar15 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        if (*(int *)((param_1->AllocatorInstance).Data + uVar23) != -1) {
          uVar19 = (ulonglong)((int)uVar19 + 1);
        }
        iVar13 = param_1->ArrayNum;
        uVar28 = (ulonglong)(uVar15 + 1);
        uVar23 = uVar23 + 4;
      } while ((int)(uVar15 + 1) < iVar13);
      if (0 < (int)uVar19) {
        piVar1 = &(param_4->Loops).ArrayMax;
        uVar8 = (param_4->Loops).ArrayNum;
        if (uVar8 == *piVar1) {
          uVar8 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x840,(ForAnyElementType *)param_4,piVar1);
        }
        (param_4->Loops).ArrayNum = uVar8 + 1;
        pFVar18 = (param_4->Loops).AllocatorInstance.Data;
        lVar17 = (longlong)(int)uVar8 * 0x40;
        *(undefined8 *)(pFVar18 + lVar17 + 8) = 0;
        *(undefined8 *)(pFVar18 + lVar17 + 0x10) = 0;
        *(undefined8 *)(pFVar18 + lVar17 + 0x18) = 0;
        *(undefined8 *)(pFVar18 + lVar17 + 0x20) = 0;
        *(undefined8 *)(pFVar18 + lVar17 + 0x28) = 0;
        *(undefined8 *)(pFVar18 + lVar17 + 0x30) = 0;
        pFVar18[lVar17 + 0x38] = (FScriptContainerElement)0x0;
        *(undefined8 *)(pFVar18 + lVar17) = 0;
        uVar16 = 0;
        uVar15 = uVar16;
        if ((int)uVar8 < (param_4->Loops).ArrayNum) {
          uVar15 = ~uVar8 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        pFVar27 = (FEdgeLoop *)((param_4->Loops).AllocatorInstance.Data + lVar17);
        pTVar25 = &this->VerticesTemp;
        (this->VerticesTemp).ArrayNum = 0;
        if ((this->VerticesTemp).ArrayMax < 0) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&pTVar25->AllocatorInstance,0,&(this->VerticesTemp).ArrayMax);
        }
        iVar13 = param_1->ArrayNum;
        uVar28 = uVar24;
        if (0 < iVar13) {
          do {
            uVar15 = (uint)uVar24;
            uVar8 = uVar16;
            if ((int)uVar15 < iVar13) {
              uVar8 = ~uVar15 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
            if (*(int *)((param_1->AllocatorInstance).Data + uVar28) != -1) {
              uVar8 = uVar16;
              if ((int)uVar15 < param_1->ArrayNum) {
                uVar8 = ~uVar15 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                uVar6 = (*pcVar3)();
                return (bool)uVar6;
              }
              pFVar18 = (pTVar25->AllocatorInstance).Data;
              pFVar22 = (param_1->AllocatorInstance).Data + uVar28;
              if (((pFVar18 <= pFVar22) &&
                  (pFVar22 < pFVar18 + (longlong)(this->VerticesTemp).ArrayMax * 4)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar5)) {
                pcVar3 = (code *)swi(3);
                uVar6 = (*pcVar3)();
                return (bool)uVar6;
              }
              iVar13 = (this->VerticesTemp).ArrayNum;
              if (iVar13 == (this->VerticesTemp).ArrayMax) {
                iVar13 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&pTVar25->AllocatorInstance,&(this->VerticesTemp).ArrayMax
                                   );
              }
              (this->VerticesTemp).ArrayNum = iVar13 + 1;
              *(undefined4 *)((pTVar25->AllocatorInstance).Data + (longlong)iVar13 * 4) =
                   *(undefined4 *)pFVar22;
            }
            iVar13 = param_1->ArrayNum;
            uVar24 = (ulonglong)(uVar15 + 1);
            uVar28 = uVar28 + 4;
          } while ((int)(uVar15 + 1) < iVar13);
        }
        pFVar27->Mesh = this->Mesh;
        FEdgeLoop::InitializeFromVertices(pFVar27,pTVar25,false);
        TArray<int,TSizedDefaultAllocator<32>_>::operator=(&pFVar27->BowtieVertices,param_3);
        pFVar27->bBowtiesCalculated = true;
      }
    }
  }
  bVar5 = true;
LAB_143590b6b:
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  return bVar5;
LAB_143590040:
  do {
    uVar11 = (uint)uVar19;
    uVar15 = uVar12;
    if ((int)uVar11 < param_1->ArrayNum) {
      uVar15 = ~uVar11 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    iVar21 = *(int *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar11 * 4);
    if ((iVar21 != -1) && (iVar21 != iVar13)) {
      for (FVar14.Data = local_68.Data; FVar14.Data != local_68.Data + (longlong)(int)local_60 * 4;
          FVar14.Data = FVar14.Data + 4) {
        local_78 = uVar10;
        if (*(int *)FVar14.Data == iVar21) goto LAB_143590167;
      }
    }
    uVar23 = (longlong)(int)(uVar11 + 1) % (longlong)iVar7;
    uVar19 = uVar23 & 0xffffffff;
    uVar11 = uVar10;
    local_78 = uVar9;
    uVar4 = uVar10;
  } while ((uint)uVar23 != uVar9);
LAB_1435900e1:
  local_70 = uVar4;
  iVar13 = param_1->ArrayNum;
  uVar19 = (ulonglong)uVar11;
  uVar23 = uVar28;
  uVar15 = uVar12;
  uVar9 = uVar11;
  while (uVar9 != local_78) {
    uVar9 = (uint)uVar19;
    uVar15 = uVar12;
    if ((int)uVar9 < param_1->ArrayNum) {
      uVar15 = ~uVar9 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    if (*(int *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar9 * 4) != -1) {
      uVar23 = (ulonglong)((int)uVar23 + 1);
    }
    uVar15 = (uint)uVar23;
    uVar24 = (longlong)(int)(uVar9 + 1) % (longlong)iVar13;
    uVar19 = uVar24 & 0xffffffff;
    uVar9 = (uint)uVar24;
  }
  uVar9 = uVar11;
  if ((int)uVar15 < (int)local_4c) {
    local_50 = local_74;
    local_4c = uVar15;
  }
LAB_143590167:
  iVar13 = local_50;
  uVar19 = (ulonglong)(uVar16 + 1);
  local_48 = (FEdgeLoop *)((longlong)&local_48->Mesh + 4);
  if ((int)local_60 <= (int)(uVar16 + 1)) goto code_r0x000143590180;
  goto LAB_14358ff10;
code_r0x000143590180:
  if (local_50 == -1) {
LAB_143590b9a:
    FVar14.Data = local_68.Data;
    if (this->FailureBehavior == Abort) {
      pTVar25 = &this->FailureBowties;
      if (pTVar25 != (TArray<int,TSizedDefaultAllocator<32>_> *)&local_68) {
        iVar13 = (int)local_60;
        lVar17 = (longlong)(int)local_60;
        piVar1 = &(this->FailureBowties).ArrayMax;
        (this->FailureBowties).ArrayNum = (int)local_60;
        if (((int)local_60 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
          bVar5 = false;
          this->bAborted = true;
          goto LAB_143590b6b;
        }
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(int)local_60,*piVar1,&pTVar25->AllocatorInstance,(int)local_60,piVar1);
        if (iVar13 != 0) {
          memcpy((pTVar25->AllocatorInstance).Data,FVar14.Data,lVar17 << 2);
        }
      }
      this->bAborted = true;
      bVar5 = false;
    }
    else {
      pTVar25 = &this->VerticesTemp;
      (this->VerticesTemp).ArrayNum = 0;
      if ((this->VerticesTemp).ArrayMax < 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&pTVar25->AllocatorInstance,0,&(this->VerticesTemp).ArrayMax);
      }
      iVar13 = param_1->ArrayNum;
      uVar19 = uVar28;
      if (0 < iVar13) {
        do {
          uVar16 = (uint)uVar28;
          uVar15 = uVar8;
          if ((int)uVar16 < iVar13) {
            uVar15 = ~uVar16 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          if (*(int *)((param_1->AllocatorInstance).Data + uVar19) != -1) {
            uVar15 = uVar8;
            if ((int)uVar16 < param_1->ArrayNum) {
              uVar15 = ~uVar16 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
            pFVar18 = (pTVar25->AllocatorInstance).Data;
            pFVar22 = (param_1->AllocatorInstance).Data + uVar19;
            if (((pFVar18 <= pFVar22) &&
                (pFVar22 < pFVar18 + (longlong)(this->VerticesTemp).ArrayMax * 4)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
            iVar13 = (this->VerticesTemp).ArrayNum;
            if (iVar13 == (this->VerticesTemp).ArrayMax) {
              iVar13 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&pTVar25->AllocatorInstance,&(this->VerticesTemp).ArrayMax);
            }
            (this->VerticesTemp).ArrayNum = iVar13 + 1;
            *(undefined4 *)((pTVar25->AllocatorInstance).Data + (longlong)iVar13 * 4) =
                 *(undefined4 *)pFVar22;
          }
          iVar13 = param_1->ArrayNum;
          uVar28 = (ulonglong)(uVar16 + 1);
          uVar19 = uVar19 + 4;
        } while ((int)(uVar16 + 1) < iVar13);
      }
      piVar1 = &(param_4->Spans).ArrayMax;
      uVar15 = (param_4->Spans).ArrayNum;
      if (uVar15 == *piVar1) {
        uVar15 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x840,&(param_4->Spans).AllocatorInstance,piVar1);
      }
      (param_4->Spans).ArrayNum = uVar15 + 1;
      pFVar18 = (param_4->Spans).AllocatorInstance.Data;
      lVar17 = (longlong)(int)uVar15 * 0x40;
      *(undefined8 *)(pFVar18 + lVar17 + 8) = 0;
      *(undefined8 *)(pFVar18 + lVar17 + 0x10) = 0;
      *(undefined8 *)(pFVar18 + lVar17 + 0x18) = 0;
      *(undefined8 *)(pFVar18 + lVar17 + 0x20) = 0;
      *(undefined8 *)(pFVar18 + lVar17 + 0x28) = 0;
      *(undefined8 *)(pFVar18 + lVar17 + 0x30) = 0;
      *(undefined8 *)(pFVar18 + lVar17) = 0;
      pFVar18[lVar17 + 0x38] = (FScriptContainerElement)0x0;
      if ((int)uVar15 < (param_4->Spans).ArrayNum) {
        uVar8 = ~uVar15 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      this_00 = (FEdgeSpan *)((param_4->Spans).AllocatorInstance.Data + lVar17);
      this_00->Mesh = this->Mesh;
      FEdgeSpan::InitializeFromVertices(this_00,pTVar25,false);
      TArray<int,TSizedDefaultAllocator<32>_>::operator=(&this_00->BowtieVertices,param_3);
      this_00->bBowtiesCalculated = true;
      bVar5 = false;
    }
    goto LAB_143590b6b;
  }
  uVar15 = local_70;
  if (local_74 != local_50) {
    local_74 = local_50;
    uVar10 = FindIndex(param_1,0,local_50);
    local_70 = uVar10;
    uVar11 = FindIndex(param_1,uVar10 + 1,iVar13);
    iVar7 = param_1->ArrayNum;
    uVar28 = (ulonglong)uVar10;
    uVar16 = uVar10;
    while (uVar9 = uVar10, local_78 = uVar11, uVar15 = local_70, uVar16 != uVar11) {
      uVar16 = (uint)uVar28;
      uVar15 = uVar12;
      if ((int)uVar16 < param_1->ArrayNum) {
        uVar15 = ~uVar16 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      iVar21 = *(int *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar16 * 4);
      if ((iVar21 != -1) && (iVar21 != iVar13)) {
        for (FVar14.Data = local_68.Data; FVar14.Data != local_68.Data + (longlong)(int)local_60 * 4
            ; FVar14.Data = FVar14.Data + 4) {
          if (*(int *)FVar14.Data == iVar21) {
            iVar7 = param_1->ArrayNum;
            uVar16 = uVar11;
            goto LAB_143590270;
          }
        }
      }
      uVar19 = (longlong)(int)(uVar16 + 1) % (longlong)iVar7;
      uVar28 = uVar19 & 0xffffffff;
      uVar16 = (uint)uVar19;
    }
  }
LAB_143590311:
  local_70 = uVar15;
  uVar15 = uVar12;
  if ((int)uVar9 < param_1->ArrayNum) {
    uVar15 = ~uVar9 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  if (*(int *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar9 * 4) == local_74) {
    if ((int)local_78 < param_1->ArrayNum) {
      uVar12 = ~local_78 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    if (*(int *)((param_1->AllocatorInstance).Data + (longlong)(int)local_78 * 4) == local_74)
    goto LAB_1435903e9;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("loopV[start_i] == bv && loopV[end_i] == bv",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\MeshBoundaryLoops.cpp"
                     ,0x214,L"");
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
LAB_1435903e9:
  piVar1 = &(param_4->Loops).ArrayMax;
  uVar15 = (param_4->Loops).ArrayNum;
  if (uVar15 == *piVar1) {
    uVar15 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x840,(ForAnyElementType *)param_4,piVar1);
  }
  (param_4->Loops).ArrayNum = uVar15 + 1;
  pFVar18 = (param_4->Loops).AllocatorInstance.Data;
  lVar17 = (longlong)(int)uVar15 * 0x40;
  *(undefined8 *)(pFVar18 + lVar17 + 8) = 0;
  *(undefined8 *)(pFVar18 + lVar17 + 0x10) = 0;
  *(undefined8 *)(pFVar18 + lVar17 + 0x18) = 0;
  *(undefined8 *)(pFVar18 + lVar17 + 0x20) = 0;
  *(undefined8 *)(pFVar18 + lVar17 + 0x28) = 0;
  *(undefined8 *)(pFVar18 + lVar17 + 0x30) = 0;
  pFVar18[lVar17 + 0x38] = (FScriptContainerElement)0x0;
  *(undefined8 *)(pFVar18 + lVar17) = 0;
  if ((int)uVar15 < (param_4->Loops).ArrayNum) {
    uVar8 = ~uVar15 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  uVar28 = 0;
  pTVar25 = &this->VerticesTemp;
  pFVar27 = (FEdgeLoop *)((param_4->Loops).AllocatorInstance.Data + lVar17);
  (this->VerticesTemp).ArrayNum = 0;
  local_48 = pFVar27;
  if ((this->VerticesTemp).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar25->AllocatorInstance,0,&(this->VerticesTemp).ArrayMax);
  }
  iVar13 = param_1->ArrayNum;
  uVar19 = uVar28;
  uVar8 = local_70;
  if (local_70 == local_78) {
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum(pTVar25,0,Default);
  }
  else {
    do {
      uVar15 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar15 = ~uVar8 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if (*(int *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar8 * 4) != -1) {
        uVar19 = (ulonglong)((int)uVar19 + 1);
      }
      uVar8 = (int)(uVar8 + 1) % iVar13;
    } while (uVar8 != local_78);
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum(pTVar25,(int)uVar19,Default);
    iVar13 = param_1->ArrayNum;
    uVar8 = 0;
    do {
      uVar15 = local_70;
      uVar9 = ~local_70 >> 0x1f;
      uVar16 = 0;
      if ((int)local_70 < param_1->ArrayNum) {
        uVar16 = uVar9;
      }
      if ((uVar16 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if (*(int *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar15 * 4) != -1) {
        uVar16 = 0;
        if ((int)local_70 < param_1->ArrayNum) {
          uVar16 = uVar9;
        }
        if ((uVar16 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        uVar2 = *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar15 * 4);
        uVar15 = 0;
        if ((int)uVar8 < (this->VerticesTemp).ArrayNum) {
          uVar15 = ~uVar8 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        uVar15 = local_70;
        uVar8 = uVar8 + 1;
        *(undefined4 *)((pTVar25->AllocatorInstance).Data + uVar28) = uVar2;
        uVar28 = uVar28 + 4;
        lVar17 = (longlong)(int)local_70;
        uVar16 = 0;
        if ((int)local_70 < param_1->ArrayNum) {
          uVar16 = uVar9;
        }
        if ((uVar16 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        *(undefined4 *)((param_1->AllocatorInstance).Data + lVar17 * 4) = 0xffffffff;
        local_70 = uVar15;
      }
      local_70 = (int)(local_70 + 1) % iVar13;
      pFVar27 = local_48;
    } while (local_70 != local_78);
  }
  pFVar27->Mesh = this->Mesh;
  FEdgeLoop::InitializeFromVertices(pFVar27,pTVar25,false);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(&pFVar27->BowtieVertices,param_3);
  pFVar27->bBowtiesCalculated = true;
  iVar13 = CountInList(param_1,local_74);
  if (iVar13 < 2) {
    if (((local_68.Data <= (FScriptContainerElement *)&local_74) &&
        ((FScriptContainerElement *)&local_74 < local_68.Data + (longlong)local_60._4_4_ * 4)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    FVar14.Data = local_68.Data;
    lVar17 = (longlong)(int)local_60;
    if ((int)local_60 != 0) {
      iVar26 = 0;
      iVar13 = 0;
      lVar20 = 0;
      bVar5 = *(int *)local_68.Data != local_74;
      iVar21 = iVar13;
      iVar7 = local_74;
joined_r0x0001435907ee:
      do {
        local_50 = iVar21;
        lVar20 = lVar20 + 1;
        iVar13 = iVar13 + 1;
        if (lVar20 < lVar17) {
          iVar21 = local_50;
          if (bVar5 == (*(int *)(FVar14.Data + lVar20 * 4) != iVar7)) goto joined_r0x0001435907ee;
        }
        iVar21 = iVar13 - local_50;
        if (bVar5 != false) {
          if (iVar26 != local_50) {
            memmove(FVar14.Data + (longlong)iVar26 * 4,FVar14.Data + (longlong)local_50 * 4,
                    (longlong)iVar21 << 2);
            iVar7 = local_74;
          }
          iVar26 = iVar26 + iVar21;
        }
        bVar5 = (bool)(bVar5 ^ 1);
        iVar21 = iVar13;
      } while (lVar20 < lVar17);
      local_60 = CONCAT44(local_60._4_4_,iVar26);
    }
  }
  if ((int)local_60 < 1) goto LAB_143590870;
  goto LAB_14358fee1;
LAB_143590270:
  do {
    uVar15 = uVar12;
    if ((int)uVar16 < param_1->ArrayNum) {
      uVar15 = ~uVar16 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    iVar21 = *(int *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar16 * 4);
    if ((iVar21 != -1) && (iVar21 != iVar13)) {
      for (FVar14.Data = local_68.Data; FVar14.Data != local_68.Data + (longlong)(int)local_60 * 4;
          FVar14.Data = FVar14.Data + 4) {
        uVar9 = uVar10;
        local_78 = uVar11;
        uVar15 = local_70;
        if (*(int *)FVar14.Data == iVar21) goto LAB_143590311;
      }
    }
    uVar16 = (int)(uVar16 + 1) % iVar7;
    uVar9 = uVar11;
    local_78 = uVar10;
    uVar15 = uVar11;
  } while (uVar16 != uVar10);
  goto LAB_143590311;
}

// FindIndex @ 1435911d0

int __cdecl
UE::Geometry::FMeshBoundaryLoops::FindIndex
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar6 = (ulonglong)param_2;
  iVar4 = param_1->ArrayNum;
  if (param_2 < iVar4) {
    lVar7 = uVar6 * 4;
    do {
      uVar5 = (uint)uVar6;
      uVar3 = 0;
      if ((int)uVar5 < iVar4) {
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
      if (*(int *)((param_1->AllocatorInstance).Data + lVar7) == param_3) {
        return uVar5;
      }
      iVar4 = param_1->ArrayNum;
      uVar6 = (ulonglong)(uVar5 + 1);
      lVar7 = lVar7 + 4;
    } while ((int)(uVar5 + 1) < iVar4);
  }
  return -1;
}

// FindLeftTurnEdge @ 143591970

int __thiscall
UE::Geometry::FMeshBoundaryLoops::FindLeftTurnEdge
          (FMeshBoundaryLoops *this,int param_1,int param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,int param_4,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_5)

{
  double *pdVar1;
  ulonglong uVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  double dVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int local_res8;
  uint local_resc;
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_100;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  TVector<double> local_88 [3];
  
  GetVertexNormal(this,local_88,param_2);
  dVar6 = __real_7fefffffffffffff;
  uVar18 = SUB84(__real_7fefffffffffffff,0);
  uVar19 = (uint)((ulonglong)__real_7fefffffffffffff >> 0x20);
  uVar13 = 0xffffffff;
  uVar2 = *(ulonglong *)
           (*(longlong *)
             ((this->Mesh->Edges).Blocks.AllocatorInstance.Data +
             (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 0x10);
  pFVar3 = (this->Mesh->Vertices).Blocks.AllocatorInstance.Data;
  if ((int)uVar2 == param_2) {
    uVar2 = uVar2 >> 0x20;
  }
  uVar10 = (ulonglong)(param_2 & 0x1ff);
  uVar12 = 0;
  lVar14 = *(longlong *)(pFVar3 + (ulonglong)((uint)param_2 >> 9) * 8);
  pdVar1 = (double *)(lVar14 + uVar10 * 0x18);
  local_e8 = *pdVar1;
  dStack_e0 = pdVar1[1];
  local_d8 = *(double *)(lVar14 + 0x10 + uVar10 * 0x18);
  uVar11 = (ulonglong)((uint)uVar2 & 0x1ff);
  lVar14 = *(longlong *)(pFVar3 + ((uVar2 & 0xffffffff) >> 9) * 8);
  pdVar1 = (double *)(lVar14 + uVar11 * 0x18);
  local_d0 = *pdVar1;
  dStack_c8 = pdVar1[1];
  local_c0 = *(double *)(lVar14 + 0x10 + uVar11 * 0x18);
  local_100._s_0.X = local_e8 - local_d0;
  local_100._s_0.Z = local_d8 - local_c0;
  local_100._s_0.Y = dStack_e0 - dStack_c8;
  if (0 < param_4) {
    lVar14 = 0;
    uVar20 = (uint)__xmm_80000000000000008000000000000000;
    uVar2 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
    do {
      uVar8 = 0;
      if ((int)uVar12 < param_3->ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        iVar9 = (*pcVar5)();
        return iVar9;
      }
      uVar8 = *(uint *)((param_3->AllocatorInstance).Data + lVar14);
      uVar15 = 0;
      if ((int)uVar8 < param_5->ArrayNum) {
        uVar15 = ~uVar8 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        iVar9 = (*pcVar5)();
        return iVar9;
      }
      if (((param_5->AllocatorInstance).Data[(int)uVar8] != (FScriptContainerElement)0x1) &&
         (FDynamicMesh3::GetOrientedBoundaryEdgeV(this->Mesh,(int)&local_res8),
         local_res8 == param_2)) {
        pFVar3 = (this->Mesh->Vertices).Blocks.AllocatorInstance.Data;
        lVar4 = *(longlong *)(pFVar3 + (ulonglong)(local_resc >> 9) * 8);
        pdVar1 = (double *)(lVar4 + (ulonglong)(local_resc & 0x1ff) * 0x18);
        local_b8 = *pdVar1;
        dStack_b0 = pdVar1[1];
        local_a8 = *(double *)(lVar4 + 0x10 + (ulonglong)(local_resc & 0x1ff) * 0x18);
        lVar4 = *(longlong *)(pFVar3 + (ulonglong)((uint)param_2 >> 9) * 8);
        pdVar1 = (double *)(lVar4 + uVar10 * 0x18);
        local_a0 = *pdVar1;
        dStack_98 = pdVar1[1];
        local_90 = *(double *)(lVar4 + 0x10 + uVar10 * 0x18);
        local_118._s_0.X = local_b8 - local_a0;
        local_118._s_0.Z = local_a8 - local_90;
        local_118._s_0.Y = dStack_b0 - dStack_98;
        dVar16 = VectorUtil::PlaneAngleSignedD<double>
                           ((TVector<double> *)&local_100._s_0,(TVector<double> *)&local_118._s_0,
                            local_88);
        uVar15 = SUB84(dVar16,0) ^ uVar20;
        uVar17 = (uint)((ulonglong)dVar16 >> 0x20) ^ (uint)uVar2;
        if (((double)CONCAT44(uVar19,uVar18) == dVar6) ||
           ((double)CONCAT44(uVar17,uVar15) < (double)CONCAT44(uVar19,uVar18))) {
          uVar18 = uVar15;
          uVar19 = uVar17;
          uVar13 = uVar8;
        }
      }
      uVar12 = uVar12 + 1;
      lVar14 = lVar14 + 4;
    } while ((int)uVar12 < param_4);
  }
  return uVar13;
}

// FindLoopContainingEdge @ 143592070

int __thiscall
UE::Geometry::FMeshBoundaryLoops::FindLoopContainingEdge(FMeshBoundaryLoops *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  lVar11 = (longlong)(this->Loops).ArrayNum;
  uVar8 = 0;
  if (0 < lVar11) {
    lVar10 = 0;
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (this->Loops).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      pFVar2 = (this->Loops).AllocatorInstance.Data;
      piVar7 = *(int **)(pFVar2 + lVar9 + 0x18);
      piVar1 = piVar7 + *(int *)(pFVar2 + lVar9 + 0x20);
      for (; piVar7 != piVar1; piVar7 = piVar7 + 1) {
        if (*piVar7 == param_1) {
          return uVar8;
        }
      }
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 1;
      lVar9 = lVar9 + 0x40;
    } while (lVar10 < lVar11);
  }
  return -1;
}

// FindLoopContainingVertex @ 143592150

int __thiscall
UE::Geometry::FMeshBoundaryLoops::FindLoopContainingVertex(FMeshBoundaryLoops *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  lVar11 = (longlong)(this->Loops).ArrayNum;
  uVar8 = 0;
  if (0 < lVar11) {
    lVar10 = 0;
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (this->Loops).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      pFVar2 = (this->Loops).AllocatorInstance.Data;
      piVar7 = *(int **)(pFVar2 + lVar9 + 8);
      piVar1 = piVar7 + *(int *)(pFVar2 + lVar9 + 0x10);
      for (; piVar7 != piVar1; piVar7 = piVar7 + 1) {
        if (*piVar7 == param_1) {
          return uVar8;
        }
      }
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 1;
      lVar9 = lVar9 + 0x40;
    } while (lVar10 < lVar11);
  }
  return -1;
}

// FindLoopEdgesHint @ 143592230

int __thiscall
UE::Geometry::FMeshBoundaryLoops::FindLoopEdgesHint
          (FMeshBoundaryLoops *this,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1)

{
  uint *puVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  ForElementType<FSetElementId> FVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ForElementType<FSetElementId> FVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  undefined1 local_res18 [8];
  uint local_res20;
  longlong local_48;
  longlong local_40;
  
  local_40 = (longlong)(this->Loops).ArrayNum;
  iVar9 = 0;
  uVar14 = 0;
  local_res20 = 0xffffffff;
  if (local_40 < 1) {
    return -1;
  }
  local_48 = 0;
  do {
    uVar8 = 0;
    if ((int)uVar14 < (this->Loops).ArrayNum) {
      uVar8 = ~uVar14 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      iVar9 = (*pcVar5)();
      return iVar9;
    }
    pFVar3 = (this->Loops).AllocatorInstance.Data;
    puVar12 = *(uint **)(pFVar3 + local_48 + 0x18);
    iVar2 = *(int *)(pFVar3 + local_48 + 0x20);
    puVar1 = puVar12 + iVar2;
    iVar6 = 0;
    while( true ) {
      iVar13 = iVar6;
      if (*(int *)(pFVar3 + local_48 + 0x20) != iVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (puVar12 == puVar1) break;
      if (*(int *)&(param_1->Elements).field_0x8 != *(int *)&(param_1->Elements).field_0x34) {
        FVar4 = (param_1->Hash).SecondaryData;
        FVar11 = (ForElementType<FSetElementId>)&param_1->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar11 = FVar4;
        }
        iVar10 = *(int *)((longlong)FVar11 + (ulonglong)(param_1->HashSize - 1U & *puVar12) * 4);
        if (iVar10 != -1) {
          do {
            if (*(uint *)(*(longlong *)&param_1->Elements + (longlong)iVar10 * 0xc) == *puVar12)
            goto LAB_14359235c;
            iVar10 = *(int *)(*(longlong *)&param_1->Elements + 4 + (longlong)iVar10 * 0xc);
          } while (iVar10 != -1);
        }
      }
      iVar10 = -1;
LAB_14359235c:
      puVar12 = puVar12 + 1;
      iVar6 = iVar13 + 1;
      if (iVar10 == -1) {
        iVar6 = iVar13;
      }
    }
    uVar8 = uVar14;
    if (iVar13 <= iVar9) {
      iVar13 = iVar9;
      uVar8 = local_res20;
    }
    local_res20 = uVar8;
    iVar9 = iVar13;
    local_48 = local_48 + 0x40;
    uVar14 = uVar14 + 1;
    local_40 = local_40 + -1;
    if (local_40 == 0) {
      return local_res20;
    }
  } while( true );
}

// FindLoopTrianglesHint @ 1435923f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
UE::Geometry::FMeshBoundaryLoops::FindLoopTrianglesHint
          (FMeshBoundaryLoops *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  uint *puVar1;
  FDynamicMesh3 *pFVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  byte bVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  ForElementType<unsigned_int> FVar10;
  longlong lVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  ulonglong uVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStackY_148 [32];
  undefined1 local_118 [4];
  uint local_114;
  int local_110;
  uint uStack_10c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_108;
  undefined4 local_100;
  int iStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  FScriptContainerElement *local_e8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  longlong *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_c0;
  FSparseArrayAllocationInfo local_a0;
  undefined1 local_88 [32];
  ForElementType<unsigned_int> local_68;
  int local_60;
  uint local_5c;
  int local_58;
  int local_54;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pFVar16 = (param_1->AllocatorInstance).Data;
  local_114 = param_1->ArrayNum;
  uVar7 = (ulonglong)(int)local_114;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (ForElementType<unsigned_int>)0x0;
  pFVar13 = pFVar16 + uVar7 * 4;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = -1;
  local_54 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  local_e8 = pFVar13;
  local_e0 = param_1;
  do {
    if (local_e0->ArrayNum != (int)uVar7) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_118);
    }
    if (pFVar16 == pFVar13) {
      iVar3 = FindLoopEdgesHint(this,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                                     local_88);
      local_40 = 0;
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
      }
      bVar18 = local_88._12_4_ != 0;
      local_88._8_8_ = (ulonglong)(uint)local_88._12_4_ << 0x20;
      if (bVar18) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
      }
      local_58 = -1;
      local_54 = 0;
      local_60 = 0;
      if (0x80 < local_5c) {
        local_5c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
      }
      if (local_68 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_68);
      }
      if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_88._0_8_);
      }
      return iVar3;
    }
    uVar14 = *(uint *)pFVar16;
    pFVar2 = this->Mesh;
    if ((-1 < (int)uVar14) &&
       ((int)uVar14 <
        (int)((pFVar2->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (pFVar2->TriangleRefCounts).RefCounts.CurBlockUsed))) {
      uVar7 = (ulonglong)(uVar14 & 0x1ff);
      lVar11 = (ulonglong)(uVar14 >> 9) * 8;
      if ((ushort)(*(short *)(*(longlong *)
                               ((pFVar2->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                               + lVar11) + uVar7 * 2) - 1U) < 0xfffe) {
        lVar17 = 0;
        lVar11 = *(longlong *)((pFVar2->TriangleEdges).Blocks.AllocatorInstance.Data + lVar11);
        local_d8 = *(undefined8 *)(lVar11 + uVar7 * 0xc);
        local_d0 = *(undefined4 *)(lVar11 + 8 + uVar7 * 0xc);
        do {
          uVar14 = *(uint *)((longlong)&local_d8 + lVar17 * 4);
          if (*(int *)(*(longlong *)
                        ((this->Mesh->Edges).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar14 >> 9) * 8) + 0xc + (ulonglong)(uVar14 & 0x1ff) * 0x10) ==
              -1) {
            if (local_54 == 0) {
              iVar3 = Core::Private::
                      ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0xc,4,1,(ForAnyElementType *)local_88,(int *)(local_88 + 8),
                                 (int *)(local_88 + 0xc));
              iVar4 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                                ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),1);
              FVar10 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
              if (local_68 != (ForElementType<unsigned_int>)0x0) {
                FVar10 = local_68;
              }
              bVar6 = (byte)iVar4 & 0x1f;
              if (iVar4 < 0) {
                iVar4 = iVar4 + 0x1f;
                bVar6 = bVar6 - 0x20;
              }
              puVar1 = (uint *)((longlong)FVar10 + (longlong)(iVar4 >> 5) * 4);
              *puVar1 = *puVar1 & ~(1 << (bVar6 & 0x1f));
              iVar4 = local_58;
            }
            else {
              iVar4 = *(int *)(local_88._0_8_ + (longlong)local_58 * 0xc + 4);
              local_54 = local_54 + -1;
              iVar3 = local_58;
              if (local_54 != 0) {
                *(undefined4 *)(local_88._0_8_ + (longlong)iVar4 * 0xc) = 0xffffffff;
              }
            }
            local_58 = iVar4;
            TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             *)local_88,&local_a0,iVar3);
            if (local_a0.Pointer != (uint *)0x0) {
              *(uint *)local_a0.Pointer = uVar14;
              *(uint *)((longlong)local_a0.Pointer + 4) = 0xffffffff;
            }
            uVar14 = *(uint *)local_a0.Pointer;
            if ((local_88._8_4_ - local_54 != 1) && (local_88._8_4_ != local_54)) {
              FVar8.Data = local_50;
              if (local_48.Data != (FScriptContainerElement *)0x0) {
                FVar8.Data = local_48.Data;
              }
              for (iVar3 = *(int *)(FVar8.Data + (ulonglong)(local_40 - 1 & uVar14) * 4);
                  iVar3 != -1; iVar3 = *(int *)(local_88._0_8_ + (longlong)iVar3 * 0xc + 4)) {
                if (*(uint *)(local_88._0_8_ + (longlong)iVar3 * 0xc) == uVar14) {
                  if (iVar3 != -1) {
                    *(uint *)(local_88._0_8_ + (longlong)iVar3 * 0xc) = uVar14;
                    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::RemoveAtUninitialized
                              ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                *)local_88,local_a0.Index,1);
                    goto LAB_1435928ed;
                  }
                  break;
                }
              }
            }
            uVar9 = local_88._8_4_ - local_54;
            uVar12 = 1;
            if (3 < uVar9) {
              uVar7 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
              lVar11 = 0x3f;
              if (uVar7 != 0) {
                for (; uVar7 >> lVar11 == 0; lVar11 = lVar11 + -1) {
                }
              }
              uVar12 = 1 << ((byte)lVar11 & 0x1f);
            }
            if (((int)uVar9 < 1) || ((int)uVar12 <= (int)local_40)) {
              uVar14 = local_40 - 1 & uVar14;
              *(uint *)((longlong)local_a0.Pointer + 8) = uVar14;
              FVar8.Data = local_50;
              if (local_48.Data != (FScriptContainerElement *)0x0) {
                FVar8.Data = local_48.Data;
              }
              uVar7 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar14;
              *(uint *)((longlong)local_a0.Pointer + 4) = *(uint *)(FVar8.Data + uVar7 * 4);
              *(int *)(FVar8.Data + uVar7 * 4) = local_a0.Index;
            }
            else {
              local_40 = uVar12;
              if (local_48.Data != (FScriptContainerElement *)0x0) {
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_48,0,0,4);
              }
              if (uVar12 != 0) {
                uVar14 = uVar12;
                if (uVar12 < 2) {
                  if (local_48.Data != (FScriptContainerElement *)0x0) {
                    uVar14 = 0;
                    goto LAB_14359271c;
                  }
                }
                else {
LAB_14359271c:
                  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                            (&local_48,0,uVar14,4);
                }
                if (0 < (int)uVar12) {
                  uVar15 = (ulonglong)uVar12;
                  uVar7 = 0;
                  do {
                    FVar8.Data = local_50;
                    if (local_48.Data != (FScriptContainerElement *)0x0) {
                      FVar8.Data = local_48.Data;
                    }
                    uVar5 = uVar7 & (longlong)(int)uVar12 - 1U;
                    uVar7 = uVar7 + 1;
                    *(undefined4 *)(FVar8.Data + uVar5 * 4) = 0xffffffff;
                    uVar15 = uVar15 - 1;
                  } while (uVar15 != 0);
                }
              }
              if (local_40 != 0) {
                pTStack_108 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
                uStack_10c = 1;
                local_110 = 0;
                iStack_fc = 0;
                iStack_f8 = 0;
                if (local_60 != 0) {
                  FVar10 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
                  if (local_68 != (ForElementType<unsigned_int>)0x0) {
                    FVar10 = local_68;
                  }
                  uVar14 = *(uint *)FVar10;
                  local_110 = 0;
                  while (uVar14 == 0) {
                    iStack_f8 = iStack_f8 + 0x20;
                    lVar11 = (longlong)local_110;
                    local_110 = local_110 + 1;
                    if ((int)(local_60 + -1 + (local_60 + -1 >> 0x1f & 0x1fU)) >> 5 < local_110)
                    goto LAB_14359281e;
                    uVar14 = ((uint *)((longlong)FVar10 + 4))[lVar11];
                  }
                  uStack_10c = -uVar14 & uVar14;
                  uVar7 = (ulonglong)uStack_10c * 2 + 1;
                  lVar11 = 0x3f;
                  if (uVar7 != 0) {
                    for (; uVar7 >> lVar11 == 0; lVar11 = lVar11 + -1) {
                    }
                  }
                  iStack_fc = (int)lVar11 + -1 + iStack_f8;
                  if (local_60 < iStack_fc) {
LAB_14359281e:
                    iStack_fc = local_60;
                  }
                }
                local_100 = 0xffffffff;
                local_c8 = (longlong *)local_88;
                local_c0._padding_ = CONCAT44(uStack_10c,local_110);
                local_c0.CurrentBitIndex = iStack_fc;
                local_c0.UnvisitedBitMask = 0xffffffff;
                local_c0._28_4_ = uStack_f4;
                local_c0.BaseBitIndex = iStack_f8;
                local_c0.Array = pTStack_108;
                iVar3 = iStack_fc;
                if (iStack_fc < local_60) {
                  do {
                    uVar14 = local_40 - 1 & *(uint *)(*local_c8 + (longlong)iVar3 * 0xc);
                    lVar11 = *local_c8 + (longlong)iVar3 * 0xc;
                    *(uint *)(lVar11 + 8) = uVar14;
                    FVar8.Data = local_50;
                    if (local_48.Data != (FScriptContainerElement *)0x0) {
                      FVar8.Data = local_48.Data;
                    }
                    uVar7 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar14;
                    *(undefined4 *)(lVar11 + 4) = *(undefined4 *)(FVar8.Data + uVar7 * 4);
                    *(int *)(FVar8.Data + uVar7 * 4) = iVar3;
                    local_c0.UnvisitedBitMask =
                         local_c0.UnvisitedBitMask & ~local_c0._padding_._4_4_;
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_c0);
                    iVar3 = local_c0.CurrentBitIndex;
                  } while (local_c0.CurrentBitIndex < (local_c0.Array)->NumBits);
                }
              }
            }
          }
LAB_1435928ed:
          lVar17 = lVar17 + 1;
          pFVar13 = local_e8;
        } while (lVar17 < 3);
      }
    }
    pFVar16 = pFVar16 + 4;
    uVar7 = (ulonglong)local_114;
  } while( true );
}

// FindSpanContainingEdge @ 1435946b0

int __thiscall
UE::Geometry::FMeshBoundaryLoops::FindSpanContainingEdge(FMeshBoundaryLoops *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  lVar11 = (longlong)(this->Spans).ArrayNum;
  uVar8 = 0;
  if (0 < lVar11) {
    lVar10 = 0;
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (this->Spans).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      pFVar2 = (this->Spans).AllocatorInstance.Data;
      piVar7 = *(int **)(pFVar2 + lVar9 + 0x18);
      piVar1 = piVar7 + *(int *)(pFVar2 + lVar9 + 0x20);
      for (; piVar7 != piVar1; piVar7 = piVar7 + 1) {
        if (*piVar7 == param_1) {
          return uVar8;
        }
      }
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 1;
      lVar9 = lVar9 + 0x40;
    } while (lVar10 < lVar11);
  }
  return -1;
}

// FindVertexInLoop @ 143594790

FIndex2i __thiscall
UE::Geometry::FMeshBoundaryLoops::FindVertexInLoop(FMeshBoundaryLoops *this,int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FIndex2i FVar6;
  longlong lVar7;
  undefined4 in_register_00000014;
  uint uVar8;
  longlong lVar9;
  int in_R8D;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  
  FVar6.field0_0x0._s_0.B = in_register_00000014;
  FVar6.field0_0x0._s_0.A = param_1;
  uVar12 = 0;
  lVar7 = (longlong)(this->Loops).ArrayNum;
  if (0 < lVar7) {
    lVar10 = 0;
    lVar11 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar12 < (this->Loops).ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        FVar6.field0_0x0 = (FIndex2i_u_0)(*pcVar3)();
        return (FIndex2i)FVar6.field0_0x0;
      }
      pFVar2 = (this->Loops).AllocatorInstance.Data;
      lVar9 = 0;
      uVar8 = 0;
      iVar1 = *(int *)(pFVar2 + lVar11 + 0x10);
      if (0 < (longlong)iVar1) {
        do {
          uVar5 = 0;
          if ((int)uVar8 < *(int *)(pFVar2 + lVar11 + 0x10)) {
            uVar5 = ~uVar8 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            FVar6.field0_0x0 = (FIndex2i_u_0)(*pcVar3)();
            return (FIndex2i)FVar6.field0_0x0;
          }
          if (*(int *)(*(longlong *)(pFVar2 + lVar11 + 8) + lVar9 * 4) == in_R8D) {
            if (-1 < (int)uVar8) {
              *(uint *)FVar6.field0_0x0 = uVar12;
              *(uint *)((longlong)FVar6.field0_0x0 + 4) = uVar8;
              return (FIndex2i)FVar6.field0_0x0;
            }
            break;
          }
          uVar8 = uVar8 + 1;
          lVar9 = lVar9 + 1;
        } while (lVar9 < iVar1);
      }
      uVar12 = uVar12 + 1;
      lVar10 = lVar10 + 1;
      lVar11 = lVar11 + 0x40;
    } while (lVar10 < lVar7);
  }
  *(undefined8 *)FVar6.field0_0x0 = 0xffffffffffffffff;
  return (FIndex2i)FVar6.field0_0x0;
}

// GetLongestLoopIndex @ 1435b1270

int __thiscall UE::Geometry::FMeshBoundaryLoops::GetLongestLoopIndex(FMeshBoundaryLoops *this)

{
  double *pdVar1;
  FDynamicMesh3 *pFVar2;
  FScriptContainerElement *pFVar3;
  FDynamicMesh3 *pFVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  double dVar24;
  uint local_res8;
  longlong local_a0;
  
  uVar18 = 0;
  uVar11 = 0xffffffff;
  local_res8 = 0xffffffff;
  dVar8 = 0.0;
  if (0 < (this->Loops).ArrayNum) {
    lVar17 = 0;
    do {
      uVar19 = ~uVar18 >> 0x1f;
      uVar11 = 0;
      if ((int)uVar18 < (this->Loops).ArrayNum) {
        uVar11 = uVar19;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        iVar12 = (*pcVar6)();
        return iVar12;
      }
      dVar7 = 0.0;
      iVar12 = *(int *)((this->Loops).AllocatorInstance.Data + lVar17 + 0x10);
      dVar22 = 0.0;
      if (0 < iVar12) {
        local_a0 = 0;
        uVar11 = 0;
        do {
          pFVar2 = this->Mesh;
          uVar13 = 0;
          if ((int)uVar18 < (this->Loops).ArrayNum) {
            uVar13 = uVar19;
          }
          if ((uVar13 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            iVar12 = (*pcVar6)();
            return iVar12;
          }
          pFVar3 = (this->Loops).AllocatorInstance.Data;
          uVar14 = uVar11 + 1;
          uVar16 = (int)uVar14 % iVar12;
          uVar13 = 0;
          if ((int)uVar16 < *(int *)(pFVar3 + lVar17 + 0x10)) {
            uVar13 = ~uVar16 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            iVar12 = (*pcVar6)();
            return iVar12;
          }
          uVar13 = *(uint *)(*(longlong *)(pFVar3 + lVar17 + 8) + (longlong)(int)uVar16 * 4);
          pFVar4 = this->Mesh;
          uVar15 = (ulonglong)(uVar13 & 0x1ff);
          lVar5 = *(longlong *)
                   ((pFVar2->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar13 >> 9) * 8)
          ;
          pdVar1 = (double *)(lVar5 + uVar15 * 0x18);
          dVar23 = *pdVar1;
          dVar24 = pdVar1[1];
          dVar22 = *(double *)(lVar5 + 0x10 + uVar15 * 0x18);
          uVar13 = 0;
          if ((int)uVar18 < (this->Loops).ArrayNum) {
            uVar13 = uVar19;
          }
          if ((uVar13 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            iVar12 = (*pcVar6)();
            return iVar12;
          }
          pFVar3 = (this->Loops).AllocatorInstance.Data;
          uVar13 = 0;
          if ((int)uVar11 < *(int *)(pFVar3 + lVar17 + 0x10)) {
            uVar13 = ~uVar11 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            iVar12 = (*pcVar6)();
            return iVar12;
          }
          uVar11 = *(uint *)(local_a0 + *(longlong *)(pFVar3 + lVar17 + 8));
          local_a0 = local_a0 + 4;
          uVar15 = (ulonglong)(uVar11 & 0x1ff);
          lVar5 = *(longlong *)
                   ((pFVar4->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar11 >> 9) * 8)
          ;
          dVar22 = dVar22 - *(double *)(lVar5 + 0x10 + uVar15 * 0x18);
          pdVar1 = (double *)(lVar5 + uVar15 * 0x18);
          dVar9 = pdVar1[1];
          dVar23 = dVar23 - *pdVar1;
          auVar20._8_8_ = dVar9;
          auVar20._0_8_ = dVar9;
          dVar24 = dVar24 - dVar9;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = dVar24 * dVar24 + dVar23 * dVar23 + dVar22 * dVar22;
          auVar21 = sqrtpd(auVar20,auVar21);
          dVar7 = dVar7 + auVar21._0_8_;
          uVar11 = uVar14;
          dVar22 = dVar7;
        } while ((int)uVar14 < iVar12);
      }
      uVar11 = uVar18;
      if (dVar22 <= dVar8) {
        uVar11 = local_res8;
        dVar22 = dVar8;
      }
      dVar8 = dVar22;
      uVar18 = uVar18 + 1;
      lVar17 = lVar17 + 0x40;
      local_res8 = uVar11;
    } while ((int)uVar18 < (this->Loops).ArrayNum);
  }
  return uVar11;
}

// GetMaxVerticesLoopIndex @ 1435b1690

int __thiscall UE::Geometry::FMeshBoundaryLoops::GetMaxVerticesLoopIndex(FMeshBoundaryLoops *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  
  uVar7 = 0;
  uVar8 = 1;
  if (1 < (this->Loops).ArrayNum) {
    lVar9 = 0;
    lVar10 = 1;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (this->Loops).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      pFVar1 = (this->Loops).AllocatorInstance.Data;
      uVar6 = 0;
      if ((int)uVar8 < (this->Loops).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      uVar6 = uVar8;
      lVar3 = lVar10;
      if (*(int *)((this->Loops).AllocatorInstance.Data + lVar10 * 0x40 + 0x10) <=
          *(int *)(pFVar1 + lVar9 * 0x40 + 0x10)) {
        uVar6 = uVar7;
        lVar3 = lVar9;
      }
      lVar9 = lVar3;
      uVar7 = uVar6;
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 1;
    } while ((int)uVar8 < (this->Loops).ArrayNum);
  }
  return uVar7;
}

// GetVertexNormal @ 1435b5750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector<double> * __thiscall
UE::Geometry::FMeshBoundaryLoops::GetVertexNormal
          (FMeshBoundaryLoops *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  TVector<double> *pTVar5;
  longlong *plVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_208 [32];
  TVector<double> local_1e8;
  undefined1 local_1c8 [48];
  ValueIterator local_198;
  ValueIterator local_170;
  undefined1 local_148 [144];
  undefined1 local_b8 [144];
  ulonglong local_28;
  
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_208;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FDynamicMesh3::VtxTrianglesItr
            (this->Mesh,
             (TPairExpandEnumerable<UE::Geometry::FSmallListSet::ValueIterator> *)local_1c8,param_1)
  ;
  TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
  TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
            ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_148,&local_198
             ,&local_170,(TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_1c8);
  TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
  TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
            ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_b8,&local_170,
             &local_170,(TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_1c8);
  while ((((local_148._0_8_ != local_b8._0_8_ || (local_148._8_4_ != local_b8._8_4_)) ||
          (local_148._24_4_ != local_b8._24_4_)) || (local_148._28_4_ != local_b8._28_4_))) {
    pTVar5 = FDynamicMesh3::GetTriNormal(this->Mesh,&local_1e8,local_148._88_4_);
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (__return_storage_ptr__->field0_0x0)._s_0.X + (pTVar5->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         (pTVar5->field0_0x0)._s_0.Y + (__return_storage_ptr__->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         (pTVar5->field0_0x0)._s_0.Z + (__return_storage_ptr__->field0_0x0)._s_0.Z;
    TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::goto_next
              ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_148);
  }
  if (local_b8._96_8_ != 0) {
    plVar6 = (longlong *)(local_b8 + 0x70);
    if ((longlong *)local_b8._136_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_b8._136_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (local_148._96_8_ != 0) {
    plVar6 = (longlong *)(local_148 + 0x70);
    if ((longlong *)local_148._136_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_148._136_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (local_1c8._0_8_ != 0) {
    plVar6 = (longlong *)(local_1c8 + 0x10);
    if ((longlong *)local_1c8._40_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_1c8._40_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  dVar1 = (__return_storage_ptr__->field0_0x0)._s_0.X;
  dVar8 = (__return_storage_ptr__->field0_0x0)._s_0.Y;
  dVar2 = (__return_storage_ptr__->field0_0x0)._s_0.Z;
  auVar9._0_8_ = dVar8 * dVar8 + dVar1 * dVar1 + dVar2 * dVar2;
  auVar9._8_8_ = 0;
  dVar7 = 0.0;
  auVar9 = sqrtpd(auVar9,auVar9);
  if (auVar9._0_8_ <= 0.0) {
    dVar8 = 0.0;
    dVar3 = 0.0;
  }
  else {
    dVar3 = __real_3ff0000000000000 / auVar9._0_8_;
    dVar7 = dVar3 * dVar2;
    dVar8 = dVar3 * dVar8;
    dVar3 = dVar3 * dVar1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar8;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar7;
  return __return_storage_ptr__;
}

// IsSimpleBowtieLoop @ 1435ba580

bool __cdecl
UE::Geometry::FMeshBoundaryLoops::IsSimpleBowtieLoop
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,int param_3,int *param_4,int *param_5)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FindIndex(param_1,0,param_3);
  *param_4 = iVar2;
  iVar2 = FindIndex(param_1,iVar2 + 1,param_3);
  *param_5 = iVar2;
  bVar1 = IsSimplePath(param_1,param_2,param_3,*param_4,iVar2);
  if (!bVar1) {
    bVar1 = IsSimplePath(param_1,param_2,param_3,*param_5,*param_4);
    if (!bVar1) {
      return false;
    }
    iVar2 = *param_4;
    *param_4 = *param_5;
    *param_5 = iVar2;
  }
  return true;
}

// IsSimplePath @ 1435ba630

bool __cdecl
UE::Geometry::FMeshBoundaryLoops::IsSimplePath
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,int param_3,int param_4,int param_5)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  
  uVar4 = (ulonglong)(uint)param_4;
  iVar2 = param_1->ArrayNum;
  while( true ) {
    if (param_4 == param_5) {
      return true;
    }
    uVar6 = (uint)uVar4;
    uVar9 = 0;
    if ((int)uVar6 < param_1->ArrayNum) {
      uVar9 = ~uVar6 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) break;
    iVar3 = *(int *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar6 * 4);
    if ((iVar3 != -1) && (iVar3 != param_3)) {
      pFVar10 = (param_2->AllocatorInstance).Data;
      pFVar1 = pFVar10 + (longlong)param_2->ArrayNum * 4;
      for (; pFVar10 != pFVar1; pFVar10 = pFVar10 + 4) {
        if (*(int *)pFVar10 == iVar3) {
          return false;
        }
      }
    }
    uVar4 = (longlong)(int)(uVar6 + 1) % (longlong)iVar2;
    param_4 = (int)uVar4;
  }
  pcVar5 = (code *)swi(3);
  uVar8 = (*pcVar5)();
  return (bool)uVar8;
}

