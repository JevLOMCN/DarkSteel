// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 1

// GetClusters @ 1433a2eb0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FClusterKMeans::GetClusters
          (FClusterKMeans *this,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  longlong lVar8;
  uint local_38 [4];
  
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (param_1,(this->ClusterSizes).ArrayNum,Default);
  uVar5 = 0;
  if (0 < (this->ClusterSizes).ArrayNum) {
    lVar7 = 0;
    lVar8 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < param_1->ArrayNum) {
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
      pFVar6 = (param_1->AllocatorInstance).Data + lVar8;
      uVar3 = 0;
      if ((int)uVar5 < (this->ClusterSizes).ArrayNum) {
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
      uVar3 = *(uint *)((this->ClusterSizes).AllocatorInstance.Data + lVar7 * 4);
      if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
      }
      iVar4 = *(int *)(pFVar6 + 0xc);
      *(undefined4 *)&pFVar6[8].field_0x0 = 0;
      if (iVar4 < (int)uVar3) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar3,(ForAnyElementType *)pFVar6,0,(int *)(pFVar6 + 0xc));
      }
      uVar5 = uVar5 + 1;
      lVar7 = lVar7 + 1;
      lVar8 = lVar8 + 0x10;
    } while ((int)uVar5 < (this->ClusterSizes).ArrayNum);
  }
  if ((param_1->ArrayNum != 0) && (local_38[0] = 0, 0 < (this->ClusterIDs).ArrayNum)) {
    do {
      uVar5 = local_38[0];
      uVar3 = 0;
      if ((int)local_38[0] < (this->ClusterIDs).ArrayNum) {
        uVar3 = ~local_38[0] >> 0x1f;
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
      uVar5 = *(uint *)((this->ClusterIDs).AllocatorInstance.Data + (longlong)(int)uVar5 * 4);
      uVar3 = 0;
      if ((int)uVar5 < param_1->ArrayNum) {
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
      pFVar6 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x10;
      if (((*(uint **)&pFVar6->field_0x0 <= local_38) &&
          (local_38 < *(uint **)&pFVar6->field_0x0 + *(int *)(pFVar6 + 0xc))) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar4 = *(int *)&pFVar6[8].field_0x0;
      if (iVar4 == *(int *)(pFVar6 + 0xc)) {
        iVar4 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)pFVar6,(int *)(pFVar6 + 0xc));
      }
      *(int *)&pFVar6[8].field_0x0 = iVar4 + 1;
      *(uint *)(*(longlong *)&pFVar6->field_0x0 + (longlong)iVar4 * 4) = local_38[0];
      local_38[0] = local_38[0] + 1;
    } while ((int)local_38[0] < (this->ClusterIDs).ArrayNum);
  }
  return;
}

