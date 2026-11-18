// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_WorldUtils
// Functions: 3

// operator() @ 14a02f0b0

void __thiscall
`AActor::
GetComponents<ULocalFogVolumeComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::
__l2::<lambda_1>::operator()(void *this,ULocalFogVolumeComponent *param_1)

{
  ForElementType<ULocalFogVolumeComponent_*> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<ULocalFogVolumeComponent_*> FVar5;
  ULocalFogVolumeComponent *local_res10 [3];
  
  FVar1 = *(ForElementType<ULocalFogVolumeComponent_*> *)this;
  FVar5 = *(ForElementType<ULocalFogVolumeComponent_*> *)((longlong)FVar1 + 0xc0);
  if (*(ForElementType<ULocalFogVolumeComponent_*> *)((longlong)FVar1 + 0xc0) ==
      (ForElementType<ULocalFogVolumeComponent_*>)0x0) {
    FVar5 = FVar1;
  }
  local_res10[0] = param_1;
  if (((ulonglong)FVar5 <= local_res10) &&
     (local_res10 <
      (ULocalFogVolumeComponent **)
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
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<ULocalFogVolumeComponent_*>_>
                      (0x808,(ForElementType<ULocalFogVolumeComponent_*> *)FVar1,
                       (int *)((longlong)FVar1 + 0xcc));
  }
  *(int *)((longlong)FVar1 + 200) = iVar4 + 1;
  FVar5 = *(ForElementType<ULocalFogVolumeComponent_*> *)((longlong)FVar1 + 0xc0);
  if (*(ForElementType<ULocalFogVolumeComponent_*> *)((longlong)FVar1 + 0xc0) ==
      (ForElementType<ULocalFogVolumeComponent_*>)0x0) {
    FVar5 = FVar1;
  }
  *(ULocalFogVolumeComponent **)((longlong)FVar5 + (longlong)iVar4 * 8) = local_res10[0];
  return;
}

// operator() @ 14a02f190

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
`AActor::
GetComponents<USkyAtmosphereComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::
__l2::<lambda_1>::operator()(void *this,USkyAtmosphereComponent *param_1)

{
  ForElementType<USkyAtmosphereComponent_*> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<USkyAtmosphereComponent_*> FVar5;
  USkyAtmosphereComponent *local_res10 [3];
  
  FVar1 = *(ForElementType<USkyAtmosphereComponent_*> *)this;
  FVar5 = *(ForElementType<USkyAtmosphereComponent_*> *)((longlong)FVar1 + 0xc0);
  if (*(ForElementType<USkyAtmosphereComponent_*> *)((longlong)FVar1 + 0xc0) ==
      (ForElementType<USkyAtmosphereComponent_*>)0x0) {
    FVar5 = FVar1;
  }
  local_res10[0] = param_1;
  if (((ulonglong)FVar5 <= local_res10) &&
     (local_res10 <
      (USkyAtmosphereComponent **)((longlong)FVar5 + (longlong)*(int *)((longlong)FVar1 + 0xcc) * 8)
     )) {
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
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<USkyAtmosphereComponent_*>_>
                      (0x808,(ForElementType<USkyAtmosphereComponent_*> *)FVar1,
                       (int *)((longlong)FVar1 + 0xcc));
  }
  *(int *)((longlong)FVar1 + 200) = iVar4 + 1;
  FVar5 = *(ForElementType<USkyAtmosphereComponent_*> *)((longlong)FVar1 + 0xc0);
  if (*(ForElementType<USkyAtmosphereComponent_*> *)((longlong)FVar1 + 0xc0) ==
      (ForElementType<USkyAtmosphereComponent_*>)0x0) {
    FVar5 = FVar1;
  }
  *(USkyAtmosphereComponent **)((longlong)FVar5 + (longlong)iVar4 * 8) = local_res10[0];
  return;
}

// operator() @ 14a02f270

void __thiscall
`AActor::
GetComponents<UVolumetricCloudComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'
::__l2::<lambda_1>::operator()(void *this,UVolumetricCloudComponent *param_1)

{
  ForElementType<UVolumetricCloudComponent_*> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<UVolumetricCloudComponent_*> FVar5;
  UVolumetricCloudComponent *local_res10 [3];
  
  FVar1 = *(ForElementType<UVolumetricCloudComponent_*> *)this;
  FVar5 = *(ForElementType<UVolumetricCloudComponent_*> *)((longlong)FVar1 + 0xc0);
  if (*(ForElementType<UVolumetricCloudComponent_*> *)((longlong)FVar1 + 0xc0) ==
      (ForElementType<UVolumetricCloudComponent_*>)0x0) {
    FVar5 = FVar1;
  }
  local_res10[0] = param_1;
  if (((ulonglong)FVar5 <= local_res10) &&
     (local_res10 <
      (UVolumetricCloudComponent **)
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
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UVolumetricCloudComponent_*>_>
                      (0x808,(ForElementType<UVolumetricCloudComponent_*> *)FVar1,
                       (int *)((longlong)FVar1 + 0xcc));
  }
  *(int *)((longlong)FVar1 + 200) = iVar4 + 1;
  FVar5 = *(ForElementType<UVolumetricCloudComponent_*> *)((longlong)FVar1 + 0xc0);
  if (*(ForElementType<UVolumetricCloudComponent_*> *)((longlong)FVar1 + 0xc0) ==
      (ForElementType<UVolumetricCloudComponent_*>)0x0) {
    FVar5 = FVar1;
  }
  *(UVolumetricCloudComponent **)((longlong)FVar5 + (longlong)iVar4 * 8) = local_res10[0];
  return;
}

