// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FSkinnedMeshComponentRecreateRenderStateContext @ 148692fb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSkinnedMeshComponentRecreateRenderStateContext * __thiscall
FSkinnedMeshComponentRecreateRenderStateContext::FSkinnedMeshComponentRecreateRenderStateContext
          (FSkinnedMeshComponentRecreateRenderStateContext *this,USkinnedAsset *param_1,bool param_2
          )

{
  UObject *pUVar1;
  FWeakObjectPtr *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  EInternalObjectFlags EVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  UClass *pUVar10;
  FSkinnedMeshComponentRecreateRenderStateContext *pFVar11;
  USkinnedAsset *pUVar12;
  FUObjectItem *pFVar13;
  longlong lVar14;
  UObject *local_res8;
  FWeakObjectPtr local_58;
  FString local_50;
  TObjectIterator<USkinnedMeshComponent> local_40;
  
  this->bRefreshBounds = param_2;
  (this->MeshComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshComponents).ArrayNum = 0;
  (this->MeshComponents).ArrayMax = 0;
  local_40.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  bVar5 = false;
  local_40.ObjectArray.ArrayNum = 0;
  local_40.ObjectArray.ArrayMax = 0;
  local_40.Index = 0xffffffff;
  EVar6 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar10 = Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
  GetObjectsOfClass(pUVar10,&local_40.ObjectArray,true,RF_ClassDefaultObject,
                    EVar6 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    do {
      TObjectIterator<USkinnedMeshComponent>::Advance(&local_40);
      lVar14 = (longlong)local_40.Index;
      if ((local_40.Index < 0) || (local_40.ObjectArray.ArrayNum <= local_40.Index)) {
        if (local_40.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_40.ObjectArray.AllocatorInstance.Data);
        }
        if (bVar5) {
          FlushRenderingCommands();
        }
        return this;
      }
      uVar7 = 0;
      if (local_40.Index < local_40.ObjectArray.ArrayNum) {
        uVar7 = (uint)~local_40.Index >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar11 = (FSkinnedMeshComponentRecreateRenderStateContext *)(*pcVar3)();
        return pFVar11;
      }
      pUVar12 = USkinnedMeshComponent::GetSkinnedAsset
                          (*(USkinnedMeshComponent **)
                            (local_40.ObjectArray.AllocatorInstance.Data + lVar14 * 8));
    } while (pUVar12 != param_1);
    lVar14 = (longlong)local_40.Index;
    uVar7 = 0;
    if (local_40.Index < local_40.ObjectArray.ArrayNum) {
      uVar7 = (uint)~local_40.Index >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar11 = (FSkinnedMeshComponentRecreateRenderStateContext *)(*pcVar3)();
      return pFVar11;
    }
    pFVar13 = FUObjectArray::IndexToObject
                        (&GUObjectArray,
                         *(int *)(*(longlong *)
                                   (local_40.ObjectArray.AllocatorInstance.Data + lVar14 * 8) + 0xc)
                        );
    uVar7 = 0;
    if (((uint)((ulonglong)(pFVar13->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) != 0) {
      lVar14 = (longlong)local_40.Index;
      uVar8 = uVar7;
      if (local_40.Index < local_40.ObjectArray.ArrayNum) {
        uVar8 = (uint)~local_40.Index >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar11 = (FSkinnedMeshComponentRecreateRenderStateContext *)(*pcVar3)();
        return pFVar11;
      }
      UObjectBaseUtility::GetFullName
                (*(UObjectBaseUtility **)(local_40.ObjectArray.AllocatorInstance.Data + lVar14 * 8),
                 &local_50,(UObject *)0x0,None);
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!It->IsUnreachable()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkinnedAsset.cpp"
                         ,0x24c,L"%s");
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar11 = (FSkinnedMeshComponentRecreateRenderStateContext *)(*pcVar3)();
        return pFVar11;
      }
    }
    lVar14 = (longlong)local_40.Index;
    uVar8 = uVar7;
    if (local_40.Index < local_40.ObjectArray.ArrayNum) {
      uVar8 = (uint)~local_40.Index >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar11 = (FSkinnedMeshComponentRecreateRenderStateContext *)(*pcVar3)();
        return pFVar11;
      }
    }
    iVar9 = local_40.ObjectArray.ArrayNum;
    if ((*(byte *)(*(longlong *)(local_40.ObjectArray.AllocatorInstance.Data + lVar14 * 8) + 0x98) &
        2) != 0) {
      lVar14 = (longlong)local_40.Index;
      if (local_40.Index < local_40.ObjectArray.ArrayNum) {
        uVar7 = (uint)~local_40.Index >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pFVar11 = (FSkinnedMeshComponentRecreateRenderStateContext *)(*pcVar3)();
          return pFVar11;
        }
        iVar9 = local_40.ObjectArray.ArrayNum;
      }
      if ((*(byte *)(*(longlong *)(local_40.ObjectArray.AllocatorInstance.Data + lVar14 * 8) + 0x98)
          & 1) == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("It->IsRegistered()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkinnedAsset.cpp"
                           ,0x250,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pFVar11 = (FSkinnedMeshComponentRecreateRenderStateContext *)(*pcVar3)();
          return pFVar11;
        }
        iVar9 = local_40.ObjectArray.ArrayNum;
      }
      lVar14 = (longlong)local_40.Index;
      uVar7 = 0;
      if (local_40.Index < iVar9) {
        uVar7 = (uint)~local_40.Index >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar11 = (FSkinnedMeshComponentRecreateRenderStateContext *)(*pcVar3)();
        return pFVar11;
      }
      (**(code **)(**(longlong **)(local_40.ObjectArray.AllocatorInstance.Data + lVar14 * 8) + 0x3a8
                  ))();
      bVar5 = true;
      iVar9 = local_40.ObjectArray.ArrayNum;
    }
    lVar14 = (longlong)local_40.Index;
    uVar7 = 0;
    if (local_40.Index < iVar9) {
      uVar7 = (uint)~local_40.Index >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar11 = (FSkinnedMeshComponentRecreateRenderStateContext *)(*pcVar3)();
      return pFVar11;
    }
    pUVar1 = *(UObject **)(local_40.ObjectArray.AllocatorInstance.Data + lVar14 * 8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_res8 = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_res8);
    pFVar2 = (FWeakObjectPtr *)(this->MeshComponents).AllocatorInstance.Data;
    if (((pFVar2 <= &local_58) && (&local_58 < pFVar2 + (this->MeshComponents).ArrayMax)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) break;
    iVar9 = (this->MeshComponents).ArrayNum;
    if (iVar9 == (this->MeshComponents).ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,(ForAnyElementType *)this,&(this->MeshComponents).ArrayMax);
    }
    (this->MeshComponents).ArrayNum = iVar9 + 1;
    *(FWeakObjectPtr *)((this->MeshComponents).AllocatorInstance.Data + (longlong)iVar9 * 8) =
         local_58;
  }
  pcVar3 = (code *)swi(3);
  pFVar11 = (FSkinnedMeshComponentRecreateRenderStateContext *)(*pcVar3)();
  return pFVar11;
}

