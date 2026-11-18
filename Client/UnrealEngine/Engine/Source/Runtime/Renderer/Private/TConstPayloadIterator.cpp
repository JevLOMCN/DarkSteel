// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 19

// SkipDeleted @ 1449335e0

void __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::TConstPayloadIterator<FUpdateInstanceFromComputeCommand>::SkipDeleted(void *this)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  
  lVar3 = *(longlong *)this;
  while( true ) {
    if (lVar3 == 0) {
      return;
    }
    iVar1 = *(int *)((longlong)this + 0x10);
    if (*(int *)(lVar3 + 0x28) <= iVar1) {
      return;
    }
    plVar4 = *(longlong **)((longlong)this + 8);
    if ((iVar1 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar2 = *(uint *)(*(longlong *)(lVar3 + 0x20) + (longlong)iVar1 * 4);
    uVar7 = 0;
    if ((int)uVar2 < (int)plVar4[1]) {
      uVar7 = ~uVar2 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    if (*(char *)(*plVar4 + 0x18 + (longlong)(int)uVar2 * 0x50) == '\0') {
      return;
    }
    *(int *)((longlong)this + 0x10) = *(int *)((longlong)this + 0x10) + 1;
    lVar3 = *(longlong *)this;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// operator* @ 1454081c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FItem * __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::
TConstPayloadIterator<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>::TPayloadBase<7,0>_>
::operator*(void *this,FItem *__return_storage_ptr__)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  FItem *pFVar7;
  uint uVar8;
  undefined8 *puVar9;
  
  puVar1 = (uint *)((longlong)this + 0x10);
  if ((*(longlong *)this == 0) || (*(int *)(*(longlong *)this + 0x28) <= (int)*puVar1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Payloads && Index < Payloads->CommandSlots.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                       ,0x175,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FItem *)(*pcVar5)();
      return pFVar7;
    }
  }
  uVar2 = *puVar1;
  lVar3 = *(longlong *)this;
  plVar4 = *(longlong **)((longlong)this + 8);
  uVar8 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x28)) {
    uVar8 = ~uVar2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FItem *)(*pcVar5)();
      return pFVar7;
    }
  }
  uVar2 = *(uint *)(*(longlong *)(lVar3 + 0x20) + (longlong)(int)uVar2 * 4);
  uVar8 = 0;
  if ((int)uVar2 < (int)plVar4[1]) {
    uVar8 = ~uVar2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FItem *)(*pcVar5)();
      return pFVar7;
    }
  }
  puVar9 = (undefined8 *)(*plVar4 + (longlong)(int)uVar2 * 0x50);
  if (*(char *)(puVar9 + 3) != '\0') {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Command.bDeleted",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                       ,0x177,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FItem *)(*pcVar5)();
      return pFVar7;
    }
  }
  uVar2 = *puVar1;
  lVar3 = *(longlong *)this;
  uVar8 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x18)) {
    uVar8 = ~uVar2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FItem *)(*pcVar5)();
      return pFVar7;
    }
  }
  __return_storage_ptr__->Payload =
       (TPayloadBase<7,0> *)((longlong)(int)uVar2 + *(longlong *)(lVar3 + 0x10));
  __return_storage_ptr__->SceneInfo = (FPrimitiveSceneInfo *)*puVar9;
  return __return_storage_ptr__;
}

