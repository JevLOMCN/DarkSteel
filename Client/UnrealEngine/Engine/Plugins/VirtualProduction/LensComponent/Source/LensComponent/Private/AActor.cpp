// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LensComponent
// Functions: 2

// operator() @ 14d7505b0

void __thiscall
`AActor::
GetComponents<UCineCameraComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::__l2
::<lambda_1>::operator()(void *this,UCineCameraComponent *param_1)

{
  ForElementType<UCineCameraComponent_*> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<UCineCameraComponent_*> FVar5;
  UCineCameraComponent *local_res10 [3];
  
  FVar1 = *(ForElementType<UCineCameraComponent_*> *)this;
  FVar5 = *(ForElementType<UCineCameraComponent_*> *)((longlong)FVar1 + 0xc0);
  if (*(ForElementType<UCineCameraComponent_*> *)((longlong)FVar1 + 0xc0) ==
      (ForElementType<UCineCameraComponent_*>)0x0) {
    FVar5 = FVar1;
  }
  local_res10[0] = param_1;
  if (((ulonglong)FVar5 <= local_res10) &&
     (local_res10 <
      (UCineCameraComponent **)((longlong)FVar5 + (longlong)*(int *)((longlong)FVar1 + 0xcc) * 8)))
  {
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
  iVar4 = *(int *)((longlong)FVar1 + 200);
  if (iVar4 == *(int *)((longlong)FVar1 + 0xcc)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UCineCameraComponent_*>_>
                      (0x808,(ForElementType<UCineCameraComponent_*> *)FVar1,
                       (int *)((longlong)FVar1 + 0xcc));
  }
  *(int *)((longlong)FVar1 + 200) = iVar4 + 1;
  FVar5 = *(ForElementType<UCineCameraComponent_*> *)((longlong)FVar1 + 0xc0);
  if (*(ForElementType<UCineCameraComponent_*> *)((longlong)FVar1 + 0xc0) ==
      (ForElementType<UCineCameraComponent_*>)0x0) {
    FVar5 = FVar1;
  }
  *(UCineCameraComponent **)((longlong)FVar5 + (longlong)iVar4 * 8) = local_res10[0];
  return;
}

// operator() @ 14d750690

void __thiscall
`AActor::
GetComponents<ULiveLinkComponentController,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'
::__l2::<lambda_1>::operator()(void *this,ULiveLinkComponentController *param_1)

{
  ForElementType<ULiveLinkComponentController_*> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<ULiveLinkComponentController_*> FVar5;
  ULiveLinkComponentController *local_res10 [3];
  
  FVar1 = *(ForElementType<ULiveLinkComponentController_*> *)this;
  FVar5 = *(ForElementType<ULiveLinkComponentController_*> *)((longlong)FVar1 + 0xc0);
  if (*(ForElementType<ULiveLinkComponentController_*> *)((longlong)FVar1 + 0xc0) ==
      (ForElementType<ULiveLinkComponentController_*>)0x0) {
    FVar5 = FVar1;
  }
  local_res10[0] = param_1;
  if (((ulonglong)FVar5 <= local_res10) &&
     (local_res10 <
      (ULiveLinkComponentController **)
      ((longlong)FVar5 + (longlong)*(int *)((longlong)FVar1 + 0xcc) * 8))) {
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
  iVar4 = *(int *)((longlong)FVar1 + 200);
  if (iVar4 == *(int *)((longlong)FVar1 + 0xcc)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<ULiveLinkComponentController_*>_>
                      (0x808,(ForElementType<ULiveLinkComponentController_*> *)FVar1,
                       (int *)((longlong)FVar1 + 0xcc));
  }
  *(int *)((longlong)FVar1 + 200) = iVar4 + 1;
  FVar5 = *(ForElementType<ULiveLinkComponentController_*> *)((longlong)FVar1 + 0xc0);
  if (*(ForElementType<ULiveLinkComponentController_*> *)((longlong)FVar1 + 0xc0) ==
      (ForElementType<ULiveLinkComponentController_*>)0x0) {
    FVar5 = FVar1;
  }
  *(ULiveLinkComponentController **)((longlong)FVar5 + (longlong)iVar4 * 8) = local_res10[0];
  return;
}

