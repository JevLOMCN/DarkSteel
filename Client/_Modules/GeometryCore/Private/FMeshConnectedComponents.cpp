// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 31

// operator() @ 1435e96e0

void __thiscall
`UE::Geometry::FMeshConnectedComponents::FindVertComponent'::__l4::<lambda_1>::operator()
          (void *this,int param_1)

{
  int *piVar1;
  longlong *plVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint local_res10 [2];
  
  if (param_1 != -1) {
    plVar2 = *(longlong **)this;
    uVar7 = 0;
    if (param_1 < (int)plVar2[1]) {
      uVar7 = (uint)~param_1 >> 0x1f;
    }
    local_res10[0] = param_1;
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(char *)((longlong)param_1 + *plVar2) == '\0') {
      pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
      if (((pFVar3->Data <= (FScriptContainerElement *)local_res10) &&
          ((FScriptContainerElement *)local_res10 <
           pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 4)) &&
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
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(uint *)(pFVar3->Data + (longlong)iVar6 * 4) = local_res10[0];
      lVar8 = (longlong)(int)local_res10[0];
      plVar2 = *(longlong **)this;
      uVar7 = 0;
      if ((int)local_res10[0] < (int)plVar2[1]) {
        uVar7 = ~local_res10[0] >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined1 *)(lVar8 + *plVar2) = 1;
    }
  }
  return;
}

// operator() @ 1435e9870

void __thiscall
`UE::Geometry::FMeshConnectedComponents::FindVertComponent'::__l4::<lambda_1>::operator()
          (void *this,int param_1)

{
  int *piVar1;
  longlong *plVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint local_res10 [2];
  uint local_res18 [2];
  undefined4 local_res20 [2];
  
  if (param_1 != -1) {
    plVar2 = *(longlong **)((longlong)this + 8);
    uVar8 = 0;
    if (param_1 < (int)plVar2[1]) {
      uVar8 = (uint)~param_1 >> 0x1f;
    }
    local_res10[0] = param_1;
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(char *)((longlong)param_1 + *plVar2) == '\0') {
      local_res20[0] = **(undefined4 **)this;
      local_res18[0] = local_res10[0];
      cVar6 = (*(code *)**(undefined8 **)((longlong)this + 0x10))
                        ((*(undefined8 **)((longlong)this + 0x10))[1],local_res20,local_res18);
      if (cVar6 != '\0') {
        pFVar3 = *(ForAnyElementType **)((longlong)this + 0x18);
        if (((pFVar3->Data <= (FScriptContainerElement *)local_res10) &&
            ((FScriptContainerElement *)local_res10 <
             pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 4)) &&
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
        iVar7 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,pFVar3,piVar1);
        }
        *(int *)&pFVar3[1].Data = iVar7 + 1;
        *(uint *)(pFVar3->Data + (longlong)iVar7 * 4) = local_res10[0];
        lVar9 = (longlong)(int)local_res10[0];
        plVar2 = *(longlong **)((longlong)this + 8);
        uVar8 = 0;
        if ((int)local_res10[0] < (int)plVar2[1]) {
          uVar8 = ~local_res10[0] >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined1 *)(lVar9 + *plVar2) = 1;
      }
    }
  }
  return;
}

// operator() @ 1435e9a40

void __thiscall
`UE::Geometry::FMeshConnectedComponents::GrowToConnectedVertices'::__l4::<lambda_1>::operator()
          (void *this,int param_1)

{
  int *piVar1;
  longlong *plVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  longlong *plVar8;
  int local_res8 [2];
  int local_res10 [2];
  undefined4 local_res18 [2];
  int local_res20 [2];
  
  plVar2 = *(longlong **)this;
  if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
    plVar8 = (longlong *)plVar2[8];
    if ((longlong *)plVar2[8] == (longlong *)0x0) {
      plVar8 = plVar2 + 7;
    }
    iVar7 = *(int *)((longlong)plVar8 + (ulonglong)((int)plVar2[9] - 1U & param_1) * 4);
    if (iVar7 != -1) {
      do {
        if (*(int *)(*plVar2 + (longlong)iVar7 * 0xc) == param_1) {
          return;
        }
        iVar7 = *(int *)(*plVar2 + 4 + (longlong)iVar7 * 0xc);
      } while (iVar7 != -1);
    }
  }
  local_res18[0] = **(undefined4 **)((longlong)this + 0x10);
  local_res8[0] = param_1;
  local_res10[0] = param_1;
  cVar5 = (*(code *)**(undefined8 **)((longlong)this + 8))
                    ((*(undefined8 **)((longlong)this + 8))[1],local_res18,local_res8);
  if (cVar5 != '\0') {
    pFVar3 = (ForAnyElementType *)**(undefined8 **)((longlong)this + 0x18);
    if (((pFVar3->Data <= (FScriptContainerElement *)local_res10) &&
        ((FScriptContainerElement *)local_res10 <
         pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 4)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,pFVar3,piVar1);
    }
    *(int *)&pFVar3[1].Data = iVar7 + 1;
    *(int *)(pFVar3->Data + (longlong)iVar7 * 4) = local_res10[0];
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)this,local_res20,
               (bool *)local_res10);
  }
  return;
}

// operator() @ 1435e9ba0

void __thiscall
`UE::Geometry::FMeshConnectedComponents::GrowToConnectedEdges'::__l6::<lambda_1>::operator()
          (void *this,int param_1)

{
  int *piVar1;
  longlong *plVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  longlong *plVar8;
  int local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  
  local_res18[0] = **(int **)this;
  if (param_1 != local_res18[0]) {
    plVar2 = *(longlong **)((longlong)this + 8);
    if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
      plVar8 = (longlong *)plVar2[8];
      if ((longlong *)plVar2[8] == (longlong *)0x0) {
        plVar8 = plVar2 + 7;
      }
      iVar7 = *(int *)((longlong)plVar8 + (ulonglong)((int)plVar2[9] - 1U & param_1) * 4);
      if (iVar7 != -1) {
        do {
          if (*(int *)(*plVar2 + (longlong)iVar7 * 0xc) == param_1) {
            return;
          }
          iVar7 = *(int *)(*plVar2 + 4 + (longlong)iVar7 * 0xc);
        } while (iVar7 != -1);
      }
    }
    local_res8[0] = param_1;
    local_res10[0] = param_1;
    cVar5 = (*(code *)**(undefined8 **)((longlong)this + 0x10))
                      ((*(undefined8 **)((longlong)this + 0x10))[1],local_res18,local_res8);
    if (cVar5 != '\0') {
      pFVar3 = (ForAnyElementType *)**(undefined8 **)((longlong)this + 0x18);
      if (((pFVar3->Data <= (FScriptContainerElement *)local_res10) &&
          ((FScriptContainerElement *)local_res10 <
           pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 4)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar7 + 1;
      *(int *)(pFVar3->Data + (longlong)iVar7 * 4) = local_res10[0];
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)((longlong)this + 8),
                 local_res20,(bool *)local_res10);
    }
  }
  return;
}

// FindConnectedTriangles @ 1435fc010