// operator* @ 145408390

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FItem * __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::TConstPayloadIterator<TSingleValuePrimitiveUpdatePayload<float,4,0>_>::operator*
          (void *this,FItem *__return_storage_ptr__)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  FItem *pFVar7;
  uint uVar8;
  undefined8 *puVar9;
  
  puVar1 = (uint *)((longlong)this + 0x10);
  if ((*(longlong *)this == 0) || (*(int *)(*(longlong *)this + 0x28) <= (int)*puVar1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Payloads && Index < Payloads->CommandSlots.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                       ,0x175,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FItem *)(*pcVar5)();
      return pFVar7;
    }
  }
  uVar2 = *puVar1;
  lVar3 = *(longlong *)this;
  plVar4 = *(longlong **)((longlong)this + 8);
  uVar8 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x28)) {
    uVar8 = ~uVar2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FItem *)(*pcVar5)();
      return pFVar7;
    }
  }
  uVar2 = *(uint *)(*(longlong *)(lVar3 + 0x20) + (longlong)(int)uVar2 * 4);
  uVar8 = 0;
  if ((int)uVar2 < (int)plVar4[1]) {
    uVar8 = ~uVar2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FItem *)(*pcVar5)();
      return pFVar7;
    }
  }
  puVar9 = (undefined8 *)(*plVar4 + (longlong)(int)uVar2 * 0x50);
  if (*(char *)(puVar9 + 3) != '\0') {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Command.bDeleted",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                       ,0x177,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FItem *)(*pcVar5)();
      return pFVar7;
    }
  }
  uVar2 = *puVar1;
  lVar3 = *(longlong *)this;
  uVar8 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x18)) {
    uVar8 = ~uVar2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FItem *)(*pcVar5)();
      return pFVar7;
    }
  }
  lVar3 = *(longlong *)(lVar3 + 0x10);
  __return_storage_ptr__->SceneInfo = (FPrimitiveSceneInfo *)*puVar9;
  __return_storage_ptr__->Payload =
       (TSingleValuePrimitiveUpdatePayload<float,4,0> *)(lVar3 + (longlong)(int)uVar2 * 4);
  return __return_storage_ptr__;
}

// operator* @ 145408560

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FItem * __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::TConstPayloadIterator<TSingleValuePrimitiveUpdatePayload<UE::Math::TMatrix<double>,8,16>_>::
operator*(void *this,FItem *__return_storage_ptr__)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  FItem *pFVar7;
  uint uVar8;
  undefined8 *puVar9;
  
  puVar1 = (uint *)((longlong)this + 0x10);
  if ((*(longlong *)this == 0) || (*(int *)(*(longlong *)this + 0x28) <= (int)*puVar1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Payloads && Index < Payloads->CommandSlots.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                       ,0x175,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FItem *)(*pcVar5)();
      return pFVar7;
    }
  }
  uVar2 = *puVar1;
  lVar3 = *(longlong *)this;
  plVar4 = *(longlong **)((longlong)this + 8);
  uVar8 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x28)) {
    uVar8 = ~uVar2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FItem *)(*pcVar5)();
      return pFVar7;
    }
  }
  uVar2 = *(uint *)(*(longlong *)(lVar3 + 0x20) + (longlong)(int)uVar2 * 4);
  uVar8 = 0;
  if ((int)uVar2 < (int)plVar4[1]) {
    uVar8 = ~uVar2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FItem *)(*pcVar5)();
      return pFVar7;
    }
  }
  puVar9 = (undefined8 *)(*plVar4 + (longlong)(int)uVar2 * 0x50);
  if (*(char *)(puVar9 + 3) != '\0') {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Command.bDeleted",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                       ,0x177,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FItem *)(*pcVar5)();
      return pFVar7;
    }
  }
  uVar2 = *puVar1;
  lVar3 = *(longlong *)this;
  uVar8 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x18)) {
    uVar8 = ~uVar2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FItem *)(*pcVar5)();
      return pFVar7;
    }
  }
  __return_storage_ptr__->Payload =
       (TSingleValuePrimitiveUpdatePayload<UE::Math::TMatrix<double>,8,16> *)
       ((longlong)(int)uVar2 * 0x80 + *(longlong *)(lVar3 + 0x10));
  __return_storage_ptr__->SceneInfo = (FPrimitiveSceneInfo *)*puVar9;
  return __return_storage_ptr__;
}

