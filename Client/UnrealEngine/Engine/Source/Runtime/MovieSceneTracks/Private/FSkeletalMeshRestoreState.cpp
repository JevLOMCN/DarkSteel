// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// SaveState @ 146869d30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FSkeletalMeshRestoreState::SaveState
          (FSkeletalMeshRestoreState *this,USkeletalMeshComponent *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  UObject *pUVar3;
  code *pcVar4;
  FWeakObjectPtr FVar5;
  FWeakObjectPtr FVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  FWeakObjectPtr *pFVar10;
  UClass *pUVar11;
  ForAnyElementType FVar12;
  undefined1 local_res8 [8];
  USkeletalMeshComponent *local_res10;
  UObject *local_res18;
  FWeakObjectPtr local_68;
  int iStack_60;
  int iStack_5c;
  FWeakObjectPtr local_58;
  int iStack_50;
  int iStack_4c;
  TArray<USceneComponent_*,TSizedDefaultAllocator<32>_> local_48;
  
  iVar9 = (this->SkeletalMeshCompEditorParams).ArrayNum;
  piVar1 = &(this->SkeletalMeshCompEditorParams).ArrayNum;
  if (iVar9 < 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,-iVar9,(ForAnyElementType *)this,piVar1,
                       &(this->SkeletalMeshCompEditorParams).ArrayMax);
    DefaultConstructItems<FSkeletalMeshEditorParams,int>
              ((this->SkeletalMeshCompEditorParams).AllocatorInstance.Data + (longlong)iVar8 * 0x10,
               -iVar9);
  }
  else if (0 < iVar9) {
    pFVar2 = (this->SkeletalMeshCompEditorParams).AllocatorInstance.Data;
    if (*piVar1 - iVar9 != 0) {
      memmove(pFVar2,pFVar2 + (longlong)iVar9 * 0x10,(longlong)(*piVar1 - iVar9) << 4);
    }
    *piVar1 = *piVar1 - iVar9;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,(ForAnyElementType *)this,*piVar1,
               &(this->SkeletalMeshCompEditorParams).ArrayMax);
  }
  local_68.ObjectIndex = 0;
  local_68.ObjectSerialNumber = 0;
  if (param_1 != (USkeletalMeshComponent *)0x0) {
    local_res10 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_68,(FObjectPtr)&local_res10);
    iStack_60 = CONCAT31(iStack_60._1_3_,*(undefined1 *)((longlong)&param_1->_padding_ + 4));
    iStack_5c = *(int *)((longlong)&param_1->_padding_ + 4);
    *(undefined1 *)((longlong)&param_1->_padding_ + 4) = 0;
  }
  pFVar10 = (FWeakObjectPtr *)(this->SkeletalMeshCompEditorParams).AllocatorInstance.Data;
  if ((pFVar10 <= &local_68) &&
     (&local_68 < pFVar10 + (longlong)(this->SkeletalMeshCompEditorParams).ArrayMax * 2)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar9 = *piVar1;
  if (iVar9 == (this->SkeletalMeshCompEditorParams).ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,(ForAnyElementType *)this,
                       &(this->SkeletalMeshCompEditorParams).ArrayMax);
  }
  FVar5.ObjectSerialNumber = iStack_5c;
  FVar5.ObjectIndex = iStack_60;
  *piVar1 = iVar9 + 1;
  pFVar10 = (FWeakObjectPtr *)
            ((this->SkeletalMeshCompEditorParams).AllocatorInstance.Data + (longlong)iVar9 * 0x10);
  *pFVar10 = local_68;
  pFVar10[1] = FVar5;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  USceneComponent::GetChildrenComponents((USceneComponent *)param_1,true,&local_48);
  iVar9 = local_48.ArrayNum;
  pFVar2 = local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 8;
  FVar12.Data = local_48.AllocatorInstance.Data;
  while( true ) {
    if (local_48.ArrayNum != iVar9) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<USceneComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar12.Data == pFVar2) break;
    pUVar3 = *(UObject **)FVar12.Data;
    if (pUVar3 != (UObject *)0x0) {
      pUVar11 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
      iVar8 = (int)pUVar11->_padding_;
      if ((iVar8 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar8 * 8) ==
          &pUVar11->_padding_)) {
        local_58.ObjectIndex = 0;
        local_58.ObjectSerialNumber = 0;
        local_res18 = pUVar3;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_res18);
        iStack_50 = CONCAT31(iStack_50._1_3_,pUVar3[0x33].field_0xc);
        iStack_4c = *(int *)&pUVar3[0x31].field_0xc;
        pUVar3[0x33].field_0xc = 0;
        pFVar10 = (FWeakObjectPtr *)(this->SkeletalMeshCompEditorParams).AllocatorInstance.Data;
        if ((pFVar10 <= &local_58) &&
           (&local_58 < pFVar10 + (longlong)(this->SkeletalMeshCompEditorParams).ArrayMax * 2)) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar8 = *piVar1;
        if (iVar8 == (this->SkeletalMeshCompEditorParams).ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x410,(ForAnyElementType *)this,
                             &(this->SkeletalMeshCompEditorParams).ArrayMax);
        }
        FVar6.ObjectSerialNumber = iStack_4c;
        FVar6.ObjectIndex = iStack_50;
        *piVar1 = iVar8 + 1;
        pFVar10 = (FWeakObjectPtr *)
                  ((this->SkeletalMeshCompEditorParams).AllocatorInstance.Data +
                  (longlong)iVar8 * 0x10);
        *pFVar10 = local_58;
        pFVar10[1] = FVar6;
      }
    }
    FVar12.Data = FVar12.Data + 8;
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

