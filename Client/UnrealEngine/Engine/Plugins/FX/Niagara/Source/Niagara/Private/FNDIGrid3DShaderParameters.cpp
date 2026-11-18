// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 15

// zzAppendMemberGetPrev @ 149193eb0

void * __cdecl
FNDIGrid3DShaderParameters::zzAppendMemberGetPrev
          (zzFirstMemberId param_1,
          TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> *param_2)

{
  return (void *)0x0;
}

// zzAppendMemberGetPrev @ 149193ec0

void * __cdecl
FNDIGrid3DShaderParameters::zzAppendMemberGetPrev
          (zzNextMemberIdCellSize param_1,
          TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  wchar_t *local_38;
  wchar_t *pwStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_38 = L"CellSize";
  pwStack_30 = L"";
  local_28 = 0x25;
  uStack_24 = 0x30;
  uStack_20 = 4;
  uStack_1c = 1;
  uStack_10 = 0;
  local_18 = 3;
  if ((pFVar1 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar1 + (longlong)param_2->ArrayMax * 0x30)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  lVar6 = (longlong)iVar4;
  param_2->ArrayNum = iVar4 + 1;
  pFVar1 = (param_2->AllocatorInstance).Data;
  *(wchar_t **)(pFVar1 + lVar6 * 0x30) = local_38;
  *(wchar_t **)(pFVar1 + lVar6 * 0x30 + 8) = pwStack_30;
  *(ulonglong *)(pFVar1 + lVar6 * 0x30 + 0x10) = CONCAT44(uStack_24,local_28);
  *(ulonglong *)(pFVar1 + lVar6 * 0x30 + 0x10 + 8) =
       CONCAT44(uStack_1c,CONCAT22(uStack_1e,uStack_20));
  *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x20) = local_18;
  *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x20 + 8) = uStack_10;
  return zzAppendMemberGetPrev;
}

// zzAppendMemberGetPrev @ 149193fe0

void * __cdecl
FNDIGrid3DShaderParameters::zzAppendMemberGetPrev
          (zzNextMemberIdGrid param_1,
          TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  wchar_t *local_38;
  wchar_t *pwStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_38 = L"Grid";
  pwStack_30 = L"Texture3D<float>";
  local_28 = 0x2c;
  uStack_24 = 0x90;
  uStack_20 = 0xc;
  uStack_1c = 1;
  uStack_10 = 0;
  local_18 = 1;
  if ((pFVar1 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar1 + (longlong)param_2->ArrayMax * 0x30)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  lVar6 = (longlong)iVar4;
  param_2->ArrayNum = iVar4 + 1;
  pFVar1 = (param_2->AllocatorInstance).Data;
  *(wchar_t **)(pFVar1 + lVar6 * 0x30) = local_38;
  *(wchar_t **)(pFVar1 + lVar6 * 0x30 + 8) = pwStack_30;
  *(ulonglong *)(pFVar1 + lVar6 * 0x30 + 0x10) = CONCAT44(uStack_24,local_28);
  *(ulonglong *)(pFVar1 + lVar6 * 0x30 + 0x10 + 8) =
       CONCAT44(uStack_1c,CONCAT22(uStack_1e,uStack_20));
  *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x20) = local_18;
  *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x20 + 8) = uStack_10;
  return zzAppendMemberGetPrev;
}

// zzAppendMemberGetPrev @ 149194100

void * __cdecl
FNDIGrid3DShaderParameters::zzAppendMemberGetPrev
          (zzNextMemberIdGridSampler param_1,
          TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  wchar_t *local_38;
  wchar_t *pwStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_38 = L"GridSampler";
  pwStack_30 = L"SamplerState";
  local_28 = 0x2d;
  uStack_24 = 0x98;
  uStack_20 = 8;
  uStack_1c = 1;
  uStack_10 = 0;
  local_18 = 1;
  if ((pFVar1 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar1 + (longlong)param_2->ArrayMax * 0x30)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  lVar6 = (longlong)iVar4;
  param_2->ArrayNum = iVar4 + 1;
  pFVar1 = (param_2->AllocatorInstance).Data;
  *(wchar_t **)(pFVar1 + lVar6 * 0x30) = local_38;
  *(wchar_t **)(pFVar1 + lVar6 * 0x30 + 8) = pwStack_30;
  *(ulonglong *)(pFVar1 + lVar6 * 0x30 + 0x10) = CONCAT44(uStack_24,local_28);
  *(ulonglong *)(pFVar1 + lVar6 * 0x30 + 0x10 + 8) =
       CONCAT44(uStack_1c,CONCAT22(uStack_1e,uStack_20));
  *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x20) = local_18;
  *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x20 + 8) = uStack_10;
  return zzAppendMemberGetPrev;
}

