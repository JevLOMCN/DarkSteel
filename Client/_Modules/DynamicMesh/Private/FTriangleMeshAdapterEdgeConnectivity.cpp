// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 5

// BuildEdgeConnectivity<UE::Geometry::TTriangleMeshAdapter<double>_> @ 14c787f00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FTriangleMeshAdapterEdgeConnectivity::
BuildEdgeConnectivity<UE::Geometry::TTriangleMeshAdapter<double>_>
          (FTriangleMeshAdapterEdgeConnectivity *this,TTriangleMeshAdapter<double> *param_1)

{
  int *piVar1;
  TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *pTVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint local_res8 [2];
  uint local_res10 [2];
  int local_68;
  int local_64;
  int local_60;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  local_58;
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  *local_48;
  FTriangleMeshAdapterEdgeConnectivity *local_40;
  
  uVar13 = 0;
  (this->EIDtoVIDs).ArrayNum = 0;
  if ((this->EIDtoVIDs).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->EIDtoVIDs).AllocatorInstance,0,&(this->EIDtoVIDs).ArrayMax);
  }
  (this->EIDtoTIDs).ArrayNum = 0;
  if ((this->EIDtoTIDs).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->EIDtoTIDs).AllocatorInstance,0,&(this->EIDtoTIDs).ArrayMax);
  }
  (this->EIDtoTIDSpillID).ArrayNum = 0;
  if ((this->EIDtoTIDSpillID).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->EIDtoTIDSpillID).AllocatorInstance,0,&(this->EIDtoTIDSpillID).ArrayMax)
    ;
  }
  piVar1 = &(this->SpillIDtoTIDs).ArrayMax;
  pTVar2 = (TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)
           (this->SpillIDtoTIDs).AllocatorInstance.Data;
  iVar7 = (this->SpillIDtoTIDs).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,int>
              (pTVar2,iVar7);
    (this->SpillIDtoTIDs).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&(this->SpillIDtoTIDs).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TArray<int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,int>
              (pTVar2,iVar7);
    (this->SpillIDtoTIDs).ArrayNum = 0;
  }
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  Core::Private::Function::CheckCallable(*(void **)&param_1->MaxVertexID);
  pcVar3 = *(code **)&param_1->MaxVertexID;
  plVar10 = *(longlong **)&(param_1->MaxVertexID).field_0x28;
  plVar11 = (longlong *)&(param_1->MaxVertexID).field_0x10;
  if (plVar10 != (longlong *)0x0) {
    plVar11 = plVar10;
  }
  uVar9 = (**(code **)(*plVar11 + 8))();
  iVar7 = (*pcVar3)(uVar9);
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  ::SetNum(&this->VIDtoEIDs,iVar7,Default);
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  ::SetNum(&local_58,(this->VIDtoEIDs).ArrayNum,Default);
  Core::Private::Function::CheckCallable(*(void **)&param_1->MaxTriangleID);
  pcVar3 = *(code **)&param_1->MaxTriangleID;
  plVar10 = *(longlong **)&(param_1->MaxTriangleID).field_0x28;
  plVar11 = (longlong *)&(param_1->MaxTriangleID).field_0x10;
  if (plVar10 != (longlong *)0x0) {
    plVar11 = plVar10;
  }
  uVar9 = (**(code **)(*plVar11 + 8))();
  iVar7 = (*pcVar3)(uVar9);
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>::SetNum(&this->TIDtoEIDs,iVar7,Default)
  ;
  local_48 = &local_58;
  uVar14 = uVar13;
  local_40 = this;
  while( true ) {
    Core::Private::Function::CheckCallable(*(void **)&param_1->MaxTriangleID);
    plVar10 = *(longlong **)&(param_1->MaxTriangleID).field_0x28;
    pcVar3 = *(code **)&param_1->MaxTriangleID;
    plVar11 = (longlong *)&(param_1->MaxTriangleID).field_0x10;
    if (plVar10 != (longlong *)0x0) {
      plVar11 = plVar10;
    }
    uVar9 = (**(code **)(*plVar11 + 8))();
    iVar7 = (*pcVar3)(uVar9);
    uVar12 = (uint)uVar13;
    if (iVar7 <= (int)uVar12) break;
    local_res8[0] = uVar12;
    Core::Private::Function::CheckCallable(*(void **)&param_1->IsTriangle);
    plVar10 = *(longlong **)&(param_1->IsTriangle).field_0x28;
    pcVar3 = *(code **)&param_1->IsTriangle;
    if (plVar10 == (longlong *)0x0) {
      plVar10 = (longlong *)&(param_1->IsTriangle).field_0x10;
    }
    uVar9 = (**(code **)(*plVar10 + 8))();
    cVar5 = (*pcVar3)(uVar9,local_res8);
    if (cVar5 != '\0') {
      local_res10[0] = uVar12;
      Core::Private::Function::CheckCallable(*(void **)&param_1->GetTriangle);
      plVar10 = *(longlong **)&(param_1->GetTriangle).field_0x28;
      pcVar3 = *(code **)&param_1->GetTriangle;
      plVar11 = (longlong *)&(param_1->GetTriangle).field_0x10;
      if (plVar10 != (longlong *)0x0) {
        plVar11 = plVar10;
      }
      uVar9 = (**(code **)(*plVar11 + 8))();
      (*pcVar3)(&local_68,uVar9,local_res10);
      uVar8 = 0;
      if ((int)uVar12 < (this->TIDtoEIDs).ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar4 = (this->TIDtoEIDs).AllocatorInstance.Data;
      iVar7 = `UE::Geometry::FTriangleMeshAdapterEdgeConnectivity::
              BuildEdgeConnectivity<UE::Geometry::TTriangleMeshAdapter<double>_>'::__l2::<lambda_1>
              ::operator()(&local_48,local_68,local_60,uVar12);
      *(int *)(pFVar4 + uVar14 + 8) = iVar7;
      iVar7 = `UE::Geometry::FTriangleMeshAdapterEdgeConnectivity::
              BuildEdgeConnectivity<UE::Geometry::TTriangleMeshAdapter<double>_>'::__l2::<lambda_1>
              ::operator()(&local_48,local_64,local_68,uVar12);
      *(int *)(pFVar4 + uVar14) = iVar7;
      iVar7 = `UE::Geometry::FTriangleMeshAdapterEdgeConnectivity::
              BuildEdgeConnectivity<UE::Geometry::TTriangleMeshAdapter<double>_>'::__l2::<lambda_1>
              ::operator()(&local_48,local_60,local_64,uVar12);
      *(int *)(pFVar4 + uVar14 + 4) = iVar7;
    }
    uVar13 = (ulonglong)(uVar12 + 1);
    uVar14 = uVar14 + 0xc;
  }
  DestructItems<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,int>
            ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
             local_58.AllocatorInstance.Data,local_58.ArrayNum);
  if ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
      local_58.AllocatorInstance.Data !=
      (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14c7b86f0

int __thiscall
`UE::Geometry::FTriangleMeshAdapterEdgeConnectivity::
BuildEdgeConnectivity<UE::Geometry::TTriangleMeshAdapter<double>_>'::__l2::<lambda_1>::operator()
          (void *this,int param_1,int param_2,int param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ForElementType<int> FVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  ForElementType<int> FVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  ForElementType<int> FVar16;
  int local_res8 [2];
  uint local_res10 [2];
  uint local_res18 [2];
  int local_res20 [2];
  uint local_58;
  undefined4 local_54;
  uint local_50;
  uint uStack_4c;
  int local_48;
  undefined4 uStack_44;
  
  plVar1 = *(longlong **)this;
  uVar7 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  local_res10[0] = param_1;
  local_res18[0] = param_2;
  local_res20[0] = param_3;
  if ((uVar7 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  uVar7 = local_res10[0];
  FVar16 = (ForElementType<int>)(*plVar1 + (longlong)param_1 * 0x30);
  FVar8 = *(ForElementType<int> *)((longlong)FVar16 + 0x20);
  if (*(ForElementType<int> *)((longlong)FVar16 + 0x20) == (ForElementType<int>)0x0) {
    FVar8 = FVar16;
  }
  uVar15 = 0;
  uVar5 = 0;
  FVar12 = FVar8;
  do {
    if (FVar12 == (ForElementType<int>)
                  ((longlong)FVar8 + (longlong)*(int *)((longlong)FVar16 + 0x28) * 4)) {
LAB_14c7b87a3:
      lVar13 = *(longlong *)((longlong)this + 8);
      uStack_4c = local_res10[0];
      local_50 = local_res18[0];
      if ((int)local_res10[0] <= (int)local_res18[0]) {
        uStack_4c = local_res18[0];
        local_50 = local_res10[0];
      }
      if (((*(uint **)(lVar13 + 0x10) <= &local_50) &&
          (&local_50 < *(uint **)(lVar13 + 0x10) + (longlong)*(int *)(lVar13 + 0x1c) * 2)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      local_58 = *(uint *)(lVar13 + 0x18);
      if (local_58 == *(uint *)(lVar13 + 0x1c)) {
        local_58 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,(ForAnyElementType *)(lVar13 + 0x10),(int *)(lVar13 + 0x1c));
      }
      *(uint *)(lVar13 + 0x18) = local_58 + 1;
      uStack_44 = 0xffffffff;
      *(ulonglong *)(*(longlong *)(lVar13 + 0x10) + (longlong)(int)local_58 * 8) =
           CONCAT44(uStack_4c,local_50);
      lVar13 = *(longlong *)((longlong)this + 8);
      local_48 = local_res20[0];
      if (((*(int **)(lVar13 + 0x20) <= &local_48) &&
          (&local_48 < *(int **)(lVar13 + 0x20) + (longlong)*(int *)(lVar13 + 0x2c) * 2)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      iVar4 = *(int *)(lVar13 + 0x28);
      if (iVar4 == *(int *)(lVar13 + 0x2c)) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,(ForAnyElementType *)(lVar13 + 0x20),(int *)(lVar13 + 0x2c));
      }
      *(int *)(lVar13 + 0x28) = iVar4 + 1;
      *(ulonglong *)(*(longlong *)(lVar13 + 0x20) + (longlong)iVar4 * 8) =
           CONCAT44(uStack_44,local_48);
      FVar8 = *(ForElementType<int> *)((longlong)FVar16 + 0x20);
      if (*(ForElementType<int> *)((longlong)FVar16 + 0x20) == (ForElementType<int>)0x0) {
        FVar8 = FVar16;
      }
      if ((((ulonglong)FVar8 <= local_res18) &&
          (local_res18 < (uint *)((longlong)FVar8 + (longlong)*(int *)((longlong)FVar16 + 0x2c) * 4)
          )) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      iVar4 = *(int *)((longlong)FVar16 + 0x28);
      if (iVar4 == *(int *)((longlong)FVar16 + 0x2c)) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                          (0x404,(ForElementType<int> *)FVar16,(int *)((longlong)FVar16 + 0x2c));
      }
      *(int *)((longlong)FVar16 + 0x28) = iVar4 + 1;
      FVar8 = *(ForElementType<int> *)((longlong)FVar16 + 0x20);
      if (*(ForElementType<int> *)((longlong)FVar16 + 0x20) == (ForElementType<int>)0x0) {
        FVar8 = FVar16;
      }
      *(uint *)((longlong)FVar8 + (longlong)iVar4 * 4) = local_res18[0];
      lVar13 = (longlong)(int)local_res10[0];
      plVar1 = *(longlong **)((longlong)this + 8);
      uVar7 = uVar5;
      if ((int)local_res10[0] < (int)plVar1[1]) {
        uVar7 = ~local_res10[0] >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      FVar16 = (ForElementType<int>)(lVar13 * 0x30 + *plVar1);
      FVar8 = *(ForElementType<int> *)((longlong)FVar16 + 0x20);
      if (*(ForElementType<int> *)((longlong)FVar16 + 0x20) == (ForElementType<int>)0x0) {
        FVar8 = FVar16;
      }
      if ((((ulonglong)FVar8 <= &local_58) &&
          (&local_58 < (uint *)((longlong)FVar8 + (longlong)*(int *)((longlong)FVar16 + 0x2c) * 4)))
         && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      iVar4 = *(int *)((longlong)FVar16 + 0x28);
      if (iVar4 == *(int *)((longlong)FVar16 + 0x2c)) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                          (0x404,(ForElementType<int> *)FVar16,(int *)((longlong)FVar16 + 0x2c));
      }
      *(int *)((longlong)FVar16 + 0x28) = iVar4 + 1;
      FVar8 = *(ForElementType<int> *)((longlong)FVar16 + 0x20);
      if (*(ForElementType<int> *)((longlong)FVar16 + 0x20) == (ForElementType<int>)0x0) {
        FVar8 = FVar16;
      }
      *(uint *)((longlong)FVar8 + (longlong)iVar4 * 4) = local_58;
      lVar13 = (longlong)(int)local_res18[0];
      plVar1 = *(longlong **)this;
      if ((int)local_res18[0] < (int)plVar1[1]) {
        uVar5 = ~local_res18[0] >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      FVar16 = (ForElementType<int>)(lVar13 * 0x30 + *plVar1);
      FVar8 = *(ForElementType<int> *)((longlong)FVar16 + 0x20);
      if (*(ForElementType<int> *)((longlong)FVar16 + 0x20) == (ForElementType<int>)0x0) {
        FVar8 = FVar16;
      }
      if ((((ulonglong)FVar8 <= local_res10) &&
          (local_res10 < (uint *)((longlong)FVar8 + (longlong)*(int *)((longlong)FVar16 + 0x2c) * 4)
          )) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      iVar4 = *(int *)((longlong)FVar16 + 0x28);
      if (iVar4 == *(int *)((longlong)FVar16 + 0x2c)) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                          (0x404,(ForElementType<int> *)FVar16,(int *)((longlong)FVar16 + 0x2c));
      }
      *(int *)((longlong)FVar16 + 0x28) = iVar4 + 1;
      FVar8 = *(ForElementType<int> *)((longlong)FVar16 + 0x20);
      if (*(ForElementType<int> *)((longlong)FVar16 + 0x20) == (ForElementType<int>)0x0) {
        FVar8 = FVar16;
      }
      *(uint *)((longlong)FVar8 + (longlong)iVar4 * 4) = local_res10[0];
      lVar13 = (longlong)(int)local_res18[0];
      plVar1 = *(longlong **)((longlong)this + 8);
      if ((int)local_res18[0] < (int)plVar1[1]) {
        uVar15 = ~local_res18[0] >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      FVar16 = (ForElementType<int>)(lVar13 * 0x30 + *plVar1);
      FVar8 = *(ForElementType<int> *)((longlong)FVar16 + 0x20);
      if (*(ForElementType<int> *)((longlong)FVar16 + 0x20) == (ForElementType<int>)0x0) {
        FVar8 = FVar16;
      }
      if ((((ulonglong)FVar8 <= &local_58) &&
          (&local_58 < (uint *)((longlong)FVar8 + (longlong)*(int *)((longlong)FVar16 + 0x2c) * 4)))
         && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      iVar4 = *(int *)((longlong)FVar16 + 0x28);
      if (iVar4 == *(int *)((longlong)FVar16 + 0x2c)) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                          (0x404,(ForElementType<int> *)FVar16,(int *)((longlong)FVar16 + 0x2c));
      }
      *(int *)((longlong)FVar16 + 0x28) = iVar4 + 1;
      FVar8 = *(ForElementType<int> *)((longlong)FVar16 + 0x20);
      if (*(ForElementType<int> *)((longlong)FVar16 + 0x20) == (ForElementType<int>)0x0) {
        FVar8 = FVar16;
      }
      *(uint *)((longlong)FVar8 + (longlong)iVar4 * 4) = local_58;
      lVar13 = *(longlong *)((longlong)this + 8);
      if (*(int *)(lVar13 + 0x48) != 0) {
        local_54 = 0xffffffff;
        if (((*(undefined4 **)(lVar13 + 0x40) <= &local_54) &&
            (&local_54 < *(undefined4 **)(lVar13 + 0x40) + *(int *)(lVar13 + 0x4c))) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
        iVar4 = *(int *)(lVar13 + 0x48);
        if (iVar4 == *(int *)(lVar13 + 0x4c)) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,(ForAnyElementType *)(lVar13 + 0x40),(int *)(lVar13 + 0x4c));
        }
        *(int *)(lVar13 + 0x48) = iVar4 + 1;
        *(undefined4 *)(*(longlong *)(lVar13 + 0x40) + (longlong)iVar4 * 4) = local_54;
      }
      return local_58;
    }
    if (*(uint *)FVar12 == local_res18[0]) {
      uVar11 = (uint)((longlong)FVar12 - (longlong)FVar8 >> 2);
      if (uVar11 != 0xffffffff) {
        plVar1 = *(longlong **)((longlong)this + 8);
        uVar6 = uVar15;
        if ((int)local_res10[0] < (int)plVar1[1]) {
          uVar6 = ~local_res10[0] >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
        lVar13 = (longlong)(int)uVar7 * 0x30 + *plVar1;
        uVar7 = uVar5;
        if ((int)uVar11 < *(int *)(lVar13 + 0x28)) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
        lVar14 = *(longlong *)((longlong)this + 8);
        lVar9 = *(longlong *)(lVar13 + 0x20);
        if (*(longlong *)(lVar13 + 0x20) == 0) {
          lVar9 = lVar13;
        }
        local_58 = *(uint *)(lVar9 + (longlong)(int)uVar11 * 4);
        lVar13 = (longlong)(int)local_58;
        if ((int)local_58 < *(int *)(lVar14 + 0x28)) {
          uVar5 = ~local_58 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
        iVar4 = local_res20[0];
        lVar9 = *(longlong *)((longlong)this + 8);
        if (*(int *)(*(longlong *)(lVar14 + 0x20) + 4 + lVar13 * 8) == -1) {
          lVar13 = (longlong)(int)local_58;
          if ((int)local_58 < *(int *)(lVar9 + 0x28)) {
            uVar15 = ~local_58 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            iVar4 = (*pcVar2)();
            return iVar4;
          }
          *(int *)(*(longlong *)(lVar9 + 0x20) + 4 + lVar13 * 8) = iVar4;
          return local_58;
        }
        if (*(int *)(lVar9 + 0x48) == 0) {
          local_res8[0] = -1;
          TArray<int,TSizedDefaultAllocator<32>_>::Init
                    ((TArray<int,TSizedDefaultAllocator<32>_> *)(lVar9 + 0x40),local_res8,
                     *(int *)(lVar9 + 0x18));
        }
        lVar14 = (longlong)(int)local_58;
        lVar13 = *(longlong *)((longlong)this + 8);
        uVar7 = uVar15;
        if ((int)local_58 < *(int *)(lVar13 + 0x48)) {
          uVar7 = ~local_58 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
        lVar13 = *(longlong *)(lVar13 + 0x40);
        uVar7 = *(uint *)(lVar13 + lVar14 * 4);
        if (uVar7 == 0xffffffff) {
          lVar9 = *(longlong *)((longlong)this + 8);
          uVar7 = *(uint *)(lVar9 + 0x58);
          if (uVar7 == *(uint *)(lVar9 + 0x5c)) {
            uVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,(ForAnyElementType *)(lVar9 + 0x50),(int *)(lVar9 + 0x5c));
          }
          *(uint *)(lVar9 + 0x58) = uVar7 + 1;
          lVar10 = (longlong)(int)uVar7;
          lVar9 = *(longlong *)(lVar9 + 0x50);
          *(undefined8 *)(lVar9 + 8 + lVar10 * 0x18) = 0;
          *(undefined4 *)(lVar9 + 0x10 + lVar10 * 0x18) = 0;
          *(undefined4 *)(lVar9 + 0x14 + lVar10 * 0x18) = 2;
          *(uint *)(lVar13 + lVar14 * 4) = uVar7;
        }
        lVar13 = *(longlong *)((longlong)this + 8);
        if ((int)uVar7 < *(int *)(lVar13 + 0x58)) {
          uVar15 = ~uVar7 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
        lVar13 = *(longlong *)(lVar13 + 0x50);
        FVar8 = (ForElementType<int>)(lVar13 + (longlong)(int)uVar7 * 0x18);
        FVar16 = *(ForElementType<int> *)(lVar13 + 8 + (longlong)(int)uVar7 * 0x18);
        if (FVar16 == (ForElementType<int>)0x0) {
          FVar16 = FVar8;
        }
        if ((((ulonglong)FVar16 <= local_res20) &&
            (local_res20 <
             (int *)((longlong)FVar16 + (longlong)*(int *)((longlong)FVar8 + 0x14) * 4))) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
        iVar4 = *(int *)((ForElementType<int> *)((longlong)FVar8 + 0x10))->InlineData;
        if (iVar4 == *(int *)((longlong)FVar8 + 0x14)) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                            (0x404,(ForElementType<int> *)FVar8,(int *)((longlong)FVar8 + 0x14));
        }
        *(int *)((ForElementType<int> *)((longlong)FVar8 + 0x10))->InlineData = iVar4 + 1;
        FVar16 = *(ForElementType<int> *)((longlong)FVar8 + 8);
        if (*(ForElementType<int> *)((longlong)FVar8 + 8) == (ForElementType<int>)0x0) {
          FVar16 = FVar8;
        }
        *(int *)((longlong)FVar16 + (longlong)iVar4 * 4) = local_res20[0];
        return local_58;
      }
      goto LAB_14c7b87a3;
    }
    FVar12 = (ForElementType<int>)((longlong)FVar12 + 4);
  } while( true );
}

// EnumerateVertexEdges @ 14c8014e0

void __thiscall
UE::Geometry::FTriangleMeshAdapterEdgeConnectivity::EnumerateVertexEdges
          (FTriangleMeshAdapterEdgeConnectivity *this,int param_1,
          TFunctionRef<void___cdecl(int)> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  
  uVar5 = 0;
  if (param_1 < (this->VIDtoEIDs).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
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
  pFVar7 = (this->VIDtoEIDs).AllocatorInstance.Data + (longlong)param_1 * 0x30;
  iVar2 = *(int *)(pFVar7 + 0x28);
  pFVar6 = *(FScriptContainerElement **)(pFVar7 + 0x20);
  if (*(FScriptContainerElement **)(pFVar7 + 0x20) == (FScriptContainerElement *)0x0) {
    pFVar6 = pFVar7;
  }
  pFVar1 = pFVar6 + (longlong)iVar2 * 4;
  while( true ) {
    if (*(int *)(pFVar7 + 0x28) != iVar2) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar6 == pFVar1) break;
    local_res8[0] = *(undefined4 *)pFVar6;
    (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_res8);
    pFVar6 = pFVar6 + 4;
  }
  return;
}

// GetEdgeV @ 14c80f5a0

FIndex2i __thiscall
UE::Geometry::FTriangleMeshAdapterEdgeConnectivity::GetEdgeV
          (FTriangleMeshAdapterEdgeConnectivity *this,int param_1)

{
  undefined4 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FIndex2i FVar6;
  undefined4 in_register_00000014;
  FIndex2i_u_0 FVar7;
  uint in_R8D;
  
  FVar7._s_0.B = in_register_00000014;
  FVar7._s_0.A = param_1;
  uVar5 = 0;
  if ((int)in_R8D < (this->EIDtoVIDs).ArrayNum) {
    uVar5 = ~in_R8D >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      FVar6.field0_0x0 = (FIndex2i_u_0)(*pcVar3)();
      return (FIndex2i)FVar6.field0_0x0;
    }
  }
  uVar1 = *(undefined4 *)((this->EIDtoVIDs).AllocatorInstance.Data + (longlong)(int)in_R8D * 8 + 4);
  uVar5 = 0;
  if ((int)in_R8D < (this->EIDtoVIDs).ArrayNum) {
    uVar5 = ~in_R8D >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      FVar6.field0_0x0 = (FIndex2i_u_0)(*pcVar3)();
      return (FIndex2i)FVar6.field0_0x0;
    }
  }
  pFVar2 = (this->EIDtoVIDs).AllocatorInstance.Data;
  *(undefined4 *)((longlong)FVar7 + 4) = uVar1;
  *(undefined4 *)FVar7 = *(undefined4 *)(pFVar2 + (longlong)(int)in_R8D * 8);
  return (FIndex2i)FVar7;
}

// IsBoundaryEdge @ 14c8188d0

bool __thiscall
UE::Geometry::FTriangleMeshAdapterEdgeConnectivity::IsBoundaryEdge
          (FTriangleMeshAdapterEdgeConnectivity *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (param_1 < (this->EIDtoTIDs).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar1 = *(int *)((this->EIDtoTIDs).AllocatorInstance.Data + (longlong)param_1 * 8 + 4);
  uVar5 = 0;
  if (param_1 < (this->EIDtoTIDs).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return iVar1 == -1;
}

