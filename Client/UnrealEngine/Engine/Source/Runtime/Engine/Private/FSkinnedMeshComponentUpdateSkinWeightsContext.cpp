// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FSkinnedMeshComponentUpdateSkinWeightsContext @ 1475a59e0

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

FSkinnedMeshComponentUpdateSkinWeightsContext * __thiscall
FSkinnedMeshComponentUpdateSkinWeightsContext::FSkinnedMeshComponentUpdateSkinWeightsContext
          (FSkinnedMeshComponentUpdateSkinWeightsContext *this,USkinnedAsset *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  EInternalObjectFlags EVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  UClass *pUVar8;
  FSkinnedMeshComponentUpdateSkinWeightsContext *pFVar9;
  USkinnedAsset *pUVar10;
  FUObjectItem *pFVar11;
  longlong lVar12;
  undefined8 local_48;
  FString local_40;
  TObjectIterator<USkinnedMeshComponent> local_30;
  
  local_30.Index = 0xffffffff;
  (this->MeshComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshComponents).ArrayNum = 0;
  (this->MeshComponents).ArrayMax = 0;
  local_30.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.ObjectArray.ArrayNum = 0;
  local_30.ObjectArray.ArrayMax = 0;
  EVar4 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar8 = Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
  GetObjectsOfClass(pUVar8,&local_30.ObjectArray,true,RF_ClassDefaultObject,
                    EVar4 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    do {
      do {
        TObjectIterator<USkinnedMeshComponent>::Advance(&local_30);
        lVar12 = (longlong)local_30.Index;
        if ((local_30.Index < 0) || (local_30.ObjectArray.ArrayNum <= local_30.Index)) {
          if (local_30.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_30.ObjectArray.AllocatorInstance.Data);
          }
          return this;
        }
        uVar5 = 0;
        if (local_30.Index < local_30.ObjectArray.ArrayNum) {
          uVar5 = (uint)~local_30.Index >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar9 = (FSkinnedMeshComponentUpdateSkinWeightsContext *)(*pcVar2)();
          return pFVar9;
        }
        pUVar10 = USkinnedMeshComponent::GetSkinnedAsset
                            (*(USkinnedMeshComponent **)
                              (local_30.ObjectArray.AllocatorInstance.Data + lVar12 * 8));
      } while (pUVar10 != param_1);
      lVar12 = (longlong)local_30.Index;
      uVar5 = 0;
      if (local_30.Index < local_30.ObjectArray.ArrayNum) {
        uVar5 = (uint)~local_30.Index >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar9 = (FSkinnedMeshComponentUpdateSkinWeightsContext *)(*pcVar2)();
        return pFVar9;
      }
      pFVar11 = FUObjectArray::IndexToObject
                          (&GUObjectArray,
                           *(int *)(*(longlong *)
                                     (local_30.ObjectArray.AllocatorInstance.Data + lVar12 * 8) +
                                   0xc));
      uVar5 = 0;
      if (((uint)((ulonglong)(pFVar11->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) != 0) {
        lVar12 = (longlong)local_30.Index;
        uVar6 = uVar5;
        if (local_30.Index < local_30.ObjectArray.ArrayNum) {
          uVar6 = (uint)~local_30.Index >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar9 = (FSkinnedMeshComponentUpdateSkinWeightsContext *)(*pcVar2)();
          return pFVar9;
        }
        UObjectBaseUtility::GetFullName
                  (*(UObjectBaseUtility **)
                    (local_30.ObjectArray.AllocatorInstance.Data + lVar12 * 8),&local_40,
                   (UObject *)0x0,None);
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!It->IsUnreachable()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\SkinWeightProfile.cpp"
                           ,0x25,L"%s");
        if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_40.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar9 = (FSkinnedMeshComponentUpdateSkinWeightsContext *)(*pcVar2)();
          return pFVar9;
        }
      }
      lVar12 = (longlong)local_30.Index;
      uVar6 = uVar5;
      if (local_30.Index < local_30.ObjectArray.ArrayNum) {
        uVar6 = (uint)~local_30.Index >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar9 = (FSkinnedMeshComponentUpdateSkinWeightsContext *)(*pcVar2)();
        return pFVar9;
      }
    } while ((*(byte *)(*(longlong *)(local_30.ObjectArray.AllocatorInstance.Data + lVar12 * 8) +
                       0x98) & 2) == 0);
    lVar12 = (longlong)local_30.Index;
    if (local_30.Index < local_30.ObjectArray.ArrayNum) {
      uVar5 = (uint)~local_30.Index >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FSkinnedMeshComponentUpdateSkinWeightsContext *)(*pcVar2)();
      return pFVar9;
    }
    if (((*(byte *)(*(longlong *)(local_30.ObjectArray.AllocatorInstance.Data + lVar12 * 8) + 0x98)
         & 1) == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("It->IsRegistered()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\SkinWeightProfile.cpp"
                           ,0x29,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FSkinnedMeshComponentUpdateSkinWeightsContext *)(*pcVar2)();
      return pFVar9;
    }
    lVar12 = (longlong)local_30.Index;
    uVar5 = 0;
    if (local_30.Index < local_30.ObjectArray.ArrayNum) {
      uVar5 = (uint)~local_30.Index >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) break;
    local_48 = *(undefined8 *)(local_30.ObjectArray.AllocatorInstance.Data + lVar12 * 8);
    pFVar1 = (this->MeshComponents).AllocatorInstance.Data;
    if (((pFVar1 <= (FScriptContainerElement *)&local_48) &&
        ((FScriptContainerElement *)&local_48 <
         pFVar1 + (longlong)(this->MeshComponents).ArrayMax * 8)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FSkinnedMeshComponentUpdateSkinWeightsContext *)(*pcVar2)();
      return pFVar9;
    }
    iVar7 = (this->MeshComponents).ArrayNum;
    if (iVar7 == (this->MeshComponents).ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)this,&(this->MeshComponents).ArrayMax);
    }
    (this->MeshComponents).ArrayNum = iVar7 + 1;
    *(undefined8 *)((this->MeshComponents).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_48;
  }
  pcVar2 = (code *)swi(3);
  pFVar9 = (FSkinnedMeshComponentUpdateSkinWeightsContext *)(*pcVar2)();
  return pFVar9;
}