// zzAppendMemberGetPrev @ 149194220

void * __cdecl
FNDIGrid3DShaderParameters::zzAppendMemberGetPrev
          (zzNextMemberIdNumAttributes param_1,
          TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  wchar_t *local_38;
  wchar_t *pwStack_30;
  undefined8 local_28;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_28 = 0x21;
  local_38 = L"NumAttributes";
  pFVar1 = (param_2->AllocatorInstance).Data;
  pwStack_30 = L"";
  uStack_20 = 2;
  uStack_1c = 1;
  uStack_10 = 0;
  local_18 = 1;
  if ((pFVar1 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar1 + (longlong)param_2->ArrayMax * 0x30)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  lVar6 = (longlong)iVar4;
  param_2->ArrayNum = iVar4 + 1;
  pFVar1 = (param_2->AllocatorInstance).Data;
  *(wchar_t **)(pFVar1 + lVar6 * 0x30) = local_38;
  *(wchar_t **)(pFVar1 + lVar6 * 0x30 + 8) = pwStack_30;
  *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x10) = local_28;
  *(ulonglong *)(pFVar1 + lVar6 * 0x30 + 0x10 + 8) =
       CONCAT44(uStack_1c,CONCAT22(uStack_1e,uStack_20));
  *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x20) = local_18;
  *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x20 + 8) = uStack_10;
  return zzAppendMemberGetPrev;
}

// zzAppendMemberGetPrev @ 149194340

void * __cdecl
FNDIGrid3DShaderParameters::zzAppendMemberGetPrev
          (zzNextMemberIdNumCells param_1,
          TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  wchar_t *local_38;
  wchar_t *pwStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_38 = L"NumCells";
  pwStack_30 = L"";
  local_28 = 0x24;
  uStack_24 = 0x20;
  uStack_20 = 2;
  uStack_1c = 1;
  uStack_10 = 0;
  local_18 = 3;
  if ((pFVar1 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar1 + (longlong)param_2->ArrayMax * 0x30)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  lVar6 = (longlong)iVar4;
  param_2->ArrayNum = iVar4 + 1;
  pFVar1 = (param_2->AllocatorInstance).Data;
  *(wchar_t **)(pFVar1 + lVar6 * 0x30) = local_38;
  *(wchar_t **)(pFVar1 + lVar6 * 0x30 + 8) = pwStack_30;
  *(ulonglong *)(pFVar1 + lVar6 * 0x30 + 0x10) = CONCAT44(uStack_24,local_28);
  *(ulonglong *)(pFVar1 + lVar6 * 0x30 + 0x10 + 8) =
       CONCAT44(uStack_1c,CONCAT22(uStack_1e,uStack_20));
  *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x20) = local_18;
  *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x20 + 8) = uStack_10;
  return zzAppendMemberGetPrev;
}

// zzAppendMemberGetPrev @ 149194460

