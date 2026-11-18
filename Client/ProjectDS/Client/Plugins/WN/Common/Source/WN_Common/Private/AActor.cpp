// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 2

// operator() @ 149491290

void __thiscall
`AActor::GetComponents<UWN_VolumeComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>::
operator()(void *this,UWN_VolumeComponent *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UWN_VolumeComponent *local_res10 [3];
  
  pFVar2 = *(ForAnyElementType **)this;
  local_res10[0] = param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar5 + 1;
  *(UWN_VolumeComponent **)(pFVar2->Data + (longlong)iVar5 * 8) = local_res10[0];
  return;
}

// operator() @ 149491340

void __thiscall
`AActor::
GetComponents<UWN_VolumeComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::__l2
::<lambda_1>::operator()(void *this,UWN_VolumeComponent *param_1)

{
  ForElementType<UWN_VolumeComponent_*> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<UWN_VolumeComponent_*> FVar5;
  UWN_VolumeComponent *local_res10 [3];
  
  FVar1 = *(ForElementType<UWN_VolumeComponent_*> *)this;
  FVar5 = *(ForElementType<UWN_VolumeComponent_*> *)((longlong)FVar1 + 0xc0);
  if (*(ForElementType<UWN_VolumeComponent_*> *)((longlong)FVar1 + 0xc0) ==
      (ForElementType<UWN_VolumeComponent_*>)0x0) {
    FVar5 = FVar1;
  }
  local_res10[0] = param_1;
  if (((ulonglong)FVar5 <= local_res10) &&
     (local_res10 <
      (UWN_VolumeComponent **)((longlong)FVar5 + (longlong)*(int *)((longlong)FVar1 + 0xcc) * 8))) {
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
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UWN_VolumeComponent_*>_>
                      (0x808,(ForElementType<UWN_VolumeComponent_*> *)FVar1,
                       (int *)((longlong)FVar1 + 0xcc));
  }
  *(int *)((longlong)FVar1 + 200) = iVar4 + 1;
  FVar5 = *(ForElementType<UWN_VolumeComponent_*> *)((longlong)FVar1 + 0xc0);
  if (*(ForElementType<UWN_VolumeComponent_*> *)((longlong)FVar1 + 0xc0) ==
      (ForElementType<UWN_VolumeComponent_*>)0x0) {
    FVar5 = FVar1;
  }
  *(UWN_VolumeComponent **)((longlong)FVar5 + (longlong)iVar4 * 8) = local_res10[0];
  return;
}

