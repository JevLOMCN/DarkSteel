// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationSharing
// Functions: 1

// operator() @ 14e2ac570

void __thiscall
`AActor::
GetComponents<USkeletalMeshComponent,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>'::
__l2::<lambda_1>::operator()(void *this,USkeletalMeshComponent *param_1)

{
  ForElementType<USkeletalMeshComponent_*> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<USkeletalMeshComponent_*> FVar5;
  USkeletalMeshComponent *local_res10 [3];
  
  FVar1 = *(ForElementType<USkeletalMeshComponent_*> *)this;
  FVar5 = *(ForElementType<USkeletalMeshComponent_*> *)((longlong)FVar1 + 8);
  if (*(ForElementType<USkeletalMeshComponent_*> *)((longlong)FVar1 + 8) ==
      (ForElementType<USkeletalMeshComponent_*>)0x0) {
    FVar5 = FVar1;
  }
  local_res10[0] = param_1;
  if (((ulonglong)FVar5 <= local_res10) &&
     (local_res10 <
      (USkeletalMeshComponent **)((longlong)FVar5 + (longlong)*(int *)((longlong)FVar1 + 0x14) * 8))
     ) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = *(int *)((longlong)FVar1 + 0x10);
  if (iVar4 == *(int *)((longlong)FVar1 + 0x14)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<USkeletalMeshComponent_*>_>
                      (0x808,(ForElementType<USkeletalMeshComponent_*> *)FVar1,
                       (int *)((longlong)FVar1 + 0x14));
  }
  *(int *)((longlong)FVar1 + 0x10) = iVar4 + 1;
  FVar5 = *(ForElementType<USkeletalMeshComponent_*> *)((longlong)FVar1 + 8);
  if (*(ForElementType<USkeletalMeshComponent_*> *)((longlong)FVar1 + 8) ==
      (ForElementType<USkeletalMeshComponent_*>)0x0) {
    FVar5 = FVar1;
  }
  *(USkeletalMeshComponent **)((longlong)FVar5 + (longlong)iVar4 * 8) = local_res10[0];
  return;
}

