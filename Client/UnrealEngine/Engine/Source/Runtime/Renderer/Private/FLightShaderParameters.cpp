// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 21

// zzAppendMemberGetPrev @ 144bf2330

void * __cdecl
FLightShaderParameters::zzAppendMemberGetPrev
          (zzFirstMemberId param_1,
          TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> *param_2)

{
  return (void *)0x0;
}

// zzAppendMemberGetPrev @ 144bf2340

void * __cdecl
FLightShaderParameters::zzAppendMemberGetPrev
          (zzNextMemberIdColor param_1,
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
  local_38 = L"Color";
  pwStack_30 = L"";
  local_28 = 0x462;
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

// zzAppendMemberGetPrev @ 144bf2460

void * __cdecl
FLightShaderParameters::zzAppendMemberGetPrev
          (zzNextMemberIdDiffuseScale param_1,
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
  local_38 = L"DiffuseScale";
  pwStack_30 = L"";
  local_28 = 0x46e;
  uStack_24 = 0x30;
  uStack_20 = 4;
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

// zzAppendMemberGetPrev @ 144bf2580

void * __cdecl
FLightShaderParameters::zzAppendMemberGetPrev
          (zzNextMemberIdDirection param_1,
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
  local_38 = L"Direction";
  pwStack_30 = L"";
  local_28 = 0x468;
  uStack_24 = 0x20;
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

// zzAppendMemberGetPrev @ 144bf26a0

void * __cdecl
FLightShaderParameters::zzAppendMemberGetPrev
          (zzNextMemberIdFalloffExponent param_1,
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
  local_38 = L"FalloffExponent";
  pwStack_30 = L"";
  local_28 = 0x465;
  uStack_24 = 0x1c;
  uStack_20 = 4;
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

// zzAppendMemberGetPrev @ 144bf27c0

void * __cdecl
FLightShaderParameters::zzAppendMemberGetPrev
          (zzNextMemberIdIESAtlasIndex param_1,
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
  local_38 = L"IESAtlasIndex";
  pwStack_30 = L"";
  local_28 = 0x48c;
  uStack_24 = 0x7c;
  uStack_20 = 4;
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

// zzAppendMemberGetPrev @ 144bf28e0

void * __cdecl
FLightShaderParameters::zzAppendMemberGetPrev
          (zzNextMemberIdInvRadius param_1,
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
  local_38 = L"InvRadius";
  pwStack_30 = L"";
  local_28 = 0x45f;
  uStack_24 = 0xc;
  uStack_20 = 4;
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

// zzAppendMemberGetPrev @ 144bf2a00

void * __cdecl
FLightShaderParameters::zzAppendMemberGetPrev
          (zzNextMemberIdLightFunctionAtlasLightIndex param_1,
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
  local_38 = L"LightFunctionAtlasLightIndex";
  pwStack_30 = L"";
  local_28 = 0x48f;
  uStack_24 = 0x80;
  uStack_20 = 3;
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

// zzAppendMemberGetPrev @ 144bf2b20

void * __cdecl
FLightShaderParameters::zzAppendMemberGetPrev
          (zzNextMemberIdRectLightAtlasMaxLevel param_1,
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
  local_38 = L"RectLightAtlasMaxLevel";
  pwStack_30 = L"";
  local_28 = 0x489;
  uStack_24 = 0x78;
  uStack_20 = 4;
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

// zzAppendMemberGetPrev @ 144bf2c40

void * __cdecl
FLightShaderParameters::zzAppendMemberGetPrev
          (zzNextMemberIdRectLightAtlasUVOffset param_1,
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
  local_38 = L"RectLightAtlasUVOffset";
  pwStack_30 = L"";
  local_28 = 0x487;
  uStack_24 = 0x68;
  uStack_20 = 4;
  uStack_1c = 1;
  uStack_10 = 0;
  local_18 = 2;
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

// zzAppendMemberGetPrev @ 144bf2d60

void * __cdecl
FLightShaderParameters::zzAppendMemberGetPrev
          (zzNextMemberIdRectLightAtlasUVScale param_1,
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
  local_38 = L"RectLightAtlasUVScale";
  pwStack_30 = L"";
  local_28 = 0x488;
  uStack_24 = 0x70;
  uStack_20 = 4;
  uStack_1c = 1;
  uStack_10 = 0;
  local_18 = 2;
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

// zzAppendMemberGetPrev @ 144bf2e80

void * __cdecl
FLightShaderParameters::zzAppendMemberGetPrev
          (zzNextMemberIdRectLightBarnCosAngle param_1,
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
  local_38 = L"RectLightBarnCosAngle";
  pwStack_30 = L"";
  local_28 = 0x481;
  uStack_24 = 0x60;
  uStack_20 = 4;
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

// zzAppendMemberGetPrev @ 144bf2fa0

void * __cdecl
FLightShaderParameters::zzAppendMemberGetPrev
          (zzNextMemberIdRectLightBarnLength param_1,
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
  local_38 = L"RectLightBarnLength";
  pwStack_30 = L"";
  local_28 = 0x484;
  uStack_24 = 100;
  uStack_20 = 4;
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

// zzAppendMemberGetPrev @ 144bf30c0

void * __cdecl
FLightShaderParameters::zzAppendMemberGetPrev
          (zzNextMemberIdSoftSourceRadius param_1,
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
  local_38 = L"SoftSourceRadius";
  pwStack_30 = L"";
  local_28 = 0x47b;
  uStack_24 = 0x58;
  uStack_20 = 4;
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

// zzAppendMemberGetPrev @ 144bf31e0

void * __cdecl
FLightShaderParameters::zzAppendMemberGetPrev
          (zzNextMemberIdSourceLength param_1,
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
  local_38 = L"SourceLength";
  pwStack_30 = L"";
  local_28 = 0x47e;
  uStack_24 = 0x5c;
  uStack_20 = 4;
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

// zzAppendMemberGetPrev @ 144bf3300

void * __cdecl
FLightShaderParameters::zzAppendMemberGetPrev
          (zzNextMemberIdSourceRadius param_1,
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
  local_38 = L"SourceRadius";
  pwStack_30 = L"";
  local_28 = 0x475;
  uStack_24 = 0x4c;
  uStack_20 = 4;
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

// zzAppendMemberGetPrev @ 144bf3420

void * __cdecl
FLightShaderParameters::zzAppendMemberGetPrev
          (zzNextMemberIdSpecularScale param_1,
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
  local_38 = L"SpecularScale";
  pwStack_30 = L"";
  local_28 = 0x46b;
  uStack_24 = 0x2c;
  uStack_20 = 4;
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

// zzAppendMemberGetPrev @ 144bf3540

void * __cdecl
FLightShaderParameters::zzAppendMemberGetPrev
          (zzNextMemberIdSpotAngles param_1,
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
  local_38 = L"SpotAngles";
  pwStack_30 = L"";
  local_28 = 0x478;
  uStack_24 = 0x50;
  uStack_20 = 4;
  uStack_1c = 1;
  uStack_10 = 0;
  local_18 = 2;
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

// zzAppendMemberGetPrev @ 144bf3660

void * __cdecl
FLightShaderParameters::zzAppendMemberGetPrev
          (zzNextMemberIdTangent param_1,
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
  local_38 = L"Tangent";
  pwStack_30 = L"";
  local_28 = 0x472;
  uStack_24 = 0x40;
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

// zzAppendMemberGetPrev @ 144bf3780

void * __cdecl
FLightShaderParameters::zzAppendMemberGetPrev
          (zzNextMemberIdTranslatedWorldPosition param_1,
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
  
  local_28 = 0x45c;
  local_38 = L"TranslatedWorldPosition";
  pFVar1 = (param_2->AllocatorInstance).Data;
  pwStack_30 = L"";
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
  *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x10) = local_28;
  *(ulonglong *)(pFVar1 + lVar6 * 0x30 + 0x10 + 8) =
       CONCAT44(uStack_1c,CONCAT22(uStack_1e,uStack_20));
  *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x20) = local_18;
  *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x20 + 8) = uStack_10;
  return zzAppendMemberGetPrev;
}

// zzAppendMemberGetPrev @ 144bf38a0

void * __cdecl
FLightShaderParameters::zzAppendMemberGetPrev
          (zzNextMemberIdbAffectsTranslucentLighting param_1,
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
  local_38 = L"bAffectsTranslucentLighting";
  pwStack_30 = L"";
  local_28 = 0x492;
  uStack_24 = 0x84;
  uStack_20 = 3;
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

