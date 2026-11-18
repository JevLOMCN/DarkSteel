// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// AddPatchedPointerBase @ 1419dcb60

void __thiscall
FPtrTableBase::AddPatchedPointerBase(FPtrTableBase *this,uint param_1,ulong64 param_2)

{
  int *piVar1;
  TArray<FPtrTableBase::FPatchOffset,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  undefined4 uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  uVar8 = (this->PatchLists).ArrayNum;
  piVar1 = &(this->PatchLists).ArrayNum;
  if (uVar8 <= param_1) {
    uVar9 = param_1 + 1;
    if ((int)uVar8 < (int)uVar9) {
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,4,uVar9 - uVar8,(ForAnyElementType *)this,piVar1,
                         &(this->PatchLists).ArrayMax);
      DefaultConstructItems<FPtrTableBase::FPatchOffsetList,int>
                ((this->PatchLists).AllocatorInstance.Data + (longlong)iVar7 * 8,uVar9 - uVar8);
    }
    else {
      if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
      }
      if ((int)uVar9 < (int)uVar8) {
        uVar8 = uVar8 - uVar9;
        if ((int)(uVar8 | uVar9) < 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        if (uVar8 != 0) {
          pFVar3 = (this->PatchLists).AllocatorInstance.Data + (longlong)(int)uVar9 * 8;
          iVar7 = (*piVar1 - uVar8) - uVar9;
          if (iVar7 != 0) {
            memmove(pFVar3,pFVar3 + (longlong)(int)uVar8 * 8,(longlong)iVar7 << 3);
          }
          *piVar1 = *piVar1 - uVar8;
        }
      }
    }
  }
  uVar8 = 0;
  if ((int)param_1 < *piVar1) {
    uVar8 = ~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar2 = &this->PatchOffsets;
  uVar8 = (this->PatchOffsets).ArrayNum;
  piVar1 = &(this->PatchOffsets).ArrayMax;
  pFVar3 = (this->PatchLists).AllocatorInstance.Data + (longlong)(int)param_1 * 8;
  if (uVar8 == *piVar1) {
    uVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->PatchOffsets).ArrayNum = uVar8 + 1;
  uVar9 = 0;
  if ((int)uVar8 < (int)(uVar8 + 1)) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  *(int *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar8 * 8) = (int)param_2;
  uVar4 = *(undefined4 *)pFVar3;
  uVar9 = 0;
  if ((int)uVar8 < (this->PatchOffsets).ArrayNum) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  *(undefined4 *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar8 * 8 + 4) = uVar4;
  *(int *)(pFVar3 + 4) = *(int *)(pFVar3 + 4) + 1;
  *(uint *)pFVar3 = uVar8;
  return;
}

// SavePatchesToArchive @ 141a1bb00

void __thiscall
FPtrTableBase::SavePatchesToArchive(FPtrTableBase *this,FArchive *param_1,uint param_2)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint local_res8 [4];
  uint local_res18 [2];
  uint local_res20 [2];
  
  uVar6 = (this->PatchLists).ArrayNum;
  if (param_2 < uVar6) {
    uVar5 = 0;
    if ((int)param_2 < (int)uVar6) {
      uVar5 = ~param_2 >> 0x1f;
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
    plVar2 = *(longlong **)&param_1->field_0x8;
    pFVar1 = (this->PatchLists).AllocatorInstance.Data + (longlong)(int)param_2 * 8;
    local_res18[0] = *(uint *)(pFVar1 + 4);
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res18);
      }
    }
    else {
      local_res18[0] = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    uVar6 = *(uint *)pFVar1;
    if (uVar6 != 0xffffffff) {
      do {
        uVar5 = 0;
        if ((int)uVar6 < (this->PatchOffsets).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar1 = (this->PatchOffsets).AllocatorInstance.Data + (longlong)(int)uVar6 * 8;
        plVar2 = *(longlong **)&param_1->field_0x8;
        local_res8[0] = *(uint *)pFVar1;
        if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,local_res8);
          }
        }
        else {
          local_res8[0] = *(uint *)*plVar2;
          *plVar2 = *plVar2 + 4;
        }
        uVar6 = *(uint *)(pFVar1 + 4);
      } while (uVar6 != 0xffffffff);
      return;
    }
  }
  else {
    plVar2 = *(longlong **)&param_1->field_0x8;
    local_res20[0] = 0;
    if (*plVar2 + 4U <= (ulonglong)plVar2[1]) {
      *plVar2 = *plVar2 + 4;
      return;
    }
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
      return;
    }
    FArchive::SerializeByteOrderSwapped(param_1,local_res20);
  }
  return;
}

