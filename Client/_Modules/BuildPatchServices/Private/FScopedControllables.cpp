// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 2

// ~FScopedControllables @ 1431bf5b0

void __thiscall
BuildPatchServices::FScopedControllables::~FScopedControllables(FScopedControllables *this)

{
  int iVar1;
  TArray<BuildPatchServices::IControllable_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  ulonglong uVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  int iVar13;
  undefined1 local_res10 [8];
  uint local_res18;
  TArray<BuildPatchServices::IControllable_*,TSizedDefaultAllocator<32>_> *local_res20;
  longlong local_68;
  FScriptContainerElement *local_60;
  LPCRITICAL_SECTION local_58;
  
  local_58 = (LPCRITICAL_SECTION)this->SyncObject;
  if (local_58 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_58);
  local_res18 = (this->RegisteredArray).ArrayNum;
  uVar6 = (ulonglong)(int)local_res18;
  pFVar8 = (this->RegisteredArray).AllocatorInstance.Data;
  pFVar11 = pFVar8 + uVar6 * 8;
  local_60 = pFVar11;
  do {
    if ((this->RegisteredArray).ArrayNum != (int)uVar6) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<BuildPatchServices::IControllable_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar8 == pFVar11) {
      LeaveCriticalSection(local_58);
      pFVar11 = (this->RegisteredArray).AllocatorInstance.Data;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
      return;
    }
    pTVar2 = this->RegistrationArray;
    local_68 = *(longlong *)pFVar8;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    local_res20 = pTVar2;
    if (((pFVar3 <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 < pFVar3 + (longlong)pTVar2->ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar1 = pTVar2->ArrayNum;
    if (iVar1 != 0) {
      pFVar11 = (pTVar2->AllocatorInstance).Data;
      iVar13 = 0;
      lVar12 = 0;
      bVar5 = *(longlong *)pFVar11 != local_68;
      lVar7 = local_68;
      iVar9 = 0;
      do {
        iVar10 = iVar9;
        do {
          lVar12 = lVar12 + 1;
          iVar10 = iVar10 + 1;
          if (iVar1 <= lVar12) break;
        } while (bVar5 == (*(longlong *)(pFVar11 + lVar12 * 8) != lVar7));
        if (bVar5 != false) {
          if (iVar13 != iVar9) {
            memmove(pFVar11 + (longlong)iVar13 * 8,pFVar11 + (longlong)iVar9 * 8,
                    (longlong)(iVar10 - iVar9) << 3);
            lVar7 = local_68;
          }
          iVar13 = iVar13 + (iVar10 - iVar9);
        }
        bVar5 = (bool)(bVar5 ^ 1);
        iVar9 = iVar10;
      } while (lVar12 < iVar1);
      local_res20->ArrayNum = iVar13;
      pFVar11 = local_60;
    }
    pFVar8 = pFVar8 + 8;
    uVar6 = (ulonglong)local_res18;
  } while( true );
}

// Register @ 1431ec750

void __thiscall
BuildPatchServices::FScopedControllables::Register
          (FScopedControllables *this,IControllable *param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  TArray<BuildPatchServices::IControllable_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  IControllable *local_res10;
  
  lpCriticalSection = (LPCRITICAL_SECTION)this->SyncObject;
  local_res10 = param_1;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  pTVar2 = this->RegistrationArray;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_res10) &&
     ((FScriptContainerElement *)&local_res10 < pFVar3 + (longlong)pTVar2->ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = pTVar2->ArrayNum;
  if (iVar6 == pTVar2->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
  }
  pTVar2->ArrayNum = iVar6 + 1;
  *(IControllable **)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_res10;
  pFVar3 = (this->RegisteredArray).AllocatorInstance.Data;
  if (pFVar3 <= (FScriptContainerElement *)&local_res10) {
    if ((FScriptContainerElement *)&local_res10 <
        pFVar3 + (longlong)(this->RegisteredArray).ArrayMax * 8) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  iVar6 = (this->RegisteredArray).ArrayNum;
  piVar1 = &(this->RegisteredArray).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->RegisteredArray).AllocatorInstance,piVar1);
  }
  (this->RegisteredArray).ArrayNum = iVar6 + 1;
  *(IControllable **)((this->RegisteredArray).AllocatorInstance.Data + (longlong)iVar6 * 8) =
       local_res10;
  if (*this->bShouldAbort == false) {
    (**(code **)((longlong)*local_res10 + 8))(local_res10,*this->bIsPaused);
  }
  else {
    (**(code **)((longlong)*local_res10 + 0x10))();
  }
  LeaveCriticalSection(lpCriticalSection);
  return;
}