// operator* @ 145408730

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FItem * __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::TConstPayloadIterator<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector<float>,6,8>_>::
operator*(void *this,FItem *__return_storage_ptr__)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  FItem *pFVar7;
  uint uVar8;
  undefined8 *puVar9;
  
  puVar1 = (uint *)((longlong)this + 0x10);
  if ((*(longlong *)this == 0) || (*(int *)(*(longlong *)this + 0x28) <= (int)*puVar1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Payloads && Index < Payloads->CommandSlots.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                       ,0x175,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FItem *)(*pcVar5)();
      return pFVar7;
    }
  }
  uVar2 = *puVar1;
  lVar3 = *(longlong *)this;
  plVar4 = *(longlong **)((longlong)this + 8);
  uVar8 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x28)) {
    uVar8 = ~uVar2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FItem *)(*pcVar5)();
      return pFVar7;
    }
  }
  uVar2 = *(uint *)(*(longlong *)(lVar3 + 0x20) + (longlong)(int)uVar2 * 4);
  uVar8 = 0;
  if ((int)uVar2 < (int)plVar4[1]) {
    uVar8 = ~uVar2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FItem *)(*pcVar5)();
      return pFVar7;
    }
  }
  puVar9 = (undefined8 *)(*plVar4 + (longlong)(int)uVar2 * 0x50);
  if (*(char *)(puVar9 + 3) != '\0') {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Command.bDeleted",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                       ,0x177,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FItem *)(*pcVar5)();
      return pFVar7;
    }
  }
  uVar2 = *puVar1;
  lVar3 = *(longlong *)this;
  uVar8 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x18)) {
    uVar8 = ~uVar2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FItem *)(*pcVar5)();
      return pFVar7;
    }
  }
  lVar3 = *(longlong *)(lVar3 + 0x10);
  __return_storage_ptr__->SceneInfo = (FPrimitiveSceneInfo *)*puVar9;
  __return_storage_ptr__->Payload =
       (TSingleValuePrimitiveUpdatePayload<UE::Math::TVector<float>,6,8> *)
       (lVar3 + (longlong)(int)uVar2 * 0xc);
  return __return_storage_ptr__;
}

// operator* @ 145408900

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FItem * __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::TConstPayloadIterator<TSingleValuePrimitiveUpdatePayload<FCustomPrimitiveData,3,16>_>::operator*
          (void *this,FItem *__return_storage_ptr__)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  FItem *pFVar7;
  uint uVar8;
  undefined8 *puVar9;
  
  puVar1 = (uint *)((longlong)this + 0x10);
  if ((*(longlong *)this == 0) || (*(int *)(*(longlong *)this + 0x28) <= (int)*puVar1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Payloads && Index < Payloads->CommandSlots.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                       ,0x175,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FItem *)(*pcVar5)();
      return pFVar7;
    }
  }
  uVar2 = *puVar1;
  lVar3 = *(longlong *)this;
  plVar4 = *(longlong **)((longlong)this + 8);
  uVar8 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x28)) {
    uVar8 = ~uVar2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FItem *)(*pcVar5)();
      return pFVar7;
    }
  }
  uVar2 = *(uint *)(*(longlong *)(lVar3 + 0x20) + (longlong)(int)uVar2 * 4);
  uVar8 = 0;
  if ((int)uVar2 < (int)plVar4[1]) {
    uVar8 = ~uVar2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FItem *)(*pcVar5)();
      return pFVar7;
    }
  }
  puVar9 = (undefined8 *)(*plVar4 + (longlong)(int)uVar2 * 0x50);
  if (*(char *)(puVar9 + 3) != '\0') {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Command.bDeleted",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                       ,0x177,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FItem *)(*pcVar5)();
      return pFVar7;
    }
  }
  uVar2 = *puVar1;
  lVar3 = *(longlong *)this;
  uVar8 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x18)) {
    uVar8 = ~uVar2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FItem *)(*pcVar5)();
      return pFVar7;
    }
  }
  __return_storage_ptr__->Payload =
       (TSingleValuePrimitiveUpdatePayload<FCustomPrimitiveData,3,16> *)
       ((longlong)(int)uVar2 * 0x10 + *(longlong *)(lVar3 + 0x10));
  __return_storage_ptr__->SceneInfo = (FPrimitiveSceneInfo *)*puVar9;
  return __return_storage_ptr__;
}