void * __cdecl
FNDIGrid3DShaderParameters::zzAppendMemberGetPrev
          (zzNextMemberIdNumNamedAttributes param_1,
          TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  wchar_t *local_38;
  wchar_t *pwStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_38 = L"NumNamedAttributes";
  pwStack_30 = L"";
  local_28 = 0x22;
  uStack_24 = 4;
  uStack_20 = 2;
  uStack_1c = 1;
  uStack_10 = 0;
  local_18 = 1;
  if ((pFVar1 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar1 + (longlong)param_2->ArrayMax * 0x30)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  lVar6 = (longlong)iVar4;
  param_2->ArrayNum = iVar4 + 1;
  pFVar1 = (param_2->AllocatorInstance).Data;
  *(wchar_t **)(pFVar1 + lVar6 * 0x30) = local_38;
  *(wchar_t **)(pFVar1 + lVar6 * 0x30 + 8) = pwStack_30;
  *(ulonglong *)(pFVar1 + lVar6 * 0x30 + 0x10) = CONCAT44(uStack_24,local_28);
  *(ulonglong *)(pFVar1 + lVar6 * 0x30 + 0x10 + 8) =
       CONCAT44(uStack_1c,CONCAT22(uStack_1e,uStack_20));
  *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x20) = local_18;
  *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x20 + 8) = uStack_10;
  return zzAppendMemberGetPrev;
}

// zzAppendMemberGetPrev @ 149194580

void * __cdecl
FNDIGrid3DShaderParameters::zzAppendMemberGetPrev
          (zzNextMemberIdNumTiles param_1,
          TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  wchar_t *local_38;
  wchar_t *pwStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_38 = L"NumTiles";
  pwStack_30 = L"";
  local_28 = 0x26;
  uStack_24 = 0x40;
  uStack_20 = 2;
  uStack_1c = 1;
  uStack_10 = 0;
  local_18 = 3;
  if ((pFVar1 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar1 + (longlong)param_2->ArrayMax * 0x30)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  lVar6 = (longlong)iVar4;
  param_2->ArrayNum = iVar4 + 1;
  pFVar1 = (param_2->AllocatorInstance).Data;
  *(wchar_t **)(pFVar1 + lVar6 * 0x30) = local_38;
  *(wchar_t **)(pFVar1 + lVar6 * 0x30 + 8) = pwStack_30;
  *(ulonglong *)(pFVar1 + lVar6 * 0x30 + 0x10) = CONCAT44(uStack_24,local_28);
  *(ulonglong *)(pFVar1 + lVar6 * 0x30 + 0x10 + 8) =
       CONCAT44(uStack_1c,CONCAT22(uStack_1e,uStack_20));
  *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x20) = local_18;
  *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x20 + 8) = uStack_10;
  return zzAppendMemberGetPrev;
}

// zzAppendMemberGetPrev @ 1491946a0

void * __cdecl
FNDIGrid3DShaderParameters::zzAppendMemberGetPrev
          (zzNextMemberIdOneOverNumTiles param_1,
          TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  wchar_t *local_38;
  wchar_t *pwStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_38 = L"OneOverNumTiles";
  pwStack_30 = L"";
  local_28 = 0x27;
  uStack_24 = 0x50;
  uStack_20 = 4;
  uStack_1c = 1;
  uStack_10 = 0;
  local_18 = 3;
  if ((pFVar1 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar1 + (longlong)param_2->ArrayMax * 0x30)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  lVar6 = (longlong)iVar4;
  param_2->ArrayNum = iVar4 + 1;
  pFVar1 = (param_2->AllocatorInstance).Data;
  *(wchar_t **)(pFVar1 + lVar6 * 0x30) = local_38;
  *(wchar_t **)(pFVar1 + lVar6 * 0x30 + 8) = pwStack_30;
  *(ulonglong *)(pFVar1 + lVar6 * 0x30 + 0x10) = CONCAT44(uStack_24,local_28);
  *(ulonglong *)(pFVar1 + lVar6 * 0x30 + 0x10 + 8) =
       CONCAT44(uStack_1c,CONCAT22(uStack_1e,uStack_20));
  *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x20) = local_18;
  *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x20 + 8) = uStack_10;
  return zzAppendMemberGetPrev;
}

// zzAppendMemberGetPrev @ 1491947c0