// ~FSkinnedMeshComponentRecreateRenderStateContext @ 14869a830

void __thiscall
FSkinnedMeshComponentRecreateRenderStateContext::~FSkinnedMeshComponentRecreateRenderStateContext
          (FSkinnedMeshComponentRecreateRenderStateContext *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  UObject *pUVar7;
  longlong lVar8;
  uint uVar9;
  
  iVar1 = (this->MeshComponents).ArrayNum;
  uVar9 = 0;
  if (0 < iVar1) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < (this->MeshComponents).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
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
      pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                   ((this->MeshComponents).AllocatorInstance.Data + lVar8 * 8));
      if (pUVar7 != (UObject *)0x0) {
        if (this->bRefreshBounds != false) {
          (**(code **)(*(longlong *)pUVar7 + 0x5b0))(pUVar7);
        }
        if (((pUVar7[3].field_0x20 & 3) == 1) &&
           (cVar5 = (**(code **)(*(longlong *)pUVar7 + 0x380))(pUVar7), cVar5 != '\0')) {
          (**(code **)(*(longlong *)pUVar7 + 0x388))(pUVar7,0);
        }
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 1;
    } while ((int)uVar9 < iVar1);
  }
  pFVar2 = (this->MeshComponents).AllocatorInstance.Data;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar2);
  return;
}