// operator* @ 145408ad0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FItem * __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::TConstPayloadIterator<TSingleValuePrimitiveUpdatePayload<FPrimitiveComponentId,2,0>_>::operator*
          (void *this,FItem *__return_storage_ptr__)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  FItem *pFVar7;
  uint uVar8;
  undefined8 *puVar9;
  
  puVar1 = (uint *)((longlong)this + 0x10);
  if ((*(longlong *)this == 0) || (*(int *)(*(longlong *)this + 0x28) <= (int)*puVar1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Payloads && Index < Payloads->CommandSlots.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                       ,0x175,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FItem *)(*pcVar5)();
      return pFVar7;
    }
  }
  uVar2 = *puVar1;
  lVar3 = *(longlong *)this;
  plVar4 = *(longlong **)((longlong)this + 8);
  uVar8 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x28)) {
    uVar8 = ~uVar2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FItem *)(*pcVar5)();
      return pFVar7;
    }
  }
  uVar2 = *(uint *)(*(longlong *)(lVar3 + 0x20) + (longlong)(int)uVar2 * 4);
  uVar8 = 0;
  if ((int)uVar2 < (int)plVar4[1]) {
    uVar8 = ~uVar2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FItem *)(*pcVar5)();
      return pFVar7;
    }
  }
  puVar9 = (undefined8 *)(*plVar4 + (longlong)(int)uVar2 * 0x50);
  if (*(char *)(puVar9 + 3) != '\0') {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Command.bDeleted",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                       ,0x177,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FItem *)(*pcVar5)();
      return pFVar7;
    }
  }
  uVar2 = *puVar1;
  lVar3 = *(longlong *)this;
  uVar8 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x18)) {
    uVar8 = ~uVar2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FItem *)(*pcVar5)();
      return pFVar7;
    }
  }
  lVar3 = *(longlong *)(lVar3 + 0x10);
  __return_storage_ptr__->SceneInfo = (FPrimitiveSceneInfo *)*puVar9;
  __return_storage_ptr__->Payload =
       (TSingleValuePrimitiveUpdatePayload<FPrimitiveComponentId,2,0> *)
       (lVar3 + (longlong)(int)uVar2 * 4);
  return __return_storage_ptr__;
}

// operator* @ 145408ca0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FItem * __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::TConstPayloadIterator<FUpdateInstanceCommand>::operator*(void *this,FItem *__return_storage_ptr__)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  FItem *pFVar7;
  uint uVar8;
  undefined8 *puVar9;
  
  puVar1 = (uint *)((longlong)this + 0x10);
  if ((*(longlong *)this == 0) || (*(int *)(*(longlong *)this + 0x28) <= (int)*puVar1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Payloads && Index < Payloads->CommandSlots.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                       ,0x175,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FItem *)(*pcVar5)();
      return pFVar7;
    }
  }
  uVar2 = *puVar1;
  lVar3 = *(longlong *)this;
  plVar4 = *(longlong **)((longlong)this + 8);
  uVar8 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x28)) {
    uVar8 = ~uVar2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FItem *)(*pcVar5)();
      return pFVar7;
    }
  }
  uVar2 = *(uint *)(*(longlong *)(lVar3 + 0x20) + (longlong)(int)uVar2 * 4);
  uVar8 = 0;
  if ((int)uVar2 < (int)plVar4[1]) {
    uVar8 = ~uVar2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FItem *)(*pcVar5)();
      return pFVar7;
    }
  }
  puVar9 = (undefined8 *)(*plVar4 + (longlong)(int)uVar2 * 0x50);
  if (*(char *)(puVar9 + 3) != '\0') {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Command.bDeleted",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                       ,0x177,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FItem *)(*pcVar5)();
      return pFVar7;
    }
  }
  uVar2 = *puVar1;
  lVar3 = *(longlong *)this;
  uVar8 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x18)) {
    uVar8 = ~uVar2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FItem *)(*pcVar5)();
      return pFVar7;
    }
  }
  lVar3 = *(longlong *)(lVar3 + 0x10);
  __return_storage_ptr__->SceneInfo = (FPrimitiveSceneInfo *)*puVar9;
  __return_storage_ptr__->Payload = (FUpdateInstanceCommand *)((longlong)(int)uVar2 * 0x78 + lVar3);
  return __return_storage_ptr__;
}

