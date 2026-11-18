// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 2

// DeprecatedGetTileIdsFromNavTileRefs @ 146de8c40

void __cdecl
FNavTileRef::DeprecatedGetTileIdsFromNavTileRefs
          (FPImplRecastNavMesh *param_1,TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *param_2,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  dtNavMesh *pdVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  uint local_38 [4];
  
  if ((param_1 != (FPImplRecastNavMesh *)0x0) &&
     (pdVar5 = param_1->DetourNavMesh, pdVar5 != (dtNavMesh *)0x0)) {
    uVar3 = param_2->ArrayNum;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    piVar1 = &param_3->ArrayMax;
    if (*piVar1 < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar3,&param_3->AllocatorInstance,param_3->ArrayNum,piVar1);
    }
    pFVar10 = (param_2->AllocatorInstance).Data;
    iVar4 = param_2->ArrayNum;
    pFVar2 = pFVar10 + (longlong)iVar4 * 8;
    while( true ) {
      if (param_2->ArrayNum != iVar4) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FNavTileRef_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar10 == pFVar2) break;
      pFVar6 = (param_3->AllocatorInstance).Data;
      local_38[0] = (uint)(*(ulonglong *)pFVar10 >> ((byte)pdVar5->m_polyBits & 0x3f)) &
                    (int)(1L << ((byte)pdVar5->m_tileBits & 0x3f)) - 1U;
      if (((pFVar6 <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 < pFVar6 + (longlong)*piVar1 * 4)) &&
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
      iVar9 = param_3->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_3->AllocatorInstance,piVar1);
        param_3->ArrayNum = iVar9;
      }
      pFVar10 = pFVar10 + 8;
      param_3->ArrayNum = iVar9 + 1;
      *(uint *)((param_3->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_38[0];
    }
  }
  return;
}

// DeprecatedMakeTileRefsFromTileIds @ 146de8de0

void __cdecl
FNavTileRef::DeprecatedMakeTileRefsFromTileIds
          (FPImplRecastNavMesh *param_1,TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  dtNavMesh *pdVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  longlong local_38 [2];
  
  if ((param_1 != (FPImplRecastNavMesh *)0x0) &&
     (pdVar5 = param_1->DetourNavMesh, pdVar5 != (dtNavMesh *)0x0)) {
    uVar3 = param_2->ArrayNum;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    piVar1 = &param_3->ArrayMax;
    if (*piVar1 < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar3,&param_3->AllocatorInstance,param_3->ArrayNum,piVar1);
    }
    pFVar10 = (param_2->AllocatorInstance).Data;
    iVar4 = param_2->ArrayNum;
    pFVar2 = pFVar10 + (longlong)iVar4 * 4;
    while( true ) {
      if (param_2->ArrayNum != iVar4) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar10 == pFVar2) break;
      local_38[0] = (ulonglong)*(uint *)pFVar10 << ((byte)pdVar5->m_polyBits & 0x3f);
      pFVar6 = (param_3->AllocatorInstance).Data;
      if (((pFVar6 <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 < pFVar6 + (longlong)*piVar1 * 8)) &&
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
      iVar9 = param_3->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_3->AllocatorInstance,piVar1);
        param_3->ArrayNum = iVar9;
      }
      pFVar10 = pFVar10 + 4;
      param_3->ArrayNum = iVar9 + 1;
      *(longlong *)((param_3->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_38[0];
    }
  }
  return;
}

