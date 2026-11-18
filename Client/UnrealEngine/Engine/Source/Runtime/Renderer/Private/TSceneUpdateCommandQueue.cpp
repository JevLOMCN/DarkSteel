// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 31

// Enqueue<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>::TPayloadBase<7,0>_> @ 1453d9850

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::
Enqueue<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>::TPayloadBase<7,0>_>
          (void *this,FPrimitiveSceneInfo *param_1,TPayloadBase<7,0> *param_2)

{
  longlong lVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ForElementType<int> FVar14;
  longlong lVar15;
  ForElementType<int> this_00;
  longlong lVar16;
  int local_res8 [2];
  
  if ((*(int *)((longlong)this + 0x288) != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("RaceGuard == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                         ,0xc3,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar5 = GetOrAddCommandSlot(this,param_1);
  puVar9 = (undefined8 *)0x0;
  uVar10 = 0;
  if ((int)uVar5 < *(int *)((longlong)this + 0x208)) {
    uVar10 = ~uVar5 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar15 = (longlong)(int)uVar5 * 0x50;
  lVar16 = *(longlong *)((longlong)this + 0x200) + lVar15;
  if (*(longlong *)((longlong)this + 0x38) == 0) {
    puVar8 = ::operator_new(0x30);
    if (puVar8 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar8 + 1) = 1;
      *puVar8 = &
                ___7__TPayloadArray_U__TPayloadBase__06_0A____TSceneUpdateCommandQueue_VFPrimitiveSceneInfo__W4EPrimitiveUpdateDirtyFlags__W4EPrimitiveUpdateId_______TSceneUpdateCommandQueue_VFPrimitiveSceneInfo__W4EPrimitiveUpdateDirtyFlags__W4EPrimitiveUpdateId____6B_
      ;
      puVar8[2] = 0;
      puVar8[3] = 0;
      puVar8[4] = 0;
      puVar8[5] = 0;
      puVar9 = puVar8;
    }
    puVar8 = *(undefined8 **)((longlong)this + 0x38);
    *(undefined8 **)((longlong)this + 0x38) = puVar9;
    if (puVar8 != (undefined8 *)0x0) {
      (**(code **)*puVar8)(puVar8,1);
    }
  }
  if (((*(longlong *)((longlong)this + 0x38) != 0) &&
      (*(int *)(*(longlong *)((longlong)this + 0x38) + 8) != 1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PayloadArrays[int32(PayloadType::Id)] == nullptr || PayloadArrays[int32(PayloadType::Id)]->PayloadByteSize == sizeof(PayloadType)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                         ,0x236,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar1 = *(longlong *)((longlong)this + 0x38);
  if ((lVar1 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Payloads != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                         ,0xce,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((char)*(undefined8 *)(lVar16 + 8) < '\0') {
    uVar10 = (uint)*(undefined8 *)(lVar16 + 8) & 0x7f;
    uVar11 = (ulonglong)uVar10 - ((ulonglong)(uVar10 >> 1) & 0x5555555555555555);
    uVar11 = (uVar11 >> 2 & 0x3333333333333333) + (uVar11 & 0x3333333333333333);
    uVar11 = ((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if ((*(int *)(lVar16 + 0x48) <= (int)(uint)(byte)(uVar11 >> 0x38)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar7 = *(int *)(lVar1 + 0x28);
    lVar12 = *(longlong *)(lVar16 + 0x40);
    if (*(longlong *)(lVar16 + 0x40) == 0) {
      lVar12 = lVar16 + 0x20;
    }
    uVar10 = *(uint *)(lVar12 + (uVar11 >> 0x38) * 4);
    if (uVar10 != 0xffffffff) {
      uVar6 = 0;
      if ((int)uVar10 < iVar7) {
        uVar6 = ~uVar10 >> 0x1f;
      }
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
      if ((*(uint *)(*(longlong *)(lVar1 + 0x20) + (longlong)(int)uVar10 * 4) != uVar5) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Payloads->CommandSlots[PrevPayloadOffset] == CommandSlot",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                             ,0xd4,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = 0;
      if ((int)uVar10 < *(int *)(lVar1 + 0x18)) {
        uVar5 = ~uVar10 >> 0x1f;
      }
      if (uVar5 != 0) {
        return;
      }
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (!bVar4) {
        return;
      }
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    iVar7 = *(int *)(lVar1 + 0x28);
  }
  uVar10 = 0;
  if ((int)uVar5 < *(int *)((longlong)this + 0x208)) {
    uVar10 = ~uVar5 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar16 = *(longlong *)((longlong)this + 0x200);
  uVar11 = *(ulonglong *)(lVar16 + 8 + lVar15);
  this_00 = (ForElementType<int>)(lVar16 + 0x20 + lVar15);
  uVar10 = (uint)uVar11 & 0x7f;
  uVar13 = (ulonglong)uVar10 - ((ulonglong)(uVar10 >> 1) & 0x5555555555555555);
  uVar13 = (uVar13 >> 2 & 0x3333333333333333) + (uVar13 & 0x3333333333333333);
  bVar3 = (byte)(((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  local_res8[0] = iVar7;
  if ((char)uVar11 < '\0') {
    if ((*(int *)((longlong)this_00 + 0x28) <= (int)(uint)bVar3) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FVar14 = *(ForElementType<int> *)((longlong)this_00 + 0x20);
    if (*(ForElementType<int> *)((longlong)this_00 + 0x20) == (ForElementType<int>)0x0) {
      FVar14 = this_00;
    }
    *(int *)((longlong)FVar14 + (ulonglong)bVar3 * 4) = iVar7;
  }
  else {
    *(ulonglong *)(lVar16 + 8 + lVar15) = uVar11 | 0x80;
    TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::Insert
              ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)this_00,
               local_res8,(uint)bVar3);
  }
  iVar7 = *(int *)(lVar1 + 0x28);
  if (iVar7 == *(int *)(lVar1 + 0x2c)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)(lVar1 + 0x20),(int *)(lVar1 + 0x2c));
    *(int *)(lVar1 + 0x28) = iVar7;
  }
  *(int *)(lVar1 + 0x28) = iVar7 + 1;
  *(uint *)(((ForAnyElementType *)(lVar1 + 0x20))->Data + (longlong)iVar7 * 4) = uVar5;
  iVar7 = *(int *)(lVar1 + 0x18);
  if (iVar7 == *(int *)(lVar1 + 0x1c)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,(ForAnyElementType *)(lVar1 + 0x10),(int *)(lVar1 + 0x1c));
  }
  *(int *)(lVar1 + 0x18) = iVar7 + 1;
  return;
}

// Enqueue<TSceneUpdateCommandQueue<FLightSceneInfo,enum_ELightDirtyFlags,enum_ELightUpdateId>::TPayloadBase<0,0>_> @ 1453d9cf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall
TSceneUpdateCommandQueue<FLightSceneInfo,enum_ELightDirtyFlags,enum_ELightUpdateId>::
Enqueue<TSceneUpdateCommandQueue<FLightSceneInfo,enum_ELightDirtyFlags,enum_ELightUpdateId>::TPayloadBase<0,0>_>
          (void *this,FLightSceneInfo *param_1,TPayloadBase<0,0> *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint *puVar11;
  ForElementType<int> FVar12;
  longlong lVar13;
  ForElementType<int> this_00;
  longlong lVar14;
  int local_res20 [2];
  
  if ((*(int *)((longlong)this + 0x288) != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("RaceGuard == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                         ,0xc3,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar5 = GetOrAddCommandSlot(this,param_1);
  puVar10 = (undefined8 *)0x0;
  uVar6 = 0;
  if ((int)uVar5 < *(int *)((longlong)this + 0x208)) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar14 = (longlong)(int)uVar5 * 0x50;
  lVar13 = *(longlong *)((longlong)this + 0x200) + lVar14;
  if (*(longlong *)this == 0) {
    puVar9 = ::operator_new(0x30);
    if (puVar9 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar9 + 1) = 1;
      *puVar9 = &
                ___7__TPayloadArray_U__TPayloadBase__0A__0A____TSceneUpdateCommandQueue_VFLightSceneInfo__W4ELightDirtyFlags__W4ELightUpdateId_______TSceneUpdateCommandQueue_VFLightSceneInfo__W4ELightDirtyFlags__W4ELightUpdateId____6B_
      ;
      puVar9[2] = 0;
      puVar9[3] = 0;
      puVar9[4] = 0;
      puVar9[5] = 0;
      puVar10 = puVar9;
    }
    puVar9 = *(undefined8 **)this;
    *(undefined8 **)this = puVar10;
    if (puVar9 != (undefined8 *)0x0) {
      (**(code **)*puVar9)(puVar9,1);
    }
  }
  if (((*(longlong *)this != 0) && (*(int *)(*(longlong *)this + 8) != 1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PayloadArrays[int32(PayloadType::Id)] == nullptr || PayloadArrays[int32(PayloadType::Id)]->PayloadByteSize == sizeof(PayloadType)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                         ,0x236,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar1 = *(longlong *)this;
  if ((lVar1 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Payloads != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                         ,0xce,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((*(byte *)(lVar13 + 8) & 1) == 0) {
    iVar8 = *(int *)(lVar1 + 0x28);
  }
  else {
    if ((*(int *)(lVar13 + 0x48) < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar8 = *(int *)(lVar1 + 0x28);
    puVar11 = *(uint **)(lVar13 + 0x40);
    if (*(uint **)(lVar13 + 0x40) == (uint *)0x0) {
      puVar11 = (uint *)(lVar13 + 0x20);
    }
    uVar6 = *puVar11;
    if (uVar6 != 0xffffffff) {
      uVar7 = 0;
      if ((int)uVar6 < iVar8) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((*(uint *)(*(longlong *)(lVar1 + 0x20) + (longlong)(int)uVar6 * 4) != uVar5) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Payloads->CommandSlots[PrevPayloadOffset] == CommandSlot",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                             ,0xd4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar5 = 0;
      if ((int)uVar6 < *(int *)(lVar1 + 0x18)) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if (uVar5 != 0) {
        return;
      }
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (!bVar4) {
        return;
      }
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar6 = 0;
  if ((int)uVar5 < *(int *)((longlong)this + 0x208)) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar13 = *(longlong *)((longlong)this + 0x200);
  uVar2 = *(ulonglong *)(lVar13 + 8 + lVar14);
  this_00 = (ForElementType<int>)(lVar13 + 0x20 + lVar14);
  local_res20[0] = iVar8;
  if ((uVar2 & 1) == 0) {
    *(ulonglong *)(lVar13 + 8 + lVar14) = uVar2 | 1;
    TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::Insert
              ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)this_00,
               local_res20,0);
  }
  else {
    if ((*(int *)((longlong)this_00 + 0x28) < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar12 = *(ForElementType<int> *)((longlong)this_00 + 0x20);
    if (*(ForElementType<int> *)((longlong)this_00 + 0x20) == (ForElementType<int>)0x0) {
      FVar12 = this_00;
    }
    *(int *)FVar12 = iVar8;
  }
  iVar8 = *(int *)(lVar1 + 0x28);
  if (iVar8 == *(int *)(lVar1 + 0x2c)) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)(lVar1 + 0x20),(int *)(lVar1 + 0x2c));
    *(int *)(lVar1 + 0x28) = iVar8;
  }
  *(int *)(lVar1 + 0x28) = iVar8 + 1;
  *(uint *)(((ForAnyElementType *)(lVar1 + 0x20))->Data + (longlong)iVar8 * 4) = uVar5;
  iVar8 = *(int *)(lVar1 + 0x18);
  if (iVar8 == *(int *)(lVar1 + 0x1c)) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,(ForAnyElementType *)(lVar1 + 0x10),(int *)(lVar1 + 0x1c));
  }
  *(int *)(lVar1 + 0x18) = iVar8 + 1;
  return;
}

// Enqueue<TSingleValuePrimitiveUpdatePayload<float,4,0>_> @ 1453da0d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::Enqueue<TSingleValuePrimitiveUpdatePayload<float,4,0>_>
          (void *this,FPrimitiveSceneInfo *param_1,
          TSingleValuePrimitiveUpdatePayload<float,4,0> *param_2)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar15;
  longlong lVar16;
  int local_res8 [2];
  
  if ((*(int *)((longlong)this + 0x288) != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("RaceGuard == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                         ,0xc3,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar6 = GetOrAddCommandSlot(this,param_1);
  puVar10 = (undefined8 *)0x0;
  uVar11 = 0;
  if ((int)uVar6 < *(int *)((longlong)this + 0x208)) {
    uVar11 = ~uVar6 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar16 = *(longlong *)((longlong)this + 0x200) + (longlong)(int)uVar6 * 0x50;
  if (*(longlong *)((longlong)this + 0x20) == 0) {
    puVar9 = ::operator_new(0x30);
    if (puVar9 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar9 + 1) = 4;
      *puVar9 = &
                ___7__TPayloadArray_U__TSingleValuePrimitiveUpdatePayload_M_03_0A______TSceneUpdateCommandQueue_VFPrimitiveSceneInfo__W4EPrimitiveUpdateDirtyFlags__W4EPrimitiveUpdateId____6B_
      ;
      puVar9[2] = 0;
      puVar9[3] = 0;
      puVar9[4] = 0;
      puVar9[5] = 0;
      puVar10 = puVar9;
    }
    puVar9 = *(undefined8 **)((longlong)this + 0x20);
    *(undefined8 **)((longlong)this + 0x20) = puVar10;
    if (puVar9 != (undefined8 *)0x0) {
      (**(code **)*puVar9)(puVar9,1);
    }
  }
  if (((*(longlong *)((longlong)this + 0x20) != 0) &&
      (*(int *)(*(longlong *)((longlong)this + 0x20) + 8) != 4)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PayloadArrays[int32(PayloadType::Id)] == nullptr || PayloadArrays[int32(PayloadType::Id)]->PayloadByteSize == sizeof(PayloadType)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                         ,0x236,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar2 = *(longlong *)((longlong)this + 0x20);
  if ((lVar2 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Payloads != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                         ,0xce,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((*(ulonglong *)(lVar16 + 8) & 0x10) == 0) {
    iVar8 = *(int *)(lVar2 + 0x28);
  }
  else {
    uVar11 = (uint)*(ulonglong *)(lVar16 + 8) & 0xf;
    uVar12 = (ulonglong)uVar11 - ((ulonglong)(uVar11 >> 1) & 0x5555555555555555);
    uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333);
    uVar12 = ((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if ((*(int *)(lVar16 + 0x48) <= (int)(uint)(byte)(uVar12 >> 0x38)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar8 = *(int *)(lVar2 + 0x28);
    lVar13 = *(longlong *)(lVar16 + 0x40);
    if (*(longlong *)(lVar16 + 0x40) == 0) {
      lVar13 = lVar16 + 0x20;
    }
    uVar11 = *(uint *)(lVar13 + (uVar12 >> 0x38) * 4);
    if (uVar11 != 0xffffffff) {
      uVar7 = 0;
      if ((int)uVar11 < iVar8) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((*(uint *)(*(longlong *)(lVar2 + 0x20) + (longlong)(int)uVar11 * 4) != uVar6) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Payloads->CommandSlots[PrevPayloadOffset] == CommandSlot",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                             ,0xd4,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar1 = param_2->Value;
      uVar6 = 0;
      if ((int)uVar11 < *(int *)(lVar2 + 0x18)) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(float *)(*(longlong *)(lVar2 + 0x10) + (longlong)(int)uVar11 * 4) = fVar1;
      return;
    }
  }
  uVar11 = 0;
  if ((int)uVar6 < *(int *)((longlong)this + 0x208)) {
    uVar11 = ~uVar6 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar16 = (longlong)(int)uVar6 * 0x50 + *(longlong *)((longlong)this + 0x200);
  uVar12 = *(ulonglong *)(lVar16 + 8);
  uVar11 = (uint)uVar12 & 0xf;
  uVar14 = (ulonglong)uVar11 - ((ulonglong)(uVar11 >> 1) & 0x5555555555555555);
  uVar14 = (uVar14 >> 2 & 0x3333333333333333) + (uVar14 & 0x3333333333333333);
  bVar4 = (byte)(((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  local_res8[0] = iVar8;
  if ((uVar12 & 0x10) == 0) {
    *(ulonglong *)(lVar16 + 8) = uVar12 | 0x10;
    TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::Insert
              ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
               (lVar16 + 0x20),local_res8,(uint)bVar4);
  }
  else {
    if ((*(int *)(lVar16 + 0x48) <= (int)(uint)bVar4) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar15 = *(TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> **)
               (lVar16 + 0x40);
    if (*(TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> **)(lVar16 + 0x40) ==
        (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
      pTVar15 = (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
                (lVar16 + 0x20);
    }
    *(int *)((pTVar15->AllocatorInstance).InlineData + (ulonglong)bVar4 * 4) = iVar8;
  }
  iVar8 = *(int *)(lVar2 + 0x28);
  if (iVar8 == *(int *)(lVar2 + 0x2c)) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)(lVar2 + 0x20),(int *)(lVar2 + 0x2c));
    *(int *)(lVar2 + 0x28) = iVar8;
  }
  *(int *)(lVar2 + 0x28) = iVar8 + 1;
  *(uint *)(((ForAnyElementType *)(lVar2 + 0x20))->Data + (longlong)iVar8 * 4) = uVar6;
  iVar8 = *(int *)(lVar2 + 0x18);
  if (iVar8 == *(int *)(lVar2 + 0x1c)) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)(lVar2 + 0x10),(int *)(lVar2 + 0x1c));
  }
  *(int *)(lVar2 + 0x18) = iVar8 + 1;
  *(float *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar8 * 4) = param_2->Value;
  return;
}

// Enqueue<TSingleValuePrimitiveUpdatePayload<UE::Math::TMatrix<double>,8,16>_> @ 1453da5a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::Enqueue<TSingleValuePrimitiveUpdatePayload<UE::Math::TMatrix<double>,8,16>_>
          (void *this,FPrimitiveSceneInfo *param_1,
          TSingleValuePrimitiveUpdatePayload<UE::Math::TMatrix<double>,8,16> *param_2)

{
  undefined4 *puVar1;
  double *pdVar2;
  code *pcVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  bool bVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  ulonglong uVar30;
  longlong lVar31;
  ulonglong uVar32;
  TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar33;
  longlong lVar34;
  longlong lVar35;
  int local_res20 [2];
  
  if ((*(int *)((longlong)this + 0x288) != 0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("RaceGuard == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                          ,0xc3,L""), bVar23)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar24 = GetOrAddCommandSlot(this,param_1);
  puVar29 = (undefined8 *)0x0;
  uVar25 = 0;
  if ((int)uVar24 < *(int *)((longlong)this + 0x208)) {
    uVar25 = ~uVar24 >> 0x1f;
  }
  if ((uVar25 == 0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar23)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar34 = *(longlong *)((longlong)this + 0x200) + (longlong)(int)uVar24 * 0x50;
  if (*(longlong *)((longlong)this + 0x40) == 0) {
    puVar28 = ::operator_new(0x30);
    if (puVar28 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar28 + 1) = 0x80;
      *puVar28 = &
                 ___7__TPayloadArray_U__TSingleValuePrimitiveUpdatePayload_U__TMatrix_N_Math_UE___07_0BA______TSceneUpdateCommandQueue_VFPrimitiveSceneInfo__W4EPrimitiveUpdateDirtyFlags__W4EPrimitiveUpdateId____6B_
      ;
      puVar28[2] = 0;
      puVar28[3] = 0;
      puVar28[4] = 0;
      puVar28[5] = 0;
      puVar29 = puVar28;
    }
    puVar28 = *(undefined8 **)((longlong)this + 0x40);
    *(undefined8 **)((longlong)this + 0x40) = puVar29;
    if (puVar28 != (undefined8 *)0x0) {
      (**(code **)*puVar28)(puVar28,1);
    }
  }
  if (((*(longlong *)((longlong)this + 0x40) != 0) &&
      (*(int *)(*(longlong *)((longlong)this + 0x40) + 8) != 0x80)) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("PayloadArrays[int32(PayloadType::Id)] == nullptr || PayloadArrays[int32(PayloadType::Id)]->PayloadByteSize == sizeof(PayloadType)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                          ,0x236,L""), bVar23)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar35 = *(longlong *)((longlong)this + 0x40);
  if ((lVar35 == 0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("Payloads != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                          ,0xce,L""), bVar23)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((*(ulonglong *)(lVar34 + 8) >> 8 & 1) == 0) {
    iVar27 = *(int *)(lVar35 + 0x28);
  }
  else {
    uVar30 = *(ulonglong *)(lVar34 + 8) & 0xff;
    uVar30 = uVar30 - (uVar30 >> 1 & 0x5555555555555555);
    uVar30 = (uVar30 >> 2 & 0x3333333333333333) + (uVar30 & 0x3333333333333333);
    uVar30 = ((uVar30 >> 4) + uVar30 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if ((*(int *)(lVar34 + 0x48) <= (int)(uint)(byte)(uVar30 >> 0x38)) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar23)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar27 = *(int *)(lVar35 + 0x28);
    lVar31 = *(longlong *)(lVar34 + 0x40);
    if (*(longlong *)(lVar34 + 0x40) == 0) {
      lVar31 = lVar34 + 0x20;
    }
    uVar25 = *(uint *)(lVar31 + (uVar30 >> 0x38) * 4);
    if (uVar25 != 0xffffffff) {
      uVar26 = 0;
      if ((int)uVar25 < iVar27) {
        uVar26 = ~uVar25 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((*(uint *)(*(longlong *)(lVar35 + 0x20) + (longlong)(int)uVar25 * 4) != uVar24) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("Payloads->CommandSlots[PrevPayloadOffset] == CommandSlot",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                              ,0xd4,L""), bVar23)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      dVar9 = (param_2->Value).M[0][2];
      dVar10 = (param_2->Value).M[0][3];
      dVar11 = (param_2->Value).M[1][0];
      dVar12 = (param_2->Value).M[1][1];
      uVar5 = *(undefined4 *)(param_2->Value).M[0];
      uVar6 = *(undefined4 *)((longlong)(param_2->Value).M[0] + 4);
      uVar7 = *(undefined4 *)((param_2->Value).M[0] + 1);
      uVar8 = *(undefined4 *)((longlong)(param_2->Value).M[0] + 0xc);
      uVar24 = 0;
      if ((int)uVar25 < *(int *)(lVar35 + 0x18)) {
        uVar24 = ~uVar25 >> 0x1f;
      }
      dVar13 = (param_2->Value).M[1][2];
      dVar14 = (param_2->Value).M[1][3];
      dVar15 = (param_2->Value).M[2][2];
      dVar16 = (param_2->Value).M[2][3];
      dVar17 = (param_2->Value).M[2][0];
      dVar18 = (param_2->Value).M[2][1];
      dVar19 = (param_2->Value).M[3][2];
      dVar20 = (param_2->Value).M[3][3];
      dVar21 = (param_2->Value).M[3][0];
      dVar22 = (param_2->Value).M[3][1];
      if ((uVar24 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar34 = *(longlong *)(lVar35 + 0x10);
      lVar35 = (longlong)(int)uVar25 * 0x80;
      puVar1 = (undefined4 *)(lVar35 + lVar34);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      pdVar2 = (double *)(lVar35 + 0x10 + lVar34);
      *pdVar2 = dVar9;
      pdVar2[1] = dVar10;
      pdVar2 = (double *)(lVar35 + 0x20 + lVar34);
      *pdVar2 = dVar11;
      pdVar2[1] = dVar12;
      pdVar2 = (double *)(lVar35 + 0x30 + lVar34);
      *pdVar2 = dVar13;
      pdVar2[1] = dVar14;
      pdVar2 = (double *)(lVar35 + 0x40 + lVar34);
      *pdVar2 = dVar17;
      pdVar2[1] = dVar18;
      pdVar2 = (double *)(lVar35 + 0x50 + lVar34);
      *pdVar2 = dVar15;
      pdVar2[1] = dVar16;
      pdVar2 = (double *)(lVar35 + 0x60 + lVar34);
      *pdVar2 = dVar21;
      pdVar2[1] = dVar22;
      pdVar2 = (double *)(lVar35 + 0x70 + lVar34);
      *pdVar2 = dVar19;
      pdVar2[1] = dVar20;
      return;
    }
  }
  uVar25 = 0;
  if ((int)uVar24 < *(int *)((longlong)this + 0x208)) {
    uVar25 = ~uVar24 >> 0x1f;
  }
  if ((uVar25 == 0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar23)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar34 = (longlong)(int)uVar24 * 0x50 + *(longlong *)((longlong)this + 0x200);
  *(uint *)(lVar34 + 0x14) = *(uint *)(lVar34 + 0x14) | 0x10;
  uVar30 = *(ulonglong *)(lVar34 + 8);
  uVar32 = (uVar30 & 0xff) - ((uVar30 & 0xff) >> 1 & 0x5555555555555555);
  uVar32 = (uVar32 >> 2 & 0x3333333333333333) + (uVar32 & 0x3333333333333333);
  bVar4 = (byte)(((uVar32 >> 4) + uVar32 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  local_res20[0] = iVar27;
  if ((uVar30 >> 8 & 1) == 0) {
    *(ulonglong *)(lVar34 + 8) = uVar30 | 0x100;
    TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::Insert
              ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
               (lVar34 + 0x20),local_res20,(uint)bVar4);
  }
  else {
    if ((*(int *)(lVar34 + 0x48) <= (int)(uint)bVar4) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar23)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar33 = *(TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> **)
               (lVar34 + 0x40);
    if (*(TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> **)(lVar34 + 0x40) ==
        (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
      pTVar33 = (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
                (lVar34 + 0x20);
    }
    *(int *)((pTVar33->AllocatorInstance).InlineData + (ulonglong)bVar4 * 4) = iVar27;
  }
  iVar27 = *(int *)(lVar35 + 0x28);
  if (iVar27 == *(int *)(lVar35 + 0x2c)) {
    iVar27 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,(ForAnyElementType *)(lVar35 + 0x20),(int *)(lVar35 + 0x2c));
    *(int *)(lVar35 + 0x28) = iVar27;
  }
  *(int *)(lVar35 + 0x28) = iVar27 + 1;
  *(uint *)(((ForAnyElementType *)(lVar35 + 0x20))->Data + (longlong)iVar27 * 4) = uVar24;
  iVar27 = *(int *)(lVar35 + 0x18);
  if (iVar27 == *(int *)(lVar35 + 0x1c)) {
    iVar27 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1080,(ForAnyElementType *)(lVar35 + 0x10),(int *)(lVar35 + 0x1c));
  }
  *(int *)(lVar35 + 0x18) = iVar27 + 1;
  dVar9 = (param_2->Value).M[0][1];
  lVar34 = *(longlong *)(lVar35 + 0x10);
  lVar35 = (longlong)iVar27 * 0x80;
  *(double *)(lVar35 + lVar34) = (param_2->Value).M[0][0];
  ((double *)(lVar35 + lVar34))[1] = dVar9;
  dVar9 = (param_2->Value).M[0][3];
  pdVar2 = (double *)(lVar35 + 0x10 + lVar34);
  *pdVar2 = (param_2->Value).M[0][2];
  pdVar2[1] = dVar9;
  dVar9 = (param_2->Value).M[1][1];
  pdVar2 = (double *)(lVar35 + 0x20 + lVar34);
  *pdVar2 = (param_2->Value).M[1][0];
  pdVar2[1] = dVar9;
  dVar9 = (param_2->Value).M[1][3];
  pdVar2 = (double *)(lVar35 + 0x30 + lVar34);
  *pdVar2 = (param_2->Value).M[1][2];
  pdVar2[1] = dVar9;
  dVar9 = (param_2->Value).M[2][1];
  pdVar2 = (double *)(lVar35 + 0x40 + lVar34);
  *pdVar2 = (param_2->Value).M[2][0];
  pdVar2[1] = dVar9;
  dVar9 = (param_2->Value).M[2][3];
  pdVar2 = (double *)(lVar35 + 0x50 + lVar34);
  *pdVar2 = (param_2->Value).M[2][2];
  pdVar2[1] = dVar9;
  dVar9 = (param_2->Value).M[3][1];
  pdVar2 = (double *)(lVar35 + 0x60 + lVar34);
  *pdVar2 = (param_2->Value).M[3][0];
  pdVar2[1] = dVar9;
  dVar9 = (param_2->Value).M[3][3];
  pdVar2 = (double *)(lVar35 + 0x70 + lVar34);
  *pdVar2 = (param_2->Value).M[3][2];
  pdVar2[1] = dVar9;
  return;
}

// Enqueue<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector2<float>,5,24>_> @ 1453dab70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::Enqueue<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector2<float>,5,24>_>
          (void *this,FPrimitiveSceneInfo *param_1,
          TSingleValuePrimitiveUpdatePayload<UE::Math::TVector2<float>,5,24> *param_2)

{
  longlong lVar1;
  TVector2<float>_u_0 TVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar15;
  longlong lVar16;
  int local_res8 [2];
  
  if ((*(int *)((longlong)this + 0x288) != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("RaceGuard == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                         ,0xc3,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar6 = GetOrAddCommandSlot(this,param_1);
  puVar10 = (undefined8 *)0x0;
  uVar11 = 0;
  if ((int)uVar6 < *(int *)((longlong)this + 0x208)) {
    uVar11 = ~uVar6 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar16 = *(longlong *)((longlong)this + 0x200) + (longlong)(int)uVar6 * 0x50;
  if (*(longlong *)((longlong)this + 0x28) == 0) {
    puVar9 = ::operator_new(0x30);
    if (puVar9 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar9 + 1) = 8;
      *puVar9 = &
                ___7__TPayloadArray_U__TSingleValuePrimitiveUpdatePayload_U__TVector2_M_Math_UE___04_0BI______TSceneUpdateCommandQueue_VFPrimitiveSceneInfo__W4EPrimitiveUpdateDirtyFlags__W4EPrimitiveUpdateId____6B_
      ;
      puVar9[2] = 0;
      puVar9[3] = 0;
      puVar9[4] = 0;
      puVar9[5] = 0;
      puVar10 = puVar9;
    }
    puVar9 = *(undefined8 **)((longlong)this + 0x28);
    *(undefined8 **)((longlong)this + 0x28) = puVar10;
    if (puVar9 != (undefined8 *)0x0) {
      (**(code **)*puVar9)(puVar9,1);
    }
  }
  if (((*(longlong *)((longlong)this + 0x28) != 0) &&
      (*(int *)(*(longlong *)((longlong)this + 0x28) + 8) != 8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PayloadArrays[int32(PayloadType::Id)] == nullptr || PayloadArrays[int32(PayloadType::Id)]->PayloadByteSize == sizeof(PayloadType)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                         ,0x236,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar1 = *(longlong *)((longlong)this + 0x28);
  if ((lVar1 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Payloads != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                         ,0xce,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((*(ulonglong *)(lVar16 + 8) & 0x20) == 0) {
    iVar8 = *(int *)(lVar1 + 0x28);
  }
  else {
    uVar11 = (uint)*(ulonglong *)(lVar16 + 8) & 0x1f;
    uVar12 = (ulonglong)uVar11 - ((ulonglong)(uVar11 >> 1) & 0x5555555555555555);
    uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333);
    uVar12 = ((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if ((*(int *)(lVar16 + 0x48) <= (int)(uint)(byte)(uVar12 >> 0x38)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar8 = *(int *)(lVar1 + 0x28);
    lVar13 = *(longlong *)(lVar16 + 0x40);
    if (*(longlong *)(lVar16 + 0x40) == 0) {
      lVar13 = lVar16 + 0x20;
    }
    uVar11 = *(uint *)(lVar13 + (uVar12 >> 0x38) * 4);
    if (uVar11 != 0xffffffff) {
      uVar7 = 0;
      if ((int)uVar11 < iVar8) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((*(uint *)(*(longlong *)(lVar1 + 0x20) + (longlong)(int)uVar11 * 4) != uVar6) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Payloads->CommandSlots[PrevPayloadOffset] == CommandSlot",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                             ,0xd4,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      TVar2 = (param_2->Value).field0_0x0;
      uVar6 = 0;
      if ((int)uVar11 < *(int *)(lVar1 + 0x18)) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(TVector2<float>_u_0 *)(*(longlong *)(lVar1 + 0x10) + (longlong)(int)uVar11 * 8) = TVar2;
      return;
    }
  }
  uVar11 = 0;
  if ((int)uVar6 < *(int *)((longlong)this + 0x208)) {
    uVar11 = ~uVar6 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar16 = (longlong)(int)uVar6 * 0x50 + *(longlong *)((longlong)this + 0x200);
  *(uint *)(lVar16 + 0x14) = *(uint *)(lVar16 + 0x14) | 0x18;
  uVar12 = *(ulonglong *)(lVar16 + 8);
  uVar11 = (uint)uVar12 & 0x1f;
  uVar14 = (ulonglong)uVar11 - ((ulonglong)(uVar11 >> 1) & 0x5555555555555555);
  uVar14 = (uVar14 >> 2 & 0x3333333333333333) + (uVar14 & 0x3333333333333333);
  bVar4 = (byte)(((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  local_res8[0] = iVar8;
  if ((uVar12 & 0x20) == 0) {
    *(ulonglong *)(lVar16 + 8) = uVar12 | 0x20;
    TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::Insert
              ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
               (lVar16 + 0x20),local_res8,(uint)bVar4);
  }
  else {
    if ((*(int *)(lVar16 + 0x48) <= (int)(uint)bVar4) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar15 = *(TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> **)
               (lVar16 + 0x40);
    if (*(TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> **)(lVar16 + 0x40) ==
        (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
      pTVar15 = (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
                (lVar16 + 0x20);
    }
    *(int *)((pTVar15->AllocatorInstance).InlineData + (ulonglong)bVar4 * 4) = iVar8;
  }
  iVar8 = *(int *)(lVar1 + 0x28);
  if (iVar8 == *(int *)(lVar1 + 0x2c)) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)(lVar1 + 0x20),(int *)(lVar1 + 0x2c));
    *(int *)(lVar1 + 0x28) = iVar8;
  }
  *(int *)(lVar1 + 0x28) = iVar8 + 1;
  *(uint *)(((ForAnyElementType *)(lVar1 + 0x20))->Data + (longlong)iVar8 * 4) = uVar6;
  iVar8 = *(int *)(lVar1 + 0x18);
  if (iVar8 == *(int *)(lVar1 + 0x1c)) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,(ForAnyElementType *)(lVar1 + 0x10),(int *)(lVar1 + 0x1c));
  }
  *(int *)(lVar1 + 0x18) = iVar8 + 1;
  *(TVector2<float>_u_0 *)(*(longlong *)(lVar1 + 0x10) + (longlong)iVar8 * 8) =
       (param_2->Value).field0_0x0;
  return;
}

// Enqueue<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector<float>,6,8>_> @ 1453db040

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::Enqueue<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector<float>,6,8>_>
          (void *this,FPrimitiveSceneInfo *param_1,
          TSingleValuePrimitiveUpdatePayload<UE::Math::TVector<float>,6,8> *param_2)

{
  undefined8 uVar1;
  float fVar2;
  longlong lVar3;
  code *pcVar4;
  byte bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar16;
  longlong lVar17;
  int local_res8 [2];
  
  if ((*(int *)((longlong)this + 0x288) != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("RaceGuard == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                         ,0xc3,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar7 = GetOrAddCommandSlot(this,param_1);
  puVar11 = (undefined8 *)0x0;
  uVar12 = 0;
  if ((int)uVar7 < *(int *)((longlong)this + 0x208)) {
    uVar12 = ~uVar7 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar17 = *(longlong *)((longlong)this + 0x200) + (longlong)(int)uVar7 * 0x50;
  if (*(longlong *)((longlong)this + 0x30) == 0) {
    puVar10 = ::operator_new(0x30);
    if (puVar10 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar10 + 1) = 0xc;
      *puVar10 = &
                 ___7__TPayloadArray_U__TSingleValuePrimitiveUpdatePayload_U__TVector_M_Math_UE___05_07_____TSceneUpdateCommandQueue_VFPrimitiveSceneInfo__W4EPrimitiveUpdateDirtyFlags__W4EPrimitiveUpdateId____6B_
      ;
      puVar10[2] = 0;
      puVar10[3] = 0;
      puVar10[4] = 0;
      puVar10[5] = 0;
      puVar11 = puVar10;
    }
    puVar10 = *(undefined8 **)((longlong)this + 0x30);
    *(undefined8 **)((longlong)this + 0x30) = puVar11;
    if (puVar10 != (undefined8 *)0x0) {
      (**(code **)*puVar10)(puVar10,1);
    }
  }
  if (((*(longlong *)((longlong)this + 0x30) != 0) &&
      (*(int *)(*(longlong *)((longlong)this + 0x30) + 8) != 0xc)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("PayloadArrays[int32(PayloadType::Id)] == nullptr || PayloadArrays[int32(PayloadType::Id)]->PayloadByteSize == sizeof(PayloadType)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                         ,0x236,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar3 = *(longlong *)((longlong)this + 0x30);
  if ((lVar3 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Payloads != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                         ,0xce,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((*(ulonglong *)(lVar17 + 8) & 0x40) == 0) {
    iVar9 = *(int *)(lVar3 + 0x28);
  }
  else {
    uVar12 = (uint)*(ulonglong *)(lVar17 + 8) & 0x3f;
    uVar13 = (ulonglong)uVar12 - ((ulonglong)(uVar12 >> 1) & 0x5555555555555555);
    uVar13 = (uVar13 >> 2 & 0x3333333333333333) + (uVar13 & 0x3333333333333333);
    uVar13 = ((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if ((*(int *)(lVar17 + 0x48) <= (int)(uint)(byte)(uVar13 >> 0x38)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar9 = *(int *)(lVar3 + 0x28);
    lVar14 = *(longlong *)(lVar17 + 0x40);
    if (*(longlong *)(lVar17 + 0x40) == 0) {
      lVar14 = lVar17 + 0x20;
    }
    uVar12 = *(uint *)(lVar14 + (uVar13 >> 0x38) * 4);
    lVar17 = (longlong)(int)uVar12;
    if (uVar12 != 0xffffffff) {
      uVar8 = 0;
      if ((int)uVar12 < iVar9) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*(uint *)(*(longlong *)(lVar3 + 0x20) + lVar17 * 4) != uVar7) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Payloads->CommandSlots[PrevPayloadOffset] == CommandSlot",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                             ,0xd4,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar1 = *(undefined8 *)&(param_2->Value).field0_0x0;
      fVar2 = (param_2->Value).field0_0x0._s_0.Z;
      uVar7 = 0;
      if ((int)uVar12 < *(int *)(lVar3 + 0x18)) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar3 = *(longlong *)(lVar3 + 0x10);
      *(undefined8 *)(lVar3 + lVar17 * 0xc) = uVar1;
      *(float *)(lVar3 + 8 + lVar17 * 0xc) = fVar2;
      return;
    }
  }
  uVar12 = 0;
  if ((int)uVar7 < *(int *)((longlong)this + 0x208)) {
    uVar12 = ~uVar7 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar17 = (longlong)(int)uVar7 * 0x50 + *(longlong *)((longlong)this + 0x200);
  *(uint *)(lVar17 + 0x14) = *(uint *)(lVar17 + 0x14) | 8;
  uVar13 = *(ulonglong *)(lVar17 + 8);
  uVar12 = (uint)uVar13 & 0x3f;
  uVar15 = (ulonglong)uVar12 - ((ulonglong)(uVar12 >> 1) & 0x5555555555555555);
  uVar15 = (uVar15 >> 2 & 0x3333333333333333) + (uVar15 & 0x3333333333333333);
  bVar5 = (byte)(((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  local_res8[0] = iVar9;
  if ((uVar13 & 0x40) == 0) {
    *(ulonglong *)(lVar17 + 8) = uVar13 | 0x40;
    TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::Insert
              ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
               (lVar17 + 0x20),local_res8,(uint)bVar5);
  }
  else {
    if ((*(int *)(lVar17 + 0x48) <= (int)(uint)bVar5) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar16 = *(TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> **)
               (lVar17 + 0x40);
    if (*(TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> **)(lVar17 + 0x40) ==
        (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
      pTVar16 = (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
                (lVar17 + 0x20);
    }
    *(int *)((pTVar16->AllocatorInstance).InlineData + (ulonglong)bVar5 * 4) = iVar9;
  }
  iVar9 = *(int *)(lVar3 + 0x28);
  if (iVar9 == *(int *)(lVar3 + 0x2c)) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)(lVar3 + 0x20),(int *)(lVar3 + 0x2c));
    *(int *)(lVar3 + 0x28) = iVar9;
  }
  *(int *)(lVar3 + 0x28) = iVar9 + 1;
  *(uint *)(((ForAnyElementType *)(lVar3 + 0x20))->Data + (longlong)iVar9 * 4) = uVar7;
  iVar9 = *(int *)(lVar3 + 0x18);
  if (iVar9 == *(int *)(lVar3 + 0x1c)) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,(ForAnyElementType *)(lVar3 + 0x10),(int *)(lVar3 + 0x1c));
  }
  *(int *)(lVar3 + 0x18) = iVar9 + 1;
  lVar17 = *(longlong *)(lVar3 + 0x10);
  *(undefined8 *)(lVar17 + (longlong)iVar9 * 0xc) = *(undefined8 *)&(param_2->Value).field0_0x0;
  *(float *)(lVar17 + (longlong)iVar9 * 0xc + 8) = (param_2->Value).field0_0x0._s_0.Z;
  return;
}

// Enqueue<TSingleValuePrimitiveUpdatePayload<FCustomPrimitiveData,3,16>_> @ 1453db540

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::Enqueue<TSingleValuePrimitiveUpdatePayload<FCustomPrimitiveData,3,16>_>
          (void *this,FPrimitiveSceneInfo *param_1,
          TSingleValuePrimitiveUpdatePayload<FCustomPrimitiveData,3,16> *param_2)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar14;
  undefined8 *puVar15;
  TSingleValuePrimitiveUpdatePayload<FCustomPrimitiveData,3,16> *pTVar16;
  longlong lVar17;
  int local_res8 [2];
  
  if ((*(int *)((longlong)this + 0x288) != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("RaceGuard == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                         ,0xc3,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar6 = GetOrAddCommandSlot(this,param_1);
  puVar15 = (undefined8 *)0x0;
  uVar10 = 0;
  if ((int)uVar6 < *(int *)((longlong)this + 0x208)) {
    uVar10 = ~uVar6 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar17 = *(longlong *)((longlong)this + 0x200) + (longlong)(int)uVar6 * 0x50;
  if (*(longlong *)((longlong)this + 0x18) == 0) {
    puVar9 = ::operator_new(0x30);
    if (puVar9 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar9 + 1) = 0x10;
      *puVar9 = &
                ___7__TPayloadArray_U__TSingleValuePrimitiveUpdatePayload_UFCustomPrimitiveData___02_0BA______TSceneUpdateCommandQueue_VFPrimitiveSceneInfo__W4EPrimitiveUpdateDirtyFlags__W4EPrimitiveUpdateId____6B_
      ;
      puVar9[2] = 0;
      puVar9[3] = 0;
      puVar9[4] = 0;
      puVar9[5] = 0;
      puVar15 = puVar9;
    }
    puVar9 = *(undefined8 **)((longlong)this + 0x18);
    *(undefined8 **)((longlong)this + 0x18) = puVar15;
    if (puVar9 != (undefined8 *)0x0) {
      (**(code **)*puVar9)(puVar9,1);
    }
  }
  if (((*(longlong *)((longlong)this + 0x18) != 0) &&
      (*(int *)(*(longlong *)((longlong)this + 0x18) + 8) != 0x10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PayloadArrays[int32(PayloadType::Id)] == nullptr || PayloadArrays[int32(PayloadType::Id)]->PayloadByteSize == sizeof(PayloadType)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                         ,0x236,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar1 = *(longlong *)((longlong)this + 0x18);
  if ((lVar1 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Payloads != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                         ,0xce,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((*(ulonglong *)(lVar17 + 8) & 8) == 0) {
    iVar8 = *(int *)(lVar1 + 0x28);
  }
  else {
    uVar10 = (uint)*(ulonglong *)(lVar17 + 8) & 7;
    uVar11 = (ulonglong)uVar10 - ((ulonglong)(uVar10 >> 1) & 0x5555555555555555);
    uVar11 = (uVar11 >> 2 & 0x3333333333333333) + (uVar11 & 0x3333333333333333);
    uVar11 = ((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if ((*(int *)(lVar17 + 0x48) <= (int)(uint)(byte)(uVar11 >> 0x38)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar8 = *(int *)(lVar1 + 0x28);
    lVar12 = *(longlong *)(lVar17 + 0x40);
    if (*(longlong *)(lVar17 + 0x40) == 0) {
      lVar12 = lVar17 + 0x20;
    }
    uVar10 = *(uint *)(lVar12 + (uVar11 >> 0x38) * 4);
    if (uVar10 != 0xffffffff) {
      uVar7 = 0;
      if ((int)uVar10 < iVar8) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((*(uint *)(*(longlong *)(lVar1 + 0x20) + (longlong)(int)uVar10 * 4) != uVar6) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Payloads->CommandSlots[PrevPayloadOffset] == CommandSlot",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                             ,0xd4,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar6 = 0;
      if ((int)uVar10 < *(int *)(lVar1 + 0x18)) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar16 = (TSingleValuePrimitiveUpdatePayload<FCustomPrimitiveData,3,16> *)
                (*(longlong *)(lVar1 + 0x10) + (longlong)(int)uVar10 * 0x10);
      if (pTVar16 == param_2) {
        return;
      }
      pFVar2 = (pTVar16->Value).Data.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pTVar16->Value).Data.AllocatorInstance.Data = (param_2->Value).Data.AllocatorInstance.Data;
      (param_2->Value).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar16->Value).Data.ArrayNum = (param_2->Value).Data.ArrayNum;
      (pTVar16->Value).Data.ArrayMax = (param_2->Value).Data.ArrayMax;
      (param_2->Value).Data.ArrayNum = 0;
      (param_2->Value).Data.ArrayMax = 0;
      return;
    }
  }
  uVar10 = 0;
  if ((int)uVar6 < *(int *)((longlong)this + 0x208)) {
    uVar10 = ~uVar6 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar17 = *(longlong *)((longlong)this + 0x200) + (longlong)(int)uVar6 * 0x50;
  *(uint *)(lVar17 + 0x14) = *(uint *)(lVar17 + 0x14) | 0x10;
  uVar11 = *(ulonglong *)(lVar17 + 8);
  uVar10 = (uint)uVar11 & 7;
  uVar13 = (ulonglong)uVar10 - ((ulonglong)(uVar10 >> 1) & 0x5555555555555555);
  uVar13 = (uVar13 >> 2 & 0x3333333333333333) + (uVar13 & 0x3333333333333333);
  bVar4 = (byte)(((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  local_res8[0] = iVar8;
  if ((uVar11 & 8) == 0) {
    *(ulonglong *)(lVar17 + 8) = uVar11 | 8;
    TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::Insert
              ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
               (lVar17 + 0x20),local_res8,(uint)bVar4);
  }
  else {
    if ((*(int *)(lVar17 + 0x48) <= (int)(uint)bVar4) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar14 = *(TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> **)
               (lVar17 + 0x40);
    if (*(TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> **)(lVar17 + 0x40) ==
        (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
      pTVar14 = (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
                (lVar17 + 0x20);
    }
    *(int *)((pTVar14->AllocatorInstance).InlineData + (ulonglong)bVar4 * 4) = iVar8;
  }
  iVar8 = *(int *)(lVar1 + 0x28);
  if (iVar8 == *(int *)(lVar1 + 0x2c)) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)(lVar1 + 0x20),(int *)(lVar1 + 0x2c));
    *(int *)(lVar1 + 0x28) = iVar8;
  }
  *(int *)(lVar1 + 0x28) = iVar8 + 1;
  *(uint *)(((ForAnyElementType *)(lVar1 + 0x20))->Data + (longlong)iVar8 * 4) = uVar6;
  iVar8 = *(int *)(lVar1 + 0x18);
  if (iVar8 == *(int *)(lVar1 + 0x1c)) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)(lVar1 + 0x10),(int *)(lVar1 + 0x1c));
  }
  *(int *)(lVar1 + 0x18) = iVar8 + 1;
  puVar15 = (undefined8 *)((longlong)iVar8 * 0x10 + *(longlong *)(lVar1 + 0x10));
  *puVar15 = 0;
  *puVar15 = (param_2->Value).Data.AllocatorInstance.Data;
  (param_2->Value).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(puVar15 + 1) = (param_2->Value).Data.ArrayNum;
  *(int *)((longlong)puVar15 + 0xc) = (param_2->Value).Data.ArrayMax;
  (param_2->Value).Data.ArrayNum = 0;
  (param_2->Value).Data.ArrayMax = 0;
  return;
}

// Enqueue<TSingleValuePrimitiveUpdatePayload<FPrimitiveComponentId,2,0>_> @ 1453dba50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::Enqueue<TSingleValuePrimitiveUpdatePayload<FPrimitiveComponentId,2,0>_>
          (void *this,FPrimitiveSceneInfo *param_1,
          TSingleValuePrimitiveUpdatePayload<FPrimitiveComponentId,2,0> *param_2)

{
  longlong lVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar14;
  longlong lVar15;
  int local_res8 [2];
  
  if ((*(int *)((longlong)this + 0x288) != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("RaceGuard == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                         ,0xc3,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar5 = GetOrAddCommandSlot(this,param_1);
  puVar9 = (undefined8 *)0x0;
  uVar10 = 0;
  if ((int)uVar5 < *(int *)((longlong)this + 0x208)) {
    uVar10 = ~uVar5 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar15 = *(longlong *)((longlong)this + 0x200) + (longlong)(int)uVar5 * 0x50;
  if (*(longlong *)((longlong)this + 0x10) == 0) {
    puVar8 = ::operator_new(0x30);
    if (puVar8 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar8 + 1) = 4;
      *puVar8 = &
                ___7__TPayloadArray_U__TSingleValuePrimitiveUpdatePayload_VFPrimitiveComponentId___01_0A______TSceneUpdateCommandQueue_VFPrimitiveSceneInfo__W4EPrimitiveUpdateDirtyFlags__W4EPrimitiveUpdateId____6B_
      ;
      puVar8[2] = 0;
      puVar8[3] = 0;
      puVar8[4] = 0;
      puVar8[5] = 0;
      puVar9 = puVar8;
    }
    puVar8 = *(undefined8 **)((longlong)this + 0x10);
    *(undefined8 **)((longlong)this + 0x10) = puVar9;
    if (puVar8 != (undefined8 *)0x0) {
      (**(code **)*puVar8)(puVar8,1);
    }
  }
  if (((*(longlong *)((longlong)this + 0x10) != 0) &&
      (*(int *)(*(longlong *)((longlong)this + 0x10) + 8) != 4)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PayloadArrays[int32(PayloadType::Id)] == nullptr || PayloadArrays[int32(PayloadType::Id)]->PayloadByteSize == sizeof(PayloadType)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                         ,0x236,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar1 = *(longlong *)((longlong)this + 0x10);
  if ((lVar1 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Payloads != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                         ,0xce,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*(ulonglong *)(lVar15 + 8) & 4) == 0) {
    iVar7 = *(int *)(lVar1 + 0x28);
  }
  else {
    uVar10 = (uint)*(ulonglong *)(lVar15 + 8) & 3;
    uVar11 = (ulonglong)uVar10 - (ulonglong)(uVar10 >> 1);
    uVar11 = (uVar11 >> 2 & 0x3333333333333333) + (uVar11 & 0x3333333333333333);
    uVar11 = ((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if ((*(int *)(lVar15 + 0x48) <= (int)(uint)(byte)(uVar11 >> 0x38)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar7 = *(int *)(lVar1 + 0x28);
    lVar12 = *(longlong *)(lVar15 + 0x40);
    if (*(longlong *)(lVar15 + 0x40) == 0) {
      lVar12 = lVar15 + 0x20;
    }
    uVar10 = *(uint *)(lVar12 + (uVar11 >> 0x38) * 4);
    if (uVar10 != 0xffffffff) {
      uVar6 = 0;
      if ((int)uVar10 < iVar7) {
        uVar6 = ~uVar10 >> 0x1f;
      }
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
      if ((*(uint *)(*(longlong *)(lVar1 + 0x20) + (longlong)(int)uVar10 * 4) != uVar5) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Payloads->CommandSlots[PrevPayloadOffset] == CommandSlot",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                             ,0xd4,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = (param_2->Value).PrimIDValue;
      uVar6 = 0;
      if ((int)uVar10 < *(int *)(lVar1 + 0x18)) {
        uVar6 = ~uVar10 >> 0x1f;
      }
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
      *(uint *)(*(longlong *)(lVar1 + 0x10) + (longlong)(int)uVar10 * 4) = uVar5;
      return;
    }
  }
  uVar10 = 0;
  if ((int)uVar5 < *(int *)((longlong)this + 0x208)) {
    uVar10 = ~uVar5 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar15 = (longlong)(int)uVar5 * 0x50 + *(longlong *)((longlong)this + 0x200);
  uVar11 = *(ulonglong *)(lVar15 + 8);
  uVar10 = (uint)uVar11 & 3;
  uVar13 = (ulonglong)uVar10 - (ulonglong)(uVar10 >> 1);
  uVar13 = (uVar13 >> 2 & 0x3333333333333333) + (uVar13 & 0x3333333333333333);
  bVar3 = (byte)(((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  local_res8[0] = iVar7;
  if ((uVar11 & 4) == 0) {
    *(ulonglong *)(lVar15 + 8) = uVar11 | 4;
    TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::Insert
              ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
               (lVar15 + 0x20),local_res8,(uint)bVar3);
  }
  else {
    if ((*(int *)(lVar15 + 0x48) <= (int)(uint)bVar3) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pTVar14 = *(TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> **)
               (lVar15 + 0x40);
    if (*(TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> **)(lVar15 + 0x40) ==
        (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
      pTVar14 = (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
                (lVar15 + 0x20);
    }
    *(int *)((pTVar14->AllocatorInstance).InlineData + (ulonglong)bVar3 * 4) = iVar7;
  }
  iVar7 = *(int *)(lVar1 + 0x28);
  if (iVar7 == *(int *)(lVar1 + 0x2c)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)(lVar1 + 0x20),(int *)(lVar1 + 0x2c));
    *(int *)(lVar1 + 0x28) = iVar7;
  }
  *(int *)(lVar1 + 0x28) = iVar7 + 1;
  *(uint *)(((ForAnyElementType *)(lVar1 + 0x20))->Data + (longlong)iVar7 * 4) = uVar5;
  iVar7 = *(int *)(lVar1 + 0x18);
  if (iVar7 == *(int *)(lVar1 + 0x1c)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)(lVar1 + 0x10),(int *)(lVar1 + 0x1c));
  }
  *(int *)(lVar1 + 0x18) = iVar7 + 1;
  *(uint *)(*(longlong *)(lVar1 + 0x10) + (longlong)iVar7 * 4) = (param_2->Value).PrimIDValue;
  return;
}

// Enqueue<FUpdateInstanceCommand> @ 1453dbf00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::Enqueue<FUpdateInstanceCommand>
          (void *this,FPrimitiveSceneInfo *param_1,FUpdateInstanceCommand *param_2)

{
  undefined4 *puVar1;
  double *pdVar2;
  double dVar3;
  code *pcVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  bool bVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  longlong lVar29;
  TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar30;
  longlong lVar31;
  ulonglong uVar32;
  longlong lVar33;
  int local_res20 [2];
  
  if ((*(int *)((longlong)this + 0x288) != 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("RaceGuard == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                          ,0xc3,L""), bVar22)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar23 = GetOrAddCommandSlot(this,param_1);
  puVar28 = (undefined8 *)0x0;
  uVar24 = 0;
  if ((int)uVar23 < *(int *)((longlong)this + 0x208)) {
    uVar24 = ~uVar23 >> 0x1f;
  }
  if ((uVar24 == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar33 = *(longlong *)((longlong)this + 0x200) + (longlong)(int)uVar23 * 0x50;
  if (*(longlong *)((longlong)this + 8) == 0) {
    puVar27 = ::operator_new(0x30);
    if (puVar27 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar27 + 1) = 0x78;
      *puVar27 = &
                 ___7__TPayloadArray_UFUpdateInstanceCommand_____TSceneUpdateCommandQueue_VFPrimitiveSceneInfo__W4EPrimitiveUpdateDirtyFlags__W4EPrimitiveUpdateId____6B_
      ;
      puVar27[2] = 0;
      puVar27[3] = 0;
      puVar27[4] = 0;
      puVar27[5] = 0;
      puVar28 = puVar27;
    }
    puVar27 = *(undefined8 **)((longlong)this + 8);
    *(undefined8 **)((longlong)this + 8) = puVar28;
    if (puVar27 != (undefined8 *)0x0) {
      (**(code **)*puVar27)(puVar27,1);
    }
  }
  if (((*(longlong *)((longlong)this + 8) != 0) &&
      (*(int *)(*(longlong *)((longlong)this + 8) + 8) != 0x78)) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("PayloadArrays[int32(PayloadType::Id)] == nullptr || PayloadArrays[int32(PayloadType::Id)]->PayloadByteSize == sizeof(PayloadType)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                          ,0x236,L""), bVar22)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar29 = *(longlong *)((longlong)this + 8);
  if ((lVar29 == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("Payloads != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                          ,0xce,L""), bVar22)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((*(ulonglong *)(lVar33 + 8) & 2) == 0) {
    iVar26 = *(int *)(lVar29 + 0x28);
  }
  else {
    uVar32 = (ulonglong)((uint)*(ulonglong *)(lVar33 + 8) & 1) * 0x101010101010101;
    if ((*(int *)(lVar33 + 0x48) <= (int)(uint)(byte)(uVar32 >> 0x38)) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar22)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar31 = *(longlong *)(lVar33 + 0x40);
    if (*(longlong *)(lVar33 + 0x40) == 0) {
      lVar31 = lVar33 + 0x20;
    }
    iVar26 = *(int *)(lVar29 + 0x28);
    uVar24 = *(uint *)(lVar31 + (uVar32 >> 0x38) * 4);
    if (uVar24 != 0xffffffff) {
      uVar25 = 0;
      if ((int)uVar24 < iVar26) {
        uVar25 = ~uVar24 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*(uint *)(*(longlong *)(lVar29 + 0x20) + (longlong)(int)uVar24 * 4) != uVar23) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("Payloads->CommandSlots[PrevPayloadOffset] == CommandSlot",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                              ,0xd4,L""), bVar22)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      dVar10 = (param_2->WorldBounds).Origin.field0_0x0._s_0.Y;
      dVar11 = (param_2->WorldBounds).Origin.field0_0x0._s_0.Z;
      dVar12 = (param_2->WorldBounds).BoxExtent.field0_0x0._s_0.X;
      dVar13 = (param_2->WorldBounds).BoxExtent.field0_0x0._s_0.Y;
      uVar6 = *(undefined4 *)&param_2->PrimitiveSceneProxy;
      uVar7 = *(undefined4 *)((longlong)&param_2->PrimitiveSceneProxy + 4);
      uVar8 = *(undefined4 *)&(param_2->WorldBounds).Origin.field0_0x0;
      uVar9 = *(undefined4 *)((longlong)&(param_2->WorldBounds).Origin.field0_0x0 + 4);
      uVar23 = 0;
      if ((int)uVar24 < *(int *)(lVar29 + 0x18)) {
        uVar23 = ~uVar24 >> 0x1f;
      }
      dVar14 = (param_2->WorldBounds).BoxExtent.field0_0x0._s_0.Z;
      dVar15 = (param_2->WorldBounds).SphereRadius;
      dVar16 = (param_2->LocalBounds).Origin.field0_0x0._s_0.X;
      dVar17 = (param_2->LocalBounds).Origin.field0_0x0._s_0.Y;
      dVar18 = (param_2->LocalBounds).Origin.field0_0x0._s_0.Z;
      dVar19 = (param_2->LocalBounds).BoxExtent.field0_0x0._s_0.X;
      dVar20 = (param_2->LocalBounds).BoxExtent.field0_0x0._s_0.Y;
      dVar21 = (param_2->LocalBounds).BoxExtent.field0_0x0._s_0.Z;
      dVar3 = (param_2->LocalBounds).SphereRadius;
      if ((uVar23 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar33 = *(longlong *)(lVar29 + 0x10);
      lVar29 = (longlong)(int)uVar24 * 0x78;
      puVar1 = (undefined4 *)(lVar29 + lVar33);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      pdVar2 = (double *)(lVar29 + 0x10 + lVar33);
      *pdVar2 = dVar10;
      pdVar2[1] = dVar11;
      pdVar2 = (double *)(lVar29 + 0x20 + lVar33);
      *pdVar2 = dVar12;
      pdVar2[1] = dVar13;
      pdVar2 = (double *)(lVar29 + 0x30 + lVar33);
      *pdVar2 = dVar14;
      pdVar2[1] = dVar15;
      pdVar2 = (double *)(lVar29 + 0x40 + lVar33);
      *pdVar2 = dVar16;
      pdVar2[1] = dVar17;
      pdVar2 = (double *)(lVar29 + 0x50 + lVar33);
      *pdVar2 = dVar18;
      pdVar2[1] = dVar19;
      pdVar2 = (double *)(lVar29 + 0x60 + lVar33);
      *pdVar2 = dVar20;
      pdVar2[1] = dVar21;
      *(double *)(lVar29 + 0x70 + lVar33) = dVar3;
      return;
    }
  }
  uVar24 = 0;
  if ((int)uVar23 < *(int *)((longlong)this + 0x208)) {
    uVar24 = ~uVar23 >> 0x1f;
  }
  if ((uVar24 == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar33 = (longlong)(int)uVar23 * 0x50 + *(longlong *)((longlong)this + 0x200);
  *(uint *)(lVar33 + 0x14) = *(uint *)(lVar33 + 0x14) | 0x17;
  uVar32 = *(ulonglong *)(lVar33 + 8);
  bVar5 = (byte)((ulonglong)((uint)uVar32 & 1) * 0x101010101010101 >> 0x38);
  local_res20[0] = iVar26;
  if ((uVar32 & 2) == 0) {
    *(ulonglong *)(lVar33 + 8) = uVar32 | 2;
    TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::Insert
              ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
               (lVar33 + 0x20),local_res20,(uint)bVar5);
  }
  else {
    if ((*(int *)(lVar33 + 0x48) <= (int)(uint)bVar5) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar22)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar30 = *(TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> **)
               (lVar33 + 0x40);
    if (*(TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> **)(lVar33 + 0x40) ==
        (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
      pTVar30 = (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
                (lVar33 + 0x20);
    }
    *(int *)((pTVar30->AllocatorInstance).InlineData + (ulonglong)bVar5 * 4) = iVar26;
  }
  iVar26 = *(int *)(lVar29 + 0x28);
  if (iVar26 == *(int *)(lVar29 + 0x2c)) {
    iVar26 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,(ForAnyElementType *)(lVar29 + 0x20),(int *)(lVar29 + 0x2c));
    *(int *)(lVar29 + 0x28) = iVar26;
  }
  *(int *)(lVar29 + 0x28) = iVar26 + 1;
  *(uint *)(((ForAnyElementType *)(lVar29 + 0x20))->Data + (longlong)iVar26 * 4) = uVar23;
  iVar26 = *(int *)(lVar29 + 0x18);
  if (iVar26 == *(int *)(lVar29 + 0x1c)) {
    iVar26 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x878,(ForAnyElementType *)(lVar29 + 0x10),(int *)(lVar29 + 0x1c));
  }
  *(int *)(lVar29 + 0x18) = iVar26 + 1;
  dVar10 = (param_2->WorldBounds).Origin.field0_0x0._s_0.X;
  lVar31 = (longlong)iVar26 * 0x78;
  lVar33 = *(longlong *)(lVar29 + 0x10);
  *(undefined8 *)(lVar31 + lVar33) = param_2->PrimitiveSceneProxy;
  ((undefined8 *)(lVar31 + lVar33))[1] = dVar10;
  dVar10 = (param_2->WorldBounds).Origin.field0_0x0._s_0.Z;
  pdVar2 = (double *)(lVar31 + 0x10 + lVar33);
  *pdVar2 = (param_2->WorldBounds).Origin.field0_0x0._s_0.Y;
  pdVar2[1] = dVar10;
  dVar10 = (param_2->WorldBounds).BoxExtent.field0_0x0._s_0.Y;
  pdVar2 = (double *)(lVar31 + 0x20 + lVar33);
  *pdVar2 = (param_2->WorldBounds).BoxExtent.field0_0x0._s_0.X;
  pdVar2[1] = dVar10;
  dVar10 = (param_2->WorldBounds).SphereRadius;
  pdVar2 = (double *)(lVar31 + 0x30 + lVar33);
  *pdVar2 = (param_2->WorldBounds).BoxExtent.field0_0x0._s_0.Z;
  pdVar2[1] = dVar10;
  dVar10 = (param_2->LocalBounds).Origin.field0_0x0._s_0.Y;
  pdVar2 = (double *)(lVar31 + 0x40 + lVar33);
  *pdVar2 = (param_2->LocalBounds).Origin.field0_0x0._s_0.X;
  pdVar2[1] = dVar10;
  dVar10 = (param_2->LocalBounds).BoxExtent.field0_0x0._s_0.X;
  pdVar2 = (double *)(lVar31 + 0x50 + lVar33);
  *pdVar2 = (param_2->LocalBounds).Origin.field0_0x0._s_0.Z;
  pdVar2[1] = dVar10;
  dVar10 = (param_2->LocalBounds).BoxExtent.field0_0x0._s_0.Z;
  pdVar2 = (double *)(lVar31 + 0x60 + lVar33);
  *pdVar2 = (param_2->LocalBounds).BoxExtent.field0_0x0._s_0.Y;
  pdVar2[1] = dVar10;
  *(double *)(lVar31 + 0x70 + lVar33) = (param_2->LocalBounds).SphereRadius;
  return;
}

// Enqueue<FUpdateInstanceFromComputeCommand> @ 1453dc430

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::Enqueue<FUpdateInstanceFromComputeCommand>
          (void *this,FPrimitiveSceneInfo *param_1,FUpdateInstanceFromComputeCommand *param_2)

{
  longlong lVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar14;
  longlong lVar15;
  int local_res8 [2];
  
  if ((*(int *)((longlong)this + 0x288) != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("RaceGuard == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                         ,0xc3,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar5 = GetOrAddCommandSlot(this,param_1);
  puVar9 = (undefined8 *)0x0;
  uVar10 = 0;
  if ((int)uVar5 < *(int *)((longlong)this + 0x208)) {
    uVar10 = ~uVar5 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar15 = *(longlong *)((longlong)this + 0x200) + (longlong)(int)uVar5 * 0x50;
  if (*(longlong *)((longlong)this + 0x48) == 0) {
    puVar8 = ::operator_new(0x30);
    if (puVar8 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar8 + 1) = 0x28;
      *puVar8 = &
                ___7__TPayloadArray_UFUpdateInstanceFromComputeCommand_____TSceneUpdateCommandQueue_VFPrimitiveSceneInfo__W4EPrimitiveUpdateDirtyFlags__W4EPrimitiveUpdateId____6B_
      ;
      puVar8[2] = 0;
      puVar8[3] = 0;
      puVar8[4] = 0;
      puVar8[5] = 0;
      puVar9 = puVar8;
    }
    puVar8 = *(undefined8 **)((longlong)this + 0x48);
    *(undefined8 **)((longlong)this + 0x48) = puVar9;
    if (puVar8 != (undefined8 *)0x0) {
      (**(code **)*puVar8)(puVar8,1);
    }
  }
  if (((*(longlong *)((longlong)this + 0x48) != 0) &&
      (*(int *)(*(longlong *)((longlong)this + 0x48) + 8) != 0x28)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PayloadArrays[int32(PayloadType::Id)] == nullptr || PayloadArrays[int32(PayloadType::Id)]->PayloadByteSize == sizeof(PayloadType)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                         ,0x236,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar1 = *(longlong *)((longlong)this + 0x48);
  if ((lVar1 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Payloads != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                         ,0xce,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*(ulonglong *)(lVar15 + 8) >> 9 & 1) == 0) {
    iVar7 = *(int *)(lVar1 + 0x28);
  }
  else {
    uVar10 = (uint)*(ulonglong *)(lVar15 + 8) & 0x1ff;
    uVar11 = (ulonglong)uVar10 - ((ulonglong)(uVar10 >> 1) & 0x5555555555555555);
    uVar11 = (uVar11 >> 2 & 0x3333333333333333) + (uVar11 & 0x3333333333333333);
    uVar11 = ((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if ((*(int *)(lVar15 + 0x48) <= (int)(uint)(byte)(uVar11 >> 0x38)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar7 = *(int *)(lVar1 + 0x28);
    lVar12 = *(longlong *)(lVar15 + 0x40);
    if (*(longlong *)(lVar15 + 0x40) == 0) {
      lVar12 = lVar15 + 0x20;
    }
    uVar10 = *(uint *)(lVar12 + (uVar11 >> 0x38) * 4);
    if (uVar10 != 0xffffffff) {
      uVar6 = 0;
      if ((int)uVar10 < iVar7) {
        uVar6 = ~uVar10 >> 0x1f;
      }
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
      if ((*(uint *)(*(longlong *)(lVar1 + 0x20) + (longlong)(int)uVar10 * 4) != uVar5) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Payloads->CommandSlots[PrevPayloadOffset] == CommandSlot",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                             ,0xd4,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = 0;
      if ((int)uVar10 < *(int *)(lVar1 + 0x18)) {
        uVar5 = ~uVar10 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar9 = (undefined8 *)(*(longlong *)(lVar1 + 0x10) + (longlong)(int)uVar10 * 0x28);
      *puVar9 = param_2->PrimitiveSceneProxy;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar9 + 2),
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_2->GPUSceneWriter).Delegate);
      return;
    }
  }
  uVar10 = 0;
  if ((int)uVar5 < *(int *)((longlong)this + 0x208)) {
    uVar10 = ~uVar5 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar15 = (longlong)(int)uVar5 * 0x50 + *(longlong *)((longlong)this + 0x200);
  *(uint *)(lVar15 + 0x14) = *(uint *)(lVar15 + 0x14) | 6;
  uVar11 = *(ulonglong *)(lVar15 + 8);
  uVar10 = (uint)uVar11 & 0x1ff;
  uVar13 = (ulonglong)uVar10 - ((ulonglong)(uVar10 >> 1) & 0x5555555555555555);
  uVar13 = (uVar13 >> 2 & 0x3333333333333333) + (uVar13 & 0x3333333333333333);
  bVar3 = (byte)(((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  local_res8[0] = iVar7;
  if ((uVar11 >> 9 & 1) == 0) {
    *(ulonglong *)(lVar15 + 8) = uVar11 | 0x200;
    TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::Insert
              ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
               (lVar15 + 0x20),local_res8,(uint)bVar3);
  }
  else {
    if ((*(int *)(lVar15 + 0x48) <= (int)(uint)bVar3) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pTVar14 = *(TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> **)
               (lVar15 + 0x40);
    if (*(TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> **)(lVar15 + 0x40) ==
        (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
      pTVar14 = (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
                (lVar15 + 0x20);
    }
    *(int *)((pTVar14->AllocatorInstance).InlineData + (ulonglong)bVar3 * 4) = iVar7;
  }
  iVar7 = *(int *)(lVar1 + 0x28);
  if (iVar7 == *(int *)(lVar1 + 0x2c)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)(lVar1 + 0x20),(int *)(lVar1 + 0x2c));
    *(int *)(lVar1 + 0x28) = iVar7;
  }
  *(int *)(lVar1 + 0x28) = iVar7 + 1;
  *(uint *)(((ForAnyElementType *)(lVar1 + 0x20))->Data + (longlong)iVar7 * 4) = uVar5;
  iVar7 = *(int *)(lVar1 + 0x18);
  if (iVar7 == *(int *)(lVar1 + 0x1c)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,(ForAnyElementType *)(lVar1 + 0x10),(int *)(lVar1 + 0x1c));
  }
  *(int *)(lVar1 + 0x18) = iVar7 + 1;
  puVar9 = (undefined8 *)(*(longlong *)(lVar1 + 0x10) + (longlong)iVar7 * 0x28);
  *puVar9 = param_2->PrimitiveSceneProxy;
  puVar9[1] = &___7FGPUSceneWriteDelegate__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar9 + 2),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_2->GPUSceneWriter).Delegate);
  return;
}

// Enqueue<FUpdateLightColorParameters> @ 1453dc940

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall
TSceneUpdateCommandQueue<FLightSceneInfo,enum_ELightDirtyFlags,enum_ELightUpdateId>::
Enqueue<FUpdateLightColorParameters>
          (void *this,FLightSceneInfo *param_1,FUpdateLightColorParameters *param_2)

{
  float *pfVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  code *pcVar5;
  byte bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar19;
  longlong lVar20;
  int local_res8 [2];
  
  if ((*(int *)((longlong)this + 0x288) != 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("RaceGuard == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                          ,0xc3,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar12 = GetOrAddCommandSlot(this,param_1);
  puVar17 = (undefined8 *)0x0;
  uVar13 = 0;
  if ((int)uVar12 < *(int *)((longlong)this + 0x208)) {
    uVar13 = ~uVar12 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar20 = *(longlong *)((longlong)this + 0x200);
  if (*(longlong *)((longlong)this + 0x10) == 0) {
    puVar16 = ::operator_new(0x30);
    if (puVar16 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar16 + 1) = 0x18;
      *puVar16 = &
                 ___7__TPayloadArray_UFUpdateLightColorParameters_____TSceneUpdateCommandQueue_VFLightSceneInfo__W4ELightDirtyFlags__W4ELightUpdateId____6B_
      ;
      puVar16[2] = 0;
      puVar16[3] = 0;
      puVar16[4] = 0;
      puVar16[5] = 0;
      puVar17 = puVar16;
    }
    puVar16 = *(undefined8 **)((longlong)this + 0x10);
    *(undefined8 **)((longlong)this + 0x10) = puVar17;
    if (puVar16 != (undefined8 *)0x0) {
      (**(code **)*puVar16)(puVar16,1);
    }
  }
  if (((*(longlong *)((longlong)this + 0x10) != 0) &&
      (*(int *)(*(longlong *)((longlong)this + 0x10) + 8) != 0x18)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("PayloadArrays[int32(PayloadType::Id)] == nullptr || PayloadArrays[int32(PayloadType::Id)]->PayloadByteSize == sizeof(PayloadType)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                          ,0x236,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar3 = *(longlong *)((longlong)this + 0x10);
  if ((lVar3 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Payloads != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                          ,0xce,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar13 = FUpdateCommand::GetPayloadOffset<FUpdateLightColorParameters>
                     ((void *)((longlong)(int)uVar12 * 0x50 + lVar20));
  iVar15 = *(int *)(lVar3 + 0x28);
  lVar20 = (longlong)(int)uVar13;
  if (uVar13 == 0xffffffff) {
    uVar13 = 0;
    if ((int)uVar12 < *(int *)((longlong)this + 0x208)) {
      uVar13 = ~uVar12 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar20 = *(longlong *)((longlong)this + 0x200) + (longlong)(int)uVar12 * 0x50;
    uVar4 = *(ulonglong *)(lVar20 + 8);
    uVar13 = (uint)uVar4 & 3;
    uVar18 = (ulonglong)uVar13 - (ulonglong)(uVar13 >> 1);
    uVar18 = (uVar18 >> 2 & 0x3333333333333333) + (uVar18 & 0x3333333333333333);
    bVar6 = (byte)(((uVar18 >> 4) + uVar18 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
    local_res8[0] = iVar15;
    if ((uVar4 & 4) == 0) {
      *(ulonglong *)(lVar20 + 8) = uVar4 | 4;
      TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::Insert
                ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
                 (lVar20 + 0x20),local_res8,(uint)bVar6);
    }
    else {
      if ((*(int *)(lVar20 + 0x48) <= (int)(uint)bVar6) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar19 = *(TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> **)
                 (lVar20 + 0x40);
      if (*(TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> **)(lVar20 + 0x40)
          == (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
        pTVar19 = (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
                  (lVar20 + 0x20);
      }
      *(int *)((pTVar19->AllocatorInstance).InlineData + (ulonglong)bVar6 * 4) = iVar15;
    }
    iVar15 = *(int *)(lVar3 + 0x28);
    if (iVar15 == *(int *)(lVar3 + 0x2c)) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,(ForAnyElementType *)(lVar3 + 0x20),(int *)(lVar3 + 0x2c));
    }
    *(int *)(lVar3 + 0x28) = iVar15 + 1;
    *(uint *)(*(longlong *)(lVar3 + 0x20) + (longlong)iVar15 * 4) = uVar12;
    iVar15 = *(int *)(lVar3 + 0x18);
    if (iVar15 == *(int *)(lVar3 + 0x1c)) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x418,(ForAnyElementType *)(lVar3 + 0x10),(int *)(lVar3 + 0x1c));
    }
    *(int *)(lVar3 + 0x18) = iVar15 + 1;
    uVar2 = *(undefined8 *)((longlong)&(param_2->NewColor).field0_0x0 + 8);
    lVar20 = *(longlong *)(lVar3 + 0x10);
    puVar17 = (undefined8 *)(lVar20 + (longlong)iVar15 * 0x18);
    *puVar17 = *(undefined8 *)&(param_2->NewColor).field0_0x0;
    puVar17[1] = uVar2;
    *(undefined8 *)(lVar20 + 0x10 + (longlong)iVar15 * 0x18) =
         *(undefined8 *)&param_2->NewIndirectLightingScale;
  }
  else {
    uVar14 = 0;
    if ((int)uVar13 < iVar15) {
      uVar14 = ~uVar13 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((*(uint *)(*(longlong *)(lVar3 + 0x20) + lVar20 * 4) != uVar12) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Payloads->CommandSlots[PrevPayloadOffset] == CommandSlot",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                            ,0xd4,L""), bVar11)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    fVar7 = (param_2->NewColor).field0_0x0._s_0.R;
    fVar8 = (param_2->NewColor).field0_0x0._s_0.G;
    fVar9 = (param_2->NewColor).field0_0x0._s_0.B;
    fVar10 = (param_2->NewColor).field0_0x0._s_0.A;
    uVar2 = *(undefined8 *)&param_2->NewIndirectLightingScale;
    uVar12 = 0;
    if ((int)uVar13 < *(int *)(lVar3 + 0x18)) {
      uVar12 = ~uVar13 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar3 = *(longlong *)(lVar3 + 0x10);
    pfVar1 = (float *)(lVar3 + lVar20 * 0x18);
    *pfVar1 = fVar7;
    pfVar1[1] = fVar8;
    pfVar1[2] = fVar9;
    pfVar1[3] = fVar10;
    *(undefined8 *)(lVar3 + 0x10 + lVar20 * 0x18) = uVar2;
  }
  return;
}

// Enqueue<FUpdateLightTransformParameters> @ 1453dcd80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall
TSceneUpdateCommandQueue<FLightSceneInfo,enum_ELightDirtyFlags,enum_ELightUpdateId>::
Enqueue<FUpdateLightTransformParameters>
          (void *this,FLightSceneInfo *param_1,FUpdateLightTransformParameters *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  code *pcVar3;
  byte bVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar14;
  double *pdVar15;
  int local_e8 [2];
  longlong local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  
  if ((*(int *)((longlong)this + 0x288) != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("RaceGuard == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                         ,0xc3,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar7 = GetOrAddCommandSlot(this,param_1);
  puVar12 = (undefined8 *)0x0;
  uVar8 = 0;
  if ((int)uVar7 < *(int *)((longlong)this + 0x208)) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar13 = *(longlong *)((longlong)this + 0x200);
  if (*(longlong *)((longlong)this + 8) == 0) {
    puVar11 = ::operator_new(0x30);
    if (puVar11 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar11 + 1) = 0xa0;
      *puVar11 = &
                 ___7__TPayloadArray_UFUpdateLightTransformParameters_____TSceneUpdateCommandQueue_VFLightSceneInfo__W4ELightDirtyFlags__W4ELightUpdateId____6B_
      ;
      puVar11[2] = 0;
      puVar11[3] = 0;
      puVar11[4] = 0;
      puVar11[5] = 0;
      puVar12 = puVar11;
    }
    puVar11 = *(undefined8 **)((longlong)this + 8);
    *(undefined8 **)((longlong)this + 8) = puVar12;
    if (puVar11 != (undefined8 *)0x0) {
      (**(code **)*puVar11)(puVar11,1);
    }
  }
  if (((*(longlong *)((longlong)this + 8) != 0) &&
      (*(int *)(*(longlong *)((longlong)this + 8) + 8) != 0xa0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("PayloadArrays[int32(PayloadType::Id)] == nullptr || PayloadArrays[int32(PayloadType::Id)]->PayloadByteSize == sizeof(PayloadType)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                         ,0x236,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar1 = *(longlong *)((longlong)this + 8);
  if ((lVar1 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Payloads != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                         ,0xce,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_e0 = (longlong)(int)uVar7 * 0x50;
  uVar8 = FUpdateCommand::GetPayloadOffset<FUpdateLightTransformParameters>
                    ((void *)(local_e0 + lVar13));
  iVar10 = *(int *)(lVar1 + 0x28);
  if (uVar8 == 0xffffffff) {
    uVar8 = 0;
    if ((int)uVar7 < *(int *)((longlong)this + 0x208)) {
      uVar8 = ~uVar7 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar13 = local_e0 + *(longlong *)((longlong)this + 0x200);
    uVar2 = *(ulonglong *)(lVar13 + 8);
    bVar4 = (byte)((ulonglong)((uint)uVar2 & 1) * 0x101010101010101 >> 0x38);
    local_e8[0] = iVar10;
    if ((uVar2 & 2) == 0) {
      *(ulonglong *)(lVar13 + 8) = uVar2 | 2;
      TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::Insert
                ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
                 (lVar13 + 0x20),local_e8,(uint)bVar4);
    }
    else {
      if ((*(int *)(lVar13 + 0x48) <= (int)(uint)bVar4) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar14 = *(TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> **)
                 (lVar13 + 0x40);
      if (*(TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> **)(lVar13 + 0x40)
          == (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
        pTVar14 = (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
                  (lVar13 + 0x20);
      }
      *(int *)((pTVar14->AllocatorInstance).InlineData + (ulonglong)bVar4 * 4) = iVar10;
    }
    iVar10 = *(int *)(lVar1 + 0x28);
    if (iVar10 == *(int *)(lVar1 + 0x2c)) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,(ForAnyElementType *)(lVar1 + 0x20),(int *)(lVar1 + 0x2c));
    }
    *(int *)(lVar1 + 0x28) = iVar10 + 1;
    *(uint *)(*(longlong *)(lVar1 + 0x20) + (longlong)iVar10 * 4) = uVar7;
    iVar10 = *(int *)(lVar1 + 0x18);
    if (iVar10 == *(int *)(lVar1 + 0x1c)) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10a0,(ForAnyElementType *)(lVar1 + 0x10),(int *)(lVar1 + 0x1c));
    }
    *(int *)(lVar1 + 0x18) = iVar10 + 1;
    dVar5 = (param_2->LightToWorld).M[0][1];
    pdVar15 = (double *)((longlong)iVar10 * 0xa0 + *(longlong *)(lVar1 + 0x10));
    *pdVar15 = (param_2->LightToWorld).M[0][0];
    pdVar15[1] = dVar5;
    dVar5 = (param_2->LightToWorld).M[0][3];
    pdVar15[2] = (param_2->LightToWorld).M[0][2];
    pdVar15[3] = dVar5;
    dVar5 = (param_2->LightToWorld).M[1][1];
    pdVar15[4] = (param_2->LightToWorld).M[1][0];
    pdVar15[5] = dVar5;
    dVar5 = (param_2->LightToWorld).M[1][3];
    pdVar15[6] = (param_2->LightToWorld).M[1][2];
    pdVar15[7] = dVar5;
    dVar5 = (param_2->LightToWorld).M[2][1];
    pdVar15[8] = (param_2->LightToWorld).M[2][0];
    pdVar15[9] = dVar5;
    dVar5 = (param_2->LightToWorld).M[2][3];
    pdVar15[10] = (param_2->LightToWorld).M[2][2];
    pdVar15[0xb] = dVar5;
    dVar5 = (param_2->LightToWorld).M[3][1];
    pdVar15[0xc] = (param_2->LightToWorld).M[3][0];
    pdVar15[0xd] = dVar5;
    dVar5 = (param_2->LightToWorld).M[3][3];
    pdVar15[0xe] = (param_2->LightToWorld).M[3][2];
    pdVar15[0xf] = dVar5;
    dVar5 = (param_2->Position).field0_0x0._s_0.Y;
    pdVar15[0x10] = (param_2->Position).field0_0x0._s_0.X;
    pdVar15[0x11] = dVar5;
    dVar5 = (param_2->Position).field0_0x0._s_0.W;
    pdVar15[0x12] = (param_2->Position).field0_0x0._s_0.Z;
    pdVar15[0x13] = dVar5;
  }
  else {
    uVar9 = 0;
    if ((int)uVar8 < iVar10) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((*(uint *)(*(longlong *)(lVar1 + 0x20) + (longlong)(int)uVar8 * 4) != uVar7) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Payloads->CommandSlots[PrevPayloadOffset] == CommandSlot",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                           ,0xd4,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_d8 = (param_2->LightToWorld).M[0][0];
    dStack_d0 = (param_2->LightToWorld).M[0][1];
    local_c8 = (param_2->LightToWorld).M[0][2];
    dStack_c0 = (param_2->LightToWorld).M[0][3];
    local_b8 = (param_2->LightToWorld).M[1][0];
    dStack_b0 = (param_2->LightToWorld).M[1][1];
    local_a8 = (param_2->LightToWorld).M[1][2];
    dStack_a0 = (param_2->LightToWorld).M[1][3];
    local_98 = (param_2->LightToWorld).M[2][0];
    dStack_90 = (param_2->LightToWorld).M[2][1];
    local_88 = (param_2->LightToWorld).M[2][2];
    dStack_80 = (param_2->LightToWorld).M[2][3];
    local_78 = (param_2->LightToWorld).M[3][0];
    dStack_70 = (param_2->LightToWorld).M[3][1];
    local_58 = (param_2->Position).field0_0x0._s_0.X;
    dStack_50 = (param_2->Position).field0_0x0._s_0.Y;
    local_68 = (param_2->LightToWorld).M[3][2];
    dStack_60 = (param_2->LightToWorld).M[3][3];
    local_48 = (param_2->Position).field0_0x0._s_0.Z;
    dStack_40 = (param_2->Position).field0_0x0._s_0.W;
    uVar7 = 0;
    if ((int)uVar8 < *(int *)(lVar1 + 0x18)) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pdVar15 = (double *)((longlong)(int)uVar8 * 0xa0 + *(longlong *)(lVar1 + 0x10));
    *pdVar15 = local_d8;
    pdVar15[1] = dStack_d0;
    pdVar15[2] = local_c8;
    pdVar15[3] = dStack_c0;
    pdVar15[4] = local_b8;
    pdVar15[5] = dStack_b0;
    pdVar15[6] = local_a8;
    pdVar15[7] = dStack_a0;
    pdVar15[8] = local_98;
    pdVar15[9] = dStack_90;
    pdVar15[10] = local_88;
    pdVar15[0xb] = dStack_80;
    pdVar15[0xc] = local_78;
    pdVar15[0xd] = dStack_70;
    pdVar15[0xe] = local_68;
    pdVar15[0xf] = dStack_60;
    pdVar15[0x10] = local_58;
    pdVar15[0x11] = dStack_50;
    pdVar15[0x12] = local_48;
    pdVar15[0x13] = dStack_40;
  }
  return;
}

// Enqueue<FUpdateTransformCommand> @ 1453dd270

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::Enqueue<FUpdateTransformCommand>
          (void *this,FPrimitiveSceneInfo *param_1,FUpdateTransformCommand *param_2)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  uint *puVar15;
  double *pdVar16;
  TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar17;
  double *pdVar18;
  double *pdVar19;
  double *pdVar20;
  FUpdateTransformCommand *pFVar21;
  longlong lVar22;
  longlong lVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  int local_res20 [2];
  double local_150 [35];
  
  if ((*(int *)((longlong)this + 0x288) != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("RaceGuard == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                         ,0xc3,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar9 = GetOrAddCommandSlot(this,param_1);
  puVar14 = (undefined8 *)0x0;
  uVar10 = 0;
  if ((int)uVar9 < *(int *)((longlong)this + 0x208)) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar22 = *(longlong *)((longlong)this + 0x200) + (longlong)(int)uVar9 * 0x50;
  if (*(longlong *)this == 0) {
    puVar13 = ::operator_new(0x30);
    if (puVar13 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar13 + 1) = 0x110;
      *puVar13 = &
                 ___7__TPayloadArray_UFUpdateTransformCommand_____TSceneUpdateCommandQueue_VFPrimitiveSceneInfo__W4EPrimitiveUpdateDirtyFlags__W4EPrimitiveUpdateId____6B_
      ;
      puVar13[2] = 0;
      puVar13[3] = 0;
      puVar13[4] = 0;
      puVar13[5] = 0;
      puVar14 = puVar13;
    }
    puVar13 = *(undefined8 **)this;
    *(undefined8 **)this = puVar14;
    if (puVar13 != (undefined8 *)0x0) {
      (**(code **)*puVar13)(puVar13,1);
    }
  }
  if (((*(longlong *)this != 0) && (*(int *)(*(longlong *)this + 8) != 0x110)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("PayloadArrays[int32(PayloadType::Id)] == nullptr || PayloadArrays[int32(PayloadType::Id)]->PayloadByteSize == sizeof(PayloadType)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                         ,0x236,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar1 = *(longlong *)this;
  if ((lVar1 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Payloads != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                         ,0xce,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((*(byte *)(lVar22 + 8) & 1) == 0) {
    iVar12 = *(int *)(lVar1 + 0x28);
  }
  else {
    if ((*(int *)(lVar22 + 0x48) < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar12 = *(int *)(lVar1 + 0x28);
    puVar15 = *(uint **)(lVar22 + 0x40);
    if (*(uint **)(lVar22 + 0x40) == (uint *)0x0) {
      puVar15 = (uint *)(lVar22 + 0x20);
    }
    uVar10 = *puVar15;
    if (uVar10 != 0xffffffff) {
      uVar11 = 0;
      if ((int)uVar10 < iVar12) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((*(uint *)(*(longlong *)(lVar1 + 0x20) + (longlong)(int)uVar10 * 4) != uVar9) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Payloads->CommandSlots[PrevPayloadOffset] == CommandSlot",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                             ,0xd4,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar23 = 2;
      lVar22 = 2;
      pdVar19 = local_150;
      do {
        pFVar21 = param_2;
        pdVar18 = pdVar19;
        dVar4 = (pFVar21->WorldBounds).Origin.field0_0x0._s_0.Y;
        dVar5 = (pFVar21->WorldBounds).Origin.field0_0x0._s_0.Z;
        dVar6 = (pFVar21->WorldBounds).BoxExtent.field0_0x0._s_0.X;
        param_2 = (FUpdateTransformCommand *)((pFVar21->LocalToWorld).M[0] + 2);
        *pdVar18 = (pFVar21->WorldBounds).Origin.field0_0x0._s_0.X;
        pdVar18[1] = dVar4;
        dVar4 = (pFVar21->WorldBounds).BoxExtent.field0_0x0._s_0.Y;
        dVar7 = (pFVar21->WorldBounds).BoxExtent.field0_0x0._s_0.Z;
        pdVar18[2] = dVar5;
        pdVar18[3] = dVar6;
        dVar5 = (pFVar21->WorldBounds).SphereRadius;
        dVar6 = (pFVar21->LocalBounds).Origin.field0_0x0._s_0.X;
        pdVar18[4] = dVar4;
        pdVar18[5] = dVar7;
        dVar4 = (pFVar21->LocalBounds).Origin.field0_0x0._s_0.Y;
        dVar7 = (pFVar21->LocalBounds).Origin.field0_0x0._s_0.Z;
        pdVar18[6] = dVar5;
        pdVar18[7] = dVar6;
        dVar5 = (pFVar21->LocalBounds).BoxExtent.field0_0x0._s_0.X;
        dVar6 = (pFVar21->LocalBounds).BoxExtent.field0_0x0._s_0.Y;
        pdVar18[8] = dVar4;
        pdVar18[9] = dVar7;
        dVar4 = (pFVar21->LocalBounds).BoxExtent.field0_0x0._s_0.Z;
        dVar7 = (pFVar21->LocalBounds).SphereRadius;
        pdVar18[10] = dVar5;
        pdVar18[0xb] = dVar6;
        dVar5 = (pFVar21->LocalToWorld).M[0][0];
        dVar6 = (pFVar21->LocalToWorld).M[0][1];
        pdVar18[0xc] = dVar4;
        pdVar18[0xd] = dVar7;
        pdVar18[0xe] = dVar5;
        pdVar18[0xf] = dVar6;
        lVar22 = lVar22 + -1;
        pdVar19 = pdVar18 + 0x10;
      } while (lVar22 != 0);
      dVar4 = (pFVar21->LocalToWorld).M[0][3];
      pdVar18[0x10] = (param_2->WorldBounds).Origin.field0_0x0._s_0.X;
      pdVar18[0x11] = dVar4;
      uVar9 = 0;
      if ((int)uVar10 < *(int *)(lVar1 + 0x18)) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pdVar19 = local_150;
      pdVar18 = (double *)((longlong)(int)uVar10 * 0x110 + *(longlong *)(lVar1 + 0x10));
      do {
        pdVar16 = pdVar19;
        pdVar20 = pdVar18 + 0x10;
        dVar4 = pdVar16[1];
        dVar5 = pdVar16[2];
        dVar6 = pdVar16[3];
        *pdVar18 = *pdVar16;
        pdVar18[1] = dVar4;
        dVar4 = pdVar16[4];
        dVar7 = pdVar16[5];
        pdVar18[2] = dVar5;
        pdVar18[3] = dVar6;
        dVar5 = pdVar16[6];
        dVar6 = pdVar16[7];
        pdVar18[4] = dVar4;
        pdVar18[5] = dVar7;
        dVar4 = pdVar16[8];
        dVar7 = pdVar16[9];
        pdVar18[6] = dVar5;
        pdVar18[7] = dVar6;
        dVar5 = pdVar16[10];
        dVar6 = pdVar16[0xb];
        pdVar18[8] = dVar4;
        pdVar18[9] = dVar7;
        dVar4 = pdVar16[0xc];
        dVar7 = pdVar16[0xd];
        pdVar18[10] = dVar5;
        pdVar18[0xb] = dVar6;
        dVar5 = pdVar16[0xe];
        dVar6 = pdVar16[0xf];
        pdVar18[0xc] = dVar4;
        pdVar18[0xd] = dVar7;
        pdVar18[0xe] = dVar5;
        pdVar18[0xf] = dVar6;
        lVar23 = lVar23 + -1;
        pdVar19 = pdVar16 + 0x10;
        pdVar18 = pdVar20;
      } while (lVar23 != 0);
      uVar24 = *(undefined4 *)(pdVar16 + 0x10);
      uVar25 = *(undefined4 *)((longlong)pdVar16 + 0x84);
      uVar26 = *(undefined4 *)(pdVar16 + 0x11);
      uVar27 = *(undefined4 *)((longlong)pdVar16 + 0x8c);
      goto LAB_1453dd786;
    }
  }
  uVar10 = 0;
  if ((int)uVar9 < *(int *)((longlong)this + 0x208)) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar22 = *(longlong *)((longlong)this + 0x200) + (longlong)(int)uVar9 * 0x50;
  *(uint *)(lVar22 + 0x14) = *(uint *)(lVar22 + 0x14) | 0x15;
  local_res20[0] = iVar12;
  if ((*(ulonglong *)(lVar22 + 8) & 1) == 0) {
    *(ulonglong *)(lVar22 + 8) = *(ulonglong *)(lVar22 + 8) | 1;
    TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::Insert
              ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
               (lVar22 + 0x20),local_res20,0);
  }
  else {
    if ((*(int *)(lVar22 + 0x48) < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar17 = *(TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> **)
               (lVar22 + 0x40);
    if (*(TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> **)(lVar22 + 0x40) ==
        (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
      pTVar17 = (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
                (lVar22 + 0x20);
    }
    *(int *)(pTVar17->AllocatorInstance).InlineData = iVar12;
  }
  iVar12 = *(int *)(lVar1 + 0x28);
  if (iVar12 == *(int *)(lVar1 + 0x2c)) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,(ForAnyElementType *)(lVar1 + 0x20),(int *)(lVar1 + 0x2c));
    *(int *)(lVar1 + 0x28) = iVar12;
  }
  pFVar2 = ((ForAnyElementType *)(lVar1 + 0x20))->Data;
  *(int *)(lVar1 + 0x28) = iVar12 + 1;
  *(uint *)(pFVar2 + (longlong)iVar12 * 4) = uVar9;
  iVar12 = *(int *)(lVar1 + 0x18);
  if (iVar12 == *(int *)(lVar1 + 0x1c)) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x110,0x10,(ForAnyElementType *)(lVar1 + 0x10),(int *)(lVar1 + 0x1c));
  }
  lVar22 = 2;
  *(int *)(lVar1 + 0x18) = iVar12 + 1;
  pdVar19 = (double *)((longlong)iVar12 * 0x110 + *(longlong *)(lVar1 + 0x10));
  do {
    pFVar21 = param_2;
    pdVar20 = pdVar19 + 0x10;
    dVar4 = (pFVar21->WorldBounds).Origin.field0_0x0._s_0.Y;
    param_2 = (FUpdateTransformCommand *)((pFVar21->LocalToWorld).M[0] + 2);
    *pdVar19 = (pFVar21->WorldBounds).Origin.field0_0x0._s_0.X;
    pdVar19[1] = dVar4;
    dVar4 = (pFVar21->WorldBounds).BoxExtent.field0_0x0._s_0.X;
    pdVar19[2] = (pFVar21->WorldBounds).Origin.field0_0x0._s_0.Z;
    pdVar19[3] = dVar4;
    dVar4 = (pFVar21->WorldBounds).BoxExtent.field0_0x0._s_0.Z;
    pdVar19[4] = (pFVar21->WorldBounds).BoxExtent.field0_0x0._s_0.Y;
    pdVar19[5] = dVar4;
    dVar4 = (pFVar21->LocalBounds).Origin.field0_0x0._s_0.X;
    pdVar19[6] = (pFVar21->WorldBounds).SphereRadius;
    pdVar19[7] = dVar4;
    dVar4 = (pFVar21->LocalBounds).Origin.field0_0x0._s_0.Z;
    pdVar19[8] = (pFVar21->LocalBounds).Origin.field0_0x0._s_0.Y;
    pdVar19[9] = dVar4;
    dVar4 = (pFVar21->LocalBounds).BoxExtent.field0_0x0._s_0.Y;
    pdVar19[10] = (pFVar21->LocalBounds).BoxExtent.field0_0x0._s_0.X;
    pdVar19[0xb] = dVar4;
    dVar4 = (pFVar21->LocalBounds).SphereRadius;
    pdVar19[0xc] = (pFVar21->LocalBounds).BoxExtent.field0_0x0._s_0.Z;
    pdVar19[0xd] = dVar4;
    dVar4 = (pFVar21->LocalToWorld).M[0][1];
    pdVar19[0xe] = (pFVar21->LocalToWorld).M[0][0];
    pdVar19[0xf] = dVar4;
    lVar22 = lVar22 + -1;
    pdVar19 = pdVar20;
  } while (lVar22 != 0);
  uVar24 = *(undefined4 *)&(param_2->WorldBounds).Origin.field0_0x0;
  uVar25 = *(undefined4 *)((longlong)(pFVar21->LocalToWorld).M[0] + 0x14);
  uVar26 = *(undefined4 *)((pFVar21->LocalToWorld).M[0] + 3);
  uVar27 = *(undefined4 *)((longlong)(pFVar21->LocalToWorld).M[0] + 0x1c);
LAB_1453dd786:
  *(undefined4 *)pdVar20 = uVar24;
  *(undefined4 *)((longlong)pdVar20 + 4) = uVar25;
  *(undefined4 *)(pdVar20 + 1) = uVar26;
  *(undefined4 *)((longlong)pdVar20 + 0xc) = uVar27;
  return;
}

// GetPayloadArray<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>::TPayloadBase<7,0>_> @ 1453eff90

TPayloadArray<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>::TPayloadBase<7,0>_>
* __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::
GetPayloadArray<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>::TPayloadBase<7,0>_>
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  TPayloadArray<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>::TPayloadBase<7,0>_>
  *pTVar3;
  
  pTVar3 = *(TPayloadArray<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>::TPayloadBase<7,0>_>
             **)((longlong)this + 0x38);
  if ((pTVar3 != (TPayloadArray<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>::TPayloadBase<7,0>_>
                  *)0x0) && ((int)pTVar3->_padding_ != 1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PayloadArrays[int32(PayloadType::Id)] == nullptr || PayloadArrays[int32(PayloadType::Id)]->PayloadByteSize == sizeof(PayloadType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                       ,0x236,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TPayloadArray<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>::TPayloadBase<7,0>_>
                *)(*pcVar1)();
      return pTVar3;
    }
    pTVar3 = *(TPayloadArray<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>::TPayloadBase<7,0>_>
               **)((longlong)this + 0x38);
  }
  return pTVar3;
}

// GetPayloadArray<TSingleValuePrimitiveUpdatePayload<float,4,0>_> @ 1453effe0

TPayloadArray<TSingleValuePrimitiveUpdatePayload<float,4,0>_> * __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::GetPayloadArray<TSingleValuePrimitiveUpdatePayload<float,4,0>_>(void *this)

{
  code *pcVar1;
  bool bVar2;
  TPayloadArray<TSingleValuePrimitiveUpdatePayload<float,4,0>_> *pTVar3;
  
  pTVar3 = *(TPayloadArray<TSingleValuePrimitiveUpdatePayload<float,4,0>_> **)
            ((longlong)this + 0x20);
  if ((pTVar3 != (TPayloadArray<TSingleValuePrimitiveUpdatePayload<float,4,0>_> *)0x0) &&
     ((int)pTVar3->_padding_ != 4)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PayloadArrays[int32(PayloadType::Id)] == nullptr || PayloadArrays[int32(PayloadType::Id)]->PayloadByteSize == sizeof(PayloadType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                       ,0x236,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TPayloadArray<TSingleValuePrimitiveUpdatePayload<float,4,0>_> *)(*pcVar1)();
      return pTVar3;
    }
    pTVar3 = *(TPayloadArray<TSingleValuePrimitiveUpdatePayload<float,4,0>_> **)
              ((longlong)this + 0x20);
  }
  return pTVar3;
}

// GetPayloadArray<TSingleValuePrimitiveUpdatePayload<UE::Math::TMatrix<double>,8,16>_> @ 1453f0030

TPayloadArray<TSingleValuePrimitiveUpdatePayload<UE::Math::TMatrix<double>,8,16>_> * __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::GetPayloadArray<TSingleValuePrimitiveUpdatePayload<UE::Math::TMatrix<double>,8,16>_>(void *this)

{
  code *pcVar1;
  bool bVar2;
  TPayloadArray<TSingleValuePrimitiveUpdatePayload<UE::Math::TMatrix<double>,8,16>_> *pTVar3;
  
  pTVar3 = *(TPayloadArray<TSingleValuePrimitiveUpdatePayload<UE::Math::TMatrix<double>,8,16>_> **)
            ((longlong)this + 0x40);
  if ((pTVar3 != (TPayloadArray<TSingleValuePrimitiveUpdatePayload<UE::Math::TMatrix<double>,8,16>_>
                  *)0x0) && ((int)pTVar3->_padding_ != 0x80)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PayloadArrays[int32(PayloadType::Id)] == nullptr || PayloadArrays[int32(PayloadType::Id)]->PayloadByteSize == sizeof(PayloadType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                       ,0x236,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TPayloadArray<TSingleValuePrimitiveUpdatePayload<UE::Math::TMatrix<double>,8,16>_> *
               )(*pcVar1)();
      return pTVar3;
    }
    pTVar3 = *(TPayloadArray<TSingleValuePrimitiveUpdatePayload<UE::Math::TMatrix<double>,8,16>_> **
              )((longlong)this + 0x40);
  }
  return pTVar3;
}

// GetPayloadArray<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector2<float>,5,24>_> @ 1453f0090

TPayloadArray<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector2<float>,5,24>_> * __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::GetPayloadArray<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector2<float>,5,24>_>(void *this)

{
  code *pcVar1;
  bool bVar2;
  TPayloadArray<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector2<float>,5,24>_> *pTVar3;
  
  pTVar3 = *(TPayloadArray<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector2<float>,5,24>_> **)
            ((longlong)this + 0x28);
  if ((pTVar3 != (TPayloadArray<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector2<float>,5,24>_>
                  *)0x0) && ((int)pTVar3->_padding_ != 8)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PayloadArrays[int32(PayloadType::Id)] == nullptr || PayloadArrays[int32(PayloadType::Id)]->PayloadByteSize == sizeof(PayloadType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                       ,0x236,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TPayloadArray<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector2<float>,5,24>_> *
               )(*pcVar1)();
      return pTVar3;
    }
    pTVar3 = *(TPayloadArray<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector2<float>,5,24>_> **
              )((longlong)this + 0x28);
  }
  return pTVar3;
}

// GetPayloadArray<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector<float>,6,8>_> @ 1453f00e0

TPayloadArray<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector<float>,6,8>_> * __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::GetPayloadArray<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector<float>,6,8>_>(void *this)

{
  code *pcVar1;
  bool bVar2;
  TPayloadArray<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector<float>,6,8>_> *pTVar3;
  
  pTVar3 = *(TPayloadArray<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector<float>,6,8>_> **)
            ((longlong)this + 0x30);
  if ((pTVar3 != (TPayloadArray<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector<float>,6,8>_> *
                 )0x0) && ((int)pTVar3->_padding_ != 0xc)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PayloadArrays[int32(PayloadType::Id)] == nullptr || PayloadArrays[int32(PayloadType::Id)]->PayloadByteSize == sizeof(PayloadType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                       ,0x236,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TPayloadArray<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector<float>,6,8>_> *)
               (*pcVar1)();
      return pTVar3;
    }
    pTVar3 = *(TPayloadArray<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector<float>,6,8>_> **)
              ((longlong)this + 0x30);
  }
  return pTVar3;
}

// GetPayloadArray<TSingleValuePrimitiveUpdatePayload<FPrimitiveComponentId,2,0>_> @ 1453f0130

TPayloadArray<TSingleValuePrimitiveUpdatePayload<FPrimitiveComponentId,2,0>_> * __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::GetPayloadArray<TSingleValuePrimitiveUpdatePayload<FPrimitiveComponentId,2,0>_>(void *this)

{
  code *pcVar1;
  bool bVar2;
  TPayloadArray<TSingleValuePrimitiveUpdatePayload<FPrimitiveComponentId,2,0>_> *pTVar3;
  
  pTVar3 = *(TPayloadArray<TSingleValuePrimitiveUpdatePayload<FPrimitiveComponentId,2,0>_> **)
            ((longlong)this + 0x10);
  if ((pTVar3 != (TPayloadArray<TSingleValuePrimitiveUpdatePayload<FPrimitiveComponentId,2,0>_> *)
                 0x0) && ((int)pTVar3->_padding_ != 4)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PayloadArrays[int32(PayloadType::Id)] == nullptr || PayloadArrays[int32(PayloadType::Id)]->PayloadByteSize == sizeof(PayloadType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                       ,0x236,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TPayloadArray<TSingleValuePrimitiveUpdatePayload<FPrimitiveComponentId,2,0>_> *)
               (*pcVar1)();
      return pTVar3;
    }
    pTVar3 = *(TPayloadArray<TSingleValuePrimitiveUpdatePayload<FPrimitiveComponentId,2,0>_> **)
              ((longlong)this + 0x10);
  }
  return pTVar3;
}

// GetPayloadArray<FUpdateInstanceCommand> @ 1453f0180

TPayloadArray<FUpdateInstanceCommand> * __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::GetPayloadArray<FUpdateInstanceCommand>(void *this)

{
  code *pcVar1;
  bool bVar2;
  TPayloadArray<FUpdateInstanceCommand> *pTVar3;
  
  pTVar3 = *(TPayloadArray<FUpdateInstanceCommand> **)((longlong)this + 8);
  if ((pTVar3 != (TPayloadArray<FUpdateInstanceCommand> *)0x0) && ((int)pTVar3->_padding_ != 0x78))
  {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PayloadArrays[int32(PayloadType::Id)] == nullptr || PayloadArrays[int32(PayloadType::Id)]->PayloadByteSize == sizeof(PayloadType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                       ,0x236,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TPayloadArray<FUpdateInstanceCommand> *)(*pcVar1)();
      return pTVar3;
    }
    pTVar3 = *(TPayloadArray<FUpdateInstanceCommand> **)((longlong)this + 8);
  }
  return pTVar3;
}

// GetPayloadArray<FUpdateTransformCommand> @ 1453f01d0

TPayloadArray<FUpdateTransformCommand> * __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::GetPayloadArray<FUpdateTransformCommand>(void *this)

{
  code *pcVar1;
  bool bVar2;
  TPayloadArray<FUpdateTransformCommand> *pTVar3;
  
  pTVar3 = *(TPayloadArray<FUpdateTransformCommand> **)this;
  if ((pTVar3 != (TPayloadArray<FUpdateTransformCommand> *)0x0) && ((int)pTVar3->_padding_ != 0x110)
     ) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PayloadArrays[int32(PayloadType::Id)] == nullptr || PayloadArrays[int32(PayloadType::Id)]->PayloadByteSize == sizeof(PayloadType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                       ,0x236,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TPayloadArray<FUpdateTransformCommand> *)(*pcVar1)();
      return pTVar3;
    }
    pTVar3 = *(TPayloadArray<FUpdateTransformCommand> **)this;
  }
  return pTVar3;
}

// GetPayloadPtr<FUpdateLightColorParameters> @ 1453f03b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

FUpdateLightColorParameters * __thiscall
TSceneUpdateCommandQueue<FLightSceneInfo,enum_ELightDirtyFlags,enum_ELightUpdateId>::
GetPayloadPtr<FUpdateLightColorParameters>(void *this,FUpdateCommand *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  FUpdateLightColorParameters *pFVar7;
  longlong lVar8;
  uint uVar9;
  
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    if (*(int *)(*(longlong *)((longlong)this + 0x10) + 8) != 0x18) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PayloadArrays[int32(PayloadType::Id)] == nullptr || PayloadArrays[int32(PayloadType::Id)]->PayloadByteSize == sizeof(PayloadType)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                         ,0x236,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FUpdateLightColorParameters *)(*pcVar2)();
        return pFVar7;
      }
    }
    lVar1 = *(longlong *)((longlong)this + 0x10);
    if (lVar1 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Payloads != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                         ,0xec,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FUpdateLightColorParameters *)(*pcVar2)();
        return pFVar7;
      }
    }
    uVar4 = FUpdateCommand::GetPayloadOffset<FUpdateLightColorParameters>(param_1);
    lVar8 = (longlong)(int)uVar4;
    if (uVar4 != 0xffffffff) {
      uVar9 = ~uVar4 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar4 < *(int *)(lVar1 + 0x28)) {
        uVar5 = uVar9;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FUpdateLightColorParameters *)(*pcVar2)();
          return pFVar7;
        }
      }
      if (*(int *)(*(longlong *)(lVar1 + 0x20) + lVar8 * 4) == -1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Payloads->CommandSlots[PayloadOffset] != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                           ,0xf3,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FUpdateLightColorParameters *)(*pcVar2)();
          return pFVar7;
        }
      }
      uVar5 = 0;
      if ((int)uVar4 < *(int *)(lVar1 + 0x28)) {
        uVar5 = uVar9;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FUpdateLightColorParameters *)(*pcVar2)();
          return pFVar7;
        }
      }
      uVar5 = *(uint *)(*(longlong *)(lVar1 + 0x20) + lVar8 * 4);
      uVar6 = 0;
      if ((int)uVar5 < *(int *)((longlong)this + 0x208)) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FUpdateLightColorParameters *)(*pcVar2)();
          return pFVar7;
        }
      }
      if ((FUpdateCommand *)((longlong)(int)uVar5 * 0x50 + *(longlong *)((longlong)this + 0x200)) !=
          param_1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("&Commands[Payloads->CommandSlots[PayloadOffset]] == &Command",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                           ,0xf4,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FUpdateLightColorParameters *)(*pcVar2)();
          return pFVar7;
        }
      }
      uVar5 = 0;
      if ((int)uVar4 < *(int *)(lVar1 + 0x18)) {
        uVar5 = uVar9;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FUpdateLightColorParameters *)(*pcVar2)();
          return pFVar7;
        }
      }
      return (FUpdateLightColorParameters *)(*(longlong *)(lVar1 + 0x10) + lVar8 * 0x18);
    }
  }
  return (FUpdateLightColorParameters *)0x0;
}

// GetPayloadPtr<FUpdateLightTransformParameters> @ 1453f0620

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

FUpdateLightTransformParameters * __thiscall
TSceneUpdateCommandQueue<FLightSceneInfo,enum_ELightDirtyFlags,enum_ELightUpdateId>::
GetPayloadPtr<FUpdateLightTransformParameters>(void *this,FUpdateCommand *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  FUpdateLightTransformParameters *pFVar7;
  longlong lVar8;
  uint uVar9;
  
  if (*(longlong *)((longlong)this + 8) != 0) {
    if (*(int *)(*(longlong *)((longlong)this + 8) + 8) != 0xa0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PayloadArrays[int32(PayloadType::Id)] == nullptr || PayloadArrays[int32(PayloadType::Id)]->PayloadByteSize == sizeof(PayloadType)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                         ,0x236,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FUpdateLightTransformParameters *)(*pcVar2)();
        return pFVar7;
      }
    }
    lVar1 = *(longlong *)((longlong)this + 8);
    if (lVar1 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Payloads != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                         ,0xec,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FUpdateLightTransformParameters *)(*pcVar2)();
        return pFVar7;
      }
    }
    uVar4 = FUpdateCommand::GetPayloadOffset<FUpdateLightTransformParameters>(param_1);
    lVar8 = (longlong)(int)uVar4;
    if (uVar4 != 0xffffffff) {
      uVar9 = ~uVar4 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar4 < *(int *)(lVar1 + 0x28)) {
        uVar5 = uVar9;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FUpdateLightTransformParameters *)(*pcVar2)();
          return pFVar7;
        }
      }
      if (*(int *)(*(longlong *)(lVar1 + 0x20) + lVar8 * 4) == -1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Payloads->CommandSlots[PayloadOffset] != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                           ,0xf3,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FUpdateLightTransformParameters *)(*pcVar2)();
          return pFVar7;
        }
      }
      uVar5 = 0;
      if ((int)uVar4 < *(int *)(lVar1 + 0x28)) {
        uVar5 = uVar9;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FUpdateLightTransformParameters *)(*pcVar2)();
          return pFVar7;
        }
      }
      uVar5 = *(uint *)(*(longlong *)(lVar1 + 0x20) + lVar8 * 4);
      uVar6 = 0;
      if ((int)uVar5 < *(int *)((longlong)this + 0x208)) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FUpdateLightTransformParameters *)(*pcVar2)();
          return pFVar7;
        }
      }
      if ((FUpdateCommand *)((longlong)(int)uVar5 * 0x50 + *(longlong *)((longlong)this + 0x200)) !=
          param_1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("&Commands[Payloads->CommandSlots[PayloadOffset]] == &Command",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                           ,0xf4,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FUpdateLightTransformParameters *)(*pcVar2)();
          return pFVar7;
        }
      }
      uVar5 = 0;
      if ((int)uVar4 < *(int *)(lVar1 + 0x18)) {
        uVar5 = uVar9;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FUpdateLightTransformParameters *)(*pcVar2)();
          return pFVar7;
        }
      }
      return (FUpdateLightTransformParameters *)(lVar8 * 0xa0 + *(longlong *)(lVar1 + 0x10));
    }
  }
  return (FUpdateLightTransformParameters *)0x0;
}

// TSceneUpdateCommandQueue<FLightSceneInfo,enum_ELightDirtyFlags,enum_ELightUpdateId> @ 1453f8b20

TSceneUpdateCommandQueue<FLightSceneInfo,ELightDirtyFlags,ELightUpdateId> * __thiscall
TSceneUpdateCommandQueue<FLightSceneInfo,enum_ELightDirtyFlags,enum_ELightUpdateId>::
TSceneUpdateCommandQueue<FLightSceneInfo,enum_ELightDirtyFlags,enum_ELightUpdateId>
          (void *this,
          TSceneUpdateCommandQueue<FLightSceneInfo,ELightDirtyFlags,ELightUpdateId> *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TSceneUpdateCommandQueue<FLightSceneInfo,ELightDirtyFlags,ELightUpdateId> *pTVar5;
  undefined1 *puVar6;
  longlong lVar7;
  
  lVar7 = 0x40;
  pTVar5 = param_1;
  do {
    *(FBasePayloadArray **)(((longlong)this - (longlong)param_1) + (longlong)pTVar5) =
         (pTVar5->PayloadArrays).Elements[0].Ptr;
    (pTVar5->PayloadArrays).Elements[0].Ptr = (FBasePayloadArray *)0x0;
    pTVar5 = (TSceneUpdateCommandQueue<FLightSceneInfo,ELightDirtyFlags,ELightUpdateId> *)
             ((pTVar5->PayloadArrays).Elements + 1);
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  *(undefined8 *)((longlong)this + 0x200) = 0;
  *(FScriptContainerElement **)((longlong)this + 0x200) = (param_1->Commands).AllocatorInstance.Data
  ;
  (param_1->Commands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)((longlong)this + 0x208) = (param_1->Commands).ArrayNum;
  *(int *)((longlong)this + 0x20c) = (param_1->Commands).ArrayMax;
  (param_1->Commands).ArrayNum = 0;
  (param_1->Commands).ArrayMax = 0;
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FLightSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FLightSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
  ::
  TRobinHoodHashTable<FLightSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FLightSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
            ((TRobinHoodHashTable<FLightSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FLightSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
              *)((longlong)this + 0x210));
  *(undefined4 *)((longlong)this + 0x288) = 0;
  if (param_1->RaceGuard != (atomic<int>)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Other.RaceGuard == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                       ,0x78,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSceneUpdateCommandQueue<FLightSceneInfo,ELightDirtyFlags,ELightUpdateId> *)
               (*pcVar2)();
      return pTVar5;
    }
  }
  puVar1 = &(param_1->CommandSlots).field_0x54;
  *(undefined4 *)&(param_1->CommandSlots).field_0x50 = 0;
  if (*(int *)&(param_1->CommandSlots).field_0x54 != 1) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
              (4,4,1,(ForElementType<unsigned_int> *)&(param_1->CommandSlots).field_0x40,0,
               (int *)puVar1);
  }
  iVar4 = *(int *)&(param_1->CommandSlots).field_0x50;
  if (iVar4 == *(int *)puVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                      (0x404,(ForElementType<unsigned_int> *)&(param_1->CommandSlots).field_0x40,
                       (int *)puVar1);
  }
  puVar1 = &(param_1->CommandSlots).field_0x58;
  *(int *)&(param_1->CommandSlots).field_0x50 = iVar4 + 1;
  puVar6 = &(param_1->CommandSlots).field_0x6c;
  *(undefined4 *)&(param_1->CommandSlots).field_0x68 = 0;
  if (*(int *)puVar6 != 1) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
              (4,4,1,(ForElementType<Experimental::FHashType> *)puVar1,0,(int *)puVar6);
  }
  iVar4 = *(int *)&(param_1->CommandSlots).field_0x68;
  if (iVar4 == *(int *)&(param_1->CommandSlots).field_0x6c) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
                      (0x404,(ForElementType<Experimental::FHashType> *)puVar1,(int *)puVar6);
  }
  *(int *)&(param_1->CommandSlots).field_0x68 = iVar4 + 1;
  puVar6 = *(undefined1 **)&(param_1->CommandSlots).field_0x60;
  if (puVar6 == (undefined1 *)0x0) {
    puVar6 = puVar1;
  }
  DefaultConstructItems<Experimental::FHashType,int>(puVar6 + (longlong)iVar4 * 4,1);
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FLightSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FLightSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
  ::FData::Empty((FData *)&param_1->CommandSlots);
  *(undefined8 *)&(param_1->CommandSlots).field_0x70 = 0;
  return this;
}

// TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId> @ 1453f8ce0

TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId> *
__thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
          (void *this,
          TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>
          *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>
  *pTVar5;
  undefined1 *puVar6;
  longlong lVar7;
  
  lVar7 = 0x40;
  pTVar5 = param_1;
  do {
    *(FBasePayloadArray **)(((longlong)this - (longlong)param_1) + (longlong)pTVar5) =
         (pTVar5->PayloadArrays).Elements[0].Ptr;
    (pTVar5->PayloadArrays).Elements[0].Ptr = (FBasePayloadArray *)0x0;
    pTVar5 = (TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>
              *)((pTVar5->PayloadArrays).Elements + 1);
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  *(undefined8 *)((longlong)this + 0x200) = 0;
  *(FScriptContainerElement **)((longlong)this + 0x200) = (param_1->Commands).AllocatorInstance.Data
  ;
  (param_1->Commands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)((longlong)this + 0x208) = (param_1->Commands).ArrayNum;
  *(int *)((longlong)this + 0x20c) = (param_1->Commands).ArrayMax;
  (param_1->Commands).ArrayNum = 0;
  (param_1->Commands).ArrayMax = 0;
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FPrimitiveSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
  ::
  TRobinHoodHashTable<FPrimitiveSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
            ((TRobinHoodHashTable<FPrimitiveSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
              *)((longlong)this + 0x210));
  *(undefined4 *)((longlong)this + 0x288) = 0;
  if (param_1->RaceGuard != (atomic<int>)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Other.RaceGuard == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                       ,0x78,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>
                *)(*pcVar2)();
      return pTVar5;
    }
  }
  puVar1 = &(param_1->CommandSlots).field_0x54;
  *(undefined4 *)&(param_1->CommandSlots).field_0x50 = 0;
  if (*(int *)&(param_1->CommandSlots).field_0x54 != 1) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
              (4,4,1,(ForElementType<unsigned_int> *)&(param_1->CommandSlots).field_0x40,0,
               (int *)puVar1);
  }
  iVar4 = *(int *)&(param_1->CommandSlots).field_0x50;
  if (iVar4 == *(int *)puVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                      (0x404,(ForElementType<unsigned_int> *)&(param_1->CommandSlots).field_0x40,
                       (int *)puVar1);
  }
  puVar1 = &(param_1->CommandSlots).field_0x58;
  *(int *)&(param_1->CommandSlots).field_0x50 = iVar4 + 1;
  puVar6 = &(param_1->CommandSlots).field_0x6c;
  *(undefined4 *)&(param_1->CommandSlots).field_0x68 = 0;
  if (*(int *)puVar6 != 1) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
              (4,4,1,(ForElementType<Experimental::FHashType> *)puVar1,0,(int *)puVar6);
  }
  iVar4 = *(int *)&(param_1->CommandSlots).field_0x68;
  if (iVar4 == *(int *)&(param_1->CommandSlots).field_0x6c) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
                      (0x404,(ForElementType<Experimental::FHashType> *)puVar1,(int *)puVar6);
  }
  *(int *)&(param_1->CommandSlots).field_0x68 = iVar4 + 1;
  puVar6 = *(undefined1 **)&(param_1->CommandSlots).field_0x60;
  if (puVar6 == (undefined1 *)0x0) {
    puVar6 = puVar1;
  }
  DefaultConstructItems<Experimental::FHashType,int>(puVar6 + (longlong)iVar4 * 4,1);
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FPrimitiveSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
  ::FData::Empty((FData *)&param_1->CommandSlots);
  *(undefined8 *)&(param_1->CommandSlots).field_0x70 = 0;
  return this;
}

// ~TSceneUpdateCommandQueue<FLightSceneInfo,enum_ELightDirtyFlags,enum_ELightUpdateId> @ 145403760

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall
TSceneUpdateCommandQueue<FLightSceneInfo,enum_ELightDirtyFlags,enum_ELightUpdateId>::
~TSceneUpdateCommandQueue<FLightSceneInfo,enum_ELightDirtyFlags,enum_ELightUpdateId>(void *this)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  if (*(int *)((longlong)this + 0x288) != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("RaceGuard == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                       ,0x80,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FLightSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FLightSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
  ::
  ~TRobinHoodHashTable<FLightSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FLightSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
            ((TRobinHoodHashTable<FLightSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FLightSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
              *)((longlong)this + 0x210));
  puVar5 = (undefined8 *)((longlong)this + 0x200);
  DestructItems<TSceneUpdateCommandQueue<FLightSceneInfo,enum_ELightDirtyFlags,enum_ELightUpdateId>::FUpdateCommand,int>
            ((FUpdateCommand *)*puVar5,*(int *)((longlong)this + 0x208));
  if ((void *)*puVar5 != (void *)0x0) {
    FMemory::Free((void *)*puVar5);
  }
  lVar4 = 0x40;
  do {
    puVar1 = (undefined8 *)puVar5[-1];
    puVar5 = puVar5 + -1;
    lVar4 = lVar4 + -1;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  } while (lVar4 != 0);
  return;
}

// ~TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId> @ 145403800

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::
~TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
          (void *this)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  if (*(int *)((longlong)this + 0x288) != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("RaceGuard == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                       ,0x80,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FPrimitiveSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
  ::
  ~TRobinHoodHashTable<FPrimitiveSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
            ((TRobinHoodHashTable<FPrimitiveSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
              *)((longlong)this + 0x210));
  puVar5 = (undefined8 *)((longlong)this + 0x200);
  DestructItems<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>::FUpdateCommand,int>
            ((FUpdateCommand *)*puVar5,*(int *)((longlong)this + 0x208));
  if ((void *)*puVar5 != (void *)0x0) {
    FMemory::Free((void *)*puVar5);
  }
  lVar4 = 0x40;
  do {
    puVar1 = (undefined8 *)puVar5[-1];
    puVar5 = puVar5 + -1;
    lVar4 = lVar4 + -1;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  } while (lVar4 != 0);
  return;
}

// EnqueueAdd @ 14542db40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall
TSceneUpdateCommandQueue<FLightSceneInfo,enum_ELightDirtyFlags,enum_ELightUpdateId>::EnqueueAdd
          (void *this,FLightSceneInfo *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TKeyValue<FLightSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType> *pTVar4;
  uint uVar5;
  longlong lVar6;
  uint local_res8 [2];
  FLightSceneInfo *local_res10;
  
  local_res10 = param_1;
  if (*(int *)((longlong)this + 0x288) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RaceGuard == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                       ,0xae,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FLightSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FLightSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
  ::FindIdByHash((TRobinHoodHashTable<FLightSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FLightSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
                  *)((longlong)this + 0x210),(FHashType)(uint)local_res8,
                 (FLightSceneInfo **)(ulonglong)((uVar5 >> 0x10 ^ uVar5) & 0x7fffffff));
  if (local_res8[0] != 0xffffffff) {
    pTVar4 = Experimental::RobinHoodHashTable_Private::
             TRobinHoodHashTable<FLightSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FLightSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
             ::FData::Get((FData *)((longlong)this + 0x210),local_res8[0]);
    if (pTVar4 != (TKeyValue<FLightSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType>
                   *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CommandSlots.Find(SceneInfo) == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                         ,0xb2,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  uVar3 = GetOrAddCommandSlot(this,param_1);
  uVar5 = 0;
  if ((int)uVar3 < *(int *)((longlong)this + 0x208)) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  lVar6 = (longlong)(int)uVar3 * 0x50 + *(longlong *)((longlong)this + 0x200);
  if (*(char *)(lVar6 + 0x19) != '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Command.bAdded",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                       ,0xb7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)(lVar6 + 0x18) != '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Command.bDeleted",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                       ,0xb8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined1 *)(lVar6 + 0x19) = 1;
  return;
}

// EnqueueAdd @ 14542dd00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::EnqueueAdd(void *this,FPrimitiveSceneInfo *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TKeyValue<FPrimitiveSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType> *pTVar4;
  uint uVar5;
  longlong lVar6;
  uint local_res8 [2];
  FPrimitiveSceneInfo *local_res10;
  
  local_res10 = param_1;
  if (*(int *)((longlong)this + 0x288) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RaceGuard == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                       ,0xae,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FPrimitiveSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
  ::FindIdByHash((TRobinHoodHashTable<FPrimitiveSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
                  *)((longlong)this + 0x210),(FHashType)(uint)local_res8,
                 (FPrimitiveSceneInfo **)(ulonglong)((uVar5 >> 0x10 ^ uVar5) & 0x7fffffff));
  if (local_res8[0] != 0xffffffff) {
    pTVar4 = Experimental::RobinHoodHashTable_Private::
             TRobinHoodHashTable<FPrimitiveSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
             ::FData::Get((FData *)((longlong)this + 0x210),local_res8[0]);
    if (pTVar4 != (TKeyValue<FPrimitiveSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType>
                   *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CommandSlots.Find(SceneInfo) == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                         ,0xb2,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  uVar3 = GetOrAddCommandSlot(this,param_1);
  uVar5 = 0;
  if ((int)uVar3 < *(int *)((longlong)this + 0x208)) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  lVar6 = (longlong)(int)uVar3 * 0x50 + *(longlong *)((longlong)this + 0x200);
  if (*(char *)(lVar6 + 0x19) != '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Command.bAdded",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                       ,0xb7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(char *)(lVar6 + 0x18) != '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Command.bDeleted",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                       ,0xb8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined1 *)(lVar6 + 0x19) = 1;
  return;
}

// GetOrAddCommandSlot @ 14543def0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

int __thiscall
TSceneUpdateCommandQueue<FLightSceneInfo,enum_ELightDirtyFlags,enum_ELightUpdateId>::
GetOrAddCommandSlot(void *this,FLightSceneInfo *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  FLightSceneInfo *pFVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  FLightSceneInfo *local_res10;
  bool local_res18 [8];
  int local_res20 [2];
  
  uVar8 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  local_res10 = param_1;
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FLightSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FLightSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
  ::
  FindOrUpdateIdByHashInternal<0,FLightSceneInfo_*_const_&,Experimental::RobinHoodHashTable_Private::FUnitType>
            ((TRobinHoodHashTable<FLightSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FLightSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
              *)((longlong)this + 0x210),(FHashType)(uint)local_res20,
             (FLightSceneInfo **)(ulonglong)((uVar8 >> 0x10 ^ uVar8) & 0x7fffffff),
             (FUnitType *)&local_res10,local_res18);
  if ((local_res20[0] != *(int *)((longlong)this + 0x208)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CommandSlot == Commands.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                         ,0x21e,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  pFVar4 = local_res10;
  iVar6 = *(int *)((longlong)this + 0x208);
  iVar1 = local_res10->Id;
  if (iVar6 == *(int *)((longlong)this + 0x20c)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,(ForAnyElementType *)((longlong)this + 0x200),
                       (int *)((longlong)this + 0x20c));
  }
  lVar7 = (longlong)iVar6;
  *(int *)((longlong)this + 0x208) = iVar6 + 1;
  lVar2 = *(longlong *)((longlong)this + 0x200);
  *(FLightSceneInfo **)(lVar2 + lVar7 * 0x50) = pFVar4;
  *(int *)(lVar2 + 0x10 + lVar7 * 0x50) = iVar1;
  *(undefined8 *)(lVar2 + 8 + lVar7 * 0x50) = 0;
  *(undefined4 *)(lVar2 + 0x14 + lVar7 * 0x50) = 0;
  *(undefined2 *)(lVar2 + 0x18 + lVar7 * 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x40 + lVar7 * 0x50) = 0;
  *(undefined4 *)(lVar2 + 0x48 + lVar7 * 0x50) = 0;
  *(undefined4 *)(lVar2 + 0x4c + lVar7 * 0x50) = 8;
  if (((local_res20[0] < 0) || (*(int *)((longlong)this + 0x208) <= local_res20[0])) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Commands.IsValidIndex(CommandSlot)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                         ,0x221,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  return local_res20[0];
}

// GetOrAddCommandSlot @ 14543e060

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::GetOrAddCommandSlot(void *this,FPrimitiveSceneInfo *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  FPrimitiveSceneInfo *pFVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  FPrimitiveSceneInfo *local_res10;
  bool local_res18 [8];
  int local_res20 [2];
  
  uVar8 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  local_res10 = param_1;
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FPrimitiveSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
  ::
  FindOrUpdateIdByHashInternal<0,FPrimitiveSceneInfo_*_const_&,Experimental::RobinHoodHashTable_Private::FUnitType>
            ((TRobinHoodHashTable<FPrimitiveSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
              *)((longlong)this + 0x210),(FHashType)(uint)local_res20,
             (FPrimitiveSceneInfo **)(ulonglong)((uVar8 >> 0x10 ^ uVar8) & 0x7fffffff),
             (FUnitType *)&local_res10,local_res18);
  if ((local_res20[0] != *(int *)((longlong)this + 0x208)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CommandSlot == Commands.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                         ,0x21e,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  pFVar4 = local_res10;
  iVar6 = *(int *)((longlong)this + 0x208);
  iVar1 = (local_res10->PersistentIndex).Index;
  if (iVar6 == *(int *)((longlong)this + 0x20c)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,(ForAnyElementType *)((longlong)this + 0x200),
                       (int *)((longlong)this + 0x20c));
  }
  lVar7 = (longlong)iVar6;
  *(int *)((longlong)this + 0x208) = iVar6 + 1;
  lVar2 = *(longlong *)((longlong)this + 0x200);
  *(FPrimitiveSceneInfo **)(lVar2 + lVar7 * 0x50) = pFVar4;
  *(int *)(lVar2 + 0x10 + lVar7 * 0x50) = iVar1;
  *(undefined8 *)(lVar2 + 8 + lVar7 * 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x40 + lVar7 * 0x50) = 0;
  *(undefined4 *)(lVar2 + 0x14 + lVar7 * 0x50) = 0;
  *(undefined2 *)(lVar2 + 0x18 + lVar7 * 0x50) = 0;
  *(undefined4 *)(lVar2 + 0x48 + lVar7 * 0x50) = 0;
  *(undefined4 *)(lVar2 + 0x4c + lVar7 * 0x50) = 8;
  if (((local_res20[0] < 0) || (*(int *)((longlong)this + 0x208) <= local_res20[0])) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Commands.IsValidIndex(CommandSlot)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                         ,0x221,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  return local_res20[0];
}