// operator* @ 145408e70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FItem * __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::TConstPayloadIterator<FUpdateTransformCommand>::operator*
          (void *this,FItem *__return_storage_ptr__)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  FItem *pFVar7;
  uint uVar8;
  undefined8 *puVar9;
  
  puVar1 = (uint *)((longlong)this + 0x10);
  if ((*(longlong *)this == 0) || (*(int *)(*(longlong *)this + 0x28) <= (int)*puVar1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Payloads && Index < Payloads->CommandSlots.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                       ,0x175,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FItem *)(*pcVar5)();
      return pFVar7;
    }
  }
  uVar2 = *puVar1;
  lVar3 = *(longlong *)this;
  plVar4 = *(longlong **)((longlong)this + 8);
  uVar8 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x28)) {
    uVar8 = ~uVar2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FItem *)(*pcVar5)();
      return pFVar7;
    }
  }
  uVar2 = *(uint *)(*(longlong *)(lVar3 + 0x20) + (longlong)(int)uVar2 * 4);
  uVar8 = 0;
  if ((int)uVar2 < (int)plVar4[1]) {
    uVar8 = ~uVar2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FItem *)(*pcVar5)();
      return pFVar7;
    }
  }
  puVar9 = (undefined8 *)(*plVar4 + (longlong)(int)uVar2 * 0x50);
  if (*(char *)(puVar9 + 3) != '\0') {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Command.bDeleted",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                       ,0x177,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FItem *)(*pcVar5)();
      return pFVar7;
    }
  }
  uVar2 = *puVar1;
  lVar3 = *(longlong *)this;
  uVar8 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x18)) {
    uVar8 = ~uVar2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FItem *)(*pcVar5)();
      return pFVar7;
    }
  }
  lVar3 = *(longlong *)(lVar3 + 0x10);
  __return_storage_ptr__->SceneInfo = (FPrimitiveSceneInfo *)*puVar9;
  __return_storage_ptr__->Payload =
       (FUpdateTransformCommand *)((longlong)(int)uVar2 * 0x110 + lVar3);
  return __return_storage_ptr__;
}

// SkipDeleted @ 14544fbb0