void * __cdecl
FNDIGrid3DShaderParameters::zzAppendMemberGetPrev
          (zzNextMemberIdOutputGrid param_1,
          TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  wchar_t *local_38;
  wchar_t *pwStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_38 = L"OutputGrid";
  pwStack_30 = L"RWTexture3D<float>";
  local_28 = 0x2e;
  uStack_24 = 0xa0;
  uStack_20 = 0xe;
  uStack_1c = 1;
  uStack_10 = 0;
  local_18 = 1;
  if ((pFVar1 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar1 + (longlong)param_2->ArrayMax * 0x30)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  lVar6 = (longlong)iVar4;
  param_2->ArrayNum = iVar4 + 1;
  pFVar1 = (param_2->AllocatorInstance).Data;
  *(wchar_t **)(pFVar1 + lVar6 * 0x30) = local_38;
  *(wchar_t **)(pFVar1 + lVar6 * 0x30 + 8) = pwStack_30;
  *(ulonglong *)(pFVar1 + lVar6 * 0x30 + 0x10) = CONCAT44(uStack_24,local_28);
  *(ulonglong *)(pFVar1 + lVar6 * 0x30 + 0x10 + 8) =
       CONCAT44(uStack_1c,CONCAT22(uStack_1e,uStack_20));
  *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x20) = local_18;
  *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x20 + 8) = uStack_10;
  return zzAppendMemberGetPrev;
}

// zzAppendMemberGetPrev @ 1491948e0

void * __cdecl
FNDIGrid3DShaderParameters::zzAppendMemberGetPrev
          (zzNextMemberIdPerAttributeData param_1,
          TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  wchar_t *local_38;
  wchar_t *pwStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_38 = L"PerAttributeData";
  pwStack_30 = L"Buffer<float4>";
  local_28 = 0x2f;
  uStack_24 = 0xa8;
  uStack_20 = 6;
  uStack_1c = 1;
  uStack_10 = 0;
  local_18 = 1;
  if ((pFVar1 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar1 + (longlong)param_2->ArrayMax * 0x30)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  lVar6 = (longlong)iVar4;
  param_2->ArrayNum = iVar4 + 1;
  pFVar1 = (param_2->AllocatorInstance).Data;
  *(wchar_t **)(pFVar1 + lVar6 * 0x30) = local_38;
  *(wchar_t **)(pFVar1 + lVar6 * 0x30 + 8) = pwStack_30;
  *(ulonglong *)(pFVar1 + lVar6 * 0x30 + 0x10) = CONCAT44(uStack_24,local_28);
  *(ulonglong *)(pFVar1 + lVar6 * 0x30 + 0x10 + 8) =
       CONCAT44(uStack_1c,CONCAT22(uStack_1e,uStack_20));
  *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x20) = local_18;
  *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x20 + 8) = uStack_10;
  return zzAppendMemberGetPrev;
}

// zzAppendMemberGetPrev @ 149194a00

void * __cdecl
FNDIGrid3DShaderParameters::zzAppendMemberGetPrev
          (zzNextMemberIdUnitClampMax param_1,
          TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  wchar_t *local_38;
  wchar_t *pwStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_38 = L"UnitClampMax";
  pwStack_30 = L"";
  local_28 = 0x29;
  uStack_24 = 0x70;
  uStack_20 = 4;
  uStack_1c = 1;
  uStack_10 = 0;
  local_18 = 3;
  if ((pFVar1 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar1 + (longlong)param_2->ArrayMax * 0x30)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  lVar6 = (longlong)iVar4;
  param_2->ArrayNum = iVar4 + 1;
  pFVar1 = (param_2->AllocatorInstance).Data;
  *(wchar_t **)(pFVar1 + lVar6 * 0x30) = local_38;
  *(wchar_t **)(pFVar1 + lVar6 * 0x30 + 8) = pwStack_30;
  *(ulonglong *)(pFVar1 + lVar6 * 0x30 + 0x10) = CONCAT44(uStack_24,local_28);
  *(ulonglong *)(pFVar1 + lVar6 * 0x30 + 0x10 + 8) =
       CONCAT44(uStack_1c,CONCAT22(uStack_1e,uStack_20));
  *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x20) = local_18;
  *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x20 + 8) = uStack_10;
  return zzAppendMemberGetPrev;
}

// zzAppendMemberGetPrev @ 149194b20