void __thiscall
UE::Geometry::FMeshConnectedComponents::FindConnectedTriangles
          (FMeshConnectedComponents *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TFunction<bool___cdecl(int,int)> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  FDynamicMesh3 *pFVar4;
  code *pcVar5;
  FInterval1i FVar6;
  TFunction<bool___cdecl(int,int)> *pTVar7;
  bool bVar8;
  uint uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  bool bVar15;
  uchar local_97 [7];
  uint local_90;
  uint uStack_8c;
  FMeshConnectedComponents *local_88;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_80;
  TFunction<bool___cdecl(int,int)> *local_70;
  TFunction<bool___cdecl(int,int)> local_68;
  
  bVar15 = -1 < CpuChannel->Enabled;
  local_88 = this;
  local_70 = param_2;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId72,
               "MeshConnectedComponents_FindConnectedTriangles_TriangleROI",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Selections\\MeshConnectedComponents.cpp"
               ,0x48);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId72);
  }
  local_97[0] = 0xff;
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = 0;
  local_80.ArrayMax = 0;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::Init
            (&local_80,local_97,
             (this->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (this->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed);
  pFVar14 = (param_1->AllocatorInstance).Data;
  uVar13 = 0x7fffffff;
  iVar2 = param_1->ArrayNum;
  local_90 = 0x7fffffff;
  uStack_8c = 0x80000001;
  pFVar1 = pFVar14 + (longlong)iVar2 * 4;
  uVar12 = 0x80000001;
  do {
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        local_97[1] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_97 + 1);
      }
      pTVar7 = local_70;
      if (pFVar14 == pFVar1) {
        local_68._40_8_ = 0;
        local_68._0_8_ = *(undefined8 *)local_70;
        uStack_8c = uVar12;
        if (local_68._0_8_ != 0) {
          puVar10 = (undefined8 *)&local_70->field_0x10;
          if (*(undefined8 **)&local_70->field_0x28 != (undefined8 *)0x0) {
            puVar10 = *(undefined8 **)&local_70->field_0x28;
          }
          (**(code **)*puVar10)(puVar10,&local_68.field_0x10);
        }
        FVar6.Max = uStack_8c;
        FVar6.Min = local_90;
        FindTriComponents(this,FVar6,&local_80,&local_68);
        if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.AllocatorInstance.Data);
        }
        if (bVar15) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (*(longlong *)pTVar7 != 0) {
          plVar11 = (longlong *)&pTVar7->field_0x10;
          if (*(longlong **)&pTVar7->field_0x28 != (longlong *)0x0) {
            plVar11 = *(longlong **)&pTVar7->field_0x28;
          }
          (**(code **)(*plVar11 + 0x10))();
        }
        return;
      }
      uVar3 = *(uint *)pFVar14;
      pFVar4 = this->Mesh;
      if (((-1 < (int)uVar3) &&
          ((int)uVar3 <
           (int)((pFVar4->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                (pFVar4->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
         (this = local_88,
         (ushort)(*(short *)(*(longlong *)
                              ((pFVar4->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                              (ulonglong)(uVar3 >> 9) * 8) + (ulonglong)(uVar3 & 0x1ff) * 2) - 1U) <
         0xfffe)) break;
LAB_1435fc1d4:
      pFVar14 = pFVar14 + 4;
    }
    uVar9 = 0;
    if ((int)uVar3 < local_80.ArrayNum) {
      uVar9 = ~uVar3 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_80.AllocatorInstance.Data[(int)uVar3] = (FScriptContainerElement)0x0;
    uVar9 = uVar3;
    if ((int)uVar13 <= (int)uVar3) {
      uVar9 = uVar13;
    }
    uVar13 = uVar9;
    this = local_88;
    local_90 = uVar13;
    if ((int)uVar3 <= (int)uVar12) goto LAB_1435fc1d4;
    pFVar14 = pFVar14 + 4;
    uVar12 = uVar3;
  } while( true );
}

// FindConnectedTriangles @ 1435fc290

void __thiscall
UE::Geometry::FMeshConnectedComponents::FindConnectedTriangles
          (FMeshConnectedComponents *this,TFunction<bool___cdecl(int,int)> *param_1)

{
  FDynamicMesh3 *pFVar1;
  code *pcVar2;
  FInterval1i FVar3;
  bool bVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  bool bVar13;
  uchar local_88 [8];
  uint local_80;
  uint uStack_7c;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_78;
  TFunction<bool___cdecl(int,int)> local_68;
  
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId26,"MeshConnectedComponents_FindConnectedTriangles",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Selections\\MeshConnectedComponents.cpp"
               ,0x1a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId26);
  }
  local_88[0] = 0xff;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  iVar10 = (this->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed +
           (this->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::Init(&local_78,local_88,iVar10);
  uVar9 = 0;
  uVar8 = 0x7fffffff;
  uVar12 = 0x80000001;
  local_80 = 0x7fffffff;
  uStack_7c = 0x80000001;
  uVar5 = uStack_7c;
  if (0 < iVar10) {
    lVar11 = 0;
    do {
      pFVar1 = this->Mesh;
      if (((-1 < (int)uVar9) &&
          ((int)uVar9 <
           (int)((pFVar1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                (pFVar1->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
         ((ushort)(*(short *)(*(longlong *)
                               ((pFVar1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                               + (ulonglong)(uVar9 >> 9) * 8) + (ulonglong)(uVar9 & 0x1ff) * 2) - 1U
                  ) < 0xfffe)) {
        uVar5 = 0;
        if ((int)uVar9 < local_78.ArrayNum) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_78.AllocatorInstance.Data[lVar11] = (FScriptContainerElement)0x0;
        uVar5 = uVar9;
        if ((int)uVar8 <= (int)uVar9) {
          uVar5 = uVar8;
        }
        uVar8 = uVar5;
        local_80 = uVar8;
        if ((int)uVar12 < (int)uVar9) {
          uVar12 = uVar9;
        }
      }
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 1;
      uVar5 = uVar12;
    } while (lVar11 < iVar10);
  }
  uStack_7c = uVar5;
  local_68._0_8_ = *(undefined8 *)param_1;
  local_68._40_8_ = 0;
  if (local_68._0_8_ != 0) {
    puVar6 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar6)(puVar6,&local_68.field_0x10);
  }
  FVar3.Max = uStack_7c;
  FVar3.Min = local_80;
  FindTriComponents(this,FVar3,&local_78,&local_68);
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (*(longlong *)param_1 != 0) {
    plVar7 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar7 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  return;
}

// FindConnectedTriangles @ 1435fc4c0

void __thiscall
UE::Geometry::FMeshConnectedComponents::FindConnectedTriangles
          (FMeshConnectedComponents *this,TFunctionRef<bool___cdecl(int)> *param_1,
          TFunction<bool___cdecl(int,int)> *param_2)

{
  FDynamicMesh3 *pFVar1;
  code *pcVar2;
  FInterval1i FVar3;
  TFunctionRef<bool___cdecl(int)> *pTVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  bool bVar17;
  uchar local_a8 [8];
  longlong local_a0;
  uint local_98;
  uint uStack_94;
  TFunctionRef<bool___cdecl(int)> *local_90;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_88;
  TFunction<bool___cdecl(int,int)> *local_78;
  TFunction<bool___cdecl(int,int)> local_68;
  
  bVar17 = -1 < CpuChannel->Enabled;
  local_90 = param_1;
  local_78 = param_2;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId49,"MeshConnectedComponents_FindConnectedTriangles_Filtered"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Selections\\MeshConnectedComponents.cpp"
               ,0x31);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId49);
  }
  uVar13 = 0;
  local_a8[0] = 0xff;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  iVar14 = (this->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed +
           (this->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::Init(&local_88,local_a8,iVar14);
  pTVar4 = local_90;
  lVar8 = (longlong)iVar14;
  uVar11 = 0x7fffffff;
  uVar16 = 0x80000001;
  local_98 = 0x7fffffff;
  uStack_94 = 0x80000001;
  uVar15 = uVar13;
  local_a0 = lVar8;
  if (0 < iVar14) {
    do {
      pFVar1 = this->Mesh;
      uVar12 = (uint)uVar13;
      if (((-1 < (int)uVar12) &&
          (lVar8 = local_a0,
          (int)uVar12 <
          (int)((pFVar1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (pFVar1->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
         ((ushort)(*(short *)(*(longlong *)
                               ((pFVar1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                               + (uVar13 >> 9) * 8) + (ulonglong)(uVar12 & 0x1ff) * 2) - 1U) <
          0xfffe)) {
        local_90 = (TFunctionRef<bool___cdecl(int)> *)CONCAT44(local_90._4_4_,uVar12);
        cVar5 = (**(code **)pTVar4)(*(undefined8 *)&pTVar4->field_0x8,&local_90);
        lVar8 = local_a0;
        if (cVar5 != '\0') {
          uVar7 = 0;
          if ((int)uVar12 < local_88.ArrayNum) {
            uVar7 = ~uVar12 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if ((int)uVar12 < (int)uVar11) {
            uVar11 = uVar12;
          }
          if ((int)uVar16 < (int)uVar12) {
            uVar16 = uVar12;
          }
          local_88.AllocatorInstance.Data[uVar15] = (FScriptContainerElement)0x0;
          lVar8 = local_a0;
          local_98 = uVar11;
          uStack_94 = uVar16;
        }
      }
      uVar13 = (ulonglong)(uVar12 + 1);
      uVar15 = uVar15 + 1;
      param_2 = local_78;
    } while ((longlong)uVar15 < lVar8);
  }
  local_68._0_8_ = *(undefined8 *)param_2;
  local_68._40_8_ = 0;
  if (local_68._0_8_ != 0) {
    puVar9 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar9 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar9)(puVar9,&local_68.field_0x10);
  }
  FVar3.Max = uStack_94;
  FVar3.Min = local_98;
  FindTriComponents(this,FVar3,&local_88,&local_68);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (*(longlong *)param_2 != 0) {
    plVar10 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar10 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  return;
}

// FindConnectedVertices @ 1435fc730

void __thiscall
UE::Geometry::FMeshConnectedComponents::FindConnectedVertices
          (FMeshConnectedComponents *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TFunction<bool___cdecl(int,int)> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  FDynamicMesh3 *pFVar4;
  code *pcVar5;
  FInterval1i FVar6;
  TFunction<bool___cdecl(int,int)> *pTVar7;
  bool bVar8;
  uint uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  bool bVar15;
  uchar local_97 [7];
  uint local_90;
  uint uStack_8c;
  FMeshConnectedComponents *local_88;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_80;
  TFunction<bool___cdecl(int,int)> *local_70;
  TFunction<bool___cdecl(int,int)> local_68;
  
  bVar15 = -1 < CpuChannel->Enabled;
  local_88 = this;
  local_70 = param_2;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId162,
               "MeshConnectedComponents_FindConnectedVertices_VertexROI",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Selections\\MeshConnectedComponents.cpp"
               ,0xa2);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId162);
  }
  local_97[0] = 0xff;
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = 0;
  local_80.ArrayMax = 0;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::Init
            (&local_80,local_97,
             (this->Mesh->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (this->Mesh->VertexRefCounts).RefCounts.CurBlockUsed);
  pFVar14 = (param_1->AllocatorInstance).Data;
  uVar13 = 0x7fffffff;
  iVar2 = param_1->ArrayNum;
  local_90 = 0x7fffffff;
  uStack_8c = 0x80000001;
  pFVar1 = pFVar14 + (longlong)iVar2 * 4;
  uVar12 = 0x80000001;
  do {
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        local_97[1] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_97 + 1);
      }
      pTVar7 = local_70;
      if (pFVar14 == pFVar1) {
        local_68._40_8_ = 0;
        local_68._0_8_ = *(undefined8 *)local_70;
        uStack_8c = uVar12;
        if (local_68._0_8_ != 0) {
          puVar10 = (undefined8 *)&local_70->field_0x10;
          if (*(undefined8 **)&local_70->field_0x28 != (undefined8 *)0x0) {
            puVar10 = *(undefined8 **)&local_70->field_0x28;
          }
          (**(code **)*puVar10)(puVar10,&local_68.field_0x10);
        }
        FVar6.Max = uStack_8c;
        FVar6.Min = local_90;
        FindVertComponents(this,FVar6,&local_80,&local_68);
        if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.AllocatorInstance.Data);
        }
        if (bVar15) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (*(longlong *)pTVar7 != 0) {
          plVar11 = (longlong *)&pTVar7->field_0x10;
          if (*(longlong **)&pTVar7->field_0x28 != (longlong *)0x0) {
            plVar11 = *(longlong **)&pTVar7->field_0x28;
          }
          (**(code **)(*plVar11 + 0x10))();
        }
        return;
      }
      uVar3 = *(uint *)pFVar14;
      pFVar4 = this->Mesh;
      if (((-1 < (int)uVar3) &&
          ((int)uVar3 <
           (int)((pFVar4->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                (pFVar4->VertexRefCounts).RefCounts.CurBlockUsed))) &&
         (this = local_88,
         (ushort)(*(short *)(*(longlong *)
                              ((pFVar4->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                              (ulonglong)(uVar3 >> 9) * 8) + (ulonglong)(uVar3 & 0x1ff) * 2) - 1U) <
         0xfffe)) break;
LAB_1435fc8de:
      pFVar14 = pFVar14 + 4;
    }
    uVar9 = 0;
    if ((int)uVar3 < local_80.ArrayNum) {
      uVar9 = ~uVar3 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_80.AllocatorInstance.Data[(int)uVar3] = (FScriptContainerElement)0x0;
    uVar9 = uVar3;
    if ((int)uVar13 <= (int)uVar3) {
      uVar9 = uVar13;
    }
    uVar13 = uVar9;
    this = local_88;
    local_90 = uVar13;
    if ((int)uVar3 <= (int)uVar12) goto LAB_1435fc8de;
    pFVar14 = pFVar14 + 4;
    uVar12 = uVar3;
  } while( true );
}

// FindConnectedVertices @ 1435fc9a0

void __thiscall
UE::Geometry::FMeshConnectedComponents::FindConnectedVertices
          (FMeshConnectedComponents *this,TFunction<bool___cdecl(int,int)> *param_1)

{
  FDynamicMesh3 *pFVar1;
  code *pcVar2;
  FInterval1i FVar3;
  bool bVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  bool bVar13;
  uchar local_88 [8];
  uint local_80;
  uint uStack_7c;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_78;
  TFunction<bool___cdecl(int,int)> local_68;
  
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId116,"MeshConnectedComponents_FindConnectedVertices",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Selections\\MeshConnectedComponents.cpp"
               ,0x74);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId116);
  }
  local_88[0] = 0xff;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  iVar10 = (this->Mesh->VertexRefCounts).RefCounts.CurBlockUsed +
           (this->Mesh->VertexRefCounts).RefCounts.CurBlock * 0x200;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::Init(&local_78,local_88,iVar10);
  uVar9 = 0;
  uVar8 = 0x7fffffff;
  uVar12 = 0x80000001;
  local_80 = 0x7fffffff;
  uStack_7c = 0x80000001;
  uVar5 = uStack_7c;
  if (0 < iVar10) {
    lVar11 = 0;
    do {
      pFVar1 = this->Mesh;
      if (((-1 < (int)uVar9) &&
          ((int)uVar9 <
           (int)((pFVar1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                (pFVar1->VertexRefCounts).RefCounts.CurBlockUsed))) &&
         ((ushort)(*(short *)(*(longlong *)
                               ((pFVar1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                               (ulonglong)(uVar9 >> 9) * 8) + (ulonglong)(uVar9 & 0x1ff) * 2) - 1U)
          < 0xfffe)) {
        uVar5 = 0;
        if ((int)uVar9 < local_78.ArrayNum) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_78.AllocatorInstance.Data[lVar11] = (FScriptContainerElement)0x0;
        uVar5 = uVar9;
        if ((int)uVar8 <= (int)uVar9) {
          uVar5 = uVar8;
        }
        uVar8 = uVar5;
        local_80 = uVar8;
        if ((int)uVar12 < (int)uVar9) {
          uVar12 = uVar9;
        }
      }
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 1;
      uVar5 = uVar12;
    } while (lVar11 < iVar10);
  }
  uStack_7c = uVar5;
  local_68._0_8_ = *(undefined8 *)param_1;
  local_68._40_8_ = 0;
  if (local_68._0_8_ != 0) {
    puVar6 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar6)(puVar6,&local_68.field_0x10);
  }
  FVar3.Max = uStack_7c;
  FVar3.Min = local_80;
  FindVertComponents(this,FVar3,&local_78,&local_68);
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (*(longlong *)param_1 != 0) {
    plVar7 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar7 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  return;
}

// FindConnectedVertices @ 1435fcbc0

void __thiscall
UE::Geometry::FMeshConnectedComponents::FindConnectedVertices
          (FMeshConnectedComponents *this,TFunctionRef<bool___cdecl(int)> *param_1,
          TFunction<bool___cdecl(int,int)> *param_2)

{
  FDynamicMesh3 *pFVar1;
  code *pcVar2;
  FInterval1i FVar3;
  TFunctionRef<bool___cdecl(int)> *pTVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  bool bVar17;
  uchar local_a8 [8];
  longlong local_a0;
  uint local_98;
  uint uStack_94;
  TFunctionRef<bool___cdecl(int)> *local_90;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_88;
  TFunction<bool___cdecl(int,int)> *local_78;
  TFunction<bool___cdecl(int,int)> local_68;
  
  bVar17 = -1 < CpuChannel->Enabled;
  local_90 = param_1;
  local_78 = param_2;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId139,"MeshConnectedComponents_FindConnectedVertices_Filtered"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Selections\\MeshConnectedComponents.cpp"
               ,0x8b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId139);
  }
  uVar13 = 0;
  local_a8[0] = 0xff;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  iVar14 = (this->Mesh->VertexRefCounts).RefCounts.CurBlockUsed +
           (this->Mesh->VertexRefCounts).RefCounts.CurBlock * 0x200;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::Init(&local_88,local_a8,iVar14);
  pTVar4 = local_90;
  lVar8 = (longlong)iVar14;
  uVar11 = 0x7fffffff;
  uVar16 = 0x80000001;
  local_98 = 0x7fffffff;
  uStack_94 = 0x80000001;
  uVar15 = uVar13;
  local_a0 = lVar8;
  if (0 < iVar14) {
    do {
      pFVar1 = this->Mesh;
      uVar12 = (uint)uVar13;
      if (((-1 < (int)uVar12) &&
          (lVar8 = local_a0,
          (int)uVar12 <
          (int)((pFVar1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               (pFVar1->VertexRefCounts).RefCounts.CurBlockUsed))) &&
         ((ushort)(*(short *)(*(longlong *)
                               ((pFVar1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                               (uVar13 >> 9) * 8) + (ulonglong)(uVar12 & 0x1ff) * 2) - 1U) < 0xfffe)
         ) {
        local_90 = (TFunctionRef<bool___cdecl(int)> *)CONCAT44(local_90._4_4_,uVar12);
        cVar5 = (**(code **)pTVar4)(*(undefined8 *)&pTVar4->field_0x8,&local_90);
        lVar8 = local_a0;
        if (cVar5 != '\0') {
          uVar7 = 0;
          if ((int)uVar12 < local_88.ArrayNum) {
            uVar7 = ~uVar12 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if ((int)uVar12 < (int)uVar11) {
            uVar11 = uVar12;
          }
          if ((int)uVar16 < (int)uVar12) {
            uVar16 = uVar12;
          }
          local_88.AllocatorInstance.Data[uVar15] = (FScriptContainerElement)0x0;
          lVar8 = local_a0;
          local_98 = uVar11;
          uStack_94 = uVar16;
        }
      }
      uVar13 = (ulonglong)(uVar12 + 1);
      uVar15 = uVar15 + 1;
      param_2 = local_78;
    } while ((longlong)uVar15 < lVar8);
  }
  local_68._0_8_ = *(undefined8 *)param_2;
  local_68._40_8_ = 0;
  if (local_68._0_8_ != 0) {
    puVar9 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar9 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar9)(puVar9,&local_68.field_0x10);
  }
  FVar3.Max = uStack_94;
  FVar3.Min = local_98;
  FindVertComponents(this,FVar3,&local_88,&local_68);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (*(longlong *)param_2 != 0) {
    plVar10 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar10 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  return;
}

// FindTriComponent @ 1435fe920

void __thiscall
UE::Geometry::FMeshConnectedComponents::FindTriComponent
          (FMeshConnectedComponents *this,FComponent *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  uint local_48;
  uint local_44;
  FIndex3i_u_0 local_40 [2];
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId289,"FindTriComponents_Component",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Selections\\MeshConnectedComponents.cpp"
               ,0x121);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId289);
  }
  iVar5 = param_2->ArrayNum;
  do {
    if (iVar5 < 1) {
      if (bVar7) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    local_44 = *(uint *)((param_2->AllocatorInstance).Data + (longlong)param_2->ArrayNum * 4 + -4);
    lVar6 = (longlong)(int)local_44;
    param_2->ArrayNum = param_2->ArrayNum + -1;
    uVar4 = 0;
    if ((int)local_44 < param_3->ArrayNum) {
      uVar4 = ~local_44 >> 0x1f;
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
    (param_3->AllocatorInstance).Data[lVar6] = (FScriptContainerElement)0x2;
    pFVar1 = (param_1->Indices).AllocatorInstance.Data;
    if (((pFVar1 <= (FScriptContainerElement *)&local_44) &&
        ((FScriptContainerElement *)&local_44 < pFVar1 + (longlong)(param_1->Indices).ArrayMax * 4))
       && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = (param_1->Indices).ArrayNum;
    if (iVar5 == (param_1->Indices).ArrayMax) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,(ForAnyElementType *)param_1,&(param_1->Indices).ArrayMax);
    }
    (param_1->Indices).ArrayNum = iVar5 + 1;
    *(uint *)((param_1->Indices).AllocatorInstance.Data + (longlong)iVar5 * 4) = local_44;
    FDynamicMesh3::GetTriNeighbourTris(this->Mesh,(FIndex3i *)&local_40[0]._s_0,local_44);
    lVar6 = (longlong)(int)local_40[0]._0_4_;
    local_48 = local_40[0]._s_0.A;
    if (local_40[0]._s_0.A != 0xffffffff) {
      uVar4 = 0;
      if ((int)local_40[0]._0_4_ < param_3->ArrayNum) {
        uVar4 = (uint)~local_40[0]._s_0.A >> 0x1f;
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
      if ((param_3->AllocatorInstance).Data[lVar6] == (FScriptContainerElement)0x0) {
        pFVar1 = (param_2->AllocatorInstance).Data;
        if (((pFVar1 <= (FScriptContainerElement *)&local_48) &&
            ((FScriptContainerElement *)&local_48 < pFVar1 + (longlong)param_2->ArrayMax * 4)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar5 = param_2->ArrayNum;
        if (iVar5 == param_2->ArrayMax) {
          iVar5 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar5 + 1;
        *(uint *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_48;
        lVar6 = (longlong)(int)local_48;
        uVar4 = 0;
        if ((int)local_48 < param_3->ArrayNum) {
          uVar4 = ~local_48 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        (param_3->AllocatorInstance).Data[lVar6] = (FScriptContainerElement)0x1;
      }
    }
    lVar6 = (longlong)(int)local_40[0]._4_4_;
    local_48 = local_40[0]._s_0.B;
    if (local_40[0]._s_0.B != 0xffffffff) {
      uVar4 = 0;
      if ((int)local_40[0]._4_4_ < param_3->ArrayNum) {
        uVar4 = (uint)~local_40[0]._s_0.B >> 0x1f;
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
      if ((param_3->AllocatorInstance).Data[lVar6] == (FScriptContainerElement)0x0) {
        pFVar1 = (param_2->AllocatorInstance).Data;
        if (((pFVar1 <= (FScriptContainerElement *)&local_48) &&
            ((FScriptContainerElement *)&local_48 < pFVar1 + (longlong)param_2->ArrayMax * 4)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar5 = param_2->ArrayNum;
        if (iVar5 == param_2->ArrayMax) {
          iVar5 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar5 + 1;
        *(uint *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_48;
        lVar6 = (longlong)(int)local_48;
        uVar4 = 0;
        if ((int)local_48 < param_3->ArrayNum) {
          uVar4 = ~local_48 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        (param_3->AllocatorInstance).Data[lVar6] = (FScriptContainerElement)0x1;
      }
    }
    lVar6 = (longlong)(int)local_40[0]._8_4_;
    local_48 = local_40[0]._s_0.C;
    if (local_40[0]._s_0.C != 0xffffffff) {
      uVar4 = 0;
      if ((int)local_40[0]._8_4_ < param_3->ArrayNum) {
        uVar4 = (uint)~local_40[0]._s_0.C >> 0x1f;
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
      if ((param_3->AllocatorInstance).Data[lVar6] == (FScriptContainerElement)0x0) {
        pFVar1 = (param_2->AllocatorInstance).Data;
        if (((pFVar1 <= (FScriptContainerElement *)&local_48) &&
            ((FScriptContainerElement *)&local_48 < pFVar1 + (longlong)param_2->ArrayMax * 4)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar5 = param_2->ArrayNum;
        if (iVar5 == param_2->ArrayMax) {
          iVar5 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar5 + 1;
        *(uint *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_48;
        lVar6 = (longlong)(int)local_48;
        uVar4 = 0;
        if ((int)local_48 < param_3->ArrayNum) {
          uVar4 = ~local_48 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        (param_3->AllocatorInstance).Data[lVar6] = (FScriptContainerElement)0x1;
      }
    }
    iVar5 = param_2->ArrayNum;
  } while( true );
}

// FindTriComponent @ 1435feef0

void __thiscall
UE::Geometry::FMeshConnectedComponents::FindTriComponent
          (FMeshConnectedComponents *this,FComponent *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_3,
          TFunctionRef<bool___cdecl(int,int)> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  uint local_68;
  uint local_64;
  uint local_60 [2];
  uint local_58 [2];
  FIndex3i_u_0 local_50 [2];
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId315,"FindTriComponents_Component_Filtered",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Selections\\MeshConnectedComponents.cpp"
               ,0x13b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId315);
  }
  iVar6 = param_2->ArrayNum;
  do {
    if (iVar6 < 1) {
      if (bVar8) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    local_64 = *(uint *)((param_2->AllocatorInstance).Data + (longlong)param_2->ArrayNum * 4 + -4);
    lVar7 = (longlong)(int)local_64;
    param_2->ArrayNum = param_2->ArrayNum + -1;
    uVar5 = 0;
    if ((int)local_64 < param_3->ArrayNum) {
      uVar5 = ~local_64 >> 0x1f;
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
    (param_3->AllocatorInstance).Data[lVar7] = (FScriptContainerElement)0x2;
    pFVar1 = (param_1->Indices).AllocatorInstance.Data;
    if (((pFVar1 <= (FScriptContainerElement *)&local_64) &&
        ((FScriptContainerElement *)&local_64 < pFVar1 + (longlong)(param_1->Indices).ArrayMax * 4))
       && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar6 = (param_1->Indices).ArrayNum;
    if (iVar6 == (param_1->Indices).ArrayMax) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,(ForAnyElementType *)param_1,&(param_1->Indices).ArrayMax);
    }
    (param_1->Indices).ArrayNum = iVar6 + 1;
    *(uint *)((param_1->Indices).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_64;
    FDynamicMesh3::GetTriNeighbourTris(this->Mesh,(FIndex3i *)&local_50[0]._s_0,local_64);
    lVar7 = (longlong)(int)local_50[0]._0_4_;
    local_68 = local_50[0]._s_0.A;
    if (local_50[0]._s_0.A != 0xffffffff) {
      uVar5 = 0;
      if ((int)local_50[0]._0_4_ < param_3->ArrayNum) {
        uVar5 = (uint)~local_50[0]._s_0.A >> 0x1f;
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
      if ((param_3->AllocatorInstance).Data[lVar7] == (FScriptContainerElement)0x0) {
        local_60[0] = local_68;
        local_58[0] = local_64;
        cVar4 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,local_58,local_60);
        if (cVar4 != '\0') {
          pFVar1 = (param_2->AllocatorInstance).Data;
          if (((pFVar1 <= (FScriptContainerElement *)&local_68) &&
              ((FScriptContainerElement *)&local_68 < pFVar1 + (longlong)param_2->ArrayMax * 4)) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar6 = param_2->ArrayNum;
          if (iVar6 == param_2->ArrayMax) {
            iVar6 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
          }
          param_2->ArrayNum = iVar6 + 1;
          *(uint *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_68;
          lVar7 = (longlong)(int)local_68;
          uVar5 = 0;
          if ((int)local_68 < param_3->ArrayNum) {
            uVar5 = ~local_68 >> 0x1f;
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
          (param_3->AllocatorInstance).Data[lVar7] = (FScriptContainerElement)0x1;
        }
      }
    }
    lVar7 = (longlong)(int)local_50[0]._4_4_;
    local_68 = local_50[0]._s_0.B;
    if (local_50[0]._s_0.B != 0xffffffff) {
      uVar5 = 0;
      if ((int)local_50[0]._4_4_ < param_3->ArrayNum) {
        uVar5 = (uint)~local_50[0]._s_0.B >> 0x1f;
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
      if ((param_3->AllocatorInstance).Data[lVar7] == (FScriptContainerElement)0x0) {
        local_60[0] = local_68;
        local_58[0] = local_64;
        cVar4 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,local_58,local_60);
        if (cVar4 != '\0') {
          pFVar1 = (param_2->AllocatorInstance).Data;
          if (((pFVar1 <= (FScriptContainerElement *)&local_68) &&
              ((FScriptContainerElement *)&local_68 < pFVar1 + (longlong)param_2->ArrayMax * 4)) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar6 = param_2->ArrayNum;
          if (iVar6 == param_2->ArrayMax) {
            iVar6 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
          }
          param_2->ArrayNum = iVar6 + 1;
          *(uint *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_68;
          lVar7 = (longlong)(int)local_68;
          uVar5 = 0;
          if ((int)local_68 < param_3->ArrayNum) {
            uVar5 = ~local_68 >> 0x1f;
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
          (param_3->AllocatorInstance).Data[lVar7] = (FScriptContainerElement)0x1;
        }
      }
    }
    lVar7 = (longlong)(int)local_50[0]._8_4_;
    local_68 = local_50[0]._s_0.C;
    if (local_50[0]._s_0.C != 0xffffffff) {
      uVar5 = 0;
      if ((int)local_50[0]._8_4_ < param_3->ArrayNum) {
        uVar5 = (uint)~local_50[0]._s_0.C >> 0x1f;
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
      if ((param_3->AllocatorInstance).Data[lVar7] == (FScriptContainerElement)0x0) {
        local_60[0] = local_68;
        local_58[0] = local_64;
        cVar4 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,local_58,local_60);
        if (cVar4 != '\0') {
          pFVar1 = (param_2->AllocatorInstance).Data;
          if (((pFVar1 <= (FScriptContainerElement *)&local_68) &&
              ((FScriptContainerElement *)&local_68 < pFVar1 + (longlong)param_2->ArrayMax * 4)) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar6 = param_2->ArrayNum;
          if (iVar6 == param_2->ArrayMax) {
            iVar6 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
          }
          param_2->ArrayNum = iVar6 + 1;
          *(uint *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_68;
          lVar7 = (longlong)(int)local_68;
          uVar5 = 0;
          if ((int)local_68 < param_3->ArrayNum) {
            uVar5 = ~local_68 >> 0x1f;
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
          (param_3->AllocatorInstance).Data[lVar7] = (FScriptContainerElement)0x1;
        }
      }
    }
    iVar6 = param_2->ArrayNum;
  } while( true );
}

// FindTriComponents @ 1435ff550

void __thiscall
UE::Geometry::FMeshConnectedComponents::FindTriComponents
          (FMeshConnectedComponents *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2,
          TFunction<bool___cdecl(int,int)> *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  char cVar5;
  FMeshConnectedComponents *this_00;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  FComponent *pFVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
  *pTVar15;
  int iVar16;
  int iVar17;
  FScriptContainerElement *pFVar18;
  ForAnyElementType local_c8;
  undefined8 local_c0;
  uint local_b8;
  uint local_b4;
  char local_b0;
  uint local_ac;
  undefined1 local_a8 [4];
  uint local_a4;
  uint local_a0 [2];
  uint local_98 [2];
  FMeshConnectedComponents *local_90;
  FComponent *local_88;
  uint local_80;
  TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
  *local_78;
  TArray<int,TSizedDefaultAllocator<32>_> *local_70;
  FScriptContainerElement *local_68;
  FIndex3i_u_0 local_60;
  FIndex3i_u_0 local_50;
  FScriptContainerElement *local_40;
  
  local_90 = this;
  local_70 = param_1;
  if (CpuChannel->Enabled < 0) {
    local_b0 = '\0';
  }
  else {
    local_b0 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId247,"FindTriComponents_SeedList",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Selections\\MeshConnectedComponents.cpp"
               ,0xf7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId247);
  }
  pFVar18 = (this->Components).Array.AllocatorInstance.Data;
  pTVar15 = &this->Components;
  for (iVar17 = (this->Components).Array.ArrayNum; local_78 = pTVar15, iVar17 != 0;
      iVar17 = iVar17 + -1) {
    puVar2 = *(undefined8 **)pFVar18;
    if (puVar2 != (undefined8 *)0x0) {
      if ((void *)*puVar2 != (void *)0x0) {
        FMemory::Free((void *)*puVar2);
      }
      ::operator_delete(puVar2,0x10);
    }
    pFVar18 = pFVar18 + 8;
    pTVar15 = local_78;
  }
  piVar1 = &(pTVar15->Array).ArrayMax;
  (pTVar15->Array).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)pTVar15,0,piVar1);
  }
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0._0_4_ = 0;
  local_c0._4_4_ = 0;
  Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,0x100,&local_c8,0,(int *)((longlong)&local_c0 + 4));
  this_00 = local_90;
  local_80 = param_1->ArrayNum;
  uVar12 = (ulonglong)(int)local_80;
  pFVar18 = (param_1->AllocatorInstance).Data;
  local_40 = pFVar18 + uVar12 * 4;
  do {
    pFVar3 = local_40;
    local_68 = pFVar18;
    if (param_1->ArrayNum != (int)uVar12) {
      local_a8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_a8);
    }
    cVar5 = local_b0;
    if (pFVar18 == pFVar3) {
      if (local_c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data);
      }
      if (cVar5 != '\0') {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (*(longlong *)param_3 != 0) {
        plVar13 = (longlong *)&param_3->field_0x10;
        if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
          plVar13 = *(longlong **)&param_3->field_0x28;
        }
        (**(code **)(*plVar13 + 0x10))();
      }
      return;
    }
    local_a4 = *(uint *)pFVar18;
    lVar14 = (longlong)(int)local_a4;
    if ((-1 < (int)local_a4) && ((int)local_a4 < param_2->ArrayNum)) {
      if (((int)local_a4 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((param_2->AllocatorInstance).Data[lVar14] != (FScriptContainerElement)0xff) {
        if (((local_c8.Data <= (FScriptContainerElement *)&local_a4) &&
            ((FScriptContainerElement *)&local_a4 < local_c8.Data + (longlong)local_c0._4_4_ * 4))
           && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((int)local_c0 == local_c0._4_4_) {
          local_c0._0_4_ =
               Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_c8,(int *)((longlong)&local_c0 + 4));
        }
        lVar14 = (longlong)(int)local_c0;
        local_c0 = CONCAT44(local_c0._4_4_,(int)local_c0 + 1);
        *(uint *)(local_c8.Data + lVar14 * 4) = local_a4;
        lVar14 = (longlong)(int)local_a4;
        uVar7 = 0;
        if ((int)local_a4 < param_2->ArrayNum) {
          uVar7 = ~local_a4 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (param_2->AllocatorInstance).Data[lVar14] = (FScriptContainerElement)0x1;
        pFVar11 = ::operator_new(0x10);
        if (pFVar11 == (FComponent *)0x0) {
          pFVar11 = (FComponent *)0x0;
        }
        else {
          (pFVar11->Indices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar11->Indices).ArrayNum = 0;
          (pFVar11->Indices).ArrayMax = 0;
        }
        iVar17 = CpuChannel->Enabled;
        if (*(longlong *)param_3 == 0) {
          if (-1 < iVar17) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId289,"FindTriComponents_Component",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Selections\\MeshConnectedComponents.cpp"
                       ,0x121);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId289);
          }
          while (0 < (int)local_c0) {
            iVar10 = (int)local_c0 + -1;
            uVar7 = *(uint *)(local_c8.Data + (longlong)iVar10 * 4);
            iVar8 = ((int)local_c0 - iVar10) + -1;
            iVar16 = (int)local_c0;
            if (iVar8 != 0) {
              memmove(local_c8.Data + (longlong)iVar10 * 4,local_c8.Data + (longlong)iVar10 * 4 + 4,
                      (longlong)iVar8 << 2);
              iVar16 = (int)local_c0;
            }
            local_c0 = CONCAT44(local_c0._4_4_,iVar16 + -1);
            uVar9 = 0;
            if ((int)uVar7 < param_2->ArrayNum) {
              uVar9 = ~uVar7 >> 0x1f;
            }
            local_98[0] = uVar7;
            if ((uVar9 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            (param_2->AllocatorInstance).Data[(int)uVar7] = (FScriptContainerElement)0x2;
            pFVar18 = (pFVar11->Indices).AllocatorInstance.Data;
            if (((pFVar18 <= (FScriptContainerElement *)local_98) &&
                ((FScriptContainerElement *)local_98 <
                 pFVar18 + (longlong)(pFVar11->Indices).ArrayMax * 4)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar10 = (pFVar11->Indices).ArrayNum;
            if (iVar10 == (pFVar11->Indices).ArrayMax) {
              iVar10 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,(ForAnyElementType *)pFVar11,&(pFVar11->Indices).ArrayMax);
            }
            (pFVar11->Indices).ArrayNum = iVar10 + 1;
            *(uint *)((pFVar11->Indices).AllocatorInstance.Data + (longlong)iVar10 * 4) =
                 local_98[0];
            FDynamicMesh3::GetTriNeighbourTris(this_00->Mesh,(FIndex3i *)&local_50._s_0,local_98[0])
            ;
            lVar14 = (longlong)local_50._s_0.A;
            local_b4 = local_50._s_0.A;
            if (local_50._s_0.A != 0xffffffff) {
              uVar7 = 0;
              if (local_50._s_0.A < param_2->ArrayNum) {
                uVar7 = (uint)~local_50._s_0.A >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if ((param_2->AllocatorInstance).Data[lVar14] == (FScriptContainerElement)0x0) {
                if (((local_c8.Data <= (FScriptContainerElement *)&local_b4) &&
                    ((FScriptContainerElement *)&local_b4 <
                     local_c8.Data + (longlong)local_c0._4_4_ * 4)) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                iVar10 = (int)local_c0;
                if ((int)local_c0 == local_c0._4_4_) {
                  iVar10 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&local_c8,(int *)((longlong)&local_c0 + 4));
                }
                local_c0 = CONCAT44(local_c0._4_4_,iVar10 + 1);
                *(uint *)(local_c8.Data + (longlong)iVar10 * 4) = local_b4;
                lVar14 = (longlong)(int)local_b4;
                uVar7 = 0;
                if ((int)local_b4 < param_2->ArrayNum) {
                  uVar7 = ~local_b4 >> 0x1f;
                }
                if ((uVar7 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                (param_2->AllocatorInstance).Data[lVar14] = (FScriptContainerElement)0x1;
              }
            }
            lVar14 = (longlong)local_50._s_0.B;
            local_b4 = local_50._s_0.B;
            if (local_50._s_0.B != 0xffffffff) {
              uVar7 = 0;
              if (local_50._s_0.B < param_2->ArrayNum) {
                uVar7 = (uint)~local_50._s_0.B >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if ((param_2->AllocatorInstance).Data[lVar14] == (FScriptContainerElement)0x0) {
                if (((local_c8.Data <= (FScriptContainerElement *)&local_b4) &&
                    ((FScriptContainerElement *)&local_b4 <
                     local_c8.Data + (longlong)local_c0._4_4_ * 4)) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                iVar10 = (int)local_c0;
                if ((int)local_c0 == local_c0._4_4_) {
                  iVar10 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&local_c8,(int *)((longlong)&local_c0 + 4));
                }
                local_c0 = CONCAT44(local_c0._4_4_,iVar10 + 1);
                *(uint *)(local_c8.Data + (longlong)iVar10 * 4) = local_b4;
                lVar14 = (longlong)(int)local_b4;
                uVar7 = 0;
                if ((int)local_b4 < param_2->ArrayNum) {
                  uVar7 = ~local_b4 >> 0x1f;
                }
                if ((uVar7 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                (param_2->AllocatorInstance).Data[lVar14] = (FScriptContainerElement)0x1;
              }
            }
            lVar14 = (longlong)local_50._s_0.C;
            local_b4 = local_50._s_0.C;
            if (local_50._s_0.C != 0xffffffff) {
              uVar7 = 0;
              if (local_50._s_0.C < param_2->ArrayNum) {
                uVar7 = (uint)~local_50._s_0.C >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if ((param_2->AllocatorInstance).Data[lVar14] == (FScriptContainerElement)0x0) {
                if (((local_c8.Data <= (FScriptContainerElement *)&local_b4) &&
                    ((FScriptContainerElement *)&local_b4 <
                     local_c8.Data + (longlong)local_c0._4_4_ * 4)) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                iVar10 = (int)local_c0;
                if ((int)local_c0 == local_c0._4_4_) {
                  iVar10 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&local_c8,(int *)((longlong)&local_c0 + 4));
                }
                local_c0 = CONCAT44(local_c0._4_4_,iVar10 + 1);
                *(uint *)(local_c8.Data + (longlong)iVar10 * 4) = local_b4;
                lVar14 = (longlong)(int)local_b4;
                uVar7 = 0;
                if ((int)local_b4 < param_2->ArrayNum) {
                  uVar7 = ~local_b4 >> 0x1f;
                }
                if ((uVar7 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                (param_2->AllocatorInstance).Data[lVar14] = (FScriptContainerElement)0x1;
              }
            }
            pTVar15 = local_78;
            pFVar18 = local_68;
          }
        }
        else {
          if (-1 < iVar17) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId315,"FindTriComponents_Component_Filtered",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Selections\\MeshConnectedComponents.cpp"
                       ,0x13b);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId315);
          }
          while (0 < (int)local_c0) {
            iVar10 = (int)local_c0 + -1;
            uVar7 = *(uint *)(local_c8.Data + (longlong)iVar10 * 4);
            iVar8 = ((int)local_c0 - iVar10) + -1;
            iVar16 = (int)local_c0;
            if (iVar8 != 0) {
              memmove(local_c8.Data + (longlong)iVar10 * 4,local_c8.Data + (longlong)iVar10 * 4 + 4,
                      (longlong)iVar8 << 2);
              iVar16 = (int)local_c0;
            }
            local_c0 = CONCAT44(local_c0._4_4_,iVar16 + -1);
            uVar9 = 0;
            if ((int)uVar7 < param_2->ArrayNum) {
              uVar9 = ~uVar7 >> 0x1f;
            }
            local_ac = uVar7;
            if ((uVar9 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            (param_2->AllocatorInstance).Data[(int)uVar7] = (FScriptContainerElement)0x2;
            pFVar18 = (pFVar11->Indices).AllocatorInstance.Data;
            if (((pFVar18 <= (FScriptContainerElement *)&local_ac) &&
                ((FScriptContainerElement *)&local_ac <
                 pFVar18 + (longlong)(pFVar11->Indices).ArrayMax * 4)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar10 = (pFVar11->Indices).ArrayNum;
            if (iVar10 == (pFVar11->Indices).ArrayMax) {
              iVar10 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,(ForAnyElementType *)pFVar11,&(pFVar11->Indices).ArrayMax);
            }
            (pFVar11->Indices).ArrayNum = iVar10 + 1;
            *(uint *)((pFVar11->Indices).AllocatorInstance.Data + (longlong)iVar10 * 4) = local_ac;
            FDynamicMesh3::GetTriNeighbourTris(this_00->Mesh,(FIndex3i *)&local_60._s_0,local_ac);
            lVar14 = (longlong)local_60._s_0.A;
            local_b8 = local_60._s_0.A;
            if (local_60._s_0.A != 0xffffffff) {
              uVar7 = 0;
              if (local_60._s_0.A < param_2->ArrayNum) {
                uVar7 = (uint)~local_60._s_0.A >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if ((param_2->AllocatorInstance).Data[lVar14] == (FScriptContainerElement)0x0) {
                local_a0[0] = local_b8;
                local_90 = (FMeshConnectedComponents *)CONCAT44(local_90._4_4_,local_ac);
                bVar6 = Core::Private::Function::
                        TFunctionRefCaller<TFunction<bool___cdecl(int,int)>,bool,int,int>::Call
                                  (param_3,(int *)&local_90,(int *)local_a0);
                if (bVar6) {
                  if (((local_c8.Data <= (FScriptContainerElement *)&local_b8) &&
                      ((FScriptContainerElement *)&local_b8 <
                       local_c8.Data + (longlong)local_c0._4_4_ * 4)) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar6)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  iVar10 = (int)local_c0;
                  if ((int)local_c0 == local_c0._4_4_) {
                    iVar10 = Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&local_c8,(int *)((longlong)&local_c0 + 4));
                  }
                  local_c0 = CONCAT44(local_c0._4_4_,iVar10 + 1);
                  *(uint *)(local_c8.Data + (longlong)iVar10 * 4) = local_b8;
                  lVar14 = (longlong)(int)local_b8;
                  uVar7 = 0;
                  if ((int)local_b8 < param_2->ArrayNum) {
                    uVar7 = ~local_b8 >> 0x1f;
                  }
                  if ((uVar7 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar6)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  (param_2->AllocatorInstance).Data[lVar14] = (FScriptContainerElement)0x1;
                }
              }
            }
            lVar14 = (longlong)local_60._s_0.B;
            local_b8 = local_60._s_0.B;
            if (local_60._s_0.B != 0xffffffff) {
              uVar7 = 0;
              if (local_60._s_0.B < param_2->ArrayNum) {
                uVar7 = (uint)~local_60._s_0.B >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if ((param_2->AllocatorInstance).Data[lVar14] == (FScriptContainerElement)0x0) {
                local_a0[0] = local_b8;
                local_90 = (FMeshConnectedComponents *)CONCAT44(local_90._4_4_,local_ac);
                bVar6 = Core::Private::Function::
                        TFunctionRefCaller<TFunction<bool___cdecl(int,int)>,bool,int,int>::Call
                                  (param_3,(int *)&local_90,(int *)local_a0);
                if (bVar6) {
                  if (((local_c8.Data <= (FScriptContainerElement *)&local_b8) &&
                      ((FScriptContainerElement *)&local_b8 <
                       local_c8.Data + (longlong)local_c0._4_4_ * 4)) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar6)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  iVar10 = (int)local_c0;
                  if ((int)local_c0 == local_c0._4_4_) {
                    iVar10 = Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&local_c8,(int *)((longlong)&local_c0 + 4));
                  }
                  local_c0 = CONCAT44(local_c0._4_4_,iVar10 + 1);
                  *(uint *)(local_c8.Data + (longlong)iVar10 * 4) = local_b8;
                  lVar14 = (longlong)(int)local_b8;
                  uVar7 = 0;
                  if ((int)local_b8 < param_2->ArrayNum) {
                    uVar7 = ~local_b8 >> 0x1f;
                  }
                  if ((uVar7 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar6)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  (param_2->AllocatorInstance).Data[lVar14] = (FScriptContainerElement)0x1;
                }
              }
            }
            lVar14 = (longlong)local_60._s_0.C;
            local_b8 = local_60._s_0.C;
            if (local_60._s_0.C != 0xffffffff) {
              uVar7 = 0;
              if (local_60._s_0.C < param_2->ArrayNum) {
                uVar7 = (uint)~local_60._s_0.C >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if ((param_2->AllocatorInstance).Data[lVar14] == (FScriptContainerElement)0x0) {
                local_a0[0] = local_b8;
                local_90 = (FMeshConnectedComponents *)CONCAT44(local_90._4_4_,local_ac);
                bVar6 = Core::Private::Function::
                        TFunctionRefCaller<TFunction<bool___cdecl(int,int)>,bool,int,int>::Call
                                  (param_3,(int *)&local_90,(int *)local_a0);
                if (bVar6) {
                  if (((local_c8.Data <= (FScriptContainerElement *)&local_b8) &&
                      ((FScriptContainerElement *)&local_b8 <
                       local_c8.Data + (longlong)local_c0._4_4_ * 4)) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar6)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  iVar10 = (int)local_c0;
                  if ((int)local_c0 == local_c0._4_4_) {
                    iVar10 = Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&local_c8,(int *)((longlong)&local_c0 + 4));
                  }
                  local_c0 = CONCAT44(local_c0._4_4_,iVar10 + 1);
                  *(uint *)(local_c8.Data + (longlong)iVar10 * 4) = local_b8;
                  lVar14 = (longlong)(int)local_b8;
                  uVar7 = 0;
                  if ((int)local_b8 < param_2->ArrayNum) {
                    uVar7 = ~local_b8 >> 0x1f;
                  }
                  if ((uVar7 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar6)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  (param_2->AllocatorInstance).Data[lVar14] = (FScriptContainerElement)0x1;
                }
              }
            }
            pTVar15 = local_78;
            pFVar18 = local_68;
          }
        }
        if (-1 < iVar17) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        pFVar3 = (pTVar15->Array).AllocatorInstance.Data;
        piVar1 = &(pTVar15->Array).ArrayMax;
        local_88 = pFVar11;
        if (((pFVar3 <= (FScriptContainerElement *)&local_88) &&
            ((FScriptContainerElement *)&local_88 < pFVar3 + (longlong)*piVar1 * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar17 = (pTVar15->Array).ArrayNum;
        if (iVar17 == *piVar1) {
          iVar17 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)pTVar15,piVar1);
        }
        (pTVar15->Array).ArrayNum = iVar17 + 1;
        *(FComponent **)((pTVar15->Array).AllocatorInstance.Data + (longlong)iVar17 * 8) = local_88;
        RemoveFromActiveSet(this_00,pFVar11,param_2);
        lVar14 = local_c0;
        local_c0._0_4_ = 0;
        param_1 = local_70;
        if ((lVar14 < 0) && (local_c0._4_4_ != 0)) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&local_c8,0,(int *)((longlong)&local_c0 + 4));
          param_1 = local_70;
        }
      }
    }
    uVar12 = (ulonglong)local_80;
    pFVar18 = pFVar18 + 4;
  } while( true );
}

// FindTriComponents @ 1436004f0

void __thiscall
UE::Geometry::FMeshConnectedComponents::FindTriComponents
          (FMeshConnectedComponents *this,FInterval1i param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2,
          TFunction<bool___cdecl(int,int)> *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  FMeshConnectedComponents *pFVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  FComponent *pFVar8;
  longlong lVar9;
  longlong *plVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  TFunction<bool___cdecl(int,int)> *pTVar14;
  FScriptContainerElement *pFVar15;
  TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
  *pTVar16;
  int iVar17;
  int *piVar18;
  bool bVar19;
  int iStackX_14;
  ForAnyElementType local_e8;
  undefined8 local_e0;
  uint local_d8;
  uint local_d4;
  char local_d0;
  uint local_cc;
  uint local_c8 [2];
  uint local_c0 [2];
  uint local_b8 [2];
  uint local_b0 [2];
  FComponent *local_a8;
  TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
  *local_a0;
  FMeshConnectedComponents *local_98;
  longlong local_90;
  TFunction<bool___cdecl(int,int)> *local_88;
  int *local_80;
  FInterval1i local_78;
  FIndex3i_u_0 local_70;
  FIndex3i_u_0 local_60 [2];
  
  bVar19 = CpuChannel->Enabled < 0;
  local_98 = this;
  local_88 = param_3;
  local_78 = param_1;
  if (bVar19) {
    local_d0 = '\0';
  }
  else {
    local_d0 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId206,"FindTriComponents_ActiveRange",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Selections\\MeshConnectedComponents.cpp"
               ,0xce);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId206);
  }
  pFVar15 = (this->Components).Array.AllocatorInstance.Data;
  pTVar16 = &this->Components;
  for (iVar17 = (this->Components).Array.ArrayNum; local_a0 = pTVar16, iVar17 != 0;
      iVar17 = iVar17 + -1) {
    puVar1 = *(undefined8 **)pFVar15;
    if (puVar1 != (undefined8 *)0x0) {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      ::operator_delete(puVar1,0x10);
    }
    pFVar15 = pFVar15 + 8;
    pTVar16 = local_a0;
  }
  piVar18 = &(pTVar16->Array).ArrayMax;
  (pTVar16->Array).ArrayNum = 0;
  local_80 = piVar18;
  if (*piVar18 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)pTVar16,0,piVar18);
  }
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0._0_4_ = 0;
  local_e0._4_4_ = 0;
  Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,0x100,&local_e8,0,(int *)((longlong)&local_e0 + 4));
  iStackX_14 = param_1.Max;
  pTVar14 = param_3;
  cVar11 = !bVar19;
  if (param_1.Min <= iStackX_14) {
    local_90 = (longlong)param_1.Min;
    do {
      lVar9 = local_90;
      uVar12 = param_1.Min;
      uVar4 = 0;
      if ((int)uVar12 < param_2->ArrayNum) {
        uVar4 = ~uVar12 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((param_2->AllocatorInstance).Data[lVar9] != (FScriptContainerElement)0xff) {
        local_c8[0] = uVar12;
        if (((local_e8.Data <= (FScriptContainerElement *)local_c8) &&
            ((FScriptContainerElement *)local_c8 < local_e8.Data + (longlong)local_e0._4_4_ * 4)) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar19)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if ((int)local_e0 == local_e0._4_4_) {
          local_e0._0_4_ =
               Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_e8,(int *)((longlong)&local_e0 + 4));
        }
        lVar9 = (longlong)(int)local_e0;
        local_e0 = CONCAT44(local_e0._4_4_,(int)local_e0 + 1);
        *(uint *)(local_e8.Data + lVar9 * 4) = local_c8[0];
        lVar9 = (longlong)(int)local_c8[0];
        uVar4 = 0;
        if ((int)local_c8[0] < param_2->ArrayNum) {
          uVar4 = ~local_c8[0] >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        (param_2->AllocatorInstance).Data[lVar9] = (FScriptContainerElement)0x1;
        pFVar8 = ::operator_new(0x10);
        if (pFVar8 == (FComponent *)0x0) {
          pFVar8 = (FComponent *)0x0;
        }
        else {
          (pFVar8->Indices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar8->Indices).ArrayNum = 0;
          (pFVar8->Indices).ArrayMax = 0;
        }
        iVar17 = CpuChannel->Enabled;
        if (*(longlong *)param_3 == 0) {
          if (-1 < iVar17) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId289,"FindTriComponents_Component",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Selections\\MeshConnectedComponents.cpp"
                       ,0x121);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId289);
          }
          pFVar3 = local_98;
          while (0 < (int)local_e0) {
            iVar6 = (int)local_e0 + -1;
            uVar4 = *(uint *)(local_e8.Data + (longlong)iVar6 * 4);
            iVar5 = ((int)local_e0 - iVar6) + -1;
            iVar13 = (int)local_e0;
            if (iVar5 != 0) {
              memmove(local_e8.Data + (longlong)iVar6 * 4,local_e8.Data + (longlong)iVar6 * 4 + 4,
                      (longlong)iVar5 << 2);
              iVar13 = (int)local_e0;
            }
            local_e0 = CONCAT44(local_e0._4_4_,iVar13 + -1);
            uVar7 = 0;
            if ((int)uVar4 < param_2->ArrayNum) {
              uVar7 = ~uVar4 >> 0x1f;
            }
            local_b0[0] = uVar4;
            if ((uVar7 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            (param_2->AllocatorInstance).Data[(int)uVar4] = (FScriptContainerElement)0x2;
            pFVar15 = (pFVar8->Indices).AllocatorInstance.Data;
            if (((pFVar15 <= (FScriptContainerElement *)local_b0) &&
                ((FScriptContainerElement *)local_b0 <
                 pFVar15 + (longlong)(pFVar8->Indices).ArrayMax * 4)) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar19)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            iVar6 = (pFVar8->Indices).ArrayNum;
            if (iVar6 == (pFVar8->Indices).ArrayMax) {
              iVar6 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,(ForAnyElementType *)pFVar8,&(pFVar8->Indices).ArrayMax);
            }
            (pFVar8->Indices).ArrayNum = iVar6 + 1;
            *(uint *)((pFVar8->Indices).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_b0[0];
            FDynamicMesh3::GetTriNeighbourTris
                      (pFVar3->Mesh,(FIndex3i *)&local_60[0]._s_0,local_b0[0]);
            lVar9 = (longlong)(int)local_60[0]._0_4_;
            local_d4 = local_60[0]._s_0.A;
            if (local_60[0]._s_0.A != 0xffffffff) {
              uVar4 = 0;
              if ((int)local_60[0]._0_4_ < param_2->ArrayNum) {
                uVar4 = (uint)~local_60[0]._s_0.A >> 0x1f;
              }
              if ((uVar4 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              if ((param_2->AllocatorInstance).Data[lVar9] == (FScriptContainerElement)0x0) {
                if (((local_e8.Data <= (FScriptContainerElement *)&local_d4) &&
                    ((FScriptContainerElement *)&local_d4 <
                     local_e8.Data + (longlong)local_e0._4_4_ * 4)) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar19)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                iVar6 = (int)local_e0;
                if ((int)local_e0 == local_e0._4_4_) {
                  iVar6 = Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x404,&local_e8,(int *)((longlong)&local_e0 + 4));
                }
                local_e0 = CONCAT44(local_e0._4_4_,iVar6 + 1);
                *(uint *)(local_e8.Data + (longlong)iVar6 * 4) = local_d4;
                lVar9 = (longlong)(int)local_d4;
                uVar4 = 0;
                if ((int)local_d4 < param_2->ArrayNum) {
                  uVar4 = ~local_d4 >> 0x1f;
                }
                if ((uVar4 == 0) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                (param_2->AllocatorInstance).Data[lVar9] = (FScriptContainerElement)0x1;
              }
            }
            lVar9 = (longlong)(int)local_60[0]._4_4_;
            local_d4 = local_60[0]._s_0.B;
            if (local_60[0]._s_0.B != 0xffffffff) {
              uVar4 = 0;
              if ((int)local_60[0]._4_4_ < param_2->ArrayNum) {
                uVar4 = (uint)~local_60[0]._s_0.B >> 0x1f;
              }
              if ((uVar4 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              if ((param_2->AllocatorInstance).Data[lVar9] == (FScriptContainerElement)0x0) {
                if (((local_e8.Data <= (FScriptContainerElement *)&local_d4) &&
                    ((FScriptContainerElement *)&local_d4 <
                     local_e8.Data + (longlong)local_e0._4_4_ * 4)) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar19)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                iVar6 = (int)local_e0;
                if ((int)local_e0 == local_e0._4_4_) {
                  iVar6 = Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x404,&local_e8,(int *)((longlong)&local_e0 + 4));
                }
                local_e0 = CONCAT44(local_e0._4_4_,iVar6 + 1);
                *(uint *)(local_e8.Data + (longlong)iVar6 * 4) = local_d4;
                lVar9 = (longlong)(int)local_d4;
                uVar4 = 0;
                if ((int)local_d4 < param_2->ArrayNum) {
                  uVar4 = ~local_d4 >> 0x1f;
                }
                if ((uVar4 == 0) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                (param_2->AllocatorInstance).Data[lVar9] = (FScriptContainerElement)0x1;
              }
            }
            lVar9 = (longlong)(int)local_60[0]._8_4_;
            local_d4 = local_60[0]._s_0.C;
            if (local_60[0]._s_0.C != 0xffffffff) {
              uVar4 = 0;
              if ((int)local_60[0]._8_4_ < param_2->ArrayNum) {
                uVar4 = (uint)~local_60[0]._s_0.C >> 0x1f;
              }
              if ((uVar4 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              if ((param_2->AllocatorInstance).Data[lVar9] == (FScriptContainerElement)0x0) {
                if (((local_e8.Data <= (FScriptContainerElement *)&local_d4) &&
                    ((FScriptContainerElement *)&local_d4 <
                     local_e8.Data + (longlong)local_e0._4_4_ * 4)) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar19)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                iVar6 = (int)local_e0;
                if ((int)local_e0 == local_e0._4_4_) {
                  iVar6 = Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x404,&local_e8,(int *)((longlong)&local_e0 + 4));
                }
                local_e0 = CONCAT44(local_e0._4_4_,iVar6 + 1);
                *(uint *)(local_e8.Data + (longlong)iVar6 * 4) = local_d4;
                lVar9 = (longlong)(int)local_d4;
                uVar4 = 0;
                if ((int)local_d4 < param_2->ArrayNum) {
                  uVar4 = ~local_d4 >> 0x1f;
                }
                if ((uVar4 == 0) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                (param_2->AllocatorInstance).Data[lVar9] = (FScriptContainerElement)0x1;
              }
            }
            param_3 = local_88;
            pTVar16 = local_a0;
            piVar18 = local_80;
          }
        }
        else {
          if (-1 < iVar17) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId315,"FindTriComponents_Component_Filtered",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Selections\\MeshConnectedComponents.cpp"
                       ,0x13b);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId315);
          }
          pFVar3 = local_98;
          if (0 < (int)local_e0) {
            do {
              iVar6 = (int)local_e0 + -1;
              uVar12 = *(uint *)(local_e8.Data + (longlong)iVar6 * 4);
              iVar5 = ((int)local_e0 - iVar6) + -1;
              iVar13 = (int)local_e0;
              if (iVar5 != 0) {
                memmove(local_e8.Data + (longlong)iVar6 * 4,local_e8.Data + (longlong)iVar6 * 4 + 4,
                        (longlong)iVar5 << 2);
                iVar13 = (int)local_e0;
              }
              local_e0 = CONCAT44(local_e0._4_4_,iVar13 + -1);
              uVar4 = 0;
              if ((int)uVar12 < param_2->ArrayNum) {
                uVar4 = ~uVar12 >> 0x1f;
              }
              local_cc = uVar12;
              if ((uVar4 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              (param_2->AllocatorInstance).Data[(int)uVar12] = (FScriptContainerElement)0x2;
              pFVar15 = (pFVar8->Indices).AllocatorInstance.Data;
              if (((pFVar15 <= (FScriptContainerElement *)&local_cc) &&
                  ((FScriptContainerElement *)&local_cc <
                   pFVar15 + (longlong)(pFVar8->Indices).ArrayMax * 4)) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar19)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              iVar6 = (pFVar8->Indices).ArrayNum;
              if (iVar6 == (pFVar8->Indices).ArrayMax) {
                iVar6 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,(ForAnyElementType *)pFVar8,&(pFVar8->Indices).ArrayMax);
              }
              (pFVar8->Indices).ArrayNum = iVar6 + 1;
              *(uint *)((pFVar8->Indices).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_cc;
              FDynamicMesh3::GetTriNeighbourTris(pFVar3->Mesh,(FIndex3i *)&local_70._s_0,local_cc);
              lVar9 = (longlong)local_70._s_0.A;
              local_d8 = local_70._s_0.A;
              if (local_70._s_0.A != 0xffffffff) {
                uVar12 = 0;
                if (local_70._s_0.A < param_2->ArrayNum) {
                  uVar12 = (uint)~local_70._s_0.A >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                if ((param_2->AllocatorInstance).Data[lVar9] == (FScriptContainerElement)0x0) {
                  local_c0[0] = local_d8;
                  local_b8[0] = local_cc;
                  bVar19 = Core::Private::Function::
                           TFunctionRefCaller<TFunction<bool___cdecl(int,int)>,bool,int,int>::Call
                                     (param_3,(int *)local_b8,(int *)local_c0);
                  if (bVar19) {
                    if (((local_e8.Data <= (FScriptContainerElement *)&local_d8) &&
                        ((FScriptContainerElement *)&local_d8 <
                         local_e8.Data + (longlong)local_e0._4_4_ * 4)) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar19)) {
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    iVar6 = (int)local_e0;
                    if ((int)local_e0 == local_e0._4_4_) {
                      iVar6 = Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                        (0x404,&local_e8,(int *)((longlong)&local_e0 + 4));
                    }
                    local_e0 = CONCAT44(local_e0._4_4_,iVar6 + 1);
                    *(uint *)(local_e8.Data + (longlong)iVar6 * 4) = local_d8;
                    lVar9 = (longlong)(int)local_d8;
                    uVar12 = 0;
                    if ((int)local_d8 < param_2->ArrayNum) {
                      uVar12 = ~local_d8 >> 0x1f;
                    }
                    if ((uVar12 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    (param_2->AllocatorInstance).Data[lVar9] = (FScriptContainerElement)0x1;
                  }
                }
              }
              lVar9 = (longlong)local_70._s_0.B;
              local_d8 = local_70._s_0.B;
              if (local_70._s_0.B != 0xffffffff) {
                uVar12 = 0;
                if (local_70._s_0.B < param_2->ArrayNum) {
                  uVar12 = (uint)~local_70._s_0.B >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                if ((param_2->AllocatorInstance).Data[lVar9] == (FScriptContainerElement)0x0) {
                  local_c0[0] = local_d8;
                  local_b8[0] = local_cc;
                  bVar19 = Core::Private::Function::
                           TFunctionRefCaller<TFunction<bool___cdecl(int,int)>,bool,int,int>::Call
                                     (param_3,(int *)local_b8,(int *)local_c0);
                  if (bVar19) {
                    if (((local_e8.Data <= (FScriptContainerElement *)&local_d8) &&
                        ((FScriptContainerElement *)&local_d8 <
                         local_e8.Data + (longlong)local_e0._4_4_ * 4)) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar19)) {
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    iVar6 = (int)local_e0;
                    if ((int)local_e0 == local_e0._4_4_) {
                      iVar6 = Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                        (0x404,&local_e8,(int *)((longlong)&local_e0 + 4));
                    }
                    local_e0 = CONCAT44(local_e0._4_4_,iVar6 + 1);
                    *(uint *)(local_e8.Data + (longlong)iVar6 * 4) = local_d8;
                    lVar9 = (longlong)(int)local_d8;
                    uVar12 = 0;
                    if ((int)local_d8 < param_2->ArrayNum) {
                      uVar12 = ~local_d8 >> 0x1f;
                    }
                    if ((uVar12 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    (param_2->AllocatorInstance).Data[lVar9] = (FScriptContainerElement)0x1;
                  }
                }
              }
              lVar9 = (longlong)local_70._s_0.C;
              local_d8 = local_70._s_0.C;
              if (local_70._s_0.C != 0xffffffff) {
                uVar12 = 0;
                if (local_70._s_0.C < param_2->ArrayNum) {
                  uVar12 = (uint)~local_70._s_0.C >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                if ((param_2->AllocatorInstance).Data[lVar9] == (FScriptContainerElement)0x0) {
                  local_c0[0] = local_d8;
                  local_b8[0] = local_cc;
                  bVar19 = Core::Private::Function::
                           TFunctionRefCaller<TFunction<bool___cdecl(int,int)>,bool,int,int>::Call
                                     (param_3,(int *)local_b8,(int *)local_c0);
                  if (bVar19) {
                    if (((local_e8.Data <= (FScriptContainerElement *)&local_d8) &&
                        ((FScriptContainerElement *)&local_d8 <
                         local_e8.Data + (longlong)local_e0._4_4_ * 4)) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar19)) {
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    iVar6 = (int)local_e0;
                    if ((int)local_e0 == local_e0._4_4_) {
                      iVar6 = Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                        (0x404,&local_e8,(int *)((longlong)&local_e0 + 4));
                    }
                    local_e0 = CONCAT44(local_e0._4_4_,iVar6 + 1);
                    *(uint *)(local_e8.Data + (longlong)iVar6 * 4) = local_d8;
                    lVar9 = (longlong)(int)local_d8;
                    uVar12 = 0;
                    if ((int)local_d8 < param_2->ArrayNum) {
                      uVar12 = ~local_d8 >> 0x1f;
                    }
                    if ((uVar12 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    (param_2->AllocatorInstance).Data[lVar9] = (FScriptContainerElement)0x1;
                  }
                }
              }
            } while (0 < (int)local_e0);
            uVar12 = local_78.Min;
            pTVar16 = local_a0;
            piVar18 = local_80;
          }
        }
        if (-1 < iVar17) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        pFVar15 = (pTVar16->Array).AllocatorInstance.Data;
        local_a8 = pFVar8;
        if (((pFVar15 <= (FScriptContainerElement *)&local_a8) &&
            ((FScriptContainerElement *)&local_a8 < pFVar15 + (longlong)*piVar18 * 8)) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar19)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar17 = (pTVar16->Array).ArrayNum;
        if (iVar17 == *piVar18) {
          iVar17 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)pTVar16,piVar18);
        }
        (pTVar16->Array).ArrayNum = iVar17 + 1;
        *(FComponent **)((pTVar16->Array).AllocatorInstance.Data + (longlong)iVar17 * 8) = local_a8;
        RemoveFromActiveSet(local_98,pFVar8,param_2);
        lVar9 = local_e0;
        local_e0._0_4_ = 0;
        if ((lVar9 < 0) && (local_e0._4_4_ != 0)) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&local_e8,0,(int *)((longlong)&local_e0 + 4));
        }
      }
      local_90 = local_90 + 1;
      param_1.Min = uVar12 + 1;
      param_1.Max = 0;
      pTVar14 = local_88;
      cVar11 = local_d0;
      local_78 = param_1;
    } while ((int)param_1.Min <= iStackX_14);
  }
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  if (cVar11 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (*(longlong *)pTVar14 != 0) {
    plVar10 = (longlong *)&pTVar14->field_0x10;
    if (*(longlong **)&pTVar14->field_0x28 != (longlong *)0x0) {
      plVar10 = *(longlong **)&pTVar14->field_0x28;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  return;
}

// FindTrianglesConnectedToSeeds @ 143601510

void __thiscall
UE::Geometry::FMeshConnectedComponents::FindTrianglesConnectedToSeeds
          (FMeshConnectedComponents *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TFunction<bool___cdecl(int,int)> *param_2)

{
  FDynamicMesh3 *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  bool bVar11;
  uchar local_88 [8];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_80;
  TFunction<bool___cdecl(int,int)> local_68;
  
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId96,
               "MeshConnectedComponents_FindConnectedTriangles_SeedTriangles",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Selections\\MeshConnectedComponents.cpp"
               ,0x60);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId96);
  }
  uVar8 = 0;
  local_88[0] = 0xff;
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = 0;
  local_80.ArrayMax = 0;
  iVar9 = (this->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
          (this->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::Init(&local_80,local_88,iVar9);
  uVar10 = uVar8;
  if (0 < iVar9) {
    do {
      pFVar1 = this->Mesh;
      uVar7 = (uint)uVar8;
      if (((-1 < (int)uVar7) &&
          ((int)uVar7 <
           (int)((pFVar1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                (pFVar1->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
         ((ushort)(*(short *)(*(longlong *)
                               ((pFVar1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                               + (uVar8 >> 9) * 8) + (ulonglong)(uVar7 & 0x1ff) * 2) - 1U) < 0xfffe)
         ) {
        uVar4 = 0;
        if ((int)uVar7 < local_80.ArrayNum) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_80.AllocatorInstance.Data[uVar10] = (FScriptContainerElement)0x0;
      }
      uVar8 = (ulonglong)(uVar7 + 1);
      uVar10 = uVar10 + 1;
    } while ((longlong)uVar10 < (longlong)iVar9);
  }
  local_68._0_8_ = *(undefined8 *)param_2;
  local_68._40_8_ = 0;
  if (local_68._0_8_ != 0) {
    puVar5 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar5 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar5)(puVar5,&local_68.field_0x10);
  }
  FindTriComponents(this,param_1,&local_80,&local_68);
  if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.AllocatorInstance.Data);
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (*(longlong *)param_2 != 0) {
    plVar6 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar6 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  return;
}

// FindVertComponent @ 143601710

void __thiscall
UE::Geometry::FMeshConnectedComponents::FindVertComponent
          (FMeshConnectedComponents *this,FComponent *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  uint local_68 [2];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_60;
  TArray<int,TSizedDefaultAllocator<32>_> *local_58;
  code *local_50;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> **local_48;
  FDynamicMesh3 *local_40;
  code **local_38;
  uint local_30;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId427,"FindVertComponents_Component",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Selections\\MeshConnectedComponents.cpp"
               ,0x1ab);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId427);
  }
  iVar5 = param_2->ArrayNum;
  while( true ) {
    if (iVar5 < 1) {
      if (bVar7) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    local_68[0] = *(uint *)((param_2->AllocatorInstance).Data + (longlong)param_2->ArrayNum * 4 + -4
                           );
    lVar6 = (longlong)(int)local_68[0];
    param_2->ArrayNum = param_2->ArrayNum + -1;
    uVar4 = 0;
    if ((int)local_68[0] < param_3->ArrayNum) {
      uVar4 = ~local_68[0] >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) break;
    (param_3->AllocatorInstance).Data[lVar6] = (FScriptContainerElement)0x2;
    pFVar1 = (param_1->Indices).AllocatorInstance.Data;
    if (((pFVar1 <= (FScriptContainerElement *)local_68) &&
        ((FScriptContainerElement *)local_68 < pFVar1 + (longlong)(param_1->Indices).ArrayMax * 4))
       && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = (param_1->Indices).ArrayNum;
    if (iVar5 == (param_1->Indices).ArrayMax) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,(ForAnyElementType *)param_1,&(param_1->Indices).ArrayMax);
    }
    (param_1->Indices).ArrayNum = iVar5 + 1;
    local_50 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FMeshConnectedComponents::FindVertComponent'::__l4::<lambda_1>,void,int>
               ::Call;
    *(uint *)((param_1->Indices).AllocatorInstance.Data + (longlong)iVar5 * 4) = local_68[0];
    local_48 = &local_60;
    local_40 = this->Mesh;
    local_38 = &local_50;
    local_30 = local_68[0];
    local_60 = param_3;
    local_58 = param_2;
    FSmallListSet::
    Enumerate<_UE::Geometry::FDynamicMesh3::EnumerateVertexVertices_::__l2::<lambda_1>_>
              (&local_40->VertexEdgeLists,local_68[0],(<lambda_1> *)&local_40);
    iVar5 = param_2->ArrayNum;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// FindVertComponent @ 143601960

void __thiscall
UE::Geometry::FMeshConnectedComponents::FindVertComponent
          (FMeshConnectedComponents *this,FComponent *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_3,
          TFunctionRef<bool___cdecl(int,int)> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  uint local_78 [2];
  code *local_70;
  uint **local_68;
  FDynamicMesh3 *local_60;
  code **local_58;
  uint local_50;
  uint *local_48;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_40;
  TFunctionRef<bool___cdecl(int,int)> *local_38;
  TArray<int,TSizedDefaultAllocator<32>_> *local_30;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId452,"FindVertComponents_Component_Filtered",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Selections\\MeshConnectedComponents.cpp"
               ,0x1c4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId452);
  }
  iVar5 = param_2->ArrayNum;
  while( true ) {
    if (iVar5 < 1) {
      if (bVar7) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    local_78[0] = *(uint *)((param_2->AllocatorInstance).Data + (longlong)param_2->ArrayNum * 4 + -4
                           );
    lVar6 = (longlong)(int)local_78[0];
    param_2->ArrayNum = param_2->ArrayNum + -1;
    uVar4 = 0;
    if ((int)local_78[0] < param_3->ArrayNum) {
      uVar4 = ~local_78[0] >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) break;
    (param_3->AllocatorInstance).Data[lVar6] = (FScriptContainerElement)0x2;
    pFVar1 = (param_1->Indices).AllocatorInstance.Data;
    if (((pFVar1 <= (FScriptContainerElement *)local_78) &&
        ((FScriptContainerElement *)local_78 < pFVar1 + (longlong)(param_1->Indices).ArrayMax * 4))
       && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = (param_1->Indices).ArrayNum;
    if (iVar5 == (param_1->Indices).ArrayMax) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,(ForAnyElementType *)param_1,&(param_1->Indices).ArrayMax);
    }
    (param_1->Indices).ArrayNum = iVar5 + 1;
    local_70 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FMeshConnectedComponents::FindVertComponent'::__l4::<lambda_1>,void,int>
               ::Call;
    *(uint *)((param_1->Indices).AllocatorInstance.Data + (longlong)iVar5 * 4) = local_78[0];
    local_48 = local_78;
    local_60 = this->Mesh;
    local_68 = &local_48;
    local_58 = &local_70;
    local_38 = param_4;
    local_50 = local_78[0];
    local_40 = param_3;
    local_30 = param_2;
    FSmallListSet::
    Enumerate<_UE::Geometry::FDynamicMesh3::EnumerateVertexVertices_::__l2::<lambda_1>_>
              (&local_60->VertexEdgeLists,local_78[0],(<lambda_1> *)&local_60);
    iVar5 = param_2->ArrayNum;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// FindVertComponents @ 143601be0

void __thiscall
UE::Geometry::FMeshConnectedComponents::FindVertComponents
          (FMeshConnectedComponents *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2,
          TFunction<bool___cdecl(int,int)> *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FMeshConnectedComponents *pFVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  FComponent *pFVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  TFunction<bool___cdecl(int,int)> *pTVar16;
  int iVar17;
  TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
  *pTVar18;
  int iVar19;
  bool bVar20;
  ForAnyElementType local_130;
  undefined8 local_128;
  undefined1 local_120 [4];
  uint local_11c;
  uint local_118;
  uint local_114;
  FMeshConnectedComponents *local_110;
  FComponent *local_108;
  TFunction<bool___cdecl(int,int)> *local_100;
  uint local_f8;
  FScriptContainerElement *local_f0;
  TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
  *local_e8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_e0;
  FScriptContainerElement *local_d8;
  code *local_d0;
  TFunction<bool___cdecl(int,int)> *local_c8;
  code *local_c0;
  uint **local_b8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_b0;
  ForAnyElementType *local_a8;
  code *local_a0;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> **local_98;
  FDynamicMesh3 *local_90;
  code **local_88;
  uint local_80;
  FDynamicMesh3 *local_78;
  code **local_70;
  uint local_68;
  uint *local_60;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_58;
  code **local_50;
  ForAnyElementType *local_48;
  
  bVar20 = -1 < CpuChannel->Enabled;
  local_110 = this;
  local_100 = param_3;
  local_e0 = param_1;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId389,"FindVertComponents_SeedList",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Selections\\MeshConnectedComponents.cpp"
               ,0x185);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId389);
  }
  pTVar18 = &this->Components;
  pFVar15 = (pTVar18->Array).AllocatorInstance.Data;
  local_e8 = pTVar18;
  for (iVar19 = (this->Components).Array.ArrayNum; iVar19 != 0; iVar19 = iVar19 + -1) {
    puVar2 = *(undefined8 **)pFVar15;
    if (puVar2 != (undefined8 *)0x0) {
      if ((void *)*puVar2 != (void *)0x0) {
        FMemory::Free((void *)*puVar2);
      }
      ::operator_delete(puVar2,0x10);
    }
    pFVar15 = pFVar15 + 8;
  }
  piVar1 = &(this->Components).Array.ArrayMax;
  (this->Components).Array.ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)pTVar18,0,piVar1);
  }
  local_130.Data = (FScriptContainerElement *)0x0;
  local_128._0_4_ = 0;
  local_128._4_4_ = 0;
  Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,0x100,&local_130,0,(int *)((longlong)&local_128 + 4));
  local_f8 = local_e0->ArrayNum;
  uVar12 = (ulonglong)(int)local_f8;
  pFVar15 = (local_e0->AllocatorInstance).Data;
  local_d8 = pFVar15 + uVar12 * 4;
  pTVar16 = local_100;
  do {
    pFVar3 = local_d8;
    local_f0 = pFVar15;
    if (local_e0->ArrayNum != (int)uVar12) {
      local_120[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_120);
    }
    if (pFVar15 == pFVar3) {
      if (local_130.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data);
      }
      if (bVar20) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (*(longlong *)local_100 != 0) {
        plVar13 = (longlong *)&local_100->field_0x10;
        if (*(longlong **)&local_100->field_0x28 != (longlong *)0x0) {
          plVar13 = *(longlong **)&local_100->field_0x28;
        }
        (**(code **)(*plVar13 + 0x10))();
      }
      return;
    }
    local_118 = *(uint *)pFVar15;
    lVar14 = (longlong)(int)local_118;
    if ((-1 < (int)local_118) && ((int)local_118 < param_2->ArrayNum)) {
      if (((int)local_118 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((param_2->AllocatorInstance).Data[lVar14] != (FScriptContainerElement)0xff) {
        if (((local_130.Data <= (FScriptContainerElement *)&local_118) &&
            ((FScriptContainerElement *)&local_118 < local_130.Data + (longlong)local_128._4_4_ * 4)
            ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((int)local_128 == local_128._4_4_) {
          local_128._0_4_ =
               Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_130,(int *)((longlong)&local_128 + 4));
        }
        lVar14 = (longlong)(int)local_128;
        local_128 = CONCAT44(local_128._4_4_,(int)local_128 + 1);
        *(uint *)(local_130.Data + lVar14 * 4) = local_118;
        lVar14 = (longlong)(int)local_118;
        uVar8 = 0;
        if ((int)local_118 < param_2->ArrayNum) {
          uVar8 = ~local_118 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (param_2->AllocatorInstance).Data[lVar14] = (FScriptContainerElement)0x1;
        pFVar11 = ::operator_new(0x10);
        if (pFVar11 == (FComponent *)0x0) {
          pFVar11 = (FComponent *)0x0;
        }
        else {
          (pFVar11->Indices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar11->Indices).ArrayNum = 0;
          (pFVar11->Indices).ArrayMax = 0;
        }
        if (*(longlong *)pTVar16 == 0) {
          bVar6 = -1 < CpuChannel->Enabled;
          if (bVar6) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId427,"FindVertComponents_Component",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Selections\\MeshConnectedComponents.cpp"
                       ,0x1ab);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId427);
          }
          pFVar5 = local_110;
          while (0 < (int)local_128) {
            iVar19 = (int)local_128 + -1;
            uVar8 = *(uint *)(local_130.Data + (longlong)iVar19 * 4);
            iVar9 = ((int)local_128 - iVar19) + -1;
            iVar17 = (int)local_128;
            if (iVar9 != 0) {
              memmove(local_130.Data + (longlong)iVar19 * 4,
                      local_130.Data + (longlong)iVar19 * 4 + 4,(longlong)iVar9 << 2);
              iVar17 = (int)local_128;
            }
            local_128 = CONCAT44(local_128._4_4_,iVar17 + -1);
            uVar10 = 0;
            if ((int)uVar8 < param_2->ArrayNum) {
              uVar10 = ~uVar8 >> 0x1f;
            }
            local_114 = uVar8;
            if ((uVar10 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            (param_2->AllocatorInstance).Data[(int)uVar8] = (FScriptContainerElement)0x2;
            pFVar15 = (pFVar11->Indices).AllocatorInstance.Data;
            if (((pFVar15 <= (FScriptContainerElement *)&local_114) &&
                ((FScriptContainerElement *)&local_114 <
                 pFVar15 + (longlong)(pFVar11->Indices).ArrayMax * 4)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar19 = (pFVar11->Indices).ArrayNum;
            if (iVar19 == (pFVar11->Indices).ArrayMax) {
              iVar19 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,(ForAnyElementType *)pFVar11,&(pFVar11->Indices).ArrayMax);
            }
            (pFVar11->Indices).ArrayNum = iVar19 + 1;
            local_a0 = Core::Private::Function::
                       TFunctionRefCaller<`UE::Geometry::FMeshConnectedComponents::FindVertComponent'::__l4::<lambda_1>,void,int>
                       ::Call;
            *(uint *)((pFVar11->Indices).AllocatorInstance.Data + (longlong)iVar19 * 4) = local_114;
            local_a8 = &local_130;
            local_78 = pFVar5->Mesh;
            local_98 = &local_b0;
            local_70 = &local_a0;
            local_68 = local_114;
            local_b0 = param_2;
            FSmallListSet::
            Enumerate<_UE::Geometry::FDynamicMesh3::EnumerateVertexVertices_::__l2::<lambda_1>_>
                      (&local_78->VertexEdgeLists,local_114,(<lambda_1> *)&local_78);
            pFVar15 = local_f0;
            pTVar16 = local_100;
            pTVar18 = local_e8;
            this = local_110;
          }
        }
        else {
          local_d0 = Core::Private::Function::
                     TFunctionRefCaller<TFunction<bool___cdecl(int,int)>,bool,int,int>::Call;
          bVar6 = -1 < CpuChannel->Enabled;
          local_c8 = pTVar16;
          if (bVar6) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId452,"FindVertComponents_Component_Filtered",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Selections\\MeshConnectedComponents.cpp"
                       ,0x1c4);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId452);
          }
          pFVar5 = local_110;
          while (0 < (int)local_128) {
            iVar19 = (int)local_128 + -1;
            uVar8 = *(uint *)(local_130.Data + (longlong)iVar19 * 4);
            iVar9 = ((int)local_128 - iVar19) + -1;
            iVar17 = (int)local_128;
            if (iVar9 != 0) {
              memmove(local_130.Data + (longlong)iVar19 * 4,
                      local_130.Data + (longlong)iVar19 * 4 + 4,(longlong)iVar9 << 2);
              iVar17 = (int)local_128;
            }
            local_128 = CONCAT44(local_128._4_4_,iVar17 + -1);
            uVar10 = 0;
            if ((int)uVar8 < param_2->ArrayNum) {
              uVar10 = ~uVar8 >> 0x1f;
            }
            local_11c = uVar8;
            if ((uVar10 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            (param_2->AllocatorInstance).Data[(int)uVar8] = (FScriptContainerElement)0x2;
            pFVar15 = (pFVar11->Indices).AllocatorInstance.Data;
            if (((pFVar15 <= (FScriptContainerElement *)&local_11c) &&
                ((FScriptContainerElement *)&local_11c <
                 pFVar15 + (longlong)(pFVar11->Indices).ArrayMax * 4)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar19 = (pFVar11->Indices).ArrayNum;
            if (iVar19 == (pFVar11->Indices).ArrayMax) {
              iVar19 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,(ForAnyElementType *)pFVar11,&(pFVar11->Indices).ArrayMax);
            }
            (pFVar11->Indices).ArrayNum = iVar19 + 1;
            local_c0 = Core::Private::Function::
                       TFunctionRefCaller<`UE::Geometry::FMeshConnectedComponents::FindVertComponent'::__l4::<lambda_1>,void,int>
                       ::Call;
            *(uint *)((pFVar11->Indices).AllocatorInstance.Data + (longlong)iVar19 * 4) = local_11c;
            local_60 = &local_11c;
            local_90 = pFVar5->Mesh;
            local_50 = &local_d0;
            local_48 = &local_130;
            local_b8 = &local_60;
            local_88 = &local_c0;
            local_80 = local_11c;
            local_58 = param_2;
            FSmallListSet::
            Enumerate<_UE::Geometry::FDynamicMesh3::EnumerateVertexVertices_::__l2::<lambda_1>_>
                      (&local_90->VertexEdgeLists,local_11c,(<lambda_1> *)&local_90);
            pFVar15 = local_f0;
            pTVar16 = local_100;
            pTVar18 = local_e8;
            this = local_110;
          }
        }
        if (bVar6) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        pFVar3 = (pTVar18->Array).AllocatorInstance.Data;
        piVar1 = &(pTVar18->Array).ArrayMax;
        local_108 = pFVar11;
        if (((pFVar3 <= (FScriptContainerElement *)&local_108) &&
            ((FScriptContainerElement *)&local_108 < pFVar3 + (longlong)*piVar1 * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar19 = (pTVar18->Array).ArrayNum;
        if (iVar19 == *piVar1) {
          iVar19 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)pTVar18,piVar1);
        }
        (pTVar18->Array).ArrayNum = iVar19 + 1;
        *(FComponent **)((pTVar18->Array).AllocatorInstance.Data + (longlong)iVar19 * 8) = local_108
        ;
        RemoveFromActiveSet(this,pFVar11,param_2);
        lVar14 = local_128;
        local_128._0_4_ = 0;
        if ((lVar14 < 0) && (local_128._4_4_ != 0)) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&local_130,0,(int *)((longlong)&local_128 + 4));
        }
      }
    }
    uVar12 = (ulonglong)local_f8;
    pFVar15 = pFVar15 + 4;
  } while( true );
}

// FindVertComponents @ 143602400

void __thiscall
UE::Geometry::FMeshConnectedComponents::FindVertComponents
          (FMeshConnectedComponents *this,FInterval1i param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2,
          TFunction<bool___cdecl(int,int)> *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  FMeshConnectedComponents *pFVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FComponent *pFVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
  *pTVar14;
  FScriptContainerElement *pFVar15;
  int *piVar16;
  int iVar17;
  bool bVar18;
  int iStackX_14;
  ForAnyElementType local_130;
  undefined8 local_128;
  uint local_120;
  uint local_11c;
  uint local_118 [2];
  FComponent *local_110;
  FMeshConnectedComponents *local_108;
  FInterval1i local_100;
  longlong local_f8;
  TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
  *local_f0;
  int *local_e8;
  TFunction<bool___cdecl(int,int)> *local_e0;
  code *local_d8;
  TFunction<bool___cdecl(int,int)> *local_d0;
  code *local_c8;
  uint **local_c0;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_b8;
  ForAnyElementType *local_b0;
  code *local_a8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> **local_a0;
  FDynamicMesh3 *local_98;
  code **local_90;
  uint local_88;
  FDynamicMesh3 *local_80;
  code **local_78;
  uint local_70;
  uint *local_68;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_60;
  code **local_58;
  ForAnyElementType *local_50;
  
  bVar18 = -1 < CpuChannel->Enabled;
  local_108 = this;
  local_100 = param_1;
  local_e0 = param_3;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId351,"FindVertComponents_ActiveRange",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Selections\\MeshConnectedComponents.cpp"
               ,0x15f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId351);
  }
  pTVar14 = &this->Components;
  pFVar15 = (pTVar14->Array).AllocatorInstance.Data;
  local_f0 = pTVar14;
  for (iVar17 = (this->Components).Array.ArrayNum; iVar17 != 0; iVar17 = iVar17 + -1) {
    puVar1 = *(undefined8 **)pFVar15;
    if (puVar1 != (undefined8 *)0x0) {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      ::operator_delete(puVar1,0x10);
    }
    pFVar15 = pFVar15 + 8;
  }
  piVar16 = &(this->Components).Array.ArrayMax;
  (this->Components).Array.ArrayNum = 0;
  local_e8 = piVar16;
  if (*piVar16 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)pTVar14,0,piVar16);
  }
  local_130.Data = (FScriptContainerElement *)0x0;
  local_128._0_4_ = 0;
  local_128._4_4_ = 0;
  Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,0x100,&local_130,0,(int *)((longlong)&local_128 + 4));
  iStackX_14 = param_1.Max;
  if (param_1.Min <= iStackX_14) {
    lVar11 = (longlong)param_1.Min;
    do {
      uVar12 = param_1.Min;
      uVar6 = 0;
      if ((int)uVar12 < param_2->ArrayNum) {
        uVar6 = ~uVar12 >> 0x1f;
      }
      local_f8 = lVar11;
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((param_2->AllocatorInstance).Data[lVar11] != (FScriptContainerElement)0xff) {
        local_11c = uVar12;
        if (((local_130.Data <= (FScriptContainerElement *)&local_11c) &&
            ((FScriptContainerElement *)&local_11c < local_130.Data + (longlong)local_128._4_4_ * 4)
            ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if ((int)local_128 == local_128._4_4_) {
          local_128._0_4_ =
               Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_130,(int *)((longlong)&local_128 + 4));
        }
        lVar9 = (longlong)(int)local_128;
        local_128 = CONCAT44(local_128._4_4_,(int)local_128 + 1);
        *(uint *)(local_130.Data + lVar9 * 4) = local_11c;
        lVar9 = (longlong)(int)local_11c;
        uVar6 = 0;
        if ((int)local_11c < param_2->ArrayNum) {
          uVar6 = ~local_11c >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        (param_2->AllocatorInstance).Data[lVar9] = (FScriptContainerElement)0x1;
        pFVar8 = ::operator_new(0x10);
        if (pFVar8 == (FComponent *)0x0) {
          pFVar8 = (FComponent *)0x0;
        }
        else {
          (pFVar8->Indices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar8->Indices).ArrayNum = 0;
          (pFVar8->Indices).ArrayMax = 0;
        }
        if (*(longlong *)local_e0 == 0) {
          bVar4 = -1 < CpuChannel->Enabled;
          if (bVar4) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId427,"FindVertComponents_Component",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Selections\\MeshConnectedComponents.cpp"
                       ,0x1ab);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId427);
          }
          pFVar3 = local_108;
          if (0 < (int)local_128) {
            do {
              iVar17 = (int)local_128 + -1;
              uVar12 = *(uint *)(local_130.Data + (longlong)iVar17 * 4);
              iVar7 = ((int)local_128 - iVar17) + -1;
              iVar13 = (int)local_128;
              if (iVar7 != 0) {
                memmove(local_130.Data + (longlong)iVar17 * 4,
                        local_130.Data + (longlong)iVar17 * 4 + 4,(longlong)iVar7 << 2);
                iVar13 = (int)local_128;
              }
              local_128 = CONCAT44(local_128._4_4_,iVar13 + -1);
              uVar6 = 0;
              if ((int)uVar12 < param_2->ArrayNum) {
                uVar6 = ~uVar12 >> 0x1f;
              }
              local_118[0] = uVar12;
              if ((uVar6 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              (param_2->AllocatorInstance).Data[(int)uVar12] = (FScriptContainerElement)0x2;
              pFVar15 = (pFVar8->Indices).AllocatorInstance.Data;
              if (((pFVar15 <= (FScriptContainerElement *)local_118) &&
                  ((FScriptContainerElement *)local_118 <
                   pFVar15 + (longlong)(pFVar8->Indices).ArrayMax * 4)) &&
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
              iVar17 = (pFVar8->Indices).ArrayNum;
              if (iVar17 == (pFVar8->Indices).ArrayMax) {
                iVar17 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,(ForAnyElementType *)pFVar8,&(pFVar8->Indices).ArrayMax);
              }
              (pFVar8->Indices).ArrayNum = iVar17 + 1;
              local_a8 = Core::Private::Function::
                         TFunctionRefCaller<`UE::Geometry::FMeshConnectedComponents::FindVertComponent'::__l4::<lambda_1>,void,int>
                         ::Call;
              *(uint *)((pFVar8->Indices).AllocatorInstance.Data + (longlong)iVar17 * 4) =
                   local_118[0];
              local_b0 = &local_130;
              local_80 = pFVar3->Mesh;
              local_a0 = &local_b8;
              local_78 = &local_a8;
              local_70 = local_118[0];
              local_b8 = param_2;
              FSmallListSet::
              Enumerate<_UE::Geometry::FDynamicMesh3::EnumerateVertexVertices_::__l2::<lambda_1>_>
                        (&local_80->VertexEdgeLists,local_118[0],(<lambda_1> *)&local_80);
            } while (0 < (int)local_128);
            goto LAB_143602a94;
          }
        }
        else {
          local_d0 = local_e0;
          local_d8 = Core::Private::Function::
                     TFunctionRefCaller<TFunction<bool___cdecl(int,int)>,bool,int,int>::Call;
          bVar4 = -1 < CpuChannel->Enabled;
          if (bVar4) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId452,"FindVertComponents_Component_Filtered",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Selections\\MeshConnectedComponents.cpp"
                       ,0x1c4);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId452);
          }
          pFVar3 = local_108;
          if (0 < (int)local_128) {
            do {
              iVar17 = (int)local_128 + -1;
              uVar12 = *(uint *)(local_130.Data + (longlong)iVar17 * 4);
              iVar7 = ((int)local_128 - iVar17) + -1;
              iVar13 = (int)local_128;
              if (iVar7 != 0) {
                memmove(local_130.Data + (longlong)iVar17 * 4,
                        local_130.Data + (longlong)iVar17 * 4 + 4,(longlong)iVar7 << 2);
                iVar13 = (int)local_128;
              }
              local_128 = CONCAT44(local_128._4_4_,iVar13 + -1);
              uVar6 = 0;
              if ((int)uVar12 < param_2->ArrayNum) {
                uVar6 = ~uVar12 >> 0x1f;
              }
              local_120 = uVar12;
              if ((uVar6 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              (param_2->AllocatorInstance).Data[(int)uVar12] = (FScriptContainerElement)0x2;
              pFVar15 = (pFVar8->Indices).AllocatorInstance.Data;
              if (((pFVar15 <= (FScriptContainerElement *)&local_120) &&
                  ((FScriptContainerElement *)&local_120 <
                   pFVar15 + (longlong)(pFVar8->Indices).ArrayMax * 4)) &&
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
              iVar17 = (pFVar8->Indices).ArrayNum;
              if (iVar17 == (pFVar8->Indices).ArrayMax) {
                iVar17 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,(ForAnyElementType *)pFVar8,&(pFVar8->Indices).ArrayMax);
              }
              (pFVar8->Indices).ArrayNum = iVar17 + 1;
              local_c8 = Core::Private::Function::
                         TFunctionRefCaller<`UE::Geometry::FMeshConnectedComponents::FindVertComponent'::__l4::<lambda_1>,void,int>
                         ::Call;
              *(uint *)((pFVar8->Indices).AllocatorInstance.Data + (longlong)iVar17 * 4) = local_120
              ;
              local_68 = &local_120;
              local_98 = pFVar3->Mesh;
              local_58 = &local_d8;
              local_50 = &local_130;
              local_c0 = &local_68;
              local_90 = &local_c8;
              local_88 = local_120;
              local_60 = param_2;
              FSmallListSet::
              Enumerate<_UE::Geometry::FDynamicMesh3::EnumerateVertexVertices_::__l2::<lambda_1>_>
                        (&local_98->VertexEdgeLists,local_120,(<lambda_1> *)&local_98);
            } while (0 < (int)local_128);
LAB_143602a94:
            uVar12 = local_100.Min;
            lVar11 = local_f8;
            pTVar14 = local_f0;
            piVar16 = local_e8;
          }
        }
        if (bVar4) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        pFVar15 = (pTVar14->Array).AllocatorInstance.Data;
        local_110 = pFVar8;
        if (((pFVar15 <= (FScriptContainerElement *)&local_110) &&
            ((FScriptContainerElement *)&local_110 < pFVar15 + (longlong)*piVar16 * 8)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar17 = (pTVar14->Array).ArrayNum;
        if (iVar17 == *piVar16) {
          iVar17 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)pTVar14,piVar16);
        }
        (pTVar14->Array).ArrayNum = iVar17 + 1;
        *(FComponent **)((pTVar14->Array).AllocatorInstance.Data + (longlong)iVar17 * 8) = local_110
        ;
        RemoveFromActiveSet(local_108,pFVar8,param_2);
        lVar9 = local_128;
        local_128._0_4_ = 0;
        if ((lVar9 < 0) && (local_128._4_4_ != 0)) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&local_130,0,(int *)((longlong)&local_128 + 4));
        }
      }
      param_1.Min = uVar12 + 1;
      param_1.Max = 0;
      lVar11 = lVar11 + 1;
      local_100 = param_1;
      local_f8 = lVar11;
    } while ((int)param_1.Min <= iStackX_14);
  }
  if (local_130.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data);
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (*(longlong *)local_e0 != 0) {
    plVar10 = (longlong *)&local_e0->field_0x10;
    if (*(longlong **)&local_e0->field_0x28 != (longlong *)0x0) {
      plVar10 = *(longlong **)&local_e0->field_0x28;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  return;
}

// FindVerticesConnectedToSeeds @ 143602c10

void __thiscall
UE::Geometry::FMeshConnectedComponents::FindVerticesConnectedToSeeds
          (FMeshConnectedComponents *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TFunction<bool___cdecl(int,int)> *param_2)

{
  FDynamicMesh3 *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  bool bVar11;
  uchar local_88 [8];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_80;
  TFunction<bool___cdecl(int,int)> local_68;
  
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId186,
               "MeshConnectedComponents_FindConnectedVertices_SeedVertices",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Selections\\MeshConnectedComponents.cpp"
               ,0xba);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId186);
  }
  uVar8 = 0;
  local_88[0] = 0xff;
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = 0;
  local_80.ArrayMax = 0;
  iVar9 = (this->Mesh->VertexRefCounts).RefCounts.CurBlock * 0x200 +
          (this->Mesh->VertexRefCounts).RefCounts.CurBlockUsed;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::Init(&local_80,local_88,iVar9);
  uVar10 = uVar8;
  if (0 < iVar9) {
    do {
      pFVar1 = this->Mesh;
      uVar7 = (uint)uVar8;
      if (((-1 < (int)uVar7) &&
          ((int)uVar7 <
           (int)((pFVar1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                (pFVar1->VertexRefCounts).RefCounts.CurBlockUsed))) &&
         ((ushort)(*(short *)(*(longlong *)
                               ((pFVar1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                               (uVar8 >> 9) * 8) + (ulonglong)(uVar7 & 0x1ff) * 2) - 1U) < 0xfffe))
      {
        uVar4 = 0;
        if ((int)uVar7 < local_80.ArrayNum) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_80.AllocatorInstance.Data[uVar10] = (FScriptContainerElement)0x0;
      }
      uVar8 = (ulonglong)(uVar7 + 1);
      uVar10 = uVar10 + 1;
    } while ((longlong)uVar10 < (longlong)iVar9);
  }
  local_68._0_8_ = *(undefined8 *)param_2;
  local_68._40_8_ = 0;
  if (local_68._0_8_ != 0) {
    puVar5 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar5 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar5)(puVar5,&local_68.field_0x10);
  }
  FindVertComponents(this,param_1,&local_80,&local_68);
  if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.AllocatorInstance.Data);
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (*(longlong *)param_2 != 0) {
    plVar6 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar6 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  return;
}

// GetLargestIndexByCount @ 1436070c0

int __thiscall
UE::Geometry::FMeshConnectedComponents::GetLargestIndexByCount(FMeshConnectedComponents *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  
  iVar3 = (this->Components).Array.ArrayNum;
  if (iVar3 == 0) {
    return -1;
  }
  uVar5 = 0;
  if ((iVar3 < 1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  uVar6 = 1;
  lVar8 = (longlong)(this->Components).Array.ArrayNum;
  iVar3 = *(int *)(*(longlong *)(this->Components).Array.AllocatorInstance.Data + 8);
  if (1 < lVar8) {
    lVar7 = 1;
    uVar5 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->Components).Array.ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
      if (iVar3 < *(int *)(*(longlong *)
                            ((this->Components).Array.AllocatorInstance.Data + lVar7 * 8) + 8)) {
        uVar5 = 0;
        if ((int)uVar6 < (this->Components).Array.ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          iVar3 = (*pcVar1)();
          return iVar3;
        }
        iVar3 = *(int *)(*(longlong *)((this->Components).Array.AllocatorInstance.Data + lVar7 * 8)
                        + 8);
        uVar5 = uVar6;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar8);
  }
  return uVar5;
}

// GrowToConnectedEdges @ 143607760

void __cdecl
UE::Geometry::FMeshConnectedComponents::GrowToConnectedEdges
          (FDynamicMesh3 *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4,
          TFunctionRef<bool___cdecl(int,int)> *param_5)

{
  int iVar1;
  code *pcVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  bool bVar4;
  longlong lVar5;
  uint local_res10 [4];
  TArray<int,TSizedDefaultAllocator<32>_> *local_res20;
  int local_a8 [2];
  undefined8 local_a0;
  TArray<int,TSizedDefaultAllocator<32>_> local_98;
  FScriptContainerElement *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  code *local_78;
  uint **local_70;
  TArrayView<int_const_,int> local_68;
  uint *local_58;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_50;
  TFunctionRef<bool___cdecl(int,int)> *local_48;
  TArray<int,TSizedDefaultAllocator<32>_> **local_40;
  
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  local_res20 = &local_98;
  if (param_4 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    local_res20 = param_4;
  }
  local_res20->ArrayNum = 0;
  if (local_res20->ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&local_res20->AllocatorInstance,0,&local_res20->ArrayMax);
  }
  TArray<int,TSizedDefaultAllocator<32>_>::Insert<TSizedDefaultAllocator<32>_>
            (local_res20,param_2,0);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(param_3);
  local_88 = (param_2->AllocatorInstance).Data;
  iStack_80 = param_2->ArrayNum;
  if ((iStack_80 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_68._12_4_ = uStack_7c;
  local_68.ArrayNum = iStack_80;
  local_68.DataPtr = (int *)local_88;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Append(param_3,&local_68);
  iVar1 = local_res20->ArrayNum;
  pTVar3 = local_res20;
  while( true ) {
    local_res20 = pTVar3;
    if (iVar1 < 1) {
      if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.AllocatorInstance.Data);
      }
      return;
    }
    if ((pTVar3->ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    local_res10[0] =
         *(uint *)((pTVar3->AllocatorInstance).Data + (longlong)pTVar3->ArrayNum * 4 + -4);
    pTVar3->ArrayNum = pTVar3->ArrayNum + -1;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (param_3,local_a8,(bool *)local_res10);
    local_78 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FMeshConnectedComponents::GrowToConnectedEdges'::__l6::<lambda_1>,void,int>
               ::Call;
    local_70 = &local_58;
    local_a0 = *(undefined8 *)
                (*(longlong *)
                  ((param_1->Edges).Blocks.AllocatorInstance.Data +
                  (ulonglong)(local_res10[0] >> 9) * 8) + (ulonglong)(local_res10[0] & 0x1ff) * 0x10
                );
    lVar5 = 0;
    do {
      local_58 = local_res10;
      local_40 = &local_res20;
      local_48 = param_5;
      local_50 = param_3;
      FSmallListSet::Enumerate<TFunctionRef<void___cdecl(int)>_>
                (&param_1->VertexEdgeLists,*(int *)((longlong)&local_a0 + lVar5 * 4),
                 (TFunctionRef<void___cdecl(int)> *)&local_78);
      lVar5 = lVar5 + 1;
    } while (lVar5 < 2);
    iVar1 = local_res20->ArrayNum;
    pTVar3 = local_res20;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// GrowToConnectedTriangles @ 1436079a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Geometry::FMeshConnectedComponents::GrowToConnectedTriangles
          (FDynamicMesh3 *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_5,
          TFunctionRef<bool___cdecl(int,int)> *param_6)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<FSetElementId> FVar3;
  code *pcVar4;
  FDynamicMesh3 *this;
  bool bVar5;
  char cVar6;
  int iVar7;
  ForElementType<FSetElementId> FVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *this_00;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_01;
  undefined1 auStackY_168 [32];
  uint local_118;
  int local_114;
  uint local_110 [2];
  int local_108 [2];
  int local_100 [2];
  FIndex3i_u_0 local_f8;
  TArray<int,TSizedDefaultAllocator<32>_> local_e8;
  FDynamicMesh3 *local_d8;
  FScriptContainerElement *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  TArrayView<int_const_,int> local_b8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  this_00 = &local_e8;
  if (param_4 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    this_00 = param_4;
  }
  local_d8 = param_1;
  piVar1 = &this_00->ArrayMax;
  this_00->ArrayNum = 0;
  if (this_00->ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&this_00->AllocatorInstance,0,piVar1);
  }
  TArray<int,TSizedDefaultAllocator<32>_>::Insert<TSizedDefaultAllocator<32>_>(this_00,param_2,0);
  local_a8.Elements._0_8_ = 0;
  local_a8.Elements._8_8_ = 0;
  local_a8.Elements._32_8_ = 0;
  local_a8.Elements._40_4_ = 0;
  local_a8.Elements._52_4_ = 0;
  local_a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_a8.HashSize = 0;
  this_01 = &local_a8;
  if (param_5 != (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
    this_01 = param_5;
  }
  local_a8.Elements._44_4_ = 0x80;
  local_a8.Elements._48_4_ = 0xffffffff;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(this_01);
  local_c8 = (param_2->AllocatorInstance).Data;
  iStack_c0 = param_2->ArrayNum;
  if ((iStack_c0 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_b8._12_4_ = uStack_bc;
  local_b8.ArrayNum = iStack_c0;
  local_b8.DataPtr = (int *)local_c8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Append(this_01,&local_b8);
  this = local_d8;
  iVar7 = this_00->ArrayNum;
  do {
    if (iVar7 < 1) {
      local_a8.HashSize = 0;
      if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_a8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_a8.Elements);
      if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.AllocatorInstance.Data);
      }
      return;
    }
    local_114 = *(int *)((this_00->AllocatorInstance).Data + (longlong)this_00->ArrayNum * 4 + -4);
    this_00->ArrayNum = this_00->ArrayNum + -1;
    pFVar2 = (param_3->AllocatorInstance).Data;
    if (((pFVar2 <= (FScriptContainerElement *)&local_114) &&
        ((FScriptContainerElement *)&local_114 < pFVar2 + (longlong)param_3->ArrayMax * 4)) &&
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
    iVar7 = param_3->ArrayNum;
    if (iVar7 == param_3->ArrayMax) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar7 + 1;
    *(int *)((param_3->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_114;
    FDynamicMesh3::GetTriNeighbourTris(this,(FIndex3i *)&local_f8._s_0,local_114);
    local_118 = local_f8._s_0.A;
    if (local_f8._s_0.A != 0xffffffff) {
      if (*(int *)&(this_01->Elements).field_0x8 != *(int *)&(this_01->Elements).field_0x34) {
        FVar3 = (this_01->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this_01->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar3;
        }
        iVar7 = *(int *)((longlong)FVar8 + (ulonglong)(this_01->HashSize - 1U & local_f8._s_0.A) * 4
                        );
        if (iVar7 != -1) {
          do {
            if (*(uint *)(*(longlong *)&this_01->Elements + (longlong)iVar7 * 0xc) ==
                local_f8._s_0.A) goto LAB_143607ccc;
            iVar7 = *(int *)(*(longlong *)&this_01->Elements + 4 + (longlong)iVar7 * 0xc);
          } while (iVar7 != -1);
        }
      }
      local_108[0] = local_114;
      local_110[0] = local_f8._s_0.A;
      cVar6 = (**(code **)param_6)(*(undefined8 *)&param_6->field_0x8,local_108,local_110);
      if (cVar6 != '\0') {
        pFVar2 = (this_00->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_118) &&
            ((FScriptContainerElement *)&local_118 < pFVar2 + (longlong)*piVar1 * 4)) &&
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
        iVar7 = this_00->ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&this_00->AllocatorInstance,piVar1);
        }
        this_00->ArrayNum = iVar7 + 1;
        *(uint *)((this_00->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_118;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (this_01,local_100,(bool *)&local_118);
      }
    }
LAB_143607ccc:
    local_118 = local_f8._s_0.B;
    if (local_f8._s_0.B != 0xffffffff) {
      if (*(int *)&(this_01->Elements).field_0x8 != *(int *)&(this_01->Elements).field_0x34) {
        FVar3 = (this_01->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this_01->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar3;
        }
        iVar7 = *(int *)((longlong)FVar8 + (ulonglong)(this_01->HashSize - 1U & local_f8._s_0.B) * 4
                        );
        if (iVar7 != -1) {
          do {
            if (*(uint *)(*(longlong *)&this_01->Elements + (longlong)iVar7 * 0xc) ==
                local_f8._s_0.B) goto LAB_143607dfc;
            iVar7 = *(int *)(*(longlong *)&this_01->Elements + 4 + (longlong)iVar7 * 0xc);
          } while (iVar7 != -1);
        }
      }
      local_108[0] = local_114;
      local_110[0] = local_f8._s_0.B;
      cVar6 = (**(code **)param_6)(*(undefined8 *)&param_6->field_0x8,local_108,local_110);
      if (cVar6 != '\0') {
        pFVar2 = (this_00->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_118) &&
            ((FScriptContainerElement *)&local_118 < pFVar2 + (longlong)*piVar1 * 4)) &&
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
        iVar7 = this_00->ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&this_00->AllocatorInstance,piVar1);
        }
        this_00->ArrayNum = iVar7 + 1;
        *(uint *)((this_00->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_118;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (this_01,local_100,(bool *)&local_118);
      }
    }
LAB_143607dfc:
    local_118 = local_f8._s_0.C;
    if (local_f8._s_0.C != 0xffffffff) {
      if (*(int *)&(this_01->Elements).field_0x8 != *(int *)&(this_01->Elements).field_0x34) {
        FVar3 = (this_01->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this_01->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar3;
        }
        iVar7 = *(int *)((longlong)FVar8 + (ulonglong)(this_01->HashSize - 1U & local_f8._s_0.C) * 4
                        );
        if (iVar7 != -1) {
          do {
            if (*(uint *)(*(longlong *)&this_01->Elements + (longlong)iVar7 * 0xc) ==
                local_f8._s_0.C) goto LAB_143607f2c;
            iVar7 = *(int *)(*(longlong *)&this_01->Elements + 4 + (longlong)iVar7 * 0xc);
          } while (iVar7 != -1);
        }
      }
      local_108[0] = local_114;
      local_110[0] = local_f8._s_0.C;
      cVar6 = (**(code **)param_6)(*(undefined8 *)&param_6->field_0x8,local_108,local_110);
      if (cVar6 != '\0') {
        pFVar2 = (this_00->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_118) &&
            ((FScriptContainerElement *)&local_118 < pFVar2 + (longlong)*piVar1 * 4)) &&
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
        iVar7 = this_00->ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&this_00->AllocatorInstance,piVar1);
        }
        this_00->ArrayNum = iVar7 + 1;
        *(uint *)((this_00->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_118;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (this_01,local_100,(bool *)&local_118);
      }
    }
LAB_143607f2c:
    iVar7 = this_00->ArrayNum;
  } while( true );
}

// GrowToConnectedTriangles @ 143607f90

void __cdecl
UE::Geometry::FMeshConnectedComponents::GrowToConnectedTriangles
          (FDynamicMesh3 *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4,
          TFunctionRef<bool___cdecl(int,int)> *param_5)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  ForElementType<FSetElementId> FVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *this;
  uint local_res10 [2];
  int local_res20 [2];
  uint local_78;
  int local_74;
  int local_70;
  int local_6c;
  FIndex3i_u_0 local_68;
  TArray<int,TSizedDefaultAllocator<32>_> local_58;
  FScriptContainerElement *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  TArrayView<int_const_,int> local_38;
  
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  this = &local_58;
  if (param_4 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    this = param_4;
  }
  piVar1 = &this->ArrayMax;
  this->ArrayNum = 0;
  if (this->ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&this->AllocatorInstance,0,piVar1);
  }
  TArray<int,TSizedDefaultAllocator<32>_>::Insert<TSizedDefaultAllocator<32>_>(this,param_2,0);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(param_3);
  local_48 = (param_2->AllocatorInstance).Data;
  iStack_40 = param_2->ArrayNum;
  if ((iStack_40 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_38._12_4_ = uStack_3c;
  local_38.ArrayNum = iStack_40;
  local_38.DataPtr = (int *)local_48;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Append(param_3,&local_38);
  iVar8 = this->ArrayNum;
  do {
    if (iVar8 < 1) {
      if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      return;
    }
    iVar8 = *(int *)((this->AllocatorInstance).Data + (longlong)this->ArrayNum * 4 + -4);
    this->ArrayNum = this->ArrayNum + -1;
    local_74 = iVar8;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (param_3,&local_6c,(bool *)&local_74);
    FDynamicMesh3::GetTriNeighbourTris(param_1,(FIndex3i *)&local_68._s_0,iVar8);
    local_78 = local_68._s_0.A;
    if (local_68._s_0.A != 0xffffffff) {
      if (*(int *)&(param_3->Elements).field_0x8 != *(int *)&(param_3->Elements).field_0x34) {
        FVar2 = (param_3->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&param_3->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar2;
        }
        iVar7 = *(int *)((longlong)FVar9 + (ulonglong)(param_3->HashSize - 1U & local_68._s_0.A) * 4
                        );
        if (iVar7 != -1) {
          do {
            if (*(uint *)(*(longlong *)&param_3->Elements + (longlong)iVar7 * 0xc) ==
                local_68._s_0.A) goto LAB_1436081d0;
            iVar7 = *(int *)(*(longlong *)&param_3->Elements + 4 + (longlong)iVar7 * 0xc);
          } while (iVar7 != -1);
        }
      }
      local_res10[0] = local_68._s_0.A;
      local_res20[0] = iVar8;
      cVar6 = (**(code **)param_5)(*(undefined8 *)&param_5->field_0x8,local_res20,local_res10);
      if (cVar6 != '\0') {
        pFVar3 = (this->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_78) &&
            ((FScriptContainerElement *)&local_78 < pFVar3 + (longlong)*piVar1 * 4)) &&
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
        iVar7 = this->ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&this->AllocatorInstance,piVar1);
        }
        this->ArrayNum = iVar7 + 1;
        *(uint *)((this->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_78;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (param_3,&local_70,(bool *)&local_78);
      }
    }
LAB_1436081d0:
    local_78 = local_68._s_0.B;
    if (local_68._s_0.B != 0xffffffff) {
      if (*(int *)&(param_3->Elements).field_0x8 != *(int *)&(param_3->Elements).field_0x34) {
        FVar2 = (param_3->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&param_3->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar2;
        }
        iVar7 = *(int *)((longlong)FVar9 + (ulonglong)(param_3->HashSize - 1U & local_68._s_0.B) * 4
                        );
        if (iVar7 != -1) {
          do {
            if (*(uint *)(*(longlong *)&param_3->Elements + (longlong)iVar7 * 0xc) ==
                local_68._s_0.B) goto LAB_1436082f0;
            iVar7 = *(int *)(*(longlong *)&param_3->Elements + 4 + (longlong)iVar7 * 0xc);
          } while (iVar7 != -1);
        }
      }
      local_res10[0] = local_68._s_0.B;
      local_res20[0] = iVar8;
      cVar6 = (**(code **)param_5)(*(undefined8 *)&param_5->field_0x8,local_res20,local_res10);
      if (cVar6 != '\0') {
        pFVar3 = (this->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_78) &&
            ((FScriptContainerElement *)&local_78 < pFVar3 + (longlong)*piVar1 * 4)) &&
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
        iVar7 = this->ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&this->AllocatorInstance,piVar1);
        }
        this->ArrayNum = iVar7 + 1;
        *(uint *)((this->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_78;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (param_3,&local_70,(bool *)&local_78);
      }
    }
LAB_1436082f0:
    local_78 = local_68._s_0.C;
    if (local_68._s_0.C != 0xffffffff) {
      if (*(int *)&(param_3->Elements).field_0x8 != *(int *)&(param_3->Elements).field_0x34) {
        FVar2 = (param_3->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&param_3->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar2;
        }
        iVar7 = *(int *)((longlong)FVar9 + (ulonglong)(param_3->HashSize - 1U & local_68._s_0.C) * 4
                        );
        if (iVar7 != -1) {
          do {
            if (*(uint *)(*(longlong *)&param_3->Elements + (longlong)iVar7 * 0xc) ==
                local_68._s_0.C) goto LAB_14360840d;
            iVar7 = *(int *)(*(longlong *)&param_3->Elements + 4 + (longlong)iVar7 * 0xc);
          } while (iVar7 != -1);
        }
      }
      local_res10[0] = local_68._s_0.C;
      local_res20[0] = iVar8;
      cVar6 = (**(code **)param_5)(*(undefined8 *)&param_5->field_0x8,local_res20,local_res10);
      if (cVar6 != '\0') {
        pFVar3 = (this->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_78) &&
            ((FScriptContainerElement *)&local_78 < pFVar3 + (longlong)*piVar1 * 4)) &&
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
        iVar8 = this->ArrayNum;
        if (iVar8 == *piVar1) {
          iVar8 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&this->AllocatorInstance,piVar1);
        }
        this->ArrayNum = iVar8 + 1;
        *(uint *)((this->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_78;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (param_3,&local_70,(bool *)&local_78);
      }
    }
LAB_14360840d:
    iVar8 = this->ArrayNum;
  } while( true );
}

// GrowToConnectedVertices @ 143608470

void __cdecl
UE::Geometry::FMeshConnectedComponents::GrowToConnectedVertices
          (FDynamicMesh3 *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4,
          TFunctionRef<bool___cdecl(int,int)> *param_5)

{
  int iVar1;
  code *pcVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  bool bVar4;
  int local_res10 [4];
  TArray<int,TSizedDefaultAllocator<32>_> *local_res20;
  TArray<int,TSizedDefaultAllocator<32>_> local_c8;
  int local_b8 [4];
  FScriptContainerElement *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  code *local_98;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **local_90;
  FDynamicMesh3 *local_88;
  code **local_80;
  int local_78;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_70;
  TFunctionRef<bool___cdecl(int,int)> *local_68;
  int *local_60;
  TArray<int,TSizedDefaultAllocator<32>_> **local_58;
  TArrayView<int_const_,int> local_48;
  
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 0;
  local_res20 = &local_c8;
  if (param_4 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    local_res20 = param_4;
  }
  local_res20->ArrayNum = 0;
  if (local_res20->ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&local_res20->AllocatorInstance,0,&local_res20->ArrayMax);
  }
  TArray<int,TSizedDefaultAllocator<32>_>::Insert<TSizedDefaultAllocator<32>_>
            (local_res20,param_2,0);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(param_3);
  local_a8 = (param_2->AllocatorInstance).Data;
  iStack_a0 = param_2->ArrayNum;
  if ((iStack_a0 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_48._12_4_ = uStack_9c;
  local_48.ArrayNum = iStack_a0;
  local_48.DataPtr = (int *)local_a8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Append(param_3,&local_48);
  iVar1 = local_res20->ArrayNum;
  pTVar3 = local_res20;
  while( true ) {
    local_res20 = pTVar3;
    if (iVar1 < 1) {
      if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.AllocatorInstance.Data);
      }
      return;
    }
    if ((pTVar3->ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    local_res10[0] =
         *(int *)((pTVar3->AllocatorInstance).Data + (longlong)pTVar3->ArrayNum * 4 + -4);
    pTVar3->ArrayNum = pTVar3->ArrayNum + -1;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (param_3,local_b8,(bool *)local_res10);
    local_60 = local_res10;
    local_58 = &local_res20;
    local_90 = &local_70;
    local_68 = param_5;
    local_80 = &local_98;
    local_98 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FMeshConnectedComponents::GrowToConnectedVertices'::__l4::<lambda_1>,void,int>
               ::Call;
    local_78 = local_res10[0];
    local_88 = param_1;
    local_70 = param_3;
    FSmallListSet::
    Enumerate<_UE::Geometry::FDynamicMesh3::EnumerateVertexVertices_::__l2::<lambda_1>_>
              (&param_1->VertexEdgeLists,local_res10[0],(<lambda_1> *)&local_88);
    iVar1 = local_res20->ArrayNum;
    pTVar3 = local_res20;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// InitializeFromTriangleComponents @ 14360b650

bool __thiscall
UE::Geometry::FMeshConnectedComponents::InitializeFromTriangleComponents
          (FMeshConnectedComponents *this,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2,bool param_3)

{
  TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
  *this_00;
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  FDynamicMesh3 *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  uint *puVar12;
  FScriptContainerElement *pFVar13;
  int *piVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res20 [8];
  undefined1 local_58;
  undefined1 local_57 [7];
  FScriptContainerElement *local_50;
  int *local_48;
  
  local_48 = &param_1->ArrayNum;
  if (param_3) {
    iVar3 = *local_48;
    pFVar15 = (param_1->AllocatorInstance).Data;
    pFVar16 = pFVar15 + (longlong)iVar3 * 0x10;
    while( true ) {
      if (param_1->ArrayNum != iVar3) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TArray<int,TSizedDefaultAllocator<32>_>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (pFVar15 == pFVar16) break;
      puVar12 = *(uint **)pFVar15;
      iVar10 = *(int *)(pFVar15 + 8);
      puVar2 = puVar12 + iVar10;
      while( true ) {
        if (*(int *)(pFVar15 + 8) != iVar10) {
          local_58 = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_58);
        }
        if (puVar12 == puVar2) break;
        uVar4 = *puVar12;
        pFVar5 = this->Mesh;
        if ((((int)uVar4 < 0) ||
            ((int)((pFVar5->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                  (pFVar5->TriangleRefCounts).RefCounts.CurBlockUsed) <= (int)uVar4)) ||
           (0xfffd < (ushort)(*(short *)(*(longlong *)
                                          ((pFVar5->TriangleRefCounts).RefCounts.Blocks.
                                           AllocatorInstance.Data + (ulonglong)(uVar4 >> 9) * 8) +
                                        (ulonglong)(uVar4 & 0x1ff) * 2) - 1U))) {
          return false;
        }
        puVar12 = puVar12 + 1;
      }
      pFVar15 = pFVar15 + 0x10;
    }
  }
  piVar14 = &param_1->ArrayNum;
  this_00 = &this->Components;
  TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>::
  Reset(this_00,0);
  uVar4 = *piVar14;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  piVar1 = &(this->Components).Array.ArrayMax;
  if ((this->Components).Array.ArrayMax < (int)uVar4) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar4,(ForAnyElementType *)this_00,(this->Components).Array.ArrayNum,piVar1);
  }
  pFVar15 = (param_1->AllocatorInstance).Data;
  iVar3 = *piVar14;
  pFVar16 = pFVar15 + (longlong)iVar3 * 0x10;
  do {
    if (*piVar14 != iVar3) {
      local_57[0] = 0;
      `TCheckedPointerIterator<TArray<int,TSizedDefaultAllocator<32>_>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_57);
    }
    if (pFVar15 == pFVar16) {
      return true;
    }
    if (*(int *)&pFVar15[8].field_0x0 != 0) {
      pFVar11 = ::operator_new(0x10);
      pFVar13 = (FScriptContainerElement *)0x0;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        *(undefined8 *)&pFVar11->field_0x0 = 0;
        *(undefined8 *)&pFVar11[8].field_0x0 = 0;
        pFVar13 = pFVar11;
      }
      if (param_2) {
        if (pFVar13 != pFVar15) {
          if (*(void **)&pFVar13->field_0x0 != (void *)0x0) {
            FMemory::Free(*(void **)&pFVar13->field_0x0);
          }
          *(undefined8 *)&pFVar13->field_0x0 = *(undefined8 *)&pFVar15->field_0x0;
          *(undefined8 *)&pFVar15->field_0x0 = 0;
          *(undefined4 *)&pFVar13[8].field_0x0 = *(undefined4 *)&pFVar15[8].field_0x0;
          *(undefined4 *)(pFVar13 + 0xc) = *(undefined4 *)(pFVar15 + 0xc);
          *(undefined8 *)&pFVar15[8].field_0x0 = 0;
        }
      }
      else {
        if ((pFVar13 == pFVar15) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x96e,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        iVar10 = *(int *)&pFVar15[8].field_0x0;
        if (iVar10 != 0) {
          iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,iVar10,(ForAnyElementType *)pFVar13,(int *)(pFVar13 + 8),
                             (int *)(pFVar13 + 0xc));
          memcpy((void *)(*(longlong *)&pFVar13->field_0x0 + (longlong)iVar9 * 4),
                 *(void **)&pFVar15->field_0x0,(longlong)iVar10 << 2);
        }
      }
      pFVar11 = (this_00->Array).AllocatorInstance.Data;
      local_50 = pFVar13;
      if (((pFVar11 <= (FScriptContainerElement *)&local_50) &&
          ((FScriptContainerElement *)&local_50 < pFVar11 + (longlong)*piVar1 * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      iVar10 = (this->Components).Array.ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)this_00,piVar1);
      }
      (this->Components).Array.ArrayNum = iVar10 + 1;
      *(FScriptContainerElement **)((this_00->Array).AllocatorInstance.Data + (longlong)iVar10 * 8)
           = local_50;
      piVar14 = local_48;
    }
    pFVar15 = pFVar15 + 0x10;
  } while( true );
}

// InitializeFromTriangleComponents @ 14360b970

bool __thiscall
UE::Geometry::FMeshConnectedComponents::InitializeFromTriangleComponents
          (FMeshConnectedComponents *this,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2)

{
  int *piVar1;
  TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
  *this_00;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  FDynamicMesh3 *pFVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar11;
  uint *puVar12;
  TArray<int,TSizedDefaultAllocator<32>_> *this_01;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar13;
  FScriptContainerElement *pFVar14;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_48 [8];
  TArray<int,TSizedDefaultAllocator<32>_> *local_40;
  
  piVar1 = &param_1->ArrayNum;
  if (param_2) {
    iVar4 = *piVar1;
    pFVar14 = (param_1->AllocatorInstance).Data;
    pFVar16 = pFVar14 + (longlong)iVar4 * 0x10;
    while( true ) {
      if (*piVar1 != iVar4) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TArray<int,TSizedDefaultAllocator<32>_>_const_,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res18);
      }
      if (pFVar14 == pFVar16) break;
      puVar12 = *(uint **)pFVar14;
      iVar10 = *(int *)(pFVar14 + 8);
      puVar3 = puVar12 + iVar10;
      while( true ) {
        if (*(int *)(pFVar14 + 8) != iVar10) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res20);
        }
        if (puVar12 == puVar3) break;
        uVar5 = *puVar12;
        pFVar6 = this->Mesh;
        if ((((int)uVar5 < 0) ||
            ((int)((pFVar6->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                  (pFVar6->TriangleRefCounts).RefCounts.CurBlockUsed) <= (int)uVar5)) ||
           (0xfffd < (ushort)(*(short *)(*(longlong *)
                                          ((pFVar6->TriangleRefCounts).RefCounts.Blocks.
                                           AllocatorInstance.Data + (ulonglong)(uVar5 >> 9) * 8) +
                                        (ulonglong)(uVar5 & 0x1ff) * 2) - 1U))) {
          return false;
        }
        puVar12 = puVar12 + 1;
      }
      pFVar14 = pFVar14 + 0x10;
    }
  }
  this_00 = &this->Components;
  TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>::
  Reset(this_00,0);
  uVar5 = *piVar1;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
  }
  piVar2 = &(this->Components).Array.ArrayMax;
  if ((this->Components).Array.ArrayMax < (int)uVar5) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar5,(ForAnyElementType *)this_00,(this->Components).Array.ArrayNum,piVar2);
  }
  iVar4 = *piVar1;
  pTVar13 = (TArray<int,TSizedDefaultAllocator<32>_> *)(param_1->AllocatorInstance).Data;
  pTVar15 = pTVar13 + iVar4;
  do {
    if (*piVar1 != iVar4) {
      local_48[0] = 0;
      `TCheckedPointerIterator<TArray<int,TSizedDefaultAllocator<32>_>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_48);
    }
    if (pTVar13 == pTVar15) {
      return true;
    }
    if (pTVar13->ArrayNum != 0) {
      pTVar11 = ::operator_new(0x10);
      this_01 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
      if (pTVar11 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        pTVar11->ArrayNum = 0;
        pTVar11->ArrayMax = 0;
        this_01 = pTVar11;
      }
      TArray<int,TSizedDefaultAllocator<32>_>::Append<int,TSizedDefaultAllocator<32>_>
                (this_01,pTVar13);
      pFVar14 = (this_00->Array).AllocatorInstance.Data;
      local_40 = this_01;
      if (((pFVar14 <= (FScriptContainerElement *)&local_40) &&
          ((FScriptContainerElement *)&local_40 < pFVar14 + (longlong)*piVar2 * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      iVar10 = (this->Components).Array.ArrayNum;
      if (iVar10 == *piVar2) {
        iVar10 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)this_00,piVar2);
      }
      (this->Components).Array.ArrayNum = iVar10 + 1;
      *(TArray<int,TSizedDefaultAllocator<32>_> **)
       ((this_00->Array).AllocatorInstance.Data + (longlong)iVar10 * 8) = local_40;
    }
    pTVar13 = pTVar13 + 1;
  } while( true );
}

// InitializeFromVertexComponents @ 14360bbe0

bool __thiscall
UE::Geometry::FMeshConnectedComponents::InitializeFromVertexComponents
          (FMeshConnectedComponents *this,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2,bool param_3)

{
  TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
  *this_00;
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  FDynamicMesh3 *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  uint *puVar12;
  FScriptContainerElement *pFVar13;
  int *piVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res20 [8];
  undefined1 local_58;
  undefined1 local_57 [7];
  FScriptContainerElement *local_50;
  int *local_48;
  
  local_48 = &param_1->ArrayNum;
  if (param_3) {
    iVar3 = *local_48;
    pFVar15 = (param_1->AllocatorInstance).Data;
    pFVar16 = pFVar15 + (longlong)iVar3 * 0x10;
    while( true ) {
      if (param_1->ArrayNum != iVar3) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TArray<int,TSizedDefaultAllocator<32>_>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (pFVar15 == pFVar16) break;
      puVar12 = *(uint **)pFVar15;
      iVar10 = *(int *)(pFVar15 + 8);
      puVar2 = puVar12 + iVar10;
      while( true ) {
        if (*(int *)(pFVar15 + 8) != iVar10) {
          local_58 = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_58);
        }
        if (puVar12 == puVar2) break;
        uVar4 = *puVar12;
        pFVar5 = this->Mesh;
        if ((((int)uVar4 < 0) ||
            ((int)((pFVar5->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                  (pFVar5->VertexRefCounts).RefCounts.CurBlockUsed) <= (int)uVar4)) ||
           (0xfffd < (ushort)(*(short *)(*(longlong *)
                                          ((pFVar5->VertexRefCounts).RefCounts.Blocks.
                                           AllocatorInstance.Data + (ulonglong)(uVar4 >> 9) * 8) +
                                        (ulonglong)(uVar4 & 0x1ff) * 2) - 1U))) {
          return false;
        }
        puVar12 = puVar12 + 1;
      }
      pFVar15 = pFVar15 + 0x10;
    }
  }
  piVar14 = &param_1->ArrayNum;
  this_00 = &this->Components;
  TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>::
  Reset(this_00,0);
  uVar4 = *piVar14;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  piVar1 = &(this->Components).Array.ArrayMax;
  if ((this->Components).Array.ArrayMax < (int)uVar4) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar4,(ForAnyElementType *)this_00,(this->Components).Array.ArrayNum,piVar1);
  }
  pFVar15 = (param_1->AllocatorInstance).Data;
  iVar3 = *piVar14;
  pFVar16 = pFVar15 + (longlong)iVar3 * 0x10;
  do {
    if (*piVar14 != iVar3) {
      local_57[0] = 0;
      `TCheckedPointerIterator<TArray<int,TSizedDefaultAllocator<32>_>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_57);
    }
    if (pFVar15 == pFVar16) {
      return true;
    }
    if (*(int *)&pFVar15[8].field_0x0 != 0) {
      pFVar11 = ::operator_new(0x10);
      pFVar13 = (FScriptContainerElement *)0x0;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        *(undefined8 *)&pFVar11->field_0x0 = 0;
        *(undefined8 *)&pFVar11[8].field_0x0 = 0;
        pFVar13 = pFVar11;
      }
      if (param_2) {
        if (pFVar13 != pFVar15) {
          if (*(void **)&pFVar13->field_0x0 != (void *)0x0) {
            FMemory::Free(*(void **)&pFVar13->field_0x0);
          }
          *(undefined8 *)&pFVar13->field_0x0 = *(undefined8 *)&pFVar15->field_0x0;
          *(undefined8 *)&pFVar15->field_0x0 = 0;
          *(undefined4 *)&pFVar13[8].field_0x0 = *(undefined4 *)&pFVar15[8].field_0x0;
          *(undefined4 *)(pFVar13 + 0xc) = *(undefined4 *)(pFVar15 + 0xc);
          *(undefined8 *)&pFVar15[8].field_0x0 = 0;
        }
      }
      else {
        if ((pFVar13 == pFVar15) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x96e,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        iVar10 = *(int *)&pFVar15[8].field_0x0;
        if (iVar10 != 0) {
          iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,iVar10,(ForAnyElementType *)pFVar13,(int *)(pFVar13 + 8),
                             (int *)(pFVar13 + 0xc));
          memcpy((void *)(*(longlong *)&pFVar13->field_0x0 + (longlong)iVar9 * 4),
                 *(void **)&pFVar15->field_0x0,(longlong)iVar10 << 2);
        }
      }
      pFVar11 = (this_00->Array).AllocatorInstance.Data;
      local_50 = pFVar13;
      if (((pFVar11 <= (FScriptContainerElement *)&local_50) &&
          ((FScriptContainerElement *)&local_50 < pFVar11 + (longlong)*piVar1 * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      iVar10 = (this->Components).Array.ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)this_00,piVar1);
      }
      (this->Components).Array.ArrayNum = iVar10 + 1;
      *(FScriptContainerElement **)((this_00->Array).AllocatorInstance.Data + (longlong)iVar10 * 8)
           = local_50;
      piVar14 = local_48;
    }
    pFVar15 = pFVar15 + 0x10;
  } while( true );
}

// InitializeFromVertexComponents @ 14360bf00

bool __thiscall
UE::Geometry::FMeshConnectedComponents::InitializeFromVertexComponents
          (FMeshConnectedComponents *this,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2)

{
  int *piVar1;
  TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
  *this_00;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  FDynamicMesh3 *pFVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar11;
  uint *puVar12;
  TArray<int,TSizedDefaultAllocator<32>_> *this_01;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar13;
  FScriptContainerElement *pFVar14;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_48 [8];
  TArray<int,TSizedDefaultAllocator<32>_> *local_40;
  
  piVar1 = &param_1->ArrayNum;
  if (param_2) {
    iVar4 = *piVar1;
    pFVar14 = (param_1->AllocatorInstance).Data;
    pFVar16 = pFVar14 + (longlong)iVar4 * 0x10;
    while( true ) {
      if (*piVar1 != iVar4) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TArray<int,TSizedDefaultAllocator<32>_>_const_,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res18);
      }
      if (pFVar14 == pFVar16) break;
      puVar12 = *(uint **)pFVar14;
      iVar10 = *(int *)(pFVar14 + 8);
      puVar3 = puVar12 + iVar10;
      while( true ) {
        if (*(int *)(pFVar14 + 8) != iVar10) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res20);
        }
        if (puVar12 == puVar3) break;
        uVar5 = *puVar12;
        pFVar6 = this->Mesh;
        if ((((int)uVar5 < 0) ||
            ((int)((pFVar6->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                  (pFVar6->VertexRefCounts).RefCounts.CurBlockUsed) <= (int)uVar5)) ||
           (0xfffd < (ushort)(*(short *)(*(longlong *)
                                          ((pFVar6->VertexRefCounts).RefCounts.Blocks.
                                           AllocatorInstance.Data + (ulonglong)(uVar5 >> 9) * 8) +
                                        (ulonglong)(uVar5 & 0x1ff) * 2) - 1U))) {
          return false;
        }
        puVar12 = puVar12 + 1;
      }
      pFVar14 = pFVar14 + 0x10;
    }
  }
  this_00 = &this->Components;
  TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>::
  Reset(this_00,0);
  uVar5 = *piVar1;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
  }
  piVar2 = &(this->Components).Array.ArrayMax;
  if ((this->Components).Array.ArrayMax < (int)uVar5) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar5,(ForAnyElementType *)this_00,(this->Components).Array.ArrayNum,piVar2);
  }
  iVar4 = *piVar1;
  pTVar13 = (TArray<int,TSizedDefaultAllocator<32>_> *)(param_1->AllocatorInstance).Data;
  pTVar15 = pTVar13 + iVar4;
  do {
    if (*piVar1 != iVar4) {
      local_48[0] = 0;
      `TCheckedPointerIterator<TArray<int,TSizedDefaultAllocator<32>_>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_48);
    }
    if (pTVar13 == pTVar15) {
      return true;
    }
    if (pTVar13->ArrayNum != 0) {
      pTVar11 = ::operator_new(0x10);
      this_01 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
      if (pTVar11 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        pTVar11->ArrayNum = 0;
        pTVar11->ArrayMax = 0;
        this_01 = pTVar11;
      }
      TArray<int,TSizedDefaultAllocator<32>_>::Append<int,TSizedDefaultAllocator<32>_>
                (this_01,pTVar13);
      pFVar14 = (this_00->Array).AllocatorInstance.Data;
      local_40 = this_01;
      if (((pFVar14 <= (FScriptContainerElement *)&local_40) &&
          ((FScriptContainerElement *)&local_40 < pFVar14 + (longlong)*piVar2 * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      iVar10 = (this->Components).Array.ArrayNum;
      if (iVar10 == *piVar2) {
        iVar10 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)this_00,piVar2);
      }
      (this->Components).Array.ArrayNum = iVar10 + 1;
      *(TArray<int,TSizedDefaultAllocator<32>_> **)
       ((this_00->Array).AllocatorInstance.Data + (longlong)iVar10 * 8) = local_40;
    }
    pTVar13 = pTVar13 + 1;
  } while( true );
}

// RemoveFromActiveSet @ 1436172f0

void __thiscall
UE::Geometry::FMeshConnectedComponents::RemoveFromActiveSet
          (FMeshConnectedComponents *this,FComponent *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = (longlong)(param_1->Indices).ArrayNum;
  uVar5 = 0;
  if (0 < lVar6) {
    lVar7 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (param_1->Indices).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
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
      uVar3 = *(uint *)((param_1->Indices).AllocatorInstance.Data + lVar7 * 4);
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
      uVar5 = uVar5 + 1;
      lVar7 = lVar7 + 1;
      (param_2->AllocatorInstance).Data[(int)uVar3] = (FScriptContainerElement)0xff;
    } while (lVar7 < lVar6);
  }
  return;
}

// SortByCount @ 14361b110

void __thiscall
UE::Geometry::FMeshConnectedComponents::SortByCount(FMeshConnectedComponents *this,bool param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 local_res8 [8];
  FIdentityFunctor local_res10 [8];
  
  iVar1 = (this->Components).Array.ArrayNum;
  pFVar2 = (this->Components).Array.AllocatorInstance.Data;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_1) {
    AlgoImpl::
    StableSortInternal<UE::Geometry::FMeshConnectedComponents::FComponent_*,FIdentityFunctor,TDereferenceWrapper<UE::Geometry::FMeshConnectedComponents::FComponent_*,_UE::Geometry::FMeshConnectedComponents::SortByCount_::__l5::<lambda_1>_>_>
              ((FComponent **)pFVar2,iVar1,local_res10[0],(<lambda_1> *)local_res10);
    return;
  }
  AlgoImpl::
  StableSortInternal<UE::Geometry::FMeshConnectedComponents::FComponent_*,FIdentityFunctor,TDereferenceWrapper<UE::Geometry::FMeshConnectedComponents::FComponent_*,_UE::Geometry::FMeshConnectedComponents::SortByCount_::__l7::<lambda_2>_>_>
            ((FComponent **)pFVar2,iVar1,local_res10[0],(<lambda_2> *)local_res8);
  return;
}

