// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayDebugger
// Functions: 5

// ~FGameplayDebuggerCompositeSceneProxy @ 146d412d0

void __thiscall
FGameplayDebuggerCompositeSceneProxy::~FGameplayDebuggerCompositeSceneProxy
          (FGameplayDebuggerCompositeSceneProxy *this)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  this->_padding_ = (longlong)&___7FGameplayDebuggerCompositeSceneProxy__6B_;
  if (0 < (this->ChildProxies).ArrayNum) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->ChildProxies).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      puVar1 = *(undefined8 **)((this->ChildProxies).AllocatorInstance.Data + lVar7);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar6 < (this->ChildProxies).ArrayNum);
  }
  pFVar2 = (this->ChildProxies).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FDebugRenderSceneProxy::~FDebugRenderSceneProxy((FDebugRenderSceneProxy *)this);
  return;
}

// DrawStaticElements @ 146d4acb0

void __thiscall
FGameplayDebuggerCompositeSceneProxy::DrawStaticElements
          (FGameplayDebuggerCompositeSceneProxy *this,FStaticPrimitiveDrawInterface *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->ChildProxies).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->ChildProxies).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)((this->ChildProxies).AllocatorInstance.Data + lVar6);
      (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->ChildProxies).ArrayNum);
  }
  return;
}

// GetDynamicMeshElements @ 146d4c650

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGameplayDebuggerCompositeSceneProxy::GetDynamicMeshElements
          (FGameplayDebuggerCompositeSceneProxy *this,
          TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,FSceneViewFamily *param_2,
          uint param_3,FMeshElementCollector *param_4)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->ChildProxies).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->ChildProxies).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)((this->ChildProxies).AllocatorInstance.Data + lVar6);
      (**(code **)(*plVar1 + 0xa8))(plVar1,param_1,param_2,param_3,param_4);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->ChildProxies).ArrayNum);
  }
  return;
}

// GetMemoryFootprint @ 146d4cfe0

uint __thiscall
FGameplayDebuggerCompositeSceneProxy::GetMemoryFootprint(FGameplayDebuggerCompositeSceneProxy *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  iVar1 = (this->ChildProxies).ArrayMax;
  uVar4 = FDebugRenderSceneProxy::GetAllocatedSize((FDebugRenderSceneProxy *)this);
  uVar6 = (ulonglong)uVar4 + (longlong)iVar1 * 8;
  uVar4 = 0;
  if (0 < (this->ChildProxies).ArrayNum) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar4 < (this->ChildProxies).ArrayNum) {
        uVar5 = ~uVar4 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return uVar4;
      }
      uVar5 = (**(code **)(**(longlong **)((this->ChildProxies).AllocatorInstance.Data + lVar7) +
                          0x168))();
      uVar4 = uVar4 + 1;
      uVar6 = uVar6 + uVar5;
      lVar7 = lVar7 + 8;
    } while ((int)uVar4 < (this->ChildProxies).ArrayNum);
  }
  if ((uVar6 != (uVar6 & 0xffffffff)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  return (int)uVar6 + 0x3b0;
}

// GetViewRelevance @ 146d4e1c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPrimitiveViewRelevance * __thiscall
FGameplayDebuggerCompositeSceneProxy::GetViewRelevance
          (FGameplayDebuggerCompositeSceneProxy *this,
          FPrimitiveViewRelevance *__return_storage_ptr__,FSceneView *param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  code *pcVar3;
  ulonglong uVar4;
  bool bVar5;
  uint uVar6;
  FPrimitiveViewRelevance *pFVar7;
  ulonglong *puVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 local_28 [16];
  
  __return_storage_ptr__->_padding_ = 0;
  uVar10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  __return_storage_ptr__->bRenderInMainPass = 1;
  if (0 < (this->ChildProxies).ArrayNum) {
    lVar11 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar10 < (this->ChildProxies).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FPrimitiveViewRelevance *)(*pcVar3)();
        return pFVar7;
      }
      plVar2 = *(longlong **)((this->ChildProxies).AllocatorInstance.Data + lVar11);
      puVar8 = (ulonglong *)(**(code **)(*plVar2 + 0xd0))(plVar2,local_28,param_1);
      if (((FPrimitiveViewRelevance *)((longlong)puVar8 + 0xfU) < __return_storage_ptr__) ||
         (&__return_storage_ptr__->field_0xf < puVar8)) {
        uVar4 = puVar8[1];
        __return_storage_ptr__->_padding_ = *puVar8 | __return_storage_ptr__->_padding_;
        *(ulonglong *)&__return_storage_ptr__->field_0x8 =
             uVar4 | *(ulonglong *)&__return_storage_ptr__->field_0x8;
      }
      else {
        lVar9 = 0x10;
        pFVar7 = __return_storage_ptr__;
        do {
          *(byte *)&pFVar7->_padding_ =
               (byte)pFVar7->_padding_ |
               *(byte *)(((longlong)puVar8 - (longlong)__return_storage_ptr__) + (longlong)pFVar7);
          pFVar7 = (FPrimitiveViewRelevance *)((longlong)&pFVar7->_padding_ + 1);
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 8;
    } while ((int)uVar10 < (this->ChildProxies).ArrayNum);
  }
  return __return_storage_ptr__;
}