void __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::
TConstPayloadIterator<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>::TPayloadBase<7,0>_>
::SkipDeleted(void *this)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  
  lVar3 = *(longlong *)this;
  while( true ) {
    if (lVar3 == 0) {
      return;
    }
    iVar1 = *(int *)((longlong)this + 0x10);
    if (*(int *)(lVar3 + 0x28) <= iVar1) {
      return;
    }
    plVar4 = *(longlong **)((longlong)this + 8);
    if ((iVar1 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar2 = *(uint *)(*(longlong *)(lVar3 + 0x20) + (longlong)iVar1 * 4);
    uVar7 = 0;
    if ((int)uVar2 < (int)plVar4[1]) {
      uVar7 = ~uVar2 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    if (*(char *)(*plVar4 + 0x18 + (longlong)(int)uVar2 * 0x50) == '\0') {
      return;
    }
    *(int *)((longlong)this + 0x10) = *(int *)((longlong)this + 0x10) + 1;
    lVar3 = *(longlong *)this;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// SkipDeleted @ 14544fcc0

void __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::TConstPayloadIterator<TSingleValuePrimitiveUpdatePayload<float,4,0>_>::SkipDeleted(void *this)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  
  lVar3 = *(longlong *)this;
  while( true ) {
    if (lVar3 == 0) {
      return;
    }
    iVar1 = *(int *)((longlong)this + 0x10);
    if (*(int *)(lVar3 + 0x28) <= iVar1) {
      return;
    }
    plVar4 = *(longlong **)((longlong)this + 8);
    if ((iVar1 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar2 = *(uint *)(*(longlong *)(lVar3 + 0x20) + (longlong)iVar1 * 4);
    uVar7 = 0;
    if ((int)uVar2 < (int)plVar4[1]) {
      uVar7 = ~uVar2 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    if (*(char *)(*plVar4 + 0x18 + (longlong)(int)uVar2 * 0x50) == '\0') {
      return;
    }
    *(int *)((longlong)this + 0x10) = *(int *)((longlong)this + 0x10) + 1;
    lVar3 = *(longlong *)this;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// SkipDeleted @ 14544fdd0

void __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::TConstPayloadIterator<TSingleValuePrimitiveUpdatePayload<UE::Math::TMatrix<double>,8,16>_>::
SkipDeleted(void *this)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  
  lVar3 = *(longlong *)this;
  while( true ) {
    if (lVar3 == 0) {
      return;
    }
    iVar1 = *(int *)((longlong)this + 0x10);
    if (*(int *)(lVar3 + 0x28) <= iVar1) {
      return;
    }
    plVar4 = *(longlong **)((longlong)this + 8);
    if ((iVar1 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar2 = *(uint *)(*(longlong *)(lVar3 + 0x20) + (longlong)iVar1 * 4);
    uVar7 = 0;
    if ((int)uVar2 < (int)plVar4[1]) {
      uVar7 = ~uVar2 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    if (*(char *)(*plVar4 + 0x18 + (longlong)(int)uVar2 * 0x50) == '\0') {
      return;
    }
    *(int *)((longlong)this + 0x10) = *(int *)((longlong)this + 0x10) + 1;
    lVar3 = *(longlong *)this;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// SkipDeleted @ 14544fee0

void __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::TConstPayloadIterator<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector2<float>,5,24>_>::
SkipDeleted(void *this)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  
  lVar3 = *(longlong *)this;
  while( true ) {
    if (lVar3 == 0) {
      return;
    }
    iVar1 = *(int *)((longlong)this + 0x10);
    if (*(int *)(lVar3 + 0x28) <= iVar1) {
      return;
    }
    plVar4 = *(longlong **)((longlong)this + 8);
    if ((iVar1 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar2 = *(uint *)(*(longlong *)(lVar3 + 0x20) + (longlong)iVar1 * 4);
    uVar7 = 0;
    if ((int)uVar2 < (int)plVar4[1]) {
      uVar7 = ~uVar2 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    if (*(char *)(*plVar4 + 0x18 + (longlong)(int)uVar2 * 0x50) == '\0') {
      return;
    }
    *(int *)((longlong)this + 0x10) = *(int *)((longlong)this + 0x10) + 1;
    lVar3 = *(longlong *)this;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// SkipDeleted @ 14544fff0

void __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::TConstPayloadIterator<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector<float>,6,8>_>::
SkipDeleted(void *this)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  
  lVar3 = *(longlong *)this;
  while( true ) {
    if (lVar3 == 0) {
      return;
    }
    iVar1 = *(int *)((longlong)this + 0x10);
    if (*(int *)(lVar3 + 0x28) <= iVar1) {
      return;
    }
    plVar4 = *(longlong **)((longlong)this + 8);
    if ((iVar1 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar2 = *(uint *)(*(longlong *)(lVar3 + 0x20) + (longlong)iVar1 * 4);
    uVar7 = 0;
    if ((int)uVar2 < (int)plVar4[1]) {
      uVar7 = ~uVar2 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    if (*(char *)(*plVar4 + 0x18 + (longlong)(int)uVar2 * 0x50) == '\0') {
      return;
    }
    *(int *)((longlong)this + 0x10) = *(int *)((longlong)this + 0x10) + 1;
    lVar3 = *(longlong *)this;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// SkipDeleted @ 145450100

void __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::TConstPayloadIterator<TSingleValuePrimitiveUpdatePayload<FCustomPrimitiveData,3,16>_>::SkipDeleted
          (void *this)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  
  lVar3 = *(longlong *)this;
  while( true ) {
    if (lVar3 == 0) {
      return;
    }
    iVar1 = *(int *)((longlong)this + 0x10);
    if (*(int *)(lVar3 + 0x28) <= iVar1) {
      return;
    }
    plVar4 = *(longlong **)((longlong)this + 8);
    if ((iVar1 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar2 = *(uint *)(*(longlong *)(lVar3 + 0x20) + (longlong)iVar1 * 4);
    uVar7 = 0;
    if ((int)uVar2 < (int)plVar4[1]) {
      uVar7 = ~uVar2 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    if (*(char *)(*plVar4 + 0x18 + (longlong)(int)uVar2 * 0x50) == '\0') {
      return;
    }
    *(int *)((longlong)this + 0x10) = *(int *)((longlong)this + 0x10) + 1;
    lVar3 = *(longlong *)this;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// SkipDeleted @ 145450210

void __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::TConstPayloadIterator<TSingleValuePrimitiveUpdatePayload<FPrimitiveComponentId,2,0>_>::SkipDeleted
          (void *this)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  
  lVar3 = *(longlong *)this;
  while( true ) {
    if (lVar3 == 0) {
      return;
    }
    iVar1 = *(int *)((longlong)this + 0x10);
    if (*(int *)(lVar3 + 0x28) <= iVar1) {
      return;
    }
    plVar4 = *(longlong **)((longlong)this + 8);
    if ((iVar1 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar2 = *(uint *)(*(longlong *)(lVar3 + 0x20) + (longlong)iVar1 * 4);
    uVar7 = 0;
    if ((int)uVar2 < (int)plVar4[1]) {
      uVar7 = ~uVar2 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    if (*(char *)(*plVar4 + 0x18 + (longlong)(int)uVar2 * 0x50) == '\0') {
      return;
    }
    *(int *)((longlong)this + 0x10) = *(int *)((longlong)this + 0x10) + 1;
    lVar3 = *(longlong *)this;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// SkipDeleted @ 145450320

void __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::TConstPayloadIterator<FUpdateInstanceCommand>::SkipDeleted(void *this)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  
  lVar3 = *(longlong *)this;
  while( true ) {
    if (lVar3 == 0) {
      return;
    }
    iVar1 = *(int *)((longlong)this + 0x10);
    if (*(int *)(lVar3 + 0x28) <= iVar1) {
      return;
    }
    plVar4 = *(longlong **)((longlong)this + 8);
    if ((iVar1 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar2 = *(uint *)(*(longlong *)(lVar3 + 0x20) + (longlong)iVar1 * 4);
    uVar7 = 0;
    if ((int)uVar2 < (int)plVar4[1]) {
      uVar7 = ~uVar2 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    if (*(char *)(*plVar4 + 0x18 + (longlong)(int)uVar2 * 0x50) == '\0') {
      return;
    }
    *(int *)((longlong)this + 0x10) = *(int *)((longlong)this + 0x10) + 1;
    lVar3 = *(longlong *)this;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// SkipDeleted @ 145450430

void __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::TConstPayloadIterator<FUpdateTransformCommand>::SkipDeleted(void *this)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  
  lVar3 = *(longlong *)this;
  while( true ) {
    if (lVar3 == 0) {
      return;
    }
    iVar1 = *(int *)((longlong)this + 0x10);
    if (*(int *)(lVar3 + 0x28) <= iVar1) {
      return;
    }
    plVar4 = *(longlong **)((longlong)this + 8);
    if ((iVar1 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar2 = *(uint *)(*(longlong *)(lVar3 + 0x20) + (longlong)iVar1 * 4);
    uVar7 = 0;
    if ((int)uVar2 < (int)plVar4[1]) {
      uVar7 = ~uVar2 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    if (*(char *)(*plVar4 + 0x18 + (longlong)(int)uVar2 * 0x50) == '\0') {
      return;
    }
    *(int *)((longlong)this + 0x10) = *(int *)((longlong)this + 0x10) + 1;
    lVar3 = *(longlong *)this;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// SkipDeleted @ 145649d30

void __thiscall
TSceneUpdateCommandQueue<FLightSceneInfo,enum_ELightDirtyFlags,enum_ELightUpdateId>::
TConstPayloadIterator<FUpdateLightTransformParameters>::SkipDeleted(void *this)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  
  lVar3 = *(longlong *)this;
  while( true ) {
    if (lVar3 == 0) {
      return;
    }
    iVar1 = *(int *)((longlong)this + 0x10);
    if (*(int *)(lVar3 + 0x28) <= iVar1) {
      return;
    }
    plVar4 = *(longlong **)((longlong)this + 8);
    if ((iVar1 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar2 = *(uint *)(*(longlong *)(lVar3 + 0x20) + (longlong)iVar1 * 4);
    uVar7 = 0;
    if ((int)uVar2 < (int)plVar4[1]) {
      uVar7 = ~uVar2 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    if (*(char *)(*plVar4 + 0x18 + (longlong)(int)uVar2 * 0x50) == '\0') {
      return;
    }
    *(int *)((longlong)this + 0x10) = *(int *)((longlong)this + 0x10) + 1;
    lVar3 = *(longlong *)this;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