void * __cdecl
FNDIGrid3DShaderParameters::zzAppendMemberGetPrev
          (zzNextMemberIdUnitClampMin param_1,
          TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  wchar_t *local_38;
  wchar_t *pwStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_38 = L"UnitClampMin";
  pwStack_30 = L"";
  local_28 = 0x28;
  uStack_24 = 0x60;
  uStack_20 = 4;
  uStack_1c = 1;
  uStack_10 = 0;
  local_18 = 3;
  if ((pFVar1 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar1 + (longlong)param_2->ArrayMax * 0x30)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  lVar6 = (longlong)iVar4;
  param_2->ArrayNum = iVar4 + 1;
  pFVar1 = (param_2->AllocatorInstance).Data;
  *(wchar_t **)(pFVar1 + lVar6 * 0x30) = local_38;
  *(wchar_t **)(pFVar1 + lVar6 * 0x30 + 8) = pwStack_30;
  *(ulonglong *)(pFVar1 + lVar6 * 0x30 + 0x10) = CONCAT44(uStack_24,local_28);
  *(ulonglong *)(pFVar1 + lVar6 * 0x30 + 0x10 + 8) =
       CONCAT44(uStack_1c,CONCAT22(uStack_1e,uStack_20));
  *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x20) = local_18;
  *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x20 + 8) = uStack_10;
  return zzAppendMemberGetPrev;
}

// zzAppendMemberGetPrev @ 149194c40

void * __cdecl
FNDIGrid3DShaderParameters::zzAppendMemberGetPrev
          (zzNextMemberIdUnitToUV param_1,
          TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  wchar_t *local_38;
  wchar_t *pwStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_38 = L"UnitToUV";
  pwStack_30 = L"";
  local_28 = 0x23;
  uStack_24 = 0x10;
  uStack_20 = 4;
  uStack_1c = 1;
  uStack_10 = 0;
  local_18 = 3;
  if ((pFVar1 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar1 + (longlong)param_2->ArrayMax * 0x30)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  lVar6 = (longlong)iVar4;
  param_2->ArrayNum = iVar4 + 1;
  pFVar1 = (param_2->AllocatorInstance).Data;
  *(wchar_t **)(pFVar1 + lVar6 * 0x30) = local_38;
  *(wchar_t **)(pFVar1 + lVar6 * 0x30 + 8) = pwStack_30;
  *(ulonglong *)(pFVar1 + lVar6 * 0x30 + 0x10) = CONCAT44(uStack_24,local_28);
  *(ulonglong *)(pFVar1 + lVar6 * 0x30 + 0x10 + 8) =
       CONCAT44(uStack_1c,CONCAT22(uStack_1e,uStack_20));
  *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x20) = local_18;
  *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x20 + 8) = uStack_10;
  return zzAppendMemberGetPrev;
}

// zzAppendMemberGetPrev @ 149194d60

void * __cdecl
FNDIGrid3DShaderParameters::zzAppendMemberGetPrev
          (zzNextMemberIdWorldBBoxSize param_1,
          TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  wchar_t *local_38;
  wchar_t *pwStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_38 = L"WorldBBoxSize";
  pwStack_30 = L"";
  local_28 = 0x2a;
  uStack_24 = 0x80;
  uStack_20 = 4;
  uStack_1c = 1;
  uStack_10 = 0;
  local_18 = 3;
  if ((pFVar1 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar1 + (longlong)param_2->ArrayMax * 0x30)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  lVar6 = (longlong)iVar4;
  param_2->ArrayNum = iVar4 + 1;
  pFVar1 = (param_2->AllocatorInstance).Data;
  *(wchar_t **)(pFVar1 + lVar6 * 0x30) = local_38;
  *(wchar_t **)(pFVar1 + lVar6 * 0x30 + 8) = pwStack_30;
  *(ulonglong *)(pFVar1 + lVar6 * 0x30 + 0x10) = CONCAT44(uStack_24,local_28);
  *(ulonglong *)(pFVar1 + lVar6 * 0x30 + 0x10 + 8) =
       CONCAT44(uStack_1c,CONCAT22(uStack_1e,uStack_20));
  *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x20) = local_18;
  *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x20 + 8) = uStack_10;
  return zzAppendMemberGetPrev;
}

